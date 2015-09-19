/*
 * Copyright (c) 2015
 * All rights reserved.
 *
 * 文件名称： tools.c
 * 文件标识： 见配置管理计划书
 * 摘    要： 小工具集合
 *
 * 当前版本： 1.1
 * 增加了int2string_lcd函数
 * 作 者： 刘帅
 * 完成日期： 2015年8月4日
 *
 * 历史版本： 1.0
 * 作 者： 刘帅
 * 完成日期： 2015年8月3日
 */

#include <stdio.h>
#include <string.h>

/*
 * 函数介绍：int类型转换为字符串
 * 输入参数：x: 要转换的int
 * 输出参数：strDest：目标字符数组地址；
 * 返回值  ：目标字符数组地址strDest
 */
char *int2string(char *strDest, int x)
{
	//assert(strDest != NULL);
	int  tmp = x;
	char   i = 0;
	char len = 1;
	char string[10];
	char flag = 0;		//正负标志

	if(x >= 0)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
		x = -x;
	}

	while (tmp /= 10)
	{
		len++;
	}

	if (flag)
	{
		for (i=0; i < len; i++)
		{
			string[len-i-1] = x%10 + '0';
			x /= 10;
		}
		string[len] = '\0';
	}
	else
	{
		string[0] = '-';
		for (i=0; i < len; i++)
		{
			string[len-i] = x%10 + '0';
			x /= 10;
		}
		string[len+1] = '\0';
	}//end of if

	return strcpy(strDest, string);
}

/*
 * 函数介绍：int类型转换为字符串(供lcd显示之用 带负号)
 * 输入参数：x: 要转换的int，m：lcd字符处示位数
 * 输出参数：strDest：目标字符数组地址；
 * 返回值  ：目标字符数组地址strDest
 */
char *int2string_lcd(char *strDest, int x, char m)
{
	//assert(strDest != NULL);
	int  tmp = x;
	char   i = 0;
	char len = 1;
	char string[10];
	char flag = 0;		//正负标志

	if(x >= 0)
	{
		flag = 1;
	}
	else
	{
		flag = 0;
		x = -x;
	}

	while (tmp /= 10)
	{
		len++;
	}

	if (flag)
	{
		for (i=0; i < len; i++)
		{
			string[m-i-1] = x%10 + '0';
			x /= 10;
		}

		for (i=0; i < m-len; i++)
		{
			string[i] = ' ';
		}
		string[m] = '\0';
	}
	else
	{
		for (i=0; i < m-len-1; i++)
		{
			string[i] = ' ';
		}

		string[i] = '-';

		for (i=0; i < len; i++)
		{
			string[m-i-1] = x%10 + '0';
			x /= 10;
		}

		string[m] = '\0';
	}//end of if

	return strcpy(strDest, string);
}




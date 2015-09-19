#include "EXTI.H"
/************* 外部中断初始化函数 *****************/
void Exti_config(void){
	EXTI_InitTypeDef EXTI_InitStructure;
	EXTI_InitStructure.EXTI_Interrupt=ENABLE;
	EXTI_InitStructure.EXTI_Polity=PolityHigh;
	EXTI_InitStructure.EXTI_Mode=EXT_MODE_Fall;
	
	Ext_Inilize(EXT_INT1, &EXTI_InitStructure);
}
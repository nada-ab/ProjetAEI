/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

#define U_LIMIT yy

typedef struct {
    uint16_t foo;
    uint32_t bar;
} my_struct_t;

volatile my_struct_t defaut;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        //int defaut_tension();
        void Counter_1_Start();
        void Counter_1_Start();
        void ADC_current_Start();
        void ADC_current_IRQ_Start();
        void ADC_SAR_defaut_Start();
        void ADC_SAR_defaut_IntClock_Start();
        void ADC_SAR_defaut_SAR_Start();   
        void Clock_ADC_Start();
        void Clock_Icmd_Start();
        void Clock_Idef_Start();
        void Clock_PWM1_Start();
        void Clock_PWM2_Start();
        void Commande_Start();
        void comp_surintensite_Start();
        
        
    }
}

/*
int defaut_tension (void)
    {
        defaut.bar = xx;
        uint16 U = ADC_defaut_GetResult16;
        ADC_defaut_Start();
        while (ADC_defaut_IsEndConversion != 0){
            if (U < U_LIMIT){
               
            } 
        ADC_defaut_Stop();
        }
}

   */     
        
        
        
   
/* [] END OF FILE */

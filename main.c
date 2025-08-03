#include <stdint.h>
#include <stdbool.h>
#include "clock.h"
#include "wait.h"
#include "tm4c123gh6pm.h"

#define PortE_pin3 0x08 //PE3

/**
 * main.c
 */

void initADC(){
    SYSCTL_RCGCADC_R |= SYSCTL_RCGCADC_R0;
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_R4;

    GPIO_PORTE_AFSEL_R |= PortE_pin3;
    GPIO_PORTE_DEN_R &= ~PortE_pin3;
    GPIO_PORTE_AMSEL_R |= PortE_pin3;

    ADC0_ACTSS_R &= ~(1<<0);
    ADC0_EMUX_R = 0x00;
    ADC0_PSSI_R |= ADC0_PSSI_SS0;
    ADC0_SSMUX0_R = 0x00;
    ADC0_SSCTL0_R = 0x06;
    ADC0_ACTSS_R |=  (1<<0);

}
int main(void)
{
    initSystemClockTo40Mhz();
    initADC();
    ADC0_PSSI_R |= ADC0_PSSI_SS0;

	return 0;
}

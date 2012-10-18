/**
\brief Cross-platform declaration "leds" bsp module.

\author Fabien
*/

#ifndef __LEDS_H
#define __LEDS_H

#include "stdint.h"
 
//=========================== define ==========================================

//=========================== typedef =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

void    leds_init();

void    led1_on();
void    led1_off();
void    led1_toggle();
uint8_t led1_isOn();

void    led2_on();
void    led2_off();
void    led2_toggle();
uint8_t led2_isOn();

void    leds_all_on();
void    leds_all_off();
void    leds_all_toggle();

void    leds_circular_shift();
void    leds_increment();

#endif

#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : �b�m�P�{���ʁ@�e�X�g.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN7] < 10) {
         if (gAD[CN1] > 204) {
            if (gAD[CN1] > 1012) {
               if (get_ping(CN9) < 250) {
                  set_Led(0, LED_ON);
                  wait_ms(1000);
                  set_Led(0, LED_OFF);
                  wait_ms(1000);
               } else {
                  if (get_ping(CN9) < 550) {
                     gPwm[0] = 0x1E; 
                     gPwm[1] = 0x1E; 
                     gPwm[2] = 0x1E; 
                     gPwm[3] = 0x1E; 
                     gPwm[4] = 0x64; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(1000);
                     gPwm[0] = 0x00; 
                     gPwm[1] = 0x00; 
                     gPwm[2] = 0x00; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(1000);
                  } else {
                     set_Led(1, LED_ON);
                     wait_ms(1000);
                     set_Led(1, LED_ON);
                     wait_ms(1000);
                  }
               }
            } else {
               gPwm[0] = 0x64; 
               gPwm[1] = 0x64; 
               gPwm[2] = 0x64; 
               gPwm[3] = 0x64; 
               gPwm[4] = 0x64; 
               gPwm[5] = 0x00; 
               pwm_out();
            }
         } else {
            gPwm[0] = 0x00; 
            gPwm[1] = 0x00; 
            gPwm[2] = 0x00; 
            gPwm[3] = 0x00; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         }
      } else {
         if (gAD[CN7] > 276) {
            gPwm[0] = 0x14; 
            gPwm[1] = 0x94; 
            gPwm[2] = 0x14; 
            gPwm[3] = 0x94; 
            gPwm[4] = 0x64; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            gPwm[0] = 0x94; 
            gPwm[1] = 0x14; 
            gPwm[2] = 0x94; 
            gPwm[3] = 0x14; 
            gPwm[4] = 0x64; 
            gPwm[5] = 0x00; 
            pwm_out();
         }
      }
   }
}
//--------------------------------------------------------------------------------

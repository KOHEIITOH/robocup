#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : テイラーカップ.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN1] > 306) {
         gPwm[0] = 0x64; 
         gPwm[1] = 0x64; 
         gPwm[2] = 0x64; 
         gPwm[3] = 0x64; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x00; 
         pwm_out();
      } else {
         if (get_ping(CN10) > 200) {
            gPwm[0] = 0xB2; 
            gPwm[1] = 0xB2; 
            gPwm[2] = 0xB2; 
            gPwm[3] = 0xB2; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            if (gAD[CN4] > 306) {
               gPwm[0] = 0xE4; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0xE4; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(200);
               gPwm[0] = 0x64; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0x64; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(100);
            } else {
               if (gAD[CN5] > 306) {
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0xE4; 
                  gPwm[2] = 0xE4; 
                  gPwm[3] = 0xE4; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(200);
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0x64; 
                  gPwm[2] = 0x64; 
                  gPwm[3] = 0xE4; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(100);
               } else {
                  gPwm[0] = 0x00; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
               }
            }
         }
      }
   }
}
//--------------------------------------------------------------------------------

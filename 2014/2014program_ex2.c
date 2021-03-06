#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 2014ƒvƒƒOƒ‰ƒ€ŽÀŒ±.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   if (gAD[CN6] > 20) {
      if (gAD[CN1] < 818) {
         gPwm[0] = 0x64; 
         gPwm[1] = 0x64; 
         gPwm[2] = 0x64; 
         gPwm[3] = 0x64; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x32; 
         pwm_out();
      } else {
         if (get_ping(CN8) < 200) {
            gPwm[0] = 0xE4; 
            gPwm[1] = 0x64; 
            gPwm[2] = 0x64; 
            gPwm[3] = 0xE4; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
            wait_ms(200);
         } else {
            if (get_ping(CN9) < 200) {
               gPwm[0] = 0x64; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0x64; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(200);
            } else {
               if (gAD[CN2] > 920) {
                  gPwm[0] = 0x64; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x64; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
               } else {
                  if (gAD[CN3] < 920) {
                     gPwm[0] = 0x00; 
                     gPwm[1] = 0x64; 
                     gPwm[2] = 0x64; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                  } else {
                  }
               }
            }
         }
      }
   } else {
      if (gAD[CN6] > 276) {
         gPwm[0] = 0x94; 
         gPwm[1] = 0x14; 
         gPwm[2] = 0x94; 
         gPwm[3] = 0x14; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x00; 
         pwm_out();
      } else {
         gPwm[0] = 0x14; 
         gPwm[1] = 0x94; 
         gPwm[2] = 0x14; 
         gPwm[3] = 0x94; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x00; 
         pwm_out();
      }
   }
}
//--------------------------------------------------------------------------------

#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : test.C
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
         if (gAD[CN4] > 306) {
            gPwm[0] = 0x64; 
            gPwm[1] = 0xE4; 
            gPwm[2] = 0xE4; 
            gPwm[3] = 0x64; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            if (gAD[CN5] > 306) {
               gPwm[0] = 0xE4; 
               gPwm[1] = 0x64; 
               gPwm[2] = 0x64; 
               gPwm[3] = 0xE4; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
            } else {
               gPwm[0] = 0x1E; 
               gPwm[1] = 0x9E; 
               gPwm[2] = 0x1E; 
               gPwm[3] = 0x9E; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
            }
         }
      }
   }
}
//--------------------------------------------------------------------------------

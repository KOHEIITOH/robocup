#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : CN6センサーテスト.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   int n1,n2;
   while (TRUE) {
      if (gAD[CN6] > 511) {
         for (n1 = 0; n1 < 10; n1++) {
            if (gAD[CN6] > 511) {
               gPwm[0] = 0xC6; 
               gPwm[1] = 0x46; 
               gPwm[2] = 0x46; 
               gPwm[3] = 0xC6; 
               gPwm[4] = 0x64; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(100);
            } else {
               gPwm[0] = 0x00; 
               gPwm[1] = 0x00; 
               gPwm[2] = 0x00; 
               gPwm[3] = 0x00; 
               gPwm[4] = 0x64; 
               gPwm[5] = 0x00; 
               pwm_out();
            }
         }
         for (n2 = 0; n2 < 8; n2++) {
            if (gAD[CN3] > 716) {
               gPwm[0] = 0x00; 
               gPwm[1] = 0x00; 
               gPwm[2] = 0x00; 
               gPwm[3] = 0x00; 
               gPwm[4] = 0x64; 
               gPwm[5] = 0x00; 
               pwm_out();
            } else {
               gPwm[0] = 0x46; 
               gPwm[1] = 0x46; 
               gPwm[2] = 0x46; 
               gPwm[3] = 0x46; 
               gPwm[4] = 0x64; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(100);
            }
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
   }
}
//--------------------------------------------------------------------------------

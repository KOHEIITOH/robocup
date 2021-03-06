#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 方位センサーテスト.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN7] < 20) {
         gPwm[0] = 0x00; 
         gPwm[1] = 0x00; 
         gPwm[2] = 0x00; 
         gPwm[3] = 0x00; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x00; 
         pwm_out();
      } else {
         if (gAD[CN7] > 276) {
            gPwm[0] = 0x94; 
            gPwm[1] = 0x14; 
            gPwm[2] = 0x94; 
            gPwm[3] = 0x14; 
            gPwm[4] = 0x64; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            gPwm[0] = 0x14; 
            gPwm[1] = 0x94; 
            gPwm[2] = 0x14; 
            gPwm[3] = 0x94; 
            gPwm[4] = 0x64; 
            gPwm[5] = 0x00; 
            pwm_out();
         }
      }
   }
}
//--------------------------------------------------------------------------------

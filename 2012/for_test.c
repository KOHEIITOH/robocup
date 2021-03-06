#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : forƒeƒXƒg.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   int n1;
   while (TRUE) {
      for (n1 = 0; n1 < 20; n1++) {
         if (gAD[CN1] > 306) {
            gPwm[0] = 0x14; 
            gPwm[1] = 0x14; 
            gPwm[2] = 0x14; 
            gPwm[3] = 0x14; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
            wait_ms(500);
         } else {
            gPwm[0] = 0x14; 
            gPwm[1] = 0x94; 
            gPwm[2] = 0x14; 
            gPwm[3] = 0x94; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
            wait_ms(1000);
         }
      }
      gPwm[0] = 0x94; 
      gPwm[1] = 0x94; 
      gPwm[2] = 0x94; 
      gPwm[3] = 0x94; 
      gPwm[4] = 0x00; 
      gPwm[5] = 0x00; 
      pwm_out();
      wait_ms(2000);
   }
}
//--------------------------------------------------------------------------------

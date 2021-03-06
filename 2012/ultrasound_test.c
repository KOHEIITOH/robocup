#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : ’´‰¹”g@‚Ä‚·‚Æ.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (get_ping(CN9) > 500) {
         gPwm[0] = 0xE4; 
         gPwm[1] = 0xE4; 
         gPwm[2] = 0xE4; 
         gPwm[3] = 0xE4; 
         gPwm[4] = 0x00; 
         gPwm[5] = 0x00; 
         pwm_out();
         wait_ms(100);
      } else {
         if (get_ping(CN10) < 400) {
            gPwm[0] = 0x64; 
            gPwm[1] = 0x64; 
            gPwm[2] = 0x64; 
            gPwm[3] = 0x64; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
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
//--------------------------------------------------------------------------------

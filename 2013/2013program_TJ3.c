#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 2013ÉvÉçÉOÉâÉÄ.Tj3ó\îı.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN7] < 20) {
         if (gAD[CN1] < 869) {
            if (gAD[CN6] > 818) {
               if (get_ping(CN8) < 240) {
                  gPwm[0] = 0xA8; 
                  gPwm[1] = 0x28; 
                  gPwm[2] = 0xA8; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(300);
               } else {
                  if (get_ping(CN9) < 240) {
                     gPwm[0] = 0x28; 
                     gPwm[1] = 0xA8; 
                     gPwm[2] = 0x28; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(300);
                  } else {
                  }
               }
            } else {
               gPwm[0] = 0x64; 
               gPwm[1] = 0x64; 
               gPwm[2] = 0x00; 
               gPwm[3] = 0x00; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
            }
         } else {
            if (gAD[CN4] < 869) {
               gPwm[0] = 0xE4; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0x00; 
               gPwm[3] = 0x00; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(300);
               gPwm[0] = 0x00; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0x00; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(300);
            } else {
               if (gAD[CN5] < 869) {
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0xE4; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(300);
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x64; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(300);
               } else {
                  if (gAD[CN2] < 869) {
                     gPwm[0] = 0x64; 
                     gPwm[1] = 0x00; 
                     gPwm[2] = 0xE4; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                  } else {
                     if (gAD[CN3] < 869) {
                        gPwm[0] = 0x00; 
                        gPwm[1] = 0x64; 
                        gPwm[2] = 0x64; 
                        gPwm[3] = 0x00; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                     } else {
                        if (get_ping(CN10) > 550) {
                           gPwm[0] = 0xC6; 
                           gPwm[1] = 0xC6; 
                           gPwm[2] = 0x00; 
                           gPwm[3] = 0x00; 
                           gPwm[4] = 0x00; 
                           gPwm[5] = 0x00; 
                           pwm_out();
                        } else {
                           if (get_ping(CN9) < 250) {
                              gPwm[0] = 0x00; 
                              gPwm[1] = 0xC6; 
                              gPwm[2] = 0xC6; 
                              gPwm[3] = 0x00; 
                              gPwm[4] = 0x00; 
                              gPwm[5] = 0x00; 
                              pwm_out();
                           } else {
                              if (get_ping(CN8) < 250) {
                                 gPwm[0] = 0xC6; 
                                 gPwm[1] = 0x00; 
                                 gPwm[2] = 0x46; 
                                 gPwm[3] = 0x00; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              } else {
                                 if (get_ping(CN10) < 100) {
                                    gPwm[0] = 0x46; 
                                    gPwm[1] = 0x46; 
                                    gPwm[2] = 0x00; 
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
                  }
               }
            }
         }
      } else {
         if (gAD[CN7] > 276) {
            gPwm[0] = 0x8F; 
            gPwm[1] = 0x0F; 
            gPwm[2] = 0x8F; 
            gPwm[3] = 0x00; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            gPwm[0] = 0x0F; 
            gPwm[1] = 0x8F; 
            gPwm[2] = 0x0F; 
            gPwm[3] = 0x00; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         }
      }
   }
}
//--------------------------------------------------------------------------------

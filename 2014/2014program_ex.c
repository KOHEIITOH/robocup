#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 2014プログラム（普）実験.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN7] > 20) {
         if (gAD[CN1] < 204) {
            gPwm[0] = 0x64; 
            gPwm[1] = 0x64; 
            gPwm[2] = 0x64; 
            gPwm[3] = 0x64; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x46; 
            pwm_out();
         } else {
            if (gAD[CN8] < 204) {
               gPwm[0] = 0xE4; 
               gPwm[1] = 0x64; 
               gPwm[2] = 0x64; 
               gPwm[3] = 0xE4; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
            } else {
               if (get_ping(CN9) < 200) {
                  gPwm[0] = 0x64; 
                  gPwm[1] = 0xE4; 
                  gPwm[2] = 0xE4; 
                  gPwm[3] = 0x64; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
               } else {
                  if (gAD[CN2] < 204) {
                     gPwm[0] = 0x64; 
                     gPwm[1] = 0x00; 
                     gPwm[2] = 0x00; 
                     gPwm[3] = 0x64; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                  } else {
                     if (gAD[CN3] < 204) {
                        gPwm[0] = 0x00; 
                        gPwm[1] = 0x64; 
                        gPwm[2] = 0x64; 
                        gPwm[3] = 0x00; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                     } else {
                        if (gAD[CN4] < 920) {
                           gPwm[0] = 0xE4; 
                           gPwm[1] = 0xE4; 
                           gPwm[2] = 0xE4; 
                           gPwm[3] = 0xE4; 
                           gPwm[4] = 0x00; 
                           gPwm[5] = 0x00; 
                           pwm_out();
                        } else {
                           if (gAD[CN5] > 920) {
                              gPwm[0] = 0xE4; 
                              gPwm[1] = 0xE4; 
                              gPwm[2] = 0xE4; 
                              gPwm[3] = 0xE4; 
                              gPwm[4] = 0x00; 
                              gPwm[5] = 0x00; 
                              pwm_out();
                           } else {
                              if (gAD[CN8] < 716) {
                                 gPwm[0] = 0xD0; 
                                 gPwm[1] = 0x50; 
                                 gPwm[2] = 0x50; 
                                 gPwm[3] = 0xD0; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              } else {
                                 if (get_ping(CN9) < 700) {
                                    gPwm[0] = 0x50; 
                                    gPwm[1] = 0xD0; 
                                    gPwm[2] = 0xD0; 
                                    gPwm[3] = 0x50; 
                                    gPwm[4] = 0x00; 
                                    gPwm[5] = 0x00; 
                                    pwm_out();
                                 } else {
                                    if (get_ping(CN10) < 200) {
                                       gPwm[0] = 0xE4; 
                                       gPwm[1] = 0xE4; 
                                       gPwm[2] = 0xE4; 
                                       gPwm[3] = 0xE4; 
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
                        }
                     }
                  }
               }
            }
         }
      } else {
         if (gAD[CN7] > 276) {
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
}
//--------------------------------------------------------------------------------

#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : ééçá.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   while (TRUE) {
      if (gAD[CN7] < 40) {
         if (gAD[CN1] < 716) {
            gPwm[0] = 0x64; 
            gPwm[1] = 0x64; 
            gPwm[2] = 0x64; 
            gPwm[3] = 0x64; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0xE4; 
            pwm_out();
         } else {
            if (gAD[CN2] < 716) {
               if (get_ping(CN8) < 300) {
                  gPwm[0] = 0x00; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
               } else {
                  gPwm[0] = 0x50; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x50; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  gPwm[0] = 0x00; 
                  gPwm[1] = 0x00; 
                  gPwm[2] = 0x00; 
                  gPwm[3] = 0x00; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(200);
               }
            } else {
               if (gAD[CN3] < 716) {
                  if (get_ping(CN9) < 300) {
                     gPwm[0] = 0x00; 
                     gPwm[1] = 0x00; 
                     gPwm[2] = 0x00; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                  } else {
                     gPwm[0] = 0x00; 
                     gPwm[1] = 0x50; 
                     gPwm[2] = 0x50; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                  }
               } else {
                  if (gAD[CN4] < 716) {
                     gPwm[0] = 0xD0; 
                     gPwm[1] = 0xD0; 
                     gPwm[2] = 0xD0; 
                     gPwm[3] = 0xD0; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(400);
                     if (get_ping(CN8) < 300) {
                        gPwm[0] = 0x00; 
                        gPwm[1] = 0x00; 
                        gPwm[2] = 0x00; 
                        gPwm[3] = 0x00; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                     } else {
                        gPwm[0] = 0xD0; 
                        gPwm[1] = 0x50; 
                        gPwm[2] = 0x50; 
                        gPwm[3] = 0xD0; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(400);
                     }
                  } else {
                     if (gAD[CN5] < 716) {
                        gPwm[0] = 0xD0; 
                        gPwm[1] = 0xD0; 
                        gPwm[2] = 0xD0; 
                        gPwm[3] = 0xD0; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(400);
                        if (get_ping(CN9) < 300) {
                           gPwm[0] = 0x00; 
                           gPwm[1] = 0x00; 
                           gPwm[2] = 0x00; 
                           gPwm[3] = 0x00; 
                           gPwm[4] = 0x00; 
                           gPwm[5] = 0x00; 
                           pwm_out();
                        } else {
                           gPwm[0] = 0x50; 
                           gPwm[1] = 0xD0; 
                           gPwm[2] = 0xD0; 
                           gPwm[3] = 0x50; 
                           gPwm[4] = 0x00; 
                           gPwm[5] = 0x00; 
                           pwm_out();
                           wait_ms(400);
                        }
                     } else {
                        if (get_ping(CN10) < 500) {
                           if (get_ping(CN9) < 500) {
                              if (get_ping(CN8) < 500) {
                                 gPwm[0] = 0x00; 
                                 gPwm[1] = 0x00; 
                                 gPwm[2] = 0x00; 
                                 gPwm[3] = 0x00; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              } else {
                                 gPwm[0] = 0x3C; 
                                 gPwm[1] = 0xBC; 
                                 gPwm[2] = 0xBC; 
                                 gPwm[3] = 0x3C; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              }
                           } else {
                              if (get_ping(CN8) < 500) {
                                 if (get_ping(CN9) < 500) {
                                    gPwm[0] = 0x00; 
                                    gPwm[1] = 0x00; 
                                    gPwm[2] = 0x00; 
                                    gPwm[3] = 0x00; 
                                    gPwm[4] = 0x00; 
                                    gPwm[5] = 0x00; 
                                    pwm_out();
                                 } else {
                                    gPwm[0] = 0xBC; 
                                    gPwm[1] = 0x3C; 
                                    gPwm[2] = 0x3C; 
                                    gPwm[3] = 0xBC; 
                                    gPwm[4] = 0x00; 
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
                           }
                        } else {
                           gPwm[0] = 0xC6; 
                           gPwm[1] = 0xC6; 
                           gPwm[2] = 0xC6; 
                           gPwm[3] = 0xC6; 
                           gPwm[4] = 0x00; 
                           gPwm[5] = 0x00; 
                           pwm_out();
                        }
                     }
                  }
               }
            }
         }
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

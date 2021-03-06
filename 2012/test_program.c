#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : テストプログラム.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   int n1,n2;
   while (TRUE) {
      if (gAD[CN7] < 20) {
         if (gAD[CN1] > 102) {
            gV[VAR_A] = 1200;
            if (get_ping(CN9) > gV[VAR_A]) {
               if (gAD[CN8] > 1012) {
                  if (get_ping(CN10) < 250) {
                     gPwm[0] = 0xA8; 
                     gPwm[1] = 0x28; 
                     gPwm[2] = 0xA8; 
                     gPwm[3] = 0x28; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(400);
                  } else {
                     if (get_ping(CN10) < 450) {
                        gPwm[0] = 0x64; 
                        gPwm[1] = 0x64; 
                        gPwm[2] = 0x64; 
                        gPwm[3] = 0x64; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(400);
                     } else {
                        gPwm[0] = 0x28; 
                        gPwm[1] = 0xA8; 
                        gPwm[2] = 0x28; 
                        gPwm[3] = 0xA8; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(400);
                     }
                  }
               } else {
               }
            } else {
               gPwm[0] = 0x64; 
               gPwm[1] = 0x64; 
               gPwm[2] = 0x64; 
               gPwm[3] = 0x64; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
            }
         } else {
            if (gAD[CN4] > 102) {
               gPwm[0] = 0x64; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0x64; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(200);
               gPwm[0] = 0xE4; 
               gPwm[1] = 0xE4; 
               gPwm[2] = 0xE4; 
               gPwm[3] = 0xE4; 
               gPwm[4] = 0x00; 
               gPwm[5] = 0x00; 
               pwm_out();
               wait_ms(100);
            } else {
               if (gAD[CN5] > 102) {
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0x64; 
                  gPwm[2] = 0x64; 
                  gPwm[3] = 0xE4; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(200);
                  gPwm[0] = 0xE4; 
                  gPwm[1] = 0xE4; 
                  gPwm[2] = 0xE4; 
                  gPwm[3] = 0xE4; 
                  gPwm[4] = 0x00; 
                  gPwm[5] = 0x00; 
                  pwm_out();
                  wait_ms(100);
               } else {
                  if (gAD[CN2] > 102) {
                     gPwm[0] = 0x64; 
                     gPwm[1] = 0xE4; 
                     gPwm[2] = 0xE4; 
                     gPwm[3] = 0x64; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(200);
                     gPwm[0] = 0x64; 
                     gPwm[1] = 0x64; 
                     gPwm[2] = 0x64; 
                     gPwm[3] = 0x64; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(100);
                  } else {
                     if (gAD[CN3] > 102) {
                        gPwm[0] = 0xE4; 
                        gPwm[1] = 0x64; 
                        gPwm[2] = 0x64; 
                        gPwm[3] = 0xE4; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(200);
                        gPwm[0] = 0x64; 
                        gPwm[1] = 0x64; 
                        gPwm[2] = 0x64; 
                        gPwm[3] = 0x64; 
                        gPwm[4] = 0x00; 
                        gPwm[5] = 0x00; 
                        pwm_out();
                        wait_ms(100);
                     } else {
                        if (gAD[CN6] > 204) {
                           for (n1 = 0; n1 < 10; n1++) {
                              if (gAD[CN6] > 204) {
                                 gPwm[0] = 0x3C; 
                                 gPwm[1] = 0xBC; 
                                 gPwm[2] = 0xBC; 
                                 gPwm[3] = 0x3C; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                                 wait_ms(300);
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
                           for (n2 = 0; n2 < 8; n2++) {
                              if (gAD[CN3] > 102) {
                                 gPwm[0] = 0x00; 
                                 gPwm[1] = 0x00; 
                                 gPwm[2] = 0x00; 
                                 gPwm[3] = 0x00; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              } else {
                                 gPwm[0] = 0xBC; 
                                 gPwm[1] = 0xBC; 
                                 gPwm[2] = 0xBC; 
                                 gPwm[3] = 0xBC; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                                 wait_ms(100);
                              }
                           }
                        } else {
                           if (get_ping(CN9) > 450) {
                              gPwm[0] = 0xC6; 
                              gPwm[1] = 0xC6; 
                              gPwm[2] = 0xC6; 
                              gPwm[3] = 0xC6; 
                              gPwm[4] = 0x00; 
                              gPwm[5] = 0x00; 
                              pwm_out();
                              wait_ms(100);
                           } else {
                              if (get_ping(CN9) < 300) {
                                 gPwm[0] = 0x46; 
                                 gPwm[1] = 0x46; 
                                 gPwm[2] = 0x46; 
                                 gPwm[3] = 0x46; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                                 wait_ms(100);
                              } else {
                                 if (get_ping(CN10) < 250) {
                                    gPwm[0] = 0x28; 
                                    gPwm[1] = 0xA8; 
                                    gPwm[2] = 0xA8; 
                                    gPwm[3] = 0x28; 
                                    gPwm[4] = 0x00; 
                                    gPwm[5] = 0x00; 
                                    pwm_out();
                                    wait_ms(100);
                                 } else {
                                    if (get_ping(CN10) > 550) {
                                       gPwm[0] = 0xA8; 
                                       gPwm[1] = 0x28; 
                                       gPwm[2] = 0x28; 
                                       gPwm[3] = 0xA8; 
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
                  }
               }
            }
         }
      } else {
         if (gAD[CN7] > 276) {
            gPwm[0] = 0x8F; 
            gPwm[1] = 0x0F; 
            gPwm[2] = 0x8F; 
            gPwm[3] = 0x0F; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         } else {
            gPwm[0] = 0x0F; 
            gPwm[1] = 0x8F; 
            gPwm[2] = 0x0F; 
            gPwm[3] = 0x8F; 
            gPwm[4] = 0x00; 
            gPwm[5] = 0x00; 
            pwm_out();
         }
      }
   }
}
//--------------------------------------------------------------------------------

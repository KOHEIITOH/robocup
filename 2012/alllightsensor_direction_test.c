#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 全光センサー＋方位　テスト.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   int n1,n2;
   while (TRUE) {
      if (gAD[CN7] < 10) {
         if (gAD[CN1] > 613) {
            if (gAD[CN1] > 1012) {
               if (get_ping(CN9) < 250) {
                  set_Led(0, LED_ON);
                  wait_ms(1000);
                  set_Led(0, LED_OFF);
                  wait_ms(1000);
               } else {
                  if (get_ping(CN9) < 550) {
                     gPwm[0] = 0x1E; 
                     gPwm[1] = 0x1E; 
                     gPwm[2] = 0x1E; 
                     gPwm[3] = 0x1E; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(1000);
                     gPwm[0] = 0x00; 
                     gPwm[1] = 0x00; 
                     gPwm[2] = 0x00; 
                     gPwm[3] = 0x00; 
                     gPwm[4] = 0x00; 
                     gPwm[5] = 0x00; 
                     pwm_out();
                     wait_ms(1000);
                  } else {
                     set_Led(1, LED_ON);
                     wait_ms(1000);
                     set_Led(1, LED_ON);
                     wait_ms(1000);
                  }
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
            if (gAD[CN4] > 613) {
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
               if (gAD[CN5] > 613) {
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
                  if (gAD[CN2] > 613) {
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
                     if (gAD[CN3] > 613) {
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
                        if (gAD[CN6] > 818) {
                           for (n1 = 0; n1 < 10; n1++) {
                              if (gAD[CN6] > 613) {
                                 gPwm[0] = 0x46; 
                                 gPwm[1] = 0xC6; 
                                 gPwm[2] = 0xC6; 
                                 gPwm[3] = 0x46; 
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
                           for (n2 = 0; n2 < 8; n2++) {
                              if (gAD[CN3] > 613) {
                                 gPwm[0] = 0x00; 
                                 gPwm[1] = 0x00; 
                                 gPwm[2] = 0x00; 
                                 gPwm[3] = 0x00; 
                                 gPwm[4] = 0x00; 
                                 gPwm[5] = 0x00; 
                                 pwm_out();
                              } else {
                                 gPwm[0] = 0xC6; 
                                 gPwm[1] = 0xC6; 
                                 gPwm[2] = 0xC6; 
                                 gPwm[3] = 0xC6; 
                                 gPwm[4] = 0x00; 
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

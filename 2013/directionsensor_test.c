#include "D_TJ3.h"
#include "D_I2C.h"
#include "D_SIO.h"
//--------------------------------------------------------------------------------
// Program Name : 方位センサーテスト.C
//--------------------------------------------------------------------------------
void user_main(void)
{
   if (judge_dir(0, 0, 10)) {
      set_Led(0, LED_ON);
   } else {
   }
}
//--------------------------------------------------------------------------------

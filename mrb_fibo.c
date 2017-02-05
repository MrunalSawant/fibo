#include "mruby.h"
#include "mruby/irep.h"
#include "fibonacci.c"
 int main(void)
 {
   mrb_state *mrb = mrb_open();
   if (!mrb) {/* handle error */}
   mrb_load_irep(mrb, fibo_sym);
   mrb_close(mrb);
 }

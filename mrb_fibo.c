#include "mruby.h"
#include <mruby/compile.h>
/*
#include "mruby/irep.h"
#include "fibonacci.c"
*/
 int main(void)
 {
   mrb_state *mrb = mrb_open();
   if (!mrb) {printf("Error opening mrb\n");}
   /* mrb_load_irep(mrb, fibo_sym); */
   mrb_load_string(mrb, "def f(n); n<2 ? n : f(n-1)+f(n-2); end; p(f(32));");
   mrb_close(mrb);
 }

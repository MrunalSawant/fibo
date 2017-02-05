Recursive Fibonacci function defined in many languages:
=======================================================

Just comparing various langs for fun. Should not be considered as true benchmarks of any kind.


C
==

To Compile:
-----------
$ gcc -std=c99 fibo.c -o fibo

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 8594 Feb  4 20:29 fibo

Dependencies:
-------------

$ ldd ./fibo
  linux-vdso.so.1 =>  (0x00007ffef8e55000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f4fe1545000)
  /lib64/ld-linux-x86-64.so.2 (0x000055be39a12000)

Runtime:
--------

$ time ./fibo
2178309

real  0m0.128s
user  0m0.080s
sys   0m0.016s


Lua
===


mRuby
====


Ruby
====


Perl
====


Javascript
==========


Crystal
=======


Python
======


Haskell
=======


Elixir
======


Rust
====


Go
===


Sh
===



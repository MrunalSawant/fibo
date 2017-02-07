Recursive Fibonacci function defined in various languages:
==========================================================

Comparing various langs for fun. Should not be considered as true benchmarks of any kind.
Timmings on 2-core Intel(R) Core(TM) i7-5600U CPU @ 2.60GHz running Ubuntu 14.04


[C](https://gcc.gnu.org/)
==

To Compile:
-----------

``````
$ gcc -std=c99 fibo.c -o fibo

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 8594 Feb  4 20:29 fibo
``````

Dependencies:
-------------

``````
$ ldd ./fibo
  linux-vdso.so.1 =>  (0x00007ffef8e55000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f4fe1545000)
  /lib64/ld-linux-x86-64.so.2 (0x000055be39a12000)
``````

Runtime:
--------

``````
$ time ./fibo
2178309

real  0m0.128s
user  0m0.080s
sys   0m0.016s
``````


***

[Lua](https://www.lua.org/)
===

``````
$ time lua fibo.lua
2178309

real  0m0.554s
user  0m0.368s
sys   0m0.092s

$ time luajit fibo.lua
2178309

real  0m0.073s
user  0m0.036s
sys   0m0.008s
``````


***

[mRuby](http://mruby.org/)
=====
`````
$ time mruby fibo.rb
fibo(32) = 2178309

real  0m1.865s
user  0m1.680s
sys   0m0.032s

$  mrbc -B fibo_sym fibonacci.rb
$  gcc -std=c99 -I /home/shashank/mruby/include mrb_fibo.c /home/shashank/mruby/build/host/lib/libmruby.a -lm -o mrb_fibo

$ ltr mrb_fibo
-rwxrwxr-x 1 shashank shashank 1228277 Feb  6 22:28 mrb_fibo

$ ldd mrb_fibo
  linux-vdso.so.1 =>  (0x00007ffead1f2000)
  libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f3fd730d000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f3fd6f48000)
  /lib64/ld-linux-x86-64.so.2 (0x000055c938a56000)

$ time ./mrb_fibo
2178309

real  0m1.718s
user  0m1.504s
sys   0m0.008s

`````
***

[Crystal](http://crystal-lang.org/)
=======

`````
$ time crystal fibo.cr
2178309

real  0m6.818s
user  0m4.944s
sys   0m2.512s

$ crystal build fibo.cr

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 1084441 Feb  5 02:54 fibo

$ ldd fibo
  linux-vdso.so.1 =>  (0x00007ffe6cdb3000)
  libpthread.so.0 => /lib/x86_64-linux-gnu/libpthread.so.0 (0x00007f41e28ec000)
  librt.so.1 => /lib/x86_64-linux-gnu/librt.so.1 (0x00007f41e26e4000)
  libdl.so.2 => /lib/x86_64-linux-gnu/libdl.so.2 (0x00007f41e24df000)
  libgcc_s.so.1 => /lib/x86_64-linux-gnu/libgcc_s.so.1 (0x00007f41e22c8000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f41e1f03000)
  /lib64/ld-linux-x86-64.so.2 (0x000055e05adb7000)

$ time ./fibo
2178309

real  0m0.123s
user  0m0.092s
sys   0m0.008s
`````

***

[Ruby](https://www.ruby-lang.org/)
====

`````
$ time ruby fibo.rb
fibo(32) = 2178309

real  0m2.842s
user  0m1.576s
sys   0m0.488s
`````

***

[Perl](https://www.perl.org/)
====

`````
 ± time perl fibo.pl
2178309

real  0m6.748s
user  0m5.180s
sys   0m0.208s
`````

***

[Python](https://www.python.org/)
======

`````
$ time python fibo.py
2178309

real  0m0.843s
user  0m0.764s
sys   0m0.012s

$ time pypy fibo.py
2178309

real  0m0.867s
user  0m0.476s
sys   0m0.140s
`````
***

[Javascript](https://www.javascript.com/)
==========
`````
$ time node fibo.js
2178309

real  0m0.273s
user  0m0.116s
sys   0m0.052s
````
***

[Haskell](https://www.haskell.org/ghc/)
=======

To Compile:
-----------

``````
$ ghc -o fibo fibo.hs

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 1104363 Feb  4 20:44 fibo
``````

Dependencies:
-------------

``````
$ ldd fibo
  linux-vdso.so.1 =>  (0x00007ffd3b790000)
  libgmp.so.10 => /usr/lib/x86_64-linux-gnu/libgmp.so.10 (0x00007f1e67e47000)
  libffi.so.6 => /usr/lib/x86_64-linux-gnu/libffi.so.6 (0x00007f1e67c3f000)
  libm.so.6 => /lib/x86_64-linux-gnu/libm.so.6 (0x00007f1e67938000)
  librt.so.1 => /lib/x86_64-linux-gnu/librt.so.1 (0x00007f1e67730000)
  libdl.so.2 => /lib/x86_64-linux-gnu/libdl.so.2 (0x00007f1e6752c000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f1e67166000)
  libpthread.so.0 => /lib/x86_64-linux-gnu/libpthread.so.0 (0x00007f1e66f48000)
  /lib64/ld-linux-x86-64.so.2 (0x0000563647a27000)
``````

Runtime:
--------
``````
$ time ./fibo
2178309

real  0m1.108s
user  0m1.012s
sys   0m0.048s
``````

***


[Elixir](http://www.elixir-lang.org/)
======

`````
$ time elixir fibo.exs
2178309

real  0m4.503s
user  0m2.048s
sys 0m0.888s
`````

***

[Rust](https://www.rust-lang.org)
====

`````
$ time rustc fibo.rs

real  0m2.036s
user  0m1.084s
sys 0m0.376s

$ time ./fibo
2178309

real  0m0.055s
user  0m0.028s
sys 0m0.004s

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 2071874 Feb  5 04:30 fibo

$ ldd fibo
  linux-vdso.so.1 =>  (0x00007ffc453e5000)
  libdl.so.2 => /lib/x86_64-linux-gnu/libdl.so.2 (0x00007fb96601b000)
  libpthread.so.0 => /lib/x86_64-linux-gnu/libpthread.so.0 (0x00007fb965dfd000)
  libgcc_s.so.1 => /lib/x86_64-linux-gnu/libgcc_s.so.1 (0x00007fb965be5000)
  libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007fb965820000)
  /lib64/ld-linux-x86-64.so.2 (0x0000558d816c3000)
`````

***

[Go](https://golang.org)
===

`````
$ go build fibo.go

$ ls -l fibo
-rwxrwxr-x 1 shashank shashank 2244096 Feb  5 04:39 fibo

$ ldd fibo
  not a dynamic executable

$ time ./fibo
2178309

real  0m0.291s
user  0m0.092s
sys   0m0.036s
`````
***

[Bash](https://www.gnu.org/software/bash/)
====


***

Versions used:
--------------
````
$ perl --version

This is perl 5, version 18, subversion 2 (v5.18.2) built for x86_64-linux-gnu-thread-multi
(with 44 registered patches, see perl -V for more detail)

$ ruby --version
ruby 2.3.0p0 (2015-12-25 revision 53290) [x86_64-linux]

$ mruby --version
mruby 1.2.0 (2015-11-17)

$ gcc --version
gcc (Ubuntu 4.8.5-2ubuntu1~14.04.1) 4.8.5

$ crystal --version
Crystal 0.20.5 [ccf46c0] (2017-01-20)

$ lua -v
Lua 5.2.3  Copyright (C) 1994-2013 Lua.org, PUC-Rio

$ luajit -v
LuaJIT 2.0.2 -- Copyright (C) 2005-2013 Mike Pall. http://luajit.org/

$ python --version
Python 2.7.6

$ pypy --version
Python 2.7.12 (aff251e54385, Nov 09 2016, 18:02:49)
[PyPy 5.6.0 with GCC 4.8.2]

$ rustc --version
rustc 1.14.0 (e8a012324 2016-12-16)

$ go version
go version go1.2.1 linux/amd64

$ elixir --version
Erlang/OTP 19 [erts-8.2] [source-fbd2db2] [64-bit] [smp:2:2] [async-threads:10] [hipe] [kernel-poll:false]

Elixir 1.4.0

$ node --version
v5.10.1

$ ghc --version
The Glorious Glasgow Haskell Compilation System, version 7.6.3

````

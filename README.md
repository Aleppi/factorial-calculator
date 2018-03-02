# factorial-calculator
A simple CLI program to calculate factorials.
The Lite branch does not use any external libraries.
The Master branch uses the GNU MP library.

To compile the Lite branch from source simply compile using GCC.
~~~
gcc -o factorial factorial.c
~~~
To compile the Master branch from source compile using GCC with the GNU MP library installed and with the `-lgmp` option enabled.
~~~
gcc -lgmp -o factorial -factorial.c
~~~

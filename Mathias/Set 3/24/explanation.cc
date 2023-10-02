The o1, o2 and o3 stand for different optimization levels for the compiler.
Without any optimization, functions may run slower due to the absence of any compiler "tricks". 
Function call overhead is noticeable, and loops may not be very efficient.

-o1 stands for basic optimization. With basic optimization, functions get a speed boost, but it is still moderate. Function call overhead decreases, and loops become more efficient.

With -o2, his level cranks up the speed considerably. Functions aslo execute significantly faster thanks to some aggressive optimizations like inlining and also loop unrolling.

Using -o3, this is the most highly optimized option.-O3 will probably result in larger binary executables.

In practice, it's common to use different optimization levels for different parts of a project. 
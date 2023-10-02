#ifndef FUN_HH
#define FUN_HH

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void fun(string str);
void fun2(string const &str);
void callRef(string const &prog);
void callValue(string const &prog);

#endif

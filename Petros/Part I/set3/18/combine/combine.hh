#ifndef COMBINE_HH
#define COMBINE_HH
#include <iostream>
#include <string>

struct ReturnValues
{
bool ok = false;
size_t nr;
std::string value = "";
};

ReturnValues combine(int argc, char *argv[]);
bool structCall(int argc, char *argv[]);
void boundCall(int argc, char *argv[]);
void message(ReturnValues);

#endif

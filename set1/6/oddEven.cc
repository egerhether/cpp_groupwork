# include <iostream>

using namespace std;

int main()
{
    size_t value;

    cin >> value;
                    // simple modulo test, if remainder from diving by 2 is 1 
                    // it is odd
    cout << ((value % 2 == 1) ? "odd" : "even") << '\n';
    
                    // the bit form of 1 is "0001" and all odd numbers end
                    // with 1 in their bit form, meaning that the last bit
                    // of "odd & 1" is always 1 while the rest of the bits
                    // are 0 due to "0 & 1 == 0" making "value & 1 == 1" for 
                    // all odd numbers. The reverse is true for evens as their
                    // last bit is 0 and all the previous bits are made to be
                    // 0 same as for odds.
    cout << (((value & 1) == 1) ? "odd" : "even") << '\n';
    
                    // due to value being a size_t type "value / 2" will also
                    // be size_t type meaning that if value is odd then 
                    // "value / 2" will result in only the whole part of the 
                    // divison as size_t cannot be a fraction. The fractional part
                    // gets truncated. this means that only even numbers
                    // are equal to themselves divided then multiplied by 2.0
    cout << ((value / 2 * 2 == value) ? "even" : "odd") << '\n';
    
                    // odd numbers have a 1 at the end of their bit form and
                    // by using the non-exclusive or operator this one is
                    // is preserved when "odd | 1" similar to the rest of 
                    // the numbers bit form. For evens this is not true as
                    // they have 0 at the end meaning "even | 1 == even + 1".
    cout << (((value | 1) == value) ? "odd" : "even") << '\n';
    
                    // as odd numbers have 1 at their last bit and so does 1
                    // itself then the ^ operator sees that the last bit is
                    // both 1 making "odd ^ 1" have 0 at the end instead of 1,
                    // making it smaller by one. For even numbers, they have 
                    // 0 at the end making "even ^ 1" be larger by 1
    cout << (((value ^ 1) == (value - 1)) ? "odd" : "even") << '\n';
    
                    // as odd numbers have a 1 at the end in their bit form
                    // then shifting them by a bit right and back left removes 
                    // the 1 at the end changing it to 0 meaning they're not
                    // equal anymore. since even numbers have 0 at the end
                    // this procedure doesn't change their value
    cout << (((value >> 1) << 1 == value) ? "even" : "odd") << '\n';

}

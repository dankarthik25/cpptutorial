/*
 *   map is like dictionary.
 */

#include <map>

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> m1{
        {"Bob", "Butcher"},
        {"Anne", "Baker"},
        {"George", "Candlestick maker"}
    };
    m1["Frank"] = "Teacher";
    m1["Frank"] = "Instructor";

    auto it = m1.find("George");
    if( it != m1.end())
        m1.erase(it);

    return 0;
}

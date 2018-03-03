#include "talker.h"
#include "counter.h"

using namespace std;

int main()
{
    Talker t;
    t.speak();

    Counter c;
    c.count(5);

    return 0;
}

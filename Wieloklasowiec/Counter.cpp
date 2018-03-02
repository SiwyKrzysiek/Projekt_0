#include "Counter.h"

void Counter::count(int upTo)
{
    for (int i=0; i<upTo; i++)
        std::cout << i << std::endl;
}

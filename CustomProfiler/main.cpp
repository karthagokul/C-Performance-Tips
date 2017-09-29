#include "profiler.h"
#include <iostream>

using namespace std;

int main()
{
    //PROFILE_FUNCTION;
    PROFILE_FUNCTION_WITHCOMMENTS("Hello , Profiling main");
    for(int i=0;i<100000;i++)
    {
        int j=i;
    }
    return 0;
}

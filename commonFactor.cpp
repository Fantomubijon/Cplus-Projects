#include <iostream>
using namespace std;

void my_recursive_function(int a)
{
    if(a == 1)
        return;
    cout<<a;
    my_recursive_function(a-1);
}
int main()
{
    my_recursive_function(10);
    return 0;
}
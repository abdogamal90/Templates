#include <iostream>

using namespace std;


int pow(int base , int power)
{
    if(power==0)
        return 1;
    else return  base* pow(base,power-1);
}


int poww(int base , int power)
{
    if(power == 0)
    return 1;
    if (power%2!=0){
        return  pow(base,power/2) * pow(base,power/2+1);
    }
    else    return   poww(base,power/2) * poww(base,power/2);
}
int main()
{
    cout<<pow(2,7)<<endl;
    cout<<pow(4,2)<<endl;
    return 0;
}

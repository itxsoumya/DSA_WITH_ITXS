#include <iostream>
#include <vector>
using namespace std;
vector<string> alphaDigits = {"zero","one","two","three","four","five","six","seven","eight","nine"};

void sayDigit(int num){
    if (num==0) return;

    sayDigit(num/10);
    int rem = num%10;
    cout<<alphaDigits[rem]<<" ";
}
int main()
{
    sayDigit(123);
    return 0;
}
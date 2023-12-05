#include <iostream>
#include<cmath>
using namespace std;
int digit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count+=1;
    }
    return count;
}
int main() {
    int a;
    cout<<"enter a : ";
    cin>>a;
    int nm =digit(a);
     cout<<"Total Digit : "<<nm<<endl<<"square of this number : "<<pow(nm,2)<<endl;   
     return 0;
}
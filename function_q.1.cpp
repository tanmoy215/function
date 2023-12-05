// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
using namespace std;
int natural(int n){
    int total=0;
    for(int i=1;i<=n;i++){
        cout<<i<<" number : "<<pow(i,2)<<endl;
        total+=pow(i,2);
    }
    return total;
}
int main() {
    int a;
    cout<<"enter a : ";
    cin>>a;
    cout<<natural(a);
    return 0;
}
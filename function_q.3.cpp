#include <iostream>
using namespace std;
void natural(int n,int m){
    for(int i=n;i<=m;i++){
        if(i%2!=0) cout<<"odd : "<<i<<endl;
    }
}
int main() {
    int a;
    cout<<"enter a : ";
    cin>>a;
    int b;
    cout<<"enter b : ";
    cin>>b;
 natural(a,b);
    return 0;
}
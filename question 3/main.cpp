#include <iostream>
using namespace::std;
int firstindex(int *,int,int);
int main(){
    int b[]={4,5,6,7,8,7,10,7};
    int n=sizeof(b)/sizeof(b[0]);
    int m,k=0;
    cout<<"enter number you want to check: "<<endl;
    cin>>m;
    for(int i=0;i<n;i++){
        if (b[i]==m) {
            k++;
        }
    }
    cout<<"number of occurences: "<<k<<endl;
    cout<<"firstindex: "<<firstindex(b,n,m)<<endl;
    return 0;
}
int firstindex(int *a,int size,int m){
    int i;
    for( i=0;i<size;i++){
        if (a[i]==m) {
            break;
        }
    }
    return i;
}

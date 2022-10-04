#include <iostream>
using namespace::std;
int main(){
   int a[]={1,2,3,4,5,6,7};
   int b[]={5,6,7,8,4,9,10,11};
    int c[50];
    int m,k=0;
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<n1;i++){
        m=a[i];
        for(int j=0;j<n2;j++){
            if (b[j]==m) {
                c[k]=b[j];
                k++;
            }
        }
    }
    for(int l=0;l<k;l++){
        cout<<c[l]<<" ";
    }
    cout<<endl;
    return 0;
}

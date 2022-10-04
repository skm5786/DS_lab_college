#include <iostream>
using namespace::std;
void Delete(int *,int,int);
int main(){
   int a[6]={1,4,2,4,2,6};
    int m,h=0;
    int n=sizeof(a)/sizeof(a[0]);
    int k=n;
    for (int i=0; i<n; i++) {
        m=a[i];
        for (int j=i+1; j<n-i; j++) {
            if (a[j]==m) {
                Delete(a,k,j);
            k=k-1;
            }
        }
    }
    for (int i=0; i<k; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void Delete(int *arr,int n,int index){
                for (int j=index; j<n-1; j++){
                    arr[j] = arr[j+1];
                }
            }

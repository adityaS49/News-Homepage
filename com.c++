#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int sum = 0;
    int a,b;
    cin>>a>>b;
    int arr1[a];
    int arr2[a];
    for(int i = 0 ;i<a;i++){
        cin>>arr1[i];
    }
    for(int j=0; j<a;j++){
        cin>>arr2[j];
    }
  
        for(int j=0 ;j<a;j++){
            if(arr1[j]>=b){
                sum = sum + arr2[j];
            }
        }
    cout<<sum<<endl;
    
}
	return 0;
}

//    *
//   **
//  ***
// ****
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"enter number of rows";
    cin>>n;
    
    for(int i=1 ; i<=n ;i++){
       // char ch=('A'+n-i); 
      for(int j=1 ;j<=n ; j++ ){
            
           // cout<<i<<j<<'\t';
            if(i+j<=n)
              cout<<" ";
              
            else
             cout<<"*";
       
        }
        
        cout<<endl;
    }

    return 0;
}

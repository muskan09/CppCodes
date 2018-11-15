#include <iostream>
using namespace std;

int main() {
	
	// your code here
	int t,n,a,b,c;
        cout<<"enter the number of testcases"; //del
	cin>>t; //no of test cases
	for(int k=1;k<t;k++){
                cout<<"Enter the range";//del
		cin>>a>>b;
		for(int i=a;i<=b;i++){
cout<<"i"<<i<<endl;
			for(int j=1;j<=b;j++){
cout<<"i two"<<i<<endl;
cout<<"j"<<j<<endl;
				int r=i%j;
				if(r==0){
					c++;
					
				}
				if(c==2){
					cout<<"output"<<i<<endl;
				}
			}
		}
          cout<<endl;
	}

	return 0;
} 

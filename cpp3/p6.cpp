/*#include<iostream>
using namespace std;
template <class a>
a greater(a x,a y){
if(x>y){
cout<<"x is greater";
}
else{
cout<<"y is greater";
}
}
int main()
{
int m,n;
cin>>m>>n;
greater(m,n);
float p,q;
cin>>p>>q;
greater(p,q);
char j,k;
greater(j,k);
return 0;
}*/
#include<iostream>  
using namespace std;
 template<class T>  
 T min(T n1,T n2)  
 {  
 if(n1<n2)  
 return n1;  
 else if(n1>n2)  
 return n2;  
 else  
 cout<<"EQUAL\n\n";  
 }  
 int main()  
 {  
 int a,b,c,choice,ch;  
 float d,e,m;  
 char f,g,n;  
cout<<"\n\nEnter the Integers : ";  
            cin>>a>>b;  
            c=min(a,b);  
            cout<<"Minimum Element : "<<c;  
             cout<<"\n\nEnter the Floating Point numbers : ";  
            cin>>d>>e;  
            m=min(d,e);  
            cout<<"Minimum Element : "<<m;  
             cout<<"\n\nEnter the Characters : ";  
            cin>>f>>g;  
            n=min(f,g);  
            cout<<"Minimum Element : "<<n;  
            
 return 0; 
 }  

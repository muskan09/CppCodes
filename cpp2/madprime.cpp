using namespace std;

class find_

{

	protected:

	int lb,ub;

//STUDENT CODE HERE----------------------------------
public:
void get();
};
class der_prime:public find{
protected:
  int num,i,j,k,count=0;
  int a[100],b[100];
public:
  void detect_prime();
  void print();
};
void find::get(){
  cin>>lb>>ub;
}
void der_prime::detect_prime(){
  for(i=lb;i<=ub;i++)
  {
    for(j=0;j<=ub;j++)
    {
    a[j]=i;
    }
  }
  for(i=0;i<ub;i++)
  {
    for(k=0;k<ub;k++){
    for(j=2;j<ub;j++)
    {
    if(a[i]%j==0)
		{
			count++;
			break;
		}
    if(count==0)
    {
      a[i]=b[k];
    }
  }
}
}//for storing,finding prime from range
//now for occurance/frequency



}//func bracket
void der_prime::print(){

}
//----------------------------------------------------
int main()

{

	 static der_prime d1;

	d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)

	d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)

	d1.print_();//print the desired output in derived class

	return 0;

}

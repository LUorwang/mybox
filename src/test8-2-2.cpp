#include <iostream>
using namespace std;
template<typename T>  //类模板定义 
class sum
{
  public:
  	sum(T a,T b,T c)  //类构造函数定义
  	  {
	  	x=a;y=b;z=c;
	  }
	T add()
	  {
	  	return x+y+z;	//求和成员函数定义	
	  }
  private:
  	T x,y,z;
};
int main()
{
	sum<int>s1(2,5,8);  //用类模板定义对象，此时T被int替代 
	sum <double> s2(2.5,3.6,4.8);  //用类模板定义对象，此时T被double替代
	cout<<"三个整数的和是："<<s1.add()<<endl;      //调用s1对象成员函数求三个整数和并输出 
	cout<<"三个双精度数的和是："<<s2.add()<<endl;  //调用s2对象成员函数求三个双精度数和并输出
	return 0;
}

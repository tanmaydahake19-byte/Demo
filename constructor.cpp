#include<iostream>
using namespace std;
class Basic()
{
public:
  Basic()
  {
    cout<<"constructor is called";
  }
  ~Basic()
  {
    cout<<"Destructor is called";
  }
};
int main()
{
   cout<<"constructor is called";  
}

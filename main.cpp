#include<iostream>
using namespace std;

int main() {
  double x;
  cin >> x ;
  double fraction =  x-int(x);
  if (fraction >=0.5){
    cout<<int(x)+1<<"\n";

  }else {
    cout<<int(x)<<"\n";
  }


  return 0;
}



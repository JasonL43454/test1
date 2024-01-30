#include <iostream>
using namespace std;

int main() {
 int number=1;
 while(true){


  if(46340<number){
    cout<<"No answer found";
    break;
  }

  int square=number*number;
  int firstDigit=square%10;
  int secondDigit=(square/10)%10;
  cout<<"Its square is: "<<square<<endl;
  if (firstDigit%2==1 && secondDigit%2==1){
    cout<<"The number is: "<<number<<endl;
    cout<<"Its square is: "<<square;
    break;
  }
  number++;
  }
  return 0;
}


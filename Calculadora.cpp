#include <iostream>
using namespace std;

int main()
{
  long double num1, num2, res;
  char operacao;


 cout<<"digite o primeiro numero ";
 cin>>num1;
 cout<<"digite a opera��o desejada (+ para soma, - para subtra��o, / para divis�o, * para multiplica��o) ";
 cin>>operacao;
 cout<<"digite o segundo numero ";
 cin>>num2;
   if(operacao == '+'){
     res=num1+num2;   
    }
     if(operacao == '-'){
     res=num1-num2;   
    }
     if(operacao == '/'){
     res=num1/num2;   
    }
     if(operacao == '*'){
     res=num1*num2;   
    }
    cout<<"o resultado � "<<res;
}

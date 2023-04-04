#include <iostream>

using namespace std;

enum Operation{
    Add,
    Substract,
    Multiply,
    Divide
};

struct Calculator{
   std::byte op;
   Calculator(Operation b){
      op = (std::byte)b;
   }
   int calculate(int a,int b){
       switch((int)op){
        case 0:
            return a+b;
            break;
        case 1:
            return a-b;
            break;
        case 2:
            return a*b;
            break;
        case 3:
            return a/b;
            break;
        default:
            return -1;
            break;
       }
   }
};

int main(){

Calculator x{Operation::Divide};
cout<<x.calculate(3,4)<<endl;



}
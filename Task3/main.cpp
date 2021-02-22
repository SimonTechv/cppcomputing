
#include <iostream>
#include <cmath>
/*
Task_1 Var_10
+-----------------------+---------------------------+
|         Value         |           Type            |
+-----------------------+---------------------------+
| inputValue            | long                      |
| outputValue           | bool(text interpretation) |
| FilterUserNumberRange | YES                       |
+-----------------------+---------------------------+
*/
long inputValue{};


bool checkTf(long variable){
    
    if(((abs(variable) % 100) % 25 == 0) || (abs(variable) % 100 == 0)){

        return true;
    }
    else{
        
        return false;
    }
}


int main(){

    while(true){

        std::cout << "Enter value _> ";
        std::cin >> inputValue;

        if(inputValue == 0 || std::cin.fail() == true){

            std::cout << "Exiting... Your value more than max signed long value !!!" << std::endl;
            exit(0);
        }

        else{

            (checkTf(inputValue)) ? std::cout << "Number " << inputValue << " divisible by 25\n" : std::cout << "Number " << inputValue << " not divisible by 25\n" ;
        
        }
    
    }


}
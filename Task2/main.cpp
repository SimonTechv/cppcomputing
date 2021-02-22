#include <iostream>
#include <cmath>

/*
Task 2 var 20
+------------------+--------------------------------------------+
| Input variables  |                   Values                   |
+------------------+--------------------------------------------+
| t(double)        | [0; Infinity)                              |
| Expected output: | double value                               |
| Source code:     | https://github.com/SimonTechv/cppcomputing |
+------------------+--------------------------------------------+

*/

#define debug 1 // debugger flag


double evaluator(double t){

    double result{};

    if(t > 0.00 && t <= 5.00){

	#if debug == 1
    	std::cout << "Use one condition. t from (0,5]" << std::endl;
    #endif

        result = pow(sin(t),2) - sqrt(fabs(log(fabs(sin(t)))));

    }

    else if(t > 5.00 && t < 10.00){

	#if debug == 1
    	std::cout << "Use two condition. t from (5,10]" << std::endl;
	#endif

        result = (double)3/4 * exp(t);

    }

    else if(t >= 10.00){

	#if debug == 1
    	std::cout << "Use three condition. t from [10, infinity)" << std::endl;
	#endif

        result = 3 * pow(sin(t),3) + cos(t);

    }

    return  result;

}

int main(){

	double t{}; //uniform init value

	double r{}; // result variable

	std::cout << "Enter value t _> ";

	std::cin >> t;

	if(t <= 0){

		std::cout << "Warning, value less then zero or equal!" << std::endl << "Result: 0.00";
	}

	else{

		r = evaluator(t);
	    std::cout <<"Result: "<< r << std::endl; // output result

	}


    return 0;
}


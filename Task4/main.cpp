#include <iostream>
#include <cmath>

/* Block circuit
Task_4 Var_2


                   +---------------------------------------+
                   |                                       |
                   |                                       |
                   |                                       |
                   |                                       |
                   |                                       |
+-------------+    |                    +------------------+--------------------+
|    Start    |    |        YES         |  last = sqrAp;                        |
+------+------+    |        +---------->+                                       |
       |           |        |           |  sqrAp = 0.5 * (sqrAp + sqr / sqrAp); |
+------v------+    |        +           +-----------------------+---------------+
|             |    |       XX
|    INPUT    |    |     XX  XX           +--------------+
|             |    |   XX      XX  NO     |              |
+------+------+    | XX last=now XX+----->+    OUTPUT    |
       |           |   XX      XX         |              |
       |           |     XX  XX           +--------------+
+------v------+    |       XX
|             |    |       ^
|  sqrAp =    |    v       |
|  sqr/sqrAp+ +----+-------+
|  +sqrAp;    |
|             |
+-------------+


*/

int main(){

    int sqr{}; // число из которого извлекается квадратный корень

    int sqrAp{}; // предполагаемый квадратный корень

    int last{};  // хранение предыдущего результата для сравнения с текущим

    std::cout << "Enter number_> ";
    std::cin >> sqr;
    std::cout << "Enter rootApprox_> ";
    std::cin >> sqrAp;

    sqrAp = sqr / sqrAp + sqrAp; // первое приближение

    while(last != sqrAp) //выполняется пока значения не сравняются

    {
        last = sqrAp; // запоминаем старое значение приближенного квадратного корня

        sqrAp = 0.5 * (sqrAp + sqr / sqrAp); // вычисляем новое значение приближенного корня

    }

    std::cout <<"Result: Sqrt(" << sqr << ") = " << sqrAp << std::endl; //
    

    

}
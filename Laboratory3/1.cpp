#include <iostream>
#include <math.h> // Математическая библиотека
int main()
{   
 float x,y; 
 float f1=0;
 
 std::cout << "Введите x="; // Вводим нужные нам значения
 std::cin >> x;
 std::cout << "Введите y=";
 std::cin >> y;

if ( (( x - 2*y) > 0) && ((y) != 0)) // Обозначаем оператора

 {    f1= sqrt( x - 2*y) + cos (x+1)/(y); // Записываем полное уравнение
            std::cout <<"f1=" <<f1<<std::endl; } // Считаем результат

            else { std::cout <<"Результатов нету" << std::endl; } // Если ошибка

          getchar();

           return 0;
}

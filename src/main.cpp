#include <src/cars.h>
#include <src/lorry.h>
#include <iostream>



int main()
{
   Cars Lada; // создание объекта конструктор без параметров
   Lada.set_car_name("Lada"); // создание объекта
    Lada.set_cnt_cylinder(4); // заполнение полей
   Lada.set_power(160);
    std::cout <<"вывод значений полей после присвоения" << std::endl;
    std::cout <<  Lada << std::endl<< std::endl;;

   Cars Volga("Volga", 8,200); //создание объекта конструктор с параметрами
   std::cout << *Volga.get_car_name()<< std::endl; // вывод значений полей
   std::cout << Volga.get_cnt_cylinder()<< std::endl;
   std::cout <<Volga.get_power() << std::endl<< std::endl;

   Cars Lada1(Lada); // создание объекта конструктор копирования
    std::cout <<"вывод значений полей скопированного объекта" << std::endl;
   std::cout << Lada1 << std::endl<< std::endl;       

   Lada1.set_car_name("Lada1"); // установка значений полей
   Lada1.set_cnt_cylinder(6); //
   Lada1.set_power(180); //
    std::cout <<"вывод значений полей после присвоения" << std::endl;
    
   Lada1 = Lada; //перегруженный оператор присвоения
                  //присваивает полям константы  
   std::cout << Lada1;  //вывод полей

   count(Lada) ;

    Cars Avto; // новый объект
    std::cin>>Avto; // перегруженый оператор ввода
    std::cout << Avto;  //вывод полей
       


    Lorry Maz("Maz", 8, 200, 400); //объект дочернего класса
    std::cout << *Maz.get_car_name() << std::endl;
    std::cout << Maz.get_capacity() << std::endl;
    std::cout << Maz. get_cnt_cylinder() << std::endl;
    std::cout << Maz.get_power() << std:: endl;

    Lorry Kraz; //объект дочернего класса
    // чтение полей объекта
    std::cout << *Kraz.get_car_name() << std::endl;
    std::cout << Kraz.get_capacity() << std::endl;
    std::cout << Kraz. get_cnt_cylinder() << std::endl;
    std::cout << Kraz.get_power() << std:: endl;
    
    std::cout << Kraz; // перегруженный оператор 

    Kraz = Maz; //оператор присвоения перегруженый
    std::cout << Kraz; // оператор вывода перегруженый в классе Cars


    count(Maz); // количество объектов

    Lada1.~Cars();  // удаление объектов
    Volga.~Cars(); // количество объектов

    count(Maz); // количество объектов
    return 0;
}
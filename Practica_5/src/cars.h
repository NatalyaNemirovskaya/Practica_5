#pragma once

#include <string.h>
#include <cstring>
#include <iostream>


class Cars
    {
     

    private:
    protected:
    std::string car_name = " Car"; // марка машины
    int cnt_cylinder = 0; // число цилиндров
    int power= 0;  // мощность

    static  inline int cnt_cars{0} ; // количество созданных объектов  
    
    public:

    std::string* get_car_name(){return &car_name;} //
    void set_car_name(std::string name){car_name = name;} //

    int get_cnt_cylinder(){return cnt_cylinder;}
    void set_cnt_cylinder(int cnt){cnt_cylinder = cnt;}

    int get_power(){return power;}
    void set_power(int pwr){power = pwr;}

   
     //friend int count(Cars &c){return  c.cnt_cars;}
    friend void count(Cars &c);
     
     
    //конструктор без параметров
    Cars() ;
  
    //конструктор с параметрами
     Cars(std::string name, int cnt_cldr, int pwr);

   
    // конструктор копирования
    Cars(const Cars &c);
    

    //деструктор
    ~Cars();

   // перегрузка оператора <<
   friend std::ostream&  operator<< (std::ostream &os, const Cars & c);
   
    
    // перегрузка оператора >>
    friend std::istream& operator >> (std::istream &is,  Cars& c);
    
    //перегрузка оператора =
    Cars&   operator= (const Cars& c);
    
    };

    /* std::ostream&  operator << (std::ostream &os, const Cars & c)
    {
       os<< "Марка машины " << c.get_car_name() << std::endl
        << "Число цилиндров  "<< c.get_cnt_cylinder()<< std::endl
        << "Мощность " << c.get_power()<< std::endl << std::endl;
       return os;
    }*/



   

    
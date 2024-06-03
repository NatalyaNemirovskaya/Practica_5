#include <src/cars.h>

class Lorry : public Cars
    {
    private:
        int capacity;
    public:
       
       Lorry():Cars()
       {

       }
      
       Lorry(std::string name, int cnt_cldr, int pwr, int caps): 
               Cars(name, cnt_cldr, pwr)
         {
            capacity = caps;
         }

         //Lorry&  operator= (const Lorry& c);
       
        
        

       int get_capacity(){return capacity;}
       void set_capacity(int cnt){capacity = cnt;}  
    };
    
 
    

    
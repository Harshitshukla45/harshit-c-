#include <iostream>
using namespace std;
 
class Distance {
   private:
      int feet; 
      int inches;
      
   public:
      
     Distance() {}
     
      Distance(int f, int i) {
         feet = f;
         inches = i;
      }
      
     
      void displayDistance() {
         cout << "F: " << feet << " I:" << inches <<endl;
      }
      
     
      void operator-() {
         feet = -feet;
         inches = -inches;
      }
};

int main() {
   Distance D1(11, 10), D2(-5, 11);
 
   -D1;                    
   D1.displayDistance();   

   -D2;                     
   D2.displayDistance();    

   return 0;
}

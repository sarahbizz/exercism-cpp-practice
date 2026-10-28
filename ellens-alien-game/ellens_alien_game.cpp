namespace targets {
class Alien {
   public:
      int x_coordinate{};
      int y_coordinate{};

   int get_health(){
   return health;
   }

   private:
      int health{3};

   bool hit(){
      if (health > 1){
         --health;
      } else {
         return true; // do nothing
            }

      }

   bool is_alive(){
      if (health == 0){
         return false;
      }else{
         return true;
      }
   }
   }; //end class
}

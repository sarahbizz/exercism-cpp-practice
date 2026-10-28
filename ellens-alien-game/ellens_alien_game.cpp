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

   int teleport(int x_new, int y_new){
      int x_coordinate = x_new;
      int y_coordinate = y_new;
      return true;
   }

   bool collision_detection(Alien alien){
      return alien.x_coordinate == x_coordinate && alien.y_coordinate == y_coordinate;
   }


   }; //end class
}

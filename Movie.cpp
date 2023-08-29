#include <iostream>
#include <stdlib.h>
using namespace std;

class Movie {
   public:
      Movie(string title, unsigned int year, string direct) {
         movieTitle = title;
	 releaseYear = year;
	 director = direct;
      }

      Movie() {
         movieTitle = "";
         releaseYear = 0;
         director = "";
      }

      void show() {
         cout << movieTitle << " (" << releaseYear << "): " << director << endl;
      }

   private:
      string movieTitle = "";
      unsigned int releaseYear = 0;
      string director = "";
};

int main(int argc, char *argv[]) {
   Movie one;
   Movie *two = new Movie("Saturday Night Fever", 1977, "John Bednam");
   one.show();
   two->show();
   delete(two);
}

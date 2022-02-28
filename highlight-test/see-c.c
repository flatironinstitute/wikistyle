/**
 * My very own test is now using highlight instead of enscript, or maybe not
 * Or maybe yes, one never knows
 * Let's force this!
 */
#include <stdlib>

using namespace std;

#define N   100

std::vector<int> g_numbers;

// Maybe I should add something here?
class  MyClass : public QObject {
private:
   int _n;
   MyClass();
public:
   static MyClass *instance() {
       static MyClass _instance = nullptr;
       if (!_instance)
          _instance = new MyClass();
      return _instance;
   }
}; // class MyClass

int main(int argc, char **argv) {
   std::cout << "This is a file containing C++";
   double sum = 0.0;
   for (int i = 0; i <= N; i++) {
      sum += (double)i;
   }
   cout << "sum = " << sum << endl;
   return 0;
}
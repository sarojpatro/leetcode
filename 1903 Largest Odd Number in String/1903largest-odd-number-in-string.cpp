#include <string>

class Solution {
public:
    string largestOddNumber(string num) {
      int size = num.size();

      for (int i= 0; i < size; i++)
      {
        char c = num.back();
        cout << c << '\n';

        if(c == '1' || c == '3' || c == '5' || c == '7' || c == '9')
        {
          return num;
        }

        num.pop_back();
      }
      
      return string();
    }
};
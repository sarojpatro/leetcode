#include <stdlib.h>     /* atoi */
using namespace std;

class Solution {
public:
    
    string trimLeadingZeros(const string& binary) {
    size_t first_non_zero = binary.find_first_not_of('0');
    if (first_non_zero != string::npos) {
        return binary.substr(first_non_zero);
    }
    return "0"; // In case the binary string is all zeros
}
   
    string convertDateToBinary(const string& date) {
        // Parse the date
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        // Convert to binary
        string yearBinary = trimLeadingZeros(bitset<16>(year).to_string()); // 16 bits for year
        string monthBinary = trimLeadingZeros(bitset<4>(month).to_string()); // 4 bits for month
        string dayBinary = trimLeadingZeros(bitset<5>(day).to_string()); // 5 bits for day

        // Combine the binary representations
        return yearBinary + "-" + monthBinary + "-" + dayBinary;
    }

};
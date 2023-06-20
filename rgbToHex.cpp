
#include <iostream>
#include <ctype.h>
#include <sstream>
#include <string>

using namespace std;

string toHex(int n) {
    stringstream sstream;

    if (n <= 0)
        return "00";

    if (n >= 255)
        return "FF";


    sstream << std::hex << n;
    std::string result = sstream.str();

    // handling trailing zeros
    if (n <= 9) {
        result = "0" + sstream.str();

    }

    for (size_t i = 0; i < result.size(); i++) {
        result.at(i) = toupper(result.at(i));
    }

    return result;
}

string rgb(int r, int g, int b) {

    string hexCode = "";
   
   
   hexCode.append(toHex(r));
   hexCode.append(toHex(g));
   hexCode.append(toHex(b));

    cout << hexCode << endl;
    

    return hexCode;
   
}

int main()
{
   
        
    
    rgb(-20, 275, 125);

}


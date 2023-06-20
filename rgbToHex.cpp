/*
    ©2023, Nathan Powell
    This program is free software: you can redistribute it and/or modify 
    it under the terms of the GNU General Public License as published by 
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful, 
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
    GNU General Public License for more details.
   
    You should have received a copy of the GNU General Public License 
    along with this program. If not, see <https://www.gnu.org/licenses/>.
    
    Originally used for a Codewars solution, but thought it'd be a good idea
    to keep this code in case I need it in the future. Hopefully this also helps someone too!
*/


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

    cout << "#" << hexCode << endl; // comment out if using function on its own
    return hexCode;
}

int main()
{
    // usage: rgb(0, 0, 0);
    return 0;
}


#include <iostream>
#include <string>
using namespace std;

bool isSubstring(string s1, string s2) {
    return false;
}

bool isRotate(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    int length = (unsigned) s1.length();
    for(int i=0;i<length;i++) {
        if(isSubstring(s1, s1.substr(i, length) + s2.substr(i)))
            return true;
    }
    return false;
}

// hint? => answer
bool isRotate2(string s1, string s2) {
    if(s1.length() != s2.length())
        return false;
    return isSubstring(s1, s2+s2);
}

int main() {
    return 0;
}

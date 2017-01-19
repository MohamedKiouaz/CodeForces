#include <iostream>
#include <string>

int main()
{
    bool capslock = true;
    std::string s;
    std::cin >> s;
    for(int i = 1; i < s.size(); i++)
        if(islower(s[i])) {
            capslock = false;
            break;
        }
    if(capslock == true) {
        for(int i = 1; i < s.size(); i++)
            s[i] = tolower(s[i]);
        if(islower(s[0]))
            s[0] = toupper(s[0]);
        else
            s[0] = tolower(s[0]);
    }
    std::cout << s << std::endl;
}

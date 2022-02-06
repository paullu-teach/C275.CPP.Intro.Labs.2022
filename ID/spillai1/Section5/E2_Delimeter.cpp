#include <iostream>
#include <string>
#include <vector>

int main()
{
    int l;
    std::cin >> l;

    std::string line;
    std::cin.ignore();  // clear the inp buffer; problems with getline after using cin >> otherwise
    std::getline(std::cin, line);

    std::vector<char> expected_closing; // list of closing delimeters in reverse priority
    bool errorfound = false;

    for (int i = 0; i<l; i++)
    {
        switch(line[i])
        {
            case '(': 
                expected_closing.push_back(')');
                break;
            case '{': 
                expected_closing.push_back('}');
                break;
            case '[': 
                expected_closing.push_back(']');
                break;
            case ')':   // not putting break statements in cases making the program cascade downwards
            case '}':   // effectively acts as an or operator >> ')' or '}' or ']'
            case ']':
                if (line[i] != expected_closing.back())
                {
                    std::cout << line[i] << i << std::endl;
                    errorfound = true;
                }
                else
                    expected_closing.pop_back();
                break;
        }

        if (errorfound)
            break;
    }

    if (!errorfound)
        std::cout << "ok so far" << std::endl;
    return 0;
}
#include <iostream>
#include <string>
#include <vector>

bool processAdv(std::string adv)
{
    /*
    Description: Checks if adventure has been finished 

    Arguments:
    adv(string): string of each item/villain encountered

    Returns:
    isFinished(bool): true if adventure is finished and false if not
    */

    bool isFinished = true;
    std::vector<char> itemList;
    for (int i = 0; i<adv.size(); i++)
    {
        char event = adv[i];
        switch(event)
        {   
            case '.':
                break;
            case '$':   // no break statement
            case '|':   // to emulate 'or'
            case '*':
            {
                itemList.push_back(event);
                break;
            }
            case 'b':   // can avoid rewriting code in next lines
            {
                if (itemList.back() != '$')
                    isFinished = false;
                else
                    itemList.pop_back();
                break;
            }
            case 't':
            {
                if (itemList.back() != '|')
                    isFinished = false;
                else
                    itemList.pop_back();
                break;
            }
            case 'j':
            {
                if (itemList.back() != '*')
                    isFinished = false;
                else
                    itemList.pop_back();
                break;
            }
        }
        if (!isFinished)
            break;
    }
    return isFinished;
}

int main()
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<bool> advRes;   // adventure result list
    for (int i = 0; i<n; i++)
    {
        std::string tempString;   // adventure input
        std::getline(std::cin, tempString);
        advRes.push_back(processAdv(tempString));    // append result to list
    }

    for (int i = 0; i<advRes.size(); i++)
    {
        if (advRes[i])
            std::cout << "YES" << '\n';
        else
            std::cout << "NO" << '\n';
    }
    std::cout << std::flush;
    return 0;
}
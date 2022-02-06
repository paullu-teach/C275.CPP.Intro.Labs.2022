#include <iostream>
#include <map>
#include <unordered_set>

std::unordered_set<int> findTop(int num, std::map<int, int> stat)
{
    /*
    Description: Find top `num` elements in hashmap 

    Arguments:
    num(int): number of elements to find
    stat(map): hashmap where key is stat and value of key is a
    unique index for the pokemon

    Returns:
    top(unordered_set): set of unique indices for the top pokemon 
    selected
    */

    std::unordered_set<int> top;

    // looping in reverse for descending order of keys(stat)
    // break out of loop when num top elems found
    for (auto it = stat.rbegin(); it != stat.rend(); --it)
    {
        num--;
        top.insert((*it).second);   // "index" of the stat

        if (num == 0)
            break;
    }

    return top;
}

int main()
{
    int n, k;
    std::cin >> n >> k;

    std::map<int, int> attack, defense, health;

    // gets input and inserts to stat arrays;
    // assign unique value to each set of stats 
    // to find duplicates later
    for (int i = 0; i<n; i++)
    {
        int a, d, h;
        std::cin >> a >> d >> h;

        attack.insert({a, i});
        defense.insert({d, i});
        health.insert({h, i});
    }

    // find all top k stat pokemon and add their indices to set;
    // sets cannot have duplicates-> size(set) = total pokemon
    std::unordered_set<int> Team;
    for (auto x : findTop(k, attack))
        Team.insert(x);
    for (auto x : findTop(k, defense)) 
        Team.insert(x);
    for (auto x : findTop(k, health))
        Team.insert(x);

    std::cout << Team.size() << std::endl;
    return 0;
}   

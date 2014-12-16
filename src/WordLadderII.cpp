#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <string>
#include <iostream>

using namespace std;

class Solution {
private:
    void nextWords(string from, unordered_set<string>& next, unordered_set<string>& dict) {
        for (size_t i = 0; i < from.size(); i++)
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                char tch = from[i];
                from[i] = ch;
                if (dict.count(from)) next.insert(from);
                from[i] = tch;
            }
        } 

    }
public:

    vector<vector<string> > findLadders(string start, string end, unordered_set<string> &dict) {
        unordered_set<string> luv(dict);

        luv.insert(start);
        luv.insert(end);

        vector<vector<string> > lans;

        queue<pair<string, vector<string>> > q;
        q.push(make_pair(start, vector<string>{start}));

        vector<string> la;

        int l = -1;
        while(!q.empty())
        {
            auto lcur = q.front();
            q.pop();
            luv.erase(lcur.first);

            //cout << lcur.first << endl; 
            if (l != -1 && lcur.second.size() > l) break;
            if (lcur.first == end)
            {
                l = lcur.second.size();
                lans.push_back(lcur.second);
            }
            else if (l == -1)
            {

                unordered_set<string> ladjs;
                nextWords(lcur.first, ladjs, luv);
                for (auto it = ladjs.begin(); it != ladjs.end(); it++)
                    if (luv.count(*it))
                    {
                        lcur.second.push_back(*it);
                        q.push(make_pair(*it, lcur.second));
                        lcur.second.pop_back();
                    }
            }
        }

        return lans;
    }
};



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    string curr = "", attr_name;
    map<string, string> mp;
    cin >> n >> q;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string line, tag, extract;
        getline(cin, line);
        stringstream ss(line);

        while (getline(ss, extract, ' '))
        {
            if (extract[0] == '<')
            {
                if (extract[1] != '/')
                {
                    tag = extract.substr(1);
                    if (tag[tag.length() - 1] == '>')
                    {

                        tag.pop_back();
                    }

                    if (curr.size() > 0)
                    {

                        curr += "." + tag;
                    }
                    else
                    {
                        curr = tag;
                    }
                }

                else
                {
                    tag = extract.substr(2, (extract.find('>') - 2));


                    size_t pos = curr.find("." + tag);
                    if (pos != string::npos)
                    {

                        curr = curr.substr(0, pos);
                    }
                    else
                    {

                        curr = "";
                    }
                }
            }


            else if (extract[0] == '"')
            {

                size_t pos = extract.find_last_of('"');
                string attr_value = extract.substr(1, pos - 1);

                mp[attr_name] = attr_value;
            }

            else
            {
                if (extract != "=")
                {

                    attr_name = curr + "~" + extract;
                }
            }
        }
    }

    string query;
    for (int i = 0; i < q; i++)
    {
        getline(cin, query);
        map<string, string>::iterator it = mp.find(query);
        if (it != mp.end())
        {
            cout << it->second << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}

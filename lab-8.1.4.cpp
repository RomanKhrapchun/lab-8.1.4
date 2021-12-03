#include <iostream>
#include <string>
using namespace std;
int Count(const string s, const char c)
{
	size_t pos = 0;
	int k = 0;
	while ((pos = s.find(c, pos)) != -1)
	{
		k++;
		pos++;
	}
	return k;
}

string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find('a', pos)) != -1)
        if (s[pos + 1] == 'b')
            if(s[pos + 2] == 'c')
            s.replace(pos, 3, "**");
    return s;
}

int main()
{
    char c = 'abc';

    cout << "Enter string:" << endl;

    string s;
    getline(cin, s);

    cout << endl;

    if (Count(s, c))
        cout << "String contained " << Count(s, c) << " groups of abc" << endl;

    cout << endl;

    string dest = Change(s); 

    cout << dest << endl;

    return 0;
}
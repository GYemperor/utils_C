#include <iostream>
#include <regex>

using namespace std;

int main()
{

    //regex reg1("([\W\w+])-([\W\d])-([\d+]).([\d+])-");
    //regex reg1("([A-Z][a-z]+)-(\\w+)-(\\d{2}).(\\d{2})-(\\d{4})");
    regex reg1("([A-Z][a-z]+)-(\\w+)-(\\d{2}).(\\d{2})");
    string s1 = "Foton-H5-01.03-2020/03/22-14:03\n";
    smatch m;
    bool match = regex_search(s1,m,reg1);
    if(match) {
        for (size_t i = 0; i < m.size(); i++) {
            cout << m[i] << endl;
        }
    }
    cout << "match: " << m.str() << endl;
    cout << "Hello world!" << endl;
    return 0;
}

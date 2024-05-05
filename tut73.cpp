#include <iostream>
#include <map>
#include <cstring>
using namespace std;

int main()
{

    map<string, int> markmap;
    markmap["yash"] = 90;
    markmap["rashmi"] = 89;
    markmap["pratham"] = 87;
    markmap["rashu"] = 67;
    map<string, int>::iterator iter;
    markmap.insert({{"bablu", 56}, {"dablu", 45}});
    for (iter = markmap.begin(); iter != markmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout<<"The size is : "<<markmap.size()<<endl; 
    cout<<"The max size is: "<<markmap.max_size()<<endl;
    cout<<"The empty return value is: "<<markmap.empty()<<endl;
    return 0;
}
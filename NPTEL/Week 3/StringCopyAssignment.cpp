#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class String
{
    public:
        char *str;
        size_t len;
    
        String(char *s):
        str(strdup(s)), len(strlen(str)) {}

        String(const String& s):
        str(strdup(s.str)), len(s.len) {}
        
        ~String() {free(str);}

        String& operator=(const String& s)
        {
            free(str);
            str = strdup(s.str);
            len = s.len;
            return *this;
        }
        void print()
        {
            cout<<"("<<str<<": "<<len<<")"<<endl;
        }
};

int main()
{
    String s1 = "Football", s2 = "Cricket";
    s1.print();
    s2.print();
    s2 = s1;
    s2.print();
    return 0;
}
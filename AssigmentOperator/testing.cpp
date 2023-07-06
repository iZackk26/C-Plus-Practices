#include <iostream>
#include <string>
#include <cstring>

class String
{
    private:
        char *s;
    public:
        String(){
            s = new char[1];
            *s = '\0';
        } // Default constructor

        String(const char *str){
            s = new char[std::strlen(str) + 1];
            std::strcpy(s,str);
        }

        String(const String &source){
            s = new
        ~String(){
            delete [] s;
        } 

        void display() const;
        int get_length() const;
        const char *get_str() const;

        String &operator=(const String &rhs){
            if(this == &rhs){
                return *this;
            }
            delete [] s;
            s = new char[std::strlen(rhs.s) + 1];
            std::strcpy(s, rhs.s);
            return *this;
        }
};



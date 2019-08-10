/*
Assignment is done after iniciallization.
    Eg: 
    Mystring s1{"Frank"}; // Iniciallization
    Mystring s2=s1   // Iniciallization (Old style) 
    s2= s1 // Assignment
Defalut assignment (is shallow copy)

synatx:
Type &Type:: Operator=(cosnt Type &rhs);
Eg: 
Mystring::&Mystring :: operator=(const Type &rsh);
s2=s1; // assignment
s2.operator=(s1); // assignment

 */

/*********************************************
 *      DEEP COPY using Assignment Operator
 ********************************************/

#include <iostream>
#include <cstring>

using namespace std;

class Mystring{
private:
    char *str;  // C-style
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring &operator=(const Mystring &rsh); 

    int get_length() const;
    ~Mystring();
    void display() const;
    const char *get_str() const;
};

Mystring ::Mystring():str{nullptr}{
    str = new char[1];
    strcpy(str,"\0");
}

Mystring::Mystring(const char *s):str{nullptr}{
    if(s==nullptr){
        str = new char[1];
        strcpy(str,"\0");
    }
    else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }

}
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
    }
// int Mystring:: get_length() const{return strlen(str);}

Mystring::~Mystring(){delete [] str;}

void Mystring:: display() const{
    cout<<str<<endl;
}
const char *Mystring::get_str() const{return str;}

Mystring &Mystring::operator=(const Mystring &rhs){
    if(this ==&rhs) // check if we are self assinging varaible.
        return *this;
    
    delete []str; // delete the previous data 
    str = new char [strlen(rhs.str)+1];
    strcpy(str,rhs.str);

    return *this;
}
int main(){

    Mystring larry("Larry Hello");
    Mystring stooge{"Stooge Hello"};
    cout<< "Before assignment" <<endl;
    larry.display();
    stooge.display();

    larry = stooge;

    cout<< "After assignment larray = stooge" <<endl;

    larry.display();
    stooge.display();

    cout<< "Before assignment" <<endl;
    stooge = "This is test";
    larry.display();
    stooge.display();

    return 0; 
}
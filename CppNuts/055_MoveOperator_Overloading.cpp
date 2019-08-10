/*

        MOVE Assignment Operator (Not Deep Copy)

In genreal c++ will use copy assignment operator if necessary
If we have raw pointer then we should use Move assignment for effiency


Syantax;
    Type &Type::operator=(Type &&rhs);

Eg:
Mystring  &operator=(Mystring &&rhs);
s1= Mystring("Joe"); // Move Assignment
s1 = "Frank"; // Move Assignment

// CODE

Mystring &Mystring::operator=(Mystring &&rsh){
    if(this==&rhs)          //check if self assignment
        return *this;

    delete [] str;          // delete previous data 
    str = rhs.str;          // steal(copy) the pointer from rhs(rhs.str) to this->str

    rhs.str=nullptr;        // null out the rhs object ?
    return *this;           //return current object

}



 */


#include <iostream>
#include <cstring>

using namespace std;

class Mystring{
private:
    char *str;  // C-style
public:
    Mystring();                                 // No-arg  constructor
    Mystring(const char *s);                    // Overladed Constructor
    Mystring(const Mystring &source);           // Copy Constructor
    Mystring(Mystring &&source);                // Move Constructor

    Mystring &operator=(const Mystring &rsh);   // Assignment Overloading {Copy the data from 1 obj to to other}
    Mystring &operator=(Mystring &&rhs);        // Assignment Overlaoding {MOve the pointer}

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
    cout<<"\t\tUsing Constructor Overloading"<<endl;
    if(s==nullptr){
        str = new char[1];
        strcpy(str,"\0");
    }
    else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

Mystring::Mystring(Mystring &&source)                // Move Constructor
    :str(source.str){
        source.str = nullptr;
        cout<<"\t\tUsing Move Constructor"<<endl;
    }
Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
    cout<< "\t\tUsing Copy Constructor"<<endl;
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
    }
        // Assignment Overlaoding {MOve the pointer}

// int Mystring:: get_length() const{return strlen(str);}

Mystring::~Mystring(){delete [] str;}

void Mystring:: display() const{
    cout<<str<<endl;
}
const char *Mystring::get_str() const{return str;}

Mystring &Mystring::operator=(const Mystring &rhs){
    cout<< "\t\tUsing Copy assignment"<<endl;
    if(this ==&rhs) // check if we are self assinging varaible.
        return *this;
    
    delete []str; // delete the previous data 
    str = new char [strlen(rhs.str)+1];
    strcpy(str,rhs.str);

    return *this;
}

Mystring &Mystring::operator=(Mystring &&rhs){
    cout<<"\t\tUsing move assignment"<<endl;
    if(this == &rhs)
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

int main(){
    cout<< "Mysting a{'Hello'} \n";
    Mystring a{"Hello"};
    cout<<endl;
    cout<< "a = Mystring {'Hola'} \n";
    a = Mystring{"Hola"};
    cout<< "a='Bonjour'\n";
    a = "Bonjour";
    return 0; 
}
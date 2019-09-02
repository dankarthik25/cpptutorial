/*
    Uninary Operators (++,--,-,!)

Syantax:
    Return Type Type :: operatorOp();

Eg:
    Number Number::operator-() const;
    Number Number::operator++();        //pre-increment
    Number Number::operator++(int);     //post-increment
    bool Number::operator!() const;

    Number n1{100};
    Number n2 = -n1;        //n1.operator-()
    n2 = ++n1;              //n1.operator()
    n2 = n1++;              //n1.operator++(int)

Eg : using -(string) to lowercase the  string

    Mystring larry1{"LARRY"};
    Mystring larry2{-larry1};
    larry1.display();
    larry2.display();

        CODE
    Mystring Mystring ::operator-()const{
        char *buff = new char[strlen(str)+1];
        strcpy(buff,str);
        for(size_t i=0;i<strlen(buff); i++)
            buff[i] = std::tolower(buff[i]);
        Mystring temp{buff};
        delete [] buff;
        return temp;
    }
 */

/*
            Binary Operator Overloading
    
    Number Number::operator+(const &Number rhs);
    Number Number::operator-(const &Number rhs);
    bool Number::operator==(const &Number rhs);
    bool Number::operator<(const &Number rhs);

Eg:
    Number n1{100},n2{200};
    Number n3 {n1+n2};
    n3 = n1-n2;
    cout<<(n1==n2)<<endl;

            String Comparaission (== Operator ) overloading
    bool Mystring::operator==(const Mystring &rhs) const;
        if(std::strcmp(str,rhs.str)==0)
            return true;
        else
            return false;
        

 */

/*
            String Operator Overloading (==,-,+)
    


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

    Mystring operator-() const;                 // lowercase
    Mystring operator+(const Mystring &rhs) const;    // concatenate of string
    bool operator==(const Mystring &rhs) const;    // 
    
    int get_length() const;
    ~Mystring();
    void display() const;
    const char *get_str() const;
};
Mystring ::Mystring():Mystring{"\0"}{
    cout<<"\t\tUsing No-argument Constructor Overloading"<<endl;
}

Mystring::Mystring(const char *s):str{nullptr}{
    cout<<"\t\tUsing Constructor Overloading"<<endl;
    if(s==nullptr){ //For Deligation Constructor 
    // if(s==nullptr)or(*s=="\0"){
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

// lowercase
Mystring Mystring:: operator-()const{                 
    char *buff = new char[ strlen(str)+1];
    strcpy(buff,str);
    for(size_t i = 0;i<strlen(buff);i++){
        buff[i] = std::tolower(buff[i]);
    }
    Mystring temp{buff};
    delete [] buff; // Need to delete or memeory leak may occure.(smart pointer is efficiant)
    return temp;
}
// concatenate of string
Mystring Mystring ::operator+(const Mystring &rhs) const {
    char *buff = new char [strlen(str)+ strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;

}
// Comparring Strings
bool Mystring:: operator==(const Mystring &rhs) const{
    return (strcmp(str, rhs.str)==0);
}

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
    cout << boolalpha<<endl;

    Mystring larry{"LARRY"};
    Mystring moe{"Moe"};

    Mystring stooge = larry;
    larry.display();
    moe.display();

    cout<< (larry ==moe)<<endl;
    cout<<(larry==stooge)<<endl;

    larry.display();
    Mystring larry2 = - larry;
    larry2.display();

    Mystring stooges = larry + "Moe";
    Mystring two_stooges = moe +" " +larry2;

    two_stooges.display();

    return 0; 
}
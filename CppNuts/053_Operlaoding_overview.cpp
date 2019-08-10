/*

    Follow can't overload
    ::          scope
    :?          conditoinal operator
    .*          pointer to member 
    .           dot
    sizeof  


    Some basic rules :
    Can't change precedence and associativity
    arity (can't change division unary)
    can't overload operator for primitive type(int, double, etc)
    can't create new operators
    [],(),-> assignment operator (=) must be declared as  mem fucntions
    other operators can be delcared as mem methods or global functons
 */
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
        cout<<str<<"and it's lenght is  : "<<strlen(str)<<endl;
    }
    const char *Mystring::get_str() const{return str;}

    int main(){

        Mystring empty;
        Mystring larry("Larry");
        Mystring stooge{larry};

        empty.display();
        larry.display();
        stooge.display();
        return 0; 
    }
/* 
Section 8
Expression
Statements
Block statements
Operators
    Assignment
    Arthmetic
    Increment and Decrement
    Equality
    Rational
    Logical
    Compond Assigment
    Precedence
*/ 
#include <iostream>

/*
        Expression: A sequence of operators and operands that specifies a computation
    34
    1.5+5.6
    2*5
    a>b
    a=b
 */

/*
        Statement : Complete line of code which perform action
    terminated by ";"
    contain expression

    int x; // declaration
    favorite_number = 34;   //assignment
    1.5+ 2.8 ; //expression
    x = 2* 5;  // assignment
 */


/*
    Operator : 
    classified by 1: unary, binary, ternary
    Classified by 2: assignment, arithematic,increment/decrement,relational,logical,member acess..other
                    assignment =
                    arithematic +,-,*,/,%(reminder)
                    increment/derecemnt     ++,-- prefix(++num),postfix(num++) , used in pointers,

 */

/*
        Precedence : PEDAS = prarantices, exponents, multiplication, division,additon,substrication

 */
/*
    Assignment  Operator

            lhs = rhs
    rhs value is assign to lhs

 */
using namespace  std;

int main(int argc, char const *argv[])
{
/*
        Equality : return true or false based on comparission
 */
    cout<< (10==10) <<endl;
    cout << std::boolalpha;
    cout<<(20 == 10)<< endl<<(20!=10)<<endl;
    cout<< std::noboolalpha;
    cout<< (10==10) <<endl;

    double d1{12.0},d2{11.99999999999999999999999999999999};
    // Approximation 12,11.9999999999 are equal 
    // 
    cout<< std::boolalpha;
    cout<<"d1==d2; is"<<d1<<"=="<<d2<< (d1==d2)<<endl;
    /*
        MIX TYPE COMPARISSION 
     */

    // int num{0};
    // double d3;
    // cout<<"Enter an integer and a double separate by space"<<endl;
    // cin>>num>>d3;
    // cout<< (num ==d3)<<endl;

    /*  
            Relation Opearator : 
            < ,     lessthan 
            <=,     lessthan  equal to 
            >,      greater than
            >=,     grreater than equal to 
            <=>     three-way comparison  (C++20)

    */

   /*
            Logical Operator 
            not, !      negation
            and, &&     logical and
            or, ||      logical or
        Precidance : not, and, or
        short-circuit evaluation: evaluation will stop evaluation since it already know ans
        eg:
        exp1 and exp2 and exp3;
        exp1 or exp2 or exp3;
    */
    int num{20};
    cout<<"num >15 and num<21 is "<< (num>15 and num<21)<<endl;
    cout<<"num >15 && num<21 is "<< (num>15 && num<21)<<endl;

/*
            Compound Assignment Operator
            +=
            -=
            *=
            /=
            %=
            >>=
            <<=
            &=
            ^=
            |=
 */
    int a{10};
    cout << (a +=1)<< a<<endl;

/*
 Precedence  and Assocativity

 */
    return 0;
}


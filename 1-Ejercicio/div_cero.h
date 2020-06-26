#include <iostream>
#include <cstdlib>
#include <exception>

using namespace std;

class div_cero: public exception{
public:
    const char* what() const throw(){
        return "ERROR: division por cero!";
    }
};
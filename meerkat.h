#ifndef MEERKAT_H
#define MEERKAT_H
#include <string>

class meerkat
{

    std::string name;
    int age;
    public:
        meerkat() ;                      // no name or age is required to create a meerkat
        void setName(std::string meerName);   // change the meerkat's name
        std::string getName();
        void setAge(int meerAge);        // change the meerkat's age
        int getAge();
        ~meerkat();
};

#endif
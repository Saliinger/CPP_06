#pragma once

#include <iostream>

class  ScalarConverte {
    public:
        // orthodox cannonical form
        ScalarConverte();
        ScalarConverte(const  ScalarConverte &src);
        ScalarConverte &operator=(const  ScalarConverte &srd);
        ~ScalarConverte();
};
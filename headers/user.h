#ifndef USER_H
#define USER_H

#include "tools.h"

class User{
    public:
        //pass in 
        void draw();
        void setTool(tools t);
        void setColor(int index, int color);

    private:
        int colors[2];
        tools tool;
};

#endif
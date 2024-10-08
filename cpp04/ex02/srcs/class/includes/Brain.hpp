#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    private:
        std::string ideas[100];
    public:
        Brain(void);
        ~Brain(void);
        Brain(Brain &to_copy);
        
        Brain   &operator=(Brain &to_affect);
        std::string getIdeas(int i) const;
        void inception(std::string idea, int i);
};

#endif
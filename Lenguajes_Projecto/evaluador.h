#ifndef _EVALUADOR_H
#define _EVALUADOR_H
#include <iostream>
#include <cctype>
#include <stdlib.h>

class Eval {
public:
    Eval(std::string &in): in(in) {}
    ~Eval() {}
    int prioridad(char op);
    std::string convertir();
    void evaluar(std::string p);
    std::string getText() { return posf; }
    double getResult() { return res; }

private:
    std::string &in;
    std::string posf;
    double res;
};
#endif
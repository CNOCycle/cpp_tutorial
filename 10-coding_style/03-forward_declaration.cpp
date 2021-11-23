// g++ -c cpp_tutorial/10-coding_style/03-forward_declaration.cpp

double axb(double a, double b);

double func(double a, double b, double c)
{
    return c * axb(a, b);
}
#include <iostream>
#include <vector>
#include <string>

struct person
{
    std::string name;
    int age;
};

struct AoS
{
    std::vector<person> p;
};

struct SoA
{
    std::vector<std::string> vec_name;
    std::vector<int> vec_age;
};

int main()
{
    int MAX = 5;
    std::vector<std::string> arr_name = {"alice",
                                         "bob",
                                         "sheldon",
                                         "leonard",
                                         "penny"};
    std::vector<int> arr_age = {30, 40, 50, 60, 70};

    SoA var_SoA = {arr_name, arr_age};
    std::vector<person> arr_person(MAX);
    for(int ii = 0; ii < MAX; ii = ii + 1)
    {
        arr_person[ii].name = arr_name[ii];
        arr_person[ii].age = arr_age[ii];
    }
    AoS var_AsO = {arr_person};

    for(int ii = 0; ii < MAX; ii = ii + 1)
    {
        if(arr_person[ii].name != var_AsO.p[ii].name ||
           arr_person[ii].age  != var_AsO.p[ii].age)
        {
            std::cout << "mismatch\n";
        }
    }

    AoS copy_AsO = var_AsO;
    for(int ii = 0; ii < MAX; ii = ii + 1)
    {
        if(copy_AsO.p[ii].name != var_AsO.p[ii].name ||
           copy_AsO.p[ii].age  != var_AsO.p[ii].age)
        {
            std::cout << "mismatch\n";
        }
    }    

    return 0;
}
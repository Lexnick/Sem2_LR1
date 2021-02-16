#include <iostream>
#include "Vector.h"
int main() {

    int Count=0;
    std::cout<<"Enter the length of the 1st vector: "<<std::endl;
    std::cin>>Count;
    int* Elements=new int [Count];
    for (int i=0; i<Count; i++){
        std::cout<<"Enter the value for number "<<i<<std::endl;
        std::cin>>Elements[i];
    }
    Vector vec1(Count, Elements);
    delete [] Elements;
    std::cout<<"Vector 1: "<<vec1<<std::endl;
    Vector vec2(vec1);
    std::cout<<"Vector 2(copy of the vec1): "<<vec2<<std::endl;
    Vector vec3;
    vec3=vec2;
    std::cout<<"Vector 3(equality of the vec2): "<<vec3<<std::endl;
    std::cout<<"Enter the number of element u want to get"<<std::endl;
    int Number=0;
    std::cin>>Number;
    std::cout<<"Its value = "<<vec1[Number]<<std::endl;
    std::cout<<"Size of vector1: "<<vec1.size()<<std::endl;
    std::cout<<"Enter the value which number you want to get: "<<std::endl;
    int Value=0;
    std::cin>>Value;
    std::cout<<"Its number= "<<vec1.find(Value)<<std::endl;
    std::cout<<"Enter the value you want to push back: "<<std::endl;
    std::cin>>Value;
    vec1.push(Value);
    std::cout<<"Vec1 after changing: "<<vec1<<std::endl;
    std::cout<<"Enter the old value you want to change: "<<std::endl;
    std::cin>>Value;
    std::cout<<"Enter the new value you want to add: "<<std::endl;
    int NewValue;
    std::cin>>NewValue;
    vec1.change(Value, NewValue);
    std::cout<<"Vec1 after changing: "<<vec1;
    return 0;
}

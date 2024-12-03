#pragma once 
#include <string_view>
#include <iostream> 
class Dog 
{
    public: 
    explicit Dog(std::string_view name_param); 
    Dog() = default; 
    ~Dog(); 
    std::string_view get_name() {
        return dog_name; 
    } 
    void set_dog_name(std::string_view name) {
        dog_name = name; 
    }
    void print_info() {
        std::cout << "Dog [ name : " << dog_name << " ]" << std::endl; 
    }
    private: 
    std::string_view dog_name {"Puffy"}; 
};
#include "dog.h"
Dog::Dog(std::string_view name_param) : dog_name(name_param){
    std::cout << "Constructor for dog " << dog_name << " called" << std::endl; 
}
Dog::~Dog() {
    std::cout << "Destructor for dog " << dog_name << " called" << std::endl;  
}

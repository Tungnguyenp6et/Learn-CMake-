#include <iostream> 
#include <concepts> 
template <typename T> 
requires std::integral<T> 
T add(T a, T b) {
    return a+b; 
} 
int main() {
    std::cout << add(13, 14) << std::endl;  
    return 0;
}
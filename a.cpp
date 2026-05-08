#include <iostream>

int main() {
    // 1. Break the sync with C for faster speed
    std::ios_base::sync_with_stdio(false); 
    // 2. Untie input from output
    std::cin.tie(NULL);

    int x = 0;
    volatile int counter = 0; 

    while(x < 100) {
        x++;
        while (x < 1000) {
             counter++;
             if(counter == 1000) break;
        }
        // Use '\n' instead of std::endl to avoid forcing a "flush" every time
        std::cout << counter << '\n';
    }
}

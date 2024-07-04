#include <iostream>

void triangleUp (int x);
void triangleDo (int x);




int main() {

    std::cout << "1-" << std::endl; // 1-
    std::cout << std::endl;
    triangleUp(6);
    std::cout << std::endl;
    std::cout << "2-" << std::endl; // 2-
    std::cout << std::endl;
    triangleDo(7);


    return 0;

}

void triangleUp (int x) {
    for (int i = 1; i <= x; i++) {
        for (int j = 1; j <= i; j++) { // "j" keeps incrementing until it surpasses the limit "i", adding more stars untill the condition is false.
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void triangleDo (int x) {

    /*
      "i" starts at x = 7 --> checks the condition --> "i" decremenents --> j=i --> checks conditon --> keeps decrementing "j" until the condition is false
    --> prints "*******" --> repeats the process after "i" decrements initially.
      */
    for (int i = x; i >=0; i--){
        for(int j = i; j > 0; j--){
            std::cout << "*";


        }
        std::cout << std::endl;

    }




}

#include <iostream>
#include <vector>
using namespace std;
#define NumOfProducts 5

struct Product{
    int weight;
    double price;
};

int data1 [5] = { 16, 2, 80, 40, 12070};
int data2 [5] = { 8, 1, 40, 20, 6035};
int main(void){
    Product products[NumOfProducts];
    for (int i=0; i<NumOfProducts; i++){
        products[i].weight = data1[i];
    }
    cout << products[1].weight << endl;
    cout << products << endl;
    return 0;
}

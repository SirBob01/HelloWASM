#include <iostream>
#include <vector>

class M {
    int *data;
public:
    M();
    ~M();
    void print();   
};

M::M() {
    data = new int[50];
    for(int i = 0; i < 50; i++) {
        data[i] = i+1;
    }
}

M::~M() {
    delete[] data;
}

void M::print() {
    for(int i = 0; i < 50; i++) std::cout << data[i] << " ";
    std::cout << "\n";
}

void fibb(int n, std::vector<int> &numbers) {
    int i0 = 1;
    int i1 = 1;
    numbers.push_back(i0);
    numbers.push_back(i1);
    for(int i = 2; i < n; i++) {
        int j = i0 + i1;
        i0 = i1;
        i1 = j;
        numbers.push_back(j);
    }
}

int main() {
    std::vector<int> numbers;
    fibb(10, numbers);
    for(auto &num : numbers) {
        std::cout << num << "\n";
    } 

    M my_class;
    my_class.print();
}

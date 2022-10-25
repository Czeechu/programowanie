
#include <iostream>
#include <iomanip>
#include <random>
#include <vector>
#include <algorithm>

class Integer
{
public:
    static size_t counter;
    size_t id;
    int val;
    Integer() :val(0), id(++counter){}
};
size_t Integer::counter = 0;

bool comp(Integer a, Integer b);
std::ostream& operator<<(std::ostream& s, const Integer i);
std::ostream& operator<<(std::ostream& s, const std::vector<Integer> v);

int main()
{
    std::vector<Integer> v(10);
    std::random_device rd;
    
    for (auto& el : v)
    {
        el.val = rd() % 100;
    }

    std::cout << "\nprint 1\n" << v;
    
    std::sort(v.begin(), v.end(), comp);
    std::cout << "\nprint 2\n" << v;
    
    std::sort(v.begin(), v.end(), [](auto a, auto b) {return a.val > b.val; }); 
    std::cout << "\nprint 3\n" << v;
    
    std::sort(v.begin(), v.end(), [](auto a, auto b) {return a.id < b.id; });
    std::cout << "\nprint 4\n" << v;

    std::cout << "\n* END *\n";
    return 0;
}

bool comp(Integer a, Integer b)
{
    return a.val < b.val;
}

std::ostream& operator<<(std::ostream& s, const Integer i)
{
    return  s << "(" << std::setw(2) << i.id << ": "
        << std::setw(2) << i.val << ")";
}

std::ostream& operator<<(std::ostream& s, const std::vector<Integer> v)
{
    s << "START\n";
    for (auto el : v)
    {
        s << el << "\n";
    }
    s << "END\n";
    return s;
}

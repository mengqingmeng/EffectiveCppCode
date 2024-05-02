#include <iostream>
#include <vector>

class WidgetImpl{
    private:
        int a,b,c;
        std::vector<double> v;
};

class Widget{
    public:
        Widget(const Widget& rhs){} // 拷贝构造
        Widget& operator = (const Widget& rhs) // 赋值运算符
        {
            *pImpl = *(rhs.pImpl);
        }

        void swap(Widget& other){
            using std::swap;
            swap(pImpl,other.pImpl);
        }
    private:
        WidgetImpl* pImpl;
};

namespace std
{
    template<>
    void swap<Widget>(Widget& a, Widget& b){
        a.swap(b);
    }
} // namespace std

int main(){
    return 1;
}
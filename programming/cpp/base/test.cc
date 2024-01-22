#include <iostream>
using namespace std;
 
int main() {
    double num = -0.14; // 要转换的双精度浮点数
    int32_t i32 = -3;
    
    int64_t result = (int64_t)num * 2; // 进行类型转换

    int64_t num2 = (int64_t)i32;
    
    cout << "转换结果为：" << result << endl;
    cout << "num2转换结果为：" << num2 << endl;
    
    return 0;
}
#pragma once
#include <iostream>

// 在预处理器中声明了EmptyDLL 这样只有在我这个项目中EmptyAPI是导出 其他地方引用头文件就是导入
#ifdef EmptyDLL
#define EmptyAPI __declspec(dllexport)
#else	
#define EmptyAPI __declspec(dllimport)
#endif
class EmptyAPI EmptyFirstTest
{
public:
    EmptyFirstTest();
    ~EmptyFirstTest();
    std::string Show();
};


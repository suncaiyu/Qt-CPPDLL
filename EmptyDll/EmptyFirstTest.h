#pragma once
#include <iostream>

// ��Ԥ��������������EmptyDLL ����ֻ�����������Ŀ��EmptyAPI�ǵ��� �����ط�����ͷ�ļ����ǵ���
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


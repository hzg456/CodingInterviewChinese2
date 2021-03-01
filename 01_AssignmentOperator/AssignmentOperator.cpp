/*******************************************************************
Copyright(c) 2016, Harry He
All rights reserved.

Distributed under the BSD license.
(See accompanying file LICENSE.txt at
https://github.com/zhedahht/CodingInterviewChinese2/blob/master/LICENSE.txt)
*******************************************************************/

//==================================================================
// ����ָOffer�����������Թپ������ͱ���⡷����
// ���ߣ��κ���
//==================================================================

// ������1����ֵ���������
// ��Ŀ������Ϊ����CMyString����������Ϊ��������Ӹ�ֵ�����������

#include<cstring>
#include<cstdio>

class CMyString
{
public:
    CMyString(char* pData = nullptr);
    CMyString(const CMyString& str);
    ~CMyString(void);

    CMyString& operator = (const CMyString& str);

    void Print();
    void changedata(char* pData = nullptr);
      
private:
    char* m_pData;
};

void CMyString::changedata(char* pData)
{
    if(pData == nullptr)
    {
        delete[] m_pData;
        
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        delete[] m_pData;
        int length = strlen(pData);
        m_pData = new char[length + 1];
        strcpy(m_pData, pData);
    }
}

CMyString::CMyString(char *pData)
{
    if(pData == nullptr)
    {
        m_pData = new char[1];
        m_pData[0] = '\0';
    }
    else
    {
        int length = strlen(pData);
        m_pData = new char[length + 1];
        strcpy(m_pData, pData);
    }
}

CMyString::CMyString(const CMyString &str)
{
    //���ǹ��캯�����ʲ���Ҫ�����Ƿ�����Լ����������������ͨ���Լ������Լ�
    int length = strlen(str.m_pData);
    m_pData = new char[length + 1];
    strcpy(m_pData, str.m_pData);
}

CMyString::~CMyString()
{
    delete[] m_pData;
}

CMyString& CMyString::operator = (const CMyString& str)
{
    // if(this == &str)
    //     return *this;

    // delete []m_pData;
    // m_pData = nullptr;

    // m_pData = new char[strlen(str.m_pData) + 1];
    // strcpy(m_pData, str.m_pData);

    // return *this;

    //�߽�д����
    CMyString strTemp(str);//����strTempʱ������new ���ڴ治��ᱨ��
    if (this!=&str)
    {
        //CMyString strTemp(str);//����strTempʱ������new ���ڴ治��ᱨ��
        //char* pTemp=strTemp.m_pData;
        //strTemp.m_pData=m_pData;
        //m_pData=pTemp;
        m_pData=str.m_pData;//Ϊʲô�������У�
        
        // delete[] m_pData;
        // m_pData = new char[strlen(str.m_pData) + 1];
        
        //strcpy(m_pData,strTemp.m_pData);
        printf("m_pData is: %s.\n", m_pData);
        printf("strTemp.m_pData is: %s.\n", strTemp.m_pData);
        
    }
    printf("m_pData is: %s.\n", m_pData);

    return *this;
}

// ====================���Դ���====================
void CMyString::Print()
{
    printf("%s", m_pData);
}

void Test1()
{
    printf("Test1 begins:\n");

    char* text = "Hello world";

    CMyString str1(text);
    CMyString str2;
    str2 = str1;

    printf("The expected result is: %s.\n", text);

    printf("The actual result is: ");
    str2.Print();
    printf(".\n");
}

// ��ֵ���Լ�
void Test2()
{
    printf("Test2 begins:\n");

    char* text = "Hello world";

    CMyString str1(text);
    str1 = str1;

    printf("The expected result is: %s.\n", text);

    printf("The actual result is: ");
    str1.Print();
    printf(".\n");
}

// ������ֵ
void Test3()
{
    printf("Test3 begins:\n");

    char* text = "Hello world";

    CMyString str1(text);
    CMyString str2, str3;
    str3 = str2 = str1;

    printf("The expected result is: %s.\n", text);

    printf("The actual result is: ");
    str2.Print();
    printf(".\n");

    printf("The expected result is: %s.\n", text);

    printf("The actual result is: ");
    str3.Print();
    printf(".\n");
}

void Test4()
{
    printf("Test4 begins:\n");

    char* text = "Hello world";

    CMyString str1(text);
    CMyString str2, str3;
    str2 = str1;

    printf("The str1 is: ");
    str1.Print();
    printf(".\n");

    printf("The str2 is: ");
    str2.Print();
    printf(".\n");

    char* text2 = "change!";
    str1.changedata(text2);
    
    printf("The str1 is: ");
    str1.Print();
    printf(".\n");

    printf("The str2 is: ");
    str2.Print();
    printf(".\n");

}

void Test5()
{
    printf("Test4 begins:\n");
    char* text = "Hello world";
    char* text2=text;
    char* text3;
    //strcpy(text3,text);
    //strcpy(text2,text); strcpy�������=��ǳ����������֮����޸Ķ�����Ӱ����һ��
    printf(text);
    printf(".\n");
    printf(text2);
    printf(".\n");
    //printf(text3);
    printf(".\n");

    text="hello";
    text2="hello2";

    // delete[] text;
    //printf(text3);
    //printf(".\n");
    printf(text);
    printf(".\n");
    printf(text2);
    printf(".\n");
    printf("test5 end\n");

}

int main(int argc, char* argv[])
{
    // Test1();
    // Test2();
    // Test3();
    Test4();
    //Test5();

    return 0;
}


#ifndef RELAY_LOG_H_
#define RELAY_LOG_H_

#include <stdio.h>

// TGlobalInstance<T>：仅持指针（4B），create/destroy 管理堆实例
template <class T>
class TGlobalInstance
{
public:
    TGlobalInstance()
    {
        m_p = 0;
    }
    ~TGlobalInstance()
    {
        destroy();
    }
    void create()
    {
        if (m_p != 0)
        {
            return;
        }
        if (m_p == 0)
        {
            try
            {
                m_p = new T;
            }
            catch (...)
            {
                printf("cannot allocate memory in TGlobalInstance.! cannot continue");
                exit(-1);
            }
        }
    }
    void destroy()
    {
        if (m_p != 0)
        {
            delete m_p;
            m_p = 0;
        }
    }
    T* inst_ptr()
    {
        return m_p;
    }
    const T* inst_ptr() const
    {
        return m_p;
    }

private:
    T* m_p;
};

// ITextOutputDevice（抽象基类，vptr）
class ITextOutputDevice
{
public:
    ITextOutputDevice()
    {
    }
    virtual ~ITextOutputDevice()
    {
    }
    virtual void serialize(char c) = 0;
    virtual void serialize(char* str) = 0;
    virtual void serialize(char const* str) = 0;
    virtual void serialize(wchar_t c) = 0;
    virtual void serialize(wchar_t* str) = 0;
    virtual void serialize(wchar_t const* str) = 0;
};

// TextOutputDevice_FILE：vptr@0 / m_fp@4 / m_filename[0x104]@8，总 0x10c
class TextOutputDevice_FILE : public ITextOutputDevice
{
public:
    TextOutputDevice_FILE();
    ~TextOutputDevice_FILE();
    virtual void serialize(char c);
    virtual void serialize(char* str);
    virtual void serialize(char const* str);
    virtual void serialize(wchar_t c);
    virtual void serialize(wchar_t* str);
    virtual void serialize(wchar_t const* str);
    void _reopen();
    void close();
    void flush();

private:
    FILE* m_fp;
    char m_filename[0x104];
};

// TDebugTrace<char>：0x408
template <class T>
class TDebugTrace
{
public:
    TDebugTrace()
    {
        m_pDevice = 0;
        memset(m_buf, 0, sizeof(m_buf));
    }
    ~TDebugTrace()
    {
    }
    void setOutputDevice(ITextOutputDevice* p)
    {
        m_pDevice = p;
    }

private:
    ITextOutputDevice* m_pDevice;
    char m_buf[0x404];
};

#endif // RELAY_LOG_H_

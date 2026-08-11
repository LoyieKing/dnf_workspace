#ifndef NSL_TOKEN_H_
#define NSL_TOKEN_H_

namespace nsl {

// ORIG 的 assert 消息为 "idx0>=0 && idx0<MAX_TOKEN"（宏名未被展开），
// 说明 ORIG 源码中 MAX_TOKEN 是常量而非宏（旧 glibc assert 的 __STRING
// 会先展开参数再字符串化）。用 const 常量复刻该行为；数组边界/比较均为
// 常量表达式，语义与 #define 完全一致。
const int MAX_TOKEN = 256;

class Token
{
public:
    Token();
    ~Token();
    bool get_token(char* str, int size);
    char* get_context(int idx0);
    void free_token(int idx0);
    int get_n_token();

private:
    int n_token;
    char seps[52];
    char* m_token[MAX_TOKEN];
};

} // namespace nsl

#endif // NSL_TOKEN_H_

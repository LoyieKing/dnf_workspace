# _ZN3nsl16GetMessageBufferEi

`nsl::GetMessageBuffer(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80b76fa` | `0x30d` | `0x80b72bc` | `0x30d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,206 +1,206 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x80000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x16>
 cmpl   $0x0,0x8(%ebp)
 jns    <T> <_ZN3nsl16GetMessageBufferEi+0x42>
 movl   $0x4,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%edx
 movl   $"GetMessageBuffer",(%edx)
 movl   $0x0,0x8(%esp)
 movl   $&_ZTIPKc,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_throw>
 movl   $0x0,-0xc(%ebp)
 cmpl   $0x10,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x71>
 movl   $0x30,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi16EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x20,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x99>
 movl   $0x40,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi32EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x40,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0xc1>
 movl   $0x60,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi64EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x80,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0xec>
 movl   $0xa0,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi128EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x100,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x117>
 movl   $0x120,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi256EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x200,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x142>
 movl   $0x220,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi512EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x400,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x16d>
 movl   $0x420,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi1024EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x800,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x198>
 movl   $0x820,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi2048EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x1000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x1c3>
 movl   $0x1020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi4096EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x2000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x1ee>
 movl   $0x2020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi8192EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x4000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x219>
 movl   $0x4020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi16384EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x8000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x244>
 movl   $0x8020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi32768EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
-cmpl   $&_ZL14gUnicodeBuffer+0x5dfc,0x8(%ebp)
+cmpl   $&_ZL17g_szUnicodeBuffer+0x5dfc,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x26f>
-movl   $&_ZL14gUnicodeBuffer+0x5e1c,(%esp)
+movl   $&_ZL17g_szUnicodeBuffer+0x5e1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi65536EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
-cmpl   $&_ZL14gUnicodeBuffer+0x15dfc,0x8(%ebp)
+cmpl   $&_ZL17g_szUnicodeBuffer+0x15dfc,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x297>
-movl   $&_ZL14gUnicodeBuffer+0x15e1c,(%esp)
+movl   $&_ZL17g_szUnicodeBuffer+0x15e1c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi131072EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x40000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x2bf>
 movl   $0x40020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi262144EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 cmpl   $0x80000,0x8(%ebp)
 jg     <T> <_ZN3nsl16GetMessageBufferEi+0x2e7>
 movl   $0x80020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi524288EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 jmp    <T> <_ZN3nsl16GetMessageBufferEi+0x304>
 movl   $0x64020,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8TMsgCellILi409600EEC1Ev>
 mov    %ebx,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

CMsgCell * nsl::_ZN3nsl16GetMessageBufferEi(int nSize)

{
  undefined4 *puVar1;
  TMsgCell<524288> *local_10;
  
                    /* Unresolved local var: CMsgCell * pCell@[???] */
  if ((nSize < 0x80001) && (-1 < nSize)) {
    if (nSize < 0x11) {
      local_10 = operator_new(0x30);
      TMsgCell<16>::TMsgCell((TMsgCell<16> *)local_10);
    }
    else if (nSize < 0x21) {
      local_10 = operator_new(0x40);
      TMsgCell<32>::TMsgCell((TMsgCell<32> *)local_10);
    }
    else if (nSize < 0x41) {
      local_10 = operator_new(0x60);
      TMsgCell<64>::TMsgCell((TMsgCell<64> *)local_10);
    }
    else if (nSize < 0x81) {
      local_10 = operator_new(0xa0);
      TMsgCell<128>::TMsgCell((TMsgCell<128> *)local_10);
    }
    else if (nSize < 0x101) {
      local_10 = operator_new(0x120);
      TMsgCell<256>::TMsgCell((TMsgCell<256> *)local_10);
    }
    else if (nSize < 0x201) {
      local_10 = operator_new(0x220);
      TMsgCell<512>::TMsgCell((TMsgCell<512> *)local_10);
    }
    else if (nSize < 0x401) {
      local_10 = operator_new(0x420);
      TMsgCell<1024>::TMsgCell((TMsgCell<1024> *)local_10);
    }
    else if (nSize < 0x801) {
      local_10 = operator_new(0x820);
      TMsgCell<2048>::TMsgCell((TMsgCell<2048> *)local_10);
    }
    else if (nSize < 0x1001) {
      local_10 = operator_new(0x1020);
      TMsgCell<4096>::TMsgCell((TMsgCell<4096> *)local_10);
    }
    else if (nSize < 0x2001) {
      local_10 = operator_new(0x2020);
      TMsgCell<8192>::TMsgCell((TMsgCell<8192> *)local_10);
    }
    else if (nSize < 0x4001) {
      local_10 = operator_new(0x4020);
      TMsgCell<16384>::TMsgCell((TMsgCell<16384> *)local_10);
    }
    else if (nSize < 0x8001) {
      local_10 = operator_new(0x8020);
      TMsgCell<32768>::TMsgCell((TMsgCell<32768> *)local_10);
    }
    else if (nSize < 0x10001) {
      local_10 = operator_new(0x10020);
      TMsgCell<65536>::TMsgCell((TMsgCell<65536> *)local_10);
    }
    else if (nSize < 0x20001) {
      local_10 = operator_new(0x20020);
      TMsgCell<131072>::TMsgCell((TMsgCell<131072> *)local_10);
    }
    else if (nSize < 0x40001) {
      local_10 = operator_new(0x40020);
      TMsgCell<262144>::TMsgCell((TMsgCell<262144> *)local_10);
    }
    else if (nSize < 0x80001) {
      local_10 = operator_new(0x80020);
      TMsgCell<524288>::TMsgCell(local_10);
    }
    else {
      local_10 = operator_new(0x64020);
      TMsgCell<409600>::TMsgCell((TMsgCell<409600> *)local_10);
    }
    return &local_10->super_CMsgCell;
  }
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = "GetMessageBuffer";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,char_const*::typeinfo,0);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/GetMessageBuffer.h](source/DNFServer/GameServer/ServerLab/ServerLib/basic_source/GetMessageBuffer.h)（约第 10 行）：

```cpp
inline CMsgCell* GetMessageBuffer(int size)
{
    if (size > 0x80000 || size < 0)
    {
        throw (const char*)__FUNCTION__;
    }
    CMsgCell* pBuf = NULL;
    if (size <= 0x10)
    {
        pBuf = new TMsgCell<16>();
    }
    else if (size <= 0x20)
    {
        pBuf = new TMsgCell<32>();
    }
    else if (size <= 0x40)
    {
        pBuf = new TMsgCell<64>();
    }
    else if (size <= 0x80)
    {
        pBuf = new TMsgCell<128>();
    }
    else if (size <= 0x100)
    {
        pBuf = new TMsgCell<256>();
    }
    else if (size <= 0x200)
    {
        pBuf = new TMsgCell<512>();
    }
    else if (size <= 0x400)
    {
        pBuf = new TMsgCell<1024>();
    }
    else if (size <= 0x800)
    {
        pBuf = new TMsgCell<2048>();
    }
    else if (size <= 0x1000)
    {
        pBuf = new TMsgCell<4096>();
    }
    else if (size <= 0x2000)
    {
        pBuf = new TMsgCell<8192>();
    }
    else if (size <= 0x4000)
    {
        pBuf = new TMsgCell<16384>();
    }
    else if (size <= 0x8000)
    {
        pBuf = new TMsgCell<32768>();
    }
    else if (size <= 0x10000)
    {
        pBuf = new TMsgCell<65536>();
    }
    else if (size <= 0x20000)
    {
        pBuf = new TMsgCell<131072>();
    }
    else if (size <= 0x40000)
    {
        pBuf = new TMsgCell<262144>();
    }
    else if (size <= 0x80000)
    {
        pBuf = new TMsgCell<524288>();
    }
    else
    {
        pBuf = new TMsgCell<409600>();
    }
    return pBuf;
}
```

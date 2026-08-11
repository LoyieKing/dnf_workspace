# _ZN12CAppStopInit4InitEP12CApplicationiPPc

`CAppStopInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8070206` | `0x179` | `0x806c52a` | `0x23d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,118 +1,171 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x2c,%esp
+sub    $0x3c,%esp
 movl   $"RECV STOP, Manager had stoped this program.",(%esp)
 call   <T> <puts>
-lea    -0x21(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
-lea    -0x21(%ebp),%edx
+lea    -0x29(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Send_Term_SignalERKSs>
-mov    %eax,%ebx
-xor    $0x1,%ebx
-lea    -0x28(%ebp),%eax
+test   %eax,%eax
+setne  %bl
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x92>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x28(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x77>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x21(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x21(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 test   %bl,%bl
 je     <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x171>
-lea    -0x19(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x19(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"By CAppStopInit::Init(), this app had stoped!",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x20(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11c>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x116>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x133>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x133>
-lea    -0x20(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x14e>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x133>
+call   <T> <_ZSt9terminatev>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcED1Ev>
+movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+lea    -0x19(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x19(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"By CAppStopInit::Init(), this app had stoped!_1",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x20(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1e8>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1e2>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1ff>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1ff>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x21a>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1ff>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-add    $0x2c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CAppStopInit::Init(CApplication*, int, char**) */

void __thiscall
CAppStopInit::_ZN12CAppStopInit4InitEP12CApplicationiPPc
          (CAppStopInit *this,CApplication *param_1,int param_2,char **param_3)

{
  char cVar1;
  CDNFException *this_00;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d [13];
  
  puts("RECV STOP, Manager had stoped this program.");
  std::allocator<char>::allocator();
                    /* try { // try from 0807023f to 08070243 has its CatchHandler @ 0807027d */
  std::string::string(local_2c,param_3[1],&local_25);
                    /* try { // try from 08070251 to 08070255 has its CatchHandler @ 08070268 */
  cVar1 = CApplication::Send_Term_Signal((string *)param_1);
                    /* try { // try from 08070261 to 08070265 has its CatchHandler @ 0807027d */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080702cb to 080702cf has its CatchHandler @ 08070339 */
    std::string::string(local_24,"By CAppStopInit::Init(), this app had stoped!",local_1d);
    this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080702ea to 080702ee has its CatchHandler @ 080702f1 */
    CDNFException::CDNFException(this_00,local_24);
                    /* try { // try from 08070328 to 0807032c has its CatchHandler @ 0807032f */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFAppStopInit.cpp](source/DNFServer/GameServer/DBMW/DNFAppStopInit.cpp)（约第 29 行）：

```cpp
void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, Manager had stoped this program.");
    if (app->Send_Term_Signal(std::string(argv[1])))
        throw CDNFException("By CAppStopInit::Init(), this app had stoped!");
    throw CDNFException("By CAppStopInit::Init(), this app had stoped!_1");
}
```

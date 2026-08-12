# _ZN12CAppStopInit4InitEP12CApplicationiPPc

`CAppStopInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8065616` | `0x248` | `0x804d55e` | `0x184` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,121 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
-movl   $"RECV STOP, 관리자에 의해 강제로 종료 되었습니다.",(%esp)
+sub    $0x2c,%esp
+movl   $"RECV STOP, ...",(%esp)
 call   <T> <puts>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBase5ClearEv>
-lea    -0x29(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
-lea    -0x29(%ebp),%edx
+lea    -0x21(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x30(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Send_Term_SignalERKSs>
-mov    %eax,%ebx
-xor    $0x1,%ebx
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x9d>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x30(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x82>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x29(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x17c>
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x21(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CAppStopInit::Init()에 의해 강제로 종료되었음!",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x28(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x127>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%eax
-mov    %esi,%edx
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x121>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
-lea    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x159>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
-call   <T> <_ZSt9terminatev>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x66>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
+lea    -0x28(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Send_Term_SignalERKSs>
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x171>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CAppStopInit::Init()에 의해 강제로 종료되었음!_1",0x4(%esp)
+movl   $"CAppStopInit::Init() ...",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x20(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1f3>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x107>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1ed>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x101>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x225>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x133>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x156>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+add    $0x2c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* CAppStopInit::Init(CApplication*, int, char**) */

void __thiscall
CAppStopInit::_ZN12CAppStopInit4InitEP12CApplicationiPPc
          (CAppStopInit *this,CApplication *param_1,int param_2,char **param_3)

{
  char cVar1;
  CDNFException *pCVar2;
  string local_34 [7];
  allocator local_2d;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d [13];
  
  puts(&DAT_0811df10);
  CAppBase::Clear((CAppBase *)param_1);
  std::allocator<char>::allocator();
                    /* try { // try from 0806565a to 0806565e has its CatchHandler @ 08065698 */
  std::string::string(local_34,param_3[1],&local_2d);
                    /* try { // try from 0806566c to 08065670 has its CatchHandler @ 08065683 */
  cVar1 = CApplication::Send_Term_Signal((string *)param_1);
                    /* try { // try from 0806567c to 08065680 has its CatchHandler @ 08065698 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator((allocator<char> *)&local_2d);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 080656e6 to 080656ea has its CatchHandler @ 08065754 */
    std::string::string(local_2c,&DAT_0811df44,&local_25);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08065705 to 08065709 has its CatchHandler @ 0806570c */
    CDNFException::CDNFException(pCVar2,local_2c);
                    /* try { // try from 08065743 to 08065747 has its CatchHandler @ 0806574a */
    std::string::~string(local_2c);
    std::allocator<char>::~allocator((allocator<char> *)&local_25);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 080657b2 to 080657b6 has its CatchHandler @ 08065820 */
  std::string::string(local_24,&DAT_0811df74,local_1d);
  pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080657d1 to 080657d5 has its CatchHandler @ 080657d8 */
  CDNFException::CDNFException(pCVar2,local_24);
                    /* try { // try from 0806580f to 08065813 has its CatchHandler @ 08065816 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::~CDNFException);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFAppStopInit.cpp](source/DNFServer/GameServer/Guild/DNFAppStopInit.cpp)（约第 80 行）：

```cpp
void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, ...");
    app->Clear();
    std::string fn(argv[1]);
    if (app->Send_Term_Signal(fn) != 0)
    {
        throw CDNFException("CAppStopInit::Init() ...");
    }
}
```

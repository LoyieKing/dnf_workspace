# _ZN12CAppStopInit4InitEP12CApplicationiPPc

`CAppStopInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806bbd6` | `0x248` | `0x804fd2e` | `0x248` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,174 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 movl   $"RECV STOP, 관리자에 의해 강제로 종료 되었습니다.",(%esp)
 call   <T> <puts>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN8CAppBase5ClearEv>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x29(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
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
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x66>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-test   %bl,%bl
-je     <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x17c>
+lea    -0x30(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication16Send_Term_SignalERKSs>
+mov    %al,-0x19(%ebp)
+cmpb   $0x1,-0x19(%ebp)
+je     <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x171>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CAppStopInit::Init()에 의해 강제로 종료되었음!",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x127>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x107>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x121>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x101>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x159>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x133>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x13e>
+jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x11e>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
+jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x156>
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x19(%ebp),%eax
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x19(%ebp),%eax
+lea    -0x1a(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CAppStopInit::Init()에 의해 강제로 종료되었음!_1",0x4(%esp)
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
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1f3>
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
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x1ed>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x225>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN12CAppStopInit4InitEP12CApplicationiPPc+0x20a>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x19(%ebp),%eax
+lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x19(%ebp),%eax
+lea    -0x1a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
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
  
  puts(&DAT_08122850);
  CAppBase::Clear((CAppBase *)param_1);
  std::allocator<char>::allocator();
                    /* try { // try from 0806bc1a to 0806bc1e has its CatchHandler @ 0806bc58 */
  std::string::string(local_34,param_3[1],&local_2d);
                    /* try { // try from 0806bc2c to 0806bc30 has its CatchHandler @ 0806bc43 */
  cVar1 = CApplication::Send_Term_Signal((string *)param_1);
                    /* try { // try from 0806bc3c to 0806bc40 has its CatchHandler @ 0806bc58 */
  std::string::~string(local_34);
  std::allocator<char>::~allocator((allocator<char> *)&local_2d);
  if (cVar1 != '\x01') {
    std::allocator<char>::allocator();
                    /* try { // try from 0806bca6 to 0806bcaa has its CatchHandler @ 0806bd14 */
    std::string::string(local_2c,&DAT_08122884,&local_25);
    pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806bcc5 to 0806bcc9 has its CatchHandler @ 0806bccc */
    CDNFException::CDNFException(pCVar2,local_2c);
                    /* try { // try from 0806bd03 to 0806bd07 has its CatchHandler @ 0806bd0a */
    std::string::~string(local_2c);
    std::allocator<char>::~allocator((allocator<char> *)&local_25);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0806bd72 to 0806bd76 has its CatchHandler @ 0806bde0 */
  std::string::string(local_24,&DAT_081228b4,local_1d);
  pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806bd91 to 0806bd95 has its CatchHandler @ 0806bd98 */
  CDNFException::CDNFException(pCVar2,local_24);
                    /* try { // try from 0806bdcf to 0806bdd3 has its CatchHandler @ 0806bdd6 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::~CDNFException);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFAppStopInit.cpp](source/DNFServer/GameServer/Monitor/DNFAppStopInit.cpp)（约第 35 行）：

```cpp
void CAppStopInit::Init(CApplication* app, int argc, char** argv)
{
    puts("RECV STOP, \xb0\xfc\xb8\xae\xc0\xda\xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1 \xb5\xc7\xbe\xfa\xbd\xc0\xb4\xcf\xb4\xd9.");
    app->Clear();
    {
        std::string pidFile(argv[1]);
        char ok = app->Send_Term_Signal(pidFile);
        if (ok != 1)
        {
            throw CDNFException(
                "CAppStopInit::Init()\xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xb5\xc7\xbe\xfa\xc0\xbd!");
        }
    }
    throw CDNFException(
        "CAppStopInit::Init()\xbf\xa1 \xc0\xc7\xc7\xd8 \xb0\xad\xc1\xa6\xb7\xce \xc1\xbe\xb7\xe1\xb5\xc7\xbe\xfa\xc0\xbd!_1");
}
```

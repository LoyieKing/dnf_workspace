# _ZN13CAppStartInit4InitEP12CApplicationiPPc

`CAppStartInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x8060312` | `0x238` | `0x804d5bc` | `0x234` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,176 +1,174 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,(%esp)
 call   <T> <srand>
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfigC1Ev>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x10(%eax)
 lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 mov    0x14(%ebp),%eax
 add    $0x4,%eax
 mov    (%eax),%eax
 lea    -0x21(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 mov    0xc(%ebp),%eax
 mov    0x10(%eax),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig14Check_FileNameERKSs>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x94>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x92>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xa1>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x9f>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xbc>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xba>
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
 movl   $0x4c0,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfigC1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xf9>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xf7>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,%eax
-mov    %eax,%edx
+mov    %ebx,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x14(%eax)
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfigC1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x135>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x131>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x68(%eax)
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CAppStartInit11Init_DaemonEiPPc>
 cmp    $0xffffffff,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x230>
+je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x22c>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CAppStartInit::Init() Demon Init Exception Break!",0x4(%esp)
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
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1db>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1d7>
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
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1d5>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1d1>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f2>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ee>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f2>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ee>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20d>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x209>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f2>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ee>
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
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CAppStartInit::Init(CApplication*, int, char**) */

void __thiscall
CAppStartInit::_ZN13CAppStartInit4InitEP12CApplicationiPPc
          (CAppStartInit *this,CApplication *param_1,int param_2,char **param_3)

{
  uint __seed;
  CAppConfig *this_00;
  CServerConfig *this_01;
  CKillUSRConfig *this_02;
  int iVar1;
  CDNFException *this_03;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d [13];
  
  __seed = time((time_t *)0x0);
  srand(__seed);
  this_00 = operator_new(0x10);
  CAppConfig::_ZN10CAppConfigC2Ev(this_00);
  *(CAppConfig **)(param_1 + 0x10) = this_00;
  std::allocator<char>::allocator();
                    /* try { // try from 08060375 to 08060379 has its CatchHandler @ 080603b3 */
  std::string::string(local_2c,param_3[1],&local_25);
                    /* try { // try from 0806038a to 0806038e has its CatchHandler @ 08060391 */
  CAppConfig::Check_FileName(*(string **)(param_1 + 0x10));
                    /* try { // try from 080603ac to 080603b0 has its CatchHandler @ 080603b3 */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  this_01 = operator_new(0x4c0);
                    /* try { // try from 080603ec to 080603f0 has its CatchHandler @ 080603f3 */
  CServerConfig::CServerConfig(this_01);
  *(CServerConfig **)(param_1 + 0x14) = this_01;
  this_02 = operator_new(0x10);
                    /* try { // try from 08060428 to 0806042c has its CatchHandler @ 0806042f */
  CKillUSRConfig::CKillUSRConfig(this_02);
  *(CKillUSRConfig **)(param_1 + 0x68) = this_02;
  iVar1 = _ZN13CAppStartInit11Init_DaemonEiPPc(this,param_2,param_3);
  if (iVar1 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 08060496 to 0806049a has its CatchHandler @ 08060504 */
    std::string::string(local_24,"CAppStartInit::Init() Demon Init Exception Break!",local_1d);
    this_03 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080604b5 to 080604b9 has its CatchHandler @ 080604bc */
    CDNFException::CDNFException(this_03,local_24);
                    /* try { // try from 080604f3 to 080604f7 has its CatchHandler @ 080604fa */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_03,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Manager/DNFAppStartInit.cpp](source/DNFServer/GameServer/Manager/DNFAppStartInit.cpp)（约第 70 行）：

```cpp
void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(std::string(argv[1]));
    app->m_serverConfig = new CServerConfig;
    app->m_killUsrConfig = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) == -1)
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
}
```

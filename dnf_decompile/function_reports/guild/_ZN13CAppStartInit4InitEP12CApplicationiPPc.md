# _ZN13CAppStartInit4InitEP12CApplicationiPPc

`CAppStartInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8064d0e` | `0x252` | `0x804cfca` | `0x24e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,185 +1,183 @@
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
 movl   $0x2c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfigC1Ev>
 jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x4f>
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
 mov    %edx,0x5c(%eax)
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
 mov    0x5c(%eax),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig14Check_FileNameERKSs>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xae>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xac>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xbb>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xb9>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd6>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xd4>
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
 movl   $0xbf8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CServerConfigC1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x113>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x111>
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
 mov    %edx,0x60(%eax)
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfigC1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14f>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x14b>
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
 mov    %edx,0x64(%eax)
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
-je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x24a>
+je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x246>
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
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f5>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1f1>
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
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1ef>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x1eb>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x227>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x223>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x20c>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
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
  this_00 = operator_new(0x2c);
                    /* try { // try from 08064d3e to 08064d42 has its CatchHandler @ 08064d45 */
  CAppConfig::_ZN10CAppConfigC2Ev(this_00);
  *(CAppConfig **)(param_1 + 0x5c) = this_00;
  std::allocator<char>::allocator();
                    /* try { // try from 08064d8b to 08064d8f has its CatchHandler @ 08064dc9 */
  std::string::string(local_2c,param_3[1],&local_25);
                    /* try { // try from 08064da0 to 08064da4 has its CatchHandler @ 08064da7 */
  CAppConfig::Check_FileName(*(string **)(param_1 + 0x5c));
                    /* try { // try from 08064dc2 to 08064dc6 has its CatchHandler @ 08064dc9 */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  this_01 = operator_new(0xbf8);
                    /* try { // try from 08064e02 to 08064e06 has its CatchHandler @ 08064e09 */
  CServerConfig::CServerConfig(this_01);
  *(CServerConfig **)(param_1 + 0x60) = this_01;
  this_02 = operator_new(0x10);
                    /* try { // try from 08064e3e to 08064e42 has its CatchHandler @ 08064e45 */
  CKillUSRConfig::CKillUSRConfig(this_02);
  *(CKillUSRConfig **)(param_1 + 100) = this_02;
  iVar1 = _ZN13CAppStartInit11Init_DaemonEiPPc(this,param_2,param_3);
  if (iVar1 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 08064eac to 08064eb0 has its CatchHandler @ 08064f1a */
    std::string::string(local_24,"CAppStartInit::Init() Demon Init Exception Break!",local_1d);
    this_03 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08064ecb to 08064ecf has its CatchHandler @ 08064ed2 */
    CDNFException::CDNFException(this_03,local_24);
                    /* try { // try from 08064f09 to 08064f0d has its CatchHandler @ 08064f10 */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_03,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFAppStartInit.cpp](source/DNFServer/GameServer/Guild/DNFAppStartInit.cpp)（约第 92 行）：

```cpp
void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    app->m_appConfig->Check_FileName(std::string(argv[1]));
    app->m_serverConfig = new CServerConfig;
    app->m_killConfig = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}
```

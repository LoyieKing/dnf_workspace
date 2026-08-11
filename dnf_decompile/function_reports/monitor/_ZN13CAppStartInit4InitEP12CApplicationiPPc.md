# _ZN13CAppStartInit4InitEP12CApplicationiPPc

`CAppStartInit::Init(CApplication*, int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806b272` | `0x265` | `0x804f76e` | `0x29d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,184 +1,202 @@
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
 movl   $0x34,(%esp)
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
 mov    %edx,0x8c(%eax)
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
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xa0>
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
 mov    0xc(%ebp),%eax
 mov    0x8c(%eax),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN10CAppConfig14Check_FileNameERKSs>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xb4>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xe0>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xc1>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0xdc>
-mov    %edx,%ebx
-mov    %eax,%esi
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x21(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
 movl   $0x7c,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberConfigC1Ev>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x11d>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x94(%eax)
-movl   $0x34,(%esp)
+movl   $0x30,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CMemberExpTblC1Ev>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x15a>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x98(%eax)
 movl   $0x10,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CKillUSRConfigC1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x15f>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x197>
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
 mov    %edx,0x9c(%eax)
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
-je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x25d>
+je     <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x295>
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
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x208>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x240>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x202>
-cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x21f>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%eax
-mov    %ebx,%edx
-jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x21f>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x23a>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x21f>
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x257>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x257>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x272>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN13CAppStartInit4InitEP12CApplicationiPPc+0x257>
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
  CMemberConfig *this_01;
  CMemberExpTbl *this_02;
  CKillUSRConfig *this_03;
  int iVar1;
  CDNFException *this_04;
  string local_2c [7];
  allocator local_25;
  string local_24 [7];
  allocator local_1d [13];
  
  __seed = time((time_t *)0x0);
  srand(__seed);
  this_00 = operator_new(0x34);
                    /* try { // try from 0806b2a2 to 0806b2a6 has its CatchHandler @ 0806b2a9 */
  CAppConfig::_ZN10CAppConfigC2Ev(this_00);
  *(CAppConfig **)(param_1 + 0x8c) = this_00;
  std::allocator<char>::allocator();
                    /* try { // try from 0806b2f2 to 0806b2f6 has its CatchHandler @ 0806b333 */
  std::string::string(local_2c,param_3[1],&local_25);
                    /* try { // try from 0806b30a to 0806b30e has its CatchHandler @ 0806b311 */
  CAppConfig::Check_FileName(*(string **)(param_1 + 0x8c));
                    /* try { // try from 0806b32c to 0806b330 has its CatchHandler @ 0806b333 */
  std::string::~string(local_2c);
  std::allocator<char>::~allocator((allocator<char> *)&local_25);
  this_01 = operator_new(0x7c);
  CMemberConfig::CMemberConfig(this_01);
  *(CMemberConfig **)(param_1 + 0x94) = this_01;
  this_02 = operator_new(0x34);
  CMemberExpTbl::CMemberExpTbl(this_02);
  *(CMemberExpTbl **)(param_1 + 0x98) = this_02;
  this_03 = operator_new(0x10);
                    /* try { // try from 0806b3b2 to 0806b3b6 has its CatchHandler @ 0806b3b9 */
  CKillUSRConfig::CKillUSRConfig(this_03);
  *(CKillUSRConfig **)(param_1 + 0x9c) = this_03;
  iVar1 = _ZN13CAppStartInit11Init_DaemonEiPPc(this,param_2,param_3);
  if (iVar1 == -1) {
    std::allocator<char>::allocator();
                    /* try { // try from 0806b423 to 0806b427 has its CatchHandler @ 0806b491 */
    std::string::string(local_24,"CAppStartInit::Init() Demon Init Exception Break!",local_1d);
    this_04 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806b442 to 0806b446 has its CatchHandler @ 0806b449 */
    CDNFException::CDNFException(this_04,local_24);
                    /* try { // try from 0806b480 to 0806b484 has its CatchHandler @ 0806b487 */
    std::string::~string(local_24);
    std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_04,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFAppStartInit.cpp](source/DNFServer/GameServer/Monitor/DNFAppStartInit.cpp)（约第 43 行）：

```cpp
void CAppStartInit::Init(CApplication* app, int argc, char** argv)
{
    srand((unsigned int)time(0));
    app->m_appConfig = new CAppConfig;
    {
        std::string cfgName(argv[1]);
        app->m_appConfig->Check_FileName(cfgName);
    }
    app->m_memberConfig = new CMemberConfig;
    app->m_memberExpTbl = new CMemberExpTbl;
    app->m_serverHandler = new CKillUSRConfig;
    if (Init_Daemon(argc, argv) == -1)
    {
        throw CDNFException("CAppStartInit::Init() Demon Init Exception Break!");
    }
}
```

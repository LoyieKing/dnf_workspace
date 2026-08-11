# _ZN12CApplication15AttachAppInitorEPPc

`CApplication::AttachAppInitor(char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8062f74` | `0x1af` | `0x804ea62` | `0x28f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,133 +1,199 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0xc(%ebp),%eax
 add    $0x8,%eax
 mov    (%eax),%eax
-mov    %eax,-0x1c(%ebp)
+test   %eax,%eax
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xe5>
+lea    -0x21(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSaIcEC1Ev>
+lea    -0x21(%ebp),%eax
+mov    %eax,0x8(%esp)
+movl   $"CApplication::AttachAppInitor() invalid argv[2]!",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsC1EPKcRKSaIcE>
+lea    -0x28(%ebp),%esi
+movl   $0x8,(%esp)
+call   <T> <__cxa_allocate_exception>
+mov    %eax,%ebx
+mov    %ebx,%eax
+mov    %esi,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN13CDNFExceptionC1ERKSs>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x90>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <__cxa_free_exception>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x8a>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xa7>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xa7>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xc2>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xa7>
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
+movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
+movl   $&_ZTI13CDNFException,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <__cxa_throw>
+mov    0xc(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 movl   $"start",0x4(%esp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-je     <T> <_ZN12CApplication15AttachAppInitorEPPc+0x42>
+je     <T> <_ZN12CApplication15AttachAppInitorEPPc+0x11d>
+mov    0xc(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 movl   $"nofork",0x4(%esp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x83>
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x15e>
 movl   $0x4,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CAppStartInitC1Ev>
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x74>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x14f>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x1a7>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x287>
+mov    0xc(%ebp),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
 movl   $"stop",0x4(%esp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strcmp>
 test   %eax,%eax
-jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xdb>
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x1bb>
 movl   $0x4,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CAppStopInitC1Ev>
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0xcc>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x1ac>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x1a7>
-lea    -0x1d(%ebp),%eax
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x287>
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1d(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CApplication::AttachAppInitor() 실행 아규먼트 오류\n",0x4(%esp)
-lea    -0x24(%ebp),%eax
+movl   $"CApplication::AttachAppInitor() invalid mode!",0x4(%esp)
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x24(%ebp),%esi
+lea    -0x20(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x152>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x232>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x14c>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x22c>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x169>
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x249>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x169>
-lea    -0x24(%ebp),%eax
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x249>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x184>
+jmp    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x264>
 cmp    $0xffffffff,%edx
-jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x169>
+jne    <T> <_ZN12CApplication15AttachAppInitorEPPc+0x249>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x1d(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x1d(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
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

/* CApplication::AttachAppInitor(char**) */

void __thiscall
CApplication::_ZN12CApplication15AttachAppInitorEPPc(CApplication *this,char **param_1)

{
  int iVar1;
  CAppStartInit *this_00;
  CAppStopInit *this_01;
  CDNFException *this_02;
  string local_28 [7];
  allocator local_21;
  char *local_20;
  
  local_20 = param_1[2];
  iVar1 = strcmp(local_20,"start");
  if ((iVar1 != 0) && (iVar1 = strcmp(local_20,"nofork"), iVar1 != 0)) {
    iVar1 = strcmp(local_20,"stop");
    if (iVar1 == 0) {
      this_01 = operator_new(4);
                    /* try { // try from 08063021 to 08063025 has its CatchHandler @ 08063028 */
      CAppStopInit::_ZN12CAppStopInitC2Ev(this_01);
      *(CAppStopInit **)(this + 0xc) = this_01;
      return;
    }
    std::allocator<char>::allocator();
                    /* try { // try from 0806306f to 08063073 has its CatchHandler @ 080630dd */
    std::string::string(local_28,&DAT_0811ca58,&local_21);
    this_02 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0806308e to 08063092 has its CatchHandler @ 08063095 */
    CDNFException::CDNFException(this_02,local_28);
                    /* try { // try from 080630cc to 080630d0 has its CatchHandler @ 080630d3 */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this_02,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  this_00 = operator_new(4);
                    /* try { // try from 08062fc9 to 08062fcd has its CatchHandler @ 08062fd0 */
  CAppStartInit::CAppStartInit(this_00);
  *(CAppStartInit **)(this + 0xc) = this_00;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 292 行）：

```cpp
void CApplication::AttachAppInitor(char** argv)
{
    const char* cmd = argv[2];
    if (strcmp(cmd, "start") == 0 || strcmp(cmd, "nofork") == 0)
    {
        m_appInit = new CAppStartInit;
        return;
    }
    if (strcmp(cmd, "stop") == 0)
    {
        m_appInit = new CAppStopInit;
        return;
    }
    throw CDNFException("CApplication::AttachAppInitor() \xbd\xc7\xc7\xe0 "
                        "\xbe\xc6\xb1\xd4\xb8\xd5\xc6\xae \xbf\xc0\xb7\xf9\n");
}
```

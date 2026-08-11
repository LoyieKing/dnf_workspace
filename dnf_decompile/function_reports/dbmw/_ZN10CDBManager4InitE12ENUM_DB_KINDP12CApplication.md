# _ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication

`CDBManager::Init(ENUM_DB_KIND, CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8070e30` | `0x373` | `0x8057cca` | `0x270` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,274 +1,189 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x8(%ebp),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x44(%eax)
 cmpl   $0x1,0xc(%ebp)
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x28f>
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x268>
 movl   $0x0,-0x1c(%ebp)
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x27b>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x259>
 mov    -0x1c(%ebp),%esi
 movl   $&_ZSt7nothrow,0x4(%esp)
 movl   $0x4208c,(%esp)
 call   <T> <_ZnwjRKSt9nothrow_t>
 mov    %eax,%ebx
 mov    %ebx,%eax
 test   %eax,%eax
-je     <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x7b>
+je     <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x77>
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CMySqlC1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x77>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x73>
+mov    %edx,%esi
+mov    %eax,%edi
 movl   $&_ZSt7nothrow,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZdlPvRKSt9nothrow_t>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %ecx,(%esp)
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x7d>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x79>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax,%esi,4)
 mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 test   %eax,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x172>
-lea    -0x2d(%ebp),%eax
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x15e>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CDBManager::Init() DB Handle New Error\n",0x4(%esp)
-lea    -0x34(%ebp),%eax
+movl   $"CDBManager::Init() new CMySql fail!",0x4(%esp)
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x115>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x109>
+mov    %edx,%esi
+mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x34(%ebp),%eax
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x10f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x134>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x103>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x120>
 call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x134>
-lea    -0x34(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x120>
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x14f>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x134>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x13b>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x120>
 call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x2d(%ebp),%eax
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-mov    %ecx,(%esp)
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2d(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ecx
 mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    %eax,(%esp)
 call   *%ecx
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x277>
-lea    -0x25(%ebp),%eax
+sete   %al
+test   %al,%al
+je     <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x255>
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x25(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
-movl   $"CDBManager::Init() DB Handle Error\n",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+movl   $"CDBManager::Init() mysql init fail!",0x4(%esp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x2c(%ebp),%esi
+lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x21a>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x200>
+mov    %edx,%esi
+mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x2c(%ebp),%eax
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x214>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x239>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x1fa>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x217>
 call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x239>
-lea    -0x2c(%ebp),%eax
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x217>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x254>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x239>
+jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x232>
+cmp    $0xffffffff,%edx
+jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x217>
 call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x25(%ebp),%eax
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-mov    %ecx,(%esp)
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x25(%ebp),%eax
+lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 addl   $0x1,-0x1c(%ebp)
 cmpl   $0x10,-0x1c(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x28>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x36b>
-lea    -0x1d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcEC1Ev>
-lea    -0x1d(%ebp),%eax
-mov    %eax,0x8(%esp)
-movl   $"CDBManager::Init() DB Handle Create Error\n",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x24(%ebp),%esi
-movl   $0x8,(%esp)
-call   <T> <__cxa_allocate_exception>
-mov    %eax,%ebx
-mov    %ebx,%eax
-mov    %esi,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x30e>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%esi
-mov    %ecx,%edi
-mov    %ebx,(%esp)
-call   <T> <__cxa_free_exception>
-mov    %edi,%ecx
-mov    %esi,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x308>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x32d>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x32d>
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x348>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication+0x32d>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x1d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-mov    %ecx,(%esp)
-call   <T> <_Unwind_Resume>
-lea    -0x1d(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSaIcED1Ev>
-movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
-movl   $&_ZTI13CDNFException,0x4(%esp)
-mov    %ebx,(%esp)
-call   <T> <__cxa_throw>
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::Init(ENUM_DB_KIND, CApplication*) */

void __thiscall
CDBManager::_ZN10CDBManager4InitE12ENUM_DB_KINDP12CApplication
          (CDBManager *this,int param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  CMySql *this_00;
  CDNFException *pCVar3;
  string local_38 [7];
  allocator local_31;
  string local_30 [7];
  allocator local_29;
  string local_28 [7];
  allocator local_21;
  int local_20;
  
  *(undefined4 *)(this + 0x44) = param_3;
  if (param_2 != 1) {
    std::allocator<char>::allocator();
                    /* try { // try from 080710df to 080710e3 has its CatchHandler @ 08071159 */
    std::string::string(local_28,"CDBManager::Init() DB Handle Create Error\n",&local_21);
    pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080710fe to 08071102 has its CatchHandler @ 08071105 */
    CDNFException::CDNFException(pCVar3,local_28);
                    /* try { // try from 08071144 to 08071148 has its CatchHandler @ 0807114b */
    std::string::~string(local_28);
    std::allocator<char>::~allocator((allocator<char> *)&local_21);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::~CDNFException);
  }
  local_20 = 0;
  while( true ) {
    iVar1 = local_20;
    if (0x10 < local_20) {
      return;
    }
    this_00 = operator_new(0x4208c,(nothrow_t *)&std::nothrow);
    if (this_00 != (CMySql *)0x0) {
                    /* try { // try from 08070e7c to 08070e80 has its CatchHandler @ 08070e83 */
      CMySql::CMySql(this_00);
    }
    *(CMySql **)(this + iVar1 * 4) = this_00;
    if (*(int *)(this + local_20 * 4) == 0) break;
    cVar2 = (**(code **)(**(int **)(this + local_20 * 4) + 8))(*(undefined4 *)(this + local_20 * 4))
    ;
    if (cVar2 != '\x01') {
      std::allocator<char>::allocator();
                    /* try { // try from 08070feb to 08070fef has its CatchHandler @ 08071065 */
      std::string::string(local_30,"CDBManager::Init() DB Handle Error\n",&local_29);
      pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0807100a to 0807100e has its CatchHandler @ 08071011 */
      CDNFException::CDNFException(pCVar3,local_30);
                    /* try { // try from 08071050 to 08071054 has its CatchHandler @ 08071057 */
      std::string::~string(local_30);
      std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::~CDNFException);
    }
    local_20 = local_20 + 1;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 08070ee6 to 08070eea has its CatchHandler @ 08070f60 */
  std::string::string(local_38,"CDBManager::Init() DB Handle New Error\n",&local_31);
  pCVar3 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08070f05 to 08070f09 has its CatchHandler @ 08070f0c */
  CDNFException::CDNFException(pCVar3,local_38);
                    /* try { // try from 08070f4b to 08070f4f has its CatchHandler @ 08070f52 */
  std::string::~string(local_38);
  std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar3,&CDNFException::typeinfo,CDNFException::~CDNFException);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2939 行）：

```cpp
void CDBManager::Init(ENUM_DB_KIND kind, CApplication* app)
{
    m_app = app;
    if (kind == 1)
    {
        for (int i = 0; i <= 0x10; i++)
        {
            m_handles[i] = new (std::nothrow) CMySql;
            if (!m_handles[i])
                throw CDNFException("CDBManager::Init() new CMySql fail!");
            if (!m_handles[i]->init())
                throw CDNFException("CDBManager::Init() mysql init fail!");
        }
    }
}
```

# _ZN18CFrameCountHandler17GetFrameCountInfoEv

`CFrameCountHandler::GetFrameCountInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804cc52` | `0x37c` | `0x80864c6` | `0x36c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,277 +1,272 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x4c,%esp
+movl   $0x0,-0x38(%ebp)
+movl   $0x0,-0x34(%ebp)
+movl   $0x0,-0x30(%ebp)
 movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x24(%eax)
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x146>
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <times>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0xc(%eax)
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-lea    -0x35(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    %eax,0xc(%edx)
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xe9>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xea>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x12a>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x10f>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xe3>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x123>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x108>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x4c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <times>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x10(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x10(%edx)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x250>
-lea    -0x2d(%ebp),%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x242>
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x20(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f3>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1e5>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1ed>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-call   <T> <_ZSt9terminatev>
-mov    %esi,%ecx
-mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x22d>
-mov    %eax,%ecx
-mov    %edx,%eax
-cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x212>
-call   <T> <_ZSt9terminatev>
-mov    %eax,%ecx
-mov    %edx,%eax
-mov    %eax,%ebx
-mov    %ecx,%esi
-lea    -0x2d(%ebp),%eax
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1df>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x21f>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x204>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x2d(%ebp),%eax
+lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    0xc(%eax),%edx
-mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
 cmp    %eax,%edx
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x26c>
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x260>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,%ecx
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %edx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+mov    0x8(%ebp),%edx
+mov    0x8(%edx),%edx
+mov    %edx,-0x3c(%ebp)
+mov    $0x0,%edx
+divl   -0x3c(%ebp)
+cmp    %eax,%ecx
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
+mov    0x8(%ebp),%eax
+mov    0x14(%eax),%eax
+lea    0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x14(%eax)
+mov    0x8(%ebp),%eax
+movb   $0x1,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
-mov    $0x0,%edx
-divl   -0x5c(%ebp)
-mov    %eax,-0x20(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-cmp    -0x20(%ebp),%eax
-jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-mov    0x8(%ebp),%eax
-mov    0x14(%eax),%eax
-lea    0x1(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x14(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x24(%eax)
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
-mov    %eax,-0x28(%ebp)
-cmpl   $0x63,-0x28(%ebp)
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+cmp    $0x63,%eax
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x2,0x24(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
+mov    0x10(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%ecx
+mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-sub    -0x28(%ebp),%eax
+mov    %ecx,%ebx
+sub    %eax,%ebx
+mov    %ebx,%eax
+lea    (%edx,%eax,1),%eax
 lea    0x64(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x20(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x25(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x25(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x25(%eax),%eax
 cmp    $0x3b,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
 mov    0x8(%ebp),%eax
 movb   $0x3,0x24(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x25(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x26(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0x26(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0x26(%eax),%eax
 cmp    $0x3b,%al
-seta   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x361>
 mov    0x8(%ebp),%eax
 movb   $0x4,0x24(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x26(%eax)
 mov    0x8(%ebp),%eax
-add    $0x6c,%esp
+add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CFrameCountHandler::GetFrameCountInfo() */

CFrameCountHandler * __thiscall
CFrameCountHandler::_ZN18CFrameCountHandler17GetFrameCountInfoEv(CFrameCountHandler *this)

{
  clock_t cVar1;
  CDNFException *pCVar2;
  tms local_50;
  string local_40 [7];
  allocator local_39;
  string local_38 [7];
  allocator local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  this[0x24] = (CFrameCountHandler)0x0;
  if (*this == (CFrameCountHandler)0x0) {
    *this = (CFrameCountHandler)0x1;
    *(undefined4 *)(this + 0x14) = 0;
    cVar1 = times(&local_50);
    *(clock_t *)(this + 0xc) = cVar1;
    if (*(int *)(this + 0xc) == -1) {
      std::allocator<char>::allocator();
                    /* try { // try from 0804cce3 to 0804cce7 has its CatchHandler @ 0804cd5d */
      std::string::string(local_40,
                          "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",
                          &local_39);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804cd02 to 0804cd06 has its CatchHandler @ 0804cd09 */
      CDNFException::CDNFException(pCVar2,local_40);
                    /* try { // try from 0804cd48 to 0804cd4c has its CatchHandler @ 0804cd4f */
      std::string::~string(local_40);
      std::allocator<char>::~allocator((allocator<char> *)&local_39);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
  }
  else {
    cVar1 = times(&local_50);
    *(clock_t *)(this + 0x10) = cVar1;
    if (*(int *)(this + 0x10) == -1) {
      std::allocator<char>::allocator();
                    /* try { // try from 0804cde6 to 0804cdea has its CatchHandler @ 0804ce60 */
      std::string::string(local_38,
                          "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",
                          &local_31);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804ce05 to 0804ce09 has its CatchHandler @ 0804ce0c */
      CDNFException::CDNFException(pCVar2,local_38);
                    /* try { // try from 0804ce4b to 0804ce4f has its CatchHandler @ 0804ce52 */
      std::string::~string(local_38);
      std::allocator<char>::~allocator((allocator<char> *)&local_31);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(pCVar2,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    if (*(uint *)(this + 0x10) < *(uint *)(this + 0xc)) {
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(this + 0x10);
    }
    if (*(uint *)(this + 0x14) <
        (uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc)) / *(uint *)(this + 8)) {
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      this[0x24] = (CFrameCountHandler)0x1;
      if (99 < (uint)(*(int *)(this + 0x10) - *(int *)(this + 0xc))) {
        *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x14);
        this[0x24] = (CFrameCountHandler)0x2;
        *(undefined4 *)(this + 0x14) = 0;
        *(int *)(this + 0xc) =
             (*(int *)(this + 0x10) - (*(int *)(this + 0x10) - *(int *)(this + 0xc))) + 100;
        *(undefined4 *)(this + 0x20) = 0;
        this[0x25] = (CFrameCountHandler)((char)this[0x25] + '\x01');
        if (0x3b < (byte)this[0x25]) {
          this[0x24] = (CFrameCountHandler)0x3;
          this[0x25] = (CFrameCountHandler)0x0;
          this[0x26] = (CFrameCountHandler)((char)this[0x26] + '\x01');
          if (0x3b < (byte)this[0x26]) {
            this[0x24] = (CFrameCountHandler)0x4;
            this[0x26] = (CFrameCountHandler)0x0;
          }
        }
      }
    }
  }
  return this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp](source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp)（约第 52 行）：

```cpp
CFrameCountHandler* CFrameCountHandler::GetFrameCountInfo()
{
    tms tm = {};
    m_field24 = 0;
    if (m_field0 == 0)
    {
        m_field0 = 1;
        m_field14 = 0;
        m_fieldc = times(&tm);
        if (m_fieldc == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
    }
    else
    {
        m_field10 = times(&tm);
        if (m_field10 == -1)
        {
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        }
        if ((unsigned int)m_field10 < (unsigned int)m_fieldc)
        {
            m_fieldc = m_field10;
        }
        if (m_field14 < (unsigned int)((int)m_field10 - (int)m_fieldc) / (unsigned int)m_field8)
        {
            m_field14++;
            m_field24 = 1;
            if (99 < (unsigned int)((int)m_field10 - (int)m_fieldc))
            {
                m_field18 = m_field14;
                m_field24 = 2;
                m_field14 = 0;
                m_fieldc = (m_field10 - (m_field10 - m_fieldc)) + 100;
                m_field20 = 0;
                m_field25++;
                if (59 < (unsigned char)m_field25)
                {
                    m_field24 = 3;
                    m_field25 = 0;
                    m_field26++;
                    if (59 < (unsigned char)m_field26)
                    {
                        m_field24 = 4;
                        m_field26 = 0;
                    }
                }
            }
        }
    }
    return this;
}
```

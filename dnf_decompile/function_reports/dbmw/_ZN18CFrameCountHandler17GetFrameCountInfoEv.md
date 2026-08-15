# _ZN18CFrameCountHandler17GetFrameCountInfoEv

`CFrameCountHandler::GetFrameCountInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805584a` | `0x37c` | `0x80e57be` | `0x33d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,277 +1,260 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
-movl   $0x0,-0x2c(%ebp)
-movl   $0x0,-0x28(%ebp)
-movl   $0x0,-0x24(%ebp)
-movl   $0x0,-0x1c(%ebp)
+sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 movb   $0x0,0x24(%eax)
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x14d>
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x134>
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
-lea    -0x4c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <times>
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x12c>
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x30(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xf0>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xcf>
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
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xc9>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xee>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xee>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x109>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0xee>
+call   <T> <_ZSt9terminatev>
+mov    %eax,%ecx
+mov    %edx,%eax
+mov    %eax,%ebx
+mov    %ecx,%esi
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
-lea    -0x35(%ebp),%eax
+lea    -0x29(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x4c(%ebp),%eax
+mov    0x8(%ebp),%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x335>
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <times>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x10(%eax)
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%eax
-cmp    $0xffffffff,%eax
-sete   %al
-test   %al,%al
-je     <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x250>
-lea    -0x2d(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    %eax,0x10(%edx)
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x230>
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x2d(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x34(%ebp),%esi
+lea    -0x28(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f3>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1d3>
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
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1cd>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f2>
+call   <T> <_ZSt9terminatev>
+mov    %esi,%ecx
+mov    %ebx,%eax
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f2>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSsD1Ev>
+jmp    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x20d>
+mov    %eax,%ecx
+mov    %edx,%eax
+cmp    $0xffffffff,%eax
+jne    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x1f2>
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
-lea    -0x2d(%ebp),%eax
+lea    -0x21(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 cmp    %eax,%edx
-jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x26c>
-mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x24e>
+mov    0x8(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xc(%eax)
 mov    0x8(%ebp),%eax
-mov    0x10(%eax),%edx
+mov    0x10(%eax),%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x2c(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x2c(%ebp),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x20(%ebp),%eax
 mov    $0x0,%edx
-divl   -0x5c(%ebp)
-mov    %eax,-0x20(%ebp)
+divl   -0x4c(%ebp)
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
-cmp    -0x20(%ebp),%eax
-jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x371>
+cmp    -0x1c(%ebp),%eax
+jae    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x29d>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x14(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x24(%eax)
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
+cmpl   $0x63,-0x20(%ebp)
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x332>
 mov    0x8(%ebp),%eax
 mov    0x14(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x2,0x24(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
-sub    -0x28(%ebp),%eax
+sub    -0x20(%ebp),%eax
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x332>
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
+jbe    <T> <_ZN18CFrameCountHandler17GetFrameCountInfoEv+0x332>
 mov    0x8(%ebp),%eax
 movb   $0x4,0x24(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x26(%eax)
 mov    0x8(%ebp),%eax
-add    $0x6c,%esp
+add    $0x5c,%esp
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
                    /* try { // try from 080558db to 080558df has its CatchHandler @ 08055955 */
      std::string::string(local_40,
                          "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",
                          &local_39);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080558fa to 080558fe has its CatchHandler @ 08055901 */
      CDNFException::CDNFException(pCVar2,local_40);
                    /* try { // try from 08055940 to 08055944 has its CatchHandler @ 08055947 */
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
                    /* try { // try from 080559de to 080559e2 has its CatchHandler @ 08055a58 */
      std::string::string(local_38,
                          "CFrameCountHandler::GetFrameCountInfo() times() Exception Break!",
                          &local_31);
      pCVar2 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080559fd to 08055a01 has its CatchHandler @ 08055a04 */
      CDNFException::CDNFException(pCVar2,local_38);
                    /* try { // try from 08055a43 to 08055a47 has its CatchHandler @ 08055a4a */
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

定义于 [source/DNFServer/GameServer/DBMW/DNFTickHandler.cpp](source/DNFServer/GameServer/DBMW/DNFTickHandler.cpp)（约第 59 行）：

```cpp
void* CFrameCountHandler::GetFrameCountInfo()
{
    struct tms tms;
    m_field24 = 0;
    if (!m_field0[0])
    {
        m_field0[0] = 1;
        m_field14 = 0;
        m_fieldC = times(&tms);
        if (m_fieldC == (unsigned int)-1)
            throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
        return this;
    }
    m_field10 = times(&tms);
    if (m_field10 == -1)
        throw CDNFException("CFrameCountHandler::GetFrameCountInfo() times() Exception Break!");
    if (m_fieldC > (unsigned int)m_field10)
        m_fieldC = m_field10;
    unsigned int diff = m_field10 - m_fieldC;
    unsigned int frame = diff / m_field8;
    if (m_field14 < frame)
    {
        m_field14++;
        m_field24 = 1;
    }
    if (diff > 0x63)
    {
        m_field18 = m_field14;
        m_field24 = 2;
        m_field14 = 0;
        m_fieldC = m_field10 - diff + 0x64;
        m_field20 = 0;
        m_field25++;
        if (m_field25 > 0x3b)
        {
            m_field24 = 3;
            m_field25 = 0;
            m_field26++;
            if (m_field26 > 0x3b)
            {
                m_field24 = 4;
                m_field26 = 0;
            }
        }
    }
    return this;
}
```

# _ZN9CGuildWar11RankProcessEv

`CGuildWar::RankProcess()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x809afde` | `0x163` | `0x806182c` | `0x163` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,116 +1,116 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x2c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar17IsGuildWarEventOnEv>
 xor    $0x1,%eax
 test   %al,%al
 jne    <T> <_ZN9CGuildWar11RankProcessEv+0x154>
 mov    0x8(%ebp),%eax
 movzbl 0x10(%eax),%eax
 test   %al,%al
 je     <T> <_ZN9CGuildWar11RankProcessEv+0x157>
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dl,0xd(%eax)
 mov    0x8(%ebp),%eax
 movzbl 0xd(%eax),%eax
 cmp    $0x1,%al
-setbe  %al
-test   %al,%al
+setbe  %bl
+test   %bl,%bl
 jne    <T> <_ZN9CGuildWar11RankProcessEv+0x15a>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CGuildWar4RankEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN9CGuildWar11RankProcessEv+0x144>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildWar::RankProcess : false == Rank() : May be m_vtGuildWarInfo is empty!",0x4(%esp)
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
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0xe7>
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
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0xe1>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN9CGuildWar11RankProcessEv+0x106>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0x106>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0x121>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN9CGuildWar11RankProcessEv+0x106>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 movb   $0x0,0xd(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x10(%eax)
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0x15b>
 nop
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0x15b>
 nop
 jmp    <T> <_ZN9CGuildWar11RankProcessEv+0x15b>
 nop
 add    $0x2c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildWar::RankProcess() */

void __thiscall CGuildWar::_ZN9CGuildWar11RankProcessEv(CGuildWar *this)

{
  char cVar1;
  CDNFException *this_00;
  string local_24 [7];
  allocator local_1d [13];
  
  cVar1 = IsGuildWarEventOn(this);
  if (((cVar1 == '\x01') && (this[0x10] != (CGuildWar)0x0)) &&
     (this[0xd] = (CGuildWar)((char)this[0xd] + '\x01'), 1 < (byte)this[0xd])) {
    cVar1 = Rank(this);
    if (cVar1 != '\x01') {
      std::allocator<char>::allocator();
                    /* try { // try from 0809b066 to 0809b06a has its CatchHandler @ 0809b0e0 */
      std::string::string(local_24,
                          "CGuildWar::RankProcess : false == Rank() : May be m_vtGuildWarInfo is empty!"
                          ,local_1d);
      this_00 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809b085 to 0809b089 has its CatchHandler @ 0809b08c */
      CDNFException::CDNFException(this_00,local_24);
                    /* try { // try from 0809b0cb to 0809b0cf has its CatchHandler @ 0809b0d2 */
      std::string::~string(local_24);
      std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
    }
    this[0xd] = (CGuildWar)0x0;
    this[0x10] = (CGuildWar)0x0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildWar.cpp](source/DNFServer/GameServer/Guild/DNFGuildWar.cpp)（约第 335 行）：

```cpp
void CGuildWar::RankProcess()
{
    if (!IsGuildWarEventOn())
    {
        return;
    }
    if (m_bRankWorked == 0)
    {
        return;
    }
    m_bRankCnt++;
    register bool bRanked = ((unsigned char)m_bRankCnt <= 1);
    if (bRanked)
    {
        return;
    }
    if (!Rank())
    {
        throw CDNFException(
            "CGuildWar::RankProcess : false == Rank() : May be m_vtGuildWarInfo is empty!");
    }
    m_bRankCnt = 0;
    m_bRankWorked = 0;
}
```

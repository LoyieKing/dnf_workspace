# _ZN13CGuildManager22SendGuildInfoToMembersEjb

`CGuildManager::SendGuildInfoToMembers(unsigned int, bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809686c` | `0x207` | `0x805cde0` | `0x208` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,163 +1,164 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x10(%ebp),%eax
 mov    %al,-0x3c(%ebp)
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0xf5>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::SendGuildInfoToMembers()\t0 == dwGuildKey\n",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x98>
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
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x92>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0xb7>
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0xd2>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0xb7>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x1c(%ebp)
 cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x12b>
+je     <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x12c>
 movzbl -0x3c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild22SendGuildInfoToMembersEb>
+nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x1d(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CGuildManager::SendGuildInfoToMembers() pclGuild == NULL\n",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x24(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1aa>
+jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1ab>
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
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1a4>
+jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1a5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1c9>
+jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1ca>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1c9>
+jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1ca>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1e4>
+jmp    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1e5>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1c9>
+jne    <T> <_ZN13CGuildManager22SendGuildInfoToMembersEjb+0x1ca>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x1d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::SendGuildInfoToMembers(unsigned int, bool) */

void __thiscall
CGuildManager::_ZN13CGuildManager22SendGuildInfoToMembersEjb
          (CGuildManager *this,uint param_1,bool param_2)

{
  CDNFException *pCVar1;
  string local_30 [7];
  allocator local_29;
  string local_28 [7];
  allocator local_21;
  CGuild *local_20;
  
  if (param_1 == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 080968a5 to 080968a9 has its CatchHandler @ 0809691f */
    std::string::string(local_30,"CGuildManager::SendGuildInfoToMembers()\t0 == dwGuildKey\n",
                        &local_29);
    pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080968c4 to 080968c8 has its CatchHandler @ 080968cb */
    CDNFException::CDNFException(pCVar1,local_30);
                    /* try { // try from 0809690a to 0809690e has its CatchHandler @ 08096911 */
    std::string::~string(local_30);
    std::allocator<char>::~allocator((allocator<char> *)&local_29);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_20 = (CGuild *)FindGuild((uint)this);
  if (local_20 != (CGuild *)0x0) {
    CGuild::SendGuildInfoToMembers(local_20,param_2);
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 080969b7 to 080969bb has its CatchHandler @ 08096a31 */
  std::string::string(local_28,"CGuildManager::SendGuildInfoToMembers() pclGuild == NULL\n",
                      &local_21);
  pCVar1 = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 080969d6 to 080969da has its CatchHandler @ 080969dd */
  CDNFException::CDNFException(pCVar1,local_28);
                    /* try { // try from 08096a1c to 08096a20 has its CatchHandler @ 08096a23 */
  std::string::~string(local_28);
  std::allocator<char>::~allocator((allocator<char> *)&local_21);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(pCVar1,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 449 行）：

```cpp
void CGuildManager::SendGuildInfoToMembers(unsigned int guildKey, bool flag)
{
    if (guildKey == 0)
    {
        throw CDNFException(
            std::string("CGuildManager::SendGuildInfoToMembers()\t0 == dwGuildKey\n"));
    }
    CGuild* guild = FindGuild(guildKey);
    if (guild != 0)
    {
        guild->SendGuildInfoToMembers(flag);
        return;
    }
    throw CDNFException(std::string("CGuildManager::SendGuildInfoToMembers() pclGuild == NULL\n"));
}
```

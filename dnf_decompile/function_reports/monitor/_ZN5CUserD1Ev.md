# _ZN5CUserD1Ev

`CUser::~CUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d2a6` | `0x136` | `0x808880c` | `0x148` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,90 +1,99 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
+add    $0x8,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0xc(%eax)
+add    $0xc,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x4(%eax)
+add    $0x4,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0xffffffff,0x20(%eax)
+add    $0x20,%eax
+movl   $0xffffffff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x42(%eax)
+add    $0x42,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movb   $0xff,0x43(%eax)
+add    $0x43,%eax
+movb   $0xff,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0xffff,0x44(%eax)
+add    $0x44,%eax
+movw   $0xffff,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15ResetMemberInfoEv>
 mov    0x8(%ebp),%eax
-movb   $0x0,0x10(%eax)
+add    $0x10,%eax
+movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x0,0x68(%eax)
 mov    0x8(%ebp),%eax
-movb   $0x1,0x46(%eax)
+add    $0x46,%eax
+movb   $0x1,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8c(%eax)
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
-jmp    <T> <_ZN5CUserD1Ev+0xc9>
+jmp    <T> <_ZN5CUserD1Ev+0xdb>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN5CUserD1Ev+0xdb>
+jmp    <T> <_ZN5CUserD1Ev+0xed>
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEED1Ev>
-jmp    <T> <_ZN5CUserD1Ev+0xf3>
+jmp    <T> <_ZN5CUserD1Ev+0x105>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CBuddyHandleD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN5CUserD1Ev+0x103>
+jmp    <T> <_ZN5CUserD1Ev+0x115>
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CBuddyHandleD1Ev>
-jmp    <T> <_ZN5CUserD1Ev+0x121>
+jmp    <T> <_ZN5CUserD1Ev+0x133>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x50,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::~CUser() */

void __thiscall CUser::_ZN5CUserD1Ev(CUser *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x42] = (CUser)0xff;
  this[0x43] = (CUser)0xff;
  *(undefined2 *)(this + 0x44) = 0xffff;
  memset(this + 0x24,0,0x1e);
  _ZN5CUser15ResetMemberInfoEv(this);
  this[0x10] = (CUser)0x0;
  *(undefined2 *)(this + 0x68) = 0;
  this[0x46] = (CUser)0x1;
  *(undefined4 *)(this + 0x8c) = 0;
                    /* try { // try from 0806d34e to 0806d352 has its CatchHandler @ 0806d355 */
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::clear((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
           *)(this + 0x90));
                    /* try { // try from 0806d37a to 0806d37e has its CatchHandler @ 0806d381 */
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::~map((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
          *)(this + 0x90));
                    /* try { // try from 0806d3a2 to 0806d3a6 has its CatchHandler @ 0806d3a9 */
  CBuddyHandle::~CBuddyHandle((CBuddyHandle *)(this + 0x6c));
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::~map((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          *)(this + 0x50));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUser.cpp](source/DNFServer/GameServer/COServer/DNFUser.cpp)（约第 16 行）：

```cpp
CUser::~CUser()
{
    m_gs = 0;
}
```

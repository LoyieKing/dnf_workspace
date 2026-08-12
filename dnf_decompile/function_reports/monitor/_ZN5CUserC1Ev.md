# _ZN5CUserC1Ev

`CUser::CUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806d126` | `0x180` | `0x80886e4` | `0x180` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
+mov    0x8(%ebp),%eax
+add    $0x50,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x6c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CBuddyHandleC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x90,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x1a(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,0x20(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x42(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x43(%eax)
 mov    0x8(%ebp),%eax
 movw   $0xffff,0x44(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x46(%eax)
 mov    0x8(%ebp),%eax
-add    $0x50,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
-mov    0x8(%ebp),%eax
 movw   $0x0,0x68(%eax)
-mov    0x8(%ebp),%eax
-add    $0x6c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CBuddyHandleC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x90,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,0xb0(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xb4(%eax)
 mov    0x8(%ebp),%eax
 add    $0x24,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x47,%eax
 movl   $0x7,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8c(%eax)
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 jmp    <T> <_ZN5CUserC1Ev+0x179>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x90,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN5CUser11ChannelInfoESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN5CUserC1Ev+0x143>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x6c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CBuddyHandleD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN5CUserC1Ev+0x15b>
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
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::CUser() */

void __thiscall CUser::_ZN5CUserC1Ev(CUser *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CUser)0x0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x18) = 0;
  this[0x1a] = (CUser)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  this[0x42] = (CUser)0xff;
  this[0x43] = (CUser)0xff;
  *(undefined2 *)(this + 0x44) = 0xffff;
  this[0x46] = (CUser)0x1;
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::map((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
         *)(this + 0x50));
  *(undefined2 *)(this + 0x68) = 0;
                    /* try { // try from 0806d1c8 to 0806d1cc has its CatchHandler @ 0806d281 */
  CBuddyHandle::_ZN12CBuddyHandleC2Ev((CBuddyHandle *)(this + 0x6c));
                    /* try { // try from 0806d1d8 to 0806d1dc has its CatchHandler @ 0806d269 */
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::map((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
         *)(this + 0x90));
  this[0xb0] = (CUser)0x0;
  *(undefined4 *)(this + 0xb4) = 0;
  memset(this + 0x24,0,0x1e);
  memset(this + 0x47,0,7);
  *(undefined4 *)(this + 0x8c) = 0;
                    /* try { // try from 0806d248 to 0806d24c has its CatchHandler @ 0806d24f */
  std::
  map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
  ::clear((map<int,CUser::ChannelInfo,std::less<int>,std::allocator<std::pair<int_const,CUser::ChannelInfo>>>
           *)(this + 0x90));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFUser.cpp](source/DNFServer/GameServer/Monitor/DNFUser.cpp)（约第 40 行）：

```cpp
CUser::CUser()
{
    ((RA_UINT<0>*)this)->v = 0;
    ((RA_UINT<4>*)this)->v = 0;
    ((RA_UINT<8>*)this)->v = 0;
    ((RA_UINT<12>*)this)->v = 0;
    ((RA_S8<16>*)this)->v = 0;
    ((RA_UINT<20>*)this)->v = 0;
    ((RA_U16<24>*)this)->v = 0;
    ((RA_S8<26>*)this)->v = 0;
    ((RA_UINT<28>*)this)->v = 0;
    ((RA_UINT<32>*)this)->v = 0xffffffff;
    ((RA_S8<66>*)this)->v = 0xff;
    ((RA_S8<67>*)this)->v = 0xff;
    ((RA_U16<68>*)this)->v = 0xffff;
    ((RA_S8<70>*)this)->v = 1;
    m_field68 = 0;
    ((RA_S8<176>*)this)->v = 0;
    ((RA_UINT<180>*)this)->v = 0;
    memset((char*)this + 0x24, 0, 0x1e);
    memset((char*)this + 0x47, 0, 7);
    m_channelCount = 0;
    m_channelInfoMap.clear();
}
```

# _ZN12CBuddyHandle11addFromCashEP6CBuddy

`CBuddyHandle::addFromCash(CBuddy*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809e91a` | `0xb3` | `0x805814c` | `0xb6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE4sizeEv>
 cmp    $0x1f,%eax
 seta   %al
 test   %al,%al
 je     <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0x27>
 mov    $0x0,%ebx
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CBuddy14getBuddyDBInfoEv>
 mov    %eax,%edx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRA30_cRP6CBuddyESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP6CBuddyEC1IPcS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%edx
 lea    -0x20(%ebp),%eax
 lea    -0x18(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%ebx
+movzbl -0x1c(%ebp),%eax
+movzbl %al,%ebx
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP6CBuddyED1Ev>
-jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xa7>
+jmp    <T> <_ZN12CBuddyHandle11addFromCashEP6CBuddy+0xaa>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP6CBuddyED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::addFromCash(CBuddy*) */

undefined1 __thiscall
CBuddyHandle::_ZN12CBuddyHandle11addFromCashEP6CBuddy(CBuddyHandle *this,CBuddy *param_1)

{
  uint uVar1;
  CBuddy **ppCVar2;
  pair local_24 [4];
  undefined1 local_20;
  pair<std::string_const,CBuddy*> local_1c [8];
  char local_14 [8];
  
  uVar1 = std::
          map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
          ::size((map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
                  *)this);
  if (uVar1 < 0x20) {
    ppCVar2 = (CBuddy **)CBuddy::getBuddyDBInfo(param_1);
    std::make_pair<char(&)[30],CBuddy*&>(local_14,ppCVar2);
    std::pair<std::string_const,CBuddy*>::pair<char*,CBuddy*>(local_1c,local_14);
                    /* try { // try from 0809e98d to 0809e991 has its CatchHandler @ 0809e9a6 */
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::insert(local_24);
    std::pair<std::string_const,CBuddy*>::~pair(local_1c);
  }
  else {
    local_20 = 0;
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 200 行）：

```cpp
int CBuddyHandle::addFromCash(CBuddy* buddy)
{
    if (m_buddies.size() > 0x1f)
    {
        return 0;
    }
    return m_buddies.insert(
               std::make_pair(((STBuddyDBInfo*)buddy->getBuddyDBInfo())->m_name,
                              buddy))
        .second;
}
```

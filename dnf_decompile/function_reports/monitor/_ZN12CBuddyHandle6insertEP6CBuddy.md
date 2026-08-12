# _ZN12CBuddyHandle6insertEP6CBuddy

`CBuddyHandle::insert(CBuddy*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809ec6a` | `0xa4` | `0x80581ee` | `0xa3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,56 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapISsP6CBuddySt4lessISsESaISt4pairIKSsS1_EEE4sizeEv>
 cmp    $0x1f,%eax
-seta   %al
+setbe  %al
 test   %al,%al
-jne    <T> <_ZN12CBuddyHandle6insertEP6CBuddy+0x99>
+je     <T> <_ZN12CBuddyHandle6insertEP6CBuddy+0x99>
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
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP6CBuddyED1Ev>
-jmp    <T> <_ZN12CBuddyHandle6insertEP6CBuddy+0x9a>
+jmp    <T> <_ZN12CBuddyHandle6insertEP6CBuddy+0x99>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKSsP6CBuddyED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CBuddyHandle::insert(CBuddy*) */

void __thiscall CBuddyHandle::_ZN12CBuddyHandle6insertEP6CBuddy(CBuddyHandle *this,CBuddy *param_1)

{
  uint uVar1;
  CBuddy **ppCVar2;
  pair local_24 [8];
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
                    /* try { // try from 0809ecd3 to 0809ecd7 has its CatchHandler @ 0809ece8 */
    std::
    map<std::string,CBuddy*,std::less<std::string>,std::allocator<std::pair<std::string_const,CBuddy*>>>
    ::insert(local_24);
    std::pair<std::string_const,CBuddy*>::~pair(local_1c);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp](source/DNFServer/GameServer/Monitor/DNFBuddyHandle.cpp)（约第 222 行）：

```cpp
int CBuddyHandle::insert(CBuddy* buddy)
{
    if (m_buddies.size() < 0x20)
    {
        m_buddies.insert(
            std::make_pair(((MonitorBuddyDBInfo*)buddy->getBuddyDBInfo())->m_name, buddy));
    }
}
```

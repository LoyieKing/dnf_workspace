# _ZN13CGuildManager12IsEmptyGuildEj

`CGuildManager::IsEmptyGuild(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095534` | `0xb0` | `0x805b600` | `0x97` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEC1Ev>
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x2d>
-mov    $0x1,%eax
-jmp    <T> <_ZN13CGuildManager12IsEmptyGuildEj+0xae>
+je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x1f>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x95>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0xa9>
+je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x90>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0xa9>
+je     <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x90>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild7IsEmptyEv>
-jmp    <T> <_ZN13CGuildManager12IsEmptyGuildEj+0xae>
+jmp    <T> <_ZN13CGuildManager12IsEmptyGuildEj+0x95>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::IsEmptyGuild(unsigned int) */

undefined4 CGuildManager::_ZN13CGuildManager12IsEmptyGuildEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20 [2];
  uint local_18;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_14 [4];
  CGuild *local_10;
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_18);
  cVar1 = std::
          map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
          ::empty((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                   *)(param_1 + 4));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::find(local_20);
    local_18 = local_20[0];
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_14,
                       (_Rb_tree_iterator *)&local_18);
    if (cVar1 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_18);
      local_10 = *(CGuild **)(iVar3 + 4);
      if (local_10 != (CGuild *)0x0) {
        uVar2 = CGuild::IsEmpty(local_10);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 241 行）：

```cpp
bool CGuildManager::IsEmptyGuild(unsigned int guildKey)
{
    if (m_guilds.empty())
    {
        return 0;
    }
    std::map<unsigned int, CGuild*>::iterator it = m_guilds.find(guildKey);
    if (it != m_guilds.end())
    {
        CGuild* guild = it->second;
        if (guild != 0)
        {
            return guild->IsEmpty();
        }
    }
    return 0;
}
```

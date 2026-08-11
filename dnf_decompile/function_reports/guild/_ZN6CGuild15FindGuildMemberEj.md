# _ZN6CGuild15FindGuildMemberEj

`CGuild::FindGuildMember(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d128` | `0x8b` | `0x80531fc` | `0x7a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,39 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
-lea    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEC1Ev>
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN6CGuild15FindGuildMemberEj+0x27>
+je     <T> <_ZN6CGuild15FindGuildMemberEj+0x1c>
 mov    $0x0,%eax
-jmp    <T> <_ZN6CGuild15FindGuildMemberEj+0x89>
+jmp    <T> <_ZN6CGuild15FindGuildMemberEj+0x78>
 mov    0x8(%ebp),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
-mov    -0x1c(%ebp),%eax
-mov    %eax,-0x10(%ebp)
 mov    0x8(%ebp),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN6CGuild15FindGuildMemberEj+0x84>
+je     <T> <_ZN6CGuild15FindGuildMemberEj+0x6a>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild15FindGuildMemberEj+0x78>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-jmp    <T> <_ZN6CGuild15FindGuildMemberEj+0x89>
-mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::FindGuildMember(unsigned int) */

undefined4 CGuild::_ZN6CGuild15FindGuildMemberEj(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_20 [3];
  uint local_14;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_14);
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)param_1);
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::find(local_20);
    local_14 = local_20[0];
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_10,
                       (_Rb_tree_iterator *)&local_14);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)&local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 478 行）：

```cpp
CUser* CGuild::FindGuildMember(unsigned int charNo)
{
    if (m_members.empty())
    {
        return 0;
    }
    std::map<unsigned int, CUser*>::iterator it = m_members.find(charNo);
    return it == m_members.end() ? 0 : it->second;
}
```

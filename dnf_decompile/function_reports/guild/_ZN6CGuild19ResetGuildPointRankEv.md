# _ZN6CGuild19ResetGuildPointRankEv

`CGuild::ResetGuildPointRank()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d6ae` | `0xa2` | `0x80535e8` | `0x99` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,53 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-movb   $0x0,0x48(%eax)
+add    $0x48,%eax
+movw   $0x0,(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x44(%eax)
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
-test   %al,%al
-jne    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x9f>
+add    $0x44,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x72>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x6c>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
 mov    0x4(%eax),%eax
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-sete   %al
+test   %eax,%eax
+setne  %al
 test   %al,%al
-jne    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x66>
-mov    -0xc(%ebp),%eax
+je     <T> <_ZN6CGuild19ResetGuildPointRankEv+0x61>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEptEv>
+mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15ResetGuildPointEv>
-jmp    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x67>
-nop
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEppEv>
 mov    0x8(%ebp),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP5CUserEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x3d>
-jmp    <T> <_ZN6CGuild19ResetGuildPointRankEv+0xa0>
-nop
+jne    <T> <_ZN6CGuild19ResetGuildPointRankEv+0x34>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ResetGuildPointRank() */

void __thiscall CGuild::_ZN6CGuild19ResetGuildPointRankEv(CGuild *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  this[0x48] = (CGuild)0x0;
  *(undefined4 *)(this + 0x44) = 0;
  cVar1 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)this);
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
      local_10 = *(CUser **)(iVar2 + 4);
      if (local_10 != (CUser *)0x0) {
        CUser::_ZN5CUser15ResetGuildPointEv(local_10);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_18);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 639 行）：

```cpp
void CGuild::ResetGuildPointRank()
{
    *(unsigned short*)((char*)this + 0x48) = 0;
    *(unsigned int*)((char*)this + 0x44) = 0;
    for (std::map<unsigned int, CUser*>::iterator it = m_members.begin();
         it != m_members.end(); ++it)
    {
        if (it->second != 0)
        {
            it->second->ResetGuildPoint();
        }
    }
}
```

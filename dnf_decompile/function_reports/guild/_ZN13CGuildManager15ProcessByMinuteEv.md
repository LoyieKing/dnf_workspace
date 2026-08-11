# _ZN13CGuildManager15ProcessByMinuteEv

`CGuildManager::ProcessByMinute()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8096e16` | `0xde` | `0x805d382` | `0xde` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    0x8(%ebp),%edx
 add    $0x44,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN9CGuildWar13DBSaveProcessEP12CApplication>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0xdb>
+je     <T> <_ZN13CGuildManager15ProcessByMinuteEv+0xdc>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x85>
+jmp    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x88>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x7a>
+je     <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x7d>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild26UpdateChangableInfoProcessEv>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x4d>
+jne    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0x50>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager18RefreshTodayMemberEb>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager21RefreshAttendanceInfoEb>
-jmp    <T> <_ZN13CGuildManager15ProcessByMinuteEv+0xdc>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::ProcessByMinute() */

void __thiscall CGuildManager::_ZN13CGuildManager15ProcessByMinuteEv(CGuildManager *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_14 [4];
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_10 [12];
  
  CGuildWar::DBSaveProcess((CGuildWar *)(this + 0x44),*(CApplication **)this);
  cVar1 = std::
          map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
          ::empty((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                   *)(this + 4));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::begin(local_14);
    while( true ) {
      std::
      map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
      ::end(local_10);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_14,
                         (_Rb_tree_iterator *)local_10);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_14);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_14);
        CGuild::UpdateChangableInfoProcess(*(CGuild **)(iVar2 + 4));
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_14);
    }
    RefreshTodayMember(this,false);
    RefreshAttendanceInfo(this,false);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 547 行）：

```cpp
void CGuildManager::ProcessByMinute()
{
    m_guildWar.DBSaveProcess(m_app);
    if (!m_guilds.empty())
    {
        for (std::map<unsigned int, CGuild*>::iterator it = m_guilds.begin();
             it != m_guilds.end(); ++it)
        {
            if (it->second != 0)
            {
                it->second->UpdateChangableInfoProcess();
            }
        }
        RefreshTodayMember(false);
        RefreshAttendanceInfo(false);
    }
}
```

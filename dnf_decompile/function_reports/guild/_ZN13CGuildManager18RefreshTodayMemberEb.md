# _ZN13CGuildManager18RefreshTodayMemberEb

`CGuildManager::RefreshTodayMember(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80970b8` | `0x151` | `0x805ce42` | `0x140` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0x1c(%ebp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
 cmpb   $0x0,-0x1c(%ebp)
-jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x4f>
+jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x51>
 mov    0x8(%ebp),%eax
-mov    0x7c(%eax),%edx
+add    $0x7c,%eax
+mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%eax
 cmp    %eax,%edx
-je     <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x14c>
+je     <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x13b>
 mov    -0xc(%ebp),%eax
 mov    0x8(%eax),%eax
 cmp    $0x6,%eax
-jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x14c>
+jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x13b>
 mov    0x8(%ebp),%eax
 add    $0x58,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj18STTodayGuildMemberSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0xc2>
+jmp    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0xc4>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0xb7>
+je     <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0xb9>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,%ebx
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild21QueryTodayGuildMemberEP14CServerHandler>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEneERKS5_>
 test   %al,%al
-jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x77>
+jne    <T> <_ZN13CGuildManager18RefreshTodayMemberEb+0x79>
 mov    0x8(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    (%edx),%ecx
-mov    %ecx,0x70(%eax)
-mov    0x4(%edx),%ecx
-mov    %ecx,0x74(%eax)
-mov    0x8(%edx),%ecx
-mov    %ecx,0x78(%eax)
-mov    0xc(%edx),%ecx
-mov    %ecx,0x7c(%eax)
-mov    0x10(%edx),%ecx
-mov    %ecx,0x80(%eax)
-mov    0x14(%edx),%ecx
-mov    %ecx,0x84(%eax)
-mov    0x18(%edx),%ecx
-mov    %ecx,0x88(%eax)
-mov    0x1c(%edx),%ecx
-mov    %ecx,0x8c(%eax)
-mov    0x20(%edx),%ecx
-mov    %ecx,0x90(%eax)
-mov    0x24(%edx),%ecx
-mov    %ecx,0x94(%eax)
-mov    0x28(%edx),%edx
-mov    %edx,0x98(%eax)
+lea    0x70(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%ecx
+mov    %ecx,(%edx)
+mov    0x4(%eax),%ecx
+mov    %ecx,0x4(%edx)
+mov    0x8(%eax),%ecx
+mov    %ecx,0x8(%edx)
+mov    0xc(%eax),%ecx
+mov    %ecx,0xc(%edx)
+mov    0x10(%eax),%ecx
+mov    %ecx,0x10(%edx)
+mov    0x14(%eax),%ecx
+mov    %ecx,0x14(%edx)
+mov    0x18(%eax),%ecx
+mov    %ecx,0x18(%edx)
+mov    0x1c(%eax),%ecx
+mov    %ecx,0x1c(%edx)
+mov    0x20(%eax),%ecx
+mov    %ecx,0x20(%edx)
+mov    0x24(%eax),%ecx
+mov    %ecx,0x24(%edx)
+mov    0x28(%eax),%eax
+mov    %eax,0x28(%edx)
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::RefreshTodayMember(bool) */

void __thiscall
CGuildManager::_ZN13CGuildManager18RefreshTodayMemberEb(CGuildManager *this,bool param_1)

{
  char cVar1;
  int iVar2;
  CServerHandler *pCVar3;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_1c [4];
  time_t local_18;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_14 [4];
  tm *local_10;
  
  time(&local_18);
  local_10 = localtime(&local_18);
  if ((param_1) || ((*(int *)(this + 0x7c) != local_10->tm_mday && (local_10->tm_hour == 6)))) {
    std::
    map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
    ::clear((map<unsigned_int,STTodayGuildMember,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STTodayGuildMember>>>
             *)(this + 0x58));
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
      ::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_1c,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_1c);
      if (*(int *)(iVar2 + 4) != 0) {
        pCVar3 = (CServerHandler *)CApplication::Get_ServerHandler(*(CApplication **)this);
        iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_1c);
        CGuild::QueryTodayGuildMember(*(CGuild **)(iVar2 + 4),pCVar3);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)local_1c);
    }
    *(int *)(this + 0x70) = local_10->tm_sec;
    *(int *)(this + 0x74) = local_10->tm_min;
    *(int *)(this + 0x78) = local_10->tm_hour;
    *(int *)(this + 0x7c) = local_10->tm_mday;
    *(int *)(this + 0x80) = local_10->tm_mon;
    *(int *)(this + 0x84) = local_10->tm_year;
    *(int *)(this + 0x88) = local_10->tm_wday;
    *(int *)(this + 0x8c) = local_10->tm_yday;
    *(int *)(this + 0x90) = local_10->tm_isdst;
    *(long *)(this + 0x94) = local_10->tm_gmtoff;
    *(char **)(this + 0x98) = local_10->tm_zone;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 715 行）：

```cpp
void CGuildManager::RefreshTodayMember(bool flag)
{
    time_t now;
    tm* t;
    time(&now);
    t = localtime(&now);
    if (flag || *(unsigned int*)((char*)this + 0x7c) != (unsigned int)t->tm_mday &&
        t->tm_hour == 6)
    {
        m_todayMembers.clear();
        for (std::map<unsigned int, CGuild*>::iterator it = m_guilds.begin();
             it != m_guilds.end(); ++it)
        {
            if (it->second != 0)
            {
                it->second->QueryTodayGuildMember(m_app->Get_ServerHandler());
            }
        }
        *(tm*)((char*)this + 0x70) = *t;
    }
}
```

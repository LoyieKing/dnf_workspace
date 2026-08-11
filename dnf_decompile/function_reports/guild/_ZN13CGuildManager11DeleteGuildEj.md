# _ZN13CGuildManager11DeleteGuildEj

`CGuildManager::DeleteGuild(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809519c` | `0x1a6` | `0x805b292` | `0x198` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,115 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
-je     <T> <_ZN13CGuildManager11DeleteGuildEj+0x25>
-mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager11DeleteGuildEj+0x19b>
+jne    <T> <_ZN13CGuildManager11DeleteGuildEj+0x18c>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x30(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEneERKS5_>
+call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEeqERKS5_>
 test   %al,%al
-je     <T> <_ZN13CGuildManager11DeleteGuildEj+0x145>
+je     <T> <_ZN13CGuildManager11DeleteGuildEj+0xc2>
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
+mov    %eax,%esi
+mov    0xc(%ebp),%ebx
+movl   $0xcd,0x8(%esp)
+movl   $&_ZZN13CGuildManager11DeleteGuildEjE12__FUNCTION__,0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    %esi,0x10(%esp)
+mov    %ebx,0xc(%esp)
+movl   $"[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",0x8(%esp)
+movl   $"./log/Guild",0x4(%esp)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN13CGuildManager11DeleteGuildEj+0x18d>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
 sub    $0x1,%eax
 mov    %eax,-0x3c(%ebp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild14GetGuildDBFlagEv>
 movzwl %ax,%edi
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%ebx
 mov    0xc(%ebp),%esi
 movl   $0xc4,0x8(%esp)
 movl   $&_ZZN13CGuildManager11DeleteGuildEjE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x3c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    %esi,0xc(%esp)
 movl   $"[DELETE]  Guild Key : %d\tGuild Name : %s\tGuild State:%d\tCurr Guild Load Cnt : %d\n",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjP6CGuildEEptEv>
 mov    0x4(%eax),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN13CGuildManager11DeleteGuildEj+0x129>
+je     <T> <_ZN13CGuildManager11DeleteGuildEj+0x175>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CGuildD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CGuilddlEPv>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 mov    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
-mov    $0x1,%eax
-jmp    <T> <_ZN13CGuildManager11DeleteGuildEj+0x19b>
-mov    0x8(%ebp),%eax
-add    $0x4,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
-mov    %eax,%ebx
-mov    0xc(%ebp),%esi
-movl   $0xcd,0x8(%esp)
-movl   $&_ZZN13CGuildManager11DeleteGuildEjE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0x10(%esp)
-mov    %esi,0xc(%esp)
-movl   $"[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager11DeleteGuildEj+0x18d>
+nop
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::DeleteGuild(unsigned int) */

undefined4 __thiscall
CGuildManager::_ZN13CGuildManager11DeleteGuildEj(CGuildManager *this,uint param_1)

{
  CGuild *this_00;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint local_34;
  map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
  local_30 [4];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  cVar1 = std::
          map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
          ::empty((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                   *)(this + 4));
  if (cVar1 == '\0') {
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::find(&local_34);
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_34,
                       (_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') {
      uVar2 = std::
              map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
              ::size((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                      *)(this + 4));
      CMyFileLog::CMyFileLog(local_24,"DeleteGuild",0xcd);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/Guild","[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
                 param_1,uVar2);
      uVar2 = 0;
    }
    else {
      iVar3 = std::
              map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
              ::size((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                      *)(this + 4));
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_34);
      uVar5 = CGuild::GetGuildDBFlag(*(CGuild **)(iVar4 + 4));
      iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_34);
      uVar2 = CGuild::GetGuildName(*(CGuild **)(iVar4 + 4));
      CMyFileLog::CMyFileLog(local_2c,"DeleteGuild",0xc4);
      pcVar6 = "./log/Guild";
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/Guild",
                 "[DELETE]  Guild Key : %d\tGuild Name : %s\tGuild State:%d\tCurr Guild Load Cnt : %d\n"
                 ,param_1,uVar2,uVar5 & 0xffff,iVar3 + -1);
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CGuild*>> *)&local_34);
      this_00 = *(CGuild **)(iVar3 + 4);
      if (this_00 != (CGuild *)0x0) {
        CGuild::~CGuild(this_00);
        CGuild::operator_delete(this_00,pcVar6);
      }
      std::
      map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
      ::erase((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
               *)(this + 4),local_34);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 188 行）：

```cpp
void CGuildManager::DeleteGuild(unsigned int guildKey)
{
    if (m_guilds.empty())
    {
        return;
    }
    std::map<unsigned int, CGuild*>::iterator it = m_guilds.find(guildKey);
    if (it == m_guilds.end())
    {
        DNF_LOG_SCOPE_LINE(0xcd,"./log/Guild",
            "[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
            guildKey, (int)m_guilds.size());
        return;
    }
    DNF_LOG_SCOPE_LINE(0xc4,"./log/Guild",
        "[DELETE]  Guild Key : %d\tGuild Name : %s\tGuild State:%d\tCurr Guild Load Cnt : %d\n",
        guildKey, it->second->GetGuildName(),
        it->second->GetGuildDBFlag() & 0xffff, (int)m_guilds.size() - 1);
    delete it->second;
    m_guilds.erase(it);
}
```

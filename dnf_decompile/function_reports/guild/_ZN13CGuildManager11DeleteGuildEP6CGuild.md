# _ZN13CGuildManager11DeleteGuildEP6CGuild

`CGuildManager::DeleteGuild(CGuild*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095342` | `0x15e` | `0x805b384` | `0x151` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,98 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5emptyEv>
 test   %al,%al
 jne    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x21>
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x28>
 mov    $0x1,%eax
 jmp    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x2d>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x3b>
-mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x156>
+jne    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x148>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,-0x2c(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE5eraseERS5_>
 cmp    $0x1,%eax
 sete   %al
 test   %al,%al
-je     <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0xf6>
+je     <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0xeb>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
 mov    %eax,%edi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild12GetGuildNameEv>
 mov    %eax,%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xe0,0x8(%esp)
 movl   $&_ZZN13CGuildManager11DeleteGuildEP6CGuildE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[DELETE]  Guild Key : %d\tGuild Name : %s\tCurr Guild Load Cnt : %d\n",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0xc(%ebp),%ebx
 test   %ebx,%ebx
-je     <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0xef>
+je     <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x149>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CGuildD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZN6CGuilddlEPv>
-mov    $0x1,%eax
-jmp    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x156>
+jmp    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x149>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE4sizeEv>
 mov    %eax,%esi
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0xe7,0x8(%esp)
 movl   $&_ZZN13CGuildManager11DeleteGuildEP6CGuildE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager11DeleteGuildEP6CGuild+0x149>
+nop
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::DeleteGuild(CGuild*) */

undefined4 __thiscall
CGuildManager::_ZN13CGuildManager11DeleteGuildEP6CGuild(CGuildManager *this,CGuild *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  cVar2 = std::
          map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
          ::empty((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                   *)(this + 4));
  if ((cVar2 == '\0') && (param_1 != (CGuild *)0x0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    CGuild::GetGuildKey(param_1);
    iVar4 = std::
            map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
            ::erase((uint *)(this + 4));
    if (iVar4 == 1) {
      uVar3 = std::
              map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
              ::size((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                      *)(this + 4));
      uVar5 = CGuild::GetGuildName(param_1);
      uVar6 = CGuild::GetGuildKey(param_1);
      CMyFileLog::CMyFileLog(local_2c,"DeleteGuild",0xe0);
      pcVar7 = "./log/Guild";
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_2c,"./log/Guild",
                 "[DELETE]  Guild Key : %d\tGuild Name : %s\tCurr Guild Load Cnt : %d\n",uVar6,uVar5
                 ,uVar3);
      if (param_1 != (CGuild *)0x0) {
        CGuild::~CGuild(param_1);
        CGuild::operator_delete(param_1,pcVar7);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = std::
              map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
              ::size((map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
                      *)(this + 4));
      uVar5 = CGuild::GetGuildKey(param_1);
      CMyFileLog::CMyFileLog(local_24,"DeleteGuild",0xe7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_24,"./log/Guild","[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
                 uVar5,uVar3);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 210 行）：

```cpp
void CGuildManager::DeleteGuild(CGuild* guild)
{
    if (m_guilds.empty() || guild == 0)
    {
        return;
    }
    if (m_guilds.erase(guild->GetGuildKey()) == 1)
    {
        DNF_LOG_SCOPE_LINE(0xe0,"./log/Guild",
            "[DELETE]  Guild Key : %d\tGuild Name : %s\tCurr Guild Load Cnt : %d\n",
            guild->GetGuildKey(), guild->GetGuildName(), (int)m_guilds.size());
        delete guild;
    }
    else
    {
        DNF_LOG_SCOPE_LINE(0xe7,"./log/Guild",
            "[DELETE_ERR]  Guild Key : %d\tCurr Guild Load Cnt : %d\n",
            guild->GetGuildKey(), (int)m_guilds.size());
    }
}
```

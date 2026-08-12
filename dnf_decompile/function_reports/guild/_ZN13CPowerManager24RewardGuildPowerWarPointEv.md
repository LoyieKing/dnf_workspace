# _ZN13CPowerManager24RewardGuildPowerWarPointEv

`CPowerManager::RewardGuildPowerWarPoint()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4058` | `0x1f8` | `0x809a1f8` | `0x1b0` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,126 +1,115 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x4c,%esp
+sub    $0x54,%esp
 movl   $0x198,0x8(%esp)
 movl   $&_ZZN13CPowerManager24RewardGuildPowerWarPointEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPowerManager::RewardGuildPowerWarPoint",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-test   %al,%al
-je     <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x5b>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x2,%al
-jle    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0xa7>
-mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-movsbl %al,%ebx
+add    $0x184,%eax
+movzbl (%eax),%eax
+mov    %al,-0x21(%ebp)
+cmpb   $0x0,-0x21(%ebp)
+je     <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x57>
+cmpb   $0x2,-0x21(%ebp)
+jle    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x9a>
+movsbl -0x21(%ebp),%ebx
 movl   $0x19c,0x8(%esp)
 movl   $&_ZZN13CPowerManager24RewardGuildPowerWarPointEvE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"invalid winner side income(%d)",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x1f0>
+jmp    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x1aa>
 mov    0x8(%ebp),%eax
-mov    0x198(%eax),%eax
-mov    %eax,-0x34(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x194(%eax),%edi
-mov    0x8(%ebp),%eax
-mov    0x190(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18c(%eax),%ebx
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    0x8(%ebp),%edx
-movzbl 0x184(%edx),%edx
-movsbl %dl,%edx
+mov    %eax,-0x1c(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x18c,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x190,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x194,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x198,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+movzbl -0x21(%ebp),%edx
+movzbl %dl,%edx
 imul   $0x6c,%edx,%edx
-add    0x8(%ebp),%edx
 add    $0x8,%edx
-mov    -0x34(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $0x1,0x8(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower24RewardGuildPowerWarPointER13CGuildManagerbiiii>
+cmpb   $0x1,-0x21(%ebp)
+jne    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x171>
 mov    0x8(%ebp),%eax
-movzbl 0x184(%eax),%eax
-cmp    $0x1,%al
-jne    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x18e>
-mov    0x8(%ebp),%eax
-mov    0x198(%eax),%eax
-mov    %eax,-0x30(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x194(%eax),%edi
-mov    0x8(%ebp),%eax
-mov    0x190(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18c(%eax),%ebx
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    0x8(%ebp),%edx
-add    $0xe0,%edx
-mov    -0x30(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    0xe0(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $0x0,0x8(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower24RewardGuildPowerWarPointER13CGuildManagerbiiii>
-jmp    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x1f0>
+jmp    <T> <_ZN13CPowerManager24RewardGuildPowerWarPointEv+0x1aa>
 mov    0x8(%ebp),%eax
-mov    0x198(%eax),%eax
-mov    %eax,-0x2c(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x194(%eax),%edi
-mov    0x8(%ebp),%eax
-mov    0x190(%eax),%esi
-mov    0x8(%ebp),%eax
-mov    0x18c(%eax),%ebx
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication16Get_GuildManagerEv>
-mov    0x8(%ebp),%edx
-add    $0x74,%edx
-mov    -0x2c(%ebp),%ecx
-mov    %ecx,0x18(%esp)
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    0x74(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,0x18(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $0x0,0x8(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN6CPower24RewardGuildPowerWarPointER13CGuildManagerbiiii>
-add    $0x4c,%esp
+add    $0x54,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::RewardGuildPowerWarPoint() */

void __thiscall CPowerManager::_ZN13CPowerManager24RewardGuildPowerWarPointEv(CPowerManager *this)

{
  CPowerManager CVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  CGuildManager *pCVar6;
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  CMyFileLog::CMyFileLog(local_2c,"RewardGuildPowerWarPoint",0x198);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/PowerResult","CPowerManager::RewardGuildPowerWarPoint");
  if ((this[0x184] == (CPowerManager)0x0) || ('\x02' < (char)this[0x184])) {
    CVar1 = this[0x184];
    CMyFileLog::CMyFileLog(local_24,"RewardGuildPowerWarPoint",0x19c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/PowerResult","invalid winner side income(%d)",(int)(char)CVar1);
  }
  else {
    iVar2 = *(int *)(this + 0x198);
    iVar3 = *(int *)(this + 0x194);
    iVar4 = *(int *)(this + 400);
    iVar5 = *(int *)(this + 0x18c);
    pCVar6 = (CGuildManager *)CApplication::Get_GuildManager(*(CApplication **)(this + 4));
    CPower::RewardGuildPowerWarPoint
              ((CPower *)(this + (char)this[0x184] * 0x6c + 8),pCVar6,true,iVar5,iVar4,iVar3,iVar2);
    if (this[0x184] == (CPowerManager)0x1) {
      iVar2 = *(int *)(this + 0x198);
      iVar3 = *(int *)(this + 0x194);
      iVar4 = *(int *)(this + 400);
      iVar5 = *(int *)(this + 0x18c);
      pCVar6 = (CGuildManager *)CApplication::Get_GuildManager(*(CApplication **)(this + 4));
      CPower::RewardGuildPowerWarPoint((CPower *)(this + 0xe0),pCVar6,false,iVar5,iVar4,iVar3,iVar2)
      ;
    }
    else {
      iVar2 = *(int *)(this + 0x198);
      iVar3 = *(int *)(this + 0x194);
      iVar4 = *(int *)(this + 400);
      iVar5 = *(int *)(this + 0x18c);
      pCVar6 = (CGuildManager *)CApplication::Get_GuildManager(*(CApplication **)(this + 4));
      CPower::RewardGuildPowerWarPoint((CPower *)(this + 0x74),pCVar6,false,iVar5,iVar4,iVar3,iVar2)
      ;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 261 行）：

```cpp
void CPowerManager::RewardGuildPowerWarPoint()
{
    CMyFileLog logTop(__FUNCTION__, 0x198);
    logTop("./log/PowerResult", "CPowerManager::RewardGuildPowerWarPoint");
    char winnerSide = *(char*)((char*)this + 0x184);
    if (winnerSide == 0 || winnerSide > 2)
    {
        DNF_LOG_SCOPE_LINE(0x19c, "./log/PowerResult", "invalid winner side income(%d)", (int)winnerSide);
        return;
    }
    CApplication* app = *(CApplication**)((char*)this + 4);
    CGuildManager* gm = app->Get_GuildManager();
    int reward1 = *(int*)((char*)this + 0x18c);
    int reward2 = *(int*)((char*)this + 0x190);
    int reward3 = *(int*)((char*)this + 0x194);
    int reward4 = *(int*)((char*)this + 0x198);
    ((CPower*)((char*)this + (unsigned char)winnerSide * 0x6c + 8))
        ->RewardGuildPowerWarPoint(*gm, true, reward1, reward2, reward3, reward4);
    if (winnerSide == 1)
    {
        ((CPower*)((char*)this + 0xe0))
            ->RewardGuildPowerWarPoint(*gm, false, reward1, reward2, reward3, reward4);
    }
    else
    {
        ((CPower*)((char*)this + 0x74))
            ->RewardGuildPowerWarPoint(*gm, false, reward1, reward2, reward3, reward4);
    }
}
```

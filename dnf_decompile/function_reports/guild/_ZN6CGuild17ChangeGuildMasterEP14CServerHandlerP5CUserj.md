# _ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj

`CGuild::ChangeGuildMaster(CServerHandler*, CUser*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090e28` | `0x170` | `0x8056866` | `0x16f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,102 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x1e>
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x165>
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x28>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x169>
 mov    0x8(%ebp),%eax
 mov    0x14(%ebp),%edx
 mov    %edx,0x37(%eax)
 movl   $0x1,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild33ChangeUnconnectedGuildMemberGradeEji>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15FindGuildMemberEj>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-setne  %al
-test   %al,%al
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xdb>
-movl   $0x1,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    %eax,%ebx
-mov    0x8(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %ebx,0xc(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN5CUser11GetCharNameEv>
-mov    0x8(%ebp),%edx
-add    $0xc4,%edx
-movl   $0x14,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <strncpy>
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
+jne    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0xf7>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj>
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0xc(%esp)
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x15e>
+je     <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild29getUnconnectedGuildMemberNameEj>
 mov    0x8(%ebp),%edx
 add    $0xc4,%edx
 movl   $0x14,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
+jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x164>
+movl   $0x1,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser22ChangeGuildMemberGradeEh>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    %eax,%ebx
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    %ebx,0xc(%esp)
+mov    0x10(%ebp),%edx
+mov    %edx,0x8(%esp)
+mov    0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser11GetCharNameEv>
+mov    0x8(%ebp),%edx
+add    $0xc4,%edx
+movl   $0x14,0x8(%esp)
+mov    %eax,0x4(%esp)
+mov    %edx,(%esp)
+call   <T> <strncpy>
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj+0x16a>
-mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::ChangeGuildMaster(CServerHandler*, CUser*, unsigned int) */

undefined4 __thiscall
CGuild::_ZN6CGuild17ChangeGuildMasterEP14CServerHandlerP5CUserj
          (CGuild *this,CServerHandler *param_1,CUser *param_2,uint param_3)

{
  CUser *this_00;
  char *pcVar1;
  CGuildBoard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((*(ushort *)(this + 0x1c) & 4) == 0) || (param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    *(uint *)(this + 0x37) = param_3;
    ChangeUnconnectedGuildMemberGrade(this,param_3,1);
    this_00 = (CUser *)_ZN6CGuild15FindGuildMemberEj((uint)this);
    if (this_00 == (CUser *)0x0) {
      pcVar1 = (char *)getUnconnectedGuildMemberName(this,param_3);
      pCVar2 = (CGuildBoard *)GetGuildBoard(this);
      CGuildBoard::
      _ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc
                (pCVar2,param_1,param_2,pcVar1);
      iVar3 = getUnconnectedGuildMemberName(this,param_3);
      if (iVar3 != 0) {
        pcVar1 = (char *)getUnconnectedGuildMemberName(this,param_3);
        strncpy((char *)(this + 0xc4),pcVar1,0x14);
      }
    }
    else {
      CUser::_ZN5CUser22ChangeGuildMemberGradeEh(this_00,'\x01');
      pcVar1 = (char *)CUser::GetCharName(this_00);
      pCVar2 = (CGuildBoard *)GetGuildBoard(this);
      CGuildBoard::
      _ZN11CGuildBoard37sendMessageToDBMW_GuildMasterChangingEP14CServerHandlerP5CUserPKc
                (pCVar2,param_1,param_2,pcVar1);
      pcVar1 = (char *)CUser::GetCharName(this_00);
      strncpy((char *)(this + 0xc4),pcVar1,0x14);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1725 行）：

```cpp
bool CGuild::ChangeGuildMaster(CServerHandler* handler, CUser* user, unsigned int charNo)
{
    if ((m_guildDBFlag & 4) == 0 || charNo == 0)
    {
        return 0;
    }
    m_dbInfo.m_info.m_masterId = charNo;
    ChangeUnconnectedGuildMemberGrade(charNo, 1);
    CUser* member = FindGuildMember(charNo);
    if (member == 0)
    {
        char* name = getUnconnectedGuildMemberName(charNo);
        GetGuildBoard()->sendMessageToDBMW_GuildMasterChanging(handler, user, name);
        if (getUnconnectedGuildMemberName(charNo) != 0)
        {
            strncpy(m_dbInfo.m_info.m_masterName, getUnconnectedGuildMemberName(charNo), 0x14);
        }
    }
    else
    {
        member->ChangeGuildMemberGrade(1);
        GetGuildBoard()->sendMessageToDBMW_GuildMasterChanging(
            handler, user, member->GetCharName());
        strncpy(m_dbInfo.m_info.m_masterName, member->GetCharName(), 0x14);
    }
    return 1;
}
```

# _ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader

`CPacketTranslater::OnDBLoadReplyGuildBoardOpen(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8086836` | `0x2c0` | `0x807be8a` | `0x1c1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,181 +1,114 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x7c,%esp
+sub    $0x58,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
+mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x53>
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x50>
 movl   $0x1c9d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x54(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x1bf>
+mov    -0x20(%ebp),%eax
+add    $0x11,%eax
+mov    (%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%eax
+lea    0x10(%eax),%edx
+mov    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0xb7>
+mov    %eax,-0x18(%ebp)
+cmpl   $0x0,-0x18(%ebp)
+jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0xb6>
 movl   $0x1ca7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclUser",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
-mov    0xd(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x1bf>
+mov    -0x20(%ebp),%eax
+add    $0xd,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x28(%ebp)
-cmpl   $0x0,-0x28(%ebp)
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x10(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x11e>
+je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x124>
 movl   $0x1cae,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
-add    $0x16,%eax
-mov    %eax,-0x5c(%ebp)
-mov    -0x24(%ebp),%eax
-movzbl 0x15(%eax),%eax
-movsbl %al,%edi
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xd(%eax),%ebx
-mov    -0x28(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x1bf>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    -0x5c(%ebp),%edx
+mov    %eax,-0xc(%ebp)
+mov    -0x20(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x20(%ebp),%eax
+add    $0x15,%eax
+movzbl (%eax),%eax
+movsbl %al,%eax
 mov    %edx,0x14(%esp)
-mov    %edi,0x10(%esp)
-mov    -0x28(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0xc(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo>
-mov    -0x24(%ebp),%eax
-movzbl 0xc(%eax),%eax
+mov    -0x20(%ebp),%eax
+add    $0xc,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    -0x24(%ebp),%eax
-mov    0x11(%eax),%esi
-mov    -0x24(%ebp),%eax
-mov    0xd(%eax),%ebx
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
-mov    -0x2c(%ebp),%edx
-mov    %edx,0x10(%esp)
+je     <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x1bf>
+mov    -0x18(%ebp),%eax
+mov    %eax,0x10(%esp)
 movl   $0x232a,0xc(%esp)
-mov    %esi,0x8(%esp)
-mov    %ebx,0x4(%esp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
 movl   $0x2,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE>
-mov    -0x28(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN6CGuild13GetGuildBoardEv>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11CGuildBoard21setGuildBoardDBAccessEv>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x25e>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1cbf,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x257>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b8>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1cc4,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDBLoadReplyGuildBoardOpen Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader+0x2b3>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x7c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadReplyGuildBoardOpen(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater27OnDBLoadReplyGuildBoardOpenEP12PacketHeader
               (PacketHeader *param_1)

{
  PacketHeader PVar1;
  uint uVar2;
  uint uVar3;
  STGuildBoardDBInfo *pSVar4;
  CGuildBoard *pCVar5;
  CMyFileLog local_58 [8];
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [24];
  CUser *local_30;
  CGuild *local_2c;
  PacketHeader *local_28;
  uint local_24;
  
  local_28 = param_1;
  if (m_pclApp == 0) {
                    /* try { // try from 08086864 to 08086a12 has its CatchHandler @ 08086a18 */
    CMyFileLog::CMyFileLog(local_58,"OnDBLoadReplyGuildBoardOpen",0x1c9d);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_58,"./log/GuildBoard",
               "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp");
  }
  else {
    local_24 = m_pclApp + 0x10;
    local_30 = (CUser *)CUserManager::FindUser_CharNo(local_24);
    if (local_30 == (CUser *)0x0) {
      CMyFileLog::CMyFileLog(local_50,"OnDBLoadReplyGuildBoardOpen",0x1ca7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_50,"./log/GuildBoard",
                 "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclUser");
    }
    else {
      local_2c = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
      if (local_2c == (CGuild *)0x0) {
        CMyFileLog::CMyFileLog(local_48,"OnDBLoadReplyGuildBoardOpen",0x1cae);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_48,"./log/GuildBoard",
                   "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclGuild");
      }
      else {
        pSVar4 = (STGuildBoardDBInfo *)(local_28 + 0x16);
        PVar1 = local_28[0x15];
        uVar2 = *(uint *)(local_28 + 0x11);
        uVar3 = *(uint *)(local_28 + 0xd);
        pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
        CGuildBoard::_ZN11CGuildBoard17setGuildBoardDataEjjP6CGuildiP18STGuildBoardDBInfo
                  (pCVar5,uVar3,uVar2,local_2c,(int)(char)PVar1,pSVar4);
        if (local_28[0xc] != (PacketHeader)0x0) {
          uVar2 = *(uint *)(local_28 + 0x11);
          uVar3 = *(uint *)(local_28 + 0xd);
          pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
          CGuildBoard::_ZN11CGuildBoard18sendGuildBoardDataEjjjP5CUser
                    (pCVar5,uVar3,uVar2,0x232a,local_30);
          pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
          CGuildBoard::_ZN11CGuildBoard24setGuildBoardDBLoadStateE18ENUM_DB_LOAD_STATE(pCVar5,2);
          pCVar5 = (CGuildBoard *)CGuild::GetGuildBoard(local_2c);
          CGuildBoard::_ZN11CGuildBoard21setGuildBoardDBAccessEv(pCVar5);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5065 行）：

```cpp
void CPacketTranslater::OnDBLoadReplyGuildBoardOpen(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1c9d,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == m_pclApp");
        return;
    }
    unsigned int charNo = *(unsigned int*)(pb + 0x11);
    CUser* user = (&m_pclApp->m_userManager)->FindUser_CharNo(charNo);
    if (user == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1ca7,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclUser");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xd);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1cae,"./log/GuildBoard",
            "CPacketTranslater::OnDBLoadReplyGuildBoardOpen : 0 == pclGuild");
        return;
    }
    CGuildBoard* board = guild->GetGuildBoard();
    board->setGuildBoardData(guildKey, charNo, guild, (int)(char)pb[0x15],
                             (STGuildBoardDBInfo*)(pb + 0x16));
    if (pb[0xc] != 0)
    {
        board->sendGuildBoardData(guildKey, charNo, 0x232a, user);
        board->setGuildBoardDBLoadState((ENUM_DB_LOAD_STATE)2);
        board->setGuildBoardDBAccess();
    }
}
```

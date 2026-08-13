# _ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader

`CPacketTranslater::OnDBResponseApproveJoinGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8088d58` | `0x2d2` | `0x807e0f0` | `0x1f9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,186 +1,136 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x70,%esp
+sub    $0x64,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x67>
+jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x51>
 movl   $0x1fd1,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2cb>
-mov    -0x1c(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1f3>
+mov    -0x24(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x20(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x10(%ebp)
-cmpl   $0x0,-0x10(%ebp)
+mov    %eax,-0x1c(%ebp)
+cmpl   $0x0,-0x1c(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0xce>
+je     <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0xbf>
 movl   $0x1fd7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnApproveJoinGuild : 0 == pGuild",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2cb>
-mov    -0x1c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1f3>
+mov    -0x24(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x132>
+jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x125>
 movl   $0x1fdd,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddGuildFund : 0 == pUser",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2cb>
-mov    -0x1c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x10,%edx
+jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1f3>
+mov    -0x24(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x10(%eax),%edx
+mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNK12CUserManager15FindUser_CharNoEj>
-mov    %eax,-0x18(%ebp)
-lea    -0x5e(%ebp),%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x56(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Approve_Join_Guild_ResultC1Ev>
+lea    -0x56(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x20(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x56(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN5CUser13GetUniqCharNoEv>
+mov    %eax,(%ebx)
+lea    -0x56(%ebp),%eax
+lea    0x12(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x4c(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x56(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x24(%ebp),%eax
+add    $0x16,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+cmpl   $0x0,-0x20(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1d9>
+cmpl   $0x0,-0xc(%ebp)
+jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1c0>
+mov    -0x24(%ebp),%eax
+lea    0x1a(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    %edx,0x4(%esp)
+mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x50(%ebp)
+call   <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj>
+jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1d9>
+mov    -0x10(%ebp),%eax
+mov    %eax,0x8(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x1c(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x54(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0x16(%eax),%eax
-mov    %eax,-0x48(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    0xa(%eax),%eax
-test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1d6>
-cmpl   $0x0,-0x18(%ebp)
-je     <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1b7>
-mov    -0x1c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,0x8(%esp)
-mov    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP5CUserj>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x1d6>
-mov    -0x1c(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    -0x1c(%ebp),%edx
-add    $0x1a,%edx
-mov    %eax,0x8(%esp)
-mov    %edx,0x4(%esp)
-mov    -0x10(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN17CPacketTranslater9GuildJoinEP6CGuildP15STGuildJoinInfoj>
-lea    -0x5e(%ebp),%eax
+lea    -0x56(%ebp),%eax
 movl   $0x1a,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser16SendToGameserverEPci>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2cb>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x271>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x1ff5,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x26a>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2cb>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1ffa,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader+0x2c6>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x70,%esp
+add    $0x64,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBResponseApproveJoinGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater28OnDBResponseApproveJoinGuildEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_Approve_Join_Guild_Result local_62 [10];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  PacketHeader *local_20;
  CUser *local_1c;
  CUser *local_18;
  CGuild *local_14;
  
  local_20 = param_1;
  local_1c = (CUser *)0x0;
  local_18 = (CUser *)0x0;
  local_14 = (CGuild *)0x0;
  if (m_pclApp == 0) {
                    /* try { // try from 08088d9a to 08088f47 has its CatchHandler @ 08088f4d */
    CMyFileLog::CMyFileLog(local_48,"OnDBResponseApproveJoinGuild",0x1fd1);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Guild","CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp");
  }
  else {
    local_14 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj(m_pclApp + 0x290);
    if (local_14 == (CGuild *)0x0) {
      CMyFileLog::CMyFileLog(local_40,"OnDBResponseApproveJoinGuild",0x1fd7);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/Guild","CPacketTranslater::OnApproveJoinGuild : 0 == pGuild");
    }
    else {
      local_18 = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
      if (local_18 == (CUser *)0x0) {
        CMyFileLog::CMyFileLog(local_38,"OnDBResponseApproveJoinGuild",0x1fdd);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/Guild","CPacketTranslater::OnAddGuildFund : 0 == pUser");
      }
      else {
        local_1c = (CUser *)CUserManager::FindUser_CharNo(m_pclApp + 0x10);
        Packet_Approve_Join_Guild_Result::Packet_Approve_Join_Guild_Result(local_62);
        local_50 = CUser::GetIdByChannel(local_18);
        local_54 = CUser::GetUniqCharNo(local_18);
        local_58 = *(undefined4 *)(local_20 + 10);
        local_4c = *(undefined4 *)(local_20 + 0x16);
        if (*(int *)(local_20 + 10) == 0) {
          if (local_1c == (CUser *)0x0) {
            GuildJoin(local_14,(STGuildJoinInfo *)(local_20 + 0x1a),*(uint *)(local_20 + 0x12));
          }
          else {
            GuildJoin(local_14,local_1c,*(uint *)(local_20 + 0x12));
          }
        }
        CUser::SendToGameserver(local_18,(char *)local_62,0x1a);
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5770 行）：

```cpp
void CPacketTranslater::OnDBResponseApproveJoinGuild(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1fd1, "./log/Guild", "CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1fd7, "./log/Guild", "CPacketTranslater::OnApproveJoinGuild : 0 == pGuild");
        return;
    }
    unsigned int requesterNo = *(unsigned int*)(pb + 0x16);
    CUser* requester = (&m_pclApp->m_userManager)->FindUser_CharNo(requesterNo);
    if (requester == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1fdd, "./log/Guild", "CPacketTranslater::OnAddGuildFund : 0 == pUser");
        return;
    }
    unsigned int joinerNo = *(unsigned int*)(pb + 0x12);
    CUser* joiner = (&m_pclApp->m_userManager)->FindUser_CharNo(joinerNo);
    Packet_Approve_Join_Guild_Result reply;
    *(unsigned int*)((char*)&reply + 0xa) = guildKey;
    *(unsigned int*)((char*)&reply + 0xe) = requester->GetUniqCharNo();
    *(unsigned int*)((char*)&reply + 0x12) = requester->GetIdByChannel();
    *(unsigned int*)((char*)&reply + 0x16) = *(unsigned int*)(pb + 0x16);
    if (guildKey == 0)
    {
        if (joiner == 0)
        {
            GuildJoin(guild, (STGuildJoinInfo*)(pb + 0x1a), joinerNo);
        }
        else
        {
            GuildJoin(guild, joiner, joinerNo);
        }
    }
    requester->SendToGameserver((char*)&reply, 0x1a);
}
```

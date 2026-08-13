# _ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader

`CPacketTranslater::OnApproveJoinGuild(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8088ae6` | `0x272` | `0x807e048` | `0x16a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,162 +1,102 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x54,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x59>
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x51>
 movl   $0x1fa0,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x164>
+mov    -0x18(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
 mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
-sete   %al
+setne  %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xc0>
-movl   $0x1fa6,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnApproveJoinGuild : 0 == pGuild",0x8(%esp)
-movl   $"./log/Guild",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x164>
+mov    -0x18(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild13IsGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xff>
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xbf>
+mov    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSubGuildMasterEj>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xff>
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xc6>
 mov    $0x1,%eax
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x104>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0xcb>
 mov    $0x0,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x143>
+je     <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x12e>
+lea    -0x3f(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN36Packet_DB_Request_Approve_Join_GuildC1Ev>
+lea    -0x3f(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x3f(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x3f(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+lea    -0x3f(%ebp),%eax
+lea    0x16(%eax),%ebx
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN12CApplication15Get_ServerGroupEv>
+mov    %al,(%ebx)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+mov    0x68(%eax),%eax
+lea    -0x3f(%ebp),%edx
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
+jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x164>
 movl   $0x1fad,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnApproveJoinGuild authority error",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-lea    -0x53(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN36Packet_DB_Request_Approve_Join_GuildC1Ev>
-mov    -0x14(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x49(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x45(%ebp)
-mov    -0x14(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x41(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    %eax,(%esp)
-call   <T> <_ZN12CApplication15Get_ServerGroupEv>
-mov    %al,-0x3d(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-mov    0x68(%eax),%eax
-lea    -0x53(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x211>
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
-movl   $0x1fbb,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x20a>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x26b>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1fc0,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnApproveJoinGuild Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader+0x266>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-add    $0x60,%esp
+add    $0x54,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnApproveJoinGuild(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater18OnApproveJoinGuildEP12PacketHeader
               (PacketHeader *param_1)

{
  bool bVar1;
  char cVar2;
  Packet_DB_Request_Approve_Join_Guild local_57 [10];
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined1 local_41;
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CGuild *local_14;
  
  local_18 = param_1;
  local_14 = (CGuild *)0x0;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08088b1a to 08088c75 has its CatchHandler @ 08088c7b */
    CMyFileLog::CMyFileLog(local_40,"OnApproveJoinGuild",0x1fa0);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Guild","CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp");
    return;
  }
  local_14 = (CGuild *)CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
  if (local_14 != (CGuild *)0x0) {
    cVar2 = CGuild::IsGuildMaster(local_14,*(uint *)(local_18 + 0xe));
    if ((cVar2 == '\x01') ||
       (cVar2 = CGuild::IsSubGuildMaster(local_14,*(uint *)(local_18 + 0xe)), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CMyFileLog::CMyFileLog(local_30,"OnApproveJoinGuild",0x1fad);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/Guild","CPacketTranslater::OnApproveJoinGuild authority error");
    }
    else {
      Packet_DB_Request_Approve_Join_Guild::Packet_DB_Request_Approve_Join_Guild(local_57);
      local_4d = *(undefined4 *)(local_18 + 10);
      local_49 = *(undefined4 *)(local_18 + 0xe);
      local_45 = *(undefined4 *)(local_18 + 0x12);
      local_41 = CApplication::_ZN12CApplication15Get_ServerGroupEv(m_pclApp);
      CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
                (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_57);
    }
    return;
  }
  CMyFileLog::CMyFileLog(local_38,"OnApproveJoinGuild",0x1fa6);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/Guild","CPacketTranslater::OnApproveJoinGuild : 0 == pGuild");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5618 行）：

```cpp
void CPacketTranslater::OnApproveJoinGuild(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1fa0, "./log/Guild", "CPacketTranslater::OnApproveJoinGuild : 0 == m_pclApp");
        return;
    }
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) != 0)
    {
        unsigned int charNo = *(unsigned int*)(pb + 0xe);
        if (guild->IsGuildMaster(charNo) == 1 || guild->IsSubGuildMaster(charNo) == 1)
        {
            Packet_DB_Request_Approve_Join_Guild dbPkt;
            *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
            *(unsigned int*)((char*)&dbPkt + 0xe) = charNo;
            *(unsigned int*)((char*)&dbPkt + 0x12) = *(unsigned int*)(pb + 0x12);
            *(unsigned char*)((char*)&dbPkt + 0x16) = m_pclApp->Get_ServerGroup();
            m_pclApp->m_serverHandler->SendToDB(&dbPkt);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x1fad, "./log/Guild", "CPacketTranslater::OnApproveJoinGuild authority error");
        }
    }
}
```

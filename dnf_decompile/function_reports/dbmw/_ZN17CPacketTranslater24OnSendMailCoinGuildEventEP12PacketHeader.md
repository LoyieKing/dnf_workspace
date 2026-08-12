# _ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader

`CPacketTranslater::OnSendMailCoinGuildEvent(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809602c` | `0x321` | `0x80d0978` | `0x31c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,214 +1,213 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x520,%esp
+sub    $0x530,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x316>
+je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x30e>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x317>
-mov    -0x1c(%ebp),%eax
-mov    0xf(%eax),%eax
-test   %eax,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x41>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x311>
+mov    -0x20(%ebp),%eax
 mov    0xf(%eax),%eax
 cmp    $0x10,%eax
-jle    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x86>
-mov    -0x1c(%ebp),%eax
+jle    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x7c>
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%ebx
 movl   $0x3d4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CApplication.OnSendMailCoinGuildEvent Err : return false(%d)",0x8(%esp)
 movl   $"./log/GuildEvent",0x4(%esp)
-lea    -0x3c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x317>
+lea    -0x40(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x312>
+mov    -0x20(%ebp),%eax
+mov    0xf(%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
-mov    0xf(%eax),%edx
-mov    %edx,%eax
 sar    $0x1f,%eax
-not    %eax
-and    %edx,%eax
-mov    %eax,-0x18(%ebp)
-lea    -0x48(%ebp),%eax
+mov    %eax,%edx
+xor    -0x1c(%ebp),%edx
+mov    %edx,-0x18(%ebp)
+sub    %eax,-0x18(%ebp)
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIiSaIiEEC1Ev>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIiSaIiEE5clearEv>
-mov    -0x1c(%ebp),%eax
-mov    0xf(%eax),%ecx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%edx
-mov    -0x1c(%ebp),%eax
+mov    -0x20(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
-lea    0x50(%ebx),%esi
-lea    -0x48(%ebp),%ebx
-mov    %ebx,0x1c(%esp)
-mov    %ecx,0x18(%esp)
+mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
+lea    0x50(%ecx),%ebx
+lea    -0x4c(%ebp),%ecx
+mov    %ecx,0x1c(%esp)
+movl   $0x0,0x18(%esp)
 mov    -0x18(%ebp),%ecx
 mov    %ecx,0x14(%esp)
 movl   $0x1,0x10(%esp)
 movl   $0x1,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %esi,(%esp)
+mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager20AwardGuildCoinByMailEijjjiiRSt6vectorIiSaIiEE>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x14b>
-mov    -0x1c(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x147>
+mov    -0x20(%ebp),%eax
 mov    0xb(%eax),%ebx
 movl   $0x3f5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CApplication.AwardGuildCoinByMail Err(%d) : return false",0x8(%esp)
 movl   $"./log/GuildEvent",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x22e>
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt6vectorIiSaIiEE4sizeEv>
-test   %eax,%eax
-setne  %al
+lea    -0x38(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x226>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNKSt6vectorIiSaIiEE5emptyEv>
+xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x22e>
-lea    -0x506(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x226>
+lea    -0x50a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Notify_New_Group_MailC1Ev>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIiSaIiEE4sizeEv>
 cmp    $0x12b,%eax
-jg     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x190>
-lea    -0x48(%ebp),%eax
+ja     <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x18a>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIiSaIiEE4sizeEv>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x195>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x18f>
 mov    $0x12c,%eax
-mov    %eax,-0x4fc(%ebp)
+mov    %eax,-0x14(%ebp)
 movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x1c6>
-mov    -0x10(%ebp),%ebx
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x1c7>
+lea    -0x50a(%ebp),%eax
+mov    -0x10(%ebp),%edx
+shl    $0x2,%edx
+add    $0xe,%edx
+lea    (%eax,%edx,1),%ebx
 mov    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x48(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIiSaIiEE2atEj>
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIiSaIiEEixEj>
 mov    (%eax),%eax
-mov    %eax,-0x4f8(%ebp,%ebx,4)
+mov    %eax,(%ebx)
 addl   $0x1,-0x10(%ebp)
-mov    -0x4fc(%ebp),%eax
-cmp    -0x10(%ebp),%eax
-setg   %al
+mov    -0x10(%ebp),%eax
+cmp    -0x14(%ebp),%eax
+setl   %al
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x1a4>
+jne    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x19b>
+movzwl -0x508(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x50a(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x14(%ebp)
-movzwl -0x504(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x506(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIiSaIiEE5clearEv>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x22e>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x226>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x48(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIiSaIiEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x23e>
-lea    -0x48(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x236>
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIiSaIiEED1Ev>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x312>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x2ba>
+jne    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x2b2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x449,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSendMailCoinGuildEvent() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x2b3>
+lea    -0x30(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x2ab>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x312>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x44e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSendMailCoinGuildEvent() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x30f>
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x307>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x317>
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x312>
 nop
-add    $0x520,%esp
+jmp    <T> <_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader+0x312>
+nop
+add    $0x530,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnSendMailCoinGuildEvent(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnSendMailCoinGuildEventEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  Packet_Notify_New_Group_Mail local_50a [2];
  ushort local_508;
  int local_500;
  undefined4 auStack_4fc [300];
  vector<int,std::allocator<int>> local_4c [12];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  PacketHeader *local_20;
  uint local_1c;
  CGuildServer *local_18;
  uint local_14;
  
  if ((m_pclApp != 0) && (local_20 = param_1, *(int *)(param_1 + 0xb) != 0)) {
    if ((*(int *)(param_1 + 0xf) < 1) || (0x10 < *(int *)(param_1 + 0xf))) {
      uVar1 = *(undefined4 *)(param_1 + 0xb);
                    /* try { // try from 08096089 to 080960ce has its CatchHandler @ 0809626a */
      CMyFileLog::CMyFileLog(local_40,"OnSendMailCoinGuildEvent",0x3d4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildEvent",
                 "CApplication.OnSendMailCoinGuildEvent Err : return false(%d)",uVar1);
    }
    else {
      local_1c = ~((int)*(uint *)(param_1 + 0xf) >> 0x1f) & *(uint *)(param_1 + 0xf);
      std::vector<int,std::allocator<int>>::vector(local_4c);
                    /* try { // try from 080960d5 to 08096242 has its CatchHandler @ 08096245 */
      std::vector<int,std::allocator<int>>::clear(local_4c);
      cVar3 = CDBManager::AwardGuildCoinByMail
                        ((CDBManager *)(m_pclApp + 0x50),(uint)(byte)local_20[10],
                         *(uint *)(local_20 + 0xb),1,1,local_1c,*(int *)(local_20 + 0xf),
                         (vector *)local_4c);
      if (cVar3 == '\x01') {
        iVar4 = std::vector<int,std::allocator<int>>::size(local_4c);
        if (iVar4 != 0) {
          Packet_Notify_New_Group_Mail::Packet_Notify_New_Group_Mail(local_50a);
          iVar4 = std::vector<int,std::allocator<int>>::size(local_4c);
          if (iVar4 < 300) {
            local_500 = std::vector<int,std::allocator<int>>::size(local_4c);
          }
          else {
            local_500 = 300;
          }
          for (local_14 = 0; uVar2 = local_14, (int)local_14 < local_500; local_14 = local_14 + 1) {
            puVar5 = (undefined4 *)std::vector<int,std::allocator<int>>::at(local_4c,local_14);
            auStack_4fc[uVar2] = *puVar5;
          }
          local_18 = (CGuildServer *)
                     CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
          CGuildServer::SendToServer(local_18,(char *)local_50a,(uint)local_508);
          std::vector<int,std::allocator<int>>::clear(local_4c);
        }
      }
      else {
        uVar1 = *(undefined4 *)(local_20 + 0xb);
        CMyFileLog::CMyFileLog(local_38,"OnSendMailCoinGuildEvent",0x3f5);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_38,"./log/GuildEvent",
                   "CApplication.AwardGuildCoinByMail Err(%d) : return false",uVar1);
      }
                    /* try { // try from 08096260 to 08096264 has its CatchHandler @ 0809626a */
      std::vector<int,std::allocator<int>>::~vector(local_4c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 330 行）：

```cpp
void CPacketTranslater::OnSendMailCoinGuildEvent(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Send_Mail_Coin_Guild_Event* pkt =
            (Packet_DBMW_Send_Mail_Coin_Guild_Event*)header;
        if (pkt->m_guildId == 0)
            return;
        if (pkt->m_count > 0x10)
        {
            DNF_LOG_SCOPE_LINE(0x3d4,
                "./log/GuildEvent",
                "CApplication.OnSendMailCoinGuildEvent Err : return false(%d)",
                pkt->m_guildId
            );

            return;
        }
        int count = pkt->m_count;
        int absCount = count < 0 ? -count : count;
        std::vector<int> characNos;
        characNos.clear();
        if (!m_pclApp->m_dbManager.AwardGuildCoinByMail(
                pkt->m_serverId, pkt->m_guildId, 1, 1,
                absCount, 0, characNos))
        {
            DNF_LOG_SCOPE_LINE(0x3f5,
                "./log/GuildEvent",
                "CApplication.AwardGuildCoinByMail Err(%d) : return false",
                pkt->m_guildId
            );

        }
        else if (!characNos.empty())
        {
            Packet_Notify_New_Group_Mail notice;
            int n = characNos.size() > 0x12b ? 0x12c : characNos.size();
            for (int i = 0; i < n; i++)
                *(int*)((char*)&notice + 0xe + i * 4) = characNos[i];
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&notice, notice.packetSize);
            characNos.clear();
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnSendMailCoinGuildEvent() Exception Break",
                  0x449, 0x44e);
}
```

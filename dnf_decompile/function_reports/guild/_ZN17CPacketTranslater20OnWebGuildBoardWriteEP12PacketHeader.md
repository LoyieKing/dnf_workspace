# _ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader

`CPacketTranslater::OnWebGuildBoardWrite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80875e2` | `0x233` | `0x807c836` | `0x166` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,93 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-sub    $0x7c,%esp
+sub    $0x78,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edi
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%esi
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    %eax,-0x1c(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %eax,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
 movl   $0x1dbe,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x14(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x10(%esp)
+mov    -0x18(%ebp),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnWebGuildBoardWrite Receive Data: GuildKey : %u, CharacID : %u, NO : %u",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xa7>
+jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0xbc>
 movl   $0x1dc2,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebGuildBoardWrite : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
-add    $0x290,%edx
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x164>
+mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
+lea    0x290(%eax),%edx
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
-mov    %eax,-0x24(%ebp)
-cmpl   $0x0,-0x24(%ebp)
+mov    %eax,-0xc(%ebp)
+cmpl   $0x0,-0xc(%ebp)
 sete   %al
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x10e>
+je     <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x11c>
 movl   $0x1dc9,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnWebGuildBoardWrite : 0 == pclGuild",0x8(%esp)
 movl   $"./log/GuildBoard",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-lea    -0x62(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x164>
+lea    -0x4a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN44Packet_DB_Load_Request_Web_Guild_Board_WriteC1Ev>
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%eax
-mov    %eax,-0x50(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x58(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%eax
-mov    %eax,-0x54(%ebp)
+lea    -0x4a(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x4a(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x14(%ebp),%eax
+mov    %eax,(%edx)
+lea    -0x4a(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
-lea    -0x62(%ebp),%edx
+lea    -0x4a(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1d1>
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
-movl   $0x1dd7,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnWebGuildBoardWrite Exception Break : %s\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x1ca>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x22b>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $0x1ddc,0x8(%esp)
-movl   $&_ZZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnWebGuildBoardWrite Exception Break\n",0x8(%esp)
-movl   $"./log/Except",0x4(%esp)
-lea    -0x2c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader+0x226>
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

/* CPacketTranslater::OnWebGuildBoardWrite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnWebGuildBoardWriteEP12PacketHeader
               (PacketHeader *param_1)

{
  CServerHandler *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Packet_DB_Load_Request_Web_Guild_Board_Write local_66 [10];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  CMyFileLog local_50 [8];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  int local_28;
  PacketHeader *local_24;
  
  local_24 = param_1;
  uVar3 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0xe);
  uVar1 = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 08087619 to 08087731 has its CatchHandler @ 08087737 */
  CMyFileLog::CMyFileLog(local_50,"OnWebGuildBoardWrite",0x1dbe);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_50,"./log/GuildBoard",
             "CPacketTranslater::OnWebGuildBoardWrite Receive Data: GuildKey : %u, CharacID : %u, NO : %u"
             ,uVar1,uVar2,uVar3);
  if (m_pclApp == (CApplication *)0x0) {
    CMyFileLog::CMyFileLog(local_48,"OnWebGuildBoardWrite",0x1dc2);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/GuildBoard","CPacketTranslater::OnWebGuildBoardWrite : 0 == m_pclApp"
               ,uVar1,uVar2,uVar3);
  }
  else {
    local_28 = CGuildManager::_ZN13CGuildManager9FindGuildEj((uint)(m_pclApp + 0x290));
    if (local_28 == 0) {
      CMyFileLog::CMyFileLog(local_40,"OnWebGuildBoardWrite",0x1dc9);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_40,"./log/GuildBoard",
                 "CPacketTranslater::OnWebGuildBoardWrite : 0 == pclGuild",uVar1,uVar2,uVar3);
    }
    else {
      Packet_DB_Load_Request_Web_Guild_Board_Write::Packet_DB_Load_Request_Web_Guild_Board_Write
                (local_66);
      local_54 = *(undefined4 *)(local_24 + 0x12);
      local_5c = *(undefined4 *)(local_24 + 10);
      local_58 = *(undefined4 *)(local_24 + 0xe);
      this = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
      CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(this,(PacketHeader *)local_66);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 5255 行）：

```cpp
void CPacketTranslater::OnWebGuildBoardWrite(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    unsigned int guildKey = *(unsigned int*)(pb + 0xa);
    unsigned int charNo = *(unsigned int*)(pb + 0xe);
    unsigned int no = *(unsigned int*)(pb + 0x12);
    {
        DNF_LOG_SCOPE_LINE(0x1dbe,"./log/GuildBoard",
            "CPacketTranslater::OnWebGuildBoardWrite Receive Data: GuildKey : %u, CharacID : %u, NO : %u",
            guildKey, charNo, no);
    }
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1dc2, "./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardWrite : 0 == m_pclApp");
        return;
    }
    CGuild* guild;
    if ((guild = (&m_pclApp->m_guildManager)->FindGuild(guildKey)) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1dc9, "./log/GuildBoard", "CPacketTranslater::OnWebGuildBoardWrite : 0 == pclGuild");
        return;
    }
    Packet_DB_Load_Request_Web_Guild_Board_Write dbPkt;
    *(unsigned int*)((char*)&dbPkt + 0xa) = guildKey;
    *(unsigned int*)((char*)&dbPkt + 0xe) = charNo;
    *(unsigned int*)((char*)&dbPkt + 0x12) = no;
    m_pclApp->Get_ServerHandler()->SendToDB(&dbPkt);
}
```

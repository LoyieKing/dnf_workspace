# _ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader

`CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809eaee` | `0x252` | `0x80d0db6` | `0x23d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,145 +1,141 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x1b0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x247>
+je     <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x232>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x14(%ebp)
-movl   $0x0,-0x10(%ebp)
-lea    -0xd5(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0xd1(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18STGuildBoardDBInfoC1Ev>
+lea    -0x18a(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN42Packet_DB_Load_Reply_Web_Guild_Board_WriteC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0xd5(%ebp),%eax
+lea    -0xd1(%ebp),%eax
 mov    %eax,0x8(%esp)
-mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0xd6>
-lea    -0x18e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN42Packet_DB_Load_Reply_Web_Guild_Board_WriteC1Ev>
-mov    -0x18(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0xcf>
+mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x182(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x17e(%ebp)
+mov    -0x14(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x17e(%ebp)
+mov    %eax,-0x17a(%ebp)
 movl   $0xa5,0x8(%esp)
-lea    -0xd5(%ebp),%eax
+lea    -0xd1(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18e(%ebp),%eax
+lea    -0x18a(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-lea    -0x18e(%ebp),%eax
+lea    -0x18a(%ebp),%eax
 movl   $0xb9,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x248>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x233>
+mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%ebx
 movl   $0x101a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $0x0,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite()\tGuild Id : %d,\t Query Result : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x18e(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN42Packet_DB_Load_Reply_Web_Guild_Board_WriteC1Ev>
-movw   $0x1,-0x184(%ebp)
-mov    -0x18(%ebp),%eax
+movw   $0x1,-0x180(%ebp)
+mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x182(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x17e(%ebp)
+mov    -0x14(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x17e(%ebp)
-lea    -0x18e(%ebp),%eax
+mov    %eax,-0x17a(%ebp)
+lea    -0x18a(%ebp),%eax
 movl   $0xb9,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x248>
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x233>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x1eb>
+jne    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x1d6>
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
 movl   $0x1026,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x1e4>
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x1cf>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x248>
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x233>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x102b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x22b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x248>
+jmp    <T> <_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader+0x233>
 nop
 add    $0x1b0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater33OnDBLoadRequestWebGuildBoardWriteEP12PacketHeader
               (PacketHeader *param_1)

{
  undefined4 uVar1;
  char cVar2;
  Packet_DB_Load_Reply_Web_Guild_Board_Write local_192 [10];
  undefined2 local_188;
  undefined4 local_186;
  undefined4 local_182;
  undefined1 auStack_17e [165];
  STGuildBoardDBInfo local_d9 [165];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CGuildServer *local_18;
  undefined4 local_14;
  
  if (m_pclApp != 0) {
    local_1c = param_1;
    local_18 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    local_14 = 0;
    STGuildBoardDBInfo::STGuildBoardDBInfo(local_d9);
                    /* try { // try from 0809eb50 to 0809ec57 has its CatchHandler @ 0809ec5d */
    cVar2 = CDBManager::
            _ZN10CDBManager20OnWriteWebGuildBoardEP44Packet_DB_Load_Request_Web_Guild_Board_WriteP18STGuildBoardDBInfo
                      ((CDBManager *)(m_pclApp + 0x50),
                       (Packet_DB_Load_Request_Web_Guild_Board_Write *)local_1c,local_d9);
    if (cVar2 == '\0') {
      uVar1 = *(undefined4 *)(local_1c + 10);
      CMyFileLog::CMyFileLog(local_34,"OnDBLoadRequestWebGuildBoardWrite",0x101a);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/Except",
                 "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite()\tGuild Id : %d,\t Query Result : %d\n"
                 ,uVar1,0);
      Packet_DB_Load_Reply_Web_Guild_Board_Write::Packet_DB_Load_Reply_Web_Guild_Board_Write
                (local_192);
      local_188 = 1;
      local_186 = *(undefined4 *)(local_1c + 10);
      local_182 = *(undefined4 *)(local_1c + 0xe);
      CGuildServer::SendToServer(local_18,(char *)local_192,0xb9);
    }
    else {
      Packet_DB_Load_Reply_Web_Guild_Board_Write::Packet_DB_Load_Reply_Web_Guild_Board_Write
                (local_192);
      local_186 = *(undefined4 *)(local_1c + 10);
      local_182 = *(undefined4 *)(local_1c + 0xe);
      memcpy(auStack_17e,local_d9,0xa5);
      CGuildServer::SendToServer(local_18,(char *)local_192,0xb9);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 472 行）：

```cpp
void CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DB_Load_Request_Web_Guild_Board_Write* pkt =
            (Packet_DB_Load_Request_Web_Guild_Board_Write*)header;
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        STGuildBoardDBInfo info;
        Packet_DB_Load_Reply_Web_Guild_Board_Write reply;
        if (m_pclApp->m_dbManager.OnWriteWebGuildBoard(
                pkt, &info))
        {
            reply.m_fieldC = pkt->m_guildId;
            reply.m_field10 = pkt->m_fieldE;
            memcpy((char*)&reply + 0x14, &info, 0xa5);
            gs->SendToServer((char*)&reply, 0xb9);
        }
        else
        {
            DNF_LOG_SCOPE_LINE(0x101a,
                "./log/Except",
                "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite()\tGuild Id : %d,\t Query Result : %d\n", pkt->m_guildId,
                0
            );

            reply.m_fieldA = 1;
            reply.m_fieldC = pkt->m_guildId;
            reply.m_field10 = pkt->m_fieldE;
            gs->SendToServer((char*)&reply, 0xb9);
        }
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::OnDBLoadRequestWebGuildBoardWrite() Exception Break",
                  0x1026, 0x102b);
}
```

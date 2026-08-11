# _ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader

`CPacketTranslater::OnQueryGuildBooting(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8097d2c` | `0x1b2` | `0x8081f70` | `0x1b7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,118 +1,119 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
 push   %esi
 push   %ebx
-sub    $0x6c,%esp
+sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1a9>
+je     <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1af>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x24(%ebp)
-lea    -0x4f(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x23(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_DB_Query_Reply_On_Guild_BootingC1Ev>
-mov    -0x24(%ebp),%eax
+mov    -0x10(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
 mov    %eax,0x8(%esp)
-lea    -0x4f(%ebp),%eax
+lea    -0x23(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi>
+movzwl -0x21(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x23(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x20(%ebp)
-movzwl -0x4d(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x4f(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x20(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-movzbl -0x3d(%ebp),%eax
-movsbl %al,%edi
-mov    -0x41(%ebp),%esi
-mov    -0x45(%ebp),%ebx
 movl   $0x685,0x8(%esp)
 movl   $"OnQueryGuildBooting",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %edi,0x14(%esp)
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+lea    -0x23(%ebp),%eax
+add    $0x12,%eax
+movzbl (%eax),%eax
+movsbl %al,%ecx
+lea    -0x23(%ebp),%eax
+add    $0xe,%eax
+mov    (%eax),%edx
+lea    -0x23(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
+mov    %ecx,0x14(%esp)
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"QueryGuildBooting A_Side(%d) B_Side(%d) Winner(%d)",0x8(%esp)
 movl   $"./log/QueryGuildBooting",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1aa>
+jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1b0>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x14d>
+jne    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x153>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0x1c(%ebp)
-mov    -0x1c(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
+mov    %eax,-0xc(%ebp)
 movl   $0x689,0x8(%esp)
 movl   $"OnQueryGuildBooting",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+add    $0x8,%eax
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x146>
+jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x14c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1aa>
+jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1b0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x68e,0x8(%esp)
 movl   $"OnQueryGuildBooting",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestGuildCreate() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1a2>
+jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1a8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1aa>
+jmp    <T> <_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader+0x1b0>
 nop
-add    $0x6c,%esp
+add    $0x60,%esp
 pop    %ebx
 pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryGuildBooting(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater19OnQueryGuildBootingEP12PacketHeader
               (PacketHeader *param_1)

{
  Packet_DB_Query_Reply_On_Guild_Booting local_53 [2];
  ushort local_51;
  undefined4 local_49;
  undefined4 local_45;
  char local_41;
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp != 0) {
    local_28 = param_1;
    Packet_DB_Query_Reply_On_Guild_Booting::Packet_DB_Query_Reply_On_Guild_Booting(local_53);
                    /* try { // try from 08097d74 to 08097df7 has its CatchHandler @ 08097dfd */
    CDBManager::_ZN10CDBManager17QueryGuildBootingER38Packet_DB_Query_Reply_On_Guild_Bootingi
              ((CDBManager *)(m_pclApp + 0x50),local_53,(uint)(byte)local_28[10]);
    local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CGuildServer::SendToServer(local_24,(char *)local_53,(uint)local_51);
    CMyFileLog::CMyFileLog(local_40,"OnQueryGuildBooting",0x685);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/QueryGuildBooting",
               "QueryGuildBooting A_Side(%d) B_Side(%d) Winner(%d)",local_49,local_45,(int)local_41)
    ;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1280 行）：

```cpp
void CPacketTranslater::OnQueryGuildBooting(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_Guild_Booting* pkt =
            (Packet_DBMW_Request_Guild_Booting*)header;
        Packet_DB_Query_Reply_On_Guild_Booting reply;
        m_pclApp->m_dbManager.QueryGuildBooting(
            reply, pkt->m_serverId);
        m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
            (char*)&reply, reply.packetSize);
        CMyFileLog log("OnQueryGuildBooting", 0x685);
        log("./log/QueryGuildBooting",
            "QueryGuildBooting A_Side(%d) B_Side(%d) Winner(%d)",
            *(unsigned int*)((char*)&reply + 0xa),
            *(unsigned int*)((char*)&reply + 0xe),
            *(signed char*)((char*)&reply + 0x12));
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestGuildCreate() Exception Break",
                  0x689, 0x68e);
}
```

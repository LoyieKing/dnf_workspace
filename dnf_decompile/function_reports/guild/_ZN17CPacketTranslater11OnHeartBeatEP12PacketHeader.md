# _ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader

`CPacketTranslater::OnHeartBeat(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x807196a` | `0x310` | `0x8067e98` | `0x310` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,199 +1,199 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x1c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2ff>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
 mov    %eax,-0x18(%ebp)
 cmpl   $0x0,-0x18(%ebp)
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x302>
 mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
 mov    %al,-0x11(%ebp)
 cmpb   $0xc8,-0x11(%ebp)
 jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0xba>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16ResetDBHeartBeatEv>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler19IsConnectedDBServerEv>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x305>
 movl   $0x1,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16SetDBConnectFlagEb>
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler23SendDBMWConnectionCheckEv>
 movl   $0x10d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"DB Server Connection Complete!",0x8(%esp)
 movl   $"./log/Udp",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 cmpb   $0x0,-0x11(%ebp)
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1ac>
 cmpb   $0xbe,-0x11(%ebp)
 ja     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x1ac>
 movzbl -0x11(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14ResetHeartBeatEh>
 movzbl -0x11(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler21IsConnectedGameServerEh>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x308>
 movzbl -0x11(%ebp),%eax
 movl   $0x1,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14SetConnectFlagEhb>
 lea    -0x4f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_Tcp_Server_ConnectC1Ev>
 movb   $0xcb,-0x45(%ebp)
 movzbl -0x11(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler13GetGameServerEj>
 mov    %eax,-0x10(%ebp)
 cmpl   $0x0,-0x10(%ebp)
 setne  %al
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x169>
-lea    -0x4f(%ebp),%edx
+lea    -0x4f(%ebp),%eax
+movl   $0xb,0x8(%esp)
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-movl   $0xb,0x8(%esp)
-mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 movzbl -0x11(%ebp),%ebx
 movl   $0x129,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() => Channel Index : %d\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 mov    -0x1c(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%ebx
 movl   $0x130,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"[ERROR - HEART BEAT] Channel Index(%d) Over.",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x297>
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
 mov    %eax,0x4(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x137,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x290>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break",(%esp)
 call   <T> <puts>
 movl   $0x13d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater11OnHeartBeatEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnHeartBeat() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x2f8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 nop
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 nop
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 nop
 jmp    <T> <_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader+0x309>
 nop
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnHeartBeat(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader(PacketHeader *param_1)

{
  PacketHeader PVar1;
  char cVar2;
  uint uVar3;
  Packet_Tcp_Server_Connect local_53 [10];
  undefined1 local_49;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  CMyFileLog local_38 [24];
  PacketHeader *local_20;
  CServerHandler *local_1c;
  PacketHeader local_15;
  CServerInterface *local_14;
  
  local_20 = param_1;
  if ((m_pclApp != 0) &&
     (local_1c = *(CServerHandler **)(m_pclApp + 0x68), local_1c != (CServerHandler *)0x0)) {
    local_15 = param_1[10];
    if (local_15 == (PacketHeader)0xc8) {
                    /* try { // try from 080719b0 to 08071b59 has its CatchHandler @ 08071b5f */
      CServerHandler::ResetDBHeartBeat(local_1c);
      cVar2 = CServerHandler::_ZN14CServerHandler19IsConnectedDBServerEv(local_1c);
      if (cVar2 != '\x01') {
        CServerHandler::SetDBConnectFlag(local_1c,true);
        CServerHandler::_ZN14CServerHandler23SendDBMWConnectionCheckEv(local_1c);
        CMyFileLog::CMyFileLog(local_48,"OnHeartBeat",0x10d);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_48,"./log/Udp","DB Server Connection Complete!")
        ;
      }
    }
    else if ((local_15 == (PacketHeader)0x0) || (0xbe < (byte)local_15)) {
      PVar1 = param_1[10];
      CMyFileLog::CMyFileLog(local_38,"OnHeartBeat",0x130);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/Except","[ERROR - HEART BEAT] Channel Index(%d) Over.",
                 (uint)(byte)PVar1);
    }
    else {
      CServerHandler::_ZN14CServerHandler14ResetHeartBeatEh(local_1c,(uchar)local_15);
      cVar2 = CServerHandler::_ZN14CServerHandler21IsConnectedGameServerEh(local_1c,(uchar)local_15)
      ;
      if (cVar2 != '\x01') {
        CServerHandler::_ZN14CServerHandler14SetConnectFlagEhb(local_1c,(uchar)local_15,true);
        Packet_Tcp_Server_Connect::Packet_Tcp_Server_Connect(local_53);
        local_49 = 0xcb;
        local_14 = (CServerInterface *)CServerHandler::GetGameServer((uint)local_1c);
        if (local_14 == (CServerInterface *)0x0) {
          uVar3 = (uint)(byte)local_15;
          CMyFileLog::CMyFileLog(local_40,"OnHeartBeat",0x129);
          CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                    (local_40,"./log/Except",
                     "CPacketTranslater::OnHeartBeat() => Channel Index : %d\n",uVar3);
        }
        else {
          CServerInterface::_ZN16CServerInterface12SendToServerEPci(local_14,(char *)local_53,0xb);
        }
      }
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 351 行）：

```cpp
void CPacketTranslater::OnHeartBeat(PacketHeader* pkt)
{
    char* pb = (char*)pkt;
    try
    {
        if (m_pclApp != 0)
        {
            CServerHandler* handler = m_pclApp->m_serverHandler;
            if (handler != 0)
            {
                unsigned char idx = ((GuildPacketBodyView*)pb)->m_field_a;
                if (idx == 0xc8)
                {
                    handler->ResetDBHeartBeat();
                    if (!handler->IsConnectedDBServer())
                    {
                        handler->SetDBConnectFlag(true);
                        handler->SendDBMWConnectionCheck();
                        DNF_LOG_SCOPE_LINE(0x10d, "./log/Udp", "DB Server Connection Complete!");
                    }
                }
                else if (idx != 0 && idx <= 0xbe)
                {
                    handler->ResetHeartBeat(idx);
                    if (!handler->IsConnectedGameServer(idx))
                    {
                        handler->SetConnectFlag(idx, true);
                        Packet_Tcp_Server_Connect connectPkt;
                        connectPkt.m_field_a = 0xcb;
                        CGameServer* gs;
                        if ((gs = handler->GetGameServer((unsigned int)idx)) != 0)
                        {
                            gs->SendToServer((char*)&connectPkt, 0xb);
                        }
                        else
                        {
                            DNF_LOG_SCOPE_LINE(0x129,"./log/Except",
                                "CPacketTranslater::OnHeartBeat() => Channel Index : %d\n",
                                (unsigned int)idx);
                        }
                    }
                }
                else
                {
                    DNF_LOG_SCOPE_LINE(0x130,"./log/Except", "[ERROR - HEART BEAT] Channel Index(%d) Over.",
                        (unsigned int)((GuildPacketBodyView*)pb)->m_field_a);
                }
            }
        }
    }
    catch (std::exception& e)
    {
        printf("CPacketTranslater::OnHeartBeat() Exception Break : %s\n", e.what());
        DNF_LOG_SCOPE_LINE(0x137, "./log/Except",
            "CPacketTranslater::OnHeartBeat() Exception Break : %s\n", e.what());
    }
    catch (...)
    {
        puts("CPacketTranslater::OnHeartBeat() Exception Break");
        DNF_LOG_SCOPE_LINE(0x13d, "./log/Except",
            "CPacketTranslater::OnHeartBeat() Exception Break\n");
    }
}
```

# _ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader

`CPacketTranslater::onStartGameEventFromServer(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a0b70` | `0x247` | `0x808179a` | `0x243` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,151 +1,151 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x50,%esp
+sub    $0x40,%esp
 mov    0x8(%ebp),%eax
-mov    %eax,-0x20(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%ebx
+mov    %eax,-0x18(%ebp)
 movl   $0x1567,0x8(%esp)
 movl   $"onStartGameEventFromServer",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    -0x18(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onStartGameEventFromServer data. (event:%d)\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-mov    -0x20(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0xa7>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0xa9>
 movl   $0x156b,0x8(%esp)
 movl   $"onStartGameEventFromServer",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onStartGameEventFromServer fail\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 movl   $0xa,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
-mov    %eax,-0x1c(%ebp)
-cmpl   $0x0,-0x1c(%ebp)
-je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x138>
+mov    %eax,-0x14(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x13c>
 movl   $0x1a,0x8(%esp)
 movl   $0x27fb,0x4(%esp)
-mov    -0x1c(%ebp),%eax
+mov    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer16makePacketHeaderEtt>
-mov    %eax,-0x18(%ebp)
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    -0x20(%ebp),%eax
-mov    0xa(%eax),%edx
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0xe(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0xe(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x12(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x12(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+lea    0x16(%eax),%edx
+mov    -0x18(%ebp),%eax
+mov    0x16(%eax),%eax
+mov    %eax,(%edx)
+mov    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x14(%ebp),%eax
-mov    %edx,0xa(%eax)
-mov    -0x20(%ebp),%eax
-mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0xe(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x12(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x12(%eax)
-mov    -0x20(%ebp),%eax
-mov    0x16(%eax),%edx
-mov    -0x14(%ebp),%eax
-mov    %edx,0x16(%eax)
-mov    -0x14(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer12SendToServerEPc>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
+mov    -0x18(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x10(%ebp)
-mov    -0x20(%ebp),%eax
 movl   $0x1a,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e6>
+jne    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1e2>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
 movl   $0x1583,0x8(%esp)
 movl   $"onStartGameEventFromServer",0x4(%esp)
 lea    -0x30(%ebp),%eax
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
 movl   $"CPacketTranslater::onStartGameEventFromServer Exception Break : %s\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1df>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x1db>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x240>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23c>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1588,0x8(%esp)
 movl   $"onStartGameEventFromServer",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onRegistServerEvent Exception Break\n",0x8(%esp)
 movl   $"./log/AradOnly",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x23b>
+jmp    <T> <_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader+0x237>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x50,%esp
+add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onStartGameEventFromServer(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater26onStartGameEventFromServerEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  uchar uVar2;
  undefined4 uVar3;
  CMyFileLog local_44 [8];
  CMyFileLog local_3c [24];
  PacketHeader *local_24;
  CTcpServer *local_20;
  char *local_1c;
  char *local_18;
  CMonitorServer *local_14;
  
  local_24 = param_1;
  uVar3 = *(undefined4 *)(param_1 + 10);
                    /* try { // try from 080a0b9a to 080a0cd4 has its CatchHandler @ 080a0cda */
  CMyFileLog::CMyFileLog(local_44,"onStartGameEventFromServer",0x1567);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_44,"./log/AradOnly",
             "CPacketTranslater::onStartGameEventFromServer data. (event:%d)\n",uVar3);
  cVar1 = CDBManager::_ZN10CDBManager21insertServerGameEventEP31Packet_StartGameEventFromServer
                    ((CDBManager *)(m_pclApp + 0x50),(Packet_StartGameEventFromServer *)local_24);
  if (cVar1 == '\x01') {
    uVar2 = CApplication::Get_ServerHandler(m_pclApp);
    local_20 = (CTcpServer *)CServerHandler::GetTcpServer(uVar2);
    if (local_20 == (CTcpServer *)0x0) {
      local_14 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(local_14,(char *)local_24,0x1a);
    }
    else {
      local_1c = (char *)CTcpServer::_ZN10CTcpServer16makePacketHeaderEtt(local_20,0x27fb,0x1a);
      *(undefined4 *)(local_1c + 10) = *(undefined4 *)(local_24 + 10);
      *(undefined4 *)(local_1c + 0xe) = *(undefined4 *)(local_24 + 0xe);
      *(undefined4 *)(local_1c + 0x12) = *(undefined4 *)(local_24 + 0x12);
      *(undefined4 *)(local_1c + 0x16) = *(undefined4 *)(local_24 + 0x16);
      local_18 = local_1c;
      CTcpServer::SendToServer(local_20,local_1c);
    }
  }
  else {
    CMyFileLog::CMyFileLog(local_3c,"onStartGameEventFromServer",0x156b);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_3c,"./log/AradOnly","CPacketTranslater::onStartGameEventFromServer fail\n",
               uVar3);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1160 行）：

```cpp
void CPacketTranslater::onStartGameEventFromServer(PacketHeader* header)
{
    try
    {
        Packet_StartGameEventFromServer* pkt =
            (Packet_StartGameEventFromServer*)header;
        CMyFileLog log("onStartGameEventFromServer", 0x1567);
        log("./log/AradOnly",
            "CPacketTranslater::onStartGameEventFromServer data. (event:%d)\n",
            pkt->m_eventType);
        if (!m_pclApp->m_dbManager.insertServerGameEvent(
                pkt))
        {
            CMyFileLog log2("onStartGameEventFromServer", 0x156b);
            log2("./log/AradOnly",
                 "CPacketTranslater::onStartGameEventFromServer fail\n");
            return;
        }
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* buf = tcp->makePacketHeader(0x27fb, 0x1a);
            *(int*)(buf + 0xa) = pkt->m_eventType;
            *(int*)(buf + 0xe) = pkt->m_eventFlag;
            *(int*)(buf + 0x12) = pkt->m_serverId;
            *(int*)(buf + 0x16) = pkt->m_parameter1;
            tcp->SendToServer(buf);
        }
        else
        {
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)pkt, 0x1a);
        }
    }
    DNF_CATCH_LOG2("./log/AradOnly",
                   "CPacketTranslater::onStartGameEventFromServer Exception Break",
                   "CPacketTranslater::onRegistServerEvent Exception Break",
                   0x1583, 0x1588);
}
```

# _ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader

`CPacketTranslater::OnRequestBlackListOnLogin(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80953b4` | `0x218` | `0x80d2502` | `0x20b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,140 +1,135 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x1e0,%esp
+sub    $0x1d0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20a>
+je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x200>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-lea    -0x1ce(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x1c6(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_DBMW_Reponse_BlackListC1Ev>
-mov    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x1c4(%ebp)
-mov    -0x18(%ebp),%eax
+mov    %eax,-0x1bc(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
-lea    -0x1ce(%ebp),%ecx
+lea    -0x1c6(%ebp),%ecx
 add    $0xe,%ecx
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType>
-xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xa2>
+sete   %al
+test   %al,%al
+je     <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xa4>
 movl   $0x2b8,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager.QueryBlackList Err : return false",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
+mov    -0x10(%ebp),%eax
 movzbl 0xe(%eax),%eax
 cmp    $0xc9,%al
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe8>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0xe4>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x14(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x14(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-mov    -0x18(%ebp),%eax
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
+mov    -0x10(%ebp),%eax
 movzbl 0xe(%eax),%eax
 cmp    $0xcb,%al
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20d>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
+movzwl -0x1c4(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x1c6(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
-mov    %eax,-0x10(%ebp)
-movzwl -0x1cc(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x1ce(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1ae>
+jne    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a4>
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
 movl   $0x2ca,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRequestBlackListOnLogin() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1a7>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x19d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2cf,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRequestBlackListOnLogin() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x203>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x1f9>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
+jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x201>
 nop
-jmp    <T> <_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader+0x20e>
-nop
-add    $0x1e0,%esp
+add    $0x1d0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRequestBlackListOnLogin(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnRequestBlackListOnLoginEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_DBMW_Reponse_BlackList local_1d2 [2];
  ushort local_1d0;
  undefined4 local_1c8;
  STBlackUserDBType aSStack_1c4 [400];
  CMyFileLog local_34 [24];
  PacketHeader *local_1c;
  CMonitorServer *local_18;
  CGuildServer *local_14;
  
  if (m_pclApp != 0) {
    local_1c = param_1;
    Packet_DBMW_Reponse_BlackList::Packet_DBMW_Reponse_BlackList(local_1d2);
    local_1c8 = *(undefined4 *)(local_1c + 10);
                    /* try { // try from 0809540f to 080954e0 has its CatchHandler @ 080954e6 */
    cVar1 = CDBManager::_ZN10CDBManager14QueryBlackListEjP17STBlackUserDBType
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_1c + 10),aSStack_1c4);
    if (cVar1 == '\x01') {
      if (local_1c[0xe] == (PacketHeader)0xc9) {
        local_18 = (CMonitorServer *)
                   CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
        CMonitorServer::SendToServer(local_18,(char *)local_1d2,(uint)local_1d0);
      }
      else if (local_1c[0xe] == (PacketHeader)0xcb) {
        local_14 = (CGuildServer *)
                   CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
        CGuildServer::SendToServer(local_14,(char *)local_1d2,(uint)local_1d0);
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_34,"OnRequestBlackListOnLogin",0x2b8);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_34,"./log/BlackList","m_clDBManager.QueryBlackList Err : return false");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 707 行）：

```cpp
void CPacketTranslater::OnRequestBlackListOnLogin(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_BlackList_Login* pkt =
            (Packet_DBMW_Request_BlackList_Login*)header;
        Packet_DBMW_Reponse_BlackList reply;
        reply.m_fieldA = pkt->m_mid;
        if (!m_pclApp->m_dbManager.QueryBlackList(
                pkt->m_mid,
                (STBlackUserDBType*)((char*)&reply + 0xe)))
        {
            DNF_LOG_SCOPE_LINE(0x2b8,
                "./log/BlackList",
                "m_clDBManager.QueryBlackList Err : return false"
            );

            return;
        }
        if (pkt->m_fieldE == 0xc9)
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        else if (pkt->m_fieldE == 0xcb)
            m_pclApp->m_serverHandler->GetGuildServer()->SendToServer(
                (char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRequestBlackListOnLogin() Exception Break",
                  0x2ca, 0x2cf);
}
```

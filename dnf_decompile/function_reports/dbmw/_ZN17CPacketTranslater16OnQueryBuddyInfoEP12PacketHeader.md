# _ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader

`CPacketTranslater::OnQueryBuddyInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80958ec` | `0x193` | `0x8086460` | `0x19e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,107 +1,112 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x520,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x188>
+je     <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x190>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 lea    -0x513(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_DBMW_Query_Buddy_Info_ReplyC1Ev>
+lea    -0x513(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x509(%ebp)
+mov    %eax,(%edx)
+lea    -0x513(%ebp),%eax
+lea    0xe(%eax),%ebx
+lea    -0x513(%ebp),%eax
+lea    0xf(%eax),%ecx
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
-lea    -0x513(%ebp),%ecx
-add    $0xe,%ecx
-mov    %ecx,0xc(%esp)
-lea    -0x513(%ebp),%ecx
-add    $0xf,%ecx
+mov    %ebx,0xc(%esp)
 mov    %ecx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh>
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x189>
+sete   %al
+test   %al,%al
+jne    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x193>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x10(%ebp)
 movzwl -0x511(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x513(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x189>
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x194>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x12c>
+jne    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x134>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
+movl   $0x33c,0x8(%esp)
+movl   $"OnQueryBuddyInfo",0x4(%esp)
+lea    -0x1c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x33c,0x8(%esp)
-movl   $"OnQueryBuddyInfo",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryBuddyInfo() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x125>
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x12d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x189>
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x194>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x341,0x8(%esp)
 movl   $"OnQueryBuddyInfo",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryBuddyInfo() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x181>
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x189>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x189>
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x194>
+nop
+jmp    <T> <_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader+0x194>
 nop
 add    $0x520,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryBuddyInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnQueryBuddyInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_DBMW_Query_Buddy_Info_Reply local_517 [2];
  ushort local_515;
  undefined4 local_50d;
  uchar uStack_509;
  STBuddyDBInfo aSStack_508 [1264];
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    Packet_DBMW_Query_Buddy_Info_Reply::Packet_DBMW_Query_Buddy_Info_Reply(local_517);
    local_50d = *(undefined4 *)(local_18 + 10);
                    /* try { // try from 08095954 to 08095996 has its CatchHandler @ 0809599c */
    cVar1 = CDBManager::_ZN10CDBManager14QueryBuddyInfoEjP13STBuddyDBInfoRh
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 10),aSStack_508,
                       &uStack_509);
    if (cVar1 != '\0') {
      local_14 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(local_14,(char *)local_517,(uint)local_515);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2264 行）：

```cpp
void CPacketTranslater::OnQueryBuddyInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Query_Buddy* pkt = (Packet_DBMW_Query_Buddy*)header;
        Packet_DBMW_Query_Buddy_Info_Reply reply;
        *(int*)((char*)&reply + 0xa) = pkt->m_characNo;
        if (!m_pclApp->m_dbManager.QueryBuddyInfo(
                pkt->m_characNo,
                (STBuddyDBInfo*)((char*)&reply + 0xf),
                *(unsigned char*)((char*)&reply + 0xe)))
            return;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryBuddyInfo() Exception Break",
                  0x33c, 0x341);
}
```

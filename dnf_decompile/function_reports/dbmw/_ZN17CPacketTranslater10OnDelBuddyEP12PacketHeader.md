# _ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader

`CPacketTranslater::OnDelBuddy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8095754` | `0x198` | `0x80d4b90` | `0x18c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,115 +1,111 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x190>
+je     <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x184>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x55(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x51(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_DBMW_Del_Buddy_ReplyC1Ev>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x4b(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x47(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x47(%ebp)
-mov    -0x14(%ebp),%eax
+mov    %eax,-0x43(%ebp)
+mov    -0x10(%ebp),%eax
 add    $0x12,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
-lea    -0x55(%ebp),%eax
+lea    -0x51(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0xe(%eax),%edx
-mov    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager8DelBuddyEjj>
-xor    $0x1,%eax
-mov    %al,-0x25(%ebp)
+movzwl -0x4f(%ebp),%eax
+movzwl %ax,%esi
+lea    -0x51(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x10(%ebp)
-movzwl -0x53(%ebp),%eax
-movzwl %ax,%edx
-lea    -0x55(%ebp),%eax
-mov    %edx,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %esi,0x8(%esp)
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x191>
+jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x185>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x134>
+jne    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x128>
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
 movl   $0x319,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnDelBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDelBuddy() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x12d>
+jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x121>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x191>
+jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x185>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x31e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnDelBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDelBuddy() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x189>
+jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x17d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x191>
+jmp    <T> <_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader+0x185>
 nop
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDelBuddy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater10OnDelBuddyEP12PacketHeader(PacketHeader *param_1)

{
  Packet_DBMW_Del_Buddy_Reply local_59 [2];
  ushort local_57;
  undefined4 local_4f;
  undefined4 local_4b;
  undefined1 auStack_47 [30];
  byte local_29;
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    Packet_DBMW_Del_Buddy_Reply::Packet_DBMW_Del_Buddy_Reply(local_59);
    local_4f = *(undefined4 *)(local_18 + 10);
    local_4b = *(undefined4 *)(local_18 + 0xe);
    memcpy(auStack_47,local_18 + 0x12,0x1d);
                    /* try { // try from 080957cc to 08095806 has its CatchHandler @ 0809580c */
    local_29 = CDBManager::_ZN10CDBManager8DelBuddyEjj
                         ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 10),
                          *(uint *)(local_18 + 0xe));
    local_29 = local_29 ^ 1;
    local_14 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    CMonitorServer::SendToServer(local_14,(char *)local_59,(uint)local_57);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1180 行）：

```cpp
void CPacketTranslater::OnDelBuddy(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Del_Buddy* pkt = (Packet_DBMW_Del_Buddy*)header;
        Packet_DBMW_Del_Buddy_Reply reply;
        reply.m_fieldA = pkt->m_mid;
        reply.m_fieldE = pkt->m_characNo;
        memcpy((char*)&reply + 0x12, pkt->m_name, 0x1d);
        m_pclApp->m_dbManager.DelBuddy(pkt->m_mid, pkt->m_characNo);
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnDelBuddy() Exception Break",
                  0x319, 0x31e);
}
```

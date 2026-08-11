# _ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader

`CPacketTranslater::OnAddBuddy(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80955cc` | `0x187` | `0x80d80a0` | `0x187` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,110 +1,110 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 je     <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x17f>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 lea    -0x5e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_DBMW_Add_Buddy_ReplyC1Ev>
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x54(%ebp)
 movl   $0x0,-0x28(%ebp)
+lea    -0x5e(%ebp),%eax
+lea    0xe(%eax),%esi
 mov    -0x14(%ebp),%eax
 lea    0xe(%eax),%ebx
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
 lea    -0x28(%ebp),%edx
 mov    %edx,0x10(%esp)
-lea    -0x5e(%ebp),%edx
-add    $0xe,%edx
-mov    %edx,0xc(%esp)
+mov    %esi,0xc(%esp)
 mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi>
 mov    -0x28(%ebp),%eax
 mov    %al,-0x29(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x10(%ebp)
 movzwl -0x5c(%ebp),%eax
 movzwl %ax,%edx
 lea    -0x5e(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x180>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x123>
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
 movl   $0x2f5,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnAddBuddy() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x11c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x180>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x2fa,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnAddBuddyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnAddBuddy() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x178>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader+0x180>
 nop
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnAddBuddy(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater10OnAddBuddyEP12PacketHeader(PacketHeader *param_1)

{
  Packet_DBMW_Add_Buddy_Reply local_62 [2];
  ushort local_60;
  undefined4 local_58;
  STBuddyDBInfo aSStack_54 [39];
  undefined1 local_2d;
  int local_2c [5];
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    Packet_DBMW_Add_Buddy_Reply::Packet_DBMW_Add_Buddy_Reply(local_62);
    local_58 = *(undefined4 *)(local_18 + 10);
    local_2c[0] = 0;
                    /* try { // try from 08095633 to 0809566d has its CatchHandler @ 08095673 */
    CDBManager::_ZN10CDBManager8AddBuddyEjPcR13STBuddyDBInfoRi
              ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 10),(char *)(local_18 + 0xe),
               aSStack_54,local_2c);
    local_2d = (undefined1)local_2c[0];
    local_14 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    CMonitorServer::SendToServer(local_14,(char *)local_62,(uint)local_60);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1975 行）：

```cpp
void CPacketTranslater::OnAddBuddy(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Add_Buddy* pkt = (Packet_DBMW_Add_Buddy*)header;
        Packet_DBMW_Add_Buddy_Reply reply;
        reply.m_fieldA = pkt->m_mid;
        int result = 0;
        m_pclApp->m_dbManager.AddBuddy(pkt->m_mid, pkt->m_name,
                                       *(STBuddyDBInfo*)((char*)&reply + 0xe),
                                       result);
        reply.m_field35 = (char)result;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        ms->SendToServer((char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnAddBuddy() Exception Break",
                  0x2f5, 0x2fa);
}
```

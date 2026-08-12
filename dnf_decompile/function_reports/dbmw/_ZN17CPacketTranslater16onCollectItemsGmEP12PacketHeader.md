# _ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader

`CPacketTranslater::onCollectItemsGm(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a0532` | `0x18d` | `0x80d5c88` | `0x191` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,113 +1,115 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x50,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x185>
+je     <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x189>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
-mov    0x13(%eax),%ebx
+mov    0x13(%eax),%eax
+mov    %eax,%ebx
 mov    -0x10(%ebp),%eax
 mov    0xb(%eax),%ecx
 mov    -0x10(%ebp),%eax
-mov    0xf(%eax),%edx
+mov    0xf(%eax),%eax
+mov    %eax,%edx
 mov    -0x10(%ebp),%eax
 movzbl 0xa(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%esi
 add    $0x50,%esi
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %esi,(%esp)
 call   <T> <_ZN10CDBManager20updateCollectItemsGmEhiij>
 lea    -0x36(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_CollectItemsResultC1Ev>
 mov    -0x10(%ebp),%eax
+mov    0xb(%eax),%eax
+mov    %eax,-0x2c(%ebp)
+mov    -0x10(%ebp),%eax
 mov    0xf(%eax),%eax
 mov    %eax,-0x28(%ebp)
-mov    -0x10(%ebp),%eax
-mov    0xb(%eax),%eax
-mov    %eax,-0x2c(%ebp)
 mov    -0x10(%ebp),%eax
 mov    0x13(%eax),%eax
 mov    %eax,-0x24(%ebp)
 movzwl -0x34(%ebp),%eax
 movzwl %ax,%esi
 lea    -0x36(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x18a>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x129>
+jne    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x12d>
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
 movl   $0x1406,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16onCollectItemsGmEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onCollectItemsGm Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x122>
+jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x126>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x18a>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x140b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16onCollectItemsGmEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onCollectItemsGm Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x17e>
+jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x182>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x186>
+jmp    <T> <_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader+0x18a>
 nop
 add    $0x50,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onCollectItemsGm(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16onCollectItemsGmEP12PacketHeader
               (PacketHeader *param_1)

{
  CMonitorServer *this;
  Packet_CollectItemsResult local_3a [2];
  ushort local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  PacketHeader *local_14;
  
  if (m_pclApp != 0) {
    local_14 = param_1;
                    /* try { // try from 080a0585 to 080a05d9 has its CatchHandler @ 080a05df */
    CDBManager::_ZN10CDBManager20updateCollectItemsGmEhiij
              ((CDBManager *)(m_pclApp + 0x50),(uchar)param_1[10],*(int *)(param_1 + 0xf),
               *(int *)(param_1 + 0xb),*(uint *)(param_1 + 0x13));
    Packet_CollectItemsResult::Packet_CollectItemsResult(local_3a);
    local_2c = *(undefined4 *)(local_14 + 0xf);
    local_30 = *(undefined4 *)(local_14 + 0xb);
    local_28 = *(undefined4 *)(local_14 + 0x13);
    this = (CMonitorServer *)CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18))
    ;
    CMonitorServer::SendToServer(this,(char *)local_3a,(uint)local_38);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1456 行）：

```cpp
void CPacketTranslater::onCollectItemsGm(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Collect_Items_Gm* pkt =
            (Packet_DBMW_Collect_Items_Gm*)header;
        m_pclApp->m_dbManager.updateCollectItemsGm(
            (unsigned char)pkt->m_serverInfo, (unsigned int)pkt->m_fieldF,
            (int)pkt->m_fieldB, (int)pkt->m_field13);
        Packet_CollectItemsResult reply;
        reply.m_fieldA = pkt->m_fieldB;
        reply.m_fieldE = pkt->m_fieldF;
        reply.m_field12 = pkt->m_field13;
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onCollectItemsGm Exception Break",
                  0x1406, 0x140b);
}
```

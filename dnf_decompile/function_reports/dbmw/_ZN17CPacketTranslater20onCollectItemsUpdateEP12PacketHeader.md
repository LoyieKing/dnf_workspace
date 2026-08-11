# _ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader

`CPacketTranslater::onCollectItemsUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a034e` | `0x1e4` | `0x80836aa` | `0x1f6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,138 +1,143 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x60,%esp
+sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dc>
+je     <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ed>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
+mov    %eax,-0x24(%ebp)
 lea    -0x3a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25Packet_CollectItemsResultC1Ev>
 movb   $0x0,-0x3b(%ebp)
-mov    -0x14(%ebp),%eax
+lea    -0x3a(%ebp),%eax
+lea    0x12(%eax),%edi
+lea    -0x3a(%ebp),%eax
+lea    0xa(%eax),%esi
+lea    -0x3a(%ebp),%eax
+lea    0xe(%eax),%ebx
+mov    -0x24(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
 lea    -0x3b(%ebp),%edx
 mov    %edx,0x14(%esp)
-lea    -0x3a(%ebp),%edx
-add    $0x12,%edx
-mov    %edx,0x10(%esp)
-lea    -0x3a(%ebp),%edx
-add    $0xa,%edx
-mov    %edx,0xc(%esp)
-lea    -0x3a(%ebp),%edx
-add    $0xe,%edx
-mov    %edx,0x8(%esp)
+mov    %edi,0x10(%esp)
+mov    %esi,0xc(%esp)
+mov    %ebx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh>
-mov    -0x14(%ebp),%eax
+mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%edx
-mov    -0x2c(%ebp),%eax
+lea    -0x3a(%ebp),%eax
+add    $0xa,%eax
+mov    (%eax),%eax
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x20(%ebp)
 movzbl -0x3b(%ebp),%eax
 movzbl %al,%ecx
-mov    -0x28(%ebp),%edx
-mov    -0x14(%ebp),%eax
+lea    -0x3a(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%edx
+mov    -0x24(%ebp),%eax
 movzbl 0xe(%eax),%eax
 movzbl %al,%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ebx
 add    $0x50,%ebx
 mov    %ecx,0x10(%esp)
 mov    %edx,0xc(%esp)
-mov    -0x10(%ebp),%edx
+mov    -0x20(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <_ZN10CDBManager18updateCollectItemsEhijh>
 movzbl -0x3b(%ebp),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0xd5>
-mov    -0x14(%ebp),%eax
-movzbl 0x13(%eax),%eax
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
+mov    -0x24(%ebp),%eax
+movzbl 0xf(%eax),%eax
 test   %al,%al
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0xd5>
-cmpl   $0x0,-0x10(%ebp)
-jns    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
+cmpl   $0x0,-0x20(%ebp)
+jns    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
 movzwl -0x38(%ebp),%eax
 movzwl %ax,%esi
 lea    -0x3a(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x180>
+jne    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x191>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x1c(%ebp)
+movl   $0x13e7,0x8(%esp)
+movl   $"onCollectItemsUpdate",0x4(%esp)
+lea    -0x44(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
+mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x13e7,0x8(%esp)
-movl   $"onCollectItemsUpdate",0x4(%esp)
-lea    -0x24(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::onCollectItemsUpdate Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x179>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x18a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x13ec,0x8(%esp)
 movl   $"onCollectItemsUpdate",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onCollectItemsUpdate Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1d5>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1e6>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1dd>
+jmp    <T> <_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader+0x1ee>
 nop
-add    $0x60,%esp
+add    $0x6c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onCollectItemsUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20onCollectItemsUpdateEP12PacketHeader
               (PacketHeader *param_1)

{
  CMonitorServer *this;
  uchar local_3f;
  Packet_CollectItemsResult local_3e [2];
  ushort local_3c;
  int iStack_34;
  int local_30;
  uint local_2c [5];
  PacketHeader *local_18;
  int local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    Packet_CollectItemsResult::Packet_CollectItemsResult(local_3e);
    local_3f = '\0';
                    /* try { // try from 080a03b7 to 080a044c has its CatchHandler @ 080a0452 */
    CDBManager::_ZN10CDBManager18selectCollectItemsEhRiS0_RjRh
              ((CDBManager *)(m_pclApp + 0x50),(uchar)local_18[0xe],&local_30,&iStack_34,local_2c,
               &local_3f);
    local_14 = *(int *)(local_18 + 10) - local_30;
    CDBManager::_ZN10CDBManager18updateCollectItemsEhijh
              ((CDBManager *)(m_pclApp + 0x50),(uchar)local_18[0xe],local_14,local_2c[0],local_3f);
    if (((local_3f != '\0') || (local_18[0x13] != (PacketHeader)0x0)) || (local_14 < 0)) {
      this = (CMonitorServer *)
             CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(this,(char *)local_3e,(uint)local_3c);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1608 行）：

```cpp
void CPacketTranslater::onCollectItemsUpdate(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Collect_Items_Update* pkt =
            (Packet_DBMW_Collect_Items_Update*)header;
        Packet_CollectItemsResult reply;
        unsigned char flag = 0;
        m_pclApp->m_dbManager.selectCollectItems(
            pkt->m_serverInfo,
            *(int*)((char*)&reply + 0xe), *(int*)((char*)&reply + 0xa),
            *(unsigned int*)((char*)&reply + 0x12), flag);
        int diff = pkt->m_fieldA - *(int*)((char*)&reply + 0xa);
        m_pclApp->m_dbManager.updateCollectItems(
            pkt->m_serverInfo, diff,
            *(unsigned int*)((char*)&reply + 0x12), flag);
        if (flag == 0 && pkt->m_field13 == 0 && diff < 0)
        {
            m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
                (char*)&reply, reply.packetSize);
        }
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onCollectItemsUpdate Exception Break",
                  0x13e7, 0x13ec);
}
```

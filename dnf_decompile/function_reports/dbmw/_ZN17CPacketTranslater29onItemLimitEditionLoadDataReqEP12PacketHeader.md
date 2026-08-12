# _ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader

`CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809b394` | `0x1a7` | `0x80d5bf6` | `0x19c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,109 +1,105 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x830,%esp
+sub    $0x820,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x19c>
-lea    -0x81b(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x191>
+lea    -0x813(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN39Packet_Item_Limit_Edition_Load_Data_RpyC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x81b(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x813(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x8f>
+je     <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x8a>
 movl   $0xaa4,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionLoadDataReq data load fail\n",0x8(%esp)
 movl   $"./log/LimitEdition",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x192>
+lea    -0x813(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x10(%ebp)
-lea    -0x81b(%ebp),%eax
 movl   $0x7ef,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x192>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x140>
+jne    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x135>
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
 movl   $0xaae,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x139>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x12e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x192>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0xab3,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x195>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x18a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader+0x192>
 nop
-add    $0x830,%esp
+add    $0x820,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater29onItemLimitEditionLoadDataReqEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  Packet_Item_Limit_Edition_Load_Data_Rpy local_81f [2031];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    Packet_Item_Limit_Edition_Load_Data_Rpy::Packet_Item_Limit_Edition_Load_Data_Rpy(local_81f);
    local_18 = param_1;
                    /* try { // try from 0809b3dc to 0809b452 has its CatchHandler @ 0809b458 */
    cVar1 = CDBManager::
            _ZN10CDBManager26onItemLimitEditionLoadDataEPK39Packet_Item_Limit_Edition_Load_Data_ReqP39Packet_Item_Limit_Edition_Load_Data_Rpy
                      ((CDBManager *)(m_pclApp + 0x50),
                       (Packet_Item_Limit_Edition_Load_Data_Req *)param_1,local_81f);
    if (cVar1 == '\x01') {
      local_14 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(local_14,(char *)local_81f,0x7ef);
    }
    else {
      CMyFileLog::CMyFileLog(local_30,"onItemLimitEditionLoadDataReq",0xaa4);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/LimitEdition",
                 "CPacketTranslater::onItemLimitEditionLoadDataReq data load fail\n");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1431 行）：

```cpp
void CPacketTranslater::onItemLimitEditionLoadDataReq(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_Item_Limit_Edition_Load_Data_Rpy reply;
        if (!m_pclApp->m_dbManager.onItemLimitEditionLoadData(
                (const Packet_Item_Limit_Edition_Load_Data_Req*)header,
                &reply))
        {
            DNF_LOG_SCOPE_LINE(0xaa4,
                "./log/LimitEdition",
                "CPacketTranslater::onItemLimitEditionLoadDataReq data load fail\n"
            );

            return;
        }
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&reply, 0x7ef);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onItemLimitEditionBuyableRequest Exception Break",
                  0xaae, 0xab3);
}
```

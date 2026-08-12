# _ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader

`CPacketTranslater::onLoadLimitNpcBuyItemInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809fd9e` | `0x1a7` | `0x80cfac6` | `0x19c` |

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
 sub    $0x1b0,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x19c>
-lea    -0x1a2(%ebp),%eax
+je     <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x191>
+lea    -0x19a(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN25LimitNpcBuyItemResultInfoC1Ev>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-lea    0x50(%eax),%edx
-lea    -0x1a2(%ebp),%eax
-mov    %eax,0x8(%esp)
-mov    -0x14(%ebp),%eax
+mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
+lea    0x50(%edx),%ecx
+lea    -0x19a(%ebp),%edx
+mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
+mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x8f>
+je     <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x8a>
 movl   $0x132e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onLoadLimitNpcBuyItemInfo data load fail\n",0x8(%esp)
 movl   $"./log/NpcBuyLimitItem",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x192>
+lea    -0x19a(%ebp),%ebx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
-mov    %eax,-0x10(%ebp)
-lea    -0x1a2(%ebp),%eax
 movl   $0x176,0x8(%esp)
-mov    %eax,0x4(%esp)
-mov    -0x10(%ebp),%eax
+mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x192>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x140>
+jne    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x135>
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
 movl   $0x1338,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::onLoadLimitNpcBuyItemInfo Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x139>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x12e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x192>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x133d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::onLoadLimitNpcBuyItemInfo Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x195>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x18a>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x19d>
+jmp    <T> <_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader+0x192>
 nop
 add    $0x1b0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::onLoadLimitNpcBuyItemInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25onLoadLimitNpcBuyItemInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  LimitNpcBuyItemResultInfo local_1a6 [374];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    LimitNpcBuyItemResultInfo::LimitNpcBuyItemResultInfo(local_1a6);
    local_18 = param_1;
                    /* try { // try from 0809fde6 to 0809fe5c has its CatchHandler @ 0809fe62 */
    cVar1 = CDBManager::
            _ZN10CDBManager23loadLimitNpcBuyItemInfoEP26LimitNpcBuyItemRequestInfoP25LimitNpcBuyItemResultInfo
                      ((CDBManager *)(m_pclApp + 0x50),(LimitNpcBuyItemRequestInfo *)param_1,
                       local_1a6);
    if (cVar1 == '\x01') {
      local_14 = (CMonitorServer *)
                 CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
      CMonitorServer::SendToServer(local_14,(char *)local_1a6,0x176);
    }
    else {
      CMyFileLog::CMyFileLog(local_30,"onLoadLimitNpcBuyItemInfo",0x132e);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/NpcBuyLimitItem",
                 "CPacketTranslater::onLoadLimitNpcBuyItemInfo data load fail\n");
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 97 行）：

```cpp
void CPacketTranslater::onLoadLimitNpcBuyItemInfo(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    LimitNpcBuyItemResultInfo result;
    try
    {
        if (!m_pclApp->m_dbManager.loadLimitNpcBuyItemInfo(
                (LimitNpcBuyItemRequestInfo*)header, &result))
        {
            DNF_LOG_SCOPE_LINE(0x132e,
                "./log/NpcBuyLimitItem",
                "CPacketTranslater::onLoadLimitNpcBuyItemInfo data load fail\n"
            );

            return;
        }
        m_pclApp->m_serverHandler->GetMonitorServer()->SendToServer(
            (char*)&result, 0x176);
    }
    DNF_CATCH_LOG("./log/Except",
                  "CPacketTranslater::onLoadLimitNpcBuyItemInfo Exception Break",
                  0x1338, 0x133d);
}
```

# _ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader

`CPacketTranslater::OnRegisterToBlackList(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8094e96` | `0x286` | `0x80d22c6` | `0x288` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,172 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27e>
+je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x280>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x10(%ebp)
 mov    -0x14(%ebp),%eax
 movl   $0x0,0x30(%eax)
 mov    -0x14(%ebp),%eax
 mov    0x2c(%eax),%eax
 mov    %eax,-0x38(%ebp)
 mov    -0x38(%ebp),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0xdb>
 mov    -0x14(%ebp),%eax
 add    $0x30,%eax
 mov    -0x14(%ebp),%edx
 lea    0xe(%edx),%ecx
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 add    $0x50,%edx
 mov    %eax,0xc(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager19QueryCharacNoByNameEPcRjPi>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0xdb>
 movl   $0x251,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager.QueryCharacNoByName Err : return false",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x14(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    -0x14(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
 mov    -0x14(%ebp),%eax
 lea    0xe(%eax),%ebx
 mov    -0x38(%ebp),%edx
 mov    -0x14(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%ecx
 add    $0x50,%ecx
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager19RegisterToBlackListEjjPc>
 xor    $0x1,%eax
 test   %al,%al
 je     <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x169>
 movl   $0x259,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"m_clDBManager.RegisterToBlackList Err : return false",0x8(%esp)
 movl   $"./log/BlackList",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x14(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    -0x14(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
 mov    -0x14(%ebp),%eax
 mov    0x2c(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
-mov    -0x38(%ebp),%edx
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
+mov    -0x38(%ebp),%eax
+mov    %eax,%edx
 mov    -0x14(%ebp),%eax
 mov    %edx,0x2c(%eax)
 mov    -0x14(%ebp),%eax
 movzwl 0x2(%eax),%eax
 movzwl %ax,%edx
 mov    -0x14(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x222>
+jne    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x224>
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
 movl   $0x266,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnRegisterToBlackList() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21b>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x21d>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x26b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnRegisterToBlackList() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x277>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x279>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x27f>
+jmp    <T> <_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader+0x281>
 nop
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnRegisterToBlackList(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnRegisterToBlackListEP12PacketHeader
               (PacketHeader *param_1)

{
  char cVar1;
  uint local_3c;
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [24];
  PacketHeader *local_18;
  CMonitorServer *local_14;
  
  if (m_pclApp != 0) {
    local_18 = param_1;
    local_14 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    *(undefined4 *)(local_18 + 0x30) = 0;
    local_3c = *(uint *)(local_18 + 0x2c);
                    /* try { // try from 08094f0a to 08095036 has its CatchHandler @ 0809503c */
    if ((local_3c == 0xffffffff) &&
       (cVar1 = CDBManager::_ZN10CDBManager19QueryCharacNoByNameEPcRjPi
                          ((CDBManager *)(m_pclApp + 0x50),(char *)(local_18 + 0xe),&local_3c,
                           (int *)(local_18 + 0x30)), cVar1 != '\x01')) {
      CMyFileLog::CMyFileLog(local_38,"OnRegisterToBlackList",0x251);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_38,"./log/BlackList","m_clDBManager.QueryCharacNoByName Err : return false");
      CMonitorServer::SendToServer(local_14,(char *)local_18,(uint)*(ushort *)(local_18 + 2));
      return;
    }
    cVar1 = CDBManager::_ZN10CDBManager19RegisterToBlackListEjjPc
                      ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_18 + 10),local_3c,
                       (char *)(local_18 + 0xe));
    if (cVar1 == '\x01') {
      if (*(int *)(local_18 + 0x2c) == -1) {
        *(uint *)(local_18 + 0x2c) = local_3c;
        CMonitorServer::SendToServer(local_14,(char *)local_18,(uint)*(ushort *)(local_18 + 2));
      }
    }
    else {
      CMyFileLog::CMyFileLog(local_30,"OnRegisterToBlackList",0x259);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_30,"./log/BlackList","m_clDBManager.RegisterToBlackList Err : return false");
      CMonitorServer::SendToServer(local_14,(char *)local_18,(uint)*(ushort *)(local_18 + 2));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 725 行）：

```cpp
void CPacketTranslater::OnRegisterToBlackList(PacketHeader* header)
{
    if (!m_pclApp)
        return;
    try
    {
        Packet_DBMW_Request_BlackList* pkt =
            (Packet_DBMW_Request_BlackList*)header;
        CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
        pkt->m_result = 0;
        unsigned int characNo = (unsigned int)pkt->m_characNo;
        if (characNo == -1)
        {
            if (!m_pclApp->m_dbManager.QueryCharacNoByName(
                    pkt->m_name, characNo,
                    &pkt->m_result))
            {
                DNF_LOG_SCOPE_LINE(0x251,
                    "./log/BlackList",
                    "m_clDBManager.QueryCharacNoByName Err : return false"
                );

                ms->SendToServer((char*)pkt, pkt->packetSize);
                return;
            }
        }
        if (!m_pclApp->m_dbManager.RegisterToBlackList(
                pkt->m_mid, characNo, pkt->m_name))
        {
            DNF_LOG_SCOPE_LINE(0x259,
                "./log/BlackList",
                "m_clDBManager.RegisterToBlackList Err : return false"
            );

            ms->SendToServer((char*)pkt, pkt->packetSize);
            return;
        }
        if (pkt->m_characNo == -1)
        {
            pkt->m_characNo = characNo;
            ms->SendToServer((char*)pkt, pkt->packetSize);
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnRegisterToBlackList() Exception Break",
                  0x266, 0x26b);
}
```

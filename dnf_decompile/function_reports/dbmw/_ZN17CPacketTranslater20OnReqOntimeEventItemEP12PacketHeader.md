# _ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader

`CPacketTranslater::OnReqOntimeEventItem(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809f3b2` | `0x2c8` | `0x80d98d6` | `0x2c5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,190 +1,189 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xdf>
-lea    -0x45(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xe2>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReqOntimeEventItem() : 0 == m_pclApp",0x4(%esp)
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x4c(%ebp),%esi
+lea    -0x48(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xa4>
-lea    -0x4c(%ebp),%eax
+lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xbc>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x45(%ebp),%eax
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x1ea>
-lea    -0x45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Result_Ontime_Event_ItemC1Ev>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 movl   $0xa,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x182>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x17f>
 movl   $0x14,0x8(%esp)
 movl   $0x2346,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer16makePacketHeaderEtt>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 add    $0xa,%eax
 mov    -0x24(%ebp),%edx
 add    $0xa,%edx
 movl   $0xa,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer12SendToServerEPc>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2c0>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2bd>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x20(%ebp)
-lea    -0x60(%ebp),%eax
+lea    -0x5c(%ebp),%eax
 movl   $0xf,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 movl   $0x1118,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnReqOntimeEventItem:GetTcpServer null",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x40(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2c0>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2bd>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x266>
+jne    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x263>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,%ebx
 movl   $0x111d,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x25f>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x25c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2c0>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2bd>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1122,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2bb>
+jmp    <T> <_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader+0x2b8>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x6c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnReqOntimeEventItem(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater20OnReqOntimeEventItemEP12PacketHeader
               (PacketHeader *param_1)

{
  uchar uVar1;
  CDNFException *this;
  Packet_Result_Ontime_Event_Item local_64 [10];
  undefined1 auStack_5a [10];
  string local_50 [7];
  allocator local_49;
  CMyFileLog local_48 [24];
  CTcpServer *local_30;
  char *local_2c;
  char *local_28;
  CMonitorServer *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809f3e8 to 0809f3ec has its CatchHandler @ 0809f456 */
    std::string::string(local_50,"CPacketTranslater::OnReqOntimeEventItem() : 0 == m_pclApp",
                        &local_49);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809f407 to 0809f40b has its CatchHandler @ 0809f40e */
    CDNFException::CDNFException(this,local_50);
                    /* try { // try from 0809f445 to 0809f449 has its CatchHandler @ 0809f44c */
    std::string::~string(local_50);
    std::allocator<char>::~allocator((allocator<char> *)&local_49);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809f48c to 0809f596 has its CatchHandler @ 0809f59c */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  Packet_Result_Ontime_Event_Item::Packet_Result_Ontime_Event_Item(local_64);
  CDBManager::_ZN10CDBManager20QueryOnTimeEventItemER31Packet_Result_Ontime_Event_Item
            ((CDBManager *)(m_pclApp + 0x50),local_64);
  uVar1 = CApplication::Get_ServerHandler(m_pclApp);
  local_30 = (CTcpServer *)CServerHandler::GetTcpServer(uVar1);
  if (local_30 == (CTcpServer *)0x0) {
    local_24 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    CMonitorServer::SendToServer(local_24,(char *)local_64,0xf);
    CMyFileLog::CMyFileLog(local_48,"OnReqOntimeEventItem",0x1118);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/TcpServer","OnReqOntimeEventItem:GetTcpServer null");
  }
  else {
    local_2c = (char *)CTcpServer::_ZN10CTcpServer16makePacketHeaderEtt(local_30,0x2346,0x14);
    local_28 = local_2c;
    memcpy(local_2c + 10,auStack_5a,10);
    CTcpServer::SendToServer(local_30,local_28);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2364 行）：

```cpp
void CPacketTranslater::OnReqOntimeEventItem(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(
            "CPacketTranslater::OnReqOntimeEventItem() : 0 == m_pclApp");
    try
    {
        Packet_Result_Ontime_Event_Item reply;
        m_pclApp->m_dbManager.QueryOnTimeEventItem(reply);
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* pkt = (char*)tcp->makePacketHeader(0x2346, 0x14);
            memcpy(pkt + 0xa, (char*)&reply + 0xa, 0xa);
            tcp->SendToServer(pkt);
        }
        else
        {
            CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&reply, 0xf);
            DNF_LOG_SCOPE_LINE(0x1118, "./log/TcpServer", "OnReqOntimeEventItem:GetTcpServer null");

        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break",
                  0x111d, 0x1122);
}
```

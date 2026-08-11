# _ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader

`CPacketTranslater::OnReqOntimeEventIdxUpdate(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809f67a` | `0x2d7` | `0x80d946e` | `0x2d4` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,195 +1,194 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xdf>
-lea    -0x49(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xe2>
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x49(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnReqOntimeEventIdxUpdate() : 0 == m_pclApp",0x4(%esp)
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x50(%ebp),%esi
+lea    -0x4c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xa4>
-lea    -0x50(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xbc>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x49(%ebp),%eax
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x1f9>
-lea    -0x49(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
-mov    %eax,-0x30(%ebp)
+mov    %eax,-0x2c(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update>
-lea    -0x5e(%ebp),%eax
+lea    -0x62(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Result_Ontime_Event_Idx_UpdateC1Ev>
-mov    -0x30(%ebp),%eax
+mov    -0x2c(%ebp),%eax
 mov    0x12(%eax),%eax
-mov    %eax,-0x54(%ebp)
+mov    %eax,-0x58(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 movl   $0xa,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler12GetTcpServerEh>
-mov    %eax,-0x2c(%ebp)
-cmpl   $0x0,-0x2c(%ebp)
-je     <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x191>
+mov    %eax,-0x28(%ebp)
+cmpl   $0x0,-0x28(%ebp)
+je     <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x18e>
 movl   $0xe,0x8(%esp)
 movl   $0x2348,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer16makePacketHeaderEtt>
-mov    %eax,-0x28(%ebp)
-mov    -0x28(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x5e(%ebp),%eax
+lea    -0x62(%ebp),%eax
 add    $0xa,%eax
 mov    -0x24(%ebp),%edx
 add    $0xa,%edx
 movl   $0x4,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
-mov    -0x2c(%ebp),%eax
+mov    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CTcpServer12SendToServerEPc>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cf>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cc>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler16GetMonitorServerEv>
 mov    %eax,-0x20(%ebp)
-lea    -0x5e(%ebp),%eax
+lea    -0x62(%ebp),%eax
 movl   $0xf,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CMonitorServer12SendToServerEPci>
 movl   $0x114c,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnReqOntimeEventItem:GetTcpServer null",0x8(%esp)
 movl   $"./log/TcpServer",0x4(%esp)
-lea    -0x48(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cf>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cc>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x275>
+jne    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x272>
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
 movl   $0x1151,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x40(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x26e>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x26b>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cf>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2cc>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1156,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2ca>
+jmp    <T> <_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader+0x2c7>
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

/* CPacketTranslater::OnReqOntimeEventIdxUpdate(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater25OnReqOntimeEventIdxUpdateEP12PacketHeader
               (PacketHeader *param_1)

{
  uchar uVar1;
  CDNFException *this;
  Packet_Result_Ontime_Event_Idx_Update local_62 [10];
  undefined4 local_58;
  string local_54 [7];
  allocator local_4d;
  CMyFileLog local_4c [24];
  PacketHeader *local_34;
  CTcpServer *local_30;
  char *local_2c;
  char *local_28;
  CMonitorServer *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809f6b0 to 0809f6b4 has its CatchHandler @ 0809f71e */
    std::string::string(local_54,"CPacketTranslater::OnReqOntimeEventIdxUpdate() : 0 == m_pclApp",
                        &local_4d);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809f6cf to 0809f6d3 has its CatchHandler @ 0809f6d6 */
    CDNFException::CDNFException(this,local_54);
                    /* try { // try from 0809f70d to 0809f711 has its CatchHandler @ 0809f714 */
    std::string::~string(local_54);
    std::allocator<char>::~allocator((allocator<char> *)&local_4d);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809f754 to 0809f86d has its CatchHandler @ 0809f873 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_34 = param_1;
  CDBManager::_ZN10CDBManager25QueryOnTimeEventIdxUpdateEP34Packet_Req_Ontime_Event_Idx_Update
            ((CDBManager *)(m_pclApp + 0x50),(Packet_Req_Ontime_Event_Idx_Update *)param_1);
  Packet_Result_Ontime_Event_Idx_Update::Packet_Result_Ontime_Event_Idx_Update(local_62);
  local_58 = *(undefined4 *)(local_34 + 0x12);
  uVar1 = CApplication::Get_ServerHandler(m_pclApp);
  local_30 = (CTcpServer *)CServerHandler::GetTcpServer(uVar1);
  if (local_30 == (CTcpServer *)0x0) {
    local_24 = (CMonitorServer *)
               CServerHandler::GetMonitorServer(*(CServerHandler **)(m_pclApp + 0x18));
    CMonitorServer::SendToServer(local_24,(char *)local_62,0xf);
    CMyFileLog::CMyFileLog(local_4c,"OnReqOntimeEventIdxUpdate",0x114c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_4c,"./log/TcpServer","OnReqOntimeEventItem:GetTcpServer null");
  }
  else {
    local_2c = (char *)CTcpServer::_ZN10CTcpServer16makePacketHeaderEtt(local_30,0x2348,0xe);
    local_28 = local_2c;
    memcpy(local_2c + 10,&local_58,4);
    CTcpServer::SendToServer(local_30,local_28);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 2325 行）：

```cpp
void CPacketTranslater::OnReqOntimeEventIdxUpdate(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(
            "CPacketTranslater::OnReqOntimeEventIdxUpdate() : 0 == m_pclApp");
    try
    {
        Packet_Req_Ontime_Event_Idx_Update* pktIn =
            (Packet_Req_Ontime_Event_Idx_Update*)header;
        m_pclApp->m_dbManager.QueryOnTimeEventIdxUpdate(
            pktIn);
        Packet_Result_Ontime_Event_Idx_Update reply;
        reply.m_fieldA = pktIn->m_no;
        CTcpServer* tcp =
            m_pclApp->Get_ServerHandler()->GetTcpServer((unsigned char)0xa);
        if (tcp)
        {
            char* pkt = tcp->makePacketHeader(0x2348, 0xe);
            memcpy(pkt + 0xa, (char*)&reply + 0xa, 4);
            tcp->SendToServer(pkt);
        }
        else
        {
            CMonitorServer* ms = m_pclApp->m_serverHandler->GetMonitorServer();
            ms->SendToServer((char*)&reply, 0xf);
            DNF_LOG_SCOPE_LINE(0x114c, "./log/TcpServer", "OnReqOntimeEventItem:GetTcpServer null");

        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break",
                  0x1151, 0x1156);
}
```

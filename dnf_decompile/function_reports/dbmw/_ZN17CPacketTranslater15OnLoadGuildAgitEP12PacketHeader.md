# _ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader

`CPacketTranslater::OnLoadGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809a15e` | `0x2e5` | `0x80d1272` | `0x31c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,198 +1,211 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x22ac,%esp
+sub    $0x233c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xe2>
+jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xe5>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnLoadGuildAgit() : 0 == m_pclApp",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x3c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xa7>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xc2>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x204>
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x4b(%ebp),%eax
+lea    -0xd3(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Guild_Load_Guild_AgitC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x41(%ebp)
+mov    %eax,-0xc9(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x4b(%ebp),%eax
+lea    -0xd3(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit>
-lea    -0x22a7(%ebp),%eax
+lea    -0x232f(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Guild_Load_Guild_CargoC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x229d(%ebp)
+mov    %eax,-0x2325(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-lea    -0x22a7(%ebp),%edx
+lea    -0x232f(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo>
-lea    -0x9bd(%ebp),%eax
+lea    -0xa45(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x9b3(%ebp)
+mov    %eax,-0xa3b(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-lea    -0x9bd(%ebp),%edx
+lea    -0xa45(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
-lea    -0x4b(%ebp),%eax
+lea    -0xd3(%ebp),%eax
 movl   $0xf,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-lea    -0x22a7(%ebp),%eax
+lea    -0x232f(%ebp),%eax
 movl   $0x18ea,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-lea    -0x9bd(%ebp),%eax
+lea    -0xa45(%ebp),%eax
 movl   $0x972,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x228>
+mov    %edx,%ebx
+mov    %eax,%esi
+lea    -0xa45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryD1Ev>
+mov    %esi,%eax
+mov    %ebx,%edx
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x23b>
+lea    -0xa45(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN37Packet_Guild_Load_Guild_Cargo_HistoryD1Ev>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x311>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x280>
+jne    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x2b7>
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
 movl   $0x95f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnLoadGuildAgit() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x279>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x2b0>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x2da>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x311>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x964,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnLoadGuildAgit() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x2d5>
+jmp    <T> <_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader+0x30c>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-add    $0x22ac,%esp
+add    $0x233c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnLoadGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater15OnLoadGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_Guild_Load_Guild_Cargo local_22ab [10];
  undefined4 local_22a1;
  Packet_Guild_Load_Guild_Cargo_History local_9c1 [10];
  undefined4 local_9b7;
  Packet_Guild_Load_Guild_Agit local_4f [10];
  undefined4 local_45;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809a197 to 0809a19b has its CatchHandler @ 0809a205 */
    std::string::string(local_40,"CPacketTranslater::OnLoadGuildAgit() : 0 == m_pclApp",local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809a1b6 to 0809a1ba has its CatchHandler @ 0809a1bd */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 0809a1f4 to 0809a1f8 has its CatchHandler @ 0809a1fb */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809a23b to 0809a35c has its CatchHandler @ 0809a362 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Guild_Load_Guild_Agit::Packet_Guild_Load_Guild_Agit(local_4f);
  local_45 = *(undefined4 *)(local_28 + 10);
  CDBManager::
  _ZN10CDBManager15OnLoadGuildAgitEP25Packet_DB_Load_Guild_AgitR28Packet_Guild_Load_Guild_Agit
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Load_Guild_Agit *)local_28,local_4f);
  Packet_Guild_Load_Guild_Cargo::Packet_Guild_Load_Guild_Cargo(local_22ab);
  local_22a1 = *(undefined4 *)(local_28 + 10);
  CDBManager::_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo
            ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_28 + 10),local_22ab);
  Packet_Guild_Load_Guild_Cargo_History::Packet_Guild_Load_Guild_Cargo_History(local_9c1);
  local_9b7 = *(undefined4 *)(local_28 + 10);
  CDBManager::_ZN10CDBManager23OnLoadGuildCargoHistoryEjR37Packet_Guild_Load_Guild_Cargo_History
            ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_28 + 10),local_9c1);
  local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
  CGuildServer::SendToServer(local_24,(char *)local_4f,0xf);
  CGuildServer::SendToServer(local_24,(char *)local_22ab,0x18ea);
  CGuildServer::SendToServer(local_24,(char *)local_9c1,0x972);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 485 行）：

```cpp
void CPacketTranslater::OnLoadGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnLoadGuildAgit() : 0 == m_pclApp"));
    try
    {
        Packet_DB_Load_Guild_Agit* pkt = (Packet_DB_Load_Guild_Agit*)header;
        Packet_Guild_Load_Guild_Agit reply;
        reply.m_fieldA = pkt->m_guildId;
        m_pclApp->m_dbManager.OnLoadGuildAgit(pkt, reply);
        Packet_Guild_Load_Guild_Cargo cargo;
        cargo.m_fieldA = pkt->m_guildId;
        m_pclApp->m_dbManager.OnLoadGuildCargo(pkt->m_guildId, cargo);
        Packet_Guild_Load_Guild_Cargo_History history;
        history.m_fieldA = pkt->m_guildId;
        m_pclApp->m_dbManager.OnLoadGuildCargoHistory(
            pkt->m_guildId, history);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0xf);
        gs->SendToServer((char*)&cargo, 0x18ea);
        gs->SendToServer((char*)&history, 0x972);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnLoadGuildAgit() Exception Break",
                  0x95f, 0x964);
}
```

# _ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader

`CPacketTranslater::OnCreateGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8099c90` | `0x29d` | `0x807dec2` | `0x2b2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,183 +1,191 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x194c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xe2>
-lea    -0x35(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xe5>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnCreateGuildAgit() : 0 == m_pclApp",0x4(%esp)
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
-lea    -0x3c(%ebp),%esi
+lea    -0x2c(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x90>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x8a>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xa7>
-lea    -0x3c(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xbf>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xc2>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0xa7>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x35(%ebp),%eax
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x1bc>
-lea    -0x35(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
+lea    -0x25(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD2Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x52(%ebp),%eax
+lea    -0x42(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DB_Create_Guild_Agit_ReplyC1Ev>
+lea    -0x42(%ebp),%eax
+lea    0xa(%eax),%edx
+mov    -0x24(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,(%edx)
+lea    -0x42(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%eax
-mov    %eax,-0x44(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x48(%ebp)
+mov    %eax,(%edx)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
-lea    -0x52(%ebp),%eax
+lea    -0x42(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager17OnCreateGuildAgitEP27Packet_DB_Create_Guild_AgitR33Packet_DB_Create_Guild_Agit_Reply>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
-lea    -0x52(%ebp),%eax
+lea    -0x42(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-mov    -0x40(%ebp),%eax
+lea    -0x42(%ebp),%eax
+add    $0x12,%eax
+mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x292>
-lea    -0x193c(%ebp),%eax
+jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2a7>
+lea    -0x193e(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN29Packet_Guild_Load_Guild_CargoC1Ev>
+lea    -0x193e(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
-mov    %eax,-0x1932(%ebp)
+mov    %eax,(%edx)
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-lea    -0x193c(%ebp),%edx
+lea    -0x193e(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo>
-lea    -0x193c(%ebp),%eax
+lea    -0x193e(%ebp),%eax
 movl   $0x18ea,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2a7>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x238>
+jne    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x24d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
+movl   $0x911,0x8(%esp)
+movl   $"OnCreateGuildAgit",0x4(%esp)
+lea    -0x4c(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,%ebx
-movl   $0x911,0x8(%esp)
-movl   $"OnCreateGuildAgit",0x4(%esp)
-lea    -0x34(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    %eax,0xc(%esp)
 movl   $"CPacketTranslater::OnCreateGuildAgit() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x4c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x231>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x246>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x292>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2a7>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x916,0x8(%esp)
 movl   $"OnCreateGuildAgit",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnCreateGuildAgit() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x28d>
+jmp    <T> <_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader+0x2a2>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x194c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnCreateGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnCreateGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_Guild_Load_Guild_Cargo local_1940 [10];
  undefined4 local_1936;
  Packet_DB_Create_Guild_Agit_Reply local_56 [10];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08099cc9 to 08099ccd has its CatchHandler @ 08099d37 */
    std::string::string(local_40,"CPacketTranslater::OnCreateGuildAgit() : 0 == m_pclApp",local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08099ce8 to 08099cec has its CatchHandler @ 08099cef */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08099d26 to 08099d2a has its CatchHandler @ 08099d2d */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08099d6d to 08099e46 has its CatchHandler @ 08099e4c */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_DB_Create_Guild_Agit_Reply::Packet_DB_Create_Guild_Agit_Reply(local_56);
  local_48 = *(undefined4 *)(local_28 + 0xe);
  local_4c = *(undefined4 *)(local_28 + 10);
  CDBManager::
  _ZN10CDBManager17OnCreateGuildAgitEP27Packet_DB_Create_Guild_AgitR33Packet_DB_Create_Guild_Agit_Reply
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Create_Guild_Agit *)local_28,local_56);
  local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
  CGuildServer::SendToServer(local_24,(char *)local_56,0x16);
  if (local_44 == 0) {
    Packet_Guild_Load_Guild_Cargo::Packet_Guild_Load_Guild_Cargo(local_1940);
    local_1936 = *(undefined4 *)(local_28 + 10);
    CDBManager::_ZN10CDBManager16OnLoadGuildCargoEjR29Packet_Guild_Load_Guild_Cargo
              ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_28 + 10),local_1940);
    CGuildServer::SendToServer(local_24,(char *)local_1940,0x18ea);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 486 行）：

```cpp
void CPacketTranslater::OnCreateGuildAgit(PacketHeader* header)
{
    if (!m_pclApp)
        throw CDNFException(std::string(
            "CPacketTranslater::OnCreateGuildAgit() : 0 == m_pclApp"));
    try
    {
        Packet_DB_Create_Guild_Agit* pkt =
            (Packet_DB_Create_Guild_Agit*)header;
        Packet_DB_Create_Guild_Agit_Reply reply;
        *(unsigned int*)((char*)&reply + 0xa) = pkt->m_guildId;
        *(unsigned int*)((char*)&reply + 0xe) = pkt->m_fieldE;
        m_pclApp->m_dbManager.OnCreateGuildAgit(pkt, reply);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x16);
        if (*(int*)((char*)&reply + 0x12) == 0)
        {
            Packet_Guild_Load_Guild_Cargo cargo;
            *(unsigned int*)((char*)&cargo + 0xa) = pkt->m_guildId;
            m_pclApp->m_dbManager.OnLoadGuildCargo(pkt->m_guildId, cargo);
            gs->SendToServer((char*)&cargo, 0x18ea);
        }
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnCreateGuildAgit() Exception Break",
                  0x911, 0x916);
}
```

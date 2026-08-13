# _ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader

`CPacketTranslater::OnQueryTodayGuildMemeber(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x809eec0` | `0x225` | `0x80d3dea` | `0x225` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,156 +1,156 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0xdf>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0xa4>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x147>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
-lea    -0x71(%ebp),%eax
+lea    -0x72(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN31Packet_Reply_Today_Guild_MemberC1Ev>
 mov    -0x24(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    &_ZN17CPacketTranslater8m_pclAppE,%edx
 lea    0x50(%edx),%ecx
-lea    -0x71(%ebp),%edx
+lea    -0x72(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %ecx,(%esp)
 call   <T> <_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
-movzwl -0x6f(%ebp),%eax
+movzwl -0x70(%ebp),%eax
 movzwl %ax,%edx
-lea    -0x71(%ebp),%eax
+lea    -0x72(%ebp),%eax
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x21d>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x1c3>
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
 movl   $0x106a,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x1bc>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x21d>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x106f,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader+0x218>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x7c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnQueryTodayGuildMemeber(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater24OnQueryTodayGuildMemeberEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_Reply_Today_Guild_Member local_75 [2];
  ushort local_73;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0809eef6 to 0809eefa has its CatchHandler @ 0809ef64 */
    std::string::string(local_40,"CPacketTranslater::OnQueryTodayGuildMemeber() : 0 == m_pclApp",
                        local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0809ef15 to 0809ef19 has its CatchHandler @ 0809ef1c */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 0809ef53 to 0809ef57 has its CatchHandler @ 0809ef5a */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809ef9a to 0809f001 has its CatchHandler @ 0809f007 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_Reply_Today_Guild_Member::Packet_Reply_Today_Guild_Member(local_75);
  CDBManager::_ZN10CDBManager21QueryTodayGuildMemberEjR31Packet_Reply_Today_Guild_Member
            ((CDBManager *)(m_pclApp + 0x50),*(uint *)(local_28 + 10),local_75);
  local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
  CGuildServer::SendToServer(local_24,(char *)local_75,(uint)local_73);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 1128 行）：

```cpp
void CPacketTranslater::OnQueryTodayGuildMemeber(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(std::string(
                "CPacketTranslater::OnQueryTodayGuildMemeber() : 0 == m_pclApp"));
        Packet_DBMW_Request_Today_Guild_Member* pkt =
            (Packet_DBMW_Request_Today_Guild_Member*)header;
        CGuildServer* gs;
        Packet_Reply_Today_Guild_Member reply;
        m_pclApp->m_dbManager.QueryTodayGuildMember(
            pkt->m_guildId, reply);
        gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, reply.packetSize);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnQueryTodayGuildMemeber() Exception Break",
                  0x106a, 0x106f);
}
```

# _ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader

`CPacketTranslater::OnDeleteGuildAgit(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8099f2e` | `0x230` | `0x80d18fe` | `0x233` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,159 +1,160 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x5c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xdf>
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xe2>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDeleteGuildAgit() : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xa4>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xbc>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xbf>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x152>
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
 lea    -0x52(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_DB_Delete_Guild_Agit_ReplyC1Ev>
 mov    -0x24(%ebp),%eax
+mov    0xa(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x24(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x44(%ebp)
-mov    -0x24(%ebp),%eax
-mov    0xa(%eax),%eax
-mov    %eax,-0x48(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 lea    0x50(%eax),%edx
 lea    -0x52(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x18(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler14GetGuildServerEv>
 mov    %eax,-0x20(%ebp)
 lea    -0x52(%ebp),%eax
 movl   $0x16,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CGuildServer12SendToServerEPci>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x228>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x22b>
 cmp    $0x2,%edx
-jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x1ce>
+jne    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x1d1>
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
 movl   $0x932,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
-movl   $"CPacketTranslater::OnDeleteGuildAgit() Exception Break : %s\n",0x8(%esp)
+movl   $"CPacketTranslater::OnLoadGuildAgit() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x1c7>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x1ca>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x228>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x22b>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x937,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CPacketTranslater::OnDeleteGuildAgit() Exception Break\n",0x8(%esp)
+movl   $"CPacketTranslater::OnLoadGuildAgit() Exception Break\n",0x8(%esp)
 movl   $"./log/Except.log",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x223>
+jmp    <T> <_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader+0x226>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x5c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnDeleteGuildAgit(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnDeleteGuildAgitEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  Packet_DB_Delete_Guild_Agit_Reply local_56 [10];
  undefined4 local_4c;
  undefined4 local_48;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  CGuildServer *local_24;
  
  if (m_pclApp == 0) {
    std::allocator<char>::allocator();
                    /* try { // try from 08099f64 to 08099f68 has its CatchHandler @ 08099fd2 */
    std::string::string(local_40,"CPacketTranslater::OnDeleteGuildAgit() : 0 == m_pclApp",local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 08099f83 to 08099f87 has its CatchHandler @ 08099f8a */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 08099fc1 to 08099fc5 has its CatchHandler @ 08099fc8 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0809a008 to 0809a07a has its CatchHandler @ 0809a080 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  Packet_DB_Delete_Guild_Agit_Reply::Packet_DB_Delete_Guild_Agit_Reply(local_56);
  local_48 = *(undefined4 *)(local_28 + 0xe);
  local_4c = *(undefined4 *)(local_28 + 10);
  CDBManager::
  _ZN10CDBManager17OnDeleteGuildAgitEP27Packet_DB_Delete_Guild_AgitR33Packet_DB_Delete_Guild_Agit_Reply
            ((CDBManager *)(m_pclApp + 0x50),(Packet_DB_Delete_Guild_Agit *)local_28,local_56);
  local_24 = (CGuildServer *)CServerHandler::GetGuildServer(*(CServerHandler **)(m_pclApp + 0x18));
  CGuildServer::SendToServer(local_24,(char *)local_56,0x16);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 540 行）：

```cpp
void CPacketTranslater::OnDeleteGuildAgit(PacketHeader* header)
{
    try
    {
        if (!m_pclApp)
            throw CDNFException(std::string(
                "CPacketTranslater::OnDeleteGuildAgit() : 0 == m_pclApp"));
        Packet_DB_Delete_Guild_Agit* pkt =
            (Packet_DB_Delete_Guild_Agit*)header;
        Packet_DB_Delete_Guild_Agit_Reply reply;
        reply.m_fieldE = pkt->m_fieldE;
        reply.m_fieldA = pkt->m_guildId;
        m_pclApp->m_dbManager.OnDeleteGuildAgit(pkt, reply);
        CGuildServer* gs = m_pclApp->m_serverHandler->GetGuildServer();
        gs->SendToServer((char*)&reply, 0x16);
    }
    DNF_CATCH_LOG("./log/Except.log",
                  "CPacketTranslater::OnDeleteGuildAgit() Exception Break",
                  0x932, 0x937);
}
```

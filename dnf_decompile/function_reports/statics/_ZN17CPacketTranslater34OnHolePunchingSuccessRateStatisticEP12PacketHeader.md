# _ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader

`CPacketTranslater::OnHolePunchingSuccessRateStatistic(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x805fc6e` | `0x256` | `0x805a690` | `0x256` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,169 +1,169 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x7c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0xdf>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x31(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"OnHolePunchingSuccessRateStatistic() : 0 == m_pclApp",0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x38(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x8d>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0xa4>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0xbc>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x178>
 lea    -0x31(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 lea    -0x6d(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN38Packet_GameServer2Statisctics2DBServerC1Ev>
 mov    -0x20(%ebp),%eax
 movzwl 0xa(%eax),%eax
 mov    %ax,-0x63(%ebp)
 mov    -0x20(%ebp),%eax
 movzbl 0xc(%eax),%eax
 mov    %al,-0x61(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0xd(%eax),%eax
 mov    %eax,-0x60(%ebp)
 mov    -0x20(%ebp),%eax
 mov    0x11(%eax),%eax
 mov    %eax,-0x5c(%ebp)
 mov    -0x20(%ebp),%eax
 add    $0x15,%eax
 movl   $0x10,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x6d(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    -0x20(%ebp),%eax
 add    $0x25,%eax
 movl   $0x10,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x6d(%ebp),%eax
 add    $0x25,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 lea    -0x6d(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x24e>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x1f4>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0x1c(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,%ebx
 movl   $0x626,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"OnHolePunchingSuccessRateStatistic() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x1ed>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x24e>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x62b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"OnHolePunchingSuccessRateStatistic() Exception Break",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader+0x249>
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

/* CPacketTranslater::OnHolePunchingSuccessRateStatistic(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  CServerHandler *this_00;
  Packet_GameServer2Statisctics2DBServer local_71 [10];
  undefined2 local_67;
  PacketHeader local_65;
  undefined4 local_64;
  undefined4 local_60;
  char acStack_5c [16];
  char acStack_4c [16];
  string local_3c [7];
  allocator local_35 [17];
  PacketHeader *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805fca4 to 0805fca8 has its CatchHandler @ 0805fd12 */
    std::string::string(local_3c,"OnHolePunchingSuccessRateStatistic() : 0 == m_pclApp",local_35);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805fcc3 to 0805fcc7 has its CatchHandler @ 0805fcca */
    CDNFException::CDNFException(this,local_3c);
                    /* try { // try from 0805fd01 to 0805fd05 has its CatchHandler @ 0805fd08 */
    std::string::~string(local_3c);
    std::allocator<char>::~allocator((allocator<char> *)local_35);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805fd48 to 0805fde0 has its CatchHandler @ 0805fde6 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_24 = param_1;
  Packet_GameServer2Statisctics2DBServer::Packet_GameServer2Statisctics2DBServer(local_71);
  local_67 = *(undefined2 *)(local_24 + 10);
  local_65 = local_24[0xc];
  local_64 = *(undefined4 *)(local_24 + 0xd);
  local_60 = *(undefined4 *)(local_24 + 0x11);
  strncpy(acStack_5c,(char *)(local_24 + 0x15),0x10);
  strncpy(acStack_4c,(char *)(local_24 + 0x25),0x10);
  this_00 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  CServerHandler::SendToDB(this_00,(PacketHeader *)local_71);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 1004 行）：

```cpp
void CPacketTranslater::OnHolePunchingSuccessRateStatistic(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("OnHolePunchingSuccessRateStatistic() : 0 == m_pclApp")
        Packet_GameServer2Statisctics2DBServer* pck = (Packet_GameServer2Statisctics2DBServer*)pkt;
        Packet_GameServer2Statisctics2DBServer out;
        out.m_serverGroup = pck->m_serverGroup;
        out.m_connectedType = pck->m_connectedType;
        out.m_requiredTime = pck->m_requiredTime;
        out.m_checkTime = pck->m_checkTime;
        strncpy(out.m_nationCode, pck->m_nationCode, 0x10);
        strncpy(out.m_peerAddress, pck->m_peerAddress, 0x10);
        m_pclApp->Get_ServerHandler()->SendToDB((PacketHeader*)&out);

    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog(__FUNCTION__, 1574)("./log/Except", "OnHolePunchingSuccessRateStatistic() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog(__FUNCTION__, 1579)("./log/Except", "OnHolePunchingSuccessRateStatistic() Exception Break");
    }
}
```

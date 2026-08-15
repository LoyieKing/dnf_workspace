# _ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader

`CPacketTranslater::OnMoneyLog(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x805f6cc` | `0x1f8` | `0x805a0ee` | `0x1f8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,144 +1,144 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0xdc>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnMoneyLog() : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0xa4>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0xb9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x11a>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication20Get_StatisticManagerEv>
 mov    %eax,-0x20(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication17Get_ServerHandlerEv>
 mov    %eax,0x8(%esp)
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager11AddMoneyLogEP14MoneyLogPacketP14CServerHandler>
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x1f0>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x196>
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
 movl   $0x5a7,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnMoneyLogEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnMoneyLog() Exception Break : %s",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x18f>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x1f0>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x5ac,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater10OnMoneyLogEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnMoneyLog() Exception Break",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader+0x1eb>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 add    $0x4c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnMoneyLog(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader(PacketHeader *param_1)

{
  CDNFException *this;
  CServerHandler *pCVar1;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  StatisticManager *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805f702 to 0805f706 has its CatchHandler @ 0805f770 */
    std::string::string(local_40,"CPacketTranslater::OnMoneyLog() : 0 == m_pclApp",local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805f721 to 0805f725 has its CatchHandler @ 0805f728 */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 0805f75f to 0805f763 has its CatchHandler @ 0805f766 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805f7a3 to 0805f7e0 has its CatchHandler @ 0805f7e6 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = (StatisticManager *)CApplication::Get_StatisticManager(m_pclApp);
  pCVar1 = (CServerHandler *)CApplication::Get_ServerHandler(m_pclApp);
  StatisticManager::_ZN16StatisticManager11AddMoneyLogEP14MoneyLogPacketP14CServerHandler
            (local_24,(MoneyLogPacket *)local_28,pCVar1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 934 行）：

```cpp
void CPacketTranslater::OnMoneyLog(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnMoneyLog() : 0 == m_pclApp")
        MoneyLogPacket* pck = (MoneyLogPacket*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->AddMoneyLog(pck, m_pclApp->Get_ServerHandler());
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog(__FUNCTION__, 1447)("./log/Except", "CPacketTranslater::OnMoneyLog() Exception Break : %s", reason);
    }
    catch (...)
    {
        CMyFileLog(__FUNCTION__, 1452)("./log/Except", "CPacketTranslater::OnMoneyLog() Exception Break");
    }
}
```

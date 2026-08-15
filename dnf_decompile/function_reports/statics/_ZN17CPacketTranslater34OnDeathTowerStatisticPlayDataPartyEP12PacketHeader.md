# _ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader

`CPacketTranslater::OnDeathTowerStatisticPlayDataParty(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x805cafe` | `0x1e7` | `0x8057520` | `0x1e7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,140 +1,140 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x4c,%esp
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0xdc>
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x35(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp",0x4(%esp)
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
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x8d>
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
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x87>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0xa4>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0xb9>
 cmp    $0xffffffff,%edx
 jne    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0xa4>
 call   <T> <_ZSt9terminatev>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x35(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x109>
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
 mov    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party>
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x1df>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x185>
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
 movl   $0x318,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x17e>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x1df>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x31e,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader+0x1da>
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

/* CPacketTranslater::OnDeathTowerStatisticPlayDataParty(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader
               (PacketHeader *param_1)

{
  CDNFException *this;
  string local_40 [7];
  allocator local_39 [17];
  PacketHeader *local_28;
  StatisticManager *local_24;
  
  if (m_pclApp == (CApplication *)0x0) {
    std::allocator<char>::allocator();
                    /* try { // try from 0805cb34 to 0805cb38 has its CatchHandler @ 0805cba2 */
    std::string::string(local_40,
                        "CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp",
                        local_39);
    this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0805cb53 to 0805cb57 has its CatchHandler @ 0805cb5a */
    CDNFException::CDNFException(this,local_40);
                    /* try { // try from 0805cb91 to 0805cb95 has its CatchHandler @ 0805cb98 */
    std::string::~string(local_40);
    std::allocator<char>::~allocator((allocator<char> *)local_39);
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0805cbd5 to 0805cc01 has its CatchHandler @ 0805cc07 */
    __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
  }
  local_28 = param_1;
  local_24 = (StatisticManager *)CApplication::Get_StatisticManager(m_pclApp);
  StatisticManager::
  _ZN16StatisticManager37WriteDeathTowerPlayDataPartyStatisticEP42Packet_DeathTower_Statistic_Playdata_Party
            (local_24,(Packet_DeathTower_Statistic_Playdata_Party *)local_28);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Statics/DNFPacketTranslater.cpp)（约第 498 行）：

```cpp
void CPacketTranslater::OnDeathTowerStatisticPlayDataParty(PacketHeader* pkt)
{
    try
    {
        THROW_IF_NO_APP("CPacketTranslater::OnDeathTowerStatisticPlayDataJob() : 0 == m_pclApp")
        Packet_DeathTower_Statistic_Playdata_Party* pck = (Packet_DeathTower_Statistic_Playdata_Party*)pkt;
        StatisticManager* sm = m_pclApp->Get_StatisticManager();
        sm->WriteDeathTowerPlayDataPartyStatistic(pck);
    }
    catch (CDNFException& e)
    {
        register const char* reason = e.what();
        CMyFileLog(__FUNCTION__, 792)("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break : %s\n", reason);
    }
    catch (...)
    {
        CMyFileLog(__FUNCTION__, 798)("./log/Except", "CPacketTranslater::OnDeathTowerStatisticPlayDataParty() Exception Break\n");
    }
}
```

# _ZN12CApplication8App_StopEv

`CApplication::App_Stop()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80574f2` | `0x28f` | `0x804e5fc` | `0x296` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,173 +1,174 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication20Get_StatisticManagerEv>
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager30ResetHellPartyStatisticItemMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager13ResetPartyMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager16ResetPartyJobMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager19ResetPartyCharacMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager23ResetDeathTowerValueMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager29ResetDeathTowerPlayDataJobMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager31ResetDeathTowerPlayDataPartyMapEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager19ResetFatigueBatteryEv>
+mov    0x8(%ebp),%eax
+mov    0x298(%eax),%eax
+mov    %eax,0x4(%esp)
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager17ResetBloodDungeonEv>
+mov    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN16StatisticManager22getCubeStatisticObjectEv>
 mov    %eax,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager28SendDBHellPartyStatisticItemEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager30ResetHellPartyStatisticItemMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager20SendDBPartyStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager13ResetPartyMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager23SendDBPartyJobStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager16ResetPartyJobMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager26SendDBPartyCharacStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager19ResetPartyCharacMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager30SendDBDeathTowerValueStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager23ResetDeathTowerValueMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager36SendDBDeathTowerPlayDataJobStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager29ResetDeathTowerPlayDataJobMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager38SendDBDeathTowerPlayDataPartyStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager31ResetDeathTowerPlayDataPartyMapEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager20SendDBFatigueBatteryEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager19ResetFatigueBatteryEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager27SendDBBloodDungeonStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager17ResetBloodDungeonEv>
-mov    0x8(%ebp),%eax
-mov    0x298(%eax),%ebx
-mov    -0xc(%ebp),%eax
+call   <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler>
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager22getCubeStatisticObjectEv>
-mov    %ebx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZN14CCubeStatistic17sendStatisticDataEP14CServerHandler>
+mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN16StatisticManager22getCubeStatisticObjectEv>
 mov    %eax,(%esp)
 call   <T> <_ZN14CCubeStatistic18resetStatisticDataEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager20SendDBValueStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetValueStatisticEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager26SendDBCirculationStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25ResetCirculationStatisticEv>
 call   <T> <_ZN14statistc_proxy20sendDBStatisticProxyEv>
 call   <T> <_ZN14statistc_proxy19resetStatisticProxyEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager25SendDBSecretShopStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager24ResetSecretShopStatisticEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28SendDBGoldcardEventStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager27ResetGoldcardEventStatisticEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29SendDBTowerOfDespairStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager19ResetTowerOfDespairEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager29SendDBDisjointAvatarInfoTotalEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager28ResetDisjointAvatarInfoTotalEv>
 mov    0x8(%ebp),%eax
 mov    0x298(%eax),%eax
 mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager18SendDBP2PStatisticEP14CServerHandler>
-mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16StatisticManager17ResetP2PStatisticEv>
 mov    0x8(%ebp),%eax
 movb   $0x0,0x4(%eax)
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::App_Stop() */

void __thiscall CApplication::_ZN12CApplication8App_StopEv(CApplication *this)

{
  CServerHandler *pCVar1;
  StatisticManager *this_00;
  CCubeStatistic *pCVar2;
  
  this_00 = (StatisticManager *)Get_StatisticManager(this);
  StatisticManager::SendDBHellPartyStatisticItem(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetHellPartyStatisticItemMap(this_00);
  StatisticManager::SendDBPartyStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetPartyMap(this_00);
  StatisticManager::SendDBPartyJobStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetPartyJobMap(this_00);
  StatisticManager::SendDBPartyCharacStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetPartyCharacMap(this_00);
  StatisticManager::SendDBDeathTowerValueStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetDeathTowerValueMap(this_00);
  StatisticManager::SendDBDeathTowerPlayDataJobStatistic(this_00,*(CServerHandler **)(this + 0x298))
  ;
  StatisticManager::ResetDeathTowerPlayDataJobMap(this_00);
  StatisticManager::SendDBDeathTowerPlayDataPartyStatistic
            (this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetDeathTowerPlayDataPartyMap(this_00);
  StatisticManager::SendDBFatigueBattery(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetFatigueBattery(this_00);
  StatisticManager::SendDBBloodDungeonStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetBloodDungeon(this_00);
  pCVar1 = *(CServerHandler **)(this + 0x298);
  pCVar2 = (CCubeStatistic *)StatisticManager::getCubeStatisticObject(this_00);
  CCubeStatistic::sendStatisticData(pCVar2,pCVar1);
  pCVar2 = (CCubeStatistic *)StatisticManager::getCubeStatisticObject(this_00);
  CCubeStatistic::resetStatisticData(pCVar2);
  StatisticManager::SendDBValueStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetValueStatistic(this_00);
  StatisticManager::SendDBCirculationStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetCirculationStatistic(this_00);
  statistc_proxy::sendDBStatisticProxy();
  statistc_proxy::resetStatisticProxy();
  StatisticManager::SendDBSecretShopStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetSecretShopStatistic(this_00);
  StatisticManager::SendDBGoldcardEventStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetGoldcardEventStatistic(this_00);
  StatisticManager::SendDBTowerOfDespairStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetTowerOfDespair(this_00);
  StatisticManager::SendDBDisjointAvatarInfoTotal(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetDisjointAvatarInfoTotal(this_00);
  StatisticManager::SendDBP2PStatistic(this_00,*(CServerHandler **)(this + 0x298));
  StatisticManager::ResetP2PStatistic(this_00);
  this[4] = (CApplication)0x0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFApplication.cpp](source/DNFServer/GameServer/Statics/DNFApplication.cpp)（约第 351 行）：

```cpp
void CApplication::App_Stop()
{
    StatisticManager* sm = Get_StatisticManager();
    sm->SendDBHellPartyStatisticItem(m_serverHandler);
    sm->ResetHellPartyStatisticItemMap();
    sm->SendDBPartyStatistic(m_serverHandler);
    sm->ResetPartyMap();
    sm->SendDBPartyJobStatistic(m_serverHandler);
    sm->ResetPartyJobMap();
    sm->SendDBPartyCharacStatistic(m_serverHandler);
    sm->ResetPartyCharacMap();
    sm->SendDBDeathTowerValueStatistic(m_serverHandler);
    sm->ResetDeathTowerValueMap();
    sm->SendDBDeathTowerPlayDataJobStatistic(m_serverHandler);
    sm->ResetDeathTowerPlayDataJobMap();
    sm->SendDBDeathTowerPlayDataPartyStatistic(m_serverHandler);
    sm->ResetDeathTowerPlayDataPartyMap();
    sm->SendDBFatigueBattery(m_serverHandler);
    sm->ResetFatigueBattery();
    sm->SendDBBloodDungeonStatistic(m_serverHandler);
    sm->ResetBloodDungeon();
    CCubeStatistic* cube = (CCubeStatistic*)sm->getCubeStatisticObject();
    cube->sendStatisticData(m_serverHandler);
    cube = (CCubeStatistic*)sm->getCubeStatisticObject();
    cube->resetStatisticData();
    sm->SendDBValueStatistic(m_serverHandler);
    sm->ResetValueStatistic();
    sm->SendDBCirculationStatistic(m_serverHandler);
    sm->ResetCirculationStatistic();
    statistc_proxy::sendDBStatisticProxy();
    statistc_proxy::resetStatisticProxy();
    sm->SendDBSecretShopStatistic(m_serverHandler);
    sm->ResetSecretShopStatistic();
    sm->SendDBGoldcardEventStatistic(m_serverHandler);
    sm->ResetGoldcardEventStatistic();
    sm->SendDBTowerOfDespairStatistic(m_serverHandler);
    sm->ResetTowerOfDespair();
    sm->SendDBDisjointAvatarInfoTotal(m_serverHandler);
    sm->ResetDisjointAvatarInfoTotal();
    sm->SendDBP2PStatistic(m_serverHandler);
    sm->ResetP2PStatistic();
    m_loaded = 0;
}
```

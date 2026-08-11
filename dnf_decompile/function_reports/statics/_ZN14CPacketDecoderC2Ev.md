# _ZN14CPacketDecoderC2Ev

`CPacketDecoder::CPacketDecoder()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | NEAR | `0x8059480` | `0x2be` | `0x8054006` | `0x2be` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,117 +1,117 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 movl   $0x3e8,-0x4(%ebp)
 jmp    <T> <_ZN14CPacketDecoderC1Ev+0x3e>
 mov    -0x4(%ebp),%edx
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax,%edx,4)
 addl   $0x1,-0x4(%ebp)
 cmpl   $0x27ff,-0x4(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN14CPacketDecoderC1Ev+0x2c>
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnHeartBeatEP12PacketHeader,0xfbc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater12OnEventStartEP12PacketHeader,0x1148(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnEventEndEP12PacketHeader,0x114c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnMonitorManagerConnectOKEP12PacketHeader,0x15ec(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnClientSpecStatisticEP12PacketHeader,0x2744(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnFrameLagStatisticsAddEP12PacketHeader,0x30a4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater34OnFrameLagStatisticsResultLoadSpecEP12PacketHeader,0x30ac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater36OnFrameLagStatisticsResultReloadSpecEP12PacketHeader,0x30b4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater36OnFrameLagStatisticsSpecDeleteNotifyEP12PacketHeader,0x30c4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater40OnFrameLagStatisticsCollectIntervalCheckEP12PacketHeader,0x30c8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnPartyResultStatisticEP12PacketHeader,0x3ea4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnPartyPingStatisticEP12PacketHeader,0x3ea8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnPvpPingStatisticEP12PacketHeader,0x3eac(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnAbnormalExitStatisticEP12PacketHeader,0x3eb0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnDungeonStatisticPartyEP12PacketHeader,0x30e0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnDungeonStatisticPartyJobEP12PacketHeader,0x30e8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnDungeonStatisticPartyCharacEP12PacketHeader,0x30f0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnDeathTowerStatisticValueEP12PacketHeader,0x30f8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater32OnDeathTowerStatisticPlayDataJobEP12PacketHeader,0x3100(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater34OnDeathTowerStatisticPlayDataPartyEP12PacketHeader,0x3108(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnPacketOverflowStatisticEP12PacketHeader,0x3118(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnAssertManagerStatisticEP12PacketHeader,0x3110(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater19OnUserTingTimeCheckEP12PacketHeader,0x3120(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnHellPartyStatisticItemEP12PacketHeader,0x30d0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater29OnLoadingTimeReportStatisticsEP12PacketHeader,0x3ecc(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater31OnFatigueBatteryMoneyStatisticsEP12PacketHeader,0x3134(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater23OnBloodDungeonStatisticEP12PacketHeader,0x40e4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnCubeStatisticEP12PacketHeader,0x30d8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnReasonCrashDownDataEP12PacketHeader,0x312c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater28OnUpdateDisjointAvatarStaticEP12PacketHeader,0x5e94(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater26OnUpdateCreateEmblemStaticEP12PacketHeader,0x5e9c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnUserCountStatisticEP12PacketHeader,0x5ec0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnRandomboxStatisticEP12PacketHeader,0x5ee4(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater18OnLagStatisticsAddEP12PacketHeader,0x5ef0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnValueStatisticEP12PacketHeader,0x5f34(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnCirculationStatisticEP12PacketHeader,0x5f38(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater17OnServerMatchDataEP12PacketHeader,0x6da8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater21OnSecretShopStatisticEP12PacketHeader,0x6db0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater24OnGoldCardEventStatisticEP12PacketHeader,0x7d24(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater25OnTowerOfDespairStatisticEP12PacketHeader,0x9c7c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater11OnStatisticEP12PacketHeader,0x9c8c(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater16OnStatisticGmCmdEP12PacketHeader,0x9c94(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater10OnMoneyLogEP12PacketHeader,0x9c98(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater20OnCompatibilityIndexEP12PacketHeader,0x9f8c(%eax)
 mov    0x8(%ebp),%eax
-movl   $"U됧WVS껋L�",0x9f90(%eax)
+movl   $&_ZN17CPacketTranslater14OnP2PStatisticEP12PacketHeader,0x9f90(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater22OnFairPvpPingStatisticEP12PacketHeader,0x9fc0(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater15OnFileStatisticEP12PacketHeader,0x9fd8(%eax)
 mov    0x8(%ebp),%eax
 movl   $&_ZN17CPacketTranslater34OnHolePunchingSuccessRateStatisticEP12PacketHeader,0xa000(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::CPacketDecoder() */

void __thiscall CPacketDecoder::_ZN14CPacketDecoderC2Ev(CPacketDecoder *this)

{
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  for (local_8 = 1000; local_8 < 0x2800; local_8 = local_8 + 1) {
    *(undefined4 *)(this + local_8 * 4 + 0xc) = 0;
  }
  *(code **)(this + 0xfbc) = CPacketTranslater::OnHeartBeat;
  *(code **)(this + 0x1148) = CPacketTranslater::OnEventStart;
  *(code **)(this + 0x114c) = CPacketTranslater::OnEventEnd;
  *(code **)(this + 0x15ec) = CPacketTranslater::OnMonitorManagerConnectOK;
  *(code **)(this + 0x2744) = CPacketTranslater::OnClientSpecStatistic;
  *(code **)(this + 0x30a4) = CPacketTranslater::OnFrameLagStatisticsAdd;
  *(code **)(this + 0x30ac) = CPacketTranslater::OnFrameLagStatisticsResultLoadSpec;
  *(code **)(this + 0x30b4) = CPacketTranslater::OnFrameLagStatisticsResultReloadSpec;
  *(code **)(this + 0x30c4) = CPacketTranslater::OnFrameLagStatisticsSpecDeleteNotify;
  *(code **)(this + 0x30c8) = CPacketTranslater::OnFrameLagStatisticsCollectIntervalCheck;
  *(code **)(this + 0x3ea4) = CPacketTranslater::OnPartyResultStatistic;
  *(code **)(this + 0x3ea8) = CPacketTranslater::OnPartyPingStatistic;
  *(code **)(this + 0x3eac) = CPacketTranslater::OnPvpPingStatistic;
  *(code **)(this + 0x3eb0) = CPacketTranslater::OnAbnormalExitStatistic;
  *(code **)(this + 0x30e0) = CPacketTranslater::OnDungeonStatisticParty;
  *(code **)(this + 0x30e8) = CPacketTranslater::OnDungeonStatisticPartyJob;
  *(code **)(this + 0x30f0) = CPacketTranslater::OnDungeonStatisticPartyCharac;
  *(code **)(this + 0x30f8) = CPacketTranslater::OnDeathTowerStatisticValue;
  *(code **)(this + 0x3100) = CPacketTranslater::OnDeathTowerStatisticPlayDataJob;
  *(code **)(this + 0x3108) = CPacketTranslater::OnDeathTowerStatisticPlayDataParty;
  *(code **)(this + 0x3118) = CPacketTranslater::OnPacketOverflowStatistic;
  *(code **)(this + 0x3110) = CPacketTranslater::OnAssertManagerStatistic;
  *(code **)(this + 0x3120) = CPacketTranslater::OnUserTingTimeCheck;
  *(code **)(this + 0x30d0) = CPacketTranslater::OnHellPartyStatisticItem;
  *(code **)(this + 0x3ecc) = CPacketTranslater::OnLoadingTimeReportStatistics;
  *(code **)(this + 0x3134) = CPacketTranslater::OnFatigueBatteryMoneyStatistics;
  *(code **)(this + 0x40e4) = CPacketTranslater::OnBloodDungeonStatistic;
  *(code **)(this + 0x30d8) = CPacketTranslater::OnCubeStatistic;
  *(code **)(this + 0x312c) = CPacketTranslater::OnReasonCrashDownData;
  *(code **)(this + 0x5e94) = CPacketTranslater::OnUpdateDisjointAvatarStatic;
  *(code **)(this + 0x5e9c) = CPacketTranslater::OnUpdateCreateEmblemStatic;
  *(code **)(this + 0x5ec0) = CPacketTranslater::OnUserCountStatistic;
  *(code **)(this + 0x5ee4) = CPacketTranslater::OnRandomboxStatistic;
  *(code **)(this + 0x5ef0) = CPacketTranslater::OnLagStatisticsAdd;
  *(code **)(this + 0x5f34) = CPacketTranslater::OnValueStatistic;
  *(code **)(this + 0x5f38) = CPacketTranslater::OnCirculationStatistic;
  *(code **)(this + 0x6da8) = CPacketTranslater::OnServerMatchData;
  *(code **)(this + 0x6db0) = CPacketTranslater::OnSecretShopStatistic;
  *(code **)(this + 0x7d24) = CPacketTranslater::OnGoldCardEventStatistic;
  *(code **)(this + 0x9c7c) = CPacketTranslater::OnTowerOfDespairStatistic;
  *(code **)(this + 0x9c8c) = CPacketTranslater::OnStatistic;
  *(code **)(this + 0x9c94) = CPacketTranslater::OnStatisticGmCmd;
  *(code **)(this + 0x9c98) = CPacketTranslater::OnMoneyLog;
  *(code **)(this + 0x9f8c) = CPacketTranslater::OnCompatibilityIndex;
  *(code **)(this + 0x9f90) = CPacketTranslater::OnP2PStatistic;
  *(code **)(this + 0x9fc0) = CPacketTranslater::OnFairPvpPingStatistic;
  *(code **)(this + 0x9fd8) = CPacketTranslater::OnFileStatistic;
  *(code **)(this + 0xa000) = CPacketTranslater::OnHolePunchingSuccessRateStatistic;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 26 行）：

```cpp
CPacketDecoder::CPacketDecoder()
{
    m_poolLock = 0;
    for (int i = 1000; i < 0x27fd; i++)
    {
        m_handlers[i] = 0;
    }
    m_handlers[0xbb8] = (void*)&CPacketTranslater::OnLogin;
    m_handlers[0xbb9] = (void*)&CPacketTranslater::OnLogout;
    m_handlers[0x3f9] = (void*)&CPacketTranslater::OnReplyUserInfo;
    m_handlers[0xbba] = (void*)&CPacketTranslater::OnHeartBeat;
}
```

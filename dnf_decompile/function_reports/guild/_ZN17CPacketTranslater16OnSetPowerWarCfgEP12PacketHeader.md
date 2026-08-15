# _ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader

`CPacketTranslater::OnSetPowerWarCfg(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8080834` | `0x20a` | `0x8076ab4` | `0x20a` |

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
 sub    $0x6c,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,-0x24(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 test   %eax,%eax
 jne    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x53>
 movl   $0x1317,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnSetPowerWarCfg : 0 == m_pclApp",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x202>
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15GetPowerManagerEv>
 mov    %eax,-0x20(%ebp)
 mov    -0x24(%ebp),%eax
 movzwl 0xa(%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager23SetPowerWarEndKillPointEt>
 mov    -0x24(%ebp),%eax
 mov    0x18(%eax),%ebx
 mov    -0x24(%ebp),%eax
 mov    0x14(%eax),%ecx
 mov    -0x24(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    -0x24(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    %ebx,0x10(%esp)
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPowerManager21SetPowerWarRewardInfoEiiii>
 mov    -0x24(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    %eax,-0x50(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x14(%eax),%eax
 mov    %eax,-0x4c(%ebp)
 mov    -0x24(%ebp),%eax
 mov    0x10(%eax),%edi
 mov    -0x24(%ebp),%eax
 mov    0xc(%eax),%esi
 mov    -0x24(%ebp),%eax
 movzwl 0xa(%eax),%eax
 movzwl %ax,%ebx
 movl   $0x1321,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x50(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    -0x4c(%ebp),%eax
 mov    %eax,0x18(%esp)
 mov    %edi,0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnSetPowerWarCfg EndKillPoint:%d, BasicPowerWarPoint:%d, FirstGradeBonusPowerWarPoint:%d, BonusDecreasePoint:%d, RankingBonusGrade:%d",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x202>
 cmp    $0x2,%edx
 jne    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x1a8>
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
 movl   $0x132b,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break : %s\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x1a1>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 call   <T> <__cxa_end_catch>
 jmp    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x202>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $0x1330,0x8(%esp)
 movl   $&_ZZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CPacketTranslater::OnPacketSecedePower Exception Break\n",0x8(%esp)
 movl   $"./log/Except",0x4(%esp)
 lea    -0x2c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 jmp    <T> <_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader+0x1fd>
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

/* CPacketTranslater::OnSetPowerWarCfg(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater16OnSetPowerWarCfgEP12PacketHeader
               (PacketHeader *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [24];
  PacketHeader *local_28;
  CPowerManager *local_24;
  
  local_28 = param_1;
  if (m_pclApp == (CApplication *)0x0) {
                    /* try { // try from 08080862 to 0808095a has its CatchHandler @ 08080960 */
    CMyFileLog::CMyFileLog(local_48,"OnSetPowerWarCfg",0x1317);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_48,"./log/Power","CPacketTranslater::OnSetPowerWarCfg : 0 == m_pclApp");
  }
  else {
    local_24 = (CPowerManager *)CApplication::GetPowerManager(m_pclApp);
    CPowerManager::SetPowerWarEndKillPoint(local_24,*(ushort *)(local_28 + 10));
    CPowerManager::_ZN13CPowerManager21SetPowerWarRewardInfoEiiii
              (local_24,*(int *)(local_28 + 0xc),*(int *)(local_28 + 0x10),*(int *)(local_28 + 0x14)
               ,*(int *)(local_28 + 0x18));
    uVar2 = *(undefined4 *)(local_28 + 0x18);
    uVar3 = *(undefined4 *)(local_28 + 0x14);
    uVar4 = *(undefined4 *)(local_28 + 0x10);
    uVar5 = *(undefined4 *)(local_28 + 0xc);
    uVar1 = *(ushort *)(local_28 + 10);
    CMyFileLog::CMyFileLog(local_40,"OnSetPowerWarCfg",0x1321);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_40,"./log/Power",
               "CPacketTranslater::OnSetPowerWarCfg EndKillPoint:%d, BasicPowerWarPoint:%d, FirstGradeBonusPowerWarPoint:%d, BonusDecreasePoint:%d, RankingBonusGrade:%d"
               ,(uint)uVar1,uVar5,uVar4,uVar3,uVar2);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp)（约第 3569 行）：

```cpp
void CPacketTranslater::OnSetPowerWarCfg(PacketHeader* pkt)
{
    Packet_Notice_Power_War_CFG* pb = (Packet_Notice_Power_War_CFG*)pkt;
    if (m_pclApp == 0)
    {
        DNF_LOG_SCOPE_LINE(0x1317, "./log/Power", "CPacketTranslater::OnSetPowerWarCfg : 0 == m_pclApp");
        return;
    }
    try
    {
        CPowerManager* pm = m_pclApp->GetPowerManager();
        pm->SetPowerWarEndKillPoint(pb->m_endKillPoint);
        pm->SetPowerWarRewardInfo(pb->m_basic, pb->m_first, pb->m_decrease,
                                  pb->m_ranking);
        DNF_LOG_SCOPE_LINE(0x1321,"./log/Power",
            "CPacketTranslater::OnSetPowerWarCfg EndKillPoint:%d, BasicPowerWarPoint:%d, FirstGradeBonusPowerWarPoint:%d, BonusDecreasePoint:%d, RankingBonusGrade:%d",
            (unsigned int)pb->m_endKillPoint, pb->m_basic, pb->m_first,
            pb->m_decrease, pb->m_ranking);
    }
    DNF_CATCH_LOG("./log/Except", "CPacketTranslater::OnPacketSecedePower Exception Break", 0x132b, 0x1330);
}
```

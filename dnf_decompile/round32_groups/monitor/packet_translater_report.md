# monitor/DNFPacketTranslater.cpp 回归恢复报告

## 结论摘要

- 目标过滤：`$1=="monitor" && $10 ~ /Monitor\/DNFPacketTranslater\.cpp/`
- 目标函数：105 个
- 复检工具：`MON_SCRATCH_VARIANT=c6446r bash source/toolchain/monitor_scratch.sh /tmp/mon_pt_c6446r_clean DNFPacketTranslater`
- 校验：`python3 source/toolchain/gen_function_md.py --services monitor --function <mangled> --new-bin <scratch>/df_monitor_r --check-only`
- 结果：`IDENTICAL_AE 40`，`NEAR 1`，`DIFF 64`

## 改动文件

- `source/toolchain/cmake/dnf_monitor_cxx.sh`
  - 新增 `C6446R` wrapper 变量。
  - 在逐 TU 编译器分派中新增 `DNFPacketTranslater` case，使用 c6446r
    （c6root 4.4.7 驱动 + cc1plus 4.4.6）。
  - 不改 `build/`、`function_reports/`、共享头。

## FIXED

严格口径 `--check-only` 归 `IDENTICAL_AE` 共 40 个，均为原先
`CODEGEN_TAIL` / 小 `diff_pm` 的 NEAR 函数，包括：

- `CPacketTranslater::OnAddBuddy`
- `CPacketTranslater::OnDelBuddy`
- `CPacketTranslater::OnEventEnd`
- `CPacketTranslater::OnCeraUpdate`
- `CPacketTranslater::OnForbidChat`
- `CPacketTranslater::OnSetARSInfo`
- `CPacketTranslater::OnNoticeSlang`
- `CPacketTranslater::OnBroadcastMsg`
- `CPacketTranslater::OnNoticeMessage`
- `CPacketTranslater::onCollectItemsGm`
- `CPacketTranslater::OnCharacterDelete`
- `CPacketTranslater::OnWebNoticeSingle`
- `CPacketTranslater::OnRegisterEventIdx`
- `CPacketTranslater::OnReplyQueryMember`
- `CPacketTranslater::onIPCounterControl`
- `CPacketTranslater::OnServerMessageInfo`
- `CPacketTranslater::OnWebNoticeInGameAD`
- `CPacketTranslater::OnWebRequestARSInfo`
- `CPacketTranslater::onLoadCleanPadPoint`
- `CPacketTranslater::onLoadPunishUserReq`
- `CPacketTranslater::onReloadCountryCode`
- `CPacketTranslater::onCollectItemsResult`
- `CPacketTranslater::OnLoadPeriodicMessage`
- `CPacketTranslater::OnPcRoomPlayTimeReward`
- `CPacketTranslater::OnRegisterEventUserIdx`
- `CPacketTranslater::RequestBlackListToDBMW`
- `CPacketTranslater::OnResponseIPCounterList`
- `CPacketTranslater::OnResultRegisterEventIdx`
- `CPacketTranslater::OnMonitorManagerConnectOK`
- `CPacketTranslater::OnVillageAttackedGMCommand`
- `CPacketTranslater::onRequestReloadTowerRanker`
- `CPacketTranslater::OnResponseFullIPCounterList`
- `CPacketTranslater::OnResultLoadPeriodicMessage`
- `CPacketTranslater::onLoadBlackIPMonitorDeleteIP`
- `CPacketTranslater::onLoadBlackIPMonitorPartLoad`
- `CPacketTranslater::onWebReqReloadAutoPunishRule`
- `CPacketTranslater::OnRequestReloadPowerWarRanker`
- `CPacketTranslater::OnGameMonitorGMVillageAttacked`
- `CPacketTranslater::onReloadSecurityRestrictPolicy`
- `CPacketTranslater::onSocialEventRewardItemRequest`

## REMAIN

- `NEAR 1`：`CPacketTranslater::OnEventStart`
- `DIFF 64`：包括全部 `EH_OR_CLEANUP` 目标与 `CONST_OR_OFFSET` 大 diff
  函数；c6446r 未将其归零。

其中 EH 类目标仍为 DIFF：

- `CPacketTranslater::OnUpdateMiniCraneSeed`
- `CPacketTranslater::OnCheckOverlappedAccusation`
- `CPacketTranslater::onSocialEventRewardItemInfoAll`
- `CPacketTranslater::OnNoticeMemberChatMsg`
- `CPacketTranslater::OnNoticeMemberChatMsgHyperLink`
- `CPacketTranslater::OnMonitorSecuServiceConnWeb`
- `CPacketTranslater::OnSetCleanPadPoint`
- `CPacketTranslater::OnMonitorPunishCancel`

这些函数 diff 主要集中在异常对象生命周期、字符串/allocator 栈槽布局以及
对应 cleanup/landing pad 顺序；本轮仅做编译器分派与源码形态定位，未做共享头
或 asm 改动。

## 备注

- 过滤集中没有 `bucket=CALL_DIFF` 的目标。
- 未修改 `source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp` 的
  最终内容（本轮只做了源码形态试验并已还原，最终分派改动在 toolchain 脚本）。

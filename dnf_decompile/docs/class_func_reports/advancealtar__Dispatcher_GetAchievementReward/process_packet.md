# process_packet

`_ZNK12advancealtar31Dispatcher_GetAchievementReward14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE`

`advancealtar::Dispatcher_GetAchievementReward::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_GetAchievementReward` | `0x08140da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140da0  _ZNK12advancealtar31Dispatcher_GetAchievementReward14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE
#           advancealtar::Dispatcher_GetAchievementReward::process_packet(CUser*, CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const
# range [0x08140da0, 0x08140da9]
08140da0 +0x00:  push   %ebp
08140da1 +0x01:  mov    %esp,%ebp
08140da3 +0x03:  mov    $0x0,%eax
08140da8 +0x08:  pop    %ebp
08140da9 +0x09:  ret
```

## 反编译 C

```c
// advancealtar::Dispatcher_GetAchievementReward::process_packet @ 0x8140da0

/* advancealtar::Dispatcher_GetAchievementReward::process_packet(CUser*,
   CMDPacketStruct::STBaseRequest&, CMDPacketStruct::STBaseResponse&) const */

undefined4
advancealtar::Dispatcher_GetAchievementReward::process_packet
          (CUser *param_1,STBaseRequest *param_2,STBaseResponse *param_3)

{
  return 0;
}
```

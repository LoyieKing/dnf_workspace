# IsValidTodayRewardItem

`_ZN8APSystem24CActionPointEtcParameter22IsValidTodayRewardItemENS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE`

`APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointEtcParameter` | `0x08894976` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08894976  _ZN8APSystem24CActionPointEtcParameter22IsValidTodayRewardItemENS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE
#           APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
# range [0x08894976, 0x08894995]
08894976 +0x00:  push   %ebp
08894977 +0x01:  mov    %esp,%ebp
08894979 +0x03:  mov    0x8(%ebp),%eax
0889497c +0x06:  test   %eax,%eax
0889497e +0x08:  js     0889498f <+0x19>
08894980 +0x0a:  mov    0x8(%ebp),%eax
08894983 +0x0d:  cmp    $0x3,%eax
08894986 +0x10:  jg     0889498f <+0x19>
08894988 +0x12:  mov    $0x1,%eax
0889498d +0x17:  jmp    08894994 <+0x1e>
0889498f +0x19:  mov    $0x0,%eax
08894994 +0x1e:  pop    %ebp
08894995 +0x1f:  ret
```

## 反编译 C

```c
// APSystem::CActionPointEtcParameter::IsValidTodayRewardItem @ 0x8894976

/* APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
    */

undefined4 APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (3 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```

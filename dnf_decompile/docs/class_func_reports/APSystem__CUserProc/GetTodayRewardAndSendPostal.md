# GetTodayRewardAndSendPostal

`_ZN8APSystem9CUserProc27GetTodayRewardAndSendPostalEP5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE`

`APSystem::CUserProc::GetTodayRewardAndSendPostal(CUser*, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x0812255c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812255c  _ZN8APSystem9CUserProc27GetTodayRewardAndSendPostalEP5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE
#           APSystem::CUserProc::GetTodayRewardAndSendPostal(CUser*, APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)
# range [0x0812255c, 0x08122563]
0812255c +0x00:  push   %ebp
0812255d +0x01:  mov    %esp,%ebp
0812255f +0x03:  sub    $0x10,%esp
08122562 +0x06:  leave
08122563 +0x07:  ret
```

## 反编译 C

```c
// APSystem::CUserProc::GetTodayRewardAndSendPostal @ 0x812255c

/* APSystem::CUserProc::GetTodayRewardAndSendPostal(CUser*,
   APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem) */

void APSystem::CUserProc::GetTodayRewardAndSendPostal(void)

{
  return;
}
```

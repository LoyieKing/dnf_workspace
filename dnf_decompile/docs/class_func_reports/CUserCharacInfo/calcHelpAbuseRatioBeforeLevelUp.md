# calcHelpAbuseRatioBeforeLevelUp

`_ZN15CUserCharacInfo31calcHelpAbuseRatioBeforeLevelUpEi`

`CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e3fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e3fa  _ZN15CUserCharacInfo31calcHelpAbuseRatioBeforeLevelUpEi
#           CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int)
# range [0x0864e3fa, 0x0864e401]
0864e3fa +0x00:  push   %ebp
0864e3fb +0x01:  mov    %esp,%ebp
0864e3fd +0x03:  sub    $0x20,%esp
0864e400 +0x06:  leave
0864e401 +0x07:  ret
```

## 反编译 C

```c
// CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp @ 0x864e3fa

/* CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int) */

void CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int param_1)

{
  return;
}
```

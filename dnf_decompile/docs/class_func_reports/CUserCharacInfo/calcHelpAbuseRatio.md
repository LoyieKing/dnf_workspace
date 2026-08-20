# calcHelpAbuseRatio

`_ZN15CUserCharacInfo18calcHelpAbuseRatioEjb`

`CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0864e402` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864e402  _ZN15CUserCharacInfo18calcHelpAbuseRatioEjb
#           CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool)
# range [0x0864e402, 0x0864e40f]
0864e402 +0x00:  push   %ebp
0864e403 +0x01:  mov    %esp,%ebp
0864e405 +0x03:  sub    $0x24,%esp
0864e408 +0x06:  mov    0x10(%ebp),%eax
0864e40b +0x09:  mov    %al,-0x24(%ebp)
0864e40e +0x0c:  leave
0864e40f +0x0d:  ret
```

## 反编译 C

```c
// CUserCharacInfo::calcHelpAbuseRatio @ 0x864e402

/* CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool) */

void CUserCharacInfo::calcHelpAbuseRatio(uint param_1,bool param_2)

{
  return;
}
```

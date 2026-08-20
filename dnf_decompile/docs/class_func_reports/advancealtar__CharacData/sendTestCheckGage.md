# sendTestCheckGage

`_ZN12advancealtar10CharacData17sendTestCheckGageEv`

`advancealtar::CharacData::sendTestCheckGage()`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacData` | `0x0812d372` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d372  _ZN12advancealtar10CharacData17sendTestCheckGageEv
#           advancealtar::CharacData::sendTestCheckGage()
# range [0x0812d372, 0x0812d377]
0812d372 +0x00:  push   %ebp
0812d373 +0x01:  mov    %esp,%ebp
0812d375 +0x03:  pop    %ebp
0812d376 +0x04:  ret
0812d377 +0x05:  nop
```

## 反编译 C

```c
// advancealtar::CharacData::sendTestCheckGage @ 0x812d372

/* advancealtar::CharacData::sendTestCheckGage() */

void advancealtar::CharacData::sendTestCheckGage(void)

{
  return;
}
```

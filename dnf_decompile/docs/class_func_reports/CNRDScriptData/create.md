# create

`_ZN14CNRDScriptData6createEv`

`CNRDScriptData::create()`

| 类 | 地址 |
|---|---|
| `CNRDScriptData` | `0x0807fabc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0807fabc  _ZN14CNRDScriptData6createEv
#           CNRDScriptData::create()
# range [0x0807fabc, 0x0807fac1]
0807fabc +0x00:  push   %ebp
0807fabd +0x01:  mov    %esp,%ebp
0807fabf +0x03:  pop    %ebp
0807fac0 +0x04:  ret
0807fac1 +0x05:  nop
```

## 反编译 C

```c
// CNRDScriptData::create @ 0x807fabc

/* CNRDScriptData::create() */

void CNRDScriptData::create(void)

{
  return;
}
```

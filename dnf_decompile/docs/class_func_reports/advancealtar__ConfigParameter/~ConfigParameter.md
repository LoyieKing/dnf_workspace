# ~ConfigParameter

`_ZN12advancealtar15ConfigParameterD1Ev`

`advancealtar::ConfigParameter::~ConfigParameter()`

| 类 | 地址 |
|---|---|
| `advancealtar::ConfigParameter` | `0x0889b6c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0889b6c6  _ZN12advancealtar15ConfigParameterD1Ev
#           advancealtar::ConfigParameter::~ConfigParameter()
# range [0x0889b6c6, 0x0889b6cb]
0889b6c6 +0x00:  push   %ebp
0889b6c7 +0x01:  mov    %esp,%ebp
0889b6c9 +0x03:  pop    %ebp
0889b6ca +0x04:  ret
0889b6cb +0x05:  nop
```

## 反编译 C

```c
// advancealtar::ConfigParameter::~ConfigParameter @ 0x889b6c6

/* advancealtar::ConfigParameter::~ConfigParameter() */

void __thiscall advancealtar::ConfigParameter::~ConfigParameter(ConfigParameter *this)

{
  return;
}
```

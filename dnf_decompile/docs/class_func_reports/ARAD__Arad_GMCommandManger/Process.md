# Process

`_ZN4ARAD20Arad_GMCommandManger7ProcessEP5CUserR17MSG_DEBUG_COMMAND`

`ARAD::Arad_GMCommandManger::Process(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_GMCommandManger` | `0x08198240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198240  _ZN4ARAD20Arad_GMCommandManger7ProcessEP5CUserR17MSG_DEBUG_COMMAND
#           ARAD::Arad_GMCommandManger::Process(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08198240, 0x08198249]
08198240 +0x00:  push   %ebp
08198241 +0x01:  mov    %esp,%ebp
08198243 +0x03:  mov    $0x1,%eax
08198248 +0x08:  pop    %ebp
08198249 +0x09:  ret
```

## 反编译 C

```c
// ARAD::Arad_GMCommandManger::Process @ 0x8198240

/* ARAD::Arad_GMCommandManger::Process(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 ARAD::Arad_GMCommandManger::Process(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  return 1;
}
```

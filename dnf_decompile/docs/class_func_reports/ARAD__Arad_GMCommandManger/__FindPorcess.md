# __FindPorcess

`_ZN4ARAD20Arad_GMCommandManger13__FindPorcessE18ENUM_DEBUG_COMMAND`

`ARAD::Arad_GMCommandManger::__FindPorcess(ENUM_DEBUG_COMMAND)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_GMCommandManger` | `0x0819824a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819824a  _ZN4ARAD20Arad_GMCommandManger13__FindPorcessE18ENUM_DEBUG_COMMAND
#           ARAD::Arad_GMCommandManger::__FindPorcess(ENUM_DEBUG_COMMAND)
# range [0x0819824a, 0x08198253]
0819824a +0x00:  push   %ebp
0819824b +0x01:  mov    %esp,%ebp
0819824d +0x03:  mov    $0x0,%eax
08198252 +0x08:  pop    %ebp
08198253 +0x09:  ret
```

## 反编译 C

```c
// ARAD::Arad_GMCommandManger::__FindPorcess @ 0x819824a

/* ARAD::Arad_GMCommandManger::__FindPorcess(ENUM_DEBUG_COMMAND) */

undefined4 ARAD::Arad_GMCommandManger::__FindPorcess(void)

{
  return 0;
}
```

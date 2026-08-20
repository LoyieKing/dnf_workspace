# getGrowthCreatureEventdata

`_ZN5CUser26getGrowthCreatureEventdataEv`

`CUser::getGrowthCreatureEventdata()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08691dbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08691dbc  _ZN5CUser26getGrowthCreatureEventdataEv
#           CUser::getGrowthCreatureEventdata()
# range [0x08691dbc, 0x08691dc9]
08691dbc +0x00:  push   %ebp
08691dbd +0x01:  mov    %esp,%ebp
08691dbf +0x03:  mov    0x8(%ebp),%eax
08691dc2 +0x06:  add    $0x8ebf8,%eax
08691dc7 +0x0b:  pop    %ebp
08691dc8 +0x0c:  ret
08691dc9 +0x0d:  nop
```

## 反编译 C

```c
// CUser::getGrowthCreatureEventdata @ 0x8691dbc

/* CUser::getGrowthCreatureEventdata() */

CUser * __thiscall CUser::getGrowthCreatureEventdata(CUser *this)

{
  return this + 0x8ebf8;
}
```

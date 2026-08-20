# ~CBitManager

`_ZN11CBitManagerD1Ev`

`CBitManager::~CBitManager()`

| 类 | 地址 |
|---|---|
| `CBitManager` | `0x0831c0c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831c0c8  _ZN11CBitManagerD1Ev
#           CBitManager::~CBitManager()
# range [0x0831c0c8, 0x0831c0cd]
0831c0c8 +0x00:  push   %ebp
0831c0c9 +0x01:  mov    %esp,%ebp
0831c0cb +0x03:  pop    %ebp
0831c0cc +0x04:  ret
0831c0cd +0x05:  nop
```

## 反编译 C

```c
// CBitManager::~CBitManager @ 0x831c0c8

/* CBitManager::~CBitManager() */

void __thiscall CBitManager::~CBitManager(CBitManager *this)

{
  return;
}
```

# ~CConditionEventManager

`_ZN22CConditionEventManagerD1Ev`

`CConditionEventManager::~CConditionEventManager()`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x0833484a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833484a  _ZN22CConditionEventManagerD1Ev
#           CConditionEventManager::~CConditionEventManager()
# range [0x0833484a, 0x0833484f]
0833484a +0x00:  push   %ebp
0833484b +0x01:  mov    %esp,%ebp
0833484d +0x03:  pop    %ebp
0833484e +0x04:  ret
0833484f +0x05:  nop
```

## 反编译 C

```c
// CConditionEventManager::~CConditionEventManager @ 0x833484a

/* CConditionEventManager::~CConditionEventManager() */

void __thiscall CConditionEventManager::~CConditionEventManager(CConditionEventManager *this)

{
  return;
}
```

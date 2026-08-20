# CConditionEventManager

`_ZN22CConditionEventManagerC1Ev`

`CConditionEventManager::CConditionEventManager()`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x08334844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08334844  _ZN22CConditionEventManagerC1Ev
#           CConditionEventManager::CConditionEventManager()
# range [0x08334844, 0x08334849]
08334844 +0x00:  push   %ebp
08334845 +0x01:  mov    %esp,%ebp
08334847 +0x03:  pop    %ebp
08334848 +0x04:  ret
08334849 +0x05:  nop
```

## 反编译 C

```c
// CConditionEventManager::CConditionEventManager @ 0x8334844

/* CConditionEventManager::CConditionEventManager() */

void __thiscall CConditionEventManager::CConditionEventManager(CConditionEventManager *this)

{
  return;
}
```

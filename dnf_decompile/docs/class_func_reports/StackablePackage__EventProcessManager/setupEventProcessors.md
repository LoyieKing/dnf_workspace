# setupEventProcessors

`_ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv`

`StackablePackage::EventProcessManager::setupEventProcessors()`

| 类 | 地址 |
|---|---|
| `StackablePackage::EventProcessManager` | `0x082817c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082817c4  _ZN16StackablePackage19EventProcessManager20setupEventProcessorsEv
#           StackablePackage::EventProcessManager::setupEventProcessors()
# range [0x082817c4, 0x082817c9]
082817c4 +0x00:  push   %ebp
082817c5 +0x01:  mov    %esp,%ebp
082817c7 +0x03:  pop    %ebp
082817c8 +0x04:  ret
082817c9 +0x05:  nop
```

## 反编译 C

```c
// StackablePackage::EventProcessManager::setupEventProcessors @ 0x82817c4

/* StackablePackage::EventProcessManager::setupEventProcessors() */

void StackablePackage::EventProcessManager::setupEventProcessors(void)

{
  return;
}
```

# onDungeonClear

`_ZN5CUser14onDungeonClearEb`

`CUser::onDungeonClear(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086802aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086802aa  _ZN5CUser14onDungeonClearEb
#           CUser::onDungeonClear(bool)
# range [0x086802aa, 0x086802b7]
086802aa +0x00:  push   %ebp
086802ab +0x01:  mov    %esp,%ebp
086802ad +0x03:  sub    $0x4,%esp
086802b0 +0x06:  mov    0xc(%ebp),%eax
086802b3 +0x09:  mov    %al,-0x4(%ebp)
086802b6 +0x0c:  leave
086802b7 +0x0d:  ret
```

## 反编译 C

```c
// CUser::onDungeonClear @ 0x86802aa

/* CUser::onDungeonClear(bool) */

void CUser::onDungeonClear(bool param_1)

{
  return;
}
```

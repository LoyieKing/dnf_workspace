# GetUserMaxLevel

`_ZN5CUser15GetUserMaxLevelEv`

`CUser::GetUserMaxLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fe1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fe1e  _ZN5CUser15GetUserMaxLevelEv
#           CUser::GetUserMaxLevel()
# range [0x0868fe1e, 0x0868fe2b]
0868fe1e +0x00:  push   %ebp
0868fe1f +0x01:  mov    %esp,%ebp
0868fe21 +0x03:  mov    0x8(%ebp),%eax
0868fe24 +0x06:  mov    0x8ebd8(%eax),%eax
0868fe2a +0x0c:  pop    %ebp
0868fe2b +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetUserMaxLevel @ 0x868fe1e

/* CUser::GetUserMaxLevel() */

undefined4 __thiscall CUser::GetUserMaxLevel(CUser *this)

{
  return *(undefined4 *)(this + 0x8ebd8);
}
```

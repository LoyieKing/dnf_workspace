# GetManageLevel

`_ZN5CUser14GetManageLevelEv`

`CUser::GetManageLevel()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fe02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fe02  _ZN5CUser14GetManageLevelEv
#           CUser::GetManageLevel()
# range [0x0868fe02, 0x0868fe0f]
0868fe02 +0x00:  push   %ebp
0868fe03 +0x01:  mov    %esp,%ebp
0868fe05 +0x03:  mov    0x8(%ebp),%eax
0868fe08 +0x06:  mov    0x8ebd0(%eax),%eax
0868fe0e +0x0c:  pop    %ebp
0868fe0f +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetManageLevel @ 0x868fe02

/* CUser::GetManageLevel() */

undefined4 __thiscall CUser::GetManageLevel(CUser *this)

{
  return *(undefined4 *)(this + 0x8ebd0);
}
```

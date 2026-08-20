# GetManagePoint

`_ZN5CUser14GetManagePointEv`

`CUser::GetManagePoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868fe10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868fe10  _ZN5CUser14GetManagePointEv
#           CUser::GetManagePoint()
# range [0x0868fe10, 0x0868fe1d]
0868fe10 +0x00:  push   %ebp
0868fe11 +0x01:  mov    %esp,%ebp
0868fe13 +0x03:  mov    0x8(%ebp),%eax
0868fe16 +0x06:  mov    0x8ebd4(%eax),%eax
0868fe1c +0x0c:  pop    %ebp
0868fe1d +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetManagePoint @ 0x868fe10

/* CUser::GetManagePoint() */

undefined4 __thiscall CUser::GetManagePoint(CUser *this)

{
  return *(undefined4 *)(this + 0x8ebd4);
}
```

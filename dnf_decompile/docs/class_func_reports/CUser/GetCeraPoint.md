# GetCeraPoint

`_ZN5CUser12GetCeraPointEv`

`CUser::GetCeraPoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692af6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692af6  _ZN5CUser12GetCeraPointEv
#           CUser::GetCeraPoint()
# range [0x08692af6, 0x08692b03]
08692af6 +0x00:  push   %ebp
08692af7 +0x01:  mov    %esp,%ebp
08692af9 +0x03:  mov    0x8(%ebp),%eax
08692afc +0x06:  mov    0x8eadc(%eax),%eax
08692b02 +0x0c:  pop    %ebp
08692b03 +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetCeraPoint @ 0x8692af6

/* CUser::GetCeraPoint() */

undefined4 __thiscall CUser::GetCeraPoint(CUser *this)

{
  return *(undefined4 *)(this + 0x8eadc);
}
```

# GetMileage

`_ZN5CUser10GetMileageEv`

`CUser::GetMileage()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08650a94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08650a94  _ZN5CUser10GetMileageEv
#           CUser::GetMileage()
# range [0x08650a94, 0x08650aa1]
08650a94 +0x00:  push   %ebp
08650a95 +0x01:  mov    %esp,%ebp
08650a97 +0x03:  mov    0x8(%ebp),%eax
08650a9a +0x06:  mov    0x796d4(%eax),%eax
08650aa0 +0x0c:  pop    %ebp
08650aa1 +0x0d:  ret
```

## 反编译 C

```c
// CUser::GetMileage @ 0x8650a94

/* CUser::GetMileage() */

undefined4 __thiscall CUser::GetMileage(CUser *this)

{
  return *(undefined4 *)(this + 0x796d4);
}
```

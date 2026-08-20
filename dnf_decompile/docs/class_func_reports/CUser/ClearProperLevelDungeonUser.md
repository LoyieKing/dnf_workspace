# ClearProperLevelDungeonUser

`_ZN5CUser27ClearProperLevelDungeonUserEv`

`CUser::ClearProperLevelDungeonUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f5da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f5da  _ZN5CUser27ClearProperLevelDungeonUserEv
#           CUser::ClearProperLevelDungeonUser()
# range [0x0868f5da, 0x0868f5e9]
0868f5da +0x00:  push   %ebp
0868f5db +0x01:  mov    %esp,%ebp
0868f5dd +0x03:  mov    0x8(%ebp),%eax
0868f5e0 +0x06:  movb   $0x0,0x8eb99(%eax)
0868f5e7 +0x0d:  pop    %ebp
0868f5e8 +0x0e:  ret
0868f5e9 +0x0f:  nop
```

## 反编译 C

```c
// CUser::ClearProperLevelDungeonUser @ 0x868f5da

/* CUser::ClearProperLevelDungeonUser() */

void __thiscall CUser::ClearProperLevelDungeonUser(CUser *this)

{
  this[0x8eb99] = (CUser)0x0;
  return;
}
```

# IsProperLevelDungeonUser

`_ZN5CUser24IsProperLevelDungeonUserEv`

`CUser::IsProperLevelDungeonUser()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f5ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f5ea  _ZN5CUser24IsProperLevelDungeonUserEv
#           CUser::IsProperLevelDungeonUser()
# range [0x0868f5ea, 0x0868f5f9]
0868f5ea +0x00:  push   %ebp
0868f5eb +0x01:  mov    %esp,%ebp
0868f5ed +0x03:  mov    0x8(%ebp),%eax
0868f5f0 +0x06:  movzbl 0x8eb99(%eax),%eax
0868f5f7 +0x0d:  pop    %ebp
0868f5f8 +0x0e:  ret
0868f5f9 +0x0f:  nop
```

## 反编译 C

```c
// CUser::IsProperLevelDungeonUser @ 0x868f5ea

/* CUser::IsProperLevelDungeonUser() */

CUser __thiscall CUser::IsProperLevelDungeonUser(CUser *this)

{
  return this[0x8eb99];
}
```

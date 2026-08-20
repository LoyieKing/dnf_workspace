# isDungeonClearHackCheck

`_ZN5CUser23isDungeonClearHackCheckEv`

`CUser::isDungeonClearHackCheck()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08649bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08649bdc  _ZN5CUser23isDungeonClearHackCheckEv
#           CUser::isDungeonClearHackCheck()
# range [0x08649bdc, 0x08649bfb]
08649bdc +0x00:  push   %ebp
08649bdd +0x01:  mov    %esp,%ebp
08649bdf +0x03:  mov    0x8(%ebp),%eax
08649be2 +0x06:  movzbl 0x8e93c(%eax),%eax
08649be9 +0x0d:  cmp    $0x3,%al
08649beb +0x0f:  jne    08649bf4 <+0x18>
08649bed +0x11:  mov    $0x1,%eax
08649bf2 +0x16:  jmp    08649bf9 <+0x1d>
08649bf4 +0x18:  mov    $0x0,%eax
08649bf9 +0x1d:  pop    %ebp
08649bfa +0x1e:  ret
08649bfb +0x1f:  nop
```

## 反编译 C

```c
// CUser::isDungeonClearHackCheck @ 0x8649bdc

/* CUser::isDungeonClearHackCheck() */

bool __thiscall CUser::isDungeonClearHackCheck(CUser *this)

{
  return this[0x8e93c] == (CUser)0x3;
}
```

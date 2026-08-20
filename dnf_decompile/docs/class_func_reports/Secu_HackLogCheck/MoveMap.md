# MoveMap

`_ZN17Secu_HackLogCheck7MoveMapEv`

`Secu_HackLogCheck::MoveMap()`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheck` | `0x0827a7f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a7f4  _ZN17Secu_HackLogCheck7MoveMapEv
#           Secu_HackLogCheck::MoveMap()
# range [0x0827a7f4, 0x0827a81b]
0827a7f4 +0x00:  push   %ebp
0827a7f5 +0x01:  mov    %esp,%ebp
0827a7f7 +0x03:  sub    $0x18,%esp
0827a7fa +0x06:  mov    0x8(%ebp),%eax
0827a7fd +0x09:  movb   $0x1,0x38(%eax)
0827a801 +0x0d:  mov    0x8(%ebp),%eax
0827a804 +0x10:  movb   $0x1,0x39(%eax)
0827a808 +0x14:  mov    0x8(%ebp),%eax
0827a80b +0x17:  movb   $0x1,0x3a(%eax)
0827a80f +0x1b:  mov    0x8(%ebp),%eax
0827a812 +0x1e:  mov    %eax,(%esp)
0827a815 +0x21:  call   0827ac7a <_ZN17Secu_MonsterCheck5ResetEv>  ; Secu_MonsterCheck::Reset()
0827a81a +0x26:  leave
0827a81b +0x27:  ret
```

## 反编译 C

```c
// Secu_HackLogCheck::MoveMap @ 0x827a7f4

/* Secu_HackLogCheck::MoveMap() */

void __thiscall Secu_HackLogCheck::MoveMap(Secu_HackLogCheck *this)

{
  this[0x38] = (Secu_HackLogCheck)0x1;
  this[0x39] = (Secu_HackLogCheck)0x1;
  this[0x3a] = (Secu_HackLogCheck)0x1;
  Secu_MonsterCheck::Reset((Secu_MonsterCheck *)this);
  return;
}
```

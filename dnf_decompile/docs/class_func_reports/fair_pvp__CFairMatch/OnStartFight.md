# OnStartFight

`_ZN8fair_pvp10CFairMatch12OnStartFightEv`

`fair_pvp::CFairMatch::OnStartFight()`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08564952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08564952  _ZN8fair_pvp10CFairMatch12OnStartFightEv
#           fair_pvp::CFairMatch::OnStartFight()
# range [0x08564952, 0x08564961]
08564952 +0x00:  push   %ebp
08564953 +0x01:  mov    %esp,%ebp
08564955 +0x03:  mov    0x8(%ebp),%eax
08564958 +0x06:  movl   $0x5,0x4(%eax)
0856495f +0x0d:  pop    %ebp
08564960 +0x0e:  ret
08564961 +0x0f:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnStartFight @ 0x8564952

/* fair_pvp::CFairMatch::OnStartFight() */

void __thiscall fair_pvp::CFairMatch::OnStartFight(CFairMatch *this)

{
  *(undefined4 *)(this + 4) = 5;
  return;
}
```

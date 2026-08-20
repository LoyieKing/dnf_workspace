# RequestMap

`_ZN12CLeagueMatch10RequestMapERsR15PVP_BATTLE_MODE`

`CLeagueMatch::RequestMap(short&, PVP_BATTLE_MODE&)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d096  _ZN12CLeagueMatch10RequestMapERsR15PVP_BATTLE_MODE
#           CLeagueMatch::RequestMap(short&, PVP_BATTLE_MODE&)
# range [0x0855d096, 0x0855d0bb]
0855d096 +0x00:  push   %ebp
0855d097 +0x01:  mov    %esp,%ebp
0855d099 +0x03:  mov    0xc(%ebp),%eax
0855d09c +0x06:  movw   $0x3,(%eax)
0855d0a1 +0x0b:  mov    0x10(%ebp),%eax
0855d0a4 +0x0e:  mov    (%eax),%eax
0855d0a6 +0x10:  cmp    $0x6,%eax
0855d0a9 +0x13:  je     0855d0ba <+0x24>
0855d0ab +0x15:  movzbl &_ZN12CLeagueMatch12nBattleMode_E,%eax
0855d0b2 +0x1c:  movzbl %al,%edx
0855d0b5 +0x1f:  mov    0x10(%ebp),%eax
0855d0b8 +0x22:  mov    %edx,(%eax)
0855d0ba +0x24:  pop    %ebp
0855d0bb +0x25:  ret
```

## 反编译 C

```c
// CLeagueMatch::RequestMap @ 0x855d096

/* CLeagueMatch::RequestMap(short&, PVP_BATTLE_MODE&) */

void __thiscall CLeagueMatch::RequestMap(CLeagueMatch *this,short *param_1,PVP_BATTLE_MODE *param_2)

{
  *param_1 = 3;
  if (*(int *)param_2 != 6) {
    *(uint *)param_2 = (uint)nBattleMode_;
  }
  return;
}
```

# CheckSeat

`_ZN12CLeagueMatch9CheckSeatEi`

`CLeagueMatch::CheckSeat(int)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d058` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d058  _ZN12CLeagueMatch9CheckSeatEi
#           CLeagueMatch::CheckSeat(int)
# range [0x0855d058, 0x0855d06f]
0855d058 +0x00:  push   %ebp
0855d059 +0x01:  mov    %esp,%ebp
0855d05b +0x03:  cmpl   $0x2,0xc(%ebp)
0855d05f +0x07:  jne    0855d068 <+0x10>
0855d061 +0x09:  mov    $0x0,%eax
0855d066 +0x0e:  jmp    0855d06d <+0x15>
0855d068 +0x10:  mov    $0x1,%eax
0855d06d +0x15:  pop    %ebp
0855d06e +0x16:  ret
0855d06f +0x17:  nop
```

## 反编译 C

```c
// CLeagueMatch::CheckSeat @ 0x855d058

/* CLeagueMatch::CheckSeat(int) */

bool __thiscall CLeagueMatch::CheckSeat(CLeagueMatch *this,int param_1)

{
  return param_1 != 2;
}
```

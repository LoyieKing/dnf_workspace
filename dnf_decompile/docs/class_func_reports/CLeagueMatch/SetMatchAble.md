# SetMatchAble

`_ZN12CLeagueMatch12SetMatchAbleEb`

`CLeagueMatch::SetMatchAble(bool)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855d07e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855d07e  _ZN12CLeagueMatch12SetMatchAbleEb
#           CLeagueMatch::SetMatchAble(bool)
# range [0x0855d07e, 0x0855d095]
0855d07e +0x00:  push   %ebp
0855d07f +0x01:  mov    %esp,%ebp
0855d081 +0x03:  sub    $0x4,%esp
0855d084 +0x06:  mov    0x8(%ebp),%eax
0855d087 +0x09:  mov    %al,-0x4(%ebp)
0855d08a +0x0c:  movzbl -0x4(%ebp),%eax
0855d08e +0x10:  mov    %al,&_ZN12CLeagueMatch11bMatchable_E
0855d093 +0x15:  leave
0855d094 +0x16:  ret
0855d095 +0x17:  nop
```

## 反编译 C

```c
// CLeagueMatch::SetMatchAble @ 0x855d07e

/* CLeagueMatch::SetMatchAble(bool) */

void CLeagueMatch::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}
```

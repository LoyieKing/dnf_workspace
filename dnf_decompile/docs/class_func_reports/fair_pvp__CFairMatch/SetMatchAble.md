# SetMatchAble

`_ZN8fair_pvp10CFairMatch12SetMatchAbleEb`

`fair_pvp::CFairMatch::SetMatchAble(bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08562b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08562b96  _ZN8fair_pvp10CFairMatch12SetMatchAbleEb
#           fair_pvp::CFairMatch::SetMatchAble(bool)
# range [0x08562b96, 0x08562bad]
08562b96 +0x00:  push   %ebp
08562b97 +0x01:  mov    %esp,%ebp
08562b99 +0x03:  sub    $0x4,%esp
08562b9c +0x06:  mov    0x8(%ebp),%eax
08562b9f +0x09:  mov    %al,-0x4(%ebp)
08562ba2 +0x0c:  movzbl -0x4(%ebp),%eax
08562ba6 +0x10:  mov    %al,&_ZN8fair_pvp10CFairMatch11bMatchable_E
08562bab +0x15:  leave
08562bac +0x16:  ret
08562bad +0x17:  nop
```

## 反编译 C

```c
// fair_pvp::CFairMatch::SetMatchAble @ 0x8562b96

/* fair_pvp::CFairMatch::SetMatchAble(bool) */

void fair_pvp::CFairMatch::SetMatchAble(bool param_1)

{
  bMatchable_ = param_1;
  return;
}
```

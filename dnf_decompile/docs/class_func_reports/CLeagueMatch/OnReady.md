# OnReady

`_ZN12CLeagueMatch7OnReadyEP5CUserb`

`CLeagueMatch::OnReady(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e52a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e52a  _ZN12CLeagueMatch7OnReadyEP5CUserb
#           CLeagueMatch::OnReady(CUser*, bool)
# range [0x0855e52a, 0x0855e559]
0855e52a +0x00:  push   %ebp
0855e52b +0x01:  mov    %esp,%ebp
0855e52d +0x03:  sub    $0x4,%esp
0855e530 +0x06:  mov    0x10(%ebp),%eax
0855e533 +0x09:  mov    %al,-0x4(%ebp)
0855e536 +0x0c:  movzbl -0x4(%ebp),%eax
0855e53a +0x10:  xor    $0x1,%eax
0855e53d +0x13:  test   %al,%al
0855e53f +0x15:  je     0855e553 <+0x29>
0855e541 +0x17:  mov    0x8(%ebp),%eax
0855e544 +0x1a:  mov    0x4(%eax),%eax
0855e547 +0x1d:  cmp    $0x4,%eax
0855e54a +0x20:  jne    0855e553 <+0x29>
0855e54c +0x22:  mov    $0x0,%eax
0855e551 +0x27:  jmp    0855e558 <+0x2e>
0855e553 +0x29:  mov    $0x1,%eax
0855e558 +0x2e:  leave
0855e559 +0x2f:  ret
```

## 反编译 C

```c
// CLeagueMatch::OnReady @ 0x855e52a

/* CLeagueMatch::OnReady(CUser*, bool) */

undefined4 __thiscall CLeagueMatch::OnReady(CLeagueMatch *this,CUser *param_1,bool param_2)

{
  undefined4 uVar1;
  
  if ((param_2) || (*(int *)(this + 4) != 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

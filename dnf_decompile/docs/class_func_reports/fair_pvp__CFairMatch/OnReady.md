# OnReady

`_ZN8fair_pvp10CFairMatch7OnReadyEP5CUserb`

`fair_pvp::CFairMatch::OnReady(CUser*, bool)`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairMatch` | `0x08565018` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08565018  _ZN8fair_pvp10CFairMatch7OnReadyEP5CUserb
#           fair_pvp::CFairMatch::OnReady(CUser*, bool)
# range [0x08565018, 0x08565047]
08565018 +0x00:  push   %ebp
08565019 +0x01:  mov    %esp,%ebp
0856501b +0x03:  sub    $0x4,%esp
0856501e +0x06:  mov    0x10(%ebp),%eax
08565021 +0x09:  mov    %al,-0x4(%ebp)
08565024 +0x0c:  movzbl -0x4(%ebp),%eax
08565028 +0x10:  xor    $0x1,%eax
0856502b +0x13:  test   %al,%al
0856502d +0x15:  je     08565041 <+0x29>
0856502f +0x17:  mov    0x8(%ebp),%eax
08565032 +0x1a:  mov    0x4(%eax),%eax
08565035 +0x1d:  cmp    $0x4,%eax
08565038 +0x20:  jne    08565041 <+0x29>
0856503a +0x22:  mov    $0x0,%eax
0856503f +0x27:  jmp    08565046 <+0x2e>
08565041 +0x29:  mov    $0x1,%eax
08565046 +0x2e:  leave
08565047 +0x2f:  ret
```

## 反编译 C

```c
// fair_pvp::CFairMatch::OnReady @ 0x8565018

/* fair_pvp::CFairMatch::OnReady(CUser*, bool) */

undefined4 __thiscall fair_pvp::CFairMatch::OnReady(CFairMatch *this,CUser *param_1,bool param_2)

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

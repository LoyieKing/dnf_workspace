# GetParty

`_ZN5CUser8GetPartyEv`

`CUser::GetParty()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865514c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865514c  _ZN5CUser8GetPartyEv
#           CUser::GetParty()
# range [0x0865514c, 0x0865518d]
0865514c +0x00:  push   %ebp
0865514d +0x01:  mov    %esp,%ebp
0865514f +0x03:  push   %ebx
08655150 +0x04:  sub    $0x14,%esp
08655153 +0x07:  mov    0x8(%ebp),%eax
08655156 +0x0a:  movzwl 0x8d004(%eax),%eax
0865515d +0x11:  test   %ax,%ax
08655160 +0x14:  js     08655182 <+0x36>
08655162 +0x16:  mov    0x8(%ebp),%eax
08655165 +0x19:  movzwl 0x8d004(%eax),%eax
0865516c +0x20:  movswl %ax,%ebx
0865516f +0x23:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
08655174 +0x28:  mov    %ebx,0x4(%esp)
08655178 +0x2c:  mov    %eax,(%esp)
0865517b +0x2f:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
08655180 +0x34:  jmp    08655187 <+0x3b>
08655182 +0x36:  mov    $0x0,%eax
08655187 +0x3b:  add    $0x14,%esp
0865518a +0x3e:  pop    %ebx
0865518b +0x3f:  pop    %ebp
0865518c +0x40:  ret
0865518d +0x41:  nop
```

## 反编译 C

```c
// CUser::GetParty @ 0x865514c

/* CUser::GetParty() */

undefined4 __thiscall CUser::GetParty(CUser *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(this + 0x8d004) < 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = G_CGameManager();
    uVar2 = CGameManager::GetParty(iVar1);
  }
  return uVar2;
}
```

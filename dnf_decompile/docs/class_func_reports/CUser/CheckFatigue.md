# CheckFatigue

`_ZN5CUser12CheckFatigueEv`

`CUser::CheckFatigue()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656500  _ZN5CUser12CheckFatigueEv
#           CUser::CheckFatigue()
# range [0x08656500, 0x0865653f]
08656500 +0x00:  push   %ebp
08656501 +0x01:  mov    %esp,%ebp
08656503 +0x03:  push   %ebx
08656504 +0x04:  sub    $0x14,%esp
08656507 +0x07:  mov    0x8(%ebp),%eax
0865650a +0x0a:  mov    0x704ac(%eax),%eax
08656510 +0x10:  test   %eax,%eax
08656512 +0x12:  jne    0865651b <+0x1b>
08656514 +0x14:  mov    $0x1,%eax
08656519 +0x19:  jmp    08656539 <+0x39>
0865651b +0x1b:  mov    0x8(%ebp),%eax
0865651e +0x1e:  mov    %eax,(%esp)
08656521 +0x21:  call   08657766 <_ZNK5CUser24getCurCharacTotalFatigueEv>  ; CUser::getCurCharacTotalFatigue() const
08656526 +0x26:  mov    %eax,%ebx
08656528 +0x28:  mov    0x8(%ebp),%eax
0865652b +0x2b:  mov    %eax,(%esp)
0865652e +0x2e:  call   08657804 <_ZNK5CUser27getCurCharacTotalMaxFatigueEv>  ; CUser::getCurCharacTotalMaxFatigue() const
08656533 +0x33:  cmp    %ax,%bx
08656536 +0x36:  setb   %al
08656539 +0x39:  add    $0x14,%esp
0865653c +0x3c:  pop    %ebx
0865653d +0x3d:  pop    %ebp
0865653e +0x3e:  ret
0865653f +0x3f:  nop
```

## 反编译 C

```c
// CUser::CheckFatigue @ 0x8656500

/* CUser::CheckFatigue() */

bool __thiscall CUser::CheckFatigue(CUser *this)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  
  if (*(int *)(this + 0x704ac) == 0) {
    bVar3 = true;
  }
  else {
    uVar1 = getCurCharacTotalFatigue(this);
    uVar2 = getCurCharacTotalMaxFatigue(this);
    bVar3 = uVar1 < uVar2;
  }
  return bVar3;
}
```

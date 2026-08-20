# checkTime

`_ZN13user_creature14COverSkillTime9checkTimeEv`

`user_creature::COverSkillTime::checkTime()`

| 类 | 地址 |
|---|---|
| `user_creature::COverSkillTime` | `0x0833d65e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833d65e  _ZN13user_creature14COverSkillTime9checkTimeEv
#           user_creature::COverSkillTime::checkTime()
# range [0x0833d65e, 0x0833d6c1]
0833d65e +0x00:  push   %ebp
0833d65f +0x01:  mov    %esp,%ebp
0833d661 +0x03:  sub    $0x38,%esp
0833d664 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0833d66b +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0833d670 +0x12:  mov    %eax,-0x10(%ebp)
0833d673 +0x15:  mov    0x8(%ebp),%eax
0833d676 +0x18:  mov    (%eax),%eax
0833d678 +0x1a:  mov    -0x10(%ebp),%edx
0833d67b +0x1d:  mov    %edx,%ecx
0833d67d +0x1f:  sub    %eax,%ecx
0833d67f +0x21:  mov    %ecx,%eax
0833d681 +0x23:  mov    %eax,-0x1c(%ebp)
0833d684 +0x26:  fildl  -0x1c(%ebp)
0833d687 +0x29:  fstps  -0xc(%ebp)
0833d68a +0x2c:  flds   -0xc(%ebp)
0833d68d +0x2f:  fldz
0833d68f +0x31:  fxch   %st(1)
0833d691 +0x33:  fucompp
0833d693 +0x35:  fnstsw %ax
0833d695 +0x37:  sahf
0833d696 +0x38:  seta   %al
0833d699 +0x3b:  test   %al,%al
0833d69b +0x3d:  je     0833d6bb <+0x5d>
0833d69d +0x3f:  flds   -0xc(%ebp)
0833d6a0 +0x42:  flds   &data#01cff917(.rodata)
0833d6a6 +0x48:  fucompp
0833d6a8 +0x4a:  fnstsw %ax
0833d6aa +0x4c:  test   $0x45,%ah
0833d6ad +0x4f:  sete   %al
0833d6b0 +0x52:  test   %al,%al
0833d6b2 +0x54:  je     0833d6bb <+0x5d>
0833d6b4 +0x56:  mov    $0x1,%eax
0833d6b9 +0x5b:  jmp    0833d6c0 <+0x62>
0833d6bb +0x5d:  mov    $0x0,%eax
0833d6c0 +0x62:  leave
0833d6c1 +0x63:  ret
```

## 反编译 C

```c
// user_creature::COverSkillTime::checkTime @ 0x833d65e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::COverSkillTime::checkTime() */

undefined4 __thiscall user_creature::COverSkillTime::checkTime(COverSkillTime *this)

{
  int iVar1;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if ((0.0 < (float)(iVar1 - *(int *)this)) && ((float)(iVar1 - *(int *)this) < _DAT_08c2f468)) {
    return 1;
  }
  return 0;
}
```

# set_end_cool_time

`_ZN8Teleport17set_end_cool_timeEP5CUser`

`Teleport::set_end_cool_time(CUser*)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283dc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283dc2  _ZN8Teleport17set_end_cool_timeEP5CUser
#           Teleport::set_end_cool_time(CUser*)
# range [0x08283dc2, 0x08283e23]
08283dc2 +0x00:  push   %ebp
08283dc3 +0x01:  mov    %esp,%ebp
08283dc5 +0x03:  sub    $0x28,%esp
08283dc8 +0x06:  cmpl   $0x0,0xc(%ebp)
08283dcc +0x0a:  je     08283e20 <+0x5e>
08283dce +0x0c:  movl   $0x2,0x4(%esp)
08283dd6 +0x14:  mov    0xc(%ebp),%eax
08283dd9 +0x17:  mov    %eax,(%esp)
08283ddc +0x1a:  call   0868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>  ; CUser::get_aura_avatar_option_value(int)
08283de1 +0x1f:  mov    0x8(%ebp),%edx
08283de4 +0x22:  mov    %eax,0x10(%edx)
08283de7 +0x25:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08283dee +0x2c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08283df3 +0x31:  mov    %eax,-0xc(%ebp)
08283df6 +0x34:  mov    0x8(%ebp),%eax
08283df9 +0x37:  mov    0x10(%eax),%eax
08283dfc +0x3a:  cmp    -0xc(%ebp),%eax
08283dff +0x3d:  jle    08283e14 <+0x52>
08283e01 +0x3f:  mov    0x8(%ebp),%eax
08283e04 +0x42:  mov    0x10(%eax),%eax
08283e07 +0x45:  mov    %eax,%edx
08283e09 +0x47:  sub    -0xc(%ebp),%edx
08283e0c +0x4a:  mov    0x8(%ebp),%eax
08283e0f +0x4d:  mov    %edx,0x10(%eax)
08283e12 +0x50:  jmp    08283e21 <+0x5f>
08283e14 +0x52:  mov    0x8(%ebp),%eax
08283e17 +0x55:  movl   $0x0,0x10(%eax)
08283e1e +0x5c:  jmp    08283e21 <+0x5f>
08283e20 +0x5e:  nop
08283e21 +0x5f:  leave
08283e22 +0x60:  ret
08283e23 +0x61:  nop
```

## 反编译 C

```c
// Teleport::set_end_cool_time @ 0x8283dc2

/* Teleport::set_end_cool_time(CUser*) */

void __thiscall Teleport::set_end_cool_time(Teleport *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (CUser *)0x0) {
    uVar1 = CUser::get_aura_avatar_option_value(param_1,2);
    *(undefined4 *)(this + 0x10) = uVar1;
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar2 < *(int *)(this + 0x10)) {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) - iVar2;
    }
    else {
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}
```

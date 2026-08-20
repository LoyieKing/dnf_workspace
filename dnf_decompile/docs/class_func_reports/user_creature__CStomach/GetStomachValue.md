# GetStomachValue

`_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb`

`user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)`

| 类 | 地址 |
|---|---|
| `user_creature::CStomach` | `0x08336cfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08336cfc  _ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb
#           user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
# range [0x08336cfc, 0x08336ded]
08336cfc +0x00:  push   %ebp
08336cfd +0x01:  mov    %esp,%ebp
08336cff +0x03:  sub    $0x48,%esp
08336d02 +0x06:  mov    0x10(%ebp),%eax
08336d05 +0x09:  mov    %al,-0x1c(%ebp)
08336d08 +0x0c:  movzbl -0x1c(%ebp),%eax
08336d0c +0x10:  xor    $0x1,%eax
08336d0f +0x13:  test   %al,%al
08336d11 +0x15:  je     08336d1d <+0x21>
08336d13 +0x17:  mov    $0x42c80000,%eax
08336d18 +0x1c:  jmp    08336de6 <+0xea>
08336d1d +0x21:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08336d24 +0x28:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08336d29 +0x2d:  mov    %eax,-0x10(%ebp)
08336d2c +0x30:  mov    0x8(%ebp),%eax
08336d2f +0x33:  mov    (%eax),%eax
08336d31 +0x35:  mov    -0x10(%ebp),%edx
08336d34 +0x38:  mov    %edx,%ecx
08336d36 +0x3a:  sub    %eax,%ecx
08336d38 +0x3c:  mov    %ecx,%eax
08336d3a +0x3e:  mov    %eax,-0x20(%ebp)
08336d3d +0x41:  fildl  -0x20(%ebp)
08336d40 +0x44:  fstps  -0xc(%ebp)
08336d43 +0x47:  mov    0xc(%ebp),%eax
08336d46 +0x4a:  cmp    $0x1,%eax
08336d49 +0x4d:  je     08336d5b <+0x5f>
08336d4b +0x4f:  cmp    $0x1,%eax
08336d4e +0x52:  jl     08336dd8 <+0xdc>
08336d54 +0x58:  cmp    $0x3,%eax
08336d57 +0x5b:  jg     08336dd8 <+0xdc>
08336d59 +0x5d:  jmp    08336d97 <+0x9b>
08336d5b +0x5f:  mov    0x8(%ebp),%eax
08336d5e +0x62:  flds   0x4(%eax)
08336d61 +0x65:  flds   -0xc(%ebp)
08336d64 +0x68:  flds   &data#2e7555a3(.rodata)
08336d6a +0x6e:  fdivrp %st,%st(1)
08336d6c +0x70:  faddp  %st,%st(1)
08336d6e +0x72:  mov    0x8(%ebp),%eax
08336d71 +0x75:  fstps  0x4(%eax)
08336d74 +0x78:  mov    0x8(%ebp),%eax
08336d77 +0x7b:  flds   0x4(%eax)
08336d7a +0x7e:  fldz
08336d7c +0x80:  fucompp
08336d7e +0x82:  fnstsw %ax
08336d80 +0x84:  test   $0x45,%ah
08336d83 +0x87:  sete   %al
08336d86 +0x8a:  test   %al,%al
08336d88 +0x8c:  je     08336dd7 <+0xdb>
08336d8a +0x8e:  mov    0x8(%ebp),%eax
08336d8d +0x91:  mov    $0x0,%edx
08336d92 +0x96:  mov    %edx,0x4(%eax)
08336d95 +0x99:  jmp    08336dd8 <+0xdc>
08336d97 +0x9b:  mov    0x8(%ebp),%eax
08336d9a +0x9e:  flds   0x4(%eax)
08336d9d +0xa1:  flds   -0xc(%ebp)
08336da0 +0xa4:  flds   &data#ffa9a045(.rodata)
08336da6 +0xaa:  fdivrp %st,%st(1)
08336da8 +0xac:  faddp  %st,%st(1)
08336daa +0xae:  mov    0x8(%ebp),%eax
08336dad +0xb1:  fstps  0x4(%eax)
08336db0 +0xb4:  mov    0x8(%ebp),%eax
08336db3 +0xb7:  flds   0x4(%eax)
08336db6 +0xba:  flds   &data#e466c33b(.rodata)
08336dbc +0xc0:  fxch   %st(1)
08336dbe +0xc2:  fucompp
08336dc0 +0xc4:  fnstsw %ax
08336dc2 +0xc6:  sahf
08336dc3 +0xc7:  seta   %al
08336dc6 +0xca:  test   %al,%al
08336dc8 +0xcc:  je     08336dd8 <+0xdc>
08336dca +0xce:  mov    0x8(%ebp),%eax
08336dcd +0xd1:  mov    $0x42c80000,%edx
08336dd2 +0xd6:  mov    %edx,0x4(%eax)
08336dd5 +0xd9:  jmp    08336dd8 <+0xdc>
08336dd7 +0xdb:  nop
08336dd8 +0xdc:  mov    0x8(%ebp),%eax
08336ddb +0xdf:  mov    -0x10(%ebp),%edx
08336dde +0xe2:  mov    %edx,(%eax)
08336de0 +0xe4:  mov    0x8(%ebp),%eax
08336de3 +0xe7:  mov    0x4(%eax),%eax
08336de6 +0xea:  mov    %eax,-0x2c(%ebp)
08336de9 +0xed:  flds   -0x2c(%ebp)
08336dec +0xf0:  leave
08336ded +0xf1:  ret
```

## 反编译 C

```c
// user_creature::CStomach::GetStomachValue @ 0x8336cfc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool) */

longdouble __thiscall
user_creature::CStomach::GetStomachValue(CStomach *this,int param_2,char param_3)

{
  float fVar1;
  int iVar2;
  
  if (param_3 == '\x01') {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (param_2 == 1) {
      *(float *)(this + 4) = (float)(iVar2 - *(int *)this) / _DAT_08c2f454 + *(float *)(this + 4);
      if (*(float *)(this + 4) < 0.0) {
        *(undefined4 *)(this + 4) = 0;
      }
    }
    else if (((0 < param_2) && (param_2 < 4)) &&
            (*(float *)(this + 4) =
                  (float)(iVar2 - *(int *)this) / _DAT_08c2f458 + *(float *)(this + 4),
            _DAT_08c2f450 < *(float *)(this + 4))) {
      *(undefined4 *)(this + 4) = 0x42c80000;
    }
    *(int *)this = iVar2;
    fVar1 = *(float *)(this + 4);
  }
  else {
    fVar1 = 100.0;
  }
  return (longdouble)fVar1;
}
```

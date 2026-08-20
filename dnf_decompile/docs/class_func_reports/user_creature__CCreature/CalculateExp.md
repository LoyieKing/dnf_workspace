# CalculateExp

`_ZN13user_creature9CCreature12CalculateExpEiRbP5CUser`

`user_creature::CCreature::CalculateExp(int, bool&, CUser*)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083377b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083377b6  _ZN13user_creature9CCreature12CalculateExpEiRbP5CUser
#           user_creature::CCreature::CalculateExp(int, bool&, CUser*)
# range [0x083377b6, 0x083378a9]
083377b6 +0x00:  push   %ebp
083377b7 +0x01:  mov    %esp,%ebp
083377b9 +0x03:  sub    $0x38,%esp
083377bc +0x06:  mov    $0x0,%eax
083377c1 +0x0b:  mov    %eax,-0x18(%ebp)
083377c4 +0x0e:  mov    $0x0,%eax
083377c9 +0x13:  mov    %eax,-0x14(%ebp)
083377cc +0x16:  mov    0x14(%ebp),%eax
083377cf +0x19:  mov    %eax,0x8(%esp)
083377d3 +0x1d:  movl   $0x17,0x4(%esp)
083377db +0x25:  mov    0x8(%ebp),%eax
083377de +0x28:  mov    %eax,(%esp)
083377e1 +0x2b:  call   08337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>  ; user_creature::CCreature::GetAddExp(int, CUser*)
083377e6 +0x30:  flds   -0x14(%ebp)
083377e9 +0x33:  faddp  %st,%st(1)
083377eb +0x35:  fstps  -0x14(%ebp)
083377ee +0x38:  mov    0x14(%ebp),%eax
083377f1 +0x3b:  mov    %eax,0x8(%esp)
083377f5 +0x3f:  movl   $0x18,0x4(%esp)
083377fd +0x47:  mov    0x8(%ebp),%eax
08337800 +0x4a:  mov    %eax,(%esp)
08337803 +0x4d:  call   08337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>  ; user_creature::CCreature::GetAddExp(int, CUser*)
08337808 +0x52:  flds   -0x14(%ebp)
0833780b +0x55:  faddp  %st,%st(1)
0833780d +0x57:  fstps  -0x14(%ebp)
08337810 +0x5a:  mov    0x14(%ebp),%eax
08337813 +0x5d:  mov    %eax,0x8(%esp)
08337817 +0x61:  movl   $0x19,0x4(%esp)
0833781f +0x69:  mov    0x8(%ebp),%eax
08337822 +0x6c:  mov    %eax,(%esp)
08337825 +0x6f:  call   08337724 <_ZN13user_creature9CCreature9GetAddExpEiP5CUser>  ; user_creature::CCreature::GetAddExp(int, CUser*)
0833782a +0x74:  flds   -0x14(%ebp)
0833782d +0x77:  faddp  %st,%st(1)
0833782f +0x79:  fstps  -0x14(%ebp)
08337832 +0x7c:  fildl  0xc(%ebp)
08337835 +0x7f:  fmuls  -0x14(%ebp)
08337838 +0x82:  flds   &data#e466c33b(.rodata)
0833783e +0x88:  fdivrp %st,%st(1)
08337840 +0x8a:  fstps  -0x18(%ebp)
08337843 +0x8d:  flds   -0x18(%ebp)
08337846 +0x90:  fnstcw -0x1a(%ebp)
08337849 +0x93:  movzwl -0x1a(%ebp),%eax
0833784d +0x97:  mov    $0xc,%ah
0833784f +0x99:  mov    %ax,-0x1c(%ebp)
08337853 +0x9d:  fldcw  -0x1c(%ebp)
08337856 +0xa0:  fistpl -0x20(%ebp)
08337859 +0xa3:  fldcw  -0x1a(%ebp)
0833785c +0xa6:  mov    -0x20(%ebp),%eax
0833785f +0xa9:  add    0xc(%ebp),%eax
08337862 +0xac:  mov    %eax,-0x10(%ebp)
08337865 +0xaf:  mov    0x8(%ebp),%eax
08337868 +0xb2:  mov    0x30(%eax),%eax
0833786b +0xb5:  mov    %eax,%edx
0833786d +0xb7:  add    -0x10(%ebp),%edx
08337870 +0xba:  mov    0x8(%ebp),%eax
08337873 +0xbd:  mov    %edx,0x30(%eax)
08337876 +0xc0:  mov    0x8(%ebp),%eax
08337879 +0xc3:  mov    0x30(%eax),%eax
0833787c +0xc6:  mov    %eax,0x4(%esp)
08337880 +0xca:  mov    0x8(%ebp),%eax
08337883 +0xcd:  mov    %eax,(%esp)
08337886 +0xd0:  call   083374d2 <_ZN13user_creature9CCreature11GetExpLevelEi>  ; user_creature::CCreature::GetExpLevel(int)
0833788b +0xd5:  mov    %eax,-0xc(%ebp)
0833788e +0xd8:  mov    0x8(%ebp),%eax
08337891 +0xdb:  mov    0x2c(%eax),%eax
08337894 +0xde:  cmp    -0xc(%ebp),%eax
08337897 +0xe1:  jge    0833789f <+0xe9>
08337899 +0xe3:  mov    0x10(%ebp),%eax
0833789c +0xe6:  movb   $0x1,(%eax)
0833789f +0xe9:  mov    0x8(%ebp),%eax
083378a2 +0xec:  mov    -0xc(%ebp),%edx
083378a5 +0xef:  mov    %edx,0x2c(%eax)
083378a8 +0xf2:  leave
083378a9 +0xf3:  ret
```

## 反编译 C

```c
// user_creature::CCreature::CalculateExp @ 0x83377b6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* user_creature::CCreature::CalculateExp(int, bool&, CUser*) */

void __thiscall
user_creature::CCreature::CalculateExp(CCreature *this,int param_1,bool *param_2,CUser *param_3)

{
  int iVar1;
  longdouble lVar2;
  longdouble lVar3;
  longdouble lVar4;
  
  lVar2 = (longdouble)GetAddExp(this,0x17,param_3);
  lVar3 = (longdouble)GetAddExp(this,0x18,param_3);
  lVar4 = (longdouble)GetAddExp(this,0x19,param_3);
  *(int *)(this + 0x30) =
       *(int *)(this + 0x30) +
       (int)ROUND(((float)param_1 *
                  (float)((longdouble)(float)((longdouble)(float)((longdouble)0.0 + lVar2) + lVar3)
                         + lVar4)) / _DAT_08c2f450) + param_1;
  iVar1 = GetExpLevel(this,*(int *)(this + 0x30));
  if (*(int *)(this + 0x2c) < iVar1) {
    *param_2 = true;
  }
  *(int *)(this + 0x2c) = iVar1;
  return;
}
```

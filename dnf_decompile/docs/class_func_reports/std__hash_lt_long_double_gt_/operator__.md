# operator()

`_ZNKSt4hashIeEclEe`

`std::hash<long double>::operator()(long double) const`

| 类 | 地址 |
|---|---|
| `std::hash<long double>` | `0x086d9fc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9fc0  _ZNKSt4hashIeEclEe
#           std::hash<long double>::operator()(long double) const
# range [0x086d9fc0, 0x086da04f]
086d9fc0 +0x00:  push   %ebp
086d9fc1 +0x01:  mov    %esp,%ebp
086d9fc3 +0x03:  push   %ebx
086d9fc4 +0x04:  sub    $0x34,%esp
086d9fc7 +0x07:  mov    0x10(%ebp),%edx
086d9fca +0x0a:  lea    -0xc(%ebp),%eax
086d9fcd +0x0d:  mov    0x14(%ebp),%ecx
086d9fd0 +0x10:  mov    %eax,0xc(%esp)
086d9fd4 +0x14:  mov    0xc(%ebp),%eax
086d9fd7 +0x17:  mov    %edx,0x4(%esp)
086d9fdb +0x1b:  mov    %ecx,0x8(%esp)
086d9fdf +0x1f:  mov    %eax,(%esp)
086d9fe2 +0x22:  call   0807dd00 <_init+0x5f8>
086d9fe7 +0x27:  fldz
086d9fe9 +0x29:  fucomp %st(1)
086d9feb +0x2b:  fnstsw %ax
086d9fed +0x2d:  sahf
086d9fee +0x2e:  jbe    086d9ff8 <+0x38>
086d9ff0 +0x30:  fadds  ""
086d9ff6 +0x36:  fchs
086d9ff8 +0x38:  fnstcw -0x1a(%ebp)
086d9ffb +0x3b:  flds   &data#89dd271f(.rodata)
086da001 +0x41:  xor    %ebx,%ebx
086da003 +0x43:  fmul   %st,%st(1)
086da005 +0x45:  mov    -0xc(%ebp),%ecx
086da008 +0x48:  movzwl -0x1a(%ebp),%eax
086da00c +0x4c:  fld    %st(1)
086da00e +0x4e:  mov    $0xc,%ah
086da010 +0x50:  mov    %ax,-0x1c(%ebp)
086da014 +0x54:  mov    %ecx,%eax
086da016 +0x56:  fldcw  -0x1c(%ebp)
086da019 +0x59:  fistpll -0x28(%ebp)
086da01c +0x5c:  fldcw  -0x1a(%ebp)
086da01f +0x5f:  mov    %ebx,-0x24(%ebp)
086da022 +0x62:  mov    -0x28(%ebp),%edx
086da025 +0x65:  shl    $0x12,%eax
086da028 +0x68:  sub    %ecx,%eax
086da02a +0x6a:  mov    %edx,-0x28(%ebp)
086da02d +0x6d:  add    %eax,%edx
086da02f +0x6f:  fildll -0x28(%ebp)
086da032 +0x72:  fsubrp %st,%st(2)
086da034 +0x74:  fmulp  %st,%st(1)
086da036 +0x76:  fldcw  -0x1c(%ebp)
086da039 +0x79:  fistpll -0x28(%ebp)
086da03c +0x7c:  fldcw  -0x1a(%ebp)
086da03f +0x7f:  mov    -0x28(%ebp),%ecx
086da042 +0x82:  add    $0x34,%esp
086da045 +0x85:  pop    %ebx
086da046 +0x86:  pop    %ebp
086da047 +0x87:  lea    (%edx,%ecx,1),%eax
086da04a +0x8a:  ret
086da04b +0x8b:  nop
086da04c +0x8c:  nop
086da04d +0x8d:  nop
086da04e +0x8e:  nop
086da04f +0x8f:  nop
```

## 反编译 C

```c
// std::hash<long @ 0x86d9fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std::hash<long double>::TEMPNAMEPLACEHOLDERVALUE(long double) const */

int __thiscall std::hash<long_double>::operator()(hash<long_double> *this,longdouble param_1)

{
  int iVar1;
  longdouble lVar2;
  undefined2 in_stack_00000012;
  ulonglong local_2c;
  int local_10 [2];
  
  lVar2 = (longdouble)
          frexpl(param_1._0_4_,param_1._4_4_,CONCAT22(in_stack_00000012,param_1._8_2_),local_10);
  if (lVar2 < (longdouble)0) {
    lVar2 = -(lVar2 + (longdouble)DAT_08cfdaec);
  }
  lVar2 = lVar2 * (longdouble)_DAT_08cfdaf0;
  local_2c = (ulonglong)ROUND(lVar2);
  iVar1 = (int)local_2c;
  local_2c = local_2c & 0xffffffff;
  local_2c._0_4_ = (int)(longlong)ROUND((longdouble)_DAT_08cfdaf0 * (lVar2 - (longdouble)local_2c));
  return iVar1 + local_10[0] * 0x3ffff + (int)local_2c;
}
```

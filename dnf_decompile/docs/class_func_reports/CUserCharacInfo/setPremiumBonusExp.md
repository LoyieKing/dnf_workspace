# setPremiumBonusExp

`_ZN15CUserCharacInfo18setPremiumBonusExpEji`

`CUserCharacInfo::setPremiumBonusExp(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x0868e1f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e1f6  _ZN15CUserCharacInfo18setPremiumBonusExpEji
#           CUserCharacInfo::setPremiumBonusExp(unsigned int, int)
# range [0x0868e1f6, 0x0868e261]
0868e1f6 +0x00:  push   %ebp
0868e1f7 +0x01:  mov    %esp,%ebp
0868e1f9 +0x03:  sub    $0x10,%esp
0868e1fc +0x06:  mov    0x8(%ebp),%eax
0868e1ff +0x09:  mov    0x10(%eax),%eax
0868e202 +0x0c:  test   %eax,%eax
0868e204 +0x0e:  je     0868e25a <+0x64>
0868e206 +0x10:  mov    0x8(%ebp),%eax
0868e209 +0x13:  mov    0x10(%eax),%ecx
0868e20c +0x16:  mov    0xc(%ebp),%eax
0868e20f +0x19:  mov    $0x0,%edx
0868e214 +0x1e:  mov    %eax,-0x8(%ebp)
0868e217 +0x21:  mov    %edx,-0x4(%ebp)
0868e21a +0x24:  fildll -0x8(%ebp)
0868e21d +0x27:  fildl  0x10(%ebp)
0868e220 +0x2a:  flds   ""
0868e226 +0x30:  fdivrp %st,%st(1)
0868e228 +0x32:  fmulp  %st,%st(1)
0868e22a +0x34:  fnstcw -0xa(%ebp)
0868e22d +0x37:  movzwl -0xa(%ebp),%eax
0868e231 +0x3b:  mov    $0xc,%ah
0868e233 +0x3d:  mov    %ax,-0xc(%ebp)
0868e237 +0x41:  fldcw  -0xc(%ebp)
0868e23a +0x44:  fistpll -0x8(%ebp)
0868e23d +0x47:  fldcw  -0xa(%ebp)
0868e240 +0x4a:  mov    -0x8(%ebp),%eax
0868e243 +0x4d:  mov    -0x4(%ebp),%edx
0868e246 +0x50:  mov    %eax,0x128d(%ecx)
0868e24c +0x56:  mov    0x8(%ebp),%eax
0868e24f +0x59:  mov    0x10(%eax),%eax
0868e252 +0x5c:  mov    0x128d(%eax),%eax
0868e258 +0x62:  jmp    0868e25f <+0x69>
0868e25a +0x64:  mov    $0x0,%eax
0868e25f +0x69:  leave
0868e260 +0x6a:  ret
0868e261 +0x6b:  nop
```

## 反编译 C

```c
// CUserCharacInfo::setPremiumBonusExp @ 0x868e1f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::setPremiumBonusExp(unsigned int, int) */

undefined8 __regparm2 CUserCharacInfo::setPremiumBonusExp(uint param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  undefined8 local_c;
  
  if (*(int *)(in_stack_00000004 + 0x10) == 0) {
    uVar2 = 0;
    local_c._4_4_ = param_2;
  }
  else {
    local_c = (ulonglong)in_stack_00000008;
    lVar1 = (longlong)ROUND(((float)in_stack_0000000c / _DAT_08cf3954) * (float)local_c);
    local_c._0_4_ = (undefined4)lVar1;
    local_c._4_4_ = (int)((ulonglong)lVar1 >> 0x20);
    *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x128d) = (undefined4)local_c;
    uVar2 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x128d);
  }
  return CONCAT44(local_c._4_4_,uVar2);
}
```

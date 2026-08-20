# get_aura_avatar_option_value

`_ZN5CUser28get_aura_avatar_option_valueEi`

`CUser::get_aura_avatar_option_value(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868de56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868de56  _ZN5CUser28get_aura_avatar_option_valueEi
#           CUser::get_aura_avatar_option_value(int)
# range [0x0868de56, 0x0868dea3]
0868de56 +0x00:  push   %ebp
0868de57 +0x01:  mov    %esp,%ebp
0868de59 +0x03:  sub    $0x18,%esp
0868de5c +0x06:  mov    0x8(%ebp),%eax
0868de5f +0x09:  mov    %eax,(%esp)
0868de62 +0x0c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868de67 +0x11:  test   %eax,%eax
0868de69 +0x13:  sete   %al
0868de6c +0x16:  test   %al,%al
0868de6e +0x18:  je     0868de77 <+0x21>
0868de70 +0x1a:  mov    $0xffffffff,%eax
0868de75 +0x1f:  jmp    0868dea2 <+0x4c>
0868de77 +0x21:  cmpl   $0x0,0xc(%ebp)
0868de7b +0x25:  js     0868de9d <+0x47>
0868de7d +0x27:  cmpl   $0x2,0xc(%ebp)
0868de81 +0x2b:  jg     0868de9d <+0x47>
0868de83 +0x2d:  mov    0x8(%ebp),%eax
0868de86 +0x30:  mov    %eax,(%esp)
0868de89 +0x33:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868de8e +0x38:  mov    0xc(%ebp),%edx
0868de91 +0x3b:  add    $0x4a0,%edx
0868de97 +0x41:  mov    0x1(%eax,%edx,4),%eax
0868de9b +0x45:  jmp    0868dea2 <+0x4c>
0868de9d +0x47:  mov    $0xffffffff,%eax
0868dea2 +0x4c:  leave
0868dea3 +0x4d:  ret
```

## 反编译 C

```c
// CUser::get_aura_avatar_option_value @ 0x868de56

/* CUser::get_aura_avatar_option_value(int) */

undefined4 __thiscall CUser::get_aura_avatar_option_value(CUser *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((param_1 < 0) || (2 < param_1)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    uVar2 = *(undefined4 *)(iVar1 + 1 + (param_1 + 0x4a0) * 4);
  }
  return uVar2;
}
```

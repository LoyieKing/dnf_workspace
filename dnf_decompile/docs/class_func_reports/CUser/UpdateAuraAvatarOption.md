# UpdateAuraAvatarOption

`_ZN5CUser22UpdateAuraAvatarOptionEii`

`CUser::UpdateAuraAvatarOption(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868de0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868de0a  _ZN5CUser22UpdateAuraAvatarOptionEii
#           CUser::UpdateAuraAvatarOption(int, int)
# range [0x0868de0a, 0x0868de55]
0868de0a +0x00:  push   %ebp
0868de0b +0x01:  mov    %esp,%ebp
0868de0d +0x03:  push   %ebx
0868de0e +0x04:  sub    $0x14,%esp
0868de11 +0x07:  cmpl   $0x0,0xc(%ebp)
0868de15 +0x0b:  js     0868de4f <+0x45>
0868de17 +0x0d:  cmpl   $0x2,0xc(%ebp)
0868de1b +0x11:  jg     0868de4f <+0x45>
0868de1d +0x13:  mov    0x8(%ebp),%eax
0868de20 +0x16:  mov    %eax,(%esp)
0868de23 +0x19:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868de28 +0x1e:  mov    %eax,%ebx
0868de2a +0x20:  mov    0x8(%ebp),%eax
0868de2d +0x23:  mov    %eax,(%esp)
0868de30 +0x26:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0868de35 +0x2b:  mov    0x10(%ebp),%edx
0868de38 +0x2e:  mov    %edx,0xc(%esp)
0868de3c +0x32:  mov    0xc(%ebp),%edx
0868de3f +0x35:  mov    %edx,0x8(%esp)
0868de43 +0x39:  mov    %ebx,0x4(%esp)
0868de47 +0x3d:  mov    %eax,(%esp)
0868de4a +0x40:  call   08444f26 <_ZN25DB_UpdateAuraAvatarOption11makeRequestEijii>  ; DB_UpdateAuraAvatarOption::makeRequest(int, unsigned int, int, int)
0868de4f +0x45:  add    $0x14,%esp
0868de52 +0x48:  pop    %ebx
0868de53 +0x49:  pop    %ebp
0868de54 +0x4a:  ret
0868de55 +0x4b:  nop
```

## 反编译 C

```c
// CUser::UpdateAuraAvatarOption @ 0x868de0a

/* CUser::UpdateAuraAvatarOption(int, int) */

void __thiscall CUser::UpdateAuraAvatarOption(CUser *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((-1 < param_1) && (param_1 < 3)) {
    uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    iVar2 = GetUID(this);
    DB_UpdateAuraAvatarOption::makeRequest(iVar2,uVar1,param_1,param_2);
  }
  return;
}
```

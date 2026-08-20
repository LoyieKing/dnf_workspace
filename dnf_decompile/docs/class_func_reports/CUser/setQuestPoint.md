# setQuestPoint

`_ZN5CUser13setQuestPointEi`

`CUser::setQuestPoint(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868acfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868acfe  _ZN5CUser13setQuestPointEi
#           CUser::setQuestPoint(int)
# range [0x0868acfe, 0x0868ad51]
0868acfe +0x00:  push   %ebp
0868acff +0x01:  mov    %esp,%ebp
0868ad01 +0x03:  sub    $0x28,%esp
0868ad04 +0x06:  movl   $0xb,0x4(%esp)
0868ad0c +0x0e:  mov    0x8(%ebp),%eax
0868ad0f +0x11:  mov    %eax,(%esp)
0868ad12 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868ad17 +0x19:  mov    %eax,-0xc(%ebp)
0868ad1a +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868ad1e +0x20:  je     0868ad4e <+0x50>
0868ad20 +0x22:  mov    0xc(%ebp),%eax
0868ad23 +0x25:  mov    %eax,0x4(%esp)
0868ad27 +0x29:  mov    -0xc(%ebp),%eax
0868ad2a +0x2c:  mov    %eax,(%esp)
0868ad2d +0x2f:  call   085efee0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x4c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x4c
0868ad32 +0x34:  movl   $0x0,0x8(%esp)
0868ad3a +0x3c:  mov    0x8(%ebp),%eax
0868ad3d +0x3f:  mov    %eax,0x4(%esp)
0868ad41 +0x43:  mov    -0xc(%ebp),%eax
0868ad44 +0x46:  mov    %eax,(%esp)
0868ad47 +0x49:  call   085ef6fc <_ZN10CQuestShop12sendCharacQpEP5CUserc>  ; CQuestShop::sendCharacQp(CUser*, char)
0868ad4c +0x4e:  jmp    0868ad4f <+0x51>
0868ad4e +0x50:  nop
0868ad4f +0x51:  leave
0868ad50 +0x52:  ret
0868ad51 +0x53:  nop
```

## 反编译 C

```c
// CUser::setQuestPoint @ 0x868acfe

/* CUser::setQuestPoint(int) */

void __thiscall CUser::setQuestPoint(CUser *this,int param_1)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::setQp(this_00,param_1);
    CQuestShop::sendCharacQp(this_00,this,'\0');
  }
  return;
}
```

# sendCharacQp

`_ZN5CUser12sendCharacQpEv`

`CUser::sendCharacQp()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ac24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ac24  _ZN5CUser12sendCharacQpEv
#           CUser::sendCharacQp()
# range [0x0868ac24, 0x0868ac65]
0868ac24 +0x00:  push   %ebp
0868ac25 +0x01:  mov    %esp,%ebp
0868ac27 +0x03:  sub    $0x28,%esp
0868ac2a +0x06:  movl   $0xb,0x4(%esp)
0868ac32 +0x0e:  mov    0x8(%ebp),%eax
0868ac35 +0x11:  mov    %eax,(%esp)
0868ac38 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868ac3d +0x19:  mov    %eax,-0xc(%ebp)
0868ac40 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868ac44 +0x20:  je     0868ac62 <+0x3e>
0868ac46 +0x22:  movl   $0x0,0x8(%esp)
0868ac4e +0x2a:  mov    0x8(%ebp),%eax
0868ac51 +0x2d:  mov    %eax,0x4(%esp)
0868ac55 +0x31:  mov    -0xc(%ebp),%eax
0868ac58 +0x34:  mov    %eax,(%esp)
0868ac5b +0x37:  call   085ef6fc <_ZN10CQuestShop12sendCharacQpEP5CUserc>  ; CQuestShop::sendCharacQp(CUser*, char)
0868ac60 +0x3c:  jmp    0868ac63 <+0x3f>
0868ac62 +0x3e:  nop
0868ac63 +0x3f:  leave
0868ac64 +0x40:  ret
0868ac65 +0x41:  nop
```

## 反编译 C

```c
// CUser::sendCharacQp @ 0x868ac24

/* CUser::sendCharacQp() */

void __thiscall CUser::sendCharacQp(CUser *this)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::sendCharacQp(this_00,this,'\0');
  }
  return;
}
```

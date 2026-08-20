# getQuestPoint

`_ZN5CUser13getQuestPointEv`

`CUser::getQuestPoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ad52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ad52  _ZN5CUser13getQuestPointEv
#           CUser::getQuestPoint()
# range [0x0868ad52, 0x0868ad87]
0868ad52 +0x00:  push   %ebp
0868ad53 +0x01:  mov    %esp,%ebp
0868ad55 +0x03:  sub    $0x28,%esp
0868ad58 +0x06:  movl   $0xb,0x4(%esp)
0868ad60 +0x0e:  mov    0x8(%ebp),%eax
0868ad63 +0x11:  mov    %eax,(%esp)
0868ad66 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868ad6b +0x19:  mov    %eax,-0xc(%ebp)
0868ad6e +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868ad72 +0x20:  jne    0868ad7b <+0x29>
0868ad74 +0x22:  mov    $0x0,%eax
0868ad79 +0x27:  jmp    0868ad86 <+0x34>
0868ad7b +0x29:  mov    -0xc(%ebp),%eax
0868ad7e +0x2c:  mov    %eax,(%esp)
0868ad81 +0x2f:  call   085efeb0 <_GLOBAL__I__ZN10CQuestShopC2Ev+0x1c>  ; global constructors keyed to CQuestShop::CQuestShop()+0x1c
0868ad86 +0x34:  leave
0868ad87 +0x35:  ret
```

## 反编译 C

```c
// CUser::getQuestPoint @ 0x868ad52

/* CUser::getQuestPoint() */

undefined4 __thiscall CUser::getQuestPoint(CUser *this)

{
  CQuestShop *this_00;
  undefined4 uVar1;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 == (CQuestShop *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CQuestShop::getQp(this_00);
  }
  return uVar1;
}
```

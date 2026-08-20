# clearInitQuestPoint

`_ZN5CUser19clearInitQuestPointEv`

`CUser::clearInitQuestPoint()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868ad88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868ad88  _ZN5CUser19clearInitQuestPointEv
#           CUser::clearInitQuestPoint()
# range [0x0868ad88, 0x0868adc1]
0868ad88 +0x00:  push   %ebp
0868ad89 +0x01:  mov    %esp,%ebp
0868ad8b +0x03:  sub    $0x28,%esp
0868ad8e +0x06:  movl   $0xb,0x4(%esp)
0868ad96 +0x0e:  mov    0x8(%ebp),%eax
0868ad99 +0x11:  mov    %eax,(%esp)
0868ad9c +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868ada1 +0x19:  mov    %eax,-0xc(%ebp)
0868ada4 +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868ada8 +0x20:  je     0868adbf <+0x37>
0868adaa +0x22:  movl   $0x0,0x4(%esp)
0868adb2 +0x2a:  mov    -0xc(%ebp),%eax
0868adb5 +0x2d:  mov    %eax,(%esp)
0868adb8 +0x30:  call   08695a56 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x22ab>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x22ab
0868adbd +0x35:  jmp    0868adc0 <+0x38>
0868adbf +0x37:  nop
0868adc0 +0x38:  leave
0868adc1 +0x39:  ret
```

## 反编译 C

```c
// CUser::clearInitQuestPoint @ 0x868ad88

/* CUser::clearInitQuestPoint() */

void __thiscall CUser::clearInitQuestPoint(CUser *this)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::setInitQp(this_00,0);
  }
  return;
}
```

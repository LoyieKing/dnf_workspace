# incInitQuestPoint

`_ZN5CUser17incInitQuestPointEi`

`CUser::incInitQuestPoint(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868adc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868adc2  _ZN5CUser17incInitQuestPointEi
#           CUser::incInitQuestPoint(int)
# range [0x0868adc2, 0x0868adfb]
0868adc2 +0x00:  push   %ebp
0868adc3 +0x01:  mov    %esp,%ebp
0868adc5 +0x03:  sub    $0x28,%esp
0868adc8 +0x06:  movl   $0xb,0x4(%esp)
0868add0 +0x0e:  mov    0x8(%ebp),%eax
0868add3 +0x11:  mov    %eax,(%esp)
0868add6 +0x14:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0868addb +0x19:  mov    %eax,-0xc(%ebp)
0868adde +0x1c:  cmpl   $0x0,-0xc(%ebp)
0868ade2 +0x20:  je     0868adf8 <+0x36>
0868ade4 +0x22:  mov    0xc(%ebp),%eax
0868ade7 +0x25:  mov    %eax,0x4(%esp)
0868adeb +0x29:  mov    -0xc(%ebp),%eax
0868adee +0x2c:  mov    %eax,(%esp)
0868adf1 +0x2f:  call   08695a40 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2295>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2295
0868adf6 +0x34:  jmp    0868adf9 <+0x37>
0868adf8 +0x36:  nop
0868adf9 +0x37:  leave
0868adfa +0x38:  ret
0868adfb +0x39:  nop
```

## 反编译 C

```c
// CUser::incInitQuestPoint @ 0x868adc2

/* CUser::incInitQuestPoint(int) */

void __thiscall CUser::incInitQuestPoint(CUser *this,int param_1)

{
  CQuestShop *this_00;
  
  this_00 = (CQuestShop *)GetCharacExpandData(this,0xb);
  if (this_00 != (CQuestShop *)0x0) {
    CQuestShop::incInitQp(this_00,param_1);
  }
  return;
}
```

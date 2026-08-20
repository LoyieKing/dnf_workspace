# TaiwanCash

`_ZN6Taiwan10TaiwanCashC1Ehs`

`Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173608  _ZN6Taiwan10TaiwanCashC1Ehs
#           Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)
# range [0x08173608, 0x08173659]
08173608 +0x00:  push   %ebp
08173609 +0x01:  mov    %esp,%ebp
0817360b +0x03:  sub    $0x28,%esp
0817360e +0x06:  mov    0xc(%ebp),%edx
08173611 +0x09:  mov    0x10(%ebp),%eax
08173614 +0x0c:  mov    %dl,-0xc(%ebp)
08173617 +0x0f:  mov    %ax,-0x10(%ebp)
0817361b +0x13:  mov    0x8(%ebp),%eax
0817361e +0x16:  add    $0x8,%eax
08173621 +0x19:  mov    %eax,(%esp)
08173624 +0x1c:  call   083f3ac8 <_ZN5MySQLC1Ev>  ; MySQL::MySQL()
08173629 +0x21:  mov    0x8(%ebp),%eax
0817362c +0x24:  add    $0x42094,%eax
08173631 +0x29:  mov    %eax,(%esp)
08173634 +0x2c:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
08173639 +0x31:  mov    0x8(%ebp),%eax
0817363c +0x34:  movl   $0x0,0x4(%eax)
08173643 +0x3b:  mov    0x8(%ebp),%eax
08173646 +0x3e:  movzbl -0xc(%ebp),%edx
0817364a +0x42:  mov    %dl,(%eax)
0817364c +0x44:  mov    0x8(%ebp),%eax
0817364f +0x47:  movzwl -0x10(%ebp),%edx
08173653 +0x4b:  mov    %dx,0x2(%eax)
08173657 +0x4f:  leave
08173658 +0x50:  ret
08173659 +0x51:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::TaiwanCash @ 0x8173608

/* Taiwan::TaiwanCash::TaiwanCash(unsigned char, short) */

void __thiscall Taiwan::TaiwanCash::TaiwanCash(TaiwanCash *this,uchar param_1,short param_2)

{
  MySQL::MySQL((MySQL *)(this + 8));
  Mutex::Mutex((Mutex *)(this + 0x42094));
  *(undefined4 *)(this + 4) = 0;
  *this = (TaiwanCash)param_1;
  *(short *)(this + 2) = param_2;
  return;
}
```

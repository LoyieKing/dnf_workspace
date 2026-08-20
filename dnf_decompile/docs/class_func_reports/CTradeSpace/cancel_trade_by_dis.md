# cancel_trade_by_dis

`_ZN11CTradeSpace19cancel_trade_by_disEP5CUser`

`CTradeSpace::cancel_trade_by_dis(CUser*)`

| 类 | 地址 |
|---|---|
| `CTradeSpace` | `0x0852f086` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0852f086  _ZN11CTradeSpace19cancel_trade_by_disEP5CUser
#           CTradeSpace::cancel_trade_by_dis(CUser*)
# range [0x0852f086, 0x0852f09f]
0852f086 +0x00:  push   %ebp
0852f087 +0x01:  mov    %esp,%ebp
0852f089 +0x03:  sub    $0x18,%esp
0852f08c +0x06:  mov    0xc(%ebp),%eax
0852f08f +0x09:  mov    %eax,0x4(%esp)
0852f093 +0x0d:  mov    0x8(%ebp),%eax
0852f096 +0x10:  mov    %eax,(%esp)
0852f099 +0x13:  call   0852e544 <_ZN11CTradeSpace22cancel_trade_for_chinaEP5CUser>  ; CTradeSpace::cancel_trade_for_china(CUser*)
0852f09e +0x18:  leave
0852f09f +0x19:  ret
```

## 反编译 C

```c
// CTradeSpace::cancel_trade_by_dis @ 0x852f086

/* CTradeSpace::cancel_trade_by_dis(CUser*) */

void __thiscall CTradeSpace::cancel_trade_by_dis(CTradeSpace *this,CUser *param_1)

{
  cancel_trade_for_china(this,param_1);
  return;
}
```

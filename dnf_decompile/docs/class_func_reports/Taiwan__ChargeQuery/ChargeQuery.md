# ChargeQuery

`_ZN6Taiwan11ChargeQueryC1EPKcS2_S2_jc`

`Taiwan::ChargeQuery::ChargeQuery(char const*, char const*, char const*, unsigned int, char)`

| 类 | 地址 |
|---|---|
| `Taiwan::ChargeQuery` | `0x08174efe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08174efe  _ZN6Taiwan11ChargeQueryC1EPKcS2_S2_jc
#           Taiwan::ChargeQuery::ChargeQuery(char const*, char const*, char const*, unsigned int, char)
# range [0x08174efe, 0x08174f51]
08174efe +0x00:  push   %ebp
08174eff +0x01:  mov    %esp,%ebp
08174f01 +0x03:  sub    $0x28,%esp
08174f04 +0x06:  mov    0x1c(%ebp),%eax
08174f07 +0x09:  mov    %al,-0xc(%ebp)
08174f0a +0x0c:  mov    0x8(%ebp),%eax
08174f0d +0x0f:  mov    0xc(%ebp),%edx
08174f10 +0x12:  mov    %edx,(%eax)
08174f12 +0x14:  mov    0x8(%ebp),%eax
08174f15 +0x17:  mov    0x10(%ebp),%edx
08174f18 +0x1a:  mov    %edx,0x4(%eax)
08174f1b +0x1d:  mov    0x8(%ebp),%eax
08174f1e +0x20:  mov    0x14(%ebp),%edx
08174f21 +0x23:  mov    %edx,0x8(%eax)
08174f24 +0x26:  mov    0x8(%ebp),%eax
08174f27 +0x29:  mov    0x18(%ebp),%edx
08174f2a +0x2c:  mov    %edx,0xc(%eax)
08174f2d +0x2f:  mov    0x8(%ebp),%eax
08174f30 +0x32:  movzbl -0xc(%ebp),%edx
08174f34 +0x36:  mov    %dl,0x10(%eax)
08174f37 +0x39:  mov    0x8(%ebp),%eax
08174f3a +0x3c:  add    $0x18,%eax
08174f3d +0x3f:  mov    %eax,(%esp)
08174f40 +0x42:  call   08175540 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x94>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x94
08174f45 +0x47:  mov    0x8(%ebp),%eax
08174f48 +0x4a:  movl   $0x0,0x14(%eax)
08174f4f +0x51:  leave
08174f50 +0x52:  ret
08174f51 +0x53:  nop
```

## 反编译 C

```c
// Taiwan::ChargeQuery::ChargeQuery @ 0x8174efe

/* Taiwan::ChargeQuery::ChargeQuery(char const*, char const*, char const*, unsigned int, char) */

void __thiscall
Taiwan::ChargeQuery::ChargeQuery
          (ChargeQuery *this,char *param_1,char *param_2,char *param_3,uint param_4,char param_5)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(uint *)(this + 0xc) = param_4;
  this[0x10] = (ChargeQuery)param_5;
  BillTransaction::init((BillTransaction *)(this + 0x18));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}
```

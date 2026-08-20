# GiftQuery

`_ZN6Taiwan9GiftQueryC1EPKcS2_S2_jjx`

`Taiwan::GiftQuery::GiftQuery(char const*, char const*, char const*, unsigned int, unsigned int, long long)`

| 类 | 地址 |
|---|---|
| `Taiwan::GiftQuery` | `0x081747fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081747fe  _ZN6Taiwan9GiftQueryC1EPKcS2_S2_jjx
#           Taiwan::GiftQuery::GiftQuery(char const*, char const*, char const*, unsigned int, unsigned int, long long)
# range [0x081747fe, 0x08174865]
081747fe +0x00:  push   %ebp
081747ff +0x01:  mov    %esp,%ebp
08174801 +0x03:  sub    $0x28,%esp
08174804 +0x06:  mov    0x20(%ebp),%eax
08174807 +0x09:  mov    %eax,-0x10(%ebp)
0817480a +0x0c:  mov    0x24(%ebp),%eax
0817480d +0x0f:  mov    %eax,-0xc(%ebp)
08174810 +0x12:  mov    0x8(%ebp),%eax
08174813 +0x15:  mov    0xc(%ebp),%edx
08174816 +0x18:  mov    %edx,(%eax)
08174818 +0x1a:  mov    0x8(%ebp),%eax
0817481b +0x1d:  mov    0x10(%ebp),%edx
0817481e +0x20:  mov    %edx,0x4(%eax)
08174821 +0x23:  mov    0x8(%ebp),%eax
08174824 +0x26:  mov    0x14(%ebp),%edx
08174827 +0x29:  mov    %edx,0x8(%eax)
0817482a +0x2c:  mov    0x8(%ebp),%eax
0817482d +0x2f:  mov    0x18(%ebp),%edx
08174830 +0x32:  mov    %edx,0x14(%eax)
08174833 +0x35:  mov    0x8(%ebp),%eax
08174836 +0x38:  mov    0x1c(%ebp),%edx
08174839 +0x3b:  mov    %edx,0x18(%eax)
0817483c +0x3e:  mov    -0x10(%ebp),%eax
0817483f +0x41:  mov    -0xc(%ebp),%edx
08174842 +0x44:  mov    0x8(%ebp),%ecx
08174845 +0x47:  mov    %eax,0xc(%ecx)
08174848 +0x4a:  mov    %edx,0x10(%ecx)
0817484b +0x4d:  mov    0x8(%ebp),%eax
0817484e +0x50:  movl   $0x0,0x1c(%eax)
08174855 +0x57:  mov    0x8(%ebp),%eax
08174858 +0x5a:  add    $0x20,%eax
0817485b +0x5d:  mov    %eax,(%esp)
0817485e +0x60:  call   08175540 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x94>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x94
08174863 +0x65:  leave
08174864 +0x66:  ret
08174865 +0x67:  nop
```

## 反编译 C

```c
// Taiwan::GiftQuery::GiftQuery @ 0x81747fe

/* Taiwan::GiftQuery::GiftQuery(char const*, char const*, char const*, unsigned int, unsigned int,
   long long) */

void __thiscall
Taiwan::GiftQuery::GiftQuery
          (GiftQuery *this,char *param_1,char *param_2,char *param_3,uint param_4,uint param_5,
          longlong param_6)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(uint *)(this + 0x14) = param_4;
  *(uint *)(this + 0x18) = param_5;
  *(longlong *)(this + 0xc) = param_6;
  *(undefined4 *)(this + 0x1c) = 0;
  BillTransaction::init((BillTransaction *)(this + 0x20));
  return;
}
```

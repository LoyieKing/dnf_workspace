# PurchaseQuery

`_ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx`

`Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long long)`

| 类 | 地址 |
|---|---|
| `Taiwan::PurchaseQuery` | `0x0817454c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817454c  _ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx
#           Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long long)
# range [0x0817454c, 0x081745a9]
0817454c +0x00:  push   %ebp
0817454d +0x01:  mov    %esp,%ebp
0817454f +0x03:  sub    $0x28,%esp
08174552 +0x06:  mov    0x1c(%ebp),%eax
08174555 +0x09:  mov    %eax,-0x10(%ebp)
08174558 +0x0c:  mov    0x20(%ebp),%eax
0817455b +0x0f:  mov    %eax,-0xc(%ebp)
0817455e +0x12:  mov    0x8(%ebp),%eax
08174561 +0x15:  mov    0xc(%ebp),%edx
08174564 +0x18:  mov    %edx,(%eax)
08174566 +0x1a:  mov    0x8(%ebp),%eax
08174569 +0x1d:  mov    0x10(%ebp),%edx
0817456c +0x20:  mov    %edx,0x4(%eax)
0817456f +0x23:  mov    0x8(%ebp),%eax
08174572 +0x26:  mov    0x14(%ebp),%edx
08174575 +0x29:  mov    %edx,0x8(%eax)
08174578 +0x2c:  mov    -0x10(%ebp),%eax
0817457b +0x2f:  mov    -0xc(%ebp),%edx
0817457e +0x32:  mov    0x8(%ebp),%ecx
08174581 +0x35:  mov    %eax,0xc(%ecx)
08174584 +0x38:  mov    %edx,0x10(%ecx)
08174587 +0x3b:  mov    0x8(%ebp),%eax
0817458a +0x3e:  mov    0x18(%ebp),%edx
0817458d +0x41:  mov    %edx,0x14(%eax)
08174590 +0x44:  mov    0x8(%ebp),%eax
08174593 +0x47:  movl   $0x0,0x24(%eax)
0817459a +0x4e:  mov    0x8(%ebp),%eax
0817459d +0x51:  add    $0x18,%eax
081745a0 +0x54:  mov    %eax,(%esp)
081745a3 +0x57:  call   08175540 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x94>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x94
081745a8 +0x5c:  leave
081745a9 +0x5d:  ret
```

## 反编译 C

```c
// Taiwan::PurchaseQuery::PurchaseQuery @ 0x817454c

/* Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long
   long) */

void __thiscall
Taiwan::PurchaseQuery::PurchaseQuery
          (PurchaseQuery *this,char *param_1,char *param_2,uint param_3,uint param_4,
          longlong param_5)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  *(longlong *)(this + 0xc) = param_5;
  *(uint *)(this + 0x14) = param_4;
  *(undefined4 *)(this + 0x24) = 0;
  BillTransaction::init((BillTransaction *)(this + 0x18));
  return;
}
```

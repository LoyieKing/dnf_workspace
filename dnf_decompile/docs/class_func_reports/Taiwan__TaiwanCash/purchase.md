# purchase

`_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE`

`Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x081738e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081738e6  _ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionE
#           Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&)
# range [0x081738e6, 0x081739ff]
081738e6 +0x000:  push   %ebp
081738e7 +0x001:  mov    %esp,%ebp
081738e9 +0x003:  push   %ebx
081738ea +0x004:  sub    $0x74,%esp
081738ed +0x007:  mov    0xc(%ebp),%eax
081738f0 +0x00a:  mov    %eax,-0x50(%ebp)
081738f3 +0x00d:  mov    0x10(%ebp),%eax
081738f6 +0x010:  mov    %eax,-0x4c(%ebp)
081738f9 +0x013:  mov    -0x50(%ebp),%eax
081738fc +0x016:  mov    -0x4c(%ebp),%edx
081738ff +0x019:  mov    0x18(%ebp),%ebx
08173902 +0x01c:  mov    0x14(%ebp),%ecx
08173905 +0x01f:  mov    %eax,0x14(%esp)
08173909 +0x023:  mov    %edx,0x18(%esp)
0817390d +0x027:  mov    %ebx,0x10(%esp)
08173911 +0x02b:  mov    %ecx,0xc(%esp)
08173915 +0x02f:  mov    0x20(%ebp),%eax
08173918 +0x032:  mov    %eax,0x8(%esp)
0817391c +0x036:  mov    0x1c(%ebp),%eax
0817391f +0x039:  mov    %eax,0x4(%esp)
08173923 +0x03d:  lea    -0x40(%ebp),%eax
08173926 +0x040:  mov    %eax,(%esp)
08173929 +0x043:  call   0817454c <_ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx>  ; Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long long)
0817392e +0x048:  lea    -0x40(%ebp),%eax
08173931 +0x04b:  mov    %eax,0x4(%esp)
08173935 +0x04f:  mov    0x8(%ebp),%eax
08173938 +0x052:  mov    %eax,(%esp)
0817393b +0x055:  call   08175770 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x2c4>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x2c4
08173940 +0x05a:  xor    $0x1,%eax
08173943 +0x05d:  test   %al,%al
08173945 +0x05f:  je     08173951 <+0x6b>
08173947 +0x061:  mov    $0x4,%eax
0817394c +0x066:  jmp    081739f9 <+0x113>
08173951 +0x06b:  mov    -0x1c(%ebp),%eax
08173954 +0x06e:  mov    %eax,0x4(%esp)
08173958 +0x072:  mov    0x8(%ebp),%eax
0817395b +0x075:  mov    %eax,(%esp)
0817395e +0x078:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173963 +0x07d:  xor    $0x1,%eax
08173966 +0x080:  test   %al,%al
08173968 +0x082:  je     08173972 <+0x8c>
0817396a +0x084:  mov    -0x1c(%ebp),%eax
0817396d +0x087:  jmp    081739f9 <+0x113>
08173972 +0x08c:  mov    0x24(%ebp),%eax
08173975 +0x08f:  mov    -0x28(%ebp),%edx
08173978 +0x092:  mov    %edx,(%eax)
0817397a +0x094:  mov    -0x24(%ebp),%edx
0817397d +0x097:  mov    %edx,0x4(%eax)
08173980 +0x09a:  mov    -0x20(%ebp),%edx
08173983 +0x09d:  mov    %edx,0x8(%eax)
08173986 +0x0a0:  mov    0x24(%ebp),%eax
08173989 +0x0a3:  mov    0x8(%eax),%edx
0817398c +0x0a6:  mov    0x4(%eax),%eax
0817398f +0x0a9:  movl   $0x0,0x8(%esp)
08173997 +0x0b1:  mov    %eax,(%esp)
0817399a +0x0b4:  mov    %edx,0x4(%esp)
0817399e +0x0b8:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
081739a3 +0x0bd:  mov    %eax,%ebx
081739a5 +0x0bf:  movl   $0x0,0xc(%esp)
081739ad +0x0c7:  movl   $0x6e,0x8(%esp)
081739b5 +0x0cf:  movl   $&_ZZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEE12__FUNCTION__,0x4(%esp)
081739bd +0x0d7:  lea    -0x18(%ebp),%eax
081739c0 +0x0da:  mov    %eax,(%esp)
081739c3 +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081739c8 +0x0e2:  mov    %ebx,0x14(%esp)
081739cc +0x0e6:  mov    0x18(%ebp),%eax
081739cf +0x0e9:  mov    %eax,0x10(%esp)
081739d3 +0x0ed:  mov    0x20(%ebp),%eax
081739d6 +0x0f0:  mov    %eax,0xc(%esp)
081739da +0x0f4:  mov    0x1c(%ebp),%eax
081739dd +0x0f7:  mov    %eax,0x8(%esp)
081739e1 +0x0fb:  movl   $"[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",0x4(%esp)
081739e9 +0x103:  lea    -0x18(%ebp),%eax
081739ec +0x106:  mov    %eax,(%esp)
081739ef +0x109:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081739f4 +0x10e:  mov    $0x0,%eax
081739f9 +0x113:  add    $0x74,%esp
081739fc +0x116:  pop    %ebx
081739fd +0x117:  pop    %ebp
081739fe +0x118:  ret
081739ff +0x119:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::purchase @ 0x81738e6

/* Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*,
   Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::purchase
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
              BillTransaction *param_6)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000020;
  PurchaseQuery local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  PurchaseQuery::PurchaseQuery
            (local_44,param_5,(char *)param_6,param_3,(uint)param_4,CONCAT44(param_2,param_1._4_4_))
  ;
  bVar1 = processBilling<Taiwan::PurchaseQuery>((TaiwanCash *)param_1,local_44);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_20);
    if (cVar2 == '\x01') {
      *in_stack_00000020 = local_2c;
      in_stack_00000020[1] = local_28;
      in_stack_00000020[2] = local_24;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000020 + 1),0);
      cMyTrace::cMyTrace(local_1c,"purchase",0x6e,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",
                 param_5,param_6,param_4,uVar3);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}
```

# purchase

`_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs`

`Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&, short)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173a00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173a00  _ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs
#           Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*, Taiwan::BillTransaction&, short)
# range [0x08173a00, 0x08173b1f]
08173a00 +0x000:  push   %ebp
08173a01 +0x001:  mov    %esp,%ebp
08173a03 +0x003:  push   %ebx
08173a04 +0x004:  sub    $0x74,%esp
08173a07 +0x007:  mov    0x28(%ebp),%eax
08173a0a +0x00a:  mov    0xc(%ebp),%edx
08173a0d +0x00d:  mov    %edx,-0x50(%ebp)
08173a10 +0x010:  mov    0x10(%ebp),%edx
08173a13 +0x013:  mov    %edx,-0x4c(%ebp)
08173a16 +0x016:  mov    %ax,-0x54(%ebp)
08173a1a +0x01a:  mov    -0x50(%ebp),%eax
08173a1d +0x01d:  mov    -0x4c(%ebp),%edx
08173a20 +0x020:  mov    0x18(%ebp),%ebx
08173a23 +0x023:  mov    0x14(%ebp),%ecx
08173a26 +0x026:  mov    %eax,0x14(%esp)
08173a2a +0x02a:  mov    %edx,0x18(%esp)
08173a2e +0x02e:  mov    %ebx,0x10(%esp)
08173a32 +0x032:  mov    %ecx,0xc(%esp)
08173a36 +0x036:  mov    0x20(%ebp),%eax
08173a39 +0x039:  mov    %eax,0x8(%esp)
08173a3d +0x03d:  mov    0x1c(%ebp),%eax
08173a40 +0x040:  mov    %eax,0x4(%esp)
08173a44 +0x044:  lea    -0x40(%ebp),%eax
08173a47 +0x047:  mov    %eax,(%esp)
08173a4a +0x04a:  call   0817454c <_ZN6Taiwan13PurchaseQueryC1EPKcS2_jjx>  ; Taiwan::PurchaseQuery::PurchaseQuery(char const*, char const*, unsigned int, unsigned int, long long)
08173a4f +0x04f:  lea    -0x40(%ebp),%eax
08173a52 +0x052:  mov    %eax,0x4(%esp)
08173a56 +0x056:  mov    0x8(%ebp),%eax
08173a59 +0x059:  mov    %eax,(%esp)
08173a5c +0x05c:  call   08175770 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x2c4>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x2c4
08173a61 +0x061:  xor    $0x1,%eax
08173a64 +0x064:  test   %al,%al
08173a66 +0x066:  je     08173a72 <+0x72>
08173a68 +0x068:  mov    $0x4,%eax
08173a6d +0x06d:  jmp    08173b1a <+0x11a>
08173a72 +0x072:  mov    -0x1c(%ebp),%eax
08173a75 +0x075:  mov    %eax,0x4(%esp)
08173a79 +0x079:  mov    0x8(%ebp),%eax
08173a7c +0x07c:  mov    %eax,(%esp)
08173a7f +0x07f:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173a84 +0x084:  xor    $0x1,%eax
08173a87 +0x087:  test   %al,%al
08173a89 +0x089:  je     08173a93 <+0x93>
08173a8b +0x08b:  mov    -0x1c(%ebp),%eax
08173a8e +0x08e:  jmp    08173b1a <+0x11a>
08173a93 +0x093:  mov    0x24(%ebp),%eax
08173a96 +0x096:  mov    -0x28(%ebp),%edx
08173a99 +0x099:  mov    %edx,(%eax)
08173a9b +0x09b:  mov    -0x24(%ebp),%edx
08173a9e +0x09e:  mov    %edx,0x4(%eax)
08173aa1 +0x0a1:  mov    -0x20(%ebp),%edx
08173aa4 +0x0a4:  mov    %edx,0x8(%eax)
08173aa7 +0x0a7:  mov    0x24(%ebp),%eax
08173aaa +0x0aa:  mov    0x8(%eax),%edx
08173aad +0x0ad:  mov    0x4(%eax),%eax
08173ab0 +0x0b0:  movl   $0x0,0x8(%esp)
08173ab8 +0x0b8:  mov    %eax,(%esp)
08173abb +0x0bb:  mov    %edx,0x4(%esp)
08173abf +0x0bf:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08173ac4 +0x0c4:  mov    %eax,%ebx
08173ac6 +0x0c6:  movl   $0x0,0xc(%esp)
08173ace +0x0ce:  movl   $0x81,0x8(%esp)
08173ad6 +0x0d6:  movl   $&_ZZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEsE12__FUNCTION__,0x4(%esp)
08173ade +0x0de:  lea    -0x18(%ebp),%eax
08173ae1 +0x0e1:  mov    %eax,(%esp)
08173ae4 +0x0e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173ae9 +0x0e9:  mov    %ebx,0x14(%esp)
08173aed +0x0ed:  mov    0x18(%ebp),%eax
08173af0 +0x0f0:  mov    %eax,0x10(%esp)
08173af4 +0x0f4:  mov    0x20(%ebp),%eax
08173af7 +0x0f7:  mov    %eax,0xc(%esp)
08173afb +0x0fb:  mov    0x1c(%ebp),%eax
08173afe +0x0fe:  mov    %eax,0x8(%esp)
08173b02 +0x102:  movl   $"[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",0x4(%esp)
08173b0a +0x10a:  lea    -0x18(%ebp),%eax
08173b0d +0x10d:  mov    %eax,(%esp)
08173b10 +0x110:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173b15 +0x115:  mov    $0x0,%eax
08173b1a +0x11a:  add    $0x74,%esp
08173b1d +0x11d:  pop    %ebx
08173b1e +0x11e:  pop    %ebp
08173b1f +0x11f:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::purchase @ 0x8173a00

/* Taiwan::TaiwanCash::purchase(unsigned long long, int, int, char const*, char const*,
   Taiwan::BillTransaction&, short) */

int __thiscall
Taiwan::TaiwanCash::purchase
          (TaiwanCash *this,ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,
          BillTransaction *param_6,short param_7)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  PurchaseQuery local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  PurchaseQuery::PurchaseQuery(local_44,param_4,param_5,param_2,param_3,param_1);
  bVar1 = processBilling<Taiwan::PurchaseQuery>(this,local_44);
  if (bVar1) {
    cVar2 = checkResultCode(this,local_20);
    if (cVar2 == '\x01') {
      *(undefined4 *)param_6 = local_2c;
      *(undefined4 *)(param_6 + 4) = local_28;
      *(undefined4 *)(param_6 + 8) = local_24;
      uVar3 = NumberToString(*(ulonglong *)(param_6 + 4),0);
      cMyTrace::cMyTrace(local_1c,"purchase",0x81,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] PurchaseQuery Account:%s, Charac:%s, Price:%d, Transaction:%s",
                 param_4,param_5,param_3,uVar3);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}
```

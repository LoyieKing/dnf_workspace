# charge

`_ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE`

`Taiwan::TaiwanCash::charge(char*, unsigned char, unsigned char, unsigned int, char*, char*, char*, char*, unsigned long long, Taiwan::BillTransaction&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173df0  _ZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionE
#           Taiwan::TaiwanCash::charge(char*, unsigned char, unsigned char, unsigned int, char*, char*, char*, char*, unsigned long long, Taiwan::BillTransaction&)
# range [0x08173df0, 0x08173f0b]
08173df0 +0x000:  push   %ebp
08173df1 +0x001:  mov    %esp,%ebp
08173df3 +0x003:  push   %ebx
08173df4 +0x004:  sub    $0x74,%esp
08173df7 +0x007:  mov    0x10(%ebp),%edx
08173dfa +0x00a:  mov    0x14(%ebp),%eax
08173dfd +0x00d:  mov    %dl,-0x4c(%ebp)
08173e00 +0x010:  mov    %al,-0x50(%ebp)
08173e03 +0x013:  mov    0x2c(%ebp),%eax
08173e06 +0x016:  mov    %eax,-0x58(%ebp)
08173e09 +0x019:  mov    0x30(%ebp),%eax
08173e0c +0x01c:  mov    %eax,-0x54(%ebp)
08173e0f +0x01f:  movzbl -0x4c(%ebp),%eax
08173e13 +0x023:  movsbl %al,%eax
08173e16 +0x026:  mov    %eax,0x14(%esp)
08173e1a +0x02a:  mov    0x18(%ebp),%eax
08173e1d +0x02d:  mov    %eax,0x10(%esp)
08173e21 +0x031:  movl   $"",0xc(%esp)
08173e29 +0x039:  mov    0x28(%ebp),%eax
08173e2c +0x03c:  mov    %eax,0x8(%esp)
08173e30 +0x040:  mov    0xc(%ebp),%eax
08173e33 +0x043:  mov    %eax,0x4(%esp)
08173e37 +0x047:  lea    -0x3c(%ebp),%eax
08173e3a +0x04a:  mov    %eax,(%esp)
08173e3d +0x04d:  call   08174efe <_ZN6Taiwan11ChargeQueryC1EPKcS2_S2_jc>  ; Taiwan::ChargeQuery::ChargeQuery(char const*, char const*, char const*, unsigned int, char)
08173e42 +0x052:  lea    -0x3c(%ebp),%eax
08173e45 +0x055:  mov    %eax,0x4(%esp)
08173e49 +0x059:  mov    0x8(%ebp),%eax
08173e4c +0x05c:  mov    %eax,(%esp)
08173e4f +0x05f:  call   08175a60 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x5b4>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x5b4
08173e54 +0x064:  xor    $0x1,%eax
08173e57 +0x067:  test   %al,%al
08173e59 +0x069:  je     08173e65 <+0x75>
08173e5b +0x06b:  mov    $0x4,%eax
08173e60 +0x070:  jmp    08173f06 <+0x116>
08173e65 +0x075:  mov    -0x28(%ebp),%eax
08173e68 +0x078:  mov    %eax,0x4(%esp)
08173e6c +0x07c:  mov    0x8(%ebp),%eax
08173e6f +0x07f:  mov    %eax,(%esp)
08173e72 +0x082:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173e77 +0x087:  xor    $0x1,%eax
08173e7a +0x08a:  test   %al,%al
08173e7c +0x08c:  je     08173e86 <+0x96>
08173e7e +0x08e:  mov    -0x28(%ebp),%eax
08173e81 +0x091:  jmp    08173f06 <+0x116>
08173e86 +0x096:  mov    0x34(%ebp),%eax
08173e89 +0x099:  mov    -0x24(%ebp),%edx
08173e8c +0x09c:  mov    %edx,(%eax)
08173e8e +0x09e:  mov    -0x20(%ebp),%edx
08173e91 +0x0a1:  mov    %edx,0x4(%eax)
08173e94 +0x0a4:  mov    -0x1c(%ebp),%edx
08173e97 +0x0a7:  mov    %edx,0x8(%eax)
08173e9a +0x0aa:  mov    0x34(%ebp),%eax
08173e9d +0x0ad:  mov    0x8(%eax),%edx
08173ea0 +0x0b0:  mov    0x4(%eax),%eax
08173ea3 +0x0b3:  movl   $0x0,0x8(%esp)
08173eab +0x0bb:  mov    %eax,(%esp)
08173eae +0x0be:  mov    %edx,0x4(%esp)
08173eb2 +0x0c2:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08173eb7 +0x0c7:  mov    %eax,%ebx
08173eb9 +0x0c9:  movl   $0x0,0xc(%esp)
08173ec1 +0x0d1:  movl   $0xce,0x8(%esp)
08173ec9 +0x0d9:  movl   $&_ZZN6Taiwan10TaiwanCash6chargeEPchhjS1_S1_S1_S1_yRNS_15BillTransactionEE12__FUNCTION__,0x4(%esp)
08173ed1 +0x0e1:  lea    -0x18(%ebp),%eax
08173ed4 +0x0e4:  mov    %eax,(%esp)
08173ed7 +0x0e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173edc +0x0ec:  mov    %ebx,0x10(%esp)
08173ee0 +0x0f0:  mov    0x18(%ebp),%eax
08173ee3 +0x0f3:  mov    %eax,0xc(%esp)
08173ee7 +0x0f7:  mov    0xc(%ebp),%eax
08173eea +0x0fa:  mov    %eax,0x8(%esp)
08173eee +0x0fe:  movl   $"[Taiwan, Billing] ChargeQuery Account:%s, Price:%d, Transaction:%s",0x4(%esp)
08173ef6 +0x106:  lea    -0x18(%ebp),%eax
08173ef9 +0x109:  mov    %eax,(%esp)
08173efc +0x10c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173f01 +0x111:  mov    $0x0,%eax
08173f06 +0x116:  add    $0x74,%esp
08173f09 +0x119:  pop    %ebx
08173f0a +0x11a:  pop    %ebp
08173f0b +0x11b:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::charge @ 0x8173df0

/* Taiwan::TaiwanCash::charge(char*, unsigned char, unsigned char, unsigned int, char*, char*,
   char*, char*, unsigned long long, Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::charge
              (char *param_1,uchar param_2,uchar param_3,uint param_4,char *param_5,char *param_6,
              char *param_7,char *param_8,ulonglong param_9,BillTransaction *param_10)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined3 in_stack_00000009;
  undefined4 *in_stack_00000030;
  ChargeQuery local_40 [20];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  cMyTrace local_1c [20];
  
  ChargeQuery::ChargeQuery(local_40,_param_2,(char *)param_9,"",(uint)param_5,param_3);
  bVar1 = processBilling<Taiwan::ChargeQuery>((TaiwanCash *)param_1,local_40);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_2c);
    if (cVar2 == '\x01') {
      *in_stack_00000030 = local_28;
      in_stack_00000030[1] = local_24;
      in_stack_00000030[2] = local_20;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000030 + 1),0);
      cMyTrace::cMyTrace(local_1c,"charge",0xce,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] ChargeQuery Account:%s, Price:%d, Transaction:%s",
                 _param_2,param_5,uVar3);
      local_2c = 0;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}
```

# gift

`_ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE`

`Taiwan::TaiwanCash::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, Taiwan::BillTransaction&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173b20  _ZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionE
#           Taiwan::TaiwanCash::gift(unsigned long long, int, int, char const*, char const*, char const*, char const*, Taiwan::BillTransaction&)
# range [0x08173b20, 0x08173c47]
08173b20 +0x000:  push   %ebp
08173b21 +0x001:  mov    %esp,%ebp
08173b23 +0x003:  push   %ebx
08173b24 +0x004:  sub    $0x74,%esp
08173b27 +0x007:  mov    0xc(%ebp),%eax
08173b2a +0x00a:  mov    %eax,-0x50(%ebp)
08173b2d +0x00d:  mov    0x10(%ebp),%eax
08173b30 +0x010:  mov    %eax,-0x4c(%ebp)
08173b33 +0x013:  mov    -0x50(%ebp),%eax
08173b36 +0x016:  mov    -0x4c(%ebp),%edx
08173b39 +0x019:  mov    0x18(%ebp),%ebx
08173b3c +0x01c:  mov    0x14(%ebp),%ecx
08173b3f +0x01f:  mov    %eax,0x18(%esp)
08173b43 +0x023:  mov    %edx,0x1c(%esp)
08173b47 +0x027:  mov    %ebx,0x14(%esp)
08173b4b +0x02b:  mov    %ecx,0x10(%esp)
08173b4f +0x02f:  mov    0x24(%ebp),%eax
08173b52 +0x032:  mov    %eax,0xc(%esp)
08173b56 +0x036:  mov    0x20(%ebp),%eax
08173b59 +0x039:  mov    %eax,0x8(%esp)
08173b5d +0x03d:  mov    0x1c(%ebp),%eax
08173b60 +0x040:  mov    %eax,0x4(%esp)
08173b64 +0x044:  lea    -0x44(%ebp),%eax
08173b67 +0x047:  mov    %eax,(%esp)
08173b6a +0x04a:  call   081747fe <_ZN6Taiwan9GiftQueryC1EPKcS2_S2_jjx>  ; Taiwan::GiftQuery::GiftQuery(char const*, char const*, char const*, unsigned int, unsigned int, long long)
08173b6f +0x04f:  lea    -0x44(%ebp),%eax
08173b72 +0x052:  mov    %eax,0x4(%esp)
08173b76 +0x056:  mov    0x8(%ebp),%eax
08173b79 +0x059:  mov    %eax,(%esp)
08173b7c +0x05c:  call   0817582c <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x380>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x380
08173b81 +0x061:  xor    $0x1,%eax
08173b84 +0x064:  test   %al,%al
08173b86 +0x066:  je     08173b92 <+0x72>
08173b88 +0x068:  mov    $0x4,%eax
08173b8d +0x06d:  jmp    08173c41 <+0x121>
08173b92 +0x072:  mov    -0x28(%ebp),%eax
08173b95 +0x075:  mov    %eax,0x4(%esp)
08173b99 +0x079:  mov    0x8(%ebp),%eax
08173b9c +0x07c:  mov    %eax,(%esp)
08173b9f +0x07f:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173ba4 +0x084:  xor    $0x1,%eax
08173ba7 +0x087:  test   %al,%al
08173ba9 +0x089:  je     08173bb3 <+0x93>
08173bab +0x08b:  mov    -0x28(%ebp),%eax
08173bae +0x08e:  jmp    08173c41 <+0x121>
08173bb3 +0x093:  mov    0x2c(%ebp),%eax
08173bb6 +0x096:  mov    -0x24(%ebp),%edx
08173bb9 +0x099:  mov    %edx,(%eax)
08173bbb +0x09b:  mov    -0x20(%ebp),%edx
08173bbe +0x09e:  mov    %edx,0x4(%eax)
08173bc1 +0x0a1:  mov    -0x1c(%ebp),%edx
08173bc4 +0x0a4:  mov    %edx,0x8(%eax)
08173bc7 +0x0a7:  mov    0x2c(%ebp),%eax
08173bca +0x0aa:  mov    0x8(%eax),%edx
08173bcd +0x0ad:  mov    0x4(%eax),%eax
08173bd0 +0x0b0:  movl   $0x0,0x8(%esp)
08173bd8 +0x0b8:  mov    %eax,(%esp)
08173bdb +0x0bb:  mov    %edx,0x4(%esp)
08173bdf +0x0bf:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08173be4 +0x0c4:  mov    %eax,%ebx
08173be6 +0x0c6:  movl   $0x0,0xc(%esp)
08173bee +0x0ce:  movl   $0x95,0x8(%esp)
08173bf6 +0x0d6:  movl   $&_ZZN6Taiwan10TaiwanCash4giftEyiiPKcS2_S2_S2_RNS_15BillTransactionEE12__FUNCTION__,0x4(%esp)
08173bfe +0x0de:  lea    -0x18(%ebp),%eax
08173c01 +0x0e1:  mov    %eax,(%esp)
08173c04 +0x0e4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173c09 +0x0e9:  mov    %ebx,0x18(%esp)
08173c0d +0x0ed:  mov    0x18(%ebp),%eax
08173c10 +0x0f0:  mov    %eax,0x14(%esp)
08173c14 +0x0f4:  mov    0x24(%ebp),%eax
08173c17 +0x0f7:  mov    %eax,0x10(%esp)
08173c1b +0x0fb:  mov    0x20(%ebp),%eax
08173c1e +0x0fe:  mov    %eax,0xc(%esp)
08173c22 +0x102:  mov    0x1c(%ebp),%eax
08173c25 +0x105:  mov    %eax,0x8(%esp)
08173c29 +0x109:  movl   $"[Taiwan, Billing] GiftQuery Account:%s, SendCharac:%s, RecvCharac:%s, Price:%d, Transaction:%s",0x4(%esp)
08173c31 +0x111:  lea    -0x18(%ebp),%eax
08173c34 +0x114:  mov    %eax,(%esp)
08173c37 +0x117:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173c3c +0x11c:  mov    $0x0,%eax
08173c41 +0x121:  add    $0x74,%esp
08173c44 +0x124:  pop    %ebx
08173c45 +0x125:  pop    %ebp
08173c46 +0x126:  ret
08173c47 +0x127:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::gift @ 0x8173b20

/* Taiwan::TaiwanCash::gift(unsigned long long, int, int, char const*, char const*, char const*,
   char const*, Taiwan::BillTransaction&) */

int Taiwan::TaiwanCash::gift
              (ulonglong param_1,int param_2,int param_3,char *param_4,char *param_5,char *param_6,
              char *param_7,BillTransaction *param_8)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_stack_00000028;
  GiftQuery local_48 [28];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  cMyTrace local_1c [20];
  
  GiftQuery::GiftQuery
            (local_48,param_5,param_6,param_7,param_3,(uint)param_4,CONCAT44(param_2,param_1._4_4_))
  ;
  bVar1 = processBilling<Taiwan::GiftQuery>((TaiwanCash *)param_1,local_48);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_2c);
    if (cVar2 == '\x01') {
      *in_stack_00000028 = local_28;
      in_stack_00000028[1] = local_24;
      in_stack_00000028[2] = local_20;
      uVar3 = NumberToString(*(ulonglong *)(in_stack_00000028 + 1),0);
      cMyTrace::cMyTrace(local_1c,"gift",0x95,0);
      cMyTrace::operator()
                (local_1c,
                 "[Taiwan, Billing] GiftQuery Account:%s, SendCharac:%s, RecvCharac:%s, Price:%d, Transaction:%s"
                 ,param_5,param_6,param_7,param_4,uVar3);
      local_2c = 0;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}
```

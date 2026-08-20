# confirm

`_ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE`

`Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173c48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173c48  _ZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionE
#           Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&)
# range [0x08173c48, 0x08173d1b]
08173c48 +0x00:  push   %ebp
08173c49 +0x01:  mov    %esp,%ebp
08173c4b +0x03:  push   %ebx
08173c4c +0x04:  sub    $0x34,%esp
08173c4f +0x07:  mov    0xc(%ebp),%eax
08173c52 +0x0a:  mov    0x8(%eax),%edx
08173c55 +0x0d:  mov    0x4(%eax),%eax
08173c58 +0x10:  or     %edx,%eax
08173c5a +0x12:  test   %eax,%eax
08173c5c +0x14:  jne    08173c68 <+0x20>
08173c5e +0x16:  mov    $0x0,%eax
08173c63 +0x1b:  jmp    08173d16 <+0xce>
08173c68 +0x20:  mov    0xc(%ebp),%eax
08173c6b +0x23:  mov    %eax,0x4(%esp)
08173c6f +0x27:  lea    -0x28(%ebp),%eax
08173c72 +0x2a:  mov    %eax,(%esp)
08173c75 +0x2d:  call   08174ac6 <_ZN6Taiwan12ConfirmQueryC1ERKNS_15BillTransactionE>  ; Taiwan::ConfirmQuery::ConfirmQuery(Taiwan::BillTransaction const&)
08173c7a +0x32:  lea    -0x28(%ebp),%eax
08173c7d +0x35:  mov    %eax,0x4(%esp)
08173c81 +0x39:  mov    0x8(%ebp),%eax
08173c84 +0x3c:  mov    %eax,(%esp)
08173c87 +0x3f:  call   081758e8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x43c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x43c
08173c8c +0x44:  xor    $0x1,%eax
08173c8f +0x47:  test   %al,%al
08173c91 +0x49:  je     08173c9a <+0x52>
08173c93 +0x4b:  mov    $0x4,%eax
08173c98 +0x50:  jmp    08173d16 <+0xce>
08173c9a +0x52:  mov    -0x28(%ebp),%eax
08173c9d +0x55:  mov    %eax,0x4(%esp)
08173ca1 +0x59:  mov    0x8(%ebp),%eax
08173ca4 +0x5c:  mov    %eax,(%esp)
08173ca7 +0x5f:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173cac +0x64:  xor    $0x1,%eax
08173caf +0x67:  test   %al,%al
08173cb1 +0x69:  je     08173cb8 <+0x70>
08173cb3 +0x6b:  mov    -0x28(%ebp),%eax
08173cb6 +0x6e:  jmp    08173d16 <+0xce>
08173cb8 +0x70:  mov    0xc(%ebp),%eax
08173cbb +0x73:  mov    0x8(%eax),%edx
08173cbe +0x76:  mov    0x4(%eax),%eax
08173cc1 +0x79:  movl   $0x0,0x8(%esp)
08173cc9 +0x81:  mov    %eax,(%esp)
08173ccc +0x84:  mov    %edx,0x4(%esp)
08173cd0 +0x88:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08173cd5 +0x8d:  mov    %eax,%ebx
08173cd7 +0x8f:  movl   $0x0,0xc(%esp)
08173cdf +0x97:  movl   $0xa7,0x8(%esp)
08173ce7 +0x9f:  movl   $&_ZZN6Taiwan10TaiwanCash7confirmERKNS_15BillTransactionEE12__FUNCTION__,0x4(%esp)
08173cef +0xa7:  lea    -0x18(%ebp),%eax
08173cf2 +0xaa:  mov    %eax,(%esp)
08173cf5 +0xad:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173cfa +0xb2:  mov    %ebx,0x8(%esp)
08173cfe +0xb6:  movl   $"[Taiwan, Billing] ConfirmQuery Transaction:%s",0x4(%esp)
08173d06 +0xbe:  lea    -0x18(%ebp),%eax
08173d09 +0xc1:  mov    %eax,(%esp)
08173d0c +0xc4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173d11 +0xc9:  mov    $0x0,%eax
08173d16 +0xce:  add    $0x34,%esp
08173d19 +0xd1:  pop    %ebx
08173d1a +0xd2:  pop    %ebp
08173d1b +0xd3:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::confirm @ 0x8173c48

/* Taiwan::TaiwanCash::confirm(Taiwan::BillTransaction const&) */

int __thiscall Taiwan::TaiwanCash::confirm(TaiwanCash *this,BillTransaction *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_2c [4];
  cMyTrace local_1c [20];
  
  if (*(int *)(param_1 + 4) == 0 && *(int *)(param_1 + 8) == 0) {
    local_2c[0] = 0;
  }
  else {
    ConfirmQuery::ConfirmQuery((ConfirmQuery *)local_2c,param_1);
    bVar1 = processBilling<Taiwan::ConfirmQuery>(this,(ConfirmQuery *)local_2c);
    if (bVar1) {
      cVar2 = checkResultCode(this,local_2c[0]);
      if (cVar2 == '\x01') {
        uVar3 = NumberToString(*(ulonglong *)(param_1 + 4),0);
        cMyTrace::cMyTrace(local_1c,"confirm",0xa7,0);
        cMyTrace::operator()(local_1c,"[Taiwan, Billing] ConfirmQuery Transaction:%s",uVar3);
        local_2c[0] = 0;
      }
    }
    else {
      local_2c[0] = 4;
    }
  }
  return local_2c[0];
}
```

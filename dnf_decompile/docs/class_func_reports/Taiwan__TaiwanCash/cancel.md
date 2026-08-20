# cancel

`_ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE`

`Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173d1c  _ZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionE
#           Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&)
# range [0x08173d1c, 0x08173def]
08173d1c +0x00:  push   %ebp
08173d1d +0x01:  mov    %esp,%ebp
08173d1f +0x03:  push   %ebx
08173d20 +0x04:  sub    $0x34,%esp
08173d23 +0x07:  mov    0xc(%ebp),%eax
08173d26 +0x0a:  mov    0x8(%eax),%edx
08173d29 +0x0d:  mov    0x4(%eax),%eax
08173d2c +0x10:  or     %edx,%eax
08173d2e +0x12:  test   %eax,%eax
08173d30 +0x14:  jne    08173d3c <+0x20>
08173d32 +0x16:  mov    $0x0,%eax
08173d37 +0x1b:  jmp    08173dea <+0xce>
08173d3c +0x20:  mov    0xc(%ebp),%eax
08173d3f +0x23:  mov    %eax,0x4(%esp)
08173d43 +0x27:  lea    -0x28(%ebp),%eax
08173d46 +0x2a:  mov    %eax,(%esp)
08173d49 +0x2d:  call   08174ce2 <_ZN6Taiwan11CancelQueryC1ERKNS_15BillTransactionE>  ; Taiwan::CancelQuery::CancelQuery(Taiwan::BillTransaction const&)
08173d4e +0x32:  lea    -0x28(%ebp),%eax
08173d51 +0x35:  mov    %eax,0x4(%esp)
08173d55 +0x39:  mov    0x8(%ebp),%eax
08173d58 +0x3c:  mov    %eax,(%esp)
08173d5b +0x3f:  call   081759a4 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x4f8>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x4f8
08173d60 +0x44:  xor    $0x1,%eax
08173d63 +0x47:  test   %al,%al
08173d65 +0x49:  je     08173d6e <+0x52>
08173d67 +0x4b:  mov    $0x4,%eax
08173d6c +0x50:  jmp    08173dea <+0xce>
08173d6e +0x52:  mov    -0x28(%ebp),%eax
08173d71 +0x55:  mov    %eax,0x4(%esp)
08173d75 +0x59:  mov    0x8(%ebp),%eax
08173d78 +0x5c:  mov    %eax,(%esp)
08173d7b +0x5f:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173d80 +0x64:  xor    $0x1,%eax
08173d83 +0x67:  test   %al,%al
08173d85 +0x69:  je     08173d8c <+0x70>
08173d87 +0x6b:  mov    -0x28(%ebp),%eax
08173d8a +0x6e:  jmp    08173dea <+0xce>
08173d8c +0x70:  mov    0xc(%ebp),%eax
08173d8f +0x73:  mov    0x8(%eax),%edx
08173d92 +0x76:  mov    0x4(%eax),%eax
08173d95 +0x79:  movl   $0x0,0x8(%esp)
08173d9d +0x81:  mov    %eax,(%esp)
08173da0 +0x84:  mov    %edx,0x4(%esp)
08173da4 +0x88:  call   08109098 <_Z14NumberToStringyi>  ; NumberToString(unsigned long long, int)
08173da9 +0x8d:  mov    %eax,%ebx
08173dab +0x8f:  movl   $0x0,0xc(%esp)
08173db3 +0x97:  movl   $0xb9,0x8(%esp)
08173dbb +0x9f:  movl   $&_ZZN6Taiwan10TaiwanCash6cancelERKNS_15BillTransactionEE12__FUNCTION__,0x4(%esp)
08173dc3 +0xa7:  lea    -0x18(%ebp),%eax
08173dc6 +0xaa:  mov    %eax,(%esp)
08173dc9 +0xad:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173dce +0xb2:  mov    %ebx,0x8(%esp)
08173dd2 +0xb6:  movl   $"[Taiwan, Billing] CancelQuery Transaction:%s",0x4(%esp)
08173dda +0xbe:  lea    -0x18(%ebp),%eax
08173ddd +0xc1:  mov    %eax,(%esp)
08173de0 +0xc4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173de5 +0xc9:  mov    $0x0,%eax
08173dea +0xce:  add    $0x34,%esp
08173ded +0xd1:  pop    %ebx
08173dee +0xd2:  pop    %ebp
08173def +0xd3:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::cancel @ 0x8173d1c

/* Taiwan::TaiwanCash::cancel(Taiwan::BillTransaction const&) */

int __thiscall Taiwan::TaiwanCash::cancel(TaiwanCash *this,BillTransaction *param_1)

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
    CancelQuery::CancelQuery((CancelQuery *)local_2c,param_1);
    bVar1 = processBilling<Taiwan::CancelQuery>(this,(CancelQuery *)local_2c);
    if (bVar1) {
      cVar2 = checkResultCode(this,local_2c[0]);
      if (cVar2 == '\x01') {
        uVar3 = NumberToString(*(ulonglong *)(param_1 + 4),0);
        cMyTrace::cMyTrace(local_1c,"cancel",0xb9,0);
        cMyTrace::operator()(local_1c,"[Taiwan, Billing] CancelQuery Transaction:%s",uVar3);
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

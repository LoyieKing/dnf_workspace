# ceraPoint

`_ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci`

`Taiwan::TaiwanCash::ceraPoint(char*, char*, char, char*, char*, char, char, int)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173f0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173f0c  _ZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cci
#           Taiwan::TaiwanCash::ceraPoint(char*, char*, char, char*, char*, char, char, int)
# range [0x08173f0c, 0x08173ff9]
08173f0c +0x00:  push   %ebp
08173f0d +0x01:  mov    %esp,%ebp
08173f0f +0x03:  push   %ebx
08173f10 +0x04:  sub    $0x74,%esp
08173f13 +0x07:  mov    0x14(%ebp),%ecx
08173f16 +0x0a:  mov    0x20(%ebp),%edx
08173f19 +0x0d:  mov    0x24(%ebp),%eax
08173f1c +0x10:  mov    %cl,-0x3c(%ebp)
08173f1f +0x13:  mov    %dl,-0x40(%ebp)
08173f22 +0x16:  mov    %al,-0x44(%ebp)
08173f25 +0x19:  movsbl -0x3c(%ebp),%ebx
08173f29 +0x1d:  movsbl -0x44(%ebp),%ecx
08173f2d +0x21:  movsbl -0x40(%ebp),%edx
08173f31 +0x25:  mov    0x28(%ebp),%eax
08173f34 +0x28:  mov    %ebx,0x20(%esp)
08173f38 +0x2c:  mov    %ecx,0x1c(%esp)
08173f3c +0x30:  mov    %edx,0x18(%esp)
08173f40 +0x34:  mov    %eax,0x14(%esp)
08173f44 +0x38:  mov    0x1c(%ebp),%eax
08173f47 +0x3b:  mov    %eax,0x10(%esp)
08173f4b +0x3f:  mov    0x18(%ebp),%eax
08173f4e +0x42:  mov    %eax,0xc(%esp)
08173f52 +0x46:  mov    0x10(%ebp),%eax
08173f55 +0x49:  mov    %eax,0x8(%esp)
08173f59 +0x4d:  mov    0xc(%ebp),%eax
08173f5c +0x50:  mov    %eax,0x4(%esp)
08173f60 +0x54:  lea    -0x34(%ebp),%eax
08173f63 +0x57:  mov    %eax,(%esp)
08173f66 +0x5a:  call   081751b6 <_ZN6Taiwan14CeraPointQueryC1EPKcS2_PcS3_jccc>  ; Taiwan::CeraPointQuery::CeraPointQuery(char const*, char const*, char*, char*, unsigned int, char, char, char)
08173f6b +0x5f:  lea    -0x34(%ebp),%eax
08173f6e +0x62:  mov    %eax,0x4(%esp)
08173f72 +0x66:  mov    0x8(%ebp),%eax
08173f75 +0x69:  mov    %eax,(%esp)
08173f78 +0x6c:  call   08175b1c <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x670>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x670
08173f7d +0x71:  xor    $0x1,%eax
08173f80 +0x74:  test   %al,%al
08173f82 +0x76:  je     08173f8b <+0x7f>
08173f84 +0x78:  mov    $0x4,%eax
08173f89 +0x7d:  jmp    08173ff3 <+0xe7>
08173f8b +0x7f:  mov    -0x1c(%ebp),%eax
08173f8e +0x82:  mov    %eax,0x4(%esp)
08173f92 +0x86:  mov    0x8(%ebp),%eax
08173f95 +0x89:  mov    %eax,(%esp)
08173f98 +0x8c:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173f9d +0x91:  xor    $0x1,%eax
08173fa0 +0x94:  test   %al,%al
08173fa2 +0x96:  je     08173fa9 <+0x9d>
08173fa4 +0x98:  mov    -0x1c(%ebp),%eax
08173fa7 +0x9b:  jmp    08173ff3 <+0xe7>
08173fa9 +0x9d:  movsbl -0x3c(%ebp),%ebx
08173fad +0xa1:  movl   $0x0,0xc(%esp)
08173fb5 +0xa9:  movl   $0xe0,0x8(%esp)
08173fbd +0xb1:  movl   $&_ZZN6Taiwan10TaiwanCash9ceraPointEPcS1_cS1_S1_cciE12__FUNCTION__,0x4(%esp)
08173fc5 +0xb9:  lea    -0x18(%ebp),%eax
08173fc8 +0xbc:  mov    %eax,(%esp)
08173fcb +0xbf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173fd0 +0xc4:  mov    0x28(%ebp),%eax
08173fd3 +0xc7:  mov    %eax,0xc(%esp)
08173fd7 +0xcb:  mov    %ebx,0x8(%esp)
08173fdb +0xcf:  movl   $"[Taiwan, Billing] CeraPointQuery Command:%c, Price:%d",0x4(%esp)
08173fe3 +0xd7:  lea    -0x18(%ebp),%eax
08173fe6 +0xda:  mov    %eax,(%esp)
08173fe9 +0xdd:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08173fee +0xe2:  mov    $0x0,%eax
08173ff3 +0xe7:  add    $0x74,%esp
08173ff6 +0xea:  pop    %ebx
08173ff7 +0xeb:  pop    %ebp
08173ff8 +0xec:  ret
08173ff9 +0xed:  nop
```

## 反编译 C

```c
// Taiwan::TaiwanCash::ceraPoint @ 0x8173f0c

/* Taiwan::TaiwanCash::ceraPoint(char*, char*, char, char*, char*, char, char, int) */

int __thiscall
Taiwan::TaiwanCash::ceraPoint
          (TaiwanCash *this,char *param_1,char *param_2,char param_3,char *param_4,char *param_5,
          char param_6,char param_7,int param_8)

{
  bool bVar1;
  char cVar2;
  CeraPointQuery local_38 [24];
  int local_20;
  cMyTrace local_1c [20];
  
  CeraPointQuery::CeraPointQuery
            (local_38,param_1,param_2,param_4,param_5,param_8,param_6,param_7,param_3);
  bVar1 = processBilling<Taiwan::CeraPointQuery>(this,local_38);
  if (bVar1) {
    cVar2 = checkResultCode(this,local_20);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"ceraPoint",0xe0,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] CeraPointQuery Command:%c, Price:%d",(int)param_3,
                 param_8);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}
```

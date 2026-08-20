# getBalance

`_ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_`

`Taiwan::TaiwanCash::getBalance(char const*, int&, int&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x0817381a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817381a  _ZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_
#           Taiwan::TaiwanCash::getBalance(char const*, int&, int&)
# range [0x0817381a, 0x081738e5]
0817381a +0x00:  push   %ebp
0817381b +0x01:  mov    %esp,%ebp
0817381d +0x03:  push   %edi
0817381e +0x04:  push   %esi
0817381f +0x05:  push   %ebx
08173820 +0x06:  sub    $0x4c,%esp
08173823 +0x09:  mov    0xc(%ebp),%eax
08173826 +0x0c:  mov    %eax,0x4(%esp)
0817382a +0x10:  lea    -0x38(%ebp),%eax
0817382d +0x13:  mov    %eax,(%esp)
08173830 +0x16:  call   08174290 <_ZN6Taiwan17BalancePointQueryC1EPKc>  ; Taiwan::BalancePointQuery::BalancePointQuery(char const*)
08173835 +0x1b:  lea    -0x38(%ebp),%eax
08173838 +0x1e:  mov    %eax,0x4(%esp)
0817383c +0x22:  mov    0x8(%ebp),%eax
0817383f +0x25:  mov    %eax,(%esp)
08173842 +0x28:  call   081756b4 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x208>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x208
08173847 +0x2d:  xor    $0x1,%eax
0817384a +0x30:  test   %al,%al
0817384c +0x32:  je     08173858 <+0x3e>
0817384e +0x34:  mov    $0x4,%eax
08173853 +0x39:  jmp    081738de <+0xc4>
08173858 +0x3e:  mov    -0x2c(%ebp),%eax
0817385b +0x41:  mov    %eax,0x4(%esp)
0817385f +0x45:  mov    0x8(%ebp),%eax
08173862 +0x48:  mov    %eax,(%esp)
08173865 +0x4b:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
0817386a +0x50:  xor    $0x1,%eax
0817386d +0x53:  test   %al,%al
0817386f +0x55:  je     08173876 <+0x5c>
08173871 +0x57:  mov    -0x2c(%ebp),%eax
08173874 +0x5a:  jmp    081738de <+0xc4>
08173876 +0x5c:  mov    -0x34(%ebp),%eax
08173879 +0x5f:  mov    %eax,%edx
0817387b +0x61:  mov    0x10(%ebp),%eax
0817387e +0x64:  mov    %edx,(%eax)
08173880 +0x66:  mov    -0x30(%ebp),%eax
08173883 +0x69:  mov    %eax,%edx
08173885 +0x6b:  mov    0x14(%ebp),%eax
08173888 +0x6e:  mov    %edx,(%eax)
0817388a +0x70:  mov    -0x2c(%ebp),%edi
0817388d +0x73:  mov    0x14(%ebp),%eax
08173890 +0x76:  mov    (%eax),%esi
08173892 +0x78:  mov    0x10(%ebp),%eax
08173895 +0x7b:  mov    (%eax),%ebx
08173897 +0x7d:  movl   $0x0,0xc(%esp)
0817389f +0x85:  movl   $0x5a,0x8(%esp)
081738a7 +0x8d:  movl   $&_ZZN6Taiwan10TaiwanCash10getBalanceEPKcRiS3_E12__FUNCTION__,0x4(%esp)
081738af +0x95:  lea    -0x28(%ebp),%eax
081738b2 +0x98:  mov    %eax,(%esp)
081738b5 +0x9b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081738ba +0xa0:  mov    %edi,0x10(%esp)
081738be +0xa4:  mov    %esi,0xc(%esp)
081738c2 +0xa8:  mov    %ebx,0x8(%esp)
081738c6 +0xac:  movl   $"[Taiwan, Billing] BalancePointQuery Balance:%d, Point:%d, Result:%d",0x4(%esp)
081738ce +0xb4:  lea    -0x28(%ebp),%eax
081738d1 +0xb7:  mov    %eax,(%esp)
081738d4 +0xba:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081738d9 +0xbf:  mov    $0x0,%eax
081738de +0xc4:  add    $0x4c,%esp
081738e1 +0xc7:  pop    %ebx
081738e2 +0xc8:  pop    %esi
081738e3 +0xc9:  pop    %edi
081738e4 +0xca:  pop    %ebp
081738e5 +0xcb:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::getBalance @ 0x817381a

/* Taiwan::TaiwanCash::getBalance(char const*, int&, int&) */

int __thiscall
Taiwan::TaiwanCash::getBalance(TaiwanCash *this,char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  BalancePointQuery local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  cMyTrace local_2c [28];
  
  BalancePointQuery::BalancePointQuery(local_3c,param_1);
  bVar3 = processBilling<Taiwan::BalancePointQuery>(this,local_3c);
  if (bVar3) {
    cVar4 = checkResultCode(this,local_30);
    if (cVar4 == '\x01') {
      *param_2 = local_38;
      *param_3 = local_34;
      iVar1 = *param_3;
      iVar2 = *param_2;
      cMyTrace::cMyTrace(local_2c,"getBalance",0x5a,0);
      cMyTrace::operator()
                (local_2c,"[Taiwan, Billing] BalancePointQuery Balance:%d, Point:%d, Result:%d",
                 iVar2,iVar1,local_30);
      local_30 = 0;
    }
  }
  else {
    local_30 = 4;
  }
  return local_30;
}
```

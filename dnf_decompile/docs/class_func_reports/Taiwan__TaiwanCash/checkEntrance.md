# checkEntrance

`_ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc`

`Taiwan::TaiwanCash::checkEntrance(char const*, char&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x081736ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081736ce  _ZN6Taiwan10TaiwanCash13checkEntranceEPKcRc
#           Taiwan::TaiwanCash::checkEntrance(char const*, char&)
# range [0x081736ce, 0x08173765]
081736ce +0x00:  push   %ebp
081736cf +0x01:  mov    %esp,%ebp
081736d1 +0x03:  push   %ebx
081736d2 +0x04:  sub    $0x34,%esp
081736d5 +0x07:  lea    -0x20(%ebp),%eax
081736d8 +0x0a:  mov    %eax,(%esp)
081736db +0x0d:  call   08173ffa <_ZN6Taiwan13EntranceQueryC1Ev>  ; Taiwan::EntranceQuery::EntranceQuery()
081736e0 +0x12:  lea    -0x20(%ebp),%eax
081736e3 +0x15:  mov    %eax,0x4(%esp)
081736e7 +0x19:  mov    0x8(%ebp),%eax
081736ea +0x1c:  mov    %eax,(%esp)
081736ed +0x1f:  call   0817555c <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0xb0>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0xb0
081736f2 +0x24:  xor    $0x1,%eax
081736f5 +0x27:  test   %al,%al
081736f7 +0x29:  je     08173700 <+0x32>
081736f9 +0x2b:  mov    $0x4,%eax
081736fe +0x30:  jmp    08173760 <+0x92>
08173700 +0x32:  mov    -0x1c(%ebp),%eax
08173703 +0x35:  mov    %eax,0x4(%esp)
08173707 +0x39:  mov    0x8(%ebp),%eax
0817370a +0x3c:  mov    %eax,(%esp)
0817370d +0x3f:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
08173712 +0x44:  xor    $0x1,%eax
08173715 +0x47:  test   %al,%al
08173717 +0x49:  je     0817371e <+0x50>
08173719 +0x4b:  mov    -0x1c(%ebp),%eax
0817371c +0x4e:  jmp    08173760 <+0x92>
0817371e +0x50:  mov    -0x1c(%ebp),%ebx
08173721 +0x53:  movl   $0x0,0xc(%esp)
08173729 +0x5b:  movl   $0x34,0x8(%esp)
08173731 +0x63:  movl   $&_ZZN6Taiwan10TaiwanCash13checkEntranceEPKcRcE12__FUNCTION__,0x4(%esp)
08173739 +0x6b:  lea    -0x18(%ebp),%eax
0817373c +0x6e:  mov    %eax,(%esp)
0817373f +0x71:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08173744 +0x76:  mov    %ebx,0x8(%esp)
08173748 +0x7a:  movl   $"[Taiwan, Billing] EntranceQuery Entrance:%d",0x4(%esp)
08173750 +0x82:  lea    -0x18(%ebp),%eax
08173753 +0x85:  mov    %eax,(%esp)
08173756 +0x88:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817375b +0x8d:  mov    $0x0,%eax
08173760 +0x92:  add    $0x34,%esp
08173763 +0x95:  pop    %ebx
08173764 +0x96:  pop    %ebp
08173765 +0x97:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::checkEntrance @ 0x81736ce

/* Taiwan::TaiwanCash::checkEntrance(char const*, char&) */

int Taiwan::TaiwanCash::checkEntrance(char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  EntranceQuery local_24 [4];
  int local_20;
  cMyTrace local_1c [20];
  
  EntranceQuery::EntranceQuery(local_24);
  bVar1 = processBilling<Taiwan::EntranceQuery>((TaiwanCash *)param_1,local_24);
  if (bVar1) {
    cVar2 = checkResultCode((TaiwanCash *)param_1,local_20);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_1c,"checkEntrance",0x34,0);
      cMyTrace::operator()(local_1c,"[Taiwan, Billing] EntranceQuery Entrance:%d",local_20);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}
```

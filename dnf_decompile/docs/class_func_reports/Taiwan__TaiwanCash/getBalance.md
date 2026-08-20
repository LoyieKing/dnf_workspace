# getBalance

`_ZN6Taiwan10TaiwanCash10getBalanceEPKcRi`

`Taiwan::TaiwanCash::getBalance(char const*, int&)`

| 类 | 地址 |
|---|---|
| `Taiwan::TaiwanCash` | `0x08173766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173766  _ZN6Taiwan10TaiwanCash10getBalanceEPKcRi
#           Taiwan::TaiwanCash::getBalance(char const*, int&)
# range [0x08173766, 0x08173819]
08173766 +0x00:  push   %ebp
08173767 +0x01:  mov    %esp,%ebp
08173769 +0x03:  push   %esi
0817376a +0x04:  push   %ebx
0817376b +0x05:  sub    $0x30,%esp
0817376e +0x08:  mov    0xc(%ebp),%eax
08173771 +0x0b:  mov    %eax,0x4(%esp)
08173775 +0x0f:  lea    -0x24(%ebp),%eax
08173778 +0x12:  mov    %eax,(%esp)
0817377b +0x15:  call   08174030 <_ZN6Taiwan12BalanceQueryC1EPKc>  ; Taiwan::BalanceQuery::BalanceQuery(char const*)
08173780 +0x1a:  lea    -0x24(%ebp),%eax
08173783 +0x1d:  mov    %eax,0x4(%esp)
08173787 +0x21:  mov    0x8(%ebp),%eax
0817378a +0x24:  mov    %eax,(%esp)
0817378d +0x27:  call   081755f8 <_GLOBAL__I__ZN6Taiwan10TaiwanCashC2Ehs+0x14c>  ; global constructors keyed to Taiwan::TaiwanCash::TaiwanCash(unsigned char, short)+0x14c
08173792 +0x2c:  xor    $0x1,%eax
08173795 +0x2f:  test   %al,%al
08173797 +0x31:  je     081737a0 <+0x3a>
08173799 +0x33:  mov    $0x4,%eax
0817379e +0x38:  jmp    08173813 <+0xad>
081737a0 +0x3a:  mov    -0x1c(%ebp),%eax
081737a3 +0x3d:  mov    %eax,0x4(%esp)
081737a7 +0x41:  mov    0x8(%ebp),%eax
081737aa +0x44:  mov    %eax,(%esp)
081737ad +0x47:  call   0817366e <_ZN6Taiwan10TaiwanCash15checkResultCodeEi>  ; Taiwan::TaiwanCash::checkResultCode(int)
081737b2 +0x4c:  xor    $0x1,%eax
081737b5 +0x4f:  test   %al,%al
081737b7 +0x51:  je     081737be <+0x58>
081737b9 +0x53:  mov    -0x1c(%ebp),%eax
081737bc +0x56:  jmp    08173813 <+0xad>
081737be +0x58:  mov    -0x20(%ebp),%eax
081737c1 +0x5b:  mov    %eax,%edx
081737c3 +0x5d:  mov    0x10(%ebp),%eax
081737c6 +0x60:  mov    %edx,(%eax)
081737c8 +0x62:  mov    -0x1c(%ebp),%esi
081737cb +0x65:  mov    0x10(%ebp),%eax
081737ce +0x68:  mov    (%eax),%ebx
081737d0 +0x6a:  movl   $0x0,0xc(%esp)
081737d8 +0x72:  movl   $0x46,0x8(%esp)
081737e0 +0x7a:  movl   $&_ZZN6Taiwan10TaiwanCash10getBalanceEPKcRiE12__FUNCTION__,0x4(%esp)
081737e8 +0x82:  lea    -0x18(%ebp),%eax
081737eb +0x85:  mov    %eax,(%esp)
081737ee +0x88:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081737f3 +0x8d:  mov    %esi,0xc(%esp)
081737f7 +0x91:  mov    %ebx,0x8(%esp)
081737fb +0x95:  movl   $"[Taiwan, Billing] BalanceQuery Balance:%d, Result:%d",0x4(%esp)
08173803 +0x9d:  lea    -0x18(%ebp),%eax
08173806 +0xa0:  mov    %eax,(%esp)
08173809 +0xa3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817380e +0xa8:  mov    $0x0,%eax
08173813 +0xad:  add    $0x30,%esp
08173816 +0xb0:  pop    %ebx
08173817 +0xb1:  pop    %esi
08173818 +0xb2:  pop    %ebp
08173819 +0xb3:  ret
```

## 反编译 C

```c
// Taiwan::TaiwanCash::getBalance @ 0x8173766

/* Taiwan::TaiwanCash::getBalance(char const*, int&) */

int __thiscall Taiwan::TaiwanCash::getBalance(TaiwanCash *this,char *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  BalanceQuery local_28 [4];
  int local_24;
  int local_20;
  cMyTrace local_1c [16];
  
  BalanceQuery::BalanceQuery(local_28,param_1);
  bVar2 = processBilling<Taiwan::BalanceQuery>(this,local_28);
  if (bVar2) {
    cVar3 = checkResultCode(this,local_20);
    if (cVar3 == '\x01') {
      *param_2 = local_24;
      iVar1 = *param_2;
      cMyTrace::cMyTrace(local_1c,"getBalance",0x46,0);
      cMyTrace::operator()
                (local_1c,"[Taiwan, Billing] BalanceQuery Balance:%d, Result:%d",iVar1,local_20);
      local_20 = 0;
    }
  }
  else {
    local_20 = 4;
  }
  return local_20;
}
```

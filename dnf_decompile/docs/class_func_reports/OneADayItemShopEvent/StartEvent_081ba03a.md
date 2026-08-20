# StartEvent

`_ZN20OneADayItemShopEvent10StartEventE10Word_Param`

`OneADayItemShopEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba03a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba03a  _ZN20OneADayItemShopEvent10StartEventE10Word_Param
#           OneADayItemShopEvent::StartEvent(Word_Param)
# range [0x081ba03a, 0x081ba0ad]
081ba03a +0x00:  push   %ebp
081ba03b +0x01:  mov    %esp,%ebp
081ba03d +0x03:  push   %esi
081ba03e +0x04:  push   %ebx
081ba03f +0x05:  sub    $0x20,%esp
081ba042 +0x08:  mov    0x8(%ebp),%eax
081ba045 +0x0b:  mov    (%eax),%eax
081ba047 +0x0d:  add    $0x8,%eax
081ba04a +0x10:  mov    (%eax),%edx
081ba04c +0x12:  mov    0x8(%ebp),%eax
081ba04f +0x15:  mov    %eax,(%esp)
081ba052 +0x18:  call   *%edx
081ba054 +0x1a:  mov    0x8(%ebp),%eax
081ba057 +0x1d:  movzwl 0x6(%eax),%eax
081ba05b +0x21:  movswl %ax,%esi
081ba05e +0x24:  mov    0x8(%ebp),%eax
081ba061 +0x27:  movzwl 0x4(%eax),%eax
081ba065 +0x2b:  movswl %ax,%ebx
081ba068 +0x2e:  movl   $0x0,0xc(%esp)
081ba070 +0x36:  movl   $0x20,0x8(%esp)
081ba078 +0x3e:  movl   $&_ZZN20OneADayItemShopEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081ba080 +0x46:  lea    -0x18(%ebp),%eax
081ba083 +0x49:  mov    %eax,(%esp)
081ba086 +0x4c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081ba08b +0x51:  mov    %esi,0xc(%esp)
081ba08f +0x55:  mov    %ebx,0x8(%esp)
081ba093 +0x59:  movl   $"OneADayItemShopEvent(AddInfo:%d,%d) Event Start!",0x4(%esp)
081ba09b +0x61:  lea    -0x18(%ebp),%eax
081ba09e +0x64:  mov    %eax,(%esp)
081ba0a1 +0x67:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081ba0a6 +0x6c:  add    $0x20,%esp
081ba0a9 +0x6f:  pop    %ebx
081ba0aa +0x70:  pop    %esi
081ba0ab +0x71:  pop    %ebp
081ba0ac +0x72:  ret
081ba0ad +0x73:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::StartEvent @ 0x81ba03a

/* OneADayItemShopEvent::StartEvent(Word_Param) */

void OneADayItemShopEvent::StartEvent(int *param_1)

{
  short sVar1;
  int iVar2;
  cMyTrace local_1c [16];
  
  (**(code **)(*param_1 + 8))(param_1);
  sVar1 = *(short *)((int)param_1 + 6);
  iVar2 = param_1[1];
  cMyTrace::cMyTrace(local_1c,"virtual void OneADayItemShopEvent::StartEvent(Word_Param)",0x20,0);
  cMyTrace::operator()
            (local_1c,"OneADayItemShopEvent(AddInfo:%d,%d) Event Start!",(int)(short)iVar2,
             (int)sVar1);
  return;
}
```

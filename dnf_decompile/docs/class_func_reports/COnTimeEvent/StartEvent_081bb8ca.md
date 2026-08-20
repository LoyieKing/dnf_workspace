# StartEvent

`_ZN12COnTimeEvent10StartEventE10Word_Param`

`COnTimeEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb8ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb8ca  _ZN12COnTimeEvent10StartEventE10Word_Param
#           COnTimeEvent::StartEvent(Word_Param)
# range [0x081bb8ca, 0x081bb919]
081bb8ca +0x00:  push   %ebp
081bb8cb +0x01:  mov    %esp,%ebp
081bb8cd +0x03:  sub    $0x28,%esp
081bb8d0 +0x06:  mov    0x8(%ebp),%eax
081bb8d3 +0x09:  mov    (%eax),%eax
081bb8d5 +0x0b:  add    $0x8,%eax
081bb8d8 +0x0e:  mov    (%eax),%edx
081bb8da +0x10:  mov    0x8(%ebp),%eax
081bb8dd +0x13:  mov    %eax,(%esp)
081bb8e0 +0x16:  call   *%edx
081bb8e2 +0x18:  movl   $0x0,0xc(%esp)
081bb8ea +0x20:  movl   $0x47,0x8(%esp)
081bb8f2 +0x28:  movl   $&_ZZN12COnTimeEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081bb8fa +0x30:  lea    -0x18(%ebp),%eax
081bb8fd +0x33:  mov    %eax,(%esp)
081bb900 +0x36:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081bb905 +0x3b:  movl   $"COnTimeEvent Event Start!",0x4(%esp)
081bb90d +0x43:  lea    -0x18(%ebp),%eax
081bb910 +0x46:  mov    %eax,(%esp)
081bb913 +0x49:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081bb918 +0x4e:  leave
081bb919 +0x4f:  ret
```

## 反编译 C

```c
// COnTimeEvent::StartEvent @ 0x81bb8ca

/* COnTimeEvent::StartEvent(Word_Param) */

void COnTimeEvent::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void COnTimeEvent::StartEvent(Word_Param)",0x47,0);
  cMyTrace::operator()(local_1c,"COnTimeEvent Event Start!");
  return;
}
```

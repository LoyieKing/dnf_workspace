# StartEvent

`_ZN10BingoEvent10StartEventE10Word_Param`

`BingoEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9b68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9b68  _ZN10BingoEvent10StartEventE10Word_Param
#           BingoEvent::StartEvent(Word_Param)
# range [0x080c9b68, 0x080c9bb7]
080c9b68 +0x00:  push   %ebp
080c9b69 +0x01:  mov    %esp,%ebp
080c9b6b +0x03:  sub    $0x28,%esp
080c9b6e +0x06:  mov    0x8(%ebp),%eax
080c9b71 +0x09:  mov    (%eax),%eax
080c9b73 +0x0b:  add    $0x8,%eax
080c9b76 +0x0e:  mov    (%eax),%edx
080c9b78 +0x10:  mov    0x8(%ebp),%eax
080c9b7b +0x13:  mov    %eax,(%esp)
080c9b7e +0x16:  call   *%edx
080c9b80 +0x18:  movl   $0x0,0xc(%esp)
080c9b88 +0x20:  movl   $0x30,0x8(%esp)
080c9b90 +0x28:  movl   $&_ZZN10BingoEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
080c9b98 +0x30:  lea    -0x18(%ebp),%eax
080c9b9b +0x33:  mov    %eax,(%esp)
080c9b9e +0x36:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080c9ba3 +0x3b:  movl   $"BingoEvent Event Start!",0x4(%esp)
080c9bab +0x43:  lea    -0x18(%ebp),%eax
080c9bae +0x46:  mov    %eax,(%esp)
080c9bb1 +0x49:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080c9bb6 +0x4e:  leave
080c9bb7 +0x4f:  ret
```

## 反编译 C

```c
// BingoEvent::StartEvent @ 0x80c9b68

/* BingoEvent::StartEvent(Word_Param) */

void BingoEvent::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void BingoEvent::StartEvent(Word_Param)",0x30,0);
  cMyTrace::operator()(local_1c,"BingoEvent Event Start!");
  return;
}
```

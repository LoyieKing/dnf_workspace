# StartEvent

`_ZN27NewAccountLevelUpEventToJob10StartEventE10Word_Param`

`NewAccountLevelUpEventToJob::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b81f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b81f6  _ZN27NewAccountLevelUpEventToJob10StartEventE10Word_Param
#           NewAccountLevelUpEventToJob::StartEvent(Word_Param)
# range [0x081b81f6, 0x081b8245]
081b81f6 +0x00:  push   %ebp
081b81f7 +0x01:  mov    %esp,%ebp
081b81f9 +0x03:  sub    $0x28,%esp
081b81fc +0x06:  mov    0x8(%ebp),%eax
081b81ff +0x09:  mov    (%eax),%eax
081b8201 +0x0b:  add    $0x8,%eax
081b8204 +0x0e:  mov    (%eax),%edx
081b8206 +0x10:  mov    0x8(%ebp),%eax
081b8209 +0x13:  mov    %eax,(%esp)
081b820c +0x16:  call   *%edx
081b820e +0x18:  movl   $0x0,0xc(%esp)
081b8216 +0x20:  movl   $0x18,0x8(%esp)
081b821e +0x28:  movl   $&_ZZN27NewAccountLevelUpEventToJob10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081b8226 +0x30:  lea    -0x18(%ebp),%eax
081b8229 +0x33:  mov    %eax,(%esp)
081b822c +0x36:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b8231 +0x3b:  movl   $"NewAccountLevelUpEvent Event Start!",0x4(%esp)
081b8239 +0x43:  lea    -0x18(%ebp),%eax
081b823c +0x46:  mov    %eax,(%esp)
081b823f +0x49:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b8244 +0x4e:  leave
081b8245 +0x4f:  ret
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::StartEvent @ 0x81b81f6

/* NewAccountLevelUpEventToJob::StartEvent(Word_Param) */

void NewAccountLevelUpEventToJob::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void NewAccountLevelUpEventToJob::StartEvent(Word_Param)",
                     0x18,0);
  cMyTrace::operator()(local_1c,"NewAccountLevelUpEvent Event Start!");
  return;
}
```

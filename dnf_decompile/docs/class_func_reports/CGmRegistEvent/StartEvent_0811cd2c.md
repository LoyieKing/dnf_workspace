# StartEvent

`_ZN14CGmRegistEvent10StartEventE10Word_Param`

`CGmRegistEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811cd2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cd2c  _ZN14CGmRegistEvent10StartEventE10Word_Param
#           CGmRegistEvent::StartEvent(Word_Param)
# range [0x0811cd2c, 0x0811cd75]
0811cd2c +0x00:  push   %ebp
0811cd2d +0x01:  mov    %esp,%ebp
0811cd2f +0x03:  sub    $0x28,%esp
0811cd32 +0x06:  movl   $0x1,(%esp)
0811cd39 +0x0d:  call   0843982c <_ZN15DB_UpdateGMData11makeRequestEb>  ; DB_UpdateGMData::makeRequest(bool)
0811cd3e +0x12:  movl   $0x0,0xc(%esp)
0811cd46 +0x1a:  movl   $0x1d,0x8(%esp)
0811cd4e +0x22:  movl   $&_ZZN14CGmRegistEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
0811cd56 +0x2a:  lea    -0x18(%ebp),%eax
0811cd59 +0x2d:  mov    %eax,(%esp)
0811cd5c +0x30:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cd61 +0x35:  movl   $"CGmRegistEvent Start!",0x4(%esp)
0811cd69 +0x3d:  lea    -0x18(%ebp),%eax
0811cd6c +0x40:  mov    %eax,(%esp)
0811cd6f +0x43:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cd74 +0x48:  leave
0811cd75 +0x49:  ret
```

## 反编译 C

```c
// CGmRegistEvent::StartEvent @ 0x811cd2c

/* CGmRegistEvent::StartEvent(Word_Param) */

void CGmRegistEvent::StartEvent(void)

{
  cMyTrace local_1c [24];
  
  DB_UpdateGMData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::StartEvent(Word_Param)",0x1d,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent Start!");
  return;
}
```

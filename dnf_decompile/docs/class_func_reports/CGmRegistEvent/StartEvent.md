# StartEvent

`_ZN14CGmRegistEvent10StartEventEv`

`CGmRegistEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811cce2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cce2  _ZN14CGmRegistEvent10StartEventEv
#           CGmRegistEvent::StartEvent()
# range [0x0811cce2, 0x0811cd2b]
0811cce2 +0x00:  push   %ebp
0811cce3 +0x01:  mov    %esp,%ebp
0811cce5 +0x03:  sub    $0x28,%esp
0811cce8 +0x06:  movl   $0x1,(%esp)
0811ccef +0x0d:  call   0843982c <_ZN15DB_UpdateGMData11makeRequestEb>  ; DB_UpdateGMData::makeRequest(bool)
0811ccf4 +0x12:  movl   $0x0,0xc(%esp)
0811ccfc +0x1a:  movl   $0x16,0x8(%esp)
0811cd04 +0x22:  movl   $&_ZZN14CGmRegistEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
0811cd0c +0x2a:  lea    -0x18(%ebp),%eax
0811cd0f +0x2d:  mov    %eax,(%esp)
0811cd12 +0x30:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0811cd17 +0x35:  movl   $"CGmRegistEvent Start!",0x4(%esp)
0811cd1f +0x3d:  lea    -0x18(%ebp),%eax
0811cd22 +0x40:  mov    %eax,(%esp)
0811cd25 +0x43:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0811cd2a +0x48:  leave
0811cd2b +0x49:  ret
```

## 反编译 C

```c
// CGmRegistEvent::StartEvent @ 0x811cce2

/* CGmRegistEvent::StartEvent() */

void CGmRegistEvent::StartEvent(void)

{
  cMyTrace local_1c [24];
  
  DB_UpdateGMData::makeRequest(true);
  cMyTrace::cMyTrace(local_1c,"virtual void CGmRegistEvent::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"CGmRegistEvent Start!");
  return;
}
```

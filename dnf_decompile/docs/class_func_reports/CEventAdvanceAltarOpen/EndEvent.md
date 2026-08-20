# EndEvent

`_ZN22CEventAdvanceAltarOpen8EndEventEv`

`CEventAdvanceAltarOpen::EndEvent()`

| 类 | 地址 |
|---|---|
| `CEventAdvanceAltarOpen` | `0x080e9534` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e9534  _ZN22CEventAdvanceAltarOpen8EndEventEv
#           CEventAdvanceAltarOpen::EndEvent()
# range [0x080e9534, 0x080e9584]
080e9534 +0x00:  push   %ebp
080e9535 +0x01:  mov    %esp,%ebp
080e9537 +0x03:  sub    $0x28,%esp
080e953a +0x06:  mov    0x8(%ebp),%eax
080e953d +0x09:  movl   $0x0,0x4(%esp)
080e9545 +0x11:  mov    %eax,(%esp)
080e9548 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080e954d +0x19:  movl   $0x0,0xc(%esp)
080e9555 +0x21:  movl   $0x494,0x8(%esp)
080e955d +0x29:  movl   $&_ZZN22CEventAdvanceAltarOpen8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080e9565 +0x31:  lea    -0x18(%ebp),%eax
080e9568 +0x34:  mov    %eax,(%esp)
080e956b +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080e9570 +0x3c:  movl   $"CEventAdvanceAltarOpen Event End!",0x4(%esp)
080e9578 +0x44:  lea    -0x18(%ebp),%eax
080e957b +0x47:  mov    %eax,(%esp)
080e957e +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080e9583 +0x4f:  leave
080e9584 +0x50:  ret
```

## 反编译 C

```c
// CEventAdvanceAltarOpen::EndEvent @ 0x80e9534

/* CEventAdvanceAltarOpen::EndEvent() */

void __thiscall CEventAdvanceAltarOpen::EndEvent(CEventAdvanceAltarOpen *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventAdvanceAltarOpen::EndEvent()",0x494,0);
  cMyTrace::operator()(local_1c,"CEventAdvanceAltarOpen Event End!");
  return;
}
```

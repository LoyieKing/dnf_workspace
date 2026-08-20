# EndEvent

`_ZN21CReformingDanjinEvent8EndEventEv`

`CReformingDanjinEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826ea3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ea3a  _ZN21CReformingDanjinEvent8EndEventEv
#           CReformingDanjinEvent::EndEvent()
# range [0x0826ea3a, 0x0826ea8a]
0826ea3a +0x00:  push   %ebp
0826ea3b +0x01:  mov    %esp,%ebp
0826ea3d +0x03:  sub    $0x28,%esp
0826ea40 +0x06:  mov    0x8(%ebp),%eax
0826ea43 +0x09:  movl   $0x0,0x4(%esp)
0826ea4b +0x11:  mov    %eax,(%esp)
0826ea4e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0826ea53 +0x19:  movl   $0x0,0xc(%esp)
0826ea5b +0x21:  movl   $0x1f,0x8(%esp)
0826ea63 +0x29:  movl   $&_ZZN21CReformingDanjinEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0826ea6b +0x31:  lea    -0x18(%ebp),%eax
0826ea6e +0x34:  mov    %eax,(%esp)
0826ea71 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0826ea76 +0x3c:  movl   $"Reforming Danjin Event End!",0x4(%esp)
0826ea7e +0x44:  lea    -0x18(%ebp),%eax
0826ea81 +0x47:  mov    %eax,(%esp)
0826ea84 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826ea89 +0x4f:  leave
0826ea8a +0x50:  ret
```

## 反编译 C

```c
// CReformingDanjinEvent::EndEvent @ 0x826ea3a

/* CReformingDanjinEvent::EndEvent() */

void __thiscall CReformingDanjinEvent::EndEvent(CReformingDanjinEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x1f,0);
  cMyTrace::operator()(local_1c,"Reforming Danjin Event End!");
  return;
}
```

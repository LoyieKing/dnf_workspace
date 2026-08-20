# StartEvent

`_ZN16GrowthEquipEvent10StartEventEv`

`GrowthEquipEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6f5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6f5a  _ZN16GrowthEquipEvent10StartEventEv
#           GrowthEquipEvent::StartEvent()
# range [0x080f6f5a, 0x080f6fab]
080f6f5a +0x00:  push   %ebp
080f6f5b +0x01:  mov    %esp,%ebp
080f6f5d +0x03:  sub    $0x28,%esp
080f6f60 +0x06:  mov    0x8(%ebp),%eax
080f6f63 +0x09:  movl   $0x1,0x4(%esp)
080f6f6b +0x11:  mov    %eax,(%esp)
080f6f6e +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080f6f73 +0x19:  movl   $0x0,0xc(%esp)
080f6f7b +0x21:  movl   $0x18,0x8(%esp)
080f6f83 +0x29:  movl   $&_ZZN16GrowthEquipEvent10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080f6f8b +0x31:  lea    -0x18(%ebp),%eax
080f6f8e +0x34:  mov    %eax,(%esp)
080f6f91 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080f6f96 +0x3c:  movl   $"GrowthEquipEvent Event start!",0x4(%esp)
080f6f9e +0x44:  lea    -0x18(%ebp),%eax
080f6fa1 +0x47:  mov    %eax,(%esp)
080f6fa4 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080f6fa9 +0x4f:  leave
080f6faa +0x50:  ret
080f6fab +0x51:  nop
```

## 反编译 C

```c
// GrowthEquipEvent::StartEvent @ 0x80f6f5a

/* GrowthEquipEvent::StartEvent() */

void __thiscall GrowthEquipEvent::StartEvent(GrowthEquipEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event start!");
  return;
}
```

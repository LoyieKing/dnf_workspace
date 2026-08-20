# EndEvent

`_ZN16GrowthEquipEvent8EndEventEv`

`GrowthEquipEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `GrowthEquipEvent` | `0x080f6ffe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f6ffe  _ZN16GrowthEquipEvent8EndEventEv
#           GrowthEquipEvent::EndEvent()
# range [0x080f6ffe, 0x080f704f]
080f6ffe +0x00:  push   %ebp
080f6fff +0x01:  mov    %esp,%ebp
080f7001 +0x03:  sub    $0x28,%esp
080f7004 +0x06:  mov    0x8(%ebp),%eax
080f7007 +0x09:  movl   $0x0,0x4(%esp)
080f700f +0x11:  mov    %eax,(%esp)
080f7012 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
080f7017 +0x19:  movl   $0x0,0xc(%esp)
080f701f +0x21:  movl   $0x24,0x8(%esp)
080f7027 +0x29:  movl   $&_ZZN16GrowthEquipEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
080f702f +0x31:  lea    -0x18(%ebp),%eax
080f7032 +0x34:  mov    %eax,(%esp)
080f7035 +0x37:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080f703a +0x3c:  movl   $"GrowthEquipEvent Event end!",0x4(%esp)
080f7042 +0x44:  lea    -0x18(%ebp),%eax
080f7045 +0x47:  mov    %eax,(%esp)
080f7048 +0x4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080f704d +0x4f:  leave
080f704e +0x50:  ret
080f704f +0x51:  nop
```

## 反编译 C

```c
// GrowthEquipEvent::EndEvent @ 0x80f6ffe

/* GrowthEquipEvent::EndEvent() */

void __thiscall GrowthEquipEvent::EndEvent(GrowthEquipEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event end!");
  return;
}
```

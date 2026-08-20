# StartEvent

`_ZN17CAradRyosikaEvent10StartEventEv`

`CAradRyosikaEvent::StartEvent()`

| 类 | 地址 |
|---|---|
| `CAradRyosikaEvent` | `0x081a0f1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a0f1e  _ZN17CAradRyosikaEvent10StartEventEv
#           CAradRyosikaEvent::StartEvent()
# range [0x081a0f1e, 0x081a0f89]
081a0f1e +0x00:  push   %ebp
081a0f1f +0x01:  mov    %esp,%ebp
081a0f21 +0x03:  push   %esi
081a0f22 +0x04:  push   %ebx
081a0f23 +0x05:  sub    $0x20,%esp
081a0f26 +0x08:  mov    0x8(%ebp),%eax
081a0f29 +0x0b:  mov    0x10(%eax),%esi
081a0f2c +0x0e:  mov    0x8(%ebp),%eax
081a0f2f +0x11:  mov    0xc(%eax),%ebx
081a0f32 +0x14:  movl   $0x0,0xc(%esp)
081a0f3a +0x1c:  movl   $0x14,0x8(%esp)
081a0f42 +0x24:  movl   $&_ZZN17CAradRyosikaEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
081a0f4a +0x2c:  lea    -0x18(%ebp),%eax
081a0f4d +0x2f:  mov    %eax,(%esp)
081a0f50 +0x32:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081a0f55 +0x37:  mov    %esi,0xc(%esp)
081a0f59 +0x3b:  mov    %ebx,0x8(%esp)
081a0f5d +0x3f:  movl   $"Arad Ryosika Event Start! [step:%d][job:%d]",0x4(%esp)
081a0f65 +0x47:  lea    -0x18(%ebp),%eax
081a0f68 +0x4a:  mov    %eax,(%esp)
081a0f6b +0x4d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081a0f70 +0x52:  mov    0x8(%ebp),%eax
081a0f73 +0x55:  movl   $0x1,0x4(%esp)
081a0f7b +0x5d:  mov    %eax,(%esp)
081a0f7e +0x60:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081a0f83 +0x65:  add    $0x20,%esp
081a0f86 +0x68:  pop    %ebx
081a0f87 +0x69:  pop    %esi
081a0f88 +0x6a:  pop    %ebp
081a0f89 +0x6b:  ret
```

## 反编译 C

```c
// CAradRyosikaEvent::StartEvent @ 0x81a0f1e

/* CAradRyosikaEvent::StartEvent() */

void __thiscall CAradRyosikaEvent::StartEvent(CAradRyosikaEvent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x14,0);
  cMyTrace::operator()(local_1c,"Arad Ryosika Event Start! [step:%d][job:%d]",uVar2,uVar1);
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```

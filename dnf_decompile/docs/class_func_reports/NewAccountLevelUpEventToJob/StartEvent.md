# StartEvent

`_ZN27NewAccountLevelUpEventToJob10StartEventEv`

`NewAccountLevelUpEventToJob::StartEvent()`

| 类 | 地址 |
|---|---|
| `NewAccountLevelUpEventToJob` | `0x081b81da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b81da  _ZN27NewAccountLevelUpEventToJob10StartEventEv
#           NewAccountLevelUpEventToJob::StartEvent()
# range [0x081b81da, 0x081b81f5]
081b81da +0x00:  push   %ebp
081b81db +0x01:  mov    %esp,%ebp
081b81dd +0x03:  sub    $0x18,%esp
081b81e0 +0x06:  mov    0x8(%ebp),%eax
081b81e3 +0x09:  movl   $0x1,0x4(%esp)
081b81eb +0x11:  mov    %eax,(%esp)
081b81ee +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b81f3 +0x19:  leave
081b81f4 +0x1a:  ret
081b81f5 +0x1b:  nop
```

## 反编译 C

```c
// NewAccountLevelUpEventToJob::StartEvent @ 0x81b81da

/* NewAccountLevelUpEventToJob::StartEvent() */

void __thiscall NewAccountLevelUpEventToJob::StartEvent(NewAccountLevelUpEventToJob *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}
```

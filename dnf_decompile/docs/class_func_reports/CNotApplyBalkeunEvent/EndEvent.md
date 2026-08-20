# EndEvent

`_ZN21CNotApplyBalkeunEvent8EndEventEv`

`CNotApplyBalkeunEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CNotApplyBalkeunEvent` | `0x081b9ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9ed2  _ZN21CNotApplyBalkeunEvent8EndEventEv
#           CNotApplyBalkeunEvent::EndEvent()
# range [0x081b9ed2, 0x081b9f40]
081b9ed2 +0x00:  push   %ebp
081b9ed3 +0x01:  mov    %esp,%ebp
081b9ed5 +0x03:  sub    $0x28,%esp
081b9ed8 +0x06:  mov    0x8(%ebp),%eax
081b9edb +0x09:  mov    (%eax),%eax
081b9edd +0x0b:  add    $0x34,%eax
081b9ee0 +0x0e:  mov    (%eax),%edx
081b9ee2 +0x10:  mov    0x8(%ebp),%eax
081b9ee5 +0x13:  movl   $0x0,0x4(%esp)
081b9eed +0x1b:  mov    %eax,(%esp)
081b9ef0 +0x1e:  call   *%edx
081b9ef2 +0x20:  test   %al,%al
081b9ef4 +0x22:  je     081b9f3f <+0x6d>
081b9ef6 +0x24:  mov    0x8(%ebp),%eax
081b9ef9 +0x27:  movl   $0x0,0x4(%esp)
081b9f01 +0x2f:  mov    %eax,(%esp)
081b9f04 +0x32:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b9f09 +0x37:  movl   $0x0,0xc(%esp)
081b9f11 +0x3f:  movl   $0x28,0x8(%esp)
081b9f19 +0x47:  movl   $&_ZZN21CNotApplyBalkeunEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
081b9f21 +0x4f:  lea    -0x18(%ebp),%eax
081b9f24 +0x52:  mov    %eax,(%esp)
081b9f27 +0x55:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b9f2c +0x5a:  movl   $"Not Apply Balkeun Event End",0x4(%esp)
081b9f34 +0x62:  lea    -0x18(%ebp),%eax
081b9f37 +0x65:  mov    %eax,(%esp)
081b9f3a +0x68:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b9f3f +0x6d:  leave
081b9f40 +0x6e:  ret
```

## 反编译 C

```c
// CNotApplyBalkeunEvent::EndEvent @ 0x81b9ed2

/* CNotApplyBalkeunEvent::EndEvent() */

void __thiscall CNotApplyBalkeunEvent::EndEvent(CNotApplyBalkeunEvent *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 != '\0') {
    CEventBase::SetEventFlag((CEventBase *)this,false);
    cMyTrace::cMyTrace(local_1c,"virtual void CNotApplyBalkeunEvent::EndEvent()",0x28,0);
    cMyTrace::operator()(local_1c,"Not Apply Balkeun Event End");
  }
  return;
}
```

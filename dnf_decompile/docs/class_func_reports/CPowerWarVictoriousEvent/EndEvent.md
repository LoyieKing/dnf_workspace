# EndEvent

`_ZN24CPowerWarVictoriousEvent8EndEventEv`

`CPowerWarVictoriousEvent::EndEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x08268b4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268b4a  _ZN24CPowerWarVictoriousEvent8EndEventEv
#           CPowerWarVictoriousEvent::EndEvent()
# range [0x08268b4a, 0x08268bca]
08268b4a +0x00:  push   %ebp
08268b4b +0x01:  mov    %esp,%ebp
08268b4d +0x03:  sub    $0x28,%esp
08268b50 +0x06:  mov    0x8(%ebp),%eax
08268b53 +0x09:  mov    (%eax),%eax
08268b55 +0x0b:  add    $0x34,%eax
08268b58 +0x0e:  mov    (%eax),%edx
08268b5a +0x10:  mov    0x8(%ebp),%eax
08268b5d +0x13:  movl   $0x0,0x4(%esp)
08268b65 +0x1b:  mov    %eax,(%esp)
08268b68 +0x1e:  call   *%edx
08268b6a +0x20:  test   %al,%al
08268b6c +0x22:  je     08268bc9 <+0x7f>
08268b6e +0x24:  mov    0x8(%ebp),%eax
08268b71 +0x27:  movl   $0x0,0x4(%esp)
08268b79 +0x2f:  mov    %eax,(%esp)
08268b7c +0x32:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08268b81 +0x37:  mov    0x8(%ebp),%eax
08268b84 +0x3a:  movw   $0x0,0xa(%eax)
08268b8a +0x40:  mov    0x8(%ebp),%eax
08268b8d +0x43:  movw   $0x0,0xc(%eax)
08268b93 +0x49:  movl   $0x0,0xc(%esp)
08268b9b +0x51:  movl   $0x41,0x8(%esp)
08268ba3 +0x59:  movl   $&_ZZN24CPowerWarVictoriousEvent8EndEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08268bab +0x61:  lea    -0x18(%ebp),%eax
08268bae +0x64:  mov    %eax,(%esp)
08268bb1 +0x67:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08268bb6 +0x6c:  movl   $"Power War Victorious Event End",0x4(%esp)
08268bbe +0x74:  lea    -0x18(%ebp),%eax
08268bc1 +0x77:  mov    %eax,(%esp)
08268bc4 +0x7a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08268bc9 +0x7f:  leave
08268bca +0x80:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::EndEvent @ 0x8268b4a

/* CPowerWarVictoriousEvent::EndEvent() */

void __thiscall CPowerWarVictoriousEvent::EndEvent(CPowerWarVictoriousEvent *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 != '\0') {
    CEventBase::SetEventFlag((CEventBase *)this,false);
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    cMyTrace::cMyTrace(local_1c,"virtual void CPowerWarVictoriousEvent::EndEvent()",0x41,0);
    cMyTrace::operator()(local_1c,"Power War Victorious Event End");
  }
  return;
}
```

# EndEvent

`_ZN22CCoinEventOnCharCreate8EndEventEv`

`CCoinEventOnCharCreate::EndEvent()`

| 类 | 地址 |
|---|---|
| `CCoinEventOnCharCreate` | `0x0810aa42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810aa42  _ZN22CCoinEventOnCharCreate8EndEventEv
#           CCoinEventOnCharCreate::EndEvent()
# range [0x0810aa42, 0x0810aa9c]
0810aa42 +0x00:  push   %ebp
0810aa43 +0x01:  mov    %esp,%ebp
0810aa45 +0x03:  sub    $0x28,%esp
0810aa48 +0x06:  mov    0x8(%ebp),%eax
0810aa4b +0x09:  movl   $0x0,0x4(%esp)
0810aa53 +0x11:  mov    %eax,(%esp)
0810aa56 +0x14:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810aa5b +0x19:  mov    0x8(%ebp),%eax
0810aa5e +0x1c:  movl   $0x5,0xc(%eax)
0810aa65 +0x23:  movl   $0x0,0xc(%esp)
0810aa6d +0x2b:  movl   $0x24,0x8(%esp)
0810aa75 +0x33:  movl   $&_ZZN22CCoinEventOnCharCreate8EndEventEvE12__FUNCTION__,0x4(%esp)
0810aa7d +0x3b:  lea    -0x18(%ebp),%eax
0810aa80 +0x3e:  mov    %eax,(%esp)
0810aa83 +0x41:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810aa88 +0x46:  movl   $"Coin Event On Char Create End!",0x4(%esp)
0810aa90 +0x4e:  lea    -0x18(%ebp),%eax
0810aa93 +0x51:  mov    %eax,(%esp)
0810aa96 +0x54:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810aa9b +0x59:  leave
0810aa9c +0x5a:  ret
```

## 反编译 C

```c
// CCoinEventOnCharCreate::EndEvent @ 0x810aa42

/* CCoinEventOnCharCreate::EndEvent() */

void __thiscall CCoinEventOnCharCreate::EndEvent(CCoinEventOnCharCreate *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 5;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create End!");
  return;
}
```

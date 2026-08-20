# CPCRoomWorldDropEvent

`_GLOBAL__I__ZN21CPCRoomWorldDropEventC2Ev`

`global constructors keyed to CPCRoomWorldDropEvent::CPCRoomWorldDropEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CPCRoomWorldDropEvent` | `0x082678a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082678a2  _GLOBAL__I__ZN21CPCRoomWorldDropEventC2Ev
#           global constructors keyed to CPCRoomWorldDropEvent::CPCRoomWorldDropEvent()
# range [0x082678a2, 0x0826797b]
082678a2 +0x00:  push   %ebp
082678a3 +0x01:  mov    %esp,%ebp
082678a5 +0x03:  sub    $0x18,%esp
082678a8 +0x06:  movl   $0xffff,0x4(%esp)
082678b0 +0x0e:  movl   $0x1,(%esp)
082678b7 +0x15:  call   08267862 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
082678bc +0x1a:  leave
082678bd +0x1b:  ret
082678be +0x1c:  push   %ebp
082678bf +0x1d:  mov    %esp,%ebp
082678c1 +0x1f:  sub    $0x28,%esp
082678c4 +0x22:  mov    0x8(%ebp),%eax
082678c7 +0x25:  movl   $0x1,0x4(%esp)
082678cf +0x2d:  mov    %eax,(%esp)
082678d2 +0x30:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
082678d7 +0x35:  movl   $0x0,0xc(%esp)
082678df +0x3d:  movl   $0x21,0x8(%esp)
082678e7 +0x45:  movl   $&_ZZN21CPCRoomWorldDropEvent10StartEventEvE12__FUNCTION__,0x4(%esp)
082678ef +0x4d:  lea    -0x18(%ebp),%eax
082678f2 +0x50:  mov    %eax,(%esp)
082678f5 +0x53:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
082678fa +0x58:  movl   $"PCRoom World Drop Event Start!",0x4(%esp)
08267902 +0x60:  lea    -0x18(%ebp),%eax
08267905 +0x63:  mov    %eax,(%esp)
08267908 +0x66:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0826790d +0x6b:  leave
0826790e +0x6c:  ret
0826790f +0x6d:  nop
08267910 +0x6e:  push   %ebp
08267911 +0x6f:  mov    %esp,%ebp
08267913 +0x71:  sub    $0x18,%esp
08267916 +0x74:  mov    0x8(%ebp),%eax
08267919 +0x77:  mov    (%eax),%eax
0826791b +0x79:  add    $0x8,%eax
0826791e +0x7c:  mov    (%eax),%edx
08267920 +0x7e:  mov    0x8(%ebp),%eax
08267923 +0x81:  mov    %eax,(%esp)
08267926 +0x84:  call   *%edx
08267928 +0x86:  leave
08267929 +0x87:  ret
0826792a +0x88:  push   %ebp
0826792b +0x89:  mov    %esp,%ebp
0826792d +0x8b:  sub    $0x28,%esp
08267930 +0x8e:  mov    0x8(%ebp),%eax
08267933 +0x91:  movl   $0x0,0x4(%esp)
0826793b +0x99:  mov    %eax,(%esp)
0826793e +0x9c:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08267943 +0xa1:  movl   $0x0,0xc(%esp)
0826794b +0xa9:  movl   $0x2c,0x8(%esp)
08267953 +0xb1:  movl   $&_ZZN21CPCRoomWorldDropEvent8EndEventEvE12__FUNCTION__,0x4(%esp)
0826795b +0xb9:  lea    -0x18(%ebp),%eax
0826795e +0xbc:  mov    %eax,(%esp)
08267961 +0xbf:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08267966 +0xc4:  movl   $"PCRoom World Drop Event End!",0x4(%esp)
0826796e +0xcc:  lea    -0x18(%ebp),%eax
08267971 +0xcf:  mov    %eax,(%esp)
08267974 +0xd2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08267979 +0xd7:  leave
0826797a +0xd8:  ret
0826797b +0xd9:  nop
```

## 反编译 C

```c
// <global>::global @ 0x82678a2

/* CPCRoomWorldDropEvent::CPCRoomWorldDropEvent() */

void CPCRoomWorldDropEvent::_GLOBAL__I_CPCRoomWorldDropEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

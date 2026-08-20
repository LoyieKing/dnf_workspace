# StartEvent

`_ZN15AttendanceEvent10StartEventE10Word_Param`

`AttendanceEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `AttendanceEvent` | `0x080c8312` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c8312  _ZN15AttendanceEvent10StartEventE10Word_Param
#           AttendanceEvent::StartEvent(Word_Param)
# range [0x080c8312, 0x080c83f3]
080c8312 +0x00:  push   %ebp
080c8313 +0x01:  mov    %esp,%ebp
080c8315 +0x03:  push   %esi
080c8316 +0x04:  push   %ebx
080c8317 +0x05:  sub    $0x30,%esp
080c831a +0x08:  movzwl 0xc(%ebp),%eax
080c831e +0x0c:  mov    %eax,%edx
080c8320 +0x0e:  mov    0x8(%ebp),%eax
080c8323 +0x11:  mov    %dx,0x4(%eax)
080c8327 +0x15:  movzwl 0xe(%ebp),%eax
080c832b +0x19:  mov    %eax,%edx
080c832d +0x1b:  mov    0x8(%ebp),%eax
080c8330 +0x1e:  mov    %dx,0x6(%eax)
080c8334 +0x22:  mov    0x8(%ebp),%eax
080c8337 +0x25:  movzwl 0x4(%eax),%eax
080c833b +0x29:  test   %ax,%ax
080c833e +0x2c:  jg     080c8388 <+0x76>
080c8340 +0x2e:  mov    0x8(%ebp),%eax
080c8343 +0x31:  movzwl 0x6(%eax),%eax
080c8347 +0x35:  movswl %ax,%edx
080c834a +0x38:  mov    0x8(%ebp),%eax
080c834d +0x3b:  movzwl 0x4(%eax),%eax
080c8351 +0x3f:  cwtl
080c8352 +0x40:  mov    %edx,0x18(%esp)
080c8356 +0x44:  mov    %eax,0x14(%esp)
080c835a +0x48:  movl   $"Attendance(AddInfo:%d,%d) Event Start Error!",0x10(%esp)
080c8362 +0x50:  movl   $0x19,0xc(%esp)
080c836a +0x58:  movl   $&_ZZN15AttendanceEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x8(%esp)
080c8372 +0x60:  movl   $"AttendanceEvent.cpp",0x4(%esp)
080c837a +0x68:  movl   $0x1,(%esp)
080c8381 +0x6f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
080c8386 +0x74:  jmp    080c83ec <+0xda>
080c8388 +0x76:  mov    0x8(%ebp),%eax
080c838b +0x79:  mov    (%eax),%eax
080c838d +0x7b:  add    $0x8,%eax
080c8390 +0x7e:  mov    (%eax),%edx
080c8392 +0x80:  mov    0x8(%ebp),%eax
080c8395 +0x83:  mov    %eax,(%esp)
080c8398 +0x86:  call   *%edx
080c839a +0x88:  mov    0x8(%ebp),%eax
080c839d +0x8b:  movzwl 0x6(%eax),%eax
080c83a1 +0x8f:  movswl %ax,%esi
080c83a4 +0x92:  mov    0x8(%ebp),%eax
080c83a7 +0x95:  movzwl 0x4(%eax),%eax
080c83ab +0x99:  movswl %ax,%ebx
080c83ae +0x9c:  movl   $0x0,0xc(%esp)
080c83b6 +0xa4:  movl   $0x1d,0x8(%esp)
080c83be +0xac:  movl   $&_ZZN15AttendanceEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
080c83c6 +0xb4:  lea    -0x18(%ebp),%eax
080c83c9 +0xb7:  mov    %eax,(%esp)
080c83cc +0xba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080c83d1 +0xbf:  mov    %esi,0xc(%esp)
080c83d5 +0xc3:  mov    %ebx,0x8(%esp)
080c83d9 +0xc7:  movl   $"Attendance(AddInfo:%d,%d) Event Start!",0x4(%esp)
080c83e1 +0xcf:  lea    -0x18(%ebp),%eax
080c83e4 +0xd2:  mov    %eax,(%esp)
080c83e7 +0xd5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080c83ec +0xda:  add    $0x30,%esp
080c83ef +0xdd:  pop    %ebx
080c83f0 +0xde:  pop    %esi
080c83f1 +0xdf:  pop    %ebp
080c83f2 +0xe0:  ret
080c83f3 +0xe1:  nop
```

## 反编译 C

```c
// AttendanceEvent::StartEvent @ 0x80c8312

/* AttendanceEvent::StartEvent(Word_Param) */

void __thiscall AttendanceEvent::StartEvent(AttendanceEvent *this,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  cMyTrace local_1c [16];
  
  *(undefined2 *)(this + 4) = (undefined2)param_2;
  *(undefined2 *)(this + 6) = param_2._2_2_;
  if (*(short *)(this + 4) < 1) {
    LogManager::logFormat
              (1,"AttendanceEvent.cpp","virtual void AttendanceEvent::StartEvent(Word_Param)",0x19,
               "Attendance(AddInfo:%d,%d) Event Start Error!",(int)*(short *)(this + 4),
               (int)*(short *)(this + 6));
  }
  else {
    (**(code **)(*(int *)this + 8))(this);
    sVar1 = *(short *)(this + 6);
    sVar2 = *(short *)(this + 4);
    cMyTrace::cMyTrace(local_1c,"virtual void AttendanceEvent::StartEvent(Word_Param)",0x1d,0);
    cMyTrace::operator()(local_1c,"Attendance(AddInfo:%d,%d) Event Start!",(int)sVar2,(int)sVar1);
  }
  return;
}
```

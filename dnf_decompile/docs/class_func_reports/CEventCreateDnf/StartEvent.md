# StartEvent

`_ZN15CEventCreateDnf10StartEventEv`

`CEventCreateDnf::StartEvent()`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163b36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163b36  _ZN15CEventCreateDnf10StartEventEv
#           CEventCreateDnf::StartEvent()
# range [0x08163b36, 0x08163bdf]
08163b36 +0x00:  push   %ebp
08163b37 +0x01:  mov    %esp,%ebp
08163b39 +0x03:  push   %edi
08163b3a +0x04:  push   %esi
08163b3b +0x05:  push   %ebx
08163b3c +0x06:  sub    $0x3c,%esp
08163b3f +0x09:  mov    0x8(%ebp),%eax
08163b42 +0x0c:  movl   $0x1,0x4(%esp)
08163b4a +0x14:  mov    %eax,(%esp)
08163b4d +0x17:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
08163b52 +0x1c:  movl   $0x0,0x4(%esp)
08163b5a +0x24:  mov    0x8(%ebp),%eax
08163b5d +0x27:  mov    %eax,(%esp)
08163b60 +0x2a:  call   08164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>  ; CEventCreateDnf::setState(CEventCreateDnf::State::T)
08163b65 +0x2f:  movl   $0x1,0x4(%esp)
08163b6d +0x37:  mov    0x8(%ebp),%eax
08163b70 +0x3a:  mov    %eax,(%esp)
08163b73 +0x3d:  call   08163e7c <_ZN15CEventCreateDnf16RegistStartTimerEb>  ; CEventCreateDnf::RegistStartTimer(bool)
08163b78 +0x42:  mov    0x8(%ebp),%eax
08163b7b +0x45:  movzwl 0x12(%eax),%eax
08163b7f +0x49:  movzwl %ax,%edi
08163b82 +0x4c:  mov    0x8(%ebp),%eax
08163b85 +0x4f:  movzbl 0x11(%eax),%eax
08163b89 +0x53:  movzbl %al,%esi
08163b8c +0x56:  mov    0x8(%ebp),%eax
08163b8f +0x59:  movzbl 0x10(%eax),%eax
08163b93 +0x5d:  movzbl %al,%ebx
08163b96 +0x60:  movl   $0x0,0xc(%esp)
08163b9e +0x68:  movl   $0x1d,0x8(%esp)
08163ba6 +0x70:  movl   $&_ZZN15CEventCreateDnf10StartEventEvE19__PRETTY_FUNCTION__,0x4(%esp)
08163bae +0x78:  lea    -0x28(%ebp),%eax
08163bb1 +0x7b:  mov    %eax,(%esp)
08163bb4 +0x7e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08163bb9 +0x83:  mov    %edi,0x10(%esp)
08163bbd +0x87:  mov    %esi,0xc(%esp)
08163bc1 +0x8b:  mov    %ebx,0x8(%esp)
08163bc5 +0x8f:  movl   $"[Taiwan, CreateDnfEvent] Start! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",0x4(%esp)
08163bcd +0x97:  lea    -0x28(%ebp),%eax
08163bd0 +0x9a:  mov    %eax,(%esp)
08163bd3 +0x9d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08163bd8 +0xa2:  add    $0x3c,%esp
08163bdb +0xa5:  pop    %ebx
08163bdc +0xa6:  pop    %esi
08163bdd +0xa7:  pop    %edi
08163bde +0xa8:  pop    %ebp
08163bdf +0xa9:  ret
```

## 反编译 C

```c
// CEventCreateDnf::StartEvent @ 0x8163b36

/* CEventCreateDnf::StartEvent() */

void __thiscall CEventCreateDnf::StartEvent(CEventCreateDnf *this)

{
  CEventCreateDnf CVar1;
  CEventCreateDnf CVar2;
  ushort uVar3;
  cMyTrace local_2c [28];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  setState(this,0);
  RegistStartTimer(SUB41(this,0));
  uVar3 = *(ushort *)(this + 0x12);
  CVar1 = this[0x11];
  CVar2 = this[0x10];
  cMyTrace::cMyTrace(local_2c,"virtual void CEventCreateDnf::StartEvent()",0x1d,0);
  cMyTrace::operator()
            (local_2c,
             "[Taiwan, CreateDnfEvent] Start! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",
             (uint)(byte)CVar2,(uint)(byte)CVar1,(uint)uVar3);
  return;
}
```

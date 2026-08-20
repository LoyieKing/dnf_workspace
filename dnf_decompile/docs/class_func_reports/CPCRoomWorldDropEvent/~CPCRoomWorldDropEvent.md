# ~CPCRoomWorldDropEvent

`_ZN21CPCRoomWorldDropEventD1Ev`

`CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent()`

| 类 | 地址 |
|---|---|
| `CPCRoomWorldDropEvent` | `0x08267814` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08267814  _ZN21CPCRoomWorldDropEventD1Ev
#           CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent()
# range [0x08267814, 0x08267843]
08267814 +0x00:  push   %ebp
08267815 +0x01:  mov    %esp,%ebp
08267817 +0x03:  sub    $0x18,%esp
0826781a +0x06:  mov    0x8(%ebp),%eax
0826781d +0x09:  movl   $&_ZTV21CPCRoomWorldDropEvent+0x8,(%eax)
08267823 +0x0f:  mov    0x8(%ebp),%eax
08267826 +0x12:  mov    %eax,(%esp)
08267829 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0826782e +0x1a:  mov    $0x0,%eax
08267833 +0x1f:  test   %al,%al
08267835 +0x21:  je     08267842 <+0x2e>
08267837 +0x23:  mov    0x8(%ebp),%eax
0826783a +0x26:  mov    %eax,(%esp)
0826783d +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08267842 +0x2e:  leave
08267843 +0x2f:  ret
```

## 反编译 C

```c
// CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent @ 0x8267814

/* WARNING: Removing unreachable block (ram,0x08267837) */
/* CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomWorldDropEvent_08bf0388;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

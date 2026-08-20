# ~CReformingDanjinEvent

`_ZN21CReformingDanjinEventD1Ev`

`CReformingDanjinEvent::~CReformingDanjinEvent()`

| 类 | 地址 |
|---|---|
| `CReformingDanjinEvent` | `0x0826e948` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826e948  _ZN21CReformingDanjinEventD1Ev
#           CReformingDanjinEvent::~CReformingDanjinEvent()
# range [0x0826e948, 0x0826e977]
0826e948 +0x00:  push   %ebp
0826e949 +0x01:  mov    %esp,%ebp
0826e94b +0x03:  sub    $0x18,%esp
0826e94e +0x06:  mov    0x8(%ebp),%eax
0826e951 +0x09:  movl   $&_ZTV21CReformingDanjinEvent+0x8,(%eax)
0826e957 +0x0f:  mov    0x8(%ebp),%eax
0826e95a +0x12:  mov    %eax,(%esp)
0826e95d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0826e962 +0x1a:  mov    $0x0,%eax
0826e967 +0x1f:  test   %al,%al
0826e969 +0x21:  je     0826e976 <+0x2e>
0826e96b +0x23:  mov    0x8(%ebp),%eax
0826e96e +0x26:  mov    %eax,(%esp)
0826e971 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0826e976 +0x2e:  leave
0826e977 +0x2f:  ret
```

## 反编译 C

```c
// CReformingDanjinEvent::~CReformingDanjinEvent @ 0x826e948

/* WARNING: Removing unreachable block (ram,0x0826e96b) */
/* CReformingDanjinEvent::~CReformingDanjinEvent() */

void __thiscall CReformingDanjinEvent::~CReformingDanjinEvent(CReformingDanjinEvent *this)

{
  *(undefined ***)this = &PTR__CReformingDanjinEvent_08bf8f48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

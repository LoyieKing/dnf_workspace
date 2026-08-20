# ~CConditionEvent

`_ZN15CConditionEventD1Ev`

`CConditionEvent::~CConditionEvent()`

| 类 | 地址 |
|---|---|
| `CConditionEvent` | `0x0818498c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818498c  _ZN15CConditionEventD1Ev
#           CConditionEvent::~CConditionEvent()
# range [0x0818498c, 0x081849bb]
0818498c +0x00:  push   %ebp
0818498d +0x01:  mov    %esp,%ebp
0818498f +0x03:  sub    $0x18,%esp
08184992 +0x06:  mov    0x8(%ebp),%eax
08184995 +0x09:  movl   $&_ZTV15CConditionEvent+0x8,(%eax)
0818499b +0x0f:  mov    0x8(%ebp),%eax
0818499e +0x12:  mov    %eax,(%esp)
081849a1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081849a6 +0x1a:  mov    $0x0,%eax
081849ab +0x1f:  test   %al,%al
081849ad +0x21:  je     081849ba <+0x2e>
081849af +0x23:  mov    0x8(%ebp),%eax
081849b2 +0x26:  mov    %eax,(%esp)
081849b5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081849ba +0x2e:  leave
081849bb +0x2f:  ret
```

## 反编译 C

```c
// CConditionEvent::~CConditionEvent @ 0x818498c

/* WARNING: Removing unreachable block (ram,0x081849af) */
/* CConditionEvent::~CConditionEvent() */

void __thiscall CConditionEvent::~CConditionEvent(CConditionEvent *this)

{
  *(undefined ***)this = &PTR__CConditionEvent_08b8e5c8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

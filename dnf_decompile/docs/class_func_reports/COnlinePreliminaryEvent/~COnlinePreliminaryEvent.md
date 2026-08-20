# ~COnlinePreliminaryEvent

`_ZN23COnlinePreliminaryEventD1Ev`

`COnlinePreliminaryEvent::~COnlinePreliminaryEvent()`

| 类 | 地址 |
|---|---|
| `COnlinePreliminaryEvent` | `0x081bb4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb4ac  _ZN23COnlinePreliminaryEventD1Ev
#           COnlinePreliminaryEvent::~COnlinePreliminaryEvent()
# range [0x081bb4ac, 0x081bb4db]
081bb4ac +0x00:  push   %ebp
081bb4ad +0x01:  mov    %esp,%ebp
081bb4af +0x03:  sub    $0x18,%esp
081bb4b2 +0x06:  mov    0x8(%ebp),%eax
081bb4b5 +0x09:  movl   $&_ZTV23COnlinePreliminaryEvent+0x8,(%eax)
081bb4bb +0x0f:  mov    0x8(%ebp),%eax
081bb4be +0x12:  mov    %eax,(%esp)
081bb4c1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081bb4c6 +0x1a:  mov    $0x0,%eax
081bb4cb +0x1f:  test   %al,%al
081bb4cd +0x21:  je     081bb4da <+0x2e>
081bb4cf +0x23:  mov    0x8(%ebp),%eax
081bb4d2 +0x26:  mov    %eax,(%esp)
081bb4d5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081bb4da +0x2e:  leave
081bb4db +0x2f:  ret
```

## 反编译 C

```c
// COnlinePreliminaryEvent::~COnlinePreliminaryEvent @ 0x81bb4ac

/* WARNING: Removing unreachable block (ram,0x081bb4cf) */
/* COnlinePreliminaryEvent::~COnlinePreliminaryEvent() */

void __thiscall COnlinePreliminaryEvent::~COnlinePreliminaryEvent(COnlinePreliminaryEvent *this)

{
  *(undefined ***)this = &PTR__COnlinePreliminaryEvent_08bbf968;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

# ~CPowerWarEvent

`_ZN14CPowerWarEventD1Ev`

`CPowerWarEvent::~CPowerWarEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarEvent` | `0x082679ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082679ac  _ZN14CPowerWarEventD1Ev
#           CPowerWarEvent::~CPowerWarEvent()
# range [0x082679ac, 0x082679db]
082679ac +0x00:  push   %ebp
082679ad +0x01:  mov    %esp,%ebp
082679af +0x03:  sub    $0x18,%esp
082679b2 +0x06:  mov    0x8(%ebp),%eax
082679b5 +0x09:  movl   $&_ZTV14CPowerWarEvent+0x8,(%eax)
082679bb +0x0f:  mov    0x8(%ebp),%eax
082679be +0x12:  mov    %eax,(%esp)
082679c1 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
082679c6 +0x1a:  mov    $0x0,%eax
082679cb +0x1f:  test   %al,%al
082679cd +0x21:  je     082679da <+0x2e>
082679cf +0x23:  mov    0x8(%ebp),%eax
082679d2 +0x26:  mov    %eax,(%esp)
082679d5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082679da +0x2e:  leave
082679db +0x2f:  ret
```

## 反编译 C

```c
// CPowerWarEvent::~CPowerWarEvent @ 0x82679ac

/* WARNING: Removing unreachable block (ram,0x082679cf) */
/* CPowerWarEvent::~CPowerWarEvent() */

void __thiscall CPowerWarEvent::~CPowerWarEvent(CPowerWarEvent *this)

{
  *(undefined ***)this = &PTR__CPowerWarEvent_08bf12e8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

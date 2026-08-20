# ~CGmRegistEvent

`_ZN14CGmRegistEventD1Ev`

`CGmRegistEvent::~CGmRegistEvent()`

| 类 | 地址 |
|---|---|
| `CGmRegistEvent` | `0x0811cc94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811cc94  _ZN14CGmRegistEventD1Ev
#           CGmRegistEvent::~CGmRegistEvent()
# range [0x0811cc94, 0x0811ccc3]
0811cc94 +0x00:  push   %ebp
0811cc95 +0x01:  mov    %esp,%ebp
0811cc97 +0x03:  sub    $0x18,%esp
0811cc9a +0x06:  mov    0x8(%ebp),%eax
0811cc9d +0x09:  movl   $&_ZTV14CGmRegistEvent+0x8,(%eax)
0811cca3 +0x0f:  mov    0x8(%ebp),%eax
0811cca6 +0x12:  mov    %eax,(%esp)
0811cca9 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811ccae +0x1a:  mov    $0x0,%eax
0811ccb3 +0x1f:  test   %al,%al
0811ccb5 +0x21:  je     0811ccc2 <+0x2e>
0811ccb7 +0x23:  mov    0x8(%ebp),%eax
0811ccba +0x26:  mov    %eax,(%esp)
0811ccbd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811ccc2 +0x2e:  leave
0811ccc3 +0x2f:  ret
```

## 反编译 C

```c
// CGmRegistEvent::~CGmRegistEvent @ 0x811cc94

/* WARNING: Removing unreachable block (ram,0x0811ccb7) */
/* CGmRegistEvent::~CGmRegistEvent() */

void __thiscall CGmRegistEvent::~CGmRegistEvent(CGmRegistEvent *this)

{
  *(undefined ***)this = &PTR__CGmRegistEvent_08b53e48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

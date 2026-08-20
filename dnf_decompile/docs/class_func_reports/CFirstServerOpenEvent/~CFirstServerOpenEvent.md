# ~CFirstServerOpenEvent

`_ZN21CFirstServerOpenEventD1Ev`

`CFirstServerOpenEvent::~CFirstServerOpenEvent()`

| 类 | 地址 |
|---|---|
| `CFirstServerOpenEvent` | `0x0811ca94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ca94  _ZN21CFirstServerOpenEventD1Ev
#           CFirstServerOpenEvent::~CFirstServerOpenEvent()
# range [0x0811ca94, 0x0811cac3]
0811ca94 +0x00:  push   %ebp
0811ca95 +0x01:  mov    %esp,%ebp
0811ca97 +0x03:  sub    $0x18,%esp
0811ca9a +0x06:  mov    0x8(%ebp),%eax
0811ca9d +0x09:  movl   $&_ZTV21CFirstServerOpenEvent+0x8,(%eax)
0811caa3 +0x0f:  mov    0x8(%ebp),%eax
0811caa6 +0x12:  mov    %eax,(%esp)
0811caa9 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811caae +0x1a:  mov    $0x0,%eax
0811cab3 +0x1f:  test   %al,%al
0811cab5 +0x21:  je     0811cac2 <+0x2e>
0811cab7 +0x23:  mov    0x8(%ebp),%eax
0811caba +0x26:  mov    %eax,(%esp)
0811cabd +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811cac2 +0x2e:  leave
0811cac3 +0x2f:  ret
```

## 反编译 C

```c
// CFirstServerOpenEvent::~CFirstServerOpenEvent @ 0x811ca94

/* WARNING: Removing unreachable block (ram,0x0811cab7) */
/* CFirstServerOpenEvent::~CFirstServerOpenEvent() */

void __thiscall CFirstServerOpenEvent::~CFirstServerOpenEvent(CFirstServerOpenEvent *this)

{
  *(undefined ***)this = &PTR__CFirstServerOpenEvent_08b530e8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

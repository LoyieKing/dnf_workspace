# ~CNotApplyBalkeunEvent

`_ZN21CNotApplyBalkeunEventD1Ev`

`CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent()`

| 类 | 地址 |
|---|---|
| `CNotApplyBalkeunEvent` | `0x081b9d78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9d78  _ZN21CNotApplyBalkeunEventD1Ev
#           CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent()
# range [0x081b9d78, 0x081b9da7]
081b9d78 +0x00:  push   %ebp
081b9d79 +0x01:  mov    %esp,%ebp
081b9d7b +0x03:  sub    $0x18,%esp
081b9d7e +0x06:  mov    0x8(%ebp),%eax
081b9d81 +0x09:  movl   $&_ZTV21CNotApplyBalkeunEvent+0x8,(%eax)
081b9d87 +0x0f:  mov    0x8(%ebp),%eax
081b9d8a +0x12:  mov    %eax,(%esp)
081b9d8d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081b9d92 +0x1a:  mov    $0x0,%eax
081b9d97 +0x1f:  test   %al,%al
081b9d99 +0x21:  je     081b9da6 <+0x2e>
081b9d9b +0x23:  mov    0x8(%ebp),%eax
081b9d9e +0x26:  mov    %eax,(%esp)
081b9da1 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081b9da6 +0x2e:  leave
081b9da7 +0x2f:  ret
```

## 反编译 C

```c
// CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent @ 0x81b9d78

/* WARNING: Removing unreachable block (ram,0x081b9d9b) */
/* CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::~CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  *(undefined ***)this = &PTR__CNotApplyBalkeunEvent_08bbdea8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

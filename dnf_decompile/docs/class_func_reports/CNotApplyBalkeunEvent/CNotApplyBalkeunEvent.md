# CNotApplyBalkeunEvent

`_ZN21CNotApplyBalkeunEventC1Ev`

`CNotApplyBalkeunEvent::CNotApplyBalkeunEvent()`

| 类 | 地址 |
|---|---|
| `CNotApplyBalkeunEvent` | `0x081b9d5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9d5c  _ZN21CNotApplyBalkeunEventC1Ev
#           CNotApplyBalkeunEvent::CNotApplyBalkeunEvent()
# range [0x081b9d5c, 0x081b9d77]
081b9d5c +0x00:  push   %ebp
081b9d5d +0x01:  mov    %esp,%ebp
081b9d5f +0x03:  sub    $0x18,%esp
081b9d62 +0x06:  mov    0x8(%ebp),%eax
081b9d65 +0x09:  mov    %eax,(%esp)
081b9d68 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b9d6d +0x11:  mov    0x8(%ebp),%eax
081b9d70 +0x14:  movl   $&_ZTV21CNotApplyBalkeunEvent+0x8,(%eax)
081b9d76 +0x1a:  leave
081b9d77 +0x1b:  ret
```

## 反编译 C

```c
// CNotApplyBalkeunEvent::CNotApplyBalkeunEvent @ 0x81b9d5c

/* CNotApplyBalkeunEvent::CNotApplyBalkeunEvent() */

void __thiscall CNotApplyBalkeunEvent::CNotApplyBalkeunEvent(CNotApplyBalkeunEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CNotApplyBalkeunEvent_08bbdea8;
  return;
}
```

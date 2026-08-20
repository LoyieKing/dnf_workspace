# ~CClearRewardCardEvent

`_ZN21CClearRewardCardEventD1Ev`

`CClearRewardCardEvent::~CClearRewardCardEvent()`

| 类 | 地址 |
|---|---|
| `CClearRewardCardEvent` | `0x0810a73c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a73c  _ZN21CClearRewardCardEventD1Ev
#           CClearRewardCardEvent::~CClearRewardCardEvent()
# range [0x0810a73c, 0x0810a76b]
0810a73c +0x00:  push   %ebp
0810a73d +0x01:  mov    %esp,%ebp
0810a73f +0x03:  sub    $0x18,%esp
0810a742 +0x06:  mov    0x8(%ebp),%eax
0810a745 +0x09:  movl   $&_ZTV21CClearRewardCardEvent+0x8,(%eax)
0810a74b +0x0f:  mov    0x8(%ebp),%eax
0810a74e +0x12:  mov    %eax,(%esp)
0810a751 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810a756 +0x1a:  mov    $0x0,%eax
0810a75b +0x1f:  test   %al,%al
0810a75d +0x21:  je     0810a76a <+0x2e>
0810a75f +0x23:  mov    0x8(%ebp),%eax
0810a762 +0x26:  mov    %eax,(%esp)
0810a765 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a76a +0x2e:  leave
0810a76b +0x2f:  ret
```

## 反编译 C

```c
// CClearRewardCardEvent::~CClearRewardCardEvent @ 0x810a73c

/* WARNING: Removing unreachable block (ram,0x0810a75f) */
/* CClearRewardCardEvent::~CClearRewardCardEvent() */

void __thiscall CClearRewardCardEvent::~CClearRewardCardEvent(CClearRewardCardEvent *this)

{
  *(undefined ***)this = &PTR__CClearRewardCardEvent_08b49ee8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

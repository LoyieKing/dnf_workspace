# ~CCeraShopBonusItemEvent

`_ZN23CCeraShopBonusItemEventD1Ev`

`CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent()`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a2f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a2f8  _ZN23CCeraShopBonusItemEventD1Ev
#           CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent()
# range [0x0810a2f8, 0x0810a327]
0810a2f8 +0x00:  push   %ebp
0810a2f9 +0x01:  mov    %esp,%ebp
0810a2fb +0x03:  sub    $0x18,%esp
0810a2fe +0x06:  mov    0x8(%ebp),%eax
0810a301 +0x09:  movl   $&_ZTV23CCeraShopBonusItemEvent+0x8,(%eax)
0810a307 +0x0f:  mov    0x8(%ebp),%eax
0810a30a +0x12:  mov    %eax,(%esp)
0810a30d +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0810a312 +0x1a:  mov    $0x0,%eax
0810a317 +0x1f:  test   %al,%al
0810a319 +0x21:  je     0810a326 <+0x2e>
0810a31b +0x23:  mov    0x8(%ebp),%eax
0810a31e +0x26:  mov    %eax,(%esp)
0810a321 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a326 +0x2e:  leave
0810a327 +0x2f:  ret
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent @ 0x810a2f8

/* WARNING: Removing unreachable block (ram,0x0810a31b) */
/* CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  *(undefined ***)this = &PTR__CCeraShopBonusItemEvent_08b484a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```

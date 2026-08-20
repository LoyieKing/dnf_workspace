# ~CCeraShopBonusItemEvent

`_ZN23CCeraShopBonusItemEventD0Ev`

`CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent()`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a328` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a328  _ZN23CCeraShopBonusItemEventD0Ev
#           CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent()
# range [0x0810a328, 0x0810a345]
0810a328 +0x00:  push   %ebp
0810a329 +0x01:  mov    %esp,%ebp
0810a32b +0x03:  sub    $0x18,%esp
0810a32e +0x06:  mov    0x8(%ebp),%eax
0810a331 +0x09:  mov    %eax,(%esp)
0810a334 +0x0c:  call   0810a2f8 <_ZN23CCeraShopBonusItemEventD1Ev>  ; CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent()
0810a339 +0x11:  mov    0x8(%ebp),%eax
0810a33c +0x14:  mov    %eax,(%esp)
0810a33f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0810a344 +0x1c:  leave
0810a345 +0x1d:  ret
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent @ 0x810a328

/* CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::~CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  ~CCeraShopBonusItemEvent(this);
  operator_delete(this);
  return;
}
```

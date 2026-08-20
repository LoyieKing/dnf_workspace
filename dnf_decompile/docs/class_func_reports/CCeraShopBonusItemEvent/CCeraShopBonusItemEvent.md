# CCeraShopBonusItemEvent

`_ZN23CCeraShopBonusItemEventC1Ev`

`CCeraShopBonusItemEvent::CCeraShopBonusItemEvent()`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a2dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a2dc  _ZN23CCeraShopBonusItemEventC1Ev
#           CCeraShopBonusItemEvent::CCeraShopBonusItemEvent()
# range [0x0810a2dc, 0x0810a2f7]
0810a2dc +0x00:  push   %ebp
0810a2dd +0x01:  mov    %esp,%ebp
0810a2df +0x03:  sub    $0x18,%esp
0810a2e2 +0x06:  mov    0x8(%ebp),%eax
0810a2e5 +0x09:  mov    %eax,(%esp)
0810a2e8 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0810a2ed +0x11:  mov    0x8(%ebp),%eax
0810a2f0 +0x14:  movl   $&_ZTV23CCeraShopBonusItemEvent+0x8,(%eax)
0810a2f6 +0x1a:  leave
0810a2f7 +0x1b:  ret
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::CCeraShopBonusItemEvent @ 0x810a2dc

/* CCeraShopBonusItemEvent::CCeraShopBonusItemEvent() */

void __thiscall CCeraShopBonusItemEvent::CCeraShopBonusItemEvent(CCeraShopBonusItemEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCeraShopBonusItemEvent_08b484a8;
  return;
}
```

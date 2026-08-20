# CCeraShopBonusItemEvent

`_GLOBAL__I__ZN23CCeraShopBonusItemEventC2Ev`

`global constructors keyed to CCeraShopBonusItemEvent::CCeraShopBonusItemEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCeraShopBonusItemEvent` | `0x0810a497` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a497  _GLOBAL__I__ZN23CCeraShopBonusItemEventC2Ev
#           global constructors keyed to CCeraShopBonusItemEvent::CCeraShopBonusItemEvent()
# range [0x0810a497, 0x0810a4b3]
0810a497 +0x00:  push   %ebp
0810a498 +0x01:  mov    %esp,%ebp
0810a49a +0x03:  sub    $0x18,%esp
0810a49d +0x06:  movl   $0xffff,0x4(%esp)
0810a4a5 +0x0e:  movl   $0x1,(%esp)
0810a4ac +0x15:  call   0810a457 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810a4b1 +0x1a:  leave
0810a4b2 +0x1b:  ret
0810a4b3 +0x1c:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810a497

/* CCeraShopBonusItemEvent::CCeraShopBonusItemEvent() */

void CCeraShopBonusItemEvent::_GLOBAL__I_CCeraShopBonusItemEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```

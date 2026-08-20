# StartAction

`_ZN20OneADayItemShopEvent11StartActionEv`

`OneADayItemShopEvent::StartAction()`

| 类 | 地址 |
|---|---|
| `OneADayItemShopEvent` | `0x081ba100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ba100  _ZN20OneADayItemShopEvent11StartActionEv
#           OneADayItemShopEvent::StartAction()
# range [0x081ba100, 0x081ba115]
081ba100 +0x00:  push   %ebp
081ba101 +0x01:  mov    %esp,%ebp
081ba103 +0x03:  sub    $0x18,%esp
081ba106 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081ba10b +0x0b:  mov    %eax,(%esp)
081ba10e +0x0e:  call   086cf7f8 <_ZN9GameWorld20ResetOneADayItemShopEv>  ; GameWorld::ResetOneADayItemShop()
081ba113 +0x13:  leave
081ba114 +0x14:  ret
081ba115 +0x15:  nop
```

## 反编译 C

```c
// OneADayItemShopEvent::StartAction @ 0x81ba100

/* OneADayItemShopEvent::StartAction() */

void OneADayItemShopEvent::StartAction(void)

{
  G_GameWorld();
  GameWorld::ResetOneADayItemShop();
  return;
}
```

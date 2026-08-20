# execute

`_ZN11game_master16COneADayItemShop7executeEv`

`game_master::COneADayItemShop::execute()`

| 类 | 地址 |
|---|---|
| `game_master::COneADayItemShop` | `0x084b0610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b0610  _ZN11game_master16COneADayItemShop7executeEv
#           game_master::COneADayItemShop::execute()
# range [0x084b0610, 0x084b0625]
084b0610 +0x00:  push   %ebp
084b0611 +0x01:  mov    %esp,%ebp
084b0613 +0x03:  sub    $0x18,%esp
084b0616 +0x06:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084b061b +0x0b:  mov    %eax,(%esp)
084b061e +0x0e:  call   086cf904 <_ZN9GameWorld24testResetOneADayItemShopEv>  ; GameWorld::testResetOneADayItemShop()
084b0623 +0x13:  leave
084b0624 +0x14:  ret
084b0625 +0x15:  nop
```

## 反编译 C

```c
// game_master::COneADayItemShop::execute @ 0x84b0610

/* game_master::COneADayItemShop::execute() */

void game_master::COneADayItemShop::execute(void)

{
  G_GameWorld();
  GameWorld::testResetOneADayItemShop();
  return;
}
```

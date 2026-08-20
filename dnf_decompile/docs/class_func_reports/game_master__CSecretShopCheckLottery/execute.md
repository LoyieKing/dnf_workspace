# execute

`_ZN11game_master23CSecretShopCheckLottery7executeEv`

`game_master::CSecretShopCheckLottery::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CSecretShopCheckLottery` | `0x084ab9c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ab9c4  _ZN11game_master23CSecretShopCheckLottery7executeEv
#           game_master::CSecretShopCheckLottery::execute()
# range [0x084ab9c4, 0x084ab9d9]
084ab9c4 +0x00:  push   %ebp
084ab9c5 +0x01:  mov    %esp,%ebp
084ab9c7 +0x03:  sub    $0x18,%esp
084ab9ca +0x06:  mov    &_ZN10GlobalData13s_secret_shopE,%eax
084ab9cf +0x0b:  mov    %eax,(%esp)
084ab9d2 +0x0e:  call   085fad20 <_ZN10secretshop11CSecretShop12CheckLotteryEv>  ; secretshop::CSecretShop::CheckLottery()
084ab9d7 +0x13:  leave
084ab9d8 +0x14:  ret
084ab9d9 +0x15:  nop
```

## 反编译 C

```c
// game_master::CSecretShopCheckLottery::execute @ 0x84ab9c4

/* game_master::CSecretShopCheckLottery::execute() */

void game_master::CSecretShopCheckLottery::execute(void)

{
  secretshop::CSecretShop::CheckLottery(GlobalData::s_secret_shop);
  return;
}
```

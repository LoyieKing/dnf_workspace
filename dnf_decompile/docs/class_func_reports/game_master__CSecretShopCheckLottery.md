# game_master__CSecretShopCheckLottery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ab9c4 game_master::CSecretShopCheckLottery::execute  [0x084ab9c4-0x84ab9d9] ===
 84ab9c4:	55                   	push   %ebp
 84ab9c5:	89 e5                	mov    %esp,%ebp
 84ab9c7:	83 ec 18             	sub    $0x18,%esp
 84ab9ca:	a1 54 be 40 09       	mov    0x940be54,%eax
 84ab9cf:	89 04 24             	mov    %eax,(%esp)
 84ab9d2:	e8 49 f3 14 00       	call   85fad20 <_ZN10secretshop11CSecretShop12CheckLotteryEv>
 84ab9d7:	c9                   	leave
 84ab9d8:	c3                   	ret
 84ab9d9:	90                   	nop

```

```c
// game_master::CSecretShopCheckLottery::execute @ 0x84ab9c4

/* game_master::CSecretShopCheckLottery::execute() */

void game_master::CSecretShopCheckLottery::execute(void)

{
  secretshop::CSecretShop::CheckLottery(GlobalData::s_secret_shop);
  return;
}

```


# game_master__CInvalidGold

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ab16e game_master::CInvalidGold::execute  [0x084ab16e-0x84ab201] ===
 84ab16e:	55                   	push   %ebp
 84ab16f:	89 e5                	mov    %esp,%ebp
 84ab171:	53                   	push   %ebx
 84ab172:	83 ec 24             	sub    $0x24,%esp
 84ab175:	8b 45 08             	mov    0x8(%ebp),%eax
 84ab178:	89 04 24             	mov    %eax,(%esp)
 84ab17b:	e8 3a 8e 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ab180:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ab183:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab186:	89 04 24             	mov    %eax,(%esp)
 84ab189:	e8 fa ef cc ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 84ab18e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ab191:	a1 40 bb 3a 09       	mov    0x93abb40,%eax
 84ab196:	2d 10 27 00 00       	sub    $0x2710,%eax
 84ab19b:	a3 40 bb 3a 09       	mov    %eax,0x93abb40
 84ab1a0:	a1 40 bb 3a 09       	mov    0x93abb40,%eax
 84ab1a5:	89 c3                	mov    %eax,%ebx
 84ab1a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab1aa:	89 04 24             	mov    %eax,(%esp)
 84ab1ad:	e8 dc f0 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ab1b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab1b6:	89 04 24             	mov    %eax,(%esp)
 84ab1b9:	e8 94 24 d8 ff       	call   822d652 <_ZN10CInventory9set_moneyEj>
 84ab1be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84ab1c5:	00 
 84ab1c6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84ab1cd:	00 
 84ab1ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ab1d5:	00 
 84ab1d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab1d9:	89 04 24             	mov    %eax,(%esp)
 84ab1dc:	e8 79 14 1d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 84ab1e1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84ab1e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ab1e7:	89 04 24             	mov    %eax,(%esp)
 84ab1ea:	e8 9f f0 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ab1ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ab1f3:	89 04 24             	mov    %eax,(%esp)
 84ab1f6:	e8 57 24 d8 ff       	call   822d652 <_ZN10CInventory9set_moneyEj>
 84ab1fb:	83 c4 24             	add    $0x24,%esp
 84ab1fe:	5b                   	pop    %ebx
 84ab1ff:	5d                   	pop    %ebp
 84ab200:	c3                   	ret
 84ab201:	90                   	nop

```

```c
// game_master::CInvalidGold::execute @ 0x84ab16e

/* game_master::CInvalidGold::execute() */

void __thiscall game_master::CInvalidGold::execute(CInvalidGold *this)

{
  CUser *this_00;
  uint uVar1;
  uint uVar2;
  CInventory *pCVar3;
  
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar1 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)this_00);
  uVar2 = execute()::invalidMoney - 10000;
  execute()::invalidMoney = uVar2;
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
  CInventory::set_money(pCVar3,uVar2);
  CUser::SendUpdateItemList(this_00,1,0,0);
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
  CInventory::set_money(pCVar3,uVar1);
  return;
}

```


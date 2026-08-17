# Inter_InsertCreatureItemResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d027e Inter_InsertCreatureItemResult::dispatch_sig  [0x084d027e-0x84d02ed] ===
 84d027e:	55                   	push   %ebp
 84d027f:	89 e5                	mov    %esp,%ebp
 84d0281:	83 ec 28             	sub    $0x28,%esp
 84d0284:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0287:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d028a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d028d:	89 04 24             	mov    %eax,(%esp)
 84d0290:	e8 9d 01 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d0295:	85 c0                	test   %eax,%eax
 84d0297:	74 15                	je     84d02ae <_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci+0x30>
 84d0299:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d029c:	89 04 24             	mov    %eax,(%esp)
 84d029f:	e8 aa b9 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d02a4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d02a7:	8b 52 48             	mov    0x48(%edx),%edx
 84d02aa:	39 d0                	cmp    %edx,%eax
 84d02ac:	74 07                	je     84d02b5 <_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci+0x37>
 84d02ae:	b8 01 00 00 00       	mov    $0x1,%eax
 84d02b3:	eb 05                	jmp    84d02ba <_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci+0x3c>
 84d02b5:	b8 00 00 00 00       	mov    $0x0,%eax
 84d02ba:	84 c0                	test   %al,%al
 84d02bc:	74 07                	je     84d02c5 <_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci+0x47>
 84d02be:	b8 45 2e 00 00       	mov    $0x2e45,%eax
 84d02c3:	eb 27                	jmp    84d02ec <_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci+0x6e>
 84d02c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d02c8:	89 04 24             	mov    %eax,(%esp)
 84d02cb:	e8 be 9f c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d02d0:	89 04 24             	mov    %eax,(%esp)
 84d02d3:	e8 90 d2 c0 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84d02d8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d02db:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d02df:	89 04 24             	mov    %eax,(%esp)
 84d02e2:	e8 a5 b0 e6 ff       	call   833b38c <_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM>
 84d02e7:	b8 00 00 00 00       	mov    $0x0,%eax
 84d02ec:	c9                   	leave
 84d02ed:	c3                   	ret

```

```c
// Inter_InsertCreatureItemResult::dispatch_sig @ 0x84d027e

/* Inter_InsertCreatureItemResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_InsertCreatureItemResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this;
  CCreatureMgr *this_00;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 != 0) {
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar2 == *(int *)(param_3 + 0x48)) {
      bVar1 = false;
      goto LAB_084d02ba;
    }
  }
  bVar1 = true;
LAB_084d02ba:
  if (bVar1) {
    uVar3 = 0x2e45;
  }
  else {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this);
    user_creature::CCreatureMgr::InsertCreatureItemResult(this_00,(SIG_CREATURE_ITEM *)param_3);
    uVar3 = 0;
  }
  return uVar3;
}

```


# Inter_UpdateCreatureItemResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d02ee Inter_UpdateCreatureItemResult::dispatch_sig  [0x084d02ee-0x84d035d] ===
 84d02ee:	55                   	push   %ebp
 84d02ef:	89 e5                	mov    %esp,%ebp
 84d02f1:	83 ec 28             	sub    $0x28,%esp
 84d02f4:	8b 45 10             	mov    0x10(%ebp),%eax
 84d02f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d02fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d02fd:	89 04 24             	mov    %eax,(%esp)
 84d0300:	e8 2d 01 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d0305:	85 c0                	test   %eax,%eax
 84d0307:	74 15                	je     84d031e <_ZN30Inter_UpdateCreatureItemResult12dispatch_sigEP5CUserPci+0x30>
 84d0309:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d030c:	89 04 24             	mov    %eax,(%esp)
 84d030f:	e8 3a b9 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d0314:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d0317:	8b 52 48             	mov    0x48(%edx),%edx
 84d031a:	39 d0                	cmp    %edx,%eax
 84d031c:	74 07                	je     84d0325 <_ZN30Inter_UpdateCreatureItemResult12dispatch_sigEP5CUserPci+0x37>
 84d031e:	b8 01 00 00 00       	mov    $0x1,%eax
 84d0323:	eb 05                	jmp    84d032a <_ZN30Inter_UpdateCreatureItemResult12dispatch_sigEP5CUserPci+0x3c>
 84d0325:	b8 00 00 00 00       	mov    $0x0,%eax
 84d032a:	84 c0                	test   %al,%al
 84d032c:	74 07                	je     84d0335 <_ZN30Inter_UpdateCreatureItemResult12dispatch_sigEP5CUserPci+0x47>
 84d032e:	b8 5d 2e 00 00       	mov    $0x2e5d,%eax
 84d0333:	eb 27                	jmp    84d035c <_ZN30Inter_UpdateCreatureItemResult12dispatch_sigEP5CUserPci+0x6e>
 84d0335:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0338:	89 04 24             	mov    %eax,(%esp)
 84d033b:	e8 4e 9f c0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84d0340:	89 04 24             	mov    %eax,(%esp)
 84d0343:	e8 20 d2 c0 ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 84d0348:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d034b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d034f:	89 04 24             	mov    %eax,(%esp)
 84d0352:	e8 3b b2 e6 ff       	call   833b592 <_ZN13user_creature12CCreatureMgr24UpdateCreatureItemResultEP17SIG_CREATURE_ITEM>
 84d0357:	b8 00 00 00 00       	mov    $0x0,%eax
 84d035c:	c9                   	leave
 84d035d:	c3                   	ret

```

```c
// Inter_UpdateCreatureItemResult::dispatch_sig @ 0x84d02ee

/* Inter_UpdateCreatureItemResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdateCreatureItemResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
      goto LAB_084d032a;
    }
  }
  bVar1 = true;
LAB_084d032a:
  if (bVar1) {
    uVar3 = 0x2e5d;
  }
  else {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this);
    user_creature::CCreatureMgr::UpdateCreatureItemResult(this_00,(SIG_CREATURE_ITEM *)param_3);
    uVar3 = 0;
  }
  return uVar3;
}

```


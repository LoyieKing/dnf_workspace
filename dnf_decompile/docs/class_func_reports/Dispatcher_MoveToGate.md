# Dispatcher_MoveToGate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08203350 Dispatcher_MoveToGate::dispatch_sig  [0x08203350-0x82033e5] ===
 8203350:	55                   	push   %ebp
 8203351:	89 e5                	mov    %esp,%ebp
 8203353:	83 ec 28             	sub    $0x28,%esp
 8203356:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203359:	89 04 24             	mov    %eax,(%esp)
 820335c:	e8 2b 70 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8203361:	83 f8 03             	cmp    $0x3,%eax
 8203364:	75 0f                	jne    8203375 <_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8203366:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203369:	89 04 24             	mov    %eax,(%esp)
 820336c:	e8 c1 d0 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8203371:	85 c0                	test   %eax,%eax
 8203373:	75 07                	jne    820337c <_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 8203375:	b8 01 00 00 00       	mov    $0x1,%eax
 820337a:	eb 05                	jmp    8203381 <_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf+0x31>
 820337c:	b8 00 00 00 00       	mov    $0x0,%eax
 8203381:	84 c0                	test   %al,%al
 8203383:	74 26                	je     82033ab <_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 8203385:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820338c:	00 
 820338d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8203394:	00 
 8203395:	c7 44 24 04 a0 f2 bc 	movl   $0x8bcf2a0,0x4(%esp)
 820339c:	08 
 820339d:	c7 04 24 0d 9a 00 00 	movl   $0x9a0d,(%esp)
 82033a4:	e8 2e d5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82033a9:	eb 39                	jmp    82033e4 <_ZN21Dispatcher_MoveToGate12dispatch_sigEP5CUserR9PacketBuf+0x94>
 82033ab:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82033b2:	e8 31 18 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 82033b7:	8b 55 0c             	mov    0xc(%ebp),%edx
 82033ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 82033be:	8d 55 f4             	lea    -0xc(%ebp),%edx
 82033c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 82033c5:	89 04 24             	mov    %eax,(%esp)
 82033c8:	e8 cb 72 3c 00       	call   85ca698 <_ZN13private_store16CPrivateStoreMgr14GetStoreSellerEPPNS_7ISellerEP5CUser>
 82033cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82033d0:	8b 00                	mov    (%eax),%eax
 82033d2:	83 c0 0c             	add    $0xc,%eax
 82033d5:	8b 10                	mov    (%eax),%edx
 82033d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82033da:	89 04 24             	mov    %eax,(%esp)
 82033dd:	ff d2                	call   *%edx
 82033df:	b8 00 00 00 00       	mov    $0x0,%eax
 82033e4:	c9                   	leave
 82033e5:	c3                   	ret

```

```c
// Dispatcher_MoveToGate::dispatch_sig @ 0x8203350

/* Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_MoveToGate::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CPrivateStoreMgr *this;
  ISeller *local_10 [3];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_08203381;
    }
  }
  bVar1 = true;
LAB_08203381:
  if (bVar1) {
    uVar3 = LineFunc(0x9a0d,"virtual int Dispatcher_MoveToGate::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_10[0] = (ISeller *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreSeller(this,local_10,(CUser *)param_2);
    (**(code **)(*(int *)local_10[0] + 0xc))(local_10[0]);
    uVar3 = 0;
  }
  return uVar3;
}

```


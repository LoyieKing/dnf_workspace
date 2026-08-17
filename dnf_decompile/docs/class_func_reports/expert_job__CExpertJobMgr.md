# expert_job__CExpertJobMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## AcquireExpertJob

```asm
// === 0849e1dc expert_job::CExpertJobMgr::AcquireExpertJob  [0x0849e1dc-0x849e1f7] ===
 849e1dc:	55                   	push   %ebp
 849e1dd:	89 e5                	mov    %esp,%ebp
 849e1df:	83 ec 18             	sub    $0x18,%esp
 849e1e2:	8b 45 08             	mov    0x8(%ebp),%eax
 849e1e5:	8b 00                	mov    (%eax),%eax
 849e1e7:	8b 55 0c             	mov    0xc(%ebp),%edx
 849e1ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e1ee:	89 04 24             	mov    %eax,(%esp)
 849e1f1:	e8 dc 13 00 00       	call   849f5d2 <_ZN10expert_job17CExpertJobFactory16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>
 849e1f6:	c9                   	leave
 849e1f7:	c3                   	ret

```

```c
// expert_job::CExpertJobMgr::AcquireExpertJob @ 0x849e1dc

/* expert_job::CExpertJobMgr::AcquireExpertJob(ENUM_EXPERT_JOB_TYPE) */

void __thiscall expert_job::CExpertJobMgr::AcquireExpertJob(CExpertJobMgr *this,undefined4 param_2)

{
  CExpertJobFactory::AcquireExpertJob(*(CExpertJobFactory **)this,param_2);
  return;
}

```

---

## CExpertJobMgr

```asm
// === 0849e102 expert_job::CExpertJobMgr::CExpertJobMgr  [0x0849e102-0x849e1ab] ===
 849e102:	55                   	push   %ebp
 849e103:	89 e5                	mov    %esp,%ebp
 849e105:	57                   	push   %edi
 849e106:	56                   	push   %esi
 849e107:	53                   	push   %ebx
 849e108:	83 ec 2c             	sub    $0x2c,%esp
 849e10b:	8b 45 08             	mov    0x8(%ebp),%eax
 849e10e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 849e114:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 849e11b:	08 
 849e11c:	c7 04 24 60 00 00 00 	movl   $0x60,(%esp)
 849e123:	e8 28 7a 28 00       	call   8725b50 <_ZnwjRKSt9nothrow_t>
 849e128:	89 c3                	mov    %eax,%ebx
 849e12a:	89 d8                	mov    %ebx,%eax
 849e12c:	85 c0                	test   %eax,%eax
 849e12e:	74 47                	je     849e177 <_ZN10expert_job13CExpertJobMgrC1Ev+0x75>
 849e130:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 849e133:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 849e136:	b8 00 00 00 00       	mov    $0x0,%eax
 849e13b:	ba 18 00 00 00       	mov    $0x18,%edx
 849e140:	89 f7                	mov    %esi,%edi
 849e142:	89 d1                	mov    %edx,%ecx
 849e144:	f3 ab                	rep stos %eax,%es:(%edi)
 849e146:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e149:	89 04 24             	mov    %eax,(%esp)
 849e14c:	e8 3b 15 00 00       	call   849f68c <_ZN10expert_job17CExpertJobFactoryC1Ev>
 849e151:	eb 20                	jmp    849e173 <_ZN10expert_job13CExpertJobMgrC1Ev+0x71>
 849e153:	89 d6                	mov    %edx,%esi
 849e155:	89 c7                	mov    %eax,%edi
 849e157:	c7 44 24 04 87 1a d0 	movl   $0x8d01a87,0x4(%esp)
 849e15e:	08 
 849e15f:	89 1c 24             	mov    %ebx,(%esp)
 849e162:	e8 79 66 28 00       	call   87247e0 <_ZdlPvRKSt9nothrow_t>
 849e167:	89 f8                	mov    %edi,%eax
 849e169:	89 f2                	mov    %esi,%edx
 849e16b:	89 04 24             	mov    %eax,(%esp)
 849e16e:	e8 dd 55 64 00       	call   8ae3750 <_Unwind_Resume>
 849e173:	89 d8                	mov    %ebx,%eax
 849e175:	eb 02                	jmp    849e179 <_ZN10expert_job13CExpertJobMgrC1Ev+0x77>
 849e177:	89 d8                	mov    %ebx,%eax
 849e179:	8b 55 08             	mov    0x8(%ebp),%edx
 849e17c:	89 02                	mov    %eax,(%edx)
 849e17e:	8b 45 08             	mov    0x8(%ebp),%eax
 849e181:	8b 00                	mov    (%eax),%eax
 849e183:	85 c0                	test   %eax,%eax
 849e185:	75 1c                	jne    849e1a3 <_ZN10expert_job13CExpertJobMgrC1Ev+0xa1>
 849e187:	c7 44 24 08 7f 05 00 	movl   $0x57f,0x8(%esp)
 849e18e:	00 
 849e18f:	c7 44 24 04 40 c9 c7 	movl   $0x8c7c940,0x4(%esp)
 849e196:	08 
 849e197:	c7 04 24 14 bb c7 08 	movl   $0x8c7bb14,(%esp)
 849e19e:	e8 bd f9 bd ff       	call   807db60 <printf@plt>
 849e1a3:	83 c4 2c             	add    $0x2c,%esp
 849e1a6:	5b                   	pop    %ebx
 849e1a7:	5e                   	pop    %esi
 849e1a8:	5f                   	pop    %edi
 849e1a9:	5d                   	pop    %ebp
 849e1aa:	c3                   	ret
 849e1ab:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::CExpertJobMgr @ 0x849e102

/* expert_job::CExpertJobMgr::CExpertJobMgr() */

void __thiscall expert_job::CExpertJobMgr::CExpertJobMgr(CExpertJobMgr *this)

{
  CExpertJobFactory *this_00;
  int iVar1;
  CExpertJobFactory *pCVar2;
  byte bVar3;
  
  bVar3 = 0;
  *(undefined4 *)this = 0;
  this_00 = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this_00 != (CExpertJobFactory *)0x0) {
    pCVar2 = this_00;
    for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(undefined4 *)pCVar2 = 0;
      pCVar2 = pCVar2 + (uint)bVar3 * -8 + 4;
    }
                    /* try { // try from 0849e14c to 0849e150 has its CatchHandler @ 0849e153 */
    CExpertJobFactory::CExpertJobFactory(this_00);
  }
  *(CExpertJobFactory **)this = this_00;
  if (*(int *)this == 0) {
    printf("memory error func(%s) line(%d)","expert_job::CExpertJobMgr::CExpertJobMgr()",0x57f);
  }
  return;
}

```

---

## FreeExpertJob

```asm
// === 0849e1f8 expert_job::CExpertJobMgr::FreeExpertJob  [0x0849e1f8-0x849e213] ===
 849e1f8:	55                   	push   %ebp
 849e1f9:	89 e5                	mov    %esp,%ebp
 849e1fb:	83 ec 18             	sub    $0x18,%esp
 849e1fe:	8b 45 08             	mov    0x8(%ebp),%eax
 849e201:	8b 00                	mov    (%eax),%eax
 849e203:	8b 55 0c             	mov    0xc(%ebp),%edx
 849e206:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e20a:	89 04 24             	mov    %eax,(%esp)
 849e20d:	e8 2c 14 00 00       	call   849f63e <_ZN10expert_job17CExpertJobFactory13FreeExpertJobEPNS_10CExpertJobE>
 849e212:	c9                   	leave
 849e213:	c3                   	ret

```

```c
// expert_job::CExpertJobMgr::FreeExpertJob @ 0x849e1f8

/* expert_job::CExpertJobMgr::FreeExpertJob(expert_job::CExpertJob*) */

void __thiscall expert_job::CExpertJobMgr::FreeExpertJob(CExpertJobMgr *this,CExpertJob *param_1)

{
  CExpertJobFactory::FreeExpertJob(*(CExpertJobFactory **)this,param_1);
  return;
}

```

---

## IsAvailableRequestPeer

```asm
// === 0849e55e expert_job::CExpertJobMgr::IsAvailableRequestPeer  [0x0849e55e-0x849e60b] ===
 849e55e:	55                   	push   %ebp
 849e55f:	89 e5                	mov    %esp,%ebp
 849e561:	83 ec 18             	sub    $0x18,%esp
 849e564:	8b 45 10             	mov    0x10(%ebp),%eax
 849e567:	89 04 24             	mov    %eax,(%esp)
 849e56a:	e8 c3 1e c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849e56f:	85 c0                	test   %eax,%eax
 849e571:	74 0f                	je     849e582 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x24>
 849e573:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e576:	89 04 24             	mov    %eax,(%esp)
 849e579:	e8 b4 1e c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849e57e:	85 c0                	test   %eax,%eax
 849e580:	75 07                	jne    849e589 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x2b>
 849e582:	b8 01 00 00 00       	mov    $0x1,%eax
 849e587:	eb 05                	jmp    849e58e <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x30>
 849e589:	b8 00 00 00 00       	mov    $0x0,%eax
 849e58e:	84 c0                	test   %al,%al
 849e590:	74 07                	je     849e599 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x3b>
 849e592:	b8 03 00 00 00       	mov    $0x3,%eax
 849e597:	eb 70                	jmp    849e609 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xab>
 849e599:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e59c:	89 04 24             	mov    %eax,(%esp)
 849e59f:	e8 30 13 d9 ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 849e5a4:	85 c0                	test   %eax,%eax
 849e5a6:	0f 95 c0             	setne  %al
 849e5a9:	84 c0                	test   %al,%al
 849e5ab:	74 07                	je     849e5b4 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x56>
 849e5ad:	b8 13 00 00 00       	mov    $0x13,%eax
 849e5b2:	eb 55                	jmp    849e609 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xab>
 849e5b4:	8b 45 10             	mov    0x10(%ebp),%eax
 849e5b7:	89 04 24             	mov    %eax,(%esp)
 849e5ba:	e8 15 13 d9 ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 849e5bf:	85 c0                	test   %eax,%eax
 849e5c1:	0f 95 c0             	setne  %al
 849e5c4:	84 c0                	test   %al,%al
 849e5c6:	74 07                	je     849e5cf <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x71>
 849e5c8:	b8 13 00 00 00       	mov    $0x13,%eax
 849e5cd:	eb 3a                	jmp    849e609 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xab>
 849e5cf:	e8 14 66 12 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 849e5d4:	8b 55 10             	mov    0x10(%ebp),%edx
 849e5d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e5db:	89 04 24             	mov    %eax,(%esp)
 849e5de:	e8 7b c7 12 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 849e5e3:	84 c0                	test   %al,%al
 849e5e5:	74 07                	je     849e5ee <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x90>
 849e5e7:	b8 3d 00 00 00       	mov    $0x3d,%eax
 849e5ec:	eb 1b                	jmp    849e609 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xab>
 849e5ee:	8b 45 10             	mov    0x10(%ebp),%eax
 849e5f1:	89 04 24             	mov    %eax,(%esp)
 849e5f4:	e8 e1 bc c3 ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 849e5f9:	84 c0                	test   %al,%al
 849e5fb:	74 07                	je     849e604 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xa6>
 849e5fd:	b8 13 00 00 00       	mov    $0x13,%eax
 849e602:	eb 05                	jmp    849e609 <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xab>
 849e604:	b8 00 00 00 00       	mov    $0x0,%eax
 849e609:	c9                   	leave
 849e60a:	c3                   	ret
 849e60b:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::IsAvailableRequestPeer @ 0x849e55e

/* expert_job::CExpertJobMgr::IsAvailableRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE,
   PacketGuard&) */

undefined4
expert_job::CExpertJobMgr::IsAvailableRequestPeer
          (undefined4 param_1,CUserCharacInfo *param_2,CUserCharacInfo *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPrivateStoreMgr *this;
  
  iVar3 = CUserCharacInfo::getCurCharacR(param_3);
  if (iVar3 != 0) {
    iVar3 = CUserCharacInfo::getCurCharacR(param_2);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0849e58e;
    }
  }
  bVar1 = true;
LAB_0849e58e:
  if (bVar1) {
    uVar4 = 3;
  }
  else {
    iVar3 = CUserCharacInfo::GetCurCharacExpertJob(param_2);
    if (iVar3 == 0) {
      iVar3 = CUserCharacInfo::GetCurCharacExpertJob(param_3);
      if (iVar3 == 0) {
        this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
        cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this,(CUser *)param_3);
        if (cVar2 == '\0') {
          cVar2 = CUserCharacInfo::IsCurCharacGhost(param_3);
          if (cVar2 == '\0') {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x13;
          }
        }
        else {
          uVar4 = 0x3d;
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}

```

---

## OnEnchantByBead

```asm
// === 0849ed1a expert_job::CExpertJobMgr::OnEnchantByBead  [0x0849ed1a-0x849f18e] ===
 849ed1a:	55                   	push   %ebp
 849ed1b:	89 e5                	mov    %esp,%ebp
 849ed1d:	57                   	push   %edi
 849ed1e:	56                   	push   %esi
 849ed1f:	53                   	push   %ebx
 849ed20:	83 ec 6c             	sub    $0x6c,%esp
 849ed23:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ed26:	89 04 24             	mov    %eax,(%esp)
 849ed29:	e8 60 b5 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849ed2e:	8b 55 14             	mov    0x14(%ebp),%edx
 849ed31:	89 54 24 08          	mov    %edx,0x8(%esp)
 849ed35:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ed3c:	00 
 849ed3d:	89 04 24             	mov    %eax,(%esp)
 849ed40:	e8 69 d5 05 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 849ed45:	89 45 c8             	mov    %eax,-0x38(%ebp)
 849ed48:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 849ed4c:	75 0a                	jne    849ed58 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x3e>
 849ed4e:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ed53:	e9 2d 04 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ed58:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ed5b:	89 04 24             	mov    %eax,(%esp)
 849ed5e:	e8 2b b5 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849ed63:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849ed66:	89 54 24 08          	mov    %edx,0x8(%esp)
 849ed6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ed71:	00 
 849ed72:	89 04 24             	mov    %eax,(%esp)
 849ed75:	e8 34 d5 05 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 849ed7a:	89 45 cc             	mov    %eax,-0x34(%ebp)
 849ed7d:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 849ed81:	75 0a                	jne    849ed8d <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x73>
 849ed83:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ed88:	e9 f8 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ed8d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 849ed90:	8b 50 02             	mov    0x2(%eax),%edx
 849ed93:	a1 38 f7 41 09       	mov    0x941f738,%eax
 849ed98:	89 54 24 08          	mov    %edx,0x8(%esp)
 849ed9c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849eda3:	00 
 849eda4:	89 04 24             	mov    %eax,(%esp)
 849eda7:	e8 30 15 dd ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 849edac:	84 c0                	test   %al,%al
 849edae:	74 0a                	je     849edba <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0xa0>
 849edb0:	bb 11 00 00 00       	mov    $0x11,%ebx
 849edb5:	e9 cb 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849edba:	8b 45 cc             	mov    -0x34(%ebp),%eax
 849edbd:	8b 50 02             	mov    0x2(%eax),%edx
 849edc0:	a1 38 f7 41 09       	mov    0x941f738,%eax
 849edc5:	89 54 24 08          	mov    %edx,0x8(%esp)
 849edc9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 849edd0:	00 
 849edd1:	89 04 24             	mov    %eax,(%esp)
 849edd4:	e8 03 15 dd ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 849edd9:	84 c0                	test   %al,%al
 849eddb:	74 0a                	je     849ede7 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0xcd>
 849eddd:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ede2:	e9 9e 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ede7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 849edea:	8b 40 02             	mov    0x2(%eax),%eax
 849eded:	89 c3                	mov    %eax,%ebx
 849edef:	e8 a7 d3 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849edf4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849edf8:	89 04 24             	mov    %eax,(%esp)
 849edfb:	e8 32 0c ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849ee00:	89 45 d0             	mov    %eax,-0x30(%ebp)
 849ee03:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 849ee07:	75 0a                	jne    849ee13 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0xf9>
 849ee09:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ee0e:	e9 72 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ee13:	8b 45 cc             	mov    -0x34(%ebp),%eax
 849ee16:	8b 40 02             	mov    0x2(%eax),%eax
 849ee19:	89 c3                	mov    %eax,%ebx
 849ee1b:	e8 7b d3 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849ee20:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ee24:	89 04 24             	mov    %eax,(%esp)
 849ee27:	e8 06 0c ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849ee2c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 849ee2f:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 849ee33:	75 0a                	jne    849ee3f <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x125>
 849ee35:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ee3a:	e9 46 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ee3f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 849ee42:	89 04 24             	mov    %eax,(%esp)
 849ee45:	e8 b0 24 c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849ee4a:	83 f0 01             	xor    $0x1,%eax
 849ee4d:	84 c0                	test   %al,%al
 849ee4f:	74 0a                	je     849ee5b <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x141>
 849ee51:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ee56:	e9 2a 03 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ee5b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 849ee5e:	89 04 24             	mov    %eax,(%esp)
 849ee61:	e8 ca 06 00 00       	call   849f530 <_ZN14CStackableItem16GetMonsterCardIdEv>
 849ee66:	89 45 d8             	mov    %eax,-0x28(%ebp)
 849ee69:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 849ee6c:	e8 2a d3 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849ee71:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ee75:	89 04 24             	mov    %eax,(%esp)
 849ee78:	e8 b5 0b ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849ee7d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 849ee80:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 849ee84:	75 0a                	jne    849ee90 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x176>
 849ee86:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ee8b:	e9 f5 02 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ee90:	8b 45 d0             	mov    -0x30(%ebp),%eax
 849ee93:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ee97:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 849ee9a:	89 04 24             	mov    %eax,(%esp)
 849ee9d:	e8 c6 e8 ff ff       	call   849d768 <_Z11EnableWorldPK5CItemS1_>
 849eea2:	83 f0 01             	xor    $0x1,%eax
 849eea5:	84 c0                	test   %al,%al
 849eea7:	74 0a                	je     849eeb3 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x199>
 849eea9:	bb 13 00 00 00       	mov    $0x13,%ebx
 849eeae:	e9 d2 02 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849eeb3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 849eeb6:	8b 00                	mov    (%eax),%eax
 849eeb8:	83 c0 20             	add    $0x20,%eax
 849eebb:	8b 18                	mov    (%eax),%ebx
 849eebd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 849eec0:	8b 00                	mov    (%eax),%eax
 849eec2:	83 c0 0c             	add    $0xc,%eax
 849eec5:	8b 10                	mov    (%eax),%edx
 849eec7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 849eeca:	89 04 24             	mov    %eax,(%esp)
 849eecd:	ff d2                	call   *%edx
 849eecf:	89 44 24 04          	mov    %eax,0x4(%esp)
 849eed3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 849eed6:	89 04 24             	mov    %eax,(%esp)
 849eed9:	ff d3                	call   *%ebx
 849eedb:	83 f0 01             	xor    $0x1,%eax
 849eede:	84 c0                	test   %al,%al
 849eee0:	74 0a                	je     849eeec <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x1d2>
 849eee2:	bb 17 00 00 00       	mov    $0x17,%ebx
 849eee7:	e9 99 02 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849eeec:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eeef:	89 04 24             	mov    %eax,(%esp)
 849eef2:	e8 97 b3 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849eef7:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 849eefe:	00 
 849eeff:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 849ef06:	00 
 849ef07:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849ef0e:	00 
 849ef0f:	8b 55 14             	mov    0x14(%ebp),%edx
 849ef12:	89 54 24 08          	mov    %edx,0x8(%esp)
 849ef16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ef1d:	00 
 849ef1e:	89 04 24             	mov    %eax,(%esp)
 849ef21:	e8 e6 50 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 849ef26:	88 45 e3             	mov    %al,-0x1d(%ebp)
 849ef29:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 849ef2d:	83 f0 01             	xor    $0x1,%eax
 849ef30:	84 c0                	test   %al,%al
 849ef32:	74 58                	je     849ef8c <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x272>
 849ef34:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ef37:	89 04 24             	mov    %eax,(%esp)
 849ef3a:	e8 0f cd c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849ef3f:	89 c3                	mov    %eax,%ebx
 849ef41:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849ef48:	00 
 849ef49:	c7 44 24 08 cd 06 00 	movl   $0x6cd,0x8(%esp)
 849ef50:	00 
 849ef51:	c7 44 24 04 c0 c8 c7 	movl   $0x8c7c8c0,0x4(%esp)
 849ef58:	08 
 849ef59:	8d 45 b8             	lea    -0x48(%ebp),%eax
 849ef5c:	89 04 24             	mov    %eax,(%esp)
 849ef5f:	e8 b4 07 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849ef64:	8b 45 14             	mov    0x14(%ebp),%eax
 849ef67:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849ef6b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849ef6f:	c7 44 24 04 48 bb c7 	movl   $0x8c7bb48,0x4(%esp)
 849ef76:	08 
 849ef77:	8d 45 b8             	lea    -0x48(%ebp),%eax
 849ef7a:	89 04 24             	mov    %eax,(%esp)
 849ef7d:	e8 06 08 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849ef82:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ef87:	e9 f9 01 00 00       	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849ef8c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 849ef8f:	8b 40 0d             	mov    0xd(%eax),%eax
 849ef92:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849ef95:	8b 45 dc             	mov    -0x24(%ebp),%eax
 849ef98:	89 04 24             	mov    %eax,(%esp)
 849ef9b:	e8 a8 1c c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849efa0:	89 c2                	mov    %eax,%edx
 849efa2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 849efa5:	89 50 0d             	mov    %edx,0xd(%eax)
 849efa8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849efab:	89 04 24             	mov    %eax,(%esp)
 849efae:	e8 99 ed 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849efb3:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849efb6:	89 04 24             	mov    %eax,(%esp)
 849efb9:	e8 28 c9 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849efbe:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 849efc5:	00 
 849efc6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849efcd:	00 
 849efce:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849efd1:	89 04 24             	mov    %eax,(%esp)
 849efd4:	e8 23 c9 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849efd9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849efe0:	00 
 849efe1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849efe4:	89 04 24             	mov    %eax,(%esp)
 849efe7:	e8 34 c9 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849efec:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 849eff3:	00 
 849eff4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849eff7:	89 04 24             	mov    %eax,(%esp)
 849effa:	e8 a5 ae c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849efff:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f002:	89 04 24             	mov    %eax,(%esp)
 849f005:	e8 74 b2 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849f00a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 849f00d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849f011:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849f014:	89 54 24 08          	mov    %edx,0x8(%esp)
 849f018:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f01f:	00 
 849f020:	89 04 24             	mov    %eax,(%esp)
 849f023:	e8 94 d6 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 849f028:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f02b:	89 04 24             	mov    %eax,(%esp)
 849f02e:	e8 4b b2 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849f033:	8d 55 ac             	lea    -0x54(%ebp),%edx
 849f036:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849f03a:	8b 55 14             	mov    0x14(%ebp),%edx
 849f03d:	89 54 24 08          	mov    %edx,0x8(%esp)
 849f041:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f048:	00 
 849f049:	89 04 24             	mov    %eax,(%esp)
 849f04c:	e8 6b d6 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 849f051:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f058:	00 
 849f059:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f05c:	89 04 24             	mov    %eax,(%esp)
 849f05f:	e8 f4 c8 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849f064:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f067:	89 44 24 04          	mov    %eax,0x4(%esp)
 849f06b:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f06e:	89 04 24             	mov    %eax,(%esp)
 849f071:	e8 44 95 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849f076:	8b 45 dc             	mov    -0x24(%ebp),%eax
 849f079:	89 04 24             	mov    %eax,(%esp)
 849f07c:	e8 c7 1b c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849f081:	89 c3                	mov    %eax,%ebx
 849f083:	e8 b8 08 17 00       	call   860f940 <_Z29GetInstanceExpertJobStatisticv>
 849f088:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849f08f:	00 
 849f090:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849f094:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f09b:	00 
 849f09c:	89 04 24             	mov    %eax,(%esp)
 849f09f:	e8 30 09 17 00       	call   860f9d4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi>
 849f0a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f0a7:	89 04 24             	mov    %eax,(%esp)
 849f0aa:	e8 79 1f c6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 849f0af:	89 c3                	mov    %eax,%ebx
 849f0b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f0b4:	89 04 24             	mov    %eax,(%esp)
 849f0b7:	e8 b6 1f c6 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 849f0bc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 849f0bf:	8b 52 0d             	mov    0xd(%edx),%edx
 849f0c2:	89 d6                	mov    %edx,%esi
 849f0c4:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 849f0c7:	8b 55 cc             	mov    -0x34(%ebp),%edx
 849f0ca:	8b 52 02             	mov    0x2(%edx),%edx
 849f0cd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 849f0d0:	81 c7 00 97 07 00    	add    $0x79700,%edi
 849f0d6:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 849f0da:	89 44 24 14          	mov    %eax,0x14(%esp)
 849f0de:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 849f0e5:	00 
 849f0e6:	89 74 24 0c          	mov    %esi,0xc(%esp)
 849f0ea:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849f0ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 849f0f2:	89 3c 24             	mov    %edi,(%esp)
 849f0f5:	e8 7a 5c 1e 00       	call   8684d74 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_>
 849f0fa:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f0fd:	89 04 24             	mov    %eax,(%esp)
 849f100:	e8 e1 c7 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849f105:	c7 44 24 08 13 01 00 	movl   $0x113,0x8(%esp)
 849f10c:	00 
 849f10d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f114:	00 
 849f115:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f118:	89 04 24             	mov    %eax,(%esp)
 849f11b:	e8 dc c7 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849f120:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f127:	00 
 849f128:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f12b:	89 04 24             	mov    %eax,(%esp)
 849f12e:	e8 ed c7 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849f133:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849f13a:	00 
 849f13b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f13e:	89 04 24             	mov    %eax,(%esp)
 849f141:	e8 12 c8 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849f146:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f149:	89 44 24 04          	mov    %eax,0x4(%esp)
 849f14d:	8b 45 0c             	mov    0xc(%ebp),%eax
 849f150:	89 04 24             	mov    %eax,(%esp)
 849f153:	e8 62 94 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849f158:	bb 00 00 00 00       	mov    $0x0,%ebx
 849f15d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f160:	89 04 24             	mov    %eax,(%esp)
 849f163:	e8 18 ed 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849f168:	eb 1b                	jmp    849f185 <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii+0x46b>
 849f16a:	89 d3                	mov    %edx,%ebx
 849f16c:	89 c6                	mov    %eax,%esi
 849f16e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 849f171:	89 04 24             	mov    %eax,(%esp)
 849f174:	e8 07 ed 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849f179:	89 f0                	mov    %esi,%eax
 849f17b:	89 da                	mov    %ebx,%edx
 849f17d:	89 04 24             	mov    %eax,(%esp)
 849f180:	e8 cb 45 64 00       	call   8ae3750 <_Unwind_Resume>
 849f185:	89 d8                	mov    %ebx,%eax
 849f187:	83 c4 6c             	add    $0x6c,%esp
 849f18a:	5b                   	pop    %ebx
 849f18b:	5e                   	pop    %esi
 849f18c:	5f                   	pop    %edi
 849f18d:	5d                   	pop    %ebp
 849f18e:	c3                   	ret

```

```c
// expert_job::CExpertJobMgr::OnEnchantByBead @ 0x849ed1a

/* expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int) */

undefined4 __thiscall
expert_job::CExpertJobMgr::OnEnchantByBead
          (CExpertJobMgr *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  char cVar2;
  CInventory *pCVar3;
  CDataManager *pCVar4;
  int iVar5;
  CExpertJobStatistic *pCVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 uVar9;
  PacketGuard local_58 [12];
  cMyTrace local_4c [16];
  int local_3c;
  int local_38;
  CItem *local_34;
  CItem *local_30;
  int local_2c;
  CItem *local_28;
  char local_21;
  int local_20;
  
  pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  local_3c = CInventory::GetInvenRef(pCVar3,1,param_3);
  if (local_3c == 0) {
    uVar9 = 0x11;
  }
  else {
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_38 = CInventory::GetInvenRef(pCVar3,1,param_5);
    if (local_38 == 0) {
      uVar9 = 0x11;
    }
    else {
      cVar2 = InstanceRentalSystem::CheckRentableItem
                        (GlobalData::s_rentalSystem,1,*(uint *)(local_38 + 2));
      if (cVar2 == '\0') {
        cVar2 = InstanceRentalSystem::CheckRentableItem
                          (GlobalData::s_rentalSystem,2,*(uint *)(local_38 + 2));
        if (cVar2 == '\0') {
          iVar5 = *(int *)(local_3c + 2);
          pCVar4 = (CDataManager *)G_CDataManager();
          local_34 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
          if (local_34 == (CItem *)0x0) {
            uVar9 = 0x11;
          }
          else {
            iVar5 = *(int *)(local_38 + 2);
            pCVar4 = (CDataManager *)G_CDataManager();
            local_30 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
            if (local_30 == (CItem *)0x0) {
              uVar9 = 0x11;
            }
            else {
              cVar2 = CItem::is_stackable(local_34);
              if (cVar2 == '\x01') {
                iVar5 = CStackableItem::GetMonsterCardId((CStackableItem *)local_34);
                local_2c = iVar5;
                pCVar4 = (CDataManager *)G_CDataManager();
                local_28 = (CItem *)CDataManager::find_item(pCVar4,iVar5);
                if (local_28 == (CItem *)0x0) {
                  uVar9 = 0x11;
                }
                else {
                  cVar2 = EnableWorld(local_30,local_34);
                  if (cVar2 == '\x01') {
                    pcVar1 = *(code **)(*(int *)local_28 + 0x20);
                    uVar9 = (**(code **)(*(int *)local_30 + 0xc))(local_30);
                    cVar2 = (*pcVar1)(local_28,uVar9);
                    if (cVar2 == '\x01') {
                      pCVar3 = (CInventory *)
                               CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      local_21 = CInventory::delete_item(pCVar3,1,param_3,1,8,1);
                      if (local_21 == '\x01') {
                        local_20 = *(int *)(local_38 + 0xd);
                        uVar9 = CItem::get_index(local_28);
                        *(undefined4 *)(local_38 + 0xd) = uVar9;
                        PacketGuard::PacketGuard(local_58);
                    /* try { // try from 0849efb9 to 0849f157 has its CatchHandler @ 0849f16a */
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,0,0xe);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,0);
                        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_58,2);
                        pCVar3 = (CInventory *)
                                 CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                        CInventory::MakeItemPacket(pCVar3,1,param_5,local_58);
                        pCVar3 = (CInventory *)
                                 CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                        CInventory::MakeItemPacket(pCVar3,1,param_3,local_58);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                        CUser::Send(param_1,local_58);
                        uVar9 = CItem::get_index(local_28);
                        pCVar6 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
                        CExpertJobStatistic::increaseItemCount(pCVar6,1,uVar9,1);
                        pcVar7 = (char *)CUserCharacInfo::getCurCharacName
                                                   ((CUserCharacInfo *)param_1);
                        pcVar8 = (char *)CUser::get_acc_name(param_1);
                        cUserHistoryLog::EnchantItem
                                  ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_38 + 2),
                                   local_20,*(int *)(local_38 + 0xd),true,pcVar8,pcVar7);
                        InterfacePacketBuf::clear((InterfacePacketBuf *)local_58);
                        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_58,1,0x113);
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_58,1);
                        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_58,true);
                        CUser::Send(param_1,local_58);
                        uVar9 = 0;
                        PacketGuard::~PacketGuard(local_58);
                      }
                      else {
                        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                        cMyTrace::cMyTrace(local_4c,
                                           "int expert_job::CExpertJobMgr::OnEnchantByBead(CUser*, int, int, int, int)"
                                           ,0x6cd,5);
                        cMyTrace::operator()
                                  (local_4c,
                                   "CExpertJobMgr::OnEnchantByBead, getCurCharacInvenW()->delete_item failed , %d %d"
                                   ,uVar9,param_3);
                        uVar9 = 0x11;
                      }
                    }
                    else {
                      uVar9 = 0x17;
                    }
                  }
                  else {
                    uVar9 = 0x13;
                  }
                }
              }
              else {
                uVar9 = 0x11;
              }
            }
          }
        }
        else {
          uVar9 = 0x11;
        }
      }
      else {
        uVar9 = 0x11;
      }
    }
  }
  return uVar9;
}

```

---

## OnGiveup

```asm
// === 0849e60c expert_job::CExpertJobMgr::OnGiveup  [0x0849e60c-0x849ed19] ===
 849e60c:	55                   	push   %ebp
 849e60d:	89 e5                	mov    %esp,%ebp
 849e60f:	56                   	push   %esi
 849e610:	53                   	push   %ebx
 849e611:	83 ec 60             	sub    $0x60,%esp
 849e614:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e617:	89 04 24             	mov    %eax,(%esp)
 849e61a:	e8 13 1e c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849e61f:	85 c0                	test   %eax,%eax
 849e621:	0f 94 c0             	sete   %al
 849e624:	84 c0                	test   %al,%al
 849e626:	74 2c                	je     849e654 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x48>
 849e628:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e62f:	e8 cc 71 28 00       	call   8725800 <__cxa_allocate_exception>
 849e634:	89 c2                	mov    %eax,%edx
 849e636:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 849e63c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e643:	00 
 849e644:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e64b:	08 
 849e64c:	89 04 24             	mov    %eax,(%esp)
 849e64f:	e8 fc 65 28 00       	call   8724c50 <__cxa_throw>
 849e654:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e657:	89 04 24             	mov    %eax,(%esp)
 849e65a:	e8 35 12 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849e65f:	85 c0                	test   %eax,%eax
 849e661:	0f 94 c0             	sete   %al
 849e664:	84 c0                	test   %al,%al
 849e666:	74 2c                	je     849e694 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x88>
 849e668:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e66f:	e8 8c 71 28 00       	call   8725800 <__cxa_allocate_exception>
 849e674:	89 c2                	mov    %eax,%edx
 849e676:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 849e67c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e683:	00 
 849e684:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e68b:	08 
 849e68c:	89 04 24             	mov    %eax,(%esp)
 849e68f:	e8 bc 65 28 00       	call   8724c50 <__cxa_throw>
 849e694:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e697:	89 04 24             	mov    %eax,(%esp)
 849e69a:	e8 f5 11 d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849e69f:	89 c3                	mov    %eax,%ebx
 849e6a1:	e8 f5 da c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849e6a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849e6aa:	89 04 24             	mov    %eax,(%esp)
 849e6ad:	e8 40 cf d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 849e6b2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849e6b5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 849e6b9:	75 2c                	jne    849e6e7 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0xdb>
 849e6bb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e6c2:	e8 39 71 28 00       	call   8725800 <__cxa_allocate_exception>
 849e6c7:	89 c2                	mov    %eax,%edx
 849e6c9:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 849e6cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e6d6:	00 
 849e6d7:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e6de:	08 
 849e6df:	89 04 24             	mov    %eax,(%esp)
 849e6e2:	e8 69 65 28 00       	call   8724c50 <__cxa_throw>
 849e6e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849e6ee:	00 
 849e6ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e6f2:	89 04 24             	mov    %eax,(%esp)
 849e6f5:	e8 8a ee c3 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 849e6fa:	89 04 24             	mov    %eax,(%esp)
 849e6fd:	e8 9e 0e 00 00       	call   849f5a0 <_ZNK10expert_job16CCharacExpertJob16get_giveup_countEv>
 849e702:	0f b7 c0             	movzwl %ax,%eax
 849e705:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849e708:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e70b:	05 e8 01 00 00       	add    $0x1e8,%eax
 849e710:	89 04 24             	mov    %eax,(%esp)
 849e713:	e8 a8 fa be ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 849e718:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 849e71b:	0f 96 c0             	setbe  %al
 849e71e:	84 c0                	test   %al,%al
 849e720:	74 2c                	je     849e74e <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x142>
 849e722:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e729:	e8 d2 70 28 00       	call   8725800 <__cxa_allocate_exception>
 849e72e:	89 c2                	mov    %eax,%edx
 849e730:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 849e736:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e73d:	00 
 849e73e:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e745:	08 
 849e746:	89 04 24             	mov    %eax,(%esp)
 849e749:	e8 02 65 28 00       	call   8724c50 <__cxa_throw>
 849e74e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e751:	8d 90 e8 01 00 00    	lea    0x1e8(%eax),%edx
 849e757:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849e75a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e75e:	89 14 24             	mov    %edx,(%esp)
 849e761:	e8 0c 85 bf ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 849e766:	8b 00                	mov    (%eax),%eax
 849e768:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849e76b:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e76e:	89 04 24             	mov    %eax,(%esp)
 849e771:	e8 12 ba cd ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 849e776:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 849e779:	0f 9c c0             	setl   %al
 849e77c:	84 c0                	test   %al,%al
 849e77e:	74 2c                	je     849e7ac <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x1a0>
 849e780:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e787:	e8 74 70 28 00       	call   8725800 <__cxa_allocate_exception>
 849e78c:	89 c2                	mov    %eax,%edx
 849e78e:	c7 02 15 00 00 00    	movl   $0x15,(%edx)
 849e794:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e79b:	00 
 849e79c:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e7a3:	08 
 849e7a4:	89 04 24             	mov    %eax,(%esp)
 849e7a7:	e8 a4 64 28 00       	call   8724c50 <__cxa_throw>
 849e7ac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e7af:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 849e7b5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e7b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e7bc:	89 04 24             	mov    %eax,(%esp)
 849e7bf:	e8 84 fa be ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 849e7c4:	83 ec 04             	sub    $0x4,%esp
 849e7c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e7ca:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 849e7d0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849e7d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e7d7:	89 04 24             	mov    %eax,(%esp)
 849e7da:	e8 8d fa be ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 849e7df:	83 ec 04             	sub    $0x4,%esp
 849e7e2:	eb 62                	jmp    849e846 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x23a>
 849e7e4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e7e7:	89 04 24             	mov    %eax,(%esp)
 849e7ea:	e8 dd ff be ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849e7ef:	8b 18                	mov    (%eax),%ebx
 849e7f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e7f4:	89 04 24             	mov    %eax,(%esp)
 849e7f7:	e8 f0 1c dc ff       	call   82604ec <_ZNK5CUser21getCurCharacQuestRefREv>
 849e7fc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849e800:	89 04 24             	mov    %eax,(%esp)
 849e803:	e8 18 d1 20 00       	call   86ab920 <_ZNK9UserQuest12isClearQuestEi>
 849e808:	83 f0 01             	xor    $0x1,%eax
 849e80b:	84 c0                	test   %al,%al
 849e80d:	74 2c                	je     849e83b <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x22f>
 849e80f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 849e816:	e8 e5 6f 28 00       	call   8725800 <__cxa_allocate_exception>
 849e81b:	89 c2                	mov    %eax,%edx
 849e81d:	c7 02 08 00 00 00    	movl   $0x8,(%edx)
 849e823:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e82a:	00 
 849e82b:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 849e832:	08 
 849e833:	89 04 24             	mov    %eax,(%esp)
 849e836:	e8 15 64 28 00       	call   8724c50 <__cxa_throw>
 849e83b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e83e:	89 04 24             	mov    %eax,(%esp)
 849e841:	e8 46 c1 c4 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 849e846:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849e849:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e84d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e850:	89 04 24             	mov    %eax,(%esp)
 849e853:	e8 0a bc c4 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 849e858:	84 c0                	test   %al,%al
 849e85a:	75 88                	jne    849e7e4 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x1d8>
 849e85c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e85f:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 849e865:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 849e868:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e86c:	89 04 24             	mov    %eax,(%esp)
 849e86f:	e8 d4 f9 be ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 849e874:	83 ec 04             	sub    $0x4,%esp
 849e877:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849e87a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 849e87d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e880:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 849e886:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 849e889:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e88d:	89 04 24             	mov    %eax,(%esp)
 849e890:	e8 d7 f9 be ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 849e895:	83 ec 04             	sub    $0x4,%esp
 849e898:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 849e89b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 849e89e:	eb 2f                	jmp    849e8cf <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x2c3>
 849e8a0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e8a3:	89 04 24             	mov    %eax,(%esp)
 849e8a6:	e8 21 ff be ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 849e8ab:	8b 18                	mov    (%eax),%ebx
 849e8ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e8b0:	89 04 24             	mov    %eax,(%esp)
 849e8b3:	e8 a6 c1 ca ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 849e8b8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849e8bc:	89 04 24             	mov    %eax,(%esp)
 849e8bf:	e8 7a d0 20 00       	call   86ab93e <_ZN9UserQuest15resetClearQuestEi>
 849e8c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e8c7:	89 04 24             	mov    %eax,(%esp)
 849e8ca:	e8 bd c0 c4 ff       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 849e8cf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 849e8d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e8d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849e8d9:	89 04 24             	mov    %eax,(%esp)
 849e8dc:	e8 81 bb c4 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 849e8e1:	84 c0                	test   %al,%al
 849e8e3:	75 bb                	jne    849e8a0 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x294>
 849e8e5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e8e8:	89 04 24             	mov    %eax,(%esp)
 849e8eb:	e8 5c f4 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849e8f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e8f3:	89 04 24             	mov    %eax,(%esp)
 849e8f6:	e8 93 b9 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849e8fb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849e902:	00 
 849e903:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 849e90a:	00 
 849e90b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 849e90e:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e912:	89 04 24             	mov    %eax,(%esp)
 849e915:	e8 32 0c 06 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 849e91a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e91d:	89 04 24             	mov    %eax,(%esp)
 849e920:	e8 c1 cf c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849e925:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 849e92c:	00 
 849e92d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849e934:	00 
 849e935:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e938:	89 04 24             	mov    %eax,(%esp)
 849e93b:	e8 bc cf c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849e940:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849e947:	00 
 849e948:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e94b:	89 04 24             	mov    %eax,(%esp)
 849e94e:	e8 cd cf c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849e953:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e95a:	00 
 849e95b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e95e:	89 04 24             	mov    %eax,(%esp)
 849e961:	e8 3e b5 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849e966:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e969:	89 04 24             	mov    %eax,(%esp)
 849e96c:	e8 0d b9 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849e971:	8d 55 d0             	lea    -0x30(%ebp),%edx
 849e974:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849e978:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e97f:	00 
 849e980:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e987:	00 
 849e988:	89 04 24             	mov    %eax,(%esp)
 849e98b:	e8 2c dd 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 849e990:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e997:	00 
 849e998:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e99b:	89 04 24             	mov    %eax,(%esp)
 849e99e:	e8 b5 cf c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849e9a3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849e9a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e9aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e9ad:	89 04 24             	mov    %eax,(%esp)
 849e9b0:	e8 05 9c 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849e9b5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849e9bc:	e9 92 00 00 00       	jmp    849ea53 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x447>
 849e9c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849e9c4:	8d 50 0c             	lea    0xc(%eax),%edx
 849e9c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849e9ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e9ce:	89 14 24             	mov    %edx,(%esp)
 849e9d1:	e8 ce be c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 849e9d6:	8b 30                	mov    (%eax),%esi
 849e9d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e9db:	89 04 24             	mov    %eax,(%esp)
 849e9de:	e8 3d f5 c5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 849e9e3:	89 c3                	mov    %eax,%ebx
 849e9e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e9e8:	89 04 24             	mov    %eax,(%esp)
 849e9eb:	e8 50 07 d9 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 849e9f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849e9f7:	00 
 849e9f8:	89 74 24 08          	mov    %esi,0x8(%esp)
 849e9fc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ea00:	89 04 24             	mov    %eax,(%esp)
 849ea03:	e8 d0 5d 16 00       	call   86047d8 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND>
 849ea08:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849ea0b:	8d 50 0c             	lea    0xc(%eax),%edx
 849ea0e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849ea11:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ea15:	89 14 24             	mov    %edx,(%esp)
 849ea18:	e8 87 be c4 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 849ea1d:	8b 30                	mov    (%eax),%esi
 849ea1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ea22:	89 04 24             	mov    %eax,(%esp)
 849ea25:	e8 f6 f4 c5 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 849ea2a:	89 c3                	mov    %eax,%ebx
 849ea2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ea2f:	89 04 24             	mov    %eax,(%esp)
 849ea32:	e8 09 07 d9 ff       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 849ea37:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849ea3e:	00 
 849ea3f:	89 74 24 08          	mov    %esi,0x8(%esp)
 849ea43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ea47:	89 04 24             	mov    %eax,(%esp)
 849ea4a:	e8 89 5d 16 00       	call   86047d8 <_ZN9SkillSlot12delete_skillEii20ENUM_SKILL_TREE_KIND>
 849ea4f:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 849ea53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849ea56:	83 c0 0c             	add    $0xc,%eax
 849ea59:	89 04 24             	mov    %eax,(%esp)
 849ea5c:	e8 b3 ed c3 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 849ea61:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 849ea64:	0f 97 c0             	seta   %al
 849ea67:	84 c0                	test   %al,%al
 849ea69:	0f 85 52 ff ff ff    	jne    849e9c1 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x3b5>
 849ea6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ea72:	89 04 24             	mov    %eax,(%esp)
 849ea75:	e8 f0 d9 1c 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 849ea7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ea7d:	89 04 24             	mov    %eax,(%esp)
 849ea80:	e8 0f 0e d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849ea85:	89 c3                	mov    %eax,%ebx
 849ea87:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ea8a:	89 04 24             	mov    %eax,(%esp)
 849ea8d:	e8 26 b8 c3 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 849ea92:	8b 55 e8             	mov    -0x18(%ebp),%edx
 849ea95:	89 54 24 10          	mov    %edx,0x10(%esp)
 849ea99:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 849ea9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 849eaa1:	c7 44 24 04 33 bb c7 	movl   $0x8c7bb33,0x4(%esp)
 849eaa8:	08 
 849eaa9:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eaac:	89 04 24             	mov    %eax,(%esp)
 849eaaf:	e8 4a de 1d 00       	call   867c8fe <_ZN5CUser10LogHistoryEPKcz>
 849eab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eab7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849eabe:	00 
 849eabf:	89 04 24             	mov    %eax,(%esp)
 849eac2:	e8 77 0a 00 00       	call   849f53e <_ZN15CUserCharacInfo25SetCurCharacExpertJobTypeEi>
 849eac7:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eaca:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 849ead1:	ff 
 849ead2:	89 04 24             	mov    %eax,(%esp)
 849ead5:	e8 90 0a 00 00       	call   849f56a <_ZN15CUserCharacInfo24SetCurCharacExpertJobExpEi>
 849eada:	8d 5d d0             	lea    -0x30(%ebp),%ebx
 849eadd:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eae0:	89 04 24             	mov    %eax,(%esp)
 849eae3:	e8 be bd cf ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 849eae8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849eaec:	89 04 24             	mov    %eax,(%esp)
 849eaef:	e8 b4 d0 20 00       	call   86abba8 <_ZNK9UserQuest14get_quest_infoEPc>
 849eaf4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849eaf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 849eafb:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eafe:	89 04 24             	mov    %eax,(%esp)
 849eb01:	e8 b4 9a 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849eb06:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 849eb0a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849eb0d:	05 e8 01 00 00       	add    $0x1e8,%eax
 849eb12:	89 04 24             	mov    %eax,(%esp)
 849eb15:	e8 a6 f6 be ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 849eb1a:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 849eb1d:	0f 96 c0             	setbe  %al
 849eb20:	84 c0                	test   %al,%al
 849eb22:	74 16                	je     849eb3a <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x52e>
 849eb24:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 849eb27:	05 e8 01 00 00       	add    $0x1e8,%eax
 849eb2c:	89 04 24             	mov    %eax,(%esp)
 849eb2f:	e8 8c f6 be ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 849eb34:	83 e8 01             	sub    $0x1,%eax
 849eb37:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849eb3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849eb41:	00 
 849eb42:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eb45:	89 04 24             	mov    %eax,(%esp)
 849eb48:	e8 37 ea c3 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 849eb4d:	89 04 24             	mov    %eax,(%esp)
 849eb50:	e8 67 c3 e8 ff       	call   832aebc <_ZN13charac_expand5CData5resetEv>
 849eb55:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849eb58:	0f b7 d8             	movzwl %ax,%ebx
 849eb5b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849eb62:	00 
 849eb63:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eb66:	89 04 24             	mov    %eax,(%esp)
 849eb69:	e8 16 ea c3 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 849eb6e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849eb72:	89 04 24             	mov    %eax,(%esp)
 849eb75:	e8 32 0a 00 00       	call   849f5ac <_ZN10expert_job16CCharacExpertJob16set_giveup_countEt>
 849eb7a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849eb7d:	89 04 24             	mov    %eax,(%esp)
 849eb80:	e8 61 cd c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849eb85:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849eb8c:	00 
 849eb8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849eb94:	00 
 849eb95:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849eb98:	89 04 24             	mov    %eax,(%esp)
 849eb9b:	e8 5c cd c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849eba0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849eba7:	00 
 849eba8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ebab:	89 04 24             	mov    %eax,(%esp)
 849ebae:	e8 6d cd c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849ebb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ebba:	00 
 849ebbb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ebbe:	89 04 24             	mov    %eax,(%esp)
 849ebc1:	e8 de b2 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849ebc6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ebc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849ebd0:	00 
 849ebd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ebd5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ebd8:	89 04 24             	mov    %eax,(%esp)
 849ebdb:	e8 6e b8 1b 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 849ebe0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ebe7:	00 
 849ebe8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ebeb:	89 04 24             	mov    %eax,(%esp)
 849ebee:	e8 65 cd c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849ebf3:	e8 af b7 c3 ff       	call   80da3a7 <_Z11G_GameWorldv>
 849ebf8:	8b 55 0c             	mov    0xc(%ebp),%edx
 849ebfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 849ebff:	8d 55 d0             	lea    -0x30(%ebp),%edx
 849ec02:	89 54 24 04          	mov    %edx,0x4(%esp)
 849ec06:	89 04 24             	mov    %eax,(%esp)
 849ec09:	e8 4e 5d c9 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 849ec0e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec11:	89 04 24             	mov    %eax,(%esp)
 849ec14:	e8 cd cc c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849ec19:	c7 44 24 08 f3 00 00 	movl   $0xf3,0x8(%esp)
 849ec20:	00 
 849ec21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ec28:	00 
 849ec29:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec2c:	89 04 24             	mov    %eax,(%esp)
 849ec2f:	e8 c8 cc c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849ec34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ec3b:	00 
 849ec3c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec3f:	89 04 24             	mov    %eax,(%esp)
 849ec42:	e8 d9 cc c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849ec47:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ec4a:	89 04 24             	mov    %eax,(%esp)
 849ec4d:	e8 36 b5 cd ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 849ec52:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ec56:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec59:	89 04 24             	mov    %eax,(%esp)
 849ec5c:	e8 db cc c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849ec61:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849ec64:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ec68:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec6b:	89 04 24             	mov    %eax,(%esp)
 849ec6e:	e8 ad cc c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849ec73:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ec7a:	00 
 849ec7b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec7e:	89 04 24             	mov    %eax,(%esp)
 849ec81:	e8 d2 cc c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849ec86:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ec89:	89 44 24 04          	mov    %eax,0x4(%esp)
 849ec8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 849ec90:	89 04 24             	mov    %eax,(%esp)
 849ec93:	e8 22 99 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849ec98:	eb 15                	jmp    849ecaf <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x6a3>
 849ec9a:	89 d3                	mov    %edx,%ebx
 849ec9c:	89 c6                	mov    %eax,%esi
 849ec9e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849eca1:	89 04 24             	mov    %eax,(%esp)
 849eca4:	e8 d7 f1 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849eca9:	89 f0                	mov    %esi,%eax
 849ecab:	89 da                	mov    %ebx,%edx
 849ecad:	eb 0d                	jmp    849ecbc <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x6b0>
 849ecaf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 849ecb2:	89 04 24             	mov    %eax,(%esp)
 849ecb5:	e8 c6 f1 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849ecba:	eb 53                	jmp    849ed0f <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x703>
 849ecbc:	83 fa 01             	cmp    $0x1,%edx
 849ecbf:	74 08                	je     849ecc9 <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x6bd>
 849ecc1:	89 04 24             	mov    %eax,(%esp)
 849ecc4:	e8 87 4a 64 00       	call   8ae3750 <_Unwind_Resume>
 849ecc9:	89 04 24             	mov    %eax,(%esp)
 849eccc:	e8 0f 70 28 00       	call   8725ce0 <__cxa_begin_catch>
 849ecd1:	8b 00                	mov    (%eax),%eax
 849ecd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849ecd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849ecd9:	0f b6 c0             	movzbl %al,%eax
 849ecdc:	89 44 24 08          	mov    %eax,0x8(%esp)
 849ece0:	c7 44 24 04 f3 00 00 	movl   $0xf3,0x4(%esp)
 849ece7:	00 
 849ece8:	8b 45 0c             	mov    0xc(%ebp),%eax
 849eceb:	89 04 24             	mov    %eax,(%esp)
 849ecee:	e8 4f d2 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 849ecf3:	eb 15                	jmp    849ed0a <_ZN10expert_job13CExpertJobMgr8OnGiveupEP5CUser+0x6fe>
 849ecf5:	89 d3                	mov    %edx,%ebx
 849ecf7:	89 c6                	mov    %eax,%esi
 849ecf9:	e8 32 6f 28 00       	call   8725c30 <__cxa_end_catch>
 849ecfe:	89 f0                	mov    %esi,%eax
 849ed00:	89 da                	mov    %ebx,%edx
 849ed02:	89 04 24             	mov    %eax,(%esp)
 849ed05:	e8 46 4a 64 00       	call   8ae3750 <_Unwind_Resume>
 849ed0a:	e8 21 6f 28 00       	call   8725c30 <__cxa_end_catch>
 849ed0f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 849ed12:	83 c4 00             	add    $0x0,%esp
 849ed15:	5b                   	pop    %ebx
 849ed16:	5e                   	pop    %esi
 849ed17:	5d                   	pop    %ebp
 849ed18:	c3                   	ret
 849ed19:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::OnGiveup @ 0x849e60c

/* expert_job::CExpertJobMgr::OnGiveup(CUser*) */

void __thiscall expert_job::CExpertJobMgr::OnGiveup(CExpertJobMgr *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  CCharacExpertJob *pCVar6;
  uint uVar7;
  int *piVar8;
  CInventory *pCVar9;
  SkillSlot *pSVar10;
  undefined4 uVar11;
  UserQuest *pUVar12;
  CData *this_00;
  GameWorld *this_01;
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 3;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0849e64f to 0849e8ef has its CatchHandler @ 0849ecbc */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  iVar3 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  iVar3 = G_CDataManager();
  local_20 = CDataManager::GetExpertJobScript(iVar3);
  if (local_20 == 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4,uVar5);
    *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  pCVar6 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
  local_1c = CCharacExpertJob::get_giveup_count(pCVar6);
  local_1c = local_1c & 0xffff;
  uVar7 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
  if (uVar7 <= local_1c) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  piVar8 = (int *)std::vector<int,std::allocator<int>>::at
                            ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8),local_1c);
  local_18 = *piVar8;
  iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
  if (iVar3 < local_18) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 0x15;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar2 = __gnu_cxx::operator!=(local_24,local_28);
    if (!bVar2) {
      std::vector<int,std::allocator<int>>::begin();
      std::vector<int,std::allocator<int>>::end();
      while( true ) {
        bVar2 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar2) break;
        piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        iVar3 = *piVar8;
        pUVar12 = (UserQuest *)CUser::getCurCharacQuestW(param_1);
        UserQuest::resetClearQuest(pUVar12,iVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
      }
      PacketGuard::PacketGuard(local_34);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 0849e915 to 0849ec97 has its CatchHandler @ 0849ec9a */
      CInventory::use_money(pCVar9,local_18,0x1e,1);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar9,1,0,local_34);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
      local_14 = 0;
      while( true ) {
        uVar7 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                           (local_20 + 0xc));
        if (uVar7 <= local_14) break;
        puVar4 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_20 + 0xc),local_14);
        uVar5 = *puVar4;
        uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::delete_skill(pSVar10,uVar11,uVar5,0);
        puVar4 = (undefined4 *)
                 std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                           ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                            (local_20 + 0xc),local_14);
        uVar5 = *puVar4;
        uVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::delete_skill(pSVar10,uVar11,uVar5,1);
        local_14 = local_14 + 1;
      }
      CUser::send_skill_info(param_1);
      uVar5 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
      uVar11 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      CUser::LogHistory(param_1,"ExpertJob-,%d,%d,%d",uVar11,uVar5,local_1c);
      CUserCharacInfo::SetCurCharacExpertJobType((CUserCharacInfo *)param_1,0);
      CUserCharacInfo::SetCurCharacExpertJobExp((CUserCharacInfo *)param_1,-1);
      pUVar12 = (UserQuest *)CUser::getCurCharacQuestR(param_1);
      UserQuest::get_quest_info(pUVar12,(char *)local_34);
      CUser::Send(param_1,local_34);
      local_1c = local_1c + 1;
      uVar7 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
      if (uVar7 <= local_1c) {
        iVar3 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(local_20 + 0x1e8));
        local_1c = iVar3 - 1;
      }
      this_00 = (CData *)CUser::GetCharacExpandData(param_1,0);
      charac_expand::CData::reset(this_00);
      uVar7 = local_1c;
      pCVar6 = (CCharacExpertJob *)CUser::GetCharacExpandData(param_1,0);
      CCharacExpertJob::set_giveup_count(pCVar6,(ushort)uVar7);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,1);
      CUser::make_basic_info(param_1,(char *)local_34,'\0');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      this_01 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_01,local_34,param_1);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      iVar3 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_1c);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send(param_1,local_34);
                    /* try { // try from 0849ecb5 to 0849ecb9 has its CatchHandler @ 0849ecbc */
      PacketGuard::~PacketGuard(local_34);
      return;
    }
    piVar8 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_24);
    iVar3 = *piVar8;
    pUVar12 = (UserQuest *)CUser::getCurCharacQuestRefR(param_1);
    cVar1 = UserQuest::isClearQuest(pUVar12,iVar3);
    if (cVar1 != '\x01') break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_24);
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 8;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}

```

---

## OnLeaveUser

```asm
// === 0849e214 expert_job::CExpertJobMgr::OnLeaveUser  [0x0849e214-0x849e255] ===
 849e214:	55                   	push   %ebp
 849e215:	89 e5                	mov    %esp,%ebp
 849e217:	83 ec 18             	sub    $0x18,%esp
 849e21a:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e21d:	89 04 24             	mov    %eax,(%esp)
 849e220:	e8 af 16 d9 ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 849e225:	85 c0                	test   %eax,%eax
 849e227:	0f 95 c0             	setne  %al
 849e22a:	84 c0                	test   %al,%al
 849e22c:	74 26                	je     849e254 <_ZN10expert_job13CExpertJobMgr11OnLeaveUserEP5CUser+0x40>
 849e22e:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e231:	89 04 24             	mov    %eax,(%esp)
 849e234:	e8 9b 16 d9 ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 849e239:	8b 10                	mov    (%eax),%edx
 849e23b:	83 c2 04             	add    $0x4,%edx
 849e23e:	8b 0a                	mov    (%edx),%ecx
 849e240:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 849e247:	00 
 849e248:	8b 55 0c             	mov    0xc(%ebp),%edx
 849e24b:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e24f:	89 04 24             	mov    %eax,(%esp)
 849e252:	ff d1                	call   *%ecx
 849e254:	c9                   	leave
 849e255:	c3                   	ret

```

```c
// expert_job::CExpertJobMgr::OnLeaveUser @ 0x849e214

/* expert_job::CExpertJobMgr::OnLeaveUser(CUser*) */

void __thiscall expert_job::CExpertJobMgr::OnLeaveUser(CExpertJobMgr *this,CUser *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
  if (iVar1 != 0) {
    piVar2 = (int *)CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_1);
    (**(code **)(*piVar2 + 4))(piVar2,param_1,1);
  }
  return;
}

```

---

## OnRequestPeer

```asm
// === 0849e256 expert_job::CExpertJobMgr::OnRequestPeer  [0x0849e256-0x849e361] ===
 849e256:	55                   	push   %ebp
 849e257:	89 e5                	mov    %esp,%ebp
 849e259:	83 ec 38             	sub    $0x38,%esp
 849e25c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849e263:	8b 45 18             	mov    0x18(%ebp),%eax
 849e266:	89 44 24 10          	mov    %eax,0x10(%esp)
 849e26a:	8b 45 14             	mov    0x14(%ebp),%eax
 849e26d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849e271:	8b 45 10             	mov    0x10(%ebp),%eax
 849e274:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e278:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e27b:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e27f:	8b 45 08             	mov    0x8(%ebp),%eax
 849e282:	89 04 24             	mov    %eax,(%esp)
 849e285:	e8 d4 02 00 00       	call   849e55e <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 849e28a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849e28d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849e291:	0f 95 c0             	setne  %al
 849e294:	84 c0                	test   %al,%al
 849e296:	74 30                	je     849e2c8 <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x72>
 849e298:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e29b:	0f b6 c0             	movzbl %al,%eax
 849e29e:	8b 55 18             	mov    0x18(%ebp),%edx
 849e2a1:	89 54 24 10          	mov    %edx,0x10(%esp)
 849e2a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849e2a9:	8b 45 14             	mov    0x14(%ebp),%eax
 849e2ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e2b0:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 849e2b7:	00 
 849e2b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e2bb:	89 04 24             	mov    %eax,(%esp)
 849e2be:	e8 c1 da 1d 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 849e2c3:	e9 97 00 00 00       	jmp    849e35f <_ZN10expert_job13CExpertJobMgr13OnRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x109>
 849e2c8:	8b 45 18             	mov    0x18(%ebp),%eax
 849e2cb:	89 04 24             	mov    %eax,(%esp)
 849e2ce:	e8 13 d6 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849e2d3:	8b 45 18             	mov    0x18(%ebp),%eax
 849e2d6:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 849e2dd:	00 
 849e2de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849e2e5:	00 
 849e2e6:	89 04 24             	mov    %eax,(%esp)
 849e2e9:	e8 0e d6 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849e2ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e2f1:	89 04 24             	mov    %eax,(%esp)
 849e2f4:	e8 83 c0 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849e2f9:	0f b7 d0             	movzwl %ax,%edx
 849e2fc:	8b 45 18             	mov    0x18(%ebp),%eax
 849e2ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e303:	89 04 24             	mov    %eax,(%esp)
 849e306:	e8 99 bb c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849e30b:	8b 55 14             	mov    0x14(%ebp),%edx
 849e30e:	8b 45 18             	mov    0x18(%ebp),%eax
 849e311:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e315:	89 04 24             	mov    %eax,(%esp)
 849e318:	e8 03 d6 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849e31d:	8b 45 10             	mov    0x10(%ebp),%eax
 849e320:	89 04 24             	mov    %eax,(%esp)
 849e323:	e8 54 c0 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849e328:	0f b7 d0             	movzwl %ax,%edx
 849e32b:	8b 45 18             	mov    0x18(%ebp),%eax
 849e32e:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e332:	89 04 24             	mov    %eax,(%esp)
 849e335:	e8 02 d6 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849e33a:	8b 45 18             	mov    0x18(%ebp),%eax
 849e33d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e344:	00 
 849e345:	89 04 24             	mov    %eax,(%esp)
 849e348:	e8 0b d6 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849e34d:	8b 45 18             	mov    0x18(%ebp),%eax
 849e350:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e354:	8b 45 10             	mov    0x10(%ebp),%eax
 849e357:	89 04 24             	mov    %eax,(%esp)
 849e35a:	e8 5b a2 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849e35f:	c9                   	leave
 849e360:	c3                   	ret
 849e361:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::OnRequestPeer @ 0x849e256

/* expert_job::CExpertJobMgr::OnRequestPeer(CUser*, CUser*, ENUM_PEER_REQUEST_TYPE, PacketGuard&) */

void __thiscall
expert_job::CExpertJobMgr::OnRequestPeer
          (CExpertJobMgr *this,CUser *param_1,CUser *param_2,int param_4,InterfacePacketBuf *param_5
          )

{
  uint uVar1;
  
  uVar1 = IsAvailableRequestPeer(this,param_1,param_2,param_4,param_5);
  if (uVar1 == 0) {
    InterfacePacketBuf::clear(param_5);
    InterfacePacketBuf::put_header(param_5,0,7);
    uVar1 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short(param_5,uVar1 & 0xffff);
    InterfacePacketBuf::put_byte(param_5,param_4);
    uVar1 = CUser::get_unique_id(param_2);
    InterfacePacketBuf::put_int(param_5,uVar1 & 0xffff);
    InterfacePacketBuf::finalize(param_5,true);
    CUser::Send(param_2,(PacketGuard *)param_5);
  }
  else {
    CUser::SendCmdPeerErrorPacket(param_1,10,param_4,uVar1 & 0xff,param_5);
  }
  return;
}

```

---

## OnResponsePeer

```asm
// === 0849e362 expert_job::CExpertJobMgr::OnResponsePeer  [0x0849e362-0x849e55d] ===
 849e362:	55                   	push   %ebp
 849e363:	89 e5                	mov    %esp,%ebp
 849e365:	83 ec 38             	sub    $0x38,%esp
 849e368:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849e36f:	8b 45 24             	mov    0x24(%ebp),%eax
 849e372:	89 44 24 10          	mov    %eax,0x10(%esp)
 849e376:	8b 45 20             	mov    0x20(%ebp),%eax
 849e379:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849e37d:	8b 45 10             	mov    0x10(%ebp),%eax
 849e380:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e384:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e387:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e38b:	8b 45 08             	mov    0x8(%ebp),%eax
 849e38e:	89 04 24             	mov    %eax,(%esp)
 849e391:	e8 c8 01 00 00       	call   849e55e <_ZN10expert_job13CExpertJobMgr22IsAvailableRequestPeerEP5CUserS2_22ENUM_PEER_REQUEST_TYPER11PacketGuard>
 849e396:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849e399:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849e39d:	0f 95 c0             	setne  %al
 849e3a0:	84 c0                	test   %al,%al
 849e3a2:	74 30                	je     849e3d4 <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x72>
 849e3a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849e3a7:	0f b6 c0             	movzbl %al,%eax
 849e3aa:	8b 55 24             	mov    0x24(%ebp),%edx
 849e3ad:	89 54 24 10          	mov    %edx,0x10(%esp)
 849e3b1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849e3b5:	8b 45 20             	mov    0x20(%ebp),%eax
 849e3b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e3bc:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 849e3c3:	00 
 849e3c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e3c7:	89 04 24             	mov    %eax,(%esp)
 849e3ca:	e8 b5 d9 1d 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 849e3cf:	e9 87 01 00 00       	jmp    849e55b <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x1f9>
 849e3d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e3db:	00 
 849e3dc:	8b 45 08             	mov    0x8(%ebp),%eax
 849e3df:	89 04 24             	mov    %eax,(%esp)
 849e3e2:	e8 f5 fd ff ff       	call   849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>
 849e3e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849e3ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849e3ee:	75 2e                	jne    849e41e <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard+0xbc>
 849e3f0:	8b 45 24             	mov    0x24(%ebp),%eax
 849e3f3:	89 44 24 10          	mov    %eax,0x10(%esp)
 849e3f7:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 849e3fe:	00 
 849e3ff:	8b 45 20             	mov    0x20(%ebp),%eax
 849e402:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e406:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 849e40d:	00 
 849e40e:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e411:	89 04 24             	mov    %eax,(%esp)
 849e414:	e8 6b d9 1d 00       	call   867bd84 <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEhR11PacketGuard>
 849e419:	e9 3d 01 00 00       	jmp    849e55b <_ZN10expert_job13CExpertJobMgr14OnResponsePeerEP5CUserS2_S2_S2_i22ENUM_PEER_REQUEST_TYPER11PacketGuard+0x1f9>
 849e41e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e421:	8b 00                	mov    (%eax),%eax
 849e423:	8b 10                	mov    (%eax),%edx
 849e425:	8b 45 18             	mov    0x18(%ebp),%eax
 849e428:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e42c:	8b 45 14             	mov    0x14(%ebp),%eax
 849e42f:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e433:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e436:	89 04 24             	mov    %eax,(%esp)
 849e439:	ff d2                	call   *%edx
 849e43b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e43e:	8b 55 20             	mov    0x20(%ebp),%edx
 849e441:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e445:	89 04 24             	mov    %eax,(%esp)
 849e448:	e8 c9 0e 00 00       	call   849f316 <_ZN10expert_job10CEnchanter18SetPeerRequestTypeE22ENUM_PEER_REQUEST_TYPE>
 849e44d:	8b 45 24             	mov    0x24(%ebp),%eax
 849e450:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 849e457:	00 
 849e458:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849e45f:	00 
 849e460:	89 04 24             	mov    %eax,(%esp)
 849e463:	e8 94 d4 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849e468:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e46b:	89 04 24             	mov    %eax,(%esp)
 849e46e:	e8 09 bf c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849e473:	0f b7 d0             	movzwl %ax,%edx
 849e476:	8b 45 24             	mov    0x24(%ebp),%eax
 849e479:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e47d:	89 04 24             	mov    %eax,(%esp)
 849e480:	e8 1f ba c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849e485:	8b 55 20             	mov    0x20(%ebp),%edx
 849e488:	8b 45 24             	mov    0x24(%ebp),%eax
 849e48b:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e48f:	89 04 24             	mov    %eax,(%esp)
 849e492:	e8 89 d4 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849e497:	8b 45 24             	mov    0x24(%ebp),%eax
 849e49a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 849e49d:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e4a1:	89 04 24             	mov    %eax,(%esp)
 849e4a4:	e8 93 d4 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849e4a9:	8b 45 24             	mov    0x24(%ebp),%eax
 849e4ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e4b3:	00 
 849e4b4:	89 04 24             	mov    %eax,(%esp)
 849e4b7:	e8 9c d4 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849e4bc:	8b 45 24             	mov    0x24(%ebp),%eax
 849e4bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e4c3:	8b 45 10             	mov    0x10(%ebp),%eax
 849e4c6:	89 04 24             	mov    %eax,(%esp)
 849e4c9:	e8 ec a0 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849e4ce:	8b 45 24             	mov    0x24(%ebp),%eax
 849e4d1:	89 04 24             	mov    %eax,(%esp)
 849e4d4:	e8 0d d4 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849e4d9:	8b 45 24             	mov    0x24(%ebp),%eax
 849e4dc:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 849e4e3:	00 
 849e4e4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e4eb:	00 
 849e4ec:	89 04 24             	mov    %eax,(%esp)
 849e4ef:	e8 08 d4 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849e4f4:	8b 45 24             	mov    0x24(%ebp),%eax
 849e4f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e4fe:	00 
 849e4ff:	89 04 24             	mov    %eax,(%esp)
 849e502:	e8 19 d4 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849e507:	8b 45 10             	mov    0x10(%ebp),%eax
 849e50a:	89 04 24             	mov    %eax,(%esp)
 849e50d:	e8 6a be c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849e512:	0f b7 d0             	movzwl %ax,%edx
 849e515:	8b 45 24             	mov    0x24(%ebp),%eax
 849e518:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e51c:	89 04 24             	mov    %eax,(%esp)
 849e51f:	e8 80 b9 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849e524:	8b 55 20             	mov    0x20(%ebp),%edx
 849e527:	8b 45 24             	mov    0x24(%ebp),%eax
 849e52a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849e52e:	89 04 24             	mov    %eax,(%esp)
 849e531:	e8 ea d3 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849e536:	8b 45 24             	mov    0x24(%ebp),%eax
 849e539:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849e540:	00 
 849e541:	89 04 24             	mov    %eax,(%esp)
 849e544:	e8 0f d4 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849e549:	8b 45 24             	mov    0x24(%ebp),%eax
 849e54c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e550:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e553:	89 04 24             	mov    %eax,(%esp)
 849e556:	e8 5f a0 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849e55b:	c9                   	leave
 849e55c:	c3                   	ret
 849e55d:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::OnResponsePeer @ 0x849e362

/* expert_job::CExpertJobMgr::OnResponsePeer(CUser*, CUser*, CUser*, CUser*, int,
   ENUM_PEER_REQUEST_TYPE, PacketGuard&) */

void __thiscall
expert_job::CExpertJobMgr::OnResponsePeer
          (CExpertJobMgr *this,CUser *param_1,CUser *param_2,undefined4 param_3,undefined4 param_4,
          int param_5,int param_7,InterfacePacketBuf *param_8)

{
  uint uVar1;
  CEnchanter *pCVar2;
  
  uVar1 = IsAvailableRequestPeer(this,param_1,param_2,param_7,param_8);
  if (uVar1 == 0) {
    pCVar2 = (CEnchanter *)AcquireExpertJob(this,1);
    if (pCVar2 == (CEnchanter *)0x0) {
      CUser::SendCmdPeerErrorPacket(param_1,0xb,param_7,0x16,param_8);
    }
    else {
      (*(code *)**(undefined4 **)pCVar2)(pCVar2,param_3,param_4);
      CEnchanter::SetPeerRequestType(pCVar2,param_7);
      InterfacePacketBuf::put_header(param_8,0,8);
      uVar1 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short(param_8,uVar1 & 0xffff);
      InterfacePacketBuf::put_byte(param_8,param_7);
      InterfacePacketBuf::put_int(param_8,param_5);
      InterfacePacketBuf::finalize(param_8,true);
      CUser::Send(param_2,(PacketGuard *)param_8);
      InterfacePacketBuf::clear(param_8);
      InterfacePacketBuf::put_header(param_8,1,0xb);
      InterfacePacketBuf::put_byte(param_8,1);
      uVar1 = CUser::get_unique_id(param_2);
      InterfacePacketBuf::put_short(param_8,uVar1 & 0xffff);
      InterfacePacketBuf::put_byte(param_8,param_7);
      InterfacePacketBuf::finalize(param_8,true);
      CUser::Send(param_1,(PacketGuard *)param_8);
    }
  }
  else {
    CUser::SendCmdPeerErrorPacket(param_1,0xb,param_7,uVar1 & 0xff,param_8);
  }
  return;
}

```

---

## ~CExpertJobMgr

```asm
// === 0849e1ac expert_job::CExpertJobMgr::~CExpertJobMgr  [0x0849e1ac-0x849e1db] ===
 849e1ac:	55                   	push   %ebp
 849e1ad:	89 e5                	mov    %esp,%ebp
 849e1af:	53                   	push   %ebx
 849e1b0:	83 ec 14             	sub    $0x14,%esp
 849e1b3:	8b 45 08             	mov    0x8(%ebp),%eax
 849e1b6:	8b 00                	mov    (%eax),%eax
 849e1b8:	85 c0                	test   %eax,%eax
 849e1ba:	74 19                	je     849e1d5 <_ZN10expert_job13CExpertJobMgrD1Ev+0x29>
 849e1bc:	8b 45 08             	mov    0x8(%ebp),%eax
 849e1bf:	8b 18                	mov    (%eax),%ebx
 849e1c1:	85 db                	test   %ebx,%ebx
 849e1c3:	74 10                	je     849e1d5 <_ZN10expert_job13CExpertJobMgrD1Ev+0x29>
 849e1c5:	89 1c 24             	mov    %ebx,(%esp)
 849e1c8:	e8 05 15 00 00       	call   849f6d2 <_ZN10expert_job17CExpertJobFactoryD1Ev>
 849e1cd:	89 1c 24             	mov    %ebx,(%esp)
 849e1d0:	e8 1b 63 28 00       	call   87244f0 <_ZdlPv>
 849e1d5:	83 c4 14             	add    $0x14,%esp
 849e1d8:	5b                   	pop    %ebx
 849e1d9:	5d                   	pop    %ebp
 849e1da:	c3                   	ret
 849e1db:	90                   	nop

```

```c
// expert_job::CExpertJobMgr::~CExpertJobMgr @ 0x849e1ac

/* expert_job::CExpertJobMgr::~CExpertJobMgr() */

void __thiscall expert_job::CExpertJobMgr::~CExpertJobMgr(CExpertJobMgr *this)

{
  CExpertJobFactory *this_00;
  
  if ((*(int *)this != 0) &&
     (this_00 = *(CExpertJobFactory **)this, this_00 != (CExpertJobFactory *)0x0)) {
    CExpertJobFactory::~CExpertJobFactory(this_00);
    operator_delete(this_00);
  }
  return;
}

```


# Dispatcher_EnterPrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082025ae Dispatcher_EnterPrivateStore::dispatch_sig  [0x082025ae-0x820269b] ===
 82025ae:	55                   	push   %ebp
 82025af:	89 e5                	mov    %esp,%ebp
 82025b1:	53                   	push   %ebx
 82025b2:	83 ec 24             	sub    $0x24,%esp
 82025b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82025b8:	89 04 24             	mov    %eax,(%esp)
 82025bb:	e8 cc 7d ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82025c0:	83 f8 03             	cmp    $0x3,%eax
 82025c3:	75 0f                	jne    82025d4 <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x26>
 82025c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82025c8:	89 04 24             	mov    %eax,(%esp)
 82025cb:	e8 62 de f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82025d0:	85 c0                	test   %eax,%eax
 82025d2:	75 07                	jne    82025db <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 82025d4:	b8 01 00 00 00       	mov    $0x1,%eax
 82025d9:	eb 05                	jmp    82025e0 <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82025db:	b8 00 00 00 00       	mov    $0x0,%eax
 82025e0:	84 c0                	test   %al,%al
 82025e2:	74 29                	je     820260d <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 82025e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82025eb:	00 
 82025ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82025f3:	00 
 82025f4:	c7 44 24 04 c0 f3 bc 	movl   $0x8bcf3c0,0x4(%esp)
 82025fb:	08 
 82025fc:	c7 04 24 d4 98 00 00 	movl   $0x98d4,(%esp)
 8202603:	e8 cf e2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202608:	e9 89 00 00 00       	jmp    8202696 <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 820260d:	66 c7 45 f6 00 00    	movw   $0x0,-0xa(%ebp)
 8202613:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 820261a:	8d 45 f6             	lea    -0xa(%ebp),%eax
 820261d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8202621:	8b 45 10             	mov    0x10(%ebp),%eax
 8202624:	89 04 24             	mov    %eax,(%esp)
 8202627:	e8 94 a9 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 820262c:	83 f0 01             	xor    $0x1,%eax
 820262f:	84 c0                	test   %al,%al
 8202631:	74 26                	je     8202659 <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xab>
 8202633:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820263a:	00 
 820263b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202642:	00 
 8202643:	c7 44 24 04 c0 f3 bc 	movl   $0x8bcf3c0,0x4(%esp)
 820264a:	08 
 820264b:	c7 04 24 d8 98 00 00 	movl   $0x98d8,(%esp)
 8202652:	e8 80 e2 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202657:	eb 3d                	jmp    8202696 <_ZN28Dispatcher_EnterPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0xe8>
 8202659:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 820265d:	0f b7 d8             	movzwl %ax,%ebx
 8202660:	e8 83 25 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202665:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8202669:	8b 55 0c             	mov    0xc(%ebp),%edx
 820266c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8202670:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8202673:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202677:	89 04 24             	mov    %eax,(%esp)
 820267a:	e8 e1 80 3c 00       	call   85ca760 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUsert>
 820267f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8202682:	8b 00                	mov    (%eax),%eax
 8202684:	83 c0 08             	add    $0x8,%eax
 8202687:	8b 10                	mov    (%eax),%edx
 8202689:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820268c:	89 04 24             	mov    %eax,(%esp)
 820268f:	ff d2                	call   *%edx
 8202691:	b8 00 00 00 00       	mov    $0x0,%eax
 8202696:	83 c4 24             	add    $0x24,%esp
 8202699:	5b                   	pop    %ebx
 820269a:	5d                   	pop    %ebp
 820269b:	c3                   	ret

```

```c
// Dispatcher_EnterPrivateStore::dispatch_sig @ 0x82025ae

/* Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_EnterPrivateStore::dispatch_sig
          (Dispatcher_EnterPrivateStore *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CPrivateStoreMgr *this_00;
  IBuyer *local_14;
  ushort local_e [3];
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 3) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_082025e0;
    }
  }
  bVar1 = true;
LAB_082025e0:
  if (bVar1) {
    uVar5 = LineFunc(0x98d4,
                     "virtual int Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_e[0] = 0;
    local_14 = (IBuyer *)0x0;
    cVar3 = PacketBuf::get_short(param_2,(short *)local_e);
    uVar2 = local_e[0];
    if (cVar3 == '\x01') {
      this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
      private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_14,param_1,uVar2);
      (**(code **)(*(int *)local_14 + 8))(local_14);
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0x98d8,
                       "virtual int Dispatcher_EnterPrivateStore::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar5;
}

```


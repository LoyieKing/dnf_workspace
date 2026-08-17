# Dispatcher_ResponseCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082037fa Dispatcher_ResponseCreature::dispatch_sig  [0x082037fa-0x8203877] ===
 82037fa:	55                   	push   %ebp
 82037fb:	89 e5                	mov    %esp,%ebp
 82037fd:	83 ec 18             	sub    $0x18,%esp
 8203800:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203803:	89 04 24             	mov    %eax,(%esp)
 8203806:	e8 81 6b ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820380b:	83 f8 03             	cmp    $0x3,%eax
 820380e:	75 0f                	jne    820381f <_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf+0x25>
 8203810:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203813:	89 04 24             	mov    %eax,(%esp)
 8203816:	e8 17 cc f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820381b:	85 c0                	test   %eax,%eax
 820381d:	75 07                	jne    8203826 <_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 820381f:	b8 01 00 00 00       	mov    $0x1,%eax
 8203824:	eb 05                	jmp    820382b <_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf+0x31>
 8203826:	b8 00 00 00 00       	mov    $0x0,%eax
 820382b:	84 c0                	test   %al,%al
 820382d:	74 26                	je     8203855 <_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 820382f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8203836:	00 
 8203837:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820383e:	00 
 820383f:	c7 44 24 04 80 f1 bc 	movl   $0x8bcf180,0x4(%esp)
 8203846:	08 
 8203847:	c7 04 24 cf 9a 00 00 	movl   $0x9acf,(%esp)
 820384e:	e8 84 d0 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8203853:	eb 20                	jmp    8203875 <_ZN27Dispatcher_ResponseCreature12dispatch_sigEP5CUserR9PacketBuf+0x7b>
 8203855:	8b 45 0c             	mov    0xc(%ebp),%eax
 8203858:	89 04 24             	mov    %eax,(%esp)
 820385b:	e8 2e 6a ed ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8203860:	89 04 24             	mov    %eax,(%esp)
 8203863:	e8 00 9d ed ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8203868:	89 04 24             	mov    %eax,(%esp)
 820386b:	e8 68 6e 13 00       	call   833a6d8 <_ZN13user_creature12CCreatureMgr16ResponseCreatureEv>
 8203870:	b8 00 00 00 00       	mov    $0x0,%eax
 8203875:	c9                   	leave
 8203876:	c3                   	ret
 8203877:	90                   	nop

```

```c
// Dispatcher_ResponseCreature::dispatch_sig @ 0x82037fa

/* Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ResponseCreature::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this;
  CCreatureMgr *this_00;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0820382b;
    }
  }
  bVar1 = true;
LAB_0820382b:
  if (bVar1) {
    uVar3 = LineFunc(0x9acf,
                     "virtual int Dispatcher_ResponseCreature::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this);
    user_creature::CCreatureMgr::ResponseCreature(this_00);
    uVar3 = 0;
  }
  return uVar3;
}

```


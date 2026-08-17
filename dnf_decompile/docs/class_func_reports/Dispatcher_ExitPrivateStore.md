# Dispatcher_ExitPrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820269c Dispatcher_ExitPrivateStore::dispatch_sig  [0x0820269c-0x820271b] ===
 820269c:	55                   	push   %ebp
 820269d:	89 e5                	mov    %esp,%ebp
 820269f:	83 ec 28             	sub    $0x28,%esp
 82026a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82026a5:	89 04 24             	mov    %eax,(%esp)
 82026a8:	e8 df 7c ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82026ad:	83 f8 02             	cmp    $0x2,%eax
 82026b0:	7e 0f                	jle    82026c1 <_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x25>
 82026b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82026b5:	89 04 24             	mov    %eax,(%esp)
 82026b8:	e8 75 dd f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82026bd:	85 c0                	test   %eax,%eax
 82026bf:	75 07                	jne    82026c8 <_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 82026c1:	b8 01 00 00 00       	mov    $0x1,%eax
 82026c6:	eb 05                	jmp    82026cd <_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x31>
 82026c8:	b8 00 00 00 00       	mov    $0x0,%eax
 82026cd:	84 c0                	test   %al,%al
 82026cf:	74 07                	je     82026d8 <_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x3c>
 82026d1:	b8 00 00 00 00       	mov    $0x0,%eax
 82026d6:	eb 41                	jmp    8202719 <_ZN27Dispatcher_ExitPrivateStore12dispatch_sigEP5CUserR9PacketBuf+0x7d>
 82026d8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82026df:	e8 04 25 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 82026e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82026eb:	00 
 82026ec:	8b 55 0c             	mov    0xc(%ebp),%edx
 82026ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 82026f3:	8d 55 f4             	lea    -0xc(%ebp),%edx
 82026f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82026fa:	89 04 24             	mov    %eax,(%esp)
 82026fd:	e8 b6 80 3c 00       	call   85ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>
 8202702:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8202705:	8b 00                	mov    (%eax),%eax
 8202707:	83 c0 0c             	add    $0xc,%eax
 820270a:	8b 10                	mov    (%eax),%edx
 820270c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820270f:	89 04 24             	mov    %eax,(%esp)
 8202712:	ff d2                	call   *%edx
 8202714:	b8 00 00 00 00       	mov    $0x0,%eax
 8202719:	c9                   	leave
 820271a:	c3                   	ret
 820271b:	90                   	nop

```

```c
// Dispatcher_ExitPrivateStore::dispatch_sig @ 0x820269c

/* Dispatcher_ExitPrivateStore::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_ExitPrivateStore::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  CPrivateStoreMgr *this;
  IBuyer *local_10 [3];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((iVar2 < 3) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    local_10[0] = (IBuyer *)0x0;
    this = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
    private_store::CPrivateStoreMgr::GetStoreBuyer(this,local_10,(CUser *)param_2,(CUser *)0x0);
    (**(code **)(*(int *)local_10[0] + 0xc))(local_10[0]);
  }
  return 0;
}

```


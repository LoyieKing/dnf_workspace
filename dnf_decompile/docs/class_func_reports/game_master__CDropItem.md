# game_master__CDropItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084aca8c game_master::CDropItem::execute  [0x084aca8c-0x84acbe3] ===
 84aca8c:	55                   	push   %ebp
 84aca8d:	89 e5                	mov    %esp,%ebp
 84aca8f:	56                   	push   %esi
 84aca90:	53                   	push   %ebx
 84aca91:	83 ec 20             	sub    $0x20,%esp
 84aca94:	c7 04 24 32 00 00 00 	movl   $0x32,(%esp)
 84aca9b:	e8 fa bf ff ff       	call   84a8a9a <_ZN11game_master14CGameMasterMgr13GetDispatcherEi>
 84acaa0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84acaa3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84acaa7:	0f 84 2f 01 00 00    	je     84acbdc <_ZN11game_master9CDropItem7executeEv+0x150>
 84acaad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acab0:	89 04 24             	mov    %eax,(%esp)
 84acab3:	e8 94 12 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84acab8:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 84acabf:	00 
 84acac0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84acac7:	00 
 84acac8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acacb:	89 04 24             	mov    %eax,(%esp)
 84acace:	e8 29 ee c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84acad3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84acada:	00 
 84acadb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acade:	89 04 24             	mov    %eax,(%esp)
 84acae1:	e8 be d3 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84acae6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84acaed:	00 
 84acaee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acaf1:	89 04 24             	mov    %eax,(%esp)
 84acaf4:	e8 ab d3 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84acaf9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acb00:	00 
 84acb01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb04:	89 04 24             	mov    %eax,(%esp)
 84acb07:	e8 14 ee c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84acb0c:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 84acb13:	00 
 84acb14:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb17:	89 04 24             	mov    %eax,(%esp)
 84acb1a:	e8 85 d3 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84acb1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84acb26:	00 
 84acb27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb2a:	89 04 24             	mov    %eax,(%esp)
 84acb2d:	e8 0a ee c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84acb32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acb39:	00 
 84acb3a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb3d:	89 04 24             	mov    %eax,(%esp)
 84acb40:	e8 db ed c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84acb45:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acb4c:	00 
 84acb4d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb50:	89 04 24             	mov    %eax,(%esp)
 84acb53:	e8 c8 ed c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84acb58:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acb5f:	00 
 84acb60:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb63:	89 04 24             	mov    %eax,(%esp)
 84acb66:	e8 ed ed c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84acb6b:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84acb72:	00 
 84acb73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb76:	89 04 24             	mov    %eax,(%esp)
 84acb79:	e8 32 ec d7 ff       	call   822b7b0 <_ZN18InterfacePacketBuf9set_indexEi>
 84acb7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acb81:	8b 00                	mov    (%eax),%eax
 84acb83:	8b 30                	mov    (%eax),%esi
 84acb85:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acb88:	89 04 24             	mov    %eax,(%esp)
 84acb8b:	e8 d6 eb d7 ff       	call   822b766 <_ZNK18InterfacePacketBuf3getEv>
 84acb90:	89 c3                	mov    %eax,%ebx
 84acb92:	8b 45 08             	mov    0x8(%ebp),%eax
 84acb95:	89 04 24             	mov    %eax,(%esp)
 84acb98:	e8 1d 74 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84acb9d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84acba1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84acba5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84acba8:	89 04 24             	mov    %eax,(%esp)
 84acbab:	ff d6                	call   *%esi
 84acbad:	85 c0                	test   %eax,%eax
 84acbaf:	0f 95 c0             	setne  %al
 84acbb2:	84 c0                	test   %al,%al
 84acbb4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acbb7:	89 04 24             	mov    %eax,(%esp)
 84acbba:	e8 c1 12 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84acbbf:	eb 1c                	jmp    84acbdd <_ZN11game_master9CDropItem7executeEv+0x151>
 84acbc1:	89 d3                	mov    %edx,%ebx
 84acbc3:	89 c6                	mov    %eax,%esi
 84acbc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84acbc8:	89 04 24             	mov    %eax,(%esp)
 84acbcb:	e8 b0 12 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84acbd0:	89 f0                	mov    %esi,%eax
 84acbd2:	89 da                	mov    %ebx,%edx
 84acbd4:	89 04 24             	mov    %eax,(%esp)
 84acbd7:	e8 74 6b 63 00       	call   8ae3750 <_Unwind_Resume>
 84acbdc:	90                   	nop
 84acbdd:	83 c4 20             	add    $0x20,%esp
 84acbe0:	5b                   	pop    %ebx
 84acbe1:	5e                   	pop    %esi
 84acbe2:	5d                   	pop    %ebp
 84acbe3:	c3                   	ret

```

```c
// game_master::CDropItem::execute @ 0x84aca8c

/* game_master::CDropItem::execute() */

void __thiscall game_master::CDropItem::execute(CDropItem *this)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  undefined4 *local_10;
  
  local_10 = (undefined4 *)CGameMasterMgr::GetDispatcher(0x32);
  if (local_10 != (undefined4 *)0x0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084acace to 084acbac has its CatchHandler @ 084acbc1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x32);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,8);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,false);
    InterfacePacketBuf::set_index((InterfacePacketBuf *)local_1c,0xf);
    pcVar1 = *(code **)*local_10;
    uVar2 = InterfacePacketBuf::get((InterfacePacketBuf *)local_1c);
    uVar3 = CCommand::GetUser((CCommand *)this);
    (*pcVar1)(local_10,uVar3,uVar2);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```


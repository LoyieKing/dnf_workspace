# Timer_QuickPartyWaitingPartyMatching

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## cancel_quick_party

```asm
// === 0863ad96 Timer_QuickPartyWaitingPartyMatching::cancel_quick_party  [0x0863ad96-0x863ae81] ===
 863ad96:	55                   	push   %ebp
 863ad97:	89 e5                	mov    %esp,%ebp
 863ad99:	56                   	push   %esi
 863ad9a:	53                   	push   %ebx
 863ad9b:	83 ec 20             	sub    $0x20,%esp
 863ad9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 863ada1:	89 04 24             	mov    %eax,(%esp)
 863ada4:	e8 83 e9 c2 ff       	call   826972c <_ZN10QuickParty11CQuickParty16get_party_objectEv>
 863ada9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863adac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863adb0:	75 0a                	jne    863adbc <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE+0x26>
 863adb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 863adb7:	e9 bc 00 00 00       	jmp    863ae78 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE+0xe2>
 863adbc:	e8 cd 13 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863adc1:	89 04 24             	mov    %eax,(%esp)
 863adc4:	e8 f7 df c5 ff       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 863adc9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863add0:	00 
 863add1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 863add8:	00 
 863add9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863addc:	89 54 24 04          	mov    %edx,0x4(%esp)
 863ade0:	89 04 24             	mov    %eax,(%esp)
 863ade3:	e8 9e f5 c2 ff       	call   826a386 <_ZN10QuickParty24CQuickPartySystemManager18cancel_quick_partyEP6CPartybP5CUser>
 863ade8:	84 c0                	test   %al,%al
 863adea:	0f 84 83 00 00 00    	je     863ae73 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE+0xdd>
 863adf0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863adf3:	89 04 24             	mov    %eax,(%esp)
 863adf6:	e8 51 2f f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863adfb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863adfe:	89 04 24             	mov    %eax,(%esp)
 863ae01:	e8 e0 0a a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863ae06:	c7 44 24 08 7f 01 00 	movl   $0x17f,0x8(%esp)
 863ae0d:	00 
 863ae0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863ae15:	00 
 863ae16:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863ae19:	89 04 24             	mov    %eax,(%esp)
 863ae1c:	e8 db 0a a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863ae21:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863ae28:	00 
 863ae29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863ae2c:	89 04 24             	mov    %eax,(%esp)
 863ae2f:	e8 24 0b a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863ae34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863ae37:	89 44 24 04          	mov    %eax,0x4(%esp)
 863ae3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863ae3e:	89 04 24             	mov    %eax,(%esp)
 863ae41:	e8 08 23 f6 ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 863ae46:	bb 00 00 00 00       	mov    $0x0,%ebx
 863ae4b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863ae4e:	89 04 24             	mov    %eax,(%esp)
 863ae51:	e8 2a 30 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863ae56:	eb 20                	jmp    863ae78 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE+0xe2>
 863ae58:	89 d3                	mov    %edx,%ebx
 863ae5a:	89 c6                	mov    %eax,%esi
 863ae5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863ae5f:	89 04 24             	mov    %eax,(%esp)
 863ae62:	e8 19 30 f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863ae67:	89 f0                	mov    %esi,%eax
 863ae69:	89 da                	mov    %ebx,%edx
 863ae6b:	89 04 24             	mov    %eax,(%esp)
 863ae6e:	e8 dd 88 4a 00       	call   8ae3750 <_Unwind_Resume>
 863ae73:	bb 01 00 00 00       	mov    $0x1,%ebx
 863ae78:	89 d8                	mov    %ebx,%eax
 863ae7a:	83 c4 20             	add    $0x20,%esp
 863ae7d:	5b                   	pop    %ebx
 863ae7e:	5e                   	pop    %esi
 863ae7f:	5d                   	pop    %ebp
 863ae80:	c3                   	ret
 863ae81:	90                   	nop

```

```c
// Timer_QuickPartyWaitingPartyMatching::cancel_quick_party @ 0x863ad96

/* Timer_QuickPartyWaitingPartyMatching::cancel_quick_party(QuickParty::CQuickParty*) */

undefined4 __thiscall
Timer_QuickPartyWaitingPartyMatching::cancel_quick_party
          (Timer_QuickPartyWaitingPartyMatching *this,CQuickParty *param_1)

{
  char cVar1;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined4 uVar2;
  PacketGuard local_1c [12];
  CParty *local_10;
  
  local_10 = (CParty *)QuickParty::CQuickParty::get_party_object(param_1);
  if (local_10 == (CParty *)0x0) {
    uVar2 = 0;
  }
  else {
    this_00 = (CGameManager *)G_CGameManager();
    this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
    cVar1 = QuickParty::CQuickPartySystemManager::cancel_quick_party
                      (this_01,local_10,true,(CUser *)0x0);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863ae01 to 0863ae45 has its CatchHandler @ 0863ae58 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x17f);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CParty::send_to_party(local_10,local_1c);
      uVar2 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar2;
}

```

---

## dispatch_sig

```asm
// === 0863ac18 Timer_QuickPartyWaitingPartyMatching::dispatch_sig  [0x0863ac18-0x863ad95] ===
 863ac18:	55                   	push   %ebp
 863ac19:	89 e5                	mov    %esp,%ebp
 863ac1b:	83 ec 28             	sub    $0x28,%esp
 863ac1e:	e8 6b 15 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863ac23:	8b 55 0c             	mov    0xc(%ebp),%edx
 863ac26:	89 54 24 04          	mov    %edx,0x4(%esp)
 863ac2a:	89 04 24             	mov    %eax,(%esp)
 863ac2d:	e8 40 a9 c5 ff       	call   8295572 <_ZN12CGameManager13GetQuickPartyEi>
 863ac32:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863ac35:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 863ac39:	75 0a                	jne    863ac45 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x2d>
 863ac3b:	b8 00 00 00 00       	mov    $0x0,%eax
 863ac40:	e9 4f 01 00 00       	jmp    863ad94 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x17c>
 863ac45:	8b 45 10             	mov    0x10(%ebp),%eax
 863ac48:	89 44 24 08          	mov    %eax,0x8(%esp)
 863ac4c:	8b 45 14             	mov    0x14(%ebp),%eax
 863ac4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 863ac53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ac56:	89 04 24             	mov    %eax,(%esp)
 863ac59:	e8 52 ea c2 ff       	call   82696b0 <_ZN10QuickParty11CQuickParty15check_timer_keyE13TIMER_MESSAGEi>
 863ac5e:	83 f0 01             	xor    $0x1,%eax
 863ac61:	84 c0                	test   %al,%al
 863ac63:	74 0a                	je     863ac6f <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x57>
 863ac65:	b8 00 00 00 00       	mov    $0x0,%eax
 863ac6a:	e9 25 01 00 00       	jmp    863ad94 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x17c>
 863ac6f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ac72:	89 04 24             	mov    %eax,(%esp)
 863ac75:	e8 44 ec c2 ff       	call   82698be <_ZN10QuickParty11CQuickParty21get_quick_party_countEv>
 863ac7a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863ac7d:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 863ac81:	7f 1a                	jg     863ac9d <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x85>
 863ac83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ac86:	89 04 24             	mov    %eax,(%esp)
 863ac89:	e8 cc 0a c3 ff       	call   826b75a <_ZN10QuickParty11CQuickParty22get_first_matching_cntEv>
 863ac8e:	0f be c0             	movsbl %al,%eax
 863ac91:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 863ac94:	75 07                	jne    863ac9d <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x85>
 863ac96:	b8 01 00 00 00       	mov    $0x1,%eax
 863ac9b:	eb 05                	jmp    863aca2 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x8a>
 863ac9d:	b8 00 00 00 00       	mov    $0x0,%eax
 863aca2:	84 c0                	test   %al,%al
 863aca4:	74 0a                	je     863acb0 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x98>
 863aca6:	b8 00 00 00 00       	mov    $0x0,%eax
 863acab:	e9 e4 00 00 00       	jmp    863ad94 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x17c>
 863acb0:	8b 45 14             	mov    0x14(%ebp),%eax
 863acb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 863acb7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863acba:	89 04 24             	mov    %eax,(%esp)
 863acbd:	e8 a6 e9 c2 ff       	call   8269668 <_ZN10QuickParty11CQuickParty13get_timer_keyE13TIMER_MESSAGE>
 863acc2:	83 f8 01             	cmp    $0x1,%eax
 863acc5:	0f 94 c0             	sete   %al
 863acc8:	84 c0                	test   %al,%al
 863acca:	74 23                	je     863acef <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0xd7>
 863accc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863accf:	89 44 24 04          	mov    %eax,0x4(%esp)
 863acd3:	8b 45 08             	mov    0x8(%ebp),%eax
 863acd6:	89 04 24             	mov    %eax,(%esp)
 863acd9:	e8 b8 00 00 00       	call   863ad96 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE>
 863acde:	83 f0 01             	xor    $0x1,%eax
 863ace1:	84 c0                	test   %al,%al
 863ace3:	74 0a                	je     863acef <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0xd7>
 863ace5:	b8 00 00 00 00       	mov    $0x0,%eax
 863acea:	e9 a5 00 00 00       	jmp    863ad94 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x17c>
 863acef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863acf2:	89 04 24             	mov    %eax,(%esp)
 863acf5:	e8 60 0a c3 ff       	call   826b75a <_ZN10QuickParty11CQuickParty22get_first_matching_cntEv>
 863acfa:	0f be c0             	movsbl %al,%eax
 863acfd:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 863ad00:	7c 19                	jl     863ad1b <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x103>
 863ad02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ad05:	89 04 24             	mov    %eax,(%esp)
 863ad08:	e8 d7 0a c3 ff       	call   826b7e4 <_ZN10QuickParty11CQuickParty27is_change_quick_party_countEv>
 863ad0d:	83 f0 01             	xor    $0x1,%eax
 863ad10:	84 c0                	test   %al,%al
 863ad12:	74 07                	je     863ad1b <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x103>
 863ad14:	b8 01 00 00 00       	mov    $0x1,%eax
 863ad19:	eb 05                	jmp    863ad20 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x108>
 863ad1b:	b8 00 00 00 00       	mov    $0x0,%eax
 863ad20:	84 c0                	test   %al,%al
 863ad22:	74 20                	je     863ad44 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x12c>
 863ad24:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ad27:	89 44 24 04          	mov    %eax,0x4(%esp)
 863ad2b:	8b 45 08             	mov    0x8(%ebp),%eax
 863ad2e:	89 04 24             	mov    %eax,(%esp)
 863ad31:	e8 60 00 00 00       	call   863ad96 <_ZN36Timer_QuickPartyWaitingPartyMatching18cancel_quick_partyEPN10QuickParty11CQuickPartyE>
 863ad36:	83 f0 01             	xor    $0x1,%eax
 863ad39:	84 c0                	test   %al,%al
 863ad3b:	74 07                	je     863ad44 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x12c>
 863ad3d:	b8 00 00 00 00       	mov    $0x0,%eax
 863ad42:	eb 50                	jmp    863ad94 <_ZN36Timer_QuickPartyWaitingPartyMatching12dispatch_sigEiij+0x17c>
 863ad44:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863ad47:	89 04 24             	mov    %eax,(%esp)
 863ad4a:	e8 7b 97 bf ff       	call   82344ca <_ZN10QuickParty23STQuickPartyPoolMap_KeyC1Ev>
 863ad4f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ad52:	89 04 24             	mov    %eax,(%esp)
 863ad55:	e8 3e 0a c3 ff       	call   826b798 <_ZN10QuickParty11CQuickParty17get_dungeon_indexEv>
 863ad5a:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 863ad5e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863ad61:	89 04 24             	mov    %eax,(%esp)
 863ad64:	e8 4b 0a c3 ff       	call   826b7b4 <_ZN10QuickParty11CQuickParty16get_dungeon_diffEv>
 863ad69:	88 45 ee             	mov    %al,-0x12(%ebp)
 863ad6c:	e8 1d 14 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863ad71:	89 04 24             	mov    %eax,(%esp)
 863ad74:	e8 47 e0 c5 ff       	call   8298dc0 <_ZN12CGameManager26GetQuickPartySystemManagerEv>
 863ad79:	8d 55 ec             	lea    -0x14(%ebp),%edx
 863ad7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 863ad80:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863ad83:	89 54 24 04          	mov    %edx,0x4(%esp)
 863ad87:	89 04 24             	mov    %eax,(%esp)
 863ad8a:	e8 e3 fb c2 ff       	call   826a972 <_ZN10QuickParty24CQuickPartySystemManager10start_gameEPNS_11CQuickPartyERKNS_23STQuickPartyPoolMap_KeyE>
 863ad8f:	b8 01 00 00 00       	mov    $0x1,%eax
 863ad94:	c9                   	leave
 863ad95:	c3                   	ret

```

```c
// Timer_QuickPartyWaitingPartyMatching::dispatch_sig @ 0x863ac18

/* Timer_QuickPartyWaitingPartyMatching::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_QuickPartyWaitingPartyMatching::dispatch_sig
          (Timer_QuickPartyWaitingPartyMatching *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CGameManager *this_00;
  CQuickPartySystemManager *this_01;
  undefined2 local_18;
  undefined1 local_16;
  CQuickParty *local_14;
  int local_10;
  
  iVar3 = G_CGameManager();
  local_14 = (CQuickParty *)CGameManager::GetQuickParty(iVar3);
  if (local_14 == (CQuickParty *)0x0) {
    return 0;
  }
  cVar2 = QuickParty::CQuickParty::check_timer_key(local_14,param_3,param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_10 = QuickParty::CQuickParty::get_quick_party_count(local_14);
  if ((local_10 < 2) &&
     (cVar2 = QuickParty::CQuickParty::get_first_matching_cnt(local_14), cVar2 == local_10)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = QuickParty::CQuickParty::get_timer_key(local_14,param_3);
  if ((iVar3 == 1) && (cVar2 = cancel_quick_party(this,local_14), cVar2 != '\x01')) {
    return 0;
  }
  cVar2 = QuickParty::CQuickParty::get_first_matching_cnt(local_14);
  if ((cVar2 < local_10) ||
     (cVar2 = QuickParty::CQuickParty::is_change_quick_party_count(local_14), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (cVar2 = cancel_quick_party(this,local_14), cVar2 != '\x01')) {
    return 0;
  }
  QuickParty::STQuickPartyPoolMap_Key::STQuickPartyPoolMap_Key((STQuickPartyPoolMap_Key *)&local_18)
  ;
  local_18 = QuickParty::CQuickParty::get_dungeon_index(local_14);
  local_16 = QuickParty::CQuickParty::get_dungeon_diff(local_14);
  this_00 = (CGameManager *)G_CGameManager();
  this_01 = (CQuickPartySystemManager *)CGameManager::GetQuickPartySystemManager(this_00);
  QuickParty::CQuickPartySystemManager::start_game
            (this_01,local_14,(STQuickPartyPoolMap_Key *)&local_18);
  return 1;
}

```


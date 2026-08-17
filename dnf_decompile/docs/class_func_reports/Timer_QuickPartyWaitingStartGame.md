# Timer_QuickPartyWaitingStartGame

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863ae82 Timer_QuickPartyWaitingStartGame::dispatch_sig  [0x0863ae82-0x863b0b9] ===
 863ae82:	55                   	push   %ebp
 863ae83:	89 e5                	mov    %esp,%ebp
 863ae85:	56                   	push   %esi
 863ae86:	53                   	push   %ebx
 863ae87:	83 ec 40             	sub    $0x40,%esp
 863ae8a:	e8 ff 12 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863ae8f:	8b 55 0c             	mov    0xc(%ebp),%edx
 863ae92:	89 54 24 04          	mov    %edx,0x4(%esp)
 863ae96:	89 04 24             	mov    %eax,(%esp)
 863ae99:	e8 94 a0 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 863ae9e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 863aea1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 863aea5:	75 0a                	jne    863aeb1 <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x2f>
 863aea7:	b8 00 00 00 00       	mov    $0x0,%eax
 863aeac:	e9 02 02 00 00       	jmp    863b0b3 <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x231>
 863aeb1:	8b 45 10             	mov    0x10(%ebp),%eax
 863aeb4:	89 44 24 08          	mov    %eax,0x8(%esp)
 863aeb8:	8b 45 14             	mov    0x14(%ebp),%eax
 863aebb:	89 44 24 04          	mov    %eax,0x4(%esp)
 863aebf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863aec2:	89 04 24             	mov    %eax,(%esp)
 863aec5:	e8 da ff f5 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 863aeca:	83 f0 01             	xor    $0x1,%eax
 863aecd:	84 c0                	test   %al,%al
 863aecf:	74 0a                	je     863aedb <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x59>
 863aed1:	b8 00 00 00 00       	mov    $0x0,%eax
 863aed6:	e9 d8 01 00 00       	jmp    863b0b3 <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x231>
 863aedb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863aee2:	00 
 863aee3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863aeea:	00 
 863aeeb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863aeee:	89 04 24             	mov    %eax,(%esp)
 863aef1:	e8 48 08 f6 ff       	call   859b73e <_ZN6CParty32send_quick_party_matching_resultEbP5CUser>
 863aef6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863aefd:	00 
 863aefe:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863af01:	89 04 24             	mov    %eax,(%esp)
 863af04:	e8 2d 2a bf ff       	call   822d936 <_ZN6CParty15set_quick_partyEb>
 863af09:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863af0c:	89 04 24             	mov    %eax,(%esp)
 863af0f:	e8 6c a8 b0 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 863af14:	89 04 24             	mov    %eax,(%esp)
 863af17:	e8 0c 61 ac ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 863af1c:	89 c3                	mov    %eax,%ebx
 863af1e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863af25:	00 
 863af26:	c7 44 24 08 a8 16 00 	movl   $0x16a8,0x8(%esp)
 863af2d:	00 
 863af2e:	c7 44 24 04 40 7f ce 	movl   $0x8ce7f40,0x4(%esp)
 863af35:	08 
 863af36:	8d 45 d8             	lea    -0x28(%ebp),%eax
 863af39:	89 04 24             	mov    %eax,(%esp)
 863af3c:	e8 d7 47 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863af41:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863af45:	c7 44 24 04 3c 71 ce 	movl   $0x8ce713c,0x4(%esp)
 863af4c:	08 
 863af4d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 863af50:	89 04 24             	mov    %eax,(%esp)
 863af53:	e8 30 48 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863af58:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 863af5f:	e9 3b 01 00 00       	jmp    863b09f <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x21d>
 863af64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863af67:	89 44 24 04          	mov    %eax,0x4(%esp)
 863af6b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863af6e:	89 04 24             	mov    %eax,(%esp)
 863af71:	e8 f2 a8 b0 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 863af76:	83 f0 01             	xor    $0x1,%eax
 863af79:	84 c0                	test   %al,%al
 863af7b:	0f 85 19 01 00 00    	jne    863b09a <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x218>
 863af81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863af84:	89 44 24 04          	mov    %eax,0x4(%esp)
 863af88:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863af8b:	89 04 24             	mov    %eax,(%esp)
 863af8e:	e8 d1 a7 b0 ff       	call   8145764 <_ZN6CParty8get_userEi>
 863af93:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863af96:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863af9d:	00 
 863af9e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863afa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 863afa5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 863afa8:	89 04 24             	mov    %eax,(%esp)
 863afab:	e8 64 11 f6 ff       	call   859c114 <_ZN6CParty10leave_userEP5CUser20ENUM_PARTY_INFO_TYPE>
 863afb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863afb3:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 863afb7:	0f 84 de 00 00 00    	je     863b09b <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x219>
 863afbd:	e8 e5 f3 a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863afc2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863afc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 863afc9:	89 04 24             	mov    %eax,(%esp)
 863afcc:	e8 45 ba 08 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 863afd1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863afd4:	89 04 24             	mov    %eax,(%esp)
 863afd7:	e8 70 2d f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863afdc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863afdf:	89 04 24             	mov    %eax,(%esp)
 863afe2:	e8 ff 08 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863afe7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863afee:	00 
 863afef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863aff6:	00 
 863aff7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863affa:	89 04 24             	mov    %eax,(%esp)
 863affd:	e8 fa 08 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863b002:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b009:	00 
 863b00a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b00d:	89 04 24             	mov    %eax,(%esp)
 863b010:	e8 0b 09 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b015:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b01c:	00 
 863b01d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b020:	89 04 24             	mov    %eax,(%esp)
 863b023:	e8 7c ee a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 863b028:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b02b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863b032:	00 
 863b033:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b037:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863b03a:	89 04 24             	mov    %eax,(%esp)
 863b03d:	e8 0c f4 01 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 863b042:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b049:	00 
 863b04a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b04d:	89 04 24             	mov    %eax,(%esp)
 863b050:	e8 03 09 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863b055:	e8 4d f3 a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863b05a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863b05d:	89 54 24 08          	mov    %edx,0x8(%esp)
 863b061:	8d 55 cc             	lea    -0x34(%ebp),%edx
 863b064:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b068:	89 04 24             	mov    %eax,(%esp)
 863b06b:	e8 ec 98 af ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 863b070:	eb 1b                	jmp    863b08d <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x20b>
 863b072:	89 d3                	mov    %edx,%ebx
 863b074:	89 c6                	mov    %eax,%esi
 863b076:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b079:	89 04 24             	mov    %eax,(%esp)
 863b07c:	e8 ff 2d f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b081:	89 f0                	mov    %esi,%eax
 863b083:	89 da                	mov    %ebx,%edx
 863b085:	89 04 24             	mov    %eax,(%esp)
 863b088:	e8 c3 86 4a 00       	call   8ae3750 <_Unwind_Resume>
 863b08d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 863b090:	89 04 24             	mov    %eax,(%esp)
 863b093:	e8 e8 2d f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b098:	eb 01                	jmp    863b09b <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0x219>
 863b09a:	90                   	nop
 863b09b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 863b09f:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 863b0a3:	0f 9e c0             	setle  %al
 863b0a6:	84 c0                	test   %al,%al
 863b0a8:	0f 85 b6 fe ff ff    	jne    863af64 <_ZN32Timer_QuickPartyWaitingStartGame12dispatch_sigEiij+0xe2>
 863b0ae:	b8 01 00 00 00       	mov    $0x1,%eax
 863b0b3:	83 c4 40             	add    $0x40,%esp
 863b0b6:	5b                   	pop    %ebx
 863b0b7:	5e                   	pop    %esi
 863b0b8:	5d                   	pop    %ebp
 863b0b9:	c3                   	ret

```

```c
// Timer_QuickPartyWaitingStartGame::dispatch_sig @ 0x863ae82

/* Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_QuickPartyWaitingStartGame::dispatch_sig
          (Timer_QuickPartyWaitingStartGame *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUserCharacInfo *this_00;
  GameWorld *pGVar4;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  CParty *local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  iVar2 = G_CGameManager();
  local_1c = (CParty *)CGameManager::GetParty(iVar2);
  if (local_1c == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(local_1c,param_3,param_2);
    if (cVar1 == '\x01') {
      CParty::send_quick_party_matching_result(local_1c,false,(CUser *)0x0);
      CParty::set_quick_party(local_1c,false);
      this_00 = (CUserCharacInfo *)CParty::getManager(local_1c);
      uVar3 = CUserCharacInfo::getCurCharacName(this_00);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool Timer_QuickPartyWaitingStartGame::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x16a8,0);
      cMyTrace::operator()
                (local_2c,"QUICK_PARTY_LOG : PARTY DESTROY AND LEAVE DUNGEON !! : MANAGER (%s)",
                 uVar3);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
        cVar1 = CParty::checkValidUser(local_1c,local_18);
        if (cVar1 == '\x01') {
          local_14 = (CUser *)CParty::get_user(local_1c,local_18);
          local_10 = CParty::leave_user(local_1c,local_14,2);
          if (local_10 != 1) {
            pGVar4 = (GameWorld *)G_GameWorld();
            GameWorld::out_from_dungeon(pGVar4,local_14);
            PacketGuard::PacketGuard(local_38);
                    /* try { // try from 0863afe2 to 0863b06f has its CatchHandler @ 0863b072 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_38);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,2);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,1);
            CUser::make_basic_info(local_14,(char *)local_38,'\0');
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
            pGVar4 = (GameWorld *)G_GameWorld();
            GameWorld::send_all(pGVar4,local_38,local_14);
            PacketGuard::~PacketGuard(local_38);
          }
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```


# DisPatcher_DiePvP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ece64 DisPatcher_DiePvP::dispatch_sig  [0x081ece64-0x81ed099] ===
 81ece64:	55                   	push   %ebp
 81ece65:	89 e5                	mov    %esp,%ebp
 81ece67:	57                   	push   %edi
 81ece68:	56                   	push   %esi
 81ece69:	53                   	push   %ebx
 81ece6a:	83 ec 6c             	sub    $0x6c,%esp
 81ece6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ece70:	89 04 24             	mov    %eax,(%esp)
 81ece73:	e8 14 d5 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ece78:	83 f8 07             	cmp    $0x7,%eax
 81ece7b:	0f 95 c0             	setne  %al
 81ece7e:	84 c0                	test   %al,%al
 81ece80:	74 0a                	je     81ece8c <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x28>
 81ece82:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ece87:	e9 04 02 00 00       	jmp    81ed090 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x22c>
 81ece8c:	66 c7 45 ca ff ff    	movw   $0xffff,-0x36(%ebp)
 81ece92:	8d 45 ca             	lea    -0x36(%ebp),%eax
 81ece95:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ece99:	8b 45 10             	mov    0x10(%ebp),%eax
 81ece9c:	89 04 24             	mov    %eax,(%esp)
 81ece9f:	e8 0c 02 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81ecea4:	83 f0 01             	xor    $0x1,%eax
 81ecea7:	84 c0                	test   %al,%al
 81ecea9:	74 2b                	je     81eced6 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x72>
 81eceab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eceb2:	00 
 81eceb3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eceba:	00 
 81ecebb:	c7 44 24 04 a0 05 bd 	movl   $0x8bd05a0,0x4(%esp)
 81ecec2:	08 
 81ecec3:	c7 04 24 12 6f 00 00 	movl   $0x6f12,(%esp)
 81ececa:	e8 08 3a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ececf:	89 c3                	mov    %eax,%ebx
 81eced1:	e9 ba 01 00 00       	jmp    81ed090 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x22c>
 81eced6:	0f b7 45 ca          	movzwl -0x36(%ebp),%eax
 81eceda:	0f b7 d8             	movzwl %ax,%ebx
 81ecedd:	e8 c5 d4 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ecee2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ecee6:	89 04 24             	mov    %eax,(%esp)
 81ecee9:	e8 ae 7c 4d 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81eceee:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81ecef1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81ecef5:	75 06                	jne    81ecefd <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x99>
 81ecef7:	66 c7 45 ca ff ff    	movw   $0xffff,-0x36(%ebp)
 81ecefd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecf00:	89 04 24             	mov    %eax,(%esp)
 81ecf03:	e8 86 82 46 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81ecf08:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ecf0b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81ecf0f:	75 2b                	jne    81ecf3c <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0xd8>
 81ecf11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ecf18:	00 
 81ecf19:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ecf20:	00 
 81ecf21:	c7 44 24 04 a0 05 bd 	movl   $0x8bd05a0,0x4(%esp)
 81ecf28:	08 
 81ecf29:	c7 04 24 1c 6f 00 00 	movl   $0x6f1c,(%esp)
 81ecf30:	e8 a2 39 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ecf35:	89 c3                	mov    %eax,%ebx
 81ecf37:	e9 54 01 00 00       	jmp    81ed090 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x22c>
 81ecf3c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ecf3f:	89 04 24             	mov    %eax,(%esp)
 81ecf42:	e8 05 0e 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81ecf47:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ecf4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ecf4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecf51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ecf55:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ecf58:	89 04 24             	mov    %eax,(%esp)
 81ecf5b:	e8 26 c4 3e 00       	call   85d9386 <_ZN8PvP_Room10die_characEP5CUserS1_>
 81ecf60:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ecf63:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ecf66:	89 04 24             	mov    %eax,(%esp)
 81ecf69:	e8 5e 0a 04 00       	call   822d9cc <_ZN8PvP_Room19get_pvp_battle_modeEv>
 81ecf6e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81ecf71:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ecf74:	89 04 24             	mov    %eax,(%esp)
 81ecf77:	e8 18 0a 04 00       	call   822d994 <_ZN8PvP_Room9get_indexEv>
 81ecf7c:	89 c7                	mov    %eax,%edi
 81ecf7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecf81:	89 04 24             	mov    %eax,(%esp)
 81ecf84:	e8 9f 40 f1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81ecf89:	89 c6                	mov    %eax,%esi
 81ecf8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ecf8e:	89 04 24             	mov    %eax,(%esp)
 81ecf91:	e8 dc 40 f1 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 81ecf96:	89 c3                	mov    %eax,%ebx
 81ecf98:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ecf9f:	00 
 81ecfa0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ecfa7:	00 
 81ecfa8:	c7 44 24 08 22 6f 00 	movl   $0x6f22,0x8(%esp)
 81ecfaf:	00 
 81ecfb0:	c7 44 24 04 a0 05 bd 	movl   $0x8bd05a0,0x4(%esp)
 81ecfb7:	08 
 81ecfb8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ecfbb:	89 04 24             	mov    %eax,(%esp)
 81ecfbe:	e8 79 2d 36 00       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 81ecfc3:	c7 44 24 1c 3a 00 00 	movl   $0x3a,0x1c(%esp)
 81ecfca:	00 
 81ecfcb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ecfce:	89 44 24 18          	mov    %eax,0x18(%esp)
 81ecfd2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81ecfd5:	89 44 24 14          	mov    %eax,0x14(%esp)
 81ecfd9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81ecfdd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ecfe1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ecfe5:	c7 44 24 04 ec 20 bc 	movl   $0x8bc20ec,0x4(%esp)
 81ecfec:	08 
 81ecfed:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ecff0:	89 04 24             	mov    %eax,(%esp)
 81ecff3:	e8 6c 2d 36 00       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 81ecff8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81ecffc:	7e 65                	jle    81ed063 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x1ff>
 81ecffe:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 81ed005:	00 
 81ed006:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ed00d:	00 
 81ed00e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed011:	89 04 24             	mov    %eax,(%esp)
 81ed014:	e8 e3 e8 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81ed019:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ed020:	00 
 81ed021:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed024:	89 04 24             	mov    %eax,(%esp)
 81ed027:	e8 f4 e8 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ed02c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ed02f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed033:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed036:	89 04 24             	mov    %eax,(%esp)
 81ed039:	e8 e2 e8 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ed03e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ed045:	00 
 81ed046:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed049:	89 04 24             	mov    %eax,(%esp)
 81ed04c:	e8 07 e9 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ed051:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed054:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ed058:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ed05b:	89 04 24             	mov    %eax,(%esp)
 81ed05e:	e8 57 b5 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ed063:	bb 00 00 00 00       	mov    $0x0,%ebx
 81ed068:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed06b:	89 04 24             	mov    %eax,(%esp)
 81ed06e:	e8 0d 0e 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ed073:	eb 1b                	jmp    81ed090 <_ZN17DisPatcher_DiePvP12dispatch_sigEP5CUserR9PacketBuf+0x22c>
 81ed075:	89 d3                	mov    %edx,%ebx
 81ed077:	89 c6                	mov    %eax,%esi
 81ed079:	8d 45 bc             	lea    -0x44(%ebp),%eax
 81ed07c:	89 04 24             	mov    %eax,(%esp)
 81ed07f:	e8 fc 0d 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ed084:	89 f0                	mov    %esi,%eax
 81ed086:	89 da                	mov    %ebx,%edx
 81ed088:	89 04 24             	mov    %eax,(%esp)
 81ed08b:	e8 c0 66 8f 00       	call   8ae3750 <_Unwind_Resume>
 81ed090:	89 d8                	mov    %ebx,%eax
 81ed092:	83 c4 6c             	add    $0x6c,%esp
 81ed095:	5b                   	pop    %ebx
 81ed096:	5e                   	pop    %esi
 81ed097:	5f                   	pop    %edi
 81ed098:	5d                   	pop    %ebp
 81ed099:	c3                   	ret

```

```c
// DisPatcher_DiePvP::dispatch_sig @ 0x81ece64

/* DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_DiePvP::dispatch_sig(DisPatcher_DiePvP *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  GameWorld *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  PacketGuard local_48 [14];
  ushort local_3a;
  CSwitchLog local_38 [16];
  CUser *local_28;
  PvP_Room *local_24;
  int local_20;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 == 7) {
    local_3a = 0xffff;
    cVar2 = PacketBuf::get_short(param_2,&local_3a);
    uVar1 = local_3a;
    if (cVar2 == '\x01') {
      this_00 = (GameWorld *)G_GameWorld();
      local_28 = (CUser *)GameWorld::find_from_world(this_00,uVar1);
      if (local_28 == (CUser *)0x0) {
        local_3a = 0xffff;
      }
      local_24 = (PvP_Room *)CUser::GetPVPRoom(param_1);
      if (local_24 == (PvP_Room *)0x0) {
        uVar7 = LineFunc(0x6f1c,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
      else {
        PacketGuard::PacketGuard(local_48);
                    /* try { // try from 081ecf5b to 081ed062 has its CatchHandler @ 081ed075 */
        local_20 = PvP_Room::die_charac(local_24,param_1,local_28);
        uVar7 = PvP_Room::get_pvp_battle_mode(local_24);
        uVar4 = PvP_Room::get_index(local_24);
        uVar5 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        uVar6 = CUser::get_acc_name(param_1);
        CSwitchLog::CSwitchLog
                  (local_38,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0x6f22
                   ,0,0);
        CSwitchLog::operator()
                  (local_38,"pvp@log %s,%s,room(%d),%d,%d,%d",uVar6,uVar5,uVar4,uVar7,local_20,0x3a)
        ;
        if (0 < local_20) {
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0x3a);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,local_20);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(param_1,local_48);
        }
        uVar7 = 0;
        PacketGuard::~PacketGuard(local_48);
      }
    }
    else {
      uVar7 = LineFunc(0x6f12,"virtual int DisPatcher_DiePvP::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```


# DisPatcher_MakeWarRoomTemp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08201b32 DisPatcher_MakeWarRoomTemp::dispatch_sig  [0x08201b32-0x8201e79] ===
 8201b32:	55                   	push   %ebp
 8201b33:	89 e5                	mov    %esp,%ebp
 8201b35:	56                   	push   %esi
 8201b36:	53                   	push   %ebx
 8201b37:	83 ec 40             	sub    $0x40,%esp
 8201b3a:	e8 68 88 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8201b3f:	89 04 24             	mov    %eax,(%esp)
 8201b42:	e8 a1 09 f4 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 8201b47:	84 c0                	test   %al,%al
 8201b49:	74 0a                	je     8201b55 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x23>
 8201b4b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201b50:	e9 1c 03 00 00       	jmp    8201e71 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x33f>
 8201b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201b58:	89 04 24             	mov    %eax,(%esp)
 8201b5b:	e8 2c 88 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8201b60:	83 f8 03             	cmp    $0x3,%eax
 8201b63:	0f 95 c0             	setne  %al
 8201b66:	84 c0                	test   %al,%al
 8201b68:	74 0a                	je     8201b74 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x42>
 8201b6a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201b6f:	e9 fd 02 00 00       	jmp    8201e71 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x33f>
 8201b74:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201b77:	89 04 24             	mov    %eax,(%esp)
 8201b7a:	e8 cd c1 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8201b7f:	e8 0a a6 ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 8201b84:	89 04 24             	mov    %eax,(%esp)
 8201b87:	e8 5c 09 0a 00       	call   82a24e8 <_ZN12CGameManager10GetWarRoomEv>
 8201b8c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8201b8f:	c7 44 24 08 5c 00 00 	movl   $0x5c,0x8(%esp)
 8201b96:	00 
 8201b97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201b9e:	00 
 8201b9f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201ba2:	89 04 24             	mov    %eax,(%esp)
 8201ba5:	e8 52 9d ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8201baa:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8201bae:	75 55                	jne    8201c05 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8201bb0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8201bb7:	00 
 8201bb8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201bbb:	89 04 24             	mov    %eax,(%esp)
 8201bbe:	e8 5d 9d ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201bc3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8201bca:	00 
 8201bcb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201bce:	89 04 24             	mov    %eax,(%esp)
 8201bd1:	e8 4a 9d ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201bd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201bdd:	00 
 8201bde:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201be1:	89 04 24             	mov    %eax,(%esp)
 8201be4:	e8 6f 9d ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8201be9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201bec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201bf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201bf3:	89 04 24             	mov    %eax,(%esp)
 8201bf6:	e8 bf 69 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8201bfb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201c00:	e9 61 02 00 00       	jmp    8201e66 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x334>
 8201c05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201c08:	89 04 24             	mov    %eax,(%esp)
 8201c0b:	e8 04 87 ed ff       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 8201c10:	84 c0                	test   %al,%al
 8201c12:	74 4d                	je     8201c61 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x12f>
 8201c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201c17:	89 04 24             	mov    %eax,(%esp)
 8201c1a:	e8 2d 35 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8201c1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8201c22:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8201c26:	74 39                	je     8201c61 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x12f>
 8201c28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201c2b:	89 04 24             	mov    %eax,(%esp)
 8201c2e:	e8 49 87 ed ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8201c33:	0f b7 c0             	movzwl %ax,%eax
 8201c36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201c3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8201c3d:	89 04 24             	mov    %eax,(%esp)
 8201c40:	e8 43 b7 39 00       	call   859d388 <_ZN6CParty19send_invite_warroomEi>
 8201c45:	e8 44 a5 ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 8201c4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201c51:	00 
 8201c52:	8b 55 0c             	mov    0xc(%ebp),%edx
 8201c55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8201c59:	89 04 24             	mov    %eax,(%esp)
 8201c5c:	e8 15 60 09 00       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 8201c61:	c7 44 24 0c 70 17 00 	movl   $0x1770,0xc(%esp)
 8201c68:	00 
 8201c69:	c7 44 24 08 c1 28 bc 	movl   $0x8bc28c1,0x8(%esp)
 8201c70:	08 
 8201c71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201c74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201c78:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8201c7b:	89 04 24             	mov    %eax,(%esp)
 8201c7e:	e8 db 8f 4b 00       	call   86bac5e <_ZN7WarRoom6CreateEP5CUserPcs>
 8201c83:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8201c86:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8201c8a:	0f 8e a3 00 00 00    	jle    8201d33 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x201>
 8201c90:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8201c97:	00 
 8201c98:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201c9b:	89 04 24             	mov    %eax,(%esp)
 8201c9e:	e8 7d 9c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201ca3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8201ca6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201caa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201cad:	89 04 24             	mov    %eax,(%esp)
 8201cb0:	e8 6b 9c ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201cb5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201cbc:	00 
 8201cbd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201cc0:	89 04 24             	mov    %eax,(%esp)
 8201cc3:	e8 90 9c ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8201cc8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201ccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201ccf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201cd2:	89 04 24             	mov    %eax,(%esp)
 8201cd5:	e8 e0 68 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8201cda:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8201cdd:	89 04 24             	mov    %eax,(%esp)
 8201ce0:	e8 a5 d1 02 00       	call   822ee8a <_ZN7WarRoom8GetIndexEv>
 8201ce5:	89 44 24 14          	mov    %eax,0x14(%esp)
 8201ce9:	c7 44 24 10 c8 28 bc 	movl   $0x8bc28c8,0x10(%esp)
 8201cf0:	08 
 8201cf1:	c7 44 24 0c 6d 97 00 	movl   $0x976d,0xc(%esp)
 8201cf8:	00 
 8201cf9:	c7 44 24 08 a0 f5 bc 	movl   $0x8bcf5a0,0x8(%esp)
 8201d00:	08 
 8201d01:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 8201d08:	08 
 8201d09:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8201d10:	e8 f5 1e 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8201d15:	e8 74 a4 ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 8201d1a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8201d1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8201d21:	89 04 24             	mov    %eax,(%esp)
 8201d24:	e8 3d 09 0a 00       	call   82a2666 <_ZN12CGameManager10PutWarRoomEP7WarRoom>
 8201d29:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201d2e:	e9 33 01 00 00       	jmp    8201e66 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x334>
 8201d33:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201d36:	89 04 24             	mov    %eax,(%esp)
 8201d39:	e8 a8 9b ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8201d3e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8201d45:	00 
 8201d46:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8201d4d:	00 
 8201d4e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201d51:	89 04 24             	mov    %eax,(%esp)
 8201d54:	e8 a3 9b ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8201d59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201d60:	00 
 8201d61:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201d64:	89 04 24             	mov    %eax,(%esp)
 8201d67:	e8 b4 9b ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8201d6c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201d73:	00 
 8201d74:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201d77:	89 04 24             	mov    %eax,(%esp)
 8201d7a:	e8 25 81 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8201d7f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201d82:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8201d89:	00 
 8201d8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201d8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201d91:	89 04 24             	mov    %eax,(%esp)
 8201d94:	e8 b5 86 45 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 8201d99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201da0:	00 
 8201da1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201da4:	89 04 24             	mov    %eax,(%esp)
 8201da7:	e8 ac 9b ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8201dac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201db3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8201db6:	89 04 24             	mov    %eax,(%esp)
 8201db9:	e8 fc 67 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8201dbe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201dc1:	89 04 24             	mov    %eax,(%esp)
 8201dc4:	e8 1d 9b ec ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8201dc9:	c7 44 24 08 57 00 00 	movl   $0x57,0x8(%esp)
 8201dd0:	00 
 8201dd1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8201dd8:	00 
 8201dd9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201ddc:	89 04 24             	mov    %eax,(%esp)
 8201ddf:	e8 18 9b ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8201de4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201deb:	00 
 8201dec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201def:	89 04 24             	mov    %eax,(%esp)
 8201df2:	e8 ad 80 ed ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8201df7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201dfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8201dfe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8201e01:	89 04 24             	mov    %eax,(%esp)
 8201e04:	e8 4f bf 4b 00       	call   86bdd58 <_ZN7WarRoom12MakeRoomInfoEPc>
 8201e09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8201e10:	00 
 8201e11:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201e14:	89 04 24             	mov    %eax,(%esp)
 8201e17:	e8 3c 9b ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8201e1c:	e8 86 85 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8201e21:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8201e24:	89 54 24 04          	mov    %edx,0x4(%esp)
 8201e28:	89 04 24             	mov    %eax,(%esp)
 8201e2b:	e8 e4 6d 4c 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8201e30:	e8 72 85 ed ff       	call   80da3a7 <_Z11G_GameWorldv>
 8201e35:	8b 55 0c             	mov    0xc(%ebp),%edx
 8201e38:	89 54 24 04          	mov    %edx,0x4(%esp)
 8201e3c:	89 04 24             	mov    %eax,(%esp)
 8201e3f:	e8 4e 53 4c 00       	call   86c7192 <_ZN9GameWorld12goto_warroomEP5CUser>
 8201e44:	bb 00 00 00 00       	mov    $0x0,%ebx
 8201e49:	eb 1b                	jmp    8201e66 <_ZN26DisPatcher_MakeWarRoomTemp12dispatch_sigEP5CUserR9PacketBuf+0x334>
 8201e4b:	89 d3                	mov    %edx,%ebx
 8201e4d:	89 c6                	mov    %eax,%esi
 8201e4f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201e52:	89 04 24             	mov    %eax,(%esp)
 8201e55:	e8 26 c0 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8201e5a:	89 f0                	mov    %esi,%eax
 8201e5c:	89 da                	mov    %ebx,%edx
 8201e5e:	89 04 24             	mov    %eax,(%esp)
 8201e61:	e8 ea 18 8e 00       	call   8ae3750 <_Unwind_Resume>
 8201e66:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8201e69:	89 04 24             	mov    %eax,(%esp)
 8201e6c:	e8 0f c0 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8201e71:	89 d8                	mov    %ebx,%eax
 8201e73:	83 c4 40             	add    $0x40,%esp
 8201e76:	5b                   	pop    %ebx
 8201e77:	5e                   	pop    %esi
 8201e78:	5d                   	pop    %ebp
 8201e79:	c3                   	ret

```

```c
// DisPatcher_MakeWarRoomTemp::dispatch_sig @ 0x8201b32

/* DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  GameWorld *pGVar2;
  int iVar3;
  CGameManager *pCVar4;
  uint uVar5;
  CUser *pCVar6;
  undefined4 uVar7;
  PacketGuard local_24 [12];
  CUser *local_18;
  int local_14;
  CParty *local_10;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if ((cVar1 == '\0') && (iVar3 = CUser::get_state((CUser *)param_2), iVar3 == 3)) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08201b7f to 08201e43 has its CatchHandler @ 08201e4b */
    pCVar4 = (CGameManager *)G_CGameManager();
    local_18 = (CUser *)CGameManager::GetWarRoom(pCVar4);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x5c);
    if (local_18 == (CUser *)0x0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
      CUser::Send((CUser *)param_2,local_24);
    }
    else {
      cVar1 = CUser::CheckInParty((CUser *)param_2);
      if ((cVar1 != '\0') &&
         (local_10 = (CParty *)CUser::GetParty((CUser *)param_2), local_10 != (CParty *)0x0)) {
        uVar5 = CUser::get_unique_id((CUser *)param_2);
        CParty::send_invite_warroom(local_10,uVar5 & 0xffff);
        pCVar6 = (CUser *)G_CGameManager();
        CGameManager::CheckOutParty(pCVar6,SUB41(param_2,0));
      }
      local_14 = WarRoom::Create(local_18,(char *)param_2,0x28c1);
      if (local_14 < 1) {
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,2);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
        CUser::make_basic_info((CUser *)param_2,(char *)local_24,'\x01');
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x57);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,1);
        WarRoom::MakeRoomInfo((WarRoom *)local_18,(char *)local_24);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(pGVar2,local_24);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::goto_warroom(pGVar2,(CUser *)param_2);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        uVar7 = WarRoom::GetIndex((WarRoom *)local_18);
        LogManager::logFormat
                  (1,"PacketDispatcher_Impl_1.cpp",
                   "virtual int DisPatcher_MakeWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)",0x976d
                   ,&DAT_08bc28c8,uVar7);
        pCVar4 = (CGameManager *)G_CGameManager();
        CGameManager::PutWarRoom(pCVar4,(WarRoom *)local_18);
      }
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}

```


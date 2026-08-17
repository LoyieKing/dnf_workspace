# DisPatcher_SetPVPTeam

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f6020 DisPatcher_SetPVPTeam::dispatch_sig  [0x081f6020-0x81f6231] ===
 81f6020:	55                   	push   %ebp
 81f6021:	89 e5                	mov    %esp,%ebp
 81f6023:	56                   	push   %esi
 81f6024:	53                   	push   %ebx
 81f6025:	83 ec 40             	sub    $0x40,%esp
 81f6028:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f602b:	89 04 24             	mov    %eax,(%esp)
 81f602e:	e8 59 43 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f6033:	83 f8 06             	cmp    $0x6,%eax
 81f6036:	0f 95 c0             	setne  %al
 81f6039:	84 c0                	test   %al,%al
 81f603b:	74 0a                	je     81f6047 <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81f603d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6042:	e9 e1 01 00 00       	jmp    81f6228 <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x208>
 81f6047:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f604a:	89 04 24             	mov    %eax,(%esp)
 81f604d:	e8 fa 7c 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f6052:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 81f6055:	83 c0 0d             	add    $0xd,%eax
 81f6058:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f605c:	8b 45 10             	mov    0x10(%ebp),%eax
 81f605f:	89 04 24             	mov    %eax,(%esp)
 81f6062:	e8 bb 6e 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f6067:	83 f0 01             	xor    $0x1,%eax
 81f606a:	84 c0                	test   %al,%al
 81f606c:	74 2b                	je     81f6099 <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x79>
 81f606e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6075:	00 
 81f6076:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f607d:	00 
 81f607e:	c7 44 24 04 40 00 bd 	movl   $0x8bd0040,0x4(%esp)
 81f6085:	08 
 81f6086:	c7 04 24 be 82 00 00 	movl   $0x82be,(%esp)
 81f608d:	e8 45 a8 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f6092:	89 c3                	mov    %eax,%ebx
 81f6094:	e9 84 01 00 00       	jmp    81f621d <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 81f6099:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f609c:	89 04 24             	mov    %eax,(%esp)
 81f609f:	e8 ea f0 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81f60a4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81f60a7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81f60ab:	75 2b                	jne    81f60d8 <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0xb8>
 81f60ad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f60b4:	00 
 81f60b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f60bc:	00 
 81f60bd:	c7 44 24 04 40 00 bd 	movl   $0x8bd0040,0x4(%esp)
 81f60c4:	08 
 81f60c5:	c7 04 24 c3 82 00 00 	movl   $0x82c3,(%esp)
 81f60cc:	e8 06 a8 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f60d1:	89 c3                	mov    %eax,%ebx
 81f60d3:	e9 45 01 00 00       	jmp    81f621d <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 81f60d8:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 81f60dc:	3c 04                	cmp    $0x4,%al
 81f60de:	75 5b                	jne    81f613b <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x11b>
 81f60e0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81f60e3:	89 04 24             	mov    %eax,(%esp)
 81f60e6:	e8 b3 53 03 00       	call   822b49e <_ZN10PvPMapInfoC1Ev>
 81f60eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f60ee:	89 04 24             	mov    %eax,(%esp)
 81f60f1:	e8 c6 78 03 00       	call   822d9bc <_ZN8PvP_Room17GetRequestedMapNoEv>
 81f60f6:	8d 55 cc             	lea    -0x34(%ebp),%edx
 81f60f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f60fd:	89 04 24             	mov    %eax,(%esp)
 81f6100:	e8 c3 94 15 00       	call   834f5c8 <_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo>
 81f6105:	0f b6 45 d0          	movzbl -0x30(%ebp),%eax
 81f6109:	83 f0 01             	xor    $0x1,%eax
 81f610c:	84 c0                	test   %al,%al
 81f610e:	74 2b                	je     81f613b <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x11b>
 81f6110:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f6117:	00 
 81f6118:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f611f:	00 
 81f6120:	c7 44 24 04 40 00 bd 	movl   $0x8bd0040,0x4(%esp)
 81f6127:	08 
 81f6128:	c7 04 24 ca 82 00 00 	movl   $0x82ca,(%esp)
 81f612f:	e8 a3 a7 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f6134:	89 c3                	mov    %eax,%ebx
 81f6136:	e9 e2 00 00 00       	jmp    81f621d <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 81f613b:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 81f613f:	0f be c0             	movsbl %al,%eax
 81f6142:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f6146:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f6149:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f614d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f6150:	89 04 24             	mov    %eax,(%esp)
 81f6153:	e8 6e 23 3e 00       	call   85d84c6 <_ZN8PvP_Room12set_pvp_modeEP5CUseri>
 81f6158:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f615b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f615f:	7e 6c                	jle    81f61cd <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1ad>
 81f6161:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 81f6168:	00 
 81f6169:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f6170:	00 
 81f6171:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f6174:	89 04 24             	mov    %eax,(%esp)
 81f6177:	e8 80 57 ed ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81f617c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81f6183:	00 
 81f6184:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f6187:	89 04 24             	mov    %eax,(%esp)
 81f618a:	e8 91 57 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f618f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f6192:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f6196:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f6199:	89 04 24             	mov    %eax,(%esp)
 81f619c:	e8 7f 57 ed ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81f61a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81f61a8:	00 
 81f61a9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f61ac:	89 04 24             	mov    %eax,(%esp)
 81f61af:	e8 a4 57 ed ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81f61b4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f61b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f61bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f61be:	89 04 24             	mov    %eax,(%esp)
 81f61c1:	e8 f4 23 45 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81f61c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f61cb:	eb 50                	jmp    81f621d <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 81f61cd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f61d0:	c7 44 24 08 ff ff 00 	movl   $0xffff,0x8(%esp)
 81f61d7:	00 
 81f61d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f61dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81f61df:	89 04 24             	mov    %eax,(%esp)
 81f61e2:	e8 fb 57 3e 00       	call   85db9e2 <_ZN8PvP_Room14make_seat_infoEPci>
 81f61e7:	e8 bb 41 ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f61ec:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81f61ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f61f3:	89 04 24             	mov    %eax,(%esp)
 81f61f6:	e8 19 2a 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f61fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81f6200:	eb 1b                	jmp    81f621d <_ZN21DisPatcher_SetPVPTeam12dispatch_sigEP5CUserR9PacketBuf+0x1fd>
 81f6202:	89 d3                	mov    %edx,%ebx
 81f6204:	89 c6                	mov    %eax,%esi
 81f6206:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f6209:	89 04 24             	mov    %eax,(%esp)
 81f620c:	e8 6f 7c 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6211:	89 f0                	mov    %esi,%eax
 81f6213:	89 da                	mov    %ebx,%edx
 81f6215:	89 04 24             	mov    %eax,(%esp)
 81f6218:	e8 33 d5 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f621d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81f6220:	89 04 24             	mov    %eax,(%esp)
 81f6223:	e8 58 7c 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f6228:	89 d8                	mov    %ebx,%eax
 81f622a:	83 c4 40             	add    $0x40,%esp
 81f622d:	5b                   	pop    %ebx
 81f622e:	5e                   	pop    %esi
 81f622f:	5d                   	pop    %ebp
 81f6230:	c3                   	ret
 81f6231:	90                   	nop

```

```c
// DisPatcher_SetPVPTeam::dispatch_sig @ 0x81f6020

/* DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPTeam::dispatch_sig(DisPatcher_SetPVPTeam *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  PvPMapInfo local_38 [4];
  char local_34;
  PacketGuard local_30 [27];
  char local_15;
  PvP_Room *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 6) {
    return 0;
  }
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 081f6062 to 081f61fa has its CatchHandler @ 081f6202 */
  cVar1 = PacketBuf::get_byte(param_2,&local_15);
  if (cVar1 == '\x01') {
    local_14 = (PvP_Room *)CUser::GetPVPRoom(param_1);
    if (local_14 == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x82c3,"virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      if (local_15 == '\x04') {
        PvPMapInfo::PvPMapInfo(local_38);
        iVar2 = PvP_Room::GetRequestedMapNo(local_14);
        CMapList::GetPvpMapInfo(iVar2,local_38);
        if (local_34 != '\x01') {
          uVar3 = LineFunc(0x82ca,
                           "virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
          goto LAB_081f621d;
        }
      }
      local_10 = PvP_Room::set_pvp_mode(local_14,param_1,(int)local_15);
      if (local_10 < 1) {
        PvP_Room::make_seat_info(local_14,(char *)local_30,0xffff);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_30);
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x39);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_10);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send(param_1,local_30);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = LineFunc(0x82be,"virtual int DisPatcher_SetPVPTeam::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
LAB_081f621d:
  PacketGuard::~PacketGuard(local_30);
  return uVar3;
}

```


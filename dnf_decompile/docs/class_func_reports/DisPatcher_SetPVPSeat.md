# DisPatcher_SetPVPSeat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f5eba DisPatcher_SetPVPSeat::dispatch_sig  [0x081f5eba-0x81f601f] ===
 81f5eba:	55                   	push   %ebp
 81f5ebb:	89 e5                	mov    %esp,%ebp
 81f5ebd:	83 ec 48             	sub    $0x48,%esp
 81f5ec0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5ec3:	89 04 24             	mov    %eax,(%esp)
 81f5ec6:	e8 c1 44 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f5ecb:	83 f8 05             	cmp    $0x5,%eax
 81f5ece:	0f 9e c0             	setle  %al
 81f5ed1:	84 c0                	test   %al,%al
 81f5ed3:	74 0a                	je     81f5edf <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x25>
 81f5ed5:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5eda:	e9 3f 01 00 00       	jmp    81f601e <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x164>
 81f5edf:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 81f5ee2:	83 c0 0d             	add    $0xd,%eax
 81f5ee5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5ee9:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5eec:	89 04 24             	mov    %eax,(%esp)
 81f5eef:	e8 2e 70 39 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81f5ef4:	83 f0 01             	xor    $0x1,%eax
 81f5ef7:	84 c0                	test   %al,%al
 81f5ef9:	75 10                	jne    81f5f0b <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x51>
 81f5efb:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81f5eff:	84 c0                	test   %al,%al
 81f5f01:	78 08                	js     81f5f0b <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x51>
 81f5f03:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81f5f07:	3c 07                	cmp    $0x7,%al
 81f5f09:	7e 07                	jle    81f5f12 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x58>
 81f5f0b:	b8 01 00 00 00       	mov    $0x1,%eax
 81f5f10:	eb 05                	jmp    81f5f17 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x5d>
 81f5f12:	b8 00 00 00 00       	mov    $0x0,%eax
 81f5f17:	84 c0                	test   %al,%al
 81f5f19:	74 29                	je     81f5f44 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x8a>
 81f5f1b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5f22:	00 
 81f5f23:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5f2a:	00 
 81f5f2b:	c7 44 24 04 a0 00 bd 	movl   $0x8bd00a0,0x4(%esp)
 81f5f32:	08 
 81f5f33:	c7 04 24 a4 82 00 00 	movl   $0x82a4,(%esp)
 81f5f3a:	e8 98 a9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5f3f:	e9 da 00 00 00       	jmp    81f601e <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x164>
 81f5f44:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 81f5f47:	83 c0 0e             	add    $0xe,%eax
 81f5f4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5f4e:	8b 45 10             	mov    0x10(%ebp),%eax
 81f5f51:	89 04 24             	mov    %eax,(%esp)
 81f5f54:	e8 17 70 39 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81f5f59:	83 f0 01             	xor    $0x1,%eax
 81f5f5c:	84 c0                	test   %al,%al
 81f5f5e:	74 29                	je     81f5f89 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 81f5f60:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5f67:	00 
 81f5f68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5f6f:	00 
 81f5f70:	c7 44 24 04 a0 00 bd 	movl   $0x8bd00a0,0x4(%esp)
 81f5f77:	08 
 81f5f78:	c7 04 24 a6 82 00 00 	movl   $0x82a6,(%esp)
 81f5f7f:	e8 53 a9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5f84:	e9 95 00 00 00       	jmp    81f601e <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x164>
 81f5f89:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5f8c:	89 04 24             	mov    %eax,(%esp)
 81f5f8f:	e8 fa f1 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81f5f94:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f5f97:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f5f9b:	75 26                	jne    81f5fc3 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x109>
 81f5f9d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f5fa4:	00 
 81f5fa5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f5fac:	00 
 81f5fad:	c7 44 24 04 a0 00 bd 	movl   $0x8bd00a0,0x4(%esp)
 81f5fb4:	08 
 81f5fb5:	c7 04 24 a9 82 00 00 	movl   $0x82a9,(%esp)
 81f5fbc:	e8 16 a9 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f5fc1:	eb 5b                	jmp    81f601e <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x164>
 81f5fc3:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 81f5fc7:	0f b6 d0             	movzbl %al,%edx
 81f5fca:	0f b6 45 f2          	movzbl -0xe(%ebp),%eax
 81f5fce:	0f be c0             	movsbl %al,%eax
 81f5fd1:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 81f5fd8:	00 
 81f5fd9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81f5fdd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81f5fe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f5fe4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f5fe8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f5feb:	89 04 24             	mov    %eax,(%esp)
 81f5fee:	e8 7d 70 3e 00       	call   85dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>
 81f5ff3:	83 f0 01             	xor    $0x1,%eax
 81f5ff6:	84 c0                	test   %al,%al
 81f5ff8:	74 1f                	je     81f6019 <_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf+0x15f>
 81f5ffa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f5ffd:	89 04 24             	mov    %eax,(%esp)
 81f6000:	e8 c3 02 3e 00       	call   85d62c8 <_ZN8PvP_Room5resetEv>
 81f6005:	e8 84 61 ed ff       	call   80cc18e <_Z14G_CGameManagerv>
 81f600a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81f600d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f6011:	89 04 24             	mov    %eax,(%esp)
 81f6014:	e8 2f f3 09 00       	call   8295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>
 81f6019:	b8 00 00 00 00       	mov    $0x0,%eax
 81f601e:	c9                   	leave
 81f601f:	c3                   	ret

```

```c
// DisPatcher_SetPVPSeat::dispatch_sig @ 0x81f5eba

/* DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPSeat::dispatch_sig(DisPatcher_SetPVPSeat *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_00;
  char local_12;
  uchar local_11;
  PvP_Room *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 6) {
    uVar4 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_12);
    if (((cVar2 == '\x01') && (-1 < local_12)) && (local_12 < '\b')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0x82a4,"virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      cVar2 = PacketBuf::get_byte(param_2,&local_11);
      if (cVar2 == '\x01') {
        local_10 = (PvP_Room *)CUser::GetPVPRoom(param_1);
        if (local_10 == (PvP_Room *)0x0) {
          uVar4 = LineFunc(0x82a9,
                           "virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
        }
        else {
          cVar2 = PvP_Room::OnSetPVPSeatState(local_10,param_1,(int)local_12,local_11,2);
          if (cVar2 != '\x01') {
            PvP_Room::reset(local_10);
            this_00 = (CGameManager *)G_CGameManager();
            CGameManager::PutPvp(this_00,local_10);
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x82a6,
                         "virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar4;
}

```


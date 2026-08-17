# game_master__CBoosterTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## SendChatMsg

```asm
// === 084aeac6 game_master::CBoosterTest::SendChatMsg  [0x084aeac6-0x84aeb5d] ===
 84aeac6:	55                   	push   %ebp
 84aeac7:	89 e5                	mov    %esp,%ebp
 84aeac9:	56                   	push   %esi
 84aeaca:	53                   	push   %ebx
 84aeacb:	83 ec 30             	sub    $0x30,%esp
 84aeace:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aead1:	89 04 24             	mov    %eax,(%esp)
 84aead4:	e8 73 f2 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84aead9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84aeadc:	89 04 24             	mov    %eax,(%esp)
 84aeadf:	e8 cc f8 bc ff       	call   807e3b0 <strlen@plt>
 84aeae4:	89 c3                	mov    %eax,%ebx
 84aeae6:	e8 bc b8 c2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84aeaeb:	c7 44 24 18 0c 00 00 	movl   $0xc,0x18(%esp)
 84aeaf2:	00 
 84aeaf3:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 84aeafa:	00 
 84aeafb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84aeaff:	8b 55 0c             	mov    0xc(%ebp),%edx
 84aeb02:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84aeb06:	8b 55 08             	mov    0x8(%ebp),%edx
 84aeb09:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aeb0d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84aeb10:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aeb14:	89 04 24             	mov    %eax,(%esp)
 84aeb17:	e8 30 aa 21 00       	call   86c954c <_ZN9GameWorld20make_packet_chat_msgER11PacketGuardP5CUserPcic15ENUM_NOTIPACKET>
 84aeb1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aeb1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aeb23:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeb26:	89 04 24             	mov    %eax,(%esp)
 84aeb29:	e8 8c 9a 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aeb2e:	eb 1b                	jmp    84aeb4b <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc+0x85>
 84aeb30:	89 d3                	mov    %edx,%ebx
 84aeb32:	89 c6                	mov    %eax,%esi
 84aeb34:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aeb37:	89 04 24             	mov    %eax,(%esp)
 84aeb3a:	e8 41 f3 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aeb3f:	89 f0                	mov    %esi,%eax
 84aeb41:	89 da                	mov    %ebx,%edx
 84aeb43:	89 04 24             	mov    %eax,(%esp)
 84aeb46:	e8 05 4c 63 00       	call   8ae3750 <_Unwind_Resume>
 84aeb4b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aeb4e:	89 04 24             	mov    %eax,(%esp)
 84aeb51:	e8 2a f3 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aeb56:	83 c4 30             	add    $0x30,%esp
 84aeb59:	5b                   	pop    %ebx
 84aeb5a:	5e                   	pop    %esi
 84aeb5b:	5d                   	pop    %ebp
 84aeb5c:	c3                   	ret
 84aeb5d:	90                   	nop

```

```c
// game_master::CBoosterTest::SendChatMsg @ 0x84aeac6

/* game_master::CBoosterTest::SendChatMsg(CUser*, char*) */

void game_master::CBoosterTest::SendChatMsg(CUser *param_1,char *param_2)

{
  size_t sVar1;
  GameWorld *pGVar2;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
  sVar1 = strlen(param_2);
                    /* try { // try from 084aeae6 to 084aeb2d has its CatchHandler @ 084aeb30 */
  pGVar2 = (GameWorld *)G_GameWorld();
  GameWorld::make_packet_chat_msg(pGVar2,local_18,param_1,param_2,sVar1,2,0xc);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _selectJewelTypeIndex

```asm
// === 084af3b2 game_master::CBoosterTest::_selectJewelTypeIndex  [0x084af3b2-0x84af503] ===
 84af3b2:	55                   	push   %ebp
 84af3b3:	89 e5                	mov    %esp,%ebp
 84af3b5:	83 ec 78             	sub    $0x78,%esp
 84af3b8:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 84af3bf:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 84af3c6:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84af3cd:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84af3d4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84af3db:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 84af3e2:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 84af3e9:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84af3f0:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 84af3f7:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 84af3fe:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 84af405:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84af40c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84af413:	eb 42                	jmp    84af457 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0xa5>
 84af415:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af418:	01 c0                	add    %eax,%eax
 84af41a:	03 45 10             	add    0x10(%ebp),%eax
 84af41d:	0f b7 00             	movzwl (%eax),%eax
 84af420:	66 85 c0             	test   %ax,%ax
 84af423:	74 2d                	je     84af452 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0xa0>
 84af425:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af428:	01 c0                	add    %eax,%eax
 84af42a:	03 45 10             	add    0x10(%ebp),%eax
 84af42d:	0f b7 00             	movzwl (%eax),%eax
 84af430:	0f b7 c0             	movzwl %ax,%eax
 84af433:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84af436:	89 54 24 08          	mov    %edx,0x8(%esp)
 84af43a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84af43d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af441:	89 04 24             	mov    %eax,(%esp)
 84af444:	e8 9c b5 d7 ff       	call   822a9e5 <_Z39getAvatarEmblemTypeIdxForCompountEmblemtPiRi>
 84af449:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84af44c:	83 7d e8 ff          	cmpl   $0xffffffff,-0x18(%ebp)
 84af450:	eb 01                	jmp    84af453 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0xa1>
 84af452:	90                   	nop
 84af453:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84af457:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af45a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84af45d:	0f 92 c0             	setb   %al
 84af460:	84 c0                	test   %al,%al
 84af462:	75 b1                	jne    84af415 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x63>
 84af464:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84af467:	85 c0                	test   %eax,%eax
 84af469:	75 0a                	jne    84af475 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0xc3>
 84af46b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84af470:	e9 8c 00 00 00       	jmp    84af501 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x14f>
 84af475:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84af47c:	eb 3c                	jmp    84af4ba <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x108>
 84af47e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84af481:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84af484:	b8 10 27 00 00       	mov    $0x2710,%eax
 84af489:	89 c2                	mov    %eax,%edx
 84af48b:	c1 fa 1f             	sar    $0x1f,%edx
 84af48e:	f7 7d a4             	idivl  -0x5c(%ebp)
 84af491:	89 c2                	mov    %eax,%edx
 84af493:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af496:	8b 44 85 c8          	mov    -0x38(%ebp,%eax,4),%eax
 84af49a:	0f af c2             	imul   %edx,%eax
 84af49d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84af4a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af4a3:	8b 55 dc             	mov    -0x24(%ebp),%edx
 84af4a6:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84af4a9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84af4ac:	89 54 85 b4          	mov    %edx,-0x4c(%ebp,%eax,4)
 84af4b0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84af4b3:	01 45 dc             	add    %eax,-0x24(%ebp)
 84af4b6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 84af4ba:	83 7d ec 04          	cmpl   $0x4,-0x14(%ebp)
 84af4be:	0f 9e c0             	setle  %al
 84af4c1:	84 c0                	test   %al,%al
 84af4c3:	75 b9                	jne    84af47e <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0xcc>
 84af4c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84af4c8:	89 04 24             	mov    %eax,(%esp)
 84af4cb:	e8 b7 26 20 00       	call   86b1b87 <_Z12get_rand_inti>
 84af4d0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84af4d3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84af4da:	eb 15                	jmp    84af4f1 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x13f>
 84af4dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84af4df:	8b 44 85 b4          	mov    -0x4c(%ebp,%eax,4),%eax
 84af4e3:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84af4e6:	7e 05                	jle    84af4ed <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x13b>
 84af4e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84af4eb:	eb 14                	jmp    84af501 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x14f>
 84af4ed:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84af4f1:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84af4f5:	0f 9e c0             	setle  %al
 84af4f8:	84 c0                	test   %al,%al
 84af4fa:	75 e0                	jne    84af4dc <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt+0x12a>
 84af4fc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 84af501:	c9                   	leave
 84af502:	c3                   	ret
 84af503:	90                   	nop

```

```c
// game_master::CBoosterTest::_selectJewelTypeIndex @ 0x84af3b2

/* game_master::CBoosterTest::_selectJewelTypeIndex(unsigned int, unsigned short const*) const */

int __thiscall
game_master::CBoosterTest::_selectJewelTypeIndex(CBoosterTest *this,uint param_1,ushort *param_2)

{
  int iVar1;
  int local_54 [13];
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_54[6] = 0;
  local_54[7] = 0;
  local_54[8] = 0;
  local_54[9] = 0;
  local_54[10] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[5] = 0;
  local_54[0] = 0;
  local_54[0xb] = 0;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    if (param_2[local_20] != 0) {
      local_1c = getAvatarEmblemTypeIdxForCompountEmblem(param_2[local_20],local_54 + 6,local_54);
    }
  }
  if (local_54[0] != 0) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      local_14 = local_54[local_18 + 6] * (int)(10000 / (longlong)local_54[0]);
      local_54[local_18 + 1] = local_14 + local_54[0xb];
      local_54[0xb] = local_54[0xb] + local_14;
    }
    iVar1 = get_rand_int(local_54[0xb]);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (iVar1 < local_54[local_10 + 1]) {
        return local_10;
      }
    }
  }
  return -1;
}

```

---

## execute

```asm
// === 084aed04 game_master::CBoosterTest::execute  [0x084aed04-0x84af0d5] ===
 84aed04:	55                   	push   %ebp
 84aed05:	89 e5                	mov    %esp,%ebp
 84aed07:	57                   	push   %edi
 84aed08:	56                   	push   %esi
 84aed09:	53                   	push   %ebx
 84aed0a:	81 ec 7c 74 01 00    	sub    $0x1747c,%esp
 84aed10:	8b 45 08             	mov    0x8(%ebp),%eax
 84aed13:	89 04 24             	mov    %eax,(%esp)
 84aed16:	e8 9f 52 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aed1b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84aed1e:	8d 95 ad fe ff ff    	lea    -0x153(%ebp),%edx
 84aed24:	bb ff 00 00 00       	mov    $0xff,%ebx
 84aed29:	b8 00 00 00 00       	mov    $0x0,%eax
 84aed2e:	89 d1                	mov    %edx,%ecx
 84aed30:	83 e1 01             	and    $0x1,%ecx
 84aed33:	85 c9                	test   %ecx,%ecx
 84aed35:	74 08                	je     84aed3f <_ZN11game_master12CBoosterTest7executeEv+0x3b>
 84aed37:	88 02                	mov    %al,(%edx)
 84aed39:	83 c2 01             	add    $0x1,%edx
 84aed3c:	83 eb 01             	sub    $0x1,%ebx
 84aed3f:	89 d1                	mov    %edx,%ecx
 84aed41:	83 e1 02             	and    $0x2,%ecx
 84aed44:	85 c9                	test   %ecx,%ecx
 84aed46:	74 09                	je     84aed51 <_ZN11game_master12CBoosterTest7executeEv+0x4d>
 84aed48:	66 89 02             	mov    %ax,(%edx)
 84aed4b:	83 c2 02             	add    $0x2,%edx
 84aed4e:	83 eb 02             	sub    $0x2,%ebx
 84aed51:	89 d9                	mov    %ebx,%ecx
 84aed53:	c1 e9 02             	shr    $0x2,%ecx
 84aed56:	89 d7                	mov    %edx,%edi
 84aed58:	f3 ab                	rep stos %eax,%es:(%edi)
 84aed5a:	89 fa                	mov    %edi,%edx
 84aed5c:	89 d9                	mov    %ebx,%ecx
 84aed5e:	83 e1 02             	and    $0x2,%ecx
 84aed61:	85 c9                	test   %ecx,%ecx
 84aed63:	74 06                	je     84aed6b <_ZN11game_master12CBoosterTest7executeEv+0x67>
 84aed65:	66 89 02             	mov    %ax,(%edx)
 84aed68:	83 c2 02             	add    $0x2,%edx
 84aed6b:	89 d9                	mov    %ebx,%ecx
 84aed6d:	83 e1 01             	and    $0x1,%ecx
 84aed70:	85 c9                	test   %ecx,%ecx
 84aed72:	74 05                	je     84aed79 <_ZN11game_master12CBoosterTest7executeEv+0x75>
 84aed74:	88 02                	mov    %al,(%edx)
 84aed76:	83 c2 01             	add    $0x1,%edx
 84aed79:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84aed7f:	ba 18 73 01 00       	mov    $0x17318,%edx
 84aed84:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aed88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aed8f:	00 
 84aed90:	89 04 24             	mov    %eax,(%esp)
 84aed93:	e8 28 ef bc ff       	call   807dcc0 <memset@plt>
 84aed98:	c7 44 24 04 fc ff c7 	movl   $0x8c7fffc,0x4(%esp)
 84aed9f:	08 
 84aeda0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aeda3:	89 04 24             	mov    %eax,(%esp)
 84aeda6:	e8 1b fd ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aedab:	8b 45 08             	mov    0x8(%ebp),%eax
 84aedae:	8b 40 08             	mov    0x8(%eax),%eax
 84aedb1:	83 f8 ff             	cmp    $0xffffffff,%eax
 84aedb4:	75 18                	jne    84aedce <_ZN11game_master12CBoosterTest7executeEv+0xca>
 84aedb6:	c7 44 24 04 21 00 c8 	movl   $0x8c80021,0x4(%esp)
 84aedbd:	08 
 84aedbe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aedc1:	89 04 24             	mov    %eax,(%esp)
 84aedc4:	e8 fd fc ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aedc9:	e9 fd 02 00 00       	jmp    84af0cb <_ZN11game_master12CBoosterTest7executeEv+0x3c7>
 84aedce:	8b 45 08             	mov    0x8(%ebp),%eax
 84aedd1:	8b 58 08             	mov    0x8(%eax),%ebx
 84aedd4:	e8 c2 d3 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84aedd9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84aeddd:	89 04 24             	mov    %eax,(%esp)
 84aede0:	e8 4d 0c eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84aede5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84aede8:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 84aedec:	75 18                	jne    84aee06 <_ZN11game_master12CBoosterTest7executeEv+0x102>
 84aedee:	c7 44 24 04 3c 00 c8 	movl   $0x8c8003c,0x4(%esp)
 84aedf5:	08 
 84aedf6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aedf9:	89 04 24             	mov    %eax,(%esp)
 84aedfc:	e8 c5 fc ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aee01:	e9 c5 02 00 00       	jmp    84af0cb <_ZN11game_master12CBoosterTest7executeEv+0x3c7>
 84aee06:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee09:	8b 40 0c             	mov    0xc(%eax),%eax
 84aee0c:	3d 40 42 0f 00       	cmp    $0xf4240,%eax
 84aee11:	7f 0a                	jg     84aee1d <_ZN11game_master12CBoosterTest7executeEv+0x119>
 84aee13:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee16:	8b 40 0c             	mov    0xc(%eax),%eax
 84aee19:	85 c0                	test   %eax,%eax
 84aee1b:	79 18                	jns    84aee35 <_ZN11game_master12CBoosterTest7executeEv+0x131>
 84aee1d:	c7 44 24 04 58 00 c8 	movl   $0x8c80058,0x4(%esp)
 84aee24:	08 
 84aee25:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aee28:	89 04 24             	mov    %eax,(%esp)
 84aee2b:	e8 96 fc ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aee30:	e9 96 02 00 00       	jmp    84af0cb <_ZN11game_master12CBoosterTest7executeEv+0x3c7>
 84aee35:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee38:	8b 40 0c             	mov    0xc(%eax),%eax
 84aee3b:	85 c0                	test   %eax,%eax
 84aee3d:	75 0a                	jne    84aee49 <_ZN11game_master12CBoosterTest7executeEv+0x145>
 84aee3f:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee42:	c7 40 0c 10 27 00 00 	movl   $0x2710,0xc(%eax)
 84aee49:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee4c:	8b 40 0c             	mov    0xc(%eax),%eax
 84aee4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aee53:	c7 44 24 04 db fd c7 	movl   $0x8c7fddb,0x4(%esp)
 84aee5a:	08 
 84aee5b:	8d 45 c7             	lea    -0x39(%ebp),%eax
 84aee5e:	89 04 24             	mov    %eax,(%esp)
 84aee61:	e8 da f5 bc ff       	call   807e440 <sprintf@plt>
 84aee66:	8d 45 c7             	lea    -0x39(%ebp),%eax
 84aee69:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aee6d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aee70:	89 04 24             	mov    %eax,(%esp)
 84aee73:	e8 4e fc ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aee78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aee7b:	89 04 24             	mov    %eax,(%esp)
 84aee7e:	e8 c5 1d c6 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84aee83:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aee87:	8b 45 08             	mov    0x8(%ebp),%eax
 84aee8a:	89 04 24             	mov    %eax,(%esp)
 84aee8d:	e8 3a 0e 00 00       	call   84afccc <_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi>
 84aee92:	88 45 e6             	mov    %al,-0x1a(%ebp)
 84aee95:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aee98:	89 04 24             	mov    %eax,(%esp)
 84aee9b:	e8 c4 7d c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84aeea0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aeea3:	8b 00                	mov    (%eax),%eax
 84aeea5:	83 c0 0c             	add    $0xc,%eax
 84aeea8:	8b 10                	mov    (%eax),%edx
 84aeeaa:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aeead:	89 04 24             	mov    %eax,(%esp)
 84aeeb0:	ff d2                	call   *%edx
 84aeeb2:	83 e8 06             	sub    $0x6,%eax
 84aeeb5:	83 f8 15             	cmp    $0x15,%eax
 84aeeb8:	0f 87 be 00 00 00    	ja     84aef7c <_ZN11game_master12CBoosterTest7executeEv+0x278>
 84aeebe:	8b 04 85 30 01 c8 08 	mov    0x8c80130(,%eax,4),%eax
 84aeec5:	ff e0                	jmp    *%eax
 84aeec7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aeeca:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aeece:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aeed1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aeed5:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeed8:	89 04 24             	mov    %eax,(%esp)
 84aeedb:	e8 f6 0a 00 00       	call   84af9d6 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aeee0:	e9 b8 00 00 00       	jmp    84aef9d <_ZN11game_master12CBoosterTest7executeEv+0x299>
 84aeee5:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 84aeee9:	74 1e                	je     84aef09 <_ZN11game_master12CBoosterTest7executeEv+0x205>
 84aeeeb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aeeee:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aeef2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aeef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aeef9:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeefc:	89 04 24             	mov    %eax,(%esp)
 84aeeff:	e8 18 0e 00 00       	call   84afd1c <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aef04:	e9 94 00 00 00       	jmp    84aef9d <_ZN11game_master12CBoosterTest7executeEv+0x299>
 84aef09:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aef0c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aef10:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aef13:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aef17:	8b 45 08             	mov    0x8(%ebp),%eax
 84aef1a:	89 04 24             	mov    %eax,(%esp)
 84aef1d:	e8 86 0c 00 00       	call   84afba8 <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aef22:	eb 79                	jmp    84aef9d <_ZN11game_master12CBoosterTest7executeEv+0x299>
 84aef24:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aef27:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aef2b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aef2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aef32:	8b 45 08             	mov    0x8(%ebp),%eax
 84aef35:	89 04 24             	mov    %eax,(%esp)
 84aef38:	e8 fd 0e 00 00       	call   84afe3a <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aef3d:	eb 5e                	jmp    84aef9d <_ZN11game_master12CBoosterTest7executeEv+0x299>
 84aef3f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aef42:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aef46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84aef49:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aef4d:	8b 45 08             	mov    0x8(%ebp),%eax
 84aef50:	89 04 24             	mov    %eax,(%esp)
 84aef53:	e8 7e 01 00 00       	call   84af0d6 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aef58:	83 f0 01             	xor    $0x1,%eax
 84aef5b:	84 c0                	test   %al,%al
 84aef5d:	74 3d                	je     84aef9c <_ZN11game_master12CBoosterTest7executeEv+0x298>
 84aef5f:	8b 45 08             	mov    0x8(%ebp),%eax
 84aef62:	89 04 24             	mov    %eax,(%esp)
 84aef65:	e8 50 50 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aef6a:	c7 44 24 04 7c 00 c8 	movl   $0x8c8007c,0x4(%esp)
 84aef71:	08 
 84aef72:	89 04 24             	mov    %eax,(%esp)
 84aef75:	e8 4c fb ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aef7a:	eb 21                	jmp    84aef9d <_ZN11game_master12CBoosterTest7executeEv+0x299>
 84aef7c:	8b 45 08             	mov    0x8(%ebp),%eax
 84aef7f:	89 04 24             	mov    %eax,(%esp)
 84aef82:	e8 33 50 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aef87:	c7 44 24 04 99 00 c8 	movl   $0x8c80099,0x4(%esp)
 84aef8e:	08 
 84aef8f:	89 04 24             	mov    %eax,(%esp)
 84aef92:	e8 2f fb ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84aef97:	e9 24 01 00 00       	jmp    84af0c0 <_ZN11game_master12CBoosterTest7executeEv+0x3bc>
 84aef9c:	90                   	nop
 84aef9d:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 84aefa1:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 84aefa8:	00 
 84aefa9:	c7 44 24 04 b4 00 c8 	movl   $0x8c800b4,0x4(%esp)
 84aefb0:	08 
 84aefb1:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84aefb7:	89 04 24             	mov    %eax,(%esp)
 84aefba:	e8 e1 e8 bc ff       	call   807d8a0 <memcpy@plt>
 84aefbf:	e9 c2 00 00 00       	jmp    84af086 <_ZN11game_master12CBoosterTest7executeEv+0x382>
 84aefc4:	80 7d e6 00          	cmpb   $0x0,-0x1a(%ebp)
 84aefc8:	74 1e                	je     84aefe8 <_ZN11game_master12CBoosterTest7executeEv+0x2e4>
 84aefca:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aefcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aefd1:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84aefd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aefdb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aefde:	89 04 24             	mov    %eax,(%esp)
 84aefe1:	e8 16 08 00 00       	call   84af7fc <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84aefe6:	eb 1c                	jmp    84af004 <_ZN11game_master12CBoosterTest7executeEv+0x300>
 84aefe8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84aefeb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aefef:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84aeff5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aeff9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84aeffc:	89 04 24             	mov    %eax,(%esp)
 84aefff:	e8 00 05 00 00       	call   84af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84af004:	8b 45 08             	mov    0x8(%ebp),%eax
 84af007:	8b 50 0c             	mov    0xc(%eax),%edx
 84af00a:	8b 45 08             	mov    0x8(%ebp),%eax
 84af00d:	8b 40 08             	mov    0x8(%eax),%eax
 84af010:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84af014:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af018:	c7 44 24 04 f2 00 c8 	movl   $0x8c800f2,0x4(%esp)
 84af01f:	08 
 84af020:	8d 85 ad fe ff ff    	lea    -0x153(%ebp),%eax
 84af026:	89 04 24             	mov    %eax,(%esp)
 84af029:	e8 12 f4 bc ff       	call   807e440 <sprintf@plt>
 84af02e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af031:	89 04 24             	mov    %eax,(%esp)
 84af034:	e8 87 b3 e4 ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 84af039:	84 c0                	test   %al,%al
 84af03b:	74 04                	je     84af041 <_ZN11game_master12CBoosterTest7executeEv+0x33d>
 84af03d:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 84af041:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 84af045:	8d 95 95 8b fe ff    	lea    -0x1746b(%ebp),%edx
 84af04b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84af04f:	8d 95 ad fe ff ff    	lea    -0x153(%ebp),%edx
 84af055:	89 54 24 08          	mov    %edx,0x8(%esp)
 84af059:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af05d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84af060:	89 04 24             	mov    %eax,(%esp)
 84af063:	e8 8a fb ff ff       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84af068:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 84af06f:	00 
 84af070:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84af077:	00 
 84af078:	8d 85 95 8b fe ff    	lea    -0x1746b(%ebp),%eax
 84af07e:	89 04 24             	mov    %eax,(%esp)
 84af081:	e8 3a ec bc ff       	call   807dcc0 <memset@plt>
 84af086:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 84af08a:	0f 85 34 ff ff ff    	jne    84aefc4 <_ZN11game_master12CBoosterTest7executeEv+0x2c0>
 84af090:	c7 44 24 04 04 01 c8 	movl   $0x8c80104,0x4(%esp)
 84af097:	08 
 84af098:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84af09b:	89 04 24             	mov    %eax,(%esp)
 84af09e:	e8 23 fa ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84af0a3:	eb 1b                	jmp    84af0c0 <_ZN11game_master12CBoosterTest7executeEv+0x3bc>
 84af0a5:	89 d3                	mov    %edx,%ebx
 84af0a7:	89 c6                	mov    %eax,%esi
 84af0a9:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af0ac:	89 04 24             	mov    %eax,(%esp)
 84af0af:	e8 12 7a c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84af0b4:	89 f0                	mov    %esi,%eax
 84af0b6:	89 da                	mov    %ebx,%edx
 84af0b8:	89 04 24             	mov    %eax,(%esp)
 84af0bb:	e8 90 46 63 00       	call   8ae3750 <_Unwind_Resume>
 84af0c0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af0c3:	89 04 24             	mov    %eax,(%esp)
 84af0c6:	e8 fb 79 c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84af0cb:	81 c4 7c 74 01 00    	add    $0x1747c,%esp
 84af0d1:	5b                   	pop    %ebx
 84af0d2:	5e                   	pop    %esi
 84af0d3:	5f                   	pop    %edi
 84af0d4:	5d                   	pop    %ebp
 84af0d5:	c3                   	ret

```

```c
// game_master::CBoosterTest::execute @ 0x84aed04

/* game_master::CBoosterTest::execute() */

void __thiscall game_master::CBoosterTest::execute(CBoosterTest *this)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char acStack_1746f [95000];
  char local_157;
  char local_156 [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_58 [27];
  char local_3d [21];
  CUser *local_28;
  CItem *local_24;
  char local_1e;
  bool local_1d;
  
  bVar9 = 0;
  local_28 = (CUser *)CCommand::GetUser((CCommand *)this);
  pcVar6 = &local_157;
  uVar7 = 0xff;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_157 = '\0';
    pcVar6 = local_156;
    uVar7 = 0xfe;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  memset(acStack_1746f,0,95000);
  SendChatMsg(local_28,&DAT_08c7fffc);
  if (*(int *)(this + 8) == -1) {
    SendChatMsg(local_28,&DAT_08c80021);
    return;
  }
  iVar2 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if (local_24 == (CItem *)0x0) {
    SendChatMsg(local_28,&DAT_08c8003c);
    return;
  }
  if ((1000000 < *(int *)(this + 0xc)) || (*(int *)(this + 0xc) < 0)) {
    SendChatMsg(local_28,&DAT_08c80058);
    return;
  }
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0xc) = 10000;
  }
  sprintf(local_3d,&DAT_08c7fddb,*(undefined4 *)(this + 0xc));
  SendChatMsg(local_28,local_3d);
  iVar2 = CItem::get_index(local_24);
  local_1e = is_gold_lottery_item(this,iVar2);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_58);
                    /* try { // try from 084aeeb0 to 084af0a2 has its CatchHandler @ 084af0a5 */
  uVar3 = (**(code **)(*(int *)local_24 + 0xc))(local_24);
  switch(uVar3) {
  case 6:
  case 7:
  case 0xd:
    if (local_1e == '\0') {
      getJarResult((CItem *)this,(map *)local_24);
    }
    else {
      get_gold_lottery_result((CItem *)this,(map *)local_24);
    }
    break;
  default:
    pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
    SendChatMsg(pCVar4,&DAT_08c80099);
    goto LAB_084af0c0;
  case 0xf:
  case 0x10:
    getBoosterResult((CItem *)this,(map *)local_24);
    break;
  case 0x14:
    cVar1 = getCompoundEmblemResult(this,local_24,(map *)local_58);
    if (cVar1 != '\x01') {
      pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
      SendChatMsg(pCVar4,&DAT_08c8007c);
    }
    break;
  case 0x1a:
  case 0x1b:
    getRandomboxResult((CItem *)this,(map *)local_24);
  }
  local_1d = true;
  memcpy(acStack_1746f,"item_id\titem_name\trarity\titem_cnt\tprice\tsell_price\tusable_lv\n",0x3e);
  while (local_1d != false) {
    if (local_1e == '\0') {
      makeFileContents(local_28,acStack_1746f,(map *)local_58);
    }
    else {
      make_file_gold_contents(local_28,acStack_1746f,(map *)local_58);
    }
    sprintf(&local_157,"lottery_%d_%d.txt",*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
    cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                      (local_58);
    if (cVar1 != '\0') {
      local_1d = false;
    }
    printClient(local_28,local_1d,&local_157,acStack_1746f);
    memset(acStack_1746f,0,95000);
  }
  SendChatMsg(local_28,&DAT_08c80104);
LAB_084af0c0:
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_58);
  return;
}

```

---

## getBoosterResult

```asm
// === 084af9d6 game_master::CBoosterTest::getBoosterResult  [0x084af9d6-0x84afba7] ===
 84af9d6:	55                   	push   %ebp
 84af9d7:	89 e5                	mov    %esp,%ebp
 84af9d9:	56                   	push   %esi
 84af9da:	53                   	push   %ebx
 84af9db:	83 ec 60             	sub    $0x60,%esp
 84af9de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af9e1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84af9e4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84af9e7:	89 04 24             	mov    %eax,(%esp)
 84af9ea:	e8 b9 20 c6 ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 84af9ef:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84af9f6:	e9 67 01 00 00       	jmp    84afb62 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x18c>
 84af9fb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84af9fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afa02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84afa05:	89 04 24             	mov    %eax,(%esp)
 84afa08:	e8 51 fd 05 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 84afa0d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84afa10:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84afa13:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afa17:	89 04 24             	mov    %eax,(%esp)
 84afa1a:	e8 fb 20 c6 ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 84afa1f:	83 ec 04             	sub    $0x4,%esp
 84afa22:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84afa25:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afa29:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84afa2c:	89 04 24             	mov    %eax,(%esp)
 84afa2f:	e8 0a 21 c6 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84afa34:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84afa37:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 84afa3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afa3e:	89 04 24             	mov    %eax,(%esp)
 84afa41:	e8 12 21 c6 ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 84afa46:	83 ec 04             	sub    $0x4,%esp
 84afa49:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84afa4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afa50:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84afa53:	89 04 24             	mov    %eax,(%esp)
 84afa56:	e8 e3 20 c6 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84afa5b:	e9 d9 00 00 00       	jmp    84afb39 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x163>
 84afa60:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84afa63:	89 04 24             	mov    %eax,(%esp)
 84afa66:	e8 ab 4f 00 00       	call   84b4a16 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 84afa6b:	8b 00                	mov    (%eax),%eax
 84afa6d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84afa70:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84afa73:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84afa76:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afa7a:	8b 55 10             	mov    0x10(%ebp),%edx
 84afa7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afa81:	89 04 24             	mov    %eax,(%esp)
 84afa84:	e8 65 d8 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84afa89:	83 ec 04             	sub    $0x4,%esp
 84afa8c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84afa8f:	8b 55 10             	mov    0x10(%ebp),%edx
 84afa92:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afa96:	89 04 24             	mov    %eax,(%esp)
 84afa99:	e8 7c d8 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84afa9e:	83 ec 04             	sub    $0x4,%esp
 84afaa1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84afaa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afaa8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84afaab:	89 04 24             	mov    %eax,(%esp)
 84afaae:	e8 15 a9 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84afab3:	84 c0                	test   %al,%al
 84afab5:	74 16                	je     84afacd <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xf7>
 84afab7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84afaba:	89 04 24             	mov    %eax,(%esp)
 84afabd:	e8 7e d8 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84afac2:	8b 50 04             	mov    0x4(%eax),%edx
 84afac5:	83 c2 01             	add    $0x1,%edx
 84afac8:	89 50 04             	mov    %edx,0x4(%eax)
 84afacb:	eb 61                	jmp    84afb2e <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x158>
 84afacd:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 84afad4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84afad7:	89 04 24             	mov    %eax,(%esp)
 84afada:	e8 37 4f 00 00       	call   84b4a16 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEdeEv>
 84afadf:	8b 00                	mov    (%eax),%eax
 84afae1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84afae4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84afae7:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84afaea:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afaee:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84afaf1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afaf5:	89 04 24             	mov    %eax,(%esp)
 84afaf8:	e8 44 92 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84afafd:	83 ec 04             	sub    $0x4,%esp
 84afb00:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84afb03:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afb07:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84afb0a:	89 04 24             	mov    %eax,(%esp)
 84afb0d:	e8 0e 72 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84afb12:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afb15:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84afb18:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afb1c:	8b 55 10             	mov    0x10(%ebp),%edx
 84afb1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afb23:	89 04 24             	mov    %eax,(%esp)
 84afb26:	e8 25 72 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84afb2b:	83 ec 04             	sub    $0x4,%esp
 84afb2e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84afb31:	89 04 24             	mov    %eax,(%esp)
 84afb34:	e8 71 20 c6 ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 84afb39:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84afb3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afb40:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84afb43:	89 04 24             	mov    %eax,(%esp)
 84afb46:	e8 e2 80 d8 ff       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84afb4b:	84 c0                	test   %al,%al
 84afb4d:	0f 85 0d ff ff ff    	jne    84afa60 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x8a>
 84afb53:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84afb56:	89 04 24             	mov    %eax,(%esp)
 84afb59:	e8 c2 4e 00 00       	call   84b4a20 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5clearEv>
 84afb5e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84afb62:	8b 45 08             	mov    0x8(%ebp),%eax
 84afb65:	8b 40 0c             	mov    0xc(%eax),%eax
 84afb68:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84afb6b:	0f 9f c0             	setg   %al
 84afb6e:	84 c0                	test   %al,%al
 84afb70:	0f 85 85 fe ff ff    	jne    84af9fb <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x25>
 84afb76:	eb 1b                	jmp    84afb93 <_ZN11game_master12CBoosterTest16getBoosterResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1bd>
 84afb78:	89 d3                	mov    %edx,%ebx
 84afb7a:	89 c6                	mov    %eax,%esi
 84afb7c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84afb7f:	89 04 24             	mov    %eax,(%esp)
 84afb82:	e8 35 1f c6 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 84afb87:	89 f0                	mov    %esi,%eax
 84afb89:	89 da                	mov    %ebx,%edx
 84afb8b:	89 04 24             	mov    %eax,(%esp)
 84afb8e:	e8 bd 3b 63 00       	call   8ae3750 <_Unwind_Resume>
 84afb93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84afb96:	89 04 24             	mov    %eax,(%esp)
 84afb99:	e8 1e 1f c6 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 84afb9e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84afba1:	83 c4 00             	add    $0x0,%esp
 84afba4:	5b                   	pop    %ebx
 84afba5:	5e                   	pop    %esi
 84afba6:	5d                   	pop    %ebp
 84afba7:	c3                   	ret

```

```c
// game_master::CBoosterTest::getBoosterResult @ 0x84af9d6

/* game_master::CBoosterTest::getBoosterResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getBoosterResult(CItem *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  _Rb_tree_iterator<std::pair<int_const,int>> local_5c [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_58 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_54 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_50 [12];
  __normal_iterator local_44 [4];
  __normal_iterator local_40 [4];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  map *local_14;
  int local_10;
  
  local_14 = param_2;
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            (local_50);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
                    /* try { // try from 084afa08 to 084afb5d has its CatchHandler @ 084afb78 */
    CStackableItem::getBoosterItem((CStackableItem *)local_14,(vector *)local_50);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_54,local_44);
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
    __gnu_cxx::
    __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
    ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_58,local_40);
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_54,local_58);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
               ::operator*(local_54);
      local_3c = *puVar3;
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_5c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_5c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                        ::operator*(local_54);
        local_18 = *piVar5;
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_5c);
        *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      }
      __gnu_cxx::
      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
      ::operator++(local_54);
    }
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::clear
              (local_50);
  }
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            (local_50);
  return;
}

```

---

## getCompoundEmblemResult

```asm
// === 084af0d6 game_master::CBoosterTest::getCompoundEmblemResult  [0x084af0d6-0x84af3b1] ===
 84af0d6:	55                   	push   %ebp
 84af0d7:	89 e5                	mov    %esp,%ebp
 84af0d9:	56                   	push   %esi
 84af0da:	53                   	push   %ebx
 84af0db:	83 ec 70             	sub    $0x70,%esp
 84af0de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af0e1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84af0e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af0e7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84af0ea:	c7 45 e0 02 00 00 00 	movl   $0x2,-0x20(%ebp)
 84af0f1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84af0f4:	89 04 24             	mov    %eax,(%esp)
 84af0f7:	e8 2c d9 d7 ff       	call   822ca28 <_ZNK14CStackableItem20getJewelTargetSocketEv>
 84af0fc:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 84af100:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84af103:	89 04 24             	mov    %eax,(%esp)
 84af106:	e8 1d d9 d7 ff       	call   822ca28 <_ZNK14CStackableItem20getJewelTargetSocketEv>
 84af10b:	66 89 45 ba          	mov    %ax,-0x46(%ebp)
 84af10f:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 84af116:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84af119:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af11d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84af124:	00 
 84af125:	8b 45 08             	mov    0x8(%ebp),%eax
 84af128:	89 04 24             	mov    %eax,(%esp)
 84af12b:	e8 82 02 00 00       	call   84af3b2 <_ZNK11game_master12CBoosterTest21_selectJewelTypeIndexEjPKt>
 84af130:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84af133:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 84af137:	0f 94 c0             	sete   %al
 84af13a:	84 c0                	test   %al,%al
 84af13c:	74 0a                	je     84af148 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x72>
 84af13e:	b8 00 00 00 00       	mov    $0x0,%eax
 84af143:	e9 5f 02 00 00       	jmp    84af3a7 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2d1>
 84af148:	e8 4e d0 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84af14d:	89 c3                	mov    %eax,%ebx
 84af14f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84af152:	89 04 24             	mov    %eax,(%esp)
 84af155:	e8 fa 1a c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84af15a:	89 c2                	mov    %eax,%edx
 84af15c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84af15f:	89 d0                	mov    %edx,%eax
 84af161:	01 c0                	add    %eax,%eax
 84af163:	01 d0                	add    %edx,%eax
 84af165:	01 c0                	add    %eax,%eax
 84af167:	01 c8                	add    %ecx,%eax
 84af169:	05 08 02 00 00       	add    $0x208,%eax
 84af16e:	8b 44 83 0c          	mov    0xc(%ebx,%eax,4),%eax
 84af172:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84af175:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 84af178:	e8 1e d0 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84af17d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84af181:	89 04 24             	mov    %eax,(%esp)
 84af184:	e8 a9 08 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84af189:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84af18c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84af190:	74 17                	je     84af1a9 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xd3>
 84af192:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af195:	8b 00                	mov    (%eax),%eax
 84af197:	83 c0 0c             	add    $0xc,%eax
 84af19a:	8b 10                	mov    (%eax),%edx
 84af19c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af19f:	89 04 24             	mov    %eax,(%esp)
 84af1a2:	ff d2                	call   *%edx
 84af1a4:	83 f8 10             	cmp    $0x10,%eax
 84af1a7:	74 07                	je     84af1b0 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xda>
 84af1a9:	b8 01 00 00 00       	mov    $0x1,%eax
 84af1ae:	eb 05                	jmp    84af1b5 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xdf>
 84af1b0:	b8 00 00 00 00       	mov    $0x0,%eax
 84af1b5:	84 c0                	test   %al,%al
 84af1b7:	74 0a                	je     84af1c3 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xed>
 84af1b9:	b8 00 00 00 00       	mov    $0x0,%eax
 84af1be:	e9 e4 01 00 00       	jmp    84af3a7 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2d1>
 84af1c3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84af1ca:	e9 bf 01 00 00       	jmp    84af38e <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2b8>
 84af1cf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af1d2:	89 04 24             	mov    %eax,(%esp)
 84af1d5:	e8 ce 28 c6 ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 84af1da:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af1dd:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84af1e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af1e4:	89 04 24             	mov    %eax,(%esp)
 84af1e7:	e8 72 05 06 00       	call   850f75e <_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE>
 84af1ec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84af1ef:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84af1f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af1f6:	89 04 24             	mov    %eax,(%esp)
 84af1f9:	e8 1c 29 c6 ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 84af1fe:	83 ec 04             	sub    $0x4,%esp
 84af201:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84af204:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af208:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af20b:	89 04 24             	mov    %eax,(%esp)
 84af20e:	e8 2b 29 c6 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84af213:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84af216:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84af219:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af21d:	89 04 24             	mov    %eax,(%esp)
 84af220:	e8 33 29 c6 ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 84af225:	83 ec 04             	sub    $0x4,%esp
 84af228:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84af22b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af22f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84af232:	89 04 24             	mov    %eax,(%esp)
 84af235:	e8 04 29 c6 ff       	call   8111b3e <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 84af23a:	e9 09 01 00 00       	jmp    84af348 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x272>
 84af23f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af242:	89 04 24             	mov    %eax,(%esp)
 84af245:	e8 76 29 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af24a:	8b 00                	mov    (%eax),%eax
 84af24c:	89 c3                	mov    %eax,%ebx
 84af24e:	e8 48 cf c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84af253:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84af257:	89 04 24             	mov    %eax,(%esp)
 84af25a:	e8 d3 07 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84af25f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84af262:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84af266:	0f 84 d0 00 00 00    	je     84af33c <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x266>
 84af26c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af26f:	89 04 24             	mov    %eax,(%esp)
 84af272:	e8 49 29 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af277:	8b 00                	mov    (%eax),%eax
 84af279:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84af27c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84af27f:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84af282:	89 54 24 08          	mov    %edx,0x8(%esp)
 84af286:	8b 55 10             	mov    0x10(%ebp),%edx
 84af289:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af28d:	89 04 24             	mov    %eax,(%esp)
 84af290:	e8 59 e0 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84af295:	83 ec 04             	sub    $0x4,%esp
 84af298:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84af29b:	8b 55 10             	mov    0x10(%ebp),%edx
 84af29e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af2a2:	89 04 24             	mov    %eax,(%esp)
 84af2a5:	e8 70 e0 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84af2aa:	83 ec 04             	sub    $0x4,%esp
 84af2ad:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84af2b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af2b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84af2b7:	89 04 24             	mov    %eax,(%esp)
 84af2ba:	e8 09 b1 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84af2bf:	84 c0                	test   %al,%al
 84af2c1:	74 3f                	je     84af302 <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x22c>
 84af2c3:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af2c6:	89 04 24             	mov    %eax,(%esp)
 84af2c9:	e8 f2 28 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af2ce:	8b 00                	mov    (%eax),%eax
 84af2d0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84af2d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84af2d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af2da:	8b 45 10             	mov    0x10(%ebp),%eax
 84af2dd:	89 04 24             	mov    %eax,(%esp)
 84af2e0:	e8 c7 41 ce ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 84af2e5:	89 c3                	mov    %eax,%ebx
 84af2e7:	8b 33                	mov    (%ebx),%esi
 84af2e9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af2ec:	89 04 24             	mov    %eax,(%esp)
 84af2ef:	e8 cc 28 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af2f4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84af2f8:	0f b7 c0             	movzwl %ax,%eax
 84af2fb:	8d 04 06             	lea    (%esi,%eax,1),%eax
 84af2fe:	89 03                	mov    %eax,(%ebx)
 84af300:	eb 3b                	jmp    84af33d <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x267>
 84af302:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af305:	89 04 24             	mov    %eax,(%esp)
 84af308:	e8 b3 28 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af30d:	8b 00                	mov    (%eax),%eax
 84af30f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84af312:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84af315:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af319:	8b 45 10             	mov    0x10(%ebp),%eax
 84af31c:	89 04 24             	mov    %eax,(%esp)
 84af31f:	e8 88 41 ce ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 84af324:	89 c3                	mov    %eax,%ebx
 84af326:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af329:	89 04 24             	mov    %eax,(%esp)
 84af32c:	e8 8f 28 c6 ff       	call   8111bc0 <_ZNK9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 84af331:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84af335:	0f b7 c0             	movzwl %ax,%eax
 84af338:	89 03                	mov    %eax,(%ebx)
 84af33a:	eb 01                	jmp    84af33d <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x267>
 84af33c:	90                   	nop
 84af33d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af340:	89 04 24             	mov    %eax,(%esp)
 84af343:	e8 62 28 c6 ff       	call   8111baa <_ZN9__gnu_cxx17__normal_iteratorIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 84af348:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84af34b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af34f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84af352:	89 04 24             	mov    %eax,(%esp)
 84af355:	e8 d3 88 d8 ff       	call   8237c2d <_ZN9__gnu_cxxneIPK28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 84af35a:	84 c0                	test   %al,%al
 84af35c:	0f 85 dd fe ff ff    	jne    84af23f <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x169>
 84af362:	eb 1b                	jmp    84af37f <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2a9>
 84af364:	89 d3                	mov    %edx,%ebx
 84af366:	89 c6                	mov    %eax,%esi
 84af368:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af36b:	89 04 24             	mov    %eax,(%esp)
 84af36e:	e8 49 27 c6 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 84af373:	89 f0                	mov    %esi,%eax
 84af375:	89 da                	mov    %ebx,%edx
 84af377:	89 04 24             	mov    %eax,(%esp)
 84af37a:	e8 d1 43 63 00       	call   8ae3750 <_Unwind_Resume>
 84af37f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 84af382:	89 04 24             	mov    %eax,(%esp)
 84af385:	e8 32 27 c6 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 84af38a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84af38e:	8b 45 08             	mov    0x8(%ebp),%eax
 84af391:	8b 40 0c             	mov    0xc(%eax),%eax
 84af394:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84af397:	0f 9f c0             	setg   %al
 84af39a:	84 c0                	test   %al,%al
 84af39c:	0f 85 2d fe ff ff    	jne    84af1cf <_ZN11game_master12CBoosterTest23getCompoundEmblemResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xf9>
 84af3a2:	b8 01 00 00 00       	mov    $0x1,%eax
 84af3a7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84af3aa:	83 c4 00             	add    $0x0,%esp
 84af3ad:	5b                   	pop    %ebx
 84af3ae:	5e                   	pop    %esi
 84af3af:	5d                   	pop    %ebp
 84af3b0:	c3                   	ret
 84af3b1:	90                   	nop

```

```c
// game_master::CBoosterTest::getCompoundEmblemResult @ 0x84af0d6

/* game_master::CBoosterTest::getCompoundEmblemResult(CItem const*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

undefined4 __thiscall
game_master::CBoosterTest::getCompoundEmblemResult(CBoosterTest *this,CItem *param_1,map *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  CDataManager *pCVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint *puVar9;
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_60 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_5c [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_58 [12];
  ushort local_4c;
  undefined2 local_4a;
  __normal_iterator local_48 [4];
  __normal_iterator local_44 [4];
  _Rb_tree_iterator local_40 [4];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  int local_34;
  int local_30;
  CItem *local_2c;
  CItem *local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  CStackableItem *local_18;
  int local_14;
  int local_10;
  
  local_2c = param_1;
  local_28 = param_1;
  local_24 = 2;
  local_4c = CStackableItem::getJewelTargetSocket((CStackableItem *)param_1);
  local_4a = CStackableItem::getJewelTargetSocket((CStackableItem *)local_28);
  local_20 = 0xffffffff;
  local_20 = _selectJewelTypeIndex(this,2,&local_4c);
  if (local_20 != -1) {
    iVar3 = G_CDataManager();
    iVar4 = CItem::get_grade(local_2c);
    iVar3 = *(int *)(iVar3 + (iVar4 * 6 + local_20) * 4 + 0x82c);
    local_1c = iVar3;
    pCVar5 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(pCVar5,iVar3);
    if ((local_18 == (CStackableItem *)0x0) ||
       (iVar3 = (**(code **)(*(int *)local_18 + 0xc))(local_18), iVar3 != 0x10)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar6 = 0;
    }
    else {
      for (local_14 = 0; local_14 < *(int *)(this + 0xc); local_14 = local_14 + 1) {
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        vector(local_58);
                    /* try { // try from 084af1e7 to 084af359 has its CatchHandler @ 084af364 */
        CStackableItem::getBoosterItem(local_18,(vector *)local_58);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        begin();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_5c,local_48);
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end
                  ();
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::__normal_iterator<stStackableBoosterItemInfo_t*>(local_60,local_44);
        while (bVar2 = __gnu_cxx::operator!=(local_5c,local_60), bVar2) {
          piVar7 = (int *)__gnu_cxx::
                          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                          ::operator->(local_5c);
          iVar3 = *piVar7;
          pCVar5 = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::find_item(pCVar5,iVar3);
          if (local_10 != 0) {
            puVar8 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                     ::operator->(local_5c);
            local_3c = *puVar8;
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                      ((int *)local_40);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38)
            ;
            cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_38,local_40);
            if (cVar1 == '\0') {
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              local_30 = *piVar7;
              puVar9 = (uint *)std::
                               map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               ::operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                             *)param_2,&local_30);
              iVar3 = __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_5c);
              *puVar9 = (uint)*(ushort *)(iVar3 + 8);
            }
            else {
              piVar7 = (int *)__gnu_cxx::
                              __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                              ::operator->(local_5c);
              local_34 = *piVar7;
              piVar7 = (int *)std::
                              map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                              operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                          *)param_2,&local_34);
              iVar3 = *piVar7;
              iVar4 = __gnu_cxx::
                      __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                      ::operator->(local_5c);
              *piVar7 = iVar3 + (uint)*(ushort *)(iVar4 + 8);
            }
          }
          __gnu_cxx::
          __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
          ::operator++(local_5c);
        }
        std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
        ~vector(local_58);
      }
      uVar6 = 1;
    }
    return uVar6;
  }
  return 0;
}

```

---

## getJarResult

```asm
// === 084afba8 game_master::CBoosterTest::getJarResult  [0x084afba8-0x84afccb] ===
 84afba8:	55                   	push   %ebp
 84afba9:	89 e5                	mov    %esp,%ebp
 84afbab:	56                   	push   %esi
 84afbac:	53                   	push   %ebx
 84afbad:	83 c4 80             	add    $0xffffff80,%esp
 84afbb0:	8d 45 8b             	lea    -0x75(%ebp),%eax
 84afbb3:	89 04 24             	mov    %eax,(%esp)
 84afbb6:	e8 99 bc c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84afbbb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84afbc2:	e9 e6 00 00 00       	jmp    84afcad <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x105>
 84afbc7:	8d 75 8b             	lea    -0x75(%ebp),%esi
 84afbca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84afbcd:	89 04 24             	mov    %eax,(%esp)
 84afbd0:	e8 73 10 c6 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84afbd5:	89 c3                	mov    %eax,%ebx
 84afbd7:	e8 bf c5 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84afbdc:	8b 40 0c             	mov    0xc(%eax),%eax
 84afbdf:	89 74 24 08          	mov    %esi,0x8(%esp)
 84afbe3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84afbe7:	89 04 24             	mov    %eax,(%esp)
 84afbea:	e8 41 26 06 00       	call   8512230 <_ZN9CItemList14get_lotto_itemEiPc>
 84afbef:	8b 45 8d             	mov    -0x73(%ebp),%eax
 84afbf2:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84afbf5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84afbf8:	8d 55 cc             	lea    -0x34(%ebp),%edx
 84afbfb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afbff:	8b 55 10             	mov    0x10(%ebp),%edx
 84afc02:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afc06:	89 04 24             	mov    %eax,(%esp)
 84afc09:	e8 e0 d6 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84afc0e:	83 ec 04             	sub    $0x4,%esp
 84afc11:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afc14:	8b 55 10             	mov    0x10(%ebp),%edx
 84afc17:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afc1b:	89 04 24             	mov    %eax,(%esp)
 84afc1e:	e8 f7 d6 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84afc23:	83 ec 04             	sub    $0x4,%esp
 84afc26:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afc29:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afc2d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84afc30:	89 04 24             	mov    %eax,(%esp)
 84afc33:	e8 90 a7 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84afc38:	84 c0                	test   %al,%al
 84afc3a:	74 16                	je     84afc52 <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xaa>
 84afc3c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 84afc3f:	89 04 24             	mov    %eax,(%esp)
 84afc42:	e8 f9 d6 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84afc47:	8b 50 04             	mov    0x4(%eax),%edx
 84afc4a:	83 c2 01             	add    $0x1,%edx
 84afc4d:	89 50 04             	mov    %edx,0x4(%eax)
 84afc50:	eb 57                	jmp    84afca9 <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x101>
 84afc52:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 84afc59:	8b 45 8d             	mov    -0x73(%ebp),%eax
 84afc5c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84afc5f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84afc62:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84afc65:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afc69:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84afc6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afc70:	89 04 24             	mov    %eax,(%esp)
 84afc73:	e8 c9 90 d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84afc78:	83 ec 04             	sub    $0x4,%esp
 84afc7b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84afc7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afc82:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84afc85:	89 04 24             	mov    %eax,(%esp)
 84afc88:	e8 93 70 c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84afc8d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84afc90:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84afc93:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afc97:	8b 55 10             	mov    0x10(%ebp),%edx
 84afc9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afc9e:	89 04 24             	mov    %eax,(%esp)
 84afca1:	e8 aa 70 c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84afca6:	83 ec 04             	sub    $0x4,%esp
 84afca9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84afcad:	8b 45 08             	mov    0x8(%ebp),%eax
 84afcb0:	8b 40 0c             	mov    0xc(%eax),%eax
 84afcb3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84afcb6:	0f 9f c0             	setg   %al
 84afcb9:	84 c0                	test   %al,%al
 84afcbb:	0f 85 06 ff ff ff    	jne    84afbc7 <_ZN11game_master12CBoosterTest12getJarResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1f>
 84afcc1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84afcc4:	83 c4 00             	add    $0x0,%esp
 84afcc7:	5b                   	pop    %ebx
 84afcc8:	5e                   	pop    %esi
 84afcc9:	5d                   	pop    %ebp
 84afcca:	c3                   	ret
 84afccb:	90                   	nop

```

```c
// game_master::CBoosterTest::getJarResult @ 0x84afba8

/* game_master::CBoosterTest::getJarResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getJarResult(CItem *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Inven_Item local_79 [2];
  int local_77;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  int local_38;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_34 [4];
  pair local_30 [8];
  pair<int_const,int> local_28 [8];
  int local_20 [2];
  undefined4 local_18;
  int local_14;
  int local_10;
  
  Inven_Item::Inven_Item(local_79);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
    iVar2 = CItem::get_index((CItem *)param_2);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_79);
    local_38 = local_77;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_34);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_3c,(_Rb_tree_iterator *)local_34);
    if (cVar1 == '\0') {
      local_18 = 1;
      local_14 = local_77;
      std::make_pair<int,int>(local_20,&local_14);
      std::pair<int_const,int>::pair<int,int>(local_28,(pair *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_30);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_3c);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}

```

---

## getRandomboxResult

```asm
// === 084afe3a game_master::CBoosterTest::getRandomboxResult  [0x084afe3a-0x84b0031] ===
 84afe3a:	55                   	push   %ebp
 84afe3b:	89 e5                	mov    %esp,%ebp
 84afe3d:	56                   	push   %esi
 84afe3e:	53                   	push   %ebx
 84afe3f:	81 ec 90 00 00 00    	sub    $0x90,%esp
 84afe45:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 84afe4b:	89 04 24             	mov    %eax,(%esp)
 84afe4e:	e8 01 ba c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84afe53:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84afe56:	89 04 24             	mov    %eax,(%esp)
 84afe59:	e8 de 4b 00 00       	call   84b4a3c <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EEC1Ev>
 84afe5e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84afe65:	e9 82 01 00 00       	jmp    84affec <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1b2>
 84afe6a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84afe6d:	89 04 24             	mov    %eax,(%esp)
 84afe70:	e8 39 4c 00 00       	call   84b4aae <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EE5clearEv>
 84afe75:	8b 45 0c             	mov    0xc(%ebp),%eax
 84afe78:	8d 55 bc             	lea    -0x44(%ebp),%edx
 84afe7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afe7f:	89 04 24             	mov    %eax,(%esp)
 84afe82:	e8 53 ef 05 00       	call   850edda <_ZN14CStackableItem25get_multibox_lottery_itemEPSt6vectorISt4pairI10Inven_ItembESaIS3_EE>
 84afe87:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84afe8e:	e9 3c 01 00 00       	jmp    84affcf <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x195>
 84afe93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84afe96:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afe9a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84afe9d:	89 04 24             	mov    %eax,(%esp)
 84afea0:	e8 45 4c 00 00       	call   84b4aea <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EEixEj>
 84afea5:	8b 10                	mov    (%eax),%edx
 84afea7:	89 95 7b ff ff ff    	mov    %edx,-0x85(%ebp)
 84afead:	8b 50 04             	mov    0x4(%eax),%edx
 84afeb0:	89 95 7f ff ff ff    	mov    %edx,-0x81(%ebp)
 84afeb6:	8b 50 08             	mov    0x8(%eax),%edx
 84afeb9:	89 55 83             	mov    %edx,-0x7d(%ebp)
 84afebc:	8b 50 0c             	mov    0xc(%eax),%edx
 84afebf:	89 55 87             	mov    %edx,-0x79(%ebp)
 84afec2:	8b 50 10             	mov    0x10(%eax),%edx
 84afec5:	89 55 8b             	mov    %edx,-0x75(%ebp)
 84afec8:	8b 50 14             	mov    0x14(%eax),%edx
 84afecb:	89 55 8f             	mov    %edx,-0x71(%ebp)
 84afece:	8b 50 18             	mov    0x18(%eax),%edx
 84afed1:	89 55 93             	mov    %edx,-0x6d(%ebp)
 84afed4:	8b 50 1c             	mov    0x1c(%eax),%edx
 84afed7:	89 55 97             	mov    %edx,-0x69(%ebp)
 84afeda:	8b 50 20             	mov    0x20(%eax),%edx
 84afedd:	89 55 9b             	mov    %edx,-0x65(%ebp)
 84afee0:	8b 50 24             	mov    0x24(%eax),%edx
 84afee3:	89 55 9f             	mov    %edx,-0x61(%ebp)
 84afee6:	8b 50 28             	mov    0x28(%eax),%edx
 84afee9:	89 55 a3             	mov    %edx,-0x5d(%ebp)
 84afeec:	8b 50 2c             	mov    0x2c(%eax),%edx
 84afeef:	89 55 a7             	mov    %edx,-0x59(%ebp)
 84afef2:	8b 50 30             	mov    0x30(%eax),%edx
 84afef5:	89 55 ab             	mov    %edx,-0x55(%ebp)
 84afef8:	8b 50 34             	mov    0x34(%eax),%edx
 84afefb:	89 55 af             	mov    %edx,-0x51(%ebp)
 84afefe:	8b 50 38             	mov    0x38(%eax),%edx
 84aff01:	89 55 b3             	mov    %edx,-0x4d(%ebp)
 84aff04:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 84aff08:	88 45 b7             	mov    %al,-0x49(%ebp)
 84aff0b:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 84aff11:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84aff14:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84aff17:	8d 55 c8             	lea    -0x38(%ebp),%edx
 84aff1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aff1e:	8b 55 10             	mov    0x10(%ebp),%edx
 84aff21:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aff25:	89 04 24             	mov    %eax,(%esp)
 84aff28:	e8 c1 d3 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84aff2d:	83 ec 04             	sub    $0x4,%esp
 84aff30:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84aff33:	8b 55 10             	mov    0x10(%ebp),%edx
 84aff36:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aff3a:	89 04 24             	mov    %eax,(%esp)
 84aff3d:	e8 d8 d3 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84aff42:	83 ec 04             	sub    $0x4,%esp
 84aff45:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84aff48:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aff4c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84aff4f:	89 04 24             	mov    %eax,(%esp)
 84aff52:	e8 71 a4 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84aff57:	84 c0                	test   %al,%al
 84aff59:	74 16                	je     84aff71 <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x137>
 84aff5b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84aff5e:	89 04 24             	mov    %eax,(%esp)
 84aff61:	e8 da d3 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84aff66:	8b 50 04             	mov    0x4(%eax),%edx
 84aff69:	83 c2 01             	add    $0x1,%edx
 84aff6c:	89 50 04             	mov    %edx,0x4(%eax)
 84aff6f:	eb 5a                	jmp    84affcb <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x191>
 84aff71:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 84aff78:	8b 85 7d ff ff ff    	mov    -0x83(%ebp),%eax
 84aff7e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84aff81:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84aff84:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84aff87:	89 54 24 08          	mov    %edx,0x8(%esp)
 84aff8b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84aff8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84aff92:	89 04 24             	mov    %eax,(%esp)
 84aff95:	e8 a7 8d d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84aff9a:	83 ec 04             	sub    $0x4,%esp
 84aff9d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84affa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84affa4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84affa7:	89 04 24             	mov    %eax,(%esp)
 84affaa:	e8 71 6d c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84affaf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84affb2:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84affb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84affb9:	8b 55 10             	mov    0x10(%ebp),%edx
 84affbc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84affc0:	89 04 24             	mov    %eax,(%esp)
 84affc3:	e8 88 6d c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84affc8:	83 ec 04             	sub    $0x4,%esp
 84affcb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84affcf:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84affd2:	89 04 24             	mov    %eax,(%esp)
 84affd5:	e8 f0 4a 00 00       	call   84b4aca <_ZNKSt6vectorISt4pairI10Inven_ItembESaIS2_EE4sizeEv>
 84affda:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84affdd:	0f 97 c0             	seta   %al
 84affe0:	84 c0                	test   %al,%al
 84affe2:	0f 85 ab fe ff ff    	jne    84afe93 <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x59>
 84affe8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84affec:	8b 45 08             	mov    0x8(%ebp),%eax
 84affef:	8b 40 0c             	mov    0xc(%eax),%eax
 84afff2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84afff5:	0f 9f c0             	setg   %al
 84afff8:	84 c0                	test   %al,%al
 84afffa:	0f 85 6a fe ff ff    	jne    84afe6a <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x30>
 84b0000:	eb 1b                	jmp    84b001d <_ZN11game_master12CBoosterTest18getRandomboxResultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1e3>
 84b0002:	89 d3                	mov    %edx,%ebx
 84b0004:	89 c6                	mov    %eax,%esi
 84b0006:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84b0009:	89 04 24             	mov    %eax,(%esp)
 84b000c:	e8 3f 4a 00 00       	call   84b4a50 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EED1Ev>
 84b0011:	89 f0                	mov    %esi,%eax
 84b0013:	89 da                	mov    %ebx,%edx
 84b0015:	89 04 24             	mov    %eax,(%esp)
 84b0018:	e8 33 37 63 00       	call   8ae3750 <_Unwind_Resume>
 84b001d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 84b0020:	89 04 24             	mov    %eax,(%esp)
 84b0023:	e8 28 4a 00 00       	call   84b4a50 <_ZNSt6vectorISt4pairI10Inven_ItembESaIS2_EED1Ev>
 84b0028:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84b002b:	83 c4 00             	add    $0x0,%esp
 84b002e:	5b                   	pop    %ebx
 84b002f:	5e                   	pop    %esi
 84b0030:	5d                   	pop    %ebp
 84b0031:	c3                   	ret

```

```c
// game_master::CBoosterTest::getRandomboxResult @ 0x84afe3a

/* game_master::CBoosterTest::getRandomboxResult(CItem const*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::getRandomboxResult(CItem *param_1,map *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_89;
  undefined2 uStack_87;
  undefined2 local_85;
  undefined2 uStack_83;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined1 local_4d;
  _Rb_tree_iterator<std::pair<int_const,int>> local_4c [4];
  vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>> local_48 [12];
  undefined4 local_3c;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  int local_24 [2];
  undefined4 local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_89);
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::vector
            (local_48);
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0xc); local_14 = local_14 + 1) {
                    /* try { // try from 084afe70 to 084affc7 has its CatchHandler @ 084b0002 */
    std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::clear
              (local_48);
    CStackableItem::get_multibox_lottery_item((CStackableItem *)param_2,(vector *)local_48);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
              size(local_48);
      if (uVar4 <= local_10) break;
      puVar2 = (undefined4 *)
               std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::
               operator[](local_48,local_10);
      local_89 = (undefined2)*puVar2;
      uStack_87 = (undefined2)((uint)*puVar2 >> 0x10);
      local_85 = (undefined2)puVar2[1];
      uStack_83 = (undefined2)((uint)puVar2[1] >> 0x10);
      local_81 = puVar2[2];
      local_7d = puVar2[3];
      local_79 = puVar2[4];
      local_75 = puVar2[5];
      local_71 = puVar2[6];
      local_6d = puVar2[7];
      local_69 = puVar2[8];
      local_65 = puVar2[9];
      local_61 = puVar2[10];
      local_5d = puVar2[0xb];
      local_59 = puVar2[0xc];
      local_55 = puVar2[0xd];
      local_51 = puVar2[0xe];
      local_4d = *(undefined1 *)(puVar2 + 0xf);
      local_3c = CONCAT22(local_85,uStack_87);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_4c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_4c,(_Rb_tree_iterator *)local_38);
      if (cVar1 == '\0') {
        local_1c = 1;
        local_18 = CONCAT22(local_85,uStack_87);
        std::make_pair<int,int>(local_24,&local_18);
        std::pair<int_const,int>::pair<int,int>(local_2c,(pair *)local_24);
        std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_34);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_4c);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      }
      local_10 = local_10 + 1;
    }
  }
  std::vector<std::pair<Inven_Item,bool>,std::allocator<std::pair<Inven_Item,bool>>>::~vector
            (local_48);
  return;
}

```

---

## getRarityStr

```asm
// === 084aea80 game_master::CBoosterTest::getRarityStr  [0x084aea80-0x84aeac5] ===
 84aea80:	55                   	push   %ebp
 84aea81:	89 e5                	mov    %esp,%ebp
 84aea83:	8b 45 08             	mov    0x8(%ebp),%eax
 84aea86:	83 f8 05             	cmp    $0x5,%eax
 84aea89:	77 33                	ja     84aeabe <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x3e>
 84aea8b:	8b 04 85 e0 ff c7 08 	mov    0x8c7ffe0(,%eax,4),%eax
 84aea92:	ff e0                	jmp    *%eax
 84aea94:	b8 ac ff c7 08       	mov    $0x8c7ffac,%eax
 84aea99:	eb 28                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aea9b:	b8 b3 ff c7 08       	mov    $0x8c7ffb3,%eax
 84aeaa0:	eb 21                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aeaa2:	b8 bc ff c7 08       	mov    $0x8c7ffbc,%eax
 84aeaa7:	eb 1a                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aeaa9:	b8 c1 ff c7 08       	mov    $0x8c7ffc1,%eax
 84aeaae:	eb 13                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aeab0:	b8 c8 ff c7 08       	mov    $0x8c7ffc8,%eax
 84aeab5:	eb 0c                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aeab7:	b8 cd ff c7 08       	mov    $0x8c7ffcd,%eax
 84aeabc:	eb 05                	jmp    84aeac3 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY+0x43>
 84aeabe:	b8 d7 ff c7 08       	mov    $0x8c7ffd7,%eax
 84aeac3:	5d                   	pop    %ebp
 84aeac4:	c3                   	ret
 84aeac5:	90                   	nop

```

```c
// game_master::CBoosterTest::getRarityStr @ 0x84aea80

/* game_master::CBoosterTest::getRarityStr(ENUM_RARITY) */

char * game_master::CBoosterTest::getRarityStr(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  case 0:
    pcVar1 = "common";
    break;
  case 1:
    pcVar1 = "uncommon";
    break;
  case 2:
    pcVar1 = "rare";
    break;
  case 3:
    pcVar1 = "unique";
    break;
  case 4:
    pcVar1 = "epic";
    break;
  case 5:
    pcVar1 = "chronicle";
    break;
  default:
    pcVar1 = "unknown";
  }
  return pcVar1;
}

```

---

## get_gold_lottery_result

```asm
// === 084afd1c game_master::CBoosterTest::get_gold_lottery_result  [0x084afd1c-0x84afe39] ===
 84afd1c:	55                   	push   %ebp
 84afd1d:	89 e5                	mov    %esp,%ebp
 84afd1f:	56                   	push   %esi
 84afd20:	53                   	push   %ebx
 84afd21:	83 c4 80             	add    $0xffffff80,%esp
 84afd24:	8d 45 93             	lea    -0x6d(%ebp),%eax
 84afd27:	89 04 24             	mov    %eax,(%esp)
 84afd2a:	e8 25 bb c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84afd2f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84afd36:	e9 e0 00 00 00       	jmp    84afe1b <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xff>
 84afd3b:	8d 75 93             	lea    -0x6d(%ebp),%esi
 84afd3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84afd41:	89 04 24             	mov    %eax,(%esp)
 84afd44:	e8 ff 0e c6 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 84afd49:	89 c3                	mov    %eax,%ebx
 84afd4b:	e8 4b c4 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84afd50:	8b 40 0c             	mov    0xc(%eax),%eax
 84afd53:	89 74 24 08          	mov    %esi,0x8(%esp)
 84afd57:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84afd5b:	89 04 24             	mov    %eax,(%esp)
 84afd5e:	e8 cd 24 06 00       	call   8512230 <_ZN9CItemList14get_lotto_itemEiPc>
 84afd63:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afd66:	8d 55 93             	lea    -0x6d(%ebp),%edx
 84afd69:	83 c2 07             	add    $0x7,%edx
 84afd6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afd70:	8b 55 10             	mov    0x10(%ebp),%edx
 84afd73:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afd77:	89 04 24             	mov    %eax,(%esp)
 84afd7a:	e8 6f d5 c1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 84afd7f:	83 ec 04             	sub    $0x4,%esp
 84afd82:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84afd85:	8b 55 10             	mov    0x10(%ebp),%edx
 84afd88:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afd8c:	89 04 24             	mov    %eax,(%esp)
 84afd8f:	e8 86 d5 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84afd94:	83 ec 04             	sub    $0x4,%esp
 84afd97:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84afd9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afd9e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afda1:	89 04 24             	mov    %eax,(%esp)
 84afda4:	e8 1f a6 c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84afda9:	84 c0                	test   %al,%al
 84afdab:	74 16                	je     84afdc3 <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa7>
 84afdad:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84afdb0:	89 04 24             	mov    %eax,(%esp)
 84afdb3:	e8 88 d5 c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84afdb8:	8b 50 04             	mov    0x4(%eax),%edx
 84afdbb:	83 c2 01             	add    $0x1,%edx
 84afdbe:	89 50 04             	mov    %edx,0x4(%eax)
 84afdc1:	eb 54                	jmp    84afe17 <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xfb>
 84afdc3:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 84afdca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84afdcd:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84afdd0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afdd4:	8d 55 93             	lea    -0x6d(%ebp),%edx
 84afdd7:	83 c2 07             	add    $0x7,%edx
 84afdda:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afdde:	89 04 24             	mov    %eax,(%esp)
 84afde1:	e8 5b 8f d0 ff       	call   81b8d41 <_ZSt9make_pairIiiESt4pairINSt17__decay_and_stripIT_E6__typeENS1_IT0_E6__typeEEOS2_OS5_>
 84afde6:	83 ec 04             	sub    $0x4,%esp
 84afde9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84afdec:	89 44 24 04          	mov    %eax,0x4(%esp)
 84afdf0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84afdf3:	89 04 24             	mov    %eax,(%esp)
 84afdf6:	e8 25 6f c1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 84afdfb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84afdfe:	8d 55 e0             	lea    -0x20(%ebp),%edx
 84afe01:	89 54 24 08          	mov    %edx,0x8(%esp)
 84afe05:	8b 55 10             	mov    0x10(%ebp),%edx
 84afe08:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afe0c:	89 04 24             	mov    %eax,(%esp)
 84afe0f:	e8 3c 6f c1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 84afe14:	83 ec 04             	sub    $0x4,%esp
 84afe17:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84afe1b:	8b 45 08             	mov    0x8(%ebp),%eax
 84afe1e:	8b 40 0c             	mov    0xc(%eax),%eax
 84afe21:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84afe24:	0f 9f c0             	setg   %al
 84afe27:	84 c0                	test   %al,%al
 84afe29:	0f 85 0c ff ff ff    	jne    84afd3b <_ZN11game_master12CBoosterTest23get_gold_lottery_resultEPK5CItemRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1f>
 84afe2f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84afe32:	83 c4 00             	add    $0x0,%esp
 84afe35:	5b                   	pop    %ebx
 84afe36:	5e                   	pop    %esi
 84afe37:	5d                   	pop    %ebp
 84afe38:	c3                   	ret
 84afe39:	90                   	nop

```

```c
// game_master::CBoosterTest::get_gold_lottery_result @ 0x84afd1c

/* game_master::CBoosterTest::get_gold_lottery_result(CItem const*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::get_gold_lottery_result(CItem *param_1,map *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Inven_Item local_71 [7];
  int aiStack_6a [13];
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  Inven_Item::Inven_Item(local_71);
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0xc); local_10 = local_10 + 1) {
    iVar2 = CItem::get_index((CItem *)param_2);
    iVar3 = G_CDataManager();
    CItemList::get_lotto_item(*(CItemList **)(iVar3 + 0xc),iVar2,(char *)local_71);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_34)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      (local_34,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') {
      local_14 = 1;
      std::make_pair<int,int>(local_1c,aiStack_6a);
      std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  return;
}

```

---

## is_gold_lottery_item

```asm
// === 084afccc game_master::CBoosterTest::is_gold_lottery_item  [0x084afccc-0x84afd1b] ===
 84afccc:	55                   	push   %ebp
 84afccd:	89 e5                	mov    %esp,%ebp
 84afccf:	53                   	push   %ebx
 84afcd0:	83 ec 54             	sub    $0x54,%esp
 84afcd3:	8d 45 bb             	lea    -0x45(%ebp),%eax
 84afcd6:	89 04 24             	mov    %eax,(%esp)
 84afcd9:	e8 76 bb c1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84afcde:	8d 5d bb             	lea    -0x45(%ebp),%ebx
 84afce1:	e8 b5 c4 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84afce6:	8b 40 0c             	mov    0xc(%eax),%eax
 84afce9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84afced:	8b 55 0c             	mov    0xc(%ebp),%edx
 84afcf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84afcf4:	89 04 24             	mov    %eax,(%esp)
 84afcf7:	e8 34 25 06 00       	call   8512230 <_ZN9CItemList14get_lotto_itemEiPc>
 84afcfc:	8b 45 bd             	mov    -0x43(%ebp),%eax
 84afcff:	85 c0                	test   %eax,%eax
 84afd01:	75 0e                	jne    84afd11 <_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi+0x45>
 84afd03:	8b 45 c2             	mov    -0x3e(%ebp),%eax
 84afd06:	85 c0                	test   %eax,%eax
 84afd08:	7e 07                	jle    84afd11 <_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi+0x45>
 84afd0a:	b8 01 00 00 00       	mov    $0x1,%eax
 84afd0f:	eb 05                	jmp    84afd16 <_ZN11game_master12CBoosterTest20is_gold_lottery_itemEi+0x4a>
 84afd11:	b8 00 00 00 00       	mov    $0x0,%eax
 84afd16:	83 c4 54             	add    $0x54,%esp
 84afd19:	5b                   	pop    %ebx
 84afd1a:	5d                   	pop    %ebp
 84afd1b:	c3                   	ret

```

```c
// game_master::CBoosterTest::is_gold_lottery_item @ 0x84afccc

/* game_master::CBoosterTest::is_gold_lottery_item(int) */

undefined4 __thiscall
game_master::CBoosterTest::is_gold_lottery_item(CBoosterTest *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  Inven_Item local_49 [2];
  int local_47;
  int local_42;
  
  Inven_Item::Inven_Item(local_49);
  iVar1 = G_CDataManager();
  CItemList::get_lotto_item(*(CItemList **)(iVar1 + 0xc),param_1,(char *)local_49);
  if ((local_47 == 0) && (0 < local_42)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeFileContents

```asm
// === 084af504 game_master::CBoosterTest::makeFileContents  [0x084af504-0x84af7fb] ===
 84af504:	55                   	push   %ebp
 84af505:	89 e5                	mov    %esp,%ebp
 84af507:	57                   	push   %edi
 84af508:	56                   	push   %esi
 84af509:	53                   	push   %ebx
 84af50a:	81 ec 5c 04 00 00    	sub    $0x45c,%esp
 84af510:	8d 9d d8 fb ff ff    	lea    -0x428(%ebp),%ebx
 84af516:	b8 00 00 00 00       	mov    $0x0,%eax
 84af51b:	ba 00 01 00 00       	mov    $0x100,%edx
 84af520:	89 df                	mov    %ebx,%edi
 84af522:	89 d1                	mov    %edx,%ecx
 84af524:	f3 ab                	rep stos %eax,%es:(%edi)
 84af526:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af529:	8b 55 10             	mov    0x10(%ebp),%edx
 84af52c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af530:	89 04 24             	mov    %eax,(%esp)
 84af533:	e8 68 2a ca ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84af538:	83 ec 04             	sub    $0x4,%esp
 84af53b:	e9 81 02 00 00       	jmp    84af7c1 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2bd>
 84af540:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af543:	89 04 24             	mov    %eax,(%esp)
 84af546:	e8 f5 dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af54b:	8b 18                	mov    (%eax),%ebx
 84af54d:	e8 49 cc c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84af552:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84af556:	89 04 24             	mov    %eax,(%esp)
 84af559:	e8 d4 04 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84af55e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84af561:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af564:	89 04 24             	mov    %eax,(%esp)
 84af567:	e8 d4 dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af56c:	8b 00                	mov    (%eax),%eax
 84af56e:	85 c0                	test   %eax,%eax
 84af570:	74 0a                	je     84af57c <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x78>
 84af572:	83 f8 01             	cmp    $0x1,%eax
 84af575:	74 53                	je     84af5ca <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xc6>
 84af577:	e9 9c 00 00 00       	jmp    84af618 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x114>
 84af57c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af57f:	89 04 24             	mov    %eax,(%esp)
 84af582:	e8 b9 dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af587:	8b 58 04             	mov    0x4(%eax),%ebx
 84af58a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af58d:	89 04 24             	mov    %eax,(%esp)
 84af590:	e8 ab dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af595:	8b 00                	mov    (%eax),%eax
 84af597:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84af59b:	c7 44 24 10 d7 ff c7 	movl   $0x8c7ffd7,0x10(%esp)
 84af5a2:	08 
 84af5a3:	c7 44 24 0c 3b fd c7 	movl   $0x8c7fd3b,0xc(%esp)
 84af5aa:	08 
 84af5ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af5af:	c7 44 24 04 88 01 c8 	movl   $0x8c80188,0x4(%esp)
 84af5b6:	08 
 84af5b7:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af5bd:	89 04 24             	mov    %eax,(%esp)
 84af5c0:	e8 7b ee bc ff       	call   807e440 <sprintf@plt>
 84af5c5:	e9 58 01 00 00       	jmp    84af722 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x21e>
 84af5ca:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af5cd:	89 04 24             	mov    %eax,(%esp)
 84af5d0:	e8 6b dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af5d5:	8b 58 04             	mov    0x4(%eax),%ebx
 84af5d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af5db:	89 04 24             	mov    %eax,(%esp)
 84af5de:	e8 5d dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af5e3:	8b 00                	mov    (%eax),%eax
 84af5e5:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84af5e9:	c7 44 24 10 d7 ff c7 	movl   $0x8c7ffd7,0x10(%esp)
 84af5f0:	08 
 84af5f1:	c7 44 24 0c 99 01 c8 	movl   $0x8c80199,0xc(%esp)
 84af5f8:	08 
 84af5f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af5fd:	c7 44 24 04 88 01 c8 	movl   $0x8c80188,0x4(%esp)
 84af604:	08 
 84af605:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af60b:	89 04 24             	mov    %eax,(%esp)
 84af60e:	e8 2d ee bc ff       	call   807e440 <sprintf@plt>
 84af613:	e9 0a 01 00 00       	jmp    84af722 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x21e>
 84af618:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84af61c:	75 4e                	jne    84af66c <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x168>
 84af61e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af621:	89 04 24             	mov    %eax,(%esp)
 84af624:	e8 17 dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af629:	8b 58 04             	mov    0x4(%eax),%ebx
 84af62c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af62f:	89 04 24             	mov    %eax,(%esp)
 84af632:	e8 09 dd c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af637:	8b 00                	mov    (%eax),%eax
 84af639:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84af63d:	c7 44 24 10 d7 ff c7 	movl   $0x8c7ffd7,0x10(%esp)
 84af644:	08 
 84af645:	c7 44 24 0c d7 ff c7 	movl   $0x8c7ffd7,0xc(%esp)
 84af64c:	08 
 84af64d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af651:	c7 44 24 04 88 01 c8 	movl   $0x8c80188,0x4(%esp)
 84af658:	08 
 84af659:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af65f:	89 04 24             	mov    %eax,(%esp)
 84af662:	e8 d9 ed bc ff       	call   807e440 <sprintf@plt>
 84af667:	e9 b6 00 00 00       	jmp    84af722 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x21e>
 84af66c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af66f:	89 04 24             	mov    %eax,(%esp)
 84af672:	e8 77 1c c4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 84af677:	89 85 cc fb ff ff    	mov    %eax,-0x434(%ebp)
 84af67d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af680:	89 04 24             	mov    %eax,(%esp)
 84af683:	e8 8a 3f fc ff       	call   8473612 <_ZNK5CItem12GetSellPriceEv>
 84af688:	89 85 d0 fb ff ff    	mov    %eax,-0x430(%ebp)
 84af68e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af691:	89 04 24             	mov    %eax,(%esp)
 84af694:	e8 b1 d1 d7 ff       	call   822c84a <_ZNK5CItem9get_priceEv>
 84af699:	89 c7                	mov    %eax,%edi
 84af69b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af69e:	89 04 24             	mov    %eax,(%esp)
 84af6a1:	e8 9a dc c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af6a6:	8b 40 04             	mov    0x4(%eax),%eax
 84af6a9:	89 85 d4 fb ff ff    	mov    %eax,-0x42c(%ebp)
 84af6af:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af6b2:	89 04 24             	mov    %eax,(%esp)
 84af6b5:	e8 1c 1c c4 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 84af6ba:	89 04 24             	mov    %eax,(%esp)
 84af6bd:	e8 be f3 ff ff       	call   84aea80 <_ZN11game_master12CBoosterTest12getRarityStrE11ENUM_RARITY>
 84af6c2:	89 c6                	mov    %eax,%esi
 84af6c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84af6c7:	89 04 24             	mov    %eax,(%esp)
 84af6ca:	e8 b3 f6 c6 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 84af6cf:	89 c3                	mov    %eax,%ebx
 84af6d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af6d4:	89 04 24             	mov    %eax,(%esp)
 84af6d7:	e8 64 dc c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af6dc:	8b 00                	mov    (%eax),%eax
 84af6de:	8b 95 cc fb ff ff    	mov    -0x434(%ebp),%edx
 84af6e4:	89 54 24 20          	mov    %edx,0x20(%esp)
 84af6e8:	8b 8d d0 fb ff ff    	mov    -0x430(%ebp),%ecx
 84af6ee:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 84af6f2:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84af6f6:	8b bd d4 fb ff ff    	mov    -0x42c(%ebp),%edi
 84af6fc:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84af700:	89 74 24 10          	mov    %esi,0x10(%esp)
 84af704:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84af708:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af70c:	c7 44 24 04 9e 01 c8 	movl   $0x8c8019e,0x4(%esp)
 84af713:	08 
 84af714:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af71a:	89 04 24             	mov    %eax,(%esp)
 84af71d:	e8 1e ed bc ff       	call   807e440 <sprintf@plt>
 84af722:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af725:	89 04 24             	mov    %eax,(%esp)
 84af728:	e8 83 ec bc ff       	call   807e3b0 <strlen@plt>
 84af72d:	89 c3                	mov    %eax,%ebx
 84af72f:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af735:	89 04 24             	mov    %eax,(%esp)
 84af738:	e8 73 ec bc ff       	call   807e3b0 <strlen@plt>
 84af73d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84af740:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 84af745:	76 18                	jbe    84af75f <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x25b>
 84af747:	c7 44 24 04 03 ff c7 	movl   $0x8c7ff03,0x4(%esp)
 84af74e:	08 
 84af74f:	8b 45 08             	mov    0x8(%ebp),%eax
 84af752:	89 04 24             	mov    %eax,(%esp)
 84af755:	e8 6c f3 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84af75a:	e9 91 00 00 00       	jmp    84af7f0 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2ec>
 84af75f:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af765:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af769:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af76c:	89 04 24             	mov    %eax,(%esp)
 84af76f:	e8 ec e5 bc ff       	call   807dd60 <strcat@plt>
 84af774:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84af77b:	00 
 84af77c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84af783:	00 
 84af784:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 84af78a:	89 04 24             	mov    %eax,(%esp)
 84af78d:	e8 2e e5 bc ff       	call   807dcc0 <memset@plt>
 84af792:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84af795:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84af79c:	00 
 84af79d:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84af7a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af7a4:	89 04 24             	mov    %eax,(%esp)
 84af7a7:	e8 58 95 d0 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 84af7ac:	83 ec 04             	sub    $0x4,%esp
 84af7af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84af7b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af7b6:	8b 45 10             	mov    0x10(%ebp),%eax
 84af7b9:	89 04 24             	mov    %eax,(%esp)
 84af7bc:	e8 19 28 e6 ff       	call   8311fda <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 84af7c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84af7c4:	8b 55 10             	mov    0x10(%ebp),%edx
 84af7c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af7cb:	89 04 24             	mov    %eax,(%esp)
 84af7ce:	e8 47 db c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84af7d3:	83 ec 04             	sub    $0x4,%esp
 84af7d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84af7d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af7dd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 84af7e0:	89 04 24             	mov    %eax,(%esp)
 84af7e3:	e8 e0 ab c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84af7e8:	84 c0                	test   %al,%al
 84af7ea:	0f 85 50 fd ff ff    	jne    84af540 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x3c>
 84af7f0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 84af7f3:	83 c4 00             	add    $0x0,%esp
 84af7f6:	5b                   	pop    %ebx
 84af7f7:	5e                   	pop    %esi
 84af7f8:	5f                   	pop    %edi
 84af7f9:	5d                   	pop    %ebp
 84af7fa:	c3                   	ret
 84af7fb:	90                   	nop

```

```c
// game_master::CBoosterTest::makeFileContents @ 0x84af504

/* game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::makeFileContents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  int *piVar2;
  CDataManager *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  char local_42c [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  undefined4 local_24;
  CItem *local_20;
  
  pcVar12 = local_42c;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_2c);
  while( true ) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c,
                       (_Rb_tree_iterator *)local_28);
    if (cVar1 == '\0') {
      return;
    }
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
    iVar11 = *piVar2;
    this = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this,iVar11);
    piVar2 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
    if (*piVar2 == 0) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,&DAT_08c7fd3b,"unknown",uVar13);
    }
    else if (*piVar2 == 1) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,&DAT_08c80199,"unknown",uVar13);
    }
    else if (local_20 == (CItem *)0x0) {
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\n",*puVar3,"unknown","unknown",uVar13);
    }
    else {
      uVar4 = CItem::getUsableLevel(local_20);
      uVar5 = CItem::GetSellPrice(local_20);
      uVar6 = CItem::get_price(local_20);
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      uVar13 = *(undefined4 *)(iVar11 + 4);
      uVar7 = CItem::get_rarity(local_20);
      uVar7 = getRarityStr(uVar7);
      uVar8 = CItem::GetItemName(local_20);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_2c);
      sprintf(local_42c,"%d\t\"%s\"\t\"%s\"\t%u\t%d\t%d\t%d\n",*puVar3,uVar8,uVar7,uVar13,uVar6,
              uVar5,uVar4);
    }
    sVar9 = strlen(param_2);
    sVar10 = strlen(local_42c);
    if (89999 < sVar9 + sVar10) break;
    strcat(param_2,local_42c);
    memset(local_42c,0,0x400);
    uVar13 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_24,(int)local_2c);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_24,uVar13);
  }
  SendChatMsg(param_1,&DAT_08c7ff03);
  return;
}

```

---

## make_file_gold_contents

```asm
// === 084af7fc game_master::CBoosterTest::make_file_gold_contents  [0x084af7fc-0x84af9d5] ===
 84af7fc:	55                   	push   %ebp
 84af7fd:	89 e5                	mov    %esp,%ebp
 84af7ff:	57                   	push   %edi
 84af800:	53                   	push   %ebx
 84af801:	81 ec 30 04 00 00    	sub    $0x430,%esp
 84af807:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84af80e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84af815:	8d 9d e4 fb ff ff    	lea    -0x41c(%ebp),%ebx
 84af81b:	b8 00 00 00 00       	mov    $0x0,%eax
 84af820:	ba 00 01 00 00       	mov    $0x100,%edx
 84af825:	89 df                	mov    %ebx,%edi
 84af827:	89 d1                	mov    %edx,%ecx
 84af829:	f3 ab                	rep stos %eax,%es:(%edi)
 84af82b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af82e:	8b 55 10             	mov    0x10(%ebp),%edx
 84af831:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af835:	89 04 24             	mov    %eax,(%esp)
 84af838:	e8 63 27 ca ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 84af83d:	83 ec 04             	sub    $0x4,%esp
 84af840:	e9 01 01 00 00       	jmp    84af946 <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x14a>
 84af845:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af848:	89 04 24             	mov    %eax,(%esp)
 84af84b:	e8 f0 da c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af850:	8b 58 04             	mov    0x4(%eax),%ebx
 84af853:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af856:	89 04 24             	mov    %eax,(%esp)
 84af859:	e8 e2 da c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af85e:	8b 00                	mov    (%eax),%eax
 84af860:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84af864:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af868:	c7 44 24 04 b8 01 c8 	movl   $0x8c801b8,0x4(%esp)
 84af86f:	08 
 84af870:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af876:	89 04 24             	mov    %eax,(%esp)
 84af879:	e8 c2 eb bc ff       	call   807e440 <sprintf@plt>
 84af87e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af881:	89 04 24             	mov    %eax,(%esp)
 84af884:	e8 b7 da c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af889:	8b 18                	mov    (%eax),%ebx
 84af88b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af88e:	89 04 24             	mov    %eax,(%esp)
 84af891:	e8 aa da c1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 84af896:	8b 40 04             	mov    0x4(%eax),%eax
 84af899:	0f af c3             	imul   %ebx,%eax
 84af89c:	89 c2                	mov    %eax,%edx
 84af89e:	c1 fa 1f             	sar    $0x1f,%edx
 84af8a1:	01 45 f0             	add    %eax,-0x10(%ebp)
 84af8a4:	11 55 f4             	adc    %edx,-0xc(%ebp)
 84af8a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af8aa:	89 04 24             	mov    %eax,(%esp)
 84af8ad:	e8 fe ea bc ff       	call   807e3b0 <strlen@plt>
 84af8b2:	89 c3                	mov    %eax,%ebx
 84af8b4:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af8ba:	89 04 24             	mov    %eax,(%esp)
 84af8bd:	e8 ee ea bc ff       	call   807e3b0 <strlen@plt>
 84af8c2:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 84af8c5:	3d 8f 5f 01 00       	cmp    $0x15f8f,%eax
 84af8ca:	76 18                	jbe    84af8e4 <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xe8>
 84af8cc:	c7 44 24 04 03 ff c7 	movl   $0x8c7ff03,0x4(%esp)
 84af8d3:	08 
 84af8d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84af8d7:	89 04 24             	mov    %eax,(%esp)
 84af8da:	e8 e7 f1 ff ff       	call   84aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>
 84af8df:	e9 91 00 00 00       	jmp    84af975 <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x179>
 84af8e4:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af8ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af8ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af8f1:	89 04 24             	mov    %eax,(%esp)
 84af8f4:	e8 67 e4 bc ff       	call   807dd60 <strcat@plt>
 84af8f9:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84af900:	00 
 84af901:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84af908:	00 
 84af909:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af90f:	89 04 24             	mov    %eax,(%esp)
 84af912:	e8 a9 e3 bc ff       	call   807dcc0 <memset@plt>
 84af917:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84af91a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84af921:	00 
 84af922:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84af925:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af929:	89 04 24             	mov    %eax,(%esp)
 84af92c:	e8 d3 93 d0 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 84af931:	83 ec 04             	sub    $0x4,%esp
 84af934:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84af937:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af93b:	8b 45 10             	mov    0x10(%ebp),%eax
 84af93e:	89 04 24             	mov    %eax,(%esp)
 84af941:	e8 94 26 e6 ff       	call   8311fda <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 84af946:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84af949:	8b 55 10             	mov    0x10(%ebp),%edx
 84af94c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84af950:	89 04 24             	mov    %eax,(%esp)
 84af953:	e8 c2 d9 c1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 84af958:	83 ec 04             	sub    $0x4,%esp
 84af95b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84af95e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af962:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84af965:	89 04 24             	mov    %eax,(%esp)
 84af968:	e8 5b aa c2 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 84af96d:	84 c0                	test   %al,%al
 84af96f:	0f 85 d0 fe ff ff    	jne    84af845 <_ZN11game_master12CBoosterTest23make_file_gold_contentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x49>
 84af975:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84af978:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84af97b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84af97f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84af983:	c7 44 24 04 cd 01 c8 	movl   $0x8c801cd,0x4(%esp)
 84af98a:	08 
 84af98b:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af991:	89 04 24             	mov    %eax,(%esp)
 84af994:	e8 a7 ea bc ff       	call   807e440 <sprintf@plt>
 84af999:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af99f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84af9a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84af9a6:	89 04 24             	mov    %eax,(%esp)
 84af9a9:	e8 b2 e3 bc ff       	call   807dd60 <strcat@plt>
 84af9ae:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 84af9b5:	00 
 84af9b6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84af9bd:	00 
 84af9be:	8d 85 e4 fb ff ff    	lea    -0x41c(%ebp),%eax
 84af9c4:	89 04 24             	mov    %eax,(%esp)
 84af9c7:	e8 f4 e2 bc ff       	call   807dcc0 <memset@plt>
 84af9cc:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84af9cf:	83 c4 00             	add    $0x0,%esp
 84af9d2:	5b                   	pop    %ebx
 84af9d3:	5f                   	pop    %edi
 84af9d4:	5d                   	pop    %ebp
 84af9d5:	c3                   	ret

```

```c
// game_master::CBoosterTest::make_file_gold_contents @ 0x84af7fc

/* game_master::CBoosterTest::make_file_gold_contents(CUser*, char*, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

void game_master::CBoosterTest::make_file_gold_contents(CUser *param_1,char *param_2,map *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  size_t sVar7;
  int iVar8;
  char *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  char local_420 [1024];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  undefined4 local_18;
  uint local_14;
  int local_10;
  
  local_14 = 0;
  local_10 = 0;
  pcVar9 = local_420;
  for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + 4;
  }
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_20);
  do {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
LAB_084af975:
      sprintf(local_420,"max gold = %I64u \n",local_14,local_10);
      strcat(param_2,local_420);
      memset(local_420,0,0x400);
      return;
    }
    iVar8 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    uVar11 = *(undefined4 *)(iVar8 + 4);
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    sprintf(local_420,"%d gold count = %d \n",*puVar2,uVar11);
    piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    iVar8 = *piVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_20);
    uVar5 = *(int *)(iVar4 + 4) * iVar8;
    bVar10 = CARRY4(local_14,uVar5);
    local_14 = local_14 + uVar5;
    local_10 = local_10 + ((int)uVar5 >> 0x1f) + (uint)bVar10;
    sVar6 = strlen(param_2);
    sVar7 = strlen(local_420);
    if (89999 < sVar6 + sVar7) {
      SendChatMsg(param_1,&DAT_08c7ff03);
      goto LAB_084af975;
    }
    strcat(param_2,local_420);
    memset(local_420,0,0x400);
    uVar11 = 0;
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_18,(int)local_20);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::erase
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)param_3,
               local_18,uVar11);
  } while( true );
}

```

---

## parse

```asm
// === 084aeb5e game_master::CBoosterTest::parse  [0x084aeb5e-0x84aebad] ===
 84aeb5e:	55                   	push   %ebp
 84aeb5f:	89 e5                	mov    %esp,%ebp
 84aeb61:	56                   	push   %esi
 84aeb62:	53                   	push   %ebx
 84aeb63:	83 ec 10             	sub    $0x10,%esp
 84aeb66:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeb69:	89 04 24             	mov    %eax,(%esp)
 84aeb6c:	e8 3f 55 00 00       	call   84b40b0 <_ZN11game_master12CBoosterTest5clearEv>
 84aeb71:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeb74:	8d 70 0c             	lea    0xc(%eax),%esi
 84aeb77:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeb7a:	8d 58 08             	lea    0x8(%eax),%ebx
 84aeb7d:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeb80:	8b 40 04             	mov    0x4(%eax),%eax
 84aeb83:	83 c0 0c             	add    $0xc,%eax
 84aeb86:	89 04 24             	mov    %eax,(%esp)
 84aeb89:	e8 62 79 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84aeb8e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84aeb92:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84aeb96:	c7 44 24 04 97 fd c7 	movl   $0x8c7fd97,0x4(%esp)
 84aeb9d:	08 
 84aeb9e:	89 04 24             	mov    %eax,(%esp)
 84aeba1:	e8 3a ee bc ff       	call   807d9e0 <sscanf@plt>
 84aeba6:	83 c4 10             	add    $0x10,%esp
 84aeba9:	5b                   	pop    %ebx
 84aebaa:	5e                   	pop    %esi
 84aebab:	5d                   	pop    %ebp
 84aebac:	c3                   	ret
 84aebad:	90                   	nop

```

```c
// game_master::CBoosterTest::parse @ 0x84aeb5e

/* game_master::CBoosterTest::parse() */

void __thiscall game_master::CBoosterTest::parse(CBoosterTest *this)

{
  char *__s;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  return;
}

```

---

## printClient

```asm
// === 084aebf2 game_master::CBoosterTest::printClient  [0x084aebf2-0x84aed03] ===
 84aebf2:	55                   	push   %ebp
 84aebf3:	89 e5                	mov    %esp,%ebp
 84aebf5:	56                   	push   %esi
 84aebf6:	53                   	push   %ebx
 84aebf7:	83 ec 30             	sub    $0x30,%esp
 84aebfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84aebfd:	88 45 e4             	mov    %al,-0x1c(%ebp)
 84aec00:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec03:	89 04 24             	mov    %eax,(%esp)
 84aec06:	e8 41 f1 0d 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84aec0b:	c7 44 24 08 3e 01 00 	movl   $0x13e,0x8(%esp)
 84aec12:	00 
 84aec13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aec1a:	00 
 84aec1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec1e:	89 04 24             	mov    %eax,(%esp)
 84aec21:	e8 d6 cc c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84aec26:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 84aec2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aec2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec31:	89 04 24             	mov    %eax,(%esp)
 84aec34:	e8 e7 cc c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84aec39:	8b 45 10             	mov    0x10(%ebp),%eax
 84aec3c:	89 04 24             	mov    %eax,(%esp)
 84aec3f:	e8 6c f7 bc ff       	call   807e3b0 <strlen@plt>
 84aec44:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aec48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec4b:	89 04 24             	mov    %eax,(%esp)
 84aec4e:	e8 e9 cc c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84aec53:	8b 45 10             	mov    0x10(%ebp),%eax
 84aec56:	89 04 24             	mov    %eax,(%esp)
 84aec59:	e8 52 f7 bc ff       	call   807e3b0 <strlen@plt>
 84aec5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aec62:	8b 45 10             	mov    0x10(%ebp),%eax
 84aec65:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aec69:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec6c:	89 04 24             	mov    %eax,(%esp)
 84aec6f:	e8 fc ca d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84aec74:	8b 45 14             	mov    0x14(%ebp),%eax
 84aec77:	89 04 24             	mov    %eax,(%esp)
 84aec7a:	e8 31 f7 bc ff       	call   807e3b0 <strlen@plt>
 84aec7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aec83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aec86:	89 04 24             	mov    %eax,(%esp)
 84aec89:	e8 ae cc c1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84aec8e:	8b 45 14             	mov    0x14(%ebp),%eax
 84aec91:	89 04 24             	mov    %eax,(%esp)
 84aec94:	e8 17 f7 bc ff       	call   807e3b0 <strlen@plt>
 84aec99:	89 44 24 08          	mov    %eax,0x8(%esp)
 84aec9d:	8b 45 14             	mov    0x14(%ebp),%eax
 84aeca0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aeca4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aeca7:	89 04 24             	mov    %eax,(%esp)
 84aecaa:	e8 c1 ca d7 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 84aecaf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84aecb6:	00 
 84aecb7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aecba:	89 04 24             	mov    %eax,(%esp)
 84aecbd:	e8 96 cc c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84aecc2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aecc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aecc9:	8b 45 08             	mov    0x8(%ebp),%eax
 84aeccc:	89 04 24             	mov    %eax,(%esp)
 84aeccf:	e8 e6 98 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84aecd4:	eb 1b                	jmp    84aecf1 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_+0xff>
 84aecd6:	89 d3                	mov    %edx,%ebx
 84aecd8:	89 c6                	mov    %eax,%esi
 84aecda:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aecdd:	89 04 24             	mov    %eax,(%esp)
 84aece0:	e8 9b f1 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aece5:	89 f0                	mov    %esi,%eax
 84aece7:	89 da                	mov    %ebx,%edx
 84aece9:	89 04 24             	mov    %eax,(%esp)
 84aecec:	e8 5f 4a 63 00       	call   8ae3750 <_Unwind_Resume>
 84aecf1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84aecf4:	89 04 24             	mov    %eax,(%esp)
 84aecf7:	e8 84 f1 0d 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84aecfc:	83 c4 30             	add    $0x30,%esp
 84aecff:	5b                   	pop    %ebx
 84aed00:	5e                   	pop    %esi
 84aed01:	5d                   	pop    %ebp
 84aed02:	c3                   	ret
 84aed03:	90                   	nop

```

```c
// game_master::CBoosterTest::printClient @ 0x84aebf2

/* game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*) */

void game_master::CBoosterTest::printClient(CUser *param_1,bool param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084aec21 to 084aecd3 has its CatchHandler @ 084aecd6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x13e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_2);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_3);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_3,sVar1);
  sVar1 = strlen(param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,sVar1);
  sVar1 = strlen(param_4);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_18,param_4,sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## printServer

```asm
// === 084aebae game_master::CBoosterTest::printServer  [0x084aebae-0x84aebf1] ===
 84aebae:	55                   	push   %ebp
 84aebaf:	89 e5                	mov    %esp,%ebp
 84aebb1:	83 ec 28             	sub    $0x28,%esp
 84aebb4:	c7 44 24 04 f8 ff c7 	movl   $0x8c7fff8,0x4(%esp)
 84aebbb:	08 
 84aebbc:	8b 45 08             	mov    0x8(%ebp),%eax
 84aebbf:	89 04 24             	mov    %eax,(%esp)
 84aebc2:	e8 a9 fb bc ff       	call   807e770 <fopen@plt>
 84aebc7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84aebca:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84aebce:	74 1f                	je     84aebef <_ZN11game_master12CBoosterTest11printServerEPKcS2_+0x41>
 84aebd0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aebd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84aebd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84aebda:	89 04 24             	mov    %eax,(%esp)
 84aebdd:	e8 3e fb bc ff       	call   807e720 <fputs@plt>
 84aebe2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aebe5:	89 04 24             	mov    %eax,(%esp)
 84aebe8:	e8 b3 f2 bc ff       	call   807dea0 <fclose@plt>
 84aebed:	eb 01                	jmp    84aebf0 <_ZN11game_master12CBoosterTest11printServerEPKcS2_+0x42>
 84aebef:	90                   	nop
 84aebf0:	c9                   	leave
 84aebf1:	c3                   	ret

```

```c
// game_master::CBoosterTest::printServer @ 0x84aebae

/* game_master::CBoosterTest::printServer(char const*, char const*) */

void game_master::CBoosterTest::printServer(char *param_1,char *param_2)

{
  FILE *__stream;
  
  __stream = fopen(param_1,"wt");
  if (__stream != (FILE *)0x0) {
    fputs(param_2,__stream);
    fclose(__stream);
  }
  return;
}

```


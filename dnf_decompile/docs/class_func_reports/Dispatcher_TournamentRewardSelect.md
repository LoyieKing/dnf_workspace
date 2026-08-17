# Dispatcher_TournamentRewardSelect

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e046c Dispatcher_TournamentRewardSelect::check_error  [0x081e046c-0x81e04f1] ===
 81e046c:	55                   	push   %ebp
 81e046d:	89 e5                	mov    %esp,%ebp
 81e046f:	53                   	push   %ebx
 81e0470:	83 ec 24             	sub    $0x24,%esp
 81e0473:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e0477:	75 07                	jne    81e0480 <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x14>
 81e0479:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e047e:	eb 6b                	jmp    81e04eb <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x7f>
 81e0480:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0483:	89 04 24             	mov    %eax,(%esp)
 81e0486:	e8 01 9f ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e048b:	83 f8 05             	cmp    $0x5,%eax
 81e048e:	0f 95 c0             	setne  %al
 81e0491:	84 c0                	test   %al,%al
 81e0493:	74 07                	je     81e049c <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x30>
 81e0495:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e049a:	eb 4f                	jmp    81e04eb <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x7f>
 81e049c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e049f:	89 04 24             	mov    %eax,(%esp)
 81e04a2:	e8 a7 f9 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81e04a7:	0f bf d8             	movswl %ax,%ebx
 81e04aa:	e8 df bc ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81e04af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e04b3:	89 04 24             	mov    %eax,(%esp)
 81e04b6:	e8 77 4a 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81e04bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e04be:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e04c2:	75 07                	jne    81e04cb <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x5f>
 81e04c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e04c9:	eb 20                	jmp    81e04eb <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x7f>
 81e04cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e04ce:	89 04 24             	mov    %eax,(%esp)
 81e04d1:	e8 d6 d1 3d 00       	call   85bd6ac <_ZN6CParty30GetTournamentDungeonClearStateEv>
 81e04d6:	3c 02                	cmp    $0x2,%al
 81e04d8:	0f 95 c0             	setne  %al
 81e04db:	84 c0                	test   %al,%al
 81e04dd:	74 07                	je     81e04e6 <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x7a>
 81e04df:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81e04e4:	eb 05                	jmp    81e04eb <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE+0x7f>
 81e04e6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e04eb:	83 c4 24             	add    $0x24,%esp
 81e04ee:	5b                   	pop    %ebx
 81e04ef:	5d                   	pop    %ebp
 81e04f0:	c3                   	ret
 81e04f1:	90                   	nop

```

```c
// Dispatcher_TournamentRewardSelect::check_error @ 0x81e046c

/* Dispatcher_TournamentRewardSelect::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_TournamentRewardSelect::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CParty *this;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 5) {
      CUser::GetPartyIndex((CUser *)param_2);
      iVar3 = G_CGameManager();
      this = (CParty *)CGameManager::GetParty(iVar3);
      if (this == (CParty *)0x0) {
        uVar2 = 0xffffffff;
      }
      else {
        cVar1 = CParty::GetTournamentDungeonClearState(this);
        if (cVar1 == '\x02') {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x7fffffff;
        }
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081e00f0 Dispatcher_TournamentRewardSelect::process  [0x081e00f0-0x81e02af] ===
 81e00f0:	55                   	push   %ebp
 81e00f1:	89 e5                	mov    %esp,%ebp
 81e00f3:	56                   	push   %esi
 81e00f4:	53                   	push   %ebx
 81e00f5:	83 ec 30             	sub    $0x30,%esp
 81e00f8:	8b 45 14             	mov    0x14(%ebp),%eax
 81e00fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e00fe:	8b 45 10             	mov    0x10(%ebp),%eax
 81e0101:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e0105:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0108:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e010c:	8b 45 08             	mov    0x8(%ebp),%eax
 81e010f:	89 04 24             	mov    %eax,(%esp)
 81e0112:	e8 55 03 00 00       	call   81e046c <_ZN33Dispatcher_TournamentRewardSelect11check_errorEP5CUserR8MSG_BASE>
 81e0117:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81e011a:	89 42 04             	mov    %eax,0x4(%edx)
 81e011d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0120:	8b 40 04             	mov    0x4(%eax),%eax
 81e0123:	85 c0                	test   %eax,%eax
 81e0125:	7e 0a                	jle    81e0131 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81e0127:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e012c:	e9 75 01 00 00       	jmp    81e02a6 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1b6>
 81e0131:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0134:	8b 40 04             	mov    0x4(%eax),%eax
 81e0137:	85 c0                	test   %eax,%eax
 81e0139:	79 2d                	jns    81e0168 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x78>
 81e013b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e013e:	8b 40 04             	mov    0x4(%eax),%eax
 81e0141:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0148:	00 
 81e0149:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e014d:	c7 44 24 04 60 1a bd 	movl   $0x8bd1a60,0x4(%esp)
 81e0154:	08 
 81e0155:	c7 04 24 15 53 00 00 	movl   $0x5315,(%esp)
 81e015c:	e8 76 07 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0161:	89 c3                	mov    %eax,%ebx
 81e0163:	e9 3e 01 00 00       	jmp    81e02a6 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1b6>
 81e0168:	8b 45 10             	mov    0x10(%ebp),%eax
 81e016b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e016e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0171:	89 04 24             	mov    %eax,(%esp)
 81e0174:	e8 d5 fc 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81e0179:	0f bf d8             	movswl %ax,%ebx
 81e017c:	e8 0d c0 ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81e0181:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e0185:	89 04 24             	mov    %eax,(%esp)
 81e0188:	e8 a5 4d 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81e018d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e0190:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81e0194:	75 2b                	jne    81e01c1 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81e0196:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e019d:	00 
 81e019e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e01a5:	00 
 81e01a6:	c7 44 24 04 60 1a bd 	movl   $0x8bd1a60,0x4(%esp)
 81e01ad:	08 
 81e01ae:	c7 04 24 1c 53 00 00 	movl   $0x531c,(%esp)
 81e01b5:	e8 1d 07 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e01ba:	89 c3                	mov    %eax,%ebx
 81e01bc:	e9 e5 00 00 00       	jmp    81e02a6 <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1b6>
 81e01c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e01c4:	89 04 24             	mov    %eax,(%esp)
 81e01c7:	e8 e0 df ea ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81e01cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e01cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e01d3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e01d6:	89 04 24             	mov    %eax,(%esp)
 81e01d9:	e8 fe cf 3d 00       	call   85bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>
 81e01de:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e01e1:	05 bc 17 00 00       	add    $0x17bc,%eax
 81e01e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e01e9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e01ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e01f0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e01f7:	00 
 81e01f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e01fb:	89 04 24             	mov    %eax,(%esp)
 81e01fe:	e8 05 4b 0a 00       	call   8284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>
 81e0203:	88 45 f6             	mov    %al,-0xa(%ebp)
 81e0206:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 81e020a:	83 f0 01             	xor    $0x1,%eax
 81e020d:	84 c0                	test   %al,%al
 81e020f:	74 5e                	je     81e026f <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x17f>
 81e0211:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e0214:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e0218:	0f be f0             	movsbl %al,%esi
 81e021b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e021e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e0222:	0f be d8             	movsbl %al,%ebx
 81e0225:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0228:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e022c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e022f:	89 04 24             	mov    %eax,(%esp)
 81e0232:	e8 45 aa 3b 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 81e0237:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e023b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e023f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0243:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0246:	89 04 24             	mov    %eax,(%esp)
 81e0249:	e8 96 4c 0a 00       	call   8284ee4 <_ZN24CTournamentDungeonReward10SelectCardEicc>
 81e024e:	88 45 f7             	mov    %al,-0x9(%ebp)
 81e0251:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 81e0255:	74 07                	je     81e025e <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x16e>
 81e0257:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e025c:	eb 3d                	jmp    81e029b <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1ab>
 81e025e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0261:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81e0268:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e026d:	eb 2c                	jmp    81e029b <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1ab>
 81e026f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e0272:	c7 40 04 ff ff ff 7f 	movl   $0x7fffffff,0x4(%eax)
 81e0279:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e027e:	eb 1b                	jmp    81e029b <_ZN33Dispatcher_TournamentRewardSelect7processEP5CUserR8MSG_BASER9ParamBase+0x1ab>
 81e0280:	89 d3                	mov    %edx,%ebx
 81e0282:	89 c6                	mov    %eax,%esi
 81e0284:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e0287:	89 04 24             	mov    %eax,(%esp)
 81e028a:	e8 4b 3b ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81e028f:	89 f0                	mov    %esi,%eax
 81e0291:	89 da                	mov    %ebx,%edx
 81e0293:	89 04 24             	mov    %eax,(%esp)
 81e0296:	e8 b5 34 90 00       	call   8ae3750 <_Unwind_Resume>
 81e029b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81e029e:	89 04 24             	mov    %eax,(%esp)
 81e02a1:	e8 34 3b ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81e02a6:	89 d8                	mov    %ebx,%eax
 81e02a8:	83 c4 30             	add    $0x30,%esp
 81e02ab:	5b                   	pop    %ebx
 81e02ac:	5e                   	pop    %esi
 81e02ad:	5d                   	pop    %ebp
 81e02ae:	c3                   	ret
 81e02af:	90                   	nop

```

```c
// Dispatcher_TournamentRewardSelect::process @ 0x81e00f0

/* Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelect::process
          (Dispatcher_TournamentRewardSelect *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  undefined4 uVar3;
  int iVar4;
  vector<int,std::allocator<int>> local_2c [12];
  ParamBase *local_20;
  MSG_BASE *local_1c;
  CParty *local_18;
  CTournamentDungeonReward *local_14;
  char local_e;
  char local_d;
  
  local_20 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_20 + 4) = uVar3;
  if (*(int *)(local_20 + 4) < 1) {
    if (*(int *)(local_20 + 4) < 0) {
      uVar3 = LineFunc(0x5315,
                       "virtual int Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_20 + 4),0);
    }
    else {
      local_1c = param_2;
      CUser::GetPartyIndex(param_1);
      iVar4 = G_CGameManager();
      local_18 = (CParty *)CGameManager::GetParty(iVar4);
      if (local_18 == (CParty *)0x0) {
        uVar3 = LineFunc(0x531c,
                         "virtual int Dispatcher_TournamentRewardSelect::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,0);
      }
      else {
        std::vector<int,std::allocator<int>>::vector(local_2c);
                    /* try { // try from 081e01d9 to 081e024d has its CatchHandler @ 081e0280 */
        CParty::GetValidPartyMember(local_18,(vector *)local_2c);
        local_14 = (CTournamentDungeonReward *)(local_18 + 0x17bc);
        local_e = CTournamentDungeonReward::isCardSelectComplete(local_14,2,local_2c);
        if (local_e == '\x01') {
          *(undefined4 *)(local_20 + 4) = 0x7fffffff;
        }
        else {
          MVar1 = local_1c[0xe];
          MVar2 = local_1c[0xd];
          iVar4 = CParty::GetMemberSlotNo(local_18,param_1);
          local_d = CTournamentDungeonReward::SelectCard(local_14,iVar4,(char)MVar2,(char)MVar1);
          if (local_d == '\0') {
            *(undefined4 *)(local_20 + 4) = 0x7fffffff;
          }
        }
        uVar3 = 0;
        std::vector<int,std::allocator<int>>::~vector(local_2c);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081dffda Dispatcher_TournamentRewardSelect::read  [0x081dffda-0x81e00ef] ===
 81dffda:	55                   	push   %ebp
 81dffdb:	89 e5                	mov    %esp,%ebp
 81dffdd:	83 ec 28             	sub    $0x28,%esp
 81dffe0:	8b 45 10             	mov    0x10(%ebp),%eax
 81dffe3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dffe6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dffe9:	83 c0 0d             	add    $0xd,%eax
 81dffec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dfff0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dfff3:	89 04 24             	mov    %eax,(%esp)
 81dfff6:	e8 27 cf 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81dfffb:	83 f0 01             	xor    $0x1,%eax
 81dfffe:	84 c0                	test   %al,%al
 81e0000:	74 29                	je     81e002b <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x51>
 81e0002:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0009:	00 
 81e000a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0011:	00 
 81e0012:	c7 44 24 04 c0 1a bd 	movl   $0x8bd1ac0,0x4(%esp)
 81e0019:	08 
 81e001a:	c7 04 24 fd 52 00 00 	movl   $0x52fd,(%esp)
 81e0021:	e8 b1 08 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0026:	e9 c2 00 00 00       	jmp    81e00ed <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x113>
 81e002b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e002e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e0032:	84 c0                	test   %al,%al
 81e0034:	78 0b                	js     81e0041 <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x67>
 81e0036:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e0039:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e003d:	3c 01                	cmp    $0x1,%al
 81e003f:	7e 29                	jle    81e006a <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x90>
 81e0041:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e0048:	00 
 81e0049:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0050:	00 
 81e0051:	c7 44 24 04 c0 1a bd 	movl   $0x8bd1ac0,0x4(%esp)
 81e0058:	08 
 81e0059:	c7 04 24 00 53 00 00 	movl   $0x5300,(%esp)
 81e0060:	e8 72 08 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e0065:	e9 83 00 00 00       	jmp    81e00ed <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x113>
 81e006a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e006d:	83 c0 0e             	add    $0xe,%eax
 81e0070:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0074:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0077:	89 04 24             	mov    %eax,(%esp)
 81e007a:	e8 a3 ce 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e007f:	83 f0 01             	xor    $0x1,%eax
 81e0082:	84 c0                	test   %al,%al
 81e0084:	74 26                	je     81e00ac <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0xd2>
 81e0086:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e008d:	00 
 81e008e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e0095:	00 
 81e0096:	c7 44 24 04 c0 1a bd 	movl   $0x8bd1ac0,0x4(%esp)
 81e009d:	08 
 81e009e:	c7 04 24 03 53 00 00 	movl   $0x5303,(%esp)
 81e00a5:	e8 2d 08 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e00aa:	eb 41                	jmp    81e00ed <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x113>
 81e00ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e00af:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e00b3:	84 c0                	test   %al,%al
 81e00b5:	78 0b                	js     81e00c2 <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0xe8>
 81e00b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e00ba:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e00be:	3c 01                	cmp    $0x1,%al
 81e00c0:	7e 26                	jle    81e00e8 <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x10e>
 81e00c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e00c9:	00 
 81e00ca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e00d1:	00 
 81e00d2:	c7 44 24 04 c0 1a bd 	movl   $0x8bd1ac0,0x4(%esp)
 81e00d9:	08 
 81e00da:	c7 04 24 06 53 00 00 	movl   $0x5306,(%esp)
 81e00e1:	e8 f1 07 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e00e6:	eb 05                	jmp    81e00ed <_ZN33Dispatcher_TournamentRewardSelect4readER9PacketBufR8MSG_BASE+0x113>
 81e00e8:	b8 00 00 00 00       	mov    $0x0,%eax
 81e00ed:	c9                   	leave
 81e00ee:	c3                   	ret
 81e00ef:	90                   	nop

```

```c
// Dispatcher_TournamentRewardSelect::read @ 0x81dffda

/* Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TournamentRewardSelect::read
          (Dispatcher_TournamentRewardSelect *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    if (((char)param_2[0xd] < '\0') || ('\x01' < (char)param_2[0xd])) {
      uVar2 = LineFunc(0x5300,
                       "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
    else {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
      if (cVar1 == '\x01') {
        if (((char)param_2[0xe] < '\0') || ('\x01' < (char)param_2[0xe])) {
          uVar2 = LineFunc(0x5306,
                           "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = LineFunc(0x5303,
                         "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
  }
  else {
    uVar2 = LineFunc(0x52fd,
                     "virtual int Dispatcher_TournamentRewardSelect::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e02b0 Dispatcher_TournamentRewardSelect::send  [0x081e02b0-0x81e046b] ===
 81e02b0:	55                   	push   %ebp
 81e02b1:	89 e5                	mov    %esp,%ebp
 81e02b3:	56                   	push   %esi
 81e02b4:	53                   	push   %ebx
 81e02b5:	83 ec 40             	sub    $0x40,%esp
 81e02b8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e02bb:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81e02be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e02c1:	89 04 24             	mov    %eax,(%esp)
 81e02c4:	e8 83 da 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e02c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e02cc:	89 04 24             	mov    %eax,(%esp)
 81e02cf:	e8 12 b6 ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81e02d4:	c7 44 24 08 cb 01 00 	movl   $0x1cb,0x8(%esp)
 81e02db:	00 
 81e02dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e02e3:	00 
 81e02e4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e02e7:	89 04 24             	mov    %eax,(%esp)
 81e02ea:	e8 0d b6 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e02ef:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e02f2:	8b 40 04             	mov    0x4(%eax),%eax
 81e02f5:	85 c0                	test   %eax,%eax
 81e02f7:	0f 85 5d 01 00 00    	jne    81e045a <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x1aa>
 81e02fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0304:	00 
 81e0305:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e0308:	89 04 24             	mov    %eax,(%esp)
 81e030b:	e8 10 b6 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e0310:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0313:	89 04 24             	mov    %eax,(%esp)
 81e0316:	e8 33 fb 04 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81e031b:	0f bf d8             	movswl %ax,%ebx
 81e031e:	e8 6b be ee ff       	call   80cc18e <_Z14G_CGameManagerv>
 81e0323:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e0327:	89 04 24             	mov    %eax,(%esp)
 81e032a:	e8 03 4c 0b 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81e032f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e0332:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81e0336:	0f 84 1e 01 00 00    	je     81e045a <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x1aa>
 81e033c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e033f:	05 bc 17 00 00       	add    $0x17bc,%eax
 81e0344:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e0347:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e034a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e034e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e0351:	89 04 24             	mov    %eax,(%esp)
 81e0354:	e8 4b 4c 0a 00       	call   8284fa4 <_ZN24CTournamentDungeonReward16MakeSelectPacketEP11PacketGuard>
 81e0359:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e0360:	00 
 81e0361:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e0364:	89 04 24             	mov    %eax,(%esp)
 81e0367:	e8 ec b5 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e036c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e036f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0373:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0376:	89 04 24             	mov    %eax,(%esp)
 81e0379:	e8 d0 cd 3b 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81e037e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e0381:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0385:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e0388:	89 04 24             	mov    %eax,(%esp)
 81e038b:	e8 48 3c 3d 00       	call   85b3fd8 <_ZN6CParty22CheckRecvFromAllMemberEP5CUser>
 81e0390:	83 f0 01             	xor    $0x1,%eax
 81e0393:	84 c0                	test   %al,%al
 81e0395:	0f 85 bf 00 00 00    	jne    81e045a <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x1aa>
 81e039b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e039e:	89 04 24             	mov    %eax,(%esp)
 81e03a1:	e8 06 de ea ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81e03a6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e03a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e03ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e03b0:	89 04 24             	mov    %eax,(%esp)
 81e03b3:	e8 24 ce 3d 00       	call   85bd1dc <_ZN6CParty19GetValidPartyMemberERSt6vectorIiSaIiEE>
 81e03b8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e03bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e03bf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81e03c6:	00 
 81e03c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e03ca:	89 04 24             	mov    %eax,(%esp)
 81e03cd:	e8 36 49 0a 00       	call   8284d08 <_ZN24CTournamentDungeonReward20isCardSelectCompleteE32ENUM_TOURNAMENT_REWARD_CARD_TYPERKSt6vectorIiSaIiEE>
 81e03d2:	83 f0 01             	xor    $0x1,%eax
 81e03d5:	84 c0                	test   %al,%al
 81e03d7:	74 07                	je     81e03e0 <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x130>
 81e03d9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e03de:	eb 50                	jmp    81e0430 <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x180>
 81e03e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e03e3:	89 04 24             	mov    %eax,(%esp)
 81e03e6:	e8 b3 d3 3d 00       	call   85bd79e <_ZN6CParty19isTournamentVictoryEv>
 81e03eb:	88 45 f7             	mov    %al,-0x9(%ebp)
 81e03ee:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81e03f5:	00 
 81e03f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e03f9:	89 04 24             	mov    %eax,(%esp)
 81e03fc:	e8 bb d2 3d 00       	call   85bd6bc <_ZN6CParty30SetTournamentDungeonClearStateEc>
 81e0401:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81e0405:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e0409:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e040c:	89 04 24             	mov    %eax,(%esp)
 81e040f:	e8 22 ce 3d 00       	call   85bd236 <_ZN6CParty22TournamentDungeonClearEb>
 81e0414:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e0419:	eb 15                	jmp    81e0430 <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x180>
 81e041b:	89 d3                	mov    %edx,%ebx
 81e041d:	89 c6                	mov    %eax,%esi
 81e041f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e0422:	89 04 24             	mov    %eax,(%esp)
 81e0425:	e8 b0 39 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81e042a:	89 f0                	mov    %esi,%eax
 81e042c:	89 da                	mov    %ebx,%edx
 81e042e:	eb 0f                	jmp    81e043f <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x18f>
 81e0430:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81e0433:	89 04 24             	mov    %eax,(%esp)
 81e0436:	e8 9f 39 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81e043b:	85 db                	test   %ebx,%ebx
 81e043d:	eb 1b                	jmp    81e045a <_ZN33Dispatcher_TournamentRewardSelect4sendEP5CUserR9ParamBase+0x1aa>
 81e043f:	89 d3                	mov    %edx,%ebx
 81e0441:	89 c6                	mov    %eax,%esi
 81e0443:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e0446:	89 04 24             	mov    %eax,(%esp)
 81e0449:	e8 32 da 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e044e:	89 f0                	mov    %esi,%eax
 81e0450:	89 da                	mov    %ebx,%edx
 81e0452:	89 04 24             	mov    %eax,(%esp)
 81e0455:	e8 f6 32 90 00       	call   8ae3750 <_Unwind_Resume>
 81e045a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81e045d:	89 04 24             	mov    %eax,(%esp)
 81e0460:	e8 1b da 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e0465:	83 c4 40             	add    $0x40,%esp
 81e0468:	5b                   	pop    %ebx
 81e0469:	5e                   	pop    %esi
 81e046a:	5d                   	pop    %ebp
 81e046b:	c3                   	ret

```

```c
// Dispatcher_TournamentRewardSelect::send @ 0x81e02b0

/* Dispatcher_TournamentRewardSelect::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_TournamentRewardSelect::send
          (Dispatcher_TournamentRewardSelect *this,CUser *param_1,ParamBase *param_2)

{
  char cVar1;
  int iVar2;
  vector<int,std::allocator<int>> local_34 [12];
  PacketGuard local_28 [12];
  ParamBase *local_1c;
  CParty *local_18;
  CTournamentDungeonReward *local_14;
  bool local_d;
  
  local_1c = param_2;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081e02cf to 081e03a5 has its CatchHandler @ 081e043f */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x1cb);
  if (*(int *)(local_1c + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    CUser::GetPartyIndex(param_1);
    iVar2 = G_CGameManager();
    local_18 = (CParty *)CGameManager::GetParty(iVar2);
    if (local_18 != (CParty *)0x0) {
      local_14 = (CTournamentDungeonReward *)(local_18 + 0x17bc);
      CTournamentDungeonReward::MakeSelectPacket(local_14,local_28);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CParty::send_to_party(local_18,local_28);
      cVar1 = CParty::CheckRecvFromAllMember(local_18,param_1);
      if (cVar1 == '\x01') {
        std::vector<int,std::allocator<int>>::vector(local_34);
                    /* try { // try from 081e03b3 to 081e0413 has its CatchHandler @ 081e041b */
        CParty::GetValidPartyMember(local_18,(vector *)local_34);
        cVar1 = CTournamentDungeonReward::isCardSelectComplete(local_14,2,local_34);
        if (cVar1 == '\x01') {
          local_d = (bool)CParty::isTournamentVictory(local_18);
          CParty::SetTournamentDungeonClearState(local_18,'\x03');
          CParty::TournamentDungeonClear(local_18,local_d);
        }
                    /* try { // try from 081e0436 to 081e043a has its CatchHandler @ 081e043f */
        std::vector<int,std::allocator<int>>::~vector(local_34);
      }
    }
  }
  PacketGuard::~PacketGuard(local_28);
  return;
}

```


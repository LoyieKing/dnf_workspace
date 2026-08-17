# Dispatcher_FightVillageMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082226c0 Dispatcher_FightVillageMonster::dispatch_sig  [0x082226c0-0x8222849] ===
 82226c0:	55                   	push   %ebp
 82226c1:	89 e5                	mov    %esp,%ebp
 82226c3:	83 ec 28             	sub    $0x28,%esp
 82226c6:	e8 dc 7c eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 82226cb:	89 04 24             	mov    %eax,(%esp)
 82226ce:	e8 4b ec ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 82226d3:	84 c0                	test   %al,%al
 82226d5:	74 0a                	je     82226e1 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x21>
 82226d7:	b8 00 00 00 00       	mov    $0x0,%eax
 82226dc:	e9 66 01 00 00       	jmp    8222847 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x187>
 82226e1:	e8 9b 9a ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82226e6:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 82226ec:	83 f8 01             	cmp    $0x1,%eax
 82226ef:	74 10                	je     8222701 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x41>
 82226f1:	e8 8b 9a ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 82226f6:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 82226fc:	83 f8 02             	cmp    $0x2,%eax
 82226ff:	75 07                	jne    8222708 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x48>
 8222701:	b8 01 00 00 00       	mov    $0x1,%eax
 8222706:	eb 05                	jmp    822270d <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 8222708:	b8 00 00 00 00       	mov    $0x0,%eax
 822270d:	84 c0                	test   %al,%al
 822270f:	74 0a                	je     822271b <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 8222711:	b8 00 00 00 00       	mov    $0x0,%eax
 8222716:	e9 2c 01 00 00       	jmp    8222847 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x187>
 822271b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 822271f:	75 29                	jne    822274a <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x8a>
 8222721:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222728:	00 
 8222729:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222730:	00 
 8222731:	c7 44 24 04 e0 cc bc 	movl   $0x8bccce0,0x4(%esp)
 8222738:	08 
 8222739:	c7 04 24 18 dc 00 00 	movl   $0xdc18,(%esp)
 8222740:	e8 92 e1 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222745:	e9 fd 00 00 00       	jmp    8222847 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x187>
 822274a:	8b 45 0c             	mov    0xc(%ebp),%eax
 822274d:	89 04 24             	mov    %eax,(%esp)
 8222750:	e8 37 7c eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8222755:	83 f8 03             	cmp    $0x3,%eax
 8222758:	0f 95 c0             	setne  %al
 822275b:	84 c0                	test   %al,%al
 822275d:	74 0a                	je     8222769 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0xa9>
 822275f:	b8 00 00 00 00       	mov    $0x0,%eax
 8222764:	e9 de 00 00 00       	jmp    8222847 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x187>
 8222769:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 822276f:	8d 45 ee             	lea    -0x12(%ebp),%eax
 8222772:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222776:	8b 45 10             	mov    0x10(%ebp),%eax
 8222779:	89 04 24             	mov    %eax,(%esp)
 822277c:	e8 2f a9 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8222781:	83 f0 01             	xor    $0x1,%eax
 8222784:	84 c0                	test   %al,%al
 8222786:	74 29                	je     82227b1 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0xf1>
 8222788:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822278f:	00 
 8222790:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222797:	00 
 8222798:	c7 44 24 04 e0 cc bc 	movl   $0x8bccce0,0x4(%esp)
 822279f:	08 
 82227a0:	c7 04 24 26 dc 00 00 	movl   $0xdc26,(%esp)
 82227a7:	e8 2b e1 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82227ac:	e9 96 00 00 00       	jmp    8222847 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x187>
 82227b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82227b4:	89 04 24             	mov    %eax,(%esp)
 82227b7:	e8 90 29 43 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82227bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82227bf:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82227c3:	75 28                	jne    82227ed <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x12d>
 82227c5:	e8 c4 99 ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 82227ca:	89 04 24             	mov    %eax,(%esp)
 82227cd:	e8 3e 26 07 00       	call   8294e10 <_ZN12CGameManager8GetPartyEv>
 82227d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82227d5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82227d9:	74 12                	je     82227ed <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x12d>
 82227db:	8b 45 0c             	mov    0xc(%ebp),%eax
 82227de:	89 44 24 04          	mov    %eax,0x4(%esp)
 82227e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82227e5:	89 04 24             	mov    %eax,(%esp)
 82227e8:	e8 55 89 37 00       	call   859b142 <_ZN6CParty15set_single_playEP5CUser>
 82227ed:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82227f1:	74 4f                	je     8222842 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x182>
 82227f3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82227fa:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 82227fe:	0f b7 c0             	movzwl %ax,%eax
 8222801:	89 44 24 08          	mov    %eax,0x8(%esp)
 8222805:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222808:	89 44 24 04          	mov    %eax,0x4(%esp)
 822280c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822280f:	89 04 24             	mov    %eax,(%esp)
 8222812:	e8 7f 6d 39 00       	call   85b9596 <_ZN6CParty21OnFightVillageMonsterEP5CUseri>
 8222817:	89 45 f4             	mov    %eax,-0xc(%ebp)
 822281a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 822281e:	0f 95 c0             	setne  %al
 8222821:	84 c0                	test   %al,%al
 8222823:	74 1d                	je     8222842 <_ZN30Dispatcher_FightVillageMonster12dispatch_sigEP5CUserR9PacketBuf+0x182>
 8222825:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8222828:	0f b6 c0             	movzbl %al,%eax
 822282b:	89 44 24 08          	mov    %eax,0x8(%esp)
 822282f:	c7 44 24 04 0b 01 00 	movl   $0x10b,0x4(%esp)
 8222836:	00 
 8222837:	8b 45 0c             	mov    0xc(%ebp),%eax
 822283a:	89 04 24             	mov    %eax,(%esp)
 822283d:	e8 00 97 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222842:	b8 00 00 00 00       	mov    $0x0,%eax
 8222847:	c9                   	leave
 8222848:	c3                   	ret
 8222849:	90                   	nop

```

```c
// Dispatcher_FightVillageMonster::dispatch_sig @ 0x82226c0

/* Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_FightVillageMonster::dispatch_sig
          (Dispatcher_FightVillageMonster *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_01;
  ushort local_16;
  CParty *local_14;
  uint local_10;
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x1a8) == 1) || (iVar3 = G_CEnvironment(), *(int *)(iVar3 + 0x1a8) == 2))
    {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (param_1 == (CUser *)0x0) {
      uVar4 = LineFunc(0xdc18,
                       "virtual int Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 3) {
        local_16 = 0;
        cVar2 = PacketBuf::get_short(param_2,&local_16);
        if (cVar2 == '\x01') {
          local_14 = (CParty *)CUser::GetParty(param_1);
          if (local_14 == (CParty *)0x0) {
            this_01 = (CGameManager *)G_CGameManager();
            local_14 = (CParty *)CGameManager::GetParty(this_01);
            if (local_14 != (CParty *)0x0) {
              CParty::set_single_play(local_14,param_1);
            }
          }
          if (local_14 != (CParty *)0x0) {
            local_10 = 0;
            local_10 = CParty::OnFightVillageMonster(local_14,param_1,(uint)local_16);
            if (local_10 != 0) {
              CUser::SendCmdErrorPacket(param_1,0x10b,local_10 & 0xff);
            }
          }
          uVar4 = 0;
        }
        else {
          uVar4 = LineFunc(0xdc26,
                           "virtual int Dispatcher_FightVillageMonster::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0;
}

```


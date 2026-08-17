# Dispatcher_FinishVillageMonsterFighting

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0822284a Dispatcher_FinishVillageMonsterFighting::dispatch_sig  [0x0822284a-0x8222957] ===
 822284a:	55                   	push   %ebp
 822284b:	89 e5                	mov    %esp,%ebp
 822284d:	83 ec 28             	sub    $0x28,%esp
 8222850:	e8 52 7b eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8222855:	89 04 24             	mov    %eax,(%esp)
 8222858:	e8 c1 ea ec ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 822285d:	84 c0                	test   %al,%al
 822285f:	74 0a                	je     822286b <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x21>
 8222861:	b8 00 00 00 00       	mov    $0x0,%eax
 8222866:	e9 ea 00 00 00       	jmp    8222955 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 822286b:	e8 11 99 ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8222870:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8222876:	83 f8 01             	cmp    $0x1,%eax
 8222879:	74 10                	je     822288b <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x41>
 822287b:	e8 01 99 ea ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8222880:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 8222886:	83 f8 02             	cmp    $0x2,%eax
 8222889:	75 07                	jne    8222892 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x48>
 822288b:	b8 01 00 00 00       	mov    $0x1,%eax
 8222890:	eb 05                	jmp    8222897 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x4d>
 8222892:	b8 00 00 00 00       	mov    $0x0,%eax
 8222897:	84 c0                	test   %al,%al
 8222899:	74 0a                	je     82228a5 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x5b>
 822289b:	b8 00 00 00 00       	mov    $0x0,%eax
 82228a0:	e9 b0 00 00 00       	jmp    8222955 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 82228a5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82228a9:	75 29                	jne    82228d4 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x8a>
 82228ab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82228b2:	00 
 82228b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82228ba:	00 
 82228bb:	c7 44 24 04 80 cc bc 	movl   $0x8bccc80,0x4(%esp)
 82228c2:	08 
 82228c3:	c7 04 24 66 dc 00 00 	movl   $0xdc66,(%esp)
 82228ca:	e8 08 e0 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82228cf:	e9 81 00 00 00       	jmp    8222955 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 82228d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82228d7:	89 04 24             	mov    %eax,(%esp)
 82228da:	e8 ad 7a eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82228df:	83 f8 05             	cmp    $0x5,%eax
 82228e2:	0f 95 c0             	setne  %al
 82228e5:	84 c0                	test   %al,%al
 82228e7:	74 07                	je     82228f0 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0xa6>
 82228e9:	b8 00 00 00 00       	mov    $0x0,%eax
 82228ee:	eb 65                	jmp    8222955 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 82228f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82228f3:	89 04 24             	mov    %eax,(%esp)
 82228f6:	e8 51 28 43 00       	call   865514c <_ZN5CUser8GetPartyEv>
 82228fb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82228fe:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8222902:	74 4c                	je     8222950 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x106>
 8222904:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 822290b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222912:	00 
 8222913:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222916:	89 44 24 04          	mov    %eax,0x4(%esp)
 822291a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 822291d:	89 04 24             	mov    %eax,(%esp)
 8222920:	e8 87 70 39 00       	call   85b99ac <_ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb>
 8222925:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8222928:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 822292c:	0f 95 c0             	setne  %al
 822292f:	84 c0                	test   %al,%al
 8222931:	74 1d                	je     8222950 <_ZN39Dispatcher_FinishVillageMonsterFighting12dispatch_sigEP5CUserR9PacketBuf+0x106>
 8222933:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8222936:	0f b6 c0             	movzbl %al,%eax
 8222939:	89 44 24 08          	mov    %eax,0x8(%esp)
 822293d:	c7 44 24 04 0c 01 00 	movl   $0x10c,0x4(%esp)
 8222944:	00 
 8222945:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222948:	89 04 24             	mov    %eax,(%esp)
 822294b:	e8 f2 95 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8222950:	b8 00 00 00 00       	mov    $0x0,%eax
 8222955:	c9                   	leave
 8222956:	c3                   	ret
 8222957:	90                   	nop

```

```c
// Dispatcher_FinishVillageMonsterFighting::dispatch_sig @ 0x822284a

/* Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  GameWorld *this;
  int iVar3;
  undefined4 uVar4;
  CParty *this_00;
  uint uVar5;
  
  this = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this);
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
    else if (param_2 == (PacketBuf *)0x0) {
      uVar4 = LineFunc(0xdc66,
                       "virtual int Dispatcher_FinishVillageMonsterFighting::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 5) {
        this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
        if ((this_00 != (CParty *)0x0) &&
           (uVar5 = CParty::OnFinishVillageMonsterFighting(this_00,(CUser *)param_2,false),
           uVar5 != 0)) {
          CUser::SendCmdErrorPacket((CUser *)param_2,0x10c,uVar5 & 0xff);
        }
        uVar4 = 0;
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


# DB_CreateCharac

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 24

---

## CheckLimitCreateNewCharac

```asm
// === 08401504 DB_CreateCharac::CheckLimitCreateNewCharac  [0x08401504-0x84016ad] ===
 8401504:	55                   	push   %ebp
 8401505:	89 e5                	mov    %esp,%ebp
 8401507:	83 ec 68             	sub    $0x68,%esp
 840150a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840150d:	8b 10                	mov    (%eax),%edx
 840150f:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8401514:	89 54 24 04          	mov    %edx,0x4(%esp)
 8401518:	89 04 24             	mov    %eax,(%esp)
 840151b:	e8 26 7e d0 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 8401520:	84 c0                	test   %al,%al
 8401522:	74 0a                	je     840152e <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x2a>
 8401524:	b8 01 00 00 00       	mov    $0x1,%eax
 8401529:	e9 7d 01 00 00       	jmp    84016ab <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a7>
 840152e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8401533:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840153a:	00 
 840153b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401542:	00 
 8401543:	89 04 24             	mov    %eax,(%esp)
 8401546:	e8 f3 3c ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840154b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 840154e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401555:	e8 44 a7 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840155a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 840155d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8401560:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401564:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8401567:	89 04 24             	mov    %eax,(%esp)
 840156a:	e8 f1 cd c7 ff       	call   807e360 <localtime_r@plt>
 840156f:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8401576:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 840157d:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8401584:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8401587:	89 04 24             	mov    %eax,(%esp)
 840158a:	e8 91 d2 c7 ff       	call   807e820 <mktime@plt>
 840158f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8401592:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8401599:	8b 45 0c             	mov    0xc(%ebp),%eax
 840159c:	8b 00                	mov    (%eax),%eax
 840159e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84015a5:	00 
 84015a6:	89 04 24             	mov    %eax,(%esp)
 84015a9:	e8 9d 7a d0 ff       	call   810904b <_Z14NumberToStringji>
 84015ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 84015b2:	c7 44 24 04 6c 2c c4 	movl   $0x8c42c6c,0x4(%esp)
 84015b9:	08 
 84015ba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84015bd:	89 04 24             	mov    %eax,(%esp)
 84015c0:	e8 fb 2b ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84015c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84015cc:	00 
 84015cd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84015d0:	89 04 24             	mov    %eax,(%esp)
 84015d3:	e8 4e 2d ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84015d8:	83 f0 01             	xor    $0x1,%eax
 84015db:	84 c0                	test   %al,%al
 84015dd:	74 17                	je     84015f6 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0xf2>
 84015df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84015e2:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 84015e9:	00 00 00 
 84015ec:	b8 00 00 00 00       	mov    $0x0,%eax
 84015f1:	e9 b5 00 00 00       	jmp    84016ab <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a7>
 84015f6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84015f9:	89 04 24             	mov    %eax,(%esp)
 84015fc:	e8 6b 0d ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8401601:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8401604:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8401608:	75 0a                	jne    8401614 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x110>
 840160a:	b8 01 00 00 00       	mov    $0x1,%eax
 840160f:	e9 97 00 00 00       	jmp    84016ab <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a7>
 8401614:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 840161b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8401622:	eb 6f                	jmp    8401693 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x18f>
 8401624:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8401627:	89 04 24             	mov    %eax,(%esp)
 840162a:	e8 8d 2e ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 840162f:	88 45 e7             	mov    %al,-0x19(%ebp)
 8401632:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8401636:	83 f0 01             	xor    $0x1,%eax
 8401639:	84 c0                	test   %al,%al
 840163b:	75 65                	jne    84016a2 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x19e>
 840163d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8401640:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401644:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840164b:	00 
 840164c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 840164f:	89 04 24             	mov    %eax,(%esp)
 8401652:	e8 9b 0c ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8401657:	88 45 e7             	mov    %al,-0x19(%ebp)
 840165a:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 840165e:	83 f0 01             	xor    $0x1,%eax
 8401661:	84 c0                	test   %al,%al
 8401663:	75 40                	jne    84016a5 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a1>
 8401665:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401668:	89 c2                	mov    %eax,%edx
 840166a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 840166d:	39 c2                	cmp    %eax,%edx
 840166f:	77 1e                	ja     840168f <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x18b>
 8401671:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8401675:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 8401679:	7e 14                	jle    840168f <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x18b>
 840167b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840167e:	c7 80 44 53 00 00 05 	movl   $0x5,0x5344(%eax)
 8401685:	00 00 00 
 8401688:	b8 00 00 00 00       	mov    $0x0,%eax
 840168d:	eb 1c                	jmp    84016ab <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a7>
 840168f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8401693:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401696:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8401699:	0f 9c c0             	setl   %al
 840169c:	84 c0                	test   %al,%al
 840169e:	75 84                	jne    8401624 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x120>
 84016a0:	eb 04                	jmp    84016a6 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a2>
 84016a2:	90                   	nop
 84016a3:	eb 01                	jmp    84016a6 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1a2>
 84016a5:	90                   	nop
 84016a6:	b8 01 00 00 00       	mov    $0x1,%eax
 84016ab:	c9                   	leave
 84016ac:	c3                   	ret
 84016ad:	90                   	nop

```

```c
// DB_CreateCharac::CheckLimitCreateNewCharac @ 0x8401504

/* DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::CheckLimitCreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  tm local_54;
  uint local_28;
  uint local_24;
  char local_1d;
  MySQL *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)param_1);
  if (cVar1 == '\0') {
    local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r((time_t *)&local_24,&local_54);
    local_54.tm_hour = 0;
    local_54.tm_min = 0;
    local_54.tm_sec = 0;
    local_24 = mktime(&local_54);
    local_28 = 0;
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_1c,
                     "seLect unix_timestamp(create_time) from limit_create_character where m_id=%s",
                     uVar2);
    cVar1 = MySQL::exec(local_1c,true);
    if (cVar1 == '\x01') {
      local_18 = MySQL::get_n_rows(local_1c);
      if (local_18 == 0) {
        uVar2 = 1;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while (((local_10 < local_18 && (local_1d = MySQL::fetch(local_1c), local_1d == '\x01')) &&
               (cVar1 = MySQL::get_uint(local_1c,0,&local_28), cVar1 == '\x01'))) {
          if ((local_24 <= local_28) && (local_14 = local_14 + 1, 1 < local_14)) {
            *(undefined4 *)(param_1 + 0x5344) = 5;
            return 0;
          }
          local_10 = local_10 + 1;
          local_1d = 1;
        }
        uVar2 = 1;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## CheckLimitCreateNewCharac_08401922

```asm
// === 08401922 DB_CreateCharac::CheckLimitCreateNewCharac  [0x08401922-0x8401b99] ===
 8401922:	55                   	push   %ebp
 8401923:	89 e5                	mov    %esp,%ebp
 8401925:	57                   	push   %edi
 8401926:	56                   	push   %esi
 8401927:	53                   	push   %ebx
 8401928:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 840192e:	8b 45 10             	mov    0x10(%ebp),%eax
 8401931:	88 45 84             	mov    %al,-0x7c(%ebp)
 8401934:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401937:	8b 10                	mov    (%eax),%edx
 8401939:	a1 10 f7 41 09       	mov    0x941f710,%eax
 840193e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8401942:	89 04 24             	mov    %eax,(%esp)
 8401945:	e8 fc 79 d0 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 840194a:	84 c0                	test   %al,%al
 840194c:	74 0a                	je     8401958 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x36>
 840194e:	b8 01 00 00 00       	mov    $0x1,%eax
 8401953:	e9 36 02 00 00       	jmp    8401b8e <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x26c>
 8401958:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840195d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8401964:	00 
 8401965:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840196c:	00 
 840196d:	89 04 24             	mov    %eax,(%esp)
 8401970:	e8 c9 38 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8401975:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8401978:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 840197f:	e8 1a a3 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8401984:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8401987:	8d 45 8c             	lea    -0x74(%ebp),%eax
 840198a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840198e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8401991:	89 04 24             	mov    %eax,(%esp)
 8401994:	e8 c7 c9 c7 ff       	call   807e360 <localtime_r@plt>
 8401999:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 84019a0:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 84019a7:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 84019ae:	8d 45 8c             	lea    -0x74(%ebp),%eax
 84019b1:	89 04 24             	mov    %eax,(%esp)
 84019b4:	e8 67 ce c7 ff       	call   807e820 <mktime@plt>
 84019b9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 84019bc:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 84019c3:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 84019ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84019cd:	8b 00                	mov    (%eax),%eax
 84019cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84019d6:	00 
 84019d7:	89 04 24             	mov    %eax,(%esp)
 84019da:	e8 6c 76 d0 ff       	call   810904b <_Z14NumberToStringji>
 84019df:	89 44 24 08          	mov    %eax,0x8(%esp)
 84019e3:	c7 44 24 04 44 2d c4 	movl   $0x8c42d44,0x4(%esp)
 84019ea:	08 
 84019eb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84019ee:	89 04 24             	mov    %eax,(%esp)
 84019f1:	e8 ca 27 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84019f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84019fd:	00 
 84019fe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401a01:	89 04 24             	mov    %eax,(%esp)
 8401a04:	e8 1d 29 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401a09:	83 f0 01             	xor    $0x1,%eax
 8401a0c:	84 c0                	test   %al,%al
 8401a0e:	74 17                	je     8401a27 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x105>
 8401a10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401a13:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401a1a:	00 00 00 
 8401a1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8401a22:	e9 67 01 00 00       	jmp    8401b8e <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x26c>
 8401a27:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401a2a:	89 04 24             	mov    %eax,(%esp)
 8401a2d:	e8 3a 09 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8401a32:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8401a35:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8401a39:	75 0a                	jne    8401a45 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x123>
 8401a3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8401a40:	e9 49 01 00 00       	jmp    8401b8e <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x26c>
 8401a45:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8401a4c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8401a53:	e9 17 01 00 00       	jmp    8401b6f <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x24d>
 8401a58:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401a5b:	89 04 24             	mov    %eax,(%esp)
 8401a5e:	e8 59 2a ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8401a63:	88 45 d7             	mov    %al,-0x29(%ebp)
 8401a66:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8401a6a:	83 f0 01             	xor    $0x1,%eax
 8401a6d:	84 c0                	test   %al,%al
 8401a6f:	0f 85 0d 01 00 00    	jne    8401b82 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x260>
 8401a75:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8401a78:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401a7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401a83:	00 
 8401a84:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401a87:	89 04 24             	mov    %eax,(%esp)
 8401a8a:	e8 63 08 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8401a8f:	88 45 d7             	mov    %al,-0x29(%ebp)
 8401a92:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8401a96:	83 f0 01             	xor    $0x1,%eax
 8401a99:	84 c0                	test   %al,%al
 8401a9b:	0f 85 e4 00 00 00    	jne    8401b85 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x263>
 8401aa1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8401aa4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401aa8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401aaf:	00 
 8401ab0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401ab3:	89 04 24             	mov    %eax,(%esp)
 8401ab6:	e8 37 08 ce ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8401abb:	88 45 d7             	mov    %al,-0x29(%ebp)
 8401abe:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 8401ac2:	83 f0 01             	xor    $0x1,%eax
 8401ac5:	84 c0                	test   %al,%al
 8401ac7:	0f 85 bb 00 00 00    	jne    8401b88 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x266>
 8401acd:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8401ad0:	83 f8 01             	cmp    $0x1,%eax
 8401ad3:	0f 86 92 00 00 00    	jbe    8401b6b <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x249>
 8401ad9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401adc:	c7 80 44 53 00 00 05 	movl   $0x5,0x5344(%eax)
 8401ae3:	00 00 00 
 8401ae6:	e8 96 a6 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8401aeb:	89 04 24             	mov    %eax,(%esp)
 8401aee:	e8 ed 51 d0 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8401af3:	89 c6                	mov    %eax,%esi
 8401af5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8401af8:	89 45 80             	mov    %eax,-0x80(%ebp)
 8401afb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401afe:	8b b8 48 53 00 00    	mov    0x5348(%eax),%edi
 8401b04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401b07:	8b 00                	mov    (%eax),%eax
 8401b09:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401b10:	00 
 8401b11:	89 04 24             	mov    %eax,(%esp)
 8401b14:	e8 32 75 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401b19:	89 c3                	mov    %eax,%ebx
 8401b1b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8401b22:	00 
 8401b23:	c7 44 24 08 25 0f 00 	movl   $0xf25,0x8(%esp)
 8401b2a:	00 
 8401b2b:	c7 44 24 04 e0 d8 c5 	movl   $0x8c5d8e0,0x4(%esp)
 8401b32:	08 
 8401b33:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8401b36:	89 04 24             	mov    %eax,(%esp)
 8401b39:	e8 da db 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8401b3e:	89 74 24 14          	mov    %esi,0x14(%esp)
 8401b42:	8b 45 80             	mov    -0x80(%ebp),%eax
 8401b45:	89 44 24 10          	mov    %eax,0x10(%esp)
 8401b49:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8401b4d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8401b51:	c7 44 24 04 a0 2d c4 	movl   $0x8c42da0,0x4(%esp)
 8401b58:	08 
 8401b59:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8401b5c:	89 04 24             	mov    %eax,(%esp)
 8401b5f:	e8 24 dc 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8401b64:	b8 00 00 00 00       	mov    $0x0,%eax
 8401b69:	eb 23                	jmp    8401b8e <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x26c>
 8401b6b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8401b6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401b72:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8401b75:	0f 9c c0             	setl   %al
 8401b78:	84 c0                	test   %al,%al
 8401b7a:	0f 85 d8 fe ff ff    	jne    8401a58 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x136>
 8401b80:	eb 07                	jmp    8401b89 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x267>
 8401b82:	90                   	nop
 8401b83:	eb 04                	jmp    8401b89 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x267>
 8401b85:	90                   	nop
 8401b86:	eb 01                	jmp    8401b89 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x267>
 8401b88:	90                   	nop
 8401b89:	b8 01 00 00 00       	mov    $0x1,%eax
 8401b8e:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8401b94:	5b                   	pop    %ebx
 8401b95:	5e                   	pop    %esi
 8401b96:	5f                   	pop    %edi
 8401b97:	5d                   	pop    %ebp
 8401b98:	c3                   	ret
 8401b99:	90                   	nop

```

```c
// DB_CreateCharac::CheckLimitCreateNewCharac @ 0x8401922

/* DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool) */

undefined4 DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  CEnvironment *this;
  undefined4 uVar5;
  undefined3 in_stack_00000009;
  tm local_78;
  uint local_4c;
  uint local_48;
  time_t local_44;
  cMyTrace local_40 [19];
  char local_2d;
  MySQL *local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*_param_2);
  if (cVar3 == '\0') {
    local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_44 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_44,&local_78);
    local_78.tm_hour = 0;
    local_78.tm_min = 0;
    local_78.tm_sec = 0;
    local_44 = mktime(&local_78);
    local_48 = 0;
    local_4c = 0;
    uVar4 = NumberToString(*_param_2,0);
    MySQL::set_query(local_2c,
                     "seLect count, unix_timestamp(last_access_time) from limit_create_character where m_id=%s"
                     ,uVar4);
    cVar3 = MySQL::exec(local_2c,true);
    if (cVar3 == '\x01') {
      local_28 = MySQL::get_n_rows(local_2c);
      if (local_28 == 0) {
        uVar4 = 1;
      }
      else {
        local_24 = 0;
        local_20 = 0;
        while ((((local_20 < local_28 && (local_2d = MySQL::fetch(local_2c), local_2d == '\x01')) &&
                (local_2d = MySQL::get_uint(local_2c,0,&local_4c), local_2d == '\x01')) &&
               (local_2d = MySQL::get_uint(local_2c,1,&local_48), local_2d == '\x01'))) {
          if (1 < local_4c) {
            _param_2[0x14d1] = 5;
            this = (CEnvironment *)G_CEnvironment();
            uVar4 = CEnvironment::get_server_group(this);
            uVar2 = local_48;
            uVar1 = _param_2[0x14d2];
            uVar5 = NumberToString(*_param_2,0);
            cMyTrace::cMyTrace(local_40,
                               "bool DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)"
                               ,0xf25,0);
            cMyTrace::operator()
                      (local_40,"[LIMIT NEW CHARAC MID] %s,%d,%d,%d",uVar5,uVar1,uVar2,uVar4);
            return 0;
          }
          local_20 = local_20 + 1;
          local_2d = 1;
        }
        uVar4 = 1;
      }
    }
    else {
      _param_2[0x14d1] = 2;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## CreateEquip

```asm
// === 084023ac DB_CreateCharac::CreateEquip  [0x084023ac-0x84024e5] ===
 84023ac:	55                   	push   %ebp
 84023ad:	89 e5                	mov    %esp,%ebp
 84023af:	57                   	push   %edi
 84023b0:	53                   	push   %ebx
 84023b1:	81 ec a0 03 00 00    	sub    $0x3a0,%esp
 84023b7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84023bb:	75 0a                	jne    84023c7 <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x1b>
 84023bd:	b8 01 00 00 00       	mov    $0x1,%eax
 84023c2:	e9 15 01 00 00       	jmp    84024dc <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x130>
 84023c7:	8d 95 72 fc ff ff    	lea    -0x38e(%ebp),%edx
 84023cd:	bb 7a 03 00 00       	mov    $0x37a,%ebx
 84023d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84023d7:	89 d1                	mov    %edx,%ecx
 84023d9:	83 e1 02             	and    $0x2,%ecx
 84023dc:	85 c9                	test   %ecx,%ecx
 84023de:	74 09                	je     84023e9 <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x3d>
 84023e0:	66 89 02             	mov    %ax,(%edx)
 84023e3:	83 c2 02             	add    $0x2,%edx
 84023e6:	83 eb 02             	sub    $0x2,%ebx
 84023e9:	89 d9                	mov    %ebx,%ecx
 84023eb:	c1 e9 02             	shr    $0x2,%ecx
 84023ee:	89 d7                	mov    %edx,%edi
 84023f0:	f3 ab                	rep stos %eax,%es:(%edi)
 84023f2:	89 fa                	mov    %edi,%edx
 84023f4:	89 d9                	mov    %ebx,%ecx
 84023f6:	83 e1 02             	and    $0x2,%ecx
 84023f9:	85 c9                	test   %ecx,%ecx
 84023fb:	74 06                	je     8402403 <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x57>
 84023fd:	66 89 02             	mov    %ax,(%edx)
 8402400:	83 c2 02             	add    $0x2,%edx
 8402403:	89 d9                	mov    %ebx,%ecx
 8402405:	83 e1 01             	and    $0x1,%ecx
 8402408:	85 c9                	test   %ecx,%ecx
 840240a:	74 05                	je     8402411 <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x65>
 840240c:	88 02                	mov    %al,(%edx)
 840240e:	83 c2 01             	add    $0x1,%edx
 8402411:	c7 45 ec 7a 03 00 00 	movl   $0x37a,-0x14(%ebp)
 8402418:	8b 45 10             	mov    0x10(%ebp),%eax
 840241b:	c7 44 24 0c dc 02 00 	movl   $0x2dc,0xc(%esp)
 8402422:	00 
 8402423:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402427:	8d 45 ec             	lea    -0x14(%ebp),%eax
 840242a:	89 44 24 04          	mov    %eax,0x4(%esp)
 840242e:	8d 85 72 fc ff ff    	lea    -0x38e(%ebp),%eax
 8402434:	89 04 24             	mov    %eax,(%esp)
 8402437:	e8 e3 fb 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840243c:	83 f0 01             	xor    $0x1,%eax
 840243f:	84 c0                	test   %al,%al
 8402441:	74 0a                	je     840244d <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0xa1>
 8402443:	b8 00 00 00 00       	mov    $0x0,%eax
 8402448:	e9 8f 00 00 00       	jmp    84024dc <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x130>
 840244d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8402452:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8402459:	00 
 840245a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8402461:	00 
 8402462:	89 04 24             	mov    %eax,(%esp)
 8402465:	e8 d4 2d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840246a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840246d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8402470:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402474:	8d 85 72 fc ff ff    	lea    -0x38e(%ebp),%eax
 840247a:	89 44 24 08          	mov    %eax,0x8(%esp)
 840247e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8402485:	00 
 8402486:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402489:	89 04 24             	mov    %eax,(%esp)
 840248c:	e8 99 20 ff ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8402491:	8b 55 0c             	mov    0xc(%ebp),%edx
 8402494:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8402498:	89 44 24 08          	mov    %eax,0x8(%esp)
 840249c:	c7 44 24 04 98 30 c4 	movl   $0x8c43098,0x4(%esp)
 84024a3:	08 
 84024a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84024a7:	89 04 24             	mov    %eax,(%esp)
 84024aa:	e8 11 1d ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84024af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84024b6:	00 
 84024b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84024ba:	89 04 24             	mov    %eax,(%esp)
 84024bd:	e8 64 1e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84024c2:	88 45 f3             	mov    %al,-0xd(%ebp)
 84024c5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84024c9:	83 f0 01             	xor    $0x1,%eax
 84024cc:	84 c0                	test   %al,%al
 84024ce:	74 07                	je     84024d7 <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x12b>
 84024d0:	b8 00 00 00 00       	mov    $0x0,%eax
 84024d5:	eb 05                	jmp    84024dc <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item+0x130>
 84024d7:	b8 01 00 00 00       	mov    $0x1,%eax
 84024dc:	81 c4 a0 03 00 00    	add    $0x3a0,%esp
 84024e2:	5b                   	pop    %ebx
 84024e3:	5f                   	pop    %edi
 84024e4:	5d                   	pop    %ebp
 84024e5:	c3                   	ret

```

```c
// DB_CreateCharac::CreateEquip @ 0x84023ac

/* WARNING: Removing unreachable block (ram,0x0840240c) */
/* DB_CreateCharac::CreateEquip(unsigned int, Inven_Item*) */

undefined4 __thiscall
DB_CreateCharac::CreateEquip(DB_CreateCharac *this,uint param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char local_392 [890];
  uint local_18 [2];
  MySQL *local_10;
  
  if (param_2 == (Inven_Item *)0x0) {
    uVar2 = 1;
  }
  else {
    pcVar3 = local_392;
    uVar4 = 0x37a;
    bVar5 = ((uint)pcVar3 & 2) != 0;
    if (bVar5) {
      local_392[0] = '\0';
      local_392[1] = '\0';
      pcVar3 = local_392 + 2;
      uVar4 = 0x378;
    }
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    if (!bVar5) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
    }
    local_18[0] = 0x37a;
    cVar1 = compress_zip(local_392,local_18,(char *)param_2,0x2dc);
    if (cVar1 == '\x01') {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = MySQL::blob_to_str(local_10,0,local_392,local_18[0]);
      MySQL::set_query(local_10,"upDate inventory set equipslot=\'%s\' where charac_no = %u",uVar2,
                       param_1);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## CreateInventory

```asm
// === 08402230 DB_CreateCharac::CreateInventory  [0x08402230-0x84023ab] ===
 8402230:	55                   	push   %ebp
 8402231:	89 e5                	mov    %esp,%ebp
 8402233:	53                   	push   %ebx
 8402234:	81 ec 74 47 00 00    	sub    $0x4774,%esp
 840223a:	8d 85 ae b8 ff ff    	lea    -0x4752(%ebp),%eax
 8402240:	ba 3e 47 00 00       	mov    $0x473e,%edx
 8402245:	89 54 24 08          	mov    %edx,0x8(%esp)
 8402249:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8402250:	00 
 8402251:	89 04 24             	mov    %eax,(%esp)
 8402254:	e8 67 ba c7 ff       	call   807dcc0 <memset@plt>
 8402259:	c7 45 ec 3e 47 00 00 	movl   $0x473e,-0x14(%ebp)
 8402260:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8402264:	74 35                	je     840229b <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x6b>
 8402266:	8b 45 10             	mov    0x10(%ebp),%eax
 8402269:	c7 44 24 0c 55 3b 00 	movl   $0x3b55,0xc(%esp)
 8402270:	00 
 8402271:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402275:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8402278:	89 44 24 04          	mov    %eax,0x4(%esp)
 840227c:	8d 85 ae b8 ff ff    	lea    -0x4752(%ebp),%eax
 8402282:	89 04 24             	mov    %eax,(%esp)
 8402285:	e8 95 fd 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 840228a:	83 f0 01             	xor    $0x1,%eax
 840228d:	84 c0                	test   %al,%al
 840228f:	74 0a                	je     840229b <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x6b>
 8402291:	b8 00 00 00 00       	mov    $0x0,%eax
 8402296:	e9 07 01 00 00       	jmp    84023a2 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x172>
 840229b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84022a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84022a7:	00 
 84022a8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84022af:	00 
 84022b0:	89 04 24             	mov    %eax,(%esp)
 84022b3:	e8 86 2f ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84022b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84022bb:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84022bf:	75 25                	jne    84022e6 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0xb6>
 84022c1:	e8 3c cd 08 00       	call   848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>
 84022c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84022ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 84022cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84022d1:	c7 44 24 04 bc 2f c4 	movl   $0x8c42fbc,0x4(%esp)
 84022d8:	08 
 84022d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84022dc:	89 04 24             	mov    %eax,(%esp)
 84022df:	e8 dc 1e ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84022e4:	eb 4d                	jmp    8402333 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x103>
 84022e6:	e8 17 cd 08 00       	call   848f002 <_ZN8WongWork9CEventMgr19GetCoinCharacCreateEv>
 84022eb:	89 c3                	mov    %eax,%ebx
 84022ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84022f0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84022f4:	8d 85 ae b8 ff ff    	lea    -0x4752(%ebp),%eax
 84022fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84022fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8402305:	00 
 8402306:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402309:	89 04 24             	mov    %eax,(%esp)
 840230c:	e8 19 22 ff ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8402311:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8402315:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402319:	8b 45 0c             	mov    0xc(%ebp),%eax
 840231c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402320:	c7 44 24 04 f4 2f c4 	movl   $0x8c42ff4,0x4(%esp)
 8402327:	08 
 8402328:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840232b:	89 04 24             	mov    %eax,(%esp)
 840232e:	e8 8d 1e ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8402333:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840233a:	00 
 840233b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840233e:	89 04 24             	mov    %eax,(%esp)
 8402341:	e8 e0 1f ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8402346:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402349:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 840234d:	83 f0 01             	xor    $0x1,%eax
 8402350:	84 c0                	test   %al,%al
 8402352:	74 07                	je     840235b <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x12b>
 8402354:	b8 00 00 00 00       	mov    $0x0,%eax
 8402359:	eb 47                	jmp    84023a2 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x172>
 840235b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840235e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402362:	c7 44 24 04 3c 30 c4 	movl   $0x8c4303c,0x4(%esp)
 8402369:	08 
 840236a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840236d:	89 04 24             	mov    %eax,(%esp)
 8402370:	e8 4b 1e ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8402375:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840237c:	00 
 840237d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402380:	89 04 24             	mov    %eax,(%esp)
 8402383:	e8 9e 1f ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8402388:	88 45 f3             	mov    %al,-0xd(%ebp)
 840238b:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 840238f:	83 f0 01             	xor    $0x1,%eax
 8402392:	84 c0                	test   %al,%al
 8402394:	74 07                	je     840239d <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x16d>
 8402396:	b8 00 00 00 00       	mov    $0x0,%eax
 840239b:	eb 05                	jmp    84023a2 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item+0x172>
 840239d:	b8 01 00 00 00       	mov    $0x1,%eax
 84023a2:	81 c4 74 47 00 00    	add    $0x4774,%esp
 84023a8:	5b                   	pop    %ebx
 84023a9:	5d                   	pop    %ebp
 84023aa:	c3                   	ret
 84023ab:	90                   	nop

```

```c
// DB_CreateCharac::CreateInventory @ 0x8402230

/* DB_CreateCharac::CreateInventory(unsigned int, Inven_Item*) */

undefined4 __thiscall
DB_CreateCharac::CreateInventory(DB_CreateCharac *this,uint param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char local_4756 [18238];
  uint local_18;
  char local_11;
  MySQL *local_10;
  
  memset(local_4756,0,0x473e);
  local_18 = 0x473e;
  if ((param_2 != (Inven_Item *)0x0) &&
     (cVar1 = compress_zip(local_4756,&local_18,(char *)param_2,0x3b55), cVar1 != '\x01')) {
    return 0;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_2 == (Inven_Item *)0x0) {
    uVar2 = WongWork::CEventMgr::GetCoinCharacCreate();
    MySQL::set_query(local_10,"inSert into inventory (charac_no, coin) values(%u, %d)",param_1,uVar2
                    );
  }
  else {
    uVar3 = WongWork::CEventMgr::GetCoinCharacCreate();
    uVar2 = MySQL::blob_to_str(local_10,0,local_4756,local_18);
    MySQL::set_query(local_10,
                     "inSert into inventory (charac_no, inventory,coin) values(%u, \'%s\',%d)",
                     param_1,uVar2,uVar3);
  }
  local_11 = MySQL::exec(local_10,true);
  if (local_11 == '\x01') {
    MySQL::set_query(local_10,
                     "inSert into charac_inven_expand(charac_no,cargo,cargo_capacity,jewel) values(%u,\'\',0,\'\')"
                     ,param_1,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## CreateNewCharac

```asm
// === 08401dcc DB_CreateCharac::CreateNewCharac  [0x08401dcc-0x840215d] ===
 8401dcc:	55                   	push   %ebp
 8401dcd:	89 e5                	mov    %esp,%ebp
 8401dcf:	57                   	push   %edi
 8401dd0:	53                   	push   %ebx
 8401dd1:	83 ec 70             	sub    $0x70,%esp
 8401dd4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8401dd9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8401de0:	00 
 8401de1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8401de8:	00 
 8401de9:	89 04 24             	mov    %eax,(%esp)
 8401dec:	e8 4d 34 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8401df1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8401df4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401df7:	8b 00                	mov    (%eax),%eax
 8401df9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401e00:	00 
 8401e01:	89 04 24             	mov    %eax,(%esp)
 8401e04:	e8 42 72 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401e09:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401e0d:	c7 44 24 04 74 2e c4 	movl   $0x8c42e74,0x4(%esp)
 8401e14:	08 
 8401e15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401e18:	89 04 24             	mov    %eax,(%esp)
 8401e1b:	e8 a0 23 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8401e20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401e27:	00 
 8401e28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401e2b:	89 04 24             	mov    %eax,(%esp)
 8401e2e:	e8 f3 24 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401e33:	83 f0 01             	xor    $0x1,%eax
 8401e36:	84 c0                	test   %al,%al
 8401e38:	74 17                	je     8401e51 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x85>
 8401e3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401e3d:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401e44:	00 00 00 
 8401e47:	b8 00 00 00 00       	mov    $0x0,%eax
 8401e4c:	e9 06 03 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8401e51:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8401e58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401e5b:	89 04 24             	mov    %eax,(%esp)
 8401e5e:	e8 59 26 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8401e63:	83 f0 01             	xor    $0x1,%eax
 8401e66:	84 c0                	test   %al,%al
 8401e68:	75 29                	jne    8401e93 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0xc7>
 8401e6a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8401e6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401e71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401e78:	00 
 8401e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401e7c:	89 04 24             	mov    %eax,(%esp)
 8401e7f:	e8 a8 4a d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8401e84:	83 f0 01             	xor    $0x1,%eax
 8401e87:	84 c0                	test   %al,%al
 8401e89:	75 08                	jne    8401e93 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0xc7>
 8401e8b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8401e8e:	83 f8 23             	cmp    $0x23,%eax
 8401e91:	7e 07                	jle    8401e9a <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0xce>
 8401e93:	b8 01 00 00 00       	mov    $0x1,%eax
 8401e98:	eb 05                	jmp    8401e9f <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0xd3>
 8401e9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8401e9f:	84 c0                	test   %al,%al
 8401ea1:	74 17                	je     8401eba <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0xee>
 8401ea3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401ea6:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401ead:	00 00 00 
 8401eb0:	b8 00 00 00 00       	mov    $0x0,%eax
 8401eb5:	e9 9d 02 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8401eba:	c7 45 dc 02 00 00 00 	movl   $0x2,-0x24(%ebp)
 8401ec1:	e8 bb a2 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8401ec6:	8d 50 68             	lea    0x68(%eax),%edx
 8401ec9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8401ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401ed0:	89 14 24             	mov    %edx,(%esp)
 8401ed3:	e8 aa b0 ce ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 8401ed8:	83 c0 42             	add    $0x42,%eax
 8401edb:	8b 55 0c             	mov    0xc(%ebp),%edx
 8401ede:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8401ee2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401ee6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401eed:	8b 45 08             	mov    0x8(%ebp),%eax
 8401ef0:	89 04 24             	mov    %eax,(%esp)
 8401ef3:	e8 dc f2 ff ff       	call   84011d4 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC>
 8401ef8:	83 f0 01             	xor    $0x1,%eax
 8401efb:	84 c0                	test   %al,%al
 8401efd:	74 0a                	je     8401f09 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x13d>
 8401eff:	b8 00 00 00 00       	mov    $0x0,%eax
 8401f04:	e9 4e 02 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8401f09:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401f0c:	c6 80 4d 53 00 00 00 	movb   $0x0,0x534d(%eax)
 8401f13:	e8 69 a2 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8401f18:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8401f1e:	83 f8 0a             	cmp    $0xa,%eax
 8401f21:	75 1a                	jne    8401f3d <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x171>
 8401f23:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401f2a:	e8 6f 9d cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8401f2f:	3d 50 70 8e 47       	cmp    $0x478e7050,%eax
 8401f34:	77 07                	ja     8401f3d <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x171>
 8401f36:	b8 01 00 00 00       	mov    $0x1,%eax
 8401f3b:	eb 05                	jmp    8401f42 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x176>
 8401f3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8401f42:	84 c0                	test   %al,%al
 8401f44:	0f 84 cf 00 00 00    	je     8402019 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x24d>
 8401f4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401f4d:	8b 00                	mov    (%eax),%eax
 8401f4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401f56:	00 
 8401f57:	89 04 24             	mov    %eax,(%esp)
 8401f5a:	e8 ec 70 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401f5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401f63:	c7 44 24 04 b8 2e c4 	movl   $0x8c42eb8,0x4(%esp)
 8401f6a:	08 
 8401f6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401f6e:	89 04 24             	mov    %eax,(%esp)
 8401f71:	e8 4a 22 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8401f76:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401f7d:	00 
 8401f7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401f81:	89 04 24             	mov    %eax,(%esp)
 8401f84:	e8 9d 23 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401f89:	83 f0 01             	xor    $0x1,%eax
 8401f8c:	84 c0                	test   %al,%al
 8401f8e:	74 17                	je     8401fa7 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x1db>
 8401f90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401f93:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401f9a:	00 00 00 
 8401f9d:	b8 00 00 00 00       	mov    $0x0,%eax
 8401fa2:	e9 b0 01 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8401fa7:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8401fae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401fb1:	89 04 24             	mov    %eax,(%esp)
 8401fb4:	e8 03 25 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8401fb9:	83 f0 01             	xor    $0x1,%eax
 8401fbc:	84 c0                	test   %al,%al
 8401fbe:	75 21                	jne    8401fe1 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x215>
 8401fc0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8401fc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401fc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401fce:	00 
 8401fcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401fd2:	89 04 24             	mov    %eax,(%esp)
 8401fd5:	e8 52 49 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8401fda:	83 f0 01             	xor    $0x1,%eax
 8401fdd:	84 c0                	test   %al,%al
 8401fdf:	74 07                	je     8401fe8 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x21c>
 8401fe1:	b8 01 00 00 00       	mov    $0x1,%eax
 8401fe6:	eb 05                	jmp    8401fed <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x221>
 8401fe8:	b8 00 00 00 00       	mov    $0x0,%eax
 8401fed:	84 c0                	test   %al,%al
 8401fef:	74 17                	je     8402008 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x23c>
 8401ff1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401ff4:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401ffb:	00 00 00 
 8401ffe:	b8 00 00 00 00       	mov    $0x0,%eax
 8402003:	e9 4f 01 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8402008:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 840200b:	85 c0                	test   %eax,%eax
 840200d:	75 0a                	jne    8402019 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x24d>
 840200f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402012:	c6 80 4d 53 00 00 01 	movb   $0x1,0x534d(%eax)
 8402019:	8d 5d 98             	lea    -0x68(%ebp),%ebx
 840201c:	b8 00 00 00 00       	mov    $0x0,%eax
 8402021:	ba 0f 00 00 00       	mov    $0xf,%edx
 8402026:	89 df                	mov    %ebx,%edi
 8402028:	89 d1                	mov    %edx,%ecx
 840202a:	f3 ab                	rep stos %eax,%es:(%edi)
 840202c:	8b 45 0c             	mov    0xc(%ebp),%eax
 840202f:	83 c0 04             	add    $0x4,%eax
 8402032:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402036:	8d 45 98             	lea    -0x68(%ebp),%eax
 8402039:	89 44 24 04          	mov    %eax,0x4(%esp)
 840203d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402040:	89 04 24             	mov    %eax,(%esp)
 8402043:	e8 62 28 ff ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8402048:	8b 45 0c             	mov    0xc(%ebp),%eax
 840204b:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 840204f:	84 c0                	test   %al,%al
 8402051:	7e 37                	jle    840208a <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x2be>
 8402053:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402056:	89 44 24 04          	mov    %eax,0x4(%esp)
 840205a:	8b 45 08             	mov    0x8(%ebp),%eax
 840205d:	89 04 24             	mov    %eax,(%esp)
 8402060:	e8 4d f3 ff ff       	call   84013b2 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC>
 8402065:	83 f0 01             	xor    $0x1,%eax
 8402068:	84 c0                	test   %al,%al
 840206a:	74 0a                	je     8402076 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x2aa>
 840206c:	b8 00 00 00 00       	mov    $0x0,%eax
 8402071:	e9 e1 00 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8402076:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402079:	89 44 24 04          	mov    %eax,0x4(%esp)
 840207d:	8b 45 08             	mov    0x8(%ebp),%eax
 8402080:	89 04 24             	mov    %eax,(%esp)
 8402083:	e8 a0 f3 ff ff       	call   8401428 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC>
 8402088:	eb 22                	jmp    84020ac <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x2e0>
 840208a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840208d:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 8402091:	84 c0                	test   %al,%al
 8402093:	79 17                	jns    84020ac <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x2e0>
 8402095:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402098:	c7 80 44 53 00 00 04 	movl   $0x4,0x5344(%eax)
 840209f:	00 00 00 
 84020a2:	b8 00 00 00 00       	mov    $0x0,%eax
 84020a7:	e9 ab 00 00 00       	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 84020ac:	8d 45 98             	lea    -0x68(%ebp),%eax
 84020af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84020b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84020b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 84020ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84020bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84020c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84020c4:	89 04 24             	mov    %eax,(%esp)
 84020c7:	e8 d4 a1 ce ff       	call   80ec2a0 <_ZN15DB_CreateCharac20MakeInsertCharacInfoEP5MySQLP17SIG_CREATE_CHARACPKc>
 84020cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84020d3:	00 
 84020d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84020d7:	89 04 24             	mov    %eax,(%esp)
 84020da:	e8 47 22 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84020df:	88 45 f3             	mov    %al,-0xd(%ebp)
 84020e2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84020e6:	83 f0 01             	xor    $0x1,%eax
 84020e9:	84 c0                	test   %al,%al
 84020eb:	74 65                	je     8402152 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x386>
 84020ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 84020f0:	8b 00                	mov    (%eax),%eax
 84020f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84020f9:	00 
 84020fa:	89 04 24             	mov    %eax,(%esp)
 84020fd:	e8 49 6f d0 ff       	call   810904b <_Z14NumberToStringji>
 8402102:	89 c3                	mov    %eax,%ebx
 8402104:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840210b:	00 
 840210c:	c7 44 24 08 e2 10 00 	movl   $0x10e2,0x8(%esp)
 8402113:	00 
 8402114:	c7 44 24 04 40 d8 c5 	movl   $0x8c5d840,0x4(%esp)
 840211b:	08 
 840211c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 840211f:	89 04 24             	mov    %eax,(%esp)
 8402122:	e8 f1 d5 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8402127:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840212b:	c7 44 24 04 e8 2e c4 	movl   $0x8c42ee8,0x4(%esp)
 8402132:	08 
 8402133:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8402136:	89 04 24             	mov    %eax,(%esp)
 8402139:	e8 4a d6 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 840213e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402141:	c7 80 44 53 00 00 01 	movl   $0x1,0x5344(%eax)
 8402148:	00 00 00 
 840214b:	b8 00 00 00 00       	mov    $0x0,%eax
 8402150:	eb 05                	jmp    8402157 <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC+0x38b>
 8402152:	b8 01 00 00 00       	mov    $0x1,%eax
 8402157:	83 c4 70             	add    $0x70,%esp
 840215a:	5b                   	pop    %ebx
 840215b:	5f                   	pop    %edi
 840215c:	5d                   	pop    %ebp
 840215d:	c3                   	ret

```

```c
// DB_CreateCharac::CreateNewCharac @ 0x8401dcc

/* WARNING: Type propagation algorithm not settling */
/* DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*) */

bool __thiscall DB_CreateCharac::CreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  bool bVar6;
  byte bVar7;
  char local_6c [60];
  int local_30;
  int local_2c [2];
  cMyTrace local_24 [19];
  char local_11;
  MySQL *local_10;
  
  bVar7 = 0;
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(local_10,"seLect count(*) from charac_info where m_id=%s and delete_flag=0",uVar2
                  );
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    *(undefined4 *)(param_1 + 0x5344) = 2;
    return false;
  }
  local_2c[0] = 0;
  cVar1 = MySQL::fetch(local_10);
  if (((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_10,0,local_2c), cVar1 == '\x01')) &&
     (local_2c[0] < 0x24)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (bVar6) {
    *(undefined4 *)(param_1 + 0x5344) = 2;
    return false;
  }
  local_2c[1] = 2;
  iVar3 = G_CEnvironment();
  iVar3 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                        *)(iVar3 + 0x68),(ENUM_DB_HANDLE_IDX *)(local_2c + 1));
  cVar1 = _checkCharacName(this,local_10,(char *)(iVar3 + 0x42),param_1);
  if (cVar1 != '\x01') {
    return false;
  }
  param_1[0x534d] = (SIG_CREATE_CHARAC)0x0;
  iVar3 = G_CEnvironment();
  if ((*(int *)(iVar3 + 0x378) == 10) &&
     (uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_), uVar4 < 0x478e7051))
  {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_10,"seLect count(*) from charac_info where m_id=%s",uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 != '\x01') {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      return false;
    }
    local_30 = 0;
    cVar1 = MySQL::fetch(local_10);
    if ((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_10,0,&local_30), cVar1 == '\x01')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      return false;
    }
    if (local_30 == 0) {
      param_1[0x534d] = (SIG_CREATE_CHARAC)0x1;
    }
  }
  pcVar5 = local_6c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar7 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_10,local_6c,(char *)(param_1 + 4));
  if ((char)param_1[0x23] < '\x01') {
    if ((char)param_1[0x23] < '\0') {
      *(undefined4 *)(param_1 + 0x5344) = 4;
      return false;
    }
  }
  else {
    cVar1 = _checkCreateEventCharacter(this,param_1);
    if (cVar1 != '\x01') {
      return false;
    }
    _updateCreateEventCharacter(this,param_1);
  }
  MakeInsertCharacInfo(this,local_10,param_1,local_6c);
  local_11 = MySQL::exec(local_10,true);
  bVar6 = local_11 == '\x01';
  if (!bVar6) {
    uVar2 = NumberToString(*(uint *)param_1,0);
    cMyTrace::cMyTrace(local_24,"bool DB_CreateCharac::CreateNewCharac(SIG_CREATE_CHARAC*)",0x10e2,5
                      );
    cMyTrace::operator()(local_24,"DB_CreateCharac::CreateNewCharac, exec() ERROR m_id=%s",uVar2);
    *(undefined4 *)(param_1 + 0x5344) = 1;
  }
  return bVar6;
}

```

---

## CreatePvP

```asm
// === 084026ec DB_CreateCharac::CreatePvP  [0x084026ec-0x840275b] ===
 84026ec:	55                   	push   %ebp
 84026ed:	89 e5                	mov    %esp,%ebp
 84026ef:	83 ec 28             	sub    $0x28,%esp
 84026f2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84026f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84026fe:	00 
 84026ff:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8402706:	00 
 8402707:	89 04 24             	mov    %eax,(%esp)
 840270a:	e8 2f 2b ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840270f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8402712:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402715:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402719:	c7 44 24 04 34 31 c4 	movl   $0x8c43134,0x4(%esp)
 8402720:	08 
 8402721:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402724:	89 04 24             	mov    %eax,(%esp)
 8402727:	e8 94 1a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840272c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8402733:	00 
 8402734:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402737:	89 04 24             	mov    %eax,(%esp)
 840273a:	e8 e7 1b ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840273f:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402742:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8402746:	83 f0 01             	xor    $0x1,%eax
 8402749:	84 c0                	test   %al,%al
 840274b:	74 07                	je     8402754 <_ZN15DB_CreateCharac9CreatePvPEj+0x68>
 840274d:	b8 00 00 00 00       	mov    $0x0,%eax
 8402752:	eb 05                	jmp    8402759 <_ZN15DB_CreateCharac9CreatePvPEj+0x6d>
 8402754:	b8 01 00 00 00       	mov    $0x1,%eax
 8402759:	c9                   	leave
 840275a:	c3                   	ret
 840275b:	90                   	nop

```

```c
// DB_CreateCharac::CreatePvP @ 0x84026ec

/* DB_CreateCharac::CreatePvP(unsigned int) */

bool __thiscall DB_CreateCharac::CreatePvP(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into pvp_result (charac_no) values(%u)",param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## CreateSkill

```asm
// === 084024e6 DB_CreateCharac::CreateSkill  [0x084024e6-0x84026eb] ===
 84024e6:	55                   	push   %ebp
 84024e7:	89 e5                	mov    %esp,%ebp
 84024e9:	57                   	push   %edi
 84024ea:	53                   	push   %ebx
 84024eb:	81 ec 20 04 00 00    	sub    $0x420,%esp
 84024f1:	8d 95 f3 fd ff ff    	lea    -0x20d(%ebp),%edx
 84024f7:	bb f5 01 00 00       	mov    $0x1f5,%ebx
 84024fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8402501:	89 d1                	mov    %edx,%ecx
 8402503:	83 e1 01             	and    $0x1,%ecx
 8402506:	85 c9                	test   %ecx,%ecx
 8402508:	74 08                	je     8402512 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x2c>
 840250a:	88 02                	mov    %al,(%edx)
 840250c:	83 c2 01             	add    $0x1,%edx
 840250f:	83 eb 01             	sub    $0x1,%ebx
 8402512:	89 d1                	mov    %edx,%ecx
 8402514:	83 e1 02             	and    $0x2,%ecx
 8402517:	85 c9                	test   %ecx,%ecx
 8402519:	74 09                	je     8402524 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x3e>
 840251b:	66 89 02             	mov    %ax,(%edx)
 840251e:	83 c2 02             	add    $0x2,%edx
 8402521:	83 eb 02             	sub    $0x2,%ebx
 8402524:	89 d9                	mov    %ebx,%ecx
 8402526:	c1 e9 02             	shr    $0x2,%ecx
 8402529:	89 d7                	mov    %edx,%edi
 840252b:	f3 ab                	rep stos %eax,%es:(%edi)
 840252d:	89 fa                	mov    %edi,%edx
 840252f:	89 d9                	mov    %ebx,%ecx
 8402531:	83 e1 02             	and    $0x2,%ecx
 8402534:	85 c9                	test   %ecx,%ecx
 8402536:	74 06                	je     840253e <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x58>
 8402538:	66 89 02             	mov    %ax,(%edx)
 840253b:	83 c2 02             	add    $0x2,%edx
 840253e:	89 d9                	mov    %ebx,%ecx
 8402540:	83 e1 01             	and    $0x1,%ecx
 8402543:	85 c9                	test   %ecx,%ecx
 8402545:	74 05                	je     840254c <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x66>
 8402547:	88 02                	mov    %al,(%edx)
 8402549:	83 c2 01             	add    $0x1,%edx
 840254c:	8d 95 fe fb ff ff    	lea    -0x402(%ebp),%edx
 8402552:	bb f5 01 00 00       	mov    $0x1f5,%ebx
 8402557:	b8 00 00 00 00       	mov    $0x0,%eax
 840255c:	89 d1                	mov    %edx,%ecx
 840255e:	83 e1 02             	and    $0x2,%ecx
 8402561:	85 c9                	test   %ecx,%ecx
 8402563:	74 09                	je     840256e <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x88>
 8402565:	66 89 02             	mov    %ax,(%edx)
 8402568:	83 c2 02             	add    $0x2,%edx
 840256b:	83 eb 02             	sub    $0x2,%ebx
 840256e:	89 d9                	mov    %ebx,%ecx
 8402570:	c1 e9 02             	shr    $0x2,%ecx
 8402573:	89 d7                	mov    %edx,%edi
 8402575:	f3 ab                	rep stos %eax,%es:(%edi)
 8402577:	89 fa                	mov    %edi,%edx
 8402579:	89 d9                	mov    %ebx,%ecx
 840257b:	83 e1 02             	and    $0x2,%ecx
 840257e:	85 c9                	test   %ecx,%ecx
 8402580:	74 06                	je     8402588 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0xa2>
 8402582:	66 89 02             	mov    %ax,(%edx)
 8402585:	83 c2 02             	add    $0x2,%edx
 8402588:	89 d9                	mov    %ebx,%ecx
 840258a:	83 e1 01             	and    $0x1,%ecx
 840258d:	85 c9                	test   %ecx,%ecx
 840258f:	74 05                	je     8402596 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0xb0>
 8402591:	88 02                	mov    %al,(%edx)
 8402593:	83 c2 01             	add    $0x1,%edx
 8402596:	c7 45 ec f5 01 00 00 	movl   $0x1f5,-0x14(%ebp)
 840259d:	c7 45 e8 f5 01 00 00 	movl   $0x1f5,-0x18(%ebp)
 84025a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84025a7:	83 c0 79             	add    $0x79,%eax
 84025aa:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84025b1:	00 
 84025b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84025b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84025b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84025bd:	8d 85 f3 fd ff ff    	lea    -0x20d(%ebp),%eax
 84025c3:	89 04 24             	mov    %eax,(%esp)
 84025c6:	e8 54 fa 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 84025cb:	83 f0 01             	xor    $0x1,%eax
 84025ce:	84 c0                	test   %al,%al
 84025d0:	74 0a                	je     84025dc <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0xf6>
 84025d2:	b8 00 00 00 00       	mov    $0x0,%eax
 84025d7:	e9 06 01 00 00       	jmp    84026e2 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x1fc>
 84025dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84025df:	05 11 02 00 00       	add    $0x211,%eax
 84025e4:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84025eb:	00 
 84025ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 84025f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84025f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84025f7:	8d 85 fe fb ff ff    	lea    -0x402(%ebp),%eax
 84025fd:	89 04 24             	mov    %eax,(%esp)
 8402600:	e8 1a fa 2a 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 8402605:	83 f0 01             	xor    $0x1,%eax
 8402608:	84 c0                	test   %al,%al
 840260a:	74 0a                	je     8402616 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x130>
 840260c:	b8 00 00 00 00       	mov    $0x0,%eax
 8402611:	e9 cc 00 00 00       	jmp    84026e2 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x1fc>
 8402616:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840261b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8402622:	00 
 8402623:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 840262a:	00 
 840262b:	89 04 24             	mov    %eax,(%esp)
 840262e:	e8 0b 2c ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8402633:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8402636:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8402639:	89 44 24 0c          	mov    %eax,0xc(%esp)
 840263d:	8d 85 fe fb ff ff    	lea    -0x402(%ebp),%eax
 8402643:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402647:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 840264e:	00 
 840264f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402652:	89 04 24             	mov    %eax,(%esp)
 8402655:	e8 d0 1e ff ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 840265a:	89 c3                	mov    %eax,%ebx
 840265c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 840265f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402663:	8d 85 f3 fd ff ff    	lea    -0x20d(%ebp),%eax
 8402669:	89 44 24 08          	mov    %eax,0x8(%esp)
 840266d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8402674:	00 
 8402675:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402678:	89 04 24             	mov    %eax,(%esp)
 840267b:	e8 aa 1e ff ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8402680:	8b 55 0c             	mov    0xc(%ebp),%edx
 8402683:	8b 8a 50 53 00 00    	mov    0x5350(%edx),%ecx
 8402689:	8b 55 0c             	mov    0xc(%ebp),%edx
 840268c:	8b 92 48 53 00 00    	mov    0x5348(%edx),%edx
 8402692:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8402696:	89 44 24 10          	mov    %eax,0x10(%esp)
 840269a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 840269e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84026a2:	c7 44 24 04 d4 30 c4 	movl   $0x8c430d4,0x4(%esp)
 84026a9:	08 
 84026aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84026ad:	89 04 24             	mov    %eax,(%esp)
 84026b0:	e8 0b 1b ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84026b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84026bc:	00 
 84026bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84026c0:	89 04 24             	mov    %eax,(%esp)
 84026c3:	e8 5e 1c ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84026c8:	88 45 f3             	mov    %al,-0xd(%ebp)
 84026cb:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84026cf:	83 f0 01             	xor    $0x1,%eax
 84026d2:	84 c0                	test   %al,%al
 84026d4:	74 07                	je     84026dd <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x1f7>
 84026d6:	b8 00 00 00 00       	mov    $0x0,%eax
 84026db:	eb 05                	jmp    84026e2 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC+0x1fc>
 84026dd:	b8 01 00 00 00       	mov    $0x1,%eax
 84026e2:	81 c4 20 04 00 00    	add    $0x420,%esp
 84026e8:	5b                   	pop    %ebx
 84026e9:	5f                   	pop    %edi
 84026ea:	5d                   	pop    %ebp
 84026eb:	c3                   	ret

```

```c
// DB_CreateCharac::CreateSkill @ 0x84024e6

/* DB_CreateCharac::CreateSkill(SIG_CREATE_CHARAC*) */

undefined4 __thiscall DB_CreateCharac::CreateSkill(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_406 [1002];
  uint local_1c;
  uint local_18 [2];
  MySQL *local_10;
  
  pcVar5 = local_406 + 0x1f5;
  uVar6 = 0x1f5;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_406[0x1f5] = 0;
    pcVar5 = local_406 + 0x1f6;
    uVar6 = 500;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  pcVar5 = local_406;
  uVar6 = 0x1f5;
  bVar7 = ((uint)pcVar5 & 2) != 0;
  if (bVar7) {
    local_406[0] = '\0';
    local_406[1] = '\0';
    pcVar5 = local_406 + 2;
    uVar6 = 499;
  }
  for (uVar6 = uVar6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if (bVar7) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  *pcVar5 = '\0';
  local_18[0] = 0x1f5;
  local_1c = 0x1f5;
  cVar1 = compress_zip(local_406 + 0x1f5,local_18,(char *)(param_1 + 0x79),0x198);
  if (cVar1 == '\x01') {
    cVar1 = compress_zip(local_406,&local_1c,(char *)(param_1 + 0x211),0x198);
    if (cVar1 == '\x01') {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = MySQL::blob_to_str(local_10,1,local_406,local_1c);
      uVar3 = MySQL::blob_to_str(local_10,0,local_406 + 0x1f5,local_18[0]);
      MySQL::set_query(local_10,
                       "inSert into skill (charac_no, remain_sp ,skill_slot, skill_slot_2nd) values(%u,%u, \'%s\', \'%s\')"
                       ,*(undefined4 *)(param_1 + 0x5348),*(undefined4 *)(param_1 + 0x5350),uVar3,
                       uVar2);
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## DB_CreateCharac

```asm
// === 08400cc2 DB_CreateCharac::DB_CreateCharac  [0x08400cc2-0x8400cdd] ===
 8400cc2:	55                   	push   %ebp
 8400cc3:	89 e5                	mov    %esp,%ebp
 8400cc5:	83 ec 18             	sub    $0x18,%esp
 8400cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8400ccb:	89 04 24             	mov    %eax,(%esp)
 8400cce:	e8 d3 ca 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8400cd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8400cd6:	c7 00 78 fc c5 08    	movl   $0x8c5fc78,(%eax)
 8400cdc:	c9                   	leave
 8400cdd:	c3                   	ret

```

```c
// DB_CreateCharac::DB_CreateCharac @ 0x8400cc2

/* DB_CreateCharac::DB_CreateCharac() */

void __thiscall DB_CreateCharac::DB_CreateCharac(DB_CreateCharac *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc78;
  return;
}

```

---

## GetCharacNo

```asm
// === 0840275c DB_CreateCharac::GetCharacNo  [0x0840275c-0x84027af] ===
 840275c:	55                   	push   %ebp
 840275d:	89 e5                	mov    %esp,%ebp
 840275f:	83 ec 28             	sub    $0x28,%esp
 8402762:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8402767:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840276e:	00 
 840276f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8402776:	00 
 8402777:	89 04 24             	mov    %eax,(%esp)
 840277a:	e8 bf 2a ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840277f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8402782:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8402785:	89 04 24             	mov    %eax,(%esp)
 8402788:	e8 47 73 ff ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 840278d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8402790:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8402794:	75 07                	jne    840279d <_ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC+0x41>
 8402796:	b8 00 00 00 00       	mov    $0x0,%eax
 840279b:	eb 11                	jmp    84027ae <_ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC+0x52>
 840279d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84027a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84027a3:	89 90 48 53 00 00    	mov    %edx,0x5348(%eax)
 84027a9:	b8 01 00 00 00       	mov    $0x1,%eax
 84027ae:	c9                   	leave
 84027af:	c3                   	ret

```

```c
// DB_CreateCharac::GetCharacNo @ 0x840275c

/* DB_CreateCharac::GetCharacNo(SIG_CREATE_CHARAC*) */

bool __thiscall DB_CreateCharac::GetCharacNo(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  int iVar2;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar2 = WongWork::DBCommon::GetIdentity(pMVar1);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x5348) = iVar2;
  }
  return iVar2 != 0;
}

```

---

## InsertLimitCreateNewCharac

```asm
// === 084016ae DB_CreateCharac::InsertLimitCreateNewCharac  [0x084016ae-0x8401863] ===
 84016ae:	55                   	push   %ebp
 84016af:	89 e5                	mov    %esp,%ebp
 84016b1:	57                   	push   %edi
 84016b2:	56                   	push   %esi
 84016b3:	53                   	push   %ebx
 84016b4:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 84016ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84016bd:	8b 10                	mov    (%eax),%edx
 84016bf:	a1 10 f7 41 09       	mov    0x941f710,%eax
 84016c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84016c8:	89 04 24             	mov    %eax,(%esp)
 84016cb:	e8 76 7c d0 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 84016d0:	84 c0                	test   %al,%al
 84016d2:	74 0a                	je     84016de <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x30>
 84016d4:	b8 01 00 00 00       	mov    $0x1,%eax
 84016d9:	e9 7b 01 00 00       	jmp    8401859 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1ab>
 84016de:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84016e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84016ea:	00 
 84016eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84016f2:	00 
 84016f3:	89 04 24             	mov    %eax,(%esp)
 84016f6:	e8 43 3b ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84016fb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84016fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401701:	8b 00                	mov    (%eax),%eax
 8401703:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840170a:	00 
 840170b:	89 04 24             	mov    %eax,(%esp)
 840170e:	e8 38 79 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401713:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401717:	c7 44 24 04 bc 2c c4 	movl   $0x8c42cbc,0x4(%esp)
 840171e:	08 
 840171f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401722:	89 04 24             	mov    %eax,(%esp)
 8401725:	e8 96 2a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840172a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401731:	00 
 8401732:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401735:	89 04 24             	mov    %eax,(%esp)
 8401738:	e8 e9 2b ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840173d:	83 f0 01             	xor    $0x1,%eax
 8401740:	84 c0                	test   %al,%al
 8401742:	74 17                	je     840175b <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0xad>
 8401744:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401747:	c7 80 44 53 00 00 05 	movl   $0x5,0x5344(%eax)
 840174e:	00 00 00 
 8401751:	b8 00 00 00 00       	mov    $0x0,%eax
 8401756:	e9 fe 00 00 00       	jmp    8401859 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC+0x1ab>
 840175b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401762:	e8 37 a5 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8401767:	89 45 cc             	mov    %eax,-0x34(%ebp)
 840176a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 840176d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401771:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8401774:	89 04 24             	mov    %eax,(%esp)
 8401777:	e8 e4 cb c7 ff       	call   807e360 <localtime_r@plt>
 840177c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 840177f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401782:	8b 18                	mov    (%eax),%ebx
 8401784:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401787:	8b 48 04             	mov    0x4(%eax),%ecx
 840178a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 840178d:	8b 50 08             	mov    0x8(%eax),%edx
 8401790:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401793:	8b 40 0c             	mov    0xc(%eax),%eax
 8401796:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8401799:	8b 76 10             	mov    0x10(%esi),%esi
 840179c:	8d 7e 01             	lea    0x1(%esi),%edi
 840179f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 84017a2:	8b 76 14             	mov    0x14(%esi),%esi
 84017a5:	81 c6 6c 07 00 00    	add    $0x76c,%esi
 84017ab:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84017af:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84017b3:	89 54 24 14          	mov    %edx,0x14(%esp)
 84017b7:	89 44 24 10          	mov    %eax,0x10(%esp)
 84017bb:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84017bf:	89 74 24 08          	mov    %esi,0x8(%esp)
 84017c3:	c7 44 24 04 05 2d c4 	movl   $0x8c42d05,0x4(%esp)
 84017ca:	08 
 84017cb:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 84017d1:	89 04 24             	mov    %eax,(%esp)
 84017d4:	e8 67 cc c7 ff       	call   807e440 <sprintf@plt>
 84017d9:	e8 a3 a9 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84017de:	89 04 24             	mov    %eax,(%esp)
 84017e1:	e8 fa 54 d0 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 84017e6:	89 c6                	mov    %eax,%esi
 84017e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84017eb:	8b b8 48 53 00 00    	mov    0x5348(%eax),%edi
 84017f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84017f4:	8b 00                	mov    (%eax),%eax
 84017f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84017fd:	00 
 84017fe:	89 04 24             	mov    %eax,(%esp)
 8401801:	e8 45 78 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401806:	89 c3                	mov    %eax,%ebx
 8401808:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 840180f:	00 
 8401810:	c7 44 24 08 76 0e 00 	movl   $0xe76,0x8(%esp)
 8401817:	00 
 8401818:	c7 44 24 04 40 d9 c5 	movl   $0x8c5d940,0x4(%esp)
 840181f:	08 
 8401820:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8401823:	89 04 24             	mov    %eax,(%esp)
 8401826:	e8 ed de 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840182b:	89 74 24 14          	mov    %esi,0x14(%esp)
 840182f:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 8401835:	89 44 24 10          	mov    %eax,0x10(%esp)
 8401839:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 840183d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8401841:	c7 44 24 04 24 2d c4 	movl   $0x8c42d24,0x4(%esp)
 8401848:	08 
 8401849:	8d 45 d0             	lea    -0x30(%ebp),%eax
 840184c:	89 04 24             	mov    %eax,(%esp)
 840184f:	e8 34 df 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8401854:	b8 01 00 00 00       	mov    $0x1,%eax
 8401859:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 840185f:	5b                   	pop    %ebx
 8401860:	5e                   	pop    %esi
 8401861:	5f                   	pop    %edi
 8401862:	5d                   	pop    %ebp
 8401863:	c3                   	ret

```

```c
// DB_CreateCharac::InsertLimitCreateNewCharac @ 0x84016ae

/* DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::InsertLimitCreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_164 [256];
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  tm *local_20;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)param_1);
  if (cVar1 == '\0') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_24,
                     "inSert into limit_create_character(m_id, create_time) values(%s, now() )",
                     uVar2);
    cVar1 = MySQL::exec(local_24,true);
    if (cVar1 == '\x01') {
      local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = localtime_r(&local_38,&local_64);
      sprintf(local_164,"%04d-%02d-%02d %02d:%02d:%02d",local_20->tm_year + 0x76c,
              local_20->tm_mon + 1,local_20->tm_mday,local_20->tm_hour,local_20->tm_min,
              local_20->tm_sec);
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_server_group(this_00);
      uVar2 = *(undefined4 *)(param_1 + 0x5348);
      uVar4 = NumberToString(*(uint *)param_1,0);
      cMyTrace::cMyTrace(local_34,
                         "bool DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*)",
                         0xe76,0);
      cMyTrace::operator()(local_34,"[LIMIT NEW CHARAC] %s,%d,%s,%d",uVar4,uVar2,local_164,uVar3);
      uVar2 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 5;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## InsertLimitCreateNewCharac_08401b9a

```asm
// === 08401b9a DB_CreateCharac::InsertLimitCreateNewCharac  [0x08401b9a-0x8401dcb] ===
 8401b9a:	55                   	push   %ebp
 8401b9b:	89 e5                	mov    %esp,%ebp
 8401b9d:	57                   	push   %edi
 8401b9e:	56                   	push   %esi
 8401b9f:	53                   	push   %ebx
 8401ba0:	81 ec 8c 01 00 00    	sub    $0x18c,%esp
 8401ba6:	8b 45 10             	mov    0x10(%ebp),%eax
 8401ba9:	88 85 94 fe ff ff    	mov    %al,-0x16c(%ebp)
 8401baf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401bb2:	8b 10                	mov    (%eax),%edx
 8401bb4:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8401bb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8401bbd:	89 04 24             	mov    %eax,(%esp)
 8401bc0:	e8 81 77 d0 ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 8401bc5:	84 c0                	test   %al,%al
 8401bc7:	74 0a                	je     8401bd3 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x39>
 8401bc9:	b8 01 00 00 00       	mov    $0x1,%eax
 8401bce:	e9 ee 01 00 00       	jmp    8401dc1 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x227>
 8401bd3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8401bd8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8401bdf:	00 
 8401be0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401be7:	00 
 8401be8:	89 04 24             	mov    %eax,(%esp)
 8401beb:	e8 4e 36 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8401bf0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8401bf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401bf6:	8b 00                	mov    (%eax),%eax
 8401bf8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401bff:	00 
 8401c00:	89 04 24             	mov    %eax,(%esp)
 8401c03:	e8 43 74 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401c08:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401c0c:	c7 44 24 04 c4 2d c4 	movl   $0x8c42dc4,0x4(%esp)
 8401c13:	08 
 8401c14:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401c17:	89 04 24             	mov    %eax,(%esp)
 8401c1a:	e8 a1 25 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8401c1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401c26:	00 
 8401c27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401c2a:	89 04 24             	mov    %eax,(%esp)
 8401c2d:	e8 f4 26 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401c32:	83 f0 01             	xor    $0x1,%eax
 8401c35:	84 c0                	test   %al,%al
 8401c37:	74 17                	je     8401c50 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0xb6>
 8401c39:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401c3c:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401c43:	00 00 00 
 8401c46:	b8 00 00 00 00       	mov    $0x0,%eax
 8401c4b:	e9 71 01 00 00       	jmp    8401dc1 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x227>
 8401c50:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401c53:	89 04 24             	mov    %eax,(%esp)
 8401c56:	e8 b5 26 ff ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8401c5b:	09 d0                	or     %edx,%eax
 8401c5d:	85 c0                	test   %eax,%eax
 8401c5f:	0f 94 c0             	sete   %al
 8401c62:	84 c0                	test   %al,%al
 8401c64:	74 5d                	je     8401cc3 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x129>
 8401c66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401c69:	8b 00                	mov    (%eax),%eax
 8401c6b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401c72:	00 
 8401c73:	89 04 24             	mov    %eax,(%esp)
 8401c76:	e8 d0 73 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401c7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401c7f:	c7 44 24 04 1c 2e c4 	movl   $0x8c42e1c,0x4(%esp)
 8401c86:	08 
 8401c87:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401c8a:	89 04 24             	mov    %eax,(%esp)
 8401c8d:	e8 2e 25 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8401c92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401c99:	00 
 8401c9a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8401c9d:	89 04 24             	mov    %eax,(%esp)
 8401ca0:	e8 81 26 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401ca5:	83 f0 01             	xor    $0x1,%eax
 8401ca8:	84 c0                	test   %al,%al
 8401caa:	74 17                	je     8401cc3 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x129>
 8401cac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401caf:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401cb6:	00 00 00 
 8401cb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8401cbe:	e9 fe 00 00 00       	jmp    8401dc1 <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb+0x227>
 8401cc3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401cca:	e8 cf 9f cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8401ccf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8401cd2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8401cd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401cd9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8401cdc:	89 04 24             	mov    %eax,(%esp)
 8401cdf:	e8 7c c6 c7 ff       	call   807e360 <localtime_r@plt>
 8401ce4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8401ce7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401cea:	8b 18                	mov    (%eax),%ebx
 8401cec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401cef:	8b 48 04             	mov    0x4(%eax),%ecx
 8401cf2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401cf5:	8b 50 08             	mov    0x8(%eax),%edx
 8401cf8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8401cfb:	8b 40 0c             	mov    0xc(%eax),%eax
 8401cfe:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8401d01:	8b 76 10             	mov    0x10(%esi),%esi
 8401d04:	8d 7e 01             	lea    0x1(%esi),%edi
 8401d07:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8401d0a:	8b 76 14             	mov    0x14(%esi),%esi
 8401d0d:	81 c6 6c 07 00 00    	add    $0x76c,%esi
 8401d13:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8401d17:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8401d1b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8401d1f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8401d23:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8401d27:	89 74 24 08          	mov    %esi,0x8(%esp)
 8401d2b:	c7 44 24 04 05 2d c4 	movl   $0x8c42d05,0x4(%esp)
 8401d32:	08 
 8401d33:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 8401d39:	89 04 24             	mov    %eax,(%esp)
 8401d3c:	e8 ff c6 c7 ff       	call   807e440 <sprintf@plt>
 8401d41:	e8 3b a4 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8401d46:	89 04 24             	mov    %eax,(%esp)
 8401d49:	e8 92 4f d0 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8401d4e:	89 c6                	mov    %eax,%esi
 8401d50:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401d53:	8b b8 48 53 00 00    	mov    0x5348(%eax),%edi
 8401d59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401d5c:	8b 00                	mov    (%eax),%eax
 8401d5e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401d65:	00 
 8401d66:	89 04 24             	mov    %eax,(%esp)
 8401d69:	e8 dd 72 d0 ff       	call   810904b <_Z14NumberToStringji>
 8401d6e:	89 c3                	mov    %eax,%ebx
 8401d70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8401d77:	00 
 8401d78:	c7 44 24 08 61 0f 00 	movl   $0xf61,0x8(%esp)
 8401d7f:	00 
 8401d80:	c7 44 24 04 80 d8 c5 	movl   $0x8c5d880,0x4(%esp)
 8401d87:	08 
 8401d88:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8401d8b:	89 04 24             	mov    %eax,(%esp)
 8401d8e:	e8 85 d9 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8401d93:	89 74 24 14          	mov    %esi,0x14(%esp)
 8401d97:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 8401d9d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8401da1:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8401da5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8401da9:	c7 44 24 04 24 2d c4 	movl   $0x8c42d24,0x4(%esp)
 8401db0:	08 
 8401db1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8401db4:	89 04 24             	mov    %eax,(%esp)
 8401db7:	e8 cc d9 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8401dbc:	b8 01 00 00 00       	mov    $0x1,%eax
 8401dc1:	81 c4 8c 01 00 00    	add    $0x18c,%esp
 8401dc7:	5b                   	pop    %ebx
 8401dc8:	5e                   	pop    %esi
 8401dc9:	5f                   	pop    %edi
 8401dca:	5d                   	pop    %ebp
 8401dcb:	c3                   	ret

```

```c
// DB_CreateCharac::InsertLimitCreateNewCharac @ 0x8401b9a

/* DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool) */

undefined4 DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC *param_1,bool param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  CEnvironment *this;
  undefined4 uVar4;
  longlong lVar5;
  undefined3 in_stack_00000009;
  char local_164 [256];
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  tm *local_20;
  
  cVar2 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*_param_2);
  if (cVar2 == '\0') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(*_param_2,0);
    MySQL::set_query(local_24,
                     "upDate limit_create_character set count=count+1, last_access_time=now() where m_id=%s"
                     ,uVar3);
    cVar2 = MySQL::exec(local_24,true);
    if (cVar2 == '\x01') {
      lVar5 = MySQL::getAffectedRowCount(local_24);
      if (lVar5 == 0) {
        uVar3 = NumberToString(*_param_2,0);
        MySQL::set_query(local_24,
                         "inSert into limit_create_character(m_id, count, last_access_time) values(%s, 1, now() )"
                         ,uVar3);
        cVar2 = MySQL::exec(local_24,true);
        if (cVar2 != '\x01') {
          _param_2[0x14d1] = 2;
          return 0;
        }
      }
      local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = localtime_r(&local_38,&local_64);
      sprintf(local_164,"%04d-%02d-%02d %02d:%02d:%02d",local_20->tm_year + 0x76c,
              local_20->tm_mon + 1,local_20->tm_mday,local_20->tm_hour,local_20->tm_min,
              local_20->tm_sec);
      this = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_server_group(this);
      uVar1 = _param_2[0x14d2];
      uVar4 = NumberToString(*_param_2,0);
      cMyTrace::cMyTrace(local_34,
                         "bool DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)"
                         ,0xf61,0);
      cMyTrace::operator()(local_34,"[LIMIT NEW CHARAC] %s,%d,%s,%d",uVar4,uVar1,local_164,uVar3);
      uVar3 = 1;
    }
    else {
      _param_2[0x14d1] = 2;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## MakeInsertCharacInfo

```asm
// === 080ec2a0 DB_CreateCharac::MakeInsertCharacInfo  [0x080ec2a0-0x80ec4a9] ===
 80ec2a0:	55                   	push   %ebp
 80ec2a1:	89 e5                	mov    %esp,%ebp
 80ec2a3:	57                   	push   %edi
 80ec2a4:	56                   	push   %esi
 80ec2a5:	53                   	push   %ebx
 80ec2a6:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 80ec2ac:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2af:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 80ec2b3:	0f be c0             	movsbl %al,%eax
 80ec2b6:	89 45 9c             	mov    %eax,-0x64(%ebp)
 80ec2b9:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2bc:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 80ec2c0:	0f be c0             	movsbl %al,%eax
 80ec2c3:	89 45 a0             	mov    %eax,-0x60(%ebp)
 80ec2c6:	a1 5c 0f 37 09       	mov    0x9370f5c,%eax
 80ec2cb:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 80ec2ce:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2d1:	8b 40 74             	mov    0x74(%eax),%eax
 80ec2d4:	89 45 a8             	mov    %eax,-0x58(%ebp)
 80ec2d7:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2da:	0f b7 40 72          	movzwl 0x72(%eax),%eax
 80ec2de:	98                   	cwtl
 80ec2df:	89 45 ac             	mov    %eax,-0x54(%ebp)
 80ec2e2:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2e5:	0f b7 40 70          	movzwl 0x70(%eax),%eax
 80ec2e9:	98                   	cwtl
 80ec2ea:	89 45 b0             	mov    %eax,-0x50(%ebp)
 80ec2ed:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2f0:	0f b7 40 6e          	movzwl 0x6e(%eax),%eax
 80ec2f4:	0f b7 c0             	movzwl %ax,%eax
 80ec2f7:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 80ec2fa:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec2fd:	0f b7 40 6c          	movzwl 0x6c(%eax),%eax
 80ec301:	0f b7 c0             	movzwl %ax,%eax
 80ec304:	89 45 b8             	mov    %eax,-0x48(%ebp)
 80ec307:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec30a:	8b 40 68             	mov    0x68(%eax),%eax
 80ec30d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 80ec310:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec313:	0f b7 40 66          	movzwl 0x66(%eax),%eax
 80ec317:	98                   	cwtl
 80ec318:	89 45 c0             	mov    %eax,-0x40(%ebp)
 80ec31b:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec31e:	0f b7 40 64          	movzwl 0x64(%eax),%eax
 80ec322:	98                   	cwtl
 80ec323:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80ec326:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec329:	8b 40 60             	mov    0x60(%eax),%eax
 80ec32c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 80ec32f:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec332:	83 c0 3e             	add    $0x3e,%eax
 80ec335:	c7 44 24 0c 22 00 00 	movl   $0x22,0xc(%esp)
 80ec33c:	00 
 80ec33d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ec341:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80ec348:	00 
 80ec349:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ec34c:	89 04 24             	mov    %eax,(%esp)
 80ec34f:	e8 d6 81 30 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 80ec354:	89 45 cc             	mov    %eax,-0x34(%ebp)
 80ec357:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec35a:	83 c0 36             	add    $0x36,%eax
 80ec35d:	c7 44 24 0c 08 00 00 	movl   $0x8,0xc(%esp)
 80ec364:	00 
 80ec365:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ec369:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ec370:	00 
 80ec371:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ec374:	89 04 24             	mov    %eax,(%esp)
 80ec377:	e8 ae 81 30 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 80ec37c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80ec37f:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec382:	0f b7 40 34          	movzwl 0x34(%eax),%eax
 80ec386:	0f b7 c0             	movzwl %ax,%eax
 80ec389:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80ec38c:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec38f:	0f b7 40 32          	movzwl 0x32(%eax),%eax
 80ec393:	0f b7 c0             	movzwl %ax,%eax
 80ec396:	89 45 d8             	mov    %eax,-0x28(%ebp)
 80ec399:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec39c:	0f b7 40 30          	movzwl 0x30(%eax),%eax
 80ec3a0:	0f b7 c0             	movzwl %ax,%eax
 80ec3a3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80ec3a6:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3a9:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 80ec3ad:	0f b7 c0             	movzwl %ax,%eax
 80ec3b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80ec3b3:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3b6:	8b 40 2a             	mov    0x2a(%eax),%eax
 80ec3b9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ec3bc:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3bf:	8b 78 26             	mov    0x26(%eax),%edi
 80ec3c2:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3c5:	0f b6 80 4c 53 00 00 	movzbl 0x534c(%eax),%eax
 80ec3cc:	0f be f0             	movsbl %al,%esi
 80ec3cf:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3d2:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 80ec3d6:	0f be d8             	movsbl %al,%ebx
 80ec3d9:	8b 45 10             	mov    0x10(%ebp),%eax
 80ec3dc:	8b 00                	mov    (%eax),%eax
 80ec3de:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80ec3e5:	00 
 80ec3e6:	89 04 24             	mov    %eax,(%esp)
 80ec3e9:	e8 5d cc 01 00       	call   810904b <_Z14NumberToStringji>
 80ec3ee:	89 c2                	mov    %eax,%edx
 80ec3f0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80ec3f3:	89 44 24 64          	mov    %eax,0x64(%esp)
 80ec3f7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80ec3fa:	89 44 24 60          	mov    %eax,0x60(%esp)
 80ec3fe:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80ec401:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 80ec405:	8b 45 a8             	mov    -0x58(%ebp),%eax
 80ec408:	89 44 24 58          	mov    %eax,0x58(%esp)
 80ec40c:	8b 45 ac             	mov    -0x54(%ebp),%eax
 80ec40f:	89 44 24 54          	mov    %eax,0x54(%esp)
 80ec413:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80ec416:	89 44 24 50          	mov    %eax,0x50(%esp)
 80ec41a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 80ec41d:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 80ec421:	8b 45 b8             	mov    -0x48(%ebp),%eax
 80ec424:	89 44 24 48          	mov    %eax,0x48(%esp)
 80ec428:	8b 45 bc             	mov    -0x44(%ebp),%eax
 80ec42b:	89 44 24 44          	mov    %eax,0x44(%esp)
 80ec42f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80ec432:	89 44 24 40          	mov    %eax,0x40(%esp)
 80ec436:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 80ec439:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 80ec43d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80ec440:	89 44 24 38          	mov    %eax,0x38(%esp)
 80ec444:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80ec447:	89 44 24 34          	mov    %eax,0x34(%esp)
 80ec44b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80ec44e:	89 44 24 30          	mov    %eax,0x30(%esp)
 80ec452:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80ec455:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 80ec459:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80ec45c:	89 44 24 28          	mov    %eax,0x28(%esp)
 80ec460:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80ec463:	89 44 24 24          	mov    %eax,0x24(%esp)
 80ec467:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80ec46a:	89 44 24 20          	mov    %eax,0x20(%esp)
 80ec46e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80ec471:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 80ec475:	89 7c 24 18          	mov    %edi,0x18(%esp)
 80ec479:	89 74 24 14          	mov    %esi,0x14(%esp)
 80ec47d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 80ec481:	8b 45 14             	mov    0x14(%ebp),%eax
 80ec484:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80ec488:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ec48c:	c7 44 24 04 c0 3d b3 	movl   $0x8b33dc0,0x4(%esp)
 80ec493:	08 
 80ec494:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ec497:	89 04 24             	mov    %eax,(%esp)
 80ec49a:	e8 21 7d 30 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 80ec49f:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 80ec4a5:	5b                   	pop    %ebx
 80ec4a6:	5e                   	pop    %esi
 80ec4a7:	5f                   	pop    %edi
 80ec4a8:	5d                   	pop    %ebp
 80ec4a9:	c3                   	ret

```

```c
// DB_CreateCharac::MakeInsertCharacInfo @ 0x80ec2a0

/* DB_CreateCharac::MakeInsertCharacInfo(MySQL*, SIG_CREATE_CHARAC*, char const*) */

void __thiscall
DB_CreateCharac::MakeInsertCharacInfo
          (DB_CreateCharac *this,MySQL *param_1,SIG_CREATE_CHARAC *param_2,char *param_3)

{
  SIG_CREATE_CHARAC SVar1;
  SIG_CREATE_CHARAC SVar2;
  SIG_CREATE_CHARAC SVar3;
  SIG_CREATE_CHARAC SVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  short sVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  uVar20 = DEFAULT_MAX_FATIGUE;
  SVar1 = param_2[0x23];
  SVar2 = param_2[0x25];
  uVar15 = *(undefined4 *)(param_2 + 0x74);
  sVar5 = *(short *)(param_2 + 0x72);
  sVar6 = *(short *)(param_2 + 0x70);
  uVar7 = *(ushort *)(param_2 + 0x6e);
  uVar8 = *(ushort *)(param_2 + 0x6c);
  uVar16 = *(undefined4 *)(param_2 + 0x68);
  sVar9 = *(short *)(param_2 + 0x66);
  sVar10 = *(short *)(param_2 + 100);
  uVar17 = *(undefined4 *)(param_2 + 0x60);
  uVar21 = MySQL::blob_to_str(param_1,1,param_2 + 0x3e,0x22);
  uVar22 = MySQL::blob_to_str(param_1,0,param_2 + 0x36,8);
  uVar11 = *(ushort *)(param_2 + 0x34);
  uVar12 = *(ushort *)(param_2 + 0x32);
  uVar13 = *(ushort *)(param_2 + 0x30);
  uVar14 = *(ushort *)(param_2 + 0x2e);
  uVar18 = *(undefined4 *)(param_2 + 0x2a);
  uVar19 = *(undefined4 *)(param_2 + 0x26);
  SVar3 = param_2[0x534c];
  SVar4 = param_2[0x22];
  uVar23 = NumberToString(*(uint *)param_2,0);
  MySQL::set_query(param_1,
                   "inSert into charac_info (m_id,charac_name,job,sex,maxHP,maxMP,phy_attack,phy_defense,mag_attack,mag_defense,element_resist,spec_property,inven_weight,hp_regen,mp_regen,move_speed,attack_speed,cast_speed,hit_recovery,jump,charac_weight,max_fatigue,create_time,expert_job,event_charac_level) values(%s,\'%s\',%d,%d,%d,%u,%d,%d,%d,%d,\'%s\',\'%s\',%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,NOW(),%d,%d)"
                   ,uVar23,param_3,(int)(char)SVar4,(int)(char)SVar3,uVar19,uVar18,(uint)uVar14,
                   (uint)uVar13,(uint)uVar12,(uint)uVar11,uVar22,uVar21,uVar17,(int)sVar10,
                   (int)sVar9,uVar16,(uint)uVar8,(uint)uVar7,(int)sVar6,(int)sVar5,uVar15,uVar20,
                   (int)(char)SVar2,(int)(char)SVar1);
  return;
}

```

---

## SendResult

```asm
// === 084027b0 DB_CreateCharac::SendResult  [0x084027b0-0x8402891] ===
 84027b0:	55                   	push   %ebp
 84027b1:	89 e5                	mov    %esp,%ebp
 84027b3:	56                   	push   %esi
 84027b4:	53                   	push   %ebx
 84027b5:	83 ec 20             	sub    $0x20,%esp
 84027b8:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 84027bd:	c7 44 24 08 db 11 00 	movl   $0x11db,0x8(%esp)
 84027c4:	00 
 84027c5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84027cc:	08 
 84027cd:	89 04 24             	mov    %eax,(%esp)
 84027d0:	e8 8d da e8 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 84027d5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84027dc:	00 
 84027dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84027e1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84027e4:	89 04 24             	mov    %eax,(%esp)
 84027e7:	e8 3a 64 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84027ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84027ef:	89 04 24             	mov    %eax,(%esp)
 84027f2:	e8 4f 64 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84027f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 84027fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84027fe:	89 04 24             	mov    %eax,(%esp)
 8402801:	e8 50 64 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8402806:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402809:	89 04 24             	mov    %eax,(%esp)
 840280c:	e8 35 64 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8402811:	8b 55 10             	mov    0x10(%ebp),%edx
 8402814:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402818:	89 04 24             	mov    %eax,(%esp)
 840281b:	e8 36 64 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8402820:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402823:	89 04 24             	mov    %eax,(%esp)
 8402826:	e8 23 64 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 840282b:	c7 44 24 08 54 53 00 	movl   $0x5354,0x8(%esp)
 8402832:	00 
 8402833:	8b 55 14             	mov    0x14(%ebp),%edx
 8402836:	89 54 24 04          	mov    %edx,0x4(%esp)
 840283a:	89 04 24             	mov    %eax,(%esp)
 840283d:	e8 10 be cd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8402842:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8402847:	8d 55 f0             	lea    -0x10(%ebp),%edx
 840284a:	89 54 24 08          	mov    %edx,0x8(%esp)
 840284e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8402855:	00 
 8402856:	89 04 24             	mov    %eax,(%esp)
 8402859:	e8 80 e7 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 840285e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8402863:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402866:	89 04 24             	mov    %eax,(%esp)
 8402869:	e8 64 a0 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840286e:	89 d8                	mov    %ebx,%eax
 8402870:	83 c4 20             	add    $0x20,%esp
 8402873:	5b                   	pop    %ebx
 8402874:	5e                   	pop    %esi
 8402875:	5d                   	pop    %ebp
 8402876:	c3                   	ret
 8402877:	89 d3                	mov    %edx,%ebx
 8402879:	89 c6                	mov    %eax,%esi
 840287b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 840287e:	89 04 24             	mov    %eax,(%esp)
 8402881:	e8 4c a0 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8402886:	89 f0                	mov    %esi,%eax
 8402888:	89 da                	mov    %ebx,%edx
 840288a:	89 04 24             	mov    %eax,(%esp)
 840288d:	e8 be 0e 6e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_CreateCharac::SendResult @ 0x84027b0

/* DB_CreateCharac::SendResult(int, int, SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::SendResult
          (DB_CreateCharac *this,int param_1,int param_2,SIG_CREATE_CHARAC *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x11db);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08402801 to 0840285d has its CatchHandler @ 08402877 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x5354);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## _CreateNewCharacStat

```asm
// === 0840215e DB_CreateCharac::_CreateNewCharacStat  [0x0840215e-0x840222f] ===
 840215e:	55                   	push   %ebp
 840215f:	89 e5                	mov    %esp,%ebp
 8402161:	53                   	push   %ebx
 8402162:	83 ec 34             	sub    $0x34,%esp
 8402165:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840216a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8402171:	00 
 8402172:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8402179:	00 
 840217a:	89 04 24             	mov    %eax,(%esp)
 840217d:	e8 bc 30 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8402182:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8402185:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402188:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 840218e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402192:	c7 44 24 04 20 2f c4 	movl   $0x8c42f20,0x4(%esp)
 8402199:	08 
 840219a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840219d:	89 04 24             	mov    %eax,(%esp)
 84021a0:	e8 1b 20 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84021a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84021ac:	00 
 84021ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84021b0:	89 04 24             	mov    %eax,(%esp)
 84021b3:	e8 6e 21 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84021b8:	83 f0 01             	xor    $0x1,%eax
 84021bb:	84 c0                	test   %al,%al
 84021bd:	74 65                	je     8402224 <_ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC+0xc6>
 84021bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84021c2:	8b 00                	mov    (%eax),%eax
 84021c4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84021cb:	00 
 84021cc:	89 04 24             	mov    %eax,(%esp)
 84021cf:	e8 77 6e d0 ff       	call   810904b <_Z14NumberToStringji>
 84021d4:	89 c3                	mov    %eax,%ebx
 84021d6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84021dd:	00 
 84021de:	c7 44 24 08 fb 10 00 	movl   $0x10fb,0x8(%esp)
 84021e5:	00 
 84021e6:	c7 44 24 04 00 d8 c5 	movl   $0x8c5d800,0x4(%esp)
 84021ed:	08 
 84021ee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84021f1:	89 04 24             	mov    %eax,(%esp)
 84021f4:	e8 1f d5 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84021f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84021fd:	c7 44 24 04 80 2f c4 	movl   $0x8c42f80,0x4(%esp)
 8402204:	08 
 8402205:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8402208:	89 04 24             	mov    %eax,(%esp)
 840220b:	e8 78 d5 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8402210:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402213:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 840221a:	00 00 00 
 840221d:	b8 00 00 00 00       	mov    $0x0,%eax
 8402222:	eb 05                	jmp    8402229 <_ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC+0xcb>
 8402224:	b8 01 00 00 00       	mov    $0x1,%eax
 8402229:	83 c4 34             	add    $0x34,%esp
 840222c:	5b                   	pop    %ebx
 840222d:	5d                   	pop    %ebp
 840222e:	c3                   	ret
 840222f:	90                   	nop

```

```c
// DB_CreateCharac::_CreateNewCharacStat @ 0x840215e

/* DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*) */

bool __thiscall
DB_CreateCharac::_CreateNewCharacStat(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_10,
                   "inSert into charac_stat (charac_no,HP, forbidden_to_play, forbidden_due_to) values(%d,100,0,0)"
                   ,*(undefined4 *)(param_1 + 0x5348));
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 != '\x01') {
    uVar2 = NumberToString(*(uint *)param_1,0);
    cMyTrace::cMyTrace(local_20,"bool DB_CreateCharac::_CreateNewCharacStat(SIG_CREATE_CHARAC*)",
                       0x10fb,5);
    cMyTrace::operator()
              (local_20,"DB_CreateCharac::_CreateNewCharacStat, exec() ERROR m_id=%s",uVar2);
    *(undefined4 *)(param_1 + 0x5344) = 2;
  }
  return cVar1 == '\x01';
}

```

---

## _checkCharacName

```asm
// === 084011d4 DB_CreateCharac::_checkCharacName  [0x084011d4-0x84013b1] ===
 84011d4:	55                   	push   %ebp
 84011d5:	89 e5                	mov    %esp,%ebp
 84011d7:	56                   	push   %esi
 84011d8:	53                   	push   %ebx
 84011d9:	83 ec 40             	sub    $0x40,%esp
 84011dc:	8b 45 14             	mov    0x14(%ebp),%eax
 84011df:	83 c0 04             	add    $0x4,%eax
 84011e2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84011e6:	8b 45 10             	mov    0x10(%ebp),%eax
 84011e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84011ed:	c7 44 24 04 a4 2b c4 	movl   $0x8c42ba4,0x4(%esp)
 84011f4:	08 
 84011f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84011f8:	89 04 24             	mov    %eax,(%esp)
 84011fb:	e8 c0 2f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8401200:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401207:	00 
 8401208:	8b 45 0c             	mov    0xc(%ebp),%eax
 840120b:	89 04 24             	mov    %eax,(%esp)
 840120e:	e8 13 31 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401213:	83 f0 01             	xor    $0x1,%eax
 8401216:	84 c0                	test   %al,%al
 8401218:	74 17                	je     8401231 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x5d>
 840121a:	8b 45 14             	mov    0x14(%ebp),%eax
 840121d:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8401224:	00 00 00 
 8401227:	b8 00 00 00 00       	mov    $0x0,%eax
 840122c:	e9 7a 01 00 00       	jmp    84013ab <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1d7>
 8401231:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8401238:	8b 45 0c             	mov    0xc(%ebp),%eax
 840123b:	89 04 24             	mov    %eax,(%esp)
 840123e:	e8 29 11 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8401243:	85 c0                	test   %eax,%eax
 8401245:	0f 95 c0             	setne  %al
 8401248:	84 c0                	test   %al,%al
 840124a:	0f 84 56 01 00 00    	je     84013a6 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1d2>
 8401250:	8b 45 14             	mov    0x14(%ebp),%eax
 8401253:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 840125a:	00 00 00 
 840125d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401260:	89 04 24             	mov    %eax,(%esp)
 8401263:	e8 54 32 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8401268:	83 f0 01             	xor    $0x1,%eax
 840126b:	84 c0                	test   %al,%al
 840126d:	75 21                	jne    8401290 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0xbc>
 840126f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8401272:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401276:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 840127d:	00 
 840127e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401281:	89 04 24             	mov    %eax,(%esp)
 8401284:	e8 a3 56 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8401289:	83 f0 01             	xor    $0x1,%eax
 840128c:	84 c0                	test   %al,%al
 840128e:	74 07                	je     8401297 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0xc3>
 8401290:	b8 01 00 00 00       	mov    $0x1,%eax
 8401295:	eb 05                	jmp    840129c <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0xc8>
 8401297:	b8 00 00 00 00       	mov    $0x0,%eax
 840129c:	84 c0                	test   %al,%al
 840129e:	74 0a                	je     84012aa <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0xd6>
 84012a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84012a5:	e9 01 01 00 00       	jmp    84013ab <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1d7>
 84012aa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84012ad:	85 c0                	test   %eax,%eax
 84012af:	74 12                	je     84012c3 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0xef>
 84012b1:	8b 45 14             	mov    0x14(%ebp),%eax
 84012b4:	c7 80 44 53 00 00 03 	movl   $0x3,0x5344(%eax)
 84012bb:	00 00 00 
 84012be:	e9 dc 00 00 00       	jmp    840139f <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1cb>
 84012c3:	e8 b9 ae cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84012c8:	89 04 24             	mov    %eax,(%esp)
 84012cb:	e8 9e c9 04 00       	call   844dc6e <_ZN12CEnvironment9get_gc_noEv>
 84012d0:	3d f2 03 00 00       	cmp    $0x3f2,%eax
 84012d5:	0f 94 c0             	sete   %al
 84012d8:	84 c0                	test   %al,%al
 84012da:	0f 84 b2 00 00 00    	je     8401392 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1be>
 84012e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84012e3:	89 04 24             	mov    %eax,(%esp)
 84012e6:	e8 81 10 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84012eb:	89 c3                	mov    %eax,%ebx
 84012ed:	8b 45 14             	mov    0x14(%ebp),%eax
 84012f0:	8d 70 04             	lea    0x4(%eax),%esi
 84012f3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84012fa:	00 
 84012fb:	c7 44 24 08 6a 0d 00 	movl   $0xd6a,0x8(%esp)
 8401302:	00 
 8401303:	c7 44 24 04 a0 d9 c5 	movl   $0x8c5d9a0,0x4(%esp)
 840130a:	08 
 840130b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 840130e:	89 04 24             	mov    %eax,(%esp)
 8401311:	e8 02 e4 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8401316:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 840131a:	89 74 24 08          	mov    %esi,0x8(%esp)
 840131e:	c7 44 24 04 e4 2b c4 	movl   $0x8c42be4,0x4(%esp)
 8401325:	08 
 8401326:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8401329:	89 04 24             	mov    %eax,(%esp)
 840132c:	e8 57 e4 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8401331:	8b 45 14             	mov    0x14(%ebp),%eax
 8401334:	83 c0 04             	add    $0x4,%eax
 8401337:	c7 44 24 04 04 2c c4 	movl   $0x8c42c04,0x4(%esp)
 840133e:	08 
 840133f:	89 04 24             	mov    %eax,(%esp)
 8401342:	e8 99 d1 c7 ff       	call   807e4e0 <strcmp@plt>
 8401347:	85 c0                	test   %eax,%eax
 8401349:	75 47                	jne    8401392 <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1be>
 840134b:	8b 45 0c             	mov    0xc(%ebp),%eax
 840134e:	89 04 24             	mov    %eax,(%esp)
 8401351:	e8 08 c3 04 00       	call   844d65e <_ZN5MySQL14GetQueryStringEv>
 8401356:	89 c3                	mov    %eax,%ebx
 8401358:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 840135f:	00 
 8401360:	c7 44 24 08 6d 0d 00 	movl   $0xd6d,0x8(%esp)
 8401367:	00 
 8401368:	c7 44 24 04 a0 d9 c5 	movl   $0x8c5d9a0,0x4(%esp)
 840136f:	08 
 8401370:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8401373:	89 04 24             	mov    %eax,(%esp)
 8401376:	e8 9d e3 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 840137b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 840137f:	c7 44 24 04 0b 2c c4 	movl   $0x8c42c0b,0x4(%esp)
 8401386:	08 
 8401387:	8d 45 e8             	lea    -0x18(%ebp),%eax
 840138a:	89 04 24             	mov    %eax,(%esp)
 840138d:	e8 f6 e3 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8401392:	8b 45 14             	mov    0x14(%ebp),%eax
 8401395:	c7 80 44 53 00 00 01 	movl   $0x1,0x5344(%eax)
 840139c:	00 00 00 
 840139f:	b8 00 00 00 00       	mov    $0x0,%eax
 84013a4:	eb 05                	jmp    84013ab <_ZN15DB_CreateCharac16_checkCharacNameEP5MySQLPKcP17SIG_CREATE_CHARAC+0x1d7>
 84013a6:	b8 01 00 00 00       	mov    $0x1,%eax
 84013ab:	83 c4 40             	add    $0x40,%esp
 84013ae:	5b                   	pop    %ebx
 84013af:	5e                   	pop    %esi
 84013b0:	5d                   	pop    %ebp
 84013b1:	c3                   	ret

```

```c
// DB_CreateCharac::_checkCharacName @ 0x84011d4

/* DB_CreateCharac::_checkCharacName(MySQL*, char const*, SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_checkCharacName
          (DB_CreateCharac *this,MySQL *param_1,char *param_2,SIG_CREATE_CHARAC *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CEnvironment *this_00;
  undefined4 uVar4;
  int local_30;
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  MySQL::set_query(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'",param_2
                   ,param_3 + 4);
  cVar2 = MySQL::exec(param_1,true);
  if (cVar2 != '\x01') {
    *(undefined4 *)(param_3 + 0x5344) = 2;
    return 0;
  }
  local_30 = 0;
  iVar3 = MySQL::get_n_rows(param_1);
  if (iVar3 == 0) {
    return 1;
  }
  *(undefined4 *)(param_3 + 0x5344) = 2;
  cVar2 = MySQL::fetch(param_1);
  if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(param_1,0,&local_30), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (local_30 == 0) {
      this_00 = (CEnvironment *)G_CEnvironment();
      iVar3 = CEnvironment::get_gc_no(this_00);
      if (iVar3 == 0x3f2) {
        uVar4 = MySQL::get_n_rows(param_1);
        cMyTrace::cMyTrace(local_2c,
                           "bool DB_CreateCharac::_checkCharacName(MySQL*, const char*, SIG_CREATE_CHARAC*)"
                           ,0xd6a,5);
        cMyTrace::operator()(local_2c,"already charac_name(%s) row(%d)",param_3 + 4,uVar4);
        iVar3 = strcmp((char *)(param_3 + 4),&DAT_08c42c04);
        if (iVar3 == 0) {
          uVar4 = MySQL::GetQueryString(param_1);
          cMyTrace::cMyTrace(local_1c,
                             "bool DB_CreateCharac::_checkCharacName(MySQL*, const char*, SIG_CREATE_CHARAC*)"
                             ,0xd6d,5);
          cMyTrace::operator()(local_1c,"already charac_name query(%s)",uVar4);
        }
      }
      *(undefined4 *)(param_3 + 0x5344) = 1;
    }
    else {
      *(undefined4 *)(param_3 + 0x5344) = 3;
    }
  }
  return 0;
}

```

---

## _checkCreateEventCharacter

```asm
// === 084013b2 DB_CreateCharac::_checkCreateEventCharacter  [0x084013b2-0x8401427] ===
 84013b2:	55                   	push   %ebp
 84013b3:	89 e5                	mov    %esp,%ebp
 84013b5:	83 ec 18             	sub    $0x18,%esp
 84013b8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84013bf:	e8 da a8 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84013c4:	3d 6f 5d 05 4b       	cmp    $0x4b055d6f,%eax
 84013c9:	7e 1a                	jle    84013e5 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x33>
 84013cb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84013d2:	e8 c7 a8 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84013d7:	3d 50 bf 3b 4b       	cmp    $0x4b3bbf50,%eax
 84013dc:	7f 07                	jg     84013e5 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x33>
 84013de:	b8 01 00 00 00       	mov    $0x1,%eax
 84013e3:	eb 05                	jmp    84013ea <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x38>
 84013e5:	b8 00 00 00 00       	mov    $0x0,%eax
 84013ea:	84 c0                	test   %al,%al
 84013ec:	74 1f                	je     840140d <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x5b>
 84013ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84013f1:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 84013f5:	84 c0                	test   %al,%al
 84013f7:	74 28                	je     8401421 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x6f>
 84013f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84013fc:	c7 80 44 53 00 00 04 	movl   $0x4,0x5344(%eax)
 8401403:	00 00 00 
 8401406:	b8 00 00 00 00       	mov    $0x0,%eax
 840140b:	eb 19                	jmp    8401426 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x74>
 840140d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401410:	c7 80 44 53 00 00 04 	movl   $0x4,0x5344(%eax)
 8401417:	00 00 00 
 840141a:	b8 00 00 00 00       	mov    $0x0,%eax
 840141f:	eb 05                	jmp    8401426 <_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC+0x74>
 8401421:	b8 01 00 00 00       	mov    $0x1,%eax
 8401426:	c9                   	leave
 8401427:	c3                   	ret

```

```c
// DB_CreateCharac::_checkCreateEventCharacter @ 0x84013b2

/* DB_CreateCharac::_checkCreateEventCharacter(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_checkCreateEventCharacter(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar2) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar2 < 0x4b3bbf51) {
      bVar1 = true;
      goto LAB_084013ea;
    }
  }
  bVar1 = false;
LAB_084013ea:
  if (bVar1) {
    if (param_1[0x24] == (SIG_CREATE_CHARAC)0x0) {
      uVar3 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 4;
      uVar3 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5344) = 4;
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## _createCharacDungeon

```asm
// === 084010fc DB_CreateCharac::_createCharacDungeon  [0x084010fc-0x84011d3] ===
 84010fc:	55                   	push   %ebp
 84010fd:	89 e5                	mov    %esp,%ebp
 84010ff:	83 ec 28             	sub    $0x28,%esp
 8401102:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8401107:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 840110e:	00 
 840110f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8401116:	00 
 8401117:	89 04 24             	mov    %eax,(%esp)
 840111a:	e8 1f 41 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 840111f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8401122:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401129:	00 
 840112a:	8b 45 0c             	mov    0xc(%ebp),%eax
 840112d:	89 04 24             	mov    %eax,(%esp)
 8401130:	e8 16 7f d0 ff       	call   810904b <_Z14NumberToStringji>
 8401135:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401139:	c7 44 24 04 3c 2b c4 	movl   $0x8c42b3c,0x4(%esp)
 8401140:	08 
 8401141:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401144:	89 04 24             	mov    %eax,(%esp)
 8401147:	e8 74 30 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840114c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401153:	00 
 8401154:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401157:	89 04 24             	mov    %eax,(%esp)
 840115a:	e8 c7 31 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 840115f:	83 f0 01             	xor    $0x1,%eax
 8401162:	84 c0                	test   %al,%al
 8401164:	74 07                	je     840116d <_ZN15DB_CreateCharac20_createCharacDungeonEj+0x71>
 8401166:	b8 00 00 00 00       	mov    $0x0,%eax
 840116b:	eb 64                	jmp    84011d1 <_ZN15DB_CreateCharac20_createCharacDungeonEj+0xd5>
 840116d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401170:	89 04 24             	mov    %eax,(%esp)
 8401173:	e8 f4 11 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8401178:	85 c0                	test   %eax,%eax
 840117a:	0f 94 c0             	sete   %al
 840117d:	84 c0                	test   %al,%al
 840117f:	74 2a                	je     84011ab <_ZN15DB_CreateCharac20_createCharacDungeonEj+0xaf>
 8401181:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401188:	00 
 8401189:	8b 45 0c             	mov    0xc(%ebp),%eax
 840118c:	89 04 24             	mov    %eax,(%esp)
 840118f:	e8 b7 7e d0 ff       	call   810904b <_Z14NumberToStringji>
 8401194:	89 44 24 08          	mov    %eax,0x8(%esp)
 8401198:	c7 44 24 04 68 2b c4 	movl   $0x8c42b68,0x4(%esp)
 840119f:	08 
 84011a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84011a3:	89 04 24             	mov    %eax,(%esp)
 84011a6:	e8 15 30 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84011ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84011b2:	00 
 84011b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84011b6:	89 04 24             	mov    %eax,(%esp)
 84011b9:	e8 68 31 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84011be:	83 f0 01             	xor    $0x1,%eax
 84011c1:	84 c0                	test   %al,%al
 84011c3:	74 07                	je     84011cc <_ZN15DB_CreateCharac20_createCharacDungeonEj+0xd0>
 84011c5:	b8 00 00 00 00       	mov    $0x0,%eax
 84011ca:	eb 05                	jmp    84011d1 <_ZN15DB_CreateCharac20_createCharacDungeonEj+0xd5>
 84011cc:	b8 01 00 00 00       	mov    $0x1,%eax
 84011d1:	c9                   	leave
 84011d2:	c3                   	ret
 84011d3:	90                   	nop

```

```c
// DB_CreateCharac::_createCharacDungeon @ 0x84010fc

/* DB_CreateCharac::_createCharacDungeon(unsigned int) */

undefined4 __thiscall DB_CreateCharac::_createCharacDungeon(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(this_00,"seLect * from member_dungeon where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = NumberToString(param_1,0);
      MySQL::set_query(this_00,"inSert into member_dungeon (m_id,dungeon) values (%s,\'\')",uVar2);
    }
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _createCharacNPCRelationship

```asm
// === 0840103e DB_CreateCharac::_createCharacNPCRelationship  [0x0840103e-0x8401093] ===
 840103e:	55                   	push   %ebp
 840103f:	89 e5                	mov    %esp,%ebp
 8401041:	83 ec 28             	sub    $0x28,%esp
 8401044:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8401049:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8401050:	00 
 8401051:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8401058:	00 
 8401059:	89 04 24             	mov    %eax,(%esp)
 840105c:	e8 dd 41 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8401061:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8401064:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401067:	89 44 24 08          	mov    %eax,0x8(%esp)
 840106b:	c7 44 24 04 b4 2a c4 	movl   $0x8c42ab4,0x4(%esp)
 8401072:	08 
 8401073:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401076:	89 04 24             	mov    %eax,(%esp)
 8401079:	e8 42 31 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 840107e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8401085:	00 
 8401086:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401089:	89 04 24             	mov    %eax,(%esp)
 840108c:	e8 95 32 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8401091:	c9                   	leave
 8401092:	c3                   	ret
 8401093:	90                   	nop

```

```c
// DB_CreateCharac::_createCharacNPCRelationship @ 0x840103e

/* DB_CreateCharac::_createCharacNPCRelationship(unsigned int) */

void __thiscall DB_CreateCharac::_createCharacNPCRelationship(DB_CreateCharac *this,uint param_1)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,\'\')",
                   param_1);
  MySQL::exec(this_00,true);
  return;
}

```

---

## _createCharacQuest

```asm
// === 08401094 DB_CreateCharac::_createCharacQuest  [0x08401094-0x84010fb] ===
 8401094:	55                   	push   %ebp
 8401095:	89 e5                	mov    %esp,%ebp
 8401097:	83 ec 28             	sub    $0x28,%esp
 840109a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840109f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84010a6:	00 
 84010a7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84010ae:	00 
 84010af:	89 04 24             	mov    %eax,(%esp)
 84010b2:	e8 87 41 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84010b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84010ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84010bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84010c1:	c7 44 24 04 f8 2a c4 	movl   $0x8c42af8,0x4(%esp)
 84010c8:	08 
 84010c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84010cc:	89 04 24             	mov    %eax,(%esp)
 84010cf:	e8 ec 30 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84010d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84010db:	00 
 84010dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84010df:	89 04 24             	mov    %eax,(%esp)
 84010e2:	e8 3f 32 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84010e7:	83 f0 01             	xor    $0x1,%eax
 84010ea:	84 c0                	test   %al,%al
 84010ec:	74 07                	je     84010f5 <_ZN15DB_CreateCharac18_createCharacQuestEj+0x61>
 84010ee:	b8 00 00 00 00       	mov    $0x0,%eax
 84010f3:	eb 05                	jmp    84010fa <_ZN15DB_CreateCharac18_createCharacQuestEj+0x66>
 84010f5:	b8 01 00 00 00       	mov    $0x1,%eax
 84010fa:	c9                   	leave
 84010fb:	c3                   	ret

```

```c
// DB_CreateCharac::_createCharacQuest @ 0x8401094

/* DB_CreateCharac::_createCharacQuest(unsigned int) */

bool __thiscall DB_CreateCharac::_createCharacQuest(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into new_charac_quest(charac_no, clear_quest) values(%u,\'\')",
                   param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## _updateCreateEventCharacter

```asm
// === 08401428 DB_CreateCharac::_updateCreateEventCharacter  [0x08401428-0x8401503] ===
 8401428:	55                   	push   %ebp
 8401429:	89 e5                	mov    %esp,%ebp
 840142b:	83 ec 28             	sub    $0x28,%esp
 840142e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401435:	e8 64 a8 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840143a:	3d 6f 5d 05 4b       	cmp    $0x4b055d6f,%eax
 840143f:	7e 1a                	jle    840145b <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0x33>
 8401441:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8401448:	e8 51 a8 cc ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 840144d:	3d 50 bf 3b 4b       	cmp    $0x4b3bbf50,%eax
 8401452:	7f 07                	jg     840145b <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0x33>
 8401454:	b8 01 00 00 00       	mov    $0x1,%eax
 8401459:	eb 05                	jmp    8401460 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0x38>
 840145b:	b8 00 00 00 00       	mov    $0x0,%eax
 8401460:	84 c0                	test   %al,%al
 8401462:	0f 84 88 00 00 00    	je     84014f0 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0xc8>
 8401468:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 840146d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8401474:	00 
 8401475:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 840147c:	00 
 840147d:	89 04 24             	mov    %eax,(%esp)
 8401480:	e8 b9 3d ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8401485:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8401488:	8b 45 0c             	mov    0xc(%ebp),%eax
 840148b:	8b 00                	mov    (%eax),%eax
 840148d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8401494:	00 
 8401495:	89 04 24             	mov    %eax,(%esp)
 8401498:	e8 ae 7b d0 ff       	call   810904b <_Z14NumberToStringji>
 840149d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84014a1:	c7 44 24 04 2c 2c c4 	movl   $0x8c42c2c,0x4(%esp)
 84014a8:	08 
 84014a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84014ac:	89 04 24             	mov    %eax,(%esp)
 84014af:	e8 0c 2d ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84014b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84014bb:	00 
 84014bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84014bf:	89 04 24             	mov    %eax,(%esp)
 84014c2:	e8 5f 2e ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 84014c7:	83 f0 01             	xor    $0x1,%eax
 84014ca:	84 c0                	test   %al,%al
 84014cc:	74 14                	je     84014e2 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0xba>
 84014ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 84014d1:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 84014d8:	00 00 00 
 84014db:	b8 00 00 00 00       	mov    $0x0,%eax
 84014e0:	eb 20                	jmp    8401502 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0xda>
 84014e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84014e5:	c6 40 24 01          	movb   $0x1,0x24(%eax)
 84014e9:	b8 01 00 00 00       	mov    $0x1,%eax
 84014ee:	eb 12                	jmp    8401502 <_ZN15DB_CreateCharac27_updateCreateEventCharacterEP17SIG_CREATE_CHARAC+0xda>
 84014f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84014f3:	c7 80 44 53 00 00 04 	movl   $0x4,0x5344(%eax)
 84014fa:	00 00 00 
 84014fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8401502:	c9                   	leave
 8401503:	c3                   	ret

```

```c
// DB_CreateCharac::_updateCreateEventCharacter @ 0x8401428

/* DB_CreateCharac::_updateCreateEventCharacter(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_updateCreateEventCharacter(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar3) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < 0x4b3bbf51) {
      bVar1 = true;
      goto LAB_08401460;
    }
  }
  bVar1 = false;
LAB_08401460:
  if (bVar1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
    uVar4 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(this_00,"upDate member_login set event_charac_flag = 1 where m_id = %s",uVar4);
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 == '\x01') {
      param_1[0x24] = (SIG_CREATE_CHARAC)0x1;
      uVar4 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 2;
      uVar4 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5344) = 4;
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## dispatch

```asm
// === 08400d2c DB_CreateCharac::dispatch  [0x08400d2c-0x840103d] ===
 8400d2c:	55                   	push   %ebp
 8400d2d:	89 e5                	mov    %esp,%ebp
 8400d2f:	83 ec 28             	sub    $0x28,%esp
 8400d32:	8b 45 08             	mov    0x8(%ebp),%eax
 8400d35:	8b 55 14             	mov    0x14(%ebp),%edx
 8400d38:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8400d3c:	8b 55 10             	mov    0x10(%ebp),%edx
 8400d3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8400d43:	8b 55 0c             	mov    0xc(%ebp),%edx
 8400d46:	89 54 24 04          	mov    %edx,0x4(%esp)
 8400d4a:	89 04 24             	mov    %eax,(%esp)
 8400d4d:	e8 2a b2 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8400d52:	83 f0 01             	xor    $0x1,%eax
 8400d55:	84 c0                	test   %al,%al
 8400d57:	74 0a                	je     8400d63 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x37>
 8400d59:	b8 00 00 00 00       	mov    $0x0,%eax
 8400d5e:	e9 d8 02 00 00       	jmp    840103b <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x30f>
 8400d63:	8b 45 14             	mov    0x14(%ebp),%eax
 8400d66:	89 04 24             	mov    %eax,(%esp)
 8400d69:	e8 e6 3a d8 ff       	call   8184854 <_ZN6Stream12GetOutBufferI17SIG_CREATE_CHARACEEPT_v>
 8400d6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8400d71:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8400d75:	75 0a                	jne    8400d81 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x55>
 8400d77:	b8 00 00 00 00       	mov    $0x0,%eax
 8400d7c:	e9 ba 02 00 00       	jmp    840103b <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x30f>
 8400d81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400d84:	c7 80 44 53 00 00 00 	movl   $0x0,0x5344(%eax)
 8400d8b:	00 00 00 
 8400d8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8400d95:	00 
 8400d96:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400d99:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400d9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8400da0:	89 04 24             	mov    %eax,(%esp)
 8400da3:	e8 7a 0b 00 00       	call   8401922 <_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb>
 8400da8:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400dab:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400daf:	83 f0 01             	xor    $0x1,%eax
 8400db2:	84 c0                	test   %al,%al
 8400db4:	0f 85 40 02 00 00    	jne    8400ffa <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2ce>
 8400dba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400dbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8400dc4:	89 04 24             	mov    %eax,(%esp)
 8400dc7:	e8 00 10 00 00       	call   8401dcc <_ZN15DB_CreateCharac15CreateNewCharacEP17SIG_CREATE_CHARAC>
 8400dcc:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400dcf:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400dd3:	83 f0 01             	xor    $0x1,%eax
 8400dd6:	84 c0                	test   %al,%al
 8400dd8:	0f 85 1f 02 00 00    	jne    8400ffd <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d1>
 8400dde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400de1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400de5:	8b 45 08             	mov    0x8(%ebp),%eax
 8400de8:	89 04 24             	mov    %eax,(%esp)
 8400deb:	e8 6c 19 00 00       	call   840275c <_ZN15DB_CreateCharac11GetCharacNoEP17SIG_CREATE_CHARAC>
 8400df0:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400df3:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400df7:	83 f0 01             	xor    $0x1,%eax
 8400dfa:	84 c0                	test   %al,%al
 8400dfc:	74 12                	je     8400e10 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0xe4>
 8400dfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e01:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400e08:	00 00 00 
 8400e0b:	e9 f1 01 00 00       	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400e10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400e17:	8b 45 08             	mov    0x8(%ebp),%eax
 8400e1a:	89 04 24             	mov    %eax,(%esp)
 8400e1d:	e8 3c 13 00 00       	call   840215e <_ZN15DB_CreateCharac20_CreateNewCharacStatEP17SIG_CREATE_CHARAC>
 8400e22:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400e25:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400e29:	83 f0 01             	xor    $0x1,%eax
 8400e2c:	84 c0                	test   %al,%al
 8400e2e:	0f 85 cc 01 00 00    	jne    8401000 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d4>
 8400e34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e37:	0f b6 80 3f 53 00 00 	movzbl 0x533f(%eax),%eax
 8400e3e:	84 c0                	test   %al,%al
 8400e40:	74 2a                	je     8400e6c <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x140>
 8400e42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e45:	8d 90 a9 03 00 00    	lea    0x3a9(%eax),%edx
 8400e4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e4e:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400e54:	89 54 24 08          	mov    %edx,0x8(%esp)
 8400e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400e5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8400e5f:	89 04 24             	mov    %eax,(%esp)
 8400e62:	e8 c9 13 00 00       	call   8402230 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item>
 8400e67:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400e6a:	eb 23                	jmp    8400e8f <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x163>
 8400e6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e6f:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400e75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8400e7c:	00 
 8400e7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400e81:	8b 45 08             	mov    0x8(%ebp),%eax
 8400e84:	89 04 24             	mov    %eax,(%esp)
 8400e87:	e8 a4 13 00 00       	call   8402230 <_ZN15DB_CreateCharac15CreateInventoryEjP10Inven_Item>
 8400e8c:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400e8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400e92:	0f b6 80 40 53 00 00 	movzbl 0x5340(%eax),%eax
 8400e99:	84 c0                	test   %al,%al
 8400e9b:	74 28                	je     8400ec5 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x199>
 8400e9d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400ea0:	8d 90 01 4e 00 00    	lea    0x4e01(%eax),%edx
 8400ea6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400ea9:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400eaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8400eb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400eb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8400eba:	89 04 24             	mov    %eax,(%esp)
 8400ebd:	e8 ea 14 00 00       	call   84023ac <_ZN15DB_CreateCharac11CreateEquipEjP10Inven_Item>
 8400ec2:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400ec5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400ec9:	83 f0 01             	xor    $0x1,%eax
 8400ecc:	84 c0                	test   %al,%al
 8400ece:	74 0d                	je     8400edd <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x1b1>
 8400ed0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400ed3:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400eda:	00 00 00 
 8400edd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400ee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8400ee7:	89 04 24             	mov    %eax,(%esp)
 8400eea:	e8 f7 15 00 00       	call   84024e6 <_ZN15DB_CreateCharac11CreateSkillEP17SIG_CREATE_CHARAC>
 8400eef:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400ef2:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400ef6:	83 f0 01             	xor    $0x1,%eax
 8400ef9:	84 c0                	test   %al,%al
 8400efb:	74 0d                	je     8400f0a <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x1de>
 8400efd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f00:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400f07:	00 00 00 
 8400f0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f0d:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400f13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400f17:	8b 45 08             	mov    0x8(%ebp),%eax
 8400f1a:	89 04 24             	mov    %eax,(%esp)
 8400f1d:	e8 ca 17 00 00       	call   84026ec <_ZN15DB_CreateCharac9CreatePvPEj>
 8400f22:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400f25:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400f29:	83 f0 01             	xor    $0x1,%eax
 8400f2c:	84 c0                	test   %al,%al
 8400f2e:	74 0d                	je     8400f3d <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x211>
 8400f30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f33:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400f3a:	00 00 00 
 8400f3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f40:	8b 00                	mov    (%eax),%eax
 8400f42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400f46:	8b 45 08             	mov    0x8(%ebp),%eax
 8400f49:	89 04 24             	mov    %eax,(%esp)
 8400f4c:	e8 ab 01 00 00       	call   84010fc <_ZN15DB_CreateCharac20_createCharacDungeonEj>
 8400f51:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400f54:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400f58:	83 f0 01             	xor    $0x1,%eax
 8400f5b:	84 c0                	test   %al,%al
 8400f5d:	74 12                	je     8400f71 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x245>
 8400f5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f62:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400f69:	00 00 00 
 8400f6c:	e9 90 00 00 00       	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400f71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f74:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400f7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400f7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8400f81:	89 04 24             	mov    %eax,(%esp)
 8400f84:	e8 0b 01 00 00       	call   8401094 <_ZN15DB_CreateCharac18_createCharacQuestEj>
 8400f89:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400f8c:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400f90:	83 f0 01             	xor    $0x1,%eax
 8400f93:	84 c0                	test   %al,%al
 8400f95:	74 0f                	je     8400fa6 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x27a>
 8400f97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400f9a:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400fa1:	00 00 00 
 8400fa4:	eb 5b                	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400fa6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400fa9:	8b 80 48 53 00 00    	mov    0x5348(%eax),%eax
 8400faf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400fb3:	8b 45 08             	mov    0x8(%ebp),%eax
 8400fb6:	89 04 24             	mov    %eax,(%esp)
 8400fb9:	e8 80 00 00 00       	call   840103e <_ZN15DB_CreateCharac28_createCharacNPCRelationshipEj>
 8400fbe:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400fc1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8400fc5:	83 f0 01             	xor    $0x1,%eax
 8400fc8:	84 c0                	test   %al,%al
 8400fca:	74 0f                	je     8400fdb <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2af>
 8400fcc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400fcf:	c7 80 44 53 00 00 02 	movl   $0x2,0x5344(%eax)
 8400fd6:	00 00 00 
 8400fd9:	eb 26                	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400fdb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8400fe2:	00 
 8400fe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8400fe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8400fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8400fed:	89 04 24             	mov    %eax,(%esp)
 8400ff0:	e8 a5 0b 00 00       	call   8401b9a <_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACb>
 8400ff5:	88 45 f3             	mov    %al,-0xd(%ebp)
 8400ff8:	eb 07                	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400ffa:	90                   	nop
 8400ffb:	eb 04                	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8400ffd:	90                   	nop
 8400ffe:	eb 01                	jmp    8401001 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x2d5>
 8401000:	90                   	nop
 8401001:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8401004:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8401008:	8b 45 10             	mov    0x10(%ebp),%eax
 840100b:	89 44 24 08          	mov    %eax,0x8(%esp)
 840100f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8401012:	89 44 24 04          	mov    %eax,0x4(%esp)
 8401016:	8b 45 08             	mov    0x8(%ebp),%eax
 8401019:	89 04 24             	mov    %eax,(%esp)
 840101c:	e8 8f 17 00 00       	call   84027b0 <_ZN15DB_CreateCharac10SendResultEiiP17SIG_CREATE_CHARAC>
 8401021:	88 45 f3             	mov    %al,-0xd(%ebp)
 8401024:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8401028:	83 f0 01             	xor    $0x1,%eax
 840102b:	84 c0                	test   %al,%al
 840102d:	74 07                	je     8401036 <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x30a>
 840102f:	b8 00 00 00 00       	mov    $0x0,%eax
 8401034:	eb 05                	jmp    840103b <_ZN15DB_CreateCharac8dispatchEiiP6Stream+0x30f>
 8401036:	b8 01 00 00 00       	mov    $0x1,%eax
 840103b:	c9                   	leave
 840103c:	c3                   	ret
 840103d:	90                   	nop

```

```c
// DB_CreateCharac::dispatch @ 0x8400d2c

/* DB_CreateCharac::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CreateCharac::dispatch(DB_CreateCharac *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_CREATE_CHARAC *pSVar3;
  char local_11;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_CREATE_CHARAC>(param_3);
    if (pSVar3 == (SIG_CREATE_CHARAC *)0x0) {
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(pSVar3 + 0x5344) = 0;
      cVar1 = CheckLimitCreateNewCharac((SIG_CREATE_CHARAC *)this,SUB41(pSVar3,0));
      if ((cVar1 == '\x01') && (cVar1 = CreateNewCharac(this,pSVar3), cVar1 == '\x01')) {
        cVar1 = GetCharacNo(this,pSVar3);
        if (cVar1 == '\x01') {
          cVar1 = _CreateNewCharacStat(this,pSVar3);
          if (cVar1 == '\x01') {
            if (pSVar3[0x533f] == (SIG_CREATE_CHARAC)0x0) {
              local_11 = CreateInventory(this,*(uint *)(pSVar3 + 0x5348),(Inven_Item *)0x0);
            }
            else {
              local_11 = CreateInventory(this,*(uint *)(pSVar3 + 0x5348),
                                         (Inven_Item *)(pSVar3 + 0x3a9));
            }
            if (pSVar3[0x5340] != (SIG_CREATE_CHARAC)0x0) {
              local_11 = CreateEquip(this,*(uint *)(pSVar3 + 0x5348),(Inven_Item *)(pSVar3 + 0x4e01)
                                    );
            }
            if (local_11 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = CreateSkill(this,pSVar3);
            if (cVar1 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = CreatePvP(this,*(uint *)(pSVar3 + 0x5348));
            if (cVar1 != '\x01') {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
            cVar1 = _createCharacDungeon(this,*(uint *)pSVar3);
            if (cVar1 == '\x01') {
              cVar1 = _createCharacQuest(this,*(uint *)(pSVar3 + 0x5348));
              if (cVar1 == '\x01') {
                cVar1 = _createCharacNPCRelationship(this,*(uint *)(pSVar3 + 0x5348));
                if (cVar1 == '\x01') {
                  InsertLimitCreateNewCharac((SIG_CREATE_CHARAC *)this,SUB41(pSVar3,0));
                }
                else {
                  *(undefined4 *)(pSVar3 + 0x5344) = 2;
                }
              }
              else {
                *(undefined4 *)(pSVar3 + 0x5344) = 2;
              }
            }
            else {
              *(undefined4 *)(pSVar3 + 0x5344) = 2;
            }
          }
        }
        else {
          *(undefined4 *)(pSVar3 + 0x5344) = 2;
        }
      }
      cVar1 = SendResult(this,param_1,param_2,pSVar3);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequestResetLimitCreateMid

```asm
// === 08401864 DB_CreateCharac::makeRequestResetLimitCreateMid  [0x08401864-0x8401921] ===
 8401864:	55                   	push   %ebp
 8401865:	89 e5                	mov    %esp,%ebp
 8401867:	56                   	push   %esi
 8401868:	53                   	push   %ebx
 8401869:	83 ec 20             	sub    $0x20,%esp
 840186c:	e8 10 a9 cc ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8401871:	89 04 24             	mov    %eax,(%esp)
 8401874:	e8 51 92 d4 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8401879:	83 f8 01             	cmp    $0x1,%eax
 840187c:	0f 94 c0             	sete   %al
 840187f:	84 c0                	test   %al,%al
 8401881:	0f 84 93 00 00 00    	je     840191a <_ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv+0xb6>
 8401887:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 840188c:	c7 44 24 08 e3 0e 00 	movl   $0xee3,0x8(%esp)
 8401893:	00 
 8401894:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 840189b:	08 
 840189c:	89 04 24             	mov    %eax,(%esp)
 840189f:	e8 e2 e1 e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84018a4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84018ab:	00 
 84018ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 84018b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84018b3:	89 04 24             	mov    %eax,(%esp)
 84018b6:	e8 6b 73 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84018bb:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 84018c2:	ff 
 84018c3:	c7 44 24 04 37 00 00 	movl   $0x37,0x4(%esp)
 84018ca:	00 
 84018cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84018ce:	89 04 24             	mov    %eax,(%esp)
 84018d1:	e8 e0 5e d9 ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 84018d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84018db:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84018de:	89 54 24 08          	mov    %edx,0x8(%esp)
 84018e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84018e9:	00 
 84018ea:	89 04 24             	mov    %eax,(%esp)
 84018ed:	e8 ec f6 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84018f2:	eb 1b                	jmp    840190f <_ZN15DB_CreateCharac30makeRequestResetLimitCreateMidEv+0xab>
 84018f4:	89 d3                	mov    %edx,%ebx
 84018f6:	89 c6                	mov    %eax,%esi
 84018f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84018fb:	89 04 24             	mov    %eax,(%esp)
 84018fe:	e8 cf af 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8401903:	89 f0                	mov    %esi,%eax
 8401905:	89 da                	mov    %ebx,%edx
 8401907:	89 04 24             	mov    %eax,(%esp)
 840190a:	e8 41 1e 6e 00       	call   8ae3750 <_Unwind_Resume>
 840190f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8401912:	89 04 24             	mov    %eax,(%esp)
 8401915:	e8 b8 af 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 840191a:	83 c4 20             	add    $0x20,%esp
 840191d:	5b                   	pop    %ebx
 840191e:	5e                   	pop    %esi
 840191f:	5d                   	pop    %ebp
 8401920:	c3                   	ret
 8401921:	90                   	nop

```

```c
// DB_CreateCharac::makeRequestResetLimitCreateMid @ 0x8401864

/* DB_CreateCharac::makeRequestResetLimitCreateMid() */

void DB_CreateCharac::makeRequestResetLimitCreateMid(void)

{
  CEnvironment *this;
  int iVar1;
  Stream *pSVar2;
  CStreamGuard local_14 [8];
  
  this = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this);
  if (iVar1 == 1) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xee3);
    CStreamGuard::CStreamGuard(local_14,pSVar2,true);
                    /* try { // try from 084018d1 to 084018f1 has its CatchHandler @ 084018f4 */
    ARAD::DISPATCHER::make_internal_stream_jpn(local_14,0x37,0xffffffff);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}

```

---

## ~DB_CreateCharac

```asm
// === 08400cde DB_CreateCharac::~DB_CreateCharac  [0x08400cde-0x8400d0d] ===
 8400cde:	55                   	push   %ebp
 8400cdf:	89 e5                	mov    %esp,%ebp
 8400ce1:	83 ec 18             	sub    $0x18,%esp
 8400ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8400ce7:	c7 00 78 fc c5 08    	movl   $0x8c5fc78,(%eax)
 8400ced:	8b 45 08             	mov    0x8(%ebp),%eax
 8400cf0:	89 04 24             	mov    %eax,(%esp)
 8400cf3:	e8 80 16 ce ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 8400cf8:	b8 00 00 00 00       	mov    $0x0,%eax
 8400cfd:	84 c0                	test   %al,%al
 8400cff:	74 0b                	je     8400d0c <_ZN15DB_CreateCharacD1Ev+0x2e>
 8400d01:	8b 45 08             	mov    0x8(%ebp),%eax
 8400d04:	89 04 24             	mov    %eax,(%esp)
 8400d07:	e8 e4 37 32 00       	call   87244f0 <_ZdlPv>
 8400d0c:	c9                   	leave
 8400d0d:	c3                   	ret

```

```c
// DB_CreateCharac::~DB_CreateCharac @ 0x8400cde

/* WARNING: Removing unreachable block (ram,0x08400d01) */
/* DB_CreateCharac::~DB_CreateCharac() */

void __thiscall DB_CreateCharac::~DB_CreateCharac(DB_CreateCharac *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc78;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_CreateCharac_08400d0e

```asm
// === 08400d0e DB_CreateCharac::~DB_CreateCharac  [0x08400d0e-0x8400d2b] ===
 8400d0e:	55                   	push   %ebp
 8400d0f:	89 e5                	mov    %esp,%ebp
 8400d11:	83 ec 18             	sub    $0x18,%esp
 8400d14:	8b 45 08             	mov    0x8(%ebp),%eax
 8400d17:	89 04 24             	mov    %eax,(%esp)
 8400d1a:	e8 bf ff ff ff       	call   8400cde <_ZN15DB_CreateCharacD1Ev>
 8400d1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8400d22:	89 04 24             	mov    %eax,(%esp)
 8400d25:	e8 c6 37 32 00       	call   87244f0 <_ZdlPv>
 8400d2a:	c9                   	leave
 8400d2b:	c3                   	ret

```

```c
// DB_CreateCharac::~DB_CreateCharac @ 0x8400d0e

/* DB_CreateCharac::~DB_CreateCharac() */

void __thiscall DB_CreateCharac::~DB_CreateCharac(DB_CreateCharac *this)

{
  ~DB_CreateCharac(this);
  operator_delete(this);
  return;
}

```


# DB_SaveBloodDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SaveBloodDungeonReward

```asm
// === 084374f8 DB_SaveBloodDungeon::SaveBloodDungeonReward  [0x084374f8-0x8437727] ===
 84374f8:	55                   	push   %ebp
 84374f9:	89 e5                	mov    %esp,%ebp
 84374fb:	57                   	push   %edi
 84374fc:	56                   	push   %esi
 84374fd:	53                   	push   %ebx
 84374fe:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8437504:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8437509:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437510:	00 
 8437511:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8437518:	00 
 8437519:	89 04 24             	mov    %eax,(%esp)
 843751c:	e8 1d dd fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437521:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8437524:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843752b:	00 
 843752c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8437533:	00 
 8437534:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 843753b:	e8 1a aa 27 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 8437540:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8437543:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8437546:	89 44 24 04          	mov    %eax,0x4(%esp)
 843754a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843754d:	89 04 24             	mov    %eax,(%esp)
 8437550:	e8 0b 6e c4 ff       	call   807e360 <localtime_r@plt>
 8437555:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8437558:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843755f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437562:	8b 40 18             	mov    0x18(%eax),%eax
 8437565:	85 c0                	test   %eax,%eax
 8437567:	75 09                	jne    8437572 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x7a>
 8437569:	c7 45 e4 00 e9 07 00 	movl   $0x7e900,-0x1c(%ebp)
 8437570:	eb 12                	jmp    8437584 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x8c>
 8437572:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8437575:	8b 40 18             	mov    0x18(%eax),%eax
 8437578:	83 e8 01             	sub    $0x1,%eax
 843757b:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8437581:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8437584:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437587:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 843758b:	84 c0                	test   %al,%al
 843758d:	74 50                	je     84375df <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0xe7>
 843758f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8437592:	2b 45 e4             	sub    -0x1c(%ebp),%eax
 8437595:	8d 90 80 c5 f6 ff    	lea    -0x93a80(%eax),%edx
 843759b:	8b 45 0c             	mov    0xc(%ebp),%eax
 843759e:	8b 00                	mov    (%eax),%eax
 84375a0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84375a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84375a8:	c7 44 24 04 2c 3c c5 	movl   $0x8c53c2c,0x4(%esp)
 84375af:	08 
 84375b0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84375b3:	89 04 24             	mov    %eax,(%esp)
 84375b6:	e8 05 cc fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84375bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84375c2:	00 
 84375c3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84375c6:	89 04 24             	mov    %eax,(%esp)
 84375c9:	e8 58 cd fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84375ce:	83 f0 01             	xor    $0x1,%eax
 84375d1:	84 c0                	test   %al,%al
 84375d3:	74 0a                	je     84375df <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0xe7>
 84375d5:	b8 00 00 00 00       	mov    $0x0,%eax
 84375da:	e9 3e 01 00 00       	jmp    843771d <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x225>
 84375df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84375e2:	8b 40 14             	mov    0x14(%eax),%eax
 84375e5:	85 c0                	test   %eax,%eax
 84375e7:	0f 84 2b 01 00 00    	je     8437718 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x220>
 84375ed:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84375f0:	89 c2                	mov    %eax,%edx
 84375f2:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 84375f5:	89 55 a0             	mov    %edx,-0x60(%ebp)
 84375f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84375fb:	8b 38                	mov    (%eax),%edi
 84375fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437600:	8b 70 14             	mov    0x14(%eax),%esi
 8437603:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437606:	8b 58 10             	mov    0x10(%eax),%ebx
 8437609:	8b 45 0c             	mov    0xc(%ebp),%eax
 843760c:	8b 48 0c             	mov    0xc(%eax),%ecx
 843760f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437612:	8b 50 08             	mov    0x8(%eax),%edx
 8437615:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437618:	8b 40 04             	mov    0x4(%eax),%eax
 843761b:	89 45 94             	mov    %eax,-0x6c(%ebp)
 843761e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8437621:	89 44 24 20          	mov    %eax,0x20(%esp)
 8437625:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8437629:	89 74 24 18          	mov    %esi,0x18(%esp)
 843762d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8437631:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8437635:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8437639:	8b 55 94             	mov    -0x6c(%ebp),%edx
 843763c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8437640:	c7 44 24 04 a4 3c c5 	movl   $0x8c53ca4,0x4(%esp)
 8437647:	08 
 8437648:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843764b:	89 04 24             	mov    %eax,(%esp)
 843764e:	e8 6d cb fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437653:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843765a:	00 
 843765b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843765e:	89 04 24             	mov    %eax,(%esp)
 8437661:	e8 c0 cc fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8437666:	83 f0 01             	xor    $0x1,%eax
 8437669:	84 c0                	test   %al,%al
 843766b:	74 0a                	je     8437677 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x17f>
 843766d:	b8 00 00 00 00       	mov    $0x0,%eax
 8437672:	e9 a6 00 00 00       	jmp    843771d <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x225>
 8437677:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843767a:	89 04 24             	mov    %eax,(%esp)
 843767d:	e8 8e cc fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8437682:	09 d0                	or     %edx,%eax
 8437684:	85 c0                	test   %eax,%eax
 8437686:	0f 94 c0             	sete   %al
 8437689:	84 c0                	test   %al,%al
 843768b:	0f 84 87 00 00 00    	je     8437718 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x220>
 8437691:	8b 45 0c             	mov    0xc(%ebp),%eax
 8437694:	8b 40 14             	mov    0x14(%eax),%eax
 8437697:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 843769a:	8b 45 0c             	mov    0xc(%ebp),%eax
 843769d:	8b 78 10             	mov    0x10(%eax),%edi
 84376a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84376a3:	8b 70 0c             	mov    0xc(%eax),%esi
 84376a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84376a9:	8b 58 08             	mov    0x8(%eax),%ebx
 84376ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 84376af:	8b 48 04             	mov    0x4(%eax),%ecx
 84376b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84376b5:	89 c2                	mov    %eax,%edx
 84376b7:	2b 55 e4             	sub    -0x1c(%ebp),%edx
 84376ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84376bd:	8b 00                	mov    (%eax),%eax
 84376bf:	89 45 94             	mov    %eax,-0x6c(%ebp)
 84376c2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84376c5:	89 44 24 20          	mov    %eax,0x20(%esp)
 84376c9:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84376cd:	89 74 24 18          	mov    %esi,0x18(%esp)
 84376d1:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84376d5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84376d9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84376dd:	8b 55 94             	mov    -0x6c(%ebp),%edx
 84376e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84376e4:	c7 44 24 04 84 3d c5 	movl   $0x8c53d84,0x4(%esp)
 84376eb:	08 
 84376ec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84376ef:	89 04 24             	mov    %eax,(%esp)
 84376f2:	e8 c9 ca fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84376f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84376fe:	00 
 84376ff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8437702:	89 04 24             	mov    %eax,(%esp)
 8437705:	e8 1c cc fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843770a:	83 f0 01             	xor    $0x1,%eax
 843770d:	84 c0                	test   %al,%al
 843770f:	74 07                	je     8437718 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x220>
 8437711:	b8 00 00 00 00       	mov    $0x0,%eax
 8437716:	eb 05                	jmp    843771d <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON+0x225>
 8437718:	b8 01 00 00 00       	mov    $0x1,%eax
 843771d:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8437723:	5b                   	pop    %ebx
 8437724:	5e                   	pop    %esi
 8437725:	5f                   	pop    %edi
 8437726:	5d                   	pop    %ebp
 8437727:	c3                   	ret

```

```c
// DB_SaveBloodDungeon::SaveBloodDungeonReward @ 0x84374f8

/* DB_SaveBloodDungeon::SaveBloodDungeonReward(SIG_BLOOD_DUNGEON*) */

undefined4 __thiscall
DB_SaveBloodDungeon::SaveBloodDungeonReward(DB_SaveBloodDungeon *this,SIG_BLOOD_DUNGEON *param_1)

{
  char cVar1;
  longlong lVar2;
  tm local_58;
  int local_2c;
  MySQL *local_28;
  tm *local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_2c = getDailyInitializeTime(6,0,0);
  local_24 = localtime_r(&local_2c,&local_58);
  if (local_24->tm_wday == 0) {
    local_20 = 0x7e900;
  }
  else {
    local_20 = (local_24->tm_wday + -1) * 0x15180;
  }
  if (param_1[0x1c] != (SIG_BLOOD_DUNGEON)0x0) {
    MySQL::set_query(local_28,
                     "upDate charac_blood_dungeon_reward set reward=1 where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)"
                     ,*(undefined4 *)param_1,(local_2c - local_20) + -0x93a80);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    MySQL::set_query(local_28,
                     "upDate charac_blood_dungeon_reward set week_point=%u,week_enter_count=%u,week_use_gold=%u,last_play_date=cast(from_unixtime(%d) as date),enter_count=%u where charac_no=%u and week_occ_date = cast(from_unixtime(%d) as date)"
                     ,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                     *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x14),*(undefined4 *)param_1,local_2c - local_20);
    cVar1 = MySQL::exec(local_28,true);
    if (cVar1 != '\x01') {
      return 0;
    }
    lVar2 = MySQL::getAffectedRowCount(local_28);
    if (lVar2 == 0) {
      MySQL::set_query(local_28,
                       "inSert into charac_blood_dungeon_reward(charac_no,week_occ_date,week_point,week_enter_count,week_use_gold,last_play_date,enter_count) values(%u,cast(from_unixtime(%d) as date),%u,%u,%u,cast(from_unixtime(%d) as date),%u)"
                       ,*(undefined4 *)param_1,local_2c - local_20,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                       *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
      cVar1 = MySQL::exec(local_28,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
  }
  return 1;
}

```

---

## dispatch

```asm
// === 08437728 DB_SaveBloodDungeon::dispatch  [0x08437728-0x8437755] ===
 8437728:	55                   	push   %ebp
 8437729:	89 e5                	mov    %esp,%ebp
 843772b:	83 ec 28             	sub    $0x28,%esp
 843772e:	8b 45 14             	mov    0x14(%ebp),%eax
 8437731:	89 04 24             	mov    %eax,(%esp)
 8437734:	e8 f1 bd 01 00       	call   845352a <_ZN6Stream12GetOutBufferI17SIG_BLOOD_DUNGEONEEPT_v>
 8437739:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843773c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843773f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8437743:	8b 45 08             	mov    0x8(%ebp),%eax
 8437746:	89 04 24             	mov    %eax,(%esp)
 8437749:	e8 aa fd ff ff       	call   84374f8 <_ZN19DB_SaveBloodDungeon22SaveBloodDungeonRewardEP17SIG_BLOOD_DUNGEON>
 843774e:	b8 01 00 00 00       	mov    $0x1,%eax
 8437753:	c9                   	leave
 8437754:	c3                   	ret
 8437755:	90                   	nop

```

```c
// DB_SaveBloodDungeon::dispatch @ 0x8437728

/* DB_SaveBloodDungeon::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveBloodDungeon::dispatch(DB_SaveBloodDungeon *this,int param_1,int param_2,Stream *param_3)

{
  SIG_BLOOD_DUNGEON *pSVar1;
  
  pSVar1 = Stream::GetOutBuffer<SIG_BLOOD_DUNGEON>(param_3);
  SaveBloodDungeonReward(this,pSVar1);
  return 1;
}

```


# ARAD__Arad_DB_Charac_Dispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## create_charac

```asm
// === 08184290 ARAD::Arad_DB_Charac_Dispatcher::create_charac  [0x08184290-0x8184341] ===
 8184290:	55                   	push   %ebp
 8184291:	89 e5                	mov    %esp,%ebp
 8184293:	83 ec 38             	sub    $0x38,%esp
 8184296:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818429b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81842a2:	00 
 81842a3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81842aa:	00 
 81842ab:	89 04 24             	mov    %eax,(%esp)
 81842ae:	e8 8b 0f 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81842b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81842b6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81842ba:	75 3b                	jne    81842f7 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0x67>
 81842bc:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 81842c3:	08 
 81842c4:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 81842cb:	08 
 81842cc:	c7 44 24 0c 4e 00 00 	movl   $0x4e,0xc(%esp)
 81842d3:	00 
 81842d4:	c7 44 24 08 c0 d7 b8 	movl   $0x8b8d7c0,0x8(%esp)
 81842db:	08 
 81842dc:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 81842e3:	08 
 81842e4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81842eb:	e8 1a f9 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81842f0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81842f5:	eb 49                	jmp    8184340 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0xb0>
 81842f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81842fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81842fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184301:	89 04 24             	mov    %eax,(%esp)
 8184304:	e8 91 6c 00 00       	call   818af9a <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC>
 8184309:	85 c0                	test   %eax,%eax
 818430b:	0f 95 c0             	setne  %al
 818430e:	84 c0                	test   %al,%al
 8184310:	74 07                	je     8184319 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0x89>
 8184312:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184317:	eb 27                	jmp    8184340 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0xb0>
 8184319:	8b 45 0c             	mov    0xc(%ebp),%eax
 818431c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184320:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184323:	89 04 24             	mov    %eax,(%esp)
 8184326:	e8 60 6a 00 00       	call   818ad8b <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC>
 818432b:	85 c0                	test   %eax,%eax
 818432d:	0f 95 c0             	setne  %al
 8184330:	84 c0                	test   %al,%al
 8184332:	74 07                	je     818433b <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0xab>
 8184334:	b8 59 00 00 00       	mov    $0x59,%eax
 8184339:	eb 05                	jmp    8184340 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC+0xb0>
 818433b:	b8 00 00 00 00       	mov    $0x0,%eax
 8184340:	c9                   	leave
 8184341:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac @ 0x8184290

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*)",0x4e,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_character(pMVar1,param_1);
    if (iVar3 == 0) {
      iVar3 = DATABASE::CREATE_QUERY::arad_sp_get_characer_index(pMVar1,param_1);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x59;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_charac_dungeon

```asm
// === 08184648 ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon  [0x08184648-0x81846d7] ===
 8184648:	55                   	push   %ebp
 8184649:	89 e5                	mov    %esp,%ebp
 818464b:	83 ec 38             	sub    $0x38,%esp
 818464e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8184653:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818465a:	00 
 818465b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8184662:	00 
 8184663:	89 04 24             	mov    %eax,(%esp)
 8184666:	e8 d3 0b 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818466b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818466e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184672:	75 3b                	jne    81846af <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC+0x67>
 8184674:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 818467b:	08 
 818467c:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 8184683:	08 
 8184684:	c7 44 24 0c cd 00 00 	movl   $0xcd,0xc(%esp)
 818468b:	00 
 818468c:	c7 44 24 08 80 d5 b8 	movl   $0x8b8d580,0x8(%esp)
 8184693:	08 
 8184694:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 818469b:	08 
 818469c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81846a3:	e8 62 f5 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81846a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81846ad:	eb 27                	jmp    81846d6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC+0x8e>
 81846af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81846b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81846b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81846b9:	89 04 24             	mov    %eax,(%esp)
 81846bc:	e8 81 6f 00 00       	call   818b642 <_ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC>
 81846c1:	85 c0                	test   %eax,%eax
 81846c3:	0f 95 c0             	setne  %al
 81846c6:	84 c0                	test   %al,%al
 81846c8:	74 07                	je     81846d1 <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC+0x89>
 81846ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81846cf:	eb 05                	jmp    81846d6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC+0x8e>
 81846d1:	b8 00 00 00 00       	mov    $0x0,%eax
 81846d6:	c9                   	leave
 81846d7:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon @ 0x8184648

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*)",0xcd
               ,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_charac_npc_relationship

```asm
// === 08184768 ARAD::Arad_DB_Charac_Dispatcher::create_charac_npc_relationship  [0x08184768-0x81847f7] ===
 8184768:	55                   	push   %ebp
 8184769:	89 e5                	mov    %esp,%ebp
 818476b:	83 ec 38             	sub    $0x38,%esp
 818476e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8184773:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818477a:	00 
 818477b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8184782:	00 
 8184783:	89 04 24             	mov    %eax,(%esp)
 8184786:	e8 b3 0a 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818478b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818478e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184792:	75 3b                	jne    81847cf <_ZN4ARAD25Arad_DB_Charac_Dispatcher30create_charac_npc_relationshipEP17SIG_CREATE_CHARAC+0x67>
 8184794:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 818479b:	08 
 818479c:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 81847a3:	08 
 81847a4:	c7 44 24 0c e9 00 00 	movl   $0xe9,0xc(%esp)
 81847ab:	00 
 81847ac:	c7 44 24 08 c0 d4 b8 	movl   $0x8b8d4c0,0x8(%esp)
 81847b3:	08 
 81847b4:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 81847bb:	08 
 81847bc:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81847c3:	e8 42 f4 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81847c8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81847cd:	eb 27                	jmp    81847f6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher30create_charac_npc_relationshipEP17SIG_CREATE_CHARAC+0x8e>
 81847cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81847d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81847d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81847d9:	89 04 24             	mov    %eax,(%esp)
 81847dc:	e8 e8 6e 00 00       	call   818b6c9 <_ZN4ARAD8DATABASE12CREATE_QUERY31arad_sp_create_npc_relationshipEP5MySQLP17SIG_CREATE_CHARAC>
 81847e1:	85 c0                	test   %eax,%eax
 81847e3:	0f 95 c0             	setne  %al
 81847e6:	84 c0                	test   %al,%al
 81847e8:	74 07                	je     81847f1 <_ZN4ARAD25Arad_DB_Charac_Dispatcher30create_charac_npc_relationshipEP17SIG_CREATE_CHARAC+0x89>
 81847ea:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81847ef:	eb 05                	jmp    81847f6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher30create_charac_npc_relationshipEP17SIG_CREATE_CHARAC+0x8e>
 81847f1:	b8 00 00 00 00       	mov    $0x0,%eax
 81847f6:	c9                   	leave
 81847f7:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_npc_relationship @ 0x8184768

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_npc_relationship(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_npc_relationship
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_npc_relationship(SIG_CREATE_CHARAC*)"
               ,0xe9,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_npc_relationship(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_charac_quest

```asm
// === 081846d8 ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest  [0x081846d8-0x8184767] ===
 81846d8:	55                   	push   %ebp
 81846d9:	89 e5                	mov    %esp,%ebp
 81846db:	83 ec 38             	sub    $0x38,%esp
 81846de:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81846e3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81846ea:	00 
 81846eb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81846f2:	00 
 81846f3:	89 04 24             	mov    %eax,(%esp)
 81846f6:	e8 43 0b 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81846fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81846fe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184702:	75 3b                	jne    818473f <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC+0x67>
 8184704:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 818470b:	08 
 818470c:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 8184713:	08 
 8184714:	c7 44 24 0c db 00 00 	movl   $0xdb,0xc(%esp)
 818471b:	00 
 818471c:	c7 44 24 08 20 d5 b8 	movl   $0x8b8d520,0x8(%esp)
 8184723:	08 
 8184724:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 818472b:	08 
 818472c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8184733:	e8 d2 f4 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184738:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818473d:	eb 27                	jmp    8184766 <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC+0x8e>
 818473f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184742:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184746:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184749:	89 04 24             	mov    %eax,(%esp)
 818474c:	e8 3b 6f 00 00       	call   818b68c <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_charac_questEP5MySQLP17SIG_CREATE_CHARAC>
 8184751:	85 c0                	test   %eax,%eax
 8184753:	0f 95 c0             	setne  %al
 8184756:	84 c0                	test   %al,%al
 8184758:	74 07                	je     8184761 <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC+0x89>
 818475a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818475f:	eb 05                	jmp    8184766 <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC+0x8e>
 8184761:	b8 00 00 00 00       	mov    $0x0,%eax
 8184766:	c9                   	leave
 8184767:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest @ 0x81846d8

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_quest(SIG_CREATE_CHARAC*)",0xdb,
               "%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_charac_quest(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_charac_stat

```asm
// === 08184342 ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat  [0x08184342-0x81843d1] ===
 8184342:	55                   	push   %ebp
 8184343:	89 e5                	mov    %esp,%ebp
 8184345:	83 ec 38             	sub    $0x38,%esp
 8184348:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818434d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8184354:	00 
 8184355:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818435c:	00 
 818435d:	89 04 24             	mov    %eax,(%esp)
 8184360:	e8 d9 0e 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8184365:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184368:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818436c:	75 3b                	jne    81843a9 <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC+0x67>
 818436e:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 8184375:	08 
 8184376:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 818437d:	08 
 818437e:	c7 44 24 0c 67 00 00 	movl   $0x67,0xc(%esp)
 8184385:	00 
 8184386:	c7 44 24 08 60 d7 b8 	movl   $0x8b8d760,0x8(%esp)
 818438d:	08 
 818438e:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 8184395:	08 
 8184396:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818439d:	e8 68 f8 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81843a2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81843a7:	eb 27                	jmp    81843d0 <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC+0x8e>
 81843a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81843ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81843b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81843b3:	89 04 24             	mov    %eax,(%esp)
 81843b6:	e8 b2 6e 00 00       	call   818b26d <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC>
 81843bb:	85 c0                	test   %eax,%eax
 81843bd:	0f 95 c0             	setne  %al
 81843c0:	84 c0                	test   %al,%al
 81843c2:	74 07                	je     81843cb <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC+0x89>
 81843c4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81843c9:	eb 05                	jmp    81843d0 <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC+0x8e>
 81843cb:	b8 00 00 00 00       	mov    $0x0,%eax
 81843d0:	c9                   	leave
 81843d1:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat @ 0x8184342

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*)",0x67,
               "%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_equip

```asm
// === 08184484 ARAD::Arad_DB_Charac_Dispatcher::create_equip  [0x08184484-0x8184527] ===
 8184484:	55                   	push   %ebp
 8184485:	89 e5                	mov    %esp,%ebp
 8184487:	83 ec 38             	sub    $0x38,%esp
 818448a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818448f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8184496:	00 
 8184497:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818449e:	00 
 818449f:	89 04 24             	mov    %eax,(%esp)
 81844a2:	e8 97 0d 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81844a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81844aa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81844ae:	75 3b                	jne    81844eb <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0x67>
 81844b0:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 81844b7:	08 
 81844b8:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 81844bf:	08 
 81844c0:	c7 44 24 0c 95 00 00 	movl   $0x95,0xc(%esp)
 81844c7:	00 
 81844c8:	c7 44 24 08 a0 d6 b8 	movl   $0x8b8d6a0,0x8(%esp)
 81844cf:	08 
 81844d0:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 81844d7:	08 
 81844d8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81844df:	e8 26 f7 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81844e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81844e9:	eb 3a                	jmp    8184525 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0xa1>
 81844eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81844ee:	05 01 4e 00 00       	add    $0x4e01,%eax
 81844f3:	85 c0                	test   %eax,%eax
 81844f5:	75 07                	jne    81844fe <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0x7a>
 81844f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81844fc:	eb 27                	jmp    8184525 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0xa1>
 81844fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184501:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184505:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184508:	89 04 24             	mov    %eax,(%esp)
 818450b:	e8 33 6f 00 00       	call   818b443 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC>
 8184510:	85 c0                	test   %eax,%eax
 8184512:	0f 95 c0             	setne  %al
 8184515:	84 c0                	test   %al,%al
 8184517:	74 07                	je     8184520 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0x9c>
 8184519:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818451e:	eb 05                	jmp    8184525 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC+0xa1>
 8184520:	b8 00 00 00 00       	mov    $0x0,%eax
 8184525:	c9                   	leave
 8184526:	c3                   	ret
 8184527:	90                   	nop

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_equip @ 0x8184484

/* ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_equip
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*)",0x95,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else if (param_1 == (SIG_CREATE_CHARAC *)0xffffb1ff) {
    uVar2 = 0;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_equip(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_inventory

```asm
// === 081843d2 ARAD::Arad_DB_Charac_Dispatcher::create_inventory  [0x081843d2-0x8184483] ===
 81843d2:	55                   	push   %ebp
 81843d3:	89 e5                	mov    %esp,%ebp
 81843d5:	83 ec 38             	sub    $0x38,%esp
 81843d8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81843dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81843e4:	00 
 81843e5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81843ec:	00 
 81843ed:	89 04 24             	mov    %eax,(%esp)
 81843f0:	e8 49 0e 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81843f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81843f8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81843fc:	75 3b                	jne    8184439 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0x67>
 81843fe:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 8184405:	08 
 8184406:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 818440d:	08 
 818440e:	c7 44 24 0c 7b 00 00 	movl   $0x7b,0xc(%esp)
 8184415:	00 
 8184416:	c7 44 24 08 00 d7 b8 	movl   $0x8b8d700,0x8(%esp)
 818441d:	08 
 818441e:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 8184425:	08 
 8184426:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818442d:	e8 d8 f7 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184432:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184437:	eb 49                	jmp    8184482 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0xb0>
 8184439:	8b 45 0c             	mov    0xc(%ebp),%eax
 818443c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184440:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184443:	89 04 24             	mov    %eax,(%esp)
 8184446:	e8 6c 6e 00 00       	call   818b2b7 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC>
 818444b:	85 c0                	test   %eax,%eax
 818444d:	0f 95 c0             	setne  %al
 8184450:	84 c0                	test   %al,%al
 8184452:	74 07                	je     818445b <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0x89>
 8184454:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184459:	eb 27                	jmp    8184482 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0xb0>
 818445b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818445e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184462:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184465:	89 04 24             	mov    %eax,(%esp)
 8184468:	e8 99 6f 00 00       	call   818b406 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_expand_invenEP5MySQLP17SIG_CREATE_CHARAC>
 818446d:	85 c0                	test   %eax,%eax
 818446f:	0f 95 c0             	setne  %al
 8184472:	84 c0                	test   %al,%al
 8184474:	74 07                	je     818447d <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0xab>
 8184476:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818447b:	eb 05                	jmp    8184482 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC+0xb0>
 818447d:	b8 00 00 00 00       	mov    $0x0,%eax
 8184482:	c9                   	leave
 8184483:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_inventory @ 0x81843d2

/* ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_inventory
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*)",0x7b,"%s"
               ,"Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_inven(pMVar1,param_1);
    if (iVar3 == 0) {
      iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_expand_inven(pMVar1,param_1);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_pvp

```asm
// === 081845b8 ARAD::Arad_DB_Charac_Dispatcher::create_pvp  [0x081845b8-0x8184647] ===
 81845b8:	55                   	push   %ebp
 81845b9:	89 e5                	mov    %esp,%ebp
 81845bb:	83 ec 38             	sub    $0x38,%esp
 81845be:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 81845c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81845ca:	00 
 81845cb:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81845d2:	00 
 81845d3:	89 04 24             	mov    %eax,(%esp)
 81845d6:	e8 63 0c 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81845db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81845de:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81845e2:	75 3b                	jne    818461f <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC+0x67>
 81845e4:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 81845eb:	08 
 81845ec:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 81845f3:	08 
 81845f4:	c7 44 24 0c bf 00 00 	movl   $0xbf,0xc(%esp)
 81845fb:	00 
 81845fc:	c7 44 24 08 e0 d5 b8 	movl   $0x8b8d5e0,0x8(%esp)
 8184603:	08 
 8184604:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 818460b:	08 
 818460c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8184613:	e8 f2 f5 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184618:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818461d:	eb 27                	jmp    8184646 <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC+0x8e>
 818461f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184622:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184626:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184629:	89 04 24             	mov    %eax,(%esp)
 818462c:	e8 c3 6f 00 00       	call   818b5f4 <_ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC>
 8184631:	85 c0                	test   %eax,%eax
 8184633:	0f 95 c0             	setne  %al
 8184636:	84 c0                	test   %al,%al
 8184638:	74 07                	je     8184641 <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC+0x89>
 818463a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818463f:	eb 05                	jmp    8184646 <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC+0x8e>
 8184641:	b8 00 00 00 00       	mov    $0x0,%eax
 8184646:	c9                   	leave
 8184647:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_pvp @ 0x81845b8

/* ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_pvp
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*)",0xbf,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_pvp(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## create_skill

```asm
// === 08184528 ARAD::Arad_DB_Charac_Dispatcher::create_skill  [0x08184528-0x81845b7] ===
 8184528:	55                   	push   %ebp
 8184529:	89 e5                	mov    %esp,%ebp
 818452b:	83 ec 38             	sub    $0x38,%esp
 818452e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8184533:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818453a:	00 
 818453b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8184542:	00 
 8184543:	89 04 24             	mov    %eax,(%esp)
 8184546:	e8 f3 0c 27 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818454b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818454e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184552:	75 3b                	jne    818458f <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC+0x67>
 8184554:	c7 44 24 14 ae c8 b8 	movl   $0x8b8c8ae,0x14(%esp)
 818455b:	08 
 818455c:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 8184563:	08 
 8184564:	c7 44 24 0c b0 00 00 	movl   $0xb0,0xc(%esp)
 818456b:	00 
 818456c:	c7 44 24 08 40 d6 b8 	movl   $0x8b8d640,0x8(%esp)
 8184573:	08 
 8184574:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 818457b:	08 
 818457c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8184583:	e8 82 f6 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184588:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818458d:	eb 27                	jmp    81845b6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC+0x8e>
 818458f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8184592:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184596:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184599:	89 04 24             	mov    %eax,(%esp)
 818459c:	e8 e7 6f 00 00       	call   818b588 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC>
 81845a1:	85 c0                	test   %eax,%eax
 81845a3:	0f 95 c0             	setne  %al
 81845a6:	84 c0                	test   %al,%al
 81845a8:	74 07                	je     81845b1 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC+0x89>
 81845aa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81845af:	eb 05                	jmp    81845b6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC+0x8e>
 81845b1:	b8 00 00 00 00       	mov    $0x0,%eax
 81845b6:	c9                   	leave
 81845b7:	c3                   	ret

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_skill @ 0x8184528

/* ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_skill
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*)",0xb0,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_skill(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 08184114 ARAD::Arad_DB_Charac_Dispatcher::dispatch  [0x08184114-0x818428f] ===
 8184114:	55                   	push   %ebp
 8184115:	89 e5                	mov    %esp,%ebp
 8184117:	83 ec 38             	sub    $0x38,%esp
 818411a:	8b 45 14             	mov    0x14(%ebp),%eax
 818411d:	89 04 24             	mov    %eax,(%esp)
 8184120:	e8 2f 07 00 00       	call   8184854 <_ZN6Stream12GetOutBufferI17SIG_CREATE_CHARACEEPT_v>
 8184125:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184128:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818412c:	75 3e                	jne    818416c <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x58>
 818412e:	c7 44 24 14 80 c8 b8 	movl   $0x8b8c880,0x14(%esp)
 8184135:	08 
 8184136:	c7 44 24 10 8d c8 b8 	movl   $0x8b8c88d,0x10(%esp)
 818413d:	08 
 818413e:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 8184145:	00 
 8184146:	c7 44 24 08 20 d8 b8 	movl   $0x8b8d820,0x8(%esp)
 818414d:	08 
 818414e:	c7 44 24 04 90 c8 b8 	movl   $0x8b8c890,0x4(%esp)
 8184155:	08 
 8184156:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818415d:	e8 a8 fa 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8184162:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184167:	e9 21 01 00 00       	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 818416c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818416f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184173:	8b 45 08             	mov    0x8(%ebp),%eax
 8184176:	89 04 24             	mov    %eax,(%esp)
 8184179:	e8 12 01 00 00       	call   8184290 <_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC>
 818417e:	85 c0                	test   %eax,%eax
 8184180:	0f 95 c0             	setne  %al
 8184183:	84 c0                	test   %al,%al
 8184185:	74 0a                	je     8184191 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x7d>
 8184187:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818418c:	e9 fc 00 00 00       	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184191:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184194:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184198:	8b 45 08             	mov    0x8(%ebp),%eax
 818419b:	89 04 24             	mov    %eax,(%esp)
 818419e:	e8 9f 01 00 00       	call   8184342 <_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC>
 81841a3:	85 c0                	test   %eax,%eax
 81841a5:	0f 95 c0             	setne  %al
 81841a8:	84 c0                	test   %al,%al
 81841aa:	74 0a                	je     81841b6 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0xa2>
 81841ac:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81841b1:	e9 d7 00 00 00       	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 81841b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81841b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81841bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81841c0:	89 04 24             	mov    %eax,(%esp)
 81841c3:	e8 0a 02 00 00       	call   81843d2 <_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC>
 81841c8:	85 c0                	test   %eax,%eax
 81841ca:	0f 95 c0             	setne  %al
 81841cd:	84 c0                	test   %al,%al
 81841cf:	74 0a                	je     81841db <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0xc7>
 81841d1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81841d6:	e9 b2 00 00 00       	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 81841db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81841de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81841e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81841e5:	89 04 24             	mov    %eax,(%esp)
 81841e8:	e8 97 02 00 00       	call   8184484 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC>
 81841ed:	85 c0                	test   %eax,%eax
 81841ef:	0f 95 c0             	setne  %al
 81841f2:	84 c0                	test   %al,%al
 81841f4:	74 0a                	je     8184200 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0xec>
 81841f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81841fb:	e9 8d 00 00 00       	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184200:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184203:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184207:	8b 45 08             	mov    0x8(%ebp),%eax
 818420a:	89 04 24             	mov    %eax,(%esp)
 818420d:	e8 16 03 00 00       	call   8184528 <_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC>
 8184212:	85 c0                	test   %eax,%eax
 8184214:	0f 95 c0             	setne  %al
 8184217:	84 c0                	test   %al,%al
 8184219:	74 07                	je     8184222 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x10e>
 818421b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184220:	eb 6b                	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184222:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184225:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184229:	8b 45 08             	mov    0x8(%ebp),%eax
 818422c:	89 04 24             	mov    %eax,(%esp)
 818422f:	e8 84 03 00 00       	call   81845b8 <_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC>
 8184234:	85 c0                	test   %eax,%eax
 8184236:	0f 95 c0             	setne  %al
 8184239:	84 c0                	test   %al,%al
 818423b:	74 07                	je     8184244 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x130>
 818423d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184242:	eb 49                	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184244:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184247:	89 44 24 04          	mov    %eax,0x4(%esp)
 818424b:	8b 45 08             	mov    0x8(%ebp),%eax
 818424e:	89 04 24             	mov    %eax,(%esp)
 8184251:	e8 f2 03 00 00       	call   8184648 <_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC>
 8184256:	85 c0                	test   %eax,%eax
 8184258:	0f 95 c0             	setne  %al
 818425b:	84 c0                	test   %al,%al
 818425d:	74 07                	je     8184266 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x152>
 818425f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184264:	eb 27                	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184266:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184269:	89 44 24 04          	mov    %eax,0x4(%esp)
 818426d:	8b 45 08             	mov    0x8(%ebp),%eax
 8184270:	89 04 24             	mov    %eax,(%esp)
 8184273:	e8 60 04 00 00       	call   81846d8 <_ZN4ARAD25Arad_DB_Charac_Dispatcher19create_charac_questEP17SIG_CREATE_CHARAC>
 8184278:	85 c0                	test   %eax,%eax
 818427a:	0f 95 c0             	setne  %al
 818427d:	84 c0                	test   %al,%al
 818427f:	74 07                	je     8184288 <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x174>
 8184281:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8184286:	eb 05                	jmp    818428d <_ZN4ARAD25Arad_DB_Charac_Dispatcher8dispatchEiiP6Stream+0x179>
 8184288:	b8 00 00 00 00       	mov    $0x0,%eax
 818428d:	c9                   	leave
 818428e:	c3                   	ret
 818428f:	90                   	nop

```

```c
// ARAD::Arad_DB_Charac_Dispatcher::dispatch @ 0x8184114

/* ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::dispatch
          (Arad_DB_Charac_Dispatcher *this,int param_1,int param_2,Stream *param_3)

{
  SIG_CREATE_CHARAC *pSVar1;
  undefined4 uVar2;
  int iVar3;
  
  pSVar1 = Stream::GetOutBuffer<SIG_CREATE_CHARAC>(param_3);
  if (pSVar1 == (SIG_CREATE_CHARAC *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "virtual int ARAD::Arad_DB_Charac_Dispatcher::dispatch(int, int, Stream*)",0x18,"%s",
               "Context Null");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = create_charac(this,pSVar1);
    if (iVar3 == 0) {
      iVar3 = create_charac_stat(this,pSVar1);
      if (iVar3 == 0) {
        iVar3 = create_inventory(this,pSVar1);
        if (iVar3 == 0) {
          iVar3 = create_equip(this,pSVar1);
          if (iVar3 == 0) {
            iVar3 = create_skill(this,pSVar1);
            if (iVar3 == 0) {
              iVar3 = create_pvp(this,pSVar1);
              if (iVar3 == 0) {
                iVar3 = create_charac_dungeon(this,pSVar1);
                if (iVar3 == 0) {
                  iVar3 = create_charac_quest(this,pSVar1);
                  if (iVar3 == 0) {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  uVar2 = 0xffffffff;
                }
              }
              else {
                uVar2 = 0xffffffff;
              }
            }
            else {
              uVar2 = 0xffffffff;
            }
          }
          else {
            uVar2 = 0xffffffff;
          }
        }
        else {
          uVar2 = 0xffffffff;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```


# ARAD__DATABASE__LOGIN_QUERY

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## arad_sp_check_goblin_reward

```asm
// === 0818c4f3 ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward  [0x0818c4f3-0x818c608] ===
 818c4f3:	55                   	push   %ebp
 818c4f4:	89 e5                	mov    %esp,%ebp
 818c4f6:	83 ec 38             	sub    $0x38,%esp
 818c4f9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c4fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c505:	00 
 818c506:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c50d:	00 
 818c50e:	89 04 24             	mov    %eax,(%esp)
 818c511:	e8 28 8d 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c516:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818c519:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818c51d:	75 3e                	jne    818c55d <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc+0x6a>
 818c51f:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c526:	08 
 818c527:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c52e:	08 
 818c52f:	c7 44 24 0c 0d 03 00 	movl   $0x30d,0xc(%esp)
 818c536:	00 
 818c537:	c7 44 24 08 e0 3e b9 	movl   $0x8b93ee0,0x8(%esp)
 818c53e:	08 
 818c53f:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c546:	08 
 818c547:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c54e:	e8 b7 76 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c553:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c558:	e9 aa 00 00 00       	jmp    818c607 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc+0x114>
 818c55d:	8b 45 08             	mov    0x8(%ebp),%eax
 818c560:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c566:	8b 55 0c             	mov    0xc(%ebp),%edx
 818c569:	89 54 24 10          	mov    %edx,0x10(%esp)
 818c56d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818c571:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 818c578:	00 
 818c579:	c7 44 24 04 d0 29 b9 	movl   $0x8b929d0,0x4(%esp)
 818c580:	08 
 818c581:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c584:	89 04 24             	mov    %eax,(%esp)
 818c587:	e8 34 7c 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818c58c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818c593:	00 
 818c594:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c597:	89 04 24             	mov    %eax,(%esp)
 818c59a:	e8 87 7d 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 818c59f:	83 f0 01             	xor    $0x1,%eax
 818c5a2:	84 c0                	test   %al,%al
 818c5a4:	74 3b                	je     818c5e1 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc+0xee>
 818c5a6:	c7 44 24 14 34 2a b9 	movl   $0x8b92a34,0x14(%esp)
 818c5ad:	08 
 818c5ae:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c5b5:	08 
 818c5b6:	c7 44 24 0c 1f 03 00 	movl   $0x31f,0xc(%esp)
 818c5bd:	00 
 818c5be:	c7 44 24 08 e0 3e b9 	movl   $0x8b93ee0,0x8(%esp)
 818c5c5:	08 
 818c5c6:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c5cd:	08 
 818c5ce:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c5d5:	e8 30 76 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c5da:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c5df:	eb 26                	jmp    818c607 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc+0x114>
 818c5e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c5e4:	89 04 24             	mov    %eax,(%esp)
 818c5e7:	e8 80 5d f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818c5ec:	85 c0                	test   %eax,%eax
 818c5ee:	8b 45 08             	mov    0x8(%ebp),%eax
 818c5f1:	c6 80 e0 38 00 00 01 	movb   $0x1,0x38e0(%eax)
 818c5f8:	8b 45 08             	mov    0x8(%ebp),%eax
 818c5fb:	c6 80 0c 39 00 00 02 	movb   $0x2,0x390c(%eax)
 818c602:	b8 00 00 00 00       	mov    $0x0,%eax
 818c607:	c9                   	leave
 818c608:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward @ 0x818c4f3

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  MySQL *this;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)"
               ,0x30d,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    MySQL::set_query(this,
                     "seLect m_id from member_mousepass_history where modify_type = %d and m_id=%d and occ_time >= \'%s\'"
                     ,0x10,*(undefined4 *)(param_1 + 0xc0),param_2);
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      MySQL::get_n_rows(this);
      param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
      param_1[0x390c] = (SIG_LOGIN_DATA)0x2;
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)"
                 ,799,"%s","arad_sp_check_goblin_reward fail");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## arad_sp_convert_pass_pad_info

```asm
// === 0818c0e0 ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info  [0x0818c0e0-0x818c4f2] ===
 818c0e0:	55                   	push   %ebp
 818c0e1:	89 e5                	mov    %esp,%ebp
 818c0e3:	83 ec 48             	sub    $0x48,%esp
 818c0e6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c0eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c0f2:	00 
 818c0f3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c0fa:	00 
 818c0fb:	89 04 24             	mov    %eax,(%esp)
 818c0fe:	e8 3b 91 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c103:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818c106:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818c10a:	75 3e                	jne    818c14a <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x6a>
 818c10c:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c113:	08 
 818c114:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c11b:	08 
 818c11c:	c7 44 24 0c b0 02 00 	movl   $0x2b0,0xc(%esp)
 818c123:	00 
 818c124:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c12b:	08 
 818c12c:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c133:	08 
 818c134:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c13b:	e8 ca 7a 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c140:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c145:	e9 a7 03 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c14a:	8b 45 08             	mov    0x8(%ebp),%eax
 818c14d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c153:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c157:	c7 44 24 04 24 28 b9 	movl   $0x8b92824,0x4(%esp)
 818c15e:	08 
 818c15f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c162:	89 04 24             	mov    %eax,(%esp)
 818c165:	e8 56 80 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818c16a:	83 f0 01             	xor    $0x1,%eax
 818c16d:	84 c0                	test   %al,%al
 818c16f:	74 0a                	je     818c17b <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x9b>
 818c171:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c176:	e9 76 03 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c17b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818c182:	00 
 818c183:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c186:	89 04 24             	mov    %eax,(%esp)
 818c189:	e8 98 81 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 818c18e:	83 f0 01             	xor    $0x1,%eax
 818c191:	84 c0                	test   %al,%al
 818c193:	74 3e                	je     818c1d3 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0xf3>
 818c195:	c7 44 24 14 9c 28 b9 	movl   $0x8b9289c,0x14(%esp)
 818c19c:	08 
 818c19d:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c1a4:	08 
 818c1a5:	c7 44 24 0c bc 02 00 	movl   $0x2bc,0xc(%esp)
 818c1ac:	00 
 818c1ad:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c1b4:	08 
 818c1b5:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c1bc:	08 
 818c1bd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c1c4:	e8 41 7a 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c1c9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c1ce:	e9 1e 03 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c1d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c1d6:	89 04 24             	mov    %eax,(%esp)
 818c1d9:	e8 8e 61 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818c1de:	85 c0                	test   %eax,%eax
 818c1e0:	0f 94 c0             	sete   %al
 818c1e3:	84 c0                	test   %al,%al
 818c1e5:	74 4a                	je     818c231 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x151>
 818c1e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 818c1ee:	00 
 818c1ef:	c7 44 24 08 c2 02 00 	movl   $0x2c2,0x8(%esp)
 818c1f6:	00 
 818c1f7:	c7 44 24 04 40 3f b9 	movl   $0x8b93f40,0x4(%esp)
 818c1fe:	08 
 818c1ff:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818c202:	89 04 24             	mov    %eax,(%esp)
 818c205:	e8 0e 35 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818c20a:	c7 44 24 04 bf 28 b9 	movl   $0x8b928bf,0x4(%esp)
 818c211:	08 
 818c212:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818c215:	89 04 24             	mov    %eax,(%esp)
 818c218:	e8 6b 35 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818c21d:	8b 45 08             	mov    0x8(%ebp),%eax
 818c220:	c6 80 0c 39 00 00 00 	movb   $0x0,0x390c(%eax)
 818c227:	b8 00 00 00 00       	mov    $0x0,%eax
 818c22c:	e9 c0 02 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c231:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c234:	89 04 24             	mov    %eax,(%esp)
 818c237:	e8 80 82 26 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 818c23c:	83 f0 01             	xor    $0x1,%eax
 818c23f:	84 c0                	test   %al,%al
 818c241:	74 3e                	je     818c281 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x1a1>
 818c243:	c7 44 24 14 d0 28 b9 	movl   $0x8b928d0,0x14(%esp)
 818c24a:	08 
 818c24b:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c252:	08 
 818c253:	c7 44 24 0c c9 02 00 	movl   $0x2c9,0xc(%esp)
 818c25a:	00 
 818c25b:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c262:	08 
 818c263:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c26a:	08 
 818c26b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c272:	e8 93 79 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c277:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c27c:	e9 70 02 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c281:	8b 45 08             	mov    0x8(%ebp),%eax
 818c284:	05 e1 38 00 00       	add    $0x38e1,%eax
 818c289:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 818c290:	00 
 818c291:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c295:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818c29c:	00 
 818c29d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c2a0:	89 04 24             	mov    %eax,(%esp)
 818c2a3:	e8 42 0b f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818c2a8:	83 f0 01             	xor    $0x1,%eax
 818c2ab:	84 c0                	test   %al,%al
 818c2ad:	74 3e                	je     818c2ed <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x20d>
 818c2af:	c7 44 24 14 fc 28 b9 	movl   $0x8b928fc,0x14(%esp)
 818c2b6:	08 
 818c2b7:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c2be:	08 
 818c2bf:	c7 44 24 0c cf 02 00 	movl   $0x2cf,0xc(%esp)
 818c2c6:	00 
 818c2c7:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c2ce:	08 
 818c2cf:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c2d6:	08 
 818c2d7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c2de:	e8 27 79 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c2e3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c2e8:	e9 04 02 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c2ed:	8b 45 08             	mov    0x8(%ebp),%eax
 818c2f0:	05 14 39 00 00       	add    $0x3914,%eax
 818c2f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c2f9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818c300:	00 
 818c301:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c304:	89 04 24             	mov    %eax,(%esp)
 818c307:	e8 20 a6 f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c30c:	83 f0 01             	xor    $0x1,%eax
 818c30f:	84 c0                	test   %al,%al
 818c311:	74 3e                	je     818c351 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x271>
 818c313:	c7 44 24 14 20 29 b9 	movl   $0x8b92920,0x14(%esp)
 818c31a:	08 
 818c31b:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c322:	08 
 818c323:	c7 44 24 0c d5 02 00 	movl   $0x2d5,0xc(%esp)
 818c32a:	00 
 818c32b:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c332:	08 
 818c333:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c33a:	08 
 818c33b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c342:	e8 c3 78 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c347:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c34c:	e9 a0 01 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c351:	8b 45 08             	mov    0x8(%ebp),%eax
 818c354:	05 18 39 00 00       	add    $0x3918,%eax
 818c359:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c35d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818c364:	00 
 818c365:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c368:	89 04 24             	mov    %eax,(%esp)
 818c36b:	e8 bc a5 f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c370:	83 f0 01             	xor    $0x1,%eax
 818c373:	84 c0                	test   %al,%al
 818c375:	74 3e                	je     818c3b5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x2d5>
 818c377:	c7 44 24 14 48 29 b9 	movl   $0x8b92948,0x14(%esp)
 818c37e:	08 
 818c37f:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c386:	08 
 818c387:	c7 44 24 0c db 02 00 	movl   $0x2db,0xc(%esp)
 818c38e:	00 
 818c38f:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c396:	08 
 818c397:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c39e:	08 
 818c39f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c3a6:	e8 5f 78 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c3ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c3b0:	e9 3c 01 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c3b5:	8b 45 08             	mov    0x8(%ebp),%eax
 818c3b8:	05 0c 39 00 00       	add    $0x390c,%eax
 818c3bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c3c1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818c3c8:	00 
 818c3c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c3cc:	89 04 24             	mov    %eax,(%esp)
 818c3cf:	e8 80 1a f7 ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 818c3d4:	83 f0 01             	xor    $0x1,%eax
 818c3d7:	84 c0                	test   %al,%al
 818c3d9:	74 3e                	je     818c419 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x339>
 818c3db:	c7 44 24 14 6b 29 b9 	movl   $0x8b9296b,0x14(%esp)
 818c3e2:	08 
 818c3e3:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c3ea:	08 
 818c3eb:	c7 44 24 0c e0 02 00 	movl   $0x2e0,0xc(%esp)
 818c3f2:	00 
 818c3f3:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c3fa:	08 
 818c3fb:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c402:	08 
 818c403:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c40a:	e8 fb 77 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c40f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c414:	e9 d8 00 00 00       	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c419:	8b 45 08             	mov    0x8(%ebp),%eax
 818c41c:	05 10 39 00 00       	add    $0x3910,%eax
 818c421:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c425:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 818c42c:	00 
 818c42d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c430:	89 04 24             	mov    %eax,(%esp)
 818c433:	e8 ba 5e f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818c438:	83 f0 01             	xor    $0x1,%eax
 818c43b:	84 c0                	test   %al,%al
 818c43d:	74 3b                	je     818c47a <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x39a>
 818c43f:	c7 44 24 14 88 29 b9 	movl   $0x8b92988,0x14(%esp)
 818c446:	08 
 818c447:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c44e:	08 
 818c44f:	c7 44 24 0c e6 02 00 	movl   $0x2e6,0xc(%esp)
 818c456:	00 
 818c457:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c45e:	08 
 818c45f:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c466:	08 
 818c467:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c46e:	e8 97 77 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c473:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c478:	eb 77                	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c47a:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 818c47e:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 818c481:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c485:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 818c48c:	00 
 818c48d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c490:	89 04 24             	mov    %eax,(%esp)
 818c493:	e8 bc 19 f7 ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 818c498:	83 f0 01             	xor    $0x1,%eax
 818c49b:	84 c0                	test   %al,%al
 818c49d:	74 3b                	je     818c4da <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x3fa>
 818c49f:	c7 44 24 14 ac 29 b9 	movl   $0x8b929ac,0x14(%esp)
 818c4a6:	08 
 818c4a7:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c4ae:	08 
 818c4af:	c7 44 24 0c ed 02 00 	movl   $0x2ed,0xc(%esp)
 818c4b6:	00 
 818c4b7:	c7 44 24 08 40 3f b9 	movl   $0x8b93f40,0x8(%esp)
 818c4be:	08 
 818c4bf:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c4c6:	08 
 818c4c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c4ce:	e8 37 77 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c4d3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c4d8:	eb 17                	jmp    818c4f1 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x411>
 818c4da:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 818c4de:	3c 01                	cmp    $0x1,%al
 818c4e0:	75 0a                	jne    818c4ec <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA+0x40c>
 818c4e2:	8b 45 08             	mov    0x8(%ebp),%eax
 818c4e5:	c6 80 0e 39 00 00 01 	movb   $0x1,0x390e(%eax)
 818c4ec:	b8 00 00 00 00       	mov    $0x0,%eax
 818c4f1:	c9                   	leave
 818c4f2:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info @ 0x818c0e0

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_21;
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)",
               0x2b0,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    cVar1 = MySQL::set_query(local_10,
                             "seLect mousepass, fail_cnt, cancel_cnt, version_info, validity_time, enable_flag from member_mousepass where m_id=%d"
                             ,*(undefined4 *)(param_1 + 0xc0));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(local_10,true);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::get_n_rows(local_10);
        if (iVar3 == 0) {
          cMyTrace::cMyTrace(local_20,
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                             ,0x2c2,0);
          cMyTrace::operator()(local_20,"Goblin Pad Exist");
          param_1[0x390c] = (SIG_LOGIN_DATA)0x0;
          uVar2 = 0;
        }
        else {
          cVar1 = MySQL::fetch(local_10);
          if (cVar1 == '\x01') {
            cVar1 = MySQL::get_str(local_10,0,(char *)(param_1 + 0x38e1),0x24);
            if (cVar1 == '\x01') {
              cVar1 = MySQL::get_int(local_10,1,(int *)(param_1 + 0x3914));
              if (cVar1 == '\x01') {
                cVar1 = MySQL::get_int(local_10,2,(int *)(param_1 + 0x3918));
                if (cVar1 == '\x01') {
                  cVar1 = MySQL::get_byte(local_10,3,(char *)(param_1 + 0x390c));
                  if (cVar1 == '\x01') {
                    cVar1 = MySQL::get_uint(local_10,4,(uint *)(param_1 + 0x3910));
                    if (cVar1 == '\x01') {
                      local_21 = '\0';
                      cVar1 = MySQL::get_byte(local_10,5,&local_21);
                      if (cVar1 == '\x01') {
                        if (local_21 == '\x01') {
                          param_1[0x390e] = (SIG_LOGIN_DATA)0x1;
                        }
                        uVar2 = 0;
                      }
                      else {
                        LogManager::logFormat
                                  (1,"localjapan/Arad_DB_Query.cpp",
                                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                                   ,0x2ed,"%s","Goblin enable flage Parsing error");
                        uVar2 = 0xffffffff;
                      }
                    }
                    else {
                      LogManager::logFormat
                                (1,"localjapan/Arad_DB_Query.cpp",
                                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                                 ,0x2e6,"%s","Goblin Validity Time Parsing error");
                      uVar2 = 0xffffffff;
                    }
                  }
                  else {
                    LogManager::logFormat
                              (1,"localjapan/Arad_DB_Query.cpp",
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                               ,0x2e0,"%s","VersionInfo Parsing error");
                    uVar2 = 0xffffffff;
                  }
                }
                else {
                  LogManager::logFormat
                            (1,"localjapan/Arad_DB_Query.cpp",
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                             ,0x2db,"%s","PassPad Cancel Count Parsing error");
                  uVar2 = 0xffffffff;
                }
              }
              else {
                LogManager::logFormat
                          (1,"localjapan/Arad_DB_Query.cpp",
                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                           ,0x2d5,"%s","Mouse PassPad Fail Count Parsing error");
                uVar2 = 0xffffffff;
              }
            }
            else {
              LogManager::logFormat
                        (1,"localjapan/Arad_DB_Query.cpp",
                         "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                         ,0x2cf,"%s","Mouse Pass Encrypted Parsing error");
              uVar2 = 0xffffffff;
            }
          }
          else {
            LogManager::logFormat
                      (1,"localjapan/Arad_DB_Query.cpp",
                       "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                       ,0x2c9,"%s","arad_sp_convert_pass_pad_info fetch fail");
            uVar2 = 0xffffffff;
          }
        }
      }
      else {
        LogManager::logFormat
                  (1,"localjapan/Arad_DB_Query.cpp",
                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)"
                   ,700,"%s","arad_sp_convert_pass_pad_info fail");
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

## arad_sp_delete_member_mouspass

```asm
// === 0818c609 ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass  [0x0818c609-0x818c6c3] ===
 818c609:	55                   	push   %ebp
 818c60a:	89 e5                	mov    %esp,%ebp
 818c60c:	83 ec 38             	sub    $0x38,%esp
 818c60f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c614:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c61b:	00 
 818c61c:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c623:	00 
 818c624:	89 04 24             	mov    %eax,(%esp)
 818c627:	e8 12 8c 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c62c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818c62f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818c633:	75 3b                	jne    818c670 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0x67>
 818c635:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c63c:	08 
 818c63d:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c644:	08 
 818c645:	c7 44 24 0c 45 03 00 	movl   $0x345,0xc(%esp)
 818c64c:	00 
 818c64d:	c7 44 24 08 80 3e b9 	movl   $0x8b93e80,0x8(%esp)
 818c654:	08 
 818c655:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c65c:	08 
 818c65d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c664:	e8 a1 75 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c669:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c66e:	eb 52                	jmp    818c6c2 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0xb9>
 818c670:	8b 45 08             	mov    0x8(%ebp),%eax
 818c673:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c679:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c67d:	c7 44 24 04 58 2a b9 	movl   $0x8b92a58,0x4(%esp)
 818c684:	08 
 818c685:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c688:	89 04 24             	mov    %eax,(%esp)
 818c68b:	e8 e8 7f 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818c690:	85 c0                	test   %eax,%eax
 818c692:	0f 95 c0             	setne  %al
 818c695:	84 c0                	test   %al,%al
 818c697:	74 07                	je     818c6a0 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0x97>
 818c699:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c69e:	eb 22                	jmp    818c6c2 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0xb9>
 818c6a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c6a3:	89 04 24             	mov    %eax,(%esp)
 818c6a6:	e8 65 7c 26 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 818c6ab:	09 d0                	or     %edx,%eax
 818c6ad:	85 c0                	test   %eax,%eax
 818c6af:	0f 94 c0             	sete   %al
 818c6b2:	84 c0                	test   %al,%al
 818c6b4:	74 07                	je     818c6bd <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0xb4>
 818c6b6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c6bb:	eb 05                	jmp    818c6c2 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA+0xb9>
 818c6bd:	b8 00 00 00 00       	mov    $0x0,%eax
 818c6c2:	c9                   	leave
 818c6c3:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass @ 0x818c609

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA *param_1)

{
  MySQL *this;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*)",
               0x345,"%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(this,"deLete from member_mousepass where m_id=%d",
                          *(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      lVar3 = MySQL::getAffectedRowCount(this);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## arad_sp_load_event_entry

```asm
// === 0818c8b8 ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry  [0x0818c8b8-0x818ca68] ===
 818c8b8:	55                   	push   %ebp
 818c8b9:	89 e5                	mov    %esp,%ebp
 818c8bb:	83 ec 48             	sub    $0x48,%esp
 818c8be:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c8c3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c8ca:	00 
 818c8cb:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c8d2:	00 
 818c8d3:	89 04 24             	mov    %eax,(%esp)
 818c8d6:	e8 63 89 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c8db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818c8de:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818c8e2:	75 3e                	jne    818c922 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x6a>
 818c8e4:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c8eb:	08 
 818c8ec:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c8f3:	08 
 818c8f4:	c7 44 24 0c a5 03 00 	movl   $0x3a5,0xc(%esp)
 818c8fb:	00 
 818c8fc:	c7 44 24 08 40 3d b9 	movl   $0x8b93d40,0x8(%esp)
 818c903:	08 
 818c904:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c90b:	08 
 818c90c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c913:	e8 f2 72 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c918:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c91d:	e9 45 01 00 00       	jmp    818ca67 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x1af>
 818c922:	e8 5a f8 f3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 818c927:	8b 90 78 03 00 00    	mov    0x378(%eax),%edx
 818c92d:	8b 45 08             	mov    0x8(%ebp),%eax
 818c930:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c936:	89 54 24 0c          	mov    %edx,0xc(%esp)
 818c93a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c93e:	c7 44 24 04 60 2b b9 	movl   $0x8b92b60,0x4(%esp)
 818c945:	08 
 818c946:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818c949:	89 04 24             	mov    %eax,(%esp)
 818c94c:	e8 6f 78 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818c951:	84 c0                	test   %al,%al
 818c953:	74 0a                	je     818c95f <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0xa7>
 818c955:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c95a:	e9 08 01 00 00       	jmp    818ca67 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x1af>
 818c95f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818c966:	e9 de 00 00 00       	jmp    818ca49 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x191>
 818c96b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818c96e:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c972:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818c979:	00 
 818c97a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818c97d:	89 04 24             	mov    %eax,(%esp)
 818c980:	e8 a7 9f f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c985:	83 f0 01             	xor    $0x1,%eax
 818c988:	84 c0                	test   %al,%al
 818c98a:	0f 85 a8 00 00 00    	jne    818ca38 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x180>
 818c990:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818c993:	83 c0 08             	add    $0x8,%eax
 818c996:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c99a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818c9a1:	00 
 818c9a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818c9a5:	89 04 24             	mov    %eax,(%esp)
 818c9a8:	e8 7f 9f f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c9ad:	83 f0 01             	xor    $0x1,%eax
 818c9b0:	84 c0                	test   %al,%al
 818c9b2:	0f 85 83 00 00 00    	jne    818ca3b <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x183>
 818c9b8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818c9bb:	83 c0 0c             	add    $0xc,%eax
 818c9be:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c9c2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818c9c9:	00 
 818c9ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818c9cd:	89 04 24             	mov    %eax,(%esp)
 818c9d0:	e8 57 9f f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c9d5:	83 f0 01             	xor    $0x1,%eax
 818c9d8:	84 c0                	test   %al,%al
 818c9da:	75 62                	jne    818ca3e <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x186>
 818c9dc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818c9df:	83 c0 10             	add    $0x10,%eax
 818c9e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c9e6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818c9ed:	00 
 818c9ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818c9f1:	89 04 24             	mov    %eax,(%esp)
 818c9f4:	e8 33 9f f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c9f9:	83 f0 01             	xor    $0x1,%eax
 818c9fc:	84 c0                	test   %al,%al
 818c9fe:	75 41                	jne    818ca41 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x189>
 818ca00:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818ca03:	83 c0 14             	add    $0x14,%eax
 818ca06:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ca0a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 818ca11:	00 
 818ca12:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ca15:	89 04 24             	mov    %eax,(%esp)
 818ca18:	e8 0f 9f f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818ca1d:	83 f0 01             	xor    $0x1,%eax
 818ca20:	84 c0                	test   %al,%al
 818ca22:	75 20                	jne    818ca44 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18c>
 818ca24:	8d 45 d8             	lea    -0x28(%ebp),%eax
 818ca27:	89 44 24 04          	mov    %eax,0x4(%esp)
 818ca2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ca2e:	89 04 24             	mov    %eax,(%esp)
 818ca31:	e8 66 08 00 00       	call   818d29c <_ZNSt6vectorIN8DB_Login16tagDNFEventEntryESaIS1_EE9push_backERKS1_>
 818ca36:	eb 0d                	jmp    818ca45 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18d>
 818ca38:	90                   	nop
 818ca39:	eb 0a                	jmp    818ca45 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18d>
 818ca3b:	90                   	nop
 818ca3c:	eb 07                	jmp    818ca45 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18d>
 818ca3e:	90                   	nop
 818ca3f:	eb 04                	jmp    818ca45 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18d>
 818ca41:	90                   	nop
 818ca42:	eb 01                	jmp    818ca45 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0x18d>
 818ca44:	90                   	nop
 818ca45:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818ca49:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ca4c:	89 04 24             	mov    %eax,(%esp)
 818ca4f:	e8 18 59 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818ca54:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 818ca57:	0f 97 c0             	seta   %al
 818ca5a:	84 c0                	test   %al,%al
 818ca5c:	0f 85 09 ff ff ff    	jne    818c96b <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE+0xb3>
 818ca62:	b8 00 00 00 00       	mov    $0x0,%eax
 818ca67:	c9                   	leave
 818ca68:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry @ 0x818c8b8

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*,
   std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA *param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  tagDNFEventEntry local_2c [8];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_14 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
               ,0x3a5,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = G_CEnvironment();
    cVar1 = MySQL::set_query(local_14,
                             "seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%d and server_id in(0,%d)"
                             ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(iVar3 + 0x378));
    if (cVar1 == '\0') {
      local_10 = 0;
      while (uVar4 = MySQL::get_n_rows(local_14), local_10 < uVar4) {
        cVar1 = MySQL::get_int(local_14,0,(int *)local_2c);
        if ((((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_14,1,&iStack_24), cVar1 == '\x01'))
            && (cVar1 = MySQL::get_int(local_14,2,&iStack_20), cVar1 == '\x01')) &&
           ((cVar1 = MySQL::get_int(local_14,3,&iStack_1c), cVar1 == '\x01' &&
            (cVar1 = MySQL::get_int(local_14,4,&iStack_18), cVar1 == '\x01')))) {
          std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::
          push_back((vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> *
                    )param_2,local_2c);
        }
        local_10 = local_10 + 1;
      }
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

## arad_sp_select_account_info

```asm
// === 0818b706 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info  [0x0818b706-0x818bd66] ===
 818b706:	55                   	push   %ebp
 818b707:	89 e5                	mov    %esp,%ebp
 818b709:	53                   	push   %ebx
 818b70a:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 818b710:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818b715:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818b71c:	00 
 818b71d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818b724:	00 
 818b725:	89 04 24             	mov    %eax,(%esp)
 818b728:	e8 11 9b 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818b72d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818b730:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818b734:	75 3e                	jne    818b774 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x6e>
 818b736:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818b73d:	08 
 818b73e:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818b745:	08 
 818b746:	c7 44 24 0c e8 01 00 	movl   $0x1e8,0xc(%esp)
 818b74d:	00 
 818b74e:	c7 44 24 08 60 40 b9 	movl   $0x8b94060,0x8(%esp)
 818b755:	08 
 818b756:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818b75d:	08 
 818b75e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818b765:	e8 a0 84 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818b76a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b76f:	e9 ea 05 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b774:	8b 45 08             	mov    0x8(%ebp),%eax
 818b777:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818b77d:	89 44 24 08          	mov    %eax,0x8(%esp)
 818b781:	c7 44 24 04 50 25 b9 	movl   $0x8b92550,0x4(%esp)
 818b788:	08 
 818b789:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b78c:	89 04 24             	mov    %eax,(%esp)
 818b78f:	e8 e4 8e 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818b794:	85 c0                	test   %eax,%eax
 818b796:	0f 95 c0             	setne  %al
 818b799:	84 c0                	test   %al,%al
 818b79b:	74 0a                	je     818b7a7 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0xa1>
 818b79d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818b7a2:	e9 b7 05 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b7a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b7aa:	89 04 24             	mov    %eax,(%esp)
 818b7ad:	e8 ba 6b f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818b7b2:	83 f8 01             	cmp    $0x1,%eax
 818b7b5:	0f 95 c0             	setne  %al
 818b7b8:	84 c0                	test   %al,%al
 818b7ba:	74 53                	je     818b80f <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x109>
 818b7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 818b7bf:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818b7c5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818b7cc:	00 
 818b7cd:	c7 44 24 08 f5 01 00 	movl   $0x1f5,0x8(%esp)
 818b7d4:	00 
 818b7d5:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818b7dc:	08 
 818b7dd:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 818b7e3:	89 04 24             	mov    %eax,(%esp)
 818b7e6:	e8 2d 3f 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818b7eb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818b7ef:	c7 44 24 04 e4 25 b9 	movl   $0x8b925e4,0x4(%esp)
 818b7f6:	08 
 818b7f7:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 818b7fd:	89 04 24             	mov    %eax,(%esp)
 818b800:	e8 83 3f 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818b805:	b8 00 00 00 00       	mov    $0x0,%eax
 818b80a:	e9 4f 05 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b80f:	c7 85 4c ff ff ff 00 	movl   $0x0,-0xb4(%ebp)
 818b816:	00 00 00 
 818b819:	c7 85 48 ff ff ff 00 	movl   $0x0,-0xb8(%ebp)
 818b820:	00 00 00 
 818b823:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
 818b82a:	00 00 00 
 818b82d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818b834:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
 818b83b:	00 00 00 
 818b83e:	8b 45 08             	mov    0x8(%ebp),%eax
 818b841:	8d 90 c0 00 00 00    	lea    0xc0(%eax),%edx
 818b847:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818b84b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b84e:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b852:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b856:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b859:	89 04 24             	mov    %eax,(%esp)
 818b85c:	e8 91 6a f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818b861:	83 f0 01             	xor    $0x1,%eax
 818b864:	84 c0                	test   %al,%al
 818b866:	74 53                	je     818b8bb <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x1b5>
 818b868:	8b 45 08             	mov    0x8(%ebp),%eax
 818b86b:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818b871:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818b878:	00 
 818b879:	c7 44 24 08 01 02 00 	movl   $0x201,0x8(%esp)
 818b880:	00 
 818b881:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818b888:	08 
 818b889:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 818b88f:	89 04 24             	mov    %eax,(%esp)
 818b892:	e8 81 3e 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818b897:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818b89b:	c7 44 24 04 05 26 b9 	movl   $0x8b92605,0x4(%esp)
 818b8a2:	08 
 818b8a3:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 818b8a9:	89 04 24             	mov    %eax,(%esp)
 818b8ac:	e8 d7 3e 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818b8b1:	b8 00 00 00 00       	mov    $0x0,%eax
 818b8b6:	e9 a3 04 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b8bb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818b8bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b8c2:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 818b8c9:	00 
 818b8ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 818b8cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b8d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b8d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b8d8:	89 04 24             	mov    %eax,(%esp)
 818b8db:	e8 0a 15 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818b8e0:	83 f0 01             	xor    $0x1,%eax
 818b8e3:	84 c0                	test   %al,%al
 818b8e5:	74 53                	je     818b93a <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x234>
 818b8e7:	8b 45 08             	mov    0x8(%ebp),%eax
 818b8ea:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818b8f0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818b8f7:	00 
 818b8f8:	c7 44 24 08 07 02 00 	movl   $0x207,0x8(%esp)
 818b8ff:	00 
 818b900:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818b907:	08 
 818b908:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 818b90e:	89 04 24             	mov    %eax,(%esp)
 818b911:	e8 02 3e 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818b916:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818b91a:	c7 44 24 04 1d 26 b9 	movl   $0x8b9261d,0x4(%esp)
 818b921:	08 
 818b922:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 818b928:	89 04 24             	mov    %eax,(%esp)
 818b92b:	e8 58 3e 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818b930:	b8 00 00 00 00       	mov    $0x0,%eax
 818b935:	e9 24 04 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b93a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818b93e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b941:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 818b947:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b94b:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b94f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b952:	89 04 24             	mov    %eax,(%esp)
 818b955:	e8 98 69 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818b95a:	83 f0 01             	xor    $0x1,%eax
 818b95d:	84 c0                	test   %al,%al
 818b95f:	74 4d                	je     818b9ae <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x2a8>
 818b961:	8b 45 08             	mov    0x8(%ebp),%eax
 818b964:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818b96a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818b971:	00 
 818b972:	c7 44 24 08 0d 02 00 	movl   $0x20d,0x8(%esp)
 818b979:	00 
 818b97a:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818b981:	08 
 818b982:	8d 45 80             	lea    -0x80(%ebp),%eax
 818b985:	89 04 24             	mov    %eax,(%esp)
 818b988:	e8 8b 3d 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818b98d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818b991:	c7 44 24 04 39 26 b9 	movl   $0x8b92639,0x4(%esp)
 818b998:	08 
 818b999:	8d 45 80             	lea    -0x80(%ebp),%eax
 818b99c:	89 04 24             	mov    %eax,(%esp)
 818b99f:	e8 e4 3d 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818b9a4:	b8 00 00 00 00       	mov    $0x0,%eax
 818b9a9:	e9 b0 03 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818b9ae:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818b9b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818b9b5:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 818b9bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 818b9bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 818b9c3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818b9c6:	89 04 24             	mov    %eax,(%esp)
 818b9c9:	e8 24 69 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818b9ce:	83 f0 01             	xor    $0x1,%eax
 818b9d1:	84 c0                	test   %al,%al
 818b9d3:	74 4d                	je     818ba22 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x31c>
 818b9d5:	8b 45 08             	mov    0x8(%ebp),%eax
 818b9d8:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818b9de:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818b9e5:	00 
 818b9e6:	c7 44 24 08 13 02 00 	movl   $0x213,0x8(%esp)
 818b9ed:	00 
 818b9ee:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818b9f5:	08 
 818b9f6:	8d 45 90             	lea    -0x70(%ebp),%eax
 818b9f9:	89 04 24             	mov    %eax,(%esp)
 818b9fc:	e8 17 3d 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818ba01:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818ba05:	c7 44 24 04 51 26 b9 	movl   $0x8b92651,0x4(%esp)
 818ba0c:	08 
 818ba0d:	8d 45 90             	lea    -0x70(%ebp),%eax
 818ba10:	89 04 24             	mov    %eax,(%esp)
 818ba13:	e8 70 3d 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818ba18:	b8 00 00 00 00       	mov    $0x0,%eax
 818ba1d:	e9 3c 03 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818ba22:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818ba26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818ba29:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 818ba2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 818ba33:	89 44 24 04          	mov    %eax,0x4(%esp)
 818ba37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818ba3a:	89 04 24             	mov    %eax,(%esp)
 818ba3d:	e8 b0 68 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818ba42:	83 f0 01             	xor    $0x1,%eax
 818ba45:	84 c0                	test   %al,%al
 818ba47:	74 4d                	je     818ba96 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x390>
 818ba49:	8b 45 08             	mov    0x8(%ebp),%eax
 818ba4c:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818ba52:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818ba59:	00 
 818ba5a:	c7 44 24 08 19 02 00 	movl   $0x219,0x8(%esp)
 818ba61:	00 
 818ba62:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818ba69:	08 
 818ba6a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 818ba6d:	89 04 24             	mov    %eax,(%esp)
 818ba70:	e8 a3 3c 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818ba75:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818ba79:	c7 44 24 04 69 26 b9 	movl   $0x8b92669,0x4(%esp)
 818ba80:	08 
 818ba81:	8d 45 a0             	lea    -0x60(%ebp),%eax
 818ba84:	89 04 24             	mov    %eax,(%esp)
 818ba87:	e8 fc 3c 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818ba8c:	b8 00 00 00 00       	mov    $0x0,%eax
 818ba91:	e9 c8 02 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818ba96:	8b 45 08             	mov    0x8(%ebp),%eax
 818ba99:	8d 90 84 21 00 00    	lea    0x2184(%eax),%edx
 818ba9f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818baa3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818baa6:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 818baad:	00 
 818baae:	89 54 24 08          	mov    %edx,0x8(%esp)
 818bab2:	89 44 24 04          	mov    %eax,0x4(%esp)
 818bab6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bab9:	89 04 24             	mov    %eax,(%esp)
 818babc:	e8 29 13 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818bac1:	83 f0 01             	xor    $0x1,%eax
 818bac4:	84 c0                	test   %al,%al
 818bac6:	74 4d                	je     818bb15 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x40f>
 818bac8:	8b 45 08             	mov    0x8(%ebp),%eax
 818bacb:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818bad1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818bad8:	00 
 818bad9:	c7 44 24 08 1f 02 00 	movl   $0x21f,0x8(%esp)
 818bae0:	00 
 818bae1:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818bae8:	08 
 818bae9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818baec:	89 04 24             	mov    %eax,(%esp)
 818baef:	e8 24 3c 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818baf4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818baf8:	c7 44 24 04 84 26 b9 	movl   $0x8b92684,0x4(%esp)
 818baff:	08 
 818bb00:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818bb03:	89 04 24             	mov    %eax,(%esp)
 818bb06:	e8 7d 3c 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818bb0b:	b8 00 00 00 00       	mov    $0x0,%eax
 818bb10:	e9 49 02 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818bb15:	8b 45 08             	mov    0x8(%ebp),%eax
 818bb18:	8d 90 04 22 00 00    	lea    0x2204(%eax),%edx
 818bb1e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818bb22:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818bb25:	c7 44 24 0c 80 00 00 	movl   $0x80,0xc(%esp)
 818bb2c:	00 
 818bb2d:	89 54 24 08          	mov    %edx,0x8(%esp)
 818bb31:	89 44 24 04          	mov    %eax,0x4(%esp)
 818bb35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bb38:	89 04 24             	mov    %eax,(%esp)
 818bb3b:	e8 aa 12 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818bb40:	83 f0 01             	xor    $0x1,%eax
 818bb43:	84 c0                	test   %al,%al
 818bb45:	74 4d                	je     818bb94 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x48e>
 818bb47:	8b 45 08             	mov    0x8(%ebp),%eax
 818bb4a:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818bb50:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818bb57:	00 
 818bb58:	c7 44 24 08 25 02 00 	movl   $0x225,0x8(%esp)
 818bb5f:	00 
 818bb60:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818bb67:	08 
 818bb68:	8d 45 c0             	lea    -0x40(%ebp),%eax
 818bb6b:	89 04 24             	mov    %eax,(%esp)
 818bb6e:	e8 a5 3b 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818bb73:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818bb77:	c7 44 24 04 a1 26 b9 	movl   $0x8b926a1,0x4(%esp)
 818bb7e:	08 
 818bb7f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 818bb82:	89 04 24             	mov    %eax,(%esp)
 818bb85:	e8 fe 3b 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818bb8a:	b8 00 00 00 00       	mov    $0x0,%eax
 818bb8f:	e9 ca 01 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818bb94:	8b 55 08             	mov    0x8(%ebp),%edx
 818bb97:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818bb9b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818bb9e:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 818bba5:	00 
 818bba6:	89 54 24 08          	mov    %edx,0x8(%esp)
 818bbaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 818bbae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bbb1:	89 04 24             	mov    %eax,(%esp)
 818bbb4:	e8 31 12 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818bbb9:	83 f0 01             	xor    $0x1,%eax
 818bbbc:	84 c0                	test   %al,%al
 818bbbe:	74 4d                	je     818bc0d <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x507>
 818bbc0:	8b 45 08             	mov    0x8(%ebp),%eax
 818bbc3:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818bbc9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818bbd0:	00 
 818bbd1:	c7 44 24 08 2b 02 00 	movl   $0x22b,0x8(%esp)
 818bbd8:	00 
 818bbd9:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818bbe0:	08 
 818bbe1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818bbe4:	89 04 24             	mov    %eax,(%esp)
 818bbe7:	e8 2c 3b 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818bbec:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818bbf0:	c7 44 24 04 ba 26 b9 	movl   $0x8b926ba,0x4(%esp)
 818bbf7:	08 
 818bbf8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818bbfb:	89 04 24             	mov    %eax,(%esp)
 818bbfe:	e8 85 3b 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818bc03:	b8 00 00 00 00       	mov    $0x0,%eax
 818bc08:	e9 51 01 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818bc0d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818bc11:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818bc14:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 818bc1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 818bc1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 818bc22:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bc25:	89 04 24             	mov    %eax,(%esp)
 818bc28:	e8 c5 66 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818bc2d:	83 f0 01             	xor    $0x1,%eax
 818bc30:	84 c0                	test   %al,%al
 818bc32:	74 4d                	je     818bc81 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x57b>
 818bc34:	8b 45 08             	mov    0x8(%ebp),%eax
 818bc37:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818bc3d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818bc44:	00 
 818bc45:	c7 44 24 08 31 02 00 	movl   $0x231,0x8(%esp)
 818bc4c:	00 
 818bc4d:	c7 44 24 04 60 40 b9 	movl   $0x8b94060,0x4(%esp)
 818bc54:	08 
 818bc55:	8d 45 e0             	lea    -0x20(%ebp),%eax
 818bc58:	89 04 24             	mov    %eax,(%esp)
 818bc5b:	e8 b8 3a 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818bc60:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818bc64:	c7 44 24 04 d0 26 b9 	movl   $0x8b926d0,0x4(%esp)
 818bc6b:	08 
 818bc6c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 818bc6f:	89 04 24             	mov    %eax,(%esp)
 818bc72:	e8 11 3b 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818bc77:	b8 00 00 00 00       	mov    $0x0,%eax
 818bc7c:	e9 dd 00 00 00       	jmp    818bd5e <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x658>
 818bc81:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 818bc87:	8b 45 08             	mov    0x8(%ebp),%eax
 818bc8a:	89 90 cc 00 00 00    	mov    %edx,0xcc(%eax)
 818bc90:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 818bc96:	83 f8 01             	cmp    $0x1,%eax
 818bc99:	0f 94 c2             	sete   %dl
 818bc9c:	8b 45 08             	mov    0x8(%ebp),%eax
 818bc9f:	88 90 dd 38 00 00    	mov    %dl,0x38dd(%eax)
 818bca5:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 818bcab:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 818bcb1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 818bcb4:	81 c1 84 22 00 00    	add    $0x2284,%ecx
 818bcba:	89 54 24 10          	mov    %edx,0x10(%esp)
 818bcbe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 818bcc2:	c7 44 24 08 f5 26 b9 	movl   $0x8b926f5,0x8(%esp)
 818bcc9:	08 
 818bcca:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 818bcd1:	00 
 818bcd2:	89 0c 24             	mov    %ecx,(%esp)
 818bcd5:	e8 42 0b 40 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 818bcda:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 818bce0:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 818bce6:	ba 59 17 b7 d1       	mov    $0xd1b71759,%edx
 818bceb:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 818bcf1:	f7 e2                	mul    %edx
 818bcf3:	89 d0                	mov    %edx,%eax
 818bcf5:	c1 e8 0d             	shr    $0xd,%eax
 818bcf8:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 818bcfe:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 818bd04:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 818bd0a:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 818bd0f:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 818bd15:	f7 e2                	mul    %edx
 818bd17:	89 d0                	mov    %edx,%eax
 818bd19:	c1 e8 12             	shr    $0x12,%eax
 818bd1c:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 818bd22:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 818bd28:	83 f8 02             	cmp    $0x2,%eax
 818bd2b:	76 17                	jbe    818bd44 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x63e>
 818bd2d:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 818bd33:	8d 90 d0 07 00 00    	lea    0x7d0(%eax),%edx
 818bd39:	8b 45 08             	mov    0x8(%ebp),%eax
 818bd3c:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 818bd42:	eb 15                	jmp    818bd59 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc+0x653>
 818bd44:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 818bd4a:	8d 90 6c 07 00 00    	lea    0x76c(%eax),%edx
 818bd50:	8b 45 08             	mov    0x8(%ebp),%eax
 818bd53:	89 90 c8 00 00 00    	mov    %edx,0xc8(%eax)
 818bd59:	b8 00 00 00 00       	mov    $0x0,%eax
 818bd5e:	81 c4 f4 00 00 00    	add    $0xf4,%esp
 818bd64:	5b                   	pop    %ebx
 818bd65:	5d                   	pop    %ebp
 818bd66:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info @ 0x818b706

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  cMyTrace local_b4 [16];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_14 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
               ,0x1e8,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(local_14,
                          "seLect m_id, passwd,first_ssn, second_ssn, mid(from_unixtime(reg_date)+0,1,8),user_name,email, user_id, hangame_flag from member_info where m_id=%d"
                          ,*(undefined4 *)(param_1 + 0xc0));
    if (iVar3 == 0) {
      iVar3 = MySQL::get_n_rows(local_14);
      if (iVar3 == 1) {
        local_b8 = 0;
        local_bc = 0;
        local_c0 = 0;
        local_c4 = 0;
        local_10 = 1;
        cVar1 = MySQL::get_uint(local_14,1,(uint *)(param_1 + 0xc0));
        if (cVar1 == '\x01') {
          local_10 = local_10 + 1;
          cVar1 = MySQL::get_str(local_14,local_10,param_2,0x84);
          if (cVar1 == '\x01') {
            local_10 = local_10 + 1;
            cVar1 = MySQL::get_uint(local_14,local_10,&local_b8);
            if (cVar1 == '\x01') {
              local_10 = local_10 + 1;
              cVar1 = MySQL::get_uint(local_14,local_10,&local_bc);
              if (cVar1 == '\x01') {
                local_10 = local_10 + 1;
                cVar1 = MySQL::get_uint(local_14,local_10,&local_c0);
                if (cVar1 == '\x01') {
                  local_10 = local_10 + 1;
                  cVar1 = MySQL::get_str(local_14,local_10,(char *)(param_1 + 0x2184),0x80);
                  if (cVar1 == '\x01') {
                    local_10 = local_10 + 1;
                    cVar1 = MySQL::get_str(local_14,local_10,(char *)(param_1 + 0x2204),0x80);
                    if (cVar1 == '\x01') {
                      local_10 = local_10 + 1;
                      cVar1 = MySQL::get_str(local_14,local_10,(char *)param_1,0x1e);
                      if (cVar1 == '\x01') {
                        local_10 = local_10 + 1;
                        cVar1 = MySQL::get_uint(local_14,local_10,&local_c4);
                        if (cVar1 == '\x01') {
                          *(uint *)(param_1 + 0xcc) = local_c0;
                          param_1[0x38dd] = (SIG_LOGIN_DATA)(local_c4 == 1);
                          OS_API::snprintf((char *)(param_1 + 0x2284),0x10,"%d%d",local_b8,local_bc)
                          ;
                          if (local_bc / 1000000 < 3) {
                            *(uint *)(param_1 + 200) = local_b8 / 10000 + 0x76c;
                          }
                          else {
                            *(uint *)(param_1 + 200) = local_b8 / 10000 + 2000;
                          }
                          uVar2 = 0;
                        }
                        else {
                          uVar2 = *(undefined4 *)(param_1 + 0xc0);
                          cMyTrace::cMyTrace(local_24,
                                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                             ,0x231,5);
                          cMyTrace::operator()
                                    (local_24,"user HanGameUser Check ERROR m_id=%u",uVar2);
                          uVar2 = 0;
                        }
                      }
                      else {
                        uVar2 = *(undefined4 *)(param_1 + 0xc0);
                        cMyTrace::cMyTrace(local_34,
                                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                           ,0x22b,5);
                        cMyTrace::operator()(local_34,"user id ERROR m_id=%u",uVar2);
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = *(undefined4 *)(param_1 + 0xc0);
                      cMyTrace::cMyTrace(local_44,
                                         "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                         ,0x225,5);
                      cMyTrace::operator()(local_44,"user email ERROR m_id=%u",uVar2);
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = *(undefined4 *)(param_1 + 0xc0);
                    cMyTrace::cMyTrace(local_54,
                                       "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                       ,0x21f,5);
                    cMyTrace::operator()(local_54,"user user_name ERROR m_id=%u",uVar2);
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = *(undefined4 *)(param_1 + 0xc0);
                  cMyTrace::cMyTrace(local_64,
                                     "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                     ,0x219,5);
                  cMyTrace::operator()(local_64,"user regdate ERROR m_id=%u",uVar2);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = *(undefined4 *)(param_1 + 0xc0);
                cMyTrace::cMyTrace(local_74,
                                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                   ,0x213,5);
                cMyTrace::operator()(local_74,"user sssn ERROR m_id=%u",uVar2);
                uVar2 = 0;
              }
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0xc0);
              cMyTrace::cMyTrace(local_84,
                                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                 ,0x20d,5);
              cMyTrace::operator()(local_84,"user fssn ERROR m_id=%u",uVar2);
              uVar2 = 0;
            }
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_94,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                               ,0x207,5);
            cMyTrace::operator()(local_94,"user password ERROR m_id=%u",uVar2);
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xc0);
          cMyTrace::cMyTrace(local_a4,
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                             ,0x201,5);
          cMyTrace::operator()(local_a4,"user m_id ERROR m_id=%u",uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc0);
        cMyTrace::cMyTrace(local_b4,
                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                           ,0x1f5,5);
        cMyTrace::operator()(local_b4,"query get_n_rows() ERROR m_id=%u",uVar2);
        uVar2 = 0;
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

## arad_sp_select_member_brodcast

```asm
// === 0818ca69 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast  [0x0818ca69-0x818cc73] ===
 818ca69:	55                   	push   %ebp
 818ca6a:	89 e5                	mov    %esp,%ebp
 818ca6c:	53                   	push   %ebx
 818ca6d:	83 ec 44             	sub    $0x44,%esp
 818ca70:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818ca75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818ca7c:	00 
 818ca7d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818ca84:	00 
 818ca85:	89 04 24             	mov    %eax,(%esp)
 818ca88:	e8 b1 87 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818ca8d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818ca90:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818ca94:	75 3e                	jne    818cad4 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x6b>
 818ca96:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818ca9d:	08 
 818ca9e:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818caa5:	08 
 818caa6:	c7 44 24 0c d6 03 00 	movl   $0x3d6,0xc(%esp)
 818caad:	00 
 818caae:	c7 44 24 08 c0 3c b9 	movl   $0x8b93cc0,0x8(%esp)
 818cab5:	08 
 818cab6:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818cabd:	08 
 818cabe:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818cac5:	e8 40 71 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818caca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cacf:	e9 9a 01 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 818cad7:	8b 10                	mov    (%eax),%edx
 818cad9:	8b 45 08             	mov    0x8(%ebp),%eax
 818cadc:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818cae2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 818cae6:	89 44 24 08          	mov    %eax,0x8(%esp)
 818caea:	c7 44 24 04 f4 2b b9 	movl   $0x8b92bf4,0x4(%esp)
 818caf1:	08 
 818caf2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818caf5:	89 04 24             	mov    %eax,(%esp)
 818caf8:	e8 7b 7b 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818cafd:	85 c0                	test   %eax,%eax
 818caff:	0f 95 c0             	setne  %al
 818cb02:	84 c0                	test   %al,%al
 818cb04:	74 0a                	je     818cb10 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0xa7>
 818cb06:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cb0b:	e9 5e 01 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cb10:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 818cb17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818cb1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cb1e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818cb25:	00 
 818cb26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818cb29:	89 04 24             	mov    %eax,(%esp)
 818cb2c:	e8 c1 57 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818cb31:	83 f0 01             	xor    $0x1,%eax
 818cb34:	84 c0                	test   %al,%al
 818cb36:	74 0a                	je     818cb42 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0xd9>
 818cb38:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cb3d:	e9 2c 01 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cb42:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818cb45:	83 c0 04             	add    $0x4,%eax
 818cb48:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cb4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818cb53:	00 
 818cb54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818cb57:	89 04 24             	mov    %eax,(%esp)
 818cb5a:	e8 93 57 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818cb5f:	83 f0 01             	xor    $0x1,%eax
 818cb62:	84 c0                	test   %al,%al
 818cb64:	74 0a                	je     818cb70 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x107>
 818cb66:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cb6b:	e9 fe 00 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cb70:	8d 45 e8             	lea    -0x18(%ebp),%eax
 818cb73:	83 c0 08             	add    $0x8,%eax
 818cb76:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cb7a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818cb81:	00 
 818cb82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818cb85:	89 04 24             	mov    %eax,(%esp)
 818cb88:	e8 65 57 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818cb8d:	83 f0 01             	xor    $0x1,%eax
 818cb90:	84 c0                	test   %al,%al
 818cb92:	74 0a                	je     818cb9e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x135>
 818cb94:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cb99:	e9 d0 00 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cb9e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 818cba1:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cba5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818cbac:	00 
 818cbad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818cbb0:	89 04 24             	mov    %eax,(%esp)
 818cbb3:	e8 3a 57 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818cbb8:	83 f0 01             	xor    $0x1,%eax
 818cbbb:	84 c0                	test   %al,%al
 818cbbd:	74 0a                	je     818cbc9 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x160>
 818cbbf:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cbc4:	e9 a5 00 00 00       	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cbc9:	8b 45 08             	mov    0x8(%ebp),%eax
 818cbcc:	05 b0 39 00 00       	add    $0x39b0,%eax
 818cbd1:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 818cbd8:	00 
 818cbd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cbdd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 818cbe4:	00 
 818cbe5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818cbe8:	89 04 24             	mov    %eax,(%esp)
 818cbeb:	e8 fa 01 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818cbf0:	83 f0 01             	xor    $0x1,%eax
 818cbf3:	84 c0                	test   %al,%al
 818cbf5:	74 07                	je     818cbfe <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x195>
 818cbf7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cbfc:	eb 70                	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cbfe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 818cc01:	89 c3                	mov    %eax,%ebx
 818cc03:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 818cc0a:	e8 8f f0 f3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 818cc0f:	39 c3                	cmp    %eax,%ebx
 818cc11:	0f 9f c0             	setg   %al
 818cc14:	84 c0                	test   %al,%al
 818cc16:	74 07                	je     818cc1f <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x1b6>
 818cc18:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cc1d:	eb 4f                	jmp    818cc6e <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x205>
 818cc1f:	e8 83 d7 f4 ff       	call   80da3a7 <_Z11G_GameWorldv>
 818cc24:	89 04 24             	mov    %eax,(%esp)
 818cc27:	e8 f4 9e f8 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 818cc2c:	83 f8 07             	cmp    $0x7,%eax
 818cc2f:	0f 94 c0             	sete   %al
 818cc32:	84 c0                	test   %al,%al
 818cc34:	74 1b                	je     818cc51 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi+0x1e8>
 818cc36:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818cc3b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 818cc3e:	89 54 24 08          	mov    %edx,0x8(%esp)
 818cc42:	8b 55 10             	mov    0x10(%ebp),%edx
 818cc45:	89 54 24 04          	mov    %edx,0x4(%esp)
 818cc49:	89 04 24             	mov    %eax,(%esp)
 818cc4c:	e8 4d 83 26 00       	call   83f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>
 818cc51:	8b 55 ec             	mov    -0x14(%ebp),%edx
 818cc54:	8b 45 08             	mov    0x8(%ebp),%eax
 818cc57:	89 90 ac 39 00 00    	mov    %edx,0x39ac(%eax)
 818cc5d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 818cc60:	8b 45 08             	mov    0x8(%ebp),%eax
 818cc63:	89 90 a8 39 00 00    	mov    %edx,0x39a8(%eax)
 818cc69:	b8 00 00 00 00       	mov    $0x0,%eax
 818cc6e:	83 c4 44             	add    $0x44,%esp
 818cc71:	5b                   	pop    %ebx
 818cc72:	5d                   	pop    %ebp
 818cc73:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast @ 0x818ca69

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*,
   DB_Login::tagDNFEventEntry&, int) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast
          (SIG_LOGIN_DATA *param_1,tagDNFEventEntry *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GameWorld *this;
  uint local_20;
  stUserDBInfo_t local_1c [4];
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, int)"
               ,0x3d6,"%s","Database null!!");
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = MySQL::select(local_10,
                          "seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%d and end_time>now() limit 1"
                          ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)param_2);
    if (iVar4 == 0) {
      local_20 = 0;
      cVar2 = MySQL::get_uint(local_10,0,(uint *)local_1c);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_uint(local_10,1,&local_18);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_10,2,&local_14);
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_uint(local_10,3,&local_20);
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_str(local_10,4,(char *)(param_1 + 0x39b0),0x1e);
              uVar1 = local_20;
              if (cVar2 == '\x01') {
                iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (iVar4 < (int)uVar1) {
                  uVar3 = 0xffffffff;
                }
                else {
                  this = (GameWorld *)G_GameWorld();
                  iVar4 = GameWorld::GetChannelType(this);
                  if (iVar4 == 7) {
                    DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_3,local_1c);
                  }
                  *(uint *)(param_1 + 0x39ac) = local_18;
                  *(uint *)(param_1 + 0x39a8) = local_14;
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

```

---

## arad_sp_select_member_premium

```asm
// === 0818cc74 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium  [0x0818cc74-0x818cfaa] ===
 818cc74:	55                   	push   %ebp
 818cc75:	89 e5                	mov    %esp,%ebp
 818cc77:	53                   	push   %ebx
 818cc78:	83 ec 74             	sub    $0x74,%esp
 818cc7b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818cc80:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818cc87:	00 
 818cc88:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818cc8f:	00 
 818cc90:	89 04 24             	mov    %eax,(%esp)
 818cc93:	e8 a6 85 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818cc98:	89 45 ec             	mov    %eax,-0x14(%ebp)
 818cc9b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 818cc9f:	75 3e                	jne    818ccdf <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x6b>
 818cca1:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818cca8:	08 
 818cca9:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818ccb0:	08 
 818ccb1:	c7 44 24 0c 12 04 00 	movl   $0x412,0xc(%esp)
 818ccb8:	00 
 818ccb9:	c7 44 24 08 00 3c b9 	movl   $0x8b93c00,0x8(%esp)
 818ccc0:	08 
 818ccc1:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818ccc8:	08 
 818ccc9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818ccd0:	e8 35 6f 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818ccd5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ccda:	e9 c6 02 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818ccdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 818cce2:	8b 48 0c             	mov    0xc(%eax),%ecx
 818cce5:	8b 45 0c             	mov    0xc(%ebp),%eax
 818cce8:	8b 10                	mov    (%eax),%edx
 818ccea:	8b 45 08             	mov    0x8(%ebp),%eax
 818cced:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818ccf3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 818ccf7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 818ccfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ccff:	c7 44 24 04 8c 2c b9 	movl   $0x8b92c8c,0x4(%esp)
 818cd06:	08 
 818cd07:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818cd0a:	89 04 24             	mov    %eax,(%esp)
 818cd0d:	e8 66 79 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818cd12:	85 c0                	test   %eax,%eax
 818cd14:	0f 95 c0             	setne  %al
 818cd17:	84 c0                	test   %al,%al
 818cd19:	74 0a                	je     818cd25 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0xb1>
 818cd1b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cd20:	e9 80 02 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818cd25:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818cd28:	89 04 24             	mov    %eax,(%esp)
 818cd2b:	e8 3c 56 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818cd30:	85 c0                	test   %eax,%eax
 818cd32:	0f 94 c0             	sete   %al
 818cd35:	84 c0                	test   %al,%al
 818cd37:	74 1c                	je     818cd55 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0xe1>
 818cd39:	8b 45 0c             	mov    0xc(%ebp),%eax
 818cd3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 818cd40:	8b 45 14             	mov    0x14(%ebp),%eax
 818cd43:	89 04 24             	mov    %eax,(%esp)
 818cd46:	e8 db 43 f8 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 818cd4b:	b8 00 00 00 00       	mov    $0x0,%eax
 818cd50:	e9 50 02 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818cd55:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 818cd5c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818cd63:	e9 19 02 00 00       	jmp    818cf81 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x30d>
 818cd68:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818cd6b:	89 04 24             	mov    %eax,(%esp)
 818cd6e:	e8 49 77 26 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 818cd73:	83 f0 01             	xor    $0x1,%eax
 818cd76:	84 c0                	test   %al,%al
 818cd78:	0f 85 1e 02 00 00    	jne    818cf9c <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x328>
 818cd7e:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 818cd85:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 818cd8c:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 818cd93:	8d 45 b8             	lea    -0x48(%ebp),%eax
 818cd96:	89 44 24 08          	mov    %eax,0x8(%esp)
 818cd9a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818cda1:	00 
 818cda2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818cda5:	89 04 24             	mov    %eax,(%esp)
 818cda8:	e8 7f 9b f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818cdad:	83 f0 01             	xor    $0x1,%eax
 818cdb0:	84 c0                	test   %al,%al
 818cdb2:	74 4d                	je     818ce01 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x18d>
 818cdb4:	8b 45 08             	mov    0x8(%ebp),%eax
 818cdb7:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818cdbd:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818cdc4:	00 
 818cdc5:	c7 44 24 08 32 04 00 	movl   $0x432,0x8(%esp)
 818cdcc:	00 
 818cdcd:	c7 44 24 04 00 3c b9 	movl   $0x8b93c00,0x4(%esp)
 818cdd4:	08 
 818cdd5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 818cdd8:	89 04 24             	mov    %eax,(%esp)
 818cddb:	e8 38 29 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818cde0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818cde4:	c7 44 24 04 58 2d b9 	movl   $0x8b92d58,0x4(%esp)
 818cdeb:	08 
 818cdec:	8d 45 bc             	lea    -0x44(%ebp),%eax
 818cdef:	89 04 24             	mov    %eax,(%esp)
 818cdf2:	e8 91 29 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818cdf7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818cdfc:	e9 a4 01 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818ce01:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 818ce04:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ce08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818ce0f:	00 
 818ce10:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818ce13:	89 04 24             	mov    %eax,(%esp)
 818ce16:	e8 11 9b f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818ce1b:	83 f0 01             	xor    $0x1,%eax
 818ce1e:	84 c0                	test   %al,%al
 818ce20:	74 4d                	je     818ce6f <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x1fb>
 818ce22:	8b 45 08             	mov    0x8(%ebp),%eax
 818ce25:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818ce2b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818ce32:	00 
 818ce33:	c7 44 24 08 38 04 00 	movl   $0x438,0x8(%esp)
 818ce3a:	00 
 818ce3b:	c7 44 24 04 00 3c b9 	movl   $0x8b93c00,0x4(%esp)
 818ce42:	08 
 818ce43:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818ce46:	89 04 24             	mov    %eax,(%esp)
 818ce49:	e8 ca 28 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818ce4e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818ce52:	c7 44 24 04 88 2d b9 	movl   $0x8b92d88,0x4(%esp)
 818ce59:	08 
 818ce5a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 818ce5d:	89 04 24             	mov    %eax,(%esp)
 818ce60:	e8 23 29 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818ce65:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ce6a:	e9 36 01 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818ce6f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 818ce72:	89 44 24 08          	mov    %eax,0x8(%esp)
 818ce76:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818ce7d:	00 
 818ce7e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818ce81:	89 04 24             	mov    %eax,(%esp)
 818ce84:	e8 a3 9a f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818ce89:	83 f0 01             	xor    $0x1,%eax
 818ce8c:	84 c0                	test   %al,%al
 818ce8e:	74 4d                	je     818cedd <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x269>
 818ce90:	8b 45 08             	mov    0x8(%ebp),%eax
 818ce93:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 818ce99:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 818cea0:	00 
 818cea1:	c7 44 24 08 3e 04 00 	movl   $0x43e,0x8(%esp)
 818cea8:	00 
 818cea9:	c7 44 24 04 00 3c b9 	movl   $0x8b93c00,0x4(%esp)
 818ceb0:	08 
 818ceb1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818ceb4:	89 04 24             	mov    %eax,(%esp)
 818ceb7:	e8 5c 28 3c 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 818cebc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 818cec0:	c7 44 24 04 b8 2d b9 	movl   $0x8b92db8,0x4(%esp)
 818cec7:	08 
 818cec8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 818cecb:	89 04 24             	mov    %eax,(%esp)
 818cece:	e8 b5 28 3c 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 818ced3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818ced8:	e9 c8 00 00 00       	jmp    818cfa5 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x331>
 818cedd:	83 7d f0 69          	cmpl   $0x69,-0x10(%ebp)
 818cee1:	0f 8f b8 00 00 00    	jg     818cf9f <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x32b>
 818cee7:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 818ceea:	8b 45 0c             	mov    0xc(%ebp),%eax
 818ceed:	8b 00                	mov    (%eax),%eax
 818ceef:	8b 55 08             	mov    0x8(%ebp),%edx
 818cef2:	81 c1 29 02 00 00    	add    $0x229,%ecx
 818cef8:	c1 e1 04             	shl    $0x4,%ecx
 818cefb:	01 ca                	add    %ecx,%edx
 818cefd:	83 c2 14             	add    $0x14,%edx
 818cf00:	89 02                	mov    %eax,(%edx)
 818cf02:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 818cf05:	8b 45 b8             	mov    -0x48(%ebp),%eax
 818cf08:	8b 55 08             	mov    0x8(%ebp),%edx
 818cf0b:	81 c1 29 02 00 00    	add    $0x229,%ecx
 818cf11:	c1 e1 04             	shl    $0x4,%ecx
 818cf14:	01 ca                	add    %ecx,%edx
 818cf16:	83 c2 08             	add    $0x8,%edx
 818cf19:	89 02                	mov    %eax,(%edx)
 818cf1b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 818cf1e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 818cf21:	8b 55 08             	mov    0x8(%ebp),%edx
 818cf24:	81 c1 29 02 00 00    	add    $0x229,%ecx
 818cf2a:	c1 e1 04             	shl    $0x4,%ecx
 818cf2d:	01 ca                	add    %ecx,%edx
 818cf2f:	83 c2 0c             	add    $0xc,%edx
 818cf32:	89 02                	mov    %eax,(%edx)
 818cf34:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 818cf37:	8b 45 b0             	mov    -0x50(%ebp),%eax
 818cf3a:	8b 55 08             	mov    0x8(%ebp),%edx
 818cf3d:	81 c1 29 02 00 00    	add    $0x229,%ecx
 818cf43:	c1 e1 04             	shl    $0x4,%ecx
 818cf46:	01 ca                	add    %ecx,%edx
 818cf48:	83 c2 10             	add    $0x10,%edx
 818cf4b:	89 02                	mov    %eax,(%edx)
 818cf4d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 818cf51:	8b 45 08             	mov    0x8(%ebp),%eax
 818cf54:	0f b7 80 3a 29 00 00 	movzwl 0x293a(%eax),%eax
 818cf5b:	0f b7 d8             	movzwl %ax,%ebx
 818cf5e:	8b 55 0c             	mov    0xc(%ebp),%edx
 818cf61:	8b 0a                	mov    (%edx),%ecx
 818cf63:	8b 55 08             	mov    0x8(%ebp),%edx
 818cf66:	81 c3 4c 0a 00 00    	add    $0xa4c,%ebx
 818cf6c:	89 4c 9a 0c          	mov    %ecx,0xc(%edx,%ebx,4)
 818cf70:	8d 50 01             	lea    0x1(%eax),%edx
 818cf73:	8b 45 08             	mov    0x8(%ebp),%eax
 818cf76:	66 89 90 3a 29 00 00 	mov    %dx,0x293a(%eax)
 818cf7d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818cf81:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818cf84:	89 04 24             	mov    %eax,(%esp)
 818cf87:	e8 e0 53 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818cf8c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 818cf8f:	0f 97 c0             	seta   %al
 818cf92:	84 c0                	test   %al,%al
 818cf94:	0f 85 ce fd ff ff    	jne    818cd68 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0xf4>
 818cf9a:	eb 04                	jmp    818cfa0 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x32c>
 818cf9c:	90                   	nop
 818cf9d:	eb 01                	jmp    818cfa0 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_select_member_premiumEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryERSt6vectorIiSaIiEES9_+0x32c>
 818cf9f:	90                   	nop
 818cfa0:	b8 00 00 00 00       	mov    $0x0,%eax
 818cfa5:	83 c4 74             	add    $0x74,%esp
 818cfa8:	5b                   	pop    %ebx
 818cfa9:	5d                   	pop    %ebp
 818cfaa:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium @ 0x818cc74

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*,
   DB_Login::tagDNFEventEntry&, std::vector<int, std::allocator<int> >&, std::vector<int,
   std::allocator<int> >) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium
          (int param_1,int *param_2,undefined4 param_3,vector<int,std::allocator<int>> *param_4)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int local_54;
  int local_50;
  int local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_18 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
               ,0x412,"%s","Database null!!");
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = MySQL::select(local_18,
                          "seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%d and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1"
                          ,*(undefined4 *)(param_1 + 0xc0),*param_2,param_2[3]);
    if (iVar4 == 0) {
      iVar4 = MySQL::get_n_rows(local_18);
      if (iVar4 == 0) {
        std::vector<int,std::allocator<int>>::push_back(param_4,param_2);
        uVar3 = 0;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while ((uVar5 = MySQL::get_n_rows(local_18), local_10 < uVar5 &&
               (cVar2 = MySQL::fetch(local_18), cVar2 == '\x01'))) {
          local_4c = 0;
          local_50 = 0;
          local_54 = 0;
          cVar2 = MySQL::get_int(local_18,0,&local_4c);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_48,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x432,5);
            cMyTrace::operator()(local_48,"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          cVar2 = MySQL::get_int(local_18,1,&local_50);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_38,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x438,5);
            cMyTrace::operator()(local_38,"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          cVar2 = MySQL::get_int(local_18,2,&local_54);
          if (cVar2 != '\x01') {
            uVar3 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_28,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_premium(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, IntVector&, ARAD::DATABASE::LOGIN_QUERY::vecPremiumRemoveInfo_t)"
                               ,0x43e,5);
            cMyTrace::operator()(local_28,"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%u",uVar3);
            return 0xffffffff;
          }
          if (0x69 < local_14) break;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0x14) = *param_2;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 8) = local_4c;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0xc) = local_50;
          *(int *)(param_1 + (local_14 + 0x229) * 0x10 + 0x10) = local_54;
          local_14 = local_14 + 1;
          uVar1 = *(ushort *)(param_1 + 0x293a);
          *(int *)(param_1 + 0xc + (uVar1 + 0xa4c) * 4) = *param_2;
          *(ushort *)(param_1 + 0x293a) = uVar1 + 1;
          local_10 = local_10 + 1;
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}

```

---

## arad_sp_select_punish_second_user

```asm
// === 0818bfb0 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user  [0x0818bfb0-0x818c0df] ===
 818bfb0:	55                   	push   %ebp
 818bfb1:	89 e5                	mov    %esp,%ebp
 818bfb3:	83 ec 38             	sub    $0x38,%esp
 818bfb6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818bfbb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818bfc2:	00 
 818bfc3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818bfca:	00 
 818bfcb:	89 04 24             	mov    %eax,(%esp)
 818bfce:	e8 6b 92 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818bfd3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818bfd6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818bfda:	75 3e                	jne    818c01a <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x6a>
 818bfdc:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818bfe3:	08 
 818bfe4:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818bfeb:	08 
 818bfec:	c7 44 24 0c 93 02 00 	movl   $0x293,0xc(%esp)
 818bff3:	00 
 818bff4:	c7 44 24 08 a0 3f b9 	movl   $0x8b93fa0,0x8(%esp)
 818bffb:	08 
 818bffc:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c003:	08 
 818c004:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c00b:	e8 fa 7b 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c010:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c015:	e9 c4 00 00 00       	jmp    818c0de <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x12e>
 818c01a:	8b 45 08             	mov    0x8(%ebp),%eax
 818c01d:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c023:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c027:	c7 44 24 04 b8 27 b9 	movl   $0x8b927b8,0x4(%esp)
 818c02e:	08 
 818c02f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c032:	89 04 24             	mov    %eax,(%esp)
 818c035:	e8 3e 86 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818c03a:	85 c0                	test   %eax,%eax
 818c03c:	0f 95 c0             	setne  %al
 818c03f:	84 c0                	test   %al,%al
 818c041:	74 0a                	je     818c04d <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x9d>
 818c043:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c048:	e9 91 00 00 00       	jmp    818c0de <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x12e>
 818c04d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 818c054:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 818c058:	8b 45 08             	mov    0x8(%ebp),%eax
 818c05b:	05 24 3a 00 00       	add    $0x3a24,%eax
 818c060:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c064:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818c06b:	00 
 818c06c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c06f:	89 04 24             	mov    %eax,(%esp)
 818c072:	e8 7b 62 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818c077:	8b 45 08             	mov    0x8(%ebp),%eax
 818c07a:	05 28 3a 00 00       	add    $0x3a28,%eax
 818c07f:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c083:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818c08a:	00 
 818c08b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c08e:	89 04 24             	mov    %eax,(%esp)
 818c091:	e8 32 94 fe ff       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 818c096:	8d 45 ef             	lea    -0x11(%ebp),%eax
 818c099:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c09d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818c0a4:	00 
 818c0a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c0a8:	89 04 24             	mov    %eax,(%esp)
 818c0ab:	e8 a4 1d f7 ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 818c0b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 818c0b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c0b7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818c0be:	00 
 818c0bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c0c2:	89 04 24             	mov    %eax,(%esp)
 818c0c5:	e8 62 a8 f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818c0ca:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 818c0ce:	84 c0                	test   %al,%al
 818c0d0:	74 07                	je     818c0d9 <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x129>
 818c0d2:	b8 00 00 00 00       	mov    $0x0,%eax
 818c0d7:	eb 05                	jmp    818c0de <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA+0x12e>
 818c0d9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c0de:	c9                   	leave
 818c0df:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user @ 0x818bfb0

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char local_15;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*)"
               ,0x293,"%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(local_10,
                          "seLect trade_cnt,trade_gold,punish_flag,unix_timestamp(occ_time) from auto_punish_second_user where m_id=%d"
                          ,*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      local_14 = 0;
      local_15 = '\0';
      MySQL::get_uint(local_10,0,(uint *)(param_1 + 0x3a24));
      MySQL::get_ulonglong(local_10,1,(ulonglong *)(param_1 + 0x3a28));
      MySQL::get_byte(local_10,2,&local_15);
      MySQL::get_int(local_10,3,&local_14);
      if (local_15 == '\0') {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## arad_sp_select_punish_user_info

```asm
// === 0818bd67 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info  [0x0818bd67-0x818bfaf] ===
 818bd67:	55                   	push   %ebp
 818bd68:	89 e5                	mov    %esp,%ebp
 818bd6a:	83 ec 38             	sub    $0x38,%esp
 818bd6d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818bd72:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818bd79:	00 
 818bd7a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818bd81:	00 
 818bd82:	89 04 24             	mov    %eax,(%esp)
 818bd85:	e8 b4 94 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818bd8a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818bd8d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 818bd91:	75 3e                	jne    818bdd1 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x6a>
 818bd93:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818bd9a:	08 
 818bd9b:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818bda2:	08 
 818bda3:	c7 44 24 0c 55 02 00 	movl   $0x255,0xc(%esp)
 818bdaa:	00 
 818bdab:	c7 44 24 08 00 40 b9 	movl   $0x8b94000,0x8(%esp)
 818bdb2:	08 
 818bdb3:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818bdba:	08 
 818bdbb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818bdc2:	e8 43 7e 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818bdc7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818bdcc:	e9 dd 01 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818bdd1:	8b 45 08             	mov    0x8(%ebp),%eax
 818bdd4:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818bdda:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 818bde1:	00 
 818bde2:	89 44 24 08          	mov    %eax,0x8(%esp)
 818bde6:	c7 44 24 04 fc 26 b9 	movl   $0x8b926fc,0x4(%esp)
 818bded:	08 
 818bdee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bdf1:	89 04 24             	mov    %eax,(%esp)
 818bdf4:	e8 7f 88 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818bdf9:	85 c0                	test   %eax,%eax
 818bdfb:	0f 95 c0             	setne  %al
 818bdfe:	84 c0                	test   %al,%al
 818be00:	74 0a                	je     818be0c <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0xa5>
 818be02:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818be07:	e9 a2 01 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818be0c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 818be13:	e9 78 01 00 00       	jmp    818bf90 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x229>
 818be18:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818be1b:	89 d0                	mov    %edx,%eax
 818be1d:	01 c0                	add    %eax,%eax
 818be1f:	01 d0                	add    %edx,%eax
 818be21:	c1 e0 03             	shl    $0x3,%eax
 818be24:	05 50 3a 00 00       	add    $0x3a50,%eax
 818be29:	03 45 08             	add    0x8(%ebp),%eax
 818be2c:	83 c0 04             	add    $0x4,%eax
 818be2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 818be33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818be3a:	00 
 818be3b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818be3e:	89 04 24             	mov    %eax,(%esp)
 818be41:	e8 e6 aa f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818be46:	83 f0 01             	xor    $0x1,%eax
 818be49:	84 c0                	test   %al,%al
 818be4b:	74 0a                	je     818be57 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0xf0>
 818be4d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818be52:	e9 57 01 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818be57:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818be5a:	89 d0                	mov    %edx,%eax
 818be5c:	01 c0                	add    %eax,%eax
 818be5e:	01 d0                	add    %edx,%eax
 818be60:	c1 e0 03             	shl    $0x3,%eax
 818be63:	05 50 3a 00 00       	add    $0x3a50,%eax
 818be68:	03 45 08             	add    0x8(%ebp),%eax
 818be6b:	83 c0 08             	add    $0x8,%eax
 818be6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 818be72:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 818be79:	00 
 818be7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818be7d:	89 04 24             	mov    %eax,(%esp)
 818be80:	e8 6d 64 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818be85:	83 f0 01             	xor    $0x1,%eax
 818be88:	84 c0                	test   %al,%al
 818be8a:	74 0a                	je     818be96 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x12f>
 818be8c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818be91:	e9 18 01 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818be96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818be99:	89 d0                	mov    %edx,%eax
 818be9b:	01 c0                	add    %eax,%eax
 818be9d:	01 d0                	add    %edx,%eax
 818be9f:	c1 e0 03             	shl    $0x3,%eax
 818bea2:	05 50 3a 00 00       	add    $0x3a50,%eax
 818bea7:	03 45 08             	add    0x8(%ebp),%eax
 818beaa:	83 c0 0c             	add    $0xc,%eax
 818bead:	89 44 24 08          	mov    %eax,0x8(%esp)
 818beb1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 818beb8:	00 
 818beb9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bebc:	89 04 24             	mov    %eax,(%esp)
 818bebf:	e8 68 aa f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818bec4:	83 f0 01             	xor    $0x1,%eax
 818bec7:	84 c0                	test   %al,%al
 818bec9:	74 0a                	je     818bed5 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x16e>
 818becb:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818bed0:	e9 d9 00 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818bed5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818bed8:	89 d0                	mov    %edx,%eax
 818beda:	01 c0                	add    %eax,%eax
 818bedc:	01 d0                	add    %edx,%eax
 818bede:	c1 e0 03             	shl    $0x3,%eax
 818bee1:	05 50 3a 00 00       	add    $0x3a50,%eax
 818bee6:	03 45 08             	add    0x8(%ebp),%eax
 818bee9:	83 c0 10             	add    $0x10,%eax
 818beec:	89 44 24 08          	mov    %eax,0x8(%esp)
 818bef0:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 818bef7:	00 
 818bef8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818befb:	89 04 24             	mov    %eax,(%esp)
 818befe:	e8 29 aa f8 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 818bf03:	83 f0 01             	xor    $0x1,%eax
 818bf06:	84 c0                	test   %al,%al
 818bf08:	74 0a                	je     818bf14 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x1ad>
 818bf0a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818bf0f:	e9 9a 00 00 00       	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818bf14:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818bf17:	89 d0                	mov    %edx,%eax
 818bf19:	01 c0                	add    %eax,%eax
 818bf1b:	01 d0                	add    %edx,%eax
 818bf1d:	c1 e0 03             	shl    $0x3,%eax
 818bf20:	05 60 3a 00 00       	add    $0x3a60,%eax
 818bf25:	03 45 08             	add    0x8(%ebp),%eax
 818bf28:	83 c0 04             	add    $0x4,%eax
 818bf2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 818bf2f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 818bf36:	00 
 818bf37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bf3a:	89 04 24             	mov    %eax,(%esp)
 818bf3d:	e8 b0 63 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818bf42:	83 f0 01             	xor    $0x1,%eax
 818bf45:	84 c0                	test   %al,%al
 818bf47:	74 07                	je     818bf50 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x1e9>
 818bf49:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818bf4e:	eb 5e                	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818bf50:	8b 55 f4             	mov    -0xc(%ebp),%edx
 818bf53:	89 d0                	mov    %edx,%eax
 818bf55:	01 c0                	add    %eax,%eax
 818bf57:	01 d0                	add    %edx,%eax
 818bf59:	c1 e0 03             	shl    $0x3,%eax
 818bf5c:	05 60 3a 00 00       	add    $0x3a60,%eax
 818bf61:	03 45 08             	add    0x8(%ebp),%eax
 818bf64:	83 c0 08             	add    $0x8,%eax
 818bf67:	89 44 24 08          	mov    %eax,0x8(%esp)
 818bf6b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 818bf72:	00 
 818bf73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bf76:	89 04 24             	mov    %eax,(%esp)
 818bf79:	e8 74 63 f5 ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 818bf7e:	83 f0 01             	xor    $0x1,%eax
 818bf81:	84 c0                	test   %al,%al
 818bf83:	74 07                	je     818bf8c <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x225>
 818bf85:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818bf8a:	eb 22                	jmp    818bfae <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0x247>
 818bf8c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 818bf90:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818bf93:	89 04 24             	mov    %eax,(%esp)
 818bf96:	e8 d1 63 f5 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 818bf9b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 818bf9e:	0f 97 c0             	seta   %al
 818bfa1:	84 c0                	test   %al,%al
 818bfa3:	0f 85 6f fe ff ff    	jne    818be18 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA+0xb1>
 818bfa9:	b8 00 00 00 00       	mov    $0x0,%eax
 818bfae:	c9                   	leave
 818bfaf:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info @ 0x818bd67

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*)",
               0x255,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(this,
                          "seLect punish_type, unix_timestamp(occ_time),punish_value, apply_flag, unix_timestamp(start_time),unix_timestamp(end_time) from member_punish_info where m_id=%d and apply_flag=1 LIMIT %d"
                          ,*(undefined4 *)(param_1 + 0xc0),0x32);
    if (iVar3 == 0) {
      for (local_10 = 0; uVar4 = MySQL::get_n_rows(this), local_10 < uVar4; local_10 = local_10 + 1)
      {
        cVar1 = MySQL::get_int(this,0,(int *)(param_1 + local_10 * 0x18 + 0x3a54));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,1,(uint *)(param_1 + local_10 * 0x18 + 0x3a58));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_int(this,2,(int *)(param_1 + local_10 * 0x18 + 0x3a5c));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_int(this,3,(int *)(param_1 + local_10 * 0x18 + 0x3a60));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,4,(uint *)(param_1 + local_10 * 0x18 + 0x3a64));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
        cVar1 = MySQL::get_uint(this,5,(uint *)(param_1 + local_10 * 0x18 + 0x3a68));
        if (cVar1 != '\x01') {
          return 0xffffffff;
        }
      }
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

## arad_sp_update_fail_record

```asm
// === 0818c6c4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record  [0x0818c6c4-0x818c76e] ===
 818c6c4:	55                   	push   %ebp
 818c6c5:	89 e5                	mov    %esp,%ebp
 818c6c7:	83 ec 38             	sub    $0x38,%esp
 818c6ca:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c6cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c6d6:	00 
 818c6d7:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c6de:	00 
 818c6df:	89 04 24             	mov    %eax,(%esp)
 818c6e2:	e8 57 8b 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c6e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818c6ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818c6ee:	75 3b                	jne    818c72b <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA+0x67>
 818c6f0:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c6f7:	08 
 818c6f8:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c6ff:	08 
 818c700:	c7 44 24 0c 65 03 00 	movl   $0x365,0xc(%esp)
 818c707:	00 
 818c708:	c7 44 24 08 20 3e b9 	movl   $0x8b93e20,0x8(%esp)
 818c70f:	08 
 818c710:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c717:	08 
 818c718:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c71f:	e8 e6 74 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c724:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c729:	eb 42                	jmp    818c76d <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA+0xa9>
 818c72b:	8b 45 08             	mov    0x8(%ebp),%eax
 818c72e:	8b 90 c0 00 00 00    	mov    0xc0(%eax),%edx
 818c734:	8b 45 08             	mov    0x8(%ebp),%eax
 818c737:	8b 80 14 39 00 00    	mov    0x3914(%eax),%eax
 818c73d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 818c741:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c745:	c7 44 24 04 84 2a b9 	movl   $0x8b92a84,0x4(%esp)
 818c74c:	08 
 818c74d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c750:	89 04 24             	mov    %eax,(%esp)
 818c753:	e8 20 7f 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818c758:	85 c0                	test   %eax,%eax
 818c75a:	0f 95 c0             	setne  %al
 818c75d:	84 c0                	test   %al,%al
 818c75f:	74 07                	je     818c768 <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA+0xa4>
 818c761:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c766:	eb 05                	jmp    818c76d <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA+0xa9>
 818c768:	b8 00 00 00 00       	mov    $0x0,%eax
 818c76d:	c9                   	leave
 818c76e:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record @ 0x818c6c4

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA *param_1)

{
  MySQL *this;
  undefined4 uVar1;
  int iVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*)",0x365,
               "%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(this,"upDate member_mousepass set fail_cnt=%d where m_id=%d",
                          *(undefined4 *)(param_1 + 0x3914),*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

```

---

## arad_sp_update_history

```asm
// === 0818c76f ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history  [0x0818c76f-0x818c8b7] ===
 818c76f:	55                   	push   %ebp
 818c770:	89 e5                	mov    %esp,%ebp
 818c772:	57                   	push   %edi
 818c773:	53                   	push   %ebx
 818c774:	83 ec 50             	sub    $0x50,%esp
 818c777:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818c77c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818c783:	00 
 818c784:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 818c78b:	00 
 818c78c:	89 04 24             	mov    %eax,(%esp)
 818c78f:	e8 aa 8a 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818c794:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818c797:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 818c79b:	75 3e                	jne    818c7db <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x6c>
 818c79d:	c7 44 24 14 3f 25 b9 	movl   $0x8b9253f,0x14(%esp)
 818c7a4:	08 
 818c7a5:	c7 44 24 10 af 1e b9 	movl   $0x8b91eaf,0x10(%esp)
 818c7ac:	08 
 818c7ad:	c7 44 24 0c 7c 03 00 	movl   $0x37c,0xc(%esp)
 818c7b4:	00 
 818c7b5:	c7 44 24 08 c0 3d b9 	movl   $0x8b93dc0,0x8(%esp)
 818c7bc:	08 
 818c7bd:	c7 44 24 04 b2 1e b9 	movl   $0x8b91eb2,0x4(%esp)
 818c7c4:	08 
 818c7c5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818c7cc:	e8 39 74 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 818c7d1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c7d6:	e9 d6 00 00 00       	jmp    818c8b1 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x142>
 818c7db:	8b 45 08             	mov    0x8(%ebp),%eax
 818c7de:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c7e4:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c7e8:	c7 44 24 04 bc 2a b9 	movl   $0x8b92abc,0x4(%esp)
 818c7ef:	08 
 818c7f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c7f3:	89 04 24             	mov    %eax,(%esp)
 818c7f6:	e8 7d 7e 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818c7fb:	85 c0                	test   %eax,%eax
 818c7fd:	0f 95 c0             	setne  %al
 818c800:	84 c0                	test   %al,%al
 818c802:	74 0a                	je     818c80e <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x9f>
 818c804:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c809:	e9 a3 00 00 00       	jmp    818c8b1 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x142>
 818c80e:	8d 5d d0             	lea    -0x30(%ebp),%ebx
 818c811:	b8 00 00 00 00       	mov    $0x0,%eax
 818c816:	ba 09 00 00 00       	mov    $0x9,%edx
 818c81b:	89 df                	mov    %ebx,%edi
 818c81d:	89 d1                	mov    %edx,%ecx
 818c81f:	f3 ab                	rep stos %eax,%es:(%edi)
 818c821:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 818c828:	00 
 818c829:	8d 45 d0             	lea    -0x30(%ebp),%eax
 818c82c:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c830:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 818c837:	00 
 818c838:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c83b:	89 04 24             	mov    %eax,(%esp)
 818c83e:	e8 a7 05 f6 ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 818c843:	83 f0 01             	xor    $0x1,%eax
 818c846:	84 c0                	test   %al,%al
 818c848:	74 07                	je     818c851 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0xe2>
 818c84a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c84f:	eb 60                	jmp    818c8b1 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x142>
 818c851:	8b 45 08             	mov    0x8(%ebp),%eax
 818c854:	8b 80 c0 00 00 00    	mov    0xc0(%eax),%eax
 818c85a:	8b 55 0c             	mov    0xc(%ebp),%edx
 818c85d:	89 54 24 10          	mov    %edx,0x10(%esp)
 818c861:	8d 55 d0             	lea    -0x30(%ebp),%edx
 818c864:	89 54 24 0c          	mov    %edx,0xc(%esp)
 818c868:	89 44 24 08          	mov    %eax,0x8(%esp)
 818c86c:	c7 44 24 04 f4 2a b9 	movl   $0x8b92af4,0x4(%esp)
 818c873:	08 
 818c874:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c877:	89 04 24             	mov    %eax,(%esp)
 818c87a:	e8 f9 7d 26 00       	call   83f4678 <_ZN5MySQL6selectEPKcz>
 818c87f:	85 c0                	test   %eax,%eax
 818c881:	0f 95 c0             	setne  %al
 818c884:	84 c0                	test   %al,%al
 818c886:	74 07                	je     818c88f <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x120>
 818c888:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c88d:	eb 22                	jmp    818c8b1 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x142>
 818c88f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 818c892:	89 04 24             	mov    %eax,(%esp)
 818c895:	e8 76 7a 26 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 818c89a:	09 d0                	or     %edx,%eax
 818c89c:	85 c0                	test   %eax,%eax
 818c89e:	0f 94 c0             	sete   %al
 818c8a1:	84 c0                	test   %al,%al
 818c8a3:	74 07                	je     818c8ac <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x13d>
 818c8a5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 818c8aa:	eb 05                	jmp    818c8b1 <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi+0x142>
 818c8ac:	b8 00 00 00 00       	mov    $0x0,%eax
 818c8b1:	83 c4 50             	add    $0x50,%esp
 818c8b4:	5b                   	pop    %ebx
 818c8b5:	5f                   	pop    %edi
 818c8b6:	5d                   	pop    %ebp
 818c8b7:	c3                   	ret

```

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history @ 0x818c76f

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  char local_34 [36];
  MySQL *local_10;
  
  bVar5 = 0;
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int)",0x37c
               ,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(local_10,"seLect mousepass from member_mousepass  where m_id=%d",
                          *(undefined4 *)(param_1 + 0xc0));
    if (iVar3 == 0) {
      pcVar4 = local_34;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
      }
      cVar1 = MySQL::get_str(local_10,0,local_34,0x24);
      if (cVar1 == '\x01') {
        iVar3 = MySQL::select(local_10,
                              "inSert into member_mousepass_history(occ_time, m_id, pre_mousepass, modify_type)  values (now(),%d,\'%s\',%d)"
                              ,*(undefined4 *)(param_1 + 0xc0),local_34,param_2);
        if (iVar3 == 0) {
          lVar6 = MySQL::getAffectedRowCount(local_10);
          if (lVar6 == 0) {
            uVar2 = 0xffffffff;
          }
          else {
            uVar2 = 0;
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


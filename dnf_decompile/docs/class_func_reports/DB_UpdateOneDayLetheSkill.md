# DB_UpdateOneDayLetheSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## ProcessInitLethe

```asm
// === 0843410c DB_UpdateOneDayLetheSkill::ProcessInitLethe  [0x0843410c-0x84341fb] ===
 843410c:	55                   	push   %ebp
 843410d:	89 e5                	mov    %esp,%ebp
 843410f:	56                   	push   %esi
 8434110:	53                   	push   %ebx
 8434111:	83 ec 30             	sub    $0x30,%esp
 8434114:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8434119:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434120:	00 
 8434121:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8434128:	00 
 8434129:	89 04 24             	mov    %eax,(%esp)
 843412c:	e8 0d 11 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434131:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8434134:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434137:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 843413e:	3c ff                	cmp    $0xff,%al
 8434140:	74 0e                	je     8434150 <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x44>
 8434142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434145:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 843414c:	84 c0                	test   %al,%al
 843414e:	75 40                	jne    8434190 <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x84>
 8434150:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434153:	8b 70 04             	mov    0x4(%eax),%esi
 8434156:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434159:	0f b6 80 a5 01 00 00 	movzbl 0x1a5(%eax),%eax
 8434160:	0f b6 d8             	movzbl %al,%ebx
 8434163:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 843416a:	e8 57 7c fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 843416f:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434173:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8434177:	89 44 24 08          	mov    %eax,0x8(%esp)
 843417b:	c7 44 24 04 54 2a c5 	movl   $0x8c52a54,0x4(%esp)
 8434182:	08 
 8434183:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434186:	89 04 24             	mov    %eax,(%esp)
 8434189:	e8 32 00 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843418e:	eb 3e                	jmp    84341ce <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0xc2>
 8434190:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434193:	8b 70 04             	mov    0x4(%eax),%esi
 8434196:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434199:	0f b6 80 a5 01 00 00 	movzbl 0x1a5(%eax),%eax
 84341a0:	0f b6 d8             	movzbl %al,%ebx
 84341a3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84341aa:	e8 17 7c fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 84341af:	89 74 24 10          	mov    %esi,0x10(%esp)
 84341b3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84341b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 84341bb:	c7 44 24 04 84 2a c5 	movl   $0x8c52a84,0x4(%esp)
 84341c2:	08 
 84341c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84341c6:	89 04 24             	mov    %eax,(%esp)
 84341c9:	e8 f2 ff fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84341ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84341d5:	00 
 84341d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84341d9:	89 04 24             	mov    %eax,(%esp)
 84341dc:	e8 45 01 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84341e1:	83 f0 01             	xor    $0x1,%eax
 84341e4:	84 c0                	test   %al,%al
 84341e6:	74 07                	je     84341ef <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0xe3>
 84341e8:	b8 00 00 00 00       	mov    $0x0,%eax
 84341ed:	eb 05                	jmp    84341f4 <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0xe8>
 84341ef:	b8 01 00 00 00       	mov    $0x1,%eax
 84341f4:	83 c4 30             	add    $0x30,%esp
 84341f7:	5b                   	pop    %ebx
 84341f8:	5e                   	pop    %esi
 84341f9:	5d                   	pop    %ebp
 84341fa:	c3                   	ret
 84341fb:	90                   	nop

```

```c
// DB_UpdateOneDayLetheSkill::ProcessInitLethe @ 0x843410c

/* DB_UpdateOneDayLetheSkill::ProcessInitLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

bool __thiscall
DB_UpdateOneDayLetheSkill::ProcessInitLethe
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD SVar1;
  undefined4 uVar2;
  char cVar3;
  MySQL *this_00;
  undefined4 uVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
     (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
    uVar2 = *(undefined4 *)(param_1 + 4);
    SVar1 = param_1[0x1a5];
    uVar4 = get_skill_table_name(false);
    MySQL::set_query(this_00,"upDate %s set lethe_flag=%u where charac_no=%u",uVar4,
                     (uint)(byte)SVar1,uVar2);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
    SVar1 = param_1[0x1a5];
    uVar4 = get_skill_table_name(false);
    MySQL::set_query(this_00,"upDate %s set lethe_flag_2nd=%u where charac_no=%u",uVar4,
                     (uint)(byte)SVar1,uVar2);
  }
  cVar3 = MySQL::exec(this_00,true);
  return cVar3 == '\x01';
}

```

---

## ProcessInitLetheSkill

```asm
// === 084345a4 DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill  [0x084345a4-0x8434717] ===
 84345a4:	55                   	push   %ebp
 84345a5:	89 e5                	mov    %esp,%ebp
 84345a7:	57                   	push   %edi
 84345a8:	56                   	push   %esi
 84345a9:	53                   	push   %ebx
 84345aa:	83 ec 4c             	sub    $0x4c,%esp
 84345ad:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84345b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84345b9:	00 
 84345ba:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84345c1:	00 
 84345c2:	89 04 24             	mov    %eax,(%esp)
 84345c5:	e8 74 0c fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84345ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84345cd:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 84345d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84345d7:	83 c0 0d             	add    $0xd,%eax
 84345da:	8d 55 d0             	lea    -0x30(%ebp),%edx
 84345dd:	89 54 24 10          	mov    %edx,0x10(%esp)
 84345e1:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84345e8:	00 
 84345e9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84345ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84345f4:	00 
 84345f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84345f8:	89 04 24             	mov    %eax,(%esp)
 84345fb:	e8 06 77 fc ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 8434600:	83 f0 01             	xor    $0x1,%eax
 8434603:	84 c0                	test   %al,%al
 8434605:	74 0a                	je     8434611 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x6d>
 8434607:	b8 00 00 00 00       	mov    $0x0,%eax
 843460c:	e9 fe 00 00 00       	jmp    843470f <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x16b>
 8434611:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434614:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 843461b:	3c ff                	cmp    $0xff,%al
 843461d:	74 0e                	je     843462d <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x89>
 843461f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434622:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 8434629:	84 c0                	test   %al,%al
 843462b:	75 44                	jne    8434671 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0xcd>
 843462d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434630:	8b 78 04             	mov    0x4(%eax),%edi
 8434633:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 843463a:	0f b6 f0             	movzbl %al,%esi
 843463d:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8434640:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8434647:	e8 7a 77 fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 843464c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8434650:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434654:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8434658:	89 44 24 08          	mov    %eax,0x8(%esp)
 843465c:	c7 44 24 04 b8 2a c5 	movl   $0x8c52ab8,0x4(%esp)
 8434663:	08 
 8434664:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8434667:	89 04 24             	mov    %eax,(%esp)
 843466a:	e8 51 fb fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843466f:	eb 42                	jmp    84346b3 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x10f>
 8434671:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434674:	8b 78 04             	mov    0x4(%eax),%edi
 8434677:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 843467e:	0f b6 f0             	movzbl %al,%esi
 8434681:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8434684:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 843468b:	e8 36 77 fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 8434690:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8434694:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434698:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 843469c:	89 44 24 08          	mov    %eax,0x8(%esp)
 84346a0:	c7 44 24 04 00 2b c5 	movl   $0x8c52b00,0x4(%esp)
 84346a7:	08 
 84346a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84346ab:	89 04 24             	mov    %eax,(%esp)
 84346ae:	e8 0d fb fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84346b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84346ba:	00 
 84346bb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84346be:	89 04 24             	mov    %eax,(%esp)
 84346c1:	e8 60 fc fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84346c6:	83 f0 01             	xor    $0x1,%eax
 84346c9:	84 c0                	test   %al,%al
 84346cb:	74 07                	je     84346d4 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x130>
 84346cd:	b8 00 00 00 00       	mov    $0x0,%eax
 84346d2:	eb 3b                	jmp    843470f <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x16b>
 84346d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84346db:	00 
 84346dc:	c7 44 24 08 49 7d 00 	movl   $0x7d49,0x8(%esp)
 84346e3:	00 
 84346e4:	c7 44 24 04 a0 bf c5 	movl   $0x8c5bfa0,0x4(%esp)
 84346eb:	08 
 84346ec:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84346ef:	89 04 24             	mov    %eax,(%esp)
 84346f2:	e8 21 b0 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84346f7:	c7 44 24 04 d0 2c c5 	movl   $0x8c52cd0,0x4(%esp)
 84346fe:	08 
 84346ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8434702:	89 04 24             	mov    %eax,(%esp)
 8434705:	e8 7e b0 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 843470a:	b8 01 00 00 00       	mov    $0x1,%eax
 843470f:	83 c4 4c             	add    $0x4c,%esp
 8434712:	5b                   	pop    %ebx
 8434713:	5e                   	pop    %esi
 8434714:	5f                   	pop    %edi
 8434715:	5d                   	pop    %ebp
 8434716:	c3                   	ret
 8434717:	90                   	nop

```

```c
// DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill @ 0x84345a4

/* DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *local_34;
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_34 = (char *)0x0;
  cVar2 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xd),0x198,&local_34);
  pcVar1 = local_34;
  if (cVar2 == '\x01') {
    if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
       (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = (uint)CPremiumLetheManager::USE_LETHE_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u where charac_no=%u",
                       uVar5,pcVar1,uVar4,uVar3);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = (uint)CPremiumLetheManager::USE_LETHE_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u where charac_no=%u"
                       ,uVar5,pcVar1,uVar4,uVar3);
    }
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_30,
                         "bool DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)"
                         ,0x7d49,0);
      cMyTrace::operator()(local_30,"ONE_DAY_LETHE : DB_INIT_LETHE_SKILL");
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ProcessSkillConfirm

```asm
// === 08434340 DB_UpdateOneDayLetheSkill::ProcessSkillConfirm  [0x08434340-0x84345a3] ===
 8434340:	55                   	push   %ebp
 8434341:	89 e5                	mov    %esp,%ebp
 8434343:	57                   	push   %edi
 8434344:	56                   	push   %esi
 8434345:	53                   	push   %ebx
 8434346:	83 ec 6c             	sub    $0x6c,%esp
 8434349:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843434e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434355:	00 
 8434356:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843435d:	00 
 843435e:	89 04 24             	mov    %eax,(%esp)
 8434361:	e8 d8 0e fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434366:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8434369:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843436e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434375:	00 
 8434376:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843437d:	00 
 843437e:	89 04 24             	mov    %eax,(%esp)
 8434381:	e8 b8 0e fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434386:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8434389:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8434390:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434393:	83 c0 0d             	add    $0xd,%eax
 8434396:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8434399:	89 54 24 10          	mov    %edx,0x10(%esp)
 843439d:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84343a4:	00 
 84343a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84343a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84343b0:	00 
 84343b1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84343b4:	89 04 24             	mov    %eax,(%esp)
 84343b7:	e8 4a 79 fc ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 84343bc:	83 f0 01             	xor    $0x1,%eax
 84343bf:	84 c0                	test   %al,%al
 84343c1:	74 0a                	je     84343cd <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x8d>
 84343c3:	b8 00 00 00 00       	mov    $0x0,%eax
 84343c8:	e9 cf 01 00 00       	jmp    843459c <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x25c>
 84343cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 84343d0:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 84343d7:	3c ff                	cmp    $0xff,%al
 84343d9:	74 0e                	je     84343e9 <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0xa9>
 84343db:	8b 45 0c             	mov    0xc(%ebp),%eax
 84343de:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 84343e5:	84 c0                	test   %al,%al
 84343e7:	75 44                	jne    843442d <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0xed>
 84343e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84343ec:	8b 78 04             	mov    0x4(%eax),%edi
 84343ef:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 84343f6:	0f b6 f0             	movzbl %al,%esi
 84343f9:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 84343fc:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8434403:	e8 be 79 fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 8434408:	89 7c 24 14          	mov    %edi,0x14(%esp)
 843440c:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434410:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8434414:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434418:	c7 44 24 04 50 2b c5 	movl   $0x8c52b50,0x4(%esp)
 843441f:	08 
 8434420:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8434423:	89 04 24             	mov    %eax,(%esp)
 8434426:	e8 95 fd fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843442b:	eb 42                	jmp    843446f <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x12f>
 843442d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434430:	8b 78 04             	mov    0x4(%eax),%edi
 8434433:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 843443a:	0f b6 f0             	movzbl %al,%esi
 843443d:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 8434440:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8434447:	e8 7a 79 fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 843444c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8434450:	89 74 24 10          	mov    %esi,0x10(%esp)
 8434454:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8434458:	89 44 24 08          	mov    %eax,0x8(%esp)
 843445c:	c7 44 24 04 98 2b c5 	movl   $0x8c52b98,0x4(%esp)
 8434463:	08 
 8434464:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8434467:	89 04 24             	mov    %eax,(%esp)
 843446a:	e8 51 fd fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843446f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434476:	00 
 8434477:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 843447a:	89 04 24             	mov    %eax,(%esp)
 843447d:	e8 a4 fe fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434482:	83 f0 01             	xor    $0x1,%eax
 8434485:	84 c0                	test   %al,%al
 8434487:	74 0a                	je     8434493 <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x153>
 8434489:	b8 00 00 00 00       	mov    $0x0,%eax
 843448e:	e9 09 01 00 00       	jmp    843459c <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x25c>
 8434493:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843449a:	00 
 843449b:	c7 44 24 08 1a 7d 00 	movl   $0x7d1a,0x8(%esp)
 84344a2:	00 
 84344a3:	c7 44 24 04 00 c0 c5 	movl   $0x8c5c000,0x4(%esp)
 84344aa:	08 
 84344ab:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84344ae:	89 04 24             	mov    %eax,(%esp)
 84344b1:	e8 62 b2 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84344b6:	c7 44 24 04 e8 2b c5 	movl   $0x8c52be8,0x4(%esp)
 84344bd:	08 
 84344be:	8d 45 b0             	lea    -0x50(%ebp),%eax
 84344c1:	89 04 24             	mov    %eax,(%esp)
 84344c4:	e8 bf b2 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84344c9:	e8 cd 7c c9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84344ce:	8b 40 0c             	mov    0xc(%eax),%eax
 84344d1:	c7 44 24 04 c5 00 00 	movl   $0xc5,0x4(%esp)
 84344d8:	00 
 84344d9:	89 04 24             	mov    %eax,(%esp)
 84344dc:	e8 2b 5c d4 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 84344e1:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84344e4:	c7 45 dc 21 00 00 00 	movl   $0x21,-0x24(%ebp)
 84344eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84344ee:	8b 00                	mov    (%eax),%eax
 84344f0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84344f3:	e8 89 7c c9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84344f8:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 84344fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8434501:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8434508:	00 
 8434509:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843450c:	89 04 24             	mov    %eax,(%esp)
 843450f:	e8 37 4b cd ff       	call   810904b <_Z14NumberToStringji>
 8434514:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8434517:	89 54 24 14          	mov    %edx,0x14(%esp)
 843451b:	89 44 24 10          	mov    %eax,0x10(%esp)
 843451f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8434522:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8434526:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8434529:	89 44 24 08          	mov    %eax,0x8(%esp)
 843452d:	c7 44 24 04 14 2c c5 	movl   $0x8c52c14,0x4(%esp)
 8434534:	08 
 8434535:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8434538:	89 04 24             	mov    %eax,(%esp)
 843453b:	e8 80 fc fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434540:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434547:	00 
 8434548:	8b 45 d0             	mov    -0x30(%ebp),%eax
 843454b:	89 04 24             	mov    %eax,(%esp)
 843454e:	e8 d3 fd fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434553:	83 f0 01             	xor    $0x1,%eax
 8434556:	84 c0                	test   %al,%al
 8434558:	74 07                	je     8434561 <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x221>
 843455a:	b8 00 00 00 00       	mov    $0x0,%eax
 843455f:	eb 3b                	jmp    843459c <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi+0x25c>
 8434561:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8434568:	00 
 8434569:	c7 44 24 08 29 7d 00 	movl   $0x7d29,0x8(%esp)
 8434570:	00 
 8434571:	c7 44 24 04 00 c0 c5 	movl   $0x8c5c000,0x4(%esp)
 8434578:	08 
 8434579:	8d 45 c0             	lea    -0x40(%ebp),%eax
 843457c:	89 04 24             	mov    %eax,(%esp)
 843457f:	e8 94 b1 11 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8434584:	c7 44 24 04 9c 2c c5 	movl   $0x8c52c9c,0x4(%esp)
 843458b:	08 
 843458c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 843458f:	89 04 24             	mov    %eax,(%esp)
 8434592:	e8 f1 b1 11 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8434597:	b8 01 00 00 00       	mov    $0x1,%eax
 843459c:	83 c4 6c             	add    $0x6c,%esp
 843459f:	5b                   	pop    %ebx
 84345a0:	5e                   	pop    %esi
 84345a1:	5f                   	pop    %edi
 84345a2:	5d                   	pop    %ebp
 84345a3:	c3                   	ret

```

```c
// DB_UpdateOneDayLetheSkill::ProcessSkillConfirm @ 0x8434340

/* DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int) */

undefined4
DB_UpdateOneDayLetheSkill::ProcessSkillConfirm
          (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *local_58;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  MySQL *local_34;
  MySQL *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  
  local_34 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_30 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_58 = (char *)0x0;
  cVar2 = put_compressed_blob_data(local_30,0,(char *)(param_2 + 0xd),0x198,&local_58);
  pcVar1 = local_58;
  if (cVar2 == '\x01') {
    if ((*(char *)(param_2 + 0x1a6) == -1) || (*(char *)(param_2 + 0x1a6) == '\0')) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar4 = (uint)CPremiumLetheManager::SKILL_CONFIRM_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_30,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u  where charac_no=%u",
                       uVar5,pcVar1,uVar4,uVar3);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar4 = (uint)CPremiumLetheManager::SKILL_CONFIRM_STATE;
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_30,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u  where charac_no=%u"
                       ,uVar5,pcVar1,uVar4,uVar3);
    }
    cVar2 = MySQL::exec(local_30,true);
    if (cVar2 == '\x01') {
      cMyTrace::cMyTrace(local_54,
                         "bool DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)"
                         ,0x7d1a,0);
      cMyTrace::operator()(local_54,"ONE_DAY_LETHE : DB_CONFIRM_SKILL-FLAG_WRITE");
      iVar6 = G_CDataManager();
      local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar6 + 0xc),0xc5);
      local_28 = 0x21;
      local_24 = *(uint *)param_2;
      iVar6 = G_CEnvironment();
      local_20 = *(undefined4 *)(iVar6 + 0x378);
      uVar3 = NumberToString(local_24,0);
      MySQL::set_query(local_34,
                       "upDate member_premium set service_end=now() where event_id=%u and pre_type=%u and m_id=%s and server_id in(0,%u) and service_end>now()"
                       ,local_2c,local_28,uVar3,local_20);
      cVar2 = MySQL::exec(local_34,true);
      if (cVar2 == '\x01') {
        cMyTrace::cMyTrace(local_44,
                           "bool DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)"
                           ,0x7d29,0);
        cMyTrace::operator()(local_44,"ONE_DAY_LETHE : DB_CONFIRM_SKILL-PREMIUM_END_CHANGE");
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ProcessUseLethe

```asm
// === 084341fc DB_UpdateOneDayLetheSkill::ProcessUseLethe  [0x084341fc-0x843433f] ===
 84341fc:	55                   	push   %ebp
 84341fd:	89 e5                	mov    %esp,%ebp
 84341ff:	57                   	push   %edi
 8434200:	56                   	push   %esi
 8434201:	53                   	push   %ebx
 8434202:	83 ec 3c             	sub    $0x3c,%esp
 8434205:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843420a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8434211:	00 
 8434212:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8434219:	00 
 843421a:	89 04 24             	mov    %eax,(%esp)
 843421d:	e8 1c 10 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8434222:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8434225:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 843422c:	8b 45 0c             	mov    0xc(%ebp),%eax
 843422f:	83 c0 0d             	add    $0xd,%eax
 8434232:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8434235:	89 54 24 10          	mov    %edx,0x10(%esp)
 8434239:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 8434240:	00 
 8434241:	89 44 24 08          	mov    %eax,0x8(%esp)
 8434245:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843424c:	00 
 843424d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8434250:	89 04 24             	mov    %eax,(%esp)
 8434253:	e8 ae 7a fc ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 8434258:	83 f0 01             	xor    $0x1,%eax
 843425b:	84 c0                	test   %al,%al
 843425d:	74 0a                	je     8434269 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x6d>
 843425f:	b8 00 00 00 00       	mov    $0x0,%eax
 8434264:	e9 ce 00 00 00       	jmp    8434337 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x13b>
 8434269:	8b 45 0c             	mov    0xc(%ebp),%eax
 843426c:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 8434273:	3c ff                	cmp    $0xff,%al
 8434275:	74 0e                	je     8434285 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x89>
 8434277:	8b 45 0c             	mov    0xc(%ebp),%eax
 843427a:	0f b6 80 a6 01 00 00 	movzbl 0x1a6(%eax),%eax
 8434281:	84 c0                	test   %al,%al
 8434283:	75 47                	jne    84342cc <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0xd0>
 8434285:	8b 45 0c             	mov    0xc(%ebp),%eax
 8434288:	8b 78 04             	mov    0x4(%eax),%edi
 843428b:	8b 45 0c             	mov    0xc(%ebp),%eax
 843428e:	0f b6 80 a5 01 00 00 	movzbl 0x1a5(%eax),%eax
 8434295:	0f b6 f0             	movzbl %al,%esi
 8434298:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 843429b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84342a2:	e8 1f 7b fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 84342a7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84342ab:	89 74 24 10          	mov    %esi,0x10(%esp)
 84342af:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84342b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84342b7:	c7 44 24 04 b8 2a c5 	movl   $0x8c52ab8,0x4(%esp)
 84342be:	08 
 84342bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84342c2:	89 04 24             	mov    %eax,(%esp)
 84342c5:	e8 f6 fe fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84342ca:	eb 45                	jmp    8434311 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x115>
 84342cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84342cf:	8b 78 04             	mov    0x4(%eax),%edi
 84342d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84342d5:	0f b6 80 a5 01 00 00 	movzbl 0x1a5(%eax),%eax
 84342dc:	0f b6 f0             	movzbl %al,%esi
 84342df:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 84342e2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 84342e9:	e8 d8 7a fc ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 84342ee:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84342f2:	89 74 24 10          	mov    %esi,0x10(%esp)
 84342f6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84342fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84342fe:	c7 44 24 04 00 2b c5 	movl   $0x8c52b00,0x4(%esp)
 8434305:	08 
 8434306:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8434309:	89 04 24             	mov    %eax,(%esp)
 843430c:	e8 af fe fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8434311:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8434318:	00 
 8434319:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843431c:	89 04 24             	mov    %eax,(%esp)
 843431f:	e8 02 00 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8434324:	83 f0 01             	xor    $0x1,%eax
 8434327:	84 c0                	test   %al,%al
 8434329:	74 07                	je     8434332 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x136>
 843432b:	b8 00 00 00 00       	mov    $0x0,%eax
 8434330:	eb 05                	jmp    8434337 <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD+0x13b>
 8434332:	b8 01 00 00 00       	mov    $0x1,%eax
 8434337:	83 c4 3c             	add    $0x3c,%esp
 843433a:	5b                   	pop    %ebx
 843433b:	5e                   	pop    %esi
 843433c:	5f                   	pop    %edi
 843433d:	5d                   	pop    %ebp
 843433e:	c3                   	ret
 843433f:	90                   	nop

```

```c
// DB_UpdateOneDayLetheSkill::ProcessUseLethe @ 0x84341fc

/* DB_UpdateOneDayLetheSkill::ProcessUseLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::ProcessUseLethe
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD SVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_24 = (char *)0x0;
  cVar3 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xd),0x198,&local_24);
  pcVar2 = local_24;
  if (cVar3 == '\x01') {
    if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
       (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
      uVar4 = *(undefined4 *)(param_1 + 4);
      SVar1 = param_1[0x1a5];
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u where charac_no=%u",
                       uVar5,pcVar2,(uint)(byte)SVar1,uVar4);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 4);
      SVar1 = param_1[0x1a5];
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u where charac_no=%u"
                       ,uVar5,pcVar2,(uint)(byte)SVar1,uVar4);
    }
    cVar3 = MySQL::exec(local_20,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## dispatch

```asm
// === 08433eca DB_UpdateOneDayLetheSkill::dispatch  [0x08433eca-0x843410b] ===
 8433eca:	55                   	push   %ebp
 8433ecb:	89 e5                	mov    %esp,%ebp
 8433ecd:	56                   	push   %esi
 8433ece:	53                   	push   %ebx
 8433ecf:	83 ec 30             	sub    $0x30,%esp
 8433ed2:	8b 45 14             	mov    0x14(%ebp),%eax
 8433ed5:	89 04 24             	mov    %eax,(%esp)
 8433ed8:	e8 01 f2 01 00       	call   84530de <_ZN6Stream12GetOutBufferI35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADEEPT_v>
 8433edd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8433ee0:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8433ee7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433eea:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8433eee:	0f b6 05 bc 2d 47 09 	movzbl 0x9472dbc,%eax
 8433ef5:	38 c2                	cmp    %al,%dl
 8433ef7:	75 29                	jne    8433f22 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x58>
 8433ef9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433efc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433f00:	8b 45 08             	mov    0x8(%ebp),%eax
 8433f03:	89 04 24             	mov    %eax,(%esp)
 8433f06:	e8 01 02 00 00       	call   843410c <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>
 8433f0b:	83 f0 01             	xor    $0x1,%eax
 8433f0e:	84 c0                	test   %al,%al
 8433f10:	0f 84 dd 00 00 00    	je     8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f16:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8433f1d:	e9 d1 00 00 00       	jmp    8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f22:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433f25:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8433f29:	0f b6 05 60 bc 3a 09 	movzbl 0x93abc60,%eax
 8433f30:	38 c2                	cmp    %al,%dl
 8433f32:	75 29                	jne    8433f5d <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x93>
 8433f34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433f37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8433f3e:	89 04 24             	mov    %eax,(%esp)
 8433f41:	e8 b6 02 00 00       	call   84341fc <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>
 8433f46:	83 f0 01             	xor    $0x1,%eax
 8433f49:	84 c0                	test   %al,%al
 8433f4b:	0f 84 a2 00 00 00    	je     8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f51:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8433f58:	e9 96 00 00 00       	jmp    8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f5d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433f60:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8433f64:	0f b6 05 61 bc 3a 09 	movzbl 0x93abc61,%eax
 8433f6b:	38 c2                	cmp    %al,%dl
 8433f6d:	75 29                	jne    8433f98 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0xce>
 8433f6f:	8b 45 10             	mov    0x10(%ebp),%eax
 8433f72:	89 44 24 08          	mov    %eax,0x8(%esp)
 8433f76:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433f79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433f7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8433f80:	89 04 24             	mov    %eax,(%esp)
 8433f83:	e8 b8 03 00 00       	call   8434340 <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi>
 8433f88:	83 f0 01             	xor    $0x1,%eax
 8433f8b:	84 c0                	test   %al,%al
 8433f8d:	74 64                	je     8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f8f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8433f96:	eb 5b                	jmp    8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433f98:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433f9b:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8433f9f:	0f b6 05 63 bc 3a 09 	movzbl 0x93abc63,%eax
 8433fa6:	38 c2                	cmp    %al,%dl
 8433fa8:	75 3f                	jne    8433fe9 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x11f>
 8433faa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8433fb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8433fb4:	89 04 24             	mov    %eax,(%esp)
 8433fb7:	e8 e8 05 00 00       	call   84345a4 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>
 8433fbc:	83 f0 01             	xor    $0x1,%eax
 8433fbf:	84 c0                	test   %al,%al
 8433fc1:	74 07                	je     8433fca <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x100>
 8433fc3:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8433fca:	0f b6 15 63 bc 3a 09 	movzbl 0x93abc63,%edx
 8433fd1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433fd4:	88 50 0c             	mov    %dl,0xc(%eax)
 8433fd7:	0f b6 15 60 bc 3a 09 	movzbl 0x93abc60,%edx
 8433fde:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8433fe1:	88 90 a5 01 00 00    	mov    %dl,0x1a5(%eax)
 8433fe7:	eb 0a                	jmp    8433ff3 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x129>
 8433fe9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8433fee:	e9 0f 01 00 00       	jmp    8434102 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x238>
 8433ff3:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8433ff8:	c7 44 24 08 ac 7c 00 	movl   $0x7cac,0x8(%esp)
 8433fff:	00 
 8434000:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8434007:	08 
 8434008:	89 04 24             	mov    %eax,(%esp)
 843400b:	e8 76 ba e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8434010:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8434017:	00 
 8434018:	89 44 24 04          	mov    %eax,0x4(%esp)
 843401c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843401f:	89 04 24             	mov    %eax,(%esp)
 8434022:	e8 ff 4b c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8434027:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843402a:	89 04 24             	mov    %eax,(%esp)
 843402d:	e8 14 4c c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8434032:	8b 55 0c             	mov    0xc(%ebp),%edx
 8434035:	89 54 24 04          	mov    %edx,0x4(%esp)
 8434039:	89 04 24             	mov    %eax,(%esp)
 843403c:	e8 15 4c c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8434041:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8434044:	89 04 24             	mov    %eax,(%esp)
 8434047:	e8 fa 4b c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843404c:	8b 55 10             	mov    0x10(%ebp),%edx
 843404f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8434053:	89 04 24             	mov    %eax,(%esp)
 8434056:	e8 fb 4b c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843405b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 843405e:	89 04 24             	mov    %eax,(%esp)
 8434061:	e8 e8 4b c9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8434066:	89 04 24             	mov    %eax,(%esp)
 8434069:	e8 c4 f0 01 00       	call   8453132 <_ZN12CStreamGuard11GetInBufferI22SIG_PREMIUM_LETHE_FLAGEEPT_v>
 843406e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8434071:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434074:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8434077:	89 10                	mov    %edx,(%eax)
 8434079:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843407c:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8434080:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434083:	88 50 04             	mov    %dl,0x4(%eax)
 8434086:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8434089:	0f b6 90 a6 01 00 00 	movzbl 0x1a6(%eax),%edx
 8434090:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8434093:	88 90 9e 01 00 00    	mov    %dl,0x19e(%eax)
 8434099:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843409c:	8d 50 0d             	lea    0xd(%eax),%edx
 843409f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84340a2:	83 c0 05             	add    $0x5,%eax
 84340a5:	c7 44 24 08 99 01 00 	movl   $0x199,0x8(%esp)
 84340ac:	00 
 84340ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84340b1:	89 04 24             	mov    %eax,(%esp)
 84340b4:	e8 e7 97 c4 ff       	call   807d8a0 <memcpy@plt>
 84340b9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84340be:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84340c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84340c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84340cc:	00 
 84340cd:	89 04 24             	mov    %eax,(%esp)
 84340d0:	e8 09 cf 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84340d5:	bb 01 00 00 00       	mov    $0x1,%ebx
 84340da:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84340dd:	89 04 24             	mov    %eax,(%esp)
 84340e0:	e8 ed 87 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84340e5:	eb 1b                	jmp    8434102 <_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream+0x238>
 84340e7:	89 d3                	mov    %edx,%ebx
 84340e9:	89 c6                	mov    %eax,%esi
 84340eb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84340ee:	89 04 24             	mov    %eax,(%esp)
 84340f1:	e8 dc 87 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84340f6:	89 f0                	mov    %esi,%eax
 84340f8:	89 da                	mov    %ebx,%edx
 84340fa:	89 04 24             	mov    %eax,(%esp)
 84340fd:	e8 4e f6 6a 00       	call   8ae3750 <_Unwind_Resume>
 8434102:	89 d8                	mov    %ebx,%eax
 8434104:	83 c4 30             	add    $0x30,%esp
 8434107:	5b                   	pop    %ebx
 8434108:	5e                   	pop    %esi
 8434109:	5d                   	pop    %ebp
 843410a:	c3                   	ret
 843410b:	90                   	nop

```

```c
// DB_UpdateOneDayLetheSkill::dispatch @ 0x8433eca

/* DB_UpdateOneDayLetheSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::dispatch
          (DB_UpdateOneDayLetheSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_20 [8];
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_18;
  undefined4 local_14;
  SIG_PREMIUM_LETHE_FLAG *local_10;
  
  local_18 = Stream::GetOutBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(param_3);
  local_14 = 1;
  if (local_18[0xc] == CPremiumLetheManager::NOT_USE_LETHE_STATE) {
    cVar1 = ProcessInitLethe(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else if (local_18[0xc] == CPremiumLetheManager::USE_LETHE_STATE) {
    cVar1 = ProcessUseLethe(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else if (local_18[0xc] == CPremiumLetheManager::SKILL_CONFIRM_STATE) {
    cVar1 = ProcessSkillConfirm((SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)this,(int)local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else {
    if (local_18[0xc] != CPremiumLetheManager::INIT_LETHE_SKILL) {
      return 0;
    }
    cVar1 = ProcessInitLetheSkill(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
    local_18[0xc] = CPremiumLetheManager::INIT_LETHE_SKILL;
    local_18[0x1a5] = CPremiumLetheManager::USE_LETHE_STATE;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7cac);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0843403c to 084340d4 has its CatchHandler @ 084340e7 */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_10 = CStreamGuard::GetInBuffer<SIG_PREMIUM_LETHE_FLAG>(pCVar3);
  *(undefined4 *)local_10 = local_14;
  *(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(local_10 + 4) = local_18[0xc];
  *(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(local_10 + 0x19e) = local_18[0x1a6];
  memcpy(local_10 + 5,local_18 + 0xd,0x199);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}

```


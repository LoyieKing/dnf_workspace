# DB_RequestCharacSkillInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _GetSkillInfo

```asm
// === 08447312 DB_RequestCharacSkillInfo::_GetSkillInfo  [0x08447312-0x84474f1] ===
 8447312:	55                   	push   %ebp
 8447313:	89 e5                	mov    %esp,%ebp
 8447315:	83 ec 48             	sub    $0x48,%esp
 8447318:	8b 45 10             	mov    0x10(%ebp),%eax
 844731b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 844731e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8447323:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844732a:	00 
 844732b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8447332:	00 
 8447333:	89 04 24             	mov    %eax,(%esp)
 8447336:	e8 03 df fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844733b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 844733e:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 8447342:	89 04 24             	mov    %eax,(%esp)
 8447345:	e8 49 4a fb ff       	call   83fbd93 <_Z19get_skill_slot_namec>
 844734a:	8b 55 0c             	mov    0xc(%ebp),%edx
 844734d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8447351:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447355:	c7 44 24 04 a4 81 c5 	movl   $0x8c581a4,0x4(%esp)
 844735c:	08 
 844735d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8447360:	89 04 24             	mov    %eax,(%esp)
 8447363:	e8 58 ce fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8447368:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844736f:	00 
 8447370:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8447373:	89 04 24             	mov    %eax,(%esp)
 8447376:	e8 ab cf fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844737b:	88 45 ef             	mov    %al,-0x11(%ebp)
 844737e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8447382:	83 f0 01             	xor    $0x1,%eax
 8447385:	84 c0                	test   %al,%al
 8447387:	74 3d                	je     84473c6 <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0xb4>
 8447389:	8b 45 0c             	mov    0xc(%ebp),%eax
 844738c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447390:	c7 44 24 10 cc 81 c5 	movl   $0x8c581cc,0x10(%esp)
 8447397:	08 
 8447398:	c7 44 24 0c c5 b1 00 	movl   $0xb1c5,0xc(%esp)
 844739f:	00 
 84473a0:	c7 44 24 08 80 b1 c5 	movl   $0x8c5b180,0x8(%esp)
 84473a7:	08 
 84473a8:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84473af:	08 
 84473b0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84473b7:	e8 4e c8 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84473bc:	b8 00 00 00 00       	mov    $0x0,%eax
 84473c1:	e9 29 01 00 00       	jmp    84474ef <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x1dd>
 84473c6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84473c9:	89 04 24             	mov    %eax,(%esp)
 84473cc:	e8 eb d0 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84473d1:	88 45 ef             	mov    %al,-0x11(%ebp)
 84473d4:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 84473d8:	83 f0 01             	xor    $0x1,%eax
 84473db:	84 c0                	test   %al,%al
 84473dd:	74 3d                	je     844741c <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x10a>
 84473df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84473e2:	89 44 24 14          	mov    %eax,0x14(%esp)
 84473e6:	c7 44 24 10 14 82 c5 	movl   $0x8c58214,0x10(%esp)
 84473ed:	08 
 84473ee:	c7 44 24 0c ce b1 00 	movl   $0xb1ce,0xc(%esp)
 84473f5:	00 
 84473f6:	c7 44 24 08 80 b1 c5 	movl   $0x8c5b180,0x8(%esp)
 84473fd:	08 
 84473fe:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447405:	08 
 8447406:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844740d:	e8 f8 c7 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447412:	b8 00 00 00 00       	mov    $0x0,%eax
 8447417:	e9 d3 00 00 00       	jmp    84474ef <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x1dd>
 844741c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844741f:	89 04 24             	mov    %eax,(%esp)
 8447422:	e8 e9 ce fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8447427:	09 d0                	or     %edx,%eax
 8447429:	85 c0                	test   %eax,%eax
 844742b:	0f 94 c0             	sete   %al
 844742e:	84 c0                	test   %al,%al
 8447430:	74 3d                	je     844746f <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x15d>
 8447432:	8b 45 0c             	mov    0xc(%ebp),%eax
 8447435:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447439:	c7 44 24 10 5c 82 c5 	movl   $0x8c5825c,0x10(%esp)
 8447440:	08 
 8447441:	c7 44 24 0c d5 b1 00 	movl   $0xb1d5,0xc(%esp)
 8447448:	00 
 8447449:	c7 44 24 08 80 b1 c5 	movl   $0x8c5b180,0x8(%esp)
 8447450:	08 
 8447451:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447458:	08 
 8447459:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447460:	e8 a5 c7 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447465:	b8 00 00 00 00       	mov    $0x0,%eax
 844746a:	e9 80 00 00 00       	jmp    84474ef <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x1dd>
 844746f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8447476:	c7 45 f4 98 01 00 00 	movl   $0x198,-0xc(%ebp)
 844747d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8447480:	8b 55 14             	mov    0x14(%ebp),%edx
 8447483:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447486:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 844748a:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 8447491:	00 
 8447492:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8447496:	89 54 24 08          	mov    %edx,0x8(%esp)
 844749a:	89 44 24 04          	mov    %eax,0x4(%esp)
 844749e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84474a1:	89 04 24             	mov    %eax,(%esp)
 84474a4:	e8 d0 47 fb ff       	call   83fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>
 84474a9:	83 f0 01             	xor    $0x1,%eax
 84474ac:	84 c0                	test   %al,%al
 84474ae:	74 3a                	je     84474ea <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x1d8>
 84474b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 84474b3:	89 44 24 14          	mov    %eax,0x14(%esp)
 84474b7:	c7 44 24 10 a0 82 c5 	movl   $0x8c582a0,0x10(%esp)
 84474be:	08 
 84474bf:	c7 44 24 0c e0 b1 00 	movl   $0xb1e0,0xc(%esp)
 84474c6:	00 
 84474c7:	c7 44 24 08 80 b1 c5 	movl   $0x8c5b180,0x8(%esp)
 84474ce:	08 
 84474cf:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84474d6:	08 
 84474d7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84474de:	e8 27 c7 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84474e3:	b8 00 00 00 00       	mov    $0x0,%eax
 84474e8:	eb 05                	jmp    84474ef <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill+0x1dd>
 84474ea:	b8 01 00 00 00       	mov    $0x1,%eax
 84474ef:	c9                   	leave
 84474f0:	c3                   	ret
 84474f1:	90                   	nop

```

```c
// DB_RequestCharacSkillInfo::_GetSkillInfo @ 0x8447312

/* DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::_GetSkillInfo
          (DB_RequestCharacSkillInfo *this,uint param_1,char param_2,_Mastered_skill *param_3)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar2 = get_skill_slot_name(param_2);
  MySQL::set_query(this_00,"seLect %s from skill where charac_no=%d",uVar2,param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                   ,0xb1d5,"DB_RequestCharacSkillInfo::_GetSkillInfo no result, charac_no(%d)",
                   param_1);
        uVar2 = 0;
      }
      else {
        cVar1 = get_compressed_blob_data(this_00,0,(char *)param_3,0x198,2);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                     ,0xb1e0,
                     "DB_RequestCharacSkillInfo::_GetSkillInfo get_compressed_blob_data failed, charac_no(%d)"
                     ,param_1);
          uVar2 = 0;
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
                 ,0xb1ce,"DB_RequestCharacSkillInfo::_GetSkillInfo fetch() failed, charac_no(%d)",
                 param_1);
      uVar2 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "bool DB_RequestCharacSkillInfo::_GetSkillInfo(unsigned int, char, _Mastered_skill*)"
               ,0xb1c5,"DB_RequestCharacSkillInfo::_GetSkillInfo exec() failed, charac_no(%d)",
               param_1);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _GetSkillTreeIndex

```asm
// === 08447162 DB_RequestCharacSkillInfo::_GetSkillTreeIndex  [0x08447162-0x8447311] ===
 8447162:	55                   	push   %ebp
 8447163:	89 e5                	mov    %esp,%ebp
 8447165:	83 ec 38             	sub    $0x38,%esp
 8447168:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844716d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8447174:	00 
 8447175:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844717c:	00 
 844717d:	89 04 24             	mov    %eax,(%esp)
 8447180:	e8 b9 e0 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8447185:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8447188:	8b 45 0c             	mov    0xc(%ebp),%eax
 844718b:	89 44 24 08          	mov    %eax,0x8(%esp)
 844718f:	c7 44 24 04 38 80 c5 	movl   $0x8c58038,0x4(%esp)
 8447196:	08 
 8447197:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844719a:	89 04 24             	mov    %eax,(%esp)
 844719d:	e8 1e d0 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84471a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84471a9:	00 
 84471aa:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84471ad:	89 04 24             	mov    %eax,(%esp)
 84471b0:	e8 71 d1 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 84471b5:	88 45 f3             	mov    %al,-0xd(%ebp)
 84471b8:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 84471bc:	83 f0 01             	xor    $0x1,%eax
 84471bf:	84 c0                	test   %al,%al
 84471c1:	74 3d                	je     8447200 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x9e>
 84471c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84471c6:	89 44 24 14          	mov    %eax,0x14(%esp)
 84471ca:	c7 44 24 10 74 80 c5 	movl   $0x8c58074,0x10(%esp)
 84471d1:	08 
 84471d2:	c7 44 24 0c 9a b1 00 	movl   $0xb19a,0xc(%esp)
 84471d9:	00 
 84471da:	c7 44 24 08 e0 b1 c5 	movl   $0x8c5b1e0,0x8(%esp)
 84471e1:	08 
 84471e2:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84471e9:	08 
 84471ea:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84471f1:	e8 14 ca 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84471f6:	b8 00 00 00 00       	mov    $0x0,%eax
 84471fb:	e9 10 01 00 00       	jmp    8447310 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x1ae>
 8447200:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447203:	89 04 24             	mov    %eax,(%esp)
 8447206:	e8 b1 d2 fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844720b:	88 45 f3             	mov    %al,-0xd(%ebp)
 844720e:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8447212:	83 f0 01             	xor    $0x1,%eax
 8447215:	84 c0                	test   %al,%al
 8447217:	74 3d                	je     8447256 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0xf4>
 8447219:	8b 45 0c             	mov    0xc(%ebp),%eax
 844721c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447220:	c7 44 24 10 c0 80 c5 	movl   $0x8c580c0,0x10(%esp)
 8447227:	08 
 8447228:	c7 44 24 0c a3 b1 00 	movl   $0xb1a3,0xc(%esp)
 844722f:	00 
 8447230:	c7 44 24 08 e0 b1 c5 	movl   $0x8c5b1e0,0x8(%esp)
 8447237:	08 
 8447238:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844723f:	08 
 8447240:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8447247:	e8 be c9 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 844724c:	b8 00 00 00 00       	mov    $0x0,%eax
 8447251:	e9 ba 00 00 00       	jmp    8447310 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x1ae>
 8447256:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8447259:	89 04 24             	mov    %eax,(%esp)
 844725c:	e8 af d0 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8447261:	09 d0                	or     %edx,%eax
 8447263:	85 c0                	test   %eax,%eax
 8447265:	0f 94 c0             	sete   %al
 8447268:	84 c0                	test   %al,%al
 844726a:	74 3a                	je     84472a6 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x144>
 844726c:	8b 45 0c             	mov    0xc(%ebp),%eax
 844726f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8447273:	c7 44 24 10 0c 81 c5 	movl   $0x8c5810c,0x10(%esp)
 844727a:	08 
 844727b:	c7 44 24 0c aa b1 00 	movl   $0xb1aa,0xc(%esp)
 8447282:	00 
 8447283:	c7 44 24 08 e0 b1 c5 	movl   $0x8c5b1e0,0x8(%esp)
 844728a:	08 
 844728b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8447292:	08 
 8447293:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 844729a:	e8 6b c9 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 844729f:	b8 00 00 00 00       	mov    $0x0,%eax
 84472a4:	eb 6a                	jmp    8447310 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x1ae>
 84472a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84472ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84472b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84472b4:	8b 55 10             	mov    0x10(%ebp),%edx
 84472b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84472bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84472bf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84472c2:	89 04 24             	mov    %eax,(%esp)
 84472c5:	e8 8a 6b cb ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 84472ca:	83 f0 01             	xor    $0x1,%eax
 84472cd:	84 c0                	test   %al,%al
 84472cf:	74 3a                	je     844730b <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x1a9>
 84472d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84472d4:	89 44 24 14          	mov    %eax,0x14(%esp)
 84472d8:	c7 44 24 10 54 81 c5 	movl   $0x8c58154,0x10(%esp)
 84472df:	08 
 84472e0:	c7 44 24 0c b2 b1 00 	movl   $0xb1b2,0xc(%esp)
 84472e7:	00 
 84472e8:	c7 44 24 08 e0 b1 c5 	movl   $0x8c5b1e0,0x8(%esp)
 84472ef:	08 
 84472f0:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84472f7:	08 
 84472f8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84472ff:	e8 06 c9 68 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8447304:	b8 00 00 00 00       	mov    $0x0,%eax
 8447309:	eb 05                	jmp    8447310 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc+0x1ae>
 844730b:	b8 01 00 00 00       	mov    $0x1,%eax
 8447310:	c9                   	leave
 8447311:	c3                   	ret

```

```c
// DB_RequestCharacSkillInfo::_GetSkillTreeIndex @ 0x8447162

/* DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::_GetSkillTreeIndex
          (DB_RequestCharacSkillInfo *this,uint param_1,char *param_2)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect skill_tree_index from charac_info where charac_no=%u",param_1);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 == '\x01') {
      lVar3 = MySQL::getAffectedRowCount(this_00);
      if (lVar3 == 0) {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb1aa,
                   "DB_RequestCharacSkillInfo::_GetSkillTreeIndex no result, charac_no(%d)",param_1)
        ;
        uVar2 = 0;
      }
      else {
        cVar1 = MySQL::get_byte(this_00,0,param_2);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          LogManager::logFormat
                    (1,"DBThread.cpp",
                     "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",
                     0xb1b2,
                     "DB_RequestCharacSkillInfo::_GetSkillTreeIndex get_byte() failed, charac_no(%d)"
                     ,param_1);
          uVar2 = 0;
        }
      }
    }
    else {
      LogManager::logFormat
                (1,"DBThread.cpp",
                 "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb1a3,
                 "DB_RequestCharacSkillInfo::_GetSkillTreeIndex fetch() failed, charac_no(%d)",
                 param_1);
      uVar2 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "bool DB_RequestCharacSkillInfo::_GetSkillTreeIndex(unsigned int, char*)",0xb19a,
               "DB_RequestCharacSkillInfo::_GetSkillTreeIndex exec() failed, charac_no(%d)",param_1)
    ;
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## dispatch

```asm
// === 084474f2 DB_RequestCharacSkillInfo::dispatch  [0x084474f2-0x844759f] ===
 84474f2:	55                   	push   %ebp
 84474f3:	89 e5                	mov    %esp,%ebp
 84474f5:	83 ec 28             	sub    $0x28,%esp
 84474f8:	8b 45 14             	mov    0x14(%ebp),%eax
 84474fb:	89 04 24             	mov    %eax,(%esp)
 84474fe:	e8 bd cf 00 00       	call   84544c0 <_ZN6Stream12GetOutBufferI29SIG_REQUEST_CHARAC_SKILL_INFOEEPT_v>
 8447503:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8447506:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447509:	8d 90 9c 01 00 00    	lea    0x19c(%eax),%edx
 844750f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447512:	8b 00                	mov    (%eax),%eax
 8447514:	89 54 24 08          	mov    %edx,0x8(%esp)
 8447518:	89 44 24 04          	mov    %eax,0x4(%esp)
 844751c:	8b 45 08             	mov    0x8(%ebp),%eax
 844751f:	89 04 24             	mov    %eax,(%esp)
 8447522:	e8 3b fc ff ff       	call   8447162 <_ZN25DB_RequestCharacSkillInfo18_GetSkillTreeIndexEjPc>
 8447527:	88 45 f7             	mov    %al,-0x9(%ebp)
 844752a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 844752e:	83 f0 01             	xor    $0x1,%eax
 8447531:	84 c0                	test   %al,%al
 8447533:	74 07                	je     844753c <_ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream+0x4a>
 8447535:	b8 00 00 00 00       	mov    $0x0,%eax
 844753a:	eb 62                	jmp    844759e <_ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream+0xac>
 844753c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844753f:	8d 48 04             	lea    0x4(%eax),%ecx
 8447542:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447545:	0f b6 80 9c 01 00 00 	movzbl 0x19c(%eax),%eax
 844754c:	0f be d0             	movsbl %al,%edx
 844754f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447552:	8b 00                	mov    (%eax),%eax
 8447554:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8447558:	89 54 24 08          	mov    %edx,0x8(%esp)
 844755c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8447560:	8b 45 08             	mov    0x8(%ebp),%eax
 8447563:	89 04 24             	mov    %eax,(%esp)
 8447566:	e8 a7 fd ff ff       	call   8447312 <_ZN25DB_RequestCharacSkillInfo13_GetSkillInfoEjcP15_Mastered_skill>
 844756b:	88 45 f7             	mov    %al,-0x9(%ebp)
 844756e:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8447572:	83 f0 01             	xor    $0x1,%eax
 8447575:	84 c0                	test   %al,%al
 8447577:	74 07                	je     8447580 <_ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream+0x8e>
 8447579:	b8 00 00 00 00       	mov    $0x0,%eax
 844757e:	eb 1e                	jmp    844759e <_ZN25DB_RequestCharacSkillInfo8dispatchEiiP6Stream+0xac>
 8447580:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8447583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8447587:	8b 45 10             	mov    0x10(%ebp),%eax
 844758a:	89 44 24 04          	mov    %eax,0x4(%esp)
 844758e:	8b 45 08             	mov    0x8(%ebp),%eax
 8447591:	89 04 24             	mov    %eax,(%esp)
 8447594:	e8 07 00 00 00       	call   84475a0 <_ZN25DB_RequestCharacSkillInfo10sendResultEiP29SIG_REQUEST_CHARAC_SKILL_INFO>
 8447599:	b8 01 00 00 00       	mov    $0x1,%eax
 844759e:	c9                   	leave
 844759f:	c3                   	ret

```

```c
// DB_RequestCharacSkillInfo::dispatch @ 0x84474f2

/* DB_RequestCharacSkillInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_RequestCharacSkillInfo::dispatch
          (DB_RequestCharacSkillInfo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_REQUEST_CHARAC_SKILL_INFO *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(param_3);
  cVar1 = _GetSkillTreeIndex(this,*(uint *)pSVar2,(char *)(pSVar2 + 0x19c));
  if (cVar1 == '\x01') {
    cVar1 = _GetSkillInfo(this,*(uint *)pSVar2,(char)pSVar2[0x19c],(_Mastered_skill *)(pSVar2 + 4));
    if (cVar1 == '\x01') {
      sendResult(this,param_2,pSVar2);
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

## sendResult

```asm
// === 084475a0 DB_RequestCharacSkillInfo::sendResult  [0x084475a0-0x844768b] ===
 84475a0:	55                   	push   %ebp
 84475a1:	89 e5                	mov    %esp,%ebp
 84475a3:	56                   	push   %esi
 84475a4:	53                   	push   %ebx
 84475a5:	83 ec 20             	sub    $0x20,%esp
 84475a8:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84475ad:	c7 44 24 08 02 b2 00 	movl   $0xb202,0x8(%esp)
 84475b4:	00 
 84475b5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84475bc:	08 
 84475bd:	89 04 24             	mov    %eax,(%esp)
 84475c0:	e8 c1 84 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84475c5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84475cc:	00 
 84475cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84475d1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84475d4:	89 04 24             	mov    %eax,(%esp)
 84475d7:	e8 4a 16 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84475dc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84475df:	89 04 24             	mov    %eax,(%esp)
 84475e2:	e8 5f 16 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84475e7:	c7 44 24 04 fd 02 00 	movl   $0x2fd,0x4(%esp)
 84475ee:	00 
 84475ef:	89 04 24             	mov    %eax,(%esp)
 84475f2:	e8 5f 16 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84475f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84475fa:	89 04 24             	mov    %eax,(%esp)
 84475fd:	e8 44 16 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8447602:	8b 55 0c             	mov    0xc(%ebp),%edx
 8447605:	89 54 24 04          	mov    %edx,0x4(%esp)
 8447609:	89 04 24             	mov    %eax,(%esp)
 844760c:	e8 45 16 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8447611:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447614:	89 04 24             	mov    %eax,(%esp)
 8447617:	e8 32 16 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844761c:	89 04 24             	mov    %eax,(%esp)
 844761f:	e8 14 fe de ff       	call   8237438 <_ZN12CStreamGuard11GetInBufferI29SIG_REQUEST_CHARAC_SKILL_INFOEEPT_v>
 8447624:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8447627:	c7 44 24 08 a0 01 00 	movl   $0x1a0,0x8(%esp)
 844762e:	00 
 844762f:	8b 45 10             	mov    0x10(%ebp),%eax
 8447632:	89 44 24 04          	mov    %eax,0x4(%esp)
 8447636:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8447639:	89 04 24             	mov    %eax,(%esp)
 844763c:	e8 5f 62 c3 ff       	call   807d8a0 <memcpy@plt>
 8447641:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8447646:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8447649:	89 54 24 08          	mov    %edx,0x8(%esp)
 844764d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8447654:	00 
 8447655:	89 04 24             	mov    %eax,(%esp)
 8447658:	e8 81 99 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844765d:	eb 1b                	jmp    844767a <_ZN25DB_RequestCharacSkillInfo10sendResultEiP29SIG_REQUEST_CHARAC_SKILL_INFO+0xda>
 844765f:	89 d3                	mov    %edx,%ebx
 8447661:	89 c6                	mov    %eax,%esi
 8447663:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8447666:	89 04 24             	mov    %eax,(%esp)
 8447669:	e8 64 52 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844766e:	89 f0                	mov    %esi,%eax
 8447670:	89 da                	mov    %ebx,%edx
 8447672:	89 04 24             	mov    %eax,(%esp)
 8447675:	e8 d6 c0 69 00       	call   8ae3750 <_Unwind_Resume>
 844767a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 844767d:	89 04 24             	mov    %eax,(%esp)
 8447680:	e8 4d 52 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8447685:	83 c4 20             	add    $0x20,%esp
 8447688:	5b                   	pop    %ebx
 8447689:	5e                   	pop    %esi
 844768a:	5d                   	pop    %ebp
 844768b:	c3                   	ret

```

```c
// DB_RequestCharacSkillInfo::sendResult @ 0x84475a0

/* DB_RequestCharacSkillInfo::sendResult(int, SIG_REQUEST_CHARAC_SKILL_INFO*) */

void __thiscall
DB_RequestCharacSkillInfo::sendResult
          (DB_RequestCharacSkillInfo *this,int param_1,SIG_REQUEST_CHARAC_SKILL_INFO *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_REQUEST_CHARAC_SKILL_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb202);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084475f2 to 0844765c has its CatchHandler @ 0844765f */
  CStreamGuard::operator<<(pCVar2,0x2fd);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_REQUEST_CHARAC_SKILL_INFO>(pCVar2);
  memcpy(local_10,param_2,0x1a0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```


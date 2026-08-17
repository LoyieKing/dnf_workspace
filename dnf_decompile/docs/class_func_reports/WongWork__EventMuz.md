# WongWork__EventMuz

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeMuzEventItem

```asm
// === 083fb16a WongWork::EventMuz::ArrangeMuzEventItem  [0x083fb16a-0x83fb471] ===
 83fb16a:	55                   	push   %ebp
 83fb16b:	89 e5                	mov    %esp,%ebp
 83fb16d:	53                   	push   %ebx
 83fb16e:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 83fb174:	c7 45 e4 0a 00 00 00 	movl   $0xa,-0x1c(%ebp)
 83fb17b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb180:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb187:	00 
 83fb188:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb18f:	00 
 83fb190:	89 04 24             	mov    %eax,(%esp)
 83fb193:	e8 a6 a0 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb198:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83fb19b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb1a2:	00 
 83fb1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb1a6:	89 04 24             	mov    %eax,(%esp)
 83fb1a9:	e8 9d de d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb1ae:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fb1b5:	00 
 83fb1b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb1ba:	c7 44 24 04 e0 63 c3 	movl   $0x8c363e0,0x4(%esp)
 83fb1c1:	08 
 83fb1c2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb1c5:	89 04 24             	mov    %eax,(%esp)
 83fb1c8:	e8 f3 8f ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb1cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb1d4:	00 
 83fb1d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb1d8:	89 04 24             	mov    %eax,(%esp)
 83fb1db:	e8 46 91 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb1e0:	83 f0 01             	xor    $0x1,%eax
 83fb1e3:	84 c0                	test   %al,%al
 83fb1e5:	74 5c                	je     83fb243 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0xd9>
 83fb1e7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb1ee:	00 
 83fb1ef:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb1f2:	89 04 24             	mov    %eax,(%esp)
 83fb1f5:	e8 51 de d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb1fa:	89 c3                	mov    %eax,%ebx
 83fb1fc:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fb203:	00 
 83fb204:	c7 44 24 08 ce 01 00 	movl   $0x1ce,0x8(%esp)
 83fb20b:	00 
 83fb20c:	c7 44 24 04 20 dc c5 	movl   $0x8c5dc20,0x4(%esp)
 83fb213:	08 
 83fb214:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fb217:	89 04 24             	mov    %eax,(%esp)
 83fb21a:	e8 f9 44 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fb21f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fb223:	c7 44 24 08 20 dc c5 	movl   $0x8c5dc20,0x8(%esp)
 83fb22a:	08 
 83fb22b:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fb232:	08 
 83fb233:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fb236:	89 04 24             	mov    %eax,(%esp)
 83fb239:	e8 4a 45 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fb23e:	e9 26 02 00 00       	jmp    83fb469 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x2ff>
 83fb243:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fb24a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fb251:	e9 4f 01 00 00       	jmp    83fb3a5 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x23b>
 83fb256:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb259:	89 04 24             	mov    %eax,(%esp)
 83fb25c:	e8 5b 92 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fb261:	83 f0 01             	xor    $0x1,%eax
 83fb264:	84 c0                	test   %al,%al
 83fb266:	0f 85 54 01 00 00    	jne    83fb3c0 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x256>
 83fb26c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 83fb273:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fb27a:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fb281:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fb288:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fb28f:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 83fb296:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fb299:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb29d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb2a4:	00 
 83fb2a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb2a8:	89 04 24             	mov    %eax,(%esp)
 83fb2ab:	e8 fe 6f ce ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 83fb2b0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83fb2b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb2b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb2be:	00 
 83fb2bf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb2c2:	89 04 24             	mov    %eax,(%esp)
 83fb2c5:	e8 62 b6 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb2ca:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83fb2cd:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb2d1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83fb2d8:	00 
 83fb2d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb2dc:	89 04 24             	mov    %eax,(%esp)
 83fb2df:	e8 48 b6 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb2e4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83fb2e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb2eb:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83fb2f2:	00 
 83fb2f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb2f6:	89 04 24             	mov    %eax,(%esp)
 83fb2f9:	e8 2e b6 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb2fe:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83fb301:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb305:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83fb30c:	00 
 83fb30d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb310:	89 04 24             	mov    %eax,(%esp)
 83fb313:	e8 14 b6 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb318:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83fb31b:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb31f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 83fb326:	00 
 83fb327:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb32a:	89 04 24             	mov    %eax,(%esp)
 83fb32d:	e8 fa b5 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb332:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83fb335:	85 c0                	test   %eax,%eax
 83fb337:	75 68                	jne    83fb3a1 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x237>
 83fb339:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83fb33c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83fb33f:	75 60                	jne    83fb3a1 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x237>
 83fb341:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fb344:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83fb347:	c1 e2 04             	shl    $0x4,%edx
 83fb34a:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb34d:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fb350:	81 ea dc 00 00 00    	sub    $0xdc,%edx
 83fb356:	89 02                	mov    %eax,(%edx)
 83fb358:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fb35b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83fb35e:	c1 e2 04             	shl    $0x4,%edx
 83fb361:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb364:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fb367:	81 ea d4 00 00 00    	sub    $0xd4,%edx
 83fb36d:	89 02                	mov    %eax,(%edx)
 83fb36f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fb372:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83fb375:	c1 e2 04             	shl    $0x4,%edx
 83fb378:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb37b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fb37e:	81 ea d0 00 00 00    	sub    $0xd0,%edx
 83fb384:	89 02                	mov    %eax,(%edx)
 83fb386:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fb389:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83fb38c:	c1 e2 04             	shl    $0x4,%edx
 83fb38f:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb392:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fb395:	81 ea d8 00 00 00    	sub    $0xd8,%edx
 83fb39b:	89 02                	mov    %eax,(%edx)
 83fb39d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fb3a1:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83fb3a5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb3a8:	89 04 24             	mov    %eax,(%esp)
 83fb3ab:	e8 bc 6f ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83fb3b0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83fb3b3:	0f 97 c0             	seta   %al
 83fb3b6:	84 c0                	test   %al,%al
 83fb3b8:	0f 85 98 fe ff ff    	jne    83fb256 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0xec>
 83fb3be:	eb 01                	jmp    83fb3c1 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x257>
 83fb3c0:	90                   	nop
 83fb3c1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83fb3c8:	e9 8b 00 00 00       	jmp    83fb458 <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x2ee>
 83fb3cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb3d0:	c1 e0 04             	shl    $0x4,%eax
 83fb3d3:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fb3d6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fb3d9:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fb3de:	8b 10                	mov    (%eax),%edx
 83fb3e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb3e3:	c1 e0 04             	shl    $0x4,%eax
 83fb3e6:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fb3e9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fb3ec:	2d dc 00 00 00       	sub    $0xdc,%eax
 83fb3f1:	8b 00                	mov    (%eax),%eax
 83fb3f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fb3f7:	89 04 24             	mov    %eax,(%esp)
 83fb3fa:	e8 06 fd ff ff       	call   83fb105 <_ZN8WongWork8EventMuz18UpdateEventMuzInfoEji>
 83fb3ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb402:	c1 e0 04             	shl    $0x4,%eax
 83fb405:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb408:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb40b:	2d d0 00 00 00       	sub    $0xd0,%eax
 83fb410:	8b 00                	mov    (%eax),%eax
 83fb412:	89 c1                	mov    %eax,%ecx
 83fb414:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb417:	c1 e0 04             	shl    $0x4,%eax
 83fb41a:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fb41d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fb420:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fb425:	8b 00                	mov    (%eax),%eax
 83fb427:	89 c2                	mov    %eax,%edx
 83fb429:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb42c:	c1 e0 04             	shl    $0x4,%eax
 83fb42f:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb432:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb435:	2d d8 00 00 00       	sub    $0xd8,%eax
 83fb43a:	8b 00                	mov    (%eax),%eax
 83fb43c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fb443:	00 
 83fb444:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fb448:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fb44c:	89 04 24             	mov    %eax,(%esp)
 83fb44f:	e8 00 e7 ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fb454:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fb458:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb45b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fb45e:	0f 9c c0             	setl   %al
 83fb461:	84 c0                	test   %al,%al
 83fb463:	0f 85 64 ff ff ff    	jne    83fb3cd <_ZN8WongWork8EventMuz19ArrangeMuzEventItemEjj+0x263>
 83fb469:	81 c4 f4 00 00 00    	add    $0xf4,%esp
 83fb46f:	5b                   	pop    %ebx
 83fb470:	5d                   	pop    %ebp
 83fb471:	c3                   	ret

```

```c
// WongWork::EventMuz::ArrangeMuzEventItem @ 0x83fb16a

/* WongWork::EventMuz::ArrangeMuzEventItem(unsigned int, unsigned int) */

void WongWork::EventMuz::ArrangeMuzEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e8 [40];
  uint local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  cMyTrace local_30 [16];
  undefined4 local_20;
  MySQL *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_20 = 10;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_muz_entry where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    local_14 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_1c), local_14 < uVar3 &&
           (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      MySQL::get_int(local_1c,0,&local_34);
      MySQL::get_int(local_1c,1,(int *)&local_38);
      MySQL::get_int(local_1c,2,(int *)&local_3c);
      MySQL::get_int(local_1c,3,(int *)&local_40);
      MySQL::get_int(local_1c,4,&local_44);
      MySQL::get_int(local_1c,5,(int *)&local_48);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e8[local_18 * 4] = local_34;
        auStack_e8[local_18 * 4 + 2] = local_40;
        auStack_e8[local_18 * 4 + 3] = local_48;
        auStack_e8[local_18 * 4 + 1] = local_3c;
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventMuzInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],5);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventMuz::ArrangeMuzEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x1ce,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventMuz::ArrangeMuzEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyGetMuzItem

```asm
// === 083fb047 WongWork::EventMuz::CheckAlreadyGetMuzItem  [0x083fb047-0x83fb104] ===
 83fb047:	55                   	push   %ebp
 83fb048:	89 e5                	mov    %esp,%ebp
 83fb04a:	83 ec 28             	sub    $0x28,%esp
 83fb04d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb052:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb059:	00 
 83fb05a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb061:	00 
 83fb062:	89 04 24             	mov    %eax,(%esp)
 83fb065:	e8 d4 a1 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb06a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb06d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb074:	00 
 83fb075:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb078:	89 04 24             	mov    %eax,(%esp)
 83fb07b:	e8 cb df d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb080:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb084:	c7 44 24 04 64 63 c3 	movl   $0x8c36364,0x4(%esp)
 83fb08b:	08 
 83fb08c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb08f:	89 04 24             	mov    %eax,(%esp)
 83fb092:	e8 29 91 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb097:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb09e:	00 
 83fb09f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb0a2:	89 04 24             	mov    %eax,(%esp)
 83fb0a5:	e8 7c 92 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb0aa:	83 f0 01             	xor    $0x1,%eax
 83fb0ad:	84 c0                	test   %al,%al
 83fb0af:	74 07                	je     83fb0b8 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0x71>
 83fb0b1:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb0b6:	eb 4b                	jmp    83fb103 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xbc>
 83fb0b8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fb0bf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83fb0c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb0c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb0cd:	00 
 83fb0ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb0d1:	89 04 24             	mov    %eax,(%esp)
 83fb0d4:	e8 53 b8 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb0d9:	83 f0 01             	xor    $0x1,%eax
 83fb0dc:	84 c0                	test   %al,%al
 83fb0de:	75 07                	jne    83fb0e7 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xa0>
 83fb0e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fb0e3:	85 c0                	test   %eax,%eax
 83fb0e5:	75 07                	jne    83fb0ee <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xa7>
 83fb0e7:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb0ec:	eb 05                	jmp    83fb0f3 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xac>
 83fb0ee:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb0f3:	84 c0                	test   %al,%al
 83fb0f5:	74 07                	je     83fb0fe <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xb7>
 83fb0f7:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb0fc:	eb 05                	jmp    83fb103 <_ZN8WongWork8EventMuz22CheckAlreadyGetMuzItemEji+0xbc>
 83fb0fe:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb103:	c9                   	leave
 83fb104:	c3                   	ret

```

```c
// WongWork::EventMuz::CheckAlreadyGetMuzItem @ 0x83fb047

/* WongWork::EventMuz::CheckAlreadyGetMuzItem(unsigned int, int) */

undefined4 WongWork::EventMuz::CheckAlreadyGetMuzItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect item_check from event_muz_entry where id=%s",uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## UpdateEventMuzInfo

```asm
// === 083fb105 WongWork::EventMuz::UpdateEventMuzInfo  [0x083fb105-0x83fb169] ===
 83fb105:	55                   	push   %ebp
 83fb106:	89 e5                	mov    %esp,%ebp
 83fb108:	83 ec 28             	sub    $0x28,%esp
 83fb10b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fb110:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fb117:	00 
 83fb118:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb11f:	00 
 83fb120:	89 04 24             	mov    %eax,(%esp)
 83fb123:	e8 16 a1 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fb128:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb12b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb132:	00 
 83fb133:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb136:	89 04 24             	mov    %eax,(%esp)
 83fb139:	e8 0d df d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb13e:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb142:	c7 44 24 04 98 63 c3 	movl   $0x8c36398,0x4(%esp)
 83fb149:	08 
 83fb14a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb14d:	89 04 24             	mov    %eax,(%esp)
 83fb150:	e8 6b 90 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb155:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb15c:	00 
 83fb15d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb160:	89 04 24             	mov    %eax,(%esp)
 83fb163:	e8 be 91 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb168:	c9                   	leave
 83fb169:	c3                   	ret

```

```c
// WongWork::EventMuz::UpdateEventMuzInfo @ 0x83fb105

/* WongWork::EventMuz::UpdateEventMuzInfo(unsigned int, int) */

void WongWork::EventMuz::UpdateEventMuzInfo(uint param_1,int param_2)

{
  MySQL *this;
  undefined4 uVar1;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(this,"upDate event_muz_entry set item_check=unix_timestamp(now()) where id=%s",
                   uVar1);
  MySQL::exec(this,true);
  return;
}

```


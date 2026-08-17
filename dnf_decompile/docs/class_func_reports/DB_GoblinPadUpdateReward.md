# DB_GoblinPadUpdateReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842413c DB_GoblinPadUpdateReward::dispatch  [0x0842413c-0x8424451] ===
 842413c:	55                   	push   %ebp
 842413d:	89 e5                	mov    %esp,%ebp
 842413f:	53                   	push   %ebx
 8424140:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 8424146:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842414b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8424152:	00 
 8424153:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 842415a:	00 
 842415b:	89 04 24             	mov    %eax,(%esp)
 842415e:	e8 db 10 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8424163:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8424166:	8b 45 14             	mov    0x14(%ebp),%eax
 8424169:	89 04 24             	mov    %eax,(%esp)
 842416c:	e8 bf dc 02 00       	call   8451e30 <_ZN6Stream12GetOutBufferI24SIG_GOBLIN_UPDATE_REWARDEEPT_v>
 8424171:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8424174:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424177:	8b 00                	mov    (%eax),%eax
 8424179:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8424180:	00 
 8424181:	89 04 24             	mov    %eax,(%esp)
 8424184:	e8 c2 4e ce ff       	call   810904b <_Z14NumberToStringji>
 8424189:	89 44 24 08          	mov    %eax,0x8(%esp)
 842418d:	c7 44 24 04 18 da c4 	movl   $0x8c4da18,0x4(%esp)
 8424194:	08 
 8424195:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8424198:	89 04 24             	mov    %eax,(%esp)
 842419b:	e8 20 00 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84241a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84241a7:	00 
 84241a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84241ab:	89 04 24             	mov    %eax,(%esp)
 84241ae:	e8 73 01 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84241b3:	83 f0 01             	xor    $0x1,%eax
 84241b6:	84 c0                	test   %al,%al
 84241b8:	75 21                	jne    84241db <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x9f>
 84241ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84241bd:	89 04 24             	mov    %eax,(%esp)
 84241c0:	e8 a7 e1 cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 84241c5:	85 c0                	test   %eax,%eax
 84241c7:	74 12                	je     84241db <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x9f>
 84241c9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84241cc:	89 04 24             	mov    %eax,(%esp)
 84241cf:	e8 e8 02 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84241d4:	83 f0 01             	xor    $0x1,%eax
 84241d7:	84 c0                	test   %al,%al
 84241d9:	74 07                	je     84241e2 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0xa6>
 84241db:	b8 01 00 00 00       	mov    $0x1,%eax
 84241e0:	eb 05                	jmp    84241e7 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0xab>
 84241e2:	b8 00 00 00 00       	mov    $0x0,%eax
 84241e7:	84 c0                	test   %al,%al
 84241e9:	74 0a                	je     84241f5 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0xb9>
 84241eb:	b8 00 00 00 00       	mov    $0x0,%eax
 84241f0:	e9 54 02 00 00       	jmp    8424449 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x30d>
 84241f5:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 84241fc:	00 
 84241fd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8424200:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424204:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842420b:	00 
 842420c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842420f:	89 04 24             	mov    %eax,(%esp)
 8424212:	e8 d3 8b cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8424217:	83 f0 01             	xor    $0x1,%eax
 842421a:	84 c0                	test   %al,%al
 842421c:	74 0a                	je     8424228 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0xec>
 842421e:	b8 00 00 00 00       	mov    $0x0,%eax
 8424223:	e9 21 02 00 00       	jmp    8424449 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x30d>
 8424228:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842422b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 842422f:	3c 02                	cmp    $0x2,%al
 8424231:	0f 84 28 01 00 00    	je     842435f <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x223>
 8424237:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842423a:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 842423e:	84 c0                	test   %al,%al
 8424240:	0f 84 19 01 00 00    	je     842435f <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x223>
 8424246:	c7 45 e6 00 00 00 00 	movl   $0x0,-0x1a(%ebp)
 842424d:	c7 45 ea 00 00 00 00 	movl   $0x0,-0x16(%ebp)
 8424254:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 842425a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8424261:	e8 38 7a ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8424266:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8424269:	8d 45 80             	lea    -0x80(%ebp),%eax
 842426c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8424270:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8424273:	89 04 24             	mov    %eax,(%esp)
 8424276:	e8 e5 a0 c5 ff       	call   807e360 <localtime_r@plt>
 842427b:	8d 45 80             	lea    -0x80(%ebp),%eax
 842427e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424282:	c7 44 24 08 4d da c4 	movl   $0x8c4da4d,0x8(%esp)
 8424289:	08 
 842428a:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8424291:	00 
 8424292:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8424295:	89 04 24             	mov    %eax,(%esp)
 8424298:	e8 23 99 c5 ff       	call   807dbc0 <strftime@plt>
 842429d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84242a0:	8b 00                	mov    (%eax),%eax
 84242a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84242a9:	00 
 84242aa:	89 04 24             	mov    %eax,(%esp)
 84242ad:	e8 99 4d ce ff       	call   810904b <_Z14NumberToStringji>
 84242b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84242b6:	c7 44 24 04 7c db c4 	movl   $0x8c4db7c,0x4(%esp)
 84242bd:	08 
 84242be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84242c1:	89 04 24             	mov    %eax,(%esp)
 84242c4:	e8 f7 fe fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84242c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84242d0:	00 
 84242d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84242d4:	89 04 24             	mov    %eax,(%esp)
 84242d7:	e8 4a 00 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84242dc:	83 f0 01             	xor    $0x1,%eax
 84242df:	84 c0                	test   %al,%al
 84242e1:	75 11                	jne    84242f4 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x1b8>
 84242e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84242e6:	89 04 24             	mov    %eax,(%esp)
 84242e9:	e8 22 00 fd ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84242ee:	09 d0                	or     %edx,%eax
 84242f0:	85 c0                	test   %eax,%eax
 84242f2:	75 07                	jne    84242fb <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x1bf>
 84242f4:	b8 01 00 00 00       	mov    $0x1,%eax
 84242f9:	eb 05                	jmp    8424300 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x1c4>
 84242fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8424300:	84 c0                	test   %al,%al
 8424302:	74 0a                	je     842430e <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x1d2>
 8424304:	b8 00 00 00 00       	mov    $0x0,%eax
 8424309:	e9 3b 01 00 00       	jmp    8424449 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x30d>
 842430e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424311:	8d 58 06             	lea    0x6(%eax),%ebx
 8424314:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424317:	8b 00                	mov    (%eax),%eax
 8424319:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8424320:	00 
 8424321:	89 04 24             	mov    %eax,(%esp)
 8424324:	e8 22 4d ce ff       	call   810904b <_Z14NumberToStringji>
 8424329:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 842432d:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 8424334:	00 
 8424335:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8424338:	89 54 24 10          	mov    %edx,0x10(%esp)
 842433c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8424340:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8424343:	89 44 24 08          	mov    %eax,0x8(%esp)
 8424347:	c7 44 24 04 54 da c4 	movl   $0x8c4da54,0x4(%esp)
 842434e:	08 
 842434f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8424352:	89 04 24             	mov    %eax,(%esp)
 8424355:	e8 66 fe fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842435a:	e9 a3 00 00 00       	jmp    8424402 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x2c6>
 842435f:	c7 45 d6 00 00 00 00 	movl   $0x0,-0x2a(%ebp)
 8424366:	c7 45 da 00 00 00 00 	movl   $0x0,-0x26(%ebp)
 842436d:	66 c7 45 de 00 00    	movw   $0x0,-0x22(%ebp)
 8424373:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 842437a:	e8 1f 79 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 842437f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8424382:	8d 45 80             	lea    -0x80(%ebp),%eax
 8424385:	89 44 24 04          	mov    %eax,0x4(%esp)
 8424389:	8d 45 d0             	lea    -0x30(%ebp),%eax
 842438c:	89 04 24             	mov    %eax,(%esp)
 842438f:	e8 cc 9f c5 ff       	call   807e360 <localtime_r@plt>
 8424394:	8d 45 80             	lea    -0x80(%ebp),%eax
 8424397:	89 44 24 0c          	mov    %eax,0xc(%esp)
 842439b:	c7 44 24 08 4d da c4 	movl   $0x8c4da4d,0x8(%esp)
 84243a2:	08 
 84243a3:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 84243aa:	00 
 84243ab:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 84243ae:	89 04 24             	mov    %eax,(%esp)
 84243b1:	e8 0a 98 c5 ff       	call   807dbc0 <strftime@plt>
 84243b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84243b9:	8d 58 06             	lea    0x6(%eax),%ebx
 84243bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84243bf:	8b 00                	mov    (%eax),%eax
 84243c1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84243c8:	00 
 84243c9:	89 04 24             	mov    %eax,(%esp)
 84243cc:	e8 7a 4c ce ff       	call   810904b <_Z14NumberToStringji>
 84243d1:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84243d5:	c7 44 24 14 0f 00 00 	movl   $0xf,0x14(%esp)
 84243dc:	00 
 84243dd:	8d 55 ac             	lea    -0x54(%ebp),%edx
 84243e0:	89 54 24 10          	mov    %edx,0x10(%esp)
 84243e4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84243e8:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 84243eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84243ef:	c7 44 24 04 54 da c4 	movl   $0x8c4da54,0x4(%esp)
 84243f6:	08 
 84243f7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84243fa:	89 04 24             	mov    %eax,(%esp)
 84243fd:	e8 be fd fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8424402:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8424409:	00 
 842440a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842440d:	89 04 24             	mov    %eax,(%esp)
 8424410:	e8 11 ff fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8424415:	83 f0 01             	xor    $0x1,%eax
 8424418:	84 c0                	test   %al,%al
 842441a:	75 11                	jne    842442d <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x2f1>
 842441c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842441f:	89 04 24             	mov    %eax,(%esp)
 8424422:	e8 e9 fe fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8424427:	09 d0                	or     %edx,%eax
 8424429:	85 c0                	test   %eax,%eax
 842442b:	75 07                	jne    8424434 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x2f8>
 842442d:	b8 01 00 00 00       	mov    $0x1,%eax
 8424432:	eb 05                	jmp    8424439 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x2fd>
 8424434:	b8 00 00 00 00       	mov    $0x0,%eax
 8424439:	84 c0                	test   %al,%al
 842443b:	74 07                	je     8424444 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x308>
 842443d:	b8 00 00 00 00       	mov    $0x0,%eax
 8424442:	eb 05                	jmp    8424449 <_ZN24DB_GoblinPadUpdateReward8dispatchEiiP6Stream+0x30d>
 8424444:	b8 01 00 00 00       	mov    $0x1,%eax
 8424449:	81 c4 a4 00 00 00    	add    $0xa4,%esp
 842444f:	5b                   	pop    %ebx
 8424450:	5d                   	pop    %ebp
 8424451:	c3                   	ret

```

```c
// DB_GoblinPadUpdateReward::dispatch @ 0x842413c

/* DB_GoblinPadUpdateReward::dispatch(int, int, Stream*) */

bool DB_GoblinPadUpdateReward::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_GOBLIN_UPDATE_REWARD *pSVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  tm local_84;
  char local_58 [36];
  time_t local_34;
  char local_2e [10];
  time_t local_24;
  char local_1e [10];
  MySQL *local_14;
  SIG_GOBLIN_UPDATE_REWARD *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = Stream::GetOutBuffer<SIG_GOBLIN_UPDATE_REWARD>(in_stack_00000010);
  uVar4 = NumberToString(*(uint *)local_10,0);
  MySQL::set_query(local_14,"seLect mousepass from member_mousepass where m_id=%s",uVar4);
  cVar3 = MySQL::exec(local_14,true);
  if (((cVar3 == '\x01') && (iVar5 = MySQL::get_n_rows(local_14), iVar5 != 0)) &&
     (cVar3 = MySQL::fetch(local_14), cVar3 == '\x01')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    cVar3 = MySQL::get_str(local_14,0,local_58,0x24);
    if (cVar3 != '\x01') {
      return false;
    }
    if ((local_10[4] == (SIG_GOBLIN_UPDATE_REWARD)0x2) ||
       (local_10[5] == (SIG_GOBLIN_UPDATE_REWARD)0x0)) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      local_2e[2] = '\0';
      local_2e[3] = '\0';
      local_2e[4] = '\0';
      local_2e[5] = '\0';
      local_2e[6] = '\0';
      local_2e[7] = '\0';
      local_2e[8] = '\0';
      local_2e[9] = '\0';
      local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_34,&local_84);
      strftime(local_2e,10,"%Y%m",&local_84);
      pSVar1 = local_10 + 6;
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_2e,uVar4,local_58,0xf,pSVar1);
    }
    else {
      local_1e[0] = '\0';
      local_1e[1] = '\0';
      local_1e[2] = '\0';
      local_1e[3] = '\0';
      local_1e[4] = '\0';
      local_1e[5] = '\0';
      local_1e[6] = '\0';
      local_1e[7] = '\0';
      local_1e[8] = '\0';
      local_1e[9] = '\0';
      local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(&local_24,&local_84);
      strftime(local_1e,10,"%Y%m",&local_84);
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "upDate member_mousepass set reward_time = unix_timestamp(now()) where m_id=%s and enable_flag = \'1\'"
                       ,uVar4);
      cVar3 = MySQL::exec(local_14,true);
      if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        return false;
      }
      pSVar1 = local_10 + 6;
      uVar4 = NumberToString(*(uint *)local_10,0);
      MySQL::set_query(local_14,
                       "inSert into member_mousepass_history_%s (occ_time, m_id, pre_mousepass, modify_type, ip_info, port_info) values (now(),%s,\'%s\',%d,\'%s\',\'\')"
                       ,local_1e,uVar4,local_58,0x10,pSVar1);
    }
    cVar3 = MySQL::exec(local_14,true);
    if ((cVar3 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    return !bVar2;
  }
  return false;
}

```

---

## makeRequest

```asm
// === 08424452 DB_GoblinPadUpdateReward::makeRequest  [0x08424452-0x8424569] ===
 8424452:	55                   	push   %ebp
 8424453:	89 e5                	mov    %esp,%ebp
 8424455:	56                   	push   %esi
 8424456:	53                   	push   %ebx
 8424457:	83 ec 30             	sub    $0x30,%esp
 842445a:	8b 55 0c             	mov    0xc(%ebp),%edx
 842445d:	8b 45 10             	mov    0x10(%ebp),%eax
 8424460:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 8424463:	88 45 e0             	mov    %al,-0x20(%ebp)
 8424466:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842446b:	c7 44 24 08 c3 5f 00 	movl   $0x5fc3,0x8(%esp)
 8424472:	00 
 8424473:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 842447a:	08 
 842447b:	89 04 24             	mov    %eax,(%esp)
 842447e:	e8 03 b6 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8424483:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 842448a:	00 
 842448b:	89 44 24 04          	mov    %eax,0x4(%esp)
 842448f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8424492:	89 04 24             	mov    %eax,(%esp)
 8424495:	e8 8c 47 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 842449a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842449d:	89 04 24             	mov    %eax,(%esp)
 84244a0:	e8 a1 47 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84244a5:	c7 44 24 04 2b 01 00 	movl   $0x12b,0x4(%esp)
 84244ac:	00 
 84244ad:	89 04 24             	mov    %eax,(%esp)
 84244b0:	e8 a1 47 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84244b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84244b8:	89 04 24             	mov    %eax,(%esp)
 84244bb:	e8 86 47 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84244c0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84244c7:	ff 
 84244c8:	89 04 24             	mov    %eax,(%esp)
 84244cb:	e8 86 47 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84244d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84244d3:	89 04 24             	mov    %eax,(%esp)
 84244d6:	e8 73 47 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84244db:	89 04 24             	mov    %eax,(%esp)
 84244de:	e8 a1 d9 02 00       	call   8451e84 <_ZN12CStreamGuard11GetInBufferI24SIG_GOBLIN_UPDATE_REWARDEEPT_v>
 84244e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84244e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84244e9:	8b 55 08             	mov    0x8(%ebp),%edx
 84244ec:	89 10                	mov    %edx,(%eax)
 84244ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84244f1:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 84244f5:	88 50 04             	mov    %dl,0x4(%eax)
 84244f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84244fb:	0f b6 55 e0          	movzbl -0x20(%ebp),%edx
 84244ff:	88 50 05             	mov    %dl,0x5(%eax)
 8424502:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8424505:	8d 50 06             	lea    0x6(%eax),%edx
 8424508:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 842450f:	00 
 8424510:	8b 45 14             	mov    0x14(%ebp),%eax
 8424513:	89 44 24 04          	mov    %eax,0x4(%esp)
 8424517:	89 14 24             	mov    %edx,(%esp)
 842451a:	e8 b1 93 c5 ff       	call   807d8d0 <strncpy@plt>
 842451f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8424524:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8424527:	89 54 24 08          	mov    %edx,0x8(%esp)
 842452b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8424532:	00 
 8424533:	89 04 24             	mov    %eax,(%esp)
 8424536:	e8 a3 ca 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 842453b:	eb 1b                	jmp    8424558 <_ZN24DB_GoblinPadUpdateReward11makeRequestEjcbPc+0x106>
 842453d:	89 d3                	mov    %edx,%ebx
 842453f:	89 c6                	mov    %eax,%esi
 8424541:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8424544:	89 04 24             	mov    %eax,(%esp)
 8424547:	e8 86 83 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842454c:	89 f0                	mov    %esi,%eax
 842454e:	89 da                	mov    %ebx,%edx
 8424550:	89 04 24             	mov    %eax,(%esp)
 8424553:	e8 f8 f1 6b 00       	call   8ae3750 <_Unwind_Resume>
 8424558:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842455b:	89 04 24             	mov    %eax,(%esp)
 842455e:	e8 6f 83 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8424563:	83 c4 30             	add    $0x30,%esp
 8424566:	5b                   	pop    %ebx
 8424567:	5e                   	pop    %esi
 8424568:	5d                   	pop    %ebp
 8424569:	c3                   	ret

```

```c
// DB_GoblinPadUpdateReward::makeRequest @ 0x8424452

/* DB_GoblinPadUpdateReward::makeRequest(unsigned int, char, bool, char*) */

void DB_GoblinPadUpdateReward::makeRequest(uint param_1,char param_2,bool param_3,char *param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_GOBLIN_UPDATE_REWARD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5fc3);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084244b0 to 0842453a has its CatchHandler @ 0842453d */
  CStreamGuard::operator<<(pCVar2,299);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_UPDATE_REWARD>(pCVar2);
  *(uint *)local_10 = param_1;
  local_10[4] = (SIG_GOBLIN_UPDATE_REWARD)param_2;
  local_10[5] = (SIG_GOBLIN_UPDATE_REWARD)param_3;
  strncpy((char *)(local_10 + 6),param_4,0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```


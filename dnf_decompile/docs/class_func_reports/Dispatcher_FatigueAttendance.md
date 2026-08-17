# Dispatcher_FatigueAttendance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081db310 Dispatcher_FatigueAttendance::check_error  [0x081db310-0x81db391] ===
 81db310:	55                   	push   %ebp
 81db311:	89 e5                	mov    %esp,%ebp
 81db313:	83 ec 28             	sub    $0x28,%esp
 81db316:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81db31a:	75 07                	jne    81db323 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x13>
 81db31c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81db321:	eb 6d                	jmp    81db390 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x80>
 81db323:	8b 45 10             	mov    0x10(%ebp),%eax
 81db326:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81db329:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db32c:	89 04 24             	mov    %eax,(%esp)
 81db32f:	e8 fe 50 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81db334:	85 c0                	test   %eax,%eax
 81db336:	0f 94 c0             	sete   %al
 81db339:	84 c0                	test   %al,%al
 81db33b:	74 07                	je     81db344 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x34>
 81db33d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81db342:	eb 4c                	jmp    81db390 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x80>
 81db344:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db347:	89 04 24             	mov    %eax,(%esp)
 81db34a:	e8 3d f0 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81db34f:	83 f8 03             	cmp    $0x3,%eax
 81db352:	0f 95 c0             	setne  %al
 81db355:	84 c0                	test   %al,%al
 81db357:	74 07                	je     81db360 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x50>
 81db359:	b8 63 00 00 00       	mov    $0x63,%eax
 81db35e:	eb 30                	jmp    81db390 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x80>
 81db360:	e8 36 0e ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db365:	89 04 24             	mov    %eax,(%esp)
 81db368:	e8 f5 57 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db36d:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 81db374:	00 
 81db375:	89 04 24             	mov    %eax,(%esp)
 81db378:	e8 b9 06 f3 ff       	call   810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>
 81db37d:	83 f0 01             	xor    $0x1,%eax
 81db380:	84 c0                	test   %al,%al
 81db382:	74 07                	je     81db38b <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x7b>
 81db384:	b8 07 00 00 00       	mov    $0x7,%eax
 81db389:	eb 05                	jmp    81db390 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE+0x80>
 81db38b:	b8 00 00 00 00       	mov    $0x0,%eax
 81db390:	c9                   	leave
 81db391:	c3                   	ret

```

```c
// Dispatcher_FatigueAttendance::check_error @ 0x81db310

/* Dispatcher_FatigueAttendance::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_FatigueAttendance::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 3) {
        this = (CDataManager *)G_CDataManager();
        this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
        cVar1 = EventClassify::CEventScriptMng::is_eventing(this_00,0x56);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 7;
        }
      }
      else {
        uVar2 = 99;
      }
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081daffa Dispatcher_FatigueAttendance::process  [0x081daffa-0x81db30f] ===
 81daffa:	55                   	push   %ebp
 81daffb:	89 e5                	mov    %esp,%ebp
 81daffd:	56                   	push   %esi
 81daffe:	53                   	push   %ebx
 81dafff:	83 ec 40             	sub    $0x40,%esp
 81db002:	8b 45 14             	mov    0x14(%ebp),%eax
 81db005:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81db008:	8b 45 10             	mov    0x10(%ebp),%eax
 81db00b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81db00e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81db011:	8b 50 0d             	mov    0xd(%eax),%edx
 81db014:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db017:	89 50 08             	mov    %edx,0x8(%eax)
 81db01a:	8b 45 10             	mov    0x10(%ebp),%eax
 81db01d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db021:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db024:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db028:	8b 45 08             	mov    0x8(%ebp),%eax
 81db02b:	89 04 24             	mov    %eax,(%esp)
 81db02e:	e8 dd 02 00 00       	call   81db310 <_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE>
 81db033:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81db036:	89 42 04             	mov    %eax,0x4(%edx)
 81db039:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db03c:	8b 40 04             	mov    0x4(%eax),%eax
 81db03f:	85 c0                	test   %eax,%eax
 81db041:	7e 0a                	jle    81db04d <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x53>
 81db043:	b8 00 00 00 00       	mov    $0x0,%eax
 81db048:	e9 bb 02 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db04d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db050:	8b 40 04             	mov    0x4(%eax),%eax
 81db053:	85 c0                	test   %eax,%eax
 81db055:	79 2b                	jns    81db082 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x88>
 81db057:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db05a:	8b 40 04             	mov    0x4(%eax),%eax
 81db05d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81db064:	00 
 81db065:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db069:	c7 44 24 04 40 22 bd 	movl   $0x8bd2240,0x4(%esp)
 81db070:	08 
 81db071:	c7 04 24 c5 49 00 00 	movl   $0x49c5,(%esp)
 81db078:	e8 5a 58 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81db07d:	e9 86 02 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db082:	e8 14 11 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db087:	89 04 24             	mov    %eax,(%esp)
 81db08a:	e8 d3 5a f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db08f:	89 04 24             	mov    %eax,(%esp)
 81db092:	e8 33 16 f3 ff       	call   810c6ca <_ZN13EventClassify15CEventScriptMng18get_today_time_dayEv>
 81db097:	88 45 df             	mov    %al,-0x21(%ebp)
 81db09a:	e8 fc 10 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db09f:	89 04 24             	mov    %eax,(%esp)
 81db0a2:	e8 bb 5a f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db0a7:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 81db0ae:	00 
 81db0af:	89 04 24             	mov    %eax,(%esp)
 81db0b2:	e8 01 17 f3 ff       	call   810c7b8 <_ZN13EventClassify15CEventScriptMng15get_record_typeEi>
 81db0b7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81db0ba:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81db0bd:	89 04 24             	mov    %eax,(%esp)
 81db0c0:	e8 c9 ab fd ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 81db0c5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81db0c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db0cc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81db0cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db0d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db0d6:	89 04 24             	mov    %eax,(%esp)
 81db0d9:	e8 2e 24 4b 00       	call   868d50c <_ZN5CUser24get_ingame_event_historyEiRSt4pairIiiE>
 81db0de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81db0e1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81db0e4:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81db0e8:	8d 50 ff             	lea    -0x1(%eax),%edx
 81db0eb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81db0ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db0f2:	89 04 24             	mov    %eax,(%esp)
 81db0f5:	e8 34 72 6b 00       	call   889232e <_Z13isSetBit_Uintji>
 81db0fa:	84 c0                	test   %al,%al
 81db0fc:	74 14                	je     81db112 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x118>
 81db0fe:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db101:	c7 40 04 12 00 00 00 	movl   $0x12,0x4(%eax)
 81db108:	b8 00 00 00 00       	mov    $0x0,%eax
 81db10d:	e9 f6 01 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db112:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81db116:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db11a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db11d:	89 04 24             	mov    %eax,(%esp)
 81db120:	e8 d9 22 4b 00       	call   868d3fe <_ZN5CUser24get_server_fatigue_countEh>
 81db125:	0f bf d8             	movswl %ax,%ebx
 81db128:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81db12c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db130:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db133:	89 04 24             	mov    %eax,(%esp)
 81db136:	e8 89 23 4b 00       	call   868d4c4 <_ZN5CUser20get_fatigue_count_dbEi>
 81db13b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81db13e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81db141:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81db148:	e8 4e 10 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db14d:	89 04 24             	mov    %eax,(%esp)
 81db150:	e8 0d 5a f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db155:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 81db15c:	00 
 81db15d:	89 04 24             	mov    %eax,(%esp)
 81db160:	e8 05 08 f3 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 81db165:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81db168:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81db16c:	75 0a                	jne    81db178 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81db16e:	b8 00 00 00 00       	mov    $0x0,%eax
 81db173:	e9 90 01 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db178:	e8 1e 10 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db17d:	89 04 24             	mov    %eax,(%esp)
 81db180:	e8 dd 59 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db185:	89 04 24             	mov    %eax,(%esp)
 81db188:	e8 49 15 f3 ff       	call   810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>
 81db18d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81db190:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db193:	89 04 24             	mov    %eax,(%esp)
 81db196:	e8 f9 fe f2 ff       	call   810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>
 81db19b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81db19e:	7f 10                	jg     81db1b0 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x1b6>
 81db1a0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db1a3:	89 04 24             	mov    %eax,(%esp)
 81db1a6:	e8 f5 fe f2 ff       	call   810b0a0 <_ZN13EventClassify12CEventEntity18get_event_end_timeEv>
 81db1ab:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 81db1ae:	7d 07                	jge    81db1b7 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x1bd>
 81db1b0:	b8 01 00 00 00       	mov    $0x1,%eax
 81db1b5:	eb 05                	jmp    81db1bc <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x1c2>
 81db1b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81db1bc:	84 c0                	test   %al,%al
 81db1be:	74 14                	je     81db1d4 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x1da>
 81db1c0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db1c3:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 81db1ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81db1cf:	e9 34 01 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db1d4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db1d7:	89 04 24             	mov    %eax,(%esp)
 81db1da:	e8 09 36 f3 ff       	call   810e7e8 <_ZN13EventClassify11CAttendance21get_fatigue_conditionEv>
 81db1df:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81db1e2:	0f 9f c0             	setg   %al
 81db1e5:	84 c0                	test   %al,%al
 81db1e7:	74 14                	je     81db1fd <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x203>
 81db1e9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db1ec:	c7 40 04 16 00 00 00 	movl   $0x16,0x4(%eax)
 81db1f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81db1f8:	e9 0b 01 00 00       	jmp    81db308 <_ZN28Dispatcher_FatigueAttendance7processEP5CUserR8MSG_BASER9ParamBase+0x30e>
 81db1fd:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 81db201:	83 e8 01             	sub    $0x1,%eax
 81db204:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db208:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81db20f:	00 
 81db210:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81db213:	89 04 24             	mov    %eax,(%esp)
 81db216:	e8 bc 70 6b 00       	call   88922d7 <_Z11setBit_UintRjbi>
 81db21b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81db21e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81db225:	00 
 81db226:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db22a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81db22d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db231:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db234:	89 04 24             	mov    %eax,(%esp)
 81db237:	e8 44 23 4b 00       	call   868d580 <_ZN5CUser24set_ingame_event_historyEiii>
 81db23c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81db23f:	89 c2                	mov    %eax,%edx
 81db241:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db244:	89 50 0c             	mov    %edx,0xc(%eax)
 81db247:	e8 4f 0f ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db24c:	89 04 24             	mov    %eax,(%esp)
 81db24f:	e8 0e 59 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db254:	89 04 24             	mov    %eax,(%esp)
 81db257:	e8 7a 14 f3 ff       	call   810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>
 81db25c:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81db25f:	89 42 10             	mov    %eax,0x10(%edx)
 81db262:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81db265:	8b 70 10             	mov    0x10(%eax),%esi
 81db268:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db26b:	89 04 24             	mov    %eax,(%esp)
 81db26e:	e8 21 fe f2 ff       	call   810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>
 81db273:	89 c3                	mov    %eax,%ebx
 81db275:	e8 21 0f ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db27a:	89 04 24             	mov    %eax,(%esp)
 81db27d:	e8 e0 58 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db282:	89 74 24 08          	mov    %esi,0x8(%esp)
 81db286:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81db28a:	89 04 24             	mov    %eax,(%esp)
 81db28d:	e8 e2 16 f3 ff       	call   810c974 <_ZN13EventClassify15CEventScriptMng12get_pass_dayEii>
 81db292:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81db295:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81db298:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db29c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db29f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db2a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db2a6:	89 04 24             	mov    %eax,(%esp)
 81db2a9:	e8 ca 35 f3 ff       	call   810e878 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri>
 81db2ae:	e8 e8 0e ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81db2b3:	89 04 24             	mov    %eax,(%esp)
 81db2b6:	e8 a7 58 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81db2bb:	8b 55 0c             	mov    0xc(%ebp),%edx
 81db2be:	89 54 24 04          	mov    %edx,0x4(%esp)
 81db2c2:	89 04 24             	mov    %eax,(%esp)
 81db2c5:	e8 64 15 f3 ff       	call   810c82e <_ZN13EventClassify15CEventScriptMng29process_update_ingame_historyEP5CUser>
 81db2ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db2cd:	89 04 24             	mov    %eax,(%esp)
 81db2d0:	e8 93 24 4b 00       	call   868d768 <_ZN5CUser33reset_ingame_event_history_updateEv>
 81db2d5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db2d8:	89 04 24             	mov    %eax,(%esp)
 81db2db:	e8 16 35 f3 ff       	call   810e7f6 <_ZN13EventClassify11CAttendance23get_final_day_conditionEv>
 81db2e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81db2e3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81db2e6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81db2e9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81db2ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 81db2f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db2f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db2f8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81db2fb:	89 04 24             	mov    %eax,(%esp)
 81db2fe:	e8 bd 36 f3 ff       	call   810e9c0 <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii>
 81db303:	b8 00 00 00 00       	mov    $0x0,%eax
 81db308:	83 c4 40             	add    $0x40,%esp
 81db30b:	5b                   	pop    %ebx
 81db30c:	5e                   	pop    %esi
 81db30d:	5d                   	pop    %ebp
 81db30e:	c3                   	ret
 81db30f:	90                   	nop

```

```c
// Dispatcher_FatigueAttendance::process @ 0x81daffa

/* Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_FatigueAttendance::process
          (Dispatcher_FatigueAttendance *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  CDataManager *pCVar5;
  CEventScriptMng *pCVar6;
  int iVar7;
  int iVar8;
  uint local_3c;
  uint local_38 [2];
  ParamBase *local_30;
  MSG_BASE *local_2c;
  byte local_25;
  int local_24;
  int local_20;
  CEventEntity *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_30 = param_3;
  local_2c = param_2;
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0xd);
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_30 + 4) = uVar4;
  if (0 < *(int *)(local_30 + 4)) {
    return 0;
  }
  if (*(int *)(local_30 + 4) < 0) {
    uVar4 = LineFunc(0x49c5,
                     "virtual int Dispatcher_FatigueAttendance::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,*(int *)(local_30 + 4),0);
    return uVar4;
  }
  pCVar5 = (CDataManager *)G_CDataManager();
  pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
  local_25 = EventClassify::CEventScriptMng::get_today_time_day(pCVar6);
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar7 = CDataManager::get_event_script_mng(pCVar5);
  local_24 = EventClassify::CEventScriptMng::get_record_type(iVar7);
  std::pair<int,int>::pair((pair<int,int> *)local_38);
  CUser::get_ingame_event_history(param_1,local_24,(pair *)local_38);
  local_3c = local_38[0];
  cVar2 = isSetBit_Uint(local_38[0],local_25 - 1);
  if (cVar2 != '\0') {
    *(undefined4 *)(local_30 + 4) = 0x12;
    return 0;
  }
  sVar3 = CUser::get_server_fatigue_count((uchar)param_1);
  local_20 = CUser::get_fatigue_count_db(param_1,(uint)local_25);
  local_20 = sVar3 + local_20;
  local_1c = (CEventEntity *)0x0;
  pCVar5 = (CDataManager *)G_CDataManager();
  iVar7 = CDataManager::get_event_script_mng(pCVar5);
  local_1c = (CEventEntity *)EventClassify::CEventScriptMng::get_event_entity(iVar7);
  if (local_1c != (CEventEntity *)0x0) {
    pCVar5 = (CDataManager *)G_CDataManager();
    pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
    local_18 = EventClassify::CEventScriptMng::get_today_time(pCVar6);
    iVar7 = EventClassify::CEventEntity::get_event_start_time(local_1c);
    if ((local_18 < iVar7) ||
       (iVar7 = EventClassify::CEventEntity::get_event_end_time(local_1c), iVar7 < local_18)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(undefined4 *)(local_30 + 4) = 7;
    }
    else {
      iVar7 = EventClassify::CAttendance::get_fatigue_condition((CAttendance *)local_1c);
      if (local_20 < iVar7) {
        *(undefined4 *)(local_30 + 4) = 0x16;
      }
      else {
        setBit_Uint(&local_3c,true,local_25 - 1);
        CUser::set_ingame_event_history(param_1,local_24,local_3c,0);
        *(uint *)(local_30 + 0xc) = local_3c;
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        uVar4 = EventClassify::CEventScriptMng::get_today_time(pCVar6);
        *(undefined4 *)(local_30 + 0x10) = uVar4;
        iVar7 = *(int *)(local_30 + 0x10);
        iVar8 = EventClassify::CEventEntity::get_event_start_time(local_1c);
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        local_14 = EventClassify::CEventScriptMng::get_pass_day(pCVar6,iVar8,iVar7);
        EventClassify::CAttendance::send_attend_reward_item
                  ((CAttendance *)local_1c,param_1,local_14);
        pCVar5 = (CDataManager *)G_CDataManager();
        pCVar6 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar5);
        EventClassify::CEventScriptMng::process_update_ingame_history(pCVar6,param_1);
        CUser::reset_ingame_event_history_update(param_1);
        local_10 = EventClassify::CAttendance::get_final_day_condition((CAttendance *)local_1c);
        EventClassify::CAttendance::send_attend_final_rward_item
                  ((CAttendance *)local_1c,param_1,local_3c,local_10);
      }
    }
    return 0;
  }
  return 0;
}

```

---

## read

```asm
// === 081dafa4 Dispatcher_FatigueAttendance::read  [0x081dafa4-0x81daff9] ===
 81dafa4:	55                   	push   %ebp
 81dafa5:	89 e5                	mov    %esp,%ebp
 81dafa7:	83 ec 28             	sub    $0x28,%esp
 81dafaa:	8b 45 10             	mov    0x10(%ebp),%eax
 81dafad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dafb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dafb3:	83 c0 0d             	add    $0xd,%eax
 81dafb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dafba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dafbd:	89 04 24             	mov    %eax,(%esp)
 81dafc0:	e8 2b 21 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81dafc5:	83 f0 01             	xor    $0x1,%eax
 81dafc8:	84 c0                	test   %al,%al
 81dafca:	74 26                	je     81daff2 <_ZN28Dispatcher_FatigueAttendance4readER9PacketBufR8MSG_BASE+0x4e>
 81dafcc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dafd3:	00 
 81dafd4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dafdb:	00 
 81dafdc:	c7 44 24 04 a0 22 bd 	movl   $0x8bd22a0,0x4(%esp)
 81dafe3:	08 
 81dafe4:	c7 04 24 b3 49 00 00 	movl   $0x49b3,(%esp)
 81dafeb:	e8 e7 58 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81daff0:	eb 05                	jmp    81daff7 <_ZN28Dispatcher_FatigueAttendance4readER9PacketBufR8MSG_BASE+0x53>
 81daff2:	b8 00 00 00 00       	mov    $0x0,%eax
 81daff7:	c9                   	leave
 81daff8:	c3                   	ret
 81daff9:	90                   	nop

```

```c
// Dispatcher_FatigueAttendance::read @ 0x81dafa4

/* Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_FatigueAttendance::read
          (Dispatcher_FatigueAttendance *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x49b3,"virtual int Dispatcher_FatigueAttendance::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081db392 Dispatcher_FatigueAttendance::send  [0x081db392-0x81db4c3] ===
 81db392:	55                   	push   %ebp
 81db393:	89 e5                	mov    %esp,%ebp
 81db395:	56                   	push   %esi
 81db396:	53                   	push   %ebx
 81db397:	83 ec 20             	sub    $0x20,%esp
 81db39a:	8b 45 10             	mov    0x10(%ebp),%eax
 81db39d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81db3a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db3a3:	89 04 24             	mov    %eax,(%esp)
 81db3a6:	e8 a1 29 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81db3ab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db3ae:	89 04 24             	mov    %eax,(%esp)
 81db3b1:	e8 30 05 ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81db3b6:	c7 44 24 08 ad 01 00 	movl   $0x1ad,0x8(%esp)
 81db3bd:	00 
 81db3be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81db3c5:	00 
 81db3c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db3c9:	89 04 24             	mov    %eax,(%esp)
 81db3cc:	e8 2b 05 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81db3d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db3d4:	8b 40 04             	mov    0x4(%eax),%eax
 81db3d7:	85 c0                	test   %eax,%eax
 81db3d9:	75 54                	jne    81db42f <_ZN28Dispatcher_FatigueAttendance4sendEP5CUserR9ParamBase+0x9d>
 81db3db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81db3e2:	00 
 81db3e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db3e6:	89 04 24             	mov    %eax,(%esp)
 81db3e9:	e8 32 05 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81db3ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db3f1:	8b 40 08             	mov    0x8(%eax),%eax
 81db3f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db3f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db3fb:	89 04 24             	mov    %eax,(%esp)
 81db3fe:	e8 a1 ea ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81db403:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db406:	8b 40 0c             	mov    0xc(%eax),%eax
 81db409:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db40d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db410:	89 04 24             	mov    %eax,(%esp)
 81db413:	e8 24 05 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81db418:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db41b:	8b 40 10             	mov    0x10(%eax),%eax
 81db41e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db422:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db425:	89 04 24             	mov    %eax,(%esp)
 81db428:	e8 0f 05 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81db42d:	eb 40                	jmp    81db46f <_ZN28Dispatcher_FatigueAttendance4sendEP5CUserR9ParamBase+0xdd>
 81db42f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81db436:	00 
 81db437:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db43a:	89 04 24             	mov    %eax,(%esp)
 81db43d:	e8 de 04 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81db442:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db445:	8b 40 04             	mov    0x4(%eax),%eax
 81db448:	0f be c0             	movsbl %al,%eax
 81db44b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db44f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db452:	89 04 24             	mov    %eax,(%esp)
 81db455:	e8 c6 04 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81db45a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81db45d:	8b 40 08             	mov    0x8(%eax),%eax
 81db460:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db464:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db467:	89 04 24             	mov    %eax,(%esp)
 81db46a:	e8 35 ea ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81db46f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81db476:	00 
 81db477:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db47a:	89 04 24             	mov    %eax,(%esp)
 81db47d:	e8 d6 04 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81db482:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db485:	89 44 24 04          	mov    %eax,0x4(%esp)
 81db489:	8b 45 0c             	mov    0xc(%ebp),%eax
 81db48c:	89 04 24             	mov    %eax,(%esp)
 81db48f:	e8 26 d1 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81db494:	eb 1b                	jmp    81db4b1 <_ZN28Dispatcher_FatigueAttendance4sendEP5CUserR9ParamBase+0x11f>
 81db496:	89 d3                	mov    %edx,%ebx
 81db498:	89 c6                	mov    %eax,%esi
 81db49a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db49d:	89 04 24             	mov    %eax,(%esp)
 81db4a0:	e8 db 29 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81db4a5:	89 f0                	mov    %esi,%eax
 81db4a7:	89 da                	mov    %ebx,%edx
 81db4a9:	89 04 24             	mov    %eax,(%esp)
 81db4ac:	e8 9f 82 90 00       	call   8ae3750 <_Unwind_Resume>
 81db4b1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81db4b4:	89 04 24             	mov    %eax,(%esp)
 81db4b7:	e8 c4 29 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81db4bc:	83 c4 20             	add    $0x20,%esp
 81db4bf:	5b                   	pop    %ebx
 81db4c0:	5e                   	pop    %esi
 81db4c1:	5d                   	pop    %ebp
 81db4c2:	c3                   	ret
 81db4c3:	90                   	nop

```

```c
// Dispatcher_FatigueAttendance::send @ 0x81db392

/* Dispatcher_FatigueAttendance::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_FatigueAttendance::send
          (Dispatcher_FatigueAttendance *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081db3b1 to 081db493 has its CatchHandler @ 081db496 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ad);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 4));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```


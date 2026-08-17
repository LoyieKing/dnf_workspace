# ARAD__DISPATCHER__Arad_DB_kAradEventItemLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081851dc ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch  [0x081851dc-0x81853b1] ===
 81851dc:	55                   	push   %ebp
 81851dd:	89 e5                	mov    %esp,%ebp
 81851df:	56                   	push   %esi
 81851e0:	53                   	push   %ebx
 81851e1:	83 ec 30             	sub    $0x30,%esp
 81851e4:	8b 45 14             	mov    0x14(%ebp),%eax
 81851e7:	89 04 24             	mov    %eax,(%esp)
 81851ea:	e8 e5 1c 00 00       	call   8186ed4 <_ZN6Stream12GetOutBufferIN4arad19SigAradEventItemLogEEEPT_v>
 81851ef:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81851f2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81851f6:	75 36                	jne    818522e <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x52>
 81851f8:	c7 44 24 10 a0 f7 b8 	movl   $0x8b8f7a0,0x10(%esp)
 81851ff:	08 
 8185200:	c7 44 24 0c 43 06 00 	movl   $0x643,0xc(%esp)
 8185207:	00 
 8185208:	c7 44 24 08 60 0c b9 	movl   $0x8b90c60,0x8(%esp)
 818520f:	08 
 8185210:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185217:	08 
 8185218:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818521f:	e8 e6 e9 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185224:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185229:	e9 7a 01 00 00       	jmp    81853a8 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x1cc>
 818522e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8185233:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818523a:	00 
 818523b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8185242:	00 
 8185243:	89 04 24             	mov    %eax,(%esp)
 8185246:	e8 f3 ff 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818524b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 818524e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8185252:	75 2c                	jne    8185280 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0xa4>
 8185254:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818525b:	e8 a0 05 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185260:	89 c2                	mov    %eax,%edx
 8185262:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 8185268:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818526f:	00 
 8185270:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8185277:	09 
 8185278:	89 04 24             	mov    %eax,(%esp)
 818527b:	e8 d0 f9 59 00       	call   8724c50 <__cxa_throw>
 8185280:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185283:	8b 58 04             	mov    0x4(%eax),%ebx
 8185286:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185289:	8b 08                	mov    (%eax),%ecx
 818528b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818528e:	8b 50 0c             	mov    0xc(%eax),%edx
 8185291:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185294:	8b 40 08             	mov    0x8(%eax),%eax
 8185297:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 818529b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 818529f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81852a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81852a7:	c7 44 24 04 04 f8 b8 	movl   $0x8b8f804,0x4(%esp)
 81852ae:	08 
 81852af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81852b2:	89 04 24             	mov    %eax,(%esp)
 81852b5:	e8 06 ef 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81852ba:	83 f0 01             	xor    $0x1,%eax
 81852bd:	84 c0                	test   %al,%al
 81852bf:	74 2c                	je     81852ed <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x111>
 81852c1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81852c8:	e8 33 05 5a 00       	call   8725800 <__cxa_allocate_exception>
 81852cd:	89 c2                	mov    %eax,%edx
 81852cf:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 81852d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81852dc:	00 
 81852dd:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81852e4:	09 
 81852e5:	89 04 24             	mov    %eax,(%esp)
 81852e8:	e8 63 f9 59 00       	call   8724c50 <__cxa_throw>
 81852ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81852f4:	00 
 81852f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81852f8:	89 04 24             	mov    %eax,(%esp)
 81852fb:	e8 26 f0 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8185300:	83 f0 01             	xor    $0x1,%eax
 8185303:	84 c0                	test   %al,%al
 8185305:	0f 84 98 00 00 00    	je     81853a3 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x1c7>
 818530b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185312:	e8 e9 04 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185317:	89 c2                	mov    %eax,%edx
 8185319:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 818531f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185326:	00 
 8185327:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818532e:	09 
 818532f:	89 04 24             	mov    %eax,(%esp)
 8185332:	e8 19 f9 59 00       	call   8724c50 <__cxa_throw>
 8185337:	83 fa 01             	cmp    $0x1,%edx
 818533a:	74 08                	je     8185344 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x168>
 818533c:	89 04 24             	mov    %eax,(%esp)
 818533f:	e8 0c e4 95 00       	call   8ae3750 <_Unwind_Resume>
 8185344:	89 04 24             	mov    %eax,(%esp)
 8185347:	e8 94 09 5a 00       	call   8725ce0 <__cxa_begin_catch>
 818534c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818534f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185352:	89 44 24 14          	mov    %eax,0x14(%esp)
 8185356:	c7 44 24 10 88 f8 b8 	movl   $0x8b8f888,0x10(%esp)
 818535d:	08 
 818535e:	c7 44 24 0c 61 06 00 	movl   $0x661,0xc(%esp)
 8185365:	00 
 8185366:	c7 44 24 08 60 0c b9 	movl   $0x8b90c60,0x8(%esp)
 818536d:	08 
 818536e:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185375:	08 
 8185376:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818537d:	e8 88 e8 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185382:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185387:	e8 a4 08 5a 00       	call   8725c30 <__cxa_end_catch>
 818538c:	eb 1a                	jmp    81853a8 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLog8dispatchEiiP6Stream+0x1cc>
 818538e:	89 d3                	mov    %edx,%ebx
 8185390:	89 c6                	mov    %eax,%esi
 8185392:	e8 99 08 5a 00       	call   8725c30 <__cxa_end_catch>
 8185397:	89 f0                	mov    %esi,%eax
 8185399:	89 da                	mov    %ebx,%edx
 818539b:	89 04 24             	mov    %eax,(%esp)
 818539e:	e8 ad e3 95 00       	call   8ae3750 <_Unwind_Resume>
 81853a3:	bb 01 00 00 00       	mov    $0x1,%ebx
 81853a8:	89 d8                	mov    %ebx,%eax
 81853aa:	83 c4 30             	add    $0x30,%esp
 81853ad:	5b                   	pop    %ebx
 81853ae:	5e                   	pop    %esi
 81853af:	5d                   	pop    %ebp
 81853b0:	c3                   	ret
 81853b1:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch @ 0x81851dc

/* ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradEventItemLog *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradEventItemLog>(in_stack_00000010);
  if (pSVar2 == (SigAradEventItemLog *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAradEventItemLog::dispatch(int, int, Stream*)"
               ,0x643,"EVENT ITEM LOG, SigAradEventItemLog is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185246 to 08185336 has its CatchHandler @ 08185337 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " inSert into log_arad_event_stat ( occ_time, m_id, charac_no, item_id, item_cnt )  values ( now(), %u, %u, %u, %d ) "
                             ,*(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                             *(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4));
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar4 = 1;
  }
  return uVar4;
}

```


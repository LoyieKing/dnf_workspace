# ARAD__DISPATCHER__Arad_DB_kSetCharacCreateTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081853b2 ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch  [0x081853b2-0x8185573] ===
 81853b2:	55                   	push   %ebp
 81853b3:	89 e5                	mov    %esp,%ebp
 81853b5:	56                   	push   %esi
 81853b6:	53                   	push   %ebx
 81853b7:	83 ec 30             	sub    $0x30,%esp
 81853ba:	8b 45 14             	mov    0x14(%ebp),%eax
 81853bd:	89 04 24             	mov    %eax,(%esp)
 81853c0:	e8 63 1b 00 00       	call   8186f28 <_ZN6Stream12GetOutBufferIN4arad22SigSetCharacCreateTimeEEEPT_v>
 81853c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81853c8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81853cc:	75 36                	jne    8185404 <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0x52>
 81853ce:	c7 44 24 10 d0 f8 b8 	movl   $0x8b8f8d0,0x10(%esp)
 81853d5:	08 
 81853d6:	c7 44 24 0c 73 07 00 	movl   $0x773,0xc(%esp)
 81853dd:	00 
 81853de:	c7 44 24 08 00 0c b9 	movl   $0x8b90c00,0x8(%esp)
 81853e5:	08 
 81853e6:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81853ed:	08 
 81853ee:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81853f5:	e8 10 e8 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81853fa:	bb 00 00 00 00       	mov    $0x0,%ebx
 81853ff:	e9 66 01 00 00       	jmp    818556a <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0x1b8>
 8185404:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8185409:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185410:	00 
 8185411:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8185418:	00 
 8185419:	89 04 24             	mov    %eax,(%esp)
 818541c:	e8 1d fe 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8185421:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8185424:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8185428:	75 2c                	jne    8185456 <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0xa4>
 818542a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8185431:	e8 ca 03 5a 00       	call   8725800 <__cxa_allocate_exception>
 8185436:	89 c2                	mov    %eax,%edx
 8185438:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 818543e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8185445:	00 
 8185446:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818544d:	09 
 818544e:	89 04 24             	mov    %eax,(%esp)
 8185451:	e8 fa f7 59 00       	call   8724c50 <__cxa_throw>
 8185456:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8185459:	8b 10                	mov    (%eax),%edx
 818545b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818545e:	8b 40 04             	mov    0x4(%eax),%eax
 8185461:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8185465:	89 44 24 08          	mov    %eax,0x8(%esp)
 8185469:	c7 44 24 04 f0 f8 b8 	movl   $0x8b8f8f0,0x4(%esp)
 8185470:	08 
 8185471:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8185474:	89 04 24             	mov    %eax,(%esp)
 8185477:	e8 44 ed 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818547c:	83 f0 01             	xor    $0x1,%eax
 818547f:	84 c0                	test   %al,%al
 8185481:	74 2c                	je     81854af <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0xfd>
 8185483:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818548a:	e8 71 03 5a 00       	call   8725800 <__cxa_allocate_exception>
 818548f:	89 c2                	mov    %eax,%edx
 8185491:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 8185497:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818549e:	00 
 818549f:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81854a6:	09 
 81854a7:	89 04 24             	mov    %eax,(%esp)
 81854aa:	e8 a1 f7 59 00       	call   8724c50 <__cxa_throw>
 81854af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81854b6:	00 
 81854b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81854ba:	89 04 24             	mov    %eax,(%esp)
 81854bd:	e8 64 ee 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 81854c2:	83 f0 01             	xor    $0x1,%eax
 81854c5:	84 c0                	test   %al,%al
 81854c7:	0f 84 98 00 00 00    	je     8185565 <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0x1b3>
 81854cd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81854d4:	e8 27 03 5a 00       	call   8725800 <__cxa_allocate_exception>
 81854d9:	89 c2                	mov    %eax,%edx
 81854db:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 81854e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81854e8:	00 
 81854e9:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81854f0:	09 
 81854f1:	89 04 24             	mov    %eax,(%esp)
 81854f4:	e8 57 f7 59 00       	call   8724c50 <__cxa_throw>
 81854f9:	83 fa 01             	cmp    $0x1,%edx
 81854fc:	74 08                	je     8185506 <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0x154>
 81854fe:	89 04 24             	mov    %eax,(%esp)
 8185501:	e8 4a e2 95 00       	call   8ae3750 <_Unwind_Resume>
 8185506:	89 04 24             	mov    %eax,(%esp)
 8185509:	e8 d2 07 5a 00       	call   8725ce0 <__cxa_begin_catch>
 818550e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8185511:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185514:	89 44 24 14          	mov    %eax,0x14(%esp)
 8185518:	c7 44 24 10 40 f9 b8 	movl   $0x8b8f940,0x10(%esp)
 818551f:	08 
 8185520:	c7 44 24 0c 88 07 00 	movl   $0x788,0xc(%esp)
 8185527:	00 
 8185528:	c7 44 24 08 00 0c b9 	movl   $0x8b90c00,0x8(%esp)
 818552f:	08 
 8185530:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8185537:	08 
 8185538:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818553f:	e8 c6 e6 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8185544:	bb 00 00 00 00       	mov    $0x0,%ebx
 8185549:	e8 e2 06 5a 00       	call   8725c30 <__cxa_end_catch>
 818554e:	eb 1a                	jmp    818556a <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTime8dispatchEiiP6Stream+0x1b8>
 8185550:	89 d3                	mov    %edx,%ebx
 8185552:	89 c6                	mov    %eax,%esi
 8185554:	e8 d7 06 5a 00       	call   8725c30 <__cxa_end_catch>
 8185559:	89 f0                	mov    %esi,%eax
 818555b:	89 da                	mov    %ebx,%edx
 818555d:	89 04 24             	mov    %eax,(%esp)
 8185560:	e8 eb e1 95 00       	call   8ae3750 <_Unwind_Resume>
 8185565:	bb 01 00 00 00       	mov    $0x1,%ebx
 818556a:	89 d8                	mov    %ebx,%eax
 818556c:	83 c4 30             	add    $0x30,%esp
 818556f:	5b                   	pop    %ebx
 8185570:	5e                   	pop    %esi
 8185571:	5d                   	pop    %ebp
 8185572:	c3                   	ret
 8185573:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch @ 0x81853b2

/* ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigSetCharacCreateTime *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigSetCharacCreateTime>(in_stack_00000010);
  if (pSVar2 == (SigSetCharacCreateTime *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSetCharacCreateTime::dispatch(int, int, Stream*)"
               ,0x773,"SigSetCharacCreateTime is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818541c to 081854f8 has its CatchHandler @ 081854f9 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " upDate charac_info set create_time = from_unixtime(%u)  where charac_no = %u "
                             ,*(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
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


# ARAD__DISPATCHER__Arad_DB_kAvatarEnduranceSave

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 081862d0 ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch  [0x081862d0-0x8186491] ===
 81862d0:	55                   	push   %ebp
 81862d1:	89 e5                	mov    %esp,%ebp
 81862d3:	56                   	push   %esi
 81862d4:	53                   	push   %ebx
 81862d5:	83 ec 30             	sub    $0x30,%esp
 81862d8:	8b 45 14             	mov    0x14(%ebp),%eax
 81862db:	89 04 24             	mov    %eax,(%esp)
 81862de:	e8 e9 0d 00 00       	call   81870cc <_ZN6Stream12GetOutBufferIN4arad26SigAradAvatarEnduranceSaveEEEPT_v>
 81862e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81862e6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81862ea:	75 36                	jne    8186322 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0x52>
 81862ec:	c7 44 24 10 38 fc b8 	movl   $0x8b8fc38,0x10(%esp)
 81862f3:	08 
 81862f4:	c7 44 24 0c 76 08 00 	movl   $0x876,0xc(%esp)
 81862fb:	00 
 81862fc:	c7 44 24 08 c0 09 b9 	movl   $0x8b909c0,0x8(%esp)
 8186303:	08 
 8186304:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 818630b:	08 
 818630c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8186313:	e8 f2 d8 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8186318:	bb 00 00 00 00       	mov    $0x0,%ebx
 818631d:	e9 66 01 00 00       	jmp    8186488 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0x1b8>
 8186322:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8186327:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818632e:	00 
 818632f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8186336:	00 
 8186337:	89 04 24             	mov    %eax,(%esp)
 818633a:	e8 ff ee 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 818633f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8186342:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8186346:	75 2c                	jne    8186374 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0xa4>
 8186348:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818634f:	e8 ac f4 59 00       	call   8725800 <__cxa_allocate_exception>
 8186354:	89 c2                	mov    %eax,%edx
 8186356:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 818635c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186363:	00 
 8186364:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818636b:	09 
 818636c:	89 04 24             	mov    %eax,(%esp)
 818636f:	e8 dc e8 59 00       	call   8724c50 <__cxa_throw>
 8186374:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8186377:	8b 10                	mov    (%eax),%edx
 8186379:	8b 45 ec             	mov    -0x14(%ebp),%eax
 818637c:	8b 40 04             	mov    0x4(%eax),%eax
 818637f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8186383:	89 44 24 08          	mov    %eax,0x8(%esp)
 8186387:	c7 44 24 04 5c fc b8 	movl   $0x8b8fc5c,0x4(%esp)
 818638e:	08 
 818638f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8186392:	89 04 24             	mov    %eax,(%esp)
 8186395:	e8 26 de 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 818639a:	83 f0 01             	xor    $0x1,%eax
 818639d:	84 c0                	test   %al,%al
 818639f:	74 2c                	je     81863cd <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0xfd>
 81863a1:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81863a8:	e8 53 f4 59 00       	call   8725800 <__cxa_allocate_exception>
 81863ad:	89 c2                	mov    %eax,%edx
 81863af:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 81863b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81863bc:	00 
 81863bd:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81863c4:	09 
 81863c5:	89 04 24             	mov    %eax,(%esp)
 81863c8:	e8 83 e8 59 00       	call   8724c50 <__cxa_throw>
 81863cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81863d4:	00 
 81863d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81863d8:	89 04 24             	mov    %eax,(%esp)
 81863db:	e8 46 df 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 81863e0:	83 f0 01             	xor    $0x1,%eax
 81863e3:	84 c0                	test   %al,%al
 81863e5:	0f 84 98 00 00 00    	je     8186483 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0x1b3>
 81863eb:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81863f2:	e8 09 f4 59 00       	call   8725800 <__cxa_allocate_exception>
 81863f7:	89 c2                	mov    %eax,%edx
 81863f9:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 81863ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186406:	00 
 8186407:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 818640e:	09 
 818640f:	89 04 24             	mov    %eax,(%esp)
 8186412:	e8 39 e8 59 00       	call   8724c50 <__cxa_throw>
 8186417:	83 fa 01             	cmp    $0x1,%edx
 818641a:	74 08                	je     8186424 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0x154>
 818641c:	89 04 24             	mov    %eax,(%esp)
 818641f:	e8 2c d3 95 00       	call   8ae3750 <_Unwind_Resume>
 8186424:	89 04 24             	mov    %eax,(%esp)
 8186427:	e8 b4 f8 59 00       	call   8725ce0 <__cxa_begin_catch>
 818642c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818642f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8186432:	89 44 24 14          	mov    %eax,0x14(%esp)
 8186436:	c7 44 24 10 98 fc b8 	movl   $0x8b8fc98,0x10(%esp)
 818643d:	08 
 818643e:	c7 44 24 0c 8a 08 00 	movl   $0x88a,0xc(%esp)
 8186445:	00 
 8186446:	c7 44 24 08 c0 09 b9 	movl   $0x8b909c0,0x8(%esp)
 818644d:	08 
 818644e:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 8186455:	08 
 8186456:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 818645d:	e8 a8 d7 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8186462:	bb 00 00 00 00       	mov    $0x0,%ebx
 8186467:	e8 c4 f7 59 00       	call   8725c30 <__cxa_end_catch>
 818646c:	eb 1a                	jmp    8186488 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSave8dispatchEiiP6Stream+0x1b8>
 818646e:	89 d3                	mov    %edx,%ebx
 8186470:	89 c6                	mov    %eax,%esi
 8186472:	e8 b9 f7 59 00       	call   8725c30 <__cxa_end_catch>
 8186477:	89 f0                	mov    %esi,%eax
 8186479:	89 da                	mov    %ebx,%edx
 818647b:	89 04 24             	mov    %eax,(%esp)
 818647e:	e8 cd d2 95 00       	call   8ae3750 <_Unwind_Resume>
 8186483:	bb 01 00 00 00       	mov    $0x1,%ebx
 8186488:	89 d8                	mov    %ebx,%eax
 818648a:	83 c4 30             	add    $0x30,%esp
 818648d:	5b                   	pop    %ebx
 818648e:	5e                   	pop    %esi
 818648f:	5d                   	pop    %ebp
 8186490:	c3                   	ret
 8186491:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch @ 0x81862d0

/* ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradAvatarEnduranceSave *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradAvatarEnduranceSave>(in_stack_00000010);
  if (pSVar2 == (SigAradAvatarEnduranceSave *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAvatarEnduranceSave::dispatch(int, int, Stream*)"
               ,0x876,"SigAradAvatarEnduranceSave is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818633a to 08186416 has its CatchHandler @ 08186417 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,"upDate user_items set emblem_endurance=%d where ui_id=%d",
                             *(undefined4 *)(pSVar2 + 4),*(undefined4 *)pSVar2);
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


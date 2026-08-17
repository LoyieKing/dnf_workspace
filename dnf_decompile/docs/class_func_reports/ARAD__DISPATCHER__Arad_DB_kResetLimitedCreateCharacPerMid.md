# ARAD__DISPATCHER__Arad_DB_kResetLimitedCreateCharacPerMid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08186492 ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch  [0x08186492-0x81865f5] ===
 8186492:	55                   	push   %ebp
 8186493:	89 e5                	mov    %esp,%ebp
 8186495:	56                   	push   %esi
 8186496:	53                   	push   %ebx
 8186497:	83 ec 30             	sub    $0x30,%esp
 818649a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 818649f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81864a6:	00 
 81864a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81864ae:	00 
 81864af:	89 04 24             	mov    %eax,(%esp)
 81864b2:	e8 87 ed 26 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 81864b7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81864ba:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81864be:	75 2c                	jne    81864ec <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream+0x5a>
 81864c0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81864c7:	e8 34 f3 59 00       	call   8725800 <__cxa_allocate_exception>
 81864cc:	89 c2                	mov    %eax,%edx
 81864ce:	c7 02 f7 f7 b8 08    	movl   $0x8b8f7f7,(%edx)
 81864d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81864db:	00 
 81864dc:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 81864e3:	09 
 81864e4:	89 04 24             	mov    %eax,(%esp)
 81864e7:	e8 64 e7 59 00       	call   8724c50 <__cxa_throw>
 81864ec:	c7 44 24 04 d0 fc b8 	movl   $0x8b8fcd0,0x4(%esp)
 81864f3:	08 
 81864f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81864f7:	89 04 24             	mov    %eax,(%esp)
 81864fa:	e8 c1 dc 26 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81864ff:	83 f0 01             	xor    $0x1,%eax
 8186502:	84 c0                	test   %al,%al
 8186504:	74 2c                	je     8186532 <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream+0xa0>
 8186506:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 818650d:	e8 ee f2 59 00       	call   8725800 <__cxa_allocate_exception>
 8186512:	89 c2                	mov    %eax,%edx
 8186514:	c7 02 79 f8 b8 08    	movl   $0x8b8f879,(%edx)
 818651a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8186521:	00 
 8186522:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8186529:	09 
 818652a:	89 04 24             	mov    %eax,(%esp)
 818652d:	e8 1e e7 59 00       	call   8724c50 <__cxa_throw>
 8186532:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8186539:	00 
 818653a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 818653d:	89 04 24             	mov    %eax,(%esp)
 8186540:	e8 e1 dd 26 00       	call   83f4326 <_ZN5MySQL4execEb>
 8186545:	83 f0 01             	xor    $0x1,%eax
 8186548:	84 c0                	test   %al,%al
 818654a:	0f 84 98 00 00 00    	je     81865e8 <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream+0x156>
 8186550:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8186557:	e8 a4 f2 59 00       	call   8725800 <__cxa_allocate_exception>
 818655c:	89 c2                	mov    %eax,%edx
 818655e:	c7 02 83 f8 b8 08    	movl   $0x8b8f883,(%edx)
 8186564:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 818656b:	00 
 818656c:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 8186573:	09 
 8186574:	89 04 24             	mov    %eax,(%esp)
 8186577:	e8 d4 e6 59 00       	call   8724c50 <__cxa_throw>
 818657c:	83 fa 01             	cmp    $0x1,%edx
 818657f:	74 08                	je     8186589 <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream+0xf7>
 8186581:	89 04 24             	mov    %eax,(%esp)
 8186584:	e8 c7 d1 95 00       	call   8ae3750 <_Unwind_Resume>
 8186589:	89 04 24             	mov    %eax,(%esp)
 818658c:	e8 4f f7 59 00       	call   8725ce0 <__cxa_begin_catch>
 8186591:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8186594:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8186597:	89 44 24 14          	mov    %eax,0x14(%esp)
 818659b:	c7 44 24 10 f0 fc b8 	movl   $0x8b8fcf0,0x10(%esp)
 81865a2:	08 
 81865a3:	c7 44 24 0c e1 08 00 	movl   $0x8e1,0xc(%esp)
 81865aa:	00 
 81865ab:	c7 44 24 08 40 09 b9 	movl   $0x8b90940,0x8(%esp)
 81865b2:	08 
 81865b3:	c7 44 24 04 d0 f7 b8 	movl   $0x8b8f7d0,0x4(%esp)
 81865ba:	08 
 81865bb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81865c2:	e8 43 d6 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81865c7:	bb 00 00 00 00       	mov    $0x0,%ebx
 81865cc:	e8 5f f6 59 00       	call   8725c30 <__cxa_end_catch>
 81865d1:	eb 1a                	jmp    81865ed <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMid8dispatchEiiP6Stream+0x15b>
 81865d3:	89 d3                	mov    %edx,%ebx
 81865d5:	89 c6                	mov    %eax,%esi
 81865d7:	e8 54 f6 59 00       	call   8725c30 <__cxa_end_catch>
 81865dc:	89 f0                	mov    %esi,%eax
 81865de:	89 da                	mov    %ebx,%edx
 81865e0:	89 04 24             	mov    %eax,(%esp)
 81865e3:	e8 68 d1 95 00       	call   8ae3750 <_Unwind_Resume>
 81865e8:	bb 01 00 00 00       	mov    $0x1,%ebx
 81865ed:	89 d8                	mov    %ebx,%eax
 81865ef:	83 c4 30             	add    $0x30,%esp
 81865f2:	5b                   	pop    %ebx
 81865f3:	5e                   	pop    %esi
 81865f4:	5d                   	pop    %ebp
 81865f5:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch @ 0x8186492

/* ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kResetLimitedCreateCharacPerMid::dispatch
          (int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  undefined4 *puVar2;
  
                    /* try { // try from 081864b2 to 0818657b has its CatchHandler @ 0818657c */
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::set_query(this,"truncate limit_create_character");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "set_query";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  cVar1 = MySQL::exec(this,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}

```


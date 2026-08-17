# Taiwan__BalancePointQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## BalancePointQuery

```asm
// === 08174290 Taiwan::BalancePointQuery::BalancePointQuery  [0x08174290-0x81742bb] ===
 8174290:	55                   	push   %ebp
 8174291:	89 e5                	mov    %esp,%ebp
 8174293:	8b 45 08             	mov    0x8(%ebp),%eax
 8174296:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174299:	89 10                	mov    %edx,(%eax)
 817429b:	8b 45 08             	mov    0x8(%ebp),%eax
 817429e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81742a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81742a8:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 81742af:	8b 45 08             	mov    0x8(%ebp),%eax
 81742b2:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 81742b9:	5d                   	pop    %ebp
 81742ba:	c3                   	ret
 81742bb:	90                   	nop

```

```c
// Taiwan::BalancePointQuery::BalancePointQuery @ 0x8174290

/* Taiwan::BalancePointQuery::BalancePointQuery(char const*) */

void __thiscall Taiwan::BalancePointQuery::BalancePointQuery(BalancePointQuery *this,char *param_1)

{
  *(char **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## execQuery

```asm
// === 081742e0 Taiwan::BalancePointQuery::execQuery  [0x081742e0-0x81742fb] ===
 81742e0:	55                   	push   %ebp
 81742e1:	89 e5                	mov    %esp,%ebp
 81742e3:	83 ec 18             	sub    $0x18,%esp
 81742e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81742ed:	00 
 81742ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81742f1:	89 04 24             	mov    %eax,(%esp)
 81742f4:	e8 2d 00 28 00       	call   83f4326 <_ZN5MySQL4execEb>
 81742f9:	c9                   	leave
 81742fa:	c3                   	ret
 81742fb:	90                   	nop

```

```c
// Taiwan::BalancePointQuery::execQuery @ 0x81742e0

/* Taiwan::BalancePointQuery::execQuery(MySQL&) */

void __thiscall Taiwan::BalancePointQuery::execQuery(BalancePointQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 081742fc Taiwan::BalancePointQuery::getResult  [0x081742fc-0x817454b] ===
 81742fc:	55                   	push   %ebp
 81742fd:	89 e5                	mov    %esp,%ebp
 81742ff:	56                   	push   %esi
 8174300:	53                   	push   %ebx
 8174301:	83 ec 30             	sub    $0x30,%esp
 8174304:	c7 44 24 04 e4 48 b8 	movl   $0x8b848e4,0x4(%esp)
 817430b:	08 
 817430c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817430f:	89 04 24             	mov    %eax,(%esp)
 8174312:	e8 a9 fe 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174317:	83 f0 01             	xor    $0x1,%eax
 817431a:	84 c0                	test   %al,%al
 817431c:	74 2c                	je     817434a <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x4e>
 817431e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174325:	e8 d6 14 5b 00       	call   8725800 <__cxa_allocate_exception>
 817432a:	89 c2                	mov    %eax,%edx
 817432c:	c7 02 4b 01 00 00    	movl   $0x14b,(%edx)
 8174332:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174339:	00 
 817433a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174341:	09 
 8174342:	89 04 24             	mov    %eax,(%esp)
 8174345:	e8 06 09 5b 00       	call   8724c50 <__cxa_throw>
 817434a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174351:	00 
 8174352:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174355:	89 04 24             	mov    %eax,(%esp)
 8174358:	e8 c9 ff 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 817435d:	83 f0 01             	xor    $0x1,%eax
 8174360:	84 c0                	test   %al,%al
 8174362:	74 2c                	je     8174390 <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x94>
 8174364:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817436b:	e8 90 14 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174370:	89 c2                	mov    %eax,%edx
 8174372:	c7 02 4e 01 00 00    	movl   $0x14e,(%edx)
 8174378:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817437f:	00 
 8174380:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174387:	09 
 8174388:	89 04 24             	mov    %eax,(%esp)
 817438b:	e8 c0 08 5b 00       	call   8724c50 <__cxa_throw>
 8174390:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174393:	89 04 24             	mov    %eax,(%esp)
 8174396:	e8 21 01 28 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 817439b:	83 f0 01             	xor    $0x1,%eax
 817439e:	84 c0                	test   %al,%al
 81743a0:	74 2c                	je     81743ce <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0xd2>
 81743a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81743a9:	e8 52 14 5b 00       	call   8725800 <__cxa_allocate_exception>
 81743ae:	89 c2                	mov    %eax,%edx
 81743b0:	c7 02 51 01 00 00    	movl   $0x151,(%edx)
 81743b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81743bd:	00 
 81743be:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81743c5:	09 
 81743c6:	89 04 24             	mov    %eax,(%esp)
 81743c9:	e8 82 08 5b 00       	call   8724c50 <__cxa_throw>
 81743ce:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81743d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81743d8:	8d 50 04             	lea    0x4(%eax),%edx
 81743db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81743de:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81743e2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81743e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81743ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81743ed:	89 04 24             	mov    %eax,(%esp)
 81743f0:	e8 b9 de f6 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 81743f5:	83 f0 01             	xor    $0x1,%eax
 81743f8:	84 c0                	test   %al,%al
 81743fa:	74 2c                	je     8174428 <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x12c>
 81743fc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174403:	e8 f8 13 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174408:	89 c2                	mov    %eax,%edx
 817440a:	c7 02 55 01 00 00    	movl   $0x155,(%edx)
 8174410:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174417:	00 
 8174418:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817441f:	09 
 8174420:	89 04 24             	mov    %eax,(%esp)
 8174423:	e8 28 08 5b 00       	call   8724c50 <__cxa_throw>
 8174428:	8b 45 08             	mov    0x8(%ebp),%eax
 817442b:	8d 50 08             	lea    0x8(%eax),%edx
 817442e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8174431:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8174435:	89 54 24 08          	mov    %edx,0x8(%esp)
 8174439:	89 44 24 04          	mov    %eax,0x4(%esp)
 817443d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174440:	89 04 24             	mov    %eax,(%esp)
 8174443:	e8 66 de f6 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8174448:	83 f0 01             	xor    $0x1,%eax
 817444b:	84 c0                	test   %al,%al
 817444d:	74 2c                	je     817447b <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x17f>
 817444f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174456:	e8 a5 13 5b 00       	call   8725800 <__cxa_allocate_exception>
 817445b:	89 c2                	mov    %eax,%edx
 817445d:	c7 02 58 01 00 00    	movl   $0x158,(%edx)
 8174463:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817446a:	00 
 817446b:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174472:	09 
 8174473:	89 04 24             	mov    %eax,(%esp)
 8174476:	e8 d5 07 5b 00       	call   8724c50 <__cxa_throw>
 817447b:	8b 45 08             	mov    0x8(%ebp),%eax
 817447e:	8d 50 0c             	lea    0xc(%eax),%edx
 8174481:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8174484:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8174488:	89 54 24 08          	mov    %edx,0x8(%esp)
 817448c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8174490:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174493:	89 04 24             	mov    %eax,(%esp)
 8174496:	e8 91 24 fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 817449b:	83 f0 01             	xor    $0x1,%eax
 817449e:	84 c0                	test   %al,%al
 81744a0:	74 2c                	je     81744ce <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x1d2>
 81744a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81744a9:	e8 52 13 5b 00       	call   8725800 <__cxa_allocate_exception>
 81744ae:	89 c2                	mov    %eax,%edx
 81744b0:	c7 02 5b 01 00 00    	movl   $0x15b,(%edx)
 81744b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81744bd:	00 
 81744be:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81744c5:	09 
 81744c6:	89 04 24             	mov    %eax,(%esp)
 81744c9:	e8 82 07 5b 00       	call   8724c50 <__cxa_throw>
 81744ce:	bb 01 00 00 00       	mov    $0x1,%ebx
 81744d3:	eb 6e                	jmp    8174543 <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x247>
 81744d5:	83 fa 01             	cmp    $0x1,%edx
 81744d8:	74 08                	je     81744e2 <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x1e6>
 81744da:	89 04 24             	mov    %eax,(%esp)
 81744dd:	e8 6e f2 96 00       	call   8ae3750 <_Unwind_Resume>
 81744e2:	89 04 24             	mov    %eax,(%esp)
 81744e5:	e8 f6 17 5b 00       	call   8725ce0 <__cxa_begin_catch>
 81744ea:	8b 00                	mov    (%eax),%eax
 81744ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81744ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81744f2:	89 44 24 14          	mov    %eax,0x14(%esp)
 81744f6:	c7 44 24 10 4c 48 b8 	movl   $0x8b8484c,0x10(%esp)
 81744fd:	08 
 81744fe:	c7 44 24 0c 61 01 00 	movl   $0x161,0xc(%esp)
 8174505:	00 
 8174506:	c7 44 24 08 8c 52 b8 	movl   $0x8b8528c,0x8(%esp)
 817450d:	08 
 817450e:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8174515:	08 
 8174516:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817451d:	e8 e8 f6 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8174522:	bb 00 00 00 00       	mov    $0x0,%ebx
 8174527:	e8 04 17 5b 00       	call   8725c30 <__cxa_end_catch>
 817452c:	eb 15                	jmp    8174543 <_ZN6Taiwan17BalancePointQuery9getResultER5MySQL+0x247>
 817452e:	89 d3                	mov    %edx,%ebx
 8174530:	89 c6                	mov    %eax,%esi
 8174532:	e8 f9 16 5b 00       	call   8725c30 <__cxa_end_catch>
 8174537:	89 f0                	mov    %esi,%eax
 8174539:	89 da                	mov    %ebx,%edx
 817453b:	89 04 24             	mov    %eax,(%esp)
 817453e:	e8 0d f2 96 00       	call   8ae3750 <_Unwind_Resume>
 8174543:	89 d8                	mov    %ebx,%eax
 8174545:	83 c4 30             	add    $0x30,%esp
 8174548:	5b                   	pop    %ebx
 8174549:	5e                   	pop    %esi
 817454a:	5d                   	pop    %ebp
 817454b:	c3                   	ret

```

```c
// Taiwan::BalancePointQuery::getResult @ 0x81742fc

/* Taiwan::BalancePointQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::BalancePointQuery::getResult(BalancePointQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174312 to 081744cd has its CatchHandler @ 081744d5 */
  cVar1 = MySQL::set_query(param_1,"select @out_balance, @out_point, @out_result");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x14b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x14e;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x151;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(uint *)(this + 4));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x155;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(uint *)(this + 8));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x158;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,2,(int *)(this + 0xc));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x15b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 081742bc Taiwan::BalancePointQuery::setQuery  [0x081742bc-0x81742df] ===
 81742bc:	55                   	push   %ebp
 81742bd:	89 e5                	mov    %esp,%ebp
 81742bf:	83 ec 18             	sub    $0x18,%esp
 81742c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81742c5:	8b 00                	mov    (%eax),%eax
 81742c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 81742cb:	c7 44 24 04 a0 48 b8 	movl   $0x8b848a0,0x4(%esp)
 81742d2:	08 
 81742d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81742d6:	89 04 24             	mov    %eax,(%esp)
 81742d9:	e8 e2 fe 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81742de:	c9                   	leave
 81742df:	c3                   	ret

```

```c
// Taiwan::BalancePointQuery::setQuery @ 0x81742bc

/* Taiwan::BalancePointQuery::setQuery(MySQL&) */

void __thiscall Taiwan::BalancePointQuery::setQuery(BalancePointQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_balance_point(\'%s\', @out_balance, @out_point, @out_result)",
                   *(undefined4 *)this);
  return;
}

```


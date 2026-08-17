# Taiwan__CeraPointQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CeraPointQuery

```asm
// === 081751b6 Taiwan::CeraPointQuery::CeraPointQuery  [0x081751b6-0x8175223] ===
 81751b6:	55                   	push   %ebp
 81751b7:	89 e5                	mov    %esp,%ebp
 81751b9:	83 ec 0c             	sub    $0xc,%esp
 81751bc:	8b 4d 20             	mov    0x20(%ebp),%ecx
 81751bf:	8b 55 24             	mov    0x24(%ebp),%edx
 81751c2:	8b 45 28             	mov    0x28(%ebp),%eax
 81751c5:	88 4d fc             	mov    %cl,-0x4(%ebp)
 81751c8:	88 55 f8             	mov    %dl,-0x8(%ebp)
 81751cb:	88 45 f4             	mov    %al,-0xc(%ebp)
 81751ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81751d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81751d4:	89 10                	mov    %edx,(%eax)
 81751d6:	8b 45 08             	mov    0x8(%ebp),%eax
 81751d9:	8b 55 10             	mov    0x10(%ebp),%edx
 81751dc:	89 50 04             	mov    %edx,0x4(%eax)
 81751df:	8b 45 08             	mov    0x8(%ebp),%eax
 81751e2:	8b 55 14             	mov    0x14(%ebp),%edx
 81751e5:	89 50 08             	mov    %edx,0x8(%eax)
 81751e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81751eb:	8b 55 18             	mov    0x18(%ebp),%edx
 81751ee:	89 50 0c             	mov    %edx,0xc(%eax)
 81751f1:	8b 45 08             	mov    0x8(%ebp),%eax
 81751f4:	8b 55 1c             	mov    0x1c(%ebp),%edx
 81751f7:	89 50 10             	mov    %edx,0x10(%eax)
 81751fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81751fd:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8175201:	88 50 14             	mov    %dl,0x14(%eax)
 8175204:	8b 45 08             	mov    0x8(%ebp),%eax
 8175207:	0f b6 55 f8          	movzbl -0x8(%ebp),%edx
 817520b:	88 50 15             	mov    %dl,0x15(%eax)
 817520e:	8b 45 08             	mov    0x8(%ebp),%eax
 8175211:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8175215:	88 50 16             	mov    %dl,0x16(%eax)
 8175218:	8b 45 08             	mov    0x8(%ebp),%eax
 817521b:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8175222:	c9                   	leave
 8175223:	c3                   	ret

```

```c
// Taiwan::CeraPointQuery::CeraPointQuery @ 0x81751b6

/* Taiwan::CeraPointQuery::CeraPointQuery(char const*, char const*, char*, char*, unsigned int,
   char, char, char) */

void __thiscall
Taiwan::CeraPointQuery::CeraPointQuery
          (CeraPointQuery *this,char *param_1,char *param_2,char *param_3,char *param_4,uint param_5
          ,char param_6,char param_7,char param_8)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(char **)(this + 0xc) = param_4;
  *(uint *)(this + 0x10) = param_5;
  this[0x14] = (CeraPointQuery)param_6;
  this[0x15] = (CeraPointQuery)param_7;
  this[0x16] = (CeraPointQuery)param_8;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## execQuery

```asm
// === 081752b0 Taiwan::CeraPointQuery::execQuery  [0x081752b0-0x81752cb] ===
 81752b0:	55                   	push   %ebp
 81752b1:	89 e5                	mov    %esp,%ebp
 81752b3:	83 ec 18             	sub    $0x18,%esp
 81752b6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81752bd:	00 
 81752be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81752c1:	89 04 24             	mov    %eax,(%esp)
 81752c4:	e8 5d f0 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 81752c9:	c9                   	leave
 81752ca:	c3                   	ret
 81752cb:	90                   	nop

```

```c
// Taiwan::CeraPointQuery::execQuery @ 0x81752b0

/* Taiwan::CeraPointQuery::execQuery(MySQL&) */

void __thiscall Taiwan::CeraPointQuery::execQuery(CeraPointQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 081752cc Taiwan::CeraPointQuery::getResult  [0x081752cc-0x817546b] ===
 81752cc:	55                   	push   %ebp
 81752cd:	89 e5                	mov    %esp,%ebp
 81752cf:	56                   	push   %esi
 81752d0:	53                   	push   %ebx
 81752d1:	83 ec 30             	sub    $0x30,%esp
 81752d4:	c7 44 24 04 28 4a b8 	movl   $0x8b84a28,0x4(%esp)
 81752db:	08 
 81752dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81752df:	89 04 24             	mov    %eax,(%esp)
 81752e2:	e8 d9 ee 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81752e7:	83 f0 01             	xor    $0x1,%eax
 81752ea:	84 c0                	test   %al,%al
 81752ec:	74 2c                	je     817531a <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x4e>
 81752ee:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81752f5:	e8 06 05 5b 00       	call   8725800 <__cxa_allocate_exception>
 81752fa:	89 c2                	mov    %eax,%edx
 81752fc:	c7 02 82 02 00 00    	movl   $0x282,(%edx)
 8175302:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8175309:	00 
 817530a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8175311:	09 
 8175312:	89 04 24             	mov    %eax,(%esp)
 8175315:	e8 36 f9 5a 00       	call   8724c50 <__cxa_throw>
 817531a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8175321:	00 
 8175322:	8b 45 0c             	mov    0xc(%ebp),%eax
 8175325:	89 04 24             	mov    %eax,(%esp)
 8175328:	e8 f9 ef 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 817532d:	83 f0 01             	xor    $0x1,%eax
 8175330:	84 c0                	test   %al,%al
 8175332:	74 2c                	je     8175360 <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x94>
 8175334:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817533b:	e8 c0 04 5b 00       	call   8725800 <__cxa_allocate_exception>
 8175340:	89 c2                	mov    %eax,%edx
 8175342:	c7 02 85 02 00 00    	movl   $0x285,(%edx)
 8175348:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817534f:	00 
 8175350:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8175357:	09 
 8175358:	89 04 24             	mov    %eax,(%esp)
 817535b:	e8 f0 f8 5a 00       	call   8724c50 <__cxa_throw>
 8175360:	8b 45 0c             	mov    0xc(%ebp),%eax
 8175363:	89 04 24             	mov    %eax,(%esp)
 8175366:	e8 51 f1 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 817536b:	83 f0 01             	xor    $0x1,%eax
 817536e:	84 c0                	test   %al,%al
 8175370:	74 2c                	je     817539e <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0xd2>
 8175372:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8175379:	e8 82 04 5b 00       	call   8725800 <__cxa_allocate_exception>
 817537e:	89 c2                	mov    %eax,%edx
 8175380:	c7 02 88 02 00 00    	movl   $0x288,(%edx)
 8175386:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817538d:	00 
 817538e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8175395:	09 
 8175396:	89 04 24             	mov    %eax,(%esp)
 8175399:	e8 b2 f8 5a 00       	call   8724c50 <__cxa_throw>
 817539e:	8b 45 08             	mov    0x8(%ebp),%eax
 81753a1:	83 c0 18             	add    $0x18,%eax
 81753a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81753a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81753af:	00 
 81753b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81753b3:	89 04 24             	mov    %eax,(%esp)
 81753b6:	e8 71 15 fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 81753bb:	83 f0 01             	xor    $0x1,%eax
 81753be:	84 c0                	test   %al,%al
 81753c0:	74 2c                	je     81753ee <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x122>
 81753c2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81753c9:	e8 32 04 5b 00       	call   8725800 <__cxa_allocate_exception>
 81753ce:	89 c2                	mov    %eax,%edx
 81753d0:	c7 02 8b 02 00 00    	movl   $0x28b,(%edx)
 81753d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81753dd:	00 
 81753de:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81753e5:	09 
 81753e6:	89 04 24             	mov    %eax,(%esp)
 81753e9:	e8 62 f8 5a 00       	call   8724c50 <__cxa_throw>
 81753ee:	bb 01 00 00 00       	mov    $0x1,%ebx
 81753f3:	eb 6e                	jmp    8175463 <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x197>
 81753f5:	83 fa 01             	cmp    $0x1,%edx
 81753f8:	74 08                	je     8175402 <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x136>
 81753fa:	89 04 24             	mov    %eax,(%esp)
 81753fd:	e8 4e e3 96 00       	call   8ae3750 <_Unwind_Resume>
 8175402:	89 04 24             	mov    %eax,(%esp)
 8175405:	e8 d6 08 5b 00       	call   8725ce0 <__cxa_begin_catch>
 817540a:	8b 00                	mov    (%eax),%eax
 817540c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817540f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8175412:	89 44 24 14          	mov    %eax,0x14(%esp)
 8175416:	c7 44 24 10 78 4b b8 	movl   $0x8b84b78,0x10(%esp)
 817541d:	08 
 817541e:	c7 44 24 0c 91 02 00 	movl   $0x291,0xc(%esp)
 8175425:	00 
 8175426:	c7 44 24 08 50 52 b8 	movl   $0x8b85250,0x8(%esp)
 817542d:	08 
 817542e:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8175435:	08 
 8175436:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817543d:	e8 c8 e7 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8175442:	bb 00 00 00 00       	mov    $0x0,%ebx
 8175447:	e8 e4 07 5b 00       	call   8725c30 <__cxa_end_catch>
 817544c:	eb 15                	jmp    8175463 <_ZN6Taiwan14CeraPointQuery9getResultER5MySQL+0x197>
 817544e:	89 d3                	mov    %edx,%ebx
 8175450:	89 c6                	mov    %eax,%esi
 8175452:	e8 d9 07 5b 00       	call   8725c30 <__cxa_end_catch>
 8175457:	89 f0                	mov    %esi,%eax
 8175459:	89 da                	mov    %ebx,%edx
 817545b:	89 04 24             	mov    %eax,(%esp)
 817545e:	e8 ed e2 96 00       	call   8ae3750 <_Unwind_Resume>
 8175463:	89 d8                	mov    %ebx,%eax
 8175465:	83 c4 30             	add    $0x30,%esp
 8175468:	5b                   	pop    %ebx
 8175469:	5e                   	pop    %esi
 817546a:	5d                   	pop    %ebp
 817546b:	c3                   	ret

```

```c
// Taiwan::CeraPointQuery::getResult @ 0x81752cc

/* Taiwan::CeraPointQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::CeraPointQuery::getResult(CeraPointQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081752e2 to 081753ed has its CatchHandler @ 081753f5 */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x282;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x285;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x288;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)(this + 0x18));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x28b;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08175224 Taiwan::CeraPointQuery::setQuery  [0x08175224-0x81752af] ===
 8175224:	55                   	push   %ebp
 8175225:	89 e5                	mov    %esp,%ebp
 8175227:	57                   	push   %edi
 8175228:	56                   	push   %esi
 8175229:	53                   	push   %ebx
 817522a:	83 ec 5c             	sub    $0x5c,%esp
 817522d:	8b 45 08             	mov    0x8(%ebp),%eax
 8175230:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 8175234:	0f be c0             	movsbl %al,%eax
 8175237:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817523a:	8b 45 08             	mov    0x8(%ebp),%eax
 817523d:	8b 40 08             	mov    0x8(%eax),%eax
 8175240:	89 04 24             	mov    %eax,(%esp)
 8175243:	e8 b2 3e f9 ff       	call   81090fa <_Z14StringToNumberPKc>
 8175248:	89 c2                	mov    %eax,%edx
 817524a:	8b 45 08             	mov    0x8(%ebp),%eax
 817524d:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 8175251:	0f be f8             	movsbl %al,%edi
 8175254:	8b 45 08             	mov    0x8(%ebp),%eax
 8175257:	8b 70 10             	mov    0x10(%eax),%esi
 817525a:	8b 45 08             	mov    0x8(%ebp),%eax
 817525d:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 8175261:	0f be d8             	movsbl %al,%ebx
 8175264:	8b 45 08             	mov    0x8(%ebp),%eax
 8175267:	8b 48 04             	mov    0x4(%eax),%ecx
 817526a:	8b 45 08             	mov    0x8(%ebp),%eax
 817526d:	8b 00                	mov    (%eax),%eax
 817526f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8175272:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8175275:	89 44 24 20          	mov    %eax,0x20(%esp)
 8175279:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817527d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8175281:	89 74 24 14          	mov    %esi,0x14(%esp)
 8175285:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8175289:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 817528d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8175290:	89 44 24 08          	mov    %eax,0x8(%esp)
 8175294:	c7 44 24 04 30 4b b8 	movl   $0x8b84b30,0x4(%esp)
 817529b:	08 
 817529c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817529f:	89 04 24             	mov    %eax,(%esp)
 81752a2:	e8 19 ef 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81752a7:	83 c4 5c             	add    $0x5c,%esp
 81752aa:	5b                   	pop    %ebx
 81752ab:	5e                   	pop    %esi
 81752ac:	5f                   	pop    %edi
 81752ad:	5d                   	pop    %ebp
 81752ae:	c3                   	ret
 81752af:	90                   	nop

```

```c
// Taiwan::CeraPointQuery::setQuery @ 0x8175224

/* Taiwan::CeraPointQuery::setQuery(MySQL&) */

void __thiscall Taiwan::CeraPointQuery::setQuery(CeraPointQuery *this,MySQL *param_1)

{
  CeraPointQuery CVar1;
  undefined4 uVar2;
  
  CVar1 = this[0x15];
  uVar2 = StringToNumber(*(char **)(this + 8));
  MySQL::set_query(param_1,
                   "call usp_point_process(\'%s\', \'%s\', \'%c\', %u, %d, %d , %d, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),(int)(char)this[0x16],
                   *(undefined4 *)(this + 0x10),(int)(char)this[0x14],uVar2,(int)(char)CVar1);
  return;
}

```


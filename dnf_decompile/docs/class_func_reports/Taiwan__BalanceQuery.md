# Taiwan__BalanceQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## BalanceQuery

```asm
// === 08174030 Taiwan::BalanceQuery::BalanceQuery  [0x08174030-0x8174051] ===
 8174030:	55                   	push   %ebp
 8174031:	89 e5                	mov    %esp,%ebp
 8174033:	8b 45 08             	mov    0x8(%ebp),%eax
 8174036:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174039:	89 10                	mov    %edx,(%eax)
 817403b:	8b 45 08             	mov    0x8(%ebp),%eax
 817403e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8174045:	8b 45 08             	mov    0x8(%ebp),%eax
 8174048:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 817404f:	5d                   	pop    %ebp
 8174050:	c3                   	ret
 8174051:	90                   	nop

```

```c
// Taiwan::BalanceQuery::BalanceQuery @ 0x8174030

/* Taiwan::BalanceQuery::BalanceQuery(char const*) */

void __thiscall Taiwan::BalanceQuery::BalanceQuery(BalanceQuery *this,char *param_1)

{
  *(char **)this = param_1;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## execQuery

```asm
// === 08174076 Taiwan::BalanceQuery::execQuery  [0x08174076-0x8174091] ===
 8174076:	55                   	push   %ebp
 8174077:	89 e5                	mov    %esp,%ebp
 8174079:	83 ec 18             	sub    $0x18,%esp
 817407c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174083:	00 
 8174084:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174087:	89 04 24             	mov    %eax,(%esp)
 817408a:	e8 97 02 28 00       	call   83f4326 <_ZN5MySQL4execEb>
 817408f:	c9                   	leave
 8174090:	c3                   	ret
 8174091:	90                   	nop

```

```c
// Taiwan::BalanceQuery::execQuery @ 0x8174076

/* Taiwan::BalanceQuery::execQuery(MySQL&) */

void __thiscall Taiwan::BalanceQuery::execQuery(BalanceQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 08174092 Taiwan::BalanceQuery::getResult  [0x08174092-0x817428f] ===
 8174092:	55                   	push   %ebp
 8174093:	89 e5                	mov    %esp,%ebp
 8174095:	56                   	push   %esi
 8174096:	53                   	push   %ebx
 8174097:	83 ec 30             	sub    $0x30,%esp
 817409a:	c7 44 24 04 28 48 b8 	movl   $0x8b84828,0x4(%esp)
 81740a1:	08 
 81740a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81740a5:	89 04 24             	mov    %eax,(%esp)
 81740a8:	e8 13 01 28 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81740ad:	83 f0 01             	xor    $0x1,%eax
 81740b0:	84 c0                	test   %al,%al
 81740b2:	74 2c                	je     81740e0 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x4e>
 81740b4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81740bb:	e8 40 17 5b 00       	call   8725800 <__cxa_allocate_exception>
 81740c0:	89 c2                	mov    %eax,%edx
 81740c2:	c7 02 16 01 00 00    	movl   $0x116,(%edx)
 81740c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81740cf:	00 
 81740d0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81740d7:	09 
 81740d8:	89 04 24             	mov    %eax,(%esp)
 81740db:	e8 70 0b 5b 00       	call   8724c50 <__cxa_throw>
 81740e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81740e7:	00 
 81740e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81740eb:	89 04 24             	mov    %eax,(%esp)
 81740ee:	e8 33 02 28 00       	call   83f4326 <_ZN5MySQL4execEb>
 81740f3:	83 f0 01             	xor    $0x1,%eax
 81740f6:	84 c0                	test   %al,%al
 81740f8:	74 2c                	je     8174126 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x94>
 81740fa:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174101:	e8 fa 16 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174106:	89 c2                	mov    %eax,%edx
 8174108:	c7 02 19 01 00 00    	movl   $0x119,(%edx)
 817410e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174115:	00 
 8174116:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817411d:	09 
 817411e:	89 04 24             	mov    %eax,(%esp)
 8174121:	e8 2a 0b 5b 00       	call   8724c50 <__cxa_throw>
 8174126:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174129:	89 04 24             	mov    %eax,(%esp)
 817412c:	e8 8b 03 28 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8174131:	83 f0 01             	xor    $0x1,%eax
 8174134:	84 c0                	test   %al,%al
 8174136:	74 2c                	je     8174164 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0xd2>
 8174138:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 817413f:	e8 bc 16 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174144:	89 c2                	mov    %eax,%edx
 8174146:	c7 02 1c 01 00 00    	movl   $0x11c,(%edx)
 817414c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174153:	00 
 8174154:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817415b:	09 
 817415c:	89 04 24             	mov    %eax,(%esp)
 817415f:	e8 ec 0a 5b 00       	call   8724c50 <__cxa_throw>
 8174164:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 817416b:	8b 45 08             	mov    0x8(%ebp),%eax
 817416e:	8d 50 04             	lea    0x4(%eax),%edx
 8174171:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8174174:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8174178:	89 54 24 08          	mov    %edx,0x8(%esp)
 817417c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8174180:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174183:	89 04 24             	mov    %eax,(%esp)
 8174186:	e8 23 e1 f6 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 817418b:	83 f0 01             	xor    $0x1,%eax
 817418e:	84 c0                	test   %al,%al
 8174190:	74 2c                	je     81741be <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x12c>
 8174192:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174199:	e8 62 16 5b 00       	call   8725800 <__cxa_allocate_exception>
 817419e:	89 c2                	mov    %eax,%edx
 81741a0:	c7 02 20 01 00 00    	movl   $0x120,(%edx)
 81741a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81741ad:	00 
 81741ae:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81741b5:	09 
 81741b6:	89 04 24             	mov    %eax,(%esp)
 81741b9:	e8 92 0a 5b 00       	call   8724c50 <__cxa_throw>
 81741be:	8b 45 08             	mov    0x8(%ebp),%eax
 81741c1:	8d 50 08             	lea    0x8(%eax),%edx
 81741c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81741c7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81741cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81741cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81741d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81741d6:	89 04 24             	mov    %eax,(%esp)
 81741d9:	e8 4e 27 fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 81741de:	83 f0 01             	xor    $0x1,%eax
 81741e1:	84 c0                	test   %al,%al
 81741e3:	74 2c                	je     8174211 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x17f>
 81741e5:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81741ec:	e8 0f 16 5b 00       	call   8725800 <__cxa_allocate_exception>
 81741f1:	89 c2                	mov    %eax,%edx
 81741f3:	c7 02 23 01 00 00    	movl   $0x123,(%edx)
 81741f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174200:	00 
 8174201:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174208:	09 
 8174209:	89 04 24             	mov    %eax,(%esp)
 817420c:	e8 3f 0a 5b 00       	call   8724c50 <__cxa_throw>
 8174211:	bb 01 00 00 00       	mov    $0x1,%ebx
 8174216:	eb 6e                	jmp    8174286 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x1f4>
 8174218:	83 fa 01             	cmp    $0x1,%edx
 817421b:	74 08                	je     8174225 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x193>
 817421d:	89 04 24             	mov    %eax,(%esp)
 8174220:	e8 2b f5 96 00       	call   8ae3750 <_Unwind_Resume>
 8174225:	89 04 24             	mov    %eax,(%esp)
 8174228:	e8 b3 1a 5b 00       	call   8725ce0 <__cxa_begin_catch>
 817422d:	8b 00                	mov    (%eax),%eax
 817422f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8174232:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8174235:	89 44 24 14          	mov    %eax,0x14(%esp)
 8174239:	c7 44 24 10 4c 48 b8 	movl   $0x8b8484c,0x10(%esp)
 8174240:	08 
 8174241:	c7 44 24 0c 29 01 00 	movl   $0x129,0xc(%esp)
 8174248:	00 
 8174249:	c7 44 24 08 96 52 b8 	movl   $0x8b85296,0x8(%esp)
 8174250:	08 
 8174251:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8174258:	08 
 8174259:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8174260:	e8 a5 f9 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8174265:	bb 00 00 00 00       	mov    $0x0,%ebx
 817426a:	e8 c1 19 5b 00       	call   8725c30 <__cxa_end_catch>
 817426f:	eb 15                	jmp    8174286 <_ZN6Taiwan12BalanceQuery9getResultER5MySQL+0x1f4>
 8174271:	89 d3                	mov    %edx,%ebx
 8174273:	89 c6                	mov    %eax,%esi
 8174275:	e8 b6 19 5b 00       	call   8725c30 <__cxa_end_catch>
 817427a:	89 f0                	mov    %esi,%eax
 817427c:	89 da                	mov    %ebx,%edx
 817427e:	89 04 24             	mov    %eax,(%esp)
 8174281:	e8 ca f4 96 00       	call   8ae3750 <_Unwind_Resume>
 8174286:	89 d8                	mov    %ebx,%eax
 8174288:	83 c4 30             	add    $0x30,%esp
 817428b:	5b                   	pop    %ebx
 817428c:	5e                   	pop    %esi
 817428d:	5d                   	pop    %ebp
 817428e:	c3                   	ret
 817428f:	90                   	nop

```

```c
// Taiwan::BalanceQuery::getResult @ 0x8174092

/* Taiwan::BalanceQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::BalanceQuery::getResult(BalanceQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081740a8 to 08174210 has its CatchHandler @ 08174218 */
  cVar1 = MySQL::set_query(param_1,"select @out_balance, @out_result");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x116;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x119;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x11c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(uint *)(this + 4));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x120;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 8));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x123;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08174052 Taiwan::BalanceQuery::setQuery  [0x08174052-0x8174075] ===
 8174052:	55                   	push   %ebp
 8174053:	89 e5                	mov    %esp,%ebp
 8174055:	83 ec 18             	sub    $0x18,%esp
 8174058:	8b 45 08             	mov    0x8(%ebp),%eax
 817405b:	8b 00                	mov    (%eax),%eax
 817405d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174061:	c7 44 24 04 f4 47 b8 	movl   $0x8b847f4,0x4(%esp)
 8174068:	08 
 8174069:	8b 45 0c             	mov    0xc(%ebp),%eax
 817406c:	89 04 24             	mov    %eax,(%esp)
 817406f:	e8 4c 01 28 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174074:	c9                   	leave
 8174075:	c3                   	ret

```

```c
// Taiwan::BalanceQuery::setQuery @ 0x8174052

/* Taiwan::BalanceQuery::setQuery(MySQL&) */

void __thiscall Taiwan::BalanceQuery::setQuery(BalanceQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_balance(\'%s\', @out_balance, @out_result)",*(undefined4 *)this
                  );
  return;
}

```


# Taiwan__ChargeQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## ChargeQuery

```asm
// === 08174efe Taiwan::ChargeQuery::ChargeQuery  [0x08174efe-0x8174f51] ===
 8174efe:	55                   	push   %ebp
 8174eff:	89 e5                	mov    %esp,%ebp
 8174f01:	83 ec 28             	sub    $0x28,%esp
 8174f04:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8174f07:	88 45 f4             	mov    %al,-0xc(%ebp)
 8174f0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f0d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174f10:	89 10                	mov    %edx,(%eax)
 8174f12:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f15:	8b 55 10             	mov    0x10(%ebp),%edx
 8174f18:	89 50 04             	mov    %edx,0x4(%eax)
 8174f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f1e:	8b 55 14             	mov    0x14(%ebp),%edx
 8174f21:	89 50 08             	mov    %edx,0x8(%eax)
 8174f24:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f27:	8b 55 18             	mov    0x18(%ebp),%edx
 8174f2a:	89 50 0c             	mov    %edx,0xc(%eax)
 8174f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f30:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8174f34:	88 50 10             	mov    %dl,0x10(%eax)
 8174f37:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f3a:	83 c0 18             	add    $0x18,%eax
 8174f3d:	89 04 24             	mov    %eax,(%esp)
 8174f40:	e8 fb 05 00 00       	call   8175540 <_ZN6Taiwan15BillTransaction4initEv>
 8174f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f48:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8174f4f:	c9                   	leave
 8174f50:	c3                   	ret
 8174f51:	90                   	nop

```

```c
// Taiwan::ChargeQuery::ChargeQuery @ 0x8174efe

/* Taiwan::ChargeQuery::ChargeQuery(char const*, char const*, char const*, unsigned int, char) */

void __thiscall
Taiwan::ChargeQuery::ChargeQuery
          (ChargeQuery *this,char *param_1,char *param_2,char *param_3,uint param_4,char param_5)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(uint *)(this + 0xc) = param_4;
  this[0x10] = (ChargeQuery)param_5;
  BillTransaction::init((BillTransaction *)(this + 0x18));
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

```

---

## execQuery

```asm
// === 08174faa Taiwan::ChargeQuery::execQuery  [0x08174faa-0x8174fc5] ===
 8174faa:	55                   	push   %ebp
 8174fab:	89 e5                	mov    %esp,%ebp
 8174fad:	83 ec 18             	sub    $0x18,%esp
 8174fb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174fb7:	00 
 8174fb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174fbb:	89 04 24             	mov    %eax,(%esp)
 8174fbe:	e8 63 f3 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174fc3:	c9                   	leave
 8174fc4:	c3                   	ret
 8174fc5:	90                   	nop

```

```c
// Taiwan::ChargeQuery::execQuery @ 0x8174faa

/* Taiwan::ChargeQuery::execQuery(MySQL&) */

void __thiscall Taiwan::ChargeQuery::execQuery(ChargeQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 08174fc6 Taiwan::ChargeQuery::getResult  [0x08174fc6-0x81751b5] ===
 8174fc6:	55                   	push   %ebp
 8174fc7:	89 e5                	mov    %esp,%ebp
 8174fc9:	56                   	push   %esi
 8174fca:	53                   	push   %ebx
 8174fcb:	83 ec 30             	sub    $0x30,%esp
 8174fce:	c7 44 24 04 50 49 b8 	movl   $0x8b84950,0x4(%esp)
 8174fd5:	08 
 8174fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174fd9:	89 04 24             	mov    %eax,(%esp)
 8174fdc:	e8 df f1 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174fe1:	83 f0 01             	xor    $0x1,%eax
 8174fe4:	84 c0                	test   %al,%al
 8174fe6:	74 2c                	je     8175014 <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x4e>
 8174fe8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174fef:	e8 0c 08 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174ff4:	89 c2                	mov    %eax,%edx
 8174ff6:	c7 02 4c 02 00 00    	movl   $0x24c,(%edx)
 8174ffc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8175003:	00 
 8175004:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817500b:	09 
 817500c:	89 04 24             	mov    %eax,(%esp)
 817500f:	e8 3c fc 5a 00       	call   8724c50 <__cxa_throw>
 8175014:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817501b:	00 
 817501c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817501f:	89 04 24             	mov    %eax,(%esp)
 8175022:	e8 ff f2 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8175027:	83 f0 01             	xor    $0x1,%eax
 817502a:	84 c0                	test   %al,%al
 817502c:	74 2c                	je     817505a <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x94>
 817502e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8175035:	e8 c6 07 5b 00       	call   8725800 <__cxa_allocate_exception>
 817503a:	89 c2                	mov    %eax,%edx
 817503c:	c7 02 4f 02 00 00    	movl   $0x24f,(%edx)
 8175042:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8175049:	00 
 817504a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8175051:	09 
 8175052:	89 04 24             	mov    %eax,(%esp)
 8175055:	e8 f6 fb 5a 00       	call   8724c50 <__cxa_throw>
 817505a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817505d:	89 04 24             	mov    %eax,(%esp)
 8175060:	e8 57 f4 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8175065:	83 f0 01             	xor    $0x1,%eax
 8175068:	84 c0                	test   %al,%al
 817506a:	74 2c                	je     8175098 <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0xd2>
 817506c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8175073:	e8 88 07 5b 00       	call   8725800 <__cxa_allocate_exception>
 8175078:	89 c2                	mov    %eax,%edx
 817507a:	c7 02 52 02 00 00    	movl   $0x252,(%edx)
 8175080:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8175087:	00 
 8175088:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817508f:	09 
 8175090:	89 04 24             	mov    %eax,(%esp)
 8175093:	e8 b8 fb 5a 00       	call   8724c50 <__cxa_throw>
 8175098:	8b 45 08             	mov    0x8(%ebp),%eax
 817509b:	83 c0 1c             	add    $0x1c,%eax
 817509e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81750a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81750a9:	00 
 81750aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81750ad:	89 04 24             	mov    %eax,(%esp)
 81750b0:	e8 13 04 00 00       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 81750b5:	83 f0 01             	xor    $0x1,%eax
 81750b8:	84 c0                	test   %al,%al
 81750ba:	74 2c                	je     81750e8 <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x122>
 81750bc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81750c3:	e8 38 07 5b 00       	call   8725800 <__cxa_allocate_exception>
 81750c8:	89 c2                	mov    %eax,%edx
 81750ca:	c7 02 55 02 00 00    	movl   $0x255,(%edx)
 81750d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81750d7:	00 
 81750d8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81750df:	09 
 81750e0:	89 04 24             	mov    %eax,(%esp)
 81750e3:	e8 68 fb 5a 00       	call   8724c50 <__cxa_throw>
 81750e8:	8b 45 08             	mov    0x8(%ebp),%eax
 81750eb:	83 c0 14             	add    $0x14,%eax
 81750ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 81750f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81750f9:	00 
 81750fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81750fd:	89 04 24             	mov    %eax,(%esp)
 8175100:	e8 27 18 fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8175105:	83 f0 01             	xor    $0x1,%eax
 8175108:	84 c0                	test   %al,%al
 817510a:	74 2c                	je     8175138 <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x172>
 817510c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8175113:	e8 e8 06 5b 00       	call   8725800 <__cxa_allocate_exception>
 8175118:	89 c2                	mov    %eax,%edx
 817511a:	c7 02 58 02 00 00    	movl   $0x258,(%edx)
 8175120:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8175127:	00 
 8175128:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817512f:	09 
 8175130:	89 04 24             	mov    %eax,(%esp)
 8175133:	e8 18 fb 5a 00       	call   8724c50 <__cxa_throw>
 8175138:	bb 01 00 00 00       	mov    $0x1,%ebx
 817513d:	eb 6e                	jmp    81751ad <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x1e7>
 817513f:	83 fa 01             	cmp    $0x1,%edx
 8175142:	74 08                	je     817514c <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x186>
 8175144:	89 04 24             	mov    %eax,(%esp)
 8175147:	e8 04 e6 96 00       	call   8ae3750 <_Unwind_Resume>
 817514c:	89 04 24             	mov    %eax,(%esp)
 817514f:	e8 8c 0b 5b 00       	call   8725ce0 <__cxa_begin_catch>
 8175154:	8b 00                	mov    (%eax),%eax
 8175156:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8175159:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817515c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8175160:	c7 44 24 10 00 4b b8 	movl   $0x8b84b00,0x10(%esp)
 8175167:	08 
 8175168:	c7 44 24 0c 5e 02 00 	movl   $0x25e,0xc(%esp)
 817516f:	00 
 8175170:	c7 44 24 08 5a 52 b8 	movl   $0x8b8525a,0x8(%esp)
 8175177:	08 
 8175178:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 817517f:	08 
 8175180:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8175187:	e8 7e ea 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817518c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8175191:	e8 9a 0a 5b 00       	call   8725c30 <__cxa_end_catch>
 8175196:	eb 15                	jmp    81751ad <_ZN6Taiwan11ChargeQuery9getResultER5MySQL+0x1e7>
 8175198:	89 d3                	mov    %edx,%ebx
 817519a:	89 c6                	mov    %eax,%esi
 817519c:	e8 8f 0a 5b 00       	call   8725c30 <__cxa_end_catch>
 81751a1:	89 f0                	mov    %esi,%eax
 81751a3:	89 da                	mov    %ebx,%edx
 81751a5:	89 04 24             	mov    %eax,(%esp)
 81751a8:	e8 a3 e5 96 00       	call   8ae3750 <_Unwind_Resume>
 81751ad:	89 d8                	mov    %ebx,%eax
 81751af:	83 c4 30             	add    $0x30,%esp
 81751b2:	5b                   	pop    %ebx
 81751b3:	5e                   	pop    %esi
 81751b4:	5d                   	pop    %ebp
 81751b5:	c3                   	ret

```

```c
// Taiwan::ChargeQuery::getResult @ 0x8174fc6

/* Taiwan::ChargeQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::ChargeQuery::getResult(ChargeQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174fdc to 08175137 has its CatchHandler @ 0817513f */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x24c;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x24f;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x252;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x255;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x14));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 600;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08174f52 Taiwan::ChargeQuery::setQuery  [0x08174f52-0x8174fa9] ===
 8174f52:	55                   	push   %ebp
 8174f53:	89 e5                	mov    %esp,%ebp
 8174f55:	56                   	push   %esi
 8174f56:	53                   	push   %ebx
 8174f57:	83 ec 20             	sub    $0x20,%esp
 8174f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f5d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8174f61:	0f be f0             	movsbl %al,%esi
 8174f64:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f67:	8b 58 0c             	mov    0xc(%eax),%ebx
 8174f6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f6d:	8b 48 08             	mov    0x8(%eax),%ecx
 8174f70:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f73:	8b 50 04             	mov    0x4(%eax),%edx
 8174f76:	8b 45 08             	mov    0x8(%ebp),%eax
 8174f79:	8b 00                	mov    (%eax),%eax
 8174f7b:	89 74 24 18          	mov    %esi,0x18(%esp)
 8174f7f:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8174f83:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8174f87:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8174f8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174f8f:	c7 44 24 04 bc 4a b8 	movl   $0x8b84abc,0x4(%esp)
 8174f96:	08 
 8174f97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174f9a:	89 04 24             	mov    %eax,(%esp)
 8174f9d:	e8 1e f2 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174fa2:	83 c4 20             	add    $0x20,%esp
 8174fa5:	5b                   	pop    %ebx
 8174fa6:	5e                   	pop    %esi
 8174fa7:	5d                   	pop    %ebp
 8174fa8:	c3                   	ret
 8174fa9:	90                   	nop

```

```c
// Taiwan::ChargeQuery::setQuery @ 0x8174f52

/* Taiwan::ChargeQuery::setQuery(MySQL&) */

void __thiscall Taiwan::ChargeQuery::setQuery(ChargeQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_recharge(\'%s\', \'%s\', \'%s\', %u, %d, @out_tran, @out_code)"
                   ,*(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0xc),(int)(char)this[0x10]);
  return;
}

```


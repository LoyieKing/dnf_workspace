# Taiwan__GiftQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GiftQuery

```asm
// === 081747fe Taiwan::GiftQuery::GiftQuery  [0x081747fe-0x8174865] ===
 81747fe:	55                   	push   %ebp
 81747ff:	89 e5                	mov    %esp,%ebp
 8174801:	83 ec 28             	sub    $0x28,%esp
 8174804:	8b 45 20             	mov    0x20(%ebp),%eax
 8174807:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817480a:	8b 45 24             	mov    0x24(%ebp),%eax
 817480d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8174810:	8b 45 08             	mov    0x8(%ebp),%eax
 8174813:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174816:	89 10                	mov    %edx,(%eax)
 8174818:	8b 45 08             	mov    0x8(%ebp),%eax
 817481b:	8b 55 10             	mov    0x10(%ebp),%edx
 817481e:	89 50 04             	mov    %edx,0x4(%eax)
 8174821:	8b 45 08             	mov    0x8(%ebp),%eax
 8174824:	8b 55 14             	mov    0x14(%ebp),%edx
 8174827:	89 50 08             	mov    %edx,0x8(%eax)
 817482a:	8b 45 08             	mov    0x8(%ebp),%eax
 817482d:	8b 55 18             	mov    0x18(%ebp),%edx
 8174830:	89 50 14             	mov    %edx,0x14(%eax)
 8174833:	8b 45 08             	mov    0x8(%ebp),%eax
 8174836:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8174839:	89 50 18             	mov    %edx,0x18(%eax)
 817483c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817483f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8174842:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8174845:	89 41 0c             	mov    %eax,0xc(%ecx)
 8174848:	89 51 10             	mov    %edx,0x10(%ecx)
 817484b:	8b 45 08             	mov    0x8(%ebp),%eax
 817484e:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8174855:	8b 45 08             	mov    0x8(%ebp),%eax
 8174858:	83 c0 20             	add    $0x20,%eax
 817485b:	89 04 24             	mov    %eax,(%esp)
 817485e:	e8 dd 0c 00 00       	call   8175540 <_ZN6Taiwan15BillTransaction4initEv>
 8174863:	c9                   	leave
 8174864:	c3                   	ret
 8174865:	90                   	nop

```

```c
// Taiwan::GiftQuery::GiftQuery @ 0x81747fe

/* Taiwan::GiftQuery::GiftQuery(char const*, char const*, char const*, unsigned int, unsigned int,
   long long) */

void __thiscall
Taiwan::GiftQuery::GiftQuery
          (GiftQuery *this,char *param_1,char *param_2,char *param_3,uint param_4,uint param_5,
          longlong param_6)

{
  *(char **)this = param_1;
  *(char **)(this + 4) = param_2;
  *(char **)(this + 8) = param_3;
  *(uint *)(this + 0x14) = param_4;
  *(uint *)(this + 0x18) = param_5;
  *(longlong *)(this + 0xc) = param_6;
  *(undefined4 *)(this + 0x1c) = 0;
  BillTransaction::init((BillTransaction *)(this + 0x20));
  return;
}

```

---

## execQuery

```asm
// === 081748ba Taiwan::GiftQuery::execQuery  [0x081748ba-0x81748d5] ===
 81748ba:	55                   	push   %ebp
 81748bb:	89 e5                	mov    %esp,%ebp
 81748bd:	83 ec 18             	sub    $0x18,%esp
 81748c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81748c7:	00 
 81748c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81748cb:	89 04 24             	mov    %eax,(%esp)
 81748ce:	e8 53 fa 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 81748d3:	c9                   	leave
 81748d4:	c3                   	ret
 81748d5:	90                   	nop

```

```c
// Taiwan::GiftQuery::execQuery @ 0x81748ba

/* Taiwan::GiftQuery::execQuery(MySQL&) */

void __thiscall Taiwan::GiftQuery::execQuery(GiftQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 081748d6 Taiwan::GiftQuery::getResult  [0x081748d6-0x8174ac5] ===
 81748d6:	55                   	push   %ebp
 81748d7:	89 e5                	mov    %esp,%ebp
 81748d9:	56                   	push   %esi
 81748da:	53                   	push   %ebx
 81748db:	83 ec 30             	sub    $0x30,%esp
 81748de:	c7 44 24 04 50 49 b8 	movl   $0x8b84950,0x4(%esp)
 81748e5:	08 
 81748e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81748e9:	89 04 24             	mov    %eax,(%esp)
 81748ec:	e8 cf f8 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81748f1:	83 f0 01             	xor    $0x1,%eax
 81748f4:	84 c0                	test   %al,%al
 81748f6:	74 2c                	je     8174924 <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x4e>
 81748f8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81748ff:	e8 fc 0e 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174904:	89 c2                	mov    %eax,%edx
 8174906:	c7 02 bf 01 00 00    	movl   $0x1bf,(%edx)
 817490c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174913:	00 
 8174914:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817491b:	09 
 817491c:	89 04 24             	mov    %eax,(%esp)
 817491f:	e8 2c 03 5b 00       	call   8724c50 <__cxa_throw>
 8174924:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817492b:	00 
 817492c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817492f:	89 04 24             	mov    %eax,(%esp)
 8174932:	e8 ef f9 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174937:	83 f0 01             	xor    $0x1,%eax
 817493a:	84 c0                	test   %al,%al
 817493c:	74 2c                	je     817496a <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x94>
 817493e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174945:	e8 b6 0e 5b 00       	call   8725800 <__cxa_allocate_exception>
 817494a:	89 c2                	mov    %eax,%edx
 817494c:	c7 02 c2 01 00 00    	movl   $0x1c2,(%edx)
 8174952:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174959:	00 
 817495a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174961:	09 
 8174962:	89 04 24             	mov    %eax,(%esp)
 8174965:	e8 e6 02 5b 00       	call   8724c50 <__cxa_throw>
 817496a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817496d:	89 04 24             	mov    %eax,(%esp)
 8174970:	e8 47 fb 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8174975:	83 f0 01             	xor    $0x1,%eax
 8174978:	84 c0                	test   %al,%al
 817497a:	74 2c                	je     81749a8 <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0xd2>
 817497c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174983:	e8 78 0e 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174988:	89 c2                	mov    %eax,%edx
 817498a:	c7 02 c5 01 00 00    	movl   $0x1c5,(%edx)
 8174990:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174997:	00 
 8174998:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 817499f:	09 
 81749a0:	89 04 24             	mov    %eax,(%esp)
 81749a3:	e8 a8 02 5b 00       	call   8724c50 <__cxa_throw>
 81749a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81749ab:	83 c0 24             	add    $0x24,%eax
 81749ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 81749b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81749b9:	00 
 81749ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81749bd:	89 04 24             	mov    %eax,(%esp)
 81749c0:	e8 03 0b 00 00       	call   81754c8 <_ZN5MySQL13get_ulonglongEiRy>
 81749c5:	83 f0 01             	xor    $0x1,%eax
 81749c8:	84 c0                	test   %al,%al
 81749ca:	74 2c                	je     81749f8 <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x122>
 81749cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 81749d3:	e8 28 0e 5b 00       	call   8725800 <__cxa_allocate_exception>
 81749d8:	89 c2                	mov    %eax,%edx
 81749da:	c7 02 c8 01 00 00    	movl   $0x1c8,(%edx)
 81749e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81749e7:	00 
 81749e8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 81749ef:	09 
 81749f0:	89 04 24             	mov    %eax,(%esp)
 81749f3:	e8 58 02 5b 00       	call   8724c50 <__cxa_throw>
 81749f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81749fb:	83 c0 1c             	add    $0x1c,%eax
 81749fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174a02:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174a09:	00 
 8174a0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174a0d:	89 04 24             	mov    %eax,(%esp)
 8174a10:	e8 17 1f fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8174a15:	83 f0 01             	xor    $0x1,%eax
 8174a18:	84 c0                	test   %al,%al
 8174a1a:	74 2c                	je     8174a48 <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x172>
 8174a1c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174a23:	e8 d8 0d 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174a28:	89 c2                	mov    %eax,%edx
 8174a2a:	c7 02 cb 01 00 00    	movl   $0x1cb,(%edx)
 8174a30:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174a37:	00 
 8174a38:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174a3f:	09 
 8174a40:	89 04 24             	mov    %eax,(%esp)
 8174a43:	e8 08 02 5b 00       	call   8724c50 <__cxa_throw>
 8174a48:	bb 01 00 00 00       	mov    $0x1,%ebx
 8174a4d:	eb 6e                	jmp    8174abd <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x1e7>
 8174a4f:	83 fa 01             	cmp    $0x1,%edx
 8174a52:	74 08                	je     8174a5c <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x186>
 8174a54:	89 04 24             	mov    %eax,(%esp)
 8174a57:	e8 f4 ec 96 00       	call   8ae3750 <_Unwind_Resume>
 8174a5c:	89 04 24             	mov    %eax,(%esp)
 8174a5f:	e8 7c 12 5b 00       	call   8725ce0 <__cxa_begin_catch>
 8174a64:	8b 00                	mov    (%eax),%eax
 8174a66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8174a69:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8174a6c:	89 44 24 14          	mov    %eax,0x14(%esp)
 8174a70:	c7 44 24 10 dc 49 b8 	movl   $0x8b849dc,0x10(%esp)
 8174a77:	08 
 8174a78:	c7 44 24 0c d1 01 00 	movl   $0x1d1,0xc(%esp)
 8174a7f:	00 
 8174a80:	c7 44 24 08 78 52 b8 	movl   $0x8b85278,0x8(%esp)
 8174a87:	08 
 8174a88:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8174a8f:	08 
 8174a90:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8174a97:	e8 6e f1 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8174a9c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8174aa1:	e8 8a 11 5b 00       	call   8725c30 <__cxa_end_catch>
 8174aa6:	eb 15                	jmp    8174abd <_ZN6Taiwan9GiftQuery9getResultER5MySQL+0x1e7>
 8174aa8:	89 d3                	mov    %edx,%ebx
 8174aaa:	89 c6                	mov    %eax,%esi
 8174aac:	e8 7f 11 5b 00       	call   8725c30 <__cxa_end_catch>
 8174ab1:	89 f0                	mov    %esi,%eax
 8174ab3:	89 da                	mov    %ebx,%edx
 8174ab5:	89 04 24             	mov    %eax,(%esp)
 8174ab8:	e8 93 ec 96 00       	call   8ae3750 <_Unwind_Resume>
 8174abd:	89 d8                	mov    %ebx,%eax
 8174abf:	83 c4 30             	add    $0x30,%esp
 8174ac2:	5b                   	pop    %ebx
 8174ac3:	5e                   	pop    %esi
 8174ac4:	5d                   	pop    %ebp
 8174ac5:	c3                   	ret

```

```c
// Taiwan::GiftQuery::getResult @ 0x81748d6

/* Taiwan::GiftQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::GiftQuery::getResult(GiftQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 081748ec to 08174a47 has its CatchHandler @ 08174a4f */
  cVar1 = MySQL::set_query(param_1,"select @out_tran, @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1bf;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c5;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_ulonglong(param_1,0,(ulonglong *)(this + 0x24));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1c8;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,1,(int *)(this + 0x1c));
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1cb;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08174866 Taiwan::GiftQuery::setQuery  [0x08174866-0x81748b9] ===
 8174866:	55                   	push   %ebp
 8174867:	89 e5                	mov    %esp,%ebp
 8174869:	56                   	push   %esi
 817486a:	53                   	push   %ebx
 817486b:	83 ec 20             	sub    $0x20,%esp
 817486e:	8b 45 08             	mov    0x8(%ebp),%eax
 8174871:	8b 70 18             	mov    0x18(%eax),%esi
 8174874:	8b 45 08             	mov    0x8(%ebp),%eax
 8174877:	8b 58 14             	mov    0x14(%eax),%ebx
 817487a:	8b 45 08             	mov    0x8(%ebp),%eax
 817487d:	8b 48 08             	mov    0x8(%eax),%ecx
 8174880:	8b 45 08             	mov    0x8(%ebp),%eax
 8174883:	8b 50 04             	mov    0x4(%eax),%edx
 8174886:	8b 45 08             	mov    0x8(%ebp),%eax
 8174889:	8b 00                	mov    (%eax),%eax
 817488b:	89 74 24 18          	mov    %esi,0x18(%esp)
 817488f:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8174893:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8174897:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817489b:	89 44 24 08          	mov    %eax,0x8(%esp)
 817489f:	c7 44 24 04 9c 49 b8 	movl   $0x8b8499c,0x4(%esp)
 81748a6:	08 
 81748a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81748aa:	89 04 24             	mov    %eax,(%esp)
 81748ad:	e8 0e f9 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 81748b2:	83 c4 20             	add    $0x20,%esp
 81748b5:	5b                   	pop    %ebx
 81748b6:	5e                   	pop    %esi
 81748b7:	5d                   	pop    %ebp
 81748b8:	c3                   	ret
 81748b9:	90                   	nop

```

```c
// Taiwan::GiftQuery::setQuery @ 0x8174866

/* Taiwan::GiftQuery::setQuery(MySQL&) */

void __thiscall Taiwan::GiftQuery::setQuery(GiftQuery *this,MySQL *param_1)

{
  MySQL::set_query(param_1,"call usp_gift(\'%s\', \'%s\', \'%s\', %u, %u, @out_tran, @out_code)",
                   *(undefined4 *)this,*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),
                   *(undefined4 *)(this + 0x14),*(undefined4 *)(this + 0x18));
  return;
}

```


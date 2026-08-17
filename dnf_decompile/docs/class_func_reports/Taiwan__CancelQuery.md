# Taiwan__CancelQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## CancelQuery

```asm
// === 08174ce2 Taiwan::CancelQuery::CancelQuery  [0x08174ce2-0x8174d07] ===
 8174ce2:	55                   	push   %ebp
 8174ce3:	89 e5                	mov    %esp,%ebp
 8174ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 8174ce8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174ceb:	8b 0a                	mov    (%edx),%ecx
 8174ced:	89 48 04             	mov    %ecx,0x4(%eax)
 8174cf0:	8b 4a 04             	mov    0x4(%edx),%ecx
 8174cf3:	89 48 08             	mov    %ecx,0x8(%eax)
 8174cf6:	8b 52 08             	mov    0x8(%edx),%edx
 8174cf9:	89 50 0c             	mov    %edx,0xc(%eax)
 8174cfc:	8b 45 08             	mov    0x8(%ebp),%eax
 8174cff:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8174d05:	5d                   	pop    %ebp
 8174d06:	c3                   	ret
 8174d07:	90                   	nop

```

```c
// Taiwan::CancelQuery::CancelQuery @ 0x8174ce2

/* Taiwan::CancelQuery::CancelQuery(Taiwan::BillTransaction const&) */

void __thiscall Taiwan::CancelQuery::CancelQuery(CancelQuery *this,BillTransaction *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)this = 0;
  return;
}

```

---

## execQuery

```asm
// === 08174d44 Taiwan::CancelQuery::execQuery  [0x08174d44-0x8174d5f] ===
 8174d44:	55                   	push   %ebp
 8174d45:	89 e5                	mov    %esp,%ebp
 8174d47:	83 ec 18             	sub    $0x18,%esp
 8174d4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174d51:	00 
 8174d52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174d55:	89 04 24             	mov    %eax,(%esp)
 8174d58:	e8 c9 f5 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174d5d:	c9                   	leave
 8174d5e:	c3                   	ret
 8174d5f:	90                   	nop

```

```c
// Taiwan::CancelQuery::execQuery @ 0x8174d44

/* Taiwan::CancelQuery::execQuery(MySQL&) */

void __thiscall Taiwan::CancelQuery::execQuery(CancelQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 08174d60 Taiwan::CancelQuery::getResult  [0x08174d60-0x8174efd] ===
 8174d60:	55                   	push   %ebp
 8174d61:	89 e5                	mov    %esp,%ebp
 8174d63:	56                   	push   %esi
 8174d64:	53                   	push   %ebx
 8174d65:	83 ec 30             	sub    $0x30,%esp
 8174d68:	c7 44 24 04 28 4a b8 	movl   $0x8b84a28,0x4(%esp)
 8174d6f:	08 
 8174d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174d73:	89 04 24             	mov    %eax,(%esp)
 8174d76:	e8 45 f4 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174d7b:	83 f0 01             	xor    $0x1,%eax
 8174d7e:	84 c0                	test   %al,%al
 8174d80:	74 2c                	je     8174dae <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x4e>
 8174d82:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174d89:	e8 72 0a 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174d8e:	89 c2                	mov    %eax,%edx
 8174d90:	c7 02 1a 02 00 00    	movl   $0x21a,(%edx)
 8174d96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174d9d:	00 
 8174d9e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174da5:	09 
 8174da6:	89 04 24             	mov    %eax,(%esp)
 8174da9:	e8 a2 fe 5a 00       	call   8724c50 <__cxa_throw>
 8174dae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174db5:	00 
 8174db6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174db9:	89 04 24             	mov    %eax,(%esp)
 8174dbc:	e8 65 f5 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174dc1:	83 f0 01             	xor    $0x1,%eax
 8174dc4:	84 c0                	test   %al,%al
 8174dc6:	74 2c                	je     8174df4 <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x94>
 8174dc8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174dcf:	e8 2c 0a 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174dd4:	89 c2                	mov    %eax,%edx
 8174dd6:	c7 02 1d 02 00 00    	movl   $0x21d,(%edx)
 8174ddc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174de3:	00 
 8174de4:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174deb:	09 
 8174dec:	89 04 24             	mov    %eax,(%esp)
 8174def:	e8 5c fe 5a 00       	call   8724c50 <__cxa_throw>
 8174df4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174df7:	89 04 24             	mov    %eax,(%esp)
 8174dfa:	e8 bd f6 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8174dff:	83 f0 01             	xor    $0x1,%eax
 8174e02:	84 c0                	test   %al,%al
 8174e04:	74 2c                	je     8174e32 <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0xd2>
 8174e06:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174e0d:	e8 ee 09 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174e12:	89 c2                	mov    %eax,%edx
 8174e14:	c7 02 20 02 00 00    	movl   $0x220,(%edx)
 8174e1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174e21:	00 
 8174e22:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174e29:	09 
 8174e2a:	89 04 24             	mov    %eax,(%esp)
 8174e2d:	e8 1e fe 5a 00       	call   8724c50 <__cxa_throw>
 8174e32:	8b 45 08             	mov    0x8(%ebp),%eax
 8174e35:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174e39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8174e40:	00 
 8174e41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174e44:	89 04 24             	mov    %eax,(%esp)
 8174e47:	e8 e0 1a fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8174e4c:	83 f0 01             	xor    $0x1,%eax
 8174e4f:	84 c0                	test   %al,%al
 8174e51:	74 2c                	je     8174e7f <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x11f>
 8174e53:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174e5a:	e8 a1 09 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174e5f:	89 c2                	mov    %eax,%edx
 8174e61:	c7 02 23 02 00 00    	movl   $0x223,(%edx)
 8174e67:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174e6e:	00 
 8174e6f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174e76:	09 
 8174e77:	89 04 24             	mov    %eax,(%esp)
 8174e7a:	e8 d1 fd 5a 00       	call   8724c50 <__cxa_throw>
 8174e7f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8174e84:	eb 6e                	jmp    8174ef4 <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x194>
 8174e86:	83 fa 01             	cmp    $0x1,%edx
 8174e89:	74 08                	je     8174e93 <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x133>
 8174e8b:	89 04 24             	mov    %eax,(%esp)
 8174e8e:	e8 bd e8 96 00       	call   8ae3750 <_Unwind_Resume>
 8174e93:	89 04 24             	mov    %eax,(%esp)
 8174e96:	e8 45 0e 5b 00       	call   8725ce0 <__cxa_begin_catch>
 8174e9b:	8b 00                	mov    (%eax),%eax
 8174e9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8174ea0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8174ea3:	89 44 24 14          	mov    %eax,0x14(%esp)
 8174ea7:	c7 44 24 10 8c 4a b8 	movl   $0x8b84a8c,0x10(%esp)
 8174eae:	08 
 8174eaf:	c7 44 24 0c 29 02 00 	movl   $0x229,0xc(%esp)
 8174eb6:	00 
 8174eb7:	c7 44 24 08 64 52 b8 	movl   $0x8b85264,0x8(%esp)
 8174ebe:	08 
 8174ebf:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8174ec6:	08 
 8174ec7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8174ece:	e8 37 ed 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8174ed3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8174ed8:	e8 53 0d 5b 00       	call   8725c30 <__cxa_end_catch>
 8174edd:	eb 15                	jmp    8174ef4 <_ZN6Taiwan11CancelQuery9getResultER5MySQL+0x194>
 8174edf:	89 d3                	mov    %edx,%ebx
 8174ee1:	89 c6                	mov    %eax,%esi
 8174ee3:	e8 48 0d 5b 00       	call   8725c30 <__cxa_end_catch>
 8174ee8:	89 f0                	mov    %esi,%eax
 8174eea:	89 da                	mov    %ebx,%edx
 8174eec:	89 04 24             	mov    %eax,(%esp)
 8174eef:	e8 5c e8 96 00       	call   8ae3750 <_Unwind_Resume>
 8174ef4:	89 d8                	mov    %ebx,%eax
 8174ef6:	83 c4 30             	add    $0x30,%esp
 8174ef9:	5b                   	pop    %ebx
 8174efa:	5e                   	pop    %esi
 8174efb:	5d                   	pop    %ebp
 8174efc:	c3                   	ret
 8174efd:	90                   	nop

```

```c
// Taiwan::CancelQuery::getResult @ 0x8174d60

/* Taiwan::CancelQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::CancelQuery::getResult(CancelQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174d76 to 08174e7e has its CatchHandler @ 08174e86 */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x21a;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x21d;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x220;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)this);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x223;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08174d08 Taiwan::CancelQuery::setQuery  [0x08174d08-0x8174d43] ===
 8174d08:	55                   	push   %ebp
 8174d09:	89 e5                	mov    %esp,%ebp
 8174d0b:	83 ec 18             	sub    $0x18,%esp
 8174d0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8174d11:	8b 50 0c             	mov    0xc(%eax),%edx
 8174d14:	8b 40 08             	mov    0x8(%eax),%eax
 8174d17:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174d1e:	00 
 8174d1f:	89 04 24             	mov    %eax,(%esp)
 8174d22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8174d26:	e8 6d 43 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8174d2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174d2f:	c7 44 24 04 6c 4a b8 	movl   $0x8b84a6c,0x4(%esp)
 8174d36:	08 
 8174d37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174d3a:	89 04 24             	mov    %eax,(%esp)
 8174d3d:	e8 7e f4 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174d42:	c9                   	leave
 8174d43:	c3                   	ret

```

```c
// Taiwan::CancelQuery::setQuery @ 0x8174d08

/* Taiwan::CancelQuery::setQuery(MySQL&) */

void __thiscall Taiwan::CancelQuery::setQuery(CancelQuery *this,MySQL *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(*(ulonglong *)(this + 8),0);
  MySQL::set_query(param_1,"call usp_cancel(%s, @out_code)",uVar1);
  return;
}

```


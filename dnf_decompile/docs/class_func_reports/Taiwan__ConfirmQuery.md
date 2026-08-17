# Taiwan__ConfirmQuery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## ConfirmQuery

```asm
// === 08174ac6 Taiwan::ConfirmQuery::ConfirmQuery  [0x08174ac6-0x8174aeb] ===
 8174ac6:	55                   	push   %ebp
 8174ac7:	89 e5                	mov    %esp,%ebp
 8174ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 8174acc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8174acf:	8b 0a                	mov    (%edx),%ecx
 8174ad1:	89 48 04             	mov    %ecx,0x4(%eax)
 8174ad4:	8b 4a 04             	mov    0x4(%edx),%ecx
 8174ad7:	89 48 08             	mov    %ecx,0x8(%eax)
 8174ada:	8b 52 08             	mov    0x8(%edx),%edx
 8174add:	89 50 0c             	mov    %edx,0xc(%eax)
 8174ae0:	8b 45 08             	mov    0x8(%ebp),%eax
 8174ae3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8174ae9:	5d                   	pop    %ebp
 8174aea:	c3                   	ret
 8174aeb:	90                   	nop

```

```c
// Taiwan::ConfirmQuery::ConfirmQuery @ 0x8174ac6

/* Taiwan::ConfirmQuery::ConfirmQuery(Taiwan::BillTransaction const&) */

void __thiscall Taiwan::ConfirmQuery::ConfirmQuery(ConfirmQuery *this,BillTransaction *param_1)

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
// === 08174b28 Taiwan::ConfirmQuery::execQuery  [0x08174b28-0x8174b43] ===
 8174b28:	55                   	push   %ebp
 8174b29:	89 e5                	mov    %esp,%ebp
 8174b2b:	83 ec 18             	sub    $0x18,%esp
 8174b2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174b35:	00 
 8174b36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174b39:	89 04 24             	mov    %eax,(%esp)
 8174b3c:	e8 e5 f7 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174b41:	c9                   	leave
 8174b42:	c3                   	ret
 8174b43:	90                   	nop

```

```c
// Taiwan::ConfirmQuery::execQuery @ 0x8174b28

/* Taiwan::ConfirmQuery::execQuery(MySQL&) */

void __thiscall Taiwan::ConfirmQuery::execQuery(ConfirmQuery *this,MySQL *param_1)

{
  MySQL::exec(param_1,true);
  return;
}

```

---

## getResult

```asm
// === 08174b44 Taiwan::ConfirmQuery::getResult  [0x08174b44-0x8174ce1] ===
 8174b44:	55                   	push   %ebp
 8174b45:	89 e5                	mov    %esp,%ebp
 8174b47:	56                   	push   %esi
 8174b48:	53                   	push   %ebx
 8174b49:	83 ec 30             	sub    $0x30,%esp
 8174b4c:	c7 44 24 04 28 4a b8 	movl   $0x8b84a28,0x4(%esp)
 8174b53:	08 
 8174b54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174b57:	89 04 24             	mov    %eax,(%esp)
 8174b5a:	e8 61 f6 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174b5f:	83 f0 01             	xor    $0x1,%eax
 8174b62:	84 c0                	test   %al,%al
 8174b64:	74 2c                	je     8174b92 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x4e>
 8174b66:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174b6d:	e8 8e 0c 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174b72:	89 c2                	mov    %eax,%edx
 8174b74:	c7 02 ee 01 00 00    	movl   $0x1ee,(%edx)
 8174b7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174b81:	00 
 8174b82:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174b89:	09 
 8174b8a:	89 04 24             	mov    %eax,(%esp)
 8174b8d:	e8 be 00 5b 00       	call   8724c50 <__cxa_throw>
 8174b92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8174b99:	00 
 8174b9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174b9d:	89 04 24             	mov    %eax,(%esp)
 8174ba0:	e8 81 f7 27 00       	call   83f4326 <_ZN5MySQL4execEb>
 8174ba5:	83 f0 01             	xor    $0x1,%eax
 8174ba8:	84 c0                	test   %al,%al
 8174baa:	74 2c                	je     8174bd8 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x94>
 8174bac:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174bb3:	e8 48 0c 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174bb8:	89 c2                	mov    %eax,%edx
 8174bba:	c7 02 f1 01 00 00    	movl   $0x1f1,(%edx)
 8174bc0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174bc7:	00 
 8174bc8:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174bcf:	09 
 8174bd0:	89 04 24             	mov    %eax,(%esp)
 8174bd3:	e8 78 00 5b 00       	call   8724c50 <__cxa_throw>
 8174bd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174bdb:	89 04 24             	mov    %eax,(%esp)
 8174bde:	e8 d9 f8 27 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8174be3:	83 f0 01             	xor    $0x1,%eax
 8174be6:	84 c0                	test   %al,%al
 8174be8:	74 2c                	je     8174c16 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0xd2>
 8174bea:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174bf1:	e8 0a 0c 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174bf6:	89 c2                	mov    %eax,%edx
 8174bf8:	c7 02 f4 01 00 00    	movl   $0x1f4,(%edx)
 8174bfe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174c05:	00 
 8174c06:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174c0d:	09 
 8174c0e:	89 04 24             	mov    %eax,(%esp)
 8174c11:	e8 3a 00 5b 00       	call   8724c50 <__cxa_throw>
 8174c16:	8b 45 08             	mov    0x8(%ebp),%eax
 8174c19:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174c1d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8174c24:	00 
 8174c25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174c28:	89 04 24             	mov    %eax,(%esp)
 8174c2b:	e8 fc 1c fa ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8174c30:	83 f0 01             	xor    $0x1,%eax
 8174c33:	84 c0                	test   %al,%al
 8174c35:	74 2c                	je     8174c63 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x11f>
 8174c37:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8174c3e:	e8 bd 0b 5b 00       	call   8725800 <__cxa_allocate_exception>
 8174c43:	89 c2                	mov    %eax,%edx
 8174c45:	c7 02 f7 01 00 00    	movl   $0x1f7,(%edx)
 8174c4b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174c52:	00 
 8174c53:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8174c5a:	09 
 8174c5b:	89 04 24             	mov    %eax,(%esp)
 8174c5e:	e8 ed ff 5a 00       	call   8724c50 <__cxa_throw>
 8174c63:	bb 01 00 00 00       	mov    $0x1,%ebx
 8174c68:	eb 6e                	jmp    8174cd8 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x194>
 8174c6a:	83 fa 01             	cmp    $0x1,%edx
 8174c6d:	74 08                	je     8174c77 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x133>
 8174c6f:	89 04 24             	mov    %eax,(%esp)
 8174c72:	e8 d9 ea 96 00       	call   8ae3750 <_Unwind_Resume>
 8174c77:	89 04 24             	mov    %eax,(%esp)
 8174c7a:	e8 61 10 5b 00       	call   8725ce0 <__cxa_begin_catch>
 8174c7f:	8b 00                	mov    (%eax),%eax
 8174c81:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8174c84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8174c87:	89 44 24 14          	mov    %eax,0x14(%esp)
 8174c8b:	c7 44 24 10 3c 4a b8 	movl   $0x8b84a3c,0x10(%esp)
 8174c92:	08 
 8174c93:	c7 44 24 0c fd 01 00 	movl   $0x1fd,0xc(%esp)
 8174c9a:	00 
 8174c9b:	c7 44 24 08 6e 52 b8 	movl   $0x8b8526e,0x8(%esp)
 8174ca2:	08 
 8174ca3:	c7 44 24 04 7c 48 b8 	movl   $0x8b8487c,0x4(%esp)
 8174caa:	08 
 8174cab:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8174cb2:	e8 53 ef 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8174cb7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8174cbc:	e8 6f 0f 5b 00       	call   8725c30 <__cxa_end_catch>
 8174cc1:	eb 15                	jmp    8174cd8 <_ZN6Taiwan12ConfirmQuery9getResultER5MySQL+0x194>
 8174cc3:	89 d3                	mov    %edx,%ebx
 8174cc5:	89 c6                	mov    %eax,%esi
 8174cc7:	e8 64 0f 5b 00       	call   8725c30 <__cxa_end_catch>
 8174ccc:	89 f0                	mov    %esi,%eax
 8174cce:	89 da                	mov    %ebx,%edx
 8174cd0:	89 04 24             	mov    %eax,(%esp)
 8174cd3:	e8 78 ea 96 00       	call   8ae3750 <_Unwind_Resume>
 8174cd8:	89 d8                	mov    %ebx,%eax
 8174cda:	83 c4 30             	add    $0x30,%esp
 8174cdd:	5b                   	pop    %ebx
 8174cde:	5e                   	pop    %esi
 8174cdf:	5d                   	pop    %ebp
 8174ce0:	c3                   	ret
 8174ce1:	90                   	nop

```

```c
// Taiwan::ConfirmQuery::getResult @ 0x8174b44

/* Taiwan::ConfirmQuery::getResult(MySQL&) */

undefined4 __thiscall Taiwan::ConfirmQuery::getResult(ConfirmQuery *this,MySQL *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
                    /* try { // try from 08174b5a to 08174c62 has its CatchHandler @ 08174c6a */
  cVar1 = MySQL::set_query(param_1,"select @out_code");
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1ee;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1f1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::fetch(param_1);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 500;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  cVar1 = MySQL::get_int(param_1,0,(int *)this);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = 0x1f7;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&int::typeinfo,0);
  }
  return 1;
}

```

---

## setQuery

```asm
// === 08174aec Taiwan::ConfirmQuery::setQuery  [0x08174aec-0x8174b27] ===
 8174aec:	55                   	push   %ebp
 8174aed:	89 e5                	mov    %esp,%ebp
 8174aef:	83 ec 18             	sub    $0x18,%esp
 8174af2:	8b 45 08             	mov    0x8(%ebp),%eax
 8174af5:	8b 50 0c             	mov    0xc(%eax),%edx
 8174af8:	8b 40 08             	mov    0x8(%eax),%eax
 8174afb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8174b02:	00 
 8174b03:	89 04 24             	mov    %eax,(%esp)
 8174b06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8174b0a:	e8 89 45 f9 ff       	call   8109098 <_Z14NumberToStringyi>
 8174b0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8174b13:	c7 44 24 04 08 4a b8 	movl   $0x8b84a08,0x4(%esp)
 8174b1a:	08 
 8174b1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8174b1e:	89 04 24             	mov    %eax,(%esp)
 8174b21:	e8 9a f6 27 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8174b26:	c9                   	leave
 8174b27:	c3                   	ret

```

```c
// Taiwan::ConfirmQuery::setQuery @ 0x8174aec

/* Taiwan::ConfirmQuery::setQuery(MySQL&) */

void __thiscall Taiwan::ConfirmQuery::setQuery(ConfirmQuery *this,MySQL *param_1)

{
  undefined4 uVar1;
  
  uVar1 = NumberToString(*(ulonglong *)(this + 8),0);
  MySQL::set_query(param_1,"call usp_confirm(%s, @out_code)",uVar1);
  return;
}

```


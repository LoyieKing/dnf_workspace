# yaSSL__ServerHelloDone

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Process

```asm
// === 08747fe0 yaSSL::ServerHelloDone::Process  [0x08747fe0-0x874801f] ===
 8747fe0:	55                   	push   %ebp
 8747fe1:	89 e5                	mov    %esp,%ebp
 8747fe3:	53                   	push   %ebx
 8747fe4:	e8 0f ae fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747fe9:	81 c3 af 4b c2 00    	add    $0xc24baf,%ebx
 8747fef:	83 ec 14             	sub    $0x14,%esp
 8747ff2:	8b 45 10             	mov    0x10(%ebp),%eax
 8747ff5:	89 04 24             	mov    %eax,(%esp)
 8747ff8:	e8 d3 62 00 00       	call   874e2d0 <_ZN5yaSSL3SSL9useStatesEv>
 8747ffd:	89 04 24             	mov    %eax,(%esp)
 8748000:	e8 1b 5f 00 00       	call   874df20 <_ZN5yaSSL6States9useClientEv>
 8748005:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 874800b:	83 c4 14             	add    $0x14,%esp
 874800e:	5b                   	pop    %ebx
 874800f:	5d                   	pop    %ebp
 8748010:	c3                   	ret
 8748011:	90                   	nop
 8748012:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8748019:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerHelloDone::Process @ 0x8747fe0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHelloDone::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall
yaSSL::ServerHelloDone::Process(ServerHelloDone *this,input_buffer *param_1,SSL *param_2)

{
  States *this_00;
  undefined4 *puVar1;
  
  this_00 = (States *)SSL::useStates(param_2);
  puVar1 = (undefined4 *)States::useClient(this_00);
  *puVar1 = 4;
  return;
}

```

---

## ServerHelloDone

```asm
// === 08746e90 yaSSL::ServerHelloDone::ServerHelloDone  [0x08746e90-0x8746ecf] ===
 8746e90:	55                   	push   %ebp
 8746e91:	89 e5                	mov    %esp,%ebp
 8746e93:	53                   	push   %ebx
 8746e94:	e8 5f bf fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8746e99:	81 c3 ff 5c c2 00    	add    $0xc25cff,%ebx
 8746e9f:	83 ec 14             	sub    $0x14,%esp
 8746ea2:	8b 45 08             	mov    0x8(%ebp),%eax
 8746ea5:	8b 93 d4 ff ff ff    	mov    -0x2c(%ebx),%edx
 8746eab:	83 c2 08             	add    $0x8,%edx
 8746eae:	89 10                	mov    %edx,(%eax)
 8746eb0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8746eb7:	00 
 8746eb8:	89 04 24             	mov    %eax,(%esp)
 8746ebb:	e8 f0 fb ff ff       	call   8746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>
 8746ec0:	83 c4 14             	add    $0x14,%esp
 8746ec3:	5b                   	pop    %ebx
 8746ec4:	5d                   	pop    %ebp
 8746ec5:	c3                   	ret
 8746ec6:	8d 76 00             	lea    0x0(%esi),%esi
 8746ec9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerHelloDone::ServerHelloDone @ 0x8746e90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHelloDone::ServerHelloDone() */

void __thiscall yaSSL::ServerHelloDone::ServerHelloDone(ServerHelloDone *this)

{
  *(undefined **)this = PTR_vtable_0936cb6c + 8;
  HandShakeBase::set_length((HandShakeBase *)this,0);
  return;
}

```

---

## get

```asm
// === 08746ee0 yaSSL::ServerHelloDone::get  [0x08746ee0-0x8746eef] ===
 8746ee0:	55                   	push   %ebp
 8746ee1:	89 e5                	mov    %esp,%ebp
 8746ee3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746ee6:	5d                   	pop    %ebp
 8746ee7:	c3                   	ret
 8746ee8:	90                   	nop
 8746ee9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerHelloDone::get @ 0x8746ee0

/* yaSSL::ServerHelloDone::get(yaSSL::output_buffer&) const */

output_buffer * __thiscall yaSSL::ServerHelloDone::get(ServerHelloDone *this,output_buffer *param_1)

{
  return param_1;
}

```

---

## get_type

```asm
// === 08746ef0 yaSSL::ServerHelloDone::get_type  [0x08746ef0-0x8746eff] ===
 8746ef0:	55                   	push   %ebp
 8746ef1:	b8 0e 00 00 00       	mov    $0xe,%eax
 8746ef6:	89 e5                	mov    %esp,%ebp
 8746ef8:	5d                   	pop    %ebp
 8746ef9:	c3                   	ret
 8746efa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerHelloDone::get_type @ 0x8746ef0

/* yaSSL::ServerHelloDone::get_type() const */

undefined4 yaSSL::ServerHelloDone::get_type(void)

{
  return 0xe;
}

```

---

## set

```asm
// === 08746ed0 yaSSL::ServerHelloDone::set  [0x08746ed0-0x8746edf] ===
 8746ed0:	55                   	push   %ebp
 8746ed1:	89 e5                	mov    %esp,%ebp
 8746ed3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746ed6:	5d                   	pop    %ebp
 8746ed7:	c3                   	ret
 8746ed8:	90                   	nop
 8746ed9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerHelloDone::set @ 0x8746ed0

/* yaSSL::ServerHelloDone::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::ServerHelloDone::set(ServerHelloDone *this,input_buffer *param_1)

{
  return param_1;
}

```


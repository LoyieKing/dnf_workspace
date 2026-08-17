# yaSSL__Integer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## Integer

```asm
// === 08798dd0 yaSSL::Integer::Integer  [0x08798dd0-0x8798e1f] ===
 8798dd0:	55                   	push   %ebp
 8798dd1:	89 e5                	mov    %esp,%ebp
 8798dd3:	83 ec 18             	sub    $0x18,%esp
 8798dd6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798dd9:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798ddc:	e8 17 a0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798de1:	81 c3 b7 3d bd 00    	add    $0xbd3db7,%ebx
 8798de7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798dec:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8798df3:	e8 a8 7e fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8798df8:	89 c6                	mov    %eax,%esi
 8798dfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8798dfd:	8b 00                	mov    (%eax),%eax
 8798dff:	89 34 24             	mov    %esi,(%esp)
 8798e02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8798e06:	e8 65 64 fc ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8798e0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8798e0e:	89 30                	mov    %esi,(%eax)
 8798e10:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798e13:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798e16:	89 ec                	mov    %ebp,%esp
 8798e18:	5d                   	pop    %ebp
 8798e19:	c3                   	ret
 8798e1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Integer::Integer @ 0x8798dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::Integer(yaSSL::Integer const&) */

void __thiscall yaSSL::Integer::Integer(Integer *this,Integer *param_1)

{
  Integer *this_00;
  uint in_stack_ffffffe8;
  
  this_00 = operator_new(0x10,in_stack_ffffffe8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00,*(Integer **)param_1);
  *(Integer **)this = this_00;
  return;
}

```

---

## Integer_08798f00

```asm
// === 08798f00 yaSSL::Integer::Integer  [0x08798f00-0x8798f4f] ===
 8798f00:	55                   	push   %ebp
 8798f01:	89 e5                	mov    %esp,%ebp
 8798f03:	83 ec 18             	sub    $0x18,%esp
 8798f06:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798f09:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798f0c:	e8 e7 9e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798f11:	81 c3 87 3c bd 00    	add    $0xbd3c87,%ebx
 8798f17:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8798f1c:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8798f23:	e8 78 7d fb ff       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8798f28:	89 c6                	mov    %eax,%esi
 8798f2a:	89 04 24             	mov    %eax,(%esp)
 8798f2d:	e8 5e 66 fc ff       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8798f32:	8b 45 08             	mov    0x8(%ebp),%eax
 8798f35:	89 30                	mov    %esi,(%eax)
 8798f37:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798f3a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798f3d:	89 ec                	mov    %ebp,%esp
 8798f3f:	5d                   	pop    %ebp
 8798f40:	c3                   	ret
 8798f41:	90                   	nop
 8798f42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8798f49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Integer::Integer @ 0x8798f00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::Integer() */

void __thiscall yaSSL::Integer::Integer(Integer *this)

{
  Integer *this_00;
  
  this_00 = operator_new(0x10,0);
  TaoCrypt::Integer::Integer(this_00);
  *(Integer **)this = this_00;
  return;
}

```

---

## assign

```asm
// === 0879aae0 yaSSL::Integer::assign  [0x0879aae0-0x879ab5f] ===
 879aae0:	55                   	push   %ebp
 879aae1:	89 e5                	mov    %esp,%ebp
 879aae3:	56                   	push   %esi
 879aae4:	53                   	push   %ebx
 879aae5:	83 ec 20             	sub    $0x20,%esp
 879aae8:	8b 45 10             	mov    0x10(%ebp),%eax
 879aaeb:	e8 08 83 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879aaf0:	81 c3 a8 20 bd 00    	add    $0xbd20a8,%ebx
 879aaf6:	8d 75 e8             	lea    -0x18(%ebp),%esi
 879aaf9:	89 34 24             	mov    %esi,(%esp)
 879aafc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 879ab03:	00 
 879ab04:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ab08:	8b 45 0c             	mov    0xc(%ebp),%eax
 879ab0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 879ab0f:	e8 ec 67 fc ff       	call   8761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>
 879ab14:	8b 45 08             	mov    0x8(%ebp),%eax
 879ab17:	89 74 24 04          	mov    %esi,0x4(%esp)
 879ab1b:	8b 00                	mov    (%eax),%eax
 879ab1d:	89 04 24             	mov    %eax,(%esp)
 879ab20:	e8 3b 59 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 879ab25:	8b 45 e8             	mov    -0x18(%ebp),%eax
 879ab28:	8b 75 ec             	mov    -0x14(%ebp),%esi
 879ab2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879ab32:	00 
 879ab33:	c1 e0 02             	shl    $0x2,%eax
 879ab36:	89 34 24             	mov    %esi,(%esp)
 879ab39:	89 44 24 08          	mov    %eax,0x8(%esp)
 879ab3d:	e8 7e 31 8e ff       	call   807dcc0 <memset@plt>
 879ab42:	89 34 24             	mov    %esi,(%esp)
 879ab45:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879ab4a:	e8 d1 cb fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879ab4f:	83 c4 20             	add    $0x20,%esp
 879ab52:	5b                   	pop    %ebx
 879ab53:	5e                   	pop    %esi
 879ab54:	5d                   	pop    %ebp
 879ab55:	c3                   	ret
 879ab56:	8d 76 00             	lea    0x0(%esi),%esi
 879ab59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Integer::assign @ 0x879aae0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::assign(unsigned char const*, unsigned int) */

void __thiscall yaSSL::Integer::assign(Integer *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int local_1c;
  void *local_18;
  
  TaoCrypt::Integer::Integer((Integer *)&local_1c,param_1,param_2,0);
  TaoCrypt::Integer::operator=(*(Integer **)this,(Integer *)&local_1c);
  uVar1 = 0;
  memset(local_18,0,local_1c << 2);
  operator_delete__(local_18,uVar1 & 0xffffff00);
  return;
}

```

---

## operator=

```asm
// === 08798f50 yaSSL::Integer::operator=  [0x08798f50-0x8798f8f] ===
 8798f50:	55                   	push   %ebp
 8798f51:	89 e5                	mov    %esp,%ebp
 8798f53:	83 ec 18             	sub    $0x18,%esp
 8798f56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8798f59:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8798f5c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8798f5f:	8b 75 08             	mov    0x8(%ebp),%esi
 8798f62:	e8 91 9e f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8798f67:	81 c3 31 3c bd 00    	add    $0xbd3c31,%ebx
 8798f6d:	8b 00                	mov    (%eax),%eax
 8798f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8798f73:	8b 06                	mov    (%esi),%eax
 8798f75:	89 04 24             	mov    %eax,(%esp)
 8798f78:	e8 e3 74 fc ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8798f7d:	89 f0                	mov    %esi,%eax
 8798f7f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8798f82:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8798f85:	89 ec                	mov    %ebp,%esp
 8798f87:	5d                   	pop    %ebp
 8798f88:	c3                   	ret
 8798f89:	90                   	nop
 8798f8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Integer::operator= @ 0x8798f50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::TEMPNAMEPLACEHOLDERVALUE(yaSSL::Integer const&) */

Integer * __thiscall yaSSL::Integer::operator=(Integer *this,Integer *param_1)

{
  TaoCrypt::Integer::operator=(*(Integer **)this,*(Integer **)param_1);
  return this;
}

```

---

## ~Integer

```asm
// === 0879ae80 yaSSL::Integer::~Integer  [0x0879ae80-0x879aeef] ===
 879ae80:	55                   	push   %ebp
 879ae81:	89 e5                	mov    %esp,%ebp
 879ae83:	83 ec 28             	sub    $0x28,%esp
 879ae86:	8b 45 08             	mov    0x8(%ebp),%eax
 879ae89:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879ae8c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879ae8f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 879ae92:	8b 30                	mov    (%eax),%esi
 879ae94:	e8 5f 7f f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879ae99:	81 c3 ff 1c bd 00    	add    $0xbd1cff,%ebx
 879ae9f:	85 f6                	test   %esi,%esi
 879aea1:	74 29                	je     879aecc <_ZN5yaSSL7IntegerD1Ev+0x4c>
 879aea3:	8b 06                	mov    (%esi),%eax
 879aea5:	8b 7e 04             	mov    0x4(%esi),%edi
 879aea8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 879aeaf:	00 
 879aeb0:	c1 e0 02             	shl    $0x2,%eax
 879aeb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 879aeb7:	89 3c 24             	mov    %edi,(%esp)
 879aeba:	e8 01 2e 8e ff       	call   807dcc0 <memset@plt>
 879aebf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879aec4:	89 3c 24             	mov    %edi,(%esp)
 879aec7:	e8 54 c8 fc ff       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 879aecc:	89 34 24             	mov    %esi,(%esp)
 879aecf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879aed4:	e8 47 59 fb ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 879aed9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879aedc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879aedf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879aee2:	89 ec                	mov    %ebp,%esp
 879aee4:	5d                   	pop    %ebp
 879aee5:	c3                   	ret
 879aee6:	8d 76 00             	lea    0x0(%esi),%esi
 879aee9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Integer::~Integer @ 0x879ae80

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Integer::~Integer() */

void __thiscall yaSSL::Integer::~Integer(Integer *this)

{
  int *piVar1;
  void *__s;
  uint in_stack_ffffffd8;
  uint uVar2;
  
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    __s = (void *)piVar1[1];
    uVar2 = 0;
    memset(__s,0,*piVar1 << 2);
    in_stack_ffffffd8 = uVar2 & 0xffffff00;
    operator_delete__(__s,in_stack_ffffffd8);
  }
  operator_delete(piVar1,in_stack_ffffffd8 & 0xffffff00);
  return;
}

```


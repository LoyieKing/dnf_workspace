# SecurityRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## SecurityRestrictPolicy

```asm
// === 0816da50 SecurityRestrictPolicy::SecurityRestrictPolicy  [0x0816da50-0x816dadf] ===
 816da50:	55                   	push   %ebp
 816da51:	89 e5                	mov    %esp,%ebp
 816da53:	56                   	push   %esi
 816da54:	53                   	push   %ebx
 816da55:	83 ec 20             	sub    $0x20,%esp
 816da58:	8b 45 08             	mov    0x8(%ebp),%eax
 816da5b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 816da62:	00 
 816da63:	89 04 24             	mov    %eax,(%esp)
 816da66:	e8 2d 13 00 00       	call   816ed98 <_ZN22InterfaceServicePolicyC1EN16RestrictCategory4EnumE>
 816da6b:	8b 45 08             	mov    0x8(%ebp),%eax
 816da6e:	c7 00 a8 2e b8 08    	movl   $0x8b82ea8,(%eax)
 816da74:	8b 45 08             	mov    0x8(%ebp),%eax
 816da77:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816da7b:	8b 45 08             	mov    0x8(%ebp),%eax
 816da7e:	83 c0 0c             	add    $0xc,%eax
 816da81:	89 04 24             	mov    %eax,(%esp)
 816da84:	e8 e7 12 00 00       	call   816ed70 <_ZN13ServicePolicy4InitEv>
 816da89:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816da90:	eb 1f                	jmp    816dab1 <_ZN22SecurityRestrictPolicyC1Ev+0x61>
 816da92:	66 c7 45 f2 01 00    	movw   $0x1,-0xe(%ebp)
 816da98:	8b 45 08             	mov    0x8(%ebp),%eax
 816da9b:	8d 50 0c             	lea    0xc(%eax),%edx
 816da9e:	8d 45 f2             	lea    -0xe(%ebp),%eax
 816daa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 816daa5:	89 14 24             	mov    %edx,(%esp)
 816daa8:	e8 4d 14 00 00       	call   816eefa <_ZNSt6vectorIsSaIsEE9push_backEOs>
 816daad:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816dab1:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 816dab5:	0f 9e c0             	setle  %al
 816dab8:	84 c0                	test   %al,%al
 816daba:	75 d6                	jne    816da92 <_ZN22SecurityRestrictPolicyC1Ev+0x42>
 816dabc:	eb 1b                	jmp    816dad9 <_ZN22SecurityRestrictPolicyC1Ev+0x89>
 816dabe:	89 d3                	mov    %edx,%ebx
 816dac0:	89 c6                	mov    %eax,%esi
 816dac2:	8b 45 08             	mov    0x8(%ebp),%eax
 816dac5:	89 04 24             	mov    %eax,(%esp)
 816dac8:	e8 f3 12 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816dacd:	89 f0                	mov    %esi,%eax
 816dacf:	89 da                	mov    %ebx,%edx
 816dad1:	89 04 24             	mov    %eax,(%esp)
 816dad4:	e8 77 5c 97 00       	call   8ae3750 <_Unwind_Resume>
 816dad9:	83 c4 20             	add    $0x20,%esp
 816dadc:	5b                   	pop    %ebx
 816dadd:	5e                   	pop    %esi
 816dade:	5d                   	pop    %ebp
 816dadf:	c3                   	ret

```

```c
// SecurityRestrictPolicy::SecurityRestrictPolicy @ 0x816da50

/* SecurityRestrictPolicy::SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,3);
  *(undefined ***)this = &PTR__SecurityRestrictPolicy_08b82ea8;
  this[4] = (SecurityRestrictPolicy)0x0;
                    /* try { // try from 0816da84 to 0816daac has its CatchHandler @ 0816dabe */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    local_12 = 1;
    std::vector<short,std::allocator<short>>::push_back
              ((vector<short,std::allocator<short>> *)(this + 0xc),&local_12);
  }
  return;
}

```

---

## beginPolicy

```asm
// === 0816db2e SecurityRestrictPolicy::beginPolicy  [0x0816db2e-0x816db59] ===
 816db2e:	55                   	push   %ebp
 816db2f:	89 e5                	mov    %esp,%ebp
 816db31:	83 ec 18             	sub    $0x18,%esp
 816db34:	8b 45 08             	mov    0x8(%ebp),%eax
 816db37:	8d 48 0c             	lea    0xc(%eax),%ecx
 816db3a:	8b 45 08             	mov    0x8(%ebp),%eax
 816db3d:	8b 40 08             	mov    0x8(%eax),%eax
 816db40:	8b 55 0c             	mov    0xc(%ebp),%edx
 816db43:	89 54 24 08          	mov    %edx,0x8(%esp)
 816db47:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 816db4b:	89 04 24             	mov    %eax,(%esp)
 816db4e:	e8 3d f9 ff ff       	call   816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>
 816db53:	b8 01 00 00 00       	mov    $0x1,%eax
 816db58:	c9                   	leave
 816db59:	c3                   	ret

```

```c
// SecurityRestrictPolicy::beginPolicy @ 0x816db2e

/* SecurityRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
SecurityRestrictPolicy::beginPolicy(SecurityRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}

```

---

## endPolicy

```asm
// === 0816db5a SecurityRestrictPolicy::endPolicy  [0x0816db5a-0x816db65] ===
 816db5a:	55                   	push   %ebp
 816db5b:	89 e5                	mov    %esp,%ebp
 816db5d:	8b 45 08             	mov    0x8(%ebp),%eax
 816db60:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816db64:	5d                   	pop    %ebp
 816db65:	c3                   	ret

```

```c
// SecurityRestrictPolicy::endPolicy @ 0x816db5a

/* SecurityRestrictPolicy::endPolicy() */

void __thiscall SecurityRestrictPolicy::endPolicy(SecurityRestrictPolicy *this)

{
  this[4] = (SecurityRestrictPolicy)0x0;
  return;
}

```

---

## getRestrictValue

```asm
// === 0816dd22 SecurityRestrictPolicy::getRestrictValue  [0x0816dd22-0x816ddd1] ===
 816dd22:	55                   	push   %ebp
 816dd23:	89 e5                	mov    %esp,%ebp
 816dd25:	53                   	push   %ebx
 816dd26:	83 ec 24             	sub    $0x24,%esp
 816dd29:	8b 45 08             	mov    0x8(%ebp),%eax
 816dd2c:	89 04 24             	mov    %eax,(%esp)
 816dd2f:	e8 de 10 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816dd34:	89 c2                	mov    %eax,%edx
 816dd36:	8b 45 0c             	mov    0xc(%ebp),%eax
 816dd39:	89 10                	mov    %edx,(%eax)
 816dd3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 816dd3e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 816dd45:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 816dd4c:	eb 65                	jmp    816ddb3 <_ZN22SecurityRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE+0x91>
 816dd4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dd51:	89 04 24             	mov    %eax,(%esp)
 816dd54:	e8 28 f7 ff ff       	call   816d481 <_ZN16SecurityRestrict12enumToStringENS_4EnumE>
 816dd59:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816dd5c:	6b d2 2d             	imul   $0x2d,%edx,%edx
 816dd5f:	03 55 0c             	add    0xc(%ebp),%edx
 816dd62:	83 c2 08             	add    $0x8,%edx
 816dd65:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 816dd6c:	00 
 816dd6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 816dd71:	89 14 24             	mov    %edx,(%esp)
 816dd74:	e8 57 fb f0 ff       	call   807d8d0 <strncpy@plt>
 816dd79:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 816dd7c:	8b 45 08             	mov    0x8(%ebp),%eax
 816dd7f:	8d 50 0c             	lea    0xc(%eax),%edx
 816dd82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dd85:	89 44 24 04          	mov    %eax,0x4(%esp)
 816dd89:	89 14 24             	mov    %edx,(%esp)
 816dd8c:	e8 57 11 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816dd91:	0f b7 00             	movzwl (%eax),%eax
 816dd94:	89 c2                	mov    %eax,%edx
 816dd96:	8b 45 0c             	mov    0xc(%ebp),%eax
 816dd99:	88 94 18 9c 11 00 00 	mov    %dl,0x119c(%eax,%ebx,1)
 816dda0:	8b 45 0c             	mov    0xc(%ebp),%eax
 816dda3:	8b 40 04             	mov    0x4(%eax),%eax
 816dda6:	8d 50 01             	lea    0x1(%eax),%edx
 816dda9:	8b 45 0c             	mov    0xc(%ebp),%eax
 816ddac:	89 50 04             	mov    %edx,0x4(%eax)
 816ddaf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816ddb3:	8b 45 08             	mov    0x8(%ebp),%eax
 816ddb6:	83 c0 0c             	add    $0xc,%eax
 816ddb9:	89 04 24             	mov    %eax,(%esp)
 816ddbc:	e8 0d 11 00 00       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 816ddc1:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 816ddc4:	0f 97 c0             	seta   %al
 816ddc7:	84 c0                	test   %al,%al
 816ddc9:	75 83                	jne    816dd4e <_ZN22SecurityRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE+0x2c>
 816ddcb:	83 c4 24             	add    $0x24,%esp
 816ddce:	5b                   	pop    %ebx
 816ddcf:	5d                   	pop    %ebp
 816ddd0:	c3                   	ret
 816ddd1:	90                   	nop

```

```c
// SecurityRestrictPolicy::getRestrictValue @ 0x816dd22

/* SecurityRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
SecurityRestrictPolicy::getRestrictValue
          (SecurityRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

{
  undefined4 uVar1;
  char *__src;
  undefined2 *puVar2;
  uint uVar3;
  uint local_10;
  
  uVar1 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this);
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  local_10 = 1;
  while( true ) {
    uVar3 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar3 <= local_10) break;
    __src = (char *)SecurityRestrict::enumToString(local_10);
    strncpy((char *)(param_1 + local_10 * 0x2d + 8),__src,0x2d);
    puVar2 = (undefined2 *)
             std::vector<short,std::allocator<short>>::operator[]
                       ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    param_1[local_10 + 0x119c] = SUB21(*puVar2,0);
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## isApply

```asm
// === 0816db66 SecurityRestrictPolicy::isApply  [0x0816db66-0x816db71] ===
 816db66:	55                   	push   %ebp
 816db67:	89 e5                	mov    %esp,%ebp
 816db69:	8b 45 08             	mov    0x8(%ebp),%eax
 816db6c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 816db70:	5d                   	pop    %ebp
 816db71:	c3                   	ret

```

```c
// SecurityRestrictPolicy::isApply @ 0x816db66

/* SecurityRestrictPolicy::isApply() */

SecurityRestrictPolicy __thiscall SecurityRestrictPolicy::isApply(SecurityRestrictPolicy *this)

{
  return this[4];
}

```

---

## isApply_0816db72

```asm
// === 0816db72 SecurityRestrictPolicy::isApply  [0x0816db72-0x816dbe7] ===
 816db72:	55                   	push   %ebp
 816db73:	89 e5                	mov    %esp,%ebp
 816db75:	83 ec 28             	sub    $0x28,%esp
 816db78:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 816db7c:	7f 06                	jg     816db84 <_ZN22SecurityRestrictPolicy7isApplyEi+0x12>
 816db7e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816db82:	79 42                	jns    816dbc6 <_ZN22SecurityRestrictPolicy7isApplyEi+0x54>
 816db84:	8b 45 0c             	mov    0xc(%ebp),%eax
 816db87:	89 44 24 18          	mov    %eax,0x18(%esp)
 816db8b:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 816db92:	00 
 816db93:	c7 44 24 10 58 1c b8 	movl   $0x8b81c58,0x10(%esp)
 816db9a:	08 
 816db9b:	c7 44 24 0c cd 00 00 	movl   $0xcd,0xc(%esp)
 816dba2:	00 
 816dba3:	c7 44 24 08 00 2d b8 	movl   $0x8b82d00,0x8(%esp)
 816dbaa:	08 
 816dbab:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816dbb2:	08 
 816dbb3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816dbba:	e8 4b 60 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816dbbf:	b8 00 00 00 00       	mov    $0x0,%eax
 816dbc4:	eb 1f                	jmp    816dbe5 <_ZN22SecurityRestrictPolicy7isApplyEi+0x73>
 816dbc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 816dbc9:	8b 55 08             	mov    0x8(%ebp),%edx
 816dbcc:	83 c2 0c             	add    $0xc,%edx
 816dbcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 816dbd3:	89 14 24             	mov    %edx,(%esp)
 816dbd6:	e8 0d 13 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816dbdb:	0f b7 00             	movzwl (%eax),%eax
 816dbde:	66 83 f8 01          	cmp    $0x1,%ax
 816dbe2:	0f 94 c0             	sete   %al
 816dbe5:	c9                   	leave
 816dbe6:	c3                   	ret
 816dbe7:	90                   	nop

```

```c
// SecurityRestrictPolicy::isApply @ 0x816db72

/* SecurityRestrictPolicy::isApply(int) */

undefined2 __thiscall SecurityRestrictPolicy::isApply(SecurityRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 2) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool SecurityRestrictPolicy::isApply(int)",0xcd,
               "[Taiwan, Restrict] Invalid SecurityRestrictPolicy Parameter. End:%d, Param:%d",2,
               param_1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## printRestrict

```asm
// === 0816dbe8 SecurityRestrictPolicy::printRestrict  [0x0816dbe8-0x816dd21] ===
 816dbe8:	55                   	push   %ebp
 816dbe9:	89 e5                	mov    %esp,%ebp
 816dbeb:	56                   	push   %esi
 816dbec:	53                   	push   %ebx
 816dbed:	83 ec 60             	sub    $0x60,%esp
 816dbf0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816dbf7:	00 
 816dbf8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816dbff:	00 
 816dc00:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816dc07:	00 
 816dc08:	c7 44 24 08 d7 00 00 	movl   $0xd7,0x8(%esp)
 816dc0f:	00 
 816dc10:	c7 44 24 04 c0 2c b8 	movl   $0x8b82cc0,0x4(%esp)
 816dc17:	08 
 816dc18:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816dc1b:	89 04 24             	mov    %eax,(%esp)
 816dc1e:	e8 23 1b 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816dc23:	c7 44 24 04 a6 1c b8 	movl   $0x8b81ca6,0x4(%esp)
 816dc2a:	08 
 816dc2b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816dc2e:	89 04 24             	mov    %eax,(%esp)
 816dc31:	e8 52 1b 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816dc36:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816dc3d:	eb 7a                	jmp    816dcb9 <_ZN22SecurityRestrictPolicy13printRestrictEv+0xd1>
 816dc3f:	8b 45 08             	mov    0x8(%ebp),%eax
 816dc42:	8d 50 0c             	lea    0xc(%eax),%edx
 816dc45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dc48:	89 44 24 04          	mov    %eax,0x4(%esp)
 816dc4c:	89 14 24             	mov    %edx,(%esp)
 816dc4f:	e8 94 12 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816dc54:	0f b7 00             	movzwl (%eax),%eax
 816dc57:	0f bf f0             	movswl %ax,%esi
 816dc5a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dc5d:	89 04 24             	mov    %eax,(%esp)
 816dc60:	e8 1c f8 ff ff       	call   816d481 <_ZN16SecurityRestrict12enumToStringENS_4EnumE>
 816dc65:	89 c3                	mov    %eax,%ebx
 816dc67:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816dc6e:	00 
 816dc6f:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816dc76:	00 
 816dc77:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816dc7e:	00 
 816dc7f:	c7 44 24 08 da 00 00 	movl   $0xda,0x8(%esp)
 816dc86:	00 
 816dc87:	c7 44 24 04 c0 2c b8 	movl   $0x8b82cc0,0x4(%esp)
 816dc8e:	08 
 816dc8f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816dc92:	89 04 24             	mov    %eax,(%esp)
 816dc95:	e8 ac 1a 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816dc9a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816dc9e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816dca2:	c7 44 24 04 3b 1c b8 	movl   $0x8b81c3b,0x4(%esp)
 816dca9:	08 
 816dcaa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816dcad:	89 04 24             	mov    %eax,(%esp)
 816dcb0:	e8 d3 1a 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816dcb5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816dcb9:	8b 45 08             	mov    0x8(%ebp),%eax
 816dcbc:	83 c0 0c             	add    $0xc,%eax
 816dcbf:	89 04 24             	mov    %eax,(%esp)
 816dcc2:	e8 07 12 00 00       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 816dcc7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 816dcca:	0f 97 c0             	seta   %al
 816dccd:	84 c0                	test   %al,%al
 816dccf:	0f 85 6a ff ff ff    	jne    816dc3f <_ZN22SecurityRestrictPolicy13printRestrictEv+0x57>
 816dcd5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816dcdc:	00 
 816dcdd:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816dce4:	00 
 816dce5:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816dcec:	00 
 816dced:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 816dcf4:	00 
 816dcf5:	c7 44 24 04 c0 2c b8 	movl   $0x8b82cc0,0x4(%esp)
 816dcfc:	08 
 816dcfd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816dd00:	89 04 24             	mov    %eax,(%esp)
 816dd03:	e8 3e 1a 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816dd08:	c7 44 24 04 bf 1c b8 	movl   $0x8b81cbf,0x4(%esp)
 816dd0f:	08 
 816dd10:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816dd13:	89 04 24             	mov    %eax,(%esp)
 816dd16:	e8 6d 1a 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816dd1b:	83 c4 60             	add    $0x60,%esp
 816dd1e:	5b                   	pop    %ebx
 816dd1f:	5e                   	pop    %esi
 816dd20:	5d                   	pop    %ebp
 816dd21:	c3                   	ret

```

```c
// SecurityRestrictPolicy::printRestrict @ 0x816dbe8

/* SecurityRestrictPolicy::printRestrict() */

void __thiscall SecurityRestrictPolicy::printRestrict(SecurityRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void SecurityRestrictPolicy::printRestrict()",0xd7,9,true,
                     true);
  cMyTrace::operator()(local_40,"\tSecurity Restrict Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = SecurityRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void SecurityRestrictPolicy::printRestrict()",0xda,9,true,
                       true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void SecurityRestrictPolicy::printRestrict()",0xde,9,true,
                     true);
  cMyTrace::operator()(local_20,"\tSecurity Restrict End");
  return;
}

```

---

## ~SecurityRestrictPolicy

```asm
// === 0816dae0 SecurityRestrictPolicy::~SecurityRestrictPolicy  [0x0816dae0-0x816db0f] ===
 816dae0:	55                   	push   %ebp
 816dae1:	89 e5                	mov    %esp,%ebp
 816dae3:	83 ec 18             	sub    $0x18,%esp
 816dae6:	8b 45 08             	mov    0x8(%ebp),%eax
 816dae9:	c7 00 a8 2e b8 08    	movl   $0x8b82ea8,(%eax)
 816daef:	8b 45 08             	mov    0x8(%ebp),%eax
 816daf2:	89 04 24             	mov    %eax,(%esp)
 816daf5:	e8 c6 12 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816dafa:	b8 00 00 00 00       	mov    $0x0,%eax
 816daff:	84 c0                	test   %al,%al
 816db01:	74 0b                	je     816db0e <_ZN22SecurityRestrictPolicyD1Ev+0x2e>
 816db03:	8b 45 08             	mov    0x8(%ebp),%eax
 816db06:	89 04 24             	mov    %eax,(%esp)
 816db09:	e8 e2 69 5b 00       	call   87244f0 <_ZdlPv>
 816db0e:	c9                   	leave
 816db0f:	c3                   	ret

```

```c
// SecurityRestrictPolicy::~SecurityRestrictPolicy @ 0x816dae0

/* WARNING: Removing unreachable block (ram,0x0816db03) */
/* SecurityRestrictPolicy::~SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::~SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__SecurityRestrictPolicy_08b82ea8;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}

```

---

## ~SecurityRestrictPolicy_0816db10

```asm
// === 0816db10 SecurityRestrictPolicy::~SecurityRestrictPolicy  [0x0816db10-0x816db2d] ===
 816db10:	55                   	push   %ebp
 816db11:	89 e5                	mov    %esp,%ebp
 816db13:	83 ec 18             	sub    $0x18,%esp
 816db16:	8b 45 08             	mov    0x8(%ebp),%eax
 816db19:	89 04 24             	mov    %eax,(%esp)
 816db1c:	e8 bf ff ff ff       	call   816dae0 <_ZN22SecurityRestrictPolicyD1Ev>
 816db21:	8b 45 08             	mov    0x8(%ebp),%eax
 816db24:	89 04 24             	mov    %eax,(%esp)
 816db27:	e8 c4 69 5b 00       	call   87244f0 <_ZdlPv>
 816db2c:	c9                   	leave
 816db2d:	c3                   	ret

```

```c
// SecurityRestrictPolicy::~SecurityRestrictPolicy @ 0x816db10

/* SecurityRestrictPolicy::~SecurityRestrictPolicy() */

void __thiscall SecurityRestrictPolicy::~SecurityRestrictPolicy(SecurityRestrictPolicy *this)

{
  ~SecurityRestrictPolicy(this);
  operator_delete(this);
  return;
}

```


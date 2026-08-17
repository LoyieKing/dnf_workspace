# AuthMobileRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## AuthMobileRestrictPolicy

```asm
// === 0816d6ce AuthMobileRestrictPolicy::AuthMobileRestrictPolicy  [0x0816d6ce-0x816d75d] ===
 816d6ce:	55                   	push   %ebp
 816d6cf:	89 e5                	mov    %esp,%ebp
 816d6d1:	56                   	push   %esi
 816d6d2:	53                   	push   %ebx
 816d6d3:	83 ec 20             	sub    $0x20,%esp
 816d6d6:	8b 45 08             	mov    0x8(%ebp),%eax
 816d6d9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816d6e0:	00 
 816d6e1:	89 04 24             	mov    %eax,(%esp)
 816d6e4:	e8 af 16 00 00       	call   816ed98 <_ZN22InterfaceServicePolicyC1EN16RestrictCategory4EnumE>
 816d6e9:	8b 45 08             	mov    0x8(%ebp),%eax
 816d6ec:	c7 00 e8 2e b8 08    	movl   $0x8b82ee8,(%eax)
 816d6f2:	8b 45 08             	mov    0x8(%ebp),%eax
 816d6f5:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816d6f9:	8b 45 08             	mov    0x8(%ebp),%eax
 816d6fc:	83 c0 0c             	add    $0xc,%eax
 816d6ff:	89 04 24             	mov    %eax,(%esp)
 816d702:	e8 69 16 00 00       	call   816ed70 <_ZN13ServicePolicy4InitEv>
 816d707:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816d70e:	eb 1f                	jmp    816d72f <_ZN24AuthMobileRestrictPolicyC1Ev+0x61>
 816d710:	66 c7 45 f2 01 00    	movw   $0x1,-0xe(%ebp)
 816d716:	8b 45 08             	mov    0x8(%ebp),%eax
 816d719:	8d 50 0c             	lea    0xc(%eax),%edx
 816d71c:	8d 45 f2             	lea    -0xe(%ebp),%eax
 816d71f:	89 44 24 04          	mov    %eax,0x4(%esp)
 816d723:	89 14 24             	mov    %edx,(%esp)
 816d726:	e8 cf 17 00 00       	call   816eefa <_ZNSt6vectorIsSaIsEE9push_backEOs>
 816d72b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816d72f:	83 7d f4 21          	cmpl   $0x21,-0xc(%ebp)
 816d733:	0f 9e c0             	setle  %al
 816d736:	84 c0                	test   %al,%al
 816d738:	75 d6                	jne    816d710 <_ZN24AuthMobileRestrictPolicyC1Ev+0x42>
 816d73a:	eb 1b                	jmp    816d757 <_ZN24AuthMobileRestrictPolicyC1Ev+0x89>
 816d73c:	89 d3                	mov    %edx,%ebx
 816d73e:	89 c6                	mov    %eax,%esi
 816d740:	8b 45 08             	mov    0x8(%ebp),%eax
 816d743:	89 04 24             	mov    %eax,(%esp)
 816d746:	e8 75 16 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816d74b:	89 f0                	mov    %esi,%eax
 816d74d:	89 da                	mov    %ebx,%edx
 816d74f:	89 04 24             	mov    %eax,(%esp)
 816d752:	e8 f9 5f 97 00       	call   8ae3750 <_Unwind_Resume>
 816d757:	83 c4 20             	add    $0x20,%esp
 816d75a:	5b                   	pop    %ebx
 816d75b:	5e                   	pop    %esi
 816d75c:	5d                   	pop    %ebp
 816d75d:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::AuthMobileRestrictPolicy @ 0x816d6ce

/* AuthMobileRestrictPolicy::AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,1);
  *(undefined ***)this = &PTR__AuthMobileRestrictPolicy_08b82ee8;
  this[4] = (AuthMobileRestrictPolicy)0x0;
                    /* try { // try from 0816d702 to 0816d72a has its CatchHandler @ 0816d73c */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 0x22; local_10 = local_10 + 1) {
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
// === 0816d7ac AuthMobileRestrictPolicy::beginPolicy  [0x0816d7ac-0x816d7d7] ===
 816d7ac:	55                   	push   %ebp
 816d7ad:	89 e5                	mov    %esp,%ebp
 816d7af:	83 ec 18             	sub    $0x18,%esp
 816d7b2:	8b 45 08             	mov    0x8(%ebp),%eax
 816d7b5:	8d 48 0c             	lea    0xc(%eax),%ecx
 816d7b8:	8b 45 08             	mov    0x8(%ebp),%eax
 816d7bb:	8b 40 08             	mov    0x8(%eax),%eax
 816d7be:	8b 55 0c             	mov    0xc(%ebp),%edx
 816d7c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 816d7c5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 816d7c9:	89 04 24             	mov    %eax,(%esp)
 816d7cc:	e8 bf fc ff ff       	call   816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>
 816d7d1:	b8 01 00 00 00       	mov    $0x1,%eax
 816d7d6:	c9                   	leave
 816d7d7:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::beginPolicy @ 0x816d7ac

/* AuthMobileRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
AuthMobileRestrictPolicy::beginPolicy(AuthMobileRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}

```

---

## endPolicy

```asm
// === 0816d7d8 AuthMobileRestrictPolicy::endPolicy  [0x0816d7d8-0x816d7e3] ===
 816d7d8:	55                   	push   %ebp
 816d7d9:	89 e5                	mov    %esp,%ebp
 816d7db:	8b 45 08             	mov    0x8(%ebp),%eax
 816d7de:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816d7e2:	5d                   	pop    %ebp
 816d7e3:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::endPolicy @ 0x816d7d8

/* AuthMobileRestrictPolicy::endPolicy() */

void __thiscall AuthMobileRestrictPolicy::endPolicy(AuthMobileRestrictPolicy *this)

{
  this[4] = (AuthMobileRestrictPolicy)0x0;
  return;
}

```

---

## getRestrictValue

```asm
// === 0816d9a0 AuthMobileRestrictPolicy::getRestrictValue  [0x0816d9a0-0x816da4f] ===
 816d9a0:	55                   	push   %ebp
 816d9a1:	89 e5                	mov    %esp,%ebp
 816d9a3:	53                   	push   %ebx
 816d9a4:	83 ec 24             	sub    $0x24,%esp
 816d9a7:	8b 45 08             	mov    0x8(%ebp),%eax
 816d9aa:	89 04 24             	mov    %eax,(%esp)
 816d9ad:	e8 60 14 00 00       	call   816ee12 <_ZN22InterfaceServicePolicy7getCodeEv>
 816d9b2:	89 c2                	mov    %eax,%edx
 816d9b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 816d9b7:	89 10                	mov    %edx,(%eax)
 816d9b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 816d9bc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 816d9c3:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 816d9ca:	eb 65                	jmp    816da31 <_ZN24AuthMobileRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE+0x91>
 816d9cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816d9cf:	89 04 24             	mov    %eax,(%esp)
 816d9d2:	e8 8c fa ff ff       	call   816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>
 816d9d7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816d9da:	6b d2 2d             	imul   $0x2d,%edx,%edx
 816d9dd:	03 55 0c             	add    0xc(%ebp),%edx
 816d9e0:	83 c2 08             	add    $0x8,%edx
 816d9e3:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 816d9ea:	00 
 816d9eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 816d9ef:	89 14 24             	mov    %edx,(%esp)
 816d9f2:	e8 d9 fe f0 ff       	call   807d8d0 <strncpy@plt>
 816d9f7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 816d9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 816d9fd:	8d 50 0c             	lea    0xc(%eax),%edx
 816da00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816da03:	89 44 24 04          	mov    %eax,0x4(%esp)
 816da07:	89 14 24             	mov    %edx,(%esp)
 816da0a:	e8 d9 14 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816da0f:	0f b7 00             	movzwl (%eax),%eax
 816da12:	89 c2                	mov    %eax,%edx
 816da14:	8b 45 0c             	mov    0xc(%ebp),%eax
 816da17:	88 94 18 9c 11 00 00 	mov    %dl,0x119c(%eax,%ebx,1)
 816da1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 816da21:	8b 40 04             	mov    0x4(%eax),%eax
 816da24:	8d 50 01             	lea    0x1(%eax),%edx
 816da27:	8b 45 0c             	mov    0xc(%ebp),%eax
 816da2a:	89 50 04             	mov    %edx,0x4(%eax)
 816da2d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816da31:	8b 45 08             	mov    0x8(%ebp),%eax
 816da34:	83 c0 0c             	add    $0xc,%eax
 816da37:	89 04 24             	mov    %eax,(%esp)
 816da3a:	e8 8f 14 00 00       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 816da3f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 816da42:	0f 97 c0             	seta   %al
 816da45:	84 c0                	test   %al,%al
 816da47:	75 83                	jne    816d9cc <_ZN24AuthMobileRestrictPolicy16getRestrictValueERN6Taiwan21SigLoadRestrictPolicyE+0x2c>
 816da49:	83 c4 24             	add    $0x24,%esp
 816da4c:	5b                   	pop    %ebx
 816da4d:	5d                   	pop    %ebp
 816da4e:	c3                   	ret
 816da4f:	90                   	nop

```

```c
// AuthMobileRestrictPolicy::getRestrictValue @ 0x816d9a0

/* AuthMobileRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void __thiscall
AuthMobileRestrictPolicy::getRestrictValue
          (AuthMobileRestrictPolicy *this,SigLoadRestrictPolicy *param_1)

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
    __src = (char *)MobileRestrict::enumToString(local_10);
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
// === 0816d7e4 AuthMobileRestrictPolicy::isApply  [0x0816d7e4-0x816d7ef] ===
 816d7e4:	55                   	push   %ebp
 816d7e5:	89 e5                	mov    %esp,%ebp
 816d7e7:	8b 45 08             	mov    0x8(%ebp),%eax
 816d7ea:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 816d7ee:	5d                   	pop    %ebp
 816d7ef:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::isApply @ 0x816d7e4

/* AuthMobileRestrictPolicy::isApply() */

AuthMobileRestrictPolicy __thiscall
AuthMobileRestrictPolicy::isApply(AuthMobileRestrictPolicy *this)

{
  return this[4];
}

```

---

## isApply_0816d7f0

```asm
// === 0816d7f0 AuthMobileRestrictPolicy::isApply  [0x0816d7f0-0x816d865] ===
 816d7f0:	55                   	push   %ebp
 816d7f1:	89 e5                	mov    %esp,%ebp
 816d7f3:	83 ec 28             	sub    $0x28,%esp
 816d7f6:	83 7d 0c 21          	cmpl   $0x21,0xc(%ebp)
 816d7fa:	7f 06                	jg     816d802 <_ZN24AuthMobileRestrictPolicy7isApplyEi+0x12>
 816d7fc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816d800:	79 42                	jns    816d844 <_ZN24AuthMobileRestrictPolicy7isApplyEi+0x54>
 816d802:	8b 45 0c             	mov    0xc(%ebp),%eax
 816d805:	89 44 24 18          	mov    %eax,0x18(%esp)
 816d809:	c7 44 24 14 22 00 00 	movl   $0x22,0x14(%esp)
 816d810:	00 
 816d811:	c7 44 24 10 d8 1b b8 	movl   $0x8b81bd8,0x10(%esp)
 816d818:	08 
 816d819:	c7 44 24 0c 84 00 00 	movl   $0x84,0xc(%esp)
 816d820:	00 
 816d821:	c7 44 24 08 80 2d b8 	movl   $0x8b82d80,0x8(%esp)
 816d828:	08 
 816d829:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816d830:	08 
 816d831:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816d838:	e8 cd 63 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816d83d:	b8 00 00 00 00       	mov    $0x0,%eax
 816d842:	eb 1f                	jmp    816d863 <_ZN24AuthMobileRestrictPolicy7isApplyEi+0x73>
 816d844:	8b 45 0c             	mov    0xc(%ebp),%eax
 816d847:	8b 55 08             	mov    0x8(%ebp),%edx
 816d84a:	83 c2 0c             	add    $0xc,%edx
 816d84d:	89 44 24 04          	mov    %eax,0x4(%esp)
 816d851:	89 14 24             	mov    %edx,(%esp)
 816d854:	e8 8f 16 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816d859:	0f b7 00             	movzwl (%eax),%eax
 816d85c:	66 83 f8 01          	cmp    $0x1,%ax
 816d860:	0f 94 c0             	sete   %al
 816d863:	c9                   	leave
 816d864:	c3                   	ret
 816d865:	90                   	nop

```

```c
// AuthMobileRestrictPolicy::isApply @ 0x816d7f0

/* AuthMobileRestrictPolicy::isApply(int) */

undefined2 __thiscall AuthMobileRestrictPolicy::isApply(AuthMobileRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 0x22) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool AuthMobileRestrictPolicy::isApply(int)",0x84,
               "[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",
               0x22,param_1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## printRestrict

```asm
// === 0816d866 AuthMobileRestrictPolicy::printRestrict  [0x0816d866-0x816d99f] ===
 816d866:	55                   	push   %ebp
 816d867:	89 e5                	mov    %esp,%ebp
 816d869:	56                   	push   %esi
 816d86a:	53                   	push   %ebx
 816d86b:	83 ec 60             	sub    $0x60,%esp
 816d86e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816d875:	00 
 816d876:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816d87d:	00 
 816d87e:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816d885:	00 
 816d886:	c7 44 24 08 8d 00 00 	movl   $0x8d,0x8(%esp)
 816d88d:	00 
 816d88e:	c7 44 24 04 40 2d b8 	movl   $0x8b82d40,0x4(%esp)
 816d895:	08 
 816d896:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816d899:	89 04 24             	mov    %eax,(%esp)
 816d89c:	e8 a5 1e 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816d8a1:	c7 44 24 04 28 1c b8 	movl   $0x8b81c28,0x4(%esp)
 816d8a8:	08 
 816d8a9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816d8ac:	89 04 24             	mov    %eax,(%esp)
 816d8af:	e8 d4 1e 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816d8b4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816d8bb:	eb 7a                	jmp    816d937 <_ZN24AuthMobileRestrictPolicy13printRestrictEv+0xd1>
 816d8bd:	8b 45 08             	mov    0x8(%ebp),%eax
 816d8c0:	8d 50 0c             	lea    0xc(%eax),%edx
 816d8c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816d8c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 816d8ca:	89 14 24             	mov    %edx,(%esp)
 816d8cd:	e8 16 16 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816d8d2:	0f b7 00             	movzwl (%eax),%eax
 816d8d5:	0f bf f0             	movswl %ax,%esi
 816d8d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816d8db:	89 04 24             	mov    %eax,(%esp)
 816d8de:	e8 80 fb ff ff       	call   816d463 <_ZN14MobileRestrict12enumToStringENS_4EnumE>
 816d8e3:	89 c3                	mov    %eax,%ebx
 816d8e5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816d8ec:	00 
 816d8ed:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816d8f4:	00 
 816d8f5:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816d8fc:	00 
 816d8fd:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 816d904:	00 
 816d905:	c7 44 24 04 40 2d b8 	movl   $0x8b82d40,0x4(%esp)
 816d90c:	08 
 816d90d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816d910:	89 04 24             	mov    %eax,(%esp)
 816d913:	e8 2e 1e 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816d918:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816d91c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816d920:	c7 44 24 04 3b 1c b8 	movl   $0x8b81c3b,0x4(%esp)
 816d927:	08 
 816d928:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816d92b:	89 04 24             	mov    %eax,(%esp)
 816d92e:	e8 55 1e 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816d933:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816d937:	8b 45 08             	mov    0x8(%ebp),%eax
 816d93a:	83 c0 0c             	add    $0xc,%eax
 816d93d:	89 04 24             	mov    %eax,(%esp)
 816d940:	e8 89 15 00 00       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 816d945:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 816d948:	0f 97 c0             	seta   %al
 816d94b:	84 c0                	test   %al,%al
 816d94d:	0f 85 6a ff ff ff    	jne    816d8bd <_ZN24AuthMobileRestrictPolicy13printRestrictEv+0x57>
 816d953:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816d95a:	00 
 816d95b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816d962:	00 
 816d963:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816d96a:	00 
 816d96b:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 816d972:	00 
 816d973:	c7 44 24 04 40 2d b8 	movl   $0x8b82d40,0x4(%esp)
 816d97a:	08 
 816d97b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816d97e:	89 04 24             	mov    %eax,(%esp)
 816d981:	e8 c0 1d 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816d986:	c7 44 24 04 46 1c b8 	movl   $0x8b81c46,0x4(%esp)
 816d98d:	08 
 816d98e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816d991:	89 04 24             	mov    %eax,(%esp)
 816d994:	e8 ef 1d 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816d999:	83 c4 60             	add    $0x60,%esp
 816d99c:	5b                   	pop    %ebx
 816d99d:	5e                   	pop    %esi
 816d99e:	5d                   	pop    %ebp
 816d99f:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::printRestrict @ 0x816d866

/* AuthMobileRestrictPolicy::printRestrict() */

void __thiscall AuthMobileRestrictPolicy::printRestrict(AuthMobileRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x8d,9,true,
                     true);
  cMyTrace::operator()(local_40,"\tMobile Auth Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = MobileRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x90,9,true
                       ,true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void AuthMobileRestrictPolicy::printRestrict()",0x94,9,true,
                     true);
  cMyTrace::operator()(local_20,"\tMobile Auth End");
  return;
}

```

---

## ~AuthMobileRestrictPolicy

```asm
// === 0816d75e AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy  [0x0816d75e-0x816d78d] ===
 816d75e:	55                   	push   %ebp
 816d75f:	89 e5                	mov    %esp,%ebp
 816d761:	83 ec 18             	sub    $0x18,%esp
 816d764:	8b 45 08             	mov    0x8(%ebp),%eax
 816d767:	c7 00 e8 2e b8 08    	movl   $0x8b82ee8,(%eax)
 816d76d:	8b 45 08             	mov    0x8(%ebp),%eax
 816d770:	89 04 24             	mov    %eax,(%esp)
 816d773:	e8 48 16 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816d778:	b8 00 00 00 00       	mov    $0x0,%eax
 816d77d:	84 c0                	test   %al,%al
 816d77f:	74 0b                	je     816d78c <_ZN24AuthMobileRestrictPolicyD1Ev+0x2e>
 816d781:	8b 45 08             	mov    0x8(%ebp),%eax
 816d784:	89 04 24             	mov    %eax,(%esp)
 816d787:	e8 64 6d 5b 00       	call   87244f0 <_ZdlPv>
 816d78c:	c9                   	leave
 816d78d:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy @ 0x816d75e

/* WARNING: Removing unreachable block (ram,0x0816d781) */
/* AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__AuthMobileRestrictPolicy_08b82ee8;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}

```

---

## ~AuthMobileRestrictPolicy_0816d78e

```asm
// === 0816d78e AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy  [0x0816d78e-0x816d7ab] ===
 816d78e:	55                   	push   %ebp
 816d78f:	89 e5                	mov    %esp,%ebp
 816d791:	83 ec 18             	sub    $0x18,%esp
 816d794:	8b 45 08             	mov    0x8(%ebp),%eax
 816d797:	89 04 24             	mov    %eax,(%esp)
 816d79a:	e8 bf ff ff ff       	call   816d75e <_ZN24AuthMobileRestrictPolicyD1Ev>
 816d79f:	8b 45 08             	mov    0x8(%ebp),%eax
 816d7a2:	89 04 24             	mov    %eax,(%esp)
 816d7a5:	e8 46 6d 5b 00       	call   87244f0 <_ZdlPv>
 816d7aa:	c9                   	leave
 816d7ab:	c3                   	ret

```

```c
// AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy @ 0x816d78e

/* AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy() */

void __thiscall AuthMobileRestrictPolicy::~AuthMobileRestrictPolicy(AuthMobileRestrictPolicy *this)

{
  ~AuthMobileRestrictPolicy(this);
  operator_delete(this);
  return;
}

```


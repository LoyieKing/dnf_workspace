# CreateCharacterRestrictPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CreateCharacterRestrictPolicy

```asm
// === 0816ddd2 CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy  [0x0816ddd2-0x816de63] ===
 816ddd2:	55                   	push   %ebp
 816ddd3:	89 e5                	mov    %esp,%ebp
 816ddd5:	56                   	push   %esi
 816ddd6:	53                   	push   %ebx
 816ddd7:	83 ec 20             	sub    $0x20,%esp
 816ddda:	8b 45 08             	mov    0x8(%ebp),%eax
 816dddd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816dde4:	00 
 816dde5:	89 04 24             	mov    %eax,(%esp)
 816dde8:	e8 ab 0f 00 00       	call   816ed98 <_ZN22InterfaceServicePolicyC1EN16RestrictCategory4EnumE>
 816dded:	8b 45 08             	mov    0x8(%ebp),%eax
 816ddf0:	c7 00 68 2e b8 08    	movl   $0x8b82e68,(%eax)
 816ddf6:	8b 45 08             	mov    0x8(%ebp),%eax
 816ddf9:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816ddfd:	8b 45 08             	mov    0x8(%ebp),%eax
 816de00:	83 c0 0c             	add    $0xc,%eax
 816de03:	89 04 24             	mov    %eax,(%esp)
 816de06:	e8 65 0f 00 00       	call   816ed70 <_ZN13ServicePolicy4InitEv>
 816de0b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816de12:	eb 20                	jmp    816de34 <_ZN29CreateCharacterRestrictPolicyC1Ev+0x62>
 816de14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816de17:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 816de1b:	8b 45 08             	mov    0x8(%ebp),%eax
 816de1e:	8d 50 0c             	lea    0xc(%eax),%edx
 816de21:	8d 45 f2             	lea    -0xe(%ebp),%eax
 816de24:	89 44 24 04          	mov    %eax,0x4(%esp)
 816de28:	89 14 24             	mov    %edx,(%esp)
 816de2b:	e8 ca 10 00 00       	call   816eefa <_ZNSt6vectorIsSaIsEE9push_backEOs>
 816de30:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816de34:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 816de38:	0f 9e c0             	setle  %al
 816de3b:	84 c0                	test   %al,%al
 816de3d:	75 d5                	jne    816de14 <_ZN29CreateCharacterRestrictPolicyC1Ev+0x42>
 816de3f:	eb 1b                	jmp    816de5c <_ZN29CreateCharacterRestrictPolicyC1Ev+0x8a>
 816de41:	89 d3                	mov    %edx,%ebx
 816de43:	89 c6                	mov    %eax,%esi
 816de45:	8b 45 08             	mov    0x8(%ebp),%eax
 816de48:	89 04 24             	mov    %eax,(%esp)
 816de4b:	e8 70 0f 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816de50:	89 f0                	mov    %esi,%eax
 816de52:	89 da                	mov    %ebx,%edx
 816de54:	89 04 24             	mov    %eax,(%esp)
 816de57:	e8 f4 58 97 00       	call   8ae3750 <_Unwind_Resume>
 816de5c:	83 c4 20             	add    $0x20,%esp
 816de5f:	5b                   	pop    %ebx
 816de60:	5e                   	pop    %esi
 816de61:	5d                   	pop    %ebp
 816de62:	c3                   	ret
 816de63:	90                   	nop

```

```c
// CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy @ 0x816ddd2

/* CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  short local_12;
  int local_10;
  
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,2);
  *(undefined ***)this = &PTR__CreateCharacterRestrictPolicy_08b82e68;
  this[4] = (CreateCharacterRestrictPolicy)0x0;
                    /* try { // try from 0816de06 to 0816de2f has its CatchHandler @ 0816de41 */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    local_12 = (short)local_10;
    std::vector<short,std::allocator<short>>::push_back
              ((vector<short,std::allocator<short>> *)(this + 0xc),&local_12);
  }
  return;
}

```

---

## beginPolicy

```asm
// === 0816deb2 CreateCharacterRestrictPolicy::beginPolicy  [0x0816deb2-0x816dedd] ===
 816deb2:	55                   	push   %ebp
 816deb3:	89 e5                	mov    %esp,%ebp
 816deb5:	83 ec 18             	sub    $0x18,%esp
 816deb8:	8b 45 08             	mov    0x8(%ebp),%eax
 816debb:	8d 48 0c             	lea    0xc(%eax),%ecx
 816debe:	8b 45 08             	mov    0x8(%ebp),%eax
 816dec1:	8b 40 08             	mov    0x8(%eax),%eax
 816dec4:	8b 55 0c             	mov    0xc(%ebp),%edx
 816dec7:	89 54 24 08          	mov    %edx,0x8(%esp)
 816decb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 816decf:	89 04 24             	mov    %eax,(%esp)
 816ded2:	e8 b9 f5 ff ff       	call   816d490 <_ZL19setPolicyApplyValueN16RestrictCategory4EnumER13ServicePolicyRKSs>
 816ded7:	b8 01 00 00 00       	mov    $0x1,%eax
 816dedc:	c9                   	leave
 816dedd:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::beginPolicy @ 0x816deb2

/* CreateCharacterRestrictPolicy::beginPolicy(std::string const&) */

undefined4 __thiscall
CreateCharacterRestrictPolicy::beginPolicy(CreateCharacterRestrictPolicy *this,string *param_1)

{
  setPolicyApplyValue(*(undefined4 *)(this + 8),this + 0xc,param_1);
  return 1;
}

```

---

## endPolicy

```asm
// === 0816dede CreateCharacterRestrictPolicy::endPolicy  [0x0816dede-0x816dee9] ===
 816dede:	55                   	push   %ebp
 816dedf:	89 e5                	mov    %esp,%ebp
 816dee1:	8b 45 08             	mov    0x8(%ebp),%eax
 816dee4:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816dee8:	5d                   	pop    %ebp
 816dee9:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::endPolicy @ 0x816dede

/* CreateCharacterRestrictPolicy::endPolicy() */

void __thiscall CreateCharacterRestrictPolicy::endPolicy(CreateCharacterRestrictPolicy *this)

{
  this[4] = (CreateCharacterRestrictPolicy)0x0;
  return;
}

```

---

## getRestrictValue

```asm
// === 0816e0a6 CreateCharacterRestrictPolicy::getRestrictValue  [0x0816e0a6-0x816e0ab] ===
 816e0a6:	55                   	push   %ebp
 816e0a7:	89 e5                	mov    %esp,%ebp
 816e0a9:	5d                   	pop    %ebp
 816e0aa:	c3                   	ret
 816e0ab:	90                   	nop

```

```c
// CreateCharacterRestrictPolicy::getRestrictValue @ 0x816e0a6

/* CreateCharacterRestrictPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void CreateCharacterRestrictPolicy::getRestrictValue(SigLoadRestrictPolicy *param_1)

{
  return;
}

```

---

## isApply

```asm
// === 0816deea CreateCharacterRestrictPolicy::isApply  [0x0816deea-0x816def5] ===
 816deea:	55                   	push   %ebp
 816deeb:	89 e5                	mov    %esp,%ebp
 816deed:	8b 45 08             	mov    0x8(%ebp),%eax
 816def0:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 816def4:	5d                   	pop    %ebp
 816def5:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::isApply @ 0x816deea

/* CreateCharacterRestrictPolicy::isApply() */

CreateCharacterRestrictPolicy __thiscall
CreateCharacterRestrictPolicy::isApply(CreateCharacterRestrictPolicy *this)

{
  return this[4];
}

```

---

## isApply_0816def6

```asm
// === 0816def6 CreateCharacterRestrictPolicy::isApply  [0x0816def6-0x816df6b] ===
 816def6:	55                   	push   %ebp
 816def7:	89 e5                	mov    %esp,%ebp
 816def9:	83 ec 28             	sub    $0x28,%esp
 816defc:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 816df00:	7f 06                	jg     816df08 <_ZN29CreateCharacterRestrictPolicy7isApplyEi+0x12>
 816df02:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 816df06:	79 42                	jns    816df4a <_ZN29CreateCharacterRestrictPolicy7isApplyEi+0x54>
 816df08:	8b 45 0c             	mov    0xc(%ebp),%eax
 816df0b:	89 44 24 18          	mov    %eax,0x18(%esp)
 816df0f:	c7 44 24 14 03 00 00 	movl   $0x3,0x14(%esp)
 816df16:	00 
 816df17:	c7 44 24 10 d8 1b b8 	movl   $0x8b81bd8,0x10(%esp)
 816df1e:	08 
 816df1f:	c7 44 24 0c 1c 01 00 	movl   $0x11c,0xc(%esp)
 816df26:	00 
 816df27:	c7 44 24 08 80 2c b8 	movl   $0x8b82c80,0x8(%esp)
 816df2e:	08 
 816df2f:	c7 44 24 04 98 1b b8 	movl   $0x8b81b98,0x4(%esp)
 816df36:	08 
 816df37:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816df3e:	e8 c7 5c 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816df43:	b8 00 00 00 00       	mov    $0x0,%eax
 816df48:	eb 1f                	jmp    816df69 <_ZN29CreateCharacterRestrictPolicy7isApplyEi+0x73>
 816df4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816df4d:	8b 55 08             	mov    0x8(%ebp),%edx
 816df50:	83 c2 0c             	add    $0xc,%edx
 816df53:	89 44 24 04          	mov    %eax,0x4(%esp)
 816df57:	89 14 24             	mov    %edx,(%esp)
 816df5a:	e8 89 0f 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816df5f:	0f b7 00             	movzwl (%eax),%eax
 816df62:	66 83 f8 01          	cmp    $0x1,%ax
 816df66:	0f 94 c0             	sete   %al
 816df69:	c9                   	leave
 816df6a:	c3                   	ret
 816df6b:	90                   	nop

```

```c
// CreateCharacterRestrictPolicy::isApply @ 0x816def6

/* CreateCharacterRestrictPolicy::isApply(int) */

undefined2 __thiscall
CreateCharacterRestrictPolicy::isApply(CreateCharacterRestrictPolicy *this,int param_1)

{
  undefined2 uVar1;
  short *psVar2;
  
  if ((param_1 < 3) && (-1 < param_1)) {
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),param_1);
    uVar1 = CONCAT11((char)((ushort)*psVar2 >> 8),*psVar2 == 1);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "virtual bool CreateCharacterRestrictPolicy::isApply(int)",0x11c,
               "[Taiwan, Restrict] Invalid AuthMobileRestrictPolicy Parameter. End:%d, Param:%d",3,
               param_1);
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## printRestrict

```asm
// === 0816df6c CreateCharacterRestrictPolicy::printRestrict  [0x0816df6c-0x816e0a5] ===
 816df6c:	55                   	push   %ebp
 816df6d:	89 e5                	mov    %esp,%ebp
 816df6f:	56                   	push   %esi
 816df70:	53                   	push   %ebx
 816df71:	83 ec 60             	sub    $0x60,%esp
 816df74:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816df7b:	00 
 816df7c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816df83:	00 
 816df84:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816df8b:	00 
 816df8c:	c7 44 24 08 25 01 00 	movl   $0x125,0x8(%esp)
 816df93:	00 
 816df94:	c7 44 24 04 40 2c b8 	movl   $0x8b82c40,0x4(%esp)
 816df9b:	08 
 816df9c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816df9f:	89 04 24             	mov    %eax,(%esp)
 816dfa2:	e8 9f 17 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816dfa7:	c7 44 24 04 d6 1c b8 	movl   $0x8b81cd6,0x4(%esp)
 816dfae:	08 
 816dfaf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 816dfb2:	89 04 24             	mov    %eax,(%esp)
 816dfb5:	e8 ce 17 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816dfba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 816dfc1:	eb 7a                	jmp    816e03d <_ZN29CreateCharacterRestrictPolicy13printRestrictEv+0xd1>
 816dfc3:	8b 45 08             	mov    0x8(%ebp),%eax
 816dfc6:	8d 50 0c             	lea    0xc(%eax),%edx
 816dfc9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dfcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 816dfd0:	89 14 24             	mov    %edx,(%esp)
 816dfd3:	e8 10 0f 00 00       	call   816eee8 <_ZNSt6vectorIsSaIsEEixEj>
 816dfd8:	0f b7 00             	movzwl (%eax),%eax
 816dfdb:	0f bf f0             	movswl %ax,%esi
 816dfde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816dfe1:	89 04 24             	mov    %eax,(%esp)
 816dfe4:	e8 89 f4 ff ff       	call   816d472 <_ZN17CharacterRestrict12enumToStringENS_4EnumE>
 816dfe9:	89 c3                	mov    %eax,%ebx
 816dfeb:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816dff2:	00 
 816dff3:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816dffa:	00 
 816dffb:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816e002:	00 
 816e003:	c7 44 24 08 28 01 00 	movl   $0x128,0x8(%esp)
 816e00a:	00 
 816e00b:	c7 44 24 04 40 2c b8 	movl   $0x8b82c40,0x4(%esp)
 816e012:	08 
 816e013:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816e016:	89 04 24             	mov    %eax,(%esp)
 816e019:	e8 28 17 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816e01e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816e022:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816e026:	c7 44 24 04 3b 1c b8 	movl   $0x8b81c3b,0x4(%esp)
 816e02d:	08 
 816e02e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816e031:	89 04 24             	mov    %eax,(%esp)
 816e034:	e8 4f 17 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816e039:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 816e03d:	8b 45 08             	mov    0x8(%ebp),%eax
 816e040:	83 c0 0c             	add    $0xc,%eax
 816e043:	89 04 24             	mov    %eax,(%esp)
 816e046:	e8 83 0e 00 00       	call   816eece <_ZNKSt6vectorIsSaIsEE4sizeEv>
 816e04b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 816e04e:	0f 97 c0             	seta   %al
 816e051:	84 c0                	test   %al,%al
 816e053:	0f 85 6a ff ff ff    	jne    816dfc3 <_ZN29CreateCharacterRestrictPolicy13printRestrictEv+0x57>
 816e059:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816e060:	00 
 816e061:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816e068:	00 
 816e069:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816e070:	00 
 816e071:	c7 44 24 08 2c 01 00 	movl   $0x12c,0x8(%esp)
 816e078:	00 
 816e079:	c7 44 24 04 40 2c b8 	movl   $0x8b82c40,0x4(%esp)
 816e080:	08 
 816e081:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816e084:	89 04 24             	mov    %eax,(%esp)
 816e087:	e8 ba 16 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816e08c:	c7 44 24 04 ee 1c b8 	movl   $0x8b81cee,0x4(%esp)
 816e093:	08 
 816e094:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 816e097:	89 04 24             	mov    %eax,(%esp)
 816e09a:	e8 e9 16 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816e09f:	83 c4 60             	add    $0x60,%esp
 816e0a2:	5b                   	pop    %ebx
 816e0a3:	5e                   	pop    %esi
 816e0a4:	5d                   	pop    %ebp
 816e0a5:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::printRestrict @ 0x816df6c

/* CreateCharacterRestrictPolicy::printRestrict() */

void __thiscall CreateCharacterRestrictPolicy::printRestrict(CreateCharacterRestrictPolicy *this)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  uint uVar4;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  uint local_10;
  
  cMyTrace::cMyTrace(local_40,"virtual void CreateCharacterRestrictPolicy::printRestrict()",0x125,9,
                     true,true);
  cMyTrace::operator()(local_40,"\tCreate Character Begin");
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<short,std::allocator<short>>::size
                      ((vector<short,std::allocator<short>> *)(this + 0xc));
    if (uVar4 <= local_10) break;
    psVar2 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                ((vector<short,std::allocator<short>> *)(this + 0xc),local_10);
    sVar1 = *psVar2;
    uVar3 = CharacterRestrict::enumToString(local_10);
    cMyTrace::cMyTrace(local_30,"virtual void CreateCharacterRestrictPolicy::printRestrict()",0x128,
                       9,true,true);
    cMyTrace::operator()(local_30,"\t- %s : %d",uVar3,(int)sVar1);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_20,"virtual void CreateCharacterRestrictPolicy::printRestrict()",300,9,
                     true,true);
  cMyTrace::operator()(local_20,"\tCreate Character End");
  return;
}

```

---

## ~CreateCharacterRestrictPolicy

```asm
// === 0816de64 CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy  [0x0816de64-0x816de93] ===
 816de64:	55                   	push   %ebp
 816de65:	89 e5                	mov    %esp,%ebp
 816de67:	83 ec 18             	sub    $0x18,%esp
 816de6a:	8b 45 08             	mov    0x8(%ebp),%eax
 816de6d:	c7 00 68 2e b8 08    	movl   $0x8b82e68,(%eax)
 816de73:	8b 45 08             	mov    0x8(%ebp),%eax
 816de76:	89 04 24             	mov    %eax,(%esp)
 816de79:	e8 42 0f 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816de7e:	b8 00 00 00 00       	mov    $0x0,%eax
 816de83:	84 c0                	test   %al,%al
 816de85:	74 0b                	je     816de92 <_ZN29CreateCharacterRestrictPolicyD1Ev+0x2e>
 816de87:	8b 45 08             	mov    0x8(%ebp),%eax
 816de8a:	89 04 24             	mov    %eax,(%esp)
 816de8d:	e8 5e 66 5b 00       	call   87244f0 <_ZdlPv>
 816de92:	c9                   	leave
 816de93:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy @ 0x816de64

/* WARNING: Removing unreachable block (ram,0x0816de87) */
/* CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  *(undefined ***)this = &PTR__CreateCharacterRestrictPolicy_08b82e68;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}

```

---

## ~CreateCharacterRestrictPolicy_0816de94

```asm
// === 0816de94 CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy  [0x0816de94-0x816deb1] ===
 816de94:	55                   	push   %ebp
 816de95:	89 e5                	mov    %esp,%ebp
 816de97:	83 ec 18             	sub    $0x18,%esp
 816de9a:	8b 45 08             	mov    0x8(%ebp),%eax
 816de9d:	89 04 24             	mov    %eax,(%esp)
 816dea0:	e8 bf ff ff ff       	call   816de64 <_ZN29CreateCharacterRestrictPolicyD1Ev>
 816dea5:	8b 45 08             	mov    0x8(%ebp),%eax
 816dea8:	89 04 24             	mov    %eax,(%esp)
 816deab:	e8 40 66 5b 00       	call   87244f0 <_ZdlPv>
 816deb0:	c9                   	leave
 816deb1:	c3                   	ret

```

```c
// CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy @ 0x816de94

/* CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy() */

void __thiscall
CreateCharacterRestrictPolicy::~CreateCharacterRestrictPolicy(CreateCharacterRestrictPolicy *this)

{
  ~CreateCharacterRestrictPolicy(this);
  operator_delete(this);
  return;
}

```


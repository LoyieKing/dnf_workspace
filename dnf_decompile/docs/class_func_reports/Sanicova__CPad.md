# Sanicova__CPad

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## GenerateRandomData

```asm
// === 085998ea Sanicova::CPad::GenerateRandomData  [0x085998ea-0x8599917] ===
 85998ea:	55                   	push   %ebp
 85998eb:	89 e5                	mov    %esp,%ebp
 85998ed:	83 ec 18             	sub    $0x18,%esp
 85998f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85998f3:	89 04 24             	mov    %eax,(%esp)
 85998f6:	e8 ab ff ff ff       	call   85998a6 <_ZN8Sanicova4CPad17isValidKeyGenTimeEv>
 85998fb:	84 c0                	test   %al,%al
 85998fd:	74 16                	je     8599915 <_ZN8Sanicova4CPad18GenerateRandomDataEv+0x2b>
 85998ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8599902:	89 04 24             	mov    %eax,(%esp)
 8599905:	e8 0e 00 00 00       	call   8599918 <_ZN8Sanicova4CPad20GenerateRandomKeyIdxEv>
 859990a:	8b 45 08             	mov    0x8(%ebp),%eax
 859990d:	89 04 24             	mov    %eax,(%esp)
 8599910:	e8 31 00 00 00       	call   8599946 <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv>
 8599915:	c9                   	leave
 8599916:	c3                   	ret
 8599917:	90                   	nop

```

```c
// Sanicova::CPad::GenerateRandomData @ 0x85998ea

/* Sanicova::CPad::GenerateRandomData() */

void __thiscall Sanicova::CPad::GenerateRandomData(CPad *this)

{
  char cVar1;
  
  cVar1 = isValidKeyGenTime(this);
  if (cVar1 != '\0') {
    GenerateRandomKeyIdx(this);
    GenerateRandomShakeData(this);
  }
  return;
}

```

---

## GenerateRandomKeyIdx

```asm
// === 08599918 Sanicova::CPad::GenerateRandomKeyIdx  [0x08599918-0x8599935] ===
 8599918:	55                   	push   %ebp
 8599919:	89 e5                	mov    %esp,%ebp
 859991b:	83 ec 18             	sub    $0x18,%esp
 859991e:	c7 04 24 88 13 00 00 	movl   $0x1388,(%esp)
 8599925:	e8 5d 82 11 00       	call   86b1b87 <_Z12get_rand_inti>
 859992a:	89 c2                	mov    %eax,%edx
 859992c:	8b 45 08             	mov    0x8(%ebp),%eax
 859992f:	66 89 50 2e          	mov    %dx,0x2e(%eax)
 8599933:	c9                   	leave
 8599934:	c3                   	ret
 8599935:	90                   	nop

```

```c
// Sanicova::CPad::GenerateRandomKeyIdx @ 0x8599918

/* Sanicova::CPad::GenerateRandomKeyIdx() */

void __thiscall Sanicova::CPad::GenerateRandomKeyIdx(CPad *this)

{
  undefined2 uVar1;
  
  uVar1 = get_rand_int(5000);
  *(undefined2 *)(this + 0x2e) = uVar1;
  return;
}

```

---

## GenerateRandomShakeData

```asm
// === 08599946 Sanicova::CPad::GenerateRandomShakeData  [0x08599946-0x859998b] ===
 8599946:	55                   	push   %ebp
 8599947:	89 e5                	mov    %esp,%ebp
 8599949:	53                   	push   %ebx
 859994a:	83 ec 24             	sub    $0x24,%esp
 859994d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8599954:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 859995b:	eb 1d                	jmp    859997a <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv+0x34>
 859995d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8599960:	c7 04 24 c8 00 00 00 	movl   $0xc8,(%esp)
 8599967:	e8 1b 82 11 00       	call   86b1b87 <_Z12get_rand_inti>
 859996c:	8d 50 14             	lea    0x14(%eax),%edx
 859996f:	8b 45 08             	mov    0x8(%ebp),%eax
 8599972:	88 54 18 34          	mov    %dl,0x34(%eax,%ebx,1)
 8599976:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 859997a:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 859997e:	0f 9e c0             	setle  %al
 8599981:	84 c0                	test   %al,%al
 8599983:	75 d8                	jne    859995d <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv+0x17>
 8599985:	90                   	nop
 8599986:	83 c4 24             	add    $0x24,%esp
 8599989:	5b                   	pop    %ebx
 859998a:	5d                   	pop    %ebp
 859998b:	c3                   	ret

```

```c
// Sanicova::CPad::GenerateRandomShakeData @ 0x8599946

/* Sanicova::CPad::GenerateRandomShakeData() */

void __thiscall Sanicova::CPad::GenerateRandomShakeData(CPad *this)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = get_rand_int(200);
    this[local_10 + 0x34] = (CPad)(cVar1 + '\x14');
  }
  return;
}

```

---

## GetKeyIdx

```asm
// === 08599872 Sanicova::CPad::GetKeyIdx  [0x08599872-0x85998a5] ===
 8599872:	55                   	push   %ebp
 8599873:	89 e5                	mov    %esp,%ebp
 8599875:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8599879:	75 15                	jne    8599890 <_ZN8Sanicova4CPad9GetKeyIdxEi+0x1e>
 859987b:	8b 45 08             	mov    0x8(%ebp),%eax
 859987e:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 8599882:	0f b7 c0             	movzwl %ax,%eax
 8599885:	c1 e0 04             	shl    $0x4,%eax
 8599888:	8b 80 84 be 40 09    	mov    0x940be84(%eax),%eax
 859988e:	eb 13                	jmp    85998a3 <_ZN8Sanicova4CPad9GetKeyIdxEi+0x31>
 8599890:	8b 45 08             	mov    0x8(%ebp),%eax
 8599893:	0f b7 40 2e          	movzwl 0x2e(%eax),%eax
 8599897:	0f b7 c0             	movzwl %ax,%eax
 859989a:	c1 e0 04             	shl    $0x4,%eax
 859989d:	8b 80 88 be 40 09    	mov    0x940be88(%eax),%eax
 85998a3:	5d                   	pop    %ebp
 85998a4:	c3                   	ret
 85998a5:	90                   	nop

```

```c
// Sanicova::CPad::GetKeyIdx @ 0x8599872

/* Sanicova::CPad::GetKeyIdx(int) */

undefined4 __thiscall Sanicova::CPad::GetKeyIdx(CPad *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = *(undefined4 *)(&DAT_0940be84 + (uint)*(ushort *)(this + 0x2e) * 0x10);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_0940be88 + (uint)*(ushort *)(this + 0x2e) * 0x10);
  }
  return uVar1;
}

```

---

## GetSelectedCipherIdx

```asm
// === 0859984c Sanicova::CPad::GetSelectedCipherIdx  [0x0859984c-0x8599871] ===
 859984c:	55                   	push   %ebp
 859984d:	89 e5                	mov    %esp,%ebp
 859984f:	83 ec 28             	sub    $0x28,%esp
 8599852:	66 c7 45 f6 87 13    	movw   $0x1387,-0xa(%ebp)
 8599858:	8b 45 08             	mov    0x8(%ebp),%eax
 859985b:	8d 50 2e             	lea    0x2e(%eax),%edx
 859985e:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8599861:	89 44 24 04          	mov    %eax,0x4(%esp)
 8599865:	89 14 24             	mov    %edx,(%esp)
 8599868:	e8 00 d9 ce ff       	call   828716d <_ZSt3minItERKT_S2_S2_>
 859986d:	0f b7 00             	movzwl (%eax),%eax
 8599870:	c9                   	leave
 8599871:	c3                   	ret

```

```c
// Sanicova::CPad::GetSelectedCipherIdx @ 0x859984c

/* Sanicova::CPad::GetSelectedCipherIdx() */

ushort __thiscall Sanicova::CPad::GetSelectedCipherIdx(CPad *this)

{
  ushort *puVar1;
  ushort local_e [5];
  
  local_e[0] = 4999;
  puVar1 = std::min<unsigned_short>((ushort *)(this + 0x2e),local_e);
  return *puVar1;
}

```

---

## GetShakeData

```asm
// === 08599936 Sanicova::CPad::GetShakeData  [0x08599936-0x8599945] ===
 8599936:	55                   	push   %ebp
 8599937:	89 e5                	mov    %esp,%ebp
 8599939:	8b 45 0c             	mov    0xc(%ebp),%eax
 859993c:	8b 55 08             	mov    0x8(%ebp),%edx
 859993f:	0f b6 44 02 34       	movzbl 0x34(%edx,%eax,1),%eax
 8599944:	5d                   	pop    %ebp
 8599945:	c3                   	ret

```

```c
// Sanicova::CPad::GetShakeData @ 0x8599936

/* Sanicova::CPad::GetShakeData(int) */

CPad __thiscall Sanicova::CPad::GetShakeData(CPad *this,int param_1)

{
  return this[param_1 + 0x34];
}

```

---

## SendChagePwdReward

```asm
// === 085997b8 Sanicova::CPad::SendChagePwdReward  [0x085997b8-0x859981d] ===
 85997b8:	55                   	push   %ebp
 85997b9:	89 e5                	mov    %esp,%ebp
 85997bb:	83 ec 18             	sub    $0x18,%esp
 85997be:	8b 45 08             	mov    0x8(%ebp),%eax
 85997c1:	89 04 24             	mov    %eax,(%esp)
 85997c4:	e8 39 bb cc ff       	call   8265302 <_ZN8Sanicova4CPad18getAdvideChangePwdEv>
 85997c9:	84 c0                	test   %al,%al
 85997cb:	74 4e                	je     859981b <_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser+0x63>
 85997cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85997d4:	00 
 85997d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85997d8:	89 04 24             	mov    %eax,(%esp)
 85997db:	e8 d2 25 f5 ff       	call   84ebdb2 <_ZN8Sanicova4CPad18setAdvideChangePwdEb>
 85997e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85997e3:	89 04 24             	mov    %eax,(%esp)
 85997e6:	e8 63 24 b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85997eb:	85 c0                	test   %eax,%eax
 85997ed:	0f 94 c0             	sete   %al
 85997f0:	84 c0                	test   %al,%al
 85997f2:	74 15                	je     8599809 <_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser+0x51>
 85997f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85997fb:	00 
 85997fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85997ff:	89 04 24             	mov    %eax,(%esp)
 8599802:	e8 e1 01 00 00       	call   85999e8 <_ZN8Sanicova4CPad13setChangedPwdEb>
 8599807:	eb 12                	jmp    859981b <_ZN8Sanicova4CPad18SendChagePwdRewardEP5CUser+0x63>
 8599809:	8b 45 0c             	mov    0xc(%ebp),%eax
 859980c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8599810:	8b 45 08             	mov    0x8(%ebp),%eax
 8599813:	89 04 24             	mov    %eax,(%esp)
 8599816:	e8 03 00 00 00       	call   859981e <_ZN8Sanicova4CPad22SendChagePwdRewardMailEP5CUser>
 859981b:	c9                   	leave
 859981c:	c3                   	ret
 859981d:	90                   	nop

```

```c
// Sanicova::CPad::SendChagePwdReward @ 0x85997b8

/* Sanicova::CPad::SendChagePwdReward(CUser*) */

void __thiscall Sanicova::CPad::SendChagePwdReward(CPad *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = getAdvideChangePwd(this);
  if (cVar1 != '\0') {
    setAdvideChangePwd(this,false);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      setChangedPwd(this,true);
    }
    else {
      SendChagePwdRewardMail((CUser *)this);
    }
  }
  return;
}

```

---

## SendChagePwdRewardMail

```asm
// === 0859981e Sanicova::CPad::SendChagePwdRewardMail  [0x0859981e-0x859984b] ===
 859981e:	55                   	push   %ebp
 859981f:	89 e5                	mov    %esp,%ebp
 8599821:	83 ec 18             	sub    $0x18,%esp
 8599824:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859982b:	00 
 859982c:	8b 45 08             	mov    0x8(%ebp),%eax
 859982f:	89 04 24             	mov    %eax,(%esp)
 8599832:	e8 b1 01 00 00       	call   85999e8 <_ZN8Sanicova4CPad13setChangedPwdEb>
 8599837:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 859983e:	00 
 859983f:	8b 45 08             	mov    0x8(%ebp),%eax
 8599842:	89 04 24             	mov    %eax,(%esp)
 8599845:	e8 68 25 f5 ff       	call   84ebdb2 <_ZN8Sanicova4CPad18setAdvideChangePwdEb>
 859984a:	c9                   	leave
 859984b:	c3                   	ret

```

```c
// Sanicova::CPad::SendChagePwdRewardMail @ 0x859981e

/* Sanicova::CPad::SendChagePwdRewardMail(CUser*) */

void Sanicova::CPad::SendChagePwdRewardMail(CUser *param_1)

{
  setChangedPwd((CPad *)param_1,false);
  setAdvideChangePwd((CPad *)param_1,false);
  return;
}

```

---

## checkAnswer

```asm
// === 08599712 Sanicova::CPad::checkAnswer  [0x08599712-0x859979b] ===
 8599712:	55                   	push   %ebp
 8599713:	89 e5                	mov    %esp,%ebp
 8599715:	57                   	push   %edi
 8599716:	53                   	push   %ebx
 8599717:	83 ec 60             	sub    $0x60,%esp
 859971a:	8d 5d d4             	lea    -0x2c(%ebp),%ebx
 859971d:	b8 00 00 00 00       	mov    $0x0,%eax
 8599722:	ba 09 00 00 00       	mov    $0x9,%edx
 8599727:	89 df                	mov    %ebx,%edi
 8599729:	89 d1                	mov    %edx,%ecx
 859972b:	f3 ab                	rep stos %eax,%es:(%edi)
 859972d:	8d 5d b0             	lea    -0x50(%ebp),%ebx
 8599730:	b8 00 00 00 00       	mov    $0x0,%eax
 8599735:	ba 09 00 00 00       	mov    $0x9,%edx
 859973a:	89 df                	mov    %ebx,%edi
 859973c:	89 d1                	mov    %edx,%ecx
 859973e:	f3 ab                	rep stos %eax,%es:(%edi)
 8599740:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8599747:	00 
 8599748:	8b 45 0c             	mov    0xc(%ebp),%eax
 859974b:	89 44 24 04          	mov    %eax,0x4(%esp)
 859974f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8599752:	89 04 24             	mov    %eax,(%esp)
 8599755:	e8 76 41 ae ff       	call   807d8d0 <strncpy@plt>
 859975a:	a1 68 be 40 09       	mov    0x940be68,%eax
 859975f:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8599762:	89 54 24 08          	mov    %edx,0x8(%esp)
 8599766:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8599769:	89 54 24 04          	mov    %edx,0x4(%esp)
 859976d:	89 04 24             	mov    %eax,(%esp)
 8599770:	e8 23 2c ed ff       	call   846c398 <_Z11encryptAES_P9CRijndaelPcS1_>
 8599775:	8b 45 08             	mov    0x8(%ebp),%eax
 8599778:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 859977f:	00 
 8599780:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8599783:	89 54 24 04          	mov    %edx,0x4(%esp)
 8599787:	89 04 24             	mov    %eax,(%esp)
 859978a:	e8 31 51 ae ff       	call   807e8c0 <strncmp@plt>
 859978f:	85 c0                	test   %eax,%eax
 8599791:	0f 94 c0             	sete   %al
 8599794:	83 c4 60             	add    $0x60,%esp
 8599797:	5b                   	pop    %ebx
 8599798:	5f                   	pop    %edi
 8599799:	5d                   	pop    %ebp
 859979a:	c3                   	ret
 859979b:	90                   	nop

```

```c
// Sanicova::CPad::checkAnswer @ 0x8599712

/* Sanicova::CPad::checkAnswer(char*) const */

bool __thiscall Sanicova::CPad::checkAnswer(CPad *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  char local_54 [36];
  char local_30 [36];
  
  pcVar2 = local_30;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = local_54;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  strncpy(local_30,param_1,8);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_30,local_54);
  iVar1 = strncmp((char *)this,local_54,0x24);
  return iVar1 == 0;
}

```

---

## init

```asm
// === 0859957c Sanicova::CPad::init  [0x0859957c-0x8599615] ===
 859957c:	55                   	push   %ebp
 859957d:	89 e5                	mov    %esp,%ebp
 859957f:	83 ec 18             	sub    $0x18,%esp
 8599582:	8b 45 08             	mov    0x8(%ebp),%eax
 8599585:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8599589:	8b 45 08             	mov    0x8(%ebp),%eax
 859958c:	c6 40 25 00          	movb   $0x0,0x25(%eax)
 8599590:	8b 45 08             	mov    0x8(%ebp),%eax
 8599593:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 859959a:	00 
 859959b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85995a2:	00 
 85995a3:	89 04 24             	mov    %eax,(%esp)
 85995a6:	e8 15 47 ae ff       	call   807dcc0 <memset@plt>
 85995ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85995ae:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85995b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85995b8:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 85995bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85995c2:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 85995c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85995cc:	c6 40 2c 00          	movb   $0x0,0x2c(%eax)
 85995d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85995d3:	c6 40 26 00          	movb   $0x0,0x26(%eax)
 85995d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85995da:	c6 40 2d 00          	movb   $0x0,0x2d(%eax)
 85995de:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85995e5:	e8 b4 26 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85995ea:	8b 55 08             	mov    0x8(%ebp),%edx
 85995ed:	89 42 30             	mov    %eax,0x30(%edx)
 85995f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85995f3:	c6 40 3c 00          	movb   $0x0,0x3c(%eax)
 85995f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85995fa:	c6 40 3d 00          	movb   $0x0,0x3d(%eax)
 85995fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8599601:	89 04 24             	mov    %eax,(%esp)
 8599604:	e8 0f 03 00 00       	call   8599918 <_ZN8Sanicova4CPad20GenerateRandomKeyIdxEv>
 8599609:	8b 45 08             	mov    0x8(%ebp),%eax
 859960c:	89 04 24             	mov    %eax,(%esp)
 859960f:	e8 32 03 00 00       	call   8599946 <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv>
 8599614:	c9                   	leave
 8599615:	c3                   	ret

```

```c
// Sanicova::CPad::init @ 0x859957c

/* Sanicova::CPad::init() */

void __thiscall Sanicova::CPad::init(CPad *this)

{
  undefined4 uVar1;
  
  this[0x24] = (CPad)0x0;
  this[0x25] = (CPad)0x0;
  memset(this,0,0x24);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x2c] = (CPad)0x0;
  this[0x26] = (CPad)0x0;
  this[0x2d] = (CPad)0x0;
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30) = uVar1;
  this[0x3c] = (CPad)0x0;
  this[0x3d] = (CPad)0x0;
  GenerateRandomKeyIdx(this);
  GenerateRandomShakeData(this);
  return;
}

```

---

## isTimeAttackSeccess

```asm
// === 0859979c Sanicova::CPad::isTimeAttackSeccess  [0x0859979c-0x85997b7] ===
 859979c:	55                   	push   %ebp
 859979d:	89 e5                	mov    %esp,%ebp
 859979f:	83 ec 28             	sub    $0x28,%esp
 85997a2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85997a9:	e8 f0 24 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85997ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85997b1:	b8 01 00 00 00       	mov    $0x1,%eax
 85997b6:	c9                   	leave
 85997b7:	c3                   	ret

```

```c
// Sanicova::CPad::isTimeAttackSeccess @ 0x859979c

/* Sanicova::CPad::isTimeAttackSeccess() */

undefined4 Sanicova::CPad::isTimeAttackSeccess(void)

{
  CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  return 1;
}

```

---

## isValidKeyGenTime

```asm
// === 085998a6 Sanicova::CPad::isValidKeyGenTime  [0x085998a6-0x85998e9] ===
 85998a6:	55                   	push   %ebp
 85998a7:	89 e5                	mov    %esp,%ebp
 85998a9:	83 ec 18             	sub    $0x18,%esp
 85998ac:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85998b3:	e8 e6 23 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85998b8:	8b 55 08             	mov    0x8(%ebp),%edx
 85998bb:	8b 52 30             	mov    0x30(%edx),%edx
 85998be:	29 d0                	sub    %edx,%eax
 85998c0:	83 f8 14             	cmp    $0x14,%eax
 85998c3:	0f 9f c0             	setg   %al
 85998c6:	84 c0                	test   %al,%al
 85998c8:	74 19                	je     85998e3 <_ZN8Sanicova4CPad17isValidKeyGenTimeEv+0x3d>
 85998ca:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85998d1:	e8 c8 23 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85998d6:	8b 55 08             	mov    0x8(%ebp),%edx
 85998d9:	89 42 30             	mov    %eax,0x30(%edx)
 85998dc:	b8 01 00 00 00       	mov    $0x1,%eax
 85998e1:	eb 05                	jmp    85998e8 <_ZN8Sanicova4CPad17isValidKeyGenTimeEv+0x42>
 85998e3:	b8 00 00 00 00       	mov    $0x0,%eax
 85998e8:	c9                   	leave
 85998e9:	c3                   	ret

```

```c
// Sanicova::CPad::isValidKeyGenTime @ 0x85998a6

/* Sanicova::CPad::isValidKeyGenTime() */

bool __thiscall Sanicova::CPad::isValidKeyGenTime(CPad *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  bVar1 = 0x14 < iVar2 - *(int *)(this + 0x30);
  if (bVar1) {
    uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x30) = uVar3;
  }
  return bVar1;
}

```

---

## reset

```asm
// === 08599616 Sanicova::CPad::reset  [0x08599616-0x8599711] ===
 8599616:	55                   	push   %ebp
 8599617:	89 e5                	mov    %esp,%ebp
 8599619:	53                   	push   %ebx
 859961a:	83 ec 54             	sub    $0x54,%esp
 859961d:	8b 45 08             	mov    0x8(%ebp),%eax
 8599620:	89 04 24             	mov    %eax,(%esp)
 8599623:	e8 be 59 c9 ff       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8599628:	84 c0                	test   %al,%al
 859962a:	0f 84 dc 00 00 00    	je     859970c <_ZN8Sanicova4CPad5resetEv+0xf6>
 8599630:	8b 45 08             	mov    0x8(%ebp),%eax
 8599633:	8b 40 28             	mov    0x28(%eax),%eax
 8599636:	05 b4 00 00 00       	add    $0xb4,%eax
 859963b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 859963e:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8599645:	e8 06 41 ae ff       	call   807d750 <time@plt>
 859964a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 859964d:	8b 45 08             	mov    0x8(%ebp),%eax
 8599650:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 8599654:	0f b6 d8             	movzbl %al,%ebx
 8599657:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 859965e:	00 
 859965f:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8599666:	00 
 8599667:	c7 44 24 04 30 97 cb 	movl   $0x8cb9730,0x4(%esp)
 859966e:	08 
 859966f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8599672:	89 04 24             	mov    %eax,(%esp)
 8599675:	e8 9e 60 fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 859967a:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 859967e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599681:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8599685:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599688:	89 44 24 08          	mov    %eax,0x8(%esp)
 859968c:	c7 44 24 04 a0 8a cb 	movl   $0x8cb8aa0,0x4(%esp)
 8599693:	08 
 8599694:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8599697:	89 04 24             	mov    %eax,(%esp)
 859969a:	e8 e9 60 fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 859969f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85996a2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85996a5:	7d 13                	jge    85996ba <_ZN8Sanicova4CPad5resetEv+0xa4>
 85996a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85996ae:	00 
 85996af:	8b 45 08             	mov    0x8(%ebp),%eax
 85996b2:	89 04 24             	mov    %eax,(%esp)
 85996b5:	e8 54 bc cc ff       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 85996ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85996bd:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85996c1:	0f b6 d8             	movzbl %al,%ebx
 85996c4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85996cb:	00 
 85996cc:	c7 44 24 08 4a 00 00 	movl   $0x4a,0x8(%esp)
 85996d3:	00 
 85996d4:	c7 44 24 04 30 97 cb 	movl   $0x8cb9730,0x4(%esp)
 85996db:	08 
 85996dc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85996df:	89 04 24             	mov    %eax,(%esp)
 85996e2:	e8 31 60 fb ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85996e7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85996eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85996ee:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85996f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85996f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 85996f9:	c7 44 24 04 e8 8a cb 	movl   $0x8cb8ae8,0x4(%esp)
 8599700:	08 
 8599701:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8599704:	89 04 24             	mov    %eax,(%esp)
 8599707:	e8 7c 60 fb ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 859970c:	83 c4 54             	add    $0x54,%esp
 859970f:	5b                   	pop    %ebx
 8599710:	5d                   	pop    %ebp
 8599711:	c3                   	ret

```

```c
// Sanicova::CPad::reset @ 0x8599616

/* Sanicova::CPad::reset() */

void __thiscall Sanicova::CPad::reset(CPad *this)

{
  CPad CVar1;
  char cVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  time_t local_10;
  
  cVar2 = isCertified(this);
  if (cVar2 != '\0') {
    local_14 = *(int *)(this + 0x28) + 0xb4;
    local_10 = time((time_t *)0x0);
    CVar1 = this[0x25];
    cMyTrace::cMyTrace(local_34,"void Sanicova::CPad::reset()",0x41,0);
    cMyTrace::operator()
              (local_34,"[Before]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",
               local_14,local_10,(uint)(byte)CVar1);
    if (local_14 < local_10) {
      setCertified(this,false);
    }
    CVar1 = this[0x25];
    cMyTrace::cMyTrace(local_24,"void Sanicova::CPad::reset()",0x4a,0);
    cMyTrace::operator()
              (local_24,"[After]Goblin Certified check_time(%d), cur_time(%d), Certified(%d)",
               local_14,local_10,(uint)(byte)CVar1);
  }
  return;
}

```


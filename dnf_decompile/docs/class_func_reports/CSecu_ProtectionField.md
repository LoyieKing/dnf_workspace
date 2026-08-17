# CSecu_ProtectionField

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## Check

```asm
// === 08288a02 CSecu_ProtectionField::Check  [0x08288a02-0x8288ac7] ===
 8288a02:	55                   	push   %ebp
 8288a03:	89 e5                	mov    %esp,%ebp
 8288a05:	83 ec 28             	sub    $0x28,%esp
 8288a08:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288a0c:	75 0a                	jne    8288a18 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0x16>
 8288a0e:	b8 01 00 00 00       	mov    $0x1,%eax
 8288a13:	e9 ad 00 00 00       	jmp    8288ac5 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xc3>
 8288a18:	8b 45 10             	mov    0x10(%ebp),%eax
 8288a1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288a1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8288a22:	89 04 24             	mov    %eax,(%esp)
 8288a25:	e8 b2 f6 ff ff       	call   82880dc <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION>
 8288a2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8288a2d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8288a31:	75 0a                	jne    8288a3d <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0x3b>
 8288a33:	b8 00 00 00 00       	mov    $0x0,%eax
 8288a38:	e9 88 00 00 00       	jmp    8288ac5 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xc3>
 8288a3d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8288a44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8288a47:	89 44 24 08          	mov    %eax,0x8(%esp)
 8288a4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8288a55:	89 04 24             	mov    %eax,(%esp)
 8288a58:	e8 95 01 00 00       	call   8288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>
 8288a5d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8288a60:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8288a64:	74 05                	je     8288a6b <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0x69>
 8288a66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8288a69:	eb 5a                	jmp    8288ac5 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xc3>
 8288a6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8288a6e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8288a72:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8288a75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8288a79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8288a83:	89 04 24             	mov    %eax,(%esp)
 8288a86:	e8 bb 01 00 00       	call   8288c46 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION>
 8288a8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8288a8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8288a92:	74 05                	je     8288a99 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0x97>
 8288a94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8288a97:	eb 2c                	jmp    8288ac5 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xc3>
 8288a99:	8b 45 10             	mov    0x10(%ebp),%eax
 8288a9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8288aa0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288aa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8288aaa:	89 04 24             	mov    %eax,(%esp)
 8288aad:	e8 0a 03 00 00       	call   8288dbc <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION>
 8288ab2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8288ab5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8288ab9:	74 05                	je     8288ac0 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xbe>
 8288abb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8288abe:	eb 05                	jmp    8288ac5 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION+0xc3>
 8288ac0:	b8 00 00 00 00       	mov    $0x0,%eax
 8288ac5:	c9                   	leave
 8288ac6:	c3                   	ret
 8288ac7:	90                   	nop

```

```c
// CSecu_ProtectionField::Check @ 0x8288a02

/* CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION) */

int __thiscall
CSecu_ProtectionField::Check(CSecu_ProtectionField *this,CUser *param_1,undefined4 param_3)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == (CUser *)0x0) {
    iVar1 = 1;
  }
  else {
    uVar2 = GetProtectionType(this,param_3);
    if (uVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = CheckRestoreType(this,param_1,uVar2);
      if (((iVar1 == 0) && (iVar1 = CheckTradingType(this,param_1,uVar2,param_3), iVar1 == 0)) &&
         (iVar1 = CheckEtcType(this,param_1,param_3), iVar1 == 0)) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

```

---

## CheckAccountType

```asm
// === 08288ac8 CSecu_ProtectionField::CheckAccountType  [0x08288ac8-0x8288bf1] ===
 8288ac8:	55                   	push   %ebp
 8288ac9:	89 e5                	mov    %esp,%ebp
 8288acb:	83 ec 18             	sub    $0x18,%esp
 8288ace:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288ad2:	75 0a                	jne    8288ade <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x16>
 8288ad4:	b8 01 00 00 00       	mov    $0x1,%eax
 8288ad9:	e9 11 01 00 00       	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288ade:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288ae1:	89 04 24             	mov    %eax,(%esp)
 8288ae4:	e8 37 72 fa ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8288ae9:	89 04 24             	mov    %eax,(%esp)
 8288aec:	e8 1d 64 fa ff       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 8288af1:	84 c0                	test   %al,%al
 8288af3:	74 56                	je     8288b4b <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x83>
 8288af5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288af8:	89 04 24             	mov    %eax,(%esp)
 8288afb:	e8 20 72 fa ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8288b00:	89 04 24             	mov    %eax,(%esp)
 8288b03:	e8 1e 64 fa ff       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 8288b08:	83 f8 02             	cmp    $0x2,%eax
 8288b0b:	0f 97 c0             	seta   %al
 8288b0e:	84 c0                	test   %al,%al
 8288b10:	74 0a                	je     8288b1c <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x54>
 8288b12:	b8 7a 00 00 00       	mov    $0x7a,%eax
 8288b17:	e9 d3 00 00 00       	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288b1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288b1f:	89 04 24             	mov    %eax,(%esp)
 8288b22:	e8 f9 71 fa ff       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 8288b27:	89 04 24             	mov    %eax,(%esp)
 8288b2a:	e8 eb 63 fa ff       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 8288b2f:	83 f0 01             	xor    $0x1,%eax
 8288b32:	84 c0                	test   %al,%al
 8288b34:	74 7c                	je     8288bb2 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0xea>
 8288b36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288b39:	89 04 24             	mov    %eax,(%esp)
 8288b3c:	e8 c5 7b 3f 00       	call   8680706 <_ZN5CUser27sendBackSecurityAuthRequestEv>
 8288b41:	b8 7b 00 00 00       	mov    $0x7b,%eax
 8288b46:	e9 a4 00 00 00       	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288b4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288b4e:	89 04 24             	mov    %eax,(%esp)
 8288b51:	e8 d8 71 fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8288b56:	89 04 24             	mov    %eax,(%esp)
 8288b59:	e8 7c 64 fa ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 8288b5e:	84 c0                	test   %al,%al
 8288b60:	74 50                	je     8288bb2 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0xea>
 8288b62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288b65:	89 04 24             	mov    %eax,(%esp)
 8288b68:	e8 c1 71 fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8288b6d:	89 04 24             	mov    %eax,(%esp)
 8288b70:	e8 19 64 fa ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8288b75:	83 f8 02             	cmp    $0x2,%eax
 8288b78:	0f 9f c0             	setg   %al
 8288b7b:	84 c0                	test   %al,%al
 8288b7d:	74 07                	je     8288b86 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0xbe>
 8288b7f:	b8 88 00 00 00       	mov    $0x88,%eax
 8288b84:	eb 69                	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288b86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288b89:	89 04 24             	mov    %eax,(%esp)
 8288b8c:	e8 9d 71 fa ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8288b91:	89 04 24             	mov    %eax,(%esp)
 8288b94:	e8 4d 64 fa ff       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8288b99:	83 f0 01             	xor    $0x1,%eax
 8288b9c:	84 c0                	test   %al,%al
 8288b9e:	74 12                	je     8288bb2 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0xea>
 8288ba0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288ba3:	89 04 24             	mov    %eax,(%esp)
 8288ba6:	e8 5b 7b 3f 00       	call   8680706 <_ZN5CUser27sendBackSecurityAuthRequestEv>
 8288bab:	b8 89 00 00 00       	mov    $0x89,%eax
 8288bb0:	eb 3d                	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288bb2:	8b 45 10             	mov    0x10(%ebp),%eax
 8288bb5:	83 e0 10             	and    $0x10,%eax
 8288bb8:	85 c0                	test   %eax,%eax
 8288bba:	74 1e                	je     8288bda <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x112>
 8288bbc:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 8288bc3:	00 
 8288bc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288bc7:	89 04 24             	mov    %eax,(%esp)
 8288bca:	e8 4d 0d 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288bcf:	84 c0                	test   %al,%al
 8288bd1:	74 07                	je     8288bda <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x112>
 8288bd3:	b8 01 00 00 00       	mov    $0x1,%eax
 8288bd8:	eb 05                	jmp    8288bdf <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x117>
 8288bda:	b8 00 00 00 00       	mov    $0x0,%eax
 8288bdf:	84 c0                	test   %al,%al
 8288be1:	74 07                	je     8288bea <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x122>
 8288be3:	b8 72 00 00 00       	mov    $0x72,%eax
 8288be8:	eb 05                	jmp    8288bef <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm+0x127>
 8288bea:	b8 00 00 00 00       	mov    $0x0,%eax
 8288bef:	c9                   	leave
 8288bf0:	c3                   	ret
 8288bf1:	90                   	nop

```

```c
// CSecu_ProtectionField::CheckAccountType @ 0x8288ac8

/* CSecu_ProtectionField::CheckAccountType(CUser*, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckAccountType(CSecu_ProtectionField *this,CUser *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  CSecurityCard *pCVar3;
  uint uVar4;
  CPad *pCVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar2 = WongWork::CSecurityCard::isActivate(pCVar3);
  if (cVar2 == '\0') {
    pCVar5 = (CPad *)CUser::getPad(param_1);
    cVar2 = Sanicova::CPad::isActivate(pCVar5);
    if (cVar2 != '\0') {
      pCVar5 = (CPad *)CUser::getPad(param_1);
      iVar6 = Sanicova::CPad::getFailCnt(pCVar5);
      if (2 < iVar6) {
        return 0x88;
      }
      pCVar5 = (CPad *)CUser::getPad(param_1);
      cVar2 = Sanicova::CPad::isCertified(pCVar5);
      if (cVar2 != '\x01') {
        CUser::sendBackSecurityAuthRequest(param_1);
        return 0x89;
      }
    }
  }
  else {
    pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar4 = WongWork::CSecurityCard::getFailCnt(pCVar3);
    if (2 < uVar4) {
      return 0x7a;
    }
    pCVar3 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    cVar2 = WongWork::CSecurityCard::isCertified(pCVar3);
    if (cVar2 != '\x01') {
      CUser::sendBackSecurityAuthRequest(param_1);
      return 0x7b;
    }
  }
  if (((param_2 & 0x10) == 0) || (cVar2 = CUser::isTradePunishType(param_1,0x10), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = 0x72;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## CheckEtcType

```asm
// === 08288dbc CSecu_ProtectionField::CheckEtcType  [0x08288dbc-0x8288e20] ===
 8288dbc:	55                   	push   %ebp
 8288dbd:	89 e5                	mov    %esp,%ebp
 8288dbf:	83 ec 18             	sub    $0x18,%esp
 8288dc2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288dc6:	75 07                	jne    8288dcf <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x13>
 8288dc8:	b8 01 00 00 00       	mov    $0x1,%eax
 8288dcd:	eb 50                	jmp    8288e1f <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x63>
 8288dcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288dd2:	89 04 24             	mov    %eax,(%esp)
 8288dd5:	e8 a4 00 00 00       	call   8288e7e <_ZN5CUser13isRestingUserEv>
 8288dda:	84 c0                	test   %al,%al
 8288ddc:	74 07                	je     8288de5 <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x29>
 8288dde:	b8 cf 00 00 00       	mov    $0xcf,%eax
 8288de3:	eb 3a                	jmp    8288e1f <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x63>
 8288de5:	83 7d 10 08          	cmpl   $0x8,0x10(%ebp)
 8288de9:	74 06                	je     8288df1 <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x35>
 8288deb:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 8288def:	75 19                	jne    8288e0a <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x4e>
 8288df1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288df4:	89 04 24             	mov    %eax,(%esp)
 8288df7:	e8 72 f8 3f 00       	call   868866e <_ZN5CUser21isSecurityServiceUsedEv>
 8288dfc:	83 f0 01             	xor    $0x1,%eax
 8288dff:	84 c0                	test   %al,%al
 8288e01:	74 07                	je     8288e0a <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x4e>
 8288e03:	b8 01 00 00 00       	mov    $0x1,%eax
 8288e08:	eb 05                	jmp    8288e0f <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x53>
 8288e0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8288e0f:	84 c0                	test   %al,%al
 8288e11:	74 07                	je     8288e1a <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x5e>
 8288e13:	b8 e9 00 00 00       	mov    $0xe9,%eax
 8288e18:	eb 05                	jmp    8288e1f <_ZN21CSecu_ProtectionField12CheckEtcTypeEP5CUser18SECURITY_PROTCTION+0x63>
 8288e1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8288e1f:	c9                   	leave
 8288e20:	c3                   	ret

```

```c
// CSecu_ProtectionField::CheckEtcType @ 0x8288dbc

/* CSecu_ProtectionField::CheckEtcType(CUser*, SECURITY_PROTCTION) */

undefined4 __thiscall
CSecu_ProtectionField::CheckEtcType(undefined4 this,CUser *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  cVar2 = CUser::isRestingUser(param_1);
  if (cVar2 == '\0') {
    if (((param_3 == 8) || (param_3 == 9)) &&
       (cVar2 = CUser::isSecurityServiceUsed(param_1), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = 0xe9;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0xcf;
}

```

---

## CheckItem

```asm
// === 0828873a CSecu_ProtectionField::CheckItem  [0x0828873a-0x8288785] ===
 828873a:	55                   	push   %ebp
 828873b:	89 e5                	mov    %esp,%ebp
 828873d:	83 ec 18             	sub    $0x18,%esp
 8288740:	81 7d 14 70 1f 00 00 	cmpl   $0x1f70,0x14(%ebp)
 8288747:	74 1b                	je     8288764 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm+0x2a>
 8288749:	81 7d 14 71 1f 00 00 	cmpl   $0x1f71,0x14(%ebp)
 8288750:	74 12                	je     8288764 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm+0x2a>
 8288752:	81 7d 14 13 9a 98 00 	cmpl   $0x989a13,0x14(%ebp)
 8288759:	74 09                	je     8288764 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm+0x2a>
 828875b:	81 7d 14 e1 90 20 29 	cmpl   $0x292090e1,0x14(%ebp)
 8288762:	75 1b                	jne    828877f <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm+0x45>
 8288764:	8b 45 10             	mov    0x10(%ebp),%eax
 8288767:	89 44 24 08          	mov    %eax,0x8(%esp)
 828876b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828876e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288772:	8b 45 08             	mov    0x8(%ebp),%eax
 8288775:	89 04 24             	mov    %eax,(%esp)
 8288778:	e8 85 02 00 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 828877d:	eb 05                	jmp    8288784 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm+0x4a>
 828877f:	b8 00 00 00 00       	mov    $0x0,%eax
 8288784:	c9                   	leave
 8288785:	c3                   	ret

```

```c
// CSecu_ProtectionField::CheckItem @ 0x828873a

/* CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckItem
          (CSecu_ProtectionField *this,undefined4 param_1,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((((param_4 == 0x1f70) || (param_4 == 0x1f71)) || (param_4 == 0x989a13)) ||
     (param_4 == 0x292090e1)) {
    uVar1 = Check(this,param_1,param_3);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## CheckItemRarity

```asm
// === 082887d0 CSecu_ProtectionField::CheckItemRarity  [0x082887d0-0x8288993] ===
 82887d0:	55                   	push   %ebp
 82887d1:	89 e5                	mov    %esp,%ebp
 82887d3:	83 ec 28             	sub    $0x28,%esp
 82887d6:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82887da:	74 06                	je     82887e2 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x12>
 82887dc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82887e0:	75 0a                	jne    82887ec <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c>
 82887e2:	b8 01 00 00 00       	mov    $0x1,%eax
 82887e7:	e9 a5 01 00 00       	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 82887ec:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82887f3:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82887f7:	74 17                	je     8288810 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x40>
 82887f9:	8b 45 14             	mov    0x14(%ebp),%eax
 82887fc:	89 04 24             	mov    %eax,(%esp)
 82887ff:	e8 d2 8a e6 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8288804:	83 f8 01             	cmp    $0x1,%eax
 8288807:	7e 07                	jle    8288810 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x40>
 8288809:	b8 01 00 00 00       	mov    $0x1,%eax
 828880e:	eb 05                	jmp    8288815 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x45>
 8288810:	b8 00 00 00 00       	mov    $0x0,%eax
 8288815:	84 c0                	test   %al,%al
 8288817:	74 0e                	je     8288827 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x57>
 8288819:	8b 45 14             	mov    0x14(%ebp),%eax
 828881c:	89 04 24             	mov    %eax,(%esp)
 828881f:	e8 b2 8a e6 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8288824:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8288827:	8b 45 10             	mov    0x10(%ebp),%eax
 828882a:	89 44 24 04          	mov    %eax,0x4(%esp)
 828882e:	8b 45 08             	mov    0x8(%ebp),%eax
 8288831:	89 04 24             	mov    %eax,(%esp)
 8288834:	e8 a3 f8 ff ff       	call   82880dc <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION>
 8288839:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828883c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8288840:	75 0a                	jne    828884c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x7c>
 8288842:	b8 00 00 00 00       	mov    $0x0,%eax
 8288847:	e9 45 01 00 00       	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 828884c:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8288850:	75 0a                	jne    828885c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x8c>
 8288852:	b8 01 00 00 00       	mov    $0x1,%eax
 8288857:	e9 35 01 00 00       	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 828885c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828885f:	83 f8 02             	cmp    $0x2,%eax
 8288862:	7f 38                	jg     828889c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0xcc>
 8288864:	8b 45 14             	mov    0x14(%ebp),%eax
 8288867:	89 04 24             	mov    %eax,(%esp)
 828886a:	e8 67 8a e6 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 828886f:	83 f8 02             	cmp    $0x2,%eax
 8288872:	75 19                	jne    828888d <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0xbd>
 8288874:	8b 45 14             	mov    0x14(%ebp),%eax
 8288877:	8b 00                	mov    (%eax),%eax
 8288879:	83 c0 4c             	add    $0x4c,%eax
 828887c:	8b 10                	mov    (%eax),%edx
 828887e:	8b 45 14             	mov    0x14(%ebp),%eax
 8288881:	89 04 24             	mov    %eax,(%esp)
 8288884:	ff d2                	call   *%edx
 8288886:	83 f0 01             	xor    $0x1,%eax
 8288889:	84 c0                	test   %al,%al
 828888b:	75 0f                	jne    828889c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0xcc>
 828888d:	8b 45 18             	mov    0x18(%ebp),%eax
 8288890:	89 04 24             	mov    %eax,(%esp)
 8288893:	e8 d4 c7 e6 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8288898:	3c 0a                	cmp    $0xa,%al
 828889a:	76 07                	jbe    82888a3 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0xd3>
 828889c:	b8 01 00 00 00       	mov    $0x1,%eax
 82888a1:	eb 05                	jmp    82888a8 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0xd8>
 82888a3:	b8 00 00 00 00       	mov    $0x0,%eax
 82888a8:	84 c0                	test   %al,%al
 82888aa:	0f 84 b5 00 00 00    	je     8288965 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x195>
 82888b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82888b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82888b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82888ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 82888be:	8b 45 08             	mov    0x8(%ebp),%eax
 82888c1:	89 04 24             	mov    %eax,(%esp)
 82888c4:	e8 ff 01 00 00       	call   8288ac8 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm>
 82888c9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82888cc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82888d0:	74 08                	je     82888da <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x10a>
 82888d2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82888d5:	e9 b7 00 00 00       	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 82888da:	83 7d 10 23          	cmpl   $0x23,0x10(%ebp)
 82888de:	75 58                	jne    8288938 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x168>
 82888e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82888e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82888e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82888ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 82888ee:	8b 45 08             	mov    0x8(%ebp),%eax
 82888f1:	89 04 24             	mov    %eax,(%esp)
 82888f4:	e8 f9 02 00 00       	call   8288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>
 82888f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82888fc:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8288900:	74 08                	je     828890a <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x13a>
 8288902:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8288905:	e9 87 00 00 00       	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 828890a:	8b 45 10             	mov    0x10(%ebp),%eax
 828890d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8288911:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8288914:	89 44 24 08          	mov    %eax,0x8(%esp)
 8288918:	8b 45 0c             	mov    0xc(%ebp),%eax
 828891b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828891f:	8b 45 08             	mov    0x8(%ebp),%eax
 8288922:	89 04 24             	mov    %eax,(%esp)
 8288925:	e8 1c 03 00 00       	call   8288c46 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION>
 828892a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828892d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8288931:	74 05                	je     8288938 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x168>
 8288933:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8288936:	eb 59                	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 8288938:	83 7d 10 29          	cmpl   $0x29,0x10(%ebp)
 828893c:	75 4e                	jne    828898c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1bc>
 828893e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8288941:	89 44 24 08          	mov    %eax,0x8(%esp)
 8288945:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288948:	89 44 24 04          	mov    %eax,0x4(%esp)
 828894c:	8b 45 08             	mov    0x8(%ebp),%eax
 828894f:	89 04 24             	mov    %eax,(%esp)
 8288952:	e8 9b 02 00 00       	call   8288bf2 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm>
 8288957:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828895a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828895e:	74 2c                	je     828898c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1bc>
 8288960:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8288963:	eb 2c                	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 8288965:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8288968:	89 44 24 08          	mov    %eax,0x8(%esp)
 828896c:	8b 45 0c             	mov    0xc(%ebp),%eax
 828896f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288973:	8b 45 08             	mov    0x8(%ebp),%eax
 8288976:	89 04 24             	mov    %eax,(%esp)
 8288979:	e8 4a 01 00 00       	call   8288ac8 <_ZN21CSecu_ProtectionField16CheckAccountTypeEP5CUserm>
 828897e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8288981:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8288985:	74 05                	je     828898c <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1bc>
 8288987:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828898a:	eb 05                	jmp    8288991 <_ZN21CSecu_ProtectionField15CheckItemRarityEP5CUser18SECURITY_PROTCTIONPK5CItemPK10Inven_Item+0x1c1>
 828898c:	b8 00 00 00 00       	mov    $0x0,%eax
 8288991:	c9                   	leave
 8288992:	c3                   	ret
 8288993:	90                   	nop

```

```c
// CSecu_ProtectionField::CheckItemRarity @ 0x82887d0

/* CSecu_ProtectionField::CheckItemRarity(CUser*, SECURITY_PROTCTION, CItem const*, Inven_Item
   const*) */

int __thiscall
CSecu_ProtectionField::CheckItemRarity
          (CSecu_ProtectionField *this,CUser *param_1,int param_3,CItem *param_4,Inven_Item *param_5
          )

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  int local_1c;
  
  if ((param_4 == (CItem *)0x0) || (param_1 == (CUser *)0x0)) {
    return 1;
  }
  local_1c = 0;
  if ((param_4 == (CItem *)0x0) || (iVar4 = CItem::get_rarity(param_4), iVar4 < 2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_1c = CItem::get_rarity(param_4);
  }
  uVar5 = GetProtectionType(this,param_3);
  if (uVar5 != 0) {
    if (param_5 == (Inven_Item *)0x0) {
      return 1;
    }
    if ((local_1c < 3) &&
       (((iVar4 = CItem::get_rarity(param_4), iVar4 != 2 ||
         (cVar2 = (**(code **)(*(int *)param_4 + 0x4c))(param_4), cVar2 == '\x01')) &&
        (bVar3 = Inven_Item::GetUpgrade(param_5), bVar3 < 0xb)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar4 = CheckAccountType(this,param_1,uVar5);
      if (iVar4 != 0) {
        return iVar4;
      }
      if (param_3 == 0x23) {
        iVar4 = CheckRestoreType(this,param_1,uVar5);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = CheckTradingType(this,param_1,uVar5,0x23);
        if (iVar4 != 0) {
          return iVar4;
        }
      }
      if (param_3 != 0x29) {
        return 0;
      }
      iVar4 = CheckRestoreType(this,param_1,uVar5);
    }
    else {
      iVar4 = CheckAccountType(this,param_1,uVar5);
    }
    if (iVar4 == 0) {
      return 0;
    }
    return iVar4;
  }
  return 0;
}

```

---

## CheckItem_08288786

```asm
// === 08288786 CSecu_ProtectionField::CheckItem  [0x08288786-0x82887cf] ===
 8288786:	55                   	push   %ebp
 8288787:	89 e5                	mov    %esp,%ebp
 8288789:	83 ec 28             	sub    $0x28,%esp
 828878c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8288790:	74 06                	je     8288798 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem+0x12>
 8288792:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288796:	75 07                	jne    828879f <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem+0x19>
 8288798:	b8 01 00 00 00       	mov    $0x1,%eax
 828879d:	eb 2e                	jmp    82887cd <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem+0x47>
 828879f:	8b 45 14             	mov    0x14(%ebp),%eax
 82887a2:	89 04 24             	mov    %eax,(%esp)
 82887a5:	e8 9e 84 e8 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 82887aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82887ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82887b0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82887b4:	8b 45 10             	mov    0x10(%ebp),%eax
 82887b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 82887bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82887be:	89 44 24 04          	mov    %eax,0x4(%esp)
 82887c2:	8b 45 08             	mov    0x8(%ebp),%eax
 82887c5:	89 04 24             	mov    %eax,(%esp)
 82887c8:	e8 6d ff ff ff       	call   828873a <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONm>
 82887cd:	c9                   	leave
 82887ce:	c3                   	ret
 82887cf:	90                   	nop

```

```c
// CSecu_ProtectionField::CheckItem @ 0x8288786

/* CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*) */

undefined4 __thiscall
CSecu_ProtectionField::CheckItem
          (CSecu_ProtectionField *this,int param_1,undefined4 param_3,CItem *param_4)

{
  undefined4 uVar1;
  
  if ((param_4 == (CItem *)0x0) || (param_1 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = CItem::get_index(param_4);
    uVar1 = CheckItem(this,param_1,param_3,uVar1);
  }
  return uVar1;
}

```

---

## CheckOpposite

```asm
// === 08288994 CSecu_ProtectionField::CheckOpposite  [0x08288994-0x8288a01] ===
 8288994:	55                   	push   %ebp
 8288995:	89 e5                	mov    %esp,%ebp
 8288997:	83 ec 28             	sub    $0x28,%esp
 828899a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 828899e:	74 06                	je     82889a6 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x12>
 82889a0:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 82889a4:	75 07                	jne    82889ad <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x19>
 82889a6:	b8 01 00 00 00       	mov    $0x1,%eax
 82889ab:	eb 53                	jmp    8288a00 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x6c>
 82889ad:	8b 45 10             	mov    0x10(%ebp),%eax
 82889b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 82889b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82889b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 82889bb:	8b 45 08             	mov    0x8(%ebp),%eax
 82889be:	89 04 24             	mov    %eax,(%esp)
 82889c1:	e8 3c 00 00 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 82889c6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82889c9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82889cd:	75 1e                	jne    82889ed <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x59>
 82889cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82889d6:	00 
 82889d7:	8b 45 14             	mov    0x14(%ebp),%eax
 82889da:	89 04 24             	mov    %eax,(%esp)
 82889dd:	e8 3a 0f 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 82889e2:	84 c0                	test   %al,%al
 82889e4:	74 07                	je     82889ed <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x59>
 82889e6:	b8 01 00 00 00       	mov    $0x1,%eax
 82889eb:	eb 05                	jmp    82889f2 <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x5e>
 82889ed:	b8 00 00 00 00       	mov    $0x0,%eax
 82889f2:	84 c0                	test   %al,%al
 82889f4:	74 07                	je     82889fd <_ZN21CSecu_ProtectionField13CheckOppositeEP5CUser18SECURITY_PROTCTIONS1_+0x69>
 82889f6:	c7 45 f4 73 00 00 00 	movl   $0x73,-0xc(%ebp)
 82889fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8288a00:	c9                   	leave
 8288a01:	c3                   	ret

```

```c
// CSecu_ProtectionField::CheckOpposite @ 0x8288994

/* CSecu_ProtectionField::CheckOpposite(CUser*, SECURITY_PROTCTION, CUser*) */

int __thiscall
CSecu_ProtectionField::CheckOpposite
          (CSecu_ProtectionField *this,int param_1,undefined4 param_3,CUser *param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 local_10;
  
  if ((param_1 == 0) || (param_4 == (CUser *)0x0)) {
    local_10 = 1;
  }
  else {
    local_10 = Check(this,param_1,param_3);
    if ((local_10 == 0) && (cVar2 = CUser::isTradePunishType(param_4,0), cVar2 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      local_10 = 0x73;
    }
  }
  return local_10;
}

```

---

## CheckRestoreType

```asm
// === 08288bf2 CSecu_ProtectionField::CheckRestoreType  [0x08288bf2-0x8288c45] ===
 8288bf2:	55                   	push   %ebp
 8288bf3:	89 e5                	mov    %esp,%ebp
 8288bf5:	83 ec 18             	sub    $0x18,%esp
 8288bf8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288bfc:	75 07                	jne    8288c05 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x13>
 8288bfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8288c03:	eb 3f                	jmp    8288c44 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x52>
 8288c05:	8b 45 10             	mov    0x10(%ebp),%eax
 8288c08:	25 80 00 00 00       	and    $0x80,%eax
 8288c0d:	85 c0                	test   %eax,%eax
 8288c0f:	74 1e                	je     8288c2f <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x3d>
 8288c11:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 8288c18:	00 
 8288c19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288c1c:	89 04 24             	mov    %eax,(%esp)
 8288c1f:	e8 f8 0c 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288c24:	84 c0                	test   %al,%al
 8288c26:	74 07                	je     8288c2f <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x3d>
 8288c28:	b8 01 00 00 00       	mov    $0x1,%eax
 8288c2d:	eb 05                	jmp    8288c34 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x42>
 8288c2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8288c34:	84 c0                	test   %al,%al
 8288c36:	74 07                	je     8288c3f <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x4d>
 8288c38:	b8 e5 00 00 00       	mov    $0xe5,%eax
 8288c3d:	eb 05                	jmp    8288c44 <_ZN21CSecu_ProtectionField16CheckRestoreTypeEP5CUserm+0x52>
 8288c3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8288c44:	c9                   	leave
 8288c45:	c3                   	ret

```

```c
// CSecu_ProtectionField::CheckRestoreType @ 0x8288bf2

/* CSecu_ProtectionField::CheckRestoreType(CUser*, unsigned long) */

undefined4 __thiscall
CSecu_ProtectionField::CheckRestoreType(CSecu_ProtectionField *this,CUser *param_1,ulong param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_1 != (CUser *)0x0) {
    if (((param_2 & 0x80) == 0) || (cVar2 = CUser::isTradePunishType(param_1,0x80), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = 0xe5;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 1;
}

```

---

## CheckTradingType

```asm
// === 08288c46 CSecu_ProtectionField::CheckTradingType  [0x08288c46-0x8288dbb] ===
 8288c46:	55                   	push   %ebp
 8288c47:	89 e5                	mov    %esp,%ebp
 8288c49:	83 ec 18             	sub    $0x18,%esp
 8288c4c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8288c50:	75 0a                	jne    8288c5c <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x16>
 8288c52:	b8 01 00 00 00       	mov    $0x1,%eax
 8288c57:	e9 5e 01 00 00       	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288c5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8288c5f:	83 e0 01             	and    $0x1,%eax
 8288c62:	84 c0                	test   %al,%al
 8288c64:	74 1e                	je     8288c84 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x3e>
 8288c66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8288c6d:	00 
 8288c6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288c71:	89 04 24             	mov    %eax,(%esp)
 8288c74:	e8 a3 0c 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288c79:	84 c0                	test   %al,%al
 8288c7b:	74 07                	je     8288c84 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x3e>
 8288c7d:	b8 01 00 00 00       	mov    $0x1,%eax
 8288c82:	eb 05                	jmp    8288c89 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x43>
 8288c84:	b8 00 00 00 00       	mov    $0x0,%eax
 8288c89:	84 c0                	test   %al,%al
 8288c8b:	74 0a                	je     8288c97 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x51>
 8288c8d:	b8 72 00 00 00       	mov    $0x72,%eax
 8288c92:	e9 23 01 00 00       	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288c97:	8b 45 10             	mov    0x10(%ebp),%eax
 8288c9a:	83 e0 02             	and    $0x2,%eax
 8288c9d:	85 c0                	test   %eax,%eax
 8288c9f:	74 1e                	je     8288cbf <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x79>
 8288ca1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8288ca8:	00 
 8288ca9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288cac:	89 04 24             	mov    %eax,(%esp)
 8288caf:	e8 68 0c 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288cb4:	84 c0                	test   %al,%al
 8288cb6:	74 07                	je     8288cbf <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x79>
 8288cb8:	b8 01 00 00 00       	mov    $0x1,%eax
 8288cbd:	eb 05                	jmp    8288cc4 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x7e>
 8288cbf:	b8 00 00 00 00       	mov    $0x0,%eax
 8288cc4:	84 c0                	test   %al,%al
 8288cc6:	74 0a                	je     8288cd2 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x8c>
 8288cc8:	b8 72 00 00 00       	mov    $0x72,%eax
 8288ccd:	e9 e8 00 00 00       	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288cd2:	8b 45 10             	mov    0x10(%ebp),%eax
 8288cd5:	83 e0 04             	and    $0x4,%eax
 8288cd8:	85 c0                	test   %eax,%eax
 8288cda:	74 1e                	je     8288cfa <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xb4>
 8288cdc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8288ce3:	00 
 8288ce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288ce7:	89 04 24             	mov    %eax,(%esp)
 8288cea:	e8 2d 0c 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288cef:	84 c0                	test   %al,%al
 8288cf1:	74 07                	je     8288cfa <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xb4>
 8288cf3:	b8 01 00 00 00       	mov    $0x1,%eax
 8288cf8:	eb 05                	jmp    8288cff <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xb9>
 8288cfa:	b8 00 00 00 00       	mov    $0x0,%eax
 8288cff:	84 c0                	test   %al,%al
 8288d01:	74 0a                	je     8288d0d <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xc7>
 8288d03:	b8 72 00 00 00       	mov    $0x72,%eax
 8288d08:	e9 ad 00 00 00       	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288d0d:	8b 45 10             	mov    0x10(%ebp),%eax
 8288d10:	83 e0 08             	and    $0x8,%eax
 8288d13:	85 c0                	test   %eax,%eax
 8288d15:	74 1e                	je     8288d35 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xef>
 8288d17:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8288d1e:	00 
 8288d1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288d22:	89 04 24             	mov    %eax,(%esp)
 8288d25:	e8 f2 0b 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288d2a:	84 c0                	test   %al,%al
 8288d2c:	74 07                	je     8288d35 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xef>
 8288d2e:	b8 01 00 00 00       	mov    $0x1,%eax
 8288d33:	eb 05                	jmp    8288d3a <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xf4>
 8288d35:	b8 00 00 00 00       	mov    $0x0,%eax
 8288d3a:	84 c0                	test   %al,%al
 8288d3c:	74 07                	je     8288d45 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0xff>
 8288d3e:	b8 72 00 00 00       	mov    $0x72,%eax
 8288d43:	eb 75                	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288d45:	8b 45 10             	mov    0x10(%ebp),%eax
 8288d48:	83 e0 20             	and    $0x20,%eax
 8288d4b:	85 c0                	test   %eax,%eax
 8288d4d:	74 1e                	je     8288d6d <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x127>
 8288d4f:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8288d56:	00 
 8288d57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288d5a:	89 04 24             	mov    %eax,(%esp)
 8288d5d:	e8 ba 0b 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288d62:	84 c0                	test   %al,%al
 8288d64:	74 07                	je     8288d6d <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x127>
 8288d66:	b8 01 00 00 00       	mov    $0x1,%eax
 8288d6b:	eb 05                	jmp    8288d72 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x12c>
 8288d6d:	b8 00 00 00 00       	mov    $0x0,%eax
 8288d72:	84 c0                	test   %al,%al
 8288d74:	74 07                	je     8288d7d <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x137>
 8288d76:	b8 e4 00 00 00       	mov    $0xe4,%eax
 8288d7b:	eb 3d                	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288d7d:	8b 45 10             	mov    0x10(%ebp),%eax
 8288d80:	83 e0 40             	and    $0x40,%eax
 8288d83:	85 c0                	test   %eax,%eax
 8288d85:	74 1e                	je     8288da5 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x15f>
 8288d87:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 8288d8e:	00 
 8288d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288d92:	89 04 24             	mov    %eax,(%esp)
 8288d95:	e8 82 0b 40 00       	call   868991c <_ZN5CUser17isTradePunishTypeEi>
 8288d9a:	84 c0                	test   %al,%al
 8288d9c:	74 07                	je     8288da5 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x15f>
 8288d9e:	b8 01 00 00 00       	mov    $0x1,%eax
 8288da3:	eb 05                	jmp    8288daa <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x164>
 8288da5:	b8 00 00 00 00       	mov    $0x0,%eax
 8288daa:	84 c0                	test   %al,%al
 8288dac:	74 07                	je     8288db5 <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x16f>
 8288dae:	b8 72 00 00 00       	mov    $0x72,%eax
 8288db3:	eb 05                	jmp    8288dba <_ZN21CSecu_ProtectionField16CheckTradingTypeEP5CUserm18SECURITY_PROTCTION+0x174>
 8288db5:	b8 00 00 00 00       	mov    $0x0,%eax
 8288dba:	c9                   	leave
 8288dbb:	c3                   	ret

```

```c
// CSecu_ProtectionField::CheckTradingType @ 0x8288c46

/* CSecu_ProtectionField::CheckTradingType(CUser*, unsigned long, SECURITY_PROTCTION) */

undefined4 CSecu_ProtectionField::CheckTradingType(undefined4 param_1,CUser *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  if (param_2 == (CUser *)0x0) {
    return 1;
  }
  if (((param_3 & 1) == 0) || (cVar2 = CUser::isTradePunishType(param_2,1), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x72;
  }
  if (((param_3 & 2) == 0) || (cVar2 = CUser::isTradePunishType(param_2,2), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0x72;
  }
  if (((param_3 & 4) == 0) || (cVar2 = CUser::isTradePunishType(param_2,4), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    if (((param_3 & 8) == 0) || (cVar2 = CUser::isTradePunishType(param_2,8), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      if (((param_3 & 0x20) == 0) || (cVar2 = CUser::isTradePunishType(param_2,0x20), cVar2 == '\0')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        if (((param_3 & 0x40) == 0) ||
           (cVar2 = CUser::isTradePunishType(param_2,0x40), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 0x72;
        }
        else {
          uVar3 = 0;
        }
        return uVar3;
      }
      return 0xe4;
    }
    return 0x72;
  }
  return 0x72;
}

```

---

## GetCashShopErr

```asm
// === 082881a2 CSecu_ProtectionField::GetCashShopErr  [0x082881a2-0x828824d] ===
 82881a2:	55                   	push   %ebp
 82881a3:	89 e5                	mov    %esp,%ebp
 82881a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82881a8:	83 f8 7b             	cmp    $0x7b,%eax
 82881ab:	74 61                	je     828820e <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x6c>
 82881ad:	83 f8 7b             	cmp    $0x7b,%eax
 82881b0:	7f 20                	jg     82881d2 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x30>
 82881b2:	83 f8 73             	cmp    $0x73,%eax
 82881b5:	74 49                	je     8288200 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x5e>
 82881b7:	83 f8 73             	cmp    $0x73,%eax
 82881ba:	7f 0a                	jg     82881c6 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x24>
 82881bc:	83 f8 72             	cmp    $0x72,%eax
 82881bf:	74 62                	je     8288223 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x81>
 82881c1:	e9 80 00 00 00       	jmp    8288246 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa4>
 82881c6:	83 f8 78             	cmp    $0x78,%eax
 82881c9:	74 74                	je     828823f <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x9d>
 82881cb:	83 f8 7a             	cmp    $0x7a,%eax
 82881ce:	74 37                	je     8288207 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x65>
 82881d0:	eb 74                	jmp    8288246 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa4>
 82881d2:	3d cf 00 00 00       	cmp    $0xcf,%eax
 82881d7:	74 5f                	je     8288238 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x96>
 82881d9:	3d cf 00 00 00       	cmp    $0xcf,%eax
 82881de:	7f 10                	jg     82881f0 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x4e>
 82881e0:	3d 88 00 00 00       	cmp    $0x88,%eax
 82881e5:	74 2e                	je     8288215 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x73>
 82881e7:	3d 89 00 00 00       	cmp    $0x89,%eax
 82881ec:	74 2e                	je     828821c <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x7a>
 82881ee:	eb 56                	jmp    8288246 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa4>
 82881f0:	3d e4 00 00 00       	cmp    $0xe4,%eax
 82881f5:	74 3a                	je     8288231 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x8f>
 82881f7:	3d e5 00 00 00       	cmp    $0xe5,%eax
 82881fc:	74 2c                	je     828822a <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0x88>
 82881fe:	eb 46                	jmp    8288246 <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa4>
 8288200:	b8 82 00 00 00       	mov    $0x82,%eax
 8288205:	eb 44                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288207:	b8 83 00 00 00       	mov    $0x83,%eax
 828820c:	eb 3d                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 828820e:	b8 84 00 00 00       	mov    $0x84,%eax
 8288213:	eb 36                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288215:	b8 85 00 00 00       	mov    $0x85,%eax
 828821a:	eb 2f                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 828821c:	b8 86 00 00 00       	mov    $0x86,%eax
 8288221:	eb 28                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288223:	b8 87 00 00 00       	mov    $0x87,%eax
 8288228:	eb 21                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 828822a:	b8 88 00 00 00       	mov    $0x88,%eax
 828822f:	eb 1a                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288231:	b8 89 00 00 00       	mov    $0x89,%eax
 8288236:	eb 13                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288238:	b8 8a 00 00 00       	mov    $0x8a,%eax
 828823d:	eb 0c                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 828823f:	b8 8b 00 00 00       	mov    $0x8b,%eax
 8288244:	eb 05                	jmp    828824b <_ZN21CSecu_ProtectionField14GetCashShopErrEi+0xa9>
 8288246:	b8 01 00 00 00       	mov    $0x1,%eax
 828824b:	5d                   	pop    %ebp
 828824c:	c3                   	ret
 828824d:	90                   	nop

```

```c
// CSecu_ProtectionField::GetCashShopErr @ 0x82881a2

/* CSecu_ProtectionField::GetCashShopErr(int) */

undefined4 __thiscall CSecu_ProtectionField::GetCashShopErr(CSecu_ProtectionField *this,int param_1)

{
  if (param_1 == 0x7b) {
    return 0x84;
  }
  if (param_1 < 0x7c) {
    if (param_1 == 0x73) {
      return 0x82;
    }
    if (param_1 < 0x74) {
      if (param_1 == 0x72) {
        return 0x87;
      }
    }
    else {
      if (param_1 == 0x78) {
        return 0x8b;
      }
      if (param_1 == 0x7a) {
        return 0x83;
      }
    }
  }
  else {
    if (param_1 == 0xcf) {
      return 0x8a;
    }
    if (param_1 < 0xd0) {
      if (param_1 == 0x88) {
        return 0x85;
      }
      if (param_1 == 0x89) {
        return 0x86;
      }
    }
    else {
      if (param_1 == 0xe4) {
        return 0x89;
      }
      if (param_1 == 0xe5) {
        return 0x88;
      }
    }
  }
  return 1;
}

```

---

## GetInvenItemPtr

```asm
// === 082886ae CSecu_ProtectionField::GetInvenItemPtr  [0x082886ae-0x8288739] ===
 82886ae:	55                   	push   %ebp
 82886af:	89 e5                	mov    %esp,%ebp
 82886b1:	56                   	push   %esi
 82886b2:	53                   	push   %ebx
 82886b3:	83 ec 20             	sub    $0x20,%esp
 82886b6:	8b 55 10             	mov    0x10(%ebp),%edx
 82886b9:	8b 45 14             	mov    0x14(%ebp),%eax
 82886bc:	88 55 f4             	mov    %dl,-0xc(%ebp)
 82886bf:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 82886c3:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 82886c7:	83 f8 02             	cmp    $0x2,%eax
 82886ca:	74 44                	je     8288710 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x62>
 82886cc:	83 f8 02             	cmp    $0x2,%eax
 82886cf:	7f 06                	jg     82886d7 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x29>
 82886d1:	85 c0                	test   %eax,%eax
 82886d3:	74 0c                	je     82886e1 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x33>
 82886d5:	eb 56                	jmp    828872d <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x7f>
 82886d7:	83 f8 03             	cmp    $0x3,%eax
 82886da:	74 05                	je     82886e1 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x33>
 82886dc:	83 f8 07             	cmp    $0x7,%eax
 82886df:	75 4c                	jne    828872d <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x7f>
 82886e1:	0f bf 75 f0          	movswl -0x10(%ebp),%esi
 82886e5:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 82886e9:	89 04 24             	mov    %eax,(%esp)
 82886ec:	e8 54 f1 e6 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 82886f1:	89 c3                	mov    %eax,%ebx
 82886f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82886f6:	89 04 24             	mov    %eax,(%esp)
 82886f9:	e8 80 1b e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82886fe:	89 74 24 08          	mov    %esi,0x8(%esp)
 8288702:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8288706:	89 04 24             	mov    %eax,(%esp)
 8288709:	e8 d0 3a 27 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 828870e:	eb 22                	jmp    8288732 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x84>
 8288710:	0f bf 5d f0          	movswl -0x10(%ebp),%ebx
 8288714:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288717:	89 04 24             	mov    %eax,(%esp)
 828871a:	e8 65 93 ec ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 828871f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8288723:	89 04 24             	mov    %eax,(%esp)
 8288726:	e8 65 2c 28 00       	call   850b390 <_ZNK6CCargo11GetCargoRefEi>
 828872b:	eb 05                	jmp    8288732 <_ZN21CSecu_ProtectionField15GetInvenItemPtrEP5CUsercs+0x84>
 828872d:	b8 00 00 00 00       	mov    $0x0,%eax
 8288732:	83 c4 20             	add    $0x20,%esp
 8288735:	5b                   	pop    %ebx
 8288736:	5e                   	pop    %esi
 8288737:	5d                   	pop    %ebp
 8288738:	c3                   	ret
 8288739:	90                   	nop

```

```c
// CSecu_ProtectionField::GetInvenItemPtr @ 0x82886ae

/* CSecu_ProtectionField::GetInvenItemPtr(CUser*, char, short) */

undefined4 __thiscall
CSecu_ProtectionField::GetInvenItemPtr
          (CSecu_ProtectionField *this,CUser *param_1,char param_2,short param_3)

{
  int iVar1;
  CInventory *this_00;
  undefined4 uVar2;
  CCargo *this_01;
  
  if (param_2 == '\x02') {
    this_01 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    uVar2 = CCargo::GetCargoRef(this_01,(int)param_3);
    return uVar2;
  }
  if (param_2 < '\x03') {
    if (param_2 == '\0') {
LAB_082886e1:
      iVar1 = GetInvenTypeFromItemSpace((int)param_2);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      uVar2 = CInventory::GetInvenRef(this_00,iVar1,(int)param_3);
      return uVar2;
    }
  }
  else if ((param_2 == '\x03') || (param_2 == '\a')) goto LAB_082886e1;
  return 0;
}

```

---

## GetItemPtr

```asm
// === 082884d6 CSecu_ProtectionField::GetItemPtr  [0x082884d6-0x82886ad] ===
 82884d6:	55                   	push   %ebp
 82884d7:	89 e5                	mov    %esp,%ebp
 82884d9:	56                   	push   %esi
 82884da:	53                   	push   %ebx
 82884db:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 82884e1:	8b 55 10             	mov    0x10(%ebp),%edx
 82884e4:	8b 45 14             	mov    0x14(%ebp),%eax
 82884e7:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 82884ea:	66 89 45 a0          	mov    %ax,-0x60(%ebp)
 82884ee:	8d 45 b7             	lea    -0x49(%ebp),%eax
 82884f1:	89 04 24             	mov    %eax,(%esp)
 82884f4:	e8 5b 33 e4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 82884f9:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 82884fd:	83 f8 02             	cmp    $0x2,%eax
 8288500:	0f 84 da 00 00 00    	je     82885e0 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x10a>
 8288506:	83 f8 02             	cmp    $0x2,%eax
 8288509:	7f 09                	jg     8288514 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x3e>
 828850b:	85 c0                	test   %eax,%eax
 828850d:	74 13                	je     8288522 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x4c>
 828850f:	e9 73 01 00 00       	jmp    8288687 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x1b1>
 8288514:	83 f8 03             	cmp    $0x3,%eax
 8288517:	74 09                	je     8288522 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x4c>
 8288519:	83 f8 07             	cmp    $0x7,%eax
 828851c:	0f 85 65 01 00 00    	jne    8288687 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x1b1>
 8288522:	0f bf 75 a0          	movswl -0x60(%ebp),%esi
 8288526:	0f be 45 a4          	movsbl -0x5c(%ebp),%eax
 828852a:	89 04 24             	mov    %eax,(%esp)
 828852d:	e8 13 f3 e6 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 8288532:	89 c3                	mov    %eax,%ebx
 8288534:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288537:	89 04 24             	mov    %eax,(%esp)
 828853a:	e8 3f 1d e5 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828853f:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 8288545:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8288549:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 828854d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288551:	89 14 24             	mov    %edx,(%esp)
 8288554:	e8 bf 33 27 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8288559:	83 ec 04             	sub    $0x4,%esp
 828855c:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 8288562:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8288565:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 828856b:	89 45 bb             	mov    %eax,-0x45(%ebp)
 828856e:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8288574:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8288577:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 828857d:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 8288580:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8288586:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8288589:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 828858f:	89 45 cb             	mov    %eax,-0x35(%ebp)
 8288592:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8288598:	89 45 cf             	mov    %eax,-0x31(%ebp)
 828859b:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 82885a1:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 82885a4:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 82885aa:	89 45 d7             	mov    %eax,-0x29(%ebp)
 82885ad:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 82885b3:	89 45 db             	mov    %eax,-0x25(%ebp)
 82885b6:	8b 45 80             	mov    -0x80(%ebp),%eax
 82885b9:	89 45 df             	mov    %eax,-0x21(%ebp)
 82885bc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 82885bf:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 82885c2:	8b 45 88             	mov    -0x78(%ebp),%eax
 82885c5:	89 45 e7             	mov    %eax,-0x19(%ebp)
 82885c8:	8b 45 8c             	mov    -0x74(%ebp),%eax
 82885cb:	89 45 eb             	mov    %eax,-0x15(%ebp)
 82885ce:	8b 45 90             	mov    -0x70(%ebp),%eax
 82885d1:	89 45 ef             	mov    %eax,-0x11(%ebp)
 82885d4:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 82885d8:	88 45 f3             	mov    %al,-0xd(%ebp)
 82885db:	e9 a7 00 00 00       	jmp    8288687 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs+0x1b1>
 82885e0:	0f bf 5d a0          	movswl -0x60(%ebp),%ebx
 82885e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82885e7:	89 04 24             	mov    %eax,(%esp)
 82885ea:	e8 95 94 ec ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 82885ef:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 82885f5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 82885f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82885fd:	89 14 24             	mov    %edx,(%esp)
 8288600:	e8 af 2c 28 00       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 8288605:	83 ec 04             	sub    $0x4,%esp
 8288608:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 828860e:	89 45 b7             	mov    %eax,-0x49(%ebp)
 8288611:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8288617:	89 45 bb             	mov    %eax,-0x45(%ebp)
 828861a:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8288620:	89 45 bf             	mov    %eax,-0x41(%ebp)
 8288623:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8288629:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 828862c:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8288632:	89 45 c7             	mov    %eax,-0x39(%ebp)
 8288635:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 828863b:	89 45 cb             	mov    %eax,-0x35(%ebp)
 828863e:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8288644:	89 45 cf             	mov    %eax,-0x31(%ebp)
 8288647:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 828864d:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 8288650:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8288656:	89 45 d7             	mov    %eax,-0x29(%ebp)
 8288659:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 828865f:	89 45 db             	mov    %eax,-0x25(%ebp)
 8288662:	8b 45 80             	mov    -0x80(%ebp),%eax
 8288665:	89 45 df             	mov    %eax,-0x21(%ebp)
 8288668:	8b 45 84             	mov    -0x7c(%ebp),%eax
 828866b:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 828866e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8288671:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8288674:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8288677:	89 45 eb             	mov    %eax,-0x15(%ebp)
 828867a:	8b 45 90             	mov    -0x70(%ebp),%eax
 828867d:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8288680:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8288684:	88 45 f3             	mov    %al,-0xd(%ebp)
 8288687:	8b 45 b9             	mov    -0x47(%ebp),%eax
 828868a:	89 c3                	mov    %eax,%ebx
 828868c:	e8 0a 3b e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8288691:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8288695:	89 04 24             	mov    %eax,(%esp)
 8288698:	e8 95 73 0d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 828869d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82886a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82886a3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 82886a6:	83 c4 00             	add    $0x0,%esp
 82886a9:	5b                   	pop    %ebx
 82886aa:	5e                   	pop    %esi
 82886ab:	5d                   	pop    %ebp
 82886ac:	c3                   	ret
 82886ad:	90                   	nop

```

```c
// CSecu_ProtectionField::GetItemPtr @ 0x82884d6

/* CSecu_ProtectionField::GetItemPtr(CUser*, char, short) */

undefined4 __thiscall
CSecu_ProtectionField::GetItemPtr
          (CSecu_ProtectionField *this,CUser *param_1,char param_2,short param_3)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  undefined1 local_ac [8];
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  short local_64;
  char local_60;
  undefined2 local_4d;
  undefined2 uStack_4b;
  undefined2 uStack_49;
  undefined2 uStack_47;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  
  local_60 = param_2;
  local_64 = param_3;
  Inven_Item::Inven_Item((Inven_Item *)&local_4d);
  if (local_60 == '\x02') {
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_ac);
    local_4d = (undefined2)local_ac._0_4_;
    uStack_4b = SUB42(local_ac._0_4_,2);
    uStack_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
  else {
    if (local_60 < '\x03') {
      if (local_60 != '\0') goto LAB_08288687;
    }
    else if ((local_60 != '\x03') && (local_60 != '\a')) goto LAB_08288687;
    GetInvenTypeFromItemSpace((int)local_60);
    iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_ac,iVar1);
    local_4d = (undefined2)local_ac._0_4_;
    uStack_4b = SUB42(local_ac._0_4_,2);
    uStack_49 = (undefined2)local_ac._4_4_;
    uStack_47 = SUB42(local_ac._4_4_,2);
    local_45 = local_a4;
    local_41 = local_a0;
    local_3d = local_9c;
    local_39 = local_98;
    local_35 = local_94;
    local_31 = local_90;
    local_2d = local_8c;
    local_29 = local_88;
    local_25 = local_84;
    local_21 = local_80;
    local_1d = local_7c;
    local_19 = local_78;
    local_15 = local_74;
    local_11 = local_70;
  }
LAB_08288687:
  iVar1 = CONCAT22(uStack_49,uStack_4b);
  this_00 = (CDataManager *)G_CDataManager();
  uVar2 = CDataManager::find_item(this_00,iVar1);
  return uVar2;
}

```

---

## GetOppositeErr

```asm
// === 08288140 CSecu_ProtectionField::GetOppositeErr  [0x08288140-0x82881a1] ===
 8288140:	55                   	push   %ebp
 8288141:	89 e5                	mov    %esp,%ebp
 8288143:	8b 45 0c             	mov    0xc(%ebp),%eax
 8288146:	3d 88 00 00 00       	cmp    $0x88,%eax
 828814b:	74 32                	je     828817f <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x3f>
 828814d:	3d 88 00 00 00       	cmp    $0x88,%eax
 8288152:	7f 11                	jg     8288165 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x25>
 8288154:	83 f8 7a             	cmp    $0x7a,%eax
 8288157:	74 1f                	je     8288178 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x38>
 8288159:	83 f8 7b             	cmp    $0x7b,%eax
 828815c:	74 28                	je     8288186 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x46>
 828815e:	83 f8 72             	cmp    $0x72,%eax
 8288161:	74 31                	je     8288194 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x54>
 8288163:	eb 36                	jmp    828819b <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x5b>
 8288165:	3d 89 00 00 00       	cmp    $0x89,%eax
 828816a:	74 21                	je     828818d <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x4d>
 828816c:	2d e4 00 00 00       	sub    $0xe4,%eax
 8288171:	83 f8 01             	cmp    $0x1,%eax
 8288174:	77 25                	ja     828819b <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x5b>
 8288176:	eb 1c                	jmp    8288194 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x54>
 8288178:	b8 ee 00 00 00       	mov    $0xee,%eax
 828817d:	eb 21                	jmp    82881a0 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x60>
 828817f:	b8 ec 00 00 00       	mov    $0xec,%eax
 8288184:	eb 1a                	jmp    82881a0 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x60>
 8288186:	b8 7c 00 00 00       	mov    $0x7c,%eax
 828818b:	eb 13                	jmp    82881a0 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x60>
 828818d:	b8 8a 00 00 00       	mov    $0x8a,%eax
 8288192:	eb 0c                	jmp    82881a0 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x60>
 8288194:	b8 73 00 00 00       	mov    $0x73,%eax
 8288199:	eb 05                	jmp    82881a0 <_ZN21CSecu_ProtectionField14GetOppositeErrEi+0x60>
 828819b:	b8 01 00 00 00       	mov    $0x1,%eax
 82881a0:	5d                   	pop    %ebp
 82881a1:	c3                   	ret

```

```c
// CSecu_ProtectionField::GetOppositeErr @ 0x8288140

/* CSecu_ProtectionField::GetOppositeErr(int) */

undefined4 __thiscall CSecu_ProtectionField::GetOppositeErr(CSecu_ProtectionField *this,int param_1)

{
  if (param_1 == 0x88) {
    return 0xec;
  }
  if (param_1 < 0x89) {
    if (param_1 == 0x7a) {
      return 0xee;
    }
    if (param_1 == 0x7b) {
      return 0x7c;
    }
    if (param_1 == 0x72) {
      return 0x73;
    }
  }
  else {
    if (param_1 == 0x89) {
      return 0x8a;
    }
    if (param_1 - 0xe4U < 2) {
      return 0x73;
    }
  }
  return 1;
}

```

---

## GetProtectionType

```asm
// === 082880dc CSecu_ProtectionField::GetProtectionType  [0x082880dc-0x828813f] ===
 82880dc:	55                   	push   %ebp
 82880dd:	89 e5                	mov    %esp,%ebp
 82880df:	83 ec 28             	sub    $0x28,%esp
 82880e2:	8b 55 08             	mov    0x8(%ebp),%edx
 82880e5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82880e8:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 82880eb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82880ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 82880f3:	89 04 24             	mov    %eax,(%esp)
 82880f6:	e8 93 0d 00 00       	call   8288e8e <_ZNSt3mapI18SECURITY_PROTCTIONjSt4lessIS0_ESaISt4pairIKS0_jEEE4findERS4_>
 82880fb:	83 ec 04             	sub    $0x4,%esp
 82880fe:	8b 55 08             	mov    0x8(%ebp),%edx
 8288101:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8288104:	89 54 24 04          	mov    %edx,0x4(%esp)
 8288108:	89 04 24             	mov    %eax,(%esp)
 828810b:	e8 aa 0d 00 00       	call   8288eba <_ZNSt3mapI18SECURITY_PROTCTIONjSt4lessIS0_ESaISt4pairIKS0_jEEE3endEv>
 8288110:	83 ec 04             	sub    $0x4,%esp
 8288113:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8288116:	89 44 24 04          	mov    %eax,0x4(%esp)
 828811a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828811d:	89 04 24             	mov    %eax,(%esp)
 8288120:	e8 bb 0d 00 00       	call   8288ee0 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18SECURITY_PROTCTIONjEEneERKS4_>
 8288125:	84 c0                	test   %al,%al
 8288127:	74 10                	je     8288139 <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION+0x5d>
 8288129:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828812c:	89 04 24             	mov    %eax,(%esp)
 828812f:	e8 c0 0d 00 00       	call   8288ef4 <_ZNKSt17_Rb_tree_iteratorISt4pairIK18SECURITY_PROTCTIONjEEptEv>
 8288134:	8b 40 04             	mov    0x4(%eax),%eax
 8288137:	eb 05                	jmp    828813e <_ZN21CSecu_ProtectionField17GetProtectionTypeE18SECURITY_PROTCTION+0x62>
 8288139:	b8 00 00 00 00       	mov    $0x0,%eax
 828813e:	c9                   	leave
 828813f:	c3                   	ret

```

```c
// CSecu_ProtectionField::GetProtectionType @ 0x82880dc

/* CSecu_ProtectionField::GetProtectionType(SECURITY_PROTCTION) */

undefined4 CSecu_ProtectionField::GetProtectionType(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>> local_14 [4];
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  local_10 [12];
  
  std::
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  ::find(local_14);
  std::
  map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## init

```asm
// === 0828824e CSecu_ProtectionField::init  [0x0828824e-0x82884d5] ===
 828824e:	55                   	push   %ebp
 828824f:	89 e5                	mov    %esp,%ebp
 8288251:	57                   	push   %edi
 8288252:	56                   	push   %esi
 8288253:	53                   	push   %ebx
 8288254:	81 ec 8c 02 00 00    	sub    $0x28c,%esp
 828825a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8288261:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8288268:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 828826f:	eb 12                	jmp    8288283 <_ZN21CSecu_ProtectionField4initEv+0x35>
 8288271:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8288274:	c7 84 85 98 fd ff ff 	movl   $0x1ff,-0x268(%ebp,%eax,4)
 828827b:	ff 01 00 00 
 828827f:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8288283:	83 7d d8 46          	cmpl   $0x46,-0x28(%ebp)
 8288287:	0f 9e c0             	setle  %al
 828828a:	84 c0                	test   %al,%al
 828828c:	75 e3                	jne    8288271 <_ZN21CSecu_ProtectionField4initEv+0x23>
 828828e:	8d 95 b4 fe ff ff    	lea    -0x14c(%ebp),%edx
 8288294:	bb c0 41 c1 08       	mov    $0x8c141c0,%ebx
 8288299:	b8 25 00 00 00       	mov    $0x25,%eax
 828829e:	89 d7                	mov    %edx,%edi
 82882a0:	89 de                	mov    %ebx,%esi
 82882a2:	89 c1                	mov    %eax,%ecx
 82882a4:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 82882a6:	c7 45 e0 25 00 00 00 	movl   $0x25,-0x20(%ebp)
 82882ad:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82882b4:	e9 97 00 00 00       	jmp    8288350 <_ZN21CSecu_ProtectionField4initEv+0x102>
 82882b9:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82882c0:	eb 79                	jmp    828833b <_ZN21CSecu_ProtectionField4initEv+0xed>
 82882c2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 82882c5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82882c8:	8b 84 85 b4 fe ff ff 	mov    -0x14c(%ebp,%eax,4),%eax
 82882cf:	39 c2                	cmp    %eax,%edx
 82882d1:	75 64                	jne    8288337 <_ZN21CSecu_ProtectionField4initEv+0xe9>
 82882d3:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 82882d6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82882d9:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
 82882e0:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 82882e7:	00 
 82882e8:	c7 44 24 20 80 00 00 	movl   $0x80,0x20(%esp)
 82882ef:	00 
 82882f0:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 82882f7:	00 
 82882f8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 82882ff:	00 
 8288300:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 8288307:	00 
 8288308:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 828830f:	00 
 8288310:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8288317:	00 
 8288318:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828831f:	00 
 8288320:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8288327:	00 
 8288328:	89 04 24             	mov    %eax,(%esp)
 828832b:	e8 44 fd ff ff       	call   8288074 <_Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_>
 8288330:	89 84 9d 98 fd ff ff 	mov    %eax,-0x268(%ebp,%ebx,4)
 8288337:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 828833b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 828833e:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8288341:	0f 9c c0             	setl   %al
 8288344:	84 c0                	test   %al,%al
 8288346:	0f 85 76 ff ff ff    	jne    82882c2 <_ZN21CSecu_ProtectionField4initEv+0x74>
 828834c:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8288350:	83 7d d8 46          	cmpl   $0x46,-0x28(%ebp)
 8288354:	0f 9e c0             	setle  %al
 8288357:	84 c0                	test   %al,%al
 8288359:	0f 85 5a ff ff ff    	jne    82882b9 <_ZN21CSecu_ProtectionField4initEv+0x6b>
 828835f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8288366:	eb 12                	jmp    828837a <_ZN21CSecu_ProtectionField4initEv+0x12c>
 8288368:	8b 45 d8             	mov    -0x28(%ebp),%eax
 828836b:	c7 84 85 98 fd ff ff 	movl   $0x1ff,-0x268(%ebp,%eax,4)
 8288372:	ff 01 00 00 
 8288376:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 828837a:	83 7d d8 46          	cmpl   $0x46,-0x28(%ebp)
 828837e:	0f 9e c0             	setle  %al
 8288381:	84 c0                	test   %al,%al
 8288383:	75 e3                	jne    8288368 <_ZN21CSecu_ProtectionField4initEv+0x11a>
 8288385:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 828838b:	bb 60 42 c1 08       	mov    $0x8c14260,%ebx
 8288390:	b8 1d 00 00 00       	mov    $0x1d,%eax
 8288395:	89 d7                	mov    %edx,%edi
 8288397:	89 de                	mov    %ebx,%esi
 8288399:	89 c1                	mov    %eax,%ecx
 828839b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 828839d:	c7 45 e4 1d 00 00 00 	movl   $0x1d,-0x1c(%ebp)
 82883a4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 82883ab:	e9 97 00 00 00       	jmp    8288447 <_ZN21CSecu_ProtectionField4initEv+0x1f9>
 82883b0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 82883b7:	eb 79                	jmp    8288432 <_ZN21CSecu_ProtectionField4initEv+0x1e4>
 82883b9:	8b 55 d8             	mov    -0x28(%ebp),%edx
 82883bc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 82883bf:	8b 84 85 48 ff ff ff 	mov    -0xb8(%ebp,%eax,4),%eax
 82883c6:	39 c2                	cmp    %eax,%edx
 82883c8:	75 64                	jne    828842e <_ZN21CSecu_ProtectionField4initEv+0x1e0>
 82883ca:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 82883cd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 82883d0:	8b 84 85 98 fd ff ff 	mov    -0x268(%ebp,%eax,4),%eax
 82883d7:	c7 44 24 24 00 01 00 	movl   $0x100,0x24(%esp)
 82883de:	00 
 82883df:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 82883e6:	00 
 82883e7:	c7 44 24 1c 40 00 00 	movl   $0x40,0x1c(%esp)
 82883ee:	00 
 82883ef:	c7 44 24 18 20 00 00 	movl   $0x20,0x18(%esp)
 82883f6:	00 
 82883f7:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 82883fe:	00 
 82883ff:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 8288406:	00 
 8288407:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 828840e:	00 
 828840f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8288416:	00 
 8288417:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828841e:	00 
 828841f:	89 04 24             	mov    %eax,(%esp)
 8288422:	e8 4d fc ff ff       	call   8288074 <_Z23ExceptionProtectionTypei23SECURITY_PROTCTION_TYPES_S_S_S_S_S_S_S_>
 8288427:	89 84 9d 98 fd ff ff 	mov    %eax,-0x268(%ebp,%ebx,4)
 828842e:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8288432:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8288435:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8288438:	0f 9c c0             	setl   %al
 828843b:	84 c0                	test   %al,%al
 828843d:	0f 85 76 ff ff ff    	jne    82883b9 <_ZN21CSecu_ProtectionField4initEv+0x16b>
 8288443:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8288447:	83 7d d8 46          	cmpl   $0x46,-0x28(%ebp)
 828844b:	0f 9e c0             	setle  %al
 828844e:	84 c0                	test   %al,%al
 8288450:	0f 85 5a ff ff ff    	jne    82883b0 <_ZN21CSecu_ProtectionField4initEv+0x162>
 8288456:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 828845d:	eb 60                	jmp    82884bf <_ZN21CSecu_ProtectionField4initEv+0x271>
 828845f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8288462:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
 8288468:	c1 e2 02             	shl    $0x2,%edx
 828846b:	8d 14 10             	lea    (%eax,%edx,1),%edx
 828846e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8288471:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8288474:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8288477:	89 54 24 08          	mov    %edx,0x8(%esp)
 828847b:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 828847e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8288482:	89 04 24             	mov    %eax,(%esp)
 8288485:	e8 77 0a 00 00       	call   8288f01 <_ZSt9make_pairI18SECURITY_PROTCTIONRjESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 828848a:	83 ec 04             	sub    $0x4,%esp
 828848d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8288490:	89 44 24 04          	mov    %eax,0x4(%esp)
 8288494:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8288497:	89 04 24             	mov    %eax,(%esp)
 828849a:	e8 a9 0a 00 00       	call   8288f48 <_ZNSt4pairIK18SECURITY_PROTCTIONjEC1IS0_jEEOS_IT_T0_E>
 828849f:	8b 55 08             	mov    0x8(%ebp),%edx
 82884a2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 82884a5:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 82884a8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 82884ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 82884b0:	89 04 24             	mov    %eax,(%esp)
 82884b3:	e8 c0 0a 00 00       	call   8288f78 <_ZNSt3mapI18SECURITY_PROTCTIONjSt4lessIS0_ESaISt4pairIKS0_jEEE6insertERKS5_>
 82884b8:	83 ec 04             	sub    $0x4,%esp
 82884bb:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 82884bf:	83 7d d8 46          	cmpl   $0x46,-0x28(%ebp)
 82884c3:	0f 9e c0             	setle  %al
 82884c6:	84 c0                	test   %al,%al
 82884c8:	75 95                	jne    828845f <_ZN21CSecu_ProtectionField4initEv+0x211>
 82884ca:	8d 65 f4             	lea    -0xc(%ebp),%esp
 82884cd:	83 c4 00             	add    $0x0,%esp
 82884d0:	5b                   	pop    %ebx
 82884d1:	5e                   	pop    %esi
 82884d2:	5f                   	pop    %edi
 82884d3:	5d                   	pop    %ebp
 82884d4:	c3                   	ret
 82884d5:	90                   	nop

```

```c
// CSecu_ProtectionField::init @ 0x828824e

/* CSecu_ProtectionField::init() */

void CSecu_ProtectionField::init(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte bVar6;
  undefined4 local_26c [71];
  int local_150 [37];
  int local_bc [29];
  pair local_48 [8];
  pair<SECURITY_PROTCTION_const,unsigned_int> local_40 [8];
  SECURITY_PROTCTION local_38 [8];
  uint local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar6 = 0;
  local_28 = 0;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_26c[local_2c] = 0x1ff;
  }
  piVar4 = &init()::C_2279;
  piVar5 = local_150;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  local_24 = 0x25;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    for (local_28 = 0; uVar1 = local_2c, local_28 < local_24; local_28 = local_28 + 1) {
      if (local_2c == local_150[local_28]) {
        uVar2 = ExceptionProtectionType(local_26c[local_2c],0,0,0,0,0x10,0,0,0x80,0);
        local_26c[uVar1] = uVar2;
      }
    }
  }
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_26c[local_2c] = 0x1ff;
  }
  piVar4 = &init()::C_2285;
  piVar5 = local_bc;
  for (iVar3 = 0x1d; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
    piVar5 = piVar5 + (uint)bVar6 * -2 + 1;
  }
  local_20 = 0x1d;
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    for (local_28 = 0; uVar1 = local_2c, local_28 < local_20; local_28 = local_28 + 1) {
      if (local_2c == local_bc[local_28]) {
        uVar2 = ExceptionProtectionType(local_26c[local_2c],1,2,4,8,0x10,0x20,0x40,0,0x100);
        local_26c[uVar1] = uVar2;
      }
    }
  }
  for (local_2c = 0; (int)local_2c < 0x47; local_2c = local_2c + 1) {
    local_30 = local_2c;
    std::make_pair<SECURITY_PROTCTION,unsigned_int&>(local_38,&local_30);
    std::pair<SECURITY_PROTCTION_const,unsigned_int>::pair<SECURITY_PROTCTION,unsigned_int>
              (local_40,local_38);
    std::
    map<SECURITY_PROTCTION,unsigned_int,std::less<SECURITY_PROTCTION>,std::allocator<std::pair<SECURITY_PROTCTION_const,unsigned_int>>>
    ::insert(local_48);
  }
  return;
}

```


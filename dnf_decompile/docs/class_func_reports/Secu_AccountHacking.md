# Secu_AccountHacking

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## checkAccountHackingHackType

```asm
// === 08278a48 Secu_AccountHacking::checkAccountHackingHackType  [0x08278a48-0x8278a97] ===
 8278a48:	55                   	push   %ebp
 8278a49:	89 e5                	mov    %esp,%ebp
 8278a4b:	81 7d 08 c6 02 00 00 	cmpl   $0x2c6,0x8(%ebp)
 8278a52:	74 36                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a54:	81 7d 08 c7 02 00 00 	cmpl   $0x2c7,0x8(%ebp)
 8278a5b:	74 2d                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a5d:	81 7d 08 c8 02 00 00 	cmpl   $0x2c8,0x8(%ebp)
 8278a64:	74 24                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a66:	81 7d 08 c9 02 00 00 	cmpl   $0x2c9,0x8(%ebp)
 8278a6d:	74 1b                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a6f:	81 7d 08 ca 02 00 00 	cmpl   $0x2ca,0x8(%ebp)
 8278a76:	74 12                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a78:	81 7d 08 cb 02 00 00 	cmpl   $0x2cb,0x8(%ebp)
 8278a7f:	74 09                	je     8278a8a <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x42>
 8278a81:	81 7d 08 cd 02 00 00 	cmpl   $0x2cd,0x8(%ebp)
 8278a88:	75 07                	jne    8278a91 <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x49>
 8278a8a:	b8 01 00 00 00       	mov    $0x1,%eax
 8278a8f:	eb 05                	jmp    8278a96 <_ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x4e>
 8278a91:	b8 00 00 00 00       	mov    $0x0,%eax
 8278a96:	5d                   	pop    %ebp
 8278a97:	c3                   	ret

```

```c
// Secu_AccountHacking::checkAccountHackingHackType @ 0x8278a48

/* Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE) */

undefined4 Secu_AccountHacking::checkAccountHackingHackType(int param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 == 0x2c6) || (param_1 == 0x2c7)) || (param_1 == 0x2c8)) ||
     (((param_1 == 0x2c9 || (param_1 == 0x2ca)) || ((param_1 == 0x2cb || (param_1 == 0x2cd)))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getMatchingHacktype

```asm
// === 0827912a Secu_AccountHacking::getMatchingHacktype  [0x0827912a-0x8279181] ===
 827912a:	55                   	push   %ebp
 827912b:	89 e5                	mov    %esp,%ebp
 827912d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8279131:	75 07                	jne    827913a <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x10>
 8279133:	b8 c6 02 00 00       	mov    $0x2c6,%eax
 8279138:	eb 46                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 827913a:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 827913e:	75 07                	jne    8279147 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x1d>
 8279140:	b8 c7 02 00 00       	mov    $0x2c7,%eax
 8279145:	eb 39                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 8279147:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 827914b:	75 07                	jne    8279154 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x2a>
 827914d:	b8 c8 02 00 00       	mov    $0x2c8,%eax
 8279152:	eb 2c                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 8279154:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8279158:	75 07                	jne    8279161 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x37>
 827915a:	b8 c9 02 00 00       	mov    $0x2c9,%eax
 827915f:	eb 1f                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 8279161:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8279165:	75 07                	jne    827916e <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x44>
 8279167:	b8 ca 02 00 00       	mov    $0x2ca,%eax
 827916c:	eb 12                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 827916e:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 8279172:	75 07                	jne    827917b <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x51>
 8279174:	b8 cb 02 00 00       	mov    $0x2cb,%eax
 8279179:	eb 05                	jmp    8279180 <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE+0x56>
 827917b:	b8 a1 0f 00 00       	mov    $0xfa1,%eax
 8279180:	5d                   	pop    %ebp
 8279181:	c3                   	ret

```

```c
// Secu_AccountHacking::getMatchingHacktype @ 0x827912a

/* Secu_AccountHacking::getMatchingHacktype(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::getMatchingHacktype(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x2c6;
  }
  else if (param_2 == 1) {
    uVar1 = 0x2c7;
  }
  else if (param_2 == 2) {
    uVar1 = 0x2c8;
  }
  else if (param_2 == 3) {
    uVar1 = 0x2c9;
  }
  else if (param_2 == 4) {
    uVar1 = 0x2ca;
  }
  else if (param_2 == 5) {
    uVar1 = 0x2cb;
  }
  else {
    uVar1 = 0xfa1;
  }
  return uVar1;
}

```

---

## init

```asm
// === 08278a98 Secu_AccountHacking::init  [0x08278a98-0x8278ab3] ===
 8278a98:	55                   	push   %ebp
 8278a99:	89 e5                	mov    %esp,%ebp
 8278a9b:	83 ec 18             	sub    $0x18,%esp
 8278a9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8278aa1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8278aa4:	89 50 10             	mov    %edx,0x10(%eax)
 8278aa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8278aaa:	89 04 24             	mov    %eax,(%esp)
 8278aad:	e8 02 00 00 00       	call   8278ab4 <_ZN19Secu_AccountHacking9resetInfoEv>
 8278ab2:	c9                   	leave
 8278ab3:	c3                   	ret

```

```c
// Secu_AccountHacking::init @ 0x8278a98

/* Secu_AccountHacking::init(CUser*) */

void __thiscall Secu_AccountHacking::init(Secu_AccountHacking *this,CUser *param_1)

{
  *(CUser **)(this + 0x10) = param_1;
  resetInfo(this);
  return;
}

```

---

## isAvatar

```asm
// === 08278aec Secu_AccountHacking::isAvatar  [0x08278aec-0x8278b47] ===
 8278aec:	55                   	push   %ebp
 8278aed:	89 e5                	mov    %esp,%ebp
 8278aef:	53                   	push   %ebx
 8278af0:	83 ec 24             	sub    $0x24,%esp
 8278af3:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8278af6:	e8 a0 36 e5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8278afb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8278aff:	89 04 24             	mov    %eax,(%esp)
 8278b02:	e8 2b 6f 0e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8278b07:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8278b0a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8278b0e:	74 1d                	je     8278b2d <_ZN19Secu_AccountHacking8isAvatarEj+0x41>
 8278b10:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8278b13:	8b 00                	mov    (%eax),%eax
 8278b15:	83 c0 10             	add    $0x10,%eax
 8278b18:	8b 10                	mov    (%eax),%edx
 8278b1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8278b1d:	89 04 24             	mov    %eax,(%esp)
 8278b20:	ff d2                	call   *%edx
 8278b22:	84 c0                	test   %al,%al
 8278b24:	74 07                	je     8278b2d <_ZN19Secu_AccountHacking8isAvatarEj+0x41>
 8278b26:	b8 01 00 00 00       	mov    $0x1,%eax
 8278b2b:	eb 05                	jmp    8278b32 <_ZN19Secu_AccountHacking8isAvatarEj+0x46>
 8278b2d:	b8 00 00 00 00       	mov    $0x0,%eax
 8278b32:	84 c0                	test   %al,%al
 8278b34:	74 07                	je     8278b3d <_ZN19Secu_AccountHacking8isAvatarEj+0x51>
 8278b36:	b8 01 00 00 00       	mov    $0x1,%eax
 8278b3b:	eb 05                	jmp    8278b42 <_ZN19Secu_AccountHacking8isAvatarEj+0x56>
 8278b3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8278b42:	83 c4 24             	add    $0x24,%esp
 8278b45:	5b                   	pop    %ebx
 8278b46:	5d                   	pop    %ebp
 8278b47:	c3                   	ret

```

```c
// Secu_AccountHacking::isAvatar @ 0x8278aec

/* Secu_AccountHacking::isAvatar(unsigned int) */

undefined1 __thiscall Secu_AccountHacking::isAvatar(Secu_AccountHacking *this,uint param_1)

{
  undefined1 uVar1;
  char cVar2;
  CDataManager *this_00;
  int *piVar3;
  
  this_00 = (CDataManager *)G_CDataManager();
  piVar3 = (int *)CDataManager::find_item(this_00,param_1);
  if ((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x10))(piVar3), cVar2 == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## isAvatarPatten

```asm
// === 08279282 Secu_AccountHacking::isAvatarPatten  [0x08279282-0x827929f] ===
 8279282:	55                   	push   %ebp
 8279283:	89 e5                	mov    %esp,%ebp
 8279285:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8279289:	74 06                	je     8279291 <_ZN19Secu_AccountHacking14isAvatarPattenEN18AccountHackingType1TE+0xf>
 827928b:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 827928f:	75 07                	jne    8279298 <_ZN19Secu_AccountHacking14isAvatarPattenEN18AccountHackingType1TE+0x16>
 8279291:	b8 01 00 00 00       	mov    $0x1,%eax
 8279296:	eb 05                	jmp    827929d <_ZN19Secu_AccountHacking14isAvatarPattenEN18AccountHackingType1TE+0x1b>
 8279298:	b8 00 00 00 00       	mov    $0x0,%eax
 827929d:	5d                   	pop    %ebp
 827929e:	c3                   	ret
 827929f:	90                   	nop

```

```c
// Secu_AccountHacking::isAvatarPatten @ 0x8279282

/* Secu_AccountHacking::isAvatarPatten(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::isAvatarPatten(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 4) || (param_2 == 5)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## isDetectionGoldPatten

```asm
// === 082792a0 Secu_AccountHacking::isDetectionGoldPatten  [0x082792a0-0x82792db] ===
 82792a0:	55                   	push   %ebp
 82792a1:	89 e5                	mov    %esp,%ebp
 82792a3:	8b 45 08             	mov    0x8(%ebp),%eax
 82792a6:	0f b6 00             	movzbl (%eax),%eax
 82792a9:	84 c0                	test   %al,%al
 82792ab:	75 21                	jne    82792ce <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv+0x2e>
 82792ad:	8b 45 08             	mov    0x8(%ebp),%eax
 82792b0:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 82792b4:	84 c0                	test   %al,%al
 82792b6:	75 16                	jne    82792ce <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv+0x2e>
 82792b8:	8b 45 08             	mov    0x8(%ebp),%eax
 82792bb:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 82792bf:	84 c0                	test   %al,%al
 82792c1:	75 0b                	jne    82792ce <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv+0x2e>
 82792c3:	8b 45 08             	mov    0x8(%ebp),%eax
 82792c6:	0f b6 40 03          	movzbl 0x3(%eax),%eax
 82792ca:	84 c0                	test   %al,%al
 82792cc:	74 07                	je     82792d5 <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv+0x35>
 82792ce:	b8 01 00 00 00       	mov    $0x1,%eax
 82792d3:	eb 05                	jmp    82792da <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv+0x3a>
 82792d5:	b8 00 00 00 00       	mov    $0x0,%eax
 82792da:	5d                   	pop    %ebp
 82792db:	c3                   	ret

```

```c
// Secu_AccountHacking::isDetectionGoldPatten @ 0x82792a0

/* Secu_AccountHacking::isDetectionGoldPatten() */

undefined4 __thiscall Secu_AccountHacking::isDetectionGoldPatten(Secu_AccountHacking *this)

{
  undefined4 uVar1;
  
  if ((((*this == (Secu_AccountHacking)0x0) && (this[1] == (Secu_AccountHacking)0x0)) &&
      (this[2] == (Secu_AccountHacking)0x0)) && (this[3] == (Secu_AccountHacking)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## isGoldPatten

```asm
// === 08279258 Secu_AccountHacking::isGoldPatten  [0x08279258-0x8279281] ===
 8279258:	55                   	push   %ebp
 8279259:	89 e5                	mov    %esp,%ebp
 827925b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 827925f:	74 12                	je     8279273 <_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE+0x1b>
 8279261:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8279265:	74 0c                	je     8279273 <_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE+0x1b>
 8279267:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 827926b:	74 06                	je     8279273 <_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE+0x1b>
 827926d:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8279271:	75 07                	jne    827927a <_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE+0x22>
 8279273:	b8 01 00 00 00       	mov    $0x1,%eax
 8279278:	eb 05                	jmp    827927f <_ZN19Secu_AccountHacking12isGoldPattenEN18AccountHackingType1TE+0x27>
 827927a:	b8 00 00 00 00       	mov    $0x0,%eax
 827927f:	5d                   	pop    %ebp
 8279280:	c3                   	ret
 8279281:	90                   	nop

```

```c
// Secu_AccountHacking::isGoldPatten @ 0x8279258

/* Secu_AccountHacking::isGoldPatten(AccountHackingType::T) */

undefined4 __thiscall Secu_AccountHacking::isGoldPatten(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## isSameAccountCharacter

```asm
// === 08279182 Secu_AccountHacking::isSameAccountCharacter  [0x08279182-0x8279257] ===
 8279182:	55                   	push   %ebp
 8279183:	89 e5                	mov    %esp,%ebp
 8279185:	83 ec 28             	sub    $0x28,%esp
 8279188:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 827918c:	75 0a                	jne    8279198 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0x16>
 827918e:	b8 00 00 00 00       	mov    $0x0,%eax
 8279193:	e9 bd 00 00 00       	jmp    8279255 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0xd3>
 8279198:	8b 45 08             	mov    0x8(%ebp),%eax
 827919b:	8b 40 10             	mov    0x10(%eax),%eax
 827919e:	8d 90 e8 96 07 00    	lea    0x796e8(%eax),%edx
 82791a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82791a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82791ab:	89 04 24             	mov    %eax,(%esp)
 82791ae:	e8 85 01 00 00       	call   8279338 <_ZNSt6vectorI12_Charac_infoSaIS0_EE5beginEv>
 82791b3:	83 ec 04             	sub    $0x4,%esp
 82791b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82791b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82791bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82791c0:	89 04 24             	mov    %eax,(%esp)
 82791c3:	e8 08 02 00 00       	call   82793d0 <_ZN9__gnu_cxx17__normal_iteratorIPK12_Charac_infoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82791c8:	8b 45 08             	mov    0x8(%ebp),%eax
 82791cb:	8b 40 10             	mov    0x10(%eax),%eax
 82791ce:	8d 90 e8 96 07 00    	lea    0x796e8(%eax),%edx
 82791d4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82791d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 82791db:	89 04 24             	mov    %eax,(%esp)
 82791de:	e8 79 01 00 00       	call   827935c <_ZNSt6vectorI12_Charac_infoSaIS0_EE3endEv>
 82791e3:	83 ec 04             	sub    $0x4,%esp
 82791e6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 82791e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82791ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82791f0:	89 04 24             	mov    %eax,(%esp)
 82791f3:	e8 d8 01 00 00       	call   82793d0 <_ZN9__gnu_cxx17__normal_iteratorIPK12_Charac_infoSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 82791f8:	eb 40                	jmp    827923a <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0xb8>
 82791fa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82791fd:	89 04 24             	mov    %eax,(%esp)
 8279200:	e8 c1 01 00 00       	call   82793c6 <_ZNK9__gnu_cxx17__normal_iteratorIPK12_Charac_infoSt6vectorIS1_SaIS1_EEEptEv>
 8279205:	83 c0 04             	add    $0x4,%eax
 8279208:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 827920f:	00 
 8279210:	8b 55 0c             	mov    0xc(%ebp),%edx
 8279213:	89 54 24 04          	mov    %edx,0x4(%esp)
 8279217:	89 04 24             	mov    %eax,(%esp)
 827921a:	e8 a1 56 e0 ff       	call   807e8c0 <strncmp@plt>
 827921f:	85 c0                	test   %eax,%eax
 8279221:	0f 94 c0             	sete   %al
 8279224:	84 c0                	test   %al,%al
 8279226:	74 07                	je     827922f <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0xad>
 8279228:	b8 01 00 00 00       	mov    $0x1,%eax
 827922d:	eb 26                	jmp    8279255 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0xd3>
 827922f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8279232:	89 04 24             	mov    %eax,(%esp)
 8279235:	e8 74 01 00 00       	call   82793ae <_ZN9__gnu_cxx17__normal_iteratorIPK12_Charac_infoSt6vectorIS1_SaIS1_EEEppEv>
 827923a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 827923d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279241:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8279244:	89 04 24             	mov    %eax,(%esp)
 8279247:	e8 36 01 00 00       	call   8279382 <_ZN9__gnu_cxxneIPK12_Charac_infoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 827924c:	84 c0                	test   %al,%al
 827924e:	75 aa                	jne    82791fa <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc+0x78>
 8279250:	b8 00 00 00 00       	mov    $0x0,%eax
 8279255:	c9                   	leave
 8279256:	c3                   	ret
 8279257:	90                   	nop

```

```c
// Secu_AccountHacking::isSameAccountCharacter @ 0x8279182

/* Secu_AccountHacking::isSameAccountCharacter(char const*) */

undefined4 __thiscall
Secu_AccountHacking::isSameAccountCharacter(Secu_AccountHacking *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_1c [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  if (param_1 != (char *)0x0) {
    std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_18,local_14);
    std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    __normal_iterator<_Charac_info*>(local_1c,local_10);
    while (bVar1 = __gnu_cxx::operator!=(local_18,local_1c), bVar1) {
      iVar2 = __gnu_cxx::
              __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
              ::operator->(local_18);
      iVar2 = strncmp((char *)(iVar2 + 4),param_1,0x1e);
      if (iVar2 == 0) {
        return 1;
      }
      __gnu_cxx::
      __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
      ::operator++(local_18);
    }
  }
  return 0;
}

```

---

## resetInfo

```asm
// === 08278ab4 Secu_AccountHacking::resetInfo  [0x08278ab4-0x8278aeb] ===
 8278ab4:	55                   	push   %ebp
 8278ab5:	89 e5                	mov    %esp,%ebp
 8278ab7:	83 ec 18             	sub    $0x18,%esp
 8278aba:	8b 45 08             	mov    0x8(%ebp),%eax
 8278abd:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8278ac4:	00 
 8278ac5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8278acc:	00 
 8278acd:	89 04 24             	mov    %eax,(%esp)
 8278ad0:	e8 eb 51 e0 ff       	call   807dcc0 <memset@plt>
 8278ad5:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ad8:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8278adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ae2:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8278ae9:	c9                   	leave
 8278aea:	c3                   	ret
 8278aeb:	90                   	nop

```

```c
// Secu_AccountHacking::resetInfo @ 0x8278ab4

/* Secu_AccountHacking::resetInfo() */

void __thiscall Secu_AccountHacking::resetInfo(Secu_AccountHacking *this)

{
  memset(this,0,6);
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## sendAvatar

```asm
// === 08278f16 Secu_AccountHacking::sendAvatar  [0x08278f16-0x827901f] ===
 8278f16:	55                   	push   %ebp
 8278f17:	89 e5                	mov    %esp,%ebp
 8278f19:	83 ec 28             	sub    $0x28,%esp
 8278f1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278f1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278f23:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f26:	89 04 24             	mov    %eax,(%esp)
 8278f29:	e8 54 02 00 00       	call   8279182 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc>
 8278f2e:	84 c0                	test   %al,%al
 8278f30:	0f 85 e0 00 00 00    	jne    8279016 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x100>
 8278f36:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f39:	8b 40 10             	mov    0x10(%eax),%eax
 8278f3c:	85 c0                	test   %eax,%eax
 8278f3e:	74 1b                	je     8278f5b <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x45>
 8278f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f43:	8b 40 10             	mov    0x10(%eax),%eax
 8278f46:	89 04 24             	mov    %eax,(%esp)
 8278f49:	e8 6c 7d e9 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 8278f4e:	66 83 f8 64          	cmp    $0x64,%ax
 8278f52:	77 07                	ja     8278f5b <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x45>
 8278f54:	b8 01 00 00 00       	mov    $0x1,%eax
 8278f59:	eb 05                	jmp    8278f60 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x4a>
 8278f5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8278f60:	84 c0                	test   %al,%al
 8278f62:	0f 84 b1 00 00 00    	je     8279019 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x103>
 8278f68:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f6b:	8b 40 08             	mov    0x8(%eax),%eax
 8278f6e:	8d 50 01             	lea    0x1(%eax),%edx
 8278f71:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f74:	89 50 08             	mov    %edx,0x8(%eax)
 8278f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8278f7a:	89 04 24             	mov    %eax,(%esp)
 8278f7d:	e8 1e 03 00 00       	call   82792a0 <_ZN19Secu_AccountHacking21isDetectionGoldPattenEv>
 8278f82:	84 c0                	test   %al,%al
 8278f84:	74 29                	je     8278faf <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x99>
 8278f86:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8278f8d:	00 
 8278f8e:	8b 45 10             	mov    0x10(%ebp),%eax
 8278f91:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278f95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278f98:	89 44 24 08          	mov    %eax,0x8(%esp)
 8278f9c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8278fa3:	00 
 8278fa4:	8b 45 08             	mov    0x8(%ebp),%eax
 8278fa7:	89 04 24             	mov    %eax,(%esp)
 8278faa:	e8 8d 00 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8278faf:	8b 45 08             	mov    0x8(%ebp),%eax
 8278fb2:	8b 40 08             	mov    0x8(%eax),%eax
 8278fb5:	83 f8 07             	cmp    $0x7,%eax
 8278fb8:	76 28                	jbe    8278fe2 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0xcc>
 8278fba:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8278fc1:	e8 d8 2c e5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8278fc6:	89 c2                	mov    %eax,%edx
 8278fc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8278fcb:	8b 40 0c             	mov    0xc(%eax),%eax
 8278fce:	89 d1                	mov    %edx,%ecx
 8278fd0:	29 c1                	sub    %eax,%ecx
 8278fd2:	89 c8                	mov    %ecx,%eax
 8278fd4:	3d 57 02 00 00       	cmp    $0x257,%eax
 8278fd9:	77 07                	ja     8278fe2 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0xcc>
 8278fdb:	b8 01 00 00 00       	mov    $0x1,%eax
 8278fe0:	eb 05                	jmp    8278fe7 <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0xd1>
 8278fe2:	b8 00 00 00 00       	mov    $0x0,%eax
 8278fe7:	84 c0                	test   %al,%al
 8278fe9:	74 31                	je     827901c <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x106>
 8278feb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8278ff2:	00 
 8278ff3:	8b 45 10             	mov    0x10(%ebp),%eax
 8278ff6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278ffa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278ffd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8279001:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8279008:	00 
 8279009:	8b 45 08             	mov    0x8(%ebp),%eax
 827900c:	89 04 24             	mov    %eax,(%esp)
 827900f:	e8 28 00 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8279014:	eb 07                	jmp    827901d <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x107>
 8279016:	90                   	nop
 8279017:	eb 04                	jmp    827901d <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x107>
 8279019:	90                   	nop
 827901a:	eb 01                	jmp    827901d <_ZN19Secu_AccountHacking10sendAvatarEPKcj+0x107>
 827901c:	90                   	nop
 827901d:	c9                   	leave
 827901e:	c3                   	ret
 827901f:	90                   	nop

```

```c
// Secu_AccountHacking::sendAvatar @ 0x8278f16

/* Secu_AccountHacking::sendAvatar(char const*, unsigned int) */

void __thiscall
Secu_AccountHacking::sendAvatar(Secu_AccountHacking *this,char *param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  
  cVar2 = isSameAccountCharacter(this,param_1);
  if (cVar2 == '\0') {
    if ((*(int *)(this + 0x10) == 0) ||
       (uVar3 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10)),
       100 < uVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      cVar2 = isDetectionGoldPatten(this);
      if (cVar2 != '\0') {
        setPatten(this,4,param_1,param_2,0);
      }
      if ((*(uint *)(this + 8) < 8) ||
         (iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         599 < (uint)(iVar4 - *(int *)(this + 0xc)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        setPatten(this,5,param_1,param_2,0);
      }
    }
  }
  return;
}

```

---

## sendGold

```asm
// === 08278cce Secu_AccountHacking::sendGold  [0x08278cce-0x8278f15] ===
 8278cce:	55                   	push   %ebp
 8278ccf:	89 e5                	mov    %esp,%ebp
 8278cd1:	56                   	push   %esi
 8278cd2:	53                   	push   %ebx
 8278cd3:	83 ec 50             	sub    $0x50,%esp
 8278cd6:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8278cd9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8278cdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278cdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ce6:	89 04 24             	mov    %eax,(%esp)
 8278ce9:	e8 94 04 00 00       	call   8279182 <_ZN19Secu_AccountHacking22isSameAccountCharacterEPKc>
 8278cee:	84 c0                	test   %al,%al
 8278cf0:	75 09                	jne    8278cfb <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x2d>
 8278cf2:	81 7d 14 f4 01 00 00 	cmpl   $0x1f4,0x14(%ebp)
 8278cf9:	77 07                	ja     8278d02 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x34>
 8278cfb:	b8 01 00 00 00       	mov    $0x1,%eax
 8278d00:	eb 05                	jmp    8278d07 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x39>
 8278d02:	b8 00 00 00 00       	mov    $0x0,%eax
 8278d07:	84 c0                	test   %al,%al
 8278d09:	0f 85 f9 01 00 00    	jne    8278f08 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x23a>
 8278d0f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8278d13:	74 41                	je     8278d56 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x88>
 8278d15:	8b 45 08             	mov    0x8(%ebp),%eax
 8278d18:	8b 40 10             	mov    0x10(%eax),%eax
 8278d1b:	89 04 24             	mov    %eax,(%esp)
 8278d1e:	e8 73 ff e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8278d23:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8278d2a:	00 
 8278d2b:	8b 55 14             	mov    0x14(%ebp),%edx
 8278d2e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8278d32:	c7 44 24 0c ce 02 00 	movl   $0x2ce,0xc(%esp)
 8278d39:	00 
 8278d3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8278d3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8278d41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8278d48:	00 
 8278d49:	89 04 24             	mov    %eax,(%esp)
 8278d4c:	e8 1b da 1c 00       	call   844676c <_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj>
 8278d51:	e9 86 00 00 00       	jmp    8278ddc <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x10e>
 8278d56:	8b 45 08             	mov    0x8(%ebp),%eax
 8278d59:	8b 58 10             	mov    0x10(%eax),%ebx
 8278d5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8278d5f:	8b 40 10             	mov    0x10(%eax),%eax
 8278d62:	89 04 24             	mov    %eax,(%esp)
 8278d65:	e8 f0 0b e8 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8278d6a:	8b 55 14             	mov    0x14(%ebp),%edx
 8278d6d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8278d71:	8b 55 10             	mov    0x10(%ebp),%edx
 8278d74:	89 54 24 10          	mov    %edx,0x10(%esp)
 8278d78:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8278d7f:	00 
 8278d80:	c7 44 24 08 ce 02 00 	movl   $0x2ce,0x8(%esp)
 8278d87:	00 
 8278d88:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8278d8c:	89 04 24             	mov    %eax,(%esp)
 8278d8f:	e8 ea fe e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8278d94:	8b 45 08             	mov    0x8(%ebp),%eax
 8278d97:	8b 40 10             	mov    0x10(%eax),%eax
 8278d9a:	89 04 24             	mov    %eax,(%esp)
 8278d9d:	e8 18 7f e9 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 8278da2:	0f b7 f0             	movzwl %ax,%esi
 8278da5:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8278da9:	8b 45 08             	mov    0x8(%ebp),%eax
 8278dac:	8b 40 10             	mov    0x10(%eax),%eax
 8278daf:	89 04 24             	mov    %eax,(%esp)
 8278db2:	e8 49 7a fb ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8278db7:	89 74 24 14          	mov    %esi,0x14(%esp)
 8278dbb:	8b 55 14             	mov    0x14(%ebp),%edx
 8278dbe:	89 54 24 10          	mov    %edx,0x10(%esp)
 8278dc2:	8b 55 20             	mov    0x20(%ebp),%edx
 8278dc5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8278dc9:	8b 55 10             	mov    0x10(%ebp),%edx
 8278dcc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8278dd0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8278dd4:	89 04 24             	mov    %eax,(%esp)
 8278dd7:	e8 be 06 24 00       	call   84b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>
 8278ddc:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ddf:	8b 40 10             	mov    0x10(%eax),%eax
 8278de2:	85 c0                	test   %eax,%eax
 8278de4:	74 1b                	je     8278e01 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x133>
 8278de6:	8b 45 08             	mov    0x8(%ebp),%eax
 8278de9:	8b 40 10             	mov    0x10(%eax),%eax
 8278dec:	89 04 24             	mov    %eax,(%esp)
 8278def:	e8 c6 7e e9 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 8278df4:	66 83 f8 64          	cmp    $0x64,%ax
 8278df8:	77 07                	ja     8278e01 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x133>
 8278dfa:	b8 01 00 00 00       	mov    $0x1,%eax
 8278dff:	eb 05                	jmp    8278e06 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x138>
 8278e01:	b8 00 00 00 00       	mov    $0x0,%eax
 8278e06:	84 c0                	test   %al,%al
 8278e08:	0f 84 fd 00 00 00    	je     8278f0b <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x23d>
 8278e0e:	8b 45 14             	mov    0x14(%ebp),%eax
 8278e11:	ba 00 00 00 00       	mov    $0x0,%edx
 8278e16:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8278e19:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8278e1c:	df 6d d8             	fildll -0x28(%ebp)
 8278e1f:	8b 45 18             	mov    0x18(%ebp),%eax
 8278e22:	ba 00 00 00 00       	mov    $0x0,%edx
 8278e27:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8278e2a:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8278e2d:	df 6d d8             	fildll -0x28(%ebp)
 8278e30:	de f9                	fdivrp %st,%st(1)
 8278e32:	d9 05 d0 0f c0 08    	flds   0x8c00fd0
 8278e38:	de c9                	fmulp  %st,%st(1)
 8278e3a:	d9 7d d6             	fnstcw -0x2a(%ebp)
 8278e3d:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8278e41:	b4 0c                	mov    $0xc,%ah
 8278e43:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 8278e47:	d9 6d d4             	fldcw  -0x2c(%ebp)
 8278e4a:	db 5d f4             	fistpl -0xc(%ebp)
 8278e4d:	d9 6d d6             	fldcw  -0x2a(%ebp)
 8278e50:	8b 45 14             	mov    0x14(%ebp),%eax
 8278e53:	89 44 24 10          	mov    %eax,0x10(%esp)
 8278e57:	8b 45 10             	mov    0x10(%ebp),%eax
 8278e5a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278e5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278e61:	89 44 24 08          	mov    %eax,0x8(%esp)
 8278e65:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8278e6c:	00 
 8278e6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8278e70:	89 04 24             	mov    %eax,(%esp)
 8278e73:	e8 c4 01 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8278e78:	83 7d f4 45          	cmpl   $0x45,-0xc(%ebp)
 8278e7c:	7e 2a                	jle    8278ea8 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x1da>
 8278e7e:	8b 45 14             	mov    0x14(%ebp),%eax
 8278e81:	89 44 24 10          	mov    %eax,0x10(%esp)
 8278e85:	8b 45 10             	mov    0x10(%ebp),%eax
 8278e88:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278e8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278e8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8278e93:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8278e9a:	00 
 8278e9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8278e9e:	89 04 24             	mov    %eax,(%esp)
 8278ea1:	e8 96 01 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8278ea6:	eb 67                	jmp    8278f0f <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x241>
 8278ea8:	83 7d f4 31          	cmpl   $0x31,-0xc(%ebp)
 8278eac:	7e 2a                	jle    8278ed8 <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x20a>
 8278eae:	8b 45 14             	mov    0x14(%ebp),%eax
 8278eb1:	89 44 24 10          	mov    %eax,0x10(%esp)
 8278eb5:	8b 45 10             	mov    0x10(%ebp),%eax
 8278eb8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278ebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278ebf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8278ec3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8278eca:	00 
 8278ecb:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ece:	89 04 24             	mov    %eax,(%esp)
 8278ed1:	e8 66 01 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8278ed6:	eb 37                	jmp    8278f0f <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x241>
 8278ed8:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 8278edc:	7e 30                	jle    8278f0e <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x240>
 8278ede:	8b 45 14             	mov    0x14(%ebp),%eax
 8278ee1:	89 44 24 10          	mov    %eax,0x10(%esp)
 8278ee5:	8b 45 10             	mov    0x10(%ebp),%eax
 8278ee8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278eec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278eef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8278ef3:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8278efa:	00 
 8278efb:	8b 45 08             	mov    0x8(%ebp),%eax
 8278efe:	89 04 24             	mov    %eax,(%esp)
 8278f01:	e8 36 01 00 00       	call   827903c <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj>
 8278f06:	eb 07                	jmp    8278f0f <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x241>
 8278f08:	90                   	nop
 8278f09:	eb 04                	jmp    8278f0f <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x241>
 8278f0b:	90                   	nop
 8278f0c:	eb 01                	jmp    8278f0f <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc+0x241>
 8278f0e:	90                   	nop
 8278f0f:	83 c4 50             	add    $0x50,%esp
 8278f12:	5b                   	pop    %ebx
 8278f13:	5e                   	pop    %esi
 8278f14:	5d                   	pop    %ebp
 8278f15:	c3                   	ret

```

```c
// Secu_AccountHacking::sendGold @ 0x8278cce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Secu_AccountHacking::sendGold(char const*, unsigned int, unsigned int, unsigned int, unsigned
   char, char*) */

void __thiscall
Secu_AccountHacking::sendGold
          (Secu_AccountHacking *this,char *param_1,uint param_2,uint param_3,uint param_4,
          uchar param_5,char *param_6)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  uint uVar7;
  CHades *this_00;
  
  cVar3 = isSameAccountCharacter(this,param_1);
  if ((cVar3 == '\0') && (500 < param_3)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    if (param_1 == (char *)0x0) {
      uVar1 = *(undefined4 *)(this + 0x10);
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x10));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,uVar1,0x2ce,1,param_2,param_3);
      uVar7 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10));
      this_00 = (CHades *)CUser::getHades(*(CUser **)(this + 0x10));
      XNuclear::CHades::GoldTracking(this_00,param_5,param_2,param_6,param_3,uVar7 & 0xffff);
    }
    else {
      iVar5 = CUser::GetUID(*(CUser **)(this + 0x10));
      DB_SelectCharacMid::makeRequest(iVar5,0,param_1,0x2ce,param_3,0);
    }
    if ((*(int *)(this + 0x10) == 0) ||
       (uVar4 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x10)),
       100 < uVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      iVar5 = (int)ROUND((longdouble)_DAT_08c00fd0 * ((longdouble)param_3 / (longdouble)param_4));
      setPatten(this,3,param_1,param_2,param_3);
      if (iVar5 < 0x46) {
        if (iVar5 < 0x32) {
          if (0x1d < iVar5) {
            setPatten(this,2,param_1,param_2,param_3);
          }
        }
        else {
          setPatten(this,1,param_1,param_2,param_3);
        }
      }
      else {
        setPatten(this,0,param_1,param_2,param_3);
      }
    }
  }
  return;
}

```

---

## sendMail

```asm
// === 08278b48 Secu_AccountHacking::sendMail  [0x08278b48-0x8278ccd] ===
 8278b48:	55                   	push   %ebp
 8278b49:	89 e5                	mov    %esp,%ebp
 8278b4b:	83 ec 38             	sub    $0x38,%esp
 8278b4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8278b51:	8b 40 10             	mov    0x10(%eax),%eax
 8278b54:	89 04 24             	mov    %eax,(%esp)
 8278b57:	e8 22 17 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8278b5c:	85 c0                	test   %eax,%eax
 8278b5e:	0f 94 c0             	sete   %al
 8278b61:	84 c0                	test   %al,%al
 8278b63:	0f 85 61 01 00 00    	jne    8278cca <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x182>
 8278b69:	8b 45 10             	mov    0x10(%ebp),%eax
 8278b6c:	8b 00                	mov    (%eax),%eax
 8278b6e:	85 c0                	test   %eax,%eax
 8278b70:	0f 85 8c 00 00 00    	jne    8278c02 <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0xba>
 8278b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8278b79:	8b 40 10             	mov    0x10(%eax),%eax
 8278b7c:	89 04 24             	mov    %eax,(%esp)
 8278b7f:	e8 fa 16 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8278b84:	89 04 24             	mov    %eax,(%esp)
 8278b87:	e8 4a bc eb ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8278b8c:	89 c2                	mov    %eax,%edx
 8278b8e:	8b 45 10             	mov    0x10(%ebp),%eax
 8278b91:	8b 40 32             	mov    0x32(%eax),%eax
 8278b94:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8278b9b:	00 
 8278b9c:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 8278ba3:	00 
 8278ba4:	89 54 24 10          	mov    %edx,0x10(%esp)
 8278ba8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278bac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8278bb3:	00 
 8278bb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278bbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8278bbe:	89 04 24             	mov    %eax,(%esp)
 8278bc1:	e8 08 01 00 00       	call   8278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>
 8278bc6:	8b 45 10             	mov    0x10(%ebp),%eax
 8278bc9:	8b 40 3d             	mov    0x3d(%eax),%eax
 8278bcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278bd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8278bd3:	89 04 24             	mov    %eax,(%esp)
 8278bd6:	e8 11 ff ff ff       	call   8278aec <_ZN19Secu_AccountHacking8isAvatarEj>
 8278bdb:	84 c0                	test   %al,%al
 8278bdd:	0f 84 e8 00 00 00    	je     8278ccb <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x183>
 8278be3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8278bea:	00 
 8278beb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278bee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8278bf5:	89 04 24             	mov    %eax,(%esp)
 8278bf8:	e8 19 03 00 00       	call   8278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>
 8278bfd:	e9 c9 00 00 00       	jmp    8278ccb <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x183>
 8278c02:	8b 45 10             	mov    0x10(%ebp),%eax
 8278c05:	8b 00                	mov    (%eax),%eax
 8278c07:	83 f8 02             	cmp    $0x2,%eax
 8278c0a:	0f 85 bb 00 00 00    	jne    8278ccb <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x183>
 8278c10:	8b 45 08             	mov    0x8(%ebp),%eax
 8278c13:	8b 40 10             	mov    0x10(%eax),%eax
 8278c16:	89 04 24             	mov    %eax,(%esp)
 8278c19:	e8 60 16 e6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8278c1e:	89 04 24             	mov    %eax,(%esp)
 8278c21:	e8 b0 bb eb ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8278c26:	89 c2                	mov    %eax,%edx
 8278c28:	8b 45 10             	mov    0x10(%ebp),%eax
 8278c2b:	8b 40 33             	mov    0x33(%eax),%eax
 8278c2e:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8278c35:	00 
 8278c36:	c7 44 24 14 02 00 00 	movl   $0x2,0x14(%esp)
 8278c3d:	00 
 8278c3e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8278c42:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8278c46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8278c4d:	00 
 8278c4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278c51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278c55:	8b 45 08             	mov    0x8(%ebp),%eax
 8278c58:	89 04 24             	mov    %eax,(%esp)
 8278c5b:	e8 6e 00 00 00       	call   8278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>
 8278c60:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8278c67:	eb 4b                	jmp    8278cb4 <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x16c>
 8278c69:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8278c6c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8278c6f:	89 d0                	mov    %edx,%eax
 8278c71:	c1 e0 02             	shl    $0x2,%eax
 8278c74:	01 d0                	add    %edx,%eax
 8278c76:	01 c0                	add    %eax,%eax
 8278c78:	01 d0                	add    %edx,%eax
 8278c7a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8278c7d:	83 c0 30             	add    $0x30,%eax
 8278c80:	8b 40 0b             	mov    0xb(%eax),%eax
 8278c83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278c87:	8b 45 08             	mov    0x8(%ebp),%eax
 8278c8a:	89 04 24             	mov    %eax,(%esp)
 8278c8d:	e8 5a fe ff ff       	call   8278aec <_ZN19Secu_AccountHacking8isAvatarEj>
 8278c92:	84 c0                	test   %al,%al
 8278c94:	74 1a                	je     8278cb0 <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x168>
 8278c96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8278c9d:	00 
 8278c9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8278ca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8278ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 8278ca8:	89 04 24             	mov    %eax,(%esp)
 8278cab:	e8 66 02 00 00       	call   8278f16 <_ZN19Secu_AccountHacking10sendAvatarEPKcj>
 8278cb0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8278cb4:	8b 45 10             	mov    0x10(%ebp),%eax
 8278cb7:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 8278cbb:	0f b6 c0             	movzbl %al,%eax
 8278cbe:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8278cc1:	0f 9f c0             	setg   %al
 8278cc4:	84 c0                	test   %al,%al
 8278cc6:	75 a1                	jne    8278c69 <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x121>
 8278cc8:	eb 01                	jmp    8278ccb <_ZN19Secu_AccountHacking8sendMailEPKcP23MSG_CHECK_MAIL_RECEIVER+0x183>
 8278cca:	90                   	nop
 8278ccb:	c9                   	leave
 8278ccc:	c3                   	ret
 8278ccd:	90                   	nop

```

```c
// Secu_AccountHacking::sendMail @ 0x8278b48

/* Secu_AccountHacking::sendMail(char const*, MSG_CHECK_MAIL_RECEIVER*) */

void __thiscall
Secu_AccountHacking::sendMail
          (Secu_AccountHacking *this,char *param_1,MSG_CHECK_MAIL_RECEIVER *param_2)

{
  char cVar1;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10));
  if (iVar2 != 0) {
    if (*(int *)param_2 == 0) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10))
      ;
      uVar4 = CInventory::get_money(pCVar3);
      sendGold(this,param_1,0,*(uint *)(param_2 + 0x32),uVar4,'\x02',(char *)0x0);
      cVar1 = isAvatar(this,*(uint *)(param_2 + 0x3d));
      if (cVar1 != '\0') {
        sendAvatar(this,param_1,0);
      }
    }
    else if (*(int *)param_2 == 2) {
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x10))
      ;
      uVar4 = CInventory::get_money(pCVar3);
      sendGold(this,param_1,0,*(uint *)(param_2 + 0x33),uVar4,'\x02',(char *)0x0);
      for (local_10 = 0; local_10 < (int)(uint)(byte)param_2[0x37]; local_10 = local_10 + 1) {
        cVar1 = isAvatar(this,*(uint *)(param_2 + local_10 * 0xb + 0x3b));
        if (cVar1 != '\0') {
          sendAvatar(this,param_1,0);
        }
      }
    }
  }
  return;
}

```

---

## setLoginTime

```asm
// === 08279020 Secu_AccountHacking::setLoginTime  [0x08279020-0x827903b] ===
 8279020:	55                   	push   %ebp
 8279021:	89 e5                	mov    %esp,%ebp
 8279023:	83 ec 18             	sub    $0x18,%esp
 8279026:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 827902d:	e8 6c 2c e5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8279032:	89 c2                	mov    %eax,%edx
 8279034:	8b 45 08             	mov    0x8(%ebp),%eax
 8279037:	89 50 0c             	mov    %edx,0xc(%eax)
 827903a:	c9                   	leave
 827903b:	c3                   	ret

```

```c
// Secu_AccountHacking::setLoginTime @ 0x8279020

/* Secu_AccountHacking::setLoginTime() */

void __thiscall Secu_AccountHacking::setLoginTime(Secu_AccountHacking *this)

{
  undefined4 uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0xc) = uVar1;
  return;
}

```

---

## setPatten

```asm
// === 0827903c Secu_AccountHacking::setPatten  [0x0827903c-0x8279129] ===
 827903c:	55                   	push   %ebp
 827903d:	89 e5                	mov    %esp,%ebp
 827903f:	56                   	push   %esi
 8279040:	53                   	push   %ebx
 8279041:	83 ec 30             	sub    $0x30,%esp
 8279044:	8b 45 0c             	mov    0xc(%ebp),%eax
 8279047:	8b 55 08             	mov    0x8(%ebp),%edx
 827904a:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 827904e:	84 c0                	test   %al,%al
 8279050:	0f 85 c8 00 00 00    	jne    827911e <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0xe2>
 8279056:	8b 45 08             	mov    0x8(%ebp),%eax
 8279059:	8b 40 10             	mov    0x10(%eax),%eax
 827905c:	85 c0                	test   %eax,%eax
 827905e:	0f 84 bd 00 00 00    	je     8279121 <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0xe5>
 8279064:	8b 45 0c             	mov    0xc(%ebp),%eax
 8279067:	8b 55 08             	mov    0x8(%ebp),%edx
 827906a:	c6 04 02 01          	movb   $0x1,(%edx,%eax,1)
 827906e:	8b 45 14             	mov    0x14(%ebp),%eax
 8279071:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8279074:	8b 45 18             	mov    0x18(%ebp),%eax
 8279077:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827907a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 827907e:	75 4e                	jne    82790ce <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0x92>
 8279080:	8b 45 0c             	mov    0xc(%ebp),%eax
 8279083:	89 44 24 04          	mov    %eax,0x4(%esp)
 8279087:	8b 45 08             	mov    0x8(%ebp),%eax
 827908a:	89 04 24             	mov    %eax,(%esp)
 827908d:	e8 98 00 00 00       	call   827912a <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE>
 8279092:	89 c3                	mov    %eax,%ebx
 8279094:	8b 45 08             	mov    0x8(%ebp),%eax
 8279097:	8b 40 10             	mov    0x10(%eax),%eax
 827909a:	89 04 24             	mov    %eax,(%esp)
 827909d:	e8 f4 fb e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82790a2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82790a9:	00 
 82790aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82790ad:	89 54 24 10          	mov    %edx,0x10(%esp)
 82790b1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82790b5:	8b 55 10             	mov    0x10(%ebp),%edx
 82790b8:	89 54 24 08          	mov    %edx,0x8(%esp)
 82790bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82790c3:	00 
 82790c4:	89 04 24             	mov    %eax,(%esp)
 82790c7:	e8 a0 d6 1c 00       	call   844676c <_ZN18DB_SelectCharacMid11makeRequestEijPKcjjj>
 82790cc:	eb 54                	jmp    8279122 <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0xe6>
 82790ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 82790d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82790d5:	8b 45 08             	mov    0x8(%ebp),%eax
 82790d8:	89 04 24             	mov    %eax,(%esp)
 82790db:	e8 4a 00 00 00       	call   827912a <_ZN19Secu_AccountHacking19getMatchingHacktypeEN18AccountHackingType1TE>
 82790e0:	89 c3                	mov    %eax,%ebx
 82790e2:	8b 45 08             	mov    0x8(%ebp),%eax
 82790e5:	8b 70 10             	mov    0x10(%eax),%esi
 82790e8:	8b 45 08             	mov    0x8(%ebp),%eax
 82790eb:	8b 40 10             	mov    0x10(%eax),%eax
 82790ee:	89 04 24             	mov    %eax,(%esp)
 82790f1:	e8 64 08 e8 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82790f6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82790f9:	89 54 24 14          	mov    %edx,0x14(%esp)
 82790fd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8279100:	89 54 24 10          	mov    %edx,0x10(%esp)
 8279104:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827910b:	00 
 827910c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8279110:	89 74 24 04          	mov    %esi,0x4(%esp)
 8279114:	89 04 24             	mov    %eax,(%esp)
 8279117:	e8 62 fb e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827911c:	eb 04                	jmp    8279122 <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0xe6>
 827911e:	90                   	nop
 827911f:	eb 01                	jmp    8279122 <_ZN19Secu_AccountHacking9setPattenEN18AccountHackingType1TEPKcjj+0xe6>
 8279121:	90                   	nop
 8279122:	83 c4 30             	add    $0x30,%esp
 8279125:	5b                   	pop    %ebx
 8279126:	5e                   	pop    %esi
 8279127:	5d                   	pop    %ebp
 8279128:	c3                   	ret
 8279129:	90                   	nop

```

```c
// Secu_AccountHacking::setPatten @ 0x827903c

/* Secu_AccountHacking::setPatten(AccountHackingType::T, char const*, unsigned int, unsigned int) */

void __thiscall
Secu_AccountHacking::setPatten
          (Secu_AccountHacking *this,int param_2,char *param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  
  if ((this[param_2] == (Secu_AccountHacking)0x0) && (*(int *)(this + 0x10) != 0)) {
    this[param_2] = (Secu_AccountHacking)0x1;
    if (param_4 == 0) {
      uVar2 = getMatchingHacktype(this,param_2);
      iVar3 = CUser::GetUID(*(CUser **)(this + 0x10));
      DB_SelectCharacMid::makeRequest(iVar3,0,param_3,uVar2,param_5,0);
    }
    else {
      uVar4 = getMatchingHacktype(this,param_2);
      uVar1 = *(undefined4 *)(this + 0x10);
      pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x10));
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar1,uVar4,1,param_4,param_5);
    }
  }
  return;
}

```


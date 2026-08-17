# ARAD__SCRIPT__AvatarFixedHiddenOption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AvatarFixedHiddenOption

```asm
// === 088aecac ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption  [0x088aecac-0x88aed5d] ===
 88aecac:	55                   	push   %ebp
 88aecad:	89 e5                	mov    %esp,%ebp
 88aecaf:	57                   	push   %edi
 88aecb0:	56                   	push   %esi
 88aecb1:	53                   	push   %ebx
 88aecb2:	83 ec 2c             	sub    $0x2c,%esp
 88aecb5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88aecb8:	89 df                	mov    %ebx,%edi
 88aecba:	be 05 00 00 00       	mov    $0x5,%esi
 88aecbf:	eb 0e                	jmp    88aeccf <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x23>
 88aecc1:	89 3c 24             	mov    %edi,(%esp)
 88aecc4:	e8 81 15 00 00       	call   88b024a <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EEC1Ev>
 88aecc9:	83 c7 0c             	add    $0xc,%edi
 88aeccc:	83 ee 01             	sub    $0x1,%esi
 88aeccf:	83 fe ff             	cmp    $0xffffffff,%esi
 88aecd2:	0f 95 c0             	setne  %al
 88aecd5:	84 c0                	test   %al,%al
 88aecd7:	75 e8                	jne    88aecc1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x15>
 88aecd9:	eb 3c                	jmp    88aed17 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x6b>
 88aecdb:	89 d7                	mov    %edx,%edi
 88aecdd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88aece0:	85 db                	test   %ebx,%ebx
 88aece2:	74 26                	je     88aed0a <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x5e>
 88aece4:	b8 05 00 00 00       	mov    $0x5,%eax
 88aece9:	29 f0                	sub    %esi,%eax
 88aeceb:	89 c2                	mov    %eax,%edx
 88aeced:	89 d0                	mov    %edx,%eax
 88aecef:	01 c0                	add    %eax,%eax
 88aecf1:	01 d0                	add    %edx,%eax
 88aecf3:	c1 e0 02             	shl    $0x2,%eax
 88aecf6:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 88aecf9:	39 de                	cmp    %ebx,%esi
 88aecfb:	74 0d                	je     88aed0a <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x5e>
 88aecfd:	83 ee 0c             	sub    $0xc,%esi
 88aed00:	89 34 24             	mov    %esi,(%esp)
 88aed03:	e8 56 15 00 00       	call   88b025e <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EED1Ev>
 88aed08:	eb ef                	jmp    88aecf9 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x4d>
 88aed0a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88aed0d:	89 fa                	mov    %edi,%edx
 88aed0f:	89 04 24             	mov    %eax,(%esp)
 88aed12:	e8 39 4a 23 00       	call   8ae3750 <_Unwind_Resume>
 88aed17:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed1a:	89 04 24             	mov    %eax,(%esp)
 88aed1d:	e8 be 13 00 00       	call   88b00e0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv>
 88aed22:	eb 31                	jmp    88aed55 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0xa9>
 88aed24:	89 d6                	mov    %edx,%esi
 88aed26:	89 c7                	mov    %eax,%edi
 88aed28:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed2b:	85 c0                	test   %eax,%eax
 88aed2d:	74 1a                	je     88aed49 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x9d>
 88aed2f:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed32:	8d 58 48             	lea    0x48(%eax),%ebx
 88aed35:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed38:	39 c3                	cmp    %eax,%ebx
 88aed3a:	74 0d                	je     88aed49 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x9d>
 88aed3c:	83 eb 0c             	sub    $0xc,%ebx
 88aed3f:	89 1c 24             	mov    %ebx,(%esp)
 88aed42:	e8 17 15 00 00       	call   88b025e <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EED1Ev>
 88aed47:	eb ec                	jmp    88aed35 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev+0x89>
 88aed49:	89 f8                	mov    %edi,%eax
 88aed4b:	89 f2                	mov    %esi,%edx
 88aed4d:	89 04 24             	mov    %eax,(%esp)
 88aed50:	e8 fb 49 23 00       	call   8ae3750 <_Unwind_Resume>
 88aed55:	83 c4 2c             	add    $0x2c,%esp
 88aed58:	5b                   	pop    %ebx
 88aed59:	5e                   	pop    %esi
 88aed5a:	5f                   	pop    %edi
 88aed5b:	5d                   	pop    %ebp
 88aed5c:	c3                   	ret
 88aed5d:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption @ 0x88aecac

/* ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption() */

void __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption(AvatarFixedHiddenOption *this)

{
  int iVar1;
  AvatarFixedHiddenOption *this_00;
  
  this_00 = this;
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088aecc4 to 088aecc8 has its CatchHandler @ 088aecdb */
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    vector((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
           this_00);
    this_00 = this_00 + 0xc;
  }
                    /* try { // try from 088aed1d to 088aed21 has its CatchHandler @ 088aed24 */
  clearScript(this);
  return;
}

```

---

## clearScript

```asm
// === 088b00e0 ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript  [0x088b00e0-0x88b0163] ===
 88b00e0:	55                   	push   %ebp
 88b00e1:	89 e5                	mov    %esp,%ebp
 88b00e3:	83 ec 38             	sub    $0x38,%esp
 88b00e6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 88b00ed:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 88b00f4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88b00fb:	eb 5a                	jmp    88b0157 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv+0x77>
 88b00fd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88b0100:	89 d0                	mov    %edx,%eax
 88b0102:	01 c0                	add    %eax,%eax
 88b0104:	01 d0                	add    %edx,%eax
 88b0106:	c1 e0 02             	shl    $0x2,%eax
 88b0109:	03 45 08             	add    0x8(%ebp),%eax
 88b010c:	89 04 24             	mov    %eax,(%esp)
 88b010f:	e8 f8 01 00 00       	call   88b030c <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE5clearEv>
 88b0114:	8b 45 ec             	mov    -0x14(%ebp),%eax
 88b0117:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88b011b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 88b011e:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b0122:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 88b0129:	00 
 88b012a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b012d:	89 04 24             	mov    %eax,(%esp)
 88b0130:	e8 b3 00 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88b0135:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88b0138:	89 d0                	mov    %edx,%eax
 88b013a:	01 c0                	add    %eax,%eax
 88b013c:	01 d0                	add    %edx,%eax
 88b013e:	c1 e0 02             	shl    $0x2,%eax
 88b0141:	03 45 08             	add    0x8(%ebp),%eax
 88b0144:	8d 55 d8             	lea    -0x28(%ebp),%edx
 88b0147:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b014b:	89 04 24             	mov    %eax,(%esp)
 88b014e:	e8 69 01 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88b0153:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88b0157:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 88b015b:	0f 9e c0             	setle  %al
 88b015e:	84 c0                	test   %al,%al
 88b0160:	75 9b                	jne    88b00fd <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv+0x1d>
 88b0162:	c9                   	leave
 88b0163:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript @ 0x88b00e0

/* ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarFixedHiddenOption::clearScript(AvatarFixedHiddenOption *this)

{
  STAvatarHiddenAbilityVariation local_2c [20];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_18 = 0;
  local_14 = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    clear((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
          (this + local_10 * 0xc));
    STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2c,0,local_14,local_18);
    std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
    push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               *)(this + local_10 * 0xc),local_2c);
  }
  return;
}

```

---

## getMaterialItemIndex

```asm
// === 088b0164 ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex  [0x088b0164-0x88b016f] ===
 88b0164:	55                   	push   %ebp
 88b0165:	89 e5                	mov    %esp,%ebp
 88b0167:	8b 45 08             	mov    0x8(%ebp),%eax
 88b016a:	8b 40 48             	mov    0x48(%eax),%eax
 88b016d:	5d                   	pop    %ebp
 88b016e:	c3                   	ret
 88b016f:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex @ 0x88b0164

/* ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex() */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::getMaterialItemIndex(AvatarFixedHiddenOption *this)

{
  return *(undefined4 *)(this + 0x48);
}

```

---

## isMaterialItemIndex

```asm
// === 088b0170 ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex  [0x088b0170-0x88b018b] ===
 88b0170:	55                   	push   %ebp
 88b0171:	89 e5                	mov    %esp,%ebp
 88b0173:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0176:	8b 40 48             	mov    0x48(%eax),%eax
 88b0179:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88b017c:	75 07                	jne    88b0185 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi+0x15>
 88b017e:	b8 01 00 00 00       	mov    $0x1,%eax
 88b0183:	eb 05                	jmp    88b018a <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi+0x1a>
 88b0185:	b8 00 00 00 00       	mov    $0x0,%eax
 88b018a:	5d                   	pop    %ebp
 88b018b:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex @ 0x88b0170

/* ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex(int) */

bool __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex
          (AvatarFixedHiddenOption *this,int param_1)

{
  return *(int *)(this + 0x48) == param_1;
}

```

---

## loadScript

```asm
// === 088aedce ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript  [0x088aedce-0x88aef51] ===
 88aedce:	55                   	push   %ebp
 88aedcf:	89 e5                	mov    %esp,%ebp
 88aedd1:	56                   	push   %esi
 88aedd2:	53                   	push   %ebx
 88aedd3:	83 ec 20             	sub    $0x20,%esp
 88aedd6:	c7 44 24 04 e0 66 e0 	movl   $0x8e066e0,0x4(%esp)
 88aeddd:	08 
 88aedde:	c7 04 24 00 67 e0 08 	movl   $0x8e06700,(%esp)
 88aede5:	e8 3f cf 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88aedea:	83 f0 01             	xor    $0x1,%eax
 88aeded:	84 c0                	test   %al,%al
 88aedef:	74 0a                	je     88aedfb <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x2d>
 88aedf1:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 88aedf6:	e9 4e 01 00 00       	jmp    88aef49 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x17b>
 88aedfb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aedfe:	89 04 24             	mov    %eax,(%esp)
 88aee01:	e8 ca 77 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88aee06:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 88aee0a:	eb 01                	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aee0c:	90                   	nop
 88aee0d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88aee14:	00 
 88aee15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aee18:	89 04 24             	mov    %eax,(%esp)
 88aee1b:	e8 3f da 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88aee20:	83 f0 01             	xor    $0x1,%eax
 88aee23:	84 c0                	test   %al,%al
 88aee25:	0f 85 f0 00 00 00    	jne    88aef1b <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x14d>
 88aee2b:	c7 44 24 04 15 67 e0 	movl   $0x8e06715,0x4(%esp)
 88aee32:	08 
 88aee33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aee36:	89 04 24             	mov    %eax,(%esp)
 88aee39:	e8 63 1b 7d ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88aee3e:	84 c0                	test   %al,%al
 88aee40:	74 45                	je     88aee87 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0xb9>
 88aee42:	eb 01                	jmp    88aee45 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x77>
 88aee44:	90                   	nop
 88aee45:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88aee4c:	00 
 88aee4d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aee50:	89 04 24             	mov    %eax,(%esp)
 88aee53:	e8 07 da 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88aee58:	83 f0 01             	xor    $0x1,%eax
 88aee5b:	84 c0                	test   %al,%al
 88aee5d:	74 03                	je     88aee62 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x94>
 88aee5f:	90                   	nop
 88aee60:	eb ab                	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aee62:	8b 45 08             	mov    0x8(%ebp),%eax
 88aee65:	8d 50 18             	lea    0x18(%eax),%edx
 88aee68:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aee6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 88aee6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 88aee73:	8b 45 08             	mov    0x8(%ebp),%eax
 88aee76:	89 04 24             	mov    %eax,(%esp)
 88aee79:	e8 d4 00 00 00       	call   88aef52 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs>
 88aee7e:	83 f0 01             	xor    $0x1,%eax
 88aee81:	84 c0                	test   %al,%al
 88aee83:	74 bf                	je     88aee44 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x76>
 88aee85:	eb 86                	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aee87:	c7 44 24 04 1d 67 e0 	movl   $0x8e0671d,0x4(%esp)
 88aee8e:	08 
 88aee8f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aee92:	89 04 24             	mov    %eax,(%esp)
 88aee95:	e8 07 1b 7d ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88aee9a:	84 c0                	test   %al,%al
 88aee9c:	74 4b                	je     88aeee9 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x11b>
 88aee9e:	eb 01                	jmp    88aeea1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0xd3>
 88aeea0:	90                   	nop
 88aeea1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88aeea8:	00 
 88aeea9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aeeac:	89 04 24             	mov    %eax,(%esp)
 88aeeaf:	e8 ab d9 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88aeeb4:	83 f0 01             	xor    $0x1,%eax
 88aeeb7:	84 c0                	test   %al,%al
 88aeeb9:	74 06                	je     88aeec1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0xf3>
 88aeebb:	90                   	nop
 88aeebc:	e9 4c ff ff ff       	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aeec1:	8b 45 08             	mov    0x8(%ebp),%eax
 88aeec4:	8d 50 24             	lea    0x24(%eax),%edx
 88aeec7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aeeca:	89 44 24 08          	mov    %eax,0x8(%esp)
 88aeece:	89 54 24 04          	mov    %edx,0x4(%esp)
 88aeed2:	8b 45 08             	mov    0x8(%ebp),%eax
 88aeed5:	89 04 24             	mov    %eax,(%esp)
 88aeed8:	e8 75 00 00 00       	call   88aef52 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs>
 88aeedd:	83 f0 01             	xor    $0x1,%eax
 88aeee0:	84 c0                	test   %al,%al
 88aeee2:	74 bc                	je     88aeea0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0xd2>
 88aeee4:	e9 24 ff ff ff       	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aeee9:	c7 44 24 04 24 67 e0 	movl   $0x8e06724,0x4(%esp)
 88aeef0:	08 
 88aeef1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aeef4:	89 04 24             	mov    %eax,(%esp)
 88aeef7:	e8 a5 1a 7d ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88aeefc:	84 c0                	test   %al,%al
 88aeefe:	0f 84 08 ff ff ff    	je     88aee0c <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3e>
 88aef04:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88aef0b:	e8 6b d4 00 00       	call   88bc37b <_Z7ScanIntPb>
 88aef10:	8b 55 08             	mov    0x8(%ebp),%edx
 88aef13:	89 42 48             	mov    %eax,0x48(%edx)
 88aef16:	e9 f2 fe ff ff       	jmp    88aee0d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x3f>
 88aef1b:	90                   	nop
 88aef1c:	bb 00 00 00 00       	mov    $0x0,%ebx
 88aef21:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aef24:	89 04 24             	mov    %eax,(%esp)
 88aef27:	e8 b4 8c e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88aef2c:	eb 1b                	jmp    88aef49 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv+0x17b>
 88aef2e:	89 d3                	mov    %edx,%ebx
 88aef30:	89 c6                	mov    %eax,%esi
 88aef32:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88aef35:	89 04 24             	mov    %eax,(%esp)
 88aef38:	e8 a3 8c e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88aef3d:	89 f0                	mov    %esi,%eax
 88aef3f:	89 da                	mov    %ebx,%edx
 88aef41:	89 04 24             	mov    %eax,(%esp)
 88aef44:	e8 07 48 23 00       	call   8ae3750 <_Unwind_Resume>
 88aef49:	89 d8                	mov    %ebx,%eax
 88aef4b:	83 c4 20             	add    $0x20,%esp
 88aef4e:	5b                   	pop    %ebx
 88aef4f:	5e                   	pop    %esi
 88aef50:	5d                   	pop    %ebp
 88aef51:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript @ 0x88aedce

/* ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript() */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript(AvatarFixedHiddenOption *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_14;
  undefined1 local_d;
  
  cVar1 = loadRDARScriptFile("Etc/Avatar_Roulette/","AvatarFixedHiddenOptionList.etc");
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_14);
    local_d = 0;
LAB_088aee0d:
                    /* try { // try from 088aee1b to 088aef0f has its CatchHandler @ 088aef2e */
    cVar1 = ScanType((string *)&local_14,true);
    if (cVar1 == '\x01') {
      bVar2 = std::operator==(&local_14,"[upper]");
      if (bVar2) {
        do {
          cVar1 = ScanType((string *)&local_14,true);
          if (cVar1 != '\x01') break;
          cVar1 = parseAbility(this,(vector *)(this + 0x18),(string *)&local_14);
        } while (cVar1 == '\x01');
      }
      else {
        bVar2 = std::operator==(&local_14,"[rare]");
        if (bVar2) {
          do {
            cVar1 = ScanType((string *)&local_14,true);
            if (cVar1 != '\x01') break;
            cVar1 = parseAbility(this,(vector *)(this + 0x24),(string *)&local_14);
          } while (cVar1 == '\x01');
        }
        else {
          bVar2 = std::operator==(&local_14,"[mystic circle]");
          if (bVar2) {
            uVar3 = ScanInt((bool *)0x0);
            *(undefined4 *)(this + 0x48) = uVar3;
          }
        }
      }
      goto LAB_088aee0d;
    }
    uVar3 = 0;
    std::string::~string((string *)&local_14);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## parseAbility

```asm
// === 088aef52 ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility  [0x088aef52-0x88b00df] ===
 88aef52:	55                   	push   %ebp
 88aef53:	89 e5                	mov    %esp,%ebp
 88aef55:	57                   	push   %edi
 88aef56:	56                   	push   %esi
 88aef57:	53                   	push   %ebx
 88aef58:	81 ec 8c 03 00 00    	sub    $0x38c,%esp
 88aef5e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 88aef65:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 88aef6c:	b8 00 00 00 00       	mov    $0x0,%eax
 88aef71:	89 45 e0             	mov    %eax,-0x20(%ebp)
 88aef74:	b8 78 4e 49 09       	mov    $0x9494e78,%eax
 88aef79:	0f b6 00             	movzbl (%eax),%eax
 88aef7c:	84 c0                	test   %al,%al
 88aef7e:	75 71                	jne    88aeff1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x9f>
 88aef80:	c7 04 24 78 4e 49 09 	movl   $0x9494e78,(%esp)
 88aef87:	e8 a4 63 e7 ff       	call   8725330 <__cxa_guard_acquire>
 88aef8c:	85 c0                	test   %eax,%eax
 88aef8e:	0f 95 c0             	setne  %al
 88aef91:	84 c0                	test   %al,%al
 88aef93:	74 5c                	je     88aeff1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x9f>
 88aef95:	bb 00 00 00 00       	mov    $0x0,%ebx
 88aef9a:	c7 04 24 88 4e 49 09 	movl   $0x9494e88,(%esp)
 88aefa1:	e8 2e 25 84 ff       	call   80f14d4 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEEC1Ev>
 88aefa6:	c7 04 24 78 4e 49 09 	movl   $0x9494e78,(%esp)
 88aefad:	e8 9e 62 e7 ff       	call   8725250 <__cxa_guard_release>
 88aefb2:	b8 7a 13 0f 08       	mov    $0x80f137a,%eax
 88aefb7:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 88aefbe:	08 
 88aefbf:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88aefc6:	09 
 88aefc7:	89 04 24             	mov    %eax,(%esp)
 88aefca:	e8 01 ee 7c ff       	call   807ddd0 <__cxa_atexit@plt>
 88aefcf:	eb 20                	jmp    88aeff1 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x9f>
 88aefd1:	89 d6                	mov    %edx,%esi
 88aefd3:	89 c7                	mov    %eax,%edi
 88aefd5:	84 db                	test   %bl,%bl
 88aefd7:	75 0c                	jne    88aefe5 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x93>
 88aefd9:	c7 04 24 78 4e 49 09 	movl   $0x9494e78,(%esp)
 88aefe0:	e8 db 62 e7 ff       	call   87252c0 <__cxa_guard_abort>
 88aefe5:	89 f8                	mov    %edi,%eax
 88aefe7:	89 f2                	mov    %esi,%edx
 88aefe9:	89 04 24             	mov    %eax,(%esp)
 88aefec:	e8 5f 47 23 00       	call   8ae3750 <_Unwind_Resume>
 88aeff1:	b8 80 4e 49 09       	mov    $0x9494e80,%eax
 88aeff6:	0f b6 00             	movzbl (%eax),%eax
 88aeff9:	84 c0                	test   %al,%al
 88aeffb:	75 71                	jne    88af06e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x11c>
 88aeffd:	c7 04 24 80 4e 49 09 	movl   $0x9494e80,(%esp)
 88af004:	e8 27 63 e7 ff       	call   8725330 <__cxa_guard_acquire>
 88af009:	85 c0                	test   %eax,%eax
 88af00b:	0f 95 c0             	setne  %al
 88af00e:	84 c0                	test   %al,%al
 88af010:	74 5c                	je     88af06e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x11c>
 88af012:	bb 00 00 00 00       	mov    $0x0,%ebx
 88af017:	c7 04 24 a0 4e 49 09 	movl   $0x9494ea0,(%esp)
 88af01e:	e8 ff 44 22 00       	call   8ad3522 <_ZN8SpinLockC1Ev>
 88af023:	c7 04 24 80 4e 49 09 	movl   $0x9494e80,(%esp)
 88af02a:	e8 21 62 e7 ff       	call   8725250 <__cxa_guard_release>
 88af02f:	b8 3e 35 ad 08       	mov    $0x8ad353e,%eax
 88af034:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 88af03b:	08 
 88af03c:	c7 44 24 04 a0 4e 49 	movl   $0x9494ea0,0x4(%esp)
 88af043:	09 
 88af044:	89 04 24             	mov    %eax,(%esp)
 88af047:	e8 84 ed 7c ff       	call   807ddd0 <__cxa_atexit@plt>
 88af04c:	eb 20                	jmp    88af06e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x11c>
 88af04e:	89 d6                	mov    %edx,%esi
 88af050:	89 c7                	mov    %eax,%edi
 88af052:	84 db                	test   %bl,%bl
 88af054:	75 0c                	jne    88af062 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x110>
 88af056:	c7 04 24 80 4e 49 09 	movl   $0x9494e80,(%esp)
 88af05d:	e8 5e 62 e7 ff       	call   87252c0 <__cxa_guard_abort>
 88af062:	89 f8                	mov    %edi,%eax
 88af064:	89 f2                	mov    %esi,%edx
 88af066:	89 04 24             	mov    %eax,(%esp)
 88af069:	e8 e2 46 23 00       	call   8ae3750 <_Unwind_Resume>
 88af06e:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af075:	84 c0                	test   %al,%al
 88af077:	0f 84 b6 00 00 00    	je     88af133 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1e1>
 88af07d:	8b 45 10             	mov    0x10(%ebp),%eax
 88af080:	89 04 24             	mov    %eax,(%esp)
 88af083:	e8 68 74 e5 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88af088:	89 85 84 fc ff ff    	mov    %eax,-0x37c(%ebp)
 88af08e:	8d 85 80 fc ff ff    	lea    -0x380(%ebp),%eax
 88af094:	8d 95 84 fc ff ff    	lea    -0x37c(%ebp),%edx
 88af09a:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af09e:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af0a5:	09 
 88af0a6:	89 04 24             	mov    %eax,(%esp)
 88af0a9:	e8 a0 24 84 ff       	call   80f154e <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE4findERS4_>
 88af0ae:	83 ec 04             	sub    $0x4,%esp
 88af0b1:	8d 85 80 fc ff ff    	lea    -0x380(%ebp),%eax
 88af0b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af0bb:	8d 85 7c fc ff ff    	lea    -0x384(%ebp),%eax
 88af0c1:	89 04 24             	mov    %eax,(%esp)
 88af0c4:	e8 b1 24 84 ff       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 88af0c9:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 88af0cf:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af0d6:	09 
 88af0d7:	89 04 24             	mov    %eax,(%esp)
 88af0da:	e8 ab 24 84 ff       	call   80f158a <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE3endEv>
 88af0df:	83 ec 04             	sub    $0x4,%esp
 88af0e2:	8d 85 8c fc ff ff    	lea    -0x374(%ebp),%eax
 88af0e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af0ec:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 88af0f2:	89 04 24             	mov    %eax,(%esp)
 88af0f5:	e8 80 24 84 ff       	call   80f157a <_ZNSt23_Rb_tree_const_iteratorISt4pairIKPKciEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 88af0fa:	8d 85 88 fc ff ff    	lea    -0x378(%ebp),%eax
 88af100:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af104:	8d 85 7c fc ff ff    	lea    -0x384(%ebp),%eax
 88af10a:	89 04 24             	mov    %eax,(%esp)
 88af10d:	e8 9e 24 84 ff       	call   80f15b0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEneERKS5_>
 88af112:	84 c0                	test   %al,%al
 88af114:	74 13                	je     88af129 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1d7>
 88af116:	8d 85 7c fc ff ff    	lea    -0x384(%ebp),%eax
 88af11c:	89 04 24             	mov    %eax,(%esp)
 88af11f:	e8 a0 24 84 ff       	call   80f15c4 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKPKciEEptEv>
 88af124:	8b 40 04             	mov    0x4(%eax),%eax
 88af127:	eb 05                	jmp    88af12e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1dc>
 88af129:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88af12e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88af131:	eb 30                	jmp    88af163 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x211>
 88af133:	c7 04 24 a0 4e 49 09 	movl   $0x9494ea0,(%esp)
 88af13a:	e8 13 44 22 00       	call   8ad3552 <_ZN8SpinLock5enterEv>
 88af13f:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af146:	84 c0                	test   %al,%al
 88af148:	74 12                	je     88af15c <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x20a>
 88af14a:	c7 04 24 a0 4e 49 09 	movl   $0x9494ea0,(%esp)
 88af151:	e8 30 44 22 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 88af156:	90                   	nop
 88af157:	e9 18 fe ff ff       	jmp    88aef74 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x22>
 88af15c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 88af163:	81 7d e4 ac 00 00 00 	cmpl   $0xac,-0x1c(%ebp)
 88af16a:	0f 87 26 0f 00 00    	ja     88b0096 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1144>
 88af170:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88af173:	c1 e0 02             	shl    $0x2,%eax
 88af176:	8b 80 a8 68 e0 08    	mov    0x8e068a8(%eax),%eax
 88af17c:	ff e0                	jmp    *%eax
 88af17e:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af185:	83 f0 01             	xor    $0x1,%eax
 88af188:	84 c0                	test   %al,%al
 88af18a:	74 4f                	je     88af1db <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x289>
 88af18c:	c7 85 a0 fc ff ff 46 	movl   $0x46,-0x360(%ebp)
 88af193:	00 00 00 
 88af196:	8d 85 a0 fc ff ff    	lea    -0x360(%ebp),%eax
 88af19c:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af1a0:	c7 44 24 04 34 67 e0 	movl   $0x8e06734,0x4(%esp)
 88af1a7:	08 
 88af1a8:	8d 85 98 fc ff ff    	lea    -0x368(%ebp),%eax
 88af1ae:	89 04 24             	mov    %eax,(%esp)
 88af1b1:	e8 e4 ed 9f ff       	call   82adf9a <_ZNSt4pairIKPKciEC1IRA18_S0_iEEOT_OT0_>
 88af1b6:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 88af1bc:	8d 95 98 fc ff ff    	lea    -0x368(%ebp),%edx
 88af1c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af1c6:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af1cd:	09 
 88af1ce:	89 04 24             	mov    %eax,(%esp)
 88af1d1:	e8 2a 24 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af1d6:	83 ec 04             	sub    $0x4,%esp
 88af1d9:	eb 5c                	jmp    88af237 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x2e5>
 88af1db:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af1e2:	e8 94 d1 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af1e7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af1ea:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af1f1:	e8 85 d1 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af1f6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af1f9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af1fc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af200:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af203:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af207:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88af20e:	00 
 88af20f:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 88af215:	89 04 24             	mov    %eax,(%esp)
 88af218:	e8 cb 0f 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af21d:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 88af223:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af227:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af22a:	89 04 24             	mov    %eax,(%esp)
 88af22d:	e8 8a 10 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af232:	e9 71 0e 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af237:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af23e:	83 f0 01             	xor    $0x1,%eax
 88af241:	84 c0                	test   %al,%al
 88af243:	74 4f                	je     88af294 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x342>
 88af245:	c7 85 c8 fc ff ff 4b 	movl   $0x4b,-0x338(%ebp)
 88af24c:	00 00 00 
 88af24f:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 88af255:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af259:	c7 44 24 04 46 67 e0 	movl   $0x8e06746,0x4(%esp)
 88af260:	08 
 88af261:	8d 85 c0 fc ff ff    	lea    -0x340(%ebp),%eax
 88af267:	89 04 24             	mov    %eax,(%esp)
 88af26a:	e8 19 24 84 ff       	call   80f1688 <_ZNSt4pairIKPKciEC1IRA17_S0_iEEOT_OT0_>
 88af26f:	8d 85 b8 fc ff ff    	lea    -0x348(%ebp),%eax
 88af275:	8d 95 c0 fc ff ff    	lea    -0x340(%ebp),%edx
 88af27b:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af27f:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af286:	09 
 88af287:	89 04 24             	mov    %eax,(%esp)
 88af28a:	e8 71 23 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af28f:	83 ec 04             	sub    $0x4,%esp
 88af292:	eb 5c                	jmp    88af2f0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x39e>
 88af294:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af29b:	e8 db d0 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af2a0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af2a3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af2aa:	e8 cc d0 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af2af:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af2b2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af2b5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af2b9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af2bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af2c0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 88af2c7:	00 
 88af2c8:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 88af2ce:	89 04 24             	mov    %eax,(%esp)
 88af2d1:	e8 12 0f 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af2d6:	8d 85 cc fc ff ff    	lea    -0x334(%ebp),%eax
 88af2dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af2e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af2e3:	89 04 24             	mov    %eax,(%esp)
 88af2e6:	e8 d1 0f 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af2eb:	e9 b8 0d 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af2f0:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af2f7:	83 f0 01             	xor    $0x1,%eax
 88af2fa:	84 c0                	test   %al,%al
 88af2fc:	74 4f                	je     88af34d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x3fb>
 88af2fe:	c7 85 f0 fc ff ff 50 	movl   $0x50,-0x310(%ebp)
 88af305:	00 00 00 
 88af308:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 88af30e:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af312:	c7 44 24 04 57 67 e0 	movl   $0x8e06757,0x4(%esp)
 88af319:	08 
 88af31a:	8d 85 e8 fc ff ff    	lea    -0x318(%ebp),%eax
 88af320:	89 04 24             	mov    %eax,(%esp)
 88af323:	e8 b4 ed 9f ff       	call   82ae0dc <_ZNSt4pairIKPKciEC1IRA19_S0_iEEOT_OT0_>
 88af328:	8d 85 e0 fc ff ff    	lea    -0x320(%ebp),%eax
 88af32e:	8d 95 e8 fc ff ff    	lea    -0x318(%ebp),%edx
 88af334:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af338:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af33f:	09 
 88af340:	89 04 24             	mov    %eax,(%esp)
 88af343:	e8 b8 22 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af348:	83 ec 04             	sub    $0x4,%esp
 88af34b:	eb 5c                	jmp    88af3a9 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x457>
 88af34d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af354:	e8 22 d0 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af359:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af35c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af363:	e8 13 d0 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af368:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af36b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af36e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af372:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af375:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af379:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 88af380:	00 
 88af381:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 88af387:	89 04 24             	mov    %eax,(%esp)
 88af38a:	e8 59 0e 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af38f:	8d 85 f4 fc ff ff    	lea    -0x30c(%ebp),%eax
 88af395:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af399:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af39c:	89 04 24             	mov    %eax,(%esp)
 88af39f:	e8 18 0f 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af3a4:	e9 ff 0c 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af3a9:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af3b0:	83 f0 01             	xor    $0x1,%eax
 88af3b3:	84 c0                	test   %al,%al
 88af3b5:	74 4f                	je     88af406 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x4b4>
 88af3b7:	c7 85 18 fd ff ff 55 	movl   $0x55,-0x2e8(%ebp)
 88af3be:	00 00 00 
 88af3c1:	8d 85 18 fd ff ff    	lea    -0x2e8(%ebp),%eax
 88af3c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af3cb:	c7 44 24 04 6a 67 e0 	movl   $0x8e0676a,0x4(%esp)
 88af3d2:	08 
 88af3d3:	8d 85 10 fd ff ff    	lea    -0x2f0(%ebp),%eax
 88af3d9:	89 04 24             	mov    %eax,(%esp)
 88af3dc:	e8 b9 eb 9f ff       	call   82adf9a <_ZNSt4pairIKPKciEC1IRA18_S0_iEEOT_OT0_>
 88af3e1:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 88af3e7:	8d 95 10 fd ff ff    	lea    -0x2f0(%ebp),%edx
 88af3ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af3f1:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af3f8:	09 
 88af3f9:	89 04 24             	mov    %eax,(%esp)
 88af3fc:	e8 ff 21 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af401:	83 ec 04             	sub    $0x4,%esp
 88af404:	eb 5c                	jmp    88af462 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x510>
 88af406:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af40d:	e8 69 cf 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af412:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af415:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af41c:	e8 5a cf 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af421:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af424:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af427:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af42b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af42e:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af432:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 88af439:	00 
 88af43a:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 88af440:	89 04 24             	mov    %eax,(%esp)
 88af443:	e8 a0 0d 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af448:	8d 85 1c fd ff ff    	lea    -0x2e4(%ebp),%eax
 88af44e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af452:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af455:	89 04 24             	mov    %eax,(%esp)
 88af458:	e8 5f 0e 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af45d:	e9 46 0c 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af462:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af469:	83 f0 01             	xor    $0x1,%eax
 88af46c:	84 c0                	test   %al,%al
 88af46e:	74 4f                	je     88af4bf <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x56d>
 88af470:	c7 85 40 fd ff ff 5a 	movl   $0x5a,-0x2c0(%ebp)
 88af477:	00 00 00 
 88af47a:	8d 85 40 fd ff ff    	lea    -0x2c0(%ebp),%eax
 88af480:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af484:	c7 44 24 04 7c 67 e0 	movl   $0x8e0677c,0x4(%esp)
 88af48b:	08 
 88af48c:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 88af492:	89 04 24             	mov    %eax,(%esp)
 88af495:	e8 c0 21 84 ff       	call   80f165a <_ZNSt4pairIKPKciEC1IRA9_S0_iEEOT_OT0_>
 88af49a:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
 88af4a0:	8d 95 38 fd ff ff    	lea    -0x2c8(%ebp),%edx
 88af4a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af4aa:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af4b1:	09 
 88af4b2:	89 04 24             	mov    %eax,(%esp)
 88af4b5:	e8 46 21 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af4ba:	83 ec 04             	sub    $0x4,%esp
 88af4bd:	eb 5c                	jmp    88af51b <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x5c9>
 88af4bf:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af4c6:	e8 b0 ce 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af4cb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af4ce:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af4d5:	e8 a1 ce 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af4da:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af4dd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af4e0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af4e4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af4e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af4eb:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 88af4f2:	00 
 88af4f3:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 88af4f9:	89 04 24             	mov    %eax,(%esp)
 88af4fc:	e8 e7 0c 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af501:	8d 85 44 fd ff ff    	lea    -0x2bc(%ebp),%eax
 88af507:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af50b:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af50e:	89 04 24             	mov    %eax,(%esp)
 88af511:	e8 a6 0d 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af516:	e9 8d 0b 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af51b:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af522:	83 f0 01             	xor    $0x1,%eax
 88af525:	84 c0                	test   %al,%al
 88af527:	74 4f                	je     88af578 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x626>
 88af529:	c7 85 68 fd ff ff 5f 	movl   $0x5f,-0x298(%ebp)
 88af530:	00 00 00 
 88af533:	8d 85 68 fd ff ff    	lea    -0x298(%ebp),%eax
 88af539:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af53d:	c7 44 24 04 85 67 e0 	movl   $0x8e06785,0x4(%esp)
 88af544:	08 
 88af545:	8d 85 60 fd ff ff    	lea    -0x2a0(%ebp),%eax
 88af54b:	89 04 24             	mov    %eax,(%esp)
 88af54e:	e8 07 21 84 ff       	call   80f165a <_ZNSt4pairIKPKciEC1IRA9_S0_iEEOT_OT0_>
 88af553:	8d 85 58 fd ff ff    	lea    -0x2a8(%ebp),%eax
 88af559:	8d 95 60 fd ff ff    	lea    -0x2a0(%ebp),%edx
 88af55f:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af563:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af56a:	09 
 88af56b:	89 04 24             	mov    %eax,(%esp)
 88af56e:	e8 8d 20 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af573:	83 ec 04             	sub    $0x4,%esp
 88af576:	eb 5c                	jmp    88af5d4 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x682>
 88af578:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af57f:	e8 f7 cd 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af584:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af587:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af58e:	e8 e8 cd 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af593:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af596:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af599:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af59d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af5a0:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af5a4:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 88af5ab:	00 
 88af5ac:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 88af5b2:	89 04 24             	mov    %eax,(%esp)
 88af5b5:	e8 2e 0c 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af5ba:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 88af5c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af5c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af5c7:	89 04 24             	mov    %eax,(%esp)
 88af5ca:	e8 ed 0c 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af5cf:	e9 d4 0a 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af5d4:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af5db:	83 f0 01             	xor    $0x1,%eax
 88af5de:	84 c0                	test   %al,%al
 88af5e0:	74 4f                	je     88af631 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x6df>
 88af5e2:	c7 85 90 fd ff ff 64 	movl   $0x64,-0x270(%ebp)
 88af5e9:	00 00 00 
 88af5ec:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 88af5f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af5f6:	c7 44 24 04 8e 67 e0 	movl   $0x8e0678e,0x4(%esp)
 88af5fd:	08 
 88af5fe:	8d 85 88 fd ff ff    	lea    -0x278(%ebp),%eax
 88af604:	89 04 24             	mov    %eax,(%esp)
 88af607:	e8 7c 20 84 ff       	call   80f1688 <_ZNSt4pairIKPKciEC1IRA17_S0_iEEOT_OT0_>
 88af60c:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 88af612:	8d 95 88 fd ff ff    	lea    -0x278(%ebp),%edx
 88af618:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af61c:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af623:	09 
 88af624:	89 04 24             	mov    %eax,(%esp)
 88af627:	e8 d4 1f 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af62c:	83 ec 04             	sub    $0x4,%esp
 88af62f:	eb 5c                	jmp    88af68d <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x73b>
 88af631:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af638:	e8 3e cd 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af63d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af640:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af647:	e8 2f cd 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af64c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af64f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af652:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af656:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af659:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af65d:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 88af664:	00 
 88af665:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 88af66b:	89 04 24             	mov    %eax,(%esp)
 88af66e:	e8 75 0b 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af673:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 88af679:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af67d:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af680:	89 04 24             	mov    %eax,(%esp)
 88af683:	e8 34 0c 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af688:	e9 1b 0a 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af68d:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af694:	83 f0 01             	xor    $0x1,%eax
 88af697:	84 c0                	test   %al,%al
 88af699:	74 4f                	je     88af6ea <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x798>
 88af69b:	c7 85 b8 fd ff ff 69 	movl   $0x69,-0x248(%ebp)
 88af6a2:	00 00 00 
 88af6a5:	8d 85 b8 fd ff ff    	lea    -0x248(%ebp),%eax
 88af6ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af6af:	c7 44 24 04 9f 67 e0 	movl   $0x8e0679f,0x4(%esp)
 88af6b6:	08 
 88af6b7:	8d 85 b0 fd ff ff    	lea    -0x250(%ebp),%eax
 88af6bd:	89 04 24             	mov    %eax,(%esp)
 88af6c0:	e8 c3 1f 84 ff       	call   80f1688 <_ZNSt4pairIKPKciEC1IRA17_S0_iEEOT_OT0_>
 88af6c5:	8d 85 a8 fd ff ff    	lea    -0x258(%ebp),%eax
 88af6cb:	8d 95 b0 fd ff ff    	lea    -0x250(%ebp),%edx
 88af6d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af6d5:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af6dc:	09 
 88af6dd:	89 04 24             	mov    %eax,(%esp)
 88af6e0:	e8 1b 1f 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af6e5:	83 ec 04             	sub    $0x4,%esp
 88af6e8:	eb 5c                	jmp    88af746 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x7f4>
 88af6ea:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af6f1:	e8 85 cc 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af6f6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af6f9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af700:	e8 76 cc 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af705:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af708:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af70b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af70f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af712:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af716:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 88af71d:	00 
 88af71e:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 88af724:	89 04 24             	mov    %eax,(%esp)
 88af727:	e8 bc 0a 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af72c:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 88af732:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af736:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af739:	89 04 24             	mov    %eax,(%esp)
 88af73c:	e8 7b 0b 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af741:	e9 62 09 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af746:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af74d:	83 f0 01             	xor    $0x1,%eax
 88af750:	84 c0                	test   %al,%al
 88af752:	74 4f                	je     88af7a3 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x851>
 88af754:	c7 85 e0 fd ff ff 6e 	movl   $0x6e,-0x220(%ebp)
 88af75b:	00 00 00 
 88af75e:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
 88af764:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af768:	c7 44 24 04 b0 67 e0 	movl   $0x8e067b0,0x4(%esp)
 88af76f:	08 
 88af770:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
 88af776:	89 04 24             	mov    %eax,(%esp)
 88af779:	e8 16 ea 9f ff       	call   82ae194 <_ZNSt4pairIKPKciEC1IRA15_S0_iEEOT_OT0_>
 88af77e:	8d 85 d0 fd ff ff    	lea    -0x230(%ebp),%eax
 88af784:	8d 95 d8 fd ff ff    	lea    -0x228(%ebp),%edx
 88af78a:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af78e:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af795:	09 
 88af796:	89 04 24             	mov    %eax,(%esp)
 88af799:	e8 62 1e 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af79e:	83 ec 04             	sub    $0x4,%esp
 88af7a1:	eb 5c                	jmp    88af7ff <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x8ad>
 88af7a3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af7aa:	e8 cc cb 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af7af:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af7b2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af7b9:	e8 bd cb 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af7be:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af7c1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af7c4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af7c8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af7cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af7cf:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 88af7d6:	00 
 88af7d7:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 88af7dd:	89 04 24             	mov    %eax,(%esp)
 88af7e0:	e8 03 0a 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af7e5:	8d 85 e4 fd ff ff    	lea    -0x21c(%ebp),%eax
 88af7eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af7ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af7f2:	89 04 24             	mov    %eax,(%esp)
 88af7f5:	e8 c2 0a 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af7fa:	e9 a9 08 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af7ff:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af806:	83 f0 01             	xor    $0x1,%eax
 88af809:	84 c0                	test   %al,%al
 88af80b:	74 4f                	je     88af85c <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x90a>
 88af80d:	c7 85 08 fe ff ff 73 	movl   $0x73,-0x1f8(%ebp)
 88af814:	00 00 00 
 88af817:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 88af81d:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af821:	c7 44 24 04 bf 67 e0 	movl   $0x8e067bf,0x4(%esp)
 88af828:	08 
 88af829:	8d 85 00 fe ff ff    	lea    -0x200(%ebp),%eax
 88af82f:	89 04 24             	mov    %eax,(%esp)
 88af832:	e8 bf e7 9f ff       	call   82adff6 <_ZNSt4pairIKPKciEC1IRA13_S0_iEEOT_OT0_>
 88af837:	8d 85 f8 fd ff ff    	lea    -0x208(%ebp),%eax
 88af83d:	8d 95 00 fe ff ff    	lea    -0x200(%ebp),%edx
 88af843:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af847:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af84e:	09 
 88af84f:	89 04 24             	mov    %eax,(%esp)
 88af852:	e8 a9 1d 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af857:	83 ec 04             	sub    $0x4,%esp
 88af85a:	eb 5c                	jmp    88af8b8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x966>
 88af85c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af863:	e8 13 cb 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af868:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af86b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af872:	e8 04 cb 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af877:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af87a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af87d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af881:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af884:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af888:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 88af88f:	00 
 88af890:	8d 85 0c fe ff ff    	lea    -0x1f4(%ebp),%eax
 88af896:	89 04 24             	mov    %eax,(%esp)
 88af899:	e8 4a 09 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af89e:	8d 85 0c fe ff ff    	lea    -0x1f4(%ebp),%eax
 88af8a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af8a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af8ab:	89 04 24             	mov    %eax,(%esp)
 88af8ae:	e8 09 0a 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af8b3:	e9 f0 07 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af8b8:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af8bf:	83 f0 01             	xor    $0x1,%eax
 88af8c2:	84 c0                	test   %al,%al
 88af8c4:	74 4f                	je     88af915 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x9c3>
 88af8c6:	c7 85 30 fe ff ff 78 	movl   $0x78,-0x1d0(%ebp)
 88af8cd:	00 00 00 
 88af8d0:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
 88af8d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af8da:	c7 44 24 04 cc 67 e0 	movl   $0x8e067cc,0x4(%esp)
 88af8e1:	08 
 88af8e2:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 88af8e8:	89 04 24             	mov    %eax,(%esp)
 88af8eb:	e8 06 e7 9f ff       	call   82adff6 <_ZNSt4pairIKPKciEC1IRA13_S0_iEEOT_OT0_>
 88af8f0:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
 88af8f6:	8d 95 28 fe ff ff    	lea    -0x1d8(%ebp),%edx
 88af8fc:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af900:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af907:	09 
 88af908:	89 04 24             	mov    %eax,(%esp)
 88af90b:	e8 f0 1c 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af910:	83 ec 04             	sub    $0x4,%esp
 88af913:	eb 5c                	jmp    88af971 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xa1f>
 88af915:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af91c:	e8 5a ca 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af921:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af924:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af92b:	e8 4b ca 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af930:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af933:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af936:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af93a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af93d:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af941:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 88af948:	00 
 88af949:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 88af94f:	89 04 24             	mov    %eax,(%esp)
 88af952:	e8 91 08 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88af957:	8d 85 34 fe ff ff    	lea    -0x1cc(%ebp),%eax
 88af95d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88af961:	8b 45 0c             	mov    0xc(%ebp),%eax
 88af964:	89 04 24             	mov    %eax,(%esp)
 88af967:	e8 50 09 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88af96c:	e9 37 07 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88af971:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88af978:	83 f0 01             	xor    $0x1,%eax
 88af97b:	84 c0                	test   %al,%al
 88af97d:	74 4f                	je     88af9ce <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xa7c>
 88af97f:	c7 85 58 fe ff ff 7d 	movl   $0x7d,-0x1a8(%ebp)
 88af986:	00 00 00 
 88af989:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 88af98f:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af993:	c7 44 24 04 d9 67 e0 	movl   $0x8e067d9,0x4(%esp)
 88af99a:	08 
 88af99b:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 88af9a1:	89 04 24             	mov    %eax,(%esp)
 88af9a4:	e8 f1 e5 9f ff       	call   82adf9a <_ZNSt4pairIKPKciEC1IRA18_S0_iEEOT_OT0_>
 88af9a9:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 88af9af:	8d 95 50 fe ff ff    	lea    -0x1b0(%ebp),%edx
 88af9b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 88af9b9:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88af9c0:	09 
 88af9c1:	89 04 24             	mov    %eax,(%esp)
 88af9c4:	e8 37 1c 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88af9c9:	83 ec 04             	sub    $0x4,%esp
 88af9cc:	eb 5c                	jmp    88afa2a <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xad8>
 88af9ce:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af9d5:	e8 a1 c9 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af9da:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88af9dd:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88af9e4:	e8 92 c9 00 00       	call   88bc37b <_Z7ScanIntPb>
 88af9e9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88af9ec:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88af9ef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88af9f3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88af9f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 88af9fa:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 88afa01:	00 
 88afa02:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 88afa08:	89 04 24             	mov    %eax,(%esp)
 88afa0b:	e8 d8 07 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afa10:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 88afa16:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afa1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afa1d:	89 04 24             	mov    %eax,(%esp)
 88afa20:	e8 97 08 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afa25:	e9 7e 06 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afa2a:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afa31:	83 f0 01             	xor    $0x1,%eax
 88afa34:	84 c0                	test   %al,%al
 88afa36:	74 4f                	je     88afa87 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xb35>
 88afa38:	c7 85 80 fe ff ff 82 	movl   $0x82,-0x180(%ebp)
 88afa3f:	00 00 00 
 88afa42:	8d 85 80 fe ff ff    	lea    -0x180(%ebp),%eax
 88afa48:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afa4c:	c7 44 24 04 eb 67 e0 	movl   $0x8e067eb,0x4(%esp)
 88afa53:	08 
 88afa54:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 88afa5a:	89 04 24             	mov    %eax,(%esp)
 88afa5d:	e8 60 e7 9f ff       	call   82ae1c2 <_ZNSt4pairIKPKciEC1IRA8_S0_iEEOT_OT0_>
 88afa62:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 88afa68:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 88afa6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afa72:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afa79:	09 
 88afa7a:	89 04 24             	mov    %eax,(%esp)
 88afa7d:	e8 7e 1b 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afa82:	83 ec 04             	sub    $0x4,%esp
 88afa85:	eb 5c                	jmp    88afae3 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xb91>
 88afa87:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afa8e:	e8 52 ca 00 00       	call   88bc4e5 <_Z9ScanFloatPb>
 88afa93:	d9 5d e0             	fstps  -0x20(%ebp)
 88afa96:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afa9d:	e8 d9 c8 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afaa2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afaa5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afaa8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afaac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88afaaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afab3:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 88afaba:	00 
 88afabb:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 88afac1:	89 04 24             	mov    %eax,(%esp)
 88afac4:	e8 51 07 00 00       	call   88b021a <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEfi>
 88afac9:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 88afacf:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afad3:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afad6:	89 04 24             	mov    %eax,(%esp)
 88afad9:	e8 de 07 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afade:	e9 c5 05 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afae3:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afaea:	83 f0 01             	xor    $0x1,%eax
 88afaed:	84 c0                	test   %al,%al
 88afaef:	74 4f                	je     88afb40 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xbee>
 88afaf1:	c7 85 a8 fe ff ff 87 	movl   $0x87,-0x158(%ebp)
 88afaf8:	00 00 00 
 88afafb:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 88afb01:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afb05:	c7 44 24 04 f3 67 e0 	movl   $0x8e067f3,0x4(%esp)
 88afb0c:	08 
 88afb0d:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 88afb13:	89 04 24             	mov    %eax,(%esp)
 88afb16:	e8 c1 e5 9f ff       	call   82ae0dc <_ZNSt4pairIKPKciEC1IRA19_S0_iEEOT_OT0_>
 88afb1b:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 88afb21:	8d 95 a0 fe ff ff    	lea    -0x160(%ebp),%edx
 88afb27:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afb2b:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afb32:	09 
 88afb33:	89 04 24             	mov    %eax,(%esp)
 88afb36:	e8 c5 1a 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afb3b:	83 ec 04             	sub    $0x4,%esp
 88afb3e:	eb 5c                	jmp    88afb9c <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xc4a>
 88afb40:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afb47:	e8 2f c8 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afb4c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88afb4f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afb56:	e8 20 c8 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afb5b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afb5e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afb61:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afb65:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88afb68:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afb6c:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 88afb73:	00 
 88afb74:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 88afb7a:	89 04 24             	mov    %eax,(%esp)
 88afb7d:	e8 66 06 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afb82:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 88afb88:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afb8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afb8f:	89 04 24             	mov    %eax,(%esp)
 88afb92:	e8 25 07 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afb97:	e9 0c 05 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afb9c:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afba3:	83 f0 01             	xor    $0x1,%eax
 88afba6:	84 c0                	test   %al,%al
 88afba8:	74 4f                	je     88afbf9 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xca7>
 88afbaa:	c7 85 d0 fe ff ff 8c 	movl   $0x8c,-0x130(%ebp)
 88afbb1:	00 00 00 
 88afbb4:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 88afbba:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afbbe:	c7 44 24 04 06 68 e0 	movl   $0x8e06806,0x4(%esp)
 88afbc5:	08 
 88afbc6:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 88afbcc:	89 04 24             	mov    %eax,(%esp)
 88afbcf:	e8 98 4c fe ff       	call   889486c <_ZNSt4pairIKPKciEC1IRA30_S0_iEEOT_OT0_>
 88afbd4:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 88afbda:	8d 95 c8 fe ff ff    	lea    -0x138(%ebp),%edx
 88afbe0:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afbe4:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afbeb:	09 
 88afbec:	89 04 24             	mov    %eax,(%esp)
 88afbef:	e8 0c 1a 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afbf4:	83 ec 04             	sub    $0x4,%esp
 88afbf7:	eb 5c                	jmp    88afc55 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xd03>
 88afbf9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afc00:	e8 76 c7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afc05:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88afc08:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afc0f:	e8 67 c7 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afc14:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afc17:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afc1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afc1e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88afc21:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afc25:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 88afc2c:	00 
 88afc2d:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 88afc33:	89 04 24             	mov    %eax,(%esp)
 88afc36:	e8 ad 05 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afc3b:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 88afc41:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afc45:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afc48:	89 04 24             	mov    %eax,(%esp)
 88afc4b:	e8 6c 06 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afc50:	e9 53 04 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afc55:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afc5c:	83 f0 01             	xor    $0x1,%eax
 88afc5f:	84 c0                	test   %al,%al
 88afc61:	74 4f                	je     88afcb2 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xd60>
 88afc63:	c7 85 f8 fe ff ff 91 	movl   $0x91,-0x108(%ebp)
 88afc6a:	00 00 00 
 88afc6d:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 88afc73:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afc77:	c7 44 24 04 24 68 e0 	movl   $0x8e06824,0x4(%esp)
 88afc7e:	08 
 88afc7f:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 88afc85:	89 04 24             	mov    %eax,(%esp)
 88afc88:	e8 07 e5 9f ff       	call   82ae194 <_ZNSt4pairIKPKciEC1IRA15_S0_iEEOT_OT0_>
 88afc8d:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 88afc93:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 88afc99:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afc9d:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afca4:	09 
 88afca5:	89 04 24             	mov    %eax,(%esp)
 88afca8:	e8 53 19 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afcad:	83 ec 04             	sub    $0x4,%esp
 88afcb0:	eb 5c                	jmp    88afd0e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xdbc>
 88afcb2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afcb9:	e8 bd c6 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afcbe:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88afcc1:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afcc8:	e8 ae c6 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afccd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afcd0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afcd3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afcd7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88afcda:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afcde:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 88afce5:	00 
 88afce6:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 88afcec:	89 04 24             	mov    %eax,(%esp)
 88afcef:	e8 f4 04 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afcf4:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 88afcfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afcfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afd01:	89 04 24             	mov    %eax,(%esp)
 88afd04:	e8 b3 05 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afd09:	e9 9a 03 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afd0e:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afd15:	83 f0 01             	xor    $0x1,%eax
 88afd18:	84 c0                	test   %al,%al
 88afd1a:	74 4f                	je     88afd6b <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xe19>
 88afd1c:	c7 85 20 ff ff ff 96 	movl   $0x96,-0xe0(%ebp)
 88afd23:	00 00 00 
 88afd26:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 88afd2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afd30:	c7 44 24 04 33 68 e0 	movl   $0x8e06833,0x4(%esp)
 88afd37:	08 
 88afd38:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 88afd3e:	89 04 24             	mov    %eax,(%esp)
 88afd41:	e8 20 e4 9f ff       	call   82ae166 <_ZNSt4pairIKPKciEC1IRA28_S0_iEEOT_OT0_>
 88afd46:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 88afd4c:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 88afd52:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afd56:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afd5d:	09 
 88afd5e:	89 04 24             	mov    %eax,(%esp)
 88afd61:	e8 9a 18 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afd66:	83 ec 04             	sub    $0x4,%esp
 88afd69:	eb 68                	jmp    88afdd3 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xe81>
 88afd6b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afd72:	e8 04 c6 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afd77:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afd7e:	e8 f8 c5 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afd83:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88afd86:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afd8d:	e8 e9 c5 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afd92:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afd95:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afd98:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afd9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88afd9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afda3:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 88afdaa:	00 
 88afdab:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 88afdb1:	89 04 24             	mov    %eax,(%esp)
 88afdb4:	e8 2f 04 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afdb9:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 88afdbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afdc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afdc6:	89 04 24             	mov    %eax,(%esp)
 88afdc9:	e8 ee 04 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afdce:	e9 d5 02 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afdd3:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afdda:	83 f0 01             	xor    $0x1,%eax
 88afddd:	84 c0                	test   %al,%al
 88afddf:	74 4f                	je     88afe30 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xede>
 88afde1:	c7 85 48 ff ff ff 9c 	movl   $0x9c,-0xb8(%ebp)
 88afde8:	00 00 00 
 88afdeb:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 88afdf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afdf5:	c7 44 24 04 4f 68 e0 	movl   $0x8e0684f,0x4(%esp)
 88afdfc:	08 
 88afdfd:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 88afe03:	89 04 24             	mov    %eax,(%esp)
 88afe06:	e8 d3 04 00 00       	call   88b02de <_ZNSt4pairIKPKciEC1IRA29_S0_iEEOT_OT0_>
 88afe0b:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 88afe11:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 88afe17:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afe1b:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afe22:	09 
 88afe23:	89 04 24             	mov    %eax,(%esp)
 88afe26:	e8 d5 17 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afe2b:	83 ec 04             	sub    $0x4,%esp
 88afe2e:	eb 68                	jmp    88afe98 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xf46>
 88afe30:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afe37:	e8 3f c5 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afe3c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afe43:	e8 33 c5 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afe48:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88afe4b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afe52:	e8 24 c5 00 00       	call   88bc37b <_Z7ScanIntPb>
 88afe57:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88afe5a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88afe5d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88afe61:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88afe64:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afe68:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 88afe6f:	00 
 88afe70:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 88afe76:	89 04 24             	mov    %eax,(%esp)
 88afe79:	e8 6a 03 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88afe7e:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 88afe84:	89 44 24 04          	mov    %eax,0x4(%esp)
 88afe88:	8b 45 0c             	mov    0xc(%ebp),%eax
 88afe8b:	89 04 24             	mov    %eax,(%esp)
 88afe8e:	e8 29 04 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afe93:	e9 10 02 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afe98:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afe9f:	83 f0 01             	xor    $0x1,%eax
 88afea2:	84 c0                	test   %al,%al
 88afea4:	74 4f                	je     88afef5 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xfa3>
 88afea6:	c7 85 70 ff ff ff a2 	movl   $0xa2,-0x90(%ebp)
 88afead:	00 00 00 
 88afeb0:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 88afeb6:	89 44 24 08          	mov    %eax,0x8(%esp)
 88afeba:	c7 44 24 04 6c 68 e0 	movl   $0x8e0686c,0x4(%esp)
 88afec1:	08 
 88afec2:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 88afec8:	89 04 24             	mov    %eax,(%esp)
 88afecb:	e8 26 e1 9f ff       	call   82adff6 <_ZNSt4pairIKPKciEC1IRA13_S0_iEEOT_OT0_>
 88afed0:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 88afed6:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 88afedc:	89 54 24 08          	mov    %edx,0x8(%esp)
 88afee0:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88afee7:	09 
 88afee8:	89 04 24             	mov    %eax,(%esp)
 88afeeb:	e8 10 17 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88afef0:	83 ec 04             	sub    $0x4,%esp
 88afef3:	eb 5c                	jmp    88aff51 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0xfff>
 88afef5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88afefc:	e8 7a c4 00 00       	call   88bc37b <_Z7ScanIntPb>
 88aff01:	89 45 dc             	mov    %eax,-0x24(%ebp)
 88aff04:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88aff0b:	e8 6b c4 00 00       	call   88bc37b <_Z7ScanIntPb>
 88aff10:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88aff13:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88aff16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88aff1a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 88aff1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 88aff21:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 88aff28:	00 
 88aff29:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 88aff2f:	89 04 24             	mov    %eax,(%esp)
 88aff32:	e8 b1 02 00 00       	call   88b01e8 <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEii>
 88aff37:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 88aff3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88aff41:	8b 45 0c             	mov    0xc(%ebp),%eax
 88aff44:	89 04 24             	mov    %eax,(%esp)
 88aff47:	e8 70 03 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88aff4c:	e9 57 01 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88aff51:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88aff58:	83 f0 01             	xor    $0x1,%eax
 88aff5b:	84 c0                	test   %al,%al
 88aff5d:	74 40                	je     88aff9f <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x104d>
 88aff5f:	c7 45 98 a7 00 00 00 	movl   $0xa7,-0x68(%ebp)
 88aff66:	8d 45 98             	lea    -0x68(%ebp),%eax
 88aff69:	89 44 24 08          	mov    %eax,0x8(%esp)
 88aff6d:	c7 44 24 04 79 68 e0 	movl   $0x8e06879,0x4(%esp)
 88aff74:	08 
 88aff75:	8d 45 90             	lea    -0x70(%ebp),%eax
 88aff78:	89 04 24             	mov    %eax,(%esp)
 88aff7b:	e8 2e e1 9f ff       	call   82ae0ae <_ZNSt4pairIKPKciEC1IRA24_S0_iEEOT_OT0_>
 88aff80:	8d 45 88             	lea    -0x78(%ebp),%eax
 88aff83:	8d 55 90             	lea    -0x70(%ebp),%edx
 88aff86:	89 54 24 08          	mov    %edx,0x8(%esp)
 88aff8a:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88aff91:	09 
 88aff92:	89 04 24             	mov    %eax,(%esp)
 88aff95:	e8 66 16 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88aff9a:	83 ec 04             	sub    $0x4,%esp
 88aff9d:	eb 56                	jmp    88afff5 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x10a3>
 88aff9f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88affa6:	e8 3a c5 00 00       	call   88bc4e5 <_Z9ScanFloatPb>
 88affab:	d9 5d e0             	fstps  -0x20(%ebp)
 88affae:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88affb5:	e8 c1 c3 00 00       	call   88bc37b <_Z7ScanIntPb>
 88affba:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88affbd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88affc0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88affc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88affc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 88affcb:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 88affd2:	00 
 88affd3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88affd6:	89 04 24             	mov    %eax,(%esp)
 88affd9:	e8 3c 02 00 00       	call   88b021a <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEfi>
 88affde:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88affe1:	89 44 24 04          	mov    %eax,0x4(%esp)
 88affe5:	8b 45 0c             	mov    0xc(%ebp),%eax
 88affe8:	89 04 24             	mov    %eax,(%esp)
 88affeb:	e8 cc 02 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88afff0:	e9 b3 00 00 00       	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88afff5:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88afffc:	83 f0 01             	xor    $0x1,%eax
 88affff:	84 c0                	test   %al,%al
 88b0001:	74 40                	je     88b0043 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x10f1>
 88b0003:	c7 45 c0 ac 00 00 00 	movl   $0xac,-0x40(%ebp)
 88b000a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88b000d:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b0011:	c7 44 24 04 91 68 e0 	movl   $0x8e06891,0x4(%esp)
 88b0018:	08 
 88b0019:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88b001c:	89 04 24             	mov    %eax,(%esp)
 88b001f:	e8 6e e2 9f ff       	call   82ae292 <_ZNSt4pairIKPKciEC1IRA23_S0_iEEOT_OT0_>
 88b0024:	8d 45 b0             	lea    -0x50(%ebp),%eax
 88b0027:	8d 55 b8             	lea    -0x48(%ebp),%edx
 88b002a:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b002e:	c7 44 24 04 88 4e 49 	movl   $0x9494e88,0x4(%esp)
 88b0035:	09 
 88b0036:	89 04 24             	mov    %eax,(%esp)
 88b0039:	e8 c2 15 84 ff       	call   80f1600 <_ZNSt3mapIPKci10less_TCHARSaISt4pairIKS1_iEEE6insertERKS5_>
 88b003e:	83 ec 04             	sub    $0x4,%esp
 88b0041:	eb 53                	jmp    88b0096 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1144>
 88b0043:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b004a:	e8 96 c4 00 00       	call   88bc4e5 <_Z9ScanFloatPb>
 88b004f:	d9 5d e0             	fstps  -0x20(%ebp)
 88b0052:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b0059:	e8 1d c3 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b005e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 88b0061:	8b 45 d8             	mov    -0x28(%ebp),%eax
 88b0064:	89 44 24 0c          	mov    %eax,0xc(%esp)
 88b0068:	8b 45 e0             	mov    -0x20(%ebp),%eax
 88b006b:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b006f:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 88b0076:	00 
 88b0077:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 88b007a:	89 04 24             	mov    %eax,(%esp)
 88b007d:	e8 98 01 00 00       	call   88b021a <_ZN30STAvatarHiddenAbilityVariationC1EN26AVATAR_HIDDEN_ABILITY_TYPE1TEfi>
 88b0082:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 88b0085:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b0089:	8b 45 0c             	mov    0xc(%ebp),%eax
 88b008c:	89 04 24             	mov    %eax,(%esp)
 88b008f:	e8 28 02 00 00       	call   88b02bc <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE9push_backEOS0_>
 88b0094:	eb 12                	jmp    88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88b0096:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88b009d:	84 c0                	test   %al,%al
 88b009f:	74 07                	je     88b00a8 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1156>
 88b00a1:	b8 00 00 00 00       	mov    $0x0,%eax
 88b00a6:	eb 2c                	jmp    88b00d4 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x1182>
 88b00a8:	0f b6 05 a4 4e 49 09 	movzbl 0x9494ea4,%eax
 88b00af:	83 f0 01             	xor    $0x1,%eax
 88b00b2:	84 c0                	test   %al,%al
 88b00b4:	74 18                	je     88b00ce <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x117c>
 88b00b6:	c7 04 24 a0 4e 49 09 	movl   $0x9494ea0,(%esp)
 88b00bd:	e8 c4 34 22 00       	call   8ad3586 <_ZN8SpinLock5leaveEv>
 88b00c2:	c6 05 a4 4e 49 09 01 	movb   $0x1,0x9494ea4
 88b00c9:	e9 a6 ee ff ff       	jmp    88aef74 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption12parseAbilityERSt6vectorI30STAvatarHiddenAbilityVariationSaIS3_EERSs+0x22>
 88b00ce:	90                   	nop
 88b00cf:	b8 01 00 00 00       	mov    $0x1,%eax
 88b00d4:	8d 65 f4             	lea    -0xc(%ebp),%esp
 88b00d7:	83 c4 00             	add    $0x0,%esp
 88b00da:	5b                   	pop    %ebx
 88b00db:	5e                   	pop    %esi
 88b00dc:	5f                   	pop    %edi
 88b00dd:	5d                   	pop    %ebp
 88b00de:	c3                   	ret
 88b00df:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility @ 0x88aef52

/* ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility(std::vector<STAvatarHiddenAbilityVariation,
   std::allocator<STAvatarHiddenAbilityVariation> >&, std::string&) */

undefined4 __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::parseAbility
          (AvatarFixedHiddenOption *this,vector *param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  longdouble lVar3;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_388 [4];
  _Rb_tree_iterator local_384 [4];
  undefined4 local_380;
  _Rb_tree_const_iterator<std::pair<char_const*const,int>> local_37c [4];
  map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> local_378 [4];
  pair local_374 [8];
  pair<char_const*const,int> local_36c [8];
  int local_364;
  STAvatarHiddenAbilityVariation local_360 [20];
  pair local_34c [8];
  pair<char_const*const,int> local_344 [8];
  int local_33c;
  STAvatarHiddenAbilityVariation local_338 [20];
  pair local_324 [8];
  pair<char_const*const,int> local_31c [8];
  int local_314;
  STAvatarHiddenAbilityVariation local_310 [20];
  pair local_2fc [8];
  pair<char_const*const,int> local_2f4 [8];
  int local_2ec;
  STAvatarHiddenAbilityVariation local_2e8 [20];
  pair local_2d4 [8];
  pair<char_const*const,int> local_2cc [8];
  int local_2c4;
  STAvatarHiddenAbilityVariation local_2c0 [20];
  pair local_2ac [8];
  pair<char_const*const,int> local_2a4 [8];
  int local_29c;
  STAvatarHiddenAbilityVariation local_298 [20];
  pair local_284 [8];
  pair<char_const*const,int> local_27c [8];
  int local_274;
  STAvatarHiddenAbilityVariation local_270 [20];
  pair local_25c [8];
  pair<char_const*const,int> local_254 [8];
  int local_24c;
  STAvatarHiddenAbilityVariation local_248 [20];
  pair local_234 [8];
  pair<char_const*const,int> local_22c [8];
  int local_224;
  STAvatarHiddenAbilityVariation local_220 [20];
  pair local_20c [8];
  pair<char_const*const,int> local_204 [8];
  int local_1fc;
  STAvatarHiddenAbilityVariation local_1f8 [20];
  pair local_1e4 [8];
  pair<char_const*const,int> local_1dc [8];
  int local_1d4;
  STAvatarHiddenAbilityVariation local_1d0 [20];
  pair local_1bc [8];
  pair<char_const*const,int> local_1b4 [8];
  int local_1ac;
  STAvatarHiddenAbilityVariation local_1a8 [20];
  pair local_194 [8];
  pair<char_const*const,int> local_18c [8];
  int local_184;
  STAvatarHiddenAbilityVariation local_180 [20];
  pair local_16c [8];
  pair<char_const*const,int> local_164 [8];
  int local_15c;
  STAvatarHiddenAbilityVariation local_158 [20];
  pair local_144 [8];
  pair<char_const*const,int> local_13c [8];
  int local_134;
  STAvatarHiddenAbilityVariation local_130 [20];
  pair local_11c [8];
  pair<char_const*const,int> local_114 [8];
  int local_10c;
  STAvatarHiddenAbilityVariation local_108 [20];
  pair local_f4 [8];
  pair<char_const*const,int> local_ec [8];
  int local_e4;
  STAvatarHiddenAbilityVariation local_e0 [20];
  pair local_cc [8];
  pair<char_const*const,int> local_c4 [8];
  int local_bc;
  STAvatarHiddenAbilityVariation local_b8 [20];
  pair local_a4 [8];
  pair<char_const*const,int> local_9c [8];
  int local_94;
  STAvatarHiddenAbilityVariation local_90 [20];
  pair local_7c [8];
  pair<char_const*const,int> local_74 [8];
  int local_6c;
  STAvatarHiddenAbilityVariation local_68 [20];
  pair local_54 [8];
  pair<char_const*const,int> local_4c [8];
  int local_44;
  STAvatarHiddenAbilityVariation local_40 [20];
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  
  local_2c = 0;
  local_28 = 0;
  local_24 = 0.0;
LAB_088aef74:
  do {
    if ((parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
         ::__lookup == '\0') &&
       (iVar2 = __cxa_guard_acquire(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                                     ::__lookup), iVar2 != 0)) {
                    /* try { // try from 088aefa1 to 088aefa5 has its CatchHandler @ 088aefd1 */
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::map
                ((map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>> *)
                 parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                 ::__lookup);
      __cxa_guard_release(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                           ::__lookup);
      __cxa_atexit(std::
                   map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::
                   ~map,parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                        ::__lookup,&__dso_handle);
    }
    if ((parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
         ::__init_lock == '\0') &&
       (iVar2 = __cxa_guard_acquire(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                                     ::__init_lock), iVar2 != 0)) {
                    /* try { // try from 088af01e to 088af022 has its CatchHandler @ 088af04e */
      SpinLock::SpinLock((SpinLock *)
                         &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                          ::__init_lock);
      __cxa_guard_release(&parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                           ::__init_lock);
      __cxa_atexit(SpinLock::~SpinLock,
                   &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                    ::__init_lock,&__dso_handle);
    }
    if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
        ::__inited == '\0') {
      SpinLock::enter((SpinLock *)
                      &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                       ::__init_lock);
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\0') {
        SpinLock::leave((SpinLock *)
                        &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                         ::__init_lock);
        goto LAB_088aef74;
      }
      local_20 = 0;
    }
    else {
      local_380 = std::string::c_str(param_2);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::find
                ((char **)local_384);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_388,local_384);
      std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::end
                (local_378);
      std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::_Rb_tree_const_iterator
                (local_37c,(_Rb_tree_iterator *)local_378);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator!=
                        (local_388,(_Rb_tree_const_iterator *)local_37c);
      if (cVar1 == '\0') {
        local_20 = 0xffffffff;
      }
      else {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<char_const*const,int>>::operator->(local_388)
        ;
        local_20 = *(undefined4 *)(iVar2 + 4);
      }
    }
    switch(local_20) {
    case 0:
    case 0x46:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_364 = 0x46;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_36c,"[physical attack]",&local_364);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_374);
        goto switchD_088af17c_caseD_4b;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_360,1,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_360);
      break;
    default:
switchD_088af17c_caseD_1:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\0') {
        return 0;
      }
      break;
    case 0x4b:
switchD_088af17c_caseD_4b:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_33c = 0x4b;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_344,"[magical attack]",&local_33c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_34c);
        goto switchD_088af17c_caseD_50;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_338,2,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_338);
      break;
    case 0x50:
switchD_088af17c_caseD_50:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_314 = 0x50;
        std::pair<char_const*const,int>::pair<char_const(&)[19],int>
                  (local_31c,"[physical defense]",&local_314);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_324);
        goto switchD_088af17c_caseD_55;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_310,3,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_310);
      break;
    case 0x55:
switchD_088af17c_caseD_55:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_2ec = 0x55;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_2f4,"[magical defense]",&local_2ec);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2fc);
        goto switchD_088af17c_caseD_5a;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2e8,4,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_2e8);
      break;
    case 0x5a:
switchD_088af17c_caseD_5a:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_2c4 = 0x5a;
        std::pair<char_const*const,int>::pair<char_const(&)[9],int>(local_2cc,"[HP MAX]",&local_2c4)
        ;
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2d4);
        goto switchD_088af17c_caseD_5f;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_2c0,5,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_2c0);
      break;
    case 0x5f:
switchD_088af17c_caseD_5f:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_29c = 0x5f;
        std::pair<char_const*const,int>::pair<char_const(&)[9],int>(local_2a4,"[MP MAX]",&local_29c)
        ;
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_2ac);
        goto switchD_088af17c_caseD_64;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_298,6,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_298);
      break;
    case 100:
switchD_088af17c_caseD_64:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_274 = 100;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_27c,"[HP regen speed]",&local_274);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_284);
        goto switchD_088af17c_caseD_69;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_270,7,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_270);
      break;
    case 0x69:
switchD_088af17c_caseD_69:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_24c = 0x69;
        std::pair<char_const*const,int>::pair<char_const(&)[17],int>
                  (local_254,"[MP Regen speed]",&local_24c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_25c);
        goto switchD_088af17c_caseD_6e;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_248,8,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_248);
      break;
    case 0x6e:
switchD_088af17c_caseD_6e:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_224 = 0x6e;
        std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                  (local_22c,"[attack speed]",&local_224);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_234);
        goto switchD_088af17c_caseD_73;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_220,9,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_220);
      break;
    case 0x73:
switchD_088af17c_caseD_73:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1fc = 0x73;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_204,"[move speed]",&local_1fc);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_20c);
        goto switchD_088af17c_caseD_78;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation(local_1f8,10,local_28,local_2c)
      ;
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1f8);
      break;
    case 0x78:
switchD_088af17c_caseD_78:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1d4 = 0x78;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_1dc,"[cast speed]",&local_1d4);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_1e4);
        goto switchD_088af17c_caseD_7d;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_1d0,0xb,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1d0);
      break;
    case 0x7d:
switchD_088af17c_caseD_7d:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_1ac = 0x7d;
        std::pair<char_const*const,int>::pair<char_const(&)[18],int>
                  (local_1b4,"[inventory limit]",&local_1ac);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_1bc);
        goto switchD_088af17c_caseD_82;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_1a8,0xc,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_1a8);
      break;
    case 0x82:
switchD_088af17c_caseD_82:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_184 = 0x82;
        std::pair<char_const*const,int>::pair<char_const(&)[8],int>(local_18c,"[stuck]",&local_184);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_194);
        goto switchD_088af17c_caseD_87;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_180,0xd,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_180);
      break;
    case 0x87:
switchD_088af17c_caseD_87:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_15c = 0x87;
        std::pair<char_const*const,int>::pair<char_const(&)[19],int>
                  (local_164,"[stuck resistance]",&local_15c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_16c);
        goto switchD_088af17c_caseD_8c;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_158,0xe,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_158);
      break;
    case 0x8c:
switchD_088af17c_caseD_8c:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_134 = 0x8c;
        std::pair<char_const*const,int>::pair<char_const(&)[30],int>
                  (local_13c,"[all activestatus resistance]",&local_134);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_144);
        goto switchD_088af17c_caseD_91;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_130,0xf,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_130);
      break;
    case 0x91:
switchD_088af17c_caseD_91:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_10c = 0x91;
        std::pair<char_const*const,int>::pair<char_const(&)[15],int>
                  (local_114,"[hit recovery]",&local_10c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_11c);
        goto switchD_088af17c_caseD_96;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_108,0x10,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_108);
      break;
    case 0x96:
switchD_088af17c_caseD_96:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_e4 = 0x96;
        std::pair<char_const*const,int>::pair<char_const(&)[28],int>
                  (local_ec,"[equipment magical defence]",&local_e4);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_f4);
        goto switchD_088af17c_caseD_9c;
      }
      ScanInt((bool *)0x0);
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_e0,0x11,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_e0);
      break;
    case 0x9c:
switchD_088af17c_caseD_9c:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_bc = 0x9c;
        std::pair<char_const*const,int>::pair<char_const(&)[29],int>
                  (local_c4,"[equipment physical defence]",&local_bc);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_cc);
        goto switchD_088af17c_caseD_a2;
      }
      ScanInt((bool *)0x0);
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_b8,0x12,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_b8);
      break;
    case 0xa2:
switchD_088af17c_caseD_a2:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_94 = 0xa2;
        std::pair<char_const*const,int>::pair<char_const(&)[13],int>
                  (local_9c,"[jump power]",&local_94);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_a4);
        goto switchD_088af17c_caseD_a7;
      }
      local_28 = ScanInt((bool *)0x0);
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_90,0x13,local_28,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_90);
      break;
    case 0xa7:
switchD_088af17c_caseD_a7:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_6c = 0xa7;
        std::pair<char_const*const,int>::pair<char_const(&)[24],int>
                  (local_74,"[physical critical hit]",&local_6c);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_7c);
        goto switchD_088af17c_caseD_ac;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_68,0x14,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_68);
      break;
    case 0xac:
switchD_088af17c_caseD_ac:
      if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
          ::__inited != '\x01') {
        local_44 = 0xac;
        std::pair<char_const*const,int>::pair<char_const(&)[23],int>
                  (local_4c,"[magical critical hit]",&local_44);
        std::map<char_const*,int,less_TCHAR,std::allocator<std::pair<char_const*const,int>>>::insert
                  (local_54);
        goto switchD_088af17c_caseD_1;
      }
      lVar3 = (longdouble)ScanFloat((bool *)0x0);
      local_24 = (float)lVar3;
      local_2c = ScanInt((bool *)0x0);
      STAvatarHiddenAbilityVariation::STAvatarHiddenAbilityVariation
                (local_40,0x15,local_24,local_2c);
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      push_back((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                 *)param_1,local_40);
    }
    if (parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
        ::__inited == '\x01') {
      return 1;
    }
    SpinLock::leave((SpinLock *)
                    &parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
                     ::__init_lock);
    parseAbility(std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>&,std::string&)
    ::__inited = '\x01';
  } while( true );
}

```

---

## ~AvatarFixedHiddenOption

```asm
// === 088aed5e ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption  [0x088aed5e-0x88aedcd] ===
 88aed5e:	55                   	push   %ebp
 88aed5f:	89 e5                	mov    %esp,%ebp
 88aed61:	57                   	push   %edi
 88aed62:	56                   	push   %esi
 88aed63:	53                   	push   %ebx
 88aed64:	83 ec 1c             	sub    $0x1c,%esp
 88aed67:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed6a:	89 04 24             	mov    %eax,(%esp)
 88aed6d:	e8 6e 13 00 00       	call   88b00e0 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption11clearScriptEv>
 88aed72:	eb 31                	jmp    88aeda5 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x47>
 88aed74:	89 d6                	mov    %edx,%esi
 88aed76:	89 c7                	mov    %eax,%edi
 88aed78:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed7b:	85 c0                	test   %eax,%eax
 88aed7d:	74 1a                	je     88aed99 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x3b>
 88aed7f:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed82:	8d 58 48             	lea    0x48(%eax),%ebx
 88aed85:	8b 45 08             	mov    0x8(%ebp),%eax
 88aed88:	39 c3                	cmp    %eax,%ebx
 88aed8a:	74 0d                	je     88aed99 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x3b>
 88aed8c:	83 eb 0c             	sub    $0xc,%ebx
 88aed8f:	89 1c 24             	mov    %ebx,(%esp)
 88aed92:	e8 c7 14 00 00       	call   88b025e <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EED1Ev>
 88aed97:	eb ec                	jmp    88aed85 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x27>
 88aed99:	89 f8                	mov    %edi,%eax
 88aed9b:	89 f2                	mov    %esi,%edx
 88aed9d:	89 04 24             	mov    %eax,(%esp)
 88aeda0:	e8 ab 49 23 00       	call   8ae3750 <_Unwind_Resume>
 88aeda5:	8b 45 08             	mov    0x8(%ebp),%eax
 88aeda8:	85 c0                	test   %eax,%eax
 88aedaa:	74 1a                	je     88aedc6 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x68>
 88aedac:	8b 45 08             	mov    0x8(%ebp),%eax
 88aedaf:	8d 58 48             	lea    0x48(%eax),%ebx
 88aedb2:	8b 45 08             	mov    0x8(%ebp),%eax
 88aedb5:	39 c3                	cmp    %eax,%ebx
 88aedb7:	74 0d                	je     88aedc6 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x68>
 88aedb9:	83 eb 0c             	sub    $0xc,%ebx
 88aedbc:	89 1c 24             	mov    %ebx,(%esp)
 88aedbf:	e8 9a 14 00 00       	call   88b025e <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EED1Ev>
 88aedc4:	eb ec                	jmp    88aedb2 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev+0x54>
 88aedc6:	83 c4 1c             	add    $0x1c,%esp
 88aedc9:	5b                   	pop    %ebx
 88aedca:	5e                   	pop    %esi
 88aedcb:	5f                   	pop    %edi
 88aedcc:	5d                   	pop    %ebp
 88aedcd:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption @ 0x88aed5e

/* ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption() */

void __thiscall
ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption(AvatarFixedHiddenOption *this)

{
  vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *this_00;
  
                    /* try { // try from 088aed6d to 088aed71 has its CatchHandler @ 088aed74 */
  clearScript(this);
  if (this != (AvatarFixedHiddenOption *)0x0) {
    this_00 = (vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               *)(this + 0x48);
    while (this_00 !=
           (vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>> *)
           this) {
      this_00 = this_00 + -0xc;
      std::vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
      ~vector(this_00);
    }
  }
  return;
}

```


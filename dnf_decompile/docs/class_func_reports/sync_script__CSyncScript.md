# sync_script__CSyncScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 51

---

## CSyncScript

```asm
// === 0861cc6c sync_script::CSyncScript::CSyncScript  [0x0861cc6c-0x861cd79] ===
 861cc6c:	55                   	push   %ebp
 861cc6d:	89 e5                	mov    %esp,%ebp
 861cc6f:	56                   	push   %esi
 861cc70:	53                   	push   %ebx
 861cc71:	83 ec 10             	sub    $0x10,%esp
 861cc74:	8b 45 08             	mov    0x8(%ebp),%eax
 861cc77:	83 c0 04             	add    $0x4,%eax
 861cc7a:	89 04 24             	mov    %eax,(%esp)
 861cc7d:	e8 90 80 ac ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 861cc82:	8b 45 08             	mov    0x8(%ebp),%eax
 861cc85:	83 c0 10             	add    $0x10,%eax
 861cc88:	89 04 24             	mov    %eax,(%esp)
 861cc8b:	e8 82 80 ac ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 861cc90:	8b 45 08             	mov    0x8(%ebp),%eax
 861cc93:	83 c0 1c             	add    $0x1c,%eax
 861cc96:	89 04 24             	mov    %eax,(%esp)
 861cc99:	e8 22 b3 00 00       	call   8627fc0 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEC1Ev>
 861cc9e:	8b 45 08             	mov    0x8(%ebp),%eax
 861cca1:	83 c0 34             	add    $0x34,%eax
 861cca4:	89 04 24             	mov    %eax,(%esp)
 861cca7:	e8 8e b3 00 00       	call   862803a <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEC1Ev>
 861ccac:	8b 45 08             	mov    0x8(%ebp),%eax
 861ccaf:	83 c0 4c             	add    $0x4c,%eax
 861ccb2:	89 04 24             	mov    %eax,(%esp)
 861ccb5:	e8 fa b3 00 00       	call   86280b4 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEC1Ev>
 861ccba:	8b 45 08             	mov    0x8(%ebp),%eax
 861ccbd:	83 c0 64             	add    $0x64,%eax
 861ccc0:	89 04 24             	mov    %eax,(%esp)
 861ccc3:	e8 66 b4 00 00       	call   862812e <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEC1Ev>
 861ccc8:	8b 45 08             	mov    0x8(%ebp),%eax
 861cccb:	83 c0 7c             	add    $0x7c,%eax
 861ccce:	89 04 24             	mov    %eax,(%esp)
 861ccd1:	e8 58 b4 00 00       	call   862812e <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEC1Ev>
 861ccd6:	8b 45 08             	mov    0x8(%ebp),%eax
 861ccd9:	c6 00 00             	movb   $0x0,(%eax)
 861ccdc:	83 c4 10             	add    $0x10,%esp
 861ccdf:	5b                   	pop    %ebx
 861cce0:	5e                   	pop    %esi
 861cce1:	5d                   	pop    %ebp
 861cce2:	c3                   	ret
 861cce3:	89 d3                	mov    %edx,%ebx
 861cce5:	89 c6                	mov    %eax,%esi
 861cce7:	8b 45 08             	mov    0x8(%ebp),%eax
 861ccea:	83 c0 64             	add    $0x64,%eax
 861cced:	89 04 24             	mov    %eax,(%esp)
 861ccf0:	e8 b5 ae 00 00       	call   8627baa <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEED1Ev>
 861ccf5:	89 f0                	mov    %esi,%eax
 861ccf7:	89 da                	mov    %ebx,%edx
 861ccf9:	eb 00                	jmp    861ccfb <_ZN11sync_script11CSyncScriptC1Ev+0x8f>
 861ccfb:	89 d3                	mov    %edx,%ebx
 861ccfd:	89 c6                	mov    %eax,%esi
 861ccff:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd02:	83 c0 4c             	add    $0x4c,%eax
 861cd05:	89 04 24             	mov    %eax,(%esp)
 861cd08:	e8 89 ae 00 00       	call   8627b96 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861cd0d:	89 f0                	mov    %esi,%eax
 861cd0f:	89 da                	mov    %ebx,%edx
 861cd11:	eb 00                	jmp    861cd13 <_ZN11sync_script11CSyncScriptC1Ev+0xa7>
 861cd13:	89 d3                	mov    %edx,%ebx
 861cd15:	89 c6                	mov    %eax,%esi
 861cd17:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd1a:	83 c0 34             	add    $0x34,%eax
 861cd1d:	89 04 24             	mov    %eax,(%esp)
 861cd20:	e8 5d ae 00 00       	call   8627b82 <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861cd25:	89 f0                	mov    %esi,%eax
 861cd27:	89 da                	mov    %ebx,%edx
 861cd29:	eb 00                	jmp    861cd2b <_ZN11sync_script11CSyncScriptC1Ev+0xbf>
 861cd2b:	89 d3                	mov    %edx,%ebx
 861cd2d:	89 c6                	mov    %eax,%esi
 861cd2f:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd32:	83 c0 1c             	add    $0x1c,%eax
 861cd35:	89 04 24             	mov    %eax,(%esp)
 861cd38:	e8 31 ae 00 00       	call   8627b6e <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 861cd3d:	89 f0                	mov    %esi,%eax
 861cd3f:	89 da                	mov    %ebx,%edx
 861cd41:	eb 00                	jmp    861cd43 <_ZN11sync_script11CSyncScriptC1Ev+0xd7>
 861cd43:	89 d3                	mov    %edx,%ebx
 861cd45:	89 c6                	mov    %eax,%esi
 861cd47:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd4a:	83 c0 10             	add    $0x10,%eax
 861cd4d:	89 04 24             	mov    %eax,(%esp)
 861cd50:	e8 d1 7f ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861cd55:	89 f0                	mov    %esi,%eax
 861cd57:	89 da                	mov    %ebx,%edx
 861cd59:	eb 00                	jmp    861cd5b <_ZN11sync_script11CSyncScriptC1Ev+0xef>
 861cd5b:	89 d3                	mov    %edx,%ebx
 861cd5d:	89 c6                	mov    %eax,%esi
 861cd5f:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd62:	83 c0 04             	add    $0x4,%eax
 861cd65:	89 04 24             	mov    %eax,(%esp)
 861cd68:	e8 b9 7f ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861cd6d:	89 f0                	mov    %esi,%eax
 861cd6f:	89 da                	mov    %ebx,%edx
 861cd71:	89 04 24             	mov    %eax,(%esp)
 861cd74:	e8 d7 69 4c 00       	call   8ae3750 <_Unwind_Resume>
 861cd79:	90                   	nop

```

```c
// sync_script::CSyncScript::CSyncScript @ 0x861cc6c

/* sync_script::CSyncScript::CSyncScript() */

void __thiscall sync_script::CSyncScript::CSyncScript(CSyncScript *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
                    /* try { // try from 0861cc8b to 0861cc8f has its CatchHandler @ 0861cd5b */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
                    /* try { // try from 0861cc99 to 0861cc9d has its CatchHandler @ 0861cd43 */
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x1c));
                    /* try { // try from 0861cca7 to 0861ccab has its CatchHandler @ 0861cd2b */
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x34));
                    /* try { // try from 0861ccb5 to 0861ccb9 has its CatchHandler @ 0861cd13 */
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x4c));
                    /* try { // try from 0861ccc3 to 0861ccc7 has its CatchHandler @ 0861ccfb */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
         *)(this + 100));
                    /* try { // try from 0861ccd1 to 0861ccd5 has its CatchHandler @ 0861cce3 */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
         *)(this + 0x7c));
  *this = (CSyncScript)0x0;
  return;
}

```

---

## GetAttachType

```asm
// === 0861d3ec sync_script::CSyncScript::GetAttachType  [0x0861d3ec-0x861d42d] ===
 861d3ec:	55                   	push   %ebp
 861d3ed:	89 e5                	mov    %esp,%ebp
 861d3ef:	83 7d 0c 05          	cmpl   $0x5,0xc(%ebp)
 861d3f3:	77 31                	ja     861d426 <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3a>
 861d3f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d3f8:	c1 e0 02             	shl    $0x2,%eax
 861d3fb:	8b 80 e8 2e ce 08    	mov    0x8ce2ee8(%eax),%eax
 861d401:	ff e0                	jmp    *%eax
 861d403:	b8 c9 2e ce 08       	mov    $0x8ce2ec9,%eax
 861d408:	eb 21                	jmp    861d42b <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3f>
 861d40a:	b8 ce 2e ce 08       	mov    $0x8ce2ece,%eax
 861d40f:	eb 1a                	jmp    861d42b <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3f>
 861d411:	b8 d3 2e ce 08       	mov    $0x8ce2ed3,%eax
 861d416:	eb 13                	jmp    861d42b <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3f>
 861d418:	b8 dc 2e ce 08       	mov    $0x8ce2edc,%eax
 861d41d:	eb 0c                	jmp    861d42b <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3f>
 861d41f:	b8 e1 2e ce 08       	mov    $0x8ce2ee1,%eax
 861d424:	eb 05                	jmp    861d42b <_ZN11sync_script11CSyncScript13GetAttachTypeEi+0x3f>
 861d426:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 861d42b:	5d                   	pop    %ebp
 861d42c:	c3                   	ret
 861d42d:	90                   	nop

```

```c
// sync_script::CSyncScript::GetAttachType @ 0x861d3ec

/* sync_script::CSyncScript::GetAttachType(int) */

undefined * __thiscall sync_script::CSyncScript::GetAttachType(CSyncScript *this,int param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = &DAT_08ce2ec9;
    break;
  case 1:
    puVar1 = &DAT_08ce2ece;
    break;
  case 2:
    puVar1 = &DAT_08ce2ed3;
    break;
  case 3:
    puVar1 = &DAT_08ce2edc;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
    break;
  case 5:
    puVar1 = &DAT_08ce2ee1;
  }
  return puVar1;
}

```

---

## GetAttackElement

```asm
// === 0861d42e sync_script::CSyncScript::GetAttackElement  [0x0861d42e-0x861d471] ===
 861d42e:	55                   	push   %ebp
 861d42f:	89 e5                	mov    %esp,%ebp
 861d431:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d434:	8b 80 40 01 00 00    	mov    0x140(%eax),%eax
 861d43a:	83 f8 04             	cmp    $0x4,%eax
 861d43d:	77 2c                	ja     861d46b <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x3d>
 861d43f:	8b 04 85 10 2f ce 08 	mov    0x8ce2f10(,%eax,4),%eax
 861d446:	ff e0                	jmp    *%eax
 861d448:	b8 00 2f ce 08       	mov    $0x8ce2f00,%eax
 861d44d:	eb 21                	jmp    861d470 <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x42>
 861d44f:	b8 03 2f ce 08       	mov    $0x8ce2f03,%eax
 861d454:	eb 1a                	jmp    861d470 <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x42>
 861d456:	b8 06 2f ce 08       	mov    $0x8ce2f06,%eax
 861d45b:	eb 13                	jmp    861d470 <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x42>
 861d45d:	b8 09 2f ce 08       	mov    $0x8ce2f09,%eax
 861d462:	eb 0c                	jmp    861d470 <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x42>
 861d464:	b8 0c 2f ce 08       	mov    $0x8ce2f0c,%eax
 861d469:	eb 05                	jmp    861d470 <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo+0x42>
 861d46b:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 861d470:	5d                   	pop    %ebp
 861d471:	c3                   	ret

```

```c
// sync_script::CSyncScript::GetAttackElement @ 0x861d42e

/* sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*) */

undefined * __thiscall
sync_script::CSyncScript::GetAttackElement(CSyncScript *this,EquipmentParameterInfo *param_1)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    puVar1 = &DAT_08ce2f00;
    break;
  case 1:
    puVar1 = &DAT_08ce2f03;
    break;
  case 2:
    puVar1 = &DAT_08ce2f06;
    break;
  case 3:
    puVar1 = &DAT_08ce2f09;
    break;
  case 4:
    puVar1 = &DAT_08ce2f0c;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
  }
  return puVar1;
}

```

---

## GetLevelUpSkill

```asm
// === 0861d472 sync_script::CSyncScript::GetLevelUpSkill  [0x0861d472-0x861d705] ===
 861d472:	55                   	push   %ebp
 861d473:	89 e5                	mov    %esp,%ebp
 861d475:	57                   	push   %edi
 861d476:	56                   	push   %esi
 861d477:	53                   	push   %ebx
 861d478:	81 ec 2c 04 00 00    	sub    $0x42c,%esp
 861d47e:	b8 e0 34 47 09       	mov    $0x94734e0,%eax
 861d483:	0f b6 00             	movzbl (%eax),%eax
 861d486:	84 c0                	test   %al,%al
 861d488:	75 71                	jne    861d4fb <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x89>
 861d48a:	c7 04 24 e0 34 47 09 	movl   $0x94734e0,(%esp)
 861d491:	e8 9a 7e 10 00       	call   8725330 <__cxa_guard_acquire>
 861d496:	85 c0                	test   %eax,%eax
 861d498:	0f 95 c0             	setne  %al
 861d49b:	84 c0                	test   %al,%al
 861d49d:	74 5c                	je     861d4fb <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x89>
 861d49f:	bb 00 00 00 00       	mov    $0x0,%ebx
 861d4a4:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d4ab:	e8 20 91 0e 00       	call   87065d0 <_ZNSsC1Ev>
 861d4b0:	c7 04 24 e0 34 47 09 	movl   $0x94734e0,(%esp)
 861d4b7:	e8 94 7d 10 00       	call   8725250 <__cxa_guard_release>
 861d4bc:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 861d4c1:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 861d4c8:	08 
 861d4c9:	c7 44 24 04 f4 37 47 	movl   $0x94737f4,0x4(%esp)
 861d4d0:	09 
 861d4d1:	89 04 24             	mov    %eax,(%esp)
 861d4d4:	e8 f7 08 a6 ff       	call   807ddd0 <__cxa_atexit@plt>
 861d4d9:	eb 20                	jmp    861d4fb <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x89>
 861d4db:	89 d6                	mov    %edx,%esi
 861d4dd:	89 c7                	mov    %eax,%edi
 861d4df:	84 db                	test   %bl,%bl
 861d4e1:	75 0c                	jne    861d4ef <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x7d>
 861d4e3:	c7 04 24 e0 34 47 09 	movl   $0x94734e0,(%esp)
 861d4ea:	e8 d1 7d 10 00       	call   87252c0 <__cxa_guard_abort>
 861d4ef:	89 f8                	mov    %edi,%eax
 861d4f1:	89 f2                	mov    %esi,%edx
 861d4f3:	89 04 24             	mov    %eax,(%esp)
 861d4f6:	e8 55 62 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d4fb:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d502:	e8 c9 b8 0e 00       	call   8708dd0 <_ZNSs5clearEv>
 861d507:	8b 55 10             	mov    0x10(%ebp),%edx
 861d50a:	89 d0                	mov    %edx,%eax
 861d50c:	01 c0                	add    %eax,%eax
 861d50e:	01 d0                	add    %edx,%eax
 861d510:	c1 e0 02             	shl    $0x2,%eax
 861d513:	05 00 04 00 00       	add    $0x400,%eax
 861d518:	03 45 0c             	add    0xc(%ebp),%eax
 861d51b:	83 c0 0c             	add    $0xc,%eax
 861d51e:	89 04 24             	mov    %eax,(%esp)
 861d521:	e8 4a 38 b6 ff       	call   8180d70 <_ZNKSt6vectorI12LevelUpSkillSaIS0_EE4sizeEv>
 861d526:	89 45 e0             	mov    %eax,-0x20(%ebp)
 861d529:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 861d530:	e9 a9 01 00 00       	jmp    861d6de <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x26c>
 861d535:	c7 44 24 04 24 2f ce 	movl   $0x8ce2f24,0x4(%esp)
 861d53c:	08 
 861d53d:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d544:	e8 e7 aa 0e 00       	call   8708030 <_ZNSspLEPKc>
 861d549:	8d 45 df             	lea    -0x21(%ebp),%eax
 861d54c:	89 04 24             	mov    %eax,(%esp)
 861d54f:	e8 7c 2b 0c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 861d554:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 861d557:	8b 55 10             	mov    0x10(%ebp),%edx
 861d55a:	89 d0                	mov    %edx,%eax
 861d55c:	01 c0                	add    %eax,%eax
 861d55e:	01 d0                	add    %edx,%eax
 861d560:	c1 e0 02             	shl    $0x2,%eax
 861d563:	05 00 04 00 00       	add    $0x400,%eax
 861d568:	03 45 0c             	add    0xc(%ebp),%eax
 861d56b:	83 c0 0c             	add    $0xc,%eax
 861d56e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 861d572:	89 04 24             	mov    %eax,(%esp)
 861d575:	e8 6e b1 00 00       	call   86286e8 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE2atEj>
 861d57a:	8b 00                	mov    (%eax),%eax
 861d57c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d580:	8b 45 08             	mov    0x8(%ebp),%eax
 861d583:	89 04 24             	mov    %eax,(%esp)
 861d586:	e8 51 fd ff ff       	call   861d2dc <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB>
 861d58b:	8d 55 df             	lea    -0x21(%ebp),%edx
 861d58e:	89 54 24 08          	mov    %edx,0x8(%esp)
 861d592:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d596:	8d 45 d8             	lea    -0x28(%ebp),%eax
 861d599:	89 04 24             	mov    %eax,(%esp)
 861d59c:	e8 8f a0 0e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 861d5a1:	eb 1b                	jmp    861d5be <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x14c>
 861d5a3:	89 d3                	mov    %edx,%ebx
 861d5a5:	89 c6                	mov    %eax,%esi
 861d5a7:	8d 45 df             	lea    -0x21(%ebp),%eax
 861d5aa:	89 04 24             	mov    %eax,(%esp)
 861d5ad:	e8 3e 2b 0c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 861d5b2:	89 f0                	mov    %esi,%eax
 861d5b4:	89 da                	mov    %ebx,%edx
 861d5b6:	89 04 24             	mov    %eax,(%esp)
 861d5b9:	e8 92 61 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d5be:	8d 45 df             	lea    -0x21(%ebp),%eax
 861d5c1:	89 04 24             	mov    %eax,(%esp)
 861d5c4:	e8 27 2b 0c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 861d5c9:	c7 44 24 04 28 2e ce 	movl   $0x8ce2e28,0x4(%esp)
 861d5d0:	08 
 861d5d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 861d5d4:	89 04 24             	mov    %eax,(%esp)
 861d5d7:	e8 54 94 0e 00       	call   8706a30 <_ZNKSs7compareEPKc>
 861d5dc:	85 c0                	test   %eax,%eax
 861d5de:	0f 94 c0             	sete   %al
 861d5e1:	84 c0                	test   %al,%al
 861d5e3:	74 16                	je     861d5fb <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x189>
 861d5e5:	c7 44 24 04 26 2f ce 	movl   $0x8ce2f26,0x4(%esp)
 861d5ec:	08 
 861d5ed:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d5f4:	e8 37 aa 0e 00       	call   8708030 <_ZNSspLEPKc>
 861d5f9:	eb 13                	jmp    861d60e <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x19c>
 861d5fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 861d5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d602:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d609:	e8 e2 ab 0e 00       	call   87081f0 <_ZNSspLERKSs>
 861d60e:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 861d615:	00 
 861d616:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861d61d:	00 
 861d61e:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 861d624:	89 04 24             	mov    %eax,(%esp)
 861d627:	e8 94 06 a6 ff       	call   807dcc0 <memset@plt>
 861d62c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 861d62f:	8b 55 10             	mov    0x10(%ebp),%edx
 861d632:	89 d0                	mov    %edx,%eax
 861d634:	01 c0                	add    %eax,%eax
 861d636:	01 d0                	add    %edx,%eax
 861d638:	c1 e0 02             	shl    $0x2,%eax
 861d63b:	05 00 04 00 00       	add    $0x400,%eax
 861d640:	03 45 0c             	add    0xc(%ebp),%eax
 861d643:	83 c0 0c             	add    $0xc,%eax
 861d646:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 861d64a:	89 04 24             	mov    %eax,(%esp)
 861d64d:	e8 96 b0 00 00       	call   86286e8 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE2atEj>
 861d652:	8b 58 08             	mov    0x8(%eax),%ebx
 861d655:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 861d658:	8b 55 10             	mov    0x10(%ebp),%edx
 861d65b:	89 d0                	mov    %edx,%eax
 861d65d:	01 c0                	add    %eax,%eax
 861d65f:	01 d0                	add    %edx,%eax
 861d661:	c1 e0 02             	shl    $0x2,%eax
 861d664:	05 00 04 00 00       	add    $0x400,%eax
 861d669:	03 45 0c             	add    0xc(%ebp),%eax
 861d66c:	83 c0 0c             	add    $0xc,%eax
 861d66f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 861d673:	89 04 24             	mov    %eax,(%esp)
 861d676:	e8 6d b0 00 00       	call   86286e8 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE2atEj>
 861d67b:	8b 40 04             	mov    0x4(%eax),%eax
 861d67e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 861d682:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d686:	c7 44 24 04 2b 2f ce 	movl   $0x8ce2f2b,0x4(%esp)
 861d68d:	08 
 861d68e:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 861d694:	89 04 24             	mov    %eax,(%esp)
 861d697:	e8 a4 0d a6 ff       	call   807e440 <sprintf@plt>
 861d69c:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 861d6a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d6a6:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d6ad:	e8 7e a9 0e 00       	call   8708030 <_ZNSspLEPKc>
 861d6b2:	eb 1b                	jmp    861d6cf <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0x25d>
 861d6b4:	89 d3                	mov    %edx,%ebx
 861d6b6:	89 c6                	mov    %eax,%esi
 861d6b8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 861d6bb:	89 04 24             	mov    %eax,(%esp)
 861d6be:	e8 1d a5 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d6c3:	89 f0                	mov    %esi,%eax
 861d6c5:	89 da                	mov    %ebx,%edx
 861d6c7:	89 04 24             	mov    %eax,(%esp)
 861d6ca:	e8 81 60 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d6cf:	8d 45 d8             	lea    -0x28(%ebp),%eax
 861d6d2:	89 04 24             	mov    %eax,(%esp)
 861d6d5:	e8 06 a5 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d6da:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 861d6de:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d6e1:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 861d6e4:	0f 9c c0             	setl   %al
 861d6e7:	84 c0                	test   %al,%al
 861d6e9:	0f 85 46 fe ff ff    	jne    861d535 <_ZN11sync_script11CSyncScript15GetLevelUpSkillEP17STEquipmentScriptN22EquipmentParameterInfo26ENUM_SKILL_UP_VECTOR_INDEXE+0xc3>
 861d6ef:	c7 04 24 f4 37 47 09 	movl   $0x94737f4,(%esp)
 861d6f6:	e8 f5 8d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861d6fb:	81 c4 2c 04 00 00    	add    $0x42c,%esp
 861d701:	5b                   	pop    %ebx
 861d702:	5e                   	pop    %esi
 861d703:	5f                   	pop    %edi
 861d704:	5d                   	pop    %ebp
 861d705:	c3                   	ret

```

```c
// sync_script::CSyncScript::GetLevelUpSkill @ 0x861d472

/* sync_script::CSyncScript::GetLevelUpSkill(STEquipmentScript*,
   EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX) */

void __thiscall sync_script::CSyncScript::GetLevelUpSkill(CSyncScript *this,int param_1,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char local_42c [1024];
  string local_2c [7];
  allocator<char> local_25;
  int local_24;
  uint local_20;
  
  if (GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)::
      level_up_skill == '\0') {
    iVar2 = __cxa_guard_acquire(&GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                                 ::level_up_skill);
    if (iVar2 != 0) {
                    /* try { // try from 0861d4ab to 0861d4af has its CatchHandler @ 0861d4db */
      std::string::string((string *)
                          &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                           ::level_up_skill);
      __cxa_guard_release(&GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                           ::level_up_skill);
      __cxa_atexit(std::string::~string,
                   &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                    ::level_up_skill,&__dso_handle);
    }
  }
  std::string::clear((string *)
                     &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                      ::level_up_skill);
  local_24 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::size
                       ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                        (param_3 * 0xc + param_1 + 0x40c));
  for (local_20 = 0; (int)local_20 < local_24; local_20 = local_20 + 1) {
    std::string::operator+=
              ((string *)
               &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                ::level_up_skill,"|");
    std::allocator<char>::allocator();
                    /* try { // try from 0861d575 to 0861d5a0 has its CatchHandler @ 0861d5a3 */
    puVar3 = (undefined4 *)
             std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                       ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                        (param_3 * 0xc + param_1 + 0x40c),local_20);
    pcVar4 = (char *)GetUserJob(this,*puVar3);
    std::string::string(local_2c,pcVar4,(allocator *)&local_25);
    std::allocator<char>::~allocator(&local_25);
                    /* try { // try from 0861d5d7 to 0861d6b1 has its CatchHandler @ 0861d6b4 */
    iVar2 = std::string::compare(local_2c,"");
    if (iVar2 == 0) {
      std::string::operator+=
                ((string *)
                 &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                  ::level_up_skill,&DAT_08ce2f26);
    }
    else {
      std::string::operator+=
                ((string *)
                 &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                  ::level_up_skill,local_2c);
    }
    memset(local_42c,0,0x400);
    iVar2 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                      ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                       (param_3 * 0xc + param_1 + 0x40c),local_20);
    uVar1 = *(undefined4 *)(iVar2 + 8);
    iVar2 = std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::at
                      ((vector<LevelUpSkill,std::allocator<LevelUpSkill>> *)
                       (param_3 * 0xc + param_1 + 0x40c),local_20);
    sprintf(local_42c,"| %d| %d",*(undefined4 *)(iVar2 + 4),uVar1);
    std::string::operator+=
              ((string *)
               &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                ::level_up_skill,local_42c);
    std::string::~string(local_2c);
  }
  std::string::c_str((string *)
                     &GetLevelUpSkill(STEquipmentScript*,EquipmentParameterInfo::ENUM_SKILL_UP_VECTOR_INDEX)
                      ::level_up_skill);
  return;
}

```

---

## GetType

```asm
// === 0861cf0a sync_script::CSyncScript::GetType  [0x0861cf0a-0x861d2db] ===
 861cf0a:	55                   	push   %ebp
 861cf0b:	89 e5                	mov    %esp,%ebp
 861cf0d:	56                   	push   %esi
 861cf0e:	53                   	push   %ebx
 861cf0f:	83 ec 70             	sub    $0x70,%esp
 861cf12:	8b 45 20             	mov    0x20(%ebp),%eax
 861cf15:	88 45 a4             	mov    %al,-0x5c(%ebp)
 861cf18:	8b 45 0c             	mov    0xc(%ebp),%eax
 861cf1b:	89 04 24             	mov    %eax,(%esp)
 861cf1e:	e8 7d 97 0e 00       	call   87066a0 <_ZNKSs5emptyEv>
 861cf23:	84 c0                	test   %al,%al
 861cf25:	74 0a                	je     861cf31 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x27>
 861cf27:	bb 00 00 00 00       	mov    $0x0,%ebx
 861cf2c:	e9 9f 03 00 00       	jmp    861d2d0 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x3c6>
 861cf31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861cf38:	00 
 861cf39:	c7 44 24 04 56 2e ce 	movl   $0x8ce2e56,0x4(%esp)
 861cf40:	08 
 861cf41:	8b 45 0c             	mov    0xc(%ebp),%eax
 861cf44:	89 04 24             	mov    %eax,(%esp)
 861cf47:	e8 44 a0 0e 00       	call   8706f90 <_ZNKSs13find_first_ofEPKcj>
 861cf4c:	85 c0                	test   %eax,%eax
 861cf4e:	0f 95 c0             	setne  %al
 861cf51:	84 c0                	test   %al,%al
 861cf53:	74 0a                	je     861cf5f <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x55>
 861cf55:	bb 00 00 00 00       	mov    $0x0,%ebx
 861cf5a:	e9 71 03 00 00       	jmp    861d2d0 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x3c6>
 861cf5f:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 861cf66:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 861cf69:	8b 55 0c             	mov    0xc(%ebp),%edx
 861cf6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cf70:	89 04 24             	mov    %eax,(%esp)
 861cf73:	e8 b8 bf 0e 00       	call   8708f30 <_ZNSs5beginEv>
 861cf78:	83 ec 04             	sub    $0x4,%esp
 861cf7b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 861cf7e:	8d 55 c0             	lea    -0x40(%ebp),%edx
 861cf81:	89 54 24 08          	mov    %edx,0x8(%esp)
 861cf85:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 861cf88:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cf8c:	89 04 24             	mov    %eax,(%esp)
 861cf8f:	e8 64 b2 00 00       	call   86281f8 <_ZNK9__gnu_cxx17__normal_iteratorIPcSsEplERKi>
 861cf94:	83 ec 04             	sub    $0x4,%esp
 861cf97:	8d 45 c8             	lea    -0x38(%ebp),%eax
 861cf9a:	8b 55 0c             	mov    0xc(%ebp),%edx
 861cf9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cfa1:	89 04 24             	mov    %eax,(%esp)
 861cfa4:	e8 87 bf 0e 00       	call   8708f30 <_ZNSs5beginEv>
 861cfa9:	83 ec 04             	sub    $0x4,%esp
 861cfac:	8d 45 b8             	lea    -0x48(%ebp),%eax
 861cfaf:	8b 55 bc             	mov    -0x44(%ebp),%edx
 861cfb2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861cfb6:	8b 55 c8             	mov    -0x38(%ebp),%edx
 861cfb9:	89 54 24 08          	mov    %edx,0x8(%esp)
 861cfbd:	8b 55 0c             	mov    0xc(%ebp),%edx
 861cfc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cfc4:	89 04 24             	mov    %eax,(%esp)
 861cfc7:	e8 54 ba 0e 00       	call   8708a20 <_ZNSs5eraseEN9__gnu_cxx17__normal_iteratorIPcSsEES2_>
 861cfcc:	83 ec 04             	sub    $0x4,%esp
 861cfcf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 861cfd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 861cfd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cfd9:	89 04 24             	mov    %eax,(%esp)
 861cfdc:	e8 0f bf 0e 00       	call   8708ef0 <_ZNSs3endEv>
 861cfe1:	83 ec 04             	sub    $0x4,%esp
 861cfe4:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 861cfeb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 861cfee:	8b 55 0c             	mov    0xc(%ebp),%edx
 861cff1:	89 54 24 04          	mov    %edx,0x4(%esp)
 861cff5:	89 04 24             	mov    %eax,(%esp)
 861cff8:	e8 f3 be 0e 00       	call   8708ef0 <_ZNSs3endEv>
 861cffd:	83 ec 04             	sub    $0x4,%esp
 861d000:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 861d003:	8d 55 d8             	lea    -0x28(%ebp),%edx
 861d006:	89 54 24 08          	mov    %edx,0x8(%esp)
 861d00a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 861d00d:	89 54 24 04          	mov    %edx,0x4(%esp)
 861d011:	89 04 24             	mov    %eax,(%esp)
 861d014:	e8 13 b2 00 00       	call   862822c <_ZNK9__gnu_cxx17__normal_iteratorIPcSsEmiERKi>
 861d019:	83 ec 04             	sub    $0x4,%esp
 861d01c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 861d01f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 861d022:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861d026:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 861d029:	89 54 24 08          	mov    %edx,0x8(%esp)
 861d02d:	8b 55 0c             	mov    0xc(%ebp),%edx
 861d030:	89 54 24 04          	mov    %edx,0x4(%esp)
 861d034:	89 04 24             	mov    %eax,(%esp)
 861d037:	e8 e4 b9 0e 00       	call   8708a20 <_ZNSs5eraseEN9__gnu_cxx17__normal_iteratorIPcSsEES2_>
 861d03c:	83 ec 04             	sub    $0x4,%esp
 861d03f:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 861d042:	89 04 24             	mov    %eax,(%esp)
 861d045:	e8 86 30 0c 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 861d04a:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 861d04d:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d051:	c7 44 24 04 58 2e ce 	movl   $0x8ce2e58,0x4(%esp)
 861d058:	08 
 861d059:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d05c:	89 04 24             	mov    %eax,(%esp)
 861d05f:	e8 cc a5 0e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 861d064:	eb 1b                	jmp    861d081 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x177>
 861d066:	89 d3                	mov    %edx,%ebx
 861d068:	89 c6                	mov    %eax,%esi
 861d06a:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 861d06d:	89 04 24             	mov    %eax,(%esp)
 861d070:	e8 7b 30 0c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 861d075:	89 f0                	mov    %esi,%eax
 861d077:	89 da                	mov    %ebx,%edx
 861d079:	89 04 24             	mov    %eax,(%esp)
 861d07c:	e8 cf 66 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d081:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 861d084:	89 04 24             	mov    %eax,(%esp)
 861d087:	e8 64 30 0c 00       	call   86e00f0 <_ZNSaIcED1Ev>
 861d08c:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 861d090:	83 f0 01             	xor    $0x1,%eax
 861d093:	84 c0                	test   %al,%al
 861d095:	74 1e                	je     861d0b5 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x1ab>
 861d097:	c7 44 24 04 63 2e ce 	movl   $0x8ce2e63,0x4(%esp)
 861d09e:	08 
 861d09f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d0a2:	89 04 24             	mov    %eax,(%esp)
 861d0a5:	e8 86 99 0e 00       	call   8706a30 <_ZNKSs7compareEPKc>
 861d0aa:	85 c0                	test   %eax,%eax
 861d0ac:	75 07                	jne    861d0b5 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x1ab>
 861d0ae:	b8 01 00 00 00       	mov    $0x1,%eax
 861d0b3:	eb 05                	jmp    861d0ba <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x1b0>
 861d0b5:	b8 00 00 00 00       	mov    $0x0,%eax
 861d0ba:	84 c0                	test   %al,%al
 861d0bc:	74 14                	je     861d0d2 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x1c8>
 861d0be:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d0c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d0c5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d0c8:	89 04 24             	mov    %eax,(%esp)
 861d0cb:	e8 20 b1 0e 00       	call   87081f0 <_ZNSspLERKSs>
 861d0d0:	eb 12                	jmp    861d0e4 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x1da>
 861d0d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d0d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d0d9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d0dc:	89 04 24             	mov    %eax,(%esp)
 861d0df:	e8 1c ac 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 861d0e4:	8b 45 08             	mov    0x8(%ebp),%eax
 861d0e7:	8d 50 1c             	lea    0x1c(%eax),%edx
 861d0ea:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d0ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d0f1:	89 14 24             	mov    %edx,(%esp)
 861d0f4:	e8 af b1 00 00       	call   86282a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 861d0f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d0fd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 861d100:	89 04 24             	mov    %eax,(%esp)
 861d103:	e8 b6 aa 00 00       	call   8627bbe <_ZN11sync_script11CSyncScript9SITEMTYPEC1ERKS1_>
 861d108:	8b 45 08             	mov    0x8(%ebp),%eax
 861d10b:	83 c0 04             	add    $0x4,%eax
 861d10e:	89 04 24             	mov    %eax,(%esp)
 861d111:	e8 8a 24 a6 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 861d116:	85 c0                	test   %eax,%eax
 861d118:	74 28                	je     861d142 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x238>
 861d11a:	0f b6 5d a9          	movzbl -0x57(%ebp),%ebx
 861d11e:	8b 45 08             	mov    0x8(%ebp),%eax
 861d121:	83 c0 04             	add    $0x4,%eax
 861d124:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861d12b:	00 
 861d12c:	89 04 24             	mov    %eax,(%esp)
 861d12f:	e8 7c 7c ac ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 861d134:	0f b6 00             	movzbl (%eax),%eax
 861d137:	38 c3                	cmp    %al,%bl
 861d139:	75 07                	jne    861d142 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x238>
 861d13b:	b8 01 00 00 00       	mov    $0x1,%eax
 861d140:	eb 05                	jmp    861d147 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x23d>
 861d142:	b8 00 00 00 00       	mov    $0x0,%eax
 861d147:	84 c0                	test   %al,%al
 861d149:	74 42                	je     861d18d <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x283>
 861d14b:	8b 45 14             	mov    0x14(%ebp),%eax
 861d14e:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d152:	8b 45 10             	mov    0x10(%ebp),%eax
 861d155:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d159:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 861d15c:	89 04 24             	mov    %eax,(%esp)
 861d15f:	e8 7e 99 00 00       	call   8626ae2 <_ZN11sync_script11CSyncScript11SWEAPONTYPEC1E17ENUM_CHARACTERJOBi>
 861d164:	8b 45 08             	mov    0x8(%ebp),%eax
 861d167:	8d 50 34             	lea    0x34(%eax),%edx
 861d16a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 861d16d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d171:	89 14 24             	mov    %edx,(%esp)
 861d174:	e8 91 b2 00 00       	call   862840a <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEixERS7_>
 861d179:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d17d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 861d180:	89 04 24             	mov    %eax,(%esp)
 861d183:	e8 a0 aa 00 00       	call   8627c28 <_ZN11sync_script11CSyncScript9SITEMTYPEaSERKS1_>
 861d188:	e9 de 00 00 00       	jmp    861d26b <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x361>
 861d18d:	8b 45 08             	mov    0x8(%ebp),%eax
 861d190:	83 c0 04             	add    $0x4,%eax
 861d193:	89 04 24             	mov    %eax,(%esp)
 861d196:	e8 05 24 a6 ff       	call   807f5a0 <_ZNKSt6vectorIhSaIhEE4sizeEv>
 861d19b:	83 f8 01             	cmp    $0x1,%eax
 861d19e:	76 28                	jbe    861d1c8 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x2be>
 861d1a0:	0f b6 5d a9          	movzbl -0x57(%ebp),%ebx
 861d1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 861d1a7:	83 c0 04             	add    $0x4,%eax
 861d1aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861d1b1:	00 
 861d1b2:	89 04 24             	mov    %eax,(%esp)
 861d1b5:	e8 f6 7b ac ff       	call   80e4db0 <_ZNSt6vectorIhSaIhEEixEj>
 861d1ba:	0f b6 00             	movzbl (%eax),%eax
 861d1bd:	38 c3                	cmp    %al,%bl
 861d1bf:	75 07                	jne    861d1c8 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x2be>
 861d1c1:	b8 01 00 00 00       	mov    $0x1,%eax
 861d1c6:	eb 05                	jmp    861d1cd <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x2c3>
 861d1c8:	b8 00 00 00 00       	mov    $0x0,%eax
 861d1cd:	84 c0                	test   %al,%al
 861d1cf:	0f 84 96 00 00 00    	je     861d26b <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x361>
 861d1d5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d1d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d1dc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 861d1df:	89 04 24             	mov    %eax,(%esp)
 861d1e2:	e8 c9 a7 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 861d1e7:	8b 45 14             	mov    0x14(%ebp),%eax
 861d1ea:	0f b6 c0             	movzbl %al,%eax
 861d1ed:	8d 55 f4             	lea    -0xc(%ebp),%edx
 861d1f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 861d1f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d1f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 861d1fb:	89 04 24             	mov    %eax,(%esp)
 861d1fe:	e8 3b 99 00 00       	call   8626b3e <_ZN11sync_script11CSyncScript10SARMORTYPEC1EhSs>
 861d203:	8b 45 08             	mov    0x8(%ebp),%eax
 861d206:	8d 50 4c             	lea    0x4c(%eax),%edx
 861d209:	8d 45 ec             	lea    -0x14(%ebp),%eax
 861d20c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d210:	89 14 24             	mov    %edx,(%esp)
 861d213:	e8 84 b3 00 00       	call   862859c <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEixERS7_>
 861d218:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d21c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 861d21f:	89 04 24             	mov    %eax,(%esp)
 861d222:	e8 01 aa 00 00       	call   8627c28 <_ZN11sync_script11CSyncScript9SITEMTYPEaSERKS1_>
 861d227:	eb 15                	jmp    861d23e <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x334>
 861d229:	89 d3                	mov    %edx,%ebx
 861d22b:	89 c6                	mov    %eax,%esi
 861d22d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 861d230:	89 04 24             	mov    %eax,(%esp)
 861d233:	e8 46 aa 00 00       	call   8627c7e <_ZN11sync_script11CSyncScript10SARMORTYPED1Ev>
 861d238:	89 f0                	mov    %esi,%eax
 861d23a:	89 da                	mov    %ebx,%edx
 861d23c:	eb 0d                	jmp    861d24b <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x341>
 861d23e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 861d241:	89 04 24             	mov    %eax,(%esp)
 861d244:	e8 35 aa 00 00       	call   8627c7e <_ZN11sync_script11CSyncScript10SARMORTYPED1Ev>
 861d249:	eb 15                	jmp    861d260 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x356>
 861d24b:	89 d3                	mov    %edx,%ebx
 861d24d:	89 c6                	mov    %eax,%esi
 861d24f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 861d252:	89 04 24             	mov    %eax,(%esp)
 861d255:	e8 86 a9 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d25a:	89 f0                	mov    %esi,%eax
 861d25c:	89 da                	mov    %ebx,%edx
 861d25e:	eb 35                	jmp    861d295 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x38b>
 861d260:	8d 45 f4             	lea    -0xc(%ebp),%eax
 861d263:	89 04 24             	mov    %eax,(%esp)
 861d266:	e8 75 a9 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d26b:	0f b6 45 a9          	movzbl -0x57(%ebp),%eax
 861d26f:	0f b6 d0             	movzbl %al,%edx
 861d272:	8b 45 18             	mov    0x18(%ebp),%eax
 861d275:	89 10                	mov    %edx,(%eax)
 861d277:	0f b7 45 ac          	movzwl -0x54(%ebp),%eax
 861d27b:	0f b7 d0             	movzwl %ax,%edx
 861d27e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 861d281:	89 10                	mov    %edx,(%eax)
 861d283:	bb 01 00 00 00       	mov    $0x1,%ebx
 861d288:	8d 45 a8             	lea    -0x58(%ebp),%eax
 861d28b:	89 04 24             	mov    %eax,(%esp)
 861d28e:	e8 7f a9 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 861d293:	eb 30                	jmp    861d2c5 <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x3bb>
 861d295:	89 d3                	mov    %edx,%ebx
 861d297:	89 c6                	mov    %eax,%esi
 861d299:	8d 45 a8             	lea    -0x58(%ebp),%eax
 861d29c:	89 04 24             	mov    %eax,(%esp)
 861d29f:	e8 6e a9 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 861d2a4:	89 f0                	mov    %esi,%eax
 861d2a6:	89 da                	mov    %ebx,%edx
 861d2a8:	eb 00                	jmp    861d2aa <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b+0x3a0>
 861d2aa:	89 d3                	mov    %edx,%ebx
 861d2ac:	89 c6                	mov    %eax,%esi
 861d2ae:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d2b1:	89 04 24             	mov    %eax,(%esp)
 861d2b4:	e8 27 a9 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d2b9:	89 f0                	mov    %esi,%eax
 861d2bb:	89 da                	mov    %ebx,%edx
 861d2bd:	89 04 24             	mov    %eax,(%esp)
 861d2c0:	e8 8b 64 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d2c5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 861d2c8:	89 04 24             	mov    %eax,(%esp)
 861d2cb:	e8 10 a9 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d2d0:	89 d8                	mov    %ebx,%eax
 861d2d2:	8d 65 f8             	lea    -0x8(%ebp),%esp
 861d2d5:	83 c4 00             	add    $0x0,%esp
 861d2d8:	5b                   	pop    %ebx
 861d2d9:	5e                   	pop    %esi
 861d2da:	5d                   	pop    %ebp
 861d2db:	c3                   	ret

```

```c
// sync_script::CSyncScript::GetType @ 0x861cf0a

/* sync_script::CSyncScript::GetType(std::string, ENUM_CHARACTERJOB, int, int&, int&, bool) */

undefined4 __thiscall
sync_script::CSyncScript::GetType
          (CSyncScript *this,string *param_1,undefined4 param_3,undefined4 param_4,uint *param_5,
          uint *param_6,char param_7)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  SITEMTYPE *pSVar5;
  byte *pbVar6;
  uint uVar7;
  SITEMTYPE local_5c;
  byte local_5b;
  ushort local_58;
  string local_50;
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  allocator<char> local_21;
  SWEAPONTYPE local_20 [8];
  SARMORTYPE local_18 [8];
  string local_10 [4];
  
  cVar3 = std::string::empty(param_1);
  if (cVar3 != '\0') {
    return 0;
  }
  iVar4 = std::string::find_first_of(param_1,"[",0);
  if (iVar4 == 0) {
    local_44 = 1;
    std::string::begin();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator+
              ((__normal_iterator<char*,std::string> *)&local_48,&local_40);
    std::string::begin();
    std::string::erase(local_4c,param_1,local_3c,local_48);
    std::string::end();
    local_2c = 1;
    std::string::end();
    __gnu_cxx::__normal_iterator<char*,std::string>::operator-
              ((__normal_iterator<char*,std::string> *)&local_30,&local_28);
    std::string::erase(local_38,param_1,local_30,local_34);
    std::allocator<char>::allocator();
                    /* try { // try from 0861d05f to 0861d063 has its CatchHandler @ 0861d066 */
    std::string::string((string *)&local_50,"stackable ",(allocator *)&local_21);
    std::allocator<char>::~allocator(&local_21);
                    /* try { // try from 0861d0a5 to 0861d107 has its CatchHandler @ 0861d2aa */
    if ((param_7 == '\x01') || (iVar4 = std::string::compare(param_1,"creature"), iVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      std::string::operator+=((string *)&local_50,param_1);
    }
    else {
      std::string::operator=((string *)&local_50,param_1);
    }
    pSVar5 = (SITEMTYPE *)
             std::
             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                           *)(this + 0x1c),&local_50);
    SITEMTYPE::SITEMTYPE(&local_5c,pSVar5);
    iVar4 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size
                      ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
    bVar2 = local_5b;
    if ((iVar4 == 0) ||
       (pbVar6 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                   ((vector<unsigned_char,std::allocator<unsigned_char>> *)
                                    (this + 4),0), bVar2 != *pbVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      SWEAPONTYPE::SWEAPONTYPE(local_20,param_3,param_4);
                    /* try { // try from 0861d174 to 0861d1e6 has its CatchHandler @ 0861d295 */
      pSVar5 = (SITEMTYPE *)
               std::
               map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x34),local_20);
      SITEMTYPE::operator=(&local_5c,pSVar5);
    }
    else {
      uVar7 = std::vector<unsigned_char,std::allocator<unsigned_char>>::size
                        ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
      bVar2 = local_5b;
      if ((uVar7 < 2) ||
         (pbVar6 = (byte *)std::vector<unsigned_char,std::allocator<unsigned_char>>::operator[]
                                     ((vector<unsigned_char,std::allocator<unsigned_char>> *)
                                      (this + 4),1), bVar2 != *pbVar6)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        std::string::string(local_10,(string *)&local_50);
                    /* try { // try from 0861d1fe to 0861d202 has its CatchHandler @ 0861d24b */
        SARMORTYPE::SARMORTYPE(local_18,(uchar)param_4,(string)local_10);
                    /* try { // try from 0861d213 to 0861d226 has its CatchHandler @ 0861d229 */
        pSVar5 = (SITEMTYPE *)
                 std::
                 map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                 ::operator[]((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                               *)(this + 0x4c),local_18);
        SITEMTYPE::operator=(&local_5c,pSVar5);
                    /* try { // try from 0861d244 to 0861d248 has its CatchHandler @ 0861d24b */
        SARMORTYPE::~SARMORTYPE(local_18);
                    /* try { // try from 0861d266 to 0861d26a has its CatchHandler @ 0861d295 */
        std::string::~string(local_10);
      }
    }
    *param_5 = (uint)local_5b;
    *param_6 = (uint)local_58;
                    /* try { // try from 0861d28e to 0861d292 has its CatchHandler @ 0861d2aa */
    SITEMTYPE::~SITEMTYPE(&local_5c);
    std::string::~string((string *)&local_50);
    return 1;
  }
  return 0;
}

```

---

## GetURL

```asm
// === 0861d706 sync_script::CSyncScript::GetURL  [0x0861d706-0x861d87d] ===
 861d706:	55                   	push   %ebp
 861d707:	89 e5                	mov    %esp,%ebp
 861d709:	57                   	push   %edi
 861d70a:	56                   	push   %esi
 861d70b:	53                   	push   %ebx
 861d70c:	83 ec 3c             	sub    $0x3c,%esp
 861d70f:	b8 e8 34 47 09       	mov    $0x94734e8,%eax
 861d714:	0f b6 00             	movzbl (%eax),%eax
 861d717:	84 c0                	test   %al,%al
 861d719:	75 71                	jne    861d78c <_ZN11sync_script11CSyncScript6GetURLEPKcii+0x86>
 861d71b:	c7 04 24 e8 34 47 09 	movl   $0x94734e8,(%esp)
 861d722:	e8 09 7c 10 00       	call   8725330 <__cxa_guard_acquire>
 861d727:	85 c0                	test   %eax,%eax
 861d729:	0f 95 c0             	setne  %al
 861d72c:	84 c0                	test   %al,%al
 861d72e:	74 5c                	je     861d78c <_ZN11sync_script11CSyncScript6GetURLEPKcii+0x86>
 861d730:	bb 00 00 00 00       	mov    $0x0,%ebx
 861d735:	c7 04 24 f0 37 47 09 	movl   $0x94737f0,(%esp)
 861d73c:	e8 8f 8e 0e 00       	call   87065d0 <_ZNSsC1Ev>
 861d741:	c7 04 24 e8 34 47 09 	movl   $0x94734e8,(%esp)
 861d748:	e8 03 7b 10 00       	call   8725250 <__cxa_guard_release>
 861d74d:	b8 e0 7b 70 08       	mov    $0x8707be0,%eax
 861d752:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 861d759:	08 
 861d75a:	c7 44 24 04 f0 37 47 	movl   $0x94737f0,0x4(%esp)
 861d761:	09 
 861d762:	89 04 24             	mov    %eax,(%esp)
 861d765:	e8 66 06 a6 ff       	call   807ddd0 <__cxa_atexit@plt>
 861d76a:	eb 20                	jmp    861d78c <_ZN11sync_script11CSyncScript6GetURLEPKcii+0x86>
 861d76c:	89 d6                	mov    %edx,%esi
 861d76e:	89 c7                	mov    %eax,%edi
 861d770:	84 db                	test   %bl,%bl
 861d772:	75 0c                	jne    861d780 <_ZN11sync_script11CSyncScript6GetURLEPKcii+0x7a>
 861d774:	c7 04 24 e8 34 47 09 	movl   $0x94734e8,(%esp)
 861d77b:	e8 40 7b 10 00       	call   87252c0 <__cxa_guard_abort>
 861d780:	89 f8                	mov    %edi,%eax
 861d782:	89 f2                	mov    %esi,%edx
 861d784:	89 04 24             	mov    %eax,(%esp)
 861d787:	e8 c4 5f 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d78c:	c7 04 24 f0 37 47 09 	movl   $0x94737f0,(%esp)
 861d793:	e8 38 b6 0e 00       	call   8708dd0 <_ZNSs5clearEv>
 861d798:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 861d79f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 861d7a6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 861d7ad:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 861d7b4:	eb 2d                	jmp    861d7e3 <_ZN11sync_script11CSyncScript6GetURLEPKcii+0xdd>
 861d7b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d7b9:	03 45 0c             	add    0xc(%ebp),%eax
 861d7bc:	0f b6 00             	movzbl (%eax),%eax
 861d7bf:	3c 2f                	cmp    $0x2f,%al
 861d7c1:	75 09                	jne    861d7cc <_ZN11sync_script11CSyncScript6GetURLEPKcii+0xc6>
 861d7c3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d7c6:	83 c0 01             	add    $0x1,%eax
 861d7c9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 861d7cc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d7cf:	03 45 0c             	add    0xc(%ebp),%eax
 861d7d2:	0f b6 00             	movzbl (%eax),%eax
 861d7d5:	3c 2e                	cmp    $0x2e,%al
 861d7d7:	75 06                	jne    861d7df <_ZN11sync_script11CSyncScript6GetURLEPKcii+0xd9>
 861d7d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d7dc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 861d7df:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 861d7e3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 861d7e6:	3b 45 10             	cmp    0x10(%ebp),%eax
 861d7e9:	0f 9c c0             	setl   %al
 861d7ec:	84 c0                	test   %al,%al
 861d7ee:	75 c6                	jne    861d7b6 <_ZN11sync_script11CSyncScript6GetURLEPKcii+0xb0>
 861d7f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 861d7f3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 861d7f6:	89 d1                	mov    %edx,%ecx
 861d7f8:	29 c1                	sub    %eax,%ecx
 861d7fa:	89 c8                	mov    %ecx,%eax
 861d7fc:	89 c2                	mov    %eax,%edx
 861d7fe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 861d801:	03 45 0c             	add    0xc(%ebp),%eax
 861d804:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861d808:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d80c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861d813:	00 
 861d814:	c7 04 24 f0 37 47 09 	movl   $0x94737f0,(%esp)
 861d81b:	e8 20 b3 0e 00       	call   8708b40 <_ZNSs6insertEjPKcj>
 861d820:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 861d827:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 861d82e:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 861d835:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 861d83c:	8b 45 14             	mov    0x14(%ebp),%eax
 861d83f:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d843:	c7 44 24 04 34 2f ce 	movl   $0x8ce2f34,0x4(%esp)
 861d84a:	08 
 861d84b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 861d84e:	89 04 24             	mov    %eax,(%esp)
 861d851:	e8 ea 0b a6 ff       	call   807e440 <sprintf@plt>
 861d856:	8d 45 cc             	lea    -0x34(%ebp),%eax
 861d859:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d85d:	c7 04 24 f0 37 47 09 	movl   $0x94737f0,(%esp)
 861d864:	e8 c7 a7 0e 00       	call   8708030 <_ZNSspLEPKc>
 861d869:	c7 04 24 f0 37 47 09 	movl   $0x94737f0,(%esp)
 861d870:	e8 7b 8c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861d875:	83 c4 3c             	add    $0x3c,%esp
 861d878:	5b                   	pop    %ebx
 861d879:	5e                   	pop    %esi
 861d87a:	5f                   	pop    %edi
 861d87b:	5d                   	pop    %ebp
 861d87c:	c3                   	ret
 861d87d:	90                   	nop

```

```c
// sync_script::CSyncScript::GetURL @ 0x861d706

/* sync_script::CSyncScript::GetURL(char const*, int, int) */

void __thiscall
sync_script::CSyncScript::GetURL(CSyncScript *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  char local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  if (GetURL(char_const*,int,int)::strUrl == '\0') {
    iVar1 = __cxa_guard_acquire(&GetURL(char_const*,int,int)::strUrl);
    if (iVar1 != 0) {
                    /* try { // try from 0861d73c to 0861d740 has its CatchHandler @ 0861d76c */
      std::string::string((string *)&GetURL(char_const*,int,int)::strUrl);
      __cxa_guard_release(&GetURL(char_const*,int,int)::strUrl);
      __cxa_atexit(std::string::~string,&GetURL(char_const*,int,int)::strUrl,&__dso_handle);
    }
  }
  std::string::clear((string *)&GetURL(char_const*,int,int)::strUrl);
  local_28 = 0;
  local_24 = 0;
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    if (param_1[local_20] == '/') {
      local_28 = local_20 + 1;
    }
    if (param_1[local_20] == '.') {
      local_24 = local_20;
    }
  }
  std::string::insert((string *)&GetURL(char_const*,int,int)::strUrl,0,param_1 + local_28,
                      local_24 - local_28);
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  sprintf(local_38,"/%05d.png",param_3);
  std::string::operator+=((string *)&GetURL(char_const*,int,int)::strUrl,local_38);
  std::string::c_str((string *)&GetURL(char_const*,int,int)::strUrl);
  return;
}

```

---

## GetUsableCharacter

```asm
// === 0861d330 sync_script::CSyncScript::GetUsableCharacter  [0x0861d330-0x861d38d] ===
 861d330:	55                   	push   %ebp
 861d331:	89 e5                	mov    %esp,%ebp
 861d333:	83 ec 18             	sub    $0x18,%esp
 861d336:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d339:	0f b6 80 a0 00 00 00 	movzbl 0xa0(%eax),%eax
 861d340:	84 c0                	test   %al,%al
 861d342:	74 07                	je     861d34b <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x1b>
 861d344:	b8 c4 2e ce 08       	mov    $0x8ce2ec4,%eax
 861d349:	eb 40                	jmp    861d38b <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x5b>
 861d34b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 861d352:	eb 27                	jmp    861d37b <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x4b>
 861d354:	8b 45 fc             	mov    -0x4(%ebp),%eax
 861d357:	8b 55 0c             	mov    0xc(%ebp),%edx
 861d35a:	0f b6 44 02 38       	movzbl 0x38(%edx,%eax,1),%eax
 861d35f:	84 c0                	test   %al,%al
 861d361:	74 14                	je     861d377 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x47>
 861d363:	8b 45 fc             	mov    -0x4(%ebp),%eax
 861d366:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d36a:	8b 45 08             	mov    0x8(%ebp),%eax
 861d36d:	89 04 24             	mov    %eax,(%esp)
 861d370:	e8 67 ff ff ff       	call   861d2dc <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB>
 861d375:	eb 14                	jmp    861d38b <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x5b>
 861d377:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 861d37b:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 861d37f:	0f 9e c0             	setle  %al
 861d382:	84 c0                	test   %al,%al
 861d384:	75 ce                	jne    861d354 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript+0x24>
 861d386:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 861d38b:	c9                   	leave
 861d38c:	c3                   	ret
 861d38d:	90                   	nop

```

```c
// sync_script::CSyncScript::GetUsableCharacter @ 0x861d330

/* sync_script::CSyncScript::GetUsableCharacter(STEquipmentScript*) */

undefined * __thiscall
sync_script::CSyncScript::GetUsableCharacter(CSyncScript *this,STEquipmentScript *param_1)

{
  undefined *puVar1;
  int local_8;
  
  if (param_1[0xa0] == (STEquipmentScript)0x0) {
    for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
      if (param_1[local_8 + 0x38] != (STEquipmentScript)0x0) {
        puVar1 = (undefined *)GetUserJob(this,local_8);
        return puVar1;
      }
    }
    puVar1 = &DAT_08ce2e28;
  }
  else {
    puVar1 = &DAT_08ce2ec4;
  }
  return puVar1;
}

```

---

## GetUsableCharacter_0861d38e

```asm
// === 0861d38e sync_script::CSyncScript::GetUsableCharacter  [0x0861d38e-0x861d3eb] ===
 861d38e:	55                   	push   %ebp
 861d38f:	89 e5                	mov    %esp,%ebp
 861d391:	83 ec 18             	sub    $0x18,%esp
 861d394:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d397:	0f b6 80 a0 00 00 00 	movzbl 0xa0(%eax),%eax
 861d39e:	84 c0                	test   %al,%al
 861d3a0:	74 07                	je     861d3a9 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x1b>
 861d3a2:	b8 c4 2e ce 08       	mov    $0x8ce2ec4,%eax
 861d3a7:	eb 40                	jmp    861d3e9 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x5b>
 861d3a9:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 861d3b0:	eb 27                	jmp    861d3d9 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x4b>
 861d3b2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 861d3b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 861d3b8:	0f b6 44 02 38       	movzbl 0x38(%edx,%eax,1),%eax
 861d3bd:	84 c0                	test   %al,%al
 861d3bf:	74 14                	je     861d3d5 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x47>
 861d3c1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 861d3c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d3c8:	8b 45 08             	mov    0x8(%ebp),%eax
 861d3cb:	89 04 24             	mov    %eax,(%esp)
 861d3ce:	e8 09 ff ff ff       	call   861d2dc <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB>
 861d3d3:	eb 14                	jmp    861d3e9 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x5b>
 861d3d5:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 861d3d9:	83 7d fc 0a          	cmpl   $0xa,-0x4(%ebp)
 861d3dd:	0f 9e c0             	setle  %al
 861d3e0:	84 c0                	test   %al,%al
 861d3e2:	75 ce                	jne    861d3b2 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript+0x24>
 861d3e4:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 861d3e9:	c9                   	leave
 861d3ea:	c3                   	ret
 861d3eb:	90                   	nop

```

```c
// sync_script::CSyncScript::GetUsableCharacter @ 0x861d38e

/* sync_script::CSyncScript::GetUsableCharacter(STStackableScript*) */

undefined * __thiscall
sync_script::CSyncScript::GetUsableCharacter(CSyncScript *this,STStackableScript *param_1)

{
  undefined *puVar1;
  int local_8;
  
  if (param_1[0xa0] == (STStackableScript)0x0) {
    for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
      if (param_1[local_8 + 0x38] != (STStackableScript)0x0) {
        puVar1 = (undefined *)GetUserJob(this,local_8);
        return puVar1;
      }
    }
    puVar1 = &DAT_08ce2e28;
  }
  else {
    puVar1 = &DAT_08ce2ec4;
  }
  return puVar1;
}

```

---

## GetUserJob

```asm
// === 0861d2dc sync_script::CSyncScript::GetUserJob  [0x0861d2dc-0x861d32f] ===
 861d2dc:	55                   	push   %ebp
 861d2dd:	89 e5                	mov    %esp,%ebp
 861d2df:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d2e2:	83 f8 07             	cmp    $0x7,%eax
 861d2e5:	77 41                	ja     861d328 <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x4c>
 861d2e7:	8b 04 85 a4 2e ce 08 	mov    0x8ce2ea4(,%eax,4),%eax
 861d2ee:	ff e0                	jmp    *%eax
 861d2f0:	b8 6c 2e ce 08       	mov    $0x8ce2e6c,%eax
 861d2f5:	eb 36                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d2f7:	b8 73 2e ce 08       	mov    $0x8ce2e73,%eax
 861d2fc:	eb 2f                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d2fe:	b8 7a 2e ce 08       	mov    $0x8ce2e7a,%eax
 861d303:	eb 28                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d305:	b8 7f 2e ce 08       	mov    $0x8ce2e7f,%eax
 861d30a:	eb 21                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d30c:	b8 86 2e ce 08       	mov    $0x8ce2e86,%eax
 861d311:	eb 1a                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d313:	b8 8f 2e ce 08       	mov    $0x8ce2e8f,%eax
 861d318:	eb 13                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d31a:	b8 96 2e ce 08       	mov    $0x8ce2e96,%eax
 861d31f:	eb 0c                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d321:	b8 9b 2e ce 08       	mov    $0x8ce2e9b,%eax
 861d326:	eb 05                	jmp    861d32d <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB+0x51>
 861d328:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 861d32d:	5d                   	pop    %ebp
 861d32e:	c3                   	ret
 861d32f:	90                   	nop

```

```c
// sync_script::CSyncScript::GetUserJob @ 0x861d2dc

/* sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB) */

undefined * __thiscall sync_script::CSyncScript::GetUserJob(undefined4 this,undefined4 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 0:
    puVar1 = &DAT_08ce2e6c;
    break;
  case 1:
    puVar1 = &DAT_08ce2e73;
    break;
  case 2:
    puVar1 = &DAT_08ce2e7a;
    break;
  case 3:
    puVar1 = &DAT_08ce2e7f;
    break;
  case 4:
    puVar1 = &DAT_08ce2e86;
    break;
  case 5:
    puVar1 = &DAT_08ce2e8f;
    break;
  case 6:
    puVar1 = &DAT_08ce2e96;
    break;
  case 7:
    puVar1 = &DAT_08ce2e9b;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
  }
  return puVar1;
}

```

---

## LoadItemInfoMasterScript

```asm
// === 08625064 sync_script::CSyncScript::LoadItemInfoMasterScript  [0x08625064-0x8625695] ===
 8625064:	55                   	push   %ebp
 8625065:	89 e5                	mov    %esp,%ebp
 8625067:	56                   	push   %esi
 8625068:	53                   	push   %ebx
 8625069:	81 ec 90 00 00 00    	sub    $0x90,%esp
 862506f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8625072:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625076:	c7 04 24 28 2e ce 08 	movl   $0x8ce2e28,(%esp)
 862507d:	e8 a7 6c 29 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8625082:	83 f0 01             	xor    $0x1,%eax
 8625085:	84 c0                	test   %al,%al
 8625087:	74 0a                	je     8625093 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x2f>
 8625089:	bb 00 00 00 00       	mov    $0x0,%ebx
 862508e:	e9 f6 05 00 00       	jmp    8625689 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x625>
 8625093:	8d 45 98             	lea    -0x68(%ebp),%eax
 8625096:	89 04 24             	mov    %eax,(%esp)
 8625099:	e8 32 15 0e 00       	call   87065d0 <_ZNSsC1Ev>
 862509e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86250a1:	89 04 24             	mov    %eax,(%esp)
 86250a4:	e8 27 15 0e 00       	call   87065d0 <_ZNSsC1Ev>
 86250a9:	8d 45 90             	lea    -0x70(%ebp),%eax
 86250ac:	89 04 24             	mov    %eax,(%esp)
 86250af:	e8 1c 15 0e 00       	call   87065d0 <_ZNSsC1Ev>
 86250b4:	eb 01                	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 86250b6:	90                   	nop
 86250b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86250be:	00 
 86250bf:	8d 45 98             	lea    -0x68(%ebp),%eax
 86250c2:	89 04 24             	mov    %eax,(%esp)
 86250c5:	e8 95 77 29 00       	call   88bc85f <_Z8ScanTypeRSsb>
 86250ca:	83 f0 01             	xor    $0x1,%eax
 86250cd:	84 c0                	test   %al,%al
 86250cf:	0f 85 44 05 00 00    	jne    8625619 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5b5>
 86250d5:	c7 44 24 04 fc 45 ce 	movl   $0x8ce45fc,0x4(%esp)
 86250dc:	08 
 86250dd:	8d 45 98             	lea    -0x68(%ebp),%eax
 86250e0:	89 04 24             	mov    %eax,(%esp)
 86250e3:	e8 b9 b8 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 86250e8:	84 c0                	test   %al,%al
 86250ea:	74 46                	je     8625132 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0xce>
 86250ec:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86250f3:	e8 83 72 29 00       	call   88bc37b <_Z7ScanIntPb>
 86250f8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86250fb:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86250fe:	89 04 24             	mov    %eax,(%esp)
 8625101:	e8 9c 76 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 8625106:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8625109:	88 45 9c             	mov    %al,-0x64(%ebp)
 862510c:	8b 45 08             	mov    0x8(%ebp),%eax
 862510f:	8d 50 64             	lea    0x64(%eax),%edx
 8625112:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8625115:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625119:	89 14 24             	mov    %edx,(%esp)
 862511c:	e8 8d 3e 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 8625121:	8d 55 94             	lea    -0x6c(%ebp),%edx
 8625124:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625128:	89 04 24             	mov    %eax,(%esp)
 862512b:	e8 d0 2b 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 8625130:	eb 85                	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 8625132:	c7 44 24 04 0a 46 ce 	movl   $0x8ce460a,0x4(%esp)
 8625139:	08 
 862513a:	8d 45 98             	lea    -0x68(%ebp),%eax
 862513d:	89 04 24             	mov    %eax,(%esp)
 8625140:	e8 5c b8 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8625145:	84 c0                	test   %al,%al
 8625147:	74 2f                	je     8625178 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x114>
 8625149:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8625150:	e8 26 72 29 00       	call   88bc37b <_Z7ScanIntPb>
 8625155:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8625158:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862515b:	88 45 9d             	mov    %al,-0x63(%ebp)
 862515e:	8b 45 08             	mov    0x8(%ebp),%eax
 8625161:	8d 50 04             	lea    0x4(%eax),%edx
 8625164:	8d 45 9d             	lea    -0x63(%ebp),%eax
 8625167:	89 44 24 04          	mov    %eax,0x4(%esp)
 862516b:	89 14 24             	mov    %edx,(%esp)
 862516e:	e8 11 fc ab ff       	call   80e4d84 <_ZNSt6vectorIhSaIhEE9push_backEOh>
 8625173:	e9 3f ff ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 8625178:	c7 44 24 04 1a 46 ce 	movl   $0x8ce461a,0x4(%esp)
 862517f:	08 
 8625180:	8d 45 98             	lea    -0x68(%ebp),%eax
 8625183:	89 04 24             	mov    %eax,(%esp)
 8625186:	e8 16 b8 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 862518b:	84 c0                	test   %al,%al
 862518d:	74 2f                	je     86251be <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x15a>
 862518f:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8625196:	e8 e0 71 29 00       	call   88bc37b <_Z7ScanIntPb>
 862519b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 862519e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86251a1:	88 45 9e             	mov    %al,-0x62(%ebp)
 86251a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86251a7:	8d 50 10             	lea    0x10(%eax),%edx
 86251aa:	8d 45 9e             	lea    -0x62(%ebp),%eax
 86251ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 86251b1:	89 14 24             	mov    %edx,(%esp)
 86251b4:	e8 cb fb ab ff       	call   80e4d84 <_ZNSt6vectorIhSaIhEE9push_backEOh>
 86251b9:	e9 f9 fe ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 86251be:	c7 44 24 04 29 46 ce 	movl   $0x8ce4629,0x4(%esp)
 86251c5:	08 
 86251c6:	8d 45 98             	lea    -0x68(%ebp),%eax
 86251c9:	89 04 24             	mov    %eax,(%esp)
 86251cc:	e8 d0 b7 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 86251d1:	84 c0                	test   %al,%al
 86251d3:	74 49                	je     862521e <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x1ba>
 86251d5:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86251dc:	e8 9a 71 29 00       	call   88bc37b <_Z7ScanIntPb>
 86251e1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86251e4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86251e7:	89 04 24             	mov    %eax,(%esp)
 86251ea:	e8 b3 75 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 86251ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86251f2:	88 45 9f             	mov    %al,-0x61(%ebp)
 86251f5:	8b 45 08             	mov    0x8(%ebp),%eax
 86251f8:	8d 50 7c             	lea    0x7c(%eax),%edx
 86251fb:	8d 45 9f             	lea    -0x61(%ebp),%eax
 86251fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625202:	89 14 24             	mov    %edx,(%esp)
 8625205:	e8 a4 3d 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 862520a:	8d 55 94             	lea    -0x6c(%ebp),%edx
 862520d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625211:	89 04 24             	mov    %eax,(%esp)
 8625214:	e8 e7 2a 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 8625219:	e9 99 fe ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 862521e:	c7 44 24 04 39 46 ce 	movl   $0x8ce4639,0x4(%esp)
 8625225:	08 
 8625226:	8d 45 98             	lea    -0x68(%ebp),%eax
 8625229:	89 04 24             	mov    %eax,(%esp)
 862522c:	e8 70 b7 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8625231:	84 c0                	test   %al,%al
 8625233:	0f 84 2c 01 00 00    	je     8625365 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x301>
 8625239:	8d 45 94             	lea    -0x6c(%ebp),%eax
 862523c:	89 04 24             	mov    %eax,(%esp)
 862523f:	e8 5e 75 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 8625244:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 862524b:	e8 2b 71 29 00       	call   88bc37b <_Z7ScanIntPb>
 8625250:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8625253:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 862525a:	e8 1c 71 29 00       	call   88bc37b <_Z7ScanIntPb>
 862525f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8625262:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8625269:	e8 0d 71 29 00       	call   88bc37b <_Z7ScanIntPb>
 862526e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8625271:	8d 45 90             	lea    -0x70(%ebp),%eax
 8625274:	89 04 24             	mov    %eax,(%esp)
 8625277:	e8 26 75 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 862527c:	8d 45 94             	lea    -0x6c(%ebp),%eax
 862527f:	89 04 24             	mov    %eax,(%esp)
 8625282:	e8 69 12 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625287:	89 04 24             	mov    %eax,(%esp)
 862528a:	e8 ef 92 29 00       	call   88be57e <_Z15getCharacterJobPKc>
 862528f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8625292:	8d 45 90             	lea    -0x70(%ebp),%eax
 8625295:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625299:	8d 45 ac             	lea    -0x54(%ebp),%eax
 862529c:	89 04 24             	mov    %eax,(%esp)
 862529f:	e8 0c 27 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 86252a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86252a7:	0f b7 c8             	movzwl %ax,%ecx
 86252aa:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86252ad:	0f b6 d0             	movzbl %al,%edx
 86252b0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86252b3:	0f b6 c0             	movzbl %al,%eax
 86252b6:	8d 5d ac             	lea    -0x54(%ebp),%ebx
 86252b9:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86252bd:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86252c1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86252c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 86252c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86252d0:	00 
 86252d1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86252d4:	89 04 24             	mov    %eax,(%esp)
 86252d7:	e8 60 19 00 00       	call   8626c3c <_ZN11sync_script11CSyncScript9SITEMTYPEC1EbhhtSs>
 86252dc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86252df:	89 44 24 08          	mov    %eax,0x8(%esp)
 86252e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86252e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86252ea:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86252ed:	89 04 24             	mov    %eax,(%esp)
 86252f0:	e8 ed 17 00 00       	call   8626ae2 <_ZN11sync_script11CSyncScript11SWEAPONTYPEC1E17ENUM_CHARACTERJOBi>
 86252f5:	8b 45 08             	mov    0x8(%ebp),%eax
 86252f8:	8d 50 34             	lea    0x34(%eax),%edx
 86252fb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86252fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625302:	89 14 24             	mov    %edx,(%esp)
 8625305:	e8 00 31 00 00       	call   862840a <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEixERS7_>
 862530a:	8d 55 a0             	lea    -0x60(%ebp),%edx
 862530d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625311:	89 04 24             	mov    %eax,(%esp)
 8625314:	e8 0f 29 00 00       	call   8627c28 <_ZN11sync_script11CSyncScript9SITEMTYPEaSERKS1_>
 8625319:	eb 15                	jmp    8625330 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x2cc>
 862531b:	89 d3                	mov    %edx,%ebx
 862531d:	89 c6                	mov    %eax,%esi
 862531f:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8625322:	89 04 24             	mov    %eax,(%esp)
 8625325:	e8 e8 28 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 862532a:	89 f0                	mov    %esi,%eax
 862532c:	89 da                	mov    %ebx,%edx
 862532e:	eb 0d                	jmp    862533d <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x2d9>
 8625330:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8625333:	89 04 24             	mov    %eax,(%esp)
 8625336:	e8 d7 28 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 862533b:	eb 18                	jmp    8625355 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x2f1>
 862533d:	89 d3                	mov    %edx,%ebx
 862533f:	89 c6                	mov    %eax,%esi
 8625341:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8625344:	89 04 24             	mov    %eax,(%esp)
 8625347:	e8 94 28 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862534c:	89 f0                	mov    %esi,%eax
 862534e:	89 da                	mov    %ebx,%edx
 8625350:	e9 d7 02 00 00       	jmp    862562c <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5c8>
 8625355:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8625358:	89 04 24             	mov    %eax,(%esp)
 862535b:	e8 80 28 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625360:	e9 52 fd ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 8625365:	c7 44 24 04 47 46 ce 	movl   $0x8ce4647,0x4(%esp)
 862536c:	08 
 862536d:	8d 45 98             	lea    -0x68(%ebp),%eax
 8625370:	89 04 24             	mov    %eax,(%esp)
 8625373:	e8 29 b6 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8625378:	84 c0                	test   %al,%al
 862537a:	0f 84 6f 01 00 00    	je     86254ef <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x48b>
 8625380:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8625383:	89 04 24             	mov    %eax,(%esp)
 8625386:	e8 17 74 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 862538b:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8625392:	e8 e4 6f 29 00       	call   88bc37b <_Z7ScanIntPb>
 8625397:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 862539a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86253a1:	e8 d5 6f 29 00       	call   88bc37b <_Z7ScanIntPb>
 86253a6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86253a9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 86253b0:	e8 c6 6f 29 00       	call   88bc37b <_Z7ScanIntPb>
 86253b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86253b8:	8d 45 90             	lea    -0x70(%ebp),%eax
 86253bb:	89 04 24             	mov    %eax,(%esp)
 86253be:	e8 df 73 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 86253c3:	8d 45 90             	lea    -0x70(%ebp),%eax
 86253c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86253ca:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86253cd:	89 04 24             	mov    %eax,(%esp)
 86253d0:	e8 db 25 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 86253d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86253d8:	0f b7 c8             	movzwl %ax,%ecx
 86253db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86253de:	0f b6 d0             	movzbl %al,%edx
 86253e1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86253e4:	0f b6 c0             	movzbl %al,%eax
 86253e7:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 86253ea:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86253ee:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86253f2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86253f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 86253fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8625401:	00 
 8625402:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8625405:	89 04 24             	mov    %eax,(%esp)
 8625408:	e8 2f 18 00 00       	call   8626c3c <_ZN11sync_script11CSyncScript9SITEMTYPEC1EbhhtSs>
 862540d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8625410:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625414:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625417:	89 04 24             	mov    %eax,(%esp)
 862541a:	e8 91 25 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 862541f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8625422:	0f b6 c0             	movzbl %al,%eax
 8625425:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8625428:	89 54 24 08          	mov    %edx,0x8(%esp)
 862542c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625430:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625433:	89 04 24             	mov    %eax,(%esp)
 8625436:	e8 03 17 00 00       	call   8626b3e <_ZN11sync_script11CSyncScript10SARMORTYPEC1EhSs>
 862543b:	8b 45 08             	mov    0x8(%ebp),%eax
 862543e:	8d 50 4c             	lea    0x4c(%eax),%edx
 8625441:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625444:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625448:	89 14 24             	mov    %edx,(%esp)
 862544b:	e8 4c 31 00 00       	call   862859c <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEEixERS7_>
 8625450:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8625453:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625457:	89 04 24             	mov    %eax,(%esp)
 862545a:	e8 c9 27 00 00       	call   8627c28 <_ZN11sync_script11CSyncScript9SITEMTYPEaSERKS1_>
 862545f:	eb 15                	jmp    8625476 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x412>
 8625461:	89 d3                	mov    %edx,%ebx
 8625463:	89 c6                	mov    %eax,%esi
 8625465:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625468:	89 04 24             	mov    %eax,(%esp)
 862546b:	e8 0e 28 00 00       	call   8627c7e <_ZN11sync_script11CSyncScript10SARMORTYPED1Ev>
 8625470:	89 f0                	mov    %esi,%eax
 8625472:	89 da                	mov    %ebx,%edx
 8625474:	eb 0d                	jmp    8625483 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x41f>
 8625476:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625479:	89 04 24             	mov    %eax,(%esp)
 862547c:	e8 fd 27 00 00       	call   8627c7e <_ZN11sync_script11CSyncScript10SARMORTYPED1Ev>
 8625481:	eb 15                	jmp    8625498 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x434>
 8625483:	89 d3                	mov    %edx,%ebx
 8625485:	89 c6                	mov    %eax,%esi
 8625487:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862548a:	89 04 24             	mov    %eax,(%esp)
 862548d:	e8 4e 27 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625492:	89 f0                	mov    %esi,%eax
 8625494:	89 da                	mov    %ebx,%edx
 8625496:	eb 0d                	jmp    86254a5 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x441>
 8625498:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862549b:	89 04 24             	mov    %eax,(%esp)
 862549e:	e8 3d 27 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86254a3:	eb 15                	jmp    86254ba <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x456>
 86254a5:	89 d3                	mov    %edx,%ebx
 86254a7:	89 c6                	mov    %eax,%esi
 86254a9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86254ac:	89 04 24             	mov    %eax,(%esp)
 86254af:	e8 5e 27 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 86254b4:	89 f0                	mov    %esi,%eax
 86254b6:	89 da                	mov    %ebx,%edx
 86254b8:	eb 0d                	jmp    86254c7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x463>
 86254ba:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86254bd:	89 04 24             	mov    %eax,(%esp)
 86254c0:	e8 4d 27 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 86254c5:	eb 18                	jmp    86254df <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x47b>
 86254c7:	89 d3                	mov    %edx,%ebx
 86254c9:	89 c6                	mov    %eax,%esi
 86254cb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86254ce:	89 04 24             	mov    %eax,(%esp)
 86254d1:	e8 0a 27 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86254d6:	89 f0                	mov    %esi,%eax
 86254d8:	89 da                	mov    %ebx,%edx
 86254da:	e9 4d 01 00 00       	jmp    862562c <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5c8>
 86254df:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86254e2:	89 04 24             	mov    %eax,(%esp)
 86254e5:	e8 f6 26 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86254ea:	e9 c8 fb ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 86254ef:	c7 44 24 04 54 46 ce 	movl   $0x8ce4654,0x4(%esp)
 86254f6:	08 
 86254f7:	8d 45 98             	lea    -0x68(%ebp),%eax
 86254fa:	89 04 24             	mov    %eax,(%esp)
 86254fd:	e8 9f b4 a5 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 8625502:	84 c0                	test   %al,%al
 8625504:	0f 84 ac fb ff ff    	je     86250b6 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x52>
 862550a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 862550d:	89 04 24             	mov    %eax,(%esp)
 8625510:	e8 8d 72 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 8625515:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 862551c:	e8 5a 6e 29 00       	call   88bc37b <_Z7ScanIntPb>
 8625521:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8625524:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 862552b:	e8 4b 6e 29 00       	call   88bc37b <_Z7ScanIntPb>
 8625530:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8625533:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 862553a:	e8 3c 6e 29 00       	call   88bc37b <_Z7ScanIntPb>
 862553f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8625542:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8625549:	e8 2d 6e 29 00       	call   88bc37b <_Z7ScanIntPb>
 862554e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8625551:	8d 45 90             	lea    -0x70(%ebp),%eax
 8625554:	89 04 24             	mov    %eax,(%esp)
 8625557:	e8 46 72 29 00       	call   88bc7a2 <_Z7ScanStrPSs>
 862555c:	8d 45 90             	lea    -0x70(%ebp),%eax
 862555f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625563:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8625566:	89 04 24             	mov    %eax,(%esp)
 8625569:	e8 42 24 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 862556e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8625571:	0f b7 d8             	movzwl %ax,%ebx
 8625574:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8625577:	0f b6 c8             	movzbl %al,%ecx
 862557a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 862557d:	0f b6 d0             	movzbl %al,%edx
 8625580:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8625584:	0f 95 c0             	setne  %al
 8625587:	0f b6 c0             	movzbl %al,%eax
 862558a:	8d 75 e0             	lea    -0x20(%ebp),%esi
 862558d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8625591:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8625595:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8625599:	89 54 24 08          	mov    %edx,0x8(%esp)
 862559d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86255a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86255a4:	89 04 24             	mov    %eax,(%esp)
 86255a7:	e8 90 16 00 00       	call   8626c3c <_ZN11sync_script11CSyncScript9SITEMTYPEC1EbhhtSs>
 86255ac:	8b 45 08             	mov    0x8(%ebp),%eax
 86255af:	8d 50 1c             	lea    0x1c(%eax),%edx
 86255b2:	8d 45 94             	lea    -0x6c(%ebp),%eax
 86255b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86255b9:	89 14 24             	mov    %edx,(%esp)
 86255bc:	e8 e7 2c 00 00       	call   86282a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 86255c1:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 86255c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86255c8:	89 04 24             	mov    %eax,(%esp)
 86255cb:	e8 58 26 00 00       	call   8627c28 <_ZN11sync_script11CSyncScript9SITEMTYPEaSERKS1_>
 86255d0:	eb 15                	jmp    86255e7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x583>
 86255d2:	89 d3                	mov    %edx,%ebx
 86255d4:	89 c6                	mov    %eax,%esi
 86255d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86255d9:	89 04 24             	mov    %eax,(%esp)
 86255dc:	e8 31 26 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 86255e1:	89 f0                	mov    %esi,%eax
 86255e3:	89 da                	mov    %ebx,%edx
 86255e5:	eb 0d                	jmp    86255f4 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x590>
 86255e7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86255ea:	89 04 24             	mov    %eax,(%esp)
 86255ed:	e8 20 26 00 00       	call   8627c12 <_ZN11sync_script11CSyncScript9SITEMTYPED1Ev>
 86255f2:	eb 15                	jmp    8625609 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5a5>
 86255f4:	89 d3                	mov    %edx,%ebx
 86255f6:	89 c6                	mov    %eax,%esi
 86255f8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86255fb:	89 04 24             	mov    %eax,(%esp)
 86255fe:	e8 dd 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625603:	89 f0                	mov    %esi,%eax
 8625605:	89 da                	mov    %ebx,%edx
 8625607:	eb 23                	jmp    862562c <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5c8>
 8625609:	8d 45 e0             	lea    -0x20(%ebp),%eax
 862560c:	89 04 24             	mov    %eax,(%esp)
 862560f:	e8 cc 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625614:	e9 9e fa ff ff       	jmp    86250b7 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x53>
 8625619:	90                   	nop
 862561a:	bb 01 00 00 00       	mov    $0x1,%ebx
 862561f:	8d 45 90             	lea    -0x70(%ebp),%eax
 8625622:	89 04 24             	mov    %eax,(%esp)
 8625625:	e8 b6 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862562a:	eb 2a                	jmp    8625656 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5f2>
 862562c:	89 d3                	mov    %edx,%ebx
 862562e:	89 c6                	mov    %eax,%esi
 8625630:	8d 45 90             	lea    -0x70(%ebp),%eax
 8625633:	89 04 24             	mov    %eax,(%esp)
 8625636:	e8 a5 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862563b:	89 f0                	mov    %esi,%eax
 862563d:	89 da                	mov    %ebx,%edx
 862563f:	eb 00                	jmp    8625641 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5dd>
 8625641:	89 d3                	mov    %edx,%ebx
 8625643:	89 c6                	mov    %eax,%esi
 8625645:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8625648:	89 04 24             	mov    %eax,(%esp)
 862564b:	e8 90 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625650:	89 f0                	mov    %esi,%eax
 8625652:	89 da                	mov    %ebx,%edx
 8625654:	eb 0d                	jmp    8625663 <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x5ff>
 8625656:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8625659:	89 04 24             	mov    %eax,(%esp)
 862565c:	e8 7f 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625661:	eb 1b                	jmp    862567e <_ZN11sync_script11CSyncScript24LoadItemInfoMasterScriptEPKc+0x61a>
 8625663:	89 d3                	mov    %edx,%ebx
 8625665:	89 c6                	mov    %eax,%esi
 8625667:	8d 45 98             	lea    -0x68(%ebp),%eax
 862566a:	89 04 24             	mov    %eax,(%esp)
 862566d:	e8 6e 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625672:	89 f0                	mov    %esi,%eax
 8625674:	89 da                	mov    %ebx,%edx
 8625676:	89 04 24             	mov    %eax,(%esp)
 8625679:	e8 d2 e0 4b 00       	call   8ae3750 <_Unwind_Resume>
 862567e:	8d 45 98             	lea    -0x68(%ebp),%eax
 8625681:	89 04 24             	mov    %eax,(%esp)
 8625684:	e8 57 25 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625689:	89 d8                	mov    %ebx,%eax
 862568b:	81 c4 90 00 00 00    	add    $0x90,%esp
 8625691:	5b                   	pop    %ebx
 8625692:	5e                   	pop    %esi
 8625693:	5d                   	pop    %ebp
 8625694:	c3                   	ret
 8625695:	90                   	nop

```

```c
// sync_script::CSyncScript::LoadItemInfoMasterScript @ 0x8625064

/* sync_script::CSyncScript::LoadItemInfoMasterScript(char const*) */

undefined4 __thiscall
sync_script::CSyncScript::LoadItemInfoMasterScript(CSyncScript *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  string *psVar3;
  char *pcVar4;
  SITEMTYPE *pSVar5;
  undefined4 uVar6;
  string local_74 [4];
  string local_70;
  string local_6c;
  uchar local_68;
  uchar local_67;
  uchar local_66;
  uchar local_65;
  SITEMTYPE local_64 [12];
  string local_58 [4];
  SWEAPONTYPE local_54 [8];
  SITEMTYPE local_4c [12];
  string local_40 [4];
  SARMORTYPE local_3c [8];
  string local_34 [4];
  SITEMTYPE local_30 [12];
  string local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    std::string::string((string *)&local_6c);
                    /* try { // try from 086250a4 to 086250a8 has its CatchHandler @ 08625663 */
    std::string::string((string *)&local_70);
                    /* try { // try from 086250af to 086250b3 has its CatchHandler @ 08625641 */
    std::string::string(local_74);
    while( true ) {
                    /* try { // try from 086250c5 to 086252a3 has its CatchHandler @ 0862562c */
      cVar1 = ScanType((string *)&local_6c,true);
      if (cVar1 != '\x01') break;
      bVar2 = std::operator==(&local_6c,"[master type]");
      if (bVar2) {
        local_20 = ScanInt((bool *)0x0);
        ScanStr((string *)&local_70);
        local_68 = (uchar)local_20;
        psVar3 = (string *)
                 std::
                 map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                 ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                               *)(this + 100),&local_68);
        std::string::operator=(psVar3,(string *)&local_70);
      }
      else {
        bVar2 = std::operator==(&local_6c,"[type addition]");
        if (bVar2) {
          local_20 = ScanInt((bool *)0x0);
          local_67 = (uchar)local_20;
          std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                    ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4),&local_67);
        }
        else {
          bVar2 = std::operator==(&local_6c,"[reverse desc]");
          if (bVar2) {
            local_20 = ScanInt((bool *)0x0);
            local_66 = (uchar)local_20;
            std::vector<unsigned_char,std::allocator<unsigned_char>>::push_back
                      ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10),
                       &local_66);
          }
          else {
            bVar2 = std::operator==(&local_6c,"[material type]");
            if (bVar2) {
              local_20 = ScanInt((bool *)0x0);
              ScanStr((string *)&local_70);
              local_65 = (uchar)local_20;
              psVar3 = (string *)
                       std::
                       map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                       ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                                     *)(this + 0x7c),&local_65);
              std::string::operator=(psVar3,(string *)&local_70);
            }
            else {
              bVar2 = std::operator==(&local_6c,"[weapon type]");
              if (bVar2) {
                ScanStr((string *)&local_70);
                local_20 = ScanInt((bool *)0x0);
                local_1c = ScanInt((bool *)0x0);
                local_18 = ScanInt((bool *)0x0);
                ScanStr(local_74);
                pcVar4 = (char *)std::string::c_str((string *)&local_70);
                local_10 = getCharacterJob(pcVar4);
                std::string::string(local_58,local_74);
                    /* try { // try from 086252d7 to 086252db has its CatchHandler @ 0862533d */
                SITEMTYPE::SITEMTYPE
                          (local_64,false,(uchar)local_20,(uchar)local_1c,(ushort)local_18,
                           (string)local_58);
                SWEAPONTYPE::SWEAPONTYPE(local_54,local_10,local_1c);
                    /* try { // try from 08625305 to 08625318 has its CatchHandler @ 0862531b */
                pSVar5 = (SITEMTYPE *)
                         std::
                         map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                         ::operator[]((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                                       *)(this + 0x34),local_54);
                SITEMTYPE::operator=(pSVar5,local_64);
                    /* try { // try from 08625336 to 0862533a has its CatchHandler @ 0862533d */
                SITEMTYPE::~SITEMTYPE(local_64);
                    /* try { // try from 0862535b to 086253d4 has its CatchHandler @ 0862562c */
                std::string::~string(local_58);
              }
              else {
                bVar2 = std::operator==(&local_6c,"[armor type]");
                if (bVar2) {
                  ScanStr((string *)&local_70);
                  local_20 = ScanInt((bool *)0x0);
                  local_1c = ScanInt((bool *)0x0);
                  local_18 = ScanInt((bool *)0x0);
                  ScanStr(local_74);
                  std::string::string(local_40,local_74);
                    /* try { // try from 08625408 to 0862540c has its CatchHandler @ 086254c7 */
                  SITEMTYPE::SITEMTYPE
                            (local_4c,false,(uchar)local_20,(uchar)local_1c,(ushort)local_18,
                             (string)local_40);
                    /* try { // try from 0862541a to 0862541e has its CatchHandler @ 086254a5 */
                  std::string::string(local_34,(string *)&local_70);
                    /* try { // try from 08625436 to 0862543a has its CatchHandler @ 08625483 */
                  SARMORTYPE::SARMORTYPE(local_3c,(uchar)local_1c,(string)local_34);
                    /* try { // try from 0862544b to 0862545e has its CatchHandler @ 08625461 */
                  pSVar5 = (SITEMTYPE *)
                           std::
                           map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                           ::operator[]((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
                                         *)(this + 0x4c),local_3c);
                  SITEMTYPE::operator=(pSVar5,local_4c);
                    /* try { // try from 0862547c to 08625480 has its CatchHandler @ 08625483 */
                  SARMORTYPE::~SARMORTYPE(local_3c);
                    /* try { // try from 0862549e to 086254a2 has its CatchHandler @ 086254a5 */
                  std::string::~string(local_34);
                    /* try { // try from 086254c0 to 086254c4 has its CatchHandler @ 086254c7 */
                  SITEMTYPE::~SITEMTYPE(local_4c);
                    /* try { // try from 086254e5 to 0862556d has its CatchHandler @ 0862562c */
                  std::string::~string(local_40);
                }
                else {
                  bVar2 = std::operator==(&local_6c,"[item type]");
                  if (bVar2) {
                    ScanStr((string *)&local_70);
                    local_20 = ScanInt((bool *)0x0);
                    local_1c = ScanInt((bool *)0x0);
                    local_18 = ScanInt((bool *)0x0);
                    local_14 = ScanInt((bool *)0x0);
                    ScanStr(local_74);
                    std::string::string(local_24,local_74);
                    /* try { // try from 086255a7 to 086255ab has its CatchHandler @ 086255f4 */
                    SITEMTYPE::SITEMTYPE
                              (local_30,local_20 != 0,(uchar)local_1c,(uchar)local_18,
                               (ushort)local_14,(string)local_24);
                    /* try { // try from 086255bc to 086255cf has its CatchHandler @ 086255d2 */
                    pSVar5 = (SITEMTYPE *)
                             std::
                             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                                           *)(this + 0x1c),&local_70);
                    SITEMTYPE::operator=(pSVar5,local_30);
                    /* try { // try from 086255ed to 086255f1 has its CatchHandler @ 086255f4 */
                    SITEMTYPE::~SITEMTYPE(local_30);
                    /* try { // try from 0862560f to 08625613 has its CatchHandler @ 0862562c */
                    std::string::~string(local_24);
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar6 = 1;
                    /* try { // try from 08625625 to 08625629 has its CatchHandler @ 08625641 */
    std::string::~string(local_74);
                    /* try { // try from 0862565c to 08625660 has its CatchHandler @ 08625663 */
    std::string::~string((string *)&local_70);
    std::string::~string((string *)&local_6c);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## insertCeraShopItemIntoDB

```asm
// === 08622abc sync_script::CSyncScript::insertCeraShopItemIntoDB  [0x08622abc-0x8622c65] ===
 8622abc:	55                   	push   %ebp
 8622abd:	89 e5                	mov    %esp,%ebp
 8622abf:	57                   	push   %edi
 8622ac0:	53                   	push   %ebx
 8622ac1:	81 ec 40 01 00 00    	sub    $0x140,%esp
 8622ac7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8622aca:	66 89 85 e4 fe ff ff 	mov    %ax,-0x11c(%ebp)
 8622ad1:	8b 45 08             	mov    0x8(%ebp),%eax
 8622ad4:	0f b6 00             	movzbl (%eax),%eax
 8622ad7:	83 f0 01             	xor    $0x1,%eax
 8622ada:	84 c0                	test   %al,%al
 8622adc:	74 0a                	je     8622ae8 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x2c>
 8622ade:	b8 01 00 00 00       	mov    $0x1,%eax
 8622ae3:	e9 73 01 00 00       	jmp    8622c5b <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x19f>
 8622ae8:	83 7d 0c ff          	cmpl   $0xffffffff,0xc(%ebp)
 8622aec:	0f 84 64 01 00 00    	je     8622c56 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x19a>
 8622af2:	8d 95 f5 fe ff ff    	lea    -0x10b(%ebp),%edx
 8622af8:	bb ff 00 00 00       	mov    $0xff,%ebx
 8622afd:	b8 00 00 00 00       	mov    $0x0,%eax
 8622b02:	89 d1                	mov    %edx,%ecx
 8622b04:	83 e1 01             	and    $0x1,%ecx
 8622b07:	85 c9                	test   %ecx,%ecx
 8622b09:	74 08                	je     8622b13 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x57>
 8622b0b:	88 02                	mov    %al,(%edx)
 8622b0d:	83 c2 01             	add    $0x1,%edx
 8622b10:	83 eb 01             	sub    $0x1,%ebx
 8622b13:	89 d1                	mov    %edx,%ecx
 8622b15:	83 e1 02             	and    $0x2,%ecx
 8622b18:	85 c9                	test   %ecx,%ecx
 8622b1a:	74 09                	je     8622b25 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x69>
 8622b1c:	66 89 02             	mov    %ax,(%edx)
 8622b1f:	83 c2 02             	add    $0x2,%edx
 8622b22:	83 eb 02             	sub    $0x2,%ebx
 8622b25:	89 d9                	mov    %ebx,%ecx
 8622b27:	c1 e9 02             	shr    $0x2,%ecx
 8622b2a:	89 d7                	mov    %edx,%edi
 8622b2c:	f3 ab                	rep stos %eax,%es:(%edi)
 8622b2e:	89 fa                	mov    %edi,%edx
 8622b30:	89 d9                	mov    %ebx,%ecx
 8622b32:	83 e1 02             	and    $0x2,%ecx
 8622b35:	85 c9                	test   %ecx,%ecx
 8622b37:	74 06                	je     8622b3f <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x83>
 8622b39:	66 89 02             	mov    %ax,(%edx)
 8622b3c:	83 c2 02             	add    $0x2,%edx
 8622b3f:	89 d9                	mov    %ebx,%ecx
 8622b41:	83 e1 01             	and    $0x1,%ecx
 8622b44:	85 c9                	test   %ecx,%ecx
 8622b46:	74 05                	je     8622b4d <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x91>
 8622b48:	88 02                	mov    %al,(%edx)
 8622b4a:	83 c2 01             	add    $0x1,%edx
 8622b4d:	0f bf 85 e4 fe ff ff 	movswl -0x11c(%ebp),%eax
 8622b54:	83 f8 02             	cmp    $0x2,%eax
 8622b57:	74 3b                	je     8622b94 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0xd8>
 8622b59:	83 f8 02             	cmp    $0x2,%eax
 8622b5c:	7f 0a                	jg     8622b68 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0xac>
 8622b5e:	83 f8 01             	cmp    $0x1,%eax
 8622b61:	74 11                	je     8622b74 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0xb8>
 8622b63:	e9 8a 00 00 00       	jmp    8622bf2 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x136>
 8622b68:	83 f8 03             	cmp    $0x3,%eax
 8622b6b:	74 47                	je     8622bb4 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0xf8>
 8622b6d:	83 f8 04             	cmp    $0x4,%eax
 8622b70:	74 62                	je     8622bd4 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x118>
 8622b72:	eb 7e                	jmp    8622bf2 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x136>
 8622b74:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8622b7b:	00 
 8622b7c:	c7 44 24 04 9c 3d ce 	movl   $0x8ce3d9c,0x4(%esp)
 8622b83:	08 
 8622b84:	8d 85 f5 fe ff ff    	lea    -0x10b(%ebp),%eax
 8622b8a:	89 04 24             	mov    %eax,(%esp)
 8622b8d:	e8 0e ad a5 ff       	call   807d8a0 <memcpy@plt>
 8622b92:	eb 5e                	jmp    8622bf2 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x136>
 8622b94:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8622b9b:	00 
 8622b9c:	c7 44 24 04 a0 3d ce 	movl   $0x8ce3da0,0x4(%esp)
 8622ba3:	08 
 8622ba4:	8d 85 f5 fe ff ff    	lea    -0x10b(%ebp),%eax
 8622baa:	89 04 24             	mov    %eax,(%esp)
 8622bad:	e8 ee ac a5 ff       	call   807d8a0 <memcpy@plt>
 8622bb2:	eb 3e                	jmp    8622bf2 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x136>
 8622bb4:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8622bbb:	00 
 8622bbc:	c7 44 24 04 a5 3d ce 	movl   $0x8ce3da5,0x4(%esp)
 8622bc3:	08 
 8622bc4:	8d 85 f5 fe ff ff    	lea    -0x10b(%ebp),%eax
 8622bca:	89 04 24             	mov    %eax,(%esp)
 8622bcd:	e8 ce ac a5 ff       	call   807d8a0 <memcpy@plt>
 8622bd2:	eb 1e                	jmp    8622bf2 <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x136>
 8622bd4:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8622bdb:	00 
 8622bdc:	c7 44 24 04 aa 3d ce 	movl   $0x8ce3daa,0x4(%esp)
 8622be3:	08 
 8622be4:	8d 85 f5 fe ff ff    	lea    -0x10b(%ebp),%eax
 8622bea:	89 04 24             	mov    %eax,(%esp)
 8622bed:	e8 ae ac a5 ff       	call   807d8a0 <memcpy@plt>
 8622bf2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622bf7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622bfe:	00 
 8622bff:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622c06:	00 
 8622c07:	89 04 24             	mov    %eax,(%esp)
 8622c0a:	e8 2f 26 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622c0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622c12:	8b 45 18             	mov    0x18(%ebp),%eax
 8622c15:	89 44 24 14          	mov    %eax,0x14(%esp)
 8622c19:	8b 45 14             	mov    0x14(%ebp),%eax
 8622c1c:	89 44 24 10          	mov    %eax,0x10(%esp)
 8622c20:	8b 45 10             	mov    0x10(%ebp),%eax
 8622c23:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8622c27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622c2a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8622c2e:	c7 44 24 04 b4 3d ce 	movl   $0x8ce3db4,0x4(%esp)
 8622c35:	08 
 8622c36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622c39:	89 04 24             	mov    %eax,(%esp)
 8622c3c:	e8 7f 15 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622c41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622c48:	00 
 8622c49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622c4c:	89 04 24             	mov    %eax,(%esp)
 8622c4f:	e8 d2 16 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622c54:	eb 05                	jmp    8622c5b <_ZN11sync_script11CSyncScript24insertCeraShopItemIntoDBEjjiisPKcS2_+0x19f>
 8622c56:	b8 01 00 00 00       	mov    $0x1,%eax
 8622c5b:	81 c4 40 01 00 00    	add    $0x140,%esp
 8622c61:	5b                   	pop    %ebx
 8622c62:	5f                   	pop    %edi
 8622c63:	5d                   	pop    %ebp
 8622c64:	c3                   	ret
 8622c65:	90                   	nop

```

```c
// sync_script::CSyncScript::insertCeraShopItemIntoDB @ 0x8622abc

/* sync_script::CSyncScript::insertCeraShopItemIntoDB(unsigned int, unsigned int, int, int, short,
   char const*, char const*) */

undefined4
sync_script::CSyncScript::insertCeraShopItemIntoDB
          (uint param_1,uint param_2,int param_3,int param_4,short param_5,char *param_6,
          char *param_7)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  bool bVar6;
  undefined2 in_stack_00000016;
  undefined1 local_10f [255];
  MySQL *local_10;
  
  sVar1 = (short)param_6;
  if (*(char *)param_1 == '\x01') {
    if (param_2 == 0xffffffff) {
      uVar2 = 1;
    }
    else {
      puVar4 = (undefined4 *)local_10f;
      uVar5 = 0xff;
      bVar6 = ((uint)puVar4 & 1) != 0;
      if (bVar6) {
        local_10f[0] = 0;
        puVar4 = (undefined4 *)(local_10f + 1);
        uVar5 = 0xfe;
      }
      if (((uint)puVar4 & 2) != 0) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
        uVar5 = uVar5 - 2;
      }
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      if ((uVar5 & 2) != 0) {
        *(undefined2 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 2);
      }
      if (!bVar6) {
        *(undefined1 *)puVar4 = 0;
      }
      if (sVar1 == 2) {
        memcpy(local_10f,&DAT_08ce3da0,5);
      }
      else if (sVar1 < 3) {
        if (sVar1 == 1) {
          memcpy(local_10f,&DAT_08ce3d9c,4);
        }
      }
      else if (sVar1 == 3) {
        memcpy(local_10f,&DAT_08ce3da5,5);
      }
      else if (sVar1 == 4) {
        memcpy(local_10f,&DAT_08ce3daa,7);
      }
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
      MySQL::set_query(local_10,
                       "inSert into dnf_item_price(ipg_no, it_no, it_cnt, cera_price) values(%d,%d,%d,%d)"
                       ,param_2,param_3,param_4,_param_5);
      uVar2 = MySQL::exec(local_10,true);
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_aicharacter_info_to_db

```asm
// === 08626392 sync_script::CSyncScript::insert_aicharacter_info_to_db  [0x08626392-0x8626539] ===
 8626392:	55                   	push   %ebp
 8626393:	89 e5                	mov    %esp,%ebp
 8626395:	57                   	push   %edi
 8626396:	56                   	push   %esi
 8626397:	53                   	push   %ebx
 8626398:	81 ec 4c 04 00 00    	sub    $0x44c,%esp
 862639e:	8b 45 08             	mov    0x8(%ebp),%eax
 86263a1:	0f b6 00             	movzbl (%eax),%eax
 86263a4:	83 f0 01             	xor    $0x1,%eax
 86263a7:	84 c0                	test   %al,%al
 86263a9:	74 0a                	je     86263b5 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x23>
 86263ab:	b8 01 00 00 00       	mov    $0x1,%eax
 86263b0:	e9 7a 01 00 00       	jmp    862652f <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x19d>
 86263b5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86263ba:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86263c1:	00 
 86263c2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86263c9:	00 
 86263ca:	89 04 24             	mov    %eax,(%esp)
 86263cd:	e8 6c ee dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86263d2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86263d5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86263d9:	74 19                	je     86263f4 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x62>
 86263db:	8b 45 10             	mov    0x10(%ebp),%eax
 86263de:	83 c0 04             	add    $0x4,%eax
 86263e1:	89 04 24             	mov    %eax,(%esp)
 86263e4:	e8 87 02 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 86263e9:	85 c0                	test   %eax,%eax
 86263eb:	74 07                	je     86263f4 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x62>
 86263ed:	b8 01 00 00 00       	mov    $0x1,%eax
 86263f2:	eb 05                	jmp    86263f9 <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x67>
 86263f4:	b8 00 00 00 00       	mov    $0x0,%eax
 86263f9:	84 c0                	test   %al,%al
 86263fb:	0f 84 29 01 00 00    	je     862652a <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x198>
 8626401:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 8626408:	00 
 8626409:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8626410:	00 
 8626411:	c7 04 24 00 36 47 09 	movl   $0x9473600,(%esp)
 8626418:	e8 a3 78 a5 ff       	call   807dcc0 <memset@plt>
 862641d:	8d 9d d4 fb ff ff    	lea    -0x42c(%ebp),%ebx
 8626423:	b8 00 00 00 00       	mov    $0x0,%eax
 8626428:	ba 00 01 00 00       	mov    $0x100,%edx
 862642d:	89 df                	mov    %ebx,%edi
 862642f:	89 d1                	mov    %edx,%ecx
 8626431:	f3 ab                	rep stos %eax,%es:(%edi)
 8626433:	8b 45 10             	mov    0x10(%ebp),%eax
 8626436:	83 c0 04             	add    $0x4,%eax
 8626439:	89 04 24             	mov    %eax,(%esp)
 862643c:	e8 af 00 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626441:	8d 95 d4 fb ff ff    	lea    -0x42c(%ebp),%edx
 8626447:	89 54 24 04          	mov    %edx,0x4(%esp)
 862644b:	89 04 24             	mov    %eax,(%esp)
 862644e:	e8 b5 29 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8626453:	83 f0 01             	xor    $0x1,%eax
 8626456:	84 c0                	test   %al,%al
 8626458:	74 70                	je     86264ca <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x138>
 862645a:	8b 45 10             	mov    0x10(%ebp),%eax
 862645d:	83 c0 04             	add    $0x4,%eax
 8626460:	89 04 24             	mov    %eax,(%esp)
 8626463:	e8 88 00 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626468:	89 c7                	mov    %eax,%edi
 862646a:	e8 71 29 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 862646f:	89 c6                	mov    %eax,%esi
 8626471:	e8 56 29 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8626476:	89 c3                	mov    %eax,%ebx
 8626478:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 862647f:	00 
 8626480:	c7 44 24 08 95 0b 00 	movl   $0xb95,0x8(%esp)
 8626487:	00 
 8626488:	c7 44 24 04 c0 55 ce 	movl   $0x8ce55c0,0x4(%esp)
 862648f:	08 
 8626490:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8626493:	89 04 24             	mov    %eax,(%esp)
 8626496:	e8 7d 92 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 862649b:	c7 44 24 18 95 0b 00 	movl   $0xb95,0x18(%esp)
 86264a2:	00 
 86264a3:	c7 44 24 14 c0 55 ce 	movl   $0x8ce55c0,0x14(%esp)
 86264aa:	08 
 86264ab:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86264af:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86264b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86264b7:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 86264be:	08 
 86264bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86264c2:	89 04 24             	mov    %eax,(%esp)
 86264c5:	e8 be 92 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86264ca:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 86264d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 86264d4:	c7 44 24 04 00 36 47 	movl   $0x9473600,0x4(%esp)
 86264db:	09 
 86264dc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86264df:	89 04 24             	mov    %eax,(%esp)
 86264e2:	e8 c3 e3 dc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 86264e7:	c7 44 24 0c 00 36 47 	movl   $0x9473600,0xc(%esp)
 86264ee:	09 
 86264ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 86264f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 86264f6:	c7 44 24 04 10 48 ce 	movl   $0x8ce4810,0x4(%esp)
 86264fd:	08 
 86264fe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8626501:	89 04 24             	mov    %eax,(%esp)
 8626504:	e8 b7 dc dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8626509:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8626510:	00 
 8626511:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8626514:	89 04 24             	mov    %eax,(%esp)
 8626517:	e8 0a de dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862651c:	83 f0 01             	xor    $0x1,%eax
 862651f:	84 c0                	test   %al,%al
 8626521:	74 07                	je     862652a <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x198>
 8626523:	b8 00 00 00 00       	mov    $0x0,%eax
 8626528:	eb 05                	jmp    862652f <_ZN11sync_script11CSyncScript29insert_aicharacter_info_to_dbEiRK25STAICharacterCommonScript+0x19d>
 862652a:	b8 01 00 00 00       	mov    $0x1,%eax
 862652f:	81 c4 4c 04 00 00    	add    $0x44c,%esp
 8626535:	5b                   	pop    %ebx
 8626536:	5e                   	pop    %esi
 8626537:	5f                   	pop    %edi
 8626538:	5d                   	pop    %ebp
 8626539:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_aicharacter_info_to_db @ 0x8626392

/* sync_script::CSyncScript::insert_aicharacter_info_to_db(int, STAICharacterCommonScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_aicharacter_info_to_db
          (CSyncScript *this,int param_1,STAICharacterCommonScript *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_430 [1024];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar8 = 0;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  if ((param_1 == 0) || (iVar3 = std::string::length((string *)(param_2 + 4)), iVar3 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    memset(insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
           aicharacter_info_name,0,0xf0);
    pcVar4 = local_430;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_2 + 4));
    cVar2 = CodePage::script2Database(pcVar4,local_430);
    if (cVar2 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_2 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_aicharacter_info_to_db(int, const STAICharacterCommonScript&)"
                         ,0xb95,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_aicharacter_info_to_db(int, const STAICharacterCommonScript&)"
                 ,0xb95);
    }
    MySQL::escape_string
              (local_20,insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
                        aicharacter_info_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_aicharacter_info(idx, ai_name_kr) values(%d, \'%s\')"
                     ,param_1,insert_aicharacter_info_to_db(int,STAICharacterCommonScript_const&)::
                              aicharacter_info_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## insert_artifact_info_to_db

```asm
// === 08624b8e sync_script::CSyncScript::insert_artifact_info_to_db  [0x08624b8e-0x8624c95] ===
 8624b8e:	55                   	push   %ebp
 8624b8f:	89 e5                	mov    %esp,%ebp
 8624b91:	53                   	push   %ebx
 8624b92:	83 ec 64             	sub    $0x64,%esp
 8624b95:	8b 45 08             	mov    0x8(%ebp),%eax
 8624b98:	0f b6 00             	movzbl (%eax),%eax
 8624b9b:	83 f0 01             	xor    $0x1,%eax
 8624b9e:	84 c0                	test   %al,%al
 8624ba0:	74 0a                	je     8624bac <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0x1e>
 8624ba2:	b8 01 00 00 00       	mov    $0x1,%eax
 8624ba7:	e9 e4 00 00 00       	jmp    8624c90 <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0x102>
 8624bac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624baf:	05 38 07 00 00       	add    $0x738,%eax
 8624bb4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8624bb7:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8624bbc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8624bc3:	00 
 8624bc4:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8624bcb:	00 
 8624bcc:	89 04 24             	mov    %eax,(%esp)
 8624bcf:	e8 6a 06 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8624bd4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8624bd7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624bda:	d9 40 24             	flds   0x24(%eax)
 8624bdd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624be0:	d9 40 20             	flds   0x20(%eax)
 8624be3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624be6:	d9 40 1c             	flds   0x1c(%eax)
 8624be9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624bec:	d9 40 18             	flds   0x18(%eax)
 8624bef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624bf2:	d9 40 14             	flds   0x14(%eax)
 8624bf5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624bf8:	d9 40 10             	flds   0x10(%eax)
 8624bfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624bfe:	d9 40 0c             	flds   0xc(%eax)
 8624c01:	d9 ce                	fxch   %st(6)
 8624c03:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624c06:	8b 58 08             	mov    0x8(%eax),%ebx
 8624c09:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624c0c:	8b 48 04             	mov    0x4(%eax),%ecx
 8624c0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8624c12:	8b 10                	mov    (%eax),%edx
 8624c14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624c17:	8b 00                	mov    (%eax),%eax
 8624c19:	dd 5c 24 48          	fstpl  0x48(%esp)
 8624c1d:	d9 cc                	fxch   %st(4)
 8624c1f:	dd 5c 24 40          	fstpl  0x40(%esp)
 8624c23:	d9 ca                	fxch   %st(2)
 8624c25:	dd 5c 24 38          	fstpl  0x38(%esp)
 8624c29:	dd 5c 24 30          	fstpl  0x30(%esp)
 8624c2d:	dd 5c 24 28          	fstpl  0x28(%esp)
 8624c31:	dd 5c 24 20          	fstpl  0x20(%esp)
 8624c35:	dd 5c 24 18          	fstpl  0x18(%esp)
 8624c39:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8624c3d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8624c41:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8624c45:	89 44 24 08          	mov    %eax,0x8(%esp)
 8624c49:	c7 44 24 04 78 42 ce 	movl   $0x8ce4278,0x4(%esp)
 8624c50:	08 
 8624c51:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624c54:	89 04 24             	mov    %eax,(%esp)
 8624c57:	e8 64 f5 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8624c5c:	83 f0 01             	xor    $0x1,%eax
 8624c5f:	84 c0                	test   %al,%al
 8624c61:	74 07                	je     8624c6a <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0xdc>
 8624c63:	b8 00 00 00 00       	mov    $0x0,%eax
 8624c68:	eb 26                	jmp    8624c90 <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0x102>
 8624c6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624c71:	00 
 8624c72:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624c75:	89 04 24             	mov    %eax,(%esp)
 8624c78:	e8 a9 f6 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8624c7d:	83 f0 01             	xor    $0x1,%eax
 8624c80:	84 c0                	test   %al,%al
 8624c82:	74 07                	je     8624c8b <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0xfd>
 8624c84:	b8 00 00 00 00       	mov    $0x0,%eax
 8624c89:	eb 05                	jmp    8624c90 <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript+0x102>
 8624c8b:	b8 01 00 00 00       	mov    $0x1,%eax
 8624c90:	83 c4 64             	add    $0x64,%esp
 8624c93:	5b                   	pop    %ebx
 8624c94:	5d                   	pop    %ebp
 8624c95:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_artifact_info_to_db @ 0x8624b8e

/* sync_script::CSyncScript::insert_artifact_info_to_db(STEquipmentScript*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_artifact_info_to_db(CSyncScript *this,STEquipmentScript *param_1)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,
                             "inSert into dnf_artifact_info(it_id, creature_min_level, physical_attack, magical_attack, skill_consume_mp_rate, skill_charge_time_rate, skill_overcharge_time_rate, experience_amount, physical_critical_hit, magical_critical_hit, stuck) values(%d, %d, %d, %d, %f, %f, %f, %f, %f, %f, %f)"
                             ,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 0x738),
                             *(undefined4 *)(param_1 + 0x73c),*(undefined4 *)(param_1 + 0x740),
                             (double)*(float *)(param_1 + 0x744),(double)*(float *)(param_1 + 0x748)
                             ,(double)*(float *)(param_1 + 0x74c),
                             (double)*(float *)(param_1 + 0x750),(double)*(float *)(param_1 + 0x754)
                             ,(double)*(float *)(param_1 + 0x758),
                             (double)*(float *)(param_1 + 0x75c));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_charac_action_point_desc

```asm
// === 08625db8 sync_script::CSyncScript::insert_charac_action_point_desc  [0x08625db8-0x8625dd9] ===
 8625db8:	55                   	push   %ebp
 8625db9:	89 e5                	mov    %esp,%ebp
 8625dbb:	83 ec 08             	sub    $0x8,%esp
 8625dbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8625dc1:	0f b6 00             	movzbl (%eax),%eax
 8625dc4:	83 f0 01             	xor    $0x1,%eax
 8625dc7:	84 c0                	test   %al,%al
 8625dc9:	74 07                	je     8625dd2 <_ZN11sync_script11CSyncScript31insert_charac_action_point_descEv+0x1a>
 8625dcb:	b8 01 00 00 00       	mov    $0x1,%eax
 8625dd0:	eb 05                	jmp    8625dd7 <_ZN11sync_script11CSyncScript31insert_charac_action_point_descEv+0x1f>
 8625dd2:	e8 b5 c8 af ff       	call   812268c <_ZN8APSystem11CSyncScript15InsertDescTableEv>
 8625dd7:	c9                   	leave
 8625dd8:	c3                   	ret
 8625dd9:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_charac_action_point_desc @ 0x8625db8

/* sync_script::CSyncScript::insert_charac_action_point_desc() */

undefined4 __thiscall sync_script::CSyncScript::insert_charac_action_point_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = APSystem::CSyncScript::InsertDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## insert_charac_advance_altar_item_desc

```asm
// === 08625dfc sync_script::CSyncScript::insert_charac_advance_altar_item_desc  [0x08625dfc-0x8625e1d] ===
 8625dfc:	55                   	push   %ebp
 8625dfd:	89 e5                	mov    %esp,%ebp
 8625dff:	83 ec 08             	sub    $0x8,%esp
 8625e02:	8b 45 08             	mov    0x8(%ebp),%eax
 8625e05:	0f b6 00             	movzbl (%eax),%eax
 8625e08:	83 f0 01             	xor    $0x1,%eax
 8625e0b:	84 c0                	test   %al,%al
 8625e0d:	74 07                	je     8625e16 <_ZN11sync_script11CSyncScript37insert_charac_advance_altar_item_descEv+0x1a>
 8625e0f:	b8 01 00 00 00       	mov    $0x1,%eax
 8625e14:	eb 05                	jmp    8625e1b <_ZN11sync_script11CSyncScript37insert_charac_advance_altar_item_descEv+0x1f>
 8625e16:	e8 8b e0 b0 ff       	call   8133ea6 <_ZN12advancealtar10SyncScript19insertItemDescTableEv>
 8625e1b:	c9                   	leave
 8625e1c:	c3                   	ret
 8625e1d:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_charac_advance_altar_item_desc @ 0x8625dfc

/* sync_script::CSyncScript::insert_charac_advance_altar_item_desc() */

undefined4 __thiscall
sync_script::CSyncScript::insert_charac_advance_altar_item_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = advancealtar::SyncScript::insertItemDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## insert_charac_quest_category

```asm
// === 086229d6 sync_script::CSyncScript::insert_charac_quest_category  [0x086229d6-0x8622a59] ===
 86229d6:	55                   	push   %ebp
 86229d7:	89 e5                	mov    %esp,%ebp
 86229d9:	83 ec 28             	sub    $0x28,%esp
 86229dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86229df:	0f b6 00             	movzbl (%eax),%eax
 86229e2:	83 f0 01             	xor    $0x1,%eax
 86229e5:	84 c0                	test   %al,%al
 86229e7:	74 07                	je     86229f0 <_ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj+0x1a>
 86229e9:	b8 01 00 00 00       	mov    $0x1,%eax
 86229ee:	eb 67                	jmp    8622a57 <_ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj+0x81>
 86229f0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86229f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86229fc:	00 
 86229fd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8622a04:	00 
 8622a05:	89 04 24             	mov    %eax,(%esp)
 8622a08:	e8 31 28 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622a0d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622a10:	8b 45 10             	mov    0x10(%ebp),%eax
 8622a13:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8622a17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622a1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8622a1e:	c7 44 24 04 38 3d ce 	movl   $0x8ce3d38,0x4(%esp)
 8622a25:	08 
 8622a26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622a29:	89 04 24             	mov    %eax,(%esp)
 8622a2c:	e8 8f 17 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622a31:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622a38:	00 
 8622a39:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622a3c:	89 04 24             	mov    %eax,(%esp)
 8622a3f:	e8 e2 18 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622a44:	83 f0 01             	xor    $0x1,%eax
 8622a47:	84 c0                	test   %al,%al
 8622a49:	74 07                	je     8622a52 <_ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj+0x7c>
 8622a4b:	b8 00 00 00 00       	mov    $0x0,%eax
 8622a50:	eb 05                	jmp    8622a57 <_ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj+0x81>
 8622a52:	b8 01 00 00 00       	mov    $0x1,%eax
 8622a57:	c9                   	leave
 8622a58:	c3                   	ret
 8622a59:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_charac_quest_category @ 0x86229d6

/* sync_script::CSyncScript::insert_charac_quest_category(unsigned int, unsigned int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_charac_quest_category(CSyncScript *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"inSert into charac_quest_ref(origin_idx, mapped_idx) values(%d, %d)",
                     param_1,param_2);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_creature_info_to_db

```asm
// === 08624414 sync_script::CSyncScript::insert_creature_info_to_db  [0x08624414-0x8624b09] ===
 8624414:	55                   	push   %ebp
 8624415:	89 e5                	mov    %esp,%ebp
 8624417:	57                   	push   %edi
 8624418:	56                   	push   %esi
 8624419:	53                   	push   %ebx
 862441a:	81 ec 1c 0c 00 00    	sub    $0xc1c,%esp
 8624420:	8b 45 08             	mov    0x8(%ebp),%eax
 8624423:	0f b6 00             	movzbl (%eax),%eax
 8624426:	83 f0 01             	xor    $0x1,%eax
 8624429:	84 c0                	test   %al,%al
 862442b:	74 0a                	je     8624437 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x23>
 862442d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8624432:	e9 c6 06 00 00       	jmp    8624afd <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6e9>
 8624437:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 862443e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8624445:	eb 1a                	jmp    8624461 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x4d>
 8624447:	8b 45 e0             	mov    -0x20(%ebp),%eax
 862444a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 862444d:	8b 55 10             	mov    0x10(%ebp),%edx
 8624450:	83 c1 14             	add    $0x14,%ecx
 8624453:	8b 14 8a             	mov    (%edx,%ecx,4),%edx
 8624456:	83 c2 30             	add    $0x30,%edx
 8624459:	88 54 05 a8          	mov    %dl,-0x58(%ebp,%eax,1)
 862445d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8624461:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8624464:	83 f8 02             	cmp    $0x2,%eax
 8624467:	0f 96 c0             	setbe  %al
 862446a:	84 c0                	test   %al,%al
 862446c:	75 d9                	jne    8624447 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x33>
 862446e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8624471:	89 04 24             	mov    %eax,(%esp)
 8624474:	e8 df 1a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8624479:	8b 45 10             	mov    0x10(%ebp),%eax
 862447c:	8d 90 4c 01 00 00    	lea    0x14c(%eax),%edx
 8624482:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8624485:	89 54 24 04          	mov    %edx,0x4(%esp)
 8624489:	89 04 24             	mov    %eax,(%esp)
 862448c:	e8 e9 8e aa ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8624491:	83 ec 04             	sub    $0x4,%esp
 8624494:	8b 45 10             	mov    0x10(%ebp),%eax
 8624497:	8d 90 4c 01 00 00    	lea    0x14c(%eax),%edx
 862449d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86244a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86244a4:	89 04 24             	mov    %eax,(%esp)
 86244a7:	e8 a2 8e aa ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 86244ac:	83 ec 04             	sub    $0x4,%esp
 86244af:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86244b2:	8d 55 b0             	lea    -0x50(%ebp),%edx
 86244b5:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86244b9:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 86244bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86244c0:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86244c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86244c7:	89 04 24             	mov    %eax,(%esp)
 86244ca:	e8 ab 49 00 00       	call   8628e7a <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 86244cf:	83 ec 04             	sub    $0x4,%esp
 86244d2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86244d5:	8d 55 ac             	lea    -0x54(%ebp),%edx
 86244d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86244dc:	89 04 24             	mov    %eax,(%esp)
 86244df:	e8 dc 2d 00 00       	call   86272c0 <_ZN11sync_script12CStringMakercvSsEv>
 86244e4:	83 ec 04             	sub    $0x4,%esp
 86244e7:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86244ea:	89 04 24             	mov    %eax,(%esp)
 86244ed:	e8 8e b0 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86244f2:	eb 45                	jmp    8624539 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x125>
 86244f4:	89 d3                	mov    %edx,%ebx
 86244f6:	89 c6                	mov    %eax,%esi
 86244f8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86244fb:	89 04 24             	mov    %eax,(%esp)
 86244fe:	e8 7d b0 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624503:	89 f0                	mov    %esi,%eax
 8624505:	89 da                	mov    %ebx,%edx
 8624507:	eb 15                	jmp    862451e <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x10a>
 8624509:	89 d3                	mov    %edx,%ebx
 862450b:	89 c6                	mov    %eax,%esi
 862450d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8624510:	89 04 24             	mov    %eax,(%esp)
 8624513:	e8 c8 36 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624518:	89 f0                	mov    %esi,%eax
 862451a:	89 da                	mov    %ebx,%edx
 862451c:	eb 00                	jmp    862451e <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x10a>
 862451e:	89 d3                	mov    %edx,%ebx
 8624520:	89 c6                	mov    %eax,%esi
 8624522:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8624525:	89 04 24             	mov    %eax,(%esp)
 8624528:	e8 53 b0 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862452d:	89 f0                	mov    %esi,%eax
 862452f:	89 da                	mov    %ebx,%edx
 8624531:	89 04 24             	mov    %eax,(%esp)
 8624534:	e8 17 f2 4b 00       	call   8ae3750 <_Unwind_Resume>
 8624539:	8d 45 b0             	lea    -0x50(%ebp),%eax
 862453c:	89 04 24             	mov    %eax,(%esp)
 862453f:	e8 3c b0 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624544:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8624547:	89 04 24             	mov    %eax,(%esp)
 862454a:	e8 09 1a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 862454f:	8b 45 10             	mov    0x10(%ebp),%eax
 8624552:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 8624558:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 862455b:	89 54 24 04          	mov    %edx,0x4(%esp)
 862455f:	89 04 24             	mov    %eax,(%esp)
 8624562:	e8 13 8e aa ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8624567:	83 ec 04             	sub    $0x4,%esp
 862456a:	8b 45 10             	mov    0x10(%ebp),%eax
 862456d:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 8624573:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8624576:	89 54 24 04          	mov    %edx,0x4(%esp)
 862457a:	89 04 24             	mov    %eax,(%esp)
 862457d:	e8 cc 8d aa ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8624582:	83 ec 04             	sub    $0x4,%esp
 8624585:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8624588:	8d 55 c0             	lea    -0x40(%ebp),%edx
 862458b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862458f:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8624592:	89 54 24 08          	mov    %edx,0x8(%esp)
 8624596:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8624599:	89 54 24 04          	mov    %edx,0x4(%esp)
 862459d:	89 04 24             	mov    %eax,(%esp)
 86245a0:	e8 d5 48 00 00       	call   8628e7a <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 86245a5:	83 ec 04             	sub    $0x4,%esp
 86245a8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86245ab:	8d 55 bc             	lea    -0x44(%ebp),%edx
 86245ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86245b2:	89 04 24             	mov    %eax,(%esp)
 86245b5:	e8 06 2d 00 00       	call   86272c0 <_ZN11sync_script12CStringMakercvSsEv>
 86245ba:	83 ec 04             	sub    $0x4,%esp
 86245bd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86245c0:	89 04 24             	mov    %eax,(%esp)
 86245c3:	e8 b8 af d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86245c8:	eb 42                	jmp    862460c <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x1f8>
 86245ca:	89 d3                	mov    %edx,%ebx
 86245cc:	89 c6                	mov    %eax,%esi
 86245ce:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86245d1:	89 04 24             	mov    %eax,(%esp)
 86245d4:	e8 a7 af d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86245d9:	89 f0                	mov    %esi,%eax
 86245db:	89 da                	mov    %ebx,%edx
 86245dd:	eb 15                	jmp    86245f4 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x1e0>
 86245df:	89 d3                	mov    %edx,%ebx
 86245e1:	89 c6                	mov    %eax,%esi
 86245e3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86245e6:	89 04 24             	mov    %eax,(%esp)
 86245e9:	e8 f2 35 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86245ee:	89 f0                	mov    %esi,%eax
 86245f0:	89 da                	mov    %ebx,%edx
 86245f2:	eb 00                	jmp    86245f4 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x1e0>
 86245f4:	89 d3                	mov    %edx,%ebx
 86245f6:	89 c6                	mov    %eax,%esi
 86245f8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86245fb:	89 04 24             	mov    %eax,(%esp)
 86245fe:	e8 7d af d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624603:	89 f0                	mov    %esi,%eax
 8624605:	89 da                	mov    %ebx,%edx
 8624607:	e9 cb 04 00 00       	jmp    8624ad7 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6c3>
 862460c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 862460f:	89 04 24             	mov    %eax,(%esp)
 8624612:	e8 69 af d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624617:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862461a:	89 04 24             	mov    %eax,(%esp)
 862461d:	e8 36 19 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8624622:	8b 45 10             	mov    0x10(%ebp),%eax
 8624625:	8d 90 40 01 00 00    	lea    0x140(%eax),%edx
 862462b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862462e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8624632:	89 04 24             	mov    %eax,(%esp)
 8624635:	e8 40 8d aa ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 862463a:	83 ec 04             	sub    $0x4,%esp
 862463d:	8b 45 10             	mov    0x10(%ebp),%eax
 8624640:	8d 90 40 01 00 00    	lea    0x140(%eax),%edx
 8624646:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8624649:	89 54 24 04          	mov    %edx,0x4(%esp)
 862464d:	89 04 24             	mov    %eax,(%esp)
 8624650:	e8 f9 8c aa ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8624655:	83 ec 04             	sub    $0x4,%esp
 8624658:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862465b:	8d 55 d0             	lea    -0x30(%ebp),%edx
 862465e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8624662:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8624665:	89 54 24 08          	mov    %edx,0x8(%esp)
 8624669:	8b 55 d8             	mov    -0x28(%ebp),%edx
 862466c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8624670:	89 04 24             	mov    %eax,(%esp)
 8624673:	e8 02 48 00 00       	call   8628e7a <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 8624678:	83 ec 04             	sub    $0x4,%esp
 862467b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 862467e:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8624681:	89 54 24 04          	mov    %edx,0x4(%esp)
 8624685:	89 04 24             	mov    %eax,(%esp)
 8624688:	e8 33 2c 00 00       	call   86272c0 <_ZN11sync_script12CStringMakercvSsEv>
 862468d:	83 ec 04             	sub    $0x4,%esp
 8624690:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8624693:	89 04 24             	mov    %eax,(%esp)
 8624696:	e8 e5 ae d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862469b:	eb 42                	jmp    86246df <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x2cb>
 862469d:	89 d3                	mov    %edx,%ebx
 862469f:	89 c6                	mov    %eax,%esi
 86246a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86246a4:	89 04 24             	mov    %eax,(%esp)
 86246a7:	e8 d4 ae d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86246ac:	89 f0                	mov    %esi,%eax
 86246ae:	89 da                	mov    %ebx,%edx
 86246b0:	eb 15                	jmp    86246c7 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x2b3>
 86246b2:	89 d3                	mov    %edx,%ebx
 86246b4:	89 c6                	mov    %eax,%esi
 86246b6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86246b9:	89 04 24             	mov    %eax,(%esp)
 86246bc:	e8 1f 35 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86246c1:	89 f0                	mov    %esi,%eax
 86246c3:	89 da                	mov    %ebx,%edx
 86246c5:	eb 00                	jmp    86246c7 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x2b3>
 86246c7:	89 d3                	mov    %edx,%ebx
 86246c9:	89 c6                	mov    %eax,%esi
 86246cb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86246ce:	89 04 24             	mov    %eax,(%esp)
 86246d1:	e8 aa ae d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86246d6:	89 f0                	mov    %esi,%eax
 86246d8:	89 da                	mov    %ebx,%edx
 86246da:	e9 d6 03 00 00       	jmp    8624ab5 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6a1>
 86246df:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86246e2:	89 04 24             	mov    %eax,(%esp)
 86246e5:	e8 96 ae d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86246ea:	8d 9d 70 ff ff ff    	lea    -0x90(%ebp),%ebx
 86246f0:	b8 00 00 00 00       	mov    $0x0,%eax
 86246f5:	ba 0b 00 00 00       	mov    $0xb,%edx
 86246fa:	89 df                	mov    %ebx,%edi
 86246fc:	89 d1                	mov    %edx,%ecx
 86246fe:	f3 ab                	rep stos %eax,%es:(%edi)
 8624700:	8b 45 10             	mov    0x10(%ebp),%eax
 8624703:	83 c0 04             	add    $0x4,%eax
 8624706:	89 04 24             	mov    %eax,(%esp)
 8624709:	e8 e2 1d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 862470e:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8624714:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8624717:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 862471d:	8b 45 14             	mov    0x14(%ebp),%eax
 8624720:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8624726:	8b 45 18             	mov    0x18(%ebp),%eax
 8624729:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 862472f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8624732:	89 04 24             	mov    %eax,(%esp)
 8624735:	e8 b6 1d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 862473a:	89 45 80             	mov    %eax,-0x80(%ebp)
 862473d:	8b 45 10             	mov    0x10(%ebp),%eax
 8624740:	05 28 01 00 00       	add    $0x128,%eax
 8624745:	89 04 24             	mov    %eax,(%esp)
 8624748:	e8 43 33 c1 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 862474d:	85 c0                	test   %eax,%eax
 862474f:	74 22                	je     8624773 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x35f>
 8624751:	8b 45 10             	mov    0x10(%ebp),%eax
 8624754:	05 28 01 00 00       	add    $0x128,%eax
 8624759:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8624760:	00 
 8624761:	89 04 24             	mov    %eax,(%esp)
 8624764:	e8 77 47 00 00       	call   8628ee0 <_ZNKSt6vectorISsSaISsEE2atEj>
 8624769:	89 04 24             	mov    %eax,(%esp)
 862476c:	e8 7f 1d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8624771:	eb 05                	jmp    8624778 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x364>
 8624773:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 8624778:	89 45 84             	mov    %eax,-0x7c(%ebp)
 862477b:	8b 45 10             	mov    0x10(%ebp),%eax
 862477e:	05 28 01 00 00       	add    $0x128,%eax
 8624783:	89 04 24             	mov    %eax,(%esp)
 8624786:	e8 05 33 c1 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 862478b:	83 f8 01             	cmp    $0x1,%eax
 862478e:	76 22                	jbe    86247b2 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x39e>
 8624790:	8b 45 10             	mov    0x10(%ebp),%eax
 8624793:	05 28 01 00 00       	add    $0x128,%eax
 8624798:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862479f:	00 
 86247a0:	89 04 24             	mov    %eax,(%esp)
 86247a3:	e8 38 47 00 00       	call   8628ee0 <_ZNKSt6vectorISsSaISsEE2atEj>
 86247a8:	89 04 24             	mov    %eax,(%esp)
 86247ab:	e8 40 1d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86247b0:	eb 05                	jmp    86247b7 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x3a3>
 86247b2:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 86247b7:	89 45 88             	mov    %eax,-0x78(%ebp)
 86247ba:	8b 45 10             	mov    0x10(%ebp),%eax
 86247bd:	05 28 01 00 00       	add    $0x128,%eax
 86247c2:	89 04 24             	mov    %eax,(%esp)
 86247c5:	e8 c6 32 c1 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 86247ca:	83 f8 02             	cmp    $0x2,%eax
 86247cd:	76 22                	jbe    86247f1 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x3dd>
 86247cf:	8b 45 10             	mov    0x10(%ebp),%eax
 86247d2:	05 28 01 00 00       	add    $0x128,%eax
 86247d7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86247de:	00 
 86247df:	89 04 24             	mov    %eax,(%esp)
 86247e2:	e8 f9 46 00 00       	call   8628ee0 <_ZNKSt6vectorISsSaISsEE2atEj>
 86247e7:	89 04 24             	mov    %eax,(%esp)
 86247ea:	e8 01 1d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86247ef:	eb 05                	jmp    86247f6 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x3e2>
 86247f1:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 86247f6:	89 45 8c             	mov    %eax,-0x74(%ebp)
 86247f9:	8b 45 10             	mov    0x10(%ebp),%eax
 86247fc:	05 28 01 00 00       	add    $0x128,%eax
 8624801:	89 04 24             	mov    %eax,(%esp)
 8624804:	e8 87 32 c1 ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 8624809:	83 f8 03             	cmp    $0x3,%eax
 862480c:	76 22                	jbe    8624830 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x41c>
 862480e:	8b 45 10             	mov    0x10(%ebp),%eax
 8624811:	05 28 01 00 00       	add    $0x128,%eax
 8624816:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 862481d:	00 
 862481e:	89 04 24             	mov    %eax,(%esp)
 8624821:	e8 ba 46 00 00       	call   8628ee0 <_ZNKSt6vectorISsSaISsEE2atEj>
 8624826:	89 04 24             	mov    %eax,(%esp)
 8624829:	e8 c2 1c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 862482e:	eb 05                	jmp    8624835 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x421>
 8624830:	b8 28 2e ce 08       	mov    $0x8ce2e28,%eax
 8624835:	89 45 90             	mov    %eax,-0x70(%ebp)
 8624838:	8d 45 a0             	lea    -0x60(%ebp),%eax
 862483b:	89 04 24             	mov    %eax,(%esp)
 862483e:	e8 ad 1c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8624843:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8624846:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8624849:	89 04 24             	mov    %eax,(%esp)
 862484c:	e8 9f 1c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8624851:	89 45 98             	mov    %eax,-0x68(%ebp)
 8624854:	8d 9d 70 f4 ff ff    	lea    -0xb90(%ebp),%ebx
 862485a:	b8 00 00 00 00       	mov    $0x0,%eax
 862485f:	ba c0 02 00 00       	mov    $0x2c0,%edx
 8624864:	89 df                	mov    %ebx,%edi
 8624866:	89 d1                	mov    %edx,%ecx
 8624868:	f3 ab                	rep stos %eax,%es:(%edi)
 862486a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862486f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8624876:	00 
 8624877:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862487e:	00 
 862487f:	89 04 24             	mov    %eax,(%esp)
 8624882:	e8 b7 09 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8624887:	89 45 dc             	mov    %eax,-0x24(%ebp)
 862488a:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8624891:	eb 31                	jmp    86248c4 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x4b0>
 8624893:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8624896:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 862489c:	c1 e2 08             	shl    $0x8,%edx
 862489f:	01 d0                	add    %edx,%eax
 86248a1:	89 c2                	mov    %eax,%edx
 86248a3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86248a6:	8b 84 85 70 ff ff ff 	mov    -0x90(%ebp,%eax,4),%eax
 86248ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 86248b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86248b5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86248b8:	89 04 24             	mov    %eax,(%esp)
 86248bb:	e8 87 83 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 86248c0:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86248c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86248c7:	83 f8 0a             	cmp    $0xa,%eax
 86248ca:	0f 96 c0             	setbe  %al
 86248cd:	84 c0                	test   %al,%al
 86248cf:	75 c2                	jne    8624893 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x47f>
 86248d1:	8b 45 10             	mov    0x10(%ebp),%eax
 86248d4:	8b 80 7c 01 00 00    	mov    0x17c(%eax),%eax
 86248da:	89 85 3c f4 ff ff    	mov    %eax,-0xbc4(%ebp)
 86248e0:	8b 45 10             	mov    0x10(%ebp),%eax
 86248e3:	8b 80 78 01 00 00    	mov    0x178(%eax),%eax
 86248e9:	89 85 40 f4 ff ff    	mov    %eax,-0xbc0(%ebp)
 86248ef:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 86248f5:	05 00 0a 00 00       	add    $0xa00,%eax
 86248fa:	89 85 44 f4 ff ff    	mov    %eax,-0xbbc(%ebp)
 8624900:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 8624906:	05 00 09 00 00       	add    $0x900,%eax
 862490b:	89 85 48 f4 ff ff    	mov    %eax,-0xbb8(%ebp)
 8624911:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 8624917:	05 00 08 00 00       	add    $0x800,%eax
 862491c:	89 85 4c f4 ff ff    	mov    %eax,-0xbb4(%ebp)
 8624922:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 8624928:	05 00 07 00 00       	add    $0x700,%eax
 862492d:	89 85 50 f4 ff ff    	mov    %eax,-0xbb0(%ebp)
 8624933:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 8624939:	05 00 06 00 00       	add    $0x600,%eax
 862493e:	89 85 54 f4 ff ff    	mov    %eax,-0xbac(%ebp)
 8624944:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 862494a:	05 00 05 00 00       	add    $0x500,%eax
 862494f:	89 85 58 f4 ff ff    	mov    %eax,-0xba8(%ebp)
 8624955:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 862495b:	05 00 04 00 00       	add    $0x400,%eax
 8624960:	89 85 5c f4 ff ff    	mov    %eax,-0xba4(%ebp)
 8624966:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 862496c:	05 00 03 00 00       	add    $0x300,%eax
 8624971:	89 85 60 f4 ff ff    	mov    %eax,-0xba0(%ebp)
 8624977:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 862497d:	05 00 02 00 00       	add    $0x200,%eax
 8624982:	89 85 64 f4 ff ff    	mov    %eax,-0xb9c(%ebp)
 8624988:	8b 45 10             	mov    0x10(%ebp),%eax
 862498b:	8b 70 5c             	mov    0x5c(%eax),%esi
 862498e:	8d 85 70 f4 ff ff    	lea    -0xb90(%ebp),%eax
 8624994:	8d b8 00 01 00 00    	lea    0x100(%eax),%edi
 862499a:	8b 45 10             	mov    0x10(%ebp),%eax
 862499d:	8b 58 20             	mov    0x20(%eax),%ebx
 86249a0:	8b 45 10             	mov    0x10(%ebp),%eax
 86249a3:	8b 48 1c             	mov    0x1c(%eax),%ecx
 86249a6:	8d 95 70 f4 ff ff    	lea    -0xb90(%ebp),%edx
 86249ac:	8b 45 10             	mov    0x10(%ebp),%eax
 86249af:	8b 00                	mov    (%eax),%eax
 86249b1:	89 85 34 f4 ff ff    	mov    %eax,-0xbcc(%ebp)
 86249b7:	8b 85 3c f4 ff ff    	mov    -0xbc4(%ebp),%eax
 86249bd:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 86249c1:	8b 85 40 f4 ff ff    	mov    -0xbc0(%ebp),%eax
 86249c7:	89 44 24 48          	mov    %eax,0x48(%esp)
 86249cb:	8b 85 44 f4 ff ff    	mov    -0xbbc(%ebp),%eax
 86249d1:	89 44 24 44          	mov    %eax,0x44(%esp)
 86249d5:	8b 85 48 f4 ff ff    	mov    -0xbb8(%ebp),%eax
 86249db:	89 44 24 40          	mov    %eax,0x40(%esp)
 86249df:	8b 85 4c f4 ff ff    	mov    -0xbb4(%ebp),%eax
 86249e5:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 86249e9:	8b 85 50 f4 ff ff    	mov    -0xbb0(%ebp),%eax
 86249ef:	89 44 24 38          	mov    %eax,0x38(%esp)
 86249f3:	8b 85 54 f4 ff ff    	mov    -0xbac(%ebp),%eax
 86249f9:	89 44 24 34          	mov    %eax,0x34(%esp)
 86249fd:	8b 85 58 f4 ff ff    	mov    -0xba8(%ebp),%eax
 8624a03:	89 44 24 30          	mov    %eax,0x30(%esp)
 8624a07:	8b 85 5c f4 ff ff    	mov    -0xba4(%ebp),%eax
 8624a0d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8624a11:	8b 85 60 f4 ff ff    	mov    -0xba0(%ebp),%eax
 8624a17:	89 44 24 28          	mov    %eax,0x28(%esp)
 8624a1b:	8b 85 64 f4 ff ff    	mov    -0xb9c(%ebp),%eax
 8624a21:	89 44 24 24          	mov    %eax,0x24(%esp)
 8624a25:	89 74 24 20          	mov    %esi,0x20(%esp)
 8624a29:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8624a2d:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8624a31:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8624a35:	89 54 24 10          	mov    %edx,0x10(%esp)
 8624a39:	8b 8d 34 f4 ff ff    	mov    -0xbcc(%ebp),%ecx
 8624a3f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8624a43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624a46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8624a4a:	c7 44 24 04 a8 40 ce 	movl   $0x8ce40a8,0x4(%esp)
 8624a51:	08 
 8624a52:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8624a55:	89 04 24             	mov    %eax,(%esp)
 8624a58:	e8 63 f7 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8624a5d:	83 f0 01             	xor    $0x1,%eax
 8624a60:	84 c0                	test   %al,%al
 8624a62:	74 07                	je     8624a6b <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x657>
 8624a64:	bb 00 00 00 00       	mov    $0x0,%ebx
 8624a69:	eb 3d                	jmp    8624aa8 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x694>
 8624a6b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624a72:	00 
 8624a73:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8624a76:	89 04 24             	mov    %eax,(%esp)
 8624a79:	e8 a8 f8 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8624a7e:	83 f0 01             	xor    $0x1,%eax
 8624a81:	84 c0                	test   %al,%al
 8624a83:	74 07                	je     8624a8c <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x678>
 8624a85:	bb 00 00 00 00       	mov    $0x0,%ebx
 8624a8a:	eb 1c                	jmp    8624aa8 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x694>
 8624a8c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8624a91:	eb 15                	jmp    8624aa8 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x694>
 8624a93:	89 d3                	mov    %edx,%ebx
 8624a95:	89 c6                	mov    %eax,%esi
 8624a97:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8624a9a:	89 04 24             	mov    %eax,(%esp)
 8624a9d:	e8 3e 31 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624aa2:	89 f0                	mov    %esi,%eax
 8624aa4:	89 da                	mov    %ebx,%edx
 8624aa6:	eb 0d                	jmp    8624ab5 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6a1>
 8624aa8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8624aab:	89 04 24             	mov    %eax,(%esp)
 8624aae:	e8 2d 31 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624ab3:	eb 15                	jmp    8624aca <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6b6>
 8624ab5:	89 d3                	mov    %edx,%ebx
 8624ab7:	89 c6                	mov    %eax,%esi
 8624ab9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8624abc:	89 04 24             	mov    %eax,(%esp)
 8624abf:	e8 1c 31 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624ac4:	89 f0                	mov    %esi,%eax
 8624ac6:	89 da                	mov    %ebx,%edx
 8624ac8:	eb 0d                	jmp    8624ad7 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6c3>
 8624aca:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8624acd:	89 04 24             	mov    %eax,(%esp)
 8624ad0:	e8 0b 31 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624ad5:	eb 1b                	jmp    8624af2 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_+0x6de>
 8624ad7:	89 d3                	mov    %edx,%ebx
 8624ad9:	89 c6                	mov    %eax,%esi
 8624adb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8624ade:	89 04 24             	mov    %eax,(%esp)
 8624ae1:	e8 fa 30 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624ae6:	89 f0                	mov    %esi,%eax
 8624ae8:	89 da                	mov    %ebx,%edx
 8624aea:	89 04 24             	mov    %eax,(%esp)
 8624aed:	e8 5e ec 4b 00       	call   8ae3750 <_Unwind_Resume>
 8624af2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8624af5:	89 04 24             	mov    %eax,(%esp)
 8624af8:	e8 e3 30 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8624afd:	89 d8                	mov    %ebx,%eax
 8624aff:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8624b02:	83 c4 00             	add    $0x0,%esp
 8624b05:	5b                   	pop    %ebx
 8624b06:	5e                   	pop    %esi
 8624b07:	5f                   	pop    %edi
 8624b08:	5d                   	pop    %ebp
 8624b09:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_creature_info_to_db @ 0x8624414

/* sync_script::CSyncScript::insert_creature_info_to_db(unsigned int, CreatureScript const*, char
   const*, char const*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_creature_info_to_db
          (CSyncScript *this,uint param_1,CreatureScript *param_2,char *param_3,char *param_4)

{
  char cVar1;
  string *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char **ppcVar6;
  char *pcVar7;
  byte bVar8;
  char local_b94 [256];
  undefined1 local_a94 [256];
  undefined1 auStack_994 [256];
  undefined1 auStack_894 [256];
  undefined1 auStack_794 [256];
  undefined1 auStack_694 [256];
  undefined1 auStack_594 [256];
  undefined1 auStack_494 [256];
  undefined1 auStack_394 [256];
  undefined1 auStack_294 [256];
  undefined1 auStack_194 [256];
  char *local_94 [11];
  CStringMaker local_68 [4];
  CStringMaker local_64 [4];
  CStringMaker local_60 [4];
  undefined4 local_5c;
  CStringMaker local_58 [4];
  CStringMaker local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  CStringMaker local_48 [4];
  CStringMaker local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  MySQL *local_28;
  uint local_24;
  uint local_20;
  
  bVar8 = 0;
  if (*this == (CSyncScript)0x1) {
    local_5c = 0;
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      local_58[local_24 - 4] =
           (CStringMaker)((char)*(undefined4 *)(param_2 + (local_24 + 0x14) * 4) + '0');
    }
    CStringMaker::CStringMaker(local_54);
                    /* try { // try from 0862448c to 086244ce has its CatchHandler @ 0862451e */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_58,local_4c,local_50,local_54);
                    /* try { // try from 086244df to 086244e3 has its CatchHandler @ 086244f4 */
    CStringMaker::operator_cast_to_string(local_60);
                    /* try { // try from 086244ed to 086244f1 has its CatchHandler @ 08624509 */
    CStringMaker::~CStringMaker(local_58);
                    /* try { // try from 0862453f to 0862454e has its CatchHandler @ 08624ad7 */
    CStringMaker::~CStringMaker(local_54);
    CStringMaker::CStringMaker(local_44);
                    /* try { // try from 08624562 to 086245a4 has its CatchHandler @ 086245f4 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_48,local_3c,local_40,local_44);
                    /* try { // try from 086245b5 to 086245b9 has its CatchHandler @ 086245ca */
    CStringMaker::operator_cast_to_string(local_64);
                    /* try { // try from 086245c3 to 086245c7 has its CatchHandler @ 086245df */
    CStringMaker::~CStringMaker(local_48);
                    /* try { // try from 08624612 to 08624621 has its CatchHandler @ 08624ab5 */
    CStringMaker::~CStringMaker(local_44);
    CStringMaker::CStringMaker(local_34);
                    /* try { // try from 08624635 to 08624677 has its CatchHandler @ 086246c7 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_38,local_2c,local_30,local_34);
                    /* try { // try from 08624688 to 0862468c has its CatchHandler @ 0862469d */
    CStringMaker::operator_cast_to_string(local_68);
                    /* try { // try from 08624696 to 0862469a has its CatchHandler @ 086246b2 */
    CStringMaker::~CStringMaker(local_38);
                    /* try { // try from 086246e5 to 08624a7d has its CatchHandler @ 08624a93 */
    CStringMaker::~CStringMaker(local_34);
    ppcVar6 = local_94;
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppcVar6 = (char *)0x0;
      ppcVar6 = ppcVar6 + (uint)bVar8 * -2 + 1;
    }
    local_94[0] = (char *)std::string::c_str((string *)(param_2 + 4));
    local_94[1] = (char *)&local_5c;
    local_94[2] = param_3;
    local_94[3] = param_4;
    local_94[4] = (char *)std::string::c_str((string *)local_60);
    iVar4 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (iVar4 == 0) {
      local_94[5] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),0);
      local_94[5] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 2) {
      local_94[6] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),1);
      local_94[6] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 3) {
      local_94[7] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),2);
      local_94[7] = (char *)std::string::c_str(psVar2);
    }
    uVar3 = std::vector<std::string,std::allocator<std::string>>::size
                      ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128));
    if (uVar3 < 4) {
      local_94[8] = &DAT_08ce2e28;
    }
    else {
      psVar2 = (string *)
               std::vector<std::string,std::allocator<std::string>>::at
                         ((vector<std::string,std::allocator<std::string>> *)(param_2 + 0x128),3);
      local_94[8] = (char *)std::string::c_str(psVar2);
    }
    local_94[9] = (char *)std::string::c_str((string *)local_64);
    local_94[10] = (char *)std::string::c_str((string *)local_68);
    pcVar7 = local_b94;
    for (iVar4 = 0x2c0; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    for (local_20 = 0; local_20 < 0xb; local_20 = local_20 + 1) {
      GetEscapeString(local_28,local_94[local_20],local_b94 + local_20 * 0x100);
    }
    cVar1 = MySQL::set_query(local_28,
                             "inSert into dnf_creature_info(it_id, creature_id, creature_name, skill_recovery_time, overskill_recovery_time, artifact_slot, learn_overskill_level, skill_info, overskill_info, piercing, skill_name, skill_desc, overskill_name, overskill_desc, skill_level_values, overskill_level_values, evolution_creature_id, evolution_level) values(%u, %d, \'%s\', %d, %d, \'%s\', %d, \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', \'%s\', %d, %d)"
                             ,param_1,*(undefined4 *)param_2,local_b94,
                             *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                             local_a94,*(undefined4 *)(param_2 + 0x5c),auStack_994,auStack_894,
                             auStack_794,auStack_694,auStack_594,auStack_494,auStack_394,auStack_294
                             ,auStack_194,*(undefined4 *)(param_2 + 0x178),
                             *(undefined4 *)(param_2 + 0x17c));
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(local_28,true);
      if (cVar1 == '\x01') {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
                    /* try { // try from 08624aae to 08624ab2 has its CatchHandler @ 08624ab5 */
    std::string::~string((string *)local_68);
                    /* try { // try from 08624ad0 to 08624ad4 has its CatchHandler @ 08624ad7 */
    std::string::~string((string *)local_64);
    std::string::~string((string *)local_60);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

```

---

## insert_equiptment_item_to_db

```asm
// === 0861d87e sync_script::CSyncScript::insert_equiptment_item_to_db  [0x0861d87e-0x8620967] ===
 861d87e:	55                   	push   %ebp
 861d87f:	89 e5                	mov    %esp,%ebp
 861d881:	57                   	push   %edi
 861d882:	56                   	push   %esi
 861d883:	53                   	push   %ebx
 861d884:	81 ec dc de 00 00    	sub    $0xdedc,%esp
 861d88a:	8b 45 08             	mov    0x8(%ebp),%eax
 861d88d:	0f b6 00             	movzbl (%eax),%eax
 861d890:	83 f0 01             	xor    $0x1,%eax
 861d893:	84 c0                	test   %al,%al
 861d895:	74 0a                	je     861d8a1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x23>
 861d897:	bb 01 00 00 00       	mov    $0x1,%ebx
 861d89c:	e9 b9 30 00 00       	jmp    862095a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30dc>
 861d8a1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 861d8a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861d8ad:	00 
 861d8ae:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 861d8b5:	00 
 861d8b6:	89 04 24             	mov    %eax,(%esp)
 861d8b9:	e8 80 79 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 861d8be:	89 45 88             	mov    %eax,-0x78(%ebp)
 861d8c1:	c7 85 b0 fe ff ff 00 	movl   $0x0,-0x150(%ebp)
 861d8c8:	00 00 00 
 861d8cb:	c7 85 ac fe ff ff 00 	movl   $0x0,-0x154(%ebp)
 861d8d2:	00 00 00 
 861d8d5:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 861d8dc:	eb 1b                	jmp    861d8f9 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x7b>
 861d8de:	8b 45 a0             	mov    -0x60(%ebp),%eax
 861d8e1:	8b 55 0c             	mov    0xc(%ebp),%edx
 861d8e4:	0f b6 44 02 38       	movzbl 0x38(%edx,%eax,1),%eax
 861d8e9:	84 c0                	test   %al,%al
 861d8eb:	74 08                	je     861d8f5 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x77>
 861d8ed:	8b 45 a0             	mov    -0x60(%ebp),%eax
 861d8f0:	89 45 8c             	mov    %eax,-0x74(%ebp)
 861d8f3:	eb 0f                	jmp    861d904 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x86>
 861d8f5:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
 861d8f9:	83 7d a0 0a          	cmpl   $0xa,-0x60(%ebp)
 861d8fd:	0f 9e c0             	setle  %al
 861d900:	84 c0                	test   %al,%al
 861d902:	75 da                	jne    861d8de <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x60>
 861d904:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 861d90b:	8b 45 14             	mov    0x14(%ebp),%eax
 861d90e:	83 f8 01             	cmp    $0x1,%eax
 861d911:	0f 84 d4 01 00 00    	je     861daeb <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x26d>
 861d917:	83 f8 02             	cmp    $0x2,%eax
 861d91a:	0f 84 da 01 00 00    	je     861dafa <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x27c>
 861d920:	85 c0                	test   %eax,%eax
 861d922:	0f 85 df 01 00 00    	jne    861db07 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x289>
 861d928:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d92b:	8b 98 b8 01 00 00    	mov    0x1b8(%eax),%ebx
 861d931:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d934:	05 bc 00 00 00       	add    $0xbc,%eax
 861d939:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d93d:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 861d943:	89 04 24             	mov    %eax,(%esp)
 861d946:	e8 65 a0 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 861d94b:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 861d952:	00 
 861d953:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 861d959:	89 44 24 14          	mov    %eax,0x14(%esp)
 861d95d:	8d 85 ac fe ff ff    	lea    -0x154(%ebp),%eax
 861d963:	89 44 24 10          	mov    %eax,0x10(%esp)
 861d967:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 861d96b:	8b 45 8c             	mov    -0x74(%ebp),%eax
 861d96e:	89 44 24 08          	mov    %eax,0x8(%esp)
 861d972:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 861d978:	89 44 24 04          	mov    %eax,0x4(%esp)
 861d97c:	8b 45 08             	mov    0x8(%ebp),%eax
 861d97f:	89 04 24             	mov    %eax,(%esp)
 861d982:	e8 83 f5 ff ff       	call   861cf0a <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b>
 861d987:	89 c3                	mov    %eax,%ebx
 861d989:	83 f3 01             	xor    $0x1,%ebx
 861d98c:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 861d992:	89 04 24             	mov    %eax,(%esp)
 861d995:	e8 46 a2 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d99a:	84 db                	test   %bl,%bl
 861d99c:	75 24                	jne    861d9c2 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x144>
 861d99e:	eb 2c                	jmp    861d9cc <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x14e>
 861d9a0:	89 c1                	mov    %eax,%ecx
 861d9a2:	89 d0                	mov    %edx,%eax
 861d9a4:	89 c3                	mov    %eax,%ebx
 861d9a6:	89 ce                	mov    %ecx,%esi
 861d9a8:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 861d9ae:	89 04 24             	mov    %eax,(%esp)
 861d9b1:	e8 2a a2 0e 00       	call   8707be0 <_ZNSsD1Ev>
 861d9b6:	89 f1                	mov    %esi,%ecx
 861d9b8:	89 d8                	mov    %ebx,%eax
 861d9ba:	89 0c 24             	mov    %ecx,(%esp)
 861d9bd:	e8 8e 5d 4c 00       	call   8ae3750 <_Unwind_Resume>
 861d9c2:	bb 00 00 00 00       	mov    $0x0,%ebx
 861d9c7:	e9 8e 2f 00 00       	jmp    862095a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30dc>
 861d9cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d9cf:	8b 00                	mov    (%eax),%eax
 861d9d1:	89 45 10             	mov    %eax,0x10(%ebp)
 861d9d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861d9d7:	8d 90 78 06 00 00    	lea    0x678(%eax),%edx
 861d9dd:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 861d9e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 861d9e7:	89 04 24             	mov    %eax,(%esp)
 861d9ea:	e8 43 56 d7 ff       	call   8393032 <_ZNSt3mapIi22EquipmentParameterInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 861d9ef:	83 ec 04             	sub    $0x4,%esp
 861d9f2:	e9 b4 00 00 00       	jmp    861daab <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x22d>
 861d9f7:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 861d9fd:	89 04 24             	mov    %eax,(%esp)
 861da00:	e8 ab 56 d7 ff       	call   83930b0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22EquipmentParameterInfoEEptEv>
 861da05:	83 c0 04             	add    $0x4,%eax
 861da08:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 861da0b:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861da11:	89 04 24             	mov    %eax,(%esp)
 861da14:	e8 69 01 37 00       	call   898db82 <_ZN17STEquipmentScriptC1Ev>
 861da19:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 861da1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861da20:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861da26:	05 c0 01 00 00       	add    $0x1c0,%eax
 861da2b:	89 04 24             	mov    %eax,(%esp)
 861da2e:	e8 97 88 d4 ff       	call   83662ca <_ZN22EquipmentParameterInfoaSERKS_>
 861da33:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 861da39:	89 04 24             	mov    %eax,(%esp)
 861da3c:	e8 6f 56 d7 ff       	call   83930b0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22EquipmentParameterInfoEEptEv>
 861da41:	8b 00                	mov    (%eax),%eax
 861da43:	89 44 24 10          	mov    %eax,0x10(%esp)
 861da47:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 861da4e:	00 
 861da4f:	8b 45 10             	mov    0x10(%ebp),%eax
 861da52:	89 44 24 08          	mov    %eax,0x8(%esp)
 861da56:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861da5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861da60:	8b 45 08             	mov    0x8(%ebp),%eax
 861da63:	89 04 24             	mov    %eax,(%esp)
 861da66:	e8 13 fe ff ff       	call   861d87e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii>
 861da6b:	eb 22                	jmp    861da8f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x211>
 861da6d:	89 c1                	mov    %eax,%ecx
 861da6f:	89 d0                	mov    %edx,%eax
 861da71:	89 c3                	mov    %eax,%ebx
 861da73:	89 ce                	mov    %ecx,%esi
 861da75:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861da7b:	89 04 24             	mov    %eax,(%esp)
 861da7e:	e8 15 08 37 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 861da83:	89 f1                	mov    %esi,%ecx
 861da85:	89 d8                	mov    %ebx,%eax
 861da87:	89 0c 24             	mov    %ecx,(%esp)
 861da8a:	e8 c1 5c 4c 00       	call   8ae3750 <_Unwind_Resume>
 861da8f:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861da95:	89 04 24             	mov    %eax,(%esp)
 861da98:	e8 fb 07 37 00       	call   898e298 <_ZN17STEquipmentScriptD1Ev>
 861da9d:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 861daa3:	89 04 24             	mov    %eax,(%esp)
 861daa6:	e8 e7 55 d7 ff       	call   8393092 <_ZNSt17_Rb_tree_iteratorISt4pairIKi22EquipmentParameterInfoEEppEv>
 861daab:	8b 45 0c             	mov    0xc(%ebp),%eax
 861daae:	8d 90 78 06 00 00    	lea    0x678(%eax),%edx
 861dab4:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 861daba:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dabe:	89 04 24             	mov    %eax,(%esp)
 861dac1:	e8 92 55 d7 ff       	call   8393058 <_ZNSt3mapIi22EquipmentParameterInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 861dac6:	83 ec 04             	sub    $0x4,%esp
 861dac9:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 861dacf:	89 44 24 04          	mov    %eax,0x4(%esp)
 861dad3:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 861dad9:	89 04 24             	mov    %eax,(%esp)
 861dadc:	e8 9d 55 d7 ff       	call   839307e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi22EquipmentParameterInfoEEneERKS4_>
 861dae1:	84 c0                	test   %al,%al
 861dae3:	0f 85 0e ff ff ff    	jne    861d9f7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x179>
 861dae9:	eb 1c                	jmp    861db07 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x289>
 861daeb:	8b 45 10             	mov    0x10(%ebp),%eax
 861daee:	89 45 90             	mov    %eax,-0x70(%ebp)
 861daf1:	c7 45 10 ff ff ff ff 	movl   $0xffffffff,0x10(%ebp)
 861daf8:	eb 0d                	jmp    861db07 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x289>
 861dafa:	8b 45 10             	mov    0x10(%ebp),%eax
 861dafd:	89 45 90             	mov    %eax,-0x70(%ebp)
 861db00:	c7 45 10 fe ff ff ff 	movl   $0xfffffffe,0x10(%ebp)
 861db07:	c7 85 a7 fe ff ff 00 	movl   $0x0,-0x159(%ebp)
 861db0e:	00 00 00 
 861db11:	c6 85 ab fe ff ff 00 	movb   $0x0,-0x155(%ebp)
 861db18:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 861db1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861db22:	05 cc 06 00 00       	add    $0x6cc,%eax
 861db27:	89 04 24             	mov    %eax,(%esp)
 861db2a:	e8 ad a9 b4 ff       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 861db2f:	85 c0                	test   %eax,%eax
 861db31:	0f 95 c0             	setne  %al
 861db34:	84 c0                	test   %al,%al
 861db36:	0f 84 bd 00 00 00    	je     861dbf9 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x37b>
 861db3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861db3f:	8d 90 cc 06 00 00    	lea    0x6cc(%eax),%edx
 861db45:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 861db4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 861db4f:	89 04 24             	mov    %eax,(%esp)
 861db52:	e8 f5 70 d7 ff       	call   8394c4c <_ZNSt6vectorItSaItEE5beginEv>
 861db57:	83 ec 04             	sub    $0x4,%esp
 861db5a:	eb 5c                	jmp    861dbb8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x33a>
 861db5c:	83 7d 94 04          	cmpl   $0x4,-0x6c(%ebp)
 861db60:	0f 8f 92 00 00 00    	jg     861dbf8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x37a>
 861db66:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 861db6c:	89 04 24             	mov    %eax,(%esp)
 861db6f:	e8 20 b1 da ff       	call   83c8c94 <_ZNK9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEdeEv>
 861db74:	0f b7 00             	movzwl (%eax),%eax
 861db77:	66 89 45 aa          	mov    %ax,-0x56(%ebp)
 861db7b:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 861db7e:	0f b7 45 aa          	movzwl -0x56(%ebp),%eax
 861db82:	89 04 24             	mov    %eax,(%esp)
 861db85:	e8 91 ee ff ff       	call   861ca1b <_Z22GetSocketTypeCharactert>
 861db8a:	88 84 1d a7 fe ff ff 	mov    %al,-0x159(%ebp,%ebx,1)
 861db91:	83 45 94 01          	addl   $0x1,-0x6c(%ebp)
 861db95:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 861db9b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861dba2:	00 
 861dba3:	8d 95 94 fe ff ff    	lea    -0x16c(%ebp),%edx
 861dba9:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dbad:	89 04 24             	mov    %eax,(%esp)
 861dbb0:	e8 8b ab 00 00       	call   8628740 <_ZN9__gnu_cxx17__normal_iteratorIPtSt6vectorItSaItEEEppEi>
 861dbb5:	83 ec 04             	sub    $0x4,%esp
 861dbb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dbbb:	8d 90 cc 06 00 00    	lea    0x6cc(%eax),%edx
 861dbc1:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 861dbc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dbcb:	89 04 24             	mov    %eax,(%esp)
 861dbce:	e8 9d 70 d7 ff       	call   8394c70 <_ZNSt6vectorItSaItEE3endEv>
 861dbd3:	83 ec 04             	sub    $0x4,%esp
 861dbd6:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 861dbdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 861dbe0:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 861dbe6:	89 04 24             	mov    %eax,(%esp)
 861dbe9:	e8 26 ab 00 00       	call   8628714 <_ZN9__gnu_cxxneIPtSt6vectorItSaItEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 861dbee:	84 c0                	test   %al,%al
 861dbf0:	0f 85 66 ff ff ff    	jne    861db5c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2de>
 861dbf6:	eb 01                	jmp    861dbf9 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x37b>
 861dbf8:	90                   	nop
 861dbf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dbfc:	05 c0 06 00 00       	add    $0x6c0,%eax
 861dc01:	89 04 24             	mov    %eax,(%esp)
 861dc04:	e8 91 45 b3 ff       	call   815219a <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE4sizeEv>
 861dc09:	85 c0                	test   %eax,%eax
 861dc0b:	0f 95 c0             	setne  %al
 861dc0e:	84 c0                	test   %al,%al
 861dc10:	0f 84 30 01 00 00    	je     861dd46 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x4c8>
 861dc16:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dc19:	8d 90 c0 06 00 00    	lea    0x6c0(%eax),%edx
 861dc1f:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 861dc25:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dc29:	89 04 24             	mov    %eax,(%esp)
 861dc2c:	e8 39 de ef ff       	call   851ba6a <_ZNSt6vectorI20stAvatarTypeSelect_tSaIS0_EE5beginEv>
 861dc31:	83 ec 04             	sub    $0x4,%esp
 861dc34:	e9 cf 00 00 00       	jmp    861dd08 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x48a>
 861dc39:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 861dc3f:	89 04 24             	mov    %eax,(%esp)
 861dc42:	e8 59 ab 00 00       	call   86287a0 <_ZNK9__gnu_cxx17__normal_iteratorIP20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEdeEv>
 861dc47:	8b 10                	mov    (%eax),%edx
 861dc49:	89 95 08 f6 ff ff    	mov    %edx,-0x9f8(%ebp)
 861dc4f:	8b 50 04             	mov    0x4(%eax),%edx
 861dc52:	89 95 0c f6 ff ff    	mov    %edx,-0x9f4(%ebp)
 861dc58:	8b 50 08             	mov    0x8(%eax),%edx
 861dc5b:	89 95 10 f6 ff ff    	mov    %edx,-0x9f0(%ebp)
 861dc61:	8b 50 0c             	mov    0xc(%eax),%edx
 861dc64:	89 95 14 f6 ff ff    	mov    %edx,-0x9ec(%ebp)
 861dc6a:	8b 50 10             	mov    0x10(%eax),%edx
 861dc6d:	89 95 18 f6 ff ff    	mov    %edx,-0x9e8(%ebp)
 861dc73:	8b 50 14             	mov    0x14(%eax),%edx
 861dc76:	89 95 1c f6 ff ff    	mov    %edx,-0x9e4(%ebp)
 861dc7c:	8b 50 18             	mov    0x18(%eax),%edx
 861dc7f:	89 95 20 f6 ff ff    	mov    %edx,-0x9e0(%ebp)
 861dc85:	8b 40 1c             	mov    0x1c(%eax),%eax
 861dc88:	89 85 24 f6 ff ff    	mov    %eax,-0x9dc(%ebp)
 861dc8e:	8b 85 18 f6 ff ff    	mov    -0x9e8(%ebp),%eax
 861dc94:	85 c0                	test   %eax,%eax
 861dc96:	7e 4d                	jle    861dce5 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x467>
 861dc98:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 861dc9f:	eb 31                	jmp    861dcd2 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x454>
 861dca1:	83 7d 94 04          	cmpl   $0x4,-0x6c(%ebp)
 861dca5:	7f 3d                	jg     861dce4 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x466>
 861dca7:	8b 5d 94             	mov    -0x6c(%ebp),%ebx
 861dcaa:	8b 45 ac             	mov    -0x54(%ebp),%eax
 861dcad:	83 c0 08             	add    $0x8,%eax
 861dcb0:	0f b7 84 45 0c f6 ff 	movzwl -0x9f4(%ebp,%eax,2),%eax
 861dcb7:	ff 
 861dcb8:	0f b7 c0             	movzwl %ax,%eax
 861dcbb:	89 04 24             	mov    %eax,(%esp)
 861dcbe:	e8 58 ed ff ff       	call   861ca1b <_Z22GetSocketTypeCharactert>
 861dcc3:	88 84 1d a7 fe ff ff 	mov    %al,-0x159(%ebp,%ebx,1)
 861dcca:	83 45 94 01          	addl   $0x1,-0x6c(%ebp)
 861dcce:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 861dcd2:	8b 85 18 f6 ff ff    	mov    -0x9e8(%ebp),%eax
 861dcd8:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 861dcdb:	0f 9f c0             	setg   %al
 861dcde:	84 c0                	test   %al,%al
 861dce0:	75 bf                	jne    861dca1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x423>
 861dce2:	eb 01                	jmp    861dce5 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x467>
 861dce4:	90                   	nop
 861dce5:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 861dceb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861dcf2:	00 
 861dcf3:	8d 95 90 fe ff ff    	lea    -0x170(%ebp),%edx
 861dcf9:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dcfd:	89 04 24             	mov    %eax,(%esp)
 861dd00:	e8 a5 aa 00 00       	call   86287aa <_ZN9__gnu_cxx17__normal_iteratorIP20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEppEi>
 861dd05:	83 ec 04             	sub    $0x4,%esp
 861dd08:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dd0b:	8d 90 c0 06 00 00    	lea    0x6c0(%eax),%edx
 861dd11:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 861dd17:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dd1b:	89 04 24             	mov    %eax,(%esp)
 861dd1e:	e8 c7 dd ef ff       	call   851baea <_ZNSt6vectorI20stAvatarTypeSelect_tSaIS0_EE3endEv>
 861dd23:	83 ec 04             	sub    $0x4,%esp
 861dd26:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 861dd2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861dd30:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 861dd36:	89 04 24             	mov    %eax,(%esp)
 861dd39:	e8 35 aa 00 00       	call   8628773 <_ZN9__gnu_cxxneIP20stAvatarTypeSelect_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 861dd3e:	84 c0                	test   %al,%al
 861dd40:	0f 85 f3 fe ff ff    	jne    861dc39 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3bb>
 861dd46:	8d 9d 08 fe ff ff    	lea    -0x1f8(%ebp),%ebx
 861dd4c:	b8 00 00 00 00       	mov    $0x0,%eax
 861dd51:	ba 10 00 00 00       	mov    $0x10,%edx
 861dd56:	89 df                	mov    %ebx,%edi
 861dd58:	89 d1                	mov    %edx,%ecx
 861dd5a:	f3 ab                	rep stos %eax,%es:(%edi)
 861dd5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dd5f:	05 68 07 00 00       	add    $0x768,%eax
 861dd64:	89 04 24             	mov    %eax,(%esp)
 861dd67:	e8 72 aa 00 00       	call   86287de <_ZNKSt6vectorI18ENUM_EQUIPMENTTYPESaIS0_EE4sizeEv>
 861dd6c:	85 c0                	test   %eax,%eax
 861dd6e:	0f 95 c0             	setne  %al
 861dd71:	84 c0                	test   %al,%al
 861dd73:	0f 84 28 01 00 00    	je     861dea1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x623>
 861dd79:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 861dd80:	8b 45 0c             	mov    0xc(%ebp),%eax
 861dd83:	8d 90 68 07 00 00    	lea    0x768(%eax),%edx
 861dd89:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 861dd8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 861dd93:	89 04 24             	mov    %eax,(%esp)
 861dd96:	e8 5f aa 00 00       	call   86287fa <_ZNSt6vectorI18ENUM_EQUIPMENTTYPESaIS0_EE5beginEv>
 861dd9b:	83 ec 04             	sub    $0x4,%esp
 861dd9e:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 861dda4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861dda8:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 861ddae:	89 04 24             	mov    %eax,(%esp)
 861ddb1:	e8 68 aa 00 00       	call   862881e <_ZN9__gnu_cxx17__normal_iteratorIPK18ENUM_EQUIPMENTTYPESt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 861ddb6:	e9 a8 00 00 00       	jmp    861de63 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x5e5>
 861ddbb:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 861ddc1:	89 04 24             	mov    %eax,(%esp)
 861ddc4:	e8 c1 aa 00 00       	call   862888a <_ZNK9__gnu_cxx17__normal_iteratorIPK18ENUM_EQUIPMENTTYPESt6vectorIS1_SaIS1_EEEdeEv>
 861ddc9:	8b 00                	mov    (%eax),%eax
 861ddcb:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 861ddce:	c7 85 84 fe ff ff 00 	movl   $0x0,-0x17c(%ebp)
 861ddd5:	00 00 00 
 861ddd8:	c7 85 88 fe ff ff 00 	movl   $0x0,-0x178(%ebp)
 861dddf:	00 00 00 
 861dde2:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 861dde6:	75 1f                	jne    861de07 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x589>
 861dde8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 861ddeb:	89 44 24 08          	mov    %eax,0x8(%esp)
 861ddef:	c7 44 24 04 e3 2d ce 	movl   $0x8ce2de3,0x4(%esp)
 861ddf6:	08 
 861ddf7:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 861ddfd:	89 04 24             	mov    %eax,(%esp)
 861de00:	e8 3b 06 a6 ff       	call   807e440 <sprintf@plt>
 861de05:	eb 1d                	jmp    861de24 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x5a6>
 861de07:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 861de0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 861de0e:	c7 44 24 04 3e 2f ce 	movl   $0x8ce2f3e,0x4(%esp)
 861de15:	08 
 861de16:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 861de1c:	89 04 24             	mov    %eax,(%esp)
 861de1f:	e8 1c 06 a6 ff       	call   807e440 <sprintf@plt>
 861de24:	8d 85 84 fe ff ff    	lea    -0x17c(%ebp),%eax
 861de2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861de2e:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
 861de34:	89 04 24             	mov    %eax,(%esp)
 861de37:	e8 24 ff a5 ff       	call   807dd60 <strcat@plt>
 861de3c:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 861de42:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861de49:	00 
 861de4a:	8d 95 8c fe ff ff    	lea    -0x174(%ebp),%edx
 861de50:	89 54 24 04          	mov    %edx,0x4(%esp)
 861de54:	89 04 24             	mov    %eax,(%esp)
 861de57:	e8 38 aa 00 00       	call   8628894 <_ZN9__gnu_cxx17__normal_iteratorIPK18ENUM_EQUIPMENTTYPESt6vectorIS1_SaIS1_EEEppEi>
 861de5c:	83 ec 04             	sub    $0x4,%esp
 861de5f:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 861de63:	8b 45 0c             	mov    0xc(%ebp),%eax
 861de66:	8d 90 68 07 00 00    	lea    0x768(%eax),%edx
 861de6c:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 861de72:	89 54 24 04          	mov    %edx,0x4(%esp)
 861de76:	89 04 24             	mov    %eax,(%esp)
 861de79:	e8 ba a9 00 00       	call   8628838 <_ZNSt6vectorI18ENUM_EQUIPMENTTYPESaIS0_EE3endEv>
 861de7e:	83 ec 04             	sub    $0x4,%esp
 861de81:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 861de87:	89 44 24 04          	mov    %eax,0x4(%esp)
 861de8b:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 861de91:	89 04 24             	mov    %eax,(%esp)
 861de94:	e8 c5 a9 00 00       	call   862885e <_ZN9__gnu_cxxneIPK18ENUM_EQUIPMENTTYPEPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 861de99:	84 c0                	test   %al,%al
 861de9b:	0f 85 1a ff ff ff    	jne    861ddbb <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x53d>
 861dea1:	8d 9d 08 fd ff ff    	lea    -0x2f8(%ebp),%ebx
 861dea7:	b8 00 00 00 00       	mov    $0x0,%eax
 861deac:	ba 40 00 00 00       	mov    $0x40,%edx
 861deb1:	89 df                	mov    %ebx,%edi
 861deb3:	89 d1                	mov    %edx,%ecx
 861deb5:	f3 ab                	rep stos %eax,%es:(%edi)
 861deb7:	8d 9d 08 fc ff ff    	lea    -0x3f8(%ebp),%ebx
 861debd:	b8 00 00 00 00       	mov    $0x0,%eax
 861dec2:	ba 40 00 00 00       	mov    $0x40,%edx
 861dec7:	89 df                	mov    %ebx,%edi
 861dec9:	89 d1                	mov    %edx,%ecx
 861decb:	f3 ab                	rep stos %eax,%es:(%edi)
 861decd:	8d 9d 08 fb ff ff    	lea    -0x4f8(%ebp),%ebx
 861ded3:	b8 00 00 00 00       	mov    $0x0,%eax
 861ded8:	ba 40 00 00 00       	mov    $0x40,%edx
 861dedd:	89 df                	mov    %ebx,%edi
 861dedf:	89 d1                	mov    %edx,%ecx
 861dee1:	f3 ab                	rep stos %eax,%es:(%edi)
 861dee3:	8d 9d 08 fa ff ff    	lea    -0x5f8(%ebp),%ebx
 861dee9:	b8 00 00 00 00       	mov    $0x0,%eax
 861deee:	ba 40 00 00 00       	mov    $0x40,%edx
 861def3:	89 df                	mov    %ebx,%edi
 861def5:	89 d1                	mov    %edx,%ecx
 861def7:	f3 ab                	rep stos %eax,%es:(%edi)
 861def9:	c6 45 9b 00          	movb   $0x0,-0x65(%ebp)
 861defd:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 861df04:	e9 e3 05 00 00       	jmp    861e4ec <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6e>
 861df09:	8b 45 b8             	mov    -0x48(%ebp),%eax
 861df0c:	8b 55 0c             	mov    0xc(%ebp),%edx
 861df0f:	0f b6 44 02 38       	movzbl 0x38(%edx,%eax,1),%eax
 861df14:	84 c0                	test   %al,%al
 861df16:	0f 84 cc 05 00 00    	je     861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861df1c:	8b 45 b8             	mov    -0x48(%ebp),%eax
 861df1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861df23:	8b 45 0c             	mov    0xc(%ebp),%eax
 861df26:	89 04 24             	mov    %eax,(%esp)
 861df29:	e8 ec 0f 37 00       	call   898ef1a <_ZN17STEquipmentScript10getAniInfoE17ENUM_CHARACTERJOB>
 861df2e:	89 45 bc             	mov    %eax,-0x44(%ebp)
 861df31:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 861df35:	0f 84 c2 05 00 00    	je     861e4fd <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc7f>
 861df3b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df3e:	8b 40 30             	mov    0x30(%eax),%eax
 861df41:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df44:	75 25                	jne    861df6b <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x6ed>
 861df46:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df49:	8b 40 34             	mov    0x34(%eax),%eax
 861df4c:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df4f:	75 1a                	jne    861df6b <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x6ed>
 861df51:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df54:	8b 40 0c             	mov    0xc(%eax),%eax
 861df57:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df5a:	75 0f                	jne    861df6b <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x6ed>
 861df5c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df5f:	8b 40 10             	mov    0x10(%eax),%eax
 861df62:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df65:	0f 84 76 05 00 00    	je     861e4e1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc63>
 861df6b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df6e:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 861df72:	84 c0                	test   %al,%al
 861df74:	0f 84 bb 02 00 00    	je     861e235 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x9b7>
 861df7a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df7d:	8b 40 30             	mov    0x30(%eax),%eax
 861df80:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df83:	75 0f                	jne    861df94 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x716>
 861df85:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861df88:	8b 40 34             	mov    0x34(%eax),%eax
 861df8b:	83 f8 ff             	cmp    $0xffffffff,%eax
 861df8e:	0f 84 50 05 00 00    	je     861e4e4 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc66>
 861df94:	8d 9d 08 f6 ff ff    	lea    -0x9f8(%ebp),%ebx
 861df9a:	b8 00 00 00 00       	mov    $0x0,%eax
 861df9f:	ba 40 00 00 00       	mov    $0x40,%edx
 861dfa4:	89 df                	mov    %ebx,%edi
 861dfa6:	89 d1                	mov    %edx,%ecx
 861dfa8:	f3 ab                	rep stos %eax,%es:(%edi)
 861dfaa:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861dfad:	8b 50 34             	mov    0x34(%eax),%edx
 861dfb0:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861dfb3:	8b 40 30             	mov    0x30(%eax),%eax
 861dfb6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861dfba:	89 44 24 08          	mov    %eax,0x8(%esp)
 861dfbe:	c7 44 24 04 42 2f ce 	movl   $0x8ce2f42,0x4(%esp)
 861dfc5:	08 
 861dfc6:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861dfcc:	89 04 24             	mov    %eax,(%esp)
 861dfcf:	e8 6c 04 a6 ff       	call   807e440 <sprintf@plt>
 861dfd4:	80 7d 9b 00          	cmpb   $0x0,-0x65(%ebp)
 861dfd8:	74 49                	je     861e023 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x7a5>
 861dfda:	c7 85 70 fe ff ff 00 	movl   $0x0,-0x190(%ebp)
 861dfe1:	00 00 00 
 861dfe4:	c7 85 74 fe ff ff 00 	movl   $0x0,-0x18c(%ebp)
 861dfeb:	00 00 00 
 861dfee:	8b 45 b8             	mov    -0x48(%ebp),%eax
 861dff1:	89 44 24 08          	mov    %eax,0x8(%esp)
 861dff5:	c7 44 24 04 3e 2f ce 	movl   $0x8ce2f3e,0x4(%esp)
 861dffc:	08 
 861dffd:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 861e003:	89 04 24             	mov    %eax,(%esp)
 861e006:	e8 35 04 a6 ff       	call   807e440 <sprintf@plt>
 861e00b:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 861e011:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e015:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e01b:	89 04 24             	mov    %eax,(%esp)
 861e01e:	e8 3d fd a5 ff       	call   807dd60 <strcat@plt>
 861e023:	c7 85 7c fe ff ff 00 	movl   $0x0,-0x184(%ebp)
 861e02a:	00 00 00 
 861e02d:	c7 85 80 fe ff ff 00 	movl   $0x0,-0x180(%ebp)
 861e034:	00 00 00 
 861e037:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e03a:	83 c0 18             	add    $0x18,%eax
 861e03d:	89 04 24             	mov    %eax,(%esp)
 861e040:	e8 83 a8 00 00       	call   86288c8 <_ZNKSt6vectorI20STEquipmentAniScriptSaIS0_EE4sizeEv>
 861e045:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e049:	c7 44 24 04 3e 2f ce 	movl   $0x8ce2f3e,0x4(%esp)
 861e050:	08 
 861e051:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 861e057:	89 04 24             	mov    %eax,(%esp)
 861e05a:	e8 e1 03 a6 ff       	call   807e440 <sprintf@plt>
 861e05f:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
 861e065:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e069:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e06f:	89 04 24             	mov    %eax,(%esp)
 861e072:	e8 e9 fc a5 ff       	call   807dd60 <strcat@plt>
 861e077:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e07a:	8d 50 18             	lea    0x18(%eax),%edx
 861e07d:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 861e083:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e087:	89 04 24             	mov    %eax,(%esp)
 861e08a:	e8 5b a8 00 00       	call   86288ea <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE5beginEv>
 861e08f:	83 ec 04             	sub    $0x4,%esp
 861e092:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 861e098:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e09c:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 861e0a2:	89 04 24             	mov    %eax,(%esp)
 861e0a5:	e8 64 a8 00 00       	call   862890e <_ZN9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 861e0aa:	e9 02 01 00 00       	jmp    861e1b1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x933>
 861e0af:	8d 9d 74 ed ff ff    	lea    -0x128c(%ebp),%ebx
 861e0b5:	b8 00 00 00 00       	mov    $0x0,%eax
 861e0ba:	ba 40 00 00 00       	mov    $0x40,%edx
 861e0bf:	89 df                	mov    %ebx,%edi
 861e0c1:	89 d1                	mov    %edx,%ecx
 861e0c3:	f3 ab                	rep stos %eax,%es:(%edi)
 861e0c5:	8d 9d 74 21 ff ff    	lea    -0xde8c(%ebp),%ebx
 861e0cb:	b8 00 00 00 00       	mov    $0x0,%eax
 861e0d0:	ba 40 00 00 00       	mov    $0x40,%edx
 861e0d5:	89 df                	mov    %ebx,%edi
 861e0d7:	89 d1                	mov    %edx,%ecx
 861e0d9:	f3 ab                	rep stos %eax,%es:(%edi)
 861e0db:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 861e0e1:	89 04 24             	mov    %eax,(%esp)
 861e0e4:	e8 91 a8 00 00       	call   862897a <_ZNK9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEdeEv>
 861e0e9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 861e0ec:	c7 44 24 04 4b 2f ce 	movl   $0x8ce2f4b,0x4(%esp)
 861e0f3:	08 
 861e0f4:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e0fa:	89 04 24             	mov    %eax,(%esp)
 861e0fd:	e8 5e fc a5 ff       	call   807dd60 <strcat@plt>
 861e102:	8b 45 c0             	mov    -0x40(%ebp),%eax
 861e105:	83 c0 60             	add    $0x60,%eax
 861e108:	89 04 24             	mov    %eax,(%esp)
 861e10b:	e8 e0 83 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e110:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e114:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861e11a:	89 04 24             	mov    %eax,(%esp)
 861e11d:	e8 ce fd a5 ff       	call   807def0 <strcpy@plt>
 861e122:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 861e129:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 861e130:	eb 2c                	jmp    861e15e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x8e0>
 861e132:	8b 45 c8             	mov    -0x38(%ebp),%eax
 861e135:	0f b6 84 05 74 ed ff 	movzbl -0x128c(%ebp,%eax,1),%eax
 861e13c:	ff 
 861e13d:	3c 5f                	cmp    $0x5f,%al
 861e13f:	74 19                	je     861e15a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x8dc>
 861e141:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 861e144:	8b 55 c8             	mov    -0x38(%ebp),%edx
 861e147:	0f b6 94 15 74 ed ff 	movzbl -0x128c(%ebp,%edx,1),%edx
 861e14e:	ff 
 861e14f:	88 94 05 74 21 ff ff 	mov    %dl,-0xde8c(%ebp,%eax,1)
 861e156:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 861e15a:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 861e15e:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861e164:	89 04 24             	mov    %eax,(%esp)
 861e167:	e8 44 02 a6 ff       	call   807e3b0 <strlen@plt>
 861e16c:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 861e16f:	0f 97 c0             	seta   %al
 861e172:	84 c0                	test   %al,%al
 861e174:	75 bc                	jne    861e132 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x8b4>
 861e176:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e17c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e180:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e186:	89 04 24             	mov    %eax,(%esp)
 861e189:	e8 d2 fb a5 ff       	call   807dd60 <strcat@plt>
 861e18e:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 861e194:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861e19b:	00 
 861e19c:	8d 95 78 fe ff ff    	lea    -0x188(%ebp),%edx
 861e1a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e1a6:	89 04 24             	mov    %eax,(%esp)
 861e1a9:	e8 d6 a7 00 00       	call   8628984 <_ZN9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEppEi>
 861e1ae:	83 ec 04             	sub    $0x4,%esp
 861e1b1:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e1b4:	8d 50 18             	lea    0x18(%eax),%edx
 861e1b7:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 861e1bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e1c1:	89 04 24             	mov    %eax,(%esp)
 861e1c4:	e8 5f a7 00 00       	call   8628928 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE3endEv>
 861e1c9:	83 ec 04             	sub    $0x4,%esp
 861e1cc:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 861e1d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e1d6:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 861e1dc:	89 04 24             	mov    %eax,(%esp)
 861e1df:	e8 6a a7 00 00       	call   862894e <_ZN9__gnu_cxxneIPK20STEquipmentAniScriptPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 861e1e4:	84 c0                	test   %al,%al
 861e1e6:	0f 85 c3 fe ff ff    	jne    861e0af <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x831>
 861e1ec:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 861e1f0:	83 f0 01             	xor    $0x1,%eax
 861e1f3:	84 c0                	test   %al,%al
 861e1f5:	74 21                	je     861e218 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x99a>
 861e1f7:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e1fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e201:	8d 85 08 fc ff ff    	lea    -0x3f8(%ebp),%eax
 861e207:	89 04 24             	mov    %eax,(%esp)
 861e20a:	e8 e1 fc a5 ff       	call   807def0 <strcpy@plt>
 861e20f:	c6 45 9b 01          	movb   $0x1,-0x65(%ebp)
 861e213:	e9 d0 02 00 00       	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e218:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e21e:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e222:	8d 85 08 fa ff ff    	lea    -0x5f8(%ebp),%eax
 861e228:	89 04 24             	mov    %eax,(%esp)
 861e22b:	e8 c0 fc a5 ff       	call   807def0 <strcpy@plt>
 861e230:	e9 b3 02 00 00       	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e235:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e238:	8b 40 0c             	mov    0xc(%eax),%eax
 861e23b:	83 f8 ff             	cmp    $0xffffffff,%eax
 861e23e:	75 0f                	jne    861e24f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x9d1>
 861e240:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e243:	8b 40 10             	mov    0x10(%eax),%eax
 861e246:	83 f8 ff             	cmp    $0xffffffff,%eax
 861e249:	0f 84 98 02 00 00    	je     861e4e7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc69>
 861e24f:	8d 9d 74 21 ff ff    	lea    -0xde8c(%ebp),%ebx
 861e255:	b8 00 00 00 00       	mov    $0x0,%eax
 861e25a:	ba 40 00 00 00       	mov    $0x40,%edx
 861e25f:	89 df                	mov    %ebx,%edi
 861e261:	89 d1                	mov    %edx,%ecx
 861e263:	f3 ab                	rep stos %eax,%es:(%edi)
 861e265:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e268:	8b 50 10             	mov    0x10(%eax),%edx
 861e26b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e26e:	8b 40 0c             	mov    0xc(%eax),%eax
 861e271:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861e275:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e279:	c7 44 24 04 42 2f ce 	movl   $0x8ce2f42,0x4(%esp)
 861e280:	08 
 861e281:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e287:	89 04 24             	mov    %eax,(%esp)
 861e28a:	e8 b1 01 a6 ff       	call   807e440 <sprintf@plt>
 861e28f:	80 7d 9b 00          	cmpb   $0x0,-0x65(%ebp)
 861e293:	74 49                	je     861e2de <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xa60>
 861e295:	c7 85 5c fe ff ff 00 	movl   $0x0,-0x1a4(%ebp)
 861e29c:	00 00 00 
 861e29f:	c7 85 60 fe ff ff 00 	movl   $0x0,-0x1a0(%ebp)
 861e2a6:	00 00 00 
 861e2a9:	8b 45 b8             	mov    -0x48(%ebp),%eax
 861e2ac:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e2b0:	c7 44 24 04 3e 2f ce 	movl   $0x8ce2f3e,0x4(%esp)
 861e2b7:	08 
 861e2b8:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 861e2be:	89 04 24             	mov    %eax,(%esp)
 861e2c1:	e8 7a 01 a6 ff       	call   807e440 <sprintf@plt>
 861e2c6:	8d 85 5c fe ff ff    	lea    -0x1a4(%ebp),%eax
 861e2cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e2d0:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e2d6:	89 04 24             	mov    %eax,(%esp)
 861e2d9:	e8 82 fa a5 ff       	call   807dd60 <strcat@plt>
 861e2de:	c7 85 68 fe ff ff 00 	movl   $0x0,-0x198(%ebp)
 861e2e5:	00 00 00 
 861e2e8:	c7 85 6c fe ff ff 00 	movl   $0x0,-0x194(%ebp)
 861e2ef:	00 00 00 
 861e2f2:	8b 45 bc             	mov    -0x44(%ebp),%eax
 861e2f5:	89 04 24             	mov    %eax,(%esp)
 861e2f8:	e8 cb a5 00 00       	call   86288c8 <_ZNKSt6vectorI20STEquipmentAniScriptSaIS0_EE4sizeEv>
 861e2fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e301:	c7 44 24 04 3e 2f ce 	movl   $0x8ce2f3e,0x4(%esp)
 861e308:	08 
 861e309:	8d 85 68 fe ff ff    	lea    -0x198(%ebp),%eax
 861e30f:	89 04 24             	mov    %eax,(%esp)
 861e312:	e8 29 01 a6 ff       	call   807e440 <sprintf@plt>
 861e317:	8d 85 68 fe ff ff    	lea    -0x198(%ebp),%eax
 861e31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e321:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e327:	89 04 24             	mov    %eax,(%esp)
 861e32a:	e8 31 fa a5 ff       	call   807dd60 <strcat@plt>
 861e32f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 861e332:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 861e338:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e33c:	89 04 24             	mov    %eax,(%esp)
 861e33f:	e8 a6 a5 00 00       	call   86288ea <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE5beginEv>
 861e344:	83 ec 04             	sub    $0x4,%esp
 861e347:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 861e34d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e351:	8d 85 64 fe ff ff    	lea    -0x19c(%ebp),%eax
 861e357:	89 04 24             	mov    %eax,(%esp)
 861e35a:	e8 af a5 00 00       	call   862890e <_ZN9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 861e35f:	e9 02 01 00 00       	jmp    861e466 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xbe8>
 861e364:	8d 9d 74 ed ff ff    	lea    -0x128c(%ebp),%ebx
 861e36a:	b8 00 00 00 00       	mov    $0x0,%eax
 861e36f:	ba 40 00 00 00       	mov    $0x40,%edx
 861e374:	89 df                	mov    %ebx,%edi
 861e376:	89 d1                	mov    %edx,%ecx
 861e378:	f3 ab                	rep stos %eax,%es:(%edi)
 861e37a:	8d 9d 08 f6 ff ff    	lea    -0x9f8(%ebp),%ebx
 861e380:	b8 00 00 00 00       	mov    $0x0,%eax
 861e385:	ba 40 00 00 00       	mov    $0x40,%edx
 861e38a:	89 df                	mov    %ebx,%edi
 861e38c:	89 d1                	mov    %edx,%ecx
 861e38e:	f3 ab                	rep stos %eax,%es:(%edi)
 861e390:	8d 85 64 fe ff ff    	lea    -0x19c(%ebp),%eax
 861e396:	89 04 24             	mov    %eax,(%esp)
 861e399:	e8 dc a5 00 00       	call   862897a <_ZNK9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEdeEv>
 861e39e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 861e3a1:	c7 44 24 04 4b 2f ce 	movl   $0x8ce2f4b,0x4(%esp)
 861e3a8:	08 
 861e3a9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e3af:	89 04 24             	mov    %eax,(%esp)
 861e3b2:	e8 a9 f9 a5 ff       	call   807dd60 <strcat@plt>
 861e3b7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 861e3ba:	83 c0 60             	add    $0x60,%eax
 861e3bd:	89 04 24             	mov    %eax,(%esp)
 861e3c0:	e8 2b 81 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e3c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e3c9:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861e3cf:	89 04 24             	mov    %eax,(%esp)
 861e3d2:	e8 19 fb a5 ff       	call   807def0 <strcpy@plt>
 861e3d7:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 861e3de:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 861e3e5:	eb 2c                	jmp    861e413 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xb95>
 861e3e7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 861e3ea:	0f b6 84 05 74 ed ff 	movzbl -0x128c(%ebp,%eax,1),%eax
 861e3f1:	ff 
 861e3f2:	3c 5f                	cmp    $0x5f,%al
 861e3f4:	74 19                	je     861e40f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xb91>
 861e3f6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 861e3f9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 861e3fc:	0f b6 94 15 74 ed ff 	movzbl -0x128c(%ebp,%edx,1),%edx
 861e403:	ff 
 861e404:	88 94 05 08 f6 ff ff 	mov    %dl,-0x9f8(%ebp,%eax,1)
 861e40b:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 861e40f:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 861e413:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861e419:	89 04 24             	mov    %eax,(%esp)
 861e41c:	e8 8f ff a5 ff       	call   807e3b0 <strlen@plt>
 861e421:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 861e424:	0f 97 c0             	seta   %al
 861e427:	84 c0                	test   %al,%al
 861e429:	75 bc                	jne    861e3e7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xb69>
 861e42b:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e431:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e435:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e43b:	89 04 24             	mov    %eax,(%esp)
 861e43e:	e8 1d f9 a5 ff       	call   807dd60 <strcat@plt>
 861e443:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 861e449:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861e450:	00 
 861e451:	8d 95 64 fe ff ff    	lea    -0x19c(%ebp),%edx
 861e457:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e45b:	89 04 24             	mov    %eax,(%esp)
 861e45e:	e8 21 a5 00 00       	call   8628984 <_ZN9__gnu_cxx17__normal_iteratorIPK20STEquipmentAniScriptSt6vectorIS1_SaIS1_EEEppEi>
 861e463:	83 ec 04             	sub    $0x4,%esp
 861e466:	8b 55 bc             	mov    -0x44(%ebp),%edx
 861e469:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 861e46f:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e473:	89 04 24             	mov    %eax,(%esp)
 861e476:	e8 ad a4 00 00       	call   8628928 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE3endEv>
 861e47b:	83 ec 04             	sub    $0x4,%esp
 861e47e:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 861e484:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e488:	8d 85 64 fe ff ff    	lea    -0x19c(%ebp),%eax
 861e48e:	89 04 24             	mov    %eax,(%esp)
 861e491:	e8 b8 a4 00 00       	call   862894e <_ZN9__gnu_cxxneIPK20STEquipmentAniScriptPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 861e496:	84 c0                	test   %al,%al
 861e498:	0f 85 c6 fe ff ff    	jne    861e364 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xae6>
 861e49e:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 861e4a2:	83 f0 01             	xor    $0x1,%eax
 861e4a5:	84 c0                	test   %al,%al
 861e4a7:	74 1e                	je     861e4c7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc49>
 861e4a9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e4af:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e4b3:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 861e4b9:	89 04 24             	mov    %eax,(%esp)
 861e4bc:	e8 2f fa a5 ff       	call   807def0 <strcpy@plt>
 861e4c1:	c6 45 9b 01          	movb   $0x1,-0x65(%ebp)
 861e4c5:	eb 21                	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e4c7:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e4cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e4d1:	8d 85 08 fb ff ff    	lea    -0x4f8(%ebp),%eax
 861e4d7:	89 04 24             	mov    %eax,(%esp)
 861e4da:	e8 11 fa a5 ff       	call   807def0 <strcpy@plt>
 861e4df:	eb 07                	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e4e1:	90                   	nop
 861e4e2:	eb 04                	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e4e4:	90                   	nop
 861e4e5:	eb 01                	jmp    861e4e8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc6a>
 861e4e7:	90                   	nop
 861e4e8:	83 45 b8 01          	addl   $0x1,-0x48(%ebp)
 861e4ec:	83 7d b8 0a          	cmpl   $0xa,-0x48(%ebp)
 861e4f0:	0f 9e c0             	setle  %al
 861e4f3:	84 c0                	test   %al,%al
 861e4f5:	0f 85 0e fa ff ff    	jne    861df09 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x68b>
 861e4fb:	eb 01                	jmp    861e4fe <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xc80>
 861e4fd:	90                   	nop
 861e4fe:	c7 85 a2 fe ff ff 00 	movl   $0x0,-0x15e(%ebp)
 861e505:	00 00 00 
 861e508:	c6 85 a6 fe ff ff 00 	movb   $0x0,-0x15a(%ebp)
 861e50f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e512:	05 80 07 00 00       	add    $0x780,%eax
 861e517:	89 04 24             	mov    %eax,(%esp)
 861e51a:	e8 41 e4 af ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 861e51f:	83 f0 01             	xor    $0x1,%eax
 861e522:	84 c0                	test   %al,%al
 861e524:	0f 84 d4 00 00 00    	je     861e5fe <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xd80>
 861e52a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 861e531:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e534:	8d 90 80 07 00 00    	lea    0x780(%eax),%edx
 861e53a:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 861e540:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e544:	89 04 24             	mov    %eax,(%esp)
 861e547:	e8 fc fc a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 861e54c:	83 ec 04             	sub    $0x4,%esp
 861e54f:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 861e555:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e559:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 861e55f:	89 04 24             	mov    %eax,(%esp)
 861e562:	e8 85 b4 ad ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 861e567:	eb 54                	jmp    861e5bd <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xd3f>
 861e569:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 861e56d:	0f 8f 8a 00 00 00    	jg     861e5fd <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xd7f>
 861e573:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 861e579:	89 04 24             	mov    %eax,(%esp)
 861e57c:	e8 9b b4 ad ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 861e581:	8b 00                	mov    (%eax),%eax
 861e583:	89 45 dc             	mov    %eax,-0x24(%ebp)
 861e586:	8b 45 d8             	mov    -0x28(%ebp),%eax
 861e589:	8b 55 dc             	mov    -0x24(%ebp),%edx
 861e58c:	83 c2 30             	add    $0x30,%edx
 861e58f:	88 94 05 a2 fe ff ff 	mov    %dl,-0x15e(%ebp,%eax,1)
 861e596:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 861e59a:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 861e5a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 861e5a7:	00 
 861e5a8:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 861e5ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e5b2:	89 04 24             	mov    %eax,(%esp)
 861e5b5:	e8 f8 52 b7 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 861e5ba:	83 ec 04             	sub    $0x4,%esp
 861e5bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e5c0:	8d 90 80 07 00 00    	lea    0x780(%eax),%edx
 861e5c6:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 861e5cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e5d0:	89 04 24             	mov    %eax,(%esp)
 861e5d3:	e8 94 fc a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 861e5d8:	83 ec 04             	sub    $0x4,%esp
 861e5db:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 861e5e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e5e5:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 861e5eb:	89 04 24             	mov    %eax,(%esp)
 861e5ee:	e8 35 4e b7 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 861e5f3:	84 c0                	test   %al,%al
 861e5f5:	0f 85 6e ff ff ff    	jne    861e569 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xceb>
 861e5fb:	eb 01                	jmp    861e5fe <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xd80>
 861e5fd:	90                   	nop
 861e5fe:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861e604:	ba 00 2c 00 00       	mov    $0x2c00,%edx
 861e609:	89 54 24 08          	mov    %edx,0x8(%esp)
 861e60d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861e614:	00 
 861e615:	89 04 24             	mov    %eax,(%esp)
 861e618:	e8 a3 f6 a5 ff       	call   807dcc0 <memset@plt>
 861e61d:	c7 45 9c 04 00 00 00 	movl   $0x4,-0x64(%ebp)
 861e624:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 861e62a:	89 04 24             	mov    %eax,(%esp)
 861e62d:	e8 9e 7f 0e 00       	call   87065d0 <_ZNSsC1Ev>
 861e632:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e635:	05 b4 00 00 00       	add    $0xb4,%eax
 861e63a:	89 04 24             	mov    %eax,(%esp)
 861e63d:	e8 2e 80 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 861e642:	85 c0                	test   %eax,%eax
 861e644:	0f 95 c0             	setne  %al
 861e647:	84 c0                	test   %al,%al
 861e649:	74 1c                	je     861e667 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xde9>
 861e64b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e64e:	05 b4 00 00 00       	add    $0xb4,%eax
 861e653:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e657:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 861e65d:	89 04 24             	mov    %eax,(%esp)
 861e660:	e8 9b 96 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 861e665:	eb 1a                	jmp    861e681 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xe03>
 861e667:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e66a:	05 a4 06 00 00       	add    $0x6a4,%eax
 861e66f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e673:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 861e679:	89 04 24             	mov    %eax,(%esp)
 861e67c:	e8 7f 96 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 861e681:	8d 9d 08 f6 ff ff    	lea    -0x9f8(%ebp),%ebx
 861e687:	b8 00 00 00 00       	mov    $0x0,%eax
 861e68c:	ba 00 01 00 00       	mov    $0x100,%edx
 861e691:	89 df                	mov    %ebx,%edi
 861e693:	89 d1                	mov    %edx,%ecx
 861e695:	f3 ab                	rep stos %eax,%es:(%edi)
 861e697:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e69a:	05 ac 00 00 00       	add    $0xac,%eax
 861e69f:	89 04 24             	mov    %eax,(%esp)
 861e6a2:	e8 49 7e 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e6a7:	8d 95 08 f6 ff ff    	lea    -0x9f8(%ebp),%edx
 861e6ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e6b1:	89 04 24             	mov    %eax,(%esp)
 861e6b4:	e8 4f a7 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 861e6b9:	83 f0 01             	xor    $0x1,%eax
 861e6bc:	84 c0                	test   %al,%al
 861e6be:	0f 84 82 00 00 00    	je     861e746 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xec8>
 861e6c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e6c7:	05 ac 00 00 00       	add    $0xac,%eax
 861e6cc:	89 04 24             	mov    %eax,(%esp)
 861e6cf:	e8 1c 7e 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e6d4:	89 c7                	mov    %eax,%edi
 861e6d6:	e8 05 a7 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 861e6db:	89 c6                	mov    %eax,%esi
 861e6dd:	e8 ea a6 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 861e6e2:	89 c3                	mov    %eax,%ebx
 861e6e4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 861e6eb:	00 
 861e6ec:	c7 44 24 08 98 03 00 	movl   $0x398,0x8(%esp)
 861e6f3:	00 
 861e6f4:	c7 44 24 04 80 58 ce 	movl   $0x8ce5880,0x4(%esp)
 861e6fb:	08 
 861e6fc:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 861e702:	89 04 24             	mov    %eax,(%esp)
 861e705:	e8 0e 10 f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 861e70a:	c7 44 24 18 98 03 00 	movl   $0x398,0x18(%esp)
 861e711:	00 
 861e712:	c7 44 24 14 80 58 ce 	movl   $0x8ce5880,0x14(%esp)
 861e719:	08 
 861e71a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 861e71e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861e722:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861e726:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 861e72d:	08 
 861e72e:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 861e734:	89 04 24             	mov    %eax,(%esp)
 861e737:	e8 4c 10 f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 861e73c:	bb 00 00 00 00       	mov    $0x0,%ebx
 861e741:	e9 06 22 00 00       	jmp    862094c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30ce>
 861e746:	8d 9d 74 ed ff ff    	lea    -0x128c(%ebp),%ebx
 861e74c:	b8 00 00 00 00       	mov    $0x0,%eax
 861e751:	ba 00 01 00 00       	mov    $0x100,%edx
 861e756:	89 df                	mov    %ebx,%edi
 861e758:	89 d1                	mov    %edx,%ecx
 861e75a:	f3 ab                	rep stos %eax,%es:(%edi)
 861e75c:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 861e762:	89 04 24             	mov    %eax,(%esp)
 861e765:	e8 86 7d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e76a:	8d 95 74 ed ff ff    	lea    -0x128c(%ebp),%edx
 861e770:	89 54 24 04          	mov    %edx,0x4(%esp)
 861e774:	89 04 24             	mov    %eax,(%esp)
 861e777:	e8 8c a6 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 861e77c:	83 f0 01             	xor    $0x1,%eax
 861e77f:	84 c0                	test   %al,%al
 861e781:	0f 84 82 00 00 00    	je     861e809 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0xf8b>
 861e787:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e78a:	05 b4 00 00 00       	add    $0xb4,%eax
 861e78f:	89 04 24             	mov    %eax,(%esp)
 861e792:	e8 59 7d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e797:	89 c7                	mov    %eax,%edi
 861e799:	e8 42 a6 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 861e79e:	89 c6                	mov    %eax,%esi
 861e7a0:	e8 27 a6 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 861e7a5:	89 c3                	mov    %eax,%ebx
 861e7a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 861e7ae:	00 
 861e7af:	c7 44 24 08 9f 03 00 	movl   $0x39f,0x8(%esp)
 861e7b6:	00 
 861e7b7:	c7 44 24 04 80 58 ce 	movl   $0x8ce5880,0x4(%esp)
 861e7be:	08 
 861e7bf:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 861e7c5:	89 04 24             	mov    %eax,(%esp)
 861e7c8:	e8 4b 0f f3 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 861e7cd:	c7 44 24 18 9f 03 00 	movl   $0x39f,0x18(%esp)
 861e7d4:	00 
 861e7d5:	c7 44 24 14 80 58 ce 	movl   $0x8ce5880,0x14(%esp)
 861e7dc:	08 
 861e7dd:	89 7c 24 10          	mov    %edi,0x10(%esp)
 861e7e1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 861e7e5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861e7e9:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 861e7f0:	08 
 861e7f1:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 861e7f7:	89 04 24             	mov    %eax,(%esp)
 861e7fa:	e8 89 0f f3 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 861e7ff:	bb 00 00 00 00       	mov    $0x0,%ebx
 861e804:	e9 43 21 00 00       	jmp    862094c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30ce>
 861e809:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e80f:	89 04 24             	mov    %eax,(%esp)
 861e812:	e8 a7 81 00 00       	call   86269be <_ZN13CStreamBufferC1Ev>
 861e817:	8b 45 10             	mov    0x10(%ebp),%eax
 861e81a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e81e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e824:	89 04 24             	mov    %eax,(%esp)
 861e827:	e8 6a 82 00 00       	call   8626a96 <_ZN13CStreamBufferlsEj>
 861e82c:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861e832:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e836:	8d 85 08 f6 ff ff    	lea    -0x9f8(%ebp),%eax
 861e83c:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e840:	8b 45 88             	mov    -0x78(%ebp),%eax
 861e843:	89 04 24             	mov    %eax,(%esp)
 861e846:	e8 fc e3 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861e84b:	89 c3                	mov    %eax,%ebx
 861e84d:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861e854:	08 
 861e855:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e85b:	89 04 24             	mov    %eax,(%esp)
 861e85e:	e8 e7 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e863:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e867:	89 04 24             	mov    %eax,(%esp)
 861e86a:	e8 db 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e86f:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861e876:	08 
 861e877:	89 04 24             	mov    %eax,(%esp)
 861e87a:	e8 cb 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e87f:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861e885:	8d 98 00 04 00 00    	lea    0x400(%eax),%ebx
 861e88b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e88e:	05 b0 00 00 00       	add    $0xb0,%eax
 861e893:	89 04 24             	mov    %eax,(%esp)
 861e896:	e8 55 7c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861e89b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861e89f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e8a3:	8b 45 88             	mov    -0x78(%ebp),%eax
 861e8a6:	89 04 24             	mov    %eax,(%esp)
 861e8a9:	e8 99 e3 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861e8ae:	89 c3                	mov    %eax,%ebx
 861e8b0:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861e8b7:	08 
 861e8b8:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e8be:	89 04 24             	mov    %eax,(%esp)
 861e8c1:	e8 84 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e8c6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e8ca:	89 04 24             	mov    %eax,(%esp)
 861e8cd:	e8 78 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e8d2:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861e8d9:	08 
 861e8da:	89 04 24             	mov    %eax,(%esp)
 861e8dd:	e8 68 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e8e2:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861e8e8:	05 00 08 00 00       	add    $0x800,%eax
 861e8ed:	89 44 24 08          	mov    %eax,0x8(%esp)
 861e8f1:	8d 85 74 ed ff ff    	lea    -0x128c(%ebp),%eax
 861e8f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e8fb:	8b 45 88             	mov    -0x78(%ebp),%eax
 861e8fe:	89 04 24             	mov    %eax,(%esp)
 861e901:	e8 41 e3 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861e906:	89 c3                	mov    %eax,%ebx
 861e908:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861e90f:	08 
 861e910:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e916:	89 04 24             	mov    %eax,(%esp)
 861e919:	e8 2c 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e91e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e922:	89 04 24             	mov    %eax,(%esp)
 861e925:	e8 20 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e92a:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861e931:	08 
 861e932:	89 04 24             	mov    %eax,(%esp)
 861e935:	e8 10 81 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e93a:	8b 9d ac fe ff ff    	mov    -0x154(%ebp),%ebx
 861e940:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861e947:	08 
 861e948:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e94e:	89 04 24             	mov    %eax,(%esp)
 861e951:	e8 f4 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e956:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e95a:	89 04 24             	mov    %eax,(%esp)
 861e95d:	e8 0e 81 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861e962:	8b 9d b0 fe ff ff    	mov    -0x150(%ebp),%ebx
 861e968:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861e96f:	08 
 861e970:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e976:	89 04 24             	mov    %eax,(%esp)
 861e979:	e8 cc 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e97e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e982:	89 04 24             	mov    %eax,(%esp)
 861e985:	e8 e6 80 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861e98a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e98d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861e991:	8b 45 08             	mov    0x8(%ebp),%eax
 861e994:	89 04 24             	mov    %eax,(%esp)
 861e997:	e8 94 e9 ff ff       	call   861d330 <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STEquipmentScript>
 861e99c:	89 c3                	mov    %eax,%ebx
 861e99e:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861e9a5:	08 
 861e9a6:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e9ac:	89 04 24             	mov    %eax,(%esp)
 861e9af:	e8 96 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e9b4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e9b8:	89 04 24             	mov    %eax,(%esp)
 861e9bb:	e8 8a 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e9c0:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861e9c7:	08 
 861e9c8:	89 04 24             	mov    %eax,(%esp)
 861e9cb:	e8 7a 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e9d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e9d3:	8b 58 04             	mov    0x4(%eax),%ebx
 861e9d6:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861e9dd:	08 
 861e9de:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861e9e4:	89 04 24             	mov    %eax,(%esp)
 861e9e7:	e8 5e 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861e9ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861e9f0:	89 04 24             	mov    %eax,(%esp)
 861e9f3:	e8 78 80 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861e9f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 861e9fb:	8b 40 08             	mov    0x8(%eax),%eax
 861e9fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 861ea02:	8b 45 08             	mov    0x8(%ebp),%eax
 861ea05:	89 04 24             	mov    %eax,(%esp)
 861ea08:	e8 df e9 ff ff       	call   861d3ec <_ZN11sync_script11CSyncScript13GetAttachTypeEi>
 861ea0d:	89 c3                	mov    %eax,%ebx
 861ea0f:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861ea16:	08 
 861ea17:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ea1d:	89 04 24             	mov    %eax,(%esp)
 861ea20:	e8 25 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ea25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ea29:	89 04 24             	mov    %eax,(%esp)
 861ea2c:	e8 19 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ea31:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861ea38:	08 
 861ea39:	89 04 24             	mov    %eax,(%esp)
 861ea3c:	e8 09 80 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ea41:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ea44:	8b 58 5c             	mov    0x5c(%eax),%ebx
 861ea47:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ea4e:	08 
 861ea4f:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ea55:	89 04 24             	mov    %eax,(%esp)
 861ea58:	e8 ed 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ea5d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ea61:	89 04 24             	mov    %eax,(%esp)
 861ea64:	e8 07 80 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ea69:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ea6c:	8b 98 84 01 00 00    	mov    0x184(%eax),%ebx
 861ea72:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ea79:	08 
 861ea7a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ea80:	89 04 24             	mov    %eax,(%esp)
 861ea83:	e8 c2 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ea88:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ea8c:	89 04 24             	mov    %eax,(%esp)
 861ea8f:	e8 dc 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ea94:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ea97:	8b 58 0c             	mov    0xc(%eax),%ebx
 861ea9a:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eaa1:	08 
 861eaa2:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eaa8:	89 04 24             	mov    %eax,(%esp)
 861eaab:	e8 9a 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eab0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eab4:	89 04 24             	mov    %eax,(%esp)
 861eab7:	e8 b4 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eabc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eabf:	8b 40 10             	mov    0x10(%eax),%eax
 861eac2:	89 c3                	mov    %eax,%ebx
 861eac4:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eacb:	08 
 861eacc:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ead2:	89 04 24             	mov    %eax,(%esp)
 861ead5:	e8 70 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eada:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eade:	89 04 24             	mov    %eax,(%esp)
 861eae1:	e8 8a 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eae9:	8b 58 34             	mov    0x34(%eax),%ebx
 861eaec:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eaf3:	08 
 861eaf4:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eafa:	89 04 24             	mov    %eax,(%esp)
 861eafd:	e8 48 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eb02:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eb06:	89 04 24             	mov    %eax,(%esp)
 861eb09:	e8 62 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eb0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eb11:	8b 58 14             	mov    0x14(%eax),%ebx
 861eb14:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eb1b:	08 
 861eb1c:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eb22:	89 04 24             	mov    %eax,(%esp)
 861eb25:	e8 20 7f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eb2a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eb2e:	89 04 24             	mov    %eax,(%esp)
 861eb31:	e8 3a 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eb36:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eb39:	8b 58 18             	mov    0x18(%eax),%ebx
 861eb3c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eb43:	08 
 861eb44:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eb4a:	89 04 24             	mov    %eax,(%esp)
 861eb4d:	e8 f8 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eb52:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eb56:	89 04 24             	mov    %eax,(%esp)
 861eb59:	e8 12 7f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eb5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eb61:	8b 58 1c             	mov    0x1c(%eax),%ebx
 861eb64:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eb6b:	08 
 861eb6c:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eb72:	89 04 24             	mov    %eax,(%esp)
 861eb75:	e8 d0 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eb7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eb7e:	89 04 24             	mov    %eax,(%esp)
 861eb81:	e8 ea 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eb86:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eb89:	8b 98 bc 01 00 00    	mov    0x1bc(%eax),%ebx
 861eb8f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eb96:	08 
 861eb97:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eb9d:	89 04 24             	mov    %eax,(%esp)
 861eba0:	e8 a5 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eba5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eba9:	89 04 24             	mov    %eax,(%esp)
 861ebac:	e8 bf 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ebb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ebb4:	8b 58 68             	mov    0x68(%eax),%ebx
 861ebb7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ebbe:	08 
 861ebbf:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ebc5:	89 04 24             	mov    %eax,(%esp)
 861ebc8:	e8 7d 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ebcd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ebd1:	89 04 24             	mov    %eax,(%esp)
 861ebd4:	e8 97 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ebd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ebdc:	8b 98 c4 01 00 00    	mov    0x1c4(%eax),%ebx
 861ebe2:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ebe9:	08 
 861ebea:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ebf0:	89 04 24             	mov    %eax,(%esp)
 861ebf3:	e8 52 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ebf8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ebfc:	89 04 24             	mov    %eax,(%esp)
 861ebff:	e8 6c 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ec04:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ec07:	8b 98 cc 01 00 00    	mov    0x1cc(%eax),%ebx
 861ec0d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ec14:	08 
 861ec15:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ec1b:	89 04 24             	mov    %eax,(%esp)
 861ec1e:	e8 27 7e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ec23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ec27:	89 04 24             	mov    %eax,(%esp)
 861ec2a:	e8 41 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ec2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ec32:	8b 98 d4 01 00 00    	mov    0x1d4(%eax),%ebx
 861ec38:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ec3f:	08 
 861ec40:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ec46:	89 04 24             	mov    %eax,(%esp)
 861ec49:	e8 fc 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ec4e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ec52:	89 04 24             	mov    %eax,(%esp)
 861ec55:	e8 16 7e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ec5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ec5d:	8b 98 d8 01 00 00    	mov    0x1d8(%eax),%ebx
 861ec63:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ec6a:	08 
 861ec6b:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ec71:	89 04 24             	mov    %eax,(%esp)
 861ec74:	e8 d1 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ec79:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ec7d:	89 04 24             	mov    %eax,(%esp)
 861ec80:	e8 eb 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ec85:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ec88:	8b 98 dc 01 00 00    	mov    0x1dc(%eax),%ebx
 861ec8e:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ec95:	08 
 861ec96:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ec9c:	89 04 24             	mov    %eax,(%esp)
 861ec9f:	e8 a6 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eca4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eca8:	89 04 24             	mov    %eax,(%esp)
 861ecab:	e8 c0 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ecb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ecb3:	8b 98 e4 01 00 00    	mov    0x1e4(%eax),%ebx
 861ecb9:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ecc0:	08 
 861ecc1:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ecc7:	89 04 24             	mov    %eax,(%esp)
 861ecca:	e8 7b 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eccf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ecd3:	89 04 24             	mov    %eax,(%esp)
 861ecd6:	e8 95 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ecdb:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ecde:	8b 98 14 02 00 00    	mov    0x214(%eax),%ebx
 861ece4:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eceb:	08 
 861ecec:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ecf2:	89 04 24             	mov    %eax,(%esp)
 861ecf5:	e8 50 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ecfa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ecfe:	89 04 24             	mov    %eax,(%esp)
 861ed01:	e8 6a 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ed06:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ed09:	8b 98 1c 02 00 00    	mov    0x21c(%eax),%ebx
 861ed0f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ed16:	08 
 861ed17:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ed1d:	89 04 24             	mov    %eax,(%esp)
 861ed20:	e8 25 7d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ed25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ed29:	89 04 24             	mov    %eax,(%esp)
 861ed2c:	e8 3f 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ed31:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ed34:	8b 98 24 02 00 00    	mov    0x224(%eax),%ebx
 861ed3a:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ed41:	08 
 861ed42:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ed48:	89 04 24             	mov    %eax,(%esp)
 861ed4b:	e8 fa 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ed50:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ed54:	89 04 24             	mov    %eax,(%esp)
 861ed57:	e8 14 7d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ed5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ed5f:	8b 98 2c 02 00 00    	mov    0x22c(%eax),%ebx
 861ed65:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ed6c:	08 
 861ed6d:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ed73:	89 04 24             	mov    %eax,(%esp)
 861ed76:	e8 cf 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ed7b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ed7f:	89 04 24             	mov    %eax,(%esp)
 861ed82:	e8 e9 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ed87:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ed8a:	8b 98 70 02 00 00    	mov    0x270(%eax),%ebx
 861ed90:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ed97:	08 
 861ed98:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ed9e:	89 04 24             	mov    %eax,(%esp)
 861eda1:	e8 a4 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eda6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861edaa:	89 04 24             	mov    %eax,(%esp)
 861edad:	e8 be 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861edb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 861edb5:	8b 98 74 02 00 00    	mov    0x274(%eax),%ebx
 861edbb:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861edc2:	08 
 861edc3:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861edc9:	89 04 24             	mov    %eax,(%esp)
 861edcc:	e8 79 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861edd1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861edd5:	89 04 24             	mov    %eax,(%esp)
 861edd8:	e8 93 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eddd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ede0:	8b 98 78 02 00 00    	mov    0x278(%eax),%ebx
 861ede6:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eded:	08 
 861edee:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861edf4:	89 04 24             	mov    %eax,(%esp)
 861edf7:	e8 4e 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861edfc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ee00:	89 04 24             	mov    %eax,(%esp)
 861ee03:	e8 68 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ee08:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ee0b:	8b 98 7c 02 00 00    	mov    0x27c(%eax),%ebx
 861ee11:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ee18:	08 
 861ee19:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ee1f:	89 04 24             	mov    %eax,(%esp)
 861ee22:	e8 23 7c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ee27:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ee2b:	89 04 24             	mov    %eax,(%esp)
 861ee2e:	e8 3d 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ee33:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ee36:	8b 98 80 02 00 00    	mov    0x280(%eax),%ebx
 861ee3c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ee43:	08 
 861ee44:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ee4a:	89 04 24             	mov    %eax,(%esp)
 861ee4d:	e8 f8 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ee52:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ee56:	89 04 24             	mov    %eax,(%esp)
 861ee59:	e8 12 7c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ee5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ee61:	8b 98 84 02 00 00    	mov    0x284(%eax),%ebx
 861ee67:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ee6e:	08 
 861ee6f:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ee75:	89 04 24             	mov    %eax,(%esp)
 861ee78:	e8 cd 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ee7d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ee81:	89 04 24             	mov    %eax,(%esp)
 861ee84:	e8 e7 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ee89:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ee8c:	8b 98 88 02 00 00    	mov    0x288(%eax),%ebx
 861ee92:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ee99:	08 
 861ee9a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eea0:	89 04 24             	mov    %eax,(%esp)
 861eea3:	e8 a2 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eea8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eeac:	89 04 24             	mov    %eax,(%esp)
 861eeaf:	e8 bc 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eeb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eeb7:	8b 98 8c 02 00 00    	mov    0x28c(%eax),%ebx
 861eebd:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eec4:	08 
 861eec5:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eecb:	89 04 24             	mov    %eax,(%esp)
 861eece:	e8 77 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eed3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861eed7:	89 04 24             	mov    %eax,(%esp)
 861eeda:	e8 91 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861eedf:	8b 45 0c             	mov    0xc(%ebp),%eax
 861eee2:	8b 98 90 02 00 00    	mov    0x290(%eax),%ebx
 861eee8:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eeef:	08 
 861eef0:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eef6:	89 04 24             	mov    %eax,(%esp)
 861eef9:	e8 4c 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861eefe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ef02:	89 04 24             	mov    %eax,(%esp)
 861ef05:	e8 66 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ef0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ef0d:	8b 98 94 02 00 00    	mov    0x294(%eax),%ebx
 861ef13:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ef1a:	08 
 861ef1b:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ef21:	89 04 24             	mov    %eax,(%esp)
 861ef24:	e8 21 7b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ef29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ef2d:	89 04 24             	mov    %eax,(%esp)
 861ef30:	e8 3b 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ef35:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ef38:	8b 98 98 02 00 00    	mov    0x298(%eax),%ebx
 861ef3e:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ef45:	08 
 861ef46:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ef4c:	89 04 24             	mov    %eax,(%esp)
 861ef4f:	e8 f6 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ef54:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ef58:	89 04 24             	mov    %eax,(%esp)
 861ef5b:	e8 10 7b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ef60:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ef63:	8b 98 9c 02 00 00    	mov    0x29c(%eax),%ebx
 861ef69:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ef70:	08 
 861ef71:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ef77:	89 04 24             	mov    %eax,(%esp)
 861ef7a:	e8 cb 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ef7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ef83:	89 04 24             	mov    %eax,(%esp)
 861ef86:	e8 e5 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ef8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ef8e:	8b 98 a0 02 00 00    	mov    0x2a0(%eax),%ebx
 861ef94:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ef9b:	08 
 861ef9c:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861efa2:	89 04 24             	mov    %eax,(%esp)
 861efa5:	e8 a0 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861efaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861efae:	89 04 24             	mov    %eax,(%esp)
 861efb1:	e8 ba 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861efb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 861efb9:	8b 98 a4 02 00 00    	mov    0x2a4(%eax),%ebx
 861efbf:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861efc6:	08 
 861efc7:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861efcd:	89 04 24             	mov    %eax,(%esp)
 861efd0:	e8 75 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861efd5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861efd9:	89 04 24             	mov    %eax,(%esp)
 861efdc:	e8 8f 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861efe1:	8b 45 0c             	mov    0xc(%ebp),%eax
 861efe4:	8b 98 a8 02 00 00    	mov    0x2a8(%eax),%ebx
 861efea:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861eff1:	08 
 861eff2:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861eff8:	89 04 24             	mov    %eax,(%esp)
 861effb:	e8 4a 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f000:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f004:	89 04 24             	mov    %eax,(%esp)
 861f007:	e8 64 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f00c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f00f:	8b 98 ac 02 00 00    	mov    0x2ac(%eax),%ebx
 861f015:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f01c:	08 
 861f01d:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f023:	89 04 24             	mov    %eax,(%esp)
 861f026:	e8 1f 7a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f02b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f02f:	89 04 24             	mov    %eax,(%esp)
 861f032:	e8 39 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f037:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f03a:	8b 98 b0 02 00 00    	mov    0x2b0(%eax),%ebx
 861f040:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f047:	08 
 861f048:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f04e:	89 04 24             	mov    %eax,(%esp)
 861f051:	e8 f4 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f056:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f05a:	89 04 24             	mov    %eax,(%esp)
 861f05d:	e8 0e 7a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f062:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f065:	8b 98 bc 02 00 00    	mov    0x2bc(%eax),%ebx
 861f06b:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f072:	08 
 861f073:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f079:	89 04 24             	mov    %eax,(%esp)
 861f07c:	e8 c9 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f081:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f085:	89 04 24             	mov    %eax,(%esp)
 861f088:	e8 e3 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f08d:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f090:	8b 98 c0 02 00 00    	mov    0x2c0(%eax),%ebx
 861f096:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f09d:	08 
 861f09e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f0a4:	89 04 24             	mov    %eax,(%esp)
 861f0a7:	e8 9e 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f0ac:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f0b0:	89 04 24             	mov    %eax,(%esp)
 861f0b3:	e8 b8 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f0b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f0bb:	8b 98 c8 02 00 00    	mov    0x2c8(%eax),%ebx
 861f0c1:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f0c8:	08 
 861f0c9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f0cf:	89 04 24             	mov    %eax,(%esp)
 861f0d2:	e8 73 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f0d7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f0db:	89 04 24             	mov    %eax,(%esp)
 861f0de:	e8 8d 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f0e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f0e6:	8b 98 b4 02 00 00    	mov    0x2b4(%eax),%ebx
 861f0ec:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f0f3:	08 
 861f0f4:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f0fa:	89 04 24             	mov    %eax,(%esp)
 861f0fd:	e8 48 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f102:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f106:	89 04 24             	mov    %eax,(%esp)
 861f109:	e8 62 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f10e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f111:	8b 98 b8 02 00 00    	mov    0x2b8(%eax),%ebx
 861f117:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f11e:	08 
 861f11f:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f125:	89 04 24             	mov    %eax,(%esp)
 861f128:	e8 1d 79 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f12d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f131:	89 04 24             	mov    %eax,(%esp)
 861f134:	e8 37 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f139:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f13c:	8b 98 cc 02 00 00    	mov    0x2cc(%eax),%ebx
 861f142:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f149:	08 
 861f14a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f150:	89 04 24             	mov    %eax,(%esp)
 861f153:	e8 f2 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f158:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f15c:	89 04 24             	mov    %eax,(%esp)
 861f15f:	e8 0c 79 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f164:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f167:	8b 98 d0 02 00 00    	mov    0x2d0(%eax),%ebx
 861f16d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f174:	08 
 861f175:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f17b:	89 04 24             	mov    %eax,(%esp)
 861f17e:	e8 c7 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f183:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f187:	89 04 24             	mov    %eax,(%esp)
 861f18a:	e8 e1 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f18f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f192:	8b 98 d4 02 00 00    	mov    0x2d4(%eax),%ebx
 861f198:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f19f:	08 
 861f1a0:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f1a6:	89 04 24             	mov    %eax,(%esp)
 861f1a9:	e8 9c 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f1ae:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f1b2:	89 04 24             	mov    %eax,(%esp)
 861f1b5:	e8 b6 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f1ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f1bd:	8b 98 dc 02 00 00    	mov    0x2dc(%eax),%ebx
 861f1c3:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f1ca:	08 
 861f1cb:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f1d1:	89 04 24             	mov    %eax,(%esp)
 861f1d4:	e8 71 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f1d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f1dd:	89 04 24             	mov    %eax,(%esp)
 861f1e0:	e8 8b 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f1e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f1e8:	8b 98 e8 02 00 00    	mov    0x2e8(%eax),%ebx
 861f1ee:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f1f5:	08 
 861f1f6:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f1fc:	89 04 24             	mov    %eax,(%esp)
 861f1ff:	e8 46 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f204:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f208:	89 04 24             	mov    %eax,(%esp)
 861f20b:	e8 60 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f210:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f213:	8b 98 ec 02 00 00    	mov    0x2ec(%eax),%ebx
 861f219:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f220:	08 
 861f221:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f227:	89 04 24             	mov    %eax,(%esp)
 861f22a:	e8 1b 78 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f22f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f233:	89 04 24             	mov    %eax,(%esp)
 861f236:	e8 35 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f23b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f23e:	8b 98 f0 02 00 00    	mov    0x2f0(%eax),%ebx
 861f244:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f24b:	08 
 861f24c:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f252:	89 04 24             	mov    %eax,(%esp)
 861f255:	e8 f0 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f25a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f25e:	89 04 24             	mov    %eax,(%esp)
 861f261:	e8 0a 78 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f266:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f269:	8b 98 f4 02 00 00    	mov    0x2f4(%eax),%ebx
 861f26f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f276:	08 
 861f277:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f27d:	89 04 24             	mov    %eax,(%esp)
 861f280:	e8 c5 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f285:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f289:	89 04 24             	mov    %eax,(%esp)
 861f28c:	e8 df 77 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f291:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f294:	05 c0 01 00 00       	add    $0x1c0,%eax
 861f299:	89 44 24 04          	mov    %eax,0x4(%esp)
 861f29d:	8b 45 08             	mov    0x8(%ebp),%eax
 861f2a0:	89 04 24             	mov    %eax,(%esp)
 861f2a3:	e8 86 e1 ff ff       	call   861d42e <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo>
 861f2a8:	89 c3                	mov    %eax,%ebx
 861f2aa:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f2b1:	08 
 861f2b2:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f2b8:	89 04 24             	mov    %eax,(%esp)
 861f2bb:	e8 8a 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f2c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f2c4:	89 04 24             	mov    %eax,(%esp)
 861f2c7:	e8 7e 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f2cc:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f2d3:	08 
 861f2d4:	89 04 24             	mov    %eax,(%esp)
 861f2d7:	e8 6e 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f2dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f2df:	8b 80 04 03 00 00    	mov    0x304(%eax),%eax
 861f2e5:	89 c3                	mov    %eax,%ebx
 861f2e7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f2ee:	08 
 861f2ef:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f2f5:	89 04 24             	mov    %eax,(%esp)
 861f2f8:	e8 4d 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f2fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f301:	89 04 24             	mov    %eax,(%esp)
 861f304:	e8 67 77 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f309:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f30c:	8b 98 08 03 00 00    	mov    0x308(%eax),%ebx
 861f312:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f319:	08 
 861f31a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f320:	89 04 24             	mov    %eax,(%esp)
 861f323:	e8 22 77 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f328:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f32c:	89 04 24             	mov    %eax,(%esp)
 861f32f:	e8 88 77 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861f334:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f337:	8b 98 0c 03 00 00    	mov    0x30c(%eax),%ebx
 861f33d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f344:	08 
 861f345:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f34b:	89 04 24             	mov    %eax,(%esp)
 861f34e:	e8 f7 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f353:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f357:	89 04 24             	mov    %eax,(%esp)
 861f35a:	e8 11 77 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f35f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f362:	8b 98 e0 03 00 00    	mov    0x3e0(%eax),%ebx
 861f368:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f36f:	08 
 861f370:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f376:	89 04 24             	mov    %eax,(%esp)
 861f379:	e8 cc 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f37e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f382:	89 04 24             	mov    %eax,(%esp)
 861f385:	e8 e6 76 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f38a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f38d:	8b 98 e4 03 00 00    	mov    0x3e4(%eax),%ebx
 861f393:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f39a:	08 
 861f39b:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f3a1:	89 04 24             	mov    %eax,(%esp)
 861f3a4:	e8 a1 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f3a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f3ad:	89 04 24             	mov    %eax,(%esp)
 861f3b0:	e8 bb 76 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f3b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f3b8:	0f b6 80 fc 03 00 00 	movzbl 0x3fc(%eax),%eax
 861f3bf:	0f b6 d8             	movzbl %al,%ebx
 861f3c2:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f3c9:	08 
 861f3ca:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f3d0:	89 04 24             	mov    %eax,(%esp)
 861f3d3:	e8 72 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f3d8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f3dc:	89 04 24             	mov    %eax,(%esp)
 861f3df:	e8 8c 76 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f3e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f3e7:	0f b6 80 fd 03 00 00 	movzbl 0x3fd(%eax),%eax
 861f3ee:	0f b6 d8             	movzbl %al,%ebx
 861f3f1:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f3f8:	08 
 861f3f9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f3ff:	89 04 24             	mov    %eax,(%esp)
 861f402:	e8 43 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f407:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f40b:	89 04 24             	mov    %eax,(%esp)
 861f40e:	e8 5d 76 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f413:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f416:	8b 98 f8 02 00 00    	mov    0x2f8(%eax),%ebx
 861f41c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f423:	08 
 861f424:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f42a:	89 04 24             	mov    %eax,(%esp)
 861f42d:	e8 18 76 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f432:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f436:	89 04 24             	mov    %eax,(%esp)
 861f439:	e8 7e 76 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861f43e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f441:	8b 98 e8 03 00 00    	mov    0x3e8(%eax),%ebx
 861f447:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f44e:	08 
 861f44f:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f455:	89 04 24             	mov    %eax,(%esp)
 861f458:	e8 ed 75 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f45d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f461:	89 04 24             	mov    %eax,(%esp)
 861f464:	e8 53 76 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861f469:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f46c:	0f b6 80 ec 03 00 00 	movzbl 0x3ec(%eax),%eax
 861f473:	0f b6 d8             	movzbl %al,%ebx
 861f476:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f47d:	08 
 861f47e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f484:	89 04 24             	mov    %eax,(%esp)
 861f487:	e8 be 75 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f48c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f490:	89 04 24             	mov    %eax,(%esp)
 861f493:	e8 d8 75 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f498:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 861f49e:	89 04 24             	mov    %eax,(%esp)
 861f4a1:	e8 b2 6a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 861f4a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f4a9:	8d 90 0c 04 00 00    	lea    0x40c(%eax),%edx
 861f4af:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 861f4b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 861f4b9:	89 04 24             	mov    %eax,(%esp)
 861f4bc:	e8 65 1b b6 ff       	call   8181026 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE3endEv>
 861f4c1:	83 ec 04             	sub    $0x4,%esp
 861f4c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f4c7:	8d 90 0c 04 00 00    	lea    0x40c(%eax),%edx
 861f4cd:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 861f4d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 861f4d7:	89 04 24             	mov    %eax,(%esp)
 861f4da:	e8 c7 1a b6 ff       	call   8180fa6 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE5beginEv>
 861f4df:	83 ec 04             	sub    $0x4,%esp
 861f4e2:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 861f4e8:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 861f4ee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861f4f2:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 861f4f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 861f4fc:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 861f502:	89 54 24 04          	mov    %edx,0x4(%esp)
 861f506:	89 04 24             	mov    %eax,(%esp)
 861f509:	e8 a9 94 00 00       	call   86289b7 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP12LevelUpSkillSt6vectorIS2_SaIS2_EEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 861f50e:	83 ec 04             	sub    $0x4,%esp
 861f511:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 861f517:	89 04 24             	mov    %eax,(%esp)
 861f51a:	e8 15 6b d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 861f51f:	89 c3                	mov    %eax,%ebx
 861f521:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f528:	08 
 861f529:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f52f:	89 04 24             	mov    %eax,(%esp)
 861f532:	e8 13 75 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f537:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f53b:	89 04 24             	mov    %eax,(%esp)
 861f53e:	e8 07 75 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f543:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f54a:	08 
 861f54b:	89 04 24             	mov    %eax,(%esp)
 861f54e:	e8 f7 74 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f553:	eb 1c                	jmp    861f571 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1cf3>
 861f555:	89 c1                	mov    %eax,%ecx
 861f557:	89 d0                	mov    %edx,%eax
 861f559:	89 c3                	mov    %eax,%ebx
 861f55b:	89 ce                	mov    %ecx,%esi
 861f55d:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 861f563:	89 04 24             	mov    %eax,(%esp)
 861f566:	e8 15 00 d6 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861f56b:	89 f1                	mov    %esi,%ecx
 861f56d:	89 d8                	mov    %ebx,%eax
 861f56f:	eb 14                	jmp    861f585 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d07>
 861f571:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 861f577:	89 04 24             	mov    %eax,(%esp)
 861f57a:	e8 01 00 d6 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861f57f:	eb 1f                	jmp    861f5a0 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d22>
 861f581:	89 c1                	mov    %eax,%ecx
 861f583:	89 d0                	mov    %edx,%eax
 861f585:	89 c3                	mov    %eax,%ebx
 861f587:	89 ce                	mov    %ecx,%esi
 861f589:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 861f58f:	89 04 24             	mov    %eax,(%esp)
 861f592:	e8 e9 ff d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861f597:	89 f1                	mov    %esi,%ecx
 861f599:	89 d8                	mov    %ebx,%eax
 861f59b:	e9 8e 13 00 00       	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 861f5a0:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 861f5a6:	89 04 24             	mov    %eax,(%esp)
 861f5a9:	e8 d2 ff d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861f5ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f5b1:	05 68 06 00 00       	add    $0x668,%eax
 861f5b6:	c7 44 24 04 28 2e ce 	movl   $0x8ce2e28,0x4(%esp)
 861f5bd:	08 
 861f5be:	89 04 24             	mov    %eax,(%esp)
 861f5c1:	e8 6a 74 0e 00       	call   8706a30 <_ZNKSs7compareEPKc>
 861f5c6:	85 c0                	test   %eax,%eax
 861f5c8:	75 37                	jne    861f601 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d83>
 861f5ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f5cd:	05 6c 06 00 00       	add    $0x66c,%eax
 861f5d2:	89 04 24             	mov    %eax,(%esp)
 861f5d5:	e8 e6 eb a6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 861f5da:	85 c0                	test   %eax,%eax
 861f5dc:	75 23                	jne    861f601 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d83>
 861f5de:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f5e1:	8b 80 a0 06 00 00    	mov    0x6a0(%eax),%eax
 861f5e7:	83 f8 ff             	cmp    $0xffffffff,%eax
 861f5ea:	75 15                	jne    861f601 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d83>
 861f5ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f5ef:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 861f5f5:	83 f8 ff             	cmp    $0xffffffff,%eax
 861f5f8:	75 07                	jne    861f601 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d83>
 861f5fa:	b8 71 2f ce 08       	mov    $0x8ce2f71,%eax
 861f5ff:	eb 05                	jmp    861f606 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x1d88>
 861f601:	b8 73 2f ce 08       	mov    $0x8ce2f73,%eax
 861f606:	89 c3                	mov    %eax,%ebx
 861f608:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f60f:	08 
 861f610:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f616:	89 04 24             	mov    %eax,(%esp)
 861f619:	e8 2c 74 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f61e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f622:	89 04 24             	mov    %eax,(%esp)
 861f625:	e8 20 74 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f62a:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f631:	08 
 861f632:	89 04 24             	mov    %eax,(%esp)
 861f635:	e8 10 74 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f63a:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f641:	08 
 861f642:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f648:	89 04 24             	mov    %eax,(%esp)
 861f64b:	e8 fa 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f650:	8d 95 a7 fe ff ff    	lea    -0x159(%ebp),%edx
 861f656:	89 54 24 04          	mov    %edx,0x4(%esp)
 861f65a:	89 04 24             	mov    %eax,(%esp)
 861f65d:	e8 e8 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f662:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f669:	08 
 861f66a:	89 04 24             	mov    %eax,(%esp)
 861f66d:	e8 d8 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f672:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861f675:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861f67b:	c1 e2 0a             	shl    $0xa,%edx
 861f67e:	01 d0                	add    %edx,%eax
 861f680:	89 c3                	mov    %eax,%ebx
 861f682:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861f686:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f689:	05 3c 04 00 00       	add    $0x43c,%eax
 861f68e:	89 04 24             	mov    %eax,(%esp)
 861f691:	e8 5a 6e 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861f696:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861f69a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861f69e:	8b 45 88             	mov    -0x78(%ebp),%eax
 861f6a1:	89 04 24             	mov    %eax,(%esp)
 861f6a4:	e8 9e d5 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861f6a9:	89 c3                	mov    %eax,%ebx
 861f6ab:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f6b2:	08 
 861f6b3:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f6b9:	89 04 24             	mov    %eax,(%esp)
 861f6bc:	e8 89 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f6c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f6c5:	89 04 24             	mov    %eax,(%esp)
 861f6c8:	e8 7d 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f6cd:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f6d4:	08 
 861f6d5:	89 04 24             	mov    %eax,(%esp)
 861f6d8:	e8 6d 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f6dd:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861f6e0:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861f6e6:	c1 e2 0a             	shl    $0xa,%edx
 861f6e9:	01 d0                	add    %edx,%eax
 861f6eb:	89 c3                	mov    %eax,%ebx
 861f6ed:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861f6f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f6f4:	05 b8 00 00 00       	add    $0xb8,%eax
 861f6f9:	89 04 24             	mov    %eax,(%esp)
 861f6fc:	e8 ef 6d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861f701:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861f705:	89 44 24 04          	mov    %eax,0x4(%esp)
 861f709:	8b 45 88             	mov    -0x78(%ebp),%eax
 861f70c:	89 04 24             	mov    %eax,(%esp)
 861f70f:	e8 33 d5 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861f714:	89 c3                	mov    %eax,%ebx
 861f716:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f71d:	08 
 861f71e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f724:	89 04 24             	mov    %eax,(%esp)
 861f727:	e8 1e 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f72c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f730:	89 04 24             	mov    %eax,(%esp)
 861f733:	e8 12 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f738:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f73f:	08 
 861f740:	89 04 24             	mov    %eax,(%esp)
 861f743:	e8 02 73 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f748:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f74b:	8b 98 40 04 00 00    	mov    0x440(%eax),%ebx
 861f751:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f758:	08 
 861f759:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f75f:	89 04 24             	mov    %eax,(%esp)
 861f762:	e8 e3 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f767:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f76b:	89 04 24             	mov    %eax,(%esp)
 861f76e:	e8 fd 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f773:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f776:	8b 58 24             	mov    0x24(%eax),%ebx
 861f779:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f780:	08 
 861f781:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f787:	89 04 24             	mov    %eax,(%esp)
 861f78a:	e8 bb 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f78f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f793:	89 04 24             	mov    %eax,(%esp)
 861f796:	e8 d5 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f79b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f79e:	8b 98 84 01 00 00    	mov    0x184(%eax),%ebx
 861f7a4:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f7ab:	08 
 861f7ac:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f7b2:	89 04 24             	mov    %eax,(%esp)
 861f7b5:	e8 90 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f7ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f7be:	89 04 24             	mov    %eax,(%esp)
 861f7c1:	e8 aa 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f7c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f7c9:	8b 58 2c             	mov    0x2c(%eax),%ebx
 861f7cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f7cf:	8b 70 28             	mov    0x28(%eax),%esi
 861f7d2:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861f7d9:	08 
 861f7da:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f7e0:	89 04 24             	mov    %eax,(%esp)
 861f7e3:	e8 62 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f7e8:	89 74 24 04          	mov    %esi,0x4(%esp)
 861f7ec:	89 04 24             	mov    %eax,(%esp)
 861f7ef:	e8 7c 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f7f4:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 861f7fb:	08 
 861f7fc:	89 04 24             	mov    %eax,(%esp)
 861f7ff:	e8 46 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f804:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f808:	89 04 24             	mov    %eax,(%esp)
 861f80b:	e8 60 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f810:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861f817:	08 
 861f818:	89 04 24             	mov    %eax,(%esp)
 861f81b:	e8 2a 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f820:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f823:	8b 98 34 02 00 00    	mov    0x234(%eax),%ebx
 861f829:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f830:	08 
 861f831:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f837:	89 04 24             	mov    %eax,(%esp)
 861f83a:	e8 0b 72 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f83f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f843:	89 04 24             	mov    %eax,(%esp)
 861f846:	e8 25 72 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f84b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f84e:	8b 98 38 02 00 00    	mov    0x238(%eax),%ebx
 861f854:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f85b:	08 
 861f85c:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f862:	89 04 24             	mov    %eax,(%esp)
 861f865:	e8 e0 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f86a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f86e:	89 04 24             	mov    %eax,(%esp)
 861f871:	e8 fa 71 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f876:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f879:	8b 98 3c 02 00 00    	mov    0x23c(%eax),%ebx
 861f87f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f886:	08 
 861f887:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f88d:	89 04 24             	mov    %eax,(%esp)
 861f890:	e8 b5 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f895:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f899:	89 04 24             	mov    %eax,(%esp)
 861f89c:	e8 1b 72 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861f8a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f8a4:	8b 98 40 02 00 00    	mov    0x240(%eax),%ebx
 861f8aa:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f8b1:	08 
 861f8b2:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f8b8:	89 04 24             	mov    %eax,(%esp)
 861f8bb:	e8 8a 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f8c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f8c4:	89 04 24             	mov    %eax,(%esp)
 861f8c7:	e8 a4 71 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f8cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f8cf:	8b 98 44 02 00 00    	mov    0x244(%eax),%ebx
 861f8d5:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f8dc:	08 
 861f8dd:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f8e3:	89 04 24             	mov    %eax,(%esp)
 861f8e6:	e8 5f 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f8eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f8ef:	89 04 24             	mov    %eax,(%esp)
 861f8f2:	e8 79 71 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f8f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f8fa:	8b 98 48 02 00 00    	mov    0x248(%eax),%ebx
 861f900:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f907:	08 
 861f908:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f90e:	89 04 24             	mov    %eax,(%esp)
 861f911:	e8 34 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f916:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f91a:	89 04 24             	mov    %eax,(%esp)
 861f91d:	e8 9a 71 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861f922:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f925:	8b 98 48 04 00 00    	mov    0x448(%eax),%ebx
 861f92b:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f932:	08 
 861f933:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f939:	89 04 24             	mov    %eax,(%esp)
 861f93c:	e8 09 71 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f941:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f945:	89 04 24             	mov    %eax,(%esp)
 861f948:	e8 23 71 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f94d:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f950:	8b 98 4c 04 00 00    	mov    0x44c(%eax),%ebx
 861f956:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f95d:	08 
 861f95e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f964:	89 04 24             	mov    %eax,(%esp)
 861f967:	e8 de 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f96c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f970:	89 04 24             	mov    %eax,(%esp)
 861f973:	e8 f8 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f978:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f97b:	8b 98 50 04 00 00    	mov    0x450(%eax),%ebx
 861f981:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f988:	08 
 861f989:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f98f:	89 04 24             	mov    %eax,(%esp)
 861f992:	e8 b3 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f997:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f99b:	89 04 24             	mov    %eax,(%esp)
 861f99e:	e8 cd 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f9a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f9a6:	8b 98 54 04 00 00    	mov    0x454(%eax),%ebx
 861f9ac:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f9b3:	08 
 861f9b4:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f9ba:	89 04 24             	mov    %eax,(%esp)
 861f9bd:	e8 88 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f9c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f9c6:	89 04 24             	mov    %eax,(%esp)
 861f9c9:	e8 a2 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f9ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f9d1:	8b 98 58 04 00 00    	mov    0x458(%eax),%ebx
 861f9d7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861f9de:	08 
 861f9df:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861f9e5:	89 04 24             	mov    %eax,(%esp)
 861f9e8:	e8 5d 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861f9ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861f9f1:	89 04 24             	mov    %eax,(%esp)
 861f9f4:	e8 77 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861f9f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 861f9fc:	8b 98 ac 02 00 00    	mov    0x2ac(%eax),%ebx
 861fa02:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861fa09:	08 
 861fa0a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fa10:	89 04 24             	mov    %eax,(%esp)
 861fa13:	e8 32 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fa18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fa1c:	89 04 24             	mov    %eax,(%esp)
 861fa1f:	e8 4c 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861fa24:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fa27:	8b 98 c4 02 00 00    	mov    0x2c4(%eax),%ebx
 861fa2d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861fa34:	08 
 861fa35:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fa3b:	89 04 24             	mov    %eax,(%esp)
 861fa3e:	e8 07 70 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fa43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fa47:	89 04 24             	mov    %eax,(%esp)
 861fa4a:	e8 21 70 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861fa4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fa52:	8b 98 c8 02 00 00    	mov    0x2c8(%eax),%ebx
 861fa58:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861fa5f:	08 
 861fa60:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fa66:	89 04 24             	mov    %eax,(%esp)
 861fa69:	e8 dc 6f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fa6e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fa72:	89 04 24             	mov    %eax,(%esp)
 861fa75:	e8 f6 6f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861fa7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fa7d:	8b 98 44 04 00 00    	mov    0x444(%eax),%ebx
 861fa83:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861fa8a:	08 
 861fa8b:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fa91:	89 04 24             	mov    %eax,(%esp)
 861fa94:	e8 b1 6f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fa99:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fa9d:	89 04 24             	mov    %eax,(%esp)
 861faa0:	e8 cb 6f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861faa5:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 861faab:	89 04 24             	mov    %eax,(%esp)
 861faae:	e8 a5 64 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 861fab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fab6:	8d 90 48 03 00 00    	lea    0x348(%eax),%edx
 861fabc:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 861fac2:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fac6:	89 04 24             	mov    %eax,(%esp)
 861fac9:	e8 e6 68 d7 ff       	call   83963b4 <_ZNSt6vectorI12ItemAuraInfoSaIS0_EE3endEv>
 861face:	83 ec 04             	sub    $0x4,%esp
 861fad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fad4:	8d 90 48 03 00 00    	lea    0x348(%eax),%edx
 861fada:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 861fae0:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fae4:	89 04 24             	mov    %eax,(%esp)
 861fae7:	e8 48 68 d7 ff       	call   8396334 <_ZNSt6vectorI12ItemAuraInfoSaIS0_EE5beginEv>
 861faec:	83 ec 04             	sub    $0x4,%esp
 861faef:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 861faf5:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 861fafb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861faff:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 861fb05:	89 54 24 08          	mov    %edx,0x8(%esp)
 861fb09:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 861fb0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fb13:	89 04 24             	mov    %eax,(%esp)
 861fb16:	e8 10 8f 00 00       	call   8628a2b <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP12ItemAuraInfoSt6vectorIS2_SaIS2_EEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 861fb1b:	83 ec 04             	sub    $0x4,%esp
 861fb1e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 861fb24:	89 04 24             	mov    %eax,(%esp)
 861fb27:	e8 08 65 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 861fb2c:	89 c3                	mov    %eax,%ebx
 861fb2e:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fb35:	08 
 861fb36:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fb3c:	89 04 24             	mov    %eax,(%esp)
 861fb3f:	e8 06 6f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fb44:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fb48:	89 04 24             	mov    %eax,(%esp)
 861fb4b:	e8 fa 6e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fb50:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fb57:	08 
 861fb58:	89 04 24             	mov    %eax,(%esp)
 861fb5b:	e8 ea 6e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fb60:	eb 1c                	jmp    861fb7e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2300>
 861fb62:	89 c1                	mov    %eax,%ecx
 861fb64:	89 d0                	mov    %edx,%eax
 861fb66:	89 c3                	mov    %eax,%ebx
 861fb68:	89 ce                	mov    %ecx,%esi
 861fb6a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 861fb70:	89 04 24             	mov    %eax,(%esp)
 861fb73:	e8 08 fa d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fb78:	89 f1                	mov    %esi,%ecx
 861fb7a:	89 d8                	mov    %ebx,%eax
 861fb7c:	eb 14                	jmp    861fb92 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2314>
 861fb7e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 861fb84:	89 04 24             	mov    %eax,(%esp)
 861fb87:	e8 f4 f9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fb8c:	eb 1f                	jmp    861fbad <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x232f>
 861fb8e:	89 c1                	mov    %eax,%ecx
 861fb90:	89 d0                	mov    %edx,%eax
 861fb92:	89 c3                	mov    %eax,%ebx
 861fb94:	89 ce                	mov    %ecx,%esi
 861fb96:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 861fb9c:	89 04 24             	mov    %eax,(%esp)
 861fb9f:	e8 dc f9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fba4:	89 f1                	mov    %esi,%ecx
 861fba6:	89 d8                	mov    %ebx,%eax
 861fba8:	e9 81 0d 00 00       	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 861fbad:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 861fbb3:	89 04 24             	mov    %eax,(%esp)
 861fbb6:	e8 c5 f9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fbbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fbbe:	8b 98 fc 02 00 00    	mov    0x2fc(%eax),%ebx
 861fbc4:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861fbcb:	08 
 861fbcc:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fbd2:	89 04 24             	mov    %eax,(%esp)
 861fbd5:	e8 70 6e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fbda:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fbde:	89 04 24             	mov    %eax,(%esp)
 861fbe1:	e8 d6 6e 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 861fbe6:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861fbe9:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861fbef:	c1 e2 0a             	shl    $0xa,%edx
 861fbf2:	01 d0                	add    %edx,%eax
 861fbf4:	89 c3                	mov    %eax,%ebx
 861fbf6:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861fbfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fbfd:	05 68 06 00 00       	add    $0x668,%eax
 861fc02:	89 04 24             	mov    %eax,(%esp)
 861fc05:	e8 e6 68 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861fc0a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861fc0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 861fc12:	8b 45 88             	mov    -0x78(%ebp),%eax
 861fc15:	89 04 24             	mov    %eax,(%esp)
 861fc18:	e8 2a d0 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861fc1d:	89 c3                	mov    %eax,%ebx
 861fc1f:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fc26:	08 
 861fc27:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fc2d:	89 04 24             	mov    %eax,(%esp)
 861fc30:	e8 15 6e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fc35:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fc39:	89 04 24             	mov    %eax,(%esp)
 861fc3c:	e8 09 6e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fc41:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fc48:	08 
 861fc49:	89 04 24             	mov    %eax,(%esp)
 861fc4c:	e8 f9 6d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fc51:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 861fc57:	89 04 24             	mov    %eax,(%esp)
 861fc5a:	e8 f9 62 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 861fc5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fc62:	8d 90 6c 06 00 00    	lea    0x66c(%eax),%edx
 861fc68:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 861fc6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fc72:	89 04 24             	mov    %eax,(%esp)
 861fc75:	e8 f2 e5 a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 861fc7a:	83 ec 04             	sub    $0x4,%esp
 861fc7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fc80:	8d 90 6c 06 00 00    	lea    0x66c(%eax),%edx
 861fc86:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 861fc8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fc90:	89 04 24             	mov    %eax,(%esp)
 861fc93:	e8 b0 e5 a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 861fc98:	83 ec 04             	sub    $0x4,%esp
 861fc9b:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 861fca1:	8d 95 40 ff ff ff    	lea    -0xc0(%ebp),%edx
 861fca7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861fcab:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 861fcb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 861fcb5:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 861fcbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 861fcbf:	89 04 24             	mov    %eax,(%esp)
 861fcc2:	e8 d8 54 d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 861fcc7:	83 ec 04             	sub    $0x4,%esp
 861fcca:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 861fcd0:	89 04 24             	mov    %eax,(%esp)
 861fcd3:	e8 5c 63 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 861fcd8:	89 c3                	mov    %eax,%ebx
 861fcda:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fce1:	08 
 861fce2:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fce8:	89 04 24             	mov    %eax,(%esp)
 861fceb:	e8 5a 6d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fcf0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fcf4:	89 04 24             	mov    %eax,(%esp)
 861fcf7:	e8 4e 6d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fcfc:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fd03:	08 
 861fd04:	89 04 24             	mov    %eax,(%esp)
 861fd07:	e8 3e 6d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fd0c:	eb 1c                	jmp    861fd2a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x24ac>
 861fd0e:	89 c1                	mov    %eax,%ecx
 861fd10:	89 d0                	mov    %edx,%eax
 861fd12:	89 c3                	mov    %eax,%ebx
 861fd14:	89 ce                	mov    %ecx,%esi
 861fd16:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 861fd1c:	89 04 24             	mov    %eax,(%esp)
 861fd1f:	e8 5c f8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fd24:	89 f1                	mov    %esi,%ecx
 861fd26:	89 d8                	mov    %ebx,%eax
 861fd28:	eb 14                	jmp    861fd3e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x24c0>
 861fd2a:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 861fd30:	89 04 24             	mov    %eax,(%esp)
 861fd33:	e8 48 f8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fd38:	eb 1f                	jmp    861fd59 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x24db>
 861fd3a:	89 c1                	mov    %eax,%ecx
 861fd3c:	89 d0                	mov    %edx,%eax
 861fd3e:	89 c3                	mov    %eax,%ebx
 861fd40:	89 ce                	mov    %ecx,%esi
 861fd42:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 861fd48:	89 04 24             	mov    %eax,(%esp)
 861fd4b:	e8 30 f8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fd50:	89 f1                	mov    %esi,%ecx
 861fd52:	89 d8                	mov    %ebx,%eax
 861fd54:	e9 d5 0b 00 00       	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 861fd59:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 861fd5f:	89 04 24             	mov    %eax,(%esp)
 861fd62:	e8 19 f8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 861fd67:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861fd6a:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861fd70:	c1 e2 0a             	shl    $0xa,%edx
 861fd73:	01 d0                	add    %edx,%eax
 861fd75:	89 c3                	mov    %eax,%ebx
 861fd77:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861fd7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fd7e:	05 b0 06 00 00       	add    $0x6b0,%eax
 861fd83:	89 04 24             	mov    %eax,(%esp)
 861fd86:	e8 65 67 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861fd8b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861fd8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861fd93:	8b 45 88             	mov    -0x78(%ebp),%eax
 861fd96:	89 04 24             	mov    %eax,(%esp)
 861fd99:	e8 a9 ce ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861fd9e:	89 c3                	mov    %eax,%ebx
 861fda0:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fda7:	08 
 861fda8:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fdae:	89 04 24             	mov    %eax,(%esp)
 861fdb1:	e8 94 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fdb6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fdba:	89 04 24             	mov    %eax,(%esp)
 861fdbd:	e8 88 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fdc2:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fdc9:	08 
 861fdca:	89 04 24             	mov    %eax,(%esp)
 861fdcd:	e8 78 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fdd2:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861fdd5:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861fddb:	c1 e2 0a             	shl    $0xa,%edx
 861fdde:	01 d0                	add    %edx,%eax
 861fde0:	89 c3                	mov    %eax,%ebx
 861fde2:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861fde6:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fde9:	05 b4 06 00 00       	add    $0x6b4,%eax
 861fdee:	89 04 24             	mov    %eax,(%esp)
 861fdf1:	e8 fa 66 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861fdf6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861fdfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 861fdfe:	8b 45 88             	mov    -0x78(%ebp),%eax
 861fe01:	89 04 24             	mov    %eax,(%esp)
 861fe04:	e8 3e ce ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861fe09:	89 c3                	mov    %eax,%ebx
 861fe0b:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fe12:	08 
 861fe13:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fe19:	89 04 24             	mov    %eax,(%esp)
 861fe1c:	e8 29 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fe21:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fe25:	89 04 24             	mov    %eax,(%esp)
 861fe28:	e8 1d 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fe2d:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fe34:	08 
 861fe35:	89 04 24             	mov    %eax,(%esp)
 861fe38:	e8 0d 6c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fe3d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861fe40:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861fe46:	c1 e2 0a             	shl    $0xa,%edx
 861fe49:	01 d0                	add    %edx,%eax
 861fe4b:	89 c3                	mov    %eax,%ebx
 861fe4d:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861fe51:	8b 45 0c             	mov    0xc(%ebp),%eax
 861fe54:	05 38 04 00 00       	add    $0x438,%eax
 861fe59:	89 04 24             	mov    %eax,(%esp)
 861fe5c:	e8 8f 66 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861fe61:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861fe65:	89 44 24 04          	mov    %eax,0x4(%esp)
 861fe69:	8b 45 88             	mov    -0x78(%ebp),%eax
 861fe6c:	89 04 24             	mov    %eax,(%esp)
 861fe6f:	e8 d3 cd ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861fe74:	89 c3                	mov    %eax,%ebx
 861fe76:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fe7d:	08 
 861fe7e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861fe84:	89 04 24             	mov    %eax,(%esp)
 861fe87:	e8 be 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fe8c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fe90:	89 04 24             	mov    %eax,(%esp)
 861fe93:	e8 b2 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fe98:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861fe9f:	08 
 861fea0:	89 04 24             	mov    %eax,(%esp)
 861fea3:	e8 a2 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fea8:	8b 55 9c             	mov    -0x64(%ebp),%edx
 861feab:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 861feb1:	c1 e2 0a             	shl    $0xa,%edx
 861feb4:	01 d0                	add    %edx,%eax
 861feb6:	89 c3                	mov    %eax,%ebx
 861feb8:	83 45 9c 01          	addl   $0x1,-0x64(%ebp)
 861febc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861febf:	05 3c 04 00 00       	add    $0x43c,%eax
 861fec4:	89 04 24             	mov    %eax,(%esp)
 861fec7:	e8 24 66 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 861fecc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861fed0:	89 44 24 04          	mov    %eax,0x4(%esp)
 861fed4:	8b 45 88             	mov    -0x78(%ebp),%eax
 861fed7:	89 04 24             	mov    %eax,(%esp)
 861feda:	e8 68 cd ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 861fedf:	89 c3                	mov    %eax,%ebx
 861fee1:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861fee8:	08 
 861fee9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861feef:	89 04 24             	mov    %eax,(%esp)
 861fef2:	e8 53 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861fef7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861fefb:	89 04 24             	mov    %eax,(%esp)
 861fefe:	e8 47 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff03:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861ff0a:	08 
 861ff0b:	89 04 24             	mov    %eax,(%esp)
 861ff0e:	e8 37 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff13:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ff16:	8b 98 98 07 00 00    	mov    0x798(%eax),%ebx
 861ff1c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 861ff23:	08 
 861ff24:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ff2a:	89 04 24             	mov    %eax,(%esp)
 861ff2d:	e8 18 6b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 861ff36:	89 04 24             	mov    %eax,(%esp)
 861ff39:	e8 32 6b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 861ff3e:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 861ff45:	08 
 861ff46:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 861ff4c:	89 04 24             	mov    %eax,(%esp)
 861ff4f:	e8 f6 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff54:	8d 95 08 fe ff ff    	lea    -0x1f8(%ebp),%edx
 861ff5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ff5e:	89 04 24             	mov    %eax,(%esp)
 861ff61:	e8 e4 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff66:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 861ff6d:	08 
 861ff6e:	89 04 24             	mov    %eax,(%esp)
 861ff71:	e8 d4 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 861ff76:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 861ff7c:	89 04 24             	mov    %eax,(%esp)
 861ff7f:	e8 d4 5f d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 861ff84:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ff87:	8d 90 78 03 00 00    	lea    0x378(%eax),%edx
 861ff8d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 861ff93:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ff97:	89 04 24             	mov    %eax,(%esp)
 861ff9a:	e8 7d 66 d7 ff       	call   839661c <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EE3endEv>
 861ff9f:	83 ec 04             	sub    $0x4,%esp
 861ffa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 861ffa5:	8d 90 78 03 00 00    	lea    0x378(%eax),%edx
 861ffab:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 861ffb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ffb5:	89 04 24             	mov    %eax,(%esp)
 861ffb8:	e8 df 65 d7 ff       	call   839659c <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EE5beginEv>
 861ffbd:	83 ec 04             	sub    $0x4,%esp
 861ffc0:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 861ffc6:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 861ffcc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 861ffd0:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 861ffd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 861ffda:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 861ffe0:	89 54 24 04          	mov    %edx,0x4(%esp)
 861ffe4:	89 04 24             	mov    %eax,(%esp)
 861ffe7:	e8 ba 8a 00 00       	call   8628aa6 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP20EquipmentSkillDataUpSt6vectorIS2_SaIS2_EEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 861ffec:	83 ec 04             	sub    $0x4,%esp
 861ffef:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 861fff5:	89 04 24             	mov    %eax,(%esp)
 861fff8:	e8 37 60 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 861fffd:	89 c3                	mov    %eax,%ebx
 861ffff:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620006:	08 
 8620007:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862000d:	89 04 24             	mov    %eax,(%esp)
 8620010:	e8 35 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620015:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620019:	89 04 24             	mov    %eax,(%esp)
 862001c:	e8 29 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620021:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620028:	08 
 8620029:	89 04 24             	mov    %eax,(%esp)
 862002c:	e8 19 6a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620031:	eb 1c                	jmp    862004f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x27d1>
 8620033:	89 c1                	mov    %eax,%ecx
 8620035:	89 d0                	mov    %edx,%eax
 8620037:	89 c3                	mov    %eax,%ebx
 8620039:	89 ce                	mov    %ecx,%esi
 862003b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8620041:	89 04 24             	mov    %eax,(%esp)
 8620044:	e8 37 f5 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8620049:	89 f1                	mov    %esi,%ecx
 862004b:	89 d8                	mov    %ebx,%eax
 862004d:	eb 14                	jmp    8620063 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x27e5>
 862004f:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8620055:	89 04 24             	mov    %eax,(%esp)
 8620058:	e8 23 f5 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862005d:	eb 1f                	jmp    862007e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2800>
 862005f:	89 c1                	mov    %eax,%ecx
 8620061:	89 d0                	mov    %edx,%eax
 8620063:	89 c3                	mov    %eax,%ebx
 8620065:	89 ce                	mov    %ecx,%esi
 8620067:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 862006d:	89 04 24             	mov    %eax,(%esp)
 8620070:	e8 0b f5 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8620075:	89 f1                	mov    %esi,%ecx
 8620077:	89 d8                	mov    %ebx,%eax
 8620079:	e9 b0 08 00 00       	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 862007e:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8620084:	89 04 24             	mov    %eax,(%esp)
 8620087:	e8 f4 f4 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862008c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620093:	08 
 8620094:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862009a:	89 04 24             	mov    %eax,(%esp)
 862009d:	e8 a8 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86200a2:	8b 55 90             	mov    -0x70(%ebp),%edx
 86200a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86200a9:	89 04 24             	mov    %eax,(%esp)
 86200ac:	e8 bf 69 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86200b1:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86200b8:	08 
 86200b9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86200bf:	89 04 24             	mov    %eax,(%esp)
 86200c2:	e8 83 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86200c7:	8b 55 18             	mov    0x18(%ebp),%edx
 86200ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 86200ce:	89 04 24             	mov    %eax,(%esp)
 86200d1:	e8 9a 69 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86200d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86200d9:	8b 98 a0 06 00 00    	mov    0x6a0(%eax),%ebx
 86200df:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86200e6:	08 
 86200e7:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86200ed:	89 04 24             	mov    %eax,(%esp)
 86200f0:	e8 55 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86200f5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86200f9:	89 04 24             	mov    %eax,(%esp)
 86200fc:	e8 6f 69 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620101:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620108:	08 
 8620109:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862010f:	89 04 24             	mov    %eax,(%esp)
 8620112:	e8 33 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620117:	8d 95 08 fd ff ff    	lea    -0x2f8(%ebp),%edx
 862011d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620121:	89 04 24             	mov    %eax,(%esp)
 8620124:	e8 21 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620129:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620130:	08 
 8620131:	89 04 24             	mov    %eax,(%esp)
 8620134:	e8 11 69 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620139:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620140:	08 
 8620141:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 8620147:	89 04 24             	mov    %eax,(%esp)
 862014a:	e8 fb 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862014f:	8d 95 08 fc ff ff    	lea    -0x3f8(%ebp),%edx
 8620155:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620159:	89 04 24             	mov    %eax,(%esp)
 862015c:	e8 e9 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620161:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620168:	08 
 8620169:	89 04 24             	mov    %eax,(%esp)
 862016c:	e8 d9 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620171:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620178:	08 
 8620179:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862017f:	89 04 24             	mov    %eax,(%esp)
 8620182:	e8 c3 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620187:	8d 95 08 fb ff ff    	lea    -0x4f8(%ebp),%edx
 862018d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620191:	89 04 24             	mov    %eax,(%esp)
 8620194:	e8 b1 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620199:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86201a0:	08 
 86201a1:	89 04 24             	mov    %eax,(%esp)
 86201a4:	e8 a1 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86201a9:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86201b0:	08 
 86201b1:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86201b7:	89 04 24             	mov    %eax,(%esp)
 86201ba:	e8 8b 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86201bf:	8d 95 08 fa ff ff    	lea    -0x5f8(%ebp),%edx
 86201c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86201c9:	89 04 24             	mov    %eax,(%esp)
 86201cc:	e8 79 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86201d1:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86201d8:	08 
 86201d9:	89 04 24             	mov    %eax,(%esp)
 86201dc:	e8 69 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86201e1:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86201e8:	08 
 86201e9:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86201ef:	89 04 24             	mov    %eax,(%esp)
 86201f2:	e8 53 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86201f7:	8d 95 a2 fe ff ff    	lea    -0x15e(%ebp),%edx
 86201fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620201:	89 04 24             	mov    %eax,(%esp)
 8620204:	e8 41 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620209:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620210:	08 
 8620211:	89 04 24             	mov    %eax,(%esp)
 8620214:	e8 31 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620219:	8b 45 0c             	mov    0xc(%ebp),%eax
 862021c:	8b 98 34 04 00 00    	mov    0x434(%eax),%ebx
 8620222:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620229:	08 
 862022a:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 8620230:	89 04 24             	mov    %eax,(%esp)
 8620233:	e8 12 68 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620238:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862023c:	89 04 24             	mov    %eax,(%esp)
 862023f:	e8 78 68 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 8620244:	8d 85 74 c1 ff ff    	lea    -0x3e8c(%ebp),%eax
 862024a:	8d b8 00 0c 00 00    	lea    0xc00(%eax),%edi
 8620250:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620253:	8b 70 70             	mov    0x70(%eax),%esi
 8620256:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620259:	83 c0 6c             	add    $0x6c,%eax
 862025c:	89 04 24             	mov    %eax,(%esp)
 862025f:	e8 0c 64 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 8620264:	89 c3                	mov    %eax,%ebx
 8620266:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620269:	83 c0 6c             	add    $0x6c,%eax
 862026c:	89 04 24             	mov    %eax,(%esp)
 862026f:	e8 7c 62 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620274:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8620278:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862027c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620280:	8b 45 08             	mov    0x8(%ebp),%eax
 8620283:	89 04 24             	mov    %eax,(%esp)
 8620286:	e8 7b d4 ff ff       	call   861d706 <_ZN11sync_script11CSyncScript6GetURLEPKcii>
 862028b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 862028f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620293:	8b 45 88             	mov    -0x78(%ebp),%eax
 8620296:	89 04 24             	mov    %eax,(%esp)
 8620299:	e8 a9 c9 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 862029e:	89 c3                	mov    %eax,%ebx
 86202a0:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86202a7:	08 
 86202a8:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86202ae:	89 04 24             	mov    %eax,(%esp)
 86202b1:	e8 94 67 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86202b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86202ba:	89 04 24             	mov    %eax,(%esp)
 86202bd:	e8 88 67 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86202c2:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86202c9:	08 
 86202ca:	89 04 24             	mov    %eax,(%esp)
 86202cd:	e8 78 67 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86202d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86202d5:	8b 98 c4 00 00 00    	mov    0xc4(%eax),%ebx
 86202db:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86202e2:	08 
 86202e3:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 86202e9:	89 04 24             	mov    %eax,(%esp)
 86202ec:	e8 59 67 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86202f1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86202f5:	89 04 24             	mov    %eax,(%esp)
 86202f8:	e8 73 67 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86202fd:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8620303:	89 04 24             	mov    %eax,(%esp)
 8620306:	e8 4d 5c d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 862030b:	8b 45 0c             	mov    0xc(%ebp),%eax
 862030e:	8d 90 98 01 00 00    	lea    0x198(%eax),%edx
 8620314:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 862031a:	89 54 24 04          	mov    %edx,0x4(%esp)
 862031e:	89 04 24             	mov    %eax,(%esp)
 8620321:	e8 46 df a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8620326:	83 ec 04             	sub    $0x4,%esp
 8620329:	8b 45 0c             	mov    0xc(%ebp),%eax
 862032c:	8d 90 98 01 00 00    	lea    0x198(%eax),%edx
 8620332:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8620338:	89 54 24 04          	mov    %edx,0x4(%esp)
 862033c:	89 04 24             	mov    %eax,(%esp)
 862033f:	e8 04 df a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8620344:	83 ec 04             	sub    $0x4,%esp
 8620347:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 862034d:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 8620353:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8620357:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 862035d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8620361:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8620367:	89 54 24 04          	mov    %edx,0x4(%esp)
 862036b:	89 04 24             	mov    %eax,(%esp)
 862036e:	e8 2c 4e d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 8620373:	83 ec 04             	sub    $0x4,%esp
 8620376:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 862037c:	89 04 24             	mov    %eax,(%esp)
 862037f:	e8 b0 5c d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8620384:	89 c3                	mov    %eax,%ebx
 8620386:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862038d:	08 
 862038e:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 8620394:	89 04 24             	mov    %eax,(%esp)
 8620397:	e8 ae 66 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862039c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86203a0:	89 04 24             	mov    %eax,(%esp)
 86203a3:	e8 a2 66 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86203a8:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86203af:	08 
 86203b0:	89 04 24             	mov    %eax,(%esp)
 86203b3:	e8 92 66 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86203b8:	eb 1c                	jmp    86203d6 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2b58>
 86203ba:	89 c1                	mov    %eax,%ecx
 86203bc:	89 d0                	mov    %edx,%eax
 86203be:	89 c3                	mov    %eax,%ebx
 86203c0:	89 ce                	mov    %ecx,%esi
 86203c2:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 86203c8:	89 04 24             	mov    %eax,(%esp)
 86203cb:	e8 b0 f1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86203d0:	89 f1                	mov    %esi,%ecx
 86203d2:	89 d8                	mov    %ebx,%eax
 86203d4:	eb 14                	jmp    86203ea <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2b6c>
 86203d6:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 86203dc:	89 04 24             	mov    %eax,(%esp)
 86203df:	e8 9c f1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86203e4:	eb 1f                	jmp    8620405 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2b87>
 86203e6:	89 c1                	mov    %eax,%ecx
 86203e8:	89 d0                	mov    %edx,%eax
 86203ea:	89 c3                	mov    %eax,%ebx
 86203ec:	89 ce                	mov    %ecx,%esi
 86203ee:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 86203f4:	89 04 24             	mov    %eax,(%esp)
 86203f7:	e8 84 f1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86203fc:	89 f1                	mov    %esi,%ecx
 86203fe:	89 d8                	mov    %ebx,%eax
 8620400:	e9 29 05 00 00       	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 8620405:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 862040b:	89 04 24             	mov    %eax,(%esp)
 862040e:	e8 6d f1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8620413:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620416:	8b 98 c8 01 00 00    	mov    0x1c8(%eax),%ebx
 862041c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620423:	08 
 8620424:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862042a:	89 04 24             	mov    %eax,(%esp)
 862042d:	e8 18 66 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620432:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620436:	89 04 24             	mov    %eax,(%esp)
 8620439:	e8 7e 66 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 862043e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620441:	8b 98 d0 01 00 00    	mov    0x1d0(%eax),%ebx
 8620447:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862044e:	08 
 862044f:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 8620455:	89 04 24             	mov    %eax,(%esp)
 8620458:	e8 ed 65 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862045d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620461:	89 04 24             	mov    %eax,(%esp)
 8620464:	e8 53 66 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 8620469:	8d 85 74 21 ff ff    	lea    -0xde8c(%ebp),%eax
 862046f:	89 04 24             	mov    %eax,(%esp)
 8620472:	e8 6b 65 00 00       	call   86269e2 <_ZN13CStreamBuffer5c_strEv>
 8620477:	89 44 24 08          	mov    %eax,0x8(%esp)
 862047b:	c7 44 24 04 78 2f ce 	movl   $0x8ce2f78,0x4(%esp)
 8620482:	08 
 8620483:	8b 45 88             	mov    -0x78(%ebp),%eax
 8620486:	89 04 24             	mov    %eax,(%esp)
 8620489:	e8 32 3d dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862048e:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8620494:	89 04 24             	mov    %eax,(%esp)
 8620497:	e8 f8 77 00 00       	call   8627c94 <_ZN19CFieldLengthCheckerC1Ev>
 862049c:	8b 45 88             	mov    -0x78(%ebp),%eax
 862049f:	89 04 24             	mov    %eax,(%esp)
 86204a2:	e8 b7 d1 e2 ff       	call   844d65e <_ZN5MySQL14GetQueryStringEv>
 86204a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86204ab:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 86204b1:	89 04 24             	mov    %eax,(%esp)
 86204b4:	e8 2f 6e 00 00       	call   86272e8 <_ZN19CFieldLengthChecker8AddFieldEPKc>
 86204b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86204c0:	00 
 86204c1:	8b 45 88             	mov    -0x78(%ebp),%eax
 86204c4:	89 04 24             	mov    %eax,(%esp)
 86204c7:	e8 5a 3e dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86204cc:	83 f0 01             	xor    $0x1,%eax
 86204cf:	84 c0                	test   %al,%al
 86204d1:	74 0a                	je     86204dd <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2c5f>
 86204d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 86204d8:	e9 3d 04 00 00       	jmp    862091a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x309c>
 86204dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86204e0:	05 24 04 00 00       	add    $0x424,%eax
 86204e5:	89 04 24             	mov    %eax,(%esp)
 86204e8:	e8 49 86 00 00       	call   8628b36 <_ZNKSt6vectorI24STAvatarAbilityVariationSaIS0_EE5emptyEv>
 86204ed:	83 f0 01             	xor    $0x1,%eax
 86204f0:	84 c0                	test   %al,%al
 86204f2:	0f 84 3b 01 00 00    	je     8620633 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2db5>
 86204f8:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86204ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620502:	8d 90 24 04 00 00    	lea    0x424(%eax),%edx
 8620508:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 862050e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620512:	89 04 24             	mov    %eax,(%esp)
 8620515:	e8 ae 6a d7 ff       	call   8396fc8 <_ZNSt6vectorI24STAvatarAbilityVariationSaIS0_EE5beginEv>
 862051a:	83 ec 04             	sub    $0x4,%esp
 862051d:	e9 d3 00 00 00       	jmp    86205f5 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2d77>
 8620522:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 8620528:	89 04 24             	mov    %eax,(%esp)
 862052b:	e8 8c 86 00 00       	call   8628bbc <_ZNK9__gnu_cxx17__normal_iteratorIP24STAvatarAbilityVariationSt6vectorIS1_SaIS1_EEEdeEv>
 8620530:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8620533:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620536:	8b 40 14             	mov    0x14(%eax),%eax
 8620539:	89 85 5c 21 ff ff    	mov    %eax,-0xdea4(%ebp)
 862053f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620542:	8b 78 10             	mov    0x10(%eax),%edi
 8620545:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620548:	8b 40 0c             	mov    0xc(%eax),%eax
 862054b:	83 f8 0b             	cmp    $0xb,%eax
 862054e:	74 0a                	je     862055a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2cdc>
 8620550:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620553:	8b 40 0c             	mov    0xc(%eax),%eax
 8620556:	89 c2                	mov    %eax,%edx
 8620558:	eb 05                	jmp    862055f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2ce1>
 862055a:	ba 63 00 00 00       	mov    $0x63,%edx
 862055f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620562:	d9 40 08             	flds   0x8(%eax)
 8620565:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620568:	8b 70 04             	mov    0x4(%eax),%esi
 862056b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862056e:	8b 00                	mov    (%eax),%eax
 8620570:	89 c3                	mov    %eax,%ebx
 8620572:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8620575:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8620579:	8b 45 0c             	mov    0xc(%ebp),%eax
 862057c:	8b 00                	mov    (%eax),%eax
 862057e:	89 85 54 21 ff ff    	mov    %eax,-0xdeac(%ebp)
 8620584:	8b 85 5c 21 ff ff    	mov    -0xdea4(%ebp),%eax
 862058a:	89 44 24 28          	mov    %eax,0x28(%esp)
 862058e:	89 7c 24 24          	mov    %edi,0x24(%esp)
 8620592:	89 54 24 20          	mov    %edx,0x20(%esp)
 8620596:	dd 5c 24 18          	fstpl  0x18(%esp)
 862059a:	89 74 24 14          	mov    %esi,0x14(%esp)
 862059e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86205a2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86205a6:	8b 8d 54 21 ff ff    	mov    -0xdeac(%ebp),%ecx
 86205ac:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86205b0:	c7 44 24 04 20 36 ce 	movl   $0x8ce3620,0x4(%esp)
 86205b7:	08 
 86205b8:	8b 45 88             	mov    -0x78(%ebp),%eax
 86205bb:	89 04 24             	mov    %eax,(%esp)
 86205be:	e8 fd 3b dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86205c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86205ca:	00 
 86205cb:	8b 45 88             	mov    -0x78(%ebp),%eax
 86205ce:	89 04 24             	mov    %eax,(%esp)
 86205d1:	e8 50 3d dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86205d6:	83 f0 01             	xor    $0x1,%eax
 86205d9:	84 c0                	test   %al,%al
 86205db:	74 0a                	je     86205e7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2d69>
 86205dd:	bb 00 00 00 00       	mov    $0x0,%ebx
 86205e2:	e9 33 03 00 00       	jmp    862091a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x309c>
 86205e7:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 86205ed:	89 04 24             	mov    %eax,(%esp)
 86205f0:	e8 b1 85 00 00       	call   8628ba6 <_ZN9__gnu_cxx17__normal_iteratorIP24STAvatarAbilityVariationSt6vectorIS1_SaIS1_EEEppEv>
 86205f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86205f8:	8d 90 24 04 00 00    	lea    0x424(%eax),%edx
 86205fe:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8620604:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620608:	89 04 24             	mov    %eax,(%esp)
 862060b:	e8 38 6a d7 ff       	call   8397048 <_ZNSt6vectorI24STAvatarAbilityVariationSaIS0_EE3endEv>
 8620610:	83 ec 04             	sub    $0x4,%esp
 8620613:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8620619:	89 44 24 04          	mov    %eax,0x4(%esp)
 862061d:	8d 85 48 fe ff ff    	lea    -0x1b8(%ebp),%eax
 8620623:	89 04 24             	mov    %eax,(%esp)
 8620626:	e8 4f 85 00 00       	call   8628b7a <_ZN9__gnu_cxxneIP24STAvatarAbilityVariationSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 862062b:	84 c0                	test   %al,%al
 862062d:	0f 85 ef fe ff ff    	jne    8620522 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2ca4>
 8620633:	c6 85 63 21 ff ff 00 	movb   $0x0,-0xde9d(%ebp)
 862063a:	c6 85 64 21 ff ff 00 	movb   $0x0,-0xde9c(%ebp)
 8620641:	c6 85 65 21 ff ff 00 	movb   $0x0,-0xde9b(%ebp)
 8620648:	c6 85 66 21 ff ff 00 	movb   $0x0,-0xde9a(%ebp)
 862064f:	bf 00 00 00 00       	mov    $0x0,%edi
 8620654:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 862065a:	89 04 24             	mov    %eax,(%esp)
 862065d:	e8 6e fa 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8620662:	c6 85 67 21 ff ff 01 	movb   $0x1,-0xde99(%ebp)
 8620669:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 862066f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8620673:	c7 44 24 04 b6 36 ce 	movl   $0x8ce36b6,0x4(%esp)
 862067a:	08 
 862067b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8620681:	89 04 24             	mov    %eax,(%esp)
 8620684:	e8 a7 6f 0e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8620689:	c6 85 63 21 ff ff 01 	movb   $0x1,-0xde9d(%ebp)
 8620690:	8b 45 08             	mov    0x8(%ebp),%eax
 8620693:	8d 50 1c             	lea    0x1c(%eax),%edx
 8620696:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 862069c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86206a0:	89 14 24             	mov    %edx,(%esp)
 86206a3:	e8 00 7c 00 00       	call   86282a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 86206a8:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 86206ac:	0f b7 d0             	movzwl %ax,%edx
 86206af:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 86206b5:	39 c2                	cmp    %eax,%edx
 86206b7:	0f 84 bc 00 00 00    	je     8620779 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2efb>
 86206bd:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 86206c3:	89 04 24             	mov    %eax,(%esp)
 86206c6:	e8 05 fa 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 86206cb:	c6 85 64 21 ff ff 01 	movb   $0x1,-0xde9c(%ebp)
 86206d2:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 86206d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86206dc:	c7 44 24 04 c3 36 ce 	movl   $0x8ce36c3,0x4(%esp)
 86206e3:	08 
 86206e4:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 86206ea:	89 04 24             	mov    %eax,(%esp)
 86206ed:	e8 3e 6f 0e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 86206f2:	c6 85 65 21 ff ff 01 	movb   $0x1,-0xde9b(%ebp)
 86206f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86206fc:	8d 50 1c             	lea    0x1c(%eax),%edx
 86206ff:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8620705:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620709:	89 14 24             	mov    %edx,(%esp)
 862070c:	e8 97 7b 00 00       	call   86282a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 8620711:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8620715:	0f b7 d0             	movzwl %ax,%edx
 8620718:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 862071e:	39 c2                	cmp    %eax,%edx
 8620720:	74 57                	je     8620779 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2efb>
 8620722:	8d 45 87             	lea    -0x79(%ebp),%eax
 8620725:	89 04 24             	mov    %eax,(%esp)
 8620728:	e8 a3 f9 0b 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 862072d:	c6 85 66 21 ff ff 01 	movb   $0x1,-0xde9a(%ebp)
 8620734:	8d 45 87             	lea    -0x79(%ebp),%eax
 8620737:	89 44 24 08          	mov    %eax,0x8(%esp)
 862073b:	c7 44 24 04 d1 36 ce 	movl   $0x8ce36d1,0x4(%esp)
 8620742:	08 
 8620743:	8d 45 80             	lea    -0x80(%ebp),%eax
 8620746:	89 04 24             	mov    %eax,(%esp)
 8620749:	e8 e2 6e 0e 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 862074e:	bf 01 00 00 00       	mov    $0x1,%edi
 8620753:	8b 45 08             	mov    0x8(%ebp),%eax
 8620756:	8d 50 1c             	lea    0x1c(%eax),%edx
 8620759:	8d 45 80             	lea    -0x80(%ebp),%eax
 862075c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620760:	89 14 24             	mov    %edx,(%esp)
 8620763:	e8 40 7b 00 00       	call   86282a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEEixERS6_>
 8620768:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 862076c:	0f b7 d0             	movzwl %ax,%edx
 862076f:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8620775:	39 c2                	cmp    %eax,%edx
 8620777:	75 07                	jne    8620780 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f02>
 8620779:	b8 01 00 00 00       	mov    $0x1,%eax
 862077e:	eb 05                	jmp    8620785 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f07>
 8620780:	b8 00 00 00 00       	mov    $0x0,%eax
 8620785:	89 c3                	mov    %eax,%ebx
 8620787:	89 f8                	mov    %edi,%eax
 8620789:	84 c0                	test   %al,%al
 862078b:	75 21                	jne    86207ae <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f30>
 862078d:	eb 5b                	jmp    86207ea <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f6c>
 862078f:	89 c1                	mov    %eax,%ecx
 8620791:	89 d0                	mov    %edx,%eax
 8620793:	89 c6                	mov    %eax,%esi
 8620795:	89 cb                	mov    %ecx,%ebx
 8620797:	89 f9                	mov    %edi,%ecx
 8620799:	84 c9                	test   %cl,%cl
 862079b:	74 0b                	je     86207a8 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f2a>
 862079d:	8d 45 80             	lea    -0x80(%ebp),%eax
 86207a0:	89 04 24             	mov    %eax,(%esp)
 86207a3:	e8 38 74 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86207a8:	89 d9                	mov    %ebx,%ecx
 86207aa:	89 f0                	mov    %esi,%eax
 86207ac:	eb 11                	jmp    86207bf <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f41>
 86207ae:	8d 45 80             	lea    -0x80(%ebp),%eax
 86207b1:	89 04 24             	mov    %eax,(%esp)
 86207b4:	e8 27 74 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86207b9:	eb 2f                	jmp    86207ea <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f6c>
 86207bb:	89 c1                	mov    %eax,%ecx
 86207bd:	89 d0                	mov    %edx,%eax
 86207bf:	89 c6                	mov    %eax,%esi
 86207c1:	89 cb                	mov    %ecx,%ebx
 86207c3:	80 bd 66 21 ff ff 00 	cmpb   $0x0,-0xde9a(%ebp)
 86207ca:	74 0b                	je     86207d7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f59>
 86207cc:	8d 45 87             	lea    -0x79(%ebp),%eax
 86207cf:	89 04 24             	mov    %eax,(%esp)
 86207d2:	e8 19 f9 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86207d7:	89 d9                	mov    %ebx,%ecx
 86207d9:	89 f0                	mov    %esi,%eax
 86207db:	89 c3                	mov    %eax,%ebx
 86207dd:	89 ce                	mov    %ecx,%esi
 86207df:	80 bd 65 21 ff ff 00 	cmpb   $0x0,-0xde9b(%ebp)
 86207e6:	74 26                	je     862080e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f90>
 86207e8:	eb 16                	jmp    8620800 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f82>
 86207ea:	80 bd 66 21 ff ff 00 	cmpb   $0x0,-0xde9a(%ebp)
 86207f1:	74 21                	je     8620814 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f96>
 86207f3:	8d 45 87             	lea    -0x79(%ebp),%eax
 86207f6:	89 04 24             	mov    %eax,(%esp)
 86207f9:	e8 f2 f8 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86207fe:	eb 14                	jmp    8620814 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2f96>
 8620800:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8620806:	89 04 24             	mov    %eax,(%esp)
 8620809:	e8 d2 73 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862080e:	89 f1                	mov    %esi,%ecx
 8620810:	89 d8                	mov    %ebx,%eax
 8620812:	eb 1d                	jmp    8620831 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2fb3>
 8620814:	80 bd 65 21 ff ff 00 	cmpb   $0x0,-0xde9b(%ebp)
 862081b:	74 42                	je     862085f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2fe1>
 862081d:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8620823:	89 04 24             	mov    %eax,(%esp)
 8620826:	e8 b5 73 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862082b:	eb 32                	jmp    862085f <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2fe1>
 862082d:	89 c1                	mov    %eax,%ecx
 862082f:	89 d0                	mov    %edx,%eax
 8620831:	89 c3                	mov    %eax,%ebx
 8620833:	89 ce                	mov    %ecx,%esi
 8620835:	80 bd 64 21 ff ff 00 	cmpb   $0x0,-0xde9c(%ebp)
 862083c:	74 0e                	je     862084c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2fce>
 862083e:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 8620844:	89 04 24             	mov    %eax,(%esp)
 8620847:	e8 a4 f8 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 862084c:	89 f1                	mov    %esi,%ecx
 862084e:	89 d8                	mov    %ebx,%eax
 8620850:	89 c3                	mov    %eax,%ebx
 8620852:	89 ce                	mov    %ecx,%esi
 8620854:	80 bd 63 21 ff ff 00 	cmpb   $0x0,-0xde9d(%ebp)
 862085b:	74 29                	je     8620886 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3008>
 862085d:	eb 19                	jmp    8620878 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x2ffa>
 862085f:	80 bd 64 21 ff ff 00 	cmpb   $0x0,-0xde9c(%ebp)
 8620866:	74 24                	je     862088c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x300e>
 8620868:	8d 85 7f ff ff ff    	lea    -0x81(%ebp),%eax
 862086e:	89 04 24             	mov    %eax,(%esp)
 8620871:	e8 7a f8 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8620876:	eb 14                	jmp    862088c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x300e>
 8620878:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 862087e:	89 04 24             	mov    %eax,(%esp)
 8620881:	e8 5a 73 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8620886:	89 f1                	mov    %esi,%ecx
 8620888:	89 d8                	mov    %ebx,%eax
 862088a:	eb 1d                	jmp    86208a9 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x302b>
 862088c:	80 bd 63 21 ff ff 00 	cmpb   $0x0,-0xde9d(%ebp)
 8620893:	74 35                	je     86208ca <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x304c>
 8620895:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 862089b:	89 04 24             	mov    %eax,(%esp)
 862089e:	e8 3d 73 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86208a3:	eb 25                	jmp    86208ca <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x304c>
 86208a5:	89 c1                	mov    %eax,%ecx
 86208a7:	89 d0                	mov    %edx,%eax
 86208a9:	89 c3                	mov    %eax,%ebx
 86208ab:	89 ce                	mov    %ecx,%esi
 86208ad:	80 bd 67 21 ff ff 00 	cmpb   $0x0,-0xde99(%ebp)
 86208b4:	74 0e                	je     86208c4 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3046>
 86208b6:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 86208bc:	89 04 24             	mov    %eax,(%esp)
 86208bf:	e8 2c f8 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86208c4:	89 f1                	mov    %esi,%ecx
 86208c6:	89 d8                	mov    %ebx,%eax
 86208c8:	eb 38                	jmp    8620902 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3084>
 86208ca:	80 bd 67 21 ff ff 00 	cmpb   $0x0,-0xde99(%ebp)
 86208d1:	74 0e                	je     86208e1 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3063>
 86208d3:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 86208d9:	89 04 24             	mov    %eax,(%esp)
 86208dc:	e8 0f f8 0b 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86208e1:	84 db                	test   %bl,%bl
 86208e3:	74 12                	je     86208f7 <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x3079>
 86208e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86208e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86208ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86208ef:	89 04 24             	mov    %eax,(%esp)
 86208f2:	e8 97 42 00 00       	call   8624b8e <_ZN11sync_script11CSyncScript26insert_artifact_info_to_dbEP17STEquipmentScript>
 86208f7:	bb 01 00 00 00       	mov    $0x1,%ebx
 86208fc:	eb 1c                	jmp    862091a <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x309c>
 86208fe:	89 c1                	mov    %eax,%ecx
 8620900:	89 d0                	mov    %edx,%eax
 8620902:	89 c3                	mov    %eax,%ebx
 8620904:	89 ce                	mov    %ecx,%esi
 8620906:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 862090c:	89 04 24             	mov    %eax,(%esp)
 862090f:	e8 94 73 00 00       	call   8627ca8 <_ZN19CFieldLengthCheckerD1Ev>
 8620914:	89 f1                	mov    %esi,%ecx
 8620916:	89 d8                	mov    %ebx,%eax
 8620918:	eb 14                	jmp    862092e <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30b0>
 862091a:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8620920:	89 04 24             	mov    %eax,(%esp)
 8620923:	e8 80 73 00 00       	call   8627ca8 <_ZN19CFieldLengthCheckerD1Ev>
 8620928:	eb 22                	jmp    862094c <_ZN11sync_script11CSyncScript28insert_equiptment_item_to_dbEP17STEquipmentScriptjii+0x30ce>
 862092a:	89 c1                	mov    %eax,%ecx
 862092c:	89 d0                	mov    %edx,%eax
 862092e:	89 c3                	mov    %eax,%ebx
 8620930:	89 ce                	mov    %ecx,%esi
 8620932:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8620938:	89 04 24             	mov    %eax,(%esp)
 862093b:	e8 a0 72 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8620940:	89 f1                	mov    %esi,%ecx
 8620942:	89 d8                	mov    %ebx,%eax
 8620944:	89 0c 24             	mov    %ecx,(%esp)
 8620947:	e8 04 2e 4c 00       	call   8ae3750 <_Unwind_Resume>
 862094c:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 8620952:	89 04 24             	mov    %eax,(%esp)
 8620955:	e8 86 72 0e 00       	call   8707be0 <_ZNSsD1Ev>
 862095a:	89 d8                	mov    %ebx,%eax
 862095c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 862095f:	83 c4 00             	add    $0x0,%esp
 8620962:	5b                   	pop    %ebx
 8620963:	5e                   	pop    %esi
 8620964:	5f                   	pop    %edi
 8620965:	5d                   	pop    %ebp
 8620966:	c3                   	ret
 8620967:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_equiptment_item_to_db @ 0x861d87e

/* sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int,
   int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_equiptment_item_to_db
          (CSyncScript *this,STEquipmentScript *param_1,uint param_2,int param_3,int param_4)

{
  STEquipmentScript SVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  char cVar8;
  bool bVar9;
  int *piVar10;
  int iVar11;
  ushort *puVar12;
  size_t sVar13;
  undefined4 *puVar14;
  char *pcVar15;
  CStreamBuffer *pCVar16;
  int iVar17;
  undefined4 uVar18;
  int *piVar19;
  STEquipmentScript *pSVar20;
  byte bVar21;
  CStreamBuffer local_de90 [40960];
  char local_3e90 [1024];
  char local_3a90 [1024];
  char acStack_3690 [1024];
  char local_3290 [8192];
  STEquipmentScript local_1290 [448];
  EquipmentParameterInfo aEStack_10d0 [1748];
  undefined4 local_9fc;
  undefined4 local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  int local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  char local_5fc [256];
  char local_4fc [256];
  char local_3fc [256];
  char local_2fc [256];
  char local_1fc [64];
  __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
  local_1bc [4];
  CFieldLengthChecker local_1b8 [12];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1ac [4];
  char local_1a8 [8];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_1a0 [4];
  char local_19c [16];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_18c [4];
  char local_188 [16];
  __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
  local_178 [4];
  __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_174 [4];
  __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_170 [4];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_16c [4];
  string local_168 [6];
  char local_162 [10];
  int local_158;
  uint local_154;
  string local_150 [4];
  map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
  local_14c [4];
  __normal_iterator local_148 [4];
  __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
  local_144 [4];
  __normal_iterator local_140 [4];
  __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
  local_13c [4];
  __normal_iterator local_138 [4];
  __normal_iterator local_134 [4];
  __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
  local_130 [4];
  __normal_iterator local_12c [4];
  __normal_iterator local_128 [4];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_124 [4];
  __normal_iterator local_120 [4];
  __normal_iterator local_11c [4];
  __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
  local_118 [4];
  __normal_iterator local_114 [4];
  __normal_iterator local_110 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_10c [4];
  cMyTrace local_108 [16];
  cMyTrace local_f8 [16];
  CStringMaker local_e8 [4];
  CStringMaker local_e4 [12];
  CStringMaker local_d8 [4];
  CStringMaker local_d4 [12];
  CStringMaker local_c8 [4];
  CStringMaker local_c4 [12];
  CStringMaker local_b8 [4];
  CStringMaker local_b4 [12];
  CStringMaker local_a8 [4];
  CStringMaker local_a4 [12];
  __normal_iterator local_98 [4];
  string local_94;
  allocator<char> local_8d;
  string local_8c;
  allocator<char> local_85;
  string local_84;
  allocator<char> local_7d;
  MySQL *local_7c;
  int local_78;
  uint local_74;
  int local_70;
  char local_69;
  int local_68;
  int local_64;
  EquipmentParameterInfo *local_60;
  ushort local_5a;
  int local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  
  bVar21 = 0;
  piVar19 = (int *)&stack0xffff2114;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_7c = (MySQL *)DBMgr::GetDBHandle();
  local_154 = 0;
  local_158 = 0;
  for (local_64 = 0; local_64 < 0xb; local_64 = local_64 + 1) {
    if (param_1[local_64 + 0x38] != (STEquipmentScript)0x0) {
      local_78 = local_64;
      break;
    }
  }
  local_74 = 0;
  if (param_3 == 1) {
    local_74 = param_2;
    param_2 = 0xffffffff;
  }
  else if (param_3 == 2) {
    local_74 = param_2;
    param_2 = 0xfffffffe;
  }
  else if (param_3 == 0) {
    std::string::string(local_150,(string *)(param_1 + 0xbc));
                    /* try { // try from 0861d982 to 0861d986 has its CatchHandler @ 0861d9a0 */
    cVar8 = GetType();
    std::string::~string(local_150);
    if (cVar8 != '\x01') {
      return 0;
    }
    param_2 = *(uint *)param_1;
    std::
    map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
    ::begin(local_16c);
    while( true ) {
      std::
      map<int,EquipmentParameterInfo,std::less<int>,std::allocator<std::pair<int_const,EquipmentParameterInfo>>>
      ::end(local_14c);
      cVar8 = std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)local_16c
                         ,(_Rb_tree_iterator *)local_14c);
      if (cVar8 == '\0') break;
      iVar11 = std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)
                          local_16c);
      local_60 = (EquipmentParameterInfo *)(iVar11 + 4);
      STEquipmentScript::STEquipmentScript(local_1290);
                    /* try { // try from 0861da2e to 0861da6a has its CatchHandler @ 0861da6d */
      EquipmentParameterInfo::operator=(aEStack_10d0,local_60);
      piVar10 = (int *)std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::
                       operator->((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)
                                  local_16c);
      insert_equiptment_item_to_db(this,local_1290,param_2,1,*piVar10);
      STEquipmentScript::~STEquipmentScript(local_1290);
      std::_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,EquipmentParameterInfo>> *)local_16c);
    }
  }
  local_162[5] = '\0';
  local_162[6] = '\0';
  local_162[7] = '\0';
  local_162[8] = '\0';
  local_162[9] = 0;
  local_70 = 0;
  iVar11 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x6cc));
  if (iVar11 != 0) {
    std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
    while( true ) {
      std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
      bVar9 = __gnu_cxx::operator!=(local_170,local_148);
      if ((!bVar9) || (4 < local_70)) break;
      puVar12 = (ushort *)
                __gnu_cxx::
                __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
                ::operator*(local_170);
      iVar11 = local_70;
      local_5a = *puVar12;
      cVar8 = GetSocketTypeCharacter(local_5a);
      local_162[iVar11 + 5] = cVar8;
      local_70 = local_70 + 1;
      __gnu_cxx::
      __normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>
      ::operator++(local_144,(int)local_170);
    }
  }
  iVar11 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size
                     ((vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                      (param_1 + 0x6c0));
  if (iVar11 != 0) {
    std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::begin();
    while( true ) {
      std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::end();
      bVar9 = __gnu_cxx::operator!=(local_174,local_140);
      if (!bVar9) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
                ::operator*(local_174);
      local_9fc = *puVar14;
      local_9f8 = puVar14[1];
      local_9f4 = puVar14[2];
      local_9f0 = puVar14[3];
      local_9ec = puVar14[4];
      local_9e8 = puVar14[5];
      local_9e4 = puVar14[6];
      local_9e0 = puVar14[7];
      if (0 < (int)puVar14[4]) {
        local_58 = 0;
        for (; (iVar11 = local_70, local_58 < local_9ec && (local_70 < 5)); local_70 = local_70 + 1)
        {
          cVar8 = GetSocketTypeCharacter(*(ushort *)((int)&local_9f8 + (local_58 + 8) * 2));
          local_162[iVar11 + 5] = cVar8;
          local_58 = local_58 + 1;
        }
      }
      __gnu_cxx::
      __normal_iterator<stAvatarTypeSelect_t*,std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>>
      ::operator++(local_13c,(int)local_174);
    }
  }
  pcVar15 = local_1fc;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  iVar11 = std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::size
                     ((vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>> *)
                      (param_1 + 0x768));
  if (iVar11 != 0) {
    local_54 = 0;
    std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::begin();
    __gnu_cxx::
    __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
    ::__normal_iterator<ENUM_EQUIPMENTTYPE*>(local_178,local_138);
    while( true ) {
      std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>::end();
      bVar9 = __gnu_cxx::operator!=(local_178,local_134);
      if (!bVar9) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
                ::operator*(local_178);
      local_50 = *puVar14;
      local_188[8] = '\0';
      local_188[9] = '\0';
      local_188[10] = '\0';
      local_188[0xb] = '\0';
      local_188[0xc] = '\0';
      local_188[0xd] = '\0';
      local_188[0xe] = '\0';
      local_188[0xf] = '\0';
      if (local_54 == 0) {
        sprintf(local_188 + 8,"%d");
      }
      else {
        sprintf(local_188 + 8,"*%d");
      }
      strcat(local_1fc,local_188 + 8);
      __gnu_cxx::
      __normal_iterator<ENUM_EQUIPMENTTYPE_const*,std::vector<ENUM_EQUIPMENTTYPE,std::allocator<ENUM_EQUIPMENTTYPE>>>
      ::operator++(local_130,(int)local_178);
      local_54 = local_54 + 1;
    }
  }
  pcVar15 = local_2fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_3fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_4fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = local_5fc;
  for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar15[0] = '\0';
    pcVar15[1] = '\0';
    pcVar15[2] = '\0';
    pcVar15[3] = '\0';
    pcVar15 = pcVar15 + ((uint)bVar21 * -2 + 1) * 4;
  }
  local_69 = '\0';
  for (local_4c = 0; local_4c < 0xb; local_4c = local_4c + 1) {
    if (param_1[local_4c + 0x38] != (STEquipmentScript)0x0) {
      local_48 = (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)
                 STEquipmentScript::getAniInfo();
      if (local_48 == (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)0x0)
      break;
      if ((((*(int *)(local_48 + 0x30) != -1) || (*(int *)(local_48 + 0x34) != -1)) ||
          (*(int *)(local_48 + 0xc) != -1)) || (*(int *)(local_48 + 0x10) != -1)) {
        if (local_48[0x14] == (vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>)0x0
           ) {
          if ((*(int *)(local_48 + 0xc) != -1) || (*(int *)(local_48 + 0x10) != -1)) {
            pCVar16 = local_de90;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pCVar16 = 0;
              pCVar16 = pCVar16 + ((uint)bVar21 * -2 + 1) * 4;
            }
            sprintf((char *)local_de90,"%02d%02d");
            if (local_69 != '\0') {
              local_1a8[0] = '\0';
              local_1a8[1] = '\0';
              local_1a8[2] = '\0';
              local_1a8[3] = '\0';
              local_1a8[4] = '\0';
              local_1a8[5] = '\0';
              local_1a8[6] = '\0';
              local_1a8[7] = '\0';
              sprintf(local_1a8,"*%d");
              strcat((char *)local_de90,local_1a8);
            }
            local_19c[0] = '\0';
            local_19c[1] = '\0';
            local_19c[2] = '\0';
            local_19c[3] = '\0';
            local_19c[4] = '\0';
            local_19c[5] = '\0';
            local_19c[6] = '\0';
            local_19c[7] = '\0';
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::size(local_48);
            sprintf(local_19c,"*%d");
            strcat((char *)local_de90,local_19c);
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::begin();
            __gnu_cxx::
            __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
            ::__normal_iterator<STEquipmentAniScript*>(local_1a0,local_120);
            while( true ) {
              std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::end();
              bVar9 = __gnu_cxx::operator!=(local_1a0,local_11c);
              if (!bVar9) break;
              pSVar20 = local_1290;
              for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
                *(undefined4 *)pSVar20 = 0;
                pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
              }
              puVar14 = &local_9fc;
              for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
                *puVar14 = 0;
                puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
              }
              local_38 = __gnu_cxx::
                         __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
                         ::operator*(local_1a0);
              strcat((char *)local_de90,"*");
              pcVar15 = (char *)std::string::c_str((string *)(local_38 + 0x60));
              strcpy((char *)local_1290,pcVar15);
              local_34 = 0;
              local_30 = 0;
              while (sVar13 = strlen((char *)local_1290), local_30 < sVar13) {
                if (local_1290[local_30] != (STEquipmentScript)0x5f) {
                  *(STEquipmentScript *)((int)&local_9fc + local_34) = local_1290[local_30];
                  local_34 = local_34 + 1;
                }
                local_30 = local_30 + 1;
              }
              strcat((char *)local_de90,(char *)&local_9fc);
              __gnu_cxx::
              __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
              ::operator++(local_118,(int)local_1a0);
            }
            if (local_69 == '\x01') {
              strcpy(local_4fc,(char *)local_de90);
            }
            else {
              strcpy(local_2fc,(char *)local_de90);
              local_69 = '\x01';
            }
          }
        }
        else if ((*(int *)(local_48 + 0x30) != -1) || (*(int *)(local_48 + 0x34) != -1)) {
          puVar14 = &local_9fc;
          for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
            *puVar14 = 0;
            puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
          }
          sprintf((char *)&local_9fc,"%02d%02d");
          if (local_69 != '\0') {
            local_19c[8] = '\0';
            local_19c[9] = '\0';
            local_19c[10] = '\0';
            local_19c[0xb] = '\0';
            local_19c[0xc] = '\0';
            local_19c[0xd] = '\0';
            local_19c[0xe] = '\0';
            local_19c[0xf] = '\0';
            sprintf(local_19c + 8,"*%d");
            strcat((char *)&local_9fc,local_19c + 8);
          }
          local_188[0] = '\0';
          local_188[1] = '\0';
          local_188[2] = '\0';
          local_188[3] = '\0';
          local_188[4] = '\0';
          local_188[5] = '\0';
          local_188[6] = '\0';
          local_188[7] = '\0';
          std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::size
                    (local_48 + 0x18);
          sprintf(local_188,"*%d");
          strcat((char *)&local_9fc,local_188);
          std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::begin();
          __gnu_cxx::
          __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
          ::__normal_iterator<STEquipmentAniScript*>(local_18c,local_12c);
          while( true ) {
            std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::end();
            bVar9 = __gnu_cxx::operator!=(local_18c,local_128);
            if (!bVar9) break;
            pSVar20 = local_1290;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pSVar20 = 0;
              pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
            }
            pCVar16 = local_de90;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              *(undefined4 *)pCVar16 = 0;
              pCVar16 = pCVar16 + ((uint)bVar21 * -2 + 1) * 4;
            }
            local_44 = __gnu_cxx::
                       __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
                       ::operator*(local_18c);
            strcat((char *)&local_9fc,"*");
            pcVar15 = (char *)std::string::c_str((string *)(local_44 + 0x60));
            strcpy((char *)local_1290,pcVar15);
            local_40 = 0;
            local_3c = 0;
            while (sVar13 = strlen((char *)local_1290), local_3c < sVar13) {
              if (local_1290[local_3c] != (STEquipmentScript)0x5f) {
                *(STEquipmentScript *)(local_de90 + local_40) = local_1290[local_3c];
                local_40 = local_40 + 1;
              }
              local_3c = local_3c + 1;
            }
            strcat((char *)&local_9fc,(char *)local_de90);
            __gnu_cxx::
            __normal_iterator<STEquipmentAniScript_const*,std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>
            ::operator++(local_124,(int)local_18c);
          }
          if (local_69 == '\x01') {
            strcpy(local_5fc,(char *)&local_9fc);
          }
          else {
            strcpy(local_3fc,(char *)&local_9fc);
            local_69 = '\x01';
          }
        }
      }
    }
  }
  local_162[0] = '\0';
  local_162[1] = '\0';
  local_162[2] = '\0';
  local_162[3] = '\0';
  local_162[4] = 0;
  cVar8 = std::vector<int,std::allocator<int>>::empty();
  if (cVar8 != '\x01') {
    local_2c = 0;
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_1ac,local_114);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar9 = __gnu_cxx::operator!=(local_1ac,local_110);
      if ((!bVar9) || (4 < local_2c)) break;
      puVar14 = (undefined4 *)
                __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                operator*(local_1ac);
      local_28 = *puVar14;
      local_162[local_2c] = (char)local_28 + '0';
      local_2c = local_2c + 1;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_10c,(int)local_1ac);
    }
  }
  memset(local_3e90,0,0x2c00);
  local_68 = 4;
  std::string::string(local_168);
                    /* try { // try from 0861e63d to 0861f4a5 has its CatchHandler @ 0862092a */
  iVar11 = std::string::length((string *)(param_1 + 0xb4));
  if (iVar11 == 0) {
    std::string::operator=(local_168,(string *)(param_1 + 0x6a4));
  }
  else {
    std::string::operator=(local_168,(string *)(param_1 + 0xb4));
  }
  puVar14 = &local_9fc;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + (uint)bVar21 * -2 + 1;
  }
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xac));
  cVar8 = CodePage::script2Database(pcVar15,(char *)&local_9fc);
  if (cVar8 != '\x01') {
    std::string::c_str((string *)(param_1 + 0xac));
    CodePage::database();
    CodePage::script();
    cMyTrace::cMyTrace(local_108,
                       "bool sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)"
                       ,0x398,5);
    cMyTrace::operator()(local_108,"Error!!! %s->%s [%s][%s][%d]");
    uVar18 = 0;
    piVar19 = (int *)&stack0xffff2114;
    goto LAB_0862094c;
  }
  pSVar20 = local_1290;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined4 *)pSVar20 = 0;
    pSVar20 = pSVar20 + ((uint)bVar21 * -2 + 1) * 4;
  }
  pcVar15 = (char *)std::string::c_str(local_168);
  cVar8 = CodePage::script2Database(pcVar15,(char *)local_1290);
  if (cVar8 != '\x01') {
    std::string::c_str((string *)(param_1 + 0xb4));
    CodePage::database();
    CodePage::script();
    cMyTrace::cMyTrace(local_f8,
                       "bool sync_script::CSyncScript::insert_equiptment_item_to_db(STEquipmentScript*, unsigned int, int, int)"
                       ,0x39f,5);
    cMyTrace::operator()(local_f8,"Error!!! %s->%s [%s][%s][%d]");
    uVar18 = 0;
    goto LAB_0862094c;
  }
  CStreamBuffer::CStreamBuffer(local_de90);
  CStreamBuffer::operator<<(local_de90,param_2);
  pcVar15 = (char *)GetEscapeString(local_7c,(char *)&local_9fc,local_3e90);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xb0));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3a90);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pcVar15 = (char *)GetEscapeString(local_7c,(char *)local_1290,acStack_3690);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_158;
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  uVar7 = local_154;
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,uVar7);
  pcVar15 = (char *)GetUsableCharacter(this,param_1);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pcVar15 = (char *)GetAttachType(this,*(int *)(param_1 + 8));
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x5c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x184);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0xc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x10);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x34);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x14);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x18);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1bc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x68);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1c4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1cc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1d4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1d8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1dc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x1e4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x214);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x21c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x224);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x22c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x270);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x274);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x278);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x27c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x280);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x284);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x288);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x28c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x290);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x294);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x298);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x29c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2a8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ac);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 700);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2b8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2cc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2d0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2d4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2dc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2e8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ec);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2f0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2f4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pcVar15 = (char *)GetAttackElement(this,(EquipmentParameterInfo *)(param_1 + 0x1c0));
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x304);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x308);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x30c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x3e0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x3e4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  SVar1 = param_1[0x3fc];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  SVar1 = param_1[0x3fd];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  fVar2 = *(float *)(param_1 + 0x2f8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  fVar2 = *(float *)(param_1 + 1000);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  SVar1 = param_1[0x3ec];
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,(uint)(byte)SVar1);
  CStringMaker::CStringMaker(local_e4);
                    /* try { // try from 0861f4bc to 0861f50d has its CatchHandler @ 0861f581 */
  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::end();
  std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<LevelUpSkill*,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861f51a to 0861f552 has its CatchHandler @ 0861f555 */
  pcVar15 = (char *)CStringMaker::c_str(local_e8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861f57a to 0861f57e has its CatchHandler @ 0861f581 */
  CStringMaker::~CStringMaker(local_e8);
                    /* try { // try from 0861f5a9 to 0861fab2 has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_e4);
  iVar11 = std::string::compare((string *)(param_1 + 0x668),"");
  if ((((iVar11 == 0) &&
       (iVar11 = std::vector<int,std::allocator<int>>::size
                           ((vector<int,std::allocator<int>> *)(param_1 + 0x66c)), iVar11 == 0)) &&
      (*(int *)(param_1 + 0x6a0) == -1)) && (*(int *)(param_1 + 0x798) == -1)) {
    pcVar15 = "n";
  }
  else {
    pcVar15 = "y";
  }
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_162 + 5);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x43c));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0xb8));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x440);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x24);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x184);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x28);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,iVar17);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,",");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,iVar11);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x234);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x238);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x23c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x240);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x244);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  fVar2 = *(float *)(param_1 + 0x248);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x448);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x44c);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x450);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x454);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x458);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2ac);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x2c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  iVar11 = *(int *)(param_1 + 0x444);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  CStringMaker::CStringMaker(local_d4);
                    /* try { // try from 0861fac9 to 0861fb1a has its CatchHandler @ 0861fb8e */
  std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>::end();
  std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<ItemAuraInfo*,std::vector<ItemAuraInfo,std::allocator<ItemAuraInfo>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fb27 to 0861fb5f has its CatchHandler @ 0861fb62 */
  pcVar15 = (char *)CStringMaker::c_str(local_d8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861fb87 to 0861fb8b has its CatchHandler @ 0861fb8e */
  CStringMaker::~CStringMaker(local_d8);
                    /* try { // try from 0861fbb6 to 0861fc5e has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_d4);
  fVar2 = *(float *)(param_1 + 0x2fc);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x668));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  CStringMaker::CStringMaker(local_c4);
                    /* try { // try from 0861fc75 to 0861fcc6 has its CatchHandler @ 0861fd3a */
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fcd3 to 0861fd0b has its CatchHandler @ 0861fd0e */
  pcVar15 = (char *)CStringMaker::c_str(local_c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 0861fd33 to 0861fd37 has its CatchHandler @ 0861fd3a */
  CStringMaker::~CStringMaker(local_c8);
                    /* try { // try from 0861fd62 to 0861ff83 has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_c4);
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6b0));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6b4));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x438));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = local_68 * 0x400;
  local_68 = local_68 + 1;
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x43c));
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3e90 + iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0x798);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_1fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  CStringMaker::CStringMaker(local_b4);
                    /* try { // try from 0861ff9a to 0861ffeb has its CatchHandler @ 0862005f */
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::end();
  std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<EquipmentSkillDataUp*,std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>>,sync_script::CStringMaker>
            ();
                    /* try { // try from 0861fff8 to 08620030 has its CatchHandler @ 08620033 */
  pcVar15 = (char *)CStringMaker::c_str(local_b8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 08620058 to 0862005c has its CatchHandler @ 0862005f */
  CStringMaker::~CStringMaker(local_b8);
                    /* try { // try from 08620087 to 0862030a has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_b4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,local_74);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,param_4);
  iVar11 = *(int *)(param_1 + 0x6a0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_2fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_3fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_4fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_5fc);
  CStreamBuffer::operator<<(pCVar16,"\'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,local_162);
  CStreamBuffer::operator<<(pCVar16,"\'");
  fVar2 = *(float *)(param_1 + 0x434);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  iVar11 = *(int *)(param_1 + 0x70);
  iVar17 = std::string::length((string *)(param_1 + 0x6c));
  pcVar15 = (char *)std::string::c_str((string *)(param_1 + 0x6c));
  pcVar15 = (char *)GetURL(this,pcVar15,iVar17,iVar11);
  pcVar15 = (char *)GetEscapeString(local_7c,pcVar15,local_3290);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
  iVar11 = *(int *)(param_1 + 0xc4);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,iVar11);
  CStringMaker::CStringMaker(local_a4);
                    /* try { // try from 08620321 to 08620372 has its CatchHandler @ 086203e6 */
  std::vector<int,std::allocator<int>>::end();
  std::vector<int,std::allocator<int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
            ();
  piVar19 = (int *)&stack0xffff2100;
                    /* try { // try from 0862037f to 086203b7 has its CatchHandler @ 086203ba */
  pcVar15 = (char *)CStringMaker::c_str(local_a8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", \'");
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar16,pcVar15);
  CStreamBuffer::operator<<(pCVar16,"\'");
                    /* try { // try from 086203df to 086203e3 has its CatchHandler @ 086203e6 */
  CStringMaker::~CStringMaker(local_a8);
                    /* try { // try from 0862040e to 0862049b has its CatchHandler @ 0862092a */
  CStringMaker::~CStringMaker(local_a4);
  fVar2 = *(float *)(param_1 + 0x1c8);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  fVar2 = *(float *)(param_1 + 0x1d0);
  pCVar16 = (CStreamBuffer *)CStreamBuffer::operator<<(local_de90,", ");
  CStreamBuffer::operator<<(pCVar16,fVar2);
  CStreamBuffer::c_str(local_de90);
  MySQL::set_query(local_7c,
                   "inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, skill_levelup, set_type, jewel_type, detail_explain, flavor_text, anti_evil, value, required_skill, need_material, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, fire_attack, water_attack, dark_attack, light_attack, all_attack, weapon_break_resistance, armor_break_resistance, all_activestatus_resistance, rigidity, item_aura, magical_critical_hit, set_name, set_item, fullset_basic_explain, fullset_detail_explain, parameter_basic_explain, parameter_detail_explain, part_set_index, hide_equipment, skill_data_up, it_set_no, db_piece_count, set_item_master, ani_variation, ani_variation_expand, ani_variation2, ani_variation_expand2, hide_growtype_avatar, room_list_move_speed_rate, url, icon_mark_number, extra_icon_idx_list, hp_max_rate, mp_max_rate) values(%s)"
                  );
  CFieldLengthChecker::CFieldLengthChecker(local_1b8);
  pcVar15 = (char *)MySQL::GetQueryString(local_7c);
                    /* try { // try from 086204b4 to 0862062a has its CatchHandler @ 086208fe */
  CFieldLengthChecker::AddField(local_1b8,pcVar15);
  cVar8 = MySQL::exec(local_7c,true);
  if (cVar8 == '\x01') {
    cVar8 = std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::empty();
    if (cVar8 != '\x01') {
      local_24 = 0;
      std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::begin();
      while( true ) {
        std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>::end();
        bVar9 = __gnu_cxx::operator!=(local_1bc,local_98);
        if (!bVar9) break;
        local_20 = __gnu_cxx::
                   __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
                   ::operator*(local_1bc);
        local_24 = local_24 + 1;
        MySQL::set_query(local_7c,
                         "inSert into avatar_select_ability(it_no, ability_no, ability_type, rate_change, value, job, skill_index, skill_level) values(%d,%d,%d,%d,%f,%d,%d,%d)"
                        );
        cVar8 = MySQL::exec(local_7c,true);
        if (cVar8 != '\x01') {
          uVar18 = 0;
          goto LAB_0862091a;
        }
        __gnu_cxx::
        __normal_iterator<STAvatarAbilityVariation*,std::vector<STAvatarAbilityVariation,std::allocator<STAvatarAbilityVariation>>>
        ::operator++(local_1bc);
      }
    }
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar9 = false;
    std::allocator<char>::allocator();
                    /* try { // try from 08620684 to 08620767 has its CatchHandler @ 0862078f */
    std::string::string((string *)&local_94,"artifact red",(allocator *)&local_8d);
    iVar11 = std::
             map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
             ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                           *)(this + 0x1c),&local_94);
    if (*(ushort *)(iVar11 + 4) == local_154) {
LAB_08620779:
      bVar3 = true;
    }
    else {
      std::allocator<char>::allocator();
      bVar6 = true;
      std::string::string((string *)&local_8c,"artifact blue",(allocator *)&local_85);
      bVar5 = true;
      iVar11 = std::
               map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x1c),&local_8c);
      if (*(ushort *)(iVar11 + 4) == local_154) goto LAB_08620779;
      std::allocator<char>::allocator();
      bVar4 = true;
      std::string::string((string *)&local_84,"artifact green",(allocator *)&local_7d);
      bVar9 = true;
      iVar11 = std::
               map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
               ::operator[]((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
                             *)(this + 0x1c),&local_84);
      if (*(ushort *)(iVar11 + 4) == local_154) goto LAB_08620779;
      bVar3 = false;
    }
    if (bVar9) {
                    /* try { // try from 086207b4 to 086207b8 has its CatchHandler @ 086207bb */
      std::string::~string((string *)&local_84);
    }
    if (bVar4) {
      std::allocator<char>::~allocator(&local_7d);
    }
    if (bVar5) {
                    /* try { // try from 08620826 to 0862082a has its CatchHandler @ 0862082d */
      std::string::~string((string *)&local_8c);
    }
    if (bVar6) {
      std::allocator<char>::~allocator(&local_85);
    }
                    /* try { // try from 0862089e to 086208a2 has its CatchHandler @ 086208a5 */
    std::string::~string((string *)&local_94);
    std::allocator<char>::~allocator(&local_8d);
    if (bVar3) {
                    /* try { // try from 086208f2 to 086208f6 has its CatchHandler @ 086208fe */
      insert_artifact_info_to_db(this,param_1);
    }
    uVar18 = 1;
  }
  else {
    uVar18 = 0;
  }
LAB_0862091a:
                    /* try { // try from 08620923 to 08620927 has its CatchHandler @ 0862092a */
  CFieldLengthChecker::~CFieldLengthChecker(local_1b8);
LAB_0862094c:
  *piVar19 = (int)local_168;
  piVar19[-1] = 0x862095a;
  std::string::~string((string *)*piVar19);
  return uVar18;
}

```

---

## insert_exp_level_to_db

```asm
// === 086228dc sync_script::CSyncScript::insert_exp_level_to_db  [0x086228dc-0x862295f] ===
 86228dc:	55                   	push   %ebp
 86228dd:	89 e5                	mov    %esp,%ebp
 86228df:	83 ec 28             	sub    $0x28,%esp
 86228e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86228e5:	0f b6 00             	movzbl (%eax),%eax
 86228e8:	83 f0 01             	xor    $0x1,%eax
 86228eb:	84 c0                	test   %al,%al
 86228ed:	74 07                	je     86228f6 <_ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji+0x1a>
 86228ef:	b8 01 00 00 00       	mov    $0x1,%eax
 86228f4:	eb 67                	jmp    862295d <_ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji+0x81>
 86228f6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86228fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622902:	00 
 8622903:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862290a:	00 
 862290b:	89 04 24             	mov    %eax,(%esp)
 862290e:	e8 2b 29 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622913:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622916:	8b 45 10             	mov    0x10(%ebp),%eax
 8622919:	89 44 24 0c          	mov    %eax,0xc(%esp)
 862291d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622920:	89 44 24 08          	mov    %eax,0x8(%esp)
 8622924:	c7 44 24 04 e0 3c ce 	movl   $0x8ce3ce0,0x4(%esp)
 862292b:	08 
 862292c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 862292f:	89 04 24             	mov    %eax,(%esp)
 8622932:	e8 89 18 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622937:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862293e:	00 
 862293f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622942:	89 04 24             	mov    %eax,(%esp)
 8622945:	e8 dc 19 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 862294a:	83 f0 01             	xor    $0x1,%eax
 862294d:	84 c0                	test   %al,%al
 862294f:	74 07                	je     8622958 <_ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji+0x7c>
 8622951:	b8 00 00 00 00       	mov    $0x0,%eax
 8622956:	eb 05                	jmp    862295d <_ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji+0x81>
 8622958:	b8 01 00 00 00       	mov    $0x1,%eax
 862295d:	c9                   	leave
 862295e:	c3                   	ret
 862295f:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_exp_level_to_db @ 0x86228dc

/* sync_script::CSyncScript::insert_exp_level_to_db(unsigned int, int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_exp_level_to_db(CSyncScript *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"inSert into exp_level_ref(exp, lev) values(%u, %d)",param_1,param_2);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_item_info_master_to_db

```asm
// === 0862571a sync_script::CSyncScript::insert_item_info_master_to_db  [0x0862571a-0x8625c53] ===
 862571a:	55                   	push   %ebp
 862571b:	89 e5                	mov    %esp,%ebp
 862571d:	57                   	push   %edi
 862571e:	56                   	push   %esi
 862571f:	53                   	push   %ebx
 8625720:	81 ec 1c 01 00 00    	sub    $0x11c,%esp
 8625726:	8b 45 08             	mov    0x8(%ebp),%eax
 8625729:	0f b6 00             	movzbl (%eax),%eax
 862572c:	83 f0 01             	xor    $0x1,%eax
 862572f:	84 c0                	test   %al,%al
 8625731:	74 0a                	je     862573d <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x23>
 8625733:	b8 01 00 00 00       	mov    $0x1,%eax
 8625738:	e9 0b 05 00 00       	jmp    8625c48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x52e>
 862573d:	8d 9d 60 ff ff ff    	lea    -0xa0(%ebp),%ebx
 8625743:	b8 00 00 00 00       	mov    $0x0,%eax
 8625748:	ba 19 00 00 00       	mov    $0x19,%edx
 862574d:	89 df                	mov    %ebx,%edi
 862574f:	89 d1                	mov    %edx,%ecx
 8625751:	f3 ab                	rep stos %eax,%es:(%edi)
 8625753:	8d 9d fc fe ff ff    	lea    -0x104(%ebp),%ebx
 8625759:	b8 00 00 00 00       	mov    $0x0,%eax
 862575e:	ba 19 00 00 00       	mov    $0x19,%edx
 8625763:	89 df                	mov    %ebx,%edi
 8625765:	89 d1                	mov    %edx,%ecx
 8625767:	f3 ab                	rep stos %eax,%es:(%edi)
 8625769:	8b 45 08             	mov    0x8(%ebp),%eax
 862576c:	8d 50 34             	lea    0x34(%eax),%edx
 862576f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625772:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625776:	89 04 24             	mov    %eax,(%esp)
 8625779:	e8 7c 39 00 00       	call   86290fa <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE5beginEv>
 862577e:	83 ec 04             	sub    $0x4,%esp
 8625781:	e9 d7 00 00 00       	jmp    862585d <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x143>
 8625786:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625789:	89 04 24             	mov    %eax,(%esp)
 862578c:	e8 e7 39 00 00       	call   8629178 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEptEv>
 8625791:	83 c0 10             	add    $0x10,%eax
 8625794:	89 04 24             	mov    %eax,(%esp)
 8625797:	e8 54 0d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 862579c:	89 c3                	mov    %eax,%ebx
 862579e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86257a1:	89 04 24             	mov    %eax,(%esp)
 86257a4:	e8 cf 39 00 00       	call   8629178 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEptEv>
 86257a9:	8d 50 09             	lea    0x9(%eax),%edx
 86257ac:	8b 45 08             	mov    0x8(%ebp),%eax
 86257af:	83 c0 64             	add    $0x64,%eax
 86257b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86257b6:	89 04 24             	mov    %eax,(%esp)
 86257b9:	e8 f0 37 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 86257be:	89 04 24             	mov    %eax,(%esp)
 86257c1:	e8 2a 0d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86257c6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86257ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 86257ce:	c7 44 24 04 84 46 ce 	movl   $0x8ce4684,0x4(%esp)
 86257d5:	08 
 86257d6:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 86257dc:	89 04 24             	mov    %eax,(%esp)
 86257df:	e8 5c 8c a5 ff       	call   807e440 <sprintf@plt>
 86257e4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86257e7:	89 04 24             	mov    %eax,(%esp)
 86257ea:	e8 89 39 00 00       	call   8629178 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEptEv>
 86257ef:	83 c0 10             	add    $0x10,%eax
 86257f2:	89 04 24             	mov    %eax,(%esp)
 86257f5:	e8 f6 0c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86257fa:	89 c3                	mov    %eax,%ebx
 86257fc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86257ff:	89 04 24             	mov    %eax,(%esp)
 8625802:	e8 71 39 00 00       	call   8629178 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEptEv>
 8625807:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 862580b:	0f b7 f0             	movzwl %ax,%esi
 862580e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625811:	89 04 24             	mov    %eax,(%esp)
 8625814:	e8 5f 39 00 00       	call   8629178 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEptEv>
 8625819:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 862581d:	0f b6 c0             	movzbl %al,%eax
 8625820:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 8625826:	89 54 24 10          	mov    %edx,0x10(%esp)
 862582a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 862582e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8625832:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625836:	8b 45 08             	mov    0x8(%ebp),%eax
 8625839:	89 04 24             	mov    %eax,(%esp)
 862583c:	e8 13 04 00 00       	call   8625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>
 8625841:	83 f0 01             	xor    $0x1,%eax
 8625844:	84 c0                	test   %al,%al
 8625846:	74 0a                	je     8625852 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x138>
 8625848:	b8 00 00 00 00       	mov    $0x0,%eax
 862584d:	e9 f6 03 00 00       	jmp    8625c48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x52e>
 8625852:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625855:	89 04 24             	mov    %eax,(%esp)
 8625858:	e8 fd 38 00 00       	call   862915a <_ZNSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEppEv>
 862585d:	8b 45 08             	mov    0x8(%ebp),%eax
 8625860:	8d 50 34             	lea    0x34(%eax),%edx
 8625863:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8625866:	89 54 24 04          	mov    %edx,0x4(%esp)
 862586a:	89 04 24             	mov    %eax,(%esp)
 862586d:	e8 ae 38 00 00       	call   8629120 <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE3endEv>
 8625872:	83 ec 04             	sub    $0x4,%esp
 8625875:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8625878:	89 44 24 04          	mov    %eax,0x4(%esp)
 862587c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862587f:	89 04 24             	mov    %eax,(%esp)
 8625882:	e8 bf 38 00 00       	call   8629146 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript11SWEAPONTYPEENS2_9SITEMTYPEEEEneERKS7_>
 8625887:	84 c0                	test   %al,%al
 8625889:	0f 85 f7 fe ff ff    	jne    8625786 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x6c>
 862588f:	8b 45 08             	mov    0x8(%ebp),%eax
 8625892:	8d 50 4c             	lea    0x4c(%eax),%edx
 8625895:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625898:	89 54 24 04          	mov    %edx,0x4(%esp)
 862589c:	89 04 24             	mov    %eax,(%esp)
 862589f:	e8 e2 38 00 00       	call   8629186 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE5beginEv>
 86258a4:	83 ec 04             	sub    $0x4,%esp
 86258a7:	e9 11 01 00 00       	jmp    86259bd <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x2a3>
 86258ac:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86258af:	89 04 24             	mov    %eax,(%esp)
 86258b2:	e8 4d 39 00 00       	call   8629204 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEptEv>
 86258b7:	83 c0 10             	add    $0x10,%eax
 86258ba:	89 04 24             	mov    %eax,(%esp)
 86258bd:	e8 2e 0c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86258c2:	89 c3                	mov    %eax,%ebx
 86258c4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86258c7:	89 04 24             	mov    %eax,(%esp)
 86258ca:	e8 35 39 00 00       	call   8629204 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEptEv>
 86258cf:	8d 50 0a             	lea    0xa(%eax),%edx
 86258d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86258d5:	83 c0 7c             	add    $0x7c,%eax
 86258d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86258dc:	89 04 24             	mov    %eax,(%esp)
 86258df:	e8 ca 36 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 86258e4:	89 04 24             	mov    %eax,(%esp)
 86258e7:	e8 04 0c 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86258ec:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86258f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 86258f4:	c7 44 24 04 8b 46 ce 	movl   $0x8ce468b,0x4(%esp)
 86258fb:	08 
 86258fc:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8625902:	89 04 24             	mov    %eax,(%esp)
 8625905:	e8 36 8b a5 ff       	call   807e440 <sprintf@plt>
 862590a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862590d:	89 04 24             	mov    %eax,(%esp)
 8625910:	e8 ef 38 00 00       	call   8629204 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEptEv>
 8625915:	8d 50 09             	lea    0x9(%eax),%edx
 8625918:	8b 45 08             	mov    0x8(%ebp),%eax
 862591b:	83 c0 64             	add    $0x64,%eax
 862591e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625922:	89 04 24             	mov    %eax,(%esp)
 8625925:	e8 84 36 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 862592a:	89 04 24             	mov    %eax,(%esp)
 862592d:	e8 be 0b 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625932:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 8625938:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862593c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8625940:	c7 44 24 04 84 46 ce 	movl   $0x8ce4684,0x4(%esp)
 8625947:	08 
 8625948:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 862594e:	89 04 24             	mov    %eax,(%esp)
 8625951:	e8 ea 8a a5 ff       	call   807e440 <sprintf@plt>
 8625956:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625959:	89 04 24             	mov    %eax,(%esp)
 862595c:	e8 a3 38 00 00       	call   8629204 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEptEv>
 8625961:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8625965:	0f b7 d8             	movzwl %ax,%ebx
 8625968:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862596b:	89 04 24             	mov    %eax,(%esp)
 862596e:	e8 91 38 00 00       	call   8629204 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEptEv>
 8625973:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8625977:	0f b6 c0             	movzbl %al,%eax
 862597a:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 8625980:	89 54 24 10          	mov    %edx,0x10(%esp)
 8625984:	8d 95 60 ff ff ff    	lea    -0xa0(%ebp),%edx
 862598a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862598e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8625992:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625996:	8b 45 08             	mov    0x8(%ebp),%eax
 8625999:	89 04 24             	mov    %eax,(%esp)
 862599c:	e8 b3 02 00 00       	call   8625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>
 86259a1:	83 f0 01             	xor    $0x1,%eax
 86259a4:	84 c0                	test   %al,%al
 86259a6:	74 0a                	je     86259b2 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x298>
 86259a8:	b8 00 00 00 00       	mov    $0x0,%eax
 86259ad:	e9 96 02 00 00       	jmp    8625c48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x52e>
 86259b2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86259b5:	89 04 24             	mov    %eax,(%esp)
 86259b8:	e8 29 38 00 00       	call   86291e6 <_ZNSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEppEv>
 86259bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86259c0:	8d 50 4c             	lea    0x4c(%eax),%edx
 86259c3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86259c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86259ca:	89 04 24             	mov    %eax,(%esp)
 86259cd:	e8 da 37 00 00       	call   86291ac <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE3endEv>
 86259d2:	83 ec 04             	sub    $0x4,%esp
 86259d5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86259d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86259dc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86259df:	89 04 24             	mov    %eax,(%esp)
 86259e2:	e8 eb 37 00 00       	call   86291d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN11sync_script11CSyncScript10SARMORTYPEENS2_9SITEMTYPEEEEneERKS7_>
 86259e7:	84 c0                	test   %al,%al
 86259e9:	0f 85 bd fe ff ff    	jne    86258ac <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x192>
 86259ef:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 86259f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86259f6:	8d 50 1c             	lea    0x1c(%eax),%edx
 86259f9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86259fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625a00:	89 04 24             	mov    %eax,(%esp)
 8625a03:	e8 0a 38 00 00       	call   8629212 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEE5beginEv>
 8625a08:	83 ec 04             	sub    $0x4,%esp
 8625a0b:	e9 01 02 00 00       	jmp    8625c11 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x4f7>
 8625a10:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625a13:	89 04 24             	mov    %eax,(%esp)
 8625a16:	e8 75 38 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625a1b:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8625a1f:	83 f0 01             	xor    $0x1,%eax
 8625a22:	84 c0                	test   %al,%al
 8625a24:	0f 85 db 01 00 00    	jne    8625c05 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x4eb>
 8625a2a:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8625a2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8625a31:	8d 50 10             	lea    0x10(%eax),%edx
 8625a34:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8625a37:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625a3b:	89 04 24             	mov    %eax,(%esp)
 8625a3e:	e8 cb 99 a5 ff       	call   807f40e <_ZNSt6vectorIhSaIhEE5beginEv>
 8625a43:	83 ec 04             	sub    $0x4,%esp
 8625a46:	eb 37                	jmp    8625a7f <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x365>
 8625a48:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625a4b:	89 04 24             	mov    %eax,(%esp)
 8625a4e:	e8 3d 38 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625a53:	0f b6 58 05          	movzbl 0x5(%eax),%ebx
 8625a57:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8625a5a:	89 04 24             	mov    %eax,(%esp)
 8625a5d:	e8 fc 98 a5 ff       	call   807f35e <_ZNK9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEdeEv>
 8625a62:	0f b6 00             	movzbl (%eax),%eax
 8625a65:	38 c3                	cmp    %al,%bl
 8625a67:	0f 94 c0             	sete   %al
 8625a6a:	84 c0                	test   %al,%al
 8625a6c:	74 06                	je     8625a74 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x35a>
 8625a6e:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8625a72:	eb 39                	jmp    8625aad <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x393>
 8625a74:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8625a77:	89 04 24             	mov    %eax,(%esp)
 8625a7a:	e8 cf 31 da ff       	call   83c8c4e <_ZN9__gnu_cxx17__normal_iteratorIPhSt6vectorIhSaIhEEEppEv>
 8625a7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8625a82:	8d 50 10             	lea    0x10(%eax),%edx
 8625a85:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8625a88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625a8c:	89 04 24             	mov    %eax,(%esp)
 8625a8f:	e8 5e 95 a5 ff       	call   807eff2 <_ZNSt6vectorIhSaIhEE3endEv>
 8625a94:	83 ec 04             	sub    $0x4,%esp
 8625a97:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8625a9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625a9e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8625aa1:	89 04 24             	mov    %eax,(%esp)
 8625aa4:	e8 f4 37 00 00       	call   862929d <_ZN9__gnu_cxxneIPhSt6vectorIhSaIhEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8625aa9:	84 c0                	test   %al,%al
 8625aab:	75 9b                	jne    8625a48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x32e>
 8625aad:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625ab0:	89 04 24             	mov    %eax,(%esp)
 8625ab3:	e8 d8 37 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625ab8:	83 c0 0c             	add    $0xc,%eax
 8625abb:	89 04 24             	mov    %eax,(%esp)
 8625abe:	e8 2d 0a 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625ac3:	89 c3                	mov    %eax,%ebx
 8625ac5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625ac8:	89 04 24             	mov    %eax,(%esp)
 8625acb:	e8 c0 37 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625ad0:	8d 50 05             	lea    0x5(%eax),%edx
 8625ad3:	8b 45 08             	mov    0x8(%ebp),%eax
 8625ad6:	83 c0 64             	add    $0x64,%eax
 8625ad9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625add:	89 04 24             	mov    %eax,(%esp)
 8625ae0:	e8 c9 34 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 8625ae5:	89 04 24             	mov    %eax,(%esp)
 8625ae8:	e8 03 0a 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625aed:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8625af1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8625af5:	c7 44 24 04 84 46 ce 	movl   $0x8ce4684,0x4(%esp)
 8625afc:	08 
 8625afd:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8625b03:	89 04 24             	mov    %eax,(%esp)
 8625b06:	e8 35 89 a5 ff       	call   807e440 <sprintf@plt>
 8625b0b:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8625b0f:	83 f0 01             	xor    $0x1,%eax
 8625b12:	84 c0                	test   %al,%al
 8625b14:	74 72                	je     8625b88 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x46e>
 8625b16:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625b19:	89 04 24             	mov    %eax,(%esp)
 8625b1c:	e8 6f 37 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625b21:	83 c0 0c             	add    $0xc,%eax
 8625b24:	89 04 24             	mov    %eax,(%esp)
 8625b27:	e8 c4 09 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625b2c:	89 c3                	mov    %eax,%ebx
 8625b2e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625b31:	89 04 24             	mov    %eax,(%esp)
 8625b34:	e8 57 37 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625b39:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8625b3d:	0f b7 f0             	movzwl %ax,%esi
 8625b40:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625b43:	89 04 24             	mov    %eax,(%esp)
 8625b46:	e8 45 37 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625b4b:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8625b4f:	0f b6 c0             	movzbl %al,%eax
 8625b52:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 8625b58:	89 54 24 10          	mov    %edx,0x10(%esp)
 8625b5c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8625b60:	89 74 24 08          	mov    %esi,0x8(%esp)
 8625b64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625b68:	8b 45 08             	mov    0x8(%ebp),%eax
 8625b6b:	89 04 24             	mov    %eax,(%esp)
 8625b6e:	e8 e1 00 00 00       	call   8625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>
 8625b73:	83 f0 01             	xor    $0x1,%eax
 8625b76:	84 c0                	test   %al,%al
 8625b78:	0f 84 88 00 00 00    	je     8625c06 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x4ec>
 8625b7e:	b8 00 00 00 00       	mov    $0x0,%eax
 8625b83:	e9 c0 00 00 00       	jmp    8625c48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x52e>
 8625b88:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625b8b:	89 04 24             	mov    %eax,(%esp)
 8625b8e:	e8 fd 36 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625b93:	8d 50 05             	lea    0x5(%eax),%edx
 8625b96:	8b 45 08             	mov    0x8(%ebp),%eax
 8625b99:	83 c0 64             	add    $0x64,%eax
 8625b9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625ba0:	89 04 24             	mov    %eax,(%esp)
 8625ba3:	e8 06 34 00 00       	call   8628fae <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEEixERS3_>
 8625ba8:	89 04 24             	mov    %eax,(%esp)
 8625bab:	e8 40 09 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625bb0:	89 c3                	mov    %eax,%ebx
 8625bb2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625bb5:	89 04 24             	mov    %eax,(%esp)
 8625bb8:	e8 d3 36 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625bbd:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8625bc1:	0f b7 f0             	movzwl %ax,%esi
 8625bc4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625bc7:	89 04 24             	mov    %eax,(%esp)
 8625bca:	e8 c1 36 00 00       	call   8629290 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEptEv>
 8625bcf:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8625bd3:	0f b6 c0             	movzbl %al,%eax
 8625bd6:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 8625bdc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8625be0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8625be4:	89 74 24 08          	mov    %esi,0x8(%esp)
 8625be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625bec:	8b 45 08             	mov    0x8(%ebp),%eax
 8625bef:	89 04 24             	mov    %eax,(%esp)
 8625bf2:	e8 5d 00 00 00       	call   8625c54 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_>
 8625bf7:	83 f0 01             	xor    $0x1,%eax
 8625bfa:	84 c0                	test   %al,%al
 8625bfc:	74 08                	je     8625c06 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x4ec>
 8625bfe:	b8 00 00 00 00       	mov    $0x0,%eax
 8625c03:	eb 43                	jmp    8625c48 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x52e>
 8625c05:	90                   	nop
 8625c06:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625c09:	89 04 24             	mov    %eax,(%esp)
 8625c0c:	e8 61 36 00 00       	call   8629272 <_ZNSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEppEv>
 8625c11:	8b 45 08             	mov    0x8(%ebp),%eax
 8625c14:	8d 50 1c             	lea    0x1c(%eax),%edx
 8625c17:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8625c1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625c1e:	89 04 24             	mov    %eax,(%esp)
 8625c21:	e8 12 36 00 00       	call   8629238 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEE3endEv>
 8625c26:	83 ec 04             	sub    $0x4,%esp
 8625c29:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8625c2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625c30:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625c33:	89 04 24             	mov    %eax,(%esp)
 8625c36:	e8 23 36 00 00       	call   862925e <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsN11sync_script11CSyncScript9SITEMTYPEEEEneERKS6_>
 8625c3b:	84 c0                	test   %al,%al
 8625c3d:	0f 85 cd fd ff ff    	jne    8625a10 <_ZN11sync_script11CSyncScript29insert_item_info_master_to_dbEv+0x2f6>
 8625c43:	b8 01 00 00 00       	mov    $0x1,%eax
 8625c48:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8625c4b:	83 c4 00             	add    $0x0,%esp
 8625c4e:	5b                   	pop    %ebx
 8625c4f:	5e                   	pop    %esi
 8625c50:	5f                   	pop    %edi
 8625c51:	5d                   	pop    %ebp
 8625c52:	c3                   	ret
 8625c53:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_item_info_master_to_db @ 0x862571a

/* sync_script::CSyncScript::insert_item_info_master_to_db() */

undefined4 __thiscall sync_script::CSyncScript::insert_item_info_master_to_db(CSyncScript *this)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  string *psVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  char local_108 [100];
  char local_a4 [100];
  __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
  local_40 [4];
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_3c [4];
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_38 [4];
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_34 [4];
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_30 [4];
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_2c [4];
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  local_28 [4];
  __normal_iterator local_24 [7];
  char local_1d;
  
  if (*this == (CSyncScript)0x1) {
    pcVar7 = local_a4;
    for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    pcVar7 = local_108;
    for (iVar8 = 0x19; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + 4;
    }
    std::
    map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_34);
    while( true ) {
      std::
      map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_30);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator!=((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34,(_Rb_tree_iterator *)local_30);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      uVar4 = std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 100),(uchar *)(iVar8 + 9));
      uVar6 = std::string::c_str(psVar5);
      sprintf(local_108,"<%s>%s",uVar6,uVar4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      pcVar7 = (char *)std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      uVar1 = *(ushort *)(iVar8 + 0xc);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_34);
      cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 9),uVar1,pcVar7,local_108);
      if (cVar2 != '\x01') {
        return 0;
      }
      std::
      _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
      ::operator++((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                    *)local_34);
    }
    std::
    map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_38);
    while( true ) {
      std::
      map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_2c);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator!=((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38,(_Rb_tree_iterator *)local_2c);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      uVar4 = std::string::c_str((string *)(iVar8 + 0x10));
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 0x7c),(uchar *)(iVar8 + 10));
      uVar6 = std::string::c_str(psVar5);
      sprintf(local_a4,"%s%s",uVar6,uVar4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      psVar5 = (string *)
               std::
               map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
               ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                             *)(this + 100),(uchar *)(iVar8 + 9));
      uVar4 = std::string::c_str(psVar5);
      sprintf(local_108,"<%s>%s",uVar4,local_a4);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      uVar1 = *(ushort *)(iVar8 + 0xc);
      iVar8 = std::
              _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
              ::operator->((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                            *)local_38);
      cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 9),uVar1,local_a4,local_108);
      if (cVar2 != '\x01') {
        return 0;
      }
      std::
      _Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
      ::operator++((_Rb_tree_iterator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>
                    *)local_38);
    }
    local_1d = '\0';
    std::
    map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
    ::begin(local_3c);
    while( true ) {
      std::
      map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
      ::end(local_28);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
              operator!=((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                          *)local_3c,(_Rb_tree_iterator *)local_28);
      if (cVar2 == '\0') break;
      iVar8 = std::
              _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
              operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                          *)local_3c);
      if (*(char *)(iVar8 + 4) == '\x01') {
        local_1d = '\0';
        std::vector<unsigned_char,std::allocator<unsigned_char>>::begin();
        while( true ) {
          std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
          bVar3 = __gnu_cxx::operator!=(local_40,local_24);
          if (!bVar3) break;
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = *(char *)(iVar8 + 5);
          pcVar7 = (char *)__gnu_cxx::
                           __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
                           ::operator*(local_40);
          if (cVar2 == *pcVar7) {
            local_1d = '\x01';
            break;
          }
          __gnu_cxx::
          __normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>
          ::operator++(local_40);
        }
        iVar8 = std::
                _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                              *)local_3c);
        uVar4 = std::string::c_str((string *)(iVar8 + 0xc));
        iVar8 = std::
                _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                              *)local_3c);
        psVar5 = (string *)
                 std::
                 map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                 ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                               *)(this + 100),(uchar *)(iVar8 + 5));
        uVar6 = std::string::c_str(psVar5);
        sprintf(local_108,"<%s>%s",uVar6,uVar4);
        if (local_1d == '\x01') {
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          psVar5 = (string *)
                   std::
                   map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                   ::operator[]((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
                                 *)(this + 100),(uchar *)(iVar8 + 5));
          pcVar7 = (char *)std::string::c_str(psVar5);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          uVar1 = *(ushort *)(iVar8 + 8);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 5),uVar1,pcVar7,local_108);
          if (cVar2 != '\x01') {
            return 0;
          }
        }
        else {
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          pcVar7 = (char *)std::string::c_str((string *)(iVar8 + 0xc));
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          uVar1 = *(ushort *)(iVar8 + 8);
          iVar8 = std::
                  _Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  ::operator->((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                                *)local_3c);
          cVar2 = insert_one_item_info_master(this,*(uchar *)(iVar8 + 5),uVar1,pcVar7,local_108);
          if (cVar2 != '\x01') {
            return 0;
          }
        }
      }
      std::_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>::
      operator++((_Rb_tree_iterator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>
                  *)local_3c);
    }
  }
  return 1;
}

```

---

## insert_item_parts_set

```asm
// === 08622cdc sync_script::CSyncScript::insert_item_parts_set  [0x08622cdc-0x8622d91] ===
 8622cdc:	55                   	push   %ebp
 8622cdd:	89 e5                	mov    %esp,%ebp
 8622cdf:	57                   	push   %edi
 8622ce0:	56                   	push   %esi
 8622ce1:	53                   	push   %ebx
 8622ce2:	83 ec 3c             	sub    $0x3c,%esp
 8622ce5:	8b 45 08             	mov    0x8(%ebp),%eax
 8622ce8:	0f b6 00             	movzbl (%eax),%eax
 8622ceb:	83 f0 01             	xor    $0x1,%eax
 8622cee:	84 c0                	test   %al,%al
 8622cf0:	74 0a                	je     8622cfc <_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece+0x20>
 8622cf2:	b8 01 00 00 00       	mov    $0x1,%eax
 8622cf7:	e9 8d 00 00 00       	jmp    8622d89 <_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece+0xad>
 8622cfc:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622d01:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622d08:	00 
 8622d09:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622d10:	00 
 8622d11:	89 04 24             	mov    %eax,(%esp)
 8622d14:	e8 25 25 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622d19:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8622d1c:	8b 45 10             	mov    0x10(%ebp),%eax
 8622d1f:	8b 78 0c             	mov    0xc(%eax),%edi
 8622d22:	8b 45 10             	mov    0x10(%ebp),%eax
 8622d25:	8b 70 08             	mov    0x8(%eax),%esi
 8622d28:	8b 45 10             	mov    0x10(%ebp),%eax
 8622d2b:	8b 58 04             	mov    0x4(%eax),%ebx
 8622d2e:	8b 45 10             	mov    0x10(%ebp),%eax
 8622d31:	89 04 24             	mov    %eax,(%esp)
 8622d34:	e8 b7 37 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622d39:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8622d3d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8622d41:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8622d45:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8622d49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622d4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8622d50:	c7 44 24 04 24 3e ce 	movl   $0x8ce3e24,0x4(%esp)
 8622d57:	08 
 8622d58:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622d5b:	89 04 24             	mov    %eax,(%esp)
 8622d5e:	e8 5d 14 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622d63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622d6a:	00 
 8622d6b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622d6e:	89 04 24             	mov    %eax,(%esp)
 8622d71:	e8 b0 15 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622d76:	83 f0 01             	xor    $0x1,%eax
 8622d79:	84 c0                	test   %al,%al
 8622d7b:	74 07                	je     8622d84 <_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece+0xa8>
 8622d7d:	b8 00 00 00 00       	mov    $0x0,%eax
 8622d82:	eb 05                	jmp    8622d89 <_ZN11sync_script11CSyncScript21insert_item_parts_setEiR23STEquipmentPartSetPiece+0xad>
 8622d84:	b8 01 00 00 00       	mov    $0x1,%eax
 8622d89:	83 c4 3c             	add    $0x3c,%esp
 8622d8c:	5b                   	pop    %ebx
 8622d8d:	5e                   	pop    %esi
 8622d8e:	5f                   	pop    %edi
 8622d8f:	5d                   	pop    %ebp
 8622d90:	c3                   	ret
 8622d91:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_item_parts_set @ 0x8622cdc

/* sync_script::CSyncScript::insert_item_parts_set(int, STEquipmentPartSetPiece&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_item_parts_set
          (CSyncScript *this,int param_1,STEquipmentPartSetPiece *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  MySQL *this_00;
  undefined4 uVar5;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    uVar4 = *(undefined4 *)(param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 8);
    uVar2 = *(undefined4 *)(param_2 + 4);
    uVar5 = std::string::c_str((string *)param_2);
    MySQL::set_query(this_00,
                     "inSert into item_part_set(part_set_index, part_name, part_type, part_grade, part_rarity) values(%d, \'%s\',%d,%d,%d)"
                     ,param_1,uVar5,uVar2,uVar1,uVar4);
    cVar3 = MySQL::exec(this_00,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## insert_mapping_equip_info_to_db

```asm
// === 086267f0 sync_script::CSyncScript::insert_mapping_equip_info_to_db  [0x086267f0-0x862690b] ===
 86267f0:	55                   	push   %ebp
 86267f1:	89 e5                	mov    %esp,%ebp
 86267f3:	53                   	push   %ebx
 86267f4:	83 ec 24             	sub    $0x24,%esp
 86267f7:	8b 45 08             	mov    0x8(%ebp),%eax
 86267fa:	0f b6 00             	movzbl (%eax),%eax
 86267fd:	83 f0 01             	xor    $0x1,%eax
 8626800:	84 c0                	test   %al,%al
 8626802:	74 0a                	je     862680e <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x1e>
 8626804:	b8 01 00 00 00       	mov    $0x1,%eax
 8626809:	e9 f9 00 00 00       	jmp    8626907 <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x117>
 862680e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8626813:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862681a:	00 
 862681b:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8626822:	00 
 8626823:	89 04 24             	mov    %eax,(%esp)
 8626826:	e8 13 ea dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862682b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 862682e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8626831:	8b 55 0c             	mov    0xc(%ebp),%edx
 8626834:	89 54 24 04          	mov    %edx,0x4(%esp)
 8626838:	89 04 24             	mov    %eax,(%esp)
 862683b:	e8 60 b7 b2 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 8626840:	83 ec 04             	sub    $0x4,%esp
 8626843:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8626846:	8b 55 0c             	mov    0xc(%ebp),%edx
 8626849:	89 54 24 04          	mov    %edx,0x4(%esp)
 862684d:	89 04 24             	mov    %eax,(%esp)
 8626850:	e8 c5 6a aa ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8626855:	83 ec 04             	sub    $0x4,%esp
 8626858:	e9 8b 00 00 00       	jmp    86268e8 <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xf8>
 862685d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8626860:	89 04 24             	mov    %eax,(%esp)
 8626863:	e8 d8 6a aa ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8626868:	8b 40 04             	mov    0x4(%eax),%eax
 862686b:	85 c0                	test   %eax,%eax
 862686d:	0f 95 c0             	setne  %al
 8626870:	84 c0                	test   %al,%al
 8626872:	74 57                	je     86268cb <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xdb>
 8626874:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8626877:	89 04 24             	mov    %eax,(%esp)
 862687a:	e8 c1 6a aa ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 862687f:	8b 18                	mov    (%eax),%ebx
 8626881:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8626884:	89 04 24             	mov    %eax,(%esp)
 8626887:	e8 b4 6a aa ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 862688c:	8b 40 04             	mov    0x4(%eax),%eax
 862688f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8626893:	89 44 24 08          	mov    %eax,0x8(%esp)
 8626897:	c7 44 24 04 d4 48 ce 	movl   $0x8ce48d4,0x4(%esp)
 862689e:	08 
 862689f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86268a2:	89 04 24             	mov    %eax,(%esp)
 86268a5:	e8 16 d9 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86268aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86268b1:	00 
 86268b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86268b5:	89 04 24             	mov    %eax,(%esp)
 86268b8:	e8 69 da dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 86268bd:	83 f0 01             	xor    $0x1,%eax
 86268c0:	84 c0                	test   %al,%al
 86268c2:	74 07                	je     86268cb <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xdb>
 86268c4:	b8 00 00 00 00       	mov    $0x0,%eax
 86268c9:	eb 3c                	jmp    8626907 <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x117>
 86268cb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86268ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86268d5:	00 
 86268d6:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86268d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86268dd:	89 04 24             	mov    %eax,(%esp)
 86268e0:	e8 1f 24 b9 ff       	call   81b8d04 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEi>
 86268e5:	83 ec 04             	sub    $0x4,%esp
 86268e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86268eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86268ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86268f2:	89 04 24             	mov    %eax,(%esp)
 86268f5:	e8 ce 3a ab ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 86268fa:	84 c0                	test   %al,%al
 86268fc:	0f 85 5b ff ff ff    	jne    862685d <_ZN11sync_script11CSyncScript31insert_mapping_equip_info_to_dbERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x6d>
 8626902:	b8 01 00 00 00       	mov    $0x1,%eax
 8626907:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 862690a:	c9                   	leave
 862690b:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_mapping_equip_info_to_db @ 0x86267f0

/* sync_script::CSyncScript::insert_mapping_equip_info_to_db(std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

undefined4 sync_script::CSyncScript::insert_mapping_equip_info_to_db(map *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  MySQL *local_10;
  
  if (*param_1 == (map)0x1) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_18);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c);
    while (cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                             ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18,
                              (_Rb_tree_iterator *)local_1c), cVar2 != '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
      if (*(int *)(iVar3 + 4) != 0) {
        puVar4 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                           ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
        uVar1 = *puVar4;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_18);
        MySQL::set_query(local_10,
                         "inSert into equip_mapping_info(equip_idx, mapping_idx) values(%d, %d)",
                         *(undefined4 *)(iVar3 + 4),uVar1);
        cVar2 = MySQL::exec(local_10,true);
        if (cVar2 != '\x01') {
          return 0;
        }
      }
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++(local_14,(int)local_18);
    }
  }
  return 1;
}

```

---

## insert_monster_info_to_db

```asm
// === 08626160 sync_script::CSyncScript::insert_monster_info_to_db  [0x08626160-0x862630d] ===
 8626160:	55                   	push   %ebp
 8626161:	89 e5                	mov    %esp,%ebp
 8626163:	57                   	push   %edi
 8626164:	56                   	push   %esi
 8626165:	53                   	push   %ebx
 8626166:	81 ec 4c 04 00 00    	sub    $0x44c,%esp
 862616c:	8b 45 08             	mov    0x8(%ebp),%eax
 862616f:	0f b6 00             	movzbl (%eax),%eax
 8626172:	83 f0 01             	xor    $0x1,%eax
 8626175:	84 c0                	test   %al,%al
 8626177:	74 0a                	je     8626183 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x23>
 8626179:	b8 01 00 00 00       	mov    $0x1,%eax
 862617e:	e9 7f 01 00 00       	jmp    8626302 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x1a2>
 8626183:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8626188:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862618f:	00 
 8626190:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8626197:	00 
 8626198:	89 04 24             	mov    %eax,(%esp)
 862619b:	e8 9e f0 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86261a0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86261a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86261a6:	8b 00                	mov    (%eax),%eax
 86261a8:	85 c0                	test   %eax,%eax
 86261aa:	74 19                	je     86261c5 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x65>
 86261ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 86261af:	83 c0 04             	add    $0x4,%eax
 86261b2:	89 04 24             	mov    %eax,(%esp)
 86261b5:	e8 b6 04 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 86261ba:	85 c0                	test   %eax,%eax
 86261bc:	74 07                	je     86261c5 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x65>
 86261be:	b8 01 00 00 00       	mov    $0x1,%eax
 86261c3:	eb 05                	jmp    86261ca <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x6a>
 86261c5:	b8 00 00 00 00       	mov    $0x0,%eax
 86261ca:	84 c0                	test   %al,%al
 86261cc:	0f 84 2b 01 00 00    	je     86262fd <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x19d>
 86261d2:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 86261d9:	00 
 86261da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86261e1:	00 
 86261e2:	c7 04 24 00 37 47 09 	movl   $0x9473700,(%esp)
 86261e9:	e8 d2 7a a5 ff       	call   807dcc0 <memset@plt>
 86261ee:	8d 9d d4 fb ff ff    	lea    -0x42c(%ebp),%ebx
 86261f4:	b8 00 00 00 00       	mov    $0x0,%eax
 86261f9:	ba 00 01 00 00       	mov    $0x100,%edx
 86261fe:	89 df                	mov    %ebx,%edi
 8626200:	89 d1                	mov    %edx,%ecx
 8626202:	f3 ab                	rep stos %eax,%es:(%edi)
 8626204:	8b 45 0c             	mov    0xc(%ebp),%eax
 8626207:	83 c0 04             	add    $0x4,%eax
 862620a:	89 04 24             	mov    %eax,(%esp)
 862620d:	e8 de 02 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626212:	8d 95 d4 fb ff ff    	lea    -0x42c(%ebp),%edx
 8626218:	89 54 24 04          	mov    %edx,0x4(%esp)
 862621c:	89 04 24             	mov    %eax,(%esp)
 862621f:	e8 e4 2b ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8626224:	83 f0 01             	xor    $0x1,%eax
 8626227:	84 c0                	test   %al,%al
 8626229:	74 70                	je     862629b <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x13b>
 862622b:	8b 45 0c             	mov    0xc(%ebp),%eax
 862622e:	83 c0 04             	add    $0x4,%eax
 8626231:	89 04 24             	mov    %eax,(%esp)
 8626234:	e8 b7 02 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626239:	89 c7                	mov    %eax,%edi
 862623b:	e8 a0 2b ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8626240:	89 c6                	mov    %eax,%esi
 8626242:	e8 85 2b ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8626247:	89 c3                	mov    %eax,%ebx
 8626249:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8626250:	00 
 8626251:	c7 44 24 08 63 0b 00 	movl   $0xb63,0x8(%esp)
 8626258:	00 
 8626259:	c7 44 24 04 40 56 ce 	movl   $0x8ce5640,0x4(%esp)
 8626260:	08 
 8626261:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8626264:	89 04 24             	mov    %eax,(%esp)
 8626267:	e8 ac 94 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 862626c:	c7 44 24 18 63 0b 00 	movl   $0xb63,0x18(%esp)
 8626273:	00 
 8626274:	c7 44 24 14 40 56 ce 	movl   $0x8ce5640,0x14(%esp)
 862627b:	08 
 862627c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8626280:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8626284:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8626288:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 862628f:	08 
 8626290:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8626293:	89 04 24             	mov    %eax,(%esp)
 8626296:	e8 ed 94 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 862629b:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 86262a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 86262a5:	c7 44 24 04 00 37 47 	movl   $0x9473700,0x4(%esp)
 86262ac:	09 
 86262ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86262b0:	89 04 24             	mov    %eax,(%esp)
 86262b3:	e8 f2 e5 dc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 86262b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86262bb:	8b 00                	mov    (%eax),%eax
 86262bd:	c7 44 24 0c 00 37 47 	movl   $0x9473700,0xc(%esp)
 86262c4:	09 
 86262c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 86262c9:	c7 44 24 04 ac 47 ce 	movl   $0x8ce47ac,0x4(%esp)
 86262d0:	08 
 86262d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86262d4:	89 04 24             	mov    %eax,(%esp)
 86262d7:	e8 e4 de dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86262dc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86262e3:	00 
 86262e4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86262e7:	89 04 24             	mov    %eax,(%esp)
 86262ea:	e8 37 e0 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 86262ef:	83 f0 01             	xor    $0x1,%eax
 86262f2:	84 c0                	test   %al,%al
 86262f4:	74 07                	je     86262fd <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x19d>
 86262f6:	b8 00 00 00 00       	mov    $0x0,%eax
 86262fb:	eb 05                	jmp    8626302 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript+0x1a2>
 86262fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8626302:	81 c4 4c 04 00 00    	add    $0x44c,%esp
 8626308:	5b                   	pop    %ebx
 8626309:	5e                   	pop    %esi
 862630a:	5f                   	pop    %edi
 862630b:	5d                   	pop    %ebp
 862630c:	c3                   	ret
 862630d:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_monster_info_to_db @ 0x8626160

/* sync_script::CSyncScript::insert_monster_info_to_db(STMonsterScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_monster_info_to_db(CSyncScript *this,STMonsterScript *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_430 [1024];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar8 = 0;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  if ((*(int *)param_1 == 0) || (iVar3 = std::string::length((string *)(param_1 + 4)), iVar3 == 0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    memset(insert_monster_info_to_db(STMonsterScript_const&)::monster_name,0,0xf0);
    pcVar4 = local_430;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar2 = CodePage::script2Database(pcVar4,local_430);
    if (cVar2 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_monster_info_to_db(const STMonsterScript&)"
                         ,0xb63,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_monster_info_to_db(const STMonsterScript&)",
                 0xb63);
    }
    MySQL::escape_string
              (local_20,insert_monster_info_to_db(STMonsterScript_const&)::monster_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_monster_info(idx, mon_name_kr) values(%d, \'%s\')",
                     *(undefined4 *)param_1,
                     insert_monster_info_to_db(STMonsterScript_const&)::monster_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## insert_old_equip_info_to_db

```asm
// === 08624d1a sync_script::CSyncScript::insert_old_equip_info_to_db  [0x08624d1a-0x8625063] ===
 8624d1a:	55                   	push   %ebp
 8624d1b:	89 e5                	mov    %esp,%ebp
 8624d1d:	57                   	push   %edi
 8624d1e:	56                   	push   %esi
 8624d1f:	53                   	push   %ebx
 8624d20:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 8624d26:	8b 45 08             	mov    0x8(%ebp),%eax
 8624d29:	0f b6 00             	movzbl (%eax),%eax
 8624d2c:	83 f0 01             	xor    $0x1,%eax
 8624d2f:	84 c0                	test   %al,%al
 8624d31:	74 0a                	je     8624d3d <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x23>
 8624d33:	b8 01 00 00 00       	mov    $0x1,%eax
 8624d38:	e9 1b 03 00 00       	jmp    8625058 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x33e>
 8624d3d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8624d42:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8624d49:	00 
 8624d4a:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8624d51:	00 
 8624d52:	89 04 24             	mov    %eax,(%esp)
 8624d55:	e8 e4 04 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8624d5a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8624d5d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8624d60:	c7 44 24 04 a0 00 50 	movl   $0x95000a0,0x4(%esp)
 8624d67:	09 
 8624d68:	89 04 24             	mov    %eax,(%esp)
 8624d6b:	e8 9c 41 00 00       	call   8628f0c <_ZNSt3mapIj19STEquipmentStatInfoSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 8624d70:	83 ec 04             	sub    $0x4,%esp
 8624d73:	e9 ab 02 00 00       	jmp    8625023 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x309>
 8624d78:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8624d7b:	89 04 24             	mov    %eax,(%esp)
 8624d7e:	e8 07 42 00 00       	call   8628f8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKj19STEquipmentStatInfoEEptEv>
 8624d83:	83 c0 04             	add    $0x4,%eax
 8624d86:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8624d89:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624d8c:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8624d92:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8624d98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624d9b:	8b 40 7c             	mov    0x7c(%eax),%eax
 8624d9e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8624da4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624da7:	8b 40 78             	mov    0x78(%eax),%eax
 8624daa:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8624db0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624db3:	8b 40 74             	mov    0x74(%eax),%eax
 8624db6:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8624dbc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624dbf:	8b 40 70             	mov    0x70(%eax),%eax
 8624dc2:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8624dc8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624dcb:	8b 40 6c             	mov    0x6c(%eax),%eax
 8624dce:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8624dd4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624dd7:	8b 40 68             	mov    0x68(%eax),%eax
 8624dda:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8624de0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624de3:	8b 40 64             	mov    0x64(%eax),%eax
 8624de6:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8624dec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624def:	8b 40 60             	mov    0x60(%eax),%eax
 8624df2:	89 45 80             	mov    %eax,-0x80(%ebp)
 8624df5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624df8:	8b 40 5c             	mov    0x5c(%eax),%eax
 8624dfb:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8624dfe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e01:	8b 40 58             	mov    0x58(%eax),%eax
 8624e04:	89 45 88             	mov    %eax,-0x78(%ebp)
 8624e07:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e0a:	8b 40 54             	mov    0x54(%eax),%eax
 8624e0d:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8624e10:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e13:	8b 40 50             	mov    0x50(%eax),%eax
 8624e16:	89 45 90             	mov    %eax,-0x70(%ebp)
 8624e19:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e1c:	8b 40 4c             	mov    0x4c(%eax),%eax
 8624e1f:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8624e22:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e25:	8b 40 48             	mov    0x48(%eax),%eax
 8624e28:	89 45 98             	mov    %eax,-0x68(%ebp)
 8624e2b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e2e:	8b 40 44             	mov    0x44(%eax),%eax
 8624e31:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8624e34:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e37:	8b 40 40             	mov    0x40(%eax),%eax
 8624e3a:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8624e3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e40:	8b 40 3c             	mov    0x3c(%eax),%eax
 8624e43:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8624e46:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e49:	8b 40 38             	mov    0x38(%eax),%eax
 8624e4c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8624e4f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e52:	8b 40 34             	mov    0x34(%eax),%eax
 8624e55:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8624e58:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e5b:	8b 40 30             	mov    0x30(%eax),%eax
 8624e5e:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8624e61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e64:	8b 40 2c             	mov    0x2c(%eax),%eax
 8624e67:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8624e6a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e6d:	8b 40 28             	mov    0x28(%eax),%eax
 8624e70:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8624e73:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e76:	8b 40 24             	mov    0x24(%eax),%eax
 8624e79:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8624e7c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e7f:	8b 40 20             	mov    0x20(%eax),%eax
 8624e82:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8624e85:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e88:	8b 40 1c             	mov    0x1c(%eax),%eax
 8624e8b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8624e8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e91:	8b 40 18             	mov    0x18(%eax),%eax
 8624e94:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8624e97:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624e9a:	8b 40 14             	mov    0x14(%eax),%eax
 8624e9d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8624ea0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624ea3:	8b 40 10             	mov    0x10(%eax),%eax
 8624ea6:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8624ea9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624eac:	8b 40 0c             	mov    0xc(%eax),%eax
 8624eaf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8624eb2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624eb5:	8b 78 08             	mov    0x8(%eax),%edi
 8624eb8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624ebb:	8b 70 04             	mov    0x4(%eax),%esi
 8624ebe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8624ec1:	8b 18                	mov    (%eax),%ebx
 8624ec3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8624ec6:	89 04 24             	mov    %eax,(%esp)
 8624ec9:	e8 bc 40 00 00       	call   8628f8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKj19STEquipmentStatInfoEEptEv>
 8624ece:	8b 00                	mov    (%eax),%eax
 8624ed0:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 8624ed6:	89 94 24 8c 00 00 00 	mov    %edx,0x8c(%esp)
 8624edd:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 8624ee3:	89 94 24 88 00 00 00 	mov    %edx,0x88(%esp)
 8624eea:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8624ef0:	89 94 24 84 00 00 00 	mov    %edx,0x84(%esp)
 8624ef7:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8624efd:	89 94 24 80 00 00 00 	mov    %edx,0x80(%esp)
 8624f04:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 8624f0a:	89 54 24 7c          	mov    %edx,0x7c(%esp)
 8624f0e:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8624f14:	89 54 24 78          	mov    %edx,0x78(%esp)
 8624f18:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8624f1e:	89 54 24 74          	mov    %edx,0x74(%esp)
 8624f22:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8624f28:	89 54 24 70          	mov    %edx,0x70(%esp)
 8624f2c:	8b 55 80             	mov    -0x80(%ebp),%edx
 8624f2f:	89 54 24 6c          	mov    %edx,0x6c(%esp)
 8624f33:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8624f36:	89 54 24 68          	mov    %edx,0x68(%esp)
 8624f3a:	8b 55 88             	mov    -0x78(%ebp),%edx
 8624f3d:	89 54 24 64          	mov    %edx,0x64(%esp)
 8624f41:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8624f44:	89 54 24 60          	mov    %edx,0x60(%esp)
 8624f48:	8b 55 90             	mov    -0x70(%ebp),%edx
 8624f4b:	89 54 24 5c          	mov    %edx,0x5c(%esp)
 8624f4f:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8624f52:	89 54 24 58          	mov    %edx,0x58(%esp)
 8624f56:	8b 55 98             	mov    -0x68(%ebp),%edx
 8624f59:	89 54 24 54          	mov    %edx,0x54(%esp)
 8624f5d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8624f60:	89 54 24 50          	mov    %edx,0x50(%esp)
 8624f64:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8624f67:	89 54 24 4c          	mov    %edx,0x4c(%esp)
 8624f6b:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8624f6e:	89 54 24 48          	mov    %edx,0x48(%esp)
 8624f72:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8624f75:	89 54 24 44          	mov    %edx,0x44(%esp)
 8624f79:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8624f7c:	89 54 24 40          	mov    %edx,0x40(%esp)
 8624f80:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8624f83:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8624f87:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8624f8a:	89 54 24 38          	mov    %edx,0x38(%esp)
 8624f8e:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8624f91:	89 54 24 34          	mov    %edx,0x34(%esp)
 8624f95:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8624f98:	89 54 24 30          	mov    %edx,0x30(%esp)
 8624f9c:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8624f9f:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8624fa3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8624fa6:	89 54 24 28          	mov    %edx,0x28(%esp)
 8624faa:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8624fad:	89 54 24 24          	mov    %edx,0x24(%esp)
 8624fb1:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8624fb4:	89 54 24 20          	mov    %edx,0x20(%esp)
 8624fb8:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8624fbb:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8624fbf:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8624fc2:	89 54 24 18          	mov    %edx,0x18(%esp)
 8624fc6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8624fca:	89 74 24 10          	mov    %esi,0x10(%esp)
 8624fce:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8624fd2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8624fd6:	c7 44 24 04 bc 43 ce 	movl   $0x8ce43bc,0x4(%esp)
 8624fdd:	08 
 8624fde:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8624fe1:	89 04 24             	mov    %eax,(%esp)
 8624fe4:	e8 d7 f1 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8624fe9:	83 f0 01             	xor    $0x1,%eax
 8624fec:	84 c0                	test   %al,%al
 8624fee:	74 07                	je     8624ff7 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x2dd>
 8624ff0:	b8 00 00 00 00       	mov    $0x0,%eax
 8624ff5:	eb 61                	jmp    8625058 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x33e>
 8624ff7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624ffe:	00 
 8624fff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8625002:	89 04 24             	mov    %eax,(%esp)
 8625005:	e8 1c f3 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862500a:	83 f0 01             	xor    $0x1,%eax
 862500d:	84 c0                	test   %al,%al
 862500f:	74 07                	je     8625018 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x2fe>
 8625011:	b8 00 00 00 00       	mov    $0x0,%eax
 8625016:	eb 40                	jmp    8625058 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x33e>
 8625018:	8d 45 d8             	lea    -0x28(%ebp),%eax
 862501b:	89 04 24             	mov    %eax,(%esp)
 862501e:	e8 49 3f 00 00       	call   8628f6c <_ZNSt17_Rb_tree_iteratorISt4pairIKj19STEquipmentStatInfoEEppEv>
 8625023:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8625026:	c7 44 24 04 a0 00 50 	movl   $0x95000a0,0x4(%esp)
 862502d:	09 
 862502e:	89 04 24             	mov    %eax,(%esp)
 8625031:	e8 fc 3e 00 00       	call   8628f32 <_ZNSt3mapIj19STEquipmentStatInfoSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8625036:	83 ec 04             	sub    $0x4,%esp
 8625039:	8d 45 dc             	lea    -0x24(%ebp),%eax
 862503c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625040:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8625043:	89 04 24             	mov    %eax,(%esp)
 8625046:	e8 0d 3f 00 00       	call   8628f58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj19STEquipmentStatInfoEEneERKS4_>
 862504b:	84 c0                	test   %al,%al
 862504d:	0f 85 25 fd ff ff    	jne    8624d78 <_ZN11sync_script11CSyncScript27insert_old_equip_info_to_dbEv+0x5e>
 8625053:	b8 01 00 00 00       	mov    $0x1,%eax
 8625058:	8d 65 f4             	lea    -0xc(%ebp),%esp
 862505b:	83 c4 00             	add    $0x0,%esp
 862505e:	5b                   	pop    %ebx
 862505f:	5e                   	pop    %esi
 8625060:	5f                   	pop    %edi
 8625061:	5d                   	pop    %ebp
 8625062:	c3                   	ret
 8625063:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_old_equip_info_to_db @ 0x8624d1a

/* sync_script::CSyncScript::insert_old_equip_info_to_db() */

undefined4 __thiscall sync_script::CSyncScript::insert_old_equip_info_to_db(CSyncScript *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  char cVar34;
  int iVar35;
  undefined4 *puVar36;
  map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
  local_2c [4];
  map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
  local_28 [4];
  MySQL *local_24;
  undefined4 *local_20;
  
  if (*this == (CSyncScript)0x1) {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::
    map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
    ::begin(local_2c);
    while( true ) {
      std::
      map<unsigned_int,STEquipmentStatInfo,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STEquipmentStatInfo>>>
      ::end(local_28);
      cVar34 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator!=
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                          local_2c,(_Rb_tree_iterator *)local_28);
      if (cVar34 == '\0') break;
      iVar35 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                          local_2c);
      local_20 = (undefined4 *)(iVar35 + 4);
      uVar1 = *(undefined4 *)(iVar35 + 0x84);
      uVar2 = *(undefined4 *)(iVar35 + 0x80);
      uVar3 = *(undefined4 *)(iVar35 + 0x7c);
      uVar4 = *(undefined4 *)(iVar35 + 0x78);
      uVar5 = *(undefined4 *)(iVar35 + 0x74);
      uVar6 = *(undefined4 *)(iVar35 + 0x70);
      uVar7 = *(undefined4 *)(iVar35 + 0x6c);
      uVar8 = *(undefined4 *)(iVar35 + 0x68);
      uVar9 = *(undefined4 *)(iVar35 + 100);
      uVar10 = *(undefined4 *)(iVar35 + 0x60);
      uVar11 = *(undefined4 *)(iVar35 + 0x5c);
      uVar12 = *(undefined4 *)(iVar35 + 0x58);
      uVar13 = *(undefined4 *)(iVar35 + 0x54);
      uVar14 = *(undefined4 *)(iVar35 + 0x50);
      uVar15 = *(undefined4 *)(iVar35 + 0x4c);
      uVar16 = *(undefined4 *)(iVar35 + 0x48);
      uVar17 = *(undefined4 *)(iVar35 + 0x44);
      uVar18 = *(undefined4 *)(iVar35 + 0x40);
      uVar19 = *(undefined4 *)(iVar35 + 0x3c);
      uVar20 = *(undefined4 *)(iVar35 + 0x38);
      uVar21 = *(undefined4 *)(iVar35 + 0x34);
      uVar22 = *(undefined4 *)(iVar35 + 0x30);
      uVar23 = *(undefined4 *)(iVar35 + 0x2c);
      uVar24 = *(undefined4 *)(iVar35 + 0x28);
      uVar25 = *(undefined4 *)(iVar35 + 0x24);
      uVar26 = *(undefined4 *)(iVar35 + 0x20);
      uVar27 = *(undefined4 *)(iVar35 + 0x1c);
      uVar28 = *(undefined4 *)(iVar35 + 0x18);
      uVar29 = *(undefined4 *)(iVar35 + 0x14);
      uVar30 = *(undefined4 *)(iVar35 + 0x10);
      uVar31 = *(undefined4 *)(iVar35 + 0xc);
      uVar32 = *(undefined4 *)(iVar35 + 8);
      uVar33 = *local_20;
      puVar36 = (undefined4 *)
                std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)
                           local_2c);
      cVar34 = MySQL::set_query(local_24,
                                "inSert into dnf_old_equip_info(it_id, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all_elements, ref_slow, ref_freeze, ref_poison, ref_stun, ref_curse, ref_blind, ref_lightning, ref_stone, ref_sleep, ref_burn, ref_weapon_break, ref_bleeding, ref_pierce, ref_stuck, ref_confuse, ref_hold, ref_armor_break, ref_all_state) values(%d, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i)"
                                ,*puVar36,uVar33,uVar32,uVar31,uVar30,uVar29,uVar28,uVar27,uVar26,
                                uVar25,uVar24,uVar23,uVar22,uVar21,uVar20,uVar19,uVar18,uVar17,
                                uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,
                                uVar6,uVar5,uVar4,uVar3,uVar2,uVar1);
      if (cVar34 != '\x01') {
        return 0;
      }
      cVar34 = MySQL::exec(local_24,true);
      if (cVar34 != '\x01') {
        return 0;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,STEquipmentStatInfo>> *)local_2c);
    }
  }
  return 1;
}

```

---

## insert_one_item_info_master

```asm
// === 08625c54 sync_script::CSyncScript::insert_one_item_info_master  [0x08625c54-0x8625d95] ===
 8625c54:	55                   	push   %ebp
 8625c55:	89 e5                	mov    %esp,%ebp
 8625c57:	57                   	push   %edi
 8625c58:	53                   	push   %ebx
 8625c59:	81 ec 10 01 00 00    	sub    $0x110,%esp
 8625c5f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8625c62:	8b 45 10             	mov    0x10(%ebp),%eax
 8625c65:	88 95 14 ff ff ff    	mov    %dl,-0xec(%ebp)
 8625c6b:	66 89 85 10 ff ff ff 	mov    %ax,-0xf0(%ebp)
 8625c72:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8625c77:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8625c7e:	00 
 8625c7f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8625c86:	00 
 8625c87:	89 04 24             	mov    %eax,(%esp)
 8625c8a:	e8 af f5 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8625c8f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8625c92:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8625c99:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8625ca0:	8b 45 14             	mov    0x14(%ebp),%eax
 8625ca3:	89 04 24             	mov    %eax,(%esp)
 8625ca6:	e8 ed 91 4b 00       	call   8adee98 <_Z6toMbcsPKc>
 8625cab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8625cae:	8b 45 18             	mov    0x18(%ebp),%eax
 8625cb1:	89 04 24             	mov    %eax,(%esp)
 8625cb4:	e8 df 91 4b 00       	call   8adee98 <_Z6toMbcsPKc>
 8625cb9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8625cbc:	8d 9d 20 ff ff ff    	lea    -0xe0(%ebp),%ebx
 8625cc2:	b8 00 00 00 00       	mov    $0x0,%eax
 8625cc7:	ba 32 00 00 00       	mov    $0x32,%edx
 8625ccc:	89 df                	mov    %ebx,%edi
 8625cce:	89 d1                	mov    %edx,%ecx
 8625cd0:	f3 ab                	rep stos %eax,%es:(%edi)
 8625cd2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8625cd9:	eb 2f                	jmp    8625d0a <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0xb6>
 8625cdb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8625cde:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8625ce4:	6b c0 64             	imul   $0x64,%eax,%eax
 8625ce7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8625cea:	89 c2                	mov    %eax,%edx
 8625cec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8625cef:	8b 44 85 e8          	mov    -0x18(%ebp,%eax,4),%eax
 8625cf3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8625cf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625cfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8625cfe:	89 04 24             	mov    %eax,(%esp)
 8625d01:	e8 41 6f ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8625d06:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8625d0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8625d0d:	83 f8 01             	cmp    $0x1,%eax
 8625d10:	0f 96 c0             	setbe  %al
 8625d13:	84 c0                	test   %al,%al
 8625d15:	75 c4                	jne    8625cdb <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0x87>
 8625d17:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8625d1d:	8d 58 64             	lea    0x64(%eax),%ebx
 8625d20:	8d 8d 20 ff ff ff    	lea    -0xe0(%ebp),%ecx
 8625d26:	0f b7 95 10 ff ff ff 	movzwl -0xf0(%ebp),%edx
 8625d2d:	0f b6 85 14 ff ff ff 	movzbl -0xec(%ebp),%eax
 8625d34:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8625d38:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8625d3c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8625d40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8625d44:	c7 44 24 04 90 46 ce 	movl   $0x8ce4690,0x4(%esp)
 8625d4b:	08 
 8625d4c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8625d4f:	89 04 24             	mov    %eax,(%esp)
 8625d52:	e8 69 e4 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8625d57:	83 f0 01             	xor    $0x1,%eax
 8625d5a:	84 c0                	test   %al,%al
 8625d5c:	74 07                	je     8625d65 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0x111>
 8625d5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8625d63:	eb 26                	jmp    8625d8b <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0x137>
 8625d65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8625d6c:	00 
 8625d6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8625d70:	89 04 24             	mov    %eax,(%esp)
 8625d73:	e8 ae e5 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8625d78:	83 f0 01             	xor    $0x1,%eax
 8625d7b:	84 c0                	test   %al,%al
 8625d7d:	74 07                	je     8625d86 <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0x132>
 8625d7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8625d84:	eb 05                	jmp    8625d8b <_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_+0x137>
 8625d86:	b8 01 00 00 00       	mov    $0x1,%eax
 8625d8b:	81 c4 10 01 00 00    	add    $0x110,%esp
 8625d91:	5b                   	pop    %ebx
 8625d92:	5f                   	pop    %edi
 8625d93:	5d                   	pop    %ebp
 8625d94:	c3                   	ret
 8625d95:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_one_item_info_master @ 0x8625c54

/* sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*,
   char const*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_one_item_info_master
          (CSyncScript *this,uchar param_1,ushort param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_e4 [100];
  undefined1 local_80 [100];
  char *local_1c [2];
  MySQL *local_14;
  uint local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  local_1c[0] = (char *)0x0;
  local_1c[1] = (char *)0x0;
  local_1c[0] = toMbcs(param_3);
  local_1c[1] = toMbcs(param_4);
  pcVar4 = local_e4;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    GetEscapeString(local_14,local_1c[local_10],local_e4 + local_10 * 100);
  }
  cVar1 = MySQL::set_query(local_14,
                           "inSert into dnf_item_info_master(master_no, sub_no, name, master_explain) values(%u, %u, \'%s\', \'%s\')"
                           ,(uint)param_1,(uint)param_2,local_e4,local_80);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## insert_quest_category

```asm
// === 0862243a sync_script::CSyncScript::insert_quest_category  [0x0862243a-0x86225b5] ===
 862243a:	55                   	push   %ebp
 862243b:	89 e5                	mov    %esp,%ebp
 862243d:	57                   	push   %edi
 862243e:	56                   	push   %esi
 862243f:	53                   	push   %ebx
 8622440:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 8622446:	8b 45 08             	mov    0x8(%ebp),%eax
 8622449:	0f b6 00             	movzbl (%eax),%eax
 862244c:	83 f0 01             	xor    $0x1,%eax
 862244f:	84 c0                	test   %al,%al
 8622451:	74 0a                	je     862245d <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript+0x23>
 8622453:	b8 01 00 00 00       	mov    $0x1,%eax
 8622458:	e9 4e 01 00 00       	jmp    86225ab <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript+0x171>
 862245d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622462:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622469:	00 
 862246a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8622471:	00 
 8622472:	89 04 24             	mov    %eax,(%esp)
 8622475:	e8 c4 2d dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862247a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 862247d:	8d 9d d4 fe ff ff    	lea    -0x12c(%ebp),%ebx
 8622483:	b8 00 00 00 00       	mov    $0x0,%eax
 8622488:	ba 40 00 00 00       	mov    $0x40,%edx
 862248d:	89 df                	mov    %ebx,%edi
 862248f:	89 d1                	mov    %edx,%ecx
 8622491:	f3 ab                	rep stos %eax,%es:(%edi)
 8622493:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622496:	83 c0 04             	add    $0x4,%eax
 8622499:	89 04 24             	mov    %eax,(%esp)
 862249c:	e8 4f 40 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86224a1:	8d 95 d4 fe ff ff    	lea    -0x12c(%ebp),%edx
 86224a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86224ab:	89 04 24             	mov    %eax,(%esp)
 86224ae:	e8 55 69 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 86224b3:	83 f0 01             	xor    $0x1,%eax
 86224b6:	84 c0                	test   %al,%al
 86224b8:	74 70                	je     862252a <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript+0xf0>
 86224ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 86224bd:	83 c0 04             	add    $0x4,%eax
 86224c0:	89 04 24             	mov    %eax,(%esp)
 86224c3:	e8 28 40 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86224c8:	89 c7                	mov    %eax,%edi
 86224ca:	e8 11 69 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 86224cf:	89 c6                	mov    %eax,%esi
 86224d1:	e8 f6 68 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 86224d6:	89 c3                	mov    %eax,%ebx
 86224d8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86224df:	00 
 86224e0:	c7 44 24 08 a4 06 00 	movl   $0x6a4,0x8(%esp)
 86224e7:	00 
 86224e8:	c7 44 24 04 c0 57 ce 	movl   $0x8ce57c0,0x4(%esp)
 86224ef:	08 
 86224f0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86224f3:	89 04 24             	mov    %eax,(%esp)
 86224f6:	e8 1d d2 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86224fb:	c7 44 24 18 a4 06 00 	movl   $0x6a4,0x18(%esp)
 8622502:	00 
 8622503:	c7 44 24 14 c0 57 ce 	movl   $0x8ce57c0,0x14(%esp)
 862250a:	08 
 862250b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 862250f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8622513:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8622517:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 862251e:	08 
 862251f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8622522:	89 04 24             	mov    %eax,(%esp)
 8622525:	e8 5e d2 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 862252a:	8d 9d d4 fd ff ff    	lea    -0x22c(%ebp),%ebx
 8622530:	b8 00 00 00 00       	mov    $0x0,%eax
 8622535:	ba 40 00 00 00       	mov    $0x40,%edx
 862253a:	89 df                	mov    %ebx,%edi
 862253c:	89 d1                	mov    %edx,%ecx
 862253e:	f3 ab                	rep stos %eax,%es:(%edi)
 8622540:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 8622546:	89 44 24 08          	mov    %eax,0x8(%esp)
 862254a:	8d 85 d4 fd ff ff    	lea    -0x22c(%ebp),%eax
 8622550:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622554:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622557:	89 04 24             	mov    %eax,(%esp)
 862255a:	e8 4b 23 dd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 862255f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622562:	8b 00                	mov    (%eax),%eax
 8622564:	8d 95 d4 fd ff ff    	lea    -0x22c(%ebp),%edx
 862256a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862256e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8622572:	c7 44 24 04 f8 3b ce 	movl   $0x8ce3bf8,0x4(%esp)
 8622579:	08 
 862257a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862257d:	89 04 24             	mov    %eax,(%esp)
 8622580:	e8 3b 1c dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622585:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862258c:	00 
 862258d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622590:	89 04 24             	mov    %eax,(%esp)
 8622593:	e8 8e 1d dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622598:	83 f0 01             	xor    $0x1,%eax
 862259b:	84 c0                	test   %al,%al
 862259d:	74 07                	je     86225a6 <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript+0x16c>
 862259f:	b8 00 00 00 00       	mov    $0x0,%eax
 86225a4:	eb 05                	jmp    86225ab <_ZN11sync_script11CSyncScript21insert_quest_categoryEP11QuestScript+0x171>
 86225a6:	b8 01 00 00 00       	mov    $0x1,%eax
 86225ab:	81 c4 4c 02 00 00    	add    $0x24c,%esp
 86225b1:	5b                   	pop    %ebx
 86225b2:	5e                   	pop    %esi
 86225b3:	5f                   	pop    %edi
 86225b4:	5d                   	pop    %ebp
 86225b5:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_quest_category @ 0x862243a

/* sync_script::CSyncScript::insert_quest_category(QuestScript*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_quest_category(CSyncScript *this,QuestScript *param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  char local_230 [256];
  char local_130 [256];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar7 = 0;
  if (*this == (CSyncScript)0x1) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    pcVar3 = local_130;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar7 * -2 + 1) * 4;
    }
    pcVar3 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar3,local_130);
    if (cVar1 != '\x01') {
      uVar2 = std::string::c_str((string *)(param_1 + 4));
      uVar4 = CodePage::database();
      uVar5 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_quest_category(QuestScript*)",0x6a4,
                         5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar5,uVar4,uVar2,
                 "bool sync_script::CSyncScript::insert_quest_category(QuestScript*)",0x6a4);
    }
    pcVar3 = local_230;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar7 * -2 + 1) * 4;
    }
    MySQL::escape_string(local_20,local_230,local_130);
    MySQL::set_query(local_20,"inSert into quest_category(quest_idx, quest_name) values(%d, \'%s\')"
                     ,*(undefined4 *)param_1,local_230);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_random_option_ref

```asm
// === 08625ea2 sync_script::CSyncScript::insert_random_option_ref  [0x08625ea2-0x86260db] ===
 8625ea2:	55                   	push   %ebp
 8625ea3:	89 e5                	mov    %esp,%ebp
 8625ea5:	57                   	push   %edi
 8625ea6:	56                   	push   %esi
 8625ea7:	53                   	push   %ebx
 8625ea8:	81 ec 4c 04 00 00    	sub    $0x44c,%esp
 8625eae:	8b 45 08             	mov    0x8(%ebp),%eax
 8625eb1:	0f b6 00             	movzbl (%eax),%eax
 8625eb4:	83 f0 01             	xor    $0x1,%eax
 8625eb7:	84 c0                	test   %al,%al
 8625eb9:	74 0a                	je     8625ec5 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x23>
 8625ebb:	bb 01 00 00 00       	mov    $0x1,%ebx
 8625ec0:	e9 09 02 00 00       	jmp    86260ce <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x22c>
 8625ec5:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8625eca:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8625ed1:	00 
 8625ed2:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8625ed9:	00 
 8625eda:	89 04 24             	mov    %eax,(%esp)
 8625edd:	e8 5c f3 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8625ee2:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8625ee5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625ee8:	89 04 24             	mov    %eax,(%esp)
 8625eeb:	e8 e0 06 0e 00       	call   87065d0 <_ZNSsC1Ev>
 8625ef0:	c6 45 e6 01          	movb   $0x1,-0x1a(%ebp)
 8625ef4:	e9 99 01 00 00       	jmp    8626092 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x1f0>
 8625ef9:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8625efd:	e9 7d 01 00 00       	jmp    862607f <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x1dd>
 8625f02:	0f b6 75 e7          	movzbl -0x19(%ebp),%esi
 8625f06:	0f b6 5d e6          	movzbl -0x1a(%ebp),%ebx
 8625f0a:	e8 8c 62 aa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8625f0f:	8d 90 10 4e 00 00    	lea    0x4e10(%eax),%edx
 8625f15:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625f18:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8625f1f:	00 
 8625f20:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8625f24:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8625f28:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625f2c:	89 04 24             	mov    %eax,(%esp)
 8625f2f:	e8 22 da 44 00       	call   8a73956 <_ZN18RandomOptionScript9getPrefixEiib>
 8625f34:	83 ec 04             	sub    $0x4,%esp
 8625f37:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625f3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8625f3e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625f41:	89 04 24             	mov    %eax,(%esp)
 8625f44:	e8 b7 1d 0e 00       	call   8707d00 <_ZNSsaSERKSs>
 8625f49:	eb 18                	jmp    8625f63 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0xc1>
 8625f4b:	89 d3                	mov    %edx,%ebx
 8625f4d:	89 c6                	mov    %eax,%esi
 8625f4f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625f52:	89 04 24             	mov    %eax,(%esp)
 8625f55:	e8 86 1c 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625f5a:	89 f0                	mov    %esi,%eax
 8625f5c:	89 da                	mov    %ebx,%edx
 8625f5e:	e9 45 01 00 00       	jmp    86260a8 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x206>
 8625f63:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8625f66:	89 04 24             	mov    %eax,(%esp)
 8625f69:	e8 72 1c 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8625f6e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625f71:	89 04 24             	mov    %eax,(%esp)
 8625f74:	e8 f7 06 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 8625f79:	85 c0                	test   %eax,%eax
 8625f7b:	0f 95 c0             	setne  %al
 8625f7e:	84 c0                	test   %al,%al
 8625f80:	0f 84 f5 00 00 00    	je     862607b <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x1d9>
 8625f86:	8d 9d c8 fb ff ff    	lea    -0x438(%ebp),%ebx
 8625f8c:	b8 00 00 00 00       	mov    $0x0,%eax
 8625f91:	ba 00 01 00 00       	mov    $0x100,%edx
 8625f96:	89 df                	mov    %ebx,%edi
 8625f98:	89 d1                	mov    %edx,%ecx
 8625f9a:	f3 ab                	rep stos %eax,%es:(%edi)
 8625f9c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625f9f:	89 04 24             	mov    %eax,(%esp)
 8625fa2:	e8 49 05 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625fa7:	8d 95 c8 fb ff ff    	lea    -0x438(%ebp),%edx
 8625fad:	89 54 24 04          	mov    %edx,0x4(%esp)
 8625fb1:	89 04 24             	mov    %eax,(%esp)
 8625fb4:	e8 4f 2e ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8625fb9:	83 f0 01             	xor    $0x1,%eax
 8625fbc:	84 c0                	test   %al,%al
 8625fbe:	74 6d                	je     862602d <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x18b>
 8625fc0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8625fc3:	89 04 24             	mov    %eax,(%esp)
 8625fc6:	e8 25 05 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8625fcb:	89 c7                	mov    %eax,%edi
 8625fcd:	e8 0e 2e ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8625fd2:	89 c6                	mov    %eax,%esi
 8625fd4:	e8 f3 2d ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8625fd9:	89 c3                	mov    %eax,%ebx
 8625fdb:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8625fe2:	00 
 8625fe3:	c7 44 24 08 31 0b 00 	movl   $0xb31,0x8(%esp)
 8625fea:	00 
 8625feb:	c7 44 24 04 a0 56 ce 	movl   $0x8ce56a0,0x4(%esp)
 8625ff2:	08 
 8625ff3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8625ff6:	89 04 24             	mov    %eax,(%esp)
 8625ff9:	e8 1a 97 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8625ffe:	c7 44 24 18 31 0b 00 	movl   $0xb31,0x18(%esp)
 8626005:	00 
 8626006:	c7 44 24 14 a0 56 ce 	movl   $0x8ce56a0,0x14(%esp)
 862600d:	08 
 862600e:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8626012:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8626016:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862601a:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8626021:	08 
 8626022:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8626025:	89 04 24             	mov    %eax,(%esp)
 8626028:	e8 5b 97 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 862602d:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 8626031:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 8626035:	8d 8d c8 fb ff ff    	lea    -0x438(%ebp),%ecx
 862603b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 862603f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8626043:	89 44 24 08          	mov    %eax,0x8(%esp)
 8626047:	c7 44 24 04 1c 47 ce 	movl   $0x8ce471c,0x4(%esp)
 862604e:	08 
 862604f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8626052:	89 04 24             	mov    %eax,(%esp)
 8626055:	e8 66 e1 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862605a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8626061:	00 
 8626062:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8626065:	89 04 24             	mov    %eax,(%esp)
 8626068:	e8 b9 e2 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862606d:	83 f0 01             	xor    $0x1,%eax
 8626070:	84 c0                	test   %al,%al
 8626072:	74 07                	je     862607b <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x1d9>
 8626074:	bb 00 00 00 00       	mov    $0x0,%ebx
 8626079:	eb 48                	jmp    86260c3 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x221>
 862607b:	80 45 e7 01          	addb   $0x1,-0x19(%ebp)
 862607f:	80 7d e7 64          	cmpb   $0x64,-0x19(%ebp)
 8626083:	0f 96 c0             	setbe  %al
 8626086:	84 c0                	test   %al,%al
 8626088:	0f 85 74 fe ff ff    	jne    8625f02 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x60>
 862608e:	80 45 e6 01          	addb   $0x1,-0x1a(%ebp)
 8626092:	80 7d e6 ff          	cmpb   $0xff,-0x1a(%ebp)
 8626096:	0f 95 c0             	setne  %al
 8626099:	84 c0                	test   %al,%al
 862609b:	0f 85 58 fe ff ff    	jne    8625ef9 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x57>
 86260a1:	bb 01 00 00 00       	mov    $0x1,%ebx
 86260a6:	eb 1b                	jmp    86260c3 <_ZN11sync_script11CSyncScript24insert_random_option_refEv+0x221>
 86260a8:	89 d3                	mov    %edx,%ebx
 86260aa:	89 c6                	mov    %eax,%esi
 86260ac:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86260af:	89 04 24             	mov    %eax,(%esp)
 86260b2:	e8 29 1b 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86260b7:	89 f0                	mov    %esi,%eax
 86260b9:	89 da                	mov    %ebx,%edx
 86260bb:	89 04 24             	mov    %eax,(%esp)
 86260be:	e8 8d d6 4b 00       	call   8ae3750 <_Unwind_Resume>
 86260c3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86260c6:	89 04 24             	mov    %eax,(%esp)
 86260c9:	e8 12 1b 0e 00       	call   8707be0 <_ZNSsD1Ev>
 86260ce:	89 d8                	mov    %ebx,%eax
 86260d0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86260d3:	83 c4 00             	add    $0x0,%esp
 86260d6:	5b                   	pop    %ebx
 86260d7:	5e                   	pop    %esi
 86260d8:	5f                   	pop    %edi
 86260d9:	5d                   	pop    %ebp
 86260da:	c3                   	ret
 86260db:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_random_option_ref @ 0x8625ea2

/* sync_script::CSyncScript::insert_random_option_ref() */

undefined4 __thiscall sync_script::CSyncScript::insert_random_option_ref(CSyncScript *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_43c [1024];
  string local_3c [4];
  string local_38 [4];
  cMyTrace local_34 [16];
  MySQL *local_24;
  bool local_1e;
  byte local_1d;
  
  bVar8 = 0;
  if (*this == (CSyncScript)0x1) {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::string::string(local_3c);
    for (local_1e = true; local_1e != true; local_1e = (bool)(local_1e + 1)) {
      for (local_1d = 0; bVar1 = local_1e, local_1d < 0x65; local_1d = local_1d + 1) {
                    /* try { // try from 08625f0a to 08625f33 has its CatchHandler @ 086260a8 */
        iVar3 = G_CDataManager();
        RandomOptionScript::getPrefix((int)local_38,iVar3 + 0x4e10,bVar1);
                    /* try { // try from 08625f44 to 08625f48 has its CatchHandler @ 08625f4b */
        std::string::operator=(local_3c,local_38);
                    /* try { // try from 08625f69 to 0862606c has its CatchHandler @ 086260a8 */
        std::string::~string(local_38);
        iVar3 = std::string::length(local_3c);
        if (iVar3 != 0) {
          pcVar4 = local_43c;
          for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
            pcVar4[0] = '\0';
            pcVar4[1] = '\0';
            pcVar4[2] = '\0';
            pcVar4[3] = '\0';
            pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
          }
          pcVar4 = (char *)std::string::c_str(local_3c);
          cVar2 = CodePage::script2Database(pcVar4,local_43c);
          if (cVar2 != '\x01') {
            uVar7 = std::string::c_str(local_3c);
            uVar5 = CodePage::database();
            uVar6 = CodePage::script();
            cMyTrace::cMyTrace(local_34,"bool sync_script::CSyncScript::insert_random_option_ref()",
                               0xb31,5);
            cMyTrace::operator()
                      (local_34,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar7,
                       "bool sync_script::CSyncScript::insert_random_option_ref()",0xb31);
          }
          MySQL::set_query(local_24,
                           "inSert into random_option_ref(random_option_index, random_option_value, random_option_name) values(%d,%d, \'%s\')"
                           ,(uint)local_1e,(uint)local_1d,local_43c);
          cVar2 = MySQL::exec(local_24,true);
          if (cVar2 != '\x01') {
            uVar7 = 0;
            goto LAB_086260c3;
          }
        }
      }
    }
    uVar7 = 1;
LAB_086260c3:
    std::string::~string(local_3c);
  }
  else {
    uVar7 = 1;
  }
  return uVar7;
}

```

---

## insert_skill_index

```asm
// === 0862262c sync_script::CSyncScript::insert_skill_index  [0x0862262c-0x86227ef] ===
 862262c:	55                   	push   %ebp
 862262d:	89 e5                	mov    %esp,%ebp
 862262f:	57                   	push   %edi
 8622630:	56                   	push   %esi
 8622631:	53                   	push   %ebx
 8622632:	81 ec 3c 04 00 00    	sub    $0x43c,%esp
 8622638:	8b 45 08             	mov    0x8(%ebp),%eax
 862263b:	0f b6 00             	movzbl (%eax),%eax
 862263e:	83 f0 01             	xor    $0x1,%eax
 8622641:	84 c0                	test   %al,%al
 8622643:	74 0a                	je     862264f <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x23>
 8622645:	b8 01 00 00 00       	mov    $0x1,%eax
 862264a:	e9 95 01 00 00       	jmp    86227e4 <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x1b8>
 862264f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622654:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862265b:	00 
 862265c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8622663:	00 
 8622664:	89 04 24             	mov    %eax,(%esp)
 8622667:	e8 d2 2b dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862266c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 862266f:	8d 95 d5 fe ff ff    	lea    -0x12b(%ebp),%edx
 8622675:	bb ff 00 00 00       	mov    $0xff,%ebx
 862267a:	b8 00 00 00 00       	mov    $0x0,%eax
 862267f:	89 d1                	mov    %edx,%ecx
 8622681:	83 e1 01             	and    $0x1,%ecx
 8622684:	85 c9                	test   %ecx,%ecx
 8622686:	74 08                	je     8622690 <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x64>
 8622688:	88 02                	mov    %al,(%edx)
 862268a:	83 c2 01             	add    $0x1,%edx
 862268d:	83 eb 01             	sub    $0x1,%ebx
 8622690:	89 d1                	mov    %edx,%ecx
 8622692:	83 e1 02             	and    $0x2,%ecx
 8622695:	85 c9                	test   %ecx,%ecx
 8622697:	74 09                	je     86226a2 <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x76>
 8622699:	66 89 02             	mov    %ax,(%edx)
 862269c:	83 c2 02             	add    $0x2,%edx
 862269f:	83 eb 02             	sub    $0x2,%ebx
 86226a2:	89 d9                	mov    %ebx,%ecx
 86226a4:	c1 e9 02             	shr    $0x2,%ecx
 86226a7:	89 d7                	mov    %edx,%edi
 86226a9:	f3 ab                	rep stos %eax,%es:(%edi)
 86226ab:	89 fa                	mov    %edi,%edx
 86226ad:	89 d9                	mov    %ebx,%ecx
 86226af:	83 e1 02             	and    $0x2,%ecx
 86226b2:	85 c9                	test   %ecx,%ecx
 86226b4:	74 06                	je     86226bc <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x90>
 86226b6:	66 89 02             	mov    %ax,(%edx)
 86226b9:	83 c2 02             	add    $0x2,%edx
 86226bc:	89 d9                	mov    %ebx,%ecx
 86226be:	83 e1 01             	and    $0x1,%ecx
 86226c1:	85 c9                	test   %ecx,%ecx
 86226c3:	74 05                	je     86226ca <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x9e>
 86226c5:	88 02                	mov    %al,(%edx)
 86226c7:	83 c2 01             	add    $0x1,%edx
 86226ca:	8d 95 d8 fb ff ff    	lea    -0x428(%ebp),%edx
 86226d0:	b8 00 00 00 00       	mov    $0x0,%eax
 86226d5:	b9 bf 00 00 00       	mov    $0xbf,%ecx
 86226da:	89 d7                	mov    %edx,%edi
 86226dc:	f3 ab                	rep stos %eax,%es:(%edi)
 86226de:	89 fa                	mov    %edi,%edx
 86226e0:	88 02                	mov    %al,(%edx)
 86226e2:	83 c2 01             	add    $0x1,%edx
 86226e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86226e8:	83 c0 04             	add    $0x4,%eax
 86226eb:	89 04 24             	mov    %eax,(%esp)
 86226ee:	e8 fd 3d 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86226f3:	8d 95 d5 fe ff ff    	lea    -0x12b(%ebp),%edx
 86226f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 86226fd:	89 04 24             	mov    %eax,(%esp)
 8622700:	e8 03 67 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8622705:	83 f0 01             	xor    $0x1,%eax
 8622708:	84 c0                	test   %al,%al
 862270a:	74 66                	je     8622772 <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x146>
 862270c:	e8 cf 66 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8622711:	89 c6                	mov    %eax,%esi
 8622713:	e8 b4 66 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8622718:	89 c3                	mov    %eax,%ebx
 862271a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8622721:	00 
 8622722:	c7 44 24 08 e0 06 00 	movl   $0x6e0,0x8(%esp)
 8622729:	00 
 862272a:	c7 44 24 04 60 57 ce 	movl   $0x8ce5760,0x4(%esp)
 8622731:	08 
 8622732:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8622735:	89 04 24             	mov    %eax,(%esp)
 8622738:	e8 db cf f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 862273d:	c7 44 24 18 e0 06 00 	movl   $0x6e0,0x18(%esp)
 8622744:	00 
 8622745:	c7 44 24 14 60 57 ce 	movl   $0x8ce5760,0x14(%esp)
 862274c:	08 
 862274d:	8d 85 d5 fe ff ff    	lea    -0x12b(%ebp),%eax
 8622753:	89 44 24 10          	mov    %eax,0x10(%esp)
 8622757:	89 74 24 0c          	mov    %esi,0xc(%esp)
 862275b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862275f:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8622766:	08 
 8622767:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 862276a:	89 04 24             	mov    %eax,(%esp)
 862276d:	e8 16 d0 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8622772:	8d 85 d5 fe ff ff    	lea    -0x12b(%ebp),%eax
 8622778:	89 44 24 08          	mov    %eax,0x8(%esp)
 862277c:	8d 85 d8 fb ff ff    	lea    -0x428(%ebp),%eax
 8622782:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622786:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622789:	89 04 24             	mov    %eax,(%esp)
 862278c:	e8 19 21 dd ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8622791:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622794:	8b 00                	mov    (%eax),%eax
 8622796:	8d 95 d8 fb ff ff    	lea    -0x428(%ebp),%edx
 862279c:	89 54 24 10          	mov    %edx,0x10(%esp)
 86227a0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86227a4:	8b 45 10             	mov    0x10(%ebp),%eax
 86227a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86227ab:	c7 44 24 04 5c 3c ce 	movl   $0x8ce3c5c,0x4(%esp)
 86227b2:	08 
 86227b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86227b6:	89 04 24             	mov    %eax,(%esp)
 86227b9:	e8 02 1a dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86227be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86227c5:	00 
 86227c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86227c9:	89 04 24             	mov    %eax,(%esp)
 86227cc:	e8 55 1b dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86227d1:	83 f0 01             	xor    $0x1,%eax
 86227d4:	84 c0                	test   %al,%al
 86227d6:	74 07                	je     86227df <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x1b3>
 86227d8:	b8 00 00 00 00       	mov    $0x0,%eax
 86227dd:	eb 05                	jmp    86227e4 <_ZN11sync_script11CSyncScript18insert_skill_indexEP13STSkillScripti+0x1b8>
 86227df:	b8 01 00 00 00       	mov    $0x1,%eax
 86227e4:	81 c4 3c 04 00 00    	add    $0x43c,%esp
 86227ea:	5b                   	pop    %ebx
 86227eb:	5e                   	pop    %esi
 86227ec:	5f                   	pop    %edi
 86227ed:	5d                   	pop    %ebp
 86227ee:	c3                   	ret
 86227ef:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_skill_index @ 0x862262c

/* sync_script::CSyncScript::insert_skill_index(STSkillScript*, int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_skill_index(CSyncScript *this,STSkillScript *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_42c [765];
  char local_12f;
  char local_12e [254];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar9 = 0;
  if (*this == (CSyncScript)0x1) {
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    pcVar6 = &local_12f;
    uVar7 = 0xff;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_12f = '\0';
      pcVar6 = local_12e;
      uVar7 = 0xfe;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    pcVar6 = local_42c;
    for (iVar5 = 0xbf; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    *pcVar6 = '\0';
    pcVar6 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar6,&local_12f);
    if (cVar1 != '\x01') {
      uVar2 = CodePage::database();
      uVar3 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)",
                         0x6e0,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar3,uVar2,&local_12f,
                 "bool sync_script::CSyncScript::insert_skill_index(STSkillScript*, int)",0x6e0);
    }
    MySQL::escape_string(local_20,local_42c,&local_12f);
    MySQL::set_query(local_20,
                     "inSert into skill_index(job, skill_idx, skill_name) values(%d, %d, \'%s\')",
                     param_2,*(undefined4 *)param_1,local_42c);
    cVar1 = MySQL::exec(local_20,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## insert_skill_info

```asm
// === 08622e08 sync_script::CSyncScript::insert_skill_info  [0x08622e08-0x862438f] ===
 8622e08:	55                   	push   %ebp
 8622e09:	89 e5                	mov    %esp,%ebp
 8622e0b:	57                   	push   %edi
 8622e0c:	56                   	push   %esi
 8622e0d:	53                   	push   %ebx
 8622e0e:	81 ec 2c 59 01 00    	sub    $0x1592c,%esp
 8622e14:	8b 45 08             	mov    0x8(%ebp),%eax
 8622e17:	0f b6 00             	movzbl (%eax),%eax
 8622e1a:	83 f0 01             	xor    $0x1,%eax
 8622e1d:	84 c0                	test   %al,%al
 8622e1f:	74 0a                	je     8622e2b <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x23>
 8622e21:	bb 01 00 00 00       	mov    $0x1,%ebx
 8622e26:	e9 58 15 00 00       	jmp    8624383 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x157b>
 8622e2b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622e30:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622e37:	00 
 8622e38:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622e3f:	00 
 8622e40:	89 04 24             	mov    %eax,(%esp)
 8622e43:	e8 f6 23 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622e48:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8622e4b:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8622e51:	89 04 24             	mov    %eax,(%esp)
 8622e54:	e8 53 b3 a6 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8622e59:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8622e60:	eb 52                	jmp    8622eb4 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xac>
 8622e62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622e65:	8d 50 44             	lea    0x44(%eax),%edx
 8622e68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622e6f:	89 14 24             	mov    %edx,(%esp)
 8622e72:	e8 65 b3 a6 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8622e77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622e7b:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8622e81:	89 04 24             	mov    %eax,(%esp)
 8622e84:	e8 9d e2 ae ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8622e89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622e8c:	8d 50 50             	lea    0x50(%eax),%edx
 8622e8f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8622e92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622e96:	89 14 24             	mov    %edx,(%esp)
 8622e99:	e8 3e b3 a6 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 8622e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622ea2:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8622ea8:	89 04 24             	mov    %eax,(%esp)
 8622eab:	e8 76 e2 ae ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 8622eb0:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8622eb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622eb7:	83 c0 44             	add    $0x44,%eax
 8622eba:	89 04 24             	mov    %eax,(%esp)
 8622ebd:	e8 fe b2 a6 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8622ec2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8622ec5:	0f 97 c0             	seta   %al
 8622ec8:	84 c0                	test   %al,%al
 8622eca:	75 96                	jne    8622e62 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x5a>
 8622ecc:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 8622ed2:	ba 00 b0 00 00       	mov    $0xb000,%edx
 8622ed7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8622edb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8622ee2:	00 
 8622ee3:	89 04 24             	mov    %eax,(%esp)
 8622ee6:	e8 d5 ad a5 ff       	call   807dcc0 <memset@plt>
 8622eeb:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8622ef2:	8d 9d f8 fa ff ff    	lea    -0x508(%ebp),%ebx
 8622ef8:	b8 00 00 00 00       	mov    $0x0,%eax
 8622efd:	ba 00 01 00 00       	mov    $0x100,%edx
 8622f02:	89 df                	mov    %ebx,%edi
 8622f04:	89 d1                	mov    %edx,%ecx
 8622f06:	f3 ab                	rep stos %eax,%es:(%edi)
 8622f08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622f0b:	83 c0 04             	add    $0x4,%eax
 8622f0e:	89 04 24             	mov    %eax,(%esp)
 8622f11:	e8 da 35 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622f16:	8d 95 f8 fa ff ff    	lea    -0x508(%ebp),%edx
 8622f1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8622f20:	89 04 24             	mov    %eax,(%esp)
 8622f23:	e8 e0 5e ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8622f28:	83 f0 01             	xor    $0x1,%eax
 8622f2b:	84 c0                	test   %al,%al
 8622f2d:	74 76                	je     8622fa5 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x19d>
 8622f2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622f32:	83 c0 04             	add    $0x4,%eax
 8622f35:	89 04 24             	mov    %eax,(%esp)
 8622f38:	e8 b3 35 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622f3d:	89 c7                	mov    %eax,%edi
 8622f3f:	e8 9c 5e ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8622f44:	89 c6                	mov    %eax,%esi
 8622f46:	e8 81 5e ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8622f4b:	89 c3                	mov    %eax,%ebx
 8622f4d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8622f54:	00 
 8622f55:	c7 44 24 08 ff 07 00 	movl   $0x7ff,0x8(%esp)
 8622f5c:	00 
 8622f5d:	c7 44 24 04 00 57 ce 	movl   $0x8ce5700,0x4(%esp)
 8622f64:	08 
 8622f65:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 8622f6b:	89 04 24             	mov    %eax,(%esp)
 8622f6e:	e8 a5 c7 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8622f73:	c7 44 24 18 ff 07 00 	movl   $0x7ff,0x18(%esp)
 8622f7a:	00 
 8622f7b:	c7 44 24 14 00 57 ce 	movl   $0x8ce5700,0x14(%esp)
 8622f82:	08 
 8622f83:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8622f87:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8622f8b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8622f8f:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8622f96:	08 
 8622f97:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 8622f9d:	89 04 24             	mov    %eax,(%esp)
 8622fa0:	e8 e3 c7 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8622fa5:	8d 9d f8 f6 ff ff    	lea    -0x908(%ebp),%ebx
 8622fab:	b8 00 00 00 00       	mov    $0x0,%eax
 8622fb0:	ba 00 01 00 00       	mov    $0x100,%edx
 8622fb5:	89 df                	mov    %ebx,%edi
 8622fb7:	89 d1                	mov    %edx,%ecx
 8622fb9:	f3 ab                	rep stos %eax,%es:(%edi)
 8622fbb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622fbe:	83 c0 08             	add    $0x8,%eax
 8622fc1:	89 04 24             	mov    %eax,(%esp)
 8622fc4:	e8 27 35 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622fc9:	8d 95 f8 f6 ff ff    	lea    -0x908(%ebp),%edx
 8622fcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8622fd3:	89 04 24             	mov    %eax,(%esp)
 8622fd6:	e8 2d 5e ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8622fdb:	83 f0 01             	xor    $0x1,%eax
 8622fde:	84 c0                	test   %al,%al
 8622fe0:	74 76                	je     8623058 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x250>
 8622fe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622fe5:	83 c0 08             	add    $0x8,%eax
 8622fe8:	89 04 24             	mov    %eax,(%esp)
 8622feb:	e8 00 35 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622ff0:	89 c7                	mov    %eax,%edi
 8622ff2:	e8 e9 5d ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8622ff7:	89 c6                	mov    %eax,%esi
 8622ff9:	e8 ce 5d ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8622ffe:	89 c3                	mov    %eax,%ebx
 8623000:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8623007:	00 
 8623008:	c7 44 24 08 07 08 00 	movl   $0x807,0x8(%esp)
 862300f:	00 
 8623010:	c7 44 24 04 00 57 ce 	movl   $0x8ce5700,0x4(%esp)
 8623017:	08 
 8623018:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 862301e:	89 04 24             	mov    %eax,(%esp)
 8623021:	e8 f2 c6 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8623026:	c7 44 24 18 07 08 00 	movl   $0x807,0x18(%esp)
 862302d:	00 
 862302e:	c7 44 24 14 00 57 ce 	movl   $0x8ce5700,0x14(%esp)
 8623035:	08 
 8623036:	89 7c 24 10          	mov    %edi,0x10(%esp)
 862303a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 862303e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623042:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8623049:	08 
 862304a:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8623050:	89 04 24             	mov    %eax,(%esp)
 8623053:	e8 30 c7 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8623058:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 862305e:	89 04 24             	mov    %eax,(%esp)
 8623061:	e8 58 39 00 00       	call   86269be <_ZN13CStreamBufferC1Ev>
 8623066:	8b 45 10             	mov    0x10(%ebp),%eax
 8623069:	89 44 24 04          	mov    %eax,0x4(%esp)
 862306d:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623073:	89 04 24             	mov    %eax,(%esp)
 8623076:	e8 f5 39 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862307b:	8b 45 0c             	mov    0xc(%ebp),%eax
 862307e:	8b 18                	mov    (%eax),%ebx
 8623080:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8623087:	08 
 8623088:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 862308e:	89 04 24             	mov    %eax,(%esp)
 8623091:	e8 b4 39 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623096:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862309a:	89 04 24             	mov    %eax,(%esp)
 862309d:	e8 ce 39 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86230a2:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86230a9:	08 
 86230aa:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 86230b0:	89 04 24             	mov    %eax,(%esp)
 86230b3:	e8 92 39 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86230b8:	8b 55 14             	mov    0x14(%ebp),%edx
 86230bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86230bf:	89 04 24             	mov    %eax,(%esp)
 86230c2:	e8 a9 39 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86230c7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86230ca:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 86230d0:	c1 e2 0c             	shl    $0xc,%edx
 86230d3:	01 d0                	add    %edx,%eax
 86230d5:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86230d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 86230dd:	8d 85 f8 fa ff ff    	lea    -0x508(%ebp),%eax
 86230e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86230e7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86230ea:	89 04 24             	mov    %eax,(%esp)
 86230ed:	e8 55 9b ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 86230f2:	89 c3                	mov    %eax,%ebx
 86230f4:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86230fb:	08 
 86230fc:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623102:	89 04 24             	mov    %eax,(%esp)
 8623105:	e8 40 39 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862310a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862310e:	89 04 24             	mov    %eax,(%esp)
 8623111:	e8 34 39 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623116:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862311d:	08 
 862311e:	89 04 24             	mov    %eax,(%esp)
 8623121:	e8 24 39 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623126:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8623129:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 862312f:	c1 e2 0c             	shl    $0xc,%edx
 8623132:	01 d0                	add    %edx,%eax
 8623134:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8623138:	89 44 24 08          	mov    %eax,0x8(%esp)
 862313c:	8d 85 f8 f6 ff ff    	lea    -0x908(%ebp),%eax
 8623142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8623146:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8623149:	89 04 24             	mov    %eax,(%esp)
 862314c:	e8 f6 9a ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8623151:	89 c3                	mov    %eax,%ebx
 8623153:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862315a:	08 
 862315b:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623161:	89 04 24             	mov    %eax,(%esp)
 8623164:	e8 e1 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623169:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862316d:	89 04 24             	mov    %eax,(%esp)
 8623170:	e8 d5 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623175:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862317c:	08 
 862317d:	89 04 24             	mov    %eax,(%esp)
 8623180:	e8 c5 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623185:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8623188:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 862318e:	c1 e2 0c             	shl    $0xc,%edx
 8623191:	01 d0                	add    %edx,%eax
 8623193:	89 c3                	mov    %eax,%ebx
 8623195:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8623199:	8b 45 0c             	mov    0xc(%ebp),%eax
 862319c:	83 c0 10             	add    $0x10,%eax
 862319f:	89 04 24             	mov    %eax,(%esp)
 86231a2:	e8 49 33 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 86231a7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86231ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 86231af:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86231b2:	89 04 24             	mov    %eax,(%esp)
 86231b5:	e8 8d 9a ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 86231ba:	89 c3                	mov    %eax,%ebx
 86231bc:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86231c3:	08 
 86231c4:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 86231ca:	89 04 24             	mov    %eax,(%esp)
 86231cd:	e8 78 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86231d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86231d6:	89 04 24             	mov    %eax,(%esp)
 86231d9:	e8 6c 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86231de:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86231e5:	08 
 86231e6:	89 04 24             	mov    %eax,(%esp)
 86231e9:	e8 5c 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86231ee:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86231f1:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 86231f7:	c1 e2 0c             	shl    $0xc,%edx
 86231fa:	01 d0                	add    %edx,%eax
 86231fc:	89 c3                	mov    %eax,%ebx
 86231fe:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8623202:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623205:	83 c0 0c             	add    $0xc,%eax
 8623208:	89 04 24             	mov    %eax,(%esp)
 862320b:	e8 e0 32 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8623210:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623214:	89 44 24 04          	mov    %eax,0x4(%esp)
 8623218:	8b 45 dc             	mov    -0x24(%ebp),%eax
 862321b:	89 04 24             	mov    %eax,(%esp)
 862321e:	e8 24 9a ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8623223:	89 c3                	mov    %eax,%ebx
 8623225:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862322c:	08 
 862322d:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623233:	89 04 24             	mov    %eax,(%esp)
 8623236:	e8 0f 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862323b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862323f:	89 04 24             	mov    %eax,(%esp)
 8623242:	e8 03 38 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623247:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862324e:	08 
 862324f:	89 04 24             	mov    %eax,(%esp)
 8623252:	e8 f3 37 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623257:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 862325d:	89 04 24             	mov    %eax,(%esp)
 8623260:	e8 f3 2c d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623265:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623268:	8d 50 18             	lea    0x18(%eax),%edx
 862326b:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8623271:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623275:	89 04 24             	mov    %eax,(%esp)
 8623278:	e8 ef af a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 862327d:	83 ec 04             	sub    $0x4,%esp
 8623280:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623283:	8d 50 18             	lea    0x18(%eax),%edx
 8623286:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 862328c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623290:	89 04 24             	mov    %eax,(%esp)
 8623293:	e8 b0 af a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8623298:	83 ec 04             	sub    $0x4,%esp
 862329b:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 86232a1:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 86232a7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86232ab:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 86232b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86232b5:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 86232bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86232bf:	89 04 24             	mov    %eax,(%esp)
 86232c2:	e8 d8 1e d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 86232c7:	83 ec 04             	sub    $0x4,%esp
 86232ca:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 86232d0:	89 04 24             	mov    %eax,(%esp)
 86232d3:	e8 5c 2d d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 86232d8:	89 c3                	mov    %eax,%ebx
 86232da:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86232e1:	08 
 86232e2:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 86232e8:	89 04 24             	mov    %eax,(%esp)
 86232eb:	e8 5a 37 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86232f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86232f4:	89 04 24             	mov    %eax,(%esp)
 86232f7:	e8 4e 37 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86232fc:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623303:	08 
 8623304:	89 04 24             	mov    %eax,(%esp)
 8623307:	e8 3e 37 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862330c:	eb 18                	jmp    8623326 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x51e>
 862330e:	89 d3                	mov    %edx,%ebx
 8623310:	89 c6                	mov    %eax,%esi
 8623312:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8623318:	89 04 24             	mov    %eax,(%esp)
 862331b:	e8 60 c2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623320:	89 f0                	mov    %esi,%eax
 8623322:	89 da                	mov    %ebx,%edx
 8623324:	eb 10                	jmp    8623336 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x52e>
 8623326:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 862332c:	89 04 24             	mov    %eax,(%esp)
 862332f:	e8 4c c2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623334:	eb 1b                	jmp    8623351 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x549>
 8623336:	89 d3                	mov    %edx,%ebx
 8623338:	89 c6                	mov    %eax,%esi
 862333a:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8623340:	89 04 24             	mov    %eax,(%esp)
 8623343:	e8 38 c2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623348:	89 f0                	mov    %esi,%eax
 862334a:	89 da                	mov    %ebx,%edx
 862334c:	e9 06 10 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623351:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8623357:	89 04 24             	mov    %eax,(%esp)
 862335a:	e8 21 c2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862335f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623362:	8b 58 5c             	mov    0x5c(%eax),%ebx
 8623365:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862336c:	08 
 862336d:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623373:	89 04 24             	mov    %eax,(%esp)
 8623376:	e8 cf 36 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862337b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862337f:	89 04 24             	mov    %eax,(%esp)
 8623382:	e8 e9 36 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8623387:	8b 45 0c             	mov    0xc(%ebp),%eax
 862338a:	8b 58 60             	mov    0x60(%eax),%ebx
 862338d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8623394:	08 
 8623395:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 862339b:	89 04 24             	mov    %eax,(%esp)
 862339e:	e8 a7 36 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86233a3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86233a7:	89 04 24             	mov    %eax,(%esp)
 86233aa:	e8 c1 36 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86233af:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86233b5:	89 04 24             	mov    %eax,(%esp)
 86233b8:	e8 9b 2b d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 86233bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86233c0:	83 c0 7c             	add    $0x7c,%eax
 86233c3:	8d 58 18             	lea    0x18(%eax),%ebx
 86233c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86233c9:	8d 48 7c             	lea    0x7c(%eax),%ecx
 86233cc:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86233d2:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86233d8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86233dc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86233e0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86233e4:	89 04 24             	mov    %eax,(%esp)
 86233e7:	e8 d0 58 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 86233ec:	83 ec 04             	sub    $0x4,%esp
 86233ef:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 86233f5:	89 04 24             	mov    %eax,(%esp)
 86233f8:	e8 37 2c d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 86233fd:	89 c3                	mov    %eax,%ebx
 86233ff:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623406:	08 
 8623407:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 862340d:	89 04 24             	mov    %eax,(%esp)
 8623410:	e8 35 36 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623415:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623419:	89 04 24             	mov    %eax,(%esp)
 862341c:	e8 29 36 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623421:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623428:	08 
 8623429:	89 04 24             	mov    %eax,(%esp)
 862342c:	e8 19 36 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623431:	eb 18                	jmp    862344b <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x643>
 8623433:	89 d3                	mov    %edx,%ebx
 8623435:	89 c6                	mov    %eax,%esi
 8623437:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 862343d:	89 04 24             	mov    %eax,(%esp)
 8623440:	e8 3b c1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623445:	89 f0                	mov    %esi,%eax
 8623447:	89 da                	mov    %ebx,%edx
 8623449:	eb 10                	jmp    862345b <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x653>
 862344b:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 8623451:	89 04 24             	mov    %eax,(%esp)
 8623454:	e8 27 c1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623459:	eb 1b                	jmp    8623476 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x66e>
 862345b:	89 d3                	mov    %edx,%ebx
 862345d:	89 c6                	mov    %eax,%esi
 862345f:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8623465:	89 04 24             	mov    %eax,(%esp)
 8623468:	e8 13 c1 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862346d:	89 f0                	mov    %esi,%eax
 862346f:	89 da                	mov    %ebx,%edx
 8623471:	e9 e1 0e 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623476:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 862347c:	89 04 24             	mov    %eax,(%esp)
 862347f:	e8 fc c0 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623484:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 862348a:	89 04 24             	mov    %eax,(%esp)
 862348d:	e8 c6 2a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623492:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623495:	05 dc 00 00 00       	add    $0xdc,%eax
 862349a:	8d 58 08             	lea    0x8(%eax),%ebx
 862349d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86234a0:	05 dc 00 00 00       	add    $0xdc,%eax
 86234a5:	89 c2                	mov    %eax,%edx
 86234a7:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 86234ad:	8d 8d 40 ff ff ff    	lea    -0xc0(%ebp),%ecx
 86234b3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86234b7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86234bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86234bf:	89 04 24             	mov    %eax,(%esp)
 86234c2:	e8 f5 57 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 86234c7:	83 ec 04             	sub    $0x4,%esp
 86234ca:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 86234d0:	89 04 24             	mov    %eax,(%esp)
 86234d3:	e8 5c 2b d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 86234d8:	89 c7                	mov    %eax,%edi
 86234da:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86234e0:	89 04 24             	mov    %eax,(%esp)
 86234e3:	e8 70 2a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 86234e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86234eb:	05 cc 00 00 00       	add    $0xcc,%eax
 86234f0:	8d 58 08             	lea    0x8(%eax),%ebx
 86234f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86234f6:	05 cc 00 00 00       	add    $0xcc,%eax
 86234fb:	89 c2                	mov    %eax,%edx
 86234fd:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8623503:	8d 8d 48 ff ff ff    	lea    -0xb8(%ebp),%ecx
 8623509:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 862350d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623511:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623515:	89 04 24             	mov    %eax,(%esp)
 8623518:	e8 9f 57 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 862351d:	83 ec 04             	sub    $0x4,%esp
 8623520:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8623526:	89 04 24             	mov    %eax,(%esp)
 8623529:	e8 06 2b d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 862352e:	89 85 ec a6 fe ff    	mov    %eax,-0x15914(%ebp)
 8623534:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 862353a:	89 04 24             	mov    %eax,(%esp)
 862353d:	e8 16 2a d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623542:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623545:	05 bc 00 00 00       	add    $0xbc,%eax
 862354a:	8d 58 08             	lea    0x8(%eax),%ebx
 862354d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623550:	05 bc 00 00 00       	add    $0xbc,%eax
 8623555:	89 c2                	mov    %eax,%edx
 8623557:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 862355d:	8d 8d 50 ff ff ff    	lea    -0xb0(%ebp),%ecx
 8623563:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8623567:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862356b:	89 54 24 04          	mov    %edx,0x4(%esp)
 862356f:	89 04 24             	mov    %eax,(%esp)
 8623572:	e8 45 57 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 8623577:	83 ec 04             	sub    $0x4,%esp
 862357a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8623580:	89 04 24             	mov    %eax,(%esp)
 8623583:	e8 ac 2a d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623588:	89 85 f0 a6 fe ff    	mov    %eax,-0x15910(%ebp)
 862358e:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8623594:	89 04 24             	mov    %eax,(%esp)
 8623597:	e8 bc 29 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 862359c:	8b 45 0c             	mov    0xc(%ebp),%eax
 862359f:	05 ac 00 00 00       	add    $0xac,%eax
 86235a4:	8d 58 08             	lea    0x8(%eax),%ebx
 86235a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86235aa:	05 ac 00 00 00       	add    $0xac,%eax
 86235af:	89 c2                	mov    %eax,%edx
 86235b1:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 86235b7:	8d 8d 58 ff ff ff    	lea    -0xa8(%ebp),%ecx
 86235bd:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86235c1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86235c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86235c9:	89 04 24             	mov    %eax,(%esp)
 86235cc:	e8 eb 56 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 86235d1:	83 ec 04             	sub    $0x4,%esp
 86235d4:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 86235da:	89 04 24             	mov    %eax,(%esp)
 86235dd:	e8 52 2a d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 86235e2:	89 c6                	mov    %eax,%esi
 86235e4:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 86235ea:	89 04 24             	mov    %eax,(%esp)
 86235ed:	e8 66 29 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 86235f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86235f5:	05 9c 00 00 00       	add    $0x9c,%eax
 86235fa:	8d 58 08             	lea    0x8(%eax),%ebx
 86235fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623600:	05 9c 00 00 00       	add    $0x9c,%eax
 8623605:	89 c1                	mov    %eax,%ecx
 8623607:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 862360d:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8623613:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8623617:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862361b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 862361f:	89 14 24             	mov    %edx,(%esp)
 8623622:	e8 95 56 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 8623627:	83 ec 04             	sub    $0x4,%esp
 862362a:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8623630:	89 04 24             	mov    %eax,(%esp)
 8623633:	e8 fc 29 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623638:	89 c3                	mov    %eax,%ebx
 862363a:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623641:	08 
 8623642:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623648:	89 04 24             	mov    %eax,(%esp)
 862364b:	e8 fa 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623650:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623654:	89 04 24             	mov    %eax,(%esp)
 8623657:	e8 ee 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862365c:	c7 44 24 04 f7 2d ce 	movl   $0x8ce2df7,0x4(%esp)
 8623663:	08 
 8623664:	89 04 24             	mov    %eax,(%esp)
 8623667:	e8 de 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862366c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8623670:	89 04 24             	mov    %eax,(%esp)
 8623673:	e8 d2 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623678:	c7 44 24 04 f7 2d ce 	movl   $0x8ce2df7,0x4(%esp)
 862367f:	08 
 8623680:	89 04 24             	mov    %eax,(%esp)
 8623683:	e8 c2 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623688:	8b 95 f0 a6 fe ff    	mov    -0x15910(%ebp),%edx
 862368e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623692:	89 04 24             	mov    %eax,(%esp)
 8623695:	e8 b0 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862369a:	c7 44 24 04 f7 2d ce 	movl   $0x8ce2df7,0x4(%esp)
 86236a1:	08 
 86236a2:	89 04 24             	mov    %eax,(%esp)
 86236a5:	e8 a0 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86236aa:	8b 8d ec a6 fe ff    	mov    -0x15914(%ebp),%ecx
 86236b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86236b4:	89 04 24             	mov    %eax,(%esp)
 86236b7:	e8 8e 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86236bc:	c7 44 24 04 f7 2d ce 	movl   $0x8ce2df7,0x4(%esp)
 86236c3:	08 
 86236c4:	89 04 24             	mov    %eax,(%esp)
 86236c7:	e8 7e 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86236cc:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86236d0:	89 04 24             	mov    %eax,(%esp)
 86236d3:	e8 72 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86236d8:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86236df:	08 
 86236e0:	89 04 24             	mov    %eax,(%esp)
 86236e3:	e8 62 33 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86236e8:	eb 18                	jmp    8623702 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x8fa>
 86236ea:	89 d3                	mov    %edx,%ebx
 86236ec:	89 c6                	mov    %eax,%esi
 86236ee:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 86236f4:	89 04 24             	mov    %eax,(%esp)
 86236f7:	e8 84 be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86236fc:	89 f0                	mov    %esi,%eax
 86236fe:	89 da                	mov    %ebx,%edx
 8623700:	eb 10                	jmp    8623712 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x90a>
 8623702:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8623708:	89 04 24             	mov    %eax,(%esp)
 862370b:	e8 70 be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623710:	eb 18                	jmp    862372a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x922>
 8623712:	89 d3                	mov    %edx,%ebx
 8623714:	89 c6                	mov    %eax,%esi
 8623716:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 862371c:	89 04 24             	mov    %eax,(%esp)
 862371f:	e8 5c be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623724:	89 f0                	mov    %esi,%eax
 8623726:	89 da                	mov    %ebx,%edx
 8623728:	eb 10                	jmp    862373a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x932>
 862372a:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8623730:	89 04 24             	mov    %eax,(%esp)
 8623733:	e8 48 be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623738:	eb 18                	jmp    8623752 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x94a>
 862373a:	89 d3                	mov    %edx,%ebx
 862373c:	89 c6                	mov    %eax,%esi
 862373e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8623744:	89 04 24             	mov    %eax,(%esp)
 8623747:	e8 34 be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862374c:	89 f0                	mov    %esi,%eax
 862374e:	89 da                	mov    %ebx,%edx
 8623750:	eb 10                	jmp    8623762 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x95a>
 8623752:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 8623758:	89 04 24             	mov    %eax,(%esp)
 862375b:	e8 20 be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623760:	eb 18                	jmp    862377a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x972>
 8623762:	89 d3                	mov    %edx,%ebx
 8623764:	89 c6                	mov    %eax,%esi
 8623766:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 862376c:	89 04 24             	mov    %eax,(%esp)
 862376f:	e8 0c be d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623774:	89 f0                	mov    %esi,%eax
 8623776:	89 da                	mov    %ebx,%edx
 8623778:	eb 10                	jmp    862378a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x982>
 862377a:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8623780:	89 04 24             	mov    %eax,(%esp)
 8623783:	e8 f8 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623788:	eb 18                	jmp    86237a2 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x99a>
 862378a:	89 d3                	mov    %edx,%ebx
 862378c:	89 c6                	mov    %eax,%esi
 862378e:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 8623794:	89 04 24             	mov    %eax,(%esp)
 8623797:	e8 e4 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862379c:	89 f0                	mov    %esi,%eax
 862379e:	89 da                	mov    %ebx,%edx
 86237a0:	eb 10                	jmp    86237b2 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x9aa>
 86237a2:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 86237a8:	89 04 24             	mov    %eax,(%esp)
 86237ab:	e8 d0 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86237b0:	eb 18                	jmp    86237ca <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x9c2>
 86237b2:	89 d3                	mov    %edx,%ebx
 86237b4:	89 c6                	mov    %eax,%esi
 86237b6:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 86237bc:	89 04 24             	mov    %eax,(%esp)
 86237bf:	e8 bc bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86237c4:	89 f0                	mov    %esi,%eax
 86237c6:	89 da                	mov    %ebx,%edx
 86237c8:	eb 10                	jmp    86237da <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x9d2>
 86237ca:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 86237d0:	89 04 24             	mov    %eax,(%esp)
 86237d3:	e8 a8 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86237d8:	eb 18                	jmp    86237f2 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x9ea>
 86237da:	89 d3                	mov    %edx,%ebx
 86237dc:	89 c6                	mov    %eax,%esi
 86237de:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 86237e4:	89 04 24             	mov    %eax,(%esp)
 86237e7:	e8 94 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86237ec:	89 f0                	mov    %esi,%eax
 86237ee:	89 da                	mov    %ebx,%edx
 86237f0:	eb 10                	jmp    8623802 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x9fa>
 86237f2:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 86237f8:	89 04 24             	mov    %eax,(%esp)
 86237fb:	e8 80 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623800:	eb 18                	jmp    862381a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xa12>
 8623802:	89 d3                	mov    %edx,%ebx
 8623804:	89 c6                	mov    %eax,%esi
 8623806:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 862380c:	89 04 24             	mov    %eax,(%esp)
 862380f:	e8 6c bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623814:	89 f0                	mov    %esi,%eax
 8623816:	89 da                	mov    %ebx,%edx
 8623818:	eb 10                	jmp    862382a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xa22>
 862381a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8623820:	89 04 24             	mov    %eax,(%esp)
 8623823:	e8 58 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623828:	eb 18                	jmp    8623842 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xa3a>
 862382a:	89 d3                	mov    %edx,%ebx
 862382c:	89 c6                	mov    %eax,%esi
 862382e:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8623834:	89 04 24             	mov    %eax,(%esp)
 8623837:	e8 44 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862383c:	89 f0                	mov    %esi,%eax
 862383e:	89 da                	mov    %ebx,%edx
 8623840:	eb 10                	jmp    8623852 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xa4a>
 8623842:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 8623848:	89 04 24             	mov    %eax,(%esp)
 862384b:	e8 30 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623850:	eb 1b                	jmp    862386d <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xa65>
 8623852:	89 d3                	mov    %edx,%ebx
 8623854:	89 c6                	mov    %eax,%esi
 8623856:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 862385c:	89 04 24             	mov    %eax,(%esp)
 862385f:	e8 1c bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623864:	89 f0                	mov    %esi,%eax
 8623866:	89 da                	mov    %ebx,%edx
 8623868:	e9 ea 0a 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 862386d:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8623873:	89 04 24             	mov    %eax,(%esp)
 8623876:	e8 05 bd d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862387b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8623881:	89 04 24             	mov    %eax,(%esp)
 8623884:	e8 cf 26 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623889:	8b 45 0c             	mov    0xc(%ebp),%eax
 862388c:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 8623892:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8623898:	89 54 24 04          	mov    %edx,0x4(%esp)
 862389c:	89 04 24             	mov    %eax,(%esp)
 862389f:	e8 c8 a9 a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86238a4:	83 ec 04             	sub    $0x4,%esp
 86238a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86238aa:	8d 90 dc 01 00 00    	lea    0x1dc(%eax),%edx
 86238b0:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86238b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86238ba:	89 04 24             	mov    %eax,(%esp)
 86238bd:	e8 86 a9 a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 86238c2:	83 ec 04             	sub    $0x4,%esp
 86238c5:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 86238cb:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 86238d1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86238d5:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 86238db:	89 54 24 08          	mov    %edx,0x8(%esp)
 86238df:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 86238e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86238e9:	89 04 24             	mov    %eax,(%esp)
 86238ec:	e8 ae 18 d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 86238f1:	83 ec 04             	sub    $0x4,%esp
 86238f4:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 86238fa:	89 04 24             	mov    %eax,(%esp)
 86238fd:	e8 32 27 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623902:	89 c3                	mov    %eax,%ebx
 8623904:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862390b:	08 
 862390c:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623912:	89 04 24             	mov    %eax,(%esp)
 8623915:	e8 30 31 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862391a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862391e:	89 04 24             	mov    %eax,(%esp)
 8623921:	e8 24 31 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623926:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862392d:	08 
 862392e:	89 04 24             	mov    %eax,(%esp)
 8623931:	e8 14 31 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623936:	eb 18                	jmp    8623950 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xb48>
 8623938:	89 d3                	mov    %edx,%ebx
 862393a:	89 c6                	mov    %eax,%esi
 862393c:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8623942:	89 04 24             	mov    %eax,(%esp)
 8623945:	e8 36 bc d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862394a:	89 f0                	mov    %esi,%eax
 862394c:	89 da                	mov    %ebx,%edx
 862394e:	eb 10                	jmp    8623960 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xb58>
 8623950:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 8623956:	89 04 24             	mov    %eax,(%esp)
 8623959:	e8 22 bc d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862395e:	eb 1b                	jmp    862397b <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xb73>
 8623960:	89 d3                	mov    %edx,%ebx
 8623962:	89 c6                	mov    %eax,%esi
 8623964:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 862396a:	89 04 24             	mov    %eax,(%esp)
 862396d:	e8 0e bc d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623972:	89 f0                	mov    %esi,%eax
 8623974:	89 da                	mov    %ebx,%edx
 8623976:	e9 dc 09 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 862397b:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8623981:	89 04 24             	mov    %eax,(%esp)
 8623984:	e8 f7 bb d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623989:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 862398f:	89 04 24             	mov    %eax,(%esp)
 8623992:	e8 c1 25 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623997:	8b 45 0c             	mov    0xc(%ebp),%eax
 862399a:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 86239a0:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86239a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86239aa:	89 04 24             	mov    %eax,(%esp)
 86239ad:	e8 ba a8 a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86239b2:	83 ec 04             	sub    $0x4,%esp
 86239b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 86239b8:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 86239be:	8d 45 80             	lea    -0x80(%ebp),%eax
 86239c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86239c5:	89 04 24             	mov    %eax,(%esp)
 86239c8:	e8 7b a8 a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 86239cd:	83 ec 04             	sub    $0x4,%esp
 86239d0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86239d6:	8d 95 78 ff ff ff    	lea    -0x88(%ebp),%edx
 86239dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86239e0:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 86239e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86239ea:	8b 55 80             	mov    -0x80(%ebp),%edx
 86239ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 86239f1:	89 04 24             	mov    %eax,(%esp)
 86239f4:	e8 a6 17 d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 86239f9:	83 ec 04             	sub    $0x4,%esp
 86239fc:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8623a02:	89 04 24             	mov    %eax,(%esp)
 8623a05:	e8 2a 26 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623a0a:	89 c3                	mov    %eax,%ebx
 8623a0c:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623a13:	08 
 8623a14:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623a1a:	89 04 24             	mov    %eax,(%esp)
 8623a1d:	e8 28 30 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623a22:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623a26:	89 04 24             	mov    %eax,(%esp)
 8623a29:	e8 1c 30 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623a2e:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623a35:	08 
 8623a36:	89 04 24             	mov    %eax,(%esp)
 8623a39:	e8 0c 30 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623a3e:	eb 18                	jmp    8623a58 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xc50>
 8623a40:	89 d3                	mov    %edx,%ebx
 8623a42:	89 c6                	mov    %eax,%esi
 8623a44:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8623a4a:	89 04 24             	mov    %eax,(%esp)
 8623a4d:	e8 2e bb d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623a52:	89 f0                	mov    %esi,%eax
 8623a54:	89 da                	mov    %ebx,%edx
 8623a56:	eb 10                	jmp    8623a68 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xc60>
 8623a58:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8623a5e:	89 04 24             	mov    %eax,(%esp)
 8623a61:	e8 1a bb d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623a66:	eb 1b                	jmp    8623a83 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xc7b>
 8623a68:	89 d3                	mov    %edx,%ebx
 8623a6a:	89 c6                	mov    %eax,%esi
 8623a6c:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8623a72:	89 04 24             	mov    %eax,(%esp)
 8623a75:	e8 06 bb d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623a7a:	89 f0                	mov    %esi,%eax
 8623a7c:	89 da                	mov    %ebx,%edx
 8623a7e:	e9 d4 08 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623a83:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8623a89:	89 04 24             	mov    %eax,(%esp)
 8623a8c:	e8 ef ba d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623a91:	8d 45 88             	lea    -0x78(%ebp),%eax
 8623a94:	89 04 24             	mov    %eax,(%esp)
 8623a97:	e8 bc 24 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623a9f:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 8623aa5:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8623aa8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623aac:	89 04 24             	mov    %eax,(%esp)
 8623aaf:	e8 7a 52 00 00       	call   8628d2e <_ZNSt6vectorI12SkillUseItemSaIS0_EE3endEv>
 8623ab4:	83 ec 04             	sub    $0x4,%esp
 8623ab7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623aba:	8d 90 1c 01 00 00    	lea    0x11c(%eax),%edx
 8623ac0:	8d 45 90             	lea    -0x70(%ebp),%eax
 8623ac3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623ac7:	89 04 24             	mov    %eax,(%esp)
 8623aca:	e8 3b 52 00 00       	call   8628d0a <_ZNSt6vectorI12SkillUseItemSaIS0_EE5beginEv>
 8623acf:	83 ec 04             	sub    $0x4,%esp
 8623ad2:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8623ad5:	8d 55 88             	lea    -0x78(%ebp),%edx
 8623ad8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8623adc:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8623adf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8623ae3:	8b 55 90             	mov    -0x70(%ebp),%edx
 8623ae6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623aea:	89 04 24             	mov    %eax,(%esp)
 8623aed:	e8 62 52 00 00       	call   8628d54 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP12SkillUseItemSt6vectorIS2_SaIS2_EEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 8623af2:	83 ec 04             	sub    $0x4,%esp
 8623af5:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8623af8:	89 04 24             	mov    %eax,(%esp)
 8623afb:	e8 34 25 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623b00:	89 c3                	mov    %eax,%ebx
 8623b02:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623b09:	08 
 8623b0a:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623b10:	89 04 24             	mov    %eax,(%esp)
 8623b13:	e8 32 2f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623b18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623b1c:	89 04 24             	mov    %eax,(%esp)
 8623b1f:	e8 26 2f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623b24:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623b2b:	08 
 8623b2c:	89 04 24             	mov    %eax,(%esp)
 8623b2f:	e8 16 2f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623b34:	eb 15                	jmp    8623b4b <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xd43>
 8623b36:	89 d3                	mov    %edx,%ebx
 8623b38:	89 c6                	mov    %eax,%esi
 8623b3a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8623b3d:	89 04 24             	mov    %eax,(%esp)
 8623b40:	e8 3b ba d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623b45:	89 f0                	mov    %esi,%eax
 8623b47:	89 da                	mov    %ebx,%edx
 8623b49:	eb 0d                	jmp    8623b58 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xd50>
 8623b4b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8623b4e:	89 04 24             	mov    %eax,(%esp)
 8623b51:	e8 2a ba d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623b56:	eb 18                	jmp    8623b70 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xd68>
 8623b58:	89 d3                	mov    %edx,%ebx
 8623b5a:	89 c6                	mov    %eax,%esi
 8623b5c:	8d 45 88             	lea    -0x78(%ebp),%eax
 8623b5f:	89 04 24             	mov    %eax,(%esp)
 8623b62:	e8 19 ba d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623b67:	89 f0                	mov    %esi,%eax
 8623b69:	89 da                	mov    %ebx,%edx
 8623b6b:	e9 e7 07 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623b70:	8d 45 88             	lea    -0x78(%ebp),%eax
 8623b73:	89 04 24             	mov    %eax,(%esp)
 8623b76:	e8 05 ba d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623b7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623b7e:	8b 58 30             	mov    0x30(%eax),%ebx
 8623b81:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8623b88:	08 
 8623b89:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623b8f:	89 04 24             	mov    %eax,(%esp)
 8623b92:	e8 b3 2e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623b97:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623b9b:	89 04 24             	mov    %eax,(%esp)
 8623b9e:	e8 cd 2e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8623ba3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623ba6:	8b 58 34             	mov    0x34(%eax),%ebx
 8623ba9:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8623bb0:	08 
 8623bb1:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623bb7:	89 04 24             	mov    %eax,(%esp)
 8623bba:	e8 8b 2e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623bbf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623bc3:	89 04 24             	mov    %eax,(%esp)
 8623bc6:	e8 a5 2e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8623bcb:	8d 45 98             	lea    -0x68(%ebp),%eax
 8623bce:	89 04 24             	mov    %eax,(%esp)
 8623bd1:	e8 82 23 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623bd6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8623bd9:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8623bdf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623be3:	89 04 24             	mov    %eax,(%esp)
 8623be6:	e8 81 a6 a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8623beb:	83 ec 04             	sub    $0x4,%esp
 8623bee:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8623bf1:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8623bf7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623bfb:	89 04 24             	mov    %eax,(%esp)
 8623bfe:	e8 45 a6 a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8623c03:	83 ec 04             	sub    $0x4,%esp
 8623c06:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8623c09:	8d 55 98             	lea    -0x68(%ebp),%edx
 8623c0c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8623c10:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8623c13:	89 54 24 08          	mov    %edx,0x8(%esp)
 8623c17:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8623c1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623c1e:	89 04 24             	mov    %eax,(%esp)
 8623c21:	e8 79 15 d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 8623c26:	83 ec 04             	sub    $0x4,%esp
 8623c29:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8623c2c:	89 04 24             	mov    %eax,(%esp)
 8623c2f:	e8 00 24 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623c34:	89 c3                	mov    %eax,%ebx
 8623c36:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623c3d:	08 
 8623c3e:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623c44:	89 04 24             	mov    %eax,(%esp)
 8623c47:	e8 fe 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623c4c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623c50:	89 04 24             	mov    %eax,(%esp)
 8623c53:	e8 f2 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623c58:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623c5f:	08 
 8623c60:	89 04 24             	mov    %eax,(%esp)
 8623c63:	e8 e2 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623c68:	eb 15                	jmp    8623c7f <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xe77>
 8623c6a:	89 d3                	mov    %edx,%ebx
 8623c6c:	89 c6                	mov    %eax,%esi
 8623c6e:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8623c71:	89 04 24             	mov    %eax,(%esp)
 8623c74:	e8 07 b9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623c79:	89 f0                	mov    %esi,%eax
 8623c7b:	89 da                	mov    %ebx,%edx
 8623c7d:	eb 0d                	jmp    8623c8c <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xe84>
 8623c7f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8623c82:	89 04 24             	mov    %eax,(%esp)
 8623c85:	e8 f6 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623c8a:	eb 18                	jmp    8623ca4 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xe9c>
 8623c8c:	89 d3                	mov    %edx,%ebx
 8623c8e:	89 c6                	mov    %eax,%esi
 8623c90:	8d 45 98             	lea    -0x68(%ebp),%eax
 8623c93:	89 04 24             	mov    %eax,(%esp)
 8623c96:	e8 e5 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623c9b:	89 f0                	mov    %esi,%eax
 8623c9d:	89 da                	mov    %ebx,%edx
 8623c9f:	e9 b3 06 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623ca4:	8d 45 98             	lea    -0x68(%ebp),%eax
 8623ca7:	89 04 24             	mov    %eax,(%esp)
 8623caa:	e8 d1 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623caf:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8623cb2:	89 04 24             	mov    %eax,(%esp)
 8623cb5:	e8 9e 22 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623cba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623cbd:	05 00 01 00 00       	add    $0x100,%eax
 8623cc2:	8d 58 08             	lea    0x8(%eax),%ebx
 8623cc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623cc8:	8d 88 00 01 00 00    	lea    0x100(%eax),%ecx
 8623cce:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8623cd1:	8d 55 a8             	lea    -0x58(%ebp),%edx
 8623cd4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8623cd8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623cdc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8623ce0:	89 04 24             	mov    %eax,(%esp)
 8623ce3:	e8 e0 50 00 00       	call   8628dc8 <_ZSt8for_eachIPfN11sync_script12CStringMakerEET0_T_S4_S3_>
 8623ce8:	83 ec 04             	sub    $0x4,%esp
 8623ceb:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8623cee:	89 04 24             	mov    %eax,(%esp)
 8623cf1:	e8 3e 23 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623cf6:	89 c3                	mov    %eax,%ebx
 8623cf8:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623cff:	08 
 8623d00:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623d06:	89 04 24             	mov    %eax,(%esp)
 8623d09:	e8 3c 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623d0e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623d12:	89 04 24             	mov    %eax,(%esp)
 8623d15:	e8 30 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623d1a:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623d21:	08 
 8623d22:	89 04 24             	mov    %eax,(%esp)
 8623d25:	e8 20 2d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623d2a:	eb 15                	jmp    8623d41 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xf39>
 8623d2c:	89 d3                	mov    %edx,%ebx
 8623d2e:	89 c6                	mov    %eax,%esi
 8623d30:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8623d33:	89 04 24             	mov    %eax,(%esp)
 8623d36:	e8 45 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623d3b:	89 f0                	mov    %esi,%eax
 8623d3d:	89 da                	mov    %ebx,%edx
 8623d3f:	eb 0d                	jmp    8623d4e <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xf46>
 8623d41:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8623d44:	89 04 24             	mov    %eax,(%esp)
 8623d47:	e8 34 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623d4c:	eb 18                	jmp    8623d66 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xf5e>
 8623d4e:	89 d3                	mov    %edx,%ebx
 8623d50:	89 c6                	mov    %eax,%esi
 8623d52:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8623d55:	89 04 24             	mov    %eax,(%esp)
 8623d58:	e8 23 b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623d5d:	89 f0                	mov    %esi,%eax
 8623d5f:	89 da                	mov    %ebx,%edx
 8623d61:	e9 f1 05 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623d66:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8623d69:	89 04 24             	mov    %eax,(%esp)
 8623d6c:	e8 0f b8 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623d71:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8623d74:	89 04 24             	mov    %eax,(%esp)
 8623d77:	e8 dc 21 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623d7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623d7f:	05 38 01 00 00       	add    $0x138,%eax
 8623d84:	8d 58 08             	lea    0x8(%eax),%ebx
 8623d87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623d8a:	8d 88 38 01 00 00    	lea    0x138(%eax),%ecx
 8623d90:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8623d93:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8623d96:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8623d9a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623d9e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8623da2:	89 04 24             	mov    %eax,(%esp)
 8623da5:	e8 12 4f 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 8623daa:	83 ec 04             	sub    $0x4,%esp
 8623dad:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8623db0:	89 04 24             	mov    %eax,(%esp)
 8623db3:	e8 7c 22 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623db8:	89 c3                	mov    %eax,%ebx
 8623dba:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623dc1:	08 
 8623dc2:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623dc8:	89 04 24             	mov    %eax,(%esp)
 8623dcb:	e8 7a 2c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623dd0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623dd4:	89 04 24             	mov    %eax,(%esp)
 8623dd7:	e8 6e 2c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623ddc:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623de3:	08 
 8623de4:	89 04 24             	mov    %eax,(%esp)
 8623de7:	e8 5e 2c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623dec:	eb 15                	jmp    8623e03 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0xffb>
 8623dee:	89 d3                	mov    %edx,%ebx
 8623df0:	89 c6                	mov    %eax,%esi
 8623df2:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8623df5:	89 04 24             	mov    %eax,(%esp)
 8623df8:	e8 83 b7 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623dfd:	89 f0                	mov    %esi,%eax
 8623dff:	89 da                	mov    %ebx,%edx
 8623e01:	eb 0d                	jmp    8623e10 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1008>
 8623e03:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8623e06:	89 04 24             	mov    %eax,(%esp)
 8623e09:	e8 72 b7 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623e0e:	eb 18                	jmp    8623e28 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1020>
 8623e10:	89 d3                	mov    %edx,%ebx
 8623e12:	89 c6                	mov    %eax,%esi
 8623e14:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8623e17:	89 04 24             	mov    %eax,(%esp)
 8623e1a:	e8 61 b7 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623e1f:	89 f0                	mov    %esi,%eax
 8623e21:	89 da                	mov    %ebx,%edx
 8623e23:	e9 2f 05 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623e28:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8623e2b:	89 04 24             	mov    %eax,(%esp)
 8623e2e:	e8 4d b7 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623e33:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8623e36:	89 04 24             	mov    %eax,(%esp)
 8623e39:	e8 1a 21 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8623e3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623e41:	05 10 01 00 00       	add    $0x110,%eax
 8623e46:	8d 58 08             	lea    0x8(%eax),%ebx
 8623e49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623e4c:	8d 88 10 01 00 00    	lea    0x110(%eax),%ecx
 8623e52:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8623e55:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8623e58:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8623e5c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623e60:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8623e64:	89 04 24             	mov    %eax,(%esp)
 8623e67:	e8 50 4e 00 00       	call   8628cbc <_ZSt8for_eachIPiN11sync_script12CStringMakerEET0_T_S4_S3_>
 8623e6c:	83 ec 04             	sub    $0x4,%esp
 8623e6f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8623e72:	89 04 24             	mov    %eax,(%esp)
 8623e75:	e8 ba 21 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8623e7a:	89 c3                	mov    %eax,%ebx
 8623e7c:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623e83:	08 
 8623e84:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623e8a:	89 04 24             	mov    %eax,(%esp)
 8623e8d:	e8 b8 2b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623e92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623e96:	89 04 24             	mov    %eax,(%esp)
 8623e99:	e8 ac 2b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623e9e:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8623ea5:	08 
 8623ea6:	89 04 24             	mov    %eax,(%esp)
 8623ea9:	e8 9c 2b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623eae:	eb 15                	jmp    8623ec5 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x10bd>
 8623eb0:	89 d3                	mov    %edx,%ebx
 8623eb2:	89 c6                	mov    %eax,%esi
 8623eb4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8623eb7:	89 04 24             	mov    %eax,(%esp)
 8623eba:	e8 c1 b6 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623ebf:	89 f0                	mov    %esi,%eax
 8623ec1:	89 da                	mov    %ebx,%edx
 8623ec3:	eb 0d                	jmp    8623ed2 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x10ca>
 8623ec5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8623ec8:	89 04 24             	mov    %eax,(%esp)
 8623ecb:	e8 b0 b6 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623ed0:	eb 18                	jmp    8623eea <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x10e2>
 8623ed2:	89 d3                	mov    %edx,%ebx
 8623ed4:	89 c6                	mov    %eax,%esi
 8623ed6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8623ed9:	89 04 24             	mov    %eax,(%esp)
 8623edc:	e8 9f b6 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623ee1:	89 f0                	mov    %esi,%eax
 8623ee3:	89 da                	mov    %ebx,%edx
 8623ee5:	e9 6d 04 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 8623eea:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8623eed:	89 04 24             	mov    %eax,(%esp)
 8623ef0:	e8 8b b6 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8623ef5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623ef8:	8b b8 6c 01 00 00    	mov    0x16c(%eax),%edi
 8623efe:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8623f01:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 8623f07:	c1 e2 0c             	shl    $0xc,%edx
 8623f0a:	01 d0                	add    %edx,%eax
 8623f0c:	89 c3                	mov    %eax,%ebx
 8623f0e:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8623f12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623f15:	05 64 01 00 00       	add    $0x164,%eax
 8623f1a:	89 04 24             	mov    %eax,(%esp)
 8623f1d:	e8 ce 25 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8623f22:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8623f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8623f2a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8623f2d:	89 04 24             	mov    %eax,(%esp)
 8623f30:	e8 12 8d ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8623f35:	89 c3                	mov    %eax,%ebx
 8623f37:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623f3a:	8b 80 68 01 00 00    	mov    0x168(%eax),%eax
 8623f40:	89 85 f4 a6 fe ff    	mov    %eax,-0x1590c(%ebp)
 8623f46:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8623f49:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 8623f4f:	c1 e2 0c             	shl    $0xc,%edx
 8623f52:	01 d0                	add    %edx,%eax
 8623f54:	89 c6                	mov    %eax,%esi
 8623f56:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8623f5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8623f5d:	05 60 01 00 00       	add    $0x160,%eax
 8623f62:	89 04 24             	mov    %eax,(%esp)
 8623f65:	e8 86 25 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8623f6a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8623f6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8623f72:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8623f75:	89 04 24             	mov    %eax,(%esp)
 8623f78:	e8 ca 8c ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8623f7d:	89 c6                	mov    %eax,%esi
 8623f7f:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8623f86:	08 
 8623f87:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8623f8d:	89 04 24             	mov    %eax,(%esp)
 8623f90:	e8 b5 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623f95:	89 74 24 04          	mov    %esi,0x4(%esp)
 8623f99:	89 04 24             	mov    %eax,(%esp)
 8623f9c:	e8 a9 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623fa1:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 8623fa8:	08 
 8623fa9:	89 04 24             	mov    %eax,(%esp)
 8623fac:	e8 99 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623fb1:	8b 95 f4 a6 fe ff    	mov    -0x1590c(%ebp),%edx
 8623fb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8623fbb:	89 04 24             	mov    %eax,(%esp)
 8623fbe:	e8 ad 2a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8623fc3:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 8623fca:	08 
 8623fcb:	89 04 24             	mov    %eax,(%esp)
 8623fce:	e8 77 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623fd3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8623fd7:	89 04 24             	mov    %eax,(%esp)
 8623fda:	e8 6b 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623fdf:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 8623fe6:	08 
 8623fe7:	89 04 24             	mov    %eax,(%esp)
 8623fea:	e8 5b 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8623fef:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8623ff3:	89 04 24             	mov    %eax,(%esp)
 8623ff6:	e8 75 2a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8623ffb:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8624002:	08 
 8624003:	89 04 24             	mov    %eax,(%esp)
 8624006:	e8 3f 2a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862400b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 862400e:	8d 85 f8 a6 fe ff    	lea    -0x15908(%ebp),%eax
 8624014:	c1 e2 0c             	shl    $0xc,%edx
 8624017:	01 d0                	add    %edx,%eax
 8624019:	89 c3                	mov    %eax,%ebx
 862401b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 862401f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624022:	05 94 01 00 00       	add    $0x194,%eax
 8624027:	89 04 24             	mov    %eax,(%esp)
 862402a:	e8 c1 24 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 862402f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8624033:	89 44 24 04          	mov    %eax,0x4(%esp)
 8624037:	8b 45 dc             	mov    -0x24(%ebp),%eax
 862403a:	89 04 24             	mov    %eax,(%esp)
 862403d:	e8 05 8c ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8624042:	89 c3                	mov    %eax,%ebx
 8624044:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862404b:	08 
 862404c:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8624052:	89 04 24             	mov    %eax,(%esp)
 8624055:	e8 f0 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862405a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862405e:	89 04 24             	mov    %eax,(%esp)
 8624061:	e8 e4 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624066:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862406d:	08 
 862406e:	89 04 24             	mov    %eax,(%esp)
 8624071:	e8 d4 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624076:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624079:	8b 98 44 02 00 00    	mov    0x244(%eax),%ebx
 862407f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8624082:	8b b0 40 02 00 00    	mov    0x240(%eax),%esi
 8624088:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862408f:	08 
 8624090:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8624096:	89 04 24             	mov    %eax,(%esp)
 8624099:	e8 ac 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862409e:	89 74 24 04          	mov    %esi,0x4(%esp)
 86240a2:	89 04 24             	mov    %eax,(%esp)
 86240a5:	e8 c6 29 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86240aa:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 86240b1:	08 
 86240b2:	89 04 24             	mov    %eax,(%esp)
 86240b5:	e8 90 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86240ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86240be:	89 04 24             	mov    %eax,(%esp)
 86240c1:	e8 aa 29 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86240c6:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 86240cd:	08 
 86240ce:	89 04 24             	mov    %eax,(%esp)
 86240d1:	e8 74 29 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86240d6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86240d9:	89 04 24             	mov    %eax,(%esp)
 86240dc:	e8 77 1e d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 86240e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86240e4:	8d 90 98 01 00 00    	lea    0x198(%eax),%edx
 86240ea:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86240ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 86240f1:	89 04 24             	mov    %eax,(%esp)
 86240f4:	e8 73 a1 a6 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86240f9:	83 ec 04             	sub    $0x4,%esp
 86240fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86240ff:	8d 90 98 01 00 00    	lea    0x198(%eax),%edx
 8624105:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8624108:	89 54 24 04          	mov    %edx,0x4(%esp)
 862410c:	89 04 24             	mov    %eax,(%esp)
 862410f:	e8 34 a1 a6 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8624114:	83 ec 04             	sub    $0x4,%esp
 8624117:	8d 45 bc             	lea    -0x44(%ebp),%eax
 862411a:	8d 55 c0             	lea    -0x40(%ebp),%edx
 862411d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8624121:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8624124:	89 54 24 08          	mov    %edx,0x8(%esp)
 8624128:	8b 55 c8             	mov    -0x38(%ebp),%edx
 862412b:	89 54 24 04          	mov    %edx,0x4(%esp)
 862412f:	89 04 24             	mov    %eax,(%esp)
 8624132:	e8 68 10 d7 ff       	call   839519f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEN11sync_script12CStringMakerEET0_T_SA_S9_>
 8624137:	83 ec 04             	sub    $0x4,%esp
 862413a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 862413d:	89 04 24             	mov    %eax,(%esp)
 8624140:	e8 ef 1e d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8624145:	89 c3                	mov    %eax,%ebx
 8624147:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862414e:	08 
 862414f:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8624155:	89 04 24             	mov    %eax,(%esp)
 8624158:	e8 ed 28 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862415d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8624161:	89 04 24             	mov    %eax,(%esp)
 8624164:	e8 e1 28 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624169:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8624170:	08 
 8624171:	89 04 24             	mov    %eax,(%esp)
 8624174:	e8 d1 28 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624179:	eb 15                	jmp    8624190 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1388>
 862417b:	89 d3                	mov    %edx,%ebx
 862417d:	89 c6                	mov    %eax,%esi
 862417f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8624182:	89 04 24             	mov    %eax,(%esp)
 8624185:	e8 f6 b3 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862418a:	89 f0                	mov    %esi,%eax
 862418c:	89 da                	mov    %ebx,%edx
 862418e:	eb 0d                	jmp    862419d <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1395>
 8624190:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8624193:	89 04 24             	mov    %eax,(%esp)
 8624196:	e8 e5 b3 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 862419b:	eb 18                	jmp    86241b5 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x13ad>
 862419d:	89 d3                	mov    %edx,%ebx
 862419f:	89 c6                	mov    %eax,%esi
 86241a1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86241a4:	89 04 24             	mov    %eax,(%esp)
 86241a7:	e8 d4 b3 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86241ac:	89 f0                	mov    %esi,%eax
 86241ae:	89 da                	mov    %ebx,%edx
 86241b0:	e9 a2 01 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 86241b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86241b8:	89 04 24             	mov    %eax,(%esp)
 86241bb:	e8 c0 b3 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86241c0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86241c3:	89 04 24             	mov    %eax,(%esp)
 86241c6:	e8 8d 1d d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 86241cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86241ce:	8d 90 a8 01 00 00    	lea    0x1a8(%eax),%edx
 86241d4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86241d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86241db:	89 04 24             	mov    %eax,(%esp)
 86241de:	e8 1f 2c d7 ff       	call   8396e02 <_ZNSt6vectorIS_IfSaIfEESaIS1_EE3endEv>
 86241e3:	83 ec 04             	sub    $0x4,%esp
 86241e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86241e9:	8d 90 a8 01 00 00    	lea    0x1a8(%eax),%edx
 86241ef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86241f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86241f6:	89 04 24             	mov    %eax,(%esp)
 86241f9:	e8 84 2b d7 ff       	call   8396d82 <_ZNSt6vectorIS_IfSaIfEESaIS1_EE5beginEv>
 86241fe:	83 ec 04             	sub    $0x4,%esp
 8624201:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8624204:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8624207:	89 54 24 0c          	mov    %edx,0xc(%esp)
 862420b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 862420e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8624212:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8624215:	89 54 24 04          	mov    %edx,0x4(%esp)
 8624219:	89 04 24             	mov    %eax,(%esp)
 862421c:	e8 f5 4b 00 00       	call   8628e16 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPSt6vectorIfSaIfEES2_IS4_SaIS4_EEEEN11sync_script12CStringMakerEET0_T_SC_SB_>
 8624221:	83 ec 04             	sub    $0x4,%esp
 8624224:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8624227:	89 04 24             	mov    %eax,(%esp)
 862422a:	e8 05 1e d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 862422f:	89 c3                	mov    %eax,%ebx
 8624231:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8624238:	08 
 8624239:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 862423f:	89 04 24             	mov    %eax,(%esp)
 8624242:	e8 03 28 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624247:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862424b:	89 04 24             	mov    %eax,(%esp)
 862424e:	e8 f7 27 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624253:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862425a:	08 
 862425b:	89 04 24             	mov    %eax,(%esp)
 862425e:	e8 e7 27 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8624263:	eb 15                	jmp    862427a <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1472>
 8624265:	89 d3                	mov    %edx,%ebx
 8624267:	89 c6                	mov    %eax,%esi
 8624269:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862426c:	89 04 24             	mov    %eax,(%esp)
 862426f:	e8 0c b3 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624274:	89 f0                	mov    %esi,%eax
 8624276:	89 da                	mov    %ebx,%edx
 8624278:	eb 0d                	jmp    8624287 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x147f>
 862427a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 862427d:	89 04 24             	mov    %eax,(%esp)
 8624280:	e8 fb b2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624285:	eb 18                	jmp    862429f <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1497>
 8624287:	89 d3                	mov    %edx,%ebx
 8624289:	89 c6                	mov    %eax,%esi
 862428b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 862428e:	89 04 24             	mov    %eax,(%esp)
 8624291:	e8 ea b2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8624296:	89 f0                	mov    %esi,%eax
 8624298:	89 da                	mov    %ebx,%edx
 862429a:	e9 b8 00 00 00       	jmp    8624357 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x154f>
 862429f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86242a2:	89 04 24             	mov    %eax,(%esp)
 86242a5:	e8 d6 b2 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 86242aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86242ad:	8b 98 20 02 00 00    	mov    0x220(%eax),%ebx
 86242b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86242b6:	8b b0 1c 02 00 00    	mov    0x21c(%eax),%esi
 86242bc:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 86242c3:	08 
 86242c4:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 86242ca:	89 04 24             	mov    %eax,(%esp)
 86242cd:	e8 78 27 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86242d2:	89 74 24 04          	mov    %esi,0x4(%esp)
 86242d6:	89 04 24             	mov    %eax,(%esp)
 86242d9:	e8 92 27 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86242de:	c7 44 24 04 ec 2d ce 	movl   $0x8ce2dec,0x4(%esp)
 86242e5:	08 
 86242e6:	89 04 24             	mov    %eax,(%esp)
 86242e9:	e8 5c 27 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86242ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86242f2:	89 04 24             	mov    %eax,(%esp)
 86242f5:	e8 76 27 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86242fa:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8624301:	08 
 8624302:	89 04 24             	mov    %eax,(%esp)
 8624305:	e8 40 27 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862430a:	8d 85 f8 56 ff ff    	lea    -0xa908(%ebp),%eax
 8624310:	89 04 24             	mov    %eax,(%esp)
 8624313:	e8 ca 26 00 00       	call   86269e2 <_ZN13CStreamBuffer5c_strEv>
 8624318:	89 44 24 08          	mov    %eax,0x8(%esp)
 862431c:	c7 44 24 04 b4 3e ce 	movl   $0x8ce3eb4,0x4(%esp)
 8624323:	08 
 8624324:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8624327:	89 04 24             	mov    %eax,(%esp)
 862432a:	e8 91 fe dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862432f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624336:	00 
 8624337:	8b 45 dc             	mov    -0x24(%ebp),%eax
 862433a:	89 04 24             	mov    %eax,(%esp)
 862433d:	e8 e4 ff dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8624342:	83 f0 01             	xor    $0x1,%eax
 8624345:	84 c0                	test   %al,%al
 8624347:	74 07                	je     8624350 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x1548>
 8624349:	bb 00 00 00 00       	mov    $0x0,%ebx
 862434e:	eb 25                	jmp    8624375 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x156d>
 8624350:	bb 01 00 00 00       	mov    $0x1,%ebx
 8624355:	eb 1e                	jmp    8624375 <_ZN11sync_script11CSyncScript17insert_skill_infoEP13STSkillScriptii+0x156d>
 8624357:	89 d3                	mov    %edx,%ebx
 8624359:	89 c6                	mov    %eax,%esi
 862435b:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8624361:	89 04 24             	mov    %eax,(%esp)
 8624364:	e8 71 fa a5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8624369:	89 f0                	mov    %esi,%eax
 862436b:	89 da                	mov    %ebx,%edx
 862436d:	89 04 24             	mov    %eax,(%esp)
 8624370:	e8 db f3 4b 00       	call   8ae3750 <_Unwind_Resume>
 8624375:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 862437b:	89 04 24             	mov    %eax,(%esp)
 862437e:	e8 57 fa a5 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8624383:	89 d8                	mov    %ebx,%eax
 8624385:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8624388:	83 c4 00             	add    $0x0,%esp
 862438b:	5b                   	pop    %ebx
 862438c:	5e                   	pop    %esi
 862438d:	5f                   	pop    %edi
 862438e:	5d                   	pop    %ebp
 862438f:	c3                   	ret

```

```c
// sync_script::CSyncScript::insert_skill_info @ 0x8622e08

/* sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int) */

bool __thiscall
sync_script::CSyncScript::insert_skill_info
          (CSyncScript *this,STSkillScript *param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CStreamBuffer *pCVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  byte bVar17;
  char acStack_1590c [45056];
  CStreamBuffer local_a90c [40960];
  char local_90c [1024];
  char local_50c [1024];
  vector<int,std::allocator<int>> local_10c [12];
  cMyTrace local_100 [16];
  cMyTrace local_f0 [16];
  CStringMaker local_e0 [4];
  CStringMaker local_dc [4];
  undefined4 local_d8;
  undefined4 local_d4;
  CStringMaker local_d0 [4];
  CStringMaker local_cc [4];
  CStringMaker local_c8 [4];
  CStringMaker local_c4 [4];
  CStringMaker local_c0 [4];
  CStringMaker local_bc [4];
  CStringMaker local_b8 [4];
  CStringMaker local_b4 [4];
  CStringMaker local_b0 [4];
  CStringMaker local_ac [4];
  CStringMaker local_a8 [4];
  CStringMaker local_a4 [4];
  CStringMaker local_a0 [4];
  CStringMaker local_9c [4];
  undefined4 local_98;
  undefined4 local_94;
  CStringMaker local_90 [4];
  CStringMaker local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  CStringMaker local_80 [4];
  CStringMaker local_7c [4];
  undefined4 local_78;
  undefined4 local_74;
  CStringMaker local_70 [4];
  CStringMaker local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  CStringMaker local_60 [4];
  CStringMaker local_5c [4];
  CStringMaker local_58 [4];
  CStringMaker local_54 [4];
  CStringMaker local_50 [4];
  CStringMaker local_4c [4];
  CStringMaker local_48 [4];
  CStringMaker local_44 [4];
  undefined4 local_40;
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [4];
  undefined4 local_30;
  undefined4 local_2c;
  MySQL *local_28;
  int local_24;
  uint local_20;
  
  bVar17 = 0;
  if (*this == (CSyncScript)0x1) {
    local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    std::vector<int,std::allocator<int>>::vector(local_10c);
    local_20 = 0;
    while (uVar3 = std::vector<int,std::allocator<int>>::size
                             ((vector<int,std::allocator<int>> *)(param_1 + 0x44)), local_20 < uVar3
          ) {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(param_1 + 0x44),local_20);
                    /* try { // try from 08622e84 to 08623264 has its CatchHandler @ 08624357 */
      std::vector<int,std::allocator<int>>::push_back(local_10c,piVar2);
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(param_1 + 0x50),local_20);
      std::vector<int,std::allocator<int>>::push_back(local_10c,piVar2);
      local_20 = local_20 + 1;
    }
    memset(acStack_1590c,0,0xb000);
    local_24 = 0;
    pcVar4 = local_50c;
    for (iVar13 = 0x100; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar17 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar1 = CodePage::script2Database(pcVar4,local_50c);
    if (cVar1 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_100,
                         "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)"
                         ,0x7ff,5);
      cMyTrace::operator()
                (local_100,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)",0x7ff)
      ;
    }
    pcVar4 = local_90c;
    for (iVar13 = 0x100; iVar13 != 0; iVar13 = iVar13 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar17 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 8));
    cVar1 = CodePage::script2Database(pcVar4,local_90c);
    if (cVar1 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 8));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_f0,
                         "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)"
                         ,0x807,5);
      cMyTrace::operator()
                (local_f0,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_skill_info(STSkillScript*, int, int)",0x807)
      ;
    }
    CStreamBuffer::CStreamBuffer(local_a90c);
    CStreamBuffer::operator<<(local_a90c,param_2);
    iVar13 = *(int *)param_1;
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,param_3);
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)GetEscapeString(local_28,local_50c,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)GetEscapeString(local_28,local_90c,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x10));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xc));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    CStringMaker::CStringMaker(local_dc);
                    /* try { // try from 08623278 to 086232c6 has its CatchHandler @ 08623336 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_e0,local_d4,local_d8,local_dc);
                    /* try { // try from 086232d3 to 0862330b has its CatchHandler @ 0862330e */
    pcVar4 = (char *)CStringMaker::c_str(local_e0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 0862332f to 08623333 has its CatchHandler @ 08623336 */
    CStringMaker::~CStringMaker(local_e0);
                    /* try { // try from 0862335a to 086233bc has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_dc);
    iVar13 = *(int *)(param_1 + 0x5c);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    iVar13 = *(int *)(param_1 + 0x60);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    CStringMaker::CStringMaker(local_cc);
                    /* try { // try from 086233e7 to 086233eb has its CatchHandler @ 0862345b */
    std::for_each<int*,sync_script::CStringMaker>(local_d0,param_1 + 0x7c,param_1 + 0x94,local_cc);
                    /* try { // try from 086233f8 to 08623430 has its CatchHandler @ 08623433 */
    pcVar4 = (char *)CStringMaker::c_str(local_d0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623454 to 08623458 has its CatchHandler @ 0862345b */
    CStringMaker::~CStringMaker(local_d0);
                    /* try { // try from 0862347f to 08623491 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_cc);
    CStringMaker::CStringMaker(local_c4);
                    /* try { // try from 086234c2 to 086234c6 has its CatchHandler @ 08623852 */
    std::for_each<int*,sync_script::CStringMaker>(local_c8,param_1 + 0xdc,param_1 + 0xe4,local_c4);
                    /* try { // try from 086234d3 to 086234e7 has its CatchHandler @ 0862382a */
    pcVar4 = (char *)CStringMaker::c_str(local_c8);
    CStringMaker::CStringMaker(local_bc);
                    /* try { // try from 08623518 to 0862351c has its CatchHandler @ 08623802 */
    std::for_each<int*,sync_script::CStringMaker>(local_c0,param_1 + 0xcc,param_1 + 0xd4,local_bc);
                    /* try { // try from 08623529 to 08623541 has its CatchHandler @ 086237da */
    pcVar9 = (char *)CStringMaker::c_str(local_c0);
    CStringMaker::CStringMaker(local_b4);
                    /* try { // try from 08623572 to 08623576 has its CatchHandler @ 086237b2 */
    std::for_each<int*,sync_script::CStringMaker>(local_b8,param_1 + 0xbc,param_1 + 0xc4,local_b4);
                    /* try { // try from 08623583 to 0862359b has its CatchHandler @ 0862378a */
    pcVar10 = (char *)CStringMaker::c_str(local_b8);
    CStringMaker::CStringMaker(local_ac);
                    /* try { // try from 086235cc to 086235d0 has its CatchHandler @ 08623762 */
    std::for_each<int*,sync_script::CStringMaker>(local_b0,param_1 + 0xac,param_1 + 0xb4,local_ac);
                    /* try { // try from 086235dd to 086235f1 has its CatchHandler @ 0862373a */
    pcVar11 = (char *)CStringMaker::c_str(local_b0);
    CStringMaker::CStringMaker(local_a4);
                    /* try { // try from 08623622 to 08623626 has its CatchHandler @ 08623712 */
    std::for_each<int*,sync_script::CStringMaker>(local_a8,param_1 + 0x9c,param_1 + 0xa4,local_a4);
                    /* try { // try from 08623633 to 086236e7 has its CatchHandler @ 086236ea */
    pcVar12 = (char *)CStringMaker::c_str(local_a8);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar12);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar11);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar10);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar9);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,";");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 0862370b to 0862370f has its CatchHandler @ 08623712 */
    CStringMaker::~CStringMaker(local_a8);
                    /* try { // try from 08623733 to 08623737 has its CatchHandler @ 0862373a */
    CStringMaker::~CStringMaker(local_a4);
                    /* try { // try from 0862375b to 0862375f has its CatchHandler @ 08623762 */
    CStringMaker::~CStringMaker(local_b0);
                    /* try { // try from 08623783 to 08623787 has its CatchHandler @ 0862378a */
    CStringMaker::~CStringMaker(local_ac);
                    /* try { // try from 086237ab to 086237af has its CatchHandler @ 086237b2 */
    CStringMaker::~CStringMaker(local_b8);
                    /* try { // try from 086237d3 to 086237d7 has its CatchHandler @ 086237da */
    CStringMaker::~CStringMaker(local_b4);
                    /* try { // try from 086237fb to 086237ff has its CatchHandler @ 08623802 */
    CStringMaker::~CStringMaker(local_c0);
                    /* try { // try from 08623823 to 08623827 has its CatchHandler @ 0862382a */
    CStringMaker::~CStringMaker(local_bc);
                    /* try { // try from 0862384b to 0862384f has its CatchHandler @ 08623852 */
    CStringMaker::~CStringMaker(local_c8);
                    /* try { // try from 08623876 to 08623888 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_c4);
    CStringMaker::CStringMaker(local_9c);
                    /* try { // try from 0862389f to 086238f0 has its CatchHandler @ 08623960 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_a0,local_94,local_98,local_9c);
                    /* try { // try from 086238fd to 08623935 has its CatchHandler @ 08623938 */
    pcVar4 = (char *)CStringMaker::c_str(local_a0);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623959 to 0862395d has its CatchHandler @ 08623960 */
    CStringMaker::~CStringMaker(local_a0);
                    /* try { // try from 08623984 to 08623996 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_9c);
    CStringMaker::CStringMaker(local_8c);
                    /* try { // try from 086239ad to 086239f8 has its CatchHandler @ 08623a68 */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_90,local_84,local_88,local_8c);
                    /* try { // try from 08623a05 to 08623a3d has its CatchHandler @ 08623a40 */
    pcVar4 = (char *)CStringMaker::c_str(local_90);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623a61 to 08623a65 has its CatchHandler @ 08623a68 */
    CStringMaker::~CStringMaker(local_90);
                    /* try { // try from 08623a8c to 08623a9b has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_8c);
    CStringMaker::CStringMaker(local_7c);
                    /* try { // try from 08623aaf to 08623af1 has its CatchHandler @ 08623b58 */
    std::vector<SkillUseItem,std::allocator<SkillUseItem>>::end();
    std::vector<SkillUseItem,std::allocator<SkillUseItem>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<SkillUseItem*,std::vector<SkillUseItem,std::allocator<SkillUseItem>>>,sync_script::CStringMaker>
              (local_80,local_74,local_78,local_7c);
                    /* try { // try from 08623afb to 08623b33 has its CatchHandler @ 08623b36 */
    pcVar4 = (char *)CStringMaker::c_str(local_80);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623b51 to 08623b55 has its CatchHandler @ 08623b58 */
    CStringMaker::~CStringMaker(local_80);
                    /* try { // try from 08623b76 to 08623bd5 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_7c);
    iVar13 = *(int *)(param_1 + 0x30);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    iVar13 = *(int *)(param_1 + 0x34);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", ");
    CStreamBuffer::operator<<(pCVar8,iVar13);
    CStringMaker::CStringMaker(local_6c);
                    /* try { // try from 08623be6 to 08623c25 has its CatchHandler @ 08623c8c */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_70,local_64,local_68,local_6c);
                    /* try { // try from 08623c2f to 08623c67 has its CatchHandler @ 08623c6a */
    pcVar4 = (char *)CStringMaker::c_str(local_70);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623c85 to 08623c89 has its CatchHandler @ 08623c8c */
    CStringMaker::~CStringMaker(local_70);
                    /* try { // try from 08623caa to 08623cb9 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_6c);
    CStringMaker::CStringMaker(local_5c);
                    /* try { // try from 08623ce3 to 08623ce7 has its CatchHandler @ 08623d4e */
    std::for_each<float*,sync_script::CStringMaker>
              (local_60,param_1 + 0x100,param_1 + 0x108,local_5c);
                    /* try { // try from 08623cf1 to 08623d29 has its CatchHandler @ 08623d2c */
    pcVar4 = (char *)CStringMaker::c_str(local_60);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623d47 to 08623d4b has its CatchHandler @ 08623d4e */
    CStringMaker::~CStringMaker(local_60);
                    /* try { // try from 08623d6c to 08623d7b has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_5c);
    CStringMaker::CStringMaker(local_54);
                    /* try { // try from 08623da5 to 08623da9 has its CatchHandler @ 08623e10 */
    std::for_each<int*,sync_script::CStringMaker>(local_58,param_1 + 0x138,param_1 + 0x140,local_54)
    ;
                    /* try { // try from 08623db3 to 08623deb has its CatchHandler @ 08623dee */
    pcVar4 = (char *)CStringMaker::c_str(local_58);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623e09 to 08623e0d has its CatchHandler @ 08623e10 */
    CStringMaker::~CStringMaker(local_58);
                    /* try { // try from 08623e2e to 08623e3d has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_54);
    CStringMaker::CStringMaker(local_4c);
                    /* try { // try from 08623e67 to 08623e6b has its CatchHandler @ 08623ed2 */
    std::for_each<int*,sync_script::CStringMaker>(local_50,param_1 + 0x110,param_1 + 0x118,local_4c)
    ;
                    /* try { // try from 08623e75 to 08623ead has its CatchHandler @ 08623eb0 */
    pcVar4 = (char *)CStringMaker::c_str(local_50);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08623ecb to 08623ecf has its CatchHandler @ 08623ed2 */
    CStringMaker::~CStringMaker(local_50);
                    /* try { // try from 08623ef0 to 086240e0 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_4c);
    iVar13 = *(int *)(param_1 + 0x16c);
    iVar14 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x164));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar14);
    iVar14 = *(int *)(param_1 + 0x168);
    iVar15 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar9 = (char *)std::string::c_str((string *)(param_1 + 0x160));
    pcVar9 = (char *)GetEscapeString(local_28,pcVar9,acStack_1590c + iVar15);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar9);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = local_24 * 0x1000;
    local_24 = local_24 + 1;
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0x194));
    pcVar4 = (char *)GetEscapeString(local_28,pcVar4,acStack_1590c + iVar13);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
    iVar13 = *(int *)(param_1 + 0x244);
    iVar14 = *(int *)(param_1 + 0x240);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    CStringMaker::CStringMaker(local_44);
                    /* try { // try from 086240f4 to 08624136 has its CatchHandler @ 0862419d */
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,sync_script::CStringMaker>
              (local_48,local_3c,local_40,local_44);
                    /* try { // try from 08624140 to 08624178 has its CatchHandler @ 0862417b */
    pcVar4 = (char *)CStringMaker::c_str(local_48);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08624196 to 0862419a has its CatchHandler @ 0862419d */
    CStringMaker::~CStringMaker(local_48);
                    /* try { // try from 086241bb to 086241ca has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_44);
    CStringMaker::CStringMaker(local_34);
                    /* try { // try from 086241de to 08624220 has its CatchHandler @ 08624287 */
    std::
    vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
    ::end();
    std::
    vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
    ::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<std::vector<float,std::allocator<float>>*,std::vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>>,sync_script::CStringMaker>
              (local_38,local_2c,local_30,local_34);
                    /* try { // try from 0862422a to 08624262 has its CatchHandler @ 08624265 */
    pcVar4 = (char *)CStringMaker::c_str(local_38);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,pcVar4);
    CStreamBuffer::operator<<(pCVar8,"\'");
                    /* try { // try from 08624280 to 08624284 has its CatchHandler @ 08624287 */
    CStringMaker::~CStringMaker(local_38);
                    /* try { // try from 086242a5 to 08624341 has its CatchHandler @ 08624357 */
    CStringMaker::~CStringMaker(local_34);
    iVar13 = *(int *)(param_1 + 0x220);
    iVar14 = *(int *)(param_1 + 0x21c);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(local_a90c,", \'");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar14);
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,",");
    pCVar8 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar8,iVar13);
    CStreamBuffer::operator<<(pCVar8,"\'");
    uVar5 = CStreamBuffer::c_str(local_a90c);
    MySQL::set_query(local_28,
                     "inSert into skill_info(job_index, skill_index, module_type, name, name2, basic_explain, skill_explain, purchase_cost, type, skill_class, growtype_maximum_level, second_growtype_maximum_level, skill_fitness_growtype, skill_fitness_second_growtype, consume_item, required_level, required_level_range, pre_required_skill, consume_mp, cool_time, casting_time, icon, command_key_explain, skill_command_advantage, static_data, level_info, start_cool_time) values(%s)"
                     ,uVar5);
    cVar1 = MySQL::exec(local_28,true);
    bVar16 = cVar1 == '\x01';
    std::vector<int,std::allocator<int>>::~vector(local_10c);
  }
  else {
    bVar16 = true;
  }
  return bVar16;
}

```

---

## insert_stackable_item_to_db

```asm
// === 08620968 sync_script::CSyncScript::insert_stackable_item_to_db  [0x08620968-0x8622373] ===
 8620968:	55                   	push   %ebp
 8620969:	89 e5                	mov    %esp,%ebp
 862096b:	57                   	push   %edi
 862096c:	56                   	push   %esi
 862096d:	53                   	push   %ebx
 862096e:	81 ec 8c b8 00 00    	sub    $0xb88c,%esp
 8620974:	8b 45 08             	mov    0x8(%ebp),%eax
 8620977:	0f b6 00             	movzbl (%eax),%eax
 862097a:	83 f0 01             	xor    $0x1,%eax
 862097d:	84 c0                	test   %al,%al
 862097f:	74 0a                	je     862098b <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x23>
 8620981:	bb 01 00 00 00       	mov    $0x1,%ebx
 8620986:	e9 db 19 00 00       	jmp    8622366 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19fe>
 862098b:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8620990:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8620997:	00 
 8620998:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862099f:	00 
 86209a0:	89 04 24             	mov    %eax,(%esp)
 86209a3:	e8 96 48 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86209a8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86209ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 86209ae:	05 bc 00 00 00       	add    $0xbc,%eax
 86209b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86209b7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86209ba:	89 04 24             	mov    %eax,(%esp)
 86209bd:	e8 ee 6f 0e 00       	call   87079b0 <_ZNSsC1ERKSs>
 86209c2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86209c9:	00 
 86209ca:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86209cd:	89 44 24 14          	mov    %eax,0x14(%esp)
 86209d1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 86209d4:	89 44 24 10          	mov    %eax,0x10(%esp)
 86209d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86209df:	00 
 86209e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86209e7:	00 
 86209e8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86209eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86209ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86209f2:	89 04 24             	mov    %eax,(%esp)
 86209f5:	e8 10 c5 ff ff       	call   861cf0a <_ZN11sync_script11CSyncScript7GetTypeESs17ENUM_CHARACTERJOBiRiS2_b>
 86209fa:	89 c3                	mov    %eax,%ebx
 86209fc:	83 f3 01             	xor    $0x1,%ebx
 86209ff:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8620a02:	89 04 24             	mov    %eax,(%esp)
 8620a05:	e8 d6 71 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8620a0a:	84 db                	test   %bl,%bl
 8620a0c:	75 1d                	jne    8620a2b <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0xc3>
 8620a0e:	eb 25                	jmp    8620a35 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0xcd>
 8620a10:	89 d3                	mov    %edx,%ebx
 8620a12:	89 c6                	mov    %eax,%esi
 8620a14:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8620a17:	89 04 24             	mov    %eax,(%esp)
 8620a1a:	e8 c1 71 0e 00       	call   8707be0 <_ZNSsD1Ev>
 8620a1f:	89 f0                	mov    %esi,%eax
 8620a21:	89 da                	mov    %ebx,%edx
 8620a23:	89 04 24             	mov    %eax,(%esp)
 8620a26:	e8 25 2d 4c 00       	call   8ae3750 <_Unwind_Resume>
 8620a2b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8620a30:	e9 31 19 00 00       	jmp    8622366 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19fe>
 8620a35:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620a3b:	89 04 24             	mov    %eax,(%esp)
 8620a3e:	e8 7b 5f 00 00       	call   86269be <_ZN13CStreamBufferC1Ev>
 8620a43:	8d 9d 90 e7 ff ff    	lea    -0x1870(%ebp),%ebx
 8620a49:	b8 00 00 00 00       	mov    $0x0,%eax
 8620a4e:	ba 00 04 00 00       	mov    $0x400,%edx
 8620a53:	89 df                	mov    %ebx,%edi
 8620a55:	89 d1                	mov    %edx,%ecx
 8620a57:	f3 ab                	rep stos %eax,%es:(%edi)
 8620a59:	8d 9d 90 fb ff ff    	lea    -0x470(%ebp),%ebx
 8620a5f:	b8 00 00 00 00       	mov    $0x0,%eax
 8620a64:	ba 00 01 00 00       	mov    $0x100,%edx
 8620a69:	89 df                	mov    %ebx,%edi
 8620a6b:	89 d1                	mov    %edx,%ecx
 8620a6d:	f3 ab                	rep stos %eax,%es:(%edi)
 8620a6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620a72:	05 ac 00 00 00       	add    $0xac,%eax
 8620a77:	89 04 24             	mov    %eax,(%esp)
 8620a7a:	e8 71 5a 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620a7f:	8d 95 90 fb ff ff    	lea    -0x470(%ebp),%edx
 8620a85:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620a89:	89 04 24             	mov    %eax,(%esp)
 8620a8c:	e8 77 83 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8620a91:	83 f0 01             	xor    $0x1,%eax
 8620a94:	84 c0                	test   %al,%al
 8620a96:	74 7c                	je     8620b14 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x1ac>
 8620a98:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620a9b:	05 ac 00 00 00       	add    $0xac,%eax
 8620aa0:	89 04 24             	mov    %eax,(%esp)
 8620aa3:	e8 48 5a 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620aa8:	89 c7                	mov    %eax,%edi
 8620aaa:	e8 31 83 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8620aaf:	89 c6                	mov    %eax,%esi
 8620ab1:	e8 16 83 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8620ab6:	89 c3                	mov    %eax,%ebx
 8620ab8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8620abf:	00 
 8620ac0:	c7 44 24 08 23 05 00 	movl   $0x523,0x8(%esp)
 8620ac7:	00 
 8620ac8:	c7 44 24 04 20 58 ce 	movl   $0x8ce5820,0x4(%esp)
 8620acf:	08 
 8620ad0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8620ad3:	89 04 24             	mov    %eax,(%esp)
 8620ad6:	e8 3d ec f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8620adb:	c7 44 24 18 23 05 00 	movl   $0x523,0x18(%esp)
 8620ae2:	00 
 8620ae3:	c7 44 24 14 20 58 ce 	movl   $0x8ce5820,0x14(%esp)
 8620aea:	08 
 8620aeb:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8620aef:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8620af3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8620af7:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8620afe:	08 
 8620aff:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8620b02:	89 04 24             	mov    %eax,(%esp)
 8620b05:	e8 7e ec f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8620b0a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8620b0f:	e9 52 18 00 00       	jmp    8622366 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19fe>
 8620b14:	8d 9d 90 f7 ff ff    	lea    -0x870(%ebp),%ebx
 8620b1a:	b8 00 00 00 00       	mov    $0x0,%eax
 8620b1f:	ba 00 01 00 00       	mov    $0x100,%edx
 8620b24:	89 df                	mov    %ebx,%edi
 8620b26:	89 d1                	mov    %edx,%ecx
 8620b28:	f3 ab                	rep stos %eax,%es:(%edi)
 8620b2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620b2d:	05 b4 00 00 00       	add    $0xb4,%eax
 8620b32:	89 04 24             	mov    %eax,(%esp)
 8620b35:	e8 b6 59 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620b3a:	8d 95 90 f7 ff ff    	lea    -0x870(%ebp),%edx
 8620b40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8620b44:	89 04 24             	mov    %eax,(%esp)
 8620b47:	e8 bc 82 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8620b4c:	83 f0 01             	xor    $0x1,%eax
 8620b4f:	84 c0                	test   %al,%al
 8620b51:	74 7c                	je     8620bcf <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x267>
 8620b53:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620b56:	05 b4 00 00 00       	add    $0xb4,%eax
 8620b5b:	89 04 24             	mov    %eax,(%esp)
 8620b5e:	e8 8d 59 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620b63:	89 c7                	mov    %eax,%edi
 8620b65:	e8 76 82 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 8620b6a:	89 c6                	mov    %eax,%esi
 8620b6c:	e8 5b 82 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 8620b71:	89 c3                	mov    %eax,%ebx
 8620b73:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8620b7a:	00 
 8620b7b:	c7 44 24 08 2a 05 00 	movl   $0x52a,0x8(%esp)
 8620b82:	00 
 8620b83:	c7 44 24 04 20 58 ce 	movl   $0x8ce5820,0x4(%esp)
 8620b8a:	08 
 8620b8b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8620b8e:	89 04 24             	mov    %eax,(%esp)
 8620b91:	e8 82 eb f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8620b96:	c7 44 24 18 2a 05 00 	movl   $0x52a,0x18(%esp)
 8620b9d:	00 
 8620b9e:	c7 44 24 14 20 58 ce 	movl   $0x8ce5820,0x14(%esp)
 8620ba5:	08 
 8620ba6:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8620baa:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8620bae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8620bb2:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 8620bb9:	08 
 8620bba:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8620bbd:	89 04 24             	mov    %eax,(%esp)
 8620bc0:	e8 c3 eb f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8620bc5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8620bca:	e9 97 17 00 00       	jmp    8622366 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19fe>
 8620bcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620bd2:	8b 00                	mov    (%eax),%eax
 8620bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620bd8:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620bde:	89 04 24             	mov    %eax,(%esp)
 8620be1:	e8 8a 5e 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620be6:	8d 85 90 e7 ff ff    	lea    -0x1870(%ebp),%eax
 8620bec:	89 44 24 08          	mov    %eax,0x8(%esp)
 8620bf0:	8d 85 90 fb ff ff    	lea    -0x470(%ebp),%eax
 8620bf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620bfa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8620bfd:	89 04 24             	mov    %eax,(%esp)
 8620c00:	e8 42 c0 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8620c05:	89 c3                	mov    %eax,%ebx
 8620c07:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620c0e:	08 
 8620c0f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620c15:	89 04 24             	mov    %eax,(%esp)
 8620c18:	e8 2d 5e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620c21:	89 04 24             	mov    %eax,(%esp)
 8620c24:	e8 21 5e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c29:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620c30:	08 
 8620c31:	89 04 24             	mov    %eax,(%esp)
 8620c34:	e8 11 5e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c39:	8d 85 90 e7 ff ff    	lea    -0x1870(%ebp),%eax
 8620c3f:	8d 98 00 04 00 00    	lea    0x400(%eax),%ebx
 8620c45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620c48:	05 b0 00 00 00       	add    $0xb0,%eax
 8620c4d:	89 04 24             	mov    %eax,(%esp)
 8620c50:	e8 9b 58 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8620c55:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8620c59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620c5d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8620c60:	89 04 24             	mov    %eax,(%esp)
 8620c63:	e8 df bf ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8620c68:	89 c3                	mov    %eax,%ebx
 8620c6a:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620c71:	08 
 8620c72:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620c78:	89 04 24             	mov    %eax,(%esp)
 8620c7b:	e8 ca 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c80:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620c84:	89 04 24             	mov    %eax,(%esp)
 8620c87:	e8 be 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c8c:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620c93:	08 
 8620c94:	89 04 24             	mov    %eax,(%esp)
 8620c97:	e8 ae 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620c9c:	8d 85 90 e7 ff ff    	lea    -0x1870(%ebp),%eax
 8620ca2:	05 00 08 00 00       	add    $0x800,%eax
 8620ca7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8620cab:	8d 85 90 f7 ff ff    	lea    -0x870(%ebp),%eax
 8620cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620cb5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8620cb8:	89 04 24             	mov    %eax,(%esp)
 8620cbb:	e8 87 bf ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 8620cc0:	89 c3                	mov    %eax,%ebx
 8620cc2:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620cc9:	08 
 8620cca:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620cd0:	89 04 24             	mov    %eax,(%esp)
 8620cd3:	e8 72 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620cd8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620cdc:	89 04 24             	mov    %eax,(%esp)
 8620cdf:	e8 66 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620ce4:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620ceb:	08 
 8620cec:	89 04 24             	mov    %eax,(%esp)
 8620cef:	e8 56 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620cf4:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8620cf7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620cfe:	08 
 8620cff:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620d05:	89 04 24             	mov    %eax,(%esp)
 8620d08:	e8 3d 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620d0d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620d11:	89 04 24             	mov    %eax,(%esp)
 8620d14:	e8 57 5d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620d19:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 8620d1c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620d23:	08 
 8620d24:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620d2a:	89 04 24             	mov    %eax,(%esp)
 8620d2d:	e8 18 5d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620d32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620d36:	89 04 24             	mov    %eax,(%esp)
 8620d39:	e8 32 5d 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620d3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620d41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620d45:	8b 45 08             	mov    0x8(%ebp),%eax
 8620d48:	89 04 24             	mov    %eax,(%esp)
 8620d4b:	e8 3e c6 ff ff       	call   861d38e <_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript>
 8620d50:	89 c3                	mov    %eax,%ebx
 8620d52:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620d59:	08 
 8620d5a:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620d60:	89 04 24             	mov    %eax,(%esp)
 8620d63:	e8 e2 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620d68:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620d6c:	89 04 24             	mov    %eax,(%esp)
 8620d6f:	e8 d6 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620d74:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620d7b:	08 
 8620d7c:	89 04 24             	mov    %eax,(%esp)
 8620d7f:	e8 c6 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620d84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620d87:	8b 58 04             	mov    0x4(%eax),%ebx
 8620d8a:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620d91:	08 
 8620d92:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620d98:	89 04 24             	mov    %eax,(%esp)
 8620d9b:	e8 aa 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620da0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620da4:	89 04 24             	mov    %eax,(%esp)
 8620da7:	e8 c4 5c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620dac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620daf:	8b 40 08             	mov    0x8(%eax),%eax
 8620db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620db6:	8b 45 08             	mov    0x8(%ebp),%eax
 8620db9:	89 04 24             	mov    %eax,(%esp)
 8620dbc:	e8 2b c6 ff ff       	call   861d3ec <_ZN11sync_script11CSyncScript13GetAttachTypeEi>
 8620dc1:	89 c3                	mov    %eax,%ebx
 8620dc3:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8620dca:	08 
 8620dcb:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620dd1:	89 04 24             	mov    %eax,(%esp)
 8620dd4:	e8 71 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620dd9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620ddd:	89 04 24             	mov    %eax,(%esp)
 8620de0:	e8 65 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620de5:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8620dec:	08 
 8620ded:	89 04 24             	mov    %eax,(%esp)
 8620df0:	e8 55 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620df5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620df8:	8b 58 5c             	mov    0x5c(%eax),%ebx
 8620dfb:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620e02:	08 
 8620e03:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620e09:	89 04 24             	mov    %eax,(%esp)
 8620e0c:	e8 39 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620e11:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620e15:	89 04 24             	mov    %eax,(%esp)
 8620e18:	e8 53 5c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620e1d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620e24:	08 
 8620e25:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620e2b:	89 04 24             	mov    %eax,(%esp)
 8620e2e:	e8 17 5c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620e33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8620e3a:	00 
 8620e3b:	89 04 24             	mov    %eax,(%esp)
 8620e3e:	e8 2d 5c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620e43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620e46:	8b 58 0c             	mov    0xc(%eax),%ebx
 8620e49:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620e50:	08 
 8620e51:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620e57:	89 04 24             	mov    %eax,(%esp)
 8620e5a:	e8 eb 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620e5f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620e63:	89 04 24             	mov    %eax,(%esp)
 8620e66:	e8 05 5c 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620e6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620e6e:	8b 40 10             	mov    0x10(%eax),%eax
 8620e71:	89 c3                	mov    %eax,%ebx
 8620e73:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620e7a:	08 
 8620e7b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620e81:	89 04 24             	mov    %eax,(%esp)
 8620e84:	e8 c1 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620e89:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620e8d:	89 04 24             	mov    %eax,(%esp)
 8620e90:	e8 db 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620e95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620e98:	8b 58 34             	mov    0x34(%eax),%ebx
 8620e9b:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620ea2:	08 
 8620ea3:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620ea9:	89 04 24             	mov    %eax,(%esp)
 8620eac:	e8 99 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620eb1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620eb5:	89 04 24             	mov    %eax,(%esp)
 8620eb8:	e8 b3 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620ebd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620ec0:	8b 58 14             	mov    0x14(%eax),%ebx
 8620ec3:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620eca:	08 
 8620ecb:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620ed1:	89 04 24             	mov    %eax,(%esp)
 8620ed4:	e8 71 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620ed9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620edd:	89 04 24             	mov    %eax,(%esp)
 8620ee0:	e8 8b 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620ee5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620ee8:	8b 58 18             	mov    0x18(%eax),%ebx
 8620eeb:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620ef2:	08 
 8620ef3:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620ef9:	89 04 24             	mov    %eax,(%esp)
 8620efc:	e8 49 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620f01:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620f05:	89 04 24             	mov    %eax,(%esp)
 8620f08:	e8 63 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620f0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620f10:	8b 58 1c             	mov    0x1c(%eax),%ebx
 8620f13:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620f1a:	08 
 8620f1b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620f21:	89 04 24             	mov    %eax,(%esp)
 8620f24:	e8 21 5b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620f29:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620f2d:	89 04 24             	mov    %eax,(%esp)
 8620f30:	e8 3b 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620f35:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620f3c:	08 
 8620f3d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620f43:	89 04 24             	mov    %eax,(%esp)
 8620f46:	e8 ff 5a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620f4b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8620f52:	00 
 8620f53:	89 04 24             	mov    %eax,(%esp)
 8620f56:	e8 15 5b 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620f5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620f5e:	8b 58 68             	mov    0x68(%eax),%ebx
 8620f61:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620f68:	08 
 8620f69:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620f6f:	89 04 24             	mov    %eax,(%esp)
 8620f72:	e8 d3 5a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620f77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620f7b:	89 04 24             	mov    %eax,(%esp)
 8620f7e:	e8 ed 5a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620f83:	c7 45 c8 13 00 00 00 	movl   $0x13,-0x38(%ebp)
 8620f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8620f8d:	8d 90 bc 04 00 00    	lea    0x4bc(%eax),%edx
 8620f93:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8620f96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8620f9a:	89 14 24             	mov    %edx,(%esp)
 8620f9d:	e8 24 7c 00 00       	call   8628bc6 <_ZNSt3mapI16ENUM_MODULE_TYPEP22EquipmentParameterInfoSt4lessIS0_ESaISt4pairIKS0_S2_EEEixERS6_>
 8620fa2:	8b 00                	mov    (%eax),%eax
 8620fa4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8620fa7:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8620fab:	0f 84 60 0c 00 00    	je     8621c11 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x12a9>
 8620fb1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8620fb4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8620fb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620fba:	8b 58 04             	mov    0x4(%eax),%ebx
 8620fbd:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620fc4:	08 
 8620fc5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620fcb:	89 04 24             	mov    %eax,(%esp)
 8620fce:	e8 77 5a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620fd3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620fd7:	89 04 24             	mov    %eax,(%esp)
 8620fda:	e8 91 5a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8620fdf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8620fe2:	8b 58 0c             	mov    0xc(%eax),%ebx
 8620fe5:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8620fec:	08 
 8620fed:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8620ff3:	89 04 24             	mov    %eax,(%esp)
 8620ff6:	e8 4f 5a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8620ffb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8620fff:	89 04 24             	mov    %eax,(%esp)
 8621002:	e8 69 5a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621007:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862100a:	8b 58 14             	mov    0x14(%eax),%ebx
 862100d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621014:	08 
 8621015:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862101b:	89 04 24             	mov    %eax,(%esp)
 862101e:	e8 27 5a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621023:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621027:	89 04 24             	mov    %eax,(%esp)
 862102a:	e8 41 5a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862102f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621032:	8b 58 18             	mov    0x18(%eax),%ebx
 8621035:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862103c:	08 
 862103d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621043:	89 04 24             	mov    %eax,(%esp)
 8621046:	e8 ff 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862104b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862104f:	89 04 24             	mov    %eax,(%esp)
 8621052:	e8 19 5a 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621057:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862105a:	8b 58 1c             	mov    0x1c(%eax),%ebx
 862105d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621064:	08 
 8621065:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862106b:	89 04 24             	mov    %eax,(%esp)
 862106e:	e8 d7 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621073:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621077:	89 04 24             	mov    %eax,(%esp)
 862107a:	e8 f1 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862107f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621082:	8b 58 24             	mov    0x24(%eax),%ebx
 8621085:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862108c:	08 
 862108d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621093:	89 04 24             	mov    %eax,(%esp)
 8621096:	e8 af 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862109b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862109f:	89 04 24             	mov    %eax,(%esp)
 86210a2:	e8 c9 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86210a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86210aa:	8b 58 54             	mov    0x54(%eax),%ebx
 86210ad:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86210b4:	08 
 86210b5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86210bb:	89 04 24             	mov    %eax,(%esp)
 86210be:	e8 87 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86210c3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86210c7:	89 04 24             	mov    %eax,(%esp)
 86210ca:	e8 a1 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86210cf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86210d2:	8b 58 5c             	mov    0x5c(%eax),%ebx
 86210d5:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86210dc:	08 
 86210dd:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86210e3:	89 04 24             	mov    %eax,(%esp)
 86210e6:	e8 5f 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86210eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86210ef:	89 04 24             	mov    %eax,(%esp)
 86210f2:	e8 79 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86210f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86210fa:	8b 58 64             	mov    0x64(%eax),%ebx
 86210fd:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621104:	08 
 8621105:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862110b:	89 04 24             	mov    %eax,(%esp)
 862110e:	e8 37 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621113:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621117:	89 04 24             	mov    %eax,(%esp)
 862111a:	e8 51 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862111f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621122:	8b 58 6c             	mov    0x6c(%eax),%ebx
 8621125:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862112c:	08 
 862112d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621133:	89 04 24             	mov    %eax,(%esp)
 8621136:	e8 0f 59 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862113b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862113f:	89 04 24             	mov    %eax,(%esp)
 8621142:	e8 29 59 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621147:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862114a:	8b 98 b0 00 00 00    	mov    0xb0(%eax),%ebx
 8621150:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621157:	08 
 8621158:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862115e:	89 04 24             	mov    %eax,(%esp)
 8621161:	e8 e4 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621166:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862116a:	89 04 24             	mov    %eax,(%esp)
 862116d:	e8 fe 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621172:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621175:	8b 98 b4 00 00 00    	mov    0xb4(%eax),%ebx
 862117b:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621182:	08 
 8621183:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621189:	89 04 24             	mov    %eax,(%esp)
 862118c:	e8 b9 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621191:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621195:	89 04 24             	mov    %eax,(%esp)
 8621198:	e8 d3 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862119d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86211a0:	8b 98 b8 00 00 00    	mov    0xb8(%eax),%ebx
 86211a6:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86211ad:	08 
 86211ae:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86211b4:	89 04 24             	mov    %eax,(%esp)
 86211b7:	e8 8e 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86211bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86211c0:	89 04 24             	mov    %eax,(%esp)
 86211c3:	e8 a8 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86211c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86211cb:	8b 98 bc 00 00 00    	mov    0xbc(%eax),%ebx
 86211d1:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86211d8:	08 
 86211d9:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86211df:	89 04 24             	mov    %eax,(%esp)
 86211e2:	e8 63 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86211e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86211eb:	89 04 24             	mov    %eax,(%esp)
 86211ee:	e8 7d 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86211f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86211f6:	8b 98 c0 00 00 00    	mov    0xc0(%eax),%ebx
 86211fc:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621203:	08 
 8621204:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862120a:	89 04 24             	mov    %eax,(%esp)
 862120d:	e8 38 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621212:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621216:	89 04 24             	mov    %eax,(%esp)
 8621219:	e8 52 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862121e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621221:	8b 98 c4 00 00 00    	mov    0xc4(%eax),%ebx
 8621227:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862122e:	08 
 862122f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621235:	89 04 24             	mov    %eax,(%esp)
 8621238:	e8 0d 58 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862123d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621241:	89 04 24             	mov    %eax,(%esp)
 8621244:	e8 27 58 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621249:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862124c:	8b 98 c8 00 00 00    	mov    0xc8(%eax),%ebx
 8621252:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621259:	08 
 862125a:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621260:	89 04 24             	mov    %eax,(%esp)
 8621263:	e8 e2 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621268:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862126c:	89 04 24             	mov    %eax,(%esp)
 862126f:	e8 fc 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621274:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621277:	8b 98 cc 00 00 00    	mov    0xcc(%eax),%ebx
 862127d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621284:	08 
 8621285:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862128b:	89 04 24             	mov    %eax,(%esp)
 862128e:	e8 b7 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621293:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621297:	89 04 24             	mov    %eax,(%esp)
 862129a:	e8 d1 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862129f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86212a2:	8b 98 d0 00 00 00    	mov    0xd0(%eax),%ebx
 86212a8:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86212af:	08 
 86212b0:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86212b6:	89 04 24             	mov    %eax,(%esp)
 86212b9:	e8 8c 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86212be:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86212c2:	89 04 24             	mov    %eax,(%esp)
 86212c5:	e8 a6 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86212ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86212cd:	8b 98 d4 00 00 00    	mov    0xd4(%eax),%ebx
 86212d3:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86212da:	08 
 86212db:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86212e1:	89 04 24             	mov    %eax,(%esp)
 86212e4:	e8 61 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86212e9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86212ed:	89 04 24             	mov    %eax,(%esp)
 86212f0:	e8 7b 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86212f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86212f8:	8b 98 d8 00 00 00    	mov    0xd8(%eax),%ebx
 86212fe:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621305:	08 
 8621306:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862130c:	89 04 24             	mov    %eax,(%esp)
 862130f:	e8 36 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621314:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621318:	89 04 24             	mov    %eax,(%esp)
 862131b:	e8 50 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621320:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621323:	8b 98 dc 00 00 00    	mov    0xdc(%eax),%ebx
 8621329:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621330:	08 
 8621331:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621337:	89 04 24             	mov    %eax,(%esp)
 862133a:	e8 0b 57 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862133f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621343:	89 04 24             	mov    %eax,(%esp)
 8621346:	e8 25 57 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862134b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862134e:	8b 98 e0 00 00 00    	mov    0xe0(%eax),%ebx
 8621354:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862135b:	08 
 862135c:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621362:	89 04 24             	mov    %eax,(%esp)
 8621365:	e8 e0 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862136a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862136e:	89 04 24             	mov    %eax,(%esp)
 8621371:	e8 fa 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621376:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621379:	8b 98 e4 00 00 00    	mov    0xe4(%eax),%ebx
 862137f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621386:	08 
 8621387:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862138d:	89 04 24             	mov    %eax,(%esp)
 8621390:	e8 b5 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621395:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621399:	89 04 24             	mov    %eax,(%esp)
 862139c:	e8 cf 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86213a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86213a4:	8b 98 e8 00 00 00    	mov    0xe8(%eax),%ebx
 86213aa:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86213b1:	08 
 86213b2:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86213b8:	89 04 24             	mov    %eax,(%esp)
 86213bb:	e8 8a 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86213c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86213c4:	89 04 24             	mov    %eax,(%esp)
 86213c7:	e8 a4 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86213cc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86213cf:	8b 98 ec 00 00 00    	mov    0xec(%eax),%ebx
 86213d5:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86213dc:	08 
 86213dd:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86213e3:	89 04 24             	mov    %eax,(%esp)
 86213e6:	e8 5f 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86213eb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86213ef:	89 04 24             	mov    %eax,(%esp)
 86213f2:	e8 79 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86213f7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86213fa:	8b 98 f0 00 00 00    	mov    0xf0(%eax),%ebx
 8621400:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621407:	08 
 8621408:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862140e:	89 04 24             	mov    %eax,(%esp)
 8621411:	e8 34 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621416:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862141a:	89 04 24             	mov    %eax,(%esp)
 862141d:	e8 4e 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621422:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621425:	8b 98 fc 00 00 00    	mov    0xfc(%eax),%ebx
 862142b:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621432:	08 
 8621433:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621439:	89 04 24             	mov    %eax,(%esp)
 862143c:	e8 09 56 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621441:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621445:	89 04 24             	mov    %eax,(%esp)
 8621448:	e8 23 56 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862144d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621450:	8b 98 00 01 00 00    	mov    0x100(%eax),%ebx
 8621456:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862145d:	08 
 862145e:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621464:	89 04 24             	mov    %eax,(%esp)
 8621467:	e8 de 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862146c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621470:	89 04 24             	mov    %eax,(%esp)
 8621473:	e8 f8 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621478:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862147b:	8b 98 08 01 00 00    	mov    0x108(%eax),%ebx
 8621481:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621488:	08 
 8621489:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862148f:	89 04 24             	mov    %eax,(%esp)
 8621492:	e8 b3 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621497:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862149b:	89 04 24             	mov    %eax,(%esp)
 862149e:	e8 cd 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86214a3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86214a6:	8b 98 f4 00 00 00    	mov    0xf4(%eax),%ebx
 86214ac:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86214b3:	08 
 86214b4:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86214ba:	89 04 24             	mov    %eax,(%esp)
 86214bd:	e8 88 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86214c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86214c6:	89 04 24             	mov    %eax,(%esp)
 86214c9:	e8 a2 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86214ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86214d1:	8b 98 f8 00 00 00    	mov    0xf8(%eax),%ebx
 86214d7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86214de:	08 
 86214df:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86214e5:	89 04 24             	mov    %eax,(%esp)
 86214e8:	e8 5d 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86214ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86214f1:	89 04 24             	mov    %eax,(%esp)
 86214f4:	e8 77 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86214f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86214fc:	8b 98 0c 01 00 00    	mov    0x10c(%eax),%ebx
 8621502:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621509:	08 
 862150a:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621510:	89 04 24             	mov    %eax,(%esp)
 8621513:	e8 32 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621518:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862151c:	89 04 24             	mov    %eax,(%esp)
 862151f:	e8 4c 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621524:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621527:	8b 98 10 01 00 00    	mov    0x110(%eax),%ebx
 862152d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621534:	08 
 8621535:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862153b:	89 04 24             	mov    %eax,(%esp)
 862153e:	e8 07 55 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621543:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621547:	89 04 24             	mov    %eax,(%esp)
 862154a:	e8 21 55 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862154f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621552:	8b 98 14 01 00 00    	mov    0x114(%eax),%ebx
 8621558:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862155f:	08 
 8621560:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621566:	89 04 24             	mov    %eax,(%esp)
 8621569:	e8 dc 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862156e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621572:	89 04 24             	mov    %eax,(%esp)
 8621575:	e8 f6 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862157a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862157d:	8b 98 1c 01 00 00    	mov    0x11c(%eax),%ebx
 8621583:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862158a:	08 
 862158b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621591:	89 04 24             	mov    %eax,(%esp)
 8621594:	e8 b1 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621599:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862159d:	89 04 24             	mov    %eax,(%esp)
 86215a0:	e8 cb 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86215a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86215a8:	8b 98 28 01 00 00    	mov    0x128(%eax),%ebx
 86215ae:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86215b5:	08 
 86215b6:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86215bc:	89 04 24             	mov    %eax,(%esp)
 86215bf:	e8 86 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86215c4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86215c8:	89 04 24             	mov    %eax,(%esp)
 86215cb:	e8 a0 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86215d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86215d3:	8b 98 2c 01 00 00    	mov    0x12c(%eax),%ebx
 86215d9:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86215e0:	08 
 86215e1:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86215e7:	89 04 24             	mov    %eax,(%esp)
 86215ea:	e8 5b 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86215ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86215f3:	89 04 24             	mov    %eax,(%esp)
 86215f6:	e8 75 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86215fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86215fe:	8b 98 30 01 00 00    	mov    0x130(%eax),%ebx
 8621604:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862160b:	08 
 862160c:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621612:	89 04 24             	mov    %eax,(%esp)
 8621615:	e8 30 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862161a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862161e:	89 04 24             	mov    %eax,(%esp)
 8621621:	e8 4a 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621626:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621629:	8b 98 34 01 00 00    	mov    0x134(%eax),%ebx
 862162f:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621636:	08 
 8621637:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862163d:	89 04 24             	mov    %eax,(%esp)
 8621640:	e8 05 54 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621645:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621649:	89 04 24             	mov    %eax,(%esp)
 862164c:	e8 1f 54 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621651:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621654:	89 44 24 04          	mov    %eax,0x4(%esp)
 8621658:	8b 45 08             	mov    0x8(%ebp),%eax
 862165b:	89 04 24             	mov    %eax,(%esp)
 862165e:	e8 cb bd ff ff       	call   861d42e <_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo>
 8621663:	89 c3                	mov    %eax,%ebx
 8621665:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 862166c:	08 
 862166d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621673:	89 04 24             	mov    %eax,(%esp)
 8621676:	e8 cf 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862167b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862167f:	89 04 24             	mov    %eax,(%esp)
 8621682:	e8 c3 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621687:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862168e:	08 
 862168f:	89 04 24             	mov    %eax,(%esp)
 8621692:	e8 b3 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621697:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862169a:	8b 80 44 01 00 00    	mov    0x144(%eax),%eax
 86216a0:	89 c3                	mov    %eax,%ebx
 86216a2:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86216a9:	08 
 86216aa:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86216b0:	89 04 24             	mov    %eax,(%esp)
 86216b3:	e8 92 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86216b8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86216bc:	89 04 24             	mov    %eax,(%esp)
 86216bf:	e8 ac 53 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86216c4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86216c7:	8b 98 48 01 00 00    	mov    0x148(%eax),%ebx
 86216cd:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86216d4:	08 
 86216d5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86216db:	89 04 24             	mov    %eax,(%esp)
 86216de:	e8 67 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86216e3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86216e7:	89 04 24             	mov    %eax,(%esp)
 86216ea:	e8 cd 53 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 86216ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86216f2:	8b 98 4c 01 00 00    	mov    0x14c(%eax),%ebx
 86216f8:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86216ff:	08 
 8621700:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621706:	89 04 24             	mov    %eax,(%esp)
 8621709:	e8 3c 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862170e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621712:	89 04 24             	mov    %eax,(%esp)
 8621715:	e8 56 53 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862171a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862171d:	8b 98 20 02 00 00    	mov    0x220(%eax),%ebx
 8621723:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862172a:	08 
 862172b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621731:	89 04 24             	mov    %eax,(%esp)
 8621734:	e8 11 53 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621739:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862173d:	89 04 24             	mov    %eax,(%esp)
 8621740:	e8 2b 53 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621745:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621748:	8b 98 24 02 00 00    	mov    0x224(%eax),%ebx
 862174e:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621755:	08 
 8621756:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862175c:	89 04 24             	mov    %eax,(%esp)
 862175f:	e8 e6 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621764:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621768:	89 04 24             	mov    %eax,(%esp)
 862176b:	e8 00 53 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621770:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621773:	0f b6 80 3c 02 00 00 	movzbl 0x23c(%eax),%eax
 862177a:	0f b6 d8             	movzbl %al,%ebx
 862177d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621784:	08 
 8621785:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862178b:	89 04 24             	mov    %eax,(%esp)
 862178e:	e8 b7 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621793:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621797:	89 04 24             	mov    %eax,(%esp)
 862179a:	e8 d1 52 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862179f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86217a2:	0f b6 80 3d 02 00 00 	movzbl 0x23d(%eax),%eax
 86217a9:	0f b6 d8             	movzbl %al,%ebx
 86217ac:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86217b3:	08 
 86217b4:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86217ba:	89 04 24             	mov    %eax,(%esp)
 86217bd:	e8 88 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86217c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86217c6:	89 04 24             	mov    %eax,(%esp)
 86217c9:	e8 a2 52 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86217ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86217d1:	8b 98 38 01 00 00    	mov    0x138(%eax),%ebx
 86217d7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86217de:	08 
 86217df:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86217e5:	89 04 24             	mov    %eax,(%esp)
 86217e8:	e8 5d 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86217ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86217f1:	89 04 24             	mov    %eax,(%esp)
 86217f4:	e8 c3 52 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 86217f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86217fc:	8b 98 28 02 00 00    	mov    0x228(%eax),%ebx
 8621802:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621809:	08 
 862180a:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621810:	89 04 24             	mov    %eax,(%esp)
 8621813:	e8 32 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621818:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862181c:	89 04 24             	mov    %eax,(%esp)
 862181f:	e8 98 52 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 8621824:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621827:	0f b6 80 2c 02 00 00 	movzbl 0x22c(%eax),%eax
 862182e:	0f b6 d8             	movzbl %al,%ebx
 8621831:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621838:	08 
 8621839:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862183f:	89 04 24             	mov    %eax,(%esp)
 8621842:	e8 03 52 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621847:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862184b:	89 04 24             	mov    %eax,(%esp)
 862184e:	e8 1d 52 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621853:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621856:	8b 98 74 02 00 00    	mov    0x274(%eax),%ebx
 862185c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621863:	08 
 8621864:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862186a:	89 04 24             	mov    %eax,(%esp)
 862186d:	e8 d8 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621872:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621876:	89 04 24             	mov    %eax,(%esp)
 8621879:	e8 3e 52 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 862187e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621881:	8b 58 08             	mov    0x8(%eax),%ebx
 8621884:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862188b:	08 
 862188c:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621892:	89 04 24             	mov    %eax,(%esp)
 8621895:	e8 b0 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862189a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862189e:	89 04 24             	mov    %eax,(%esp)
 86218a1:	e8 16 52 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 86218a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86218a9:	8b 58 10             	mov    0x10(%eax),%ebx
 86218ac:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86218b3:	08 
 86218b4:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86218ba:	89 04 24             	mov    %eax,(%esp)
 86218bd:	e8 88 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86218c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86218c6:	89 04 24             	mov    %eax,(%esp)
 86218c9:	e8 ee 51 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 86218ce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86218d1:	8b 98 88 02 00 00    	mov    0x288(%eax),%ebx
 86218d7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86218de:	08 
 86218df:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86218e5:	89 04 24             	mov    %eax,(%esp)
 86218e8:	e8 5d 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86218ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86218f1:	89 04 24             	mov    %eax,(%esp)
 86218f4:	e8 77 51 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86218f9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86218fc:	8b 98 8c 02 00 00    	mov    0x28c(%eax),%ebx
 8621902:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621909:	08 
 862190a:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621910:	89 04 24             	mov    %eax,(%esp)
 8621913:	e8 32 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621918:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862191c:	89 04 24             	mov    %eax,(%esp)
 862191f:	e8 4c 51 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621924:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621927:	8b 98 90 02 00 00    	mov    0x290(%eax),%ebx
 862192d:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621934:	08 
 8621935:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862193b:	89 04 24             	mov    %eax,(%esp)
 862193e:	e8 07 51 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621943:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621947:	89 04 24             	mov    %eax,(%esp)
 862194a:	e8 21 51 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862194f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621952:	8b 98 94 02 00 00    	mov    0x294(%eax),%ebx
 8621958:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862195f:	08 
 8621960:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621966:	89 04 24             	mov    %eax,(%esp)
 8621969:	e8 dc 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862196e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621972:	89 04 24             	mov    %eax,(%esp)
 8621975:	e8 f6 50 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 862197a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862197d:	8b 98 98 02 00 00    	mov    0x298(%eax),%ebx
 8621983:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 862198a:	08 
 862198b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621991:	89 04 24             	mov    %eax,(%esp)
 8621994:	e8 b1 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621999:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862199d:	89 04 24             	mov    %eax,(%esp)
 86219a0:	e8 cb 50 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86219a5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86219a8:	8b 98 84 02 00 00    	mov    0x284(%eax),%ebx
 86219ae:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86219b5:	08 
 86219b6:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86219bc:	89 04 24             	mov    %eax,(%esp)
 86219bf:	e8 86 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86219c4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86219c8:	89 04 24             	mov    %eax,(%esp)
 86219cb:	e8 a0 50 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86219d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86219d3:	8b 98 3c 01 00 00    	mov    0x13c(%eax),%ebx
 86219d9:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86219e0:	08 
 86219e1:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86219e7:	89 04 24             	mov    %eax,(%esp)
 86219ea:	e8 5b 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86219ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86219f3:	89 04 24             	mov    %eax,(%esp)
 86219f6:	e8 c1 50 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 86219fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86219fe:	8b 58 74             	mov    0x74(%eax),%ebx
 8621a01:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621a08:	08 
 8621a09:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621a0f:	89 04 24             	mov    %eax,(%esp)
 8621a12:	e8 33 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621a17:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621a1b:	89 04 24             	mov    %eax,(%esp)
 8621a1e:	e8 4d 50 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621a23:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621a26:	8b 58 78             	mov    0x78(%eax),%ebx
 8621a29:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621a30:	08 
 8621a31:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621a37:	89 04 24             	mov    %eax,(%esp)
 8621a3a:	e8 0b 50 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621a3f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621a43:	89 04 24             	mov    %eax,(%esp)
 8621a46:	e8 25 50 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621a4b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621a4e:	8b 58 7c             	mov    0x7c(%eax),%ebx
 8621a51:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621a58:	08 
 8621a59:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621a5f:	89 04 24             	mov    %eax,(%esp)
 8621a62:	e8 e3 4f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621a67:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621a6b:	89 04 24             	mov    %eax,(%esp)
 8621a6e:	e8 49 50 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 8621a73:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621a76:	8b 98 80 00 00 00    	mov    0x80(%eax),%ebx
 8621a7c:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621a83:	08 
 8621a84:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621a8a:	89 04 24             	mov    %eax,(%esp)
 8621a8d:	e8 b8 4f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621a92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621a96:	89 04 24             	mov    %eax,(%esp)
 8621a99:	e8 d2 4f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621a9e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621aa1:	8b 98 84 00 00 00    	mov    0x84(%eax),%ebx
 8621aa7:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621aae:	08 
 8621aaf:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ab5:	89 04 24             	mov    %eax,(%esp)
 8621ab8:	e8 8d 4f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621abd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621ac1:	89 04 24             	mov    %eax,(%esp)
 8621ac4:	e8 a7 4f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621ac9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621acc:	8b 98 88 00 00 00    	mov    0x88(%eax),%ebx
 8621ad2:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621ad9:	08 
 8621ada:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ae0:	89 04 24             	mov    %eax,(%esp)
 8621ae3:	e8 62 4f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ae8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621aec:	89 04 24             	mov    %eax,(%esp)
 8621aef:	e8 c8 4f 00 00       	call   8626abc <_ZN13CStreamBufferlsEf>
 8621af4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621af7:	8b 98 04 01 00 00    	mov    0x104(%eax),%ebx
 8621afd:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 8621b04:	08 
 8621b05:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621b0b:	89 04 24             	mov    %eax,(%esp)
 8621b0e:	e8 37 4f 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621b13:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621b17:	89 04 24             	mov    %eax,(%esp)
 8621b1a:	e8 51 4f 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 8621b1f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8621b22:	89 04 24             	mov    %eax,(%esp)
 8621b25:	e8 2e 44 d5 ff       	call   8375f58 <_ZN11sync_script12CStringMakerC1Ev>
 8621b2a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621b2d:	8d 90 4c 02 00 00    	lea    0x24c(%eax),%edx
 8621b33:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8621b36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8621b3a:	89 04 24             	mov    %eax,(%esp)
 8621b3d:	e8 e4 f4 b5 ff       	call   8181026 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE3endEv>
 8621b42:	83 ec 04             	sub    $0x4,%esp
 8621b45:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8621b48:	8d 90 4c 02 00 00    	lea    0x24c(%eax),%edx
 8621b4e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8621b51:	89 54 24 04          	mov    %edx,0x4(%esp)
 8621b55:	89 04 24             	mov    %eax,(%esp)
 8621b58:	e8 49 f4 b5 ff       	call   8180fa6 <_ZNSt6vectorI12LevelUpSkillSaIS0_EE5beginEv>
 8621b5d:	83 ec 04             	sub    $0x4,%esp
 8621b60:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8621b63:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8621b66:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8621b6a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8621b6d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8621b71:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8621b74:	89 54 24 04          	mov    %edx,0x4(%esp)
 8621b78:	89 04 24             	mov    %eax,(%esp)
 8621b7b:	e8 37 6e 00 00       	call   86289b7 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP12LevelUpSkillSt6vectorIS2_SaIS2_EEEEN11sync_script12CStringMakerEET0_T_SB_SA_>
 8621b80:	83 ec 04             	sub    $0x4,%esp
 8621b83:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8621b86:	89 04 24             	mov    %eax,(%esp)
 8621b89:	e8 a6 44 d5 ff       	call   8376034 <_ZN11sync_script12CStringMaker5c_strEv>
 8621b8e:	89 c3                	mov    %eax,%ebx
 8621b90:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8621b97:	08 
 8621b98:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621b9e:	89 04 24             	mov    %eax,(%esp)
 8621ba1:	e8 a4 4e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ba6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8621baa:	89 04 24             	mov    %eax,(%esp)
 8621bad:	e8 98 4e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621bb2:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 8621bb9:	08 
 8621bba:	89 04 24             	mov    %eax,(%esp)
 8621bbd:	e8 88 4e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621bc2:	eb 15                	jmp    8621bd9 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x1271>
 8621bc4:	89 d3                	mov    %edx,%ebx
 8621bc6:	89 c6                	mov    %eax,%esi
 8621bc8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8621bcb:	89 04 24             	mov    %eax,(%esp)
 8621bce:	e8 ad d9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8621bd3:	89 f0                	mov    %esi,%eax
 8621bd5:	89 da                	mov    %ebx,%edx
 8621bd7:	eb 0d                	jmp    8621be6 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x127e>
 8621bd9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8621bdc:	89 04 24             	mov    %eax,(%esp)
 8621bdf:	e8 9c d9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8621be4:	eb 1b                	jmp    8621c01 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x1299>
 8621be6:	89 d3                	mov    %edx,%ebx
 8621be8:	89 c6                	mov    %eax,%esi
 8621bea:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8621bed:	89 04 24             	mov    %eax,(%esp)
 8621bf0:	e8 8b d9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8621bf5:	89 f0                	mov    %esi,%eax
 8621bf7:	89 da                	mov    %ebx,%edx
 8621bf9:	89 04 24             	mov    %eax,(%esp)
 8621bfc:	e8 4f 1b 4c 00       	call   8ae3750 <_Unwind_Resume>
 8621c01:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8621c04:	89 04 24             	mov    %eax,(%esp)
 8621c07:	e8 74 d9 d5 ff       	call   837f580 <_ZN11sync_script12CStringMakerD1Ev>
 8621c0c:	e9 ee 05 00 00       	jmp    86221ff <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x1897>
 8621c11:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c18:	08 
 8621c19:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c1f:	89 04 24             	mov    %eax,(%esp)
 8621c22:	e8 23 4e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c27:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c2e:	08 
 8621c2f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c35:	89 04 24             	mov    %eax,(%esp)
 8621c38:	e8 0d 4e 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c3d:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c44:	08 
 8621c45:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c4b:	89 04 24             	mov    %eax,(%esp)
 8621c4e:	e8 f7 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c53:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c5a:	08 
 8621c5b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c61:	89 04 24             	mov    %eax,(%esp)
 8621c64:	e8 e1 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c69:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c70:	08 
 8621c71:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c77:	89 04 24             	mov    %eax,(%esp)
 8621c7a:	e8 cb 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c7f:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c86:	08 
 8621c87:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621c8d:	89 04 24             	mov    %eax,(%esp)
 8621c90:	e8 b5 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621c95:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621c9c:	08 
 8621c9d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ca3:	89 04 24             	mov    %eax,(%esp)
 8621ca6:	e8 9f 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621cab:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621cb2:	08 
 8621cb3:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621cb9:	89 04 24             	mov    %eax,(%esp)
 8621cbc:	e8 89 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621cc1:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621cc8:	08 
 8621cc9:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ccf:	89 04 24             	mov    %eax,(%esp)
 8621cd2:	e8 73 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621cd7:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621cde:	08 
 8621cdf:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ce5:	89 04 24             	mov    %eax,(%esp)
 8621ce8:	e8 5d 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ced:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621cf4:	08 
 8621cf5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621cfb:	89 04 24             	mov    %eax,(%esp)
 8621cfe:	e8 47 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d03:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d0a:	08 
 8621d0b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d11:	89 04 24             	mov    %eax,(%esp)
 8621d14:	e8 31 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d19:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d20:	08 
 8621d21:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d27:	89 04 24             	mov    %eax,(%esp)
 8621d2a:	e8 1b 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d2f:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d36:	08 
 8621d37:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d3d:	89 04 24             	mov    %eax,(%esp)
 8621d40:	e8 05 4d 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d45:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d4c:	08 
 8621d4d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d53:	89 04 24             	mov    %eax,(%esp)
 8621d56:	e8 ef 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d5b:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d62:	08 
 8621d63:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d69:	89 04 24             	mov    %eax,(%esp)
 8621d6c:	e8 d9 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d71:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d78:	08 
 8621d79:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d7f:	89 04 24             	mov    %eax,(%esp)
 8621d82:	e8 c3 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d87:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621d8e:	08 
 8621d8f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621d95:	89 04 24             	mov    %eax,(%esp)
 8621d98:	e8 ad 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621d9d:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621da4:	08 
 8621da5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621dab:	89 04 24             	mov    %eax,(%esp)
 8621dae:	e8 97 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621db3:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621dba:	08 
 8621dbb:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621dc1:	89 04 24             	mov    %eax,(%esp)
 8621dc4:	e8 81 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621dc9:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621dd0:	08 
 8621dd1:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621dd7:	89 04 24             	mov    %eax,(%esp)
 8621dda:	e8 6b 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ddf:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621de6:	08 
 8621de7:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ded:	89 04 24             	mov    %eax,(%esp)
 8621df0:	e8 55 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621df5:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621dfc:	08 
 8621dfd:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e03:	89 04 24             	mov    %eax,(%esp)
 8621e06:	e8 3f 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e0b:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e12:	08 
 8621e13:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e19:	89 04 24             	mov    %eax,(%esp)
 8621e1c:	e8 29 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e21:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e28:	08 
 8621e29:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e2f:	89 04 24             	mov    %eax,(%esp)
 8621e32:	e8 13 4c 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e37:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e3e:	08 
 8621e3f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e45:	89 04 24             	mov    %eax,(%esp)
 8621e48:	e8 fd 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e4d:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e54:	08 
 8621e55:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e5b:	89 04 24             	mov    %eax,(%esp)
 8621e5e:	e8 e7 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e63:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e6a:	08 
 8621e6b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e71:	89 04 24             	mov    %eax,(%esp)
 8621e74:	e8 d1 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e79:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e80:	08 
 8621e81:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e87:	89 04 24             	mov    %eax,(%esp)
 8621e8a:	e8 bb 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621e8f:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621e96:	08 
 8621e97:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621e9d:	89 04 24             	mov    %eax,(%esp)
 8621ea0:	e8 a5 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ea5:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621eac:	08 
 8621ead:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621eb3:	89 04 24             	mov    %eax,(%esp)
 8621eb6:	e8 8f 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ebb:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621ec2:	08 
 8621ec3:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ec9:	89 04 24             	mov    %eax,(%esp)
 8621ecc:	e8 79 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ed1:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621ed8:	08 
 8621ed9:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621edf:	89 04 24             	mov    %eax,(%esp)
 8621ee2:	e8 63 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621ee7:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621eee:	08 
 8621eef:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ef5:	89 04 24             	mov    %eax,(%esp)
 8621ef8:	e8 4d 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621efd:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f04:	08 
 8621f05:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f0b:	89 04 24             	mov    %eax,(%esp)
 8621f0e:	e8 37 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f13:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f1a:	08 
 8621f1b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f21:	89 04 24             	mov    %eax,(%esp)
 8621f24:	e8 21 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f29:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f30:	08 
 8621f31:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f37:	89 04 24             	mov    %eax,(%esp)
 8621f3a:	e8 0b 4b 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f3f:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f46:	08 
 8621f47:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f4d:	89 04 24             	mov    %eax,(%esp)
 8621f50:	e8 f5 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f55:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f5c:	08 
 8621f5d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f63:	89 04 24             	mov    %eax,(%esp)
 8621f66:	e8 df 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f6b:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f72:	08 
 8621f73:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f79:	89 04 24             	mov    %eax,(%esp)
 8621f7c:	e8 c9 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f81:	c7 44 24 04 e4 36 ce 	movl   $0x8ce36e4,0x4(%esp)
 8621f88:	08 
 8621f89:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621f8f:	89 04 24             	mov    %eax,(%esp)
 8621f92:	e8 b3 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621f97:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621f9e:	08 
 8621f9f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621fa5:	89 04 24             	mov    %eax,(%esp)
 8621fa8:	e8 9d 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621fad:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621fb4:	08 
 8621fb5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621fbb:	89 04 24             	mov    %eax,(%esp)
 8621fbe:	e8 87 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621fc3:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621fca:	08 
 8621fcb:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621fd1:	89 04 24             	mov    %eax,(%esp)
 8621fd4:	e8 71 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621fd9:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621fe0:	08 
 8621fe1:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621fe7:	89 04 24             	mov    %eax,(%esp)
 8621fea:	e8 5b 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8621fef:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8621ff6:	08 
 8621ff7:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8621ffd:	89 04 24             	mov    %eax,(%esp)
 8622000:	e8 45 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622005:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 862200c:	08 
 862200d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622013:	89 04 24             	mov    %eax,(%esp)
 8622016:	e8 2f 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862201b:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622022:	08 
 8622023:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622029:	89 04 24             	mov    %eax,(%esp)
 862202c:	e8 19 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622031:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622038:	08 
 8622039:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862203f:	89 04 24             	mov    %eax,(%esp)
 8622042:	e8 03 4a 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622047:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 862204e:	08 
 862204f:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622055:	89 04 24             	mov    %eax,(%esp)
 8622058:	e8 ed 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862205d:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622064:	08 
 8622065:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862206b:	89 04 24             	mov    %eax,(%esp)
 862206e:	e8 d7 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622073:	c7 44 24 04 e9 36 ce 	movl   $0x8ce36e9,0x4(%esp)
 862207a:	08 
 862207b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622081:	89 04 24             	mov    %eax,(%esp)
 8622084:	e8 c1 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622089:	c7 44 24 04 e9 36 ce 	movl   $0x8ce36e9,0x4(%esp)
 8622090:	08 
 8622091:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622097:	89 04 24             	mov    %eax,(%esp)
 862209a:	e8 ab 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862209f:	c7 44 24 04 e9 36 ce 	movl   $0x8ce36e9,0x4(%esp)
 86220a6:	08 
 86220a7:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86220ad:	89 04 24             	mov    %eax,(%esp)
 86220b0:	e8 95 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86220b5:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86220bc:	08 
 86220bd:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86220c3:	89 04 24             	mov    %eax,(%esp)
 86220c6:	e8 7f 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86220cb:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86220d2:	08 
 86220d3:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86220d9:	89 04 24             	mov    %eax,(%esp)
 86220dc:	e8 69 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86220e1:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86220e8:	08 
 86220e9:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86220ef:	89 04 24             	mov    %eax,(%esp)
 86220f2:	e8 53 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86220f7:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86220fe:	08 
 86220ff:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622105:	89 04 24             	mov    %eax,(%esp)
 8622108:	e8 3d 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862210d:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622114:	08 
 8622115:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862211b:	89 04 24             	mov    %eax,(%esp)
 862211e:	e8 27 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622123:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 862212a:	08 
 862212b:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622131:	89 04 24             	mov    %eax,(%esp)
 8622134:	e8 11 49 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622139:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622140:	08 
 8622141:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622147:	89 04 24             	mov    %eax,(%esp)
 862214a:	e8 fb 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862214f:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622156:	08 
 8622157:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862215d:	89 04 24             	mov    %eax,(%esp)
 8622160:	e8 e5 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622165:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 862216c:	08 
 862216d:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622173:	89 04 24             	mov    %eax,(%esp)
 8622176:	e8 cf 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 862217b:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622182:	08 
 8622183:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 8622189:	89 04 24             	mov    %eax,(%esp)
 862218c:	e8 b9 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622191:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 8622198:	08 
 8622199:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862219f:	89 04 24             	mov    %eax,(%esp)
 86221a2:	e8 a3 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86221a7:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86221ae:	08 
 86221af:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86221b5:	89 04 24             	mov    %eax,(%esp)
 86221b8:	e8 8d 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86221bd:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86221c4:	08 
 86221c5:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86221cb:	89 04 24             	mov    %eax,(%esp)
 86221ce:	e8 77 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86221d3:	c7 44 24 04 e0 36 ce 	movl   $0x8ce36e0,0x4(%esp)
 86221da:	08 
 86221db:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86221e1:	89 04 24             	mov    %eax,(%esp)
 86221e4:	e8 61 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86221e9:	c7 44 24 04 e4 36 ce 	movl   $0x8ce36e4,0x4(%esp)
 86221f0:	08 
 86221f1:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86221f7:	89 04 24             	mov    %eax,(%esp)
 86221fa:	e8 4b 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86221ff:	c7 44 24 04 e4 36 ce 	movl   $0x8ce36e4,0x4(%esp)
 8622206:	08 
 8622207:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862220d:	89 04 24             	mov    %eax,(%esp)
 8622210:	e8 35 48 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622215:	8d 85 90 e7 ff ff    	lea    -0x1870(%ebp),%eax
 862221b:	8d b8 00 0c 00 00    	lea    0xc00(%eax),%edi
 8622221:	8b 45 0c             	mov    0xc(%ebp),%eax
 8622224:	8b 70 70             	mov    0x70(%eax),%esi
 8622227:	8b 45 0c             	mov    0xc(%ebp),%eax
 862222a:	83 c0 6c             	add    $0x6c,%eax
 862222d:	89 04 24             	mov    %eax,(%esp)
 8622230:	e8 3b 44 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 8622235:	89 c3                	mov    %eax,%ebx
 8622237:	8b 45 0c             	mov    0xc(%ebp),%eax
 862223a:	83 c0 6c             	add    $0x6c,%eax
 862223d:	89 04 24             	mov    %eax,(%esp)
 8622240:	e8 ab 42 0e 00       	call   87064f0 <_ZNKSs5c_strEv>
 8622245:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8622249:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 862224d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622251:	8b 45 08             	mov    0x8(%ebp),%eax
 8622254:	89 04 24             	mov    %eax,(%esp)
 8622257:	e8 aa b4 ff ff       	call   861d706 <_ZN11sync_script11CSyncScript6GetURLEPKcii>
 862225c:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8622260:	89 44 24 04          	mov    %eax,0x4(%esp)
 8622264:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8622267:	89 04 24             	mov    %eax,(%esp)
 862226a:	e8 d8 a9 ff ff       	call   861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>
 862226f:	89 c3                	mov    %eax,%ebx
 8622271:	c7 44 24 04 6a 2f ce 	movl   $0x8ce2f6a,0x4(%esp)
 8622278:	08 
 8622279:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 862227f:	89 04 24             	mov    %eax,(%esp)
 8622282:	e8 c3 47 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622287:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 862228b:	89 04 24             	mov    %eax,(%esp)
 862228e:	e8 b7 47 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 8622293:	c7 44 24 04 26 2e ce 	movl   $0x8ce2e26,0x4(%esp)
 862229a:	08 
 862229b:	89 04 24             	mov    %eax,(%esp)
 862229e:	e8 a7 47 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86222a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86222a6:	8b 98 c4 00 00 00    	mov    0xc4(%eax),%ebx
 86222ac:	c7 44 24 04 6e 2f ce 	movl   $0x8ce2f6e,0x4(%esp)
 86222b3:	08 
 86222b4:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86222ba:	89 04 24             	mov    %eax,(%esp)
 86222bd:	e8 88 47 00 00       	call   8626a4a <_ZN13CStreamBufferlsEPKc>
 86222c2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86222c6:	89 04 24             	mov    %eax,(%esp)
 86222c9:	e8 a2 47 00 00       	call   8626a70 <_ZN13CStreamBufferlsEi>
 86222ce:	8d 85 90 47 ff ff    	lea    -0xb870(%ebp),%eax
 86222d4:	89 04 24             	mov    %eax,(%esp)
 86222d7:	e8 06 47 00 00       	call   86269e2 <_ZN13CStreamBuffer5c_strEv>
 86222dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 86222e0:	c7 44 24 04 f0 36 ce 	movl   $0x8ce36f0,0x4(%esp)
 86222e7:	08 
 86222e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86222eb:	89 04 24             	mov    %eax,(%esp)
 86222ee:	e8 cd 1e dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86222f3:	8d 45 90             	lea    -0x70(%ebp),%eax
 86222f6:	89 04 24             	mov    %eax,(%esp)
 86222f9:	e8 96 59 00 00       	call   8627c94 <_ZN19CFieldLengthCheckerC1Ev>
 86222fe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8622301:	89 04 24             	mov    %eax,(%esp)
 8622304:	e8 55 b3 e2 ff       	call   844d65e <_ZN5MySQL14GetQueryStringEv>
 8622309:	89 44 24 04          	mov    %eax,0x4(%esp)
 862230d:	8d 45 90             	lea    -0x70(%ebp),%eax
 8622310:	89 04 24             	mov    %eax,(%esp)
 8622313:	e8 d0 4f 00 00       	call   86272e8 <_ZN19CFieldLengthChecker8AddFieldEPKc>
 8622318:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862231f:	00 
 8622320:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8622323:	89 04 24             	mov    %eax,(%esp)
 8622326:	e8 fb 1f dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 862232b:	83 f0 01             	xor    $0x1,%eax
 862232e:	84 c0                	test   %al,%al
 8622330:	74 07                	je     8622339 <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19d1>
 8622332:	bb 00 00 00 00       	mov    $0x0,%ebx
 8622337:	eb 22                	jmp    862235b <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19f3>
 8622339:	bb 01 00 00 00       	mov    $0x1,%ebx
 862233e:	eb 1b                	jmp    862235b <_ZN11sync_script11CSyncScript27insert_stackable_item_to_dbEP17STStackableScript+0x19f3>
 8622340:	89 d3                	mov    %edx,%ebx
 8622342:	89 c6                	mov    %eax,%esi
 8622344:	8d 45 90             	lea    -0x70(%ebp),%eax
 8622347:	89 04 24             	mov    %eax,(%esp)
 862234a:	e8 59 59 00 00       	call   8627ca8 <_ZN19CFieldLengthCheckerD1Ev>
 862234f:	89 f0                	mov    %esi,%eax
 8622351:	89 da                	mov    %ebx,%edx
 8622353:	89 04 24             	mov    %eax,(%esp)
 8622356:	e8 f5 13 4c 00       	call   8ae3750 <_Unwind_Resume>
 862235b:	8d 45 90             	lea    -0x70(%ebp),%eax
 862235e:	89 04 24             	mov    %eax,(%esp)
 8622361:	e8 42 59 00 00       	call   8627ca8 <_ZN19CFieldLengthCheckerD1Ev>
 8622366:	89 d8                	mov    %ebx,%eax
 8622368:	8d 65 f4             	lea    -0xc(%ebp),%esp
 862236b:	83 c4 00             	add    $0x0,%esp
 862236e:	5b                   	pop    %ebx
 862236f:	5e                   	pop    %esi
 8622370:	5f                   	pop    %edi
 8622371:	5d                   	pop    %ebp
 8622372:	c3                   	ret
 8622373:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_stackable_item_to_db @ 0x8620968

/* sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*) */

bool __thiscall
sync_script::CSyncScript::insert_stackable_item_to_db(CSyncScript *this,STStackableScript *param_1)

{
  EquipmentParameterInfo EVar1;
  float fVar2;
  char cVar3;
  char *pcVar4;
  CStreamBuffer *pCVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  byte bVar13;
  CStreamBuffer local_b874 [40960];
  char local_1874 [1024];
  char local_1474 [1024];
  char acStack_1074 [1024];
  undefined1 local_c74 [1024];
  char local_874 [1024];
  char local_474 [1024];
  undefined1 local_74 [12];
  int local_68;
  int local_64;
  string local_60 [4];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  undefined4 local_3c;
  CStringMaker local_38 [4];
  CStringMaker local_34 [12];
  MySQL *local_28;
  EquipmentParameterInfo *local_24;
  EquipmentParameterInfo *local_20;
  
  bVar13 = 0;
  piVar11 = (int *)&stack0xffff4764;
  if (*this == (CSyncScript)0x1) {
    local_28 = (MySQL *)DBMgr::GetDBHandle();
    std::string::string(local_60,(string *)(param_1 + 0xbc));
                    /* try { // try from 086209f5 to 086209f9 has its CatchHandler @ 08620a10 */
    cVar3 = GetType();
    std::string::~string(local_60);
    if (cVar3 == '\x01') {
      CStreamBuffer::CStreamBuffer(local_b874);
      pcVar4 = local_1874;
      for (iVar10 = 0x400; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
      }
      pcVar4 = local_474;
      for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
      }
      pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xac));
      cVar3 = CodePage::script2Database(pcVar4,local_474);
      if (cVar3 == '\x01') {
        pcVar4 = local_874;
        for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar13 * -2 + 1) * 4;
        }
        pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xb4));
        cVar3 = CodePage::script2Database(pcVar4,local_874);
        if (cVar3 == '\x01') {
          CStreamBuffer::operator<<(local_b874,*(int *)param_1);
          pcVar4 = (char *)GetEscapeString(local_28,local_474,local_1874);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pcVar4 = (char *)std::string::c_str((string *)(param_1 + 0xb0));
          pcVar4 = (char *)GetEscapeString(local_28,pcVar4,local_1474);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pcVar4 = (char *)GetEscapeString(local_28,local_874,acStack_1074);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,local_68);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,local_64);
          pcVar4 = (char *)GetUsableCharacter(this,param_1);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          iVar10 = *(int *)(param_1 + 4);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pcVar4 = (char *)GetAttachType(this,*(int *)(param_1 + 8));
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
          CStreamBuffer::operator<<(pCVar5,"\'");
          iVar10 = *(int *)(param_1 + 0x5c);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,0);
          iVar10 = *(int *)(param_1 + 0xc);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x34);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x14);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x18);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          iVar10 = *(int *)(param_1 + 0x1c);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,0);
          iVar10 = *(int *)(param_1 + 0x68);
          pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
          CStreamBuffer::operator<<(pCVar5,iVar10);
          local_3c = 0x13;
          piVar6 = (int *)std::
                          map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                          ::operator[]((map<ENUM_MODULE_TYPE,EquipmentParameterInfo*,std::less<ENUM_MODULE_TYPE>,std::allocator<std::pair<ENUM_MODULE_TYPE_const,EquipmentParameterInfo*>>>
                                        *)(param_1 + 0x4bc),(ENUM_MODULE_TYPE *)&local_3c);
          local_24 = (EquipmentParameterInfo *)*piVar6;
          if (local_24 == (EquipmentParameterInfo *)0x0) {
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", \'\'");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0.0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", 0");
            CStreamBuffer::operator<<(local_b874,", \'\'");
          }
          else {
            iVar10 = *(int *)(local_24 + 4);
            local_20 = local_24;
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x14);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x18);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x1c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x24);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x54);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x5c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 100);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x6c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xb8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xbc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xc4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 200);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xcc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xd8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xdc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xe8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xec);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf0);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xfc);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x100);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x108);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf4);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0xf8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x10c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x110);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x114);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x11c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x128);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 300);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x130);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x134);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            pcVar4 = (char *)GetAttackElement(this,local_20);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
            CStreamBuffer::operator<<(pCVar5,"\'");
            iVar10 = *(int *)(local_20 + 0x144);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x148);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x14c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x220);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x224);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            EVar1 = local_20[0x23c];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            EVar1 = local_20[0x23d];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            fVar2 = *(float *)(local_20 + 0x138);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 0x228);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            EVar1 = local_20[0x22c];
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,(uint)(byte)EVar1);
            fVar2 = *(float *)(local_20 + 0x274);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 8);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            fVar2 = *(float *)(local_20 + 0x10);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x288);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x28c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x290);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x294);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x298);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x284);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x13c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x74);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x78);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x7c);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x80);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            iVar10 = *(int *)(local_20 + 0x84);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            fVar2 = *(float *)(local_20 + 0x88);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,fVar2);
            iVar10 = *(int *)(local_20 + 0x104);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", ");
            CStreamBuffer::operator<<(pCVar5,iVar10);
            CStringMaker::CStringMaker(local_34);
                    /* try { // try from 08621b3d to 08621b7f has its CatchHandler @ 08621be6 */
            std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::end();
            std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>::begin();
            std::
            for_each<__gnu_cxx::__normal_iterator<LevelUpSkill*,std::vector<LevelUpSkill,std::allocator<LevelUpSkill>>>,sync_script::CStringMaker>
                      ();
            piVar11 = (int *)&stack0xffff4760;
                    /* try { // try from 08621b89 to 08621bc1 has its CatchHandler @ 08621bc4 */
            pcVar4 = (char *)CStringMaker::c_str(local_38);
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(local_b874,", \'");
            pCVar5 = (CStreamBuffer *)CStreamBuffer::operator<<(pCVar5,pcVar4);
            CStreamBuffer::operator<<(pCVar5,"\'");
                    /* try { // try from 08621bdf to 08621be3 has its CatchHandler @ 08621be6 */
            CStringMaker::~CStringMaker(local_38);
            CStringMaker::~CStringMaker(local_34);
          }
          piVar11[1] = (int)&DAT_08ce36e4;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x8622215;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          iVar10 = *(int *)(param_1 + 0x70);
          *piVar11 = (int)(param_1 + 0x6c);
          piVar11[-1] = 0x8622235;
          iVar7 = std::string::length((string *)*piVar11);
          *piVar11 = (int)(param_1 + 0x6c);
          piVar11[-1] = 0x8622245;
          iVar8 = std::string::c_str((string *)*piVar11);
          piVar11[3] = iVar10;
          piVar11[2] = iVar7;
          piVar11[1] = iVar8;
          *piVar11 = (int)this;
          piVar11[-1] = 0x862225c;
          iVar10 = GetURL((CSyncScript *)*piVar11,(char *)piVar11[1],piVar11[2],piVar11[3]);
          piVar11[2] = (int)local_c74;
          piVar11[1] = iVar10;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x862226f;
          iVar10 = GetEscapeString((MySQL *)*piVar11,(char *)piVar11[1],(char *)piVar11[2]);
          piVar11[1] = (int)&DAT_08ce2f6a;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x8622287;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = iVar10;
          *piVar11 = uVar9;
          piVar11[-1] = 0x8622293;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = (int)&DAT_08ce2e26;
          *piVar11 = uVar9;
          piVar11[-1] = 0x86222a3;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          iVar10 = *(int *)(param_1 + 0xc4);
          piVar11[1] = (int)&DAT_08ce2f6e;
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x86222c2;
          uVar9 = CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = iVar10;
          *piVar11 = uVar9;
          piVar11[-1] = 0x86222ce;
          CStreamBuffer::operator<<((CStreamBuffer *)*piVar11,piVar11[1]);
          *piVar11 = (int)local_b874;
          piVar11[-1] = 0x86222dc;
          iVar10 = CStreamBuffer::c_str((CStreamBuffer *)*piVar11);
          piVar11[2] = iVar10;
          piVar11[1] = (int)
                       "inSert into dnf_item_info(it_no, it_name, it_eng_name, it_explain, master_type, sub_type, job, class, revert, level, skill, create_ratio, rarity, weight, price, cash, medal, durability, cooltime, hp_max, mp_max, phy_att, phy_def, mag_att, mag_def, equip_phy_att, equip_phy_def, equip_mag_att, equip_mag_def, ref_fire, ref_water, ref_dark, ref_light, ref_all, ref_slow, ref_freeze, ref_poison, ref_stun, ref_cus, ref_blind, ref_lite, ref_ston, ref_sleep, ref_deekement, ref_deadlystrike, ref_bleeding, ref_confuse, ref_hold, ref_all_stat, ref_pierce, ref_stuck, inven_max, hp_regenrate, mp_regenrate, mov_speed, att_speed, quest, hit_recovery, jump, att_element, att_active_status, att_active_status_ratio, att_active_status_pow, att_backforce, att_upforce, att_hp_drain, att_mp_drain, criticalhit_rate, stuck_rate, att_defenseIgnore, room_list_move_speed_rate, hp_max_rate, mp_max_rate, fire_attack, water_attack, dark_attack, light_attack, all_attack, rigidity, magical_critical_hit, physical_absolute_damage, physical_damage_reduce, physical_absolute_defense, magical_absolute_damage, magical_damage_reduce, magical_absolute_defense, armor_break_resistance, skill_levelup, set_type, url, icon_mark_number) values(%s)"
          ;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x86222f3;
          MySQL::set_query((MySQL *)*piVar11,(char *)piVar11[1]);
          *piVar11 = (int)local_74;
          piVar11[-1] = 0x86222fe;
          CFieldLengthChecker::CFieldLengthChecker((CFieldLengthChecker *)*piVar11);
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x8622309;
          iVar10 = MySQL::GetQueryString((MySQL *)*piVar11);
          piVar11[1] = iVar10;
          *piVar11 = (int)local_74;
                    /* try { // try from 08622313 to 0862232a has its CatchHandler @ 08622340 */
          piVar11[-1] = 0x8622318;
          CFieldLengthChecker::AddField((CFieldLengthChecker *)*piVar11,(char *)piVar11[1]);
          piVar11[1] = 1;
          *piVar11 = (int)local_28;
          piVar11[-1] = 0x862232b;
          cVar3 = MySQL::exec((MySQL *)*piVar11,SUB41(piVar11[1],0));
          bVar12 = cVar3 == '\x01';
          *piVar11 = (int)local_74;
          piVar11[-1] = 0x8622366;
          CFieldLengthChecker::~CFieldLengthChecker((CFieldLengthChecker *)*piVar11);
        }
        else {
          std::string::c_str((string *)(param_1 + 0xb4));
          CodePage::database();
          CodePage::script();
          cMyTrace::cMyTrace(local_4c,
                             "bool sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)"
                             ,0x52a,5);
          cMyTrace::operator()(local_4c,"Error!!! %s->%s [%s][%s][%d]");
          bVar12 = false;
        }
      }
      else {
        std::string::c_str((string *)(param_1 + 0xac));
        CodePage::database();
        CodePage::script();
        cMyTrace::cMyTrace(local_5c,
                           "bool sync_script::CSyncScript::insert_stackable_item_to_db(STStackableScript*)"
                           ,0x523,5);
        cMyTrace::operator()(local_5c,"Error!!! %s->%s [%s][%s][%d]");
        bVar12 = false;
      }
    }
    else {
      bVar12 = false;
    }
  }
  else {
    bVar12 = true;
  }
  return bVar12;
}

```

---

## insert_town_info_to_db

```asm
// === 086265be sync_script::CSyncScript::insert_town_info_to_db  [0x086265be-0x862676b] ===
 86265be:	55                   	push   %ebp
 86265bf:	89 e5                	mov    %esp,%ebp
 86265c1:	57                   	push   %edi
 86265c2:	56                   	push   %esi
 86265c3:	53                   	push   %ebx
 86265c4:	81 ec 4c 04 00 00    	sub    $0x44c,%esp
 86265ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86265cd:	0f b6 00             	movzbl (%eax),%eax
 86265d0:	83 f0 01             	xor    $0x1,%eax
 86265d3:	84 c0                	test   %al,%al
 86265d5:	74 0a                	je     86265e1 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x23>
 86265d7:	b8 01 00 00 00       	mov    $0x1,%eax
 86265dc:	e9 7f 01 00 00       	jmp    8626760 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x1a2>
 86265e1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86265e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86265ed:	00 
 86265ee:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86265f5:	00 
 86265f6:	89 04 24             	mov    %eax,(%esp)
 86265f9:	e8 40 ec dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86265fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8626601:	8b 45 0c             	mov    0xc(%ebp),%eax
 8626604:	8b 00                	mov    (%eax),%eax
 8626606:	85 c0                	test   %eax,%eax
 8626608:	74 19                	je     8626623 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x65>
 862660a:	8b 45 0c             	mov    0xc(%ebp),%eax
 862660d:	83 c0 04             	add    $0x4,%eax
 8626610:	89 04 24             	mov    %eax,(%esp)
 8626613:	e8 58 00 0e 00       	call   8706670 <_ZNKSs6lengthEv>
 8626618:	85 c0                	test   %eax,%eax
 862661a:	74 07                	je     8626623 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x65>
 862661c:	b8 01 00 00 00       	mov    $0x1,%eax
 8626621:	eb 05                	jmp    8626628 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x6a>
 8626623:	b8 00 00 00 00       	mov    $0x0,%eax
 8626628:	84 c0                	test   %al,%al
 862662a:	0f 84 2b 01 00 00    	je     862675b <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x19d>
 8626630:	c7 44 24 08 f0 00 00 	movl   $0xf0,0x8(%esp)
 8626637:	00 
 8626638:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 862663f:	00 
 8626640:	c7 04 24 00 35 47 09 	movl   $0x9473500,(%esp)
 8626647:	e8 74 76 a5 ff       	call   807dcc0 <memset@plt>
 862664c:	8d 9d d4 fb ff ff    	lea    -0x42c(%ebp),%ebx
 8626652:	b8 00 00 00 00       	mov    $0x0,%eax
 8626657:	ba 00 01 00 00       	mov    $0x100,%edx
 862665c:	89 df                	mov    %ebx,%edi
 862665e:	89 d1                	mov    %edx,%ecx
 8626660:	f3 ab                	rep stos %eax,%es:(%edi)
 8626662:	8b 45 0c             	mov    0xc(%ebp),%eax
 8626665:	83 c0 04             	add    $0x4,%eax
 8626668:	89 04 24             	mov    %eax,(%esp)
 862666b:	e8 80 fe 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626670:	8d 95 d4 fb ff ff    	lea    -0x42c(%ebp),%edx
 8626676:	89 54 24 04          	mov    %edx,0x4(%esp)
 862667a:	89 04 24             	mov    %eax,(%esp)
 862667d:	e8 86 27 ae ff       	call   8108e08 <_ZN8CodePage15script2DatabaseEPcS0_>
 8626682:	83 f0 01             	xor    $0x1,%eax
 8626685:	84 c0                	test   %al,%al
 8626687:	74 70                	je     86266f9 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x13b>
 8626689:	8b 45 0c             	mov    0xc(%ebp),%eax
 862668c:	83 c0 04             	add    $0x4,%eax
 862668f:	89 04 24             	mov    %eax,(%esp)
 8626692:	e8 59 fe 0d 00       	call   87064f0 <_ZNKSs5c_strEv>
 8626697:	89 c7                	mov    %eax,%edi
 8626699:	e8 42 27 ae ff       	call   8108de0 <_ZN8CodePage8databaseEv>
 862669e:	89 c6                	mov    %eax,%esi
 86266a0:	e8 27 27 ae ff       	call   8108dcc <_ZN8CodePage6scriptEv>
 86266a5:	89 c3                	mov    %eax,%ebx
 86266a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86266ae:	00 
 86266af:	c7 44 24 08 c2 0b 00 	movl   $0xbc2,0x8(%esp)
 86266b6:	00 
 86266b7:	c7 44 24 04 60 55 ce 	movl   $0x8ce5560,0x4(%esp)
 86266be:	08 
 86266bf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86266c2:	89 04 24             	mov    %eax,(%esp)
 86266c5:	e8 4e 90 f2 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86266ca:	c7 44 24 18 c2 0b 00 	movl   $0xbc2,0x18(%esp)
 86266d1:	00 
 86266d2:	c7 44 24 14 60 55 ce 	movl   $0x8ce5560,0x14(%esp)
 86266d9:	08 
 86266da:	89 7c 24 10          	mov    %edi,0x10(%esp)
 86266de:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86266e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86266e6:	c7 44 24 04 4d 2f ce 	movl   $0x8ce2f4d,0x4(%esp)
 86266ed:	08 
 86266ee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86266f1:	89 04 24             	mov    %eax,(%esp)
 86266f4:	e8 8f 90 f2 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86266f9:	8d 85 d4 fb ff ff    	lea    -0x42c(%ebp),%eax
 86266ff:	89 44 24 08          	mov    %eax,0x8(%esp)
 8626703:	c7 44 24 04 00 35 47 	movl   $0x9473500,0x4(%esp)
 862670a:	09 
 862670b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 862670e:	89 04 24             	mov    %eax,(%esp)
 8626711:	e8 94 e1 dc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8626716:	8b 45 0c             	mov    0xc(%ebp),%eax
 8626719:	8b 00                	mov    (%eax),%eax
 862671b:	c7 44 24 0c 00 35 47 	movl   $0x9473500,0xc(%esp)
 8626722:	09 
 8626723:	89 44 24 08          	mov    %eax,0x8(%esp)
 8626727:	c7 44 24 04 70 48 ce 	movl   $0x8ce4870,0x4(%esp)
 862672e:	08 
 862672f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8626732:	89 04 24             	mov    %eax,(%esp)
 8626735:	e8 86 da dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862673a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8626741:	00 
 8626742:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8626745:	89 04 24             	mov    %eax,(%esp)
 8626748:	e8 d9 db dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862674d:	83 f0 01             	xor    $0x1,%eax
 8626750:	84 c0                	test   %al,%al
 8626752:	74 07                	je     862675b <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x19d>
 8626754:	b8 00 00 00 00       	mov    $0x0,%eax
 8626759:	eb 05                	jmp    8626760 <_ZN11sync_script11CSyncScript22insert_town_info_to_dbERK10TownScript+0x1a2>
 862675b:	b8 01 00 00 00       	mov    $0x1,%eax
 8626760:	81 c4 4c 04 00 00    	add    $0x44c,%esp
 8626766:	5b                   	pop    %ebx
 8626767:	5e                   	pop    %esi
 8626768:	5f                   	pop    %edi
 8626769:	5d                   	pop    %ebp
 862676a:	c3                   	ret
 862676b:	90                   	nop

```

```c
// sync_script::CSyncScript::insert_town_info_to_db @ 0x86265be

/* sync_script::CSyncScript::insert_town_info_to_db(TownScript const&) */

undefined4 __thiscall
sync_script::CSyncScript::insert_town_info_to_db(CSyncScript *this,TownScript *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char local_430 [1024];
  cMyTrace local_30 [16];
  MySQL *local_20;
  
  bVar8 = 0;
  if (*this != (CSyncScript)0x1) {
    return 1;
  }
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  if ((*(int *)param_1 == 0) || (iVar3 = std::string::length((string *)(param_1 + 4)), iVar3 == 0))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    memset(insert_town_info_to_db(TownScript_const&)::town_name,0,0xf0);
    pcVar4 = local_430;
    for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    }
    pcVar4 = (char *)std::string::c_str((string *)(param_1 + 4));
    cVar2 = CodePage::script2Database(pcVar4,local_430);
    if (cVar2 != '\x01') {
      uVar5 = std::string::c_str((string *)(param_1 + 4));
      uVar6 = CodePage::database();
      uVar7 = CodePage::script();
      cMyTrace::cMyTrace(local_30,
                         "bool sync_script::CSyncScript::insert_town_info_to_db(const TownScript&)",
                         0xbc2,5);
      cMyTrace::operator()
                (local_30,"Error!!! %s->%s [%s][%s][%d]",uVar7,uVar6,uVar5,
                 "bool sync_script::CSyncScript::insert_town_info_to_db(const TownScript&)",0xbc2);
    }
    MySQL::escape_string(local_20,insert_town_info_to_db(TownScript_const&)::town_name,local_430);
    MySQL::set_query(local_20,"inSert into dnf_town_info(idx, town_name_kr) values(%d, \'%s\')",
                     *(undefined4 *)param_1,insert_town_info_to_db(TownScript_const&)::town_name);
    cVar2 = MySQL::exec(local_20,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## trancate_item_parts_set

```asm
// === 08622c66 sync_script::CSyncScript::trancate_item_parts_set  [0x08622c66-0x8622cdb] ===
 8622c66:	55                   	push   %ebp
 8622c67:	89 e5                	mov    %esp,%ebp
 8622c69:	83 ec 28             	sub    $0x28,%esp
 8622c6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8622c6f:	0f b6 00             	movzbl (%eax),%eax
 8622c72:	83 f0 01             	xor    $0x1,%eax
 8622c75:	84 c0                	test   %al,%al
 8622c77:	74 07                	je     8622c80 <_ZN11sync_script11CSyncScript23trancate_item_parts_setEv+0x1a>
 8622c79:	b8 01 00 00 00       	mov    $0x1,%eax
 8622c7e:	eb 59                	jmp    8622cd9 <_ZN11sync_script11CSyncScript23trancate_item_parts_setEv+0x73>
 8622c80:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622c85:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622c8c:	00 
 8622c8d:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622c94:	00 
 8622c95:	89 04 24             	mov    %eax,(%esp)
 8622c98:	e8 a1 25 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622c9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622ca0:	c7 44 24 04 06 3e ce 	movl   $0x8ce3e06,0x4(%esp)
 8622ca7:	08 
 8622ca8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622cab:	89 04 24             	mov    %eax,(%esp)
 8622cae:	e8 0d 15 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622cb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622cba:	00 
 8622cbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622cbe:	89 04 24             	mov    %eax,(%esp)
 8622cc1:	e8 60 16 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622cc6:	83 f0 01             	xor    $0x1,%eax
 8622cc9:	84 c0                	test   %al,%al
 8622ccb:	74 07                	je     8622cd4 <_ZN11sync_script11CSyncScript23trancate_item_parts_setEv+0x6e>
 8622ccd:	b8 00 00 00 00       	mov    $0x0,%eax
 8622cd2:	eb 05                	jmp    8622cd9 <_ZN11sync_script11CSyncScript23trancate_item_parts_setEv+0x73>
 8622cd4:	b8 01 00 00 00       	mov    $0x1,%eax
 8622cd9:	c9                   	leave
 8622cda:	c3                   	ret
 8622cdb:	90                   	nop

```

```c
// sync_script::CSyncScript::trancate_item_parts_set @ 0x8622c66

/* sync_script::CSyncScript::trancate_item_parts_set() */

undefined4 __thiscall sync_script::CSyncScript::trancate_item_parts_set(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table item_part_set");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## trancate_skill_info

```asm
// === 08622d92 sync_script::CSyncScript::trancate_skill_info  [0x08622d92-0x8622e07] ===
 8622d92:	55                   	push   %ebp
 8622d93:	89 e5                	mov    %esp,%ebp
 8622d95:	83 ec 28             	sub    $0x28,%esp
 8622d98:	8b 45 08             	mov    0x8(%ebp),%eax
 8622d9b:	0f b6 00             	movzbl (%eax),%eax
 8622d9e:	83 f0 01             	xor    $0x1,%eax
 8622da1:	84 c0                	test   %al,%al
 8622da3:	74 07                	je     8622dac <_ZN11sync_script11CSyncScript19trancate_skill_infoEv+0x1a>
 8622da5:	b8 01 00 00 00       	mov    $0x1,%eax
 8622daa:	eb 59                	jmp    8622e05 <_ZN11sync_script11CSyncScript19trancate_skill_infoEv+0x73>
 8622dac:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622db1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622db8:	00 
 8622db9:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622dc0:	00 
 8622dc1:	89 04 24             	mov    %eax,(%esp)
 8622dc4:	e8 75 24 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622dc9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622dcc:	c7 44 24 04 97 3e ce 	movl   $0x8ce3e97,0x4(%esp)
 8622dd3:	08 
 8622dd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622dd7:	89 04 24             	mov    %eax,(%esp)
 8622dda:	e8 e1 13 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622ddf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622de6:	00 
 8622de7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622dea:	89 04 24             	mov    %eax,(%esp)
 8622ded:	e8 34 15 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622df2:	83 f0 01             	xor    $0x1,%eax
 8622df5:	84 c0                	test   %al,%al
 8622df7:	74 07                	je     8622e00 <_ZN11sync_script11CSyncScript19trancate_skill_infoEv+0x6e>
 8622df9:	b8 00 00 00 00       	mov    $0x0,%eax
 8622dfe:	eb 05                	jmp    8622e05 <_ZN11sync_script11CSyncScript19trancate_skill_infoEv+0x73>
 8622e00:	b8 01 00 00 00       	mov    $0x1,%eax
 8622e05:	c9                   	leave
 8622e06:	c3                   	ret
 8622e07:	90                   	nop

```

```c
// sync_script::CSyncScript::trancate_skill_info @ 0x8622d92

/* sync_script::CSyncScript::trancate_skill_info() */

undefined4 __thiscall sync_script::CSyncScript::trancate_skill_info(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table skill_info; ");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncateCeraShopItemTable

```asm
// === 08622a5a sync_script::CSyncScript::truncateCeraShopItemTable  [0x08622a5a-0x8622abb] ===
 8622a5a:	55                   	push   %ebp
 8622a5b:	89 e5                	mov    %esp,%ebp
 8622a5d:	83 ec 28             	sub    $0x28,%esp
 8622a60:	8b 45 08             	mov    0x8(%ebp),%eax
 8622a63:	0f b6 00             	movzbl (%eax),%eax
 8622a66:	83 f0 01             	xor    $0x1,%eax
 8622a69:	84 c0                	test   %al,%al
 8622a6b:	74 07                	je     8622a74 <_ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv+0x1a>
 8622a6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8622a72:	eb 46                	jmp    8622aba <_ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv+0x60>
 8622a74:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622a79:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622a80:	00 
 8622a81:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622a88:	00 
 8622a89:	89 04 24             	mov    %eax,(%esp)
 8622a8c:	e8 ad 27 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622a91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8622a94:	c7 44 24 04 7c 3d ce 	movl   $0x8ce3d7c,0x4(%esp)
 8622a9b:	08 
 8622a9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622a9f:	89 04 24             	mov    %eax,(%esp)
 8622aa2:	e8 19 17 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622aa7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622aae:	00 
 8622aaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622ab2:	89 04 24             	mov    %eax,(%esp)
 8622ab5:	e8 6c 18 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622aba:	c9                   	leave
 8622abb:	c3                   	ret

```

```c
// sync_script::CSyncScript::truncateCeraShopItemTable @ 0x8622a5a

/* sync_script::CSyncScript::truncateCeraShopItemTable() */

undefined4 __thiscall sync_script::CSyncScript::truncateCeraShopItemTable(CSyncScript *this)

{
  undefined4 uVar1;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table dnf_item_price; ");
    uVar1 = MySQL::exec(this_00,true);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## truncate_aicharacter_info_table

```asm
// === 0862630e sync_script::CSyncScript::truncate_aicharacter_info_table  [0x0862630e-0x8626391] ===
 862630e:	55                   	push   %ebp
 862630f:	89 e5                	mov    %esp,%ebp
 8626311:	83 ec 28             	sub    $0x28,%esp
 8626314:	8b 45 08             	mov    0x8(%ebp),%eax
 8626317:	0f b6 00             	movzbl (%eax),%eax
 862631a:	83 f0 01             	xor    $0x1,%eax
 862631d:	84 c0                	test   %al,%al
 862631f:	74 07                	je     8626328 <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x1a>
 8626321:	b8 01 00 00 00       	mov    $0x1,%eax
 8626326:	eb 67                	jmp    862638f <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x81>
 8626328:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862632d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8626334:	00 
 8626335:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862633c:	00 
 862633d:	89 04 24             	mov    %eax,(%esp)
 8626340:	e8 f9 ee dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8626345:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8626348:	c7 44 24 04 ec 47 ce 	movl   $0x8ce47ec,0x4(%esp)
 862634f:	08 
 8626350:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8626353:	89 04 24             	mov    %eax,(%esp)
 8626356:	e8 65 de dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862635b:	83 f0 01             	xor    $0x1,%eax
 862635e:	84 c0                	test   %al,%al
 8626360:	74 07                	je     8626369 <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x5b>
 8626362:	b8 00 00 00 00       	mov    $0x0,%eax
 8626367:	eb 26                	jmp    862638f <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x81>
 8626369:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8626370:	00 
 8626371:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8626374:	89 04 24             	mov    %eax,(%esp)
 8626377:	e8 aa df dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862637c:	83 f0 01             	xor    $0x1,%eax
 862637f:	84 c0                	test   %al,%al
 8626381:	74 07                	je     862638a <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x7c>
 8626383:	b8 00 00 00 00       	mov    $0x0,%eax
 8626388:	eb 05                	jmp    862638f <_ZN11sync_script11CSyncScript31truncate_aicharacter_info_tableEv+0x81>
 862638a:	b8 01 00 00 00       	mov    $0x1,%eax
 862638f:	c9                   	leave
 8626390:	c3                   	ret
 8626391:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_aicharacter_info_table @ 0x862630e

/* sync_script::CSyncScript::truncate_aicharacter_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_aicharacter_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_aicharacter_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_artifact_info_table

```asm
// === 08624b0a sync_script::CSyncScript::truncate_artifact_info_table  [0x08624b0a-0x8624b8d] ===
 8624b0a:	55                   	push   %ebp
 8624b0b:	89 e5                	mov    %esp,%ebp
 8624b0d:	83 ec 28             	sub    $0x28,%esp
 8624b10:	8b 45 08             	mov    0x8(%ebp),%eax
 8624b13:	0f b6 00             	movzbl (%eax),%eax
 8624b16:	83 f0 01             	xor    $0x1,%eax
 8624b19:	84 c0                	test   %al,%al
 8624b1b:	74 07                	je     8624b24 <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x1a>
 8624b1d:	b8 01 00 00 00       	mov    $0x1,%eax
 8624b22:	eb 67                	jmp    8624b8b <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x81>
 8624b24:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8624b29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8624b30:	00 
 8624b31:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8624b38:	00 
 8624b39:	89 04 24             	mov    %eax,(%esp)
 8624b3c:	e8 fd 06 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8624b41:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8624b44:	c7 44 24 04 54 42 ce 	movl   $0x8ce4254,0x4(%esp)
 8624b4b:	08 
 8624b4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624b4f:	89 04 24             	mov    %eax,(%esp)
 8624b52:	e8 69 f6 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8624b57:	83 f0 01             	xor    $0x1,%eax
 8624b5a:	84 c0                	test   %al,%al
 8624b5c:	74 07                	je     8624b65 <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x5b>
 8624b5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8624b63:	eb 26                	jmp    8624b8b <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x81>
 8624b65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624b6c:	00 
 8624b6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624b70:	89 04 24             	mov    %eax,(%esp)
 8624b73:	e8 ae f7 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8624b78:	83 f0 01             	xor    $0x1,%eax
 8624b7b:	84 c0                	test   %al,%al
 8624b7d:	74 07                	je     8624b86 <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x7c>
 8624b7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8624b84:	eb 05                	jmp    8624b8b <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv+0x81>
 8624b86:	b8 01 00 00 00       	mov    $0x1,%eax
 8624b8b:	c9                   	leave
 8624b8c:	c3                   	ret
 8624b8d:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_artifact_info_table @ 0x8624b0a

/* sync_script::CSyncScript::truncate_artifact_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_artifact_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_artifact_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_charac_action_point_desc

```asm
// === 08625d96 sync_script::CSyncScript::truncate_charac_action_point_desc  [0x08625d96-0x8625db7] ===
 8625d96:	55                   	push   %ebp
 8625d97:	89 e5                	mov    %esp,%ebp
 8625d99:	83 ec 08             	sub    $0x8,%esp
 8625d9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8625d9f:	0f b6 00             	movzbl (%eax),%eax
 8625da2:	83 f0 01             	xor    $0x1,%eax
 8625da5:	84 c0                	test   %al,%al
 8625da7:	74 07                	je     8625db0 <_ZN11sync_script11CSyncScript33truncate_charac_action_point_descEv+0x1a>
 8625da9:	b8 01 00 00 00       	mov    $0x1,%eax
 8625dae:	eb 05                	jmp    8625db5 <_ZN11sync_script11CSyncScript33truncate_charac_action_point_descEv+0x1f>
 8625db0:	e8 75 c8 af ff       	call   812262a <_ZN8APSystem11CSyncScript17TruncateDescTableEv>
 8625db5:	c9                   	leave
 8625db6:	c3                   	ret
 8625db7:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_charac_action_point_desc @ 0x8625d96

/* sync_script::CSyncScript::truncate_charac_action_point_desc() */

undefined4 __thiscall sync_script::CSyncScript::truncate_charac_action_point_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = APSystem::CSyncScript::TruncateDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## truncate_charac_advance_altar_item_desc

```asm
// === 08625dda sync_script::CSyncScript::truncate_charac_advance_altar_item_desc  [0x08625dda-0x8625dfb] ===
 8625dda:	55                   	push   %ebp
 8625ddb:	89 e5                	mov    %esp,%ebp
 8625ddd:	83 ec 08             	sub    $0x8,%esp
 8625de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8625de3:	0f b6 00             	movzbl (%eax),%eax
 8625de6:	83 f0 01             	xor    $0x1,%eax
 8625de9:	84 c0                	test   %al,%al
 8625deb:	74 07                	je     8625df4 <_ZN11sync_script11CSyncScript39truncate_charac_advance_altar_item_descEv+0x1a>
 8625ded:	b8 01 00 00 00       	mov    $0x1,%eax
 8625df2:	eb 05                	jmp    8625df9 <_ZN11sync_script11CSyncScript39truncate_charac_advance_altar_item_descEv+0x1f>
 8625df4:	e8 4b e0 b0 ff       	call   8133e44 <_ZN12advancealtar10SyncScript21truncateItemDescTableEv>
 8625df9:	c9                   	leave
 8625dfa:	c3                   	ret
 8625dfb:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_charac_advance_altar_item_desc @ 0x8625dda

/* sync_script::CSyncScript::truncate_charac_advance_altar_item_desc() */

undefined4 __thiscall
sync_script::CSyncScript::truncate_charac_advance_altar_item_desc(CSyncScript *this)

{
  undefined4 uVar1;
  
  if (*this == (CSyncScript)0x1) {
    uVar1 = advancealtar::SyncScript::truncateItemDescTable();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## truncate_charac_quest_ref

```asm
// === 08622960 sync_script::CSyncScript::truncate_charac_quest_ref  [0x08622960-0x86229d5] ===
 8622960:	55                   	push   %ebp
 8622961:	89 e5                	mov    %esp,%ebp
 8622963:	83 ec 28             	sub    $0x28,%esp
 8622966:	8b 45 08             	mov    0x8(%ebp),%eax
 8622969:	0f b6 00             	movzbl (%eax),%eax
 862296c:	83 f0 01             	xor    $0x1,%eax
 862296f:	84 c0                	test   %al,%al
 8622971:	74 07                	je     862297a <_ZN11sync_script11CSyncScript25truncate_charac_quest_refEv+0x1a>
 8622973:	b8 01 00 00 00       	mov    $0x1,%eax
 8622978:	eb 59                	jmp    86229d3 <_ZN11sync_script11CSyncScript25truncate_charac_quest_refEv+0x73>
 862297a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862297f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622986:	00 
 8622987:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 862298e:	00 
 862298f:	89 04 24             	mov    %eax,(%esp)
 8622992:	e8 a7 28 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622997:	89 45 f4             	mov    %eax,-0xc(%ebp)
 862299a:	c7 44 24 04 14 3d ce 	movl   $0x8ce3d14,0x4(%esp)
 86229a1:	08 
 86229a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86229a5:	89 04 24             	mov    %eax,(%esp)
 86229a8:	e8 13 18 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86229ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86229b4:	00 
 86229b5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86229b8:	89 04 24             	mov    %eax,(%esp)
 86229bb:	e8 66 19 dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86229c0:	83 f0 01             	xor    $0x1,%eax
 86229c3:	84 c0                	test   %al,%al
 86229c5:	74 07                	je     86229ce <_ZN11sync_script11CSyncScript25truncate_charac_quest_refEv+0x6e>
 86229c7:	b8 00 00 00 00       	mov    $0x0,%eax
 86229cc:	eb 05                	jmp    86229d3 <_ZN11sync_script11CSyncScript25truncate_charac_quest_refEv+0x73>
 86229ce:	b8 01 00 00 00       	mov    $0x1,%eax
 86229d3:	c9                   	leave
 86229d4:	c3                   	ret
 86229d5:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_charac_quest_ref @ 0x8622960

/* sync_script::CSyncScript::truncate_charac_quest_ref() */

undefined4 __thiscall sync_script::CSyncScript::truncate_charac_quest_ref(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"trUncate table charac_quest_ref; ");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_creature_info_table

```asm
// === 08624390 sync_script::CSyncScript::truncate_creature_info_table  [0x08624390-0x8624413] ===
 8624390:	55                   	push   %ebp
 8624391:	89 e5                	mov    %esp,%ebp
 8624393:	83 ec 28             	sub    $0x28,%esp
 8624396:	8b 45 08             	mov    0x8(%ebp),%eax
 8624399:	0f b6 00             	movzbl (%eax),%eax
 862439c:	83 f0 01             	xor    $0x1,%eax
 862439f:	84 c0                	test   %al,%al
 86243a1:	74 07                	je     86243aa <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x1a>
 86243a3:	b8 01 00 00 00       	mov    $0x1,%eax
 86243a8:	eb 67                	jmp    8624411 <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x81>
 86243aa:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86243af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86243b6:	00 
 86243b7:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86243be:	00 
 86243bf:	89 04 24             	mov    %eax,(%esp)
 86243c2:	e8 77 0e dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86243c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86243ca:	c7 44 24 04 84 40 ce 	movl   $0x8ce4084,0x4(%esp)
 86243d1:	08 
 86243d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86243d5:	89 04 24             	mov    %eax,(%esp)
 86243d8:	e8 e3 fd dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86243dd:	83 f0 01             	xor    $0x1,%eax
 86243e0:	84 c0                	test   %al,%al
 86243e2:	74 07                	je     86243eb <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x5b>
 86243e4:	b8 00 00 00 00       	mov    $0x0,%eax
 86243e9:	eb 26                	jmp    8624411 <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x81>
 86243eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86243f2:	00 
 86243f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86243f6:	89 04 24             	mov    %eax,(%esp)
 86243f9:	e8 28 ff dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 86243fe:	83 f0 01             	xor    $0x1,%eax
 8624401:	84 c0                	test   %al,%al
 8624403:	74 07                	je     862440c <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x7c>
 8624405:	b8 00 00 00 00       	mov    $0x0,%eax
 862440a:	eb 05                	jmp    8624411 <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv+0x81>
 862440c:	b8 01 00 00 00       	mov    $0x1,%eax
 8624411:	c9                   	leave
 8624412:	c3                   	ret
 8624413:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_creature_info_table @ 0x8624390

/* sync_script::CSyncScript::truncate_creature_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_creature_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_creature_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_dnf_item_info_table

```asm
// === 08622374 sync_script::CSyncScript::truncate_dnf_item_info_table  [0x08622374-0x8622439] ===
 8622374:	55                   	push   %ebp
 8622375:	89 e5                	mov    %esp,%ebp
 8622377:	83 ec 28             	sub    $0x28,%esp
 862237a:	8b 45 08             	mov    0x8(%ebp),%eax
 862237d:	0f b6 00             	movzbl (%eax),%eax
 8622380:	83 f0 01             	xor    $0x1,%eax
 8622383:	84 c0                	test   %al,%al
 8622385:	74 0a                	je     8622391 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0x1d>
 8622387:	b8 01 00 00 00       	mov    $0x1,%eax
 862238c:	e9 a6 00 00 00       	jmp    8622437 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xc3>
 8622391:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622396:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862239d:	00 
 862239e:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86223a5:	00 
 86223a6:	89 04 24             	mov    %eax,(%esp)
 86223a9:	e8 90 2e dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86223ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86223b1:	c7 44 24 04 b3 3b ce 	movl   $0x8ce3bb3,0x4(%esp)
 86223b8:	08 
 86223b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86223bc:	89 04 24             	mov    %eax,(%esp)
 86223bf:	e8 fc 1d dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86223c4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86223cb:	00 
 86223cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86223cf:	89 04 24             	mov    %eax,(%esp)
 86223d2:	e8 4f 1f dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86223d7:	83 f0 01             	xor    $0x1,%eax
 86223da:	84 c0                	test   %al,%al
 86223dc:	74 07                	je     86223e5 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0x71>
 86223de:	b8 00 00 00 00       	mov    $0x0,%eax
 86223e3:	eb 52                	jmp    8622437 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xc3>
 86223e5:	c7 44 24 04 d0 3b ce 	movl   $0x8ce3bd0,0x4(%esp)
 86223ec:	08 
 86223ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86223f0:	89 04 24             	mov    %eax,(%esp)
 86223f3:	e8 c8 1d dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86223f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86223ff:	00 
 8622400:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622403:	89 04 24             	mov    %eax,(%esp)
 8622406:	e8 1b 1f dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 862240b:	83 f0 01             	xor    $0x1,%eax
 862240e:	84 c0                	test   %al,%al
 8622410:	74 07                	je     8622419 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xa5>
 8622412:	b8 00 00 00 00       	mov    $0x0,%eax
 8622417:	eb 1e                	jmp    8622437 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xc3>
 8622419:	8b 45 08             	mov    0x8(%ebp),%eax
 862241c:	89 04 24             	mov    %eax,(%esp)
 862241f:	e8 e6 26 00 00       	call   8624b0a <_ZN11sync_script11CSyncScript28truncate_artifact_info_tableEv>
 8622424:	83 f0 01             	xor    $0x1,%eax
 8622427:	84 c0                	test   %al,%al
 8622429:	74 07                	je     8622432 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xbe>
 862242b:	b8 00 00 00 00       	mov    $0x0,%eax
 8622430:	eb 05                	jmp    8622437 <_ZN11sync_script11CSyncScript28truncate_dnf_item_info_tableEv+0xc3>
 8622432:	b8 01 00 00 00       	mov    $0x1,%eax
 8622437:	c9                   	leave
 8622438:	c3                   	ret
 8622439:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_dnf_item_info_table @ 0x8622374

/* sync_script::CSyncScript::truncate_dnf_item_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_dnf_item_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table dnf_item_info");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      MySQL::set_query(this_00,"trUncate table avatar_select_ability");
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        cVar1 = truncate_artifact_info_table(this);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_exp_level_ref_table

```asm
// === 08622866 sync_script::CSyncScript::truncate_exp_level_ref_table  [0x08622866-0x86228db] ===
 8622866:	55                   	push   %ebp
 8622867:	89 e5                	mov    %esp,%ebp
 8622869:	83 ec 28             	sub    $0x28,%esp
 862286c:	8b 45 08             	mov    0x8(%ebp),%eax
 862286f:	0f b6 00             	movzbl (%eax),%eax
 8622872:	83 f0 01             	xor    $0x1,%eax
 8622875:	84 c0                	test   %al,%al
 8622877:	74 07                	je     8622880 <_ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv+0x1a>
 8622879:	b8 01 00 00 00       	mov    $0x1,%eax
 862287e:	eb 59                	jmp    86228d9 <_ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv+0x73>
 8622880:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8622885:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 862288c:	00 
 862288d:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8622894:	00 
 8622895:	89 04 24             	mov    %eax,(%esp)
 8622898:	e8 a1 29 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 862289d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86228a0:	c7 44 24 04 c0 3c ce 	movl   $0x8ce3cc0,0x4(%esp)
 86228a7:	08 
 86228a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86228ab:	89 04 24             	mov    %eax,(%esp)
 86228ae:	e8 0d 19 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86228b3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86228ba:	00 
 86228bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86228be:	89 04 24             	mov    %eax,(%esp)
 86228c1:	e8 60 1a dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 86228c6:	83 f0 01             	xor    $0x1,%eax
 86228c9:	84 c0                	test   %al,%al
 86228cb:	74 07                	je     86228d4 <_ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv+0x6e>
 86228cd:	b8 00 00 00 00       	mov    $0x0,%eax
 86228d2:	eb 05                	jmp    86228d9 <_ZN11sync_script11CSyncScript28truncate_exp_level_ref_tableEv+0x73>
 86228d4:	b8 01 00 00 00       	mov    $0x1,%eax
 86228d9:	c9                   	leave
 86228da:	c3                   	ret
 86228db:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_exp_level_ref_table @ 0x8622866

/* sync_script::CSyncScript::truncate_exp_level_ref_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_exp_level_ref_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table exp_level_ref");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_item_info_master_table

```asm
// === 08625696 sync_script::CSyncScript::truncate_item_info_master_table  [0x08625696-0x8625719] ===
 8625696:	55                   	push   %ebp
 8625697:	89 e5                	mov    %esp,%ebp
 8625699:	83 ec 28             	sub    $0x28,%esp
 862569c:	8b 45 08             	mov    0x8(%ebp),%eax
 862569f:	0f b6 00             	movzbl (%eax),%eax
 86256a2:	83 f0 01             	xor    $0x1,%eax
 86256a5:	84 c0                	test   %al,%al
 86256a7:	74 07                	je     86256b0 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x1a>
 86256a9:	b8 01 00 00 00       	mov    $0x1,%eax
 86256ae:	eb 67                	jmp    8625717 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x81>
 86256b0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86256b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86256bc:	00 
 86256bd:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 86256c4:	00 
 86256c5:	89 04 24             	mov    %eax,(%esp)
 86256c8:	e8 71 fb dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86256cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86256d0:	c7 44 24 04 60 46 ce 	movl   $0x8ce4660,0x4(%esp)
 86256d7:	08 
 86256d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86256db:	89 04 24             	mov    %eax,(%esp)
 86256de:	e8 dd ea dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86256e3:	83 f0 01             	xor    $0x1,%eax
 86256e6:	84 c0                	test   %al,%al
 86256e8:	74 07                	je     86256f1 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x5b>
 86256ea:	b8 00 00 00 00       	mov    $0x0,%eax
 86256ef:	eb 26                	jmp    8625717 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x81>
 86256f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86256f8:	00 
 86256f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86256fc:	89 04 24             	mov    %eax,(%esp)
 86256ff:	e8 22 ec dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8625704:	83 f0 01             	xor    $0x1,%eax
 8625707:	84 c0                	test   %al,%al
 8625709:	74 07                	je     8625712 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x7c>
 862570b:	b8 00 00 00 00       	mov    $0x0,%eax
 8625710:	eb 05                	jmp    8625717 <_ZN11sync_script11CSyncScript31truncate_item_info_master_tableEv+0x81>
 8625712:	b8 01 00 00 00       	mov    $0x1,%eax
 8625717:	c9                   	leave
 8625718:	c3                   	ret
 8625719:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_item_info_master_table @ 0x8625696

/* sync_script::CSyncScript::truncate_item_info_master_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_item_info_master_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_item_info_master");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_mapping_equip_info_table

```asm
// === 0862676c sync_script::CSyncScript::truncate_mapping_equip_info_table  [0x0862676c-0x86267ef] ===
 862676c:	55                   	push   %ebp
 862676d:	89 e5                	mov    %esp,%ebp
 862676f:	83 ec 28             	sub    $0x28,%esp
 8626772:	8b 45 08             	mov    0x8(%ebp),%eax
 8626775:	0f b6 00             	movzbl (%eax),%eax
 8626778:	83 f0 01             	xor    $0x1,%eax
 862677b:	84 c0                	test   %al,%al
 862677d:	74 07                	je     8626786 <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x1a>
 862677f:	b8 01 00 00 00       	mov    $0x1,%eax
 8626784:	eb 67                	jmp    86267ed <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x81>
 8626786:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862678b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8626792:	00 
 8626793:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862679a:	00 
 862679b:	89 04 24             	mov    %eax,(%esp)
 862679e:	e8 9b ea dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86267a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86267a6:	c7 44 24 04 b0 48 ce 	movl   $0x8ce48b0,0x4(%esp)
 86267ad:	08 
 86267ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86267b1:	89 04 24             	mov    %eax,(%esp)
 86267b4:	e8 07 da dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 86267b9:	83 f0 01             	xor    $0x1,%eax
 86267bc:	84 c0                	test   %al,%al
 86267be:	74 07                	je     86267c7 <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x5b>
 86267c0:	b8 00 00 00 00       	mov    $0x0,%eax
 86267c5:	eb 26                	jmp    86267ed <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x81>
 86267c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86267ce:	00 
 86267cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86267d2:	89 04 24             	mov    %eax,(%esp)
 86267d5:	e8 4c db dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 86267da:	83 f0 01             	xor    $0x1,%eax
 86267dd:	84 c0                	test   %al,%al
 86267df:	74 07                	je     86267e8 <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x7c>
 86267e1:	b8 00 00 00 00       	mov    $0x0,%eax
 86267e6:	eb 05                	jmp    86267ed <_ZN11sync_script11CSyncScript33truncate_mapping_equip_info_tableEv+0x81>
 86267e8:	b8 01 00 00 00       	mov    $0x1,%eax
 86267ed:	c9                   	leave
 86267ee:	c3                   	ret
 86267ef:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_mapping_equip_info_table @ 0x862676c

/* sync_script::CSyncScript::truncate_mapping_equip_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_mapping_equip_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table equip_mapping_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_monster_info_table

```asm
// === 086260dc sync_script::CSyncScript::truncate_monster_info_table  [0x086260dc-0x862615f] ===
 86260dc:	55                   	push   %ebp
 86260dd:	89 e5                	mov    %esp,%ebp
 86260df:	83 ec 28             	sub    $0x28,%esp
 86260e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86260e5:	0f b6 00             	movzbl (%eax),%eax
 86260e8:	83 f0 01             	xor    $0x1,%eax
 86260eb:	84 c0                	test   %al,%al
 86260ed:	74 07                	je     86260f6 <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x1a>
 86260ef:	b8 01 00 00 00       	mov    $0x1,%eax
 86260f4:	eb 67                	jmp    862615d <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x81>
 86260f6:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86260fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8626102:	00 
 8626103:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 862610a:	00 
 862610b:	89 04 24             	mov    %eax,(%esp)
 862610e:	e8 2b f1 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8626113:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8626116:	c7 44 24 04 8c 47 ce 	movl   $0x8ce478c,0x4(%esp)
 862611d:	08 
 862611e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8626121:	89 04 24             	mov    %eax,(%esp)
 8626124:	e8 97 e0 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8626129:	83 f0 01             	xor    $0x1,%eax
 862612c:	84 c0                	test   %al,%al
 862612e:	74 07                	je     8626137 <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x5b>
 8626130:	b8 00 00 00 00       	mov    $0x0,%eax
 8626135:	eb 26                	jmp    862615d <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x81>
 8626137:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862613e:	00 
 862613f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8626142:	89 04 24             	mov    %eax,(%esp)
 8626145:	e8 dc e1 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 862614a:	83 f0 01             	xor    $0x1,%eax
 862614d:	84 c0                	test   %al,%al
 862614f:	74 07                	je     8626158 <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x7c>
 8626151:	b8 00 00 00 00       	mov    $0x0,%eax
 8626156:	eb 05                	jmp    862615d <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv+0x81>
 8626158:	b8 01 00 00 00       	mov    $0x1,%eax
 862615d:	c9                   	leave
 862615e:	c3                   	ret
 862615f:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_monster_info_table @ 0x86260dc

/* sync_script::CSyncScript::truncate_monster_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_monster_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_monster_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_old_equip_info_table

```asm
// === 08624c96 sync_script::CSyncScript::truncate_old_equip_info_table  [0x08624c96-0x8624d19] ===
 8624c96:	55                   	push   %ebp
 8624c97:	89 e5                	mov    %esp,%ebp
 8624c99:	83 ec 28             	sub    $0x28,%esp
 8624c9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8624c9f:	0f b6 00             	movzbl (%eax),%eax
 8624ca2:	83 f0 01             	xor    $0x1,%eax
 8624ca5:	84 c0                	test   %al,%al
 8624ca7:	74 07                	je     8624cb0 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x1a>
 8624ca9:	b8 01 00 00 00       	mov    $0x1,%eax
 8624cae:	eb 67                	jmp    8624d17 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x81>
 8624cb0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8624cb5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8624cbc:	00 
 8624cbd:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8624cc4:	00 
 8624cc5:	89 04 24             	mov    %eax,(%esp)
 8624cc8:	e8 71 05 dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8624ccd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8624cd0:	c7 44 24 04 98 43 ce 	movl   $0x8ce4398,0x4(%esp)
 8624cd7:	08 
 8624cd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624cdb:	89 04 24             	mov    %eax,(%esp)
 8624cde:	e8 dd f4 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8624ce3:	83 f0 01             	xor    $0x1,%eax
 8624ce6:	84 c0                	test   %al,%al
 8624ce8:	74 07                	je     8624cf1 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x5b>
 8624cea:	b8 00 00 00 00       	mov    $0x0,%eax
 8624cef:	eb 26                	jmp    8624d17 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x81>
 8624cf1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8624cf8:	00 
 8624cf9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8624cfc:	89 04 24             	mov    %eax,(%esp)
 8624cff:	e8 22 f6 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8624d04:	83 f0 01             	xor    $0x1,%eax
 8624d07:	84 c0                	test   %al,%al
 8624d09:	74 07                	je     8624d12 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x7c>
 8624d0b:	b8 00 00 00 00       	mov    $0x0,%eax
 8624d10:	eb 05                	jmp    8624d17 <_ZN11sync_script11CSyncScript29truncate_old_equip_info_tableEv+0x81>
 8624d12:	b8 01 00 00 00       	mov    $0x1,%eax
 8624d17:	c9                   	leave
 8624d18:	c3                   	ret
 8624d19:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_old_equip_info_table @ 0x8624c96

/* sync_script::CSyncScript::truncate_old_equip_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_old_equip_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_old_equip_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_quest_category

```asm
// === 086225b6 sync_script::CSyncScript::truncate_quest_category  [0x086225b6-0x862262b] ===
 86225b6:	55                   	push   %ebp
 86225b7:	89 e5                	mov    %esp,%ebp
 86225b9:	83 ec 28             	sub    $0x28,%esp
 86225bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86225bf:	0f b6 00             	movzbl (%eax),%eax
 86225c2:	83 f0 01             	xor    $0x1,%eax
 86225c5:	84 c0                	test   %al,%al
 86225c7:	74 07                	je     86225d0 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv+0x1a>
 86225c9:	b8 01 00 00 00       	mov    $0x1,%eax
 86225ce:	eb 59                	jmp    8622629 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv+0x73>
 86225d0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 86225d5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86225dc:	00 
 86225dd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86225e4:	00 
 86225e5:	89 04 24             	mov    %eax,(%esp)
 86225e8:	e8 51 2c dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 86225ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86225f0:	c7 44 24 04 3b 3c ce 	movl   $0x8ce3c3b,0x4(%esp)
 86225f7:	08 
 86225f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86225fb:	89 04 24             	mov    %eax,(%esp)
 86225fe:	e8 bd 1b dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8622603:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862260a:	00 
 862260b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 862260e:	89 04 24             	mov    %eax,(%esp)
 8622611:	e8 10 1d dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622616:	83 f0 01             	xor    $0x1,%eax
 8622619:	84 c0                	test   %al,%al
 862261b:	74 07                	je     8622624 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv+0x6e>
 862261d:	b8 00 00 00 00       	mov    $0x0,%eax
 8622622:	eb 05                	jmp    8622629 <_ZN11sync_script11CSyncScript23truncate_quest_categoryEv+0x73>
 8622624:	b8 01 00 00 00       	mov    $0x1,%eax
 8622629:	c9                   	leave
 862262a:	c3                   	ret
 862262b:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_quest_category @ 0x86225b6

/* sync_script::CSyncScript::truncate_quest_category() */

undefined4 __thiscall sync_script::CSyncScript::truncate_quest_category(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"trUncate table quest_category");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_random_option_ref

```asm
// === 08625e1e sync_script::CSyncScript::truncate_random_option_ref  [0x08625e1e-0x8625ea1] ===
 8625e1e:	55                   	push   %ebp
 8625e1f:	89 e5                	mov    %esp,%ebp
 8625e21:	83 ec 28             	sub    $0x28,%esp
 8625e24:	8b 45 08             	mov    0x8(%ebp),%eax
 8625e27:	0f b6 00             	movzbl (%eax),%eax
 8625e2a:	83 f0 01             	xor    $0x1,%eax
 8625e2d:	84 c0                	test   %al,%al
 8625e2f:	74 07                	je     8625e38 <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x1a>
 8625e31:	b8 01 00 00 00       	mov    $0x1,%eax
 8625e36:	eb 67                	jmp    8625e9f <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x81>
 8625e38:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8625e3d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8625e44:	00 
 8625e45:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8625e4c:	00 
 8625e4d:	89 04 24             	mov    %eax,(%esp)
 8625e50:	e8 e9 f3 dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8625e55:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8625e58:	c7 44 24 04 f8 46 ce 	movl   $0x8ce46f8,0x4(%esp)
 8625e5f:	08 
 8625e60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8625e63:	89 04 24             	mov    %eax,(%esp)
 8625e66:	e8 55 e3 dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8625e6b:	83 f0 01             	xor    $0x1,%eax
 8625e6e:	84 c0                	test   %al,%al
 8625e70:	74 07                	je     8625e79 <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x5b>
 8625e72:	b8 00 00 00 00       	mov    $0x0,%eax
 8625e77:	eb 26                	jmp    8625e9f <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x81>
 8625e79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8625e80:	00 
 8625e81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8625e84:	89 04 24             	mov    %eax,(%esp)
 8625e87:	e8 9a e4 dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8625e8c:	83 f0 01             	xor    $0x1,%eax
 8625e8f:	84 c0                	test   %al,%al
 8625e91:	74 07                	je     8625e9a <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x7c>
 8625e93:	b8 00 00 00 00       	mov    $0x0,%eax
 8625e98:	eb 05                	jmp    8625e9f <_ZN11sync_script11CSyncScript26truncate_random_option_refEv+0x81>
 8625e9a:	b8 01 00 00 00       	mov    $0x1,%eax
 8625e9f:	c9                   	leave
 8625ea0:	c3                   	ret
 8625ea1:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_random_option_ref @ 0x8625e1e

/* sync_script::CSyncScript::truncate_random_option_ref() */

undefined4 __thiscall sync_script::CSyncScript::truncate_random_option_ref(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table random_option_ref");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_skill_index

```asm
// === 086227f0 sync_script::CSyncScript::truncate_skill_index  [0x086227f0-0x8622865] ===
 86227f0:	55                   	push   %ebp
 86227f1:	89 e5                	mov    %esp,%ebp
 86227f3:	83 ec 28             	sub    $0x28,%esp
 86227f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86227f9:	0f b6 00             	movzbl (%eax),%eax
 86227fc:	83 f0 01             	xor    $0x1,%eax
 86227ff:	84 c0                	test   %al,%al
 8622801:	74 07                	je     862280a <_ZN11sync_script11CSyncScript20truncate_skill_indexEv+0x1a>
 8622803:	b8 01 00 00 00       	mov    $0x1,%eax
 8622808:	eb 59                	jmp    8622863 <_ZN11sync_script11CSyncScript20truncate_skill_indexEv+0x73>
 862280a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 862280f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8622816:	00 
 8622817:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 862281e:	00 
 862281f:	89 04 24             	mov    %eax,(%esp)
 8622822:	e8 17 2a dd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8622827:	89 45 f4             	mov    %eax,-0xc(%ebp)
 862282a:	c7 44 24 04 a5 3c ce 	movl   $0x8ce3ca5,0x4(%esp)
 8622831:	08 
 8622832:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622835:	89 04 24             	mov    %eax,(%esp)
 8622838:	e8 83 19 dd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 862283d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8622844:	00 
 8622845:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8622848:	89 04 24             	mov    %eax,(%esp)
 862284b:	e8 d6 1a dd ff       	call   83f4326 <_ZN5MySQL4execEb>
 8622850:	83 f0 01             	xor    $0x1,%eax
 8622853:	84 c0                	test   %al,%al
 8622855:	74 07                	je     862285e <_ZN11sync_script11CSyncScript20truncate_skill_indexEv+0x6e>
 8622857:	b8 00 00 00 00       	mov    $0x0,%eax
 862285c:	eb 05                	jmp    8622863 <_ZN11sync_script11CSyncScript20truncate_skill_indexEv+0x73>
 862285e:	b8 01 00 00 00       	mov    $0x1,%eax
 8622863:	c9                   	leave
 8622864:	c3                   	ret
 8622865:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_skill_index @ 0x86227f0

/* sync_script::CSyncScript::truncate_skill_index() */

undefined4 __thiscall sync_script::CSyncScript::truncate_skill_index(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    MySQL::set_query(this_00,"trUncate table skill_index");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## truncate_town_info_table

```asm
// === 0862653a sync_script::CSyncScript::truncate_town_info_table  [0x0862653a-0x86265bd] ===
 862653a:	55                   	push   %ebp
 862653b:	89 e5                	mov    %esp,%ebp
 862653d:	83 ec 28             	sub    $0x28,%esp
 8626540:	8b 45 08             	mov    0x8(%ebp),%eax
 8626543:	0f b6 00             	movzbl (%eax),%eax
 8626546:	83 f0 01             	xor    $0x1,%eax
 8626549:	84 c0                	test   %al,%al
 862654b:	74 07                	je     8626554 <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x1a>
 862654d:	b8 01 00 00 00       	mov    $0x1,%eax
 8626552:	eb 67                	jmp    86265bb <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x81>
 8626554:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8626559:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8626560:	00 
 8626561:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8626568:	00 
 8626569:	89 04 24             	mov    %eax,(%esp)
 862656c:	e8 cd ec dc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8626571:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8626574:	c7 44 24 04 53 48 ce 	movl   $0x8ce4853,0x4(%esp)
 862657b:	08 
 862657c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 862657f:	89 04 24             	mov    %eax,(%esp)
 8626582:	e8 39 dc dc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8626587:	83 f0 01             	xor    $0x1,%eax
 862658a:	84 c0                	test   %al,%al
 862658c:	74 07                	je     8626595 <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x5b>
 862658e:	b8 00 00 00 00       	mov    $0x0,%eax
 8626593:	eb 26                	jmp    86265bb <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x81>
 8626595:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 862659c:	00 
 862659d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86265a0:	89 04 24             	mov    %eax,(%esp)
 86265a3:	e8 7e dd dc ff       	call   83f4326 <_ZN5MySQL4execEb>
 86265a8:	83 f0 01             	xor    $0x1,%eax
 86265ab:	84 c0                	test   %al,%al
 86265ad:	74 07                	je     86265b6 <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x7c>
 86265af:	b8 00 00 00 00       	mov    $0x0,%eax
 86265b4:	eb 05                	jmp    86265bb <_ZN11sync_script11CSyncScript24truncate_town_info_tableEv+0x81>
 86265b6:	b8 01 00 00 00       	mov    $0x1,%eax
 86265bb:	c9                   	leave
 86265bc:	c3                   	ret
 86265bd:	90                   	nop

```

```c
// sync_script::CSyncScript::truncate_town_info_table @ 0x862653a

/* sync_script::CSyncScript::truncate_town_info_table() */

undefined4 __thiscall sync_script::CSyncScript::truncate_town_info_table(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table dnf_town_info");
    if (cVar1 == '\x01') {
      cVar1 = MySQL::exec(this_00,true);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## ~CSyncScript

```asm
// === 0861cd7a sync_script::CSyncScript::~CSyncScript  [0x0861cd7a-0x861cf09] ===
 861cd7a:	55                   	push   %ebp
 861cd7b:	89 e5                	mov    %esp,%ebp
 861cd7d:	56                   	push   %esi
 861cd7e:	53                   	push   %ebx
 861cd7f:	83 ec 10             	sub    $0x10,%esp
 861cd82:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd85:	83 c0 04             	add    $0x4,%eax
 861cd88:	89 04 24             	mov    %eax,(%esp)
 861cd8b:	e8 66 7f ac ff       	call   80e4cf6 <_ZNSt6vectorIhSaIhEE5clearEv>
 861cd90:	8b 45 08             	mov    0x8(%ebp),%eax
 861cd93:	83 c0 10             	add    $0x10,%eax
 861cd96:	89 04 24             	mov    %eax,(%esp)
 861cd99:	e8 58 7f ac ff       	call   80e4cf6 <_ZNSt6vectorIhSaIhEE5clearEv>
 861cd9e:	8b 45 08             	mov    0x8(%ebp),%eax
 861cda1:	83 c0 1c             	add    $0x1c,%eax
 861cda4:	89 04 24             	mov    %eax,(%esp)
 861cda7:	e8 fc b3 00 00       	call   86281a8 <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEE5clearEv>
 861cdac:	8b 45 08             	mov    0x8(%ebp),%eax
 861cdaf:	83 c0 34             	add    $0x34,%eax
 861cdb2:	89 04 24             	mov    %eax,(%esp)
 861cdb5:	e8 02 b4 00 00       	call   86281bc <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE5clearEv>
 861cdba:	8b 45 08             	mov    0x8(%ebp),%eax
 861cdbd:	83 c0 4c             	add    $0x4c,%eax
 861cdc0:	89 04 24             	mov    %eax,(%esp)
 861cdc3:	e8 08 b4 00 00       	call   86281d0 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEE5clearEv>
 861cdc8:	8b 45 08             	mov    0x8(%ebp),%eax
 861cdcb:	83 c0 64             	add    $0x64,%eax
 861cdce:	89 04 24             	mov    %eax,(%esp)
 861cdd1:	e8 0e b4 00 00       	call   86281e4 <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEE5clearEv>
 861cdd6:	8b 45 08             	mov    0x8(%ebp),%eax
 861cdd9:	83 c0 7c             	add    $0x7c,%eax
 861cddc:	89 04 24             	mov    %eax,(%esp)
 861cddf:	e8 00 b4 00 00       	call   86281e4 <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEE5clearEv>
 861cde4:	eb 18                	jmp    861cdfe <_ZN11sync_script11CSyncScriptD1Ev+0x84>
 861cde6:	89 d3                	mov    %edx,%ebx
 861cde8:	89 c6                	mov    %eax,%esi
 861cdea:	8b 45 08             	mov    0x8(%ebp),%eax
 861cded:	83 c0 7c             	add    $0x7c,%eax
 861cdf0:	89 04 24             	mov    %eax,(%esp)
 861cdf3:	e8 b2 ad 00 00       	call   8627baa <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEED1Ev>
 861cdf8:	89 f0                	mov    %esi,%eax
 861cdfa:	89 da                	mov    %ebx,%edx
 861cdfc:	eb 10                	jmp    861ce0e <_ZN11sync_script11CSyncScriptD1Ev+0x94>
 861cdfe:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce01:	83 c0 7c             	add    $0x7c,%eax
 861ce04:	89 04 24             	mov    %eax,(%esp)
 861ce07:	e8 9e ad 00 00       	call   8627baa <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEED1Ev>
 861ce0c:	eb 18                	jmp    861ce26 <_ZN11sync_script11CSyncScriptD1Ev+0xac>
 861ce0e:	89 d3                	mov    %edx,%ebx
 861ce10:	89 c6                	mov    %eax,%esi
 861ce12:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce15:	83 c0 64             	add    $0x64,%eax
 861ce18:	89 04 24             	mov    %eax,(%esp)
 861ce1b:	e8 8a ad 00 00       	call   8627baa <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEED1Ev>
 861ce20:	89 f0                	mov    %esi,%eax
 861ce22:	89 da                	mov    %ebx,%edx
 861ce24:	eb 10                	jmp    861ce36 <_ZN11sync_script11CSyncScriptD1Ev+0xbc>
 861ce26:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce29:	83 c0 64             	add    $0x64,%eax
 861ce2c:	89 04 24             	mov    %eax,(%esp)
 861ce2f:	e8 76 ad 00 00       	call   8627baa <_ZNSt3mapIhSsSt4lessIhESaISt4pairIKhSsEEED1Ev>
 861ce34:	eb 18                	jmp    861ce4e <_ZN11sync_script11CSyncScriptD1Ev+0xd4>
 861ce36:	89 d3                	mov    %edx,%ebx
 861ce38:	89 c6                	mov    %eax,%esi
 861ce3a:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce3d:	83 c0 4c             	add    $0x4c,%eax
 861ce40:	89 04 24             	mov    %eax,(%esp)
 861ce43:	e8 4e ad 00 00       	call   8627b96 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861ce48:	89 f0                	mov    %esi,%eax
 861ce4a:	89 da                	mov    %ebx,%edx
 861ce4c:	eb 10                	jmp    861ce5e <_ZN11sync_script11CSyncScriptD1Ev+0xe4>
 861ce4e:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce51:	83 c0 4c             	add    $0x4c,%eax
 861ce54:	89 04 24             	mov    %eax,(%esp)
 861ce57:	e8 3a ad 00 00       	call   8627b96 <_ZNSt3mapIN11sync_script11CSyncScript10SARMORTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861ce5c:	eb 18                	jmp    861ce76 <_ZN11sync_script11CSyncScriptD1Ev+0xfc>
 861ce5e:	89 d3                	mov    %edx,%ebx
 861ce60:	89 c6                	mov    %eax,%esi
 861ce62:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce65:	83 c0 34             	add    $0x34,%eax
 861ce68:	89 04 24             	mov    %eax,(%esp)
 861ce6b:	e8 12 ad 00 00       	call   8627b82 <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861ce70:	89 f0                	mov    %esi,%eax
 861ce72:	89 da                	mov    %ebx,%edx
 861ce74:	eb 10                	jmp    861ce86 <_ZN11sync_script11CSyncScriptD1Ev+0x10c>
 861ce76:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce79:	83 c0 34             	add    $0x34,%eax
 861ce7c:	89 04 24             	mov    %eax,(%esp)
 861ce7f:	e8 fe ac 00 00       	call   8627b82 <_ZNSt3mapIN11sync_script11CSyncScript11SWEAPONTYPEENS1_9SITEMTYPEESt4lessIS2_ESaISt4pairIKS2_S3_EEED1Ev>
 861ce84:	eb 18                	jmp    861ce9e <_ZN11sync_script11CSyncScriptD1Ev+0x124>
 861ce86:	89 d3                	mov    %edx,%ebx
 861ce88:	89 c6                	mov    %eax,%esi
 861ce8a:	8b 45 08             	mov    0x8(%ebp),%eax
 861ce8d:	83 c0 1c             	add    $0x1c,%eax
 861ce90:	89 04 24             	mov    %eax,(%esp)
 861ce93:	e8 d6 ac 00 00       	call   8627b6e <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 861ce98:	89 f0                	mov    %esi,%eax
 861ce9a:	89 da                	mov    %ebx,%edx
 861ce9c:	eb 10                	jmp    861ceae <_ZN11sync_script11CSyncScriptD1Ev+0x134>
 861ce9e:	8b 45 08             	mov    0x8(%ebp),%eax
 861cea1:	83 c0 1c             	add    $0x1c,%eax
 861cea4:	89 04 24             	mov    %eax,(%esp)
 861cea7:	e8 c2 ac 00 00       	call   8627b6e <_ZNSt3mapISsN11sync_script11CSyncScript9SITEMTYPEESt4lessISsESaISt4pairIKSsS2_EEED1Ev>
 861ceac:	eb 18                	jmp    861cec6 <_ZN11sync_script11CSyncScriptD1Ev+0x14c>
 861ceae:	89 d3                	mov    %edx,%ebx
 861ceb0:	89 c6                	mov    %eax,%esi
 861ceb2:	8b 45 08             	mov    0x8(%ebp),%eax
 861ceb5:	83 c0 10             	add    $0x10,%eax
 861ceb8:	89 04 24             	mov    %eax,(%esp)
 861cebb:	e8 66 7e ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861cec0:	89 f0                	mov    %esi,%eax
 861cec2:	89 da                	mov    %ebx,%edx
 861cec4:	eb 10                	jmp    861ced6 <_ZN11sync_script11CSyncScriptD1Ev+0x15c>
 861cec6:	8b 45 08             	mov    0x8(%ebp),%eax
 861cec9:	83 c0 10             	add    $0x10,%eax
 861cecc:	89 04 24             	mov    %eax,(%esp)
 861cecf:	e8 52 7e ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861ced4:	eb 1e                	jmp    861cef4 <_ZN11sync_script11CSyncScriptD1Ev+0x17a>
 861ced6:	89 d3                	mov    %edx,%ebx
 861ced8:	89 c6                	mov    %eax,%esi
 861ceda:	8b 45 08             	mov    0x8(%ebp),%eax
 861cedd:	83 c0 04             	add    $0x4,%eax
 861cee0:	89 04 24             	mov    %eax,(%esp)
 861cee3:	e8 3e 7e ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861cee8:	89 f0                	mov    %esi,%eax
 861ceea:	89 da                	mov    %ebx,%edx
 861ceec:	89 04 24             	mov    %eax,(%esp)
 861ceef:	e8 5c 68 4c 00       	call   8ae3750 <_Unwind_Resume>
 861cef4:	8b 45 08             	mov    0x8(%ebp),%eax
 861cef7:	83 c0 04             	add    $0x4,%eax
 861cefa:	89 04 24             	mov    %eax,(%esp)
 861cefd:	e8 24 7e ac ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 861cf02:	83 c4 10             	add    $0x10,%esp
 861cf05:	5b                   	pop    %ebx
 861cf06:	5e                   	pop    %esi
 861cf07:	5d                   	pop    %ebp
 861cf08:	c3                   	ret
 861cf09:	90                   	nop

```

```c
// sync_script::CSyncScript::~CSyncScript @ 0x861cd7a

/* sync_script::CSyncScript::~CSyncScript() */

void __thiscall sync_script::CSyncScript::~CSyncScript(CSyncScript *this)

{
                    /* try { // try from 0861cd8b to 0861cde3 has its CatchHandler @ 0861cde6 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x1c));
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x34));
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x4c));
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::clear((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
           *)(this + 100));
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::clear((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
           *)(this + 0x7c));
                    /* try { // try from 0861ce07 to 0861ce0b has its CatchHandler @ 0861ce0e */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::~map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          *)(this + 0x7c));
                    /* try { // try from 0861ce2f to 0861ce33 has its CatchHandler @ 0861ce36 */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::~map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          *)(this + 100));
                    /* try { // try from 0861ce57 to 0861ce5b has its CatchHandler @ 0861ce5e */
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x4c));
                    /* try { // try from 0861ce7f to 0861ce83 has its CatchHandler @ 0861ce86 */
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x34));
                    /* try { // try from 0861cea7 to 0861ceab has its CatchHandler @ 0861ceae */
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x1c));
                    /* try { // try from 0861cecf to 0861ced3 has its CatchHandler @ 0861ced6 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  return;
}

```


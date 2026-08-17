# WongWork__CItemUpgrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 27

---

## CItemUpgrade

```asm
// === 085461c8 WongWork::CItemUpgrade::CItemUpgrade  [0x085461c8-0x85462c5] ===
 85461c8:	55                   	push   %ebp
 85461c9:	89 e5                	mov    %esp,%ebp
 85461cb:	57                   	push   %edi
 85461cc:	56                   	push   %esi
 85461cd:	53                   	push   %ebx
 85461ce:	83 ec 2c             	sub    $0x2c,%esp
 85461d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85461d4:	83 c0 04             	add    $0x4,%eax
 85461d7:	89 04 24             	mov    %eax,(%esp)
 85461da:	e8 b7 52 00 00       	call   854b496 <_ZN8WongWork17CItemUpgradeTableC1Ev>
 85461df:	8b 45 08             	mov    0x8(%ebp),%eax
 85461e2:	89 04 24             	mov    %eax,(%esp)
 85461e5:	e8 4a 66 bb ff       	call   80fc834 <_ZN8WongWork12IItemUpgradeC1Ev>
 85461ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85461ed:	c7 00 18 d3 c9 08    	movl   $0x8c9d318,(%eax)
 85461f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85461f6:	c7 80 ec 04 00 00 a0 	movl   $0x186a0,0x4ec(%eax)
 85461fd:	86 01 00 
 8546200:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8546207:	e8 44 75 b3 ff       	call   807d750 <time@plt>
 854620c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 854620f:	8d 75 dc             	lea    -0x24(%ebp),%esi
 8546212:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 8546219:	e8 32 e2 1d 00       	call   8724450 <_Znwj>
 854621e:	89 c3                	mov    %eax,%ebx
 8546220:	89 d8                	mov    %ebx,%eax
 8546222:	89 74 24 04          	mov    %esi,0x4(%esp)
 8546226:	89 04 24             	mov    %eax,(%esp)
 8546229:	e8 fc 57 b8 ff       	call   80cba2a <_ZN7CMTRandC1ERKm>
 854622e:	eb 12                	jmp    8546242 <_ZN8WongWork12CItemUpgradeC1Ev+0x7a>
 8546230:	89 d6                	mov    %edx,%esi
 8546232:	89 c7                	mov    %eax,%edi
 8546234:	89 1c 24             	mov    %ebx,(%esp)
 8546237:	e8 b4 e2 1d 00       	call   87244f0 <_ZdlPv>
 854623c:	89 f8                	mov    %edi,%eax
 854623e:	89 f2                	mov    %esi,%edx
 8546240:	eb 49                	jmp    854628b <_ZN8WongWork12CItemUpgradeC1Ev+0xc3>
 8546242:	89 da                	mov    %ebx,%edx
 8546244:	8b 45 08             	mov    0x8(%ebp),%eax
 8546247:	89 90 e8 04 00 00    	mov    %edx,0x4e8(%eax)
 854624d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8546254:	eb 28                	jmp    854627e <_ZN8WongWork12CItemUpgradeC1Ev+0xb6>
 8546256:	8b 45 08             	mov    0x8(%ebp),%eax
 8546259:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 854625f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8546262:	8b 45 08             	mov    0x8(%ebp),%eax
 8546265:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 854626b:	8d 55 e0             	lea    -0x20(%ebp),%edx
 854626e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546272:	89 04 24             	mov    %eax,(%esp)
 8546275:	e8 44 58 b8 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 854627a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 854627e:	83 7d e4 63          	cmpl   $0x63,-0x1c(%ebp)
 8546282:	0f 9e c0             	setle  %al
 8546285:	84 c0                	test   %al,%al
 8546287:	75 cd                	jne    8546256 <_ZN8WongWork12CItemUpgradeC1Ev+0x8e>
 8546289:	eb 33                	jmp    85462be <_ZN8WongWork12CItemUpgradeC1Ev+0xf6>
 854628b:	89 d3                	mov    %edx,%ebx
 854628d:	89 c6                	mov    %eax,%esi
 854628f:	8b 45 08             	mov    0x8(%ebp),%eax
 8546292:	89 04 24             	mov    %eax,(%esp)
 8546295:	e8 a8 65 bb ff       	call   80fc842 <_ZN8WongWork12IItemUpgradeD1Ev>
 854629a:	89 f0                	mov    %esi,%eax
 854629c:	89 da                	mov    %ebx,%edx
 854629e:	eb 00                	jmp    85462a0 <_ZN8WongWork12CItemUpgradeC1Ev+0xd8>
 85462a0:	89 d3                	mov    %edx,%ebx
 85462a2:	89 c6                	mov    %eax,%esi
 85462a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85462a7:	83 c0 04             	add    $0x4,%eax
 85462aa:	89 04 24             	mov    %eax,(%esp)
 85462ad:	e8 f8 51 00 00       	call   854b4aa <_ZN8WongWork17CItemUpgradeTableD1Ev>
 85462b2:	89 f0                	mov    %esi,%eax
 85462b4:	89 da                	mov    %ebx,%edx
 85462b6:	89 04 24             	mov    %eax,(%esp)
 85462b9:	e8 92 d4 59 00       	call   8ae3750 <_Unwind_Resume>
 85462be:	83 c4 2c             	add    $0x2c,%esp
 85462c1:	5b                   	pop    %ebx
 85462c2:	5e                   	pop    %esi
 85462c3:	5f                   	pop    %edi
 85462c4:	5d                   	pop    %ebp
 85462c5:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::CItemUpgrade @ 0x85461c8

/* WongWork::CItemUpgrade::CItemUpgrade() */

void __thiscall WongWork::CItemUpgrade::CItemUpgrade(CItemUpgrade *this)

{
  CMTRand *this_00;
  ulong local_28;
  ulong local_24;
  int local_20;
  
  CItemUpgradeTable::CItemUpgradeTable((CItemUpgradeTable *)(this + 4));
                    /* try { // try from 085461e5 to 085461e9 has its CatchHandler @ 085462a0 */
  IItemUpgrade::IItemUpgrade((IItemUpgrade *)this);
  *(undefined ***)this = &PTR_ProcUpgrade_08c9d318;
  *(undefined4 *)(this + 0x4ec) = 100000;
  local_28 = time((time_t *)0x0);
                    /* try { // try from 08546219 to 0854621d has its CatchHandler @ 0854628b */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 08546229 to 0854622d has its CatchHandler @ 08546230 */
  CMTRand::CMTRand(this_00,&local_28);
  *(CMTRand **)(this + 0x4e8) = this_00;
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    local_24 = *(ulong *)(this + 0x4ec);
    CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_24);
  }
  return;
}

```

---

## Load3rdChronicleUpgradeScript

```asm
// === 085491b8 WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript  [0x085491b8-0x85491d5] ===
 85491b8:	55                   	push   %ebp
 85491b9:	89 e5                	mov    %esp,%ebp
 85491bb:	83 ec 18             	sub    $0x18,%esp
 85491be:	8b 45 08             	mov    0x8(%ebp),%eax
 85491c1:	8d 50 04             	lea    0x4(%eax),%edx
 85491c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85491c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85491cb:	89 14 24             	mov    %edx,(%esp)
 85491ce:	e8 b7 21 00 00       	call   854b38a <_ZN8WongWork17CItemUpgradeTable17loadUpgradeScriptEPKc>
 85491d3:	c9                   	leave
 85491d4:	c3                   	ret
 85491d5:	90                   	nop

```

```c
// WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript @ 0x85491b8

/* WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(char const*) */

void __thiscall
WongWork::CItemUpgrade::Load3rdChronicleUpgradeScript(CItemUpgrade *this,char *param_1)

{
  CItemUpgradeTable::loadUpgradeScript((CItemUpgradeTable *)(this + 4),param_1);
  return;
}

```

---

## LoadUpgradeScript

```asm
// === 0854919a WongWork::CItemUpgrade::LoadUpgradeScript  [0x0854919a-0x85491b7] ===
 854919a:	55                   	push   %ebp
 854919b:	89 e5                	mov    %esp,%ebp
 854919d:	83 ec 18             	sub    $0x18,%esp
 85491a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85491a3:	8d 50 04             	lea    0x4(%eax),%edx
 85491a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85491a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85491ad:	89 14 24             	mov    %edx,(%esp)
 85491b0:	e8 d5 21 00 00       	call   854b38a <_ZN8WongWork17CItemUpgradeTable17loadUpgradeScriptEPKc>
 85491b5:	c9                   	leave
 85491b6:	c3                   	ret
 85491b7:	90                   	nop

```

```c
// WongWork::CItemUpgrade::LoadUpgradeScript @ 0x854919a

/* WongWork::CItemUpgrade::LoadUpgradeScript(char const*) */

void __thiscall WongWork::CItemUpgrade::LoadUpgradeScript(CItemUpgrade *this,char *param_1)

{
  CItemUpgradeTable::loadUpgradeScript((CItemUpgradeTable *)(this + 4),param_1);
  return;
}

```

---

## ProcAmplifyRandomUpgrade

```asm
// === 0854ac8a WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade  [0x0854ac8a-0x854af37] ===
 854ac8a:	55                   	push   %ebp
 854ac8b:	89 e5                	mov    %esp,%ebp
 854ac8d:	57                   	push   %edi
 854ac8e:	56                   	push   %esi
 854ac8f:	53                   	push   %ebx
 854ac90:	83 ec 5c             	sub    $0x5c,%esp
 854ac93:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 854ac9a:	ff 
 854ac9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ac9e:	89 04 24             	mov    %eax,(%esp)
 854aca1:	e8 fa 32 10 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 854aca6:	89 c6                	mov    %eax,%esi
 854aca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 854acab:	89 04 24             	mov    %eax,(%esp)
 854acae:	e8 bb f6 b8 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 854acb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854acba:	00 
 854acbb:	89 04 24             	mov    %eax,(%esp)
 854acbe:	e8 88 e3 bb ff       	call   810904b <_Z14NumberToStringji>
 854acc3:	89 c3                	mov    %eax,%ebx
 854acc5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854accc:	00 
 854accd:	c7 44 24 08 2c 08 00 	movl   $0x82c,0x8(%esp)
 854acd4:	00 
 854acd5:	c7 44 24 04 a0 d1 c9 	movl   $0x8c9d1a0,0x4(%esp)
 854acdc:	08 
 854acdd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 854ace0:	89 04 24             	mov    %eax,(%esp)
 854ace3:	e8 30 4a 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 854ace8:	8b 45 18             	mov    0x18(%ebp),%eax
 854aceb:	89 44 24 10          	mov    %eax,0x10(%esp)
 854acef:	89 74 24 0c          	mov    %esi,0xc(%esp)
 854acf3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854acf7:	c7 44 24 04 1c c5 c9 	movl   $0x8c9c51c,0x4(%esp)
 854acfe:	08 
 854acff:	8d 45 cc             	lea    -0x34(%ebp),%eax
 854ad02:	89 04 24             	mov    %eax,(%esp)
 854ad05:	e8 7e 4a 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 854ad0a:	8b 45 10             	mov    0x10(%ebp),%eax
 854ad0d:	8b 40 02             	mov    0x2(%eax),%eax
 854ad10:	89 c3                	mov    %eax,%ebx
 854ad12:	e8 84 14 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854ad17:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854ad1b:	89 04 24             	mov    %eax,(%esp)
 854ad1e:	e8 0f 4d e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854ad23:	89 45 dc             	mov    %eax,-0x24(%ebp)
 854ad26:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 854ad2a:	75 0a                	jne    854ad36 <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0xac>
 854ad2c:	b8 04 00 00 00       	mov    $0x4,%eax
 854ad31:	e9 f9 01 00 00       	jmp    854af2f <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x2a5>
 854ad36:	8b 45 10             	mov    0x10(%ebp),%eax
 854ad39:	83 c0 11             	add    $0x11,%eax
 854ad3c:	89 04 24             	mov    %eax,(%esp)
 854ad3f:	e8 88 5a c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 854ad44:	83 f0 01             	xor    $0x1,%eax
 854ad47:	84 c0                	test   %al,%al
 854ad49:	74 0a                	je     854ad55 <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0xcb>
 854ad4b:	b8 04 00 00 00       	mov    $0x4,%eax
 854ad50:	e9 da 01 00 00       	jmp    854af2f <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x2a5>
 854ad55:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 854ad5a:	89 04 24             	mov    %eax,(%esp)
 854ad5d:	e8 fe 07 00 00       	call   854b560 <_ZNK14CItemAmplifier19getUpgradeInfoTableEv>
 854ad62:	89 45 e0             	mov    %eax,-0x20(%ebp)
 854ad65:	8b 45 10             	mov    0x10(%ebp),%eax
 854ad68:	89 04 24             	mov    %eax,(%esp)
 854ad6b:	e8 fc a2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854ad70:	0f b6 c0             	movzbl %al,%eax
 854ad73:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854ad76:	8b 45 18             	mov    0x18(%ebp),%eax
 854ad79:	0f b6 c0             	movzbl %al,%eax
 854ad7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ad80:	8b 45 10             	mov    0x10(%ebp),%eax
 854ad83:	89 04 24             	mov    %eax,(%esp)
 854ad86:	e8 71 62 ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 854ad8b:	e8 5f 28 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 854ad90:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854ad97:	00 
 854ad98:	8b 55 0c             	mov    0xc(%ebp),%edx
 854ad9b:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ad9f:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 854ada6:	00 
 854ada7:	89 04 24             	mov    %eax,(%esp)
 854adaa:	e8 d3 28 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 854adaf:	8b 45 10             	mov    0x10(%ebp),%eax
 854adb2:	89 04 24             	mov    %eax,(%esp)
 854adb5:	e8 b2 a2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854adba:	0f b6 d0             	movzbl %al,%edx
 854adbd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854adc0:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 854adc6:	39 c2                	cmp    %eax,%edx
 854adc8:	0f 9d c0             	setge  %al
 854adcb:	84 c0                	test   %al,%al
 854adcd:	74 21                	je     854adf0 <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x166>
 854adcf:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854add6:	00 
 854add7:	8b 45 10             	mov    0x10(%ebp),%eax
 854adda:	89 44 24 08          	mov    %eax,0x8(%esp)
 854adde:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ade1:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ade5:	8b 45 08             	mov    0x8(%ebp),%eax
 854ade8:	89 04 24             	mov    %eax,(%esp)
 854adeb:	e8 34 ba ff ff       	call   8546824 <_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>
 854adf0:	8b 45 10             	mov    0x10(%ebp),%eax
 854adf3:	89 04 24             	mov    %eax,(%esp)
 854adf6:	e8 71 a2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854adfb:	3c 0c                	cmp    $0xc,%al
 854adfd:	0f 97 c0             	seta   %al
 854ae00:	84 c0                	test   %al,%al
 854ae02:	74 5f                	je     854ae63 <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x1d9>
 854ae04:	8b 45 10             	mov    0x10(%ebp),%eax
 854ae07:	89 04 24             	mov    %eax,(%esp)
 854ae0a:	e8 5d a2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854ae0f:	0f b6 c0             	movzbl %al,%eax
 854ae12:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 854ae15:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ae18:	89 04 24             	mov    %eax,(%esp)
 854ae1b:	e8 08 62 bb ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 854ae20:	89 c6                	mov    %eax,%esi
 854ae22:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ae25:	89 04 24             	mov    %eax,(%esp)
 854ae28:	e8 21 0e b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 854ae2d:	89 c3                	mov    %eax,%ebx
 854ae2f:	8b 45 10             	mov    0x10(%ebp),%eax
 854ae32:	8b 78 02             	mov    0x2(%eax),%edi
 854ae35:	e8 47 13 b8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 854ae3a:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 854ae40:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 854ae47:	00 
 854ae48:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 854ae4b:	89 54 24 10          	mov    %edx,0x10(%esp)
 854ae4f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 854ae53:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854ae57:	89 7c 24 04          	mov    %edi,0x4(%esp)
 854ae5b:	89 04 24             	mov    %eax,(%esp)
 854ae5e:	e8 6b b0 ed ff       	call   8425ece <_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb>
 854ae63:	8b 45 10             	mov    0x10(%ebp),%eax
 854ae66:	89 04 24             	mov    %eax,(%esp)
 854ae69:	e8 fe a1 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854ae6e:	0f b6 d8             	movzbl %al,%ebx
 854ae71:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854ae74:	89 04 24             	mov    %eax,(%esp)
 854ae77:	e8 cc 5d bc ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 854ae7c:	8b 55 0c             	mov    0xc(%ebp),%edx
 854ae7f:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 854ae85:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854ae8c:	00 
 854ae8d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854ae91:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 854ae94:	89 54 24 08          	mov    %edx,0x8(%esp)
 854ae98:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ae9c:	89 0c 24             	mov    %ecx,(%esp)
 854ae9f:	e8 fc 9d 13 00       	call   8684ca0 <_ZN15cUserHistoryLog11UpgradeItemEiiib>
 854aea4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854aea7:	8b 00                	mov    (%eax),%eax
 854aea9:	83 c0 4c             	add    $0x4c,%eax
 854aeac:	8b 10                	mov    (%eax),%edx
 854aeae:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854aeb1:	89 04 24             	mov    %eax,(%esp)
 854aeb4:	ff d2                	call   *%edx
 854aeb6:	84 c0                	test   %al,%al
 854aeb8:	74 35                	je     854aeef <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x265>
 854aeba:	8b 45 10             	mov    0x10(%ebp),%eax
 854aebd:	89 04 24             	mov    %eax,(%esp)
 854aec0:	e8 a7 a1 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854aec5:	0f b6 c0             	movzbl %al,%eax
 854aec8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854aecf:	00 
 854aed0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854aed4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854aed7:	89 44 24 08          	mov    %eax,0x8(%esp)
 854aedb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854aede:	89 44 24 04          	mov    %eax,0x4(%esp)
 854aee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 854aee5:	89 04 24             	mov    %eax,(%esp)
 854aee8:	e8 01 ee 12 00       	call   8679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>
 854aeed:	eb 3b                	jmp    854af2a <_ZN8WongWork12CItemUpgrade24ProcAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_iPKc+0x2a0>
 854aeef:	8b 45 10             	mov    0x10(%ebp),%eax
 854aef2:	89 04 24             	mov    %eax,(%esp)
 854aef5:	e8 72 a1 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854aefa:	0f b6 d8             	movzbl %al,%ebx
 854aefd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854af00:	89 04 24             	mov    %eax,(%esp)
 854af03:	e8 7a 3e bd ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 854af08:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854af0f:	00 
 854af10:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854af14:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 854af17:	89 54 24 08          	mov    %edx,0x8(%esp)
 854af1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 854af1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 854af22:	89 04 24             	mov    %eax,(%esp)
 854af25:	e8 c4 ed 12 00       	call   8679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>
 854af2a:	b8 00 00 00 00       	mov    $0x0,%eax
 854af2f:	83 c4 5c             	add    $0x5c,%esp
 854af32:	5b                   	pop    %ebx
 854af33:	5e                   	pop    %esi
 854af34:	5f                   	pop    %edi
 854af35:	5d                   	pop    %ebp
 854af36:	c3                   	ret
 854af37:	90                   	nop

```

```c
// WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade @ 0x854ac8a

/* WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, char
   const*) */

undefined4 __thiscall
WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,Inven_Item *param_3,int param_4,
          char *param_5)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  CValueStatistic *pCVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  cMyTrace local_38 [16];
  CItem *local_28;
  int local_24;
  uint local_20;
  
  uVar3 = CUser::get_charac_no(param_1,-1);
  uVar4 = CUser::get_acc_id(param_1);
  uVar5 = NumberToString(uVar4,0);
  cMyTrace::cMyTrace(local_38,
                     "int WongWork::CItemUpgrade::ProcAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int, const char*)"
                     ,0x82c,0);
  cMyTrace::operator()
            (local_38,"AmplifyRandomUpgrade m_id:%s char_no(%d) update:%d",uVar5,uVar3,param_4);
  iVar10 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(this_00,iVar10);
  if (local_28 == (CItem *)0x0) {
    uVar3 = 4;
  }
  else {
    cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      local_24 = CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
      local_20 = Inven_Item::GetUpgrade(param_2);
      local_20 = local_20 & 0xff;
      Inven_Item::SetUpgrade(param_2,(uchar)param_4);
      pCVar6 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar6,0xe,param_1,0);
      uVar4 = Inven_Item::GetUpgrade(param_2);
      if (*(int *)(local_24 + 0x234) <= (int)(uVar4 & 0xff)) {
        _NoticeUpgrade(this,param_1,param_2,true);
      }
      bVar2 = Inven_Item::GetUpgrade(param_2);
      if (0xc < bVar2) {
        uVar7 = Inven_Item::GetUpgrade(param_2);
        pcVar8 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = *(uint *)(param_2 + 2);
        iVar10 = G_CEnvironment();
        DB_ReqItemUpgradeLog::makeRequest
                  (*(uint *)(iVar10 + 0x378),uVar4,uVar9,pcVar8,uVar7 & 0xff,true);
      }
      uVar4 = Inven_Item::GetUpgrade(param_2);
      iVar10 = CItem::get_index(local_28);
      cUserHistoryLog::UpgradeItem
                ((cUserHistoryLog *)(param_1 + 0x79700),iVar10,local_20,uVar4 & 0xff,true);
      cVar1 = (**(code **)(*(int *)local_28 + 0x4c))(local_28);
      if (cVar1 == '\0') {
        uVar4 = Inven_Item::GetUpgrade(param_2);
        pcVar8 = (char *)CItem::GetItemName(local_28);
        CUser::makeGuildItemUpgradMessage(param_1,pcVar8,local_20,uVar4 & 0xff,true);
      }
      else {
        uVar4 = Inven_Item::GetUpgrade(param_2);
        CUser::makeGuildItemUpgradMessage(param_1,param_5,local_20,uVar4 & 0xff,true);
      }
      uVar3 = 0;
    }
    else {
      uVar3 = 4;
    }
  }
  return uVar3;
}

```

---

## ProcUpgrade

```asm
// === 0854779c WongWork::CItemUpgrade::ProcUpgrade  [0x0854779c-0x8548c3b] ===
 854779c:	55                   	push   %ebp
 854779d:	89 e5                	mov    %esp,%ebp
 854779f:	57                   	push   %edi
 85477a0:	56                   	push   %esi
 85477a1:	53                   	push   %ebx
 85477a2:	81 ec 2c 03 00 00    	sub    $0x32c,%esp
 85477a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85477ab:	89 04 24             	mov    %eax,(%esp)
 85477ae:	e8 db 2a b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85477b3:	89 45 b0             	mov    %eax,-0x50(%ebp)
 85477b6:	8b 45 10             	mov    0x10(%ebp),%eax
 85477b9:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 85477bd:	0f b7 d0             	movzwl %ax,%edx
 85477c0:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85477c6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85477ca:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85477d1:	00 
 85477d2:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85477d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85477d9:	89 04 24             	mov    %eax,(%esp)
 85477dc:	e8 37 41 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85477e1:	83 ec 04             	sub    $0x4,%esp
 85477e4:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85477ea:	89 04 24             	mov    %eax,(%esp)
 85477ed:	e8 74 75 bd ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 85477f2:	84 c0                	test   %al,%al
 85477f4:	74 0a                	je     8547800 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x64>
 85477f6:	b8 04 00 00 00       	mov    $0x4,%eax
 85477fb:	e9 30 14 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547800:	8b 95 e1 fe ff ff    	mov    -0x11f(%ebp),%edx
 8547806:	8b 45 10             	mov    0x10(%ebp),%eax
 8547809:	8b 40 1d             	mov    0x1d(%eax),%eax
 854780c:	39 c2                	cmp    %eax,%edx
 854780e:	74 0a                	je     854781a <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x7e>
 8547810:	b8 04 00 00 00       	mov    $0x4,%eax
 8547815:	e9 16 14 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 854781a:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 8547820:	89 04 24             	mov    %eax,(%esp)
 8547823:	e8 2c 40 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8547828:	8b 45 10             	mov    0x10(%ebp),%eax
 854782b:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 854782f:	0f b7 d0             	movzwl %ax,%edx
 8547832:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 8547838:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854783c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8547843:	00 
 8547844:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8547847:	89 54 24 04          	mov    %edx,0x4(%esp)
 854784b:	89 04 24             	mov    %eax,(%esp)
 854784e:	e8 c5 40 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8547853:	83 ec 04             	sub    $0x4,%esp
 8547856:	8b 85 38 fd ff ff    	mov    -0x2c8(%ebp),%eax
 854785c:	89 85 a2 fe ff ff    	mov    %eax,-0x15e(%ebp)
 8547862:	8b 85 3c fd ff ff    	mov    -0x2c4(%ebp),%eax
 8547868:	89 85 a6 fe ff ff    	mov    %eax,-0x15a(%ebp)
 854786e:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 8547874:	89 85 aa fe ff ff    	mov    %eax,-0x156(%ebp)
 854787a:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 8547880:	89 85 ae fe ff ff    	mov    %eax,-0x152(%ebp)
 8547886:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 854788c:	89 85 b2 fe ff ff    	mov    %eax,-0x14e(%ebp)
 8547892:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 8547898:	89 85 b6 fe ff ff    	mov    %eax,-0x14a(%ebp)
 854789e:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 85478a4:	89 85 ba fe ff ff    	mov    %eax,-0x146(%ebp)
 85478aa:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 85478b0:	89 85 be fe ff ff    	mov    %eax,-0x142(%ebp)
 85478b6:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 85478bc:	89 85 c2 fe ff ff    	mov    %eax,-0x13e(%ebp)
 85478c2:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 85478c8:	89 85 c6 fe ff ff    	mov    %eax,-0x13a(%ebp)
 85478ce:	8b 85 60 fd ff ff    	mov    -0x2a0(%ebp),%eax
 85478d4:	89 85 ca fe ff ff    	mov    %eax,-0x136(%ebp)
 85478da:	8b 85 64 fd ff ff    	mov    -0x29c(%ebp),%eax
 85478e0:	89 85 ce fe ff ff    	mov    %eax,-0x132(%ebp)
 85478e6:	8b 85 68 fd ff ff    	mov    -0x298(%ebp),%eax
 85478ec:	89 85 d2 fe ff ff    	mov    %eax,-0x12e(%ebp)
 85478f2:	8b 85 6c fd ff ff    	mov    -0x294(%ebp),%eax
 85478f8:	89 85 d6 fe ff ff    	mov    %eax,-0x12a(%ebp)
 85478fe:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 8547904:	89 85 da fe ff ff    	mov    %eax,-0x126(%ebp)
 854790a:	0f b6 85 74 fd ff ff 	movzbl -0x28c(%ebp),%eax
 8547911:	88 85 de fe ff ff    	mov    %al,-0x122(%ebp)
 8547917:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 854791d:	89 04 24             	mov    %eax,(%esp)
 8547920:	e8 41 74 bd ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8547925:	84 c0                	test   %al,%al
 8547927:	74 0a                	je     8547933 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x197>
 8547929:	b8 16 00 00 00       	mov    $0x16,%eax
 854792e:	e9 fd 12 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547933:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 8547939:	a1 58 f7 41 09       	mov    0x941f758,%eax
 854793e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8547942:	8d 95 df fe ff ff    	lea    -0x121(%ebp),%edx
 8547948:	89 54 24 04          	mov    %edx,0x4(%esp)
 854794c:	89 04 24             	mov    %eax,(%esp)
 854794f:	e8 0e d6 ba ff       	call   80f4f62 <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm>
 8547954:	83 f0 01             	xor    $0x1,%eax
 8547957:	84 c0                	test   %al,%al
 8547959:	74 0a                	je     8547965 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1c9>
 854795b:	b8 f4 03 00 00       	mov    $0x3f4,%eax
 8547960:	e9 cb 12 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547965:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 854796b:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8547970:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547974:	89 04 24             	mov    %eax,(%esp)
 8547977:	e8 a4 d3 ba ff       	call   80f4d20 <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm>
 854797c:	c7 85 24 ff ff ff 00 	movl   $0x0,-0xdc(%ebp)
 8547983:	00 00 00 
 8547986:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 854798c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8547990:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 8547996:	89 44 24 08          	mov    %eax,0x8(%esp)
 854799a:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85479a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85479a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85479a7:	89 04 24             	mov    %eax,(%esp)
 85479aa:	e8 b9 14 00 00       	call   8548e68 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR>
 85479af:	8b 55 10             	mov    0x10(%ebp),%edx
 85479b2:	66 89 42 25          	mov    %ax,0x25(%edx)
 85479b6:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 85479bc:	85 c0                	test   %eax,%eax
 85479be:	74 0b                	je     85479cb <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x22f>
 85479c0:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 85479c6:	e9 65 12 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 85479cb:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 85479d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85479d5:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 85479db:	89 44 24 08          	mov    %eax,0x8(%esp)
 85479df:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85479e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85479e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85479ec:	89 04 24             	mov    %eax,(%esp)
 85479ef:	e8 06 16 00 00       	call   8548ffa <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR>
 85479f4:	8b 55 10             	mov    0x10(%ebp),%edx
 85479f7:	88 42 27             	mov    %al,0x27(%edx)
 85479fa:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8547a00:	85 c0                	test   %eax,%eax
 8547a02:	74 0b                	je     8547a0f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x273>
 8547a04:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8547a0a:	e9 21 12 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547a0f:	8b 85 e1 fe ff ff    	mov    -0x11f(%ebp),%eax
 8547a15:	89 c3                	mov    %eax,%ebx
 8547a17:	e8 7f 47 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8547a1c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8547a20:	89 04 24             	mov    %eax,(%esp)
 8547a23:	e8 0a 80 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8547a28:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8547a2b:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8547a2f:	75 0a                	jne    8547a3b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x29f>
 8547a31:	b8 04 00 00 00       	mov    $0x4,%eax
 8547a36:	e9 f5 11 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547a3b:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8547a41:	89 04 24             	mov    %eax,(%esp)
 8547a44:	e8 0b 3e b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8547a49:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8547a4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8547a50:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 8547a54:	66 83 f8 ff          	cmp    $0xffff,%ax
 8547a58:	0f 84 22 02 00 00    	je     8547c80 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x4e4>
 8547a5e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547a61:	8b 00                	mov    (%eax),%eax
 8547a63:	83 c0 44             	add    $0x44,%eax
 8547a66:	8b 10                	mov    (%eax),%edx
 8547a68:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547a6b:	89 04 24             	mov    %eax,(%esp)
 8547a6e:	ff d2                	call   *%edx
 8547a70:	83 f0 01             	xor    $0x1,%eax
 8547a73:	84 c0                	test   %al,%al
 8547a75:	74 0a                	je     8547a81 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x2e5>
 8547a77:	b8 ea 00 00 00       	mov    $0xea,%eax
 8547a7c:	e9 af 11 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547a81:	8b 45 10             	mov    0x10(%ebp),%eax
 8547a84:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 8547a88:	0f b7 d0             	movzwl %ax,%edx
 8547a8b:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 8547a91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8547a95:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8547a9c:	00 
 8547a9d:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8547aa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547aa4:	89 04 24             	mov    %eax,(%esp)
 8547aa7:	e8 6c 3e fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8547aac:	83 ec 04             	sub    $0x4,%esp
 8547aaf:	8b 85 38 fd ff ff    	mov    -0x2c8(%ebp),%eax
 8547ab5:	89 85 65 fe ff ff    	mov    %eax,-0x19b(%ebp)
 8547abb:	8b 85 3c fd ff ff    	mov    -0x2c4(%ebp),%eax
 8547ac1:	89 85 69 fe ff ff    	mov    %eax,-0x197(%ebp)
 8547ac7:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 8547acd:	89 85 6d fe ff ff    	mov    %eax,-0x193(%ebp)
 8547ad3:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 8547ad9:	89 85 71 fe ff ff    	mov    %eax,-0x18f(%ebp)
 8547adf:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 8547ae5:	89 85 75 fe ff ff    	mov    %eax,-0x18b(%ebp)
 8547aeb:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 8547af1:	89 85 79 fe ff ff    	mov    %eax,-0x187(%ebp)
 8547af7:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 8547afd:	89 85 7d fe ff ff    	mov    %eax,-0x183(%ebp)
 8547b03:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 8547b09:	89 85 81 fe ff ff    	mov    %eax,-0x17f(%ebp)
 8547b0f:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 8547b15:	89 85 85 fe ff ff    	mov    %eax,-0x17b(%ebp)
 8547b1b:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 8547b21:	89 85 89 fe ff ff    	mov    %eax,-0x177(%ebp)
 8547b27:	8b 85 60 fd ff ff    	mov    -0x2a0(%ebp),%eax
 8547b2d:	89 85 8d fe ff ff    	mov    %eax,-0x173(%ebp)
 8547b33:	8b 85 64 fd ff ff    	mov    -0x29c(%ebp),%eax
 8547b39:	89 85 91 fe ff ff    	mov    %eax,-0x16f(%ebp)
 8547b3f:	8b 85 68 fd ff ff    	mov    -0x298(%ebp),%eax
 8547b45:	89 85 95 fe ff ff    	mov    %eax,-0x16b(%ebp)
 8547b4b:	8b 85 6c fd ff ff    	mov    -0x294(%ebp),%eax
 8547b51:	89 85 99 fe ff ff    	mov    %eax,-0x167(%ebp)
 8547b57:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 8547b5d:	89 85 9d fe ff ff    	mov    %eax,-0x163(%ebp)
 8547b63:	0f b6 85 74 fd ff ff 	movzbl -0x28c(%ebp),%eax
 8547b6a:	88 85 a1 fe ff ff    	mov    %al,-0x15f(%ebp)
 8547b70:	8d 85 65 fe ff ff    	lea    -0x19b(%ebp),%eax
 8547b76:	89 04 24             	mov    %eax,(%esp)
 8547b79:	e8 e8 71 bd ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8547b7e:	84 c0                	test   %al,%al
 8547b80:	74 0a                	je     8547b8c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x3f0>
 8547b82:	b8 04 00 00 00       	mov    $0x4,%eax
 8547b87:	e9 a4 10 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547b8c:	e8 0a 46 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8547b91:	05 d0 04 00 00       	add    $0x4d0,%eax
 8547b96:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8547b99:	8b 85 67 fe ff ff    	mov    -0x199(%ebp),%eax
 8547b9f:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8547ba5:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8547bab:	8d 95 28 ff ff ff    	lea    -0xd8(%ebp),%edx
 8547bb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8547bb5:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8547bb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547bbc:	89 04 24             	mov    %eax,(%esp)
 8547bbf:	e8 4e 3d 00 00       	call   854b912 <_ZNSt3mapIj26stUpgradeItemTicketParam_tSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 8547bc4:	83 ec 04             	sub    $0x4,%esp
 8547bc7:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8547bcd:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8547bd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547bd4:	89 04 24             	mov    %eax,(%esp)
 8547bd7:	e8 62 3d 00 00       	call   854b93e <_ZNSt3mapIj26stUpgradeItemTicketParam_tSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8547bdc:	83 ec 04             	sub    $0x4,%esp
 8547bdf:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8547be5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547be9:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8547bef:	89 04 24             	mov    %eax,(%esp)
 8547bf2:	e8 6d 3d 00 00       	call   854b964 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26stUpgradeItemTicketParam_tEEeqERKS4_>
 8547bf7:	84 c0                	test   %al,%al
 8547bf9:	74 0a                	je     8547c05 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x469>
 8547bfb:	b8 09 00 00 00       	mov    $0x9,%eax
 8547c00:	e9 2b 10 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547c05:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547c0b:	89 04 24             	mov    %eax,(%esp)
 8547c0e:	e8 59 d4 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8547c13:	89 c3                	mov    %eax,%ebx
 8547c15:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8547c1b:	89 04 24             	mov    %eax,(%esp)
 8547c1e:	e8 55 3d 00 00       	call   854b978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26stUpgradeItemTicketParam_tEEptEv>
 8547c23:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8547c27:	38 c3                	cmp    %al,%bl
 8547c29:	72 26                	jb     8547c51 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x4b5>
 8547c2b:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547c31:	89 04 24             	mov    %eax,(%esp)
 8547c34:	e8 33 d4 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8547c39:	89 c3                	mov    %eax,%ebx
 8547c3b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8547c41:	89 04 24             	mov    %eax,(%esp)
 8547c44:	e8 2f 3d 00 00       	call   854b978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26stUpgradeItemTicketParam_tEEptEv>
 8547c49:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 8547c4d:	38 c3                	cmp    %al,%bl
 8547c4f:	76 07                	jbe    8547c58 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x4bc>
 8547c51:	b8 01 00 00 00       	mov    $0x1,%eax
 8547c56:	eb 05                	jmp    8547c5d <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x4c1>
 8547c58:	b8 00 00 00 00       	mov    $0x0,%eax
 8547c5d:	84 c0                	test   %al,%al
 8547c5f:	74 0a                	je     8547c6b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x4cf>
 8547c61:	b8 08 00 00 00       	mov    $0x8,%eax
 8547c66:	e9 c5 0f 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547c6b:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 8547c71:	89 04 24             	mov    %eax,(%esp)
 8547c74:	e8 ff 3c 00 00       	call   854b978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26stUpgradeItemTicketParam_tEEptEv>
 8547c79:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 8547c7d:	88 45 bb             	mov    %al,-0x45(%ebp)
 8547c80:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547c86:	83 c0 11             	add    $0x11,%eax
 8547c89:	89 04 24             	mov    %eax,(%esp)
 8547c8c:	e8 3b 8b c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8547c91:	84 c0                	test   %al,%al
 8547c93:	74 0f                	je     8547ca4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x508>
 8547c95:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8547c9a:	89 04 24             	mov    %eax,(%esp)
 8547c9d:	e8 be 38 00 00       	call   854b560 <_ZNK14CItemAmplifier19getUpgradeInfoTableEv>
 8547ca2:	eb 0e                	jmp    8547cb2 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x516>
 8547ca4:	8b 45 08             	mov    0x8(%ebp),%eax
 8547ca7:	83 c0 04             	add    $0x4,%eax
 8547caa:	89 04 24             	mov    %eax,(%esp)
 8547cad:	e8 d0 36 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8547cb2:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8547cb5:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8547cbb:	89 04 24             	mov    %eax,(%esp)
 8547cbe:	e8 bf 35 00 00       	call   854b282 <_ZN14upgrade_info_tC1Ev>
 8547cc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8547cc6:	89 04 24             	mov    %eax,(%esp)
 8547cc9:	e8 ea 25 b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8547cce:	89 44 24 14          	mov    %eax,0x14(%esp)
 8547cd2:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8547cd8:	89 44 24 10          	mov    %eax,0x10(%esp)
 8547cdc:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8547cdf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8547ce3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547ce6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8547cea:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547cf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8547cf7:	89 04 24             	mov    %eax,(%esp)
 8547cfa:	e8 8b ea ff ff       	call   854678a <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti>
 8547cff:	83 f0 01             	xor    $0x1,%eax
 8547d02:	84 c0                	test   %al,%al
 8547d04:	74 0a                	je     8547d10 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x574>
 8547d06:	b8 0d 00 00 00       	mov    $0xd,%eax
 8547d0b:	e9 20 0f 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547d10:	8b 45 10             	mov    0x10(%ebp),%eax
 8547d13:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 8547d17:	66 85 c0             	test   %ax,%ax
 8547d1a:	74 20                	je     8547d3c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x5a0>
 8547d1c:	c7 85 b0 fd ff ff 00 	movl   $0x0,-0x250(%ebp)
 8547d23:	00 00 00 
 8547d26:	c7 85 ac fd ff ff 01 	movl   $0x1,-0x254(%ebp)
 8547d2d:	00 00 00 
 8547d30:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8547d36:	89 85 a8 fd ff ff    	mov    %eax,-0x258(%ebp)
 8547d3c:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547d42:	89 44 24 08          	mov    %eax,0x8(%esp)
 8547d46:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 8547d4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547d50:	8b 45 08             	mov    0x8(%ebp),%eax
 8547d53:	89 04 24             	mov    %eax,(%esp)
 8547d56:	e8 e1 0e 00 00       	call   8548c3c <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_>
 8547d5b:	83 f0 01             	xor    $0x1,%eax
 8547d5e:	84 c0                	test   %al,%al
 8547d60:	74 0a                	je     8547d6c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x5d0>
 8547d62:	b8 13 00 00 00       	mov    $0x13,%eax
 8547d67:	e9 c4 0e 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547d6c:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8547d72:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8547d76:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547d7c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8547d80:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 8547d86:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547d8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8547d8d:	89 04 24             	mov    %eax,(%esp)
 8547d90:	e8 a7 0f 00 00       	call   8548d3c <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t>
 8547d95:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8547d98:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8547d9c:	74 08                	je     8547da6 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x60a>
 8547d9e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8547da1:	e9 8a 0e 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547da6:	8b 85 67 fe ff ff    	mov    -0x199(%ebp),%eax
 8547dac:	3d 0e d3 28 00       	cmp    $0x28d30e,%eax
 8547db1:	74 0d                	je     8547dc0 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x624>
 8547db3:	8b 85 67 fe ff ff    	mov    -0x199(%ebp),%eax
 8547db9:	3d 0f d3 28 00       	cmp    $0x28d30f,%eax
 8547dbe:	75 0a                	jne    8547dca <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x62e>
 8547dc0:	c7 85 b0 fd ff ff 00 	movl   $0x0,-0x250(%ebp)
 8547dc7:	00 00 00 
 8547dca:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8547dd0:	89 04 24             	mov    %eax,(%esp)
 8547dd3:	e8 94 d2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8547dd8:	0f b6 c8             	movzbl %al,%ecx
 8547ddb:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8547de1:	89 c2                	mov    %eax,%edx
 8547de3:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8547de8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8547dec:	8d 8d 7c fd ff ff    	lea    -0x284(%ebp),%ecx
 8547df2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8547df6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547dfa:	89 04 24             	mov    %eax,(%esp)
 8547dfd:	e8 aa cf ba ff       	call   80f4dac <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th>
 8547e02:	8b 45 10             	mov    0x10(%ebp),%eax
 8547e05:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8547e09:	84 c0                	test   %al,%al
 8547e0b:	75 1d                	jne    8547e2a <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x68e>
 8547e0d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547e10:	8b 00                	mov    (%eax),%eax
 8547e12:	83 c0 30             	add    $0x30,%eax
 8547e15:	8b 10                	mov    (%eax),%edx
 8547e17:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547e1a:	89 04 24             	mov    %eax,(%esp)
 8547e1d:	ff d2                	call   *%edx
 8547e1f:	84 c0                	test   %al,%al
 8547e21:	74 07                	je     8547e2a <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x68e>
 8547e23:	b8 01 00 00 00       	mov    $0x1,%eax
 8547e28:	eb 05                	jmp    8547e2f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x693>
 8547e2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8547e2f:	84 c0                	test   %al,%al
 8547e31:	74 0a                	je     8547e3d <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x6a1>
 8547e33:	b8 13 00 00 00       	mov    $0x13,%eax
 8547e38:	e9 f3 0d 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547e3d:	8b 45 10             	mov    0x10(%ebp),%eax
 8547e40:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8547e44:	3c 01                	cmp    $0x1,%al
 8547e46:	75 1d                	jne    8547e65 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x6c9>
 8547e48:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547e4b:	8b 00                	mov    (%eax),%eax
 8547e4d:	83 c0 34             	add    $0x34,%eax
 8547e50:	8b 10                	mov    (%eax),%edx
 8547e52:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8547e55:	89 04 24             	mov    %eax,(%esp)
 8547e58:	ff d2                	call   *%edx
 8547e5a:	84 c0                	test   %al,%al
 8547e5c:	74 07                	je     8547e65 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x6c9>
 8547e5e:	b8 01 00 00 00       	mov    $0x1,%eax
 8547e63:	eb 05                	jmp    8547e6a <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x6ce>
 8547e65:	b8 00 00 00 00       	mov    $0x0,%eax
 8547e6a:	84 c0                	test   %al,%al
 8547e6c:	74 0a                	je     8547e78 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x6dc>
 8547e6e:	b8 13 00 00 00       	mov    $0x13,%eax
 8547e73:	e9 b8 0d 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8547e78:	8b 45 10             	mov    0x10(%ebp),%eax
 8547e7b:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 8547e7f:	66 83 f8 ff          	cmp    $0xffff,%ax
 8547e83:	0f 84 5b 01 00 00    	je     8547fe4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x848>
 8547e89:	8d 85 28 fe ff ff    	lea    -0x1d8(%ebp),%eax
 8547e8f:	89 04 24             	mov    %eax,(%esp)
 8547e92:	e8 bd 39 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8547e97:	8b 45 10             	mov    0x10(%ebp),%eax
 8547e9a:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 8547e9e:	0f b7 d0             	movzwl %ax,%edx
 8547ea1:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 8547ea7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8547eab:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8547eb2:	00 
 8547eb3:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8547eb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547eba:	89 04 24             	mov    %eax,(%esp)
 8547ebd:	e8 56 3a fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8547ec2:	83 ec 04             	sub    $0x4,%esp
 8547ec5:	8b 85 38 fd ff ff    	mov    -0x2c8(%ebp),%eax
 8547ecb:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 8547ed1:	8b 85 3c fd ff ff    	mov    -0x2c4(%ebp),%eax
 8547ed7:	89 85 2c fe ff ff    	mov    %eax,-0x1d4(%ebp)
 8547edd:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 8547ee3:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 8547ee9:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 8547eef:	89 85 34 fe ff ff    	mov    %eax,-0x1cc(%ebp)
 8547ef5:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 8547efb:	89 85 38 fe ff ff    	mov    %eax,-0x1c8(%ebp)
 8547f01:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 8547f07:	89 85 3c fe ff ff    	mov    %eax,-0x1c4(%ebp)
 8547f0d:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 8547f13:	89 85 40 fe ff ff    	mov    %eax,-0x1c0(%ebp)
 8547f19:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 8547f1f:	89 85 44 fe ff ff    	mov    %eax,-0x1bc(%ebp)
 8547f25:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 8547f2b:	89 85 48 fe ff ff    	mov    %eax,-0x1b8(%ebp)
 8547f31:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 8547f37:	89 85 4c fe ff ff    	mov    %eax,-0x1b4(%ebp)
 8547f3d:	8b 85 60 fd ff ff    	mov    -0x2a0(%ebp),%eax
 8547f43:	89 85 50 fe ff ff    	mov    %eax,-0x1b0(%ebp)
 8547f49:	8b 85 64 fd ff ff    	mov    -0x29c(%ebp),%eax
 8547f4f:	89 85 54 fe ff ff    	mov    %eax,-0x1ac(%ebp)
 8547f55:	8b 85 68 fd ff ff    	mov    -0x298(%ebp),%eax
 8547f5b:	89 85 58 fe ff ff    	mov    %eax,-0x1a8(%ebp)
 8547f61:	8b 85 6c fd ff ff    	mov    -0x294(%ebp),%eax
 8547f67:	89 85 5c fe ff ff    	mov    %eax,-0x1a4(%ebp)
 8547f6d:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 8547f73:	89 85 60 fe ff ff    	mov    %eax,-0x1a0(%ebp)
 8547f79:	0f b6 85 74 fd ff ff 	movzbl -0x28c(%ebp),%eax
 8547f80:	88 85 64 fe ff ff    	mov    %al,-0x19c(%ebp)
 8547f86:	8b 85 2a fe ff ff    	mov    -0x1d6(%ebp),%eax
 8547f8c:	3d 0f d3 28 00       	cmp    $0x28d30f,%eax
 8547f91:	75 23                	jne    8547fb6 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x81a>
 8547f93:	8b 45 10             	mov    0x10(%ebp),%eax
 8547f96:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8547f9a:	84 c0                	test   %al,%al
 8547f9c:	75 0c                	jne    8547faa <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x80e>
 8547f9e:	c7 85 ac fd ff ff 32 	movl   $0x32,-0x254(%ebp)
 8547fa5:	00 00 00 
 8547fa8:	eb 3a                	jmp    8547fe4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x848>
 8547faa:	c7 85 ac fd ff ff 0a 	movl   $0xa,-0x254(%ebp)
 8547fb1:	00 00 00 
 8547fb4:	eb 2e                	jmp    8547fe4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x848>
 8547fb6:	8b 85 2a fe ff ff    	mov    -0x1d6(%ebp),%eax
 8547fbc:	3d 0e d3 28 00       	cmp    $0x28d30e,%eax
 8547fc1:	75 21                	jne    8547fe4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x848>
 8547fc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8547fc6:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8547fca:	84 c0                	test   %al,%al
 8547fcc:	75 0c                	jne    8547fda <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x83e>
 8547fce:	c7 85 ac fd ff ff 64 	movl   $0x64,-0x254(%ebp)
 8547fd5:	00 00 00 
 8547fd8:	eb 0a                	jmp    8547fe4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x848>
 8547fda:	c7 85 ac fd ff ff 14 	movl   $0x14,-0x254(%ebp)
 8547fe1:	00 00 00 
 8547fe4:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8547feb:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 8547ff1:	89 44 24 18          	mov    %eax,0x18(%esp)
 8547ff5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8547ff8:	89 44 24 14          	mov    %eax,0x14(%esp)
 8547ffc:	8d 85 a2 fe ff ff    	lea    -0x15e(%ebp),%eax
 8548002:	89 44 24 10          	mov    %eax,0x10(%esp)
 8548006:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8548009:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854800d:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548013:	89 44 24 08          	mov    %eax,0x8(%esp)
 8548017:	8b 45 0c             	mov    0xc(%ebp),%eax
 854801a:	89 44 24 04          	mov    %eax,0x4(%esp)
 854801e:	8b 45 08             	mov    0x8(%ebp),%eax
 8548021:	89 04 24             	mov    %eax,(%esp)
 8548024:	e8 19 e3 ff ff       	call   8546342 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t>
 8548029:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 854802c:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8548030:	0f 95 c0             	setne  %al
 8548033:	84 c0                	test   %al,%al
 8548035:	74 08                	je     854803f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x8a3>
 8548037:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 854803a:	e9 f1 0b 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 854803f:	8b 45 10             	mov    0x10(%ebp),%eax
 8548042:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8548046:	84 c0                	test   %al,%al
 8548048:	75 1c                	jne    8548066 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x8ca>
 854804a:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548050:	83 c0 11             	add    $0x11,%eax
 8548053:	89 04 24             	mov    %eax,(%esp)
 8548056:	e8 71 87 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 854805b:	84 c0                	test   %al,%al
 854805d:	74 07                	je     8548066 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x8ca>
 854805f:	b8 01 00 00 00       	mov    $0x1,%eax
 8548064:	eb 05                	jmp    854806b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x8cf>
 8548066:	b8 00 00 00 00       	mov    $0x0,%eax
 854806b:	84 c0                	test   %al,%al
 854806d:	74 0a                	je     8548079 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x8dd>
 854806f:	b8 17 00 00 00       	mov    $0x17,%eax
 8548074:	e9 b7 0b 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8548079:	8b 45 10             	mov    0x10(%ebp),%eax
 854807c:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 8548080:	3c 01                	cmp    $0x1,%al
 8548082:	75 1f                	jne    85480a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x907>
 8548084:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 854808a:	83 c0 11             	add    $0x11,%eax
 854808d:	89 04 24             	mov    %eax,(%esp)
 8548090:	e8 37 87 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8548095:	83 f0 01             	xor    $0x1,%eax
 8548098:	84 c0                	test   %al,%al
 854809a:	74 07                	je     85480a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x907>
 854809c:	b8 01 00 00 00       	mov    $0x1,%eax
 85480a1:	eb 05                	jmp    85480a8 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x90c>
 85480a3:	b8 00 00 00 00       	mov    $0x0,%eax
 85480a8:	84 c0                	test   %al,%al
 85480aa:	74 0a                	je     85480b6 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x91a>
 85480ac:	b8 17 00 00 00       	mov    $0x17,%eax
 85480b1:	e9 7a 0b 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 85480b6:	8b 45 14             	mov    0x14(%ebp),%eax
 85480b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85480c0:	00 
 85480c1:	89 04 24             	mov    %eax,(%esp)
 85480c4:	e8 57 38 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85480c9:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85480cf:	89 04 24             	mov    %eax,(%esp)
 85480d2:	e8 95 cf ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85480d7:	0f b6 c0             	movzbl %al,%eax
 85480da:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85480dd:	c6 45 ce 00          	movb   $0x0,-0x32(%ebp)
 85480e1:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 85480e5:	8b 45 10             	mov    0x10(%ebp),%eax
 85480e8:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 85480ec:	66 85 c0             	test   %ax,%ax
 85480ef:	0f 84 82 00 00 00    	je     8548177 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x9db>
 85480f5:	c6 45 ce 01          	movb   $0x1,-0x32(%ebp)
 85480f9:	c7 85 30 ff ff ff 63 	movl   $0x63,-0xd0(%ebp)
 8548100:	00 00 00 
 8548103:	8b 45 08             	mov    0x8(%ebp),%eax
 8548106:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 854810c:	8d 95 30 ff ff ff    	lea    -0xd0(%ebp),%edx
 8548112:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548116:	89 04 24             	mov    %eax,(%esp)
 8548119:	e8 a0 39 b8 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 854811e:	8b 55 10             	mov    0x10(%ebp),%edx
 8548121:	0f b6 52 27          	movzbl 0x27(%edx),%edx
 8548125:	0f b6 d2             	movzbl %dl,%edx
 8548128:	39 d0                	cmp    %edx,%eax
 854812a:	0f 92 c0             	setb   %al
 854812d:	84 c0                	test   %al,%al
 854812f:	74 25                	je     8548156 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x9ba>
 8548131:	8b 45 10             	mov    0x10(%ebp),%eax
 8548134:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 8548138:	0f b6 c0             	movzbl %al,%eax
 854813b:	89 44 24 04          	mov    %eax,0x4(%esp)
 854813f:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548145:	89 04 24             	mov    %eax,(%esp)
 8548148:	e8 af 8e ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 854814d:	c6 45 cf 01          	movb   $0x1,-0x31(%ebp)
 8548151:	e9 4d 02 00 00       	jmp    85483a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xc07>
 8548156:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8548159:	0f b6 c0             	movzbl %al,%eax
 854815c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548160:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548166:	89 04 24             	mov    %eax,(%esp)
 8548169:	e8 8e 8e ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 854816e:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 8548172:	e9 2c 02 00 00       	jmp    85483a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xc07>
 8548177:	8d 85 7c fd ff ff    	lea    -0x284(%ebp),%eax
 854817d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8548181:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548187:	89 44 24 08          	mov    %eax,0x8(%esp)
 854818b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854818e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548192:	8b 45 08             	mov    0x8(%ebp),%eax
 8548195:	89 04 24             	mov    %eax,(%esp)
 8548198:	e8 bd f3 ff ff       	call   854755a <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t>
 854819d:	88 45 ce             	mov    %al,-0x32(%ebp)
 85481a0:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 85481a7:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85481ac:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 85481b3:	00 
 85481b4:	89 04 24             	mov    %eax,(%esp)
 85481b7:	e8 dc d7 bc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85481bc:	8b 10                	mov    (%eax),%edx
 85481be:	83 c2 34             	add    $0x34,%edx
 85481c1:	8b 12                	mov    (%edx),%edx
 85481c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85481ca:	00 
 85481cb:	89 04 24             	mov    %eax,(%esp)
 85481ce:	ff d2                	call   *%edx
 85481d0:	84 c0                	test   %al,%al
 85481d2:	74 1f                	je     85481f3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xa57>
 85481d4:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85481da:	83 c0 11             	add    $0x11,%eax
 85481dd:	89 04 24             	mov    %eax,(%esp)
 85481e0:	e8 e7 85 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 85481e5:	83 f0 01             	xor    $0x1,%eax
 85481e8:	84 c0                	test   %al,%al
 85481ea:	74 07                	je     85481f3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xa57>
 85481ec:	b8 01 00 00 00       	mov    $0x1,%eax
 85481f1:	eb 05                	jmp    85481f8 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xa5c>
 85481f3:	b8 00 00 00 00       	mov    $0x0,%eax
 85481f8:	84 c0                	test   %al,%al
 85481fa:	74 67                	je     8548263 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xac7>
 85481fc:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8548201:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 8548208:	00 
 8548209:	89 04 24             	mov    %eax,(%esp)
 854820c:	e8 87 d7 bc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8548211:	89 04 24             	mov    %eax,(%esp)
 8548214:	e8 55 33 00 00       	call   854b56e <_ZN21CReduceUpgradeItemPay13GetReduceRateEv>
 8548219:	89 45 e0             	mov    %eax,-0x20(%ebp)
 854821c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8548220:	7e 4a                	jle    854826c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xad0>
 8548222:	8b 9d b0 fd ff ff    	mov    -0x250(%ebp),%ebx
 8548228:	8b 85 b0 fd ff ff    	mov    -0x250(%ebp),%eax
 854822e:	89 c1                	mov    %eax,%ecx
 8548230:	0f af 4d e0          	imul   -0x20(%ebp),%ecx
 8548234:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8548239:	89 c8                	mov    %ecx,%eax
 854823b:	f7 ea                	imul   %edx
 854823d:	c1 fa 05             	sar    $0x5,%edx
 8548240:	89 c8                	mov    %ecx,%eax
 8548242:	c1 f8 1f             	sar    $0x1f,%eax
 8548245:	89 d1                	mov    %edx,%ecx
 8548247:	29 c1                	sub    %eax,%ecx
 8548249:	89 c8                	mov    %ecx,%eax
 854824b:	89 da                	mov    %ebx,%edx
 854824d:	29 c2                	sub    %eax,%edx
 854824f:	89 d0                	mov    %edx,%eax
 8548251:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8548254:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8548258:	79 12                	jns    854826c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xad0>
 854825a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8548261:	eb 09                	jmp    854826c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xad0>
 8548263:	8b 85 b0 fd ff ff    	mov    -0x250(%ebp),%eax
 8548269:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 854826c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854826f:	89 04 24             	mov    %eax,(%esp)
 8548272:	e8 07 20 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8548277:	8d 95 36 ff ff ff    	lea    -0xca(%ebp),%edx
 854827d:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8548284:	00 
 8548285:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 854828c:	00 
 854828d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548291:	89 14 24             	mov    %edx,(%esp)
 8548294:	e8 7f 36 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8548299:	83 ec 04             	sub    $0x4,%esp
 854829c:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 85482a2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85482a5:	e8 f1 3e b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85482aa:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85482ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 85482b1:	89 04 24             	mov    %eax,(%esp)
 85482b4:	e8 79 77 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85482b9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85482bc:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85482c0:	74 56                	je     8548318 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xb7c>
 85482c2:	db 45 d4             	fildl  -0x2c(%ebp)
 85482c5:	d9 9d 24 fd ff ff    	fstps  -0x2dc(%ebp)
 85482cb:	db 45 d4             	fildl  -0x2c(%ebp)
 85482ce:	d9 9d 28 fd ff ff    	fstps  -0x2d8(%ebp)
 85482d4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85482d7:	89 04 24             	mov    %eax,(%esp)
 85482da:	e8 a1 47 ce ff       	call   822ca80 <_ZNK10CEquipItem22getUpgradeCostDiscountEv>
 85482df:	d8 8d 28 fd ff ff    	fmuls  -0x2d8(%ebp)
 85482e5:	d9 05 04 d3 c9 08    	flds   0x8c9d304
 85482eb:	de f9                	fdivrp %st,%st(1)
 85482ed:	d8 85 24 fd ff ff    	fadds  -0x2dc(%ebp)
 85482f3:	d9 bd 36 fd ff ff    	fnstcw -0x2ca(%ebp)
 85482f9:	0f b7 85 36 fd ff ff 	movzwl -0x2ca(%ebp),%eax
 8548300:	b4 0c                	mov    $0xc,%ah
 8548302:	66 89 85 34 fd ff ff 	mov    %ax,-0x2cc(%ebp)
 8548309:	d9 ad 34 fd ff ff    	fldcw  -0x2cc(%ebp)
 854830f:	db 5d d4             	fistpl -0x2c(%ebp)
 8548312:	d9 ad 36 fd ff ff    	fldcw  -0x2ca(%ebp)
 8548318:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 854831e:	83 c0 11             	add    $0x11,%eax
 8548321:	89 04 24             	mov    %eax,(%esp)
 8548324:	e8 a3 84 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8548329:	84 c0                	test   %al,%al
 854832b:	74 3b                	je     8548368 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xbcc>
 854832d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548330:	89 04 24             	mov    %eax,(%esp)
 8548333:	e8 56 1f b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8548338:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854833f:	00 
 8548340:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 8548347:	00 
 8548348:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 854834b:	89 54 24 04          	mov    %edx,0x4(%esp)
 854834f:	89 04 24             	mov    %eax,(%esp)
 8548352:	e8 f5 71 fb ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8548357:	83 f0 01             	xor    $0x1,%eax
 854835a:	84 c0                	test   %al,%al
 854835c:	74 45                	je     85483a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xc07>
 854835e:	b8 0a 00 00 00       	mov    $0xa,%eax
 8548363:	e9 c8 08 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8548368:	8b 45 0c             	mov    0xc(%ebp),%eax
 854836b:	89 04 24             	mov    %eax,(%esp)
 854836e:	e8 1b 1f b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8548373:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854837a:	00 
 854837b:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8548382:	00 
 8548383:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8548386:	89 54 24 04          	mov    %edx,0x4(%esp)
 854838a:	89 04 24             	mov    %eax,(%esp)
 854838d:	e8 ba 71 fb ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8548392:	83 f0 01             	xor    $0x1,%eax
 8548395:	84 c0                	test   %al,%al
 8548397:	74 0a                	je     85483a3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xc07>
 8548399:	b8 0a 00 00 00       	mov    $0xa,%eax
 854839e:	e9 8d 08 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 85483a3:	8b 45 10             	mov    0x10(%ebp),%eax
 85483a6:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 85483aa:	66 83 f8 ff          	cmp    $0xffff,%ax
 85483ae:	0f 84 dc 01 00 00    	je     8548590 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xdf4>
 85483b4:	8d 85 eb fd ff ff    	lea    -0x215(%ebp),%eax
 85483ba:	89 04 24             	mov    %eax,(%esp)
 85483bd:	e8 92 34 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85483c2:	8b 45 10             	mov    0x10(%ebp),%eax
 85483c5:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 85483c9:	0f b7 d0             	movzwl %ax,%edx
 85483cc:	8d 85 38 fd ff ff    	lea    -0x2c8(%ebp),%eax
 85483d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85483d6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85483dd:	00 
 85483de:	8b 55 b0             	mov    -0x50(%ebp),%edx
 85483e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85483e5:	89 04 24             	mov    %eax,(%esp)
 85483e8:	e8 2b 35 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85483ed:	83 ec 04             	sub    $0x4,%esp
 85483f0:	8b 85 38 fd ff ff    	mov    -0x2c8(%ebp),%eax
 85483f6:	89 85 eb fd ff ff    	mov    %eax,-0x215(%ebp)
 85483fc:	8b 85 3c fd ff ff    	mov    -0x2c4(%ebp),%eax
 8548402:	89 85 ef fd ff ff    	mov    %eax,-0x211(%ebp)
 8548408:	8b 85 40 fd ff ff    	mov    -0x2c0(%ebp),%eax
 854840e:	89 85 f3 fd ff ff    	mov    %eax,-0x20d(%ebp)
 8548414:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 854841a:	89 85 f7 fd ff ff    	mov    %eax,-0x209(%ebp)
 8548420:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 8548426:	89 85 fb fd ff ff    	mov    %eax,-0x205(%ebp)
 854842c:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 8548432:	89 85 ff fd ff ff    	mov    %eax,-0x201(%ebp)
 8548438:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 854843e:	89 85 03 fe ff ff    	mov    %eax,-0x1fd(%ebp)
 8548444:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 854844a:	89 85 07 fe ff ff    	mov    %eax,-0x1f9(%ebp)
 8548450:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 8548456:	89 85 0b fe ff ff    	mov    %eax,-0x1f5(%ebp)
 854845c:	8b 85 5c fd ff ff    	mov    -0x2a4(%ebp),%eax
 8548462:	89 85 0f fe ff ff    	mov    %eax,-0x1f1(%ebp)
 8548468:	8b 85 60 fd ff ff    	mov    -0x2a0(%ebp),%eax
 854846e:	89 85 13 fe ff ff    	mov    %eax,-0x1ed(%ebp)
 8548474:	8b 85 64 fd ff ff    	mov    -0x29c(%ebp),%eax
 854847a:	89 85 17 fe ff ff    	mov    %eax,-0x1e9(%ebp)
 8548480:	8b 85 68 fd ff ff    	mov    -0x298(%ebp),%eax
 8548486:	89 85 1b fe ff ff    	mov    %eax,-0x1e5(%ebp)
 854848c:	8b 85 6c fd ff ff    	mov    -0x294(%ebp),%eax
 8548492:	89 85 1f fe ff ff    	mov    %eax,-0x1e1(%ebp)
 8548498:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 854849e:	89 85 23 fe ff ff    	mov    %eax,-0x1dd(%ebp)
 85484a4:	0f b6 85 74 fd ff ff 	movzbl -0x28c(%ebp),%eax
 85484ab:	88 85 27 fe ff ff    	mov    %al,-0x1d9(%ebp)
 85484b1:	8b 85 ed fd ff ff    	mov    -0x213(%ebp),%eax
 85484b7:	3d 0f d3 28 00       	cmp    $0x28d30f,%eax
 85484bc:	75 23                	jne    85484e1 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd45>
 85484be:	8b 45 10             	mov    0x10(%ebp),%eax
 85484c1:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 85484c5:	84 c0                	test   %al,%al
 85484c7:	75 0c                	jne    85484d5 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd39>
 85484c9:	c7 85 ac fd ff ff 32 	movl   $0x32,-0x254(%ebp)
 85484d0:	00 00 00 
 85484d3:	eb 3a                	jmp    854850f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd73>
 85484d5:	c7 85 ac fd ff ff 0a 	movl   $0xa,-0x254(%ebp)
 85484dc:	00 00 00 
 85484df:	eb 2e                	jmp    854850f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd73>
 85484e1:	8b 85 ed fd ff ff    	mov    -0x213(%ebp),%eax
 85484e7:	3d 0e d3 28 00       	cmp    $0x28d30e,%eax
 85484ec:	75 21                	jne    854850f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd73>
 85484ee:	8b 45 10             	mov    0x10(%ebp),%eax
 85484f1:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 85484f5:	84 c0                	test   %al,%al
 85484f7:	75 0c                	jne    8548505 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd69>
 85484f9:	c7 85 ac fd ff ff 64 	movl   $0x64,-0x254(%ebp)
 8548500:	00 00 00 
 8548503:	eb 0a                	jmp    854850f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xd73>
 8548505:	c7 85 ac fd ff ff 14 	movl   $0x14,-0x254(%ebp)
 854850c:	00 00 00 
 854850f:	8b 45 10             	mov    0x10(%ebp),%eax
 8548512:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 8548516:	0f b7 d8             	movzwl %ax,%ebx
 8548519:	8b 45 0c             	mov    0xc(%ebp),%eax
 854851c:	89 04 24             	mov    %eax,(%esp)
 854851f:	e8 6a 1d b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8548524:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 854852b:	00 
 854852c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8548533:	00 
 8548534:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854853b:	00 
 854853c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8548540:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8548547:	00 
 8548548:	89 04 24             	mov    %eax,(%esp)
 854854b:	e8 bc ba fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8548550:	83 f0 01             	xor    $0x1,%eax
 8548553:	84 c0                	test   %al,%al
 8548555:	74 0a                	je     8548561 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xdc5>
 8548557:	b8 11 00 00 00       	mov    $0x11,%eax
 854855c:	e9 cf 06 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 8548561:	8b 85 e1 fe ff ff    	mov    -0x11f(%ebp),%eax
 8548567:	89 c2                	mov    %eax,%edx
 8548569:	8b 85 67 fe ff ff    	mov    -0x199(%ebp),%eax
 854856f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8548572:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8548578:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854857f:	00 
 8548580:	89 54 24 08          	mov    %edx,0x8(%esp)
 8548584:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548588:	89 0c 24             	mov    %ecx,(%esp)
 854858b:	e8 ec e6 13 00       	call   8686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>
 8548590:	8b b5 ac fd ff ff    	mov    -0x254(%ebp),%esi
 8548596:	8b 45 10             	mov    0x10(%ebp),%eax
 8548599:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 854859d:	0f b7 d8             	movzwl %ax,%ebx
 85485a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85485a3:	89 04 24             	mov    %eax,(%esp)
 85485a6:	e8 e3 1c b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85485ab:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85485b2:	00 
 85485b3:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 85485ba:	00 
 85485bb:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85485bf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85485c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85485ca:	00 
 85485cb:	89 04 24             	mov    %eax,(%esp)
 85485ce:	e8 39 ba fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85485d3:	83 f0 01             	xor    $0x1,%eax
 85485d6:	84 c0                	test   %al,%al
 85485d8:	74 0a                	je     85485e4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xe48>
 85485da:	b8 11 00 00 00       	mov    $0x11,%eax
 85485df:	e9 4c 06 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 85485e4:	8b 45 10             	mov    0x10(%ebp),%eax
 85485e7:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 85485eb:	66 85 c0             	test   %ax,%ax
 85485ee:	74 2f                	je     854861f <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xe83>
 85485f0:	8b 85 e1 fe ff ff    	mov    -0x11f(%ebp),%eax
 85485f6:	89 c2                	mov    %eax,%edx
 85485f8:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 85485fe:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8548601:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8548607:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854860e:	00 
 854860f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8548613:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548617:	89 0c 24             	mov    %ecx,(%esp)
 854861a:	e8 5d e6 13 00       	call   8686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>
 854861f:	8b 85 b0 fd ff ff    	mov    -0x250(%ebp),%eax
 8548625:	89 c3                	mov    %eax,%ebx
 8548627:	e8 c3 4f 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 854862c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8548630:	8b 55 0c             	mov    0xc(%ebp),%edx
 8548633:	89 54 24 08          	mov    %edx,0x8(%esp)
 8548637:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 854863e:	00 
 854863f:	89 04 24             	mov    %eax,(%esp)
 8548642:	e8 3b 50 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8548647:	8b 45 10             	mov    0x10(%ebp),%eax
 854864a:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 854864e:	0f b6 d0             	movzbl %al,%edx
 8548651:	8b 45 14             	mov    0x14(%ebp),%eax
 8548654:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548658:	89 04 24             	mov    %eax,(%esp)
 854865b:	e8 c0 32 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8548660:	8b 45 10             	mov    0x10(%ebp),%eax
 8548663:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 8548667:	0f b7 d0             	movzwl %ax,%edx
 854866a:	8b 45 14             	mov    0x14(%ebp),%eax
 854866d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548671:	89 04 24             	mov    %eax,(%esp)
 8548674:	e8 2b 18 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8548679:	8b 45 10             	mov    0x10(%ebp),%eax
 854867c:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 8548680:	0f b7 d8             	movzwl %ax,%ebx
 8548683:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548686:	89 04 24             	mov    %eax,(%esp)
 8548689:	e8 00 1c b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854868e:	8d 95 73 ff ff ff    	lea    -0x8d(%ebp),%edx
 8548694:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8548698:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854869f:	00 
 85486a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85486a4:	89 14 24             	mov    %edx,(%esp)
 85486a7:	e8 6c 32 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85486ac:	83 ec 04             	sub    $0x4,%esp
 85486af:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 85486b5:	89 04 24             	mov    %eax,(%esp)
 85486b8:	e8 7d f1 ba ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85486bd:	8b 55 14             	mov    0x14(%ebp),%edx
 85486c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85486c4:	89 14 24             	mov    %edx,(%esp)
 85486c7:	e8 70 32 b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85486cc:	8b 45 10             	mov    0x10(%ebp),%eax
 85486cf:	0f b7 40 21          	movzwl 0x21(%eax),%eax
 85486d3:	0f b7 d0             	movzwl %ax,%edx
 85486d6:	8b 45 14             	mov    0x14(%ebp),%eax
 85486d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85486dd:	89 04 24             	mov    %eax,(%esp)
 85486e0:	e8 bf 17 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85486e5:	8b 45 10             	mov    0x10(%ebp),%eax
 85486e8:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 85486ec:	66 85 c0             	test   %ax,%ax
 85486ef:	74 15                	je     8548706 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xf6a>
 85486f1:	8b 45 14             	mov    0x14(%ebp),%eax
 85486f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85486fb:	00 
 85486fc:	89 04 24             	mov    %eax,(%esp)
 85486ff:	e8 1c 32 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8548704:	eb 5f                	jmp    8548765 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xfc9>
 8548706:	a1 58 f7 41 09       	mov    0x941f758,%eax
 854870b:	89 04 24             	mov    %eax,(%esp)
 854870e:	e8 7d 2e 00 00       	call   854b590 <_ZNK17Event_Upgrade_Jar8isNewNPCEv>
 8548713:	84 c0                	test   %al,%al
 8548715:	74 15                	je     854872c <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xf90>
 8548717:	8b 45 14             	mov    0x14(%ebp),%eax
 854871a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8548721:	00 
 8548722:	89 04 24             	mov    %eax,(%esp)
 8548725:	e8 f6 31 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854872a:	eb 39                	jmp    8548765 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xfc9>
 854872c:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8548731:	89 04 24             	mov    %eax,(%esp)
 8548734:	e8 43 2e 00 00       	call   854b57c <_ZNK17Event_Upgrade_Jar9isFortuneEv>
 8548739:	84 c0                	test   %al,%al
 854873b:	74 15                	je     8548752 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xfb6>
 854873d:	8b 45 14             	mov    0x14(%ebp),%eax
 8548740:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8548747:	00 
 8548748:	89 04 24             	mov    %eax,(%esp)
 854874b:	e8 d0 31 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8548750:	eb 13                	jmp    8548765 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0xfc9>
 8548752:	8b 45 14             	mov    0x14(%ebp),%eax
 8548755:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854875c:	00 
 854875d:	89 04 24             	mov    %eax,(%esp)
 8548760:	e8 bb 31 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8548765:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8548768:	0f be d0             	movsbl %al,%edx
 854876b:	8b 45 14             	mov    0x14(%ebp),%eax
 854876e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548772:	89 04 24             	mov    %eax,(%esp)
 8548775:	e8 a6 31 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854877a:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548780:	89 04 24             	mov    %eax,(%esp)
 8548783:	e8 e4 c8 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548788:	0f b6 d0             	movzbl %al,%edx
 854878b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 854878e:	8b 80 34 02 00 00    	mov    0x234(%eax),%eax
 8548794:	39 c2                	cmp    %eax,%edx
 8548796:	0f 9d c0             	setge  %al
 8548799:	84 c0                	test   %al,%al
 854879b:	74 36                	je     85487d3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1037>
 854879d:	8b 45 10             	mov    0x10(%ebp),%eax
 85487a0:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 85487a4:	66 85 c0             	test   %ax,%ax
 85487a7:	74 06                	je     85487af <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1013>
 85487a9:	80 7d cf 00          	cmpb   $0x0,-0x31(%ebp)
 85487ad:	74 24                	je     85487d3 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1037>
 85487af:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 85487b3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85487b7:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85487bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85487c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85487c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85487c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85487cb:	89 04 24             	mov    %eax,(%esp)
 85487ce:	e8 51 e0 ff ff       	call   8546824 <_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>
 85487d3:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85487d9:	89 04 24             	mov    %eax,(%esp)
 85487dc:	e8 8b c8 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85487e1:	3c 0c                	cmp    $0xc,%al
 85487e3:	0f 97 c0             	seta   %al
 85487e6:	84 c0                	test   %al,%al
 85487e8:	74 74                	je     854885e <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x10c2>
 85487ea:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 85487ee:	89 85 2c fd ff ff    	mov    %eax,-0x2d4(%ebp)
 85487f4:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 85487fa:	89 04 24             	mov    %eax,(%esp)
 85487fd:	e8 6a c8 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548802:	0f b6 c0             	movzbl %al,%eax
 8548805:	89 85 30 fd ff ff    	mov    %eax,-0x2d0(%ebp)
 854880b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854880e:	89 04 24             	mov    %eax,(%esp)
 8548811:	e8 12 88 bb ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8548816:	89 c6                	mov    %eax,%esi
 8548818:	8b 45 0c             	mov    0xc(%ebp),%eax
 854881b:	89 04 24             	mov    %eax,(%esp)
 854881e:	e8 2b 34 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8548823:	89 c3                	mov    %eax,%ebx
 8548825:	8b bd e1 fe ff ff    	mov    -0x11f(%ebp),%edi
 854882b:	e8 51 39 b8 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8548830:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8548836:	8b 95 2c fd ff ff    	mov    -0x2d4(%ebp),%edx
 854883c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8548840:	8b 8d 30 fd ff ff    	mov    -0x2d0(%ebp),%ecx
 8548846:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 854884a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 854884e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8548852:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8548856:	89 04 24             	mov    %eax,(%esp)
 8548859:	e8 70 d6 ed ff       	call   8425ece <_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb>
 854885e:	0f b6 45 ce          	movzbl -0x32(%ebp),%eax
 8548862:	83 f0 01             	xor    $0x1,%eax
 8548865:	84 c0                	test   %al,%al
 8548867:	0f 84 41 01 00 00    	je     85489ae <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1212>
 854886d:	c7 85 1c ff ff ff 00 	movl   $0x0,-0xe4(%ebp)
 8548874:	00 00 00 
 8548877:	8b 85 e6 fe ff ff    	mov    -0x11a(%ebp),%eax
 854887d:	0f bf d8             	movswl %ax,%ebx
 8548880:	e8 58 92 c0 ff       	call   8151add <_Z7G_Storev>
 8548885:	8d 95 1c ff ff ff    	lea    -0xe4(%ebp),%edx
 854888b:	89 54 24 14          	mov    %edx,0x14(%esp)
 854888f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8548896:	00 
 8548897:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854889b:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 854889e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85488a2:	8d 95 df fe ff ff    	lea    -0x121(%ebp),%edx
 85488a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85488ac:	89 04 24             	mov    %eax,(%esp)
 85488af:	e8 ec 05 0d 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 85488b4:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 85488ba:	89 c3                	mov    %eax,%ebx
 85488bc:	e8 2e 4d 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 85488c1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85488c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85488c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 85488cc:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 85488d3:	00 
 85488d4:	89 04 24             	mov    %eax,(%esp)
 85488d7:	e8 a6 4d 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 85488dc:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85488e3:	0f be 55 bb          	movsbl -0x45(%ebp),%edx
 85488e7:	8b 45 10             	mov    0x10(%ebp),%eax
 85488ea:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 85488ee:	0f b7 c0             	movzwl %ax,%eax
 85488f1:	89 54 24 24          	mov    %edx,0x24(%esp)
 85488f5:	8d 95 65 fe ff ff    	lea    -0x19b(%ebp),%edx
 85488fb:	89 54 24 20          	mov    %edx,0x20(%esp)
 85488ff:	8b 55 14             	mov    0x14(%ebp),%edx
 8548902:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8548906:	8d 95 7c fd ff ff    	lea    -0x284(%ebp),%edx
 854890c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8548910:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8548913:	89 54 24 14          	mov    %edx,0x14(%esp)
 8548917:	89 44 24 10          	mov    %eax,0x10(%esp)
 854891b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 854891e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8548922:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548928:	89 44 24 08          	mov    %eax,0x8(%esp)
 854892c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854892f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548933:	8b 45 08             	mov    0x8(%ebp),%eax
 8548936:	89 04 24             	mov    %eax,(%esp)
 8548939:	e8 7c e2 ff ff       	call   8546bba <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c>
 854893e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8548941:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8548945:	0f 95 c0             	setne  %al
 8548948:	84 c0                	test   %al,%al
 854894a:	0f 84 15 01 00 00    	je     8548a65 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x12c9>
 8548950:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8548953:	3d d8 00 00 00       	cmp    $0xd8,%eax
 8548958:	75 4c                	jne    85489a6 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x120a>
 854895a:	8b 45 10             	mov    0x10(%ebp),%eax
 854895d:	0f b7 40 23          	movzwl 0x23(%eax),%eax
 8548961:	0f b7 c0             	movzwl %ax,%eax
 8548964:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8548968:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 854896f:	00 
 8548970:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8548977:	00 
 8548978:	8b 45 0c             	mov    0xc(%ebp),%eax
 854897b:	89 04 24             	mov    %eax,(%esp)
 854897e:	e8 55 39 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8548983:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 854898a:	00 
 854898b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8548992:	00 
 8548993:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854899a:	00 
 854899b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854899e:	89 04 24             	mov    %eax,(%esp)
 85489a1:	e8 b4 3c 13 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85489a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85489a9:	e9 82 02 00 00       	jmp    8548c30 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1494>
 85489ae:	8b 45 10             	mov    0x10(%ebp),%eax
 85489b1:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 85489b5:	66 85 c0             	test   %ax,%ax
 85489b8:	74 30                	je     85489ea <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x124e>
 85489ba:	80 7d cf 00          	cmpb   $0x0,-0x31(%ebp)
 85489be:	74 15                	je     85489d5 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1239>
 85489c0:	8b 45 14             	mov    0x14(%ebp),%eax
 85489c3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85489ca:	00 
 85489cb:	89 04 24             	mov    %eax,(%esp)
 85489ce:	e8 4d 2f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85489d3:	eb 28                	jmp    85489fd <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1261>
 85489d5:	8b 45 14             	mov    0x14(%ebp),%eax
 85489d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85489df:	00 
 85489e0:	89 04 24             	mov    %eax,(%esp)
 85489e3:	e8 38 2f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85489e8:	eb 13                	jmp    85489fd <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x1261>
 85489ea:	8b 45 14             	mov    0x14(%ebp),%eax
 85489ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85489f4:	00 
 85489f5:	89 04 24             	mov    %eax,(%esp)
 85489f8:	e8 23 2f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85489fd:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548a03:	89 04 24             	mov    %eax,(%esp)
 8548a06:	e8 61 c6 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548a0b:	0f b6 d0             	movzbl %al,%edx
 8548a0e:	8b 45 14             	mov    0x14(%ebp),%eax
 8548a11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548a15:	89 04 24             	mov    %eax,(%esp)
 8548a18:	e8 03 2f b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8548a1d:	8b 45 10             	mov    0x10(%ebp),%eax
 8548a20:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 8548a24:	0f b7 d0             	movzwl %ax,%edx
 8548a27:	8b 45 14             	mov    0x14(%ebp),%eax
 8548a2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548a2e:	89 04 24             	mov    %eax,(%esp)
 8548a31:	e8 6e 14 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8548a36:	8b 45 10             	mov    0x10(%ebp),%eax
 8548a39:	0f b7 40 25          	movzwl 0x25(%eax),%eax
 8548a3d:	66 85 c0             	test   %ax,%ax
 8548a40:	75 23                	jne    8548a65 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x12c9>
 8548a42:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8548a49:	00 
 8548a4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8548a51:	00 
 8548a52:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8548a59:	00 
 8548a5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548a5d:	89 04 24             	mov    %eax,(%esp)
 8548a60:	e8 2b 99 bd ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 8548a65:	0f b6 75 ce          	movzbl -0x32(%ebp),%esi
 8548a69:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548a6f:	89 04 24             	mov    %eax,(%esp)
 8548a72:	e8 f5 c5 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548a77:	0f b6 d8             	movzbl %al,%ebx
 8548a7a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8548a7d:	89 04 24             	mov    %eax,(%esp)
 8548a80:	e8 c3 81 bc ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8548a85:	8b 55 0c             	mov    0xc(%ebp),%edx
 8548a88:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 8548a8e:	89 74 24 10          	mov    %esi,0x10(%esp)
 8548a92:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8548a96:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8548a99:	89 54 24 08          	mov    %edx,0x8(%esp)
 8548a9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548aa1:	89 0c 24             	mov    %ecx,(%esp)
 8548aa4:	e8 f7 c1 13 00       	call   8684ca0 <_ZN15cUserHistoryLog11UpgradeItemEiiib>
 8548aa9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8548aac:	8b 00                	mov    (%eax),%eax
 8548aae:	83 c0 4c             	add    $0x4c,%eax
 8548ab1:	8b 10                	mov    (%eax),%edx
 8548ab3:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8548ab6:	89 04 24             	mov    %eax,(%esp)
 8548ab9:	ff d2                	call   *%edx
 8548abb:	84 c0                	test   %al,%al
 8548abd:	74 3b                	je     8548afa <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x135e>
 8548abf:	0f b6 5d ce          	movzbl -0x32(%ebp),%ebx
 8548ac3:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548ac9:	89 04 24             	mov    %eax,(%esp)
 8548acc:	e8 9b c5 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548ad1:	0f b6 c0             	movzbl %al,%eax
 8548ad4:	8b 55 10             	mov    0x10(%ebp),%edx
 8548ad7:	83 c2 28             	add    $0x28,%edx
 8548ada:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8548ade:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8548ae2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8548ae5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8548ae9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8548aed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548af0:	89 04 24             	mov    %eax,(%esp)
 8548af3:	e8 f6 11 13 00       	call   8679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>
 8548af8:	eb 3e                	jmp    8548b38 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x139c>
 8548afa:	0f b6 75 ce          	movzbl -0x32(%ebp),%esi
 8548afe:	8d 85 df fe ff ff    	lea    -0x121(%ebp),%eax
 8548b04:	89 04 24             	mov    %eax,(%esp)
 8548b07:	e8 60 c5 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548b0c:	0f b6 d8             	movzbl %al,%ebx
 8548b0f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8548b12:	89 04 24             	mov    %eax,(%esp)
 8548b15:	e8 68 62 bd ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 8548b1a:	89 74 24 10          	mov    %esi,0x10(%esp)
 8548b1e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8548b22:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8548b25:	89 54 24 08          	mov    %edx,0x8(%esp)
 8548b29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8548b2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548b30:	89 04 24             	mov    %eax,(%esp)
 8548b33:	e8 b6 11 13 00       	call   8679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>
 8548b38:	8b 85 e1 fe ff ff    	mov    -0x11f(%ebp),%eax
 8548b3e:	85 c0                	test   %eax,%eax
 8548b40:	0f 84 c2 00 00 00    	je     8548c08 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard+0x146c>
 8548b46:	8b 45 10             	mov    0x10(%ebp),%eax
 8548b49:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 8548b4d:	0f b7 c0             	movzwl %ax,%eax
 8548b50:	8b 95 df fe ff ff    	mov    -0x121(%ebp),%edx
 8548b56:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8548b5a:	8b 95 e3 fe ff ff    	mov    -0x11d(%ebp),%edx
 8548b60:	89 54 24 10          	mov    %edx,0x10(%esp)
 8548b64:	8b 95 e7 fe ff ff    	mov    -0x119(%ebp),%edx
 8548b6a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8548b6e:	8b 95 eb fe ff ff    	mov    -0x115(%ebp),%edx
 8548b74:	89 54 24 18          	mov    %edx,0x18(%esp)
 8548b78:	8b 95 ef fe ff ff    	mov    -0x111(%ebp),%edx
 8548b7e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8548b82:	8b 95 f3 fe ff ff    	mov    -0x10d(%ebp),%edx
 8548b88:	89 54 24 20          	mov    %edx,0x20(%esp)
 8548b8c:	8b 95 f7 fe ff ff    	mov    -0x109(%ebp),%edx
 8548b92:	89 54 24 24          	mov    %edx,0x24(%esp)
 8548b96:	8b 95 fb fe ff ff    	mov    -0x105(%ebp),%edx
 8548b9c:	89 54 24 28          	mov    %edx,0x28(%esp)
 8548ba0:	8b 95 ff fe ff ff    	mov    -0x101(%ebp),%edx
 8548ba6:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8548baa:	8b 95 03 ff ff ff    	mov    -0xfd(%ebp),%edx
 8548bb0:	89 54 24 30          	mov    %edx,0x30(%esp)
 8548bb4:	8b 95 07 ff ff ff    	mov    -0xf9(%ebp),%edx
 8548bba:	89 54 24 34          	mov    %edx,0x34(%esp)
 8548bbe:	8b 95 0b ff ff ff    	mov    -0xf5(%ebp),%edx
 8548bc4:	89 54 24 38          	mov    %edx,0x38(%esp)
 8548bc8:	8b 95 0f ff ff ff    	mov    -0xf1(%ebp),%edx
 8548bce:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8548bd2:	8b 95 13 ff ff ff    	mov    -0xed(%ebp),%edx
 8548bd8:	89 54 24 40          	mov    %edx,0x40(%esp)
 8548bdc:	8b 95 17 ff ff ff    	mov    -0xe9(%ebp),%edx
 8548be2:	89 54 24 44          	mov    %edx,0x44(%esp)
 8548be6:	0f b6 95 1b ff ff ff 	movzbl -0xe5(%ebp),%edx
 8548bed:	88 54 24 48          	mov    %dl,0x48(%esp)
 8548bf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8548bf5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8548bfc:	00 
 8548bfd:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8548c00:	89 04 24             	mov    %eax,(%esp)
 8548c03:	e8 a6 74 fb ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 8548c08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8548c0f:	00 
 8548c10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8548c17:	00 
 8548c18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8548c1f:	00 
 8548c20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548c23:	89 04 24             	mov    %eax,(%esp)
 8548c26:	e8 2f 3a 13 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8548c2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8548c30:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8548c33:	83 c4 00             	add    $0x0,%esp
 8548c36:	5b                   	pop    %ebx
 8548c37:	5e                   	pop    %esi
 8548c38:	5f                   	pop    %edi
 8548c39:	5d                   	pop    %ebp
 8548c3a:	c3                   	ret
 8548c3b:	90                   	nop

```

```c
// WongWork::CItemUpgrade::ProcUpgrade @ 0x854779c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgrade
          (CItemUpgrade *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,PacketGuard *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  MSG_ITEM_UPGRADE MVar4;
  byte bVar5;
  uchar uVar6;
  undefined2 uVar7;
  short sVar8;
  CDataManager *pCVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  CReduceUpgradeItemPay *this_00;
  CInventory *pCVar13;
  CValueStatistic *pCVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  Store *this_01;
  longdouble lVar18;
  undefined1 local_2cc [8];
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290;
  upgrade_info_t local_288 [44];
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  undefined2 local_219;
  undefined2 uStack_217;
  undefined2 local_215;
  undefined2 uStack_213;
  undefined4 local_211;
  undefined4 local_20d;
  undefined4 local_209;
  undefined4 local_205;
  undefined4 local_201;
  undefined4 local_1fd;
  undefined4 local_1f9;
  undefined4 local_1f5;
  undefined4 local_1f1;
  undefined4 local_1ed;
  undefined4 local_1e9;
  undefined4 local_1e5;
  undefined4 local_1e1;
  undefined1 local_1dd;
  undefined2 local_1dc;
  undefined2 uStack_1da;
  undefined2 local_1d8;
  undefined2 uStack_1d6;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined2 local_19f;
  undefined2 uStack_19d;
  undefined2 local_19b;
  undefined2 uStack_199;
  undefined4 local_197;
  undefined4 local_193;
  undefined4 local_18f;
  undefined4 local_18b;
  undefined4 local_187;
  undefined4 local_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined4 local_177;
  undefined4 local_173;
  undefined4 local_16f;
  undefined4 local_16b;
  undefined4 local_167;
  undefined1 local_163;
  undefined2 local_162;
  undefined2 uStack_160;
  undefined2 local_15e;
  undefined2 uStack_15c;
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined1 local_126;
  undefined2 local_125;
  undefined2 uStack_123;
  undefined2 uStack_121;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined3 uStack_11d;
  undefined1 uStack_11a;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  undefined4 local_105;
  undefined4 local_101;
  undefined4 local_fd;
  undefined4 local_f9;
  undefined4 local_f5;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined1 local_e9;
  int local_e8;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>> local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  local_d8 [4];
  ulong local_d4;
  undefined1 local_ce [2];
  int local_cc;
  Inven_Item local_91 [61];
  int local_54;
  CItem *local_50;
  char local_49;
  upgrade_table_t *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  bool local_36;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  int local_20;
  
  local_54 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_125,local_54);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_125);
  if (cVar3 != '\0') {
    return 4;
  }
  if (CONCAT22(uStack_121,uStack_123) != *(int *)(param_2 + 0x1d)) {
    return 4;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_162);
  CInventory::GetInvenSlot((int)local_2cc,local_54);
  local_162 = (undefined2)local_2cc._0_4_;
  uStack_160 = SUB42(local_2cc._0_4_,2);
  local_15e = (undefined2)local_2cc._4_4_;
  uStack_15c = SUB42(local_2cc._4_4_,2);
  local_15a = local_2c4;
  local_156 = local_2c0;
  local_152 = local_2bc;
  local_14e = local_2b8;
  local_14a = local_2b4;
  local_146 = local_2b0;
  local_142 = local_2ac;
  local_13e = local_2a8;
  local_13a = local_2a4;
  local_136 = local_2a0;
  local_132 = local_29c;
  local_12e = local_298;
  local_12a = local_294;
  local_126 = local_290;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_162);
  if (cVar3 != '\0') {
    return 0x16;
  }
  cVar3 = Event_Upgrade_Jar::CheckMaxLuckyLevel
                    (GlobalData::s_pEvent_UpGrade_Jar,(Inven_Item *)&local_125,
                     CONCAT22(local_15e,uStack_160));
  if (cVar3 != '\x01') {
    return 0x3f4;
  }
  Event_Upgrade_Jar::CheckMaterialIndex
            (GlobalData::s_pEvent_UpGrade_Jar,CONCAT22(local_15e,uStack_160));
  local_e0 = 0;
  uVar7 = _getUpgradeCountByUpgradeItem
                    (this,(Inven_Item *)&local_125,(Inven_Item *)&local_162,(ENUM_ERROR *)&local_e0)
  ;
  *(undefined2 *)(param_2 + 0x25) = uVar7;
  if (local_e0 != 0) {
    return local_e0;
  }
  MVar4 = (MSG_ITEM_UPGRADE)
          _getUpgradeRateByUpgradeItem
                    (this,(Inven_Item *)&local_125,(Inven_Item *)&local_162,(ENUM_ERROR *)&local_e0)
  ;
  param_2[0x27] = MVar4;
  if (local_e0 != 0) {
    return local_e0;
  }
  iVar10 = CONCAT22(uStack_121,uStack_123);
  pCVar9 = (CDataManager *)G_CDataManager();
  local_50 = (CItem *)CDataManager::find_item(pCVar9,iVar10);
  if (local_50 == (CItem *)0x0) {
    return 4;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_19f);
  local_49 = '\0';
  if (*(short *)(param_2 + 0x21) == -1) goto LAB_08547c80;
  cVar3 = (**(code **)(*(int *)local_50 + 0x44))(local_50);
  if (cVar3 != '\x01') {
    return 0xea;
  }
  CInventory::GetInvenSlot((int)local_2cc,local_54);
  local_19f = (undefined2)local_2cc._0_4_;
  uStack_19d = SUB42(local_2cc._0_4_,2);
  local_19b = (undefined2)local_2cc._4_4_;
  uStack_199 = SUB42(local_2cc._4_4_,2);
  local_197 = local_2c4;
  local_193 = local_2c0;
  local_18f = local_2bc;
  local_18b = local_2b8;
  local_187 = local_2b4;
  local_183 = local_2b0;
  local_17f = local_2ac;
  local_17b = local_2a8;
  local_177 = local_2a4;
  local_173 = local_2a0;
  local_16f = local_29c;
  local_16b = local_298;
  local_167 = local_294;
  local_163 = local_290;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_19f);
  if (cVar3 != '\0') {
    return 4;
  }
  local_34 = G_CDataManager();
  local_34 = local_34 + 0x4d0;
  local_dc = CONCAT22(local_19b,uStack_19d);
  std::
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  ::find((uint *)local_e4);
  std::
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  ::end(local_d8);
  cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
          operator==(local_e4,(_Rb_tree_iterator *)local_d8);
  if (cVar3 != '\0') {
    return 9;
  }
  bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
  iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
           operator->(local_e4);
  if (bVar5 < *(byte *)(iVar10 + 4)) {
LAB_08547c51:
    bVar1 = true;
  }
  else {
    bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
    iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
             operator->(local_e4);
    if (*(byte *)(iVar10 + 5) < bVar5) goto LAB_08547c51;
    bVar1 = false;
  }
  if (bVar1) {
    return 8;
  }
  iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
           operator->(local_e4);
  local_49 = *(char *)(iVar10 + 6);
LAB_08547c80:
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_115 + 1));
  if (cVar3 == '\0') {
    local_48 = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
  }
  else {
    local_48 = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
  }
  upgrade_info_t::upgrade_info_t(local_288);
  iVar10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = _GetUpgradeInfo(this,(Inven_Item *)&local_125,local_50,local_48,local_288,iVar10);
  if (cVar3 == '\x01') {
    if (*(short *)(param_2 + 0x25) != 0) {
      local_254 = 0;
      local_258 = 1;
      local_25c = CONCAT22(local_15e,uStack_160);
    }
    cVar3 = _CheckTargetUsableLv(this,(Inven_Item *)&local_162,(Inven_Item *)&local_125);
    if (cVar3 == '\x01') {
      local_40 = _ProcPortableUpgradeItem
                           (this,(Inven_Item *)&local_162,(Inven_Item *)&local_125,local_288);
      if (local_40 == 0) {
        if ((CONCAT22(local_19b,uStack_19d) == 0x28d30e) ||
           (CONCAT22(local_19b,uStack_19d) == 0x28d30f)) {
          local_254 = 0;
        }
        local_44 = local_40;
        uVar6 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
        Event_Upgrade_Jar::SettingRecipeNUpConunt
                  (GlobalData::s_pEvent_UpGrade_Jar,CONCAT22(local_15e,uStack_160),local_288,uVar6);
        if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) &&
           (cVar3 = (**(code **)(*(int *)local_50 + 0x30))(local_50), cVar3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_40 = 0x13;
        }
        else {
          if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x1) &&
             (cVar3 = (**(code **)(*(int *)local_50 + 0x34))(local_50), cVar3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_40 = 0x13;
          }
          else {
            if (*(short *)(param_2 + 0x21) != -1) {
              Inven_Item::Inven_Item((Inven_Item *)&local_1dc);
              CInventory::GetInvenSlot((int)local_2cc,local_54);
              local_1dc = (undefined2)local_2cc._0_4_;
              uStack_1da = SUB42(local_2cc._0_4_,2);
              local_1d8 = (undefined2)local_2cc._4_4_;
              uStack_1d6 = SUB42(local_2cc._4_4_,2);
              local_1d4 = local_2c4;
              local_1d0 = local_2c0;
              local_1cc = local_2bc;
              local_1c8 = local_2b8;
              local_1c4 = local_2b4;
              local_1c0 = local_2b0;
              local_1bc = local_2ac;
              local_1b8 = local_2a8;
              local_1b4 = local_2a4;
              local_1b0 = local_2a0;
              local_1ac = local_29c;
              local_1a8 = local_298;
              local_1a4 = local_294;
              local_1a0 = local_290;
              if (CONCAT22(local_1d8,uStack_1da) == 0x28d30f) {
                if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                  local_258 = 0x32;
                }
                else {
                  local_258 = 10;
                }
              }
              else if (CONCAT22(local_1d8,uStack_1da) == 0x28d30e) {
                if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                  local_258 = 100;
                }
                else {
                  local_258 = 0x14;
                }
              }
            }
            local_40 = 0;
            local_40 = _CheckCondition(this,param_1,(Inven_Item *)&local_125,local_50,
                                       (Inven_Item *)&local_162,local_48,local_288);
            if (local_40 == 0) {
              if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) &&
                 (cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_115 + 1)),
                 cVar3 != '\0')) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_40 = 0x17;
              }
              else {
                if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x1) &&
                   (cVar3 = stAmplifyOption_t::hasAbility
                                      ((stAmplifyOption_t *)((int)&local_115 + 1)), cVar3 != '\x01')
                   ) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  local_40 = 0x17;
                }
                else {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  local_3c = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                  local_3c = local_3c & 0xff;
                  local_36 = false;
                  local_35 = '\0';
                  if (*(short *)(param_2 + 0x25) == 0) {
                    local_36 = (bool)_DoProcUpgrade(this,param_1,(Inven_Item *)&local_125,local_288)
                    ;
                    local_30 = 0;
                    piVar12 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32)
                    ;
                    cVar3 = (**(code **)(*piVar12 + 0x34))(piVar12,0);
                    if ((cVar3 == '\0') ||
                       (cVar3 = stAmplifyOption_t::hasAbility
                                          ((stAmplifyOption_t *)((int)&local_115 + 1)),
                       cVar3 == '\x01')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      this_00 = (CReduceUpgradeItemPay *)
                                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
                      local_24 = CReduceUpgradeItemPay::GetReduceRate(this_00);
                      if ((0 < local_24) &&
                         (local_30 = local_254 - (local_254 * local_24) / 100, local_30 < 0)) {
                        local_30 = 0;
                      }
                    }
                    else {
                      local_30 = local_254;
                    }
                    iVar10 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    CInventory::GetInvenSlot((int)local_ce,iVar10);
                    local_2c = local_cc;
                    pCVar9 = (CDataManager *)G_CDataManager();
                    local_28 = (CEquipItem *)CDataManager::find_item(pCVar9,local_2c);
                    iVar10 = local_30;
                    if (local_28 != (CEquipItem *)0x0) {
                      lVar18 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_28);
                      local_30 = (int)ROUND((lVar18 * (longdouble)iVar10) /
                                            (longdouble)_DAT_08c9d304 + (longdouble)iVar10);
                    }
                    cVar3 = stAmplifyOption_t::hasAbility
                                      ((stAmplifyOption_t *)((int)&local_115 + 1));
                    if (cVar3 == '\0') {
                      pCVar13 = (CInventory *)
                                CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      cVar3 = CInventory::use_money(pCVar13,local_30,0xd,1);
                      if (cVar3 != '\x01') {
                        return 10;
                      }
                    }
                    else {
                      pCVar13 = (CInventory *)
                                CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      cVar3 = CInventory::use_money(pCVar13,local_30,0x2e,1);
                      if (cVar3 != '\x01') {
                        return 10;
                      }
                    }
                  }
                  else {
                    local_36 = true;
                    local_d4 = 99;
                    uVar11 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_d4);
                    if (uVar11 < (byte)param_2[0x27]) {
                      Inven_Item::SetUpgrade
                                ((Inven_Item *)&local_125,(uchar)*(undefined2 *)(param_2 + 0x25));
                      local_35 = '\x01';
                    }
                    else {
                      Inven_Item::SetUpgrade((Inven_Item *)&local_125,(uchar)local_3c);
                      local_35 = '\0';
                    }
                  }
                  if (*(short *)(param_2 + 0x21) != -1) {
                    Inven_Item::Inven_Item((Inven_Item *)&local_219);
                    CInventory::GetInvenSlot((int)local_2cc,local_54);
                    local_219 = (undefined2)local_2cc._0_4_;
                    uStack_217 = SUB42(local_2cc._0_4_,2);
                    local_215 = (undefined2)local_2cc._4_4_;
                    uStack_213 = SUB42(local_2cc._4_4_,2);
                    local_211 = local_2c4;
                    local_20d = local_2c0;
                    local_209 = local_2bc;
                    local_205 = local_2b8;
                    local_201 = local_2b4;
                    local_1fd = local_2b0;
                    local_1f9 = local_2ac;
                    local_1f5 = local_2a8;
                    local_1f1 = local_2a4;
                    local_1ed = local_2a0;
                    local_1e9 = local_29c;
                    local_1e5 = local_298;
                    local_1e1 = local_294;
                    local_1dd = local_290;
                    if (CONCAT22(local_215,uStack_217) == 0x28d30f) {
                      if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                        local_258 = 0x32;
                      }
                      else {
                        local_258 = 10;
                      }
                    }
                    else if (CONCAT22(local_215,uStack_217) == 0x28d30e) {
                      if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                        local_258 = 100;
                      }
                      else {
                        local_258 = 0x14;
                      }
                    }
                    uVar7 = *(undefined2 *)(param_2 + 0x21);
                    pCVar13 = (CInventory *)
                              CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar3 = CInventory::delete_item(pCVar13,1,uVar7,1,3,1);
                    if (cVar3 != '\x01') {
                      return 0x11;
                    }
                    cUserHistoryLog::apply_Item
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_19b,uStack_19d)
                               ,CONCAT22(uStack_121,uStack_123),0);
                  }
                  uVar2 = local_258;
                  uVar7 = *(undefined2 *)(param_2 + 0x23);
                  pCVar13 = (CInventory *)
                            CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  cVar3 = CInventory::delete_item(pCVar13,1,uVar7,uVar2,0xc,1);
                  if (cVar3 == '\x01') {
                    if (*(short *)(param_2 + 0x25) != 0) {
                      cUserHistoryLog::apply_Item
                                ((cUserHistoryLog *)(param_1 + 0x79700),
                                 CONCAT22(local_15e,uStack_160),CONCAT22(uStack_121,uStack_123),1);
                    }
                    iVar10 = local_254;
                    pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
                    CValueStatistic::AddValueStatistic(pCVar14,0xe,param_1,iVar10);
                    InterfacePacketBuf::put_byte
                              ((InterfacePacketBuf *)param_3,(uint)(byte)param_2[0x1a]);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x23));
                    iVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    CInventory::GetInvenSlot((int)local_91,iVar10);
                    iVar10 = Inven_Item::get_add_info(local_91);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar10);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x21));
                    if (*(short *)(param_2 + 0x25) == 0) {
                      cVar3 = Event_Upgrade_Jar::isNewNPC(GlobalData::s_pEvent_UpGrade_Jar);
                      if (cVar3 == '\0') {
                        cVar3 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
                        if (cVar3 == '\0') {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                        }
                        else {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,3);
                        }
                      }
                      else {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,2);
                      }
                    }
                    else {
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                    }
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)(char)local_3c);
                    uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    if ((*(int *)(local_48 + 0x234) <= (int)(uVar11 & 0xff)) &&
                       ((*(short *)(param_2 + 0x25) == 0 || (local_35 != '\0')))) {
                      _NoticeUpgrade(this,param_1,(Inven_Item *)&local_125,local_36);
                    }
                    bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    bVar1 = local_36;
                    if (0xc < bVar5) {
                      uVar15 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      pcVar16 = (char *)CUserCharacInfo::getCurCharacName
                                                  ((CUserCharacInfo *)param_1);
                      uVar17 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar11 = CONCAT22(uStack_121,uStack_123);
                      iVar10 = G_CEnvironment();
                      DB_ReqItemUpgradeLog::makeRequest
                                (*(uint *)(iVar10 + 0x378),uVar11,uVar17,pcVar16,uVar15 & 0xff,bVar1
                                );
                    }
                    if (local_36 == true) {
                      if (*(short *)(param_2 + 0x25) == 0) {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                      }
                      else if (local_35 == '\0') {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                      }
                      else {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                      }
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,uVar11 & 0xff);
                      InterfacePacketBuf::put_short
                                ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x1b));
                      if (*(short *)(param_2 + 0x25) == 0) {
                        APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0xc,0,0);
                      }
                    }
                    else {
                      local_e8 = 0;
                      sVar8 = (short)_uStack_11e;
                      this_01 = (Store *)G_Store();
                      Store::GetSellItemPrice
                                (this_01,(Inven_Item *)&local_125,local_50,sVar8,false,&local_e8);
                      iVar10 = local_e8;
                      pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
                      CValueStatistic::AddValueStatistic(pCVar14,0xf,param_1,iVar10);
                      local_20 = 0;
                      local_20 = _ProcPenalty(this,param_1,(Inven_Item *)&local_125,local_50,
                                              *(ushort *)(param_2 + 0x1b),local_48,local_288,param_3
                                              ,(Inven_Item *)&local_19f,local_49);
                      if (local_20 != 0) {
                        if (local_20 != 0xd8) {
                          return local_20;
                        }
                        CUser::SendUpdateItem(param_1,1,0,*(undefined2 *)(param_2 + 0x23));
                        CUser::SendUpdateItemList(param_1,1,0,0);
                        return local_20;
                      }
                    }
                    bVar1 = local_36;
                    uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    iVar10 = CItem::get_index(local_50);
                    cUserHistoryLog::UpgradeItem
                              ((cUserHistoryLog *)(param_1 + 0x79700),iVar10,local_3c,uVar11 & 0xff,
                               bVar1);
                    cVar3 = (**(code **)(*(int *)local_50 + 0x4c))(local_50);
                    bVar1 = local_36;
                    if (cVar3 == '\0') {
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      pcVar16 = (char *)CItem::GetItemName(local_50);
                      CUser::makeGuildItemUpgradMessage
                                (param_1,pcVar16,local_3c,uVar11 & 0xff,bVar1);
                    }
                    else {
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      CUser::makeGuildItemUpgradMessage
                                (param_1,(char *)(param_2 + 0x28),local_3c,uVar11 & 0xff,bVar1);
                    }
                    if (CONCAT22(uStack_121,uStack_123) != 0) {
                      CInventory::update_item
                                (local_54,1,*(undefined2 *)(param_2 + 0x1b),
                                 CONCAT22(uStack_123,local_125),
                                 CONCAT13(uStack_11e,CONCAT12(uStack_11f,uStack_121)),
                                 CONCAT13(uStack_11a,uStack_11d),local_119,local_115,local_111,
                                 local_10d,local_109,local_105,local_101,local_fd,local_f9,local_f5,
                                 local_f1,local_ed,local_e9);
                    }
                    CUser::SendUpdateItemList(param_1,1,0,0);
                    local_40 = 0;
                  }
                  else {
                    local_40 = 0x11;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_40 = 0x13;
    }
  }
  else {
    local_40 = 0xd;
  }
  return local_40;
}

```

---

## ProcUpgradeChronicle

```asm
// === 085491d6 WongWork::CItemUpgrade::ProcUpgradeChronicle  [0x085491d6-0x8549779] ===
 85491d6:	55                   	push   %ebp
 85491d7:	89 e5                	mov    %esp,%ebp
 85491d9:	56                   	push   %esi
 85491da:	53                   	push   %ebx
 85491db:	81 ec 80 ca 00 00    	sub    $0xca80,%esp
 85491e1:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85491e4:	8b 55 18             	mov    0x18(%ebp),%edx
 85491e7:	8b 45 20             	mov    0x20(%ebp),%eax
 85491ea:	66 89 8d e4 35 ff ff 	mov    %cx,-0xca1c(%ebp)
 85491f1:	66 89 95 e0 35 ff ff 	mov    %dx,-0xca20(%ebp)
 85491f8:	88 85 dc 35 ff ff    	mov    %al,-0xca24(%ebp)
 85491fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549201:	89 04 24             	mov    %eax,(%esp)
 8549204:	e8 85 10 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8549209:	89 45 c0             	mov    %eax,-0x40(%ebp)
 854920c:	0f bf 95 e4 35 ff ff 	movswl -0xca1c(%ebp),%edx
 8549213:	8d 85 67 ff ff ff    	lea    -0x99(%ebp),%eax
 8549219:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854921d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8549224:	00 
 8549225:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8549228:	89 54 24 04          	mov    %edx,0x4(%esp)
 854922c:	89 04 24             	mov    %eax,(%esp)
 854922f:	e8 e4 26 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8549234:	83 ec 04             	sub    $0x4,%esp
 8549237:	0f bf 95 e0 35 ff ff 	movswl -0xca20(%ebp),%edx
 854923e:	8d 85 2a ff ff ff    	lea    -0xd6(%ebp),%eax
 8549244:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8549248:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854924f:	00 
 8549250:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8549253:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549257:	89 04 24             	mov    %eax,(%esp)
 854925a:	e8 b9 26 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 854925f:	83 ec 04             	sub    $0x4,%esp
 8549262:	8b 85 69 ff ff ff    	mov    -0x97(%ebp),%eax
 8549268:	89 c3                	mov    %eax,%ebx
 854926a:	e8 2c 2f b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854926f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8549273:	89 04 24             	mov    %eax,(%esp)
 8549276:	e8 b7 67 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854927b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 854927e:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8549284:	89 c3                	mov    %eax,%ebx
 8549286:	e8 10 2f b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854928b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854928f:	89 04 24             	mov    %eax,(%esp)
 8549292:	e8 9b 67 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8549297:	89 45 c8             	mov    %eax,-0x38(%ebp)
 854929a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 854929d:	89 04 24             	mov    %eax,(%esp)
 85492a0:	e8 83 22 00 00       	call   854b528 <_ZN10CEquipItem25GetEmancipateMaterialListEv>
 85492a5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85492a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85492ab:	89 04 24             	mov    %eax,(%esp)
 85492ae:	e8 cb 0f b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85492b3:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85492b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85492ba:	89 04 24             	mov    %eax,(%esp)
 85492bd:	e8 0a e8 fb ff       	call   8507acc <_ZNK10CInventory17CheckNeedItemListERKSt6vectorISt4pairIiiESaIS2_EE>
 85492c2:	83 f0 01             	xor    $0x1,%eax
 85492c5:	84 c0                	test   %al,%al
 85492c7:	74 0a                	je     85492d3 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0xfd>
 85492c9:	bb 16 00 00 00       	mov    $0x16,%ebx
 85492ce:	e9 9a 04 00 00       	jmp    854976d <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x597>
 85492d3:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 85492d9:	89 04 24             	mov    %eax,(%esp)
 85492dc:	e8 4b 42 ce ff       	call   822d52c <_ZN10CInventoryC1Ev>
 85492e1:	8d 85 f5 35 ff ff    	lea    -0xca0b(%ebp),%eax
 85492e7:	89 04 24             	mov    %eax,(%esp)
 85492ea:	e8 c9 40 ce ff       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 85492ef:	8d 85 f5 35 ff ff    	lea    -0xca0b(%ebp),%eax
 85492f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85492f9:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 85492ff:	89 04 24             	mov    %eax,(%esp)
 8549302:	e8 ef 41 ce ff       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 8549307:	8b 45 0c             	mov    0xc(%ebp),%eax
 854930a:	89 04 24             	mov    %eax,(%esp)
 854930d:	e8 b8 70 c3 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 8549312:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549316:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 854931c:	89 04 24             	mov    %eax,(%esp)
 854931f:	e8 f0 0f fb ff       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 8549324:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8549327:	89 44 24 04          	mov    %eax,0x4(%esp)
 854932b:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 8549331:	89 04 24             	mov    %eax,(%esp)
 8549334:	e8 a1 c5 fb ff       	call   85058da <_ZN10CInventory19tryDeleteEventItemsERKSt6vectorISt4pairIiiESaIS2_EE>
 8549339:	83 f0 01             	xor    $0x1,%eax
 854933c:	84 c0                	test   %al,%al
 854933e:	74 0a                	je     854934a <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x174>
 8549340:	bb 11 00 00 00       	mov    $0x11,%ebx
 8549345:	e9 15 04 00 00       	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 854934a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854934d:	89 04 24             	mov    %eax,(%esp)
 8549350:	e8 39 0f b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8549355:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 854935c:	00 
 854935d:	c7 44 24 14 0c 00 00 	movl   $0xc,0x14(%esp)
 8549364:	00 
 8549365:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 854936c:	00 
 854936d:	8d 55 bb             	lea    -0x45(%ebp),%edx
 8549370:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8549374:	8b 55 24             	mov    0x24(%ebp),%edx
 8549377:	89 54 24 08          	mov    %edx,0x8(%esp)
 854937b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 854937e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549382:	89 04 24             	mov    %eax,(%esp)
 8549385:	e8 2a ca fb ff       	call   8505db4 <_ZN10CInventory18delete_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEERb15eMoneySubReason14eItemDelReasonb>
 854938a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 854938d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8549394:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 854939b:	e8 e7 87 16 00       	call   86b1b87 <_Z12get_rand_inti>
 85493a0:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85493a3:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85493a7:	78 4e                	js     85493f7 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x221>
 85493a9:	83 7d d8 63          	cmpl   $0x63,-0x28(%ebp)
 85493ad:	7f 48                	jg     85493f7 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x221>
 85493af:	80 bd dc 35 ff ff 00 	cmpb   $0x0,-0xca24(%ebp)
 85493b6:	78 3f                	js     85493f7 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x221>
 85493b8:	80 bd dc 35 ff ff 04 	cmpb   $0x4,-0xca24(%ebp)
 85493bf:	7f 36                	jg     85493f7 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x221>
 85493c1:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 85493c4:	e8 d2 2d b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85493c9:	89 c1                	mov    %eax,%ecx
 85493cb:	0f be 95 dc 35 ff ff 	movsbl -0xca24(%ebp),%edx
 85493d2:	89 d0                	mov    %edx,%eax
 85493d4:	01 c0                	add    %eax,%eax
 85493d6:	01 d0                	add    %edx,%eax
 85493d8:	c1 e0 02             	shl    $0x2,%eax
 85493db:	05 50 4d 00 00       	add    $0x4d50,%eax
 85493e0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85493e3:	83 c0 0c             	add    $0xc,%eax
 85493e6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85493ea:	89 04 24             	mov    %eax,(%esp)
 85493ed:	e8 72 91 b9 ff       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 85493f2:	8b 00                	mov    (%eax),%eax
 85493f4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85493f7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85493fa:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85493fd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8549400:	89 04 24             	mov    %eax,(%esp)
 8549403:	e8 e0 20 00 00       	call   854b4e8 <_ZN14CStackableItem13GetEmancipateEv>
 8549408:	98                   	cwtl
 8549409:	89 45 e0             	mov    %eax,-0x20(%ebp)
 854940c:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 8549410:	75 3e                	jne    8549450 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x27a>
 8549412:	0f bf 9d e0 35 ff ff 	movswl -0xca20(%ebp),%ebx
 8549419:	8b 45 0c             	mov    0xc(%ebp),%eax
 854941c:	89 04 24             	mov    %eax,(%esp)
 854941f:	e8 5a 0e b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8549424:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8549427:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854942b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854942f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8549436:	00 
 8549437:	89 04 24             	mov    %eax,(%esp)
 854943a:	e8 91 ef fb ff       	call   85083d0 <_ZNK10CInventory27CheckEquipmentItemConditionE10INVEN_TYPEsR28stEquipConditionForChronicle>
 854943f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8549442:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8549446:	74 08                	je     8549450 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x27a>
 8549448:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 854944b:	e9 0f 03 00 00       	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 8549450:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8549453:	89 04 24             	mov    %eax,(%esp)
 8549456:	e8 db 20 00 00       	call   854b536 <_ZN10CEquipItem23GetEmancipateResultListEv>
 854945b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854945e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8549461:	89 04 24             	mov    %eax,(%esp)
 8549464:	e8 ab 43 b9 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8549469:	83 f8 01             	cmp    $0x1,%eax
 854946c:	0f 97 c0             	seta   %al
 854946f:	84 c0                	test   %al,%al
 8549471:	74 0a                	je     854947d <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x2a7>
 8549473:	bb 11 00 00 00       	mov    $0x11,%ebx
 8549478:	e9 e2 02 00 00       	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 854947d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8549480:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8549483:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549487:	89 04 24             	mov    %eax,(%esp)
 854948a:	e8 23 41 b9 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 854948f:	83 ec 04             	sub    $0x4,%esp
 8549492:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8549495:	89 04 24             	mov    %eax,(%esp)
 8549498:	e8 5f 41 b9 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 854949d:	8b 50 04             	mov    0x4(%eax),%edx
 85494a0:	8b 00                	mov    (%eax),%eax
 85494a2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 85494a5:	89 55 a8             	mov    %edx,-0x58(%ebp)
 85494a8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85494ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85494ae:	8b 45 a8             	mov    -0x58(%ebp),%eax
 85494b1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85494b4:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 85494b8:	76 0a                	jbe    85494c4 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x2ee>
 85494ba:	bb 11 00 00 00       	mov    $0x11,%ebx
 85494bf:	e9 9b 02 00 00       	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 85494c4:	c7 45 f0 0b 00 00 00 	movl   $0xb,-0x10(%ebp)
 85494cb:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85494ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85494d1:	89 04 24             	mov    %eax,(%esp)
 85494d4:	e8 a5 0d b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85494d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85494dd:	89 04 24             	mov    %eax,(%esp)
 85494e0:	e8 ed 83 fb ff       	call   85018d2 <_ZNK10CInventory11GetItemTypeEi>
 85494e5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85494e8:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 85494ec:	74 0a                	je     85494f8 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x322>
 85494ee:	bb 11 00 00 00       	mov    $0x11,%ebx
 85494f3:	e9 67 02 00 00       	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 85494f8:	8d 85 ed fe ff ff    	lea    -0x113(%ebp),%eax
 85494fe:	89 04 24             	mov    %eax,(%esp)
 8549501:	e8 4e 23 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8549506:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8549509:	89 85 ef fe ff ff    	mov    %eax,-0x111(%ebp)
 854950f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8549512:	8b 00                	mov    (%eax),%eax
 8549514:	83 c0 08             	add    $0x8,%eax
 8549517:	8b 10                	mov    (%eax),%edx
 8549519:	8d 85 ed fe ff ff    	lea    -0x113(%ebp),%eax
 854951f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549523:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8549526:	89 04 24             	mov    %eax,(%esp)
 8549529:	ff d2                	call   *%edx
 854952b:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
 854952f:	75 61                	jne    8549592 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x3bc>
 8549531:	0f b6 45 ac          	movzbl -0x54(%ebp),%eax
 8549535:	3c 1e                	cmp    $0x1e,%al
 8549537:	77 19                	ja     8549552 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x37c>
 8549539:	0f b6 45 ac          	movzbl -0x54(%ebp),%eax
 854953d:	0f b6 c0             	movzbl %al,%eax
 8549540:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549544:	8d 85 ed fe ff ff    	lea    -0x113(%ebp),%eax
 854954a:	89 04 24             	mov    %eax,(%esp)
 854954d:	e8 aa 7a ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8549552:	0f b6 45 ad          	movzbl -0x53(%ebp),%eax
 8549556:	84 c0                	test   %al,%al
 8549558:	74 2f                	je     8549589 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x3b3>
 854955a:	0f b6 45 ae          	movzbl -0x52(%ebp),%eax
 854955e:	84 c0                	test   %al,%al
 8549560:	74 27                	je     8549589 <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x3b3>
 8549562:	0f b7 45 b0          	movzwl -0x50(%ebp),%eax
 8549566:	0f b7 d0             	movzwl %ax,%edx
 8549569:	0f b6 45 ae          	movzbl -0x52(%ebp),%eax
 854956d:	0f b6 c0             	movzbl %al,%eax
 8549570:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549574:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549578:	8d 85 ed fe ff ff    	lea    -0x113(%ebp),%eax
 854957e:	83 c0 11             	add    $0x11,%eax
 8549581:	89 04 24             	mov    %eax,(%esp)
 8549584:	e8 5b ab f6 ff       	call   84b40e4 <_ZN17stAmplifyOption_t6assignEht>
 8549589:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 854958c:	89 85 fa fe ff ff    	mov    %eax,-0x106(%ebp)
 8549592:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8549595:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 854959b:	0f bf 9d e0 35 ff ff 	movswl -0xca20(%ebp),%ebx
 85495a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85495a5:	89 04 24             	mov    %eax,(%esp)
 85495a8:	e8 e1 0c b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85495ad:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85495b4:	00 
 85495b5:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 85495bc:	00 
 85495bd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85495c4:	00 
 85495c5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85495c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85495d0:	00 
 85495d1:	89 04 24             	mov    %eax,(%esp)
 85495d4:	e8 33 aa fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85495d9:	0f bf 85 e0 35 ff ff 	movswl -0xca20(%ebp),%eax
 85495e0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85495e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85495eb:	00 
 85495ec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85495f3:	00 
 85495f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85495f7:	89 04 24             	mov    %eax,(%esp)
 85495fa:	e8 d9 2c 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85495ff:	0f bf 9d e4 35 ff ff 	movswl -0xca1c(%ebp),%ebx
 8549606:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549609:	89 04 24             	mov    %eax,(%esp)
 854960c:	e8 7d 0c b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8549611:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8549618:	00 
 8549619:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 8549620:	00 
 8549621:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8549628:	00 
 8549629:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854962d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8549634:	00 
 8549635:	89 04 24             	mov    %eax,(%esp)
 8549638:	e8 cf a9 fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 854963d:	0f bf 9d e0 35 ff ff 	movswl -0xca20(%ebp),%ebx
 8549644:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549647:	89 04 24             	mov    %eax,(%esp)
 854964a:	e8 3f 0c b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854964f:	c7 44 24 50 09 00 00 	movl   $0x9,0x50(%esp)
 8549656:	00 
 8549657:	c7 44 24 4c 07 00 00 	movl   $0x7,0x4c(%esp)
 854965e:	00 
 854965f:	89 5c 24 48          	mov    %ebx,0x48(%esp)
 8549663:	c7 44 24 44 01 00 00 	movl   $0x1,0x44(%esp)
 854966a:	00 
 854966b:	8b 95 ed fe ff ff    	mov    -0x113(%ebp),%edx
 8549671:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549675:	8b 95 f1 fe ff ff    	mov    -0x10f(%ebp),%edx
 854967b:	89 54 24 08          	mov    %edx,0x8(%esp)
 854967f:	8b 95 f5 fe ff ff    	mov    -0x10b(%ebp),%edx
 8549685:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8549689:	8b 95 f9 fe ff ff    	mov    -0x107(%ebp),%edx
 854968f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8549693:	8b 95 fd fe ff ff    	mov    -0x103(%ebp),%edx
 8549699:	89 54 24 14          	mov    %edx,0x14(%esp)
 854969d:	8b 95 01 ff ff ff    	mov    -0xff(%ebp),%edx
 85496a3:	89 54 24 18          	mov    %edx,0x18(%esp)
 85496a7:	8b 95 05 ff ff ff    	mov    -0xfb(%ebp),%edx
 85496ad:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85496b1:	8b 95 09 ff ff ff    	mov    -0xf7(%ebp),%edx
 85496b7:	89 54 24 20          	mov    %edx,0x20(%esp)
 85496bb:	8b 95 0d ff ff ff    	mov    -0xf3(%ebp),%edx
 85496c1:	89 54 24 24          	mov    %edx,0x24(%esp)
 85496c5:	8b 95 11 ff ff ff    	mov    -0xef(%ebp),%edx
 85496cb:	89 54 24 28          	mov    %edx,0x28(%esp)
 85496cf:	8b 95 15 ff ff ff    	mov    -0xeb(%ebp),%edx
 85496d5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 85496d9:	8b 95 19 ff ff ff    	mov    -0xe7(%ebp),%edx
 85496df:	89 54 24 30          	mov    %edx,0x30(%esp)
 85496e3:	8b 95 1d ff ff ff    	mov    -0xe3(%ebp),%edx
 85496e9:	89 54 24 34          	mov    %edx,0x34(%esp)
 85496ed:	8b 95 21 ff ff ff    	mov    -0xdf(%ebp),%edx
 85496f3:	89 54 24 38          	mov    %edx,0x38(%esp)
 85496f7:	8b 95 25 ff ff ff    	mov    -0xdb(%ebp),%edx
 85496fd:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8549701:	0f b6 95 29 ff ff ff 	movzbl -0xd7(%ebp),%edx
 8549708:	88 54 24 40          	mov    %dl,0x40(%esp)
 854970c:	89 04 24             	mov    %eax,(%esp)
 854970f:	e8 d4 a2 fb ff       	call   85039e8 <_ZN10CInventory24insert_item_special_slotE10Inven_Itemii15eMoneyAddReason14eItemAddReason>
 8549714:	0f bf 85 e0 35 ff ff 	movswl -0xca20(%ebp),%eax
 854971b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854971f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8549726:	00 
 8549727:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854972e:	00 
 854972f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549732:	89 04 24             	mov    %eax,(%esp)
 8549735:	e8 9e 2b 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 854973a:	bb 00 00 00 00       	mov    $0x0,%ebx
 854973f:	eb 1e                	jmp    854975f <_ZN8WongWork12CItemUpgrade20ProcUpgradeChronicleEP5CUsersjsjcRSt6vectorIiSaIiEE+0x589>
 8549741:	89 d3                	mov    %edx,%ebx
 8549743:	89 c6                	mov    %eax,%esi
 8549745:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 854974b:	89 04 24             	mov    %eax,(%esp)
 854974e:	e8 ad 3e ce ff       	call   822d600 <_ZN10CInventoryD1Ev>
 8549753:	89 f0                	mov    %esi,%eax
 8549755:	89 da                	mov    %ebx,%edx
 8549757:	89 04 24             	mov    %eax,(%esp)
 854975a:	e8 f1 9f 59 00       	call   8ae3750 <_Unwind_Resume>
 854975f:	8d 85 34 f7 ff ff    	lea    -0x8cc(%ebp),%eax
 8549765:	89 04 24             	mov    %eax,(%esp)
 8549768:	e8 93 3e ce ff       	call   822d600 <_ZN10CInventoryD1Ev>
 854976d:	89 d8                	mov    %ebx,%eax
 854976f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8549772:	83 c4 00             	add    $0x0,%esp
 8549775:	5b                   	pop    %ebx
 8549776:	5e                   	pop    %esi
 8549777:	5d                   	pop    %ebp
 8549778:	c3                   	ret
 8549779:	90                   	nop

```

```c
// WongWork::CItemUpgrade::ProcUpgradeChronicle @ 0x85491d6

/* WongWork::CItemUpgrade::ProcUpgradeChronicle(CUser*, short, unsigned int, short, unsigned int,
   char, std::vector<int, std::allocator<int> >&) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgradeChronicle
          (CItemUpgrade *this,CUser *param_1,short param_2,uint param_3,short param_4,uint param_5,
          char param_6,vector *param_7)

{
  char cVar1;
  short sVar2;
  CDataManager *pCVar3;
  CInventory *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  InventoryMemory local_ca0f [49471];
  CInventory local_8d0 [1977];
  undefined2 local_117;
  undefined2 uStack_115;
  undefined2 uStack_113;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined1 uStack_10c;
  undefined4 uStack_10b;
  undefined4 uStack_107;
  undefined4 local_103;
  undefined4 local_ff;
  undefined4 local_fb;
  undefined4 local_f7;
  undefined4 local_f3;
  undefined4 local_ef;
  undefined4 local_eb;
  undefined4 local_e7;
  undefined4 local_e3;
  undefined4 local_df;
  undefined1 local_db;
  undefined1 local_da [2];
  int local_d8;
  undefined1 local_9d [2];
  int local_9b;
  int local_60;
  uint local_5c;
  byte local_58;
  char local_57;
  uchar local_56;
  ushort local_54;
  undefined4 local_50;
  undefined1 local_49;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_48 [4];
  int local_44;
  CStackableItem *local_40;
  CEquipItem *local_3c;
  vector *local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  CStackableItem *local_28;
  int local_24;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_44 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_9d,local_44);
  CInventory::GetInvenSlot((int)local_da,local_44);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_40 = (CStackableItem *)CDataManager::find_item(pCVar3,local_9b);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_3c = (CEquipItem *)CDataManager::find_item(pCVar3,local_d8);
  local_38 = (vector *)CEquipItem::GetEmancipateMaterialList(local_3c);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  cVar1 = CInventory::CheckNeedItemList(pCVar4,local_38);
  if (cVar1 != '\x01') {
    return 0x16;
  }
  CInventory::CInventory(local_8d0);
  InventoryMemory::InventoryMemory(local_ca0f);
  CInventory::SetInventoryMemory(local_8d0,local_ca0f);
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 0854931f to 08549739 has its CatchHandler @ 08549741 */
  CInventory::setCopy(local_8d0,pCVar4);
  cVar1 = CInventory::tryDeleteEventItems(local_8d0,local_38);
  if (cVar1 == '\x01') {
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_34 = CInventory::delete_event_items(pCVar4,local_38,param_7,&local_49,0xc,0xc,0);
    local_30 = 0;
    uVar5 = get_rand_int(100);
    local_2c = uVar5;
    if ((((-1 < (int)uVar5) && ((int)uVar5 < 100)) && (-1 < param_6)) && (param_6 < '\x05')) {
      iVar9 = G_CDataManager();
      puVar6 = (undefined4 *)
               std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                         ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                          (iVar9 + param_6 * 0xc + 0x4d5c),uVar5);
      local_30 = *puVar6;
    }
    local_28 = local_40;
    sVar2 = CStackableItem::GetEmancipate(local_40);
    local_24 = (int)sVar2;
    if (local_24 == 1) {
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar9 = CInventory::CheckEquipmentItemCondition(pCVar4,1,(int)param_4,&local_58);
      local_10 = iVar9;
      if (iVar9 != 0) goto LAB_0854975f;
    }
    local_20 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
               CEquipItem::GetEmancipateResultList(local_3c);
    uVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_20);
    if (uVar5 < 2) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      piVar7 = (int *)__gnu_cxx::
                      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                      ::operator*(local_48);
      local_5c = piVar7[1];
      iVar9 = *piVar7;
      local_60 = iVar9;
      local_1c = iVar9;
      local_18 = local_5c;
      if (local_5c < 2) {
        local_14 = 0xb;
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        local_14 = CInventory::GetItemType(pCVar4,iVar9);
        if (local_14 == 1) {
          Inven_Item::Inven_Item((Inven_Item *)&local_117);
          uStack_115 = (undefined2)local_1c;
          uStack_113 = (undefined2)((uint)local_1c >> 0x10);
          (**(code **)(*(int *)local_3c + 8))(local_3c,&local_117);
          if (local_24 == 1) {
            if (local_58 < 0x1f) {
              Inven_Item::SetUpgrade((Inven_Item *)&local_117,local_58);
            }
            if ((local_57 != '\0') && (local_56 != '\0')) {
              stAmplifyOption_t::assign
                        ((stAmplifyOption_t *)((int)&uStack_107 + 1),local_56,local_54);
            }
            uStack_10b._1_3_ = (undefined3)local_50;
            uStack_107._0_1_ = (undefined1)((uint)local_50 >> 0x18);
          }
          uStack_110 = local_30;
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::delete_item(pCVar4,1,(int)param_4,1,0xc,1);
          CUser::SendUpdateItem(param_1,1,0,(int)param_4);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::delete_item(pCVar4,1,(int)param_2,1,0xc,1);
          uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::insert_item_special_slot
                    (uVar8,CONCAT22(uStack_115,local_117),
                     CONCAT13((undefined1)uStack_110,CONCAT12(uStack_111,uStack_113)),
                     CONCAT13(uStack_10c,uStack_110._1_3_),uStack_10b,uStack_107,local_103,local_ff,
                     local_fb,local_f7,local_f3,local_ef,local_eb,local_e7,local_e3,local_df,
                     local_db,1,(int)param_4,7,9);
          CUser::SendUpdateItem(param_1,1,0,(int)param_4);
          iVar9 = 0;
        }
        else {
          iVar9 = 0x11;
        }
      }
      else {
        iVar9 = 0x11;
      }
    }
    else {
      iVar9 = 0x11;
    }
  }
  else {
    iVar9 = 0x11;
  }
LAB_0854975f:
  CInventory::~CInventory(local_8d0);
  return iVar9;
}

```

---

## ProcUpgrade_0854a1ba

```asm
// === 0854a1ba WongWork::CItemUpgrade::ProcUpgrade  [0x0854a1ba-0x854a915] ===
 854a1ba:	55                   	push   %ebp
 854a1bb:	89 e5                	mov    %esp,%ebp
 854a1bd:	57                   	push   %edi
 854a1be:	56                   	push   %esi
 854a1bf:	53                   	push   %ebx
 854a1c0:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 854a1c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a1c9:	89 04 24             	mov    %eax,(%esp)
 854a1cc:	e8 bd 00 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854a1d1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 854a1d4:	8b 45 10             	mov    0x10(%ebp),%eax
 854a1d7:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a1db:	0f b7 d0             	movzwl %ax,%edx
 854a1de:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 854a1e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854a1e8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854a1ef:	00 
 854a1f0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 854a1f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a1f7:	89 04 24             	mov    %eax,(%esp)
 854a1fa:	e8 19 17 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 854a1ff:	83 ec 04             	sub    $0x4,%esp
 854a202:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 854a208:	89 04 24             	mov    %eax,(%esp)
 854a20b:	e8 56 4b bd ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 854a210:	84 c0                	test   %al,%al
 854a212:	74 0a                	je     854a21e <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x64>
 854a214:	b8 04 00 00 00       	mov    $0x4,%eax
 854a219:	e9 ed 06 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a21e:	8b 95 29 ff ff ff    	mov    -0xd7(%ebp),%edx
 854a224:	8b 45 10             	mov    0x10(%ebp),%eax
 854a227:	8b 40 0f             	mov    0xf(%eax),%eax
 854a22a:	39 c2                	cmp    %eax,%edx
 854a22c:	74 0a                	je     854a238 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x7e>
 854a22e:	b8 04 00 00 00       	mov    $0x4,%eax
 854a233:	e9 d3 06 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a238:	8d 85 ea fe ff ff    	lea    -0x116(%ebp),%eax
 854a23e:	89 04 24             	mov    %eax,(%esp)
 854a241:	e8 0e 16 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 854a246:	8b 45 10             	mov    0x10(%ebp),%eax
 854a249:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 854a24d:	0f b7 d0             	movzwl %ax,%edx
 854a250:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 854a256:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854a25a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854a261:	00 
 854a262:	8b 55 d0             	mov    -0x30(%ebp),%edx
 854a265:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a269:	89 04 24             	mov    %eax,(%esp)
 854a26c:	e8 a7 16 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 854a271:	83 ec 04             	sub    $0x4,%esp
 854a274:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 854a27a:	89 85 ea fe ff ff    	mov    %eax,-0x116(%ebp)
 854a280:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 854a286:	89 85 ee fe ff ff    	mov    %eax,-0x112(%ebp)
 854a28c:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 854a292:	89 85 f2 fe ff ff    	mov    %eax,-0x10e(%ebp)
 854a298:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 854a29e:	89 85 f6 fe ff ff    	mov    %eax,-0x10a(%ebp)
 854a2a4:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 854a2aa:	89 85 fa fe ff ff    	mov    %eax,-0x106(%ebp)
 854a2b0:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 854a2b6:	89 85 fe fe ff ff    	mov    %eax,-0x102(%ebp)
 854a2bc:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 854a2c2:	89 85 02 ff ff ff    	mov    %eax,-0xfe(%ebp)
 854a2c8:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 854a2ce:	89 85 06 ff ff ff    	mov    %eax,-0xfa(%ebp)
 854a2d4:	8b 85 c8 fe ff ff    	mov    -0x138(%ebp),%eax
 854a2da:	89 85 0a ff ff ff    	mov    %eax,-0xf6(%ebp)
 854a2e0:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 854a2e6:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 854a2ec:	8b 85 d0 fe ff ff    	mov    -0x130(%ebp),%eax
 854a2f2:	89 85 12 ff ff ff    	mov    %eax,-0xee(%ebp)
 854a2f8:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 854a2fe:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 854a304:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 854a30a:	89 85 1a ff ff ff    	mov    %eax,-0xe6(%ebp)
 854a310:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 854a316:	89 85 1e ff ff ff    	mov    %eax,-0xe2(%ebp)
 854a31c:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 854a322:	89 85 22 ff ff ff    	mov    %eax,-0xde(%ebp)
 854a328:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 854a32f:	88 85 26 ff ff ff    	mov    %al,-0xda(%ebp)
 854a335:	8d 85 ea fe ff ff    	lea    -0x116(%ebp),%eax
 854a33b:	89 04 24             	mov    %eax,(%esp)
 854a33e:	e8 23 4a bd ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 854a343:	84 c0                	test   %al,%al
 854a345:	74 0a                	je     854a351 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x197>
 854a347:	b8 16 00 00 00       	mov    $0x16,%eax
 854a34c:	e9 ba 05 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a351:	c7 85 6c ff ff ff 00 	movl   $0x0,-0x94(%ebp)
 854a358:	00 00 00 
 854a35b:	c7 85 68 ff ff ff 00 	movl   $0x0,-0x98(%ebp)
 854a362:	00 00 00 
 854a365:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 854a36b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854a36f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 854a375:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a379:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854a380:	00 
 854a381:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854a384:	89 04 24             	mov    %eax,(%esp)
 854a387:	e8 d2 74 fb ff       	call   850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>
 854a38c:	8b 45 10             	mov    0x10(%ebp),%eax
 854a38f:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a393:	0f b7 d0             	movzwl %ax,%edx
 854a396:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 854a39c:	39 c2                	cmp    %eax,%edx
 854a39e:	7c 1e                	jl     854a3be <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x204>
 854a3a0:	8b 45 10             	mov    0x10(%ebp),%eax
 854a3a3:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a3a7:	0f b7 d0             	movzwl %ax,%edx
 854a3aa:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 854a3b0:	39 c2                	cmp    %eax,%edx
 854a3b2:	7f 0a                	jg     854a3be <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x204>
 854a3b4:	b8 13 00 00 00       	mov    $0x13,%eax
 854a3b9:	e9 4d 05 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a3be:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 854a3c4:	89 c3                	mov    %eax,%ebx
 854a3c6:	e8 d0 1d b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854a3cb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854a3cf:	89 04 24             	mov    %eax,(%esp)
 854a3d2:	e8 5b 56 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854a3d7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 854a3da:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 854a3de:	75 0a                	jne    854a3ea <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x230>
 854a3e0:	b8 04 00 00 00       	mov    $0x4,%eax
 854a3e5:	e9 21 05 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a3ea:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 854a3f0:	89 c3                	mov    %eax,%ebx
 854a3f2:	e8 a4 1d b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854a3f7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854a3fb:	89 04 24             	mov    %eax,(%esp)
 854a3fe:	e8 2f 56 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854a403:	89 45 d8             	mov    %eax,-0x28(%ebp)
 854a406:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 854a40a:	75 0a                	jne    854a416 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x25c>
 854a40c:	b8 04 00 00 00       	mov    $0x4,%eax
 854a411:	e9 f5 04 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a416:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 854a41d:	8b 45 10             	mov    0x10(%ebp),%eax
 854a420:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 854a424:	0f b6 c0             	movzbl %al,%eax
 854a427:	89 44 24 14          	mov    %eax,0x14(%esp)
 854a42b:	8d 85 ea fe ff ff    	lea    -0x116(%ebp),%eax
 854a431:	89 44 24 10          	mov    %eax,0x10(%esp)
 854a435:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 854a438:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854a43c:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 854a442:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a446:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a449:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a44d:	8b 45 08             	mov    0x8(%ebp),%eax
 854a450:	89 04 24             	mov    %eax,(%esp)
 854a453:	e8 92 f3 ff ff       	call   85497ea <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h>
 854a458:	89 45 dc             	mov    %eax,-0x24(%ebp)
 854a45b:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 854a45f:	0f 95 c0             	setne  %al
 854a462:	84 c0                	test   %al,%al
 854a464:	74 4a                	je     854a4b0 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x2f6>
 854a466:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 854a469:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a46c:	89 04 24             	mov    %eax,(%esp)
 854a46f:	e8 da 17 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 854a474:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 854a478:	89 44 24 14          	mov    %eax,0x14(%esp)
 854a47c:	c7 44 24 10 04 c4 c9 	movl   $0x8c9c404,0x10(%esp)
 854a483:	08 
 854a484:	c7 44 24 0c 56 07 00 	movl   $0x756,0xc(%esp)
 854a48b:	00 
 854a48c:	c7 44 24 08 20 d2 c9 	movl   $0x8c9d220,0x8(%esp)
 854a493:	08 
 854a494:	c7 44 24 04 59 c4 c9 	movl   $0x8c9c459,0x4(%esp)
 854a49b:	08 
 854a49c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 854a4a3:	e8 62 97 58 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 854a4a8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854a4ab:	e9 5b 04 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a4b0:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 854a4b4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 854a4b7:	05 0d 03 00 00       	add    $0x30d,%eax
 854a4bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a4c0:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 854a4c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a4ca:	8b 45 08             	mov    0x8(%ebp),%eax
 854a4cd:	89 04 24             	mov    %eax,(%esp)
 854a4d0:	e8 a5 f2 ff ff       	call   854977a <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc>
 854a4d5:	88 45 e2             	mov    %al,-0x1e(%ebp)
 854a4d8:	8b 45 10             	mov    0x10(%ebp),%eax
 854a4db:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 854a4df:	0f b7 d8             	movzwl %ax,%ebx
 854a4e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a4e5:	89 04 24             	mov    %eax,(%esp)
 854a4e8:	e8 a1 fd b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854a4ed:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 854a4f4:	00 
 854a4f5:	c7 44 24 10 0c 00 00 	movl   $0xc,0x10(%esp)
 854a4fc:	00 
 854a4fd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 854a504:	00 
 854a505:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854a509:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854a510:	00 
 854a511:	89 04 24             	mov    %eax,(%esp)
 854a514:	e8 f3 9a fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 854a519:	83 f0 01             	xor    $0x1,%eax
 854a51c:	84 c0                	test   %al,%al
 854a51e:	74 0a                	je     854a52a <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x370>
 854a520:	b8 11 00 00 00       	mov    $0x11,%eax
 854a525:	e9 e1 03 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a52a:	8b 45 14             	mov    0x14(%ebp),%eax
 854a52d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854a534:	00 
 854a535:	89 04 24             	mov    %eax,(%esp)
 854a538:	e8 e3 13 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854a53d:	8b 45 10             	mov    0x10(%ebp),%eax
 854a540:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 854a544:	0f b7 d0             	movzwl %ax,%edx
 854a547:	8b 45 14             	mov    0x14(%ebp),%eax
 854a54a:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a54e:	89 04 24             	mov    %eax,(%esp)
 854a551:	e8 4e f9 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854a556:	8b 45 10             	mov    0x10(%ebp),%eax
 854a559:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 854a55d:	0f b7 d8             	movzwl %ax,%ebx
 854a560:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a563:	89 04 24             	mov    %eax,(%esp)
 854a566:	e8 23 fd b8 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854a56b:	8d 95 73 ff ff ff    	lea    -0x8d(%ebp),%edx
 854a571:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a575:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854a57c:	00 
 854a57d:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a581:	89 14 24             	mov    %edx,(%esp)
 854a584:	e8 8f 13 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 854a589:	83 ec 04             	sub    $0x4,%esp
 854a58c:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 854a592:	89 04 24             	mov    %eax,(%esp)
 854a595:	e8 a0 d2 ba ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 854a59a:	8b 55 14             	mov    0x14(%ebp),%edx
 854a59d:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a5a1:	89 14 24             	mov    %edx,(%esp)
 854a5a4:	e8 fb f8 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854a5a9:	80 7d e2 00          	cmpb   $0x0,-0x1e(%ebp)
 854a5ad:	74 15                	je     854a5c4 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x40a>
 854a5af:	8b 45 14             	mov    0x14(%ebp),%eax
 854a5b2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854a5b9:	00 
 854a5ba:	89 04 24             	mov    %eax,(%esp)
 854a5bd:	e8 5e 13 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854a5c2:	eb 13                	jmp    854a5d7 <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x41d>
 854a5c4:	8b 45 14             	mov    0x14(%ebp),%eax
 854a5c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854a5ce:	00 
 854a5cf:	89 04 24             	mov    %eax,(%esp)
 854a5d2:	e8 49 13 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854a5d7:	0f b6 45 e2          	movzbl -0x1e(%ebp),%eax
 854a5db:	83 f0 01             	xor    $0x1,%eax
 854a5de:	84 c0                	test   %al,%al
 854a5e0:	0f 84 16 01 00 00    	je     854a6fc <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x542>
 854a5e6:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 854a5ed:	00 00 00 
 854a5f0:	8b 85 2e ff ff ff    	mov    -0xd2(%ebp),%eax
 854a5f6:	0f bf d8             	movswl %ax,%ebx
 854a5f9:	e8 df 74 c0 ff       	call   8151add <_Z7G_Storev>
 854a5fe:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 854a604:	89 54 24 14          	mov    %edx,0x14(%esp)
 854a608:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854a60f:	00 
 854a610:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a614:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 854a617:	89 54 24 08          	mov    %edx,0x8(%esp)
 854a61b:	8d 95 27 ff ff ff    	lea    -0xd9(%ebp),%edx
 854a621:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a625:	89 04 24             	mov    %eax,(%esp)
 854a628:	e8 73 e8 0c 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 854a62d:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 854a633:	89 c3                	mov    %eax,%ebx
 854a635:	e8 b5 2f 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 854a63a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a63e:	8b 55 0c             	mov    0xc(%ebp),%edx
 854a641:	89 54 24 08          	mov    %edx,0x8(%esp)
 854a645:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 854a64c:	00 
 854a64d:	89 04 24             	mov    %eax,(%esp)
 854a650:	e8 2d 30 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 854a655:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 854a65c:	8b 45 10             	mov    0x10(%ebp),%eax
 854a65f:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a663:	0f b7 c0             	movzwl %ax,%eax
 854a666:	8b 55 14             	mov    0x14(%ebp),%edx
 854a669:	89 54 24 14          	mov    %edx,0x14(%esp)
 854a66d:	89 44 24 10          	mov    %eax,0x10(%esp)
 854a671:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 854a674:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854a678:	8d 85 27 ff ff ff    	lea    -0xd9(%ebp),%eax
 854a67e:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a682:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a685:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a689:	8b 45 08             	mov    0x8(%ebp),%eax
 854a68c:	89 04 24             	mov    %eax,(%esp)
 854a68f:	e8 34 f4 ff ff       	call   8549ac8 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard>
 854a694:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854a697:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 854a69b:	0f 95 c0             	setne  %al
 854a69e:	84 c0                	test   %al,%al
 854a6a0:	0f 84 f5 00 00 00    	je     854a79b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x5e1>
 854a6a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a6a9:	89 04 24             	mov    %eax,(%esp)
 854a6ac:	e8 9d 15 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 854a6b1:	89 c3                	mov    %eax,%ebx
 854a6b3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 854a6ba:	00 
 854a6bb:	c7 44 24 08 7e 07 00 	movl   $0x77e,0x8(%esp)
 854a6c2:	00 
 854a6c3:	c7 44 24 04 20 d2 c9 	movl   $0x8c9d220,0x4(%esp)
 854a6ca:	08 
 854a6cb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 854a6ce:	89 04 24             	mov    %eax,(%esp)
 854a6d1:	e8 42 50 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 854a6d6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a6da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854a6dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a6e1:	c7 44 24 04 6c c4 c9 	movl   $0x8c9c46c,0x4(%esp)
 854a6e8:	08 
 854a6e9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 854a6ec:	89 04 24             	mov    %eax,(%esp)
 854a6ef:	e8 94 50 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 854a6f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854a6f7:	e9 0f 02 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a6fc:	8b 45 10             	mov    0x10(%ebp),%eax
 854a6ff:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 854a703:	0f b6 d8             	movzbl %al,%ebx
 854a706:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 854a709:	8b 00                	mov    (%eax),%eax
 854a70b:	83 c0 0c             	add    $0xc,%eax
 854a70e:	8b 10                	mov    (%eax),%edx
 854a710:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 854a713:	89 04 24             	mov    %eax,(%esp)
 854a716:	ff d2                	call   *%edx
 854a718:	8b 55 d8             	mov    -0x28(%ebp),%edx
 854a71b:	89 54 24 14          	mov    %edx,0x14(%esp)
 854a71f:	8d 95 27 ff ff ff    	lea    -0xd9(%ebp),%edx
 854a725:	89 54 24 10          	mov    %edx,0x10(%esp)
 854a729:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a72d:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a731:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a734:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a738:	8b 45 08             	mov    0x8(%ebp),%eax
 854a73b:	89 04 24             	mov    %eax,(%esp)
 854a73e:	e8 c3 f8 ff ff       	call   854a006 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem>
 854a743:	83 f0 01             	xor    $0x1,%eax
 854a746:	84 c0                	test   %al,%al
 854a748:	74 51                	je     854a79b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x5e1>
 854a74a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a74d:	89 04 24             	mov    %eax,(%esp)
 854a750:	e8 f9 14 b8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 854a755:	89 c3                	mov    %eax,%ebx
 854a757:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 854a75e:	00 
 854a75f:	c7 44 24 08 86 07 00 	movl   $0x786,0x8(%esp)
 854a766:	00 
 854a767:	c7 44 24 04 20 d2 c9 	movl   $0x8c9d220,0x4(%esp)
 854a76e:	08 
 854a76f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 854a772:	89 04 24             	mov    %eax,(%esp)
 854a775:	e8 9e 4f 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 854a77a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 854a77e:	c7 44 24 04 c8 c4 c9 	movl   $0x8c9c4c8,0x4(%esp)
 854a785:	08 
 854a786:	8d 45 c0             	lea    -0x40(%ebp),%eax
 854a789:	89 04 24             	mov    %eax,(%esp)
 854a78c:	e8 f7 4f 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 854a791:	b8 01 00 00 00       	mov    $0x1,%eax
 854a796:	e9 70 01 00 00       	jmp    854a90b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x751>
 854a79b:	8b 85 29 ff ff ff    	mov    -0xd7(%ebp),%eax
 854a7a1:	85 c0                	test   %eax,%eax
 854a7a3:	0f 84 c2 00 00 00    	je     854a86b <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x6b1>
 854a7a9:	8b 45 10             	mov    0x10(%ebp),%eax
 854a7ac:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a7b0:	0f b7 c0             	movzwl %ax,%eax
 854a7b3:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 854a7b9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854a7bd:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 854a7c3:	89 54 24 10          	mov    %edx,0x10(%esp)
 854a7c7:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 854a7cd:	89 54 24 14          	mov    %edx,0x14(%esp)
 854a7d1:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 854a7d7:	89 54 24 18          	mov    %edx,0x18(%esp)
 854a7db:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 854a7e1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 854a7e5:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 854a7eb:	89 54 24 20          	mov    %edx,0x20(%esp)
 854a7ef:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 854a7f5:	89 54 24 24          	mov    %edx,0x24(%esp)
 854a7f9:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 854a7ff:	89 54 24 28          	mov    %edx,0x28(%esp)
 854a803:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 854a809:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 854a80d:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 854a813:	89 54 24 30          	mov    %edx,0x30(%esp)
 854a817:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 854a81d:	89 54 24 34          	mov    %edx,0x34(%esp)
 854a821:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 854a827:	89 54 24 38          	mov    %edx,0x38(%esp)
 854a82b:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 854a831:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 854a835:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 854a83b:	89 54 24 40          	mov    %edx,0x40(%esp)
 854a83f:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 854a845:	89 54 24 44          	mov    %edx,0x44(%esp)
 854a849:	0f b6 95 63 ff ff ff 	movzbl -0x9d(%ebp),%edx
 854a850:	88 54 24 48          	mov    %dl,0x48(%esp)
 854a854:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a858:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854a85f:	00 
 854a860:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854a863:	89 04 24             	mov    %eax,(%esp)
 854a866:	e8 43 58 fb ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 854a86b:	8b 45 10             	mov    0x10(%ebp),%eax
 854a86e:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 854a872:	0f b7 c0             	movzwl %ax,%eax
 854a875:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854a879:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 854a880:	00 
 854a881:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854a888:	00 
 854a889:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a88c:	89 04 24             	mov    %eax,(%esp)
 854a88f:	e8 44 1a 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 854a894:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 854a898:	0f b6 85 46 ff ff ff 	movzbl -0xba(%ebp),%eax
 854a89f:	83 e0 01             	and    $0x1,%eax
 854a8a2:	84 c0                	test   %al,%al
 854a8a4:	74 16                	je     854a8bc <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x702>
 854a8a6:	80 45 e3 01          	addb   $0x1,-0x1d(%ebp)
 854a8aa:	0f b6 85 47 ff ff ff 	movzbl -0xb9(%ebp),%eax
 854a8b1:	83 e0 01             	and    $0x1,%eax
 854a8b4:	84 c0                	test   %al,%al
 854a8b6:	74 04                	je     854a8bc <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard+0x702>
 854a8b8:	80 45 e3 01          	addb   $0x1,-0x1d(%ebp)
 854a8bc:	0f be 7d e3          	movsbl -0x1d(%ebp),%edi
 854a8c0:	8b 45 10             	mov    0x10(%ebp),%eax
 854a8c3:	0f b6 40 19          	movzbl 0x19(%eax),%eax
 854a8c7:	0f b6 f0             	movzbl %al,%esi
 854a8ca:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 854a8d0:	89 c3                	mov    %eax,%ebx
 854a8d2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 854a8d5:	89 04 24             	mov    %eax,(%esp)
 854a8d8:	e8 6b 63 bc ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 854a8dd:	0f b6 55 e2          	movzbl -0x1e(%ebp),%edx
 854a8e1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 854a8e4:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 854a8ea:	89 7c 24 14          	mov    %edi,0x14(%esp)
 854a8ee:	89 74 24 10          	mov    %esi,0x10(%esp)
 854a8f2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 854a8f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 854a8fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a8fe:	89 0c 24             	mov    %ecx,(%esp)
 854a901:	e8 22 a3 13 00       	call   8684c28 <_ZN15cUserHistoryLog23Enchant3rdChronicleItemEbiiii>
 854a906:	b8 00 00 00 00       	mov    $0x0,%eax
 854a90b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 854a90e:	83 c4 00             	add    $0x0,%esp
 854a911:	5b                   	pop    %ebx
 854a912:	5e                   	pop    %esi
 854a913:	5f                   	pop    %edi
 854a914:	5d                   	pop    %ebp
 854a915:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::ProcUpgrade @ 0x854a1ba

/* WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgrade
          (CItemUpgrade *this,CUser *param_1,MSG_ENCHANT *param_2,PacketGuard *param_3)

{
  MSG_ENCHANT MVar1;
  undefined2 uVar2;
  char cVar3;
  short sVar4;
  CDataManager *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  Store *this_00;
  CValueStatistic *pCVar9;
  int iVar10;
  int iVar11;
  undefined1 local_15c [8];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined2 local_11a;
  undefined2 uStack_118;
  undefined2 local_116;
  undefined2 uStack_114;
  undefined4 local_112;
  undefined4 local_10e;
  undefined4 local_10a;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined1 local_de;
  undefined2 local_dd;
  undefined2 uStack_db;
  undefined2 uStack_d9;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined3 uStack_d5;
  undefined1 uStack_d2;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined1 local_a1;
  int local_a0;
  int local_9c;
  int local_98;
  Inven_Item local_91 [61];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CInventory *local_34;
  CItem *local_30;
  int local_2c;
  int local_28;
  bool local_22;
  char local_21;
  int local_20;
  
  local_34 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_dd,(int)local_34);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_dd);
  if (cVar3 == '\0') {
    if (CONCAT22(uStack_d9,uStack_db) == *(int *)(param_2 + 0xf)) {
      Inven_Item::Inven_Item((Inven_Item *)&local_11a);
      CInventory::GetInvenSlot((int)local_15c,(int)local_34);
      local_11a = (undefined2)local_15c._0_4_;
      uStack_118 = SUB42(local_15c._0_4_,2);
      local_116 = (undefined2)local_15c._4_4_;
      uStack_114 = SUB42(local_15c._4_4_,2);
      local_112 = local_154;
      local_10e = local_150;
      local_10a = local_14c;
      local_106 = local_148;
      local_102 = local_144;
      local_fe = local_140;
      local_fa = local_13c;
      local_f6 = local_138;
      local_f2 = local_134;
      local_ee = local_130;
      local_ea = local_12c;
      local_e6 = local_128;
      local_e2 = local_124;
      local_de = local_120;
      cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_11a);
      if (cVar3 == '\0') {
        local_98 = 0;
        local_9c = 0;
        CInventory::getStartEndPos(local_34,0,&local_98,&local_9c);
        if (((int)(uint)*(ushort *)(param_2 + 0xd) < local_98) ||
           (local_9c < (int)(uint)*(ushort *)(param_2 + 0xd))) {
          iVar6 = CONCAT22(uStack_d9,uStack_db);
          pCVar5 = (CDataManager *)G_CDataManager();
          local_30 = (CItem *)CDataManager::find_item(pCVar5,iVar6);
          if (local_30 == (CItem *)0x0) {
            local_28 = 4;
          }
          else {
            iVar6 = CONCAT22(local_116,uStack_118);
            pCVar5 = (CDataManager *)G_CDataManager();
            local_2c = CDataManager::find_item(pCVar5,iVar6);
            if (local_2c == 0) {
              local_28 = 4;
            }
            else {
              local_28 = 0;
              iVar6 = _CheckCondition(this,param_1,(Inven_Item *)&local_dd,local_30,
                                      (Inven_Item *)&local_11a,(uchar)param_2[0x19]);
              local_28 = iVar6;
              if (iVar6 == 0) {
                local_22 = false;
                local_22 = (bool)isDoEnchant(this,(Inven_Item *)&local_dd,(char *)(local_2c + 0x30d)
                                            );
                uVar2 = *(undefined2 *)(param_2 + 0x13);
                pCVar8 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                cVar3 = CInventory::delete_item(pCVar8,1,uVar2,1,0xc,1);
                if (cVar3 == '\x01') {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x13));
                  iVar6 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::GetInvenSlot((int)local_91,iVar6);
                  iVar6 = Inven_Item::get_add_info(local_91);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_3,iVar6);
                  if (local_22 == false) {
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                  }
                  else {
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  }
                  if (local_22 == true) {
                    MVar1 = param_2[0x19];
                    uVar7 = (**(code **)(*(int *)local_30 + 0xc))(local_30);
                    cVar3 = ProcUpgrade_3rdChronicle(this,param_1,uVar7,MVar1,&local_dd,local_2c);
                    if (cVar3 != '\x01') {
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_44,
                                         "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                                         ,0x786,5);
                      cMyTrace::operator()
                                (local_44,
                                 "3RD_CHRONICLE_LOG : ENCHANT SYSTEM ProcUpgrade_3rdChronicle() ERROR!! CHARAC NO(%u)"
                                 ,uVar7);
                      return 1;
                    }
                  }
                  else {
                    local_a0 = 0;
                    sVar4 = (short)_uStack_d6;
                    this_00 = (Store *)G_Store();
                    Store::GetSellItemPrice
                              (this_00,(Inven_Item *)&local_dd,local_30,sVar4,false,&local_a0);
                    iVar6 = local_a0;
                    pCVar9 = (CValueStatistic *)GetInstanceValueStatistic();
                    CValueStatistic::AddValueStatistic(pCVar9,0xf,param_1,iVar6);
                    local_20 = 0;
                    local_20 = _ProcPenalty(this,param_1,(Inven_Item *)&local_dd,local_30,
                                            *(ushort *)(param_2 + 0xd),param_3);
                    if (local_20 != 0) {
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      cMyTrace::cMyTrace(local_54,
                                         "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                                         ,0x77e,5);
                      cMyTrace::operator()
                                (local_54,
                                 "3RD_CHRONICLE_LOG : ENCHANT SYSTEM _ProcPenalty() ERROR!! ERROR CODE(%d)!! CHARAC NO(%u)"
                                 ,local_20,uVar7);
                      return local_20;
                    }
                  }
                  if (CONCAT22(uStack_d9,uStack_db) != 0) {
                    CInventory::update_item
                              (local_34,1,*(undefined2 *)(param_2 + 0xd),
                               CONCAT22(uStack_db,local_dd),
                               CONCAT13(uStack_d6,CONCAT12(uStack_d7,uStack_d9)),
                               CONCAT13(uStack_d2,uStack_d5),local_d1,local_cd,local_c9,local_c5,
                               local_c1,local_bd,local_b9,local_b5,local_b1,local_ad,local_a9,
                               local_a5,local_a1);
                  }
                  CUser::SendUpdateItem(param_1,1,0,*(undefined2 *)(param_2 + 0xd));
                  local_21 = '\0';
                  if (((local_c1._3_1_ & 1) != 0) && (local_21 = '\x01', ((byte)local_bd & 1) != 0))
                  {
                    local_21 = '\x02';
                  }
                  iVar11 = (int)local_21;
                  MVar1 = param_2[0x19];
                  iVar6 = CONCAT22(local_116,uStack_118);
                  iVar10 = CItem::get_index(local_30);
                  cUserHistoryLog::Enchant3rdChronicleItem
                            ((cUserHistoryLog *)(param_1 + 0x79700),local_22,iVar10,iVar6,
                             (uint)(byte)MVar1,iVar11);
                  local_28 = 0;
                }
                else {
                  local_28 = 0x11;
                }
              }
              else {
                uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                LogManager::logFormat
                          (1,"ItemUpgrade.cpp",
                           "ENUM_ERROR WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ENCHANT*, PacketGuard*)"
                           ,0x756,
                           "3RD_CHRONICLE_LOG : ENCHANT SYSTEM _CheckCondition() ERROR!! CHARAC NO(%u) ERROR(%u)"
                           ,uVar7,iVar6);
              }
            }
          }
        }
        else {
          local_28 = 0x13;
        }
      }
      else {
        local_28 = 0x16;
      }
    }
    else {
      local_28 = 4;
    }
  }
  else {
    local_28 = 4;
  }
  return local_28;
}

```

---

## ProcUpgrade_3rdChronicle

```asm
// === 0854a006 WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle  [0x0854a006-0x854a1b9] ===
 854a006:	55                   	push   %ebp
 854a007:	89 e5                	mov    %esp,%ebp
 854a009:	56                   	push   %esi
 854a00a:	53                   	push   %ebx
 854a00b:	83 ec 50             	sub    $0x50,%esp
 854a00e:	8b 45 14             	mov    0x14(%ebp),%eax
 854a011:	88 45 c4             	mov    %al,-0x3c(%ebp)
 854a014:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854a017:	89 04 24             	mov    %eax,(%esp)
 854a01a:	e8 49 12 00 00       	call   854b268 <_ZN21STEnchantSystemMapKeyC1Ev>
 854a01f:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a022:	89 04 24             	mov    %eax,(%esp)
 854a025:	e8 f6 3e bb ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 854a02a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854a02d:	8b 45 0c             	mov    0xc(%ebp),%eax
 854a030:	89 04 24             	mov    %eax,(%esp)
 854a033:	e8 5c 6c bc ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 854a038:	88 45 e8             	mov    %al,-0x18(%ebp)
 854a03b:	8b 45 10             	mov    0x10(%ebp),%eax
 854a03e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 854a041:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854a045:	88 45 f0             	mov    %al,-0x10(%ebp)
 854a048:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854a04b:	8d 88 f4 02 00 00    	lea    0x2f4(%eax),%ecx
 854a051:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854a054:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 854a057:	89 54 24 08          	mov    %edx,0x8(%esp)
 854a05b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854a05f:	89 04 24             	mov    %eax,(%esp)
 854a062:	e8 29 19 00 00       	call   854b990 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 854a067:	83 ec 04             	sub    $0x4,%esp
 854a06a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854a06d:	8d 90 f4 02 00 00    	lea    0x2f4(%eax),%edx
 854a073:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854a076:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a07a:	89 04 24             	mov    %eax,(%esp)
 854a07d:	e8 3a 19 00 00       	call   854b9bc <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 854a082:	83 ec 04             	sub    $0x4,%esp
 854a085:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854a088:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a08c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854a08f:	89 04 24             	mov    %eax,(%esp)
 854a092:	e8 4b 19 00 00       	call   854b9e2 <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STEnchantSystemMapKey22STEnchantSystemMapDataEEneERKS5_>
 854a097:	84 c0                	test   %al,%al
 854a099:	0f 84 da 00 00 00    	je     854a179 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x173>
 854a09f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 854a0a2:	89 04 24             	mov    %eax,(%esp)
 854a0a5:	e8 4c 19 00 00       	call   854b9f6 <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STEnchantSystemMapKey22STEnchantSystemMapDataEEptEv>
 854a0aa:	83 c0 10             	add    $0x10,%eax
 854a0ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a0b1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 854a0b4:	89 04 24             	mov    %eax,(%esp)
 854a0b7:	e8 20 17 e9 ff       	call   83db7dc <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EEC1ERKS2_>
 854a0bc:	8b 45 18             	mov    0x18(%ebp),%eax
 854a0bf:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 854a0c3:	83 e0 01             	and    $0x1,%eax
 854a0c6:	84 c0                	test   %al,%al
 854a0c8:	75 52                	jne    854a11c <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x116>
 854a0ca:	8b 45 18             	mov    0x18(%ebp),%eax
 854a0cd:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 854a0d1:	83 ca 01             	or     $0x1,%edx
 854a0d4:	88 50 1f             	mov    %dl,0x1f(%eax)
 854a0d7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854a0da:	0f b6 80 0c 03 00 00 	movzbl 0x30c(%eax),%eax
 854a0e1:	89 c2                	mov    %eax,%edx
 854a0e3:	83 e2 03             	and    $0x3,%edx
 854a0e6:	8b 45 18             	mov    0x18(%ebp),%eax
 854a0e9:	83 e2 03             	and    $0x3,%edx
 854a0ec:	8d 0c 12             	lea    (%edx,%edx,1),%ecx
 854a0ef:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 854a0f3:	83 e2 f9             	and    $0xfffffff9,%edx
 854a0f6:	09 ca                	or     %ecx,%edx
 854a0f8:	88 50 1f             	mov    %dl,0x1f(%eax)
 854a0fb:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854a0ff:	89 c2                	mov    %eax,%edx
 854a101:	83 e2 1f             	and    $0x1f,%edx
 854a104:	8b 45 18             	mov    0x18(%ebp),%eax
 854a107:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 854a10e:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 854a112:	83 e2 07             	and    $0x7,%edx
 854a115:	09 ca                	or     %ecx,%edx
 854a117:	88 50 1f             	mov    %dl,0x1f(%eax)
 854a11a:	eb 50                	jmp    854a16c <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x166>
 854a11c:	8b 45 18             	mov    0x18(%ebp),%eax
 854a11f:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 854a123:	83 ca 01             	or     $0x1,%edx
 854a126:	88 50 20             	mov    %dl,0x20(%eax)
 854a129:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854a12c:	0f b6 80 0c 03 00 00 	movzbl 0x30c(%eax),%eax
 854a133:	89 c2                	mov    %eax,%edx
 854a135:	83 e2 03             	and    $0x3,%edx
 854a138:	8b 45 18             	mov    0x18(%ebp),%eax
 854a13b:	83 e2 03             	and    $0x3,%edx
 854a13e:	8d 0c 12             	lea    (%edx,%edx,1),%ecx
 854a141:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 854a145:	83 e2 f9             	and    $0xfffffff9,%edx
 854a148:	09 ca                	or     %ecx,%edx
 854a14a:	88 50 20             	mov    %dl,0x20(%eax)
 854a14d:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854a151:	89 c2                	mov    %eax,%edx
 854a153:	83 e2 1f             	and    $0x1f,%edx
 854a156:	8b 45 18             	mov    0x18(%ebp),%eax
 854a159:	8d 0c d5 00 00 00 00 	lea    0x0(,%edx,8),%ecx
 854a160:	0f b6 50 20          	movzbl 0x20(%eax),%edx
 854a164:	83 e2 07             	and    $0x7,%edx
 854a167:	09 ca                	or     %ecx,%edx
 854a169:	88 50 20             	mov    %dl,0x20(%eax)
 854a16c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 854a16f:	89 04 24             	mov    %eax,(%esp)
 854a172:	e8 29 57 e3 ff       	call   837f8a0 <_ZNSt6vectorI20EquipmentSkillDataUpSaIS0_EED1Ev>
 854a177:	eb 07                	jmp    854a180 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x17a>
 854a179:	bb 00 00 00 00       	mov    $0x0,%ebx
 854a17e:	eb 22                	jmp    854a1a2 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x19c>
 854a180:	bb 01 00 00 00       	mov    $0x1,%ebx
 854a185:	eb 1b                	jmp    854a1a2 <_ZN8WongWork12CItemUpgrade24ProcUpgrade_3rdChronicleEP5CUser18ENUM_EQUIPMENTTYPEhR10Inven_ItemPK5CItem+0x19c>
 854a187:	89 d3                	mov    %edx,%ebx
 854a189:	89 c6                	mov    %eax,%esi
 854a18b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854a18e:	89 04 24             	mov    %eax,(%esp)
 854a191:	e8 98 99 fc ff       	call   8513b2e <_ZN21STEnchantSystemMapKeyD1Ev>
 854a196:	89 f0                	mov    %esi,%eax
 854a198:	89 da                	mov    %ebx,%edx
 854a19a:	89 04 24             	mov    %eax,(%esp)
 854a19d:	e8 ae 95 59 00       	call   8ae3750 <_Unwind_Resume>
 854a1a2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854a1a5:	89 04 24             	mov    %eax,(%esp)
 854a1a8:	e8 81 99 fc ff       	call   8513b2e <_ZN21STEnchantSystemMapKeyD1Ev>
 854a1ad:	89 d8                	mov    %ebx,%eax
 854a1af:	8d 65 f8             	lea    -0x8(%ebp),%esp
 854a1b2:	83 c4 00             	add    $0x0,%esp
 854a1b5:	5b                   	pop    %ebx
 854a1b6:	5e                   	pop    %esi
 854a1b7:	5d                   	pop    %ebp
 854a1b8:	c3                   	ret
 854a1b9:	90                   	nop

```

```c
// WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle @ 0x854a006

/* WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle(CUser*, ENUM_EQUIPMENTTYPE, unsigned char,
   Inven_Item&, CItem const*) */

undefined4 __thiscall
WongWork::CItemUpgrade::ProcUpgrade_3rdChronicle
          (undefined4 this,CUserCharacInfo *param_1,undefined4 param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>> local_30 [12];
  STEnchantSystemMapKey local_24 [4];
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_18;
  char local_14;
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  local_10 [4];
  
  STEnchantSystemMapKey::STEnchantSystemMapKey((STEnchantSystemMapKey *)&local_20);
  local_20 = CUserCharacInfo::get_charac_job(param_1);
  local_1c = CUserCharacInfo::getCurCharFirstGrowType(param_1);
  local_18 = param_3;
  local_14 = param_4;
                    /* try { // try from 0854a062 to 0854a176 has its CatchHandler @ 0854a187 */
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::find(local_24);
  std::
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
          operator!=((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                      *)local_24,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
            operator->((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                        *)local_24);
    std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::vector
              (local_30,(vector *)(iVar2 + 0x10));
    if ((*(byte *)(param_5 + 0x1f) & 1) == 0) {
      *(byte *)(param_5 + 0x1f) = *(byte *)(param_5 + 0x1f) | 1;
      *(byte *)(param_5 + 0x1f) =
           *(byte *)(param_5 + 0x1f) & 0xf9 | (*(byte *)(param_6 + 0x30c) & 3) * '\x02';
      *(byte *)(param_5 + 0x1f) = *(byte *)(param_5 + 0x1f) & 7 | param_4 * '\b';
    }
    else {
      *(byte *)(param_5 + 0x20) = *(byte *)(param_5 + 0x20) | 1;
      *(byte *)(param_5 + 0x20) =
           *(byte *)(param_5 + 0x20) & 0xf9 | (*(byte *)(param_6 + 0x30c) & 3) * '\x02';
      *(byte *)(param_5 + 0x20) = *(byte *)(param_5 + 0x20) & 7 | param_4 * '\b';
    }
    std::vector<EquipmentSkillDataUp,std::allocator<EquipmentSkillDataUp>>::~vector(local_30);
    uVar3 = 1;
  }
  STEnchantSystemMapKey::~STEnchantSystemMapKey((STEnchantSystemMapKey *)&local_20);
  return uVar3;
}

```

---

## _CheckCondition

```asm
// === 08546342 WongWork::CItemUpgrade::_CheckCondition  [0x08546342-0x8546789] ===
 8546342:	55                   	push   %ebp
 8546343:	89 e5                	mov    %esp,%ebp
 8546345:	53                   	push   %ebx
 8546346:	81 ec 84 00 00 00    	sub    $0x84,%esp
 854634c:	8b 45 10             	mov    0x10(%ebp),%eax
 854634f:	83 c0 11             	add    $0x11,%eax
 8546352:	89 04 24             	mov    %eax,(%esp)
 8546355:	e8 62 a4 c0 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 854635a:	83 f0 01             	xor    $0x1,%eax
 854635d:	84 c0                	test   %al,%al
 854635f:	74 0a                	je     854636b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x29>
 8546361:	b8 ae 00 00 00       	mov    $0xae,%eax
 8546366:	e9 1a 04 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 854636b:	8b 45 18             	mov    0x18(%ebp),%eax
 854636e:	8b 50 02             	mov    0x2(%eax),%edx
 8546371:	8b 45 20             	mov    0x20(%ebp),%eax
 8546374:	8b 40 2c             	mov    0x2c(%eax),%eax
 8546377:	39 c2                	cmp    %eax,%edx
 8546379:	74 0a                	je     8546385 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x43>
 854637b:	b8 16 00 00 00       	mov    $0x16,%eax
 8546380:	e9 00 04 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 8546385:	8b 45 18             	mov    0x18(%ebp),%eax
 8546388:	8b 50 07             	mov    0x7(%eax),%edx
 854638b:	8b 45 20             	mov    0x20(%ebp),%eax
 854638e:	8b 40 30             	mov    0x30(%eax),%eax
 8546391:	39 c2                	cmp    %eax,%edx
 8546393:	7d 0a                	jge    854639f <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x5d>
 8546395:	b8 16 00 00 00       	mov    $0x16,%eax
 854639a:	e9 e6 03 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 854639f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85463a6:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85463ab:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 85463b2:	00 
 85463b3:	89 04 24             	mov    %eax,(%esp)
 85463b6:	e8 dd f5 bc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 85463bb:	8b 10                	mov    (%eax),%edx
 85463bd:	83 c2 34             	add    $0x34,%edx
 85463c0:	8b 12                	mov    (%edx),%edx
 85463c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85463c9:	00 
 85463ca:	89 04 24             	mov    %eax,(%esp)
 85463cd:	ff d2                	call   *%edx
 85463cf:	84 c0                	test   %al,%al
 85463d1:	74 1c                	je     85463ef <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0xad>
 85463d3:	8b 45 10             	mov    0x10(%ebp),%eax
 85463d6:	83 c0 11             	add    $0x11,%eax
 85463d9:	89 04 24             	mov    %eax,(%esp)
 85463dc:	e8 eb a3 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 85463e1:	83 f0 01             	xor    $0x1,%eax
 85463e4:	84 c0                	test   %al,%al
 85463e6:	74 07                	je     85463ef <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0xad>
 85463e8:	b8 01 00 00 00       	mov    $0x1,%eax
 85463ed:	eb 05                	jmp    85463f4 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0xb2>
 85463ef:	b8 00 00 00 00       	mov    $0x0,%eax
 85463f4:	84 c0                	test   %al,%al
 85463f6:	74 67                	je     854645f <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x11d>
 85463f8:	a1 30 f7 41 09       	mov    0x941f730,%eax
 85463fd:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 8546404:	00 
 8546405:	89 04 24             	mov    %eax,(%esp)
 8546408:	e8 8b f5 bc ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 854640d:	89 04 24             	mov    %eax,(%esp)
 8546410:	e8 59 51 00 00       	call   854b56e <_ZN21CReduceUpgradeItemPay13GetReduceRateEv>
 8546415:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8546418:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 854641c:	7e 4a                	jle    8546468 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x126>
 854641e:	8b 45 20             	mov    0x20(%ebp),%eax
 8546421:	8b 58 34             	mov    0x34(%eax),%ebx
 8546424:	8b 45 20             	mov    0x20(%ebp),%eax
 8546427:	8b 40 34             	mov    0x34(%eax),%eax
 854642a:	89 c1                	mov    %eax,%ecx
 854642c:	0f af 4d f0          	imul   -0x10(%ebp),%ecx
 8546430:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8546435:	89 c8                	mov    %ecx,%eax
 8546437:	f7 ea                	imul   %edx
 8546439:	c1 fa 05             	sar    $0x5,%edx
 854643c:	89 c8                	mov    %ecx,%eax
 854643e:	c1 f8 1f             	sar    $0x1f,%eax
 8546441:	89 d1                	mov    %edx,%ecx
 8546443:	29 c1                	sub    %eax,%ecx
 8546445:	89 c8                	mov    %ecx,%eax
 8546447:	89 da                	mov    %ebx,%edx
 8546449:	29 c2                	sub    %eax,%edx
 854644b:	89 d0                	mov    %edx,%eax
 854644d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8546450:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8546454:	79 12                	jns    8546468 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x126>
 8546456:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 854645d:	eb 09                	jmp    8546468 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x126>
 854645f:	8b 45 20             	mov    0x20(%ebp),%eax
 8546462:	8b 40 34             	mov    0x34(%eax),%eax
 8546465:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8546468:	8b 45 0c             	mov    0xc(%ebp),%eax
 854646b:	89 04 24             	mov    %eax,(%esp)
 854646e:	e8 0b 3e b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546473:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 8546476:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 854647d:	00 
 854647e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8546485:	00 
 8546486:	89 44 24 04          	mov    %eax,0x4(%esp)
 854648a:	89 14 24             	mov    %edx,(%esp)
 854648d:	e8 86 54 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8546492:	83 ec 04             	sub    $0x4,%esp
 8546495:	8b 45 a5             	mov    -0x5b(%ebp),%eax
 8546498:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854649b:	e8 fb 5c b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85464a0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85464a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85464a7:	89 04 24             	mov    %eax,(%esp)
 85464aa:	e8 83 95 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85464af:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85464b2:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85464b6:	74 3b                	je     85464f3 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x1b1>
 85464b8:	db 45 e0             	fildl  -0x20(%ebp)
 85464bb:	d9 5d 8c             	fstps  -0x74(%ebp)
 85464be:	db 45 e0             	fildl  -0x20(%ebp)
 85464c1:	d9 5d 90             	fstps  -0x70(%ebp)
 85464c4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85464c7:	89 04 24             	mov    %eax,(%esp)
 85464ca:	e8 b1 65 ce ff       	call   822ca80 <_ZNK10CEquipItem22getUpgradeCostDiscountEv>
 85464cf:	d8 4d 90             	fmuls  -0x70(%ebp)
 85464d2:	d9 05 04 d3 c9 08    	flds   0x8c9d304
 85464d8:	de f9                	fdivrp %st,%st(1)
 85464da:	d8 45 8c             	fadds  -0x74(%ebp)
 85464dd:	d9 7d 96             	fnstcw -0x6a(%ebp)
 85464e0:	0f b7 45 96          	movzwl -0x6a(%ebp),%eax
 85464e4:	b4 0c                	mov    $0xc,%ah
 85464e6:	66 89 45 94          	mov    %ax,-0x6c(%ebp)
 85464ea:	d9 6d 94             	fldcw  -0x6c(%ebp)
 85464ed:	db 5d e0             	fistpl -0x20(%ebp)
 85464f0:	d9 6d 96             	fldcw  -0x6a(%ebp)
 85464f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85464f6:	89 04 24             	mov    %eax,(%esp)
 85464f9:	e8 80 3d b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85464fe:	89 04 24             	mov    %eax,(%esp)
 8546501:	e8 d0 e2 be ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8546506:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8546509:	0f 9c c0             	setl   %al
 854650c:	84 c0                	test   %al,%al
 854650e:	74 0a                	je     854651a <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x1d8>
 8546510:	b8 0a 00 00 00       	mov    $0xa,%eax
 8546515:	e9 6b 02 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 854651a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854651d:	89 04 24             	mov    %eax,(%esp)
 8546520:	e8 dd 50 00 00       	call   854b602 <_ZNKSt6vectorI14upgrade_info_tSaIS0_EE4sizeEv>
 8546525:	89 c3                	mov    %eax,%ebx
 8546527:	8b 45 10             	mov    0x10(%ebp),%eax
 854652a:	89 04 24             	mov    %eax,(%esp)
 854652d:	e8 3a eb ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546532:	0f b6 c0             	movzbl %al,%eax
 8546535:	39 c3                	cmp    %eax,%ebx
 8546537:	0f 96 c0             	setbe  %al
 854653a:	84 c0                	test   %al,%al
 854653c:	74 0a                	je     8546548 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x206>
 854653e:	b8 0d 00 00 00       	mov    $0xd,%eax
 8546543:	e9 3d 02 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 8546548:	8b 45 10             	mov    0x10(%ebp),%eax
 854654b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 854654f:	3c 01                	cmp    $0x1,%al
 8546551:	74 0a                	je     854655d <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x21b>
 8546553:	b8 13 00 00 00       	mov    $0x13,%eax
 8546558:	e9 28 02 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 854655d:	8b 45 14             	mov    0x14(%ebp),%eax
 8546560:	8b 00                	mov    (%eax),%eax
 8546562:	83 c0 0c             	add    $0xc,%eax
 8546565:	8b 10                	mov    (%eax),%edx
 8546567:	8b 45 14             	mov    0x14(%ebp),%eax
 854656a:	89 04 24             	mov    %eax,(%esp)
 854656d:	ff d2                	call   *%edx
 854656f:	83 f8 09             	cmp    $0x9,%eax
 8546572:	7e 17                	jle    854658b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x249>
 8546574:	8b 45 14             	mov    0x14(%ebp),%eax
 8546577:	8b 00                	mov    (%eax),%eax
 8546579:	83 c0 0c             	add    $0xc,%eax
 854657c:	8b 10                	mov    (%eax),%edx
 854657e:	8b 45 14             	mov    0x14(%ebp),%eax
 8546581:	89 04 24             	mov    %eax,(%esp)
 8546584:	ff d2                	call   *%edx
 8546586:	83 f8 15             	cmp    $0x15,%eax
 8546589:	7e 07                	jle    8546592 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x250>
 854658b:	b8 01 00 00 00       	mov    $0x1,%eax
 8546590:	eb 05                	jmp    8546597 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x255>
 8546592:	b8 00 00 00 00       	mov    $0x0,%eax
 8546597:	84 c0                	test   %al,%al
 8546599:	74 0a                	je     85465a5 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x263>
 854659b:	b8 13 00 00 00       	mov    $0x13,%eax
 85465a0:	e9 e0 01 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 85465a5:	8b 45 14             	mov    0x14(%ebp),%eax
 85465a8:	8b 00                	mov    (%eax),%eax
 85465aa:	83 c0 0c             	add    $0xc,%eax
 85465ad:	8b 10                	mov    (%eax),%edx
 85465af:	8b 45 14             	mov    0x14(%ebp),%eax
 85465b2:	89 04 24             	mov    %eax,(%esp)
 85465b5:	ff d2                	call   *%edx
 85465b7:	83 f8 0b             	cmp    $0xb,%eax
 85465ba:	0f 94 c0             	sete   %al
 85465bd:	84 c0                	test   %al,%al
 85465bf:	74 0a                	je     85465cb <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x289>
 85465c1:	b8 13 00 00 00       	mov    $0x13,%eax
 85465c6:	e9 ba 01 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 85465cb:	8b 45 10             	mov    0x10(%ebp),%eax
 85465ce:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 85465d2:	0f b7 d8             	movzwl %ax,%ebx
 85465d5:	8b 45 14             	mov    0x14(%ebp),%eax
 85465d8:	89 04 24             	mov    %eax,(%esp)
 85465db:	e8 b8 87 bd ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 85465e0:	39 c3                	cmp    %eax,%ebx
 85465e2:	0f 95 c0             	setne  %al
 85465e5:	84 c0                	test   %al,%al
 85465e7:	74 0a                	je     85465f3 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x2b1>
 85465e9:	b8 07 00 00 00       	mov    $0x7,%eax
 85465ee:	e9 92 01 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 85465f3:	8b 45 14             	mov    0x14(%ebp),%eax
 85465f6:	89 04 24             	mov    %eax,(%esp)
 85465f9:	e8 d8 ac ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85465fe:	89 c2                	mov    %eax,%edx
 8546600:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8546603:	81 c2 04 01 00 00    	add    $0x104,%edx
 8546609:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 854660d:	83 f8 ff             	cmp    $0xffffffff,%eax
 8546610:	0f 95 c0             	setne  %al
 8546613:	84 c0                	test   %al,%al
 8546615:	74 3b                	je     8546652 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x310>
 8546617:	8b 45 10             	mov    0x10(%ebp),%eax
 854661a:	89 04 24             	mov    %eax,(%esp)
 854661d:	e8 4a ea ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546622:	0f b6 d8             	movzbl %al,%ebx
 8546625:	8b 45 14             	mov    0x14(%ebp),%eax
 8546628:	89 04 24             	mov    %eax,(%esp)
 854662b:	e8 a6 ac ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8546630:	89 c2                	mov    %eax,%edx
 8546632:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8546635:	81 c2 04 01 00 00    	add    $0x104,%edx
 854663b:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 854663f:	39 c3                	cmp    %eax,%ebx
 8546641:	0f 9d c0             	setge  %al
 8546644:	84 c0                	test   %al,%al
 8546646:	74 0a                	je     8546652 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x310>
 8546648:	b8 5f 00 00 00       	mov    $0x5f,%eax
 854664d:	e9 33 01 00 00       	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 8546652:	8b 45 14             	mov    0x14(%ebp),%eax
 8546655:	89 04 24             	mov    %eax,(%esp)
 8546658:	e8 79 ac ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 854665d:	89 c3                	mov    %eax,%ebx
 854665f:	8b 45 10             	mov    0x10(%ebp),%eax
 8546662:	89 04 24             	mov    %eax,(%esp)
 8546665:	e8 02 ea ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854666a:	0f b6 c0             	movzbl %al,%eax
 854666d:	8b 55 20             	mov    0x20(%ebp),%edx
 8546670:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8546674:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8546678:	89 44 24 04          	mov    %eax,0x4(%esp)
 854667c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 854667f:	89 04 24             	mov    %eax,(%esp)
 8546682:	e8 67 9d 3b 00       	call   89003ee <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t>
 8546687:	83 f8 03             	cmp    $0x3,%eax
 854668a:	0f 94 c0             	sete   %al
 854668d:	84 c0                	test   %al,%al
 854668f:	0f 84 93 00 00 00    	je     8546728 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x3e6>
 8546695:	8b 45 14             	mov    0x14(%ebp),%eax
 8546698:	89 04 24             	mov    %eax,(%esp)
 854669b:	e8 36 ac ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85466a0:	89 c3                	mov    %eax,%ebx
 85466a2:	e8 f4 5a b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85466a7:	8b 40 1c             	mov    0x1c(%eax),%eax
 85466aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85466ae:	89 04 24             	mov    %eax,(%esp)
 85466b1:	e8 92 ca f2 ff       	call   8473148 <_ZNK8DisJoint29getPredictResultItemTypeCountEi>
 85466b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85466b9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85466bd:	8b 45 10             	mov    0x10(%ebp),%eax
 85466c0:	83 c0 11             	add    $0x11,%eax
 85466c3:	89 04 24             	mov    %eax,(%esp)
 85466c6:	e8 01 a1 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 85466cb:	84 c0                	test   %al,%al
 85466cd:	74 04                	je     85466d3 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x391>
 85466cf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85466d3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85466d7:	74 3f                	je     8546718 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x3d6>
 85466d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85466dc:	89 04 24             	mov    %eax,(%esp)
 85466df:	e8 9a 3b b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85466e4:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85466eb:	00 
 85466ec:	89 04 24             	mov    %eax,(%esp)
 85466ef:	e8 8c e9 fb ff       	call   8505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>
 85466f4:	89 c3                	mov    %eax,%ebx
 85466f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85466f9:	89 04 24             	mov    %eax,(%esp)
 85466fc:	e8 7d 3b b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546701:	89 04 24             	mov    %eax,(%esp)
 8546704:	e8 2f e9 fb ff       	call   8505038 <_ZNK10CInventory15QuickEmptyCountEv>
 8546709:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 854670c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 854670f:	73 07                	jae    8546718 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x3d6>
 8546711:	b8 01 00 00 00       	mov    $0x1,%eax
 8546716:	eb 05                	jmp    854671d <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x3db>
 8546718:	b8 00 00 00 00       	mov    $0x0,%eax
 854671d:	84 c0                	test   %al,%al
 854671f:	74 07                	je     8546728 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x3e6>
 8546721:	b8 15 00 00 00       	mov    $0x15,%eax
 8546726:	eb 5d                	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 8546728:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 854672f:	8b 45 10             	mov    0x10(%ebp),%eax
 8546732:	83 c0 11             	add    $0x11,%eax
 8546735:	89 04 24             	mov    %eax,(%esp)
 8546738:	e8 8f a0 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 854673d:	84 c0                	test   %al,%al
 854673f:	74 09                	je     854674a <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x408>
 8546741:	c7 45 ec 02 00 00 00 	movl   $0x2,-0x14(%ebp)
 8546748:	eb 07                	jmp    8546751 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x40f>
 854674a:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8546751:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546754:	89 04 24             	mov    %eax,(%esp)
 8546757:	e8 5c 3b b9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 854675c:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 854675f:	8b 55 14             	mov    0x14(%ebp),%edx
 8546762:	89 44 24 08          	mov    %eax,0x8(%esp)
 8546766:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854676a:	89 14 24             	mov    %edx,(%esp)
 854676d:	e8 7a cf fc ff       	call   85136ec <_ZN10CEquipItem17isUpgradableLevelEN15ItemUpgradeType1TEi>
 8546772:	83 f0 01             	xor    $0x1,%eax
 8546775:	84 c0                	test   %al,%al
 8546777:	74 07                	je     8546780 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x43e>
 8546779:	b8 13 00 00 00       	mov    $0x13,%eax
 854677e:	eb 05                	jmp    8546785 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t+0x443>
 8546780:	b8 00 00 00 00       	mov    $0x0,%eax
 8546785:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8546788:	c9                   	leave
 8546789:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_CheckCondition @ 0x8546342

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item
   const&, upgrade_table_t const&, upgrade_info_t const&) */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckCondition
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,Inven_Item *param_4,
          upgrade_table_t *param_5,upgrade_info_t *param_6)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  CReduceUpgradeItemPay *this_00;
  int iVar6;
  CDataManager *this_01;
  CInventory *pCVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  longdouble lVar12;
  undefined1 local_61 [2];
  int local_5f;
  int local_24;
  int local_20;
  CEquipItem *local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  cVar3 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 != '\x01') {
    return 0xae;
  }
  if (*(int *)(param_4 + 2) != *(int *)(param_6 + 0x2c)) {
    return 0x16;
  }
  if (*(int *)(param_4 + 7) < *(int *)(param_6 + 0x30)) {
    return 0x16;
  }
  local_24 = 0;
  piVar5 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
  cVar3 = (**(code **)(*piVar5 + 0x34))(piVar5,0);
  if ((cVar3 == '\0') ||
     (cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11)), cVar3 == '\x01')
     ) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    this_00 = (CReduceUpgradeItemPay *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
    local_14 = CReduceUpgradeItemPay::GetReduceRate(this_00);
    if ((0 < local_14) &&
       (local_24 = *(int *)(param_6 + 0x34) - (*(int *)(param_6 + 0x34) * local_14) / 100,
       local_24 < 0)) {
      local_24 = 0;
    }
  }
  else {
    local_24 = *(int *)(param_6 + 0x34);
  }
  iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_61,iVar6);
  local_20 = local_5f;
  this_01 = (CDataManager *)G_CDataManager();
  local_1c = (CEquipItem *)CDataManager::find_item(this_01,local_20);
  iVar6 = local_24;
  if (local_1c != (CEquipItem *)0x0) {
    lVar12 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_1c);
    local_24 = (int)ROUND((lVar12 * (longdouble)iVar6) / (longdouble)_DAT_08c9d304 +
                          (longdouble)iVar6);
  }
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar6 = CInventory::get_money(pCVar7);
  if (iVar6 < local_24) {
    return 10;
  }
  uVar8 = std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::size
                    ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)param_5);
  uVar9 = Inven_Item::GetUpgrade(param_2);
  if (uVar8 <= (uVar9 & 0xff)) {
    return 0xd;
  }
  if (param_2[1] != (Inven_Item)0x1) {
    return 0x13;
  }
  iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if ((iVar6 < 10) || (iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3), 0x15 < iVar6)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0x13;
  }
  iVar6 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if (iVar6 == 0xb) {
    return 0x13;
  }
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar8 = CEquipItem::get_endurance((CEquipItem *)param_3);
  if (uVar1 != uVar8) {
    return 7;
  }
  iVar6 = CItem::get_rarity(param_3);
  if (*(int *)(param_5 + (iVar6 + 0x104) * 4 + 0xc) != -1) {
    uVar8 = Inven_Item::GetUpgrade(param_2);
    iVar6 = CItem::get_rarity(param_3);
    if (*(int *)(param_5 + (iVar6 + 0x104) * 4 + 0xc) <= (int)(uVar8 & 0xff)) {
      return 0x5f;
    }
  }
  uVar10 = CItem::get_rarity(param_3);
  uVar4 = Inven_Item::GetUpgrade(param_2);
  iVar6 = upgrade_table_t::GetPenaltyType(param_5,uVar4,uVar10,param_6);
  if (iVar6 != 3) goto LAB_08546728;
  iVar6 = CItem::get_rarity(param_3);
  iVar11 = G_CDataManager();
  iVar6 = DisJoint::getPredictResultItemTypeCount(*(DisJoint **)(iVar11 + 0x1c),iVar6);
  local_10 = iVar6 + 1;
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 != '\0') {
    local_10 = local_10 + 1;
  }
  if (local_10 == 0) {
LAB_08546718:
    bVar2 = false;
  }
  else {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::InvenEmptycount(pCVar7,3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar11 = CInventory::QuickEmptyCount(pCVar7);
    if (local_10 <= (uint)(iVar6 + iVar11)) goto LAB_08546718;
    bVar2 = true;
  }
  if (bVar2) {
    return 0x15;
  }
LAB_08546728:
  local_18 = 0;
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar3 == '\0') {
    local_18 = 1;
  }
  else {
    local_18 = 2;
  }
  uVar10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = CEquipItem::isUpgradableLevel((CEquipItem *)param_3,local_18,uVar10);
  if (cVar3 == '\x01') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x13;
  }
  return uVar10;
}

```

---

## _CheckCondition_085497ea

```asm
// === 085497ea WongWork::CItemUpgrade::_CheckCondition  [0x085497ea-0x8549ac7] ===
 85497ea:	55                   	push   %ebp
 85497eb:	89 e5                	mov    %esp,%ebp
 85497ed:	53                   	push   %ebx
 85497ee:	83 ec 44             	sub    $0x44,%esp
 85497f1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85497f4:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85497f7:	8b 45 10             	mov    0x10(%ebp),%eax
 85497fa:	83 c0 11             	add    $0x11,%eax
 85497fd:	89 04 24             	mov    %eax,(%esp)
 8549800:	e8 b7 6f c0 ff       	call   81507bc <_ZNK17stAmplifyOption_t12isIdentifiedEv>
 8549805:	83 f0 01             	xor    $0x1,%eax
 8549808:	84 c0                	test   %al,%al
 854980a:	74 0a                	je     8549816 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2c>
 854980c:	b8 ae 00 00 00       	mov    $0xae,%eax
 8549811:	e9 ac 02 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549816:	8b 45 10             	mov    0x10(%ebp),%eax
 8549819:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 854981d:	3c 01                	cmp    $0x1,%al
 854981f:	74 0a                	je     854982b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x41>
 8549821:	b8 13 00 00 00       	mov    $0x13,%eax
 8549826:	e9 97 02 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 854982b:	8b 45 14             	mov    0x14(%ebp),%eax
 854982e:	8b 00                	mov    (%eax),%eax
 8549830:	83 c0 0c             	add    $0xc,%eax
 8549833:	8b 10                	mov    (%eax),%edx
 8549835:	8b 45 14             	mov    0x14(%ebp),%eax
 8549838:	89 04 24             	mov    %eax,(%esp)
 854983b:	ff d2                	call   *%edx
 854983d:	83 f8 0b             	cmp    $0xb,%eax
 8549840:	0f 94 c0             	sete   %al
 8549843:	84 c0                	test   %al,%al
 8549845:	74 0a                	je     8549851 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x67>
 8549847:	b8 13 00 00 00       	mov    $0x13,%eax
 854984c:	e9 71 02 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549851:	8b 45 14             	mov    0x14(%ebp),%eax
 8549854:	8b 00                	mov    (%eax),%eax
 8549856:	83 c0 0c             	add    $0xc,%eax
 8549859:	8b 10                	mov    (%eax),%edx
 854985b:	8b 45 14             	mov    0x14(%ebp),%eax
 854985e:	89 04 24             	mov    %eax,(%esp)
 8549861:	ff d2                	call   *%edx
 8549863:	83 f8 09             	cmp    $0x9,%eax
 8549866:	7e 17                	jle    854987f <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x95>
 8549868:	8b 45 14             	mov    0x14(%ebp),%eax
 854986b:	8b 00                	mov    (%eax),%eax
 854986d:	83 c0 0c             	add    $0xc,%eax
 8549870:	8b 10                	mov    (%eax),%edx
 8549872:	8b 45 14             	mov    0x14(%ebp),%eax
 8549875:	89 04 24             	mov    %eax,(%esp)
 8549878:	ff d2                	call   *%edx
 854987a:	83 f8 15             	cmp    $0x15,%eax
 854987d:	7e 07                	jle    8549886 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x9c>
 854987f:	b8 01 00 00 00       	mov    $0x1,%eax
 8549884:	eb 05                	jmp    854988b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0xa1>
 8549886:	b8 00 00 00 00       	mov    $0x0,%eax
 854988b:	84 c0                	test   %al,%al
 854988d:	74 0a                	je     8549899 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0xaf>
 854988f:	b8 13 00 00 00       	mov    $0x13,%eax
 8549894:	e9 29 02 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549899:	8b 45 10             	mov    0x10(%ebp),%eax
 854989c:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 85498a0:	0f b7 d8             	movzwl %ax,%ebx
 85498a3:	8b 45 14             	mov    0x14(%ebp),%eax
 85498a6:	89 04 24             	mov    %eax,(%esp)
 85498a9:	e8 ea 54 bd ff       	call   811ed98 <_ZNK10CEquipItem13get_enduranceEv>
 85498ae:	39 c3                	cmp    %eax,%ebx
 85498b0:	0f 95 c0             	setne  %al
 85498b3:	84 c0                	test   %al,%al
 85498b5:	74 0a                	je     85498c1 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0xd7>
 85498b7:	b8 07 00 00 00       	mov    $0x7,%eax
 85498bc:	e9 01 02 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 85498c1:	8b 45 14             	mov    0x14(%ebp),%eax
 85498c4:	89 04 24             	mov    %eax,(%esp)
 85498c7:	e8 0a 7a ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85498cc:	89 c3                	mov    %eax,%ebx
 85498ce:	e8 c8 28 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85498d3:	8b 40 1c             	mov    0x1c(%eax),%eax
 85498d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85498da:	89 04 24             	mov    %eax,(%esp)
 85498dd:	e8 66 98 f2 ff       	call   8473148 <_ZNK8DisJoint29getPredictResultItemTypeCountEi>
 85498e2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85498e5:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85498e9:	8b 45 10             	mov    0x10(%ebp),%eax
 85498ec:	83 c0 11             	add    $0x11,%eax
 85498ef:	89 04 24             	mov    %eax,(%esp)
 85498f2:	e8 d5 6e c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 85498f7:	84 c0                	test   %al,%al
 85498f9:	74 04                	je     85498ff <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x115>
 85498fb:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85498ff:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8549903:	74 3f                	je     8549944 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x15a>
 8549905:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549908:	89 04 24             	mov    %eax,(%esp)
 854990b:	e8 6e 09 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8549910:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8549917:	00 
 8549918:	89 04 24             	mov    %eax,(%esp)
 854991b:	e8 60 b7 fb ff       	call   8505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>
 8549920:	89 c3                	mov    %eax,%ebx
 8549922:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549925:	89 04 24             	mov    %eax,(%esp)
 8549928:	e8 51 09 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 854992d:	89 04 24             	mov    %eax,(%esp)
 8549930:	e8 03 b7 fb ff       	call   8505038 <_ZNK10CInventory15QuickEmptyCountEv>
 8549935:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8549938:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 854993b:	73 07                	jae    8549944 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x15a>
 854993d:	b8 01 00 00 00       	mov    $0x1,%eax
 8549942:	eb 05                	jmp    8549949 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x15f>
 8549944:	b8 00 00 00 00       	mov    $0x0,%eax
 8549949:	84 c0                	test   %al,%al
 854994b:	74 0a                	je     8549957 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x16d>
 854994d:	b8 15 00 00 00       	mov    $0x15,%eax
 8549952:	e9 6b 01 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549957:	8b 45 18             	mov    0x18(%ebp),%eax
 854995a:	8b 40 02             	mov    0x2(%eax),%eax
 854995d:	89 c3                	mov    %eax,%ebx
 854995f:	e8 37 28 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8549964:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8549968:	89 04 24             	mov    %eax,(%esp)
 854996b:	e8 c2 60 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8549970:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8549973:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8549977:	75 0a                	jne    8549983 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x199>
 8549979:	b8 15 00 00 00       	mov    $0x15,%eax
 854997e:	e9 3f 01 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549983:	8b 45 10             	mov    0x10(%ebp),%eax
 8549986:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 854998a:	83 e0 01             	and    $0x1,%eax
 854998d:	84 c0                	test   %al,%al
 854998f:	74 18                	je     85499a9 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x1bf>
 8549991:	8b 45 10             	mov    0x10(%ebp),%eax
 8549994:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 8549998:	83 e0 01             	and    $0x1,%eax
 854999b:	84 c0                	test   %al,%al
 854999d:	74 0a                	je     85499a9 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x1bf>
 854999f:	b8 13 00 00 00       	mov    $0x13,%eax
 85499a4:	e9 19 01 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 85499a9:	8b 45 10             	mov    0x10(%ebp),%eax
 85499ac:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 85499b0:	83 e0 01             	and    $0x1,%eax
 85499b3:	84 c0                	test   %al,%al
 85499b5:	74 3f                	je     85499f6 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x20c>
 85499b7:	8b 45 10             	mov    0x10(%ebp),%eax
 85499ba:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 85499be:	c0 e8 03             	shr    $0x3,%al
 85499c1:	0f b6 d0             	movzbl %al,%edx
 85499c4:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 85499c8:	39 c2                	cmp    %eax,%edx
 85499ca:	75 2a                	jne    85499f6 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x20c>
 85499cc:	8b 45 10             	mov    0x10(%ebp),%eax
 85499cf:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 85499d3:	d0 e8                	shr    $1,%al
 85499d5:	83 e0 03             	and    $0x3,%eax
 85499d8:	0f b6 d0             	movzbl %al,%edx
 85499db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85499de:	0f b6 80 0c 03 00 00 	movzbl 0x30c(%eax),%eax
 85499e5:	0f be c0             	movsbl %al,%eax
 85499e8:	39 c2                	cmp    %eax,%edx
 85499ea:	75 0a                	jne    85499f6 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x20c>
 85499ec:	b8 13 00 00 00       	mov    $0x13,%eax
 85499f1:	e9 cc 00 00 00       	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 85499f6:	8b 45 14             	mov    0x14(%ebp),%eax
 85499f9:	89 04 24             	mov    %eax,(%esp)
 85499fc:	e8 43 1b 00 00       	call   854b544 <_ZNK10CEquipItem20getEnchantSystemDataEv>
 8549a01:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8549a04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549a08:	89 14 24             	mov    %edx,(%esp)
 8549a0b:	e8 2c 23 fd ff       	call   851bd3c <_ZNKSt6vectorI19STEnchantSystemDataSaIS0_EE5beginEv>
 8549a10:	83 ec 04             	sub    $0x4,%esp
 8549a13:	8b 45 14             	mov    0x14(%ebp),%eax
 8549a16:	89 04 24             	mov    %eax,(%esp)
 8549a19:	e8 26 1b 00 00       	call   854b544 <_ZNK10CEquipItem20getEnchantSystemDataEv>
 8549a1e:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8549a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549a25:	89 14 24             	mov    %edx,(%esp)
 8549a28:	e8 3b 23 fd ff       	call   851bd68 <_ZNKSt6vectorI19STEnchantSystemDataSaIS0_EE3endEv>
 8549a2d:	83 ec 04             	sub    $0x4,%esp
 8549a30:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8549a34:	eb 5f                	jmp    8549a95 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2ab>
 8549a36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549a39:	89 04 24             	mov    %eax,(%esp)
 8549a3c:	e8 df 44 bb ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8549a41:	89 c3                	mov    %eax,%ebx
 8549a43:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8549a46:	89 04 24             	mov    %eax,(%esp)
 8549a49:	e8 38 1f 00 00       	call   854b986 <_ZNK9__gnu_cxx17__normal_iteratorIPK19STEnchantSystemDataSt6vectorIS1_SaIS1_EEEptEv>
 8549a4e:	8b 00                	mov    (%eax),%eax
 8549a50:	39 c3                	cmp    %eax,%ebx
 8549a52:	75 27                	jne    8549a7b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x291>
 8549a54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549a57:	89 04 24             	mov    %eax,(%esp)
 8549a5a:	e8 35 72 bc ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 8549a5f:	89 c3                	mov    %eax,%ebx
 8549a61:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8549a64:	89 04 24             	mov    %eax,(%esp)
 8549a67:	e8 1a 1f 00 00       	call   854b986 <_ZNK9__gnu_cxx17__normal_iteratorIPK19STEnchantSystemDataSt6vectorIS1_SaIS1_EEEptEv>
 8549a6c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8549a70:	38 c3                	cmp    %al,%bl
 8549a72:	75 07                	jne    8549a7b <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x291>
 8549a74:	b8 01 00 00 00       	mov    $0x1,%eax
 8549a79:	eb 05                	jmp    8549a80 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x296>
 8549a7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8549a80:	84 c0                	test   %al,%al
 8549a82:	74 06                	je     8549a8a <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2a0>
 8549a84:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8549a88:	eb 21                	jmp    8549aab <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2c1>
 8549a8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8549a8d:	89 04 24             	mov    %eax,(%esp)
 8549a90:	e8 33 d5 fd ff       	call   8526fc8 <_ZN9__gnu_cxx17__normal_iteratorIPK19STEnchantSystemDataSt6vectorIS1_SaIS1_EEEppEv>
 8549a95:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8549a98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549a9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8549a9f:	89 04 24             	mov    %eax,(%esp)
 8549aa2:	e8 f5 d4 fd ff       	call   8526f9c <_ZN9__gnu_cxxneIPK19STEnchantSystemDataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8549aa7:	84 c0                	test   %al,%al
 8549aa9:	75 8b                	jne    8549a36 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x24c>
 8549aab:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8549aaf:	83 f0 01             	xor    $0x1,%eax
 8549ab2:	84 c0                	test   %al,%al
 8549ab4:	74 07                	je     8549abd <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d3>
 8549ab6:	b8 01 00 00 00       	mov    $0x1,%eax
 8549abb:	eb 05                	jmp    8549ac2 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_h+0x2d8>
 8549abd:	b8 00 00 00 00       	mov    $0x0,%eax
 8549ac2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8549ac5:	c9                   	leave
 8549ac6:	c3                   	ret
 8549ac7:	90                   	nop

```

```c
// WongWork::CItemUpgrade::_CheckCondition @ 0x85497ea

/* WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item
   const&, unsigned char) */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckCondition
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,Inven_Item *param_4,
          uchar param_5)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  CDataManager *this_00;
  int *piVar9;
  __normal_iterator local_20 [4];
  __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
  local_1c [4];
  uint local_18;
  int local_14;
  char local_d;
  
  cVar2 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar2 != '\x01') {
    return 0xae;
  }
  if (param_2[1] != (Inven_Item)0x1) {
    return 0x13;
  }
  iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if (iVar4 == 0xb) {
    return 0x13;
  }
  iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3);
  if ((iVar4 < 10) || (iVar4 = (**(code **)(*(int *)param_3 + 0xc))(param_3), 0x15 < iVar4)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return 0x13;
  }
  uVar1 = *(ushort *)(param_2 + 0xb);
  uVar5 = CEquipItem::get_endurance((CEquipItem *)param_3);
  if (uVar1 != uVar5) {
    return 7;
  }
  iVar4 = CItem::get_rarity(param_3);
  iVar6 = G_CDataManager();
  iVar4 = DisJoint::getPredictResultItemTypeCount(*(DisJoint **)(iVar6 + 0x1c),iVar4);
  local_18 = iVar4 + 1;
  cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar2 != '\0') {
    local_18 = local_18 + 1;
  }
  if (local_18 != 0) {
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar4 = CInventory::InvenEmptycount(pCVar7,3);
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::QuickEmptyCount(pCVar7);
    if ((uint)(iVar4 + iVar6) < local_18) {
      bVar3 = true;
      goto LAB_08549949;
    }
  }
  bVar3 = false;
LAB_08549949:
  if (bVar3) {
    uVar8 = 0x15;
  }
  else {
    iVar4 = *(int *)(param_4 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::find_item(this_00,iVar4);
    if (param_3 == (CItem *)0x0) {
      uVar8 = 0x15;
    }
    else if ((((byte)param_2[0x1f] & 1) == 0) || (((byte)param_2[0x20] & 1) == 0)) {
      if ((((byte)param_2[0x1f] & 1) == 0) ||
         (((byte)param_2[0x1f] >> 3 != param_5 ||
          ((uint)((byte)param_2[0x1f] >> 1 & 3) != (int)*(char *)(local_14 + 0x30c))))) {
        CEquipItem::getEnchantSystemData((CEquipItem *)param_3);
        std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::begin();
        CEquipItem::getEnchantSystemData((CEquipItem *)param_3);
        std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>::end();
        local_d = '\0';
        while (bVar3 = __gnu_cxx::operator!=(local_1c,local_20), bVar3) {
          iVar4 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          piVar9 = (int *)__gnu_cxx::
                          __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
                          ::operator->(local_1c);
          if (iVar4 == *piVar9) {
            cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
            iVar4 = __gnu_cxx::
                    __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
                    ::operator->(local_1c);
            if (cVar2 != *(char *)(iVar4 + 4)) goto LAB_08549a7b;
            bVar3 = true;
          }
          else {
LAB_08549a7b:
            bVar3 = false;
          }
          if (bVar3) {
            local_d = '\x01';
            break;
          }
          __gnu_cxx::
          __normal_iterator<STEnchantSystemData_const*,std::vector<STEnchantSystemData,std::allocator<STEnchantSystemData>>>
          ::operator++(local_1c);
        }
        if (local_d == '\x01') {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 0x13;
      }
    }
    else {
      uVar8 = 0x13;
    }
  }
  return uVar8;
}

```

---

## _CheckTargetUsableLv

```asm
// === 08548c3c WongWork::CItemUpgrade::_CheckTargetUsableLv  [0x08548c3c-0x8548d3b] ===
 8548c3c:	55                   	push   %ebp
 8548c3d:	89 e5                	mov    %esp,%ebp
 8548c3f:	53                   	push   %ebx
 8548c40:	83 ec 34             	sub    $0x34,%esp
 8548c43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548c46:	8b 40 02             	mov    0x2(%eax),%eax
 8548c49:	89 c3                	mov    %eax,%ebx
 8548c4b:	e8 4b 35 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8548c50:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8548c54:	89 04 24             	mov    %eax,(%esp)
 8548c57:	e8 d6 6d e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8548c5c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8548c5f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8548c63:	75 0a                	jne    8548c6f <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0x33>
 8548c65:	b8 00 00 00 00       	mov    $0x0,%eax
 8548c6a:	e9 c7 00 00 00       	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548c6f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8548c72:	89 04 24             	mov    %eax,(%esp)
 8548c75:	e8 80 86 ba ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8548c7a:	83 f0 01             	xor    $0x1,%eax
 8548c7d:	84 c0                	test   %al,%al
 8548c7f:	74 0a                	je     8548c8b <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0x4f>
 8548c81:	b8 01 00 00 00       	mov    $0x1,%eax
 8548c86:	e9 ab 00 00 00       	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548c8b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8548c8e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8548c91:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8548c94:	0f b6 80 20 03 00 00 	movzbl 0x320(%eax),%eax
 8548c9b:	83 f0 01             	xor    $0x1,%eax
 8548c9e:	84 c0                	test   %al,%al
 8548ca0:	74 0a                	je     8548cac <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0x70>
 8548ca2:	b8 01 00 00 00       	mov    $0x1,%eax
 8548ca7:	e9 8a 00 00 00       	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548cac:	8b 45 10             	mov    0x10(%ebp),%eax
 8548caf:	8b 40 02             	mov    0x2(%eax),%eax
 8548cb2:	89 c3                	mov    %eax,%ebx
 8548cb4:	e8 e2 34 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8548cb9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8548cbd:	89 04 24             	mov    %eax,(%esp)
 8548cc0:	e8 6d 6d e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8548cc5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8548cc8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8548ccc:	75 07                	jne    8548cd5 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0x99>
 8548cce:	b8 00 00 00 00       	mov    $0x0,%eax
 8548cd3:	eb 61                	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548cd5:	8b 45 10             	mov    0x10(%ebp),%eax
 8548cd8:	89 04 24             	mov    %eax,(%esp)
 8548cdb:	e8 32 7b c0 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 8548ce0:	83 f0 01             	xor    $0x1,%eax
 8548ce3:	84 c0                	test   %al,%al
 8548ce5:	74 07                	je     8548cee <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xb2>
 8548ce7:	b8 00 00 00 00       	mov    $0x0,%eax
 8548cec:	eb 48                	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548cee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8548cf1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8548cf4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8548cf7:	8b 80 18 03 00 00    	mov    0x318(%eax),%eax
 8548cfd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8548d00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8548d03:	8b 80 1c 03 00 00    	mov    0x31c(%eax),%eax
 8548d09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8548d0c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548d0f:	89 04 24             	mov    %eax,(%esp)
 8548d12:	e8 d7 85 ba ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8548d17:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8548d1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8548d1d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8548d20:	7f 08                	jg     8548d2a <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xee>
 8548d22:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8548d25:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8548d28:	7e 07                	jle    8548d31 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xf5>
 8548d2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8548d2f:	eb 05                	jmp    8548d36 <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_+0xfa>
 8548d31:	b8 01 00 00 00       	mov    $0x1,%eax
 8548d36:	83 c4 34             	add    $0x34,%esp
 8548d39:	5b                   	pop    %ebx
 8548d3a:	5d                   	pop    %ebp
 8548d3b:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_CheckTargetUsableLv @ 0x8548c3c

/* WongWork::CItemUpgrade::_CheckTargetUsableLv(Inven_Item const&, Inven_Item const&) const */

undefined4 __thiscall
WongWork::CItemUpgrade::_CheckTargetUsableLv
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CDataManager *pCVar4;
  CItem *this_00;
  undefined4 uVar5;
  CItem *this_01;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 2);
  pCVar4 = (CDataManager *)G_CDataManager();
  this_00 = (CItem *)CDataManager::find_item(pCVar4,iVar1);
  if (this_00 == (CItem *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = CItem::is_stackable(this_00);
    if (cVar3 == '\x01') {
      if (this_00[800] == (CItem)0x1) {
        iVar1 = *(int *)(param_2 + 2);
        pCVar4 = (CDataManager *)G_CDataManager();
        this_01 = (CItem *)CDataManager::find_item(pCVar4,iVar1);
        if (this_01 == (CItem *)0x0) {
          uVar5 = 0;
        }
        else {
          cVar3 = Inven_Item::isEquipableItemType(param_2);
          if (cVar3 == '\x01') {
            iVar1 = *(int *)(this_00 + 0x318);
            iVar2 = *(int *)(this_00 + 0x31c);
            iVar6 = CItem::getUsableLevel(this_01);
            if ((iVar6 < iVar1) || (iVar2 < iVar6)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
          }
          else {
            uVar5 = 0;
          }
        }
      }
      else {
        uVar5 = 1;
      }
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## _DoProcUpgrade

```asm
// === 0854755a WongWork::CItemUpgrade::_DoProcUpgrade  [0x0854755a-0x854779b] ===
 854755a:	55                   	push   %ebp
 854755b:	89 e5                	mov    %esp,%ebp
 854755d:	53                   	push   %ebx
 854755e:	81 ec 94 00 00 00    	sub    $0x94,%esp
 8547564:	8b 45 14             	mov    0x14(%ebp),%eax
 8547567:	8b 40 20             	mov    0x20(%eax),%eax
 854756a:	89 45 8c             	mov    %eax,-0x74(%ebp)
 854756d:	8b 45 14             	mov    0x14(%ebp),%eax
 8547570:	8b 50 2c             	mov    0x2c(%eax),%edx
 8547573:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8547578:	8d 4d 8c             	lea    -0x74(%ebp),%ecx
 854757b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 854757f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547583:	89 04 24             	mov    %eax,(%esp)
 8547586:	e8 57 d9 ba ff       	call   80f4ee2 <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj>
 854758b:	8b 45 8c             	mov    -0x74(%ebp),%eax
 854758e:	85 c0                	test   %eax,%eax
 8547590:	0f 84 9f 00 00 00    	je     8547635 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0xdb>
 8547596:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 854759b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85475a2:	00 
 85475a3:	89 04 24             	mov    %eax,(%esp)
 85475a6:	e8 81 07 f7 ff       	call   84b7d2c <_ZNK20CGlobalEffectManager16isAffectedEffectEj>
 85475ab:	84 c0                	test   %al,%al
 85475ad:	0f 84 82 00 00 00    	je     8547635 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0xdb>
 85475b3:	a1 ec f7 41 09       	mov    0x941f7ec,%eax
 85475b8:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 85475bf:	00 
 85475c0:	89 04 24             	mov    %eax,(%esp)
 85475c3:	e8 e2 07 f7 ff       	call   84b7daa <_ZNK20CGlobalEffectManager14getEffectValueEj>
 85475c8:	d9 5d ec             	fstps  -0x14(%ebp)
 85475cb:	8b 45 08             	mov    0x8(%ebp),%eax
 85475ce:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 85475d4:	89 45 84             	mov    %eax,-0x7c(%ebp)
 85475d7:	db 45 84             	fildl  -0x7c(%ebp)
 85475da:	d8 4d ec             	fmuls  -0x14(%ebp)
 85475dd:	d9 7d 82             	fnstcw -0x7e(%ebp)
 85475e0:	0f b7 45 82          	movzwl -0x7e(%ebp),%eax
 85475e4:	b4 0c                	mov    $0xc,%ah
 85475e6:	66 89 45 80          	mov    %ax,-0x80(%ebp)
 85475ea:	d9 6d 80             	fldcw  -0x80(%ebp)
 85475ed:	db 5d 84             	fistpl -0x7c(%ebp)
 85475f0:	d9 6d 82             	fldcw  -0x7e(%ebp)
 85475f3:	8b 55 84             	mov    -0x7c(%ebp),%edx
 85475f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85475f9:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 85475ff:	89 d1                	mov    %edx,%ecx
 8547601:	29 c1                	sub    %eax,%ecx
 8547603:	89 c8                	mov    %ecx,%eax
 8547605:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8547608:	8b 55 8c             	mov    -0x74(%ebp),%edx
 854760b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854760e:	89 d1                	mov    %edx,%ecx
 8547610:	29 c1                	sub    %eax,%ecx
 8547612:	89 c8                	mov    %ecx,%eax
 8547614:	89 45 90             	mov    %eax,-0x70(%ebp)
 8547617:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 854761e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8547621:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547625:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8547628:	89 04 24             	mov    %eax,(%esp)
 854762b:	e8 01 7f b3 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 8547630:	8b 00                	mov    (%eax),%eax
 8547632:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8547635:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8547638:	85 c0                	test   %eax,%eax
 854763a:	74 7a                	je     85476b6 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x15c>
 854763c:	c7 44 24 04 59 ac 27 	movl   $0x27ac59,0x4(%esp)
 8547643:	00 
 8547644:	8b 45 0c             	mov    0xc(%ebp),%eax
 8547647:	89 04 24             	mov    %eax,(%esp)
 854764a:	e8 cf 9b 08 00       	call   85d121e <_ZN10expert_job10CAlchemist27IsExistContinuousEffectItemEP5CUseri>
 854764f:	84 c0                	test   %al,%al
 8547651:	74 63                	je     85476b6 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x15c>
 8547653:	8b 45 08             	mov    0x8(%ebp),%eax
 8547656:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 854765c:	89 45 84             	mov    %eax,-0x7c(%ebp)
 854765f:	db 45 84             	fildl  -0x7c(%ebp)
 8547662:	d9 9d 7c ff ff ff    	fstps  -0x84(%ebp)
 8547668:	e8 f3 9c 08 00       	call   85d1360 <_ZN10expert_job10CAlchemist25GetItemUpgradeSuccessRateEv>
 854766d:	d8 8d 7c ff ff ff    	fmuls  -0x84(%ebp)
 8547673:	d9 7d 82             	fnstcw -0x7e(%ebp)
 8547676:	0f b7 45 82          	movzwl -0x7e(%ebp),%eax
 854767a:	b4 0c                	mov    $0xc,%ah
 854767c:	66 89 45 80          	mov    %ax,-0x80(%ebp)
 8547680:	d9 6d 80             	fldcw  -0x80(%ebp)
 8547683:	db 5d f4             	fistpl -0xc(%ebp)
 8547686:	d9 6d 82             	fldcw  -0x7e(%ebp)
 8547689:	8b 55 8c             	mov    -0x74(%ebp),%edx
 854768c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854768f:	89 d1                	mov    %edx,%ecx
 8547691:	29 c1                	sub    %eax,%ecx
 8547693:	89 c8                	mov    %ecx,%eax
 8547695:	89 45 98             	mov    %eax,-0x68(%ebp)
 8547698:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 854769f:	8d 45 98             	lea    -0x68(%ebp),%eax
 85476a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85476a6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85476a9:	89 04 24             	mov    %eax,(%esp)
 85476ac:	e8 80 7e b3 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 85476b1:	8b 00                	mov    (%eax),%eax
 85476b3:	89 45 8c             	mov    %eax,-0x74(%ebp)
 85476b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85476b9:	89 04 24             	mov    %eax,(%esp)
 85476bc:	e8 bd 2b b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85476c1:	8d 55 a3             	lea    -0x5d(%ebp),%edx
 85476c4:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 85476cb:	00 
 85476cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85476d3:	00 
 85476d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85476d8:	89 14 24             	mov    %edx,(%esp)
 85476db:	e8 38 42 fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85476e0:	83 ec 04             	sub    $0x4,%esp
 85476e3:	8b 45 a5             	mov    -0x5b(%ebp),%eax
 85476e6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85476e9:	e8 ad 4a b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85476ee:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85476f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85476f5:	89 04 24             	mov    %eax,(%esp)
 85476f8:	e8 35 83 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85476fd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8547700:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8547704:	74 37                	je     854773d <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x1e3>
 8547706:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8547709:	85 c0                	test   %eax,%eax
 854770b:	74 30                	je     854773d <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x1e3>
 854770d:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 8547710:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8547713:	89 04 24             	mov    %eax,(%esp)
 8547716:	e8 37 3e 00 00       	call   854b552 <_ZNK10CEquipItem22getUpgradeProbIncreaseEv>
 854771b:	89 da                	mov    %ebx,%edx
 854771d:	29 c2                	sub    %eax,%edx
 854771f:	89 d0                	mov    %edx,%eax
 8547721:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8547724:	8b 45 08             	mov    0x8(%ebp),%eax
 8547727:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 854772d:	89 c2                	mov    %eax,%edx
 854772f:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8547732:	39 c2                	cmp    %eax,%edx
 8547734:	73 07                	jae    854773d <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x1e3>
 8547736:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 854773d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8547740:	85 c0                	test   %eax,%eax
 8547742:	74 32                	je     8547776 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x21c>
 8547744:	8b 45 08             	mov    0x8(%ebp),%eax
 8547747:	8b 80 ec 04 00 00    	mov    0x4ec(%eax),%eax
 854774d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8547750:	8b 45 08             	mov    0x8(%ebp),%eax
 8547753:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 8547759:	8d 55 e0             	lea    -0x20(%ebp),%edx
 854775c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547760:	89 04 24             	mov    %eax,(%esp)
 8547763:	e8 56 43 b8 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 8547768:	8b 55 8c             	mov    -0x74(%ebp),%edx
 854776b:	39 d0                	cmp    %edx,%eax
 854776d:	73 07                	jae    8547776 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x21c>
 854776f:	b8 01 00 00 00       	mov    $0x1,%eax
 8547774:	eb 05                	jmp    854777b <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x221>
 8547776:	b8 00 00 00 00       	mov    $0x0,%eax
 854777b:	84 c0                	test   %al,%al
 854777d:	74 07                	je     8547786 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x22c>
 854777f:	b8 00 00 00 00       	mov    $0x0,%eax
 8547784:	eb 10                	jmp    8547796 <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t+0x23c>
 8547786:	8b 45 10             	mov    0x10(%ebp),%eax
 8547789:	89 04 24             	mov    %eax,(%esp)
 854778c:	e8 2d 3d 00 00       	call   854b4be <_ZN10Inven_Item10IncUpgradeEv>
 8547791:	b8 01 00 00 00       	mov    $0x1,%eax
 8547796:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8547799:	c9                   	leave
 854779a:	c3                   	ret
 854779b:	90                   	nop

```

```c
// WongWork::CItemUpgrade::_DoProcUpgrade @ 0x854755a

/* WongWork::CItemUpgrade::_DoProcUpgrade(CUser*, Inven_Item*, upgrade_info_t const*) */

bool __thiscall
WongWork::CItemUpgrade::_DoProcUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,upgrade_info_t *param_3)

{
  bool bVar1;
  char cVar2;
  size_t *psVar3;
  int iVar4;
  CDataManager *this_00;
  uint uVar5;
  longdouble lVar6;
  uint local_78;
  size_t local_74 [3];
  size_t local_68;
  undefined1 local_61 [2];
  int local_5f;
  ulong local_24;
  int local_20;
  CEquipItem *local_1c;
  float local_18;
  int local_14;
  int local_10;
  
  local_78 = *(uint *)(param_3 + 0x20);
  Event_Upgrade_Jar::GetProbability
            (GlobalData::s_pEvent_UpGrade_Jar,*(int *)(param_3 + 0x2c),&local_78);
  if ((local_78 != 0) &&
     (cVar2 = CGlobalEffectManager::isAffectedEffect(GlobalData::s_globalEffectManager_,3),
     cVar2 != '\0')) {
    lVar6 = (longdouble)CGlobalEffectManager::getEffectValue(GlobalData::s_globalEffectManager_,3);
    local_18 = (float)lVar6;
    local_14 = (int)ROUND((float)*(int *)(this + 0x4ec) * local_18) - *(int *)(this + 0x4ec);
    local_74[0] = local_78 - local_14;
    local_74[1] = 0;
    psVar3 = std::max<size_t>(local_74 + 1,local_74);
    local_78 = *psVar3;
  }
  if ((local_78 != 0) &&
     (cVar2 = expert_job::CAlchemist::IsExistContinuousEffectItem(param_1,0x27ac59), cVar2 != '\0'))
  {
    iVar4 = *(int *)(this + 0x4ec);
    lVar6 = (longdouble)expert_job::CAlchemist::GetItemUpgradeSuccessRate();
    local_10 = (int)ROUND(lVar6 * (longdouble)iVar4);
    local_74[2] = local_78 - local_10;
    local_68 = 0;
    psVar3 = std::max<size_t>(&local_68,local_74 + 2);
    local_78 = *psVar3;
  }
  iVar4 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)local_61,iVar4);
  local_20 = local_5f;
  this_00 = (CDataManager *)G_CDataManager();
  local_1c = (CEquipItem *)CDataManager::find_item(this_00,local_20);
  uVar5 = local_78;
  if ((local_1c != (CEquipItem *)0x0) && (local_78 != 0)) {
    iVar4 = CEquipItem::getUpgradeProbIncrease(local_1c);
    local_78 = uVar5 - iVar4;
    if (*(uint *)(this + 0x4ec) < local_78) {
      local_78 = 0;
    }
  }
  if (local_78 != 0) {
    local_24 = *(ulong *)(this + 0x4ec);
    uVar5 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_24);
    if (uVar5 < local_78) {
      bVar1 = true;
      goto LAB_0854777b;
    }
  }
  bVar1 = false;
LAB_0854777b:
  if (!bVar1) {
    Inven_Item::IncUpgrade(param_2);
  }
  return !bVar1;
}

```

---

## _GetUpgradeInfo

```asm
// === 0854678a WongWork::CItemUpgrade::_GetUpgradeInfo  [0x0854678a-0x8546823] ===
 854678a:	55                   	push   %ebp
 854678b:	89 e5                	mov    %esp,%ebp
 854678d:	57                   	push   %edi
 854678e:	56                   	push   %esi
 854678f:	53                   	push   %ebx
 8546790:	83 ec 3c             	sub    $0x3c,%esp
 8546793:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546796:	89 04 24             	mov    %eax,(%esp)
 8546799:	e8 ce e8 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854679e:	3c 1e                	cmp    $0x1e,%al
 85467a0:	0f 97 c0             	seta   %al
 85467a3:	84 c0                	test   %al,%al
 85467a5:	74 07                	je     85467ae <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti+0x24>
 85467a7:	b8 00 00 00 00       	mov    $0x0,%eax
 85467ac:	eb 6d                	jmp    854681b <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti+0x91>
 85467ae:	8b 45 10             	mov    0x10(%ebp),%eax
 85467b1:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85467b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85467b8:	89 04 24             	mov    %eax,(%esp)
 85467bb:	e8 f8 cf fc ff       	call   85137b8 <_ZNK10CEquipItem14getGrowthGradeEi>
 85467c0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85467c3:	8b 45 10             	mov    0x10(%ebp),%eax
 85467c6:	8b 00                	mov    (%eax),%eax
 85467c8:	83 c0 0c             	add    $0xc,%eax
 85467cb:	8b 10                	mov    (%eax),%edx
 85467cd:	8b 45 10             	mov    0x10(%ebp),%eax
 85467d0:	89 04 24             	mov    %eax,(%esp)
 85467d3:	ff d2                	call   *%edx
 85467d5:	89 c7                	mov    %eax,%edi
 85467d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85467da:	89 04 24             	mov    %eax,(%esp)
 85467dd:	e8 8a e8 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85467e2:	0f b6 f0             	movzbl %al,%esi
 85467e5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85467e8:	0f b6 d8             	movzbl %al,%ebx
 85467eb:	8b 45 10             	mov    0x10(%ebp),%eax
 85467ee:	89 04 24             	mov    %eax,(%esp)
 85467f1:	e8 e0 aa ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85467f6:	0f b6 c0             	movzbl %al,%eax
 85467f9:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85467fd:	89 74 24 10          	mov    %esi,0x10(%esp)
 8546801:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8546805:	89 44 24 08          	mov    %eax,0x8(%esp)
 8546809:	8b 45 18             	mov    0x18(%ebp),%eax
 854680c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546810:	8b 45 14             	mov    0x14(%ebp),%eax
 8546813:	89 04 24             	mov    %eax,(%esp)
 8546816:	e8 1b 9c 3b 00       	call   8900436 <_ZNK15upgrade_table_t16get_upgrade_infoEP14upgrade_info_thhh18ENUM_EQUIPMENTTYPE>
 854681b:	83 c4 3c             	add    $0x3c,%esp
 854681e:	5b                   	pop    %ebx
 854681f:	5e                   	pop    %esi
 8546820:	5f                   	pop    %edi
 8546821:	5d                   	pop    %ebp
 8546822:	c3                   	ret
 8546823:	90                   	nop

```

```c
// WongWork::CItemUpgrade::_GetUpgradeInfo @ 0x854678a

/* WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&,
   upgrade_info_t*, int) */

undefined4 __thiscall
WongWork::CItemUpgrade::_GetUpgradeInfo
          (CItemUpgrade *this,Inven_Item *param_1,CItem *param_2,upgrade_table_t *param_3,
          upgrade_info_t *param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  
  bVar1 = Inven_Item::GetUpgrade(param_1);
  if (bVar1 < 0x1f) {
    uVar2 = CEquipItem::getGrowthGrade((CEquipItem *)param_2,param_5);
    uVar5 = (**(code **)(*(int *)param_2 + 0xc))(param_2);
    uVar3 = Inven_Item::GetUpgrade(param_1);
    uVar4 = CItem::get_rarity(param_2);
    uVar5 = upgrade_table_t::get_upgrade_info(param_3,param_4,uVar4,uVar2,uVar3,uVar5);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## _NoticeUpgrade

```asm
// === 08546824 WongWork::CItemUpgrade::_NoticeUpgrade  [0x08546824-0x8546937] ===
 8546824:	55                   	push   %ebp
 8546825:	89 e5                	mov    %esp,%ebp
 8546827:	56                   	push   %esi
 8546828:	53                   	push   %ebx
 8546829:	83 ec 30             	sub    $0x30,%esp
 854682c:	8b 45 14             	mov    0x14(%ebp),%eax
 854682f:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8546832:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546835:	89 04 24             	mov    %eax,(%esp)
 8546838:	e8 0f 75 04 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 854683d:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 8546844:	00 
 8546845:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854684c:	00 
 854684d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546850:	89 04 24             	mov    %eax,(%esp)
 8546853:	e8 a4 50 b8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8546858:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854685f:	00 
 8546860:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546863:	89 04 24             	mov    %eax,(%esp)
 8546866:	e8 b5 50 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854686b:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 854686f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546873:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546876:	89 04 24             	mov    %eax,(%esp)
 8546879:	e8 a2 50 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854687e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546881:	89 04 24             	mov    %eax,(%esp)
 8546884:	e8 f3 3a b9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8546889:	0f b7 c0             	movzwl %ax,%eax
 854688c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546890:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546893:	89 04 24             	mov    %eax,(%esp)
 8546896:	e8 09 36 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 854689b:	8b 45 10             	mov    0x10(%ebp),%eax
 854689e:	8b 40 02             	mov    0x2(%eax),%eax
 85468a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85468a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85468a8:	89 04 24             	mov    %eax,(%esp)
 85468ab:	e8 8c 50 b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85468b0:	8b 45 10             	mov    0x10(%ebp),%eax
 85468b3:	89 04 24             	mov    %eax,(%esp)
 85468b6:	e8 b1 e7 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85468bb:	0f b6 c0             	movzbl %al,%eax
 85468be:	89 44 24 04          	mov    %eax,0x4(%esp)
 85468c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85468c5:	89 04 24             	mov    %eax,(%esp)
 85468c8:	e8 53 50 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85468cd:	8b 45 10             	mov    0x10(%ebp),%eax
 85468d0:	8d 50 25             	lea    0x25(%eax),%edx
 85468d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85468d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85468da:	89 14 24             	mov    %edx,(%esp)
 85468dd:	e8 cc 88 bd ff       	call   811f1ae <_ZNK12RandomOption24put_packet_random_optionI11PacketGuardEEvRT_>
 85468e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85468e9:	00 
 85468ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85468ed:	89 04 24             	mov    %eax,(%esp)
 85468f0:	e8 63 50 b8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85468f5:	e8 ad 3a b9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85468fa:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85468fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546901:	89 04 24             	mov    %eax,(%esp)
 8546904:	e8 0b 23 18 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 8546909:	eb 1b                	jmp    8546926 <_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb+0x102>
 854690b:	89 d3                	mov    %edx,%ebx
 854690d:	89 c6                	mov    %eax,%esi
 854690f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546912:	89 04 24             	mov    %eax,(%esp)
 8546915:	e8 66 75 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 854691a:	89 f0                	mov    %esi,%eax
 854691c:	89 da                	mov    %ebx,%edx
 854691e:	89 04 24             	mov    %eax,(%esp)
 8546921:	e8 2a ce 59 00       	call   8ae3750 <_Unwind_Resume>
 8546926:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546929:	89 04 24             	mov    %eax,(%esp)
 854692c:	e8 4f 75 04 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8546931:	83 c4 30             	add    $0x30,%esp
 8546934:	5b                   	pop    %ebx
 8546935:	5e                   	pop    %esi
 8546936:	5d                   	pop    %ebp
 8546937:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_NoticeUpgrade @ 0x8546824

/* WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool) */

void __thiscall
WongWork::CItemUpgrade::_NoticeUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,bool param_3)

{
  uint uVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08546853 to 08546908 has its CatchHandler @ 0854690b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,*(int *)(param_2 + 2));
  uVar1 = Inven_Item::GetUpgrade(param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  RandomOption::put_packet_random_option<PacketGuard>((RandomOption *)(param_2 + 0x25),local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _ProcPenalty

```asm
// === 08546bba WongWork::CItemUpgrade::_ProcPenalty  [0x08546bba-0x8547559] ===
 8546bba:	55                   	push   %ebp
 8546bbb:	89 e5                	mov    %esp,%ebp
 8546bbd:	56                   	push   %esi
 8546bbe:	53                   	push   %ebx
 8546bbf:	81 ec 80 01 00 00    	sub    $0x180,%esp
 8546bc5:	8b 55 18             	mov    0x18(%ebp),%edx
 8546bc8:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8546bcb:	66 89 95 d4 fe ff ff 	mov    %dx,-0x12c(%ebp)
 8546bd2:	88 85 d0 fe ff ff    	mov    %al,-0x130(%ebp)
 8546bd8:	8b 45 28             	mov    0x28(%ebp),%eax
 8546bdb:	8b 40 02             	mov    0x2(%eax),%eax
 8546bde:	85 c0                	test   %eax,%eax
 8546be0:	74 1b                	je     8546bfd <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x43>
 8546be2:	80 bd d0 fe ff ff 00 	cmpb   $0x0,-0x130(%ebp)
 8546be9:	75 09                	jne    8546bf4 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x3a>
 8546beb:	c7 45 c0 01 00 00 00 	movl   $0x1,-0x40(%ebp)
 8546bf2:	eb 59                	jmp    8546c4d <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x93>
 8546bf4:	c7 45 c0 02 00 00 00 	movl   $0x2,-0x40(%ebp)
 8546bfb:	eb 50                	jmp    8546c4d <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x93>
 8546bfd:	8b 45 14             	mov    0x14(%ebp),%eax
 8546c00:	89 04 24             	mov    %eax,(%esp)
 8546c03:	e8 ce a6 ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8546c08:	89 c3                	mov    %eax,%ebx
 8546c0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8546c0d:	89 04 24             	mov    %eax,(%esp)
 8546c10:	e8 57 e4 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546c15:	0f b6 c0             	movzbl %al,%eax
 8546c18:	8b 55 20             	mov    0x20(%ebp),%edx
 8546c1b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8546c1f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8546c23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546c27:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8546c2a:	89 04 24             	mov    %eax,(%esp)
 8546c2d:	e8 bc 97 3b 00       	call   89003ee <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t>
 8546c32:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8546c35:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8546c3a:	89 04 24             	mov    %eax,(%esp)
 8546c3d:	e8 3a 49 00 00       	call   854b57c <_ZNK17Event_Upgrade_Jar9isFortuneEv>
 8546c42:	84 c0                	test   %al,%al
 8546c44:	74 07                	je     8546c4d <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x93>
 8546c46:	c7 45 c0 02 00 00 00 	movl   $0x2,-0x40(%ebp)
 8546c4d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8546c50:	0f be d0             	movsbl %al,%edx
 8546c53:	8b 45 24             	mov    0x24(%ebp),%eax
 8546c56:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546c5a:	89 04 24             	mov    %eax,(%esp)
 8546c5d:	e8 be 4c b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8546c62:	83 7d c0 01          	cmpl   $0x1,-0x40(%ebp)
 8546c66:	75 38                	jne    8546ca0 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0xe6>
 8546c68:	8b 45 10             	mov    0x10(%ebp),%eax
 8546c6b:	89 04 24             	mov    %eax,(%esp)
 8546c6e:	e8 f9 e3 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546c73:	0f b6 d0             	movzbl %al,%edx
 8546c76:	8b 45 24             	mov    0x24(%ebp),%eax
 8546c79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546c7d:	89 04 24             	mov    %eax,(%esp)
 8546c80:	e8 9b 4c b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8546c85:	0f b7 95 d4 fe ff ff 	movzwl -0x12c(%ebp),%edx
 8546c8c:	8b 45 24             	mov    0x24(%ebp),%eax
 8546c8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546c93:	89 04 24             	mov    %eax,(%esp)
 8546c96:	e8 09 32 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8546c9b:	e9 ab 08 00 00       	jmp    854754b <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x991>
 8546ca0:	83 7d c0 02          	cmpl   $0x2,-0x40(%ebp)
 8546ca4:	0f 85 f7 00 00 00    	jne    8546da1 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x1e7>
 8546caa:	a1 58 f7 41 09       	mov    0x941f758,%eax
 8546caf:	89 04 24             	mov    %eax,(%esp)
 8546cb2:	e8 c5 48 00 00       	call   854b57c <_ZNK17Event_Upgrade_Jar9isFortuneEv>
 8546cb7:	84 c0                	test   %al,%al
 8546cb9:	74 12                	je     8546ccd <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x113>
 8546cbb:	8b 45 20             	mov    0x20(%ebp),%eax
 8546cbe:	83 c0 28             	add    $0x28,%eax
 8546cc1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8546cc4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8546cc7:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8546ccd:	8b 45 20             	mov    0x20(%ebp),%eax
 8546cd0:	8b 58 28             	mov    0x28(%eax),%ebx
 8546cd3:	8b 45 10             	mov    0x10(%ebp),%eax
 8546cd6:	89 04 24             	mov    %eax,(%esp)
 8546cd9:	e8 8e e3 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546cde:	0f b6 c0             	movzbl %al,%eax
 8546ce1:	39 c3                	cmp    %eax,%ebx
 8546ce3:	7d 09                	jge    8546cee <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x134>
 8546ce5:	80 bd d0 fe ff ff 00 	cmpb   $0x0,-0x130(%ebp)
 8546cec:	79 07                	jns    8546cf5 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x13b>
 8546cee:	b8 01 00 00 00       	mov    $0x1,%eax
 8546cf3:	eb 05                	jmp    8546cfa <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x140>
 8546cf5:	b8 00 00 00 00       	mov    $0x0,%eax
 8546cfa:	84 c0                	test   %al,%al
 8546cfc:	74 15                	je     8546d13 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x159>
 8546cfe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8546d05:	00 
 8546d06:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d09:	89 04 24             	mov    %eax,(%esp)
 8546d0c:	e8 eb a2 ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8546d11:	eb 56                	jmp    8546d69 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x1af>
 8546d13:	80 bd d0 fe ff ff 00 	cmpb   $0x0,-0x130(%ebp)
 8546d1a:	7e 28                	jle    8546d44 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x18a>
 8546d1c:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d1f:	89 04 24             	mov    %eax,(%esp)
 8546d22:	e8 45 e3 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546d27:	0f b6 95 d0 fe ff ff 	movzbl -0x130(%ebp),%edx
 8546d2e:	28 d0                	sub    %dl,%al
 8546d30:	0f b6 c0             	movzbl %al,%eax
 8546d33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546d37:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d3a:	89 04 24             	mov    %eax,(%esp)
 8546d3d:	e8 ba a2 ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8546d42:	eb 25                	jmp    8546d69 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x1af>
 8546d44:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d47:	89 04 24             	mov    %eax,(%esp)
 8546d4a:	e8 1d e3 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546d4f:	8b 55 20             	mov    0x20(%ebp),%edx
 8546d52:	8b 52 28             	mov    0x28(%edx),%edx
 8546d55:	28 d0                	sub    %dl,%al
 8546d57:	0f b6 c0             	movzbl %al,%eax
 8546d5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546d5e:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d61:	89 04 24             	mov    %eax,(%esp)
 8546d64:	e8 93 a2 ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8546d69:	8b 45 10             	mov    0x10(%ebp),%eax
 8546d6c:	89 04 24             	mov    %eax,(%esp)
 8546d6f:	e8 f8 e2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8546d74:	0f b6 d0             	movzbl %al,%edx
 8546d77:	8b 45 24             	mov    0x24(%ebp),%eax
 8546d7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546d7e:	89 04 24             	mov    %eax,(%esp)
 8546d81:	e8 9a 4b b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8546d86:	0f b7 95 d4 fe ff ff 	movzwl -0x12c(%ebp),%edx
 8546d8d:	8b 45 24             	mov    0x24(%ebp),%eax
 8546d90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546d94:	89 04 24             	mov    %eax,(%esp)
 8546d97:	e8 08 31 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8546d9c:	e9 aa 07 00 00       	jmp    854754b <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x991>
 8546da1:	83 7d c0 03          	cmpl   $0x3,-0x40(%ebp)
 8546da5:	0f 85 a0 07 00 00    	jne    854754b <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x991>
 8546dab:	8b 45 10             	mov    0x10(%ebp),%eax
 8546dae:	83 c0 11             	add    $0x11,%eax
 8546db1:	89 04 24             	mov    %eax,(%esp)
 8546db4:	e8 13 9a c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8546db9:	83 f0 01             	xor    $0x1,%eax
 8546dbc:	84 c0                	test   %al,%al
 8546dbe:	0f 84 c0 02 00 00    	je     8547084 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x4ca>
 8546dc4:	c7 45 d0 ff ff ff ff 	movl   $0xffffffff,-0x30(%ebp)
 8546dcb:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
 8546dd2:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 8546dd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546ddc:	89 04 24             	mov    %eax,(%esp)
 8546ddf:	e8 9a 34 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546de4:	c7 44 24 04 7e be 28 	movl   $0x28be7e,0x4(%esp)
 8546deb:	00 
 8546dec:	89 04 24             	mov    %eax,(%esp)
 8546def:	e8 7e e3 fb ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8546df4:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8546df7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546dfa:	89 04 24             	mov    %eax,(%esp)
 8546dfd:	e8 7c 34 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546e02:	c7 44 24 04 72 1f 00 	movl   $0x1f72,0x4(%esp)
 8546e09:	00 
 8546e0a:	89 04 24             	mov    %eax,(%esp)
 8546e0d:	e8 60 e3 fb ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8546e12:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8546e15:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 8546e1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546e1f:	89 04 24             	mov    %eax,(%esp)
 8546e22:	e8 57 34 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546e27:	c7 44 24 04 ba 20 00 	movl   $0x20ba,0x4(%esp)
 8546e2e:	00 
 8546e2f:	89 04 24             	mov    %eax,(%esp)
 8546e32:	e8 3b e3 fb ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8546e37:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8546e3a:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 8546e3e:	74 08                	je     8546e48 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x28e>
 8546e40:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8546e43:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8546e46:	eb 1a                	jmp    8546e62 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x2a8>
 8546e48:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 8546e4c:	74 08                	je     8546e56 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x29c>
 8546e4e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8546e51:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8546e54:	eb 0c                	jmp    8546e62 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x2a8>
 8546e56:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 8546e5a:	74 06                	je     8546e62 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x2a8>
 8546e5c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8546e5f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8546e62:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 8546e69:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546e6c:	89 04 24             	mov    %eax,(%esp)
 8546e6f:	e8 0a 34 b9 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8546e74:	c7 44 24 04 ac 91 20 	movl   $0x292091ac,0x4(%esp)
 8546e7b:	29 
 8546e7c:	89 04 24             	mov    %eax,(%esp)
 8546e7f:	e8 ee e2 fb ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8546e84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8546e87:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
 8546e8b:	74 06                	je     8546e93 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x2d9>
 8546e8d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8546e90:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8546e93:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 8546e97:	0f 84 e7 01 00 00    	je     8547084 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x4ca>
 8546e9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546ea0:	89 04 24             	mov    %eax,(%esp)
 8546ea3:	e8 e6 33 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8546ea8:	8d 95 1f ff ff ff    	lea    -0xe1(%ebp),%edx
 8546eae:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8546eb1:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8546eb5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8546ebc:	00 
 8546ebd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546ec1:	89 14 24             	mov    %edx,(%esp)
 8546ec4:	e8 4f 4a fb ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8546ec9:	83 ec 04             	sub    $0x4,%esp
 8546ecc:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8546ed2:	3d 7e be 28 00       	cmp    $0x28be7e,%eax
 8546ed7:	74 31                	je     8546f0a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x350>
 8546ed9:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8546edf:	3d 72 1f 00 00       	cmp    $0x1f72,%eax
 8546ee4:	74 24                	je     8546f0a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x350>
 8546ee6:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8546eec:	3d ba 20 00 00       	cmp    $0x20ba,%eax
 8546ef1:	74 17                	je     8546f0a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x350>
 8546ef3:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8546ef9:	3d ac 91 20 29       	cmp    $0x292091ac,%eax
 8546efe:	74 0a                	je     8546f0a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x350>
 8546f00:	b8 11 00 00 00       	mov    $0x11,%eax
 8546f05:	e9 46 06 00 00       	jmp    8547550 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x996>
 8546f0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546f0d:	89 04 24             	mov    %eax,(%esp)
 8546f10:	e8 79 33 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8546f15:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8546f1c:	00 
 8546f1d:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8546f24:	00 
 8546f25:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8546f2c:	00 
 8546f2d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8546f30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8546f34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8546f3b:	00 
 8546f3c:	89 04 24             	mov    %eax,(%esp)
 8546f3f:	e8 c8 d0 fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8546f44:	83 f0 01             	xor    $0x1,%eax
 8546f47:	84 c0                	test   %al,%al
 8546f49:	74 0a                	je     8546f55 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x39b>
 8546f4b:	b8 11 00 00 00       	mov    $0x11,%eax
 8546f50:	e9 fb 05 00 00       	jmp    8547550 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x996>
 8546f55:	8b 45 10             	mov    0x10(%ebp),%eax
 8546f58:	8b 40 02             	mov    0x2(%eax),%eax
 8546f5b:	89 c2                	mov    %eax,%edx
 8546f5d:	8b 85 21 ff ff ff    	mov    -0xdf(%ebp),%eax
 8546f63:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8546f66:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8546f6c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8546f73:	00 
 8546f74:	89 54 24 08          	mov    %edx,0x8(%esp)
 8546f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546f7c:	89 0c 24             	mov    %ecx,(%esp)
 8546f7f:	e8 f8 fc 13 00       	call   8686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>
 8546f84:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8546f87:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8546f8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8546f92:	00 
 8546f93:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8546f9a:	00 
 8546f9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546f9e:	89 04 24             	mov    %eax,(%esp)
 8546fa1:	e8 32 53 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8546fa6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8546fad:	00 
 8546fae:	8b 45 10             	mov    0x10(%ebp),%eax
 8546fb1:	89 04 24             	mov    %eax,(%esp)
 8546fb4:	e8 43 a0 ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8546fb9:	0f b7 9d d4 fe ff ff 	movzwl -0x12c(%ebp),%ebx
 8546fc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546fc3:	89 04 24             	mov    %eax,(%esp)
 8546fc6:	e8 c3 32 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8546fcb:	89 c2                	mov    %eax,%edx
 8546fcd:	8b 45 10             	mov    0x10(%ebp),%eax
 8546fd0:	8b 08                	mov    (%eax),%ecx
 8546fd2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8546fd6:	8b 48 04             	mov    0x4(%eax),%ecx
 8546fd9:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8546fdd:	8b 48 08             	mov    0x8(%eax),%ecx
 8546fe0:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8546fe4:	8b 48 0c             	mov    0xc(%eax),%ecx
 8546fe7:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8546feb:	8b 48 10             	mov    0x10(%eax),%ecx
 8546fee:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8546ff2:	8b 48 14             	mov    0x14(%eax),%ecx
 8546ff5:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8546ff9:	8b 48 18             	mov    0x18(%eax),%ecx
 8546ffc:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8547000:	8b 48 1c             	mov    0x1c(%eax),%ecx
 8547003:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8547007:	8b 48 20             	mov    0x20(%eax),%ecx
 854700a:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 854700e:	8b 48 24             	mov    0x24(%eax),%ecx
 8547011:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8547015:	8b 48 28             	mov    0x28(%eax),%ecx
 8547018:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 854701c:	8b 48 2c             	mov    0x2c(%eax),%ecx
 854701f:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8547023:	8b 48 30             	mov    0x30(%eax),%ecx
 8547026:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 854702a:	8b 48 34             	mov    0x34(%eax),%ecx
 854702d:	89 4c 24 40          	mov    %ecx,0x40(%esp)
 8547031:	8b 48 38             	mov    0x38(%eax),%ecx
 8547034:	89 4c 24 44          	mov    %ecx,0x44(%esp)
 8547038:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 854703c:	88 44 24 48          	mov    %al,0x48(%esp)
 8547040:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8547044:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854704b:	00 
 854704c:	89 14 24             	mov    %edx,(%esp)
 854704f:	e8 5a 90 fb ff       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 8547054:	0f b7 85 d4 fe ff ff 	movzwl -0x12c(%ebp),%eax
 854705b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854705f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8547066:	00 
 8547067:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 854706e:	00 
 854706f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8547072:	89 04 24             	mov    %eax,(%esp)
 8547075:	e8 5e 52 13 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 854707a:	b8 d8 00 00 00       	mov    $0xd8,%eax
 854707f:	e9 cc 04 00 00       	jmp    8547550 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x996>
 8547084:	0f b7 9d d4 fe ff ff 	movzwl -0x12c(%ebp),%ebx
 854708b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854708e:	89 04 24             	mov    %eax,(%esp)
 8547091:	e8 f8 31 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8547096:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 854709d:	00 
 854709e:	c7 44 24 10 0d 00 00 	movl   $0xd,0x10(%esp)
 85470a5:	00 
 85470a6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85470ad:	00 
 85470ae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85470b2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85470b9:	00 
 85470ba:	89 04 24             	mov    %eax,(%esp)
 85470bd:	e8 4a cf fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85470c2:	83 f0 01             	xor    $0x1,%eax
 85470c5:	84 c0                	test   %al,%al
 85470c7:	74 0a                	je     85470d3 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x519>
 85470c9:	b8 11 00 00 00       	mov    $0x11,%eax
 85470ce:	e9 7d 04 00 00       	jmp    8547550 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x996>
 85470d3:	8b 45 10             	mov    0x10(%ebp),%eax
 85470d6:	89 04 24             	mov    %eax,(%esp)
 85470d9:	e8 8e df ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85470de:	0f b6 c0             	movzbl %al,%eax
 85470e1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85470e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85470eb:	00 
 85470ec:	8b 45 10             	mov    0x10(%ebp),%eax
 85470ef:	89 04 24             	mov    %eax,(%esp)
 85470f2:	e8 05 9f ba ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 85470f7:	8b 45 24             	mov    0x24(%ebp),%eax
 85470fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8547101:	00 
 8547102:	89 04 24             	mov    %eax,(%esp)
 8547105:	e8 16 48 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854710a:	0f b7 95 d4 fe ff ff 	movzwl -0x12c(%ebp),%edx
 8547111:	8b 45 24             	mov    0x24(%ebp),%eax
 8547114:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547118:	89 04 24             	mov    %eax,(%esp)
 854711b:	e8 84 2d b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8547120:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8547126:	89 04 24             	mov    %eax,(%esp)
 8547129:	e8 74 d6 ce ff       	call   82347a2 <_ZN14DisJointResultC1Ev>
 854712e:	8b 45 10             	mov    0x10(%ebp),%eax
 8547131:	8b 40 02             	mov    0x2(%eax),%eax
 8547134:	89 c3                	mov    %eax,%ebx
 8547136:	e8 60 50 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854713b:	8b 40 1c             	mov    0x1c(%eax),%eax
 854713e:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 8547144:	89 54 24 08          	mov    %edx,0x8(%esp)
 8547148:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854714c:	89 04 24             	mov    %eax,(%esp)
 854714f:	e8 a2 c2 f2 ff       	call   84733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>
 8547154:	85 c0                	test   %eax,%eax
 8547156:	0f 95 c0             	setne  %al
 8547159:	84 c0                	test   %al,%al
 854715b:	74 1d                	je     854717a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x5c0>
 854715d:	8b 45 24             	mov    0x24(%ebp),%eax
 8547160:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8547167:	00 
 8547168:	89 04 24             	mov    %eax,(%esp)
 854716b:	e8 b0 47 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8547170:	b8 00 00 00 00       	mov    $0x0,%eax
 8547175:	e9 d6 03 00 00       	jmp    8547550 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x996>
 854717a:	8b 45 10             	mov    0x10(%ebp),%eax
 854717d:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 8547184:	8d 45 98             	lea    -0x68(%ebp),%eax
 8547187:	89 04 24             	mov    %eax,(%esp)
 854718a:	e8 47 d8 be ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 854718f:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8547196:	00 
 8547197:	8d 45 98             	lea    -0x68(%ebp),%eax
 854719a:	89 04 24             	mov    %eax,(%esp)
 854719d:	e8 4c 46 00 00       	call   854b7ee <_ZNSt6vectorISt4pairIiiESaIS1_EE7reserveEj>
 85471a2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85471a9:	eb 63                	jmp    854720e <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x654>
 85471ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85471ae:	83 c0 04             	add    $0x4,%eax
 85471b1:	8b 84 85 60 ff ff ff 	mov    -0xa0(%ebp,%eax,4),%eax
 85471b8:	85 c0                	test   %eax,%eax
 85471ba:	74 4d                	je     8547209 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x64f>
 85471bc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85471bf:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 85471c5:	c1 e2 02             	shl    $0x2,%edx
 85471c8:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 85471cb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85471ce:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 85471d4:	83 c2 04             	add    $0x4,%edx
 85471d7:	c1 e2 02             	shl    $0x2,%edx
 85471da:	01 d0                	add    %edx,%eax
 85471dc:	8d 50 04             	lea    0x4(%eax),%edx
 85471df:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85471e2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85471e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85471ea:	89 04 24             	mov    %eax,(%esp)
 85471ed:	e8 c0 a0 bc ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 85471f2:	83 ec 04             	sub    $0x4,%esp
 85471f5:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85471f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85471fc:	8d 45 98             	lea    -0x68(%ebp),%eax
 85471ff:	89 04 24             	mov    %eax,(%esp)
 8547202:	e8 ff 63 b9 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8547207:	eb 01                	jmp    854720a <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x650>
 8547209:	90                   	nop
 854720a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 854720e:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 8547212:	0f 9e c0             	setle  %al
 8547215:	84 c0                	test   %al,%al
 8547217:	75 92                	jne    85471ab <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x5f1>
 8547219:	8b 45 c8             	mov    -0x38(%ebp),%eax
 854721c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 854721f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8547223:	8d 55 98             	lea    -0x68(%ebp),%edx
 8547226:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854722a:	8b 55 14             	mov    0x14(%ebp),%edx
 854722d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8547231:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547235:	8b 45 08             	mov    0x8(%ebp),%eax
 8547238:	89 04 24             	mov    %eax,(%esp)
 854723b:	e8 f8 f6 ff ff       	call   8546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>
 8547240:	8b 45 10             	mov    0x10(%ebp),%eax
 8547243:	83 c0 11             	add    $0x11,%eax
 8547246:	89 04 24             	mov    %eax,(%esp)
 8547249:	e8 7e 95 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 854724e:	84 c0                	test   %al,%al
 8547250:	74 32                	je     8547284 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x6ca>
 8547252:	8b 45 08             	mov    0x8(%ebp),%eax
 8547255:	83 c0 04             	add    $0x4,%eax
 8547258:	89 04 24             	mov    %eax,(%esp)
 854725b:	e8 22 41 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8547260:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8547263:	89 44 24 10          	mov    %eax,0x10(%esp)
 8547267:	8d 45 98             	lea    -0x68(%ebp),%eax
 854726a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854726e:	8b 45 14             	mov    0x14(%ebp),%eax
 8547271:	89 44 24 08          	mov    %eax,0x8(%esp)
 8547275:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547279:	8b 45 08             	mov    0x8(%ebp),%eax
 854727c:	89 04 24             	mov    %eax,(%esp)
 854727f:	e8 b4 f6 ff ff       	call   8546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>
 8547284:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8547287:	89 04 24             	mov    %eax,(%esp)
 854728a:	e8 1d 6f b4 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 854728f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8547292:	89 04 24             	mov    %eax,(%esp)
 8547295:	e8 f4 2f b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 854729a:	c7 44 24 1c a0 c3 c9 	movl   $0x8c9c3a0,0x1c(%esp)
 85472a1:	08 
 85472a2:	c7 44 24 18 a0 c3 c9 	movl   $0x8c9c3a0,0x18(%esp)
 85472a9:	08 
 85472aa:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85472b1:	00 
 85472b2:	c7 44 24 10 13 00 00 	movl   $0x13,0x10(%esp)
 85472b9:	00 
 85472ba:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 85472c1:	00 
 85472c2:	8d 55 8c             	lea    -0x74(%ebp),%edx
 85472c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85472c9:	8d 55 98             	lea    -0x68(%ebp),%edx
 85472cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85472d0:	89 04 24             	mov    %eax,(%esp)
 85472d3:	e8 da f8 fb ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 85472d8:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85472db:	8b 45 24             	mov    0x24(%ebp),%eax
 85472de:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85472e1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85472e5:	89 04 24             	mov    %eax,(%esp)
 85472e8:	e8 33 46 b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85472ed:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85472f0:	8d 55 8c             	lea    -0x74(%ebp),%edx
 85472f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85472f7:	89 04 24             	mov    %eax,(%esp)
 85472fa:	e8 49 6f b4 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 85472ff:	83 ec 04             	sub    $0x4,%esp
 8547302:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8547305:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547309:	8d 45 88             	lea    -0x78(%ebp),%eax
 854730c:	89 04 24             	mov    %eax,(%esp)
 854730f:	e8 d8 26 bb ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8547314:	e9 b9 01 00 00       	jmp    85474d2 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x918>
 8547319:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 854731c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8547323:	00 
 8547324:	8d 55 88             	lea    -0x78(%ebp),%edx
 8547327:	89 54 24 04          	mov    %edx,0x4(%esp)
 854732b:	89 04 24             	mov    %eax,(%esp)
 854732e:	e8 7f c5 c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8547333:	83 ec 04             	sub    $0x4,%esp
 8547336:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8547339:	89 04 24             	mov    %eax,(%esp)
 854733c:	e8 db 26 bb ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8547341:	8b 00                	mov    (%eax),%eax
 8547343:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8547346:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8547349:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8547350:	00 
 8547351:	8d 55 88             	lea    -0x78(%ebp),%edx
 8547354:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547358:	89 04 24             	mov    %eax,(%esp)
 854735b:	e8 52 c5 c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8547360:	83 ec 04             	sub    $0x4,%esp
 8547363:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8547366:	89 04 24             	mov    %eax,(%esp)
 8547369:	e8 ae 26 bb ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 854736e:	8b 00                	mov    (%eax),%eax
 8547370:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8547373:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8547376:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 854737d:	00 
 854737e:	8d 55 88             	lea    -0x78(%ebp),%edx
 8547381:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547385:	89 04 24             	mov    %eax,(%esp)
 8547388:	e8 25 c5 c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 854738d:	83 ec 04             	sub    $0x4,%esp
 8547390:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8547393:	89 04 24             	mov    %eax,(%esp)
 8547396:	e8 81 26 bb ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 854739b:	8b 00                	mov    (%eax),%eax
 854739d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85473a0:	8b 45 24             	mov    0x24(%ebp),%eax
 85473a3:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85473a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85473aa:	89 04 24             	mov    %eax,(%esp)
 85473ad:	e8 f2 2a b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85473b2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85473b5:	8b 45 24             	mov    0x24(%ebp),%eax
 85473b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85473bc:	89 04 24             	mov    %eax,(%esp)
 85473bf:	e8 d0 43 ce ff       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 85473c4:	8b 45 24             	mov    0x24(%ebp),%eax
 85473c7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85473ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 85473ce:	89 04 24             	mov    %eax,(%esp)
 85473d1:	e8 66 45 b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85473d6:	e8 c0 4d b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85473db:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85473de:	89 54 24 04          	mov    %edx,0x4(%esp)
 85473e2:	89 04 24             	mov    %eax,(%esp)
 85473e5:	e8 48 86 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85473ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85473ed:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85473f1:	0f 84 da 00 00 00    	je     85474d1 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x917>
 85473f7:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 85473fd:	89 04 24             	mov    %eax,(%esp)
 8547400:	e8 4f 44 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8547405:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8547408:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 854740e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8547411:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547415:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 854741b:	89 04 24             	mov    %eax,(%esp)
 854741e:	e8 61 44 b8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8547423:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8547426:	8b 00                	mov    (%eax),%eax
 8547428:	83 c0 08             	add    $0x8,%eax
 854742b:	8b 10                	mov    (%eax),%edx
 854742d:	8d 85 e2 fe ff ff    	lea    -0x11e(%ebp),%eax
 8547433:	89 44 24 04          	mov    %eax,0x4(%esp)
 8547437:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854743a:	89 04 24             	mov    %eax,(%esp)
 854743d:	ff d2                	call   *%edx
 854743f:	e8 0c 6a 0c 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 8547444:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854744b:	00 
 854744c:	8b 55 0c             	mov    0xc(%ebp),%edx
 854744f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8547453:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8547456:	89 54 24 08          	mov    %edx,0x8(%esp)
 854745a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854745d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8547461:	89 04 24             	mov    %eax,(%esp)
 8547464:	e8 11 6c 0c 00       	call   860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>
 8547469:	c7 45 84 00 00 00 00 	movl   $0x0,-0x7c(%ebp)
 8547470:	8b 85 e9 fe ff ff    	mov    -0x117(%ebp),%eax
 8547476:	0f bf d8             	movswl %ax,%ebx
 8547479:	e8 5f a6 c0 ff       	call   8151add <_Z7G_Storev>
 854747e:	8d 55 84             	lea    -0x7c(%ebp),%edx
 8547481:	89 54 24 14          	mov    %edx,0x14(%esp)
 8547485:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854748c:	00 
 854748d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8547491:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8547494:	89 54 24 08          	mov    %edx,0x8(%esp)
 8547498:	8d 95 e2 fe ff ff    	lea    -0x11e(%ebp),%edx
 854749e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85474a2:	89 04 24             	mov    %eax,(%esp)
 85474a5:	e8 f6 19 0d 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 85474aa:	8b 45 84             	mov    -0x7c(%ebp),%eax
 85474ad:	89 c3                	mov    %eax,%ebx
 85474af:	e8 3b 61 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 85474b4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85474b8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85474bb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85474bf:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 85474c6:	00 
 85474c7:	89 04 24             	mov    %eax,(%esp)
 85474ca:	e8 b3 61 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 85474cf:	eb 01                	jmp    85474d2 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x918>
 85474d1:	90                   	nop
 85474d2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85474d5:	8d 55 8c             	lea    -0x74(%ebp),%edx
 85474d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85474dc:	89 04 24             	mov    %eax,(%esp)
 85474df:	e8 88 6d b4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 85474e4:	83 ec 04             	sub    $0x4,%esp
 85474e7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85474ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85474ee:	8d 45 88             	lea    -0x78(%ebp),%eax
 85474f1:	89 04 24             	mov    %eax,(%esp)
 85474f4:	e8 2f bf c4 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 85474f9:	84 c0                	test   %al,%al
 85474fb:	0f 85 18 fe ff ff    	jne    8547319 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x75f>
 8547501:	eb 15                	jmp    8547518 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x95e>
 8547503:	89 d3                	mov    %edx,%ebx
 8547505:	89 c6                	mov    %eax,%esi
 8547507:	8d 45 8c             	lea    -0x74(%ebp),%eax
 854750a:	89 04 24             	mov    %eax,(%esp)
 854750d:	e8 c8 c8 b3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8547512:	89 f0                	mov    %esi,%eax
 8547514:	89 da                	mov    %ebx,%edx
 8547516:	eb 0d                	jmp    8547525 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x96b>
 8547518:	8d 45 8c             	lea    -0x74(%ebp),%eax
 854751b:	89 04 24             	mov    %eax,(%esp)
 854751e:	e8 b7 c8 b3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8547523:	eb 1b                	jmp    8547540 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c+0x986>
 8547525:	89 d3                	mov    %edx,%ebx
 8547527:	89 c6                	mov    %eax,%esi
 8547529:	8d 45 98             	lea    -0x68(%ebp),%eax
 854752c:	89 04 24             	mov    %eax,(%esp)
 854752f:	e8 b6 d4 be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8547534:	89 f0                	mov    %esi,%eax
 8547536:	89 da                	mov    %ebx,%edx
 8547538:	89 04 24             	mov    %eax,(%esp)
 854753b:	e8 10 c2 59 00       	call   8ae3750 <_Unwind_Resume>
 8547540:	8d 45 98             	lea    -0x68(%ebp),%eax
 8547543:	89 04 24             	mov    %eax,(%esp)
 8547546:	e8 9f d4 be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 854754b:	b8 00 00 00 00       	mov    $0x0,%eax
 8547550:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8547553:	83 c4 00             	add    $0x0,%esp
 8547556:	5b                   	pop    %ebx
 8547557:	5e                   	pop    %esi
 8547558:	5d                   	pop    %ebp
 8547559:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_ProcPenalty @ 0x8546bba

/* WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short,
   upgrade_table_t const&, upgrade_info_t const*, PacketGuard*, Inven_Item*, char) */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPenalty
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,ushort param_4,
          upgrade_table_t *param_5,upgrade_info_t *param_6,PacketGuard *param_7,Inven_Item *param_8,
          char param_9)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  CInventory *pCVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  upgrade_table_t *puVar10;
  int *piVar11;
  ulong *puVar12;
  CDataManager *this_00;
  CCubeStatistic *pCVar13;
  Store *this_01;
  CValueStatistic *pCVar14;
  Inven_Item local_122 [2];
  ulong local_120;
  undefined4 local_11b;
  undefined1 local_e5 [2];
  int local_e3;
  DisJointResult local_a8 [4];
  int aiStack_a4 [9];
  int local_80;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_7c [4];
  vector<int,std::allocator<int>> local_78 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  int local_60 [2];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_50 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_4c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_48 [4];
  int local_44;
  upgrade_info_t *local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulong local_18;
  int local_14;
  CItem *local_10;
  
  if (*(int *)(param_8 + 2) == 0) {
    uVar8 = CItem::get_rarity(param_3);
    uVar1 = Inven_Item::GetUpgrade(param_2);
    local_44 = upgrade_table_t::GetPenaltyType(param_5,uVar1,uVar8,param_6);
    cVar2 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
    if (cVar2 != '\0') {
      local_44 = 2;
    }
  }
  else if (param_9 == '\0') {
    local_44 = 1;
  }
  else {
    local_44 = 2;
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,(int)(char)local_44);
  if (local_44 == 1) {
    uVar5 = Inven_Item::GetUpgrade(param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,uVar5 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
  }
  else if (local_44 == 2) {
    cVar2 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
    if (cVar2 != '\0') {
      local_40 = param_6 + 0x28;
      *(undefined4 *)local_40 = 1;
    }
    iVar7 = *(int *)(param_6 + 0x28);
    uVar5 = Inven_Item::GetUpgrade(param_2);
    if ((iVar7 < (int)(uVar5 & 0xff)) && (-1 < param_9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      Inven_Item::SetUpgrade(param_2,'\0');
    }
    else if (param_9 < '\x01') {
      cVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade(param_2,cVar2 - (char)*(undefined4 *)(param_6 + 0x28));
    }
    else {
      cVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade(param_2,cVar2 - param_9);
    }
    uVar5 = Inven_Item::GetUpgrade(param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,uVar5 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
  }
  else if (local_44 == 3) {
    cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar2 != '\x01') {
      local_34 = -1;
      local_30 = 0xffffffff;
      local_2c = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_30 = CInventory::check_item_exist(pCVar6,0x28be7e);
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_2c = CInventory::check_item_exist(pCVar6,0x1f72);
      local_28 = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_28 = CInventory::check_item_exist(pCVar6,0x20ba);
      if (local_30 == -1) {
        if (local_2c == -1) {
          if (local_28 != -1) {
            local_34 = local_28;
          }
        }
        else {
          local_34 = local_2c;
        }
      }
      else {
        local_34 = local_30;
      }
      local_24 = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_24 = CInventory::check_item_exist(pCVar6,0x292091ac);
      if (local_24 != -1) {
        local_34 = local_24;
      }
      if (local_34 != -1) {
        iVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_e5,iVar7);
        if ((((local_e3 != 0x28be7e) && (local_e3 != 0x1f72)) && (local_e3 != 0x20ba)) &&
           (local_e3 != 0x292091ac)) {
          return 0x11;
        }
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6,1,local_34,1,3,1);
        if (cVar2 != '\x01') {
          return 0x11;
        }
        cUserHistoryLog::apply_Item
                  ((cUserHistoryLog *)(param_1 + 0x79700),local_e3,*(undefined4 *)(param_2 + 2),0);
        CUser::SendUpdateItem(param_1,1,0,local_34);
        Inven_Item::SetUpgrade(param_2,'\0');
        uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::update_item
                  (uVar8,1,param_4,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                   *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                   *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                   *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                   *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                   *(undefined4 *)(param_2 + 0x38),param_2[0x3c]);
        CUser::SendUpdateItem(param_1,1,0,param_4);
        return 0xd8;
      }
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar6,1,param_4,1,0xd,1);
    if (cVar2 != '\x01') {
      return 0x11;
    }
    local_3c = Inven_Item::GetUpgrade(param_2);
    local_3c = local_3c & 0xff;
    Inven_Item::SetUpgrade(param_2,'\0');
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
    DisJointResult::DisJointResult(local_a8);
    iVar7 = *(int *)(param_2 + 2);
    iVar9 = G_CDataManager();
    iVar7 = DisJoint::GetResult(*(DisJoint **)(iVar9 + 0x1c),iVar7,local_a8);
    if (iVar7 != 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,0);
      return 0;
    }
    *(undefined4 *)(param_2 + 2) = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
                    /* try { // try from 0854719d to 0854728e has its CatchHandler @ 08547525 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::reserve(local_6c,6);
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (aiStack_a4[local_20 + 4] != 0) {
        std::make_pair<int&,int&>(local_60,aiStack_a4 + local_20 + 4);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_6c,(pair *)local_60);
      }
    }
    _getAdditionalDisjointItem(this,local_3c,param_3,(vector *)local_6c,param_5);
    cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar2 != '\0') {
      puVar10 = (upgrade_table_t *)
                CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
      _getAdditionalDisjointItem(this,local_3c,param_3,(vector *)local_6c,puVar10);
    }
    std::vector<int,std::allocator<int>>::vector(local_78);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085472d3 to 085474f8 has its CatchHandler @ 08547503 */
    local_38 = CInventory::insert_event_items
                         (pCVar6,local_6c,local_78,7,0x13,0,&DAT_08c9c3a0,&DAT_08c9c3a0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,local_38);
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_7c,local_58);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_7c,local_54);
      if (!bVar3) break;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_50,(int)local_7c);
      piVar11 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                       ::operator*(local_50);
      local_1c = *piVar11;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_4c,(int)local_7c);
      puVar12 = (ulong *)__gnu_cxx::
                         __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                         operator*(local_4c);
      local_18 = *puVar12;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_48,(int)local_7c);
      piVar11 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                       ::operator*(local_48);
      local_14 = *piVar11;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,local_1c);
      InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_7,local_18);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_7,local_14);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,local_18);
      if (local_10 != (CItem *)0x0) {
        Inven_Item::Inven_Item(local_122);
        local_120 = local_18;
        Inven_Item::set_add_info(local_122,local_14);
        (**(code **)(*(int *)local_10 + 8))(local_10,local_122);
        pCVar13 = (CCubeStatistic *)GetInstanceCubeStatistic();
        CCubeStatistic::collectCubeStatistics(pCVar13,local_10,local_14,param_1,1);
        local_80 = 0;
        sVar4 = (short)local_11b;
        this_01 = (Store *)G_Store();
        Store::GetSellItemPrice(this_01,local_122,local_10,sVar4,false,&local_80);
        iVar7 = local_80;
        pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar14,9,param_1,iVar7);
      }
    }
                    /* try { // try from 0854751e to 08547522 has its CatchHandler @ 08547525 */
    std::vector<int,std::allocator<int>>::~vector(local_78);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
  }
  return 0;
}

```

---

## _ProcPenalty_08549ac8

```asm
// === 08549ac8 WongWork::CItemUpgrade::_ProcPenalty  [0x08549ac8-0x854a005] ===
 8549ac8:	55                   	push   %ebp
 8549ac9:	89 e5                	mov    %esp,%ebp
 8549acb:	56                   	push   %esi
 8549acc:	53                   	push   %ebx
 8549acd:	81 ec 00 01 00 00    	sub    $0x100,%esp
 8549ad3:	8b 45 18             	mov    0x18(%ebp),%eax
 8549ad6:	66 89 85 24 ff ff ff 	mov    %ax,-0xdc(%ebp)
 8549add:	8b 45 10             	mov    0x10(%ebp),%eax
 8549ae0:	83 c0 11             	add    $0x11,%eax
 8549ae3:	89 04 24             	mov    %eax,(%esp)
 8549ae6:	e8 e1 6c c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8549aeb:	84 c0                	test   %al,%al
 8549aed:	74 0f                	je     8549afe <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x36>
 8549aef:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 8549af4:	89 04 24             	mov    %eax,(%esp)
 8549af7:	e8 64 1a 00 00       	call   854b560 <_ZNK14CItemAmplifier19getUpgradeInfoTableEv>
 8549afc:	eb 0e                	jmp    8549b0c <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x44>
 8549afe:	8b 45 08             	mov    0x8(%ebp),%eax
 8549b01:	83 c0 04             	add    $0x4,%eax
 8549b04:	89 04 24             	mov    %eax,(%esp)
 8549b07:	e8 76 18 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8549b0c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8549b0f:	0f b7 9d 24 ff ff ff 	movzwl -0xdc(%ebp),%ebx
 8549b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549b19:	89 04 24             	mov    %eax,(%esp)
 8549b1c:	e8 6d 07 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8549b21:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8549b28:	00 
 8549b29:	c7 44 24 10 0d 00 00 	movl   $0xd,0x10(%esp)
 8549b30:	00 
 8549b31:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8549b38:	00 
 8549b39:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8549b3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8549b44:	00 
 8549b45:	89 04 24             	mov    %eax,(%esp)
 8549b48:	e8 bf a4 fb ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8549b4d:	83 f0 01             	xor    $0x1,%eax
 8549b50:	84 c0                	test   %al,%al
 8549b52:	74 0a                	je     8549b5e <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x96>
 8549b54:	bb 11 00 00 00       	mov    $0x11,%ebx
 8549b59:	e9 9c 04 00 00       	jmp    8549ffa <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x532>
 8549b5e:	8b 45 10             	mov    0x10(%ebp),%eax
 8549b61:	89 04 24             	mov    %eax,(%esp)
 8549b64:	e8 03 b5 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8549b69:	0f b6 c0             	movzbl %al,%eax
 8549b6c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8549b6f:	0f b7 95 24 ff ff ff 	movzwl -0xdc(%ebp),%edx
 8549b76:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549b79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549b7d:	89 04 24             	mov    %eax,(%esp)
 8549b80:	e8 1f 03 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8549b85:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8549b8b:	89 04 24             	mov    %eax,(%esp)
 8549b8e:	e8 0f ac ce ff       	call   82347a2 <_ZN14DisJointResultC1Ev>
 8549b93:	8b 45 10             	mov    0x10(%ebp),%eax
 8549b96:	8b 40 02             	mov    0x2(%eax),%eax
 8549b99:	89 c3                	mov    %eax,%ebx
 8549b9b:	e8 fb 25 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8549ba0:	8b 40 1c             	mov    0x1c(%eax),%eax
 8549ba3:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 8549ba9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549bad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8549bb1:	89 04 24             	mov    %eax,(%esp)
 8549bb4:	e8 3d 98 f2 ff       	call   84733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>
 8549bb9:	85 c0                	test   %eax,%eax
 8549bbb:	0f 95 c0             	setne  %al
 8549bbe:	84 c0                	test   %al,%al
 8549bc0:	74 1d                	je     8549bdf <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x117>
 8549bc2:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549bc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8549bcc:	00 
 8549bcd:	89 04 24             	mov    %eax,(%esp)
 8549bd0:	e8 4b 1d b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8549bd5:	bb 00 00 00 00       	mov    $0x0,%ebx
 8549bda:	e9 1b 04 00 00       	jmp    8549ffa <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x532>
 8549bdf:	8b 45 10             	mov    0x10(%ebp),%eax
 8549be2:	c7 40 02 00 00 00 00 	movl   $0x0,0x2(%eax)
 8549be9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549bec:	89 04 24             	mov    %eax,(%esp)
 8549bef:	e8 e2 ad be ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8549bf4:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8549bfb:	00 
 8549bfc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549bff:	89 04 24             	mov    %eax,(%esp)
 8549c02:	e8 e7 1b 00 00       	call   854b7ee <_ZNSt6vectorISt4pairIiiESaIS1_EE7reserveEj>
 8549c07:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8549c0e:	eb 63                	jmp    8549c73 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x1ab>
 8549c10:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8549c13:	83 c0 04             	add    $0x4,%eax
 8549c16:	8b 84 85 78 ff ff ff 	mov    -0x88(%ebp,%eax,4),%eax
 8549c1d:	85 c0                	test   %eax,%eax
 8549c1f:	74 4d                	je     8549c6e <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x1a6>
 8549c21:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8549c24:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8549c2a:	c1 e2 02             	shl    $0x2,%edx
 8549c2d:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 8549c30:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8549c33:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8549c39:	83 c2 04             	add    $0x4,%edx
 8549c3c:	c1 e2 02             	shl    $0x2,%edx
 8549c3f:	01 d0                	add    %edx,%eax
 8549c41:	8d 50 04             	lea    0x4(%eax),%edx
 8549c44:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8549c47:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8549c4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549c4f:	89 04 24             	mov    %eax,(%esp)
 8549c52:	e8 5b 76 bc ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8549c57:	83 ec 04             	sub    $0x4,%esp
 8549c5a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8549c5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549c61:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549c64:	89 04 24             	mov    %eax,(%esp)
 8549c67:	e8 9a 39 b9 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8549c6c:	eb 01                	jmp    8549c6f <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x1a7>
 8549c6e:	90                   	nop
 8549c6f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8549c73:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 8549c77:	0f 9e c0             	setle  %al
 8549c7a:	84 c0                	test   %al,%al
 8549c7c:	75 92                	jne    8549c10 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x148>
 8549c7e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8549c81:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8549c84:	89 54 24 10          	mov    %edx,0x10(%esp)
 8549c88:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8549c8b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8549c8f:	8b 55 14             	mov    0x14(%ebp),%edx
 8549c92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549c96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549c9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8549c9d:	89 04 24             	mov    %eax,(%esp)
 8549ca0:	e8 93 cc ff ff       	call   8546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>
 8549ca5:	8b 45 10             	mov    0x10(%ebp),%eax
 8549ca8:	83 c0 11             	add    $0x11,%eax
 8549cab:	89 04 24             	mov    %eax,(%esp)
 8549cae:	e8 19 6b c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8549cb3:	84 c0                	test   %al,%al
 8549cb5:	74 32                	je     8549ce9 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x221>
 8549cb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8549cba:	83 c0 04             	add    $0x4,%eax
 8549cbd:	89 04 24             	mov    %eax,(%esp)
 8549cc0:	e8 bd 16 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8549cc5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8549cc8:	89 44 24 10          	mov    %eax,0x10(%esp)
 8549ccc:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549ccf:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8549cd3:	8b 45 14             	mov    0x14(%ebp),%eax
 8549cd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8549cda:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549cde:	8b 45 08             	mov    0x8(%ebp),%eax
 8549ce1:	89 04 24             	mov    %eax,(%esp)
 8549ce4:	e8 4f cc ff ff       	call   8546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>
 8549ce9:	8b 45 10             	mov    0x10(%ebp),%eax
 8549cec:	83 c0 11             	add    $0x11,%eax
 8549cef:	89 04 24             	mov    %eax,(%esp)
 8549cf2:	e8 d5 6a c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8549cf7:	0f b6 d8             	movzbl %al,%ebx
 8549cfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8549cfd:	83 c0 04             	add    $0x4,%eax
 8549d00:	89 04 24             	mov    %eax,(%esp)
 8549d03:	e8 7a 16 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8549d08:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8549d0b:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8549d0f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8549d13:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549d16:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8549d1a:	8b 45 14             	mov    0x14(%ebp),%eax
 8549d1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8549d21:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549d25:	8b 45 08             	mov    0x8(%ebp),%eax
 8549d28:	89 04 24             	mov    %eax,(%esp)
 8549d2b:	e8 66 cd ff ff       	call   8546a96 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb>
 8549d30:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8549d33:	89 04 24             	mov    %eax,(%esp)
 8549d36:	e8 71 44 b4 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8549d3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549d3e:	89 04 24             	mov    %eax,(%esp)
 8549d41:	e8 48 05 b9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8549d46:	c7 44 24 1c a0 c3 c9 	movl   $0x8c9c3a0,0x1c(%esp)
 8549d4d:	08 
 8549d4e:	c7 44 24 18 a0 c3 c9 	movl   $0x8c9c3a0,0x18(%esp)
 8549d55:	08 
 8549d56:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8549d5d:	00 
 8549d5e:	c7 44 24 10 13 00 00 	movl   $0x13,0x10(%esp)
 8549d65:	00 
 8549d66:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 8549d6d:	00 
 8549d6e:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8549d71:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549d75:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8549d78:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549d7c:	89 04 24             	mov    %eax,(%esp)
 8549d7f:	e8 2e ce fb ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 8549d84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8549d87:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549d8a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8549d8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549d91:	89 04 24             	mov    %eax,(%esp)
 8549d94:	e8 87 1b b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8549d99:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8549d9c:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8549d9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549da3:	89 04 24             	mov    %eax,(%esp)
 8549da6:	e8 9d 44 b4 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 8549dab:	83 ec 04             	sub    $0x4,%esp
 8549dae:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8549db1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549db5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8549db8:	89 04 24             	mov    %eax,(%esp)
 8549dbb:	e8 2c fc ba ff       	call   80f99ec <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEC1IPiEERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameIS9_S8_E7__valueES5_E6__typeEEE>
 8549dc0:	e9 b9 01 00 00       	jmp    8549f7e <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x4b6>
 8549dc5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8549dc8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8549dcf:	00 
 8549dd0:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8549dd3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549dd7:	89 04 24             	mov    %eax,(%esp)
 8549dda:	e8 d3 9a c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8549ddf:	83 ec 04             	sub    $0x4,%esp
 8549de2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8549de5:	89 04 24             	mov    %eax,(%esp)
 8549de8:	e8 2f fc ba ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8549ded:	8b 00                	mov    (%eax),%eax
 8549def:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8549df2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8549df5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8549dfc:	00 
 8549dfd:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8549e00:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e04:	89 04 24             	mov    %eax,(%esp)
 8549e07:	e8 a6 9a c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8549e0c:	83 ec 04             	sub    $0x4,%esp
 8549e0f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8549e12:	89 04 24             	mov    %eax,(%esp)
 8549e15:	e8 02 fc ba ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8549e1a:	8b 00                	mov    (%eax),%eax
 8549e1c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8549e1f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8549e22:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8549e29:	00 
 8549e2a:	8d 55 a0             	lea    -0x60(%ebp),%edx
 8549e2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e31:	89 04 24             	mov    %eax,(%esp)
 8549e34:	e8 79 9a c4 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8549e39:	83 ec 04             	sub    $0x4,%esp
 8549e3c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8549e3f:	89 04 24             	mov    %eax,(%esp)
 8549e42:	e8 d5 fb ba ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8549e47:	8b 00                	mov    (%eax),%eax
 8549e49:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8549e4c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549e4f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8549e52:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e56:	89 04 24             	mov    %eax,(%esp)
 8549e59:	e8 46 00 b9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8549e5e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8549e61:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549e64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e68:	89 04 24             	mov    %eax,(%esp)
 8549e6b:	e8 24 19 ce ff       	call   822b794 <_ZN18InterfacePacketBuf12put_item_idxEm>
 8549e70:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8549e73:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8549e76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e7a:	89 04 24             	mov    %eax,(%esp)
 8549e7d:	e8 ba 1a b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8549e82:	e8 14 23 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8549e87:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8549e8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549e8e:	89 04 24             	mov    %eax,(%esp)
 8549e91:	e8 9c 5b e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8549e96:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8549e99:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8549e9d:	0f 84 da 00 00 00    	je     8549f7d <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x4b5>
 8549ea3:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 8549ea9:	89 04 24             	mov    %eax,(%esp)
 8549eac:	e8 a3 19 b8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8549eb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8549eb4:	89 85 39 ff ff ff    	mov    %eax,-0xc7(%ebp)
 8549eba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8549ebd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549ec1:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 8549ec7:	89 04 24             	mov    %eax,(%esp)
 8549eca:	e8 b5 19 b8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8549ecf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8549ed2:	8b 00                	mov    (%eax),%eax
 8549ed4:	83 c0 08             	add    $0x8,%eax
 8549ed7:	8b 10                	mov    (%eax),%edx
 8549ed9:	8d 85 37 ff ff ff    	lea    -0xc9(%ebp),%eax
 8549edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549ee3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8549ee6:	89 04 24             	mov    %eax,(%esp)
 8549ee9:	ff d2                	call   *%edx
 8549eeb:	e8 60 3f 0c 00       	call   860de50 <_Z24GetInstanceCubeStatisticv>
 8549ef0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8549ef7:	00 
 8549ef8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8549efb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8549eff:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8549f02:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549f06:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8549f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549f0d:	89 04 24             	mov    %eax,(%esp)
 8549f10:	e8 65 41 0c 00       	call   860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>
 8549f15:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 8549f1c:	8b 85 3e ff ff ff    	mov    -0xc2(%ebp),%eax
 8549f22:	0f bf d8             	movswl %ax,%ebx
 8549f25:	e8 b3 7b c0 ff       	call   8151add <_Z7G_Storev>
 8549f2a:	8d 55 9c             	lea    -0x64(%ebp),%edx
 8549f2d:	89 54 24 14          	mov    %edx,0x14(%esp)
 8549f31:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8549f38:	00 
 8549f39:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8549f3d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8549f40:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549f44:	8d 95 37 ff ff ff    	lea    -0xc9(%ebp),%edx
 8549f4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549f4e:	89 04 24             	mov    %eax,(%esp)
 8549f51:	e8 4a ef 0c 00       	call   8618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>
 8549f56:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8549f59:	89 c3                	mov    %eax,%ebx
 8549f5b:	e8 8f 36 0c 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 8549f60:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8549f64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8549f67:	89 54 24 08          	mov    %edx,0x8(%esp)
 8549f6b:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8549f72:	00 
 8549f73:	89 04 24             	mov    %eax,(%esp)
 8549f76:	e8 07 37 0c 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 8549f7b:	eb 01                	jmp    8549f7e <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x4b6>
 8549f7d:	90                   	nop
 8549f7e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8549f81:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 8549f84:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549f88:	89 04 24             	mov    %eax,(%esp)
 8549f8b:	e8 dc 42 b4 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8549f90:	83 ec 04             	sub    $0x4,%esp
 8549f93:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8549f96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8549f9a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8549f9d:	89 04 24             	mov    %eax,(%esp)
 8549fa0:	e8 83 94 c4 ff       	call   8193428 <_ZN9__gnu_cxxneIPKiPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T1_EERKNS7_IT0_S9_EE>
 8549fa5:	84 c0                	test   %al,%al
 8549fa7:	0f 85 18 fe ff ff    	jne    8549dc5 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x2fd>
 8549fad:	bb 00 00 00 00       	mov    $0x0,%ebx
 8549fb2:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8549fb5:	89 04 24             	mov    %eax,(%esp)
 8549fb8:	e8 1d 9e b3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8549fbd:	eb 30                	jmp    8549fef <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x527>
 8549fbf:	89 d3                	mov    %edx,%ebx
 8549fc1:	89 c6                	mov    %eax,%esi
 8549fc3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8549fc6:	89 04 24             	mov    %eax,(%esp)
 8549fc9:	e8 0c 9e b3 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8549fce:	89 f0                	mov    %esi,%eax
 8549fd0:	89 da                	mov    %ebx,%edx
 8549fd2:	eb 00                	jmp    8549fd4 <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtP11PacketGuard+0x50c>
 8549fd4:	89 d3                	mov    %edx,%ebx
 8549fd6:	89 c6                	mov    %eax,%esi
 8549fd8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549fdb:	89 04 24             	mov    %eax,(%esp)
 8549fde:	e8 07 aa be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8549fe3:	89 f0                	mov    %esi,%eax
 8549fe5:	89 da                	mov    %ebx,%edx
 8549fe7:	89 04 24             	mov    %eax,(%esp)
 8549fea:	e8 61 97 59 00       	call   8ae3750 <_Unwind_Resume>
 8549fef:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8549ff2:	89 04 24             	mov    %eax,(%esp)
 8549ff5:	e8 f0 a9 be ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8549ffa:	89 d8                	mov    %ebx,%eax
 8549ffc:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8549fff:	83 c4 00             	add    $0x0,%esp
 854a002:	5b                   	pop    %ebx
 854a003:	5e                   	pop    %esi
 854a004:	5d                   	pop    %ebp
 854a005:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_ProcPenalty @ 0x8549ac8

/* WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short,
   PacketGuard*) */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPenalty
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,ushort param_4,
          PacketGuard *param_5)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  CInventory *pCVar4;
  int iVar5;
  int iVar6;
  upgrade_table_t *puVar7;
  int *piVar8;
  ulong *puVar9;
  CDataManager *this_00;
  CCubeStatistic *pCVar10;
  Store *this_01;
  CValueStatistic *pCVar11;
  undefined4 uVar12;
  Inven_Item local_cd [2];
  ulong local_cb;
  undefined4 local_c6;
  DisJointResult local_90 [4];
  int aiStack_8c [9];
  int local_68;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_64 [4];
  vector<int,std::allocator<int>> local_60 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_54 [12];
  int local_48 [2];
  __normal_iterator local_40 [4];
  __normal_iterator local_3c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_38 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_34 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_30 [4];
  upgrade_table_t *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulong local_18;
  int local_14;
  CItem *local_10;
  
  cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
  if (cVar1 == '\0') {
    local_2c = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
  }
  else {
    local_2c = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
  }
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar1 = CInventory::delete_item(pCVar4,1,param_4,1,0xd,1);
  if (cVar1 == '\x01') {
    local_28 = Inven_Item::GetUpgrade(param_2);
    local_28 = local_28 & 0xff;
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_5,(uint)param_4);
    DisJointResult::DisJointResult(local_90);
    iVar6 = *(int *)(param_2 + 2);
    iVar5 = G_CDataManager();
    iVar6 = DisJoint::GetResult(*(DisJoint **)(iVar5 + 0x1c),iVar6,local_90);
    if (iVar6 == 0) {
      *(undefined4 *)(param_2 + 2) = 0;
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_54);
                    /* try { // try from 08549c02 to 08549d3a has its CatchHandler @ 08549fd4 */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::reserve(local_54,6);
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        if (aiStack_8c[local_20 + 4] != 0) {
          std::make_pair<int&,int&>(local_48,aiStack_8c + local_20 + 4);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    (local_54,(pair *)local_48);
        }
      }
      _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,local_2c);
      cVar1 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
      if (cVar1 != '\0') {
        puVar7 = (upgrade_table_t *)
                 CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
        _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,puVar7);
      }
      bVar2 = (bool)stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
      puVar7 = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
      _getAdditionalDisjointItem(this,local_28,param_3,(vector *)local_54,puVar7,bVar2);
      std::vector<int,std::allocator<int>>::vector(local_60);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 08549d7f to 08549fa4 has its CatchHandler @ 08549fbf */
      local_24 = CInventory::insert_event_items
                           (pCVar4,local_54,local_60,7,0x13,0,&DAT_08c9c3a0,&DAT_08c9c3a0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_5,local_24);
      std::vector<int,std::allocator<int>>::begin();
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
      __normal_iterator<int*>(local_64,local_40);
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar2 = __gnu_cxx::operator!=(local_64,local_3c);
        if (!bVar2) break;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_38,(int)local_64);
        piVar8 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_38);
        local_1c = *piVar8;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_34,(int)local_64);
        puVar9 = (ulong *)__gnu_cxx::
                          __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                          operator*(local_34);
        local_18 = *puVar9;
        __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                  (local_30,(int)local_64);
        piVar8 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_30);
        local_14 = *piVar8;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_5,local_1c);
        InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_5,local_18);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_5,local_14);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = (CItem *)CDataManager::find_item(this_00,local_18);
        if (local_10 != (CItem *)0x0) {
          Inven_Item::Inven_Item(local_cd);
          local_cb = local_18;
          Inven_Item::set_add_info(local_cd,local_14);
          (**(code **)(*(int *)local_10 + 8))(local_10,local_cd);
          pCVar10 = (CCubeStatistic *)GetInstanceCubeStatistic();
          CCubeStatistic::collectCubeStatistics(pCVar10,local_10,local_14,param_1,1);
          local_68 = 0;
          sVar3 = (short)local_c6;
          this_01 = (Store *)G_Store();
          Store::GetSellItemPrice(this_01,local_cd,local_10,sVar3,false,&local_68);
          iVar6 = local_68;
          pCVar11 = (CValueStatistic *)GetInstanceValueStatistic();
          CValueStatistic::AddValueStatistic(pCVar11,9,param_1,iVar6);
        }
      }
      uVar12 = 0;
                    /* try { // try from 08549fb8 to 08549fbc has its CatchHandler @ 08549fd4 */
      std::vector<int,std::allocator<int>>::~vector(local_60);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_54);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_5,0);
      uVar12 = 0;
    }
  }
  else {
    uVar12 = 0x11;
  }
  return uVar12;
}

```

---

## _ProcPortableUpgradeItem

```asm
// === 08548d3c WongWork::CItemUpgrade::_ProcPortableUpgradeItem  [0x08548d3c-0x8548e67] ===
 8548d3c:	55                   	push   %ebp
 8548d3d:	89 e5                	mov    %esp,%ebp
 8548d3f:	53                   	push   %ebx
 8548d40:	83 ec 34             	sub    $0x34,%esp
 8548d43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548d46:	8b 40 02             	mov    0x2(%eax),%eax
 8548d49:	89 c3                	mov    %eax,%ebx
 8548d4b:	e8 4b 34 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8548d50:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8548d54:	89 04 24             	mov    %eax,(%esp)
 8548d57:	e8 d6 6c e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8548d5c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8548d5f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8548d63:	75 0a                	jne    8548d6f <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x33>
 8548d65:	b8 04 00 00 00       	mov    $0x4,%eax
 8548d6a:	e9 f2 00 00 00       	jmp    8548e61 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x125>
 8548d6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8548d72:	89 04 24             	mov    %eax,(%esp)
 8548d75:	e8 80 85 ba ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8548d7a:	83 f0 01             	xor    $0x1,%eax
 8548d7d:	84 c0                	test   %al,%al
 8548d7f:	74 0a                	je     8548d8b <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x4f>
 8548d81:	b8 00 00 00 00       	mov    $0x0,%eax
 8548d86:	e9 d6 00 00 00       	jmp    8548e61 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x125>
 8548d8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8548d8e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8548d91:	c7 44 24 04 35 00 00 	movl   $0x35,0x4(%esp)
 8548d98:	00 
 8548d99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548d9c:	89 04 24             	mov    %eax,(%esp)
 8548d9f:	e8 b4 3c ce ff       	call   822ca58 <_ZNK14CStackableItem21verifyStackableActionEN15StackableAction4TypeE>
 8548da4:	83 f0 01             	xor    $0x1,%eax
 8548da7:	84 c0                	test   %al,%al
 8548da9:	74 0a                	je     8548db5 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x79>
 8548dab:	b8 00 00 00 00       	mov    $0x0,%eax
 8548db0:	e9 ac 00 00 00       	jmp    8548e61 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x125>
 8548db5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548db8:	05 a0 03 00 00       	add    $0x3a0,%eax
 8548dbd:	89 04 24             	mov    %eax,(%esp)
 8548dc0:	e8 fb 53 b4 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8548dc5:	83 f8 02             	cmp    $0x2,%eax
 8548dc8:	0f 95 c0             	setne  %al
 8548dcb:	84 c0                	test   %al,%al
 8548dcd:	74 0a                	je     8548dd9 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x9d>
 8548dcf:	b8 04 00 00 00       	mov    $0x4,%eax
 8548dd4:	e9 88 00 00 00       	jmp    8548e61 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x125>
 8548dd9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548ddc:	05 a0 03 00 00       	add    $0x3a0,%eax
 8548de1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8548de8:	00 
 8548de9:	89 04 24             	mov    %eax,(%esp)
 8548dec:	e8 83 17 ba ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 8548df1:	8b 00                	mov    (%eax),%eax
 8548df3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8548df6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548df9:	05 a0 03 00 00       	add    $0x3a0,%eax
 8548dfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8548e05:	00 
 8548e06:	89 04 24             	mov    %eax,(%esp)
 8548e09:	e8 66 17 ba ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 8548e0e:	8b 00                	mov    (%eax),%eax
 8548e10:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8548e13:	8b 45 10             	mov    0x10(%ebp),%eax
 8548e16:	89 04 24             	mov    %eax,(%esp)
 8548e19:	e8 4e c2 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 8548e1e:	88 45 f7             	mov    %al,-0x9(%ebp)
 8548e21:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8548e25:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8548e28:	7c 09                	jl     8548e33 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0xf7>
 8548e2a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8548e2e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8548e31:	7e 07                	jle    8548e3a <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0xfe>
 8548e33:	b8 13 00 00 00       	mov    $0x13,%eax
 8548e38:	eb 27                	jmp    8548e61 <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t+0x125>
 8548e3a:	8b 45 14             	mov    0x14(%ebp),%eax
 8548e3d:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 8548e44:	8b 45 14             	mov    0x14(%ebp),%eax
 8548e47:	c7 40 30 01 00 00 00 	movl   $0x1,0x30(%eax)
 8548e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548e51:	8b 40 02             	mov    0x2(%eax),%eax
 8548e54:	89 c2                	mov    %eax,%edx
 8548e56:	8b 45 14             	mov    0x14(%ebp),%eax
 8548e59:	89 50 2c             	mov    %edx,0x2c(%eax)
 8548e5c:	b8 00 00 00 00       	mov    $0x0,%eax
 8548e61:	83 c4 34             	add    $0x34,%esp
 8548e64:	5b                   	pop    %ebx
 8548e65:	5d                   	pop    %ebp
 8548e66:	c3                   	ret
 8548e67:	90                   	nop

```

```c
// WongWork::CItemUpgrade::_ProcPortableUpgradeItem @ 0x8548d3c

/* WongWork::CItemUpgrade::_ProcPortableUpgradeItem(Inven_Item const&, Inven_Item const&,
   upgrade_info_t&) const */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPortableUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,upgrade_info_t *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  CDataManager *this_00;
  CStackableItem *this_01;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CStackableItem *)CDataManager::find_item(this_00,iVar5);
  if (this_01 == (CStackableItem *)0x0) {
    uVar4 = 4;
  }
  else {
    cVar2 = CItem::is_stackable((CItem *)this_01);
    if (cVar2 == '\x01') {
      cVar2 = CStackableItem::verifyStackableAction(this_01,0x35);
      if (cVar2 == '\x01') {
        iVar5 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0));
        if (iVar5 == 2) {
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0),0);
          iVar5 = *piVar6;
          piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                    ((vector<int,std::allocator<int>> *)(this_01 + 0x3a0),1);
          iVar1 = *piVar6;
          bVar3 = Inven_Item::GetUpgrade(param_2);
          if (((int)(uint)bVar3 < iVar5) || (iVar1 < (int)(uint)bVar3)) {
            uVar4 = 0x13;
          }
          else {
            *(undefined4 *)(param_3 + 0x34) = 0;
            *(undefined4 *)(param_3 + 0x30) = 1;
            *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(param_1 + 2);
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 4;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## _getAdditionalDisjointItem

```asm
// === 08546938 WongWork::CItemUpgrade::_getAdditionalDisjointItem  [0x08546938-0x8546a95] ===
 8546938:	55                   	push   %ebp
 8546939:	89 e5                	mov    %esp,%ebp
 854693b:	53                   	push   %ebx
 854693c:	83 ec 64             	sub    $0x64,%esp
 854693f:	8b 45 10             	mov    0x10(%ebp),%eax
 8546942:	89 04 24             	mov    %eax,(%esp)
 8546945:	e8 0a a3 bc ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 854694a:	89 c3                	mov    %eax,%ebx
 854694c:	8b 45 10             	mov    0x10(%ebp),%eax
 854694f:	89 04 24             	mov    %eax,(%esp)
 8546952:	e8 7f a9 ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8546957:	89 c2                	mov    %eax,%edx
 8546959:	8b 45 18             	mov    0x18(%ebp),%eax
 854695c:	81 c2 94 00 00 00    	add    $0x94,%edx
 8546962:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 8546966:	89 da                	mov    %ebx,%edx
 8546968:	29 c2                	sub    %eax,%edx
 854696a:	89 d0                	mov    %edx,%eax
 854696c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 854696f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8546976:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8546979:	89 44 24 04          	mov    %eax,0x4(%esp)
 854697d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8546980:	89 04 24             	mov    %eax,(%esp)
 8546983:	e8 90 78 b4 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8546988:	8b 00                	mov    (%eax),%eax
 854698a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854698d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8546990:	8b 45 18             	mov    0x18(%ebp),%eax
 8546993:	8b 80 3c 02 00 00    	mov    0x23c(%eax),%eax
 8546999:	39 c2                	cmp    %eax,%edx
 854699b:	0f 82 e9 00 00 00    	jb     8546a8a <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x152>
 85469a1:	8b 45 18             	mov    0x18(%ebp),%eax
 85469a4:	8b 80 58 02 00 00    	mov    0x258(%eax),%eax
 85469aa:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85469ad:	0f 83 da 00 00 00    	jae    8546a8d <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x155>
 85469b3:	8b 45 18             	mov    0x18(%ebp),%eax
 85469b6:	8b 80 38 02 00 00    	mov    0x238(%eax),%eax
 85469bc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85469bf:	8b 45 10             	mov    0x10(%ebp),%eax
 85469c2:	89 04 24             	mov    %eax,(%esp)
 85469c5:	e8 0c a9 ba ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85469ca:	89 c2                	mov    %eax,%edx
 85469cc:	8b 45 18             	mov    0x18(%ebp),%eax
 85469cf:	81 c2 90 00 00 00    	add    $0x90,%edx
 85469d5:	d9 04 90             	flds   (%eax,%edx,4)
 85469d8:	d9 5d b4             	fstps  -0x4c(%ebp)
 85469db:	8b 45 18             	mov    0x18(%ebp),%eax
 85469de:	8b 80 58 02 00 00    	mov    0x258(%eax),%eax
 85469e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85469e7:	89 d1                	mov    %edx,%ecx
 85469e9:	29 c1                	sub    %eax,%ecx
 85469eb:	89 c8                	mov    %ecx,%eax
 85469ed:	ba 00 00 00 00       	mov    $0x0,%edx
 85469f2:	89 45 c0             	mov    %eax,-0x40(%ebp)
 85469f5:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 85469f8:	df 6d c0             	fildll -0x40(%ebp)
 85469fb:	dd 05 08 d3 c9 08    	fldl   0x8c9d308
 8546a01:	dd 5c 24 08          	fstpl  0x8(%esp)
 8546a05:	dd 1c 24             	fstpl  (%esp)
 8546a08:	e8 a3 6f b3 ff       	call   807d9b0 <pow@plt>
 8546a0d:	d9 7d be             	fnstcw -0x42(%ebp)
 8546a10:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8546a14:	b4 0c                	mov    $0xc,%ah
 8546a16:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8546a1a:	d9 6d bc             	fldcw  -0x44(%ebp)
 8546a1d:	db 5d b8             	fistpl -0x48(%ebp)
 8546a20:	d9 6d be             	fldcw  -0x42(%ebp)
 8546a23:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8546a26:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8546a29:	db 45 b8             	fildl  -0x48(%ebp)
 8546a2c:	d8 4d b4             	fmuls  -0x4c(%ebp)
 8546a2f:	d9 6d bc             	fldcw  -0x44(%ebp)
 8546a32:	df 7d c0             	fistpll -0x40(%ebp)
 8546a35:	d9 6d be             	fldcw  -0x42(%ebp)
 8546a38:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8546a3b:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8546a3e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8546a41:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8546a44:	85 c0                	test   %eax,%eax
 8546a46:	74 48                	je     8546a90 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x158>
 8546a48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546a4b:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8546a4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8546a52:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8546a55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546a59:	89 04 24             	mov    %eax,(%esp)
 8546a5c:	e8 ee 4c 00 00       	call   854b74f <_ZSt9make_pairIRmRjESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8546a61:	83 ec 04             	sub    $0x4,%esp
 8546a64:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8546a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546a6b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8546a6e:	89 04 24             	mov    %eax,(%esp)
 8546a71:	e8 18 4d 00 00       	call   854b78e <_ZNSt4pairIiiEC1ImjEEOS_IT_T0_E>
 8546a76:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8546a79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546a7d:	8b 45 14             	mov    0x14(%ebp),%eax
 8546a80:	89 04 24             	mov    %eax,(%esp)
 8546a83:	e8 7e 6b b9 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8546a88:	eb 07                	jmp    8546a91 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x159>
 8546a8a:	90                   	nop
 8546a8b:	eb 04                	jmp    8546a91 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x159>
 8546a8d:	90                   	nop
 8546a8e:	eb 01                	jmp    8546a91 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t+0x159>
 8546a90:	90                   	nop
 8546a91:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8546a94:	c9                   	leave
 8546a95:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_getAdditionalDisjointItem @ 0x8546938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
    */

void __thiscall
WongWork::CItemUpgrade::_getAdditionalDisjointItem
          (CItemUpgrade *this,uint param_1,CItem *param_2,vector *param_3,upgrade_table_t *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  double dVar5;
  ulonglong local_44;
  uint local_2c;
  int local_28 [2];
  pair<int,int> local_20 [8];
  ulong local_18 [2];
  uint local_10;
  
  iVar2 = CItem::get_grade(param_2);
  iVar3 = CItem::get_rarity(param_2);
  local_28[0] = iVar2 - *(int *)(param_4 + (iVar3 + 0x94) * 4 + 0xc);
  local_28[1] = 0;
  puVar4 = (uint *)std::max<int>(local_28 + 1,local_28);
  local_10 = *puVar4;
  if ((*(uint *)(param_4 + 0x23c) <= local_10) && (*(uint *)(param_4 + 600) < param_1)) {
    local_2c = *(uint *)(param_4 + 0x238);
    iVar2 = CItem::get_rarity(param_2);
    fVar1 = *(float *)(param_4 + (iVar2 + 0x90) * 4);
    local_44 = (ulonglong)(param_1 - *(int *)(param_4 + 600));
    dVar5 = pow((double)local_44,_DAT_08c9d308);
    local_44._0_4_ = (int)(longlong)ROUND((float)(int)ROUND(dVar5) * fVar1);
    if ((int)local_44 != 0) {
      std::make_pair<unsigned_long&,unsigned_int&>(local_18,&local_2c);
      std::pair<int,int>::pair<unsigned_long,unsigned_int>(local_20,(pair *)local_18);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_20);
    }
  }
  return;
}

```

---

## _getAdditionalDisjointItem_08546a96

```asm
// === 08546a96 WongWork::CItemUpgrade::_getAdditionalDisjointItem  [0x08546a96-0x8546bb9] ===
 8546a96:	55                   	push   %ebp
 8546a97:	89 e5                	mov    %esp,%ebp
 8546a99:	56                   	push   %esi
 8546a9a:	53                   	push   %ebx
 8546a9b:	83 ec 50             	sub    $0x50,%esp
 8546a9e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8546aa1:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8546aa4:	8b 45 18             	mov    0x18(%ebp),%eax
 8546aa7:	8d 90 90 04 00 00    	lea    0x490(%eax),%edx
 8546aad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8546ab0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546ab4:	89 14 24             	mov    %edx,(%esp)
 8546ab7:	e8 06 4d 00 00       	call   854b7c2 <_ZNKSt6vectorI15STResultItemCntSaIS0_EE2atEj>
 8546abc:	8b 10                	mov    (%eax),%edx
 8546abe:	89 55 d2             	mov    %edx,-0x2e(%ebp)
 8546ac1:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8546ac5:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 8546ac9:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 8546acd:	98                   	cwtl
 8546ace:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8546ad1:	0f 85 d4 00 00 00    	jne    8546bab <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x115>
 8546ad7:	8b 45 18             	mov    0x18(%ebp),%eax
 8546ada:	8b 80 8c 04 00 00    	mov    0x48c(%eax),%eax
 8546ae0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8546ae3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8546aea:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8546aee:	74 0a                	je     8546afa <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x64>
 8546af0:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 8546af4:	98                   	cwtl
 8546af5:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8546af8:	eb 08                	jmp    8546b02 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x6c>
 8546afa:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8546afe:	98                   	cwtl
 8546aff:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8546b02:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8546b05:	85 c0                	test   %eax,%eax
 8546b07:	0f 84 a1 00 00 00    	je     8546bae <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x118>
 8546b0d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8546b10:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8546b13:	89 54 24 08          	mov    %edx,0x8(%esp)
 8546b17:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8546b1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8546b1e:	89 04 24             	mov    %eax,(%esp)
 8546b21:	e8 29 4c 00 00       	call   854b74f <_ZSt9make_pairIRmRjESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8546b26:	83 ec 04             	sub    $0x4,%esp
 8546b29:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8546b2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546b30:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8546b33:	89 04 24             	mov    %eax,(%esp)
 8546b36:	e8 53 4c 00 00       	call   854b78e <_ZNSt4pairIiiEC1ImjEEOS_IT_T0_E>
 8546b3b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8546b3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8546b42:	8b 45 14             	mov    0x14(%ebp),%eax
 8546b45:	89 04 24             	mov    %eax,(%esp)
 8546b48:	e8 b9 6a b9 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8546b4d:	eb 60                	jmp    8546baf <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x119>
 8546b4f:	89 04 24             	mov    %eax,(%esp)
 8546b52:	e8 89 f1 1d 00       	call   8725ce0 <__cxa_begin_catch>
 8546b57:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8546b5e:	00 
 8546b5f:	c7 44 24 08 21 01 00 	movl   $0x121,0x8(%esp)
 8546b66:	00 
 8546b67:	c7 44 24 04 80 d2 c9 	movl   $0x8c9d280,0x4(%esp)
 8546b6e:	08 
 8546b6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8546b72:	89 04 24             	mov    %eax,(%esp)
 8546b75:	e8 9e 8b 00 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8546b7a:	c7 44 24 04 e4 c3 c9 	movl   $0x8c9c3e4,0x4(%esp)
 8546b81:	08 
 8546b82:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8546b85:	89 04 24             	mov    %eax,(%esp)
 8546b88:	e8 fb 8b 00 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8546b8d:	eb 15                	jmp    8546ba4 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x10e>
 8546b8f:	89 d3                	mov    %edx,%ebx
 8546b91:	89 c6                	mov    %eax,%esi
 8546b93:	e8 98 f0 1d 00       	call   8725c30 <__cxa_end_catch>
 8546b98:	89 f0                	mov    %esi,%eax
 8546b9a:	89 da                	mov    %ebx,%edx
 8546b9c:	89 04 24             	mov    %eax,(%esp)
 8546b9f:	e8 ac cb 59 00       	call   8ae3750 <_Unwind_Resume>
 8546ba4:	e8 87 f0 1d 00       	call   8725c30 <__cxa_end_catch>
 8546ba9:	eb 04                	jmp    8546baf <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x119>
 8546bab:	90                   	nop
 8546bac:	eb 01                	jmp    8546baf <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_tb+0x119>
 8546bae:	90                   	nop
 8546baf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8546bb2:	83 c4 00             	add    $0x0,%esp
 8546bb5:	5b                   	pop    %ebx
 8546bb6:	5e                   	pop    %esi
 8546bb7:	5d                   	pop    %ebp
 8546bb8:	c3                   	ret
 8546bb9:	90                   	nop

```

```c
// WongWork::CItemUpgrade::_getAdditionalDisjointItem @ 0x8546a96

/* WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&,
   bool) */

void __thiscall
WongWork::CItemUpgrade::_getAdditionalDisjointItem
          (CItemUpgrade *this,uint param_1,CItem *param_2,vector *param_3,upgrade_table_t *param_4,
          bool param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint local_38;
  undefined4 local_32;
  short local_2e;
  pair<int,int> local_2c [8];
  ulong local_24 [6];
  
                    /* try { // try from 08546ab7 to 08546b4c has its CatchHandler @ 08546b4f */
  puVar2 = (undefined4 *)
           std::vector<STResultItemCnt,std::allocator<STResultItemCnt>>::at
                     ((vector<STResultItemCnt,std::allocator<STResultItemCnt>> *)(param_4 + 0x490),
                      param_1);
  uVar1 = *puVar2;
  local_2e = *(short *)(puVar2 + 1);
  local_32._0_2_ = (short)uVar1;
  if ((int)(short)local_32 == param_1) {
    local_38 = *(uint *)(param_4 + 0x48c);
    local_32._2_2_ = local_2e;
    if (!param_5) {
      local_32._2_2_ = (short)((uint)uVar1 >> 0x10);
    }
    if (local_32._2_2_ != 0) {
      local_32 = uVar1;
      std::make_pair<unsigned_long&,unsigned_int&>(local_24,&local_38);
      std::pair<int,int>::pair<unsigned_long,unsigned_int>(local_2c,(pair *)local_24);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_2c);
    }
  }
  return;
}

```

---

## _getUpgradeCountByUpgradeItem

```asm
// === 08548e68 WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem  [0x08548e68-0x8548ff9] ===
 8548e68:	55                   	push   %ebp
 8548e69:	89 e5                	mov    %esp,%ebp
 8548e6b:	53                   	push   %ebx
 8548e6c:	83 ec 34             	sub    $0x34,%esp
 8548e6f:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8548e75:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548e78:	83 c0 11             	add    $0x11,%eax
 8548e7b:	89 04 24             	mov    %eax,(%esp)
 8548e7e:	e8 49 79 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8548e83:	84 c0                	test   %al,%al
 8548e85:	0f 85 80 00 00 00    	jne    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548e8b:	8b 45 10             	mov    0x10(%ebp),%eax
 8548e8e:	8b 40 02             	mov    0x2(%eax),%eax
 8548e91:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 8548e96:	74 4d                	je     8548ee5 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x7d>
 8548e98:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 8548e9d:	77 17                	ja     8548eb6 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x4e>
 8548e9f:	3d 6a 1c 00 00       	cmp    $0x1c6a,%eax
 8548ea4:	74 2f                	je     8548ed5 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x6d>
 8548ea6:	3d 6b 1c 00 00       	cmp    $0x1c6b,%eax
 8548eab:	74 30                	je     8548edd <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x75>
 8548ead:	3d 69 1c 00 00       	cmp    $0x1c69,%eax
 8548eb2:	74 19                	je     8548ecd <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x65>
 8548eb4:	eb 4f                	jmp    8548f05 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x9d>
 8548eb6:	3d 40 1e 00 00       	cmp    $0x1e40,%eax
 8548ebb:	74 38                	je     8548ef5 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x8d>
 8548ebd:	3d 86 1e 00 00       	cmp    $0x1e86,%eax
 8548ec2:	74 39                	je     8548efd <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x95>
 8548ec4:	3d 3f 1e 00 00       	cmp    $0x1e3f,%eax
 8548ec9:	74 22                	je     8548eed <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x85>
 8548ecb:	eb 38                	jmp    8548f05 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x9d>
 8548ecd:	66 c7 45 e6 07 00    	movw   $0x7,-0x1a(%ebp)
 8548ed3:	eb 36                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548ed5:	66 c7 45 e6 0a 00    	movw   $0xa,-0x1a(%ebp)
 8548edb:	eb 2e                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548edd:	66 c7 45 e6 0c 00    	movw   $0xc,-0x1a(%ebp)
 8548ee3:	eb 26                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548ee5:	66 c7 45 e6 07 00    	movw   $0x7,-0x1a(%ebp)
 8548eeb:	eb 1e                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548eed:	66 c7 45 e6 03 00    	movw   $0x3,-0x1a(%ebp)
 8548ef3:	eb 16                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548ef5:	66 c7 45 e6 05 00    	movw   $0x5,-0x1a(%ebp)
 8548efb:	eb 0e                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548efd:	66 c7 45 e6 0d 00    	movw   $0xd,-0x1a(%ebp)
 8548f03:	eb 06                	jmp    8548f0b <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa3>
 8548f05:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8548f0b:	8b 45 10             	mov    0x10(%ebp),%eax
 8548f0e:	8b 40 02             	mov    0x2(%eax),%eax
 8548f11:	89 c3                	mov    %eax,%ebx
 8548f13:	e8 83 32 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8548f18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8548f1c:	89 04 24             	mov    %eax,(%esp)
 8548f1f:	e8 0e 6b e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8548f24:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8548f27:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8548f2b:	74 16                	je     8548f43 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xdb>
 8548f2d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548f30:	89 04 24             	mov    %eax,(%esp)
 8548f33:	e8 c2 83 ba ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8548f38:	84 c0                	test   %al,%al
 8548f3a:	74 07                	je     8548f43 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xdb>
 8548f3c:	b8 01 00 00 00       	mov    $0x1,%eax
 8548f41:	eb 05                	jmp    8548f48 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xe0>
 8548f43:	b8 00 00 00 00       	mov    $0x0,%eax
 8548f48:	84 c0                	test   %al,%al
 8548f4a:	0f 84 a0 00 00 00    	je     8548ff0 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x188>
 8548f50:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8548f53:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8548f56:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8548f59:	89 04 24             	mov    %eax,(%esp)
 8548f5c:	e8 c1 b2 f6 ff       	call   84b4222 <_ZN14CStackableItem17IsReinforceTicketEv>
 8548f61:	84 c0                	test   %al,%al
 8548f63:	74 2d                	je     8548f92 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x12a>
 8548f65:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8548f68:	89 04 24             	mov    %eax,(%esp)
 8548f6b:	e8 88 25 00 00       	call   854b4f8 <_ZN14CStackableItem17GetReinforceVauleEv>
 8548f70:	98                   	cwtl
 8548f71:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8548f74:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8548f78:	78 06                	js     8548f80 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x118>
 8548f7a:	83 7d f0 1f          	cmpl   $0x1f,-0x10(%ebp)
 8548f7e:	7e 09                	jle    8548f89 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x121>
 8548f80:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8548f86:	90                   	nop
 8548f87:	eb 67                	jmp    8548ff0 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x188>
 8548f89:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8548f8c:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8548f90:	eb 5e                	jmp    8548ff0 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x188>
 8548f92:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8548f95:	89 04 24             	mov    %eax,(%esp)
 8548f98:	e8 a5 b2 f6 ff       	call   84b4242 <_ZN14CStackableItem24IsAmplifyReinforceTicketEv>
 8548f9d:	84 c0                	test   %al,%al
 8548f9f:	74 4f                	je     8548ff0 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x188>
 8548fa1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8548fa4:	83 c0 11             	add    $0x11,%eax
 8548fa7:	89 04 24             	mov    %eax,(%esp)
 8548faa:	e8 1d 78 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8548faf:	83 f0 01             	xor    $0x1,%eax
 8548fb2:	84 c0                	test   %al,%al
 8548fb4:	74 10                	je     8548fc6 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x15e>
 8548fb6:	8b 45 14             	mov    0x14(%ebp),%eax
 8548fb9:	c7 00 13 00 00 00    	movl   $0x13,(%eax)
 8548fbf:	b8 00 00 00 00       	mov    $0x0,%eax
 8548fc4:	eb 2e                	jmp    8548ff4 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x18c>
 8548fc6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8548fc9:	89 04 24             	mov    %eax,(%esp)
 8548fcc:	e8 37 25 00 00       	call   854b508 <_ZN14CStackableItem24GetAmplifyReinforceValueEv>
 8548fd1:	98                   	cwtl
 8548fd2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8548fd5:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8548fd9:	78 06                	js     8548fe1 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x179>
 8548fdb:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
 8548fdf:	7e 08                	jle    8548fe9 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x181>
 8548fe1:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 8548fe7:	eb 07                	jmp    8548ff0 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x188>
 8548fe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8548fec:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 8548ff0:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 8548ff4:	83 c4 34             	add    $0x34,%esp
 8548ff7:	5b                   	pop    %ebx
 8548ff8:	5d                   	pop    %ebp
 8548ff9:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem @ 0x8548e68

/* WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem(Inven_Item const&, Inven_Item const&,
   ENUM_ERROR&) */

short __thiscall
WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,ENUM_ERROR *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *this_01;
  short local_1e;
  
  local_1e = 0;
  cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
  if (cVar4 == '\0') {
    uVar1 = *(uint *)(param_2 + 2);
    if (uVar1 == 0x1d29) {
      local_1e = 7;
    }
    else {
      if (uVar1 < 0x1d2a) {
        if (uVar1 == 0x1c6a) {
          local_1e = 10;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1c6b) {
          local_1e = 0xc;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1c69) {
          local_1e = 7;
          goto LAB_08548f0b;
        }
      }
      else {
        if (uVar1 == 0x1e40) {
          local_1e = 5;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1e86) {
          local_1e = 0xd;
          goto LAB_08548f0b;
        }
        if (uVar1 == 0x1e3f) {
          local_1e = 3;
          goto LAB_08548f0b;
        }
      }
      local_1e = 0;
    }
  }
LAB_08548f0b:
  iVar2 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
  if ((this_01 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_01), cVar4 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    cVar4 = CStackableItem::IsReinforceTicket((CStackableItem *)this_01);
    if (cVar4 == '\0') {
      cVar4 = CStackableItem::IsAmplifyReinforceTicket((CStackableItem *)this_01);
      if (cVar4 != '\0') {
        cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
        if (cVar4 == '\x01') {
          local_1e = CStackableItem::GetAmplifyReinforceValue((CStackableItem *)this_01);
          if ((local_1e < 0) || (0x1f < local_1e)) {
            local_1e = 0;
          }
        }
        else {
          *(undefined4 *)param_3 = 0x13;
          local_1e = 0;
        }
      }
    }
    else {
      local_1e = CStackableItem::GetReinforceVaule((CStackableItem *)this_01);
      if ((local_1e < 0) || (0x1f < local_1e)) {
        local_1e = 0;
      }
    }
  }
  return local_1e;
}

```

---

## _getUpgradeRateByUpgradeItem

```asm
// === 08548ffa WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem  [0x08548ffa-0x8549147] ===
 8548ffa:	55                   	push   %ebp
 8548ffb:	89 e5                	mov    %esp,%ebp
 8548ffd:	53                   	push   %ebx
 8548ffe:	83 ec 34             	sub    $0x34,%esp
 8549001:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8549005:	8b 45 0c             	mov    0xc(%ebp),%eax
 8549008:	83 c0 11             	add    $0x11,%eax
 854900b:	89 04 24             	mov    %eax,(%esp)
 854900e:	e8 b9 77 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 8549013:	84 c0                	test   %al,%al
 8549015:	75 46                	jne    854905d <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x63>
 8549017:	8b 45 10             	mov    0x10(%ebp),%eax
 854901a:	8b 40 02             	mov    0x2(%eax),%eax
 854901d:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 8549022:	74 28                	je     854904c <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x52>
 8549024:	3d 29 1d 00 00       	cmp    $0x1d29,%eax
 8549029:	77 0c                	ja     8549037 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x3d>
 854902b:	2d 69 1c 00 00       	sub    $0x1c69,%eax
 8549030:	83 f8 02             	cmp    $0x2,%eax
 8549033:	77 24                	ja     8549059 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x5f>
 8549035:	eb 15                	jmp    854904c <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x52>
 8549037:	3d 3f 1e 00 00       	cmp    $0x1e3f,%eax
 854903c:	72 1b                	jb     8549059 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x5f>
 854903e:	3d 40 1e 00 00       	cmp    $0x1e40,%eax
 8549043:	76 07                	jbe    854904c <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x52>
 8549045:	3d 86 1e 00 00       	cmp    $0x1e86,%eax
 854904a:	75 0d                	jne    8549059 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x5f>
 854904c:	c6 45 e7 64          	movb   $0x64,-0x19(%ebp)
 8549050:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8549054:	e9 e9 00 00 00       	jmp    8549142 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x148>
 8549059:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 854905d:	8b 45 10             	mov    0x10(%ebp),%eax
 8549060:	8b 40 02             	mov    0x2(%eax),%eax
 8549063:	89 c3                	mov    %eax,%ebx
 8549065:	e8 31 31 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854906a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854906e:	89 04 24             	mov    %eax,(%esp)
 8549071:	e8 bc 69 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8549076:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8549079:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 854907d:	74 16                	je     8549095 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x9b>
 854907f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8549082:	89 04 24             	mov    %eax,(%esp)
 8549085:	e8 70 82 ba ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 854908a:	84 c0                	test   %al,%al
 854908c:	74 07                	je     8549095 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x9b>
 854908e:	b8 01 00 00 00       	mov    $0x1,%eax
 8549093:	eb 05                	jmp    854909a <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xa0>
 8549095:	b8 00 00 00 00       	mov    $0x0,%eax
 854909a:	84 c0                	test   %al,%al
 854909c:	0f 84 9c 00 00 00    	je     854913e <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x144>
 85490a2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85490a5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85490a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85490ab:	89 04 24             	mov    %eax,(%esp)
 85490ae:	e8 6f b1 f6 ff       	call   84b4222 <_ZN14CStackableItem17IsReinforceTicketEv>
 85490b3:	84 c0                	test   %al,%al
 85490b5:	74 2a                	je     85490e1 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xe7>
 85490b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85490ba:	89 04 24             	mov    %eax,(%esp)
 85490bd:	e8 70 b1 f6 ff       	call   84b4232 <_ZN14CStackableItem16GetReinforceRateEv>
 85490c2:	88 45 f3             	mov    %al,-0xd(%ebp)
 85490c5:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 85490c9:	78 06                	js     85490d1 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xd7>
 85490cb:	80 7d f3 64          	cmpb   $0x64,-0xd(%ebp)
 85490cf:	7e 07                	jle    85490d8 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0xde>
 85490d1:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 85490d5:	90                   	nop
 85490d6:	eb 66                	jmp    854913e <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x144>
 85490d8:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85490dc:	88 45 e7             	mov    %al,-0x19(%ebp)
 85490df:	eb 5d                	jmp    854913e <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x144>
 85490e1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85490e4:	89 04 24             	mov    %eax,(%esp)
 85490e7:	e8 56 b1 f6 ff       	call   84b4242 <_ZN14CStackableItem24IsAmplifyReinforceTicketEv>
 85490ec:	84 c0                	test   %al,%al
 85490ee:	74 4e                	je     854913e <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x144>
 85490f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85490f3:	83 c0 11             	add    $0x11,%eax
 85490f6:	89 04 24             	mov    %eax,(%esp)
 85490f9:	e8 ce 76 c0 ff       	call   81507cc <_ZNK17stAmplifyOption_t10hasAbilityEv>
 85490fe:	83 f0 01             	xor    $0x1,%eax
 8549101:	84 c0                	test   %al,%al
 8549103:	74 10                	je     8549115 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x11b>
 8549105:	8b 45 14             	mov    0x14(%ebp),%eax
 8549108:	c7 00 13 00 00 00    	movl   $0x13,(%eax)
 854910e:	b8 00 00 00 00       	mov    $0x0,%eax
 8549113:	eb 2d                	jmp    8549142 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x148>
 8549115:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8549118:	89 04 24             	mov    %eax,(%esp)
 854911b:	e8 32 b1 f6 ff       	call   84b4252 <_ZN14CStackableItem23GetAmplifyReinforceRateEv>
 8549120:	0f be c0             	movsbl %al,%eax
 8549123:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8549126:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854912a:	78 06                	js     8549132 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x138>
 854912c:	83 7d f4 64          	cmpl   $0x64,-0xc(%ebp)
 8549130:	7e 06                	jle    8549138 <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x13e>
 8549132:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8549136:	eb 06                	jmp    854913e <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR+0x144>
 8549138:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854913b:	88 45 e7             	mov    %al,-0x19(%ebp)
 854913e:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8549142:	83 c4 34             	add    $0x34,%esp
 8549145:	5b                   	pop    %ebx
 8549146:	5d                   	pop    %ebp
 8549147:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem @ 0x8548ffa

/* WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem(Inven_Item const&, Inven_Item const&,
   ENUM_ERROR&) */

char __thiscall
WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem
          (CItemUpgrade *this,Inven_Item *param_1,Inven_Item *param_2,ENUM_ERROR *param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this_00;
  CItem *this_01;
  char local_1d;
  
  cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
  if (cVar4 != '\0') goto LAB_0854905d;
  uVar1 = *(uint *)(param_2 + 2);
  if (uVar1 == 0x1d29) {
LAB_0854904c:
    local_1d = 'd';
  }
  else {
    if (uVar1 < 0x1d2a) {
      if (uVar1 - 0x1c69 < 3) goto LAB_0854904c;
    }
    else if ((0x1e3e < uVar1) && ((uVar1 < 0x1e41 || (uVar1 == 0x1e86)))) goto LAB_0854904c;
LAB_0854905d:
    local_1d = '\0';
    iVar2 = *(int *)(param_2 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    this_01 = (CItem *)CDataManager::find_item(this_00,iVar2);
    if ((this_01 == (CItem *)0x0) || (cVar4 = CItem::is_stackable(this_01), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = CStackableItem::IsReinforceTicket((CStackableItem *)this_01);
      if (cVar4 == '\0') {
        cVar4 = CStackableItem::IsAmplifyReinforceTicket((CStackableItem *)this_01);
        if (cVar4 != '\0') {
          cVar4 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_1 + 0x11));
          if (cVar4 == '\x01') {
            local_1d = CStackableItem::GetAmplifyReinforceRate((CStackableItem *)this_01);
            if ((local_1d < '\0') || ('d' < local_1d)) {
              local_1d = '\0';
            }
          }
          else {
            *(undefined4 *)param_3 = 0x13;
            local_1d = '\0';
          }
        }
      }
      else {
        local_1d = CStackableItem::GetReinforceRate((CStackableItem *)this_01);
        if ((local_1d < '\0') || ('d' < local_1d)) {
          local_1d = '\0';
        }
      }
    }
  }
  return local_1d;
}

```

---

## enableAmplifyRandomUpgrade

```asm
// === 0854af38 WongWork::CItemUpgrade::enableAmplifyRandomUpgrade  [0x0854af38-0x854b137] ===
 854af38:	55                   	push   %ebp
 854af39:	89 e5                	mov    %esp,%ebp
 854af3b:	53                   	push   %ebx
 854af3c:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 854af42:	8b 45 10             	mov    0x10(%ebp),%eax
 854af45:	8b 40 02             	mov    0x2(%eax),%eax
 854af48:	89 c3                	mov    %eax,%ebx
 854af4a:	e8 4c 12 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854af4f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854af53:	89 04 24             	mov    %eax,(%esp)
 854af56:	e8 d7 4a e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854af5b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 854af5e:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 854af62:	75 0a                	jne    854af6e <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x36>
 854af64:	b8 04 00 00 00       	mov    $0x4,%eax
 854af69:	e9 c1 01 00 00       	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854af6e:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 854af73:	89 04 24             	mov    %eax,(%esp)
 854af76:	e8 e5 05 00 00       	call   854b560 <_ZNK14CItemAmplifier19getUpgradeInfoTableEv>
 854af7b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 854af7e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 854af84:	89 04 24             	mov    %eax,(%esp)
 854af87:	e8 f6 02 00 00       	call   854b282 <_ZN14upgrade_info_tC1Ev>
 854af8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854af8f:	89 04 24             	mov    %eax,(%esp)
 854af92:	e8 21 f3 b8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 854af97:	89 44 24 14          	mov    %eax,0x14(%esp)
 854af9b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 854afa1:	89 44 24 10          	mov    %eax,0x10(%esp)
 854afa5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854afa8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854afac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854afaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 854afb3:	8b 45 10             	mov    0x10(%ebp),%eax
 854afb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 854afba:	8b 45 08             	mov    0x8(%ebp),%eax
 854afbd:	89 04 24             	mov    %eax,(%esp)
 854afc0:	e8 c5 b7 ff ff       	call   854678a <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti>
 854afc5:	83 f0 01             	xor    $0x1,%eax
 854afc8:	84 c0                	test   %al,%al
 854afca:	74 0a                	je     854afd6 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x9e>
 854afcc:	b8 0d 00 00 00       	mov    $0xd,%eax
 854afd1:	e9 59 01 00 00       	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854afd6:	8b 45 10             	mov    0x10(%ebp),%eax
 854afd9:	89 04 24             	mov    %eax,(%esp)
 854afdc:	e8 8b a0 ba ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 854afe1:	0f b6 c0             	movzbl %al,%eax
 854afe4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854afe7:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 854afee:	c7 45 9c 01 00 00 00 	movl   $0x1,-0x64(%ebp)
 854aff5:	8b 45 14             	mov    0x14(%ebp),%eax
 854aff8:	8b 40 02             	mov    0x2(%eax),%eax
 854affb:	89 45 98             	mov    %eax,-0x68(%ebp)
 854affe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854b001:	8b 00                	mov    (%eax),%eax
 854b003:	83 c0 34             	add    $0x34,%eax
 854b006:	8b 10                	mov    (%eax),%edx
 854b008:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854b00b:	89 04 24             	mov    %eax,(%esp)
 854b00e:	ff d2                	call   *%edx
 854b010:	84 c0                	test   %al,%al
 854b012:	74 0a                	je     854b01e <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0xe6>
 854b014:	b8 13 00 00 00       	mov    $0x13,%eax
 854b019:	e9 11 01 00 00       	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b01e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 854b025:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 854b02b:	89 44 24 18          	mov    %eax,0x18(%esp)
 854b02f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854b032:	89 44 24 14          	mov    %eax,0x14(%esp)
 854b036:	8b 45 14             	mov    0x14(%ebp),%eax
 854b039:	89 44 24 10          	mov    %eax,0x10(%esp)
 854b03d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 854b040:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854b044:	8b 45 10             	mov    0x10(%ebp),%eax
 854b047:	89 44 24 08          	mov    %eax,0x8(%esp)
 854b04b:	8b 45 0c             	mov    0xc(%ebp),%eax
 854b04e:	89 44 24 04          	mov    %eax,0x4(%esp)
 854b052:	8b 45 08             	mov    0x8(%ebp),%eax
 854b055:	89 04 24             	mov    %eax,(%esp)
 854b058:	e8 e5 b2 ff ff       	call   8546342 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t>
 854b05d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 854b060:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 854b064:	0f 95 c0             	setne  %al
 854b067:	84 c0                	test   %al,%al
 854b069:	74 08                	je     854b073 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x13b>
 854b06b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 854b06e:	e9 bc 00 00 00       	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b073:	8b 45 14             	mov    0x14(%ebp),%eax
 854b076:	8b 40 02             	mov    0x2(%eax),%eax
 854b079:	89 c3                	mov    %eax,%ebx
 854b07b:	e8 1b 11 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854b080:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854b084:	89 04 24             	mov    %eax,(%esp)
 854b087:	e8 a6 49 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854b08c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 854b08f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 854b093:	75 0a                	jne    854b09f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x167>
 854b095:	b8 04 00 00 00       	mov    $0x4,%eax
 854b09a:	e9 90 00 00 00       	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b09f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 854b0a2:	89 04 24             	mov    %eax,(%esp)
 854b0a5:	e8 50 62 ba ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 854b0aa:	83 f0 01             	xor    $0x1,%eax
 854b0ad:	84 c0                	test   %al,%al
 854b0af:	74 07                	je     854b0b8 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x180>
 854b0b1:	b8 04 00 00 00       	mov    $0x4,%eax
 854b0b6:	eb 77                	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b0b8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 854b0bb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854b0be:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854b0c1:	89 04 24             	mov    %eax,(%esp)
 854b0c4:	e8 4f 04 00 00       	call   854b518 <_ZN14CStackableItem34is_random_amplify_reinforce_ticketEv>
 854b0c9:	83 f0 01             	xor    $0x1,%eax
 854b0cc:	84 c0                	test   %al,%al
 854b0ce:	74 07                	je     854b0d7 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x19f>
 854b0d0:	b8 04 00 00 00       	mov    $0x4,%eax
 854b0d5:	eb 58                	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b0d7:	c7 45 d8 64 00 00 00 	movl   $0x64,-0x28(%ebp)
 854b0de:	8b 45 08             	mov    0x8(%ebp),%eax
 854b0e1:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 854b0e7:	8d 55 d8             	lea    -0x28(%ebp),%edx
 854b0ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 854b0ee:	89 04 24             	mov    %eax,(%esp)
 854b0f1:	e8 c8 09 b8 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 854b0f6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854b0f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854b0fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 854b100:	8b 45 f0             	mov    -0x10(%ebp),%eax
 854b103:	89 04 24             	mov    %eax,(%esp)
 854b106:	e8 39 83 fc ff       	call   8513444 <_ZN14CStackableItem27get_amplify_reinforce_countEi>
 854b10b:	8b 55 18             	mov    0x18(%ebp),%edx
 854b10e:	89 02                	mov    %eax,(%edx)
 854b110:	8b 45 18             	mov    0x18(%ebp),%eax
 854b113:	8b 00                	mov    (%eax),%eax
 854b115:	85 c0                	test   %eax,%eax
 854b117:	78 0a                	js     854b123 <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1eb>
 854b119:	8b 45 18             	mov    0x18(%ebp),%eax
 854b11c:	8b 00                	mov    (%eax),%eax
 854b11e:	83 f8 1f             	cmp    $0x1f,%eax
 854b121:	7e 07                	jle    854b12a <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f2>
 854b123:	b8 04 00 00 00       	mov    $0x4,%eax
 854b128:	eb 05                	jmp    854b12f <_ZN8WongWork12CItemUpgrade26enableAmplifyRandomUpgradeEP5CUserR10Inven_ItemS4_Ri+0x1f7>
 854b12a:	b8 00 00 00 00       	mov    $0x0,%eax
 854b12f:	81 c4 b4 00 00 00    	add    $0xb4,%esp
 854b135:	5b                   	pop    %ebx
 854b136:	5d                   	pop    %ebp
 854b137:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::enableAmplifyRandomUpgrade @ 0x854af38

/* WongWork::CItemUpgrade::enableAmplifyRandomUpgrade(CUser*, Inven_Item&, Inven_Item&, int&) */

int __thiscall
WongWork::CItemUpgrade::enableAmplifyRandomUpgrade
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,Inven_Item *param_3,int *param_4)

{
  char cVar1;
  CDataManager *pCVar2;
  int iVar3;
  upgrade_info_t local_98 [44];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulong local_2c;
  CItem *local_28;
  upgrade_table_t *local_24;
  uint local_20;
  int local_1c;
  CStackableItem *local_18;
  CStackableItem *local_14;
  int local_10;
  
  iVar3 = *(int *)(param_2 + 2);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_28 = (CItem *)CDataManager::find_item(pCVar2,iVar3);
  if (local_28 == (CItem *)0x0) {
    local_1c = 4;
  }
  else {
    local_24 = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
    upgrade_info_t::upgrade_info_t(local_98);
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = _GetUpgradeInfo(this,param_2,local_28,local_24,local_98,iVar3);
    if (cVar1 == '\x01') {
      local_20 = Inven_Item::GetUpgrade(param_2);
      local_20 = local_20 & 0xff;
      local_64 = 0;
      local_68 = 1;
      local_6c = *(undefined4 *)(param_3 + 2);
      cVar1 = (**(code **)(*(int *)local_28 + 0x34))(local_28);
      if (cVar1 == '\0') {
        local_1c = 0;
        local_1c = _CheckCondition(this,param_1,param_2,local_28,param_3,local_24,local_98);
        if (local_1c == 0) {
          iVar3 = *(int *)(param_3 + 2);
          pCVar2 = (CDataManager *)G_CDataManager();
          local_18 = (CStackableItem *)CDataManager::find_item(pCVar2,iVar3);
          if (local_18 == (CStackableItem *)0x0) {
            local_1c = 4;
          }
          else {
            cVar1 = CItem::is_stackable((CItem *)local_18);
            if (cVar1 == '\x01') {
              local_14 = local_18;
              cVar1 = CStackableItem::is_random_amplify_reinforce_ticket(local_18);
              if (cVar1 == '\x01') {
                local_2c = 100;
                local_10 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_2c);
                iVar3 = CStackableItem::get_amplify_reinforce_count(local_14,local_10);
                *param_4 = iVar3;
                if ((*param_4 < 0) || (0x1f < *param_4)) {
                  local_1c = 4;
                }
                else {
                  local_1c = 0;
                }
              }
              else {
                local_1c = 4;
              }
            }
            else {
              local_1c = 4;
            }
          }
        }
      }
      else {
        local_1c = 0x13;
      }
    }
    else {
      local_1c = 0xd;
    }
  }
  return local_1c;
}

```

---

## find3rdChronicleEnchantData

```asm
// === 0854a916 WongWork::CItemUpgrade::find3rdChronicleEnchantData  [0x0854a916-0x854a9a9] ===
 854a916:	55                   	push   %ebp
 854a917:	89 e5                	mov    %esp,%ebp
 854a919:	83 ec 28             	sub    $0x28,%esp
 854a91c:	e8 7a 18 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854a921:	8b 55 10             	mov    0x10(%ebp),%edx
 854a924:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a928:	89 04 24             	mov    %eax,(%esp)
 854a92b:	e8 02 51 e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854a930:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854a933:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854a937:	75 07                	jne    854a940 <_ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi+0x2a>
 854a939:	b8 00 00 00 00       	mov    $0x0,%eax
 854a93e:	eb 68                	jmp    854a9a8 <_ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi+0x92>
 854a940:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854a943:	8d 88 f4 02 00 00    	lea    0x2f4(%eax),%ecx
 854a949:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854a94c:	8b 55 0c             	mov    0xc(%ebp),%edx
 854a94f:	89 54 24 08          	mov    %edx,0x8(%esp)
 854a953:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 854a957:	89 04 24             	mov    %eax,(%esp)
 854a95a:	e8 31 10 00 00       	call   854b990 <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 854a95f:	83 ec 04             	sub    $0x4,%esp
 854a962:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854a965:	8d 90 f4 02 00 00    	lea    0x2f4(%eax),%edx
 854a96b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854a96e:	89 54 24 04          	mov    %edx,0x4(%esp)
 854a972:	89 04 24             	mov    %eax,(%esp)
 854a975:	e8 42 10 00 00       	call   854b9bc <_ZNSt3mapI21STEnchantSystemMapKey22STEnchantSystemMapDataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 854a97a:	83 ec 04             	sub    $0x4,%esp
 854a97d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854a980:	89 44 24 04          	mov    %eax,0x4(%esp)
 854a984:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854a987:	89 04 24             	mov    %eax,(%esp)
 854a98a:	e8 53 10 00 00       	call   854b9e2 <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STEnchantSystemMapKey22STEnchantSystemMapDataEEneERKS5_>
 854a98f:	84 c0                	test   %al,%al
 854a991:	74 10                	je     854a9a3 <_ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi+0x8d>
 854a993:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854a996:	89 04 24             	mov    %eax,(%esp)
 854a999:	e8 58 10 00 00       	call   854b9f6 <_ZNKSt17_Rb_tree_iteratorISt4pairIK21STEnchantSystemMapKey22STEnchantSystemMapDataEEptEv>
 854a99e:	83 c0 10             	add    $0x10,%eax
 854a9a1:	eb 05                	jmp    854a9a8 <_ZN8WongWork12CItemUpgrade27find3rdChronicleEnchantDataE21STEnchantSystemMapKeyi+0x92>
 854a9a3:	b8 00 00 00 00       	mov    $0x0,%eax
 854a9a8:	c9                   	leave
 854a9a9:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::find3rdChronicleEnchantData @ 0x854a916

/* WongWork::CItemUpgrade::find3rdChronicleEnchantData(STEnchantSystemMapKey, int) */

int __thiscall
WongWork::CItemUpgrade::find3rdChronicleEnchantData(undefined4 this,undefined4 param_2,int param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  STEnchantSystemMapKey local_18 [4];
  map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
  local_14 [4];
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = CDataManager::find_item(this_00,param_3);
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    std::
    map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
    ::find(local_18);
    std::
    map<STEnchantSystemMapKey,STEnchantSystemMapData,std::less<STEnchantSystemMapKey>,std::allocator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>::
            operator!=((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                        *)local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
              ::operator->((_Rb_tree_iterator<std::pair<STEnchantSystemMapKey_const,STEnchantSystemMapData>>
                            *)local_18);
      iVar2 = iVar2 + 0x10;
    }
  }
  return iVar2;
}

```

---

## getUpgradeItemRepairCostRate

```asm
// === 08549148 WongWork::CItemUpgrade::getUpgradeItemRepairCostRate  [0x08549148-0x8549199] ===
 8549148:	55                   	push   %ebp
 8549149:	89 e5                	mov    %esp,%ebp
 854914b:	83 ec 38             	sub    $0x38,%esp
 854914e:	8b 45 10             	mov    0x10(%ebp),%eax
 8549151:	88 45 f4             	mov    %al,-0xc(%ebp)
 8549154:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8549158:	74 1c                	je     8549176 <_ZNK8WongWork12CItemUpgrade28getUpgradeItemRepairCostRateEib+0x2e>
 854915a:	a1 e8 f7 41 09       	mov    0x941f7e8,%eax
 854915f:	89 04 24             	mov    %eax,(%esp)
 8549162:	e8 f9 23 00 00       	call   854b560 <_ZNK14CItemAmplifier19getUpgradeInfoTableEv>
 8549167:	8b 55 0c             	mov    0xc(%ebp),%edx
 854916a:	81 c2 9c 00 00 00    	add    $0x9c,%edx
 8549170:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8549174:	eb 1b                	jmp    8549191 <_ZNK8WongWork12CItemUpgrade28getUpgradeItemRepairCostRateEib+0x49>
 8549176:	8b 45 08             	mov    0x8(%ebp),%eax
 8549179:	83 c0 04             	add    $0x4,%eax
 854917c:	89 04 24             	mov    %eax,(%esp)
 854917f:	e8 fe 21 00 00       	call   854b382 <_ZNK8WongWork17CItemUpgradeTable19getUpgradeInfoTableEv>
 8549184:	8b 55 0c             	mov    0xc(%ebp),%edx
 8549187:	81 c2 9c 00 00 00    	add    $0x9c,%edx
 854918d:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 8549191:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8549194:	d9 45 e4             	flds   -0x1c(%ebp)
 8549197:	c9                   	leave
 8549198:	c3                   	ret
 8549199:	90                   	nop

```

```c
// WongWork::CItemUpgrade::getUpgradeItemRepairCostRate @ 0x8549148

/* WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(int, bool) const */

longdouble __thiscall
WongWork::CItemUpgrade::getUpgradeItemRepairCostRate(CItemUpgrade *this,int param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  
  if (param_2) {
    iVar1 = CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
    fVar2 = *(float *)(iVar1 + 4 + (param_1 + 0x9c) * 4);
  }
  else {
    iVar1 = CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
    fVar2 = *(float *)(iVar1 + 4 + (param_1 + 0x9c) * 4);
  }
  return (longdouble)fVar2;
}

```

---

## isDoEnchant

```asm
// === 0854977a WongWork::CItemUpgrade::isDoEnchant  [0x0854977a-0x85497e9] ===
 854977a:	55                   	push   %ebp
 854977b:	89 e5                	mov    %esp,%ebp
 854977d:	83 ec 28             	sub    $0x28,%esp
 8549780:	c7 45 ec 64 00 00 00 	movl   $0x64,-0x14(%ebp)
 8549787:	8b 45 08             	mov    0x8(%ebp),%eax
 854978a:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 8549790:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8549793:	89 54 24 04          	mov    %edx,0x4(%esp)
 8549797:	89 04 24             	mov    %eax,(%esp)
 854979a:	e8 1f 23 b8 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 854979f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85497a2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85497a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85497ac:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 85497b0:	83 e0 01             	and    $0x1,%eax
 85497b3:	84 c0                	test   %al,%al
 85497b5:	75 0e                	jne    85497c5 <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc+0x4b>
 85497b7:	8b 45 10             	mov    0x10(%ebp),%eax
 85497ba:	0f b6 00             	movzbl (%eax),%eax
 85497bd:	0f be c0             	movsbl %al,%eax
 85497c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85497c3:	eb 0f                	jmp    85497d4 <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc+0x5a>
 85497c5:	8b 45 10             	mov    0x10(%ebp),%eax
 85497c8:	83 c0 01             	add    $0x1,%eax
 85497cb:	0f b6 00             	movzbl (%eax),%eax
 85497ce:	0f be c0             	movsbl %al,%eax
 85497d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85497d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85497d7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85497da:	7f 07                	jg     85497e3 <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc+0x69>
 85497dc:	b8 01 00 00 00       	mov    $0x1,%eax
 85497e1:	eb 05                	jmp    85497e8 <_ZN8WongWork12CItemUpgrade11isDoEnchantERK10Inven_ItemPc+0x6e>
 85497e3:	b8 00 00 00 00       	mov    $0x0,%eax
 85497e8:	c9                   	leave
 85497e9:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::isDoEnchant @ 0x854977a

/* WongWork::CItemUpgrade::isDoEnchant(Inven_Item const&, char*) */

bool __thiscall
WongWork::CItemUpgrade::isDoEnchant(CItemUpgrade *this,Inven_Item *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  ulong local_18 [2];
  int local_10;
  
  local_18[0] = 100;
  iVar2 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),local_18);
  if (((byte)param_1[0x1f] & 1) == 0) {
    cVar1 = *param_2;
  }
  else {
    cVar1 = param_2[1];
  }
  local_10 = (int)cVar1;
  return iVar2 <= local_10;
}

```

---

## make3rdChroniclePacket

```asm
// === 0854a9aa WongWork::CItemUpgrade::make3rdChroniclePacket  [0x0854a9aa-0x854ac89] ===
 854a9aa:	55                   	push   %ebp
 854a9ab:	89 e5                	mov    %esp,%ebp
 854a9ad:	57                   	push   %edi
 854a9ae:	56                   	push   %esi
 854a9af:	53                   	push   %ebx
 854a9b0:	83 ec 4c             	sub    $0x4c,%esp
 854a9b3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 854a9b7:	75 0a                	jne    854a9c3 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x19>
 854a9b9:	bb 00 00 00 00       	mov    $0x0,%ebx
 854a9be:	e9 bd 02 00 00       	jmp    854ac80 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2d6>
 854a9c3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854a9c6:	89 c3                	mov    %eax,%ebx
 854a9c8:	be 01 00 00 00       	mov    $0x1,%esi
 854a9cd:	eb 0e                	jmp    854a9dd <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x33>
 854a9cf:	89 1c 24             	mov    %ebx,(%esp)
 854a9d2:	e8 91 08 00 00       	call   854b268 <_ZN21STEnchantSystemMapKeyC1Ev>
 854a9d7:	83 c3 10             	add    $0x10,%ebx
 854a9da:	83 ee 01             	sub    $0x1,%esi
 854a9dd:	83 fe ff             	cmp    $0xffffffff,%esi
 854a9e0:	0f 95 c0             	setne  %al
 854a9e3:	84 c0                	test   %al,%al
 854a9e5:	75 e8                	jne    854a9cf <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x25>
 854a9e7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 854a9ee:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 854a9f2:	8b 45 10             	mov    0x10(%ebp),%eax
 854a9f5:	0f b6 40 1f          	movzbl 0x1f(%eax),%eax
 854a9f9:	83 e0 01             	and    $0x1,%eax
 854a9fc:	84 c0                	test   %al,%al
 854a9fe:	74 18                	je     854aa18 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x6e>
 854aa00:	80 45 df 01          	addb   $0x1,-0x21(%ebp)
 854aa04:	8b 45 10             	mov    0x10(%ebp),%eax
 854aa07:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 854aa0b:	83 e0 01             	and    $0x1,%eax
 854aa0e:	84 c0                	test   %al,%al
 854aa10:	74 23                	je     854aa35 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x8b>
 854aa12:	80 45 df 01          	addb   $0x1,-0x21(%ebp)
 854aa16:	eb 1d                	jmp    854aa35 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x8b>
 854aa18:	0f be 55 df          	movsbl -0x21(%ebp),%edx
 854aa1c:	8b 45 14             	mov    0x14(%ebp),%eax
 854aa1f:	89 54 24 04          	mov    %edx,0x4(%esp)
 854aa23:	89 04 24             	mov    %eax,(%esp)
 854aa26:	e8 f5 0e b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854aa2b:	bb 00 00 00 00       	mov    $0x0,%ebx
 854aa30:	e9 31 02 00 00       	jmp    854ac66 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2bc>
 854aa35:	8b 45 10             	mov    0x10(%ebp),%eax
 854aa38:	8b 40 02             	mov    0x2(%eax),%eax
 854aa3b:	89 c3                	mov    %eax,%ebx
 854aa3d:	e8 59 17 b8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854aa42:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854aa46:	89 04 24             	mov    %eax,(%esp)
 854aa49:	e8 e4 4f e1 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 854aa4e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 854aa51:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 854aa55:	75 0a                	jne    854aa61 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0xb7>
 854aa57:	bb 00 00 00 00       	mov    $0x0,%ebx
 854aa5c:	e9 05 02 00 00       	jmp    854ac66 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2bc>
 854aa61:	0f be 55 df          	movsbl -0x21(%ebp),%edx
 854aa65:	8b 45 14             	mov    0x14(%ebp),%eax
 854aa68:	89 54 24 04          	mov    %edx,0x4(%esp)
 854aa6c:	89 04 24             	mov    %eax,(%esp)
 854aa6f:	e8 ac 0e b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854aa74:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 854aa7b:	e9 a3 01 00 00       	jmp    854ac23 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x279>
 854aa80:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854aa83:	8b 55 10             	mov    0x10(%ebp),%edx
 854aa86:	0f b6 44 02 1f       	movzbl 0x1f(%edx,%eax,1),%eax
 854aa8b:	d0 e8                	shr    $1,%al
 854aa8d:	83 e0 03             	and    $0x3,%eax
 854aa90:	84 c0                	test   %al,%al
 854aa92:	75 09                	jne    854aa9d <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0xf3>
 854aa94:	c7 45 d8 e6 04 00 00 	movl   $0x4e6,-0x28(%ebp)
 854aa9b:	eb 5e                	jmp    854aafb <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x151>
 854aa9d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854aaa0:	8b 55 10             	mov    0x10(%ebp),%edx
 854aaa3:	0f b6 44 02 1f       	movzbl 0x1f(%edx,%eax,1),%eax
 854aaa8:	d0 e8                	shr    $1,%al
 854aaaa:	83 e0 03             	and    $0x3,%eax
 854aaad:	3c 01                	cmp    $0x1,%al
 854aaaf:	75 09                	jne    854aaba <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x110>
 854aab1:	c7 45 d8 e7 04 00 00 	movl   $0x4e7,-0x28(%ebp)
 854aab8:	eb 41                	jmp    854aafb <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x151>
 854aaba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854aabd:	8b 55 10             	mov    0x10(%ebp),%edx
 854aac0:	0f b6 44 02 1f       	movzbl 0x1f(%edx,%eax,1),%eax
 854aac5:	d0 e8                	shr    $1,%al
 854aac7:	83 e0 03             	and    $0x3,%eax
 854aaca:	3c 02                	cmp    $0x2,%al
 854aacc:	75 09                	jne    854aad7 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x12d>
 854aace:	c7 45 d8 e8 04 00 00 	movl   $0x4e8,-0x28(%ebp)
 854aad5:	eb 24                	jmp    854aafb <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x151>
 854aad7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854aada:	8b 55 10             	mov    0x10(%ebp),%edx
 854aadd:	0f b6 44 02 1f       	movzbl 0x1f(%edx,%eax,1),%eax
 854aae2:	d0 e8                	shr    $1,%al
 854aae4:	83 e0 03             	and    $0x3,%eax
 854aae7:	3c 03                	cmp    $0x3,%al
 854aae9:	75 09                	jne    854aaf4 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x14a>
 854aaeb:	c7 45 d8 e9 04 00 00 	movl   $0x4e9,-0x28(%ebp)
 854aaf2:	eb 07                	jmp    854aafb <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x151>
 854aaf4:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 854aafb:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 854aafe:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ab01:	89 04 24             	mov    %eax,(%esp)
 854ab04:	e8 17 34 bb ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 854ab09:	89 da                	mov    %ebx,%edx
 854ab0b:	c1 e2 04             	shl    $0x4,%edx
 854ab0e:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854ab11:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 854ab14:	83 ea 30             	sub    $0x30,%edx
 854ab17:	89 02                	mov    %eax,(%edx)
 854ab19:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 854ab1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ab1f:	89 04 24             	mov    %eax,(%esp)
 854ab22:	e8 6d 61 bc ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 854ab27:	89 da                	mov    %ebx,%edx
 854ab29:	c1 e2 04             	shl    $0x4,%edx
 854ab2c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854ab2f:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 854ab32:	83 ea 30             	sub    $0x30,%edx
 854ab35:	88 42 04             	mov    %al,0x4(%edx)
 854ab38:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 854ab3b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854ab3e:	8b 00                	mov    (%eax),%eax
 854ab40:	83 c0 0c             	add    $0xc,%eax
 854ab43:	8b 10                	mov    (%eax),%edx
 854ab45:	8b 45 e0             	mov    -0x20(%ebp),%eax
 854ab48:	89 04 24             	mov    %eax,(%esp)
 854ab4b:	ff d2                	call   *%edx
 854ab4d:	89 da                	mov    %ebx,%edx
 854ab4f:	c1 e2 04             	shl    $0x4,%edx
 854ab52:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854ab55:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 854ab58:	83 ea 28             	sub    $0x28,%edx
 854ab5b:	89 02                	mov    %eax,(%edx)
 854ab5d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 854ab60:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854ab63:	8b 55 10             	mov    0x10(%ebp),%edx
 854ab66:	0f b6 44 02 1f       	movzbl 0x1f(%edx,%eax,1),%eax
 854ab6b:	c0 e8 03             	shr    $0x3,%al
 854ab6e:	89 ca                	mov    %ecx,%edx
 854ab70:	c1 e2 04             	shl    $0x4,%edx
 854ab73:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854ab76:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 854ab79:	83 ea 30             	sub    $0x30,%edx
 854ab7c:	88 42 0c             	mov    %al,0xc(%edx)
 854ab7f:	8b 45 14             	mov    0x14(%ebp),%eax
 854ab82:	8b 55 d8             	mov    -0x28(%ebp),%edx
 854ab85:	89 54 24 04          	mov    %edx,0x4(%esp)
 854ab89:	89 04 24             	mov    %eax,(%esp)
 854ab8c:	e8 ab 0d b8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 854ab91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854ab94:	c1 e0 04             	shl    $0x4,%eax
 854ab97:	8d 55 e8             	lea    -0x18(%ebp),%edx
 854ab9a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 854ab9d:	83 e8 30             	sub    $0x30,%eax
 854aba0:	8b 00                	mov    (%eax),%eax
 854aba2:	89 c2                	mov    %eax,%edx
 854aba4:	8b 45 14             	mov    0x14(%ebp),%eax
 854aba7:	89 54 24 04          	mov    %edx,0x4(%esp)
 854abab:	89 04 24             	mov    %eax,(%esp)
 854abae:	e8 6d 0d b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854abb3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854abb6:	c1 e0 04             	shl    $0x4,%eax
 854abb9:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854abbc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 854abbf:	83 e8 30             	sub    $0x30,%eax
 854abc2:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 854abc6:	0f be d0             	movsbl %al,%edx
 854abc9:	8b 45 14             	mov    0x14(%ebp),%eax
 854abcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 854abd0:	89 04 24             	mov    %eax,(%esp)
 854abd3:	e8 48 0d b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854abd8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854abdb:	c1 e0 04             	shl    $0x4,%eax
 854abde:	8d 55 e8             	lea    -0x18(%ebp),%edx
 854abe1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 854abe4:	83 e8 28             	sub    $0x28,%eax
 854abe7:	8b 00                	mov    (%eax),%eax
 854abe9:	89 c2                	mov    %eax,%edx
 854abeb:	8b 45 14             	mov    0x14(%ebp),%eax
 854abee:	89 54 24 04          	mov    %edx,0x4(%esp)
 854abf2:	89 04 24             	mov    %eax,(%esp)
 854abf5:	e8 26 0d b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854abfa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854abfd:	c1 e0 04             	shl    $0x4,%eax
 854ac00:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 854ac03:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 854ac06:	83 e8 30             	sub    $0x30,%eax
 854ac09:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 854ac0d:	0f b6 d0             	movzbl %al,%edx
 854ac10:	8b 45 14             	mov    0x14(%ebp),%eax
 854ac13:	89 54 24 04          	mov    %edx,0x4(%esp)
 854ac17:	89 04 24             	mov    %eax,(%esp)
 854ac1a:	e8 01 0d b8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 854ac1f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 854ac23:	0f be 45 df          	movsbl -0x21(%ebp),%eax
 854ac27:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 854ac2a:	0f 9f c0             	setg   %al
 854ac2d:	84 c0                	test   %al,%al
 854ac2f:	0f 85 4b fe ff ff    	jne    854aa80 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0xd6>
 854ac35:	bb 01 00 00 00       	mov    $0x1,%ebx
 854ac3a:	eb 2a                	jmp    854ac66 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2bc>
 854ac3c:	89 d6                	mov    %edx,%esi
 854ac3e:	89 c7                	mov    %eax,%edi
 854ac40:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854ac43:	8d 58 20             	lea    0x20(%eax),%ebx
 854ac46:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854ac49:	39 c3                	cmp    %eax,%ebx
 854ac4b:	74 0d                	je     854ac5a <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2b0>
 854ac4d:	83 eb 10             	sub    $0x10,%ebx
 854ac50:	89 1c 24             	mov    %ebx,(%esp)
 854ac53:	e8 d6 8e fc ff       	call   8513b2e <_ZN21STEnchantSystemMapKeyD1Ev>
 854ac58:	eb ec                	jmp    854ac46 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x29c>
 854ac5a:	89 f8                	mov    %edi,%eax
 854ac5c:	89 f2                	mov    %esi,%edx
 854ac5e:	89 04 24             	mov    %eax,(%esp)
 854ac61:	e8 ea 8a 59 00       	call   8ae3750 <_Unwind_Resume>
 854ac66:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854ac69:	8d 70 20             	lea    0x20(%eax),%esi
 854ac6c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 854ac6f:	39 c6                	cmp    %eax,%esi
 854ac71:	74 0d                	je     854ac80 <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2d6>
 854ac73:	83 ee 10             	sub    $0x10,%esi
 854ac76:	89 34 24             	mov    %esi,(%esp)
 854ac79:	e8 b0 8e fc ff       	call   8513b2e <_ZN21STEnchantSystemMapKeyD1Ev>
 854ac7e:	eb ec                	jmp    854ac6c <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard+0x2c2>
 854ac80:	89 d8                	mov    %ebx,%eax
 854ac82:	83 c4 4c             	add    $0x4c,%esp
 854ac85:	5b                   	pop    %ebx
 854ac86:	5e                   	pop    %esi
 854ac87:	5f                   	pop    %edi
 854ac88:	5d                   	pop    %ebp
 854ac89:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::make3rdChroniclePacket @ 0x854a9aa

/* WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*) */

undefined4 __thiscall
WongWork::CItemUpgrade::make3rdChroniclePacket
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,PacketGuard *param_3)

{
  char cVar1;
  CDataManager *this_00;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  STEnchantSystemMapKey *pSVar5;
  STEnchantSystemMapKey local_4c [4];
  char acStack_48 [4];
  int iStack_44;
  byte abStack_40 [20];
  int local_2c;
  char local_25;
  int *local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    pSVar5 = local_4c;
    for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
      STEnchantSystemMapKey::STEnchantSystemMapKey(pSVar5);
      pSVar5 = pSVar5 + 0x10;
    }
    local_2c = 0;
    local_25 = '\0';
    if (((byte)param_2[0x1f] & 1) == 0) {
                    /* try { // try from 0854aa26 to 0854ac1e has its CatchHandler @ 0854ac3c */
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
      uVar3 = 0;
    }
    else {
      local_25 = '\x01';
      if (((byte)param_2[0x20] & 1) != 0) {
        local_25 = '\x02';
      }
      iVar4 = *(int *)(param_2 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_24 = (int *)CDataManager::find_item(this_00,iVar4);
      if (local_24 == (int *)0x0) {
        uVar3 = 0;
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)local_25);
        for (local_20 = 0; iVar4 = local_20, local_20 < local_25; local_20 = local_20 + 1) {
          if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 0) {
            local_2c = 0x4e6;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 1) {
            local_2c = 0x4e7;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 2) {
            local_2c = 0x4e8;
          }
          else if (((byte)param_2[local_20 + 0x1f] >> 1 & 3) == 3) {
            local_2c = 0x4e9;
          }
          else {
            local_2c = -1;
          }
          uVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          *(undefined4 *)(local_4c + iVar4 * 0x10) = uVar3;
          iVar4 = local_20;
          cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          acStack_48[iVar4 * 0x10] = cVar1;
          iVar4 = local_20;
          iVar2 = (**(code **)(*local_24 + 0xc))(local_24);
          (&iStack_44)[iVar4 * 4] = iVar2;
          abStack_40[local_20 * 0x10] = (byte)param_2[local_20 + 0x1f] >> 3;
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,local_2c);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,*(int *)(local_4c + local_20 * 0x10));
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,(int)acStack_48[local_20 * 0x10]);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(&iStack_44)[local_20 * 4]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)param_3,(uint)abStack_40[local_20 * 0x10]);
        }
        uVar3 = 1;
      }
    }
    pSVar5 = (STEnchantSystemMapKey *)&local_2c;
    while (pSVar5 != local_4c) {
      pSVar5 = pSVar5 + -0x10;
      STEnchantSystemMapKey::~STEnchantSystemMapKey(pSVar5);
    }
  }
  return uVar3;
}

```

---

## ~CItemUpgrade

```asm
// === 085462c6 WongWork::CItemUpgrade::~CItemUpgrade  [0x085462c6-0x8546341] ===
 85462c6:	55                   	push   %ebp
 85462c7:	89 e5                	mov    %esp,%ebp
 85462c9:	56                   	push   %esi
 85462ca:	53                   	push   %ebx
 85462cb:	83 ec 10             	sub    $0x10,%esp
 85462ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85462d1:	c7 00 18 d3 c9 08    	movl   $0x8c9d318,(%eax)
 85462d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85462da:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 85462e0:	85 c0                	test   %eax,%eax
 85462e2:	74 11                	je     85462f5 <_ZN8WongWork12CItemUpgradeD1Ev+0x2f>
 85462e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85462e7:	8b 80 e8 04 00 00    	mov    0x4e8(%eax),%eax
 85462ed:	89 04 24             	mov    %eax,(%esp)
 85462f0:	e8 fb e1 1d 00       	call   87244f0 <_ZdlPv>
 85462f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85462f8:	c7 80 e8 04 00 00 00 	movl   $0x0,0x4e8(%eax)
 85462ff:	00 00 00 
 8546302:	8b 45 08             	mov    0x8(%ebp),%eax
 8546305:	89 04 24             	mov    %eax,(%esp)
 8546308:	e8 35 65 bb ff       	call   80fc842 <_ZN8WongWork12IItemUpgradeD1Ev>
 854630d:	eb 1e                	jmp    854632d <_ZN8WongWork12CItemUpgradeD1Ev+0x67>
 854630f:	89 d3                	mov    %edx,%ebx
 8546311:	89 c6                	mov    %eax,%esi
 8546313:	8b 45 08             	mov    0x8(%ebp),%eax
 8546316:	83 c0 04             	add    $0x4,%eax
 8546319:	89 04 24             	mov    %eax,(%esp)
 854631c:	e8 89 51 00 00       	call   854b4aa <_ZN8WongWork17CItemUpgradeTableD1Ev>
 8546321:	89 f0                	mov    %esi,%eax
 8546323:	89 da                	mov    %ebx,%edx
 8546325:	89 04 24             	mov    %eax,(%esp)
 8546328:	e8 23 d4 59 00       	call   8ae3750 <_Unwind_Resume>
 854632d:	8b 45 08             	mov    0x8(%ebp),%eax
 8546330:	83 c0 04             	add    $0x4,%eax
 8546333:	89 04 24             	mov    %eax,(%esp)
 8546336:	e8 6f 51 00 00       	call   854b4aa <_ZN8WongWork17CItemUpgradeTableD1Ev>
 854633b:	83 c4 10             	add    $0x10,%esp
 854633e:	5b                   	pop    %ebx
 854633f:	5e                   	pop    %esi
 8546340:	5d                   	pop    %ebp
 8546341:	c3                   	ret

```

```c
// WongWork::CItemUpgrade::~CItemUpgrade @ 0x85462c6

/* WongWork::CItemUpgrade::~CItemUpgrade() */

void __thiscall WongWork::CItemUpgrade::~CItemUpgrade(CItemUpgrade *this)

{
  *(undefined ***)this = &PTR_ProcUpgrade_08c9d318;
  if (*(int *)(this + 0x4e8) != 0) {
    operator_delete(*(void **)(this + 0x4e8));
  }
  *(undefined4 *)(this + 0x4e8) = 0;
                    /* try { // try from 08546308 to 0854630c has its CatchHandler @ 0854630f */
  IItemUpgrade::~IItemUpgrade((IItemUpgrade *)this);
  CItemUpgradeTable::~CItemUpgradeTable((CItemUpgradeTable *)(this + 4));
  return;
}

```


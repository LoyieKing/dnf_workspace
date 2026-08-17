# LevelUpMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## LevelUpMission

```asm
// === 08165bac LevelUpMission::LevelUpMission  [0x08165bac-0x8165bcf] ===
 8165bac:	55                   	push   %ebp
 8165bad:	89 e5                	mov    %esp,%ebp
 8165baf:	83 ec 18             	sub    $0x18,%esp
 8165bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8165bb5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8165bbc:	00 
 8165bbd:	89 04 24             	mov    %eax,(%esp)
 8165bc0:	e8 4d f3 ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 8165bc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8165bc8:	c7 00 78 f0 b7 08    	movl   $0x8b7f078,(%eax)
 8165bce:	c9                   	leave
 8165bcf:	c3                   	ret

```

```c
// LevelUpMission::LevelUpMission @ 0x8165bac

/* LevelUpMission::LevelUpMission() */

void __thiscall LevelUpMission::LevelUpMission(LevelUpMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,4);
  *(undefined ***)this = &PTR__LevelUpMission_08b7f078;
  return;
}

```

---

## processMission

```asm
// === 08165c1e LevelUpMission::processMission  [0x08165c1e-0x8165f85] ===
 8165c1e:	55                   	push   %ebp
 8165c1f:	89 e5                	mov    %esp,%ebp
 8165c21:	57                   	push   %edi
 8165c22:	56                   	push   %esi
 8165c23:	53                   	push   %ebx
 8165c24:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8165c2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8165c2d:	83 c0 28             	add    $0x28,%eax
 8165c30:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8165c37:	00 
 8165c38:	89 04 24             	mov    %eax,(%esp)
 8165c3b:	e8 8a 28 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8165c40:	0f b7 00             	movzwl (%eax),%eax
 8165c43:	0f b7 d8             	movzwl %ax,%ebx
 8165c46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165c49:	89 04 24             	mov    %eax,(%esp)
 8165c4c:	e8 67 46 f7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8165c51:	39 c3                	cmp    %eax,%ebx
 8165c53:	0f 9f c0             	setg   %al
 8165c56:	84 c0                	test   %al,%al
 8165c58:	0f 85 18 03 00 00    	jne    8165f76 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x358>
 8165c5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8165c61:	89 04 24             	mov    %eax,(%esp)
 8165c64:	e8 59 f3 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165c69:	83 f0 01             	xor    $0x1,%eax
 8165c6c:	84 c0                	test   %al,%al
 8165c6e:	74 13                	je     8165c83 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x65>
 8165c70:	8b 45 10             	mov    0x10(%ebp),%eax
 8165c73:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165c77:	66 85 c0             	test   %ax,%ax
 8165c7a:	74 07                	je     8165c83 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x65>
 8165c7c:	b8 01 00 00 00       	mov    $0x1,%eax
 8165c81:	eb 05                	jmp    8165c88 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x6a>
 8165c83:	b8 00 00 00 00       	mov    $0x0,%eax
 8165c88:	84 c0                	test   %al,%al
 8165c8a:	0f 85 e9 02 00 00    	jne    8165f79 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35b>
 8165c90:	8b 45 10             	mov    0x10(%ebp),%eax
 8165c93:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8165c97:	0f b7 d8             	movzwl %ax,%ebx
 8165c9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165c9d:	89 04 24             	mov    %eax,(%esp)
 8165ca0:	e8 13 46 f7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8165ca5:	39 c3                	cmp    %eax,%ebx
 8165ca7:	0f 9d c0             	setge  %al
 8165caa:	84 c0                	test   %al,%al
 8165cac:	74 61                	je     8165d0f <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0xf1>
 8165cae:	8b 45 10             	mov    0x10(%ebp),%eax
 8165cb1:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8165cb5:	0f b7 f0             	movzwl %ax,%esi
 8165cb8:	8b 45 10             	mov    0x10(%ebp),%eax
 8165cbb:	8b 00                	mov    (%eax),%eax
 8165cbd:	89 c3                	mov    %eax,%ebx
 8165cbf:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165cc6:	ff 
 8165cc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165cca:	89 04 24             	mov    %eax,(%esp)
 8165ccd:	e8 ce 82 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165cd2:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8165cd6:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8165cda:	89 44 24 14          	mov    %eax,0x14(%esp)
 8165cde:	c7 44 24 10 90 db b7 	movl   $0x8b7db90,0x10(%esp)
 8165ce5:	08 
 8165ce6:	c7 44 24 0c 45 01 00 	movl   $0x145,0xc(%esp)
 8165ced:	00 
 8165cee:	c7 44 24 08 40 ee b7 	movl   $0x8b7ee40,0x8(%esp)
 8165cf5:	08 
 8165cf6:	c7 44 24 04 68 db b7 	movl   $0x8b7db68,0x4(%esp)
 8165cfd:	08 
 8165cfe:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8165d05:	e8 00 df 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8165d0a:	e9 6b 02 00 00       	jmp    8165f7a <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35c>
 8165d0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8165d12:	8d 50 1c             	lea    0x1c(%eax),%edx
 8165d15:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165d18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8165d1c:	89 04 24             	mov    %eax,(%esp)
 8165d1f:	e8 10 27 00 00       	call   8168434 <_ZNSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE5beginEv>
 8165d24:	83 ec 04             	sub    $0x4,%esp
 8165d27:	8b 45 08             	mov    0x8(%ebp),%eax
 8165d2a:	8d 50 1c             	lea    0x1c(%eax),%edx
 8165d2d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165d30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8165d34:	89 04 24             	mov    %eax,(%esp)
 8165d37:	e8 1c 27 00 00       	call   8168458 <_ZNSt6vectorIN20HeroMissionCondition10RewardDataESaIS1_EE3endEv>
 8165d3c:	83 ec 04             	sub    $0x4,%esp
 8165d3f:	e9 ce 01 00 00       	jmp    8165f12 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x2f4>
 8165d44:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165d47:	89 04 24             	mov    %eax,(%esp)
 8165d4a:	e8 71 27 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 8165d4f:	8b 00                	mov    (%eax),%eax
 8165d51:	89 c3                	mov    %eax,%ebx
 8165d53:	e8 43 64 f6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8165d58:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8165d5c:	89 04 24             	mov    %eax,(%esp)
 8165d5f:	e8 ce 9c 1f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8165d64:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8165d67:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8165d6b:	75 71                	jne    8165dde <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x1c0>
 8165d6d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165d70:	89 04 24             	mov    %eax,(%esp)
 8165d73:	e8 48 27 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 8165d78:	8b 38                	mov    (%eax),%edi
 8165d7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8165d7d:	8b 40 04             	mov    0x4(%eax),%eax
 8165d80:	89 c6                	mov    %eax,%esi
 8165d82:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165d89:	ff 
 8165d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165d8d:	89 04 24             	mov    %eax,(%esp)
 8165d90:	e8 0b 82 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165d95:	89 c3                	mov    %eax,%ebx
 8165d97:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8165d9e:	00 
 8165d9f:	c7 44 24 08 50 01 00 	movl   $0x150,0x8(%esp)
 8165da6:	00 
 8165da7:	c7 44 24 04 40 ee b7 	movl   $0x8b7ee40,0x4(%esp)
 8165dae:	08 
 8165daf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8165db2:	89 04 24             	mov    %eax,(%esp)
 8165db5:	e8 5e 99 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8165dba:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8165dbe:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8165dc2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8165dc6:	c7 44 24 04 e8 da b7 	movl   $0x8b7dae8,0x4(%esp)
 8165dcd:	08 
 8165dce:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8165dd1:	89 04 24             	mov    %eax,(%esp)
 8165dd4:	e8 af 99 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8165dd9:	e9 9c 01 00 00       	jmp    8165f7a <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35c>
 8165dde:	8d 45 87             	lea    -0x79(%ebp),%eax
 8165de1:	89 04 24             	mov    %eax,(%esp)
 8165de4:	e8 6b 5a f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8165de9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165dec:	89 04 24             	mov    %eax,(%esp)
 8165def:	e8 cc 26 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 8165df4:	8b 00                	mov    (%eax),%eax
 8165df6:	89 45 89             	mov    %eax,-0x77(%ebp)
 8165df9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8165dfc:	8b 00                	mov    (%eax),%eax
 8165dfe:	83 c0 08             	add    $0x8,%eax
 8165e01:	8b 10                	mov    (%eax),%edx
 8165e03:	8d 45 87             	lea    -0x79(%ebp),%eax
 8165e06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165e0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8165e0d:	89 04 24             	mov    %eax,(%esp)
 8165e10:	ff d2                	call   *%edx
 8165e12:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165e15:	89 04 24             	mov    %eax,(%esp)
 8165e18:	e8 a3 26 00 00       	call   81684c0 <_ZNK9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEptEv>
 8165e1d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8165e21:	0f b7 c0             	movzwl %ax,%eax
 8165e24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165e28:	8d 45 87             	lea    -0x79(%ebp),%eax
 8165e2b:	89 04 24             	mov    %eax,(%esp)
 8165e2e:	e8 51 5a f6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8165e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8165e36:	83 c0 14             	add    $0x14,%eax
 8165e39:	89 04 24             	mov    %eax,(%esp)
 8165e3c:	e8 af 06 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8165e41:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8165e48:	00 
 8165e49:	89 44 24 08          	mov    %eax,0x8(%esp)
 8165e4d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8165e54:	00 
 8165e55:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8165e5c:	e8 9d f9 93 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8165e61:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8165e64:	8b 45 08             	mov    0x8(%ebp),%eax
 8165e67:	83 c0 18             	add    $0x18,%eax
 8165e6a:	89 04 24             	mov    %eax,(%esp)
 8165e6d:	e8 7e 06 5a 00       	call   87064f0 <_ZNKSs5c_strEv>
 8165e72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8165e79:	00 
 8165e7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8165e7e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8165e85:	00 
 8165e86:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8165e8d:	e8 6c f9 93 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8165e92:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8165e95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165e98:	89 04 24             	mov    %eax,(%esp)
 8165e9b:	e8 f0 5d f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8165ea0:	89 c3                	mov    %eax,%ebx
 8165ea2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8165ea5:	89 04 24             	mov    %eax,(%esp)
 8165ea8:	e8 03 85 f1 ff       	call   807e3b0 <strlen@plt>
 8165ead:	89 c6                	mov    %eax,%esi
 8165eaf:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8165eb6:	ff 
 8165eb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165eba:	89 04 24             	mov    %eax,(%esp)
 8165ebd:	e8 de 80 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8165ec2:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8165ec9:	00 
 8165eca:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8165ed1:	00 
 8165ed2:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8165ed6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8165edd:	00 
 8165ede:	89 74 24 14          	mov    %esi,0x14(%esp)
 8165ee2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8165ee5:	89 54 24 10          	mov    %edx,0x10(%esp)
 8165ee9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8165eed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8165ef4:	00 
 8165ef5:	8d 45 87             	lea    -0x79(%ebp),%eax
 8165ef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165efc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8165eff:	89 04 24             	mov    %eax,(%esp)
 8165f02:	e8 e1 f6 3e 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8165f07:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165f0a:	89 04 24             	mov    %eax,(%esp)
 8165f0d:	e8 98 25 00 00       	call   81684aa <_ZN9__gnu_cxx17__normal_iteratorIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEppEv>
 8165f12:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8165f15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8165f19:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8165f1c:	89 04 24             	mov    %eax,(%esp)
 8165f1f:	e8 5a 25 00 00       	call   816847e <_ZN9__gnu_cxxneIPN20HeroMissionCondition10RewardDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8165f24:	84 c0                	test   %al,%al
 8165f26:	0f 85 18 fe ff ff    	jne    8165d44 <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x126>
 8165f2c:	8b 45 10             	mov    0x10(%ebp),%eax
 8165f2f:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8165f33:	8d 50 01             	lea    0x1(%eax),%edx
 8165f36:	8b 45 10             	mov    0x10(%ebp),%eax
 8165f39:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8165f3d:	8b 45 10             	mov    0x10(%ebp),%eax
 8165f40:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 8165f46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8165f49:	89 04 24             	mov    %eax,(%esp)
 8165f4c:	e8 67 43 f7 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8165f51:	89 c2                	mov    %eax,%edx
 8165f53:	8b 45 10             	mov    0x10(%ebp),%eax
 8165f56:	66 89 50 08          	mov    %dx,0x8(%eax)
 8165f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8165f5d:	89 04 24             	mov    %eax,(%esp)
 8165f60:	e8 5d f0 ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 8165f65:	84 c0                	test   %al,%al
 8165f67:	74 11                	je     8165f7a <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35c>
 8165f69:	8b 45 10             	mov    0x10(%ebp),%eax
 8165f6c:	89 04 24             	mov    %eax,(%esp)
 8165f6f:	e8 3e ec ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 8165f74:	eb 04                	jmp    8165f7a <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35c>
 8165f76:	90                   	nop
 8165f77:	eb 01                	jmp    8165f7a <_ZN14LevelUpMission14processMissionEP5CUserR16HeroMissionValuej+0x35c>
 8165f79:	90                   	nop
 8165f7a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8165f7d:	83 c4 00             	add    $0x0,%esp
 8165f80:	5b                   	pop    %ebx
 8165f81:	5e                   	pop    %esi
 8165f82:	5f                   	pop    %edi
 8165f83:	5d                   	pop    %ebp
 8165f84:	c3                   	ret
 8165f85:	90                   	nop

```

```c
// LevelUpMission::processMission @ 0x8165c1e

/* LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void LevelUpMission::processMission(CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort uVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  CDataManager *this;
  undefined4 *puVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined4 uVar12;
  size_t sVar13;
  Inven_Item local_7d [2];
  undefined4 local_7b;
  __normal_iterator local_40 [4];
  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
  local_3c [4];
  cMyTrace local_38 [16];
  int *local_28;
  undefined4 local_24;
  char *local_20;
  
  puVar5 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0);
  uVar1 = *puVar5;
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  if ((int)(uint)uVar1 <= iVar6) {
    cVar2 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
    if ((cVar2 == '\x01') || (*(short *)(param_3 + 10) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      uVar1 = *(ushort *)(param_3 + 8);
      iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
      if ((int)(uint)uVar1 < iVar6) {
        std::
        vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
        begin();
        std::
        vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>::
        end();
        while (bVar3 = __gnu_cxx::operator!=(local_3c,local_40), bVar3) {
          piVar8 = (int *)__gnu_cxx::
                          __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                          ::operator->(local_3c);
          iVar6 = *piVar8;
          this = (CDataManager *)G_CDataManager();
          local_28 = (int *)CDataManager::find_item(this,iVar6);
          if (local_28 == (int *)0x0) {
            puVar9 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                     ::operator->(local_3c);
            uVar12 = *puVar9;
            uVar7 = *(undefined4 *)(param_1 + 4);
            uVar10 = CUser::get_charac_no((CUser *)param_2,-1);
            cMyTrace::cMyTrace(local_38,
                               "virtual void LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)"
                               ,0x150,5);
            cMyTrace::operator()
                      (local_38,"[HeroMission] Invalid item. (charac:%u, mission:%d, item:%u)",
                       uVar10,uVar7,uVar12);
            return;
          }
          Inven_Item::Inven_Item(local_7d);
          puVar9 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                   ::operator->(local_3c);
          local_7b = *puVar9;
          (**(code **)(*local_28 + 8))(local_28,local_7d);
          iVar6 = __gnu_cxx::
                  __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
                  ::operator->(local_3c);
          Inven_Item::set_add_info(local_7d,(uint)*(ushort *)(iVar6 + 4));
          pcVar11 = (char *)std::string::c_str((string *)(param_1 + 0x14));
          local_24 = RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar11,
                                (bool *)0x0);
          pcVar11 = (char *)std::string::c_str((string *)(param_1 + 0x18));
          local_20 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,pcVar11,
                                        (bool *)0x0);
          uVar12 = CUser::GetServerGroup((CUser *)param_2);
          sVar13 = strlen(local_20);
          uVar7 = CUser::get_charac_no((CUser *)param_2,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_24,local_7d,0,uVar7,local_20,sVar13,0,uVar12,0,0);
          __gnu_cxx::
          __normal_iterator<HeroMissionCondition::RewardData*,std::vector<HeroMissionCondition::RewardData,std::allocator<HeroMissionCondition::RewardData>>>
          ::operator++(local_3c);
        }
        *(short *)(param_3 + 10) = *(short *)(param_3 + 10) + 1;
        *(undefined2 *)(param_3 + 6) = 1;
        uVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
        *(undefined2 *)(param_3 + 8) = uVar4;
        cVar2 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)param_1);
        if (cVar2 != '\0') {
          HeroMissionValue::reset((HeroMissionValue *)param_3);
        }
      }
      else {
        uVar1 = *(ushort *)(param_3 + 8);
        uVar12 = *(undefined4 *)param_3;
        uVar7 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "virtual void LevelUpMission::processMission(CUser*, HeroMissionValue&, unsigned int)"
                   ,0x145,"[HeroMission] Invalid reward condition. (charac:%u,mission:%d,value:%d)",
                   uVar7,uVar12,(uint)uVar1);
      }
    }
  }
  return;
}

```

---

## rewardMission

```asm
// === 08165f86 LevelUpMission::rewardMission  [0x08165f86-0x8165f8f] ===
 8165f86:	55                   	push   %ebp
 8165f87:	89 e5                	mov    %esp,%ebp
 8165f89:	b8 01 00 00 00       	mov    $0x1,%eax
 8165f8e:	5d                   	pop    %ebp
 8165f8f:	c3                   	ret

```

```c
// LevelUpMission::rewardMission @ 0x8165f86

/* LevelUpMission::rewardMission(CUser*, HeroMissionValue&) */

undefined4 LevelUpMission::rewardMission(CUser *param_1,HeroMissionValue *param_2)

{
  return 1;
}

```

---

## ~LevelUpMission

```asm
// === 08165bd0 LevelUpMission::~LevelUpMission  [0x08165bd0-0x8165bff] ===
 8165bd0:	55                   	push   %ebp
 8165bd1:	89 e5                	mov    %esp,%ebp
 8165bd3:	83 ec 18             	sub    $0x18,%esp
 8165bd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8165bd9:	c7 00 78 f0 b7 08    	movl   $0x8b7f078,(%eax)
 8165bdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8165be2:	89 04 24             	mov    %eax,(%esp)
 8165be5:	e8 50 f3 ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 8165bea:	b8 00 00 00 00       	mov    $0x0,%eax
 8165bef:	84 c0                	test   %al,%al
 8165bf1:	74 0b                	je     8165bfe <_ZN14LevelUpMissionD1Ev+0x2e>
 8165bf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8165bf6:	89 04 24             	mov    %eax,(%esp)
 8165bf9:	e8 f2 e8 5b 00       	call   87244f0 <_ZdlPv>
 8165bfe:	c9                   	leave
 8165bff:	c3                   	ret

```

```c
// LevelUpMission::~LevelUpMission @ 0x8165bd0

/* WARNING: Removing unreachable block (ram,0x08165bf3) */
/* LevelUpMission::~LevelUpMission() */

void __thiscall LevelUpMission::~LevelUpMission(LevelUpMission *this)

{
  *(undefined ***)this = &PTR__LevelUpMission_08b7f078;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~LevelUpMission_08165c00

```asm
// === 08165c00 LevelUpMission::~LevelUpMission  [0x08165c00-0x8165c1d] ===
 8165c00:	55                   	push   %ebp
 8165c01:	89 e5                	mov    %esp,%ebp
 8165c03:	83 ec 18             	sub    $0x18,%esp
 8165c06:	8b 45 08             	mov    0x8(%ebp),%eax
 8165c09:	89 04 24             	mov    %eax,(%esp)
 8165c0c:	e8 bf ff ff ff       	call   8165bd0 <_ZN14LevelUpMissionD1Ev>
 8165c11:	8b 45 08             	mov    0x8(%ebp),%eax
 8165c14:	89 04 24             	mov    %eax,(%esp)
 8165c17:	e8 d4 e8 5b 00       	call   87244f0 <_ZdlPv>
 8165c1c:	c9                   	leave
 8165c1d:	c3                   	ret

```

```c
// LevelUpMission::~LevelUpMission @ 0x8165c00

/* LevelUpMission::~LevelUpMission() */

void __thiscall LevelUpMission::~LevelUpMission(LevelUpMission *this)

{
  ~LevelUpMission(this);
  operator_delete(this);
  return;
}

```


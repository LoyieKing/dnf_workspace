# DisPatcher_BuySkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## check_error

```asm
// === 081bf8be DisPatcher_BuySkill::check_error  [0x081bf8be-0x81bf951] ===
 81bf8be:	55                   	push   %ebp
 81bf8bf:	89 e5                	mov    %esp,%ebp
 81bf8c1:	83 ec 28             	sub    $0x28,%esp
 81bf8c4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81bf8c8:	75 07                	jne    81bf8d1 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x13>
 81bf8ca:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bf8cf:	eb 7f                	jmp    81bf950 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x92>
 81bf8d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81bf8d4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81bf8d7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81bf8de:	eb 57                	jmp    81bf937 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x79>
 81bf8e0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf8e3:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf8e6:	89 d0                	mov    %edx,%eax
 81bf8e8:	01 c0                	add    %eax,%eax
 81bf8ea:	01 d0                	add    %edx,%eax
 81bf8ec:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf8ef:	83 c0 0f             	add    $0xf,%eax
 81bf8f2:	0f b6 00             	movzbl (%eax),%eax
 81bf8f5:	88 45 f7             	mov    %al,-0x9(%ebp)
 81bf8f8:	80 7d f7 c7          	cmpb   $0xc7,-0x9(%ebp)
 81bf8fc:	76 35                	jbe    81bf933 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x75>
 81bf8fe:	80 7d f7 d0          	cmpb   $0xd0,-0x9(%ebp)
 81bf902:	77 2f                	ja     81bf933 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x75>
 81bf904:	e8 dd 2c fa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81bf909:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 81bf910:	00 
 81bf911:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81bf918:	00 
 81bf919:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bf91c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bf920:	89 04 24             	mov    %eax,(%esp)
 81bf923:	e8 90 ed fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81bf928:	84 c0                	test   %al,%al
 81bf92a:	74 07                	je     81bf933 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x75>
 81bf92c:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81bf931:	eb 1d                	jmp    81bf950 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x92>
 81bf933:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81bf937:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf93a:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bf93e:	0f be c0             	movsbl %al,%eax
 81bf941:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81bf944:	0f 9f c0             	setg   %al
 81bf947:	84 c0                	test   %al,%al
 81bf949:	75 95                	jne    81bf8e0 <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE+0x22>
 81bf94b:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf950:	c9                   	leave
 81bf951:	c3                   	ret

```

```c
// DisPatcher_BuySkill::check_error @ 0x81bf8be

/* DisPatcher_BuySkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuySkill::check_error(DisPatcher_BuySkill *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  ServiceRestrictManager *pSVar3;
  int local_14;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < (char)param_2[0xe]; local_14 = local_14 + 1) {
      if ((199 < (byte)param_2[local_14 * 3 + 0xf]) && ((byte)param_2[local_14 * 3 + 0xf] < 0xd1)) {
        pSVar3 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar1 = ServiceRestrictManager::isRestricted(pSVar3,param_1,1,0x1e);
        if (cVar1 != '\0') {
          return 0xd1;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## master_new_skill_process

```asm
// === 081bf952 DisPatcher_BuySkill::master_new_skill_process  [0x081bf952-0x81bfc5b] ===
 81bf952:	55                   	push   %ebp
 81bf953:	89 e5                	mov    %esp,%ebp
 81bf955:	57                   	push   %edi
 81bf956:	56                   	push   %esi
 81bf957:	53                   	push   %ebx
 81bf958:	83 ec 7c             	sub    $0x7c,%esp
 81bf95b:	8b 45 10             	mov    0x10(%ebp),%eax
 81bf95e:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81bf961:	8b 45 14             	mov    0x14(%ebp),%eax
 81bf964:	0f b6 00             	movzbl (%eax),%eax
 81bf967:	3c c7                	cmp    $0xc7,%al
 81bf969:	0f 86 a2 01 00 00    	jbe    81bfb11 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1bf>
 81bf96f:	8b 45 14             	mov    0x14(%ebp),%eax
 81bf972:	0f b6 00             	movzbl (%eax),%eax
 81bf975:	3c d0                	cmp    $0xd0,%al
 81bf977:	0f 87 94 01 00 00    	ja     81bfb11 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1bf>
 81bf97d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf980:	89 04 24             	mov    %eax,(%esp)
 81bf983:	e8 ea 07 07 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81bf988:	84 c0                	test   %al,%al
 81bf98a:	75 0f                	jne    81bf99b <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x49>
 81bf98c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf98f:	89 04 24             	mov    %eax,(%esp)
 81bf992:	e8 7d ca 4a 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 81bf997:	84 c0                	test   %al,%al
 81bf999:	74 07                	je     81bf9a2 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x50>
 81bf99b:	b8 01 00 00 00       	mov    $0x1,%eax
 81bf9a0:	eb 05                	jmp    81bf9a7 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x55>
 81bf9a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf9a7:	84 c0                	test   %al,%al
 81bf9a9:	0f 84 52 02 00 00    	je     81bfc01 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2af>
 81bf9af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf9b2:	89 04 24             	mov    %eax,(%esp)
 81bf9b5:	e8 aa 07 07 00       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 81bf9ba:	0f b7 40 42          	movzwl 0x42(%eax),%eax
 81bf9be:	0f b7 d8             	movzwl %ax,%ebx
 81bf9c1:	8b 45 14             	mov    0x14(%ebp),%eax
 81bf9c4:	83 c0 08             	add    $0x8,%eax
 81bf9c7:	89 45 a8             	mov    %eax,-0x58(%ebp)
 81bf9ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf9cd:	89 04 24             	mov    %eax,(%esp)
 81bf9d0:	e8 b3 a7 fb ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 81bf9d5:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81bf9d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf9db:	89 04 24             	mov    %eax,(%esp)
 81bf9de:	e8 81 07 07 00       	call   8230164 <_ZN5CUser14GetGuildDBInfoEv>
 81bf9e3:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81bf9e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf9e9:	89 04 24             	mov    %eax,(%esp)
 81bf9ec:	e8 4b f8 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81bf9f1:	0f be c0             	movsbl %al,%eax
 81bf9f4:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81bf9f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf9fa:	89 04 24             	mov    %eax,(%esp)
 81bf9fd:	e8 92 12 f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81bfa02:	0f be c0             	movsbl %al,%eax
 81bfa05:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81bfa08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfa0b:	89 04 24             	mov    %eax,(%esp)
 81bfa0e:	e8 0d e5 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81bfa13:	89 c7                	mov    %eax,%edi
 81bfa15:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfa18:	0f b6 00             	movzbl (%eax),%eax
 81bfa1b:	0f b6 f0             	movzbl %al,%esi
 81bfa1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfa21:	89 04 24             	mov    %eax,(%esp)
 81bfa24:	e8 07 f7 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bfa29:	89 c2                	mov    %eax,%edx
 81bfa2b:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 81bfa2f:	8d 45 de             	lea    -0x22(%ebp),%eax
 81bfa32:	89 44 24 24          	mov    %eax,0x24(%esp)
 81bfa36:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81bfa39:	89 44 24 20          	mov    %eax,0x20(%esp)
 81bfa3d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bfa40:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81bfa44:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81bfa47:	89 44 24 18          	mov    %eax,0x18(%esp)
 81bfa4b:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81bfa4e:	89 44 24 14          	mov    %eax,0x14(%esp)
 81bfa52:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81bfa55:	89 44 24 10          	mov    %eax,0x10(%esp)
 81bfa59:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81bfa5c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81bfa60:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81bfa64:	89 74 24 04          	mov    %esi,0x4(%esp)
 81bfa68:	89 14 24             	mov    %edx,(%esp)
 81bfa6b:	e8 56 3d 44 00       	call   86037c6 <_ZN9SkillSlot22master_new_guild_skillEiiiiRK17STGuildDBInfoOnlyiRiS3_Rsi>
 81bfa70:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfa73:	89 42 04             	mov    %eax,0x4(%edx)
 81bfa76:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfa79:	8b 40 04             	mov    0x4(%eax),%eax
 81bfa7c:	85 c0                	test   %eax,%eax
 81bfa7e:	0f 88 80 01 00 00    	js     81bfc04 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2b2>
 81bfa84:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81bfa87:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81bfa8a:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 81bfa8e:	98                   	cwtl
 81bfa8f:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81bfa92:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfa95:	8b 40 08             	mov    0x8(%eax),%eax
 81bfa98:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81bfa9b:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfa9e:	0f b6 00             	movzbl (%eax),%eax
 81bfaa1:	0f b6 f8             	movzbl %al,%edi
 81bfaa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfaa7:	89 04 24             	mov    %eax,(%esp)
 81bfaaa:	e8 bd f9 06 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81bfaaf:	89 c3                	mov    %eax,%ebx
 81bfab1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81bfab8:	ff 
 81bfab9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfabc:	89 04 24             	mov    %eax,(%esp)
 81bfabf:	e8 dc e4 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81bfac4:	89 c6                	mov    %eax,%esi
 81bfac6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfac9:	89 04 24             	mov    %eax,(%esp)
 81bfacc:	e8 bf c1 f0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81bfad1:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81bfad7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bfadb:	89 14 24             	mov    %edx,(%esp)
 81bfade:	e8 d5 d8 f5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81bfae3:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81bfae6:	89 54 24 18          	mov    %edx,0x18(%esp)
 81bfaea:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81bfaed:	89 54 24 14          	mov    %edx,0x14(%esp)
 81bfaf1:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81bfaf4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81bfaf8:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81bfafc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bfb00:	89 74 24 04          	mov    %esi,0x4(%esp)
 81bfb04:	89 04 24             	mov    %eax,(%esp)
 81bfb07:	e8 1a e5 2a 00       	call   846e026 <_ZN17CGuildServerProxy17SendBuyGuildSkillEjjiisj>
 81bfb0c:	e9 f4 00 00 00       	jmp    81bfc05 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2b3>
 81bfb11:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb14:	89 04 24             	mov    %eax,(%esp)
 81bfb17:	e8 20 f8 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bfb1c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81bfb1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bfb22:	83 f8 ff             	cmp    $0xffffffff,%eax
 81bfb25:	74 07                	je     81bfb2e <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1dc>
 81bfb27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bfb2a:	85 c0                	test   %eax,%eax
 81bfb2c:	75 0b                	jne    81bfb39 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1e7>
 81bfb2e:	80 7d d4 01          	cmpb   $0x1,-0x2c(%ebp)
 81bfb32:	75 11                	jne    81bfb45 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1f3>
 81bfb34:	e9 1b 01 00 00       	jmp    81bfc54 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x302>
 81bfb39:	80 7d d4 01          	cmpb   $0x1,-0x2c(%ebp)
 81bfb3d:	0f 85 0d 01 00 00    	jne    81bfc50 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2fe>
 81bfb43:	eb 01                	jmp    81bfb46 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x1f4>
 81bfb45:	90                   	nop
 81bfb46:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfb49:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81bfb4d:	0f be c0             	movsbl %al,%eax
 81bfb50:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81bfb53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb56:	89 04 24             	mov    %eax,(%esp)
 81bfb59:	e8 de f6 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81bfb5e:	0f be c0             	movsbl %al,%eax
 81bfb61:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81bfb64:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb67:	89 04 24             	mov    %eax,(%esp)
 81bfb6a:	e8 25 11 f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81bfb6f:	0f be c0             	movsbl %al,%eax
 81bfb72:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bfb75:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb78:	89 04 24             	mov    %eax,(%esp)
 81bfb7b:	e8 a0 e3 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81bfb80:	89 c6                	mov    %eax,%esi
 81bfb82:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb85:	89 04 24             	mov    %eax,(%esp)
 81bfb88:	e8 2b a7 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81bfb8d:	89 c3                	mov    %eax,%ebx
 81bfb8f:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfb92:	0f b6 00             	movzbl (%eax),%eax
 81bfb95:	0f b6 f8             	movzbl %al,%edi
 81bfb98:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfb9b:	89 04 24             	mov    %eax,(%esp)
 81bfb9e:	e8 9d f5 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bfba3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81bfba6:	89 54 24 18          	mov    %edx,0x18(%esp)
 81bfbaa:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81bfbad:	89 54 24 14          	mov    %edx,0x14(%esp)
 81bfbb1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81bfbb4:	89 54 24 10          	mov    %edx,0x10(%esp)
 81bfbb8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81bfbbc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bfbc0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81bfbc4:	89 04 24             	mov    %eax,(%esp)
 81bfbc7:	e8 a8 3e 44 00       	call   8603a74 <_ZN9SkillSlot16master_new_skillEiiiiii>
 81bfbcc:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfbcf:	89 42 04             	mov    %eax,0x4(%edx)
 81bfbd2:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfbd5:	8b 40 04             	mov    0x4(%eax),%eax
 81bfbd8:	85 c0                	test   %eax,%eax
 81bfbda:	78 29                	js     81bfc05 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2b3>
 81bfbdc:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfbdf:	8b 58 04             	mov    0x4(%eax),%ebx
 81bfbe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfbe5:	89 04 24             	mov    %eax,(%esp)
 81bfbe8:	e8 43 f5 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bfbed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bfbf1:	89 04 24             	mov    %eax,(%esp)
 81bfbf4:	e8 ed 6c 44 00       	call   86068e6 <_ZNK9SkillSlot15get_skill_levelEi>
 81bfbf9:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfbfc:	89 42 08             	mov    %eax,0x8(%edx)
 81bfbff:	eb 04                	jmp    81bfc05 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2b3>
 81bfc01:	90                   	nop
 81bfc02:	eb 01                	jmp    81bfc05 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x2b3>
 81bfc04:	90                   	nop
 81bfc05:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfc08:	8b 40 04             	mov    0x4(%eax),%eax
 81bfc0b:	85 c0                	test   %eax,%eax
 81bfc0d:	78 44                	js     81bfc53 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x301>
 81bfc0f:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfc12:	8b 58 04             	mov    0x4(%eax),%ebx
 81bfc15:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfc18:	89 04 24             	mov    %eax,(%esp)
 81bfc1b:	e8 10 f5 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bfc20:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bfc24:	89 04 24             	mov    %eax,(%esp)
 81bfc27:	e8 ba 6c 44 00       	call   86068e6 <_ZNK9SkillSlot15get_skill_levelEi>
 81bfc2c:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfc2f:	0f b6 12             	movzbl (%edx),%edx
 81bfc32:	0f b6 ca             	movzbl %dl,%ecx
 81bfc35:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bfc38:	8b 92 f8 96 07 00    	mov    0x796f8(%edx),%edx
 81bfc3e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bfc42:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81bfc46:	89 14 24             	mov    %edx,(%esp)
 81bfc49:	e8 d6 a2 2f 00       	call   84b9f24 <_ZN10HistoryLog15WriteLearnSkillEP8_IO_FILEii>
 81bfc4e:	eb 04                	jmp    81bfc54 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x302>
 81bfc50:	90                   	nop
 81bfc51:	eb 01                	jmp    81bfc54 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo+0x302>
 81bfc53:	90                   	nop
 81bfc54:	83 c4 7c             	add    $0x7c,%esp
 81bfc57:	5b                   	pop    %ebx
 81bfc58:	5e                   	pop    %esi
 81bfc59:	5f                   	pop    %edi
 81bfc5a:	5d                   	pop    %ebp
 81bfc5b:	c3                   	ret

```

```c
// DisPatcher_BuySkill::master_new_skill_process @ 0x81bf952

/* DisPatcher_BuySkill::master_new_skill_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::master_new_skill_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  STGuildDBInfoOnly *pSVar8;
  int iVar9;
  SkillSlot *pSVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  CGuildServerProxy *this_00;
  short local_26;
  uint local_24;
  int local_20;
  
  if (((byte)*param_3 < 200) || (0xd0 < (byte)*param_3)) {
    local_20 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((local_20 == -1) || (local_20 == 0)) {
      if (param_2 == '\x01') {
        return;
      }
    }
    else if (param_2 != '\x01') {
      return;
    }
    bVar1 = param_3[1];
    cVar5 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar7 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar9 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    bVar2 = *param_3;
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar11 = SkillSlot::master_new_skill
                       (pSVar10,(uint)(byte)bVar2,iVar9,iVar7,(int)cVar6,(int)cVar5,(int)(char)bVar1
                       );
    *(undefined4 *)(param_3 + 4) = uVar11;
    if (-1 < *(int *)(param_3 + 4)) {
      iVar7 = *(int *)(param_3 + 4);
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      uVar11 = SkillSlot::get_skill_level(pSVar10,iVar7);
      *(undefined4 *)(param_3 + 8) = uVar11;
    }
  }
  else {
    cVar5 = CUser::IsGuildMaster(param_1);
    if ((cVar5 == '\0') && (cVar5 = CUser::IsSubGuildMaster(param_1), cVar5 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      iVar7 = CUser::GetGuildDBInfo(param_1);
      uVar3 = *(ushort *)(iVar7 + 0x42);
      iVar7 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      pSVar8 = (STGuildDBInfoOnly *)CUser::GetGuildDBInfo(param_1);
      cVar5 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
      cVar6 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      iVar9 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      bVar1 = *param_3;
      pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      uVar11 = SkillSlot::master_new_guild_skill
                         (pSVar10,(uint)(byte)bVar1,iVar9,(int)cVar6,(int)cVar5,pSVar8,iVar7,
                          (int *)&local_24,(int *)(param_3 + 8),&local_26,(uint)uVar3);
      *(undefined4 *)(param_3 + 4) = uVar11;
      if (-1 < *(int *)(param_3 + 4)) {
        iVar7 = *(int *)(param_3 + 8);
        bVar1 = *param_3;
        uVar12 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        uVar13 = CUser::get_charac_no(param_1,-1);
        uVar11 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar11);
        CGuildServerProxy::SendBuyGuildSkill
                  (this_00,uVar13,uVar12,(uint)(byte)bVar1,iVar7,local_26,local_24);
      }
    }
  }
  if (-1 < *(int *)(param_3 + 4)) {
    iVar7 = *(int *)(param_3 + 4);
    pSVar10 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar7 = SkillSlot::get_skill_level(pSVar10,iVar7);
    HistoryLog::WriteLearnSkill(*(_IO_FILE **)(param_1 + 0x796f8),(uint)(byte)*param_3,iVar7);
  }
  return;
}

```

---

## process

```asm
// === 081befe8 DisPatcher_BuySkill::process  [0x081befe8-0x81bf467] ===
 81befe8:	55                   	push   %ebp
 81befe9:	89 e5                	mov    %esp,%ebp
 81befeb:	53                   	push   %ebx
 81befec:	83 ec 34             	sub    $0x34,%esp
 81befef:	8b 45 10             	mov    0x10(%ebp),%eax
 81beff2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81beff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beff9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81beffd:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf000:	89 04 24             	mov    %eax,(%esp)
 81bf003:	e8 b6 08 00 00       	call   81bf8be <_ZN19DisPatcher_BuySkill11check_errorEP5CUserR8MSG_BASE>
 81bf008:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81bf00b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81bf00f:	7e 27                	jle    81bf038 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x50>
 81bf011:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bf014:	0f b6 c0             	movzbl %al,%eax
 81bf017:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf01b:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 81bf022:	00 
 81bf023:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf026:	89 04 24             	mov    %eax,(%esp)
 81bf029:	e8 14 cf 4b 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bf02e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81bf033:	e9 2a 04 00 00       	jmp    81bf462 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x47a>
 81bf038:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81bf03c:	79 2f                	jns    81bf06d <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x85>
 81bf03e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf041:	89 04 24             	mov    %eax,(%esp)
 81bf044:	e8 25 b3 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bf049:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81bf04d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bf050:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf054:	c7 44 24 04 e0 61 bd 	movl   $0x8bd61e0,0x4(%esp)
 81bf05b:	08 
 81bf05c:	c7 04 24 ef 03 00 00 	movl   $0x3ef,(%esp)
 81bf063:	e8 6f 18 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bf068:	e9 f5 03 00 00       	jmp    81bf462 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x47a>
 81bf06d:	8b 45 14             	mov    0x14(%ebp),%eax
 81bf070:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81bf073:	8b 45 10             	mov    0x10(%ebp),%eax
 81bf076:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81bf079:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf07c:	0f b6 50 0e          	movzbl 0xe(%eax),%edx
 81bf080:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf083:	88 90 55 03 00 00    	mov    %dl,0x355(%eax)
 81bf089:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf08c:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bf090:	3c 01                	cmp    $0x1,%al
 81bf092:	0f 85 9f 00 00 00    	jne    81bf137 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x14f>
 81bf098:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf09b:	0f b6 50 0f          	movzbl 0xf(%eax),%edx
 81bf09f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf0a2:	88 50 08             	mov    %dl,0x8(%eax)
 81bf0a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf0a8:	0f b6 50 10          	movzbl 0x10(%eax),%edx
 81bf0ac:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf0af:	88 50 09             	mov    %dl,0x9(%eax)
 81bf0b2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf0b5:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81bf0b9:	84 c0                	test   %al,%al
 81bf0bb:	75 2c                	jne    81bf0e9 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x101>
 81bf0bd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf0c0:	8d 50 08             	lea    0x8(%eax),%edx
 81bf0c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf0c6:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf0ca:	0f be c0             	movsbl %al,%eax
 81bf0cd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf0d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf0d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf0d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf0df:	89 04 24             	mov    %eax,(%esp)
 81bf0e2:	e8 6b 08 00 00       	call   81bf952 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo>
 81bf0e7:	eb 2a                	jmp    81bf113 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x12b>
 81bf0e9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf0ec:	8d 50 08             	lea    0x8(%eax),%edx
 81bf0ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf0f2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf0f6:	0f be c0             	movsbl %al,%eax
 81bf0f9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf0fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf101:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf104:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf108:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf10b:	89 04 24             	mov    %eax,(%esp)
 81bf10e:	e8 49 0b 00 00       	call   81bfc5c <_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo>
 81bf113:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf116:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 81bf11a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf11d:	88 90 54 03 00 00    	mov    %dl,0x354(%eax)
 81bf123:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf126:	8b 50 0c             	mov    0xc(%eax),%edx
 81bf129:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf12c:	89 90 50 03 00 00    	mov    %edx,0x350(%eax)
 81bf132:	e9 28 03 00 00       	jmp    81bf45f <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x477>
 81bf137:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf13a:	89 04 24             	mov    %eax,(%esp)
 81bf13d:	e8 fe ff 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bf142:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bf145:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bf149:	89 04 24             	mov    %eax,(%esp)
 81bf14c:	e8 dd fc 06 00       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 81bf151:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf154:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf158:	0f be d8             	movsbl %al,%ebx
 81bf15b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf15e:	89 04 24             	mov    %eax,(%esp)
 81bf161:	e8 da ff 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bf166:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bf16a:	89 04 24             	mov    %eax,(%esp)
 81bf16d:	e8 e6 8d 44 00       	call   8607f58 <_ZN9SkillSlot11backupSkillE20ENUM_SKILL_TREE_KIND>
 81bf172:	83 f0 01             	xor    $0x1,%eax
 81bf175:	84 c0                	test   %al,%al
 81bf177:	74 27                	je     81bf1a0 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x1b8>
 81bf179:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf17c:	c7 80 50 03 00 00 ff 	movl   $0xffffffff,0x350(%eax)
 81bf183:	ff ff ff 
 81bf186:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf189:	0f b6 50 08          	movzbl 0x8(%eax),%edx
 81bf18d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf190:	88 90 54 03 00 00    	mov    %dl,0x354(%eax)
 81bf196:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf19b:	e9 c2 02 00 00       	jmp    81bf462 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x47a>
 81bf1a0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81bf1a7:	e9 3d 01 00 00       	jmp    81bf2e9 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x301>
 81bf1ac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf1af:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81bf1b2:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81bf1b5:	89 c8                	mov    %ecx,%eax
 81bf1b7:	01 c0                	add    %eax,%eax
 81bf1b9:	01 c8                	add    %ecx,%eax
 81bf1bb:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81bf1be:	83 c0 0f             	add    $0xf,%eax
 81bf1c1:	0f b6 18             	movzbl (%eax),%ebx
 81bf1c4:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf1c7:	89 d0                	mov    %edx,%eax
 81bf1c9:	01 c0                	add    %eax,%eax
 81bf1cb:	01 d0                	add    %edx,%eax
 81bf1cd:	c1 e0 02             	shl    $0x2,%eax
 81bf1d0:	88 5c 08 08          	mov    %bl,0x8(%eax,%ecx,1)
 81bf1d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf1d7:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81bf1da:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81bf1dd:	89 c8                	mov    %ecx,%eax
 81bf1df:	01 c0                	add    %eax,%eax
 81bf1e1:	01 c8                	add    %ecx,%eax
 81bf1e3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81bf1e6:	83 c0 10             	add    $0x10,%eax
 81bf1e9:	0f b6 18             	movzbl (%eax),%ebx
 81bf1ec:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf1ef:	89 d0                	mov    %edx,%eax
 81bf1f1:	01 c0                	add    %eax,%eax
 81bf1f3:	01 d0                	add    %edx,%eax
 81bf1f5:	c1 e0 02             	shl    $0x2,%eax
 81bf1f8:	88 5c 08 09          	mov    %bl,0x9(%eax,%ecx,1)
 81bf1fc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf1ff:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf202:	89 d0                	mov    %edx,%eax
 81bf204:	01 c0                	add    %eax,%eax
 81bf206:	01 d0                	add    %edx,%eax
 81bf208:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf20b:	83 c0 11             	add    $0x11,%eax
 81bf20e:	0f b6 00             	movzbl (%eax),%eax
 81bf211:	84 c0                	test   %al,%al
 81bf213:	75 38                	jne    81bf24d <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x265>
 81bf215:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf218:	89 d0                	mov    %edx,%eax
 81bf21a:	01 c0                	add    %eax,%eax
 81bf21c:	01 d0                	add    %edx,%eax
 81bf21e:	c1 e0 02             	shl    $0x2,%eax
 81bf221:	03 45 e8             	add    -0x18(%ebp),%eax
 81bf224:	8d 50 08             	lea    0x8(%eax),%edx
 81bf227:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf22a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf22e:	0f be c0             	movsbl %al,%eax
 81bf231:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf235:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf239:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf23c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf240:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf243:	89 04 24             	mov    %eax,(%esp)
 81bf246:	e8 a5 0b 00 00       	call   81bfdf0 <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo>
 81bf24b:	eb 36                	jmp    81bf283 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x29b>
 81bf24d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf250:	89 d0                	mov    %edx,%eax
 81bf252:	01 c0                	add    %eax,%eax
 81bf254:	01 d0                	add    %edx,%eax
 81bf256:	c1 e0 02             	shl    $0x2,%eax
 81bf259:	03 45 e8             	add    -0x18(%ebp),%eax
 81bf25c:	8d 50 08             	lea    0x8(%eax),%edx
 81bf25f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf262:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf266:	0f be c0             	movsbl %al,%eax
 81bf269:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf26d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf271:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf274:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf278:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf27b:	89 04 24             	mov    %eax,(%esp)
 81bf27e:	e8 b9 0a 00 00       	call   81bfd3c <_ZN19DisPatcher_BuySkill25try_refund_skills_processEP5CUsercR12buySkillInfo>
 81bf283:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf286:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf289:	89 d0                	mov    %edx,%eax
 81bf28b:	01 c0                	add    %eax,%eax
 81bf28d:	01 d0                	add    %edx,%eax
 81bf28f:	c1 e0 02             	shl    $0x2,%eax
 81bf292:	0f b6 54 08 08       	movzbl 0x8(%eax,%ecx,1),%edx
 81bf297:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf29a:	88 90 54 03 00 00    	mov    %dl,0x354(%eax)
 81bf2a0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf2a3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf2a6:	89 d0                	mov    %edx,%eax
 81bf2a8:	01 c0                	add    %eax,%eax
 81bf2aa:	01 d0                	add    %edx,%eax
 81bf2ac:	c1 e0 02             	shl    $0x2,%eax
 81bf2af:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf2b2:	83 c0 0c             	add    $0xc,%eax
 81bf2b5:	8b 10                	mov    (%eax),%edx
 81bf2b7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf2ba:	89 90 50 03 00 00    	mov    %edx,0x350(%eax)
 81bf2c0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf2c3:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf2c6:	89 d0                	mov    %edx,%eax
 81bf2c8:	01 c0                	add    %eax,%eax
 81bf2ca:	01 d0                	add    %edx,%eax
 81bf2cc:	c1 e0 02             	shl    $0x2,%eax
 81bf2cf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf2d2:	83 c0 0c             	add    $0xc,%eax
 81bf2d5:	8b 00                	mov    (%eax),%eax
 81bf2d7:	85 c0                	test   %eax,%eax
 81bf2d9:	79 0a                	jns    81bf2e5 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x2fd>
 81bf2db:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf2e0:	e9 7d 01 00 00       	jmp    81bf462 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x47a>
 81bf2e5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81bf2e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf2ec:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bf2f0:	0f be c0             	movsbl %al,%eax
 81bf2f3:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81bf2f6:	0f 9f c0             	setg   %al
 81bf2f9:	84 c0                	test   %al,%al
 81bf2fb:	0f 85 ab fe ff ff    	jne    81bf1ac <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x1c4>
 81bf301:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81bf308:	e9 3a 01 00 00       	jmp    81bf447 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x45f>
 81bf30d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf310:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81bf313:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81bf316:	89 c8                	mov    %ecx,%eax
 81bf318:	01 c0                	add    %eax,%eax
 81bf31a:	01 c8                	add    %ecx,%eax
 81bf31c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81bf31f:	83 c0 0f             	add    $0xf,%eax
 81bf322:	0f b6 18             	movzbl (%eax),%ebx
 81bf325:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf328:	89 d0                	mov    %edx,%eax
 81bf32a:	01 c0                	add    %eax,%eax
 81bf32c:	01 d0                	add    %edx,%eax
 81bf32e:	c1 e0 02             	shl    $0x2,%eax
 81bf331:	88 5c 08 08          	mov    %bl,0x8(%eax,%ecx,1)
 81bf335:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf338:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81bf33b:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81bf33e:	89 c8                	mov    %ecx,%eax
 81bf340:	01 c0                	add    %eax,%eax
 81bf342:	01 c8                	add    %ecx,%eax
 81bf344:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81bf347:	83 c0 10             	add    $0x10,%eax
 81bf34a:	0f b6 18             	movzbl (%eax),%ebx
 81bf34d:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf350:	89 d0                	mov    %edx,%eax
 81bf352:	01 c0                	add    %eax,%eax
 81bf354:	01 d0                	add    %edx,%eax
 81bf356:	c1 e0 02             	shl    $0x2,%eax
 81bf359:	88 5c 08 09          	mov    %bl,0x9(%eax,%ecx,1)
 81bf35d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf360:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf363:	89 d0                	mov    %edx,%eax
 81bf365:	01 c0                	add    %eax,%eax
 81bf367:	01 d0                	add    %edx,%eax
 81bf369:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf36c:	83 c0 11             	add    $0x11,%eax
 81bf36f:	0f b6 00             	movzbl (%eax),%eax
 81bf372:	84 c0                	test   %al,%al
 81bf374:	75 38                	jne    81bf3ae <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x3c6>
 81bf376:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf379:	89 d0                	mov    %edx,%eax
 81bf37b:	01 c0                	add    %eax,%eax
 81bf37d:	01 d0                	add    %edx,%eax
 81bf37f:	c1 e0 02             	shl    $0x2,%eax
 81bf382:	03 45 e8             	add    -0x18(%ebp),%eax
 81bf385:	8d 50 08             	lea    0x8(%eax),%edx
 81bf388:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf38b:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf38f:	0f be c0             	movsbl %al,%eax
 81bf392:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf396:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf39a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf39d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf3a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf3a4:	89 04 24             	mov    %eax,(%esp)
 81bf3a7:	e8 a6 05 00 00       	call   81bf952 <_ZN19DisPatcher_BuySkill24master_new_skill_processEP5CUsercR12buySkillInfo>
 81bf3ac:	eb 36                	jmp    81bf3e4 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x3fc>
 81bf3ae:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf3b1:	89 d0                	mov    %edx,%eax
 81bf3b3:	01 c0                	add    %eax,%eax
 81bf3b5:	01 d0                	add    %edx,%eax
 81bf3b7:	c1 e0 02             	shl    $0x2,%eax
 81bf3ba:	03 45 e8             	add    -0x18(%ebp),%eax
 81bf3bd:	8d 50 08             	lea    0x8(%eax),%edx
 81bf3c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf3c3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81bf3c7:	0f be c0             	movsbl %al,%eax
 81bf3ca:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81bf3ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bf3d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf3d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf3d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81bf3dc:	89 04 24             	mov    %eax,(%esp)
 81bf3df:	e8 78 08 00 00       	call   81bfc5c <_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo>
 81bf3e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf3e7:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf3ea:	89 d0                	mov    %edx,%eax
 81bf3ec:	01 c0                	add    %eax,%eax
 81bf3ee:	01 d0                	add    %edx,%eax
 81bf3f0:	c1 e0 02             	shl    $0x2,%eax
 81bf3f3:	0f b6 54 08 08       	movzbl 0x8(%eax,%ecx,1),%edx
 81bf3f8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf3fb:	88 90 54 03 00 00    	mov    %dl,0x354(%eax)
 81bf401:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf404:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf407:	89 d0                	mov    %edx,%eax
 81bf409:	01 c0                	add    %eax,%eax
 81bf40b:	01 d0                	add    %edx,%eax
 81bf40d:	c1 e0 02             	shl    $0x2,%eax
 81bf410:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf413:	83 c0 0c             	add    $0xc,%eax
 81bf416:	8b 10                	mov    (%eax),%edx
 81bf418:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81bf41b:	89 90 50 03 00 00    	mov    %edx,0x350(%eax)
 81bf421:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bf424:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 81bf427:	89 d0                	mov    %edx,%eax
 81bf429:	01 c0                	add    %eax,%eax
 81bf42b:	01 d0                	add    %edx,%eax
 81bf42d:	c1 e0 02             	shl    $0x2,%eax
 81bf430:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf433:	83 c0 0c             	add    $0xc,%eax
 81bf436:	8b 00                	mov    (%eax),%eax
 81bf438:	85 c0                	test   %eax,%eax
 81bf43a:	79 07                	jns    81bf443 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x45b>
 81bf43c:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf441:	eb 1f                	jmp    81bf462 <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x47a>
 81bf443:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81bf447:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf44a:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bf44e:	0f be c0             	movsbl %al,%eax
 81bf451:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81bf454:	0f 9f c0             	setg   %al
 81bf457:	84 c0                	test   %al,%al
 81bf459:	0f 85 ae fe ff ff    	jne    81bf30d <_ZN19DisPatcher_BuySkill7processEP5CUserR8MSG_BASER9ParamBase+0x325>
 81bf45f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bf462:	83 c4 34             	add    $0x34,%esp
 81bf465:	5b                   	pop    %ebx
 81bf466:	5d                   	pop    %ebp
 81bf467:	c3                   	ret

```

```c
// DisPatcher_BuySkill::process @ 0x81befe8

/* DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&) */

uint __thiscall
DisPatcher_BuySkill::process
          (DisPatcher_BuySkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  SkillSlot *pSVar5;
  int local_14;
  int local_10;
  
  uVar3 = check_error(this,param_1,param_2);
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x3ef,
                       "virtual int DisPatcher_BuySkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       uVar3,uVar4);
    }
    else {
      *(MSG_BASE *)(param_3 + 0x355) = param_2[0xe];
      if (param_2[0xe] == (MSG_BASE)0x1) {
        *(MSG_BASE *)(param_3 + 8) = param_2[0xf];
        *(MSG_BASE *)(param_3 + 9) = param_2[0x10];
        if (param_2[0x11] == (MSG_BASE)0x0) {
          master_new_skill_process(this,param_1,(char)param_2[0xd],(buySkillInfo *)(param_3 + 8));
        }
        else {
          refund_skill_process(this,param_1,(char)param_2[0xd],(buySkillInfo *)(param_3 + 8));
        }
        param_3[0x354] = param_3[8];
        *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + 0xc);
      }
      else {
        pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        SkillSlot::set_parent(pSVar5,param_1);
        MVar1 = param_2[0xd];
        pSVar5 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
        cVar2 = SkillSlot::backupSkill(pSVar5,(int)(char)MVar1);
        if (cVar2 == '\x01') {
          for (local_14 = 0; local_14 < (char)param_2[0xe]; local_14 = local_14 + 1) {
            *(MSG_BASE *)(param_3 + local_14 * 0xc + 8) = param_2[local_14 * 3 + 0xf];
            *(MSG_BASE *)(param_3 + local_14 * 0xc + 9) = param_2[local_14 * 3 + 0x10];
            if (param_2[local_14 * 3 + 0x11] == (MSG_BASE)0x0) {
              try_master_new_skills_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_14 * 0xc + 8));
            }
            else {
              try_refund_skills_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_14 * 0xc + 8));
            }
            param_3[0x354] = param_3[local_14 * 0xc + 8];
            *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + local_14 * 0xc + 0xc);
            if (*(int *)(param_3 + local_14 * 0xc + 0xc) < 0) {
              return 0;
            }
          }
          for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
            *(MSG_BASE *)(param_3 + local_10 * 0xc + 8) = param_2[local_10 * 3 + 0xf];
            *(MSG_BASE *)(param_3 + local_10 * 0xc + 9) = param_2[local_10 * 3 + 0x10];
            if (param_2[local_10 * 3 + 0x11] == (MSG_BASE)0x0) {
              master_new_skill_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_10 * 0xc + 8));
            }
            else {
              refund_skill_process
                        (this,param_1,(char)param_2[0xd],
                         (buySkillInfo *)(param_3 + local_10 * 0xc + 8));
            }
            param_3[0x354] = param_3[local_10 * 0xc + 8];
            *(undefined4 *)(param_3 + 0x350) = *(undefined4 *)(param_3 + local_10 * 0xc + 0xc);
            if (*(int *)(param_3 + local_10 * 0xc + 0xc) < 0) {
              return 0;
            }
          }
        }
        else {
          *(undefined4 *)(param_3 + 0x350) = 0xffffffff;
          param_3[0x354] = param_3[8];
          uVar3 = 0;
        }
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f,uVar3 & 0xff);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081bed4a DisPatcher_BuySkill::read  [0x081bed4a-0x81befe7] ===
 81bed4a:	55                   	push   %ebp
 81bed4b:	89 e5                	mov    %esp,%ebp
 81bed4d:	83 ec 28             	sub    $0x28,%esp
 81bed50:	8b 45 10             	mov    0x10(%ebp),%eax
 81bed53:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81bed56:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bed59:	83 c0 0d             	add    $0xd,%eax
 81bed5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bed60:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bed63:	89 04 24             	mov    %eax,(%esp)
 81bed66:	e8 b7 e1 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bed6b:	83 f0 01             	xor    $0x1,%eax
 81bed6e:	84 c0                	test   %al,%al
 81bed70:	74 29                	je     81bed9b <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x51>
 81bed72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bed79:	00 
 81bed7a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bed81:	00 
 81bed82:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bed89:	08 
 81bed8a:	c7 04 24 7b 03 00 00 	movl   $0x37b,(%esp)
 81bed91:	e8 41 1b 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bed96:	e9 4a 02 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bed9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bed9e:	83 c0 0e             	add    $0xe,%eax
 81beda1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81beda5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beda8:	89 04 24             	mov    %eax,(%esp)
 81bedab:	e8 72 e1 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bedb0:	83 f0 01             	xor    $0x1,%eax
 81bedb3:	84 c0                	test   %al,%al
 81bedb5:	74 29                	je     81bede0 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x96>
 81bedb7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bedbe:	00 
 81bedbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bedc6:	00 
 81bedc7:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bedce:	08 
 81bedcf:	c7 04 24 7e 03 00 00 	movl   $0x37e,(%esp)
 81bedd6:	e8 fc 1a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81beddb:	e9 05 02 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bede0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bede3:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bede7:	84 c0                	test   %al,%al
 81bede9:	7f 29                	jg     81bee14 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0xca>
 81bedeb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bedf2:	00 
 81bedf3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bedfa:	00 
 81bedfb:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bee02:	08 
 81bee03:	c7 04 24 81 03 00 00 	movl   $0x381,(%esp)
 81bee0a:	e8 c8 1a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bee0f:	e9 d1 01 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bee14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bee17:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81bee1b:	3c 46                	cmp    $0x46,%al
 81bee1d:	7e 29                	jle    81bee48 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0xfe>
 81bee1f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bee26:	00 
 81bee27:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bee2e:	00 
 81bee2f:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bee36:	08 
 81bee37:	c7 04 24 83 03 00 00 	movl   $0x383,(%esp)
 81bee3e:	e8 94 1a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bee43:	e9 9d 01 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bee48:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81bee4f:	e9 74 01 00 00       	jmp    81befc8 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x27e>
 81bee54:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bee57:	89 d0                	mov    %edx,%eax
 81bee59:	01 c0                	add    %eax,%eax
 81bee5b:	01 d0                	add    %edx,%eax
 81bee5d:	03 45 f0             	add    -0x10(%ebp),%eax
 81bee60:	83 c0 0f             	add    $0xf,%eax
 81bee63:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bee67:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bee6a:	89 04 24             	mov    %eax,(%esp)
 81bee6d:	e8 fe e0 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81bee72:	83 f0 01             	xor    $0x1,%eax
 81bee75:	84 c0                	test   %al,%al
 81bee77:	74 29                	je     81beea2 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x158>
 81bee79:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bee80:	00 
 81bee81:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bee88:	00 
 81bee89:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bee90:	08 
 81bee91:	c7 04 24 88 03 00 00 	movl   $0x388,(%esp)
 81bee98:	e8 3a 1a 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bee9d:	e9 43 01 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81beea2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81beea5:	89 d0                	mov    %edx,%eax
 81beea7:	01 c0                	add    %eax,%eax
 81beea9:	01 d0                	add    %edx,%eax
 81beeab:	03 45 f0             	add    -0x10(%ebp),%eax
 81beeae:	83 c0 11             	add    $0x11,%eax
 81beeb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81beeb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81beeb8:	89 04 24             	mov    %eax,(%esp)
 81beebb:	e8 62 e0 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81beec0:	83 f0 01             	xor    $0x1,%eax
 81beec3:	84 c0                	test   %al,%al
 81beec5:	74 29                	je     81beef0 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x1a6>
 81beec7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81beece:	00 
 81beecf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81beed6:	00 
 81beed7:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81beede:	08 
 81beedf:	c7 04 24 8a 03 00 00 	movl   $0x38a,(%esp)
 81beee6:	e8 ec 19 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81beeeb:	e9 f5 00 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81beef0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81beef3:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81beef6:	89 d0                	mov    %edx,%eax
 81beef8:	01 c0                	add    %eax,%eax
 81beefa:	01 d0                	add    %edx,%eax
 81beefc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81beeff:	83 c0 11             	add    $0x11,%eax
 81bef02:	0f b6 00             	movzbl (%eax),%eax
 81bef05:	84 c0                	test   %al,%al
 81bef07:	74 42                	je     81bef4b <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x201>
 81bef09:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bef0c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81bef0f:	89 d0                	mov    %edx,%eax
 81bef11:	01 c0                	add    %eax,%eax
 81bef13:	01 d0                	add    %edx,%eax
 81bef15:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bef18:	83 c0 11             	add    $0x11,%eax
 81bef1b:	0f b6 00             	movzbl (%eax),%eax
 81bef1e:	3c 01                	cmp    $0x1,%al
 81bef20:	74 29                	je     81bef4b <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x201>
 81bef22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bef29:	00 
 81bef2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bef31:	00 
 81bef32:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bef39:	08 
 81bef3a:	c7 04 24 8d 03 00 00 	movl   $0x38d,(%esp)
 81bef41:	e8 91 19 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bef46:	e9 9a 00 00 00       	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bef4b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bef4e:	89 d0                	mov    %edx,%eax
 81bef50:	01 c0                	add    %eax,%eax
 81bef52:	01 d0                	add    %edx,%eax
 81bef54:	03 45 f0             	add    -0x10(%ebp),%eax
 81bef57:	83 c0 10             	add    $0x10,%eax
 81bef5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bef5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bef61:	89 04 24             	mov    %eax,(%esp)
 81bef64:	e8 b9 df 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81bef69:	83 f0 01             	xor    $0x1,%eax
 81bef6c:	84 c0                	test   %al,%al
 81bef6e:	74 26                	je     81bef96 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x24c>
 81bef70:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bef77:	00 
 81bef78:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bef7f:	00 
 81bef80:	c7 44 24 04 40 62 bd 	movl   $0x8bd6240,0x4(%esp)
 81bef87:	08 
 81bef88:	c7 04 24 8f 03 00 00 	movl   $0x38f,(%esp)
 81bef8f:	e8 43 19 3d 00       	call   85908d7 <_Z8LineFunciPKcij>
 81bef94:	eb 4f                	jmp    81befe5 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x29b>
 81bef96:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bef99:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81bef9c:	89 d0                	mov    %edx,%eax
 81bef9e:	01 c0                	add    %eax,%eax
 81befa0:	01 d0                	add    %edx,%eax
 81befa2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81befa5:	83 c0 10             	add    $0x10,%eax
 81befa8:	0f b6 00             	movzbl (%eax),%eax
 81befab:	84 c0                	test   %al,%al
 81befad:	7f 15                	jg     81befc4 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x27a>
 81befaf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81befb2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 81befb5:	89 d0                	mov    %edx,%eax
 81befb7:	01 c0                	add    %eax,%eax
 81befb9:	01 d0                	add    %edx,%eax
 81befbb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81befbe:	83 c0 10             	add    $0x10,%eax
 81befc1:	c6 00 01             	movb   $0x1,(%eax)
 81befc4:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81befc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81befcb:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81befcf:	0f be c0             	movsbl %al,%eax
 81befd2:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81befd5:	0f 9f c0             	setg   %al
 81befd8:	84 c0                	test   %al,%al
 81befda:	0f 85 74 fe ff ff    	jne    81bee54 <_ZN19DisPatcher_BuySkill4readER9PacketBufR8MSG_BASE+0x10a>
 81befe0:	b8 00 00 00 00       	mov    $0x0,%eax
 81befe5:	c9                   	leave
 81befe6:	c3                   	ret
 81befe7:	90                   	nop

```

```c
// DisPatcher_BuySkill::read @ 0x81bed4a

/* DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_BuySkill::read(DisPatcher_BuySkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int local_10;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      if ((char)param_2[0xe] < '\x01') {
        uVar2 = LineFunc(0x381,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
      else if ((char)param_2[0xe] < 'G') {
        for (local_10 = 0; local_10 < (char)param_2[0xe]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + local_10 * 3 + 0xf));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x388,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 3 + 0x11));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x38a,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          if ((param_2[local_10 * 3 + 0x11] != (MSG_BASE)0x0) &&
             (param_2[local_10 * 3 + 0x11] != (MSG_BASE)0x1)) {
            uVar2 = LineFunc(0x38d,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + local_10 * 3 + 0x10));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x38f,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,
                             0);
            return uVar2;
          }
          if ((char)param_2[local_10 * 3 + 0x10] < '\x01') {
            param_2[local_10 * 3 + 0x10] = (MSG_BASE)0x1;
          }
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(899,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x37e,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x37b,"virtual int DisPatcher_BuySkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## refund_skill_process

```asm
// === 081bfc5c DisPatcher_BuySkill::refund_skill_process  [0x081bfc5c-0x81bfd3b] ===
 81bfc5c:	55                   	push   %ebp
 81bfc5d:	89 e5                	mov    %esp,%ebp
 81bfc5f:	57                   	push   %edi
 81bfc60:	56                   	push   %esi
 81bfc61:	53                   	push   %ebx
 81bfc62:	83 ec 4c             	sub    $0x4c,%esp
 81bfc65:	8b 45 10             	mov    0x10(%ebp),%eax
 81bfc68:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81bfc6b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81bfc72:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfc75:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81bfc79:	0f be c0             	movsbl %al,%eax
 81bfc7c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81bfc7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfc82:	89 04 24             	mov    %eax,(%esp)
 81bfc85:	e8 b2 f5 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81bfc8a:	0f be c0             	movsbl %al,%eax
 81bfc8d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81bfc90:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfc93:	89 04 24             	mov    %eax,(%esp)
 81bfc96:	e8 f9 0f f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81bfc9b:	0f be c0             	movsbl %al,%eax
 81bfc9e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bfca1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfca4:	89 04 24             	mov    %eax,(%esp)
 81bfca7:	e8 74 e2 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81bfcac:	89 c6                	mov    %eax,%esi
 81bfcae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfcb1:	89 04 24             	mov    %eax,(%esp)
 81bfcb4:	e8 ff a5 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81bfcb9:	89 c3                	mov    %eax,%ebx
 81bfcbb:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfcbe:	0f b6 00             	movzbl (%eax),%eax
 81bfcc1:	0f b6 f8             	movzbl %al,%edi
 81bfcc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfcc7:	89 04 24             	mov    %eax,(%esp)
 81bfcca:	e8 71 f4 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bfccf:	89 c2                	mov    %eax,%edx
 81bfcd1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81bfcd4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81bfcd8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81bfcdb:	89 44 24 18          	mov    %eax,0x18(%esp)
 81bfcdf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81bfce2:	89 44 24 14          	mov    %eax,0x14(%esp)
 81bfce6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81bfce9:	89 44 24 10          	mov    %eax,0x10(%esp)
 81bfced:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81bfcf1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bfcf5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81bfcf9:	89 14 24             	mov    %edx,(%esp)
 81bfcfc:	e8 b9 6c 44 00       	call   86069ba <_ZN9SkillSlot12refund_skillEiiiiiiRi>
 81bfd01:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfd04:	89 42 04             	mov    %eax,0x4(%edx)
 81bfd07:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfd0a:	8b 40 04             	mov    0x4(%eax),%eax
 81bfd0d:	85 c0                	test   %eax,%eax
 81bfd0f:	78 23                	js     81bfd34 <_ZN19DisPatcher_BuySkill20refund_skill_processEP5CUsercR12buySkillInfo+0xd8>
 81bfd11:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfd14:	8b 58 04             	mov    0x4(%eax),%ebx
 81bfd17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfd1a:	89 04 24             	mov    %eax,(%esp)
 81bfd1d:	e8 0e f4 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bfd22:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bfd26:	89 04 24             	mov    %eax,(%esp)
 81bfd29:	e8 b8 6b 44 00       	call   86068e6 <_ZNK9SkillSlot15get_skill_levelEi>
 81bfd2e:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfd31:	89 42 08             	mov    %eax,0x8(%edx)
 81bfd34:	83 c4 4c             	add    $0x4c,%esp
 81bfd37:	5b                   	pop    %ebx
 81bfd38:	5e                   	pop    %esi
 81bfd39:	5f                   	pop    %edi
 81bfd3a:	5d                   	pop    %ebp
 81bfd3b:	c3                   	ret

```

```c
// DisPatcher_BuySkill::refund_skill_process @ 0x81bfc5c

/* DisPatcher_BuySkill::refund_skill_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::refund_skill_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  SkillSlot *pSVar7;
  undefined4 uVar8;
  int local_20 [4];
  
  local_20[0] = 0;
  bVar1 = param_3[1];
  cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  bVar2 = *param_3;
  pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
  uVar8 = SkillSlot::refund_skill
                    (pSVar7,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1,
                     local_20);
  *(undefined4 *)(param_3 + 4) = uVar8;
  if (-1 < *(int *)(param_3 + 4)) {
    iVar5 = *(int *)(param_3 + 4);
    pSVar7 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    uVar8 = SkillSlot::get_skill_level(pSVar7,iVar5);
    *(undefined4 *)(param_3 + 8) = uVar8;
  }
  return;
}

```

---

## send

```asm
// === 081bf468 DisPatcher_BuySkill::send  [0x081bf468-0x81bf8bd] ===
 81bf468:	55                   	push   %ebp
 81bf469:	89 e5                	mov    %esp,%ebp
 81bf46b:	56                   	push   %esi
 81bf46c:	53                   	push   %ebx
 81bf46d:	83 ec 40             	sub    $0x40,%esp
 81bf470:	8b 45 10             	mov    0x10(%ebp),%eax
 81bf473:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81bf476:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf479:	89 04 24             	mov    %eax,(%esp)
 81bf47c:	e8 cb e8 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81bf481:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 81bf488:	00 
 81bf489:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bf490:	00 
 81bf491:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf494:	89 04 24             	mov    %eax,(%esp)
 81bf497:	e8 60 c4 f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81bf49c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf49f:	8b 80 50 03 00 00    	mov    0x350(%eax),%eax
 81bf4a5:	85 c0                	test   %eax,%eax
 81bf4a7:	0f 89 ce 00 00 00    	jns    81bf57b <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x113>
 81bf4ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bf4b4:	00 
 81bf4b5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf4b8:	89 04 24             	mov    %eax,(%esp)
 81bf4bb:	e8 60 c4 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf4c0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf4c3:	8b 80 50 03 00 00    	mov    0x350(%eax),%eax
 81bf4c9:	83 c0 06             	add    $0x6,%eax
 81bf4cc:	83 f8 05             	cmp    $0x5,%eax
 81bf4cf:	0f 87 85 00 00 00    	ja     81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf4d5:	8b 04 85 4c 14 bc 08 	mov    0x8bc144c(,%eax,4),%eax
 81bf4dc:	ff e0                	jmp    *%eax
 81bf4de:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81bf4e5:	00 
 81bf4e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf4e9:	89 04 24             	mov    %eax,(%esp)
 81bf4ec:	e8 2f c4 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf4f1:	eb 67                	jmp    81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf4f3:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 81bf4fa:	00 
 81bf4fb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf4fe:	89 04 24             	mov    %eax,(%esp)
 81bf501:	e8 1a c4 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf506:	eb 52                	jmp    81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf508:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 81bf50f:	00 
 81bf510:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf513:	89 04 24             	mov    %eax,(%esp)
 81bf516:	e8 05 c4 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf51b:	eb 3d                	jmp    81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf51d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bf524:	00 
 81bf525:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf528:	89 04 24             	mov    %eax,(%esp)
 81bf52b:	e8 f0 c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf530:	eb 28                	jmp    81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf532:	c7 44 24 04 5b 00 00 	movl   $0x5b,0x4(%esp)
 81bf539:	00 
 81bf53a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf53d:	89 04 24             	mov    %eax,(%esp)
 81bf540:	e8 db c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf545:	eb 13                	jmp    81bf55a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0xf2>
 81bf547:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 81bf54e:	00 
 81bf54f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf552:	89 04 24             	mov    %eax,(%esp)
 81bf555:	e8 c6 c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf55a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf55d:	0f b6 80 54 03 00 00 	movzbl 0x354(%eax),%eax
 81bf564:	0f b6 c0             	movzbl %al,%eax
 81bf567:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf56b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf56e:	89 04 24             	mov    %eax,(%esp)
 81bf571:	e8 aa c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf576:	e9 ef 02 00 00       	jmp    81bf86a <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x402>
 81bf57b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bf582:	00 
 81bf583:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf586:	89 04 24             	mov    %eax,(%esp)
 81bf589:	e8 92 c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf58e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf591:	89 04 24             	mov    %eax,(%esp)
 81bf594:	e8 a3 fd 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bf599:	0f be c0             	movsbl %al,%eax
 81bf59c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf5a0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf5a3:	89 04 24             	mov    %eax,(%esp)
 81bf5a6:	e8 75 c3 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf5ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf5ae:	89 04 24             	mov    %eax,(%esp)
 81bf5b1:	e8 86 fd 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bf5b6:	89 c3                	mov    %eax,%ebx
 81bf5b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf5bb:	89 04 24             	mov    %eax,(%esp)
 81bf5be:	e8 6d fb 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bf5c3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bf5c7:	89 04 24             	mov    %eax,(%esp)
 81bf5ca:	e8 59 3f 44 00       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 81bf5cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf5d3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf5d6:	89 04 24             	mov    %eax,(%esp)
 81bf5d9:	e8 c6 a8 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81bf5de:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf5e1:	89 04 24             	mov    %eax,(%esp)
 81bf5e4:	e8 53 fd 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bf5e9:	83 f8 ff             	cmp    $0xffffffff,%eax
 81bf5ec:	74 0f                	je     81bf5fd <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x195>
 81bf5ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf5f1:	89 04 24             	mov    %eax,(%esp)
 81bf5f4:	e8 43 fd 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bf5f9:	85 c0                	test   %eax,%eax
 81bf5fb:	75 07                	jne    81bf604 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x19c>
 81bf5fd:	b8 01 00 00 00       	mov    $0x1,%eax
 81bf602:	eb 05                	jmp    81bf609 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x1a1>
 81bf604:	b8 00 00 00 00       	mov    $0x0,%eax
 81bf609:	84 c0                	test   %al,%al
 81bf60b:	74 2c                	je     81bf639 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x1d1>
 81bf60d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf610:	89 04 24             	mov    %eax,(%esp)
 81bf613:	e8 18 fb 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bf618:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81bf61f:	00 
 81bf620:	89 04 24             	mov    %eax,(%esp)
 81bf623:	e8 ca 3f 44 00       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 81bf628:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf62c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf62f:	89 04 24             	mov    %eax,(%esp)
 81bf632:	e8 6d a8 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81bf637:	eb 2a                	jmp    81bf663 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x1fb>
 81bf639:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf63c:	89 04 24             	mov    %eax,(%esp)
 81bf63f:	e8 ec fa 06 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81bf644:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81bf64b:	00 
 81bf64c:	89 04 24             	mov    %eax,(%esp)
 81bf64f:	e8 9e 3f 44 00       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 81bf654:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf658:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf65b:	89 04 24             	mov    %eax,(%esp)
 81bf65e:	e8 41 a8 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81bf663:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf666:	0f b6 80 55 03 00 00 	movzbl 0x355(%eax),%eax
 81bf66d:	0f be c0             	movsbl %al,%eax
 81bf670:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf674:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf677:	89 04 24             	mov    %eax,(%esp)
 81bf67a:	e8 a1 c2 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf67f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81bf686:	e9 c4 01 00 00       	jmp    81bf84f <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x3e7>
 81bf68b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf68e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf691:	89 d0                	mov    %edx,%eax
 81bf693:	01 c0                	add    %eax,%eax
 81bf695:	01 d0                	add    %edx,%eax
 81bf697:	c1 e0 02             	shl    $0x2,%eax
 81bf69a:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 81bf69f:	3c c7                	cmp    $0xc7,%al
 81bf6a1:	76 79                	jbe    81bf71c <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x2b4>
 81bf6a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf6a6:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf6a9:	89 d0                	mov    %edx,%eax
 81bf6ab:	01 c0                	add    %eax,%eax
 81bf6ad:	01 d0                	add    %edx,%eax
 81bf6af:	c1 e0 02             	shl    $0x2,%eax
 81bf6b2:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 81bf6b7:	3c d0                	cmp    $0xd0,%al
 81bf6b9:	77 61                	ja     81bf71c <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x2b4>
 81bf6bb:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 81bf6c2:	00 
 81bf6c3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf6c6:	89 04 24             	mov    %eax,(%esp)
 81bf6c9:	e8 52 c2 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf6ce:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf6d1:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf6d4:	89 d0                	mov    %edx,%eax
 81bf6d6:	01 c0                	add    %eax,%eax
 81bf6d8:	01 d0                	add    %edx,%eax
 81bf6da:	c1 e0 02             	shl    $0x2,%eax
 81bf6dd:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 81bf6e2:	0f b6 c0             	movzbl %al,%eax
 81bf6e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf6e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf6ec:	89 04 24             	mov    %eax,(%esp)
 81bf6ef:	e8 2c c2 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf6f4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf6f7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf6fa:	89 d0                	mov    %edx,%eax
 81bf6fc:	01 c0                	add    %eax,%eax
 81bf6fe:	01 d0                	add    %edx,%eax
 81bf700:	c1 e0 02             	shl    $0x2,%eax
 81bf703:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf706:	83 c0 10             	add    $0x10,%eax
 81bf709:	8b 00                	mov    (%eax),%eax
 81bf70b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf70f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf712:	89 04 24             	mov    %eax,(%esp)
 81bf715:	e8 06 c2 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf71a:	eb 75                	jmp    81bf791 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x329>
 81bf71c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf71f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf722:	89 d0                	mov    %edx,%eax
 81bf724:	01 c0                	add    %eax,%eax
 81bf726:	01 d0                	add    %edx,%eax
 81bf728:	c1 e0 02             	shl    $0x2,%eax
 81bf72b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf72e:	83 c0 0c             	add    $0xc,%eax
 81bf731:	8b 00                	mov    (%eax),%eax
 81bf733:	0f be c0             	movsbl %al,%eax
 81bf736:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf73a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf73d:	89 04 24             	mov    %eax,(%esp)
 81bf740:	e8 db c1 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf745:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf748:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf74b:	89 d0                	mov    %edx,%eax
 81bf74d:	01 c0                	add    %eax,%eax
 81bf74f:	01 d0                	add    %edx,%eax
 81bf751:	c1 e0 02             	shl    $0x2,%eax
 81bf754:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 81bf759:	0f b6 c0             	movzbl %al,%eax
 81bf75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf760:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf763:	89 04 24             	mov    %eax,(%esp)
 81bf766:	e8 b5 c1 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf76b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf76e:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf771:	89 d0                	mov    %edx,%eax
 81bf773:	01 c0                	add    %eax,%eax
 81bf775:	01 d0                	add    %edx,%eax
 81bf777:	c1 e0 02             	shl    $0x2,%eax
 81bf77a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 81bf77d:	83 c0 10             	add    $0x10,%eax
 81bf780:	8b 00                	mov    (%eax),%eax
 81bf782:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf786:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf789:	89 04 24             	mov    %eax,(%esp)
 81bf78c:	e8 8f c1 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf791:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81bf794:	89 04 24             	mov    %eax,(%esp)
 81bf797:	e8 ca e3 06 00       	call   822db66 <_ZN18STSkillCommandDataC1Ev>
 81bf79c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81bf79f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 81bf7a2:	89 d0                	mov    %edx,%eax
 81bf7a4:	01 c0                	add    %eax,%eax
 81bf7a6:	01 d0                	add    %edx,%eax
 81bf7a8:	c1 e0 02             	shl    $0x2,%eax
 81bf7ab:	0f b6 44 08 08       	movzbl 0x8(%eax,%ecx,1),%eax
 81bf7b0:	0f b6 c0             	movzbl %al,%eax
 81bf7b3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81bf7ba:	00 
 81bf7bb:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 81bf7be:	89 54 24 08          	mov    %edx,0x8(%esp)
 81bf7c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf7c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf7c9:	89 04 24             	mov    %eax,(%esp)
 81bf7cc:	e8 99 56 49 00       	call   8654e6a <_ZN5CUser20findSkillCommandDataEiR18STSkillCommandDatab>
 81bf7d1:	84 c0                	test   %al,%al
 81bf7d3:	74 63                	je     81bf838 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x3d0>
 81bf7d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bf7dc:	00 
 81bf7dd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf7e0:	89 04 24             	mov    %eax,(%esp)
 81bf7e3:	e8 38 c1 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf7e8:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81bf7ec:	0f be c0             	movsbl %al,%eax
 81bf7ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf7f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf7f6:	89 04 24             	mov    %eax,(%esp)
 81bf7f9:	e8 22 c1 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf7fe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81bf805:	eb 1e                	jmp    81bf825 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x3bd>
 81bf807:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81bf80a:	0f b6 44 05 d7       	movzbl -0x29(%ebp,%eax,1),%eax
 81bf80f:	0f be c0             	movsbl %al,%eax
 81bf812:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf816:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf819:	89 04 24             	mov    %eax,(%esp)
 81bf81c:	e8 ff c0 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf821:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81bf825:	0f b6 45 d6          	movzbl -0x2a(%ebp),%eax
 81bf829:	0f be c0             	movsbl %al,%eax
 81bf82c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81bf82f:	0f 9f c0             	setg   %al
 81bf832:	84 c0                	test   %al,%al
 81bf834:	75 d1                	jne    81bf807 <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x39f>
 81bf836:	eb 13                	jmp    81bf84b <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x3e3>
 81bf838:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bf83f:	00 
 81bf840:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf843:	89 04 24             	mov    %eax,(%esp)
 81bf846:	e8 d5 c0 f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81bf84b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81bf84f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81bf852:	0f b6 80 55 03 00 00 	movzbl 0x355(%eax),%eax
 81bf859:	0f be c0             	movsbl %al,%eax
 81bf85c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 81bf85f:	0f 9f c0             	setg   %al
 81bf862:	84 c0                	test   %al,%al
 81bf864:	0f 85 21 fe ff ff    	jne    81bf68b <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x223>
 81bf86a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bf871:	00 
 81bf872:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf875:	89 04 24             	mov    %eax,(%esp)
 81bf878:	e8 db c0 f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81bf87d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf880:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bf884:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bf887:	89 04 24             	mov    %eax,(%esp)
 81bf88a:	e8 2b 8d 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81bf88f:	eb 1b                	jmp    81bf8ac <_ZN19DisPatcher_BuySkill4sendEP5CUserR9ParamBase+0x444>
 81bf891:	89 d3                	mov    %edx,%ebx
 81bf893:	89 c6                	mov    %eax,%esi
 81bf895:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf898:	89 04 24             	mov    %eax,(%esp)
 81bf89b:	e8 e0 e5 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81bf8a0:	89 f0                	mov    %esi,%eax
 81bf8a2:	89 da                	mov    %ebx,%edx
 81bf8a4:	89 04 24             	mov    %eax,(%esp)
 81bf8a7:	e8 a4 3e 92 00       	call   8ae3750 <_Unwind_Resume>
 81bf8ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bf8af:	89 04 24             	mov    %eax,(%esp)
 81bf8b2:	e8 c9 e5 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81bf8b7:	83 c4 40             	add    $0x40,%esp
 81bf8ba:	5b                   	pop    %ebx
 81bf8bb:	5e                   	pop    %esi
 81bf8bc:	5d                   	pop    %ebp
 81bf8bd:	c3                   	ret

```

```c
// DisPatcher_BuySkill::send @ 0x81bf468

/* DisPatcher_BuySkill::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_BuySkill::send(DisPatcher_BuySkill *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  SkillSlot *pSVar4;
  int iVar5;
  STSkillCommandData local_30 [2];
  char local_2e;
  char acStack_2d [9];
  PacketGuard local_24 [12];
  ParamBase *local_18;
  int local_14;
  int local_10;
  
  local_18 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081bf497 to 081bf88e has its CatchHandler @ 081bf891 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1f);
  if (*(int *)(local_18 + 0x350) < 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    switch(*(undefined4 *)(local_18 + 0x350)) {
    case 0xfffffffa:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x5c);
      break;
    case 0xfffffffb:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x5b);
      break;
    case 0xfffffffc:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
      break;
    case 0xfffffffd:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x12);
      break;
    case 0xfffffffe:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x16);
      break;
    case 0xffffffff:
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0x15);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)local_18[0x354]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    cVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar2);
    uVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
    iVar5 = SkillSlot::get_remain_sp_at_index(pSVar4,uVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((iVar5 == -1) ||
       (iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1), iVar5 == 0)
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    }
    else {
      pSVar4 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      iVar5 = SkillSlot::get_remain_sfp_at_index(pSVar4,3);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,iVar5);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)(char)local_18[0x355]);
    for (local_14 = 0; local_14 < (char)local_18[0x355]; local_14 = local_14 + 1) {
      if (((byte)local_18[local_14 * 0xc + 8] < 200) || (0xd0 < (byte)local_18[local_14 * 0xc + 8]))
      {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,
                   (int)(char)*(undefined4 *)(local_18 + local_14 * 0xc + 0xc));
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_18[local_14 * 0xc + 8]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0xc + 0x10));
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0xff);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_18[local_14 * 0xc + 8]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,*(int *)(local_18 + local_14 * 0xc + 0x10));
      }
      STSkillCommandData::STSkillCommandData(local_30);
      cVar2 = CUser::findSkillCommandData
                        ((int)param_1,(STSkillCommandData *)(uint)(byte)local_18[local_14 * 0xc + 8]
                         ,SUB41(local_30,0));
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_2e);
        for (local_10 = 0; local_10 < local_2e; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)acStack_2d[local_10]);
        }
      }
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## try_master_new_skills_process

```asm
// === 081bfdf0 DisPatcher_BuySkill::try_master_new_skills_process  [0x081bfdf0-0x81bfee5] ===
 81bfdf0:	55                   	push   %ebp
 81bfdf1:	89 e5                	mov    %esp,%ebp
 81bfdf3:	57                   	push   %edi
 81bfdf4:	56                   	push   %esi
 81bfdf5:	53                   	push   %ebx
 81bfdf6:	83 ec 4c             	sub    $0x4c,%esp
 81bfdf9:	8b 45 10             	mov    0x10(%ebp),%eax
 81bfdfc:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81bfdff:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfe02:	0f b6 00             	movzbl (%eax),%eax
 81bfe05:	3c c7                	cmp    $0xc7,%al
 81bfe07:	76 0e                	jbe    81bfe17 <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0x27>
 81bfe09:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfe0c:	0f b6 00             	movzbl (%eax),%eax
 81bfe0f:	3c d0                	cmp    $0xd0,%al
 81bfe11:	0f 86 c3 00 00 00    	jbe    81bfeda <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0xea>
 81bfe17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfe1a:	89 04 24             	mov    %eax,(%esp)
 81bfe1d:	e8 1a f5 06 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81bfe22:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81bfe25:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bfe28:	83 f8 ff             	cmp    $0xffffffff,%eax
 81bfe2b:	74 07                	je     81bfe34 <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0x44>
 81bfe2d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81bfe30:	85 c0                	test   %eax,%eax
 81bfe32:	75 0b                	jne    81bfe3f <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0x4f>
 81bfe34:	80 7d d4 01          	cmpb   $0x1,-0x2c(%ebp)
 81bfe38:	75 11                	jne    81bfe4b <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0x5b>
 81bfe3a:	e9 9f 00 00 00       	jmp    81bfede <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0xee>
 81bfe3f:	80 7d d4 01          	cmpb   $0x1,-0x2c(%ebp)
 81bfe43:	0f 85 94 00 00 00    	jne    81bfedd <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0xed>
 81bfe49:	eb 01                	jmp    81bfe4c <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0x5c>
 81bfe4b:	90                   	nop
 81bfe4c:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfe4f:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81bfe53:	0f be c0             	movsbl %al,%eax
 81bfe56:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81bfe59:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfe5c:	89 04 24             	mov    %eax,(%esp)
 81bfe5f:	e8 d8 f3 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81bfe64:	0f be c0             	movsbl %al,%eax
 81bfe67:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81bfe6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfe6d:	89 04 24             	mov    %eax,(%esp)
 81bfe70:	e8 1f 0e f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81bfe75:	0f be c0             	movsbl %al,%eax
 81bfe78:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bfe7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfe7e:	89 04 24             	mov    %eax,(%esp)
 81bfe81:	e8 9a e0 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81bfe86:	89 c6                	mov    %eax,%esi
 81bfe88:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfe8b:	89 04 24             	mov    %eax,(%esp)
 81bfe8e:	e8 25 a4 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81bfe93:	89 c3                	mov    %eax,%ebx
 81bfe95:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfe98:	0f b6 00             	movzbl (%eax),%eax
 81bfe9b:	0f b6 f8             	movzbl %al,%edi
 81bfe9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfea1:	89 04 24             	mov    %eax,(%esp)
 81bfea4:	e8 97 f2 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bfea9:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81bfeac:	89 54 24 18          	mov    %edx,0x18(%esp)
 81bfeb0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81bfeb3:	89 54 24 14          	mov    %edx,0x14(%esp)
 81bfeb7:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81bfeba:	89 54 24 10          	mov    %edx,0x10(%esp)
 81bfebe:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81bfec2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bfec6:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81bfeca:	89 04 24             	mov    %eax,(%esp)
 81bfecd:	e8 8e 75 44 00       	call   8607460 <_ZN9SkillSlot21try_master_new_skillsEiiiiii>
 81bfed2:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfed5:	89 42 04             	mov    %eax,0x4(%edx)
 81bfed8:	eb 04                	jmp    81bfede <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0xee>
 81bfeda:	90                   	nop
 81bfedb:	eb 01                	jmp    81bfede <_ZN19DisPatcher_BuySkill29try_master_new_skills_processEP5CUsercR12buySkillInfo+0xee>
 81bfedd:	90                   	nop
 81bfede:	83 c4 4c             	add    $0x4c,%esp
 81bfee1:	5b                   	pop    %ebx
 81bfee2:	5e                   	pop    %esi
 81bfee3:	5f                   	pop    %edi
 81bfee4:	5d                   	pop    %ebp
 81bfee5:	c3                   	ret

```

```c
// DisPatcher_BuySkill::try_master_new_skills_process @ 0x81bfdf0

/* DisPatcher_BuySkill::try_master_new_skills_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::try_master_new_skills_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  SkillSlot *this_00;
  undefined4 uVar7;
  
  if (((byte)*param_3 < 200) || (0xd0 < (byte)*param_3)) {
    iVar5 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if ((iVar5 == -1) || (iVar5 == 0)) {
      if (param_2 == '\x01') {
        return;
      }
    }
    else if (param_2 != '\x01') {
      return;
    }
    bVar1 = param_3[1];
    cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
    cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    bVar2 = *param_3;
    this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    uVar7 = SkillSlot::try_master_new_skills
                      (this_00,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1)
    ;
    *(undefined4 *)(param_3 + 4) = uVar7;
  }
  return;
}

```

---

## try_refund_skills_process

```asm
// === 081bfd3c DisPatcher_BuySkill::try_refund_skills_process  [0x081bfd3c-0x81bfdef] ===
 81bfd3c:	55                   	push   %ebp
 81bfd3d:	89 e5                	mov    %esp,%ebp
 81bfd3f:	57                   	push   %edi
 81bfd40:	56                   	push   %esi
 81bfd41:	53                   	push   %ebx
 81bfd42:	83 ec 4c             	sub    $0x4c,%esp
 81bfd45:	8b 45 10             	mov    0x10(%ebp),%eax
 81bfd48:	88 45 d4             	mov    %al,-0x2c(%ebp)
 81bfd4b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81bfd52:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfd55:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81bfd59:	0f be c0             	movsbl %al,%eax
 81bfd5c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81bfd5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfd62:	89 04 24             	mov    %eax,(%esp)
 81bfd65:	e8 d2 f4 06 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81bfd6a:	0f be c0             	movsbl %al,%eax
 81bfd6d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81bfd70:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfd73:	89 04 24             	mov    %eax,(%esp)
 81bfd76:	e8 19 0f f5 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81bfd7b:	0f be c0             	movsbl %al,%eax
 81bfd7e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81bfd81:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfd84:	89 04 24             	mov    %eax,(%esp)
 81bfd87:	e8 94 e1 f3 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81bfd8c:	89 c6                	mov    %eax,%esi
 81bfd8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfd91:	89 04 24             	mov    %eax,(%esp)
 81bfd94:	e8 1f a5 f1 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81bfd99:	89 c3                	mov    %eax,%ebx
 81bfd9b:	8b 45 14             	mov    0x14(%ebp),%eax
 81bfd9e:	0f b6 00             	movzbl (%eax),%eax
 81bfda1:	0f b6 f8             	movzbl %al,%edi
 81bfda4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bfda7:	89 04 24             	mov    %eax,(%esp)
 81bfdaa:	e8 91 f3 06 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81bfdaf:	89 c2                	mov    %eax,%edx
 81bfdb1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81bfdb4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81bfdb8:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81bfdbb:	89 44 24 18          	mov    %eax,0x18(%esp)
 81bfdbf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81bfdc2:	89 44 24 14          	mov    %eax,0x14(%esp)
 81bfdc6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81bfdc9:	89 44 24 10          	mov    %eax,0x10(%esp)
 81bfdcd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81bfdd1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bfdd5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 81bfdd9:	89 14 24             	mov    %edx,(%esp)
 81bfddc:	e8 13 7b 44 00       	call   86078f4 <_ZN9SkillSlot16try_refund_skillEiiiiiiRi>
 81bfde1:	8b 55 14             	mov    0x14(%ebp),%edx
 81bfde4:	89 42 04             	mov    %eax,0x4(%edx)
 81bfde7:	83 c4 4c             	add    $0x4c,%esp
 81bfdea:	5b                   	pop    %ebx
 81bfdeb:	5e                   	pop    %esi
 81bfdec:	5f                   	pop    %edi
 81bfded:	5d                   	pop    %ebp
 81bfdee:	c3                   	ret
 81bfdef:	90                   	nop

```

```c
// DisPatcher_BuySkill::try_refund_skills_process @ 0x81bfd3c

/* DisPatcher_BuySkill::try_refund_skills_process(CUser*, char, buySkillInfo&) */

void __thiscall
DisPatcher_BuySkill::try_refund_skills_process
          (DisPatcher_BuySkill *this,CUser *param_1,char param_2,buySkillInfo *param_3)

{
  buySkillInfo bVar1;
  buySkillInfo bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  SkillSlot *this_00;
  undefined4 uVar7;
  int local_20 [4];
  
  local_20[0] = 0;
  bVar1 = param_3[1];
  cVar3 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  iVar5 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  bVar2 = *param_3;
  this_00 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
  uVar7 = SkillSlot::try_refund_skill
                    (this_00,(uint)(byte)bVar2,iVar6,iVar5,(int)cVar4,(int)cVar3,(int)(char)bVar1,
                     local_20);
  *(undefined4 *)(param_3 + 4) = uVar7;
  return;
}

```


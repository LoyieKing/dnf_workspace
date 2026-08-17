# APSystem__DB_LoadRewardMedal

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Select

```asm
// === 08124910 APSystem::DB_LoadRewardMedal::Select  [0x08124910-0x8124b8d] ===
 8124910:	55                   	push   %ebp
 8124911:	89 e5                	mov    %esp,%ebp
 8124913:	53                   	push   %ebx
 8124914:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 812491a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 812491f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8124926:	00 
 8124927:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 812492e:	00 
 812492f:	89 04 24             	mov    %eax,(%esp)
 8124932:	e8 07 09 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8124937:	89 45 dc             	mov    %eax,-0x24(%ebp)
 812493a:	e8 42 78 fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 812493f:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8124945:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8124948:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 812494f:	00 
 8124950:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8124957:	00 
 8124958:	8b 45 e0             	mov    -0x20(%ebp),%eax
 812495b:	89 04 24             	mov    %eax,(%esp)
 812495e:	e8 f7 d5 58 00       	call   86b1f5a <_Z22getDailyInitializeTimeiii>
 8124963:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8124966:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8124969:	2d 80 3a 09 00       	sub    $0x93a80,%eax
 812496e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8124971:	8d 45 88             	lea    -0x78(%ebp),%eax
 8124974:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124978:	8d 45 d8             	lea    -0x28(%ebp),%eax
 812497b:	89 04 24             	mov    %eax,(%esp)
 812497e:	e8 dd 99 f5 ff       	call   807e360 <localtime_r@plt>
 8124983:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8124989:	89 44 24 04          	mov    %eax,0x4(%esp)
 812498d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8124990:	89 04 24             	mov    %eax,(%esp)
 8124993:	e8 c8 99 f5 ff       	call   807e360 <localtime_r@plt>
 8124998:	8b 45 94             	mov    -0x6c(%ebp),%eax
 812499b:	8b 55 98             	mov    -0x68(%ebp),%edx
 812499e:	8d 4a 01             	lea    0x1(%edx),%ecx
 81249a1:	8b 55 9c             	mov    -0x64(%ebp),%edx
 81249a4:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 81249aa:	89 44 24 10          	mov    %eax,0x10(%esp)
 81249ae:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81249b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 81249b6:	c7 44 24 04 23 e2 b5 	movl   $0x8b5e223,0x4(%esp)
 81249bd:	08 
 81249be:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81249c1:	89 04 24             	mov    %eax,(%esp)
 81249c4:	e8 77 9a f5 ff       	call   807e440 <sprintf@plt>
 81249c9:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 81249cf:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 81249d5:	8d 4a 01             	lea    0x1(%edx),%ecx
 81249d8:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 81249de:	81 c2 6c 07 00 00    	add    $0x76c,%edx
 81249e4:	89 44 24 10          	mov    %eax,0x10(%esp)
 81249e8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81249ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 81249f0:	c7 44 24 04 23 e2 b5 	movl   $0x8b5e223,0x4(%esp)
 81249f7:	08 
 81249f8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81249fb:	89 04 24             	mov    %eax,(%esp)
 81249fe:	e8 3d 9a f5 ff       	call   807e440 <sprintf@plt>
 8124a03:	0f b6 05 7c f0 3f 09 	movzbl 0x93ff07c,%eax
 8124a0a:	0f b6 d8             	movzbl %al,%ebx
 8124a0d:	e8 89 77 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8124a12:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8124a16:	89 04 24             	mov    %eax,(%esp)
 8124a19:	e8 b0 e0 ff ff       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 8124a1e:	83 c0 60             	add    $0x60,%eax
 8124a21:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8124a24:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8124a27:	89 04 24             	mov    %eax,(%esp)
 8124a2a:	e8 5d 0d 00 00       	call   812578c <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EE4sizeEv>
 8124a2f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8124a32:	c7 45 ec 9f 86 01 00 	movl   $0x1869f,-0x14(%ebp)
 8124a39:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8124a40:	eb 41                	jmp    8124a83 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x173>
 8124a42:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8124a45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124a49:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8124a4c:	89 04 24             	mov    %eax,(%esp)
 8124a4f:	e8 58 0d 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124a54:	0f b7 00             	movzwl (%eax),%eax
 8124a57:	0f b7 c0             	movzwl %ax,%eax
 8124a5a:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8124a5d:	0f 9c c0             	setl   %al
 8124a60:	84 c0                	test   %al,%al
 8124a62:	74 1b                	je     8124a7f <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x16f>
 8124a64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8124a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124a6b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8124a6e:	89 04 24             	mov    %eax,(%esp)
 8124a71:	e8 36 0d 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124a76:	0f b7 00             	movzwl (%eax),%eax
 8124a79:	0f b7 c0             	movzwl %ax,%eax
 8124a7c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8124a7f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8124a83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8124a86:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8124a89:	0f 92 c0             	setb   %al
 8124a8c:	84 c0                	test   %al,%al
 8124a8e:	75 b2                	jne    8124a42 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x132>
 8124a90:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124a93:	8b 00                	mov    (%eax),%eax
 8124a95:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8124a98:	89 54 24 18          	mov    %edx,0x18(%esp)
 8124a9c:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8124a9f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8124aa3:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8124aa6:	89 54 24 10          	mov    %edx,0x10(%esp)
 8124aaa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8124ab1:	00 
 8124ab2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124ab6:	c7 44 24 04 20 e5 b5 	movl   $0x8b5e520,0x4(%esp)
 8124abd:	08 
 8124abe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124ac1:	89 04 24             	mov    %eax,(%esp)
 8124ac4:	e8 f7 f6 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8124ac9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8124ad0:	00 
 8124ad1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124ad4:	89 04 24             	mov    %eax,(%esp)
 8124ad7:	e8 4a f8 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8124adc:	83 f0 01             	xor    $0x1,%eax
 8124adf:	84 c0                	test   %al,%al
 8124ae1:	74 0a                	je     8124aed <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x1dd>
 8124ae3:	b8 00 00 00 00       	mov    $0x0,%eax
 8124ae8:	e9 97 00 00 00       	jmp    8124b84 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x274>
 8124aed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124af0:	89 04 24             	mov    %eax,(%esp)
 8124af3:	e8 74 d8 fb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8124af8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8124afb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8124aff:	7e 7e                	jle    8124b7f <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x26f>
 8124b01:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124b04:	89 04 24             	mov    %eax,(%esp)
 8124b07:	e8 b0 f9 2c 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8124b0c:	83 f0 01             	xor    $0x1,%eax
 8124b0f:	84 c0                	test   %al,%al
 8124b11:	74 07                	je     8124b1a <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x20a>
 8124b13:	b8 00 00 00 00       	mov    $0x0,%eax
 8124b18:	eb 6a                	jmp    8124b84 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x274>
 8124b1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124b1d:	83 c0 08             	add    $0x8,%eax
 8124b20:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 8124b27:	00 
 8124b28:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124b2c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8124b33:	00 
 8124b34:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124b37:	89 04 24             	mov    %eax,(%esp)
 8124b3a:	e8 ab 82 fc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 8124b3f:	83 f0 01             	xor    $0x1,%eax
 8124b42:	84 c0                	test   %al,%al
 8124b44:	74 07                	je     8124b4d <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x23d>
 8124b46:	b8 00 00 00 00       	mov    $0x0,%eax
 8124b4b:	eb 37                	jmp    8124b84 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x274>
 8124b4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124b50:	83 c0 04             	add    $0x4,%eax
 8124b53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8124b57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8124b5e:	00 
 8124b5f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8124b62:	89 04 24             	mov    %eax,(%esp)
 8124b65:	e8 88 d7 fb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8124b6a:	83 f0 01             	xor    $0x1,%eax
 8124b6d:	84 c0                	test   %al,%al
 8124b6f:	74 07                	je     8124b78 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x268>
 8124b71:	b8 00 00 00 00       	mov    $0x0,%eax
 8124b76:	eb 0c                	jmp    8124b84 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x274>
 8124b78:	b8 01 00 00 00       	mov    $0x1,%eax
 8124b7d:	eb 05                	jmp    8124b84 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE+0x274>
 8124b7f:	b8 00 00 00 00       	mov    $0x0,%eax
 8124b84:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 8124b8a:	5b                   	pop    %ebx
 8124b8b:	5d                   	pop    %ebp
 8124b8c:	c3                   	ret
 8124b8d:	90                   	nop

```

```c
// APSystem::DB_LoadRewardMedal::Select @ 0x8124910

/* APSystem::DB_LoadRewardMedal::Select(APSystem::_SIG_LOAD_REWARD_MEDAL&) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::Select(DB_LoadRewardMedal *this,_SIG_LOAD_REWARD_MEDAL *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  ushort *puVar4;
  undefined4 uVar5;
  tm local_a8;
  tm local_7c;
  char local_50 [16];
  char local_40 [16];
  int local_30;
  int local_2c;
  MySQL *local_28;
  int local_24;
  vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  iVar3 = G_CEnvironment();
  local_24 = *(int *)(iVar3 + 0x37c);
  local_2c = getDailyInitializeTime(local_24,0,0);
  local_30 = local_2c + -0x93a80;
  localtime_r(&local_2c,&local_7c);
  localtime_r(&local_30,&local_a8);
  sprintf(local_40,"%04d-%02d-%02d",local_7c.tm_year + 0x76c,local_7c.tm_mon + 1,local_7c.tm_mday);
  sprintf(local_50,"%04d-%02d-%02d",local_a8.tm_year + 0x76c,local_a8.tm_mon + 1,local_a8.tm_mday);
  bVar1 = (bool)CActionPointManager::_IsGMOn;
  this_00 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(this_00,bVar1);
  local_20 = (vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *)
             (iVar3 + 0x60);
  local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             size(local_20);
  local_18 = 99999;
  for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_20,local_10);
    if ((int)(uint)*puVar4 < (int)local_18) {
      puVar4 = (ushort *)
               std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
               operator[](local_20,local_10);
      local_18 = (uint)*puVar4;
    }
  }
  MySQL::set_query(local_28,
                   "select occ_date, ap_sum  \t\t\t\t\tfrom charac_action_point\t\t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date < \'%s\'\t\t\t\t\t\tand occ_date >= \'%s\'\t\t\t\t\t\tand ap_sum >= %d"
                   ,*(undefined4 *)param_1,0,local_40,local_50,local_18);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    local_14 = MySQL::get_n_rows(local_28);
    if (local_14 < 1) {
      uVar5 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_28);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_str(local_28,0,(char *)(param_1 + 8),0xb);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_28,1,(uint *)(param_1 + 4));
          if (cVar2 == '\x01') {
            uVar5 = 1;
          }
          else {
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## SendResult

```asm
// === 08124b8e APSystem::DB_LoadRewardMedal::SendResult  [0x08124b8e-0x8124c6f] ===
 8124b8e:	55                   	push   %ebp
 8124b8f:	89 e5                	mov    %esp,%ebp
 8124b91:	56                   	push   %esi
 8124b92:	53                   	push   %ebx
 8124b93:	83 ec 20             	sub    $0x20,%esp
 8124b96:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8124b9b:	c7 44 24 08 c0 01 00 	movl   $0x1c0,0x8(%esp)
 8124ba2:	00 
 8124ba3:	c7 44 24 04 f8 e2 b5 	movl   $0x8b5e2f8,0x4(%esp)
 8124baa:	08 
 8124bab:	89 04 24             	mov    %eax,(%esp)
 8124bae:	e8 d3 ae 16 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8124bb3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8124bba:	00 
 8124bbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124bbf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124bc2:	89 04 24             	mov    %eax,(%esp)
 8124bc5:	e8 5c 40 fa ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8124bca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124bcd:	89 04 24             	mov    %eax,(%esp)
 8124bd0:	e8 71 40 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8124bd5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8124bd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8124bdc:	89 04 24             	mov    %eax,(%esp)
 8124bdf:	e8 72 40 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8124be4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124be7:	89 04 24             	mov    %eax,(%esp)
 8124bea:	e8 57 40 fa ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8124bef:	8b 55 10             	mov    0x10(%ebp),%edx
 8124bf2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8124bf6:	89 04 24             	mov    %eax,(%esp)
 8124bf9:	e8 58 40 fa ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8124bfe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124c01:	89 04 24             	mov    %eax,(%esp)
 8124c04:	e8 45 40 fa ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8124c09:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8124c10:	00 
 8124c11:	8b 55 14             	mov    0x14(%ebp),%edx
 8124c14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8124c18:	89 04 24             	mov    %eax,(%esp)
 8124c1b:	e8 32 9a fb ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8124c20:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8124c25:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8124c28:	89 54 24 08          	mov    %edx,0x8(%esp)
 8124c2c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8124c33:	00 
 8124c34:	89 04 24             	mov    %eax,(%esp)
 8124c37:	e8 a2 c3 44 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8124c3c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8124c41:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124c44:	89 04 24             	mov    %eax,(%esp)
 8124c47:	e8 86 7c 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8124c4c:	89 d8                	mov    %ebx,%eax
 8124c4e:	83 c4 20             	add    $0x20,%esp
 8124c51:	5b                   	pop    %ebx
 8124c52:	5e                   	pop    %esi
 8124c53:	5d                   	pop    %ebp
 8124c54:	c3                   	ret
 8124c55:	89 d3                	mov    %edx,%ebx
 8124c57:	89 c6                	mov    %eax,%esi
 8124c59:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8124c5c:	89 04 24             	mov    %eax,(%esp)
 8124c5f:	e8 6e 7c 4f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8124c64:	89 f0                	mov    %esi,%eax
 8124c66:	89 da                	mov    %ebx,%edx
 8124c68:	89 04 24             	mov    %eax,(%esp)
 8124c6b:	e8 e0 ea 9b 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// APSystem::DB_LoadRewardMedal::SendResult @ 0x8124b8e

/* APSystem::DB_LoadRewardMedal::SendResult(int, int, APSystem::_SIG_LOAD_REWARD_MEDAL&) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::SendResult
          (DB_LoadRewardMedal *this,int param_1,int param_2,_SIG_LOAD_REWARD_MEDAL *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localchina/localchina_ActionPointSystem_Dispatcher.cpp",0x1c0);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08124bdf to 08124c3b has its CatchHandler @ 08124c55 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0x13);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 08124882 APSystem::DB_LoadRewardMedal::dispatch  [0x08124882-0x812490f] ===
 8124882:	55                   	push   %ebp
 8124883:	89 e5                	mov    %esp,%ebp
 8124885:	83 ec 28             	sub    $0x28,%esp
 8124888:	8b 45 08             	mov    0x8(%ebp),%eax
 812488b:	8b 55 14             	mov    0x14(%ebp),%edx
 812488e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8124892:	8b 55 10             	mov    0x10(%ebp),%edx
 8124895:	89 54 24 08          	mov    %edx,0x8(%esp)
 8124899:	8b 55 0c             	mov    0xc(%ebp),%edx
 812489c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81248a0:	89 04 24             	mov    %eax,(%esp)
 81248a3:	e8 d4 76 2d 00       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 81248a8:	83 f0 01             	xor    $0x1,%eax
 81248ab:	84 c0                	test   %al,%al
 81248ad:	74 07                	je     81248b6 <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x34>
 81248af:	b8 00 00 00 00       	mov    $0x0,%eax
 81248b4:	eb 58                	jmp    812490e <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x8c>
 81248b6:	8b 45 14             	mov    0x14(%ebp),%eax
 81248b9:	89 04 24             	mov    %eax,(%esp)
 81248bc:	e8 77 0e 00 00       	call   8125738 <_ZN6Stream12GetOutBufferIN8APSystem22_SIG_LOAD_REWARD_MEDALEEEPT_v>
 81248c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81248c4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81248c8:	75 07                	jne    81248d1 <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x4f>
 81248ca:	b8 00 00 00 00       	mov    $0x0,%eax
 81248cf:	eb 3d                	jmp    812490e <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x8c>
 81248d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81248d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81248d8:	8b 45 08             	mov    0x8(%ebp),%eax
 81248db:	89 04 24             	mov    %eax,(%esp)
 81248de:	e8 2d 00 00 00       	call   8124910 <_ZN8APSystem18DB_LoadRewardMedal6SelectERNS_22_SIG_LOAD_REWARD_MEDALE>
 81248e3:	84 c0                	test   %al,%al
 81248e5:	74 22                	je     8124909 <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x87>
 81248e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81248ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81248ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81248f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 81248f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81248f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81248fc:	8b 45 08             	mov    0x8(%ebp),%eax
 81248ff:	89 04 24             	mov    %eax,(%esp)
 8124902:	e8 87 02 00 00       	call   8124b8e <_ZN8APSystem18DB_LoadRewardMedal10SendResultEiiRNS_22_SIG_LOAD_REWARD_MEDALE>
 8124907:	eb 05                	jmp    812490e <_ZN8APSystem18DB_LoadRewardMedal8dispatchEiiP6Stream+0x8c>
 8124909:	b8 00 00 00 00       	mov    $0x0,%eax
 812490e:	c9                   	leave
 812490f:	c3                   	ret

```

```c
// APSystem::DB_LoadRewardMedal::dispatch @ 0x8124882

/* APSystem::DB_LoadRewardMedal::dispatch(int, int, Stream*) */

undefined4 __thiscall
APSystem::DB_LoadRewardMedal::dispatch
          (DB_LoadRewardMedal *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  _SIG_LOAD_REWARD_MEDAL *p_Var3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var3 = Stream::GetOutBuffer<APSystem::_SIG_LOAD_REWARD_MEDAL>(param_3);
    if (p_Var3 == (_SIG_LOAD_REWARD_MEDAL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = Select(this,p_Var3);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = SendResult(this,param_1,param_2,p_Var3);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0812487a APSystem::DB_LoadRewardMedal::makeRequest  [0x0812487a-0x8124881] ===
 812487a:	55                   	push   %ebp
 812487b:	89 e5                	mov    %esp,%ebp
 812487d:	83 ec 10             	sub    $0x10,%esp
 8124880:	c9                   	leave
 8124881:	c3                   	ret

```

```c
// APSystem::DB_LoadRewardMedal::makeRequest @ 0x812487a

/* APSystem::DB_LoadRewardMedal::makeRequest(int, unsigned int) */

void APSystem::DB_LoadRewardMedal::makeRequest(int param_1,uint param_2)

{
  return;
}

```


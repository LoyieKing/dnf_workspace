# CAchievement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 27

---

## CAchievement

```asm
// === 0828b614 CAchievement::CAchievement  [0x0828b614-0x828b677] ===
 828b614:	55                   	push   %ebp
 828b615:	89 e5                	mov    %esp,%ebp
 828b617:	56                   	push   %esi
 828b618:	53                   	push   %ebx
 828b619:	83 ec 10             	sub    $0x10,%esp
 828b61c:	8b 45 08             	mov    0x8(%ebp),%eax
 828b61f:	89 04 24             	mov    %eax,(%esp)
 828b622:	e8 93 d6 e3 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 828b627:	8b 45 08             	mov    0x8(%ebp),%eax
 828b62a:	c7 00 88 60 c1 08    	movl   $0x8c16088,(%eax)
 828b630:	8b 45 08             	mov    0x8(%ebp),%eax
 828b633:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 828b63a:	8b 45 08             	mov    0x8(%ebp),%eax
 828b63d:	83 c0 0c             	add    $0xc,%eax
 828b640:	89 04 24             	mov    %eax,(%esp)
 828b643:	e8 fc 26 00 00       	call   828dd44 <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 828b648:	8b 45 08             	mov    0x8(%ebp),%eax
 828b64b:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 828b64f:	8b 45 08             	mov    0x8(%ebp),%eax
 828b652:	c6 40 25 00          	movb   $0x0,0x25(%eax)
 828b656:	83 c4 10             	add    $0x10,%esp
 828b659:	5b                   	pop    %ebx
 828b65a:	5e                   	pop    %esi
 828b65b:	5d                   	pop    %ebp
 828b65c:	c3                   	ret
 828b65d:	89 d3                	mov    %edx,%ebx
 828b65f:	89 c6                	mov    %eax,%esi
 828b661:	8b 45 08             	mov    0x8(%ebp),%eax
 828b664:	89 04 24             	mov    %eax,(%esp)
 828b667:	e8 76 d5 e3 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 828b66c:	89 f0                	mov    %esi,%eax
 828b66e:	89 da                	mov    %ebx,%edx
 828b670:	89 04 24             	mov    %eax,(%esp)
 828b673:	e8 d8 80 85 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CAchievement::CAchievement @ 0x828b614

/* CAchievement::CAchievement() */

void __thiscall CAchievement::CAchievement(CAchievement *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c16088;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0828b643 to 0828b647 has its CatchHandler @ 0828b65d */
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::map((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
         *)(this + 0xc));
  this[0x24] = (CAchievement)0x0;
  this[0x25] = (CAchievement)0x0;
  return;
}

```

---

## _checkComplete

```asm
// === 0828bbae CAchievement::_checkComplete  [0x0828bbae-0x828bcb7] ===
 828bbae:	55                   	push   %ebp
 828bbaf:	89 e5                	mov    %esp,%ebp
 828bbb1:	53                   	push   %ebx
 828bbb2:	83 ec 34             	sub    $0x34,%esp
 828bbb5:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bbb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bbbc:	8b 45 08             	mov    0x8(%ebp),%eax
 828bbbf:	89 04 24             	mov    %eax,(%esp)
 828bbc2:	e8 1d 10 00 00       	call   828cbe4 <_ZN12CAchievement20isClearedAchievementEj>
 828bbc7:	83 f0 01             	xor    $0x1,%eax
 828bbca:	84 c0                	test   %al,%al
 828bbcc:	0f 85 dc 00 00 00    	jne    828bcae <_ZN12CAchievement14_checkCompleteEj+0x100>
 828bbd2:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828bbd5:	e8 c1 05 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bbda:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828bbde:	89 04 24             	mov    %eax,(%esp)
 828bbe1:	e8 e0 41 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828bbe6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828bbe9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828bbed:	0f 84 be 00 00 00    	je     828bcb1 <_ZN12CAchievement14_checkCompleteEj+0x103>
 828bbf3:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 828bbfa:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 828bc01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828bc04:	89 04 24             	mov    %eax,(%esp)
 828bc07:	e8 76 74 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828bc0c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828bc0f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828bc13:	74 23                	je     828bc38 <_ZN12CAchievement14_checkCompleteEj+0x8a>
 828bc15:	8b 45 08             	mov    0x8(%ebp),%eax
 828bc18:	8b 40 08             	mov    0x8(%eax),%eax
 828bc1b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 828bc1e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828bc22:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828bc25:	89 54 24 08          	mov    %edx,0x8(%esp)
 828bc29:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828bc2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 828bc30:	89 04 24             	mov    %eax,(%esp)
 828bc33:	e8 50 62 3b 00       	call   8641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>
 828bc38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828bc3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bc3f:	8b 45 08             	mov    0x8(%ebp),%eax
 828bc42:	89 04 24             	mov    %eax,(%esp)
 828bc45:	e8 3c 04 00 00       	call   828c086 <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest>
 828bc4a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 828bc4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828bc50:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828bc54:	89 44 24 08          	mov    %eax,0x8(%esp)
 828bc58:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828bc5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bc5f:	8b 45 08             	mov    0x8(%ebp),%eax
 828bc62:	89 04 24             	mov    %eax,(%esp)
 828bc65:	e8 c0 02 00 00       	call   828bf2a <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi>
 828bc6a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 828bc6d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828bc70:	89 54 24 10          	mov    %edx,0x10(%esp)
 828bc74:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828bc78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bc7b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828bc7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bc82:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bc86:	8b 45 08             	mov    0x8(%ebp),%eax
 828bc89:	89 04 24             	mov    %eax,(%esp)
 828bc8c:	e8 13 07 00 00       	call   828c3a4 <_ZN12CAchievement13_sendCompleteEji24ENUM_TITLE_BOOK_CATEGORYi>
 828bc91:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bc94:	8b 55 08             	mov    0x8(%ebp),%edx
 828bc97:	8b 52 08             	mov    0x8(%edx),%edx
 828bc9a:	81 c2 00 97 07 00    	add    $0x79700,%edx
 828bca0:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bca4:	89 14 24             	mov    %edx,(%esp)
 828bca7:	e8 7e 94 3f 00       	call   868512a <_ZN15cUserHistoryLog19AchievementCompleteEi>
 828bcac:	eb 04                	jmp    828bcb2 <_ZN12CAchievement14_checkCompleteEj+0x104>
 828bcae:	90                   	nop
 828bcaf:	eb 01                	jmp    828bcb2 <_ZN12CAchievement14_checkCompleteEj+0x104>
 828bcb1:	90                   	nop
 828bcb2:	83 c4 34             	add    $0x34,%esp
 828bcb5:	5b                   	pop    %ebx
 828bcb6:	5d                   	pop    %ebp
 828bcb7:	c3                   	ret

```

```c
// CAchievement::_checkComplete @ 0x828bbae

/* CAchievement::_checkComplete(unsigned int) */

void __thiscall CAchievement::_checkComplete(CAchievement *this,uint param_1)

{
  char cVar1;
  int iVar2;
  int local_1c;
  undefined4 local_18;
  Quest *local_14;
  int local_10;
  
  cVar1 = isClearedAchievement((uint)this);
  if (cVar1 == '\x01') {
    iVar2 = G_CDataManager();
    local_14 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_14 != (Quest *)0x0) {
      local_18 = 0;
      local_1c = 0;
      local_10 = Quest::get_title_reward(local_14);
      if (local_10 != 0) {
        CTitleBook::putTitleOnly
                  (*(CUser **)(this + 8),local_10,(ENUM_TITLE_BOOK_CATEGORY *)&local_18,&local_1c);
      }
      _sendEachAchieveReward(this,local_14);
      _sendCompleteReward(this,local_14,local_18,local_1c);
      _sendComplete(this,param_1,local_10,local_18,local_1c);
      cUserHistoryLog::AchievementComplete
                ((cUserHistoryLog *)(*(int *)(this + 8) + 0x79700),param_1);
    }
  }
  return;
}

```

---

## _forceClear

```asm
// === 0828cc56 CAchievement::_forceClear  [0x0828cc56-0x828ce3f] ===
 828cc56:	55                   	push   %ebp
 828cc57:	89 e5                	mov    %esp,%ebp
 828cc59:	56                   	push   %esi
 828cc5a:	53                   	push   %ebx
 828cc5b:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 828cc61:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828cc64:	e8 32 f5 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828cc69:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828cc6d:	89 04 24             	mov    %eax,(%esp)
 828cc70:	e8 51 31 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828cc75:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828cc78:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828cc7c:	0f 84 ad 01 00 00    	je     828ce2f <_ZN12CAchievement11_forceClearEj+0x1d9>
 828cc82:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828cc85:	8b 40 08             	mov    0x8(%eax),%eax
 828cc88:	83 f8 07             	cmp    $0x7,%eax
 828cc8b:	0f 85 a1 01 00 00    	jne    828ce32 <_ZN12CAchievement11_forceClearEj+0x1dc>
 828cc91:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828cc94:	89 04 24             	mov    %eax,(%esp)
 828cc97:	e8 e6 63 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828cc9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828cc9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828cca3:	0f 84 8c 01 00 00    	je     828ce35 <_ZN12CAchievement11_forceClearEj+0x1df>
 828cca9:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ccac:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ccb0:	8b 45 08             	mov    0x8(%ebp),%eax
 828ccb3:	89 04 24             	mov    %eax,(%esp)
 828ccb6:	e8 29 ff ff ff       	call   828cbe4 <_ZN12CAchievement20isClearedAchievementEj>
 828ccbb:	83 f0 01             	xor    $0x1,%eax
 828ccbe:	84 c0                	test   %al,%al
 828ccc0:	0f 84 81 00 00 00    	je     828cd47 <_ZN12CAchievement11_forceClearEj+0xf1>
 828ccc6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828ccc9:	89 04 24             	mov    %eax,(%esp)
 828cccc:	e8 9f 0b 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828ccd1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828ccd4:	83 c0 08             	add    $0x8,%eax
 828ccd7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828ccdb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828ccde:	83 c0 06             	add    $0x6,%eax
 828cce1:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cce5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828cce8:	83 c0 04             	add    $0x4,%eax
 828cceb:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ccef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828ccf2:	89 04 24             	mov    %eax,(%esp)
 828ccf5:	e8 ba 62 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828ccfa:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 828ccfe:	0f b7 c8             	movzwl %ax,%ecx
 828cd01:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 828cd05:	0f b7 d0             	movzwl %ax,%edx
 828cd08:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 828cd0c:	0f b7 c0             	movzwl %ax,%eax
 828cd0f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828cd13:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828cd17:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cd1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828cd1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cd22:	8b 45 08             	mov    0x8(%ebp),%eax
 828cd25:	89 04 24             	mov    %eax,(%esp)
 828cd28:	e8 69 eb ff ff       	call   828b896 <_ZN12CAchievement11_setTriggerEjttt>
 828cd2d:	8b 45 08             	mov    0x8(%ebp),%eax
 828cd30:	8b 40 08             	mov    0x8(%eax),%eax
 828cd33:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828cd36:	89 54 24 04          	mov    %edx,0x4(%esp)
 828cd3a:	89 04 24             	mov    %eax,(%esp)
 828cd3d:	e8 1e 51 3b 00       	call   8641e60 <_ZN10CTitleBook12putTitleOnlyEP5CUseri>
 828cd42:	e9 db 00 00 00       	jmp    828ce22 <_ZN12CAchievement11_forceClearEj+0x1cc>
 828cd47:	c7 45 e0 04 00 00 00 	movl   $0x4,-0x20(%ebp)
 828cd4e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 828cd55:	8b 45 08             	mov    0x8(%ebp),%eax
 828cd58:	8b 40 08             	mov    0x8(%eax),%eax
 828cd5b:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 828cd62:	00 
 828cd63:	89 04 24             	mov    %eax,(%esp)
 828cd66:	e8 19 08 e5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 828cd6b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828cd6e:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cd72:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828cd75:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cd79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828cd7c:	89 04 24             	mov    %eax,(%esp)
 828cd7f:	e8 26 5e 3b 00       	call   8642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>
 828cd84:	8b 75 dc             	mov    -0x24(%ebp),%esi
 828cd87:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 828cd8a:	8b 45 08             	mov    0x8(%ebp),%eax
 828cd8d:	8b 40 08             	mov    0x8(%eax),%eax
 828cd90:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 828cd97:	00 
 828cd98:	89 04 24             	mov    %eax,(%esp)
 828cd9b:	e8 e4 07 e5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 828cda0:	89 c2                	mov    %eax,%edx
 828cda2:	8d 45 9f             	lea    -0x61(%ebp),%eax
 828cda5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 828cda9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 828cdad:	89 54 24 04          	mov    %edx,0x4(%esp)
 828cdb1:	89 04 24             	mov    %eax,(%esp)
 828cdb4:	e8 eb 48 3b 00       	call   86416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>
 828cdb9:	83 ec 04             	sub    $0x4,%esp
 828cdbc:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 828cdbf:	85 c0                	test   %eax,%eax
 828cdc1:	75 5f                	jne    828ce22 <_ZN12CAchievement11_forceClearEj+0x1cc>
 828cdc3:	8b 45 08             	mov    0x8(%ebp),%eax
 828cdc6:	8b 40 08             	mov    0x8(%eax),%eax
 828cdc9:	89 04 24             	mov    %eax,(%esp)
 828cdcc:	e8 ad d4 e4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 828cdd1:	8d 95 62 ff ff ff    	lea    -0x9e(%ebp),%edx
 828cdd7:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 828cdde:	00 
 828cddf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828cde6:	00 
 828cde7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cdeb:	89 14 24             	mov    %edx,(%esp)
 828cdee:	e8 25 eb 26 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 828cdf3:	83 ec 04             	sub    $0x4,%esp
 828cdf6:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 828cdfc:	85 c0                	test   %eax,%eax
 828cdfe:	74 0d                	je     828ce0d <_ZN12CAchievement11_forceClearEj+0x1b7>
 828ce00:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 828ce06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ce09:	39 c2                	cmp    %eax,%edx
 828ce0b:	74 15                	je     828ce22 <_ZN12CAchievement11_forceClearEj+0x1cc>
 828ce0d:	8b 45 08             	mov    0x8(%ebp),%eax
 828ce10:	8b 40 08             	mov    0x8(%eax),%eax
 828ce13:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828ce16:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ce1a:	89 04 24             	mov    %eax,(%esp)
 828ce1d:	e8 3e 50 3b 00       	call   8641e60 <_ZN10CTitleBook12putTitleOnlyEP5CUseri>
 828ce22:	8b 45 08             	mov    0x8(%ebp),%eax
 828ce25:	89 04 24             	mov    %eax,(%esp)
 828ce28:	e8 97 bd e3 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 828ce2d:	eb 07                	jmp    828ce36 <_ZN12CAchievement11_forceClearEj+0x1e0>
 828ce2f:	90                   	nop
 828ce30:	eb 04                	jmp    828ce36 <_ZN12CAchievement11_forceClearEj+0x1e0>
 828ce32:	90                   	nop
 828ce33:	eb 01                	jmp    828ce36 <_ZN12CAchievement11_forceClearEj+0x1e0>
 828ce35:	90                   	nop
 828ce36:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828ce39:	83 c4 00             	add    $0x0,%esp
 828ce3c:	5b                   	pop    %ebx
 828ce3d:	5e                   	pop    %esi
 828ce3e:	5d                   	pop    %ebp
 828ce3f:	c3                   	ret

```

```c
// CAchievement::_forceClear @ 0x828cc56

/* CAchievement::_forceClear(unsigned int) */

void __thiscall CAchievement::_forceClear(CAchievement *this,uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_a2 [2];
  int local_a0;
  undefined1 local_65 [2];
  int local_63;
  int local_28;
  undefined4 local_24;
  stAchievement local_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18 [2];
  Quest *local_14;
  int local_10;
  
  iVar3 = G_CDataManager();
  local_14 = (Quest *)CDataManager::find_quest(iVar3);
  if (((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 8) == 7)) &&
     (local_10 = Quest::get_title_reward(local_14), local_10 != 0)) {
    cVar2 = isClearedAchievement((uint)this);
    if (cVar2 == '\x01') {
      local_24 = 4;
      local_28 = 0;
      CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
      CTitleBook::_getFitSlot(local_10,(ENUM_TITLE_BOOK_CATEGORY *)&local_24,&local_28);
      uVar1 = local_24;
      iVar3 = local_28;
      uVar4 = CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
      CTitleBook::getTitleSlotR(local_65,uVar4,uVar1,iVar3);
      if (local_63 == 0) {
        iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 8));
        CInventory::GetInvenSlot((int)local_a2,iVar3);
        if ((local_a0 == 0) || (local_a0 != local_10)) {
          CTitleBook::putTitleOnly(*(CUser **)(this + 8),local_10);
        }
      }
    }
    else {
      stAchievement::stAchievement(local_20);
      Quest::get_init_achievement_trigger(local_14,&local_1c,&local_1a,local_18);
      _setTrigger(this,param_1,local_1c,local_1a,local_18[0]);
      CTitleBook::putTitleOnly(*(CUser **)(this + 8),local_10);
    }
    charac_expand::CData::alter((CData *)this);
  }
  return;
}

```

---

## _forceReset

```asm
// === 0828ce40 CAchievement::_forceReset  [0x0828ce40-0x828d091] ===
 828ce40:	55                   	push   %ebp
 828ce41:	89 e5                	mov    %esp,%ebp
 828ce43:	56                   	push   %esi
 828ce44:	53                   	push   %ebx
 828ce45:	83 ec 40             	sub    $0x40,%esp
 828ce48:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ce4b:	89 c3                	mov    %eax,%ebx
 828ce4d:	e8 49 f3 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828ce52:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828ce56:	89 04 24             	mov    %eax,(%esp)
 828ce59:	e8 68 2f 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828ce5e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 828ce61:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 828ce65:	0f 84 0d 02 00 00    	je     828d078 <_ZN12CAchievement11_forceResetEj+0x238>
 828ce6b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828ce6e:	8b 40 08             	mov    0x8(%eax),%eax
 828ce71:	83 f8 07             	cmp    $0x7,%eax
 828ce74:	0f 85 01 02 00 00    	jne    828d07b <_ZN12CAchievement11_forceResetEj+0x23b>
 828ce7a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828ce7d:	89 04 24             	mov    %eax,(%esp)
 828ce80:	e8 fd 61 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828ce85:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828ce88:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828ce8c:	0f 84 ec 01 00 00    	je     828d07e <_ZN12CAchievement11_forceResetEj+0x23e>
 828ce92:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ce95:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ce99:	8b 45 08             	mov    0x8(%ebp),%eax
 828ce9c:	89 04 24             	mov    %eax,(%esp)
 828ce9f:	e8 40 fd ff ff       	call   828cbe4 <_ZN12CAchievement20isClearedAchievementEj>
 828cea4:	84 c0                	test   %al,%al
 828cea6:	0f 84 d0 00 00 00    	je     828cf7c <_ZN12CAchievement11_forceResetEj+0x13c>
 828ceac:	8b 45 08             	mov    0x8(%ebp),%eax
 828ceaf:	8d 48 0c             	lea    0xc(%eax),%ecx
 828ceb2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828ceb5:	8d 55 0c             	lea    0xc(%ebp),%edx
 828ceb8:	89 54 24 08          	mov    %edx,0x8(%esp)
 828cebc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828cec0:	89 04 24             	mov    %eax,(%esp)
 828cec3:	e8 f6 0e 00 00       	call   828ddbe <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 828cec8:	83 ec 04             	sub    $0x4,%esp
 828cecb:	8b 45 08             	mov    0x8(%ebp),%eax
 828cece:	8d 50 0c             	lea    0xc(%eax),%edx
 828ced1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828ced4:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ced8:	89 04 24             	mov    %eax,(%esp)
 828cedb:	e8 0a 0f 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828cee0:	83 ec 04             	sub    $0x4,%esp
 828cee3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828cee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ceea:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828ceed:	89 04 24             	mov    %eax,(%esp)
 828cef0:	e8 1b 0f 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828cef5:	84 c0                	test   %al,%al
 828cef7:	74 78                	je     828cf71 <_ZN12CAchievement11_forceResetEj+0x131>
 828cef9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828cefc:	89 04 24             	mov    %eax,(%esp)
 828ceff:	e8 6c 09 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828cf04:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828cf07:	83 c0 08             	add    $0x8,%eax
 828cf0a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828cf0e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828cf11:	83 c0 06             	add    $0x6,%eax
 828cf14:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cf18:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828cf1b:	83 c0 04             	add    $0x4,%eax
 828cf1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cf22:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828cf25:	89 04 24             	mov    %eax,(%esp)
 828cf28:	e8 87 60 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828cf2d:	83 f0 01             	xor    $0x1,%eax
 828cf30:	84 c0                	test   %al,%al
 828cf32:	0f 85 49 01 00 00    	jne    828d081 <_ZN12CAchievement11_forceResetEj+0x241>
 828cf38:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828cf3b:	89 04 24             	mov    %eax,(%esp)
 828cf3e:	e8 e1 0e 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828cf43:	0f b7 55 d0          	movzwl -0x30(%ebp),%edx
 828cf47:	66 89 50 08          	mov    %dx,0x8(%eax)
 828cf4b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828cf4e:	89 04 24             	mov    %eax,(%esp)
 828cf51:	e8 ce 0e 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828cf56:	0f b7 55 d2          	movzwl -0x2e(%ebp),%edx
 828cf5a:	66 89 50 0a          	mov    %dx,0xa(%eax)
 828cf5e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 828cf61:	89 04 24             	mov    %eax,(%esp)
 828cf64:	e8 bb 0e 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828cf69:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 828cf6d:	66 89 50 0c          	mov    %dx,0xc(%eax)
 828cf71:	8b 45 08             	mov    0x8(%ebp),%eax
 828cf74:	89 04 24             	mov    %eax,(%esp)
 828cf77:	e8 48 bc e3 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 828cf7c:	c7 45 e0 04 00 00 00 	movl   $0x4,-0x20(%ebp)
 828cf83:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 828cf8a:	8b 45 08             	mov    0x8(%ebp),%eax
 828cf8d:	8b 40 08             	mov    0x8(%eax),%eax
 828cf90:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 828cf97:	00 
 828cf98:	89 04 24             	mov    %eax,(%esp)
 828cf9b:	e8 e4 05 e5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 828cfa0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828cfa3:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cfa7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828cfaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cfae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828cfb1:	89 04 24             	mov    %eax,(%esp)
 828cfb4:	e8 f1 5b 3b 00       	call   8642baa <_ZN10CTitleBook11_getFitSlotEiR24ENUM_TITLE_BOOK_CATEGORYRi>
 828cfb9:	8b 75 dc             	mov    -0x24(%ebp),%esi
 828cfbc:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 828cfbf:	8b 45 08             	mov    0x8(%ebp),%eax
 828cfc2:	8b 40 08             	mov    0x8(%eax),%eax
 828cfc5:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 828cfcc:	00 
 828cfcd:	89 04 24             	mov    %eax,(%esp)
 828cfd0:	e8 af 05 e5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 828cfd5:	89 74 24 08          	mov    %esi,0x8(%esp)
 828cfd9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828cfdd:	89 04 24             	mov    %eax,(%esp)
 828cfe0:	e8 f3 46 3b 00       	call   86416d8 <_ZN10CTitleBook12getTitleSlotE24ENUM_TITLE_BOOK_CATEGORYi>
 828cfe5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828cfe8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828cfec:	0f 84 92 00 00 00    	je     828d084 <_ZN12CAchievement11_forceResetEj+0x244>
 828cff2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828cff5:	8b 40 02             	mov    0x2(%eax),%eax
 828cff8:	85 c0                	test   %eax,%eax
 828cffa:	74 0d                	je     828d009 <_ZN12CAchievement11_forceResetEj+0x1c9>
 828cffc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828cfff:	89 04 24             	mov    %eax,(%esp)
 828d002:	e8 d1 e7 e3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 828d007:	eb 7f                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d009:	8b 45 08             	mov    0x8(%ebp),%eax
 828d00c:	8b 40 08             	mov    0x8(%eax),%eax
 828d00f:	89 04 24             	mov    %eax,(%esp)
 828d012:	e8 77 d2 e4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 828d017:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 828d01e:	00 
 828d01f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828d026:	00 
 828d027:	89 04 24             	mov    %eax,(%esp)
 828d02a:	e8 7f f2 26 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 828d02f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828d032:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828d036:	74 4f                	je     828d087 <_ZN12CAchievement11_forceResetEj+0x247>
 828d038:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d03b:	8b 50 02             	mov    0x2(%eax),%edx
 828d03e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828d041:	39 c2                	cmp    %eax,%edx
 828d043:	75 43                	jne    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d045:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d048:	89 04 24             	mov    %eax,(%esp)
 828d04b:	e8 88 e7 e3 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 828d050:	8b 45 08             	mov    0x8(%ebp),%eax
 828d053:	8b 40 08             	mov    0x8(%eax),%eax
 828d056:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 828d05d:	00 
 828d05e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828d065:	00 
 828d066:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828d06d:	00 
 828d06e:	89 04 24             	mov    %eax,(%esp)
 828d071:	e8 62 f2 3e 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 828d076:	eb 10                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d078:	90                   	nop
 828d079:	eb 0d                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d07b:	90                   	nop
 828d07c:	eb 0a                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d07e:	90                   	nop
 828d07f:	eb 07                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d081:	90                   	nop
 828d082:	eb 04                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d084:	90                   	nop
 828d085:	eb 01                	jmp    828d088 <_ZN12CAchievement11_forceResetEj+0x248>
 828d087:	90                   	nop
 828d088:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828d08b:	83 c4 00             	add    $0x0,%esp
 828d08e:	5b                   	pop    %ebx
 828d08f:	5e                   	pop    %esi
 828d090:	5d                   	pop    %ebp
 828d091:	c3                   	ret

```

```c
// CAchievement::_forceReset @ 0x828ce40

/* CAchievement::_forceReset(unsigned int) */

void CAchievement::_forceReset(uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CTitleBook *pCVar4;
  CInventory *this;
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_2c [4];
  int local_28;
  undefined4 local_24;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_20 [4];
  Quest *local_1c;
  int local_18;
  Inven_Item *local_14;
  Inven_Item *local_10;
  
  iVar3 = G_CDataManager();
  local_1c = (Quest *)CDataManager::find_quest(iVar3);
  if (((local_1c != (Quest *)0x0) && (*(int *)(local_1c + 8) == 7)) &&
     (local_18 = Quest::get_title_reward(local_1c), local_18 != 0)) {
    cVar2 = isClearedAchievement(param_1);
    if (cVar2 != '\0') {
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::find((uint *)local_2c);
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                        (local_2c,(_Rb_tree_iterator *)local_20);
      if (cVar2 != '\0') {
        stAchievement::stAchievement(local_38);
        cVar2 = Quest::get_init_achievement_trigger(local_1c,&local_34,&local_32,local_30);
        if (cVar2 != '\x01') {
          return;
        }
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 8) = local_34;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 10) = local_32;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                          (local_2c);
        *(ushort *)(iVar3 + 0xc) = local_30[0];
      }
      charac_expand::CData::alter((CData *)param_1);
    }
    local_24 = 4;
    local_28 = 0;
    CUser::GetCharacExpandData(*(CUser **)(param_1 + 8),0xe);
    CTitleBook::_getFitSlot(local_18,(ENUM_TITLE_BOOK_CATEGORY *)&local_24,&local_28);
    uVar1 = local_24;
    iVar3 = local_28;
    pCVar4 = (CTitleBook *)CUser::GetCharacExpandData(*(CUser **)(param_1 + 8),0xe);
    local_14 = (Inven_Item *)CTitleBook::getTitleSlot(pCVar4,uVar1,iVar3);
    if (local_14 != (Inven_Item *)0x0) {
      if (*(int *)(local_14 + 2) == 0) {
        this = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(param_1 + 8))
        ;
        local_10 = (Inven_Item *)CInventory::GetInvenRef(this,0,0xb);
        if ((local_10 != (Inven_Item *)0x0) && (*(int *)(local_10 + 2) == local_18)) {
          Inven_Item::reset(local_10);
          CUser::SendUpdateItem(*(CUser **)(param_1 + 8),1,0,0xb);
        }
      }
      else {
        Inven_Item::reset(local_14);
      }
    }
  }
  return;
}

```

---

## _getPostalReward

```asm
// === 0828bd5e CAchievement::_getPostalReward  [0x0828bd5e-0x828bdc5] ===
 828bd5e:	55                   	push   %ebp
 828bd5f:	89 e5                	mov    %esp,%ebp
 828bd61:	83 ec 28             	sub    $0x28,%esp
 828bd64:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 828bd6b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 828bd72:	eb 33                	jmp    828bda7 <_ZN12CAchievement16_getPostalRewardEP14stTitleSection+0x49>
 828bd74:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bd77:	8d 50 34             	lea    0x34(%eax),%edx
 828bd7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828bd7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bd81:	89 14 24             	mov    %edx,(%esp)
 828bd84:	e8 7b 1f 00 00       	call   828dd04 <_ZNSt6vectorIP18stTitleRewardBasisSaIS1_EEixEj>
 828bd89:	8b 00                	mov    (%eax),%eax
 828bd8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828bd8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828bd92:	74 0f                	je     828bda3 <_ZN12CAchievement16_getPostalRewardEP14stTitleSection+0x45>
 828bd94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bd97:	8b 00                	mov    (%eax),%eax
 828bd99:	83 f8 03             	cmp    $0x3,%eax
 828bd9c:	75 05                	jne    828bda3 <_ZN12CAchievement16_getPostalRewardEP14stTitleSection+0x45>
 828bd9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bda1:	eb 21                	jmp    828bdc4 <_ZN12CAchievement16_getPostalRewardEP14stTitleSection+0x66>
 828bda3:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 828bda7:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bdaa:	83 c0 34             	add    $0x34,%eax
 828bdad:	89 04 24             	mov    %eax,(%esp)
 828bdb0:	e8 33 1f 00 00       	call   828dce8 <_ZNKSt6vectorIP18stTitleRewardBasisSaIS1_EE4sizeEv>
 828bdb5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 828bdb8:	0f 97 c0             	seta   %al
 828bdbb:	84 c0                	test   %al,%al
 828bdbd:	75 b5                	jne    828bd74 <_ZN12CAchievement16_getPostalRewardEP14stTitleSection+0x16>
 828bdbf:	b8 00 00 00 00       	mov    $0x0,%eax
 828bdc4:	c9                   	leave
 828bdc5:	c3                   	ret

```

```c
// CAchievement::_getPostalReward @ 0x828bd5e

/* CAchievement::_getPostalReward(stTitleSection*) */

int * __thiscall CAchievement::_getPostalReward(CAchievement *this,stTitleSection *param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>>::size
                      ((vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>> *)
                       (param_1 + 0x34));
    if (uVar2 <= local_14) {
      return (int *)0x0;
    }
    piVar1 = (int *)std::vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>>::operator[]
                              ((vector<stTitleRewardBasis*,std::allocator<stTitleRewardBasis*>> *)
                               (param_1 + 0x34),local_14);
    piVar1 = (int *)*piVar1;
    if ((piVar1 != (int *)0x0) && (*piVar1 == 3)) break;
    local_14 = local_14 + 1;
  }
  return piVar1;
}

```

---

## _getSectionIdx

```asm
// === 0828bcb8 CAchievement::_getSectionIdx  [0x0828bcb8-0x828bd5d] ===
 828bcb8:	55                   	push   %ebp
 828bcb9:	89 e5                	mov    %esp,%ebp
 828bcbb:	56                   	push   %esi
 828bcbc:	53                   	push   %ebx
 828bcbd:	83 ec 60             	sub    $0x60,%esp
 828bcc0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828bcc7:	eb 66                	jmp    828bd2f <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x77>
 828bcc9:	e8 cd 04 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bcce:	8d 90 94 a7 00 00    	lea    0xa794(%eax),%edx
 828bcd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bcd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bcdb:	89 14 24             	mov    %edx,(%esp)
 828bcde:	e8 4f 20 00 00       	call   828dd32 <_ZNSt6vectorI14stTitleSectionSaIS0_EEixEj>
 828bce3:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bce7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 828bcea:	89 04 24             	mov    %eax,(%esp)
 828bced:	e8 d0 1d 00 00       	call   828dac2 <_ZN14stTitleSectionC1ERKS_>
 828bcf2:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 828bcf5:	8b 45 08             	mov    0x8(%ebp),%eax
 828bcf8:	39 c2                	cmp    %eax,%edx
 828bcfa:	75 1a                	jne    828bd16 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x5e>
 828bcfc:	8b 45 c0             	mov    -0x40(%ebp),%eax
 828bcff:	3b 45 0c             	cmp    0xc(%ebp),%eax
 828bd02:	7f 12                	jg     828bd16 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x5e>
 828bd04:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 828bd07:	3b 45 0c             	cmp    0xc(%ebp),%eax
 828bd0a:	7c 0a                	jl     828bd16 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x5e>
 828bd0c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 828bd0f:	be 00 00 00 00       	mov    $0x0,%esi
 828bd14:	eb 05                	jmp    828bd1b <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x63>
 828bd16:	be 01 00 00 00       	mov    $0x1,%esi
 828bd1b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 828bd1e:	89 04 24             	mov    %eax,(%esp)
 828bd21:	e8 4c 1c 00 00       	call   828d972 <_ZN14stTitleSectionD1Ev>
 828bd26:	83 fe 01             	cmp    $0x1,%esi
 828bd29:	75 29                	jne    828bd54 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x9c>
 828bd2b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828bd2f:	e8 67 04 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bd34:	05 94 a7 00 00       	add    $0xa794,%eax
 828bd39:	89 04 24             	mov    %eax,(%esp)
 828bd3c:	e8 d5 1f 00 00       	call   828dd16 <_ZNKSt6vectorI14stTitleSectionSaIS0_EE4sizeEv>
 828bd41:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828bd44:	0f 97 c0             	seta   %al
 828bd47:	84 c0                	test   %al,%al
 828bd49:	0f 85 7a ff ff ff    	jne    828bcc9 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi+0x11>
 828bd4f:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 828bd54:	89 d8                	mov    %ebx,%eax
 828bd56:	83 c4 60             	add    $0x60,%esp
 828bd59:	5b                   	pop    %ebx
 828bd5a:	5e                   	pop    %esi
 828bd5b:	5d                   	pop    %ebp
 828bd5c:	c3                   	ret
 828bd5d:	90                   	nop

```

```c
// CAchievement::_getSectionIdx @ 0x828bcb8

/* CAchievement::_getSectionIdx(ENUM_TITLE_BOOK_CATEGORY, int) */

uint CAchievement::_getSectionIdx(int param_1,int param_2)

{
  bool bVar1;
  stTitleSection *psVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBX;
  int local_50 [3];
  int local_44;
  int local_40;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stTitleSection,std::allocator<stTitleSection>>::size
                      ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794));
    if (uVar4 <= local_10) {
      return 0xffffffff;
    }
    iVar3 = G_CDataManager();
    psVar2 = (stTitleSection *)
             std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                       ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794),
                        local_10);
    stTitleSection::stTitleSection((stTitleSection *)local_50,psVar2);
    if (((local_50[0] == param_1) && (local_44 <= param_2)) && (param_2 <= local_40)) {
      bVar1 = false;
      unaff_EBX = local_10;
    }
    else {
      bVar1 = true;
    }
    stTitleSection::~stTitleSection((stTitleSection *)local_50);
    if (!bVar1) break;
    local_10 = local_10 + 1;
  }
  return unaff_EBX;
}

```

---

## _getTabComplete

```asm
// === 0828bdc6 CAchievement::_getTabComplete  [0x0828bdc6-0x828bf29] ===
 828bdc6:	55                   	push   %ebp
 828bdc7:	89 e5                	mov    %esp,%ebp
 828bdc9:	56                   	push   %esi
 828bdca:	53                   	push   %ebx
 828bdcb:	83 ec 30             	sub    $0x30,%esp
 828bdce:	8b 45 10             	mov    0x10(%ebp),%eax
 828bdd1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828bdd4:	e8 c2 03 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bdd9:	8d 88 a0 a7 00 00    	lea    0xa7a0(%eax),%ecx
 828bddf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828bde2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828bde5:	89 54 24 08          	mov    %edx,0x8(%esp)
 828bde9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828bded:	89 04 24             	mov    %eax,(%esp)
 828bdf0:	e8 97 21 00 00       	call   828df8c <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE4findERS7_>
 828bdf5:	83 ec 04             	sub    $0x4,%esp
 828bdf8:	e8 9e 03 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bdfd:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 828be03:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828be06:	89 54 24 04          	mov    %edx,0x4(%esp)
 828be0a:	89 04 24             	mov    %eax,(%esp)
 828be0d:	e8 a6 21 00 00       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 828be12:	83 ec 04             	sub    $0x4,%esp
 828be15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828be18:	89 44 24 04          	mov    %eax,0x4(%esp)
 828be1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828be1f:	89 04 24             	mov    %eax,(%esp)
 828be22:	e8 b7 21 00 00       	call   828dfde <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEneERKS7_>
 828be27:	84 c0                	test   %al,%al
 828be29:	0f 84 e9 00 00 00    	je     828bf18 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x152>
 828be2f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828be32:	89 04 24             	mov    %eax,(%esp)
 828be35:	e8 b8 21 00 00       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 828be3a:	83 c0 04             	add    $0x4,%eax
 828be3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828be41:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828be44:	89 04 24             	mov    %eax,(%esp)
 828be47:	e8 b4 21 00 00       	call   828e000 <_ZNSt6vectorI14stTitleElementSaIS0_EEC1ERKS2_>
 828be4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 828be4f:	8b 40 0c             	mov    0xc(%eax),%eax
 828be52:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828be55:	eb 7c                	jmp    828bed3 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x10d>
 828be57:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828be5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 828be5e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828be61:	89 04 24             	mov    %eax,(%esp)
 828be64:	e8 a9 22 00 00       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 828be69:	8b 00                	mov    (%eax),%eax
 828be6b:	83 f8 ff             	cmp    $0xffffffff,%eax
 828be6e:	0f 94 c0             	sete   %al
 828be71:	84 c0                	test   %al,%al
 828be73:	75 56                	jne    828becb <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x105>
 828be75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828be78:	89 44 24 04          	mov    %eax,0x4(%esp)
 828be7c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828be7f:	89 04 24             	mov    %eax,(%esp)
 828be82:	e8 8b 22 00 00       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 828be87:	8b 40 1c             	mov    0x1c(%eax),%eax
 828be8a:	83 f8 ff             	cmp    $0xffffffff,%eax
 828be8d:	0f 94 c0             	sete   %al
 828be90:	84 c0                	test   %al,%al
 828be92:	75 3a                	jne    828bece <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x108>
 828be94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828be97:	89 44 24 04          	mov    %eax,0x4(%esp)
 828be9b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828be9e:	89 04 24             	mov    %eax,(%esp)
 828bea1:	e8 6c 22 00 00       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 828bea6:	8b 40 1c             	mov    0x1c(%eax),%eax
 828bea9:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bead:	8b 45 08             	mov    0x8(%ebp),%eax
 828beb0:	89 04 24             	mov    %eax,(%esp)
 828beb3:	e8 2c 0d 00 00       	call   828cbe4 <_ZN12CAchievement20isClearedAchievementEj>
 828beb8:	83 f0 01             	xor    $0x1,%eax
 828bebb:	84 c0                	test   %al,%al
 828bebd:	74 10                	je     828becf <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x109>
 828bebf:	be 00 00 00 00       	mov    $0x0,%esi
 828bec4:	bb 00 00 00 00       	mov    $0x0,%ebx
 828bec9:	eb 3e                	jmp    828bf09 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x143>
 828becb:	90                   	nop
 828becc:	eb 01                	jmp    828becf <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x109>
 828bece:	90                   	nop
 828becf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828bed3:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bed6:	8b 40 10             	mov    0x10(%eax),%eax
 828bed9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828bedc:	0f 97 c0             	seta   %al
 828bedf:	84 c0                	test   %al,%al
 828bee1:	0f 85 70 ff ff ff    	jne    828be57 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x91>
 828bee7:	bb 01 00 00 00       	mov    $0x1,%ebx
 828beec:	eb 1b                	jmp    828bf09 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x143>
 828beee:	89 d3                	mov    %edx,%ebx
 828bef0:	89 c6                	mov    %eax,%esi
 828bef2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828bef5:	89 04 24             	mov    %eax,(%esp)
 828bef8:	e8 b7 21 00 00       	call   828e0b4 <_ZNSt6vectorI14stTitleElementSaIS0_EED1Ev>
 828befd:	89 f0                	mov    %esi,%eax
 828beff:	89 da                	mov    %ebx,%edx
 828bf01:	89 04 24             	mov    %eax,(%esp)
 828bf04:	e8 47 78 85 00       	call   8ae3750 <_Unwind_Resume>
 828bf09:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828bf0c:	89 04 24             	mov    %eax,(%esp)
 828bf0f:	e8 a0 21 00 00       	call   828e0b4 <_ZNSt6vectorI14stTitleElementSaIS0_EED1Ev>
 828bf14:	85 db                	test   %ebx,%ebx
 828bf16:	74 05                	je     828bf1d <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY+0x157>
 828bf18:	be 01 00 00 00       	mov    $0x1,%esi
 828bf1d:	89 f0                	mov    %esi,%eax
 828bf1f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828bf22:	83 c4 00             	add    $0x0,%esp
 828bf25:	5b                   	pop    %ebx
 828bf26:	5e                   	pop    %esi
 828bf27:	5d                   	pop    %ebp
 828bf28:	c3                   	ret
 828bf29:	90                   	nop

```

```c
// CAchievement::_getTabComplete @ 0x828bdc6

/* CAchievement::_getTabComplete(stTitleSection*, ENUM_TITLE_BOOK_CATEGORY) */

undefined4 __thiscall
CAchievement::_getTabComplete(CAchievement *this,int param_1,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_ESI;
  vector<stTitleElement,std::allocator<stTitleElement>> local_28 [12];
  _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
  local_1c [4];
  undefined4 local_18;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_14 [4];
  uint local_10;
  
  local_18 = param_3;
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::find((int *)local_1c);
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::end(local_14);
  cVar2 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
          ::operator!=(local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    iVar3 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator->(local_1c);
    std::vector<stTitleElement,std::allocator<stTitleElement>>::vector
              (local_28,(vector *)(iVar3 + 4));
    for (local_10 = *(uint *)(param_1 + 0xc); local_10 < *(uint *)(param_1 + 0x10);
        local_10 = local_10 + 1) {
      piVar4 = (int *)std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                                (local_28,local_10);
      if ((*piVar4 != -1) &&
         (iVar3 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                            (local_28,local_10), *(int *)(iVar3 + 0x1c) != -1)) {
        std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[](local_28,local_10);
                    /* try { // try from 0828beb3 to 0828beb7 has its CatchHandler @ 0828beee */
        cVar2 = isClearedAchievement((uint)this);
        if (cVar2 != '\x01') {
          unaff_ESI = 0;
          bVar1 = false;
          goto LAB_0828bf09;
        }
      }
    }
    bVar1 = true;
LAB_0828bf09:
    std::vector<stTitleElement,std::allocator<stTitleElement>>::~vector(local_28);
    if (!bVar1) {
      return unaff_ESI;
    }
  }
  return 1;
}

```

---

## _getTrigger

```asm
// === 0828bb14 CAchievement::_getTrigger  [0x0828bb14-0x828bbad] ===
 828bb14:	55                   	push   %ebp
 828bb15:	89 e5                	mov    %esp,%ebp
 828bb17:	53                   	push   %ebx
 828bb18:	83 ec 34             	sub    $0x34,%esp
 828bb1b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 828bb1e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828bb21:	89 04 24             	mov    %eax,(%esp)
 828bb24:	e8 47 1d 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828bb29:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bb2c:	8d 48 0c             	lea    0xc(%eax),%ecx
 828bb2f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828bb32:	8d 55 10             	lea    0x10(%ebp),%edx
 828bb35:	89 54 24 08          	mov    %edx,0x8(%esp)
 828bb39:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828bb3d:	89 04 24             	mov    %eax,(%esp)
 828bb40:	e8 79 22 00 00       	call   828ddbe <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 828bb45:	83 ec 04             	sub    $0x4,%esp
 828bb48:	8b 45 0c             	mov    0xc(%ebp),%eax
 828bb4b:	8d 50 0c             	lea    0xc(%eax),%edx
 828bb4e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828bb51:	89 54 24 04          	mov    %edx,0x4(%esp)
 828bb55:	89 04 24             	mov    %eax,(%esp)
 828bb58:	e8 8d 22 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828bb5d:	83 ec 04             	sub    $0x4,%esp
 828bb60:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828bb63:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bb67:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828bb6a:	89 04 24             	mov    %eax,(%esp)
 828bb6d:	e8 9e 22 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828bb72:	84 c0                	test   %al,%al
 828bb74:	74 1e                	je     828bb94 <_ZN12CAchievement11_getTriggerEj+0x80>
 828bb76:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828bb79:	89 04 24             	mov    %eax,(%esp)
 828bb7c:	e8 a3 22 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828bb81:	8b 50 04             	mov    0x4(%eax),%edx
 828bb84:	89 13                	mov    %edx,(%ebx)
 828bb86:	8b 50 08             	mov    0x8(%eax),%edx
 828bb89:	89 53 04             	mov    %edx,0x4(%ebx)
 828bb8c:	8b 40 0c             	mov    0xc(%eax),%eax
 828bb8f:	89 43 08             	mov    %eax,0x8(%ebx)
 828bb92:	eb 11                	jmp    828bba5 <_ZN12CAchievement11_getTriggerEj+0x91>
 828bb94:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828bb97:	89 03                	mov    %eax,(%ebx)
 828bb99:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828bb9c:	89 43 04             	mov    %eax,0x4(%ebx)
 828bb9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828bba2:	89 43 08             	mov    %eax,0x8(%ebx)
 828bba5:	89 d8                	mov    %ebx,%eax
 828bba7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 828bbaa:	c9                   	leave
 828bbab:	c2 04 00             	ret    $0x4

```

```c
// CAchievement::_getTrigger @ 0x828bb14

/* CAchievement::_getTrigger(unsigned int) */

uint CAchievement::_getTrigger(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_10 [8];
  
  stAchievement::stAchievement((stAchievement *)&local_1c);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_20);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)param_1 = local_1c;
    *(undefined4 *)(param_1 + 4) = local_18;
    *(undefined4 *)(param_1 + 8) = local_14;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_20);
    *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xc);
  }
  return param_1;
}

```

---

## _gm_clearAll

```asm
// === 0828d738 CAchievement::_gm_clearAll  [0x0828d738-0x828d812] ===
 828d738:	55                   	push   %ebp
 828d739:	89 e5                	mov    %esp,%ebp
 828d73b:	53                   	push   %ebx
 828d73c:	83 ec 44             	sub    $0x44,%esp
 828d73f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828d742:	89 04 24             	mov    %eax,(%esp)
 828d745:	e8 26 01 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828d74a:	c7 45 f0 65 19 00 00 	movl   $0x1965,-0x10(%ebp)
 828d751:	e9 a5 00 00 00       	jmp    828d7fb <_ZN12CAchievement12_gm_clearAllEv+0xc3>
 828d756:	e8 40 ea e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d75b:	8b 40 18             	mov    0x18(%eax),%eax
 828d75e:	8b 55 f0             	mov    -0x10(%ebp),%edx
 828d761:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d765:	89 04 24             	mov    %eax,(%esp)
 828d768:	e8 ef 82 0c 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 828d76d:	e8 29 ea e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d772:	8b 55 f0             	mov    -0x10(%ebp),%edx
 828d775:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d779:	89 04 24             	mov    %eax,(%esp)
 828d77c:	e8 45 26 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828d781:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828d784:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828d788:	74 69                	je     828d7f3 <_ZN12CAchievement12_gm_clearAllEv+0xbb>
 828d78a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d78d:	8b 40 08             	mov    0x8(%eax),%eax
 828d790:	83 f8 07             	cmp    $0x7,%eax
 828d793:	75 61                	jne    828d7f6 <_ZN12CAchievement12_gm_clearAllEv+0xbe>
 828d795:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828d798:	83 c0 08             	add    $0x8,%eax
 828d79b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828d79f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828d7a2:	83 c0 06             	add    $0x6,%eax
 828d7a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 828d7a9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828d7ac:	83 c0 04             	add    $0x4,%eax
 828d7af:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d7b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d7b6:	89 04 24             	mov    %eax,(%esp)
 828d7b9:	e8 f6 57 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828d7be:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 828d7c2:	0f b7 d8             	movzwl %ax,%ebx
 828d7c5:	0f b7 45 ea          	movzwl -0x16(%ebp),%eax
 828d7c9:	0f b7 c8             	movzwl %ax,%ecx
 828d7cc:	0f b7 45 e8          	movzwl -0x18(%ebp),%eax
 828d7d0:	0f b7 d0             	movzwl %ax,%edx
 828d7d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828d7d6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 828d7da:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828d7de:	89 54 24 08          	mov    %edx,0x8(%esp)
 828d7e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d7e6:	8b 45 08             	mov    0x8(%ebp),%eax
 828d7e9:	89 04 24             	mov    %eax,(%esp)
 828d7ec:	e8 87 de ff ff       	call   828b678 <_ZN12CAchievement10setTriggerEjttt>
 828d7f1:	eb 04                	jmp    828d7f7 <_ZN12CAchievement12_gm_clearAllEv+0xbf>
 828d7f3:	90                   	nop
 828d7f4:	eb 01                	jmp    828d7f7 <_ZN12CAchievement12_gm_clearAllEv+0xbf>
 828d7f6:	90                   	nop
 828d7f7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 828d7fb:	81 7d f0 bb 1b 00 00 	cmpl   $0x1bbb,-0x10(%ebp)
 828d802:	0f 9e c0             	setle  %al
 828d805:	84 c0                	test   %al,%al
 828d807:	0f 85 49 ff ff ff    	jne    828d756 <_ZN12CAchievement12_gm_clearAllEv+0x1e>
 828d80d:	83 c4 44             	add    $0x44,%esp
 828d810:	5b                   	pop    %ebx
 828d811:	5d                   	pop    %ebp
 828d812:	c3                   	ret

```

```c
// CAchievement::_gm_clearAll @ 0x828d738

/* CAchievement::_gm_clearAll() */

void __thiscall CAchievement::_gm_clearAll(CAchievement *this)

{
  int iVar1;
  stAchievement local_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18 [2];
  uint local_14;
  Quest *local_10;
  
  stAchievement::stAchievement(local_20);
  for (local_14 = 0x1965; (int)local_14 < 0x1bbc; local_14 = local_14 + 1) {
    iVar1 = G_CDataManager();
    QuestList::find_quest(*(int *)(iVar1 + 0x18));
    iVar1 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar1);
    if ((local_10 != (Quest *)0x0) && (*(int *)(local_10 + 8) == 7)) {
      Quest::get_init_achievement_trigger(local_10,&local_1c,&local_1a,local_18);
      setTrigger(this,local_14,local_1c,local_1a,local_18[0]);
    }
  }
  return;
}

```

---

## _gm_init

```asm
// === 0828d338 CAchievement::_gm_init  [0x0828d338-0x828d44f] ===
 828d338:	55                   	push   %ebp
 828d339:	89 e5                	mov    %esp,%ebp
 828d33b:	56                   	push   %esi
 828d33c:	53                   	push   %ebx
 828d33d:	83 ec 20             	sub    $0x20,%esp
 828d340:	8b 45 08             	mov    0x8(%ebp),%eax
 828d343:	8d 50 0c             	lea    0xc(%eax),%edx
 828d346:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d349:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d34d:	89 04 24             	mov    %eax,(%esp)
 828d350:	e8 43 0f 00 00       	call   828e298 <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 828d355:	83 ec 04             	sub    $0x4,%esp
 828d358:	e9 a6 00 00 00       	jmp    828d403 <_ZN12CAchievement8_gm_initEv+0xcb>
 828d35d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d360:	89 04 24             	mov    %eax,(%esp)
 828d363:	e8 bc 0a 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d368:	8b 40 04             	mov    0x4(%eax),%eax
 828d36b:	89 c3                	mov    %eax,%ebx
 828d36d:	e8 29 ee e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d372:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828d376:	89 04 24             	mov    %eax,(%esp)
 828d379:	e8 48 2a 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828d37e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828d381:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828d385:	0f 84 ac 00 00 00    	je     828d437 <_ZN12CAchievement8_gm_initEv+0xff>
 828d38b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d38e:	89 04 24             	mov    %eax,(%esp)
 828d391:	e8 8e 0a 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d396:	8d 70 0c             	lea    0xc(%eax),%esi
 828d399:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d39c:	89 04 24             	mov    %eax,(%esp)
 828d39f:	e8 80 0a 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d3a4:	8d 58 0a             	lea    0xa(%eax),%ebx
 828d3a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d3aa:	89 04 24             	mov    %eax,(%esp)
 828d3ad:	e8 72 0a 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d3b2:	83 c0 08             	add    $0x8,%eax
 828d3b5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 828d3b9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 828d3bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d3c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d3c4:	89 04 24             	mov    %eax,(%esp)
 828d3c7:	e8 e8 5b 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828d3cc:	83 f0 01             	xor    $0x1,%eax
 828d3cf:	84 c0                	test   %al,%al
 828d3d1:	75 67                	jne    828d43a <_ZN12CAchievement8_gm_initEv+0x102>
 828d3d3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d3d6:	89 04 24             	mov    %eax,(%esp)
 828d3d9:	e8 46 0a 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d3de:	8b 40 04             	mov    0x4(%eax),%eax
 828d3e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828d3e8:	00 
 828d3e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d3ed:	8b 45 08             	mov    0x8(%ebp),%eax
 828d3f0:	89 04 24             	mov    %eax,(%esp)
 828d3f3:	e8 5a ee ff ff       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828d3f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d3fb:	89 04 24             	mov    %eax,(%esp)
 828d3fe:	e8 bb 0e 00 00       	call   828e2be <_ZNSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEppEv>
 828d403:	8b 45 08             	mov    0x8(%ebp),%eax
 828d406:	8d 50 0c             	lea    0xc(%eax),%edx
 828d409:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828d40c:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d410:	89 04 24             	mov    %eax,(%esp)
 828d413:	e8 d2 09 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828d418:	83 ec 04             	sub    $0x4,%esp
 828d41b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828d41e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d422:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828d425:	89 04 24             	mov    %eax,(%esp)
 828d428:	e8 e3 09 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828d42d:	84 c0                	test   %al,%al
 828d42f:	0f 85 28 ff ff ff    	jne    828d35d <_ZN12CAchievement8_gm_initEv+0x25>
 828d435:	eb 04                	jmp    828d43b <_ZN12CAchievement8_gm_initEv+0x103>
 828d437:	90                   	nop
 828d438:	eb 01                	jmp    828d43b <_ZN12CAchievement8_gm_initEv+0x103>
 828d43a:	90                   	nop
 828d43b:	8b 45 08             	mov    0x8(%ebp),%eax
 828d43e:	89 04 24             	mov    %eax,(%esp)
 828d441:	e8 7e b7 e3 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 828d446:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828d449:	83 c4 00             	add    $0x0,%esp
 828d44c:	5b                   	pop    %ebx
 828d44d:	5e                   	pop    %esi
 828d44e:	5d                   	pop    %ebp
 828d44f:	c3                   	ret

```

```c
// CAchievement::_gm_init @ 0x828d338

/* CAchievement::_gm_init() */

void __thiscall CAchievement::_gm_init(CAchievement *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_18 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_14 [4];
  Quest *local_10;
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar2 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_10 == (Quest *)0x0) break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    cVar1 = Quest::get_init_achievement_trigger
                      (local_10,(ushort *)(iVar4 + 8),(ushort *)(iVar3 + 10),(ushort *)(iVar2 + 0xc)
                      );
    if (cVar1 != '\x01') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
    _sendSetTrigger(this,*(uint *)(iVar2 + 4),'\0');
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_18);
  }
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## _gm_report

```asm
// === 0828d450 CAchievement::_gm_report  [0x0828d450-0x828d737] ===
 828d450:	55                   	push   %ebp
 828d451:	89 e5                	mov    %esp,%ebp
 828d453:	57                   	push   %edi
 828d454:	56                   	push   %esi
 828d455:	53                   	push   %ebx
 828d456:	81 ec 7c 04 00 00    	sub    $0x47c,%esp
 828d45c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d45f:	89 04 24             	mov    %eax,(%esp)
 828d462:	e8 09 04 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828d467:	8d 9d c8 fb ff ff    	lea    -0x438(%ebp),%ebx
 828d46d:	b8 00 00 00 00       	mov    $0x0,%eax
 828d472:	ba 00 01 00 00       	mov    $0x100,%edx
 828d477:	89 df                	mov    %ebx,%edi
 828d479:	89 d1                	mov    %edx,%ecx
 828d47b:	f3 ab                	rep stos %eax,%es:(%edi)
 828d47d:	c7 45 e0 65 19 00 00 	movl   $0x1965,-0x20(%ebp)
 828d484:	e9 92 02 00 00       	jmp    828d71b <_ZN12CAchievement10_gm_reportERSs+0x2cb>
 828d489:	e8 0d ed e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d48e:	8b 40 18             	mov    0x18(%eax),%eax
 828d491:	8b 55 e0             	mov    -0x20(%ebp),%edx
 828d494:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d498:	89 04 24             	mov    %eax,(%esp)
 828d49b:	e8 bc 85 0c 00       	call   8355a5c <_ZN9QuestList10find_questEi>
 828d4a0:	e8 f6 ec e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d4a5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 828d4a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d4ac:	89 04 24             	mov    %eax,(%esp)
 828d4af:	e8 12 29 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828d4b4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828d4b7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 828d4bb:	0f 84 52 02 00 00    	je     828d713 <_ZN12CAchievement10_gm_reportERSs+0x2c3>
 828d4c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d4c4:	8b 40 08             	mov    0x8(%eax),%eax
 828d4c7:	83 f8 07             	cmp    $0x7,%eax
 828d4ca:	0f 85 46 02 00 00    	jne    828d716 <_ZN12CAchievement10_gm_reportERSs+0x2c6>
 828d4d0:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d4d3:	83 c0 08             	add    $0x8,%eax
 828d4d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828d4da:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d4dd:	83 c0 06             	add    $0x6,%eax
 828d4e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 828d4e4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d4e7:	83 c0 04             	add    $0x4,%eax
 828d4ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d4ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d4f1:	89 04 24             	mov    %eax,(%esp)
 828d4f4:	e8 bb 5a 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828d4f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 828d4fc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 828d4ff:	8b 45 08             	mov    0x8(%ebp),%eax
 828d502:	8d 48 0c             	lea    0xc(%eax),%ecx
 828d505:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d508:	8d 55 d8             	lea    -0x28(%ebp),%edx
 828d50b:	89 54 24 08          	mov    %edx,0x8(%esp)
 828d50f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828d513:	89 04 24             	mov    %eax,(%esp)
 828d516:	e8 a3 08 00 00       	call   828ddbe <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 828d51b:	83 ec 04             	sub    $0x4,%esp
 828d51e:	8b 45 08             	mov    0x8(%ebp),%eax
 828d521:	8d 50 0c             	lea    0xc(%eax),%edx
 828d524:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828d527:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d52b:	89 04 24             	mov    %eax,(%esp)
 828d52e:	e8 b7 08 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828d533:	83 ec 04             	sub    $0x4,%esp
 828d536:	8d 45 dc             	lea    -0x24(%ebp),%eax
 828d539:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d53d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d540:	89 04 24             	mov    %eax,(%esp)
 828d543:	e8 c8 08 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828d548:	84 c0                	test   %al,%al
 828d54a:	0f 84 da 00 00 00    	je     828d62a <_ZN12CAchievement10_gm_reportERSs+0x1da>
 828d550:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d553:	89 04 24             	mov    %eax,(%esp)
 828d556:	e8 c9 08 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d55b:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 828d55f:	0f b7 f0             	movzwl %ax,%esi
 828d562:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d565:	89 04 24             	mov    %eax,(%esp)
 828d568:	e8 b7 08 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d56d:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 828d571:	0f b7 f8             	movzwl %ax,%edi
 828d574:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d577:	89 04 24             	mov    %eax,(%esp)
 828d57a:	e8 a5 08 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828d57f:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 828d583:	0f b7 c0             	movzwl %ax,%eax
 828d586:	89 85 a8 fb ff ff    	mov    %eax,-0x458(%ebp)
 828d58c:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 828d590:	0f b7 c0             	movzwl %ax,%eax
 828d593:	89 85 ac fb ff ff    	mov    %eax,-0x454(%ebp)
 828d599:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 828d59d:	0f b7 c0             	movzwl %ax,%eax
 828d5a0:	89 85 b0 fb ff ff    	mov    %eax,-0x450(%ebp)
 828d5a6:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 828d5aa:	0f b7 c0             	movzwl %ax,%eax
 828d5ad:	89 85 b4 fb ff ff    	mov    %eax,-0x44c(%ebp)
 828d5b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d5b6:	89 04 24             	mov    %eax,(%esp)
 828d5b9:	e8 c4 5a 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828d5be:	89 c3                	mov    %eax,%ebx
 828d5c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d5c3:	89 04 24             	mov    %eax,(%esp)
 828d5c6:	e8 25 8f 47 00       	call   87064f0 <_ZNKSs5c_strEv>
 828d5cb:	89 c2                	mov    %eax,%edx
 828d5cd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d5d0:	8b 40 04             	mov    0x4(%eax),%eax
 828d5d3:	89 74 24 28          	mov    %esi,0x28(%esp)
 828d5d7:	89 7c 24 24          	mov    %edi,0x24(%esp)
 828d5db:	8b 8d a8 fb ff ff    	mov    -0x458(%ebp),%ecx
 828d5e1:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 828d5e5:	8b bd ac fb ff ff    	mov    -0x454(%ebp),%edi
 828d5eb:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 828d5ef:	8b 8d b0 fb ff ff    	mov    -0x450(%ebp),%ecx
 828d5f5:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 828d5f9:	8b bd b4 fb ff ff    	mov    -0x44c(%ebp),%edi
 828d5ff:	89 7c 24 14          	mov    %edi,0x14(%esp)
 828d603:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 828d607:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828d60b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828d60f:	c7 44 24 04 50 54 c1 	movl   $0x8c15450,0x4(%esp)
 828d616:	08 
 828d617:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 828d61d:	89 04 24             	mov    %eax,(%esp)
 828d620:	e8 1b 0e df ff       	call   807e440 <sprintf@plt>
 828d625:	e9 b4 00 00 00       	jmp    828d6de <_ZN12CAchievement10_gm_reportERSs+0x28e>
 828d62a:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 828d62e:	0f b7 f0             	movzwl %ax,%esi
 828d631:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 828d635:	0f b7 f8             	movzwl %ax,%edi
 828d638:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 828d63c:	0f b7 c0             	movzwl %ax,%eax
 828d63f:	89 85 b8 fb ff ff    	mov    %eax,-0x448(%ebp)
 828d645:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 828d649:	0f b7 c0             	movzwl %ax,%eax
 828d64c:	89 85 bc fb ff ff    	mov    %eax,-0x444(%ebp)
 828d652:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 828d656:	0f b7 c0             	movzwl %ax,%eax
 828d659:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 828d65f:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 828d663:	0f b7 c0             	movzwl %ax,%eax
 828d666:	89 85 c4 fb ff ff    	mov    %eax,-0x43c(%ebp)
 828d66c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d66f:	89 04 24             	mov    %eax,(%esp)
 828d672:	e8 0b 5a 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828d677:	89 c3                	mov    %eax,%ebx
 828d679:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d67c:	89 04 24             	mov    %eax,(%esp)
 828d67f:	e8 6c 8e 47 00       	call   87064f0 <_ZNKSs5c_strEv>
 828d684:	89 c2                	mov    %eax,%edx
 828d686:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d689:	8b 40 04             	mov    0x4(%eax),%eax
 828d68c:	89 74 24 28          	mov    %esi,0x28(%esp)
 828d690:	89 7c 24 24          	mov    %edi,0x24(%esp)
 828d694:	8b 8d b8 fb ff ff    	mov    -0x448(%ebp),%ecx
 828d69a:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 828d69e:	8b bd bc fb ff ff    	mov    -0x444(%ebp),%edi
 828d6a4:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 828d6a8:	8b 8d c0 fb ff ff    	mov    -0x440(%ebp),%ecx
 828d6ae:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 828d6b2:	8b bd c4 fb ff ff    	mov    -0x43c(%ebp),%edi
 828d6b8:	89 7c 24 14          	mov    %edi,0x14(%esp)
 828d6bc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 828d6c0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828d6c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 828d6c8:	c7 44 24 04 50 54 c1 	movl   $0x8c15450,0x4(%esp)
 828d6cf:	08 
 828d6d0:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 828d6d6:	89 04 24             	mov    %eax,(%esp)
 828d6d9:	e8 62 0d df ff       	call   807e440 <sprintf@plt>
 828d6de:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 828d6e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d6e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 828d6eb:	89 04 24             	mov    %eax,(%esp)
 828d6ee:	e8 3d a9 47 00       	call   8708030 <_ZNSspLEPKc>
 828d6f3:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 828d6fa:	00 
 828d6fb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828d702:	00 
 828d703:	8d 85 c8 fb ff ff    	lea    -0x438(%ebp),%eax
 828d709:	89 04 24             	mov    %eax,(%esp)
 828d70c:	e8 af 05 df ff       	call   807dcc0 <memset@plt>
 828d711:	eb 04                	jmp    828d717 <_ZN12CAchievement10_gm_reportERSs+0x2c7>
 828d713:	90                   	nop
 828d714:	eb 01                	jmp    828d717 <_ZN12CAchievement10_gm_reportERSs+0x2c7>
 828d716:	90                   	nop
 828d717:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 828d71b:	81 7d e0 bb 1b 00 00 	cmpl   $0x1bbb,-0x20(%ebp)
 828d722:	0f 9e c0             	setle  %al
 828d725:	84 c0                	test   %al,%al
 828d727:	0f 85 5c fd ff ff    	jne    828d489 <_ZN12CAchievement10_gm_reportERSs+0x39>
 828d72d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 828d730:	83 c4 00             	add    $0x0,%esp
 828d733:	5b                   	pop    %ebx
 828d734:	5e                   	pop    %esi
 828d735:	5f                   	pop    %edi
 828d736:	5d                   	pop    %ebp
 828d737:	c3                   	ret

```

```c
// CAchievement::_gm_report @ 0x828d450

/* CAchievement::_gm_report(std::string&) */

void __thiscall CAchievement::_gm_report(CAchievement *this,string *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  byte bVar15;
  char local_43c [1024];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_3c [4];
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  int local_2c;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_28 [4];
  int local_24;
  Quest *local_20;
  
  bVar15 = 0;
  stAchievement::stAchievement(local_38);
  pcVar13 = local_43c;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar13[0] = '\0';
    pcVar13[1] = '\0';
    pcVar13[2] = '\0';
    pcVar13[3] = '\0';
    pcVar13 = pcVar13 + ((uint)bVar15 * -2 + 1) * 4;
  }
  for (local_24 = 0x1965; local_24 < 0x1bbc; local_24 = local_24 + 1) {
    iVar11 = G_CDataManager();
    QuestList::find_quest(*(int *)(iVar11 + 0x18));
    iVar11 = G_CDataManager();
    local_20 = (Quest *)CDataManager::find_quest(iVar11);
    if ((local_20 != (Quest *)0x0) && (*(int *)(local_20 + 8) == 7)) {
      Quest::get_init_achievement_trigger(local_20,&local_34,&local_32,local_30);
      local_2c = local_24;
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::find((uint *)local_3c);
      std::
      map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
      ::end(local_28);
      cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                        (local_3c,(_Rb_tree_iterator *)local_28);
      if (cVar4 == '\0') {
        uVar12 = (uint)local_30[0];
        uVar14 = (uint)local_32;
        uVar5 = (uint)local_34;
        uVar6 = (uint)local_30[0];
        uVar7 = (uint)local_32;
        uVar10 = (uint)local_34;
        uVar8 = Quest::get_title_reward(local_20);
        uVar9 = std::string::c_str((string *)local_20);
        sprintf(local_43c,"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",*(undefined4 *)(local_20 + 4),
                uVar9,uVar8,uVar10,uVar7,uVar6,uVar5,uVar14,uVar12);
      }
      else {
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar1 = *(ushort *)(iVar11 + 0xc);
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar2 = *(ushort *)(iVar11 + 10);
        iVar11 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                           (local_3c);
        uVar3 = *(ushort *)(iVar11 + 8);
        uVar5 = (uint)local_30[0];
        uVar6 = (uint)local_32;
        uVar7 = (uint)local_34;
        uVar8 = Quest::get_title_reward(local_20);
        uVar9 = std::string::c_str((string *)local_20);
        sprintf(local_43c,"%d\t\"%s\"\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",*(undefined4 *)(local_20 + 4),
                uVar9,uVar8,uVar7,uVar6,uVar5,(uint)uVar3,(uint)uVar2,(uint)uVar1);
      }
      std::string::operator+=((string *)param_1,local_43c);
      memset(local_43c,0,0x400);
    }
  }
  return;
}

```

---

## _reset

```asm
// === 0828c676 CAchievement::_reset  [0x0828c676-0x828c6a3] ===
 828c676:	55                   	push   %ebp
 828c677:	89 e5                	mov    %esp,%ebp
 828c679:	83 ec 18             	sub    $0x18,%esp
 828c67c:	8b 45 08             	mov    0x8(%ebp),%eax
 828c67f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 828c686:	8b 45 08             	mov    0x8(%ebp),%eax
 828c689:	83 c0 0c             	add    $0xc,%eax
 828c68c:	89 04 24             	mov    %eax,(%esp)
 828c68f:	e8 98 1a 00 00       	call   828e12c <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 828c694:	8b 45 08             	mov    0x8(%ebp),%eax
 828c697:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 828c69b:	8b 45 08             	mov    0x8(%ebp),%eax
 828c69e:	c6 40 25 00          	movb   $0x0,0x25(%eax)
 828c6a2:	c9                   	leave
 828c6a3:	c3                   	ret

```

```c
// CAchievement::_reset @ 0x828c676

/* CAchievement::_reset() */

void __thiscall CAchievement::_reset(CAchievement *this)

{
  *(undefined4 *)(this + 8) = 0;
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::clear((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
           *)(this + 0xc));
  this[0x24] = (CAchievement)0x0;
  this[0x25] = (CAchievement)0x0;
  return;
}

```

---

## _saveData

```asm
// === 0828c774 CAchievement::_saveData  [0x0828c774-0x828c8b7] ===
 828c774:	55                   	push   %ebp
 828c775:	89 e5                	mov    %esp,%ebp
 828c777:	56                   	push   %esi
 828c778:	53                   	push   %ebx
 828c779:	83 ec 20             	sub    $0x20,%esp
 828c77c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 828c781:	c7 44 24 08 d4 01 00 	movl   $0x1d4,0x8(%esp)
 828c788:	00 
 828c789:	c7 44 24 04 40 54 c1 	movl   $0x8c15440,0x4(%esp)
 828c790:	08 
 828c791:	89 04 24             	mov    %eax,(%esp)
 828c794:	e8 ed 32 00 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 828c799:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828c7a0:	00 
 828c7a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c7a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c7a8:	89 04 24             	mov    %eax,(%esp)
 828c7ab:	e8 76 c4 e3 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 828c7b0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c7b3:	89 04 24             	mov    %eax,(%esp)
 828c7b6:	e8 8b c4 e3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 828c7bb:	c7 44 24 04 86 02 00 	movl   $0x286,0x4(%esp)
 828c7c2:	00 
 828c7c3:	89 04 24             	mov    %eax,(%esp)
 828c7c6:	e8 8b c4 e3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 828c7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c7ce:	89 04 24             	mov    %eax,(%esp)
 828c7d1:	e8 c0 c4 e3 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 828c7d6:	89 c3                	mov    %eax,%ebx
 828c7d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c7db:	89 04 24             	mov    %eax,(%esp)
 828c7de:	e8 63 c4 e3 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 828c7e3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828c7e7:	89 04 24             	mov    %eax,(%esp)
 828c7ea:	e8 67 c4 e3 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 828c7ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c7f2:	89 04 24             	mov    %eax,(%esp)
 828c7f5:	e8 54 c4 e3 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 828c7fa:	89 04 24             	mov    %eax,(%esp)
 828c7fd:	e8 de 19 00 00       	call   828e1e0 <_ZN12CStreamGuard11GetInBufferI24stAchievement_DBSaveDataEEPT_v>
 828c802:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828c805:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828c809:	75 0a                	jne    828c815 <_ZN12CAchievement9_saveDataEP5CUser+0xa1>
 828c80b:	bb 00 00 00 00       	mov    $0x0,%ebx
 828c810:	e9 8e 00 00 00       	jmp    828c8a3 <_ZN12CAchievement9_saveDataEP5CUser+0x12f>
 828c815:	c7 44 24 08 0c 18 00 	movl   $0x180c,0x8(%esp)
 828c81c:	00 
 828c81d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828c824:	00 
 828c825:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828c828:	89 04 24             	mov    %eax,(%esp)
 828c82b:	e8 90 14 df ff       	call   807dcc0 <memset@plt>
 828c830:	8b 45 08             	mov    0x8(%ebp),%eax
 828c833:	8b 00                	mov    (%eax),%eax
 828c835:	83 c0 08             	add    $0x8,%eax
 828c838:	8b 10                	mov    (%eax),%edx
 828c83a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828c83d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c841:	8b 45 08             	mov    0x8(%ebp),%eax
 828c844:	89 04 24             	mov    %eax,(%esp)
 828c847:	ff d2                	call   *%edx
 828c849:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 828c850:	ff 
 828c851:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c854:	89 04 24             	mov    %eax,(%esp)
 828c857:	e8 44 17 3c 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 828c85c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c85f:	89 82 08 18 00 00    	mov    %eax,0x1808(%edx)
 828c865:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 828c86a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 828c86d:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c871:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 828c878:	00 
 828c879:	89 04 24             	mov    %eax,(%esp)
 828c87c:	e8 5d 47 2e 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 828c881:	bb 01 00 00 00       	mov    $0x1,%ebx
 828c886:	eb 1b                	jmp    828c8a3 <_ZN12CAchievement9_saveDataEP5CUser+0x12f>
 828c888:	89 d3                	mov    %edx,%ebx
 828c88a:	89 c6                	mov    %eax,%esi
 828c88c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c88f:	89 04 24             	mov    %eax,(%esp)
 828c892:	e8 3b 00 39 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 828c897:	89 f0                	mov    %esi,%eax
 828c899:	89 da                	mov    %ebx,%edx
 828c89b:	89 04 24             	mov    %eax,(%esp)
 828c89e:	e8 ad 6e 85 00       	call   8ae3750 <_Unwind_Resume>
 828c8a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c8a6:	89 04 24             	mov    %eax,(%esp)
 828c8a9:	e8 24 00 39 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 828c8ae:	89 d8                	mov    %ebx,%eax
 828c8b0:	83 c4 20             	add    $0x20,%esp
 828c8b3:	5b                   	pop    %ebx
 828c8b4:	5e                   	pop    %esi
 828c8b5:	5d                   	pop    %ebp
 828c8b6:	c3                   	ret
 828c8b7:	90                   	nop

```

```c
// CAchievement::_saveData @ 0x828c774

/* CAchievement::_saveData(CUser*) */

bool __thiscall CAchievement::_saveData(CAchievement *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  stAchievement_DBSaveData *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Achievement.cpp",0x1d4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0828c7c6 to 0828c880 has its CatchHandler @ 0828c888 */
  CStreamGuard::operator<<(pCVar2,0x286);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<stAchievement_DBSaveData>(pCVar2);
  bVar5 = local_10 != (stAchievement_DBSaveData *)0x0;
  if (bVar5) {
    memset(local_10,0,0x180c);
    (**(code **)(*(int *)this + 8))(this,local_10);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x1808) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## _sendComplete

```asm
// === 0828c3a4 CAchievement::_sendComplete  [0x0828c3a4-0x828c4dd] ===
 828c3a4:	55                   	push   %ebp
 828c3a5:	89 e5                	mov    %esp,%ebp
 828c3a7:	56                   	push   %esi
 828c3a8:	53                   	push   %ebx
 828c3a9:	83 ec 70             	sub    $0x70,%esp
 828c3ac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c3af:	8b 55 0c             	mov    0xc(%ebp),%edx
 828c3b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c3b6:	8b 55 08             	mov    0x8(%ebp),%edx
 828c3b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c3bd:	89 04 24             	mov    %eax,(%esp)
 828c3c0:	e8 4f f7 ff ff       	call   828bb14 <_ZN12CAchievement11_getTriggerEj>
 828c3c5:	83 ec 04             	sub    $0x4,%esp
 828c3c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c3cb:	89 04 24             	mov    %eax,(%esp)
 828c3ce:	e8 79 19 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828c3d3:	c7 44 24 08 67 01 00 	movl   $0x167,0x8(%esp)
 828c3da:	00 
 828c3db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828c3e2:	00 
 828c3e3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c3e6:	89 04 24             	mov    %eax,(%esp)
 828c3e9:	e8 0e f5 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828c3ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828c3f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c3f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c3f8:	89 04 24             	mov    %eax,(%esp)
 828c3fb:	e8 3c f5 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c400:	8b 45 14             	mov    0x14(%ebp),%eax
 828c403:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c407:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c40a:	89 04 24             	mov    %eax,(%esp)
 828c40d:	e8 2a f5 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c412:	8b 45 18             	mov    0x18(%ebp),%eax
 828c415:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c419:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c41c:	89 04 24             	mov    %eax,(%esp)
 828c41f:	e8 18 f5 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c424:	8b 45 10             	mov    0x10(%ebp),%eax
 828c427:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c42b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c42e:	89 04 24             	mov    %eax,(%esp)
 828c431:	e8 06 f5 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c436:	8b 45 08             	mov    0x8(%ebp),%eax
 828c439:	8b 40 08             	mov    0x8(%eax),%eax
 828c43c:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 828c443:	00 
 828c444:	89 04 24             	mov    %eax,(%esp)
 828c447:	e8 38 11 e5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 828c44c:	89 c2                	mov    %eax,%edx
 828c44e:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 828c451:	8b 4d 18             	mov    0x18(%ebp),%ecx
 828c454:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828c458:	8b 4d 14             	mov    0x14(%ebp),%ecx
 828c45b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 828c45f:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c463:	89 04 24             	mov    %eax,(%esp)
 828c466:	e8 39 52 3b 00       	call   86416a4 <_ZN10CTitleBook13getTitleSlotRE24ENUM_TITLE_BOOK_CATEGORYi>
 828c46b:	83 ec 04             	sub    $0x4,%esp
 828c46e:	0f b7 45 ae          	movzwl -0x52(%ebp),%eax
 828c472:	0f b7 c0             	movzwl %ax,%eax
 828c475:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c479:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c47c:	89 04 24             	mov    %eax,(%esp)
 828c47f:	e8 20 da e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c484:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828c48b:	00 
 828c48c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c48f:	89 04 24             	mov    %eax,(%esp)
 828c492:	e8 c1 f4 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828c497:	8b 45 08             	mov    0x8(%ebp),%eax
 828c49a:	8b 40 08             	mov    0x8(%eax),%eax
 828c49d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 828c4a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c4a4:	89 04 24             	mov    %eax,(%esp)
 828c4a7:	e8 0e c1 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828c4ac:	eb 1b                	jmp    828c4c9 <_ZN12CAchievement13_sendCompleteEji24ENUM_TITLE_BOOK_CATEGORYi+0x125>
 828c4ae:	89 d3                	mov    %edx,%ebx
 828c4b0:	89 c6                	mov    %eax,%esi
 828c4b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c4b5:	89 04 24             	mov    %eax,(%esp)
 828c4b8:	e8 c3 19 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c4bd:	89 f0                	mov    %esi,%eax
 828c4bf:	89 da                	mov    %ebx,%edx
 828c4c1:	89 04 24             	mov    %eax,(%esp)
 828c4c4:	e8 87 72 85 00       	call   8ae3750 <_Unwind_Resume>
 828c4c9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c4cc:	89 04 24             	mov    %eax,(%esp)
 828c4cf:	e8 ac 19 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c4d4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828c4d7:	83 c4 00             	add    $0x0,%esp
 828c4da:	5b                   	pop    %ebx
 828c4db:	5e                   	pop    %esi
 828c4dc:	5d                   	pop    %ebp
 828c4dd:	c3                   	ret

```

```c
// CAchievement::_sendComplete @ 0x828c3a4

/* CAchievement::_sendComplete(unsigned int, int, ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall
CAchievement::_sendComplete
          (CAchievement *this,undefined4 param_1,int param_2,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined1 local_61 [11];
  ushort local_56;
  PacketGuard local_24 [12];
  int local_18 [3];
  
  _getTrigger((uint)local_18);
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0828c3e9 to 0828c4ab has its CatchHandler @ 0828c4ae */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x167);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18[0]);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,param_2);
  uVar1 = CUser::GetCharacExpandData(*(CUser **)(this + 8),0xe);
  CTitleBook::getTitleSlotR(local_61,uVar1,param_4,param_5);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_56);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(*(CUser **)(this + 8),local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## _sendCompleteReward

```asm
// === 0828bf2a CAchievement::_sendCompleteReward  [0x0828bf2a-0x828c085] ===
 828bf2a:	55                   	push   %ebp
 828bf2b:	89 e5                	mov    %esp,%ebp
 828bf2d:	56                   	push   %esi
 828bf2e:	53                   	push   %ebx
 828bf2f:	83 ec 70             	sub    $0x70,%esp
 828bf32:	8b 45 14             	mov    0x14(%ebp),%eax
 828bf35:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bf39:	8b 45 10             	mov    0x10(%ebp),%eax
 828bf3c:	89 04 24             	mov    %eax,(%esp)
 828bf3f:	e8 74 fd ff ff       	call   828bcb8 <_ZN12CAchievement14_getSectionIdxE24ENUM_TITLE_BOOK_CATEGORYi>
 828bf44:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828bf47:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 828bf4b:	0f 84 2d 01 00 00    	je     828c07e <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x154>
 828bf51:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 828bf54:	e8 42 02 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828bf59:	05 94 a7 00 00       	add    $0xa794,%eax
 828bf5e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828bf62:	89 04 24             	mov    %eax,(%esp)
 828bf65:	e8 c8 1d 00 00       	call   828dd32 <_ZNSt6vectorI14stTitleSectionSaIS0_EEixEj>
 828bf6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bf6e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 828bf71:	89 04 24             	mov    %eax,(%esp)
 828bf74:	e8 49 1b 00 00       	call   828dac2 <_ZN14stTitleSectionC1ERKS_>
 828bf79:	8d 45 a8             	lea    -0x58(%ebp),%eax
 828bf7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bf80:	8b 45 08             	mov    0x8(%ebp),%eax
 828bf83:	89 04 24             	mov    %eax,(%esp)
 828bf86:	e8 d3 fd ff ff       	call   828bd5e <_ZN12CAchievement16_getPostalRewardEP14stTitleSection>
 828bf8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828bf8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828bf92:	0f 84 d9 00 00 00    	je     828c071 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x147>
 828bf98:	8b 45 10             	mov    0x10(%ebp),%eax
 828bf9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828bf9f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 828bfa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bfa6:	8b 45 08             	mov    0x8(%ebp),%eax
 828bfa9:	89 04 24             	mov    %eax,(%esp)
 828bfac:	e8 15 fe ff ff       	call   828bdc6 <_ZN12CAchievement15_getTabCompleteEP14stTitleSection24ENUM_TITLE_BOOK_CATEGORY>
 828bfb1:	84 c0                	test   %al,%al
 828bfb3:	0f 84 b8 00 00 00    	je     828c071 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x147>
 828bfb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bfbc:	83 c0 10             	add    $0x10,%eax
 828bfbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bfc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828bfc6:	89 04 24             	mov    %eax,(%esp)
 828bfc9:	e8 e2 b9 47 00       	call   87079b0 <_ZNSsC1ERKSs>
 828bfce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bfd1:	83 c0 0c             	add    $0xc,%eax
 828bfd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bfd8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828bfdb:	89 04 24             	mov    %eax,(%esp)
 828bfde:	e8 cd b9 47 00       	call   87079b0 <_ZNSsC1ERKSs>
 828bfe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bfe6:	8b 50 1c             	mov    0x1c(%eax),%edx
 828bfe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828bfec:	8b 40 18             	mov    0x18(%eax),%eax
 828bfef:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 828bff2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828bff6:	8d 4d ec             	lea    -0x14(%ebp),%ecx
 828bff9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828bffd:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c001:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c005:	8b 45 08             	mov    0x8(%ebp),%eax
 828c008:	89 04 24             	mov    %eax,(%esp)
 828c00b:	e8 42 01 00 00       	call   828c152 <_ZN12CAchievement11_sendPostalEiiSsSs>
 828c010:	eb 15                	jmp    828c027 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0xfd>
 828c012:	89 d3                	mov    %edx,%ebx
 828c014:	89 c6                	mov    %eax,%esi
 828c016:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c019:	89 04 24             	mov    %eax,(%esp)
 828c01c:	e8 bf bb 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c021:	89 f0                	mov    %esi,%eax
 828c023:	89 da                	mov    %ebx,%edx
 828c025:	eb 0d                	jmp    828c034 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x10a>
 828c027:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c02a:	89 04 24             	mov    %eax,(%esp)
 828c02d:	e8 ae bb 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c032:	eb 15                	jmp    828c049 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x11f>
 828c034:	89 d3                	mov    %edx,%ebx
 828c036:	89 c6                	mov    %eax,%esi
 828c038:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c03b:	89 04 24             	mov    %eax,(%esp)
 828c03e:	e8 9d bb 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c043:	89 f0                	mov    %esi,%eax
 828c045:	89 da                	mov    %ebx,%edx
 828c047:	eb 0d                	jmp    828c056 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x12c>
 828c049:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c04c:	89 04 24             	mov    %eax,(%esp)
 828c04f:	e8 8c bb 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c054:	eb 1b                	jmp    828c071 <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x147>
 828c056:	89 d3                	mov    %edx,%ebx
 828c058:	89 c6                	mov    %eax,%esi
 828c05a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 828c05d:	89 04 24             	mov    %eax,(%esp)
 828c060:	e8 0d 19 00 00       	call   828d972 <_ZN14stTitleSectionD1Ev>
 828c065:	89 f0                	mov    %esi,%eax
 828c067:	89 da                	mov    %ebx,%edx
 828c069:	89 04 24             	mov    %eax,(%esp)
 828c06c:	e8 df 76 85 00       	call   8ae3750 <_Unwind_Resume>
 828c071:	8d 45 a8             	lea    -0x58(%ebp),%eax
 828c074:	89 04 24             	mov    %eax,(%esp)
 828c077:	e8 f6 18 00 00       	call   828d972 <_ZN14stTitleSectionD1Ev>
 828c07c:	eb 01                	jmp    828c07f <_ZN12CAchievement19_sendCompleteRewardEPK5Quest24ENUM_TITLE_BOOK_CATEGORYi+0x155>
 828c07e:	90                   	nop
 828c07f:	83 c4 70             	add    $0x70,%esp
 828c082:	5b                   	pop    %ebx
 828c083:	5e                   	pop    %esi
 828c084:	5d                   	pop    %ebp
 828c085:	c3                   	ret

```

```c
// CAchievement::_sendCompleteReward @ 0x828bf2a

/* CAchievement::_sendCompleteReward(Quest const*, ENUM_TITLE_BOOK_CATEGORY, int) */

void __thiscall
CAchievement::_sendCompleteReward
          (CAchievement *this,undefined4 param_1,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  stTitleSection *psVar4;
  stTitleSection local_5c [64];
  string local_1c [4];
  string local_18 [4];
  uint local_14;
  int local_10;
  
  uVar2 = _getSectionIdx(param_3,param_4);
  if (uVar2 != 0xffffffff) {
    local_14 = uVar2;
    iVar3 = G_CDataManager();
    psVar4 = (stTitleSection *)
             std::vector<stTitleSection,std::allocator<stTitleSection>>::operator[]
                       ((vector<stTitleSection,std::allocator<stTitleSection>> *)(iVar3 + 0xa794),
                        uVar2);
    stTitleSection::stTitleSection(local_5c,psVar4);
    local_10 = _getPostalReward(this,local_5c);
    if (local_10 != 0) {
                    /* try { // try from 0828bfac to 0828bfcd has its CatchHandler @ 0828c056 */
      cVar1 = _getTabComplete(this,local_5c,param_3);
      if (cVar1 != '\0') {
        std::string::string(local_1c,(string *)(local_10 + 0x10));
                    /* try { // try from 0828bfde to 0828bfe2 has its CatchHandler @ 0828c034 */
        std::string::string(local_18,(string *)(local_10 + 0xc));
                    /* try { // try from 0828c00b to 0828c00f has its CatchHandler @ 0828c012 */
        _sendPostal(this,*(int *)(local_10 + 0x18),*(int *)(local_10 + 0x1c),(string)local_18,
                    (string)local_1c);
                    /* try { // try from 0828c02d to 0828c031 has its CatchHandler @ 0828c034 */
        std::string::~string(local_18);
                    /* try { // try from 0828c04f to 0828c053 has its CatchHandler @ 0828c056 */
        std::string::~string(local_1c);
      }
    }
    stTitleSection::~stTitleSection(local_5c);
  }
  return;
}

```

---

## _sendEachAchieveReward

```asm
// === 0828c086 CAchievement::_sendEachAchieveReward  [0x0828c086-0x828c151] ===
 828c086:	55                   	push   %ebp
 828c087:	89 e5                	mov    %esp,%ebp
 828c089:	56                   	push   %esi
 828c08a:	53                   	push   %ebx
 828c08b:	83 ec 30             	sub    $0x30,%esp
 828c08e:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c091:	8b 80 a4 00 00 00    	mov    0xa4(%eax),%eax
 828c097:	85 c0                	test   %eax,%eax
 828c099:	0f 84 ab 00 00 00    	je     828c14a <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest+0xc4>
 828c09f:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c0a2:	05 a0 00 00 00       	add    $0xa0,%eax
 828c0a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c0ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828c0ae:	89 04 24             	mov    %eax,(%esp)
 828c0b1:	e8 fa b8 47 00       	call   87079b0 <_ZNSsC1ERKSs>
 828c0b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c0b9:	05 9c 00 00 00       	add    $0x9c,%eax
 828c0be:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c0c2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828c0c5:	89 04 24             	mov    %eax,(%esp)
 828c0c8:	e8 e3 b8 47 00       	call   87079b0 <_ZNSsC1ERKSs>
 828c0cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c0d0:	8b 90 a8 00 00 00    	mov    0xa8(%eax),%edx
 828c0d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c0d9:	8b 80 a4 00 00 00    	mov    0xa4(%eax),%eax
 828c0df:	8d 4d f0             	lea    -0x10(%ebp),%ecx
 828c0e2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828c0e6:	8d 4d f4             	lea    -0xc(%ebp),%ecx
 828c0e9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828c0ed:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c0f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c0f5:	8b 45 08             	mov    0x8(%ebp),%eax
 828c0f8:	89 04 24             	mov    %eax,(%esp)
 828c0fb:	e8 52 00 00 00       	call   828c152 <_ZN12CAchievement11_sendPostalEiiSsSs>
 828c100:	eb 15                	jmp    828c117 <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest+0x91>
 828c102:	89 d3                	mov    %edx,%ebx
 828c104:	89 c6                	mov    %eax,%esi
 828c106:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828c109:	89 04 24             	mov    %eax,(%esp)
 828c10c:	e8 cf ba 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c111:	89 f0                	mov    %esi,%eax
 828c113:	89 da                	mov    %ebx,%edx
 828c115:	eb 0d                	jmp    828c124 <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest+0x9e>
 828c117:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828c11a:	89 04 24             	mov    %eax,(%esp)
 828c11d:	e8 be ba 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c122:	eb 1b                	jmp    828c13f <_ZN12CAchievement22_sendEachAchieveRewardEPK5Quest+0xb9>
 828c124:	89 d3                	mov    %edx,%ebx
 828c126:	89 c6                	mov    %eax,%esi
 828c128:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828c12b:	89 04 24             	mov    %eax,(%esp)
 828c12e:	e8 ad ba 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c133:	89 f0                	mov    %esi,%eax
 828c135:	89 da                	mov    %ebx,%edx
 828c137:	89 04 24             	mov    %eax,(%esp)
 828c13a:	e8 11 76 85 00       	call   8ae3750 <_Unwind_Resume>
 828c13f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828c142:	89 04 24             	mov    %eax,(%esp)
 828c145:	e8 96 ba 47 00       	call   8707be0 <_ZNSsD1Ev>
 828c14a:	83 c4 30             	add    $0x30,%esp
 828c14d:	5b                   	pop    %ebx
 828c14e:	5e                   	pop    %esi
 828c14f:	5d                   	pop    %ebp
 828c150:	c3                   	ret
 828c151:	90                   	nop

```

```c
// CAchievement::_sendEachAchieveReward @ 0x828c086

/* CAchievement::_sendEachAchieveReward(Quest const*) */

void __thiscall CAchievement::_sendEachAchieveReward(CAchievement *this,Quest *param_1)

{
  string local_14 [4];
  string local_10 [4];
  
  if (*(int *)(param_1 + 0xa4) != 0) {
    std::string::string(local_14,(string *)(param_1 + 0xa0));
                    /* try { // try from 0828c0c8 to 0828c0cc has its CatchHandler @ 0828c124 */
    std::string::string(local_10,(string *)(param_1 + 0x9c));
                    /* try { // try from 0828c0fb to 0828c0ff has its CatchHandler @ 0828c102 */
    _sendPostal(this,*(int *)(param_1 + 0xa4),*(int *)(param_1 + 0xa8),(string)local_10,
                (string)local_14);
                    /* try { // try from 0828c11d to 0828c121 has its CatchHandler @ 0828c124 */
    std::string::~string(local_10);
    std::string::~string(local_14);
  }
  return;
}

```

---

## _sendPostal

```asm
// === 0828c152 CAchievement::_sendPostal  [0x0828c152-0x828c251] ===
 828c152:	55                   	push   %ebp
 828c153:	89 e5                	mov    %esp,%ebp
 828c155:	57                   	push   %edi
 828c156:	56                   	push   %esi
 828c157:	53                   	push   %ebx
 828c158:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 828c15e:	8d 45 a7             	lea    -0x59(%ebp),%eax
 828c161:	89 04 24             	mov    %eax,(%esp)
 828c164:	e8 eb f6 e3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 828c169:	e8 2d 00 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828c16e:	8b 55 0c             	mov    0xc(%ebp),%edx
 828c171:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c175:	89 04 24             	mov    %eax,(%esp)
 828c178:	e8 b5 38 0d 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 828c17d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 828c180:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 828c184:	0f 84 bb 00 00 00    	je     828c245 <_ZN12CAchievement11_sendPostalEiiSsSs+0xf3>
 828c18a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c18d:	89 45 a9             	mov    %eax,-0x57(%ebp)
 828c190:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828c193:	8b 00                	mov    (%eax),%eax
 828c195:	83 c0 08             	add    $0x8,%eax
 828c198:	8b 10                	mov    (%eax),%edx
 828c19a:	8d 45 a7             	lea    -0x59(%ebp),%eax
 828c19d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c1a1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828c1a4:	89 04 24             	mov    %eax,(%esp)
 828c1a7:	ff d2                	call   *%edx
 828c1a9:	8b 45 10             	mov    0x10(%ebp),%eax
 828c1ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c1b0:	8d 45 a7             	lea    -0x59(%ebp),%eax
 828c1b3:	89 04 24             	mov    %eax,(%esp)
 828c1b6:	e8 c9 f6 e3 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 828c1bb:	8b 45 08             	mov    0x8(%ebp),%eax
 828c1be:	8b 40 08             	mov    0x8(%eax),%eax
 828c1c1:	89 04 24             	mov    %eax,(%esp)
 828c1c4:	e8 c7 fa e3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 828c1c9:	89 c7                	mov    %eax,%edi
 828c1cb:	8b 45 18             	mov    0x18(%ebp),%eax
 828c1ce:	89 04 24             	mov    %eax,(%esp)
 828c1d1:	e8 8a a4 47 00       	call   8706660 <_ZNKSs4sizeEv>
 828c1d6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 828c1d9:	8b 45 18             	mov    0x18(%ebp),%eax
 828c1dc:	89 04 24             	mov    %eax,(%esp)
 828c1df:	e8 0c a3 47 00       	call   87064f0 <_ZNKSs5c_strEv>
 828c1e4:	89 c6                	mov    %eax,%esi
 828c1e6:	8b 45 08             	mov    0x8(%ebp),%eax
 828c1e9:	8b 40 08             	mov    0x8(%eax),%eax
 828c1ec:	89 04 24             	mov    %eax,(%esp)
 828c1ef:	e8 5a fa e3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 828c1f4:	89 c3                	mov    %eax,%ebx
 828c1f6:	8b 45 14             	mov    0x14(%ebp),%eax
 828c1f9:	89 04 24             	mov    %eax,(%esp)
 828c1fc:	e8 ef a2 47 00       	call   87064f0 <_ZNKSs5c_strEv>
 828c201:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 828c208:	00 
 828c209:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 828c210:	00 
 828c211:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 828c215:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 828c21c:	00 
 828c21d:	8b 55 94             	mov    -0x6c(%ebp),%edx
 828c220:	89 54 24 14          	mov    %edx,0x14(%esp)
 828c224:	89 74 24 10          	mov    %esi,0x10(%esp)
 828c228:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 828c22c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828c233:	00 
 828c234:	8d 55 a7             	lea    -0x59(%ebp),%edx
 828c237:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c23b:	89 04 24             	mov    %eax,(%esp)
 828c23e:	e8 a5 93 2c 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 828c243:	eb 01                	jmp    828c246 <_ZN12CAchievement11_sendPostalEiiSsSs+0xf4>
 828c245:	90                   	nop
 828c246:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 828c24c:	5b                   	pop    %ebx
 828c24d:	5e                   	pop    %esi
 828c24e:	5f                   	pop    %edi
 828c24f:	5d                   	pop    %ebp
 828c250:	c3                   	ret
 828c251:	90                   	nop

```

```c
// CAchievement::_sendPostal @ 0x828c152

/* CAchievement::_sendPostal(int, int, std::string, std::string) */

void __thiscall
CAchievement::_sendPostal(CAchievement *this,int param_1,int param_2,string param_3,string param_4)

{
  CDataManager *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Inven_Item local_5d [2];
  int local_5b;
  int *local_20;
  
  Inven_Item::Inven_Item(local_5d);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = (int *)CDataManager::find_item(this_00,param_1);
  if (local_20 != (int *)0x0) {
    local_5b = param_1;
    (**(code **)(*local_20 + 8))(local_20,local_5d);
    Inven_Item::set_add_info(local_5d,param_2);
    uVar1 = CUser::GetServerGroup(*(CUser **)(this + 8));
    uVar2 = std::string::size((string *)param_4._M_dataplus._M_p);
    uVar3 = std::string::c_str((string *)param_4._M_dataplus._M_p);
    uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 8));
    uVar5 = std::string::c_str((string *)param_3._M_dataplus._M_p);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(uVar5,local_5d,0,uVar4,uVar3,uVar2,0,uVar1,0,0)
    ;
  }
  return;
}

```

---

## _sendSetTrigger

```asm
// === 0828c252 CAchievement::_sendSetTrigger  [0x0828c252-0x828c3a3] ===
 828c252:	55                   	push   %ebp
 828c253:	89 e5                	mov    %esp,%ebp
 828c255:	56                   	push   %esi
 828c256:	53                   	push   %ebx
 828c257:	83 ec 40             	sub    $0x40,%esp
 828c25a:	8b 45 10             	mov    0x10(%ebp),%eax
 828c25d:	88 45 d4             	mov    %al,-0x2c(%ebp)
 828c260:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c263:	8b 55 0c             	mov    0xc(%ebp),%edx
 828c266:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c26a:	8b 55 08             	mov    0x8(%ebp),%edx
 828c26d:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c271:	89 04 24             	mov    %eax,(%esp)
 828c274:	e8 9b f8 ff ff       	call   828bb14 <_ZN12CAchievement11_getTriggerEj>
 828c279:	83 ec 04             	sub    $0x4,%esp
 828c27c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c27f:	89 04 24             	mov    %eax,(%esp)
 828c282:	e8 c5 1a 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828c287:	c7 44 24 08 a1 01 00 	movl   $0x1a1,0x8(%esp)
 828c28e:	00 
 828c28f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828c296:	00 
 828c297:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c29a:	89 04 24             	mov    %eax,(%esp)
 828c29d:	e8 5a f6 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828c2a2:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 828c2a6:	74 3a                	je     828c2e2 <_ZN12CAchievement15_sendSetTriggerEjh+0x90>
 828c2a8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828c2af:	00 
 828c2b0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c2b3:	89 04 24             	mov    %eax,(%esp)
 828c2b6:	e8 65 f6 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828c2bb:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 828c2bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c2c3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c2c6:	89 04 24             	mov    %eax,(%esp)
 828c2c9:	e8 52 f6 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828c2ce:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828c2d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c2d5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c2d8:	89 04 24             	mov    %eax,(%esp)
 828c2db:	e8 5c f6 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c2e0:	eb 67                	jmp    828c349 <_ZN12CAchievement15_sendSetTriggerEjh+0xf7>
 828c2e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828c2e9:	00 
 828c2ea:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c2ed:	89 04 24             	mov    %eax,(%esp)
 828c2f0:	e8 2b f6 e3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 828c2f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828c2f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c2fc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c2ff:	89 04 24             	mov    %eax,(%esp)
 828c302:	e8 35 f6 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c307:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 828c30b:	0f b7 c0             	movzwl %ax,%eax
 828c30e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c312:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c315:	89 04 24             	mov    %eax,(%esp)
 828c318:	e8 87 db e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c31d:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 828c321:	0f b7 c0             	movzwl %ax,%eax
 828c324:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c328:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c32b:	89 04 24             	mov    %eax,(%esp)
 828c32e:	e8 71 db e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c333:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 828c337:	0f b7 c0             	movzwl %ax,%eax
 828c33a:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c33e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c341:	89 04 24             	mov    %eax,(%esp)
 828c344:	e8 5b db e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c349:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828c350:	00 
 828c351:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c354:	89 04 24             	mov    %eax,(%esp)
 828c357:	e8 fc f5 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828c35c:	8b 45 08             	mov    0x8(%ebp),%eax
 828c35f:	8b 40 08             	mov    0x8(%eax),%eax
 828c362:	8d 55 e0             	lea    -0x20(%ebp),%edx
 828c365:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c369:	89 04 24             	mov    %eax,(%esp)
 828c36c:	e8 49 c2 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828c371:	eb 1b                	jmp    828c38e <_ZN12CAchievement15_sendSetTriggerEjh+0x13c>
 828c373:	89 d3                	mov    %edx,%ebx
 828c375:	89 c6                	mov    %eax,%esi
 828c377:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c37a:	89 04 24             	mov    %eax,(%esp)
 828c37d:	e8 fe 1a 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c382:	89 f0                	mov    %esi,%eax
 828c384:	89 da                	mov    %ebx,%edx
 828c386:	89 04 24             	mov    %eax,(%esp)
 828c389:	e8 c2 73 85 00       	call   8ae3750 <_Unwind_Resume>
 828c38e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c391:	89 04 24             	mov    %eax,(%esp)
 828c394:	e8 e7 1a 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c399:	8d 65 f8             	lea    -0x8(%ebp),%esp
 828c39c:	83 c4 00             	add    $0x0,%esp
 828c39f:	5b                   	pop    %ebx
 828c3a0:	5e                   	pop    %esi
 828c3a1:	5d                   	pop    %ebp
 828c3a2:	c3                   	ret
 828c3a3:	90                   	nop

```

```c
// CAchievement::_sendSetTrigger @ 0x828c252

/* CAchievement::_sendSetTrigger(unsigned int, unsigned char) */

void __thiscall CAchievement::_sendSetTrigger(CAchievement *this,uint param_1,uchar param_2)

{
  PacketGuard local_24 [12];
  int local_18;
  ushort local_14;
  ushort local_12;
  ushort local_10;
  
  _getTrigger((uint)&local_18);
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0828c29d to 0828c370 has its CatchHandler @ 0828c373 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1a1);
  if (param_2 == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_12);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)local_10);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,local_18);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(*(CUser **)(this + 8),local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## _setTrigger

```asm
// === 0828b896 CAchievement::_setTrigger  [0x0828b896-0x828bb13] ===
 828b896:	55                   	push   %ebp
 828b897:	89 e5                	mov    %esp,%ebp
 828b899:	53                   	push   %ebx
 828b89a:	83 ec 64             	sub    $0x64,%esp
 828b89d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 828b8a0:	8b 55 14             	mov    0x14(%ebp),%edx
 828b8a3:	8b 45 18             	mov    0x18(%ebp),%eax
 828b8a6:	66 89 4d b4          	mov    %cx,-0x4c(%ebp)
 828b8aa:	66 89 55 b0          	mov    %dx,-0x50(%ebp)
 828b8ae:	66 89 45 ac          	mov    %ax,-0x54(%ebp)
 828b8b2:	8b 45 08             	mov    0x8(%ebp),%eax
 828b8b5:	8d 48 0c             	lea    0xc(%eax),%ecx
 828b8b8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b8bb:	8d 55 0c             	lea    0xc(%ebp),%edx
 828b8be:	89 54 24 08          	mov    %edx,0x8(%esp)
 828b8c2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828b8c6:	89 04 24             	mov    %eax,(%esp)
 828b8c9:	e8 f0 24 00 00       	call   828ddbe <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 828b8ce:	83 ec 04             	sub    $0x4,%esp
 828b8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 828b8d4:	8d 50 0c             	lea    0xc(%eax),%edx
 828b8d7:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828b8da:	89 54 24 04          	mov    %edx,0x4(%esp)
 828b8de:	89 04 24             	mov    %eax,(%esp)
 828b8e1:	e8 04 25 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828b8e6:	83 ec 04             	sub    $0x4,%esp
 828b8e9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828b8ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b8f0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b8f3:	89 04 24             	mov    %eax,(%esp)
 828b8f6:	e8 15 25 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828b8fb:	84 c0                	test   %al,%al
 828b8fd:	0f 84 d4 00 00 00    	je     828b9d7 <_ZN12CAchievement11_setTriggerEjttt+0x141>
 828b903:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b906:	89 04 24             	mov    %eax,(%esp)
 828b909:	e8 16 25 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b90e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 828b912:	66 3b 45 b4          	cmp    -0x4c(%ebp),%ax
 828b916:	0f 93 c0             	setae  %al
 828b919:	84 c0                	test   %al,%al
 828b91b:	74 19                	je     828b936 <_ZN12CAchievement11_setTriggerEjttt+0xa0>
 828b91d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b920:	89 04 24             	mov    %eax,(%esp)
 828b923:	e8 fc 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b928:	0f b7 50 08          	movzwl 0x8(%eax),%edx
 828b92c:	66 2b 55 b4          	sub    -0x4c(%ebp),%dx
 828b930:	66 89 50 08          	mov    %dx,0x8(%eax)
 828b934:	eb 11                	jmp    828b947 <_ZN12CAchievement11_setTriggerEjttt+0xb1>
 828b936:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b939:	89 04 24             	mov    %eax,(%esp)
 828b93c:	e8 e3 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b941:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 828b947:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b94a:	89 04 24             	mov    %eax,(%esp)
 828b94d:	e8 d2 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b952:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 828b956:	66 3b 45 b0          	cmp    -0x50(%ebp),%ax
 828b95a:	0f 93 c0             	setae  %al
 828b95d:	84 c0                	test   %al,%al
 828b95f:	74 19                	je     828b97a <_ZN12CAchievement11_setTriggerEjttt+0xe4>
 828b961:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b964:	89 04 24             	mov    %eax,(%esp)
 828b967:	e8 b8 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b96c:	0f b7 50 0a          	movzwl 0xa(%eax),%edx
 828b970:	66 2b 55 b0          	sub    -0x50(%ebp),%dx
 828b974:	66 89 50 0a          	mov    %dx,0xa(%eax)
 828b978:	eb 11                	jmp    828b98b <_ZN12CAchievement11_setTriggerEjttt+0xf5>
 828b97a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b97d:	89 04 24             	mov    %eax,(%esp)
 828b980:	e8 9f 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b985:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 828b98b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b98e:	89 04 24             	mov    %eax,(%esp)
 828b991:	e8 8e 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b996:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 828b99a:	66 3b 45 ac          	cmp    -0x54(%ebp),%ax
 828b99e:	0f 93 c0             	setae  %al
 828b9a1:	84 c0                	test   %al,%al
 828b9a3:	74 1c                	je     828b9c1 <_ZN12CAchievement11_setTriggerEjttt+0x12b>
 828b9a5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b9a8:	89 04 24             	mov    %eax,(%esp)
 828b9ab:	e8 74 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b9b0:	0f b7 50 0c          	movzwl 0xc(%eax),%edx
 828b9b4:	66 2b 55 ac          	sub    -0x54(%ebp),%dx
 828b9b8:	66 89 50 0c          	mov    %dx,0xc(%eax)
 828b9bc:	e9 40 01 00 00       	jmp    828bb01 <_ZN12CAchievement11_setTriggerEjttt+0x26b>
 828b9c1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 828b9c4:	89 04 24             	mov    %eax,(%esp)
 828b9c7:	e8 58 24 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828b9cc:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 828b9d2:	e9 2a 01 00 00       	jmp    828bb01 <_ZN12CAchievement11_setTriggerEjttt+0x26b>
 828b9d7:	8d 45 b8             	lea    -0x48(%ebp),%eax
 828b9da:	89 04 24             	mov    %eax,(%esp)
 828b9dd:	e8 8e 1e 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828b9e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b9e5:	89 45 b8             	mov    %eax,-0x48(%ebp)
 828b9e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b9eb:	89 c3                	mov    %eax,%ebx
 828b9ed:	e8 a9 07 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828b9f2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b9f6:	89 04 24             	mov    %eax,(%esp)
 828b9f9:	e8 c8 43 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828b9fe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828ba01:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828ba05:	0f 84 03 01 00 00    	je     828bb0e <_ZN12CAchievement11_setTriggerEjttt+0x278>
 828ba0b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 828ba0e:	83 c0 08             	add    $0x8,%eax
 828ba11:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828ba15:	8d 45 b8             	lea    -0x48(%ebp),%eax
 828ba18:	83 c0 06             	add    $0x6,%eax
 828ba1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828ba1f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 828ba22:	83 c0 04             	add    $0x4,%eax
 828ba25:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ba29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828ba2c:	89 04 24             	mov    %eax,(%esp)
 828ba2f:	e8 80 75 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828ba34:	83 f0 01             	xor    $0x1,%eax
 828ba37:	84 c0                	test   %al,%al
 828ba39:	74 1f                	je     828ba5a <_ZN12CAchievement11_setTriggerEjttt+0x1c4>
 828ba3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828ba3e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828ba45:	00 
 828ba46:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ba4a:	8b 45 08             	mov    0x8(%ebp),%eax
 828ba4d:	89 04 24             	mov    %eax,(%esp)
 828ba50:	e8 fd 07 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828ba55:	e9 b5 00 00 00       	jmp    828bb0f <_ZN12CAchievement11_setTriggerEjttt+0x279>
 828ba5a:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 828ba5e:	66 3b 45 b4          	cmp    -0x4c(%ebp),%ax
 828ba62:	72 0e                	jb     828ba72 <_ZN12CAchievement11_setTriggerEjttt+0x1dc>
 828ba64:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 828ba68:	66 2b 45 b4          	sub    -0x4c(%ebp),%ax
 828ba6c:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 828ba70:	eb 06                	jmp    828ba78 <_ZN12CAchievement11_setTriggerEjttt+0x1e2>
 828ba72:	66 c7 45 bc 00 00    	movw   $0x0,-0x44(%ebp)
 828ba78:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 828ba7c:	66 3b 45 b0          	cmp    -0x50(%ebp),%ax
 828ba80:	72 0e                	jb     828ba90 <_ZN12CAchievement11_setTriggerEjttt+0x1fa>
 828ba82:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 828ba86:	66 2b 45 b0          	sub    -0x50(%ebp),%ax
 828ba8a:	66 89 45 be          	mov    %ax,-0x42(%ebp)
 828ba8e:	eb 06                	jmp    828ba96 <_ZN12CAchievement11_setTriggerEjttt+0x200>
 828ba90:	66 c7 45 be 00 00    	movw   $0x0,-0x42(%ebp)
 828ba96:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 828ba9a:	66 3b 45 ac          	cmp    -0x54(%ebp),%ax
 828ba9e:	72 0e                	jb     828baae <_ZN12CAchievement11_setTriggerEjttt+0x218>
 828baa0:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 828baa4:	66 2b 45 ac          	sub    -0x54(%ebp),%ax
 828baa8:	66 89 45 c0          	mov    %ax,-0x40(%ebp)
 828baac:	eb 06                	jmp    828bab4 <_ZN12CAchievement11_setTriggerEjttt+0x21e>
 828baae:	66 c7 45 c0 00 00    	movw   $0x0,-0x40(%ebp)
 828bab4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828bab7:	8d 55 b8             	lea    -0x48(%ebp),%edx
 828baba:	89 54 24 08          	mov    %edx,0x8(%esp)
 828babe:	8d 55 b8             	lea    -0x48(%ebp),%edx
 828bac1:	89 54 24 04          	mov    %edx,0x4(%esp)
 828bac5:	89 04 24             	mov    %eax,(%esp)
 828bac8:	e8 64 23 00 00       	call   828de31 <_ZSt9make_pairIRjR13stAchievementESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 828bacd:	83 ec 04             	sub    $0x4,%esp
 828bad0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 828bad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 828bad7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 828bada:	89 04 24             	mov    %eax,(%esp)
 828badd:	e8 8e 23 00 00       	call   828de70 <_ZNSt4pairIKj13stAchievementEC1IjS1_EEOS_IT_T0_E>
 828bae2:	8b 45 08             	mov    0x8(%ebp),%eax
 828bae5:	8d 48 0c             	lea    0xc(%eax),%ecx
 828bae8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828baeb:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 828baee:	89 54 24 08          	mov    %edx,0x8(%esp)
 828baf2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828baf6:	89 04 24             	mov    %eax,(%esp)
 828baf9:	e8 ae 23 00 00       	call   828deac <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 828bafe:	83 ec 04             	sub    $0x4,%esp
 828bb01:	8b 45 08             	mov    0x8(%ebp),%eax
 828bb04:	89 04 24             	mov    %eax,(%esp)
 828bb07:	e8 b8 d0 e3 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 828bb0c:	eb 01                	jmp    828bb0f <_ZN12CAchievement11_setTriggerEjttt+0x279>
 828bb0e:	90                   	nop
 828bb0f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 828bb12:	c9                   	leave
 828bb13:	c3                   	ret

```

```c
// CAchievement::_setTrigger @ 0x828b896

/* CAchievement::_setTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

void __thiscall
CAchievement::_setTrigger
          (CAchievement *this,uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  uint local_4c;
  ushort local_48;
  ushort local_46;
  ushort local_44 [2];
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_40 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_3c [4];
  pair local_38 [8];
  pair<unsigned_int_const,stAchievement> local_30 [16];
  uint local_20 [4];
  Quest *local_10;
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_40);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_3c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_40,(_Rb_tree_iterator *)local_3c);
  if (cVar1 == '\0') {
    stAchievement::stAchievement((stAchievement *)&local_4c);
    local_4c = param_1;
    iVar2 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar2);
    if (local_10 == (Quest *)0x0) {
      return;
    }
    cVar1 = Quest::get_init_achievement_trigger(local_10,&local_48,&local_46,local_44);
    if (cVar1 != '\x01') {
      _sendSetTrigger(this,param_1,'\x01');
      return;
    }
    if (local_48 < param_2) {
      local_48 = 0;
    }
    else {
      local_48 = local_48 - param_2;
    }
    if (local_46 < param_3) {
      local_46 = 0;
    }
    else {
      local_46 = local_46 - param_3;
    }
    if (local_44[0] < param_4) {
      local_44[0] = 0;
    }
    else {
      local_44[0] = local_44[0] - param_4;
    }
    std::make_pair<unsigned_int&,stAchievement&>(local_20,(stAchievement *)&local_4c);
    std::pair<unsigned_int_const,stAchievement>::pair<unsigned_int,stAchievement>
              (local_30,(pair *)local_20);
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::insert(local_38);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 8) < param_2) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 8) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 8) = *(short *)(iVar2 + 8) - param_2;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 10) < param_3) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 10) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 10) = *(short *)(iVar2 + 10) - param_3;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_40);
    if (*(ushort *)(iVar2 + 0xc) < param_4) {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(undefined2 *)(iVar2 + 0xc) = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                        (local_40);
      *(ushort *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) - param_4;
    }
  }
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## _verifyAchievement

```asm
// === 0828d092 CAchievement::_verifyAchievement  [0x0828d092-0x828d337] ===
 828d092:	55                   	push   %ebp
 828d093:	89 e5                	mov    %esp,%ebp
 828d095:	53                   	push   %ebx
 828d096:	83 ec 54             	sub    $0x54,%esp
 828d099:	e8 fd f0 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d09e:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 828d0a4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d0a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d0ab:	89 04 24             	mov    %eax,(%esp)
 828d0ae:	e8 7f 11 00 00       	call   828e232 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE5beginEv>
 828d0b3:	83 ec 04             	sub    $0x4,%esp
 828d0b6:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 828d0bd:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 828d0c4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 828d0cb:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 828d0d2:	c7 45 e0 04 00 00 00 	movl   $0x4,-0x20(%ebp)
 828d0d9:	e9 20 01 00 00       	jmp    828d1fe <_ZN12CAchievement18_verifyAchievementEj+0x16c>
 828d0de:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 828d0e5:	e9 e5 00 00 00       	jmp    828d1cf <_ZN12CAchievement18_verifyAchievementEj+0x13d>
 828d0ea:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d0ed:	89 04 24             	mov    %eax,(%esp)
 828d0f0:	e8 fd 0e 00 00       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 828d0f5:	8d 50 04             	lea    0x4(%eax),%edx
 828d0f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828d0fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d0ff:	89 14 24             	mov    %edx,(%esp)
 828d102:	e8 0b 10 00 00       	call   828e112 <_ZNSt6vectorI14stTitleElementSaIS0_EEixEj>
 828d107:	8b 40 1c             	mov    0x1c(%eax),%eax
 828d10a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 828d10d:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 828d111:	0f 84 b4 00 00 00    	je     828d1cb <_ZN12CAchievement18_verifyAchievementEj+0x139>
 828d117:	e8 7f f0 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d11c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 828d11f:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d123:	89 04 24             	mov    %eax,(%esp)
 828d126:	e8 9b 2c 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828d12b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828d12e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828d132:	0f 84 8f 00 00 00    	je     828d1c7 <_ZN12CAchievement18_verifyAchievementEj+0x135>
 828d138:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828d13b:	8b 40 08             	mov    0x8(%eax),%eax
 828d13e:	83 f8 07             	cmp    $0x7,%eax
 828d141:	75 1f                	jne    828d162 <_ZN12CAchievement18_verifyAchievementEj+0xd0>
 828d143:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828d146:	8b 40 7c             	mov    0x7c(%eax),%eax
 828d149:	83 f8 0c             	cmp    $0xc,%eax
 828d14c:	75 14                	jne    828d162 <_ZN12CAchievement18_verifyAchievementEj+0xd0>
 828d14e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828d151:	05 84 00 00 00       	add    $0x84,%eax
 828d156:	89 04 24             	mov    %eax,(%esp)
 828d159:	e8 62 10 e0 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 828d15e:	85 c0                	test   %eax,%eax
 828d160:	75 07                	jne    828d169 <_ZN12CAchievement18_verifyAchievementEj+0xd7>
 828d162:	b8 01 00 00 00       	mov    $0x1,%eax
 828d167:	eb 05                	jmp    828d16e <_ZN12CAchievement18_verifyAchievementEj+0xdc>
 828d169:	b8 00 00 00 00       	mov    $0x0,%eax
 828d16e:	84 c0                	test   %al,%al
 828d170:	75 58                	jne    828d1ca <_ZN12CAchievement18_verifyAchievementEj+0x138>
 828d172:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828d175:	05 84 00 00 00       	add    $0x84,%eax
 828d17a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828d181:	00 
 828d182:	89 04 24             	mov    %eax,(%esp)
 828d185:	e8 ea d3 e5 ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 828d18a:	8b 00                	mov    (%eax),%eax
 828d18c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 828d18f:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 828d192:	8b 45 08             	mov    0x8(%ebp),%eax
 828d195:	8b 40 08             	mov    0x8(%eax),%eax
 828d198:	89 04 24             	mov    %eax,(%esp)
 828d19b:	e8 06 d7 f0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 828d1a0:	83 c0 04             	add    $0x4,%eax
 828d1a3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828d1a7:	89 04 24             	mov    %eax,(%esp)
 828d1aa:	e8 31 e9 df ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 828d1af:	84 c0                	test   %al,%al
 828d1b1:	74 18                	je     828d1cb <_ZN12CAchievement18_verifyAchievementEj+0x139>
 828d1b3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 828d1b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d1ba:	8b 45 08             	mov    0x8(%ebp),%eax
 828d1bd:	89 04 24             	mov    %eax,(%esp)
 828d1c0:	e8 91 fa ff ff       	call   828cc56 <_ZN12CAchievement11_forceClearEj>
 828d1c5:	eb 04                	jmp    828d1cb <_ZN12CAchievement18_verifyAchievementEj+0x139>
 828d1c7:	90                   	nop
 828d1c8:	eb 01                	jmp    828d1cb <_ZN12CAchievement18_verifyAchievementEj+0x139>
 828d1ca:	90                   	nop
 828d1cb:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 828d1cf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d1d2:	89 04 24             	mov    %eax,(%esp)
 828d1d5:	e8 18 0e 00 00       	call   828dff2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEptEv>
 828d1da:	83 c0 04             	add    $0x4,%eax
 828d1dd:	89 04 24             	mov    %eax,(%esp)
 828d1e0:	e8 73 10 00 00       	call   828e258 <_ZNKSt6vectorI14stTitleElementSaIS0_EE4sizeEv>
 828d1e5:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 828d1e8:	0f 97 c0             	seta   %al
 828d1eb:	84 c0                	test   %al,%al
 828d1ed:	0f 85 f7 fe ff ff    	jne    828d0ea <_ZN12CAchievement18_verifyAchievementEj+0x58>
 828d1f3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d1f6:	89 04 24             	mov    %eax,(%esp)
 828d1f9:	e8 7c 10 00 00       	call   828e27a <_ZNSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEppEv>
 828d1fe:	e8 98 ef e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828d203:	8d 90 a0 a7 00 00    	lea    0xa7a0(%eax),%edx
 828d209:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d20c:	89 54 24 04          	mov    %edx,0x4(%esp)
 828d210:	89 04 24             	mov    %eax,(%esp)
 828d213:	e8 a0 0d 00 00       	call   828dfb8 <_ZNSt3mapIiSt6vectorI14stTitleElementSaIS1_EESt4lessIiESaISt4pairIKiS3_EEE3endEv>
 828d218:	83 ec 04             	sub    $0x4,%esp
 828d21b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828d21e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d222:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828d225:	89 04 24             	mov    %eax,(%esp)
 828d228:	e8 b1 0d 00 00       	call   828dfde <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorI14stTitleElementSaIS3_EEEEneERKS7_>
 828d22d:	84 c0                	test   %al,%al
 828d22f:	0f 85 a9 fe ff ff    	jne    828d0de <_ZN12CAchievement18_verifyAchievementEj+0x4c>
 828d235:	c7 45 c0 83 19 00 00 	movl   $0x1983,-0x40(%ebp)
 828d23c:	c7 45 c4 8b 19 00 00 	movl   $0x198b,-0x3c(%ebp)
 828d243:	8b 45 08             	mov    0x8(%ebp),%eax
 828d246:	8b 40 08             	mov    0x8(%eax),%eax
 828d249:	89 04 24             	mov    %eax,(%esp)
 828d24c:	e8 67 d0 e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 828d251:	83 f8 45             	cmp    $0x45,%eax
 828d254:	0f 9e c0             	setle  %al
 828d257:	84 c0                	test   %al,%al
 828d259:	74 30                	je     828d28b <_ZN12CAchievement18_verifyAchievementEj+0x1f9>
 828d25b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828d262:	eb 1a                	jmp    828d27e <_ZN12CAchievement18_verifyAchievementEj+0x1ec>
 828d264:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828d267:	8b 44 85 c0          	mov    -0x40(%ebp,%eax,4),%eax
 828d26b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d26f:	8b 45 08             	mov    0x8(%ebp),%eax
 828d272:	89 04 24             	mov    %eax,(%esp)
 828d275:	e8 c6 fb ff ff       	call   828ce40 <_ZN12CAchievement11_forceResetEj>
 828d27a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828d27e:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 828d282:	0f 9e c0             	setle  %al
 828d285:	84 c0                	test   %al,%al
 828d287:	75 db                	jne    828d264 <_ZN12CAchievement18_verifyAchievementEj+0x1d2>
 828d289:	eb 2b                	jmp    828d2b6 <_ZN12CAchievement18_verifyAchievementEj+0x224>
 828d28b:	8b 45 08             	mov    0x8(%ebp),%eax
 828d28e:	8b 40 08             	mov    0x8(%eax),%eax
 828d291:	89 04 24             	mov    %eax,(%esp)
 828d294:	e8 1f d0 e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 828d299:	83 f8 45             	cmp    $0x45,%eax
 828d29c:	0f 9f c0             	setg   %al
 828d29f:	84 c0                	test   %al,%al
 828d2a1:	74 13                	je     828d2b6 <_ZN12CAchievement18_verifyAchievementEj+0x224>
 828d2a3:	c7 44 24 04 83 19 00 	movl   $0x1983,0x4(%esp)
 828d2aa:	00 
 828d2ab:	8b 45 08             	mov    0x8(%ebp),%eax
 828d2ae:	89 04 24             	mov    %eax,(%esp)
 828d2b1:	e8 a0 f9 ff ff       	call   828cc56 <_ZN12CAchievement11_forceClearEj>
 828d2b6:	c7 45 b8 83 00 00 00 	movl   $0x83,-0x48(%ebp)
 828d2bd:	c7 45 bc 87 00 00 00 	movl   $0x87,-0x44(%ebp)
 828d2c4:	c7 45 e4 c0 19 00 00 	movl   $0x19c0,-0x1c(%ebp)
 828d2cb:	8b 45 08             	mov    0x8(%ebp),%eax
 828d2ce:	8b 40 08             	mov    0x8(%eax),%eax
 828d2d1:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 828d2d8:	00 
 828d2d9:	89 04 24             	mov    %eax,(%esp)
 828d2dc:	e8 fd e2 ff ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 828d2e1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 828d2e4:	8b 45 b8             	mov    -0x48(%ebp),%eax
 828d2e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d2eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828d2ee:	89 04 24             	mov    %eax,(%esp)
 828d2f1:	e8 04 7e 35 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 828d2f6:	84 c0                	test   %al,%al
 828d2f8:	75 16                	jne    828d310 <_ZN12CAchievement18_verifyAchievementEj+0x27e>
 828d2fa:	8b 45 bc             	mov    -0x44(%ebp),%eax
 828d2fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d301:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828d304:	89 04 24             	mov    %eax,(%esp)
 828d307:	e8 ee 7d 35 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 828d30c:	84 c0                	test   %al,%al
 828d30e:	74 07                	je     828d317 <_ZN12CAchievement18_verifyAchievementEj+0x285>
 828d310:	b8 01 00 00 00       	mov    $0x1,%eax
 828d315:	eb 05                	jmp    828d31c <_ZN12CAchievement18_verifyAchievementEj+0x28a>
 828d317:	b8 00 00 00 00       	mov    $0x0,%eax
 828d31c:	84 c0                	test   %al,%al
 828d31e:	74 12                	je     828d332 <_ZN12CAchievement18_verifyAchievementEj+0x2a0>
 828d320:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 828d323:	89 44 24 04          	mov    %eax,0x4(%esp)
 828d327:	8b 45 08             	mov    0x8(%ebp),%eax
 828d32a:	89 04 24             	mov    %eax,(%esp)
 828d32d:	e8 24 f9 ff ff       	call   828cc56 <_ZN12CAchievement11_forceClearEj>
 828d332:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 828d335:	c9                   	leave
 828d336:	c3                   	ret
 828d337:	90                   	nop

```

```c
// CAchievement::_verifyAchievement @ 0x828d092

/* CAchievement::_verifyAchievement(unsigned int) */

void CAchievement::_verifyAchievement(uint param_1)

{
  bool bVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_3c [4];
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  local_38 [4];
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  CMissionList_Charac *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  G_CDataManager();
  std::
  map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
  ::begin(local_3c);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 4;
  while( true ) {
    G_CDataManager();
    std::
    map<int,std::vector<stTitleElement,std::allocator<stTitleElement>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>>
    ::end(local_38);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
            ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                          *)local_3c,(_Rb_tree_iterator *)local_38);
    if (cVar2 == '\0') break;
    local_18 = 0;
    while( true ) {
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)local_3c);
      uVar4 = std::vector<stTitleElement,std::allocator<stTitleElement>>::size
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar5 + 4));
      if (uVar4 <= local_18) break;
      iVar5 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
              ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                            *)local_3c);
      iVar5 = std::vector<stTitleElement,std::allocator<stTitleElement>>::operator[]
                        ((vector<stTitleElement,std::allocator<stTitleElement>> *)(iVar5 + 4),
                         local_18);
      local_34 = *(uint *)(iVar5 + 0x1c);
      if (local_34 != 0xffffffff) {
        iVar5 = G_CDataManager();
        local_14 = CDataManager::find_quest(iVar5);
        if (local_14 != 0) {
          if (((*(int *)(local_14 + 8) == 7) && (*(int *)(local_14 + 0x7c) == 0xc)) &&
             (iVar5 = std::vector<int,std::allocator<int>>::size
                                ((vector<int,std::allocator<int>> *)(local_14 + 0x84)), iVar5 != 0))
          {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) {
            puVar3 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                                       ((vector<int,std::allocator<int>> *)(local_14 + 0x84),0);
            uVar4 = *puVar3;
            local_30 = uVar4;
            iVar5 = CUser::getCurCharacQuestR(*(CUser **)(param_1 + 8));
            cVar2 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar5 + 4),uVar4);
            if (cVar2 != '\0') {
              _forceClear((CAchievement *)param_1,local_34);
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    std::
    _Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
    ::operator++((_Rb_tree_iterator<std::pair<int_const,std::vector<stTitleElement,std::allocator<stTitleElement>>>>
                  *)local_3c);
  }
  iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
  if (iVar5 < 0x46) {
    for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
      _forceReset(param_1);
    }
  }
  else {
    iVar5 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
    if (0x45 < iVar5) {
      _forceClear((CAchievement *)param_1,0x1983);
    }
  }
  local_20 = 0x19c0;
  local_1c = (CMissionList_Charac *)CUser::GetCharacExpandDataR(*(CUser **)(param_1 + 8),8);
  cVar2 = CMissionList_Charac::isClearMission(local_1c,0x83);
  if ((cVar2 == '\0') && (cVar2 = CMissionList_Charac::isClearMission(local_1c,0x87), cVar2 == '\0')
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    _forceClear((CAchievement *)param_1,local_20);
  }
  return;
}

```

---

## _verifyTrigger

```asm
// === 0828b800 CAchievement::_verifyTrigger  [0x0828b800-0x828b895] ===
 828b800:	55                   	push   %ebp
 828b801:	89 e5                	mov    %esp,%ebp
 828b803:	83 ec 58             	sub    $0x58,%esp
 828b806:	8b 4d 10             	mov    0x10(%ebp),%ecx
 828b809:	8b 55 14             	mov    0x14(%ebp),%edx
 828b80c:	8b 45 18             	mov    0x18(%ebp),%eax
 828b80f:	66 89 4d c4          	mov    %cx,-0x3c(%ebp)
 828b813:	66 89 55 c0          	mov    %dx,-0x40(%ebp)
 828b817:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 828b81b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b81e:	3d 8b 19 00 00       	cmp    $0x198b,%eax
 828b823:	74 47                	je     828b86c <_ZN12CAchievement14_verifyTriggerEjttt+0x6c>
 828b825:	3d c4 19 00 00       	cmp    $0x19c4,%eax
 828b82a:	74 09                	je     828b835 <_ZN12CAchievement14_verifyTriggerEjttt+0x35>
 828b82c:	3d 83 19 00 00       	cmp    $0x1983,%eax
 828b831:	74 39                	je     828b86c <_ZN12CAchievement14_verifyTriggerEjttt+0x6c>
 828b833:	eb 5a                	jmp    828b88f <_ZN12CAchievement14_verifyTriggerEjttt+0x8f>
 828b835:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 828b83c:	e8 5d 04 e4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 828b841:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828b844:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828b847:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b84b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828b84e:	89 04 24             	mov    %eax,(%esp)
 828b851:	e8 0a 2b df ff       	call   807e360 <localtime_r@plt>
 828b856:	8b 45 d0             	mov    -0x30(%ebp),%eax
 828b859:	85 c0                	test   %eax,%eax
 828b85b:	78 2e                	js     828b88b <_ZN12CAchievement14_verifyTriggerEjttt+0x8b>
 828b85d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 828b860:	83 f8 14             	cmp    $0x14,%eax
 828b863:	7f 29                	jg     828b88e <_ZN12CAchievement14_verifyTriggerEjttt+0x8e>
 828b865:	b8 00 00 00 00       	mov    $0x0,%eax
 828b86a:	eb 28                	jmp    828b894 <_ZN12CAchievement14_verifyTriggerEjttt+0x94>
 828b86c:	8b 45 08             	mov    0x8(%ebp),%eax
 828b86f:	8b 40 08             	mov    0x8(%eax),%eax
 828b872:	89 04 24             	mov    %eax,(%esp)
 828b875:	e8 3e ea e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 828b87a:	83 f8 45             	cmp    $0x45,%eax
 828b87d:	0f 9e c0             	setle  %al
 828b880:	84 c0                	test   %al,%al
 828b882:	74 0b                	je     828b88f <_ZN12CAchievement14_verifyTriggerEjttt+0x8f>
 828b884:	b8 00 00 00 00       	mov    $0x0,%eax
 828b889:	eb 09                	jmp    828b894 <_ZN12CAchievement14_verifyTriggerEjttt+0x94>
 828b88b:	90                   	nop
 828b88c:	eb 01                	jmp    828b88f <_ZN12CAchievement14_verifyTriggerEjttt+0x8f>
 828b88e:	90                   	nop
 828b88f:	b8 01 00 00 00       	mov    $0x1,%eax
 828b894:	c9                   	leave
 828b895:	c3                   	ret

```

```c
// CAchievement::_verifyTrigger @ 0x828b800

/* CAchievement::_verifyTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

undefined4 CAchievement::_verifyTrigger(uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined2 in_stack_0000000a;
  tm local_3c;
  time_t local_10 [3];
  
  if (_param_2 != 0x198b) {
    if (_param_2 == 0x19c4) {
      local_10[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      localtime_r(local_10,&local_3c);
      if (local_3c.tm_hour < 0) {
        return 1;
      }
      if (0x14 < local_3c.tm_hour) {
        return 1;
      }
      return 0;
    }
    if (_param_2 != 0x1983) {
      return 1;
    }
  }
  iVar1 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(param_1 + 8));
  if (0x45 < iVar1) {
    return 1;
  }
  return 0;
}

```

---

## adjust

```asm
// === 0828c976 CAchievement::adjust  [0x0828c976-0x828cbe3] ===
 828c976:	55                   	push   %ebp
 828c977:	89 e5                	mov    %esp,%ebp
 828c979:	53                   	push   %ebx
 828c97a:	83 ec 64             	sub    $0x64,%esp
 828c97d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 828c984:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 828c98b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 828c992:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 828c999:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 828c9a0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 828c9a7:	e9 33 01 00 00       	jmp    828cadf <_ZN12CAchievement6adjustEv+0x169>
 828c9ac:	e8 ea f7 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828c9b1:	8d 90 c4 a7 00 00    	lea    0xa7c4(%eax),%edx
 828c9b7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828c9ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c9be:	89 14 24             	mov    %edx,(%esp)
 828c9c1:	e8 52 18 00 00       	call   828e218 <_ZNSt6vectorI8stAdjustSaIS0_EEixEj>
 828c9c6:	8b 00                	mov    (%eax),%eax
 828c9c8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 828c9cb:	e8 cb f7 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828c9d0:	8d 90 c4 a7 00 00    	lea    0xa7c4(%eax),%edx
 828c9d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 828c9d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c9dd:	89 14 24             	mov    %edx,(%esp)
 828c9e0:	e8 33 18 00 00       	call   828e218 <_ZNSt6vectorI8stAdjustSaIS0_EEixEj>
 828c9e5:	8b 40 08             	mov    0x8(%eax),%eax
 828c9e8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 828c9eb:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 828c9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 828c9f1:	8b 40 08             	mov    0x8(%eax),%eax
 828c9f4:	89 04 24             	mov    %eax,(%esp)
 828c9f7:	e8 aa de f0 ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 828c9fc:	83 c0 04             	add    $0x4,%eax
 828c9ff:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828ca03:	89 04 24             	mov    %eax,(%esp)
 828ca06:	e8 d5 f0 df ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 828ca0b:	84 c0                	test   %al,%al
 828ca0d:	0f 84 c8 00 00 00    	je     828cadb <_ZN12CAchievement6adjustEv+0x165>
 828ca13:	e8 83 f7 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828ca18:	8b 55 e8             	mov    -0x18(%ebp),%edx
 828ca1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 828ca1f:	89 04 24             	mov    %eax,(%esp)
 828ca22:	e8 9f 33 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828ca27:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828ca2a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 828ca2e:	0f 84 a3 00 00 00    	je     828cad7 <_ZN12CAchievement6adjustEv+0x161>
 828ca34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828ca37:	8b 40 08             	mov    0x8(%eax),%eax
 828ca3a:	83 f8 07             	cmp    $0x7,%eax
 828ca3d:	0f 85 97 00 00 00    	jne    828cada <_ZN12CAchievement6adjustEv+0x164>
 828ca43:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828ca46:	89 04 24             	mov    %eax,(%esp)
 828ca49:	e8 22 0e 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828ca4e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828ca51:	83 c0 08             	add    $0x8,%eax
 828ca54:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828ca58:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828ca5b:	83 c0 06             	add    $0x6,%eax
 828ca5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 828ca62:	8d 45 cc             	lea    -0x34(%ebp),%eax
 828ca65:	83 c0 04             	add    $0x4,%eax
 828ca68:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ca6c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828ca6f:	89 04 24             	mov    %eax,(%esp)
 828ca72:	e8 3d 65 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828ca77:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 828ca7b:	0f b7 d8             	movzwl %ax,%ebx
 828ca7e:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 828ca82:	0f b7 c8             	movzwl %ax,%ecx
 828ca85:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 828ca89:	0f b7 d0             	movzwl %ax,%edx
 828ca8c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 828ca8f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 828ca93:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828ca97:	89 54 24 08          	mov    %edx,0x8(%esp)
 828ca9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 828ca9f:	8b 45 08             	mov    0x8(%ebp),%eax
 828caa2:	89 04 24             	mov    %eax,(%esp)
 828caa5:	e8 ec ed ff ff       	call   828b896 <_ZN12CAchievement11_setTriggerEjttt>
 828caaa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828caad:	89 04 24             	mov    %eax,(%esp)
 828cab0:	e8 cd 65 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828cab5:	8b 55 08             	mov    0x8(%ebp),%edx
 828cab8:	8b 52 08             	mov    0x8(%edx),%edx
 828cabb:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 828cabe:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828cac2:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 828cac5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 828cac9:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cacd:	89 14 24             	mov    %edx,(%esp)
 828cad0:	e8 b3 53 3b 00       	call   8641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>
 828cad5:	eb 04                	jmp    828cadb <_ZN12CAchievement6adjustEv+0x165>
 828cad7:	90                   	nop
 828cad8:	eb 01                	jmp    828cadb <_ZN12CAchievement6adjustEv+0x165>
 828cada:	90                   	nop
 828cadb:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 828cadf:	e8 b7 f6 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828cae4:	05 c4 a7 00 00       	add    $0xa7c4,%eax
 828cae9:	89 04 24             	mov    %eax,(%esp)
 828caec:	e8 05 17 00 00       	call   828e1f6 <_ZNKSt6vectorI8stAdjustSaIS0_EE4sizeEv>
 828caf1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 828caf4:	0f 97 c0             	seta   %al
 828caf7:	84 c0                	test   %al,%al
 828caf9:	0f 85 ad fe ff ff    	jne    828c9ac <_ZN12CAchievement6adjustEv+0x36>
 828caff:	8b 45 08             	mov    0x8(%ebp),%eax
 828cb02:	8b 40 08             	mov    0x8(%eax),%eax
 828cb05:	89 04 24             	mov    %eax,(%esp)
 828cb08:	e8 ab d7 e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 828cb0d:	83 f8 46             	cmp    $0x46,%eax
 828cb10:	0f 94 c0             	sete   %al
 828cb13:	84 c0                	test   %al,%al
 828cb15:	0f 84 b5 00 00 00    	je     828cbd0 <_ZN12CAchievement6adjustEv+0x25a>
 828cb1b:	e8 7b f6 e3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828cb20:	c7 44 24 04 83 19 00 	movl   $0x1983,0x4(%esp)
 828cb27:	00 
 828cb28:	89 04 24             	mov    %eax,(%esp)
 828cb2b:	e8 96 32 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828cb30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828cb33:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828cb37:	0f 84 a0 00 00 00    	je     828cbdd <_ZN12CAchievement6adjustEv+0x267>
 828cb3d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 828cb40:	89 04 24             	mov    %eax,(%esp)
 828cb43:	e8 28 0d 00 00       	call   828d870 <_ZN13stAchievementC1Ev>
 828cb48:	8d 45 c0             	lea    -0x40(%ebp),%eax
 828cb4b:	83 c0 08             	add    $0x8,%eax
 828cb4e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 828cb52:	8d 45 c0             	lea    -0x40(%ebp),%eax
 828cb55:	83 c0 06             	add    $0x6,%eax
 828cb58:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cb5c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 828cb5f:	83 c0 04             	add    $0x4,%eax
 828cb62:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cb66:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828cb69:	89 04 24             	mov    %eax,(%esp)
 828cb6c:	e8 43 64 0c 00       	call   8352fb4 <_ZNK5Quest28get_init_achievement_triggerERtS0_S0_>
 828cb71:	0f b7 45 c8          	movzwl -0x38(%ebp),%eax
 828cb75:	0f b7 c8             	movzwl %ax,%ecx
 828cb78:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 828cb7c:	0f b7 d0             	movzwl %ax,%edx
 828cb7f:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 828cb83:	0f b7 c0             	movzwl %ax,%eax
 828cb86:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828cb8a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828cb8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 828cb92:	c7 44 24 04 83 19 00 	movl   $0x1983,0x4(%esp)
 828cb99:	00 
 828cb9a:	8b 45 08             	mov    0x8(%ebp),%eax
 828cb9d:	89 04 24             	mov    %eax,(%esp)
 828cba0:	e8 f1 ec ff ff       	call   828b896 <_ZN12CAchievement11_setTriggerEjttt>
 828cba5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828cba8:	89 04 24             	mov    %eax,(%esp)
 828cbab:	e8 d2 64 0c 00       	call   8353082 <_ZNK5Quest16get_title_rewardEv>
 828cbb0:	8b 55 08             	mov    0x8(%ebp),%edx
 828cbb3:	8b 52 08             	mov    0x8(%edx),%edx
 828cbb6:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 828cbb9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 828cbbd:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 828cbc0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 828cbc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cbc8:	89 14 24             	mov    %edx,(%esp)
 828cbcb:	e8 b8 52 3b 00       	call   8641e88 <_ZN10CTitleBook12putTitleOnlyEP5CUseriR24ENUM_TITLE_BOOK_CATEGORYRi>
 828cbd0:	8b 45 08             	mov    0x8(%ebp),%eax
 828cbd3:	89 04 24             	mov    %eax,(%esp)
 828cbd6:	e8 e9 bf e3 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 828cbdb:	eb 01                	jmp    828cbde <_ZN12CAchievement6adjustEv+0x268>
 828cbdd:	90                   	nop
 828cbde:	83 c4 64             	add    $0x64,%esp
 828cbe1:	5b                   	pop    %ebx
 828cbe2:	5d                   	pop    %ebp
 828cbe3:	c3                   	ret

```

```c
// CAchievement::adjust @ 0x828c976

/* CAchievement::adjust() */

void __thiscall CAchievement::adjust(CAchievement *this)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  stAchievement local_44 [4];
  ushort local_40;
  ushort local_3e;
  ushort local_3c [2];
  stAchievement local_38 [4];
  ushort local_34;
  ushort local_32;
  ushort local_30 [2];
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  Quest *local_14;
  Quest *local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_18 = 0;
  while( true ) {
    iVar3 = G_CDataManager();
    uVar4 = std::vector<stAdjust,std::allocator<stAdjust>>::size
                      ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4));
    if (uVar4 <= local_18) break;
    iVar3 = G_CDataManager();
    puVar2 = (uint *)std::vector<stAdjust,std::allocator<stAdjust>>::operator[]
                               ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4),
                                local_18);
    local_24 = *puVar2;
    iVar3 = G_CDataManager();
    iVar3 = std::vector<stAdjust,std::allocator<stAdjust>>::operator[]
                      ((vector<stAdjust,std::allocator<stAdjust>> *)(iVar3 + 0xa7c4),local_18);
    uVar4 = local_24;
    local_1c = *(uint *)(iVar3 + 8);
    iVar3 = CUser::getCurCharacQuestR(*(CUser **)(this + 8));
    cVar1 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(iVar3 + 4),uVar4);
    if (cVar1 != '\0') {
      iVar3 = G_CDataManager();
      local_14 = (Quest *)CDataManager::find_quest(iVar3);
      if ((local_14 != (Quest *)0x0) && (*(int *)(local_14 + 8) == 7)) {
        stAchievement::stAchievement(local_38);
        Quest::get_init_achievement_trigger(local_14,&local_34,&local_32,local_30);
        _setTrigger(this,local_1c,local_34,local_32,local_30[0]);
        iVar3 = Quest::get_title_reward(local_14);
        CTitleBook::putTitleOnly
                  (*(CUser **)(this + 8),iVar3,(ENUM_TITLE_BOOK_CATEGORY *)&local_2c,&local_28);
      }
    }
    local_18 = local_18 + 1;
  }
  iVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(this + 8));
  if (iVar3 == 0x46) {
    iVar3 = G_CDataManager();
    local_10 = (Quest *)CDataManager::find_quest(iVar3);
    if (local_10 == (Quest *)0x0) {
      return;
    }
    stAchievement::stAchievement(local_44);
    Quest::get_init_achievement_trigger(local_10,&local_40,&local_3e,local_3c);
    _setTrigger(this,0x1983,local_40,local_3e,local_3c[0]);
    iVar3 = Quest::get_title_reward(local_10);
    CTitleBook::putTitleOnly
              (*(CUser **)(this + 8),iVar3,(ENUM_TITLE_BOOK_CATEGORY *)&local_2c,&local_28);
  }
  charac_expand::CData::alter((CData *)this);
  return;
}

```

---

## getData

```asm
// === 0828c6a4 CAchievement::getData  [0x0828c6a4-0x828c773] ===
 828c6a4:	55                   	push   %ebp
 828c6a5:	89 e5                	mov    %esp,%ebp
 828c6a7:	53                   	push   %ebx
 828c6a8:	83 ec 24             	sub    $0x24,%esp
 828c6ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 828c6ae:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828c6b1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828c6b8:	8b 45 08             	mov    0x8(%ebp),%eax
 828c6bb:	8d 50 0c             	lea    0xc(%eax),%edx
 828c6be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c6c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c6c5:	89 04 24             	mov    %eax,(%esp)
 828c6c8:	e8 73 1a 00 00       	call   828e140 <_ZNKSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 828c6cd:	83 ec 04             	sub    $0x4,%esp
 828c6d0:	eb 3f                	jmp    828c711 <_ZNK12CAchievement7getDataEPc+0x6d>
 828c6d2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 828c6d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c6d8:	89 04 24             	mov    %eax,(%esp)
 828c6db:	e8 c0 1a 00 00       	call   828e1a0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj13stAchievementEEptEv>
 828c6e0:	89 c2                	mov    %eax,%edx
 828c6e2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 828c6e5:	89 d8                	mov    %ebx,%eax
 828c6e7:	01 c0                	add    %eax,%eax
 828c6e9:	01 d8                	add    %ebx,%eax
 828c6eb:	c1 e0 02             	shl    $0x2,%eax
 828c6ee:	8b 5a 04             	mov    0x4(%edx),%ebx
 828c6f1:	89 1c 08             	mov    %ebx,(%eax,%ecx,1)
 828c6f4:	8b 5a 08             	mov    0x8(%edx),%ebx
 828c6f7:	89 5c 08 04          	mov    %ebx,0x4(%eax,%ecx,1)
 828c6fb:	8b 52 0c             	mov    0xc(%edx),%edx
 828c6fe:	89 54 08 08          	mov    %edx,0x8(%eax,%ecx,1)
 828c702:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c705:	89 04 24             	mov    %eax,(%esp)
 828c708:	e8 a1 1a 00 00       	call   828e1ae <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj13stAchievementEEppEv>
 828c70d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828c711:	8b 45 08             	mov    0x8(%ebp),%eax
 828c714:	8d 50 0c             	lea    0xc(%eax),%edx
 828c717:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c71a:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c71e:	89 04 24             	mov    %eax,(%esp)
 828c721:	e8 40 1a 00 00       	call   828e166 <_ZNKSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828c726:	83 ec 04             	sub    $0x4,%esp
 828c729:	8d 45 ec             	lea    -0x14(%ebp),%eax
 828c72c:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c730:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c733:	89 04 24             	mov    %eax,(%esp)
 828c736:	e8 51 1a 00 00       	call   828e18c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828c73b:	84 c0                	test   %al,%al
 828c73d:	75 93                	jne    828c6d2 <_ZNK12CAchievement7getDataEPc+0x2e>
 828c73f:	8b 45 08             	mov    0x8(%ebp),%eax
 828c742:	83 c0 0c             	add    $0xc,%eax
 828c745:	89 04 24             	mov    %eax,(%esp)
 828c748:	e8 7f 1a 00 00       	call   828e1cc <_ZNKSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4sizeEv>
 828c74d:	89 c2                	mov    %eax,%edx
 828c74f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828c752:	89 90 00 18 00 00    	mov    %edx,0x1800(%eax)
 828c758:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 828c75f:	e8 3a f5 e3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 828c764:	89 c2                	mov    %eax,%edx
 828c766:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828c769:	89 90 04 18 00 00    	mov    %edx,0x1804(%eax)
 828c76f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 828c772:	c9                   	leave
 828c773:	c3                   	ret

```

```c
// CAchievement::getData @ 0x828c6a4

/* CAchievement::getData(char*) const */

void __thiscall CAchievement::getData(CAchievement *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_1c [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_18 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_1;
  local_10 = 0;
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)
                       local_1c,(_Rb_tree_const_iterator *)local_18);
    iVar3 = local_10;
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)
                       local_1c);
    iVar3 = iVar3 * 0xc;
    *(undefined4 *)(local_14 + iVar3) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(local_14 + iVar3 + 4) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(local_14 + iVar3 + 8) = *(undefined4 *)(iVar2 + 0xc);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>>::operator++
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,stAchievement>> *)local_1c);
    local_10 = local_10 + 1;
  }
  uVar4 = std::
          map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
          ::size((map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
                  *)(this + 0xc));
  *(undefined4 *)(local_14 + 0x1800) = uVar4;
  uVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(local_14 + 0x1804) = uVar4;
  return;
}

```

---

## isClearedAchievement

```asm
// === 0828cbe4 CAchievement::isClearedAchievement  [0x0828cbe4-0x828cc55] ===
 828cbe4:	55                   	push   %ebp
 828cbe5:	89 e5                	mov    %esp,%ebp
 828cbe7:	83 ec 28             	sub    $0x28,%esp
 828cbea:	8b 45 08             	mov    0x8(%ebp),%eax
 828cbed:	8d 48 0c             	lea    0xc(%eax),%ecx
 828cbf0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828cbf3:	8d 55 0c             	lea    0xc(%ebp),%edx
 828cbf6:	89 54 24 08          	mov    %edx,0x8(%esp)
 828cbfa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828cbfe:	89 04 24             	mov    %eax,(%esp)
 828cc01:	e8 b8 11 00 00       	call   828ddbe <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 828cc06:	83 ec 04             	sub    $0x4,%esp
 828cc09:	8b 45 08             	mov    0x8(%ebp),%eax
 828cc0c:	8d 50 0c             	lea    0xc(%eax),%edx
 828cc0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828cc12:	89 54 24 04          	mov    %edx,0x4(%esp)
 828cc16:	89 04 24             	mov    %eax,(%esp)
 828cc19:	e8 cc 11 00 00       	call   828ddea <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 828cc1e:	83 ec 04             	sub    $0x4,%esp
 828cc21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 828cc24:	89 44 24 04          	mov    %eax,0x4(%esp)
 828cc28:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828cc2b:	89 04 24             	mov    %eax,(%esp)
 828cc2e:	e8 dd 11 00 00       	call   828de10 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEneERKS4_>
 828cc33:	84 c0                	test   %al,%al
 828cc35:	74 18                	je     828cc4f <_ZN12CAchievement20isClearedAchievementEj+0x6b>
 828cc37:	8d 45 f0             	lea    -0x10(%ebp),%eax
 828cc3a:	89 04 24             	mov    %eax,(%esp)
 828cc3d:	e8 e2 11 00 00       	call   828de24 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj13stAchievementEEptEv>
 828cc42:	83 c0 04             	add    $0x4,%eax
 828cc45:	89 04 24             	mov    %eax,(%esp)
 828cc48:	e8 55 0c 00 00       	call   828d8a2 <_ZN13stAchievement10isCompleteEv>
 828cc4d:	eb 05                	jmp    828cc54 <_ZN12CAchievement20isClearedAchievementEj+0x70>
 828cc4f:	b8 00 00 00 00       	mov    $0x0,%eax
 828cc54:	c9                   	leave
 828cc55:	c3                   	ret

```

```c
// CAchievement::isClearedAchievement @ 0x828cbe4

/* CAchievement::isClearedAchievement(unsigned int) */

undefined4 CAchievement::isClearedAchievement(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>> local_14 [4];
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  local_10 [12];
  
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stAchievement>>::operator->
                      (local_14);
    uVar3 = stAchievement::isComplete((stAchievement *)(iVar2 + 4));
  }
  return uVar3;
}

```

---

## loadData

```asm
// === 0828c8b8 CAchievement::loadData  [0x0828c8b8-0x828c975] ===
 828c8b8:	55                   	push   %ebp
 828c8b9:	89 e5                	mov    %esp,%ebp
 828c8bb:	83 ec 48             	sub    $0x48,%esp
 828c8be:	8b 45 10             	mov    0x10(%ebp),%eax
 828c8c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 828c8c4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828c8cb:	eb 6d                	jmp    828c93a <_ZN12CAchievement8loadDataEP5CUserPc+0x82>
 828c8cd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c8d0:	89 d0                	mov    %edx,%eax
 828c8d2:	01 c0                	add    %eax,%eax
 828c8d4:	01 d0                	add    %edx,%eax
 828c8d6:	c1 e0 02             	shl    $0x2,%eax
 828c8d9:	89 c1                	mov    %eax,%ecx
 828c8db:	03 4d f0             	add    -0x10(%ebp),%ecx
 828c8de:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c8e1:	89 d0                	mov    %edx,%eax
 828c8e3:	01 c0                	add    %eax,%eax
 828c8e5:	01 d0                	add    %edx,%eax
 828c8e7:	c1 e0 02             	shl    $0x2,%eax
 828c8ea:	89 c2                	mov    %eax,%edx
 828c8ec:	03 55 f0             	add    -0x10(%ebp),%edx
 828c8ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c8f2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 828c8f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c8fa:	89 04 24             	mov    %eax,(%esp)
 828c8fd:	e8 2f 15 00 00       	call   828de31 <_ZSt9make_pairIRjR13stAchievementESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 828c902:	83 ec 04             	sub    $0x4,%esp
 828c905:	8d 45 e0             	lea    -0x20(%ebp),%eax
 828c908:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c90c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 828c90f:	89 04 24             	mov    %eax,(%esp)
 828c912:	e8 59 15 00 00       	call   828de70 <_ZNSt4pairIKj13stAchievementEC1IjS1_EEOS_IT_T0_E>
 828c917:	8b 45 08             	mov    0x8(%ebp),%eax
 828c91a:	8d 48 0c             	lea    0xc(%eax),%ecx
 828c91d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 828c920:	8d 55 d0             	lea    -0x30(%ebp),%edx
 828c923:	89 54 24 08          	mov    %edx,0x8(%esp)
 828c927:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 828c92b:	89 04 24             	mov    %eax,(%esp)
 828c92e:	e8 79 15 00 00       	call   828deac <_ZNSt3mapIj13stAchievementSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 828c933:	83 ec 04             	sub    $0x4,%esp
 828c936:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828c93a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828c93d:	8b 80 00 18 00 00    	mov    0x1800(%eax),%eax
 828c943:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828c946:	0f 9f c0             	setg   %al
 828c949:	84 c0                	test   %al,%al
 828c94b:	75 80                	jne    828c8cd <_ZN12CAchievement8loadDataEP5CUserPc+0x15>
 828c94d:	8b 45 08             	mov    0x8(%ebp),%eax
 828c950:	8b 55 0c             	mov    0xc(%ebp),%edx
 828c953:	89 50 08             	mov    %edx,0x8(%eax)
 828c956:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828c959:	8b 80 04 18 00 00    	mov    0x1804(%eax),%eax
 828c95f:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c963:	8b 45 08             	mov    0x8(%ebp),%eax
 828c966:	89 04 24             	mov    %eax,(%esp)
 828c969:	e8 24 07 00 00       	call   828d092 <_ZN12CAchievement18_verifyAchievementEj>
 828c96e:	b8 01 00 00 00       	mov    $0x1,%eax
 828c973:	c9                   	leave
 828c974:	c3                   	ret
 828c975:	90                   	nop

```

```c
// CAchievement::loadData @ 0x828c8b8

/* CAchievement::loadData(CUser*, char*) */

undefined4 __thiscall CAchievement::loadData(CAchievement *this,CUser *param_1,char *param_2)

{
  pair local_3c [8];
  pair<unsigned_int_const,stAchievement> local_34 [16];
  uint local_24 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_2;
  for (local_10 = 0; local_10 < *(int *)(local_14 + 0x1800); local_10 = local_10 + 1) {
    std::make_pair<unsigned_int&,stAchievement&>
              (local_24,(stAchievement *)(local_14 + local_10 * 0xc));
    std::pair<unsigned_int_const,stAchievement>::pair<unsigned_int,stAchievement>
              (local_34,(pair *)local_24);
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::insert(local_3c);
  }
  *(CUser **)(this + 8) = param_1;
  _verifyAchievement((uint)this);
  return 1;
}

```

---

## sendList

```asm
// === 0828c4de CAchievement::sendList  [0x0828c4de-0x828c675] ===
 828c4de:	55                   	push   %ebp
 828c4df:	89 e5                	mov    %esp,%ebp
 828c4e1:	56                   	push   %esi
 828c4e2:	53                   	push   %ebx
 828c4e3:	81 ec 30 18 00 00    	sub    $0x1830,%esp
 828c4e9:	8d 85 e0 e7 ff ff    	lea    -0x1820(%ebp),%eax
 828c4ef:	89 04 24             	mov    %eax,(%esp)
 828c4f2:	e8 e1 13 00 00       	call   828d8d8 <_ZN20stAchievement_DBDataC1Ev>
 828c4f7:	8b 45 08             	mov    0x8(%ebp),%eax
 828c4fa:	8b 00                	mov    (%eax),%eax
 828c4fc:	83 c0 08             	add    $0x8,%eax
 828c4ff:	8b 10                	mov    (%eax),%edx
 828c501:	8d 85 e0 e7 ff ff    	lea    -0x1820(%ebp),%eax
 828c507:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c50b:	8b 45 08             	mov    0x8(%ebp),%eax
 828c50e:	89 04 24             	mov    %eax,(%esp)
 828c511:	ff d2                	call   *%edx
 828c513:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c516:	89 04 24             	mov    %eax,(%esp)
 828c519:	e8 2e 18 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 828c51e:	c7 44 24 08 66 01 00 	movl   $0x166,0x8(%esp)
 828c525:	00 
 828c526:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 828c52d:	00 
 828c52e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c531:	89 04 24             	mov    %eax,(%esp)
 828c534:	e8 c3 f3 e3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 828c539:	8b 45 e0             	mov    -0x20(%ebp),%eax
 828c53c:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c540:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c543:	89 04 24             	mov    %eax,(%esp)
 828c546:	e8 f1 f3 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c54b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 828c552:	e9 b3 00 00 00       	jmp    828c60a <_ZN12CAchievement8sendListEv+0x12c>
 828c557:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c55a:	89 d0                	mov    %edx,%eax
 828c55c:	01 c0                	add    %eax,%eax
 828c55e:	01 d0                	add    %edx,%eax
 828c560:	c1 e0 02             	shl    $0x2,%eax
 828c563:	8d 55 f8             	lea    -0x8(%ebp),%edx
 828c566:	8d 04 02             	lea    (%edx,%eax,1),%eax
 828c569:	2d 18 18 00 00       	sub    $0x1818,%eax
 828c56e:	8b 00                	mov    (%eax),%eax
 828c570:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c574:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c577:	89 04 24             	mov    %eax,(%esp)
 828c57a:	e8 bd f3 e3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 828c57f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c582:	89 d0                	mov    %edx,%eax
 828c584:	01 c0                	add    %eax,%eax
 828c586:	01 d0                	add    %edx,%eax
 828c588:	c1 e0 02             	shl    $0x2,%eax
 828c58b:	8d 55 f8             	lea    -0x8(%ebp),%edx
 828c58e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 828c591:	2d 18 18 00 00       	sub    $0x1818,%eax
 828c596:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 828c59a:	0f b7 c0             	movzwl %ax,%eax
 828c59d:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c5a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c5a4:	89 04 24             	mov    %eax,(%esp)
 828c5a7:	e8 f8 d8 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c5ac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c5af:	89 d0                	mov    %edx,%eax
 828c5b1:	01 c0                	add    %eax,%eax
 828c5b3:	01 d0                	add    %edx,%eax
 828c5b5:	c1 e0 02             	shl    $0x2,%eax
 828c5b8:	8d 55 f8             	lea    -0x8(%ebp),%edx
 828c5bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 828c5be:	2d 18 18 00 00       	sub    $0x1818,%eax
 828c5c3:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 828c5c7:	0f b7 c0             	movzwl %ax,%eax
 828c5ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c5ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c5d1:	89 04 24             	mov    %eax,(%esp)
 828c5d4:	e8 cb d8 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c5d9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828c5dc:	89 d0                	mov    %edx,%eax
 828c5de:	01 c0                	add    %eax,%eax
 828c5e0:	01 d0                	add    %edx,%eax
 828c5e2:	c1 e0 02             	shl    $0x2,%eax
 828c5e5:	8d 55 f8             	lea    -0x8(%ebp),%edx
 828c5e8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 828c5eb:	2d 18 18 00 00       	sub    $0x1818,%eax
 828c5f0:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 828c5f4:	0f b7 c0             	movzwl %ax,%eax
 828c5f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 828c5fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c5fe:	89 04 24             	mov    %eax,(%esp)
 828c601:	e8 9e d8 e4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 828c606:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 828c60a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 828c60d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 828c610:	0f 9f c0             	setg   %al
 828c613:	84 c0                	test   %al,%al
 828c615:	0f 85 3c ff ff ff    	jne    828c557 <_ZN12CAchievement8sendListEv+0x79>
 828c61b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 828c622:	00 
 828c623:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c626:	89 04 24             	mov    %eax,(%esp)
 828c629:	e8 2a f3 e3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 828c62e:	8b 45 08             	mov    0x8(%ebp),%eax
 828c631:	8b 40 08             	mov    0x8(%eax),%eax
 828c634:	8d 55 e8             	lea    -0x18(%ebp),%edx
 828c637:	89 54 24 04          	mov    %edx,0x4(%esp)
 828c63b:	89 04 24             	mov    %eax,(%esp)
 828c63e:	e8 77 bf 3b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 828c643:	eb 1b                	jmp    828c660 <_ZN12CAchievement8sendListEv+0x182>
 828c645:	89 d3                	mov    %edx,%ebx
 828c647:	89 c6                	mov    %eax,%esi
 828c649:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c64c:	89 04 24             	mov    %eax,(%esp)
 828c64f:	e8 2c 18 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c654:	89 f0                	mov    %esi,%eax
 828c656:	89 da                	mov    %ebx,%edx
 828c658:	89 04 24             	mov    %eax,(%esp)
 828c65b:	e8 f0 70 85 00       	call   8ae3750 <_Unwind_Resume>
 828c660:	8d 45 e8             	lea    -0x18(%ebp),%eax
 828c663:	89 04 24             	mov    %eax,(%esp)
 828c666:	e8 15 18 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 828c66b:	81 c4 30 18 00 00    	add    $0x1830,%esp
 828c671:	5b                   	pop    %ebx
 828c672:	5e                   	pop    %esi
 828c673:	5d                   	pop    %ebp
 828c674:	c3                   	ret
 828c675:	90                   	nop

```

```c
// CAchievement::sendList @ 0x828c4de

/* CAchievement::sendList() */

void __thiscall CAchievement::sendList(CAchievement *this)

{
  stAchievement_DBData local_1824 [4];
  ushort auStack_1820 [3070];
  int local_24;
  PacketGuard local_1c [12];
  int local_10;
  
  stAchievement_DBData::stAchievement_DBData(local_1824);
  (**(code **)(*(int *)this + 8))(this,local_1824);
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0828c534 to 0828c642 has its CatchHandler @ 0828c645 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x166);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,local_24);
  for (local_10 = 0; local_10 < local_24; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_1c,*(int *)(local_1824 + local_10 * 0xc));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6]);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6 + 1]);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)auStack_1820[local_10 * 6 + 2]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(*(CUser **)(this + 8),local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## setTrigger

```asm
// === 0828b678 CAchievement::setTrigger  [0x0828b678-0x828b7ff] ===
 828b678:	55                   	push   %ebp
 828b679:	89 e5                	mov    %esp,%ebp
 828b67b:	53                   	push   %ebx
 828b67c:	83 ec 44             	sub    $0x44,%esp
 828b67f:	8b 4d 10             	mov    0x10(%ebp),%ecx
 828b682:	8b 55 14             	mov    0x14(%ebp),%edx
 828b685:	8b 45 18             	mov    0x18(%ebp),%eax
 828b688:	66 89 4d e4          	mov    %cx,-0x1c(%ebp)
 828b68c:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 828b690:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 828b694:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 828b697:	e8 ff 0a e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 828b69c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 828b6a0:	89 04 24             	mov    %eax,(%esp)
 828b6a3:	e8 1e 47 0d 00       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 828b6a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 828b6ab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 828b6af:	75 1f                	jne    828b6d0 <_ZN12CAchievement10setTriggerEjttt+0x58>
 828b6b1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828b6b8:	00 
 828b6b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b6bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b6c0:	8b 45 08             	mov    0x8(%ebp),%eax
 828b6c3:	89 04 24             	mov    %eax,(%esp)
 828b6c6:	e8 87 0b 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828b6cb:	e9 2a 01 00 00       	jmp    828b7fa <_ZN12CAchievement10setTriggerEjttt+0x182>
 828b6d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828b6d3:	8b 40 08             	mov    0x8(%eax),%eax
 828b6d6:	83 f8 07             	cmp    $0x7,%eax
 828b6d9:	75 18                	jne    828b6f3 <_ZN12CAchievement10setTriggerEjttt+0x7b>
 828b6db:	8b 45 08             	mov    0x8(%ebp),%eax
 828b6de:	8b 40 08             	mov    0x8(%eax),%eax
 828b6e1:	89 04 24             	mov    %eax,(%esp)
 828b6e4:	e8 cf eb e4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 828b6e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 828b6ec:	8b 52 20             	mov    0x20(%edx),%edx
 828b6ef:	39 d0                	cmp    %edx,%eax
 828b6f1:	7d 07                	jge    828b6fa <_ZN12CAchievement10setTriggerEjttt+0x82>
 828b6f3:	b8 01 00 00 00       	mov    $0x1,%eax
 828b6f8:	eb 05                	jmp    828b6ff <_ZN12CAchievement10setTriggerEjttt+0x87>
 828b6fa:	b8 00 00 00 00       	mov    $0x0,%eax
 828b6ff:	84 c0                	test   %al,%al
 828b701:	74 1f                	je     828b722 <_ZN12CAchievement10setTriggerEjttt+0xaa>
 828b703:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 828b70a:	00 
 828b70b:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b70e:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b712:	8b 45 08             	mov    0x8(%ebp),%eax
 828b715:	89 04 24             	mov    %eax,(%esp)
 828b718:	e8 35 0b 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828b71d:	e9 d8 00 00 00       	jmp    828b7fa <_ZN12CAchievement10setTriggerEjttt+0x182>
 828b722:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b725:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b729:	8b 45 08             	mov    0x8(%ebp),%eax
 828b72c:	89 04 24             	mov    %eax,(%esp)
 828b72f:	e8 b0 14 00 00       	call   828cbe4 <_ZN12CAchievement20isClearedAchievementEj>
 828b734:	84 c0                	test   %al,%al
 828b736:	74 1f                	je     828b757 <_ZN12CAchievement10setTriggerEjttt+0xdf>
 828b738:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 828b73f:	00 
 828b740:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b743:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b747:	8b 45 08             	mov    0x8(%ebp),%eax
 828b74a:	89 04 24             	mov    %eax,(%esp)
 828b74d:	e8 00 0b 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828b752:	e9 a3 00 00 00       	jmp    828b7fa <_ZN12CAchievement10setTriggerEjttt+0x182>
 828b757:	0f b7 4d dc          	movzwl -0x24(%ebp),%ecx
 828b75b:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 828b75f:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 828b763:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828b767:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828b76b:	89 44 24 08          	mov    %eax,0x8(%esp)
 828b76f:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b772:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b776:	8b 45 08             	mov    0x8(%ebp),%eax
 828b779:	89 04 24             	mov    %eax,(%esp)
 828b77c:	e8 7f 00 00 00       	call   828b800 <_ZN12CAchievement14_verifyTriggerEjttt>
 828b781:	83 f0 01             	xor    $0x1,%eax
 828b784:	84 c0                	test   %al,%al
 828b786:	74 1c                	je     828b7a4 <_ZN12CAchievement10setTriggerEjttt+0x12c>
 828b788:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 828b78f:	00 
 828b790:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b793:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b797:	8b 45 08             	mov    0x8(%ebp),%eax
 828b79a:	89 04 24             	mov    %eax,(%esp)
 828b79d:	e8 b0 0a 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828b7a2:	eb 56                	jmp    828b7fa <_ZN12CAchievement10setTriggerEjttt+0x182>
 828b7a4:	0f b7 4d dc          	movzwl -0x24(%ebp),%ecx
 828b7a8:	0f b7 55 e0          	movzwl -0x20(%ebp),%edx
 828b7ac:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 828b7b0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 828b7b4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 828b7b8:	89 44 24 08          	mov    %eax,0x8(%esp)
 828b7bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b7bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 828b7c6:	89 04 24             	mov    %eax,(%esp)
 828b7c9:	e8 c8 00 00 00       	call   828b896 <_ZN12CAchievement11_setTriggerEjttt>
 828b7ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 828b7d5:	00 
 828b7d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b7d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 828b7e0:	89 04 24             	mov    %eax,(%esp)
 828b7e3:	e8 6a 0a 00 00       	call   828c252 <_ZN12CAchievement15_sendSetTriggerEjh>
 828b7e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 828b7eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 828b7ef:	8b 45 08             	mov    0x8(%ebp),%eax
 828b7f2:	89 04 24             	mov    %eax,(%esp)
 828b7f5:	e8 b4 03 00 00       	call   828bbae <_ZN12CAchievement14_checkCompleteEj>
 828b7fa:	83 c4 44             	add    $0x44,%esp
 828b7fd:	5b                   	pop    %ebx
 828b7fe:	5d                   	pop    %ebp
 828b7ff:	c3                   	ret

```

```c
// CAchievement::setTrigger @ 0x828b678

/* CAchievement::setTrigger(unsigned int, unsigned short, unsigned short, unsigned short) */

void __thiscall
CAchievement::setTrigger
          (CAchievement *this,uint param_1,ushort param_2,ushort param_3,ushort param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = G_CDataManager();
  iVar3 = CDataManager::find_quest(iVar3);
  if (iVar3 != 0) {
    if ((*(int *)(iVar3 + 8) == 7) &&
       (iVar4 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)(this + 8)),
       *(int *)(iVar3 + 0x20) <= iVar4)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      _sendSetTrigger(this,param_1,'\x01');
    }
    else {
      cVar2 = isClearedAchievement((uint)this);
      if (cVar2 == '\0') {
        cVar2 = _verifyTrigger((uint)this,(ushort)param_1,param_2,param_3);
        if (cVar2 == '\x01') {
          _setTrigger(this,param_1,param_2,param_3,param_4);
          _sendSetTrigger(this,param_1,'\0');
          _checkComplete(this,param_1);
        }
        else {
          _sendSetTrigger(this,param_1,'\x02');
        }
      }
      else {
        _sendSetTrigger(this,param_1,'\x02');
      }
    }
    return;
  }
  _sendSetTrigger(this,param_1,'\x01');
  return;
}

```


# CConditionEventManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CConditionEventManager

```asm
// === 08334844 CConditionEventManager::CConditionEventManager  [0x08334844-0x8334849] ===
 8334844:	55                   	push   %ebp
 8334845:	89 e5                	mov    %esp,%ebp
 8334847:	5d                   	pop    %ebp
 8334848:	c3                   	ret
 8334849:	90                   	nop

```

```c
// CConditionEventManager::CConditionEventManager @ 0x8334844

/* CConditionEventManager::CConditionEventManager() */

void __thiscall CConditionEventManager::CConditionEventManager(CConditionEventManager *this)

{
  return;
}

```

---

## CheckErrorCardForStep

```asm
// === 08335a8a CConditionEventManager::CheckErrorCardForStep  [0x08335a8a-0x8335b19] ===
 8335a8a:	55                   	push   %ebp
 8335a8b:	89 e5                	mov    %esp,%ebp
 8335a8d:	83 ec 38             	sub    $0x38,%esp
 8335a90:	8b 45 10             	mov    0x10(%ebp),%eax
 8335a93:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8335a96:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8335a9a:	75 07                	jne    8335aa3 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x19>
 8335a9c:	b8 00 00 00 00       	mov    $0x0,%eax
 8335aa1:	eb 75                	jmp    8335b18 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x8e>
 8335aa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335aa6:	89 04 24             	mov    %eax,(%esp)
 8335aa9:	e8 f6 01 00 00       	call   8335ca4 <_ZN15CUserCharacInfo19IsProperDungeonUserEv>
 8335aae:	83 f0 01             	xor    $0x1,%eax
 8335ab1:	84 c0                	test   %al,%al
 8335ab3:	74 07                	je     8335abc <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x32>
 8335ab5:	b8 00 00 00 00       	mov    $0x0,%eax
 8335aba:	eb 5c                	jmp    8335b18 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x8e>
 8335abc:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8335ac0:	79 07                	jns    8335ac9 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x3f>
 8335ac2:	b8 00 00 00 00       	mov    $0x0,%eax
 8335ac7:	eb 4f                	jmp    8335b18 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x8e>
 8335ac9:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 8335acd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8335ad0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8335ad4:	8b 55 08             	mov    0x8(%ebp),%edx
 8335ad7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8335adb:	89 04 24             	mov    %eax,(%esp)
 8335ade:	e8 c1 fb ff ff       	call   83356a4 <_ZN22CConditionEventManager21_getRequiredParameterEs>
 8335ae3:	83 ec 04             	sub    $0x4,%esp
 8335ae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335ae9:	89 04 24             	mov    %eax,(%esp)
 8335aec:	e8 8f 01 00 00       	call   8335c80 <_ZNK15CUserCharacInfo26GetProperDungeonClearCountEv>
 8335af1:	98                   	cwtl
 8335af2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8335af5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8335af8:	83 f8 ff             	cmp    $0xffffffff,%eax
 8335afb:	75 07                	jne    8335b04 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x7a>
 8335afd:	b8 00 00 00 00       	mov    $0x0,%eax
 8335b02:	eb 14                	jmp    8335b18 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x8e>
 8335b04:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8335b07:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8335b0a:	7d 07                	jge    8335b13 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x89>
 8335b0c:	b8 00 00 00 00       	mov    $0x0,%eax
 8335b11:	eb 05                	jmp    8335b18 <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc+0x8e>
 8335b13:	b8 01 00 00 00       	mov    $0x1,%eax
 8335b18:	c9                   	leave
 8335b19:	c3                   	ret

```

```c
// CConditionEventManager::CheckErrorCardForStep @ 0x8335a8a

/* CConditionEventManager::CheckErrorCardForStep(CUser*, char) */

undefined4 __thiscall
CConditionEventManager::CheckErrorCardForStep
          (CConditionEventManager *this,CUser *param_1,char param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int local_18 [5];
  
  if (param_1 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::IsProperDungeonUser((CUserCharacInfo *)param_1);
    if (cVar1 == '\x01') {
      if (param_2 < '\0') {
        uVar3 = 0;
      }
      else {
        _getRequiredParameter((short)local_18);
        sVar2 = CUserCharacInfo::GetProperDungeonClearCount((CUserCharacInfo *)param_1);
        if (local_18[0] == -1) {
          uVar3 = 0;
        }
        else if (local_18[0] < sVar2) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ConditionRewardSameItemCombine

```asm
// === 08335264 CConditionEventManager::ConditionRewardSameItemCombine  [0x08335264-0x833539f] ===
 8335264:	55                   	push   %ebp
 8335265:	89 e5                	mov    %esp,%ebp
 8335267:	56                   	push   %esi
 8335268:	53                   	push   %ebx
 8335269:	83 ec 40             	sub    $0x40,%esp
 833526c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833526f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8335272:	89 54 24 04          	mov    %edx,0x4(%esp)
 8335276:	89 04 24             	mov    %eax,(%esp)
 8335279:	e8 bc 0a 00 00       	call   8335d3a <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EE5beginEv>
 833527e:	83 ec 04             	sub    $0x4,%esp
 8335281:	e9 e1 00 00 00       	jmp    8335367 <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x103>
 8335286:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8335289:	89 04 24             	mov    %eax,(%esp)
 833528c:	e8 35 0b 00 00       	call   8335dc6 <_ZNK9__gnu_cxx17__normal_iteratorIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 8335291:	89 c2                	mov    %eax,%edx
 8335293:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8335296:	89 54 24 08          	mov    %edx,0x8(%esp)
 833529a:	8b 55 10             	mov    0x10(%ebp),%edx
 833529d:	89 54 24 04          	mov    %edx,0x4(%esp)
 83352a1:	89 04 24             	mov    %eax,(%esp)
 83352a4:	e8 45 80 d9 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 83352a9:	83 ec 04             	sub    $0x4,%esp
 83352ac:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83352af:	8b 55 10             	mov    0x10(%ebp),%edx
 83352b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 83352b6:	89 04 24             	mov    %eax,(%esp)
 83352b9:	e8 5c 80 d9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 83352be:	83 ec 04             	sub    $0x4,%esp
 83352c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83352c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83352c8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83352cb:	89 04 24             	mov    %eax,(%esp)
 83352ce:	e8 1d 26 d9 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 83352d3:	84 c0                	test   %al,%al
 83352d5:	74 61                	je     8335338 <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xd4>
 83352d7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83352da:	89 04 24             	mov    %eax,(%esp)
 83352dd:	e8 e4 0a 00 00       	call   8335dc6 <_ZNK9__gnu_cxx17__normal_iteratorIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 83352e2:	8d 58 04             	lea    0x4(%eax),%ebx
 83352e5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83352e8:	89 04 24             	mov    %eax,(%esp)
 83352eb:	e8 d6 0a 00 00       	call   8335dc6 <_ZNK9__gnu_cxx17__normal_iteratorIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 83352f0:	89 c2                	mov    %eax,%edx
 83352f2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83352f5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83352f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83352fd:	89 04 24             	mov    %eax,(%esp)
 8335300:	e8 ad bf dd ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 8335305:	83 ec 04             	sub    $0x4,%esp
 8335308:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833530b:	89 44 24 04          	mov    %eax,0x4(%esp)
 833530f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8335312:	89 04 24             	mov    %eax,(%esp)
 8335315:	e8 06 1a d9 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 833531a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833531d:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8335320:	89 54 24 08          	mov    %edx,0x8(%esp)
 8335324:	8b 55 10             	mov    0x10(%ebp),%edx
 8335327:	89 54 24 04          	mov    %edx,0x4(%esp)
 833532b:	89 04 24             	mov    %eax,(%esp)
 833532e:	e8 1d 1a d9 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8335333:	83 ec 04             	sub    $0x4,%esp
 8335336:	eb 24                	jmp    833535c <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xf8>
 8335338:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833533b:	89 04 24             	mov    %eax,(%esp)
 833533e:	e8 fd 7f d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8335343:	89 c3                	mov    %eax,%ebx
 8335345:	8b 73 04             	mov    0x4(%ebx),%esi
 8335348:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833534b:	89 04 24             	mov    %eax,(%esp)
 833534e:	e8 73 0a 00 00       	call   8335dc6 <_ZNK9__gnu_cxx17__normal_iteratorIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEptEv>
 8335353:	8b 40 04             	mov    0x4(%eax),%eax
 8335356:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8335359:	89 43 04             	mov    %eax,0x4(%ebx)
 833535c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833535f:	89 04 24             	mov    %eax,(%esp)
 8335362:	e8 49 0a 00 00       	call   8335db0 <_ZN9__gnu_cxx17__normal_iteratorIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEppEv>
 8335367:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833536a:	8b 55 0c             	mov    0xc(%ebp),%edx
 833536d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8335371:	89 04 24             	mov    %eax,(%esp)
 8335374:	e8 e5 09 00 00       	call   8335d5e <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EE3endEv>
 8335379:	83 ec 04             	sub    $0x4,%esp
 833537c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833537f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335383:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8335386:	89 04 24             	mov    %eax,(%esp)
 8335389:	e8 f6 09 00 00       	call   8335d84 <_ZN9__gnu_cxxneIP26stConditionEventRewardInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 833538e:	84 c0                	test   %al,%al
 8335390:	0f 85 f0 fe ff ff    	jne    8335286 <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x22>
 8335396:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8335399:	83 c4 00             	add    $0x0,%esp
 833539c:	5b                   	pop    %ebx
 833539d:	5e                   	pop    %esi
 833539e:	5d                   	pop    %ebp
 833539f:	c3                   	ret

```

```c
// CConditionEventManager::ConditionRewardSameItemCombine @ 0x8335264

/* CConditionEventManager::ConditionRewardSameItemCombine(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&, std::map<int, int, std::less<int>,
   std::allocator<std::pair<int const, int> > >&) */

void CConditionEventManager::ConditionRewardSameItemCombine(vector *param_1,map *param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  _Rb_tree_iterator<std::pair<int_const,int>> local_34 [4];
  __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
  local_30 [4];
  __normal_iterator local_2c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_28 [4];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [2];
  
  std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::begin();
  while( true ) {
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::end();
    bVar3 = __gnu_cxx::operator!=(local_30,local_2c);
    if (!bVar3) break;
    __gnu_cxx::
    __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
    ::operator->(local_30);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_34)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_34);
      iVar1 = *(int *)(iVar5 + 4);
      iVar6 = __gnu_cxx::
              __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
              ::operator->(local_30);
      *(int *)(iVar5 + 4) = iVar1 + *(int *)(iVar6 + 4);
    }
    else {
      __gnu_cxx::
      __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
      ::operator->(local_30);
      piVar4 = (int *)__gnu_cxx::
                      __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
                      ::operator->(local_30);
      std::make_pair<int&,int&>(local_14,piVar4);
      std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
    }
    __gnu_cxx::
    __normal_iterator<stConditionEventRewardInfo*,std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>>
    ::operator++(local_30);
  }
  return;
}

```

---

## GetConditionRewardInfo

```asm
// === 083353a0 CConditionEventManager::GetConditionRewardInfo  [0x083353a0-0x83354ef] ===
 83353a0:	55                   	push   %ebp
 83353a1:	89 e5                	mov    %esp,%ebp
 83353a3:	83 ec 58             	sub    $0x58,%esp
 83353a6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83353a9:	8b 55 14             	mov    0x14(%ebp),%edx
 83353ac:	8b 45 18             	mov    0x18(%ebp),%eax
 83353af:	88 4d c4             	mov    %cl,-0x3c(%ebp)
 83353b2:	66 89 55 c0          	mov    %dx,-0x40(%ebp)
 83353b6:	88 45 bc             	mov    %al,-0x44(%ebp)
 83353b9:	a1 30 f7 41 09       	mov    0x941f730,%eax
 83353be:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 83353c5:	00 
 83353c6:	89 04 24             	mov    %eax,(%esp)
 83353c9:	e8 ca 05 de ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 83353ce:	8b 10                	mov    (%eax),%edx
 83353d0:	83 c2 34             	add    $0x34,%edx
 83353d3:	8b 12                	mov    (%edx),%edx
 83353d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83353dc:	00 
 83353dd:	89 04 24             	mov    %eax,(%esp)
 83353e0:	ff d2                	call   *%edx
 83353e2:	83 f0 01             	xor    $0x1,%eax
 83353e5:	84 c0                	test   %al,%al
 83353e7:	0f 85 fc 00 00 00    	jne    83354e9 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x149>
 83353ed:	e8 a9 6d d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83353f2:	8b 80 98 4d 00 00    	mov    0x4d98(%eax),%eax
 83353f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83353fb:	0f bf 45 c0          	movswl -0x40(%ebp),%eax
 83353ff:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8335402:	0f 85 e4 00 00 00    	jne    83354ec <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x14c>
 8335408:	8b 45 10             	mov    0x10(%ebp),%eax
 833540b:	89 04 24             	mov    %eax,(%esp)
 833540e:	e8 bd 09 00 00       	call   8335dd0 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EE5clearEv>
 8335413:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8335417:	75 0f                	jne    8335428 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x88>
 8335419:	e8 7d 6d d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833541e:	05 b8 4d 00 00       	add    $0x4db8,%eax
 8335423:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8335426:	eb 0d                	jmp    8335435 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x95>
 8335428:	e8 6e 6d d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 833542d:	05 d0 4d 00 00       	add    $0x4dd0,%eax
 8335432:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8335435:	0f be 45 bc          	movsbl -0x44(%ebp),%eax
 8335439:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833543c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833543f:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8335442:	89 54 24 08          	mov    %edx,0x8(%esp)
 8335446:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8335449:	89 54 24 04          	mov    %edx,0x4(%esp)
 833544d:	89 04 24             	mov    %eax,(%esp)
 8335450:	e8 97 09 00 00       	call   8335dec <_ZNSt8multimapIi26stConditionEventRewardInfoSt4lessIiESaISt4pairIKiS0_EEE11lower_boundERS4_>
 8335455:	83 ec 04             	sub    $0x4,%esp
 8335458:	0f be 45 bc          	movsbl -0x44(%ebp),%eax
 833545c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 833545f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8335462:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8335465:	89 54 24 08          	mov    %edx,0x8(%esp)
 8335469:	8b 55 f4             	mov    -0xc(%ebp),%edx
 833546c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8335470:	89 04 24             	mov    %eax,(%esp)
 8335473:	e8 a0 09 00 00       	call   8335e18 <_ZNSt8multimapIi26stConditionEventRewardInfoSt4lessIiESaISt4pairIKiS0_EEE11upper_boundERS4_>
 8335478:	83 ec 04             	sub    $0x4,%esp
 833547b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833547e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8335481:	eb 4e                	jmp    83354d1 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x131>
 8335483:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8335486:	89 04 24             	mov    %eax,(%esp)
 8335489:	e8 ca 09 00 00       	call   8335e58 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26stConditionEventRewardInfoEEptEv>
 833548e:	8b 50 04             	mov    0x4(%eax),%edx
 8335491:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8335494:	8b 50 08             	mov    0x8(%eax),%edx
 8335497:	89 55 d0             	mov    %edx,-0x30(%ebp)
 833549a:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 833549e:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 83354a2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83354a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83354a9:	8b 45 10             	mov    0x10(%ebp),%eax
 83354ac:	89 04 24             	mov    %eax,(%esp)
 83354af:	e8 b2 09 00 00       	call   8335e66 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EE9push_backERKS0_>
 83354b4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83354b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83354be:	00 
 83354bf:	8d 55 d8             	lea    -0x28(%ebp),%edx
 83354c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 83354c6:	89 04 24             	mov    %eax,(%esp)
 83354c9:	e8 0c 0a 00 00       	call   8335eda <_ZNSt17_Rb_tree_iteratorISt4pairIKi26stConditionEventRewardInfoEEppEi>
 83354ce:	83 ec 04             	sub    $0x4,%esp
 83354d1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83354d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83354d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83354db:	89 04 24             	mov    %eax,(%esp)
 83354de:	e8 61 09 00 00       	call   8335e44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26stConditionEventRewardInfoEEneERKS4_>
 83354e3:	84 c0                	test   %al,%al
 83354e5:	75 9c                	jne    8335483 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0xe3>
 83354e7:	eb 04                	jmp    83354ed <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x14d>
 83354e9:	90                   	nop
 83354ea:	eb 01                	jmp    83354ed <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc+0x14d>
 83354ec:	90                   	nop
 83354ed:	c9                   	leave
 83354ee:	c3                   	ret
 83354ef:	90                   	nop

```

```c
// CConditionEventManager::GetConditionRewardInfo @ 0x83353a0

/* CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&, short, char) */

void __thiscall
CConditionEventManager::GetConditionRewardInfo
          (CConditionEventManager *this,char param_1,vector *param_2,short param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2c;
  multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
  local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  _Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>> local_18 [4];
  int local_14;
  int *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar3 = G_CDataManager();
    local_14 = *(int *)(iVar3 + 0x4d98);
    if (param_3 == local_14) {
      std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::clear
                ((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> *)
                 param_2);
      if (param_1 == '\0') {
        iVar3 = G_CDataManager();
        local_10 = (int *)(iVar3 + 0x4db8);
      }
      else {
        iVar3 = G_CDataManager();
        local_10 = (int *)(iVar3 + 0x4dd0);
      }
      local_20 = (int)param_4;
      std::
      multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
      ::lower_bound((multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
                     *)&local_24,local_10);
      local_1c = (int)param_4;
      std::
      multimap<int,stConditionEventRewardInfo,std::less<int>,std::allocator<std::pair<int_const,stConditionEventRewardInfo>>>
      ::upper_bound(local_28,local_10);
      local_2c = local_24;
      while (cVar1 = std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::
                     operator!=((_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>
                                 *)&local_2c,(_Rb_tree_iterator *)local_28), cVar1 != '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>> *)
                           &local_2c);
        local_38 = *(undefined4 *)(iVar3 + 4);
        local_34 = *(undefined4 *)(iVar3 + 8);
        local_30 = *(undefined2 *)(iVar3 + 0xc);
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
        push_back((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> *)
                  param_2,(stConditionEventRewardInfo *)&local_38);
        std::_Rb_tree_iterator<std::pair<int_const,stConditionEventRewardInfo>>::operator++
                  (local_18,(int)&local_2c);
      }
    }
  }
  return;
}

```

---

## GetCurEventIndex

```asm
// === 08335754 CConditionEventManager::GetCurEventIndex  [0x08335754-0x833579d] ===
 8335754:	55                   	push   %ebp
 8335755:	89 e5                	mov    %esp,%ebp
 8335757:	83 ec 18             	sub    $0x18,%esp
 833575a:	a1 30 f7 41 09       	mov    0x941f730,%eax
 833575f:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 8335766:	00 
 8335767:	89 04 24             	mov    %eax,(%esp)
 833576a:	e8 29 02 de ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 833576f:	8b 10                	mov    (%eax),%edx
 8335771:	83 c2 34             	add    $0x34,%edx
 8335774:	8b 12                	mov    (%edx),%edx
 8335776:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833577d:	00 
 833577e:	89 04 24             	mov    %eax,(%esp)
 8335781:	ff d2                	call   *%edx
 8335783:	83 f0 01             	xor    $0x1,%eax
 8335786:	84 c0                	test   %al,%al
 8335788:	74 07                	je     8335791 <_ZN22CConditionEventManager16GetCurEventIndexEv+0x3d>
 833578a:	b8 00 00 00 00       	mov    $0x0,%eax
 833578f:	eb 0b                	jmp    833579c <_ZN22CConditionEventManager16GetCurEventIndexEv+0x48>
 8335791:	e8 05 6a d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8335796:	8b 80 98 4d 00 00    	mov    0x4d98(%eax),%eax
 833579c:	c9                   	leave
 833579d:	c3                   	ret

```

```c
// CConditionEventManager::GetCurEventIndex @ 0x8335754

/* CConditionEventManager::GetCurEventIndex() */

undefined4 CConditionEventManager::GetCurEventIndex(void)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CDataManager();
    uVar3 = *(undefined4 *)(iVar4 + 0x4d98);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## GetMaxRewardStep

```asm
// === 083354f0 CConditionEventManager::GetMaxRewardStep  [0x083354f0-0x8335565] ===
 83354f0:	55                   	push   %ebp
 83354f1:	89 e5                	mov    %esp,%ebp
 83354f3:	83 ec 38             	sub    $0x38,%esp
 83354f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83354f9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 83354fd:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8335502:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 8335509:	00 
 833550a:	89 04 24             	mov    %eax,(%esp)
 833550d:	e8 86 04 de ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8335512:	8b 10                	mov    (%eax),%edx
 8335514:	83 c2 34             	add    $0x34,%edx
 8335517:	8b 12                	mov    (%edx),%edx
 8335519:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8335520:	00 
 8335521:	89 04 24             	mov    %eax,(%esp)
 8335524:	ff d2                	call   *%edx
 8335526:	83 f0 01             	xor    $0x1,%eax
 8335529:	84 c0                	test   %al,%al
 833552b:	74 07                	je     8335534 <_ZN22CConditionEventManager16GetMaxRewardStepEs+0x44>
 833552d:	b8 00 00 00 00       	mov    $0x0,%eax
 8335532:	eb 30                	jmp    8335564 <_ZN22CConditionEventManager16GetMaxRewardStepEs+0x74>
 8335534:	e8 62 6c d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8335539:	8b 80 98 4d 00 00    	mov    0x4d98(%eax),%eax
 833553f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8335542:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 8335546:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8335549:	74 07                	je     8335552 <_ZN22CConditionEventManager16GetMaxRewardStepEs+0x62>
 833554b:	b8 00 00 00 00       	mov    $0x0,%eax
 8335550:	eb 12                	jmp    8335564 <_ZN22CConditionEventManager16GetMaxRewardStepEs+0x74>
 8335552:	e8 44 6c d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8335557:	05 a0 4d 00 00       	add    $0x4da0,%eax
 833555c:	89 04 24             	mov    %eax,(%esp)
 833555f:	e8 6c c4 dd ff       	call   81119d0 <_ZNKSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4sizeEv>
 8335564:	c9                   	leave
 8335565:	c3                   	ret

```

```c
// CConditionEventManager::GetMaxRewardStep @ 0x83354f0

/* CConditionEventManager::GetMaxRewardStep(short) */

undefined4 __thiscall
CConditionEventManager::GetMaxRewardStep(CConditionEventManager *this,short param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    iVar4 = G_CDataManager();
    if ((int)param_1 == *(int *)(iVar4 + 0x4d98)) {
      iVar4 = G_CDataManager();
      uVar3 = std::
              map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
              ::size((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
                      *)(iVar4 + 0x4da0));
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## IsDoubleGoldCard

```asm
// === 083358bc CConditionEventManager::IsDoubleGoldCard  [0x083358bc-0x8335a39] ===
 83358bc:	55                   	push   %ebp
 83358bd:	89 e5                	mov    %esp,%ebp
 83358bf:	56                   	push   %esi
 83358c0:	53                   	push   %ebx
 83358c1:	83 ec 50             	sub    $0x50,%esp
 83358c4:	8b 45 10             	mov    0x10(%ebp),%eax
 83358c7:	88 45 d4             	mov    %al,-0x2c(%ebp)
 83358ca:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 83358ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 83358d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83358d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83358d9:	8b 45 08             	mov    0x8(%ebp),%eax
 83358dc:	89 04 24             	mov    %eax,(%esp)
 83358df:	e8 a6 01 00 00       	call   8335a8a <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc>
 83358e4:	88 45 f3             	mov    %al,-0xd(%ebp)
 83358e7:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83358eb:	83 f0 01             	xor    $0x1,%eax
 83358ee:	84 c0                	test   %al,%al
 83358f0:	74 0a                	je     83358fc <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x40>
 83358f2:	bb 00 00 00 00       	mov    $0x0,%ebx
 83358f7:	e9 35 01 00 00       	jmp    8335a31 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x175>
 83358fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83358ff:	89 04 24             	mov    %eax,(%esp)
 8335902:	e8 4d fe ff ff       	call   8335754 <_ZN22CConditionEventManager16GetCurEventIndexEv>
 8335907:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833590a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833590d:	89 04 24             	mov    %eax,(%esp)
 8335910:	e8 b3 03 00 00       	call   8335cc8 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEC1Ev>
 8335915:	0f be 55 d4          	movsbl -0x2c(%ebp),%edx
 8335919:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833591c:	98                   	cwtl
 833591d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8335921:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8335925:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8335928:	89 44 24 08          	mov    %eax,0x8(%esp)
 833592c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8335933:	00 
 8335934:	8b 45 08             	mov    0x8(%ebp),%eax
 8335937:	89 04 24             	mov    %eax,(%esp)
 833593a:	e8 61 fa ff ff       	call   83353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>
 833593f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8335942:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335946:	8b 45 08             	mov    0x8(%ebp),%eax
 8335949:	89 04 24             	mov    %eax,(%esp)
 833594c:	e8 e9 00 00 00       	call   8335a3a <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>
 8335951:	88 45 f3             	mov    %al,-0xd(%ebp)
 8335954:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8335958:	83 f0 01             	xor    $0x1,%eax
 833595b:	84 c0                	test   %al,%al
 833595d:	74 16                	je     8335975 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0xb9>
 833595f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335962:	89 04 24             	mov    %eax,(%esp)
 8335965:	e8 e2 f7 31 00       	call   865514c <_ZN5CUser8GetPartyEv>
 833596a:	85 c0                	test   %eax,%eax
 833596c:	74 07                	je     8335975 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0xb9>
 833596e:	b8 01 00 00 00       	mov    $0x1,%eax
 8335973:	eb 05                	jmp    833597a <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0xbe>
 8335975:	b8 00 00 00 00       	mov    $0x0,%eax
 833597a:	84 c0                	test   %al,%al
 833597c:	0f 84 83 00 00 00    	je     8335a05 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x149>
 8335982:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335985:	89 04 24             	mov    %eax,(%esp)
 8335988:	e8 bf f7 31 00       	call   865514c <_ZN5CUser8GetPartyEv>
 833598d:	89 04 24             	mov    %eax,(%esp)
 8335990:	e8 bd 7f ef ff       	call   822d952 <_ZN6CParty14is_quick_partyEv>
 8335995:	84 c0                	test   %al,%al
 8335997:	74 6c                	je     8335a05 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x149>
 8335999:	8d 45 d8             	lea    -0x28(%ebp),%eax
 833599c:	89 04 24             	mov    %eax,(%esp)
 833599f:	e8 24 03 00 00       	call   8335cc8 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEC1Ev>
 83359a4:	0f be 55 d4          	movsbl -0x2c(%ebp),%edx
 83359a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83359ab:	98                   	cwtl
 83359ac:	89 54 24 10          	mov    %edx,0x10(%esp)
 83359b0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83359b4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83359b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83359bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83359c2:	00 
 83359c3:	8b 45 08             	mov    0x8(%ebp),%eax
 83359c6:	89 04 24             	mov    %eax,(%esp)
 83359c9:	e8 d2 f9 ff ff       	call   83353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>
 83359ce:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83359d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83359d5:	8b 45 08             	mov    0x8(%ebp),%eax
 83359d8:	89 04 24             	mov    %eax,(%esp)
 83359db:	e8 5a 00 00 00       	call   8335a3a <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>
 83359e0:	88 45 f3             	mov    %al,-0xd(%ebp)
 83359e3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83359e6:	89 04 24             	mov    %eax,(%esp)
 83359e9:	e8 ee 02 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 83359ee:	eb 15                	jmp    8335a05 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x149>
 83359f0:	89 d3                	mov    %edx,%ebx
 83359f2:	89 c6                	mov    %eax,%esi
 83359f4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83359f7:	89 04 24             	mov    %eax,(%esp)
 83359fa:	e8 dd 02 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 83359ff:	89 f0                	mov    %esi,%eax
 8335a01:	89 da                	mov    %ebx,%edx
 8335a03:	eb 11                	jmp    8335a16 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x15a>
 8335a05:	0f b6 5d f3          	movzbl -0xd(%ebp),%ebx
 8335a09:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8335a0c:	89 04 24             	mov    %eax,(%esp)
 8335a0f:	e8 c8 02 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335a14:	eb 1b                	jmp    8335a31 <_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc+0x175>
 8335a16:	89 d3                	mov    %edx,%ebx
 8335a18:	89 c6                	mov    %eax,%esi
 8335a1a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8335a1d:	89 04 24             	mov    %eax,(%esp)
 8335a20:	e8 b7 02 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335a25:	89 f0                	mov    %esi,%eax
 8335a27:	89 da                	mov    %ebx,%edx
 8335a29:	89 04 24             	mov    %eax,(%esp)
 8335a2c:	e8 1f dd 7a 00       	call   8ae3750 <_Unwind_Resume>
 8335a31:	89 d8                	mov    %ebx,%eax
 8335a33:	83 c4 50             	add    $0x50,%esp
 8335a36:	5b                   	pop    %ebx
 8335a37:	5e                   	pop    %esi
 8335a38:	5d                   	pop    %ebp
 8335a39:	c3                   	ret

```

```c
// CConditionEventManager::IsDoubleGoldCard @ 0x83358bc

/* CConditionEventManager::IsDoubleGoldCard(CUser*, char) */

char __thiscall
CConditionEventManager::IsDoubleGoldCard(CConditionEventManager *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this_00;
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_2c [12];
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_20 [15];
  char local_11;
  undefined4 local_10;
  
  local_11 = CheckErrorCardForStep(this,param_1,param_2);
  if (local_11 == '\x01') {
    local_10 = GetCurEventIndex();
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
              (local_20);
                    /* try { // try from 0833593a to 083359a3 has its CatchHandler @ 08335a16 */
    GetConditionRewardInfo(this,'\0',(vector *)local_20,(short)local_10,param_2);
    local_11 = IsDoubleGoldCardProcess(this,(vector *)local_20);
    if ((local_11 == '\x01') || (iVar3 = CUser::GetParty(param_1), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      this_00 = (CParty *)CUser::GetParty(param_1);
      cVar2 = CParty::is_quick_party(this_00);
      if (cVar2 != '\0') {
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
                  (local_2c);
                    /* try { // try from 083359c9 to 083359df has its CatchHandler @ 083359f0 */
        GetConditionRewardInfo(this,'\x01',(vector *)local_2c,(short)local_10,param_2);
        local_11 = IsDoubleGoldCardProcess(this,(vector *)local_2c);
                    /* try { // try from 083359e9 to 083359ed has its CatchHandler @ 08335a16 */
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
                  (local_2c);
      }
    }
    cVar2 = local_11;
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
              (local_20);
    return cVar2;
  }
  return '\0';
}

```

---

## IsDoubleGoldCardProcess

```asm
// === 08335a3a CConditionEventManager::IsDoubleGoldCardProcess  [0x08335a3a-0x8335a89] ===
 8335a3a:	55                   	push   %ebp
 8335a3b:	89 e5                	mov    %esp,%ebp
 8335a3d:	83 ec 28             	sub    $0x28,%esp
 8335a40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8335a47:	eb 25                	jmp    8335a6e <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x34>
 8335a49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8335a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335a50:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335a53:	89 04 24             	mov    %eax,(%esp)
 8335a56:	e8 df 04 00 00       	call   8335f3a <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEixEj>
 8335a5b:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 8335a5f:	84 c0                	test   %al,%al
 8335a61:	74 07                	je     8335a6a <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x30>
 8335a63:	b8 01 00 00 00       	mov    $0x1,%eax
 8335a68:	eb 1e                	jmp    8335a88 <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x4e>
 8335a6a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8335a6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335a71:	89 04 24             	mov    %eax,(%esp)
 8335a74:	e8 9f 04 00 00       	call   8335f18 <_ZNKSt6vectorI26stConditionEventRewardInfoSaIS0_EE4sizeEv>
 8335a79:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8335a7c:	0f 97 c0             	seta   %al
 8335a7f:	84 c0                	test   %al,%al
 8335a81:	75 c6                	jne    8335a49 <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0xf>
 8335a83:	b8 00 00 00 00       	mov    $0x0,%eax
 8335a88:	c9                   	leave
 8335a89:	c3                   	ret

```

```c
// CConditionEventManager::IsDoubleGoldCardProcess @ 0x8335a3a

/* CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&) */

undefined4 __thiscall
CConditionEventManager::IsDoubleGoldCardProcess(CConditionEventManager *this,vector *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::size
                      ((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    iVar1 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            operator[]((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1,local_10);
    if (*(char *)(iVar1 + 9) != '\0') break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## IsFreeGoldCard

```asm
// === 0833579e CConditionEventManager::IsFreeGoldCard  [0x0833579e-0x833586b] ===
 833579e:	55                   	push   %ebp
 833579f:	89 e5                	mov    %esp,%ebp
 83357a1:	56                   	push   %esi
 83357a2:	53                   	push   %ebx
 83357a3:	83 ec 40             	sub    $0x40,%esp
 83357a6:	8b 45 10             	mov    0x10(%ebp),%eax
 83357a9:	88 45 e4             	mov    %al,-0x1c(%ebp)
 83357ac:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 83357b0:	89 44 24 08          	mov    %eax,0x8(%esp)
 83357b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83357b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83357bb:	8b 45 08             	mov    0x8(%ebp),%eax
 83357be:	89 04 24             	mov    %eax,(%esp)
 83357c1:	e8 c4 02 00 00       	call   8335a8a <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc>
 83357c6:	88 45 f5             	mov    %al,-0xb(%ebp)
 83357c9:	0f b6 45 f5          	movzbl -0xb(%ebp),%eax
 83357cd:	83 f0 01             	xor    $0x1,%eax
 83357d0:	84 c0                	test   %al,%al
 83357d2:	74 0a                	je     83357de <_ZN22CConditionEventManager14IsFreeGoldCardEP5CUserc+0x40>
 83357d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 83357d9:	e9 85 00 00 00       	jmp    8335863 <_ZN22CConditionEventManager14IsFreeGoldCardEP5CUserc+0xc5>
 83357de:	8b 45 08             	mov    0x8(%ebp),%eax
 83357e1:	89 04 24             	mov    %eax,(%esp)
 83357e4:	e8 6b ff ff ff       	call   8335754 <_ZN22CConditionEventManager16GetCurEventIndexEv>
 83357e9:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 83357ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83357f0:	89 04 24             	mov    %eax,(%esp)
 83357f3:	e8 d0 04 00 00       	call   8335cc8 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEC1Ev>
 83357f8:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 83357fc:	0f bf 45 f6          	movswl -0xa(%ebp),%eax
 8335800:	89 54 24 10          	mov    %edx,0x10(%esp)
 8335804:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8335808:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833580b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833580f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8335816:	00 
 8335817:	8b 45 08             	mov    0x8(%ebp),%eax
 833581a:	89 04 24             	mov    %eax,(%esp)
 833581d:	e8 7e fb ff ff       	call   83353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>
 8335822:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8335825:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335829:	8b 45 08             	mov    0x8(%ebp),%eax
 833582c:	89 04 24             	mov    %eax,(%esp)
 833582f:	e8 38 00 00 00       	call   833586c <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>
 8335834:	88 45 f5             	mov    %al,-0xb(%ebp)
 8335837:	0f b6 5d f5          	movzbl -0xb(%ebp),%ebx
 833583b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833583e:	89 04 24             	mov    %eax,(%esp)
 8335841:	e8 96 04 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335846:	eb 1b                	jmp    8335863 <_ZN22CConditionEventManager14IsFreeGoldCardEP5CUserc+0xc5>
 8335848:	89 d3                	mov    %edx,%ebx
 833584a:	89 c6                	mov    %eax,%esi
 833584c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833584f:	89 04 24             	mov    %eax,(%esp)
 8335852:	e8 85 04 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335857:	89 f0                	mov    %esi,%eax
 8335859:	89 da                	mov    %ebx,%edx
 833585b:	89 04 24             	mov    %eax,(%esp)
 833585e:	e8 ed de 7a 00       	call   8ae3750 <_Unwind_Resume>
 8335863:	89 d8                	mov    %ebx,%eax
 8335865:	83 c4 40             	add    $0x40,%esp
 8335868:	5b                   	pop    %ebx
 8335869:	5e                   	pop    %esi
 833586a:	5d                   	pop    %ebp
 833586b:	c3                   	ret

```

```c
// CConditionEventManager::IsFreeGoldCard @ 0x833579e

/* CConditionEventManager::IsFreeGoldCard(CUser*, char) */

undefined1 __thiscall
CConditionEventManager::IsFreeGoldCard(CConditionEventManager *this,CUser *param_1,char param_2)

{
  undefined1 uVar1;
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_1c [13];
  char local_f;
  short local_e;
  
  local_f = CheckErrorCardForStep(this,param_1,param_2);
  if (local_f == '\x01') {
    local_e = GetCurEventIndex();
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
              (local_1c);
                    /* try { // try from 0833581d to 08335833 has its CatchHandler @ 08335848 */
    GetConditionRewardInfo(this,'\0',(vector *)local_1c,local_e,param_2);
    uVar1 = IsFreeGoldCardProcess(this,(vector *)local_1c);
    local_f = uVar1;
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
              (local_1c);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsFreeGoldCardProcess

```asm
// === 0833586c CConditionEventManager::IsFreeGoldCardProcess  [0x0833586c-0x83358bb] ===
 833586c:	55                   	push   %ebp
 833586d:	89 e5                	mov    %esp,%ebp
 833586f:	83 ec 28             	sub    $0x28,%esp
 8335872:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8335879:	eb 25                	jmp    83358a0 <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x34>
 833587b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833587e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335882:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335885:	89 04 24             	mov    %eax,(%esp)
 8335888:	e8 ad 06 00 00       	call   8335f3a <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEixEj>
 833588d:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8335891:	84 c0                	test   %al,%al
 8335893:	74 07                	je     833589c <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x30>
 8335895:	b8 01 00 00 00       	mov    $0x1,%eax
 833589a:	eb 1e                	jmp    83358ba <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0x4e>
 833589c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83358a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83358a3:	89 04 24             	mov    %eax,(%esp)
 83358a6:	e8 6d 06 00 00       	call   8335f18 <_ZNKSt6vectorI26stConditionEventRewardInfoSaIS0_EE4sizeEv>
 83358ab:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 83358ae:	0f 97 c0             	seta   %al
 83358b1:	84 c0                	test   %al,%al
 83358b3:	75 c6                	jne    833587b <_ZN22CConditionEventManager21IsFreeGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE+0xf>
 83358b5:	b8 00 00 00 00       	mov    $0x0,%eax
 83358ba:	c9                   	leave
 83358bb:	c3                   	ret

```

```c
// CConditionEventManager::IsFreeGoldCardProcess @ 0x833586c

/* CConditionEventManager::IsFreeGoldCardProcess(std::vector<stConditionEventRewardInfo,
   std::allocator<stConditionEventRewardInfo> >&) */

undefined4 __thiscall
CConditionEventManager::IsFreeGoldCardProcess(CConditionEventManager *this,vector *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::size
                      ((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1);
    if (uVar2 <= local_10) {
      return 0;
    }
    iVar1 = std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            operator[]((vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>
                        *)param_1,local_10);
    if (*(char *)(iVar1 + 8) != '\0') break;
    local_10 = local_10 + 1;
  }
  return 1;
}

```

---

## ProcessCheckStepUp

```asm
// === 08335566 CConditionEventManager::ProcessCheckStepUp  [0x08335566-0x83355e5] ===
 8335566:	55                   	push   %ebp
 8335567:	89 e5                	mov    %esp,%ebp
 8335569:	83 ec 38             	sub    $0x38,%esp
 833556c:	8b 45 10             	mov    0x10(%ebp),%eax
 833556f:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8335573:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8335578:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 833557f:	00 
 8335580:	89 04 24             	mov    %eax,(%esp)
 8335583:	e8 10 04 de ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8335588:	8b 10                	mov    (%eax),%edx
 833558a:	83 c2 34             	add    $0x34,%edx
 833558d:	8b 12                	mov    (%edx),%edx
 833558f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8335596:	00 
 8335597:	89 04 24             	mov    %eax,(%esp)
 833559a:	ff d2                	call   *%edx
 833559c:	83 f0 01             	xor    $0x1,%eax
 833559f:	84 c0                	test   %al,%al
 83355a1:	75 3c                	jne    83355df <_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers+0x79>
 83355a3:	e8 f3 6b d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83355a8:	8b 80 98 4d 00 00    	mov    0x4d98(%eax),%eax
 83355ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83355b1:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 83355b5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 83355b8:	75 28                	jne    83355e2 <_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers+0x7c>
 83355ba:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 83355be:	83 f8 02             	cmp    $0x2,%eax
 83355c1:	75 20                	jne    83355e3 <_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers+0x7d>
 83355c3:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 83355c7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83355cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83355ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 83355d2:	8b 45 08             	mov    0x8(%ebp),%eax
 83355d5:	89 04 24             	mov    %eax,(%esp)
 83355d8:	e8 09 00 00 00       	call   83355e6 <_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers>
 83355dd:	eb 04                	jmp    83355e3 <_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers+0x7d>
 83355df:	90                   	nop
 83355e0:	eb 01                	jmp    83355e3 <_ZN22CConditionEventManager18ProcessCheckStepUpEP5CUsers+0x7d>
 83355e2:	90                   	nop
 83355e3:	c9                   	leave
 83355e4:	c3                   	ret
 83355e5:	90                   	nop

```

```c
// CConditionEventManager::ProcessCheckStepUp @ 0x8335566

/* CConditionEventManager::ProcessCheckStepUp(CUser*, short) */

void __thiscall
CConditionEventManager::ProcessCheckStepUp
          (CConditionEventManager *this,CUser *param_1,short param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (((cVar1 == '\x01') && (iVar3 = G_CDataManager(), (int)param_2 == *(int *)(iVar3 + 0x4d98))) &&
     (param_2 == 2)) {
    _processProperDungeonClearEvent((CUser *)this,(short)param_1);
  }
  return;
}

```

---

## RequestConditionEventReward

```asm
// === 08334850 CConditionEventManager::RequestConditionEventReward  [0x08334850-0x8335263] ===
 8334850:	55                   	push   %ebp
 8334851:	89 e5                	mov    %esp,%ebp
 8334853:	57                   	push   %edi
 8334854:	56                   	push   %esi
 8334855:	53                   	push   %ebx
 8334856:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 833485c:	8b 55 10             	mov    0x10(%ebp),%edx
 833485f:	8b 45 14             	mov    0x14(%ebp),%eax
 8334862:	66 89 95 04 fe ff ff 	mov    %dx,-0x1fc(%ebp)
 8334869:	88 85 00 fe ff ff    	mov    %al,-0x200(%ebp)
 833486f:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8334874:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 833487b:	00 
 833487c:	89 04 24             	mov    %eax,(%esp)
 833487f:	e8 14 11 de ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8334884:	8b 10                	mov    (%eax),%edx
 8334886:	83 c2 34             	add    $0x34,%edx
 8334889:	8b 12                	mov    (%edx),%edx
 833488b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8334892:	00 
 8334893:	89 04 24             	mov    %eax,(%esp)
 8334896:	ff d2                	call   *%edx
 8334898:	83 f0 01             	xor    $0x1,%eax
 833489b:	84 c0                	test   %al,%al
 833489d:	74 0a                	je     83348a9 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x59>
 833489f:	bb 00 00 00 00       	mov    $0x0,%ebx
 83348a4:	e9 ae 09 00 00       	jmp    8335257 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa07>
 83348a9:	e8 ed 78 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83348ae:	8b 80 98 4d 00 00    	mov    0x4d98(%eax),%eax
 83348b4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 83348b7:	0f bf 85 04 fe ff ff 	movswl -0x1fc(%ebp),%eax
 83348be:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 83348c1:	74 0a                	je     83348cd <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x7d>
 83348c3:	bb 01 00 00 00       	mov    $0x1,%ebx
 83348c8:	e9 8a 09 00 00       	jmp    8335257 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa07>
 83348cd:	80 bd 00 fe ff ff 00 	cmpb   $0x0,-0x200(%ebp)
 83348d4:	7f 0a                	jg     83348e0 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x90>
 83348d6:	bb 13 00 00 00       	mov    $0x13,%ebx
 83348db:	e9 77 09 00 00       	jmp    8335257 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa07>
 83348e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83348e3:	89 04 24             	mov    %eax,(%esp)
 83348e6:	e8 bd 12 00 00       	call   8335ba8 <_ZNK15CUserCharacInfo24GetCurConditionEventStepEv>
 83348eb:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 83348ef:	66 0f be 85 00 fe ff 	movsbw -0x200(%ebp),%ax
 83348f6:	ff 
 83348f7:	66 3b 45 d0          	cmp    -0x30(%ebp),%ax
 83348fb:	7e 0a                	jle    8334907 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xb7>
 83348fd:	bb 13 00 00 00       	mov    $0x13,%ebx
 8334902:	e9 50 09 00 00       	jmp    8335257 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa07>
 8334907:	8b 45 0c             	mov    0xc(%ebp),%eax
 833490a:	89 04 24             	mov    %eax,(%esp)
 833490d:	e8 02 13 00 00       	call   8335c14 <_ZNK15CUserCharacInfo30GetCurConditionEventRewardStepEv>
 8334912:	66 89 45 d2          	mov    %ax,-0x2e(%ebp)
 8334916:	0f bf 45 d2          	movswl -0x2e(%ebp),%eax
 833491a:	0f be 95 00 fe ff ff 	movsbl -0x200(%ebp),%edx
 8334921:	83 ea 01             	sub    $0x1,%edx
 8334924:	39 d0                	cmp    %edx,%eax
 8334926:	74 0a                	je     8334932 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xe2>
 8334928:	bb 13 00 00 00       	mov    $0x13,%ebx
 833492d:	e9 25 09 00 00       	jmp    8335257 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0xa07>
 8334932:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8334935:	89 04 24             	mov    %eax,(%esp)
 8334938:	e8 8b 13 00 00       	call   8335cc8 <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EEC1Ev>
 833493d:	0f be 95 00 fe ff ff 	movsbl -0x200(%ebp),%edx
 8334944:	0f bf 85 04 fe ff ff 	movswl -0x1fc(%ebp),%eax
 833494b:	89 54 24 10          	mov    %edx,0x10(%esp)
 833494f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8334953:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8334956:	89 44 24 08          	mov    %eax,0x8(%esp)
 833495a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8334961:	00 
 8334962:	8b 45 08             	mov    0x8(%ebp),%eax
 8334965:	89 04 24             	mov    %eax,(%esp)
 8334968:	e8 33 0a 00 00       	call   83353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>
 833496d:	8b 45 18             	mov    0x18(%ebp),%eax
 8334970:	89 44 24 08          	mov    %eax,0x8(%esp)
 8334974:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8334977:	89 44 24 04          	mov    %eax,0x4(%esp)
 833497b:	8b 45 08             	mov    0x8(%ebp),%eax
 833497e:	89 04 24             	mov    %eax,(%esp)
 8334981:	e8 de 08 00 00       	call   8335264 <_ZN22CConditionEventManager30ConditionRewardSameItemCombineERSt6vectorI26stConditionEventRewardInfoSaIS1_EERSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 8334986:	8b 45 18             	mov    0x18(%ebp),%eax
 8334989:	89 04 24             	mov    %eax,(%esp)
 833498c:	e8 2f 5a fc ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 8334991:	83 f0 01             	xor    $0x1,%eax
 8334994:	84 c0                	test   %al,%al
 8334996:	0f 84 83 08 00 00    	je     833521f <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9cf>
 833499c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 833499f:	8b 55 18             	mov    0x18(%ebp),%edx
 83349a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 83349a6:	89 04 24             	mov    %eax,(%esp)
 83349a9:	e8 f2 d5 e1 ff       	call   8151fa0 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5beginEv>
 83349ae:	83 ec 04             	sub    $0x4,%esp
 83349b1:	e9 3a 08 00 00       	jmp    83351f0 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9a0>
 83349b6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83349b9:	89 04 24             	mov    %eax,(%esp)
 83349bc:	e8 7f 89 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 83349c1:	8b 00                	mov    (%eax),%eax
 83349c3:	83 f8 01             	cmp    $0x1,%eax
 83349c6:	75 19                	jne    83349e1 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x191>
 83349c8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83349cb:	89 04 24             	mov    %eax,(%esp)
 83349ce:	e8 6d 89 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 83349d3:	8b 40 04             	mov    0x4(%eax),%eax
 83349d6:	85 c0                	test   %eax,%eax
 83349d8:	78 07                	js     83349e1 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x191>
 83349da:	b8 01 00 00 00       	mov    $0x1,%eax
 83349df:	eb 05                	jmp    83349e6 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x196>
 83349e1:	b8 00 00 00 00       	mov    $0x0,%eax
 83349e6:	84 c0                	test   %al,%al
 83349e8:	0f 84 99 00 00 00    	je     8334a87 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x237>
 83349ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 83349f1:	89 04 24             	mov    %eax,(%esp)
 83349f4:	e8 85 58 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83349f9:	89 04 24             	mov    %eax,(%esp)
 83349fc:	e8 79 c2 dd ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 8334a01:	89 c6                	mov    %eax,%esi
 8334a03:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8334a06:	89 04 24             	mov    %eax,(%esp)
 8334a09:	e8 32 89 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8334a0e:	8b 40 04             	mov    0x4(%eax),%eax
 8334a11:	01 c6                	add    %eax,%esi
 8334a13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334a16:	89 04 24             	mov    %eax,(%esp)
 8334a19:	e8 70 58 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8334a1e:	89 74 24 04          	mov    %esi,0x4(%esp)
 8334a22:	89 04 24             	mov    %eax,(%esp)
 8334a25:	e8 5c c2 dd ff       	call   8110c86 <_ZN10CInventory12SetEventCoinEj>
 8334a2a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8334a2d:	89 04 24             	mov    %eax,(%esp)
 8334a30:	e8 0b 89 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8334a35:	8b 70 04             	mov    0x4(%eax),%esi
 8334a38:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334a3b:	89 04 24             	mov    %eax,(%esp)
 8334a3e:	e8 3b 58 da ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8334a43:	89 04 24             	mov    %eax,(%esp)
 8334a46:	e8 2f c2 dd ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 8334a4b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8334a4e:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8334a54:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8334a5b:	00 
 8334a5c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8334a60:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334a64:	89 14 24             	mov    %edx,(%esp)
 8334a67:	e8 ec f1 34 00       	call   8683c58 <_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason>
 8334a6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334a6f:	89 04 24             	mov    %eax,(%esp)
 8334a72:	e8 61 ba 31 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 8334a77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334a7a:	89 04 24             	mov    %eax,(%esp)
 8334a7d:	e8 86 1d 32 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 8334a82:	e9 5e 07 00 00       	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334a87:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8334a8a:	89 04 24             	mov    %eax,(%esp)
 8334a8d:	e8 ae 88 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8334a92:	8b 30                	mov    (%eax),%esi
 8334a94:	e8 02 77 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8334a99:	89 74 24 04          	mov    %esi,0x4(%esp)
 8334a9d:	89 04 24             	mov    %eax,(%esp)
 8334aa0:	e8 8d af 02 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8334aa5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8334aa8:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8334aac:	0f 84 2c 07 00 00    	je     83351de <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x98e>
 8334ab2:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 8334ab8:	89 04 24             	mov    %eax,(%esp)
 8334abb:	e8 94 6d d9 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8334ac0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8334ac3:	89 04 24             	mov    %eax,(%esp)
 8334ac6:	e8 75 88 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8334acb:	8b 00                	mov    (%eax),%eax
 8334acd:	89 85 0d ff ff ff    	mov    %eax,-0xf3(%ebp)
 8334ad3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8334ad6:	89 04 24             	mov    %eax,(%esp)
 8334ad9:	e8 62 88 d9 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 8334ade:	8b 70 04             	mov    0x4(%eax),%esi
 8334ae1:	e8 b5 76 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8334ae6:	8b 40 0c             	mov    0xc(%eax),%eax
 8334ae9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8334aed:	8d 95 0b ff ff ff    	lea    -0xf5(%ebp),%edx
 8334af3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334af7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8334afe:	00 
 8334aff:	89 04 24             	mov    %eax,(%esp)
 8334b02:	e8 b1 d4 1d 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 8334b07:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 8334b0d:	85 c0                	test   %eax,%eax
 8334b0f:	74 19                	je     8334b2a <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2da>
 8334b11:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 8334b17:	89 04 24             	mov    %eax,(%esp)
 8334b1a:	e8 1b 2d dc ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 8334b1f:	85 c0                	test   %eax,%eax
 8334b21:	74 07                	je     8334b2a <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2da>
 8334b23:	b8 01 00 00 00       	mov    $0x1,%eax
 8334b28:	eb 05                	jmp    8334b2f <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x2df>
 8334b2a:	b8 00 00 00 00       	mov    $0x0,%eax
 8334b2f:	84 c0                	test   %al,%al
 8334b31:	0f 84 ae 06 00 00    	je     83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334b37:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8334b3e:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8334b45:	c6 45 af 00          	movb   $0x0,-0x51(%ebp)
 8334b49:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 8334b4f:	89 c2                	mov    %eax,%edx
 8334b51:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8334b56:	8d 4d af             	lea    -0x51(%ebp),%ecx
 8334b59:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8334b5d:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 8334b60:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8334b64:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8334b67:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8334b6b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334b6f:	89 04 24             	mov    %eax,(%esp)
 8334b72:	e8 a7 fe fe ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8334b77:	84 c0                	test   %al,%al
 8334b79:	0f 84 1f 04 00 00    	je     8334f9e <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x74e>
 8334b7f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8334b82:	8b 00                	mov    (%eax),%eax
 8334b84:	83 c0 0c             	add    $0xc,%eax
 8334b87:	8b 10                	mov    (%eax),%edx
 8334b89:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8334b8c:	89 04 24             	mov    %eax,(%esp)
 8334b8f:	ff d2                	call   *%edx
 8334b91:	83 f8 10             	cmp    $0x10,%eax
 8334b94:	74 12                	je     8334ba8 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x358>
 8334b96:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 8334b9c:	83 f8 01             	cmp    $0x1,%eax
 8334b9f:	74 07                	je     8334ba8 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x358>
 8334ba1:	b8 01 00 00 00       	mov    $0x1,%eax
 8334ba6:	eb 05                	jmp    8334bad <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x35d>
 8334ba8:	b8 00 00 00 00       	mov    $0x0,%eax
 8334bad:	84 c0                	test   %al,%al
 8334baf:	0f 84 b9 01 00 00    	je     8334d6e <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x51e>
 8334bb5:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8334bbc:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 8334bc2:	89 c6                	mov    %eax,%esi
 8334bc4:	e8 d2 75 d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8334bc9:	8b 40 0c             	mov    0xc(%eax),%eax
 8334bcc:	89 74 24 04          	mov    %esi,0x4(%esp)
 8334bd0:	89 04 24             	mov    %eax,(%esp)
 8334bd3:	e8 34 55 e4 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8334bd8:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8334bdb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8334be2:	e8 b7 70 d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8334be7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8334bea:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8334bed:	89 04 24             	mov    %eax,(%esp)
 8334bf0:	e8 9d 60 e1 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8334bf5:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8334bf8:	89 04 24             	mov    %eax,(%esp)
 8334bfb:	e8 44 56 e4 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 8334c00:	8b 85 0d ff ff ff    	mov    -0xf3(%ebp),%eax
 8334c06:	89 c2                	mov    %eax,%edx
 8334c08:	a1 44 f7 41 09       	mov    0x941f744,%eax
 8334c0d:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 8334c14:	00 
 8334c15:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 8334c1c:	00 
 8334c1d:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8334c24:	00 
 8334c25:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8334c2c:	00 
 8334c2d:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 8334c30:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8334c34:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 8334c37:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8334c3b:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8334c42:	00 
 8334c43:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8334c46:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8334c4a:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 8334c4d:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8334c51:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8334c54:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8334c58:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334c5c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8334c5f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334c63:	89 04 24             	mov    %eax,(%esp)
 8334c66:	e8 13 0c ff ff       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 8334c6b:	84 c0                	test   %al,%al
 8334c6d:	0f 84 92 00 00 00    	je     8334d05 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4b5>
 8334c73:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8334c76:	85 c0                	test   %eax,%eax
 8334c78:	74 0f                	je     8334c89 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x439>
 8334c7a:	bb 11 00 00 00       	mov    $0x11,%ebx
 8334c7f:	be 00 00 00 00       	mov    $0x0,%esi
 8334c84:	e9 98 00 00 00       	jmp    8334d21 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4d1>
 8334c89:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8334c8d:	74 20                	je     8334caf <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x45f>
 8334c8f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8334c92:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334c99:	89 04 24             	mov    %eax,(%esp)
 8334c9c:	e8 d7 8b 31 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8334ca1:	83 f0 01             	xor    $0x1,%eax
 8334ca4:	84 c0                	test   %al,%al
 8334ca6:	74 07                	je     8334caf <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x45f>
 8334ca8:	b8 01 00 00 00       	mov    $0x1,%eax
 8334cad:	eb 05                	jmp    8334cb4 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x464>
 8334caf:	b8 00 00 00 00       	mov    $0x0,%eax
 8334cb4:	84 c0                	test   %al,%al
 8334cb6:	74 4d                	je     8334d05 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4b5>
 8334cb8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8334cbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334cbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334cc2:	89 04 24             	mov    %eax,(%esp)
 8334cc5:	e8 84 8b 31 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 8334cca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8334cd1:	00 
 8334cd2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8334cd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8334cd9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8334cdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334ce0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334ce3:	89 04 24             	mov    %eax,(%esp)
 8334ce6:	e8 45 0d ff ff       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8334ceb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8334cee:	89 44 24 08          	mov    %eax,0x8(%esp)
 8334cf2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8334cf9:	00 
 8334cfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334cfd:	89 04 24             	mov    %eax,(%esp)
 8334d00:	e8 9f 8c 31 00       	call   864d9a4 <_ZN5CUser19SendRestrictedGoodsEbi>
 8334d05:	be 01 00 00 00       	mov    $0x1,%esi
 8334d0a:	eb 15                	jmp    8334d21 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4d1>
 8334d0c:	89 d3                	mov    %edx,%ebx
 8334d0e:	89 c6                	mov    %eax,%esi
 8334d10:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8334d13:	89 04 24             	mov    %eax,(%esp)
 8334d16:	e8 e1 55 e4 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8334d1b:	89 f0                	mov    %esi,%eax
 8334d1d:	89 da                	mov    %ebx,%edx
 8334d1f:	eb 1d                	jmp    8334d3e <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4ee>
 8334d21:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8334d24:	89 04 24             	mov    %eax,(%esp)
 8334d27:	e8 d0 55 e4 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8334d2c:	85 f6                	test   %esi,%esi
 8334d2e:	75 07                	jne    8334d37 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x4e7>
 8334d30:	be 00 00 00 00       	mov    $0x0,%esi
 8334d35:	eb 1f                	jmp    8334d56 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x506>
 8334d37:	be 01 00 00 00       	mov    $0x1,%esi
 8334d3c:	eb 18                	jmp    8334d56 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x506>
 8334d3e:	89 d3                	mov    %edx,%ebx
 8334d40:	89 c6                	mov    %eax,%esi
 8334d42:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8334d45:	89 04 24             	mov    %eax,(%esp)
 8334d48:	e8 59 5f e1 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8334d4d:	89 f0                	mov    %esi,%eax
 8334d4f:	89 da                	mov    %ebx,%edx
 8334d51:	e9 db 04 00 00       	jmp    8335231 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9e1>
 8334d56:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8334d59:	89 04 24             	mov    %eax,(%esp)
 8334d5c:	e8 45 5f e1 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8334d61:	85 f6                	test   %esi,%esi
 8334d63:	0f 84 e3 04 00 00    	je     833524c <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9fc>
 8334d69:	e9 77 04 00 00       	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334d6e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8334d71:	8b 00                	mov    (%eax),%eax
 8334d73:	83 c0 0c             	add    $0xc,%eax
 8334d76:	8b 10                	mov    (%eax),%edx
 8334d78:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8334d7b:	89 04 24             	mov    %eax,(%esp)
 8334d7e:	ff d2                	call   *%edx
 8334d80:	83 f8 10             	cmp    $0x10,%eax
 8334d83:	0f 94 c0             	sete   %al
 8334d86:	84 c0                	test   %al,%al
 8334d88:	0f 84 57 04 00 00    	je     83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334d8e:	c7 45 e0 ff ff ff ff 	movl   $0xffffffff,-0x20(%ebp)
 8334d95:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334d98:	89 04 24             	mov    %eax,(%esp)
 8334d9b:	e8 ee 54 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8334da0:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8334da7:	00 
 8334da8:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8334daf:	00 
 8334db0:	c7 44 24 44 25 00 00 	movl   $0x25,0x44(%esp)
 8334db7:	00 
 8334db8:	8b 95 0b ff ff ff    	mov    -0xf5(%ebp),%edx
 8334dbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334dc2:	8b 95 0f ff ff ff    	mov    -0xf1(%ebp),%edx
 8334dc8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334dcc:	8b 95 13 ff ff ff    	mov    -0xed(%ebp),%edx
 8334dd2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8334dd6:	8b 95 17 ff ff ff    	mov    -0xe9(%ebp),%edx
 8334ddc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8334de0:	8b 95 1b ff ff ff    	mov    -0xe5(%ebp),%edx
 8334de6:	89 54 24 14          	mov    %edx,0x14(%esp)
 8334dea:	8b 95 1f ff ff ff    	mov    -0xe1(%ebp),%edx
 8334df0:	89 54 24 18          	mov    %edx,0x18(%esp)
 8334df4:	8b 95 23 ff ff ff    	mov    -0xdd(%ebp),%edx
 8334dfa:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8334dfe:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 8334e04:	89 54 24 20          	mov    %edx,0x20(%esp)
 8334e08:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 8334e0e:	89 54 24 24          	mov    %edx,0x24(%esp)
 8334e12:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 8334e18:	89 54 24 28          	mov    %edx,0x28(%esp)
 8334e1c:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 8334e22:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8334e26:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 8334e2c:	89 54 24 30          	mov    %edx,0x30(%esp)
 8334e30:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 8334e36:	89 54 24 34          	mov    %edx,0x34(%esp)
 8334e3a:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 8334e40:	89 54 24 38          	mov    %edx,0x38(%esp)
 8334e44:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 8334e4a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8334e4e:	0f b6 95 47 ff ff ff 	movzbl -0xb9(%ebp),%edx
 8334e55:	88 54 24 40          	mov    %dl,0x40(%esp)
 8334e59:	89 04 24             	mov    %eax,(%esp)
 8334e5c:	e8 25 df 1c 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8334e61:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8334e64:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8334e67:	c1 e8 1f             	shr    $0x1f,%eax
 8334e6a:	84 c0                	test   %al,%al
 8334e6c:	0f 84 05 01 00 00    	je     8334f77 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x727>
 8334e72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8334e79:	00 
 8334e7a:	c7 44 24 08 e0 c5 c2 	movl   $0x8c2c5e0,0x8(%esp)
 8334e81:	08 
 8334e82:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8334e89:	00 
 8334e8a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8334e91:	e8 68 09 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8334e96:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8334e9d:	00 
 8334e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334ea2:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 8334ea8:	89 04 24             	mov    %eax,(%esp)
 8334eab:	e8 20 8a d4 ff       	call   807d8d0 <strncpy@plt>
 8334eb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8334eb7:	00 
 8334eb8:	c7 44 24 08 f3 c5 c2 	movl   $0x8c2c5f3,0x8(%esp)
 8334ebf:	08 
 8334ec0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8334ec7:	00 
 8334ec8:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8334ecf:	e8 2a 09 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8334ed4:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 8334edb:	00 
 8334edc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334ee0:	8d 85 0b fe ff ff    	lea    -0x1f5(%ebp),%eax
 8334ee6:	89 04 24             	mov    %eax,(%esp)
 8334ee9:	e8 e2 89 d4 ff       	call   807d8d0 <strncpy@plt>
 8334eee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334ef1:	89 04 24             	mov    %eax,(%esp)
 8334ef4:	e8 97 6d d9 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8334ef9:	89 c6                	mov    %eax,%esi
 8334efb:	8d 85 0b fe ff ff    	lea    -0x1f5(%ebp),%eax
 8334f01:	89 04 24             	mov    %eax,(%esp)
 8334f04:	e8 a7 94 d4 ff       	call   807e3b0 <strlen@plt>
 8334f09:	89 c7                	mov    %eax,%edi
 8334f0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334f0e:	89 04 24             	mov    %eax,(%esp)
 8334f11:	e8 38 6d d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8334f16:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8334f1d:	00 
 8334f1e:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8334f25:	00 
 8334f26:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8334f2a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8334f31:	00 
 8334f32:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8334f36:	8d 95 0b fe ff ff    	lea    -0x1f5(%ebp),%edx
 8334f3c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8334f40:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8334f44:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8334f4b:	00 
 8334f4c:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 8334f52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8334f56:	8d 85 66 ff ff ff    	lea    -0x9a(%ebp),%eax
 8334f5c:	89 04 24             	mov    %eax,(%esp)
 8334f5f:	e8 84 06 22 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8334f64:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 8334f6a:	89 04 24             	mov    %eax,(%esp)
 8334f6d:	e8 66 68 d9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8334f72:	e9 6e 02 00 00       	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334f77:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8334f7a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8334f7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8334f85:	00 
 8334f86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8334f8d:	00 
 8334f8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334f91:	89 04 24             	mov    %eax,(%esp)
 8334f94:	e8 3f 73 34 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8334f99:	e9 47 02 00 00       	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8334f9e:	c7 45 e4 ff ff ff ff 	movl   $0xffffffff,-0x1c(%ebp)
 8334fa5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8334fa8:	89 04 24             	mov    %eax,(%esp)
 8334fab:	e8 de 52 da ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8334fb0:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8334fb7:	00 
 8334fb8:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8334fbf:	00 
 8334fc0:	c7 44 24 44 25 00 00 	movl   $0x25,0x44(%esp)
 8334fc7:	00 
 8334fc8:	8b 95 0b ff ff ff    	mov    -0xf5(%ebp),%edx
 8334fce:	89 54 24 04          	mov    %edx,0x4(%esp)
 8334fd2:	8b 95 0f ff ff ff    	mov    -0xf1(%ebp),%edx
 8334fd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8334fdc:	8b 95 13 ff ff ff    	mov    -0xed(%ebp),%edx
 8334fe2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8334fe6:	8b 95 17 ff ff ff    	mov    -0xe9(%ebp),%edx
 8334fec:	89 54 24 10          	mov    %edx,0x10(%esp)
 8334ff0:	8b 95 1b ff ff ff    	mov    -0xe5(%ebp),%edx
 8334ff6:	89 54 24 14          	mov    %edx,0x14(%esp)
 8334ffa:	8b 95 1f ff ff ff    	mov    -0xe1(%ebp),%edx
 8335000:	89 54 24 18          	mov    %edx,0x18(%esp)
 8335004:	8b 95 23 ff ff ff    	mov    -0xdd(%ebp),%edx
 833500a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 833500e:	8b 95 27 ff ff ff    	mov    -0xd9(%ebp),%edx
 8335014:	89 54 24 20          	mov    %edx,0x20(%esp)
 8335018:	8b 95 2b ff ff ff    	mov    -0xd5(%ebp),%edx
 833501e:	89 54 24 24          	mov    %edx,0x24(%esp)
 8335022:	8b 95 2f ff ff ff    	mov    -0xd1(%ebp),%edx
 8335028:	89 54 24 28          	mov    %edx,0x28(%esp)
 833502c:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 8335032:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8335036:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 833503c:	89 54 24 30          	mov    %edx,0x30(%esp)
 8335040:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 8335046:	89 54 24 34          	mov    %edx,0x34(%esp)
 833504a:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 8335050:	89 54 24 38          	mov    %edx,0x38(%esp)
 8335054:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 833505a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 833505e:	0f b6 95 47 ff ff ff 	movzbl -0xb9(%ebp),%edx
 8335065:	88 54 24 40          	mov    %dl,0x40(%esp)
 8335069:	89 04 24             	mov    %eax,(%esp)
 833506c:	e8 15 dd 1c 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8335071:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8335074:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8335077:	c1 e8 1f             	shr    $0x1f,%eax
 833507a:	84 c0                	test   %al,%al
 833507c:	0f 84 02 01 00 00    	je     8335184 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x934>
 8335082:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8335089:	00 
 833508a:	c7 44 24 08 e0 c5 c2 	movl   $0x8c2c5e0,0x8(%esp)
 8335091:	08 
 8335092:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8335099:	00 
 833509a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 83350a1:	e8 58 07 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 83350a6:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 83350ad:	00 
 83350ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 83350b2:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 83350b8:	89 04 24             	mov    %eax,(%esp)
 83350bb:	e8 10 88 d4 ff       	call   807d8d0 <strncpy@plt>
 83350c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83350c7:	00 
 83350c8:	c7 44 24 08 f3 c5 c2 	movl   $0x8c2c5f3,0x8(%esp)
 83350cf:	08 
 83350d0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83350d7:	00 
 83350d8:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 83350df:	e8 1a 07 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 83350e4:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 83350eb:	00 
 83350ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 83350f0:	8d 85 0b fe ff ff    	lea    -0x1f5(%ebp),%eax
 83350f6:	89 04 24             	mov    %eax,(%esp)
 83350f9:	e8 d2 87 d4 ff       	call   807d8d0 <strncpy@plt>
 83350fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335101:	89 04 24             	mov    %eax,(%esp)
 8335104:	e8 87 6b d9 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8335109:	89 c6                	mov    %eax,%esi
 833510b:	8d 85 0b fe ff ff    	lea    -0x1f5(%ebp),%eax
 8335111:	89 04 24             	mov    %eax,(%esp)
 8335114:	e8 97 92 d4 ff       	call   807e3b0 <strlen@plt>
 8335119:	89 c7                	mov    %eax,%edi
 833511b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833511e:	89 04 24             	mov    %eax,(%esp)
 8335121:	e8 28 6b d9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8335126:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 833512d:	00 
 833512e:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8335135:	00 
 8335136:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 833513a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8335141:	00 
 8335142:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8335146:	8d 95 0b fe ff ff    	lea    -0x1f5(%ebp),%edx
 833514c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8335150:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8335154:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833515b:	00 
 833515c:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 8335162:	89 44 24 04          	mov    %eax,0x4(%esp)
 8335166:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 833516c:	89 04 24             	mov    %eax,(%esp)
 833516f:	e8 74 04 22 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8335174:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 833517a:	89 04 24             	mov    %eax,(%esp)
 833517d:	e8 56 66 d9 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8335182:	eb 61                	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 8335184:	8d 85 0b ff ff ff    	lea    -0xf5(%ebp),%eax
 833518a:	89 04 24             	mov    %eax,(%esp)
 833518d:	e8 e4 09 00 00       	call   8335b76 <_ZNK10Inven_Item18IsCreatureItemTypeEv>
 8335192:	84 c0                	test   %al,%al
 8335194:	74 24                	je     83351ba <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x96a>
 8335196:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8335199:	89 44 24 0c          	mov    %eax,0xc(%esp)
 833519d:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 83351a4:	00 
 83351a5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83351ac:	00 
 83351ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 83351b0:	89 04 24             	mov    %eax,(%esp)
 83351b3:	e8 20 71 34 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 83351b8:	eb 2b                	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 83351ba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83351bd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83351c1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83351c8:	00 
 83351c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83351d0:	00 
 83351d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83351d4:	89 04 24             	mov    %eax,(%esp)
 83351d7:	e8 fc 70 34 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 83351dc:	eb 07                	jmp    83351e5 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x995>
 83351de:	bb 11 00 00 00       	mov    $0x11,%ebx
 83351e3:	eb 67                	jmp    833524c <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9fc>
 83351e5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 83351e8:	89 04 24             	mov    %eax,(%esp)
 83351eb:	e8 56 55 da ff       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 83351f0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83351f3:	8b 55 18             	mov    0x18(%ebp),%edx
 83351f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 83351fa:	89 04 24             	mov    %eax,(%esp)
 83351fd:	e8 18 81 d9 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 8335202:	83 ec 04             	sub    $0x4,%esp
 8335205:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8335208:	89 44 24 04          	mov    %eax,0x4(%esp)
 833520c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 833520f:	89 04 24             	mov    %eax,(%esp)
 8335212:	e8 b1 51 da ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 8335217:	84 c0                	test   %al,%al
 8335219:	0f 85 97 f7 ff ff    	jne    83349b6 <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x166>
 833521f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335222:	89 04 24             	mov    %eax,(%esp)
 8335225:	e8 0e 0a 00 00       	call   8335c38 <_ZN15CUserCharacInfo30IncCurConditionEventRewardStepEv>
 833522a:	bb 00 00 00 00       	mov    $0x0,%ebx
 833522f:	eb 1b                	jmp    833524c <_ZN22CConditionEventManager27RequestConditionEventRewardEP5CUserscRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE+0x9fc>
 8335231:	89 d3                	mov    %edx,%ebx
 8335233:	89 c6                	mov    %eax,%esi
 8335235:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8335238:	89 04 24             	mov    %eax,(%esp)
 833523b:	e8 9c 0a 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335240:	89 f0                	mov    %esi,%eax
 8335242:	89 da                	mov    %ebx,%edx
 8335244:	89 04 24             	mov    %eax,(%esp)
 8335247:	e8 04 e5 7a 00       	call   8ae3750 <_Unwind_Resume>
 833524c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 833524f:	89 04 24             	mov    %eax,(%esp)
 8335252:	e8 85 0a 00 00       	call   8335cdc <_ZNSt6vectorI26stConditionEventRewardInfoSaIS0_EED1Ev>
 8335257:	89 d8                	mov    %ebx,%eax
 8335259:	8d 65 f4             	lea    -0xc(%ebp),%esp
 833525c:	83 c4 00             	add    $0x0,%esp
 833525f:	5b                   	pop    %ebx
 8335260:	5e                   	pop    %esi
 8335261:	5f                   	pop    %edi
 8335262:	5d                   	pop    %ebp
 8335263:	c3                   	ret

```

```c
// CConditionEventManager::RequestConditionEventReward @ 0x8334850

/* CConditionEventManager::RequestConditionEventReward(CUser*, short, char, std::map<int, int,
   std::less<int>, std::allocator<std::pair<int const, int> > >&) */

undefined4 __thiscall
CConditionEventManager::RequestConditionEventReward
          (CConditionEventManager *this,CUser *param_1,short param_2,char param_3,map *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  CInventory *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CDataManager *this_00;
  undefined4 *puVar8;
  undefined4 uVar9;
  char *pcVar10;
  size_t sVar11;
  undefined4 unaff_EBX;
  char local_1f9 [256];
  undefined2 local_f9;
  undefined2 uStack_f7;
  undefined2 uStack_f5;
  undefined2 uStack_f3;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined4 local_e9;
  undefined4 local_e5;
  undefined4 local_e1;
  undefined4 local_dd;
  undefined4 local_d9;
  undefined4 local_d5;
  undefined4 local_d1;
  undefined4 local_cd;
  undefined4 local_c9;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined1 local_bd;
  char local_bc [30];
  char local_9e [30];
  stCeraShopItemParam_t local_80 [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_68 [12];
  int local_5c;
  bool local_55;
  int local_54 [2];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_48 [12];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  int local_38;
  short local_34;
  short local_32;
  int *local_30;
  int local_2c;
  long local_28;
  int local_24;
  int local_20;
  
  piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0);
  if (cVar2 == '\x01') {
    iVar4 = G_CDataManager();
    local_38 = *(int *)(iVar4 + 0x4d98);
    if (param_2 == local_38) {
      if (param_3 < '\x01') {
        unaff_EBX = 0x13;
      }
      else {
        local_34 = CUserCharacInfo::GetCurConditionEventStep((CUserCharacInfo *)param_1);
        if (local_34 < param_3) {
          unaff_EBX = 0x13;
        }
        else {
          local_32 = CUserCharacInfo::GetCurConditionEventRewardStep((CUserCharacInfo *)param_1);
          if ((int)local_32 == param_3 + -1) {
            std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            vector(local_48);
                    /* try { // try from 08334968 to 08334bf4 has its CatchHandler @ 08335231 */
            GetConditionRewardInfo(this,'\0',(vector *)local_48,param_2,param_3);
            ConditionRewardSameItemCombine((vector *)this,(map *)local_48);
            cVar2 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                *)param_4);
            if (cVar2 != '\x01') {
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin
                        (local_4c);
              while( true ) {
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                          (local_3c);
                cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c,
                                   (_Rb_tree_iterator *)local_3c);
                if (cVar2 == '\0') break;
                piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                if ((*piVar3 == 1) &&
                   (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c),
                   -1 < *(int *)(iVar4 + 4))) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  iVar6 = CInventory::GetEventCoin(pCVar5);
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                  iVar4 = *(int *)(iVar4 + 4);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  CInventory::SetEventCoin(pCVar5,iVar6 + iVar4);
                  iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                  uVar9 = *(undefined4 *)(iVar4 + 4);
                  pCVar5 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  uVar7 = CInventory::GetEventCoin(pCVar5);
                  cUserHistoryLog::EventCoinAdd
                            ((cUserHistoryLog *)(param_1 + 0x79700),uVar7,uVar9,2);
                  CUser::SaveMoneyCoin(param_1);
                  CUser::SendCoin(param_1);
                  goto LAB_083351e5;
                }
                piVar3 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                iVar4 = *piVar3;
                this_00 = (CDataManager *)G_CDataManager();
                local_30 = (int *)CDataManager::find_item(this_00,iVar4);
                if (local_30 == (int *)0x0) {
                  unaff_EBX = 0x11;
                  goto LAB_0833524c;
                }
                Inven_Item::Inven_Item((Inven_Item *)&local_f9);
                puVar8 = (undefined4 *)
                         std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                   ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                uStack_f7 = (undefined2)*puVar8;
                uStack_f5 = (undefined2)((uint)*puVar8 >> 0x10);
                iVar4 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                  ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
                uVar9 = *(undefined4 *)(iVar4 + 4);
                iVar4 = G_CDataManager();
                CItemList::create_item(*(CItemList **)(iVar4 + 0xc),0,&local_f9,uVar9);
                if ((CONCAT22(uStack_f5,uStack_f7) == 0) ||
                   (iVar4 = Inven_Item::get_add_info((Inven_Item *)&local_f9), iVar4 == 0)) {
                  bVar1 = false;
                }
                else {
                  bVar1 = true;
                }
                if (bVar1) {
                  local_54[1] = 0;
                  local_54[0] = 0;
                  local_55 = false;
                  cVar2 = WongWork::CCeraShop::IsSpecialItem
                                    (GlobalData::s_pCeraShop,CONCAT22(uStack_f5,uStack_f7),
                                     local_54 + 1,local_54,&local_55);
                  if (cVar2 == '\0') {
                    local_20 = 0xffffffff;
                    uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    local_20 = CInventory::insertItemIntoInventory
                                         (uVar9,CONCAT22(uStack_f7,local_f9),
                                          CONCAT22(uStack_f3,uStack_f5),local_f1,local_ed,local_e9,
                                          local_e5,local_e1,local_dd,local_d9,local_d5,local_d1,
                                          local_cd,local_c9,local_c5,local_c1,local_bd,0x25,1,1);
                    if (local_20 < 0) {
                      pcVar10 = (char *)RDARScriptStringManager::findString
                                                  ((RDARScriptStringManager *)g_scriptStringManager_
                                                   ,4,"game_server_msg_80",(bool *)0x0);
                      strncpy(local_bc,pcVar10,0x1d);
                      pcVar10 = (char *)RDARScriptStringManager::findString
                                                  ((RDARScriptStringManager *)g_scriptStringManager_
                                                   ,4,"game_server_msg_81",(bool *)0x0);
                      strncpy(local_1f9,pcVar10,0xff);
                      uVar9 = CUser::GetServerGroup(param_1);
                      sVar11 = strlen(local_1f9);
                      uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                                (local_bc,&local_f9,0,uVar7,local_1f9,sVar11,0,uVar9,0,0);
                      Inven_Item::reset((Inven_Item *)&local_f9);
                    }
                    else {
                      cVar2 = Inven_Item::IsCreatureItemType((Inven_Item *)&local_f9);
                      if (cVar2 == '\0') {
                        CUser::SendUpdateItem(param_1,1,0,local_20);
                      }
                      else {
                        CUser::SendUpdateItem(param_1,1,7,local_20);
                      }
                    }
                  }
                  else {
                    iVar4 = (**(code **)(*local_30 + 0xc))(local_30);
                    if ((iVar4 == 0x10) || (CONCAT22(uStack_f5,uStack_f7) == 1)) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      local_5c = 0;
                      iVar4 = CONCAT22(uStack_f5,uStack_f7);
                      iVar6 = G_CDataManager();
                      local_2c = CItemList::GetRestrictCode(*(CItemList **)(iVar6 + 0xc),iVar4);
                      local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                      std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_68);
                    /* try { // try from 08334bfb to 08334bff has its CatchHandler @ 08334d3e */
                      WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_80);
                    /* try { // try from 08334c66 to 08334d04 has its CatchHandler @ 08334d0c */
                      cVar2 = WongWork::CCeraShop::ProcessSpecialItem
                                        (GlobalData::s_pCeraShop,param_1,
                                         CONCAT22(uStack_f5,uStack_f7),local_2c,&local_5c,local_28,
                                         true,(vector *)local_68,local_80,'\0','\0',false,1);
                      if (cVar2 == '\0') {
LAB_08334d05:
                        bVar1 = true;
                      }
                      else {
                        if (local_5c == 0) {
                          if ((local_2c == 0) ||
                             (cVar2 = CUser::IsRestrictedGoods(param_1,local_2c), cVar2 == '\x01'))
                          {
                            bVar1 = false;
                          }
                          else {
                            bVar1 = true;
                          }
                          if (bVar1) {
                            CUser::SetRestrictedGoods(param_1,local_2c);
                            WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_2c,local_28,0);
                            CUser::SendRestrictedGoods(param_1,true,local_2c);
                          }
                          goto LAB_08334d05;
                        }
                        unaff_EBX = 0x11;
                        bVar1 = false;
                      }
                    /* try { // try from 08334d27 to 08334d2b has its CatchHandler @ 08334d3e */
                      WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_80);
                    /* try { // try from 08334d5c to 08335201 has its CatchHandler @ 08335231 */
                      std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_68);
                      if (!bVar1) goto LAB_0833524c;
                    }
                    else {
                      iVar4 = (**(code **)(*local_30 + 0xc))(local_30);
                      if (iVar4 == 0x10) {
                        local_24 = 0xffffffff;
                        uVar9 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                        local_24 = CInventory::insertItemIntoInventory
                                             (uVar9,CONCAT22(uStack_f7,local_f9),
                                              CONCAT22(uStack_f3,uStack_f5),local_f1,local_ed,
                                              local_e9,local_e5,local_e1,local_dd,local_d9,local_d5,
                                              local_d1,local_cd,local_c9,local_c5,local_c1,local_bd,
                                              0x25,1,1);
                        if (local_24 < 0) {
                          pcVar10 = (char *)RDARScriptStringManager::findString
                                                      ((RDARScriptStringManager *)
                                                       g_scriptStringManager_,4,"game_server_msg_80"
                                                       ,(bool *)0x0);
                          strncpy(local_9e,pcVar10,0x1d);
                          pcVar10 = (char *)RDARScriptStringManager::findString
                                                      ((RDARScriptStringManager *)
                                                       g_scriptStringManager_,4,"game_server_msg_81"
                                                       ,(bool *)0x0);
                          strncpy(local_1f9,pcVar10,0xff);
                          uVar9 = CUser::GetServerGroup(param_1);
                          sVar11 = strlen(local_1f9);
                          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                                    (local_9e,&local_f9,0,uVar7,local_1f9,sVar11,0,uVar9,0,0);
                          Inven_Item::reset((Inven_Item *)&local_f9);
                        }
                        else {
                          CUser::SendUpdateItem(param_1,1,0,local_24);
                        }
                      }
                    }
                  }
                }
LAB_083351e5:
                std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                          ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_4c);
              }
            }
            CUserCharacInfo::IncCurConditionEventRewardStep((CUserCharacInfo *)param_1);
            unaff_EBX = 0;
LAB_0833524c:
            std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::
            ~vector(local_48);
          }
          else {
            unaff_EBX = 0x13;
          }
        }
      }
    }
    else {
      unaff_EBX = 1;
    }
  }
  else {
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## _getRequiredParameter

```asm
// === 083356a4 CConditionEventManager::_getRequiredParameter  [0x083356a4-0x8335753] ===
 83356a4:	55                   	push   %ebp
 83356a5:	89 e5                	mov    %esp,%ebp
 83356a7:	53                   	push   %ebx
 83356a8:	83 ec 34             	sub    $0x34,%esp
 83356ab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 83356ae:	8b 45 10             	mov    0x10(%ebp),%eax
 83356b1:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 83356b5:	89 1c 24             	mov    %ebx,(%esp)
 83356b8:	e8 d1 05 e8 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 83356bd:	0f bf 45 e4          	movswl -0x1c(%ebp),%eax
 83356c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83356c4:	e8 d2 6a d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83356c9:	8d 88 a0 4d 00 00    	lea    0x4da0(%eax),%ecx
 83356cf:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83356d2:	8d 55 f0             	lea    -0x10(%ebp),%edx
 83356d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 83356d9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 83356dd:	89 04 24             	mov    %eax,(%esp)
 83356e0:	e8 b5 91 d9 ff       	call   80ce89a <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE4findERS4_>
 83356e5:	83 ec 04             	sub    $0x4,%esp
 83356e8:	e8 ae 6a d9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 83356ed:	8d 90 a0 4d 00 00    	lea    0x4da0(%eax),%edx
 83356f3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 83356f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 83356fa:	89 04 24             	mov    %eax,(%esp)
 83356fd:	e8 c6 7b d9 ff       	call   80cd2c8 <_ZNSt3mapIiSt4pairIiiESt4lessIiESaIS0_IKiS1_EEE3endEv>
 8335702:	83 ec 04             	sub    $0x4,%esp
 8335705:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8335708:	89 44 24 04          	mov    %eax,0x4(%esp)
 833570c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833570f:	89 04 24             	mov    %eax,(%esp)
 8335712:	e8 bd f0 e7 ff       	call   81b47d4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEneERKS4_>
 8335717:	84 c0                	test   %al,%al
 8335719:	74 23                	je     833573e <_ZN22CConditionEventManager21_getRequiredParameterEs+0x9a>
 833571b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833571e:	89 04 24             	mov    %eax,(%esp)
 8335721:	e8 fa 05 e8 ff       	call   81b5d20 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEdeEv>
 8335726:	8b 40 04             	mov    0x4(%eax),%eax
 8335729:	89 03                	mov    %eax,(%ebx)
 833572b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833572e:	89 04 24             	mov    %eax,(%esp)
 8335731:	e8 ea 05 e8 ff       	call   81b5d20 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiS0_IiiEEEdeEv>
 8335736:	8b 40 08             	mov    0x8(%eax),%eax
 8335739:	89 43 04             	mov    %eax,0x4(%ebx)
 833573c:	eb 0d                	jmp    833574b <_ZN22CConditionEventManager21_getRequiredParameterEs+0xa7>
 833573e:	c7 03 ff ff ff ff    	movl   $0xffffffff,(%ebx)
 8335744:	c7 43 04 ff ff ff ff 	movl   $0xffffffff,0x4(%ebx)
 833574b:	89 d8                	mov    %ebx,%eax
 833574d:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8335750:	c9                   	leave
 8335751:	c2 04 00             	ret    $0x4

```

```c
// CConditionEventManager::_getRequiredParameter @ 0x83356a4

/* CConditionEventManager::_getRequiredParameter(short) */

pair<int,int> * CConditionEventManager::_getRequiredParameter(short param_1)

{
  char cVar1;
  int iVar2;
  undefined2 in_stack_00000006;
  short in_stack_0000000c;
  _Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>> local_18 [4];
  int local_14;
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  local_10 [8];
  
  std::pair<int,int>::pair(_param_1);
  local_14 = (int)in_stack_0000000c;
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::find((int *)local_18);
  G_CDataManager();
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator!=
                    (local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    *(undefined4 *)_param_1 = 0xffffffff;
    *(undefined4 *)(_param_1 + 4) = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator*(local_18);
    *(undefined4 *)_param_1 = *(undefined4 *)(iVar2 + 4);
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::pair<int,int>>>::operator*(local_18);
    *(undefined4 *)(_param_1 + 4) = *(undefined4 *)(iVar2 + 8);
  }
  return _param_1;
}

```

---

## _processProperDungeonClearEvent

```asm
// === 083355e6 CConditionEventManager::_processProperDungeonClearEvent  [0x083355e6-0x83356a3] ===
 83355e6:	55                   	push   %ebp
 83355e7:	89 e5                	mov    %esp,%ebp
 83355e9:	56                   	push   %esi
 83355ea:	53                   	push   %ebx
 83355eb:	83 ec 40             	sub    $0x40,%esp
 83355ee:	8b 45 10             	mov    0x10(%ebp),%eax
 83355f1:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 83355f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83355f8:	89 04 24             	mov    %eax,(%esp)
 83355fb:	e8 a8 05 00 00       	call   8335ba8 <_ZNK15CUserCharacInfo24GetCurConditionEventStepEv>
 8335600:	98                   	cwtl
 8335601:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8335604:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8335607:	83 c0 01             	add    $0x1,%eax
 833560a:	0f bf d0             	movswl %ax,%edx
 833560d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8335610:	89 54 24 08          	mov    %edx,0x8(%esp)
 8335614:	8b 55 08             	mov    0x8(%ebp),%edx
 8335617:	89 54 24 04          	mov    %edx,0x4(%esp)
 833561b:	89 04 24             	mov    %eax,(%esp)
 833561e:	e8 81 00 00 00       	call   83356a4 <_ZN22CConditionEventManager21_getRequiredParameterEs>
 8335623:	83 ec 04             	sub    $0x4,%esp
 8335626:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335629:	89 04 24             	mov    %eax,(%esp)
 833562c:	e8 4f 06 00 00       	call   8335c80 <_ZNK15CUserCharacInfo26GetProperDungeonClearCountEv>
 8335631:	98                   	cwtl
 8335632:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8335635:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8335638:	89 04 24             	mov    %eax,(%esp)
 833563b:	e8 0c 87 25 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8335640:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8335643:	83 f8 ff             	cmp    $0xffffffff,%eax
 8335646:	74 1e                	je     8335666 <_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers+0x80>
 8335648:	8b 45 e8             	mov    -0x18(%ebp),%eax
 833564b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 833564e:	7f 16                	jg     8335666 <_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers+0x80>
 8335650:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335653:	89 04 24             	mov    %eax,(%esp)
 8335656:	e8 71 05 00 00       	call   8335bcc <_ZN15CUserCharacInfo24IncCurConditionEventStepEv>
 833565b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833565e:	89 04 24             	mov    %eax,(%esp)
 8335661:	e8 96 c2 34 00       	call   86818fc <_ZN5CUser22SendConditionEventInfoEv>
 8335666:	8b 45 0c             	mov    0xc(%ebp),%eax
 8335669:	89 04 24             	mov    %eax,(%esp)
 833566c:	e8 af c1 34 00       	call   8681820 <_ZN5CUser27SendProperDungeonClearCountEv>
 8335671:	eb 1b                	jmp    833568e <_ZN22CConditionEventManager31_processProperDungeonClearEventEP5CUsers+0xa8>
 8335673:	89 d3                	mov    %edx,%ebx
 8335675:	89 c6                	mov    %eax,%esi
 8335677:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833567a:	89 04 24             	mov    %eax,(%esp)
 833567d:	e8 fe 87 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8335682:	89 f0                	mov    %esi,%eax
 8335684:	89 da                	mov    %ebx,%edx
 8335686:	89 04 24             	mov    %eax,(%esp)
 8335689:	e8 c2 e0 7a 00       	call   8ae3750 <_Unwind_Resume>
 833568e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8335691:	89 04 24             	mov    %eax,(%esp)
 8335694:	e8 e7 87 25 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8335699:	8d 65 f8             	lea    -0x8(%ebp),%esp
 833569c:	83 c4 00             	add    $0x0,%esp
 833569f:	5b                   	pop    %ebx
 83356a0:	5e                   	pop    %esi
 83356a1:	5d                   	pop    %ebp
 83356a2:	c3                   	ret
 83356a3:	90                   	nop

```

```c
// CConditionEventManager::_processProperDungeonClearEvent @ 0x83355e6

/* CConditionEventManager::_processProperDungeonClearEvent(CUser*, short) */

void CConditionEventManager::_processProperDungeonClearEvent(CUser *param_1,short param_2)

{
  short sVar1;
  undefined2 in_stack_0000000a;
  PacketGuard local_28 [12];
  int local_1c [2];
  int local_14;
  int local_10;
  
  sVar1 = CUserCharacInfo::GetCurConditionEventStep(_param_2);
  local_14 = (int)sVar1;
  _getRequiredParameter((short)local_1c);
  sVar1 = CUserCharacInfo::GetProperDungeonClearCount(_param_2);
  local_10 = (int)sVar1;
  PacketGuard::PacketGuard(local_28);
  if ((local_1c[0] != -1) && (local_1c[0] <= local_10)) {
    CUserCharacInfo::IncCurConditionEventStep(_param_2);
                    /* try { // try from 08335661 to 08335670 has its CatchHandler @ 08335673 */
    CUser::SendConditionEventInfo((CUser *)_param_2);
  }
  CUser::SendProperDungeonClearCount((CUser *)_param_2);
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

---

## ~CConditionEventManager

```asm
// === 0833484a CConditionEventManager::~CConditionEventManager  [0x0833484a-0x833484f] ===
 833484a:	55                   	push   %ebp
 833484b:	89 e5                	mov    %esp,%ebp
 833484d:	5d                   	pop    %ebp
 833484e:	c3                   	ret
 833484f:	90                   	nop

```

```c
// CConditionEventManager::~CConditionEventManager @ 0x833484a

/* CConditionEventManager::~CConditionEventManager() */

void __thiscall CConditionEventManager::~CConditionEventManager(CConditionEventManager *this)

{
  return;
}

```


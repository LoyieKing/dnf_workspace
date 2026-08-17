# CUserCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 98

---

## AddCurCharacChaosPoint

```asm
// === 08645f80 CUserCharacInfo::AddCurCharacChaosPoint  [0x08645f80-0x8645fb7] ===
 8645f80:	55                   	push   %ebp
 8645f81:	89 e5                	mov    %esp,%ebp
 8645f83:	83 ec 18             	sub    $0x18,%esp
 8645f86:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f89:	8b 40 10             	mov    0x10(%eax),%eax
 8645f8c:	85 c0                	test   %eax,%eax
 8645f8e:	74 26                	je     8645fb6 <_ZN15CUserCharacInfo22AddCurCharacChaosPointEi+0x36>
 8645f90:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f93:	89 04 24             	mov    %eax,(%esp)
 8645f96:	e8 d5 48 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8645f9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f9e:	8b 40 10             	mov    0x10(%eax),%eax
 8645fa1:	8b 55 08             	mov    0x8(%ebp),%edx
 8645fa4:	8b 52 10             	mov    0x10(%edx),%edx
 8645fa7:	8b 92 49 0e 00 00    	mov    0xe49(%edx),%edx
 8645fad:	03 55 0c             	add    0xc(%ebp),%edx
 8645fb0:	89 90 49 0e 00 00    	mov    %edx,0xe49(%eax)
 8645fb6:	c9                   	leave
 8645fb7:	c3                   	ret

```

```c
// CUserCharacInfo::AddCurCharacChaosPoint @ 0x8645f80

/* CUserCharacInfo::AddCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::AddCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = *(int *)(*(int *)(this + 0x10) + 0xe49) + param_1;
  }
  return;
}

```

---

## CUserCharacInfo

```asm
// === 0864e15e CUserCharacInfo::CUserCharacInfo  [0x0864e15e-0x864e1f1] ===
 864e15e:	55                   	push   %ebp
 864e15f:	89 e5                	mov    %esp,%ebp
 864e161:	56                   	push   %esi
 864e162:	53                   	push   %ebx
 864e163:	83 ec 10             	sub    $0x10,%esp
 864e166:	8b 45 08             	mov    0x8(%ebp),%eax
 864e169:	83 c0 18             	add    $0x18,%eax
 864e16c:	89 04 24             	mov    %eax,(%esp)
 864e16f:	e8 66 77 f8 ff       	call   85d58da <_ZN13PvpResultTypeC1Ev>
 864e174:	8b 45 08             	mov    0x8(%ebp),%eax
 864e177:	05 9c 00 00 00       	add    $0x9c,%eax
 864e17c:	89 04 24             	mov    %eax,(%esp)
 864e17f:	e8 bc aa 04 00       	call   8698c40 <_ZNSt3mapIi14GameResultTypeSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 864e184:	8b 45 08             	mov    0x8(%ebp),%eax
 864e187:	05 b4 00 00 00       	add    $0xb4,%eax
 864e18c:	89 04 24             	mov    %eax,(%esp)
 864e18f:	e8 5e 6e d2 ff       	call   8374ff2 <_ZN8WongWork13CDungeonClearC1Ev>
 864e194:	8b 45 08             	mov    0x8(%ebp),%eax
 864e197:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 864e19e:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1a1:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 864e1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1ab:	89 04 24             	mov    %eax,(%esp)
 864e1ae:	e8 3f 00 00 00       	call   864e1f2 <_ZN15CUserCharacInfo14resetSaveFlagsEv>
 864e1b3:	83 c4 10             	add    $0x10,%esp
 864e1b6:	5b                   	pop    %ebx
 864e1b7:	5e                   	pop    %esi
 864e1b8:	5d                   	pop    %ebp
 864e1b9:	c3                   	ret
 864e1ba:	89 d3                	mov    %edx,%ebx
 864e1bc:	89 c6                	mov    %eax,%esi
 864e1be:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1c1:	05 9c 00 00 00       	add    $0x9c,%eax
 864e1c6:	89 04 24             	mov    %eax,(%esp)
 864e1c9:	e8 de 98 04 00       	call   8697aac <_ZNSt3mapIi14GameResultTypeSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 864e1ce:	89 f0                	mov    %esi,%eax
 864e1d0:	89 da                	mov    %ebx,%edx
 864e1d2:	eb 00                	jmp    864e1d4 <_ZN15CUserCharacInfoC1Ev+0x76>
 864e1d4:	89 d3                	mov    %edx,%ebx
 864e1d6:	89 c6                	mov    %eax,%esi
 864e1d8:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1db:	83 c0 18             	add    $0x18,%eax
 864e1de:	89 04 24             	mov    %eax,(%esp)
 864e1e1:	e8 fa 76 f8 ff       	call   85d58e0 <_ZN13PvpResultTypeD1Ev>
 864e1e6:	89 f0                	mov    %esi,%eax
 864e1e8:	89 da                	mov    %ebx,%edx
 864e1ea:	89 04 24             	mov    %eax,(%esp)
 864e1ed:	e8 5e 55 49 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CUserCharacInfo::CUserCharacInfo @ 0x864e15e

/* CUserCharacInfo::CUserCharacInfo() */

void __thiscall CUserCharacInfo::CUserCharacInfo(CUserCharacInfo *this)

{
  PvpResultType::PvpResultType((PvpResultType *)(this + 0x18));
                    /* try { // try from 0864e17f to 0864e183 has its CatchHandler @ 0864e1d4 */
  std::map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>>::
  map((map<int,GameResultType,std::less<int>,std::allocator<std::pair<int_const,GameResultType>>> *)
      (this + 0x9c));
                    /* try { // try from 0864e18f to 0864e193 has its CatchHandler @ 0864e1ba */
  WongWork::CDungeonClear::CDungeonClear((CDungeonClear *)(this + 0xb4));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  resetSaveFlags(this);
  return;
}

```

---

## ChangeFinishPoint

```asm
// === 086457c0 CUserCharacInfo::ChangeFinishPoint  [0x086457c0-0x8645865] ===
 86457c0:	55                   	push   %ebp
 86457c1:	89 e5                	mov    %esp,%ebp
 86457c3:	83 ec 28             	sub    $0x28,%esp
 86457c6:	8b 45 08             	mov    0x8(%ebp),%eax
 86457c9:	8b 40 10             	mov    0x10(%eax),%eax
 86457cc:	85 c0                	test   %eax,%eax
 86457ce:	75 38                	jne    8645808 <_ZN15CUserCharacInfo17ChangeFinishPointEi+0x48>
 86457d0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86457d7:	00 
 86457d8:	c7 44 24 08 4d 02 00 	movl   $0x24d,0x8(%esp)
 86457df:	00 
 86457e0:	c7 44 24 04 60 38 cf 	movl   $0x8cf3860,0x4(%esp)
 86457e7:	08 
 86457e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86457eb:	89 04 24             	mov    %eax,(%esp)
 86457ee:	e8 25 9f f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86457f3:	c7 44 24 04 50 e0 ce 	movl   $0x8cee050,0x4(%esp)
 86457fa:	08 
 86457fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86457fe:	89 04 24             	mov    %eax,(%esp)
 8645801:	e8 82 9f f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645806:	eb 5c                	jmp    8645864 <_ZN15CUserCharacInfo17ChangeFinishPointEi+0xa4>
 8645808:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 864580c:	7e 1b                	jle    8645829 <_ZN15CUserCharacInfo17ChangeFinishPointEi+0x69>
 864580e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645811:	8b 40 10             	mov    0x10(%eax),%eax
 8645814:	8b 55 08             	mov    0x8(%ebp),%edx
 8645817:	8b 52 10             	mov    0x10(%edx),%edx
 864581a:	8b 92 0a 0e 00 00    	mov    0xe0a(%edx),%edx
 8645820:	03 55 0c             	add    0xc(%ebp),%edx
 8645823:	89 90 0a 0e 00 00    	mov    %edx,0xe0a(%eax)
 8645829:	8b 45 08             	mov    0x8(%ebp),%eax
 864582c:	8b 40 10             	mov    0x10(%eax),%eax
 864582f:	8b 55 08             	mov    0x8(%ebp),%edx
 8645832:	8b 52 10             	mov    0x10(%edx),%edx
 8645835:	8b 92 06 0e 00 00    	mov    0xe06(%edx),%edx
 864583b:	03 55 0c             	add    0xc(%ebp),%edx
 864583e:	89 90 06 0e 00 00    	mov    %edx,0xe06(%eax)
 8645844:	8b 45 08             	mov    0x8(%ebp),%eax
 8645847:	8b 40 10             	mov    0x10(%eax),%eax
 864584a:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 8645850:	85 c0                	test   %eax,%eax
 8645852:	79 10                	jns    8645864 <_ZN15CUserCharacInfo17ChangeFinishPointEi+0xa4>
 8645854:	8b 45 08             	mov    0x8(%ebp),%eax
 8645857:	8b 40 10             	mov    0x10(%eax),%eax
 864585a:	c7 80 06 0e 00 00 00 	movl   $0x0,0xe06(%eax)
 8645861:	00 00 00 
 8645864:	c9                   	leave
 8645865:	c3                   	ret

```

```c
// CUserCharacInfo::ChangeFinishPoint @ 0x86457c0

/* CUserCharacInfo::ChangeFinishPoint(int) */

void __thiscall CUserCharacInfo::ChangeFinishPoint(CUserCharacInfo *this,int param_1)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::ChangeFinishPoint(int)",0x24d,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::ChangeFinishPoint() : m_selected is NULL");
  }
  else {
    if (0 < param_1) {
      *(int *)(*(int *)(this + 0x10) + 0xe0a) = *(int *)(*(int *)(this + 0x10) + 0xe0a) + param_1;
    }
    *(int *)(*(int *)(this + 0x10) + 0xe06) = *(int *)(*(int *)(this + 0x10) + 0xe06) + param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe06) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe06) = 0;
    }
  }
  return;
}

```

---

## ClearUselessCooltimeItem

```asm
// === 08659e3e CUserCharacInfo::ClearUselessCooltimeItem  [0x08659e3e-0x8659ef3] ===
 8659e3e:	55                   	push   %ebp
 8659e3f:	89 e5                	mov    %esp,%ebp
 8659e41:	83 ec 38             	sub    $0x38,%esp
 8659e44:	8b 45 08             	mov    0x8(%ebp),%eax
 8659e47:	8b 40 10             	mov    0x10(%eax),%eax
 8659e4a:	05 9a 0e 00 00       	add    $0xe9a,%eax
 8659e4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8659e52:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659e55:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659e58:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659e5c:	89 04 24             	mov    %eax,(%esp)
 8659e5f:	e8 56 10 04 00       	call   869aeba <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5beginEv>
 8659e64:	83 ec 04             	sub    $0x4,%esp
 8659e67:	eb 59                	jmp    8659ec2 <_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj+0x84>
 8659e69:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659e6c:	89 04 24             	mov    %eax,(%esp)
 8659e6f:	e8 bc 10 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659e74:	8b 40 04             	mov    0x4(%eax),%eax
 8659e77:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8659e7a:	0f 92 c0             	setb   %al
 8659e7d:	84 c0                	test   %al,%al
 8659e7f:	74 24                	je     8659ea5 <_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj+0x67>
 8659e81:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8659e84:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8659e87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8659e8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659e8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659e92:	89 04 24             	mov    %eax,(%esp)
 8659e95:	e8 a0 10 04 00       	call   869af3a <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8659e9a:	83 ec 04             	sub    $0x4,%esp
 8659e9d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8659ea0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8659ea3:	eb 1d                	jmp    8659ec2 <_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj+0x84>
 8659ea5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8659ea8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8659eaf:	00 
 8659eb0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8659eb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659eb7:	89 04 24             	mov    %eax,(%esp)
 8659eba:	e8 61 11 04 00       	call   869b020 <_ZN9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEppEi>
 8659ebf:	83 ec 04             	sub    $0x4,%esp
 8659ec2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8659ec5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659ec8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659ecc:	89 04 24             	mov    %eax,(%esp)
 8659ecf:	e8 0a 10 04 00       	call   869aede <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE3endEv>
 8659ed4:	83 ec 04             	sub    $0x4,%esp
 8659ed7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8659eda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8659ede:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659ee1:	89 04 24             	mov    %eax,(%esp)
 8659ee4:	e8 1b 10 04 00       	call   869af04 <_ZN9__gnu_cxxneIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8659ee9:	84 c0                	test   %al,%al
 8659eeb:	0f 85 78 ff ff ff    	jne    8659e69 <_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj+0x2b>
 8659ef1:	c9                   	leave
 8659ef2:	c3                   	ret
 8659ef3:	90                   	nop

```

```c
// CUserCharacInfo::ClearUselessCooltimeItem @ 0x8659e3e

/* CUserCharacInfo::ClearUselessCooltimeItem(unsigned int) */

void __thiscall CUserCharacInfo::ClearUselessCooltimeItem(CUserCharacInfo *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = *(int *)(this + 0x10) + 0xe9a;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_18);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
            ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                          *)&local_1c);
    if (*(uint *)(iVar2 + 4) < param_1) {
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                (&local_20,local_10,local_1c);
      local_1c = local_20;
    }
    else {
      __gnu_cxx::
      __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
      ::operator++(local_14,(int)&local_1c);
    }
  }
  return;
}

```

---

## ClearUselessEffectItem

```asm
// === 08659ef4 CUserCharacInfo::ClearUselessEffectItem  [0x08659ef4-0x8659fa9] ===
 8659ef4:	55                   	push   %ebp
 8659ef5:	89 e5                	mov    %esp,%ebp
 8659ef7:	83 ec 38             	sub    $0x38,%esp
 8659efa:	8b 45 08             	mov    0x8(%ebp),%eax
 8659efd:	8b 40 10             	mov    0x10(%eax),%eax
 8659f00:	05 a6 0e 00 00       	add    $0xea6,%eax
 8659f05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8659f08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659f0b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659f0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659f12:	89 04 24             	mov    %eax,(%esp)
 8659f15:	e8 a0 0f 04 00       	call   869aeba <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5beginEv>
 8659f1a:	83 ec 04             	sub    $0x4,%esp
 8659f1d:	eb 59                	jmp    8659f78 <_ZN15CUserCharacInfo22ClearUselessEffectItemEj+0x84>
 8659f1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659f22:	89 04 24             	mov    %eax,(%esp)
 8659f25:	e8 06 10 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659f2a:	8b 40 04             	mov    0x4(%eax),%eax
 8659f2d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8659f30:	0f 92 c0             	setb   %al
 8659f33:	84 c0                	test   %al,%al
 8659f35:	74 24                	je     8659f5b <_ZN15CUserCharacInfo22ClearUselessEffectItemEj+0x67>
 8659f37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8659f3a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8659f3d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8659f41:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659f44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659f48:	89 04 24             	mov    %eax,(%esp)
 8659f4b:	e8 ea 0f 04 00       	call   869af3a <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8659f50:	83 ec 04             	sub    $0x4,%esp
 8659f53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8659f56:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8659f59:	eb 1d                	jmp    8659f78 <_ZN15CUserCharacInfo22ClearUselessEffectItemEj+0x84>
 8659f5b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8659f5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8659f65:	00 
 8659f66:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8659f69:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659f6d:	89 04 24             	mov    %eax,(%esp)
 8659f70:	e8 ab 10 04 00       	call   869b020 <_ZN9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEppEi>
 8659f75:	83 ec 04             	sub    $0x4,%esp
 8659f78:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8659f7b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8659f7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659f82:	89 04 24             	mov    %eax,(%esp)
 8659f85:	e8 54 0f 04 00       	call   869aede <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE3endEv>
 8659f8a:	83 ec 04             	sub    $0x4,%esp
 8659f8d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8659f90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8659f94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659f97:	89 04 24             	mov    %eax,(%esp)
 8659f9a:	e8 65 0f 04 00       	call   869af04 <_ZN9__gnu_cxxneIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8659f9f:	84 c0                	test   %al,%al
 8659fa1:	0f 85 78 ff ff ff    	jne    8659f1f <_ZN15CUserCharacInfo22ClearUselessEffectItemEj+0x2b>
 8659fa7:	c9                   	leave
 8659fa8:	c3                   	ret
 8659fa9:	90                   	nop

```

```c
// CUserCharacInfo::ClearUselessEffectItem @ 0x8659ef4

/* CUserCharacInfo::ClearUselessEffectItem(unsigned int) */

void __thiscall CUserCharacInfo::ClearUselessEffectItem(CUserCharacInfo *this,uint param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  __normal_iterator local_18 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = *(int *)(this + 0x10) + 0xea6;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_1c,local_18);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
            ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                          *)&local_1c);
    if (*(uint *)(iVar2 + 4) < param_1) {
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                (&local_20,local_10,local_1c);
      local_1c = local_20;
    }
    else {
      __gnu_cxx::
      __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
      ::operator++(local_14,(int)&local_1c);
    }
  }
  return;
}

```

---

## DecFatigueBatteryCharging

```asm
// === 08656784 CUserCharacInfo::DecFatigueBatteryCharging  [0x08656784-0x8656807] ===
 8656784:	55                   	push   %ebp
 8656785:	89 e5                	mov    %esp,%ebp
 8656787:	53                   	push   %ebx
 8656788:	83 ec 34             	sub    $0x34,%esp
 865678b:	8b 45 0c             	mov    0xc(%ebp),%eax
 865678e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8656792:	8b 45 08             	mov    0x8(%ebp),%eax
 8656795:	8b 40 10             	mov    0x10(%eax),%eax
 8656798:	85 c0                	test   %eax,%eax
 865679a:	74 65                	je     8656801 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs+0x7d>
 865679c:	8b 45 08             	mov    0x8(%ebp),%eax
 865679f:	89 04 24             	mov    %eax,(%esp)
 86567a2:	e8 c9 40 b4 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 86567a7:	8b 45 08             	mov    0x8(%ebp),%eax
 86567aa:	8b 40 10             	mov    0x10(%eax),%eax
 86567ad:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 86567b1:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 86567b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86567b8:	8b 40 10             	mov    0x10(%eax),%eax
 86567bb:	8b 55 08             	mov    0x8(%ebp),%edx
 86567be:	8b 52 10             	mov    0x10(%edx),%edx
 86567c1:	0f b7 52 4f          	movzwl 0x4f(%edx),%edx
 86567c5:	89 d1                	mov    %edx,%ecx
 86567c7:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 86567cb:	89 cb                	mov    %ecx,%ebx
 86567cd:	66 29 d3             	sub    %dx,%bx
 86567d0:	89 da                	mov    %ebx,%edx
 86567d2:	66 89 50 4f          	mov    %dx,0x4f(%eax)
 86567d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86567d9:	8b 40 10             	mov    0x10(%eax),%eax
 86567dc:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 86567e0:	66 85 c0             	test   %ax,%ax
 86567e3:	78 10                	js     86567f5 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs+0x71>
 86567e5:	8b 45 08             	mov    0x8(%ebp),%eax
 86567e8:	8b 40 10             	mov    0x10(%eax),%eax
 86567eb:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 86567ef:	66 3b 45 f6          	cmp    -0xa(%ebp),%ax
 86567f3:	7e 0c                	jle    8656801 <_ZN15CUserCharacInfo25DecFatigueBatteryChargingEs+0x7d>
 86567f5:	8b 45 08             	mov    0x8(%ebp),%eax
 86567f8:	8b 40 10             	mov    0x10(%eax),%eax
 86567fb:	66 c7 40 4f 00 00    	movw   $0x0,0x4f(%eax)
 8656801:	83 c4 34             	add    $0x34,%esp
 8656804:	5b                   	pop    %ebx
 8656805:	5d                   	pop    %ebp
 8656806:	c3                   	ret
 8656807:	90                   	nop

```

```c
// CUserCharacInfo::DecFatigueBatteryCharging @ 0x8656784

/* CUserCharacInfo::DecFatigueBatteryCharging(short) */

void __thiscall CUserCharacInfo::DecFatigueBatteryCharging(CUserCharacInfo *this,short param_1)

{
  short sVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    sVar1 = *(short *)(*(int *)(this + 0x10) + 0x4f);
    *(short *)(*(int *)(this + 0x10) + 0x4f) = *(short *)(*(int *)(this + 0x10) + 0x4f) - param_1;
    if ((*(short *)(*(int *)(this + 0x10) + 0x4f) < 0) ||
       (sVar1 < *(short *)(*(int *)(this + 0x10) + 0x4f))) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x4f) = 0;
    }
  }
  return;
}

```

---

## DecreasePowerWarPoint

```asm
// === 08687f66 CUserCharacInfo::DecreasePowerWarPoint  [0x08687f66-0x8687fd7] ===
 8687f66:	55                   	push   %ebp
 8687f67:	89 e5                	mov    %esp,%ebp
 8687f69:	53                   	push   %ebx
 8687f6a:	83 ec 24             	sub    $0x24,%esp
 8687f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687f70:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8687f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f77:	8b 40 10             	mov    0x10(%eax),%eax
 8687f7a:	85 c0                	test   %eax,%eax
 8687f7c:	74 53                	je     8687fd1 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs+0x6b>
 8687f7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f81:	89 04 24             	mov    %eax,(%esp)
 8687f84:	e8 e7 28 b1 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8687f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f8c:	8b 40 10             	mov    0x10(%eax),%eax
 8687f8f:	8b 55 08             	mov    0x8(%ebp),%edx
 8687f92:	8b 52 10             	mov    0x10(%edx),%edx
 8687f95:	0f b7 92 1f 12 00 00 	movzwl 0x121f(%edx),%edx
 8687f9c:	89 d1                	mov    %edx,%ecx
 8687f9e:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8687fa2:	89 cb                	mov    %ecx,%ebx
 8687fa4:	66 29 d3             	sub    %dx,%bx
 8687fa7:	89 da                	mov    %ebx,%edx
 8687fa9:	66 89 90 1f 12 00 00 	mov    %dx,0x121f(%eax)
 8687fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8687fb3:	8b 40 10             	mov    0x10(%eax),%eax
 8687fb6:	0f b7 80 1f 12 00 00 	movzwl 0x121f(%eax),%eax
 8687fbd:	66 85 c0             	test   %ax,%ax
 8687fc0:	79 0f                	jns    8687fd1 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs+0x6b>
 8687fc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8687fc5:	8b 40 10             	mov    0x10(%eax),%eax
 8687fc8:	66 c7 80 1f 12 00 00 	movw   $0x0,0x121f(%eax)
 8687fcf:	00 00 
 8687fd1:	83 c4 24             	add    $0x24,%esp
 8687fd4:	5b                   	pop    %ebx
 8687fd5:	5d                   	pop    %ebp
 8687fd6:	c3                   	ret
 8687fd7:	90                   	nop

```

```c
// CUserCharacInfo::DecreasePowerWarPoint @ 0x8687f66

/* CUserCharacInfo::DecreasePowerWarPoint(short) */

void __thiscall CUserCharacInfo::DecreasePowerWarPoint(CUserCharacInfo *this,short param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(short *)(*(int *)(this + 0x10) + 0x121f) =
         *(short *)(*(int *)(this + 0x10) + 0x121f) - param_1;
    if (*(short *)(*(int *)(this + 0x10) + 0x121f) < 0) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x121f) = 0;
    }
  }
  return;
}

```

---

## DecreaseWarPoint

```asm
// === 08645aa0 CUserCharacInfo::DecreaseWarPoint  [0x08645aa0-0x8645b7f] ===
 8645aa0:	55                   	push   %ebp
 8645aa1:	89 e5                	mov    %esp,%ebp
 8645aa3:	83 ec 38             	sub    $0x38,%esp
 8645aa6:	8b 45 08             	mov    0x8(%ebp),%eax
 8645aa9:	8b 40 10             	mov    0x10(%eax),%eax
 8645aac:	85 c0                	test   %eax,%eax
 8645aae:	75 3b                	jne    8645aeb <_ZN15CUserCharacInfo16DecreaseWarPointEi+0x4b>
 8645ab0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8645ab7:	00 
 8645ab8:	c7 44 24 08 97 02 00 	movl   $0x297,0x8(%esp)
 8645abf:	00 
 8645ac0:	c7 44 24 04 60 37 cf 	movl   $0x8cf3760,0x4(%esp)
 8645ac7:	08 
 8645ac8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8645acb:	89 04 24             	mov    %eax,(%esp)
 8645ace:	e8 45 9c f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8645ad3:	c7 44 24 04 58 e1 ce 	movl   $0x8cee158,0x4(%esp)
 8645ada:	08 
 8645adb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8645ade:	89 04 24             	mov    %eax,(%esp)
 8645ae1:	e8 a2 9c f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645ae6:	e9 93 00 00 00       	jmp    8645b7e <_ZN15CUserCharacInfo16DecreaseWarPointEi+0xde>
 8645aeb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8645aef:	7f 12                	jg     8645b03 <_ZN15CUserCharacInfo16DecreaseWarPointEi+0x63>
 8645af1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645af4:	8b 40 10             	mov    0x10(%eax),%eax
 8645af7:	c7 80 0a 0e 00 00 00 	movl   $0x0,0xe0a(%eax)
 8645afe:	00 00 00 
 8645b01:	eb 3b                	jmp    8645b3e <_ZN15CUserCharacInfo16DecreaseWarPointEi+0x9e>
 8645b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b06:	8b 40 10             	mov    0x10(%eax),%eax
 8645b09:	8b 55 08             	mov    0x8(%ebp),%edx
 8645b0c:	8b 52 10             	mov    0x10(%edx),%edx
 8645b0f:	8b 92 0a 0e 00 00    	mov    0xe0a(%edx),%edx
 8645b15:	2b 55 0c             	sub    0xc(%ebp),%edx
 8645b18:	89 90 0a 0e 00 00    	mov    %edx,0xe0a(%eax)
 8645b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b21:	8b 40 10             	mov    0x10(%eax),%eax
 8645b24:	8b 80 0a 0e 00 00    	mov    0xe0a(%eax),%eax
 8645b2a:	85 c0                	test   %eax,%eax
 8645b2c:	79 10                	jns    8645b3e <_ZN15CUserCharacInfo16DecreaseWarPointEi+0x9e>
 8645b2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b31:	8b 40 10             	mov    0x10(%eax),%eax
 8645b34:	c7 80 0a 0e 00 00 00 	movl   $0x0,0xe0a(%eax)
 8645b3b:	00 00 00 
 8645b3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b41:	8b 40 10             	mov    0x10(%eax),%eax
 8645b44:	8b 90 0a 0e 00 00    	mov    0xe0a(%eax),%edx
 8645b4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b4d:	8b 40 10             	mov    0x10(%eax),%eax
 8645b50:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 8645b56:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8645b59:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8645b5f:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 8645b66:	00 
 8645b67:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8645b6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8645b6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8645b72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8645b76:	89 0c 24             	mov    %ecx,(%esp)
 8645b79:	e8 18 f0 03 00       	call   8684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>
 8645b7e:	c9                   	leave
 8645b7f:	c3                   	ret

```

```c
// CUserCharacInfo::DecreaseWarPoint @ 0x8645aa0

/* CUserCharacInfo::DecreaseWarPoint(int) */

void __thiscall CUserCharacInfo::DecreaseWarPoint(CUserCharacInfo *this,int param_1)

{
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::DecreaseWarPoint(int)",0x297,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::DecreaseWarPoint() : m_selected is NULL");
  }
  else {
    if (param_1 < 1) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
    }
    else {
      *(int *)(*(int *)(this + 0x10) + 0xe0a) = *(int *)(*(int *)(this + 0x10) + 0xe0a) - param_1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe0a) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
      }
    }
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),param_1,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),3);
  }
  return;
}

```

---

## DieCurCharac

```asm
// === 0864628e CUserCharacInfo::DieCurCharac  [0x0864628e-0x8646405] ===
 864628e:	55                   	push   %ebp
 864628f:	89 e5                	mov    %esp,%ebp
 8646291:	56                   	push   %esi
 8646292:	53                   	push   %ebx
 8646293:	83 ec 20             	sub    $0x20,%esp
 8646296:	8b 45 08             	mov    0x8(%ebp),%eax
 8646299:	8b 40 10             	mov    0x10(%eax),%eax
 864629c:	85 c0                	test   %eax,%eax
 864629e:	0f 84 5a 01 00 00    	je     86463fe <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x170>
 86462a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86462a7:	89 04 24             	mov    %eax,(%esp)
 86462aa:	e8 c1 45 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 86462af:	8b 45 08             	mov    0x8(%ebp),%eax
 86462b2:	8b 40 10             	mov    0x10(%eax),%eax
 86462b5:	c6 80 66 0e 00 00 01 	movb   $0x1,0xe66(%eax)
 86462bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86462bf:	8b 58 10             	mov    0x10(%eax),%ebx
 86462c2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86462c9:	e8 d0 59 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86462ce:	8b 55 08             	mov    0x8(%ebp),%edx
 86462d1:	8b 52 10             	mov    0x10(%edx),%edx
 86462d4:	8b 92 5d 0e 00 00    	mov    0xe5d(%edx),%edx
 86462da:	29 d0                	sub    %edx,%eax
 86462dc:	89 83 61 0e 00 00    	mov    %eax,0xe61(%ebx)
 86462e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86462e5:	8b 58 10             	mov    0x10(%eax),%ebx
 86462e8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86462ef:	e8 aa 59 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86462f4:	03 45 0c             	add    0xc(%ebp),%eax
 86462f7:	89 83 5d 0e 00 00    	mov    %eax,0xe5d(%ebx)
 86462fd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8646304:	a1 50 be 40 09       	mov    0x940be50,%eax
 8646309:	89 04 24             	mov    %eax,(%esp)
 864630c:	e8 ff 95 e3 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 8646311:	84 c0                	test   %al,%al
 8646313:	75 0f                	jne    8646324 <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x96>
 8646315:	8b 45 08             	mov    0x8(%ebp),%eax
 8646318:	89 04 24             	mov    %eax,(%esp)
 864631b:	e8 44 f2 ff ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8646320:	3c 07                	cmp    $0x7,%al
 8646322:	75 07                	jne    864632b <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x9d>
 8646324:	b8 01 00 00 00       	mov    $0x1,%eax
 8646329:	eb 05                	jmp    8646330 <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0xa2>
 864632b:	b8 00 00 00 00       	mov    $0x0,%eax
 8646330:	84 c0                	test   %al,%al
 8646332:	74 37                	je     864636b <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0xdd>
 8646334:	a1 50 be 40 09       	mov    0x940be50,%eax
 8646339:	8b 55 10             	mov    0x10(%ebp),%edx
 864633c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8646340:	89 04 24             	mov    %eax,(%esp)
 8646343:	e8 80 ab e3 ff       	call   8480ec8 <_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser>
 8646348:	d9 5d f0             	fstps  -0x10(%ebp)
 864634b:	a1 50 be 40 09       	mov    0x940be50,%eax
 8646350:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8646353:	89 54 24 08          	mov    %edx,0x8(%esp)
 8646357:	8b 55 10             	mov    0x10(%ebp),%edx
 864635a:	89 54 24 04          	mov    %edx,0x4(%esp)
 864635e:	89 04 24             	mov    %eax,(%esp)
 8646361:	e8 2c ab e3 ff       	call   8480e92 <_ZN13CPowerManager20GetPowerWarGhostTimeEP5CUserf>
 8646366:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8646369:	eb 35                	jmp    86463a0 <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x112>
 864636b:	8b 45 10             	mov    0x10(%ebp),%eax
 864636e:	89 04 24             	mov    %eax,(%esp)
 8646371:	e8 62 a7 ca ff       	call   82f0ad8 <_ZN15CUserCharacInfo22GetCurCharacChaosPointEv>
 8646376:	89 c6                	mov    %eax,%esi
 8646378:	8b 45 10             	mov    0x10(%ebp),%eax
 864637b:	89 04 24             	mov    %eax,(%esp)
 864637e:	e8 35 3f a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8646383:	89 c3                	mov    %eax,%ebx
 8646385:	e8 11 5e a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 864638a:	83 c0 68             	add    $0x68,%eax
 864638d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8646391:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8646395:	89 04 24             	mov    %eax,(%esp)
 8646398:	e8 67 64 44 00       	call   8a8c804 <_ZN21ServerParameterScript19getAssaultGhostTimeEii>
 864639d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86463a0:	8b 45 08             	mov    0x8(%ebp),%eax
 86463a3:	89 04 24             	mov    %eax,(%esp)
 86463a6:	e8 2f 3f a9 ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 86463ab:	84 c0                	test   %al,%al
 86463ad:	74 0d                	je     86463bc <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x12e>
 86463af:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86463b3:	74 07                	je     86463bc <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x12e>
 86463b5:	b8 01 00 00 00       	mov    $0x1,%eax
 86463ba:	eb 05                	jmp    86463c1 <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x133>
 86463bc:	b8 00 00 00 00       	mov    $0x0,%eax
 86463c1:	84 c0                	test   %al,%al
 86463c3:	74 39                	je     86463fe <_ZN15CUserCharacInfo12DieCurCharacEiP5CUser+0x170>
 86463c5:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86463cc:	e8 cd 58 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86463d1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86463d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86463d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86463db:	8b 45 08             	mov    0x8(%ebp),%eax
 86463de:	89 04 24             	mov    %eax,(%esp)
 86463e1:	e8 1e a8 ca ff       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 86463e6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86463e9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86463ec:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86463ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 86463f3:	8b 45 08             	mov    0x8(%ebp),%eax
 86463f6:	89 04 24             	mov    %eax,(%esp)
 86463f9:	e8 f6 8a 04 00       	call   868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>
 86463fe:	83 c4 20             	add    $0x20,%esp
 8646401:	5b                   	pop    %ebx
 8646402:	5e                   	pop    %esi
 8646403:	5d                   	pop    %ebp
 8646404:	c3                   	ret
 8646405:	90                   	nop

```

```c
// CUserCharacInfo::DieCurCharac @ 0x864628e

/* CUserCharacInfo::DieCurCharac(int, CUser*) */

void __thiscall CUserCharacInfo::DieCurCharac(CUserCharacInfo *this,int param_1,CUser *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longdouble lVar6;
  int local_18;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined1 *)(*(int *)(this + 0x10) + 0xe66) = 1;
    iVar5 = *(int *)(this + 0x10);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(iVar5 + 0xe61) = iVar3 - *(int *)(*(int *)(this + 0x10) + 0xe5d);
    iVar5 = *(int *)(this + 0x10);
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    *(int *)(iVar5 + 0xe5d) = iVar3 + param_1;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\0') && (cVar2 = getCurCharacVill(this), cVar2 != '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar6 = (longdouble)
              CPowerManager::GetPowerWarResponPenalty(GlobalData::s_power_manager,param_2);
      local_18 = CPowerManager::GetPowerWarGhostTime
                           (GlobalData::s_power_manager,param_2,(float)lVar6);
    }
    else {
      iVar5 = GetCurCharacChaosPoint((CUserCharacInfo *)param_2);
      iVar3 = get_charac_level((CUserCharacInfo *)param_2);
      iVar4 = G_CDataManager();
      local_18 = ServerParameterScript::getAssaultGhostTime
                           ((ServerParameterScript *)(iVar4 + 0x68),iVar3,iVar5);
    }
    cVar2 = IsCurCharacGhost(this);
    if ((cVar2 == '\0') || (local_18 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      SetCurCharacChaosDieTime(this,iVar5);
      SetCurCharacChaosResponTime(this,iVar5 + local_18);
    }
    return;
  }
  return;
}

```

---

## EnablePeriodExpDouble

```asm
// === 08659bec CUserCharacInfo::EnablePeriodExpDouble  [0x08659bec-0x8659cef] ===
 8659bec:	55                   	push   %ebp
 8659bed:	89 e5                	mov    %esp,%ebp
 8659bef:	83 ec 48             	sub    $0x48,%esp
 8659bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8659bf5:	8b 40 10             	mov    0x10(%eax),%eax
 8659bf8:	05 a6 0e 00 00       	add    $0xea6,%eax
 8659bfd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8659c00:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8659c03:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8659c06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659c0a:	89 04 24             	mov    %eax,(%esp)
 8659c0d:	e8 a8 12 04 00       	call   869aeba <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5beginEv>
 8659c12:	83 ec 04             	sub    $0x4,%esp
 8659c15:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8659c1c:	e8 7d 20 a7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8659c21:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8659c24:	e9 90 00 00 00       	jmp    8659cb9 <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0xcd>
 8659c29:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8659c2c:	89 04 24             	mov    %eax,(%esp)
 8659c2f:	e8 fc 12 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659c34:	8b 00                	mov    (%eax),%eax
 8659c36:	3d d1 1c 00 00       	cmp    $0x1cd1,%eax
 8659c3b:	0f 94 c0             	sete   %al
 8659c3e:	84 c0                	test   %al,%al
 8659c40:	74 5a                	je     8659c9c <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0xb0>
 8659c42:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8659c45:	89 04 24             	mov    %eax,(%esp)
 8659c48:	e8 e3 12 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659c4d:	8b 40 04             	mov    0x4(%eax),%eax
 8659c50:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8659c53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8659c56:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8659c59:	73 0a                	jae    8659c65 <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0x79>
 8659c5b:	b8 01 00 00 00       	mov    $0x1,%eax
 8659c60:	e9 88 00 00 00       	jmp    8659ced <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0x101>
 8659c65:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8659c68:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8659c6b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8659c6f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8659c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659c76:	89 04 24             	mov    %eax,(%esp)
 8659c79:	e8 bc 12 04 00       	call   869af3a <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8659c7e:	83 ec 04             	sub    $0x4,%esp
 8659c81:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8659c84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8659c87:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8659c8e:	00 
 8659c8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8659c92:	89 04 24             	mov    %eax,(%esp)
 8659c95:	e8 ba cd 03 00       	call   8696a54 <_ZN15CUserCharacInfo22SetIsAffectedExpDoubleEb>
 8659c9a:	eb 4c                	jmp    8659ce8 <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0xfc>
 8659c9c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8659c9f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8659ca6:	00 
 8659ca7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8659caa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659cae:	89 04 24             	mov    %eax,(%esp)
 8659cb1:	e8 6a 13 04 00       	call   869b020 <_ZN9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEppEi>
 8659cb6:	83 ec 04             	sub    $0x4,%esp
 8659cb9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8659cbc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8659cbf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659cc3:	89 04 24             	mov    %eax,(%esp)
 8659cc6:	e8 13 12 04 00       	call   869aede <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE3endEv>
 8659ccb:	83 ec 04             	sub    $0x4,%esp
 8659cce:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8659cd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8659cd5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8659cd8:	89 04 24             	mov    %eax,(%esp)
 8659cdb:	e8 24 12 04 00       	call   869af04 <_ZN9__gnu_cxxneIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8659ce0:	84 c0                	test   %al,%al
 8659ce2:	0f 85 41 ff ff ff    	jne    8659c29 <_ZN15CUserCharacInfo21EnablePeriodExpDoubleEv+0x3d>
 8659ce8:	b8 00 00 00 00       	mov    $0x0,%eax
 8659ced:	c9                   	leave
 8659cee:	c3                   	ret
 8659cef:	90                   	nop

```

```c
// CUserCharacInfo::EnablePeriodExpDouble @ 0x8659bec

/* CUserCharacInfo::EnablePeriodExpDouble() */

undefined4 __thiscall CUserCharacInfo::EnablePeriodExpDouble(CUserCharacInfo *this)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_30 [3];
  undefined4 local_24;
  __normal_iterator local_20 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_1c [4];
  int local_18;
  uint local_14;
  uint local_10;
  
  local_18 = *(int *)(this + 0x10) + 0xea6;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_24,local_20);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                    ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                  *)&local_24);
    if (*piVar2 == 0x1cd1) break;
    __gnu_cxx::
    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
    ::operator++(local_1c,(int)&local_24);
  }
  iVar3 = __gnu_cxx::
          __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
          ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                        *)&local_24);
  local_10 = *(uint *)(iVar3 + 4);
  if (local_10 <= local_14) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
              (local_30,local_18,local_24);
    local_24 = local_30[0];
    SetIsAffectedExpDouble(this,false);
    return 0;
  }
  return 1;
}

```

---

## EnablePeriodExpItem

```asm
// === 08659cf0 CUserCharacInfo::EnablePeriodExpItem  [0x08659cf0-0x8659e3d] ===
 8659cf0:	55                   	push   %ebp
 8659cf1:	89 e5                	mov    %esp,%ebp
 8659cf3:	53                   	push   %ebx
 8659cf4:	83 ec 44             	sub    $0x44,%esp
 8659cf7:	8b 45 08             	mov    0x8(%ebp),%eax
 8659cfa:	8b 40 10             	mov    0x10(%eax),%eax
 8659cfd:	05 a6 0e 00 00       	add    $0xea6,%eax
 8659d02:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8659d05:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8659d08:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8659d0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659d0f:	89 04 24             	mov    %eax,(%esp)
 8659d12:	e8 a3 11 04 00       	call   869aeba <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5beginEv>
 8659d17:	83 ec 04             	sub    $0x4,%esp
 8659d1a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8659d21:	e8 78 1f a7 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8659d26:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8659d29:	e9 d7 00 00 00       	jmp    8659e05 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x115>
 8659d2e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8659d31:	89 04 24             	mov    %eax,(%esp)
 8659d34:	e8 f7 11 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659d39:	8b 00                	mov    (%eax),%eax
 8659d3b:	89 c3                	mov    %eax,%ebx
 8659d3d:	e8 59 24 a7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8659d42:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8659d46:	89 04 24             	mov    %eax,(%esp)
 8659d49:	e8 e4 5c d0 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8659d4e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8659d51:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8659d55:	75 0a                	jne    8659d61 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x71>
 8659d57:	b8 00 00 00 00       	mov    $0x0,%eax
 8659d5c:	e9 d8 00 00 00       	jmp    8659e39 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x149>
 8659d61:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8659d64:	89 04 24             	mov    %eax,(%esp)
 8659d67:	e8 8e 75 a9 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8659d6c:	84 c0                	test   %al,%al
 8659d6e:	74 78                	je     8659de8 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0xf8>
 8659d70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8659d73:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8659d76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8659d79:	89 04 24             	mov    %eax,(%esp)
 8659d7c:	e8 b5 a9 03 00       	call   8694736 <_ZN14CStackableItem11IsExpAffectEv>
 8659d81:	84 c0                	test   %al,%al
 8659d83:	74 63                	je     8659de8 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0xf8>
 8659d85:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8659d88:	89 04 24             	mov    %eax,(%esp)
 8659d8b:	e8 a0 11 04 00       	call   869af30 <_ZNK9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEptEv>
 8659d90:	8b 40 04             	mov    0x4(%eax),%eax
 8659d93:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8659d96:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8659d99:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8659d9c:	73 0a                	jae    8659da8 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0xb8>
 8659d9e:	b8 01 00 00 00       	mov    $0x1,%eax
 8659da3:	e9 91 00 00 00       	jmp    8659e39 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x149>
 8659da8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8659dab:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8659dae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8659db2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8659db5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659db9:	89 04 24             	mov    %eax,(%esp)
 8659dbc:	e8 79 11 04 00       	call   869af3a <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 8659dc1:	83 ec 04             	sub    $0x4,%esp
 8659dc4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8659dc7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8659dca:	b8 00 00 00 00       	mov    $0x0,%eax
 8659dcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8659dd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8659dda:	00 
 8659ddb:	8b 45 08             	mov    0x8(%ebp),%eax
 8659dde:	89 04 24             	mov    %eax,(%esp)
 8659de1:	e8 36 20 fe ff       	call   863be1c <_ZN15CUserCharacInfo22SetExpAffectItemEffectEbf>
 8659de6:	eb 4c                	jmp    8659e34 <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x144>
 8659de8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8659deb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8659df2:	00 
 8659df3:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8659df6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659dfa:	89 04 24             	mov    %eax,(%esp)
 8659dfd:	e8 1e 12 04 00       	call   869b020 <_ZN9__gnu_cxx17__normal_iteratorIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEppEi>
 8659e02:	83 ec 04             	sub    $0x4,%esp
 8659e05:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8659e08:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8659e0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8659e0f:	89 04 24             	mov    %eax,(%esp)
 8659e12:	e8 c7 10 04 00       	call   869aede <_ZNSt6vectorI18ContinuousItemInfoSaIS0_EE3endEv>
 8659e17:	83 ec 04             	sub    $0x4,%esp
 8659e1a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8659e1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8659e21:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8659e24:	89 04 24             	mov    %eax,(%esp)
 8659e27:	e8 d8 10 04 00       	call   869af04 <_ZN9__gnu_cxxneIP18ContinuousItemInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8659e2c:	84 c0                	test   %al,%al
 8659e2e:	0f 85 fa fe ff ff    	jne    8659d2e <_ZN15CUserCharacInfo19EnablePeriodExpItemEv+0x3e>
 8659e34:	b8 00 00 00 00       	mov    $0x0,%eax
 8659e39:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8659e3c:	c9                   	leave
 8659e3d:	c3                   	ret

```

```c
// CUserCharacInfo::EnablePeriodExpItem @ 0x8659cf0

/* CUserCharacInfo::EnablePeriodExpItem() */

undefined4 __thiscall CUserCharacInfo::EnablePeriodExpItem(CUserCharacInfo *this)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  __normal_iterator local_28 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_24 [4];
  int local_20;
  uint local_1c;
  CStackableItem *local_18;
  CStackableItem *local_14;
  uint local_10;
  
  local_20 = *(int *)(this + 0x10) + 0xea6;
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_2c,local_28);
    if (!bVar2) {
      return 0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                    ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                                  *)&local_2c);
    iVar4 = *piVar3;
    this_00 = (CDataManager *)G_CDataManager();
    local_18 = (CStackableItem *)CDataManager::find_item(this_00,iVar4);
    if (local_18 == (CStackableItem *)0x0) break;
    cVar1 = CItem::is_stackable((CItem *)local_18);
    if (cVar1 != '\0') {
      local_14 = local_18;
      cVar1 = CStackableItem::IsExpAffect(local_18);
      if (cVar1 != '\0') {
        iVar4 = __gnu_cxx::
                __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                ::operator->((__normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                              *)&local_2c);
        local_10 = *(uint *)(iVar4 + 4);
        if (local_10 <= local_1c) {
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::erase
                    (&local_30,local_20,local_2c);
          local_2c = local_30;
          SetExpAffectItemEffect(this,false,0.0);
          return 0;
        }
        return 1;
      }
    }
    __gnu_cxx::
    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
    ::operator++(local_24,(int)&local_2c);
  }
  return 0;
}

```

---

## FindItemLock

```asm
// === 08680e04 CUserCharacInfo::FindItemLock  [0x08680e04-0x8680f2d] ===
 8680e04:	55                   	push   %ebp
 8680e05:	89 e5                	mov    %esp,%ebp
 8680e07:	53                   	push   %ebx
 8680e08:	83 ec 34             	sub    $0x34,%esp
 8680e0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8680e0e:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8680e11:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8680e15:	75 0a                	jne    8680e21 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x1d>
 8680e17:	b8 00 00 00 00       	mov    $0x0,%eax
 8680e1c:	e9 07 01 00 00       	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680e21:	8b 45 08             	mov    0x8(%ebp),%eax
 8680e24:	8b 40 10             	mov    0x10(%eax),%eax
 8680e27:	85 c0                	test   %eax,%eax
 8680e29:	75 0a                	jne    8680e35 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x31>
 8680e2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8680e30:	e9 f3 00 00 00       	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680e35:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8680e39:	8b 55 08             	mov    0x8(%ebp),%edx
 8680e3c:	8b 52 10             	mov    0x10(%edx),%edx
 8680e3f:	8d 8a aa 0d 00 00    	lea    0xdaa(%edx),%ecx
 8680e45:	8b 55 14             	mov    0x14(%ebp),%edx
 8680e48:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8680e4c:	8b 55 10             	mov    0x10(%ebp),%edx
 8680e4f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8680e53:	89 44 24 04          	mov    %eax,0x4(%esp)
 8680e57:	89 0c 24             	mov    %ecx,(%esp)
 8680e5a:	e8 d7 b9 e8 ff       	call   850c836 <_ZNK6CCargo12FindItemLockEhR14ENUM_ITEMSPACERi>
 8680e5f:	84 c0                	test   %al,%al
 8680e61:	74 0a                	je     8680e6d <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x69>
 8680e63:	b8 01 00 00 00       	mov    $0x1,%eax
 8680e68:	e9 bb 00 00 00       	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680e6d:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8680e71:	8b 55 08             	mov    0x8(%ebp),%edx
 8680e74:	8b 52 10             	mov    0x10(%edx),%edx
 8680e77:	8d 8a da 00 00 00    	lea    0xda(%edx),%ecx
 8680e7d:	8b 55 14             	mov    0x14(%ebp),%edx
 8680e80:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8680e84:	8b 55 10             	mov    0x10(%ebp),%edx
 8680e87:	89 54 24 08          	mov    %edx,0x8(%esp)
 8680e8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8680e8f:	89 0c 24             	mov    %ecx,(%esp)
 8680e92:	e8 d9 9d e7 ff       	call   84fac70 <_ZNK10CInventory12FindItemLockEhR14ENUM_ITEMSPACERi>
 8680e97:	84 c0                	test   %al,%al
 8680e99:	74 0a                	je     8680ea5 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0xa1>
 8680e9b:	b8 01 00 00 00       	mov    $0x1,%eax
 8680ea0:	e9 83 00 00 00       	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680ea5:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8680eac:	00 
 8680ead:	8b 45 18             	mov    0x18(%ebp),%eax
 8680eb0:	89 04 24             	mov    %eax,(%esp)
 8680eb3:	e8 cc c6 a5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8680eb8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8680ebb:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8680ebf:	8b 55 14             	mov    0x14(%ebp),%edx
 8680ec2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8680ec6:	8b 55 10             	mov    0x10(%ebp),%edx
 8680ec9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8680ecd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8680ed1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8680ed4:	89 04 24             	mov    %eax,(%esp)
 8680ed7:	e8 2e 90 e1 ff       	call   8499f0a <_ZNK16CExpandEquipslot12FindItemLockEhR14ENUM_ITEMSPACERi>
 8680edc:	84 c0                	test   %al,%al
 8680ede:	74 07                	je     8680ee7 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0xe3>
 8680ee0:	b8 01 00 00 00       	mov    $0x1,%eax
 8680ee5:	eb 41                	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680ee7:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 8680eeb:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 8680ef2:	00 
 8680ef3:	8b 45 18             	mov    0x18(%ebp),%eax
 8680ef6:	89 04 24             	mov    %eax,(%esp)
 8680ef9:	e8 86 c6 a5 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 8680efe:	8b 55 14             	mov    0x14(%ebp),%edx
 8680f01:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8680f05:	8b 55 10             	mov    0x10(%ebp),%edx
 8680f08:	89 54 24 08          	mov    %edx,0x8(%esp)
 8680f0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8680f10:	89 04 24             	mov    %eax,(%esp)
 8680f13:	e8 0c 02 fc ff       	call   8641124 <_ZNK10CTitleBook12findItemLockEhR14ENUM_ITEMSPACERi>
 8680f18:	84 c0                	test   %al,%al
 8680f1a:	74 07                	je     8680f23 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x11f>
 8680f1c:	b8 01 00 00 00       	mov    $0x1,%eax
 8680f21:	eb 05                	jmp    8680f28 <_ZNK15CUserCharacInfo12FindItemLockEhR14ENUM_ITEMSPACERiP5CUser+0x124>
 8680f23:	b8 00 00 00 00       	mov    $0x0,%eax
 8680f28:	83 c4 34             	add    $0x34,%esp
 8680f2b:	5b                   	pop    %ebx
 8680f2c:	5d                   	pop    %ebp
 8680f2d:	c3                   	ret

```

```c
// CUserCharacInfo::FindItemLock @ 0x8680e04

/* CUserCharacInfo::FindItemLock(unsigned char, ENUM_ITEMSPACE&, int&, CUser*) const */

undefined4 __thiscall
CUserCharacInfo::FindItemLock
          (CUserCharacInfo *this,uchar param_1,ENUM_ITEMSPACE *param_2,int *param_3,CUser *param_4)

{
  char cVar1;
  undefined4 uVar2;
  CExpandEquipslot *this_00;
  CTitleBook *this_01;
  
  if (param_4 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CCargo::FindItemLock((CCargo *)(*(int *)(this + 0x10) + 0xdaa),param_1,param_2,param_3);
    if (cVar1 == '\0') {
      cVar1 = CInventory::FindItemLock
                        ((CInventory *)(*(int *)(this + 0x10) + 0xda),param_1,param_2,param_3);
      if (cVar1 == '\0') {
        this_00 = (CExpandEquipslot *)CUser::GetCharacExpandData(param_4,9);
        cVar1 = CExpandEquipslot::FindItemLock(this_00,param_1,param_2,param_3);
        if (cVar1 == '\0') {
          this_01 = (CTitleBook *)CUser::GetCharacExpandData(param_4,0xe);
          cVar1 = CTitleBook::findItemLock(this_01,param_1,param_2,param_3);
          if (cVar1 == '\0') {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## GainCurCharacChaosExp

```asm
// === 08645e5e CUserCharacInfo::GainCurCharacChaosExp  [0x08645e5e-0x8645f7f] ===
 8645e5e:	55                   	push   %ebp
 8645e5f:	89 e5                	mov    %esp,%ebp
 8645e61:	53                   	push   %ebx
 8645e62:	83 ec 24             	sub    $0x24,%esp
 8645e65:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e68:	8b 40 10             	mov    0x10(%eax),%eax
 8645e6b:	85 c0                	test   %eax,%eax
 8645e6d:	0f 84 06 01 00 00    	je     8645f79 <_ZN15CUserCharacInfo21GainCurCharacChaosExpEi+0x11b>
 8645e73:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e76:	8b 40 10             	mov    0x10(%eax),%eax
 8645e79:	8b 80 49 0e 00 00    	mov    0xe49(%eax),%eax
 8645e7f:	85 c0                	test   %eax,%eax
 8645e81:	0f 8e f2 00 00 00    	jle    8645f79 <_ZN15CUserCharacInfo21GainCurCharacChaosExpEi+0x11b>
 8645e87:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e8a:	8b 40 10             	mov    0x10(%eax),%eax
 8645e8d:	8b 55 08             	mov    0x8(%ebp),%edx
 8645e90:	8b 52 10             	mov    0x10(%edx),%edx
 8645e93:	8b 92 4d 0e 00 00    	mov    0xe4d(%edx),%edx
 8645e99:	03 55 0c             	add    0xc(%ebp),%edx
 8645e9c:	89 90 4d 0e 00 00    	mov    %edx,0xe4d(%eax)
 8645ea2:	8b 45 08             	mov    0x8(%ebp),%eax
 8645ea5:	89 04 24             	mov    %eax,(%esp)
 8645ea8:	e8 0b 44 a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8645ead:	89 c3                	mov    %eax,%ebx
 8645eaf:	e8 e7 62 a8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8645eb4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8645ebb:	00 
 8645ebc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8645ec0:	89 04 24             	mov    %eax,(%esp)
 8645ec3:	e8 36 a6 d1 ff       	call   83604fe <_ZNK12CDataManager21get_level_exp_percentEii>
 8645ec8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8645ecb:	8b 45 08             	mov    0x8(%ebp),%eax
 8645ece:	8b 40 10             	mov    0x10(%eax),%eax
 8645ed1:	8b 80 4d 0e 00 00    	mov    0xe4d(%eax),%eax
 8645ed7:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8645eda:	0f 8e 99 00 00 00    	jle    8645f79 <_ZN15CUserCharacInfo21GainCurCharacChaosExpEi+0x11b>
 8645ee0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8645ee4:	0f 8e 8f 00 00 00    	jle    8645f79 <_ZN15CUserCharacInfo21GainCurCharacChaosExpEi+0x11b>
 8645eea:	8b 45 08             	mov    0x8(%ebp),%eax
 8645eed:	89 04 24             	mov    %eax,(%esp)
 8645ef0:	e8 7b 49 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8645ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 8645ef8:	8b 48 10             	mov    0x10(%eax),%ecx
 8645efb:	8b 45 08             	mov    0x8(%ebp),%eax
 8645efe:	8b 40 10             	mov    0x10(%eax),%eax
 8645f01:	8b 98 49 0e 00 00    	mov    0xe49(%eax),%ebx
 8645f07:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f0a:	8b 40 10             	mov    0x10(%eax),%eax
 8645f0d:	8b 80 4d 0e 00 00    	mov    0xe4d(%eax),%eax
 8645f13:	89 c2                	mov    %eax,%edx
 8645f15:	c1 fa 1f             	sar    $0x1f,%edx
 8645f18:	f7 7d f4             	idivl  -0xc(%ebp)
 8645f1b:	89 da                	mov    %ebx,%edx
 8645f1d:	29 c2                	sub    %eax,%edx
 8645f1f:	89 d0                	mov    %edx,%eax
 8645f21:	89 81 49 0e 00 00    	mov    %eax,0xe49(%ecx)
 8645f27:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f2a:	8b 48 10             	mov    0x10(%eax),%ecx
 8645f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f30:	8b 40 10             	mov    0x10(%eax),%eax
 8645f33:	8b 80 4d 0e 00 00    	mov    0xe4d(%eax),%eax
 8645f39:	89 c2                	mov    %eax,%edx
 8645f3b:	c1 fa 1f             	sar    $0x1f,%edx
 8645f3e:	f7 7d f4             	idivl  -0xc(%ebp)
 8645f41:	89 d0                	mov    %edx,%eax
 8645f43:	89 81 4d 0e 00 00    	mov    %eax,0xe4d(%ecx)
 8645f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f4c:	8b 40 10             	mov    0x10(%eax),%eax
 8645f4f:	8b 80 49 0e 00 00    	mov    0xe49(%eax),%eax
 8645f55:	85 c0                	test   %eax,%eax
 8645f57:	79 20                	jns    8645f79 <_ZN15CUserCharacInfo21GainCurCharacChaosExpEi+0x11b>
 8645f59:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f5c:	8b 40 10             	mov    0x10(%eax),%eax
 8645f5f:	c7 80 49 0e 00 00 00 	movl   $0x0,0xe49(%eax)
 8645f66:	00 00 00 
 8645f69:	8b 45 08             	mov    0x8(%ebp),%eax
 8645f6c:	8b 40 10             	mov    0x10(%eax),%eax
 8645f6f:	c7 80 4d 0e 00 00 00 	movl   $0x0,0xe4d(%eax)
 8645f76:	00 00 00 
 8645f79:	83 c4 24             	add    $0x24,%esp
 8645f7c:	5b                   	pop    %ebx
 8645f7d:	5d                   	pop    %ebp
 8645f7e:	c3                   	ret
 8645f7f:	90                   	nop

```

```c
// CUserCharacInfo::GainCurCharacChaosExp @ 0x8645e5e

/* CUserCharacInfo::GainCurCharacChaosExp(int) */

void __thiscall CUserCharacInfo::GainCurCharacChaosExp(CUserCharacInfo *this,int param_1)

{
  int iVar1;
  CDataManager *this_00;
  
  if ((*(int *)(this + 0x10) != 0) && (0 < *(int *)(*(int *)(this + 0x10) + 0xe49))) {
    *(int *)(*(int *)(this + 0x10) + 0xe4d) = *(int *)(*(int *)(this + 0x10) + 0xe4d) + param_1;
    iVar1 = get_charac_level(this);
    this_00 = (CDataManager *)G_CDataManager();
    iVar1 = CDataManager::get_level_exp_percent(this_00,iVar1,1);
    if ((iVar1 < *(int *)(*(int *)(this + 0x10) + 0xe4d)) && (0 < iVar1)) {
      enableSaveCharacStat(this);
      *(int *)(*(int *)(this + 0x10) + 0xe49) =
           *(int *)(*(int *)(this + 0x10) + 0xe49) - *(int *)(*(int *)(this + 0x10) + 0xe4d) / iVar1
      ;
      *(int *)(*(int *)(this + 0x10) + 0xe4d) = *(int *)(*(int *)(this + 0x10) + 0xe4d) % iVar1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe4d) = 0;
      }
    }
  }
  return;
}

```

---

## GetCharacPlayTick

```asm
// === 08645538 CUserCharacInfo::GetCharacPlayTick  [0x08645538-0x8645563] ===
 8645538:	55                   	push   %ebp
 8645539:	89 e5                	mov    %esp,%ebp
 864553b:	53                   	push   %ebx
 864553c:	83 ec 14             	sub    $0x14,%esp
 864553f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8645546:	e8 53 67 a8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 864554b:	89 c3                	mov    %eax,%ebx
 864554d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645550:	89 04 24             	mov    %eax,(%esp)
 8645553:	e8 ca 13 05 00       	call   8696922 <_ZN15CUserCharacInfo22GetCharacStartPlayTickEv>
 8645558:	89 da                	mov    %ebx,%edx
 864555a:	29 c2                	sub    %eax,%edx
 864555c:	89 d0                	mov    %edx,%eax
 864555e:	83 c4 14             	add    $0x14,%esp
 8645561:	5b                   	pop    %ebx
 8645562:	5d                   	pop    %ebp
 8645563:	c3                   	ret

```

```c
// CUserCharacInfo::GetCharacPlayTick @ 0x8645538

/* CUserCharacInfo::GetCharacPlayTick() */

int __thiscall CUserCharacInfo::GetCharacPlayTick(CUserCharacInfo *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar2 = GetCharacStartPlayTick(this);
  return iVar1 - iVar2;
}

```

---

## GetContinuousItemInfo

```asm
// === 08677f24 CUserCharacInfo::GetContinuousItemInfo  [0x08677f24-0x8678083] ===
 8677f24:	55                   	push   %ebp
 8677f25:	89 e5                	mov    %esp,%ebp
 8677f27:	53                   	push   %ebx
 8677f28:	83 ec 34             	sub    $0x34,%esp
 8677f2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f2e:	8b 50 04             	mov    0x4(%eax),%edx
 8677f31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f34:	89 90 08 23 00 00    	mov    %edx,0x2308(%eax)
 8677f3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f3d:	8b 50 04             	mov    0x4(%eax),%edx
 8677f40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f43:	89 90 a0 24 00 00    	mov    %edx,0x24a0(%eax)
 8677f49:	8b 45 08             	mov    0x8(%ebp),%eax
 8677f4c:	89 04 24             	mov    %eax,(%esp)
 8677f4f:	e8 e0 ea 01 00       	call   8696a34 <_ZNK15CUserCharacInfo29GetCurCharacCoolTimeItemListREv>
 8677f54:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8677f57:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8677f5a:	89 04 24             	mov    %eax,(%esp)
 8677f5d:	e8 5e 53 fc ff       	call   863d2c0 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE4sizeEv>
 8677f62:	89 c2                	mov    %eax,%edx
 8677f64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f67:	88 90 0c 23 00 00    	mov    %dl,0x230c(%eax)
 8677f6d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8677f74:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8677f7b:	eb 51                	jmp    8677fce <_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC+0xaa>
 8677f7d:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8677f80:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8677f83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8677f87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8677f8a:	89 04 24             	mov    %eax,(%esp)
 8677f8d:	e8 4a 53 fc ff       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8677f92:	8b 10                	mov    (%eax),%edx
 8677f94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677f97:	8d 8b 60 04 00 00    	lea    0x460(%ebx),%ecx
 8677f9d:	89 54 c8 10          	mov    %edx,0x10(%eax,%ecx,8)
 8677fa1:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8677fa4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8677fa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8677fab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8677fae:	89 04 24             	mov    %eax,(%esp)
 8677fb1:	e8 26 53 fc ff       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8677fb6:	8b 50 04             	mov    0x4(%eax),%edx
 8677fb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8677fbc:	8d 8b 60 04 00 00    	lea    0x460(%ebx),%ecx
 8677fc2:	89 54 c8 14          	mov    %edx,0x14(%eax,%ecx,8)
 8677fc6:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8677fca:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8677fce:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8677fd1:	89 04 24             	mov    %eax,(%esp)
 8677fd4:	e8 e7 52 fc ff       	call   863d2c0 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE4sizeEv>
 8677fd9:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8677fdc:	0f 97 c0             	seta   %al
 8677fdf:	84 c0                	test   %al,%al
 8677fe1:	75 9a                	jne    8677f7d <_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC+0x59>
 8677fe3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8677fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8677fed:	89 04 24             	mov    %eax,(%esp)
 8677ff0:	e8 05 9a f5 ff       	call   85d19fa <_ZNK15CUserCharacInfo27GetCurCharacEffectItemListREv>
 8677ff5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8677ff8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8677ffb:	89 04 24             	mov    %eax,(%esp)
 8677ffe:	e8 bd 52 fc ff       	call   863d2c0 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE4sizeEv>
 8678003:	89 c2                	mov    %eax,%edx
 8678005:	8b 45 0c             	mov    0xc(%ebp),%eax
 8678008:	88 90 a4 24 00 00    	mov    %dl,0x24a4(%eax)
 867800e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8678015:	eb 51                	jmp    8678068 <_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC+0x144>
 8678017:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 867801a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 867801d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8678021:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8678024:	89 04 24             	mov    %eax,(%esp)
 8678027:	e8 b0 52 fc ff       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 867802c:	8b 10                	mov    (%eax),%edx
 867802e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8678031:	8d 8b 94 04 00 00    	lea    0x494(%ebx),%ecx
 8678037:	89 54 c8 08          	mov    %edx,0x8(%eax,%ecx,8)
 867803b:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 867803e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8678041:	89 44 24 04          	mov    %eax,0x4(%esp)
 8678045:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8678048:	89 04 24             	mov    %eax,(%esp)
 867804b:	e8 8c 52 fc ff       	call   863d2dc <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EEixEj>
 8678050:	8b 50 04             	mov    0x4(%eax),%edx
 8678053:	8b 45 0c             	mov    0xc(%ebp),%eax
 8678056:	8d 8b 94 04 00 00    	lea    0x494(%ebx),%ecx
 867805c:	89 54 c8 0c          	mov    %edx,0xc(%eax,%ecx,8)
 8678060:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8678064:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8678068:	8b 45 ec             	mov    -0x14(%ebp),%eax
 867806b:	89 04 24             	mov    %eax,(%esp)
 867806e:	e8 4d 52 fc ff       	call   863d2c0 <_ZNKSt6vectorI18ContinuousItemInfoSaIS0_EE4sizeEv>
 8678073:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8678076:	0f 97 c0             	seta   %al
 8678079:	84 c0                	test   %al,%al
 867807b:	75 9a                	jne    8678017 <_ZNK15CUserCharacInfo21GetContinuousItemInfoEP12SIG_LOAD_ETC+0xf3>
 867807d:	83 c4 34             	add    $0x34,%esp
 8678080:	5b                   	pop    %ebx
 8678081:	5d                   	pop    %ebp
 8678082:	c3                   	ret
 8678083:	90                   	nop

```

```c
// CUserCharacInfo::GetContinuousItemInfo @ 0x8677f24

/* CUserCharacInfo::GetContinuousItemInfo(SIG_LOAD_ETC*) const */

void __thiscall CUserCharacInfo::GetContinuousItemInfo(CUserCharacInfo *this,SIG_LOAD_ETC *param_1)

{
  SIG_LOAD_ETC SVar1;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *pvVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_1c;
  uint local_14;
  uint local_10;
  
  *(undefined4 *)(param_1 + 0x2308) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x24a0) = *(undefined4 *)(param_1 + 4);
  pvVar2 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
           GetCurCharacCoolTimeItemListR(this);
  SVar1 = (SIG_LOAD_ETC)
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
  param_1[0x230c] = SVar1;
  local_1c = 0;
  local_14 = 0;
  while( true ) {
    uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
    if (uVar3 <= local_14) break;
    puVar4 = (undefined4 *)
             std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                       (pvVar2,local_14);
    *(undefined4 *)(param_1 + (local_1c + 0x460) * 8 + 0x10) = *puVar4;
    iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                      (pvVar2,local_14);
    *(undefined4 *)(param_1 + (local_1c + 0x460) * 8 + 0x14) = *(undefined4 *)(iVar5 + 4);
    local_1c = local_1c + 1;
    local_14 = local_14 + 1;
  }
  local_1c = 0;
  pvVar2 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
           GetCurCharacEffectItemListR(this);
  SVar1 = (SIG_LOAD_ETC)
          std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
  param_1[0x24a4] = SVar1;
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(pvVar2);
    if (uVar3 <= local_10) break;
    puVar4 = (undefined4 *)
             std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                       (pvVar2,local_10);
    *(undefined4 *)(param_1 + (local_1c + 0x494) * 8 + 8) = *puVar4;
    iVar5 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                      (pvVar2,local_10);
    *(undefined4 *)(param_1 + (local_1c + 0x494) * 8 + 0xc) = *(undefined4 *)(iVar5 + 4);
    local_1c = local_1c + 1;
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## GetCurCharacAssaultMoney

```asm
// === 0868ef20 CUserCharacInfo::GetCurCharacAssaultMoney  [0x0868ef20-0x868ef41] ===
 868ef20:	55                   	push   %ebp
 868ef21:	89 e5                	mov    %esp,%ebp
 868ef23:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef26:	8b 40 10             	mov    0x10(%eax),%eax
 868ef29:	85 c0                	test   %eax,%eax
 868ef2b:	74 0e                	je     868ef3b <_ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv+0x1b>
 868ef2d:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef30:	8b 40 10             	mov    0x10(%eax),%eax
 868ef33:	8b 80 b1 12 00 00    	mov    0x12b1(%eax),%eax
 868ef39:	eb 05                	jmp    868ef40 <_ZN15CUserCharacInfo24GetCurCharacAssaultMoneyEv+0x20>
 868ef3b:	b8 00 00 00 00       	mov    $0x0,%eax
 868ef40:	5d                   	pop    %ebp
 868ef41:	c3                   	ret

```

```c
// CUserCharacInfo::GetCurCharacAssaultMoney @ 0x868ef20

/* CUserCharacInfo::GetCurCharacAssaultMoney() */

undefined4 __thiscall CUserCharacInfo::GetCurCharacAssaultMoney(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12b1);
  }
  return uVar1;
}

```

---

## GetCurCharacAssaultedUserId

```asm
// === 0868ef60 CUserCharacInfo::GetCurCharacAssaultedUserId  [0x0868ef60-0x868ef83] ===
 868ef60:	55                   	push   %ebp
 868ef61:	89 e5                	mov    %esp,%ebp
 868ef63:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef66:	8b 40 10             	mov    0x10(%eax),%eax
 868ef69:	85 c0                	test   %eax,%eax
 868ef6b:	74 0f                	je     868ef7c <_ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv+0x1c>
 868ef6d:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef70:	8b 40 10             	mov    0x10(%eax),%eax
 868ef73:	0f b7 80 b5 12 00 00 	movzwl 0x12b5(%eax),%eax
 868ef7a:	eb 05                	jmp    868ef81 <_ZN15CUserCharacInfo27GetCurCharacAssaultedUserIdEv+0x21>
 868ef7c:	b8 00 00 00 00       	mov    $0x0,%eax
 868ef81:	5d                   	pop    %ebp
 868ef82:	c3                   	ret
 868ef83:	90                   	nop

```

```c
// CUserCharacInfo::GetCurCharacAssaultedUserId @ 0x868ef60

/* CUserCharacInfo::GetCurCharacAssaultedUserId() */

undefined2 __thiscall CUserCharacInfo::GetCurCharacAssaultedUserId(CUserCharacInfo *this)

{
  undefined2 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(*(int *)(this + 0x10) + 0x12b5);
  }
  return uVar1;
}

```

---

## GetCurCharacChaosResponTime

```asm
// === 0868eed2 CUserCharacInfo::GetCurCharacChaosResponTime  [0x0868eed2-0x868eef3] ===
 868eed2:	55                   	push   %ebp
 868eed3:	89 e5                	mov    %esp,%ebp
 868eed5:	8b 45 08             	mov    0x8(%ebp),%eax
 868eed8:	8b 40 10             	mov    0x10(%eax),%eax
 868eedb:	85 c0                	test   %eax,%eax
 868eedd:	74 0e                	je     868eeed <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv+0x1b>
 868eedf:	8b 45 08             	mov    0x8(%ebp),%eax
 868eee2:	8b 40 10             	mov    0x10(%eax),%eax
 868eee5:	8b 80 ad 12 00 00    	mov    0x12ad(%eax),%eax
 868eeeb:	eb 05                	jmp    868eef2 <_ZN15CUserCharacInfo27GetCurCharacChaosResponTimeEv+0x20>
 868eeed:	b8 00 00 00 00       	mov    $0x0,%eax
 868eef2:	5d                   	pop    %ebp
 868eef3:	c3                   	ret

```

```c
// CUserCharacInfo::GetCurCharacChaosResponTime @ 0x868eed2

/* CUserCharacInfo::GetCurCharacChaosResponTime() */

undefined4 __thiscall CUserCharacInfo::GetCurCharacChaosResponTime(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12ad);
  }
  return uVar1;
}

```

---

## GetCurCharacMaxEquipLevel

```asm
// === 086467a0 CUserCharacInfo::GetCurCharacMaxEquipLevel  [0x086467a0-0x86467c1] ===
 86467a0:	55                   	push   %ebp
 86467a1:	89 e5                	mov    %esp,%ebp
 86467a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86467a6:	8b 40 10             	mov    0x10(%eax),%eax
 86467a9:	85 c0                	test   %eax,%eax
 86467ab:	74 0e                	je     86467bb <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv+0x1b>
 86467ad:	8b 45 08             	mov    0x8(%ebp),%eax
 86467b0:	8b 40 10             	mov    0x10(%eax),%eax
 86467b3:	8b 80 c2 14 00 00    	mov    0x14c2(%eax),%eax
 86467b9:	eb 05                	jmp    86467c0 <_ZNK15CUserCharacInfo25GetCurCharacMaxEquipLevelEv+0x20>
 86467bb:	b8 00 00 00 00       	mov    $0x0,%eax
 86467c0:	5d                   	pop    %ebp
 86467c1:	c3                   	ret

```

```c
// CUserCharacInfo::GetCurCharacMaxEquipLevel @ 0x86467a0

/* CUserCharacInfo::GetCurCharacMaxEquipLevel() const */

undefined4 __thiscall CUserCharacInfo::GetCurCharacMaxEquipLevel(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x14c2);
  }
  return uVar1;
}

```

---

## GetCurCharacOnlinePreliminaryTeamId

```asm
// === 08645de2 CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId  [0x08645de2-0x8645e1f] ===
 8645de2:	55                   	push   %ebp
 8645de3:	89 e5                	mov    %esp,%ebp
 8645de5:	83 ec 18             	sub    $0x18,%esp
 8645de8:	8b 45 08             	mov    0x8(%ebp),%eax
 8645deb:	8b 40 10             	mov    0x10(%eax),%eax
 8645dee:	85 c0                	test   %eax,%eax
 8645df0:	74 26                	je     8645e18 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv+0x36>
 8645df2:	8b 45 08             	mov    0x8(%ebp),%eax
 8645df5:	8b 40 10             	mov    0x10(%eax),%eax
 8645df8:	8b 80 89 0e 00 00    	mov    0xe89(%eax),%eax
 8645dfe:	85 c0                	test   %eax,%eax
 8645e00:	74 16                	je     8645e18 <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv+0x36>
 8645e02:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e05:	8b 40 10             	mov    0x10(%eax),%eax
 8645e08:	8b 80 89 0e 00 00    	mov    0xe89(%eax),%eax
 8645e0e:	89 04 24             	mov    %eax,(%esp)
 8645e11:	e8 7c 1a 05 00       	call   8697892 <_ZNK18online_preliminary22COnlinePreliminaryTeam9GetTeamIdEv>
 8645e16:	eb 05                	jmp    8645e1d <_ZNK15CUserCharacInfo35GetCurCharacOnlinePreliminaryTeamIdEv+0x3b>
 8645e18:	b8 00 00 00 00       	mov    $0x0,%eax
 8645e1d:	c9                   	leave
 8645e1e:	c3                   	ret
 8645e1f:	90                   	nop

```

```c
// CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId @ 0x8645de2

/* CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId() const */

undefined4 __thiscall CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamId(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || (*(int *)(*(int *)(this + 0x10) + 0xe89) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = online_preliminary::COnlinePreliminaryTeam::GetTeamId
                      (*(COnlinePreliminaryTeam **)(*(int *)(this + 0x10) + 0xe89));
  }
  return uVar1;
}

```

---

## GetCurCharacOnlinePreliminaryTeamName

```asm
// === 08645e20 CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName  [0x08645e20-0x8645e5d] ===
 8645e20:	55                   	push   %ebp
 8645e21:	89 e5                	mov    %esp,%ebp
 8645e23:	83 ec 18             	sub    $0x18,%esp
 8645e26:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e29:	8b 40 10             	mov    0x10(%eax),%eax
 8645e2c:	85 c0                	test   %eax,%eax
 8645e2e:	74 26                	je     8645e56 <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv+0x36>
 8645e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e33:	8b 40 10             	mov    0x10(%eax),%eax
 8645e36:	8b 80 89 0e 00 00    	mov    0xe89(%eax),%eax
 8645e3c:	85 c0                	test   %eax,%eax
 8645e3e:	74 16                	je     8645e56 <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv+0x36>
 8645e40:	8b 45 08             	mov    0x8(%ebp),%eax
 8645e43:	8b 40 10             	mov    0x10(%eax),%eax
 8645e46:	8b 80 89 0e 00 00    	mov    0xe89(%eax),%eax
 8645e4c:	89 04 24             	mov    %eax,(%esp)
 8645e4f:	e8 4a 1a 05 00       	call   869789e <_ZNK18online_preliminary22COnlinePreliminaryTeam11GetTeamNameEv>
 8645e54:	eb 05                	jmp    8645e5b <_ZNK15CUserCharacInfo37GetCurCharacOnlinePreliminaryTeamNameEv+0x3b>
 8645e56:	b8 41 df ce 08       	mov    $0x8cedf41,%eax
 8645e5b:	c9                   	leave
 8645e5c:	c3                   	ret
 8645e5d:	90                   	nop

```

```c
// CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName @ 0x8645e20

/* CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName() const */

undefined * __thiscall CUserCharacInfo::GetCurCharacOnlinePreliminaryTeamName(CUserCharacInfo *this)

{
  undefined *puVar1;
  
  if ((*(int *)(this + 0x10) == 0) || (*(int *)(*(int *)(this + 0x10) + 0xe89) == 0)) {
    puVar1 = &DAT_08cedf41;
  }
  else {
    puVar1 = (undefined *)
             online_preliminary::COnlinePreliminaryTeam::GetTeamName
                       (*(COnlinePreliminaryTeam **)(*(int *)(this + 0x10) + 0xe89));
  }
  return puVar1;
}

```

---

## GetFinishPoint

```asm
// === 08645764 CUserCharacInfo::GetFinishPoint  [0x08645764-0x86457bf] ===
 8645764:	55                   	push   %ebp
 8645765:	89 e5                	mov    %esp,%ebp
 8645767:	83 ec 28             	sub    $0x28,%esp
 864576a:	8b 45 08             	mov    0x8(%ebp),%eax
 864576d:	8b 40 10             	mov    0x10(%eax),%eax
 8645770:	85 c0                	test   %eax,%eax
 8645772:	74 0e                	je     8645782 <_ZN15CUserCharacInfo14GetFinishPointEv+0x1e>
 8645774:	8b 45 08             	mov    0x8(%ebp),%eax
 8645777:	8b 40 10             	mov    0x10(%eax),%eax
 864577a:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 8645780:	eb 3b                	jmp    86457bd <_ZN15CUserCharacInfo14GetFinishPointEv+0x59>
 8645782:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8645789:	00 
 864578a:	c7 44 24 08 44 02 00 	movl   $0x244,0x8(%esp)
 8645791:	00 
 8645792:	c7 44 24 04 a0 38 cf 	movl   $0x8cf38a0,0x4(%esp)
 8645799:	08 
 864579a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 864579d:	89 04 24             	mov    %eax,(%esp)
 86457a0:	e8 73 9f f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86457a5:	c7 44 24 04 10 e0 ce 	movl   $0x8cee010,0x4(%esp)
 86457ac:	08 
 86457ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86457b0:	89 04 24             	mov    %eax,(%esp)
 86457b3:	e8 d0 9f f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86457b8:	b8 00 00 00 00       	mov    $0x0,%eax
 86457bd:	c9                   	leave
 86457be:	c3                   	ret
 86457bf:	90                   	nop

```

```c
// CUserCharacInfo::GetFinishPoint @ 0x8645764

/* CUserCharacInfo::GetFinishPoint() */

undefined4 __thiscall CUserCharacInfo::GetFinishPoint(CUserCharacInfo *this)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"int CUserCharacInfo::GetFinishPoint()",0x244,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::GetFinishPoint() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe06);
  }
  return uVar1;
}

```

---

## GetFinishPointTotal

```asm
// === 086458ce CUserCharacInfo::GetFinishPointTotal  [0x086458ce-0x8645929] ===
 86458ce:	55                   	push   %ebp
 86458cf:	89 e5                	mov    %esp,%ebp
 86458d1:	83 ec 28             	sub    $0x28,%esp
 86458d4:	8b 45 08             	mov    0x8(%ebp),%eax
 86458d7:	8b 40 10             	mov    0x10(%eax),%eax
 86458da:	85 c0                	test   %eax,%eax
 86458dc:	75 3d                	jne    864591b <_ZN15CUserCharacInfo19GetFinishPointTotalEv+0x4d>
 86458de:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86458e5:	00 
 86458e6:	c7 44 24 08 6a 02 00 	movl   $0x26a,0x8(%esp)
 86458ed:	00 
 86458ee:	c7 44 24 04 e0 37 cf 	movl   $0x8cf37e0,0x4(%esp)
 86458f5:	08 
 86458f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86458f9:	89 04 24             	mov    %eax,(%esp)
 86458fc:	e8 17 9e f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8645901:	c7 44 24 04 d8 e0 ce 	movl   $0x8cee0d8,0x4(%esp)
 8645908:	08 
 8645909:	8d 45 e8             	lea    -0x18(%ebp),%eax
 864590c:	89 04 24             	mov    %eax,(%esp)
 864590f:	e8 74 9e f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645914:	b8 00 00 00 00       	mov    $0x0,%eax
 8645919:	eb 0c                	jmp    8645927 <_ZN15CUserCharacInfo19GetFinishPointTotalEv+0x59>
 864591b:	8b 45 08             	mov    0x8(%ebp),%eax
 864591e:	8b 40 10             	mov    0x10(%eax),%eax
 8645921:	8b 80 0a 0e 00 00    	mov    0xe0a(%eax),%eax
 8645927:	c9                   	leave
 8645928:	c3                   	ret
 8645929:	90                   	nop

```

```c
// CUserCharacInfo::GetFinishPointTotal @ 0x86458ce

/* CUserCharacInfo::GetFinishPointTotal() */

undefined4 __thiscall CUserCharacInfo::GetFinishPointTotal(CUserCharacInfo *this)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"int CUserCharacInfo::GetFinishPointTotal()",0x26a,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::GetFinishPointTotal() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a);
  }
  return uVar1;
}

```

---

## GetWarAreaKillCount

```asm
// === 08645866 CUserCharacInfo::GetWarAreaKillCount  [0x08645866-0x86458cd] ===
 8645866:	55                   	push   %ebp
 8645867:	89 e5                	mov    %esp,%ebp
 8645869:	83 ec 38             	sub    $0x38,%esp
 864586c:	8b 45 08             	mov    0x8(%ebp),%eax
 864586f:	8b 40 10             	mov    0x10(%eax),%eax
 8645872:	85 c0                	test   %eax,%eax
 8645874:	75 3d                	jne    86458b3 <_ZN15CUserCharacInfo19GetWarAreaKillCountEi+0x4d>
 8645876:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 864587d:	00 
 864587e:	c7 44 24 08 60 02 00 	movl   $0x260,0x8(%esp)
 8645885:	00 
 8645886:	c7 44 24 04 20 38 cf 	movl   $0x8cf3820,0x4(%esp)
 864588d:	08 
 864588e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8645891:	89 04 24             	mov    %eax,(%esp)
 8645894:	e8 7f 9e f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8645899:	c7 44 24 04 94 e0 ce 	movl   $0x8cee094,0x4(%esp)
 86458a0:	08 
 86458a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86458a4:	89 04 24             	mov    %eax,(%esp)
 86458a7:	e8 dc 9e f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86458ac:	b8 00 00 00 00       	mov    $0x0,%eax
 86458b1:	eb 13                	jmp    86458c6 <_ZN15CUserCharacInfo19GetWarAreaKillCountEi+0x60>
 86458b3:	8b 45 08             	mov    0x8(%ebp),%eax
 86458b6:	8b 40 10             	mov    0x10(%eax),%eax
 86458b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86458bc:	81 c2 80 03 00 00    	add    $0x380,%edx
 86458c2:	8b 44 90 0e          	mov    0xe(%eax,%edx,4),%eax
 86458c6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86458c9:	d9 45 e4             	flds   -0x1c(%ebp)
 86458cc:	c9                   	leave
 86458cd:	c3                   	ret

```

```c
// CUserCharacInfo::GetWarAreaKillCount @ 0x8645866

/* CUserCharacInfo::GetWarAreaKillCount(int) */

longdouble __thiscall CUserCharacInfo::GetWarAreaKillCount(CUserCharacInfo *this,int param_1)

{
  float fVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"float CUserCharacInfo::GetWarAreaKillCount(int)",0x260,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::GetWarAreaKillCount() : m_selected is NULL");
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4);
  }
  return (longdouble)fVar1;
}

```

---

## GetWarAreaKillCountTotal

```asm
// === 086456d0 CUserCharacInfo::GetWarAreaKillCountTotal  [0x086456d0-0x8645763] ===
 86456d0:	55                   	push   %ebp
 86456d1:	89 e5                	mov    %esp,%ebp
 86456d3:	83 ec 48             	sub    $0x48,%esp
 86456d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86456d9:	8b 40 10             	mov    0x10(%eax),%eax
 86456dc:	85 c0                	test   %eax,%eax
 86456de:	75 3d                	jne    864571d <_ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv+0x4d>
 86456e0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86456e7:	00 
 86456e8:	c7 44 24 08 2f 02 00 	movl   $0x22f,0x8(%esp)
 86456ef:	00 
 86456f0:	c7 44 24 04 e0 38 cf 	movl   $0x8cf38e0,0x4(%esp)
 86456f7:	08 
 86456f8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86456fb:	89 04 24             	mov    %eax,(%esp)
 86456fe:	e8 15 a0 f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8645703:	c7 44 24 04 c4 df ce 	movl   $0x8cedfc4,0x4(%esp)
 864570a:	08 
 864570b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 864570e:	89 04 24             	mov    %eax,(%esp)
 8645711:	e8 72 a0 f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645716:	b8 00 00 00 00       	mov    $0x0,%eax
 864571b:	eb 3e                	jmp    864575b <_ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv+0x8b>
 864571d:	b8 00 00 00 00       	mov    $0x0,%eax
 8645722:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8645725:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 864572c:	eb 1f                	jmp    864574d <_ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv+0x7d>
 864572e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645731:	8b 40 10             	mov    0x10(%eax),%eax
 8645734:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8645737:	81 c2 80 03 00 00    	add    $0x380,%edx
 864573d:	d9 44 90 0e          	flds   0xe(%eax,%edx,4)
 8645741:	d9 45 f0             	flds   -0x10(%ebp)
 8645744:	de c1                	faddp  %st,%st(1)
 8645746:	d9 5d f0             	fstps  -0x10(%ebp)
 8645749:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 864574d:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8645751:	0f 9e c0             	setle  %al
 8645754:	84 c0                	test   %al,%al
 8645756:	75 d6                	jne    864572e <_ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv+0x5e>
 8645758:	8b 45 f0             	mov    -0x10(%ebp),%eax
 864575b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 864575e:	d9 45 d4             	flds   -0x2c(%ebp)
 8645761:	c9                   	leave
 8645762:	c3                   	ret
 8645763:	90                   	nop

```

```c
// CUserCharacInfo::GetWarAreaKillCountTotal @ 0x86456d0

/* CUserCharacInfo::GetWarAreaKillCountTotal() */

longdouble __thiscall CUserCharacInfo::GetWarAreaKillCountTotal(CUserCharacInfo *this)

{
  cMyTrace local_24 [16];
  float local_14;
  int local_10;
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_24,"float CUserCharacInfo::GetWarAreaKillCountTotal()",0x22f,5);
    cMyTrace::operator()
              (local_24,"WARAREA CUserCharacInfo::GetWarAreaKillCountTotal() : m_selected is NULL");
    local_14 = 0.0;
  }
  else {
    local_14 = 0.0;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      local_14 = local_14 + *(float *)(*(int *)(this + 0x10) + 0xe + (local_10 + 0x380) * 4);
    }
  }
  return (longdouble)local_14;
}

```

---

## GmSetCurCharacChaosPoint

```asm
// === 08646010 CUserCharacInfo::GmSetCurCharacChaosPoint  [0x08646010-0x864607d] ===
 8646010:	55                   	push   %ebp
 8646011:	89 e5                	mov    %esp,%ebp
 8646013:	83 ec 18             	sub    $0x18,%esp
 8646016:	8b 45 08             	mov    0x8(%ebp),%eax
 8646019:	8b 40 10             	mov    0x10(%eax),%eax
 864601c:	85 c0                	test   %eax,%eax
 864601e:	74 5b                	je     864607b <_ZN15CUserCharacInfo24GmSetCurCharacChaosPointEi+0x6b>
 8646020:	8b 45 08             	mov    0x8(%ebp),%eax
 8646023:	89 04 24             	mov    %eax,(%esp)
 8646026:	e8 45 48 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 864602b:	8b 45 08             	mov    0x8(%ebp),%eax
 864602e:	8b 40 10             	mov    0x10(%eax),%eax
 8646031:	8b 55 0c             	mov    0xc(%ebp),%edx
 8646034:	89 90 49 0e 00 00    	mov    %edx,0xe49(%eax)
 864603a:	8b 45 08             	mov    0x8(%ebp),%eax
 864603d:	8b 40 10             	mov    0x10(%eax),%eax
 8646040:	8b 80 49 0e 00 00    	mov    0xe49(%eax),%eax
 8646046:	85 c0                	test   %eax,%eax
 8646048:	79 10                	jns    864605a <_ZN15CUserCharacInfo24GmSetCurCharacChaosPointEi+0x4a>
 864604a:	8b 45 08             	mov    0x8(%ebp),%eax
 864604d:	8b 40 10             	mov    0x10(%eax),%eax
 8646050:	c7 80 49 0e 00 00 00 	movl   $0x0,0xe49(%eax)
 8646057:	00 00 00 
 864605a:	8b 45 08             	mov    0x8(%ebp),%eax
 864605d:	8b 40 10             	mov    0x10(%eax),%eax
 8646060:	8b 80 49 0e 00 00    	mov    0xe49(%eax),%eax
 8646066:	83 f8 64             	cmp    $0x64,%eax
 8646069:	7e 10                	jle    864607b <_ZN15CUserCharacInfo24GmSetCurCharacChaosPointEi+0x6b>
 864606b:	8b 45 08             	mov    0x8(%ebp),%eax
 864606e:	8b 40 10             	mov    0x10(%eax),%eax
 8646071:	c7 80 49 0e 00 00 64 	movl   $0x64,0xe49(%eax)
 8646078:	00 00 00 
 864607b:	c9                   	leave
 864607c:	c3                   	ret
 864607d:	90                   	nop

```

```c
// CUserCharacInfo::GmSetCurCharacChaosPoint @ 0x8646010

/* CUserCharacInfo::GmSetCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::GmSetCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
    }
    if (100 < *(int *)(*(int *)(this + 0x10) + 0xe49)) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 100;
    }
  }
  return;
}

```

---

## IncFatigueBatteryCharging

```asm
// === 086566e4 CUserCharacInfo::IncFatigueBatteryCharging  [0x086566e4-0x8656783] ===
 86566e4:	55                   	push   %ebp
 86566e5:	89 e5                	mov    %esp,%ebp
 86566e7:	83 ec 38             	sub    $0x38,%esp
 86566ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86566ed:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 86566f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86566f4:	8b 40 10             	mov    0x10(%eax),%eax
 86566f7:	85 c0                	test   %eax,%eax
 86566f9:	0f 84 83 00 00 00    	je     8656782 <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs+0x9e>
 86566ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8656702:	89 04 24             	mov    %eax,(%esp)
 8656705:	e8 66 41 b4 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 865670a:	e8 8c 5a a7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 865670f:	83 c0 68             	add    $0x68,%eax
 8656712:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8656715:	8b 45 08             	mov    0x8(%ebp),%eax
 8656718:	8b 40 10             	mov    0x10(%eax),%eax
 865671b:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 865671f:	66 89 45 f6          	mov    %ax,-0xa(%ebp)
 8656723:	8b 45 08             	mov    0x8(%ebp),%eax
 8656726:	8b 40 10             	mov    0x10(%eax),%eax
 8656729:	8b 55 08             	mov    0x8(%ebp),%edx
 865672c:	8b 52 10             	mov    0x10(%edx),%edx
 865672f:	0f b7 52 4f          	movzwl 0x4f(%edx),%edx
 8656733:	89 d1                	mov    %edx,%ecx
 8656735:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 8656739:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 865673c:	66 89 50 4f          	mov    %dx,0x4f(%eax)
 8656740:	8b 45 08             	mov    0x8(%ebp),%eax
 8656743:	8b 40 10             	mov    0x10(%eax),%eax
 8656746:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 865674a:	66 3b 45 f6          	cmp    -0xa(%ebp),%ax
 865674e:	7c 1e                	jl     865676e <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs+0x8a>
 8656750:	8b 45 08             	mov    0x8(%ebp),%eax
 8656753:	8b 40 10             	mov    0x10(%eax),%eax
 8656756:	0f b7 40 4f          	movzwl 0x4f(%eax),%eax
 865675a:	0f bf d0             	movswl %ax,%edx
 865675d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8656760:	0f b7 80 c0 05 00 00 	movzwl 0x5c0(%eax),%eax
 8656767:	0f b7 c0             	movzwl %ax,%eax
 865676a:	39 c2                	cmp    %eax,%edx
 865676c:	7e 14                	jle    8656782 <_ZN15CUserCharacInfo25IncFatigueBatteryChargingEs+0x9e>
 865676e:	8b 45 08             	mov    0x8(%ebp),%eax
 8656771:	8b 40 10             	mov    0x10(%eax),%eax
 8656774:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8656777:	0f b7 92 c0 05 00 00 	movzwl 0x5c0(%edx),%edx
 865677e:	66 89 50 4f          	mov    %dx,0x4f(%eax)
 8656782:	c9                   	leave
 8656783:	c3                   	ret

```

```c
// CUserCharacInfo::IncFatigueBatteryCharging @ 0x86566e4

/* CUserCharacInfo::IncFatigueBatteryCharging(short) */

void __thiscall CUserCharacInfo::IncFatigueBatteryCharging(CUserCharacInfo *this,short param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    iVar2 = G_CDataManager();
    sVar1 = *(short *)(*(int *)(this + 0x10) + 0x4f);
    *(short *)(*(int *)(this + 0x10) + 0x4f) = *(short *)(*(int *)(this + 0x10) + 0x4f) + param_1;
    if ((*(short *)(*(int *)(this + 0x10) + 0x4f) < sVar1) ||
       ((int)(uint)*(ushort *)(iVar2 + 0x628) < (int)*(short *)(*(int *)(this + 0x10) + 0x4f))) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x4f) = *(undefined2 *)(iVar2 + 0x628);
    }
  }
  return;
}

```

---

## IncreasePowerWarPoint

```asm
// === 08687efc CUserCharacInfo::IncreasePowerWarPoint  [0x08687efc-0x8687f65] ===
 8687efc:	55                   	push   %ebp
 8687efd:	89 e5                	mov    %esp,%ebp
 8687eff:	83 ec 28             	sub    $0x28,%esp
 8687f02:	8b 45 0c             	mov    0xc(%ebp),%eax
 8687f05:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8687f09:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f0c:	8b 40 10             	mov    0x10(%eax),%eax
 8687f0f:	85 c0                	test   %eax,%eax
 8687f11:	74 50                	je     8687f63 <_ZN15CUserCharacInfo21IncreasePowerWarPointEs+0x67>
 8687f13:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f16:	89 04 24             	mov    %eax,(%esp)
 8687f19:	e8 52 29 b1 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8687f1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f21:	8b 40 10             	mov    0x10(%eax),%eax
 8687f24:	8b 55 08             	mov    0x8(%ebp),%edx
 8687f27:	8b 52 10             	mov    0x10(%edx),%edx
 8687f2a:	0f b7 92 1f 12 00 00 	movzwl 0x121f(%edx),%edx
 8687f31:	89 d1                	mov    %edx,%ecx
 8687f33:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8687f37:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8687f3a:	66 89 90 1f 12 00 00 	mov    %dx,0x121f(%eax)
 8687f41:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f44:	8b 40 10             	mov    0x10(%eax),%eax
 8687f47:	0f b7 80 1f 12 00 00 	movzwl 0x121f(%eax),%eax
 8687f4e:	66 3d 0f 27          	cmp    $0x270f,%ax
 8687f52:	7e 0f                	jle    8687f63 <_ZN15CUserCharacInfo21IncreasePowerWarPointEs+0x67>
 8687f54:	8b 45 08             	mov    0x8(%ebp),%eax
 8687f57:	8b 40 10             	mov    0x10(%eax),%eax
 8687f5a:	66 c7 80 1f 12 00 00 	movw   $0x270f,0x121f(%eax)
 8687f61:	0f 27 
 8687f63:	c9                   	leave
 8687f64:	c3                   	ret
 8687f65:	90                   	nop

```

```c
// CUserCharacInfo::IncreasePowerWarPoint @ 0x8687efc

/* CUserCharacInfo::IncreasePowerWarPoint(short) */

void __thiscall CUserCharacInfo::IncreasePowerWarPoint(CUserCharacInfo *this,short param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(short *)(*(int *)(this + 0x10) + 0x121f) =
         *(short *)(*(int *)(this + 0x10) + 0x121f) + param_1;
    if (9999 < *(short *)(*(int *)(this + 0x10) + 0x121f)) {
      *(undefined2 *)(*(int *)(this + 0x10) + 0x121f) = 9999;
    }
  }
  return;
}

```

---

## InitFinishPoint

```asm
// === 0864592a CUserCharacInfo::InitFinishPoint  [0x0864592a-0x86459c3] ===
 864592a:	55                   	push   %ebp
 864592b:	89 e5                	mov    %esp,%ebp
 864592d:	83 ec 28             	sub    $0x28,%esp
 8645930:	8b 45 08             	mov    0x8(%ebp),%eax
 8645933:	8b 40 10             	mov    0x10(%eax),%eax
 8645936:	85 c0                	test   %eax,%eax
 8645938:	0f 84 84 00 00 00    	je     86459c2 <_ZN15CUserCharacInfo15InitFinishPointEv+0x98>
 864593e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645941:	8b 40 10             	mov    0x10(%eax),%eax
 8645944:	c7 80 06 0e 00 00 00 	movl   $0x0,0xe06(%eax)
 864594b:	00 00 00 
 864594e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645951:	8b 40 10             	mov    0x10(%eax),%eax
 8645954:	c7 80 0a 0e 00 00 00 	movl   $0x0,0xe0a(%eax)
 864595b:	00 00 00 
 864595e:	8b 45 08             	mov    0x8(%ebp),%eax
 8645961:	8b 40 10             	mov    0x10(%eax),%eax
 8645964:	05 0e 0e 00 00       	add    $0xe0e,%eax
 8645969:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8645970:	00 
 8645971:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8645978:	00 
 8645979:	89 04 24             	mov    %eax,(%esp)
 864597c:	e8 3f 83 a3 ff       	call   807dcc0 <memset@plt>
 8645981:	8b 45 08             	mov    0x8(%ebp),%eax
 8645984:	8b 40 10             	mov    0x10(%eax),%eax
 8645987:	8b 90 0a 0e 00 00    	mov    0xe0a(%eax),%edx
 864598d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645990:	8b 40 10             	mov    0x10(%eax),%eax
 8645993:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 8645999:	8b 4d 08             	mov    0x8(%ebp),%ecx
 864599c:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 86459a2:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 86459a9:	00 
 86459aa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86459ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 86459b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86459b9:	00 
 86459ba:	89 0c 24             	mov    %ecx,(%esp)
 86459bd:	e8 d4 f1 03 00       	call   8684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>
 86459c2:	c9                   	leave
 86459c3:	c3                   	ret

```

```c
// CUserCharacInfo::InitFinishPoint @ 0x864592a

/* CUserCharacInfo::InitFinishPoint() */

void __thiscall CUserCharacInfo::InitFinishPoint(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe06) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a) = 0;
    memset((void *)(*(int *)(this + 0x10) + 0xe0e),0,0x14);
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),0,*(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),1);
  }
  return;
}

```

---

## IsAvailableCurCharacTradeGoldDaily

```asm
// === 08646496 CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily  [0x08646496-0x8646589] ===
 8646496:	55                   	push   %ebp
 8646497:	89 e5                	mov    %esp,%ebp
 8646499:	57                   	push   %edi
 864649a:	56                   	push   %esi
 864649b:	53                   	push   %ebx
 864649c:	83 ec 4c             	sub    $0x4c,%esp
 864649f:	8b 45 08             	mov    0x8(%ebp),%eax
 86464a2:	8b 40 10             	mov    0x10(%eax),%eax
 86464a5:	85 c0                	test   %eax,%eax
 86464a7:	75 0a                	jne    86464b3 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj+0x1d>
 86464a9:	b8 00 00 00 00       	mov    $0x0,%eax
 86464ae:	e9 cf 00 00 00       	jmp    8646582 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj+0xec>
 86464b3:	8b 45 08             	mov    0x8(%ebp),%eax
 86464b6:	89 04 24             	mov    %eax,(%esp)
 86464b9:	e8 fa 3d a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86464be:	89 c3                	mov    %eax,%ebx
 86464c0:	8b 45 08             	mov    0x8(%ebp),%eax
 86464c3:	89 04 24             	mov    %eax,(%esp)
 86464c6:	e8 ed 3d a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86464cb:	0f af c3             	imul   %ebx,%eax
 86464ce:	69 c0 10 27 00 00    	imul   $0x2710,%eax,%eax
 86464d4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86464d7:	8b 45 08             	mov    0x8(%ebp),%eax
 86464da:	8b 40 10             	mov    0x10(%eax),%eax
 86464dd:	83 c0 65             	add    $0x65,%eax
 86464e0:	89 04 24             	mov    %eax,(%esp)
 86464e3:	e8 b4 f4 04 00       	call   869599c <_ZNK15CReliablePerson17GetTradeGoldDailyEv>
 86464e8:	03 45 0c             	add    0xc(%ebp),%eax
 86464eb:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86464ee:	0f 97 c0             	seta   %al
 86464f1:	84 c0                	test   %al,%al
 86464f3:	0f 84 84 00 00 00    	je     864657d <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj+0xe7>
 86464f9:	8b 45 08             	mov    0x8(%ebp),%eax
 86464fc:	8b 40 10             	mov    0x10(%eax),%eax
 86464ff:	83 c0 65             	add    $0x65,%eax
 8646502:	89 04 24             	mov    %eax,(%esp)
 8646505:	e8 92 f4 04 00       	call   869599c <_ZNK15CReliablePerson17GetTradeGoldDailyEv>
 864650a:	89 c7                	mov    %eax,%edi
 864650c:	8b 45 08             	mov    0x8(%ebp),%eax
 864650f:	89 04 24             	mov    %eax,(%esp)
 8646512:	e8 a1 3d a9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8646517:	89 c6                	mov    %eax,%esi
 8646519:	8b 45 08             	mov    0x8(%ebp),%eax
 864651c:	89 04 24             	mov    %eax,(%esp)
 864651f:	e8 04 ab ab ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8646524:	89 c3                	mov    %eax,%ebx
 8646526:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 864652d:	00 
 864652e:	c7 44 24 08 f1 03 00 	movl   $0x3f1,0x8(%esp)
 8646535:	00 
 8646536:	c7 44 24 04 c0 36 cf 	movl   $0x8cf36c0,0x4(%esp)
 864653d:	08 
 864653e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8646541:	89 04 24             	mov    %eax,(%esp)
 8646544:	e8 cf 91 f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8646549:	89 7c 24 18          	mov    %edi,0x18(%esp)
 864654d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8646550:	89 44 24 14          	mov    %eax,0x14(%esp)
 8646554:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8646557:	89 44 24 10          	mov    %eax,0x10(%esp)
 864655b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 864655f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8646563:	c7 44 24 04 e8 e1 ce 	movl   $0x8cee1e8,0x4(%esp)
 864656a:	08 
 864656b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864656e:	89 04 24             	mov    %eax,(%esp)
 8646571:	e8 12 92 f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8646576:	b8 00 00 00 00       	mov    $0x0,%eax
 864657b:	eb 05                	jmp    8646582 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj+0xec>
 864657d:	b8 01 00 00 00       	mov    $0x1,%eax
 8646582:	83 c4 4c             	add    $0x4c,%esp
 8646585:	5b                   	pop    %ebx
 8646586:	5e                   	pop    %esi
 8646587:	5f                   	pop    %edi
 8646588:	5d                   	pop    %ebp
 8646589:	c3                   	ret

```

```c
// CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily @ 0x8646496

/* CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int) */

undefined4 __thiscall
CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(CUserCharacInfo *this,uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  cMyTrace local_30 [16];
  uint local_20;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_charac_level(this);
    iVar3 = get_charac_level(this);
    local_20 = iVar3 * iVar2 * 10000;
    iVar2 = CReliablePerson::GetTradeGoldDaily((CReliablePerson *)(*(int *)(this + 0x10) + 0x65));
    if (local_20 < iVar2 + param_1) {
      uVar1 = CReliablePerson::GetTradeGoldDaily((CReliablePerson *)(*(int *)(this + 0x10) + 0x65));
      uVar4 = get_charac_level(this);
      uVar5 = getCurCharacName(this);
      cMyTrace::cMyTrace(local_30,
                         "bool CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily(unsigned int)",
                         0x3f1,0);
      cMyTrace::operator()
                (local_30,
                 "TRADE_RESTIRCTION charac_name(%s), charac_level(%d), limit_gold(%u), add_gold(%u), use_gold(%u)"
                 ,uVar5,uVar4,local_20,param_1,uVar1);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## IsBusyDisjointStore

```asm
// === 0864781e CUserCharacInfo::IsBusyDisjointStore  [0x0864781e-0x8647863] ===
 864781e:	55                   	push   %ebp
 864781f:	89 e5                	mov    %esp,%ebp
 8647821:	83 ec 18             	sub    $0x18,%esp
 8647824:	8b 45 08             	mov    0x8(%ebp),%eax
 8647827:	89 04 24             	mov    %eax,(%esp)
 864782a:	e8 a5 80 be ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 864782f:	85 c0                	test   %eax,%eax
 8647831:	0f 95 c0             	setne  %al
 8647834:	84 c0                	test   %al,%al
 8647836:	74 24                	je     864785c <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv+0x3e>
 8647838:	8b 45 08             	mov    0x8(%ebp),%eax
 864783b:	89 04 24             	mov    %eax,(%esp)
 864783e:	e8 91 80 be ff       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 8647843:	89 04 24             	mov    %eax,(%esp)
 8647846:	e8 4b cf be ff       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 864784b:	83 f8 03             	cmp    $0x3,%eax
 864784e:	0f 94 c0             	sete   %al
 8647851:	84 c0                	test   %al,%al
 8647853:	74 07                	je     864785c <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv+0x3e>
 8647855:	b8 01 00 00 00       	mov    $0x1,%eax
 864785a:	eb 05                	jmp    8647861 <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv+0x43>
 864785c:	b8 00 00 00 00       	mov    $0x0,%eax
 8647861:	c9                   	leave
 8647862:	c3                   	ret
 8647863:	90                   	nop

```

```c
// CUserCharacInfo::IsBusyDisjointStore @ 0x864781e

/* CUserCharacInfo::IsBusyDisjointStore() */

undefined4 __thiscall CUserCharacInfo::IsBusyDisjointStore(CUserCharacInfo *this)

{
  int iVar1;
  CExpertJob *this_00;
  
  iVar1 = GetCurCharacExpertJob(this);
  if (iVar1 != 0) {
    this_00 = (CExpertJob *)GetCurCharacExpertJob(this);
    iVar1 = expert_job::CExpertJob::GetType(this_00);
    if (iVar1 == 3) {
      return 1;
    }
  }
  return 0;
}

```

---

## IsCurCharacVisible

```asm
// === 0868bee4 CUserCharacInfo::IsCurCharacVisible  [0x0868bee4-0x868bf13] ===
 868bee4:	55                   	push   %ebp
 868bee5:	89 e5                	mov    %esp,%ebp
 868bee7:	8b 45 08             	mov    0x8(%ebp),%eax
 868beea:	8b 40 10             	mov    0x10(%eax),%eax
 868beed:	85 c0                	test   %eax,%eax
 868beef:	74 1b                	je     868bf0c <_ZN15CUserCharacInfo18IsCurCharacVisibleEv+0x28>
 868bef1:	8b 45 08             	mov    0x8(%ebp),%eax
 868bef4:	8b 40 10             	mov    0x10(%eax),%eax
 868bef7:	0f b6 80 40 0e 00 00 	movzbl 0xe40(%eax),%eax
 868befe:	83 e0 01             	and    $0x1,%eax
 868bf01:	84 c0                	test   %al,%al
 868bf03:	74 07                	je     868bf0c <_ZN15CUserCharacInfo18IsCurCharacVisibleEv+0x28>
 868bf05:	b8 01 00 00 00       	mov    $0x1,%eax
 868bf0a:	eb 05                	jmp    868bf11 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv+0x2d>
 868bf0c:	b8 00 00 00 00       	mov    $0x0,%eax
 868bf11:	5d                   	pop    %ebp
 868bf12:	c3                   	ret
 868bf13:	90                   	nop

```

```c
// CUserCharacInfo::IsCurCharacVisible @ 0x868bee4

/* CUserCharacInfo::IsCurCharacVisible() */

undefined4 __thiscall CUserCharacInfo::IsCurCharacVisible(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || ((*(byte *)(*(int *)(this + 0x10) + 0xe40) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## LiveCurCharac

```asm
// === 08646406 CUserCharacInfo::LiveCurCharac  [0x08646406-0x8646495] ===
 8646406:	55                   	push   %ebp
 8646407:	89 e5                	mov    %esp,%ebp
 8646409:	83 ec 18             	sub    $0x18,%esp
 864640c:	8b 45 08             	mov    0x8(%ebp),%eax
 864640f:	8b 40 10             	mov    0x10(%eax),%eax
 8646412:	85 c0                	test   %eax,%eax
 8646414:	74 7e                	je     8646494 <_ZN15CUserCharacInfo13LiveCurCharacEv+0x8e>
 8646416:	8b 45 08             	mov    0x8(%ebp),%eax
 8646419:	89 04 24             	mov    %eax,(%esp)
 864641c:	e8 4f 44 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8646421:	8b 45 08             	mov    0x8(%ebp),%eax
 8646424:	8b 40 10             	mov    0x10(%eax),%eax
 8646427:	c6 80 66 0e 00 00 00 	movb   $0x0,0xe66(%eax)
 864642e:	8b 45 08             	mov    0x8(%ebp),%eax
 8646431:	8b 40 10             	mov    0x10(%eax),%eax
 8646434:	c7 80 5d 0e 00 00 00 	movl   $0x0,0xe5d(%eax)
 864643b:	00 00 00 
 864643e:	8b 45 08             	mov    0x8(%ebp),%eax
 8646441:	8b 40 10             	mov    0x10(%eax),%eax
 8646444:	c7 80 61 0e 00 00 00 	movl   $0x0,0xe61(%eax)
 864644b:	00 00 00 
 864644e:	a1 50 be 40 09       	mov    0x940be50,%eax
 8646453:	89 04 24             	mov    %eax,(%esp)
 8646456:	e8 b5 94 e3 ff       	call   847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>
 864645b:	83 f0 01             	xor    $0x1,%eax
 864645e:	84 c0                	test   %al,%al
 8646460:	75 0f                	jne    8646471 <_ZN15CUserCharacInfo13LiveCurCharacEv+0x6b>
 8646462:	8b 45 08             	mov    0x8(%ebp),%eax
 8646465:	89 04 24             	mov    %eax,(%esp)
 8646468:	e8 f7 f0 ff ff       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 864646d:	3c 07                	cmp    $0x7,%al
 864646f:	74 07                	je     8646478 <_ZN15CUserCharacInfo13LiveCurCharacEv+0x72>
 8646471:	b8 01 00 00 00       	mov    $0x1,%eax
 8646476:	eb 05                	jmp    864647d <_ZN15CUserCharacInfo13LiveCurCharacEv+0x77>
 8646478:	b8 00 00 00 00       	mov    $0x0,%eax
 864647d:	84 c0                	test   %al,%al
 864647f:	74 13                	je     8646494 <_ZN15CUserCharacInfo13LiveCurCharacEv+0x8e>
 8646481:	8b 45 08             	mov    0x8(%ebp),%eax
 8646484:	8b 40 10             	mov    0x10(%eax),%eax
 8646487:	8b 55 08             	mov    0x8(%ebp),%edx
 864648a:	8b 52 10             	mov    0x10(%edx),%edx
 864648d:	0f b6 52 76          	movzbl 0x76(%edx),%edx
 8646491:	88 50 75             	mov    %dl,0x75(%eax)
 8646494:	c9                   	leave
 8646495:	c3                   	ret

```

```c
// CUserCharacInfo::LiveCurCharac @ 0x8646406

/* CUserCharacInfo::LiveCurCharac() */

void __thiscall CUserCharacInfo::LiveCurCharac(CUserCharacInfo *this)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined1 *)(*(int *)(this + 0x10) + 0xe66) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe5d) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xe61) = 0;
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') && (cVar2 = getCurCharacVill(this), cVar2 == '\a')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(*(int *)(this + 0x10) + 0x75) = *(undefined1 *)(*(int *)(this + 0x10) + 0x76);
    }
    return;
  }
  return;
}

```

---

## SetCurCharacAssaultMoney

```asm
// === 0868ef42 CUserCharacInfo::SetCurCharacAssaultMoney  [0x0868ef42-0x868ef5f] ===
 868ef42:	55                   	push   %ebp
 868ef43:	89 e5                	mov    %esp,%ebp
 868ef45:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef48:	8b 40 10             	mov    0x10(%eax),%eax
 868ef4b:	85 c0                	test   %eax,%eax
 868ef4d:	74 0f                	je     868ef5e <_ZN15CUserCharacInfo24SetCurCharacAssaultMoneyEi+0x1c>
 868ef4f:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef52:	8b 40 10             	mov    0x10(%eax),%eax
 868ef55:	8b 55 0c             	mov    0xc(%ebp),%edx
 868ef58:	89 90 b1 12 00 00    	mov    %edx,0x12b1(%eax)
 868ef5e:	5d                   	pop    %ebp
 868ef5f:	c3                   	ret

```

```c
// CUserCharacInfo::SetCurCharacAssaultMoney @ 0x868ef42

/* CUserCharacInfo::SetCurCharacAssaultMoney(int) */

void __thiscall CUserCharacInfo::SetCurCharacAssaultMoney(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x12b1) = param_1;
  }
  return;
}

```

---

## SetCurCharacAssaultedUserId

```asm
// === 0868ef84 CUserCharacInfo::SetCurCharacAssaultedUserId  [0x0868ef84-0x868efad] ===
 868ef84:	55                   	push   %ebp
 868ef85:	89 e5                	mov    %esp,%ebp
 868ef87:	83 ec 04             	sub    $0x4,%esp
 868ef8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 868ef8d:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 868ef91:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef94:	8b 40 10             	mov    0x10(%eax),%eax
 868ef97:	85 c0                	test   %eax,%eax
 868ef99:	74 11                	je     868efac <_ZN15CUserCharacInfo27SetCurCharacAssaultedUserIdEt+0x28>
 868ef9b:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef9e:	8b 40 10             	mov    0x10(%eax),%eax
 868efa1:	0f b7 55 fc          	movzwl -0x4(%ebp),%edx
 868efa5:	66 89 90 b5 12 00 00 	mov    %dx,0x12b5(%eax)
 868efac:	c9                   	leave
 868efad:	c3                   	ret

```

```c
// CUserCharacInfo::SetCurCharacAssaultedUserId @ 0x868ef84

/* CUserCharacInfo::SetCurCharacAssaultedUserId(unsigned short) */

void __thiscall CUserCharacInfo::SetCurCharacAssaultedUserId(CUserCharacInfo *this,ushort param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(ushort *)(*(int *)(this + 0x10) + 0x12b5) = param_1;
  }
  return;
}

```

---

## SetCurCharacChaosResponTime

```asm
// === 0868eef4 CUserCharacInfo::SetCurCharacChaosResponTime  [0x0868eef4-0x868ef1f] ===
 868eef4:	55                   	push   %ebp
 868eef5:	89 e5                	mov    %esp,%ebp
 868eef7:	83 ec 18             	sub    $0x18,%esp
 868eefa:	8b 45 08             	mov    0x8(%ebp),%eax
 868eefd:	8b 40 10             	mov    0x10(%eax),%eax
 868ef00:	85 c0                	test   %eax,%eax
 868ef02:	74 1a                	je     868ef1e <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi+0x2a>
 868ef04:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef07:	89 04 24             	mov    %eax,(%esp)
 868ef0a:	e8 61 b9 b0 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 868ef0f:	8b 45 08             	mov    0x8(%ebp),%eax
 868ef12:	8b 40 10             	mov    0x10(%eax),%eax
 868ef15:	8b 55 0c             	mov    0xc(%ebp),%edx
 868ef18:	89 90 ad 12 00 00    	mov    %edx,0x12ad(%eax)
 868ef1e:	c9                   	leave
 868ef1f:	c3                   	ret

```

```c
// CUserCharacInfo::SetCurCharacChaosResponTime @ 0x868eef4

/* CUserCharacInfo::SetCurCharacChaosResponTime(int) */

void __thiscall CUserCharacInfo::SetCurCharacChaosResponTime(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0x12ad) = param_1;
  }
  return;
}

```

---

## SetCurCharacLuckPoint

```asm
// === 0864670a CUserCharacInfo::SetCurCharacLuckPoint  [0x0864670a-0x864679f] ===
 864670a:	55                   	push   %ebp
 864670b:	89 e5                	mov    %esp,%ebp
 864670d:	8b 45 08             	mov    0x8(%ebp),%eax
 8646710:	8b 40 10             	mov    0x10(%eax),%eax
 8646713:	85 c0                	test   %eax,%eax
 8646715:	0f 84 82 00 00 00    	je     864679d <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x93>
 864671b:	8b 45 08             	mov    0x8(%ebp),%eax
 864671e:	8b 40 10             	mov    0x10(%eax),%eax
 8646721:	8b 80 71 0e 00 00    	mov    0xe71(%eax),%eax
 8646727:	8b 55 0c             	mov    0xc(%ebp),%edx
 864672a:	89 d1                	mov    %edx,%ecx
 864672c:	29 c1                	sub    %eax,%ecx
 864672e:	89 c8                	mov    %ecx,%eax
 8646730:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 8646735:	75 12                	jne    8646749 <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x3f>
 8646737:	8b 45 08             	mov    0x8(%ebp),%eax
 864673a:	8b 40 10             	mov    0x10(%eax),%eax
 864673d:	c7 80 71 0e 00 00 a0 	movl   $0x186a0,0xe71(%eax)
 8646744:	86 01 00 
 8646747:	eb 54                	jmp    864679d <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x93>
 8646749:	8b 45 08             	mov    0x8(%ebp),%eax
 864674c:	8b 40 10             	mov    0x10(%eax),%eax
 864674f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8646752:	89 90 71 0e 00 00    	mov    %edx,0xe71(%eax)
 8646758:	8b 45 08             	mov    0x8(%ebp),%eax
 864675b:	8b 40 10             	mov    0x10(%eax),%eax
 864675e:	8b 80 71 0e 00 00    	mov    0xe71(%eax),%eax
 8646764:	85 c0                	test   %eax,%eax
 8646766:	79 12                	jns    864677a <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x70>
 8646768:	8b 45 08             	mov    0x8(%ebp),%eax
 864676b:	8b 40 10             	mov    0x10(%eax),%eax
 864676e:	c7 80 71 0e 00 00 00 	movl   $0x0,0xe71(%eax)
 8646775:	00 00 00 
 8646778:	eb 23                	jmp    864679d <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x93>
 864677a:	8b 45 08             	mov    0x8(%ebp),%eax
 864677d:	8b 40 10             	mov    0x10(%eax),%eax
 8646780:	8b 80 71 0e 00 00    	mov    0xe71(%eax),%eax
 8646786:	3d 9f 86 01 00       	cmp    $0x1869f,%eax
 864678b:	7e 10                	jle    864679d <_ZN15CUserCharacInfo21SetCurCharacLuckPointEi+0x93>
 864678d:	8b 45 08             	mov    0x8(%ebp),%eax
 8646790:	8b 40 10             	mov    0x10(%eax),%eax
 8646793:	c7 80 71 0e 00 00 9f 	movl   $0x1869f,0xe71(%eax)
 864679a:	86 01 00 
 864679d:	5d                   	pop    %ebp
 864679e:	c3                   	ret
 864679f:	90                   	nop

```

```c
// CUserCharacInfo::SetCurCharacLuckPoint @ 0x864670a

/* CUserCharacInfo::SetCurCharacLuckPoint(int) */

void __thiscall CUserCharacInfo::SetCurCharacLuckPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 - *(int *)(*(int *)(this + 0x10) + 0xe71) == 100000) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 100000;
    }
    else {
      *(int *)(*(int *)(this + 0x10) + 0xe71) = param_1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe71) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 0;
      }
      else if (99999 < *(int *)(*(int *)(this + 0x10) + 0xe71)) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe71) = 99999;
      }
    }
  }
  return;
}

```

---

## SetCurCharacMaxEquipLevel

```asm
// === 086467c2 CUserCharacInfo::SetCurCharacMaxEquipLevel  [0x086467c2-0x86467ed] ===
 86467c2:	55                   	push   %ebp
 86467c3:	89 e5                	mov    %esp,%ebp
 86467c5:	83 ec 18             	sub    $0x18,%esp
 86467c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86467cb:	8b 40 10             	mov    0x10(%eax),%eax
 86467ce:	85 c0                	test   %eax,%eax
 86467d0:	74 1a                	je     86467ec <_ZN15CUserCharacInfo25SetCurCharacMaxEquipLevelEi+0x2a>
 86467d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86467d5:	89 04 24             	mov    %eax,(%esp)
 86467d8:	e8 91 8a be ff       	call   822f26e <_ZN15CUserCharacInfo26enableSaveCharacManageInfoEv>
 86467dd:	8b 45 08             	mov    0x8(%ebp),%eax
 86467e0:	8b 40 10             	mov    0x10(%eax),%eax
 86467e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 86467e6:	89 90 c2 14 00 00    	mov    %edx,0x14c2(%eax)
 86467ec:	c9                   	leave
 86467ed:	c3                   	ret

```

```c
// CUserCharacInfo::SetCurCharacMaxEquipLevel @ 0x86467c2

/* CUserCharacInfo::SetCurCharacMaxEquipLevel(int) */

void __thiscall CUserCharacInfo::SetCurCharacMaxEquipLevel(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacManageInfo(this);
    *(int *)(*(int *)(this + 0x10) + 0x14c2) = param_1;
  }
  return;
}

```

---

## SetCurCharacOption

```asm
// === 0868efae CUserCharacInfo::SetCurCharacOption  [0x0868efae-0x868f03b] ===
 868efae:	55                   	push   %ebp
 868efaf:	89 e5                	mov    %esp,%ebp
 868efb1:	57                   	push   %edi
 868efb2:	56                   	push   %esi
 868efb3:	53                   	push   %ebx
 868efb4:	8b 45 08             	mov    0x8(%ebp),%eax
 868efb7:	8b 40 10             	mov    0x10(%eax),%eax
 868efba:	85 c0                	test   %eax,%eax
 868efbc:	74 78                	je     868f036 <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption+0x88>
 868efbe:	8b 45 08             	mov    0x8(%ebp),%eax
 868efc1:	8b 40 10             	mov    0x10(%eax),%eax
 868efc4:	8b 55 0c             	mov    0xc(%ebp),%edx
 868efc7:	05 b7 12 00 00       	add    $0x12b7,%eax
 868efcc:	bb 00 02 00 00       	mov    $0x200,%ebx
 868efd1:	89 c1                	mov    %eax,%ecx
 868efd3:	83 e1 01             	and    $0x1,%ecx
 868efd6:	85 c9                	test   %ecx,%ecx
 868efd8:	74 0e                	je     868efe8 <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption+0x3a>
 868efda:	0f b6 0a             	movzbl (%edx),%ecx
 868efdd:	88 08                	mov    %cl,(%eax)
 868efdf:	83 c0 01             	add    $0x1,%eax
 868efe2:	83 c2 01             	add    $0x1,%edx
 868efe5:	83 eb 01             	sub    $0x1,%ebx
 868efe8:	89 c1                	mov    %eax,%ecx
 868efea:	83 e1 02             	and    $0x2,%ecx
 868efed:	85 c9                	test   %ecx,%ecx
 868efef:	74 0f                	je     868f000 <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption+0x52>
 868eff1:	0f b7 0a             	movzwl (%edx),%ecx
 868eff4:	66 89 08             	mov    %cx,(%eax)
 868eff7:	83 c0 02             	add    $0x2,%eax
 868effa:	83 c2 02             	add    $0x2,%edx
 868effd:	83 eb 02             	sub    $0x2,%ebx
 868f000:	89 d9                	mov    %ebx,%ecx
 868f002:	c1 e9 02             	shr    $0x2,%ecx
 868f005:	89 c7                	mov    %eax,%edi
 868f007:	89 d6                	mov    %edx,%esi
 868f009:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 868f00b:	89 f2                	mov    %esi,%edx
 868f00d:	89 f8                	mov    %edi,%eax
 868f00f:	b9 00 00 00 00       	mov    $0x0,%ecx
 868f014:	89 de                	mov    %ebx,%esi
 868f016:	83 e6 02             	and    $0x2,%esi
 868f019:	85 f6                	test   %esi,%esi
 868f01b:	74 0b                	je     868f028 <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption+0x7a>
 868f01d:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 868f021:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 868f025:	83 c1 02             	add    $0x2,%ecx
 868f028:	83 e3 01             	and    $0x1,%ebx
 868f02b:	85 db                	test   %ebx,%ebx
 868f02d:	74 07                	je     868f036 <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption+0x88>
 868f02f:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 868f033:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 868f036:	5b                   	pop    %ebx
 868f037:	5e                   	pop    %esi
 868f038:	5f                   	pop    %edi
 868f039:	5d                   	pop    %ebp
 868f03a:	c3                   	ret
 868f03b:	90                   	nop

```

```c
// CUserCharacInfo::SetCurCharacOption @ 0x868efae

/* CUserCharacInfo::SetCurCharacOption(CharacterOption&) */

void __thiscall CUserCharacInfo::SetCurCharacOption(CUserCharacInfo *this,CharacterOption *param_1)

{
  CharacterOption *pCVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x10) != 0) {
    iVar3 = *(int *)(this + 0x10);
    pCVar1 = (CharacterOption *)(iVar3 + 0x12b7);
    uVar4 = 0x200;
    bVar5 = ((uint)pCVar1 & 1) != 0;
    if (bVar5) {
      *pCVar1 = *param_1;
      pCVar1 = (CharacterOption *)(iVar3 + 0x12b8);
      param_1 = param_1 + 1;
      uVar4 = 0x1ff;
    }
    if (((uint)pCVar1 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
      pCVar1 = pCVar1 + 2;
      param_1 = param_1 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined4 *)pCVar1 = *(undefined4 *)param_1;
      param_1 = param_1 + 4;
      pCVar1 = pCVar1 + 4;
    }
    iVar3 = 0;
    if ((uVar4 & 2) != 0) {
      *(undefined2 *)pCVar1 = *(undefined2 *)param_1;
      iVar3 = 2;
    }
    if (bVar5) {
      pCVar1[iVar3] = param_1[iVar3];
    }
  }
  return;
}

```

---

## SetInvisible

```asm
// === 0868bdac CUserCharacInfo::SetInvisible  [0x0868bdac-0x868bdc7] ===
 868bdac:	55                   	push   %ebp
 868bdad:	89 e5                	mov    %esp,%ebp
 868bdaf:	8b 45 08             	mov    0x8(%ebp),%eax
 868bdb2:	8b 40 10             	mov    0x10(%eax),%eax
 868bdb5:	0f b6 90 40 0e 00 00 	movzbl 0xe40(%eax),%edx
 868bdbc:	83 e2 fe             	and    $0xfffffffe,%edx
 868bdbf:	88 90 40 0e 00 00    	mov    %dl,0xe40(%eax)
 868bdc5:	5d                   	pop    %ebp
 868bdc6:	c3                   	ret
 868bdc7:	90                   	nop

```

```c
// CUserCharacInfo::SetInvisible @ 0x868bdac

/* CUserCharacInfo::SetInvisible() */

void __thiscall CUserCharacInfo::SetInvisible(CUserCharacInfo *this)

{
  *(byte *)(*(int *)(this + 0x10) + 0xe40) = *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfe;
  return;
}

```

---

## SetVisible

```asm
// === 0868bdc8 CUserCharacInfo::SetVisible  [0x0868bdc8-0x868bde3] ===
 868bdc8:	55                   	push   %ebp
 868bdc9:	89 e5                	mov    %esp,%ebp
 868bdcb:	8b 45 08             	mov    0x8(%ebp),%eax
 868bdce:	8b 40 10             	mov    0x10(%eax),%eax
 868bdd1:	0f b6 90 40 0e 00 00 	movzbl 0xe40(%eax),%edx
 868bdd8:	83 ca 01             	or     $0x1,%edx
 868bddb:	88 90 40 0e 00 00    	mov    %dl,0xe40(%eax)
 868bde1:	5d                   	pop    %ebp
 868bde2:	c3                   	ret
 868bde3:	90                   	nop

```

```c
// CUserCharacInfo::SetVisible @ 0x868bdc8

/* CUserCharacInfo::SetVisible() */

void __thiscall CUserCharacInfo::SetVisible(CUserCharacInfo *this)

{
  *(byte *)(*(int *)(this + 0x10) + 0xe40) = *(byte *)(*(int *)(this + 0x10) + 0xe40) | 1;
  return;
}

```

---

## SubCurCharacChaosPoint

```asm
// === 08645fb8 CUserCharacInfo::SubCurCharacChaosPoint  [0x08645fb8-0x864600f] ===
 8645fb8:	55                   	push   %ebp
 8645fb9:	89 e5                	mov    %esp,%ebp
 8645fbb:	83 ec 18             	sub    $0x18,%esp
 8645fbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8645fc1:	8b 40 10             	mov    0x10(%eax),%eax
 8645fc4:	85 c0                	test   %eax,%eax
 8645fc6:	74 46                	je     864600e <_ZN15CUserCharacInfo22SubCurCharacChaosPointEi+0x56>
 8645fc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8645fcb:	89 04 24             	mov    %eax,(%esp)
 8645fce:	e8 9d 48 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8645fd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8645fd6:	8b 40 10             	mov    0x10(%eax),%eax
 8645fd9:	8b 55 08             	mov    0x8(%ebp),%edx
 8645fdc:	8b 52 10             	mov    0x10(%edx),%edx
 8645fdf:	8b 92 49 0e 00 00    	mov    0xe49(%edx),%edx
 8645fe5:	2b 55 0c             	sub    0xc(%ebp),%edx
 8645fe8:	89 90 49 0e 00 00    	mov    %edx,0xe49(%eax)
 8645fee:	8b 45 08             	mov    0x8(%ebp),%eax
 8645ff1:	8b 40 10             	mov    0x10(%eax),%eax
 8645ff4:	8b 80 49 0e 00 00    	mov    0xe49(%eax),%eax
 8645ffa:	85 c0                	test   %eax,%eax
 8645ffc:	79 10                	jns    864600e <_ZN15CUserCharacInfo22SubCurCharacChaosPointEi+0x56>
 8645ffe:	8b 45 08             	mov    0x8(%ebp),%eax
 8646001:	8b 40 10             	mov    0x10(%eax),%eax
 8646004:	c7 80 49 0e 00 00 00 	movl   $0x0,0xe49(%eax)
 864600b:	00 00 00 
 864600e:	c9                   	leave
 864600f:	c3                   	ret

```

```c
// CUserCharacInfo::SubCurCharacChaosPoint @ 0x8645fb8

/* CUserCharacInfo::SubCurCharacChaosPoint(int) */

void __thiscall CUserCharacInfo::SubCurCharacChaosPoint(CUserCharacInfo *this,int param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(int *)(*(int *)(this + 0x10) + 0xe49) = *(int *)(*(int *)(this + 0x10) + 0xe49) - param_1;
    if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
      *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
    }
  }
  return;
}

```

---

## UseFinishPoint

```asm
// === 08645620 CUserCharacInfo::UseFinishPoint  [0x08645620-0x86456cf] ===
 8645620:	55                   	push   %ebp
 8645621:	89 e5                	mov    %esp,%ebp
 8645623:	83 ec 38             	sub    $0x38,%esp
 8645626:	8b 45 08             	mov    0x8(%ebp),%eax
 8645629:	8b 40 10             	mov    0x10(%eax),%eax
 864562c:	85 c0                	test   %eax,%eax
 864562e:	75 3d                	jne    864566d <_ZN15CUserCharacInfo14UseFinishPointEi+0x4d>
 8645630:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8645637:	00 
 8645638:	c7 44 24 08 20 02 00 	movl   $0x220,0x8(%esp)
 864563f:	00 
 8645640:	c7 44 24 04 20 39 cf 	movl   $0x8cf3920,0x4(%esp)
 8645647:	08 
 8645648:	8d 45 e8             	lea    -0x18(%ebp),%eax
 864564b:	89 04 24             	mov    %eax,(%esp)
 864564e:	e8 c5 a0 f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8645653:	c7 44 24 04 84 df ce 	movl   $0x8cedf84,0x4(%esp)
 864565a:	08 
 864565b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 864565e:	89 04 24             	mov    %eax,(%esp)
 8645661:	e8 22 a1 f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645666:	b8 00 00 00 00       	mov    $0x0,%eax
 864566b:	eb 60                	jmp    86456cd <_ZN15CUserCharacInfo14UseFinishPointEi+0xad>
 864566d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8645670:	f7 d8                	neg    %eax
 8645672:	89 44 24 04          	mov    %eax,0x4(%esp)
 8645676:	8b 45 08             	mov    0x8(%ebp),%eax
 8645679:	89 04 24             	mov    %eax,(%esp)
 864567c:	e8 3f 01 00 00       	call   86457c0 <_ZN15CUserCharacInfo17ChangeFinishPointEi>
 8645681:	8b 45 08             	mov    0x8(%ebp),%eax
 8645684:	8b 40 10             	mov    0x10(%eax),%eax
 8645687:	8b 90 0a 0e 00 00    	mov    0xe0a(%eax),%edx
 864568d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645690:	8b 40 10             	mov    0x10(%eax),%eax
 8645693:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 8645699:	8b 4d 08             	mov    0x8(%ebp),%ecx
 864569c:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 86456a2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86456a9:	00 
 86456aa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86456ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 86456b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86456b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86456b9:	89 0c 24             	mov    %ecx,(%esp)
 86456bc:	e8 d5 f4 03 00       	call   8684b96 <_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason>
 86456c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86456c4:	8b 40 10             	mov    0x10(%eax),%eax
 86456c7:	8b 80 06 0e 00 00    	mov    0xe06(%eax),%eax
 86456cd:	c9                   	leave
 86456ce:	c3                   	ret
 86456cf:	90                   	nop

```

```c
// CUserCharacInfo::UseFinishPoint @ 0x8645620

/* CUserCharacInfo::UseFinishPoint(int) */

undefined4 __thiscall CUserCharacInfo::UseFinishPoint(CUserCharacInfo *this,int param_1)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"unsigned int CUserCharacInfo::UseFinishPoint(int)",0x220,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::UseFinishPoint() : m_selected is NULL");
    uVar1 = 0;
  }
  else {
    ChangeFinishPoint(this,-param_1);
    cUserHistoryLog::FPSub
              ((cUserHistoryLog *)(this + 0x79700),param_1,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),0);
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0xe06);
  }
  return uVar1;
}

```

---

## WarAreaKill

```asm
// === 086459c4 CUserCharacInfo::WarAreaKill  [0x086459c4-0x8645a9f] ===
 86459c4:	55                   	push   %ebp
 86459c5:	89 e5                	mov    %esp,%ebp
 86459c7:	53                   	push   %ebx
 86459c8:	83 ec 34             	sub    $0x34,%esp
 86459cb:	8b 45 08             	mov    0x8(%ebp),%eax
 86459ce:	8b 40 10             	mov    0x10(%eax),%eax
 86459d1:	85 c0                	test   %eax,%eax
 86459d3:	75 3b                	jne    8645a10 <_ZN15CUserCharacInfo11WarAreaKillEiif+0x4c>
 86459d5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86459dc:	00 
 86459dd:	c7 44 24 08 84 02 00 	movl   $0x284,0x8(%esp)
 86459e4:	00 
 86459e5:	c7 44 24 04 a0 37 cf 	movl   $0x8cf37a0,0x4(%esp)
 86459ec:	08 
 86459ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86459f0:	89 04 24             	mov    %eax,(%esp)
 86459f3:	e8 20 9d f0 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86459f8:	c7 44 24 04 1c e1 ce 	movl   $0x8cee11c,0x4(%esp)
 86459ff:	08 
 8645a00:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8645a03:	89 04 24             	mov    %eax,(%esp)
 8645a06:	e8 7d 9d f0 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8645a0b:	e9 89 00 00 00       	jmp    8645a99 <_ZN15CUserCharacInfo11WarAreaKillEiif+0xd5>
 8645a10:	8b 45 10             	mov    0x10(%ebp),%eax
 8645a13:	89 44 24 04          	mov    %eax,0x4(%esp)
 8645a17:	8b 45 08             	mov    0x8(%ebp),%eax
 8645a1a:	89 04 24             	mov    %eax,(%esp)
 8645a1d:	e8 9e fd ff ff       	call   86457c0 <_ZN15CUserCharacInfo17ChangeFinishPointEi>
 8645a22:	8b 45 08             	mov    0x8(%ebp),%eax
 8645a25:	8b 40 10             	mov    0x10(%eax),%eax
 8645a28:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8645a2b:	8b 55 08             	mov    0x8(%ebp),%edx
 8645a2e:	8b 52 10             	mov    0x10(%edx),%edx
 8645a31:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8645a34:	81 c3 80 03 00 00    	add    $0x380,%ebx
 8645a3a:	d9 44 9a 0e          	flds   0xe(%edx,%ebx,4)
 8645a3e:	d8 45 14             	fadds  0x14(%ebp)
 8645a41:	8d 91 80 03 00 00    	lea    0x380(%ecx),%edx
 8645a47:	d9 5c 90 0e          	fstps  0xe(%eax,%edx,4)
 8645a4b:	83 7d 0c 04          	cmpl   $0x4,0xc(%ebp)
 8645a4f:	75 07                	jne    8645a58 <_ZN15CUserCharacInfo11WarAreaKillEiif+0x94>
 8645a51:	b8 01 00 00 00       	mov    $0x1,%eax
 8645a56:	eb 05                	jmp    8645a5d <_ZN15CUserCharacInfo11WarAreaKillEiif+0x99>
 8645a58:	b8 00 00 00 00       	mov    $0x0,%eax
 8645a5d:	8b 55 08             	mov    0x8(%ebp),%edx
 8645a60:	8b 52 10             	mov    0x10(%edx),%edx
 8645a63:	8b 8a 0a 0e 00 00    	mov    0xe0a(%edx),%ecx
 8645a69:	8b 55 08             	mov    0x8(%ebp),%edx
 8645a6c:	8b 52 10             	mov    0x10(%edx),%edx
 8645a6f:	8b 92 06 0e 00 00    	mov    0xe06(%edx),%edx
 8645a75:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8645a78:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 8645a7e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8645a82:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8645a86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8645a8a:	8b 45 10             	mov    0x10(%ebp),%eax
 8645a8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8645a91:	89 1c 24             	mov    %ebx,(%esp)
 8645a94:	e8 c3 f0 03 00       	call   8684b5c <_ZN15cUserHistoryLog5FPAddEiii12eFPAddReason>
 8645a99:	83 c4 34             	add    $0x34,%esp
 8645a9c:	5b                   	pop    %ebx
 8645a9d:	5d                   	pop    %ebp
 8645a9e:	c3                   	ret
 8645a9f:	90                   	nop

```

```c
// CUserCharacInfo::WarAreaKill @ 0x86459c4

/* CUserCharacInfo::WarAreaKill(int, int, float) */

void __thiscall
CUserCharacInfo::WarAreaKill(CUserCharacInfo *this,int param_1,int param_2,float param_3)

{
  cMyTrace local_1c [20];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"void CUserCharacInfo::WarAreaKill(int, int, float)",0x284,5);
    cMyTrace::operator()(local_1c,"WARAREA CUserCharacInfo::WarAreaKill() : m_selected is NULL");
  }
  else {
    ChangeFinishPoint(this,param_2);
    *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4) =
         *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4) + param_3;
    cUserHistoryLog::FPAdd
              ((cUserHistoryLog *)(this + 0x79700),param_2,
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe06),
               *(undefined4 *)(*(int *)(this + 0x10) + 0xe0a),param_1 == 4);
  }
  return;
}

```

---

## add_guild_exp

```asm
// === 08645c76 CUserCharacInfo::add_guild_exp  [0x08645c76-0x8645cb3] ===
 8645c76:	55                   	push   %ebp
 8645c77:	89 e5                	mov    %esp,%ebp
 8645c79:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c7c:	8b 40 10             	mov    0x10(%eax),%eax
 8645c7f:	85 c0                	test   %eax,%eax
 8645c81:	74 2e                	je     8645cb1 <_ZN15CUserCharacInfo13add_guild_expEi+0x3b>
 8645c83:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c86:	8b 40 10             	mov    0x10(%eax),%eax
 8645c89:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645c8f:	85 c0                	test   %eax,%eax
 8645c91:	74 1e                	je     8645cb1 <_ZN15CUserCharacInfo13add_guild_expEi+0x3b>
 8645c93:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c96:	8b 40 10             	mov    0x10(%eax),%eax
 8645c99:	8b 55 08             	mov    0x8(%ebp),%edx
 8645c9c:	8b 52 10             	mov    0x10(%edx),%edx
 8645c9f:	8b 8a e9 0d 00 00    	mov    0xde9(%edx),%ecx
 8645ca5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8645ca8:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8645cab:	89 90 e9 0d 00 00    	mov    %edx,0xde9(%eax)
 8645cb1:	5d                   	pop    %ebp
 8645cb2:	c3                   	ret
 8645cb3:	90                   	nop

```

```c
// CUserCharacInfo::add_guild_exp @ 0x8645c76

/* CUserCharacInfo::add_guild_exp(int) */

void __thiscall CUserCharacInfo::add_guild_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xde9) = *(int *)(*(int *)(this + 0x10) + 0xde9) + param_1;
  }
  return;
}

```

---

## add_guild_temp_exp

```asm
// === 08645c18 CUserCharacInfo::add_guild_temp_exp  [0x08645c18-0x8645c57] ===
 8645c18:	55                   	push   %ebp
 8645c19:	89 e5                	mov    %esp,%ebp
 8645c1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c1e:	8b 40 10             	mov    0x10(%eax),%eax
 8645c21:	85 c0                	test   %eax,%eax
 8645c23:	74 30                	je     8645c55 <_ZN15CUserCharacInfo18add_guild_temp_expEi+0x3d>
 8645c25:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c28:	8b 40 10             	mov    0x10(%eax),%eax
 8645c2b:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645c31:	85 c0                	test   %eax,%eax
 8645c33:	74 20                	je     8645c55 <_ZN15CUserCharacInfo18add_guild_temp_expEi+0x3d>
 8645c35:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c38:	8b 40 10             	mov    0x10(%eax),%eax
 8645c3b:	8b 55 08             	mov    0x8(%ebp),%edx
 8645c3e:	8b 52 10             	mov    0x10(%edx),%edx
 8645c41:	0f b7 8a ed 0d 00 00 	movzwl 0xded(%edx),%ecx
 8645c48:	8b 55 0c             	mov    0xc(%ebp),%edx
 8645c4b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8645c4e:	66 89 90 ed 0d 00 00 	mov    %dx,0xded(%eax)
 8645c55:	5d                   	pop    %ebp
 8645c56:	c3                   	ret
 8645c57:	90                   	nop

```

```c
// CUserCharacInfo::add_guild_temp_exp @ 0x8645c18

/* CUserCharacInfo::add_guild_temp_exp(int) */

void __thiscall CUserCharacInfo::add_guild_temp_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(short *)(*(int *)(this + 0x10) + 0xded) =
         *(short *)(*(int *)(this + 0x10) + 0xded) + (short)param_1;
  }
  return;
}

```

---

## add_guild_today_exp

```asm
// === 08645ce4 CUserCharacInfo::add_guild_today_exp  [0x08645ce4-0x8645d21] ===
 8645ce4:	55                   	push   %ebp
 8645ce5:	89 e5                	mov    %esp,%ebp
 8645ce7:	8b 45 08             	mov    0x8(%ebp),%eax
 8645cea:	8b 40 10             	mov    0x10(%eax),%eax
 8645ced:	85 c0                	test   %eax,%eax
 8645cef:	74 2e                	je     8645d1f <_ZN15CUserCharacInfo19add_guild_today_expEi+0x3b>
 8645cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645cf4:	8b 40 10             	mov    0x10(%eax),%eax
 8645cf7:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645cfd:	85 c0                	test   %eax,%eax
 8645cff:	74 1e                	je     8645d1f <_ZN15CUserCharacInfo19add_guild_today_expEi+0x3b>
 8645d01:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d04:	8b 40 10             	mov    0x10(%eax),%eax
 8645d07:	8b 55 08             	mov    0x8(%ebp),%edx
 8645d0a:	8b 52 10             	mov    0x10(%edx),%edx
 8645d0d:	8b 8a ef 0d 00 00    	mov    0xdef(%edx),%ecx
 8645d13:	8b 55 0c             	mov    0xc(%ebp),%edx
 8645d16:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8645d19:	89 90 ef 0d 00 00    	mov    %edx,0xdef(%eax)
 8645d1f:	5d                   	pop    %ebp
 8645d20:	c3                   	ret
 8645d21:	90                   	nop

```

```c
// CUserCharacInfo::add_guild_today_exp @ 0x8645ce4

/* CUserCharacInfo::add_guild_today_exp(int) */

void __thiscall CUserCharacInfo::add_guild_today_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xdef) = *(int *)(*(int *)(this + 0x10) + 0xdef) + param_1;
  }
  return;
}

```

---

## calcCurCharacSchoolPoint

```asm
// === 08655bce CUserCharacInfo::calcCurCharacSchoolPoint  [0x08655bce-0x8655c5f] ===
 8655bce:	55                   	push   %ebp
 8655bcf:	89 e5                	mov    %esp,%ebp
 8655bd1:	83 ec 28             	sub    $0x28,%esp
 8655bd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8655bd7:	89 04 24             	mov    %eax,(%esp)
 8655bda:	e8 db b0 ab ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 8655bdf:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 8655be3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8655be6:	ba 67 66 66 66       	mov    $0x66666667,%edx
 8655beb:	89 c8                	mov    %ecx,%eax
 8655bed:	f7 ea                	imul   %edx
 8655bef:	c1 fa 02             	sar    $0x2,%edx
 8655bf2:	89 c8                	mov    %ecx,%eax
 8655bf4:	c1 f8 1f             	sar    $0x1f,%eax
 8655bf7:	29 c2                	sub    %eax,%edx
 8655bf9:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 8655bfd:	0f b7 c0             	movzwl %ax,%eax
 8655c00:	69 c0 cd cc 00 00    	imul   $0xcccd,%eax,%eax
 8655c06:	c1 e8 10             	shr    $0x10,%eax
 8655c09:	66 c1 e8 03          	shr    $0x3,%ax
 8655c0d:	0f b7 c0             	movzwl %ax,%eax
 8655c10:	39 c2                	cmp    %eax,%edx
 8655c12:	74 48                	je     8655c5c <_ZN15CUserCharacInfo24calcCurCharacSchoolPointEi+0x8e>
 8655c14:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 8655c18:	0f b7 c0             	movzwl %ax,%eax
 8655c1b:	69 c0 cd cc 00 00    	imul   $0xcccd,%eax,%eax
 8655c21:	c1 e8 10             	shr    $0x10,%eax
 8655c24:	66 c1 e8 03          	shr    $0x3,%ax
 8655c28:	0f b7 c0             	movzwl %ax,%eax
 8655c2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8655c2e:	83 7d f4 17          	cmpl   $0x17,-0xc(%ebp)
 8655c32:	76 07                	jbe    8655c3b <_ZN15CUserCharacInfo24calcCurCharacSchoolPointEi+0x6d>
 8655c34:	c7 45 f4 17 00 00 00 	movl   $0x17,-0xc(%ebp)
 8655c3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8655c3e:	8b 40 10             	mov    0x10(%eax),%eax
 8655c41:	8b 55 08             	mov    0x8(%ebp),%edx
 8655c44:	8b 52 10             	mov    0x10(%edx),%edx
 8655c47:	8b 4a 71             	mov    0x71(%edx),%ecx
 8655c4a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8655c4d:	8b 14 95 00 31 cf 08 	mov    0x8cf3100(,%edx,4),%edx
 8655c54:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8655c57:	89 50 71             	mov    %edx,0x71(%eax)
 8655c5a:	eb 01                	jmp    8655c5d <_ZN15CUserCharacInfo24calcCurCharacSchoolPointEi+0x8f>
 8655c5c:	90                   	nop
 8655c5d:	c9                   	leave
 8655c5e:	c3                   	ret
 8655c5f:	90                   	nop

```

```c
// CUserCharacInfo::calcCurCharacSchoolPoint @ 0x8655bce

/* CUserCharacInfo::calcCurCharacSchoolPoint(int) */

void __thiscall CUserCharacInfo::calcCurCharacSchoolPoint(CUserCharacInfo *this,int param_1)

{
  ushort uVar1;
  uint local_10;
  
  uVar1 = getCurCharacUsedFatigue(this);
  if (param_1 / 10 != uVar1 / 10) {
    local_10 = uVar1 / 10;
    if (0x17 < local_10) {
      local_10 = 0x17;
    }
    *(int *)(*(int *)(this + 0x10) + 0x71) =
         *(int *)(*(int *)(this + 0x10) + 0x71) +
         *(int *)(calcCurCharacSchoolPoint(int)::point + local_10 * 4);
  }
  return;
}

```

---

## calcHelpAbuseRatio

```asm
// === 0864e402 CUserCharacInfo::calcHelpAbuseRatio  [0x0864e402-0x864e40f] ===
 864e402:	55                   	push   %ebp
 864e403:	89 e5                	mov    %esp,%ebp
 864e405:	83 ec 24             	sub    $0x24,%esp
 864e408:	8b 45 10             	mov    0x10(%ebp),%eax
 864e40b:	88 45 dc             	mov    %al,-0x24(%ebp)
 864e40e:	c9                   	leave
 864e40f:	c3                   	ret

```

```c
// CUserCharacInfo::calcHelpAbuseRatio @ 0x864e402

/* CUserCharacInfo::calcHelpAbuseRatio(unsigned int, bool) */

void CUserCharacInfo::calcHelpAbuseRatio(uint param_1,bool param_2)

{
  return;
}

```

---

## calcHelpAbuseRatioBeforeLevelUp

```asm
// === 0864e3fa CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp  [0x0864e3fa-0x864e401] ===
 864e3fa:	55                   	push   %ebp
 864e3fb:	89 e5                	mov    %esp,%ebp
 864e3fd:	83 ec 20             	sub    $0x20,%esp
 864e400:	c9                   	leave
 864e401:	c3                   	ret

```

```c
// CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp @ 0x864e3fa

/* CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int) */

void CUserCharacInfo::calcHelpAbuseRatioBeforeLevelUp(int param_1)

{
  return;
}

```

---

## calc_disp_help_abuse_ratio

```asm
// === 08658a4e CUserCharacInfo::calc_disp_help_abuse_ratio  [0x08658a4e-0x8658b29] ===
 8658a4e:	55                   	push   %ebp
 8658a4f:	89 e5                	mov    %esp,%ebp
 8658a51:	83 ec 58             	sub    $0x58,%esp
 8658a54:	8b 45 08             	mov    0x8(%ebp),%eax
 8658a57:	89 04 24             	mov    %eax,(%esp)
 8658a5a:	e8 59 18 a8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8658a5f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8658a63:	8b 45 08             	mov    0x8(%ebp),%eax
 8658a66:	89 04 24             	mov    %eax,(%esp)
 8658a69:	e8 4c 59 ff ff       	call   864e3ba <_ZN15CUserCharacInfo16get_level_up_expEi>
 8658a6e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8658a71:	8b 45 08             	mov    0x8(%ebp),%eax
 8658a74:	89 04 24             	mov    %eax,(%esp)
 8658a77:	e8 ee da 03 00       	call   869656a <_ZNK15CUserCharacInfo31getCurCharacDungeonHelpAbuseExpEv>
 8658a7c:	ba 00 00 00 00       	mov    $0x0,%edx
 8658a81:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8658a84:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8658a87:	df 6d d0             	fildll -0x30(%ebp)
 8658a8a:	db 45 ec             	fildl  -0x14(%ebp)
 8658a8d:	de f9                	fdivrp %st,%st(1)
 8658a8f:	d9 5d f0             	fstps  -0x10(%ebp)
 8658a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8658a95:	89 04 24             	mov    %eax,(%esp)
 8658a98:	e8 ab da 03 00       	call   8696548 <_ZNK15CUserCharacInfo33getCurCharacDungeonHelpAbuseRatioEv>
 8658a9d:	ba 00 00 00 00       	mov    $0x0,%edx
 8658aa2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8658aa5:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8658aa8:	df 6d d0             	fildll -0x30(%ebp)
 8658aab:	d9 45 f0             	flds   -0x10(%ebp)
 8658aae:	d9 05 5c 39 cf 08    	flds   0x8cf395c
 8658ab4:	de c9                	fmulp  %st,%st(1)
 8658ab6:	de c1                	faddp  %st,%st(1)
 8658ab8:	d9 7d ce             	fnstcw -0x32(%ebp)
 8658abb:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 8658abf:	b4 0c                	mov    $0xc,%ah
 8658ac1:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 8658ac5:	d9 6d cc             	fldcw  -0x34(%ebp)
 8658ac8:	db 5d f4             	fistpl -0xc(%ebp)
 8658acb:	d9 6d ce             	fldcw  -0x32(%ebp)
 8658ace:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8658ad5:	8b 45 08             	mov    0x8(%ebp),%eax
 8658ad8:	89 04 24             	mov    %eax,(%esp)
 8658adb:	e8 d8 17 a8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8658ae0:	03 45 0c             	add    0xc(%ebp),%eax
 8658ae3:	85 c0                	test   %eax,%eax
 8658ae5:	0f 9f c0             	setg   %al
 8658ae8:	84 c0                	test   %al,%al
 8658aea:	74 21                	je     8658b0d <_ZN15CUserCharacInfo26calc_disp_help_abuse_ratioEi+0xbf>
 8658aec:	8b 45 08             	mov    0x8(%ebp),%eax
 8658aef:	89 04 24             	mov    %eax,(%esp)
 8658af2:	e8 c1 17 a8 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8658af7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8658afa:	01 c2                	add    %eax,%edx
 8658afc:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8658aff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8658b02:	89 c2                	mov    %eax,%edx
 8658b04:	c1 fa 1f             	sar    $0x1f,%edx
 8658b07:	f7 7d c4             	idivl  -0x3c(%ebp)
 8658b0a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8658b0d:	c7 45 e8 40 42 0f 00 	movl   $0xf4240,-0x18(%ebp)
 8658b14:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8658b17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8658b1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8658b1e:	89 04 24             	mov    %eax,(%esp)
 8658b21:	e8 e8 6d a8 ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8658b26:	8b 00                	mov    (%eax),%eax
 8658b28:	c9                   	leave
 8658b29:	c3                   	ret

```

```c
// CUserCharacInfo::calc_disp_help_abuse_ratio @ 0x8658a4e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::calc_disp_help_abuse_ratio(int) */

int __thiscall CUserCharacInfo::calc_disp_help_abuse_ratio(CUserCharacInfo *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_20 [3];
  float local_14;
  int local_10;
  
  iVar1 = get_charac_level(this);
  local_20[2] = get_level_up_exp(this,iVar1);
  uVar2 = getCurCharacDungeonHelpAbuseExp(this);
  local_14 = (float)uVar2 / (float)local_20[2];
  uVar2 = getCurCharacDungeonHelpAbuseRatio(this);
  local_10 = (int)ROUND(_DAT_08cf395c * local_14 + (float)uVar2);
  local_20[0] = 0;
  iVar1 = get_charac_level(this);
  if (0 < iVar1 + param_1) {
    iVar1 = get_charac_level(this);
    local_20[0] = local_10 / (param_1 + iVar1);
  }
  local_20[1] = 1000000;
  piVar3 = std::min<int>(local_20 + 1,local_20);
  return *piVar3;
}

```

---

## checkBonusPoint

```asm
// === 0868ec5c CUserCharacInfo::checkBonusPoint  [0x0868ec5c-0x868ee25] ===
 868ec5c:	55                   	push   %ebp
 868ec5d:	89 e5                	mov    %esp,%ebp
 868ec5f:	56                   	push   %esi
 868ec60:	53                   	push   %ebx
 868ec61:	83 ec 20             	sub    $0x20,%esp
 868ec64:	8b 45 08             	mov    0x8(%ebp),%eax
 868ec67:	8b 40 10             	mov    0x10(%eax),%eax
 868ec6a:	85 c0                	test   %eax,%eax
 868ec6c:	0f 84 ac 01 00 00    	je     868ee1e <_ZN15CUserCharacInfo15checkBonusPointEv+0x1c2>
 868ec72:	8b 45 08             	mov    0x8(%ebp),%eax
 868ec75:	89 04 24             	mov    %eax,(%esp)
 868ec78:	e8 fd 01 00 00       	call   868ee7a <_ZN15CUserCharacInfo15resetBonusPointEv>
 868ec7d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 868ec84:	c7 45 ec 0a 00 00 00 	movl   $0xa,-0x14(%ebp)
 868ec8b:	e9 7d 01 00 00       	jmp    868ee0d <_ZN15CUserCharacInfo15checkBonusPointEv+0x1b1>
 868ec90:	8b 45 08             	mov    0x8(%ebp),%eax
 868ec93:	89 04 24             	mov    %eax,(%esp)
 868ec96:	e8 e3 b5 a4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 868ec9b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 868ec9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 868eca2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 868eca9:	00 
 868ecaa:	89 04 24             	mov    %eax,(%esp)
 868ecad:	e8 2c d5 e6 ff       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 868ecb2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 868ecb5:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 868ecb9:	0f 94 c0             	sete   %al
 868ecbc:	84 c0                	test   %al,%al
 868ecbe:	0f 85 3e 01 00 00    	jne    868ee02 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1a6>
 868ecc4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 868ecc7:	8b 40 02             	mov    0x2(%eax),%eax
 868ecca:	85 c0                	test   %eax,%eax
 868eccc:	0f 84 33 01 00 00    	je     868ee05 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1a9>
 868ecd2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 868ecd5:	8b 40 02             	mov    0x2(%eax),%eax
 868ecd8:	89 c3                	mov    %eax,%ebx
 868ecda:	e8 bc d4 a3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 868ecdf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 868ece3:	89 04 24             	mov    %eax,(%esp)
 868ece6:	e8 47 0d cd ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 868eceb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 868ecee:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 868ecf2:	0f 84 10 01 00 00    	je     868ee08 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ac>
 868ecf8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 868ecfb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 868ecfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868ed01:	89 04 24             	mov    %eax,(%esp)
 868ed04:	e8 19 48 e8 ff       	call   8513522 <_ZNK10CEquipItem15getWpBonusPointEv>
 868ed09:	8b 00                	mov    (%eax),%eax
 868ed0b:	85 c0                	test   %eax,%eax
 868ed0d:	0f 94 c0             	sete   %al
 868ed10:	84 c0                	test   %al,%al
 868ed12:	74 2b                	je     868ed3f <_ZN15CUserCharacInfo15checkBonusPointEv+0xe3>
 868ed14:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed17:	8b 58 10             	mov    0x10(%eax),%ebx
 868ed1a:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed1d:	8b 40 10             	mov    0x10(%eax),%eax
 868ed20:	8b b0 9d 12 00 00    	mov    0x129d(%eax),%esi
 868ed26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868ed29:	89 04 24             	mov    %eax,(%esp)
 868ed2c:	e8 f1 47 e8 ff       	call   8513522 <_ZNK10CEquipItem15getWpBonusPointEv>
 868ed31:	8b 40 04             	mov    0x4(%eax),%eax
 868ed34:	8d 04 06             	lea    (%esi,%eax,1),%eax
 868ed37:	89 83 9d 12 00 00    	mov    %eax,0x129d(%ebx)
 868ed3d:	eb 40                	jmp    868ed7f <_ZN15CUserCharacInfo15checkBonusPointEv+0x123>
 868ed3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868ed42:	89 04 24             	mov    %eax,(%esp)
 868ed45:	e8 d8 47 e8 ff       	call   8513522 <_ZNK10CEquipItem15getWpBonusPointEv>
 868ed4a:	8b 00                	mov    (%eax),%eax
 868ed4c:	83 f8 01             	cmp    $0x1,%eax
 868ed4f:	0f 94 c0             	sete   %al
 868ed52:	84 c0                	test   %al,%al
 868ed54:	74 29                	je     868ed7f <_ZN15CUserCharacInfo15checkBonusPointEv+0x123>
 868ed56:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed59:	8b 58 10             	mov    0x10(%eax),%ebx
 868ed5c:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed5f:	8b 40 10             	mov    0x10(%eax),%eax
 868ed62:	8b b0 a1 12 00 00    	mov    0x12a1(%eax),%esi
 868ed68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868ed6b:	89 04 24             	mov    %eax,(%esp)
 868ed6e:	e8 af 47 e8 ff       	call   8513522 <_ZNK10CEquipItem15getWpBonusPointEv>
 868ed73:	8b 40 04             	mov    0x4(%eax),%eax
 868ed76:	8d 04 06             	lea    (%esi,%eax,1),%eax
 868ed79:	89 83 a1 12 00 00    	mov    %eax,0x12a1(%ebx)
 868ed7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868ed82:	89 04 24             	mov    %eax,(%esp)
 868ed85:	e8 a6 47 e8 ff       	call   8513530 <_ZNK10CEquipItem16getExpBonusPointEv>
 868ed8a:	8b 00                	mov    (%eax),%eax
 868ed8c:	85 c0                	test   %eax,%eax
 868ed8e:	0f 94 c0             	sete   %al
 868ed91:	84 c0                	test   %al,%al
 868ed93:	74 2b                	je     868edc0 <_ZN15CUserCharacInfo15checkBonusPointEv+0x164>
 868ed95:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed98:	8b 58 10             	mov    0x10(%eax),%ebx
 868ed9b:	8b 45 08             	mov    0x8(%ebp),%eax
 868ed9e:	8b 40 10             	mov    0x10(%eax),%eax
 868eda1:	8b b0 a5 12 00 00    	mov    0x12a5(%eax),%esi
 868eda7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868edaa:	89 04 24             	mov    %eax,(%esp)
 868edad:	e8 7e 47 e8 ff       	call   8513530 <_ZNK10CEquipItem16getExpBonusPointEv>
 868edb2:	8b 40 04             	mov    0x4(%eax),%eax
 868edb5:	8d 04 06             	lea    (%esi,%eax,1),%eax
 868edb8:	89 83 a5 12 00 00    	mov    %eax,0x12a5(%ebx)
 868edbe:	eb 49                	jmp    868ee09 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ad>
 868edc0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868edc3:	89 04 24             	mov    %eax,(%esp)
 868edc6:	e8 65 47 e8 ff       	call   8513530 <_ZNK10CEquipItem16getExpBonusPointEv>
 868edcb:	8b 00                	mov    (%eax),%eax
 868edcd:	83 f8 01             	cmp    $0x1,%eax
 868edd0:	0f 94 c0             	sete   %al
 868edd3:	84 c0                	test   %al,%al
 868edd5:	74 32                	je     868ee09 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ad>
 868edd7:	8b 45 08             	mov    0x8(%ebp),%eax
 868edda:	8b 58 10             	mov    0x10(%eax),%ebx
 868eddd:	8b 45 08             	mov    0x8(%ebp),%eax
 868ede0:	8b 40 10             	mov    0x10(%eax),%eax
 868ede3:	8b b0 a9 12 00 00    	mov    0x12a9(%eax),%esi
 868ede9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 868edec:	89 04 24             	mov    %eax,(%esp)
 868edef:	e8 3c 47 e8 ff       	call   8513530 <_ZNK10CEquipItem16getExpBonusPointEv>
 868edf4:	8b 40 04             	mov    0x4(%eax),%eax
 868edf7:	8d 04 06             	lea    (%esi,%eax,1),%eax
 868edfa:	89 83 a9 12 00 00    	mov    %eax,0x12a9(%ebx)
 868ee00:	eb 07                	jmp    868ee09 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ad>
 868ee02:	90                   	nop
 868ee03:	eb 04                	jmp    868ee09 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ad>
 868ee05:	90                   	nop
 868ee06:	eb 01                	jmp    868ee09 <_ZN15CUserCharacInfo15checkBonusPointEv+0x1ad>
 868ee08:	90                   	nop
 868ee09:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 868ee0d:	83 7d ec 15          	cmpl   $0x15,-0x14(%ebp)
 868ee11:	0f 9e c0             	setle  %al
 868ee14:	84 c0                	test   %al,%al
 868ee16:	0f 85 74 fe ff ff    	jne    868ec90 <_ZN15CUserCharacInfo15checkBonusPointEv+0x34>
 868ee1c:	eb 01                	jmp    868ee1f <_ZN15CUserCharacInfo15checkBonusPointEv+0x1c3>
 868ee1e:	90                   	nop
 868ee1f:	83 c4 20             	add    $0x20,%esp
 868ee22:	5b                   	pop    %ebx
 868ee23:	5e                   	pop    %esi
 868ee24:	5d                   	pop    %ebp
 868ee25:	c3                   	ret

```

```c
// CUserCharacInfo::checkBonusPoint @ 0x868ec5c

/* CUserCharacInfo::checkBonusPoint() */

void __thiscall CUserCharacInfo::checkBonusPoint(CUserCharacInfo *this)

{
  int iVar1;
  CInventory *this_00;
  int iVar2;
  CDataManager *this_01;
  CEquipItem *this_02;
  int *piVar3;
  int iVar4;
  int local_18;
  
  if (*(int *)(this + 0x10) != 0) {
    resetBonusPoint(this);
    for (local_18 = 10; local_18 < 0x16; local_18 = local_18 + 1) {
      this_00 = (CInventory *)getCurCharacInvenR(this);
      iVar2 = CInventory::GetInvenRef(this_00,0,local_18);
      if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) {
        iVar2 = *(int *)(iVar2 + 2);
        this_01 = (CDataManager *)G_CDataManager();
        this_02 = (CEquipItem *)CDataManager::find_item(this_01,iVar2);
        if (this_02 != (CEquipItem *)0x0) {
          piVar3 = (int *)CEquipItem::getWpBonusPoint(this_02);
          if (*piVar3 == 0) {
            iVar2 = *(int *)(this + 0x10);
            iVar1 = *(int *)(*(int *)(this + 0x10) + 0x129d);
            iVar4 = CEquipItem::getWpBonusPoint(this_02);
            *(int *)(iVar2 + 0x129d) = iVar1 + *(int *)(iVar4 + 4);
          }
          else {
            piVar3 = (int *)CEquipItem::getWpBonusPoint(this_02);
            if (*piVar3 == 1) {
              iVar2 = *(int *)(this + 0x10);
              iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a1);
              iVar4 = CEquipItem::getWpBonusPoint(this_02);
              *(int *)(iVar2 + 0x12a1) = iVar1 + *(int *)(iVar4 + 4);
            }
          }
          piVar3 = (int *)CEquipItem::getExpBonusPoint(this_02);
          if (*piVar3 == 0) {
            iVar2 = *(int *)(this + 0x10);
            iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a5);
            iVar4 = CEquipItem::getExpBonusPoint(this_02);
            *(int *)(iVar2 + 0x12a5) = iVar1 + *(int *)(iVar4 + 4);
          }
          else {
            piVar3 = (int *)CEquipItem::getExpBonusPoint(this_02);
            if (*piVar3 == 1) {
              iVar2 = *(int *)(this + 0x10);
              iVar1 = *(int *)(*(int *)(this + 0x10) + 0x12a9);
              iVar4 = CEquipItem::getExpBonusPoint(this_02);
              *(int *)(iVar2 + 0x12a9) = iVar1 + *(int *)(iVar4 + 4);
            }
          }
        }
      }
    }
  }
  return;
}

```

---

## getBlueMarbleEnterCount

```asm
// === 08690f42 CUserCharacInfo::getBlueMarbleEnterCount  [0x08690f42-0x8690f65] ===
 8690f42:	55                   	push   %ebp
 8690f43:	89 e5                	mov    %esp,%ebp
 8690f45:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f48:	8b 40 10             	mov    0x10(%eax),%eax
 8690f4b:	85 c0                	test   %eax,%eax
 8690f4d:	74 0f                	je     8690f5e <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv+0x1c>
 8690f4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f52:	8b 40 10             	mov    0x10(%eax),%eax
 8690f55:	0f b6 80 bd 14 00 00 	movzbl 0x14bd(%eax),%eax
 8690f5c:	eb 05                	jmp    8690f63 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv+0x21>
 8690f5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8690f63:	5d                   	pop    %ebp
 8690f64:	c3                   	ret
 8690f65:	90                   	nop

```

```c
// CUserCharacInfo::getBlueMarbleEnterCount @ 0x8690f42

/* CUserCharacInfo::getBlueMarbleEnterCount() const */

undefined1 __thiscall CUserCharacInfo::getBlueMarbleEnterCount(CUserCharacInfo *this)

{
  undefined1 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x10) + 0x14bd);
  }
  return uVar1;
}

```

---

## getBlueMarbleUserDeadCount

```asm
// === 08690faa CUserCharacInfo::getBlueMarbleUserDeadCount  [0x08690faa-0x8690fcb] ===
 8690faa:	55                   	push   %ebp
 8690fab:	89 e5                	mov    %esp,%ebp
 8690fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8690fb0:	8b 40 10             	mov    0x10(%eax),%eax
 8690fb3:	85 c0                	test   %eax,%eax
 8690fb5:	74 0e                	je     8690fc5 <_ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv+0x1b>
 8690fb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8690fba:	8b 40 10             	mov    0x10(%eax),%eax
 8690fbd:	8b 80 be 14 00 00    	mov    0x14be(%eax),%eax
 8690fc3:	eb 05                	jmp    8690fca <_ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv+0x20>
 8690fc5:	b8 00 00 00 00       	mov    $0x0,%eax
 8690fca:	5d                   	pop    %ebp
 8690fcb:	c3                   	ret

```

```c
// CUserCharacInfo::getBlueMarbleUserDeadCount @ 0x8690faa

/* CUserCharacInfo::getBlueMarbleUserDeadCount() const */

undefined4 __thiscall CUserCharacInfo::getBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x14be);
  }
  return uVar1;
}

```

---

## getCurCharacEscaladeTutorialFlag

```asm
// === 0864751e CUserCharacInfo::getCurCharacEscaladeTutorialFlag  [0x0864751e-0x86475d7] ===
 864751e:	55                   	push   %ebp
 864751f:	89 e5                	mov    %esp,%ebp
 8647521:	56                   	push   %esi
 8647522:	53                   	push   %ebx
 8647523:	83 ec 10             	sub    $0x10,%esp
 8647526:	8b 45 08             	mov    0x8(%ebp),%eax
 8647529:	8b 40 10             	mov    0x10(%eax),%eax
 864752c:	85 c0                	test   %eax,%eax
 864752e:	0f 84 98 00 00 00    	je     86475cc <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xae>
 8647534:	83 7d 0c 1f          	cmpl   $0x1f,0xc(%ebp)
 8647538:	77 26                	ja     8647560 <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0x42>
 864753a:	8b 45 08             	mov    0x8(%ebp),%eax
 864753d:	8b 40 10             	mov    0x10(%eax),%eax
 8647540:	8b 50 51             	mov    0x51(%eax),%edx
 8647543:	8b 45 0c             	mov    0xc(%ebp),%eax
 8647546:	bb 01 00 00 00       	mov    $0x1,%ebx
 864754b:	89 de                	mov    %ebx,%esi
 864754d:	89 c1                	mov    %eax,%ecx
 864754f:	d3 e6                	shl    %cl,%esi
 8647551:	89 f0                	mov    %esi,%eax
 8647553:	21 d0                	and    %edx,%eax
 8647555:	85 c0                	test   %eax,%eax
 8647557:	74 73                	je     86475cc <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xae>
 8647559:	b8 01 00 00 00       	mov    $0x1,%eax
 864755e:	eb 71                	jmp    86475d1 <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xb3>
 8647560:	83 7d 0c 7f          	cmpl   $0x7f,0xc(%ebp)
 8647564:	77 66                	ja     86475cc <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xae>
 8647566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8647569:	83 e8 20             	sub    $0x20,%eax
 864756c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 864756f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8647572:	89 c2                	mov    %eax,%edx
 8647574:	c1 fa 1f             	sar    $0x1f,%edx
 8647577:	c1 ea 1d             	shr    $0x1d,%edx
 864757a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 864757d:	c1 f8 03             	sar    $0x3,%eax
 8647580:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8647583:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8647586:	89 c2                	mov    %eax,%edx
 8647588:	c1 fa 1f             	sar    $0x1f,%edx
 864758b:	c1 ea 1d             	shr    $0x1d,%edx
 864758e:	01 d0                	add    %edx,%eax
 8647590:	83 e0 07             	and    $0x7,%eax
 8647593:	29 d0                	sub    %edx,%eax
 8647595:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8647598:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 864759c:	78 06                	js     86475a4 <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0x86>
 864759e:	83 7d f0 0f          	cmpl   $0xf,-0x10(%ebp)
 86475a2:	7e 07                	jle    86475ab <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0x8d>
 86475a4:	b8 00 00 00 00       	mov    $0x0,%eax
 86475a9:	eb 26                	jmp    86475d1 <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xb3>
 86475ab:	8b 45 08             	mov    0x8(%ebp),%eax
 86475ae:	8b 50 10             	mov    0x10(%eax),%edx
 86475b1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86475b4:	0f b6 44 02 55       	movzbl 0x55(%edx,%eax,1),%eax
 86475b9:	0f be d0             	movsbl %al,%edx
 86475bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86475bf:	89 d3                	mov    %edx,%ebx
 86475c1:	89 c1                	mov    %eax,%ecx
 86475c3:	d3 fb                	sar    %cl,%ebx
 86475c5:	89 d8                	mov    %ebx,%eax
 86475c7:	83 e0 01             	and    $0x1,%eax
 86475ca:	eb 05                	jmp    86475d1 <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj+0xb3>
 86475cc:	b8 00 00 00 00       	mov    $0x0,%eax
 86475d1:	83 c4 10             	add    $0x10,%esp
 86475d4:	5b                   	pop    %ebx
 86475d5:	5e                   	pop    %esi
 86475d6:	5d                   	pop    %ebp
 86475d7:	c3                   	ret

```

```c
// CUserCharacInfo::getCurCharacEscaladeTutorialFlag @ 0x864751e

/* CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int) */

uint __thiscall
CUserCharacInfo::getCurCharacEscaladeTutorialFlag(CUserCharacInfo *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) != 0) {
    if (param_1 < 0x20) {
      if ((1 << ((byte)param_1 & 0x1f) & *(uint *)(*(int *)(this + 0x10) + 0x51)) != 0) {
        return 1;
      }
    }
    else if (param_1 < 0x80) {
      iVar1 = param_1 - 0x20;
      iVar2 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
      if ((-1 < iVar2) && (iVar2 < 0x10)) {
        return (int)*(char *)(*(int *)(this + 0x10) + 0x55 + iVar2) >> ((byte)(iVar1 % 8) & 0x1f) &
               1;
      }
      return 0;
    }
  }
  return 0;
}

```

---

## getCurCharacVill

```asm
// === 08645564 CUserCharacInfo::getCurCharacVill  [0x08645564-0x86455bb] ===
 8645564:	55                   	push   %ebp
 8645565:	89 e5                	mov    %esp,%ebp
 8645567:	83 ec 18             	sub    $0x18,%esp
 864556a:	8b 45 08             	mov    0x8(%ebp),%eax
 864556d:	8b 40 10             	mov    0x10(%eax),%eax
 8645570:	85 c0                	test   %eax,%eax
 8645572:	75 07                	jne    864557b <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x17>
 8645574:	b8 00 00 00 00       	mov    $0x0,%eax
 8645579:	eb 3f                	jmp    86455ba <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x56>
 864557b:	e8 27 4e a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8645580:	89 04 24             	mov    %eax,(%esp)
 8645583:	e8 32 22 05 00       	call   86977ba <_ZNK9GameWorld22IsPvPVillageMapChannelEv>
 8645588:	84 c0                	test   %al,%al
 864558a:	74 07                	je     8645593 <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x2f>
 864558c:	b8 0a 00 00 00       	mov    $0xa,%eax
 8645591:	eb 27                	jmp    86455ba <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x56>
 8645593:	e8 0f 4e a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8645598:	89 04 24             	mov    %eax,(%esp)
 864559b:	e8 48 cf af ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 86455a0:	84 c0                	test   %al,%al
 86455a2:	74 0c                	je     86455b0 <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x4c>
 86455a4:	8b 45 08             	mov    0x8(%ebp),%eax
 86455a7:	8b 40 10             	mov    0x10(%eax),%eax
 86455aa:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 86455ae:	eb 0a                	jmp    86455ba <_ZNK15CUserCharacInfo16getCurCharacVillEv+0x56>
 86455b0:	8b 45 08             	mov    0x8(%ebp),%eax
 86455b3:	8b 40 10             	mov    0x10(%eax),%eax
 86455b6:	0f b6 40 22          	movzbl 0x22(%eax),%eax
 86455ba:	c9                   	leave
 86455bb:	c3                   	ret

```

```c
// CUserCharacInfo::getCurCharacVill @ 0x8645564

/* CUserCharacInfo::getCurCharacVill() const */

undefined1 __thiscall CUserCharacInfo::getCurCharacVill(CUserCharacInfo *this)

{
  char cVar1;
  undefined1 uVar2;
  GameWorld *pGVar3;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPvPVillageMapChannel(pGVar3);
    if (cVar1 == '\0') {
      pGVar3 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPVPChannel(pGVar3);
      if (cVar1 == '\0') {
        uVar2 = *(undefined1 *)(*(int *)(this + 0x10) + 0x22);
      }
      else {
        uVar2 = *(undefined1 *)(*(int *)(this + 0x10) + 0x23);
      }
    }
    else {
      uVar2 = 10;
    }
  }
  return uVar2;
}

```

---

## getExpBonusPoint

```asm
// === 0868ee50 CUserCharacInfo::getExpBonusPoint  [0x0868ee50-0x868ee79] ===
 868ee50:	55                   	push   %ebp
 868ee51:	89 e5                	mov    %esp,%ebp
 868ee53:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee56:	8b 40 10             	mov    0x10(%eax),%eax
 868ee59:	85 c0                	test   %eax,%eax
 868ee5b:	74 1a                	je     868ee77 <_ZN15CUserCharacInfo16getExpBonusPointER19ExpBonusPointResult+0x27>
 868ee5d:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee60:	8b 40 10             	mov    0x10(%eax),%eax
 868ee63:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 868ee66:	8b 90 a9 12 00 00    	mov    0x12a9(%eax),%edx
 868ee6c:	8b 80 a5 12 00 00    	mov    0x12a5(%eax),%eax
 868ee72:	89 01                	mov    %eax,(%ecx)
 868ee74:	89 51 04             	mov    %edx,0x4(%ecx)
 868ee77:	5d                   	pop    %ebp
 868ee78:	c3                   	ret
 868ee79:	90                   	nop

```

```c
// CUserCharacInfo::getExpBonusPoint @ 0x868ee50

/* CUserCharacInfo::getExpBonusPoint(ExpBonusPointResult&) */

void __thiscall
CUserCharacInfo::getExpBonusPoint(CUserCharacInfo *this,ExpBonusPointResult *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a9);
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a5);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}

```

---

## getPremiumBonusExp

```asm
// === 0868e262 CUserCharacInfo::getPremiumBonusExp  [0x0868e262-0x868e283] ===
 868e262:	55                   	push   %ebp
 868e263:	89 e5                	mov    %esp,%ebp
 868e265:	8b 45 08             	mov    0x8(%ebp),%eax
 868e268:	8b 40 10             	mov    0x10(%eax),%eax
 868e26b:	85 c0                	test   %eax,%eax
 868e26d:	74 0e                	je     868e27d <_ZNK15CUserCharacInfo18getPremiumBonusExpEv+0x1b>
 868e26f:	8b 45 08             	mov    0x8(%ebp),%eax
 868e272:	8b 40 10             	mov    0x10(%eax),%eax
 868e275:	8b 80 8d 12 00 00    	mov    0x128d(%eax),%eax
 868e27b:	eb 05                	jmp    868e282 <_ZNK15CUserCharacInfo18getPremiumBonusExpEv+0x20>
 868e27d:	b8 00 00 00 00       	mov    $0x0,%eax
 868e282:	5d                   	pop    %ebp
 868e283:	c3                   	ret

```

```c
// CUserCharacInfo::getPremiumBonusExp @ 0x868e262

/* CUserCharacInfo::getPremiumBonusExp() const */

undefined4 __thiscall CUserCharacInfo::getPremiumBonusExp(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x128d);
  }
  return uVar1;
}

```

---

## getSeparatedTextUnits

```asm
// === 0864607e CUserCharacInfo::getSeparatedTextUnits  [0x0864607e-0x864628d] ===
 864607e:	55                   	push   %ebp
 864607f:	89 e5                	mov    %esp,%ebp
 8646081:	57                   	push   %edi
 8646082:	56                   	push   %esi
 8646083:	53                   	push   %ebx
 8646084:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 864608a:	8b 45 0c             	mov    0xc(%ebp),%eax
 864608d:	89 04 24             	mov    %eax,(%esp)
 8646090:	e8 33 b6 cf ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 8646095:	8d 9d cc fe ff ff    	lea    -0x134(%ebp),%ebx
 864609b:	b8 00 00 00 00       	mov    $0x0,%eax
 86460a0:	ba 40 00 00 00       	mov    $0x40,%edx
 86460a5:	89 df                	mov    %ebx,%edi
 86460a7:	89 d1                	mov    %edx,%ecx
 86460a9:	f3 ab                	rep stos %eax,%es:(%edi)
 86460ab:	c7 45 dc 06 00 00 00 	movl   $0x6,-0x24(%ebp)
 86460b2:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86460b6:	74 1c                	je     86460d4 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x56>
 86460b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86460bb:	89 04 24             	mov    %eax,(%esp)
 86460be:	e8 cd 19 bf ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 86460c3:	8b 55 18             	mov    0x18(%ebp),%edx
 86460c6:	83 ea 01             	sub    $0x1,%edx
 86460c9:	39 d0                	cmp    %edx,%eax
 86460cb:	7c 07                	jl     86460d4 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x56>
 86460cd:	b8 01 00 00 00       	mov    $0x1,%eax
 86460d2:	eb 05                	jmp    86460d9 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x5b>
 86460d4:	b8 00 00 00 00       	mov    $0x0,%eax
 86460d9:	84 c0                	test   %al,%al
 86460db:	0f 85 0a 01 00 00    	jne    86461eb <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x16d>
 86460e1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86460e4:	03 45 10             	add    0x10(%ebp),%eax
 86460e7:	8b 55 14             	mov    0x14(%ebp),%edx
 86460ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 86460ee:	89 04 24             	mov    %eax,(%esp)
 86460f1:	e8 ca 79 a3 ff       	call   807dac0 <strstr@plt>
 86460f6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86460f9:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86460fd:	0f 84 eb 00 00 00    	je     86461ee <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x170>
 8646103:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8646106:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8646109:	03 45 10             	add    0x10(%ebp),%eax
 864610c:	89 d1                	mov    %edx,%ecx
 864610e:	29 c1                	sub    %eax,%ecx
 8646110:	89 c8                	mov    %ecx,%eax
 8646112:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8646115:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8646119:	0f 84 ad 00 00 00    	je     86461cc <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x14e>
 864611f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8646122:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8646125:	03 45 10             	add    0x10(%ebp),%eax
 8646128:	89 54 24 08          	mov    %edx,0x8(%esp)
 864612c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8646130:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8646136:	89 04 24             	mov    %eax,(%esp)
 8646139:	e8 92 77 a3 ff       	call   807d8d0 <strncpy@plt>
 864613e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8646141:	c6 84 05 cc fe ff ff 	movb   $0x0,-0x134(%ebp,%eax,1)
 8646148:	00 
 8646149:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 864614c:	89 04 24             	mov    %eax,(%esp)
 864614f:	e8 7c 9f 09 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8646154:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8646157:	89 44 24 08          	mov    %eax,0x8(%esp)
 864615b:	8d 85 cc fe ff ff    	lea    -0x134(%ebp),%eax
 8646161:	89 44 24 04          	mov    %eax,0x4(%esp)
 8646165:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8646168:	89 04 24             	mov    %eax,(%esp)
 864616b:	e8 c0 14 0c 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8646170:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8646173:	89 44 24 04          	mov    %eax,0x4(%esp)
 8646177:	8b 45 0c             	mov    0xc(%ebp),%eax
 864617a:	89 04 24             	mov    %eax,(%esp)
 864617d:	e8 2a 19 bf ff       	call   8237aac <_ZNSt6vectorISsSaISsEE9push_backEOSs>
 8646182:	eb 15                	jmp    8646199 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x11b>
 8646184:	89 d3                	mov    %edx,%ebx
 8646186:	89 c6                	mov    %eax,%esi
 8646188:	8d 45 cc             	lea    -0x34(%ebp),%eax
 864618b:	89 04 24             	mov    %eax,(%esp)
 864618e:	e8 4d 1a 0c 00       	call   8707be0 <_ZNSsD1Ev>
 8646193:	89 f0                	mov    %esi,%eax
 8646195:	89 da                	mov    %ebx,%edx
 8646197:	eb 0d                	jmp    86461a6 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x128>
 8646199:	8d 45 cc             	lea    -0x34(%ebp),%eax
 864619c:	89 04 24             	mov    %eax,(%esp)
 864619f:	e8 3c 1a 0c 00       	call   8707be0 <_ZNSsD1Ev>
 86461a4:	eb 1b                	jmp    86461c1 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x143>
 86461a6:	89 d3                	mov    %edx,%ebx
 86461a8:	89 c6                	mov    %eax,%esi
 86461aa:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86461ad:	89 04 24             	mov    %eax,(%esp)
 86461b0:	e8 3b 9f 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86461b5:	89 f0                	mov    %esi,%eax
 86461b7:	89 da                	mov    %ebx,%edx
 86461b9:	89 04 24             	mov    %eax,(%esp)
 86461bc:	e8 8f d5 49 00       	call   8ae3750 <_Unwind_Resume>
 86461c1:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 86461c4:	89 04 24             	mov    %eax,(%esp)
 86461c7:	e8 24 9f 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 86461cc:	8b 45 14             	mov    0x14(%ebp),%eax
 86461cf:	89 04 24             	mov    %eax,(%esp)
 86461d2:	e8 d9 81 a3 ff       	call   807e3b0 <strlen@plt>
 86461d7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86461da:	8d 14 10             	lea    (%eax,%edx,1),%edx
 86461dd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86461e0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86461e3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86461e6:	e9 c7 fe ff ff       	jmp    86460b2 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x34>
 86461eb:	90                   	nop
 86461ec:	eb 01                	jmp    86461ef <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x171>
 86461ee:	90                   	nop
 86461ef:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86461f2:	03 45 10             	add    0x10(%ebp),%eax
 86461f5:	0f b6 00             	movzbl (%eax),%eax
 86461f8:	84 c0                	test   %al,%al
 86461fa:	0f 84 83 00 00 00    	je     8646283 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x205>
 8646200:	8d 45 db             	lea    -0x25(%ebp),%eax
 8646203:	89 04 24             	mov    %eax,(%esp)
 8646206:	e8 c5 9e 09 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 864620b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 864620e:	03 45 10             	add    0x10(%ebp),%eax
 8646211:	8d 55 db             	lea    -0x25(%ebp),%edx
 8646214:	89 54 24 08          	mov    %edx,0x8(%esp)
 8646218:	89 44 24 04          	mov    %eax,0x4(%esp)
 864621c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864621f:	89 04 24             	mov    %eax,(%esp)
 8646222:	e8 09 14 0c 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8646227:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 864622a:	89 44 24 04          	mov    %eax,0x4(%esp)
 864622e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8646231:	89 04 24             	mov    %eax,(%esp)
 8646234:	e8 73 18 bf ff       	call   8237aac <_ZNSt6vectorISsSaISsEE9push_backEOSs>
 8646239:	eb 15                	jmp    8646250 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x1d2>
 864623b:	89 d3                	mov    %edx,%ebx
 864623d:	89 c6                	mov    %eax,%esi
 864623f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8646242:	89 04 24             	mov    %eax,(%esp)
 8646245:	e8 96 19 0c 00       	call   8707be0 <_ZNSsD1Ev>
 864624a:	89 f0                	mov    %esi,%eax
 864624c:	89 da                	mov    %ebx,%edx
 864624e:	eb 0d                	jmp    864625d <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x1df>
 8646250:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8646253:	89 04 24             	mov    %eax,(%esp)
 8646256:	e8 85 19 0c 00       	call   8707be0 <_ZNSsD1Ev>
 864625b:	eb 1b                	jmp    8646278 <_ZN15CUserCharacInfo21getSeparatedTextUnitsERSt6vectorISsSaISsEEPKcS5_i+0x1fa>
 864625d:	89 d3                	mov    %edx,%ebx
 864625f:	89 c6                	mov    %eax,%esi
 8646261:	8d 45 db             	lea    -0x25(%ebp),%eax
 8646264:	89 04 24             	mov    %eax,(%esp)
 8646267:	e8 84 9e 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 864626c:	89 f0                	mov    %esi,%eax
 864626e:	89 da                	mov    %ebx,%edx
 8646270:	89 04 24             	mov    %eax,(%esp)
 8646273:	e8 d8 d4 49 00       	call   8ae3750 <_Unwind_Resume>
 8646278:	8d 45 db             	lea    -0x25(%ebp),%eax
 864627b:	89 04 24             	mov    %eax,(%esp)
 864627e:	e8 6d 9e 09 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8646283:	81 c4 3c 01 00 00    	add    $0x13c,%esp
 8646289:	5b                   	pop    %ebx
 864628a:	5e                   	pop    %esi
 864628b:	5f                   	pop    %edi
 864628c:	5d                   	pop    %ebp
 864628d:	c3                   	ret

```

```c
// CUserCharacInfo::getSeparatedTextUnits @ 0x864607e

/* CUserCharacInfo::getSeparatedTextUnits(std::vector<std::string, std::allocator<std::string > >&,
   char const*, char const*, int) */

void __thiscall
CUserCharacInfo::getSeparatedTextUnits
          (CUserCharacInfo *this,vector *param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_138 [256];
  string local_38;
  allocator<char> local_31;
  string local_30;
  allocator<char> local_29;
  int local_28;
  char *local_24;
  size_t local_20;
  
  bVar5 = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)param_1);
  pcVar4 = local_138;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  local_28 = 6;
  while( true ) {
    if ((param_4 == 0) ||
       (iVar3 = std::vector<std::string,std::allocator<std::string>>::size
                          ((vector<std::string,std::allocator<std::string>> *)param_1),
       iVar3 < param_4 + -1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) || (local_24 = strstr(param_2 + local_28,param_3), local_24 == (char *)0x0)) break;
    local_20 = (int)local_24 - (int)(param_2 + local_28);
    if (local_20 != 0) {
      strncpy(local_138,param_2 + local_28,local_20);
      local_138[local_20] = '\0';
      std::allocator<char>::allocator();
                    /* try { // try from 0864616b to 0864616f has its CatchHandler @ 086461a6 */
      std::string::string((string *)&local_38,local_138,(allocator *)&local_31);
                    /* try { // try from 0864617d to 08646181 has its CatchHandler @ 08646184 */
      std::vector<std::string,std::allocator<std::string>>::push_back
                ((vector<std::string,std::allocator<std::string>> *)param_1,&local_38);
                    /* try { // try from 0864619f to 086461a3 has its CatchHandler @ 086461a6 */
      std::string::~string((string *)&local_38);
      std::allocator<char>::~allocator(&local_31);
    }
    sVar2 = strlen(param_3);
    local_28 = sVar2 + local_20 + local_28;
  }
  if (param_2[local_28] != '\0') {
    std::allocator<char>::allocator();
                    /* try { // try from 08646222 to 08646226 has its CatchHandler @ 0864625d */
    std::string::string((string *)&local_30,param_2 + local_28,(allocator *)&local_29);
                    /* try { // try from 08646234 to 08646238 has its CatchHandler @ 0864623b */
    std::vector<std::string,std::allocator<std::string>>::push_back
              ((vector<std::string,std::allocator<std::string>> *)param_1,&local_30);
                    /* try { // try from 08646256 to 0864625a has its CatchHandler @ 0864625d */
    std::string::~string((string *)&local_30);
    std::allocator<char>::~allocator(&local_29);
  }
  return;
}

```

---

## getWeekendBonusExp

```asm
// === 0868e328 CUserCharacInfo::getWeekendBonusExp  [0x0868e328-0x868e349] ===
 868e328:	55                   	push   %ebp
 868e329:	89 e5                	mov    %esp,%ebp
 868e32b:	8b 45 08             	mov    0x8(%ebp),%eax
 868e32e:	8b 40 10             	mov    0x10(%eax),%eax
 868e331:	85 c0                	test   %eax,%eax
 868e333:	74 0e                	je     868e343 <_ZN15CUserCharacInfo18getWeekendBonusExpEv+0x1b>
 868e335:	8b 45 08             	mov    0x8(%ebp),%eax
 868e338:	8b 40 10             	mov    0x10(%eax),%eax
 868e33b:	8b 80 91 12 00 00    	mov    0x1291(%eax),%eax
 868e341:	eb 05                	jmp    868e348 <_ZN15CUserCharacInfo18getWeekendBonusExpEv+0x20>
 868e343:	b8 00 00 00 00       	mov    $0x0,%eax
 868e348:	5d                   	pop    %ebp
 868e349:	c3                   	ret

```

```c
// CUserCharacInfo::getWeekendBonusExp @ 0x868e328

/* CUserCharacInfo::getWeekendBonusExp() */

undefined4 __thiscall CUserCharacInfo::getWeekendBonusExp(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x1291);
  }
  return uVar1;
}

```

---

## getWpBonusPoint

```asm
// === 0868ee26 CUserCharacInfo::getWpBonusPoint  [0x0868ee26-0x868ee4f] ===
 868ee26:	55                   	push   %ebp
 868ee27:	89 e5                	mov    %esp,%ebp
 868ee29:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee2c:	8b 40 10             	mov    0x10(%eax),%eax
 868ee2f:	85 c0                	test   %eax,%eax
 868ee31:	74 1a                	je     868ee4d <_ZN15CUserCharacInfo15getWpBonusPointER18WpBonusPointResult+0x27>
 868ee33:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee36:	8b 40 10             	mov    0x10(%eax),%eax
 868ee39:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 868ee3c:	8b 90 a1 12 00 00    	mov    0x12a1(%eax),%edx
 868ee42:	8b 80 9d 12 00 00    	mov    0x129d(%eax),%eax
 868ee48:	89 01                	mov    %eax,(%ecx)
 868ee4a:	89 51 04             	mov    %edx,0x4(%ecx)
 868ee4d:	5d                   	pop    %ebp
 868ee4e:	c3                   	ret
 868ee4f:	90                   	nop

```

```c
// CUserCharacInfo::getWpBonusPoint @ 0x868ee26

/* CUserCharacInfo::getWpBonusPoint(WpBonusPointResult&) */

void __thiscall CUserCharacInfo::getWpBonusPoint(CUserCharacInfo *this,WpBonusPointResult *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x12a1);
    *(undefined4 *)param_1 = *(undefined4 *)(*(int *)(this + 0x10) + 0x129d);
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}

```

---

## get_charac_level_before_dungeon

```asm
// === 08645d52 CUserCharacInfo::get_charac_level_before_dungeon  [0x08645d52-0x8645d95] ===
 8645d52:	55                   	push   %ebp
 8645d53:	89 e5                	mov    %esp,%ebp
 8645d55:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d58:	8b 40 10             	mov    0x10(%eax),%eax
 8645d5b:	85 c0                	test   %eax,%eax
 8645d5d:	74 2f                	je     8645d8e <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv+0x3c>
 8645d5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d62:	8b 40 10             	mov    0x10(%eax),%eax
 8645d65:	0f b7 80 fc 0d 00 00 	movzwl 0xdfc(%eax),%eax
 8645d6c:	66 85 c0             	test   %ax,%ax
 8645d6f:	74 10                	je     8645d81 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv+0x2f>
 8645d71:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d74:	8b 40 10             	mov    0x10(%eax),%eax
 8645d77:	0f b7 80 fc 0d 00 00 	movzwl 0xdfc(%eax),%eax
 8645d7e:	98                   	cwtl
 8645d7f:	eb 12                	jmp    8645d93 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv+0x41>
 8645d81:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d84:	8b 40 10             	mov    0x10(%eax),%eax
 8645d87:	0f b7 40 27          	movzwl 0x27(%eax),%eax
 8645d8b:	98                   	cwtl
 8645d8c:	eb 05                	jmp    8645d93 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv+0x41>
 8645d8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8645d93:	5d                   	pop    %ebp
 8645d94:	c3                   	ret
 8645d95:	90                   	nop

```

```c
// CUserCharacInfo::get_charac_level_before_dungeon @ 0x8645d52

/* CUserCharacInfo::get_charac_level_before_dungeon() const */

int __thiscall CUserCharacInfo::get_charac_level_before_dungeon(CUserCharacInfo *this)

{
  int iVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    iVar1 = 0;
  }
  else if (*(short *)(*(int *)(this + 0x10) + 0xdfc) == 0) {
    iVar1 = (int)*(short *)(*(int *)(this + 0x10) + 0x27);
  }
  else {
    iVar1 = (int)*(short *)(*(int *)(this + 0x10) + 0xdfc);
  }
  return iVar1;
}

```

---

## get_charac_visible_grow_avatar

```asm
// === 0868beb4 CUserCharacInfo::get_charac_visible_grow_avatar  [0x0868beb4-0x868bee3] ===
 868beb4:	55                   	push   %ebp
 868beb5:	89 e5                	mov    %esp,%ebp
 868beb7:	8b 45 08             	mov    0x8(%ebp),%eax
 868beba:	8b 40 10             	mov    0x10(%eax),%eax
 868bebd:	85 c0                	test   %eax,%eax
 868bebf:	74 1b                	je     868bedc <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv+0x28>
 868bec1:	8b 45 08             	mov    0x8(%ebp),%eax
 868bec4:	8b 40 10             	mov    0x10(%eax),%eax
 868bec7:	0f b6 80 40 0e 00 00 	movzbl 0xe40(%eax),%eax
 868bece:	83 e0 02             	and    $0x2,%eax
 868bed1:	84 c0                	test   %al,%al
 868bed3:	74 07                	je     868bedc <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv+0x28>
 868bed5:	b8 01 00 00 00       	mov    $0x1,%eax
 868beda:	eb 05                	jmp    868bee1 <_ZN15CUserCharacInfo30get_charac_visible_grow_avatarEv+0x2d>
 868bedc:	b8 00 00 00 00       	mov    $0x0,%eax
 868bee1:	5d                   	pop    %ebp
 868bee2:	c3                   	ret
 868bee3:	90                   	nop

```

```c
// CUserCharacInfo::get_charac_visible_grow_avatar @ 0x868beb4

/* CUserCharacInfo::get_charac_visible_grow_avatar() */

undefined4 __thiscall CUserCharacInfo::get_charac_visible_grow_avatar(CUserCharacInfo *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x10) == 0) || ((*(byte *)(*(int *)(this + 0x10) + 0xe40) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## get_charac_visible_values

```asm
// === 0868bde4 CUserCharacInfo::get_charac_visible_values  [0x0868bde4-0x868be07] ===
 868bde4:	55                   	push   %ebp
 868bde5:	89 e5                	mov    %esp,%ebp
 868bde7:	8b 45 08             	mov    0x8(%ebp),%eax
 868bdea:	8b 40 10             	mov    0x10(%eax),%eax
 868bded:	85 c0                	test   %eax,%eax
 868bdef:	74 0f                	je     868be00 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv+0x1c>
 868bdf1:	8b 45 08             	mov    0x8(%ebp),%eax
 868bdf4:	8b 40 10             	mov    0x10(%eax),%eax
 868bdf7:	0f b6 80 40 0e 00 00 	movzbl 0xe40(%eax),%eax
 868bdfe:	eb 05                	jmp    868be05 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv+0x21>
 868be00:	b8 00 00 00 00       	mov    $0x0,%eax
 868be05:	5d                   	pop    %ebp
 868be06:	c3                   	ret
 868be07:	90                   	nop

```

```c
// CUserCharacInfo::get_charac_visible_values @ 0x868bde4

/* CUserCharacInfo::get_charac_visible_values() */

undefined1 __thiscall CUserCharacInfo::get_charac_visible_values(CUserCharacInfo *this)

{
  undefined1 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x10) + 0xe40);
  }
  return uVar1;
}

```

---

## get_level_up_exp

```asm
// === 0864e3ba CUserCharacInfo::get_level_up_exp  [0x0864e3ba-0x864e3f9] ===
 864e3ba:	55                   	push   %ebp
 864e3bb:	89 e5                	mov    %esp,%ebp
 864e3bd:	53                   	push   %ebx
 864e3be:	83 ec 14             	sub    $0x14,%esp
 864e3c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 864e3c4:	8d 58 01             	lea    0x1(%eax),%ebx
 864e3c7:	e8 cf dd a7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 864e3cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 864e3d0:	89 04 24             	mov    %eax,(%esp)
 864e3d3:	e8 6a 20 d1 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 864e3d8:	89 c3                	mov    %eax,%ebx
 864e3da:	e8 bc dd a7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 864e3df:	8b 55 0c             	mov    0xc(%ebp),%edx
 864e3e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 864e3e6:	89 04 24             	mov    %eax,(%esp)
 864e3e9:	e8 54 20 d1 ff       	call   8360442 <_ZNK12CDataManager13get_level_expEi>
 864e3ee:	89 da                	mov    %ebx,%edx
 864e3f0:	29 c2                	sub    %eax,%edx
 864e3f2:	89 d0                	mov    %edx,%eax
 864e3f4:	83 c4 14             	add    $0x14,%esp
 864e3f7:	5b                   	pop    %ebx
 864e3f8:	5d                   	pop    %ebp
 864e3f9:	c3                   	ret

```

```c
// CUserCharacInfo::get_level_up_exp @ 0x864e3ba

/* CUserCharacInfo::get_level_up_exp(int) */

int __thiscall CUserCharacInfo::get_level_up_exp(CUserCharacInfo *this,int param_1)

{
  CDataManager *pCVar1;
  int iVar2;
  int iVar3;
  
  pCVar1 = (CDataManager *)G_CDataManager();
  iVar2 = CDataManager::get_level_exp(pCVar1,param_1 + 1);
  pCVar1 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::get_level_exp(pCVar1,param_1);
  return iVar2 - iVar3;
}

```

---

## increaseBlueMarbleEnterCount

```asm
// === 08690f1c CUserCharacInfo::increaseBlueMarbleEnterCount  [0x08690f1c-0x8690f41] ===
 8690f1c:	55                   	push   %ebp
 8690f1d:	89 e5                	mov    %esp,%ebp
 8690f1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f22:	8b 40 10             	mov    0x10(%eax),%eax
 8690f25:	85 c0                	test   %eax,%eax
 8690f27:	74 16                	je     8690f3f <_ZN15CUserCharacInfo28increaseBlueMarbleEnterCountEv+0x23>
 8690f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f2c:	8b 40 10             	mov    0x10(%eax),%eax
 8690f2f:	0f b6 90 bd 14 00 00 	movzbl 0x14bd(%eax),%edx
 8690f36:	83 c2 01             	add    $0x1,%edx
 8690f39:	88 90 bd 14 00 00    	mov    %dl,0x14bd(%eax)
 8690f3f:	5d                   	pop    %ebp
 8690f40:	c3                   	ret
 8690f41:	90                   	nop

```

```c
// CUserCharacInfo::increaseBlueMarbleEnterCount @ 0x8690f1c

/* CUserCharacInfo::increaseBlueMarbleEnterCount() */

void __thiscall CUserCharacInfo::increaseBlueMarbleEnterCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(char *)(*(int *)(this + 0x10) + 0x14bd) = *(char *)(*(int *)(this + 0x10) + 0x14bd) + '\x01';
  }
  return;
}

```

---

## increaseBlueMarbleUserDeadCount

```asm
// === 08690f86 CUserCharacInfo::increaseBlueMarbleUserDeadCount  [0x08690f86-0x8690fa9] ===
 8690f86:	55                   	push   %ebp
 8690f87:	89 e5                	mov    %esp,%ebp
 8690f89:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f8c:	8b 40 10             	mov    0x10(%eax),%eax
 8690f8f:	85 c0                	test   %eax,%eax
 8690f91:	74 15                	je     8690fa8 <_ZN15CUserCharacInfo31increaseBlueMarbleUserDeadCountEv+0x22>
 8690f93:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f96:	8b 40 10             	mov    0x10(%eax),%eax
 8690f99:	8b 90 be 14 00 00    	mov    0x14be(%eax),%edx
 8690f9f:	83 c2 01             	add    $0x1,%edx
 8690fa2:	89 90 be 14 00 00    	mov    %edx,0x14be(%eax)
 8690fa8:	5d                   	pop    %ebp
 8690fa9:	c3                   	ret

```

```c
// CUserCharacInfo::increaseBlueMarbleUserDeadCount @ 0x8690f86

/* CUserCharacInfo::increaseBlueMarbleUserDeadCount() */

void __thiscall CUserCharacInfo::increaseBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x14be) = *(int *)(*(int *)(this + 0x10) + 0x14be) + 1;
  }
  return;
}

```

---

## isExistItem

```asm
// === 08678084 CUserCharacInfo::isExistItem  [0x08678084-0x86780f9] ===
 8678084:	55                   	push   %ebp
 8678085:	89 e5                	mov    %esp,%ebp
 8678087:	83 ec 18             	sub    $0x18,%esp
 867808a:	8b 45 08             	mov    0x8(%ebp),%eax
 867808d:	8b 40 10             	mov    0x10(%eax),%eax
 8678090:	85 c0                	test   %eax,%eax
 8678092:	75 07                	jne    867809b <_ZN15CUserCharacInfo11isExistItemEi+0x17>
 8678094:	b8 00 00 00 00       	mov    $0x0,%eax
 8678099:	eb 5d                	jmp    86780f8 <_ZN15CUserCharacInfo11isExistItemEi+0x74>
 867809b:	8b 45 08             	mov    0x8(%ebp),%eax
 867809e:	8b 40 10             	mov    0x10(%eax),%eax
 86780a1:	8d 90 aa 0d 00 00    	lea    0xdaa(%eax),%edx
 86780a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 86780aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86780ae:	89 14 24             	mov    %edx,(%esp)
 86780b1:	e8 5e 3b e9 ff       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 86780b6:	83 f8 ff             	cmp    $0xffffffff,%eax
 86780b9:	0f 95 c0             	setne  %al
 86780bc:	84 c0                	test   %al,%al
 86780be:	74 07                	je     86780c7 <_ZN15CUserCharacInfo11isExistItemEi+0x43>
 86780c0:	b8 01 00 00 00       	mov    $0x1,%eax
 86780c5:	eb 31                	jmp    86780f8 <_ZN15CUserCharacInfo11isExistItemEi+0x74>
 86780c7:	8b 45 08             	mov    0x8(%ebp),%eax
 86780ca:	8b 40 10             	mov    0x10(%eax),%eax
 86780cd:	8d 90 da 00 00 00    	lea    0xda(%eax),%edx
 86780d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86780d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86780da:	89 14 24             	mov    %edx,(%esp)
 86780dd:	e8 90 d0 e8 ff       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 86780e2:	83 f8 ff             	cmp    $0xffffffff,%eax
 86780e5:	0f 95 c0             	setne  %al
 86780e8:	84 c0                	test   %al,%al
 86780ea:	74 07                	je     86780f3 <_ZN15CUserCharacInfo11isExistItemEi+0x6f>
 86780ec:	b8 01 00 00 00       	mov    $0x1,%eax
 86780f1:	eb 05                	jmp    86780f8 <_ZN15CUserCharacInfo11isExistItemEi+0x74>
 86780f3:	b8 00 00 00 00       	mov    $0x0,%eax
 86780f8:	c9                   	leave
 86780f9:	c3                   	ret

```

```c
// CUserCharacInfo::isExistItem @ 0x8678084

/* CUserCharacInfo::isExistItem(int) */

undefined4 __thiscall CUserCharacInfo::isExistItem(CUserCharacInfo *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CCargo::check_item_exist((CCargo *)(*(int *)(this + 0x10) + 0xdaa),param_1);
    if (iVar2 == -1) {
      iVar2 = CInventory::check_item_exist((CInventory *)(*(int *)(this + 0x10) + 0xda),param_1);
      if (iVar2 == -1) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## isSetGuildCreateFlag

```asm
// === 0866c0da CUserCharacInfo::isSetGuildCreateFlag  [0x0866c0da-0x866c11d] ===
 866c0da:	55                   	push   %ebp
 866c0db:	89 e5                	mov    %esp,%ebp
 866c0dd:	83 ec 04             	sub    $0x4,%esp
 866c0e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 866c0e3:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 866c0e7:	8b 45 08             	mov    0x8(%ebp),%eax
 866c0ea:	8b 40 10             	mov    0x10(%eax),%eax
 866c0ed:	85 c0                	test   %eax,%eax
 866c0ef:	74 25                	je     866c116 <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt+0x3c>
 866c0f1:	8b 45 08             	mov    0x8(%ebp),%eax
 866c0f4:	8b 40 10             	mov    0x10(%eax),%eax
 866c0f7:	0f b7 80 c3 0d 00 00 	movzwl 0xdc3(%eax),%eax
 866c0fe:	66 23 45 fc          	and    -0x4(%ebp),%ax
 866c102:	66 3b 45 fc          	cmp    -0x4(%ebp),%ax
 866c106:	75 07                	jne    866c10f <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt+0x35>
 866c108:	b8 01 00 00 00       	mov    $0x1,%eax
 866c10d:	eb 0c                	jmp    866c11b <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt+0x41>
 866c10f:	b8 00 00 00 00       	mov    $0x0,%eax
 866c114:	eb 05                	jmp    866c11b <_ZN15CUserCharacInfo20isSetGuildCreateFlagEt+0x41>
 866c116:	b8 00 00 00 00       	mov    $0x0,%eax
 866c11b:	c9                   	leave
 866c11c:	c3                   	ret
 866c11d:	90                   	nop

```

```c
// CUserCharacInfo::isSetGuildCreateFlag @ 0x866c0da

/* CUserCharacInfo::isSetGuildCreateFlag(unsigned short) */

undefined4 __thiscall CUserCharacInfo::isSetGuildCreateFlag(CUserCharacInfo *this,ushort param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x10) == 0) {
    uVar1 = 0;
  }
  else if ((*(ushort *)(*(int *)(this + 0x10) + 0xdc3) & param_1) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## resetBlueMarbleEnterCount

```asm
// === 08690ed8 CUserCharacInfo::resetBlueMarbleEnterCount  [0x08690ed8-0x8690ef3] ===
 8690ed8:	55                   	push   %ebp
 8690ed9:	89 e5                	mov    %esp,%ebp
 8690edb:	8b 45 08             	mov    0x8(%ebp),%eax
 8690ede:	8b 40 10             	mov    0x10(%eax),%eax
 8690ee1:	85 c0                	test   %eax,%eax
 8690ee3:	74 0d                	je     8690ef2 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv+0x1a>
 8690ee5:	8b 45 08             	mov    0x8(%ebp),%eax
 8690ee8:	8b 40 10             	mov    0x10(%eax),%eax
 8690eeb:	c6 80 bd 14 00 00 00 	movb   $0x0,0x14bd(%eax)
 8690ef2:	5d                   	pop    %ebp
 8690ef3:	c3                   	ret

```

```c
// CUserCharacInfo::resetBlueMarbleEnterCount @ 0x8690ed8

/* CUserCharacInfo::resetBlueMarbleEnterCount() */

void __thiscall CUserCharacInfo::resetBlueMarbleEnterCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined1 *)(*(int *)(this + 0x10) + 0x14bd) = 0;
  }
  return;
}

```

---

## resetBlueMarbleUserDeadCount

```asm
// === 08690f66 CUserCharacInfo::resetBlueMarbleUserDeadCount  [0x08690f66-0x8690f85] ===
 8690f66:	55                   	push   %ebp
 8690f67:	89 e5                	mov    %esp,%ebp
 8690f69:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f6c:	8b 40 10             	mov    0x10(%eax),%eax
 8690f6f:	85 c0                	test   %eax,%eax
 8690f71:	74 10                	je     8690f83 <_ZN15CUserCharacInfo28resetBlueMarbleUserDeadCountEv+0x1d>
 8690f73:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f76:	8b 40 10             	mov    0x10(%eax),%eax
 8690f79:	c7 80 be 14 00 00 00 	movl   $0x0,0x14be(%eax)
 8690f80:	00 00 00 
 8690f83:	5d                   	pop    %ebp
 8690f84:	c3                   	ret
 8690f85:	90                   	nop

```

```c
// CUserCharacInfo::resetBlueMarbleUserDeadCount @ 0x8690f66

/* CUserCharacInfo::resetBlueMarbleUserDeadCount() */

void __thiscall CUserCharacInfo::resetBlueMarbleUserDeadCount(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x14be) = 0;
  }
  return;
}

```

---

## resetBonusPoint

```asm
// === 0868ee7a CUserCharacInfo::resetBonusPoint  [0x0868ee7a-0x868eed1] ===
 868ee7a:	55                   	push   %ebp
 868ee7b:	89 e5                	mov    %esp,%ebp
 868ee7d:	83 ec 18             	sub    $0x18,%esp
 868ee80:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee83:	8b 40 10             	mov    0x10(%eax),%eax
 868ee86:	85 c0                	test   %eax,%eax
 868ee88:	74 46                	je     868eed0 <_ZN15CUserCharacInfo15resetBonusPointEv+0x56>
 868ee8a:	8b 45 08             	mov    0x8(%ebp),%eax
 868ee8d:	8b 40 10             	mov    0x10(%eax),%eax
 868ee90:	05 9d 12 00 00       	add    $0x129d,%eax
 868ee95:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 868ee9c:	00 
 868ee9d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 868eea4:	00 
 868eea5:	89 04 24             	mov    %eax,(%esp)
 868eea8:	e8 13 ee 9e ff       	call   807dcc0 <memset@plt>
 868eead:	8b 45 08             	mov    0x8(%ebp),%eax
 868eeb0:	8b 40 10             	mov    0x10(%eax),%eax
 868eeb3:	05 a5 12 00 00       	add    $0x12a5,%eax
 868eeb8:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 868eebf:	00 
 868eec0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 868eec7:	00 
 868eec8:	89 04 24             	mov    %eax,(%esp)
 868eecb:	e8 f0 ed 9e ff       	call   807dcc0 <memset@plt>
 868eed0:	c9                   	leave
 868eed1:	c3                   	ret

```

```c
// CUserCharacInfo::resetBonusPoint @ 0x868ee7a

/* CUserCharacInfo::resetBonusPoint() */

void __thiscall CUserCharacInfo::resetBonusPoint(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    memset((void *)(*(int *)(this + 0x10) + 0x129d),0,8);
    memset((void *)(*(int *)(this + 0x10) + 0x12a5),0,8);
  }
  return;
}

```

---

## resetCharGuildInfo

```asm
// === 0866c11e CUserCharacInfo::resetCharGuildInfo  [0x0866c11e-0x866c195] ===
 866c11e:	55                   	push   %ebp
 866c11f:	89 e5                	mov    %esp,%ebp
 866c121:	8b 45 08             	mov    0x8(%ebp),%eax
 866c124:	8b 40 10             	mov    0x10(%eax),%eax
 866c127:	85 c0                	test   %eax,%eax
 866c129:	74 68                	je     866c193 <_ZN15CUserCharacInfo18resetCharGuildInfoEv+0x75>
 866c12b:	8b 45 08             	mov    0x8(%ebp),%eax
 866c12e:	8b 40 10             	mov    0x10(%eax),%eax
 866c131:	c7 80 be 0d 00 00 00 	movl   $0x0,0xdbe(%eax)
 866c138:	00 00 00 
 866c13b:	8b 45 08             	mov    0x8(%ebp),%eax
 866c13e:	8b 40 10             	mov    0x10(%eax),%eax
 866c141:	66 c7 80 ed 0d 00 00 	movw   $0x0,0xded(%eax)
 866c148:	00 00 
 866c14a:	8b 45 08             	mov    0x8(%ebp),%eax
 866c14d:	8b 40 10             	mov    0x10(%eax),%eax
 866c150:	c7 80 e9 0d 00 00 00 	movl   $0x0,0xde9(%eax)
 866c157:	00 00 00 
 866c15a:	8b 45 08             	mov    0x8(%ebp),%eax
 866c15d:	8b 40 10             	mov    0x10(%eax),%eax
 866c160:	c6 80 f3 0d 00 00 00 	movb   $0x0,0xdf3(%eax)
 866c167:	8b 45 08             	mov    0x8(%ebp),%eax
 866c16a:	8b 40 10             	mov    0x10(%eax),%eax
 866c16d:	c6 80 c2 0d 00 00 00 	movb   $0x0,0xdc2(%eax)
 866c174:	8b 45 08             	mov    0x8(%ebp),%eax
 866c177:	8b 40 10             	mov    0x10(%eax),%eax
 866c17a:	66 c7 80 c3 0d 00 00 	movw   $0x0,0xdc3(%eax)
 866c181:	00 00 
 866c183:	8b 45 08             	mov    0x8(%ebp),%eax
 866c186:	8b 40 10             	mov    0x10(%eax),%eax
 866c189:	c7 80 ef 0d 00 00 00 	movl   $0x0,0xdef(%eax)
 866c190:	00 00 00 
 866c193:	5d                   	pop    %ebp
 866c194:	c3                   	ret
 866c195:	90                   	nop

```

```c
// CUserCharacInfo::resetCharGuildInfo @ 0x866c11e

/* CUserCharacInfo::resetCharGuildInfo() */

void __thiscall CUserCharacInfo::resetCharGuildInfo(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdbe) = 0;
    *(undefined2 *)(*(int *)(this + 0x10) + 0xded) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xde9) = 0;
    *(undefined1 *)(*(int *)(this + 0x10) + 0xdf3) = 0;
    *(undefined1 *)(*(int *)(this + 0x10) + 0xdc2) = 0;
    *(undefined2 *)(*(int *)(this + 0x10) + 0xdc3) = 0;
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdef) = 0;
  }
  return;
}

```

---

## resetCharacTutorialFlag

```asm
// === 0864739a CUserCharacInfo::resetCharacTutorialFlag  [0x0864739a-0x86473e5] ===
 864739a:	55                   	push   %ebp
 864739b:	89 e5                	mov    %esp,%ebp
 864739d:	83 ec 18             	sub    $0x18,%esp
 86473a0:	8b 45 08             	mov    0x8(%ebp),%eax
 86473a3:	8b 40 10             	mov    0x10(%eax),%eax
 86473a6:	85 c0                	test   %eax,%eax
 86473a8:	74 39                	je     86473e3 <_ZN15CUserCharacInfo23resetCharacTutorialFlagEv+0x49>
 86473aa:	8b 45 08             	mov    0x8(%ebp),%eax
 86473ad:	89 04 24             	mov    %eax,(%esp)
 86473b0:	e8 bb 34 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 86473b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86473b8:	8b 40 10             	mov    0x10(%eax),%eax
 86473bb:	c7 40 51 00 00 00 00 	movl   $0x0,0x51(%eax)
 86473c2:	8b 45 08             	mov    0x8(%ebp),%eax
 86473c5:	8b 40 10             	mov    0x10(%eax),%eax
 86473c8:	83 c0 55             	add    $0x55,%eax
 86473cb:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 86473d2:	00 
 86473d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86473da:	00 
 86473db:	89 04 24             	mov    %eax,(%esp)
 86473de:	e8 dd 68 a3 ff       	call   807dcc0 <memset@plt>
 86473e3:	c9                   	leave
 86473e4:	c3                   	ret
 86473e5:	90                   	nop

```

```c
// CUserCharacInfo::resetCharacTutorialFlag @ 0x864739a

/* CUserCharacInfo::resetCharacTutorialFlag() */

void __thiscall CUserCharacInfo::resetCharacTutorialFlag(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    *(undefined4 *)(*(int *)(this + 0x10) + 0x51) = 0;
    memset((void *)(*(int *)(this + 0x10) + 0x55),0,0x10);
  }
  return;
}

```

---

## resetPremiumBonusExp

```asm
// === 0868e284 CUserCharacInfo::resetPremiumBonusExp  [0x0868e284-0x868e2a3] ===
 868e284:	55                   	push   %ebp
 868e285:	89 e5                	mov    %esp,%ebp
 868e287:	8b 45 08             	mov    0x8(%ebp),%eax
 868e28a:	8b 40 10             	mov    0x10(%eax),%eax
 868e28d:	85 c0                	test   %eax,%eax
 868e28f:	74 10                	je     868e2a1 <_ZN15CUserCharacInfo20resetPremiumBonusExpEv+0x1d>
 868e291:	8b 45 08             	mov    0x8(%ebp),%eax
 868e294:	8b 40 10             	mov    0x10(%eax),%eax
 868e297:	c7 80 8d 12 00 00 00 	movl   $0x0,0x128d(%eax)
 868e29e:	00 00 00 
 868e2a1:	5d                   	pop    %ebp
 868e2a2:	c3                   	ret
 868e2a3:	90                   	nop

```

```c
// CUserCharacInfo::resetPremiumBonusExp @ 0x868e284

/* CUserCharacInfo::resetPremiumBonusExp() */

void __thiscall CUserCharacInfo::resetPremiumBonusExp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x128d) = 0;
  }
  return;
}

```

---

## resetSaveFlags

```asm
// === 0864e1f2 CUserCharacInfo::resetSaveFlags  [0x0864e1f2-0x864e25b] ===
 864e1f2:	55                   	push   %ebp
 864e1f3:	89 e5                	mov    %esp,%ebp
 864e1f5:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1f8:	c6 00 00             	movb   $0x0,(%eax)
 864e1fb:	8b 45 08             	mov    0x8(%ebp),%eax
 864e1fe:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 864e202:	8b 45 08             	mov    0x8(%ebp),%eax
 864e205:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 864e209:	8b 45 08             	mov    0x8(%ebp),%eax
 864e20c:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 864e210:	8b 45 08             	mov    0x8(%ebp),%eax
 864e213:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 864e217:	8b 45 08             	mov    0x8(%ebp),%eax
 864e21a:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 864e21e:	8b 45 08             	mov    0x8(%ebp),%eax
 864e221:	c6 40 06 00          	movb   $0x0,0x6(%eax)
 864e225:	8b 45 08             	mov    0x8(%ebp),%eax
 864e228:	c6 40 07 00          	movb   $0x0,0x7(%eax)
 864e22c:	8b 45 08             	mov    0x8(%ebp),%eax
 864e22f:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 864e233:	8b 45 08             	mov    0x8(%ebp),%eax
 864e236:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 864e23a:	8b 45 08             	mov    0x8(%ebp),%eax
 864e23d:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 864e241:	8b 45 08             	mov    0x8(%ebp),%eax
 864e244:	c6 40 0b 00          	movb   $0x0,0xb(%eax)
 864e248:	8b 45 08             	mov    0x8(%ebp),%eax
 864e24b:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 864e24f:	8b 45 08             	mov    0x8(%ebp),%eax
 864e252:	c6 80 d4 00 00 00 00 	movb   $0x0,0xd4(%eax)
 864e259:	5d                   	pop    %ebp
 864e25a:	c3                   	ret
 864e25b:	90                   	nop

```

```c
// CUserCharacInfo::resetSaveFlags @ 0x864e1f2

/* CUserCharacInfo::resetSaveFlags() */

void __thiscall CUserCharacInfo::resetSaveFlags(CUserCharacInfo *this)

{
  *this = (CUserCharacInfo)0x0;
  this[1] = (CUserCharacInfo)0x0;
  this[2] = (CUserCharacInfo)0x0;
  this[3] = (CUserCharacInfo)0x0;
  this[4] = (CUserCharacInfo)0x0;
  this[5] = (CUserCharacInfo)0x0;
  this[6] = (CUserCharacInfo)0x0;
  this[7] = (CUserCharacInfo)0x0;
  this[8] = (CUserCharacInfo)0x0;
  this[9] = (CUserCharacInfo)0x0;
  this[10] = (CUserCharacInfo)0x0;
  this[0xb] = (CUserCharacInfo)0x0;
  this[0xc] = (CUserCharacInfo)0x0;
  this[0xd4] = (CUserCharacInfo)0x0;
  return;
}

```

---

## resetWeekendBonusExp

```asm
// === 0868e34a CUserCharacInfo::resetWeekendBonusExp  [0x0868e34a-0x868e369] ===
 868e34a:	55                   	push   %ebp
 868e34b:	89 e5                	mov    %esp,%ebp
 868e34d:	8b 45 08             	mov    0x8(%ebp),%eax
 868e350:	8b 40 10             	mov    0x10(%eax),%eax
 868e353:	85 c0                	test   %eax,%eax
 868e355:	74 10                	je     868e367 <_ZN15CUserCharacInfo20resetWeekendBonusExpEv+0x1d>
 868e357:	8b 45 08             	mov    0x8(%ebp),%eax
 868e35a:	8b 40 10             	mov    0x10(%eax),%eax
 868e35d:	c7 80 91 12 00 00 00 	movl   $0x0,0x1291(%eax)
 868e364:	00 00 00 
 868e367:	5d                   	pop    %ebp
 868e368:	c3                   	ret
 868e369:	90                   	nop

```

```c
// CUserCharacInfo::resetWeekendBonusExp @ 0x868e34a

/* CUserCharacInfo::resetWeekendBonusExp() */

void __thiscall CUserCharacInfo::resetWeekendBonusExp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0x1291) = 0;
  }
  return;
}

```

---

## reset_guild_exp

```asm
// === 08645cb4 CUserCharacInfo::reset_guild_exp  [0x08645cb4-0x8645ce3] ===
 8645cb4:	55                   	push   %ebp
 8645cb5:	89 e5                	mov    %esp,%ebp
 8645cb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8645cba:	8b 40 10             	mov    0x10(%eax),%eax
 8645cbd:	85 c0                	test   %eax,%eax
 8645cbf:	74 20                	je     8645ce1 <_ZN15CUserCharacInfo15reset_guild_expEv+0x2d>
 8645cc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645cc4:	8b 40 10             	mov    0x10(%eax),%eax
 8645cc7:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645ccd:	85 c0                	test   %eax,%eax
 8645ccf:	74 10                	je     8645ce1 <_ZN15CUserCharacInfo15reset_guild_expEv+0x2d>
 8645cd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645cd4:	8b 40 10             	mov    0x10(%eax),%eax
 8645cd7:	c7 80 e9 0d 00 00 00 	movl   $0x0,0xde9(%eax)
 8645cde:	00 00 00 
 8645ce1:	5d                   	pop    %ebp
 8645ce2:	c3                   	ret
 8645ce3:	90                   	nop

```

```c
// CUserCharacInfo::reset_guild_exp @ 0x8645cb4

/* CUserCharacInfo::reset_guild_exp() */

void __thiscall CUserCharacInfo::reset_guild_exp(CUserCharacInfo *this)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xde9) = 0;
  }
  return;
}

```

---

## reset_guild_temp_exp

```asm
// === 08645c58 CUserCharacInfo::reset_guild_temp_exp  [0x08645c58-0x8645c75] ===
 8645c58:	55                   	push   %ebp
 8645c59:	89 e5                	mov    %esp,%ebp
 8645c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c5e:	8b 40 10             	mov    0x10(%eax),%eax
 8645c61:	85 c0                	test   %eax,%eax
 8645c63:	74 0f                	je     8645c74 <_ZN15CUserCharacInfo20reset_guild_temp_expEv+0x1c>
 8645c65:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c68:	8b 40 10             	mov    0x10(%eax),%eax
 8645c6b:	66 c7 80 ed 0d 00 00 	movw   $0x0,0xded(%eax)
 8645c72:	00 00 
 8645c74:	5d                   	pop    %ebp
 8645c75:	c3                   	ret

```

```c
// CUserCharacInfo::reset_guild_temp_exp @ 0x8645c58

/* CUserCharacInfo::reset_guild_temp_exp() */

void __thiscall CUserCharacInfo::reset_guild_temp_exp(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined2 *)(*(int *)(this + 0x10) + 0xded) = 0;
  }
  return;
}

```

---

## reset_guild_today_exp

```asm
// === 08645d22 CUserCharacInfo::reset_guild_today_exp  [0x08645d22-0x8645d51] ===
 8645d22:	55                   	push   %ebp
 8645d23:	89 e5                	mov    %esp,%ebp
 8645d25:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d28:	8b 40 10             	mov    0x10(%eax),%eax
 8645d2b:	85 c0                	test   %eax,%eax
 8645d2d:	74 20                	je     8645d4f <_ZN15CUserCharacInfo21reset_guild_today_expEv+0x2d>
 8645d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d32:	8b 40 10             	mov    0x10(%eax),%eax
 8645d35:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645d3b:	85 c0                	test   %eax,%eax
 8645d3d:	74 10                	je     8645d4f <_ZN15CUserCharacInfo21reset_guild_today_expEv+0x2d>
 8645d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d42:	8b 40 10             	mov    0x10(%eax),%eax
 8645d45:	c7 80 ef 0d 00 00 00 	movl   $0x0,0xdef(%eax)
 8645d4c:	00 00 00 
 8645d4f:	5d                   	pop    %ebp
 8645d50:	c3                   	ret
 8645d51:	90                   	nop

```

```c
// CUserCharacInfo::reset_guild_today_exp @ 0x8645d22

/* CUserCharacInfo::reset_guild_today_exp() */

void __thiscall CUserCharacInfo::reset_guild_today_exp(CUserCharacInfo *this)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(undefined4 *)(*(int *)(this + 0x10) + 0xdef) = 0;
  }
  return;
}

```

---

## reset_level_before_dungeon

```asm
// === 08645d96 CUserCharacInfo::reset_level_before_dungeon  [0x08645d96-0x8645db3] ===
 8645d96:	55                   	push   %ebp
 8645d97:	89 e5                	mov    %esp,%ebp
 8645d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8645d9c:	8b 40 10             	mov    0x10(%eax),%eax
 8645d9f:	85 c0                	test   %eax,%eax
 8645da1:	74 0f                	je     8645db2 <_ZN15CUserCharacInfo26reset_level_before_dungeonEv+0x1c>
 8645da3:	8b 45 08             	mov    0x8(%ebp),%eax
 8645da6:	8b 40 10             	mov    0x10(%eax),%eax
 8645da9:	66 c7 80 fc 0d 00 00 	movw   $0x0,0xdfc(%eax)
 8645db0:	00 00 
 8645db2:	5d                   	pop    %ebp
 8645db3:	c3                   	ret

```

```c
// CUserCharacInfo::reset_level_before_dungeon @ 0x8645d96

/* CUserCharacInfo::reset_level_before_dungeon() */

void __thiscall CUserCharacInfo::reset_level_before_dungeon(CUserCharacInfo *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined2 *)(*(int *)(this + 0x10) + 0xdfc) = 0;
  }
  return;
}

```

---

## setBloodBestRecord

```asm
// === 08687fd8 CUserCharacInfo::setBloodBestRecord  [0x08687fd8-0x868822f] ===
 8687fd8:	55                   	push   %ebp
 8687fd9:	89 e5                	mov    %esp,%ebp
 8687fdb:	53                   	push   %ebx
 8687fdc:	83 ec 54             	sub    $0x54,%esp
 8687fdf:	8b 45 18             	mov    0x18(%ebp),%eax
 8687fe2:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8687fe5:	8b 45 08             	mov    0x8(%ebp),%eax
 8687fe8:	8b 40 10             	mov    0x10(%eax),%eax
 8687feb:	85 c0                	test   %eax,%eax
 8687fed:	0f 84 31 02 00 00    	je     8688224 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x24c>
 8687ff3:	83 7d 10 0f          	cmpl   $0xf,0x10(%ebp)
 8687ff7:	7e 07                	jle    8688000 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x28>
 8687ff9:	c7 45 10 0f 00 00 00 	movl   $0xf,0x10(%ebp)
 8688000:	8b 45 08             	mov    0x8(%ebp),%eax
 8688003:	8b 40 10             	mov    0x10(%eax),%eax
 8688006:	8d 88 cc 0e 00 00    	lea    0xecc(%eax),%ecx
 868800c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 868800f:	8d 55 14             	lea    0x14(%ebp),%edx
 8688012:	89 54 24 08          	mov    %edx,0x8(%esp)
 8688016:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 868801a:	89 04 24             	mov    %eax,(%esp)
 868801d:	e8 9a 43 01 00       	call   869c3bc <_ZNSt3mapIi17stBloodBestRecordSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8688022:	83 ec 04             	sub    $0x4,%esp
 8688025:	8b 45 08             	mov    0x8(%ebp),%eax
 8688028:	8b 40 10             	mov    0x10(%eax),%eax
 868802b:	8d 90 cc 0e 00 00    	lea    0xecc(%eax),%edx
 8688031:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8688034:	89 54 24 04          	mov    %edx,0x4(%esp)
 8688038:	89 04 24             	mov    %eax,(%esp)
 868803b:	e8 8e 29 01 00       	call   869a9ce <_ZNSt3mapIi17stBloodBestRecordSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8688040:	83 ec 04             	sub    $0x4,%esp
 8688043:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8688046:	89 44 24 04          	mov    %eax,0x4(%esp)
 868804a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 868804d:	89 04 24             	mov    %eax,(%esp)
 8688050:	e8 93 43 01 00       	call   869c3e8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stBloodBestRecordEEeqERKS4_>
 8688055:	84 c0                	test   %al,%al
 8688057:	0f 84 a0 00 00 00    	je     86880fd <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x125>
 868805d:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8688061:	83 f0 01             	xor    $0x1,%eax
 8688064:	84 c0                	test   %al,%al
 8688066:	74 13                	je     868807b <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0xa3>
 8688068:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 868806f:	00 
 8688070:	8b 45 08             	mov    0x8(%ebp),%eax
 8688073:	89 04 24             	mov    %eax,(%esp)
 8688076:	e8 2d e1 00 00       	call   86961a8 <_ZN15CUserCharacInfo24setBloodBestRecordUpdateEb>
 868807b:	8b 45 10             	mov    0x10(%ebp),%eax
 868807e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8688081:	8b 45 0c             	mov    0xc(%ebp),%eax
 8688084:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8688087:	8d 45 ec             	lea    -0x14(%ebp),%eax
 868808a:	8d 55 c8             	lea    -0x38(%ebp),%edx
 868808d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8688091:	8d 55 14             	lea    0x14(%ebp),%edx
 8688094:	89 54 24 04          	mov    %edx,0x4(%esp)
 8688098:	89 04 24             	mov    %eax,(%esp)
 868809b:	e8 5c 43 01 00       	call   869c3fc <_ZSt9make_pairIRiR17stBloodBestRecordESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 86880a0:	83 ec 04             	sub    $0x4,%esp
 86880a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86880a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86880aa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86880ad:	89 04 24             	mov    %eax,(%esp)
 86880b0:	e8 85 43 01 00       	call   869c43a <_ZNSt4pairIKi17stBloodBestRecordEC1IiS1_EEOS_IT_T0_E>
 86880b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86880b8:	8b 40 10             	mov    0x10(%eax),%eax
 86880bb:	8d 88 cc 0e 00 00    	lea    0xecc(%eax),%ecx
 86880c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86880c4:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86880c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 86880cb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86880cf:	89 04 24             	mov    %eax,(%esp)
 86880d2:	e8 99 43 01 00       	call   869c470 <_ZNSt3mapIi17stBloodBestRecordSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 86880d7:	83 ec 04             	sub    $0x4,%esp
 86880da:	8b 45 08             	mov    0x8(%ebp),%eax
 86880dd:	8b 40 10             	mov    0x10(%eax),%eax
 86880e0:	8b 55 10             	mov    0x10(%ebp),%edx
 86880e3:	89 90 c4 0e 00 00    	mov    %edx,0xec4(%eax)
 86880e9:	8b 45 08             	mov    0x8(%ebp),%eax
 86880ec:	8b 40 10             	mov    0x10(%eax),%eax
 86880ef:	8b 55 0c             	mov    0xc(%ebp),%edx
 86880f2:	89 90 c8 0e 00 00    	mov    %edx,0xec8(%eax)
 86880f8:	e9 2e 01 00 00       	jmp    868822b <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x253>
 86880fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8688100:	8b 58 10             	mov    0x10(%eax),%ebx
 8688103:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8688106:	89 04 24             	mov    %eax,(%esp)
 8688109:	e8 2e 29 01 00       	call   869aa3c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stBloodBestRecordEEptEv>
 868810e:	8b 40 04             	mov    0x4(%eax),%eax
 8688111:	89 83 c4 0e 00 00    	mov    %eax,0xec4(%ebx)
 8688117:	8b 45 08             	mov    0x8(%ebp),%eax
 868811a:	8b 58 10             	mov    0x10(%eax),%ebx
 868811d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8688120:	89 04 24             	mov    %eax,(%esp)
 8688123:	e8 14 29 01 00       	call   869aa3c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stBloodBestRecordEEptEv>
 8688128:	8b 40 08             	mov    0x8(%eax),%eax
 868812b:	89 83 c8 0e 00 00    	mov    %eax,0xec8(%ebx)
 8688131:	8b 45 08             	mov    0x8(%ebp),%eax
 8688134:	8b 40 10             	mov    0x10(%eax),%eax
 8688137:	8b 80 c4 0e 00 00    	mov    0xec4(%eax),%eax
 868813d:	3b 45 10             	cmp    0x10(%ebp),%eax
 8688140:	0f 8f e1 00 00 00    	jg     8688227 <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x24f>
 8688146:	8b 45 08             	mov    0x8(%ebp),%eax
 8688149:	8b 40 10             	mov    0x10(%eax),%eax
 868814c:	8b 90 c8 0e 00 00    	mov    0xec8(%eax),%edx
 8688152:	8b 45 0c             	mov    0xc(%ebp),%eax
 8688155:	39 c2                	cmp    %eax,%edx
 8688157:	75 15                	jne    868816e <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x196>
 8688159:	8b 45 08             	mov    0x8(%ebp),%eax
 868815c:	8b 40 10             	mov    0x10(%eax),%eax
 868815f:	8b 80 c4 0e 00 00    	mov    0xec4(%eax),%eax
 8688165:	3b 45 10             	cmp    0x10(%ebp),%eax
 8688168:	0f 84 bc 00 00 00    	je     868822a <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x252>
 868816e:	8b 45 08             	mov    0x8(%ebp),%eax
 8688171:	8b 40 10             	mov    0x10(%eax),%eax
 8688174:	8b 80 c4 0e 00 00    	mov    0xec4(%eax),%eax
 868817a:	3b 45 10             	cmp    0x10(%ebp),%eax
 868817d:	75 3e                	jne    86881bd <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x1e5>
 868817f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8688186:	00 
 8688187:	8b 45 08             	mov    0x8(%ebp),%eax
 868818a:	89 04 24             	mov    %eax,(%esp)
 868818d:	e8 16 e0 00 00       	call   86961a8 <_ZN15CUserCharacInfo24setBloodBestRecordUpdateEb>
 8688192:	8b 45 08             	mov    0x8(%ebp),%eax
 8688195:	8b 58 10             	mov    0x10(%eax),%ebx
 8688198:	8b 45 08             	mov    0x8(%ebp),%eax
 868819b:	8b 40 10             	mov    0x10(%eax),%eax
 868819e:	8d 90 c8 0e 00 00    	lea    0xec8(%eax),%edx
 86881a4:	8d 45 0c             	lea    0xc(%ebp),%eax
 86881a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86881ab:	89 14 24             	mov    %edx,(%esp)
 86881ae:	e8 de de ba ff       	call   8236091 <_ZSt3minIjERKT_S2_S2_>
 86881b3:	8b 00                	mov    (%eax),%eax
 86881b5:	89 83 c8 0e 00 00    	mov    %eax,0xec8(%ebx)
 86881bb:	eb 31                	jmp    86881ee <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x216>
 86881bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86881c4:	00 
 86881c5:	8b 45 08             	mov    0x8(%ebp),%eax
 86881c8:	89 04 24             	mov    %eax,(%esp)
 86881cb:	e8 d8 df 00 00       	call   86961a8 <_ZN15CUserCharacInfo24setBloodBestRecordUpdateEb>
 86881d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86881d3:	8b 40 10             	mov    0x10(%eax),%eax
 86881d6:	8b 55 0c             	mov    0xc(%ebp),%edx
 86881d9:	89 90 c8 0e 00 00    	mov    %edx,0xec8(%eax)
 86881df:	8b 45 08             	mov    0x8(%ebp),%eax
 86881e2:	8b 40 10             	mov    0x10(%eax),%eax
 86881e5:	8b 55 10             	mov    0x10(%ebp),%edx
 86881e8:	89 90 c4 0e 00 00    	mov    %edx,0xec4(%eax)
 86881ee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86881f1:	89 04 24             	mov    %eax,(%esp)
 86881f4:	e8 43 28 01 00       	call   869aa3c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stBloodBestRecordEEptEv>
 86881f9:	8b 55 08             	mov    0x8(%ebp),%edx
 86881fc:	8b 52 10             	mov    0x10(%edx),%edx
 86881ff:	8b 92 c4 0e 00 00    	mov    0xec4(%edx),%edx
 8688205:	89 50 04             	mov    %edx,0x4(%eax)
 8688208:	8d 45 d0             	lea    -0x30(%ebp),%eax
 868820b:	89 04 24             	mov    %eax,(%esp)
 868820e:	e8 29 28 01 00       	call   869aa3c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi17stBloodBestRecordEEptEv>
 8688213:	8b 55 08             	mov    0x8(%ebp),%edx
 8688216:	8b 52 10             	mov    0x10(%edx),%edx
 8688219:	8b 92 c8 0e 00 00    	mov    0xec8(%edx),%edx
 868821f:	89 50 08             	mov    %edx,0x8(%eax)
 8688222:	eb 07                	jmp    868822b <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x253>
 8688224:	90                   	nop
 8688225:	eb 04                	jmp    868822b <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x253>
 8688227:	90                   	nop
 8688228:	eb 01                	jmp    868822b <_ZN15CUserCharacInfo18setBloodBestRecordEjiib+0x253>
 868822a:	90                   	nop
 868822b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 868822e:	c9                   	leave
 868822f:	c3                   	ret

```

```c
// CUserCharacInfo::setBloodBestRecord @ 0x8687fd8

/* CUserCharacInfo::setBloodBestRecord(unsigned int, int, int, bool) */

void __thiscall
CUserCharacInfo::setBloodBestRecord
          (CUserCharacInfo *this,uint param_1,int param_2,int param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined3 in_stack_00000015;
  _Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>> local_34 [4];
  map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
  local_30 [4];
  pair local_2c [8];
  pair<int_const,stBloodBestRecord> local_24 [12];
  int local_18 [4];
  
  bVar1 = param_4;
  if (*(int *)(this + 0x10) != 0) {
    if (0xf < param_2) {
      param_2 = 0xf;
    }
    std::
    map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
    ::find((int *)local_34);
    std::
    map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
    ::end(local_30);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_30);
    if (cVar2 == '\0') {
      iVar5 = *(int *)(this + 0x10);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34);
      *(undefined4 *)(iVar5 + 0xec4) = *(undefined4 *)(iVar3 + 4);
      iVar5 = *(int *)(this + 0x10);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34);
      *(undefined4 *)(iVar5 + 0xec8) = *(undefined4 *)(iVar3 + 8);
      if ((*(int *)(*(int *)(this + 0x10) + 0xec4) <= param_2) &&
         ((*(uint *)(*(int *)(this + 0x10) + 0xec8) != param_1 ||
          (*(int *)(*(int *)(this + 0x10) + 0xec4) != param_2)))) {
        if (*(int *)(*(int *)(this + 0x10) + 0xec4) == param_2) {
          setBloodBestRecordUpdate(this,true);
          iVar5 = *(int *)(this + 0x10);
          puVar4 = std::min<unsigned_int>((uint *)(*(int *)(this + 0x10) + 0xec8),&param_1);
          *(uint *)(iVar5 + 0xec8) = *puVar4;
        }
        else {
          setBloodBestRecordUpdate(this,true);
          *(uint *)(*(int *)(this + 0x10) + 0xec8) = param_1;
          *(int *)(*(int *)(this + 0x10) + 0xec4) = param_2;
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34)
        ;
        *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(*(int *)(this + 0x10) + 0xec4);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,stBloodBestRecord>>::operator->(local_34)
        ;
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(*(int *)(this + 0x10) + 0xec8);
      }
    }
    else {
      if (!bVar1) {
        setBloodBestRecordUpdate(this,true);
      }
      std::make_pair<int&,stBloodBestRecord&>(local_18,(stBloodBestRecord *)&param_3);
      std::pair<int_const,stBloodBestRecord>::pair<int,stBloodBestRecord>(local_24,(pair *)local_18)
      ;
      std::
      map<int,stBloodBestRecord,std::less<int>,std::allocator<std::pair<int_const,stBloodBestRecord>>>
      ::insert(local_2c);
      *(int *)(*(int *)(this + 0x10) + 0xec4) = param_2;
      *(uint *)(*(int *)(this + 0x10) + 0xec8) = param_1;
    }
  }
  return;
}

```

---

## setBlueMarbleEnterCount

```asm
// === 08690ef4 CUserCharacInfo::setBlueMarbleEnterCount  [0x08690ef4-0x8690f1b] ===
 8690ef4:	55                   	push   %ebp
 8690ef5:	89 e5                	mov    %esp,%ebp
 8690ef7:	83 ec 04             	sub    $0x4,%esp
 8690efa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8690efd:	88 45 fc             	mov    %al,-0x4(%ebp)
 8690f00:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f03:	8b 40 10             	mov    0x10(%eax),%eax
 8690f06:	85 c0                	test   %eax,%eax
 8690f08:	74 10                	je     8690f1a <_ZN15CUserCharacInfo23setBlueMarbleEnterCountEh+0x26>
 8690f0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8690f0d:	8b 40 10             	mov    0x10(%eax),%eax
 8690f10:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 8690f14:	88 90 bd 14 00 00    	mov    %dl,0x14bd(%eax)
 8690f1a:	c9                   	leave
 8690f1b:	c3                   	ret

```

```c
// CUserCharacInfo::setBlueMarbleEnterCount @ 0x8690ef4

/* CUserCharacInfo::setBlueMarbleEnterCount(unsigned char) */

void __thiscall CUserCharacInfo::setBlueMarbleEnterCount(CUserCharacInfo *this,uchar param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(uchar *)(*(int *)(this + 0x10) + 0x14bd) = param_1;
  }
  return;
}

```

---

## setCurCharChangingGrowthType

```asm
// === 0864e34e CUserCharacInfo::setCurCharChangingGrowthType  [0x0864e34e-0x864e3b9] ===
 864e34e:	55                   	push   %ebp
 864e34f:	89 e5                	mov    %esp,%ebp
 864e351:	83 ec 08             	sub    $0x8,%esp
 864e354:	8b 55 0c             	mov    0xc(%ebp),%edx
 864e357:	8b 45 10             	mov    0x10(%ebp),%eax
 864e35a:	88 55 fc             	mov    %dl,-0x4(%ebp)
 864e35d:	88 45 f8             	mov    %al,-0x8(%ebp)
 864e360:	80 7d fc 06          	cmpb   $0x6,-0x4(%ebp)
 864e364:	7f 4d                	jg     864e3b3 <_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc+0x65>
 864e366:	80 7d f8 02          	cmpb   $0x2,-0x8(%ebp)
 864e36a:	7f 4a                	jg     864e3b6 <_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc+0x68>
 864e36c:	8b 45 08             	mov    0x8(%ebp),%eax
 864e36f:	8b 50 10             	mov    0x10(%eax),%edx
 864e372:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 864e376:	c1 e0 04             	shl    $0x4,%eax
 864e379:	c0 f8 04             	sar    $0x4,%al
 864e37c:	89 c1                	mov    %eax,%ecx
 864e37e:	83 e1 0f             	and    $0xf,%ecx
 864e381:	0f b6 42 2a          	movzbl 0x2a(%edx),%eax
 864e385:	83 e0 f0             	and    $0xfffffff0,%eax
 864e388:	09 c8                	or     %ecx,%eax
 864e38a:	88 42 2a             	mov    %al,0x2a(%edx)
 864e38d:	8b 45 08             	mov    0x8(%ebp),%eax
 864e390:	8b 50 10             	mov    0x10(%eax),%edx
 864e393:	0f b6 45 f8          	movzbl -0x8(%ebp),%eax
 864e397:	c1 e0 05             	shl    $0x5,%eax
 864e39a:	c0 f8 05             	sar    $0x5,%al
 864e39d:	83 e0 07             	and    $0x7,%eax
 864e3a0:	89 c1                	mov    %eax,%ecx
 864e3a2:	c1 e1 04             	shl    $0x4,%ecx
 864e3a5:	0f b6 42 2a          	movzbl 0x2a(%edx),%eax
 864e3a9:	83 e0 8f             	and    $0xffffff8f,%eax
 864e3ac:	09 c8                	or     %ecx,%eax
 864e3ae:	88 42 2a             	mov    %al,0x2a(%edx)
 864e3b1:	eb 04                	jmp    864e3b7 <_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc+0x69>
 864e3b3:	90                   	nop
 864e3b4:	eb 01                	jmp    864e3b7 <_ZN15CUserCharacInfo28setCurCharChangingGrowthTypeEcc+0x69>
 864e3b6:	90                   	nop
 864e3b7:	c9                   	leave
 864e3b8:	c3                   	ret
 864e3b9:	90                   	nop

```

```c
// CUserCharacInfo::setCurCharChangingGrowthType @ 0x864e34e

/* CUserCharacInfo::setCurCharChangingGrowthType(char, char) */

void __thiscall
CUserCharacInfo::setCurCharChangingGrowthType(CUserCharacInfo *this,char param_1,char param_2)

{
  if ((param_1 < '\a') && (param_2 < '\x03')) {
    *(byte *)(*(int *)(this + 0x10) + 0x2a) =
         *(byte *)(*(int *)(this + 0x10) + 0x2a) & 0xf0 | (char)(param_1 << 4) >> 4 & 0xfU;
    *(byte *)(*(int *)(this + 0x10) + 0x2a) =
         *(byte *)(*(int *)(this + 0x10) + 0x2a) & 0x8f | ((char)(param_2 << 5) >> 5 & 7U) << 4;
  }
  return;
}

```

---

## setCurCharGrowthType

```asm
// === 0864e2d8 CUserCharacInfo::setCurCharGrowthType  [0x0864e2d8-0x864e34d] ===
 864e2d8:	55                   	push   %ebp
 864e2d9:	89 e5                	mov    %esp,%ebp
 864e2db:	83 ec 28             	sub    $0x28,%esp
 864e2de:	8b 55 0c             	mov    0xc(%ebp),%edx
 864e2e1:	8b 45 10             	mov    0x10(%ebp),%eax
 864e2e4:	88 55 f4             	mov    %dl,-0xc(%ebp)
 864e2e7:	88 45 f0             	mov    %al,-0x10(%ebp)
 864e2ea:	80 7d f4 06          	cmpb   $0x6,-0xc(%ebp)
 864e2ee:	7f 58                	jg     864e348 <_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc+0x70>
 864e2f0:	80 7d f0 02          	cmpb   $0x2,-0x10(%ebp)
 864e2f4:	7f 55                	jg     864e34b <_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc+0x73>
 864e2f6:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2f9:	89 04 24             	mov    %eax,(%esp)
 864e2fc:	e8 61 0f be ff       	call   822f262 <_ZN15CUserCharacInfo20enableSaveCharacInfoEv>
 864e301:	8b 45 08             	mov    0x8(%ebp),%eax
 864e304:	8b 50 10             	mov    0x10(%eax),%edx
 864e307:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 864e30b:	c1 e0 04             	shl    $0x4,%eax
 864e30e:	c0 f8 04             	sar    $0x4,%al
 864e311:	89 c1                	mov    %eax,%ecx
 864e313:	83 e1 0f             	and    $0xf,%ecx
 864e316:	0f b6 42 29          	movzbl 0x29(%edx),%eax
 864e31a:	83 e0 f0             	and    $0xfffffff0,%eax
 864e31d:	09 c8                	or     %ecx,%eax
 864e31f:	88 42 29             	mov    %al,0x29(%edx)
 864e322:	8b 45 08             	mov    0x8(%ebp),%eax
 864e325:	8b 50 10             	mov    0x10(%eax),%edx
 864e328:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 864e32c:	c1 e0 05             	shl    $0x5,%eax
 864e32f:	c0 f8 05             	sar    $0x5,%al
 864e332:	83 e0 07             	and    $0x7,%eax
 864e335:	89 c1                	mov    %eax,%ecx
 864e337:	c1 e1 04             	shl    $0x4,%ecx
 864e33a:	0f b6 42 29          	movzbl 0x29(%edx),%eax
 864e33e:	83 e0 8f             	and    $0xffffff8f,%eax
 864e341:	09 c8                	or     %ecx,%eax
 864e343:	88 42 29             	mov    %al,0x29(%edx)
 864e346:	eb 04                	jmp    864e34c <_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc+0x74>
 864e348:	90                   	nop
 864e349:	eb 01                	jmp    864e34c <_ZN15CUserCharacInfo20setCurCharGrowthTypeEcc+0x74>
 864e34b:	90                   	nop
 864e34c:	c9                   	leave
 864e34d:	c3                   	ret

```

```c
// CUserCharacInfo::setCurCharGrowthType @ 0x864e2d8

/* CUserCharacInfo::setCurCharGrowthType(char, char) */

void __thiscall
CUserCharacInfo::setCurCharGrowthType(CUserCharacInfo *this,char param_1,char param_2)

{
  if ((param_1 < '\a') && (param_2 < '\x03')) {
    enableSaveCharacInfo(this);
    *(byte *)(*(int *)(this + 0x10) + 0x29) =
         *(byte *)(*(int *)(this + 0x10) + 0x29) & 0xf0 | (char)(param_1 << 4) >> 4 & 0xfU;
    *(byte *)(*(int *)(this + 0x10) + 0x29) =
         *(byte *)(*(int *)(this + 0x10) + 0x29) & 0x8f | ((char)(param_2 << 5) >> 5 & 7U) << 4;
  }
  return;
}

```

---

## setCurCharac

```asm
// === 0864e25c CUserCharacInfo::setCurCharac  [0x0864e25c-0x864e28d] ===
 864e25c:	55                   	push   %ebp
 864e25d:	89 e5                	mov    %esp,%ebp
 864e25f:	83 ec 18             	sub    $0x18,%esp
 864e262:	8b 45 08             	mov    0x8(%ebp),%eax
 864e265:	89 04 24             	mov    %eax,(%esp)
 864e268:	e8 f5 0f be ff       	call   822f262 <_ZN15CUserCharacInfo20enableSaveCharacInfoEv>
 864e26d:	8b 45 08             	mov    0x8(%ebp),%eax
 864e270:	89 04 24             	mov    %eax,(%esp)
 864e273:	e8 f8 c5 b4 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 864e278:	8b 45 08             	mov    0x8(%ebp),%eax
 864e27b:	89 04 24             	mov    %eax,(%esp)
 864e27e:	e8 47 eb ad ff       	call   812cdca <_ZN15CUserCharacInfo19enableSaveCharacEtcEv>
 864e283:	8b 45 08             	mov    0x8(%ebp),%eax
 864e286:	8b 55 0c             	mov    0xc(%ebp),%edx
 864e289:	89 50 10             	mov    %edx,0x10(%eax)
 864e28c:	c9                   	leave
 864e28d:	c3                   	ret

```

```c
// CUserCharacInfo::setCurCharac @ 0x864e25c

/* CUserCharacInfo::setCurCharac(_Charac_info*) */

void __thiscall CUserCharacInfo::setCurCharac(CUserCharacInfo *this,_Charac_info *param_1)

{
  enableSaveCharacInfo(this);
  enableSaveCharacStat(this);
  enableSaveCharacEtc(this);
  *(_Charac_info **)(this + 0x10) = param_1;
  return;
}

```

---

## setCurCharacTutorialFlag

```asm
// === 086473e6 CUserCharacInfo::setCurCharacTutorialFlag  [0x086473e6-0x864751d] ===
 86473e6:	55                   	push   %ebp
 86473e7:	89 e5                	mov    %esp,%ebp
 86473e9:	57                   	push   %edi
 86473ea:	56                   	push   %esi
 86473eb:	53                   	push   %ebx
 86473ec:	83 ec 2c             	sub    $0x2c,%esp
 86473ef:	8b 45 08             	mov    0x8(%ebp),%eax
 86473f2:	8b 40 10             	mov    0x10(%eax),%eax
 86473f5:	85 c0                	test   %eax,%eax
 86473f7:	0f 84 13 01 00 00    	je     8647510 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12a>
 86473fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8647400:	89 04 24             	mov    %eax,(%esp)
 8647403:	e8 68 34 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 8647408:	83 7d 0c 1f          	cmpl   $0x1f,0xc(%ebp)
 864740c:	77 57                	ja     8647465 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x7f>
 864740e:	8b 45 08             	mov    0x8(%ebp),%eax
 8647411:	8b 40 10             	mov    0x10(%eax),%eax
 8647414:	8b 50 51             	mov    0x51(%eax),%edx
 8647417:	8b 45 0c             	mov    0xc(%ebp),%eax
 864741a:	bb 01 00 00 00       	mov    $0x1,%ebx
 864741f:	89 de                	mov    %ebx,%esi
 8647421:	89 c1                	mov    %eax,%ecx
 8647423:	d3 e6                	shl    %cl,%esi
 8647425:	89 f0                	mov    %esi,%eax
 8647427:	21 d0                	and    %edx,%eax
 8647429:	85 c0                	test   %eax,%eax
 864742b:	74 0a                	je     8647437 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x51>
 864742d:	b8 00 00 00 00       	mov    $0x0,%eax
 8647432:	e9 de 00 00 00       	jmp    8647515 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12f>
 8647437:	8b 45 08             	mov    0x8(%ebp),%eax
 864743a:	8b 40 10             	mov    0x10(%eax),%eax
 864743d:	8b 55 08             	mov    0x8(%ebp),%edx
 8647440:	8b 52 10             	mov    0x10(%edx),%edx
 8647443:	8b 5a 51             	mov    0x51(%edx),%ebx
 8647446:	8b 55 0c             	mov    0xc(%ebp),%edx
 8647449:	be 01 00 00 00       	mov    $0x1,%esi
 864744e:	89 f7                	mov    %esi,%edi
 8647450:	89 d1                	mov    %edx,%ecx
 8647452:	d3 e7                	shl    %cl,%edi
 8647454:	89 fa                	mov    %edi,%edx
 8647456:	09 da                	or     %ebx,%edx
 8647458:	89 50 51             	mov    %edx,0x51(%eax)
 864745b:	b8 01 00 00 00       	mov    $0x1,%eax
 8647460:	e9 b0 00 00 00       	jmp    8647515 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12f>
 8647465:	83 7d 0c 7f          	cmpl   $0x7f,0xc(%ebp)
 8647469:	0f 87 a1 00 00 00    	ja     8647510 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12a>
 864746f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8647472:	83 e8 20             	sub    $0x20,%eax
 8647475:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8647478:	8b 45 dc             	mov    -0x24(%ebp),%eax
 864747b:	89 c2                	mov    %eax,%edx
 864747d:	c1 fa 1f             	sar    $0x1f,%edx
 8647480:	c1 ea 1d             	shr    $0x1d,%edx
 8647483:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8647486:	c1 f8 03             	sar    $0x3,%eax
 8647489:	89 45 e0             	mov    %eax,-0x20(%ebp)
 864748c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 864748f:	89 c2                	mov    %eax,%edx
 8647491:	c1 fa 1f             	sar    $0x1f,%edx
 8647494:	c1 ea 1d             	shr    $0x1d,%edx
 8647497:	01 d0                	add    %edx,%eax
 8647499:	83 e0 07             	and    $0x7,%eax
 864749c:	29 d0                	sub    %edx,%eax
 864749e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86474a1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86474a5:	78 06                	js     86474ad <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0xc7>
 86474a7:	83 7d e0 0f          	cmpl   $0xf,-0x20(%ebp)
 86474ab:	7e 07                	jle    86474b4 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0xce>
 86474ad:	b8 00 00 00 00       	mov    $0x0,%eax
 86474b2:	eb 61                	jmp    8647515 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12f>
 86474b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86474b7:	8b 50 10             	mov    0x10(%eax),%edx
 86474ba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86474bd:	0f b6 44 02 55       	movzbl 0x55(%edx,%eax,1),%eax
 86474c2:	0f be d0             	movsbl %al,%edx
 86474c5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86474c8:	89 d3                	mov    %edx,%ebx
 86474ca:	89 c1                	mov    %eax,%ecx
 86474cc:	d3 fb                	sar    %cl,%ebx
 86474ce:	89 d8                	mov    %ebx,%eax
 86474d0:	83 e0 01             	and    $0x1,%eax
 86474d3:	84 c0                	test   %al,%al
 86474d5:	74 07                	je     86474de <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0xf8>
 86474d7:	b8 00 00 00 00       	mov    $0x0,%eax
 86474dc:	eb 37                	jmp    8647515 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12f>
 86474de:	8b 45 08             	mov    0x8(%ebp),%eax
 86474e1:	8b 50 10             	mov    0x10(%eax),%edx
 86474e4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86474e7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86474ea:	8b 59 10             	mov    0x10(%ecx),%ebx
 86474ed:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 86474f0:	0f b6 5c 0b 55       	movzbl 0x55(%ebx,%ecx,1),%ebx
 86474f5:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 86474f8:	be 01 00 00 00       	mov    $0x1,%esi
 86474fd:	89 f7                	mov    %esi,%edi
 86474ff:	d3 e7                	shl    %cl,%edi
 8647501:	89 f9                	mov    %edi,%ecx
 8647503:	09 d9                	or     %ebx,%ecx
 8647505:	88 4c 02 55          	mov    %cl,0x55(%edx,%eax,1)
 8647509:	b8 01 00 00 00       	mov    $0x1,%eax
 864750e:	eb 05                	jmp    8647515 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj+0x12f>
 8647510:	b8 00 00 00 00       	mov    $0x0,%eax
 8647515:	83 c4 2c             	add    $0x2c,%esp
 8647518:	5b                   	pop    %ebx
 8647519:	5e                   	pop    %esi
 864751a:	5f                   	pop    %edi
 864751b:	5d                   	pop    %ebp
 864751c:	c3                   	ret
 864751d:	90                   	nop

```

```c
// CUserCharacInfo::setCurCharacTutorialFlag @ 0x86473e6

/* CUserCharacInfo::setCurCharacTutorialFlag(unsigned int) */

undefined4 __thiscall CUserCharacInfo::setCurCharacTutorialFlag(CUserCharacInfo *this,uint param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  if (*(int *)(this + 0x10) != 0) {
    enableSaveCharacStat(this);
    if (param_1 < 0x20) {
      if ((1 << ((byte)param_1 & 0x1f) & *(uint *)(*(int *)(this + 0x10) + 0x51)) != 0) {
        return 0;
      }
      *(uint *)(*(int *)(this + 0x10) + 0x51) =
           1 << ((byte)param_1 & 0x1f) | *(uint *)(*(int *)(this + 0x10) + 0x51);
      return 1;
    }
    if (param_1 < 0x80) {
      iVar1 = param_1 - 0x20;
      iVar2 = (int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3;
      if ((-1 < iVar2) && (iVar2 < 0x10)) {
        bVar3 = (byte)(iVar1 % 8);
        if (((int)*(char *)(*(int *)(this + 0x10) + 0x55 + iVar2) >> (bVar3 & 0x1f) & 1U) != 0) {
          return 0;
        }
        *(byte *)(*(int *)(this + 0x10) + 0x55 + iVar2) =
             (byte)(1 << (bVar3 & 0x1f)) | *(byte *)(*(int *)(this + 0x10) + 0x55 + iVar2);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

```

---

## setCurCharacVill

```asm
// === 086455bc CUserCharacInfo::setCurCharacVill  [0x086455bc-0x864561f] ===
 86455bc:	55                   	push   %ebp
 86455bd:	89 e5                	mov    %esp,%ebp
 86455bf:	83 ec 28             	sub    $0x28,%esp
 86455c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 86455c5:	88 45 f4             	mov    %al,-0xc(%ebp)
 86455c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86455cb:	8b 40 10             	mov    0x10(%eax),%eax
 86455ce:	85 c0                	test   %eax,%eax
 86455d0:	74 4a                	je     864561c <_ZN15CUserCharacInfo16setCurCharacVillEc+0x60>
 86455d2:	8b 45 08             	mov    0x8(%ebp),%eax
 86455d5:	8b 40 10             	mov    0x10(%eax),%eax
 86455d8:	8b 55 08             	mov    0x8(%ebp),%edx
 86455db:	8b 52 10             	mov    0x10(%edx),%edx
 86455de:	0f b6 52 22          	movzbl 0x22(%edx),%edx
 86455e2:	88 50 25             	mov    %dl,0x25(%eax)
 86455e5:	e8 bd 4d a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86455ea:	89 04 24             	mov    %eax,(%esp)
 86455ed:	e8 f6 ce af ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 86455f2:	84 c0                	test   %al,%al
 86455f4:	74 0c                	je     8645602 <_ZN15CUserCharacInfo16setCurCharacVillEc+0x46>
 86455f6:	8b 45 08             	mov    0x8(%ebp),%eax
 86455f9:	8b 40 10             	mov    0x10(%eax),%eax
 86455fc:	c6 40 23 02          	movb   $0x2,0x23(%eax)
 8645600:	eb 1b                	jmp    864561d <_ZN15CUserCharacInfo16setCurCharacVillEc+0x61>
 8645602:	8b 45 08             	mov    0x8(%ebp),%eax
 8645605:	89 04 24             	mov    %eax,(%esp)
 8645608:	e8 63 52 b5 ff       	call   819a870 <_ZN15CUserCharacInfo20enableSaveCharacStatEv>
 864560d:	8b 45 08             	mov    0x8(%ebp),%eax
 8645610:	8b 40 10             	mov    0x10(%eax),%eax
 8645613:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8645617:	88 50 22             	mov    %dl,0x22(%eax)
 864561a:	eb 01                	jmp    864561d <_ZN15CUserCharacInfo16setCurCharacVillEc+0x61>
 864561c:	90                   	nop
 864561d:	c9                   	leave
 864561e:	c3                   	ret
 864561f:	90                   	nop

```

```c
// CUserCharacInfo::setCurCharacVill @ 0x86455bc

/* CUserCharacInfo::setCurCharacVill(char) */

void __thiscall CUserCharacInfo::setCurCharacVill(CUserCharacInfo *this,char param_1)

{
  char cVar1;
  GameWorld *this_00;
  
  if (*(int *)(this + 0x10) != 0) {
    *(undefined1 *)(*(int *)(this + 0x10) + 0x25) = *(undefined1 *)(*(int *)(this + 0x10) + 0x22);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPVPChannel(this_00);
    if (cVar1 == '\0') {
      enableSaveCharacStat(this);
      *(char *)(*(int *)(this + 0x10) + 0x22) = param_1;
    }
    else {
      *(undefined1 *)(*(int *)(this + 0x10) + 0x23) = 2;
    }
  }
  return;
}

```

---

## setPremiumBonusExp

```asm
// === 0868e1f6 CUserCharacInfo::setPremiumBonusExp  [0x0868e1f6-0x868e261] ===
 868e1f6:	55                   	push   %ebp
 868e1f7:	89 e5                	mov    %esp,%ebp
 868e1f9:	83 ec 10             	sub    $0x10,%esp
 868e1fc:	8b 45 08             	mov    0x8(%ebp),%eax
 868e1ff:	8b 40 10             	mov    0x10(%eax),%eax
 868e202:	85 c0                	test   %eax,%eax
 868e204:	74 54                	je     868e25a <_ZN15CUserCharacInfo18setPremiumBonusExpEji+0x64>
 868e206:	8b 45 08             	mov    0x8(%ebp),%eax
 868e209:	8b 48 10             	mov    0x10(%eax),%ecx
 868e20c:	8b 45 0c             	mov    0xc(%ebp),%eax
 868e20f:	ba 00 00 00 00       	mov    $0x0,%edx
 868e214:	89 45 f8             	mov    %eax,-0x8(%ebp)
 868e217:	89 55 fc             	mov    %edx,-0x4(%ebp)
 868e21a:	df 6d f8             	fildll -0x8(%ebp)
 868e21d:	db 45 10             	fildl  0x10(%ebp)
 868e220:	d9 05 54 39 cf 08    	flds   0x8cf3954
 868e226:	de f9                	fdivrp %st,%st(1)
 868e228:	de c9                	fmulp  %st,%st(1)
 868e22a:	d9 7d f6             	fnstcw -0xa(%ebp)
 868e22d:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 868e231:	b4 0c                	mov    $0xc,%ah
 868e233:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 868e237:	d9 6d f4             	fldcw  -0xc(%ebp)
 868e23a:	df 7d f8             	fistpll -0x8(%ebp)
 868e23d:	d9 6d f6             	fldcw  -0xa(%ebp)
 868e240:	8b 45 f8             	mov    -0x8(%ebp),%eax
 868e243:	8b 55 fc             	mov    -0x4(%ebp),%edx
 868e246:	89 81 8d 12 00 00    	mov    %eax,0x128d(%ecx)
 868e24c:	8b 45 08             	mov    0x8(%ebp),%eax
 868e24f:	8b 40 10             	mov    0x10(%eax),%eax
 868e252:	8b 80 8d 12 00 00    	mov    0x128d(%eax),%eax
 868e258:	eb 05                	jmp    868e25f <_ZN15CUserCharacInfo18setPremiumBonusExpEji+0x69>
 868e25a:	b8 00 00 00 00       	mov    $0x0,%eax
 868e25f:	c9                   	leave
 868e260:	c3                   	ret
 868e261:	90                   	nop

```

```c
// CUserCharacInfo::setPremiumBonusExp @ 0x868e1f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::setPremiumBonusExp(unsigned int, int) */

undefined8 __regparm2 CUserCharacInfo::setPremiumBonusExp(uint param_1,int param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  uint in_stack_00000008;
  int in_stack_0000000c;
  undefined8 local_c;
  
  if (*(int *)(in_stack_00000004 + 0x10) == 0) {
    uVar2 = 0;
    local_c._4_4_ = param_2;
  }
  else {
    local_c = (ulonglong)in_stack_00000008;
    lVar1 = (longlong)ROUND(((float)in_stack_0000000c / _DAT_08cf3954) * (float)local_c);
    local_c._0_4_ = (undefined4)lVar1;
    local_c._4_4_ = (int)((ulonglong)lVar1 >> 0x20);
    *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x128d) = (undefined4)local_c;
    uVar2 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x10) + 0x128d);
  }
  return CONCAT44(local_c._4_4_,uVar2);
}

```

---

## setTagCharac

```asm
// === 0864e28e CUserCharacInfo::setTagCharac  [0x0864e28e-0x864e29b] ===
 864e28e:	55                   	push   %ebp
 864e28f:	89 e5                	mov    %esp,%ebp
 864e291:	8b 45 08             	mov    0x8(%ebp),%eax
 864e294:	8b 55 0c             	mov    0xc(%ebp),%edx
 864e297:	89 50 14             	mov    %edx,0x14(%eax)
 864e29a:	5d                   	pop    %ebp
 864e29b:	c3                   	ret

```

```c
// CUserCharacInfo::setTagCharac @ 0x864e28e

/* CUserCharacInfo::setTagCharac(_Charac_info*) */

void __thiscall CUserCharacInfo::setTagCharac(CUserCharacInfo *this,_Charac_info *param_1)

{
  *(_Charac_info **)(this + 0x14) = param_1;
  return;
}

```

---

## setWeekendBonusExp

```asm
// === 0868e2d2 CUserCharacInfo::setWeekendBonusExp  [0x0868e2d2-0x868e327] ===
 868e2d2:	55                   	push   %ebp
 868e2d3:	89 e5                	mov    %esp,%ebp
 868e2d5:	83 ec 10             	sub    $0x10,%esp
 868e2d8:	8b 45 08             	mov    0x8(%ebp),%eax
 868e2db:	8b 40 10             	mov    0x10(%eax),%eax
 868e2de:	85 c0                	test   %eax,%eax
 868e2e0:	74 43                	je     868e325 <_ZN15CUserCharacInfo18setWeekendBonusExpEji+0x53>
 868e2e2:	8b 45 08             	mov    0x8(%ebp),%eax
 868e2e5:	8b 48 10             	mov    0x10(%eax),%ecx
 868e2e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 868e2eb:	ba 00 00 00 00       	mov    $0x0,%edx
 868e2f0:	89 45 f8             	mov    %eax,-0x8(%ebp)
 868e2f3:	89 55 fc             	mov    %edx,-0x4(%ebp)
 868e2f6:	df 6d f8             	fildll -0x8(%ebp)
 868e2f9:	db 45 10             	fildl  0x10(%ebp)
 868e2fc:	d9 05 54 39 cf 08    	flds   0x8cf3954
 868e302:	de f9                	fdivrp %st,%st(1)
 868e304:	de c9                	fmulp  %st,%st(1)
 868e306:	d9 7d f6             	fnstcw -0xa(%ebp)
 868e309:	0f b7 45 f6          	movzwl -0xa(%ebp),%eax
 868e30d:	b4 0c                	mov    $0xc,%ah
 868e30f:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 868e313:	d9 6d f4             	fldcw  -0xc(%ebp)
 868e316:	db 5d f0             	fistpl -0x10(%ebp)
 868e319:	d9 6d f6             	fldcw  -0xa(%ebp)
 868e31c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 868e31f:	89 81 91 12 00 00    	mov    %eax,0x1291(%ecx)
 868e325:	c9                   	leave
 868e326:	c3                   	ret
 868e327:	90                   	nop

```

```c
// CUserCharacInfo::setWeekendBonusExp @ 0x868e2d2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CUserCharacInfo::setWeekendBonusExp(unsigned int, int) */

void __thiscall CUserCharacInfo::setWeekendBonusExp(CUserCharacInfo *this,uint param_1,int param_2)

{
  if (*(int *)(this + 0x10) != 0) {
    *(int *)(*(int *)(this + 0x10) + 0x1291) =
         (int)ROUND(((float)param_2 / _DAT_08cf3954) * (float)param_1);
  }
  return;
}

```

---

## setWeekendBonusFatigue

```asm
// === 0868e2a4 CUserCharacInfo::setWeekendBonusFatigue  [0x0868e2a4-0x868e2d1] ===
 868e2a4:	55                   	push   %ebp
 868e2a5:	89 e5                	mov    %esp,%ebp
 868e2a7:	83 ec 04             	sub    $0x4,%esp
 868e2aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 868e2ad:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 868e2b1:	8b 45 08             	mov    0x8(%ebp),%eax
 868e2b4:	8b 40 10             	mov    0x10(%eax),%eax
 868e2b7:	85 c0                	test   %eax,%eax
 868e2b9:	74 14                	je     868e2cf <_ZN15CUserCharacInfo22setWeekendBonusFatigueEt+0x2b>
 868e2bb:	8b 45 08             	mov    0x8(%ebp),%eax
 868e2be:	8b 40 10             	mov    0x10(%eax),%eax
 868e2c1:	8b 15 5c 0f 37 09    	mov    0x9370f5c,%edx
 868e2c7:	66 03 55 fc          	add    -0x4(%ebp),%dx
 868e2cb:	66 89 50 35          	mov    %dx,0x35(%eax)
 868e2cf:	c9                   	leave
 868e2d0:	c3                   	ret
 868e2d1:	90                   	nop

```

```c
// CUserCharacInfo::setWeekendBonusFatigue @ 0x868e2a4

/* CUserCharacInfo::setWeekendBonusFatigue(unsigned short) */

void __thiscall CUserCharacInfo::setWeekendBonusFatigue(CUserCharacInfo *this,ushort param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(ushort *)(*(int *)(this + 0x10) + 0x35) = (short)DEFAULT_MAX_FATIGUE + param_1;
  }
  return;
}

```

---

## set_charac_visible_grow_avatar

```asm
// === 0868be30 CUserCharacInfo::set_charac_visible_grow_avatar  [0x0868be30-0x868be6f] ===
 868be30:	55                   	push   %ebp
 868be31:	89 e5                	mov    %esp,%ebp
 868be33:	83 ec 04             	sub    $0x4,%esp
 868be36:	8b 45 0c             	mov    0xc(%ebp),%eax
 868be39:	88 45 fc             	mov    %al,-0x4(%ebp)
 868be3c:	8b 45 08             	mov    0x8(%ebp),%eax
 868be3f:	8b 40 10             	mov    0x10(%eax),%eax
 868be42:	85 c0                	test   %eax,%eax
 868be44:	74 28                	je     868be6e <_ZN15CUserCharacInfo30set_charac_visible_grow_avatarEb+0x3e>
 868be46:	8b 45 08             	mov    0x8(%ebp),%eax
 868be49:	8b 50 10             	mov    0x10(%eax),%edx
 868be4c:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 868be50:	c1 e0 07             	shl    $0x7,%eax
 868be53:	c0 f8 07             	sar    $0x7,%al
 868be56:	83 e0 01             	and    $0x1,%eax
 868be59:	8d 0c 00             	lea    (%eax,%eax,1),%ecx
 868be5c:	0f b6 82 40 0e 00 00 	movzbl 0xe40(%edx),%eax
 868be63:	83 e0 fd             	and    $0xfffffffd,%eax
 868be66:	09 c8                	or     %ecx,%eax
 868be68:	88 82 40 0e 00 00    	mov    %al,0xe40(%edx)
 868be6e:	c9                   	leave
 868be6f:	c3                   	ret

```

```c
// CUserCharacInfo::set_charac_visible_grow_avatar @ 0x868be30

/* CUserCharacInfo::set_charac_visible_grow_avatar(bool) */

void __thiscall CUserCharacInfo::set_charac_visible_grow_avatar(CUserCharacInfo *this,bool param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(byte *)(*(int *)(this + 0x10) + 0xe40) =
         *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfd | ((char)(param_1 << 7) >> 7 & 1U) * '\x02'
    ;
  }
  return;
}

```

---

## set_charac_visible_teleport_

```asm
// === 0868be70 CUserCharacInfo::set_charac_visible_teleport_  [0x0868be70-0x868beb3] ===
 868be70:	55                   	push   %ebp
 868be71:	89 e5                	mov    %esp,%ebp
 868be73:	83 ec 04             	sub    $0x4,%esp
 868be76:	8b 45 0c             	mov    0xc(%ebp),%eax
 868be79:	88 45 fc             	mov    %al,-0x4(%ebp)
 868be7c:	8b 45 08             	mov    0x8(%ebp),%eax
 868be7f:	8b 40 10             	mov    0x10(%eax),%eax
 868be82:	85 c0                	test   %eax,%eax
 868be84:	74 2c                	je     868beb2 <_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb+0x42>
 868be86:	8b 45 08             	mov    0x8(%ebp),%eax
 868be89:	8b 50 10             	mov    0x10(%eax),%edx
 868be8c:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 868be90:	c1 e0 07             	shl    $0x7,%eax
 868be93:	c0 f8 07             	sar    $0x7,%al
 868be96:	83 e0 01             	and    $0x1,%eax
 868be99:	8d 0c 85 00 00 00 00 	lea    0x0(,%eax,4),%ecx
 868bea0:	0f b6 82 40 0e 00 00 	movzbl 0xe40(%edx),%eax
 868bea7:	83 e0 fb             	and    $0xfffffffb,%eax
 868beaa:	09 c8                	or     %ecx,%eax
 868beac:	88 82 40 0e 00 00    	mov    %al,0xe40(%edx)
 868beb2:	c9                   	leave
 868beb3:	c3                   	ret

```

```c
// CUserCharacInfo::set_charac_visible_teleport_ @ 0x868be70

/* CUserCharacInfo::set_charac_visible_teleport_(bool) */

void __thiscall CUserCharacInfo::set_charac_visible_teleport_(CUserCharacInfo *this,bool param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(byte *)(*(int *)(this + 0x10) + 0xe40) =
         *(byte *)(*(int *)(this + 0x10) + 0xe40) & 0xfb | ((char)(param_1 << 7) >> 7 & 1U) * '\x04'
    ;
  }
  return;
}

```

---

## set_charac_visible_values

```asm
// === 0868be08 CUserCharacInfo::set_charac_visible_values  [0x0868be08-0x868be2f] ===
 868be08:	55                   	push   %ebp
 868be09:	89 e5                	mov    %esp,%ebp
 868be0b:	83 ec 04             	sub    $0x4,%esp
 868be0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 868be11:	88 45 fc             	mov    %al,-0x4(%ebp)
 868be14:	8b 45 08             	mov    0x8(%ebp),%eax
 868be17:	8b 40 10             	mov    0x10(%eax),%eax
 868be1a:	85 c0                	test   %eax,%eax
 868be1c:	74 10                	je     868be2e <_ZN15CUserCharacInfo25set_charac_visible_valuesEc+0x26>
 868be1e:	8b 45 08             	mov    0x8(%ebp),%eax
 868be21:	8b 40 10             	mov    0x10(%eax),%eax
 868be24:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 868be28:	88 90 40 0e 00 00    	mov    %dl,0xe40(%eax)
 868be2e:	c9                   	leave
 868be2f:	c3                   	ret

```

```c
// CUserCharacInfo::set_charac_visible_values @ 0x868be08

/* CUserCharacInfo::set_charac_visible_values(char) */

void __thiscall CUserCharacInfo::set_charac_visible_values(CUserCharacInfo *this,char param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    *(char *)(*(int *)(this + 0x10) + 0xe40) = param_1;
  }
  return;
}

```

---

## set_guild_exp

```asm
// === 08645db4 CUserCharacInfo::set_guild_exp  [0x08645db4-0x8645de1] ===
 8645db4:	55                   	push   %ebp
 8645db5:	89 e5                	mov    %esp,%ebp
 8645db7:	8b 45 08             	mov    0x8(%ebp),%eax
 8645dba:	8b 40 10             	mov    0x10(%eax),%eax
 8645dbd:	85 c0                	test   %eax,%eax
 8645dbf:	74 1f                	je     8645de0 <_ZN15CUserCharacInfo13set_guild_expEi+0x2c>
 8645dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645dc4:	8b 40 10             	mov    0x10(%eax),%eax
 8645dc7:	8b 80 be 0d 00 00    	mov    0xdbe(%eax),%eax
 8645dcd:	85 c0                	test   %eax,%eax
 8645dcf:	74 0f                	je     8645de0 <_ZN15CUserCharacInfo13set_guild_expEi+0x2c>
 8645dd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8645dd4:	8b 40 10             	mov    0x10(%eax),%eax
 8645dd7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8645dda:	89 90 e9 0d 00 00    	mov    %edx,0xde9(%eax)
 8645de0:	5d                   	pop    %ebp
 8645de1:	c3                   	ret

```

```c
// CUserCharacInfo::set_guild_exp @ 0x8645db4

/* CUserCharacInfo::set_guild_exp(int) */

void __thiscall CUserCharacInfo::set_guild_exp(CUserCharacInfo *this,int param_1)

{
  if ((*(int *)(this + 0x10) != 0) && (*(int *)(*(int *)(this + 0x10) + 0xdbe) != 0)) {
    *(int *)(*(int *)(this + 0x10) + 0xde9) = param_1;
  }
  return;
}

```

---

## set_uppermember_exp_level

```asm
// === 08645b80 CUserCharacInfo::set_uppermember_exp_level  [0x08645b80-0x8645c17] ===
 8645b80:	55                   	push   %ebp
 8645b81:	89 e5                	mov    %esp,%ebp
 8645b83:	83 ec 38             	sub    $0x38,%esp
 8645b86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8645b89:	88 45 f4             	mov    %al,-0xc(%ebp)
 8645b8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b8f:	8b 40 10             	mov    0x10(%eax),%eax
 8645b92:	85 c0                	test   %eax,%eax
 8645b94:	74 7f                	je     8645c15 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh+0x95>
 8645b96:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 8645b9a:	74 69                	je     8645c05 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh+0x85>
 8645b9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8645b9f:	8b 40 10             	mov    0x10(%eax),%eax
 8645ba2:	0f b6 80 32 0e 00 00 	movzbl 0xe32(%eax),%eax
 8645ba9:	3a 45 f4             	cmp    -0xc(%ebp),%al
 8645bac:	76 57                	jbe    8645c05 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh+0x85>
 8645bae:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8645bb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8645bb5:	8b 40 10             	mov    0x10(%eax),%eax
 8645bb8:	0f b6 80 32 0e 00 00 	movzbl 0xe32(%eax),%eax
 8645bbf:	0f b6 c0             	movzbl %al,%eax
 8645bc2:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8645bc5:	8b 49 10             	mov    0x10(%ecx),%ecx
 8645bc8:	83 c1 04             	add    $0x4,%ecx
 8645bcb:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8645bcf:	89 44 24 18          	mov    %eax,0x18(%esp)
 8645bd3:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8645bd7:	c7 44 24 10 9c e1 ce 	movl   $0x8cee19c,0x10(%esp)
 8645bde:	08 
 8645bdf:	c7 44 24 0c d2 02 00 	movl   $0x2d2,0xc(%esp)
 8645be6:	00 
 8645be7:	c7 44 24 08 20 37 cf 	movl   $0x8cf3720,0x8(%esp)
 8645bee:	08 
 8645bef:	c7 44 24 04 dd e1 ce 	movl   $0x8cee1dd,0x4(%esp)
 8645bf6:	08 
 8645bf7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8645bfe:	e8 07 e0 48 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8645c03:	eb 10                	jmp    8645c15 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh+0x95>
 8645c05:	8b 45 08             	mov    0x8(%ebp),%eax
 8645c08:	8b 40 10             	mov    0x10(%eax),%eax
 8645c0b:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8645c0f:	88 90 32 0e 00 00    	mov    %dl,0xe32(%eax)
 8645c15:	c9                   	leave
 8645c16:	c3                   	ret
 8645c17:	90                   	nop

```

```c
// CUserCharacInfo::set_uppermember_exp_level @ 0x8645b80

/* CUserCharacInfo::set_uppermember_exp_level(unsigned char) */

void __thiscall CUserCharacInfo::set_uppermember_exp_level(CUserCharacInfo *this,uchar param_1)

{
  if (*(int *)(this + 0x10) != 0) {
    if ((param_1 == '\0') || (*(byte *)(*(int *)(this + 0x10) + 0xe32) <= param_1)) {
      *(uchar *)(*(int *)(this + 0x10) + 0xe32) = param_1;
    }
    else {
      LogManager::logFormat
                (1,"user.cpp","void CUserCharacInfo::set_uppermember_exp_level(unsigned char)",0x2d2
                 ,"set member exp level error , name(%s) , level(%d), new level(%d)",
                 *(int *)(this + 0x10) + 4,(uint)*(byte *)(*(int *)(this + 0x10) + 0xe32),
                 (uint)param_1);
    }
  }
  return;
}

```

---

## useWinPoint

```asm
// === 0864e29c CUserCharacInfo::useWinPoint  [0x0864e29c-0x864e2d7] ===
 864e29c:	55                   	push   %ebp
 864e29d:	89 e5                	mov    %esp,%ebp
 864e29f:	83 ec 18             	sub    $0x18,%esp
 864e2a2:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2a5:	89 04 24             	mov    %eax,(%esp)
 864e2a8:	e8 d9 0f be ff       	call   822f286 <_ZN15CUserCharacInfo13enableSavePvPEv>
 864e2ad:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2b0:	8b 40 70             	mov    0x70(%eax),%eax
 864e2b3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 864e2b6:	7c 13                	jl     864e2cb <_ZN15CUserCharacInfo11useWinPointEi12eWPSubReason+0x2f>
 864e2b8:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2bb:	8b 40 70             	mov    0x70(%eax),%eax
 864e2be:	89 c2                	mov    %eax,%edx
 864e2c0:	2b 55 0c             	sub    0xc(%ebp),%edx
 864e2c3:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2c6:	89 50 70             	mov    %edx,0x70(%eax)
 864e2c9:	eb 0a                	jmp    864e2d5 <_ZN15CUserCharacInfo11useWinPointEi12eWPSubReason+0x39>
 864e2cb:	8b 45 08             	mov    0x8(%ebp),%eax
 864e2ce:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 864e2d5:	c9                   	leave
 864e2d6:	c3                   	ret
 864e2d7:	90                   	nop

```

```c
// CUserCharacInfo::useWinPoint @ 0x864e29c

/* CUserCharacInfo::useWinPoint(int, eWPSubReason) */

void CUserCharacInfo::useWinPoint(CUserCharacInfo *param_1,int param_2)

{
  enableSavePvP(param_1);
  if (*(int *)(param_1 + 0x70) < param_2) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) - param_2;
  }
  return;
}

```


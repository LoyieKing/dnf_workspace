# TimerScheduleTenSecond

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08637936 TimerScheduleTenSecond::dispatch_sig  [0x08637936-0x8637a61] ===
 8637936:	55                   	push   %ebp
 8637937:	89 e5                	mov    %esp,%ebp
 8637939:	56                   	push   %esi
 863793a:	53                   	push   %ebx
 863793b:	83 ec 30             	sub    $0x30,%esp
 863793e:	e8 4b 48 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637943:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8637949:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863794c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637950:	89 04 24             	mov    %eax,(%esp)
 8637953:	e8 5c c1 a9 ff       	call   80d3ab4 <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE5beginEv>
 8637958:	83 ec 04             	sub    $0x4,%esp
 863795b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863795e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637962:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637965:	89 04 24             	mov    %eax,(%esp)
 8637968:	e8 89 cb c8 ff       	call   82c44f6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 863796d:	e8 1c 48 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637972:	8d 90 2c 02 00 00    	lea    0x22c(%eax),%edx
 8637978:	8d 45 f0             	lea    -0x10(%ebp),%eax
 863797b:	89 54 24 04          	mov    %edx,0x4(%esp)
 863797f:	89 04 24             	mov    %eax,(%esp)
 8637982:	e8 53 c1 a9 ff       	call   80d3ada <_ZNSt3mapIjP5CUserSt4lessIjESaISt4pairIKjS1_EEE3endEv>
 8637987:	83 ec 04             	sub    $0x4,%esp
 863798a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 863798d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637991:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8637994:	89 04 24             	mov    %eax,(%esp)
 8637997:	e8 5a cb c8 ff       	call   82c44f6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 863799c:	e9 8c 00 00 00       	jmp    8637a2d <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0xf7>
 86379a1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86379a4:	89 04 24             	mov    %eax,(%esp)
 86379a7:	e8 32 98 eb ff       	call   84f11de <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEptEv>
 86379ac:	8b 40 04             	mov    0x4(%eax),%eax
 86379af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86379b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86379b5:	89 04 24             	mov    %eax,(%esp)
 86379b8:	e8 cf 29 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86379bd:	83 f8 01             	cmp    $0x1,%eax
 86379c0:	7e 16                	jle    86379d8 <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0xa2>
 86379c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86379c5:	89 04 24             	mov    %eax,(%esp)
 86379c8:	e8 17 83 bf ff       	call   822fce4 <_ZN5CUser13getAntibotKeyEv>
 86379cd:	85 c0                	test   %eax,%eax
 86379cf:	78 07                	js     86379d8 <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0xa2>
 86379d1:	b8 01 00 00 00       	mov    $0x1,%eax
 86379d6:	eb 05                	jmp    86379dd <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0xa7>
 86379d8:	b8 00 00 00 00       	mov    $0x0,%eax
 86379dd:	84 c0                	test   %al,%al
 86379df:	74 41                	je     8637a22 <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0xec>
 86379e1:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 86379e6:	8b 00                	mov    (%eax),%eax
 86379e8:	83 c0 14             	add    $0x14,%eax
 86379eb:	8b 30                	mov    (%eax),%esi
 86379ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86379f0:	89 04 24             	mov    %eax,(%esp)
 86379f3:	e8 76 29 aa ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86379f8:	89 c3                	mov    %eax,%ebx
 86379fa:	e8 82 47 a9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 86379ff:	89 04 24             	mov    %eax,(%esp)
 8637a02:	e8 0f cb bf ff       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 8637a07:	8b 15 e4 f7 41 09    	mov    0x941f7e4,%edx
 8637a0d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8637a11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637a18:	00 
 8637a19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637a1d:	89 14 24             	mov    %edx,(%esp)
 8637a20:	ff d6                	call   *%esi
 8637a22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637a25:	89 04 24             	mov    %eax,(%esp)
 8637a28:	e8 7b 7f c9 ff       	call   82cf9a8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEppEv>
 8637a2d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8637a30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8637a34:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637a37:	89 04 24             	mov    %eax,(%esp)
 8637a3a:	e8 6d 58 00 00       	call   863d2ac <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjP5CUserEEneERKS5_>
 8637a3f:	84 c0                	test   %al,%al
 8637a41:	0f 85 5a ff ff ff    	jne    86379a1 <_ZN22TimerScheduleTenSecond12dispatch_sigEiij+0x6b>
 8637a47:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 8637a4e:	e8 0f 00 00 00       	call   8637a62 <_ZN22TimerScheduleTenSecond15registNextTimerEj>
 8637a53:	b8 01 00 00 00       	mov    $0x1,%eax
 8637a58:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8637a5b:	83 c4 00             	add    $0x0,%esp
 8637a5e:	5b                   	pop    %ebx
 8637a5f:	5e                   	pop    %esi
 8637a60:	5d                   	pop    %ebp
 8637a61:	c3                   	ret

```

```c
// TimerScheduleTenSecond::dispatch_sig @ 0x8637936

/* TimerScheduleTenSecond::dispatch_sig(int, int, unsigned int) */

undefined4 TimerScheduleTenSecond::dispatch_sig(int param_1,int param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CEnvironment *this;
  undefined4 uVar6;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>> local_1c [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_18 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_14 [4];
  CUser *local_10;
  
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::begin(local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
            (local_1c,(_Rb_tree_iterator *)local_18);
  G_CGameManager();
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::end(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::_Rb_tree_const_iterator
            (local_20,(_Rb_tree_iterator *)local_14);
  do {
    cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                      (local_1c,(_Rb_tree_const_iterator *)local_20);
    if (cVar3 == '\0') {
      registNextTimer(10);
      return 1;
    }
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator->(local_1c)
    ;
    local_10 = *(CUser **)(iVar4 + 4);
    iVar4 = CUser::get_state(local_10);
    if (iVar4 < 2) {
LAB_086379d8:
      bVar2 = false;
    }
    else {
      iVar4 = CUser::getAntibotKey(local_10);
      if (iVar4 < 0) goto LAB_086379d8;
      bVar2 = true;
    }
    if (bVar2) {
      pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0x14);
      uVar5 = CUser::get_acc_id(local_10);
      this = (CEnvironment *)G_CEnvironment();
      uVar6 = CEnvironment::getProcessSequence(this);
      (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar5);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,CUser*>>::operator++(local_1c);
  } while( true );
}

```

---

## registNextTimer

```asm
// === 08637a62 TimerScheduleTenSecond::registNextTimer  [0x08637a62-0x8637aab] ===
 8637a62:	55                   	push   %ebp
 8637a63:	89 e5                	mov    %esp,%ebp
 8637a65:	53                   	push   %ebx
 8637a66:	83 ec 24             	sub    $0x24,%esp
 8637a69:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8637a6c:	e8 0b ea ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8637a71:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8637a78:	00 
 8637a79:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8637a80:	00 
 8637a81:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8637a85:	c7 44 24 0c 57 00 00 	movl   $0x57,0xc(%esp)
 8637a8c:	00 
 8637a8d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637a94:	00 
 8637a95:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8637a9c:	00 
 8637a9d:	89 04 24             	mov    %eax,(%esp)
 8637aa0:	e8 71 93 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8637aa5:	83 c4 24             	add    $0x24,%esp
 8637aa8:	5b                   	pop    %ebx
 8637aa9:	5d                   	pop    %ebp
 8637aaa:	c3                   	ret
 8637aab:	90                   	nop

```

```c
// TimerScheduleTenSecond::registNextTimer @ 0x8637a62

/* TimerScheduleTenSecond::registNextTimer(unsigned int) */

void TimerScheduleTenSecond::registNextTimer(uint param_1)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x57,param_1,0,0);
  return;
}

```


# COnTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## COnTimeEvent

```asm
// === 081bb826 COnTimeEvent::COnTimeEvent  [0x081bb826-0x81bb8ad] ===
 81bb826:	55                   	push   %ebp
 81bb827:	89 e5                	mov    %esp,%ebp
 81bb829:	56                   	push   %esi
 81bb82a:	53                   	push   %ebx
 81bb82b:	83 ec 10             	sub    $0x10,%esp
 81bb82e:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb831:	89 04 24             	mov    %eax,(%esp)
 81bb834:	e8 f3 f5 f4 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81bb839:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb83c:	c7 00 c8 07 bc 08    	movl   $0x8bc07c8,(%eax)
 81bb842:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb845:	83 c0 14             	add    $0x14,%eax
 81bb848:	89 04 24             	mov    %eax,(%esp)
 81bb84b:	e8 66 07 00 00       	call   81bbfb6 <_ZN15CRewardUserListC1Ev>
 81bb850:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb853:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 81bb85a:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb85d:	c7 40 10 01 00 00 00 	movl   $0x1,0x10(%eax)
 81bb864:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb867:	83 c0 14             	add    $0x14,%eax
 81bb86a:	89 04 24             	mov    %eax,(%esp)
 81bb86d:	e8 d0 07 00 00       	call   81bc042 <_ZN15CRewardUserList5clearEv>
 81bb872:	eb 33                	jmp    81bb8a7 <_ZN12COnTimeEventC1Ev+0x81>
 81bb874:	89 d3                	mov    %edx,%ebx
 81bb876:	89 c6                	mov    %eax,%esi
 81bb878:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb87b:	83 c0 14             	add    $0x14,%eax
 81bb87e:	89 04 24             	mov    %eax,(%esp)
 81bb881:	e8 76 07 00 00       	call   81bbffc <_ZN15CRewardUserListD1Ev>
 81bb886:	89 f0                	mov    %esi,%eax
 81bb888:	89 da                	mov    %ebx,%edx
 81bb88a:	eb 00                	jmp    81bb88c <_ZN12COnTimeEventC1Ev+0x66>
 81bb88c:	89 d3                	mov    %edx,%ebx
 81bb88e:	89 c6                	mov    %eax,%esi
 81bb890:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb893:	89 04 24             	mov    %eax,(%esp)
 81bb896:	e8 b7 f5 f4 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81bb89b:	89 f0                	mov    %esi,%eax
 81bb89d:	89 da                	mov    %ebx,%edx
 81bb89f:	89 04 24             	mov    %eax,(%esp)
 81bb8a2:	e8 a9 7e 92 00       	call   8ae3750 <_Unwind_Resume>
 81bb8a7:	83 c4 10             	add    $0x10,%esp
 81bb8aa:	5b                   	pop    %ebx
 81bb8ab:	5e                   	pop    %esi
 81bb8ac:	5d                   	pop    %ebp
 81bb8ad:	c3                   	ret

```

```c
// COnTimeEvent::COnTimeEvent @ 0x81bb826

/* COnTimeEvent::COnTimeEvent() */

void __thiscall COnTimeEvent::COnTimeEvent(COnTimeEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__COnTimeEvent_08bc07c8;
                    /* try { // try from 081bb84b to 081bb84f has its CatchHandler @ 081bb88c */
  CRewardUserList::CRewardUserList((CRewardUserList *)(this + 0x14));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 1;
                    /* try { // try from 081bb86d to 081bb871 has its CatchHandler @ 081bb874 */
  CRewardUserList::clear((CRewardUserList *)(this + 0x14));
  return;
}

```

---

## EndEvent

```asm
// === 081bb91a COnTimeEvent::EndEvent  [0x081bb91a-0x81bb96b] ===
 81bb91a:	55                   	push   %ebp
 81bb91b:	89 e5                	mov    %esp,%ebp
 81bb91d:	83 ec 28             	sub    $0x28,%esp
 81bb920:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb923:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bb92a:	00 
 81bb92b:	89 04 24             	mov    %eax,(%esp)
 81bb92e:	e8 af cb f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81bb933:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bb93a:	00 
 81bb93b:	c7 44 24 08 4d 00 00 	movl   $0x4d,0x8(%esp)
 81bb942:	00 
 81bb943:	c7 44 24 04 40 07 bc 	movl   $0x8bc0740,0x4(%esp)
 81bb94a:	08 
 81bb94b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb94e:	89 04 24             	mov    %eax,(%esp)
 81bb951:	e8 c2 3d 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81bb956:	c7 44 24 04 3d fa bb 	movl   $0x8bbfa3d,0x4(%esp)
 81bb95d:	08 
 81bb95e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb961:	89 04 24             	mov    %eax,(%esp)
 81bb964:	e8 1f 3e 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81bb969:	c9                   	leave
 81bb96a:	c3                   	ret
 81bb96b:	90                   	nop

```

```c
// COnTimeEvent::EndEvent @ 0x81bb91a

/* COnTimeEvent::EndEvent() */

void __thiscall COnTimeEvent::EndEvent(COnTimeEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void COnTimeEvent::EndEvent()",0x4d,0);
  cMyTrace::operator()(local_1c,"COnTimeEvent Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 081bb8ae COnTimeEvent::StartEvent  [0x081bb8ae-0x81bb8c9] ===
 81bb8ae:	55                   	push   %ebp
 81bb8af:	89 e5                	mov    %esp,%ebp
 81bb8b1:	83 ec 18             	sub    $0x18,%esp
 81bb8b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb8b7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81bb8be:	00 
 81bb8bf:	89 04 24             	mov    %eax,(%esp)
 81bb8c2:	e8 1b cc f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81bb8c7:	c9                   	leave
 81bb8c8:	c3                   	ret
 81bb8c9:	90                   	nop

```

```c
// COnTimeEvent::StartEvent @ 0x81bb8ae

/* COnTimeEvent::StartEvent() */

void __thiscall COnTimeEvent::StartEvent(COnTimeEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_081bb8ca

```asm
// === 081bb8ca COnTimeEvent::StartEvent  [0x081bb8ca-0x81bb919] ===
 81bb8ca:	55                   	push   %ebp
 81bb8cb:	89 e5                	mov    %esp,%ebp
 81bb8cd:	83 ec 28             	sub    $0x28,%esp
 81bb8d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb8d3:	8b 00                	mov    (%eax),%eax
 81bb8d5:	83 c0 08             	add    $0x8,%eax
 81bb8d8:	8b 10                	mov    (%eax),%edx
 81bb8da:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb8dd:	89 04 24             	mov    %eax,(%esp)
 81bb8e0:	ff d2                	call   *%edx
 81bb8e2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81bb8e9:	00 
 81bb8ea:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 81bb8f1:	00 
 81bb8f2:	c7 44 24 04 80 07 bc 	movl   $0x8bc0780,0x4(%esp)
 81bb8f9:	08 
 81bb8fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb8fd:	89 04 24             	mov    %eax,(%esp)
 81bb900:	e8 13 3e 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81bb905:	c7 44 24 04 23 fa bb 	movl   $0x8bbfa23,0x4(%esp)
 81bb90c:	08 
 81bb90d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bb910:	89 04 24             	mov    %eax,(%esp)
 81bb913:	e8 70 3e 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81bb918:	c9                   	leave
 81bb919:	c3                   	ret

```

```c
// COnTimeEvent::StartEvent @ 0x81bb8ca

/* COnTimeEvent::StartEvent(Word_Param) */

void COnTimeEvent::StartEvent(int *param_1)

{
  cMyTrace local_1c [24];
  
  (**(code **)(*param_1 + 8))(param_1);
  cMyTrace::cMyTrace(local_1c,"virtual void COnTimeEvent::StartEvent(Word_Param)",0x47,0);
  cMyTrace::operator()(local_1c,"COnTimeEvent Event Start!");
  return;
}

```

---

## delete_reward_user

```asm
// === 081bbc64 COnTimeEvent::delete_reward_user  [0x081bbc64-0x81bbcc7] ===
 81bbc64:	55                   	push   %ebp
 81bbc65:	89 e5                	mov    %esp,%ebp
 81bbc67:	53                   	push   %ebx
 81bbc68:	83 ec 14             	sub    $0x14,%esp
 81bbc6b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81bbc6f:	75 07                	jne    81bbc78 <_ZN12COnTimeEvent18delete_reward_userEP5CUser+0x14>
 81bbc71:	b8 00 00 00 00       	mov    $0x0,%eax
 81bbc76:	eb 4a                	jmp    81bbcc2 <_ZN12COnTimeEvent18delete_reward_userEP5CUser+0x5e>
 81bbc78:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbc7b:	89 04 24             	mov    %eax,(%esp)
 81bbc7e:	e8 77 04 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbc83:	89 c3                	mov    %eax,%ebx
 81bbc85:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbc88:	89 04 24             	mov    %eax,(%esp)
 81bbc8b:	e8 a0 04 00 00       	call   81bc130 <_ZNK5CUser24get_ontime_last_recv_idxEv>
 81bbc90:	39 c3                	cmp    %eax,%ebx
 81bbc92:	0f 94 c0             	sete   %al
 81bbc95:	84 c0                	test   %al,%al
 81bbc97:	74 24                	je     81bbcbd <_ZN12COnTimeEvent18delete_reward_userEP5CUser+0x59>
 81bbc99:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbc9c:	89 04 24             	mov    %eax,(%esp)
 81bbc9f:	e8 ca e6 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bbca4:	8b 55 08             	mov    0x8(%ebp),%edx
 81bbca7:	83 c2 14             	add    $0x14,%edx
 81bbcaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbcae:	89 14 24             	mov    %edx,(%esp)
 81bbcb1:	e8 06 fb ff ff       	call   81bb7bc <_ZN15CRewardUserList11delete_markEj>
 81bbcb6:	b8 01 00 00 00       	mov    $0x1,%eax
 81bbcbb:	eb 05                	jmp    81bbcc2 <_ZN12COnTimeEvent18delete_reward_userEP5CUser+0x5e>
 81bbcbd:	b8 00 00 00 00       	mov    $0x0,%eax
 81bbcc2:	83 c4 14             	add    $0x14,%esp
 81bbcc5:	5b                   	pop    %ebx
 81bbcc6:	5d                   	pop    %ebp
 81bbcc7:	c3                   	ret

```

```c
// COnTimeEvent::delete_reward_user @ 0x81bbc64

/* COnTimeEvent::delete_reward_user(CUser*) */

undefined4 __thiscall COnTimeEvent::delete_reward_user(COnTimeEvent *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_ontime_id(this);
    iVar3 = CUser::get_ontime_last_recv_idx(param_1);
    if (iVar2 == iVar3) {
      CUser::get_acc_id(param_1);
      CRewardUserList::delete_mark((uint)(this + 0x14));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## get_ontime_reward_user_count

```asm
// === 081bb9c6 COnTimeEvent::get_ontime_reward_user_count  [0x081bb9c6-0x81bb9db] ===
 81bb9c6:	55                   	push   %ebp
 81bb9c7:	89 e5                	mov    %esp,%ebp
 81bb9c9:	83 ec 18             	sub    $0x18,%esp
 81bb9cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb9cf:	83 c0 14             	add    $0x14,%eax
 81bb9d2:	89 04 24             	mov    %eax,(%esp)
 81bb9d5:	e8 8a 06 00 00       	call   81bc064 <_ZN15CRewardUserList14get_index_sizeEv>
 81bb9da:	c9                   	leave
 81bb9db:	c3                   	ret

```

```c
// COnTimeEvent::get_ontime_reward_user_count @ 0x81bb9c6

/* COnTimeEvent::get_ontime_reward_user_count() */

void __thiscall COnTimeEvent::get_ontime_reward_user_count(COnTimeEvent *this)

{
  CRewardUserList::get_index_size((CRewardUserList *)(this + 0x14));
  return;
}

```

---

## get_reward_end_time

```asm
// === 081bb9ba COnTimeEvent::get_reward_end_time  [0x081bb9ba-0x81bb9c5] ===
 81bb9ba:	55                   	push   %ebp
 81bb9bb:	89 e5                	mov    %esp,%ebp
 81bb9bd:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb9c0:	8b 40 54             	mov    0x54(%eax),%eax
 81bb9c3:	5d                   	pop    %ebp
 81bb9c4:	c3                   	ret
 81bb9c5:	90                   	nop

```

```c
// COnTimeEvent::get_reward_end_time @ 0x81bb9ba

/* COnTimeEvent::get_reward_end_time() */

undefined4 __thiscall COnTimeEvent::get_reward_end_time(COnTimeEvent *this)

{
  return *(undefined4 *)(this + 0x54);
}

```

---

## get_reward_state

```asm
// === 081bb96c COnTimeEvent::get_reward_state  [0x081bb96c-0x81bb977] ===
 81bb96c:	55                   	push   %ebp
 81bb96d:	89 e5                	mov    %esp,%ebp
 81bb96f:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb972:	8b 40 10             	mov    0x10(%eax),%eax
 81bb975:	5d                   	pop    %ebp
 81bb976:	c3                   	ret
 81bb977:	90                   	nop

```

```c
// COnTimeEvent::get_reward_state @ 0x81bb96c

/* COnTimeEvent::get_reward_state() */

undefined4 __thiscall COnTimeEvent::get_reward_state(COnTimeEvent *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## insert_reward_user

```asm
// === 081bb9dc COnTimeEvent::insert_reward_user  [0x081bb9dc-0x81bbc63] ===
 81bb9dc:	55                   	push   %ebp
 81bb9dd:	89 e5                	mov    %esp,%ebp
 81bb9df:	57                   	push   %edi
 81bb9e0:	56                   	push   %esi
 81bb9e1:	53                   	push   %ebx
 81bb9e2:	81 ec 4c 02 00 00    	sub    $0x24c,%esp
 81bb9e8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81bb9ec:	75 0a                	jne    81bb9f8 <_ZN12COnTimeEvent18insert_reward_userEP5CUser+0x1c>
 81bb9ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81bb9f3:	e9 60 02 00 00       	jmp    81bbc58 <_ZN12COnTimeEvent18insert_reward_userEP5CUser+0x27c>
 81bb9f8:	8d 9d d8 fe ff ff    	lea    -0x128(%ebp),%ebx
 81bb9fe:	b8 00 00 00 00       	mov    $0x0,%eax
 81bba03:	ba 40 00 00 00       	mov    $0x40,%edx
 81bba08:	89 df                	mov    %ebx,%edi
 81bba0a:	89 d1                	mov    %edx,%ecx
 81bba0c:	f3 ab                	rep stos %eax,%es:(%edi)
 81bba0e:	e8 6e 07 f1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81bba13:	89 04 24             	mov    %eax,(%esp)
 81bba16:	e8 7f e9 f1 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 81bba1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bba1f:	c7 44 24 04 55 fa bb 	movl   $0x8bbfa55,0x4(%esp)
 81bba26:	08 
 81bba27:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 81bba2d:	89 04 24             	mov    %eax,(%esp)
 81bba30:	e8 0b 2a ec ff       	call   807e440 <sprintf@plt>
 81bba35:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81bba3c:	ff 
 81bba3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bba40:	89 04 24             	mov    %eax,(%esp)
 81bba43:	e8 58 25 49 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81bba48:	89 c6                	mov    %eax,%esi
 81bba4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bba4d:	89 04 24             	mov    %eax,(%esp)
 81bba50:	e8 19 e9 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bba55:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bba5c:	00 
 81bba5d:	89 04 24             	mov    %eax,(%esp)
 81bba60:	e8 e6 d5 f4 ff       	call   810904b <_Z14NumberToStringji>
 81bba65:	89 c3                	mov    %eax,%ebx
 81bba67:	c7 44 24 08 75 00 00 	movl   $0x75,0x8(%esp)
 81bba6e:	00 
 81bba6f:	c7 44 24 04 00 07 bc 	movl   $0x8bc0700,0x4(%esp)
 81bba76:	08 
 81bba77:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81bba7a:	89 04 24             	mov    %eax,(%esp)
 81bba7d:	e8 ea bd f4 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81bba82:	89 74 24 10          	mov    %esi,0x10(%esp)
 81bba86:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81bba8a:	c7 44 24 08 6c fa bb 	movl   $0x8bbfa6c,0x8(%esp)
 81bba91:	08 
 81bba92:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 81bba98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bba9c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81bba9f:	89 04 24             	mov    %eax,(%esp)
 81bbaa2:	e8 f1 bd f4 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81bbaa7:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbaaa:	89 04 24             	mov    %eax,(%esp)
 81bbaad:	e8 48 06 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbab2:	89 c3                	mov    %eax,%ebx
 81bbab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbab7:	89 04 24             	mov    %eax,(%esp)
 81bbaba:	e8 71 06 00 00       	call   81bc130 <_ZNK5CUser24get_ontime_last_recv_idxEv>
 81bbabf:	39 c3                	cmp    %eax,%ebx
 81bbac1:	0f 9f c0             	setg   %al
 81bbac4:	84 c0                	test   %al,%al
 81bbac6:	0f 84 91 00 00 00    	je     81bbb5d <_ZN12COnTimeEvent18insert_reward_userEP5CUser+0x181>
 81bbacc:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbacf:	89 04 24             	mov    %eax,(%esp)
 81bbad2:	e8 23 06 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbad7:	89 c6                	mov    %eax,%esi
 81bbad9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81bbae0:	ff 
 81bbae1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbae4:	89 04 24             	mov    %eax,(%esp)
 81bbae7:	e8 b4 24 49 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81bbaec:	89 c3                	mov    %eax,%ebx
 81bbaee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbaf1:	89 04 24             	mov    %eax,(%esp)
 81bbaf4:	e8 75 e8 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bbaf9:	8b 55 08             	mov    0x8(%ebp),%edx
 81bbafc:	83 c2 14             	add    $0x14,%edx
 81bbaff:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81bbb03:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bbb07:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbb0b:	89 14 24             	mov    %edx,(%esp)
 81bbb0e:	e8 7d fb ff ff       	call   81bb690 <_ZN15CRewardUserList6insertEjii>
 81bbb13:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbb16:	89 04 24             	mov    %eax,(%esp)
 81bbb19:	e8 dc 05 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbb1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbb22:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbb25:	89 04 24             	mov    %eax,(%esp)
 81bbb28:	e8 f1 05 00 00       	call   81bc11e <_ZN5CUser24set_ontime_last_recv_idxEi>
 81bbb2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbb30:	89 04 24             	mov    %eax,(%esp)
 81bbb33:	e8 06 06 00 00       	call   81bc13e <_ZN5CUser31set_update_ontime_last_recv_idxEv>
 81bbb38:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81bbb3f:	00 
 81bbb40:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 81bbb47:	00 
 81bbb48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbb4b:	89 04 24             	mov    %eax,(%esp)
 81bbb4e:	e8 ef 03 4c 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bbb53:	b8 01 00 00 00       	mov    $0x1,%eax
 81bbb58:	e9 fb 00 00 00       	jmp    81bbc58 <_ZN12COnTimeEvent18insert_reward_userEP5CUser+0x27c>
 81bbb5d:	8d 9d d8 fd ff ff    	lea    -0x228(%ebp),%ebx
 81bbb63:	b8 00 00 00 00       	mov    $0x0,%eax
 81bbb68:	ba 40 00 00 00       	mov    $0x40,%edx
 81bbb6d:	89 df                	mov    %ebx,%edi
 81bbb6f:	89 d1                	mov    %edx,%ecx
 81bbb71:	f3 ab                	rep stos %eax,%es:(%edi)
 81bbb73:	e8 09 06 f1 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81bbb78:	89 04 24             	mov    %eax,(%esp)
 81bbb7b:	e8 1a e8 f1 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 81bbb80:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bbb84:	c7 44 24 04 55 fa bb 	movl   $0x8bbfa55,0x4(%esp)
 81bbb8b:	08 
 81bbb8c:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
 81bbb92:	89 04 24             	mov    %eax,(%esp)
 81bbb95:	e8 a6 28 ec ff       	call   807e440 <sprintf@plt>
 81bbb9a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81bbba1:	ff 
 81bbba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbba5:	89 04 24             	mov    %eax,(%esp)
 81bbba8:	e8 f3 23 49 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81bbbad:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
 81bbbb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbbb6:	89 04 24             	mov    %eax,(%esp)
 81bbbb9:	e8 b0 e7 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81bbbbe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bbbc5:	00 
 81bbbc6:	89 04 24             	mov    %eax,(%esp)
 81bbbc9:	e8 7d d4 f4 ff       	call   810904b <_Z14NumberToStringji>
 81bbbce:	89 c7                	mov    %eax,%edi
 81bbbd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbbd3:	89 04 24             	mov    %eax,(%esp)
 81bbbd6:	e8 55 05 00 00       	call   81bc130 <_ZNK5CUser24get_ontime_last_recv_idxEv>
 81bbbdb:	89 c6                	mov    %eax,%esi
 81bbbdd:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbbe0:	89 04 24             	mov    %eax,(%esp)
 81bbbe3:	e8 12 05 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbbe8:	89 c3                	mov    %eax,%ebx
 81bbbea:	c7 44 24 08 89 00 00 	movl   $0x89,0x8(%esp)
 81bbbf1:	00 
 81bbbf2:	c7 44 24 04 00 07 bc 	movl   $0x8bc0700,0x4(%esp)
 81bbbf9:	08 
 81bbbfa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bbbfd:	89 04 24             	mov    %eax,(%esp)
 81bbc00:	e8 67 bc f4 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 81bbc05:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 81bbc0b:	89 44 24 18          	mov    %eax,0x18(%esp)
 81bbc0f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81bbc13:	89 74 24 10          	mov    %esi,0x10(%esp)
 81bbc17:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81bbc1b:	c7 44 24 08 a4 fa bb 	movl   $0x8bbfaa4,0x8(%esp)
 81bbc22:	08 
 81bbc23:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
 81bbc29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbc2d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bbc30:	89 04 24             	mov    %eax,(%esp)
 81bbc33:	e8 60 bc f4 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 81bbc38:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81bbc3f:	00 
 81bbc40:	c7 44 24 04 20 01 00 	movl   $0x120,0x4(%esp)
 81bbc47:	00 
 81bbc48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbc4b:	89 04 24             	mov    %eax,(%esp)
 81bbc4e:	e8 ef 02 4c 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81bbc53:	b8 00 00 00 00       	mov    $0x0,%eax
 81bbc58:	81 c4 4c 02 00 00    	add    $0x24c,%esp
 81bbc5e:	5b                   	pop    %ebx
 81bbc5f:	5e                   	pop    %esi
 81bbc60:	5f                   	pop    %edi
 81bbc61:	5d                   	pop    %ebp
 81bbc62:	c3                   	ret
 81bbc63:	90                   	nop

```

```c
// COnTimeEvent::insert_reward_user @ 0x81bb9dc

/* COnTimeEvent::insert_reward_user(CUser*) */

undefined4 __thiscall COnTimeEvent::insert_reward_user(COnTimeEvent *this,CUser *param_1)

{
  undefined4 uVar1;
  CEnvironment *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  char local_22c [256];
  char local_12c [256];
  CMyFileLog local_2c [8];
  CMyFileLog local_24 [20];
  
  bVar10 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    pcVar9 = local_12c;
    for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    pCVar2 = (CEnvironment *)G_CEnvironment();
    uVar1 = CEnvironment::get_file_name(pCVar2);
    sprintf(local_12c,"./log/%s/OnTimeEvent",uVar1);
    uVar1 = CUser::get_charac_no(param_1,-1);
    uVar3 = CUser::get_acc_id(param_1);
    uVar4 = NumberToString(uVar3,0);
    CMyFileLog::CMyFileLog(local_2c,"bool COnTimeEvent::insert_reward_user(CUser*)",0x75);
    CMyFileLog::operator()
              (local_2c,local_12c,"On Time Event:On Request Reward m_id(%s) charac_no(%u)",uVar4,
               uVar1);
    iVar8 = get_ontime_id(this);
    iVar5 = CUser::get_ontime_last_recv_idx(param_1);
    if (iVar5 < iVar8) {
      iVar8 = get_ontime_id(this);
      iVar5 = CUser::get_charac_no(param_1,-1);
      uVar3 = CUser::get_acc_id(param_1);
      CRewardUserList::insert((CRewardUserList *)(this + 0x14),uVar3,iVar5,iVar8);
      iVar8 = get_ontime_id(this);
      CUser::set_ontime_last_recv_idx(param_1,iVar8);
      CUser::set_update_ontime_last_recv_idx(param_1);
      CUser::SendCmdErrorPacket(param_1,0x120,0);
      uVar1 = 1;
    }
    else {
      pcVar9 = local_22c;
      for (iVar8 = 0x40; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar9[0] = '\0';
        pcVar9[1] = '\0';
        pcVar9[2] = '\0';
        pcVar9[3] = '\0';
        pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
      }
      pCVar2 = (CEnvironment *)G_CEnvironment();
      uVar1 = CEnvironment::get_file_name(pCVar2);
      sprintf(local_22c,"./log/%s/OnTimeEvent",uVar1);
      uVar1 = CUser::get_charac_no(param_1,-1);
      uVar3 = CUser::get_acc_id(param_1);
      uVar4 = NumberToString(uVar3,0);
      uVar6 = CUser::get_ontime_last_recv_idx(param_1);
      uVar7 = get_ontime_id(this);
      CMyFileLog::CMyFileLog(local_24,"bool COnTimeEvent::insert_reward_user(CUser*)",0x89);
      CMyFileLog::operator()
                (local_24,local_22c,"On Time Event:Reward(no.%u user-%u)error m_id(%s)charac_no(%u)"
                 ,uVar7,uVar6,uVar4,uVar1);
      CUser::SendCmdErrorPacket(param_1,0x120,0x12);
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process_send_reward_to_user

```asm
// === 081bbd46 COnTimeEvent::process_send_reward_to_user  [0x081bbd46-0x81bbf25] ===
 81bbd46:	55                   	push   %ebp
 81bbd47:	89 e5                	mov    %esp,%ebp
 81bbd49:	56                   	push   %esi
 81bbd4a:	53                   	push   %ebx
 81bbd4b:	83 ec 30             	sub    $0x30,%esp
 81bbd4e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbd51:	89 04 24             	mov    %eax,(%esp)
 81bbd54:	e8 0f 07 00 00       	call   81bc468 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEC1Ev>
 81bbd59:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81bbd60:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81bbd67:	e9 8f 01 00 00       	jmp    81bbefb <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x1b5>
 81bbd6c:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbd6f:	83 c0 2c             	add    $0x2c,%eax
 81bbd72:	89 04 24             	mov    %eax,(%esp)
 81bbd75:	e8 1c 07 00 00       	call   81bc496 <_ZNSt5dequeIjSaIjEE5frontEv>
 81bbd7a:	8b 55 08             	mov    0x8(%ebp),%edx
 81bbd7d:	8d 4a 14             	lea    0x14(%edx),%ecx
 81bbd80:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81bbd83:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bbd87:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81bbd8b:	89 14 24             	mov    %edx,(%esp)
 81bbd8e:	e8 3d 06 00 00       	call   81bc3d0 <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 81bbd93:	83 ec 04             	sub    $0x4,%esp
 81bbd96:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81bbd99:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbd9d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81bbda0:	89 04 24             	mov    %eax,(%esp)
 81bbda3:	e8 54 06 00 00       	call   81bc3fc <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 81bbda8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81bbdab:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81bbdae:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbdb1:	8d 50 14             	lea    0x14(%eax),%edx
 81bbdb4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81bbdb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81bbdbb:	89 04 24             	mov    %eax,(%esp)
 81bbdbe:	e8 49 06 00 00       	call   81bc40c <_ZNSt3mapIj14RewardUserDataSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 81bbdc3:	83 ec 04             	sub    $0x4,%esp
 81bbdc6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81bbdc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbdcd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bbdd0:	89 04 24             	mov    %eax,(%esp)
 81bbdd3:	e8 24 06 00 00       	call   81bc3fc <_ZNSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 81bbdd8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81bbddb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbddf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbde2:	89 04 24             	mov    %eax,(%esp)
 81bbde5:	e8 d4 06 00 00       	call   81bc4be <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEneERKS4_>
 81bbdea:	84 c0                	test   %al,%al
 81bbdec:	0f 84 f1 00 00 00    	je     81bbee3 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x19d>
 81bbdf2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbdf5:	89 04 24             	mov    %eax,(%esp)
 81bbdf8:	e8 d5 06 00 00       	call   81bc4d2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEptEv>
 81bbdfd:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81bbe01:	83 f0 01             	xor    $0x1,%eax
 81bbe04:	84 c0                	test   %al,%al
 81bbe06:	0f 84 d7 00 00 00    	je     81bbee3 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x19d>
 81bbe0c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbe0f:	89 04 24             	mov    %eax,(%esp)
 81bbe12:	e8 bb 06 00 00       	call   81bc4d2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEptEv>
 81bbe17:	8b 18                	mov    (%eax),%ebx
 81bbe19:	e8 89 e5 f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81bbe1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81bbe22:	89 04 24             	mov    %eax,(%esp)
 81bbe25:	e8 16 8f 50 00       	call   86c4d40 <_ZN9GameWorld28find_user_from_world_byaccidEj>
 81bbe2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81bbe2d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81bbe31:	0f 95 c0             	setne  %al
 81bbe34:	84 c0                	test   %al,%al
 81bbe36:	0f 84 a7 00 00 00    	je     81bbee3 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x19d>
 81bbe3c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81bbe43:	ff 
 81bbe44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bbe47:	89 04 24             	mov    %eax,(%esp)
 81bbe4a:	e8 51 21 49 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81bbe4f:	89 c3                	mov    %eax,%ebx
 81bbe51:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbe54:	89 04 24             	mov    %eax,(%esp)
 81bbe57:	e8 76 06 00 00       	call   81bc4d2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEptEv>
 81bbe5c:	8b 40 04             	mov    0x4(%eax),%eax
 81bbe5f:	39 c3                	cmp    %eax,%ebx
 81bbe61:	75 17                	jne    81bbe7a <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x134>
 81bbe63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bbe66:	89 04 24             	mov    %eax,(%esp)
 81bbe69:	e8 1e e5 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81bbe6e:	83 f8 02             	cmp    $0x2,%eax
 81bbe71:	7e 07                	jle    81bbe7a <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x134>
 81bbe73:	b8 01 00 00 00       	mov    $0x1,%eax
 81bbe78:	eb 05                	jmp    81bbe7f <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x139>
 81bbe7a:	b8 00 00 00 00       	mov    $0x0,%eax
 81bbe7f:	84 c0                	test   %al,%al
 81bbe81:	74 60                	je     81bbee3 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x19d>
 81bbe83:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbe86:	89 04 24             	mov    %eax,(%esp)
 81bbe89:	e8 84 02 00 00       	call   81bc112 <_ZN12COnTimeEvent28get_ontime_reward_item_countEv>
 81bbe8e:	89 c3                	mov    %eax,%ebx
 81bbe90:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbe93:	89 04 24             	mov    %eax,(%esp)
 81bbe96:	e8 6b 02 00 00       	call   81bc106 <_ZN12COnTimeEvent25get_ontime_reward_item_noEv>
 81bbe9b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bbe9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbea3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bbea6:	89 04 24             	mov    %eax,(%esp)
 81bbea9:	e8 82 5d 4c 00       	call   8681c30 <_ZN5CUser23InsertOnTimeEventRewardEjj>
 81bbeae:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbeb1:	89 04 24             	mov    %eax,(%esp)
 81bbeb4:	e8 41 02 00 00       	call   81bc0fa <_ZN12COnTimeEvent13get_ontime_idEv>
 81bbeb9:	89 c3                	mov    %eax,%ebx
 81bbebb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81bbebe:	89 04 24             	mov    %eax,(%esp)
 81bbec1:	e8 0c 06 00 00       	call   81bc4d2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKj14RewardUserDataEEptEv>
 81bbec6:	8b 30                	mov    (%eax),%esi
 81bbec8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81bbecb:	89 04 24             	mov    %eax,(%esp)
 81bbece:	e8 c3 cd f0 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81bbed3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81bbed7:	89 74 24 04          	mov    %esi,0x4(%esp)
 81bbedb:	89 04 24             	mov    %eax,(%esp)
 81bbede:	e8 97 6c 28 00       	call   8442b7a <_ZN28DB_InsertOnTimeRewardUserLog11makeRequestEiji>
 81bbee3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81bbee7:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbeea:	83 c0 2c             	add    $0x2c,%eax
 81bbeed:	89 04 24             	mov    %eax,(%esp)
 81bbef0:	e8 eb 05 00 00       	call   81bc4e0 <_ZNSt5dequeIjSaIjEE9pop_frontEv>
 81bbef5:	83 7d f4 32          	cmpl   $0x32,-0xc(%ebp)
 81bbef9:	7f 1b                	jg     81bbf16 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x1d0>
 81bbefb:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbefe:	83 c0 2c             	add    $0x2c,%eax
 81bbf01:	89 04 24             	mov    %eax,(%esp)
 81bbf04:	e8 6d 05 00 00       	call   81bc476 <_ZNKSt5dequeIjSaIjEE5emptyEv>
 81bbf09:	83 f0 01             	xor    $0x1,%eax
 81bbf0c:	84 c0                	test   %al,%al
 81bbf0e:	0f 85 58 fe ff ff    	jne    81bbd6c <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x26>
 81bbf14:	eb 01                	jmp    81bbf17 <_ZN12COnTimeEvent27process_send_reward_to_userEv+0x1d1>
 81bbf16:	90                   	nop
 81bbf17:	b8 01 00 00 00       	mov    $0x1,%eax
 81bbf1c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81bbf1f:	83 c4 00             	add    $0x0,%esp
 81bbf22:	5b                   	pop    %ebx
 81bbf23:	5e                   	pop    %esi
 81bbf24:	5d                   	pop    %ebp
 81bbf25:	c3                   	ret

```

```c
// COnTimeEvent::process_send_reward_to_user @ 0x81bbd46

/* COnTimeEvent::process_send_reward_to_user() */

undefined4 __thiscall COnTimeEvent::process_send_reward_to_user(COnTimeEvent *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  GameWorld *this_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_28;
  undefined4 local_24;
  _Rb_tree_iterator local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> local_1c [4];
  map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
  local_18 [4];
  CUser *local_14;
  int local_10;
  
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)&local_28);
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    cVar2 = std::deque<unsigned_int,std::allocator<unsigned_int>>::empty
                      ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x2c));
    if (cVar2 == '\x01') {
      return 1;
    }
    std::deque<unsigned_int,std::allocator<unsigned_int>>::front();
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::find((uint *)local_20);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
    _Rb_tree_const_iterator
              ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)&local_24,
               local_20);
    local_28 = local_24;
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::end(local_18);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
    _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_18);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                       &local_28,(_Rb_tree_const_iterator *)local_1c);
    if ((cVar2 != '\0') &&
       (iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                           &local_28), *(char *)(iVar3 + 0xc) != '\x01')) {
      puVar4 = (uint *)std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                       operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>
                                   *)&local_28);
      uVar6 = *puVar4;
      this_00 = (GameWorld *)G_GameWorld();
      local_14 = (CUser *)GameWorld::find_user_from_world_byaccid(this_00,uVar6);
      if (local_14 != (CUser *)0x0) {
        iVar3 = CUser::get_charac_no(local_14,-1);
        iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>> *)
                           &local_28);
        if ((iVar3 == *(int *)(iVar5 + 4)) && (iVar3 = CUser::get_state(local_14), 2 < iVar3)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          uVar6 = get_ontime_reward_item_count(this);
          uVar7 = get_ontime_reward_item_no(this);
          CUser::InsertOnTimeEventReward(local_14,uVar7,uVar6);
          iVar3 = get_ontime_id(this);
          puVar4 = (uint *)std::
                           _Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>::
                           operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,RewardUserData>>
                                       *)&local_28);
          uVar6 = *puVar4;
          iVar5 = CUser::GetUID(local_14);
          DB_InsertOnTimeRewardUserLog::makeRequest(iVar5,uVar6,iVar3);
        }
      }
    }
    local_10 = local_10 + 1;
    std::deque<unsigned_int,std::allocator<unsigned_int>>::pop_front
              ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x2c));
  } while (local_10 < 0x33);
  return 1;
}

```

---

## process_set_reward_start

```asm
// === 081bbce0 COnTimeEvent::process_set_reward_start  [0x081bbce0-0x81bbd45] ===
 81bbce0:	55                   	push   %ebp
 81bbce1:	89 e5                	mov    %esp,%ebp
 81bbce3:	83 ec 18             	sub    $0x18,%esp
 81bbce6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81bbced:	00 
 81bbcee:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbcf1:	89 04 24             	mov    %eax,(%esp)
 81bbcf4:	e8 7f fc ff ff       	call   81bb978 <_ZN12COnTimeEvent16set_reward_stateEi>
 81bbcf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bbcfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbd00:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbd03:	89 04 24             	mov    %eax,(%esp)
 81bbd06:	e8 7b fc ff ff       	call   81bb986 <_ZN12COnTimeEvent13set_ontime_idEi>
 81bbd0b:	8b 45 14             	mov    0x14(%ebp),%eax
 81bbd0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81bbd12:	8b 45 10             	mov    0x10(%ebp),%eax
 81bbd15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbd19:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbd1c:	89 04 24             	mov    %eax,(%esp)
 81bbd1f:	e8 a4 ff ff ff       	call   81bbcc8 <_ZN12COnTimeEvent22set_ontime_reward_itemEii>
 81bbd24:	8b 45 18             	mov    0x18(%ebp),%eax
 81bbd27:	89 44 24 04          	mov    %eax,0x4(%esp)
 81bbd2b:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbd2e:	89 04 24             	mov    %eax,(%esp)
 81bbd31:	e8 5e fc ff ff       	call   81bb994 <_ZN12COnTimeEvent19set_reward_end_timeEi>
 81bbd36:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbd39:	83 c0 14             	add    $0x14,%eax
 81bbd3c:	89 04 24             	mov    %eax,(%esp)
 81bbd3f:	e8 fe 02 00 00       	call   81bc042 <_ZN15CRewardUserList5clearEv>
 81bbd44:	c9                   	leave
 81bbd45:	c3                   	ret

```

```c
// COnTimeEvent::process_set_reward_start @ 0x81bbce0

/* COnTimeEvent::process_set_reward_start(int, int, int, int) */

void __thiscall
COnTimeEvent::process_set_reward_start
          (COnTimeEvent *this,int param_1,int param_2,int param_3,int param_4)

{
  set_reward_state(this,0);
  set_ontime_id(this,param_1);
  set_ontime_reward_item(this,param_2,param_3);
  set_reward_end_time(this,param_4);
  CRewardUserList::clear((CRewardUserList *)(this + 0x14));
  return;
}

```

---

## set_ontime_id

```asm
// === 081bb986 COnTimeEvent::set_ontime_id  [0x081bb986-0x81bb993] ===
 81bb986:	55                   	push   %ebp
 81bb987:	89 e5                	mov    %esp,%ebp
 81bb989:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb98c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bb98f:	89 50 0c             	mov    %edx,0xc(%eax)
 81bb992:	5d                   	pop    %ebp
 81bb993:	c3                   	ret

```

```c
// COnTimeEvent::set_ontime_id @ 0x81bb986

/* COnTimeEvent::set_ontime_id(int) */

void __thiscall COnTimeEvent::set_ontime_id(COnTimeEvent *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}

```

---

## set_ontime_reward_item

```asm
// === 081bbcc8 COnTimeEvent::set_ontime_reward_item  [0x081bbcc8-0x81bbcdf] ===
 81bbcc8:	55                   	push   %ebp
 81bbcc9:	89 e5                	mov    %esp,%ebp
 81bbccb:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbcce:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bbcd1:	89 50 58             	mov    %edx,0x58(%eax)
 81bbcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 81bbcd7:	8b 55 10             	mov    0x10(%ebp),%edx
 81bbcda:	89 50 5c             	mov    %edx,0x5c(%eax)
 81bbcdd:	5d                   	pop    %ebp
 81bbcde:	c3                   	ret
 81bbcdf:	90                   	nop

```

```c
// COnTimeEvent::set_ontime_reward_item @ 0x81bbcc8

/* COnTimeEvent::set_ontime_reward_item(int, int) */

void __thiscall COnTimeEvent::set_ontime_reward_item(COnTimeEvent *this,int param_1,int param_2)

{
  *(int *)(this + 0x58) = param_1;
  *(int *)(this + 0x5c) = param_2;
  return;
}

```

---

## set_reward_end_time

```asm
// === 081bb994 COnTimeEvent::set_reward_end_time  [0x081bb994-0x81bb9b9] ===
 81bb994:	55                   	push   %ebp
 81bb995:	89 e5                	mov    %esp,%ebp
 81bb997:	83 ec 28             	sub    $0x28,%esp
 81bb99a:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81bb9a1:	e8 aa 1d ec ff       	call   807d750 <time@plt>
 81bb9a6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81bb9a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81bb9ac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81bb9af:	01 c2                	add    %eax,%edx
 81bb9b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb9b4:	89 50 54             	mov    %edx,0x54(%eax)
 81bb9b7:	c9                   	leave
 81bb9b8:	c3                   	ret
 81bb9b9:	90                   	nop

```

```c
// COnTimeEvent::set_reward_end_time @ 0x81bb994

/* COnTimeEvent::set_reward_end_time(int) */

void __thiscall COnTimeEvent::set_reward_end_time(COnTimeEvent *this,int param_1)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  *(time_t *)(this + 0x54) = tVar1 + param_1;
  return;
}

```

---

## set_reward_state

```asm
// === 081bb978 COnTimeEvent::set_reward_state  [0x081bb978-0x81bb985] ===
 81bb978:	55                   	push   %ebp
 81bb979:	89 e5                	mov    %esp,%ebp
 81bb97b:	8b 45 08             	mov    0x8(%ebp),%eax
 81bb97e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81bb981:	89 50 10             	mov    %edx,0x10(%eax)
 81bb984:	5d                   	pop    %ebp
 81bb985:	c3                   	ret

```

```c
// COnTimeEvent::set_reward_state @ 0x81bb978

/* COnTimeEvent::set_reward_state(int) */

void __thiscall COnTimeEvent::set_reward_state(COnTimeEvent *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}

```


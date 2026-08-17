# Inter_OnTimeEventRewardEnd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e1062 Inter_OnTimeEventRewardEnd::dispatch_sig  [0x084e1062-0x84e11eb] ===
 84e1062:	55                   	push   %ebp
 84e1063:	89 e5                	mov    %esp,%ebp
 84e1065:	56                   	push   %esi
 84e1066:	53                   	push   %ebx
 84e1067:	83 ec 50             	sub    $0x50,%esp
 84e106a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e106d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e1070:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e1077:	00 
 84e1078:	c7 44 24 08 0c 50 00 	movl   $0x500c,0x8(%esp)
 84e107f:	00 
 84e1080:	c7 44 24 04 80 b9 c8 	movl   $0x8c8b980,0x4(%esp)
 84e1087:	08 
 84e1088:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e108b:	89 04 24             	mov    %eax,(%esp)
 84e108e:	e8 85 e6 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e1093:	c7 44 24 04 47 9d c8 	movl   $0x8c89d47,0x4(%esp)
 84e109a:	08 
 84e109b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e109e:	89 04 24             	mov    %eax,(%esp)
 84e10a1:	e8 e2 e6 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e10a6:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e10ab:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 84e10b2:	00 
 84e10b3:	89 04 24             	mov    %eax,(%esp)
 84e10b6:	e8 dd 48 c3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e10bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e10be:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e10c2:	74 25                	je     84e10e9 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0x87>
 84e10c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e10c7:	8b 00                	mov    (%eax),%eax
 84e10c9:	83 c0 34             	add    $0x34,%eax
 84e10cc:	8b 10                	mov    (%eax),%edx
 84e10ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e10d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e10d8:	00 
 84e10d9:	89 04 24             	mov    %eax,(%esp)
 84e10dc:	ff d2                	call   *%edx
 84e10de:	84 c0                	test   %al,%al
 84e10e0:	74 07                	je     84e10e9 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0x87>
 84e10e2:	b8 01 00 00 00       	mov    $0x1,%eax
 84e10e7:	eb 05                	jmp    84e10ee <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0x8c>
 84e10e9:	b8 00 00 00 00       	mov    $0x0,%eax
 84e10ee:	84 c0                	test   %al,%al
 84e10f0:	74 2e                	je     84e1120 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0xbe>
 84e10f2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e10f9:	00 
 84e10fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e10fd:	89 04 24             	mov    %eax,(%esp)
 84e1100:	e8 73 a8 cd ff       	call   81bb978 <_ZN12COnTimeEvent16set_reward_stateEi>
 84e1105:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e1108:	89 04 24             	mov    %eax,(%esp)
 84e110b:	e8 b6 a8 cd ff       	call   81bb9c6 <_ZN12COnTimeEvent28get_ontime_reward_user_countEv>
 84e1110:	85 c0                	test   %eax,%eax
 84e1112:	0f 95 c0             	setne  %al
 84e1115:	84 c0                	test   %al,%al
 84e1117:	74 47                	je     84e1160 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0xfe>
 84e1119:	e8 2e 9a 15 00       	call   863ab4c <_ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv>
 84e111e:	eb 40                	jmp    84e1160 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0xfe>
 84e1120:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e1127:	00 
 84e1128:	c7 44 24 08 1b 50 00 	movl   $0x501b,0x8(%esp)
 84e112f:	00 
 84e1130:	c7 44 24 04 80 b9 c8 	movl   $0x8c8b980,0x4(%esp)
 84e1137:	08 
 84e1138:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e113b:	89 04 24             	mov    %eax,(%esp)
 84e113e:	e8 d5 e5 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e1143:	c7 44 24 04 64 9d c8 	movl   $0x8c89d64,0x4(%esp)
 84e114a:	08 
 84e114b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e114e:	89 04 24             	mov    %eax,(%esp)
 84e1151:	e8 32 e6 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e1156:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e115b:	e9 82 00 00 00       	jmp    84e11e2 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0x180>
 84e1160:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e1163:	89 04 24             	mov    %eax,(%esp)
 84e1166:	e8 e1 cb 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e116b:	c7 44 24 08 06 01 00 	movl   $0x106,0x8(%esp)
 84e1172:	00 
 84e1173:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e117a:	00 
 84e117b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e117e:	89 04 24             	mov    %eax,(%esp)
 84e1181:	e8 76 a7 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e1186:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e118d:	00 
 84e118e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e1191:	89 04 24             	mov    %eax,(%esp)
 84e1194:	e8 bf a7 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e1199:	e8 09 92 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e119e:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84e11a5:	00 
 84e11a6:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84e11a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e11ad:	89 04 24             	mov    %eax,(%esp)
 84e11b0:	e8 cf 7f 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84e11b5:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e11ba:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e11bd:	89 04 24             	mov    %eax,(%esp)
 84e11c0:	e8 bb cc 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e11c5:	eb 1b                	jmp    84e11e2 <_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci+0x180>
 84e11c7:	89 d3                	mov    %edx,%ebx
 84e11c9:	89 c6                	mov    %eax,%esi
 84e11cb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e11ce:	89 04 24             	mov    %eax,(%esp)
 84e11d1:	e8 aa cc 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e11d6:	89 f0                	mov    %esi,%eax
 84e11d8:	89 da                	mov    %ebx,%edx
 84e11da:	89 04 24             	mov    %eax,(%esp)
 84e11dd:	e8 6e 25 60 00       	call   8ae3750 <_Unwind_Resume>
 84e11e2:	89 d8                	mov    %ebx,%eax
 84e11e4:	83 c4 50             	add    $0x50,%esp
 84e11e7:	5b                   	pop    %ebx
 84e11e8:	5e                   	pop    %esi
 84e11e9:	5d                   	pop    %ebp
 84e11ea:	c3                   	ret
 84e11eb:	90                   	nop

```

```c
// Inter_OnTimeEventRewardEnd::dispatch_sig @ 0x84e1062

/* Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventRewardEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *this;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  COnTimeEvent *local_10;
  
  local_14 = param_3;
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)",
                     0x500c,0);
  cMyTrace::operator()(local_34,"[ON_TIME_EVENT] Reward End");
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_10 != (COnTimeEvent *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_084e10ee;
    }
  }
  bVar1 = false;
LAB_084e10ee:
  if (bVar1) {
    COnTimeEvent::set_reward_state(local_10,1);
    iVar3 = COnTimeEvent::get_ontime_reward_user_count(local_10);
    if (iVar3 != 0) {
      Timer_Send_Ontime_Reward::RegistNextTimer();
    }
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084e1181 to 084e11b4 has its CatchHandler @ 084e11c7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x106);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_40,3);
    PacketGuard::~PacketGuard(local_40);
  }
  else {
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)",
                       0x501b,5);
    cMyTrace::operator()(local_24,"[ON_TIME_EVENT] Inter_OnTimeEventRewardEnd() error");
  }
  return 0;
}

```


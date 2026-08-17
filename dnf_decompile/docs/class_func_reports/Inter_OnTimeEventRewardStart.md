# Inter_OnTimeEventRewardStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e0dc6 Inter_OnTimeEventRewardStart::dispatch_sig  [0x084e0dc6-0x84e0f81] ===
 84e0dc6:	55                   	push   %ebp
 84e0dc7:	89 e5                	mov    %esp,%ebp
 84e0dc9:	56                   	push   %esi
 84e0dca:	53                   	push   %ebx
 84e0dcb:	83 ec 60             	sub    $0x60,%esp
 84e0dce:	8b 45 10             	mov    0x10(%ebp),%eax
 84e0dd1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e0dd4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0dd7:	8b 58 0e             	mov    0xe(%eax),%ebx
 84e0dda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e0de1:	00 
 84e0de2:	c7 44 24 08 ba 4f 00 	movl   $0x4fba,0x8(%esp)
 84e0de9:	00 
 84e0dea:	c7 44 24 04 e0 b9 c8 	movl   $0x8c8b9e0,0x4(%esp)
 84e0df1:	08 
 84e0df2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0df5:	89 04 24             	mov    %eax,(%esp)
 84e0df8:	e8 1b e9 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0dfd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0e01:	c7 44 24 04 e8 9c c8 	movl   $0x8c89ce8,0x4(%esp)
 84e0e08:	08 
 84e0e09:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e0e0c:	89 04 24             	mov    %eax,(%esp)
 84e0e0f:	e8 74 e9 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0e14:	a1 30 f7 41 09       	mov    0x941f730,%eax
 84e0e19:	c7 44 24 04 33 00 00 	movl   $0x33,0x4(%esp)
 84e0e20:	00 
 84e0e21:	89 04 24             	mov    %eax,(%esp)
 84e0e24:	e8 6f 4b c3 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 84e0e29:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e0e2c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e0e30:	74 25                	je     84e0e57 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x91>
 84e0e32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0e35:	8b 00                	mov    (%eax),%eax
 84e0e37:	83 c0 34             	add    $0x34,%eax
 84e0e3a:	8b 10                	mov    (%eax),%edx
 84e0e3c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0e3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e0e46:	00 
 84e0e47:	89 04 24             	mov    %eax,(%esp)
 84e0e4a:	ff d2                	call   *%edx
 84e0e4c:	84 c0                	test   %al,%al
 84e0e4e:	74 07                	je     84e0e57 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x91>
 84e0e50:	b8 01 00 00 00       	mov    $0x1,%eax
 84e0e55:	eb 05                	jmp    84e0e5c <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x96>
 84e0e57:	b8 00 00 00 00       	mov    $0x0,%eax
 84e0e5c:	84 c0                	test   %al,%al
 84e0e5e:	74 61                	je     84e0ec1 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0xfb>
 84e0e60:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0e63:	8b 40 0e             	mov    0xe(%eax),%eax
 84e0e66:	89 c3                	mov    %eax,%ebx
 84e0e68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0e6b:	8b 40 16             	mov    0x16(%eax),%eax
 84e0e6e:	89 c1                	mov    %eax,%ecx
 84e0e70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0e73:	8b 40 12             	mov    0x12(%eax),%eax
 84e0e76:	89 c2                	mov    %eax,%edx
 84e0e78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0e7b:	8b 40 0a             	mov    0xa(%eax),%eax
 84e0e7e:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e0e82:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e0e86:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e0e8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0e8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0e91:	89 04 24             	mov    %eax,(%esp)
 84e0e94:	e8 47 ae cd ff       	call   81bbce0 <_ZN12COnTimeEvent24process_set_reward_startEiiii>
 84e0e99:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0e9c:	89 04 24             	mov    %eax,(%esp)
 84e0e9f:	e8 a8 ce 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e0ea4:	c7 44 24 08 05 01 00 	movl   $0x105,0x8(%esp)
 84e0eab:	00 
 84e0eac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e0eb3:	00 
 84e0eb4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0eb7:	89 04 24             	mov    %eax,(%esp)
 84e0eba:	e8 3d aa be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e0ebf:	eb 47                	jmp    84e0f08 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x142>
 84e0ec1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0ec4:	8b 58 0a             	mov    0xa(%eax),%ebx
 84e0ec7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e0ece:	00 
 84e0ecf:	c7 44 24 08 c5 4f 00 	movl   $0x4fc5,0x8(%esp)
 84e0ed6:	00 
 84e0ed7:	c7 44 24 04 e0 b9 c8 	movl   $0x8c8b9e0,0x4(%esp)
 84e0ede:	08 
 84e0edf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e0ee2:	89 04 24             	mov    %eax,(%esp)
 84e0ee5:	e8 2e e8 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e0eea:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e0eee:	c7 44 24 04 18 9d c8 	movl   $0x8c89d18,0x4(%esp)
 84e0ef5:	08 
 84e0ef6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e0ef9:	89 04 24             	mov    %eax,(%esp)
 84e0efc:	e8 87 e8 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e0f01:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e0f06:	eb 71                	jmp    84e0f79 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x1b3>
 84e0f08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e0f0b:	8b 40 0e             	mov    0xe(%eax),%eax
 84e0f0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0f12:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0f15:	89 04 24             	mov    %eax,(%esp)
 84e0f18:	e8 1f aa be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e0f1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e0f24:	00 
 84e0f25:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0f28:	89 04 24             	mov    %eax,(%esp)
 84e0f2b:	e8 28 aa be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e0f30:	e8 72 94 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e0f35:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84e0f3c:	00 
 84e0f3d:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84e0f40:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e0f44:	89 04 24             	mov    %eax,(%esp)
 84e0f47:	e8 38 82 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84e0f4c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e0f51:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0f54:	89 04 24             	mov    %eax,(%esp)
 84e0f57:	e8 24 cf 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e0f5c:	eb 1b                	jmp    84e0f79 <_ZN28Inter_OnTimeEventRewardStart12dispatch_sigEP5CUserPci+0x1b3>
 84e0f5e:	89 d3                	mov    %edx,%ebx
 84e0f60:	89 c6                	mov    %eax,%esi
 84e0f62:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84e0f65:	89 04 24             	mov    %eax,(%esp)
 84e0f68:	e8 13 cf 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e0f6d:	89 f0                	mov    %esi,%eax
 84e0f6f:	89 da                	mov    %ebx,%edx
 84e0f71:	89 04 24             	mov    %eax,(%esp)
 84e0f74:	e8 d7 27 60 00       	call   8ae3750 <_Unwind_Resume>
 84e0f79:	89 d8                	mov    %ebx,%eax
 84e0f7b:	83 c4 60             	add    $0x60,%esp
 84e0f7e:	5b                   	pop    %ebx
 84e0f7f:	5e                   	pop    %esi
 84e0f80:	5d                   	pop    %ebp
 84e0f81:	c3                   	ret

```

```c
// Inter_OnTimeEventRewardStart::dispatch_sig @ 0x84e0dc6

/* Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventRewardStart::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  GameWorld *this;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  COnTimeEvent *local_10;
  
  local_14 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0xe);
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)",
                     0x4fba,0);
  cMyTrace::operator()(local_34,"[ON_TIME_EVENT] Reward Start(remain time : %u)",uVar1);
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_10 != (COnTimeEvent *)0x0) {
    cVar3 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_084e0e5c;
    }
  }
  bVar2 = false;
LAB_084e0e5c:
  if (bVar2) {
    COnTimeEvent::process_set_reward_start
              (local_10,*(int *)(local_14 + 10),*(int *)(local_14 + 0x12),*(int *)(local_14 + 0x16),
               *(int *)(local_14 + 0xe));
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084e0eba to 084e0ebe has its CatchHandler @ 084e0f5e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x105);
                    /* try { // try from 084e0f18 to 084e0f4b has its CatchHandler @ 084e0f5e */
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_14 + 0xe));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_40,3);
    PacketGuard::~PacketGuard(local_40);
  }
  else {
    uVar1 = *(undefined4 *)(local_14 + 10);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_OnTimeEventRewardStart::dispatch_sig(CUser*, char*, int)",
                       0x4fc5,5);
    cMyTrace::operator()(local_24,"[ON_TIME_EVENT] isEventing = not, event_no(%u)",uVar1);
  }
  return 0;
}

```


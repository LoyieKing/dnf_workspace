# InterSelectCreateDnfEventInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08160d5e InterSelectCreateDnfEventInfo::dispatch_sig  [0x08160d5e-0x8160ef5] ===
 8160d5e:	55                   	push   %ebp
 8160d5f:	89 e5                	mov    %esp,%ebp
 8160d61:	53                   	push   %ebx
 8160d62:	83 ec 34             	sub    $0x34,%esp
 8160d65:	8b 45 10             	mov    0x10(%ebp),%eax
 8160d68:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8160d6b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8160d6f:	75 36                	jne    8160da7 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x49>
 8160d71:	c7 44 24 10 84 98 b7 	movl   $0x8b79884,0x10(%esp)
 8160d78:	08 
 8160d79:	c7 44 24 0c fd 00 00 	movl   $0xfd,0xc(%esp)
 8160d80:	00 
 8160d81:	c7 44 24 08 a0 aa b7 	movl   $0x8b7aaa0,0x8(%esp)
 8160d88:	08 
 8160d89:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8160d90:	08 
 8160d91:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8160d98:	e8 6d 2e 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8160d9d:	b8 fe 00 00 00       	mov    $0xfe,%eax
 8160da2:	e9 48 01 00 00       	jmp    8160eef <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x191>
 8160da7:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8160dac:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 8160db3:	00 
 8160db4:	89 04 24             	mov    %eax,(%esp)
 8160db7:	e8 dc 4b fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8160dbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160dbf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160dc3:	74 21                	je     8160de6 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x88>
 8160dc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160dc8:	8b 00                	mov    (%eax),%eax
 8160dca:	83 c0 34             	add    $0x34,%eax
 8160dcd:	8b 10                	mov    (%eax),%edx
 8160dcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160dd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8160dd9:	00 
 8160dda:	89 04 24             	mov    %eax,(%esp)
 8160ddd:	ff d2                	call   *%edx
 8160ddf:	83 f0 01             	xor    $0x1,%eax
 8160de2:	84 c0                	test   %al,%al
 8160de4:	74 07                	je     8160ded <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x8f>
 8160de6:	b8 01 00 00 00       	mov    $0x1,%eax
 8160deb:	eb 05                	jmp    8160df2 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x94>
 8160ded:	b8 00 00 00 00       	mov    $0x0,%eax
 8160df2:	84 c0                	test   %al,%al
 8160df4:	74 6d                	je     8160e63 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x105>
 8160df6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160df9:	8b 00                	mov    (%eax),%eax
 8160dfb:	83 c0 34             	add    $0x34,%eax
 8160dfe:	8b 10                	mov    (%eax),%edx
 8160e00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160e03:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8160e0a:	00 
 8160e0b:	89 04 24             	mov    %eax,(%esp)
 8160e0e:	ff d2                	call   *%edx
 8160e10:	0f b6 d0             	movzbl %al,%edx
 8160e13:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160e17:	75 07                	jne    8160e20 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0xc2>
 8160e19:	b8 da 98 b7 08       	mov    $0x8b798da,%eax
 8160e1e:	eb 05                	jmp    8160e25 <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0xc7>
 8160e20:	b8 e2 98 b7 08       	mov    $0x8b798e2,%eax
 8160e25:	89 54 24 18          	mov    %edx,0x18(%esp)
 8160e29:	89 44 24 14          	mov    %eax,0x14(%esp)
 8160e2d:	c7 44 24 10 e8 98 b7 	movl   $0x8b798e8,0x10(%esp)
 8160e34:	08 
 8160e35:	c7 44 24 0c 07 01 00 	movl   $0x107,0xc(%esp)
 8160e3c:	00 
 8160e3d:	c7 44 24 08 a0 aa b7 	movl   $0x8b7aaa0,0x8(%esp)
 8160e44:	08 
 8160e45:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8160e4c:	08 
 8160e4d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8160e54:	e8 b1 2d 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8160e59:	b8 08 01 00 00       	mov    $0x108,%eax
 8160e5e:	e9 8c 00 00 00       	jmp    8160eef <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x191>
 8160e63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160e66:	8b 00                	mov    (%eax),%eax
 8160e68:	85 c0                	test   %eax,%eax
 8160e6a:	79 13                	jns    8160e7f <_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci+0x121>
 8160e6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160e6f:	89 04 24             	mov    %eax,(%esp)
 8160e72:	e8 e9 33 00 00       	call   8164260 <_ZN15CEventCreateDnf7GetRateEv>
 8160e77:	0f b7 d0             	movzwl %ax,%edx
 8160e7a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160e7d:	89 10                	mov    %edx,(%eax)
 8160e7f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160e82:	8b 48 08             	mov    0x8(%eax),%ecx
 8160e85:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160e88:	8b 10                	mov    (%eax),%edx
 8160e8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160e8d:	8b 40 04             	mov    0x4(%eax),%eax
 8160e90:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8160e94:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160e98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160e9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160e9f:	89 04 24             	mov    %eax,(%esp)
 8160ea2:	e8 2d 32 00 00       	call   81640d4 <_ZN15CEventCreateDnf12SetEventInfoEiii>
 8160ea7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160eaa:	89 04 24             	mov    %eax,(%esp)
 8160ead:	e8 e0 31 00 00       	call   8164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>
 8160eb2:	0f b6 d8             	movzbl %al,%ebx
 8160eb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160eb8:	89 04 24             	mov    %eax,(%esp)
 8160ebb:	e8 a0 33 00 00       	call   8164260 <_ZN15CEventCreateDnf7GetRateEv>
 8160ec0:	0f b7 c0             	movzwl %ax,%eax
 8160ec3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8160ec7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160ecb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160ece:	89 04 24             	mov    %eax,(%esp)
 8160ed1:	e8 74 fd ff ff       	call   8160c4a <_ZN29InterSelectCreateDnfEventInfo6RewardC1Eib>
 8160ed6:	e8 cc 94 f7 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8160edb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8160ede:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160ee2:	89 04 24             	mov    %eax,(%esp)
 8160ee5:	e8 22 18 00 00       	call   816270c <_ZN9GameWorld15ProcessAllUsersIN29InterSelectCreateDnfEventInfo6RewardEEEvT_>
 8160eea:	b8 00 00 00 00       	mov    $0x0,%eax
 8160eef:	83 c4 34             	add    $0x34,%esp
 8160ef2:	5b                   	pop    %ebx
 8160ef3:	5d                   	pop    %ebp
 8160ef4:	c3                   	ret
 8160ef5:	90                   	nop

```

```c
// InterSelectCreateDnfEventInfo::dispatch_sig @ 0x8160d5e

/* InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectCreateDnfEventInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_18;
  uint *local_14;
  CEventCreateDnf *local_10;
  
  local_14 = (uint *)param_3;
  if (param_3 != 0) {
    local_10 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
    if ((local_10 == (CEventCreateDnf *)0x0) ||
       (cVar1 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar1 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
      if (local_10 == (CEventCreateDnf *)0x0) {
        pcVar4 = "nullptr";
      }
      else {
        pcVar4 = "ok";
      }
      LogManager::logFormat
                (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
                 "virtual int InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)",0x107
                 ,"[Taiwan, Event] stayEvent=%s eventing:%d",pcVar4,uVar3 & 0xff);
      uVar5 = 0x108;
    }
    else {
      if ((int)*local_14 < 0) {
        uVar3 = CEventCreateDnf::GetRate(local_10);
        *local_14 = uVar3 & 0xffff;
      }
      CEventCreateDnf::SetEventInfo(local_10,local_14[1],*local_14,local_14[2]);
      bVar2 = (bool)CEventCreateDnf::IsRewardCondition(local_10);
      uVar3 = CEventCreateDnf::GetRate(local_10);
      Reward::Reward((Reward *)&local_18,uVar3 & 0xffff,bVar2);
      uVar5 = G_GameWorld();
      GameWorld::ProcessAllUsers<InterSelectCreateDnfEventInfo::Reward>(uVar5,local_18);
      uVar5 = 0;
    }
    return uVar5;
  }
  LogManager::logFormat
            (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
             "virtual int InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)",0xfd,
             "[Taiwan, Event] interMsg is null.");
  return 0xfe;
}

```

---

## makeRequest

```asm
// === 08160ef6 InterSelectCreateDnfEventInfo::makeRequest  [0x08160ef6-0x8161011] ===
 8160ef6:	55                   	push   %ebp
 8160ef7:	89 e5                	mov    %esp,%ebp
 8160ef9:	56                   	push   %esi
 8160efa:	53                   	push   %ebx
 8160efb:	83 ec 30             	sub    $0x30,%esp
 8160efe:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8160f03:	c7 44 24 08 1b 01 00 	movl   $0x11b,0x8(%esp)
 8160f0a:	00 
 8160f0b:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8160f12:	08 
 8160f13:	89 04 24             	mov    %eax,(%esp)
 8160f16:	e8 6b eb 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8160f1b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8160f22:	00 
 8160f23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160f27:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160f2a:	89 04 24             	mov    %eax,(%esp)
 8160f2d:	e8 f4 7c f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8160f32:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8160f39:	ff 
 8160f3a:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8160f41:	00 
 8160f42:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160f45:	89 04 24             	mov    %eax,(%esp)
 8160f48:	e8 03 2a 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8160f4d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160f50:	89 04 24             	mov    %eax,(%esp)
 8160f53:	e8 f6 7c f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8160f58:	89 04 24             	mov    %eax,(%esp)
 8160f5b:	e8 48 18 00 00       	call   81627a8 <_ZN12CStreamGuard11GetInBufferIN29InterSelectCreateDnfEventInfo3MsgEEEPT_v>
 8160f60:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160f63:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160f67:	75 43                	jne    8160fac <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii+0xb6>
 8160f69:	8b 45 10             	mov    0x10(%ebp),%eax
 8160f6c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8160f70:	8b 45 08             	mov    0x8(%ebp),%eax
 8160f73:	89 44 24 18          	mov    %eax,0x18(%esp)
 8160f77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160f7a:	89 44 24 14          	mov    %eax,0x14(%esp)
 8160f7e:	c7 44 24 10 14 99 b7 	movl   $0x8b79914,0x10(%esp)
 8160f85:	08 
 8160f86:	c7 44 24 0c 20 01 00 	movl   $0x120,0xc(%esp)
 8160f8d:	00 
 8160f8e:	c7 44 24 08 40 aa b7 	movl   $0x8b7aa40,0x8(%esp)
 8160f95:	08 
 8160f96:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8160f9d:	08 
 8160f9e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8160fa5:	e8 60 2c 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8160faa:	eb 53                	jmp    8160fff <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii+0x109>
 8160fac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160faf:	8b 55 08             	mov    0x8(%ebp),%edx
 8160fb2:	89 10                	mov    %edx,(%eax)
 8160fb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160fb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8160fba:	89 50 04             	mov    %edx,0x4(%eax)
 8160fbd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160fc0:	8b 55 10             	mov    0x10(%ebp),%edx
 8160fc3:	89 50 08             	mov    %edx,0x8(%eax)
 8160fc6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8160fcb:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8160fce:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160fd2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8160fd9:	00 
 8160fda:	89 04 24             	mov    %eax,(%esp)
 8160fdd:	e8 fc ff 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8160fe2:	eb 1b                	jmp    8160fff <_ZN29InterSelectCreateDnfEventInfo11makeRequestEiii+0x109>
 8160fe4:	89 d3                	mov    %edx,%ebx
 8160fe6:	89 c6                	mov    %eax,%esi
 8160fe8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8160feb:	89 04 24             	mov    %eax,(%esp)
 8160fee:	e8 df b8 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8160ff3:	89 f0                	mov    %esi,%eax
 8160ff5:	89 da                	mov    %ebx,%edx
 8160ff7:	89 04 24             	mov    %eax,(%esp)
 8160ffa:	e8 51 27 98 00       	call   8ae3750 <_Unwind_Resume>
 8160fff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161002:	89 04 24             	mov    %eax,(%esp)
 8161005:	e8 c8 b8 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816100a:	83 c4 30             	add    $0x30,%esp
 816100d:	5b                   	pop    %ebx
 816100e:	5e                   	pop    %esi
 816100f:	5d                   	pop    %ebp
 8161010:	c3                   	ret
 8161011:	90                   	nop

```

```c
// InterSelectCreateDnfEventInfo::makeRequest @ 0x8160ef6

/* InterSelectCreateDnfEventInfo::makeRequest(int, int, int) */

void InterSelectCreateDnfEventInfo::makeRequest(int param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x11b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 08160f48 to 08160fe1 has its CatchHandler @ 08160fe4 */
  Taiwan::internal_stream(local_18,9,0xffffffff);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectCreateDnfEventInfo::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectCreateDnfEventInfo::makeRequest(int, int, int)",0x120,
               "[Taiwan, Event] hour:%d rate:%d event_day:%d",param_2,param_1,param_3);
  }
  else {
    *(int *)local_10 = param_1;
    *(int *)(local_10 + 4) = param_2;
    *(int *)(local_10 + 8) = param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```


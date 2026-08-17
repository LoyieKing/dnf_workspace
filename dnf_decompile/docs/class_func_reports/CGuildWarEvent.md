# CGuildWarEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CGuildWarEvent

```asm
// === 0811cfa8 CGuildWarEvent::CGuildWarEvent  [0x0811cfa8-0x811cfd5] ===
 811cfa8:	55                   	push   %ebp
 811cfa9:	89 e5                	mov    %esp,%ebp
 811cfab:	83 ec 18             	sub    $0x18,%esp
 811cfae:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfb1:	89 04 24             	mov    %eax,(%esp)
 811cfb4:	e8 73 de fe ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 811cfb9:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfbc:	c7 00 a8 53 b5 08    	movl   $0x8b553a8,(%eax)
 811cfc2:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfc5:	66 c7 40 0a 05 00    	movw   $0x5,0xa(%eax)
 811cfcb:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfce:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 811cfd4:	c9                   	leave
 811cfd5:	c3                   	ret

```

```c
// CGuildWarEvent::CGuildWarEvent @ 0x811cfa8

/* CGuildWarEvent::CGuildWarEvent() */

void __thiscall CGuildWarEvent::CGuildWarEvent(CGuildWarEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CGuildWarEvent_08b553a8;
  *(undefined2 *)(this + 10) = 5;
  *(undefined2 *)(this + 0xc) = 0;
  return;
}

```

---

## EndEvent

```asm
// === 0811d28c CGuildWarEvent::EndEvent  [0x0811d28c-0x811d35b] ===
 811d28c:	55                   	push   %ebp
 811d28d:	89 e5                	mov    %esp,%ebp
 811d28f:	53                   	push   %ebx
 811d290:	83 ec 24             	sub    $0x24,%esp
 811d293:	8b 45 08             	mov    0x8(%ebp),%eax
 811d296:	8b 00                	mov    (%eax),%eax
 811d298:	83 c0 34             	add    $0x34,%eax
 811d29b:	8b 10                	mov    (%eax),%edx
 811d29d:	8b 45 08             	mov    0x8(%ebp),%eax
 811d2a0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d2a7:	00 
 811d2a8:	89 04 24             	mov    %eax,(%esp)
 811d2ab:	ff d2                	call   *%edx
 811d2ad:	84 c0                	test   %al,%al
 811d2af:	0f 84 a1 00 00 00    	je     811d356 <_ZN14CGuildWarEvent8EndEventEv+0xca>
 811d2b5:	e8 ed d0 fb ff       	call   80da3a7 <_Z11G_GameWorldv>
 811d2ba:	89 04 24             	mov    %eax,(%esp)
 811d2bd:	e8 5e 98 ff ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 811d2c2:	83 f8 06             	cmp    $0x6,%eax
 811d2c5:	0f 94 c0             	sete   %al
 811d2c8:	84 c0                	test   %al,%al
 811d2ca:	74 2f                	je     811d2fb <_ZN14CGuildWarEvent8EndEventEv+0x6f>
 811d2cc:	e8 b0 ee fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 811d2d1:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 811d2d7:	0f b6 d8             	movzbl %al,%ebx
 811d2da:	a1 2c be 40 09       	mov    0x940be2c,%eax
 811d2df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d2e6:	00 
 811d2e7:	89 04 24             	mov    %eax,(%esp)
 811d2ea:	e8 c9 00 00 00       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 811d2ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811d2f3:	89 04 24             	mov    %eax,(%esp)
 811d2f6:	e8 57 0c 35 00       	call   846df52 <_ZN17CGuildServerProxy15SendGuildWarEndEh>
 811d2fb:	8b 45 08             	mov    0x8(%ebp),%eax
 811d2fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d305:	00 
 811d306:	89 04 24             	mov    %eax,(%esp)
 811d309:	e8 d4 b1 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d30e:	8b 45 08             	mov    0x8(%ebp),%eax
 811d311:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 811d317:	8b 45 08             	mov    0x8(%ebp),%eax
 811d31a:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 811d320:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811d327:	00 
 811d328:	c7 44 24 08 49 00 00 	movl   $0x49,0x8(%esp)
 811d32f:	00 
 811d330:	c7 44 24 04 e0 52 b5 	movl   $0x8b552e0,0x4(%esp)
 811d337:	08 
 811d338:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d33b:	89 04 24             	mov    %eax,(%esp)
 811d33e:	e8 d5 23 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811d343:	c7 44 24 04 b0 46 b5 	movl   $0x8b546b0,0x4(%esp)
 811d34a:	08 
 811d34b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d34e:	89 04 24             	mov    %eax,(%esp)
 811d351:	e8 32 24 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811d356:	83 c4 24             	add    $0x24,%esp
 811d359:	5b                   	pop    %ebx
 811d35a:	5d                   	pop    %ebp
 811d35b:	c3                   	ret

```

```c
// CGuildWarEvent::EndEvent @ 0x811d28c

/* CGuildWarEvent::EndEvent() */

void __thiscall CGuildWarEvent::EndEvent(CGuildWarEvent *this)

{
  undefined4 uVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [20];
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 != '\0') {
    this_00 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(this_00);
    if (iVar3 == 6) {
      iVar3 = G_CEnvironment();
      uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildWarEnd(this_01,(uchar)uVar1);
    }
    CEventBase::SetEventFlag((CEventBase *)this,false);
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::EndEvent()",0x49,0);
    cMyTrace::operator()(local_1c,"Guild War Event End");
  }
  return;
}

```

---

## StartEvent

```asm
// === 0811d024 CGuildWarEvent::StartEvent  [0x0811d024-0x811d151] ===
 811d024:	55                   	push   %ebp
 811d025:	89 e5                	mov    %esp,%ebp
 811d027:	53                   	push   %ebx
 811d028:	83 ec 34             	sub    $0x34,%esp
 811d02b:	8b 45 08             	mov    0x8(%ebp),%eax
 811d02e:	8b 00                	mov    (%eax),%eax
 811d030:	83 c0 34             	add    $0x34,%eax
 811d033:	8b 10                	mov    (%eax),%edx
 811d035:	8b 45 08             	mov    0x8(%ebp),%eax
 811d038:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d03f:	00 
 811d040:	89 04 24             	mov    %eax,(%esp)
 811d043:	ff d2                	call   *%edx
 811d045:	83 f0 01             	xor    $0x1,%eax
 811d048:	84 c0                	test   %al,%al
 811d04a:	0f 84 fc 00 00 00    	je     811d14c <_ZN14CGuildWarEvent10StartEventEv+0x128>
 811d050:	8b 45 08             	mov    0x8(%ebp),%eax
 811d053:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811d05a:	00 
 811d05b:	89 04 24             	mov    %eax,(%esp)
 811d05e:	e8 7f b4 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d063:	8b 45 08             	mov    0x8(%ebp),%eax
 811d066:	66 c7 40 0a 05 00    	movw   $0x5,0xa(%eax)
 811d06c:	8b 45 08             	mov    0x8(%ebp),%eax
 811d06f:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 811d075:	e8 2d d3 fb ff       	call   80da3a7 <_Z11G_GameWorldv>
 811d07a:	89 04 24             	mov    %eax,(%esp)
 811d07d:	e8 9e 9a ff ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 811d082:	83 f8 06             	cmp    $0x6,%eax
 811d085:	0f 94 c0             	sete   %al
 811d088:	84 c0                	test   %al,%al
 811d08a:	0f 84 bc 00 00 00    	je     811d14c <_ZN14CGuildWarEvent10StartEventEv+0x128>
 811d090:	8b 45 08             	mov    0x8(%ebp),%eax
 811d093:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 811d097:	0f b7 c0             	movzwl %ax,%eax
 811d09a:	69 c0 10 0e 00 00    	imul   $0xe10,%eax,%eax
 811d0a0:	8d 98 a8 fd ff ff    	lea    -0x258(%eax),%ebx
 811d0a6:	e8 d1 93 fd ff       	call   80f647c <_Z12G_TimerQueuev>
 811d0ab:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 811d0b2:	00 
 811d0b3:	c7 44 24 14 0a 00 00 	movl   $0xa,0x14(%esp)
 811d0ba:	00 
 811d0bb:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 811d0bf:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 811d0c6:	00 
 811d0c7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811d0ce:	00 
 811d0cf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 811d0d6:	00 
 811d0d7:	89 04 24             	mov    %eax,(%esp)
 811d0da:	e8 37 3d 51 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 811d0df:	e8 9d f0 fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 811d0e4:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 811d0ea:	0f b6 d8             	movzbl %al,%ebx
 811d0ed:	a1 2c be 40 09       	mov    0x940be2c,%eax
 811d0f2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d0f9:	00 
 811d0fa:	89 04 24             	mov    %eax,(%esp)
 811d0fd:	e8 b6 02 00 00       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 811d102:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811d106:	89 04 24             	mov    %eax,(%esp)
 811d109:	e8 82 0e 35 00       	call   846df90 <_ZN17CGuildServerProxy17SendGuildWarStartEh>
 811d10e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811d115:	00 
 811d116:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 811d11d:	00 
 811d11e:	c7 44 24 04 60 53 b5 	movl   $0x8b55360,0x4(%esp)
 811d125:	08 
 811d126:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d129:	89 04 24             	mov    %eax,(%esp)
 811d12c:	e8 e7 25 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811d131:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 811d138:	00 
 811d139:	c7 44 24 04 64 46 b5 	movl   $0x8b54664,0x4(%esp)
 811d140:	08 
 811d141:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d144:	89 04 24             	mov    %eax,(%esp)
 811d147:	e8 3c 26 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811d14c:	83 c4 34             	add    $0x34,%esp
 811d14f:	5b                   	pop    %ebx
 811d150:	5d                   	pop    %ebp
 811d151:	c3                   	ret

```

```c
// CGuildWarEvent::StartEvent @ 0x811d024

/* CGuildWarEvent::StartEvent() */

void __thiscall CGuildWarEvent::StartEvent(CGuildWarEvent *this)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  TimerQueue *pTVar5;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [20];
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    *(undefined2 *)(this + 10) = 5;
    *(undefined2 *)(this + 0xc) = 0;
    this_00 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(this_00);
    if (iVar4 == 6) {
      uVar1 = *(ushort *)(this + 10);
      pTVar5 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar5,2,0,0x62,(uint)uVar1 * 0xe10 + -600,10,0);
      iVar4 = G_CEnvironment();
      uVar2 = *(undefined4 *)(iVar4 + 0x1b0);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildWarStart(this_01,(uchar)uVar2);
      cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::StartEvent()",0x27,0);
      cMyTrace::operator()(local_1c,"Guild War Event Start! time(%d)",5);
    }
  }
  return;
}

```

---

## StartEvent_0811d152

```asm
// === 0811d152 CGuildWarEvent::StartEvent  [0x0811d152-0x811d28b] ===
 811d152:	55                   	push   %ebp
 811d153:	89 e5                	mov    %esp,%ebp
 811d155:	56                   	push   %esi
 811d156:	53                   	push   %ebx
 811d157:	83 ec 30             	sub    $0x30,%esp
 811d15a:	8b 45 08             	mov    0x8(%ebp),%eax
 811d15d:	8b 00                	mov    (%eax),%eax
 811d15f:	83 c0 34             	add    $0x34,%eax
 811d162:	8b 10                	mov    (%eax),%edx
 811d164:	8b 45 08             	mov    0x8(%ebp),%eax
 811d167:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d16e:	00 
 811d16f:	89 04 24             	mov    %eax,(%esp)
 811d172:	ff d2                	call   *%edx
 811d174:	83 f0 01             	xor    $0x1,%eax
 811d177:	84 c0                	test   %al,%al
 811d179:	0f 84 05 01 00 00    	je     811d284 <_ZN14CGuildWarEvent10StartEventE10Word_Param+0x132>
 811d17f:	8b 45 08             	mov    0x8(%ebp),%eax
 811d182:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 811d189:	00 
 811d18a:	89 04 24             	mov    %eax,(%esp)
 811d18d:	e8 50 b3 fa ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 811d192:	8b 45 08             	mov    0x8(%ebp),%eax
 811d195:	8b 55 0c             	mov    0xc(%ebp),%edx
 811d198:	89 50 0a             	mov    %edx,0xa(%eax)
 811d19b:	e8 07 d2 fb ff       	call   80da3a7 <_Z11G_GameWorldv>
 811d1a0:	89 04 24             	mov    %eax,(%esp)
 811d1a3:	e8 78 99 ff ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 811d1a8:	83 f8 06             	cmp    $0x6,%eax
 811d1ab:	0f 94 c0             	sete   %al
 811d1ae:	84 c0                	test   %al,%al
 811d1b0:	0f 84 ce 00 00 00    	je     811d284 <_ZN14CGuildWarEvent10StartEventE10Word_Param+0x132>
 811d1b6:	8b 45 08             	mov    0x8(%ebp),%eax
 811d1b9:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 811d1bd:	0f b7 c0             	movzwl %ax,%eax
 811d1c0:	69 c0 10 0e 00 00    	imul   $0xe10,%eax,%eax
 811d1c6:	8d 98 a8 fd ff ff    	lea    -0x258(%eax),%ebx
 811d1cc:	e8 ab 92 fd ff       	call   80f647c <_Z12G_TimerQueuev>
 811d1d1:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 811d1d8:	00 
 811d1d9:	c7 44 24 14 0a 00 00 	movl   $0xa,0x14(%esp)
 811d1e0:	00 
 811d1e1:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 811d1e5:	c7 44 24 0c 62 00 00 	movl   $0x62,0xc(%esp)
 811d1ec:	00 
 811d1ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 811d1f4:	00 
 811d1f5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 811d1fc:	00 
 811d1fd:	89 04 24             	mov    %eax,(%esp)
 811d200:	e8 11 3c 51 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 811d205:	e8 77 ef fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 811d20a:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 811d210:	0f b6 d8             	movzbl %al,%ebx
 811d213:	a1 2c be 40 09       	mov    0x940be2c,%eax
 811d218:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 811d21f:	00 
 811d220:	89 04 24             	mov    %eax,(%esp)
 811d223:	e8 90 01 00 00       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 811d228:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 811d22c:	89 04 24             	mov    %eax,(%esp)
 811d22f:	e8 5c 0d 35 00       	call   846df90 <_ZN17CGuildServerProxy17SendGuildWarStartEh>
 811d234:	e8 48 ef fa ff       	call   80cc181 <_Z14G_CEnvironmentv>
 811d239:	8b b0 b0 01 00 00    	mov    0x1b0(%eax),%esi
 811d23f:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 811d243:	0f b7 d8             	movzwl %ax,%ebx
 811d246:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 811d24d:	00 
 811d24e:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 811d255:	00 
 811d256:	c7 44 24 04 20 53 b5 	movl   $0x8b55320,0x4(%esp)
 811d25d:	08 
 811d25e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d261:	89 04 24             	mov    %eax,(%esp)
 811d264:	e8 af 24 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 811d269:	89 74 24 0c          	mov    %esi,0xc(%esp)
 811d26d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 811d271:	c7 44 24 04 84 46 b5 	movl   $0x8b54684,0x4(%esp)
 811d278:	08 
 811d279:	8d 45 e8             	lea    -0x18(%ebp),%eax
 811d27c:	89 04 24             	mov    %eax,(%esp)
 811d27f:	e8 04 25 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 811d284:	83 c4 30             	add    $0x30,%esp
 811d287:	5b                   	pop    %ebx
 811d288:	5e                   	pop    %esi
 811d289:	5d                   	pop    %ebp
 811d28a:	c3                   	ret
 811d28b:	90                   	nop

```

```c
// CGuildWarEvent::StartEvent @ 0x811d152

/* CGuildWarEvent::StartEvent(Word_Param) */

void __thiscall CGuildWarEvent::StartEvent(CGuildWarEvent *this,uint param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  GameWorld *this_00;
  int iVar4;
  TimerQueue *pTVar5;
  CGuildServerProxy *this_01;
  cMyTrace local_1c [16];
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    *(uint *)(this + 10) = param_2;
    this_00 = (GameWorld *)G_GameWorld();
    iVar4 = GameWorld::GetChannelType(this_00);
    if (iVar4 == 6) {
      uVar1 = *(ushort *)(this + 10);
      pTVar5 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar5,2,0,0x62,(uint)uVar1 * 0xe10 + -600,10,0);
      iVar4 = G_CEnvironment();
      uVar2 = *(undefined4 *)(iVar4 + 0x1b0);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
      CGuildServerProxy::SendGuildWarStart(this_01,(uchar)uVar2);
      iVar4 = G_CEnvironment();
      uVar2 = *(undefined4 *)(iVar4 + 0x1b0);
      cMyTrace::cMyTrace(local_1c,"virtual void CGuildWarEvent::StartEvent(Word_Param)",0x39,0);
      cMyTrace::operator()
                (local_1c,"Guild War Event Start! time(%d), server(%d)",param_2 & 0xffff,uVar2);
    }
  }
  return;
}

```

---

## ~CGuildWarEvent

```asm
// === 0811cfd6 CGuildWarEvent::~CGuildWarEvent  [0x0811cfd6-0x811d005] ===
 811cfd6:	55                   	push   %ebp
 811cfd7:	89 e5                	mov    %esp,%ebp
 811cfd9:	83 ec 18             	sub    $0x18,%esp
 811cfdc:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfdf:	c7 00 a8 53 b5 08    	movl   $0x8b553a8,(%eax)
 811cfe5:	8b 45 08             	mov    0x8(%ebp),%eax
 811cfe8:	89 04 24             	mov    %eax,(%esp)
 811cfeb:	e8 62 de fe ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 811cff0:	b8 00 00 00 00       	mov    $0x0,%eax
 811cff5:	84 c0                	test   %al,%al
 811cff7:	74 0b                	je     811d004 <_ZN14CGuildWarEventD1Ev+0x2e>
 811cff9:	8b 45 08             	mov    0x8(%ebp),%eax
 811cffc:	89 04 24             	mov    %eax,(%esp)
 811cfff:	e8 ec 74 60 00       	call   87244f0 <_ZdlPv>
 811d004:	c9                   	leave
 811d005:	c3                   	ret

```

```c
// CGuildWarEvent::~CGuildWarEvent @ 0x811cfd6

/* WARNING: Removing unreachable block (ram,0x0811cff9) */
/* CGuildWarEvent::~CGuildWarEvent() */

void __thiscall CGuildWarEvent::~CGuildWarEvent(CGuildWarEvent *this)

{
  *(undefined ***)this = &PTR__CGuildWarEvent_08b553a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CGuildWarEvent_0811d006

```asm
// === 0811d006 CGuildWarEvent::~CGuildWarEvent  [0x0811d006-0x811d023] ===
 811d006:	55                   	push   %ebp
 811d007:	89 e5                	mov    %esp,%ebp
 811d009:	83 ec 18             	sub    $0x18,%esp
 811d00c:	8b 45 08             	mov    0x8(%ebp),%eax
 811d00f:	89 04 24             	mov    %eax,(%esp)
 811d012:	e8 bf ff ff ff       	call   811cfd6 <_ZN14CGuildWarEventD1Ev>
 811d017:	8b 45 08             	mov    0x8(%ebp),%eax
 811d01a:	89 04 24             	mov    %eax,(%esp)
 811d01d:	e8 ce 74 60 00       	call   87244f0 <_ZdlPv>
 811d022:	c9                   	leave
 811d023:	c3                   	ret

```

```c
// CGuildWarEvent::~CGuildWarEvent @ 0x811d006

/* CGuildWarEvent::~CGuildWarEvent() */

void __thiscall CGuildWarEvent::~CGuildWarEvent(CGuildWarEvent *this)

{
  ~CGuildWarEvent(this);
  operator_delete(this);
  return;
}

```


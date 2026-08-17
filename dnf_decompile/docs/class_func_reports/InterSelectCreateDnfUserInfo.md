# InterSelectCreateDnfUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 08161012 InterSelectCreateDnfUserInfo::dispatch_sig  [0x08161012-0x8161217] ===
 8161012:	55                   	push   %ebp
 8161013:	89 e5                	mov    %esp,%ebp
 8161015:	56                   	push   %esi
 8161016:	53                   	push   %ebx
 8161017:	83 ec 40             	sub    $0x40,%esp
 816101a:	8b 45 10             	mov    0x10(%ebp),%eax
 816101d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8161020:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8161024:	75 36                	jne    816105c <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x4a>
 8161026:	c7 44 24 10 84 98 b7 	movl   $0x8b79884,0x10(%esp)
 816102d:	08 
 816102e:	c7 44 24 0c 2e 01 00 	movl   $0x12e,0xc(%esp)
 8161035:	00 
 8161036:	c7 44 24 08 e0 a9 b7 	movl   $0x8b7a9e0,0x8(%esp)
 816103d:	08 
 816103e:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8161045:	08 
 8161046:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816104d:	e8 b8 2b 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8161052:	bb 2f 01 00 00       	mov    $0x12f,%ebx
 8161057:	e9 b2 01 00 00       	jmp    816120e <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x1fc>
 816105c:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8161061:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 8161068:	00 
 8161069:	89 04 24             	mov    %eax,(%esp)
 816106c:	e8 27 49 fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8161071:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8161074:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8161078:	74 21                	je     816109b <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x89>
 816107a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 816107d:	8b 00                	mov    (%eax),%eax
 816107f:	83 c0 34             	add    $0x34,%eax
 8161082:	8b 10                	mov    (%eax),%edx
 8161084:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8161087:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816108e:	00 
 816108f:	89 04 24             	mov    %eax,(%esp)
 8161092:	ff d2                	call   *%edx
 8161094:	83 f0 01             	xor    $0x1,%eax
 8161097:	84 c0                	test   %al,%al
 8161099:	74 07                	je     81610a2 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x90>
 816109b:	b8 01 00 00 00       	mov    $0x1,%eax
 81610a0:	eb 05                	jmp    81610a7 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x95>
 81610a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81610a7:	84 c0                	test   %al,%al
 81610a9:	74 6d                	je     8161118 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x106>
 81610ab:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81610ae:	8b 00                	mov    (%eax),%eax
 81610b0:	83 c0 34             	add    $0x34,%eax
 81610b3:	8b 10                	mov    (%eax),%edx
 81610b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81610b8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81610bf:	00 
 81610c0:	89 04 24             	mov    %eax,(%esp)
 81610c3:	ff d2                	call   *%edx
 81610c5:	0f b6 d0             	movzbl %al,%edx
 81610c8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81610cc:	75 07                	jne    81610d5 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0xc3>
 81610ce:	b8 da 98 b7 08       	mov    $0x8b798da,%eax
 81610d3:	eb 05                	jmp    81610da <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0xc8>
 81610d5:	b8 e2 98 b7 08       	mov    $0x8b798e2,%eax
 81610da:	89 54 24 18          	mov    %edx,0x18(%esp)
 81610de:	89 44 24 14          	mov    %eax,0x14(%esp)
 81610e2:	c7 44 24 10 e8 98 b7 	movl   $0x8b798e8,0x10(%esp)
 81610e9:	08 
 81610ea:	c7 44 24 0c 38 01 00 	movl   $0x138,0xc(%esp)
 81610f1:	00 
 81610f2:	c7 44 24 08 e0 a9 b7 	movl   $0x8b7a9e0,0x8(%esp)
 81610f9:	08 
 81610fa:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 8161101:	08 
 8161102:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8161109:	e8 fc 2a 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816110e:	bb 39 01 00 00       	mov    $0x139,%ebx
 8161113:	e9 f6 00 00 00       	jmp    816120e <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x1fc>
 8161118:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 816111c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 816111f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8161123:	83 f0 01             	xor    $0x1,%eax
 8161126:	84 c0                	test   %al,%al
 8161128:	74 16                	je     8161140 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x12e>
 816112a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 816112d:	89 04 24             	mov    %eax,(%esp)
 8161130:	e8 5d 2f 00 00       	call   8164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>
 8161135:	84 c0                	test   %al,%al
 8161137:	74 07                	je     8161140 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x12e>
 8161139:	b8 01 00 00 00       	mov    $0x1,%eax
 816113e:	eb 05                	jmp    8161145 <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x133>
 8161140:	b8 00 00 00 00       	mov    $0x0,%eax
 8161145:	84 c0                	test   %al,%al
 8161147:	74 04                	je     816114d <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x13b>
 8161149:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 816114d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8161150:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8161154:	0f b6 c0             	movzbl %al,%eax
 8161157:	89 44 24 04          	mov    %eax,0x4(%esp)
 816115b:	8b 45 0c             	mov    0xc(%ebp),%eax
 816115e:	89 04 24             	mov    %eax,(%esp)
 8161161:	e8 32 20 53 00       	call   8693198 <_ZN5CUser23SetEventCreateDnfRewardEb>
 8161166:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8161169:	89 04 24             	mov    %eax,(%esp)
 816116c:	e8 db cb 42 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8161171:	c7 44 24 08 2d 02 00 	movl   $0x22d,0x8(%esp)
 8161178:	00 
 8161179:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8161180:	00 
 8161181:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8161184:	89 04 24             	mov    %eax,(%esp)
 8161187:	e8 70 a7 f6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 816118c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 816118f:	89 04 24             	mov    %eax,(%esp)
 8161192:	e8 c9 30 00 00       	call   8164260 <_ZN15CEventCreateDnf7GetRateEv>
 8161197:	0f b7 c0             	movzwl %ax,%eax
 816119a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816119e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611a1:	89 04 24             	mov    %eax,(%esp)
 81611a4:	e8 fb 8c f7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81611a9:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 81611ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 81611b1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611b4:	89 04 24             	mov    %eax,(%esp)
 81611b7:	e8 64 a7 f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81611bc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81611c3:	00 
 81611c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611c7:	89 04 24             	mov    %eax,(%esp)
 81611ca:	e8 89 a7 f6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81611cf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81611d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81611d9:	89 04 24             	mov    %eax,(%esp)
 81611dc:	e8 d9 73 4e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81611e1:	bb 00 00 00 00       	mov    $0x0,%ebx
 81611e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611e9:	89 04 24             	mov    %eax,(%esp)
 81611ec:	e8 8f cc 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81611f1:	eb 1b                	jmp    816120e <_ZN28InterSelectCreateDnfUserInfo12dispatch_sigEP5CUserPci+0x1fc>
 81611f3:	89 d3                	mov    %edx,%ebx
 81611f5:	89 c6                	mov    %eax,%esi
 81611f7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81611fa:	89 04 24             	mov    %eax,(%esp)
 81611fd:	e8 7e cc 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8161202:	89 f0                	mov    %esi,%eax
 8161204:	89 da                	mov    %ebx,%edx
 8161206:	89 04 24             	mov    %eax,(%esp)
 8161209:	e8 42 25 98 00       	call   8ae3750 <_Unwind_Resume>
 816120e:	89 d8                	mov    %ebx,%eax
 8161210:	83 c4 40             	add    $0x40,%esp
 8161213:	5b                   	pop    %ebx
 8161214:	5e                   	pop    %esi
 8161215:	5d                   	pop    %ebp
 8161216:	c3                   	ret
 8161217:	90                   	nop

```

```c
// InterSelectCreateDnfUserInfo::dispatch_sig @ 0x8161012

/* InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectCreateDnfUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  PacketGuard local_24 [12];
  int local_18;
  CEventCreateDnf *local_14;
  char local_d;
  
  local_18 = param_3;
  if (param_3 == 0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "virtual int InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)",0x12e,
               "[Taiwan, Event] interMsg is null.");
    return 0x12f;
  }
  local_14 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
  if ((local_14 == (CEventCreateDnf *)0x0) ||
     (cVar2 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    local_d = '\0';
    if ((*(char *)(local_18 + 4) == '\x01') ||
       (cVar2 = CEventCreateDnf::IsRewardCondition(local_14), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_d = '\x01';
    }
    CUser::SetEventCreateDnfReward((CUser *)param_2,*(bool *)(local_18 + 4));
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08161187 to 081611e0 has its CatchHandler @ 081611f3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x22d);
    uVar3 = CEventCreateDnf::GetRate(local_14);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar3 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)local_d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send((CUser *)param_2,local_24);
    PacketGuard::~PacketGuard(local_24);
    return 0;
  }
  uVar3 = (**(code **)(*(int *)local_14 + 0x34))(local_14,0);
  if (local_14 == (CEventCreateDnf *)0x0) {
    pcVar4 = "nullptr";
  }
  else {
    pcVar4 = "ok";
  }
  LogManager::logFormat
            (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
             "virtual int InterSelectCreateDnfUserInfo::dispatch_sig(CUser*, char*, int)",0x138,
             "[Taiwan, Event] stayEvent=%s eventing:%d",pcVar4,uVar3 & 0xff);
  return 0x139;
}

```

---

## makeRequest

```asm
// === 08161218 InterSelectCreateDnfUserInfo::makeRequest  [0x08161218-0x8161329] ===
 8161218:	55                   	push   %ebp
 8161219:	89 e5                	mov    %esp,%ebp
 816121b:	56                   	push   %esi
 816121c:	53                   	push   %ebx
 816121d:	83 ec 40             	sub    $0x40,%esp
 8161220:	8b 45 10             	mov    0x10(%ebp),%eax
 8161223:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8161226:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 816122b:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 8161232:	00 
 8161233:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 816123a:	08 
 816123b:	89 04 24             	mov    %eax,(%esp)
 816123e:	e8 43 e8 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8161243:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 816124a:	00 
 816124b:	89 44 24 04          	mov    %eax,0x4(%esp)
 816124f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161252:	89 04 24             	mov    %eax,(%esp)
 8161255:	e8 cc 79 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 816125a:	8b 45 08             	mov    0x8(%ebp),%eax
 816125d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8161261:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8161268:	00 
 8161269:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816126c:	89 04 24             	mov    %eax,(%esp)
 816126f:	e8 dc 26 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 8161274:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161277:	89 04 24             	mov    %eax,(%esp)
 816127a:	e8 cf 79 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 816127f:	89 04 24             	mov    %eax,(%esp)
 8161282:	e8 37 15 00 00       	call   81627be <_ZN12CStreamGuard11GetInBufferIN28InterSelectCreateDnfUserInfo3MsgEEEPT_v>
 8161287:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816128a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816128e:	75 3d                	jne    81612cd <_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb+0xb5>
 8161290:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8161294:	89 44 24 18          	mov    %eax,0x18(%esp)
 8161298:	8b 45 0c             	mov    0xc(%ebp),%eax
 816129b:	89 44 24 14          	mov    %eax,0x14(%esp)
 816129f:	c7 44 24 10 44 99 b7 	movl   $0x8b79944,0x10(%esp)
 81612a6:	08 
 81612a7:	c7 44 24 0c 52 01 00 	movl   $0x152,0xc(%esp)
 81612ae:	00 
 81612af:	c7 44 24 08 80 a9 b7 	movl   $0x8b7a980,0x8(%esp)
 81612b6:	08 
 81612b7:	c7 44 24 04 a8 98 b7 	movl   $0x8b798a8,0x4(%esp)
 81612be:	08 
 81612bf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81612c6:	e8 3f 29 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81612cb:	eb 4b                	jmp    8161318 <_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb+0x100>
 81612cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81612d0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81612d3:	89 10                	mov    %edx,(%eax)
 81612d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81612d8:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 81612dc:	88 50 04             	mov    %dl,0x4(%eax)
 81612df:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81612e4:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81612e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81612eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81612f2:	00 
 81612f3:	89 04 24             	mov    %eax,(%esp)
 81612f6:	e8 e3 fc 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81612fb:	eb 1b                	jmp    8161318 <_ZN28InterSelectCreateDnfUserInfo11makeRequestEijb+0x100>
 81612fd:	89 d3                	mov    %edx,%ebx
 81612ff:	89 c6                	mov    %eax,%esi
 8161301:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8161304:	89 04 24             	mov    %eax,(%esp)
 8161307:	e8 c6 b5 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816130c:	89 f0                	mov    %esi,%eax
 816130e:	89 da                	mov    %ebx,%edx
 8161310:	89 04 24             	mov    %eax,(%esp)
 8161313:	e8 38 24 98 00       	call   8ae3750 <_Unwind_Resume>
 8161318:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816131b:	89 04 24             	mov    %eax,(%esp)
 816131e:	e8 af b5 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8161323:	83 c4 40             	add    $0x40,%esp
 8161326:	5b                   	pop    %ebx
 8161327:	5e                   	pop    %esi
 8161328:	5d                   	pop    %ebp
 8161329:	c3                   	ret

```

```c
// InterSelectCreateDnfUserInfo::makeRequest @ 0x8161218

/* InterSelectCreateDnfUserInfo::makeRequest(int, unsigned int, bool) */

void InterSelectCreateDnfUserInfo::makeRequest(int param_1,uint param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *this;
  CStreamGuard local_18 [8];
  Msg *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x14d);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0816126f to 081612fa has its CatchHandler @ 081612fd */
  Taiwan::internal_stream(local_18,10,param_1);
  this = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<InterSelectCreateDnfUserInfo::Msg>(this);
  if (local_10 == (Msg *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
               "static void InterSelectCreateDnfUserInfo::makeRequest(int, memberIdentificationNumber_t, bool)"
               ,0x152,"[Taiwan, Event] m_id:%d isReceived:%d",param_2,(uint)param_3);
  }
  else {
    *(uint *)local_10 = param_2;
    local_10[4] = (Msg)param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```


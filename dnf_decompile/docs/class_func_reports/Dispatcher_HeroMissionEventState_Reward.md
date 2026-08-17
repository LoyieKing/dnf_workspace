# Dispatcher_HeroMissionEventState_Reward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08260094 Dispatcher_HeroMissionEventState_Reward::dispatch_sig  [0x08260094-0x826028f] ===
 8260094:	55                   	push   %ebp
 8260095:	89 e5                	mov    %esp,%ebp
 8260097:	56                   	push   %esi
 8260098:	53                   	push   %ebx
 8260099:	83 ec 30             	sub    $0x30,%esp
 826009c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 82600a3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82600a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82600aa:	8b 45 10             	mov    0x10(%ebp),%eax
 82600ad:	89 04 24             	mov    %eax,(%esp)
 82600b0:	e8 0b cf 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82600b5:	83 f0 01             	xor    $0x1,%eax
 82600b8:	84 c0                	test   %al,%al
 82600ba:	74 29                	je     82600e5 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x51>
 82600bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82600c3:	00 
 82600c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82600cb:	00 
 82600cc:	c7 44 24 04 00 9c be 	movl   $0x8be9c00,0x4(%esp)
 82600d3:	08 
 82600d4:	c7 04 24 69 0b 00 00 	movl   $0xb69,(%esp)
 82600db:	e8 f7 07 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 82600e0:	e9 a4 01 00 00       	jmp    8260289 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1f5>
 82600e5:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82600ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82600ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 82600f3:	8b 45 10             	mov    0x10(%ebp),%eax
 82600f6:	89 04 24             	mov    %eax,(%esp)
 82600f9:	e8 c2 ce 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82600fe:	83 f0 01             	xor    $0x1,%eax
 8260101:	84 c0                	test   %al,%al
 8260103:	74 29                	je     826012e <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x9a>
 8260105:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826010c:	00 
 826010d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8260114:	00 
 8260115:	c7 44 24 04 00 9c be 	movl   $0x8be9c00,0x4(%esp)
 826011c:	08 
 826011d:	c7 04 24 6d 0b 00 00 	movl   $0xb6d,(%esp)
 8260124:	e8 ae 07 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 8260129:	e9 5b 01 00 00       	jmp    8260289 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1f5>
 826012e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8260131:	83 f8 01             	cmp    $0x1,%eax
 8260134:	75 38                	jne    826016e <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0xda>
 8260136:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8260139:	85 c0                	test   %eax,%eax
 826013b:	79 31                	jns    826016e <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0xda>
 826013d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8260140:	83 f8 06             	cmp    $0x6,%eax
 8260143:	7e 29                	jle    826016e <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0xda>
 8260145:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826014c:	00 
 826014d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8260154:	00 
 8260155:	c7 44 24 04 00 9c be 	movl   $0x8be9c00,0x4(%esp)
 826015c:	08 
 826015d:	c7 04 24 71 0b 00 00 	movl   $0xb71,(%esp)
 8260164:	e8 6e 07 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 8260169:	e9 1b 01 00 00       	jmp    8260289 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1f5>
 826016e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8260171:	85 c0                	test   %eax,%eax
 8260173:	75 19                	jne    826018e <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0xfa>
 8260175:	e8 54 c8 eb ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 826017a:	8b 55 0c             	mov    0xc(%ebp),%edx
 826017d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8260181:	89 04 24             	mov    %eax,(%esp)
 8260184:	e8 85 75 f0 ff       	call   816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>
 8260189:	e9 f6 00 00 00       	jmp    8260284 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1f0>
 826018e:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8260191:	e8 38 c8 eb ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 8260196:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826019a:	8b 55 0c             	mov    0xc(%ebp),%edx
 826019d:	89 54 24 04          	mov    %edx,0x4(%esp)
 82601a1:	89 04 24             	mov    %eax,(%esp)
 82601a4:	e8 e5 72 f0 ff       	call   816748e <_ZN16HeroMissionEvent13rewardMissionEP5CUserN20HeroMissionCondition9MissionNo1TE>
 82601a9:	88 45 f7             	mov    %al,-0x9(%ebp)
 82601ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82601af:	89 04 24             	mov    %eax,(%esp)
 82601b2:	e8 95 db 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82601b7:	c7 44 24 08 5a 02 00 	movl   $0x25a,0x8(%esp)
 82601be:	00 
 82601bf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82601c6:	00 
 82601c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82601ca:	89 04 24             	mov    %eax,(%esp)
 82601cd:	e8 2a b7 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82601d2:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 82601d6:	74 27                	je     82601ff <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x16b>
 82601d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82601df:	00 
 82601e0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82601e3:	89 04 24             	mov    %eax,(%esp)
 82601e6:	e8 35 b7 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82601eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82601ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82601f2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 82601f5:	89 04 24             	mov    %eax,(%esp)
 82601f8:	e8 a7 9c e7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 82601fd:	eb 38                	jmp    8260237 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1a3>
 82601ff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8260206:	00 
 8260207:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826020a:	89 04 24             	mov    %eax,(%esp)
 826020d:	e8 0e b7 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8260212:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8260219:	00 
 826021a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826021d:	89 04 24             	mov    %eax,(%esp)
 8260220:	e8 fb b6 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8260225:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8260228:	89 44 24 04          	mov    %eax,0x4(%esp)
 826022c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826022f:	89 04 24             	mov    %eax,(%esp)
 8260232:	e8 6d 9c e7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8260237:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826023e:	00 
 826023f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8260242:	89 04 24             	mov    %eax,(%esp)
 8260245:	e8 0e b7 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 826024a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826024d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8260251:	8b 45 0c             	mov    0xc(%ebp),%eax
 8260254:	89 04 24             	mov    %eax,(%esp)
 8260257:	e8 5e 83 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 826025c:	eb 1b                	jmp    8260279 <_ZN39Dispatcher_HeroMissionEventState_Reward12dispatch_sigEP5CUserR9PacketBuf+0x1e5>
 826025e:	89 d3                	mov    %edx,%ebx
 8260260:	89 c6                	mov    %eax,%esi
 8260262:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8260265:	89 04 24             	mov    %eax,(%esp)
 8260268:	e8 13 dc 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 826026d:	89 f0                	mov    %esi,%eax
 826026f:	89 da                	mov    %ebx,%edx
 8260271:	89 04 24             	mov    %eax,(%esp)
 8260274:	e8 d7 34 88 00       	call   8ae3750 <_Unwind_Resume>
 8260279:	8d 45 e0             	lea    -0x20(%ebp),%eax
 826027c:	89 04 24             	mov    %eax,(%esp)
 826027f:	e8 fc db 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8260284:	b8 00 00 00 00       	mov    $0x0,%eax
 8260289:	83 c4 30             	add    $0x30,%esp
 826028c:	5b                   	pop    %ebx
 826028d:	5e                   	pop    %esi
 826028e:	5d                   	pop    %ebp
 826028f:	c3                   	ret

```

```c
// Dispatcher_HeroMissionEventState_Reward::dispatch_sig @ 0x8260094

/* Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_HeroMissionEventState_Reward::dispatch_sig
          (Dispatcher_HeroMissionEventState_Reward *this,CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  HeroMissionEvent *pHVar4;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  char local_d;
  
  local_14 = 0;
  cVar2 = PacketBuf::get_short(param_2,(short *)&local_14);
  if (cVar2 == '\x01') {
    local_18 = 0;
    cVar2 = PacketBuf::get_short(param_2,(short *)&local_18);
    iVar1 = local_18;
    if (cVar2 == '\x01') {
      if (((local_14 == 1) && (local_18 < 0)) && (6 < local_18)) {
        uVar3 = LineFunc(0xb71,
                         "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
      else {
        if (local_14 == 0) {
          pHVar4 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
          HeroMissionEvent::sendMissionData(pHVar4,param_1);
        }
        else {
          pHVar4 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
          local_d = HeroMissionEvent::rewardMission(pHVar4,param_1,iVar1);
          PacketGuard::PacketGuard(local_24);
                    /* try { // try from 082601cd to 0826025b has its CatchHandler @ 0826025e */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x25a);
          if (local_d == '\0') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_14);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_14);
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
          CUser::Send(param_1,local_24);
          PacketGuard::~PacketGuard(local_24);
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = LineFunc(0xb6d,
                       "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xb69,
                     "virtual int Dispatcher_HeroMissionEventState_Reward::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar3;
}

```


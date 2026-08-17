# InterLoadHeroMissionEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08161c92 InterLoadHeroMissionEventData::dispatch_sig  [0x08161c92-0x8161d51] ===
 8161c92:	55                   	push   %ebp
 8161c93:	89 e5                	mov    %esp,%ebp
 8161c95:	53                   	push   %ebx
 8161c96:	83 ec 34             	sub    $0x34,%esp
 8161c99:	8b 45 10             	mov    0x10(%ebp),%eax
 8161c9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8161c9f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8161ca3:	75 3d                	jne    8161ce2 <_ZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPci+0x50>
 8161ca5:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8161cac:	00 
 8161cad:	c7 44 24 08 ff 01 00 	movl   $0x1ff,0x8(%esp)
 8161cb4:	00 
 8161cb5:	c7 44 24 04 40 a7 b7 	movl   $0x8b7a740,0x4(%esp)
 8161cbc:	08 
 8161cbd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8161cc0:	89 04 24             	mov    %eax,(%esp)
 8161cc3:	e8 50 da 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8161cc8:	c7 44 24 04 f9 9a b7 	movl   $0x8b79af9,0x4(%esp)
 8161ccf:	08 
 8161cd0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8161cd3:	89 04 24             	mov    %eax,(%esp)
 8161cd6:	e8 ad da 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8161cdb:	b8 00 02 00 00       	mov    $0x200,%eax
 8161ce0:	eb 6a                	jmp    8161d4c <_ZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPci+0xba>
 8161ce2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161ce5:	8d 58 04             	lea    0x4(%eax),%ebx
 8161ce8:	e8 e1 ac fb ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 8161ced:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8161cf1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8161cf4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8161cf8:	89 04 24             	mov    %eax,(%esp)
 8161cfb:	e8 52 4a 00 00       	call   8166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>
 8161d00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161d03:	89 04 24             	mov    %eax,(%esp)
 8161d06:	e8 2d 06 00 00       	call   8162338 <_ZN15CUserCharacInfo16IsFirstTimeLoginEv>
 8161d0b:	84 c0                	test   %al,%al
 8161d0d:	74 24                	je     8161d33 <_ZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPci+0xa1>
 8161d0f:	e8 ba ac fb ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 8161d14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8161d1b:	00 
 8161d1c:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8161d23:	00 
 8161d24:	8b 55 0c             	mov    0xc(%ebp),%edx
 8161d27:	89 54 24 04          	mov    %edx,0x4(%esp)
 8161d2b:	89 04 24             	mov    %eax,(%esp)
 8161d2e:	e8 8b 55 00 00       	call   81672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 8161d33:	e8 96 ac fb ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 8161d38:	8b 55 0c             	mov    0xc(%ebp),%edx
 8161d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8161d3f:	89 04 24             	mov    %eax,(%esp)
 8161d42:	e8 c7 59 00 00       	call   816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>
 8161d47:	b8 00 00 00 00       	mov    $0x0,%eax
 8161d4c:	83 c4 34             	add    $0x34,%esp
 8161d4f:	5b                   	pop    %ebx
 8161d50:	5d                   	pop    %ebp
 8161d51:	c3                   	ret

```

```c
// InterLoadHeroMissionEventData::dispatch_sig @ 0x8161c92

/* InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadHeroMissionEventData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  HeroMissionEvent *pHVar3;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual int InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int)"
                       ,0x1ff,5);
    cMyTrace::operator()(local_20,"[HeroMission] msg is null.");
    uVar2 = 0x200;
  }
  else {
    pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::setEventData(pHVar3,(CUser *)param_2,(char *)(param_3 + 4));
    cVar1 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
    if (cVar1 != '\0') {
      pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::processMission(pHVar3,param_2,5,0);
    }
    pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::sendMissionData(pHVar3,(CUser *)param_2);
    uVar2 = 0;
  }
  return uVar2;
}

```


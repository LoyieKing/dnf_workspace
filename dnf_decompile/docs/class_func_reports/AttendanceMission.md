# AttendanceMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AttendanceMission

```asm
// === 08165f90 AttendanceMission::AttendanceMission  [0x08165f90-0x8165fb3] ===
 8165f90:	55                   	push   %ebp
 8165f91:	89 e5                	mov    %esp,%ebp
 8165f93:	83 ec 18             	sub    $0x18,%esp
 8165f96:	8b 45 08             	mov    0x8(%ebp),%eax
 8165f99:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8165fa0:	00 
 8165fa1:	89 04 24             	mov    %eax,(%esp)
 8165fa4:	e8 69 ef ff ff       	call   8164f12 <_ZN24BaseHeroMissionConditionC1EN20HeroMissionCondition9MissionNo1TE>
 8165fa9:	8b 45 08             	mov    0x8(%ebp),%eax
 8165fac:	c7 00 60 f0 b7 08    	movl   $0x8b7f060,(%eax)
 8165fb2:	c9                   	leave
 8165fb3:	c3                   	ret

```

```c
// AttendanceMission::AttendanceMission @ 0x8165f90

/* AttendanceMission::AttendanceMission() */

void __thiscall AttendanceMission::AttendanceMission(AttendanceMission *this)

{
  BaseHeroMissionCondition::BaseHeroMissionCondition((BaseHeroMissionCondition *)this,5);
  *(undefined ***)this = &PTR__AttendanceMission_08b7f060;
  return;
}

```

---

## processMission

```asm
// === 08166002 AttendanceMission::processMission  [0x08166002-0x81661d5] ===
 8166002:	55                   	push   %ebp
 8166003:	89 e5                	mov    %esp,%ebp
 8166005:	53                   	push   %ebx
 8166006:	81 ec 84 00 00 00    	sub    $0x84,%esp
 816600c:	8b 45 08             	mov    0x8(%ebp),%eax
 816600f:	83 c0 28             	add    $0x28,%eax
 8166012:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8166019:	00 
 816601a:	89 04 24             	mov    %eax,(%esp)
 816601d:	e8 a8 24 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8166022:	0f b7 10             	movzwl (%eax),%edx
 8166025:	8b 45 10             	mov    0x10(%ebp),%eax
 8166028:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 816602c:	66 39 c2             	cmp    %ax,%dx
 816602f:	0f 96 c0             	setbe  %al
 8166032:	84 c0                	test   %al,%al
 8166034:	0f 85 91 01 00 00    	jne    81661cb <_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej+0x1c9>
 816603a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8166041:	e8 58 5c f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8166046:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8166049:	8d 45 c0             	lea    -0x40(%ebp),%eax
 816604c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166050:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166053:	89 04 24             	mov    %eax,(%esp)
 8166056:	e8 05 83 f1 ff       	call   807e360 <localtime_r@plt>
 816605b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 816605e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8166062:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8166065:	89 04 24             	mov    %eax,(%esp)
 8166068:	e8 f3 82 f1 ff       	call   807e360 <localtime_r@plt>
 816606d:	e8 0f 61 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8166072:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 8166078:	89 45 c8             	mov    %eax,-0x38(%ebp)
 816607b:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8166082:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8166089:	8d 45 c0             	lea    -0x40(%ebp),%eax
 816608c:	89 04 24             	mov    %eax,(%esp)
 816608f:	e8 8c 87 f1 ff       	call   807e820 <mktime@plt>
 8166094:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8166097:	8b 45 08             	mov    0x8(%ebp),%eax
 816609a:	83 c0 28             	add    $0x28,%eax
 816609d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81660a4:	00 
 81660a5:	89 04 24             	mov    %eax,(%esp)
 81660a8:	e8 1d 24 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81660ad:	0f b7 00             	movzwl (%eax),%eax
 81660b0:	0f b7 c0             	movzwl %ax,%eax
 81660b3:	83 e8 01             	sub    $0x1,%eax
 81660b6:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 81660b9:	8b 45 08             	mov    0x8(%ebp),%eax
 81660bc:	83 c0 28             	add    $0x28,%eax
 81660bf:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81660c6:	00 
 81660c7:	89 04 24             	mov    %eax,(%esp)
 81660ca:	e8 fb 23 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 81660cf:	0f b7 00             	movzwl (%eax),%eax
 81660d2:	0f b7 d0             	movzwl %ax,%edx
 81660d5:	8b 45 10             	mov    0x10(%ebp),%eax
 81660d8:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81660dc:	0f b7 c0             	movzwl %ax,%eax
 81660df:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81660e2:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81660e5:	e8 97 60 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81660ea:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 81660f0:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81660f3:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 81660fa:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8166101:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8166104:	89 04 24             	mov    %eax,(%esp)
 8166107:	e8 14 87 f1 ff       	call   807e820 <mktime@plt>
 816610c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816610f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8166112:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8166115:	89 d1                	mov    %edx,%ecx
 8166117:	29 c1                	sub    %eax,%ecx
 8166119:	89 c8                	mov    %ecx,%eax
 816611b:	3d 80 51 01 00       	cmp    $0x15180,%eax
 8166120:	7e 0b                	jle    816612d <_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej+0x12b>
 8166122:	8b 45 10             	mov    0x10(%ebp),%eax
 8166125:	89 04 24             	mov    %eax,(%esp)
 8166128:	e8 85 ea ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 816612d:	8b 45 08             	mov    0x8(%ebp),%eax
 8166130:	83 c0 28             	add    $0x28,%eax
 8166133:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816613a:	00 
 816613b:	89 04 24             	mov    %eax,(%esp)
 816613e:	e8 87 23 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8166143:	0f b7 00             	movzwl (%eax),%eax
 8166146:	0f b7 d0             	movzwl %ax,%edx
 8166149:	8b 45 10             	mov    0x10(%ebp),%eax
 816614c:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8166150:	0f b7 c0             	movzwl %ax,%eax
 8166153:	83 c0 01             	add    $0x1,%eax
 8166156:	39 c2                	cmp    %eax,%edx
 8166158:	0f 9e c0             	setle  %al
 816615b:	84 c0                	test   %al,%al
 816615d:	74 22                	je     8166181 <_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej+0x17f>
 816615f:	8b 45 08             	mov    0x8(%ebp),%eax
 8166162:	83 c0 28             	add    $0x28,%eax
 8166165:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816616c:	00 
 816616d:	89 04 24             	mov    %eax,(%esp)
 8166170:	e8 55 23 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8166175:	0f b7 10             	movzwl (%eax),%edx
 8166178:	8b 45 10             	mov    0x10(%ebp),%eax
 816617b:	66 89 50 04          	mov    %dx,0x4(%eax)
 816617f:	eb 11                	jmp    8166192 <_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej+0x190>
 8166181:	8b 45 10             	mov    0x10(%ebp),%eax
 8166184:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8166188:	8d 50 01             	lea    0x1(%eax),%edx
 816618b:	8b 45 10             	mov    0x10(%ebp),%eax
 816618e:	66 89 50 04          	mov    %dx,0x4(%eax)
 8166192:	8b 45 10             	mov    0x10(%ebp),%eax
 8166195:	0f b7 58 08          	movzwl 0x8(%eax),%ebx
 8166199:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816619c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 816619f:	89 d1                	mov    %edx,%ecx
 81661a1:	29 c1                	sub    %eax,%ecx
 81661a3:	ba 07 45 2e c2       	mov    $0xc22e4507,%edx
 81661a8:	89 c8                	mov    %ecx,%eax
 81661aa:	f7 ea                	imul   %edx
 81661ac:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 81661af:	89 c2                	mov    %eax,%edx
 81661b1:	c1 fa 10             	sar    $0x10,%edx
 81661b4:	89 c8                	mov    %ecx,%eax
 81661b6:	c1 f8 1f             	sar    $0x1f,%eax
 81661b9:	89 d1                	mov    %edx,%ecx
 81661bb:	29 c1                	sub    %eax,%ecx
 81661bd:	89 c8                	mov    %ecx,%eax
 81661bf:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 81661c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81661c5:	66 89 50 08          	mov    %dx,0x8(%eax)
 81661c9:	eb 01                	jmp    81661cc <_ZN17AttendanceMission14processMissionEP5CUserR16HeroMissionValuej+0x1ca>
 81661cb:	90                   	nop
 81661cc:	81 c4 84 00 00 00    	add    $0x84,%esp
 81661d2:	5b                   	pop    %ebx
 81661d3:	5d                   	pop    %ebp
 81661d4:	c3                   	ret
 81661d5:	90                   	nop

```

```c
// AttendanceMission::processMission @ 0x8166002

/* AttendanceMission::processMission(CUser*, HeroMissionValue&, unsigned int) */

void AttendanceMission::processMission(CUser *param_1,HeroMissionValue *param_2,uint param_3)

{
  ushort *puVar1;
  int iVar2;
  undefined2 *puVar3;
  tm local_70;
  tm local_44;
  time_t local_18;
  time_t local_14;
  time_t local_10;
  
  puVar1 = (ushort *)
           std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                     ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0);
  if (*(ushort *)(param_3 + 4) < *puVar1) {
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_18,&local_44);
    localtime_r(&local_18,&local_70);
    iVar2 = G_CEnvironment();
    local_44.tm_hour = *(int *)(iVar2 + 0x37c);
    local_44.tm_min = 0;
    local_44.tm_sec = 0;
    local_14 = mktime(&local_44);
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),1)
    ;
    local_70.tm_mon = *puVar1 - 1;
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),2)
    ;
    local_70.tm_mday = (uint)*puVar1 + (uint)*(ushort *)(param_3 + 8);
    iVar2 = G_CEnvironment();
    local_70.tm_hour = *(int *)(iVar2 + 0x37c);
    local_70.tm_min = 0;
    local_70.tm_sec = 0;
    local_10 = mktime(&local_70);
    if (0x15180 < local_14 - local_10) {
      HeroMissionValue::reset((HeroMissionValue *)param_3);
    }
    puVar1 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),0)
    ;
    if (*(ushort *)(param_3 + 4) + 1 < (uint)*puVar1) {
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 1;
    }
    else {
      puVar3 = (undefined2 *)
               std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                         ((vector<unsigned_short,std::allocator<unsigned_short>> *)(param_1 + 0x28),
                          0);
      *(undefined2 *)(param_3 + 4) = *puVar3;
    }
    *(short *)(param_3 + 8) = *(short *)(param_3 + 8) + (short)((local_14 - local_10) / 0x15180);
  }
  return;
}

```

---

## rewardMission

```asm
// === 081661d6 AttendanceMission::rewardMission  [0x081661d6-0x8166305] ===
 81661d6:	55                   	push   %ebp
 81661d7:	89 e5                	mov    %esp,%ebp
 81661d9:	57                   	push   %edi
 81661da:	56                   	push   %esi
 81661db:	53                   	push   %ebx
 81661dc:	83 ec 4c             	sub    $0x4c,%esp
 81661df:	8b 45 08             	mov    0x8(%ebp),%eax
 81661e2:	89 04 24             	mov    %eax,(%esp)
 81661e5:	e8 d8 ed ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 81661ea:	83 f0 01             	xor    $0x1,%eax
 81661ed:	84 c0                	test   %al,%al
 81661ef:	74 13                	je     8166204 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x2e>
 81661f1:	8b 45 10             	mov    0x10(%ebp),%eax
 81661f4:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81661f8:	66 85 c0             	test   %ax,%ax
 81661fb:	74 07                	je     8166204 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x2e>
 81661fd:	b8 01 00 00 00       	mov    $0x1,%eax
 8166202:	eb 05                	jmp    8166209 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x33>
 8166204:	b8 00 00 00 00       	mov    $0x0,%eax
 8166209:	84 c0                	test   %al,%al
 816620b:	74 0a                	je     8166217 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x41>
 816620d:	b8 00 00 00 00       	mov    $0x0,%eax
 8166212:	e9 e6 00 00 00       	jmp    81662fd <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x127>
 8166217:	8b 45 10             	mov    0x10(%ebp),%eax
 816621a:	0f b7 58 04          	movzwl 0x4(%eax),%ebx
 816621e:	8b 45 08             	mov    0x8(%ebp),%eax
 8166221:	83 c0 28             	add    $0x28,%eax
 8166224:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816622b:	00 
 816622c:	89 04 24             	mov    %eax,(%esp)
 816622f:	e8 96 22 00 00       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 8166234:	0f b7 00             	movzwl (%eax),%eax
 8166237:	66 39 c3             	cmp    %ax,%bx
 816623a:	0f 92 c0             	setb   %al
 816623d:	84 c0                	test   %al,%al
 816623f:	74 6f                	je     81662b0 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0xda>
 8166241:	8b 45 10             	mov    0x10(%ebp),%eax
 8166244:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8166248:	0f b7 f8             	movzwl %ax,%edi
 816624b:	8b 45 10             	mov    0x10(%ebp),%eax
 816624e:	8b 00                	mov    (%eax),%eax
 8166250:	89 c6                	mov    %eax,%esi
 8166252:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8166259:	ff 
 816625a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816625d:	89 04 24             	mov    %eax,(%esp)
 8166260:	e8 3b 7d 4e 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8166265:	89 c3                	mov    %eax,%ebx
 8166267:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 816626e:	00 
 816626f:	c7 44 24 08 a4 01 00 	movl   $0x1a4,0x8(%esp)
 8166276:	00 
 8166277:	c7 44 24 04 e0 ed b7 	movl   $0x8b7ede0,0x4(%esp)
 816627e:	08 
 816627f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8166282:	89 04 24             	mov    %eax,(%esp)
 8166285:	e8 8e 94 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816628a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 816628e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8166292:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8166296:	c7 44 24 04 20 dc b7 	movl   $0x8b7dc20,0x4(%esp)
 816629d:	08 
 816629e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81662a1:	89 04 24             	mov    %eax,(%esp)
 81662a4:	e8 df 94 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81662a9:	b8 00 00 00 00       	mov    $0x0,%eax
 81662ae:	eb 4d                	jmp    81662fd <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x127>
 81662b0:	8b 45 08             	mov    0x8(%ebp),%eax
 81662b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 81662b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81662ba:	89 04 24             	mov    %eax,(%esp)
 81662bd:	e8 6c ed ff ff       	call   816502e <_ZN24BaseHeroMissionCondition13rewardProcessEP5CUser>
 81662c2:	88 45 e7             	mov    %al,-0x19(%ebp)
 81662c5:	8b 45 10             	mov    0x10(%ebp),%eax
 81662c8:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81662cc:	8d 50 01             	lea    0x1(%eax),%edx
 81662cf:	8b 45 10             	mov    0x10(%ebp),%eax
 81662d2:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81662d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81662d9:	66 c7 40 06 01 00    	movw   $0x1,0x6(%eax)
 81662df:	8b 45 08             	mov    0x8(%ebp),%eax
 81662e2:	89 04 24             	mov    %eax,(%esp)
 81662e5:	e8 d8 ec ff ff       	call   8164fc2 <_ZN24BaseHeroMissionCondition15isRepeatMissionEv>
 81662ea:	84 c0                	test   %al,%al
 81662ec:	74 0b                	je     81662f9 <_ZN17AttendanceMission13rewardMissionEP5CUserR16HeroMissionValue+0x123>
 81662ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81662f1:	89 04 24             	mov    %eax,(%esp)
 81662f4:	e8 b9 e8 ff ff       	call   8164bb2 <_ZN16HeroMissionValue5resetEv>
 81662f9:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 81662fd:	83 c4 4c             	add    $0x4c,%esp
 8166300:	5b                   	pop    %ebx
 8166301:	5e                   	pop    %esi
 8166302:	5f                   	pop    %edi
 8166303:	5d                   	pop    %ebp
 8166304:	c3                   	ret
 8166305:	90                   	nop

```

```c
// AttendanceMission::rewardMission @ 0x81661d6

/* AttendanceMission::rewardMission(CUser*, HeroMissionValue&) */

undefined1 __thiscall
AttendanceMission::rewardMission(AttendanceMission *this,CUser *param_1,HeroMissionValue *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  ushort *puVar5;
  undefined4 uVar6;
  cMyTrace local_30 [19];
  undefined1 local_1d;
  
  cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
  if ((cVar4 == '\x01') || (*(short *)(param_2 + 10) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    local_1d = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 4);
    puVar5 = (ushort *)
             std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                       ((vector<unsigned_short,std::allocator<unsigned_short>> *)(this + 0x28),0);
    if (uVar1 < *puVar5) {
      uVar1 = *(ushort *)(param_2 + 10);
      uVar2 = *(undefined4 *)param_2;
      uVar6 = CUser::get_charac_no(param_1,-1);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool AttendanceMission::rewardMission(CUser*, HeroMissionValue&)",
                         0x1a4,5);
      cMyTrace::operator()
                (local_30,"[HeroMission] Reward condition error. (charac:%u,mission:%d,count:%d)",
                 uVar6,uVar2,(uint)uVar1);
      local_1d = 0;
    }
    else {
      local_1d = BaseHeroMissionCondition::rewardProcess((BaseHeroMissionCondition *)this,param_1);
      *(short *)(param_2 + 10) = *(short *)(param_2 + 10) + 1;
      *(undefined2 *)(param_2 + 6) = 1;
      cVar4 = BaseHeroMissionCondition::isRepeatMission((BaseHeroMissionCondition *)this);
      if (cVar4 != '\0') {
        HeroMissionValue::reset(param_2);
      }
    }
  }
  return local_1d;
}

```

---

## ~AttendanceMission

```asm
// === 08165fb4 AttendanceMission::~AttendanceMission  [0x08165fb4-0x8165fe3] ===
 8165fb4:	55                   	push   %ebp
 8165fb5:	89 e5                	mov    %esp,%ebp
 8165fb7:	83 ec 18             	sub    $0x18,%esp
 8165fba:	8b 45 08             	mov    0x8(%ebp),%eax
 8165fbd:	c7 00 60 f0 b7 08    	movl   $0x8b7f060,(%eax)
 8165fc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8165fc6:	89 04 24             	mov    %eax,(%esp)
 8165fc9:	e8 6c ef ff ff       	call   8164f3a <_ZN24BaseHeroMissionConditionD1Ev>
 8165fce:	b8 00 00 00 00       	mov    $0x0,%eax
 8165fd3:	84 c0                	test   %al,%al
 8165fd5:	74 0b                	je     8165fe2 <_ZN17AttendanceMissionD1Ev+0x2e>
 8165fd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8165fda:	89 04 24             	mov    %eax,(%esp)
 8165fdd:	e8 0e e5 5b 00       	call   87244f0 <_ZdlPv>
 8165fe2:	c9                   	leave
 8165fe3:	c3                   	ret

```

```c
// AttendanceMission::~AttendanceMission @ 0x8165fb4

/* WARNING: Removing unreachable block (ram,0x08165fd7) */
/* AttendanceMission::~AttendanceMission() */

void __thiscall AttendanceMission::~AttendanceMission(AttendanceMission *this)

{
  *(undefined ***)this = &PTR__AttendanceMission_08b7f060;
  BaseHeroMissionCondition::~BaseHeroMissionCondition((BaseHeroMissionCondition *)this);
  return;
}

```

---

## ~AttendanceMission_08165fe4

```asm
// === 08165fe4 AttendanceMission::~AttendanceMission  [0x08165fe4-0x8166001] ===
 8165fe4:	55                   	push   %ebp
 8165fe5:	89 e5                	mov    %esp,%ebp
 8165fe7:	83 ec 18             	sub    $0x18,%esp
 8165fea:	8b 45 08             	mov    0x8(%ebp),%eax
 8165fed:	89 04 24             	mov    %eax,(%esp)
 8165ff0:	e8 bf ff ff ff       	call   8165fb4 <_ZN17AttendanceMissionD1Ev>
 8165ff5:	8b 45 08             	mov    0x8(%ebp),%eax
 8165ff8:	89 04 24             	mov    %eax,(%esp)
 8165ffb:	e8 f0 e4 5b 00       	call   87244f0 <_ZdlPv>
 8166000:	c9                   	leave
 8166001:	c3                   	ret

```

```c
// AttendanceMission::~AttendanceMission @ 0x8165fe4

/* AttendanceMission::~AttendanceMission() */

void __thiscall AttendanceMission::~AttendanceMission(AttendanceMission *this)

{
  ~AttendanceMission(this);
  operator_delete(this);
  return;
}

```


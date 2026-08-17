# game_master__CHeroMissionCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b3e5e game_master::CHeroMissionCommand::execute  [0x084b3e5e-0x84b3f0c] ===
 84b3e5e:	55                   	push   %ebp
 84b3e5f:	89 e5                	mov    %esp,%ebp
 84b3e61:	56                   	push   %esi
 84b3e62:	53                   	push   %ebx
 84b3e63:	83 ec 20             	sub    $0x20,%esp
 84b3e66:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e69:	89 04 24             	mov    %eax,(%esp)
 84b3e6c:	e8 49 01 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b3e71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3e74:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e77:	83 c0 08             	add    $0x8,%eax
 84b3e7a:	c7 44 24 04 e6 04 c8 	movl   $0x8c804e6,0x4(%esp)
 84b3e81:	08 
 84b3e82:	89 04 24             	mov    %eax,(%esp)
 84b3e85:	e8 17 cb bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3e8a:	84 c0                	test   %al,%al
 84b3e8c:	74 2e                	je     84b3ebc <_ZN11game_master19CHeroMissionCommand7executeEv+0x5e>
 84b3e8e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e91:	8b 40 10             	mov    0x10(%eax),%eax
 84b3e94:	89 c6                	mov    %eax,%esi
 84b3e96:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e99:	8b 40 0c             	mov    0xc(%eax),%eax
 84b3e9c:	89 c3                	mov    %eax,%ebx
 84b3e9e:	e8 2b 8b c6 ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 84b3ea3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84b3ea7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84b3eab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3eae:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3eb2:	89 04 24             	mov    %eax,(%esp)
 84b3eb5:	e8 04 34 cb ff       	call   81672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 84b3eba:	eb 36                	jmp    84b3ef2 <_ZN11game_master19CHeroMissionCommand7executeEv+0x94>
 84b3ebc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3ebf:	83 c0 08             	add    $0x8,%eax
 84b3ec2:	c7 44 24 04 ea 04 c8 	movl   $0x8c804ea,0x4(%esp)
 84b3ec9:	08 
 84b3eca:	89 04 24             	mov    %eax,(%esp)
 84b3ecd:	e8 cf ca bc ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 84b3ed2:	84 c0                	test   %al,%al
 84b3ed4:	74 1c                	je     84b3ef2 <_ZN11game_master19CHeroMissionCommand7executeEv+0x94>
 84b3ed6:	e8 f3 8a c6 ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 84b3edb:	c7 44 24 08 20 fa c7 	movl   $0x8c7fa20,0x8(%esp)
 84b3ee2:	08 
 84b3ee3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3ee6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3eea:	89 04 24             	mov    %eax,(%esp)
 84b3eed:	e8 60 28 cb ff       	call   8166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>
 84b3ef2:	e8 d7 8a c6 ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 84b3ef7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84b3efa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b3efe:	89 04 24             	mov    %eax,(%esp)
 84b3f01:	e8 08 38 cb ff       	call   816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>
 84b3f06:	83 c4 20             	add    $0x20,%esp
 84b3f09:	5b                   	pop    %ebx
 84b3f0a:	5e                   	pop    %esi
 84b3f0b:	5d                   	pop    %ebp
 84b3f0c:	c3                   	ret

```

```c
// game_master::CHeroMissionCommand::execute @ 0x84b3e5e

/* game_master::CHeroMissionCommand::execute() */

void __thiscall game_master::CHeroMissionCommand::execute(CHeroMissionCommand *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  CUser *pCVar4;
  HeroMissionEvent *pHVar5;
  
  pCVar4 = (CUser *)CCommand::GetUser((CCommand *)this);
  bVar3 = std::operator==((string *)(this + 8),"set");
  if (bVar3) {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::processMission(pHVar5,pCVar4,uVar2,uVar1);
  }
  else {
    bVar3 = std::operator==((string *)(this + 8),"reset");
    if (bVar3) {
      pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::setEventData(pHVar5,pCVar4,"");
    }
  }
  pHVar5 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
  HeroMissionEvent::sendMissionData(pHVar5,pCVar4);
  return;
}

```

---

## parse

```asm
// === 084b3db2 game_master::CHeroMissionCommand::parse  [0x084b3db2-0x84b3e5d] ===
 84b3db2:	55                   	push   %ebp
 84b3db3:	89 e5                	mov    %esp,%ebp
 84b3db5:	83 ec 18             	sub    $0x18,%esp
 84b3db8:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3dbb:	8b 40 04             	mov    0x4(%eax),%eax
 84b3dbe:	85 c0                	test   %eax,%eax
 84b3dc0:	0f 84 95 00 00 00    	je     84b3e5b <_ZN11game_master19CHeroMissionCommand5parseEv+0xa9>
 84b3dc6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3dc9:	8b 40 04             	mov    0x4(%eax),%eax
 84b3dcc:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3dd1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84b3dd8:	00 
 84b3dd9:	89 04 24             	mov    %eax,(%esp)
 84b3ddc:	e8 ed 3c d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3de1:	8b 55 08             	mov    0x8(%ebp),%edx
 84b3de4:	83 c2 08             	add    $0x8,%edx
 84b3de7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b3deb:	89 14 24             	mov    %edx,(%esp)
 84b3dee:	e8 0d 3f 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84b3df3:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3df6:	8b 40 04             	mov    0x4(%eax),%eax
 84b3df9:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3dfe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84b3e05:	00 
 84b3e06:	89 04 24             	mov    %eax,(%esp)
 84b3e09:	e8 c0 3c d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3e0e:	89 04 24             	mov    %eax,(%esp)
 84b3e11:	e8 da 26 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b3e16:	89 04 24             	mov    %eax,(%esp)
 84b3e19:	e8 dc 52 c5 ff       	call   81090fa <_Z14StringToNumberPKc>
 84b3e1e:	89 c2                	mov    %eax,%edx
 84b3e20:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e23:	89 50 0c             	mov    %edx,0xc(%eax)
 84b3e26:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e29:	8b 40 04             	mov    0x4(%eax),%eax
 84b3e2c:	05 1c 01 00 00       	add    $0x11c,%eax
 84b3e31:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84b3e38:	00 
 84b3e39:	89 04 24             	mov    %eax,(%esp)
 84b3e3c:	e8 8d 3c d8 ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 84b3e41:	89 04 24             	mov    %eax,(%esp)
 84b3e44:	e8 a7 26 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b3e49:	89 04 24             	mov    %eax,(%esp)
 84b3e4c:	e8 a9 52 c5 ff       	call   81090fa <_Z14StringToNumberPKc>
 84b3e51:	89 c2                	mov    %eax,%edx
 84b3e53:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3e56:	89 50 10             	mov    %edx,0x10(%eax)
 84b3e59:	eb 01                	jmp    84b3e5c <_ZN11game_master19CHeroMissionCommand5parseEv+0xaa>
 84b3e5b:	90                   	nop
 84b3e5c:	c9                   	leave
 84b3e5d:	c3                   	ret

```

```c
// game_master::CHeroMissionCommand::parse @ 0x84b3db2

/* game_master::CHeroMissionCommand::parse() */

void __thiscall game_master::CHeroMissionCommand::parse(CHeroMissionCommand *this)

{
  string *psVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 4) != 0) {
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),1);
    std::string::operator=((string *)(this + 8),psVar1);
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),2);
    pcVar2 = (char *)std::string::c_str(psVar1);
    uVar3 = StringToNumber(pcVar2);
    *(undefined4 *)(this + 0xc) = uVar3;
    psVar1 = (string *)
             std::vector<std::string,std::allocator<std::string>>::operator[]
                       ((vector<std::string,std::allocator<std::string>> *)
                        (*(int *)(this + 4) + 0x11c),3);
    pcVar2 = (char *)std::string::c_str(psVar1);
    uVar3 = StringToNumber(pcVar2);
    *(undefined4 *)(this + 0x10) = uVar3;
  }
  return;
}

```


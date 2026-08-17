# Dispatcher_PartyTeleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dc19a Dispatcher_PartyTeleport::check_error  [0x081dc19a-0x81dc425] ===
 81dc19a:	55                   	push   %ebp
 81dc19b:	89 e5                	mov    %esp,%ebp
 81dc19d:	57                   	push   %edi
 81dc19e:	56                   	push   %esi
 81dc19f:	53                   	push   %ebx
 81dc1a0:	83 ec 7c             	sub    $0x7c,%esp
 81dc1a3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dc1a7:	75 0a                	jne    81dc1b3 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x19>
 81dc1a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dc1ae:	e9 6a 02 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc1b3:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc1b6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81dc1b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc1bc:	89 04 24             	mov    %eax,(%esp)
 81dc1bf:	e8 c8 e1 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dc1c4:	83 f8 03             	cmp    $0x3,%eax
 81dc1c7:	0f 95 c0             	setne  %al
 81dc1ca:	84 c0                	test   %al,%al
 81dc1cc:	74 0a                	je     81dc1d8 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x3e>
 81dc1ce:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc1d3:	e9 45 02 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc1d8:	e8 ca e1 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc1dd:	89 04 24             	mov    %eax,(%esp)
 81dc1e0:	e8 03 63 f6 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 81dc1e5:	84 c0                	test   %al,%al
 81dc1e7:	75 11                	jne    81dc1fa <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x60>
 81dc1e9:	e8 b9 e1 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc1ee:	89 04 24             	mov    %eax,(%esp)
 81dc1f1:	e8 28 82 05 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 81dc1f6:	84 c0                	test   %al,%al
 81dc1f8:	74 07                	je     81dc201 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x67>
 81dc1fa:	b8 01 00 00 00       	mov    $0x1,%eax
 81dc1ff:	eb 05                	jmp    81dc206 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x6c>
 81dc201:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc206:	84 c0                	test   %al,%al
 81dc208:	74 0a                	je     81dc214 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x7a>
 81dc20a:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc20f:	e9 09 02 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc214:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc217:	89 04 24             	mov    %eax,(%esp)
 81dc21a:	e8 2d 8f 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc21f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81dc222:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 81dc226:	75 0a                	jne    81dc232 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x98>
 81dc228:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc22d:	e9 eb 01 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc232:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dc235:	89 04 24             	mov    %eax,(%esp)
 81dc238:	e8 43 95 f6 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 81dc23d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81dc240:	0f 95 c0             	setne  %al
 81dc243:	84 c0                	test   %al,%al
 81dc245:	74 0a                	je     81dc251 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0xb7>
 81dc247:	b8 17 00 00 00       	mov    $0x17,%eax
 81dc24c:	e9 cc 01 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc251:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc254:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc258:	0f b6 d8             	movzbl %al,%ebx
 81dc25b:	e8 47 e1 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc260:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dc264:	89 04 24             	mov    %eax,(%esp)
 81dc267:	e8 18 0e 4f 00       	call   86cd084 <_ZN9GameWorld14getUserVillageEi>
 81dc26c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81dc26f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81dc273:	75 0a                	jne    81dc27f <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0xe5>
 81dc275:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc27a:	e9 9e 01 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc27f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc282:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81dc286:	0f b6 d8             	movzbl %al,%ebx
 81dc289:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81dc28c:	89 04 24             	mov    %eax,(%esp)
 81dc28f:	e8 c4 78 4e 00       	call   86c3b58 <_ZN7Village13get_gate_areaEv>
 81dc294:	39 c3                	cmp    %eax,%ebx
 81dc296:	0f 94 c0             	sete   %al
 81dc299:	84 c0                	test   %al,%al
 81dc29b:	74 0a                	je     81dc2a7 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x10d>
 81dc29d:	b8 13 00 00 00       	mov    $0x13,%eax
 81dc2a2:	e9 76 01 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc2a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc2aa:	89 04 24             	mov    %eax,(%esp)
 81dc2ad:	e8 ea 95 f6 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81dc2b2:	83 f0 01             	xor    $0x1,%eax
 81dc2b5:	84 c0                	test   %al,%al
 81dc2b7:	74 32                	je     81dc2eb <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x151>
 81dc2b9:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 81dc2c0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81dc2c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dc2c7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc2ce:	00 
 81dc2cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc2d2:	89 04 24             	mov    %eax,(%esp)
 81dc2d5:	e8 1e 1d 4b 00       	call   868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>
 81dc2da:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81dc2dd:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81dc2e1:	7e 08                	jle    81dc2eb <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x151>
 81dc2e3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc2e6:	e9 32 01 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc2eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc2f2:	00 
 81dc2f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc2f6:	89 04 24             	mov    %eax,(%esp)
 81dc2f9:	e8 58 1b 4b 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 81dc2fe:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81dc301:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc304:	89 04 24             	mov    %eax,(%esp)
 81dc307:	e8 90 95 f6 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 81dc30c:	83 f0 01             	xor    $0x1,%eax
 81dc30f:	84 c0                	test   %al,%al
 81dc311:	74 18                	je     81dc32b <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x191>
 81dc313:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81dc31a:	e8 7f f9 ee ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81dc31f:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81dc322:	7d 07                	jge    81dc32b <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x191>
 81dc324:	b8 01 00 00 00       	mov    $0x1,%eax
 81dc329:	eb 05                	jmp    81dc330 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x196>
 81dc32b:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc330:	84 c0                	test   %al,%al
 81dc332:	74 0a                	je     81dc33e <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x1a4>
 81dc334:	b8 16 00 00 00       	mov    $0x16,%eax
 81dc339:	e9 df 00 00 00       	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc33e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 81dc345:	e9 bf 00 00 00       	jmp    81dc409 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x26f>
 81dc34a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81dc34d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc351:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dc354:	89 04 24             	mov    %eax,(%esp)
 81dc357:	e8 0c 95 f6 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 81dc35c:	84 c0                	test   %al,%al
 81dc35e:	0f 84 a1 00 00 00    	je     81dc405 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x26b>
 81dc364:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81dc367:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc36b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81dc36e:	89 04 24             	mov    %eax,(%esp)
 81dc371:	e8 ee 93 f6 ff       	call   8145764 <_ZN6CParty8get_userEi>
 81dc376:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81dc379:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81dc37d:	0f 84 82 00 00 00    	je     81dc405 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x26b>
 81dc383:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc386:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81dc38a:	0f b6 c0             	movzbl %al,%eax
 81dc38d:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81dc390:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc393:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81dc397:	98                   	cwtl
 81dc398:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81dc39b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc39e:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81dc3a2:	0f bf f8             	movswl %ax,%edi
 81dc3a5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc3a8:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81dc3ac:	0f b6 f0             	movzbl %al,%esi
 81dc3af:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81dc3b2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc3b6:	0f b6 d8             	movzbl %al,%ebx
 81dc3b9:	e8 e9 df ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dc3be:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81dc3c5:	00 
 81dc3c6:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 81dc3cd:	00 
 81dc3ce:	8b 55 b0             	mov    -0x50(%ebp),%edx
 81dc3d1:	89 54 24 18          	mov    %edx,0x18(%esp)
 81dc3d5:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 81dc3d8:	89 54 24 14          	mov    %edx,0x14(%esp)
 81dc3dc:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81dc3e0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81dc3e4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dc3e8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81dc3eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dc3ef:	89 04 24             	mov    %eax,(%esp)
 81dc3f2:	e8 0b 4c 4f 00       	call   86d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>
 81dc3f7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dc3fa:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81dc3fe:	7e 05                	jle    81dc405 <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x26b>
 81dc400:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81dc403:	eb 18                	jmp    81dc41d <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x283>
 81dc405:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 81dc409:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 81dc40d:	0f 9e c0             	setle  %al
 81dc410:	84 c0                	test   %al,%al
 81dc412:	0f 85 32 ff ff ff    	jne    81dc34a <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE+0x1b0>
 81dc418:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc41d:	83 c4 7c             	add    $0x7c,%esp
 81dc420:	5b                   	pop    %ebx
 81dc421:	5e                   	pop    %esi
 81dc422:	5f                   	pop    %edi
 81dc423:	5d                   	pop    %ebp
 81dc424:	c3                   	ret
 81dc425:	90                   	nop

```

```c
// Dispatcher_PartyTeleport::check_error @ 0x81dc19a

/* Dispatcher_PartyTeleport::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_PartyTeleport::check_error
          (Dispatcher_PartyTeleport *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  short sVar4;
  short sVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  GameWorld *pGVar9;
  CUser *pCVar10;
  uint uVar11;
  int local_40;
  MSG_BASE *local_3c;
  CParty *local_38;
  Village *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (param_1 == (CUser *)0x0) {
    return -1;
  }
  local_3c = param_2;
  iVar8 = CUser::get_state(param_1);
  if (iVar8 != 3) {
    return 0x13;
  }
  pGVar9 = (GameWorld *)G_GameWorld();
  cVar7 = GameWorld::IsPVPChannel(pGVar9);
  if (cVar7 == '\0') {
    pGVar9 = (GameWorld *)G_GameWorld();
    cVar7 = GameWorld::IsPvPSkilTreeChannel(pGVar9);
    if (cVar7 == '\0') {
      bVar6 = false;
      goto LAB_081dc206;
    }
  }
  bVar6 = true;
LAB_081dc206:
  if (bVar6) {
    iVar8 = 0x13;
  }
  else {
    local_38 = (CParty *)CUser::GetParty(param_1);
    if (local_38 == (CParty *)0x0) {
      iVar8 = 0x13;
    }
    else {
      pCVar10 = (CUser *)CParty::getManager(local_38);
      if (pCVar10 == param_1) {
        MVar1 = local_3c[0xd];
        pGVar9 = (GameWorld *)G_GameWorld();
        local_34 = (Village *)GameWorld::getUserVillage(pGVar9,(uint)(byte)MVar1);
        if (local_34 == (Village *)0x0) {
          iVar8 = 0x13;
        }
        else {
          MVar1 = local_3c[0xe];
          uVar11 = Village::get_gate_area(local_34);
          if ((byte)MVar1 == uVar11) {
            iVar8 = 0x13;
          }
          else {
            cVar7 = CUser::isGMUser(param_1);
            if (cVar7 != '\x01') {
              local_40 = 0;
              local_2c = CUser::is_equip_aura_avatar(param_1,'\0',&local_40);
              if (0 < local_2c) {
                return local_2c;
              }
            }
            local_30 = CUser::get_aura_avatar_option_value(param_1,0);
            cVar7 = CUser::isGMUser(param_1);
            if ((cVar7 == '\x01') ||
               (iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
               local_30 <= iVar8)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              iVar8 = 0x16;
            }
            else {
              for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                cVar7 = CParty::checkValidUser(local_38,local_28);
                if ((cVar7 != '\0') &&
                   (local_24 = CParty::get_user(local_38,local_28), local_24 != 0)) {
                  MVar1 = local_3c[0x13];
                  sVar4 = *(short *)(local_3c + 0x11);
                  sVar5 = *(short *)(local_3c + 0xf);
                  MVar2 = local_3c[0xe];
                  MVar3 = local_3c[0xd];
                  pCVar10 = (CUser *)G_GameWorld();
                  local_20 = GameWorld::check_move_area
                                       (pCVar10,local_24,(uint)(byte)MVar3,(uint)(byte)MVar2,
                                        (int)sVar5,(int)sVar4,(bool)MVar1,1);
                  if (0 < local_20) {
                    return local_20;
                  }
                }
              }
              iVar8 = 0;
            }
          }
        }
      }
      else {
        iVar8 = 0x17;
      }
    }
  }
  return iVar8;
}

```

---

## process

```asm
// === 081dbfd6 Dispatcher_PartyTeleport::process  [0x081dbfd6-0x81dc199] ===
 81dbfd6:	55                   	push   %ebp
 81dbfd7:	89 e5                	mov    %esp,%ebp
 81dbfd9:	57                   	push   %edi
 81dbfda:	56                   	push   %esi
 81dbfdb:	53                   	push   %ebx
 81dbfdc:	83 ec 5c             	sub    $0x5c,%esp
 81dbfdf:	8b 45 14             	mov    0x14(%ebp),%eax
 81dbfe2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81dbfe5:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbfe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dbfec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbfef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbff3:	8b 45 08             	mov    0x8(%ebp),%eax
 81dbff6:	89 04 24             	mov    %eax,(%esp)
 81dbff9:	e8 9c 01 00 00       	call   81dc19a <_ZN24Dispatcher_PartyTeleport11check_errorEP5CUserR8MSG_BASE>
 81dbffe:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81dc001:	89 42 04             	mov    %eax,0x4(%edx)
 81dc004:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc007:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81dc00a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc00d:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81dc011:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc014:	88 50 08             	mov    %dl,0x8(%eax)
 81dc017:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc01e:	00 
 81dc01f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc022:	89 04 24             	mov    %eax,(%esp)
 81dc025:	e8 2c 1e 4b 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 81dc02a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81dc02d:	89 42 0c             	mov    %eax,0xc(%edx)
 81dc030:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81dc037:	e8 62 fc ee ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81dc03c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81dc03f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc042:	8b 40 0c             	mov    0xc(%eax),%eax
 81dc045:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 81dc048:	7e 13                	jle    81dc05d <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81dc04a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc04d:	8b 40 0c             	mov    0xc(%eax),%eax
 81dc050:	89 c2                	mov    %eax,%edx
 81dc052:	2b 55 dc             	sub    -0x24(%ebp),%edx
 81dc055:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc058:	89 50 0c             	mov    %edx,0xc(%eax)
 81dc05b:	eb 0a                	jmp    81dc067 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x91>
 81dc05d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc060:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 81dc067:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc06a:	8b 40 04             	mov    0x4(%eax),%eax
 81dc06d:	85 c0                	test   %eax,%eax
 81dc06f:	7e 0a                	jle    81dc07b <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xa5>
 81dc071:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc076:	e9 17 01 00 00       	jmp    81dc192 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x1bc>
 81dc07b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc07e:	8b 40 04             	mov    0x4(%eax),%eax
 81dc081:	85 c0                	test   %eax,%eax
 81dc083:	79 2b                	jns    81dc0b0 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0xda>
 81dc085:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc088:	8b 40 04             	mov    0x4(%eax),%eax
 81dc08b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dc092:	00 
 81dc093:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dc097:	c7 44 24 04 c0 20 bd 	movl   $0x8bd20c0,0x4(%esp)
 81dc09e:	08 
 81dc09f:	c7 04 24 3c 4b 00 00 	movl   $0x4b3c,(%esp)
 81dc0a6:	e8 2c 48 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dc0ab:	e9 e2 00 00 00       	jmp    81dc192 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x1bc>
 81dc0b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc0b3:	89 04 24             	mov    %eax,(%esp)
 81dc0b6:	e8 91 90 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc0bb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81dc0be:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81dc0c2:	75 14                	jne    81dc0d8 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x102>
 81dc0c4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dc0c7:	c7 40 04 13 00 00 00 	movl   $0x13,0x4(%eax)
 81dc0ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc0d3:	e9 ba 00 00 00       	jmp    81dc192 <_ZN24Dispatcher_PartyTeleport7processEP5CUserR8MSG_BASER9ParamBase+0x1bc>
 81dc0d8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc0db:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81dc0df:	0f b6 c0             	movzbl %al,%eax
 81dc0e2:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81dc0e5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc0e8:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 81dc0ec:	98                   	cwtl
 81dc0ed:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81dc0f0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc0f3:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81dc0f7:	0f bf f8             	movswl %ax,%edi
 81dc0fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc0fd:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81dc101:	0f b6 f0             	movzbl %al,%esi
 81dc104:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dc107:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81dc10b:	0f b6 d8             	movzbl %al,%ebx
 81dc10e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dc111:	89 04 24             	mov    %eax,(%esp)
 81dc114:	e8 f5 17 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc119:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 81dc120:	00 
 81dc121:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81dc124:	89 54 24 14          	mov    %edx,0x14(%esp)
 81dc128:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81dc12b:	89 54 24 10          	mov    %edx,0x10(%esp)
 81dc12f:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81dc133:	89 74 24 08          	mov    %esi,0x8(%esp)
 81dc137:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dc13b:	89 04 24             	mov    %eax,(%esp)
 81dc13e:	e8 19 f7 3d 00       	call   85bb85c <_ZN14CPartyTelePort17set_teleport_dataEhhsshc>
 81dc143:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc146:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc14a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dc14d:	89 04 24             	mov    %eax,(%esp)
 81dc150:	e8 27 eb 3b 00       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 81dc155:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dc158:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dc15b:	89 04 24             	mov    %eax,(%esp)
 81dc15e:	e8 ab 17 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc163:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81dc16a:	00 
 81dc16b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81dc16e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81dc172:	89 04 24             	mov    %eax,(%esp)
 81dc175:	e8 a2 f7 3d 00       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 81dc17a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dc17d:	89 04 24             	mov    %eax,(%esp)
 81dc180:	e8 89 17 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc185:	89 04 24             	mov    %eax,(%esp)
 81dc188:	e8 7b f9 3d 00       	call   85bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>
 81dc18d:	b8 00 00 00 00       	mov    $0x0,%eax
 81dc192:	83 c4 5c             	add    $0x5c,%esp
 81dc195:	5b                   	pop    %ebx
 81dc196:	5e                   	pop    %esi
 81dc197:	5f                   	pop    %edi
 81dc198:	5d                   	pop    %ebp
 81dc199:	c3                   	ret

```

```c
// Dispatcher_PartyTeleport::process @ 0x81dbfd6

/* Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PartyTeleport::process
          (Dispatcher_PartyTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  MSG_BASE MVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  CParty *this_00;
  CPartyTelePort *pCVar8;
  
  uVar6 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar6;
  *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
  uVar6 = CUser::get_aura_avatar_option_value(param_1,0);
  *(undefined4 *)(param_3 + 0xc) = uVar6;
  iVar7 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (iVar7 < *(int *)(param_3 + 0xc)) {
    *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) - iVar7;
  }
  else {
    *(undefined4 *)(param_3 + 0xc) = 0;
  }
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar6 = LineFunc(0x4b3c,
                       "virtual int Dispatcher_PartyTeleport::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (CParty *)CUser::GetParty(param_1);
      if (this_00 == (CParty *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
        uVar6 = 0;
      }
      else {
        MVar1 = param_2[0x13];
        sVar4 = *(short *)(param_2 + 0x11);
        sVar5 = *(short *)(param_2 + 0xf);
        MVar2 = param_2[0xe];
        MVar3 = param_2[0xd];
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::set_teleport_data
                  (pCVar8,(uchar)MVar3,(uchar)MVar2,sVar5,sVar4,(uchar)MVar1,'\0');
        iVar7 = CParty::GetMemberSlotNo(this_00,param_1);
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::set_teleport_member_state(pCVar8,iVar7,'\x01');
        pCVar8 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::check_cur_teleport_state(pCVar8);
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## read

```asm
// === 081dbe70 Dispatcher_PartyTeleport::read  [0x081dbe70-0x81dbfd5] ===
 81dbe70:	55                   	push   %ebp
 81dbe71:	89 e5                	mov    %esp,%ebp
 81dbe73:	83 ec 28             	sub    $0x28,%esp
 81dbe76:	8b 45 10             	mov    0x10(%ebp),%eax
 81dbe79:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dbe7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbe7f:	83 c0 0d             	add    $0xd,%eax
 81dbe82:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbe86:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbe89:	89 04 24             	mov    %eax,(%esp)
 81dbe8c:	e8 df 10 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dbe91:	83 f0 01             	xor    $0x1,%eax
 81dbe94:	84 c0                	test   %al,%al
 81dbe96:	74 29                	je     81dbec1 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x51>
 81dbe98:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbe9f:	00 
 81dbea0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbea7:	00 
 81dbea8:	c7 44 24 04 20 21 bd 	movl   $0x8bd2120,0x4(%esp)
 81dbeaf:	08 
 81dbeb0:	c7 04 24 1f 4b 00 00 	movl   $0x4b1f,(%esp)
 81dbeb7:	e8 1b 4a 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dbebc:	e9 13 01 00 00       	jmp    81dbfd4 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x164>
 81dbec1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbec4:	83 c0 0e             	add    $0xe,%eax
 81dbec7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbecb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbece:	89 04 24             	mov    %eax,(%esp)
 81dbed1:	e8 9a 10 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dbed6:	83 f0 01             	xor    $0x1,%eax
 81dbed9:	84 c0                	test   %al,%al
 81dbedb:	74 29                	je     81dbf06 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x96>
 81dbedd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbee4:	00 
 81dbee5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbeec:	00 
 81dbeed:	c7 44 24 04 20 21 bd 	movl   $0x8bd2120,0x4(%esp)
 81dbef4:	08 
 81dbef5:	c7 04 24 20 4b 00 00 	movl   $0x4b20,(%esp)
 81dbefc:	e8 d6 49 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dbf01:	e9 ce 00 00 00       	jmp    81dbfd4 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x164>
 81dbf06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbf09:	83 c0 0f             	add    $0xf,%eax
 81dbf0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbf10:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbf13:	89 04 24             	mov    %eax,(%esp)
 81dbf16:	e8 a5 10 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81dbf1b:	83 f0 01             	xor    $0x1,%eax
 81dbf1e:	84 c0                	test   %al,%al
 81dbf20:	74 29                	je     81dbf4b <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0xdb>
 81dbf22:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbf29:	00 
 81dbf2a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbf31:	00 
 81dbf32:	c7 44 24 04 20 21 bd 	movl   $0x8bd2120,0x4(%esp)
 81dbf39:	08 
 81dbf3a:	c7 04 24 21 4b 00 00 	movl   $0x4b21,(%esp)
 81dbf41:	e8 91 49 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dbf46:	e9 89 00 00 00       	jmp    81dbfd4 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x164>
 81dbf4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbf4e:	83 c0 11             	add    $0x11,%eax
 81dbf51:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbf55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbf58:	89 04 24             	mov    %eax,(%esp)
 81dbf5b:	e8 60 10 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81dbf60:	83 f0 01             	xor    $0x1,%eax
 81dbf63:	84 c0                	test   %al,%al
 81dbf65:	74 26                	je     81dbf8d <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x11d>
 81dbf67:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbf6e:	00 
 81dbf6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbf76:	00 
 81dbf77:	c7 44 24 04 20 21 bd 	movl   $0x8bd2120,0x4(%esp)
 81dbf7e:	08 
 81dbf7f:	c7 04 24 22 4b 00 00 	movl   $0x4b22,(%esp)
 81dbf86:	e8 4c 49 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dbf8b:	eb 47                	jmp    81dbfd4 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x164>
 81dbf8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dbf90:	83 c0 13             	add    $0x13,%eax
 81dbf93:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dbf97:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dbf9a:	89 04 24             	mov    %eax,(%esp)
 81dbf9d:	e8 ce 0f 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81dbfa2:	83 f0 01             	xor    $0x1,%eax
 81dbfa5:	84 c0                	test   %al,%al
 81dbfa7:	74 26                	je     81dbfcf <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x15f>
 81dbfa9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dbfb0:	00 
 81dbfb1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81dbfb8:	00 
 81dbfb9:	c7 44 24 04 20 21 bd 	movl   $0x8bd2120,0x4(%esp)
 81dbfc0:	08 
 81dbfc1:	c7 04 24 23 4b 00 00 	movl   $0x4b23,(%esp)
 81dbfc8:	e8 0a 49 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dbfcd:	eb 05                	jmp    81dbfd4 <_ZN24Dispatcher_PartyTeleport4readER9PacketBufR8MSG_BASE+0x164>
 81dbfcf:	b8 00 00 00 00       	mov    $0x0,%eax
 81dbfd4:	c9                   	leave
 81dbfd5:	c3                   	ret

```

```c
// Dispatcher_PartyTeleport::read @ 0x81dbe70

/* Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PartyTeleport::read(Dispatcher_PartyTeleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x4b23,
                             "virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0
                            );
          }
        }
        else {
          uVar2 = LineFunc(0x4b22,
                           "virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x4b21,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4b20,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x4b1f,"virtual int Dispatcher_PartyTeleport::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dc426 Dispatcher_PartyTeleport::send  [0x081dc426-0x81dc597] ===
 81dc426:	55                   	push   %ebp
 81dc427:	89 e5                	mov    %esp,%ebp
 81dc429:	56                   	push   %esi
 81dc42a:	53                   	push   %ebx
 81dc42b:	83 ec 30             	sub    $0x30,%esp
 81dc42e:	8b 45 10             	mov    0x10(%ebp),%eax
 81dc431:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dc434:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc437:	89 04 24             	mov    %eax,(%esp)
 81dc43a:	e8 0d 19 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dc43f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc442:	89 04 24             	mov    %eax,(%esp)
 81dc445:	e8 9c f4 ee ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81dc44a:	c7 44 24 08 b3 01 00 	movl   $0x1b3,0x8(%esp)
 81dc451:	00 
 81dc452:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dc459:	00 
 81dc45a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc45d:	89 04 24             	mov    %eax,(%esp)
 81dc460:	e8 97 f4 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dc465:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc468:	8b 40 04             	mov    0x4(%eax),%eax
 81dc46b:	85 c0                	test   %eax,%eax
 81dc46d:	75 15                	jne    81dc484 <_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase+0x5e>
 81dc46f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dc476:	00 
 81dc477:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc47a:	89 04 24             	mov    %eax,(%esp)
 81dc47d:	e8 9e f4 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dc482:	eb 59                	jmp    81dc4dd <_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase+0xb7>
 81dc484:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc48b:	00 
 81dc48c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc48f:	89 04 24             	mov    %eax,(%esp)
 81dc492:	e8 89 f4 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dc497:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc49a:	8b 40 04             	mov    0x4(%eax),%eax
 81dc49d:	0f b6 c0             	movzbl %al,%eax
 81dc4a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc4a4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc4a7:	89 04 24             	mov    %eax,(%esp)
 81dc4aa:	e8 71 f4 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dc4af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc4b2:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81dc4b6:	0f b6 c0             	movzbl %al,%eax
 81dc4b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc4bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc4c0:	89 04 24             	mov    %eax,(%esp)
 81dc4c3:	e8 58 f4 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dc4c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc4cb:	8b 40 0c             	mov    0xc(%eax),%eax
 81dc4ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc4d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc4d5:	89 04 24             	mov    %eax,(%esp)
 81dc4d8:	e8 5f f4 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81dc4dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dc4e4:	00 
 81dc4e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc4e8:	89 04 24             	mov    %eax,(%esp)
 81dc4eb:	e8 68 f4 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81dc4f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc4f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dc4f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc4fa:	89 04 24             	mov    %eax,(%esp)
 81dc4fd:	e8 b8 c0 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81dc502:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dc505:	8b 40 04             	mov    0x4(%eax),%eax
 81dc508:	85 c0                	test   %eax,%eax
 81dc50a:	75 7a                	jne    81dc586 <_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase+0x160>
 81dc50c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dc50f:	89 04 24             	mov    %eax,(%esp)
 81dc512:	e8 35 8c 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81dc517:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dc51a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81dc51e:	74 66                	je     81dc586 <_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase+0x160>
 81dc520:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc523:	89 04 24             	mov    %eax,(%esp)
 81dc526:	e8 e3 13 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc52b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81dc532:	00 
 81dc533:	89 04 24             	mov    %eax,(%esp)
 81dc536:	e8 75 fd 3d 00       	call   85bc2b0 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi>
 81dc53b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc53e:	89 04 24             	mov    %eax,(%esp)
 81dc541:	e8 c8 13 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc546:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81dc54d:	00 
 81dc54e:	89 04 24             	mov    %eax,(%esp)
 81dc551:	e8 18 f4 3d 00       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 81dc556:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dc559:	89 04 24             	mov    %eax,(%esp)
 81dc55c:	e8 ad 13 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81dc561:	89 04 24             	mov    %eax,(%esp)
 81dc564:	e8 4f f6 3d 00       	call   85bbbb8 <_ZN14CPartyTelePort16process_teleportEv>
 81dc569:	eb 1b                	jmp    81dc586 <_ZN24Dispatcher_PartyTeleport4sendEP5CUserR9ParamBase+0x160>
 81dc56b:	89 d3                	mov    %edx,%ebx
 81dc56d:	89 c6                	mov    %eax,%esi
 81dc56f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc572:	89 04 24             	mov    %eax,(%esp)
 81dc575:	e8 06 19 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dc57a:	89 f0                	mov    %esi,%eax
 81dc57c:	89 da                	mov    %ebx,%edx
 81dc57e:	89 04 24             	mov    %eax,(%esp)
 81dc581:	e8 ca 71 90 00       	call   8ae3750 <_Unwind_Resume>
 81dc586:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81dc589:	89 04 24             	mov    %eax,(%esp)
 81dc58c:	e8 ef 18 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dc591:	83 c4 30             	add    $0x30,%esp
 81dc594:	5b                   	pop    %ebx
 81dc595:	5e                   	pop    %esi
 81dc596:	5d                   	pop    %ebp
 81dc597:	c3                   	ret

```

```c
// Dispatcher_PartyTeleport::send @ 0x81dc426

/* Dispatcher_PartyTeleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PartyTeleport::send(Dispatcher_PartyTeleport *this,CUser *param_1,ParamBase *param_2)

{
  CPartyTelePort *pCVar1;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081dc445 to 081dc568 has its CatchHandler @ 081dc56b */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1b3);
  if (*(int *)(local_14 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(uint *)(local_14 + 4) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_14[8]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xc));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  if (*(int *)(local_14 + 4) == 0) {
    local_10 = (CParty *)CUser::GetParty(param_1);
    if (local_10 != (CParty *)0x0) {
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::send_teleport_effect_at_different_place(pCVar1,3);
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::send_teleport_status(pCVar1,'\0');
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      CPartyTelePort::process_teleport(pCVar1);
    }
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}

```


# User_Teleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## User_Teleport

```asm
// === 08284142 User_Teleport::User_Teleport  [0x08284142-0x828415d] ===
 8284142:	55                   	push   %ebp
 8284143:	89 e5                	mov    %esp,%ebp
 8284145:	83 ec 18             	sub    $0x18,%esp
 8284148:	8b 45 08             	mov    0x8(%ebp),%eax
 828414b:	89 04 24             	mov    %eax,(%esp)
 828414e:	e8 dd fa ff ff       	call   8283c30 <_ZN8TeleportC1Ev>
 8284153:	8b 45 08             	mov    0x8(%ebp),%eax
 8284156:	c7 00 18 b2 c0 08    	movl   $0x8c0b218,(%eax)
 828415c:	c9                   	leave
 828415d:	c3                   	ret

```

```c
// User_Teleport::User_Teleport @ 0x8284142

/* User_Teleport::User_Teleport() */

void __thiscall User_Teleport::User_Teleport(User_Teleport *this)

{
  Teleport::Teleport((Teleport *)this);
  *(undefined ***)this = &PTR__User_Teleport_08c0b218;
  return;
}

```

---

## check_rule

```asm
// === 0828415e User_Teleport::check_rule  [0x0828415e-0x82842b7] ===
 828415e:	55                   	push   %ebp
 828415f:	89 e5                	mov    %esp,%ebp
 8284161:	53                   	push   %ebx
 8284162:	83 ec 24             	sub    $0x24,%esp
 8284165:	8b 45 08             	mov    0x8(%ebp),%eax
 8284168:	8b 55 0c             	mov    0xc(%ebp),%edx
 828416b:	89 54 24 04          	mov    %edx,0x4(%esp)
 828416f:	89 04 24             	mov    %eax,(%esp)
 8284172:	e8 0b fc ff ff       	call   8283d82 <_ZN8Teleport10check_ruleERK15STCheckRuleData>
 8284177:	89 45 ec             	mov    %eax,-0x14(%ebp)
 828417a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 828417e:	74 08                	je     8284188 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x2a>
 8284180:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8284183:	e9 2a 01 00 00       	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 8284188:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 828418f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8284192:	8b 00                	mov    (%eax),%eax
 8284194:	0f b7 d8             	movzwl %ax,%ebx
 8284197:	e8 0b 62 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 828419c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82841a0:	89 04 24             	mov    %eax,(%esp)
 82841a3:	e8 f4 09 44 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 82841a8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82841ab:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 82841af:	75 0a                	jne    82841bb <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x5d>
 82841b1:	b8 15 00 00 00       	mov    $0x15,%eax
 82841b6:	e9 f7 00 00 00       	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 82841bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82841be:	89 04 24             	mov    %eax,(%esp)
 82841c1:	e8 c6 61 e5 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82841c6:	83 f8 03             	cmp    $0x3,%eax
 82841c9:	0f 95 c0             	setne  %al
 82841cc:	84 c0                	test   %al,%al
 82841ce:	74 0a                	je     82841da <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x7c>
 82841d0:	b8 04 00 00 00       	mov    $0x4,%eax
 82841d5:	e9 d8 00 00 00       	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 82841da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82841dd:	89 04 24             	mov    %eax,(%esp)
 82841e0:	e8 7f 13 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82841e5:	3c 07                	cmp    $0x7,%al
 82841e7:	74 1e                	je     8284207 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xa9>
 82841e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82841ec:	89 04 24             	mov    %eax,(%esp)
 82841ef:	e8 70 13 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82841f4:	3c 08                	cmp    $0x8,%al
 82841f6:	74 0f                	je     8284207 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xa9>
 82841f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82841fb:	89 04 24             	mov    %eax,(%esp)
 82841fe:	e8 61 13 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8284203:	3c 0a                	cmp    $0xa,%al
 8284205:	75 07                	jne    828420e <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xb0>
 8284207:	b8 01 00 00 00       	mov    $0x1,%eax
 828420c:	eb 05                	jmp    8284213 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xb5>
 828420e:	b8 00 00 00 00       	mov    $0x0,%eax
 8284213:	84 c0                	test   %al,%al
 8284215:	74 0a                	je     8284221 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xc3>
 8284217:	b8 04 00 00 00       	mov    $0x4,%eax
 828421c:	e9 91 00 00 00       	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 8284221:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8284228:	00 
 8284229:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828422c:	89 04 24             	mov    %eax,(%esp)
 828422f:	e8 8a d1 3f 00       	call   86813be <_ZN5CUser8get_areaEb>
 8284234:	89 c3                	mov    %eax,%ebx
 8284236:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8284239:	89 04 24             	mov    %eax,(%esp)
 828423c:	e8 23 13 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8284241:	0f be c0             	movsbl %al,%eax
 8284244:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8284248:	89 04 24             	mov    %eax,(%esp)
 828424b:	e8 c4 1b 00 00       	call   8285e14 <_ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii>
 8284250:	84 c0                	test   %al,%al
 8284252:	74 07                	je     828425b <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0xfd>
 8284254:	b8 04 00 00 00       	mov    $0x4,%eax
 8284259:	eb 57                	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 828425b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 828425e:	89 04 24             	mov    %eax,(%esp)
 8284261:	e8 6c b4 fa ff       	call   822f6d2 <_ZN15CUserCharacInfo15GetAssaultPlaceEv>
 8284266:	85 c0                	test   %eax,%eax
 8284268:	0f 95 c0             	setne  %al
 828426b:	84 c0                	test   %al,%al
 828426d:	74 07                	je     8284276 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x118>
 828426f:	b8 9c 00 00 00       	mov    $0x9c,%eax
 8284274:	eb 3c                	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 8284276:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8284279:	89 04 24             	mov    %eax,(%esp)
 828427c:	e8 cb 0e 3d 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8284281:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8284284:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8284288:	74 23                	je     82842ad <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x14f>
 828428a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828428d:	89 04 24             	mov    %eax,(%esp)
 8284290:	e8 79 96 fa ff       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 8284295:	89 04 24             	mov    %eax,(%esp)
 8284298:	e8 51 95 fa ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 828429d:	3c ff                	cmp    $0xff,%al
 828429f:	0f 95 c0             	setne  %al
 82842a2:	84 c0                	test   %al,%al
 82842a4:	74 07                	je     82842ad <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x14f>
 82842a6:	b8 9e 00 00 00       	mov    $0x9e,%eax
 82842ab:	eb 05                	jmp    82842b2 <_ZN13User_Teleport10check_ruleERK15STCheckRuleData+0x154>
 82842ad:	b8 00 00 00 00       	mov    $0x0,%eax
 82842b2:	83 c4 24             	add    $0x24,%esp
 82842b5:	5b                   	pop    %ebx
 82842b6:	5d                   	pop    %ebp
 82842b7:	c3                   	ret

```

```c
// User_Teleport::check_rule @ 0x828415e

/* User_Teleport::check_rule(STCheckRuleData const&) */

int __thiscall User_Teleport::check_rule(User_Teleport *this,STCheckRuleData *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  CUser *this_01;
  CParty *this_02;
  CPartyTelePort *this_03;
  
  iVar4 = Teleport::check_rule((Teleport *)this,param_1);
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)param_1;
    this_00 = (GameWorld *)G_GameWorld();
    this_01 = (CUser *)GameWorld::find_from_world(this_00,(ushort)uVar1);
    if (this_01 == (CUser *)0x0) {
      iVar4 = 0x15;
    }
    else {
      iVar4 = CUser::get_state(this_01);
      if (iVar4 == 3) {
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01);
        if (((cVar3 == '\a') ||
            (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01), cVar3 == '\b'))
           || (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01), cVar3 == '\n')
           ) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          iVar4 = 4;
        }
        else {
          iVar4 = CUser::get_area(this_01,false);
          cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01);
          cVar3 = CHackLog_InvalidAreaMove::checkSeriaRoom((int)cVar3,iVar4);
          if (cVar3 == '\0') {
            iVar4 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)this_01);
            if (iVar4 == 0) {
              this_02 = (CParty *)CUser::GetParty(this_01);
              if (this_02 != (CParty *)0x0) {
                this_03 = (CPartyTelePort *)CParty::GetPartyTelePort(this_02);
                cVar3 = CPartyTelePort::get_teleport_state(this_03);
                if (cVar3 != -1) {
                  return 0x9e;
                }
              }
              iVar4 = 0;
            }
            else {
              iVar4 = 0x9c;
            }
          }
          else {
            iVar4 = 4;
          }
        }
      }
      else {
        iVar4 = 4;
      }
    }
  }
  return iVar4;
}

```

---

## set_teleport_data

```asm
// === 082842b8 User_Teleport::set_teleport_data  [0x082842b8-0x8284352] ===
 82842b8:	55                   	push   %ebp
 82842b9:	89 e5                	mov    %esp,%ebp
 82842bb:	53                   	push   %ebx
 82842bc:	83 ec 24             	sub    $0x24,%esp
 82842bf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82842c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 82842c9:	8b 00                	mov    (%eax),%eax
 82842cb:	0f b7 d8             	movzwl %ax,%ebx
 82842ce:	e8 d4 60 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 82842d3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82842d7:	89 04 24             	mov    %eax,(%esp)
 82842da:	e8 bd 08 44 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 82842df:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82842e2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82842e6:	74 64                	je     828434c <_ZN13User_Teleport17set_teleport_dataERK14STTeleportData+0x94>
 82842e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82842eb:	89 04 24             	mov    %eax,(%esp)
 82842ee:	e8 71 12 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 82842f3:	88 45 eb             	mov    %al,-0x15(%ebp)
 82842f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82842fd:	00 
 82842fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8284301:	89 04 24             	mov    %eax,(%esp)
 8284304:	e8 b5 d0 3f 00       	call   86813be <_ZN5CUser8get_areaEb>
 8284309:	88 45 ec             	mov    %al,-0x14(%ebp)
 828430c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828430f:	89 04 24             	mov    %eax,(%esp)
 8284312:	e8 15 06 eb ff       	call   813492c <_ZN5CUser8get_posXEv>
 8284317:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 828431b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828431e:	89 04 24             	mov    %eax,(%esp)
 8284321:	e8 16 06 eb ff       	call   813493c <_ZN5CUser8get_posYEv>
 8284326:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 828432a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828432d:	89 04 24             	mov    %eax,(%esp)
 8284330:	e8 17 06 eb ff       	call   813494c <_ZN5CUser13get_directionEv>
 8284335:	88 45 f2             	mov    %al,-0xe(%ebp)
 8284338:	8b 45 08             	mov    0x8(%ebp),%eax
 828433b:	8d 55 ea             	lea    -0x16(%ebp),%edx
 828433e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284342:	89 04 24             	mov    %eax,(%esp)
 8284345:	e8 4e fa ff ff       	call   8283d98 <_ZN8Teleport18set_party_teleportERK15stPartyTelePort>
 828434a:	eb 01                	jmp    828434d <_ZN13User_Teleport17set_teleport_dataERK14STTeleportData+0x95>
 828434c:	90                   	nop
 828434d:	83 c4 24             	add    $0x24,%esp
 8284350:	5b                   	pop    %ebx
 8284351:	5d                   	pop    %ebp
 8284352:	c3                   	ret

```

```c
// User_Teleport::set_teleport_data @ 0x82842b8

/* User_Teleport::set_teleport_data(STTeleportData const&) */

void __thiscall User_Teleport::set_teleport_data(User_Teleport *this,STTeleportData *param_1)

{
  undefined4 uVar1;
  GameWorld *this_00;
  stPartyTelePort local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined1 local_12;
  CUser *local_10;
  
  local_10 = (CUser *)0x0;
  uVar1 = *(undefined4 *)param_1;
  this_00 = (GameWorld *)G_GameWorld();
  local_10 = (CUser *)GameWorld::find_from_world(this_00,(ushort)uVar1);
  if (local_10 != (CUser *)0x0) {
    local_19 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_10);
    local_18 = CUser::get_area(local_10,false);
    local_16 = CUser::get_posX(local_10);
    local_14 = CUser::get_posY(local_10);
    local_12 = CUser::get_direction(local_10);
    Teleport::set_party_teleport((Teleport *)this,&local_1a);
  }
  return;
}

```


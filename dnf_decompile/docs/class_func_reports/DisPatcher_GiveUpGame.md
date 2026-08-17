# DisPatcher_GiveUpGame

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081c41e8 DisPatcher_GiveUpGame::check_error  [0x081c41e8-0x81c424b] ===
 81c41e8:	55                   	push   %ebp
 81c41e9:	89 e5                	mov    %esp,%ebp
 81c41eb:	83 ec 18             	sub    $0x18,%esp
 81c41ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c41f1:	89 04 24             	mov    %eax,(%esp)
 81c41f4:	e8 93 61 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c41f9:	83 f8 05             	cmp    $0x5,%eax
 81c41fc:	74 37                	je     81c4235 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x4d>
 81c41fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4201:	89 04 24             	mov    %eax,(%esp)
 81c4204:	e8 83 61 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4209:	83 f8 0a             	cmp    $0xa,%eax
 81c420c:	74 27                	je     81c4235 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x4d>
 81c420e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4211:	89 04 24             	mov    %eax,(%esp)
 81c4214:	e8 73 61 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4219:	83 f8 0c             	cmp    $0xc,%eax
 81c421c:	74 17                	je     81c4235 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x4d>
 81c421e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4221:	89 04 24             	mov    %eax,(%esp)
 81c4224:	e8 63 61 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4229:	83 f8 0d             	cmp    $0xd,%eax
 81c422c:	74 07                	je     81c4235 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x4d>
 81c422e:	b8 01 00 00 00       	mov    $0x1,%eax
 81c4233:	eb 05                	jmp    81c423a <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x52>
 81c4235:	b8 00 00 00 00       	mov    $0x0,%eax
 81c423a:	84 c0                	test   %al,%al
 81c423c:	74 07                	je     81c4245 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x5d>
 81c423e:	b8 13 00 00 00       	mov    $0x13,%eax
 81c4243:	eb 05                	jmp    81c424a <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE+0x62>
 81c4245:	b8 00 00 00 00       	mov    $0x0,%eax
 81c424a:	c9                   	leave
 81c424b:	c3                   	ret

```

```c
// DisPatcher_GiveUpGame::check_error @ 0x81c41e8

/* DisPatcher_GiveUpGame::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_GiveUpGame::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 5) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 10) {
      iVar2 = CUser::get_state((CUser *)param_2);
      if (iVar2 != 0xc) {
        iVar2 = CUser::get_state((CUser *)param_2);
        if (iVar2 != 0xd) {
          bVar1 = true;
          goto LAB_081c423a;
        }
      }
    }
  }
  bVar1 = false;
LAB_081c423a:
  if (bVar1) {
    uVar3 = 0x13;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081c40b4 DisPatcher_GiveUpGame::process  [0x081c40b4-0x81c41e7] ===
 81c40b4:	55                   	push   %ebp
 81c40b5:	89 e5                	mov    %esp,%ebp
 81c40b7:	83 ec 38             	sub    $0x38,%esp
 81c40ba:	8b 45 10             	mov    0x10(%ebp),%eax
 81c40bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c40c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c40c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c40c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81c40cb:	89 04 24             	mov    %eax,(%esp)
 81c40ce:	e8 15 01 00 00       	call   81c41e8 <_ZN21DisPatcher_GiveUpGame11check_errorEP5CUserR8MSG_BASE>
 81c40d3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81c40d6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c40da:	7e 0a                	jle    81c40e6 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x32>
 81c40dc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c40e1:	e9 ff 00 00 00       	jmp    81c41e5 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x131>
 81c40e6:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81c40ea:	79 30                	jns    81c411c <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x68>
 81c40ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c40ef:	89 04 24             	mov    %eax,(%esp)
 81c40f2:	e8 77 62 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c40f7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c40fb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c4102:	00 
 81c4103:	c7 44 24 04 60 5b bd 	movl   $0x8bd5b60,0x4(%esp)
 81c410a:	08 
 81c410b:	c7 04 24 f7 0f 00 00 	movl   $0xff7,(%esp)
 81c4112:	e8 c0 c7 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c4117:	e9 c9 00 00 00       	jmp    81c41e5 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x131>
 81c411c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c411f:	89 04 24             	mov    %eax,(%esp)
 81c4122:	e8 65 62 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c4127:	83 f8 0a             	cmp    $0xa,%eax
 81c412a:	0f 94 c0             	sete   %al
 81c412d:	84 c0                	test   %al,%al
 81c412f:	74 2f                	je     81c4160 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0xac>
 81c4131:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4134:	89 04 24             	mov    %eax,(%esp)
 81c4137:	e8 68 11 49 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 81c413c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c413f:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81c4143:	0f 84 99 00 00 00    	je     81c41e2 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81c4149:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c414c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c4150:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c4153:	89 04 24             	mov    %eax,(%esp)
 81c4156:	e8 67 19 2a 00       	call   8465ac2 <_ZN8WongWork11CDeathTower15handleLeaveUserEP5CUser>
 81c415b:	e9 82 00 00 00       	jmp    81c41e2 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81c4160:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4163:	89 04 24             	mov    %eax,(%esp)
 81c4166:	e8 21 62 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c416b:	83 f8 0c             	cmp    $0xc,%eax
 81c416e:	0f 94 c0             	sete   %al
 81c4171:	84 c0                	test   %al,%al
 81c4173:	74 0d                	je     81c4182 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0xce>
 81c4175:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4178:	89 04 24             	mov    %eax,(%esp)
 81c417b:	e8 58 29 f8 ff       	call   8146ad8 <_ZN6Global14CBossTowerFunc10GiveUpGameEP5CUser>
 81c4180:	eb 60                	jmp    81c41e2 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81c4182:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c4185:	89 04 24             	mov    %eax,(%esp)
 81c4188:	e8 ff 61 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c418d:	83 f8 0d             	cmp    $0xd,%eax
 81c4190:	0f 94 c0             	sete   %al
 81c4193:	84 c0                	test   %al,%al
 81c4195:	74 0d                	je     81c41a4 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0xf0>
 81c4197:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c419a:	89 04 24             	mov    %eax,(%esp)
 81c419d:	e8 06 ce f6 ff       	call   8130fa8 <_ZN12advancealtar7Manager10giveUpGameEP5CUser>
 81c41a2:	eb 3e                	jmp    81c41e2 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81c41a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c41a7:	89 04 24             	mov    %eax,(%esp)
 81c41aa:	e8 9d 0f 49 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81c41af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c41b2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81c41b6:	74 2a                	je     81c41e2 <_ZN21DisPatcher_GiveUpGame7processEP5CUserR8MSG_BASER9ParamBase+0x12e>
 81c41b8:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81c41bf:	00 
 81c41c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c41c7:	00 
 81c41c8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81c41cf:	00 
 81c41d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c41d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c41d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c41da:	89 04 24             	mov    %eax,(%esp)
 81c41dd:	e8 c8 e9 3e 00       	call   85b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>
 81c41e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81c41e5:	c9                   	leave
 81c41e6:	c3                   	ret
 81c41e7:	90                   	nop

```

```c
// DisPatcher_GiveUpGame::process @ 0x81c40b4

/* DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_GiveUpGame::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CDeathTower *this;
  CParty *this_00;
  
  iVar1 = check_error(param_1,param_2);
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      uVar2 = CUser::get_acc_id((CUser *)param_2);
      iVar1 = LineFunc(0xff7,
                       "virtual int DisPatcher_GiveUpGame::process(CUser*, MSG_BASE&, ParamBase&)",0
                       ,uVar2);
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 10) {
        this = (CDeathTower *)CUser::getDeathTower((CUser *)param_2);
        if (this != (CDeathTower *)0x0) {
          WongWork::CDeathTower::handleLeaveUser(this,(CUser *)param_2);
        }
      }
      else {
        iVar3 = CUser::get_state((CUser *)param_2);
        if (iVar3 == 0xc) {
          Global::CBossTowerFunc::GiveUpGame((CUser *)param_2);
        }
        else {
          iVar3 = CUser::get_state((CUser *)param_2);
          if (iVar3 == 0xd) {
            advancealtar::Manager::giveUpGame((CUser *)param_2);
          }
          else {
            this_00 = (CParty *)CUser::GetParty((CUser *)param_2);
            if (this_00 != (CParty *)0x0) {
              CParty::giveup_game(this_00,(CUser *)param_2,true,false,false);
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

```

---

## read

```asm
// === 081c40aa DisPatcher_GiveUpGame::read  [0x081c40aa-0x81c40b3] ===
 81c40aa:	55                   	push   %ebp
 81c40ab:	89 e5                	mov    %esp,%ebp
 81c40ad:	b8 00 00 00 00       	mov    $0x0,%eax
 81c40b2:	5d                   	pop    %ebp
 81c40b3:	c3                   	ret

```

```c
// DisPatcher_GiveUpGame::read @ 0x81c40aa

/* DisPatcher_GiveUpGame::read(PacketBuf&, MSG_BASE&) */

undefined4 DisPatcher_GiveUpGame::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```


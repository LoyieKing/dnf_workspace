# Teleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## Teleport

```asm
// === 08283c30 Teleport::Teleport  [0x08283c30-0x8283c59] ===
 8283c30:	55                   	push   %ebp
 8283c31:	89 e5                	mov    %esp,%ebp
 8283c33:	83 ec 18             	sub    $0x18,%esp
 8283c36:	8b 45 08             	mov    0x8(%ebp),%eax
 8283c39:	c7 00 48 b2 c0 08    	movl   $0x8c0b248,(%eax)
 8283c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8283c42:	83 c0 04             	add    $0x4,%eax
 8283c45:	89 04 24             	mov    %eax,(%esp)
 8283c48:	e8 17 9b fa ff       	call   822d764 <_ZN15stPartyTelePort5resetEv>
 8283c4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8283c50:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8283c57:	c9                   	leave
 8283c58:	c3                   	ret
 8283c59:	90                   	nop

```

```c
// Teleport::Teleport @ 0x8283c30

/* Teleport::Teleport() */

void __thiscall Teleport::Teleport(Teleport *this)

{
  *(undefined ***)this = &PTR__Teleport_08c0b248;
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

---

## check_rule

```asm
// === 08283c5a Teleport::check_rule  [0x08283c5a-0x8283d81] ===
 8283c5a:	55                   	push   %ebp
 8283c5b:	89 e5                	mov    %esp,%ebp
 8283c5d:	83 ec 28             	sub    $0x28,%esp
 8283c60:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8283c64:	75 0a                	jne    8283c70 <_ZN8Teleport10check_ruleEP5CUser+0x16>
 8283c66:	b8 01 00 00 00       	mov    $0x1,%eax
 8283c6b:	e9 0f 01 00 00       	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283c70:	8b 45 08             	mov    0x8(%ebp),%eax
 8283c73:	89 04 24             	mov    %eax,(%esp)
 8283c76:	e8 11 67 e5 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8283c7b:	83 f8 03             	cmp    $0x3,%eax
 8283c7e:	0f 95 c0             	setne  %al
 8283c81:	84 c0                	test   %al,%al
 8283c83:	74 0a                	je     8283c8f <_ZN8Teleport10check_ruleEP5CUser+0x35>
 8283c85:	b8 13 00 00 00       	mov    $0x13,%eax
 8283c8a:	e9 f0 00 00 00       	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283c8f:	e8 13 67 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8283c94:	89 04 24             	mov    %eax,(%esp)
 8283c97:	e8 4c e8 eb ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 8283c9c:	84 c0                	test   %al,%al
 8283c9e:	75 11                	jne    8283cb1 <_ZN8Teleport10check_ruleEP5CUser+0x57>
 8283ca0:	e8 02 67 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8283ca5:	89 04 24             	mov    %eax,(%esp)
 8283ca8:	e8 71 07 fb ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8283cad:	84 c0                	test   %al,%al
 8283caf:	74 07                	je     8283cb8 <_ZN8Teleport10check_ruleEP5CUser+0x5e>
 8283cb1:	b8 01 00 00 00       	mov    $0x1,%eax
 8283cb6:	eb 05                	jmp    8283cbd <_ZN8Teleport10check_ruleEP5CUser+0x63>
 8283cb8:	b8 00 00 00 00       	mov    $0x0,%eax
 8283cbd:	84 c0                	test   %al,%al
 8283cbf:	74 0a                	je     8283ccb <_ZN8Teleport10check_ruleEP5CUser+0x71>
 8283cc1:	b8 13 00 00 00       	mov    $0x13,%eax
 8283cc6:	e9 b4 00 00 00       	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283ccb:	8b 45 08             	mov    0x8(%ebp),%eax
 8283cce:	89 04 24             	mov    %eax,(%esp)
 8283cd1:	e8 8e 18 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8283cd6:	3c 07                	cmp    $0x7,%al
 8283cd8:	0f 94 c0             	sete   %al
 8283cdb:	84 c0                	test   %al,%al
 8283cdd:	74 0a                	je     8283ce9 <_ZN8Teleport10check_ruleEP5CUser+0x8f>
 8283cdf:	b8 be 00 00 00       	mov    $0xbe,%eax
 8283ce4:	e9 96 00 00 00       	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 8283cec:	89 04 24             	mov    %eax,(%esp)
 8283cef:	e8 a8 1b ec ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8283cf4:	83 f0 01             	xor    $0x1,%eax
 8283cf7:	84 c0                	test   %al,%al
 8283cf9:	74 2f                	je     8283d2a <_ZN8Teleport10check_ruleEP5CUser+0xd0>
 8283cfb:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8283d02:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283d05:	89 44 24 08          	mov    %eax,0x8(%esp)
 8283d09:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283d10:	00 
 8283d11:	8b 45 08             	mov    0x8(%ebp),%eax
 8283d14:	89 04 24             	mov    %eax,(%esp)
 8283d17:	e8 dc a2 40 00       	call   868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>
 8283d1c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8283d1f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8283d23:	7e 05                	jle    8283d2a <_ZN8Teleport10check_ruleEP5CUser+0xd0>
 8283d25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8283d28:	eb 55                	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283d2a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283d31:	00 
 8283d32:	8b 45 08             	mov    0x8(%ebp),%eax
 8283d35:	89 04 24             	mov    %eax,(%esp)
 8283d38:	e8 19 a1 40 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 8283d3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8283d40:	8b 45 08             	mov    0x8(%ebp),%eax
 8283d43:	89 04 24             	mov    %eax,(%esp)
 8283d46:	e8 51 1b ec ff       	call   814589c <_ZN5CUser8isGMUserEv>
 8283d4b:	83 f0 01             	xor    $0x1,%eax
 8283d4e:	84 c0                	test   %al,%al
 8283d50:	74 18                	je     8283d6a <_ZN8Teleport10check_ruleEP5CUser+0x110>
 8283d52:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8283d59:	e8 40 7f e4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8283d5e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8283d61:	7d 07                	jge    8283d6a <_ZN8Teleport10check_ruleEP5CUser+0x110>
 8283d63:	b8 01 00 00 00       	mov    $0x1,%eax
 8283d68:	eb 05                	jmp    8283d6f <_ZN8Teleport10check_ruleEP5CUser+0x115>
 8283d6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8283d6f:	84 c0                	test   %al,%al
 8283d71:	74 07                	je     8283d7a <_ZN8Teleport10check_ruleEP5CUser+0x120>
 8283d73:	b8 16 00 00 00       	mov    $0x16,%eax
 8283d78:	eb 05                	jmp    8283d7f <_ZN8Teleport10check_ruleEP5CUser+0x125>
 8283d7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8283d7f:	c9                   	leave
 8283d80:	c3                   	ret
 8283d81:	90                   	nop

```

```c
// Teleport::check_rule @ 0x8283c5a

/* Teleport::check_rule(CUser*) */

int Teleport::check_rule(CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 1;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 3) {
    return 0x13;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08283cbd;
    }
  }
  bVar1 = true;
LAB_08283cbd:
  if (bVar1) {
    iVar3 = 0x13;
  }
  else {
    cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    if (cVar2 == '\a') {
      iVar3 = 0xbe;
    }
    else {
      cVar2 = CUser::isGMUser(param_1);
      if (cVar2 != '\x01') {
        local_18 = 0;
        local_10 = CUser::is_equip_aura_avatar(param_1,'\x02',&local_18);
        if (0 < local_10) {
          return local_10;
        }
      }
      local_14 = CUser::get_aura_avatar_option_value(param_1,2);
      cVar2 = CUser::isGMUser(param_1);
      if ((cVar2 == '\x01') ||
         (iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_),
         local_14 <= iVar3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = 0x16;
      }
      else {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

```

---

## check_rule_08283d82

```asm
// === 08283d82 Teleport::check_rule  [0x08283d82-0x8283d97] ===
 8283d82:	55                   	push   %ebp
 8283d83:	89 e5                	mov    %esp,%ebp
 8283d85:	83 ec 18             	sub    $0x18,%esp
 8283d88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283d8b:	8b 40 04             	mov    0x4(%eax),%eax
 8283d8e:	89 04 24             	mov    %eax,(%esp)
 8283d91:	e8 c4 fe ff ff       	call   8283c5a <_ZN8Teleport10check_ruleEP5CUser>
 8283d96:	c9                   	leave
 8283d97:	c3                   	ret

```

```c
// Teleport::check_rule @ 0x8283d82

/* Teleport::check_rule(STCheckRuleData const&) */

void __thiscall Teleport::check_rule(Teleport *this,STCheckRuleData *param_1)

{
  check_rule(*(CUser **)(param_1 + 4));
  return;
}

```

---

## get_end_cool_time

```asm
// === 08283e24 Teleport::get_end_cool_time  [0x08283e24-0x8283e2f] ===
 8283e24:	55                   	push   %ebp
 8283e25:	89 e5                	mov    %esp,%ebp
 8283e27:	8b 45 08             	mov    0x8(%ebp),%eax
 8283e2a:	8b 40 10             	mov    0x10(%eax),%eax
 8283e2d:	5d                   	pop    %ebp
 8283e2e:	c3                   	ret
 8283e2f:	90                   	nop

```

```c
// Teleport::get_end_cool_time @ 0x8283e24

/* Teleport::get_end_cool_time() */

undefined4 __thiscall Teleport::get_end_cool_time(Teleport *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## get_party_teleport

```asm
// === 08283db6 Teleport::get_party_teleport  [0x08283db6-0x8283dc1] ===
 8283db6:	55                   	push   %ebp
 8283db7:	89 e5                	mov    %esp,%ebp
 8283db9:	8b 45 08             	mov    0x8(%ebp),%eax
 8283dbc:	83 c0 04             	add    $0x4,%eax
 8283dbf:	5d                   	pop    %ebp
 8283dc0:	c3                   	ret
 8283dc1:	90                   	nop

```

```c
// Teleport::get_party_teleport @ 0x8283db6

/* Teleport::get_party_teleport() */

Teleport * __thiscall Teleport::get_party_teleport(Teleport *this)

{
  return this + 4;
}

```

---

## move_area

```asm
// === 08283fb8 Teleport::move_area  [0x08283fb8-0x82840d9] ===
 8283fb8:	55                   	push   %ebp
 8283fb9:	89 e5                	mov    %esp,%ebp
 8283fbb:	57                   	push   %edi
 8283fbc:	56                   	push   %esi
 8283fbd:	53                   	push   %ebx
 8283fbe:	83 ec 4c             	sub    $0x4c,%esp
 8283fc1:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8283fc5:	75 0a                	jne    8283fd1 <_ZN8Teleport9move_areaEP5CUser+0x19>
 8283fc7:	b8 00 00 00 00       	mov    $0x0,%eax
 8283fcc:	e9 00 01 00 00       	jmp    82840d1 <_ZN8Teleport9move_areaEP5CUser+0x119>
 8283fd1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8283fd8:	00 
 8283fd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283fdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8283fe0:	8b 45 08             	mov    0x8(%ebp),%eax
 8283fe3:	89 04 24             	mov    %eax,(%esp)
 8283fe6:	e8 cf fe ff ff       	call   8283eba <_ZN8Teleport20send_teleport_effectEP5CUseri>
 8283feb:	8b 45 08             	mov    0x8(%ebp),%eax
 8283fee:	83 c0 04             	add    $0x4,%eax
 8283ff1:	89 04 24             	mov    %eax,(%esp)
 8283ff4:	e8 5f 97 fa ff       	call   822d758 <_ZNK15stPartyTelePort22get_teleport_directionEv>
 8283ff9:	0f b6 c0             	movzbl %al,%eax
 8283ffc:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8283fff:	8b 45 08             	mov    0x8(%ebp),%eax
 8284002:	83 c0 04             	add    $0x4,%eax
 8284005:	89 04 24             	mov    %eax,(%esp)
 8284008:	e8 3f 97 fa ff       	call   822d74c <_ZNK15stPartyTelePort17get_teleport_posyEv>
 828400d:	98                   	cwtl
 828400e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8284011:	8b 45 08             	mov    0x8(%ebp),%eax
 8284014:	83 c0 04             	add    $0x4,%eax
 8284017:	89 04 24             	mov    %eax,(%esp)
 828401a:	e8 21 97 fa ff       	call   822d740 <_ZNK15stPartyTelePort17get_teleport_posxEv>
 828401f:	0f bf f8             	movswl %ax,%edi
 8284022:	8b 45 08             	mov    0x8(%ebp),%eax
 8284025:	83 c0 04             	add    $0x4,%eax
 8284028:	89 04 24             	mov    %eax,(%esp)
 828402b:	e8 04 97 fa ff       	call   822d734 <_ZNK15stPartyTelePort23get_teleport_area_indexEv>
 8284030:	0f b6 f0             	movzbl %al,%esi
 8284033:	8b 45 08             	mov    0x8(%ebp),%eax
 8284036:	83 c0 04             	add    $0x4,%eax
 8284039:	89 04 24             	mov    %eax,(%esp)
 828403c:	e8 e7 96 fa ff       	call   822d728 <_ZNK15stPartyTelePort20get_teleport_villageEv>
 8284041:	0f b6 d8             	movzbl %al,%ebx
 8284044:	e8 5e 63 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8284049:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8284050:	00 
 8284051:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8284058:	00 
 8284059:	c7 44 24 20 02 00 00 	movl   $0x2,0x20(%esp)
 8284060:	00 
 8284061:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 8284068:	00 
 8284069:	8b 55 e0             	mov    -0x20(%ebp),%edx
 828406c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8284070:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8284073:	89 54 24 14          	mov    %edx,0x14(%esp)
 8284077:	89 7c 24 10          	mov    %edi,0x10(%esp)
 828407b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 828407f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8284083:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284086:	89 54 24 04          	mov    %edx,0x4(%esp)
 828408a:	89 04 24             	mov    %eax,(%esp)
 828408d:	e8 f2 19 44 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 8284092:	83 f0 01             	xor    $0x1,%eax
 8284095:	84 c0                	test   %al,%al
 8284097:	74 07                	je     82840a0 <_ZN8Teleport9move_areaEP5CUser+0xe8>
 8284099:	b8 00 00 00 00       	mov    $0x0,%eax
 828409e:	eb 31                	jmp    82840d1 <_ZN8Teleport9move_areaEP5CUser+0x119>
 82840a0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82840a7:	00 
 82840a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82840ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 82840af:	8b 45 08             	mov    0x8(%ebp),%eax
 82840b2:	89 04 24             	mov    %eax,(%esp)
 82840b5:	e8 00 fe ff ff       	call   8283eba <_ZN8Teleport20send_teleport_effectEP5CUseri>
 82840ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82840bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 82840c1:	8b 45 08             	mov    0x8(%ebp),%eax
 82840c4:	89 04 24             	mov    %eax,(%esp)
 82840c7:	e8 64 fd ff ff       	call   8283e30 <_ZN8Teleport25update_next_end_cool_timeEP5CUser>
 82840cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82840d1:	83 c4 4c             	add    $0x4c,%esp
 82840d4:	5b                   	pop    %ebx
 82840d5:	5e                   	pop    %esi
 82840d6:	5f                   	pop    %edi
 82840d7:	5d                   	pop    %ebp
 82840d8:	c3                   	ret
 82840d9:	90                   	nop

```

```c
// Teleport::move_area @ 0x8283fb8

/* Teleport::move_area(CUser*) */

undefined4 __thiscall Teleport::move_area(Teleport *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    send_teleport_effect(this,param_1,1);
    uVar5 = stPartyTelePort::get_teleport_direction((stPartyTelePort *)(this + 4));
    sVar2 = stPartyTelePort::get_teleport_posy((stPartyTelePort *)(this + 4));
    sVar3 = stPartyTelePort::get_teleport_posx((stPartyTelePort *)(this + 4));
    uVar6 = stPartyTelePort::get_teleport_area_index((stPartyTelePort *)(this + 4));
    uVar7 = stPartyTelePort::get_teleport_village((stPartyTelePort *)(this + 4));
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::move_area
                      (this_00,param_1,uVar7 & 0xff,uVar6 & 0xff,(int)sVar3,(int)sVar2,uVar5 & 0xff,
                       true,2,0,0);
    if (cVar1 == '\x01') {
      send_teleport_effect(this,param_1,2);
      update_next_end_cool_time(this,param_1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## send_teleport_effect

```asm
// === 08283eba Teleport::send_teleport_effect  [0x08283eba-0x8283fb7] ===
 8283eba:	55                   	push   %ebp
 8283ebb:	89 e5                	mov    %esp,%ebp
 8283ebd:	56                   	push   %esi
 8283ebe:	53                   	push   %ebx
 8283ebf:	83 ec 20             	sub    $0x20,%esp
 8283ec2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8283ec6:	0f 84 e4 00 00 00    	je     8283fb0 <_ZN8Teleport20send_teleport_effectEP5CUseri+0xf6>
 8283ecc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283ecf:	89 04 24             	mov    %eax,(%esp)
 8283ed2:	e8 75 9e 30 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8283ed7:	c7 44 24 08 7b 01 00 	movl   $0x17b,0x8(%esp)
 8283ede:	00 
 8283edf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8283ee6:	00 
 8283ee7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283eea:	89 04 24             	mov    %eax,(%esp)
 8283eed:	e8 0a 7a e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8283ef2:	8b 45 10             	mov    0x10(%ebp),%eax
 8283ef5:	0f be c0             	movsbl %al,%eax
 8283ef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8283efc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283eff:	89 04 24             	mov    %eax,(%esp)
 8283f02:	e8 19 7a e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8283f07:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8283f0e:	00 
 8283f0f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283f12:	89 04 24             	mov    %eax,(%esp)
 8283f15:	e8 06 7a e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8283f1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283f1d:	89 04 24             	mov    %eax,(%esp)
 8283f20:	e8 71 4d e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8283f25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8283f29:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283f2c:	89 04 24             	mov    %eax,(%esp)
 8283f2f:	e8 70 5f e5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8283f34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8283f3b:	00 
 8283f3c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283f3f:	89 04 24             	mov    %eax,(%esp)
 8283f42:	e8 11 7a e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8283f47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8283f4e:	00 
 8283f4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283f52:	89 04 24             	mov    %eax,(%esp)
 8283f55:	e8 64 d4 3f 00       	call   86813be <_ZN5CUser8get_areaEb>
 8283f5a:	89 c3                	mov    %eax,%ebx
 8283f5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283f5f:	89 04 24             	mov    %eax,(%esp)
 8283f62:	e8 fd 15 3c 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 8283f67:	0f be f0             	movsbl %al,%esi
 8283f6a:	e8 38 64 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 8283f6f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8283f72:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8283f76:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8283f7a:	89 74 24 04          	mov    %esi,0x4(%esp)
 8283f7e:	89 04 24             	mov    %eax,(%esp)
 8283f81:	e8 e2 41 44 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 8283f86:	eb 1b                	jmp    8283fa3 <_ZN8Teleport20send_teleport_effectEP5CUseri+0xe9>
 8283f88:	89 d3                	mov    %edx,%ebx
 8283f8a:	89 c6                	mov    %eax,%esi
 8283f8c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283f8f:	89 04 24             	mov    %eax,(%esp)
 8283f92:	e8 e9 9e 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8283f97:	89 f0                	mov    %esi,%eax
 8283f99:	89 da                	mov    %ebx,%edx
 8283f9b:	89 04 24             	mov    %eax,(%esp)
 8283f9e:	e8 ad f7 85 00       	call   8ae3750 <_Unwind_Resume>
 8283fa3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8283fa6:	89 04 24             	mov    %eax,(%esp)
 8283fa9:	e8 d2 9e 30 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8283fae:	eb 01                	jmp    8283fb1 <_ZN8Teleport20send_teleport_effectEP5CUseri+0xf7>
 8283fb0:	90                   	nop
 8283fb1:	83 c4 20             	add    $0x20,%esp
 8283fb4:	5b                   	pop    %ebx
 8283fb5:	5e                   	pop    %esi
 8283fb6:	5d                   	pop    %ebp
 8283fb7:	c3                   	ret

```

```c
// Teleport::send_teleport_effect @ 0x8283eba

/* Teleport::send_teleport_effect(CUser*, int) */

void __thiscall Teleport::send_teleport_effect(Teleport *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08283eed to 08283f85 has its CatchHandler @ 08283f88 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x17b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    iVar2 = CUser::GetUID(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    iVar2 = CUser::get_area(param_1,false);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,(int)cVar1,iVar2,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## set_end_cool_time

```asm
// === 08283dc2 Teleport::set_end_cool_time  [0x08283dc2-0x8283e23] ===
 8283dc2:	55                   	push   %ebp
 8283dc3:	89 e5                	mov    %esp,%ebp
 8283dc5:	83 ec 28             	sub    $0x28,%esp
 8283dc8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8283dcc:	74 52                	je     8283e20 <_ZN8Teleport17set_end_cool_timeEP5CUser+0x5e>
 8283dce:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283dd5:	00 
 8283dd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283dd9:	89 04 24             	mov    %eax,(%esp)
 8283ddc:	e8 75 a0 40 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 8283de1:	8b 55 08             	mov    0x8(%ebp),%edx
 8283de4:	89 42 10             	mov    %eax,0x10(%edx)
 8283de7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8283dee:	e8 ab 7e e4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8283df3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8283df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8283df9:	8b 40 10             	mov    0x10(%eax),%eax
 8283dfc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8283dff:	7e 13                	jle    8283e14 <_ZN8Teleport17set_end_cool_timeEP5CUser+0x52>
 8283e01:	8b 45 08             	mov    0x8(%ebp),%eax
 8283e04:	8b 40 10             	mov    0x10(%eax),%eax
 8283e07:	89 c2                	mov    %eax,%edx
 8283e09:	2b 55 f4             	sub    -0xc(%ebp),%edx
 8283e0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8283e0f:	89 50 10             	mov    %edx,0x10(%eax)
 8283e12:	eb 0d                	jmp    8283e21 <_ZN8Teleport17set_end_cool_timeEP5CUser+0x5f>
 8283e14:	8b 45 08             	mov    0x8(%ebp),%eax
 8283e17:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8283e1e:	eb 01                	jmp    8283e21 <_ZN8Teleport17set_end_cool_timeEP5CUser+0x5f>
 8283e20:	90                   	nop
 8283e21:	c9                   	leave
 8283e22:	c3                   	ret
 8283e23:	90                   	nop

```

```c
// Teleport::set_end_cool_time @ 0x8283dc2

/* Teleport::set_end_cool_time(CUser*) */

void __thiscall Teleport::set_end_cool_time(Teleport *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (CUser *)0x0) {
    uVar1 = CUser::get_aura_avatar_option_value(param_1,2);
    *(undefined4 *)(this + 0x10) = uVar1;
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar2 < *(int *)(this + 0x10)) {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) - iVar2;
    }
    else {
      *(undefined4 *)(this + 0x10) = 0;
    }
  }
  return;
}

```

---

## set_party_teleport

```asm
// === 08283d98 Teleport::set_party_teleport  [0x08283d98-0x8283db5] ===
 8283d98:	55                   	push   %ebp
 8283d99:	89 e5                	mov    %esp,%ebp
 8283d9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8283d9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8283da1:	8b 0a                	mov    (%edx),%ecx
 8283da3:	89 48 04             	mov    %ecx,0x4(%eax)
 8283da6:	8b 4a 04             	mov    0x4(%edx),%ecx
 8283da9:	89 48 08             	mov    %ecx,0x8(%eax)
 8283dac:	0f b7 52 08          	movzwl 0x8(%edx),%edx
 8283db0:	66 89 50 0c          	mov    %dx,0xc(%eax)
 8283db4:	5d                   	pop    %ebp
 8283db5:	c3                   	ret

```

```c
// Teleport::set_party_teleport @ 0x8283d98

/* Teleport::set_party_teleport(stPartyTelePort const&) */

void __thiscall Teleport::set_party_teleport(Teleport *this,stPartyTelePort *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 8);
  return;
}

```

---

## update_next_end_cool_time

```asm
// === 08283e30 Teleport::update_next_end_cool_time  [0x08283e30-0x8283eb9] ===
 8283e30:	55                   	push   %ebp
 8283e31:	89 e5                	mov    %esp,%ebp
 8283e33:	83 ec 28             	sub    $0x28,%esp
 8283e36:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8283e3a:	74 7b                	je     8283eb7 <_ZN8Teleport25update_next_end_cool_timeEP5CUser+0x87>
 8283e3c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8283e43:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8283e46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8283e4a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283e51:	00 
 8283e52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283e55:	89 04 24             	mov    %eax,(%esp)
 8283e58:	e8 9b a1 40 00       	call   868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>
 8283e5d:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8283e64:	e8 35 7e e4 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8283e69:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8283e6c:	01 d0                	add    %edx,%eax
 8283e6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8283e71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283e74:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8283e77:	89 54 24 08          	mov    %edx,0x8(%esp)
 8283e7b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283e82:	00 
 8283e83:	89 04 24             	mov    %eax,(%esp)
 8283e86:	e8 05 06 00 00       	call   8284490 <_ZN15CUserCharacInfo28set_aura_avatar_option_valueEii>
 8283e8b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283e92:	00 
 8283e93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283e96:	89 04 24             	mov    %eax,(%esp)
 8283e99:	e8 b8 9f 40 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 8283e9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8283ea2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8283ea9:	00 
 8283eaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8283ead:	89 04 24             	mov    %eax,(%esp)
 8283eb0:	e8 55 9f 40 00       	call   868de0a <_ZN5CUser22UpdateAuraAvatarOptionEii>
 8283eb5:	eb 01                	jmp    8283eb8 <_ZN8Teleport25update_next_end_cool_timeEP5CUser+0x88>
 8283eb7:	90                   	nop
 8283eb8:	c9                   	leave
 8283eb9:	c3                   	ret

```

```c
// Teleport::update_next_end_cool_time @ 0x8283e30

/* Teleport::update_next_end_cool_time(CUser*) */

void __thiscall Teleport::update_next_end_cool_time(Teleport *this,CUser *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_14 = 0;
    CUser::is_equip_aura_avatar(param_1,'\x02',&local_14);
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_10 + local_14;
    CUserCharacInfo::set_aura_avatar_option_value((CUserCharacInfo *)param_1,2,local_10);
    iVar1 = CUser::get_aura_avatar_option_value(param_1,2);
    CUser::UpdateAuraAvatarOption(param_1,2,iVar1);
  }
  return;
}

```


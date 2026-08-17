# NPC_Teleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## NPC_Teleport

```asm
// === 082840da NPC_Teleport::NPC_Teleport  [0x082840da-0x82840f5] ===
 82840da:	55                   	push   %ebp
 82840db:	89 e5                	mov    %esp,%ebp
 82840dd:	83 ec 18             	sub    $0x18,%esp
 82840e0:	8b 45 08             	mov    0x8(%ebp),%eax
 82840e3:	89 04 24             	mov    %eax,(%esp)
 82840e6:	e8 45 fb ff ff       	call   8283c30 <_ZN8TeleportC1Ev>
 82840eb:	8b 45 08             	mov    0x8(%ebp),%eax
 82840ee:	c7 00 30 b2 c0 08    	movl   $0x8c0b230,(%eax)
 82840f4:	c9                   	leave
 82840f5:	c3                   	ret

```

```c
// NPC_Teleport::NPC_Teleport @ 0x82840da

/* NPC_Teleport::NPC_Teleport() */

void __thiscall NPC_Teleport::NPC_Teleport(NPC_Teleport *this)

{
  Teleport::Teleport((Teleport *)this);
  *(undefined ***)this = &PTR__NPC_Teleport_08c0b230;
  return;
}

```

---

## check_rule

```asm
// === 082840f6 NPC_Teleport::check_rule  [0x082840f6-0x8284123] ===
 82840f6:	55                   	push   %ebp
 82840f7:	89 e5                	mov    %esp,%ebp
 82840f9:	83 ec 28             	sub    $0x28,%esp
 82840fc:	8b 45 08             	mov    0x8(%ebp),%eax
 82840ff:	8b 55 0c             	mov    0xc(%ebp),%edx
 8284102:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284106:	89 04 24             	mov    %eax,(%esp)
 8284109:	e8 74 fc ff ff       	call   8283d82 <_ZN8Teleport10check_ruleERK15STCheckRuleData>
 828410e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8284111:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8284115:	74 05                	je     828411c <_ZN12NPC_Teleport10check_ruleERK15STCheckRuleData+0x26>
 8284117:	8b 45 f4             	mov    -0xc(%ebp),%eax
 828411a:	eb 05                	jmp    8284121 <_ZN12NPC_Teleport10check_ruleERK15STCheckRuleData+0x2b>
 828411c:	b8 00 00 00 00       	mov    $0x0,%eax
 8284121:	c9                   	leave
 8284122:	c3                   	ret
 8284123:	90                   	nop

```

```c
// NPC_Teleport::check_rule @ 0x82840f6

/* NPC_Teleport::check_rule(STCheckRuleData const&) */

int __thiscall NPC_Teleport::check_rule(NPC_Teleport *this,STCheckRuleData *param_1)

{
  int iVar1;
  
  iVar1 = Teleport::check_rule((Teleport *)this,param_1);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## set_teleport_data

```asm
// === 08284124 NPC_Teleport::set_teleport_data  [0x08284124-0x8284141] ===
 8284124:	55                   	push   %ebp
 8284125:	89 e5                	mov    %esp,%ebp
 8284127:	83 ec 08             	sub    $0x8,%esp
 828412a:	8b 45 0c             	mov    0xc(%ebp),%eax
 828412d:	8d 50 04             	lea    0x4(%eax),%edx
 8284130:	8b 45 08             	mov    0x8(%ebp),%eax
 8284133:	89 54 24 04          	mov    %edx,0x4(%esp)
 8284137:	89 04 24             	mov    %eax,(%esp)
 828413a:	e8 59 fc ff ff       	call   8283d98 <_ZN8Teleport18set_party_teleportERK15stPartyTelePort>
 828413f:	c9                   	leave
 8284140:	c3                   	ret
 8284141:	90                   	nop

```

```c
// NPC_Teleport::set_teleport_data @ 0x8284124

/* NPC_Teleport::set_teleport_data(STTeleportData const&) */

void __thiscall NPC_Teleport::set_teleport_data(NPC_Teleport *this,STTeleportData *param_1)

{
  Teleport::set_party_teleport((Teleport *)this,(stPartyTelePort *)(param_1 + 4));
  return;
}

```


# CPartyTelePort

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CPartyTelePort

```asm
// === 085bb832 CPartyTelePort::CPartyTelePort  [0x085bb832-0x85bb847] ===
 85bb832:	55                   	push   %ebp
 85bb833:	89 e5                	mov    %esp,%ebp
 85bb835:	83 ec 18             	sub    $0x18,%esp
 85bb838:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb83b:	83 c0 04             	add    $0x4,%eax
 85bb83e:	89 04 24             	mov    %eax,(%esp)
 85bb841:	e8 1e 1f c7 ff       	call   822d764 <_ZN15stPartyTelePort5resetEv>
 85bb846:	c9                   	leave
 85bb847:	c3                   	ret

```

```c
// CPartyTelePort::CPartyTelePort @ 0x85bb832

/* CPartyTelePort::CPartyTelePort() */

void __thiscall CPartyTelePort::CPartyTelePort(CPartyTelePort *this)

{
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  return;
}

```

---

## check_cur_teleport_state

```asm
// === 085bbb08 CPartyTelePort::check_cur_teleport_state  [0x085bbb08-0x85bbbb7] ===
 85bbb08:	55                   	push   %ebp
 85bbb09:	89 e5                	mov    %esp,%ebp
 85bbb0b:	83 ec 28             	sub    $0x28,%esp
 85bbb0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbb11:	8b 00                	mov    (%eax),%eax
 85bbb13:	85 c0                	test   %eax,%eax
 85bbb15:	75 0a                	jne    85bbb21 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x19>
 85bbb17:	b8 00 00 00 00       	mov    $0x0,%eax
 85bbb1c:	e9 94 00 00 00       	jmp    85bbbb5 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0xad>
 85bbb21:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 85bbb25:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85bbb2c:	eb 5f                	jmp    85bbb8d <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x85>
 85bbb2e:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbb31:	8b 00                	mov    (%eax),%eax
 85bbb33:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85bbb36:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbb3a:	89 04 24             	mov    %eax,(%esp)
 85bbb3d:	e8 26 9d b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bbb42:	83 f0 01             	xor    $0x1,%eax
 85bbb45:	84 c0                	test   %al,%al
 85bbb47:	75 3c                	jne    85bbb85 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x7d>
 85bbb49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bbb4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbb50:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbb53:	89 04 24             	mov    %eax,(%esp)
 85bbb56:	e8 f7 06 00 00       	call   85bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>
 85bbb5b:	3c 04                	cmp    $0x4,%al
 85bbb5d:	0f 94 c0             	sete   %al
 85bbb60:	84 c0                	test   %al,%al
 85bbb62:	75 24                	jne    85bbb88 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x80>
 85bbb64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bbb67:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbb6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbb6e:	89 04 24             	mov    %eax,(%esp)
 85bbb71:	e8 dc 06 00 00       	call   85bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>
 85bbb76:	3c 01                	cmp    $0x1,%al
 85bbb78:	0f 95 c0             	setne  %al
 85bbb7b:	84 c0                	test   %al,%al
 85bbb7d:	74 0a                	je     85bbb89 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x81>
 85bbb7f:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85bbb83:	eb 04                	jmp    85bbb89 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x81>
 85bbb85:	90                   	nop
 85bbb86:	eb 01                	jmp    85bbb89 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x81>
 85bbb88:	90                   	nop
 85bbb89:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85bbb8d:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85bbb91:	0f 9e c0             	setle  %al
 85bbb94:	84 c0                	test   %al,%al
 85bbb96:	75 96                	jne    85bbb2e <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0x26>
 85bbb98:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 85bbb9c:	74 13                	je     85bbbb1 <_ZN14CPartyTelePort24check_cur_teleport_stateEv+0xa9>
 85bbb9e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bbba5:	00 
 85bbba6:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbba9:	89 04 24             	mov    %eax,(%esp)
 85bbbac:	e8 49 1c c7 ff       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 85bbbb1:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85bbbb5:	c9                   	leave
 85bbbb6:	c3                   	ret
 85bbbb7:	90                   	nop

```

```c
// CPartyTelePort::check_cur_teleport_state @ 0x85bbb08

/* CPartyTelePort::check_cur_teleport_state() */

char __thiscall CPartyTelePort::check_cur_teleport_state(CPartyTelePort *this)

{
  char cVar1;
  char local_11;
  int local_10;
  
  if (*(int *)this == 0) {
    local_11 = '\0';
  }
  else {
    local_11 = '\x01';
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      cVar1 = CParty::checkValidUser(*(CParty **)this,local_10);
      if (((cVar1 == '\x01') && (cVar1 = get_teleport_member_state(this,local_10), cVar1 != '\x04'))
         && (cVar1 = get_teleport_member_state(this,local_10), cVar1 != '\x01')) {
        local_11 = '\0';
      }
    }
    if (local_11 != '\0') {
      set_teleport_state(this,'\x01');
    }
  }
  return local_11;
}

```

---

## get_teleport_member_state

```asm
// === 085bc252 CPartyTelePort::get_teleport_member_state  [0x085bc252-0x85bc2af] ===
 85bc252:	55                   	push   %ebp
 85bc253:	89 e5                	mov    %esp,%ebp
 85bc255:	83 ec 18             	sub    $0x18,%esp
 85bc258:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc25b:	8b 00                	mov    (%eax),%eax
 85bc25d:	85 c0                	test   %eax,%eax
 85bc25f:	75 07                	jne    85bc268 <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x16>
 85bc261:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85bc266:	eb 45                	jmp    85bc2ad <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x5b>
 85bc268:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85bc26c:	78 06                	js     85bc274 <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x22>
 85bc26e:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85bc272:	7e 07                	jle    85bc27b <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x29>
 85bc274:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85bc279:	eb 32                	jmp    85bc2ad <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x5b>
 85bc27b:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc27e:	8b 00                	mov    (%eax),%eax
 85bc280:	85 c0                	test   %eax,%eax
 85bc282:	74 24                	je     85bc2a8 <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x56>
 85bc284:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc287:	8b 00                	mov    (%eax),%eax
 85bc289:	89 04 24             	mov    %eax,(%esp)
 85bc28c:	e8 8b 16 c7 ff       	call   822d91c <_ZN6CParty9GetMemberEv>
 85bc291:	89 c1                	mov    %eax,%ecx
 85bc293:	8b 55 0c             	mov    0xc(%ebp),%edx
 85bc296:	89 d0                	mov    %edx,%eax
 85bc298:	01 c0                	add    %eax,%eax
 85bc29a:	01 d0                	add    %edx,%eax
 85bc29c:	c1 e0 03             	shl    $0x3,%eax
 85bc29f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85bc2a2:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 85bc2a6:	eb 05                	jmp    85bc2ad <_ZN14CPartyTelePort25get_teleport_member_stateEi+0x5b>
 85bc2a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85bc2ad:	c9                   	leave
 85bc2ae:	c3                   	ret
 85bc2af:	90                   	nop

```

```c
// CPartyTelePort::get_teleport_member_state @ 0x85bc252

/* CPartyTelePort::get_teleport_member_state(int) */

uint __thiscall CPartyTelePort::get_teleport_member_state(CPartyTelePort *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_1 < 0) || (3 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else if (*(int *)this == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CParty::GetMember(*(CParty **)this);
    uVar1 = (uint)*(byte *)(iVar2 + param_1 * 0x18 + 0x12);
  }
  return uVar1;
}

```

---

## init

```asm
// === 085bb84e CPartyTelePort::init  [0x085bb84e-0x85bb85b] ===
 85bb84e:	55                   	push   %ebp
 85bb84f:	89 e5                	mov    %esp,%ebp
 85bb851:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb854:	8b 55 0c             	mov    0xc(%ebp),%edx
 85bb857:	89 10                	mov    %edx,(%eax)
 85bb859:	5d                   	pop    %ebp
 85bb85a:	c3                   	ret
 85bb85b:	90                   	nop

```

```c
// CPartyTelePort::init @ 0x85bb84e

/* CPartyTelePort::init(CParty*) */

void __thiscall CPartyTelePort::init(CPartyTelePort *this,CParty *param_1)

{
  *(CParty **)this = param_1;
  return;
}

```

---

## process_leave_user_at_teleport

```asm
// === 085bc0a0 CPartyTelePort::process_leave_user_at_teleport  [0x085bc0a0-0x85bc251] ===
 85bc0a0:	55                   	push   %ebp
 85bc0a1:	89 e5                	mov    %esp,%ebp
 85bc0a3:	83 ec 28             	sub    $0x28,%esp
 85bc0a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc0a9:	8b 00                	mov    (%eax),%eax
 85bc0ab:	85 c0                	test   %eax,%eax
 85bc0ad:	0f 84 89 01 00 00    	je     85bc23c <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x19c>
 85bc0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc0b6:	89 04 24             	mov    %eax,(%esp)
 85bc0b9:	e8 30 17 c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bc0be:	c0 e8 07             	shr    $0x7,%al
 85bc0c1:	84 c0                	test   %al,%al
 85bc0c3:	0f 85 76 01 00 00    	jne    85bc23f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x19f>
 85bc0c9:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc0cc:	89 04 24             	mov    %eax,(%esp)
 85bc0cf:	e8 1a 17 c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bc0d4:	3c 03                	cmp    $0x3,%al
 85bc0d6:	0f 9f c0             	setg   %al
 85bc0d9:	84 c0                	test   %al,%al
 85bc0db:	0f 85 61 01 00 00    	jne    85bc242 <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1a2>
 85bc0e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85bc0e4:	89 04 24             	mov    %eax,(%esp)
 85bc0e7:	e8 a0 e2 b1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85bc0ec:	83 f8 03             	cmp    $0x3,%eax
 85bc0ef:	0f 95 c0             	setne  %al
 85bc0f2:	84 c0                	test   %al,%al
 85bc0f4:	0f 85 4b 01 00 00    	jne    85bc245 <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1a5>
 85bc0fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc0fd:	89 04 24             	mov    %eax,(%esp)
 85bc100:	e8 e9 16 c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bc105:	3c ff                	cmp    $0xff,%al
 85bc107:	0f 95 c0             	setne  %al
 85bc10a:	84 c0                	test   %al,%al
 85bc10c:	0f 84 3d 01 00 00    	je     85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc112:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc115:	8b 00                	mov    (%eax),%eax
 85bc117:	8b 55 0c             	mov    0xc(%ebp),%edx
 85bc11a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc11e:	89 04 24             	mov    %eax,(%esp)
 85bc121:	e8 56 eb fd ff       	call   859ac7c <_ZNK6CParty15GetMemberSlotNoEPK5CUser>
 85bc126:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85bc129:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85bc12d:	0f 88 15 01 00 00    	js     85bc248 <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1a8>
 85bc133:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85bc137:	0f 8f 0e 01 00 00    	jg     85bc24b <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1ab>
 85bc13d:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc140:	8b 00                	mov    (%eax),%eax
 85bc142:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85bc145:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc149:	89 04 24             	mov    %eax,(%esp)
 85bc14c:	e8 17 97 b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bc151:	83 f0 01             	xor    $0x1,%eax
 85bc154:	84 c0                	test   %al,%al
 85bc156:	0f 85 f2 00 00 00    	jne    85bc24e <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1ae>
 85bc15c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc15f:	8b 00                	mov    (%eax),%eax
 85bc161:	89 04 24             	mov    %eax,(%esp)
 85bc164:	e8 17 96 b8 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 85bc169:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85bc16c:	0f 94 c0             	sete   %al
 85bc16f:	84 c0                	test   %al,%al
 85bc171:	74 50                	je     85bc1c3 <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x123>
 85bc173:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85bc17a:	00 
 85bc17b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc17e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc182:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc185:	89 04 24             	mov    %eax,(%esp)
 85bc188:	e8 8f f7 ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bc18d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85bc194:	00 
 85bc195:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc198:	89 04 24             	mov    %eax,(%esp)
 85bc19b:	e8 5a 16 c7 ff       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 85bc1a0:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85bc1a7:	00 
 85bc1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc1ab:	89 04 24             	mov    %eax,(%esp)
 85bc1ae:	e8 bb f7 ff ff       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 85bc1b3:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc1b6:	89 04 24             	mov    %eax,(%esp)
 85bc1b9:	e8 86 fe ff ff       	call   85bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>
 85bc1be:	e9 8c 00 00 00       	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc1c3:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85bc1ca:	00 
 85bc1cb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc1ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc1d2:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc1d5:	89 04 24             	mov    %eax,(%esp)
 85bc1d8:	e8 3f f7 ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bc1dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc1e0:	89 04 24             	mov    %eax,(%esp)
 85bc1e3:	e8 20 f9 ff ff       	call   85bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>
 85bc1e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85bc1ef:	00 
 85bc1f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc1f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc1f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc1fa:	89 04 24             	mov    %eax,(%esp)
 85bc1fd:	e8 1a f7 ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bc202:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc209:	00 
 85bc20a:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc20d:	89 04 24             	mov    %eax,(%esp)
 85bc210:	e8 59 f7 ff ff       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 85bc215:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85bc21c:	00 
 85bc21d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc220:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc224:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc227:	89 04 24             	mov    %eax,(%esp)
 85bc22a:	e8 ed f6 ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bc22f:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc232:	89 04 24             	mov    %eax,(%esp)
 85bc235:	e8 7e f9 ff ff       	call   85bbbb8 <_ZN14CPartyTelePort16process_teleportEv>
 85bc23a:	eb 13                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc23c:	90                   	nop
 85bc23d:	eb 10                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc23f:	90                   	nop
 85bc240:	eb 0d                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc242:	90                   	nop
 85bc243:	eb 0a                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc245:	90                   	nop
 85bc246:	eb 07                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc248:	90                   	nop
 85bc249:	eb 04                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc24b:	90                   	nop
 85bc24c:	eb 01                	jmp    85bc24f <_ZN14CPartyTelePort30process_leave_user_at_teleportEP5CUser+0x1af>
 85bc24e:	90                   	nop
 85bc24f:	c9                   	leave
 85bc250:	c3                   	ret
 85bc251:	90                   	nop

```

```c
// CPartyTelePort::process_leave_user_at_teleport @ 0x85bc0a0

/* CPartyTelePort::process_leave_user_at_teleport(CUser*) */

void __thiscall CPartyTelePort::process_leave_user_at_teleport(CPartyTelePort *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  CUser *pCVar3;
  
  if (((((*(int *)this != 0) && (cVar1 = get_teleport_state(this), -1 < cVar1)) &&
       (cVar1 = get_teleport_state(this), cVar1 < '\x04')) &&
      ((iVar2 = CUser::get_state(param_1), iVar2 == 3 &&
       (cVar1 = get_teleport_state(this), cVar1 != -1)))) &&
     ((iVar2 = CParty::GetMemberSlotNo(*(CParty **)this,param_1), -1 < iVar2 &&
      ((iVar2 < 4 && (cVar1 = CParty::checkValidUser(*(CParty **)this,iVar2), cVar1 == '\x01'))))))
  {
    pCVar3 = (CUser *)CParty::getManager(*(CParty **)this);
    if (pCVar3 == param_1) {
      set_teleport_member_state(this,iVar2,'\0');
      set_teleport_state(this,'\x02');
      send_teleport_status(this,'\b');
      reset_teleport_data(this);
    }
    else {
      set_teleport_member_state(this,iVar2,'\x04');
      check_cur_teleport_state(this);
      set_teleport_member_state(this,iVar2,'\0');
      send_teleport_status(this,'\0');
      set_teleport_member_state(this,iVar2,'\x04');
      process_teleport(this);
    }
  }
  return;
}

```

---

## process_teleport

```asm
// === 085bbbb8 CPartyTelePort::process_teleport  [0x085bbbb8-0x85bc043] ===
 85bbbb8:	55                   	push   %ebp
 85bbbb9:	89 e5                	mov    %esp,%ebp
 85bbbbb:	57                   	push   %edi
 85bbbbc:	56                   	push   %esi
 85bbbbd:	53                   	push   %ebx
 85bbbbe:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 85bbbc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbbc7:	8b 00                	mov    (%eax),%eax
 85bbbc9:	85 c0                	test   %eax,%eax
 85bbbcb:	75 0a                	jne    85bbbd7 <_ZN14CPartyTelePort16process_teleportEv+0x1f>
 85bbbcd:	b8 00 00 00 00       	mov    $0x0,%eax
 85bbbd2:	e9 61 04 00 00       	jmp    85bc038 <_ZN14CPartyTelePort16process_teleportEv+0x480>
 85bbbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbbda:	89 04 24             	mov    %eax,(%esp)
 85bbbdd:	e8 26 ff ff ff       	call   85bbb08 <_ZN14CPartyTelePort24check_cur_teleport_stateEv>
 85bbbe2:	88 45 cb             	mov    %al,-0x35(%ebp)
 85bbbe5:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85bbbec:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 85bbbf3:	80 7d cb 00          	cmpb   $0x0,-0x35(%ebp)
 85bbbf7:	0f 84 5b 03 00 00    	je     85bbf58 <_ZN14CPartyTelePort16process_teleportEv+0x3a0>
 85bbbfd:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 85bbc04:	e9 5b 01 00 00       	jmp    85bbd64 <_ZN14CPartyTelePort16process_teleportEv+0x1ac>
 85bbc09:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc0c:	8b 00                	mov    (%eax),%eax
 85bbc0e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85bbc11:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbc15:	89 04 24             	mov    %eax,(%esp)
 85bbc18:	e8 4b 9c b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bbc1d:	83 f0 01             	xor    $0x1,%eax
 85bbc20:	84 c0                	test   %al,%al
 85bbc22:	0f 85 34 01 00 00    	jne    85bbd5c <_ZN14CPartyTelePort16process_teleportEv+0x1a4>
 85bbc28:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85bbc2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbc2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc32:	89 04 24             	mov    %eax,(%esp)
 85bbc35:	e8 18 06 00 00       	call   85bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>
 85bbc3a:	3c 04                	cmp    $0x4,%al
 85bbc3c:	0f 94 c0             	sete   %al
 85bbc3f:	84 c0                	test   %al,%al
 85bbc41:	0f 85 18 01 00 00    	jne    85bbd5f <_ZN14CPartyTelePort16process_teleportEv+0x1a7>
 85bbc47:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc4a:	8b 00                	mov    (%eax),%eax
 85bbc4c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85bbc4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbc53:	89 04 24             	mov    %eax,(%esp)
 85bbc56:	e8 09 9b b8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85bbc5b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85bbc5e:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 85bbc62:	0f 84 f8 00 00 00    	je     85bbd60 <_ZN14CPartyTelePort16process_teleportEv+0x1a8>
 85bbc68:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc6b:	89 04 24             	mov    %eax,(%esp)
 85bbc6e:	e8 15 3a 00 00       	call   85bf688 <_ZN14CPartyTelePort22get_teleport_directionEv>
 85bbc73:	0f b6 c0             	movzbl %al,%eax
 85bbc76:	89 45 88             	mov    %eax,-0x78(%ebp)
 85bbc79:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc7c:	89 04 24             	mov    %eax,(%esp)
 85bbc7f:	e8 f8 39 00 00       	call   85bf67c <_ZN14CPartyTelePort17get_teleport_posyEv>
 85bbc84:	98                   	cwtl
 85bbc85:	89 45 8c             	mov    %eax,-0x74(%ebp)
 85bbc88:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc8b:	89 04 24             	mov    %eax,(%esp)
 85bbc8e:	e8 dd 39 00 00       	call   85bf670 <_ZN14CPartyTelePort17get_teleport_posxEv>
 85bbc93:	0f bf f8             	movswl %ax,%edi
 85bbc96:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbc99:	89 04 24             	mov    %eax,(%esp)
 85bbc9c:	e8 c3 39 00 00       	call   85bf664 <_ZN14CPartyTelePort23get_teleport_area_indexEv>
 85bbca1:	0f b6 f0             	movzbl %al,%esi
 85bbca4:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbca7:	89 04 24             	mov    %eax,(%esp)
 85bbcaa:	e8 a9 39 00 00       	call   85bf658 <_ZN14CPartyTelePort20get_teleport_villageEv>
 85bbcaf:	0f b6 d8             	movzbl %al,%ebx
 85bbcb2:	e8 f0 e6 b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85bbcb7:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 85bbcbe:	00 
 85bbcbf:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 85bbcc6:	00 
 85bbcc7:	8b 55 88             	mov    -0x78(%ebp),%edx
 85bbcca:	89 54 24 18          	mov    %edx,0x18(%esp)
 85bbcce:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85bbcd1:	89 54 24 14          	mov    %edx,0x14(%esp)
 85bbcd5:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85bbcd9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85bbcdd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85bbce1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85bbce4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbce8:	89 04 24             	mov    %eax,(%esp)
 85bbceb:	e8 12 53 11 00       	call   86d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>
 85bbcf0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85bbcf3:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbcf6:	8b 00                	mov    (%eax),%eax
 85bbcf8:	89 04 24             	mov    %eax,(%esp)
 85bbcfb:	e8 80 9a b8 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 85bbd00:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 85bbd03:	0f 94 c0             	sete   %al
 85bbd06:	84 c0                	test   %al,%al
 85bbd08:	74 1d                	je     85bbd27 <_ZN14CPartyTelePort16process_teleportEv+0x16f>
 85bbd0a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bbd0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85bbd11:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bbd18:	00 
 85bbd19:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85bbd1c:	89 04 24             	mov    %eax,(%esp)
 85bbd1f:	e8 d4 22 0d 00       	call   868dff8 <_ZN5CUser20is_equip_aura_avatarEcRi>
 85bbd24:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85bbd27:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 85bbd2b:	7e 33                	jle    85bbd60 <_ZN14CPartyTelePort16process_teleportEv+0x1a8>
 85bbd2d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85bbd34:	00 
 85bbd35:	8b 45 d0             	mov    -0x30(%ebp),%eax
 85bbd38:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbd3c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbd3f:	89 04 24             	mov    %eax,(%esp)
 85bbd42:	e8 d5 fb ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bbd47:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85bbd4e:	00 
 85bbd4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbd52:	89 04 24             	mov    %eax,(%esp)
 85bbd55:	e8 a0 1a c7 ff       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 85bbd5a:	eb 17                	jmp    85bbd73 <_ZN14CPartyTelePort16process_teleportEv+0x1bb>
 85bbd5c:	90                   	nop
 85bbd5d:	eb 01                	jmp    85bbd60 <_ZN14CPartyTelePort16process_teleportEv+0x1a8>
 85bbd5f:	90                   	nop
 85bbd60:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 85bbd64:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 85bbd68:	0f 9e c0             	setle  %al
 85bbd6b:	84 c0                	test   %al,%al
 85bbd6d:	0f 85 96 fe ff ff    	jne    85bbc09 <_ZN14CPartyTelePort16process_teleportEv+0x51>
 85bbd73:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbd76:	89 04 24             	mov    %eax,(%esp)
 85bbd79:	e8 70 1a c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bbd7e:	3c 01                	cmp    $0x1,%al
 85bbd80:	0f 94 c0             	sete   %al
 85bbd83:	84 c0                	test   %al,%al
 85bbd85:	0f 84 b8 01 00 00    	je     85bbf43 <_ZN14CPartyTelePort16process_teleportEv+0x38b>
 85bbd8b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bbd92:	00 
 85bbd93:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbd96:	89 04 24             	mov    %eax,(%esp)
 85bbd99:	e8 12 05 00 00       	call   85bc2b0 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi>
 85bbd9e:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85bbda5:	e9 75 01 00 00       	jmp    85bbf1f <_ZN14CPartyTelePort16process_teleportEv+0x367>
 85bbdaa:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbdad:	8b 00                	mov    (%eax),%eax
 85bbdaf:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85bbdb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbdb6:	89 04 24             	mov    %eax,(%esp)
 85bbdb9:	e8 aa 9a b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bbdbe:	83 f0 01             	xor    $0x1,%eax
 85bbdc1:	84 c0                	test   %al,%al
 85bbdc3:	0f 85 4e 01 00 00    	jne    85bbf17 <_ZN14CPartyTelePort16process_teleportEv+0x35f>
 85bbdc9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85bbdcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbdd0:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbdd3:	89 04 24             	mov    %eax,(%esp)
 85bbdd6:	e8 77 04 00 00       	call   85bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>
 85bbddb:	3c 04                	cmp    $0x4,%al
 85bbddd:	0f 94 c0             	sete   %al
 85bbde0:	84 c0                	test   %al,%al
 85bbde2:	0f 85 32 01 00 00    	jne    85bbf1a <_ZN14CPartyTelePort16process_teleportEv+0x362>
 85bbde8:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbdeb:	8b 00                	mov    (%eax),%eax
 85bbded:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85bbdf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbdf4:	89 04 24             	mov    %eax,(%esp)
 85bbdf7:	e8 68 99 b8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85bbdfc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85bbdff:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85bbe03:	0f 84 12 01 00 00    	je     85bbf1b <_ZN14CPartyTelePort16process_teleportEv+0x363>
 85bbe09:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85bbe0c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bbe13:	00 
 85bbe14:	89 04 24             	mov    %eax,(%esp)
 85bbe17:	e8 54 00 0d 00       	call   868be70 <_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb>
 85bbe1c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbe1f:	89 04 24             	mov    %eax,(%esp)
 85bbe22:	e8 61 38 00 00       	call   85bf688 <_ZN14CPartyTelePort22get_teleport_directionEv>
 85bbe27:	0f b6 c0             	movzbl %al,%eax
 85bbe2a:	89 45 90             	mov    %eax,-0x70(%ebp)
 85bbe2d:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbe30:	89 04 24             	mov    %eax,(%esp)
 85bbe33:	e8 44 38 00 00       	call   85bf67c <_ZN14CPartyTelePort17get_teleport_posyEv>
 85bbe38:	98                   	cwtl
 85bbe39:	89 45 94             	mov    %eax,-0x6c(%ebp)
 85bbe3c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbe3f:	89 04 24             	mov    %eax,(%esp)
 85bbe42:	e8 29 38 00 00       	call   85bf670 <_ZN14CPartyTelePort17get_teleport_posxEv>
 85bbe47:	0f bf f8             	movswl %ax,%edi
 85bbe4a:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbe4d:	89 04 24             	mov    %eax,(%esp)
 85bbe50:	e8 0f 38 00 00       	call   85bf664 <_ZN14CPartyTelePort23get_teleport_area_indexEv>
 85bbe55:	0f b6 f0             	movzbl %al,%esi
 85bbe58:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbe5b:	89 04 24             	mov    %eax,(%esp)
 85bbe5e:	e8 f5 37 00 00       	call   85bf658 <_ZN14CPartyTelePort20get_teleport_villageEv>
 85bbe63:	0f b6 d8             	movzbl %al,%ebx
 85bbe66:	e8 3c e5 b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85bbe6b:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 85bbe72:	00 
 85bbe73:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 85bbe7a:	00 
 85bbe7b:	c7 44 24 20 01 00 00 	movl   $0x1,0x20(%esp)
 85bbe82:	00 
 85bbe83:	c7 44 24 1c 01 00 00 	movl   $0x1,0x1c(%esp)
 85bbe8a:	00 
 85bbe8b:	8b 55 90             	mov    -0x70(%ebp),%edx
 85bbe8e:	89 54 24 18          	mov    %edx,0x18(%esp)
 85bbe92:	8b 55 94             	mov    -0x6c(%ebp),%edx
 85bbe95:	89 54 24 14          	mov    %edx,0x14(%esp)
 85bbe99:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85bbe9d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85bbea1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85bbea5:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85bbea8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbeac:	89 04 24             	mov    %eax,(%esp)
 85bbeaf:	e8 d0 9b 10 00       	call   86c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>
 85bbeb4:	83 f0 01             	xor    $0x1,%eax
 85bbeb7:	84 c0                	test   %al,%al
 85bbeb9:	74 47                	je     85bbf02 <_ZN14CPartyTelePort16process_teleportEv+0x34a>
 85bbebb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85bbebe:	89 04 24             	mov    %eax,(%esp)
 85bbec1:	e8 88 fd b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85bbec6:	89 c3                	mov    %eax,%ebx
 85bbec8:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85bbecf:	00 
 85bbed0:	c7 44 24 08 f9 43 00 	movl   $0x43f9,0x8(%esp)
 85bbed7:	00 
 85bbed8:	c7 44 24 04 20 b2 cb 	movl   $0x8cbb220,0x4(%esp)
 85bbedf:	08 
 85bbee0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85bbee3:	89 04 24             	mov    %eax,(%esp)
 85bbee6:	e8 2d 38 f9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85bbeeb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85bbeef:	c7 44 24 04 7c a3 cb 	movl   $0x8cba37c,0x4(%esp)
 85bbef6:	08 
 85bbef7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85bbefa:	89 04 24             	mov    %eax,(%esp)
 85bbefd:	e8 86 38 f9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85bbf02:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85bbf05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bbf0c:	00 
 85bbf0d:	89 04 24             	mov    %eax,(%esp)
 85bbf10:	e8 5b ff 0c 00       	call   868be70 <_ZN15CUserCharacInfo28set_charac_visible_teleport_Eb>
 85bbf15:	eb 04                	jmp    85bbf1b <_ZN14CPartyTelePort16process_teleportEv+0x363>
 85bbf17:	90                   	nop
 85bbf18:	eb 01                	jmp    85bbf1b <_ZN14CPartyTelePort16process_teleportEv+0x363>
 85bbf1a:	90                   	nop
 85bbf1b:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85bbf1f:	83 7d d8 03          	cmpl   $0x3,-0x28(%ebp)
 85bbf23:	0f 9e c0             	setle  %al
 85bbf26:	84 c0                	test   %al,%al
 85bbf28:	0f 85 7c fe ff ff    	jne    85bbdaa <_ZN14CPartyTelePort16process_teleportEv+0x1f2>
 85bbf2e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85bbf35:	00 
 85bbf36:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbf39:	89 04 24             	mov    %eax,(%esp)
 85bbf3c:	e8 0b 07 00 00       	call   85bc64c <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi>
 85bbf41:	eb 15                	jmp    85bbf58 <_ZN14CPartyTelePort16process_teleportEv+0x3a0>
 85bbf43:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85bbf46:	0f b6 c0             	movzbl %al,%eax
 85bbf49:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbf4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbf50:	89 04 24             	mov    %eax,(%esp)
 85bbf53:	e8 16 fa ff ff       	call   85bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>
 85bbf58:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbf5b:	89 04 24             	mov    %eax,(%esp)
 85bbf5e:	e8 8b 18 c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bbf63:	3c 01                	cmp    $0x1,%al
 85bbf65:	0f 94 c0             	sete   %al
 85bbf68:	84 c0                	test   %al,%al
 85bbf6a:	0f 84 c4 00 00 00    	je     85bc034 <_ZN14CPartyTelePort16process_teleportEv+0x47c>
 85bbf70:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbf73:	89 04 24             	mov    %eax,(%esp)
 85bbf76:	e8 c9 00 00 00       	call   85bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>
 85bbf7b:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbf7e:	8b 00                	mov    (%eax),%eax
 85bbf80:	89 04 24             	mov    %eax,(%esp)
 85bbf83:	e8 f8 97 b8 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 85bbf88:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85bbf8b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85bbf8f:	0f 84 9f 00 00 00    	je     85bc034 <_ZN14CPartyTelePort16process_teleportEv+0x47c>
 85bbf95:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 85bbf9c:	e8 fd fc b0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 85bbfa1:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 85bbfa4:	01 d0                	add    %edx,%eax
 85bbfa6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85bbfa9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bbfac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85bbfaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 85bbfb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bbfba:	00 
 85bbfbb:	89 04 24             	mov    %eax,(%esp)
 85bbfbe:	e8 cd 84 cc ff       	call   8284490 <_ZN15CUserCharacInfo28set_aura_avatar_option_valueEii>
 85bbfc3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bbfca:	00 
 85bbfcb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bbfce:	89 04 24             	mov    %eax,(%esp)
 85bbfd1:	e8 80 1e 0d 00       	call   868de56 <_ZN5CUser28get_aura_avatar_option_valueEi>
 85bbfd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85bbfda:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bbfe1:	00 
 85bbfe2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bbfe5:	89 04 24             	mov    %eax,(%esp)
 85bbfe8:	e8 1d 1e 0d 00       	call   868de0a <_ZN5CUser22UpdateAuraAvatarOptionEii>
 85bbfed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bbff0:	89 04 24             	mov    %eax,(%esp)
 85bbff3:	e8 56 fc b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85bbff8:	89 c3                	mov    %eax,%ebx
 85bbffa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85bc001:	00 
 85bc002:	c7 44 24 08 19 44 00 	movl   $0x4419,0x8(%esp)
 85bc009:	00 
 85bc00a:	c7 44 24 04 20 b2 cb 	movl   $0x8cbb220,0x4(%esp)
 85bc011:	08 
 85bc012:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85bc015:	89 04 24             	mov    %eax,(%esp)
 85bc018:	e8 fb 36 f9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85bc01d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85bc021:	c7 44 24 04 a0 a3 cb 	movl   $0x8cba3a0,0x4(%esp)
 85bc028:	08 
 85bc029:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85bc02c:	89 04 24             	mov    %eax,(%esp)
 85bc02f:	e8 54 37 f9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85bc034:	0f b6 45 cb          	movzbl -0x35(%ebp),%eax
 85bc038:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 85bc03e:	5b                   	pop    %ebx
 85bc03f:	5e                   	pop    %esi
 85bc040:	5f                   	pop    %edi
 85bc041:	5d                   	pop    %ebp
 85bc042:	c3                   	ret
 85bc043:	90                   	nop

```

```c
// CPartyTelePort::process_teleport @ 0x85bbbb8

/* CPartyTelePort::process_teleport() */

char __thiscall CPartyTelePort::process_teleport(CPartyTelePort *this)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  CUser *pCVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  GameWorld *this_00;
  int iVar9;
  undefined4 uVar10;
  int local_60;
  cMyTrace local_5c [16];
  cMyTrace local_4c [19];
  char local_39;
  int local_38;
  int local_34;
  CUser *local_30;
  int local_2c;
  CUserCharacInfo *local_28;
  CUserCharacInfo *local_24;
  int local_20;
  
  if (*(int *)this == 0) {
    local_39 = '\0';
  }
  else {
    local_39 = check_cur_teleport_state(this);
    local_38 = 0;
    local_60 = 0;
    if (local_39 != '\0') {
      for (local_34 = 0; local_34 < 4; local_34 = local_34 + 1) {
        cVar2 = CParty::checkValidUser(*(CParty **)this,local_34);
        if (((cVar2 == '\x01') &&
            (cVar2 = get_teleport_member_state(this,local_34), cVar2 != '\x04')) &&
           (local_30 = (CUser *)CParty::get_user(*(CParty **)this,local_34),
           local_30 != (CUser *)0x0)) {
          bVar1 = (bool)get_teleport_direction(this);
          sVar3 = get_teleport_posy(this);
          sVar4 = get_teleport_posx(this);
          uVar6 = get_teleport_area_index(this);
          uVar7 = get_teleport_village(this);
          pCVar5 = (CUser *)G_GameWorld();
          local_38 = GameWorld::check_move_area
                               (pCVar5,(int)local_30,uVar7 & 0xff,uVar6 & 0xff,(int)sVar4,(int)sVar3
                                ,bVar1,1);
          pCVar5 = (CUser *)CParty::getManager(*(CParty **)this);
          if (pCVar5 == local_30) {
            local_38 = CUser::is_equip_aura_avatar(local_30,'\0',&local_60);
          }
          if (0 < local_38) {
            set_teleport_member_state(this,local_34,'\0');
            set_teleport_state(this,'\x02');
            break;
          }
        }
      }
      cVar2 = get_teleport_state(this);
      if (cVar2 == '\x01') {
        send_teleport_effect_at_different_place(this,1);
        for (local_2c = 0; local_2c < 4; local_2c = local_2c + 1) {
          cVar2 = CParty::checkValidUser(*(CParty **)this,local_2c);
          if (((cVar2 == '\x01') &&
              (cVar2 = get_teleport_member_state(this,local_2c), cVar2 != '\x04')) &&
             (local_28 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_2c),
             local_28 != (CUserCharacInfo *)0x0)) {
            CUserCharacInfo::set_charac_visible_teleport_(local_28,true);
            uVar6 = get_teleport_direction(this);
            sVar3 = get_teleport_posy(this);
            sVar4 = get_teleport_posx(this);
            uVar7 = get_teleport_area_index(this);
            uVar8 = get_teleport_village(this);
            this_00 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::move_area
                              (this_00,(CUser *)local_28,uVar8 & 0xff,uVar7 & 0xff,(int)sVar4,
                               (int)sVar3,uVar6 & 0xff,true,1,0,0);
            if (cVar2 != '\x01') {
              uVar10 = CUserCharacInfo::getCurCharacNo(local_28);
              cMyTrace::cMyTrace(local_5c,"bool CPartyTelePort::process_teleport()",0x43f9,5);
              cMyTrace::operator()(local_5c,"party_teleport_error:(char_no:%d)",uVar10);
            }
            CUserCharacInfo::set_charac_visible_teleport_(local_28,false);
          }
        }
        send_teleport_effect_at_equal_place(this,2);
      }
      else {
        send_teleport_status(this,(uchar)local_38);
      }
    }
    cVar2 = get_teleport_state(this);
    if (cVar2 == '\x01') {
      reset_teleport_data(this);
      local_24 = (CUserCharacInfo *)CParty::getManager(*(CParty **)this);
      if (local_24 != (CUserCharacInfo *)0x0) {
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 + local_60;
        CUserCharacInfo::set_aura_avatar_option_value(local_24,0,local_20);
        iVar9 = CUser::get_aura_avatar_option_value((CUser *)local_24,0);
        CUser::UpdateAuraAvatarOption((CUser *)local_24,0,iVar9);
        uVar10 = CUserCharacInfo::getCurCharacNo(local_24);
        cMyTrace::cMyTrace(local_4c,"bool CPartyTelePort::process_teleport()",0x4419,0);
        cMyTrace::operator()(local_4c,"party_teleport_success:(char_no:%d)",uVar10);
      }
    }
  }
  return local_39;
}

```

---

## reset_teleport_data

```asm
// === 085bc044 CPartyTelePort::reset_teleport_data  [0x085bc044-0x85bc09f] ===
 85bc044:	55                   	push   %ebp
 85bc045:	89 e5                	mov    %esp,%ebp
 85bc047:	83 ec 28             	sub    $0x28,%esp
 85bc04a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85bc051:	eb 1e                	jmp    85bc071 <_ZN14CPartyTelePort19reset_teleport_dataEv+0x2d>
 85bc053:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 85bc05a:	ff 
 85bc05b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc05e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc062:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc065:	89 04 24             	mov    %eax,(%esp)
 85bc068:	e8 af f8 ff ff       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bc06d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85bc071:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85bc075:	0f 9e c0             	setle  %al
 85bc078:	84 c0                	test   %al,%al
 85bc07a:	75 d7                	jne    85bc053 <_ZN14CPartyTelePort19reset_teleport_dataEv+0xf>
 85bc07c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc07f:	83 c0 04             	add    $0x4,%eax
 85bc082:	89 04 24             	mov    %eax,(%esp)
 85bc085:	e8 da 16 c7 ff       	call   822d764 <_ZN15stPartyTelePort5resetEv>
 85bc08a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85bc091:	ff 
 85bc092:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc095:	89 04 24             	mov    %eax,(%esp)
 85bc098:	e8 5d 17 c7 ff       	call   822d7fa <_ZN14CPartyTelePort18set_teleport_stateEc>
 85bc09d:	c9                   	leave
 85bc09e:	c3                   	ret
 85bc09f:	90                   	nop

```

```c
// CPartyTelePort::reset_teleport_data @ 0x85bc044

/* CPartyTelePort::reset_teleport_data() */

void __thiscall CPartyTelePort::reset_teleport_data(CPartyTelePort *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    set_teleport_member_state(this,local_10,-1);
  }
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  set_teleport_state(this,-1);
  return;
}

```

---

## send_teleport_effect_at_different_place

```asm
// === 085bc2b0 CPartyTelePort::send_teleport_effect_at_different_place  [0x085bc2b0-0x85bc64b] ===
 85bc2b0:	55                   	push   %ebp
 85bc2b1:	89 e5                	mov    %esp,%ebp
 85bc2b3:	56                   	push   %esi
 85bc2b4:	53                   	push   %ebx
 85bc2b5:	83 ec 70             	sub    $0x70,%esp
 85bc2b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc2bb:	8b 00                	mov    (%eax),%eax
 85bc2bd:	85 c0                	test   %eax,%eax
 85bc2bf:	0f 84 7b 03 00 00    	je     85bc640 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x390>
 85bc2c5:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc2c8:	89 04 24             	mov    %eax,(%esp)
 85bc2cb:	e8 2c 42 00 00       	call   85c04fc <_ZNSt6vectorI11effect_dataSaIS0_EEC1Ev>
 85bc2d0:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85bc2d7:	e9 c1 01 00 00       	jmp    85bc49d <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x1ed>
 85bc2dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc2df:	8b 00                	mov    (%eax),%eax
 85bc2e1:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85bc2e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc2e8:	89 04 24             	mov    %eax,(%esp)
 85bc2eb:	e8 78 95 b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bc2f0:	83 f0 01             	xor    $0x1,%eax
 85bc2f3:	84 c0                	test   %al,%al
 85bc2f5:	0f 85 9d 01 00 00    	jne    85bc498 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x1e8>
 85bc2fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc2fe:	8b 00                	mov    (%eax),%eax
 85bc300:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85bc303:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc307:	89 04 24             	mov    %eax,(%esp)
 85bc30a:	e8 55 94 b8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85bc30f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85bc312:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85bc316:	0f 84 7d 01 00 00    	je     85bc499 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x1e9>
 85bc31c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc31f:	8d 55 cc             	lea    -0x34(%ebp),%edx
 85bc322:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc326:	89 04 24             	mov    %eax,(%esp)
 85bc329:	e8 40 42 00 00       	call   85c056e <_ZNSt6vectorI11effect_dataSaIS0_EE5beginEv>
 85bc32e:	83 ec 04             	sub    $0x4,%esp
 85bc331:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85bc334:	8d 55 cc             	lea    -0x34(%ebp),%edx
 85bc337:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc33b:	89 04 24             	mov    %eax,(%esp)
 85bc33e:	e8 4f 42 00 00       	call   85c0592 <_ZNSt6vectorI11effect_dataSaIS0_EE3endEv>
 85bc343:	83 ec 04             	sub    $0x4,%esp
 85bc346:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 85bc34a:	e9 8f 00 00 00       	jmp    85bc3de <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x12e>
 85bc34f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc352:	89 04 24             	mov    %eax,(%esp)
 85bc355:	e8 8a 42 00 00       	call   85c05e4 <_ZNK9__gnu_cxx17__normal_iteratorIP11effect_dataSt6vectorIS1_SaIS1_EEEptEv>
 85bc35a:	8b 58 04             	mov    0x4(%eax),%ebx
 85bc35d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc364:	00 
 85bc365:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc368:	89 04 24             	mov    %eax,(%esp)
 85bc36b:	e8 4e 50 0c 00       	call   86813be <_ZN5CUser8get_areaEb>
 85bc370:	39 c3                	cmp    %eax,%ebx
 85bc372:	75 24                	jne    85bc398 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0xe8>
 85bc374:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc377:	89 04 24             	mov    %eax,(%esp)
 85bc37a:	e8 65 42 00 00       	call   85c05e4 <_ZNK9__gnu_cxx17__normal_iteratorIP11effect_dataSt6vectorIS1_SaIS1_EEEptEv>
 85bc37f:	0f b6 18             	movzbl (%eax),%ebx
 85bc382:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc385:	89 04 24             	mov    %eax,(%esp)
 85bc388:	e8 d7 91 08 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85bc38d:	38 c3                	cmp    %al,%bl
 85bc38f:	75 07                	jne    85bc398 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0xe8>
 85bc391:	b8 01 00 00 00       	mov    $0x1,%eax
 85bc396:	eb 05                	jmp    85bc39d <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0xed>
 85bc398:	b8 00 00 00 00       	mov    $0x0,%eax
 85bc39d:	84 c0                	test   %al,%al
 85bc39f:	74 32                	je     85bc3d3 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x123>
 85bc3a1:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 85bc3a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc3a8:	89 04 24             	mov    %eax,(%esp)
 85bc3ab:	e8 cc df b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85bc3b0:	66 89 45 d8          	mov    %ax,-0x28(%ebp)
 85bc3b4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc3b7:	89 04 24             	mov    %eax,(%esp)
 85bc3ba:	e8 25 42 00 00       	call   85c05e4 <_ZNK9__gnu_cxx17__normal_iteratorIP11effect_dataSt6vectorIS1_SaIS1_EEEptEv>
 85bc3bf:	8d 50 08             	lea    0x8(%eax),%edx
 85bc3c2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85bc3c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc3c9:	89 14 24             	mov    %edx,(%esp)
 85bc3cc:	e8 1d 42 00 00       	call   85c05ee <_ZNSt6vectorItSaItEE9push_backEOt>
 85bc3d1:	eb 25                	jmp    85bc3f8 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x148>
 85bc3d3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc3d6:	89 04 24             	mov    %eax,(%esp)
 85bc3d9:	e8 3c 42 00 00       	call   85c061a <_ZN9__gnu_cxx17__normal_iteratorIP11effect_dataSt6vectorIS1_SaIS1_EEEppEv>
 85bc3de:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85bc3e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc3e5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc3e8:	89 04 24             	mov    %eax,(%esp)
 85bc3eb:	e8 c8 41 00 00       	call   85c05b8 <_ZN9__gnu_cxxneIP11effect_dataSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85bc3f0:	84 c0                	test   %al,%al
 85bc3f2:	0f 85 57 ff ff ff    	jne    85bc34f <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x9f>
 85bc3f8:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 85bc3fc:	83 f0 01             	xor    $0x1,%eax
 85bc3ff:	84 c0                	test   %al,%al
 85bc401:	0f 84 92 00 00 00    	je     85bc499 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x1e9>
 85bc407:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85bc40a:	89 04 24             	mov    %eax,(%esp)
 85bc40d:	e8 2c 3b 00 00       	call   85bff3e <_ZN11effect_dataC1Ev>
 85bc412:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc419:	00 
 85bc41a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc41d:	89 04 24             	mov    %eax,(%esp)
 85bc420:	e8 99 4f 0c 00       	call   86813be <_ZN5CUser8get_areaEb>
 85bc425:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85bc428:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc42b:	89 04 24             	mov    %eax,(%esp)
 85bc42e:	e8 31 91 08 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85bc433:	88 45 b0             	mov    %al,-0x50(%ebp)
 85bc436:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85bc439:	89 04 24             	mov    %eax,(%esp)
 85bc43c:	e8 3b df b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85bc441:	66 89 45 da          	mov    %ax,-0x26(%ebp)
 85bc445:	8d 45 da             	lea    -0x26(%ebp),%eax
 85bc448:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc44c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85bc44f:	83 c0 08             	add    $0x8,%eax
 85bc452:	89 04 24             	mov    %eax,(%esp)
 85bc455:	e8 94 41 00 00       	call   85c05ee <_ZNSt6vectorItSaItEE9push_backEOt>
 85bc45a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85bc45d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc461:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc464:	89 04 24             	mov    %eax,(%esp)
 85bc467:	e8 c4 41 00 00       	call   85c0630 <_ZNSt6vectorI11effect_dataSaIS0_EE9push_backERKS0_>
 85bc46c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85bc473:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85bc476:	89 04 24             	mov    %eax,(%esp)
 85bc479:	e8 d6 3a 00 00       	call   85bff54 <_ZN11effect_dataD1Ev>
 85bc47e:	eb 19                	jmp    85bc499 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x1e9>
 85bc480:	89 d3                	mov    %edx,%ebx
 85bc482:	89 c6                	mov    %eax,%esi
 85bc484:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85bc487:	89 04 24             	mov    %eax,(%esp)
 85bc48a:	e8 c5 3a 00 00       	call   85bff54 <_ZN11effect_dataD1Ev>
 85bc48f:	89 f0                	mov    %esi,%eax
 85bc491:	89 da                	mov    %ebx,%edx
 85bc493:	e9 80 01 00 00       	jmp    85bc618 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x368>
 85bc498:	90                   	nop
 85bc499:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85bc49d:	83 7d dc 03          	cmpl   $0x3,-0x24(%ebp)
 85bc4a1:	0f 9e c0             	setle  %al
 85bc4a4:	84 c0                	test   %al,%al
 85bc4a6:	0f 85 30 fe ff ff    	jne    85bc2dc <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x2c>
 85bc4ac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85bc4b3:	e9 45 01 00 00       	jmp    85bc5fd <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x34d>
 85bc4b8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc4bb:	89 04 24             	mov    %eax,(%esp)
 85bc4be:	e8 89 18 fd ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85bc4c3:	c7 44 24 08 7b 01 00 	movl   $0x17b,0x8(%esp)
 85bc4ca:	00 
 85bc4cb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc4d2:	00 
 85bc4d3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc4d6:	89 04 24             	mov    %eax,(%esp)
 85bc4d9:	e8 1e f4 b0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85bc4de:	8b 45 0c             	mov    0xc(%ebp),%eax
 85bc4e1:	0f be c0             	movsbl %al,%eax
 85bc4e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc4e8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc4eb:	89 04 24             	mov    %eax,(%esp)
 85bc4ee:	e8 2d f4 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bc4f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85bc4f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc4fa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc4fd:	89 04 24             	mov    %eax,(%esp)
 85bc500:	e8 c1 41 00 00       	call   85c06c6 <_ZNSt6vectorI11effect_dataSaIS0_EEixEj>
 85bc505:	83 c0 08             	add    $0x8,%eax
 85bc508:	89 04 24             	mov    %eax,(%esp)
 85bc50b:	e8 cc bf ba ff       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 85bc510:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85bc513:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85bc516:	0f be c0             	movsbl %al,%eax
 85bc519:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc51d:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc520:	89 04 24             	mov    %eax,(%esp)
 85bc523:	e8 f8 f3 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bc528:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85bc52f:	eb 3d                	jmp    85bc56e <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x2be>
 85bc531:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85bc534:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85bc537:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc53b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc53e:	89 04 24             	mov    %eax,(%esp)
 85bc541:	e8 80 41 00 00       	call   85c06c6 <_ZNSt6vectorI11effect_dataSaIS0_EEixEj>
 85bc546:	83 c0 08             	add    $0x8,%eax
 85bc549:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85bc54d:	89 04 24             	mov    %eax,(%esp)
 85bc550:	e8 75 bf ba ff       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 85bc555:	0f b7 00             	movzwl (%eax),%eax
 85bc558:	0f b7 c0             	movzwl %ax,%eax
 85bc55b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc55f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc562:	89 04 24             	mov    %eax,(%esp)
 85bc565:	e8 3a d9 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85bc56a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85bc56e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc571:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85bc574:	0f 9c c0             	setl   %al
 85bc577:	84 c0                	test   %al,%al
 85bc579:	75 b6                	jne    85bc531 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x281>
 85bc57b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bc582:	00 
 85bc583:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc586:	89 04 24             	mov    %eax,(%esp)
 85bc589:	e8 ca f3 b0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85bc58e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85bc591:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc595:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc598:	89 04 24             	mov    %eax,(%esp)
 85bc59b:	e8 26 41 00 00       	call   85c06c6 <_ZNSt6vectorI11effect_dataSaIS0_EEixEj>
 85bc5a0:	8b 70 04             	mov    0x4(%eax),%esi
 85bc5a3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85bc5a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc5aa:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc5ad:	89 04 24             	mov    %eax,(%esp)
 85bc5b0:	e8 11 41 00 00       	call   85c06c6 <_ZNSt6vectorI11effect_dataSaIS0_EEixEj>
 85bc5b5:	0f b6 00             	movzbl (%eax),%eax
 85bc5b8:	0f be d8             	movsbl %al,%ebx
 85bc5bb:	e8 e7 dd b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85bc5c0:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 85bc5c3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85bc5c7:	89 74 24 08          	mov    %esi,0x8(%esp)
 85bc5cb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85bc5cf:	89 04 24             	mov    %eax,(%esp)
 85bc5d2:	e8 91 bb 10 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 85bc5d7:	eb 15                	jmp    85bc5ee <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x33e>
 85bc5d9:	89 d3                	mov    %edx,%ebx
 85bc5db:	89 c6                	mov    %eax,%esi
 85bc5dd:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc5e0:	89 04 24             	mov    %eax,(%esp)
 85bc5e3:	e8 98 18 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bc5e8:	89 f0                	mov    %esi,%eax
 85bc5ea:	89 da                	mov    %ebx,%edx
 85bc5ec:	eb 2a                	jmp    85bc618 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x368>
 85bc5ee:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85bc5f1:	89 04 24             	mov    %eax,(%esp)
 85bc5f4:	e8 87 18 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bc5f9:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85bc5fd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc600:	89 04 24             	mov    %eax,(%esp)
 85bc603:	e8 9c 40 00 00       	call   85c06a4 <_ZNKSt6vectorI11effect_dataSaIS0_EE4sizeEv>
 85bc608:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85bc60b:	0f 9f c0             	setg   %al
 85bc60e:	84 c0                	test   %al,%al
 85bc610:	0f 85 a2 fe ff ff    	jne    85bc4b8 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x208>
 85bc616:	eb 1b                	jmp    85bc633 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x383>
 85bc618:	89 d3                	mov    %edx,%ebx
 85bc61a:	89 c6                	mov    %eax,%esi
 85bc61c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc61f:	89 04 24             	mov    %eax,(%esp)
 85bc622:	e8 e9 3e 00 00       	call   85c0510 <_ZNSt6vectorI11effect_dataSaIS0_EED1Ev>
 85bc627:	89 f0                	mov    %esi,%eax
 85bc629:	89 da                	mov    %ebx,%edx
 85bc62b:	89 04 24             	mov    %eax,(%esp)
 85bc62e:	e8 1d 71 52 00       	call   8ae3750 <_Unwind_Resume>
 85bc633:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85bc636:	89 04 24             	mov    %eax,(%esp)
 85bc639:	e8 d2 3e 00 00       	call   85c0510 <_ZNSt6vectorI11effect_dataSaIS0_EED1Ev>
 85bc63e:	eb 01                	jmp    85bc641 <_ZN14CPartyTelePort39send_teleport_effect_at_different_placeEi+0x391>
 85bc640:	90                   	nop
 85bc641:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85bc644:	83 c4 00             	add    $0x0,%esp
 85bc647:	5b                   	pop    %ebx
 85bc648:	5e                   	pop    %esi
 85bc649:	5d                   	pop    %ebp
 85bc64a:	c3                   	ret
 85bc64b:	90                   	nop

```

```c
// CPartyTelePort::send_teleport_effect_at_different_place @ 0x85bc2b0

/* CPartyTelePort::send_teleport_effect_at_different_place(int) */

void __thiscall
CPartyTelePort::send_teleport_effect_at_different_place(CPartyTelePort *this,int param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  char *pcVar7;
  GameWorld *this_00;
  int iVar8;
  PacketGuard local_60 [12];
  effect_data local_54 [4];
  undefined4 local_50;
  vector<unsigned_short,std::allocator<unsigned_short>> avStack_4c [12];
  __normal_iterator local_40 [4];
  __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>> local_3c [4];
  vector<effect_data,std::allocator<effect_data>> local_38 [12];
  ushort local_2c;
  ushort local_2a;
  int local_28;
  CUser *local_24;
  char local_1d;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  
  if (*(int *)this != 0) {
    std::vector<effect_data,std::allocator<effect_data>>::vector(local_38);
    for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
                    /* try { // try from 085bc2eb to 085bc411 has its CatchHandler @ 085bc618 */
      cVar2 = CParty::checkValidUser(*(CParty **)this,local_28);
      if (cVar2 == '\x01') {
        local_24 = (CUser *)CParty::get_user(*(CParty **)this,local_28);
        if (local_24 != (CUser *)0x0) {
          std::vector<effect_data,std::allocator<effect_data>>::begin();
          std::vector<effect_data,std::allocator<effect_data>>::end();
          local_1d = '\0';
          while( true ) {
            bVar4 = __gnu_cxx::operator!=(local_3c,local_40);
            if (!bVar4) break;
            iVar8 = __gnu_cxx::
                    __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                    ::operator->(local_3c);
            iVar8 = *(int *)(iVar8 + 4);
            iVar5 = CUser::get_area(local_24,false);
            if (iVar8 == iVar5) {
              pcVar7 = (char *)__gnu_cxx::
                               __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                               ::operator->(local_3c);
              cVar2 = *pcVar7;
              cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_24);
              if (cVar2 != cVar3) goto LAB_085bc398;
              bVar4 = true;
            }
            else {
LAB_085bc398:
              bVar4 = false;
            }
            if (bVar4) {
              local_1d = '\x01';
              local_2c = CUser::get_unique_id(local_24);
              iVar8 = __gnu_cxx::
                      __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>
                      ::operator->(local_3c);
              std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                        ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8),
                         &local_2c);
              break;
            }
            __gnu_cxx::
            __normal_iterator<effect_data*,std::vector<effect_data,std::allocator<effect_data>>>::
            operator++(local_3c);
          }
          if (local_1d != '\x01') {
            effect_data::effect_data(local_54);
                    /* try { // try from 085bc420 to 085bc46b has its CatchHandler @ 085bc480 */
            local_50 = CUser::get_area(local_24,false);
            local_54[0] = (effect_data)
                          CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_24);
            local_2a = CUser::get_unique_id(local_24);
            std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back
                      (avStack_4c,&local_2a);
            std::vector<effect_data,std::allocator<effect_data>>::push_back(local_38,local_54);
            local_1c = 0;
                    /* try { // try from 085bc479 to 085bc47d has its CatchHandler @ 085bc618 */
            effect_data::~effect_data(local_54);
          }
        }
      }
    }
    local_18 = 0;
    while( true ) {
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::size(local_38);
      if (iVar8 <= (int)local_18) break;
                    /* try { // try from 085bc4be to 085bc4c2 has its CatchHandler @ 085bc618 */
      PacketGuard::PacketGuard(local_60);
                    /* try { // try from 085bc4d9 to 085bc5d6 has its CatchHandler @ 085bc5d9 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_60,0,0x17b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)param_1);
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
      local_14 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_60,(int)(char)local_14);
      for (local_10 = 0; uVar1 = local_10, (int)local_10 < local_14; local_10 = local_10 + 1) {
        iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
        puVar6 = (ushort *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           ((vector<unsigned_short,std::allocator<unsigned_short>> *)(iVar8 + 8),
                            uVar1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_60,(uint)*puVar6);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_60,true);
      iVar8 = std::vector<effect_data,std::allocator<effect_data>>::operator[](local_38,local_18);
      iVar8 = *(int *)(iVar8 + 4);
      pcVar7 = (char *)std::vector<effect_data,std::allocator<effect_data>>::operator[]
                                 (local_38,local_18);
      cVar2 = *pcVar7;
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_to_area(this_00,(int)cVar2,iVar8,local_60);
                    /* try { // try from 085bc5f4 to 085bc5f8 has its CatchHandler @ 085bc618 */
      PacketGuard::~PacketGuard(local_60);
      local_18 = local_18 + 1;
    }
    std::vector<effect_data,std::allocator<effect_data>>::~vector(local_38);
  }
  return;
}

```

---

## send_teleport_effect_at_equal_place

```asm
// === 085bc64c CPartyTelePort::send_teleport_effect_at_equal_place  [0x085bc64c-0x85bc86d] ===
 85bc64c:	55                   	push   %ebp
 85bc64d:	89 e5                	mov    %esp,%ebp
 85bc64f:	56                   	push   %esi
 85bc650:	53                   	push   %ebx
 85bc651:	83 ec 40             	sub    $0x40,%esp
 85bc654:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc657:	8b 00                	mov    (%eax),%eax
 85bc659:	85 c0                	test   %eax,%eax
 85bc65b:	0f 84 ff 01 00 00    	je     85bc860 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x214>
 85bc661:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc664:	8b 00                	mov    (%eax),%eax
 85bc666:	89 04 24             	mov    %eax,(%esp)
 85bc669:	e8 12 91 b8 ff       	call   8145780 <_ZN6CParty10getManagerEv>
 85bc66e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85bc671:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85bc675:	0f 84 e8 01 00 00    	je     85bc863 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x217>
 85bc67b:	e8 27 dd b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85bc680:	89 04 24             	mov    %eax,(%esp)
 85bc683:	e8 60 5e b8 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85bc688:	84 c0                	test   %al,%al
 85bc68a:	0f 85 d6 01 00 00    	jne    85bc866 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x21a>
 85bc690:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc693:	89 04 24             	mov    %eax,(%esp)
 85bc696:	e8 b1 16 fd ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85bc69b:	c7 44 24 08 7b 01 00 	movl   $0x17b,0x8(%esp)
 85bc6a2:	00 
 85bc6a3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc6aa:	00 
 85bc6ab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc6ae:	89 04 24             	mov    %eax,(%esp)
 85bc6b1:	e8 46 f2 b0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85bc6b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85bc6b9:	0f be c0             	movsbl %al,%eax
 85bc6bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc6c0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc6c3:	89 04 24             	mov    %eax,(%esp)
 85bc6c6:	e8 55 f2 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bc6cb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc6ce:	89 04 24             	mov    %eax,(%esp)
 85bc6d1:	e8 4a bd ba ff       	call   8168420 <_ZNSt6vectorItSaItEEC1Ev>
 85bc6d6:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85bc6dd:	eb 60                	jmp    85bc73f <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0xf3>
 85bc6df:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc6e2:	8b 00                	mov    (%eax),%eax
 85bc6e4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85bc6e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc6eb:	89 04 24             	mov    %eax,(%esp)
 85bc6ee:	e8 75 91 b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bc6f3:	83 f0 01             	xor    $0x1,%eax
 85bc6f6:	84 c0                	test   %al,%al
 85bc6f8:	75 40                	jne    85bc73a <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0xee>
 85bc6fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85bc6fd:	8b 00                	mov    (%eax),%eax
 85bc6ff:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85bc702:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bc706:	89 04 24             	mov    %eax,(%esp)
 85bc709:	e8 56 90 b8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85bc70e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85bc711:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85bc715:	74 24                	je     85bc73b <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0xef>
 85bc717:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85bc71a:	89 04 24             	mov    %eax,(%esp)
 85bc71d:	e8 5a dc b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85bc722:	66 89 45 e2          	mov    %ax,-0x1e(%ebp)
 85bc726:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 85bc729:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc72d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc730:	89 04 24             	mov    %eax,(%esp)
 85bc733:	e8 b6 3e 00 00       	call   85c05ee <_ZNSt6vectorItSaItEE9push_backEOt>
 85bc738:	eb 01                	jmp    85bc73b <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0xef>
 85bc73a:	90                   	nop
 85bc73b:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85bc73f:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 85bc743:	0f 9e c0             	setle  %al
 85bc746:	84 c0                	test   %al,%al
 85bc748:	75 95                	jne    85bc6df <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x93>
 85bc74a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc74d:	89 04 24             	mov    %eax,(%esp)
 85bc750:	e8 87 bd ba ff       	call   81684dc <_ZNKSt6vectorItSaItEE4sizeEv>
 85bc755:	88 45 eb             	mov    %al,-0x15(%ebp)
 85bc758:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
 85bc75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc760:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc763:	89 04 24             	mov    %eax,(%esp)
 85bc766:	e8 b5 f1 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bc76b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85bc772:	eb 2b                	jmp    85bc79f <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x153>
 85bc774:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bc777:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc77b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc77e:	89 04 24             	mov    %eax,(%esp)
 85bc781:	e8 44 bd ba ff       	call   81684ca <_ZNSt6vectorItSaItEEixEj>
 85bc786:	0f b7 00             	movzwl (%eax),%eax
 85bc789:	0f b7 c0             	movzwl %ax,%eax
 85bc78c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bc790:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc793:	89 04 24             	mov    %eax,(%esp)
 85bc796:	e8 09 d7 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85bc79b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85bc79f:	0f be 45 eb          	movsbl -0x15(%ebp),%eax
 85bc7a3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85bc7a6:	0f 9f c0             	setg   %al
 85bc7a9:	84 c0                	test   %al,%al
 85bc7ab:	75 c7                	jne    85bc774 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x128>
 85bc7ad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bc7b4:	00 
 85bc7b5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc7b8:	89 04 24             	mov    %eax,(%esp)
 85bc7bb:	e8 98 f1 b0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85bc7c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85bc7c3:	89 04 24             	mov    %eax,(%esp)
 85bc7c6:	e8 c1 db b1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85bc7cb:	83 f8 03             	cmp    $0x3,%eax
 85bc7ce:	0f 94 c0             	sete   %al
 85bc7d1:	84 c0                	test   %al,%al
 85bc7d3:	74 56                	je     85bc82b <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x1df>
 85bc7d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bc7dc:	00 
 85bc7dd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85bc7e0:	89 04 24             	mov    %eax,(%esp)
 85bc7e3:	e8 d6 4b 0c 00       	call   86813be <_ZN5CUser8get_areaEb>
 85bc7e8:	89 c3                	mov    %eax,%ebx
 85bc7ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85bc7ed:	89 04 24             	mov    %eax,(%esp)
 85bc7f0:	e8 6f 8d 08 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85bc7f5:	0f be f0             	movsbl %al,%esi
 85bc7f8:	e8 aa db b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85bc7fd:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85bc800:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85bc804:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85bc808:	89 74 24 04          	mov    %esi,0x4(%esp)
 85bc80c:	89 04 24             	mov    %eax,(%esp)
 85bc80f:	e8 54 b9 10 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 85bc814:	eb 15                	jmp    85bc82b <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x1df>
 85bc816:	89 d3                	mov    %edx,%ebx
 85bc818:	89 c6                	mov    %eax,%esi
 85bc81a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc81d:	89 04 24             	mov    %eax,(%esp)
 85bc820:	e8 2b bb ba ff       	call   8168350 <_ZNSt6vectorItSaItEED1Ev>
 85bc825:	89 f0                	mov    %esi,%eax
 85bc827:	89 da                	mov    %ebx,%edx
 85bc829:	eb 0d                	jmp    85bc838 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x1ec>
 85bc82b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85bc82e:	89 04 24             	mov    %eax,(%esp)
 85bc831:	e8 1a bb ba ff       	call   8168350 <_ZNSt6vectorItSaItEED1Ev>
 85bc836:	eb 1b                	jmp    85bc853 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x207>
 85bc838:	89 d3                	mov    %edx,%ebx
 85bc83a:	89 c6                	mov    %eax,%esi
 85bc83c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc83f:	89 04 24             	mov    %eax,(%esp)
 85bc842:	e8 39 16 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bc847:	89 f0                	mov    %esi,%eax
 85bc849:	89 da                	mov    %ebx,%edx
 85bc84b:	89 04 24             	mov    %eax,(%esp)
 85bc84e:	e8 fd 6e 52 00       	call   8ae3750 <_Unwind_Resume>
 85bc853:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85bc856:	89 04 24             	mov    %eax,(%esp)
 85bc859:	e8 22 16 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bc85e:	eb 07                	jmp    85bc867 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x21b>
 85bc860:	90                   	nop
 85bc861:	eb 04                	jmp    85bc867 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x21b>
 85bc863:	90                   	nop
 85bc864:	eb 01                	jmp    85bc867 <_ZN14CPartyTelePort35send_teleport_effect_at_equal_placeEi+0x21b>
 85bc866:	90                   	nop
 85bc867:	83 c4 40             	add    $0x40,%esp
 85bc86a:	5b                   	pop    %ebx
 85bc86b:	5e                   	pop    %esi
 85bc86c:	5d                   	pop    %ebp
 85bc86d:	c3                   	ret

```

```c
// CPartyTelePort::send_teleport_effect_at_equal_place @ 0x85bc64c

/* CPartyTelePort::send_teleport_effect_at_equal_place(int) */

void __thiscall
CPartyTelePort::send_teleport_effect_at_equal_place(CPartyTelePort *this,int param_1)

{
  char cVar1;
  GameWorld *pGVar2;
  ushort *puVar3;
  int iVar4;
  vector<unsigned_short,std::allocator<unsigned_short>> local_3c [12];
  PacketGuard local_30 [14];
  ushort local_22;
  CUser *local_20;
  char local_19;
  int local_18;
  CUser *local_14;
  uint local_10;
  
  if ((*(int *)this != 0) &&
     (local_20 = (CUser *)CParty::getManager(*(CParty **)this), local_20 != (CUser *)0x0)) {
    pGVar2 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsPVPChannel(pGVar2);
    if (cVar1 == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 085bc6b1 to 085bc6d5 has its CatchHandler @ 085bc838 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x17b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)(char)param_1);
      std::vector<unsigned_short,std::allocator<unsigned_short>>::vector(local_3c);
      for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
                    /* try { // try from 085bc6ee to 085bc813 has its CatchHandler @ 085bc816 */
        cVar1 = CParty::checkValidUser(*(CParty **)this,local_18);
        if ((cVar1 == '\x01') &&
           (local_14 = (CUser *)CParty::get_user(*(CParty **)this,local_18),
           local_14 != (CUser *)0x0)) {
          local_22 = CUser::get_unique_id(local_14);
          std::vector<unsigned_short,std::allocator<unsigned_short>>::push_back(local_3c,&local_22);
        }
      }
      local_19 = std::vector<unsigned_short,std::allocator<unsigned_short>>::size(local_3c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_19);
      for (local_10 = 0; (int)local_10 < (int)local_19; local_10 = local_10 + 1) {
        puVar3 = (ushort *)
                 std::vector<unsigned_short,std::allocator<unsigned_short>>::operator[]
                           (local_3c,local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,(uint)*puVar3);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      iVar4 = CUser::get_state(local_20);
      if (iVar4 == 3) {
        iVar4 = CUser::get_area(local_20,false);
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)local_20);
        pGVar2 = (GameWorld *)G_GameWorld();
        GameWorld::send_to_area(pGVar2,(int)cVar1,iVar4,local_30);
      }
                    /* try { // try from 085bc831 to 085bc835 has its CatchHandler @ 085bc838 */
      std::vector<unsigned_short,std::allocator<unsigned_short>>::~vector(local_3c);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return;
}

```

---

## send_teleport_status

```asm
// === 085bb96e CPartyTelePort::send_teleport_status  [0x085bb96e-0x85bbb07] ===
 85bb96e:	55                   	push   %ebp
 85bb96f:	89 e5                	mov    %esp,%ebp
 85bb971:	56                   	push   %esi
 85bb972:	53                   	push   %ebx
 85bb973:	83 ec 40             	sub    $0x40,%esp
 85bb976:	8b 45 0c             	mov    0xc(%ebp),%eax
 85bb979:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85bb97c:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb97f:	8b 00                	mov    (%eax),%eax
 85bb981:	85 c0                	test   %eax,%eax
 85bb983:	0f 84 77 01 00 00    	je     85bbb00 <_ZN14CPartyTelePort20send_teleport_statusEh+0x192>
 85bb989:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bb98c:	89 04 24             	mov    %eax,(%esp)
 85bb98f:	e8 b8 23 fd ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85bb994:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bb997:	89 04 24             	mov    %eax,(%esp)
 85bb99a:	e8 47 ff b0 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 85bb99f:	c7 44 24 08 79 01 00 	movl   $0x179,0x8(%esp)
 85bb9a6:	00 
 85bb9a7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85bb9ae:	00 
 85bb9af:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bb9b2:	89 04 24             	mov    %eax,(%esp)
 85bb9b5:	e8 42 ff b0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85bb9ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb9bd:	89 04 24             	mov    %eax,(%esp)
 85bb9c0:	e8 93 3c 00 00       	call   85bf658 <_ZN14CPartyTelePort20get_teleport_villageEv>
 85bb9c5:	0f b6 c0             	movzbl %al,%eax
 85bb9c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bb9cc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bb9cf:	89 04 24             	mov    %eax,(%esp)
 85bb9d2:	e8 49 ff b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bb9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb9da:	89 04 24             	mov    %eax,(%esp)
 85bb9dd:	e8 0c 1e c7 ff       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 85bb9e2:	0f be c0             	movsbl %al,%eax
 85bb9e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bb9e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bb9ec:	89 04 24             	mov    %eax,(%esp)
 85bb9ef:	e8 2c ff b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bb9f4:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85bb9fb:	e9 8d 00 00 00       	jmp    85bba8d <_ZN14CPartyTelePort20send_teleport_statusEh+0x11f>
 85bba00:	66 c7 45 f0 ff ff    	movw   $0xffff,-0x10(%ebp)
 85bba06:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 85bba0a:	8b 45 08             	mov    0x8(%ebp),%eax
 85bba0d:	8b 00                	mov    (%eax),%eax
 85bba0f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85bba12:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bba16:	89 04 24             	mov    %eax,(%esp)
 85bba19:	e8 4a 9e b8 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 85bba1e:	84 c0                	test   %al,%al
 85bba20:	74 41                	je     85bba63 <_ZN14CPartyTelePort20send_teleport_statusEh+0xf5>
 85bba22:	8b 45 08             	mov    0x8(%ebp),%eax
 85bba25:	8b 00                	mov    (%eax),%eax
 85bba27:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85bba2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bba2e:	89 04 24             	mov    %eax,(%esp)
 85bba31:	e8 2e 9d b8 ff       	call   8145764 <_ZN6CParty8get_userEi>
 85bba36:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85bba39:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85bba3d:	74 24                	je     85bba63 <_ZN14CPartyTelePort20send_teleport_statusEh+0xf5>
 85bba3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85bba42:	89 04 24             	mov    %eax,(%esp)
 85bba45:	e8 32 e9 b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85bba4a:	66 89 45 f0          	mov    %ax,-0x10(%ebp)
 85bba4e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85bba51:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bba55:	8b 45 08             	mov    0x8(%ebp),%eax
 85bba58:	89 04 24             	mov    %eax,(%esp)
 85bba5b:	e8 f2 07 00 00       	call   85bc252 <_ZN14CPartyTelePort25get_teleport_member_stateEi>
 85bba60:	88 45 f3             	mov    %al,-0xd(%ebp)
 85bba63:	0f bf 45 f0          	movswl -0x10(%ebp),%eax
 85bba67:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bba6b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bba6e:	89 04 24             	mov    %eax,(%esp)
 85bba71:	e8 2e e4 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85bba76:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 85bba7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bba7e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bba81:	89 04 24             	mov    %eax,(%esp)
 85bba84:	e8 97 fe b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bba89:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85bba8d:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 85bba91:	0f 9e c0             	setle  %al
 85bba94:	84 c0                	test   %al,%al
 85bba96:	0f 85 64 ff ff ff    	jne    85bba00 <_ZN14CPartyTelePort20send_teleport_statusEh+0x92>
 85bba9c:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 85bbaa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bbaa4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bbaa7:	89 04 24             	mov    %eax,(%esp)
 85bbaaa:	e8 71 fe b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85bbaaf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85bbab6:	00 
 85bbab7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bbaba:	89 04 24             	mov    %eax,(%esp)
 85bbabd:	e8 96 fe b0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85bbac2:	8b 45 08             	mov    0x8(%ebp),%eax
 85bbac5:	8b 00                	mov    (%eax),%eax
 85bbac7:	8d 55 e0             	lea    -0x20(%ebp),%edx
 85bbaca:	89 54 24 04          	mov    %edx,0x4(%esp)
 85bbace:	89 04 24             	mov    %eax,(%esp)
 85bbad1:	e8 78 16 fe ff       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 85bbad6:	eb 1b                	jmp    85bbaf3 <_ZN14CPartyTelePort20send_teleport_statusEh+0x185>
 85bbad8:	89 d3                	mov    %edx,%ebx
 85bbada:	89 c6                	mov    %eax,%esi
 85bbadc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bbadf:	89 04 24             	mov    %eax,(%esp)
 85bbae2:	e8 99 23 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bbae7:	89 f0                	mov    %esi,%eax
 85bbae9:	89 da                	mov    %ebx,%edx
 85bbaeb:	89 04 24             	mov    %eax,(%esp)
 85bbaee:	e8 5d 7c 52 00       	call   8ae3750 <_Unwind_Resume>
 85bbaf3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85bbaf6:	89 04 24             	mov    %eax,(%esp)
 85bbaf9:	e8 82 23 fd ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85bbafe:	eb 01                	jmp    85bbb01 <_ZN14CPartyTelePort20send_teleport_statusEh+0x193>
 85bbb00:	90                   	nop
 85bbb01:	83 c4 40             	add    $0x40,%esp
 85bbb04:	5b                   	pop    %ebx
 85bbb05:	5e                   	pop    %esi
 85bbb06:	5d                   	pop    %ebp
 85bbb07:	c3                   	ret

```

```c
// CPartyTelePort::send_teleport_status @ 0x85bb96e

/* CPartyTelePort::send_teleport_status(unsigned char) */

void __thiscall CPartyTelePort::send_teleport_status(CPartyTelePort *this,uchar param_1)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_24 [12];
  int local_18;
  short local_14;
  byte local_11;
  CUser *local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 085bb99a to 085bbad5 has its CatchHandler @ 085bbad8 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x179);
    uVar2 = get_teleport_village(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,uVar2 & 0xff);
    cVar1 = get_teleport_state(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar1);
    for (local_18 = 0; local_18 < 4; local_18 = local_18 + 1) {
      local_14 = -1;
      local_11 = 0;
      cVar1 = CParty::checkValidUser(*(CParty **)this,local_18);
      if (cVar1 != '\0') {
        local_10 = (CUser *)CParty::get_user(*(CParty **)this,local_18);
        if (local_10 != (CUser *)0x0) {
          local_14 = CUser::get_unique_id(local_10);
          local_11 = get_teleport_member_state(this,local_18);
        }
      }
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(int)local_14);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)local_11);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)param_1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CParty::send_to_party(*(CParty **)this,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}

```

---

## set_teleport_data

```asm
// === 085bb85c CPartyTelePort::set_teleport_data  [0x085bb85c-0x85bb91b] ===
 85bb85c:	55                   	push   %ebp
 85bb85d:	89 e5                	mov    %esp,%ebp
 85bb85f:	57                   	push   %edi
 85bb860:	56                   	push   %esi
 85bb861:	53                   	push   %ebx
 85bb862:	83 ec 5c             	sub    $0x5c,%esp
 85bb865:	8b 7d 0c             	mov    0xc(%ebp),%edi
 85bb868:	8b 75 10             	mov    0x10(%ebp),%esi
 85bb86b:	8b 5d 14             	mov    0x14(%ebp),%ebx
 85bb86e:	8b 4d 18             	mov    0x18(%ebp),%ecx
 85bb871:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85bb874:	8b 45 20             	mov    0x20(%ebp),%eax
 85bb877:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85bb87a:	89 f8                	mov    %edi,%eax
 85bb87c:	88 45 d4             	mov    %al,-0x2c(%ebp)
 85bb87f:	89 f0                	mov    %esi,%eax
 85bb881:	88 45 d0             	mov    %al,-0x30(%ebp)
 85bb884:	66 89 5d cc          	mov    %bx,-0x34(%ebp)
 85bb888:	66 89 4d c8          	mov    %cx,-0x38(%ebp)
 85bb88c:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 85bb88f:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 85bb893:	88 45 c0             	mov    %al,-0x40(%ebp)
 85bb896:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb899:	83 c0 04             	add    $0x4,%eax
 85bb89c:	89 04 24             	mov    %eax,(%esp)
 85bb89f:	e8 c0 1e c7 ff       	call   822d764 <_ZN15stPartyTelePort5resetEv>
 85bb8a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8a7:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 85bb8ab:	88 50 05             	mov    %dl,0x5(%eax)
 85bb8ae:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8b1:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 85bb8b5:	88 50 06             	mov    %dl,0x6(%eax)
 85bb8b8:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8bb:	0f b7 55 cc          	movzwl -0x34(%ebp),%edx
 85bb8bf:	66 89 50 08          	mov    %dx,0x8(%eax)
 85bb8c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8c6:	0f b7 55 c8          	movzwl -0x38(%ebp),%edx
 85bb8ca:	66 89 50 0a          	mov    %dx,0xa(%eax)
 85bb8ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8d1:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 85bb8d5:	88 50 0c             	mov    %dl,0xc(%eax)
 85bb8d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8db:	0f b6 55 c0          	movzbl -0x40(%ebp),%edx
 85bb8df:	88 50 04             	mov    %dl,0x4(%eax)
 85bb8e2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85bb8e9:	eb 1e                	jmp    85bb909 <_ZN14CPartyTelePort17set_teleport_dataEhhsshc+0xad>
 85bb8eb:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85bb8f2:	00 
 85bb8f3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85bb8f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85bb8fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb8fd:	89 04 24             	mov    %eax,(%esp)
 85bb900:	e8 17 00 00 00       	call   85bb91c <_ZN14CPartyTelePort25set_teleport_member_stateEic>
 85bb905:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85bb909:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 85bb90d:	0f 9e c0             	setle  %al
 85bb910:	84 c0                	test   %al,%al
 85bb912:	75 d7                	jne    85bb8eb <_ZN14CPartyTelePort17set_teleport_dataEhhsshc+0x8f>
 85bb914:	83 c4 5c             	add    $0x5c,%esp
 85bb917:	5b                   	pop    %ebx
 85bb918:	5e                   	pop    %esi
 85bb919:	5f                   	pop    %edi
 85bb91a:	5d                   	pop    %ebp
 85bb91b:	c3                   	ret

```

```c
// CPartyTelePort::set_teleport_data @ 0x85bb85c

/* CPartyTelePort::set_teleport_data(unsigned char, unsigned char, short, short, unsigned char,
   char) */

void __thiscall
CPartyTelePort::set_teleport_data
          (CPartyTelePort *this,uchar param_1,uchar param_2,short param_3,short param_4,
          uchar param_5,char param_6)

{
  int local_20;
  
  stPartyTelePort::reset((stPartyTelePort *)(this + 4));
  this[5] = (CPartyTelePort)param_1;
  this[6] = (CPartyTelePort)param_2;
  *(short *)(this + 8) = param_3;
  *(short *)(this + 10) = param_4;
  this[0xc] = (CPartyTelePort)param_5;
  this[4] = (CPartyTelePort)param_6;
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    set_teleport_member_state(this,local_20,'\x02');
  }
  return;
}

```

---

## set_teleport_member_state

```asm
// === 085bb91c CPartyTelePort::set_teleport_member_state  [0x085bb91c-0x85bb96d] ===
 85bb91c:	55                   	push   %ebp
 85bb91d:	89 e5                	mov    %esp,%ebp
 85bb91f:	83 ec 28             	sub    $0x28,%esp
 85bb922:	8b 45 10             	mov    0x10(%ebp),%eax
 85bb925:	88 45 f4             	mov    %al,-0xc(%ebp)
 85bb928:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb92b:	8b 00                	mov    (%eax),%eax
 85bb92d:	85 c0                	test   %eax,%eax
 85bb92f:	74 33                	je     85bb964 <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x48>
 85bb931:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85bb935:	78 30                	js     85bb967 <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x4b>
 85bb937:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 85bb93b:	7f 2d                	jg     85bb96a <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x4e>
 85bb93d:	8b 45 08             	mov    0x8(%ebp),%eax
 85bb940:	8b 00                	mov    (%eax),%eax
 85bb942:	89 04 24             	mov    %eax,(%esp)
 85bb945:	e8 d2 1f c7 ff       	call   822d91c <_ZN6CParty9GetMemberEv>
 85bb94a:	89 c1                	mov    %eax,%ecx
 85bb94c:	8b 55 0c             	mov    0xc(%ebp),%edx
 85bb94f:	89 d0                	mov    %edx,%eax
 85bb951:	01 c0                	add    %eax,%eax
 85bb953:	01 d0                	add    %edx,%eax
 85bb955:	c1 e0 03             	shl    $0x3,%eax
 85bb958:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 85bb95b:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 85bb95f:	88 42 12             	mov    %al,0x12(%edx)
 85bb962:	eb 07                	jmp    85bb96b <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x4f>
 85bb964:	90                   	nop
 85bb965:	eb 04                	jmp    85bb96b <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x4f>
 85bb967:	90                   	nop
 85bb968:	eb 01                	jmp    85bb96b <_ZN14CPartyTelePort25set_teleport_member_stateEic+0x4f>
 85bb96a:	90                   	nop
 85bb96b:	c9                   	leave
 85bb96c:	c3                   	ret
 85bb96d:	90                   	nop

```

```c
// CPartyTelePort::set_teleport_member_state @ 0x85bb91c

/* CPartyTelePort::set_teleport_member_state(int, char) */

void __thiscall
CPartyTelePort::set_teleport_member_state(CPartyTelePort *this,int param_1,char param_2)

{
  int iVar1;
  
  if (((*(int *)this != 0) && (-1 < param_1)) && (param_1 < 4)) {
    iVar1 = CParty::GetMember(*(CParty **)this);
    *(char *)(iVar1 + param_1 * 0x18 + 0x12) = param_2;
  }
  return;
}

```

---

## ~CPartyTelePort

```asm
// === 085bb848 CPartyTelePort::~CPartyTelePort  [0x085bb848-0x85bb84d] ===
 85bb848:	55                   	push   %ebp
 85bb849:	89 e5                	mov    %esp,%ebp
 85bb84b:	5d                   	pop    %ebp
 85bb84c:	c3                   	ret
 85bb84d:	90                   	nop

```

```c
// CPartyTelePort::~CPartyTelePort @ 0x85bb848

/* CPartyTelePort::~CPartyTelePort() */

void __thiscall CPartyTelePort::~CPartyTelePort(CPartyTelePort *this)

{
  return;
}

```


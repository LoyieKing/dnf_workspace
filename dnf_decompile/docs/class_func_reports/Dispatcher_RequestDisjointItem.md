# Dispatcher_RequestDisjointItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cfc04 Dispatcher_RequestDisjointItem::check_error  [0x081cfc04-0x81cfcab] ===
 81cfc04:	55                   	push   %ebp
 81cfc05:	89 e5                	mov    %esp,%ebp
 81cfc07:	53                   	push   %ebx
 81cfc08:	83 ec 24             	sub    $0x24,%esp
 81cfc0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfc0e:	89 04 24             	mov    %eax,(%esp)
 81cfc11:	e8 76 a7 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cfc16:	83 f8 02             	cmp    $0x2,%eax
 81cfc19:	7e 0f                	jle    81cfc2a <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81cfc1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfc1e:	89 04 24             	mov    %eax,(%esp)
 81cfc21:	e8 0c 08 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cfc26:	85 c0                	test   %eax,%eax
 81cfc28:	75 07                	jne    81cfc31 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81cfc2a:	b8 01 00 00 00       	mov    $0x1,%eax
 81cfc2f:	eb 05                	jmp    81cfc36 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81cfc31:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfc36:	84 c0                	test   %al,%al
 81cfc38:	74 07                	je     81cfc41 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3d>
 81cfc3a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cfc3f:	eb 65                	jmp    81cfca6 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81cfc41:	e8 a0 29 f9 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81cfc46:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 81cfc4d:	00 
 81cfc4e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cfc55:	00 
 81cfc56:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cfc59:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cfc5d:	89 04 24             	mov    %eax,(%esp)
 81cfc60:	e8 53 ea f9 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81cfc65:	84 c0                	test   %al,%al
 81cfc67:	74 07                	je     81cfc70 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x6c>
 81cfc69:	b8 d1 00 00 00       	mov    $0xd1,%eax
 81cfc6e:	eb 36                	jmp    81cfca6 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81cfc70:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfc73:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cfc76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfc79:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cfc7d:	0f b7 d8             	movzwl %ax,%ebx
 81cfc80:	e8 22 a7 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81cfc85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cfc89:	89 04 24             	mov    %eax,(%esp)
 81cfc8c:	e8 0b 4f 4f 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81cfc91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfc94:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cfc98:	75 07                	jne    81cfca1 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9d>
 81cfc9a:	b8 03 00 00 00       	mov    $0x3,%eax
 81cfc9f:	eb 05                	jmp    81cfca6 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81cfca1:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfca6:	83 c4 24             	add    $0x24,%esp
 81cfca9:	5b                   	pop    %ebx
 81cfcaa:	5d                   	pop    %ebp
 81cfcab:	c3                   	ret

```

```c
// Dispatcher_RequestDisjointItem::check_error @ 0x81cfc04

/* Dispatcher_RequestDisjointItem::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_RequestDisjointItem::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ServiceRestrictManager *pSVar6;
  GameWorld *this;
  
  iVar4 = CUser::get_state((CUser *)param_2);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar4 != 0) {
      bVar2 = false;
      goto LAB_081cfc36;
    }
  }
  bVar2 = true;
LAB_081cfc36:
  if (bVar2) {
    uVar5 = 0xffffffff;
  }
  else {
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar6,param_2,1,0x13);
    if (cVar3 == '\0') {
      uVar1 = *(ushort *)(param_3 + 0xe);
      this = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::find_from_world(this,uVar1);
      if (iVar4 == 0) {
        uVar5 = 3;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xd1;
    }
  }
  return uVar5;
}

```

---

## process

```asm
// === 081cfcac Dispatcher_RequestDisjointItem::process  [0x081cfcac-0x81cfd99] ===
 81cfcac:	55                   	push   %ebp
 81cfcad:	89 e5                	mov    %esp,%ebp
 81cfcaf:	53                   	push   %ebx
 81cfcb0:	83 ec 34             	sub    $0x34,%esp
 81cfcb3:	8b 45 14             	mov    0x14(%ebp),%eax
 81cfcb6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cfcb9:	8b 45 14             	mov    0x14(%ebp),%eax
 81cfcbc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfcc0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfcc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cfcc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfcca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfcce:	8b 45 08             	mov    0x8(%ebp),%eax
 81cfcd1:	89 04 24             	mov    %eax,(%esp)
 81cfcd4:	e8 2b ff ff ff       	call   81cfc04 <_ZN30Dispatcher_RequestDisjointItem11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cfcd9:	89 c2                	mov    %eax,%edx
 81cfcdb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cfcde:	89 50 04             	mov    %edx,0x4(%eax)
 81cfce1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cfce4:	8b 40 04             	mov    0x4(%eax),%eax
 81cfce7:	85 c0                	test   %eax,%eax
 81cfce9:	7e 0a                	jle    81cfcf5 <_ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase+0x49>
 81cfceb:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfcf0:	e9 9e 00 00 00       	jmp    81cfd93 <_ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase+0xe7>
 81cfcf5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cfcf8:	8b 40 04             	mov    0x4(%eax),%eax
 81cfcfb:	85 c0                	test   %eax,%eax
 81cfcfd:	79 2f                	jns    81cfd2e <_ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81cfcff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfd02:	89 04 24             	mov    %eax,(%esp)
 81cfd05:	e8 64 a6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cfd0a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cfd0d:	8b 52 04             	mov    0x4(%edx),%edx
 81cfd10:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfd14:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cfd18:	c7 44 24 04 a0 3f bd 	movl   $0x8bd3fa0,0x4(%esp)
 81cfd1f:	08 
 81cfd20:	c7 04 24 1f 2a 00 00 	movl   $0x2a1f,(%esp)
 81cfd27:	e8 ab 0b 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfd2c:	eb 65                	jmp    81cfd93 <_ZN30Dispatcher_RequestDisjointItem7processEP5CUserR8MSG_BASER9ParamBase+0xe7>
 81cfd2e:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfd31:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cfd34:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfd37:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cfd3b:	0f b7 d8             	movzwl %ax,%ebx
 81cfd3e:	e8 64 a6 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81cfd43:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cfd47:	89 04 24             	mov    %eax,(%esp)
 81cfd4a:	e8 4d 4e 4f 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81cfd4f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfd52:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfd55:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81cfd59:	0f be d0             	movsbl %al,%edx
 81cfd5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfd5f:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81cfd63:	98                   	cwtl
 81cfd64:	c7 44 24 14 ff ff 00 	movl   $0xffff,0x14(%esp)
 81cfd6b:	00 
 81cfd6c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 81cfd6f:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81cfd73:	c7 44 24 0c ef 00 00 	movl   $0xef,0xc(%esp)
 81cfd7a:	00 
 81cfd7b:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cfd7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfd83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfd86:	89 04 24             	mov    %eax,(%esp)
 81cfd89:	e8 3c 95 02 00       	call   81f92ca <_ZN23DisPatcher_DisJointItem9_disjointEP5CUserii14ENUM_CMDPACKETS1_t>
 81cfd8e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfd93:	83 c4 34             	add    $0x34,%esp
 81cfd96:	5b                   	pop    %ebx
 81cfd97:	5d                   	pop    %ebp
 81cfd98:	c3                   	ret
 81cfd99:	90                   	nop

```

```c
// Dispatcher_RequestDisjointItem::process @ 0x81cfcac

/* Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestDisjointItem::process
          (Dispatcher_RequestDisjointItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x2a1f,
                       "virtual int Dispatcher_RequestDisjointItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xe);
      this_00 = (GameWorld *)G_GameWorld();
      uVar2 = GameWorld::find_from_world(this_00,uVar1);
      DisPatcher_DisJointItem::_disjoint
                (param_1,(int)*(short *)(param_2 + 0x10),(int)(char)param_2[0x12],0xef,uVar2,0xffff)
      ;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081cfb28 Dispatcher_RequestDisjointItem::read  [0x081cfb28-0x81cfc03] ===
 81cfb28:	55                   	push   %ebp
 81cfb29:	89 e5                	mov    %esp,%ebp
 81cfb2b:	83 ec 28             	sub    $0x28,%esp
 81cfb2e:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfb31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfb34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfb37:	83 c0 0e             	add    $0xe,%eax
 81cfb3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfb3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfb41:	89 04 24             	mov    %eax,(%esp)
 81cfb44:	e8 77 d4 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cfb49:	83 f0 01             	xor    $0x1,%eax
 81cfb4c:	84 c0                	test   %al,%al
 81cfb4e:	74 29                	je     81cfb79 <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0x51>
 81cfb50:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cfb57:	00 
 81cfb58:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cfb5f:	00 
 81cfb60:	c7 44 24 04 00 40 bd 	movl   $0x8bd4000,0x4(%esp)
 81cfb67:	08 
 81cfb68:	c7 04 24 ed 29 00 00 	movl   $0x29ed,(%esp)
 81cfb6f:	e8 63 0d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfb74:	e9 89 00 00 00       	jmp    81cfc02 <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0xda>
 81cfb79:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfb7c:	83 c0 10             	add    $0x10,%eax
 81cfb7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfb83:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfb86:	89 04 24             	mov    %eax,(%esp)
 81cfb89:	e8 32 d4 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cfb8e:	83 f0 01             	xor    $0x1,%eax
 81cfb91:	84 c0                	test   %al,%al
 81cfb93:	74 26                	je     81cfbbb <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0x93>
 81cfb95:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cfb9c:	00 
 81cfb9d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cfba4:	00 
 81cfba5:	c7 44 24 04 00 40 bd 	movl   $0x8bd4000,0x4(%esp)
 81cfbac:	08 
 81cfbad:	c7 04 24 f0 29 00 00 	movl   $0x29f0,(%esp)
 81cfbb4:	e8 1e 0d 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfbb9:	eb 47                	jmp    81cfc02 <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0xda>
 81cfbbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfbbe:	83 c0 12             	add    $0x12,%eax
 81cfbc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfbc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfbc8:	89 04 24             	mov    %eax,(%esp)
 81cfbcb:	e8 52 d3 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81cfbd0:	83 f0 01             	xor    $0x1,%eax
 81cfbd3:	84 c0                	test   %al,%al
 81cfbd5:	74 26                	je     81cfbfd <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0xd5>
 81cfbd7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cfbde:	00 
 81cfbdf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cfbe6:	00 
 81cfbe7:	c7 44 24 04 00 40 bd 	movl   $0x8bd4000,0x4(%esp)
 81cfbee:	08 
 81cfbef:	c7 04 24 f3 29 00 00 	movl   $0x29f3,(%esp)
 81cfbf6:	e8 dc 0c 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfbfb:	eb 05                	jmp    81cfc02 <_ZN30Dispatcher_RequestDisjointItem4readER9PacketBufR8MSG_BASE+0xda>
 81cfbfd:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfc02:	c9                   	leave
 81cfc03:	c3                   	ret

```

```c
// Dispatcher_RequestDisjointItem::read @ 0x81cfb28

/* Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RequestDisjointItem::read
          (Dispatcher_RequestDisjointItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x29f3,
                         "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x29f0,
                       "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x29ed,
                     "virtual int Dispatcher_RequestDisjointItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cfd9a Dispatcher_RequestDisjointItem::send  [0x081cfd9a-0x81cfdd1] ===
 81cfd9a:	55                   	push   %ebp
 81cfd9b:	89 e5                	mov    %esp,%ebp
 81cfd9d:	83 ec 28             	sub    $0x28,%esp
 81cfda0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfda3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfda6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfda9:	8b 40 04             	mov    0x4(%eax),%eax
 81cfdac:	85 c0                	test   %eax,%eax
 81cfdae:	74 20                	je     81cfdd0 <_ZN30Dispatcher_RequestDisjointItem4sendEP5CUserR9ParamBase+0x36>
 81cfdb0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfdb3:	8b 40 04             	mov    0x4(%eax),%eax
 81cfdb6:	0f b6 c0             	movzbl %al,%eax
 81cfdb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cfdbd:	c7 44 24 04 ef 00 00 	movl   $0xef,0x4(%esp)
 81cfdc4:	00 
 81cfdc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfdc8:	89 04 24             	mov    %eax,(%esp)
 81cfdcb:	e8 72 c1 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cfdd0:	c9                   	leave
 81cfdd1:	c3                   	ret

```

```c
// Dispatcher_RequestDisjointItem::send @ 0x81cfd9a

/* Dispatcher_RequestDisjointItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RequestDisjointItem::send
          (Dispatcher_RequestDisjointItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xef,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```


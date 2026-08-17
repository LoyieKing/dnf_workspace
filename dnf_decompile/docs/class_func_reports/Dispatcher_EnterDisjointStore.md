# Dispatcher_EnterDisjointStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d00d8 Dispatcher_EnterDisjointStore::check_error  [0x081d00d8-0x81d01ad] ===
 81d00d8:	55                   	push   %ebp
 81d00d9:	89 e5                	mov    %esp,%ebp
 81d00db:	53                   	push   %ebx
 81d00dc:	83 ec 24             	sub    $0x24,%esp
 81d00df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d00e2:	89 04 24             	mov    %eax,(%esp)
 81d00e5:	e8 a2 a2 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d00ea:	83 f8 02             	cmp    $0x2,%eax
 81d00ed:	7e 0f                	jle    81d00fe <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81d00ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d00f2:	89 04 24             	mov    %eax,(%esp)
 81d00f5:	e8 38 03 f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d00fa:	85 c0                	test   %eax,%eax
 81d00fc:	75 07                	jne    81d0105 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d00fe:	b8 01 00 00 00       	mov    $0x1,%eax
 81d0103:	eb 05                	jmp    81d010a <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x32>
 81d0105:	b8 00 00 00 00       	mov    $0x0,%eax
 81d010a:	84 c0                	test   %al,%al
 81d010c:	74 0a                	je     81d0118 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x40>
 81d010e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d0113:	e9 90 00 00 00       	jmp    81d01a8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d0118:	8b 45 10             	mov    0x10(%ebp),%eax
 81d011b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d011e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0121:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d0125:	0f b7 d8             	movzwl %ax,%ebx
 81d0128:	e8 7a a2 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d012d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d0131:	89 04 24             	mov    %eax,(%esp)
 81d0134:	e8 63 4a 4f 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81d0139:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d013c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d0140:	75 07                	jne    81d0149 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x71>
 81d0142:	b8 15 00 00 00       	mov    $0x15,%eax
 81d0147:	eb 5f                	jmp    81d01a8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d0149:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d014c:	89 04 24             	mov    %eax,(%esp)
 81d014f:	e8 40 f7 05 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81d0154:	83 f8 03             	cmp    $0x3,%eax
 81d0157:	0f 95 c0             	setne  %al
 81d015a:	84 c0                	test   %al,%al
 81d015c:	74 07                	je     81d0165 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x8d>
 81d015e:	b8 13 00 00 00       	mov    $0x13,%eax
 81d0163:	eb 43                	jmp    81d01a8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d0165:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d016c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d016f:	89 04 24             	mov    %eax,(%esp)
 81d0172:	e8 5d f7 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81d0177:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d017a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d017e:	75 07                	jne    81d0187 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81d0180:	b8 13 00 00 00       	mov    $0x13,%eax
 81d0185:	eb 21                	jmp    81d01a8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d0187:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d018a:	89 04 24             	mov    %eax,(%esp)
 81d018d:	e8 04 46 06 00       	call   8234796 <_ZN10expert_job10CExpertJob7GetTypeEv>
 81d0192:	83 f8 03             	cmp    $0x3,%eax
 81d0195:	0f 95 c0             	setne  %al
 81d0198:	84 c0                	test   %al,%al
 81d019a:	74 07                	je     81d01a3 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xcb>
 81d019c:	b8 13 00 00 00       	mov    $0x13,%eax
 81d01a1:	eb 05                	jmp    81d01a8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d01a3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d01a8:	83 c4 24             	add    $0x24,%esp
 81d01ab:	5b                   	pop    %ebx
 81d01ac:	5d                   	pop    %ebp
 81d01ad:	c3                   	ret

```

```c
// Dispatcher_EnterDisjointStore::check_error @ 0x81d00d8

/* Dispatcher_EnterDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_EnterDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this;
  CUserCharacInfo *this_00;
  CExpertJob *this_01;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 != 0) {
      bVar2 = false;
      goto LAB_081d010a;
    }
  }
  bVar2 = true;
LAB_081d010a:
  if (bVar2) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = *(ushort *)(param_3 + 0xe);
    this = (GameWorld *)G_GameWorld();
    this_00 = (CUserCharacInfo *)GameWorld::find_from_world(this,uVar1);
    if (this_00 == (CUserCharacInfo *)0x0) {
      uVar4 = 0x15;
    }
    else {
      iVar3 = CUserCharacInfo::GetCurCharacExpertJobType(this_00);
      if (iVar3 == 3) {
        this_01 = (CExpertJob *)CUserCharacInfo::GetCurCharacExpertJob(this_00);
        if (this_01 == (CExpertJob *)0x0) {
          uVar4 = 0x13;
        }
        else {
          iVar3 = expert_job::CExpertJob::GetType(this_01);
          if (iVar3 == 3) {
            uVar4 = 0;
          }
          else {
            uVar4 = 0x13;
          }
        }
      }
      else {
        uVar4 = 0x13;
      }
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 081d01ae Dispatcher_EnterDisjointStore::process  [0x081d01ae-0x81d0285] ===
 81d01ae:	55                   	push   %ebp
 81d01af:	89 e5                	mov    %esp,%ebp
 81d01b1:	53                   	push   %ebx
 81d01b2:	83 ec 24             	sub    $0x24,%esp
 81d01b5:	8b 45 14             	mov    0x14(%ebp),%eax
 81d01b8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d01bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81d01be:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d01c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81d01c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d01c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d01cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d01d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81d01d3:	89 04 24             	mov    %eax,(%esp)
 81d01d6:	e8 fd fe ff ff       	call   81d00d8 <_ZN29Dispatcher_EnterDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d01db:	89 c2                	mov    %eax,%edx
 81d01dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d01e0:	89 50 04             	mov    %edx,0x4(%eax)
 81d01e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d01e6:	8b 40 04             	mov    0x4(%eax),%eax
 81d01e9:	85 c0                	test   %eax,%eax
 81d01eb:	7e 0a                	jle    81d01f7 <_ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x49>
 81d01ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81d01f2:	e9 89 00 00 00       	jmp    81d0280 <_ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0xd2>
 81d01f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d01fa:	8b 40 04             	mov    0x4(%eax),%eax
 81d01fd:	85 c0                	test   %eax,%eax
 81d01ff:	79 2f                	jns    81d0230 <_ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x82>
 81d0201:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0204:	89 04 24             	mov    %eax,(%esp)
 81d0207:	e8 62 a1 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d020c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81d020f:	8b 52 04             	mov    0x4(%edx),%edx
 81d0212:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0216:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d021a:	c7 44 24 04 20 3e bd 	movl   $0x8bd3e20,0x4(%esp)
 81d0221:	08 
 81d0222:	c7 04 24 df 2a 00 00 	movl   $0x2adf,(%esp)
 81d0229:	e8 a9 06 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d022e:	eb 50                	jmp    81d0280 <_ZN29Dispatcher_EnterDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0xd2>
 81d0230:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0233:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d0236:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0239:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d023d:	0f b7 d8             	movzwl %ax,%ebx
 81d0240:	e8 62 a1 f0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81d0245:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d0249:	89 04 24             	mov    %eax,(%esp)
 81d024c:	e8 4b 49 4f 00       	call   86c4b9c <_ZN9GameWorld15find_from_worldEt>
 81d0251:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d0254:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d025b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d025e:	89 04 24             	mov    %eax,(%esp)
 81d0261:	e8 6e f6 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81d0266:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0269:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d026c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0270:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0273:	89 04 24             	mov    %eax,(%esp)
 81d0276:	e8 1f 2e 40 00       	call   85d309a <_ZN10expert_job11CDisjointer20OnEnterDisjointStoreEP5CUser>
 81d027b:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0280:	83 c4 24             	add    $0x24,%esp
 81d0283:	5b                   	pop    %ebx
 81d0284:	5d                   	pop    %ebp
 81d0285:	c3                   	ret

```

```c
// Dispatcher_EnterDisjointStore::process @ 0x81d01ae

/* Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_EnterDisjointStore::process
          (Dispatcher_EnterDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  GameWorld *this_00;
  CUserCharacInfo *this_01;
  CDisjointer *this_02;
  
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar2 = LineFunc(0x2adf,
                       "virtual int Dispatcher_EnterDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar3);
    }
    else {
      uVar1 = *(ushort *)(param_2 + 0xe);
      this_00 = (GameWorld *)G_GameWorld();
      this_01 = (CUserCharacInfo *)GameWorld::find_from_world(this_00,uVar1);
      this_02 = (CDisjointer *)CUserCharacInfo::GetCurCharacExpertJob(this_01);
      expert_job::CDisjointer::OnEnterDisjointStore(this_02,param_1);
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
// === 081d0082 Dispatcher_EnterDisjointStore::read  [0x081d0082-0x81d00d7] ===
 81d0082:	55                   	push   %ebp
 81d0083:	89 e5                	mov    %esp,%ebp
 81d0085:	83 ec 28             	sub    $0x28,%esp
 81d0088:	8b 45 10             	mov    0x10(%ebp),%eax
 81d008b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d008e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0091:	83 c0 0e             	add    $0xe,%eax
 81d0094:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0098:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d009b:	89 04 24             	mov    %eax,(%esp)
 81d009e:	e8 1d cf 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d00a3:	83 f0 01             	xor    $0x1,%eax
 81d00a6:	84 c0                	test   %al,%al
 81d00a8:	74 26                	je     81d00d0 <_ZN29Dispatcher_EnterDisjointStore4readER9PacketBufR8MSG_BASE+0x4e>
 81d00aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d00b1:	00 
 81d00b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d00b9:	00 
 81d00ba:	c7 44 24 04 80 3e bd 	movl   $0x8bd3e80,0x4(%esp)
 81d00c1:	08 
 81d00c2:	c7 04 24 a8 2a 00 00 	movl   $0x2aa8,(%esp)
 81d00c9:	e8 09 08 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d00ce:	eb 05                	jmp    81d00d5 <_ZN29Dispatcher_EnterDisjointStore4readER9PacketBufR8MSG_BASE+0x53>
 81d00d0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d00d5:	c9                   	leave
 81d00d6:	c3                   	ret
 81d00d7:	90                   	nop

```

```c
// Dispatcher_EnterDisjointStore::read @ 0x81d0082

/* Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_EnterDisjointStore::read
          (Dispatcher_EnterDisjointStore *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x2aa8,"virtual int Dispatcher_EnterDisjointStore::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d0286 Dispatcher_EnterDisjointStore::send  [0x081d0286-0x81d02bd] ===
 81d0286:	55                   	push   %ebp
 81d0287:	89 e5                	mov    %esp,%ebp
 81d0289:	83 ec 28             	sub    $0x28,%esp
 81d028c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d028f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0292:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0295:	8b 40 04             	mov    0x4(%eax),%eax
 81d0298:	85 c0                	test   %eax,%eax
 81d029a:	74 20                	je     81d02bc <_ZN29Dispatcher_EnterDisjointStore4sendEP5CUserR9ParamBase+0x36>
 81d029c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d029f:	8b 40 04             	mov    0x4(%eax),%eax
 81d02a2:	0f b6 c0             	movzbl %al,%eax
 81d02a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d02a9:	c7 44 24 04 f5 00 00 	movl   $0xf5,0x4(%esp)
 81d02b0:	00 
 81d02b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d02b4:	89 04 24             	mov    %eax,(%esp)
 81d02b7:	e8 86 bc 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d02bc:	c9                   	leave
 81d02bd:	c3                   	ret

```

```c
// Dispatcher_EnterDisjointStore::send @ 0x81d0286

/* Dispatcher_EnterDisjointStore::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_EnterDisjointStore::send
          (Dispatcher_EnterDisjointStore *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xf5,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```


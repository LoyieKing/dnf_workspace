# DisPatcher_SetPos

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081c9994 DisPatcher_SetPos::check_error  [0x081c9994-0x81c99bd] ===
 81c9994:	55                   	push   %ebp
 81c9995:	89 e5                	mov    %esp,%ebp
 81c9997:	83 ec 18             	sub    $0x18,%esp
 81c999a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c999d:	89 04 24             	mov    %eax,(%esp)
 81c99a0:	e8 e7 09 f1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81c99a5:	83 f8 03             	cmp    $0x3,%eax
 81c99a8:	0f 95 c0             	setne  %al
 81c99ab:	84 c0                	test   %al,%al
 81c99ad:	74 07                	je     81c99b6 <_ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE+0x22>
 81c99af:	b8 13 00 00 00       	mov    $0x13,%eax
 81c99b4:	eb 05                	jmp    81c99bb <_ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE+0x27>
 81c99b6:	b8 00 00 00 00       	mov    $0x0,%eax
 81c99bb:	c9                   	leave
 81c99bc:	c3                   	ret
 81c99bd:	90                   	nop

```

```c
// DisPatcher_SetPos::check_error @ 0x81c9994

/* DisPatcher_SetPos::check_error(CUser*, MSG_BASE&) */

undefined4 DisPatcher_SetPos::check_error(CUser *param_1,MSG_BASE *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x13;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081c98c8 DisPatcher_SetPos::process  [0x081c98c8-0x81c9993] ===
 81c98c8:	55                   	push   %ebp
 81c98c9:	89 e5                	mov    %esp,%ebp
 81c98cb:	57                   	push   %edi
 81c98cc:	56                   	push   %esi
 81c98cd:	53                   	push   %ebx
 81c98ce:	83 ec 4c             	sub    $0x4c,%esp
 81c98d1:	8b 45 10             	mov    0x10(%ebp),%eax
 81c98d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c98d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c98db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c98df:	8b 45 08             	mov    0x8(%ebp),%eax
 81c98e2:	89 04 24             	mov    %eax,(%esp)
 81c98e5:	e8 aa 00 00 00       	call   81c9994 <_ZN17DisPatcher_SetPos11check_errorEP5CUserR8MSG_BASE>
 81c98ea:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c98ed:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c98f1:	7e 0a                	jle    81c98fd <_ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase+0x35>
 81c98f3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c98f8:	e9 8e 00 00 00       	jmp    81c998b <_ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase+0xc3>
 81c98fd:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81c9901:	79 2d                	jns    81c9930 <_ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase+0x68>
 81c9903:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9906:	89 04 24             	mov    %eax,(%esp)
 81c9909:	e8 60 0a f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c990e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c9912:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9919:	00 
 81c991a:	c7 44 24 04 c0 54 bd 	movl   $0x8bd54c0,0x4(%esp)
 81c9921:	08 
 81c9922:	c7 04 24 b8 1c 00 00 	movl   $0x1cb8,(%esp)
 81c9929:	e8 a9 6f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c992e:	eb 5b                	jmp    81c998b <_ZN17DisPatcher_SetPos7processEP5CUserR8MSG_BASER9ParamBase+0xc3>
 81c9930:	8b 45 10             	mov    0x10(%ebp),%eax
 81c9933:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c9936:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c9939:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81c993d:	0f b7 c0             	movzwl %ax,%eax
 81c9940:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c9943:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c9946:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81c994a:	0f be f8             	movsbl %al,%edi
 81c994d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c9950:	0f b7 40 0f          	movzwl 0xf(%eax),%eax
 81c9954:	0f b7 f0             	movzwl %ax,%esi
 81c9957:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c995a:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81c995e:	0f b7 d8             	movzwl %ax,%ebx
 81c9961:	e8 41 0a f1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81c9966:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c9969:	89 54 24 14          	mov    %edx,0x14(%esp)
 81c996d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81c9971:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c9975:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c9979:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c997c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c9980:	89 04 24             	mov    %eax,(%esp)
 81c9983:	e8 7e bd 4f 00       	call   86c5706 <_ZN9GameWorld13move_positionEP5CUseriiit>
 81c9988:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c998b:	83 c4 4c             	add    $0x4c,%esp
 81c998e:	5b                   	pop    %ebx
 81c998f:	5e                   	pop    %esi
 81c9990:	5f                   	pop    %edi
 81c9991:	5d                   	pop    %ebp
 81c9992:	c3                   	ret
 81c9993:	90                   	nop

```

```c
// DisPatcher_SetPos::process @ 0x81c98c8

/* DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&) */

int DisPatcher_SetPos::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  GameWorld *this;
  
  iVar5 = check_error(param_1,param_2);
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      iVar5 = LineFunc(0x1cb8,
                       "virtual int DisPatcher_SetPos::process(CUser*, MSG_BASE&, ParamBase&)",0,
                       uVar6);
    }
    else {
      uVar2 = *(ushort *)(param_3 + 0x12);
      PVar1 = param_3[0x11];
      uVar3 = *(ushort *)(param_3 + 0xf);
      uVar4 = *(ushort *)(param_3 + 0xd);
      this = (GameWorld *)G_GameWorld();
      GameWorld::move_position(this,(CUser *)param_2,(uint)uVar4,(uint)uVar3,(int)(char)PVar1,uVar2)
      ;
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}

```

---

## read

```asm
// === 081c97a6 DisPatcher_SetPos::read  [0x081c97a6-0x81c98c7] ===
 81c97a6:	55                   	push   %ebp
 81c97a7:	89 e5                	mov    %esp,%ebp
 81c97a9:	83 ec 28             	sub    $0x28,%esp
 81c97ac:	8b 45 10             	mov    0x10(%ebp),%eax
 81c97af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c97b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c97b5:	83 c0 0d             	add    $0xd,%eax
 81c97b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c97bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c97bf:	89 04 24             	mov    %eax,(%esp)
 81c97c2:	e8 e9 38 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c97c7:	83 f0 01             	xor    $0x1,%eax
 81c97ca:	84 c0                	test   %al,%al
 81c97cc:	74 29                	je     81c97f7 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x51>
 81c97ce:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c97d5:	00 
 81c97d6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c97dd:	00 
 81c97de:	c7 44 24 04 20 55 bd 	movl   $0x8bd5520,0x4(%esp)
 81c97e5:	08 
 81c97e6:	c7 04 24 a2 1c 00 00 	movl   $0x1ca2,(%esp)
 81c97ed:	e8 e5 70 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c97f2:	e9 ce 00 00 00       	jmp    81c98c5 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x11f>
 81c97f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c97fa:	83 c0 0f             	add    $0xf,%eax
 81c97fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9801:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9804:	89 04 24             	mov    %eax,(%esp)
 81c9807:	e8 a4 38 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c980c:	83 f0 01             	xor    $0x1,%eax
 81c980f:	84 c0                	test   %al,%al
 81c9811:	74 29                	je     81c983c <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x96>
 81c9813:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c981a:	00 
 81c981b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9822:	00 
 81c9823:	c7 44 24 04 20 55 bd 	movl   $0x8bd5520,0x4(%esp)
 81c982a:	08 
 81c982b:	c7 04 24 a4 1c 00 00 	movl   $0x1ca4,(%esp)
 81c9832:	e8 a0 70 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c9837:	e9 89 00 00 00       	jmp    81c98c5 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x11f>
 81c983c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c983f:	83 c0 11             	add    $0x11,%eax
 81c9842:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9846:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c9849:	89 04 24             	mov    %eax,(%esp)
 81c984c:	e8 d1 36 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c9851:	83 f0 01             	xor    $0x1,%eax
 81c9854:	84 c0                	test   %al,%al
 81c9856:	74 26                	je     81c987e <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0xd8>
 81c9858:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c985f:	00 
 81c9860:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c9867:	00 
 81c9868:	c7 44 24 04 20 55 bd 	movl   $0x8bd5520,0x4(%esp)
 81c986f:	08 
 81c9870:	c7 04 24 a6 1c 00 00 	movl   $0x1ca6,(%esp)
 81c9877:	e8 5b 70 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c987c:	eb 47                	jmp    81c98c5 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x11f>
 81c987e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c9881:	83 c0 12             	add    $0x12,%eax
 81c9884:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c9888:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c988b:	89 04 24             	mov    %eax,(%esp)
 81c988e:	e8 1d 38 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81c9893:	83 f0 01             	xor    $0x1,%eax
 81c9896:	84 c0                	test   %al,%al
 81c9898:	74 26                	je     81c98c0 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x11a>
 81c989a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c98a1:	00 
 81c98a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c98a9:	00 
 81c98aa:	c7 44 24 04 20 55 bd 	movl   $0x8bd5520,0x4(%esp)
 81c98b1:	08 
 81c98b2:	c7 04 24 a8 1c 00 00 	movl   $0x1ca8,(%esp)
 81c98b9:	e8 19 70 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c98be:	eb 05                	jmp    81c98c5 <_ZN17DisPatcher_SetPos4readER9PacketBufR8MSG_BASE+0x11f>
 81c98c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81c98c5:	c9                   	leave
 81c98c6:	c3                   	ret
 81c98c7:	90                   	nop

```

```c
// DisPatcher_SetPos::read @ 0x81c97a6

/* DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_SetPos::read(DisPatcher_SetPos *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x1ca8,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x1ca6,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1ca4,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1ca2,"virtual int DisPatcher_SetPos::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```


# Dispatcher_ItemDictionary

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dd87a Dispatcher_ItemDictionary::check_error  [0x081dd87a-0x81dd8b5] ===
 81dd87a:	55                   	push   %ebp
 81dd87b:	89 e5                	mov    %esp,%ebp
 81dd87d:	83 ec 28             	sub    $0x28,%esp
 81dd880:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dd884:	75 07                	jne    81dd88d <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE+0x13>
 81dd886:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dd88b:	eb 27                	jmp    81dd8b4 <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE+0x3a>
 81dd88d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd890:	89 04 24             	mov    %eax,(%esp)
 81dd893:	e8 f4 ca ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dd898:	83 f8 02             	cmp    $0x2,%eax
 81dd89b:	0f 9e c0             	setle  %al
 81dd89e:	84 c0                	test   %al,%al
 81dd8a0:	74 07                	je     81dd8a9 <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE+0x2f>
 81dd8a2:	b8 01 00 00 00       	mov    $0x1,%eax
 81dd8a7:	eb 0b                	jmp    81dd8b4 <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE+0x3a>
 81dd8a9:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd8ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd8af:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd8b4:	c9                   	leave
 81dd8b5:	c3                   	ret

```

```c
// Dispatcher_ItemDictionary::check_error @ 0x81dd87a

/* Dispatcher_ItemDictionary::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ItemDictionary::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 < 3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## process

```asm
// === 081dd7fe Dispatcher_ItemDictionary::process  [0x081dd7fe-0x81dd879] ===
 81dd7fe:	55                   	push   %ebp
 81dd7ff:	89 e5                	mov    %esp,%ebp
 81dd801:	83 ec 28             	sub    $0x28,%esp
 81dd804:	8b 45 14             	mov    0x14(%ebp),%eax
 81dd807:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dd80a:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd80d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd811:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd814:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dd818:	8b 45 08             	mov    0x8(%ebp),%eax
 81dd81b:	89 04 24             	mov    %eax,(%esp)
 81dd81e:	e8 57 00 00 00       	call   81dd87a <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE>
 81dd823:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81dd826:	89 42 04             	mov    %eax,0x4(%edx)
 81dd829:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dd82c:	8b 40 04             	mov    0x4(%eax),%eax
 81dd82f:	85 c0                	test   %eax,%eax
 81dd831:	7e 07                	jle    81dd83a <_ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81dd833:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd838:	eb 3d                	jmp    81dd877 <_ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81dd83a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dd83d:	8b 40 04             	mov    0x4(%eax),%eax
 81dd840:	85 c0                	test   %eax,%eax
 81dd842:	79 28                	jns    81dd86c <_ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81dd844:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dd847:	8b 40 04             	mov    0x4(%eax),%eax
 81dd84a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81dd851:	00 
 81dd852:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd856:	c7 44 24 04 e0 1e bd 	movl   $0x8bd1ee0,0x4(%esp)
 81dd85d:	08 
 81dd85e:	c7 04 24 52 4e 00 00 	movl   $0x4e52,(%esp)
 81dd865:	e8 6d 30 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dd86a:	eb 0b                	jmp    81dd877 <_ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 81dd86c:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd86f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd872:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd877:	c9                   	leave
 81dd878:	c3                   	ret
 81dd879:	90                   	nop

```

```c
// Dispatcher_ItemDictionary::process @ 0x81dd7fe

/* Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ItemDictionary::process
          (Dispatcher_ItemDictionary *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x4e52,
                       "virtual int Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081dd7ea Dispatcher_ItemDictionary::read  [0x081dd7ea-0x81dd7fd] ===
 81dd7ea:	55                   	push   %ebp
 81dd7eb:	89 e5                	mov    %esp,%ebp
 81dd7ed:	83 ec 10             	sub    $0x10,%esp
 81dd7f0:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd7f3:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81dd7f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81dd7fb:	c9                   	leave
 81dd7fc:	c3                   	ret
 81dd7fd:	90                   	nop

```

```c
// Dispatcher_ItemDictionary::read @ 0x81dd7ea

/* Dispatcher_ItemDictionary::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_ItemDictionary::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 081dd8b6 Dispatcher_ItemDictionary::send  [0x081dd8b6-0x81dd903] ===
 81dd8b6:	55                   	push   %ebp
 81dd8b7:	89 e5                	mov    %esp,%ebp
 81dd8b9:	83 ec 28             	sub    $0x28,%esp
 81dd8bc:	8b 45 10             	mov    0x10(%ebp),%eax
 81dd8bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dd8c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd8c5:	8b 40 04             	mov    0x4(%eax),%eax
 81dd8c8:	85 c0                	test   %eax,%eax
 81dd8ca:	75 15                	jne    81dd8e1 <_ZN25Dispatcher_ItemDictionary4sendEP5CUserR9ParamBase+0x2b>
 81dd8cc:	c7 44 24 04 b8 01 00 	movl   $0x1b8,0x4(%esp)
 81dd8d3:	00 
 81dd8d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd8d7:	89 04 24             	mov    %eax,(%esp)
 81dd8da:	e8 c1 e5 49 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 81dd8df:	eb 20                	jmp    81dd901 <_ZN25Dispatcher_ItemDictionary4sendEP5CUserR9ParamBase+0x4b>
 81dd8e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dd8e4:	8b 40 04             	mov    0x4(%eax),%eax
 81dd8e7:	0f b6 c0             	movzbl %al,%eax
 81dd8ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dd8ee:	c7 44 24 04 b8 01 00 	movl   $0x1b8,0x4(%esp)
 81dd8f5:	00 
 81dd8f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dd8f9:	89 04 24             	mov    %eax,(%esp)
 81dd8fc:	e8 41 e6 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81dd901:	c9                   	leave
 81dd902:	c3                   	ret
 81dd903:	90                   	nop

```

```c
// Dispatcher_ItemDictionary::send @ 0x81dd8b6

/* Dispatcher_ItemDictionary::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ItemDictionary::send(Dispatcher_ItemDictionary *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1b8);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b8,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```


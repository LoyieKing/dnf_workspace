# game_master__CMacro

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## GetCurCmd

```asm
// === 084a87e2 game_master::CMacro::GetCurCmd  [0x084a87e2-0x84a8801] ===
 84a87e2:	55                   	push   %ebp
 84a87e3:	89 e5                	mov    %esp,%ebp
 84a87e5:	83 ec 18             	sub    $0x18,%esp
 84a87e8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a87eb:	8b 40 10             	mov    0x10(%eax),%eax
 84a87ee:	8b 55 08             	mov    0x8(%ebp),%edx
 84a87f1:	83 c2 04             	add    $0x4,%edx
 84a87f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a87f8:	89 14 24             	mov    %edx,(%esp)
 84a87fb:	e8 66 be 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a8800:	c9                   	leave
 84a8801:	c3                   	ret

```

```c
// game_master::CMacro::GetCurCmd @ 0x84a87e2

/* game_master::CMacro::GetCurCmd() */

void __thiscall game_master::CMacro::GetCurCmd(CMacro *this)

{
  std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::operator[]
            ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)(this + 4)
             ,*(uint *)(this + 0x10));
  return;
}

```

---

## NextCmd

```asm
// === 084a86fe game_master::CMacro::NextCmd  [0x084a86fe-0x84a87e1] ===
 84a86fe:	55                   	push   %ebp
 84a86ff:	89 e5                	mov    %esp,%ebp
 84a8701:	53                   	push   %ebx
 84a8702:	83 ec 24             	sub    $0x24,%esp
 84a8705:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8708:	8b 58 10             	mov    0x10(%eax),%ebx
 84a870b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a870e:	83 c0 04             	add    $0x4,%eax
 84a8711:	89 04 24             	mov    %eax,(%esp)
 84a8714:	e8 2b bf 00 00       	call   84b4644 <_ZNKSt6vectorIN11game_master11stMacroDataESaIS1_EE4sizeEv>
 84a8719:	39 c3                	cmp    %eax,%ebx
 84a871b:	0f 93 c0             	setae  %al
 84a871e:	84 c0                	test   %al,%al
 84a8720:	74 18                	je     84a873a <_ZN11game_master6CMacro7NextCmdEv+0x3c>
 84a8722:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8725:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a872b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a872e:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 84a8735:	e9 a2 00 00 00       	jmp    84a87dc <_ZN11game_master6CMacro7NextCmdEv+0xde>
 84a873a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a873d:	8b 40 10             	mov    0x10(%eax),%eax
 84a8740:	8b 55 08             	mov    0x8(%ebp),%edx
 84a8743:	83 c2 04             	add    $0x4,%edx
 84a8746:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a874a:	89 14 24             	mov    %edx,(%esp)
 84a874d:	e8 14 bf 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a8752:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a8755:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8758:	8b 40 04             	mov    0x4(%eax),%eax
 84a875b:	85 c0                	test   %eax,%eax
 84a875d:	74 1f                	je     84a877e <_ZN11game_master6CMacro7NextCmdEv+0x80>
 84a875f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8762:	8b 50 08             	mov    0x8(%eax),%edx
 84a8765:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8768:	8b 40 04             	mov    0x4(%eax),%eax
 84a876b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a876f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8773:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8776:	89 04 24             	mov    %eax,(%esp)
 84a8779:	e8 a6 01 00 00       	call   84a8924 <_ZN11game_master6CMacro10SendPacketEPKci>
 84a877e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8781:	8b 40 10             	mov    0x10(%eax),%eax
 84a8784:	8d 58 01             	lea    0x1(%eax),%ebx
 84a8787:	8b 45 08             	mov    0x8(%ebp),%eax
 84a878a:	83 c0 04             	add    $0x4,%eax
 84a878d:	89 04 24             	mov    %eax,(%esp)
 84a8790:	e8 af be 00 00       	call   84b4644 <_ZNKSt6vectorIN11game_master11stMacroDataESaIS1_EE4sizeEv>
 84a8795:	39 c3                	cmp    %eax,%ebx
 84a8797:	0f 92 c0             	setb   %al
 84a879a:	84 c0                	test   %al,%al
 84a879c:	74 3e                	je     84a87dc <_ZN11game_master6CMacro7NextCmdEv+0xde>
 84a879e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a87a1:	8b 40 10             	mov    0x10(%eax),%eax
 84a87a4:	8d 50 01             	lea    0x1(%eax),%edx
 84a87a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84a87aa:	89 50 10             	mov    %edx,0x10(%eax)
 84a87ad:	8b 45 08             	mov    0x8(%ebp),%eax
 84a87b0:	8b 40 10             	mov    0x10(%eax),%eax
 84a87b3:	8b 55 08             	mov    0x8(%ebp),%edx
 84a87b6:	83 c2 04             	add    $0x4,%edx
 84a87b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a87bd:	89 14 24             	mov    %edx,(%esp)
 84a87c0:	e8 a1 be 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a87c5:	8b 40 04             	mov    0x4(%eax),%eax
 84a87c8:	85 c0                	test   %eax,%eax
 84a87ca:	0f 95 c0             	setne  %al
 84a87cd:	84 c0                	test   %al,%al
 84a87cf:	74 0b                	je     84a87dc <_ZN11game_master6CMacro7NextCmdEv+0xde>
 84a87d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a87d4:	89 04 24             	mov    %eax,(%esp)
 84a87d7:	e8 22 ff ff ff       	call   84a86fe <_ZN11game_master6CMacro7NextCmdEv>
 84a87dc:	83 c4 24             	add    $0x24,%esp
 84a87df:	5b                   	pop    %ebx
 84a87e0:	5d                   	pop    %ebp
 84a87e1:	c3                   	ret

```

```c
// game_master::CMacro::NextCmd @ 0x84a86fe

/* game_master::CMacro::NextCmd() */

void __thiscall game_master::CMacro::NextCmd(CMacro *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(this + 0x10);
  uVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                    ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                     (this + 4));
  if (uVar3 < uVar1) {
    iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
            operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4),*(uint *)(this + 0x10));
    if (*(int *)(iVar2 + 4) != 0) {
      SendPacket(this,*(char **)(iVar2 + 4),*(int *)(iVar2 + 8));
    }
    iVar2 = *(int *)(this + 0x10);
    uVar3 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                      ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4));
    if (iVar2 + 1U < uVar3) {
      *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
              operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4),*(uint *)(this + 0x10));
      if (*(int *)(iVar2 + 4) != 0) {
        NextCmd(this);
      }
    }
  }
  else {
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  return;
}

```

---

## OnRecv

```asm
// === 084a8870 game_master::CMacro::OnRecv  [0x084a8870-0x84a88a9] ===
 84a8870:	55                   	push   %ebp
 84a8871:	89 e5                	mov    %esp,%ebp
 84a8873:	83 ec 28             	sub    $0x28,%esp
 84a8876:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8879:	8b 00                	mov    (%eax),%eax
 84a887b:	83 f8 01             	cmp    $0x1,%eax
 84a887e:	75 27                	jne    84a88a7 <_ZN11game_master6CMacro6OnRecvEiiPci+0x37>
 84a8880:	8b 45 18             	mov    0x18(%ebp),%eax
 84a8883:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a8887:	8b 45 14             	mov    0x14(%ebp),%eax
 84a888a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a888e:	8b 45 10             	mov    0x10(%ebp),%eax
 84a8891:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a8895:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8898:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a889c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a889f:	89 04 24             	mov    %eax,(%esp)
 84a88a2:	e8 5b ff ff ff       	call   84a8802 <_ZN11game_master6CMacro9RecordingEiiPci>
 84a88a7:	c9                   	leave
 84a88a8:	c3                   	ret
 84a88a9:	90                   	nop

```

```c
// game_master::CMacro::OnRecv @ 0x84a8870

/* game_master::CMacro::OnRecv(int, int, char*, int) */

void __thiscall
game_master::CMacro::OnRecv(CMacro *this,int param_1,int param_2,char *param_3,int param_4)

{
  if (*(int *)this == 1) {
    Recording(this,param_1,param_2,param_3,param_4);
  }
  return;
}

```

---

## OnSend

```asm
// === 084a88aa game_master::CMacro::OnSend  [0x084a88aa-0x84a8923] ===
 84a88aa:	55                   	push   %ebp
 84a88ab:	89 e5                	mov    %esp,%ebp
 84a88ad:	83 ec 38             	sub    $0x38,%esp
 84a88b0:	8b 45 08             	mov    0x8(%ebp),%eax
 84a88b3:	8b 00                	mov    (%eax),%eax
 84a88b5:	83 f8 01             	cmp    $0x1,%eax
 84a88b8:	74 07                	je     84a88c1 <_ZN11game_master6CMacro6OnSendEii+0x17>
 84a88ba:	83 f8 02             	cmp    $0x2,%eax
 84a88bd:	74 2d                	je     84a88ec <_ZN11game_master6CMacro6OnSendEii+0x42>
 84a88bf:	eb 61                	jmp    84a8922 <_ZN11game_master6CMacro6OnSendEii+0x78>
 84a88c1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84a88c8:	00 
 84a88c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84a88d0:	00 
 84a88d1:	8b 45 10             	mov    0x10(%ebp),%eax
 84a88d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a88d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a88db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a88df:	8b 45 08             	mov    0x8(%ebp),%eax
 84a88e2:	89 04 24             	mov    %eax,(%esp)
 84a88e5:	e8 18 ff ff ff       	call   84a8802 <_ZN11game_master6CMacro9RecordingEiiPci>
 84a88ea:	eb 36                	jmp    84a8922 <_ZN11game_master6CMacro6OnSendEii+0x78>
 84a88ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84a88ef:	89 04 24             	mov    %eax,(%esp)
 84a88f2:	e8 eb fe ff ff       	call   84a87e2 <_ZN11game_master6CMacro9GetCurCmdEv>
 84a88f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a88fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a88fd:	0f b6 00             	movzbl (%eax),%eax
 84a8900:	0f b6 c0             	movzbl %al,%eax
 84a8903:	3b 45 0c             	cmp    0xc(%ebp),%eax
 84a8906:	75 1a                	jne    84a8922 <_ZN11game_master6CMacro6OnSendEii+0x78>
 84a8908:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a890b:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84a890f:	0f b6 c0             	movzbl %al,%eax
 84a8912:	3b 45 10             	cmp    0x10(%ebp),%eax
 84a8915:	75 0b                	jne    84a8922 <_ZN11game_master6CMacro6OnSendEii+0x78>
 84a8917:	8b 45 08             	mov    0x8(%ebp),%eax
 84a891a:	89 04 24             	mov    %eax,(%esp)
 84a891d:	e8 dc fd ff ff       	call   84a86fe <_ZN11game_master6CMacro7NextCmdEv>
 84a8922:	c9                   	leave
 84a8923:	c3                   	ret

```

```c
// game_master::CMacro::OnSend @ 0x84a88aa

/* game_master::CMacro::OnSend(int, int) */

void __thiscall game_master::CMacro::OnSend(CMacro *this,int param_1,int param_2)

{
  byte *pbVar1;
  
  if (*(int *)this == 1) {
    Recording(this,param_1,param_2,(char *)0x0,0);
  }
  else if (((*(int *)this == 2) && (pbVar1 = (byte *)GetCurCmd(this), (uint)*pbVar1 == param_1)) &&
          ((uint)pbVar1[1] == param_2)) {
    NextCmd(this);
  }
  return;
}

```

---

## Recording

```asm
// === 084a8802 game_master::CMacro::Recording  [0x084a8802-0x84a886f] ===
 84a8802:	55                   	push   %ebp
 84a8803:	89 e5                	mov    %esp,%ebp
 84a8805:	83 ec 28             	sub    $0x28,%esp
 84a8808:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a880b:	89 04 24             	mov    %eax,(%esp)
 84a880e:	e8 57 b7 00 00       	call   84b3f6a <_ZN11game_master11stMacroDataC1Ev>
 84a8813:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a8816:	88 45 ec             	mov    %al,-0x14(%ebp)
 84a8819:	8b 45 10             	mov    0x10(%ebp),%eax
 84a881c:	88 45 ed             	mov    %al,-0x13(%ebp)
 84a881f:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 84a8823:	74 33                	je     84a8858 <_ZN11game_master6CMacro9RecordingEiiPci+0x56>
 84a8825:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 84a8829:	74 2d                	je     84a8858 <_ZN11game_master6CMacro9RecordingEiiPci+0x56>
 84a882b:	8b 45 18             	mov    0x18(%ebp),%eax
 84a882e:	89 04 24             	mov    %eax,(%esp)
 84a8831:	e8 8a a5 27 00       	call   8722dc0 <_Znaj>
 84a8836:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a8839:	8b 55 18             	mov    0x18(%ebp),%edx
 84a883c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a883f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8843:	8b 55 14             	mov    0x14(%ebp),%edx
 84a8846:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a884a:	89 04 24             	mov    %eax,(%esp)
 84a884d:	e8 4e 50 bd ff       	call   807d8a0 <memcpy@plt>
 84a8852:	8b 45 18             	mov    0x18(%ebp),%eax
 84a8855:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a8858:	8b 45 08             	mov    0x8(%ebp),%eax
 84a885b:	8d 50 04             	lea    0x4(%eax),%edx
 84a885e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8861:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8865:	89 14 24             	mov    %edx,(%esp)
 84a8868:	e8 2f be 00 00       	call   84b469c <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EE9push_backERKS1_>
 84a886d:	c9                   	leave
 84a886e:	c3                   	ret
 84a886f:	90                   	nop

```

```c
// game_master::CMacro::Recording @ 0x84a8802

/* game_master::CMacro::Recording(int, int, char*, int) */

void __thiscall
game_master::CMacro::Recording(CMacro *this,int param_1,int param_2,char *param_3,int param_4)

{
  stMacroData local_18;
  undefined1 local_17;
  void *local_14;
  int local_10;
  
  stMacroData::stMacroData(&local_18);
  local_18 = SUB41(param_1,0);
  local_17 = (undefined1)param_2;
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    local_14 = operator_new__(param_4);
    memcpy(local_14,param_3,param_4);
    local_10 = param_4;
  }
  std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::push_back
            ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)(this + 4)
             ,&local_18);
  return;
}

```

---

## Reset

```asm
// === 084a85b4 game_master::CMacro::Reset  [0x084a85b4-0x84a865b] ===
 84a85b4:	55                   	push   %ebp
 84a85b5:	89 e5                	mov    %esp,%ebp
 84a85b7:	83 ec 28             	sub    $0x28,%esp
 84a85ba:	8b 45 08             	mov    0x8(%ebp),%eax
 84a85bd:	83 c0 04             	add    $0x4,%eax
 84a85c0:	89 04 24             	mov    %eax,(%esp)
 84a85c3:	e8 38 c0 00 00       	call   84b4600 <_ZNKSt6vectorIN11game_master11stMacroDataESaIS1_EE5emptyEv>
 84a85c8:	83 f0 01             	xor    $0x1,%eax
 84a85cb:	84 c0                	test   %al,%al
 84a85cd:	74 78                	je     84a8647 <_ZN11game_master6CMacro5ResetEv+0x93>
 84a85cf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a85d6:	eb 49                	jmp    84a8621 <_ZN11game_master6CMacro5ResetEv+0x6d>
 84a85d8:	8b 45 08             	mov    0x8(%ebp),%eax
 84a85db:	8d 50 04             	lea    0x4(%eax),%edx
 84a85de:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a85e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a85e5:	89 14 24             	mov    %edx,(%esp)
 84a85e8:	e8 79 c0 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a85ed:	8b 40 04             	mov    0x4(%eax),%eax
 84a85f0:	85 c0                	test   %eax,%eax
 84a85f2:	0f 95 c0             	setne  %al
 84a85f5:	84 c0                	test   %al,%al
 84a85f7:	74 24                	je     84a861d <_ZN11game_master6CMacro5ResetEv+0x69>
 84a85f9:	8b 45 08             	mov    0x8(%ebp),%eax
 84a85fc:	8d 50 04             	lea    0x4(%eax),%edx
 84a85ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a8602:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8606:	89 14 24             	mov    %edx,(%esp)
 84a8609:	e8 58 c0 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a860e:	8b 40 04             	mov    0x4(%eax),%eax
 84a8611:	85 c0                	test   %eax,%eax
 84a8613:	74 08                	je     84a861d <_ZN11game_master6CMacro5ResetEv+0x69>
 84a8615:	89 04 24             	mov    %eax,(%esp)
 84a8618:	e8 93 c5 27 00       	call   8724bb0 <_ZdaPv>
 84a861d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a8621:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8624:	83 c0 04             	add    $0x4,%eax
 84a8627:	89 04 24             	mov    %eax,(%esp)
 84a862a:	e8 15 c0 00 00       	call   84b4644 <_ZNKSt6vectorIN11game_master11stMacroDataESaIS1_EE4sizeEv>
 84a862f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84a8632:	0f 97 c0             	seta   %al
 84a8635:	84 c0                	test   %al,%al
 84a8637:	75 9f                	jne    84a85d8 <_ZN11game_master6CMacro5ResetEv+0x24>
 84a8639:	8b 45 08             	mov    0x8(%ebp),%eax
 84a863c:	83 c0 04             	add    $0x4,%eax
 84a863f:	89 04 24             	mov    %eax,(%esp)
 84a8642:	e8 39 c0 00 00       	call   84b4680 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EE5clearEv>
 84a8647:	8b 45 08             	mov    0x8(%ebp),%eax
 84a864a:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 84a8651:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8654:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a865a:	c9                   	leave
 84a865b:	c3                   	ret

```

```c
// game_master::CMacro::Reset @ 0x84a85b4

/* game_master::CMacro::Reset() */

void __thiscall game_master::CMacro::Reset(CMacro *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  cVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::empty();
  if (cVar1 != '\x01') {
    local_10 = 0;
    while( true ) {
      uVar3 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                        ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4));
      if (uVar3 <= local_10) break;
      iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
              operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                          *)(this + 4),local_10);
      if (*(int *)(iVar2 + 4) != 0) {
        iVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
                operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>
                            *)(this + 4),local_10);
        if (*(void **)(iVar2 + 4) != (void *)0x0) {
          operator_delete__(*(void **)(iVar2 + 4));
        }
      }
      local_10 = local_10 + 1;
    }
    std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::clear
              ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
               (this + 4));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)this = 0;
  return;
}

```

---

## RudMacro

```asm
// === 084a8686 game_master::CMacro::RudMacro  [0x084a8686-0x84a86fd] ===
 84a8686:	55                   	push   %ebp
 84a8687:	89 e5                	mov    %esp,%ebp
 84a8689:	83 ec 28             	sub    $0x28,%esp
 84a868c:	8b 45 08             	mov    0x8(%ebp),%eax
 84a868f:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 84a8695:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a869c:	eb 45                	jmp    84a86e3 <_ZN11game_master6CMacro8RudMacroEv+0x5d>
 84a869e:	8b 45 08             	mov    0x8(%ebp),%eax
 84a86a1:	8d 50 04             	lea    0x4(%eax),%edx
 84a86a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a86a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a86ab:	89 14 24             	mov    %edx,(%esp)
 84a86ae:	e8 b3 bf 00 00       	call   84b4666 <_ZNSt6vectorIN11game_master11stMacroDataESaIS1_EEixEj>
 84a86b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a86b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a86b9:	8b 40 04             	mov    0x4(%eax),%eax
 84a86bc:	85 c0                	test   %eax,%eax
 84a86be:	74 1f                	je     84a86df <_ZN11game_master6CMacro8RudMacroEv+0x59>
 84a86c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a86c3:	8b 50 08             	mov    0x8(%eax),%edx
 84a86c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a86c9:	8b 40 04             	mov    0x4(%eax),%eax
 84a86cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a86d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a86d4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a86d7:	89 04 24             	mov    %eax,(%esp)
 84a86da:	e8 45 02 00 00       	call   84a8924 <_ZN11game_master6CMacro10SendPacketEPKci>
 84a86df:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84a86e3:	8b 45 08             	mov    0x8(%ebp),%eax
 84a86e6:	83 c0 04             	add    $0x4,%eax
 84a86e9:	89 04 24             	mov    %eax,(%esp)
 84a86ec:	e8 53 bf 00 00       	call   84b4644 <_ZNKSt6vectorIN11game_master11stMacroDataESaIS1_EE4sizeEv>
 84a86f1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84a86f4:	0f 97 c0             	seta   %al
 84a86f7:	84 c0                	test   %al,%al
 84a86f9:	75 a3                	jne    84a869e <_ZN11game_master6CMacro8RudMacroEv+0x18>
 84a86fb:	c9                   	leave
 84a86fc:	c3                   	ret
 84a86fd:	90                   	nop

```

```c
// game_master::CMacro::RudMacro @ 0x84a8686

/* game_master::CMacro::RudMacro() */

void __thiscall game_master::CMacro::RudMacro(CMacro *this)

{
  int iVar1;
  uint uVar2;
  uint local_14;
  
  *(undefined4 *)this = 2;
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::size
                      ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4));
    if (uVar2 <= local_14) break;
    iVar1 = std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::
            operator[]((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)
                       (this + 4),local_14);
    if (*(int *)(iVar1 + 4) != 0) {
      SendPacket(this,*(char **)(iVar1 + 4),*(int *)(iVar1 + 8));
    }
    local_14 = local_14 + 1;
  }
  return;
}

```

---

## SendPacket

```asm
// === 084a8924 game_master::CMacro::SendPacket  [0x084a8924-0x84a8a99] ===
 84a8924:	55                   	push   %ebp
 84a8925:	89 e5                	mov    %esp,%ebp
 84a8927:	56                   	push   %esi
 84a8928:	53                   	push   %ebx
 84a8929:	83 ec 20             	sub    $0x20,%esp
 84a892c:	8b 45 10             	mov    0x10(%ebp),%eax
 84a892f:	83 c0 08             	add    $0x8,%eax
 84a8932:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a8935:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a893c:	00 
 84a893d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8940:	89 04 24             	mov    %eax,(%esp)
 84a8943:	e8 e4 5c c3 ff       	call   80de62c <_ZN12CStreamGuardC1Eb>
 84a8948:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
 84a894f:	7f 2e                	jg     84a897f <_ZN11game_master6CMacro10SendPacketEPKci+0x5b>
 84a8951:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 84a8956:	c7 44 24 08 ed 00 00 	movl   $0xed,0x8(%esp)
 84a895d:	00 
 84a895e:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84a8965:	08 
 84a8966:	89 04 24             	mov    %eax,(%esp)
 84a8969:	e8 06 76 de ff       	call   828ff74 <_ZN15SmallStreamPool7AcquireEPKci>
 84a896e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8972:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8975:	89 04 24             	mov    %eax,(%esp)
 84a8978:	e8 c7 5c c3 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 84a897d:	eb 6c                	jmp    84a89eb <_ZN11game_master6CMacro10SendPacketEPKci+0xc7>
 84a897f:	81 7d f4 ff 0f 00 00 	cmpl   $0xfff,-0xc(%ebp)
 84a8986:	7e 37                	jle    84a89bf <_ZN11game_master6CMacro10SendPacketEPKci+0x9b>
 84a8988:	81 7d f4 ff 3f 00 00 	cmpl   $0x3fff,-0xc(%ebp)
 84a898f:	7f 2e                	jg     84a89bf <_ZN11game_master6CMacro10SendPacketEPKci+0x9b>
 84a8991:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84a8996:	c7 44 24 08 f1 00 00 	movl   $0xf1,0x8(%esp)
 84a899d:	00 
 84a899e:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84a89a5:	08 
 84a89a6:	89 04 24             	mov    %eax,(%esp)
 84a89a9:	e8 d8 70 de ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84a89ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a89b2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a89b5:	89 04 24             	mov    %eax,(%esp)
 84a89b8:	e8 87 5c c3 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 84a89bd:	eb 2c                	jmp    84a89eb <_ZN11game_master6CMacro10SendPacketEPKci+0xc7>
 84a89bf:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 84a89c4:	c7 44 24 08 f5 00 00 	movl   $0xf5,0x8(%esp)
 84a89cb:	00 
 84a89cc:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84a89d3:	08 
 84a89d4:	89 04 24             	mov    %eax,(%esp)
 84a89d7:	e8 86 78 de ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 84a89dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a89e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a89e3:	89 04 24             	mov    %eax,(%esp)
 84a89e6:	e8 59 5c c3 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 84a89eb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a89ee:	89 04 24             	mov    %eax,(%esp)
 84a89f1:	e8 50 02 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84a89f6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84a89fd:	00 
 84a89fe:	89 04 24             	mov    %eax,(%esp)
 84a8a01:	e8 50 02 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84a8a06:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8a09:	8b 40 14             	mov    0x14(%eax),%eax
 84a8a0c:	89 04 24             	mov    %eax,(%esp)
 84a8a0f:	e8 82 02 c2 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84a8a14:	89 c3                	mov    %eax,%ebx
 84a8a16:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8a19:	89 04 24             	mov    %eax,(%esp)
 84a8a1c:	e8 25 02 c2 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84a8a21:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a8a25:	89 04 24             	mov    %eax,(%esp)
 84a8a28:	e8 29 02 c2 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84a8a2d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8a30:	89 04 24             	mov    %eax,(%esp)
 84a8a33:	e8 16 02 c2 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84a8a38:	8b 55 10             	mov    0x10(%ebp),%edx
 84a8a3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8a3f:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a8a42:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8a46:	89 04 24             	mov    %eax,(%esp)
 84a8a49:	e8 04 5c c3 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84a8a4e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84a8a53:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84a8a56:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8a5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84a8a61:	00 
 84a8a62:	89 04 24             	mov    %eax,(%esp)
 84a8a65:	e8 74 85 0c 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84a8a6a:	eb 1b                	jmp    84a8a87 <_ZN11game_master6CMacro10SendPacketEPKci+0x163>
 84a8a6c:	89 d3                	mov    %edx,%ebx
 84a8a6e:	89 c6                	mov    %eax,%esi
 84a8a70:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8a73:	89 04 24             	mov    %eax,(%esp)
 84a8a76:	e8 57 3e 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84a8a7b:	89 f0                	mov    %esi,%eax
 84a8a7d:	89 da                	mov    %ebx,%edx
 84a8a7f:	89 04 24             	mov    %eax,(%esp)
 84a8a82:	e8 c9 ac 63 00       	call   8ae3750 <_Unwind_Resume>
 84a8a87:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84a8a8a:	89 04 24             	mov    %eax,(%esp)
 84a8a8d:	e8 40 3e 17 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84a8a92:	83 c4 20             	add    $0x20,%esp
 84a8a95:	5b                   	pop    %ebx
 84a8a96:	5e                   	pop    %esi
 84a8a97:	5d                   	pop    %ebp
 84a8a98:	c3                   	ret
 84a8a99:	90                   	nop

```

```c
// game_master::CMacro::SendPacket @ 0x84a8924

/* game_master::CMacro::SendPacket(char const*, int) */

void __thiscall game_master::CMacro::SendPacket(CMacro *this,char *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  int local_10;
  
  local_10 = param_2 + 8;
  CStreamGuard::CStreamGuard(local_18,true);
  if (local_10 < 0x1000) {
                    /* try { // try from 084a8969 to 084a8a69 has its CatchHandler @ 084a8a6c */
    pSVar1 = (Stream *)
             SmallStreamPool::Acquire(GlobalData::s_small_stream_pool,"GameMaster.cpp",0xed);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else if ((local_10 < 0x1000) || (0x3fff < local_10)) {
    pSVar1 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"GameMaster.cpp",0xf5);
    CStreamGuard::Set(local_18,pSVar1);
  }
  else {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"GameMaster.cpp",0xf1);
    CStreamGuard::Set(local_18,pSVar1);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,0);
  iVar3 = CUser::GetUID(*(CUser **)(this + 0x14));
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar2,param_1,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## StartMacro

```asm
// === 084a865c game_master::CMacro::StartMacro  [0x084a865c-0x84a8677] ===
 84a865c:	55                   	push   %ebp
 84a865d:	89 e5                	mov    %esp,%ebp
 84a865f:	83 ec 18             	sub    $0x18,%esp
 84a8662:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8665:	89 04 24             	mov    %eax,(%esp)
 84a8668:	e8 47 ff ff ff       	call   84a85b4 <_ZN11game_master6CMacro5ResetEv>
 84a866d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8670:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 84a8676:	c9                   	leave
 84a8677:	c3                   	ret

```

```c
// game_master::CMacro::StartMacro @ 0x84a865c

/* game_master::CMacro::StartMacro() */

void __thiscall game_master::CMacro::StartMacro(CMacro *this)

{
  Reset(this);
  *(undefined4 *)this = 1;
  return;
}

```

---

## StopMacro

```asm
// === 084a8678 game_master::CMacro::StopMacro  [0x084a8678-0x84a8685] ===
 84a8678:	55                   	push   %ebp
 84a8679:	89 e5                	mov    %esp,%ebp
 84a867b:	8b 45 08             	mov    0x8(%ebp),%eax
 84a867e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84a8684:	5d                   	pop    %ebp
 84a8685:	c3                   	ret

```

```c
// game_master::CMacro::StopMacro @ 0x84a8678

/* game_master::CMacro::StopMacro() */

void __thiscall game_master::CMacro::StopMacro(CMacro *this)

{
  *(undefined4 *)this = 0;
  return;
}

```


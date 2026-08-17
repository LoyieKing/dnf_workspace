# Dispatcher_TitleBookPut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d774e Dispatcher_TitleBookPut::process  [0x081d774e-0x81d7973] ===
 81d774e:	55                   	push   %ebp
 81d774f:	89 e5                	mov    %esp,%ebp
 81d7751:	56                   	push   %esi
 81d7752:	53                   	push   %ebx
 81d7753:	83 ec 40             	sub    $0x40,%esp
 81d7756:	8b 45 10             	mov    0x10(%ebp),%eax
 81d7759:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d775c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d775f:	89 04 24             	mov    %eax,(%esp)
 81d7762:	e8 25 2c f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d7767:	83 f8 02             	cmp    $0x2,%eax
 81d776a:	0f 9e c0             	setle  %al
 81d776d:	84 c0                	test   %al,%al
 81d776f:	74 0a                	je     81d777b <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d7771:	b8 00 00 00 00       	mov    $0x0,%eax
 81d7776:	e9 f2 01 00 00       	jmp    81d796d <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x21f>
 81d777b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d777e:	8b 70 1d             	mov    0x1d(%eax),%esi
 81d7781:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7784:	8b 40 19             	mov    0x19(%eax),%eax
 81d7787:	89 c3                	mov    %eax,%ebx
 81d7789:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d778c:	8b 48 15             	mov    0x15(%eax),%ecx
 81d778f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7792:	8b 50 11             	mov    0x11(%eax),%edx
 81d7795:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7798:	8b 40 0d             	mov    0xd(%eax),%eax
 81d779b:	89 74 24 14          	mov    %esi,0x14(%esp)
 81d779f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81d77a3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d77a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d77ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d77af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d77b2:	89 04 24             	mov    %eax,(%esp)
 81d77b5:	e8 9e a8 46 00       	call   8642058 <_ZN10CTitleBook8putTitleEP5CUser14ENUM_ITEMSPACEii24ENUM_TITLE_BOOK_CATEGORYi>
 81d77ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d77bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d77c1:	0f 84 c7 00 00 00    	je     81d788e <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x140>
 81d77c7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d77ca:	89 04 24             	mov    %eax,(%esp)
 81d77cd:	e8 7a 65 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d77d2:	c7 44 24 08 9c 01 00 	movl   $0x19c,0x8(%esp)
 81d77d9:	00 
 81d77da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d77e1:	00 
 81d77e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d77e5:	89 04 24             	mov    %eax,(%esp)
 81d77e8:	e8 0f 41 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d77ed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d77f4:	00 
 81d77f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d77f8:	89 04 24             	mov    %eax,(%esp)
 81d77fb:	e8 20 41 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d7800:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7803:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7807:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d780a:	89 04 24             	mov    %eax,(%esp)
 81d780d:	e8 0e 41 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d7812:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7815:	8b 40 0d             	mov    0xd(%eax),%eax
 81d7818:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d781c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d781f:	89 04 24             	mov    %eax,(%esp)
 81d7822:	e8 15 41 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7827:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d782a:	8b 40 19             	mov    0x19(%eax),%eax
 81d782d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7831:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7834:	89 04 24             	mov    %eax,(%esp)
 81d7837:	e8 00 41 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d783c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7843:	00 
 81d7844:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7847:	89 04 24             	mov    %eax,(%esp)
 81d784a:	e8 09 41 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d784f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7852:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7856:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7859:	89 04 24             	mov    %eax,(%esp)
 81d785c:	e8 59 0d 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d7861:	eb 1b                	jmp    81d787e <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x130>
 81d7863:	89 d3                	mov    %edx,%ebx
 81d7865:	89 c6                	mov    %eax,%esi
 81d7867:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d786a:	89 04 24             	mov    %eax,(%esp)
 81d786d:	e8 0e 66 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7872:	89 f0                	mov    %esi,%eax
 81d7874:	89 da                	mov    %ebx,%edx
 81d7876:	89 04 24             	mov    %eax,(%esp)
 81d7879:	e8 d2 be 90 00       	call   8ae3750 <_Unwind_Resume>
 81d787e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81d7881:	89 04 24             	mov    %eax,(%esp)
 81d7884:	e8 f7 65 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7889:	e9 da 00 00 00       	jmp    81d7968 <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x21a>
 81d788e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7891:	89 04 24             	mov    %eax,(%esp)
 81d7894:	e8 b3 64 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d7899:	c7 44 24 08 9c 01 00 	movl   $0x19c,0x8(%esp)
 81d78a0:	00 
 81d78a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d78a8:	00 
 81d78a9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d78ac:	89 04 24             	mov    %eax,(%esp)
 81d78af:	e8 48 40 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d78b4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d78bb:	00 
 81d78bc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d78bf:	89 04 24             	mov    %eax,(%esp)
 81d78c2:	e8 59 40 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d78c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d78ca:	8b 40 0d             	mov    0xd(%eax),%eax
 81d78cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d78d1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d78d4:	89 04 24             	mov    %eax,(%esp)
 81d78d7:	e8 60 40 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d78dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d78df:	8b 40 11             	mov    0x11(%eax),%eax
 81d78e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d78e6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d78e9:	89 04 24             	mov    %eax,(%esp)
 81d78ec:	e8 4b 40 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d78f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d78f4:	8b 40 19             	mov    0x19(%eax),%eax
 81d78f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d78fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d78fe:	89 04 24             	mov    %eax,(%esp)
 81d7901:	e8 36 40 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d7906:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d7909:	8b 40 1d             	mov    0x1d(%eax),%eax
 81d790c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7910:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7913:	89 04 24             	mov    %eax,(%esp)
 81d7916:	e8 21 40 ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d791b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d7922:	00 
 81d7923:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7926:	89 04 24             	mov    %eax,(%esp)
 81d7929:	e8 2a 40 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d792e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7931:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7935:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7938:	89 04 24             	mov    %eax,(%esp)
 81d793b:	e8 7a 0c 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d7940:	eb 1b                	jmp    81d795d <_ZN23Dispatcher_TitleBookPut7processEP5CUserR8MSG_BASER9ParamBase+0x20f>
 81d7942:	89 d3                	mov    %edx,%ebx
 81d7944:	89 c6                	mov    %eax,%esi
 81d7946:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7949:	89 04 24             	mov    %eax,(%esp)
 81d794c:	e8 2f 65 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7951:	89 f0                	mov    %esi,%eax
 81d7953:	89 da                	mov    %ebx,%edx
 81d7955:	89 04 24             	mov    %eax,(%esp)
 81d7958:	e8 f3 bd 90 00       	call   8ae3750 <_Unwind_Resume>
 81d795d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d7960:	89 04 24             	mov    %eax,(%esp)
 81d7963:	e8 18 65 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d7968:	b8 00 00 00 00       	mov    $0x0,%eax
 81d796d:	83 c4 40             	add    $0x40,%esp
 81d7970:	5b                   	pop    %ebx
 81d7971:	5e                   	pop    %esi
 81d7972:	5d                   	pop    %ebp
 81d7973:	c3                   	ret

```

```c
// Dispatcher_TitleBookPut::process @ 0x81d774e

/* Dispatcher_TitleBookPut::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_TitleBookPut::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  PacketGuard local_2c [12];
  PacketGuard local_20 [12];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = CTitleBook::putTitle
                         (param_2,*(undefined4 *)(local_14 + 0xd),*(undefined4 *)(local_14 + 0x11),
                          *(undefined4 *)(local_14 + 0x15),*(undefined4 *)(local_14 + 0x19),
                          *(undefined4 *)(local_14 + 0x1d));
    if (local_10 == 0) {
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 081d78af to 081d793f has its CatchHandler @ 081d7942 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x19c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x11));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_14 + 0x1d));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d77e8 to 081d7860 has its CatchHandler @ 081d7863 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x19c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xd));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x19));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}

```

---

## read

```asm
// === 081d75e8 Dispatcher_TitleBookPut::read  [0x081d75e8-0x81d774d] ===
 81d75e8:	55                   	push   %ebp
 81d75e9:	89 e5                	mov    %esp,%ebp
 81d75eb:	83 ec 28             	sub    $0x28,%esp
 81d75ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81d75f1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d75f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d75f7:	83 c0 0d             	add    $0xd,%eax
 81d75fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d75fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7601:	89 04 24             	mov    %eax,(%esp)
 81d7604:	e8 e7 5a 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7609:	83 f0 01             	xor    $0x1,%eax
 81d760c:	84 c0                	test   %al,%al
 81d760e:	74 29                	je     81d7639 <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x51>
 81d7610:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7617:	00 
 81d7618:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d761f:	00 
 81d7620:	c7 44 24 04 60 28 bd 	movl   $0x8bd2860,0x4(%esp)
 81d7627:	08 
 81d7628:	c7 04 24 d4 41 00 00 	movl   $0x41d4,(%esp)
 81d762f:	e8 a3 92 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7634:	e9 13 01 00 00       	jmp    81d774c <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x164>
 81d7639:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d763c:	83 c0 11             	add    $0x11,%eax
 81d763f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7643:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7646:	89 04 24             	mov    %eax,(%esp)
 81d7649:	e8 a2 5a 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d764e:	83 f0 01             	xor    $0x1,%eax
 81d7651:	84 c0                	test   %al,%al
 81d7653:	74 29                	je     81d767e <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x96>
 81d7655:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d765c:	00 
 81d765d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7664:	00 
 81d7665:	c7 44 24 04 60 28 bd 	movl   $0x8bd2860,0x4(%esp)
 81d766c:	08 
 81d766d:	c7 04 24 d6 41 00 00 	movl   $0x41d6,(%esp)
 81d7674:	e8 5e 92 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7679:	e9 ce 00 00 00       	jmp    81d774c <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x164>
 81d767e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7681:	83 c0 15             	add    $0x15,%eax
 81d7684:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d7688:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d768b:	89 04 24             	mov    %eax,(%esp)
 81d768e:	e8 5d 5a 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d7693:	83 f0 01             	xor    $0x1,%eax
 81d7696:	84 c0                	test   %al,%al
 81d7698:	74 29                	je     81d76c3 <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0xdb>
 81d769a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d76a1:	00 
 81d76a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d76a9:	00 
 81d76aa:	c7 44 24 04 60 28 bd 	movl   $0x8bd2860,0x4(%esp)
 81d76b1:	08 
 81d76b2:	c7 04 24 d8 41 00 00 	movl   $0x41d8,(%esp)
 81d76b9:	e8 19 92 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d76be:	e9 89 00 00 00       	jmp    81d774c <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x164>
 81d76c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d76c6:	83 c0 19             	add    $0x19,%eax
 81d76c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d76cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d76d0:	89 04 24             	mov    %eax,(%esp)
 81d76d3:	e8 18 5a 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d76d8:	83 f0 01             	xor    $0x1,%eax
 81d76db:	84 c0                	test   %al,%al
 81d76dd:	74 26                	je     81d7705 <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x11d>
 81d76df:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d76e6:	00 
 81d76e7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d76ee:	00 
 81d76ef:	c7 44 24 04 60 28 bd 	movl   $0x8bd2860,0x4(%esp)
 81d76f6:	08 
 81d76f7:	c7 04 24 da 41 00 00 	movl   $0x41da,(%esp)
 81d76fe:	e8 d4 91 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7703:	eb 47                	jmp    81d774c <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x164>
 81d7705:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d7708:	83 c0 1d             	add    $0x1d,%eax
 81d770b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d770f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d7712:	89 04 24             	mov    %eax,(%esp)
 81d7715:	e8 d6 59 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81d771a:	83 f0 01             	xor    $0x1,%eax
 81d771d:	84 c0                	test   %al,%al
 81d771f:	74 26                	je     81d7747 <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x15f>
 81d7721:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d7728:	00 
 81d7729:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d7730:	00 
 81d7731:	c7 44 24 04 60 28 bd 	movl   $0x8bd2860,0x4(%esp)
 81d7738:	08 
 81d7739:	c7 04 24 dc 41 00 00 	movl   $0x41dc,(%esp)
 81d7740:	e8 92 91 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d7745:	eb 05                	jmp    81d774c <_ZN23Dispatcher_TitleBookPut4readER9PacketBufR8MSG_BASE+0x164>
 81d7747:	b8 00 00 00 00       	mov    $0x0,%eax
 81d774c:	c9                   	leave
 81d774d:	c3                   	ret

```

```c
// Dispatcher_TitleBookPut::read @ 0x81d75e8

/* Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_TitleBookPut::read(Dispatcher_TitleBookPut *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x19));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1d));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x41dc,
                             "virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar2 = LineFunc(0x41da,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x41d8,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x41d6,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x41d4,"virtual int Dispatcher_TitleBookPut::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```


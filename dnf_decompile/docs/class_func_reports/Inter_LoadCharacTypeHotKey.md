# Inter_LoadCharacTypeHotKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e87de Inter_LoadCharacTypeHotKey::dispatch_sig  [0x084e87de-0x84e8905] ===
 84e87de:	55                   	push   %ebp
 84e87df:	89 e5                	mov    %esp,%ebp
 84e87e1:	56                   	push   %esi
 84e87e2:	53                   	push   %ebx
 84e87e3:	83 ec 30             	sub    $0x30,%esp
 84e87e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e87e9:	89 04 24             	mov    %eax,(%esp)
 84e87ec:	e8 9b 1b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e87f1:	83 f8 01             	cmp    $0x1,%eax
 84e87f4:	0f 9e c0             	setle  %al
 84e87f7:	84 c0                	test   %al,%al
 84e87f9:	74 0a                	je     84e8805 <_ZN26Inter_LoadCharacTypeHotKey12dispatch_sigEP5CUserPci+0x27>
 84e87fb:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e8800:	e9 f8 00 00 00       	jmp    84e88fd <_ZN26Inter_LoadCharacTypeHotKey12dispatch_sigEP5CUserPci+0x11f>
 84e8805:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8808:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e880b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e880e:	89 04 24             	mov    %eax,(%esp)
 84e8811:	e8 38 74 d4 ff       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 84e8816:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8819:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e881c:	8d 50 05             	lea    0x5(%eax),%edx
 84e881f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8822:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e8826:	0f b6 c0             	movzbl %al,%eax
 84e8829:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e882d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8831:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8834:	89 04 24             	mov    %eax,(%esp)
 84e8837:	e8 b4 e4 fc ff       	call   84b6cf0 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption>
 84e883c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e883f:	89 04 24             	mov    %eax,(%esp)
 84e8842:	e8 05 55 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e8847:	c7 44 24 08 c4 01 00 	movl   $0x1c4,0x8(%esp)
 84e884e:	00 
 84e884f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e8856:	00 
 84e8857:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e885a:	89 04 24             	mov    %eax,(%esp)
 84e885d:	e8 9a 30 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e8862:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8865:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e8869:	0f b6 c0             	movzbl %al,%eax
 84e886c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8870:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e8873:	89 04 24             	mov    %eax,(%esp)
 84e8876:	e8 a5 30 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e887b:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 84e8882:	00 
 84e8883:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e8886:	89 04 24             	mov    %eax,(%esp)
 84e8889:	e8 ae 30 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e888e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8891:	83 c0 05             	add    $0x5,%eax
 84e8894:	c7 44 24 08 bc 00 00 	movl   $0xbc,0x8(%esp)
 84e889b:	00 
 84e889c:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e88a0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e88a3:	89 04 24             	mov    %eax,(%esp)
 84e88a6:	e8 5d 56 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e88ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e88b2:	00 
 84e88b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e88b6:	89 04 24             	mov    %eax,(%esp)
 84e88b9:	e8 9a 30 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e88be:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e88c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e88c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e88c8:	89 04 24             	mov    %eax,(%esp)
 84e88cb:	e8 ea fc 15 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e88d0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e88d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e88d8:	89 04 24             	mov    %eax,(%esp)
 84e88db:	e8 a0 55 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e88e0:	eb 1b                	jmp    84e88fd <_ZN26Inter_LoadCharacTypeHotKey12dispatch_sigEP5CUserPci+0x11f>
 84e88e2:	89 d3                	mov    %edx,%ebx
 84e88e4:	89 c6                	mov    %eax,%esi
 84e88e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e88e9:	89 04 24             	mov    %eax,(%esp)
 84e88ec:	e8 8f 55 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e88f1:	89 f0                	mov    %esi,%eax
 84e88f3:	89 da                	mov    %ebx,%edx
 84e88f5:	89 04 24             	mov    %eax,(%esp)
 84e88f8:	e8 53 ae 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e88fd:	89 d8                	mov    %ebx,%eax
 84e88ff:	83 c4 30             	add    $0x30,%esp
 84e8902:	5b                   	pop    %ebx
 84e8903:	5e                   	pop    %esi
 84e8904:	5d                   	pop    %ebp
 84e8905:	c3                   	ret

```

```c
// Inter_LoadCharacTypeHotKey::dispatch_sig @ 0x84e87de

/* Inter_LoadCharacTypeHotKey::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharacTypeHotKey::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  CGameOption *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (1 < iVar1) {
    local_14 = param_3;
    local_10 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
    CGameOption::SetHotKeyOption(local_10,*(uchar *)(local_14 + 4),(CHotkeyOption *)(local_14 + 5));
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e885d to 084e88cf has its CatchHandler @ 084e88e2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1c4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0xbc);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 5),0xbc);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```


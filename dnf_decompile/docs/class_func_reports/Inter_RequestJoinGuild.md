# Inter_RequestJoinGuild

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e3924 Inter_RequestJoinGuild::dispatch_sig  [0x084e3924-0x84e3acd] ===
 84e3924:	55                   	push   %ebp
 84e3925:	89 e5                	mov    %esp,%ebp
 84e3927:	56                   	push   %esi
 84e3928:	53                   	push   %ebx
 84e3929:	83 ec 30             	sub    $0x30,%esp
 84e392c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e392f:	89 04 24             	mov    %eax,(%esp)
 84e3932:	e8 55 6a bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e3937:	83 f8 02             	cmp    $0x2,%eax
 84e393a:	0f 9e c0             	setle  %al
 84e393d:	84 c0                	test   %al,%al
 84e393f:	74 0a                	je     84e394b <_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci+0x27>
 84e3941:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3946:	e9 7b 01 00 00       	jmp    84e3ac6 <_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci+0x1a2>
 84e394b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e394e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e3951:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3954:	8b 00                	mov    (%eax),%eax
 84e3956:	85 c0                	test   %eax,%eax
 84e3958:	74 24                	je     84e397e <_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci+0x5a>
 84e395a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e395d:	8b 00                	mov    (%eax),%eax
 84e395f:	0f b6 c0             	movzbl %al,%eax
 84e3962:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3966:	c7 44 24 04 5d 01 00 	movl   $0x15d,0x4(%esp)
 84e396d:	00 
 84e396e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3971:	89 04 24             	mov    %eax,(%esp)
 84e3974:	e8 c9 85 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e3979:	e9 43 01 00 00       	jmp    84e3ac1 <_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci+0x19d>
 84e397e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3981:	89 04 24             	mov    %eax,(%esp)
 84e3984:	e8 c3 a3 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e3989:	c7 44 24 08 5d 01 00 	movl   $0x15d,0x8(%esp)
 84e3990:	00 
 84e3991:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3998:	00 
 84e3999:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e399c:	89 04 24             	mov    %eax,(%esp)
 84e399f:	e8 58 7f be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e39a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e39ab:	00 
 84e39ac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e39af:	89 04 24             	mov    %eax,(%esp)
 84e39b2:	e8 69 7f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e39b7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e39ba:	8b 40 04             	mov    0x4(%eax),%eax
 84e39bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e39c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e39c4:	89 04 24             	mov    %eax,(%esp)
 84e39c7:	e8 70 7f be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e39cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e39cf:	83 c0 26             	add    $0x26,%eax
 84e39d2:	89 04 24             	mov    %eax,(%esp)
 84e39d5:	e8 d6 a9 b9 ff       	call   807e3b0 <strlen@plt>
 84e39da:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e39dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e39e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e39e4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e39e7:	89 04 24             	mov    %eax,(%esp)
 84e39ea:	e8 4d 7f be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e39ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e39f2:	8d 50 26             	lea    0x26(%eax),%edx
 84e39f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e39f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e39fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3a00:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a03:	89 04 24             	mov    %eax,(%esp)
 84e3a06:	e8 d9 39 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3a0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3a0e:	83 c0 08             	add    $0x8,%eax
 84e3a11:	89 04 24             	mov    %eax,(%esp)
 84e3a14:	e8 97 a9 b9 ff       	call   807e3b0 <strlen@plt>
 84e3a19:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e3a1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3a1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3a23:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a26:	89 04 24             	mov    %eax,(%esp)
 84e3a29:	e8 0e 7f be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3a2e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3a31:	8d 50 08             	lea    0x8(%eax),%edx
 84e3a34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e3a37:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e3a3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e3a3f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a42:	89 04 24             	mov    %eax,(%esp)
 84e3a45:	e8 9a 39 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e3a4a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3a4d:	8b 40 40             	mov    0x40(%eax),%eax
 84e3a50:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3a54:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a57:	89 04 24             	mov    %eax,(%esp)
 84e3a5a:	e8 dd 7e be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3a5f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e3a62:	8b 40 44             	mov    0x44(%eax),%eax
 84e3a65:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3a69:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a6c:	89 04 24             	mov    %eax,(%esp)
 84e3a6f:	e8 c8 7e be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e3a74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e3a7b:	00 
 84e3a7c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a7f:	89 04 24             	mov    %eax,(%esp)
 84e3a82:	e8 d1 7e be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e3a87:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3a8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e3a8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e3a91:	89 04 24             	mov    %eax,(%esp)
 84e3a94:	e8 21 4b 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e3a99:	eb 1b                	jmp    84e3ab6 <_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci+0x192>
 84e3a9b:	89 d3                	mov    %edx,%ebx
 84e3a9d:	89 c6                	mov    %eax,%esi
 84e3a9f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3aa2:	89 04 24             	mov    %eax,(%esp)
 84e3aa5:	e8 d6 a3 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3aaa:	89 f0                	mov    %esi,%eax
 84e3aac:	89 da                	mov    %ebx,%edx
 84e3aae:	89 04 24             	mov    %eax,(%esp)
 84e3ab1:	e8 9a fc 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e3ab6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e3ab9:	89 04 24             	mov    %eax,(%esp)
 84e3abc:	e8 bf a3 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e3ac1:	b8 00 00 00 00       	mov    $0x0,%eax
 84e3ac6:	83 c4 30             	add    $0x30,%esp
 84e3ac9:	5b                   	pop    %ebx
 84e3aca:	5e                   	pop    %esi
 84e3acb:	5d                   	pop    %ebp
 84e3acc:	c3                   	ret
 84e3acd:	90                   	nop

```

```c
// Inter_RequestJoinGuild::dispatch_sig @ 0x84e3924

/* Inter_RequestJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = param_3;
    if (*(int *)param_3 == 0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e399f to 084e3a98 has its CatchHandler @ 084e3a9b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      local_10 = strlen((char *)(local_14 + 0x26));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x26),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 8));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 8),local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x44));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15d,*(uint *)param_3 & 0xff);
    }
  }
  return 0;
}

```


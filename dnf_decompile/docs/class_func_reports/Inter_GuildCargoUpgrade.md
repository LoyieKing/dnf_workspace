# Inter_GuildCargoUpgrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ded42 Inter_GuildCargoUpgrade::dispatch_sig  [0x084ded42-0x84dee69] ===
 84ded42:	55                   	push   %ebp
 84ded43:	89 e5                	mov    %esp,%ebp
 84ded45:	56                   	push   %esi
 84ded46:	53                   	push   %ebx
 84ded47:	83 ec 20             	sub    $0x20,%esp
 84ded4a:	8b 45 10             	mov    0x10(%ebp),%eax
 84ded4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ded50:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ded53:	89 04 24             	mov    %eax,(%esp)
 84ded56:	e8 31 b6 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ded5b:	83 f8 02             	cmp    $0x2,%eax
 84ded5e:	0f 9e c0             	setle  %al
 84ded61:	84 c0                	test   %al,%al
 84ded63:	74 0a                	je     84ded6f <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0x2d>
 84ded65:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ded6a:	e9 f2 00 00 00       	jmp    84dee61 <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0x11f>
 84ded6f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ded76:	ff 
 84ded77:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ded7a:	89 04 24             	mov    %eax,(%esp)
 84ded7d:	e8 1e f2 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ded82:	89 c2                	mov    %eax,%edx
 84ded84:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ded87:	8b 40 0e             	mov    0xe(%eax),%eax
 84ded8a:	39 c2                	cmp    %eax,%edx
 84ded8c:	0f 95 c0             	setne  %al
 84ded8f:	84 c0                	test   %al,%al
 84ded91:	74 0a                	je     84ded9d <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0x5b>
 84ded93:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ded98:	e9 c4 00 00 00       	jmp    84dee61 <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0x11f>
 84ded9d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84deda0:	89 04 24             	mov    %eax,(%esp)
 84deda3:	e8 a4 ef 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84deda8:	c7 44 24 08 0d 01 00 	movl   $0x10d,0x8(%esp)
 84dedaf:	00 
 84dedb0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dedb7:	00 
 84dedb8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dedbb:	89 04 24             	mov    %eax,(%esp)
 84dedbe:	e8 39 cb be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dedc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dedc6:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dedca:	3c c1                	cmp    $0xc1,%al
 84dedcc:	74 2e                	je     84dedfc <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0xba>
 84dedce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dedd5:	00 
 84dedd6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dedd9:	89 04 24             	mov    %eax,(%esp)
 84deddc:	e8 3f cb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dede1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dede4:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84dede8:	0f b6 c0             	movzbl %al,%eax
 84dedeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dedef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dedf2:	89 04 24             	mov    %eax,(%esp)
 84dedf5:	e8 26 cb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dedfa:	eb 13                	jmp    84dee0f <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0xcd>
 84dedfc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dee03:	00 
 84dee04:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dee07:	89 04 24             	mov    %eax,(%esp)
 84dee0a:	e8 11 cb be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dee0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dee16:	00 
 84dee17:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dee1a:	89 04 24             	mov    %eax,(%esp)
 84dee1d:	e8 36 cb be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dee22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dee25:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dee29:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dee2c:	89 04 24             	mov    %eax,(%esp)
 84dee2f:	e8 86 97 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dee34:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dee39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dee3c:	89 04 24             	mov    %eax,(%esp)
 84dee3f:	e8 3c f0 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dee44:	eb 1b                	jmp    84dee61 <_ZN23Inter_GuildCargoUpgrade12dispatch_sigEP5CUserPci+0x11f>
 84dee46:	89 d3                	mov    %edx,%ebx
 84dee48:	89 c6                	mov    %eax,%esi
 84dee4a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dee4d:	89 04 24             	mov    %eax,(%esp)
 84dee50:	e8 2b f0 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dee55:	89 f0                	mov    %esi,%eax
 84dee57:	89 da                	mov    %ebx,%edx
 84dee59:	89 04 24             	mov    %eax,(%esp)
 84dee5c:	e8 ef 48 60 00       	call   8ae3750 <_Unwind_Resume>
 84dee61:	89 d8                	mov    %ebx,%eax
 84dee63:	83 c4 20             	add    $0x20,%esp
 84dee66:	5b                   	pop    %ebx
 84dee67:	5e                   	pop    %esi
 84dee68:	5d                   	pop    %ebp
 84dee69:	c3                   	ret

```

```c
// Inter_GuildCargoUpgrade::dispatch_sig @ 0x84ded42

/* Inter_GuildCargoUpgrade::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildCargoUpgrade::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0xe))) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dedbe to 084dee33 has its CatchHandler @ 084dee46 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x10d);
    if (*(char *)(local_10 + 0x12) == -0x3f) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```


# Inter_OnTimeEventRewardStartOnLogin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e0f82 Inter_OnTimeEventRewardStartOnLogin::dispatch_sig  [0x084e0f82-0x84e1061] ===
 84e0f82:	55                   	push   %ebp
 84e0f83:	89 e5                	mov    %esp,%ebp
 84e0f85:	56                   	push   %esi
 84e0f86:	53                   	push   %ebx
 84e0f87:	83 ec 20             	sub    $0x20,%esp
 84e0f8a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e0f8d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e0f90:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e0f94:	75 0a                	jne    84e0fa0 <_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci+0x1e>
 84e0f96:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e0f9b:	e9 b9 00 00 00       	jmp    84e1059 <_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci+0xd7>
 84e0fa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0fa3:	8b 58 12             	mov    0x12(%eax),%ebx
 84e0fa6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84e0fad:	ff 
 84e0fae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e0fb1:	89 04 24             	mov    %eax,(%esp)
 84e0fb4:	e8 e7 cf 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84e0fb9:	39 c3                	cmp    %eax,%ebx
 84e0fbb:	0f 95 c0             	setne  %al
 84e0fbe:	84 c0                	test   %al,%al
 84e0fc0:	74 0a                	je     84e0fcc <_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci+0x4a>
 84e0fc2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e0fc7:	e9 8d 00 00 00       	jmp    84e1059 <_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci+0xd7>
 84e0fcc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0fcf:	89 04 24             	mov    %eax,(%esp)
 84e0fd2:	e8 75 cd 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e0fd7:	c7 44 24 08 05 01 00 	movl   $0x105,0x8(%esp)
 84e0fde:	00 
 84e0fdf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e0fe6:	00 
 84e0fe7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0fea:	89 04 24             	mov    %eax,(%esp)
 84e0fed:	e8 0a a9 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e0ff2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0ff5:	8b 40 0a             	mov    0xa(%eax),%eax
 84e0ff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e0ffc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0fff:	89 04 24             	mov    %eax,(%esp)
 84e1002:	e8 35 a9 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e1007:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e100e:	00 
 84e100f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e1012:	89 04 24             	mov    %eax,(%esp)
 84e1015:	e8 3e a9 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e101a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e101d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e1021:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e1024:	89 04 24             	mov    %eax,(%esp)
 84e1027:	e8 8e 75 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e102c:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e1031:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e1034:	89 04 24             	mov    %eax,(%esp)
 84e1037:	e8 44 ce 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e103c:	eb 1b                	jmp    84e1059 <_ZN35Inter_OnTimeEventRewardStartOnLogin12dispatch_sigEP5CUserPci+0xd7>
 84e103e:	89 d3                	mov    %edx,%ebx
 84e1040:	89 c6                	mov    %eax,%esi
 84e1042:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e1045:	89 04 24             	mov    %eax,(%esp)
 84e1048:	e8 33 ce 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e104d:	89 f0                	mov    %esi,%eax
 84e104f:	89 da                	mov    %ebx,%edx
 84e1051:	89 04 24             	mov    %eax,(%esp)
 84e1054:	e8 f7 26 60 00       	call   8ae3750 <_Unwind_Resume>
 84e1059:	89 d8                	mov    %ebx,%eax
 84e105b:	83 c4 20             	add    $0x20,%esp
 84e105e:	5b                   	pop    %ebx
 84e105f:	5e                   	pop    %esi
 84e1060:	5d                   	pop    %ebp
 84e1061:	c3                   	ret

```

```c
// Inter_OnTimeEventRewardStartOnLogin::dispatch_sig @ 0x84e0f82

/* Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_OnTimeEventRewardStartOnLogin::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if ((param_2 != (char *)0x0) &&
     (iVar1 = *(int *)(param_3 + 0x12), iVar2 = CUser::get_charac_no((CUser *)param_2,-1),
     iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e0fed to 084e102b has its CatchHandler @ 084e103e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x105);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```


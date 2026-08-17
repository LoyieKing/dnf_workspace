# Inter_Check3rdPartyConcent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e6096 Inter_Check3rdPartyConcent::dispatch_sig  [0x084e6096-0x84e616f] ===
 84e6096:	55                   	push   %ebp
 84e6097:	89 e5                	mov    %esp,%ebp
 84e6099:	56                   	push   %esi
 84e609a:	53                   	push   %ebx
 84e609b:	83 ec 20             	sub    $0x20,%esp
 84e609e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e60a1:	89 04 24             	mov    %eax,(%esp)
 84e60a4:	e8 e3 42 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e60a9:	83 f8 02             	cmp    $0x2,%eax
 84e60ac:	0f 9e c0             	setle  %al
 84e60af:	84 c0                	test   %al,%al
 84e60b1:	74 0a                	je     84e60bd <_ZN26Inter_Check3rdPartyConcent12dispatch_sigEP5CUserPci+0x27>
 84e60b3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e60b8:	e9 a9 00 00 00       	jmp    84e6166 <_ZN26Inter_Check3rdPartyConcent12dispatch_sigEP5CUserPci+0xd0>
 84e60bd:	8b 45 10             	mov    0x10(%ebp),%eax
 84e60c0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e60c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e60c6:	89 04 24             	mov    %eax,(%esp)
 84e60c9:	e8 7e 7c 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e60ce:	c7 44 24 08 c3 01 00 	movl   $0x1c3,0x8(%esp)
 84e60d5:	00 
 84e60d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e60dd:	00 
 84e60de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e60e1:	89 04 24             	mov    %eax,(%esp)
 84e60e4:	e8 13 58 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e60e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e60f0:	00 
 84e60f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e60f4:	89 04 24             	mov    %eax,(%esp)
 84e60f7:	e8 24 58 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e60fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e60ff:	0f b6 00             	movzbl (%eax),%eax
 84e6102:	0f be c0             	movsbl %al,%eax
 84e6105:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6109:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e610c:	89 04 24             	mov    %eax,(%esp)
 84e610f:	e8 0c 58 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e6114:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e611b:	00 
 84e611c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e611f:	89 04 24             	mov    %eax,(%esp)
 84e6122:	e8 31 58 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e6127:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e612a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e612e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6131:	89 04 24             	mov    %eax,(%esp)
 84e6134:	e8 81 24 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e6139:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e613e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6141:	89 04 24             	mov    %eax,(%esp)
 84e6144:	e8 37 7d 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6149:	eb 1b                	jmp    84e6166 <_ZN26Inter_Check3rdPartyConcent12dispatch_sigEP5CUserPci+0xd0>
 84e614b:	89 d3                	mov    %edx,%ebx
 84e614d:	89 c6                	mov    %eax,%esi
 84e614f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6152:	89 04 24             	mov    %eax,(%esp)
 84e6155:	e8 26 7d 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e615a:	89 f0                	mov    %esi,%eax
 84e615c:	89 da                	mov    %ebx,%edx
 84e615e:	89 04 24             	mov    %eax,(%esp)
 84e6161:	e8 ea d5 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e6166:	89 d8                	mov    %ebx,%eax
 84e6168:	83 c4 20             	add    $0x20,%esp
 84e616b:	5b                   	pop    %ebx
 84e616c:	5e                   	pop    %esi
 84e616d:	5d                   	pop    %ebp
 84e616e:	c3                   	ret
 84e616f:	90                   	nop

```

```c
// Inter_Check3rdPartyConcent::dispatch_sig @ 0x84e6096

/* Inter_Check3rdPartyConcent::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Check3rdPartyConcent::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e60e4 to 084e6138 has its CatchHandler @ 084e614b */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1c3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)*local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```


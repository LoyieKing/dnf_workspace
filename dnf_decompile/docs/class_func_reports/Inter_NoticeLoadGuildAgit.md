# Inter_NoticeLoadGuildAgit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dacda Inter_NoticeLoadGuildAgit::dispatch_sig  [0x084dacda-0x84dad95] ===
 84dacda:	55                   	push   %ebp
 84dacdb:	89 e5                	mov    %esp,%ebp
 84dacdd:	56                   	push   %esi
 84dacde:	53                   	push   %ebx
 84dacdf:	83 ec 20             	sub    $0x20,%esp
 84dace2:	8b 45 10             	mov    0x10(%ebp),%eax
 84dace5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84dace8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84daceb:	83 c0 16             	add    $0x16,%eax
 84dacee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dacf2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dacf5:	89 04 24             	mov    %eax,(%esp)
 84dacf8:	e8 d9 21 01 00       	call   84eced6 <_ZN5CUser18SetGuildAgitDBInfoER17STGuildAgitDBInfo>
 84dacfd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad00:	89 04 24             	mov    %eax,(%esp)
 84dad03:	e8 44 30 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dad08:	c7 44 24 08 bf 00 00 	movl   $0xbf,0x8(%esp)
 84dad0f:	00 
 84dad10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dad17:	00 
 84dad18:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad1b:	89 04 24             	mov    %eax,(%esp)
 84dad1e:	e8 d9 0b bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dad23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84dad26:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84dad2a:	0f b6 c0             	movzbl %al,%eax
 84dad2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dad31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad34:	89 04 24             	mov    %eax,(%esp)
 84dad37:	e8 e4 0b bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dad3c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dad43:	00 
 84dad44:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad47:	89 04 24             	mov    %eax,(%esp)
 84dad4a:	e8 09 0c bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dad4f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad52:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dad56:	8b 45 0c             	mov    0xc(%ebp),%eax
 84dad59:	89 04 24             	mov    %eax,(%esp)
 84dad5c:	e8 59 d8 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84dad61:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dad66:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad69:	89 04 24             	mov    %eax,(%esp)
 84dad6c:	e8 0f 31 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dad71:	89 d8                	mov    %ebx,%eax
 84dad73:	83 c4 20             	add    $0x20,%esp
 84dad76:	5b                   	pop    %ebx
 84dad77:	5e                   	pop    %esi
 84dad78:	5d                   	pop    %ebp
 84dad79:	c3                   	ret
 84dad7a:	89 d3                	mov    %edx,%ebx
 84dad7c:	89 c6                	mov    %eax,%esi
 84dad7e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dad81:	89 04 24             	mov    %eax,(%esp)
 84dad84:	e8 f7 30 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dad89:	89 f0                	mov    %esi,%eax
 84dad8b:	89 da                	mov    %ebx,%edx
 84dad8d:	89 04 24             	mov    %eax,(%esp)
 84dad90:	e8 bb 89 60 00       	call   8ae3750 <_Unwind_Resume>
 84dad95:	90                   	nop

```

```c
// Inter_NoticeLoadGuildAgit::dispatch_sig @ 0x84dacda

/* Inter_NoticeLoadGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeLoadGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  CUser::SetGuildAgitDBInfo((CUser *)param_2,(STGuildAgitDBInfo *)(param_3 + 0x16));
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dad1e to 084dad60 has its CatchHandler @ 084dad7a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbf);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x16));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```


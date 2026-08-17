# Dispatcher_Request_PvpExpOfWeek

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fecaa Dispatcher_Request_PvpExpOfWeek::dispatch_sig  [0x081fecaa-0x81fed4b] ===
 81fecaa:	55                   	push   %ebp
 81fecab:	89 e5                	mov    %esp,%ebp
 81fecad:	56                   	push   %esi
 81fecae:	53                   	push   %ebx
 81fecaf:	83 ec 20             	sub    $0x20,%esp
 81fecb2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fecb5:	89 04 24             	mov    %eax,(%esp)
 81fecb8:	e8 8f f0 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fecbd:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 81fecc4:	00 
 81fecc5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81feccc:	00 
 81feccd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fecd0:	89 04 24             	mov    %eax,(%esp)
 81fecd3:	e8 24 cc ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fecd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fecdb:	89 04 24             	mov    %eax,(%esp)
 81fecde:	e8 1d 14 03 00       	call   8230100 <_ZN5CUser19get_pvp_exp_of_weekEv>
 81fece3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fece7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fecea:	89 04 24             	mov    %eax,(%esp)
 81feced:	e8 4a cc ec ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81fecf2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fecf9:	00 
 81fecfa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fecfd:	89 04 24             	mov    %eax,(%esp)
 81fed00:	e8 53 cc ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fed05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed08:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fed0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fed0f:	89 04 24             	mov    %eax,(%esp)
 81fed12:	e8 a3 98 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fed17:	bb 00 00 00 00       	mov    $0x0,%ebx
 81fed1c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed1f:	89 04 24             	mov    %eax,(%esp)
 81fed22:	e8 59 f1 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fed27:	89 d8                	mov    %ebx,%eax
 81fed29:	83 c4 20             	add    $0x20,%esp
 81fed2c:	5b                   	pop    %ebx
 81fed2d:	5e                   	pop    %esi
 81fed2e:	5d                   	pop    %ebp
 81fed2f:	c3                   	ret
 81fed30:	89 d3                	mov    %edx,%ebx
 81fed32:	89 c6                	mov    %eax,%esi
 81fed34:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81fed37:	89 04 24             	mov    %eax,(%esp)
 81fed3a:	e8 41 f1 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fed3f:	89 f0                	mov    %esi,%eax
 81fed41:	89 da                	mov    %ebx,%edx
 81fed43:	89 04 24             	mov    %eax,(%esp)
 81fed46:	e8 05 4a 8e 00       	call   8ae3750 <_Unwind_Resume>
 81fed4b:	90                   	nop

```

```c
// Dispatcher_Request_PvpExpOfWeek::dispatch_sig @ 0x81fecaa

/* Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_Request_PvpExpOfWeek::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081fecd3 to 081fed16 has its CatchHandler @ 081fed30 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x39);
  iVar1 = CUser::get_pvp_exp_of_week((CUser *)param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}

```


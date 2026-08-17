# Inter_Monitor_Notify_New_Mail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d017c Inter_Monitor_Notify_New_Mail::dispatch_sig  [0x084d017c-0x84d027d] ===
 84d017c:	55                   	push   %ebp
 84d017d:	89 e5                	mov    %esp,%ebp
 84d017f:	56                   	push   %esi
 84d0180:	53                   	push   %ebx
 84d0181:	83 ec 20             	sub    $0x20,%esp
 84d0184:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0187:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d018a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d018d:	89 04 24             	mov    %eax,(%esp)
 84d0190:	e8 9d 02 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84d0195:	85 c0                	test   %eax,%eax
 84d0197:	74 15                	je     84d01ae <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0x32>
 84d0199:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d019c:	89 04 24             	mov    %eax,(%esp)
 84d019f:	e8 aa ba bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d01a4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d01a7:	8b 52 0a             	mov    0xa(%edx),%edx
 84d01aa:	39 d0                	cmp    %edx,%eax
 84d01ac:	74 07                	je     84d01b5 <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0x39>
 84d01ae:	b8 01 00 00 00       	mov    $0x1,%eax
 84d01b3:	eb 05                	jmp    84d01ba <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0x3e>
 84d01b5:	b8 00 00 00 00       	mov    $0x0,%eax
 84d01ba:	84 c0                	test   %al,%al
 84d01bc:	74 0a                	je     84d01c8 <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0x4c>
 84d01be:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d01c3:	e9 ad 00 00 00       	jmp    84d0275 <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0xf9>
 84d01c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d01cb:	89 04 24             	mov    %eax,(%esp)
 84d01ce:	e8 39 00 d6 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d01d3:	89 04 24             	mov    %eax,(%esp)
 84d01d6:	e8 55 d1 01 00       	call   84ed330 <_ZN8WongWork8CMailBox21IncNotLoadedMailCountEv>
 84d01db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d01de:	89 04 24             	mov    %eax,(%esp)
 84d01e1:	e8 66 db 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d01e6:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 84d01ed:	00 
 84d01ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d01f5:	00 
 84d01f6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d01f9:	89 04 24             	mov    %eax,(%esp)
 84d01fc:	e8 fb b6 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d0201:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0204:	89 04 24             	mov    %eax,(%esp)
 84d0207:	e8 00 00 d6 ff       	call   823020c <_ZN5CUser10GetMailBoxEv>
 84d020c:	89 04 24             	mov    %eax,(%esp)
 84d020f:	e8 46 43 d6 ff       	call   823455a <_ZN8WongWork8CMailBox21GetNotLoadedMailCountEv>
 84d0214:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0218:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d021b:	89 04 24             	mov    %eax,(%esp)
 84d021e:	e8 81 9c c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84d0223:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d022a:	00 
 84d022b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d022e:	89 04 24             	mov    %eax,(%esp)
 84d0231:	e8 22 b7 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d0236:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0239:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d023d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0240:	89 04 24             	mov    %eax,(%esp)
 84d0243:	e8 72 83 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d0248:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d024d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0250:	89 04 24             	mov    %eax,(%esp)
 84d0253:	e8 28 dc 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0258:	eb 1b                	jmp    84d0275 <_ZN29Inter_Monitor_Notify_New_Mail12dispatch_sigEP5CUserPci+0xf9>
 84d025a:	89 d3                	mov    %edx,%ebx
 84d025c:	89 c6                	mov    %eax,%esi
 84d025e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d0261:	89 04 24             	mov    %eax,(%esp)
 84d0264:	e8 17 dc 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0269:	89 f0                	mov    %esi,%eax
 84d026b:	89 da                	mov    %ebx,%edx
 84d026d:	89 04 24             	mov    %eax,(%esp)
 84d0270:	e8 db 34 61 00       	call   8ae3750 <_Unwind_Resume>
 84d0275:	89 d8                	mov    %ebx,%eax
 84d0277:	83 c4 20             	add    $0x20,%esp
 84d027a:	5b                   	pop    %ebx
 84d027b:	5e                   	pop    %esi
 84d027c:	5d                   	pop    %ebp
 84d027d:	c3                   	ret

```

```c
// Inter_Monitor_Notify_New_Mail::dispatch_sig @ 0x84d017c

/* Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Monitor_Notify_New_Mail::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  CMailBox *pCVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if ((iVar2 == 0) ||
     (iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar2 != *(int *)(local_10 + 10))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    pCVar3 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    WongWork::CMailBox::IncNotLoadedMailCount(pCVar3);
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d01fc to 084d0247 has its CatchHandler @ 084d025a */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,99);
    pCVar3 = (CMailBox *)CUser::GetMailBox((CUser *)param_2);
    iVar2 = WongWork::CMailBox::GetNotLoadedMailCount(pCVar3);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```


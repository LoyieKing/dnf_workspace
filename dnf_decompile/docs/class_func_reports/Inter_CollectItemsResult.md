# Inter_CollectItemsResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e770c Inter_CollectItemsResult::dispatch_sig  [0x084e770c-0x84e781f] ===
 84e770c:	55                   	push   %ebp
 84e770d:	89 e5                	mov    %esp,%ebp
 84e770f:	56                   	push   %esi
 84e7710:	53                   	push   %ebx
 84e7711:	83 ec 40             	sub    $0x40,%esp
 84e7714:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7717:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e771a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e771d:	8b 40 0a             	mov    0xa(%eax),%eax
 84e7720:	85 c0                	test   %eax,%eax
 84e7722:	0f 84 eb 00 00 00    	je     84e7813 <_ZN24Inter_CollectItemsResult12dispatch_sigEP5CUserPci+0x107>
 84e7728:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e772b:	8b 40 0e             	mov    0xe(%eax),%eax
 84e772e:	6b c0 64             	imul   $0x64,%eax,%eax
 84e7731:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e7734:	8b 52 0a             	mov    0xa(%edx),%edx
 84e7737:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 84e773a:	89 c2                	mov    %eax,%edx
 84e773c:	c1 fa 1f             	sar    $0x1f,%edx
 84e773f:	f7 7d d4             	idivl  -0x2c(%ebp)
 84e7742:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7745:	83 7d f4 64          	cmpl   $0x64,-0xc(%ebp)
 84e7749:	7e 07                	jle    84e7752 <_ZN24Inter_CollectItemsResult12dispatch_sigEP5CUserPci+0x46>
 84e774b:	c7 45 f4 64 00 00 00 	movl   $0x64,-0xc(%ebp)
 84e7752:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84e7757:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e775a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e775e:	89 04 24             	mov    %eax,(%esp)
 84e7761:	e8 3e 5d 00 00       	call   84ed4a4 <_ZN9CTimeGate8SetLevelEi>
 84e7766:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e7769:	89 04 24             	mov    %eax,(%esp)
 84e776c:	e8 db 65 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e7771:	c7 44 24 08 a6 01 00 	movl   $0x1a6,0x8(%esp)
 84e7778:	00 
 84e7779:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e7780:	00 
 84e7781:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e7784:	89 04 24             	mov    %eax,(%esp)
 84e7787:	e8 70 41 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e778c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e778f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7793:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e7796:	89 04 24             	mov    %eax,(%esp)
 84e7799:	e8 82 41 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e779e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e77a5:	00 
 84e77a6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e77a9:	89 04 24             	mov    %eax,(%esp)
 84e77ac:	e8 a7 41 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e77b1:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84e77b6:	89 04 24             	mov    %eax,(%esp)
 84e77b9:	e8 ce 5c 00 00       	call   84ed48c <_ZNK9CTimeGate12getAreaIndexEv>
 84e77be:	89 c6                	mov    %eax,%esi
 84e77c0:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84e77c5:	89 04 24             	mov    %eax,(%esp)
 84e77c8:	e8 b3 5c 00 00       	call   84ed480 <_ZNK9CTimeGate15getVillageIndexEv>
 84e77cd:	89 c3                	mov    %eax,%ebx
 84e77cf:	e8 d3 2b bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e77d4:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e77d7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e77db:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e77df:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e77e3:	89 04 24             	mov    %eax,(%esp)
 84e77e6:	e8 7d 09 1e 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 84e77eb:	eb 1b                	jmp    84e7808 <_ZN24Inter_CollectItemsResult12dispatch_sigEP5CUserPci+0xfc>
 84e77ed:	89 d3                	mov    %edx,%ebx
 84e77ef:	89 c6                	mov    %eax,%esi
 84e77f1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e77f4:	89 04 24             	mov    %eax,(%esp)
 84e77f7:	e8 84 66 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e77fc:	89 f0                	mov    %esi,%eax
 84e77fe:	89 da                	mov    %ebx,%edx
 84e7800:	89 04 24             	mov    %eax,(%esp)
 84e7803:	e8 48 bf 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e7808:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e780b:	89 04 24             	mov    %eax,(%esp)
 84e780e:	e8 6d 66 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e7813:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7818:	83 c4 40             	add    $0x40,%esp
 84e781b:	5b                   	pop    %ebx
 84e781c:	5e                   	pop    %esi
 84e781d:	5d                   	pop    %ebp
 84e781e:	c3                   	ret
 84e781f:	90                   	nop

```

```c
// Inter_CollectItemsResult::dispatch_sig @ 0x84e770c

/* Inter_CollectItemsResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  if (*(int *)(param_3 + 10) != 0) {
    local_10 = (*(int *)(param_3 + 0xe) * 100) / *(int *)(param_3 + 10);
    if (100 < local_10) {
      local_10 = 100;
    }
    CTimeGate::SetLevel(GlobalData::s_timeGate_,local_10);
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e7787 to 084e77ea has its CatchHandler @ 084e77ed */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1a6);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    iVar1 = CTimeGate::getAreaIndex(GlobalData::s_timeGate_);
    iVar2 = CTimeGate::getVillageIndex(GlobalData::s_timeGate_);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this,iVar2,iVar1,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```


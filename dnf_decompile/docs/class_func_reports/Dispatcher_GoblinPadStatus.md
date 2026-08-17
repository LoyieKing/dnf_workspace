# Dispatcher_GoblinPadStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082177ae Dispatcher_GoblinPadStatus::dispatch_sig  [0x082177ae-0x82178bf] ===
 82177ae:	55                   	push   %ebp
 82177af:	89 e5                	mov    %esp,%ebp
 82177b1:	56                   	push   %esi
 82177b2:	53                   	push   %ebx
 82177b3:	83 ec 20             	sub    $0x20,%esp
 82177b6:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 82177ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82177bd:	89 04 24             	mov    %eax,(%esp)
 82177c0:	e8 69 85 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 82177c5:	89 04 24             	mov    %eax,(%esp)
 82177c8:	e8 0d 78 01 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 82177cd:	84 c0                	test   %al,%al
 82177cf:	74 46                	je     8217817 <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x69>
 82177d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82177d4:	89 04 24             	mov    %eax,(%esp)
 82177d7:	e8 52 85 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 82177dc:	89 04 24             	mov    %eax,(%esp)
 82177df:	e8 aa 77 01 00       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 82177e4:	83 f8 02             	cmp    $0x2,%eax
 82177e7:	0f 9f c0             	setg   %al
 82177ea:	84 c0                	test   %al,%al
 82177ec:	74 06                	je     82177f4 <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x46>
 82177ee:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 82177f2:	eb 27                	jmp    821781b <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x6d>
 82177f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 82177f7:	89 04 24             	mov    %eax,(%esp)
 82177fa:	e8 2f 85 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 82177ff:	89 04 24             	mov    %eax,(%esp)
 8217802:	e8 df 77 01 00       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8217807:	84 c0                	test   %al,%al
 8217809:	74 06                	je     8217811 <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x63>
 821780b:	c6 45 f7 02          	movb   $0x2,-0x9(%ebp)
 821780f:	eb 0a                	jmp    821781b <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x6d>
 8217811:	c6 45 f7 03          	movb   $0x3,-0x9(%ebp)
 8217815:	eb 04                	jmp    821781b <_ZN26Dispatcher_GoblinPadStatus12dispatch_sigEP5CUserR9PacketBuf+0x6d>
 8217817:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 821781b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821781e:	89 04 24             	mov    %eax,(%esp)
 8217821:	e8 26 65 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8217826:	c7 44 24 08 c4 00 00 	movl   $0xc4,0x8(%esp)
 821782d:	00 
 821782e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8217835:	00 
 8217836:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8217839:	89 04 24             	mov    %eax,(%esp)
 821783c:	e8 bb 40 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8217841:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8217848:	00 
 8217849:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821784c:	89 04 24             	mov    %eax,(%esp)
 821784f:	e8 cc 40 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8217854:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8217858:	89 44 24 04          	mov    %eax,0x4(%esp)
 821785c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821785f:	89 04 24             	mov    %eax,(%esp)
 8217862:	e8 b9 40 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8217867:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821786e:	00 
 821786f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8217872:	89 04 24             	mov    %eax,(%esp)
 8217875:	e8 de 40 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821787a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 821787d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217881:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217884:	89 04 24             	mov    %eax,(%esp)
 8217887:	e8 2e 0d 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821788c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217891:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8217894:	89 04 24             	mov    %eax,(%esp)
 8217897:	e8 e4 65 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821789c:	89 d8                	mov    %ebx,%eax
 821789e:	83 c4 20             	add    $0x20,%esp
 82178a1:	5b                   	pop    %ebx
 82178a2:	5e                   	pop    %esi
 82178a3:	5d                   	pop    %ebp
 82178a4:	c3                   	ret
 82178a5:	89 d3                	mov    %edx,%ebx
 82178a7:	89 c6                	mov    %eax,%esi
 82178a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82178ac:	89 04 24             	mov    %eax,(%esp)
 82178af:	e8 cc 65 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82178b4:	89 f0                	mov    %esi,%eax
 82178b6:	89 da                	mov    %ebx,%edx
 82178b8:	89 04 24             	mov    %eax,(%esp)
 82178bb:	e8 90 be 8c 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Dispatcher_GoblinPadStatus::dispatch_sig @ 0x82177ae

/* Dispatcher_GoblinPadStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GoblinPadStatus::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  CPad *pCVar2;
  int iVar3;
  PacketGuard local_1c [15];
  byte local_d;
  
  local_d = 0;
  pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
  cVar1 = Sanicova::CPad::isActivate(pCVar2);
  if (cVar1 == '\0') {
    local_d = 0;
  }
  else {
    pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
    iVar3 = Sanicova::CPad::getFailCnt(pCVar2);
    if (iVar3 < 3) {
      pCVar2 = (CPad *)CUser::getPad((CUser *)param_2);
      cVar1 = Sanicova::CPad::isCertified(pCVar2);
      if (cVar1 == '\0') {
        local_d = 3;
      }
      else {
        local_d = 2;
      }
    }
    else {
      local_d = 1;
    }
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0821783c to 0821788b has its CatchHandler @ 082178a5 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xc4);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```


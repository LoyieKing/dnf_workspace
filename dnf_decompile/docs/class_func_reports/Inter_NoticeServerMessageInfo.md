# Inter_NoticeServerMessageInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da726 Inter_NoticeServerMessageInfo::dispatch_sig  [0x084da726-0x84da98d] ===
 84da726:	55                   	push   %ebp
 84da727:	89 e5                	mov    %esp,%ebp
 84da729:	57                   	push   %edi
 84da72a:	56                   	push   %esi
 84da72b:	53                   	push   %ebx
 84da72c:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 84da732:	8b 45 10             	mov    0x10(%ebp),%eax
 84da735:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84da738:	e8 51 1a bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84da73d:	89 04 24             	mov    %eax,(%esp)
 84da740:	e8 a7 e7 db ff       	call   8298eec <_ZN12CGameManager29GetSharedServerMessageManagerEv>
 84da745:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84da748:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84da74c:	0f 84 07 01 00 00    	je     84da859 <_ZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPci+0x133>
 84da752:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da755:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84da759:	0f b6 d8             	movzbl %al,%ebx
 84da75c:	e8 20 1a bf ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84da761:	89 04 24             	mov    %eax,(%esp)
 84da764:	e8 61 03 c7 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 84da769:	39 c3                	cmp    %eax,%ebx
 84da76b:	0f 95 c0             	setne  %al
 84da76e:	84 c0                	test   %al,%al
 84da770:	74 37                	je     84da7a9 <_ZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPci+0x83>
 84da772:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da775:	8b 50 5b             	mov    0x5b(%eax),%edx
 84da778:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da77b:	8d 58 47             	lea    0x47(%eax),%ebx
 84da77e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da781:	8d 48 11             	lea    0x11(%eax),%ecx
 84da784:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da787:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84da78b:	0f b6 c0             	movzbl %al,%eax
 84da78e:	89 54 24 10          	mov    %edx,0x10(%esp)
 84da792:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84da796:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84da79a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da79e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84da7a1:	89 04 24             	mov    %eax,(%esp)
 84da7a4:	e8 cd 6c 12 00       	call   8601476 <_ZN27CSharedServerMessageManager30UpdateServerMessageByBroadcastEiPcS0_i>
 84da7a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7ac:	8b 78 5b             	mov    0x5b(%eax),%edi
 84da7af:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7b2:	83 c0 47             	add    $0x47,%eax
 84da7b5:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 84da7b8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7bb:	8b 40 43             	mov    0x43(%eax),%eax
 84da7be:	89 45 a8             	mov    %eax,-0x58(%ebp)
 84da7c1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7c4:	83 c0 11             	add    $0x11,%eax
 84da7c7:	89 45 ac             	mov    %eax,-0x54(%ebp)
 84da7ca:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7cd:	8b 40 0d             	mov    0xd(%eax),%eax
 84da7d0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 84da7d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7d6:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84da7da:	0f b6 c0             	movzbl %al,%eax
 84da7dd:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 84da7e0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7e3:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 84da7e7:	0f b6 f0             	movzbl %al,%esi
 84da7ea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da7ed:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84da7f1:	0f b6 d8             	movzbl %al,%ebx
 84da7f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84da7fb:	00 
 84da7fc:	c7 44 24 08 be 42 00 	movl   $0x42be,0x8(%esp)
 84da803:	00 
 84da804:	c7 44 24 04 00 bf c8 	movl   $0x8c8bf00,0x4(%esp)
 84da80b:	08 
 84da80c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84da80f:	89 04 24             	mov    %eax,(%esp)
 84da812:	e8 01 4f 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84da817:	89 7c 24 24          	mov    %edi,0x24(%esp)
 84da81b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 84da81e:	89 44 24 20          	mov    %eax,0x20(%esp)
 84da822:	8b 45 a8             	mov    -0x58(%ebp),%eax
 84da825:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84da829:	8b 45 ac             	mov    -0x54(%ebp),%eax
 84da82c:	89 44 24 18          	mov    %eax,0x18(%esp)
 84da830:	8b 45 b0             	mov    -0x50(%ebp),%eax
 84da833:	89 44 24 14          	mov    %eax,0x14(%esp)
 84da837:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 84da83a:	89 44 24 10          	mov    %eax,0x10(%esp)
 84da83e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84da842:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84da846:	c7 44 24 04 4c 97 c8 	movl   $0x8c8974c,0x4(%esp)
 84da84d:	08 
 84da84e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84da851:	89 04 24             	mov    %eax,(%esp)
 84da854:	e8 2f 4f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84da859:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da85c:	89 04 24             	mov    %eax,(%esp)
 84da85f:	e8 e8 34 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84da864:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 84da86b:	00 
 84da86c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84da873:	00 
 84da874:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da877:	89 04 24             	mov    %eax,(%esp)
 84da87a:	e8 7d 10 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84da87f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da886:	00 
 84da887:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da88a:	89 04 24             	mov    %eax,(%esp)
 84da88d:	e8 8e 10 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da892:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da899:	00 
 84da89a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da89d:	89 04 24             	mov    %eax,(%esp)
 84da8a0:	e8 7b 10 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da8a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da8a8:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 84da8ac:	0f b6 c0             	movzbl %al,%eax
 84da8af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da8b3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da8b6:	89 04 24             	mov    %eax,(%esp)
 84da8b9:	e8 62 10 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84da8be:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da8c1:	8b 40 0d             	mov    0xd(%eax),%eax
 84da8c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da8c8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da8cb:	89 04 24             	mov    %eax,(%esp)
 84da8ce:	e8 69 10 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84da8d3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da8d6:	8b 40 0d             	mov    0xd(%eax),%eax
 84da8d9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84da8dc:	83 c2 11             	add    $0x11,%edx
 84da8df:	89 44 24 08          	mov    %eax,0x8(%esp)
 84da8e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da8e7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da8ea:	89 04 24             	mov    %eax,(%esp)
 84da8ed:	e8 f2 ca cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84da8f2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da8f5:	8b 40 43             	mov    0x43(%eax),%eax
 84da8f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84da8fc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da8ff:	89 04 24             	mov    %eax,(%esp)
 84da902:	e8 35 10 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84da907:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84da90a:	8b 40 43             	mov    0x43(%eax),%eax
 84da90d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84da910:	83 c2 47             	add    $0x47,%edx
 84da913:	89 44 24 08          	mov    %eax,0x8(%esp)
 84da917:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da91b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da91e:	89 04 24             	mov    %eax,(%esp)
 84da921:	e8 be ca cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84da926:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84da92d:	00 
 84da92e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da931:	89 04 24             	mov    %eax,(%esp)
 84da934:	e8 1f 10 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84da939:	e8 69 fa bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84da93e:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 84da945:	00 
 84da946:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84da949:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da94d:	89 04 24             	mov    %eax,(%esp)
 84da950:	e8 2f e8 1e 00       	call   86c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>
 84da955:	eb 1b                	jmp    84da972 <_ZN29Inter_NoticeServerMessageInfo12dispatch_sigEP5CUserPci+0x24c>
 84da957:	89 d3                	mov    %edx,%ebx
 84da959:	89 c6                	mov    %eax,%esi
 84da95b:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da95e:	89 04 24             	mov    %eax,(%esp)
 84da961:	e8 1a 35 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da966:	89 f0                	mov    %esi,%eax
 84da968:	89 da                	mov    %ebx,%edx
 84da96a:	89 04 24             	mov    %eax,(%esp)
 84da96d:	e8 de 8d 60 00       	call   8ae3750 <_Unwind_Resume>
 84da972:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84da975:	89 04 24             	mov    %eax,(%esp)
 84da978:	e8 03 35 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84da97d:	b8 00 00 00 00       	mov    $0x0,%eax
 84da982:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 84da988:	5b                   	pop    %ebx
 84da989:	5e                   	pop    %esi
 84da98a:	5f                   	pop    %edi
 84da98b:	5d                   	pop    %ebp
 84da98c:	c3                   	ret
 84da98d:	90                   	nop

```

```c
// Inter_NoticeServerMessageInfo::dispatch_sig @ 0x84da726

/* Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeServerMessageInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CGameManager *this;
  CEnvironment *this_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  GameWorld *this_01;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  int local_24;
  CSharedServerMessageManager *local_20;
  
  local_24 = param_3;
  this = (CGameManager *)G_CGameManager();
  local_20 = (CSharedServerMessageManager *)CGameManager::GetSharedServerMessageManager(this);
  if (local_20 != (CSharedServerMessageManager *)0x0) {
    bVar1 = *(byte *)(local_24 + 10);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar7 = CEnvironment::get_channel_no(this_00);
    if (bVar1 != uVar7) {
      CSharedServerMessageManager::UpdateServerMessageByBroadcast
                (local_20,(uint)*(byte *)(local_24 + 0xc),(char *)(local_24 + 0x11),
                 (char *)(local_24 + 0x47),*(int *)(local_24 + 0x5b));
    }
    uVar4 = *(undefined4 *)(local_24 + 0x5b);
    iVar8 = local_24 + 0x47;
    uVar5 = *(undefined4 *)(local_24 + 0x43);
    iVar9 = local_24 + 0x11;
    uVar6 = *(undefined4 *)(local_24 + 0xd);
    bVar1 = *(byte *)(local_24 + 0xc);
    bVar2 = *(byte *)(local_24 + 0xb);
    bVar3 = *(byte *)(local_24 + 10);
    cMyTrace::cMyTrace(local_34,
                       "virtual int Inter_NoticeServerMessageInfo::dispatch_sig(CUser*, char*, int)"
                       ,0x42be,0);
    cMyTrace::operator()
              (local_34,
               "SERVER_MESSAGE : Recv ServerMessage from monitor server(source_channel:%d, kind:%d, index:%d, msg_len:%d, msg:%s, name_len:%d, name:%s, time:%d"
               ,(uint)bVar3,(uint)bVar2,(uint)bVar1,uVar6,iVar9,uVar5,iVar8,uVar4);
  }
  PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084da87a to 084da954 has its CatchHandler @ 084da957 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xc0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,(uint)*(byte *)(local_24 + 0xc));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_24 + 0xd));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_40,(char *)(local_24 + 0x11),*(int *)(local_24 + 0xd));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,*(int *)(local_24 + 0x43));
  InterfacePacketBuf::put_str
            ((InterfacePacketBuf *)local_40,(char *)(local_24 + 0x47),*(int *)(local_24 + 0x43));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
  this_01 = (GameWorld *)G_GameWorld();
  GameWorld::send_all_with_state(this_01,local_40,3);
  PacketGuard::~PacketGuard(local_40);
  return 0;
}

```


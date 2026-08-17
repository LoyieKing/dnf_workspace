# Dispatcher_PvPChannelInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082178c0 Dispatcher_PvPChannelInfo::dispatch_sig  [0x082178c0-0x8217acf] ===
 82178c0:	55                   	push   %ebp
 82178c1:	89 e5                	mov    %esp,%ebp
 82178c3:	56                   	push   %esi
 82178c4:	53                   	push   %ebx
 82178c5:	81 ec 20 18 00 00    	sub    $0x1820,%esp
 82178cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82178ce:	89 04 24             	mov    %eax,(%esp)
 82178d1:	e8 b6 2a ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82178d6:	83 f8 02             	cmp    $0x2,%eax
 82178d9:	0f 9e c0             	setle  %al
 82178dc:	84 c0                	test   %al,%al
 82178de:	74 0a                	je     82178ea <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 82178e0:	bb 00 00 00 00       	mov    $0x0,%ebx
 82178e5:	e9 d9 01 00 00       	jmp    8217ac3 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x203>
 82178ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 82178ed:	89 04 24             	mov    %eax,(%esp)
 82178f0:	e8 3d 8b f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82178f5:	85 c0                	test   %eax,%eax
 82178f7:	0f 95 c0             	setne  %al
 82178fa:	84 c0                	test   %al,%al
 82178fc:	74 32                	je     8217930 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x70>
 82178fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217901:	89 04 24             	mov    %eax,(%esp)
 8217904:	e8 ed 7f 01 00       	call   822f8f6 <_ZN15CUserCharacInfo16isDisguiseCharacEv>
 8217909:	84 c0                	test   %al,%al
 821790b:	74 23                	je     8217930 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x70>
 821790d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217910:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217917:	00 
 8217918:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821791f:	00 
 8217920:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8217927:	00 
 8217928:	89 04 24             	mov    %eax,(%esp)
 821792b:	e8 ea 7f 01 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 8217930:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217933:	89 04 24             	mov    %eax,(%esp)
 8217936:	e8 85 70 47 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 821793b:	84 c0                	test   %al,%al
 821793d:	74 25                	je     8217964 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0xa4>
 821793f:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8217946:	00 
 8217947:	c7 44 24 04 c6 00 00 	movl   $0xc6,0x4(%esp)
 821794e:	00 
 821794f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217952:	89 04 24             	mov    %eax,(%esp)
 8217955:	e8 e8 45 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821795a:	bb 00 00 00 00       	mov    $0x0,%ebx
 821795f:	e9 5f 01 00 00       	jmp    8217ac3 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x203>
 8217964:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217967:	89 04 24             	mov    %eax,(%esp)
 821796a:	e8 93 84 01 00       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 821796f:	85 c0                	test   %eax,%eax
 8217971:	0f 94 c0             	sete   %al
 8217974:	84 c0                	test   %al,%al
 8217976:	0f 84 b4 00 00 00    	je     8217a30 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x170>
 821797c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821797f:	89 04 24             	mov    %eax,(%esp)
 8217982:	e8 c5 63 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8217987:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 821798e:	00 
 821798f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8217996:	00 
 8217997:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821799a:	89 04 24             	mov    %eax,(%esp)
 821799d:	e8 5a 3f eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82179a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82179a9:	00 
 82179aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82179ad:	89 04 24             	mov    %eax,(%esp)
 82179b0:	e8 6b 3f eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82179b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82179bc:	00 
 82179bd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82179c0:	89 04 24             	mov    %eax,(%esp)
 82179c3:	e8 74 3f eb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 82179c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82179cf:	00 
 82179d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82179d3:	89 04 24             	mov    %eax,(%esp)
 82179d6:	e8 45 3f eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82179db:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82179e2:	00 
 82179e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82179e6:	89 04 24             	mov    %eax,(%esp)
 82179e9:	e8 6a 3f eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 82179ee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82179f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82179f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 82179f8:	89 04 24             	mov    %eax,(%esp)
 82179fb:	e8 ba 0b 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8217a00:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217a05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8217a08:	89 04 24             	mov    %eax,(%esp)
 8217a0b:	e8 70 64 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8217a10:	e9 ae 00 00 00       	jmp    8217ac3 <_ZN25Dispatcher_PvPChannelInfo12dispatch_sigEP5CUserR9PacketBuf+0x203>
 8217a15:	89 d3                	mov    %edx,%ebx
 8217a17:	89 c6                	mov    %eax,%esi
 8217a19:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8217a1c:	89 04 24             	mov    %eax,(%esp)
 8217a1f:	e8 5c 64 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8217a24:	89 f0                	mov    %esi,%eax
 8217a26:	89 da                	mov    %ebx,%edx
 8217a28:	89 04 24             	mov    %eax,(%esp)
 8217a2b:	e8 20 bd 8c 00       	call   8ae3750 <_Unwind_Resume>
 8217a30:	8d 85 f4 e7 ff ff    	lea    -0x180c(%ebp),%eax
 8217a36:	89 04 24             	mov    %eax,(%esp)
 8217a39:	e8 fe 42 01 00       	call   822bd3c <_ZN21Packet_PvPChannelInfoC1Ev>
 8217a3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217a41:	89 04 24             	mov    %eax,(%esp)
 8217a44:	e8 4d 12 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8217a49:	89 85 02 e8 ff ff    	mov    %eax,-0x17fe(%ebp)
 8217a4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217a52:	89 04 24             	mov    %eax,(%esp)
 8217a55:	e8 f4 41 eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8217a5a:	89 85 fe e7 ff ff    	mov    %eax,-0x1802(%ebp)
 8217a60:	c6 85 0a e8 ff ff 09 	movb   $0x9,-0x17f6(%ebp)
 8217a67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217a6a:	89 04 24             	mov    %eax,(%esp)
 8217a6d:	e8 90 83 01 00       	call   822fe02 <_ZN5CUser11GetSchoolNoEv>
 8217a72:	89 85 06 e8 ff ff    	mov    %eax,-0x17fa(%ebp)
 8217a78:	66 c7 85 f6 e7 ff ff 	movw   $0x18,-0x180a(%ebp)
 8217a7f:	18 00 
 8217a81:	0f b7 85 f6 e7 ff ff 	movzwl -0x180a(%ebp),%eax
 8217a88:	0f b7 f0             	movzwl %ax,%esi
 8217a8b:	8d 9d f4 e7 ff ff    	lea    -0x180c(%ebp),%ebx
 8217a91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8217a94:	89 04 24             	mov    %eax,(%esp)
 8217a97:	e8 f4 41 eb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8217a9c:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 8217aa2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8217aa6:	89 14 24             	mov    %edx,(%esp)
 8217aa9:	e8 dc a5 ef ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8217aae:	89 74 24 08          	mov    %esi,0x8(%esp)
 8217ab2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8217ab6:	89 04 24             	mov    %eax,(%esp)
 8217ab9:	e8 86 93 25 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8217abe:	bb 00 00 00 00       	mov    $0x0,%ebx
 8217ac3:	89 d8                	mov    %ebx,%eax
 8217ac5:	81 c4 20 18 00 00    	add    $0x1820,%esp
 8217acb:	5b                   	pop    %ebx
 8217acc:	5e                   	pop    %esi
 8217acd:	5d                   	pop    %ebp
 8217ace:	c3                   	ret
 8217acf:	90                   	nop

```

```c
// Dispatcher_PvPChannelInfo::dispatch_sig @ 0x82178c0

/* Dispatcher_PvPChannelInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PvPChannelInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CMonitorServerProxy *this;
  Packet_PvPChannelInfo local_1810 [2];
  undefined2 local_180e;
  undefined4 local_1806;
  undefined4 local_1802;
  undefined4 local_17fe;
  undefined1 local_17fa;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if ((iVar2 != 0) &&
       (cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_2), cVar1 != '\0')) {
      CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    }
    cVar1 = CUser::isCompetitionMercenary((CUser *)param_2);
    if (cVar1 == '\0') {
      iVar2 = CUser::GetSchoolNo((CUser *)param_2);
      if (iVar2 == 0) {
        PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821799d to 082179ff has its CatchHandler @ 08217a15 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xc6);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
        CUser::Send((CUser *)param_2,local_18);
        PacketGuard::~PacketGuard(local_18);
      }
      else {
        Packet_PvPChannelInfo::Packet_PvPChannelInfo(local_1810);
        local_1802 = CUser::GetUID((CUser *)param_2);
        local_1806 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_17fa = 9;
        local_17fe = CUser::GetSchoolNo((CUser *)param_2);
        local_180e = 0x18;
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar3);
        CMonitorServerProxy::SendTcpPacket(this,(char *)local_1810,0x18);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xc6,0x15);
    }
  }
  return 0;
}

```


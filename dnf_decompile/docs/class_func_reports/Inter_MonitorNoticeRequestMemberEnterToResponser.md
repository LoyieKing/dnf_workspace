# Inter_MonitorNoticeRequestMemberEnterToResponser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ccd54 Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig  [0x084ccd54-0x84ccfd9] ===
 84ccd54:	55                   	push   %ebp
 84ccd55:	89 e5                	mov    %esp,%ebp
 84ccd57:	56                   	push   %esi
 84ccd58:	53                   	push   %ebx
 84ccd59:	83 ec 60             	sub    $0x60,%esp
 84ccd5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccd5f:	89 04 24             	mov    %eax,(%esp)
 84ccd62:	e8 25 d6 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ccd67:	85 c0                	test   %eax,%eax
 84ccd69:	0f 94 c0             	sete   %al
 84ccd6c:	84 c0                	test   %al,%al
 84ccd6e:	74 0a                	je     84ccd7a <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x26>
 84ccd70:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccd75:	e9 56 02 00 00       	jmp    84ccfd0 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x27c>
 84ccd7a:	8b 45 10             	mov    0x10(%ebp),%eax
 84ccd7d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ccd80:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ccd87:	ff 
 84ccd88:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccd8b:	89 04 24             	mov    %eax,(%esp)
 84ccd8e:	e8 0d 12 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ccd93:	89 c2                	mov    %eax,%edx
 84ccd95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccd98:	8b 40 0e             	mov    0xe(%eax),%eax
 84ccd9b:	39 c2                	cmp    %eax,%edx
 84ccd9d:	0f 95 c0             	setne  %al
 84ccda0:	84 c0                	test   %al,%al
 84ccda2:	74 57                	je     84ccdfb <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0xa7>
 84ccda4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccda7:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ccdaa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ccdb1:	ff 
 84ccdb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccdb5:	89 04 24             	mov    %eax,(%esp)
 84ccdb8:	e8 e3 11 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ccdbd:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ccdc1:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ccdc5:	c7 44 24 10 54 84 c8 	movl   $0x8c88454,0x10(%esp)
 84ccdcc:	08 
 84ccdcd:	c7 44 24 0c 0c 28 00 	movl   $0x280c,0xc(%esp)
 84ccdd4:	00 
 84ccdd5:	c7 44 24 08 a0 d3 c8 	movl   $0x8c8d3a0,0x8(%esp)
 84ccddc:	08 
 84ccddd:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ccde4:	08 
 84ccde5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ccdec:	e8 19 6e 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ccdf1:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccdf6:	e9 d5 01 00 00       	jmp    84ccfd0 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x27c>
 84ccdfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccdfe:	89 04 24             	mov    %eax,(%esp)
 84cce01:	e8 74 0e 1c 00       	call   868dc7a <_ZN5CUser14alonePlay_ModeEv>
 84cce06:	84 c0                	test   %al,%al
 84cce08:	74 69                	je     84cce73 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x11f>
 84cce0a:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 84cce0d:	89 04 24             	mov    %eax,(%esp)
 84cce10:	e8 fb eb d5 ff       	call   822ba10 <_ZN33Packet_Monitor_Member_Enter_ReplyC1Ev>
 84cce15:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cce18:	89 04 24             	mov    %eax,(%esp)
 84cce1b:	e8 76 be bf ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84cce20:	89 45 db             	mov    %eax,-0x25(%ebp)
 84cce23:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cce26:	89 04 24             	mov    %eax,(%esp)
 84cce29:	e8 20 ee bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84cce2e:	89 45 df             	mov    %eax,-0x21(%ebp)
 84cce31:	c6 45 e3 03          	movb   $0x3,-0x1d(%ebp)
 84cce35:	8d 5d d1             	lea    -0x2f(%ebp),%ebx
 84cce38:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cce3b:	89 04 24             	mov    %eax,(%esp)
 84cce3e:	e8 4d ee bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84cce43:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84cce49:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cce4d:	89 14 24             	mov    %edx,(%esp)
 84cce50:	e8 35 52 c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84cce55:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84cce5c:	00 
 84cce5d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84cce61:	89 04 24             	mov    %eax,(%esp)
 84cce64:	e8 db 3f fa ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84cce69:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cce6e:	e9 5d 01 00 00       	jmp    84ccfd0 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x27c>
 84cce73:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cce76:	89 04 24             	mov    %eax,(%esp)
 84cce79:	e8 d0 2d d6 ff       	call   822fc4e <_ZN5CUser16GetGameOptionRefEv>
 84cce7e:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 84cce85:	00 
 84cce86:	89 04 24             	mov    %eax,(%esp)
 84cce89:	e8 b8 a3 fe ff       	call   84b7246 <_ZN11CGameOption14get_etc_optionE15ENUM_OPTION_ETC>
 84cce8e:	66 83 f8 01          	cmp    $0x1,%ax
 84cce92:	0f 94 c0             	sete   %al
 84cce95:	84 c0                	test   %al,%al
 84cce97:	74 69                	je     84ccf02 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x1ae>
 84cce99:	8d 45 be             	lea    -0x42(%ebp),%eax
 84cce9c:	89 04 24             	mov    %eax,(%esp)
 84cce9f:	e8 6c eb d5 ff       	call   822ba10 <_ZN33Packet_Monitor_Member_Enter_ReplyC1Ev>
 84ccea4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccea7:	89 04 24             	mov    %eax,(%esp)
 84cceaa:	e8 e7 bd bf ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84cceaf:	89 45 c8             	mov    %eax,-0x38(%ebp)
 84cceb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cceb5:	89 04 24             	mov    %eax,(%esp)
 84cceb8:	e8 91 ed bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84ccebd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 84ccec0:	c6 45 d0 04          	movb   $0x4,-0x30(%ebp)
 84ccec4:	8d 5d be             	lea    -0x42(%ebp),%ebx
 84ccec7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cceca:	89 04 24             	mov    %eax,(%esp)
 84ccecd:	e8 be ed bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84cced2:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84cced8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccedc:	89 14 24             	mov    %edx,(%esp)
 84ccedf:	e8 a6 51 c4 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84ccee4:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84cceeb:	00 
 84cceec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84ccef0:	89 04 24             	mov    %eax,(%esp)
 84ccef3:	e8 4c 3f fa ff       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 84ccef8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccefd:	e9 ce 00 00 00       	jmp    84ccfd0 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x27c>
 84ccf02:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf05:	89 04 24             	mov    %eax,(%esp)
 84ccf08:	e8 3f 0e 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ccf0d:	c7 44 24 08 49 00 00 	movl   $0x49,0x8(%esp)
 84ccf14:	00 
 84ccf15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ccf1c:	00 
 84ccf1d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf20:	89 04 24             	mov    %eax,(%esp)
 84ccf23:	e8 d4 e9 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ccf28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccf2b:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 84ccf2f:	98                   	cwtl
 84ccf30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccf34:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf37:	89 04 24             	mov    %eax,(%esp)
 84ccf3a:	e8 65 cf c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ccf3f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccf42:	83 c0 14             	add    $0x14,%eax
 84ccf45:	89 04 24             	mov    %eax,(%esp)
 84ccf48:	e8 63 14 bb ff       	call   807e3b0 <strlen@plt>
 84ccf4d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ccf50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccf53:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccf57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf5a:	89 04 24             	mov    %eax,(%esp)
 84ccf5d:	e8 da e9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ccf62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccf65:	8d 50 14             	lea    0x14(%eax),%edx
 84ccf68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccf6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ccf6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ccf73:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf76:	89 04 24             	mov    %eax,(%esp)
 84ccf79:	e8 66 a4 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ccf7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ccf85:	00 
 84ccf86:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf89:	89 04 24             	mov    %eax,(%esp)
 84ccf8c:	e8 c7 e9 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ccf91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccf94:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccf98:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccf9b:	89 04 24             	mov    %eax,(%esp)
 84ccf9e:	e8 17 b6 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ccfa3:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccfa8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccfab:	89 04 24             	mov    %eax,(%esp)
 84ccfae:	e8 cd 0e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccfb3:	eb 1b                	jmp    84ccfd0 <_ZN48Inter_MonitorNoticeRequestMemberEnterToResponser12dispatch_sigEP5CUserPci+0x27c>
 84ccfb5:	89 d3                	mov    %edx,%ebx
 84ccfb7:	89 c6                	mov    %eax,%esi
 84ccfb9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccfbc:	89 04 24             	mov    %eax,(%esp)
 84ccfbf:	e8 bc 0e 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccfc4:	89 f0                	mov    %esi,%eax
 84ccfc6:	89 da                	mov    %ebx,%edx
 84ccfc8:	89 04 24             	mov    %eax,(%esp)
 84ccfcb:	e8 80 67 61 00       	call   8ae3750 <_Unwind_Resume>
 84ccfd0:	89 d8                	mov    %ebx,%eax
 84ccfd2:	83 c4 60             	add    $0x60,%esp
 84ccfd5:	5b                   	pop    %ebx
 84ccfd6:	5e                   	pop    %esi
 84ccfd7:	5d                   	pop    %ebp
 84ccfd8:	c3                   	ret
 84ccfd9:	90                   	nop

```

```c
// Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig @ 0x84ccd54

/* Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  CMonitorServerProxy *pCVar6;
  CGameOption *pCVar7;
  Packet_Monitor_Member_Enter_Reply local_46 [10];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  Packet_Monitor_Member_Enter_Reply local_33 [10];
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 0) {
    local_14 = param_3;
    iVar3 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar3 == *(int *)(local_14 + 0xe)) {
      cVar1 = CUser::alonePlay_Mode((CUser *)param_2);
      if (cVar1 == '\0') {
        pCVar7 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
        sVar2 = CGameOption::get_etc_option(pCVar7,0x1d);
        if (sVar2 == 1) {
          Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_46);
          local_3c = CUser::GetUID((CUser *)param_2);
          local_38 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          local_34 = 4;
          uVar5 = CUser::GetServerGroup((CUser *)param_2);
          pCVar6 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                             (GlobalData::s_monitor_proxy_mgr,uVar5);
          CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_46,0x13);
        }
        else {
          PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccf23 to 084ccfa2 has its CatchHandler @ 084ccfb5 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x49);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_20,(int)*(short *)(local_14 + 0x12));
          local_10 = strlen((char *)(local_14 + 0x14));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x14),local_10);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
          CUser::Send((CUser *)param_2,local_20);
          PacketGuard::~PacketGuard(local_20);
        }
      }
      else {
        Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_33);
        local_29 = CUser::GetUID((CUser *)param_2);
        local_25 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_21 = 3;
        uVar5 = CUser::GetServerGroup((CUser *)param_2);
        pCVar6 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,uVar5);
        CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_33,0x13);
      }
    }
    else {
      uVar5 = *(undefined4 *)(local_14 + 0xe);
      uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig(CUser*, char*, int)"
                 ,0x280c,
                 "MEMBER : Inter_MonitorNoticeRequestMemberEnterToResponser::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar4,uVar5);
    }
  }
  return 0;
}

```


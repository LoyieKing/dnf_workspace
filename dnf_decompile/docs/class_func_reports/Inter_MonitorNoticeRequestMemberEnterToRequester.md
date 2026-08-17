# Inter_MonitorNoticeRequestMemberEnterToRequester

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084ccba0 Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig  [0x084ccba0-0x84ccd53] ===
 84ccba0:	55                   	push   %ebp
 84ccba1:	89 e5                	mov    %esp,%ebp
 84ccba3:	56                   	push   %esi
 84ccba4:	53                   	push   %ebx
 84ccba5:	83 ec 40             	sub    $0x40,%esp
 84ccba8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccbab:	89 04 24             	mov    %eax,(%esp)
 84ccbae:	e8 d9 d7 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84ccbb3:	85 c0                	test   %eax,%eax
 84ccbb5:	0f 94 c0             	sete   %al
 84ccbb8:	84 c0                	test   %al,%al
 84ccbba:	74 0a                	je     84ccbc6 <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0x26>
 84ccbbc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccbc1:	e9 84 01 00 00       	jmp    84ccd4a <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0x1aa>
 84ccbc6:	8b 45 10             	mov    0x10(%ebp),%eax
 84ccbc9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ccbcc:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ccbd3:	ff 
 84ccbd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccbd7:	89 04 24             	mov    %eax,(%esp)
 84ccbda:	e8 c1 13 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ccbdf:	89 c2                	mov    %eax,%edx
 84ccbe1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccbe4:	8b 40 0e             	mov    0xe(%eax),%eax
 84ccbe7:	39 c2                	cmp    %eax,%edx
 84ccbe9:	0f 95 c0             	setne  %al
 84ccbec:	84 c0                	test   %al,%al
 84ccbee:	74 57                	je     84ccc47 <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0xa7>
 84ccbf0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccbf3:	8b 58 0e             	mov    0xe(%eax),%ebx
 84ccbf6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84ccbfd:	ff 
 84ccbfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccc01:	89 04 24             	mov    %eax,(%esp)
 84ccc04:	e8 97 13 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84ccc09:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84ccc0d:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ccc11:	c7 44 24 10 d8 83 c8 	movl   $0x8c883d8,0x10(%esp)
 84ccc18:	08 
 84ccc19:	c7 44 24 0c e8 27 00 	movl   $0x27e8,0xc(%esp)
 84ccc20:	00 
 84ccc21:	c7 44 24 08 00 d4 c8 	movl   $0x8c8d400,0x8(%esp)
 84ccc28:	08 
 84ccc29:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84ccc30:	08 
 84ccc31:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ccc38:	e8 cd 6f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ccc3d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccc42:	e9 03 01 00 00       	jmp    84ccd4a <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0x1aa>
 84ccc47:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccc4a:	89 04 24             	mov    %eax,(%esp)
 84ccc4d:	e8 fa 10 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ccc52:	c7 44 24 08 4f 00 00 	movl   $0x4f,0x8(%esp)
 84ccc59:	00 
 84ccc5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ccc61:	00 
 84ccc62:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccc65:	89 04 24             	mov    %eax,(%esp)
 84ccc68:	e8 8f ec bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ccc6d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccc70:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84ccc74:	84 c0                	test   %al,%al
 84ccc76:	75 15                	jne    84ccc8d <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0xed>
 84ccc78:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ccc7f:	00 
 84ccc80:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccc83:	89 04 24             	mov    %eax,(%esp)
 84ccc86:	e8 95 ec bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ccc8b:	eb 2c                	jmp    84cccb9 <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0x119>
 84ccc8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ccc94:	00 
 84ccc95:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccc98:	89 04 24             	mov    %eax,(%esp)
 84ccc9b:	e8 80 ec bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ccca0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ccca3:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84ccca7:	0f b6 c0             	movzbl %al,%eax
 84cccaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cccae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cccb1:	89 04 24             	mov    %eax,(%esp)
 84cccb4:	e8 67 ec bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cccb9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cccbc:	83 c0 13             	add    $0x13,%eax
 84cccbf:	89 04 24             	mov    %eax,(%esp)
 84cccc2:	e8 e9 16 bb ff       	call   807e3b0 <strlen@plt>
 84cccc7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cccca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccccd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cccd1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cccd4:	89 04 24             	mov    %eax,(%esp)
 84cccd7:	e8 60 ec bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cccdc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cccdf:	8d 50 13             	lea    0x13(%eax),%edx
 84ccce2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ccce5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ccce9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ccced:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84cccf0:	89 04 24             	mov    %eax,(%esp)
 84cccf3:	e8 ec a6 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cccf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cccff:	00 
 84ccd00:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccd03:	89 04 24             	mov    %eax,(%esp)
 84ccd06:	e8 4d ec bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ccd0b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccd0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ccd12:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ccd15:	89 04 24             	mov    %eax,(%esp)
 84ccd18:	e8 9d b8 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ccd1d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ccd22:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccd25:	89 04 24             	mov    %eax,(%esp)
 84ccd28:	e8 53 11 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccd2d:	eb 1b                	jmp    84ccd4a <_ZN48Inter_MonitorNoticeRequestMemberEnterToRequester12dispatch_sigEP5CUserPci+0x1aa>
 84ccd2f:	89 d3                	mov    %edx,%ebx
 84ccd31:	89 c6                	mov    %eax,%esi
 84ccd33:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84ccd36:	89 04 24             	mov    %eax,(%esp)
 84ccd39:	e8 42 11 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ccd3e:	89 f0                	mov    %esi,%eax
 84ccd40:	89 da                	mov    %ebx,%edx
 84ccd42:	89 04 24             	mov    %eax,(%esp)
 84ccd45:	e8 06 6a 61 00       	call   8ae3750 <_Unwind_Resume>
 84ccd4a:	89 d8                	mov    %ebx,%eax
 84ccd4c:	83 c4 40             	add    $0x40,%esp
 84ccd4f:	5b                   	pop    %ebx
 84ccd50:	5e                   	pop    %esi
 84ccd51:	5d                   	pop    %ebp
 84ccd52:	c3                   	ret
 84ccd53:	90                   	nop

```

```c
// Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig @ 0x84ccba0

/* Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_14 + 0xe)) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084ccc68 to 084ccd1c has its CatchHandler @ 084ccd2f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x4f);
      if (*(char *)(local_14 + 0x12) == '\0') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x12));
      }
      local_10 = strlen((char *)(local_14 + 0x13));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x13),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig(CUser*, char*, int)"
                 ,0x27e8,
                 "MEMBER : Inter_MonitorNoticeRequestMemberEnterToRequester::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```


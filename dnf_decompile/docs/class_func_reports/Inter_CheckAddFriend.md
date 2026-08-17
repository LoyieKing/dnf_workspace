# Inter_CheckAddFriend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8a42 Inter_CheckAddFriend::dispatch_sig  [0x084e8a42-0x84e8bb9] ===
 84e8a42:	55                   	push   %ebp
 84e8a43:	89 e5                	mov    %esp,%ebp
 84e8a45:	56                   	push   %esi
 84e8a46:	53                   	push   %ebx
 84e8a47:	83 ec 70             	sub    $0x70,%esp
 84e8a4a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e8a4e:	74 06                	je     84e8a56 <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x14>
 84e8a50:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84e8a54:	75 48                	jne    84e8a9e <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x5c>
 84e8a56:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8a5d:	00 
 84e8a5e:	c7 44 24 08 7b 6d 00 	movl   $0x6d7b,0x8(%esp)
 84e8a65:	00 
 84e8a66:	c7 44 24 04 c0 b3 c8 	movl   $0x8c8b3c0,0x4(%esp)
 84e8a6d:	08 
 84e8a6e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e8a71:	89 04 24             	mov    %eax,(%esp)
 84e8a74:	e8 9f 6c 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8a79:	c7 44 24 08 c0 b3 c8 	movl   $0x8c8b3c0,0x8(%esp)
 84e8a80:	08 
 84e8a81:	c7 44 24 04 b0 a4 c8 	movl   $0x8c8a4b0,0x4(%esp)
 84e8a88:	08 
 84e8a89:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84e8a8c:	89 04 24             	mov    %eax,(%esp)
 84e8a8f:	e8 f4 6c 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8a94:	b8 7c 6d 00 00       	mov    $0x6d7c,%eax
 84e8a99:	e9 15 01 00 00       	jmp    84e8bb3 <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x171>
 84e8a9e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8aa1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e8aa4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84e8aa8:	75 48                	jne    84e8af2 <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0xb0>
 84e8aaa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8ab1:	00 
 84e8ab2:	c7 44 24 08 82 6d 00 	movl   $0x6d82,0x8(%esp)
 84e8ab9:	00 
 84e8aba:	c7 44 24 04 c0 b3 c8 	movl   $0x8c8b3c0,0x4(%esp)
 84e8ac1:	08 
 84e8ac2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e8ac5:	89 04 24             	mov    %eax,(%esp)
 84e8ac8:	e8 4b 6c 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8acd:	c7 44 24 08 c0 b3 c8 	movl   $0x8c8b3c0,0x8(%esp)
 84e8ad4:	08 
 84e8ad5:	c7 44 24 04 c9 a4 c8 	movl   $0x8c8a4c9,0x4(%esp)
 84e8adc:	08 
 84e8add:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e8ae0:	89 04 24             	mov    %eax,(%esp)
 84e8ae3:	e8 a0 6c 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8ae8:	b8 83 6d 00 00       	mov    $0x6d83,%eax
 84e8aed:	e9 c1 00 00 00       	jmp    84e8bb3 <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x171>
 84e8af2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8af5:	8b 00                	mov    (%eax),%eax
 84e8af7:	85 c0                	test   %eax,%eax
 84e8af9:	0f 85 90 00 00 00    	jne    84e8b8f <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x14d>
 84e8aff:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84e8b02:	89 04 24             	mov    %eax,(%esp)
 84e8b05:	e8 56 08 00 00       	call   84e9360 <_ZN24Packet_Monitor_Add_BuddyC1Ev>
 84e8b0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8b0d:	89 04 24             	mov    %eax,(%esp)
 84e8b10:	e8 39 31 be ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84e8b15:	89 45 aa             	mov    %eax,-0x56(%ebp)
 84e8b18:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8b1b:	89 04 24             	mov    %eax,(%esp)
 84e8b1e:	e8 73 01 be ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 84e8b23:	89 45 ae             	mov    %eax,-0x52(%ebp)
 84e8b26:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8b29:	83 c0 05             	add    $0x5,%eax
 84e8b2c:	89 04 24             	mov    %eax,(%esp)
 84e8b2f:	e8 7c 58 b9 ff       	call   807e3b0 <strlen@plt>
 84e8b34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8b37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8b3a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84e8b3d:	83 c2 05             	add    $0x5,%edx
 84e8b40:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e8b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e8b48:	8d 45 a0             	lea    -0x60(%ebp),%eax
 84e8b4b:	83 c0 12             	add    $0x12,%eax
 84e8b4e:	89 04 24             	mov    %eax,(%esp)
 84e8b51:	e8 4a 4d b9 ff       	call   807d8a0 <memcpy@plt>
 84e8b56:	0f b7 45 a2          	movzwl -0x5e(%ebp),%eax
 84e8b5a:	0f b7 f0             	movzwl %ax,%esi
 84e8b5d:	8d 5d a0             	lea    -0x60(%ebp),%ebx
 84e8b60:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8b63:	89 04 24             	mov    %eax,(%esp)
 84e8b66:	e8 25 31 be ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84e8b6b:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 84e8b71:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8b75:	89 14 24             	mov    %edx,(%esp)
 84e8b78:	e8 0d 95 c2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84e8b7d:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e8b81:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e8b85:	89 04 24             	mov    %eax,(%esp)
 84e8b88:	e8 67 82 f8 ff       	call   8470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>
 84e8b8d:	eb 1f                	jmp    84e8bae <_ZN20Inter_CheckAddFriend12dispatch_sigEP5CUserPci+0x16c>
 84e8b8f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e8b92:	8b 00                	mov    (%eax),%eax
 84e8b94:	0f b6 c0             	movzbl %al,%eax
 84e8b97:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e8b9b:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 84e8ba2:	00 
 84e8ba3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8ba6:	89 04 24             	mov    %eax,(%esp)
 84e8ba9:	e8 94 33 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e8bae:	b8 00 00 00 00       	mov    $0x0,%eax
 84e8bb3:	83 c4 70             	add    $0x70,%esp
 84e8bb6:	5b                   	pop    %ebx
 84e8bb7:	5e                   	pop    %esi
 84e8bb8:	5d                   	pop    %ebp
 84e8bb9:	c3                   	ret

```

```c
// Inter_CheckAddFriend::dispatch_sig @ 0x84e8a42

/* Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CheckAddFriend::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CMonitorServerProxy *this;
  Packet_Monitor_Add_Buddy local_64 [2];
  ushort local_62;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 auStack_52 [30];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  size_t local_10;
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_34,"virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)"
                       ,0x6d7b,5);
    cMyTrace::operator()
              (local_34,"[%s] pUser or p is null.",
               "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x6d7c;
  }
  else {
    local_14 = param_3;
    if (param_3 == 0) {
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)",0x6d82
                         ,5);
      cMyTrace::operator()
                (local_24,"[%s] internal data is null.",
                 "virtual int Inter_CheckAddFriend::dispatch_sig(CUser*, char*, int)");
      uVar1 = 0x6d83;
    }
    else {
      if (*(int *)param_3 == 0) {
        Packet_Monitor_Add_Buddy::Packet_Monitor_Add_Buddy(local_64);
        local_5a = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        local_56 = CUser::GetUID((CUser *)param_2);
        local_10 = strlen((char *)(local_14 + 5));
        memcpy(auStack_52,(void *)(local_14 + 5),local_10);
        uVar1 = CUser::GetServerGroup((CUser *)param_2);
        this = (CMonitorServerProxy *)
               CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                         (GlobalData::s_monitor_proxy_mgr,uVar1);
        CMonitorServerProxy::SendPacket(this,(char *)local_64,(uint)local_62);
      }
      else {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x3f,*(uint *)param_3 & 0xff);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}

```


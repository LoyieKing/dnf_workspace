# Inter_MonitorBuddyInOut

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8ec0 Inter_MonitorBuddyInOut::dispatch_sig  [0x084c8ec0-0x84c9147] ===
 84c8ec0:	55                   	push   %ebp
 84c8ec1:	89 e5                	mov    %esp,%ebp
 84c8ec3:	57                   	push   %edi
 84c8ec4:	56                   	push   %esi
 84c8ec5:	53                   	push   %ebx
 84c8ec6:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 84c8ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8ecf:	89 04 24             	mov    %eax,(%esp)
 84c8ed2:	e8 b5 14 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c8ed7:	85 c0                	test   %eax,%eax
 84c8ed9:	0f 94 c0             	sete   %al
 84c8edc:	84 c0                	test   %al,%al
 84c8ede:	74 0a                	je     84c8eea <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x2a>
 84c8ee0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c8ee5:	e9 51 02 00 00       	jmp    84c913b <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x27b>
 84c8eea:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8eed:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84c8ef0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8ef3:	89 04 24             	mov    %eax,(%esp)
 84c8ef6:	e8 51 4e 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84c8efb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8efe:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 84c8f02:	3c 01                	cmp    $0x1,%al
 84c8f04:	75 1d                	jne    84c8f23 <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x63>
 84c8f06:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 84c8f0d:	00 
 84c8f0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c8f15:	00 
 84c8f16:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8f19:	89 04 24             	mov    %eax,(%esp)
 84c8f1c:	e8 db 29 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c8f21:	eb 1b                	jmp    84c8f3e <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x7e>
 84c8f23:	c7 44 24 08 37 00 00 	movl   $0x37,0x8(%esp)
 84c8f2a:	00 
 84c8f2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84c8f32:	00 
 84c8f33:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8f36:	89 04 24             	mov    %eax,(%esp)
 84c8f39:	e8 be 29 c0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84c8f3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8f41:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84c8f45:	0f b6 c0             	movzbl %al,%eax
 84c8f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8f4c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8f4f:	89 04 24             	mov    %eax,(%esp)
 84c8f52:	e8 c9 29 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8f57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8f5a:	8b 40 0a             	mov    0xa(%eax),%eax
 84c8f5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8f61:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8f64:	89 04 24             	mov    %eax,(%esp)
 84c8f67:	e8 d0 29 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c8f6c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8f6f:	83 c0 15             	add    $0x15,%eax
 84c8f72:	89 04 24             	mov    %eax,(%esp)
 84c8f75:	e8 36 54 bb ff       	call   807e3b0 <strlen@plt>
 84c8f7a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84c8f7d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c8f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8f84:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8f87:	89 04 24             	mov    %eax,(%esp)
 84c8f8a:	e8 ad 29 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84c8f8f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8f92:	8d 50 15             	lea    0x15(%eax),%edx
 84c8f95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84c8f98:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c8f9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c8fa0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8fa3:	89 04 24             	mov    %eax,(%esp)
 84c8fa6:	e8 39 e4 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84c8fab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8fae:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 84c8fb2:	0f b6 c0             	movzbl %al,%eax
 84c8fb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8fb9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8fbc:	89 04 24             	mov    %eax,(%esp)
 84c8fbf:	e8 5c 29 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84c8fc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84c8fcb:	00 
 84c8fcc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8fcf:	89 04 24             	mov    %eax,(%esp)
 84c8fd2:	e8 81 29 c0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84c8fd7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8fda:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c8fde:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8fe1:	89 04 24             	mov    %eax,(%esp)
 84c8fe4:	e8 d1 f5 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84c8fe9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c8fec:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 84c8ff0:	3c 01                	cmp    $0x1,%al
 84c8ff2:	75 16                	jne    84c900a <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x14a>
 84c8ff4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c8ff7:	89 04 24             	mov    %eax,(%esp)
 84c8ffa:	e8 33 74 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c8fff:	85 c0                	test   %eax,%eax
 84c9001:	74 07                	je     84c900a <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x14a>
 84c9003:	b8 01 00 00 00       	mov    $0x1,%eax
 84c9008:	eb 05                	jmp    84c900f <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x14f>
 84c900a:	b8 00 00 00 00       	mov    $0x0,%eax
 84c900f:	84 c0                	test   %al,%al
 84c9011:	0f 84 f7 00 00 00    	je     84c910e <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x24e>
 84c9017:	8d 45 97             	lea    -0x69(%ebp),%eax
 84c901a:	89 04 24             	mov    %eax,(%esp)
 84c901d:	e8 32 28 c0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 84c9022:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84c9025:	8d 70 15             	lea    0x15(%eax),%esi
 84c9028:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c902b:	89 04 24             	mov    %eax,(%esp)
 84c902e:	e8 f5 7f c3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 84c9033:	89 c3                	mov    %eax,%ebx
 84c9035:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c903c:	00 
 84c903d:	c7 44 24 08 ed 78 c8 	movl   $0x8c878ed,0x8(%esp)
 84c9044:	08 
 84c9045:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84c904c:	00 
 84c904d:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84c9054:	e8 a5 c7 5d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84c9059:	89 74 24 10          	mov    %esi,0x10(%esp)
 84c905d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c9061:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c9065:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 84c906c:	00 
 84c906d:	8d 85 97 fe ff ff    	lea    -0x169(%ebp),%eax
 84c9073:	89 04 24             	mov    %eax,(%esp)
 84c9076:	e8 a1 37 0c 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 84c907b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c907e:	89 04 24             	mov    %eax,(%esp)
 84c9081:	e8 0a 2c c0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84c9086:	89 c6                	mov    %eax,%esi
 84c9088:	8d 85 97 fe ff ff    	lea    -0x169(%ebp),%eax
 84c908e:	89 04 24             	mov    %eax,(%esp)
 84c9091:	e8 1a 53 bb ff       	call   807e3b0 <strlen@plt>
 84c9096:	89 c7                	mov    %eax,%edi
 84c9098:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c909b:	89 04 24             	mov    %eax,(%esp)
 84c909e:	e8 ab 2b c0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84c90a3:	89 c3                	mov    %eax,%ebx
 84c90a5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c90ac:	00 
 84c90ad:	c7 44 24 08 ce 70 c8 	movl   $0x8c870ce,0x8(%esp)
 84c90b4:	08 
 84c90b5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84c90bc:	00 
 84c90bd:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 84c90c4:	e8 35 c7 5d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 84c90c9:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 84c90d0:	00 
 84c90d1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 84c90d8:	00 
 84c90d9:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 84c90dd:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 84c90e4:	00 
 84c90e5:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84c90e9:	8d 95 97 fe ff ff    	lea    -0x169(%ebp),%edx
 84c90ef:	89 54 24 10          	mov    %edx,0x10(%esp)
 84c90f3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84c90f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84c90fe:	00 
 84c90ff:	8d 55 97             	lea    -0x69(%ebp),%edx
 84c9102:	89 54 24 04          	mov    %edx,0x4(%esp)
 84c9106:	89 04 24             	mov    %eax,(%esp)
 84c9109:	e8 da c4 08 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 84c910e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84c9113:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c9116:	89 04 24             	mov    %eax,(%esp)
 84c9119:	e8 62 4d 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c911e:	eb 1b                	jmp    84c913b <_ZN23Inter_MonitorBuddyInOut12dispatch_sigEP5CUserPci+0x27b>
 84c9120:	89 d3                	mov    %edx,%ebx
 84c9122:	89 c6                	mov    %eax,%esi
 84c9124:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c9127:	89 04 24             	mov    %eax,(%esp)
 84c912a:	e8 51 4d 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84c912f:	89 f0                	mov    %esi,%eax
 84c9131:	89 da                	mov    %ebx,%edx
 84c9133:	89 04 24             	mov    %eax,(%esp)
 84c9136:	e8 15 a6 61 00       	call   8ae3750 <_Unwind_Resume>
 84c913b:	89 d8                	mov    %ebx,%eax
 84c913d:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 84c9143:	5b                   	pop    %ebx
 84c9144:	5e                   	pop    %esi
 84c9145:	5f                   	pop    %edi
 84c9146:	5d                   	pop    %ebp
 84c9147:	c3                   	ret

```

```c
// Inter_MonitorBuddyInOut::dispatch_sig @ 0x84c8ec0

/* Inter_MonitorBuddyInOut::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorBuddyInOut::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char local_16d [256];
  Inven_Item local_6d [61];
  PacketGuard local_30 [12];
  int local_24;
  size_t local_20;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_24 = param_3;
    PacketGuard::PacketGuard(local_30);
    if (*(char *)(local_24 + 0x14) == '\x01') {
                    /* try { // try from 084c8f1c to 084c910d has its CatchHandler @ 084c9120 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x36);
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x37);
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x12));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
    local_20 = strlen((char *)(local_24 + 0x15));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_20);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_24 + 0x15),local_20);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x13));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send((CUser *)param_2,local_30);
    if ((*(char *)(local_24 + 0x33) == '\x01') &&
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar2 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      Inven_Item::Inven_Item(local_6d);
      iVar2 = local_24 + 0x15;
      uVar3 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar4 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "return_user_msg_3",(bool *)0x0);
      OS_API::snprintf(local_16d,0xff,pcVar4,uVar3,iVar2);
      uVar3 = CUser::GetServerGroup((CUser *)param_2);
      sVar5 = strlen(local_16d);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar7 = RDARScriptStringManager::findString
                        ((RDARScriptStringManager *)g_scriptStringManager_,4,"return_user_msg_title"
                         ,(bool *)0x0);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (uVar7,local_6d,0,uVar6,local_16d,sVar5,0,uVar3,0,0);
    }
    PacketGuard::~PacketGuard(local_30);
  }
  return 0;
}

```


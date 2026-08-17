# Inter_ReplyGuildInviteToCaller

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d2f6e Inter_ReplyGuildInviteToCaller::dispatch_sig  [0x084d2f6e-0x84d3169] ===
 84d2f6e:	55                   	push   %ebp
 84d2f6f:	89 e5                	mov    %esp,%ebp
 84d2f71:	56                   	push   %esi
 84d2f72:	53                   	push   %ebx
 84d2f73:	83 ec 40             	sub    $0x40,%esp
 84d2f76:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2f79:	89 04 24             	mov    %eax,(%esp)
 84d2f7c:	e8 0b 74 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d2f81:	85 c0                	test   %eax,%eax
 84d2f83:	0f 94 c0             	sete   %al
 84d2f86:	84 c0                	test   %al,%al
 84d2f88:	74 0a                	je     84d2f94 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x26>
 84d2f8a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d2f8f:	e9 cc 01 00 00       	jmp    84d3160 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1f2>
 84d2f94:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2f97:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d2f9a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2fa1:	ff 
 84d2fa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2fa5:	89 04 24             	mov    %eax,(%esp)
 84d2fa8:	e8 f3 af 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2fad:	89 c2                	mov    %eax,%edx
 84d2faf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2fb2:	8b 40 0a             	mov    0xa(%eax),%eax
 84d2fb5:	39 c2                	cmp    %eax,%edx
 84d2fb7:	0f 95 c0             	setne  %al
 84d2fba:	84 c0                	test   %al,%al
 84d2fbc:	74 57                	je     84d3015 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0xa7>
 84d2fbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2fc1:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2fc4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84d2fcb:	ff 
 84d2fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2fcf:	89 04 24             	mov    %eax,(%esp)
 84d2fd2:	e8 c9 af 17 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84d2fd7:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84d2fdb:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d2fdf:	c7 44 24 10 ec 8d c8 	movl   $0x8c88dec,0x10(%esp)
 84d2fe6:	08 
 84d2fe7:	c7 44 24 0c cf 33 00 	movl   $0x33cf,0xc(%esp)
 84d2fee:	00 
 84d2fef:	c7 44 24 08 c0 c9 c8 	movl   $0x8c8c9c0,0x8(%esp)
 84d2ff6:	08 
 84d2ff7:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d2ffe:	08 
 84d2fff:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d3006:	e8 ff 0b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d300b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d3010:	e9 4b 01 00 00       	jmp    84d3160 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1f2>
 84d3015:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3018:	8b 40 12             	mov    0x12(%eax),%eax
 84d301b:	83 f8 02             	cmp    $0x2,%eax
 84d301e:	75 2f                	jne    84d304f <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0xe1>
 84d3020:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3023:	83 c0 16             	add    $0x16,%eax
 84d3026:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 84d302d:	00 
 84d302e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84d3035:	00 
 84d3036:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d303a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d303d:	89 04 24             	mov    %eax,(%esp)
 84d3040:	e8 a9 b0 1b 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 84d3045:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d304a:	e9 11 01 00 00       	jmp    84d3160 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1f2>
 84d304f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d3052:	8b 40 12             	mov    0x12(%eax),%eax
 84d3055:	83 f8 03             	cmp    $0x3,%eax
 84d3058:	75 2f                	jne    84d3089 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x11b>
 84d305a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d305d:	83 c0 16             	add    $0x16,%eax
 84d3060:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 84d3067:	00 
 84d3068:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d306f:	00 
 84d3070:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3074:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3077:	89 04 24             	mov    %eax,(%esp)
 84d307a:	e8 6f b0 1b 00       	call   868e0ee <_ZN5CUser29Send_SoloPlay_Reject_NotiPackEPKc26ENUM_SOLO_PLAY_REJECT_MODE25ENUM_SOLO_PLAY_REJECT_MSG>
 84d307f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d3084:	e9 d7 00 00 00       	jmp    84d3160 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1f2>
 84d3089:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d308c:	89 04 24             	mov    %eax,(%esp)
 84d308f:	e8 b8 ac 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3094:	c7 44 24 08 94 00 00 	movl   $0x94,0x8(%esp)
 84d309b:	00 
 84d309c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d30a3:	00 
 84d30a4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d30a7:	89 04 24             	mov    %eax,(%esp)
 84d30aa:	e8 4d 88 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d30af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d30b2:	8b 40 12             	mov    0x12(%eax),%eax
 84d30b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d30b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d30bc:	89 04 24             	mov    %eax,(%esp)
 84d30bf:	e8 5c 88 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d30c4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d30c7:	8b 40 12             	mov    0x12(%eax),%eax
 84d30ca:	83 f8 01             	cmp    $0x1,%eax
 84d30cd:	77 3f                	ja     84d310e <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1a0>
 84d30cf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d30d2:	83 c0 16             	add    $0x16,%eax
 84d30d5:	89 04 24             	mov    %eax,(%esp)
 84d30d8:	e8 d3 b2 ba ff       	call   807e3b0 <strlen@plt>
 84d30dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d30e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d30e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d30e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d30ea:	89 04 24             	mov    %eax,(%esp)
 84d30ed:	e8 4a 88 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d30f2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d30f5:	8d 50 16             	lea    0x16(%eax),%edx
 84d30f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d30fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d30ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d3103:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3106:	89 04 24             	mov    %eax,(%esp)
 84d3109:	e8 d6 42 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d310e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3115:	00 
 84d3116:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3119:	89 04 24             	mov    %eax,(%esp)
 84d311c:	e8 37 88 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3121:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d3124:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d3128:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d312b:	89 04 24             	mov    %eax,(%esp)
 84d312e:	e8 87 54 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3133:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d3138:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d313b:	89 04 24             	mov    %eax,(%esp)
 84d313e:	e8 3d ad 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3143:	eb 1b                	jmp    84d3160 <_ZN30Inter_ReplyGuildInviteToCaller12dispatch_sigEP5CUserPci+0x1f2>
 84d3145:	89 d3                	mov    %edx,%ebx
 84d3147:	89 c6                	mov    %eax,%esi
 84d3149:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d314c:	89 04 24             	mov    %eax,(%esp)
 84d314f:	e8 2c ad 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3154:	89 f0                	mov    %esi,%eax
 84d3156:	89 da                	mov    %ebx,%edx
 84d3158:	89 04 24             	mov    %eax,(%esp)
 84d315b:	e8 f0 05 61 00       	call   8ae3750 <_Unwind_Resume>
 84d3160:	89 d8                	mov    %ebx,%eax
 84d3162:	83 c4 40             	add    $0x40,%esp
 84d3165:	5b                   	pop    %ebx
 84d3166:	5e                   	pop    %esi
 84d3167:	5d                   	pop    %ebp
 84d3168:	c3                   	ret
 84d3169:	90                   	nop

```

```c
// Inter_ReplyGuildInviteToCaller::dispatch_sig @ 0x84d2f6e

/* Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
    if (iVar2 == *(int *)(local_14 + 10)) {
      if (*(int *)(local_14 + 0x12) == 2) {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_14 + 0x16,1,4);
      }
      else if (*(int *)(local_14 + 0x12) == 3) {
        CUser::Send_SoloPlay_Reject_NotiPack((CUser *)param_2,local_14 + 0x16,0,4);
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d30aa to 084d3132 has its CatchHandler @ 084d3145 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x94);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
        if (*(uint *)(local_14 + 0x12) < 2) {
          local_10 = strlen((char *)(local_14 + 0x16));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send((CUser *)param_2,local_20);
        PacketGuard::~PacketGuard(local_20);
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_14 + 10);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_ReplyGuildInviteToCaller::dispatch_sig(CUser*, char*, int)",
                 0x33cf,
                 "MEMBER : Inter_ReplyGuildInviteToCaller::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}

```


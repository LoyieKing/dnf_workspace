# Inter_Monitor_RequestBlackListResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0ba6 Inter_Monitor_RequestBlackListResult::dispatch_sig  [0x084d0ba6-0x84d0ddf] ===
 84d0ba6:	55                   	push   %ebp
 84d0ba7:	89 e5                	mov    %esp,%ebp
 84d0ba9:	56                   	push   %esi
 84d0baa:	53                   	push   %ebx
 84d0bab:	83 ec 70             	sub    $0x70,%esp
 84d0bae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0bb1:	89 04 24             	mov    %eax,(%esp)
 84d0bb4:	e8 d3 97 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d0bb9:	85 c0                	test   %eax,%eax
 84d0bbb:	0f 94 c0             	sete   %al
 84d0bbe:	84 c0                	test   %al,%al
 84d0bc0:	74 0a                	je     84d0bcc <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x26>
 84d0bc2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0bc7:	e9 0b 02 00 00       	jmp    84d0dd7 <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x231>
 84d0bcc:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0bcf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84d0bd2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0bd5:	89 04 24             	mov    %eax,(%esp)
 84d0bd8:	e8 6f d1 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d0bdd:	c7 44 24 08 7b 00 00 	movl   $0x7b,0x8(%esp)
 84d0be4:	00 
 84d0be5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0bec:	00 
 84d0bed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0bf0:	89 04 24             	mov    %eax,(%esp)
 84d0bf3:	e8 04 ad bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d0bf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0bff:	00 
 84d0c00:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0c03:	89 04 24             	mov    %eax,(%esp)
 84d0c06:	e8 15 ad bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0c0b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d0c0e:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84d0c12:	3c 0a                	cmp    $0xa,%al
 84d0c14:	76 0a                	jbe    84d0c20 <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x7a>
 84d0c16:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0c1b:	e9 ac 01 00 00       	jmp    84d0dcc <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x226>
 84d0c20:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d0c23:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84d0c27:	0f b6 c0             	movzbl %al,%eax
 84d0c2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0c2e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0c31:	89 04 24             	mov    %eax,(%esp)
 84d0c34:	e8 e7 ac bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0c39:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84d0c40:	e9 28 01 00 00       	jmp    84d0d6d <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x1c7>
 84d0c45:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d0c48:	89 d0                	mov    %edx,%eax
 84d0c4a:	c1 e0 02             	shl    $0x2,%eax
 84d0c4d:	01 d0                	add    %edx,%eax
 84d0c4f:	c1 e0 03             	shl    $0x3,%eax
 84d0c52:	03 45 e8             	add    -0x18(%ebp),%eax
 84d0c55:	83 c0 13             	add    $0x13,%eax
 84d0c58:	89 04 24             	mov    %eax,(%esp)
 84d0c5b:	e8 50 d7 ba ff       	call   807e3b0 <strlen@plt>
 84d0c60:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84d0c63:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84d0c67:	75 3b                	jne    84d0ca4 <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0xfe>
 84d0c69:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0c6c:	89 04 24             	mov    %eax,(%esp)
 84d0c6f:	e8 da af bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d0c74:	89 44 24 14          	mov    %eax,0x14(%esp)
 84d0c78:	c7 44 24 10 e8 8b c8 	movl   $0x8c88be8,0x10(%esp)
 84d0c7f:	08 
 84d0c80:	c7 44 24 0c 6d 2f 00 	movl   $0x2f6d,0xc(%esp)
 84d0c87:	00 
 84d0c88:	c7 44 24 08 60 cc c8 	movl   $0x8c8cc60,0x8(%esp)
 84d0c8f:	08 
 84d0c90:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d0c97:	08 
 84d0c98:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d0c9f:	e8 66 2f 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d0ca4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d0ca7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0cab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0cae:	89 04 24             	mov    %eax,(%esp)
 84d0cb1:	e8 86 ac bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0cb6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d0cb9:	89 d0                	mov    %edx,%eax
 84d0cbb:	c1 e0 02             	shl    $0x2,%eax
 84d0cbe:	01 d0                	add    %edx,%eax
 84d0cc0:	c1 e0 03             	shl    $0x3,%eax
 84d0cc3:	03 45 e8             	add    -0x18(%ebp),%eax
 84d0cc6:	8d 50 13             	lea    0x13(%eax),%edx
 84d0cc9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84d0ccc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0cd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0cd4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0cd7:	89 04 24             	mov    %eax,(%esp)
 84d0cda:	e8 05 67 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d0cdf:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d0ce2:	89 d0                	mov    %edx,%eax
 84d0ce4:	c1 e0 02             	shl    $0x2,%eax
 84d0ce7:	01 d0                	add    %edx,%eax
 84d0ce9:	c1 e0 03             	shl    $0x3,%eax
 84d0cec:	83 c0 20             	add    $0x20,%eax
 84d0cef:	03 45 e8             	add    -0x18(%ebp),%eax
 84d0cf2:	83 c0 13             	add    $0x13,%eax
 84d0cf5:	8d 55 b0             	lea    -0x50(%ebp),%edx
 84d0cf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0cfc:	89 04 24             	mov    %eax,(%esp)
 84d0cff:	e8 5c d6 ba ff       	call   807e360 <localtime_r@plt>
 84d0d04:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d0d07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0d0a:	8b 40 14             	mov    0x14(%eax),%eax
 84d0d0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0d11:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0d14:	89 04 24             	mov    %eax,(%esp)
 84d0d17:	e8 04 ac bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0d1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0d1f:	8b 40 10             	mov    0x10(%eax),%eax
 84d0d22:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0d26:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0d29:	89 04 24             	mov    %eax,(%esp)
 84d0d2c:	e8 ef ab bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0d31:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0d34:	8b 40 0c             	mov    0xc(%eax),%eax
 84d0d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0d3b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0d3e:	89 04 24             	mov    %eax,(%esp)
 84d0d41:	e8 da ab bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0d46:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d0d49:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 84d0d4c:	89 d0                	mov    %edx,%eax
 84d0d4e:	c1 e0 02             	shl    $0x2,%eax
 84d0d51:	01 d0                	add    %edx,%eax
 84d0d53:	c1 e0 03             	shl    $0x3,%eax
 84d0d56:	8b 44 08 0f          	mov    0xf(%eax,%ecx,1),%eax
 84d0d5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0d5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0d61:	89 04 24             	mov    %eax,(%esp)
 84d0d64:	e8 45 e2 1a 00       	call   867efae <_ZN5CUser19registerToBlackListEj>
 84d0d69:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84d0d6d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84d0d70:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 84d0d74:	0f b6 c0             	movzbl %al,%eax
 84d0d77:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84d0d7a:	0f 9f c0             	setg   %al
 84d0d7d:	84 c0                	test   %al,%al
 84d0d7f:	0f 85 c0 fe ff ff    	jne    84d0c45 <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x9f>
 84d0d85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0d8c:	00 
 84d0d8d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0d90:	89 04 24             	mov    %eax,(%esp)
 84d0d93:	e8 c0 ab bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d0d98:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0d9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0d9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0da2:	89 04 24             	mov    %eax,(%esp)
 84d0da5:	e8 10 78 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d0daa:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0daf:	eb 1b                	jmp    84d0dcc <_ZN36Inter_Monitor_RequestBlackListResult12dispatch_sigEP5CUserPci+0x226>
 84d0db1:	89 d3                	mov    %edx,%ebx
 84d0db3:	89 c6                	mov    %eax,%esi
 84d0db5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0db8:	89 04 24             	mov    %eax,(%esp)
 84d0dbb:	e8 c0 d0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0dc0:	89 f0                	mov    %esi,%eax
 84d0dc2:	89 da                	mov    %ebx,%edx
 84d0dc4:	89 04 24             	mov    %eax,(%esp)
 84d0dc7:	e8 84 29 61 00       	call   8ae3750 <_Unwind_Resume>
 84d0dcc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84d0dcf:	89 04 24             	mov    %eax,(%esp)
 84d0dd2:	e8 a9 d0 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d0dd7:	89 d8                	mov    %ebx,%eax
 84d0dd9:	83 c4 70             	add    $0x70,%esp
 84d0ddc:	5b                   	pop    %ebx
 84d0ddd:	5e                   	pop    %esi
 84d0dde:	5d                   	pop    %ebp
 84d0ddf:	c3                   	ret

```

```c
// Inter_Monitor_RequestBlackListResult::dispatch_sig @ 0x84d0ba6

/* Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  tm local_54;
  PacketGuard local_28 [12];
  int local_1c;
  size_t local_18;
  int local_14;
  tm *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_1c = param_3;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084d0bf3 to 084d0da9 has its CatchHandler @ 084d0db1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x7b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    if (*(byte *)(local_1c + 0xe) < 0xb) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0xe));
      for (local_14 = 0; local_14 < (int)(uint)*(byte *)(local_1c + 0xe); local_14 = local_14 + 1) {
        local_18 = strlen((char *)(local_14 * 0x28 + local_1c + 0x13));
        if (local_18 == 0) {
          uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          LogManager::logFormat
                    (1,"InterDispatcher.cpp",
                     "virtual int Inter_Monitor_RequestBlackListResult::dispatch_sig(CUser*, char*, int)"
                     ,0x2f6d,"BlackListNameLen Err charno(%d)",uVar2);
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_18);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_28,(char *)(local_14 * 0x28 + local_1c + 0x13),
                   local_18);
        local_10 = localtime_r((time_t *)(local_14 * 0x28 + local_1c + 0x33),&local_54);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_year);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_mon);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10->tm_mday);
        CUser::registerToBlackList((CUser *)param_2,*(uint *)(local_14 * 0x28 + 0xf + local_1c));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}

```


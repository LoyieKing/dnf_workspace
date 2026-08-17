# Inter_Monitor_RegisterBlackListResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d0de0 Inter_Monitor_RegisterBlackListResult::dispatch_sig  [0x084d0de0-0x84d1033] ===
 84d0de0:	55                   	push   %ebp
 84d0de1:	89 e5                	mov    %esp,%ebp
 84d0de3:	56                   	push   %esi
 84d0de4:	53                   	push   %ebx
 84d0de5:	83 ec 40             	sub    $0x40,%esp
 84d0de8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0deb:	89 04 24             	mov    %eax,(%esp)
 84d0dee:	e8 99 95 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d0df3:	85 c0                	test   %eax,%eax
 84d0df5:	0f 94 c0             	sete   %al
 84d0df8:	84 c0                	test   %al,%al
 84d0dfa:	74 0a                	je     84d0e06 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x26>
 84d0dfc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d0e01:	e9 24 02 00 00       	jmp    84d102a <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x24a>
 84d0e06:	8b 45 10             	mov    0x10(%ebp),%eax
 84d0e09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d0e0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0e0f:	89 04 24             	mov    %eax,(%esp)
 84d0e12:	e8 35 cf 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d0e17:	c7 44 24 08 79 00 00 	movl   $0x79,0x8(%esp)
 84d0e1e:	00 
 84d0e1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0e26:	00 
 84d0e27:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0e2a:	89 04 24             	mov    %eax,(%esp)
 84d0e2d:	e8 ca aa bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d0e32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0e35:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d0e39:	3c 01                	cmp    $0x1,%al
 84d0e3b:	0f 85 8b 00 00 00    	jne    84d0ecc <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0xec>
 84d0e41:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0e44:	8b 40 2c             	mov    0x2c(%eax),%eax
 84d0e47:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0e4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0e4e:	89 04 24             	mov    %eax,(%esp)
 84d0e51:	e8 58 e1 1a 00       	call   867efae <_ZN5CUser19registerToBlackListEj>
 84d0e56:	83 f0 01             	xor    $0x1,%eax
 84d0e59:	84 c0                	test   %al,%al
 84d0e5b:	74 57                	je     84d0eb4 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0xd4>
 84d0e5d:	c7 44 24 10 08 8c c8 	movl   $0x8c88c08,0x10(%esp)
 84d0e64:	08 
 84d0e65:	c7 44 24 0c 90 2f 00 	movl   $0x2f90,0xc(%esp)
 84d0e6c:	00 
 84d0e6d:	c7 44 24 08 00 cc c8 	movl   $0x8c8cc00,0x8(%esp)
 84d0e74:	08 
 84d0e75:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d0e7c:	08 
 84d0e7d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d0e84:	e8 81 2d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d0e89:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d0e90:	00 
 84d0e91:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0e94:	89 04 24             	mov    %eax,(%esp)
 84d0e97:	e8 84 aa bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0e9c:	c7 44 24 04 4a 00 00 	movl   $0x4a,0x4(%esp)
 84d0ea3:	00 
 84d0ea4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0ea7:	89 04 24             	mov    %eax,(%esp)
 84d0eaa:	e8 8d aa bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0eaf:	e9 e5 00 00 00       	jmp    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0eb4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0ebb:	00 
 84d0ebc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0ebf:	89 04 24             	mov    %eax,(%esp)
 84d0ec2:	e8 59 aa bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0ec7:	e9 cd 00 00 00       	jmp    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0ecc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0ecf:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d0ed3:	3c 02                	cmp    $0x2,%al
 84d0ed5:	75 2b                	jne    84d0f02 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x122>
 84d0ed7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d0ede:	00 
 84d0edf:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0ee2:	89 04 24             	mov    %eax,(%esp)
 84d0ee5:	e8 36 aa bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0eea:	c7 44 24 04 4a 00 00 	movl   $0x4a,0x4(%esp)
 84d0ef1:	00 
 84d0ef2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0ef5:	89 04 24             	mov    %eax,(%esp)
 84d0ef8:	e8 3f aa bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0efd:	e9 97 00 00 00       	jmp    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0f02:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0f05:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d0f09:	3c 03                	cmp    $0x3,%al
 84d0f0b:	75 28                	jne    84d0f35 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x155>
 84d0f0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d0f14:	00 
 84d0f15:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f18:	89 04 24             	mov    %eax,(%esp)
 84d0f1b:	e8 00 aa bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0f20:	c7 44 24 04 4c 00 00 	movl   $0x4c,0x4(%esp)
 84d0f27:	00 
 84d0f28:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f2b:	89 04 24             	mov    %eax,(%esp)
 84d0f2e:	e8 09 aa bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0f33:	eb 64                	jmp    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0f35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0f38:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d0f3c:	3c 04                	cmp    $0x4,%al
 84d0f3e:	75 28                	jne    84d0f68 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x188>
 84d0f40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d0f47:	00 
 84d0f48:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f4b:	89 04 24             	mov    %eax,(%esp)
 84d0f4e:	e8 cd a9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0f53:	c7 44 24 04 4e 00 00 	movl   $0x4e,0x4(%esp)
 84d0f5a:	00 
 84d0f5b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f5e:	89 04 24             	mov    %eax,(%esp)
 84d0f61:	e8 d6 a9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0f66:	eb 31                	jmp    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0f68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0f6b:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d0f6f:	3c 05                	cmp    $0x5,%al
 84d0f71:	75 26                	jne    84d0f99 <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x1b9>
 84d0f73:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d0f7a:	00 
 84d0f7b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f7e:	89 04 24             	mov    %eax,(%esp)
 84d0f81:	e8 9a a9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d0f86:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 84d0f8d:	00 
 84d0f8e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0f91:	89 04 24             	mov    %eax,(%esp)
 84d0f94:	e8 a3 a9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0f99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0f9c:	83 c0 0e             	add    $0xe,%eax
 84d0f9f:	89 04 24             	mov    %eax,(%esp)
 84d0fa2:	e8 09 d4 ba ff       	call   807e3b0 <strlen@plt>
 84d0fa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d0faa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0fb1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0fb4:	89 04 24             	mov    %eax,(%esp)
 84d0fb7:	e8 80 a9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d0fbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d0fbf:	8d 50 0e             	lea    0xe(%eax),%edx
 84d0fc2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d0fc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d0fc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d0fcd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0fd0:	89 04 24             	mov    %eax,(%esp)
 84d0fd3:	e8 0c 64 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d0fd8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d0fdf:	00 
 84d0fe0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0fe3:	89 04 24             	mov    %eax,(%esp)
 84d0fe6:	e8 6d a9 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d0feb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d0fee:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d0ff2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d0ff5:	89 04 24             	mov    %eax,(%esp)
 84d0ff8:	e8 bd 75 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d0ffd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1002:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1005:	89 04 24             	mov    %eax,(%esp)
 84d1008:	e8 73 ce 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d100d:	eb 1b                	jmp    84d102a <_ZN37Inter_Monitor_RegisterBlackListResult12dispatch_sigEP5CUserPci+0x24a>
 84d100f:	89 d3                	mov    %edx,%ebx
 84d1011:	89 c6                	mov    %eax,%esi
 84d1013:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1016:	89 04 24             	mov    %eax,(%esp)
 84d1019:	e8 62 ce 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d101e:	89 f0                	mov    %esi,%eax
 84d1020:	89 da                	mov    %ebx,%edx
 84d1022:	89 04 24             	mov    %eax,(%esp)
 84d1025:	e8 26 27 61 00       	call   8ae3750 <_Unwind_Resume>
 84d102a:	89 d8                	mov    %ebx,%eax
 84d102c:	83 c4 40             	add    $0x40,%esp
 84d102f:	5b                   	pop    %ebx
 84d1030:	5e                   	pop    %esi
 84d1031:	5d                   	pop    %ebp
 84d1032:	c3                   	ret
 84d1033:	90                   	nop

```

```c
// Inter_Monitor_RegisterBlackListResult::dispatch_sig @ 0x84d0de0

/* Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d0e2d to 084d0ffc has its CatchHandler @ 084d100f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x79);
    if (*(char *)(local_14 + 0x30) == '\x01') {
      cVar1 = CUser::registerToBlackList((CUser *)param_2,*(uint *)(local_14 + 0x2c));
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_Monitor_RegisterBlackListResult::dispatch_sig(CUser*, char*, int)"
                   ,0x2f90,
                   "_BLACK_LIST_ :: false == pUser->registerToBlackList( recv->m_uCharacNo )");
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4a);
      }
    }
    else if (*(char *)(local_14 + 0x30) == '\x02') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4a);
    }
    else if (*(char *)(local_14 + 0x30) == '\x03') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4c);
    }
    else if (*(char *)(local_14 + 0x30) == '\x04') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4e);
    }
    else if (*(char *)(local_14 + 0x30) == '\x05') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x5a);
    }
    local_10 = strlen((char *)(local_14 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0xe),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```


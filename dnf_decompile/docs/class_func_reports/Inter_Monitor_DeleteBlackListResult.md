# Inter_Monitor_DeleteBlackListResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1034 Inter_Monitor_DeleteBlackListResult::dispatch_sig  [0x084d1034-0x84d1217] ===
 84d1034:	55                   	push   %ebp
 84d1035:	89 e5                	mov    %esp,%ebp
 84d1037:	56                   	push   %esi
 84d1038:	53                   	push   %ebx
 84d1039:	83 ec 40             	sub    $0x40,%esp
 84d103c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d103f:	89 04 24             	mov    %eax,(%esp)
 84d1042:	e8 45 93 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d1047:	85 c0                	test   %eax,%eax
 84d1049:	0f 94 c0             	sete   %al
 84d104c:	84 c0                	test   %al,%al
 84d104e:	74 0a                	je     84d105a <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x26>
 84d1050:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d1055:	e9 b5 01 00 00       	jmp    84d120f <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x1db>
 84d105a:	8b 45 10             	mov    0x10(%ebp),%eax
 84d105d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d1060:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1063:	89 04 24             	mov    %eax,(%esp)
 84d1066:	e8 e1 cc 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d106b:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 84d1072:	00 
 84d1073:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d107a:	00 
 84d107b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d107e:	89 04 24             	mov    %eax,(%esp)
 84d1081:	e8 76 a8 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d1086:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1089:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d108d:	3c 01                	cmp    $0x1,%al
 84d108f:	0f 85 85 00 00 00    	jne    84d111a <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0xe6>
 84d1095:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1098:	8b 40 2c             	mov    0x2c(%eax),%eax
 84d109b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d109f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d10a2:	89 04 24             	mov    %eax,(%esp)
 84d10a5:	e8 96 df 1a 00       	call   867f040 <_ZN5CUser17deleteToBlackListEj>
 84d10aa:	83 f0 01             	xor    $0x1,%eax
 84d10ad:	84 c0                	test   %al,%al
 84d10af:	74 54                	je     84d1105 <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0xd1>
 84d10b1:	c7 44 24 10 54 8c c8 	movl   $0x8c88c54,0x10(%esp)
 84d10b8:	08 
 84d10b9:	c7 44 24 0c d7 2f 00 	movl   $0x2fd7,0xc(%esp)
 84d10c0:	00 
 84d10c1:	c7 44 24 08 a0 cb c8 	movl   $0x8c8cba0,0x8(%esp)
 84d10c8:	08 
 84d10c9:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84d10d0:	08 
 84d10d1:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d10d8:	e8 2d 2b 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84d10dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d10e4:	00 
 84d10e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d10e8:	89 04 24             	mov    %eax,(%esp)
 84d10eb:	e8 30 a8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d10f0:	c7 44 24 04 4b 00 00 	movl   $0x4b,0x4(%esp)
 84d10f7:	00 
 84d10f8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d10fb:	89 04 24             	mov    %eax,(%esp)
 84d10fe:	e8 39 a8 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d1103:	eb 79                	jmp    84d117e <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x14a>
 84d1105:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d110c:	00 
 84d110d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1110:	89 04 24             	mov    %eax,(%esp)
 84d1113:	e8 08 a8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1118:	eb 64                	jmp    84d117e <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x14a>
 84d111a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d111d:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d1121:	3c 02                	cmp    $0x2,%al
 84d1123:	75 28                	jne    84d114d <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x119>
 84d1125:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d112c:	00 
 84d112d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1130:	89 04 24             	mov    %eax,(%esp)
 84d1133:	e8 e8 a7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d1138:	c7 44 24 04 4b 00 00 	movl   $0x4b,0x4(%esp)
 84d113f:	00 
 84d1140:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1143:	89 04 24             	mov    %eax,(%esp)
 84d1146:	e8 f1 a7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d114b:	eb 31                	jmp    84d117e <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x14a>
 84d114d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1150:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 84d1154:	3c 03                	cmp    $0x3,%al
 84d1156:	75 26                	jne    84d117e <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x14a>
 84d1158:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d115f:	00 
 84d1160:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1163:	89 04 24             	mov    %eax,(%esp)
 84d1166:	e8 b5 a7 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d116b:	c7 44 24 04 4c 00 00 	movl   $0x4c,0x4(%esp)
 84d1172:	00 
 84d1173:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1176:	89 04 24             	mov    %eax,(%esp)
 84d1179:	e8 be a7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d117e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d1181:	83 c0 0e             	add    $0xe,%eax
 84d1184:	89 04 24             	mov    %eax,(%esp)
 84d1187:	e8 24 d2 ba ff       	call   807e3b0 <strlen@plt>
 84d118c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d118f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1192:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d1196:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d1199:	89 04 24             	mov    %eax,(%esp)
 84d119c:	e8 9b a7 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d11a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d11a4:	8d 50 0e             	lea    0xe(%eax),%edx
 84d11a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d11aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d11ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d11b2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d11b5:	89 04 24             	mov    %eax,(%esp)
 84d11b8:	e8 27 62 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d11bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d11c4:	00 
 84d11c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d11c8:	89 04 24             	mov    %eax,(%esp)
 84d11cb:	e8 88 a7 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d11d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d11d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d11d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d11da:	89 04 24             	mov    %eax,(%esp)
 84d11dd:	e8 d8 73 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d11e2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d11e7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d11ea:	89 04 24             	mov    %eax,(%esp)
 84d11ed:	e8 8e cc 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d11f2:	eb 1b                	jmp    84d120f <_ZN35Inter_Monitor_DeleteBlackListResult12dispatch_sigEP5CUserPci+0x1db>
 84d11f4:	89 d3                	mov    %edx,%ebx
 84d11f6:	89 c6                	mov    %eax,%esi
 84d11f8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d11fb:	89 04 24             	mov    %eax,(%esp)
 84d11fe:	e8 7d cc 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d1203:	89 f0                	mov    %esi,%eax
 84d1205:	89 da                	mov    %ebx,%edx
 84d1207:	89 04 24             	mov    %eax,(%esp)
 84d120a:	e8 41 25 61 00       	call   8ae3750 <_Unwind_Resume>
 84d120f:	89 d8                	mov    %ebx,%eax
 84d1211:	83 c4 40             	add    $0x40,%esp
 84d1214:	5b                   	pop    %ebx
 84d1215:	5e                   	pop    %esi
 84d1216:	5d                   	pop    %ebp
 84d1217:	c3                   	ret

```

```c
// Inter_Monitor_DeleteBlackListResult::dispatch_sig @ 0x84d1034

/* Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084d1081 to 084d11e1 has its CatchHandler @ 084d11f4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x7a);
    if (*(char *)(local_14 + 0x30) == '\x01') {
      cVar1 = CUser::deleteToBlackList((CUser *)param_2,*(uint *)(local_14 + 0x2c));
      if (cVar1 == '\x01') {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_Monitor_DeleteBlackListResult::dispatch_sig(CUser*, char*, int)"
                   ,0x2fd7,"_BLACK_LIST_ :: false == pUser->deleteToBlackList( recv->m_uCharacNo )")
        ;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4b);
      }
    }
    else if (*(char *)(local_14 + 0x30) == '\x02') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4b);
    }
    else if (*(char *)(local_14 + 0x30) == '\x03') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0x4c);
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


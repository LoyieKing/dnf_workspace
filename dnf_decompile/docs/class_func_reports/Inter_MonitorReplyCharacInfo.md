# Inter_MonitorReplyCharacInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7024 Inter_MonitorReplyCharacInfo::dispatch_sig  [0x084e7024-0x84e71ed] ===
 84e7024:	55                   	push   %ebp
 84e7025:	89 e5                	mov    %esp,%ebp
 84e7027:	56                   	push   %esi
 84e7028:	53                   	push   %ebx
 84e7029:	83 ec 30             	sub    $0x30,%esp
 84e702c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e702f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84e7032:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 84e7038:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e703b:	8b 58 12             	mov    0x12(%eax),%ebx
 84e703e:	e8 4b 51 be ff       	call   80cc18e <_Z14G_CGameManagerv>
 84e7043:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 84e704a:	00 
 84e704b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e704f:	89 04 24             	mov    %eax,(%esp)
 84e7052:	e8 4d d7 da ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 84e7057:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e705a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84e705e:	74 0f                	je     84e706f <_ZN28Inter_MonitorReplyCharacInfo12dispatch_sigEP5CUserPci+0x4b>
 84e7060:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e7063:	89 04 24             	mov    %eax,(%esp)
 84e7066:	e8 11 33 bf ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 84e706b:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 84e706f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7072:	89 04 24             	mov    %eax,(%esp)
 84e7075:	e8 d2 6c 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e707a:	c7 44 24 08 d6 01 00 	movl   $0x1d6,0x8(%esp)
 84e7081:	00 
 84e7082:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e7089:	00 
 84e708a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e708d:	89 04 24             	mov    %eax,(%esp)
 84e7090:	e8 67 48 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e7095:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e7098:	8b 40 0a             	mov    0xa(%eax),%eax
 84e709b:	85 c0                	test   %eax,%eax
 84e709d:	0f 85 c9 00 00 00    	jne    84e716c <_ZN28Inter_MonitorReplyCharacInfo12dispatch_sigEP5CUserPci+0x148>
 84e70a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e70aa:	00 
 84e70ab:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e70ae:	89 04 24             	mov    %eax,(%esp)
 84e70b1:	e8 6a 48 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e70b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e70b9:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84e70bd:	0f b6 c0             	movzbl %al,%eax
 84e70c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e70c4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e70c7:	89 04 24             	mov    %eax,(%esp)
 84e70ca:	e8 51 48 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e70cf:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 84e70d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e70d7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e70da:	89 04 24             	mov    %eax,(%esp)
 84e70dd:	e8 5a 48 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e70e2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e70e5:	83 c0 17             	add    $0x17,%eax
 84e70e8:	89 04 24             	mov    %eax,(%esp)
 84e70eb:	e8 c0 72 b9 ff       	call   807e3b0 <strlen@plt>
 84e70f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e70f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e70f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e70fa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e70fd:	89 04 24             	mov    %eax,(%esp)
 84e7100:	e8 37 48 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e7105:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e7108:	8d 50 17             	lea    0x17(%eax),%edx
 84e710b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e710e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e7112:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7116:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7119:	89 04 24             	mov    %eax,(%esp)
 84e711c:	e8 c3 02 cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e7121:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e7124:	0f b7 40 35          	movzwl 0x35(%eax),%eax
 84e7128:	98                   	cwtl
 84e7129:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e712d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7130:	89 04 24             	mov    %eax,(%esp)
 84e7133:	e8 e8 47 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e7138:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e713b:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 84e713f:	0f be c0             	movsbl %al,%eax
 84e7142:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7146:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7149:	89 04 24             	mov    %eax,(%esp)
 84e714c:	e8 cf 47 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e7151:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e7154:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 84e7158:	0f be c0             	movsbl %al,%eax
 84e715b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e715f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7162:	89 04 24             	mov    %eax,(%esp)
 84e7165:	e8 b6 47 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e716a:	eb 28                	jmp    84e7194 <_ZN28Inter_MonitorReplyCharacInfo12dispatch_sigEP5CUserPci+0x170>
 84e716c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e7173:	00 
 84e7174:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e7177:	89 04 24             	mov    %eax,(%esp)
 84e717a:	e8 a1 47 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e717f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e7182:	8b 40 0a             	mov    0xa(%eax),%eax
 84e7185:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e7189:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e718c:	89 04 24             	mov    %eax,(%esp)
 84e718f:	e8 8c 47 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e7194:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e719b:	00 
 84e719c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e719f:	89 04 24             	mov    %eax,(%esp)
 84e71a2:	e8 b1 47 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e71a7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e71aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e71ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e71b1:	89 04 24             	mov    %eax,(%esp)
 84e71b4:	e8 01 14 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e71b9:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e71be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e71c1:	89 04 24             	mov    %eax,(%esp)
 84e71c4:	e8 b7 6c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e71c9:	89 d8                	mov    %ebx,%eax
 84e71cb:	83 c4 30             	add    $0x30,%esp
 84e71ce:	5b                   	pop    %ebx
 84e71cf:	5e                   	pop    %esi
 84e71d0:	5d                   	pop    %ebp
 84e71d1:	c3                   	ret
 84e71d2:	89 d3                	mov    %edx,%ebx
 84e71d4:	89 c6                	mov    %eax,%esi
 84e71d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e71d9:	89 04 24             	mov    %eax,(%esp)
 84e71dc:	e8 9f 6c 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e71e1:	89 f0                	mov    %esi,%eax
 84e71e3:	89 da                	mov    %ebx,%edx
 84e71e5:	89 04 24             	mov    %eax,(%esp)
 84e71e8:	e8 63 c5 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e71ed:	90                   	nop

```

```c
// Inter_MonitorReplyCharacInfo::dispatch_sig @ 0x84e7024

/* Inter_MonitorReplyCharacInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorReplyCharacInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_28 [12];
  int local_1c;
  ushort local_16;
  CUser *local_14;
  size_t local_10;
  
  local_1c = param_3;
  local_16 = 0;
  iVar1 = *(int *)(param_3 + 0x12);
  iVar2 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar2,iVar1);
  if (local_14 != (CUser *)0x0) {
    local_16 = CUser::get_unique_id(local_14);
  }
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e7090 to 084e71b8 has its CatchHandler @ 084e71d2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x1d6);
  if (*(int *)(local_1c + 10) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(byte *)(local_1c + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,(uint)local_16);
    local_10 = strlen((char *)(local_1c + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_28,(char *)(local_1c + 0x17),local_10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(short *)(local_1c + 0x35));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(char *)(local_1c + 0x37));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)*(char *)(local_1c + 0x38));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,*(int *)(local_1c + 10));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send((CUser *)param_2,local_28);
  PacketGuard::~PacketGuard(local_28);
  return 0;
}

```


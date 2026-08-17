# Dispatcher_RequestItemUnlock

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08222f82 Dispatcher_RequestItemUnlock::dispatch_sig  [0x08222f82-0x82231ad] ===
 8222f82:	55                   	push   %ebp
 8222f83:	89 e5                	mov    %esp,%ebp
 8222f85:	56                   	push   %esi
 8222f86:	53                   	push   %ebx
 8222f87:	83 ec 30             	sub    $0x30,%esp
 8222f8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8222f8d:	89 04 24             	mov    %eax,(%esp)
 8222f90:	e8 f7 73 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8222f95:	83 f8 02             	cmp    $0x2,%eax
 8222f98:	0f 9e c0             	setle  %al
 8222f9b:	84 c0                	test   %al,%al
 8222f9d:	74 0a                	je     8222fa9 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8222f9f:	bb 00 00 00 00       	mov    $0x0,%ebx
 8222fa4:	e9 fb 01 00 00       	jmp    82231a4 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x222>
 8222fa9:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8222fad:	66 c7 45 ec 00 00    	movw   $0x0,-0x14(%ebp)
 8222fb3:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8222fb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222fba:	8b 45 10             	mov    0x10(%ebp),%eax
 8222fbd:	89 04 24             	mov    %eax,(%esp)
 8222fc0:	e8 5d 9f 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8222fc5:	83 f0 01             	xor    $0x1,%eax
 8222fc8:	84 c0                	test   %al,%al
 8222fca:	74 2b                	je     8222ff7 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x75>
 8222fcc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8222fd3:	00 
 8222fd4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8222fdb:	00 
 8222fdc:	c7 44 24 04 60 cb bc 	movl   $0x8bccb60,0x4(%esp)
 8222fe3:	08 
 8222fe4:	c7 04 24 4c dd 00 00 	movl   $0xdd4c,(%esp)
 8222feb:	e8 e7 d8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8222ff0:	89 c3                	mov    %eax,%ebx
 8222ff2:	e9 ad 01 00 00       	jmp    82231a4 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x222>
 8222ff7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8222ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8222ffe:	8b 45 10             	mov    0x10(%ebp),%eax
 8223001:	89 04 24             	mov    %eax,(%esp)
 8223004:	e8 b7 9f 36 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 8223009:	83 f0 01             	xor    $0x1,%eax
 822300c:	84 c0                	test   %al,%al
 822300e:	74 2b                	je     822303b <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0xb9>
 8223010:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8223017:	00 
 8223018:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 822301f:	00 
 8223020:	c7 44 24 04 60 cb bc 	movl   $0x8bccb60,0x4(%esp)
 8223027:	08 
 8223028:	c7 04 24 4d dd 00 00 	movl   $0xdd4d,(%esp)
 822302f:	e8 a3 d8 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8223034:	89 c3                	mov    %eax,%ebx
 8223036:	e9 69 01 00 00       	jmp    82231a4 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x222>
 822303b:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8223040:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8223047:	00 
 8223048:	8b 55 0c             	mov    0xc(%ebp),%edx
 822304b:	89 54 24 04          	mov    %edx,0x4(%esp)
 822304f:	89 04 24             	mov    %eax,(%esp)
 8223052:	e8 ab 59 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8223057:	89 45 f0             	mov    %eax,-0x10(%ebp)
 822305a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 822305e:	74 27                	je     8223087 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x105>
 8223060:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8223063:	0f b6 c0             	movzbl %al,%eax
 8223066:	89 44 24 08          	mov    %eax,0x8(%esp)
 822306a:	c7 44 24 04 10 01 00 	movl   $0x110,0x4(%esp)
 8223071:	00 
 8223072:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223075:	89 04 24             	mov    %eax,(%esp)
 8223078:	e8 c5 8e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822307d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223082:	e9 1d 01 00 00       	jmp    82231a4 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x222>
 8223087:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 822308e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8223095:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 8223099:	0f bf d0             	movswl %ax,%edx
 822309c:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82230a0:	0f be c0             	movsbl %al,%eax
 82230a3:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 82230a6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 82230aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 82230ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 82230b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82230b5:	89 04 24             	mov    %eax,(%esp)
 82230b8:	e8 41 3b 42 00       	call   8646bfe <_ZNK5CUser16IsAbleItemUnlockEiiRi>
 82230bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82230c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82230c4:	0f 95 c0             	setne  %al
 82230c7:	84 c0                	test   %al,%al
 82230c9:	0f 84 af 00 00 00    	je     822317e <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x1fc>
 82230cf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82230d2:	89 04 24             	mov    %eax,(%esp)
 82230d5:	e8 72 ac 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82230da:	c7 44 24 08 10 01 00 	movl   $0x110,0x8(%esp)
 82230e1:	00 
 82230e2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82230e9:	00 
 82230ea:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82230ed:	89 04 24             	mov    %eax,(%esp)
 82230f0:	e8 07 88 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82230f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82230fc:	00 
 82230fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223100:	89 04 24             	mov    %eax,(%esp)
 8223103:	e8 18 88 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8223108:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822310b:	89 44 24 04          	mov    %eax,0x4(%esp)
 822310f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223112:	89 04 24             	mov    %eax,(%esp)
 8223115:	e8 06 88 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 822311a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 822311d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223121:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223124:	89 04 24             	mov    %eax,(%esp)
 8223127:	e8 10 88 ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 822312c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8223133:	00 
 8223134:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223137:	89 04 24             	mov    %eax,(%esp)
 822313a:	e8 19 88 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 822313f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223146:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223149:	89 04 24             	mov    %eax,(%esp)
 822314c:	e8 69 54 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8223151:	bb 00 00 00 00       	mov    $0x0,%ebx
 8223156:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8223159:	89 04 24             	mov    %eax,(%esp)
 822315c:	e8 1f ad 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223161:	eb 41                	jmp    82231a4 <_ZN28Dispatcher_RequestItemUnlock12dispatch_sigEP5CUserR9PacketBuf+0x222>
 8223163:	89 d3                	mov    %edx,%ebx
 8223165:	89 c6                	mov    %eax,%esi
 8223167:	8d 45 dc             	lea    -0x24(%ebp),%eax
 822316a:	89 04 24             	mov    %eax,(%esp)
 822316d:	e8 0e ad 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8223172:	89 f0                	mov    %esi,%eax
 8223174:	89 da                	mov    %ebx,%edx
 8223176:	89 04 24             	mov    %eax,(%esp)
 8223179:	e8 d2 05 8c 00       	call   8ae3750 <_Unwind_Resume>
 822317e:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 8223182:	0f bf d0             	movswl %ax,%edx
 8223185:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8223189:	0f be c0             	movsbl %al,%eax
 822318c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8223190:	89 44 24 04          	mov    %eax,0x4(%esp)
 8223194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8223197:	89 04 24             	mov    %eax,(%esp)
 822319a:	e8 e3 3b 42 00       	call   8646d82 <_ZN5CUser12DoItemUnlockEii>
 822319f:	bb 00 00 00 00       	mov    $0x0,%ebx
 82231a4:	89 d8                	mov    %ebx,%eax
 82231a6:	83 c4 30             	add    $0x30,%esp
 82231a9:	5b                   	pop    %ebx
 82231aa:	5e                   	pop    %esi
 82231ab:	5d                   	pop    %ebp
 82231ac:	c3                   	ret
 82231ad:	90                   	nop

```

```c
// Dispatcher_RequestItemUnlock::dispatch_sig @ 0x8222f82

/* Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemUnlock::dispatch_sig
          (Dispatcher_RequestItemUnlock *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_28 [12];
  int local_1c;
  short local_18;
  char local_15;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x18);
        if (local_14 == 0) {
          local_10 = 0;
          local_1c = 0;
          local_10 = CUser::IsAbleItemUnlock((int)param_1,(int)local_15,(int *)(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemUnlock(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            PacketGuard::PacketGuard(local_28);
                    /* try { // try from 082230f0 to 08223150 has its CatchHandler @ 08223163 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x110);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_10);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_1c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
            CUser::Send(param_1,local_28);
            uVar3 = 0;
            PacketGuard::~PacketGuard(local_28);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x110,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd4d,
                         "virtual int Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd4c,
                       "virtual int Dispatcher_RequestItemUnlock::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}

```


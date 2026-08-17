# Dispatcher_Compound_Avatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ead40 Dispatcher_Compound_Avatar::dispatch_sig  [0x081ead40-0x81eb0c3] ===
 81ead40:	55                   	push   %ebp
 81ead41:	89 e5                	mov    %esp,%ebp
 81ead43:	83 ec 48             	sub    $0x48,%esp
 81ead46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ead49:	89 04 24             	mov    %eax,(%esp)
 81ead4c:	e8 3b f6 ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ead51:	83 f8 02             	cmp    $0x2,%eax
 81ead54:	0f 9e c0             	setle  %al
 81ead57:	84 c0                	test   %al,%al
 81ead59:	74 0a                	je     81ead65 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x25>
 81ead5b:	b8 00 00 00 00       	mov    $0x0,%eax
 81ead60:	e9 5d 03 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81ead65:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81ead6a:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 81ead71:	00 
 81ead72:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ead75:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ead79:	89 04 24             	mov    %eax,(%esp)
 81ead7c:	e8 81 dc 09 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81ead81:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ead84:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81ead88:	74 27                	je     81eadb1 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x71>
 81ead8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ead8d:	0f b6 c0             	movzbl %al,%eax
 81ead90:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ead94:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 81ead9b:	00 
 81ead9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ead9f:	89 04 24             	mov    %eax,(%esp)
 81eada2:	e8 9b 11 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81eada7:	b8 00 00 00 00       	mov    $0x0,%eax
 81eadac:	e9 11 03 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eadb1:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eadb4:	83 c0 0d             	add    $0xd,%eax
 81eadb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eadbb:	8b 45 10             	mov    0x10(%ebp),%eax
 81eadbe:	89 04 24             	mov    %eax,(%esp)
 81eadc1:	e8 fa 21 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eadc6:	83 f0 01             	xor    $0x1,%eax
 81eadc9:	84 c0                	test   %al,%al
 81eadcb:	74 29                	je     81eadf6 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0xb6>
 81eadcd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eadd4:	00 
 81eadd5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaddc:	00 
 81eaddd:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eade4:	08 
 81eade5:	c7 04 24 89 6c 00 00 	movl   $0x6c89,(%esp)
 81eadec:	e8 e6 5a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eadf1:	e9 cc 02 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eadf6:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eadf9:	83 c0 0f             	add    $0xf,%eax
 81eadfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eae00:	8b 45 10             	mov    0x10(%ebp),%eax
 81eae03:	89 04 24             	mov    %eax,(%esp)
 81eae06:	e8 b5 21 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eae0b:	83 f0 01             	xor    $0x1,%eax
 81eae0e:	84 c0                	test   %al,%al
 81eae10:	74 29                	je     81eae3b <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0xfb>
 81eae12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eae19:	00 
 81eae1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eae21:	00 
 81eae22:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eae29:	08 
 81eae2a:	c7 04 24 8a 6c 00 00 	movl   $0x6c8a,(%esp)
 81eae31:	e8 a1 5a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eae36:	e9 87 02 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eae3b:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eae3e:	83 c0 11             	add    $0x11,%eax
 81eae41:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eae45:	8b 45 10             	mov    0x10(%ebp),%eax
 81eae48:	89 04 24             	mov    %eax,(%esp)
 81eae4b:	e8 2e 24 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81eae50:	83 f0 01             	xor    $0x1,%eax
 81eae53:	84 c0                	test   %al,%al
 81eae55:	74 29                	je     81eae80 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x140>
 81eae57:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eae5e:	00 
 81eae5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eae66:	00 
 81eae67:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eae6e:	08 
 81eae6f:	c7 04 24 8b 6c 00 00 	movl   $0x6c8b,(%esp)
 81eae76:	e8 5c 5a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eae7b:	e9 42 02 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eae80:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eae83:	83 c0 15             	add    $0x15,%eax
 81eae86:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eae8a:	8b 45 10             	mov    0x10(%ebp),%eax
 81eae8d:	89 04 24             	mov    %eax,(%esp)
 81eae90:	e8 2b 21 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eae95:	83 f0 01             	xor    $0x1,%eax
 81eae98:	84 c0                	test   %al,%al
 81eae9a:	74 29                	je     81eaec5 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x185>
 81eae9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaea3:	00 
 81eaea4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaeab:	00 
 81eaeac:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eaeb3:	08 
 81eaeb4:	c7 04 24 8c 6c 00 00 	movl   $0x6c8c,(%esp)
 81eaebb:	e8 17 5a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eaec0:	e9 fd 01 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eaec5:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eaec8:	83 c0 17             	add    $0x17,%eax
 81eaecb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaecf:	8b 45 10             	mov    0x10(%ebp),%eax
 81eaed2:	89 04 24             	mov    %eax,(%esp)
 81eaed5:	e8 a4 23 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81eaeda:	83 f0 01             	xor    $0x1,%eax
 81eaedd:	84 c0                	test   %al,%al
 81eaedf:	74 29                	je     81eaf0a <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x1ca>
 81eaee1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaee8:	00 
 81eaee9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaef0:	00 
 81eaef1:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eaef8:	08 
 81eaef9:	c7 04 24 8d 6c 00 00 	movl   $0x6c8d,(%esp)
 81eaf00:	e8 d2 59 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eaf05:	e9 b8 01 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eaf0a:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eaf0d:	83 c0 1b             	add    $0x1b,%eax
 81eaf10:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaf14:	8b 45 10             	mov    0x10(%ebp),%eax
 81eaf17:	89 04 24             	mov    %eax,(%esp)
 81eaf1a:	e8 5f 23 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81eaf1f:	83 f0 01             	xor    $0x1,%eax
 81eaf22:	84 c0                	test   %al,%al
 81eaf24:	74 29                	je     81eaf4f <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x20f>
 81eaf26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaf2d:	00 
 81eaf2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaf35:	00 
 81eaf36:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eaf3d:	08 
 81eaf3e:	c7 04 24 8e 6c 00 00 	movl   $0x6c8e,(%esp)
 81eaf45:	e8 8d 59 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eaf4a:	e9 73 01 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eaf4f:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eaf52:	83 c0 1f             	add    $0x1f,%eax
 81eaf55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaf59:	8b 45 10             	mov    0x10(%ebp),%eax
 81eaf5c:	89 04 24             	mov    %eax,(%esp)
 81eaf5f:	e8 5c 20 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81eaf64:	83 f0 01             	xor    $0x1,%eax
 81eaf67:	84 c0                	test   %al,%al
 81eaf69:	74 29                	je     81eaf94 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x254>
 81eaf6b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaf72:	00 
 81eaf73:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eaf7a:	00 
 81eaf7b:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eaf82:	08 
 81eaf83:	c7 04 24 8f 6c 00 00 	movl   $0x6c8f,(%esp)
 81eaf8a:	e8 48 59 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eaf8f:	e9 2e 01 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eaf94:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eaf97:	83 c0 21             	add    $0x21,%eax
 81eaf9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eaf9e:	8b 45 10             	mov    0x10(%ebp),%eax
 81eafa1:	89 04 24             	mov    %eax,(%esp)
 81eafa4:	e8 c7 1f 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81eafa9:	83 f0 01             	xor    $0x1,%eax
 81eafac:	84 c0                	test   %al,%al
 81eafae:	74 29                	je     81eafd9 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x299>
 81eafb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eafb7:	00 
 81eafb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eafbf:	00 
 81eafc0:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eafc7:	08 
 81eafc8:	c7 04 24 90 6c 00 00 	movl   $0x6c90,(%esp)
 81eafcf:	e8 03 59 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eafd4:	e9 e9 00 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eafd9:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 81eafdc:	83 c0 22             	add    $0x22,%eax
 81eafdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81eafe3:	8b 45 10             	mov    0x10(%ebp),%eax
 81eafe6:	89 04 24             	mov    %eax,(%esp)
 81eafe9:	e8 34 1f 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81eafee:	83 f0 01             	xor    $0x1,%eax
 81eaff1:	84 c0                	test   %al,%al
 81eaff3:	74 29                	je     81eb01e <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x2de>
 81eaff5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81eaffc:	00 
 81eaffd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81eb004:	00 
 81eb005:	c7 44 24 04 80 06 bd 	movl   $0x8bd0680,0x4(%esp)
 81eb00c:	08 
 81eb00d:	c7 04 24 92 6c 00 00 	movl   $0x6c92,(%esp)
 81eb014:	e8 be 58 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81eb019:	e9 a4 00 00 00       	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eb01e:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 81eb022:	98                   	cwtl
 81eb023:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eb027:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81eb02e:	00 
 81eb02f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb032:	89 04 24             	mov    %eax,(%esp)
 81eb035:	e8 08 b9 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81eb03a:	84 c0                	test   %al,%al
 81eb03c:	74 22                	je     81eb060 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x320>
 81eb03e:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81eb045:	00 
 81eb046:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 81eb04d:	00 
 81eb04e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb051:	89 04 24             	mov    %eax,(%esp)
 81eb054:	e8 e9 0e 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81eb059:	b8 00 00 00 00       	mov    $0x0,%eax
 81eb05e:	eb 62                	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eb060:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 81eb064:	98                   	cwtl
 81eb065:	89 44 24 08          	mov    %eax,0x8(%esp)
 81eb069:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81eb070:	00 
 81eb071:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb074:	89 04 24             	mov    %eax,(%esp)
 81eb077:	e8 c6 b8 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81eb07c:	84 c0                	test   %al,%al
 81eb07e:	74 22                	je     81eb0a2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x362>
 81eb080:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81eb087:	00 
 81eb088:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 81eb08f:	00 
 81eb090:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eb093:	89 04 24             	mov    %eax,(%esp)
 81eb096:	e8 a7 0e 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81eb09b:	b8 00 00 00 00       	mov    $0x0,%eax
 81eb0a0:	eb 20                	jmp    81eb0c2 <_ZN26Dispatcher_Compound_Avatar12dispatch_sigEP5CUserR9PacketBuf+0x382>
 81eb0a2:	a1 4c f7 41 09       	mov    0x941f74c,%eax
 81eb0a7:	8d 55 d1             	lea    -0x2f(%ebp),%edx
 81eb0aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 81eb0ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eb0b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eb0b5:	89 04 24             	mov    %eax,(%esp)
 81eb0b8:	e8 05 88 14 00       	call   83338c2 <_ZN8WongWork15CCompoundAvatar12ProcCompoundEP5CUserPK19MSG_COMPOUND_AVATAR>
 81eb0bd:	b8 00 00 00 00       	mov    $0x0,%eax
 81eb0c2:	c9                   	leave
 81eb0c3:	c3                   	ret

```

```c
// Dispatcher_Compound_Avatar::dispatch_sig @ 0x81ead40

/* Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_Avatar::dispatch_sig
          (Dispatcher_Compound_Avatar *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  MSG_COMPOUND_AVATAR local_33 [13];
  short sStack_26;
  short local_24;
  ulong uStack_22;
  short local_1e;
  ulong uStack_1c;
  ulong uStack_18;
  short sStack_14;
  uchar uStack_12;
  char cStack_11;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x12);
    if (local_10 == 0) {
      cVar1 = PacketBuf::get_short(param_2,&sStack_26);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,&local_24);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&uStack_22);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_1e);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_2,&uStack_1c);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_2,&uStack_18);
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_short(param_2,&sStack_14);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_2,&uStack_12);
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_byte(param_2,&cStack_11);
                      if (cVar1 == '\x01') {
                        cVar1 = CUser::CheckItemLock(param_1,2,(int)local_24);
                        if (cVar1 == '\0') {
                          cVar1 = CUser::CheckItemLock(param_1,2,(int)local_1e);
                          if (cVar1 == '\0') {
                            WongWork::CCompoundAvatar::ProcCompound
                                      (GlobalData::s_pCompoundAvatar,param_1,local_33);
                            uVar3 = 0;
                          }
                          else {
                            CUser::SendCmdErrorPacket(param_1,0x66,0xd5);
                            uVar3 = 0;
                          }
                        }
                        else {
                          CUser::SendCmdErrorPacket(param_1,0x66,0xd5);
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = LineFunc(0x6c92,
                                         "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar3 = LineFunc(0x6c90,
                                       "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar3 = LineFunc(0x6c8f,
                                     "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x6c8e,
                                   "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x6c8d,
                                 "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x6c8c,
                               "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x6c8b,
                             "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x6c8a,
                           "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x6c89,
                         "virtual int Dispatcher_Compound_Avatar::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x66,local_10 & 0xff);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```


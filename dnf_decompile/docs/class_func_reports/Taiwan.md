# Taiwan

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## GarenaAuthPCRoom

```asm
// === 08471c74 Taiwan::GarenaAuthPCRoom  [0x08471c74-0x8471dab] ===
 8471c74:	55                   	push   %ebp
 8471c75:	89 e5                	mov    %esp,%ebp
 8471c77:	56                   	push   %esi
 8471c78:	53                   	push   %ebx
 8471c79:	83 ec 40             	sub    $0x40,%esp
 8471c7c:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8471c80:	0f 84 1e 01 00 00    	je     8471da4 <_ZN6Taiwan16GarenaAuthPCRoomEP5CUser+0x130>
 8471c86:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8471c89:	89 04 24             	mov    %eax,(%esp)
 8471c8c:	e8 83 a1 db ff       	call   822be14 <_ZN22Packet_Pcroom_ResponseC1Ev>
 8471c91:	c7 45 eb 01 00 00 00 	movl   $0x1,-0x15(%ebp)
 8471c98:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 8471c9c:	c6 45 f4 0b          	movb   $0xb,-0xc(%ebp)
 8471ca0:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8471ca7:	e8 a4 ba c0 ff       	call   807d750 <time@plt>
 8471cac:	05 80 3a 09 00       	add    $0x93a80,%eax
 8471cb1:	89 45 ef             	mov    %eax,-0x11(%ebp)
 8471cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8471cb7:	89 04 24             	mov    %eax,(%esp)
 8471cba:	e8 d7 6f c5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8471cbf:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 8471cc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8471cc5:	89 04 24             	mov    %eax,(%esp)
 8471cc8:	e8 a1 86 c6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8471ccd:	89 45 e7             	mov    %eax,-0x19(%ebp)
 8471cd0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8471cd5:	c7 44 24 08 ab 01 00 	movl   $0x1ab,0x8(%esp)
 8471cdc:	00 
 8471cdd:	c7 44 24 04 f0 bd c6 	movl   $0x8c6bdf0,0x4(%esp)
 8471ce4:	08 
 8471ce5:	89 04 24             	mov    %eax,(%esp)
 8471ce8:	e8 99 dd e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8471ced:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8471cf4:	00 
 8471cf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8471cf9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471cfc:	89 04 24             	mov    %eax,(%esp)
 8471cff:	e8 22 6f c5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8471d04:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471d07:	89 04 24             	mov    %eax,(%esp)
 8471d0a:	e8 37 6f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8471d0f:	c7 44 24 04 7e 01 00 	movl   $0x17e,0x4(%esp)
 8471d16:	00 
 8471d17:	89 04 24             	mov    %eax,(%esp)
 8471d1a:	e8 37 6f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8471d1f:	8b 5d e3             	mov    -0x1d(%ebp),%ebx
 8471d22:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471d25:	89 04 24             	mov    %eax,(%esp)
 8471d28:	e8 19 6f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8471d2d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8471d31:	89 04 24             	mov    %eax,(%esp)
 8471d34:	e8 1d 6f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8471d39:	0f b7 45 db          	movzwl -0x25(%ebp),%eax
 8471d3d:	0f b7 d8             	movzwl %ax,%ebx
 8471d40:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471d43:	89 04 24             	mov    %eax,(%esp)
 8471d46:	e8 03 6f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8471d4b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8471d4f:	8d 55 d9             	lea    -0x27(%ebp),%edx
 8471d52:	89 54 24 04          	mov    %edx,0x4(%esp)
 8471d56:	89 04 24             	mov    %eax,(%esp)
 8471d59:	e8 f4 c8 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8471d5e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8471d63:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8471d66:	89 54 24 08          	mov    %edx,0x8(%esp)
 8471d6a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8471d71:	00 
 8471d72:	89 04 24             	mov    %eax,(%esp)
 8471d75:	e8 64 f2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8471d7a:	eb 1b                	jmp    8471d97 <_ZN6Taiwan16GarenaAuthPCRoomEP5CUser+0x123>
 8471d7c:	89 d3                	mov    %edx,%ebx
 8471d7e:	89 c6                	mov    %eax,%esi
 8471d80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471d83:	89 04 24             	mov    %eax,(%esp)
 8471d86:	e8 47 ab 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8471d8b:	89 f0                	mov    %esi,%eax
 8471d8d:	89 da                	mov    %ebx,%edx
 8471d8f:	89 04 24             	mov    %eax,(%esp)
 8471d92:	e8 b9 19 67 00       	call   8ae3750 <_Unwind_Resume>
 8471d97:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8471d9a:	89 04 24             	mov    %eax,(%esp)
 8471d9d:	e8 30 ab 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8471da2:	eb 01                	jmp    8471da5 <_ZN6Taiwan16GarenaAuthPCRoomEP5CUser+0x131>
 8471da4:	90                   	nop
 8471da5:	83 c4 40             	add    $0x40,%esp
 8471da8:	5b                   	pop    %ebx
 8471da9:	5e                   	pop    %esi
 8471daa:	5d                   	pop    %ebp
 8471dab:	c3                   	ret

```

```c
// Taiwan::GarenaAuthPCRoom @ 0x8471c74

/* Taiwan::GarenaAuthPCRoom(CUser*) */

void Taiwan::GarenaAuthPCRoom(CUser *param_1)

{
  int iVar1;
  time_t tVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  CStreamGuard local_34 [9];
  Packet_Pcroom_Response local_2b [2];
  ushort local_29;
  int local_21;
  undefined4 local_1d;
  undefined4 local_19;
  int local_15;
  undefined1 local_11;
  undefined1 local_10;
  
  if (param_1 != (CUser *)0x0) {
    Packet_Pcroom_Response::Packet_Pcroom_Response(local_2b);
    local_19 = 1;
    local_11 = 1;
    local_10 = 0xb;
    tVar2 = time((time_t *)0x0);
    local_15 = tVar2 + 0x93a80;
    local_21 = CUser::GetUID(param_1);
    local_1d = CUser::get_acc_id(param_1);
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"DF_PCRoomServerProxy.cpp",0x1ab);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08471d1a to 08471d79 has its CatchHandler @ 08471d7c */
    CStreamGuard::operator<<(pCVar4,0x17e);
    iVar1 = local_21;
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,iVar1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    CStreamGuard::put_binary(pCVar4,local_2b,(uint)local_29);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return;
}

```

---

## GarenaCheckTimeStamp

```asm
// === 08173080 Taiwan::GarenaCheckTimeStamp  [0x08173080-0x81730c1] ===
 8173080:	55                   	push   %ebp
 8173081:	89 e5                	mov    %esp,%ebp
 8173083:	8b 45 08             	mov    0x8(%ebp),%eax
 8173086:	05 2c 01 00 00       	add    $0x12c,%eax
 817308b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 817308e:	77 2a                	ja     81730ba <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x3a>
 8173090:	8b 45 08             	mov    0x8(%ebp),%eax
 8173093:	3b 45 10             	cmp    0x10(%ebp),%eax
 8173096:	75 1b                	jne    81730b3 <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x33>
 8173098:	8b 45 14             	mov    0x14(%ebp),%eax
 817309b:	05 2c 01 00 00       	add    $0x12c,%eax
 81730a0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81730a3:	72 07                	jb     81730ac <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x2c>
 81730a5:	b8 01 00 00 00       	mov    $0x1,%eax
 81730aa:	eb 13                	jmp    81730bf <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x3f>
 81730ac:	b8 00 00 00 00       	mov    $0x0,%eax
 81730b1:	eb 0c                	jmp    81730bf <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x3f>
 81730b3:	b8 00 00 00 00       	mov    $0x0,%eax
 81730b8:	eb 05                	jmp    81730bf <_ZN6Taiwan20GarenaCheckTimeStampEjjjj+0x3f>
 81730ba:	b8 01 00 00 00       	mov    $0x1,%eax
 81730bf:	5d                   	pop    %ebp
 81730c0:	c3                   	ret
 81730c1:	90                   	nop

```

```c
// Taiwan::GarenaCheckTimeStamp @ 0x8173080

/* Taiwan::GarenaCheckTimeStamp(unsigned int, unsigned int, unsigned int, unsigned int) */

undefined4 Taiwan::GarenaCheckTimeStamp(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_2 < param_1 + 300) {
    uVar1 = 1;
  }
  else if (param_1 == param_3) {
    if (param_4 + 300 < param_2) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## GarenaCyberCafe

```asm
// === 0817305a Taiwan::GarenaCyberCafe  [0x0817305a-0x817307f] ===
 817305a:	55                   	push   %ebp
 817305b:	89 e5                	mov    %esp,%ebp
 817305d:	83 ec 04             	sub    $0x4,%esp
 8173060:	8b 45 08             	mov    0x8(%ebp),%eax
 8173063:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 8173067:	0f b7 45 fc          	movzwl -0x4(%ebp),%eax
 817306b:	83 e0 01             	and    $0x1,%eax
 817306e:	84 c0                	test   %al,%al
 8173070:	74 07                	je     8173079 <_ZN6Taiwan15GarenaCyberCafeEt+0x1f>
 8173072:	b8 01 00 00 00       	mov    $0x1,%eax
 8173077:	eb 05                	jmp    817307e <_ZN6Taiwan15GarenaCyberCafeEt+0x24>
 8173079:	b8 00 00 00 00       	mov    $0x0,%eax
 817307e:	c9                   	leave
 817307f:	c3                   	ret

```

```c
// Taiwan::GarenaCyberCafe @ 0x817305a

/* Taiwan::GarenaCyberCafe(unsigned short) */

bool Taiwan::GarenaCyberCafe(ushort param_1)

{
  return (param_1 & 1) != 0;
}

```

---

## internal_stream

```asm
// === 08163950 Taiwan::internal_stream  [0x08163950-0x81639ab] ===
 8163950:	55                   	push   %ebp
 8163951:	89 e5                	mov    %esp,%ebp
 8163953:	53                   	push   %ebx
 8163954:	83 ec 14             	sub    $0x14,%esp
 8163957:	8b 45 08             	mov    0x8(%ebp),%eax
 816395a:	89 04 24             	mov    %eax,(%esp)
 816395d:	e8 e4 52 f6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8163962:	c7 44 24 04 4e 03 00 	movl   $0x34e,0x4(%esp)
 8163969:	00 
 816396a:	89 04 24             	mov    %eax,(%esp)
 816396d:	e8 e4 52 f6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8163972:	8b 45 08             	mov    0x8(%ebp),%eax
 8163975:	89 04 24             	mov    %eax,(%esp)
 8163978:	e8 c9 52 f6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 816397d:	8b 55 10             	mov    0x10(%ebp),%edx
 8163980:	89 54 24 04          	mov    %edx,0x4(%esp)
 8163984:	89 04 24             	mov    %eax,(%esp)
 8163987:	e8 ca 52 f6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 816398c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 816398f:	8b 45 08             	mov    0x8(%ebp),%eax
 8163992:	89 04 24             	mov    %eax,(%esp)
 8163995:	e8 ac 52 f6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 816399a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 816399e:	89 04 24             	mov    %eax,(%esp)
 81639a1:	e8 b0 52 f6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81639a6:	83 c4 14             	add    $0x14,%esp
 81639a9:	5b                   	pop    %ebx
 81639aa:	5d                   	pop    %ebp
 81639ab:	c3                   	ret

```

```c
// Taiwan::internal_stream @ 0x8163950

/* Taiwan::internal_stream(CStreamGuard&, TaiwanInternalPack::T, int) */

void Taiwan::internal_stream(CStreamGuard *param_1,int param_2,int param_3)

{
  CStreamGuard *pCVar1;
  
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,0x34e);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_3);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_2);
  return;
}

```


# Dispatcher_ChangeTutorialFlag

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820697c Dispatcher_ChangeTutorialFlag::dispatch_sig  [0x0820697c-0x8206b5b] ===
 820697c:	55                   	push   %ebp
 820697d:	89 e5                	mov    %esp,%ebp
 820697f:	83 ec 38             	sub    $0x38,%esp
 8206982:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206985:	89 04 24             	mov    %eax,(%esp)
 8206988:	e8 ff 39 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820698d:	83 f8 01             	cmp    $0x1,%eax
 8206990:	0f 9e c0             	setle  %al
 8206993:	84 c0                	test   %al,%al
 8206995:	74 29                	je     82069c0 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x44>
 8206997:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820699e:	00 
 820699f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82069a6:	00 
 82069a7:	c7 44 24 04 e0 eb bc 	movl   $0x8bcebe0,0x4(%esp)
 82069ae:	08 
 82069af:	c7 04 24 15 a1 00 00 	movl   $0xa115,(%esp)
 82069b6:	e8 1c 9f 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82069bb:	e9 99 01 00 00       	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 82069c0:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82069c7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82069ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82069ce:	8b 45 10             	mov    0x10(%ebp),%eax
 82069d1:	89 04 24             	mov    %eax,(%esp)
 82069d4:	e8 67 68 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 82069d9:	83 f0 01             	xor    $0x1,%eax
 82069dc:	84 c0                	test   %al,%al
 82069de:	74 29                	je     8206a09 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 82069e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82069e7:	00 
 82069e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82069ef:	00 
 82069f0:	c7 44 24 04 e0 eb bc 	movl   $0x8bcebe0,0x4(%esp)
 82069f7:	08 
 82069f8:	c7 04 24 18 a1 00 00 	movl   $0xa118,(%esp)
 82069ff:	e8 d3 9e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206a04:	e9 50 01 00 00       	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 8206a09:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8206a0d:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8206a10:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206a14:	8b 45 10             	mov    0x10(%ebp),%eax
 8206a17:	89 04 24             	mov    %eax,(%esp)
 8206a1a:	e8 03 65 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8206a1f:	83 f0 01             	xor    $0x1,%eax
 8206a22:	84 c0                	test   %al,%al
 8206a24:	74 29                	je     8206a4f <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0xd3>
 8206a26:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206a2d:	00 
 8206a2e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206a35:	00 
 8206a36:	c7 44 24 04 e0 eb bc 	movl   $0x8bcebe0,0x4(%esp)
 8206a3d:	08 
 8206a3e:	c7 04 24 1b a1 00 00 	movl   $0xa11b,(%esp)
 8206a45:	e8 8d 9e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206a4a:	e9 0a 01 00 00       	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 8206a4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8206a52:	83 f8 4d             	cmp    $0x4d,%eax
 8206a55:	76 29                	jbe    8206a80 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x104>
 8206a57:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206a5e:	00 
 8206a5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8206a66:	00 
 8206a67:	c7 44 24 04 e0 eb bc 	movl   $0x8bcebe0,0x4(%esp)
 8206a6e:	08 
 8206a6f:	c7 04 24 20 a1 00 00 	movl   $0xa120,(%esp)
 8206a76:	e8 5c 9e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8206a7b:	e9 d9 00 00 00       	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 8206a80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206a83:	89 04 24             	mov    %eax,(%esp)
 8206a86:	e8 a7 99 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8206a8b:	85 c0                	test   %eax,%eax
 8206a8d:	0f 95 c0             	setne  %al
 8206a90:	84 c0                	test   %al,%al
 8206a92:	0f 84 bc 00 00 00    	je     8206b54 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 8206a98:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8206a9b:	83 f8 4d             	cmp    $0x4d,%eax
 8206a9e:	75 34                	jne    8206ad4 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x158>
 8206aa0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8206aa7:	eb 16                	jmp    8206abf <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x143>
 8206aa9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8206aac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206aaf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206ab3:	89 04 24             	mov    %eax,(%esp)
 8206ab6:	e8 2b 09 44 00       	call   86473e6 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj>
 8206abb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8206abf:	83 7d f0 4d          	cmpl   $0x4d,-0x10(%ebp)
 8206ac3:	0f 9e c0             	setle  %al
 8206ac6:	84 c0                	test   %al,%al
 8206ac8:	75 df                	jne    8206aa9 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x12d>
 8206aca:	b8 00 00 00 00       	mov    $0x0,%eax
 8206acf:	e9 85 00 00 00       	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 8206ad4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8206ad7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206ada:	89 54 24 04          	mov    %edx,0x4(%esp)
 8206ade:	89 04 24             	mov    %eax,(%esp)
 8206ae1:	e8 00 09 44 00       	call   86473e6 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj>
 8206ae6:	83 f0 01             	xor    $0x1,%eax
 8206ae9:	84 c0                	test   %al,%al
 8206aeb:	74 07                	je     8206af4 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x178>
 8206aed:	b8 00 00 00 00       	mov    $0x0,%eax
 8206af2:	eb 65                	jmp    8206b59 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1dd>
 8206af4:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8206af8:	84 c0                	test   %al,%al
 8206afa:	74 12                	je     8206b0e <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x192>
 8206afc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8206aff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206b03:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206b06:	89 04 24             	mov    %eax,(%esp)
 8206b09:	e8 ca 0a 44 00       	call   86475d8 <_ZN5CUser14RewardTutorialEj>
 8206b0e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8206b11:	83 f8 1f             	cmp    $0x1f,%eax
 8206b14:	75 3e                	jne    8206b54 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 8206b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206b19:	89 04 24             	mov    %eax,(%esp)
 8206b1c:	e8 2b e6 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8206b21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8206b24:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8206b28:	74 2a                	je     8206b54 <_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf+0x1d8>
 8206b2a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8206b31:	00 
 8206b32:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8206b39:	00 
 8206b3a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8206b41:	00 
 8206b42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206b45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8206b49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8206b4c:	89 04 24             	mov    %eax,(%esp)
 8206b4f:	e8 56 c0 3a 00       	call   85b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>
 8206b54:	b8 00 00 00 00       	mov    $0x0,%eax
 8206b59:	c9                   	leave
 8206b5a:	c3                   	ret
 8206b5b:	90                   	nop

```

```c
// Dispatcher_ChangeTutorialFlag::dispatch_sig @ 0x820697c

/* Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeTutorialFlag::dispatch_sig
          (Dispatcher_ChangeTutorialFlag *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_19;
  uint local_18;
  uint local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa115,
                     "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  else {
    local_18 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_18);
    if (cVar1 == '\x01') {
      local_19 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_19);
      if (cVar1 == '\x01') {
        if (local_18 < 0x4e) {
          iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          if (iVar2 != 0) {
            if (local_18 == 0x4d) {
              for (local_14 = 0; (int)local_14 < 0x4e; local_14 = local_14 + 1) {
                CUserCharacInfo::setCurCharacTutorialFlag((CUserCharacInfo *)param_1,local_14);
              }
              return 0;
            }
            cVar1 = CUserCharacInfo::setCurCharacTutorialFlag((CUserCharacInfo *)param_1,local_18);
            if (cVar1 != '\x01') {
              return 0;
            }
            if (local_19 != '\0') {
              CUser::RewardTutorial(param_1,local_18);
            }
            if ((local_18 == 0x1f) &&
               (local_10 = (CParty *)CUser::GetParty(param_1), local_10 != (CParty *)0x0)) {
              CParty::giveup_game(local_10,param_1,true,false,false);
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa120,
                           "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa11b,
                         "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa118,
                       "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}

```


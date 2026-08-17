# Dispatcher_DieBloodMonster

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08220856 Dispatcher_DieBloodMonster::dispatch_sig  [0x08220856-0x8220a5f] ===
 8220856:	55                   	push   %ebp
 8220857:	89 e5                	mov    %esp,%ebp
 8220859:	57                   	push   %edi
 822085a:	53                   	push   %ebx
 822085b:	81 ec 20 02 00 00    	sub    $0x220,%esp
 8220861:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8220865:	75 29                	jne    8220890 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x3a>
 8220867:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822086e:	00 
 822086f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220876:	00 
 8220877:	c7 44 24 04 c0 ce bc 	movl   $0x8bccec0,0x4(%esp)
 822087e:	08 
 822087f:	c7 04 24 4b da 00 00 	movl   $0xda4b,(%esp)
 8220886:	e8 4c 00 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 822088b:	e9 c6 01 00 00       	jmp    8220a56 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x200>
 8220890:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220893:	89 04 24             	mov    %eax,(%esp)
 8220896:	e8 97 fb ef ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 822089b:	85 c0                	test   %eax,%eax
 822089d:	0f 94 c0             	sete   %al
 82208a0:	84 c0                	test   %al,%al
 82208a2:	74 29                	je     82208cd <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x77>
 82208a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82208ab:	00 
 82208ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82208b3:	00 
 82208b4:	c7 44 24 04 c0 ce bc 	movl   $0x8bccec0,0x4(%esp)
 82208bb:	08 
 82208bc:	c7 04 24 4c da 00 00 	movl   $0xda4c,(%esp)
 82208c3:	e8 0f 00 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 82208c8:	e9 89 01 00 00       	jmp    8220a56 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x200>
 82208cd:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 82208d1:	8d 95 ee fd ff ff    	lea    -0x212(%ebp),%edx
 82208d7:	bb 00 02 00 00       	mov    $0x200,%ebx
 82208dc:	b8 00 00 00 00       	mov    $0x0,%eax
 82208e1:	89 d1                	mov    %edx,%ecx
 82208e3:	83 e1 02             	and    $0x2,%ecx
 82208e6:	85 c9                	test   %ecx,%ecx
 82208e8:	74 09                	je     82208f3 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x9d>
 82208ea:	66 89 02             	mov    %ax,(%edx)
 82208ed:	83 c2 02             	add    $0x2,%edx
 82208f0:	83 eb 02             	sub    $0x2,%ebx
 82208f3:	89 d9                	mov    %ebx,%ecx
 82208f5:	c1 e9 02             	shr    $0x2,%ecx
 82208f8:	89 d7                	mov    %edx,%edi
 82208fa:	f3 ab                	rep stos %eax,%es:(%edi)
 82208fc:	89 fa                	mov    %edi,%edx
 82208fe:	89 d9                	mov    %ebx,%ecx
 8220900:	83 e1 02             	and    $0x2,%ecx
 8220903:	85 c9                	test   %ecx,%ecx
 8220905:	74 06                	je     822090d <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 8220907:	66 89 02             	mov    %ax,(%edx)
 822090a:	83 c2 02             	add    $0x2,%edx
 822090d:	89 d9                	mov    %ebx,%ecx
 822090f:	83 e1 01             	and    $0x1,%ecx
 8220912:	85 c9                	test   %ecx,%ecx
 8220914:	74 05                	je     822091b <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0xc5>
 8220916:	88 02                	mov    %al,(%edx)
 8220918:	83 c2 01             	add    $0x1,%edx
 822091b:	8d 45 ef             	lea    -0x11(%ebp),%eax
 822091e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220922:	8b 45 10             	mov    0x10(%ebp),%eax
 8220925:	89 04 24             	mov    %eax,(%esp)
 8220928:	e8 43 c6 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 822092d:	83 f0 01             	xor    $0x1,%eax
 8220930:	84 c0                	test   %al,%al
 8220932:	74 29                	je     822095d <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x107>
 8220934:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 822093b:	00 
 822093c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220943:	00 
 8220944:	c7 44 24 04 c0 ce bc 	movl   $0x8bccec0,0x4(%esp)
 822094b:	08 
 822094c:	c7 04 24 51 da 00 00 	movl   $0xda51,(%esp)
 8220953:	e8 7f ff 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220958:	e9 f9 00 00 00       	jmp    8220a56 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x200>
 822095d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8220964:	eb 50                	jmp    82209b6 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x160>
 8220966:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8220969:	8d 85 ee fd ff ff    	lea    -0x212(%ebp),%eax
 822096f:	01 d2                	add    %edx,%edx
 8220971:	01 d0                	add    %edx,%eax
 8220973:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220977:	8b 45 10             	mov    0x10(%ebp),%eax
 822097a:	89 04 24             	mov    %eax,(%esp)
 822097d:	e8 2e c7 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8220982:	83 f0 01             	xor    $0x1,%eax
 8220985:	84 c0                	test   %al,%al
 8220987:	74 29                	je     82209b2 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8220989:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220990:	00 
 8220991:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220998:	00 
 8220999:	c7 44 24 04 c0 ce bc 	movl   $0x8bccec0,0x4(%esp)
 82209a0:	08 
 82209a1:	c7 04 24 54 da 00 00 	movl   $0xda54,(%esp)
 82209a8:	e8 2a ff 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 82209ad:	e9 a4 00 00 00       	jmp    8220a56 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x200>
 82209b2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 82209b6:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82209ba:	0f b6 c0             	movzbl %al,%eax
 82209bd:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 82209c0:	0f 9f c0             	setg   %al
 82209c3:	84 c0                	test   %al,%al
 82209c5:	75 9f                	jne    8220966 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x110>
 82209c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82209ca:	89 04 24             	mov    %eax,(%esp)
 82209cd:	e8 ba 99 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82209d2:	83 f8 05             	cmp    $0x5,%eax
 82209d5:	0f 94 c0             	sete   %al
 82209d8:	84 c0                	test   %al,%al
 82209da:	74 75                	je     8220a51 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x1fb>
 82209dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82209df:	89 04 24             	mov    %eax,(%esp)
 82209e2:	e8 67 f4 00 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 82209e7:	0f bf d8             	movswl %ax,%ebx
 82209ea:	e8 9f b7 ea ff       	call   80cc18e <_Z14G_CGameManagerv>
 82209ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82209f3:	89 04 24             	mov    %eax,(%esp)
 82209f6:	e8 37 45 07 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 82209fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82209fe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8220a02:	75 26                	jne    8220a2a <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x1d4>
 8220a04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8220a0b:	00 
 8220a0c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8220a13:	00 
 8220a14:	c7 44 24 04 c0 ce bc 	movl   $0x8bccec0,0x4(%esp)
 8220a1b:	08 
 8220a1c:	c7 04 24 5a da 00 00 	movl   $0xda5a,(%esp)
 8220a23:	e8 af fe 36 00       	call   85908d7 <_Z8LineFunciPKcij>
 8220a28:	eb 2c                	jmp    8220a56 <_ZN26Dispatcher_DieBloodMonster12dispatch_sigEP5CUserR9PacketBuf+0x200>
 8220a2a:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8220a2e:	0f b6 c0             	movzbl %al,%eax
 8220a31:	8d 95 ee fd ff ff    	lea    -0x212(%ebp),%edx
 8220a37:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8220a3b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8220a3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8220a42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8220a46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8220a49:	89 04 24             	mov    %eax,(%esp)
 8220a4c:	e8 19 31 38 00       	call   85a3b6a <_ZN6CParty18kill_blood_monsterEP5CUseriPt>
 8220a51:	b8 00 00 00 00       	mov    $0x0,%eax
 8220a56:	81 c4 20 02 00 00    	add    $0x220,%esp
 8220a5c:	5b                   	pop    %ebx
 8220a5d:	5f                   	pop    %edi
 8220a5e:	5d                   	pop    %ebp
 8220a5f:	c3                   	ret

```

```c
// Dispatcher_DieBloodMonster::dispatch_sig @ 0x8220856

/* WARNING: Removing unreachable block (ram,0x08220916) */
/* Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DieBloodMonster::dispatch_sig
          (Dispatcher_DieBloodMonster *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  ushort local_216 [256];
  byte local_15;
  int local_14;
  CParty *local_10;
  
  bVar7 = 0;
  if (param_1 == (CUser *)0x0) {
    uVar2 = LineFunc(0xda4b,
                     "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = LineFunc(0xda4c,
                       "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
    else {
      local_15 = 0;
      puVar4 = local_216;
      uVar5 = 0x200;
      bVar6 = ((uint)puVar4 & 2) != 0;
      if (bVar6) {
        local_216[0] = 0;
        puVar4 = local_216 + 1;
        uVar5 = 0x1fe;
      }
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + ((uint)bVar7 * -2 + 1) * 2;
      }
      if (bVar6) {
        *puVar4 = 0;
      }
      cVar1 = PacketBuf::get_byte(param_2,&local_15);
      if (cVar1 == '\x01') {
        for (local_14 = 0; local_14 < (int)(uint)local_15; local_14 = local_14 + 1) {
          cVar1 = PacketBuf::get_short(param_2,local_216 + local_14);
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0xda54,
                             "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
        }
        iVar3 = CUser::get_state(param_1);
        if (iVar3 == 5) {
          CUser::GetPartyIndex(param_1);
          iVar3 = G_CGameManager();
          local_10 = (CParty *)CGameManager::GetParty(iVar3);
          if (local_10 == (CParty *)0x0) {
            uVar2 = LineFunc(0xda5a,
                             "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar2;
          }
          CParty::kill_blood_monster(local_10,param_1,(uint)local_15,local_216);
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0xda51,
                         "virtual int Dispatcher_DieBloodMonster::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
  }
  return uVar2;
}

```


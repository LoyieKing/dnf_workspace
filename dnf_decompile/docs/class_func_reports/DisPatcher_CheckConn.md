# DisPatcher_CheckConn

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081ea900 DisPatcher_CheckConn::dispatch_sig  [0x081ea900-0x81eaa5b] ===
 81ea900:	55                   	push   %ebp
 81ea901:	89 e5                	mov    %esp,%ebp
 81ea903:	83 ec 38             	sub    $0x38,%esp
 81ea906:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea909:	89 04 24             	mov    %eax,(%esp)
 81ea90c:	e8 41 58 04 00       	call   8230152 <_ZN5CUser17decre_check_countEv>
 81ea911:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81ea918:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ea91b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea91f:	8b 45 10             	mov    0x10(%ebp),%eax
 81ea922:	89 04 24             	mov    %eax,(%esp)
 81ea925:	e8 c6 27 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81ea92a:	83 f0 01             	xor    $0x1,%eax
 81ea92d:	84 c0                	test   %al,%al
 81ea92f:	74 29                	je     81ea95a <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0x5a>
 81ea931:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea938:	00 
 81ea939:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea940:	00 
 81ea941:	c7 44 24 04 40 07 bd 	movl   $0x8bd0740,0x4(%esp)
 81ea948:	08 
 81ea949:	c7 04 24 f8 6b 00 00 	movl   $0x6bf8,(%esp)
 81ea950:	e8 82 5f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea955:	e9 00 01 00 00       	jmp    81eaa5a <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 81ea95a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea95d:	89 04 24             	mov    %eax,(%esp)
 81ea960:	e8 51 37 46 00       	call   864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>
 81ea965:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ea968:	39 d0                	cmp    %edx,%eax
 81ea96a:	0f 95 c0             	setne  %al
 81ea96d:	84 c0                	test   %al,%al
 81ea96f:	74 3a                	je     81ea9ab <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0xab>
 81ea971:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea974:	89 04 24             	mov    %eax,(%esp)
 81ea977:	e8 de ef f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81ea97c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81ea983:	00 
 81ea984:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81ea98b:	00 
 81ea98c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81ea993:	00 
 81ea994:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 81ea99b:	00 
 81ea99c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ea99f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ea9a3:	89 04 24             	mov    %eax,(%esp)
 81ea9a6:	e8 d3 e2 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81ea9ab:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81ea9b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ea9b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ea9b9:	8b 45 10             	mov    0x10(%ebp),%eax
 81ea9bc:	89 04 24             	mov    %eax,(%esp)
 81ea9bf:	e8 2c 27 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81ea9c4:	83 f0 01             	xor    $0x1,%eax
 81ea9c7:	84 c0                	test   %al,%al
 81ea9c9:	74 26                	je     81ea9f1 <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0xf1>
 81ea9cb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ea9d2:	00 
 81ea9d3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ea9da:	00 
 81ea9db:	c7 44 24 04 40 07 bd 	movl   $0x8bd0740,0x4(%esp)
 81ea9e2:	08 
 81ea9e3:	c7 04 24 ff 6b 00 00 	movl   $0x6bff,(%esp)
 81ea9ea:	e8 e8 5e 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ea9ef:	eb 69                	jmp    81eaa5a <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 81ea9f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ea9f4:	89 04 24             	mov    %eax,(%esp)
 81ea9f7:	e8 18 37 46 00       	call   864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>
 81ea9fc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ea9ff:	39 d0                	cmp    %edx,%eax
 81eaa01:	0f 95 c0             	setne  %al
 81eaa04:	84 c0                	test   %al,%al
 81eaa06:	74 3a                	je     81eaa42 <_ZN20DisPatcher_CheckConn12dispatch_sigEP5CUserR9PacketBuf+0x142>
 81eaa08:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eaa0b:	89 04 24             	mov    %eax,(%esp)
 81eaa0e:	e8 47 ef f0 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81eaa13:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81eaa1a:	00 
 81eaa1b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81eaa22:	00 
 81eaa23:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81eaa2a:	00 
 81eaa2b:	c7 44 24 08 5c 02 00 	movl   $0x25c,0x8(%esp)
 81eaa32:	00 
 81eaa33:	8b 55 0c             	mov    0xc(%ebp),%edx
 81eaa36:	89 54 24 04          	mov    %edx,0x4(%esp)
 81eaa3a:	89 04 24             	mov    %eax,(%esp)
 81eaa3d:	e8 3c e2 f0 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81eaa42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81eaa45:	89 04 24             	mov    %eax,(%esp)
 81eaa48:	e8 b3 5d 04 00       	call   8230800 <_ZN5CUser8getHadesEv>
 81eaa4d:	89 04 24             	mov    %eax,(%esp)
 81eaa50:	e8 99 e9 2c 00       	call   84b93ee <_ZN8XNuclear6CHades15Send_ChangeGoldEv>
 81eaa55:	b8 00 00 00 00       	mov    $0x0,%eax
 81eaa5a:	c9                   	leave
 81eaa5b:	c3                   	ret

```

```c
// DisPatcher_CheckConn::dispatch_sig @ 0x81ea900

/* DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_CheckConn::dispatch_sig(DisPatcher_CheckConn *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  int local_14;
  int local_10 [3];
  
  CUser::decre_check_count(param_1);
  local_10[0] = 0;
  cVar1 = PacketBuf::get_int(param_2,local_10);
  if (cVar1 == '\x01') {
    iVar3 = CUser::getCurCharacInvenCheckSum(param_1);
    if (iVar3 != local_10[0]) {
      pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25b,1,0,0);
    }
    local_14 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      iVar3 = CUser::getCurCharacSkillCheckSum(param_1);
      if (iVar3 != local_14) {
        pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x25c,1,0,0);
      }
      CUser::getHades(param_1);
      XNuclear::CHades::Send_ChangeGold();
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6bff,"virtual int DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6bf8,"virtual int DisPatcher_CheckConn::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  return uVar2;
}

```


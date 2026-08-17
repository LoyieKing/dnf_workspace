# game_master__CBindCubeTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084acc1e game_master::CBindCubeTest::execute  [0x084acc1e-0x84ace89] ===
 84acc1e:	55                   	push   %ebp
 84acc1f:	89 e5                	mov    %esp,%ebp
 84acc21:	57                   	push   %edi
 84acc22:	56                   	push   %esi
 84acc23:	53                   	push   %ebx
 84acc24:	81 ec 6c 74 01 00    	sub    $0x1746c,%esp
 84acc2a:	8b 45 08             	mov    0x8(%ebp),%eax
 84acc2d:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84acc31:	84 c0                	test   %al,%al
 84acc33:	0f 88 41 02 00 00    	js     84ace7a <_ZN11game_master13CBindCubeTest7executeEv+0x25c>
 84acc39:	8b 45 08             	mov    0x8(%ebp),%eax
 84acc3c:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84acc40:	3c 0a                	cmp    $0xa,%al
 84acc42:	0f 8f 35 02 00 00    	jg     84ace7d <_ZN11game_master13CBindCubeTest7executeEv+0x25f>
 84acc48:	8d 95 c5 fe ff ff    	lea    -0x13b(%ebp),%edx
 84acc4e:	bb ff 00 00 00       	mov    $0xff,%ebx
 84acc53:	b8 00 00 00 00       	mov    $0x0,%eax
 84acc58:	89 d1                	mov    %edx,%ecx
 84acc5a:	83 e1 01             	and    $0x1,%ecx
 84acc5d:	85 c9                	test   %ecx,%ecx
 84acc5f:	74 08                	je     84acc69 <_ZN11game_master13CBindCubeTest7executeEv+0x4b>
 84acc61:	88 02                	mov    %al,(%edx)
 84acc63:	83 c2 01             	add    $0x1,%edx
 84acc66:	83 eb 01             	sub    $0x1,%ebx
 84acc69:	89 d1                	mov    %edx,%ecx
 84acc6b:	83 e1 02             	and    $0x2,%ecx
 84acc6e:	85 c9                	test   %ecx,%ecx
 84acc70:	74 09                	je     84acc7b <_ZN11game_master13CBindCubeTest7executeEv+0x5d>
 84acc72:	66 89 02             	mov    %ax,(%edx)
 84acc75:	83 c2 02             	add    $0x2,%edx
 84acc78:	83 eb 02             	sub    $0x2,%ebx
 84acc7b:	89 d9                	mov    %ebx,%ecx
 84acc7d:	c1 e9 02             	shr    $0x2,%ecx
 84acc80:	89 d7                	mov    %edx,%edi
 84acc82:	f3 ab                	rep stos %eax,%es:(%edi)
 84acc84:	89 fa                	mov    %edi,%edx
 84acc86:	89 d9                	mov    %ebx,%ecx
 84acc88:	83 e1 02             	and    $0x2,%ecx
 84acc8b:	85 c9                	test   %ecx,%ecx
 84acc8d:	74 06                	je     84acc95 <_ZN11game_master13CBindCubeTest7executeEv+0x77>
 84acc8f:	66 89 02             	mov    %ax,(%edx)
 84acc92:	83 c2 02             	add    $0x2,%edx
 84acc95:	89 d9                	mov    %ebx,%ecx
 84acc97:	83 e1 01             	and    $0x1,%ecx
 84acc9a:	85 c9                	test   %ecx,%ecx
 84acc9c:	74 05                	je     84acca3 <_ZN11game_master13CBindCubeTest7executeEv+0x85>
 84acc9e:	88 02                	mov    %al,(%edx)
 84acca0:	83 c2 01             	add    $0x1,%edx
 84acca3:	8d 85 ad 8b fe ff    	lea    -0x17453(%ebp),%eax
 84acca9:	ba 18 73 01 00       	mov    $0x17318,%edx
 84accae:	89 54 24 08          	mov    %edx,0x8(%esp)
 84accb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84accb9:	00 
 84accba:	89 04 24             	mov    %eax,(%esp)
 84accbd:	e8 fe 0f bd ff       	call   807dcc0 <memset@plt>
 84accc2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84accc5:	89 04 24             	mov    %eax,(%esp)
 84accc8:	e8 97 9f c1 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 84acccd:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84accd4:	e9 68 01 00 00       	jmp    84ace41 <_ZN11game_master13CBindCubeTest7executeEv+0x223>
 84accd9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84acce0:	e9 49 01 00 00       	jmp    84ace2e <_ZN11game_master13CBindCubeTest7executeEv+0x210>
 84acce5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84accec:	e9 2a 01 00 00       	jmp    84ace1b <_ZN11game_master13CBindCubeTest7executeEv+0x1fd>
 84accf1:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 84accf8:	00 
 84accf9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acd00:	00 
 84acd01:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 84acd07:	89 04 24             	mov    %eax,(%esp)
 84acd0a:	e8 b1 0f bd ff       	call   807dcc0 <memset@plt>
 84acd0f:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 84acd16:	00 
 84acd17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84acd1e:	00 
 84acd1f:	8d 85 ad 8b fe ff    	lea    -0x17453(%ebp),%eax
 84acd25:	89 04 24             	mov    %eax,(%esp)
 84acd28:	e8 93 0f bd ff       	call   807dcc0 <memset@plt>
 84acd2d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84acd30:	8b 45 08             	mov    0x8(%ebp),%eax
 84acd33:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84acd37:	0f be d0             	movsbl %al,%edx
 84acd3a:	a1 4c f7 41 09       	mov    0x941f74c,%eax
 84acd3f:	8d 5d c4             	lea    -0x3c(%ebp),%ebx
 84acd42:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84acd46:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 84acd49:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84acd4d:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 84acd50:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84acd54:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84acd58:	89 54 24 04          	mov    %edx,0x4(%esp)
 84acd5c:	89 04 24             	mov    %eax,(%esp)
 84acd5f:	e8 76 72 e8 ff       	call   8333fda <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84acd64:	8b 45 08             	mov    0x8(%ebp),%eax
 84acd67:	89 04 24             	mov    %eax,(%esp)
 84acd6a:	e8 4b 72 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84acd6f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 84acd72:	89 54 24 08          	mov    %edx,0x8(%esp)
 84acd76:	8d 95 ad 8b fe ff    	lea    -0x17453(%ebp),%edx
 84acd7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84acd80:	89 04 24             	mov    %eax,(%esp)
 84acd83:	e8 7c 27 00 00       	call   84af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>
 84acd88:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84acd8b:	8b 1c 85 20 bb 3a 09 	mov    0x93abb20(,%eax,4),%ebx
 84acd92:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84acd95:	8b 0c 85 14 bb 3a 09 	mov    0x93abb14(,%eax,4),%ecx
 84acd9c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84acd9f:	8b 14 85 0c bb 3a 09 	mov    0x93abb0c(,%eax,4),%edx
 84acda6:	8b 45 08             	mov    0x8(%ebp),%eax
 84acda9:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84acdad:	0f be c0             	movsbl %al,%eax
 84acdb0:	8b 04 85 e0 ba 3a 09 	mov    0x93abae0(,%eax,4),%eax
 84acdb7:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84acdbb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84acdbf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84acdc3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84acdc7:	c7 44 24 04 82 fd c7 	movl   $0x8c7fd82,0x4(%esp)
 84acdce:	08 
 84acdcf:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 84acdd5:	89 04 24             	mov    %eax,(%esp)
 84acdd8:	e8 63 16 bd ff       	call   807e440 <sprintf@plt>
 84acddd:	8b 45 08             	mov    0x8(%ebp),%eax
 84acde0:	89 04 24             	mov    %eax,(%esp)
 84acde3:	e8 d2 71 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84acde8:	8d 95 ad 8b fe ff    	lea    -0x17453(%ebp),%edx
 84acdee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84acdf2:	8d 95 c5 fe ff ff    	lea    -0x13b(%ebp),%edx
 84acdf8:	89 54 24 08          	mov    %edx,0x8(%esp)
 84acdfc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ace03:	00 
 84ace04:	89 04 24             	mov    %eax,(%esp)
 84ace07:	e8 e6 1d 00 00       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84ace0c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ace0f:	89 04 24             	mov    %eax,(%esp)
 84ace12:	e8 c7 9e c1 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 84ace17:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84ace1b:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 84ace1f:	0f 9e c0             	setle  %al
 84ace22:	84 c0                	test   %al,%al
 84ace24:	0f 85 c7 fe ff ff    	jne    84accf1 <_ZN11game_master13CBindCubeTest7executeEv+0xd3>
 84ace2a:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84ace2e:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 84ace32:	0f 9e c0             	setle  %al
 84ace35:	84 c0                	test   %al,%al
 84ace37:	0f 85 a8 fe ff ff    	jne    84acce5 <_ZN11game_master13CBindCubeTest7executeEv+0xc7>
 84ace3d:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 84ace41:	83 7d dc 01          	cmpl   $0x1,-0x24(%ebp)
 84ace45:	0f 9e c0             	setle  %al
 84ace48:	84 c0                	test   %al,%al
 84ace4a:	0f 85 89 fe ff ff    	jne    84accd9 <_ZN11game_master13CBindCubeTest7executeEv+0xbb>
 84ace50:	eb 1b                	jmp    84ace6d <_ZN11game_master13CBindCubeTest7executeEv+0x24f>
 84ace52:	89 d3                	mov    %edx,%ebx
 84ace54:	89 c6                	mov    %eax,%esi
 84ace56:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ace59:	89 04 24             	mov    %eax,(%esp)
 84ace5c:	e8 65 9c c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ace61:	89 f0                	mov    %esi,%eax
 84ace63:	89 da                	mov    %ebx,%edx
 84ace65:	89 04 24             	mov    %eax,(%esp)
 84ace68:	e8 e3 68 63 00       	call   8ae3750 <_Unwind_Resume>
 84ace6d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 84ace70:	89 04 24             	mov    %eax,(%esp)
 84ace73:	e8 4e 9c c1 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 84ace78:	eb 04                	jmp    84ace7e <_ZN11game_master13CBindCubeTest7executeEv+0x260>
 84ace7a:	90                   	nop
 84ace7b:	eb 01                	jmp    84ace7e <_ZN11game_master13CBindCubeTest7executeEv+0x260>
 84ace7d:	90                   	nop
 84ace7e:	81 c4 6c 74 01 00    	add    $0x1746c,%esp
 84ace84:	5b                   	pop    %ebx
 84ace85:	5e                   	pop    %esi
 84ace86:	5f                   	pop    %edi
 84ace87:	5d                   	pop    %ebp
 84ace88:	c3                   	ret
 84ace89:	90                   	nop

```

```c
// game_master::CBindCubeTest::execute @ 0x84acc1e

/* game_master::CBindCubeTest::execute() */

void __thiscall game_master::CBindCubeTest::execute(CBindCubeTest *this)

{
  CUser *pCVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char acStack_17457 [95000];
  char local_13f;
  char local_13e [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_40 [24];
  int local_28;
  int local_24;
  int local_20;
  
  if ((-1 < (char)this[8]) && ((char)this[8] < '\v')) {
    pcVar3 = &local_13f;
    uVar4 = 0xff;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_13f = '\0';
      pcVar3 = local_13e;
      uVar4 = 0xfe;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    memset(acStack_17457,0,95000);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_40);
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          memset(&local_13f,0,0xff);
          memset(acStack_17457,0,95000);
                    /* try { // try from 084acd5f to 084ace16 has its CatchHandler @ 084ace52 */
          WongWork::CCompoundAvatar::ProcTest
                    (GlobalData::s_pCompoundAvatar,(int)(char)this[8],local_20,local_24,local_28,
                     local_40);
          pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
          CBoosterTest::makeFileContents(pCVar1,acStack_17457,(map *)local_40);
          sprintf(&local_13f,"bind_%s_%s_%s_%s.txt",
                  *(undefined4 *)(CHARACTER_JOB_NAMES + (char)this[8] * 4),(&BIND_NAMES)[local_28],
                  *(undefined4 *)(RECIPE_NAMES + local_24 * 4),
                  *(undefined4 *)(EQUIP_NAMES + local_20 * 4));
          pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
          CBoosterTest::printClient(pCVar1,false,&local_13f,acStack_17457);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_40)
          ;
        }
      }
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_40);
  }
  return;
}

```

---

## parse

```asm
// === 084acbe4 game_master::CBindCubeTest::parse  [0x084acbe4-0x84acc1d] ===
 84acbe4:	55                   	push   %ebp
 84acbe5:	89 e5                	mov    %esp,%ebp
 84acbe7:	83 ec 18             	sub    $0x18,%esp
 84acbea:	8b 45 08             	mov    0x8(%ebp),%eax
 84acbed:	8b 40 04             	mov    0x4(%eax),%eax
 84acbf0:	83 c0 0c             	add    $0xc,%eax
 84acbf3:	89 04 24             	mov    %eax,(%esp)
 84acbf6:	e8 6d 24 df ff       	call   829f068 <_Z4trimRSs>
 84acbfb:	8b 45 08             	mov    0x8(%ebp),%eax
 84acbfe:	8b 40 04             	mov    0x4(%eax),%eax
 84acc01:	83 c0 0c             	add    $0xc,%eax
 84acc04:	89 04 24             	mov    %eax,(%esp)
 84acc07:	e8 e4 98 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84acc0c:	89 04 24             	mov    %eax,(%esp)
 84acc0f:	e8 dc 1a bd ff       	call   807e6f0 <atoi@plt>
 84acc14:	89 c2                	mov    %eax,%edx
 84acc16:	8b 45 08             	mov    0x8(%ebp),%eax
 84acc19:	88 50 08             	mov    %dl,0x8(%eax)
 84acc1c:	c9                   	leave
 84acc1d:	c3                   	ret

```

```c
// game_master::CBindCubeTest::parse @ 0x84acbe4

/* game_master::CBindCubeTest::parse() */

void __thiscall game_master::CBindCubeTest::parse(CBindCubeTest *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  this[8] = SUB41(iVar1,0);
  return;
}

```


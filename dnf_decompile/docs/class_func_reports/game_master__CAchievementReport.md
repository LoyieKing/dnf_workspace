# game_master__CAchievementReport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084b07fe game_master::CAchievementReport::execute  [0x084b07fe-0x84b08ef] ===
 84b07fe:	55                   	push   %ebp
 84b07ff:	89 e5                	mov    %esp,%ebp
 84b0801:	56                   	push   %esi
 84b0802:	53                   	push   %ebx
 84b0803:	81 ec 30 73 01 00    	sub    $0x17330,%esp
 84b0809:	8d 85 dc 8c fe ff    	lea    -0x17324(%ebp),%eax
 84b080f:	ba 18 73 01 00       	mov    $0x17318,%edx
 84b0814:	89 54 24 08          	mov    %edx,0x8(%esp)
 84b0818:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b081f:	00 
 84b0820:	89 04 24             	mov    %eax,(%esp)
 84b0823:	e8 98 d4 bc ff       	call   807dcc0 <memset@plt>
 84b0828:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b082b:	89 04 24             	mov    %eax,(%esp)
 84b082e:	e8 9d 5d 25 00       	call   87065d0 <_ZNSsC1Ev>
 84b0833:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0836:	89 04 24             	mov    %eax,(%esp)
 84b0839:	e8 7c 37 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b083e:	c7 44 24 04 0f 00 00 	movl   $0xf,0x4(%esp)
 84b0845:	00 
 84b0846:	89 04 24             	mov    %eax,(%esp)
 84b0849:	e8 36 cd c2 ff       	call   80dd584 <_ZNK5CUser19GetCharacExpandDataE23ENUM_CHARAC_EXPAND_TYPE>
 84b084e:	8d 55 f4             	lea    -0xc(%ebp),%edx
 84b0851:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b0855:	89 04 24             	mov    %eax,(%esp)
 84b0858:	e8 f3 cb dd ff       	call   828d450 <_ZN12CAchievement10_gm_reportERSs>
 84b085d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b0860:	89 04 24             	mov    %eax,(%esp)
 84b0863:	e8 08 5e 25 00       	call   8706670 <_ZNKSs6lengthEv>
 84b0868:	3d 17 73 01 00       	cmp    $0x17317,%eax
 84b086d:	0f 96 c0             	setbe  %al
 84b0870:	84 c0                	test   %al,%al
 84b0872:	74 1d                	je     84b0891 <_ZN11game_master18CAchievementReport7executeEv+0x93>
 84b0874:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b0877:	89 04 24             	mov    %eax,(%esp)
 84b087a:	e8 71 5c 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b087f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b0883:	8d 85 dc 8c fe ff    	lea    -0x17324(%ebp),%eax
 84b0889:	89 04 24             	mov    %eax,(%esp)
 84b088c:	e8 5f d6 bc ff       	call   807def0 <strcpy@plt>
 84b0891:	8b 45 08             	mov    0x8(%ebp),%eax
 84b0894:	89 04 24             	mov    %eax,(%esp)
 84b0897:	e8 1e 37 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b089c:	8d 95 dc 8c fe ff    	lea    -0x17324(%ebp),%edx
 84b08a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84b08a6:	c7 44 24 08 37 02 c8 	movl   $0x8c80237,0x8(%esp)
 84b08ad:	08 
 84b08ae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b08b5:	00 
 84b08b6:	89 04 24             	mov    %eax,(%esp)
 84b08b9:	e8 34 e3 ff ff       	call   84aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>
 84b08be:	eb 1b                	jmp    84b08db <_ZN11game_master18CAchievementReport7executeEv+0xdd>
 84b08c0:	89 d3                	mov    %edx,%ebx
 84b08c2:	89 c6                	mov    %eax,%esi
 84b08c4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b08c7:	89 04 24             	mov    %eax,(%esp)
 84b08ca:	e8 11 73 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b08cf:	89 f0                	mov    %esi,%eax
 84b08d1:	89 da                	mov    %ebx,%edx
 84b08d3:	89 04 24             	mov    %eax,(%esp)
 84b08d6:	e8 75 2e 63 00       	call   8ae3750 <_Unwind_Resume>
 84b08db:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84b08de:	89 04 24             	mov    %eax,(%esp)
 84b08e1:	e8 fa 72 25 00       	call   8707be0 <_ZNSsD1Ev>
 84b08e6:	81 c4 30 73 01 00    	add    $0x17330,%esp
 84b08ec:	5b                   	pop    %ebx
 84b08ed:	5e                   	pop    %esi
 84b08ee:	5d                   	pop    %ebp
 84b08ef:	c3                   	ret

```

```c
// game_master::CAchievementReport::execute @ 0x84b07fe

/* game_master::CAchievementReport::execute() */

void __thiscall game_master::CAchievementReport::execute(CAchievementReport *this)

{
  CUser *pCVar1;
  CAchievement *this_00;
  uint uVar2;
  char *__src;
  char acStack_17328 [95000];
  string local_10;
  
  memset(acStack_17328,0,95000);
  std::string::string((string *)&local_10);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084b0849 to 084b08bd has its CatchHandler @ 084b08c0 */
  this_00 = (CAchievement *)CUser::GetCharacExpandData(pCVar1,0xf);
  CAchievement::_gm_report(this_00,&local_10);
  uVar2 = std::string::length((string *)&local_10);
  if (uVar2 < 95000) {
    __src = (char *)std::string::c_str((string *)&local_10);
    strcpy(acStack_17328,__src);
  }
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  CBoosterTest::printClient(pCVar1,false,"achievement_report.txt",acStack_17328);
  std::string::~string((string *)&local_10);
  return;
}

```


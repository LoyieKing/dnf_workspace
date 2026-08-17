# TimerForbidMove

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086360aa TimerForbidMove::dispatch_sig  [0x086360aa-0x8636203] ===
 86360aa:	55                   	push   %ebp
 86360ab:	89 e5                	mov    %esp,%ebp
 86360ad:	53                   	push   %ebx
 86360ae:	83 ec 54             	sub    $0x54,%esp
 86360b1:	e8 d8 60 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86360b6:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 86360bd:	00 
 86360be:	8b 55 0c             	mov    0xc(%ebp),%edx
 86360c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86360c5:	89 04 24             	mov    %eax,(%esp)
 86360c8:	e8 d7 e6 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 86360cd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86360d0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86360d4:	75 0a                	jne    86360e0 <_ZN15TimerForbidMove12dispatch_sigEiij+0x36>
 86360d6:	b8 00 00 00 00       	mov    $0x0,%eax
 86360db:	e9 1d 01 00 00       	jmp    86361fd <_ZN15TimerForbidMove12dispatch_sigEiij+0x153>
 86360e0:	8b 45 14             	mov    0x14(%ebp),%eax
 86360e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86360e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86360ea:	89 04 24             	mov    %eax,(%esp)
 86360ed:	e8 dc 5d 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 86360f2:	89 c3                	mov    %eax,%ebx
 86360f4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86360fb:	00 
 86360fc:	c7 44 24 08 64 0a 00 	movl   $0xa64,0x8(%esp)
 8636103:	00 
 8636104:	c7 44 24 04 60 83 ce 	movl   $0x8ce8360,0x4(%esp)
 863610b:	08 
 863610c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 863610f:	89 04 24             	mov    %eax,(%esp)
 8636112:	e8 01 96 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636117:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863611b:	c7 44 24 04 95 6e ce 	movl   $0x8ce6e95,0x4(%esp)
 8636122:	08 
 8636123:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8636126:	89 04 24             	mov    %eax,(%esp)
 8636129:	e8 5a 96 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863612e:	8b 45 14             	mov    0x14(%ebp),%eax
 8636131:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636135:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636138:	89 04 24             	mov    %eax,(%esp)
 863613b:	e8 8e 5d 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 8636140:	89 c3                	mov    %eax,%ebx
 8636142:	e8 60 42 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8636147:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 863614b:	89 04 24             	mov    %eax,(%esp)
 863614e:	e8 07 7d 09 00       	call   86cde5a <_ZN9GameWorld10EnableMoveEPKc>
 8636153:	83 f0 01             	xor    $0x1,%eax
 8636156:	84 c0                	test   %al,%al
 8636158:	74 50                	je     86361aa <_ZN15TimerForbidMove12dispatch_sigEiij+0x100>
 863615a:	8b 45 14             	mov    0x14(%ebp),%eax
 863615d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636161:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636164:	89 04 24             	mov    %eax,(%esp)
 8636167:	e8 62 5d 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 863616c:	89 c3                	mov    %eax,%ebx
 863616e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8636175:	00 
 8636176:	c7 44 24 08 66 0a 00 	movl   $0xa66,0x8(%esp)
 863617d:	00 
 863617e:	c7 44 24 04 60 83 ce 	movl   $0x8ce8360,0x4(%esp)
 8636185:	08 
 8636186:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8636189:	89 04 24             	mov    %eax,(%esp)
 863618c:	e8 87 95 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636191:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8636195:	c7 44 24 04 a8 6e ce 	movl   $0x8ce6ea8,0x4(%esp)
 863619c:	08 
 863619d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86361a0:	89 04 24             	mov    %eax,(%esp)
 86361a3:	e8 e0 95 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86361a8:	eb 4e                	jmp    86361f8 <_ZN15TimerForbidMove12dispatch_sigEiij+0x14e>
 86361aa:	8b 45 14             	mov    0x14(%ebp),%eax
 86361ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 86361b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86361b4:	89 04 24             	mov    %eax,(%esp)
 86361b7:	e8 12 5d 00 00       	call   863bece <_ZNK5CUser28get_charac_name_by_charac_noEi>
 86361bc:	89 c3                	mov    %eax,%ebx
 86361be:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86361c5:	00 
 86361c6:	c7 44 24 08 68 0a 00 	movl   $0xa68,0x8(%esp)
 86361cd:	00 
 86361ce:	c7 44 24 04 60 83 ce 	movl   $0x8ce8360,0x4(%esp)
 86361d5:	08 
 86361d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86361d9:	89 04 24             	mov    %eax,(%esp)
 86361dc:	e8 37 95 f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86361e1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86361e5:	c7 44 24 04 c9 6e ce 	movl   $0x8ce6ec9,0x4(%esp)
 86361ec:	08 
 86361ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86361f0:	89 04 24             	mov    %eax,(%esp)
 86361f3:	e8 90 95 f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86361f8:	b8 01 00 00 00       	mov    $0x1,%eax
 86361fd:	83 c4 54             	add    $0x54,%esp
 8636200:	5b                   	pop    %ebx
 8636201:	5d                   	pop    %ebp
 8636202:	c3                   	ret
 8636203:	90                   	nop

```

```c
// TimerForbidMove::dispatch_sig @ 0x86360aa

/* TimerForbidMove::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerForbidMove::dispatch_sig(TimerForbidMove *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  GameWorld *this_00;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
    cMyTrace::cMyTrace(local_40,
                       "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0xa64,0);
    cMyTrace::operator()(local_40,"TimerForbidMove %s",uVar3);
    pcVar4 = (char *)CUser::get_charac_name_by_charac_no(local_10,param_3);
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::EnableMove(this_00,pcVar4);
    if (cVar1 == '\x01') {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_20,
                         "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa68,0);
      cMyTrace::operator()(local_20,"Enabled to move for: %s",uVar3);
    }
    else {
      uVar3 = CUser::get_charac_name_by_charac_no(local_10,param_3);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool TimerForbidMove::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0xa66,0);
      cMyTrace::operator()(local_30,"Failed to enable to move for: %s",uVar3);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```


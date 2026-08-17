# Inter_CutOffCallUserInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8a70 Inter_CutOffCallUserInfo::dispatch_sig  [0x084c8a70-0x84c8b0b] ===
 84c8a70:	55                   	push   %ebp
 84c8a71:	89 e5                	mov    %esp,%ebp
 84c8a73:	83 ec 48             	sub    $0x48,%esp
 84c8a76:	e8 13 37 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c8a7b:	85 c0                	test   %eax,%eax
 84c8a7d:	0f 94 c0             	sete   %al
 84c8a80:	84 c0                	test   %al,%al
 84c8a82:	74 38                	je     84c8abc <_ZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPci+0x4c>
 84c8a84:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84c8a8b:	00 
 84c8a8c:	c7 44 24 08 49 22 00 	movl   $0x2249,0x8(%esp)
 84c8a93:	00 
 84c8a94:	c7 44 24 04 60 dd c8 	movl   $0x8c8dd60,0x4(%esp)
 84c8a9b:	08 
 84c8a9c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8a9f:	89 04 24             	mov    %eax,(%esp)
 84c8aa2:	e8 71 6c 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8aa7:	c7 44 24 04 10 78 c8 	movl   $0x8c87810,0x4(%esp)
 84c8aae:	08 
 84c8aaf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84c8ab2:	89 04 24             	mov    %eax,(%esp)
 84c8ab5:	e8 ce 6c 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8aba:	eb 49                	jmp    84c8b05 <_ZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPci+0x95>
 84c8abc:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8abf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c8ac2:	e8 c7 36 c0 ff       	call   80cc18e <_Z14G_CGameManagerv>
 84c8ac7:	89 04 24             	mov    %eax,(%esp)
 84c8aca:	e8 b5 d3 dc ff       	call   8295e84 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv>
 84c8acf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8ad6:	00 
 84c8ad7:	c7 44 24 08 52 22 00 	movl   $0x2252,0x8(%esp)
 84c8ade:	00 
 84c8adf:	c7 44 24 04 60 dd c8 	movl   $0x8c8dd60,0x4(%esp)
 84c8ae6:	08 
 84c8ae7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c8aea:	89 04 24             	mov    %eax,(%esp)
 84c8aed:	e8 26 6c 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8af2:	c7 44 24 04 78 78 c8 	movl   $0x8c87878,0x4(%esp)
 84c8af9:	08 
 84c8afa:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84c8afd:	89 04 24             	mov    %eax,(%esp)
 84c8b00:	e8 83 6c 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8b05:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8b0a:	c9                   	leave
 84c8b0b:	c3                   	ret

```

```c
// Inter_CutOffCallUserInfo::dispatch_sig @ 0x84c8a70

/* Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CutOffCallUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CGameManager *this;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar1 = G_CGameManager();
  if (iVar1 == 0) {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2249,5);
    cMyTrace::operator()
              (local_30,"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null");
  }
  else {
    local_10 = param_3;
    this = (CGameManager *)G_CGameManager();
    CGameManager::send_userinfos_to_cutoff_server(this);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2252,0);
    cMyTrace::operator()(local_20,"Cut Off Server Call UserInfo Arrived");
  }
  return 0;
}

```


# premium_helper_function

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## cal_end_time

```asm
// === 0827d024 premium_helper_function::cal_end_time  [0x0827d024-0x827d0f4] ===
 827d024:	55                   	push   %ebp
 827d025:	89 e5                	mov    %esp,%ebp
 827d027:	83 ec 38             	sub    $0x38,%esp
 827d02a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 827d02d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 827d030:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 827d034:	74 5f                	je     827d095 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0x71>
 827d036:	8b 45 08             	mov    0x8(%ebp),%eax
 827d039:	89 04 24             	mov    %eax,(%esp)
 827d03c:	e8 e7 fd ea ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 827d041:	8b 55 18             	mov    0x18(%ebp),%edx
 827d044:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d048:	89 04 24             	mov    %eax,(%esp)
 827d04b:	e8 02 0f 43 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 827d050:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827d053:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d056:	8b 00                	mov    (%eax),%eax
 827d058:	3b 45 18             	cmp    0x18(%ebp),%eax
 827d05b:	75 23                	jne    827d080 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0x5c>
 827d05d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d060:	8b 50 08             	mov    0x8(%eax),%edx
 827d063:	8b 45 20             	mov    0x20(%ebp),%eax
 827d066:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 827d06c:	01 c2                	add    %eax,%edx
 827d06e:	8b 45 10             	mov    0x10(%ebp),%eax
 827d071:	89 10                	mov    %edx,(%eax)
 827d073:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d076:	8b 50 04             	mov    0x4(%eax),%edx
 827d079:	8b 45 0c             	mov    0xc(%ebp),%eax
 827d07c:	89 10                	mov    %edx,(%eax)
 827d07e:	eb 28                	jmp    827d0a8 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0x84>
 827d080:	8b 45 20             	mov    0x20(%ebp),%eax
 827d083:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 827d089:	89 c2                	mov    %eax,%edx
 827d08b:	03 55 14             	add    0x14(%ebp),%edx
 827d08e:	8b 45 10             	mov    0x10(%ebp),%eax
 827d091:	89 10                	mov    %edx,(%eax)
 827d093:	eb 13                	jmp    827d0a8 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0x84>
 827d095:	8b 45 20             	mov    0x20(%ebp),%eax
 827d098:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 827d09e:	89 c2                	mov    %eax,%edx
 827d0a0:	03 55 14             	add    0x14(%ebp),%edx
 827d0a3:	8b 45 10             	mov    0x10(%ebp),%eax
 827d0a6:	89 10                	mov    %edx,(%eax)
 827d0a8:	8b 55 18             	mov    0x18(%ebp),%edx
 827d0ab:	89 d0                	mov    %edx,%eax
 827d0ad:	c1 e0 03             	shl    $0x3,%eax
 827d0b0:	01 d0                	add    %edx,%eax
 827d0b2:	c1 e0 05             	shl    $0x5,%eax
 827d0b5:	8b 80 48 3a 48 09    	mov    0x9483a48(%eax),%eax
 827d0bb:	85 c0                	test   %eax,%eax
 827d0bd:	74 34                	je     827d0f3 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0xcf>
 827d0bf:	8b 55 18             	mov    0x18(%ebp),%edx
 827d0c2:	89 d0                	mov    %edx,%eax
 827d0c4:	c1 e0 03             	shl    $0x3,%eax
 827d0c7:	01 d0                	add    %edx,%eax
 827d0c9:	c1 e0 05             	shl    $0x5,%eax
 827d0cc:	8b 90 48 3a 48 09    	mov    0x9483a48(%eax),%edx
 827d0d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 827d0d5:	8b 00                	mov    (%eax),%eax
 827d0d7:	39 c2                	cmp    %eax,%edx
 827d0d9:	7e 18                	jle    827d0f3 <_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi+0xcf>
 827d0db:	8b 55 18             	mov    0x18(%ebp),%edx
 827d0de:	89 d0                	mov    %edx,%eax
 827d0e0:	c1 e0 03             	shl    $0x3,%eax
 827d0e3:	01 d0                	add    %edx,%eax
 827d0e5:	c1 e0 05             	shl    $0x5,%eax
 827d0e8:	8b 90 48 3a 48 09    	mov    0x9483a48(%eax),%edx
 827d0ee:	8b 45 10             	mov    0x10(%ebp),%eax
 827d0f1:	89 10                	mov    %edx,(%eax)
 827d0f3:	c9                   	leave
 827d0f4:	c3                   	ret

```

```c
// premium_helper_function::cal_end_time @ 0x827d024

/* premium_helper_function::cal_end_time(CUser*, long&, long&, long, int, bool, int) */

void premium_helper_function::cal_end_time
               (CUser *param_1,long *param_2,long *param_3,long param_4,int param_5,bool param_6,
               int param_7)

{
  CUserPremium *this;
  int *piVar1;
  
  if (param_6) {
    this = (CUserPremium *)CUser::GetPremiumInfo(param_1);
    piVar1 = (int *)WongWork::CUserPremium::GetPremiumInfo(this,param_5);
    if (*piVar1 == param_5) {
      *param_3 = piVar1[2] + param_7 * 0x15180;
      *param_2 = piVar1[1];
    }
    else {
      *param_3 = param_7 * 0x15180 + param_4;
    }
  }
  else {
    *param_3 = param_7 * 0x15180 + param_4;
  }
  if ((*(int *)(g_SPremiumInfo + param_5 * 0x120 + 8) != 0) &&
     (*param_2 < *(int *)(g_SPremiumInfo + param_5 * 0x120 + 8))) {
    *param_3 = *(long *)(g_SPremiumInfo + param_5 * 0x120 + 8);
  }
  return;
}

```

---

## cal_premium_term

```asm
// === 0827cff0 premium_helper_function::cal_premium_term  [0x0827cff0-0x827d023] ===
 827cff0:	55                   	push   %ebp
 827cff1:	89 e5                	mov    %esp,%ebp
 827cff3:	83 ec 18             	sub    $0x18,%esp
 827cff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 827cff9:	88 45 f4             	mov    %al,-0xc(%ebp)
 827cffc:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 827d000:	74 19                	je     827d01b <_ZN23premium_helper_function16cal_premium_termEibi+0x2b>
 827d002:	e8 94 f1 e4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 827d007:	0f b6 80 7e 87 00 00 	movzbl 0x877e(%eax),%eax
 827d00e:	0f b6 c0             	movzbl %al,%eax
 827d011:	0f af 45 08          	imul   0x8(%ebp),%eax
 827d015:	0f af 45 10          	imul   0x10(%ebp),%eax
 827d019:	eb 07                	jmp    827d022 <_ZN23premium_helper_function16cal_premium_termEibi+0x32>
 827d01b:	8b 45 08             	mov    0x8(%ebp),%eax
 827d01e:	0f af 45 10          	imul   0x10(%ebp),%eax
 827d022:	c9                   	leave
 827d023:	c3                   	ret

```

```c
// premium_helper_function::cal_premium_term @ 0x827cff0

/* premium_helper_function::cal_premium_term(int, bool, int) */

int premium_helper_function::cal_premium_term(int param_1,bool param_2,int param_3)

{
  int iVar1;
  
  if (param_2) {
    iVar1 = G_CDataManager();
    param_1 = (uint)*(byte *)(iVar1 + 0x877e) * param_1;
  }
  return param_1 * param_3;
}

```

---

## get_target_server

```asm
// === 0827d0f5 premium_helper_function::get_target_server  [0x0827d0f5-0x827d126] ===
 827d0f5:	55                   	push   %ebp
 827d0f6:	89 e5                	mov    %esp,%ebp
 827d0f8:	83 ec 08             	sub    $0x8,%esp
 827d0fb:	8b 55 08             	mov    0x8(%ebp),%edx
 827d0fe:	89 d0                	mov    %edx,%eax
 827d100:	c1 e0 03             	shl    $0x3,%eax
 827d103:	01 d0                	add    %edx,%eax
 827d105:	c1 e0 05             	shl    $0x5,%eax
 827d108:	8b 80 9c 3a 48 09    	mov    0x9483a9c(%eax),%eax
 827d10e:	83 f8 01             	cmp    $0x1,%eax
 827d111:	75 0d                	jne    827d120 <_ZN23premium_helper_function17get_target_serverEi+0x2b>
 827d113:	e8 69 f0 e4 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 827d118:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 827d11e:	eb 05                	jmp    827d125 <_ZN23premium_helper_function17get_target_serverEi+0x30>
 827d120:	b8 00 00 00 00       	mov    $0x0,%eax
 827d125:	c9                   	leave
 827d126:	c3                   	ret

```

```c
// premium_helper_function::get_target_server @ 0x827d0f5

/* premium_helper_function::get_target_server(int) */

undefined4 premium_helper_function::get_target_server(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 0x5c) == 1) {
    iVar1 = G_CEnvironment();
    uVar2 = *(undefined4 *)(iVar1 + 0x378);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## is_notify

```asm
// === 0827d29d premium_helper_function::is_notify  [0x0827d29d-0x827d2de] ===
 827d29d:	55                   	push   %ebp
 827d29e:	89 e5                	mov    %esp,%ebp
 827d2a0:	83 ec 28             	sub    $0x28,%esp
 827d2a3:	8b 45 08             	mov    0x8(%ebp),%eax
 827d2a6:	89 04 24             	mov    %eax,(%esp)
 827d2a9:	e8 7a fb ea ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 827d2ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 827d2b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d2b5:	89 04 24             	mov    %eax,(%esp)
 827d2b8:	e8 95 0c 43 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 827d2bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827d2c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d2c3:	8b 00                	mov    (%eax),%eax
 827d2c5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 827d2c8:	75 0e                	jne    827d2d8 <_ZN23premium_helper_function9is_notifyEP5CUseri+0x3b>
 827d2ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827d2cd:	8b 40 10             	mov    0x10(%eax),%eax
 827d2d0:	83 f8 02             	cmp    $0x2,%eax
 827d2d3:	0f 94 c0             	sete   %al
 827d2d6:	eb 05                	jmp    827d2dd <_ZN23premium_helper_function9is_notifyEP5CUseri+0x40>
 827d2d8:	b8 00 00 00 00       	mov    $0x0,%eax
 827d2dd:	c9                   	leave
 827d2de:	c3                   	ret

```

```c
// premium_helper_function::is_notify @ 0x827d29d

/* premium_helper_function::is_notify(CUser*, int) */

undefined4 premium_helper_function::is_notify(CUser *param_1,int param_2)

{
  CUserPremium *this;
  int *piVar1;
  undefined4 uVar2;
  
  this = (CUserPremium *)CUser::GetPremiumInfo(param_1);
  piVar1 = (int *)WongWork::CUserPremium::GetPremiumInfo(this,param_2);
  if (*piVar1 == param_2) {
    uVar2 = CONCAT31((int3)((uint)piVar1[4] >> 8),piVar1[4] == 2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## send_db

```asm
// === 0827d127 premium_helper_function::send_db  [0x0827d127-0x827d29c] ===
 827d127:	55                   	push   %ebp
 827d128:	89 e5                	mov    %esp,%ebp
 827d12a:	56                   	push   %esi
 827d12b:	53                   	push   %ebx
 827d12c:	83 ec 20             	sub    $0x20,%esp
 827d12f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 827d134:	c7 44 24 08 95 02 00 	movl   $0x295,0x8(%esp)
 827d13b:	00 
 827d13c:	c7 44 24 04 43 7e c0 	movl   $0x8c07e43,0x4(%esp)
 827d143:	08 
 827d144:	89 04 24             	mov    %eax,(%esp)
 827d147:	e8 3a 29 01 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 827d14c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 827d153:	00 
 827d154:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d158:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d15b:	89 04 24             	mov    %eax,(%esp)
 827d15e:	e8 c3 ba e4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 827d163:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d166:	89 04 24             	mov    %eax,(%esp)
 827d169:	e8 d8 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d16e:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 827d175:	00 
 827d176:	89 04 24             	mov    %eax,(%esp)
 827d179:	e8 d8 ba e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827d17e:	8b 45 08             	mov    0x8(%ebp),%eax
 827d181:	89 04 24             	mov    %eax,(%esp)
 827d184:	e8 0d bb e4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 827d189:	89 c3                	mov    %eax,%ebx
 827d18b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d18e:	89 04 24             	mov    %eax,(%esp)
 827d191:	e8 b0 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d196:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d19a:	89 04 24             	mov    %eax,(%esp)
 827d19d:	e8 b4 ba e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827d1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 827d1a5:	89 04 24             	mov    %eax,(%esp)
 827d1a8:	e8 c1 d1 e5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 827d1ad:	89 c3                	mov    %eax,%ebx
 827d1af:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d1b2:	89 04 24             	mov    %eax,(%esp)
 827d1b5:	e8 8c ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d1ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d1be:	89 04 24             	mov    %eax,(%esp)
 827d1c1:	e8 cc 50 e6 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 827d1c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d1c9:	89 04 24             	mov    %eax,(%esp)
 827d1cc:	e8 75 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d1d1:	8b 55 0c             	mov    0xc(%ebp),%edx
 827d1d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d1d8:	89 04 24             	mov    %eax,(%esp)
 827d1db:	e8 76 ba e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827d1e0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d1e3:	89 04 24             	mov    %eax,(%esp)
 827d1e6:	e8 5b ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d1eb:	8b 55 10             	mov    0x10(%ebp),%edx
 827d1ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d1f2:	89 04 24             	mov    %eax,(%esp)
 827d1f5:	e8 7c 50 e6 ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 827d1fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d1fd:	89 04 24             	mov    %eax,(%esp)
 827d200:	e8 41 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d205:	8b 55 14             	mov    0x14(%ebp),%edx
 827d208:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d20c:	89 04 24             	mov    %eax,(%esp)
 827d20f:	e8 62 50 e6 ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 827d214:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d217:	89 04 24             	mov    %eax,(%esp)
 827d21a:	e8 27 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d21f:	8b 55 18             	mov    0x18(%ebp),%edx
 827d222:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d226:	89 04 24             	mov    %eax,(%esp)
 827d229:	e8 28 ba e4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 827d22e:	8b 45 0c             	mov    0xc(%ebp),%eax
 827d231:	89 04 24             	mov    %eax,(%esp)
 827d234:	e8 bc fe ff ff       	call   827d0f5 <_ZN23premium_helper_function17get_target_serverEi>
 827d239:	89 c3                	mov    %eax,%ebx
 827d23b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d23e:	89 04 24             	mov    %eax,(%esp)
 827d241:	e8 00 ba e4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 827d246:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827d24a:	89 04 24             	mov    %eax,(%esp)
 827d24d:	e8 40 50 e6 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 827d252:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 827d257:	8d 55 f0             	lea    -0x10(%ebp),%edx
 827d25a:	89 54 24 08          	mov    %edx,0x8(%esp)
 827d25e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 827d265:	00 
 827d266:	89 04 24             	mov    %eax,(%esp)
 827d269:	e8 70 3d 2f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 827d26e:	eb 1b                	jmp    827d28b <_ZN23premium_helper_function7send_dbEP5CUserilli+0x164>
 827d270:	89 d3                	mov    %edx,%ebx
 827d272:	89 c6                	mov    %eax,%esi
 827d274:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d277:	89 04 24             	mov    %eax,(%esp)
 827d27a:	e8 53 f6 39 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827d27f:	89 f0                	mov    %esi,%eax
 827d281:	89 da                	mov    %ebx,%edx
 827d283:	89 04 24             	mov    %eax,(%esp)
 827d286:	e8 c5 64 86 00       	call   8ae3750 <_Unwind_Resume>
 827d28b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 827d28e:	89 04 24             	mov    %eax,(%esp)
 827d291:	e8 3c f6 39 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 827d296:	83 c4 20             	add    $0x20,%esp
 827d299:	5b                   	pop    %ebx
 827d29a:	5e                   	pop    %esi
 827d29b:	5d                   	pop    %ebp
 827d29c:	c3                   	ret

```

```c
// premium_helper_function::send_db @ 0x827d127

/* premium_helper_function::send_db(CUser*, int, long, long, int) */

void premium_helper_function::send_db
               (CUser *param_1,int param_2,long param_3,long param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0x295);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0827d179 to 0827d26d has its CatchHandler @ 0827d270 */
  CStreamGuard::operator<<(pCVar2,0x54);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = CUser::get_acc_id(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  uVar4 = get_target_server(param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

---

## write_log

```asm
// === 0827d2df premium_helper_function::write_log  [0x0827d2df-0x827d3db] ===
 827d2df:	55                   	push   %ebp
 827d2e0:	89 e5                	mov    %esp,%ebp
 827d2e2:	56                   	push   %esi
 827d2e3:	53                   	push   %ebx
 827d2e4:	83 ec 20             	sub    $0x20,%esp
 827d2e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 827d2ea:	83 f8 53             	cmp    $0x53,%eax
 827d2ed:	74 0f                	je     827d2fe <_ZN23premium_helper_function9write_logEP5CUseri+0x1f>
 827d2ef:	83 f8 57             	cmp    $0x57,%eax
 827d2f2:	74 0a                	je     827d2fe <_ZN23premium_helper_function9write_logEP5CUseri+0x1f>
 827d2f4:	83 f8 08             	cmp    $0x8,%eax
 827d2f7:	74 20                	je     827d319 <_ZN23premium_helper_function9write_logEP5CUseri+0x3a>
 827d2f9:	e9 d7 00 00 00       	jmp    827d3d5 <_ZN23premium_helper_function9write_logEP5CUseri+0xf6>
 827d2fe:	8b 45 08             	mov    0x8(%ebp),%eax
 827d301:	89 04 24             	mov    %eax,(%esp)
 827d304:	e8 19 c7 40 00       	call   8689a22 <_ZN5CUser22ReCalcChattingEmoticonEv>
 827d309:	8b 45 08             	mov    0x8(%ebp),%eax
 827d30c:	89 04 24             	mov    %eax,(%esp)
 827d30f:	e8 7c c8 40 00       	call   8689b90 <_ZN5CUser20SendChattingEmoticonEv>
 827d314:	e9 bc 00 00 00       	jmp    827d3d5 <_ZN23premium_helper_function9write_logEP5CUseri+0xf6>
 827d319:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d31c:	89 04 24             	mov    %eax,(%esp)
 827d31f:	e8 28 0a 31 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 827d324:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 827d32b:	00 
 827d32c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827d333:	00 
 827d334:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d337:	89 04 24             	mov    %eax,(%esp)
 827d33a:	e8 bd e5 e4 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 827d33f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 827d346:	00 
 827d347:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d34a:	89 04 24             	mov    %eax,(%esp)
 827d34d:	e8 ce e5 e4 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 827d352:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827d359:	00 
 827d35a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d35d:	89 04 24             	mov    %eax,(%esp)
 827d360:	e8 3f cb e5 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 827d365:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d368:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 827d36f:	00 
 827d370:	89 44 24 04          	mov    %eax,0x4(%esp)
 827d374:	8b 45 08             	mov    0x8(%ebp),%eax
 827d377:	89 04 24             	mov    %eax,(%esp)
 827d37a:	e8 cf d0 3d 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 827d37f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 827d386:	00 
 827d387:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d38a:	89 04 24             	mov    %eax,(%esp)
 827d38d:	e8 c6 e5 e4 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 827d392:	e8 10 d0 e5 ff       	call   80da3a7 <_Z11G_GameWorldv>
 827d397:	8b 55 08             	mov    0x8(%ebp),%edx
 827d39a:	89 54 24 08          	mov    %edx,0x8(%esp)
 827d39e:	8d 55 ec             	lea    -0x14(%ebp),%edx
 827d3a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 827d3a5:	89 04 24             	mov    %eax,(%esp)
 827d3a8:	e8 af 75 eb ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 827d3ad:	eb 1b                	jmp    827d3ca <_ZN23premium_helper_function9write_logEP5CUseri+0xeb>
 827d3af:	89 d3                	mov    %edx,%ebx
 827d3b1:	89 c6                	mov    %eax,%esi
 827d3b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d3b6:	89 04 24             	mov    %eax,(%esp)
 827d3b9:	e8 c2 0a 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827d3be:	89 f0                	mov    %esi,%eax
 827d3c0:	89 da                	mov    %ebx,%edx
 827d3c2:	89 04 24             	mov    %eax,(%esp)
 827d3c5:	e8 86 63 86 00       	call   8ae3750 <_Unwind_Resume>
 827d3ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 827d3cd:	89 04 24             	mov    %eax,(%esp)
 827d3d0:	e8 ab 0a 31 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 827d3d5:	83 c4 20             	add    $0x20,%esp
 827d3d8:	5b                   	pop    %ebx
 827d3d9:	5e                   	pop    %esi
 827d3da:	5d                   	pop    %ebp
 827d3db:	c3                   	ret

```

```c
// premium_helper_function::write_log @ 0x827d2df

/* premium_helper_function::write_log(CUser*, int) */

void premium_helper_function::write_log(CUser *param_1,int param_2)

{
  GameWorld *this;
  PacketGuard local_18 [12];
  
  if ((param_2 == 0x53) || (param_2 == 0x57)) {
    CUser::ReCalcChattingEmoticon(param_1);
    CUser::SendChattingEmoticon(param_1);
  }
  else if (param_2 == 8) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0827d33a to 0827d3ac has its CatchHandler @ 0827d3af */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```


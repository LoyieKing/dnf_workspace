# APSystem__Dispatcher_GetTodayReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081251da APSystem::Dispatcher_GetTodayReward::dispatch_sig  [0x081251da-0x812525c] ===
 81251da:	55                   	push   %ebp
 81251db:	89 e5                	mov    %esp,%ebp
 81251dd:	83 ec 28             	sub    $0x28,%esp
 81251e0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81251e4:	74 1f                	je     8125205 <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81251e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81251e9:	89 04 24             	mov    %eax,(%esp)
 81251ec:	e8 9b 51 fb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81251f1:	83 f8 02             	cmp    $0x2,%eax
 81251f4:	7e 0f                	jle    8125205 <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 81251f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81251f9:	89 04 24             	mov    %eax,(%esp)
 81251fc:	e8 31 b2 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8125201:	85 c0                	test   %eax,%eax
 8125203:	75 07                	jne    812520c <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8125205:	b8 01 00 00 00       	mov    $0x1,%eax
 812520a:	eb 05                	jmp    8125211 <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x37>
 812520c:	b8 00 00 00 00       	mov    $0x0,%eax
 8125211:	84 c0                	test   %al,%al
 8125213:	74 07                	je     812521c <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x42>
 8125215:	b8 87 02 00 00       	mov    $0x287,%eax
 812521a:	eb 3f                	jmp    812525b <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x81>
 812521c:	8d 45 f3             	lea    -0xd(%ebp),%eax
 812521f:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8125226:	00 
 8125227:	89 44 24 04          	mov    %eax,0x4(%esp)
 812522b:	8b 45 10             	mov    0x10(%ebp),%eax
 812522e:	89 04 24             	mov    %eax,(%esp)
 8125231:	e8 7c 81 46 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8125236:	83 f0 01             	xor    $0x1,%eax
 8125239:	84 c0                	test   %al,%al
 812523b:	74 07                	je     8125244 <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x6a>
 812523d:	b8 8b 02 00 00       	mov    $0x28b,%eax
 8125242:	eb 17                	jmp    812525b <_ZN8APSystem25Dispatcher_GetTodayReward12dispatch_sigEP5CUserR9PacketBuf+0x81>
 8125244:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8125247:	89 44 24 04          	mov    %eax,0x4(%esp)
 812524b:	8b 45 0c             	mov    0xc(%ebp),%eax
 812524e:	89 04 24             	mov    %eax,(%esp)
 8125251:	e8 06 d3 ff ff       	call   812255c <_ZN8APSystem9CUserProc27GetTodayRewardAndSendPostalEP5CUserNS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE>
 8125256:	b8 00 00 00 00       	mov    $0x0,%eax
 812525b:	c9                   	leave
 812525c:	c3                   	ret

```

```c
// APSystem::Dispatcher_GetTodayReward::dispatch_sig @ 0x81251da

/* APSystem::Dispatcher_GetTodayReward::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
APSystem::Dispatcher_GetTodayReward::dispatch_sig
          (Dispatcher_GetTodayReward *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char local_11;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUser::get_state(param_1);
    if (2 < iVar3) {
      iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar3 != 0) {
        bVar1 = false;
        goto LAB_08125211;
      }
    }
  }
  bVar1 = true;
LAB_08125211:
  if (bVar1) {
    uVar4 = 0x287;
  }
  else {
    cVar2 = PacketBuf::get_binary(param_2,&local_11,5);
    if (cVar2 == '\x01') {
      CUserProc::GetTodayRewardAndSendPostal(param_1,local_10);
      uVar4 = 0;
    }
    else {
      uVar4 = 0x28b;
    }
  }
  return uVar4;
}

```


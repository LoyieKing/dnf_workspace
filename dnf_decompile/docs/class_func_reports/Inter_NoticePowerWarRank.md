# Inter_NoticePowerWarRank

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4f46 Inter_NoticePowerWarRank::dispatch_sig  [0x084d4f46-0x84d4fcd] ===
 84d4f46:	55                   	push   %ebp
 84d4f47:	89 e5                	mov    %esp,%ebp
 84d4f49:	57                   	push   %edi
 84d4f4a:	56                   	push   %esi
 84d4f4b:	53                   	push   %ebx
 84d4f4c:	83 ec 4c             	sub    $0x4c,%esp
 84d4f4f:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4f52:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84d4f55:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d4f58:	8b 78 12             	mov    0x12(%eax),%edi
 84d4f5b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d4f5e:	8b 70 0e             	mov    0xe(%eax),%esi
 84d4f61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d4f64:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d4f67:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d4f6e:	00 
 84d4f6f:	c7 44 24 08 8e 36 00 	movl   $0x368e,0x8(%esp)
 84d4f76:	00 
 84d4f77:	c7 44 24 04 a0 c7 c8 	movl   $0x8c8c7a0,0x4(%esp)
 84d4f7e:	08 
 84d4f7f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d4f82:	89 04 24             	mov    %eax,(%esp)
 84d4f85:	e8 8e a7 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d4f8a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d4f8e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84d4f92:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d4f96:	c7 44 24 04 a4 90 c8 	movl   $0x8c890a4,0x4(%esp)
 84d4f9d:	08 
 84d4f9e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d4fa1:	89 04 24             	mov    %eax,(%esp)
 84d4fa4:	e8 df a7 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d4fa9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d4fac:	8d 50 0a             	lea    0xa(%eax),%edx
 84d4faf:	a1 50 be 40 09       	mov    0x940be50,%eax
 84d4fb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4fb8:	89 04 24             	mov    %eax,(%esp)
 84d4fbb:	e8 2c 9c fa ff       	call   847ebec <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj>
 84d4fc0:	b8 00 00 00 00       	mov    $0x0,%eax
 84d4fc5:	83 c4 4c             	add    $0x4c,%esp
 84d4fc8:	5b                   	pop    %ebx
 84d4fc9:	5e                   	pop    %esi
 84d4fca:	5f                   	pop    %edi
 84d4fcb:	5d                   	pop    %ebp
 84d4fcc:	c3                   	ret
 84d4fcd:	90                   	nop

```

```c
// Inter_NoticePowerWarRank::dispatch_sig @ 0x84d4f46

/* Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarRank::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x12);
  uVar2 = *(undefined4 *)(param_3 + 0xe);
  uVar3 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int)",0x368e
                     ,0);
  cMyTrace::operator()
            (local_30,"RECV Packet_Notice_Power_War_Rank ranker 1:%d, 2:%d, 3:%d",uVar3,uVar2,uVar1)
  ;
  CPowerManager::SetPowerWarUserRankingInfo(GlobalData::s_power_manager,(uint *)(local_20 + 10));
  return 0;
}

```


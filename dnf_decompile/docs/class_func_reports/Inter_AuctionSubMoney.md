# Inter_AuctionSubMoney

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8004 Inter_AuctionSubMoney::dispatch_sig  [0x084e8004-0x84e8063] ===
 84e8004:	55                   	push   %ebp
 84e8005:	89 e5                	mov    %esp,%ebp
 84e8007:	56                   	push   %esi
 84e8008:	53                   	push   %ebx
 84e8009:	83 ec 30             	sub    $0x30,%esp
 84e800c:	8b 45 10             	mov    0x10(%ebp),%eax
 84e800f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8012:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e8016:	74 3f                	je     84e8057 <_ZN21Inter_AuctionSubMoney12dispatch_sigEP5CUserPci+0x53>
 84e8018:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e801b:	8b 40 04             	mov    0x4(%eax),%eax
 84e801e:	89 c6                	mov    %eax,%esi
 84e8020:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8023:	8b 18                	mov    (%eax),%ebx
 84e8025:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8028:	89 04 24             	mov    %eax,(%esp)
 84e802b:	e8 2a 19 c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84e8030:	89 74 24 14          	mov    %esi,0x14(%esp)
 84e8034:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e8038:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e803f:	00 
 84e8040:	c7 44 24 08 d3 02 00 	movl   $0x2d3,0x8(%esp)
 84e8047:	00 
 84e8048:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e804b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e804f:	89 04 24             	mov    %eax,(%esp)
 84e8052:	e8 27 0c c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84e8057:	b8 00 00 00 00       	mov    $0x0,%eax
 84e805c:	83 c4 30             	add    $0x30,%esp
 84e805f:	5b                   	pop    %ebx
 84e8060:	5e                   	pop    %esi
 84e8061:	5d                   	pop    %ebp
 84e8062:	c3                   	ret
 84e8063:	90                   	nop

```

```c
// Inter_AuctionSubMoney::dispatch_sig @ 0x84e8004

/* Inter_AuctionSubMoney::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionSubMoney::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CHackAnalyzer *pCVar3;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
    uVar2 = *(undefined4 *)param_3;
    pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar3,param_2,0x2d3,1,uVar2,uVar1);
  }
  return 0;
}

```


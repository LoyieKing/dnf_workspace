# TaoCrypt__ModularArithmetic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Accumulate

```asm
// === 0875ffc0 TaoCrypt::ModularArithmetic::Accumulate  [0x0875ffc0-0x87600df] ===
 875ffc0:	55                   	push   %ebp
 875ffc1:	89 e5                	mov    %esp,%ebp
 875ffc3:	83 ec 38             	sub    $0x38,%esp
 875ffc6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ffc9:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ffcc:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ffcf:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ffd2:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ffd5:	8b 55 10             	mov    0x10(%ebp),%edx
 875ffd8:	e8 1b 2e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ffdd:	81 c3 bb cb c0 00    	add    $0xc0cbbb,%ebx
 875ffe3:	8b 06                	mov    (%esi),%eax
 875ffe5:	3b 47 0c             	cmp    0xc(%edi),%eax
 875ffe8:	74 3e                	je     8760028 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0x68>
 875ffea:	83 c7 0c             	add    $0xc,%edi
 875ffed:	89 54 24 04          	mov    %edx,0x4(%esp)
 875fff1:	89 34 24             	mov    %esi,(%esp)
 875fff4:	e8 e7 fd ff ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 875fff9:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875fffd:	89 34 24             	mov    %esi,(%esp)
 8760000:	e8 1b d2 ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8760005:	85 c0                	test   %eax,%eax
 8760007:	78 0c                	js     8760015 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0x55>
 8760009:	89 7c 24 04          	mov    %edi,0x4(%esp)
 876000d:	89 34 24             	mov    %esi,(%esp)
 8760010:	e8 ab fc ff ff       	call   875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>
 8760015:	89 f0                	mov    %esi,%eax
 8760017:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876001a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876001d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760020:	89 ec                	mov    %ebp,%esp
 8760022:	5d                   	pop    %ebp
 8760023:	c3                   	ret
 8760024:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760028:	3b 02                	cmp    (%edx),%eax
 876002a:	75 be                	jne    875ffea <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0x2a>
 876002c:	8b 4e 04             	mov    0x4(%esi),%ecx
 876002f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8760033:	8b 42 04             	mov    0x4(%edx),%eax
 8760036:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 876003a:	89 44 24 08          	mov    %eax,0x8(%esp)
 876003e:	89 0c 24             	mov    %ecx,(%esp)
 8760041:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 8760047:	85 c0                	test   %eax,%eax
 8760049:	75 7d                	jne    87600c8 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0x108>
 876004b:	8b 06                	mov    (%esi),%eax
 876004d:	8b 7f 10             	mov    0x10(%edi),%edi
 8760050:	89 75 d8             	mov    %esi,-0x28(%ebp)
 8760053:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8760056:	8b 46 04             	mov    0x4(%esi),%eax
 8760059:	89 7d dc             	mov    %edi,-0x24(%ebp)
 876005c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 876005f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8760062:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8760065:	8d 14 85 fc ff ff ff 	lea    -0x4(,%eax,4),%edx
 876006c:	01 d1                	add    %edx,%ecx
 876006e:	01 fa                	add    %edi,%edx
 8760070:	85 c0                	test   %eax,%eax
 8760072:	74 2c                	je     87600a0 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0xe0>
 8760074:	8b 39                	mov    (%ecx),%edi
 8760076:	83 e8 01             	sub    $0x1,%eax
 8760079:	8b 32                	mov    (%edx),%esi
 876007b:	39 f7                	cmp    %esi,%edi
 876007d:	77 21                	ja     87600a0 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0xe0>
 876007f:	83 e9 04             	sub    $0x4,%ecx
 8760082:	83 ea 04             	sub    $0x4,%edx
 8760085:	39 f7                	cmp    %esi,%edi
 8760087:	73 e7                	jae    8760070 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0xb0>
 8760089:	8b 75 d8             	mov    -0x28(%ebp),%esi
 876008c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876008f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760092:	89 f0                	mov    %esi,%eax
 8760094:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760097:	89 ec                	mov    %ebp,%esp
 8760099:	5d                   	pop    %ebp
 876009a:	c3                   	ret
 876009b:	90                   	nop
 876009c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87600a0:	8b 75 d8             	mov    -0x28(%ebp),%esi
 87600a3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87600a6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87600aa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87600ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 87600b1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 87600b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87600b8:	89 04 24             	mov    %eax,(%esp)
 87600bb:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 87600c1:	e9 4f ff ff ff       	jmp    8760015 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0x55>
 87600c6:	66 90                	xchg   %ax,%ax
 87600c8:	8b 06                	mov    (%esi),%eax
 87600ca:	8b 7f 10             	mov    0x10(%edi),%edi
 87600cd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87600d0:	8b 46 04             	mov    0x4(%esi),%eax
 87600d3:	89 7d dc             	mov    %edi,-0x24(%ebp)
 87600d6:	89 45 e0             	mov    %eax,-0x20(%ebp)
 87600d9:	eb c8                	jmp    87600a3 <_ZNK8TaoCrypt17ModularArithmetic10AccumulateERNS_7IntegerERKS1_+0xe3>
 87600db:	90                   	nop
 87600dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::ModularArithmetic::Accumulate @ 0x875ffc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Accumulate(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Accumulate(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int local_28;
  int local_24;
  int local_20;
  
  iVar3 = *(int *)param_1;
  if ((iVar3 == *(int *)(this + 0xc)) && (iVar3 == *(int *)param_2)) {
    iVar3 = (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar3);
    if (iVar3 == 0) {
      local_20 = *(int *)param_1;
      local_28 = *(int *)(this + 0x10);
      local_24 = *(int *)(param_1 + 4);
      iVar3 = local_20 * 4 + -4;
      puVar4 = (uint *)(local_24 + iVar3);
      puVar5 = (uint *)(iVar3 + local_28);
      iVar3 = local_20;
      while (iVar3 != 0) {
        uVar1 = *puVar4;
        iVar3 = iVar3 + -1;
        uVar2 = *puVar5;
        if (uVar2 < uVar1) break;
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
        if (uVar1 < uVar2) {
          return param_1;
        }
      }
    }
    else {
      local_20 = *(int *)param_1;
      local_28 = *(int *)(this + 0x10);
      local_24 = *(int *)(param_1 + 4);
    }
    (*s_pSub)(local_24,local_24,local_28,local_20);
  }
  else {
    Integer::operator+=(param_1,param_2);
    iVar3 = Integer::Compare(param_1,(Integer *)(this + 0xc));
    if (-1 < iVar3) {
      Integer::operator-=(param_1,(Integer *)(this + 0xc));
    }
  }
  return param_1;
}

```

---

## Add

```asm
// === 087606a0 TaoCrypt::ModularArithmetic::Add  [0x087606a0-0x876081f] ===
 87606a0:	55                   	push   %ebp
 87606a1:	89 e5                	mov    %esp,%ebp
 87606a3:	57                   	push   %edi
 87606a4:	56                   	push   %esi
 87606a5:	53                   	push   %ebx
 87606a6:	83 ec 4c             	sub    $0x4c,%esp
 87606a9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87606ac:	8b 75 08             	mov    0x8(%ebp),%esi
 87606af:	e8 44 27 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87606b4:	81 c3 e4 c4 c0 00    	add    $0xc0c4e4,%ebx
 87606ba:	8b 55 10             	mov    0x10(%ebp),%edx
 87606bd:	8b 07                	mov    (%edi),%eax
 87606bf:	3b 46 0c             	cmp    0xc(%esi),%eax
 87606c2:	0f 84 88 00 00 00    	je     8760750 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0xb0>
 87606c8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 87606cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 87606cf:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87606d3:	8d 7e 2c             	lea    0x2c(%esi),%edi
 87606d6:	83 c6 0c             	add    $0xc,%esi
 87606d9:	89 04 24             	mov    %eax,(%esp)
 87606dc:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87606df:	e8 cc fa ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 87606e4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87606e7:	83 ec 04             	sub    $0x4,%esp
 87606ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 87606ee:	89 3c 24             	mov    %edi,(%esp)
 87606f1:	e8 6a fd ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87606f6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87606f9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87606fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760703:	00 
 8760704:	c1 e0 02             	shl    $0x2,%eax
 8760707:	89 14 24             	mov    %edx,(%esp)
 876070a:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 876070d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760711:	e8 aa d5 91 ff       	call   807dcc0 <memset@plt>
 8760716:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8760719:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876071e:	89 14 24             	mov    %edx,(%esp)
 8760721:	e8 fa 6f 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760726:	89 74 24 04          	mov    %esi,0x4(%esp)
 876072a:	89 3c 24             	mov    %edi,(%esp)
 876072d:	e8 ee ca ff ff       	call   875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>
 8760732:	85 c0                	test   %eax,%eax
 8760734:	78 0c                	js     8760742 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0xa2>
 8760736:	89 74 24 04          	mov    %esi,0x4(%esp)
 876073a:	89 3c 24             	mov    %edi,(%esp)
 876073d:	e8 7e f5 ff ff       	call   875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>
 8760742:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8760745:	89 f8                	mov    %edi,%eax
 8760747:	5b                   	pop    %ebx
 8760748:	5e                   	pop    %esi
 8760749:	5f                   	pop    %edi
 876074a:	5d                   	pop    %ebp
 876074b:	c3                   	ret
 876074c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760750:	3b 02                	cmp    (%edx),%eax
 8760752:	0f 85 70 ff ff ff    	jne    87606c8 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x28>
 8760758:	89 44 24 0c          	mov    %eax,0xc(%esp)
 876075c:	8b 42 04             	mov    0x4(%edx),%eax
 876075f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760763:	8b 47 04             	mov    0x4(%edi),%eax
 8760766:	89 44 24 04          	mov    %eax,0x4(%esp)
 876076a:	8b 46 20             	mov    0x20(%esi),%eax
 876076d:	89 04 24             	mov    %eax,(%esp)
 8760770:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 8760776:	85 c0                	test   %eax,%eax
 8760778:	0f 85 82 00 00 00    	jne    8760800 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x160>
 876077e:	8b 46 10             	mov    0x10(%esi),%eax
 8760781:	8b 3f                	mov    (%edi),%edi
 8760783:	89 75 c8             	mov    %esi,-0x38(%ebp)
 8760786:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8760789:	8b 46 20             	mov    0x20(%esi),%eax
 876078c:	8d 14 bd fc ff ff ff 	lea    -0x4(,%edi,4),%edx
 8760793:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8760796:	89 c1                	mov    %eax,%ecx
 8760798:	01 d1                	add    %edx,%ecx
 876079a:	03 55 cc             	add    -0x34(%ebp),%edx
 876079d:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87607a0:	89 f8                	mov    %edi,%eax
 87607a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87607a8:	85 c0                	test   %eax,%eax
 87607aa:	74 2c                	je     87607d8 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x138>
 87607ac:	8b 39                	mov    (%ecx),%edi
 87607ae:	83 e8 01             	sub    $0x1,%eax
 87607b1:	8b 32                	mov    (%edx),%esi
 87607b3:	39 f7                	cmp    %esi,%edi
 87607b5:	77 21                	ja     87607d8 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x138>
 87607b7:	83 e9 04             	sub    $0x4,%ecx
 87607ba:	83 ea 04             	sub    $0x4,%edx
 87607bd:	39 f7                	cmp    %esi,%edi
 87607bf:	73 e7                	jae    87607a8 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x108>
 87607c1:	8b 75 c8             	mov    -0x38(%ebp),%esi
 87607c4:	8d 7e 1c             	lea    0x1c(%esi),%edi
 87607c7:	8d 65 f4             	lea    -0xc(%ebp),%esp
 87607ca:	89 f8                	mov    %edi,%eax
 87607cc:	5b                   	pop    %ebx
 87607cd:	5e                   	pop    %esi
 87607ce:	5f                   	pop    %edi
 87607cf:	5d                   	pop    %ebp
 87607d0:	c3                   	ret
 87607d1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87607d8:	8b 75 c8             	mov    -0x38(%ebp),%esi
 87607db:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87607de:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87607e2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 87607e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 87607e9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87607ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 87607f0:	89 04 24             	mov    %eax,(%esp)
 87607f3:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 87607f9:	eb c9                	jmp    87607c4 <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x124>
 87607fb:	90                   	nop
 87607fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8760800:	8b 46 10             	mov    0x10(%esi),%eax
 8760803:	8b 3f                	mov    (%edi),%edi
 8760805:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8760808:	8b 46 20             	mov    0x20(%esi),%eax
 876080b:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 876080e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8760811:	89 f8                	mov    %edi,%eax
 8760813:	eb c9                	jmp    87607de <_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_+0x13e>
 8760815:	90                   	nop
 8760816:	8d 76 00             	lea    0x0(%esi),%esi
 8760819:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::ModularArithmetic::Add @ 0x87606a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Add(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Add(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int local_38;
  int local_34;
  int local_2c;
  void *local_28;
  
  iVar2 = *(int *)param_1;
  if ((iVar2 != *(int *)(this + 0xc)) || (iVar2 != *(int *)param_2)) {
    this_00 = (Integer *)(this + 0x2c);
    Integer::Plus((Integer *)&local_2c);
    Integer::operator=(this_00,(Integer *)&local_2c);
    uVar6 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar6 & 0xffffff00);
    iVar2 = Integer::Compare(this_00,(Integer *)(this + 0xc));
    if (-1 < iVar2) {
      Integer::operator-=(this_00,(Integer *)(this + 0xc));
    }
    return this_00;
  }
  iVar2 = (*s_pAdd)(*(undefined4 *)(this + 0x20),*(undefined4 *)(param_1 + 4),
                    *(undefined4 *)(param_2 + 4),iVar2);
  if (iVar2 == 0) {
    local_38 = *(int *)(this + 0x10);
    iVar2 = *(int *)param_1;
    local_34 = *(int *)(this + 0x20);
    iVar3 = iVar2 * 4 + -4;
    puVar4 = (uint *)(local_34 + iVar3);
    puVar5 = (uint *)(iVar3 + local_38);
    iVar3 = iVar2;
    do {
      if (iVar3 == 0) goto LAB_087607de;
      uVar6 = *puVar4;
      iVar3 = iVar3 + -1;
      uVar1 = *puVar5;
      if (uVar1 < uVar6) goto LAB_087607de;
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
    } while (uVar1 <= uVar6);
  }
  else {
    local_38 = *(int *)(this + 0x10);
    iVar2 = *(int *)param_1;
    local_34 = *(int *)(this + 0x20);
LAB_087607de:
    (*s_pSub)(local_34,local_34,local_38,iVar2);
  }
  return (Integer *)(this + 0x1c);
}

```

---

## CascadeExponentiate

```asm
// === 08762d40 TaoCrypt::ModularArithmetic::CascadeExponentiate  [0x08762d40-0x876314f] ===
 8762d40:	55                   	push   %ebp
 8762d41:	89 e5                	mov    %esp,%ebp
 8762d43:	57                   	push   %edi
 8762d44:	56                   	push   %esi
 8762d45:	53                   	push   %ebx
 8762d46:	e8 ad 00 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8762d4b:	81 c3 4d 9e c0 00    	add    $0xc09e4d,%ebx
 8762d51:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 8762d57:	8b 75 0c             	mov    0xc(%ebp),%esi
 8762d5a:	8b 7d 18             	mov    0x18(%ebp),%edi
 8762d5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762d64:	00 
 8762d65:	8d 56 0c             	lea    0xc(%esi),%edx
 8762d68:	89 14 24             	mov    %edx,(%esp)
 8762d6b:	89 95 10 ff ff ff    	mov    %edx,-0xf0(%ebp)
 8762d71:	e8 0a a3 ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 8762d76:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8762d7c:	84 c0                	test   %al,%al
 8762d7e:	75 38                	jne    8762db8 <_ZNK8TaoCrypt17ModularArithmetic19CascadeExponentiateERKNS_7IntegerES3_S3_S3_+0x78>
 8762d80:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8762d83:	8b 45 14             	mov    0x14(%ebp),%eax
 8762d86:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8762d8a:	89 74 24 04          	mov    %esi,0x4(%esp)
 8762d8e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8762d92:	8b 55 10             	mov    0x10(%ebp),%edx
 8762d95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8762d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8762d9c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762da0:	89 04 24             	mov    %eax,(%esp)
 8762da3:	e8 98 1a 04 00       	call   87a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>
 8762da8:	8b 45 08             	mov    0x8(%ebp),%eax
 8762dab:	83 ec 04             	sub    $0x4,%esp
 8762dae:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8762db1:	5b                   	pop    %ebx
 8762db2:	5e                   	pop    %esi
 8762db3:	5f                   	pop    %edi
 8762db4:	5d                   	pop    %ebp
 8762db5:	c2 04 00             	ret    $0x4
 8762db8:	8d b5 20 ff ff ff    	lea    -0xe0(%ebp),%esi
 8762dbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8762dc2:	89 34 24             	mov    %esi,(%esp)
 8762dc5:	e8 46 cb ff ff       	call   875f910 <_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE>
 8762dca:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8762dd0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762dd4:	8d 7d 98             	lea    -0x68(%ebp),%edi
 8762dd7:	89 3c 24             	mov    %edi,(%esp)
 8762dda:	c1 e0 05             	shl    $0x5,%eax
 8762ddd:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8762de3:	e8 88 c4 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762de8:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8762dee:	89 3c 24             	mov    %edi,(%esp)
 8762df1:	8d 7d a8             	lea    -0x58(%ebp),%edi
 8762df4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762df8:	e8 a3 bf ff ff       	call   875eda0 <_ZN8TaoCrypt7IntegerlSEj>
 8762dfd:	89 3c 24             	mov    %edi,(%esp)
 8762e00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762e04:	e8 67 c4 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762e09:	8b 45 98             	mov    -0x68(%ebp),%eax
 8762e0c:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8762e0f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762e16:	00 
 8762e17:	c1 e0 02             	shl    $0x2,%eax
 8762e1a:	89 14 24             	mov    %edx,(%esp)
 8762e1d:	89 95 10 ff ff ff    	mov    %edx,-0xf0(%ebp)
 8762e23:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762e27:	e8 94 ae 91 ff       	call   807dcc0 <memset@plt>
 8762e2c:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8762e32:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762e37:	89 14 24             	mov    %edx,(%esp)
 8762e3a:	e8 e1 48 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762e3f:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 8762e45:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8762e48:	89 95 10 ff ff ff    	mov    %edx,-0xf0(%ebp)
 8762e4e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762e52:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8762e58:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762e5c:	89 04 24             	mov    %eax,(%esp)
 8762e5f:	e8 bc f7 ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8762e64:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8762e67:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8762e6a:	c1 e0 02             	shl    $0x2,%eax
 8762e6d:	83 ec 04             	sub    $0x4,%esp
 8762e70:	89 3c 24             	mov    %edi,(%esp)
 8762e73:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762e77:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762e7e:	00 
 8762e7f:	e8 3c ae 91 ff       	call   807dcc0 <memset@plt>
 8762e84:	89 3c 24             	mov    %edi,(%esp)
 8762e87:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762e8c:	e8 8f 48 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762e91:	8b 45 10             	mov    0x10(%ebp),%eax
 8762e94:	8b bd 2c ff ff ff    	mov    -0xd4(%ebp),%edi
 8762e9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762e9e:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8762ea4:	89 04 24             	mov    %eax,(%esp)
 8762ea7:	c1 e7 05             	shl    $0x5,%edi
 8762eaa:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8762eb0:	e8 bb c3 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762eb5:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8762ebb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762ebf:	89 04 24             	mov    %eax,(%esp)
 8762ec2:	e8 d9 be ff ff       	call   875eda0 <_ZN8TaoCrypt7IntegerlSEj>
 8762ec7:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 8762eca:	89 0c 24             	mov    %ecx,(%esp)
 8762ecd:	89 8d 0c ff ff ff    	mov    %ecx,-0xf4(%ebp)
 8762ed3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762ed7:	e8 94 c3 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762edc:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8762ee2:	8b bd 7c ff ff ff    	mov    -0x84(%ebp),%edi
 8762ee8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762eef:	00 
 8762ef0:	c1 e0 02             	shl    $0x2,%eax
 8762ef3:	89 3c 24             	mov    %edi,(%esp)
 8762ef6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762efa:	e8 c1 ad 91 ff       	call   807dcc0 <memset@plt>
 8762eff:	89 3c 24             	mov    %edi,(%esp)
 8762f02:	8d 7d d8             	lea    -0x28(%ebp),%edi
 8762f05:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762f0a:	e8 11 48 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762f0f:	8b 8d 0c ff ff ff    	mov    -0xf4(%ebp),%ecx
 8762f15:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8762f1b:	89 3c 24             	mov    %edi,(%esp)
 8762f1e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8762f22:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762f26:	e8 f5 f6 ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8762f2b:	8b 45 88             	mov    -0x78(%ebp),%eax
 8762f2e:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8762f31:	c1 e0 02             	shl    $0x2,%eax
 8762f34:	89 95 10 ff ff ff    	mov    %edx,-0xf0(%ebp)
 8762f3a:	83 ec 04             	sub    $0x4,%esp
 8762f3d:	89 14 24             	mov    %edx,(%esp)
 8762f40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762f44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762f4b:	00 
 8762f4c:	e8 6f ad 91 ff       	call   807dcc0 <memset@plt>
 8762f51:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8762f57:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762f5c:	89 14 24             	mov    %edx,(%esp)
 8762f5f:	e8 bc 47 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762f64:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8762f67:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8762f6a:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8762f70:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8762f74:	89 74 24 04          	mov    %esi,0x4(%esp)
 8762f78:	89 54 24 14          	mov    %edx,0x14(%esp)
 8762f7c:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8762f82:	89 04 24             	mov    %eax,(%esp)
 8762f85:	89 54 24 10          	mov    %edx,0x10(%esp)
 8762f89:	8b 55 14             	mov    0x14(%ebp),%edx
 8762f8c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8762f90:	e8 ab 18 04 00       	call   87a4840 <_ZNK8TaoCrypt12AbstractRing19CascadeExponentiateERKNS_7IntegerES3_S3_S3_>
 8762f95:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8762f9b:	83 ec 04             	sub    $0x4,%esp
 8762f9e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762fa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8762fa5:	89 74 24 04          	mov    %esi,0x4(%esp)
 8762fa9:	89 04 24             	mov    %eax,(%esp)
 8762fac:	e8 cf c3 ff ff       	call   875f380 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE>
 8762fb1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8762fb4:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8762fb7:	c1 e0 02             	shl    $0x2,%eax
 8762fba:	83 ec 04             	sub    $0x4,%esp
 8762fbd:	89 34 24             	mov    %esi,(%esp)
 8762fc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762fc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762fcb:	00 
 8762fcc:	e8 ef ac 91 ff       	call   807dcc0 <memset@plt>
 8762fd1:	89 34 24             	mov    %esi,(%esp)
 8762fd4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762fd9:	e8 42 47 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762fde:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8762fe1:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8762fe4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762feb:	00 
 8762fec:	c1 e0 02             	shl    $0x2,%eax
 8762fef:	89 34 24             	mov    %esi,(%esp)
 8762ff2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762ff6:	e8 c5 ac 91 ff       	call   807dcc0 <memset@plt>
 8762ffb:	89 34 24             	mov    %esi,(%esp)
 8762ffe:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8763003:	e8 18 47 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763008:	8b 45 c8             	mov    -0x38(%ebp),%eax
 876300b:	8b 75 cc             	mov    -0x34(%ebp),%esi
 876300e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763015:	00 
 8763016:	c1 e0 02             	shl    $0x2,%eax
 8763019:	89 34 24             	mov    %esi,(%esp)
 876301c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8763020:	e8 9b ac 91 ff       	call   807dcc0 <memset@plt>
 8763025:	89 34 24             	mov    %esi,(%esp)
 8763028:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876302d:	e8 ee 46 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763032:	8b 83 d4 fa ff ff    	mov    -0x52c(%ebx),%eax
 8763038:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 876303e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763045:	00 
 8763046:	83 c0 08             	add    $0x8,%eax
 8763049:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 876304f:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8763055:	89 34 24             	mov    %esi,(%esp)
 8763058:	c1 e0 02             	shl    $0x2,%eax
 876305b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876305f:	e8 5c ac 91 ff       	call   807dcc0 <memset@plt>
 8763064:	89 34 24             	mov    %esi,(%esp)
 8763067:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876306c:	e8 af 46 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763071:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8763077:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
 876307d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763084:	00 
 8763085:	c1 e0 02             	shl    $0x2,%eax
 8763088:	89 34 24             	mov    %esi,(%esp)
 876308b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876308f:	e8 2c ac 91 ff       	call   807dcc0 <memset@plt>
 8763094:	89 34 24             	mov    %esi,(%esp)
 8763097:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876309c:	e8 7f 46 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87630a1:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 87630a7:	8b b5 50 ff ff ff    	mov    -0xb0(%ebp),%esi
 87630ad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87630b4:	00 
 87630b5:	83 c0 08             	add    $0x8,%eax
 87630b8:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 87630be:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 87630c4:	89 34 24             	mov    %esi,(%esp)
 87630c7:	c1 e0 02             	shl    $0x2,%eax
 87630ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 87630ce:	e8 ed ab 91 ff       	call   807dcc0 <memset@plt>
 87630d3:	89 34 24             	mov    %esi,(%esp)
 87630d6:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87630db:	e8 40 46 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87630e0:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 87630e6:	8b b5 40 ff ff ff    	mov    -0xc0(%ebp),%esi
 87630ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87630f3:	00 
 87630f4:	c1 e0 02             	shl    $0x2,%eax
 87630f7:	89 34 24             	mov    %esi,(%esp)
 87630fa:	89 44 24 08          	mov    %eax,0x8(%esp)
 87630fe:	e8 bd ab 91 ff       	call   807dcc0 <memset@plt>
 8763103:	89 34 24             	mov    %esi,(%esp)
 8763106:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876310b:	e8 10 46 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763110:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8763116:	8b b5 30 ff ff ff    	mov    -0xd0(%ebp),%esi
 876311c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8763123:	00 
 8763124:	c1 e0 02             	shl    $0x2,%eax
 8763127:	89 34 24             	mov    %esi,(%esp)
 876312a:	89 44 24 08          	mov    %eax,0x8(%esp)
 876312e:	e8 8d ab 91 ff       	call   807dcc0 <memset@plt>
 8763133:	89 34 24             	mov    %esi,(%esp)
 8763136:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 876313b:	e8 e0 45 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8763140:	8b 45 08             	mov    0x8(%ebp),%eax
 8763143:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8763146:	5b                   	pop    %ebx
 8763147:	5e                   	pop    %esi
 8763148:	5f                   	pop    %edi
 8763149:	5d                   	pop    %ebp
 876314a:	c2 04 00             	ret    $0x4
 876314d:	90                   	nop
 876314e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::ModularArithmetic::CascadeExponentiate @ 0x8762d40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::CascadeExponentiate(TaoCrypt::Integer const&, TaoCrypt::Integer
   const&, TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * TaoCrypt::ModularArithmetic::CascadeExponentiate
                    (Integer *param_1,Integer *param_2,Integer *param_3,Integer *param_4)

{
  char cVar1;
  uint uVar2;
  Integer *pIVar3;
  Integer *pIVar4;
  size_t __n;
  Integer *in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined *local_e4 [3];
  int local_d8;
  void *local_d4;
  int local_c8;
  void *local_c4;
  int local_b8;
  void *local_b4;
  int local_a8;
  void *local_a4;
  int local_98;
  void *local_94;
  int local_8c;
  void *local_88;
  int local_7c;
  void *local_78;
  int local_6c;
  void *local_68;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x8762d4b;
  cVar1 = Integer::GetBit(param_2 + 0xc,0);
  if (cVar1 == '\0') {
    AbstractRing::CascadeExponentiate(param_1,param_2,param_3,param_4);
    return param_1;
  }
  MontgomeryRepresentation::MontgomeryRepresentation
            ((MontgomeryRepresentation *)local_e4,param_2 + 0xc);
  uVar2 = local_d8 << 5;
  Integer::Integer((Integer *)&local_6c,in_stack_00000014);
  pIVar3 = (Integer *)Integer::operator<<=((Integer *)&local_6c,uVar2);
  Integer::Integer((Integer *)&local_5c,pIVar3);
  uVar2 = 0;
  memset(local_68,0,local_6c << 2);
  operator_delete__(local_68,uVar2 & 0xffffff00);
  pIVar3 = (Integer *)&local_3c;
  Integer::Modulo(pIVar3);
  uVar2 = 0;
  memset(local_58,0,local_5c << 2);
  operator_delete__(local_58,uVar2 & 0xffffff00);
  uVar2 = local_d8 << 5;
  Integer::Integer((Integer *)&local_8c,param_3);
  pIVar4 = (Integer *)Integer::operator<<=((Integer *)&local_8c,uVar2);
  Integer::Integer((Integer *)&local_7c,pIVar4);
  uVar2 = 0;
  memset(local_88,0,local_8c << 2);
  operator_delete__(local_88,uVar2 & 0xffffff00);
  Integer::Modulo((Integer *)&local_2c);
  uVar2 = 0;
  memset(local_78,0,local_7c << 2);
  operator_delete__(local_78,uVar2 & 0xffffff00);
  AbstractRing::CascadeExponentiate
            ((Integer *)&local_4c,(Integer *)local_e4,(Integer *)&local_2c,param_4);
  MontgomeryRepresentation::ConvertOut(param_1);
  __n = local_4c << 2;
  uVar2 = 0;
  memset(local_48,0,__n);
  operator_delete__(local_48,uVar2 & 0xffffff00,__n,param_4,pIVar3,in_stack_00000018);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  uVar2 = 0;
  local_e4[0] = PTR_vtable_0936c66c + 8;
  memset(local_94,0,local_98 << 2);
  operator_delete__(local_94,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_a4,0,local_a8 << 2);
  operator_delete__(local_a4,uVar2 & 0xffffff00);
  uVar2 = 0;
  local_e4[0] = PTR_vtable_0936c8e8 + 8;
  memset(local_b4,0,local_b8 << 2);
  operator_delete__(local_b4,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_c4,0,local_c8 << 2);
  operator_delete__(local_c4,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_d4,0,local_d8 << 2);
  operator_delete__(local_d4,uVar2 & 0xffffff00);
  return param_1;
}

```

---

## Half

```asm
// === 08760930 TaoCrypt::ModularArithmetic::Half  [0x08760930-0x8760b0f] ===
 8760930:	55                   	push   %ebp
 8760931:	89 e5                	mov    %esp,%ebp
 8760933:	57                   	push   %edi
 8760934:	56                   	push   %esi
 8760935:	53                   	push   %ebx
 8760936:	83 ec 7c             	sub    $0x7c,%esp
 8760939:	8b 75 0c             	mov    0xc(%ebp),%esi
 876093c:	8b 7d 08             	mov    0x8(%ebp),%edi
 876093f:	e8 b4 24 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8760944:	81 c3 54 c2 c0 00    	add    $0xc0c254,%ebx
 876094a:	8b 06                	mov    (%esi),%eax
 876094c:	3b 47 0c             	cmp    0xc(%edi),%eax
 876094f:	0f 84 83 01 00 00    	je     8760ad8 <_ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE+0x1a8>
 8760955:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876095c:	00 
 876095d:	89 34 24             	mov    %esi,(%esp)
 8760960:	e8 1b c7 ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 8760965:	84 c0                	test   %al,%al
 8760967:	0f 84 03 01 00 00    	je     8760a70 <_ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE+0x140>
 876096d:	8d 57 0c             	lea    0xc(%edi),%edx
 8760970:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8760973:	89 54 24 08          	mov    %edx,0x8(%esp)
 8760977:	89 74 24 04          	mov    %esi,0x4(%esp)
 876097b:	8d 75 a8             	lea    -0x58(%ebp),%esi
 876097e:	89 04 24             	mov    %eax,(%esp)
 8760981:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8760984:	e8 27 f8 ff ff       	call   87601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>
 8760989:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 876098c:	83 ec 04             	sub    $0x4,%esp
 876098f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760993:	89 34 24             	mov    %esi,(%esp)
 8760996:	e8 d5 e8 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 876099b:	89 34 24             	mov    %esi,(%esp)
 876099e:	8d 75 c8             	lea    -0x38(%ebp),%esi
 87609a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 87609a8:	00 
 87609a9:	e8 72 fe ff ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 87609ae:	89 34 24             	mov    %esi,(%esp)
 87609b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87609b5:	e8 b6 e8 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 87609ba:	8b 45 a8             	mov    -0x58(%ebp),%eax
 87609bd:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87609c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87609c7:	00 
 87609c8:	c1 e0 02             	shl    $0x2,%eax
 87609cb:	89 14 24             	mov    %edx,(%esp)
 87609ce:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 87609d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 87609d5:	e8 e6 d2 91 ff       	call   807dcc0 <memset@plt>
 87609da:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 87609dd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87609e2:	89 14 24             	mov    %edx,(%esp)
 87609e5:	e8 36 6d 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87609ea:	ba 01 00 00 00       	mov    $0x1,%edx
 87609ef:	83 c7 2c             	add    $0x2c,%edi
 87609f2:	88 55 a4             	mov    %dl,-0x5c(%ebp)
 87609f5:	89 74 24 04          	mov    %esi,0x4(%esp)
 87609f9:	89 3c 24             	mov    %edi,(%esp)
 87609fc:	e8 5f fa ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8760a01:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8760a04:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760a0b:	00 
 8760a0c:	89 34 24             	mov    %esi,(%esp)
 8760a0f:	89 c7                	mov    %eax,%edi
 8760a11:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8760a14:	c1 e0 02             	shl    $0x2,%eax
 8760a17:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760a1b:	e8 a0 d2 91 ff       	call   807dcc0 <memset@plt>
 8760a20:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760a25:	89 34 24             	mov    %esi,(%esp)
 8760a28:	e8 f3 6c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760a2d:	0f b6 55 a4          	movzbl -0x5c(%ebp),%edx
 8760a31:	84 d2                	test   %dl,%dl
 8760a33:	74 2a                	je     8760a5f <_ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE+0x12f>
 8760a35:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8760a38:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8760a3b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760a42:	00 
 8760a43:	c1 e0 02             	shl    $0x2,%eax
 8760a46:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760a4a:	89 34 24             	mov    %esi,(%esp)
 8760a4d:	e8 6e d2 91 ff       	call   807dcc0 <memset@plt>
 8760a52:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760a57:	89 34 24             	mov    %esi,(%esp)
 8760a5a:	e8 c1 6c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760a5f:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8760a62:	89 f8                	mov    %edi,%eax
 8760a64:	5b                   	pop    %ebx
 8760a65:	5e                   	pop    %esi
 8760a66:	5f                   	pop    %edi
 8760a67:	5d                   	pop    %ebp
 8760a68:	c3                   	ret
 8760a69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8760a70:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760a74:	8d 75 b8             	lea    -0x48(%ebp),%esi
 8760a77:	89 34 24             	mov    %esi,(%esp)
 8760a7a:	e8 f1 e7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8760a7f:	89 34 24             	mov    %esi,(%esp)
 8760a82:	8d 75 c8             	lea    -0x38(%ebp),%esi
 8760a85:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8760a8c:	00 
 8760a8d:	e8 8e fd ff ff       	call   8760820 <_ZN8TaoCrypt7IntegerrSEj>
 8760a92:	89 34 24             	mov    %esi,(%esp)
 8760a95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760a99:	e8 d2 e7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8760a9e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8760aa1:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8760aa4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8760aab:	00 
 8760aac:	c1 e0 02             	shl    $0x2,%eax
 8760aaf:	89 14 24             	mov    %edx,(%esp)
 8760ab2:	89 55 a4             	mov    %edx,-0x5c(%ebp)
 8760ab5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8760ab9:	e8 02 d2 91 ff       	call   807dcc0 <memset@plt>
 8760abe:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8760ac1:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8760ac6:	89 14 24             	mov    %edx,(%esp)
 8760ac9:	e8 52 6c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760ace:	31 d2                	xor    %edx,%edx
 8760ad0:	e9 1a ff ff ff       	jmp    87609ef <_ZNK8TaoCrypt17ModularArithmetic4HalfERKNS_7IntegerE+0xbf>
 8760ad5:	8d 76 00             	lea    0x0(%esi),%esi
 8760ad8:	89 44 24 10          	mov    %eax,0x10(%esp)
 8760adc:	8b 47 10             	mov    0x10(%edi),%eax
 8760adf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8760ae6:	00 
 8760ae7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8760aeb:	8b 46 04             	mov    0x4(%esi),%eax
 8760aee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760af2:	8b 47 20             	mov    0x20(%edi),%eax
 8760af5:	83 c7 1c             	add    $0x1c,%edi
 8760af8:	89 04 24             	mov    %eax,(%esp)
 8760afb:	e8 90 c3 ff ff       	call   875ce90 <_ZN8TaoCrypt17DivideByPower2ModEPjPKjjS2_j>
 8760b00:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8760b03:	89 f8                	mov    %edi,%eax
 8760b05:	5b                   	pop    %ebx
 8760b06:	5e                   	pop    %esi
 8760b07:	5f                   	pop    %edi
 8760b08:	5d                   	pop    %ebp
 8760b09:	c3                   	ret
 8760b0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::ModularArithmetic::Half @ 0x8760930

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Half(TaoCrypt::Integer const&) const */

ModularArithmetic * __thiscall
TaoCrypt::ModularArithmetic::Half(ModularArithmetic *this,Integer *param_1)

{
  char cVar1;
  Integer *pIVar2;
  ModularArithmetic *pMVar3;
  uint uVar4;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  if (*(uint *)param_1 != *(uint *)(this + 0xc)) {
    cVar1 = Integer::GetBit(param_1,0);
    if (cVar1 == '\0') {
      Integer::Integer((Integer *)&local_4c,param_1);
      pIVar2 = (Integer *)Integer::operator>>=((Integer *)&local_4c,1);
      Integer::Integer((Integer *)&local_3c,pIVar2);
      uVar4 = 0;
      memset(local_48,0,local_4c << 2);
      operator_delete__(local_48,uVar4 & 0xffffff00);
    }
    else {
      Integer::Plus((Integer *)&local_2c);
      Integer::Integer((Integer *)&local_5c,(Integer *)&local_2c);
      pIVar2 = (Integer *)Integer::operator>>=((Integer *)&local_5c,1);
      Integer::Integer((Integer *)&local_3c,pIVar2);
      uVar4 = 0;
      memset(local_58,0,local_5c << 2);
      operator_delete__(local_58,uVar4 & 0xffffff00);
    }
    pMVar3 = (ModularArithmetic *)Integer::operator=((Integer *)(this + 0x2c),(Integer *)&local_3c);
    uVar4 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar4 & 0xffffff00);
    if (cVar1 != '\0') {
      uVar4 = 0;
      memset(local_28,0,local_2c << 2);
      operator_delete__(local_28,uVar4 & 0xffffff00);
    }
    return pMVar3;
  }
  DivideByPower2Mod(*(uint **)(this + 0x20),*(uint **)(param_1 + 4),1,*(uint **)(this + 0x10),
                    *(uint *)param_1);
  return this + 0x1c;
}

```

---

## Inverse

```asm
// === 0875d820 TaoCrypt::ModularArithmetic::Inverse  [0x0875d820-0x875d8bf] ===
 875d820:	55                   	push   %ebp
 875d821:	89 e5                	mov    %esp,%ebp
 875d823:	57                   	push   %edi
 875d824:	56                   	push   %esi
 875d825:	53                   	push   %ebx
 875d826:	e8 cd 55 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875d82b:	81 c3 6d f3 c0 00    	add    $0xc0f36d,%ebx
 875d831:	83 ec 1c             	sub    $0x1c,%esp
 875d834:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d837:	89 04 24             	mov    %eax,(%esp)
 875d83a:	e8 41 fa ff ff       	call   875d280 <_ZNK8TaoCrypt7IntegerntEv>
 875d83f:	84 c0                	test   %al,%al
 875d841:	75 4c                	jne    875d88f <_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE+0x6f>
 875d843:	8b 55 08             	mov    0x8(%ebp),%edx
 875d846:	8b 72 0c             	mov    0xc(%edx),%esi
 875d849:	8b 7a 10             	mov    0x10(%edx),%edi
 875d84c:	8b 4a 20             	mov    0x20(%edx),%ecx
 875d84f:	85 f6                	test   %esi,%esi
 875d851:	74 12                	je     875d865 <_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE+0x45>
 875d853:	31 c0                	xor    %eax,%eax
 875d855:	8d 76 00             	lea    0x0(%esi),%esi
 875d858:	8b 14 87             	mov    (%edi,%eax,4),%edx
 875d85b:	89 14 81             	mov    %edx,(%ecx,%eax,4)
 875d85e:	83 c0 01             	add    $0x1,%eax
 875d861:	39 c6                	cmp    %eax,%esi
 875d863:	77 f3                	ja     875d858 <_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE+0x38>
 875d865:	8b 75 0c             	mov    0xc(%ebp),%esi
 875d868:	8b 06                	mov    (%esi),%eax
 875d86a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875d86e:	8b 46 04             	mov    0x4(%esi),%eax
 875d871:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875d875:	89 0c 24             	mov    %ecx,(%esp)
 875d878:	89 44 24 08          	mov    %eax,0x8(%esp)
 875d87c:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875d882:	85 c0                	test   %eax,%eax
 875d884:	75 1a                	jne    875d8a0 <_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE+0x80>
 875d886:	8b 45 08             	mov    0x8(%ebp),%eax
 875d889:	83 c0 1c             	add    $0x1c,%eax
 875d88c:	89 45 0c             	mov    %eax,0xc(%ebp)
 875d88f:	8b 45 0c             	mov    0xc(%ebp),%eax
 875d892:	83 c4 1c             	add    $0x1c,%esp
 875d895:	5b                   	pop    %ebx
 875d896:	5e                   	pop    %esi
 875d897:	5f                   	pop    %edi
 875d898:	5d                   	pop    %ebp
 875d899:	c3                   	ret
 875d89a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 875d8a0:	8b 0e                	mov    (%esi),%ecx
 875d8a2:	8b 55 08             	mov    0x8(%ebp),%edx
 875d8a5:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
 875d8ac:	03 42 20             	add    0x20(%edx),%eax
 875d8af:	8b 52 0c             	mov    0xc(%edx),%edx
 875d8b2:	29 ca                	sub    %ecx,%edx
 875d8b4:	29 10                	sub    %edx,(%eax)
 875d8b6:	eb ce                	jmp    875d886 <_ZNK8TaoCrypt17ModularArithmetic7InverseERKNS_7IntegerE+0x66>
 875d8b8:	90                   	nop
 875d8b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::ModularArithmetic::Inverse @ 0x875d820

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Inverse(TaoCrypt::Integer const&) const */

Integer * __thiscall TaoCrypt::ModularArithmetic::Inverse(ModularArithmetic *this,Integer *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  cVar3 = Integer::operator!(param_1);
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(this + 0xc);
    iVar5 = *(int *)(this + 0x10);
    iVar2 = *(int *)(this + 0x20);
    if (uVar1 != 0) {
      uVar4 = 0;
      do {
        *(undefined4 *)(iVar2 + uVar4 * 4) = *(undefined4 *)(iVar5 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    iVar5 = (*s_pSub)(iVar2,iVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)param_1);
    if (iVar5 != 0) {
      piVar6 = (int *)(*(int *)param_1 * 4 + *(int *)(this + 0x20));
      *piVar6 = *piVar6 - (*(int *)(this + 0xc) - *(int *)param_1);
    }
    param_1 = (Integer *)(this + 0x1c);
  }
  return param_1;
}

```

---

## Reduce

```asm
// === 0875ff00 TaoCrypt::ModularArithmetic::Reduce  [0x0875ff00-0x875ffbf] ===
 875ff00:	55                   	push   %ebp
 875ff01:	89 e5                	mov    %esp,%ebp
 875ff03:	83 ec 28             	sub    $0x28,%esp
 875ff06:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875ff09:	8b 75 0c             	mov    0xc(%ebp),%esi
 875ff0c:	89 7d fc             	mov    %edi,-0x4(%ebp)
 875ff0f:	8b 7d 08             	mov    0x8(%ebp),%edi
 875ff12:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875ff15:	8b 55 10             	mov    0x10(%ebp),%edx
 875ff18:	e8 db 2e fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875ff1d:	81 c3 7b cc c0 00    	add    $0xc0cc7b,%ebx
 875ff23:	8b 06                	mov    (%esi),%eax
 875ff25:	3b 47 0c             	cmp    0xc(%edi),%eax
 875ff28:	74 26                	je     875ff50 <_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_+0x50>
 875ff2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 875ff2e:	89 34 24             	mov    %esi,(%esp)
 875ff31:	e8 8a fd ff ff       	call   875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>
 875ff36:	83 7e 0c 01          	cmpl   $0x1,0xc(%esi)
 875ff3a:	74 64                	je     875ffa0 <_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_+0xa0>
 875ff3c:	89 f0                	mov    %esi,%eax
 875ff3e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875ff41:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875ff44:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875ff47:	89 ec                	mov    %ebp,%esp
 875ff49:	5d                   	pop    %ebp
 875ff4a:	c3                   	ret
 875ff4b:	90                   	nop
 875ff4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 875ff50:	3b 02                	cmp    (%edx),%eax
 875ff52:	75 d6                	jne    875ff2a <_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_+0x2a>
 875ff54:	8b 4e 04             	mov    0x4(%esi),%ecx
 875ff57:	89 44 24 0c          	mov    %eax,0xc(%esp)
 875ff5b:	8b 42 04             	mov    0x4(%edx),%eax
 875ff5e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 875ff62:	89 44 24 08          	mov    %eax,0x8(%esp)
 875ff66:	89 0c 24             	mov    %ecx,(%esp)
 875ff69:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 875ff6f:	85 c0                	test   %eax,%eax
 875ff71:	74 c9                	je     875ff3c <_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_+0x3c>
 875ff73:	8b 16                	mov    (%esi),%edx
 875ff75:	8b 46 04             	mov    0x4(%esi),%eax
 875ff78:	89 54 24 0c          	mov    %edx,0xc(%esp)
 875ff7c:	8b 57 10             	mov    0x10(%edi),%edx
 875ff7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 875ff83:	89 04 24             	mov    %eax,(%esp)
 875ff86:	89 54 24 08          	mov    %edx,0x8(%esp)
 875ff8a:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 875ff90:	89 f0                	mov    %esi,%eax
 875ff92:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 875ff95:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875ff98:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875ff9b:	89 ec                	mov    %ebp,%esp
 875ff9d:	5d                   	pop    %ebp
 875ff9e:	c3                   	ret
 875ff9f:	90                   	nop
 875ffa0:	83 c7 0c             	add    $0xc,%edi
 875ffa3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 875ffa7:	89 34 24             	mov    %esi,(%esp)
 875ffaa:	e8 31 fe ff ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 875ffaf:	eb 8b                	jmp    875ff3c <_ZNK8TaoCrypt17ModularArithmetic6ReduceERNS_7IntegerERKS1_+0x3c>
 875ffb1:	90                   	nop
 875ffb2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 875ffb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::ModularArithmetic::Reduce @ 0x875ff00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Reduce(TaoCrypt::Integer&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Reduce(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)param_1;
  if ((iVar1 == *(int *)(this + 0xc)) && (iVar1 == *(int *)param_2)) {
    iVar1 = (*s_pSub)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar1);
    if (iVar1 != 0) {
      (*s_pAdd)(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4),
                *(undefined4 *)(this + 0x10),*(undefined4 *)param_1);
      return param_1;
    }
  }
  else {
    Integer::operator-=(param_1,param_2);
    if (*(int *)(param_1 + 0xc) == 1) {
      Integer::operator+=(param_1,(Integer *)(this + 0xc));
    }
  }
  return param_1;
}

```

---

## SimultaneousExponentiate

```asm
// === 08762a20 TaoCrypt::ModularArithmetic::SimultaneousExponentiate  [0x08762a20-0x8762d3f] ===
 8762a20:	55                   	push   %ebp
 8762a21:	89 e5                	mov    %esp,%ebp
 8762a23:	57                   	push   %edi
 8762a24:	56                   	push   %esi
 8762a25:	53                   	push   %ebx
 8762a26:	e8 cd 03 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8762a2b:	81 c3 6d a1 c0 00    	add    $0xc0a16d,%ebx
 8762a31:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 8762a37:	8b 75 08             	mov    0x8(%ebp),%esi
 8762a3a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762a41:	00 
 8762a42:	8d 7e 0c             	lea    0xc(%esi),%edi
 8762a45:	89 3c 24             	mov    %edi,(%esp)
 8762a48:	e8 33 a6 ff ff       	call   875d080 <_ZNK8TaoCrypt7Integer6GetBitEj>
 8762a4d:	84 c0                	test   %al,%al
 8762a4f:	0f 84 bb 02 00 00    	je     8762d10 <_ZNK8TaoCrypt17ModularArithmetic24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j+0x2f0>
 8762a55:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 8762a5b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762a5f:	8d 7d a8             	lea    -0x58(%ebp),%edi
 8762a62:	89 04 24             	mov    %eax,(%esp)
 8762a65:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8762a6b:	e8 a0 ce ff ff       	call   875f910 <_ZN8TaoCrypt24MontgomeryRepresentationC1ERKNS_7IntegerE>
 8762a70:	8b b5 5c ff ff ff    	mov    -0xa4(%ebp),%esi
 8762a76:	8b 45 10             	mov    0x10(%ebp),%eax
 8762a79:	89 3c 24             	mov    %edi,(%esp)
 8762a7c:	c1 e6 05             	shl    $0x5,%esi
 8762a7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762a83:	e8 e8 c7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762a88:	89 74 24 04          	mov    %esi,0x4(%esp)
 8762a8c:	89 3c 24             	mov    %edi,(%esp)
 8762a8f:	8d 7d b8             	lea    -0x48(%ebp),%edi
 8762a92:	e8 09 c3 ff ff       	call   875eda0 <_ZN8TaoCrypt7IntegerlSEj>
 8762a97:	89 3c 24             	mov    %edi,(%esp)
 8762a9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762a9e:	e8 cd c7 ff ff       	call   875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>
 8762aa3:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8762aa6:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8762aa9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762ab0:	00 
 8762ab1:	c1 e0 02             	shl    $0x2,%eax
 8762ab4:	89 34 24             	mov    %esi,(%esp)
 8762ab7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762abb:	e8 00 b2 91 ff       	call   807dcc0 <memset@plt>
 8762ac0:	89 34 24             	mov    %esi,(%esp)
 8762ac3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762ac8:	e8 53 4c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762acd:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8762ad0:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8762ad6:	89 14 24             	mov    %edx,(%esp)
 8762ad9:	89 95 3c ff ff ff    	mov    %edx,-0xc4(%ebp)
 8762adf:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762ae3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8762ae7:	e8 34 fb ff ff       	call   8762620 <_ZNK8TaoCrypt7Integer6ModuloERKS0_>
 8762aec:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8762aef:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8762af2:	c1 e0 02             	shl    $0x2,%eax
 8762af5:	83 ec 04             	sub    $0x4,%esp
 8762af8:	89 34 24             	mov    %esi,(%esp)
 8762afb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762aff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762b06:	00 
 8762b07:	e8 b4 b1 91 ff       	call   807dcc0 <memset@plt>
 8762b0c:	89 34 24             	mov    %esi,(%esp)
 8762b0f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762b14:	e8 07 4c 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762b19:	8b 45 18             	mov    0x18(%ebp),%eax
 8762b1c:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 8762b22:	89 44 24 10          	mov    %eax,0x10(%esp)
 8762b26:	8b 45 14             	mov    0x14(%ebp),%eax
 8762b29:	89 54 24 08          	mov    %edx,0x8(%esp)
 8762b2d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8762b31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8762b34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762b38:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8762b3e:	89 04 24             	mov    %eax,(%esp)
 8762b41:	e8 4a 29 04 00       	call   87a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>
 8762b46:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8762b49:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8762b4c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762b53:	00 
 8762b54:	c1 e0 02             	shl    $0x2,%eax
 8762b57:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762b5b:	89 34 24             	mov    %esi,(%esp)
 8762b5e:	e8 5d b1 91 ff       	call   807dcc0 <memset@plt>
 8762b63:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762b68:	89 34 24             	mov    %esi,(%esp)
 8762b6b:	e8 b0 4b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762b70:	8b 7d 18             	mov    0x18(%ebp),%edi
 8762b73:	85 ff                	test   %edi,%edi
 8762b75:	0f 84 87 00 00 00    	je     8762c02 <_ZNK8TaoCrypt17ModularArithmetic24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j+0x1e2>
 8762b7b:	8b 75 0c             	mov    0xc(%ebp),%esi
 8762b7e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8762b81:	31 ff                	xor    %edi,%edi
 8762b83:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8762b89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8762b90:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8762b96:	83 c7 01             	add    $0x1,%edi
 8762b99:	89 74 24 08          	mov    %esi,0x8(%esp)
 8762b9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762ba1:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8762ba7:	89 04 24             	mov    %eax,(%esp)
 8762baa:	e8 d1 c7 ff ff       	call   875f380 <_ZNK8TaoCrypt24MontgomeryRepresentation10ConvertOutERKNS_7IntegerE>
 8762baf:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 8762bb5:	83 ec 04             	sub    $0x4,%esp
 8762bb8:	89 34 24             	mov    %esi,(%esp)
 8762bbb:	83 c6 10             	add    $0x10,%esi
 8762bbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762bc2:	e8 99 d8 ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8762bc7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8762bca:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8762bcd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762bd4:	00 
 8762bd5:	c1 e0 02             	shl    $0x2,%eax
 8762bd8:	89 14 24             	mov    %edx,(%esp)
 8762bdb:	89 95 3c ff ff ff    	mov    %edx,-0xc4(%ebp)
 8762be1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762be5:	e8 d6 b0 91 ff       	call   807dcc0 <memset@plt>
 8762bea:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 8762bf0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762bf5:	89 14 24             	mov    %edx,(%esp)
 8762bf8:	e8 23 4b 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762bfd:	39 7d 18             	cmp    %edi,0x18(%ebp)
 8762c00:	77 8e                	ja     8762b90 <_ZNK8TaoCrypt17ModularArithmetic24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j+0x170>
 8762c02:	8b 83 d4 fa ff ff    	mov    -0x52c(%ebx),%eax
 8762c08:	8b 75 a0             	mov    -0x60(%ebp),%esi
 8762c0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762c12:	00 
 8762c13:	83 c0 08             	add    $0x8,%eax
 8762c16:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8762c1c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8762c1f:	89 34 24             	mov    %esi,(%esp)
 8762c22:	c1 e0 02             	shl    $0x2,%eax
 8762c25:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762c29:	e8 92 b0 91 ff       	call   807dcc0 <memset@plt>
 8762c2e:	89 34 24             	mov    %esi,(%esp)
 8762c31:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762c36:	e8 e5 4a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762c3b:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8762c3e:	8b 75 90             	mov    -0x70(%ebp),%esi
 8762c41:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762c48:	00 
 8762c49:	c1 e0 02             	shl    $0x2,%eax
 8762c4c:	89 34 24             	mov    %esi,(%esp)
 8762c4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762c53:	e8 68 b0 91 ff       	call   807dcc0 <memset@plt>
 8762c58:	89 34 24             	mov    %esi,(%esp)
 8762c5b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762c60:	e8 bb 4a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762c65:	8b 83 50 fd ff ff    	mov    -0x2b0(%ebx),%eax
 8762c6b:	8b 75 80             	mov    -0x80(%ebp),%esi
 8762c6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762c75:	00 
 8762c76:	83 c0 08             	add    $0x8,%eax
 8762c79:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8762c7f:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8762c85:	89 34 24             	mov    %esi,(%esp)
 8762c88:	c1 e0 02             	shl    $0x2,%eax
 8762c8b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762c8f:	e8 2c b0 91 ff       	call   807dcc0 <memset@plt>
 8762c94:	89 34 24             	mov    %esi,(%esp)
 8762c97:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762c9c:	e8 7f 4a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762ca1:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8762ca7:	8b b5 70 ff ff ff    	mov    -0x90(%ebp),%esi
 8762cad:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762cb4:	00 
 8762cb5:	c1 e0 02             	shl    $0x2,%eax
 8762cb8:	89 34 24             	mov    %esi,(%esp)
 8762cbb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762cbf:	e8 fc af 91 ff       	call   807dcc0 <memset@plt>
 8762cc4:	89 34 24             	mov    %esi,(%esp)
 8762cc7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762ccc:	e8 4f 4a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762cd1:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 8762cd7:	8b b5 60 ff ff ff    	mov    -0xa0(%ebp),%esi
 8762cdd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8762ce4:	00 
 8762ce5:	c1 e0 02             	shl    $0x2,%eax
 8762ce8:	89 34 24             	mov    %esi,(%esp)
 8762ceb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762cef:	e8 cc af 91 ff       	call   807dcc0 <memset@plt>
 8762cf4:	89 34 24             	mov    %esi,(%esp)
 8762cf7:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8762cfc:	e8 1f 4a 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8762d01:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8762d04:	5b                   	pop    %ebx
 8762d05:	5e                   	pop    %esi
 8762d06:	5f                   	pop    %edi
 8762d07:	5d                   	pop    %ebp
 8762d08:	c3                   	ret
 8762d09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8762d10:	8b 45 18             	mov    0x18(%ebp),%eax
 8762d13:	89 34 24             	mov    %esi,(%esp)
 8762d16:	89 44 24 10          	mov    %eax,0x10(%esp)
 8762d1a:	8b 45 14             	mov    0x14(%ebp),%eax
 8762d1d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8762d21:	8b 45 10             	mov    0x10(%ebp),%eax
 8762d24:	89 44 24 08          	mov    %eax,0x8(%esp)
 8762d28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8762d2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8762d2f:	e8 5c 27 04 00       	call   87a5490 <_ZNK8TaoCrypt12AbstractRing24SimultaneousExponentiateEPNS_7IntegerERKS1_PS3_j>
 8762d34:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8762d37:	5b                   	pop    %ebx
 8762d38:	5e                   	pop    %esi
 8762d39:	5f                   	pop    %edi
 8762d3a:	5d                   	pop    %ebp
 8762d3b:	c3                   	ret
 8762d3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::ModularArithmetic::SimultaneousExponentiate @ 0x8762a20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::SimultaneousExponentiate(TaoCrypt::Integer*, TaoCrypt::Integer
   const&, TaoCrypt::Integer const*, unsigned int) const */

void __thiscall
TaoCrypt::ModularArithmetic::SimultaneousExponentiate
          (ModularArithmetic *this,Integer *param_1,Integer *param_2,Integer *param_3,uint param_4)

{
  void *pvVar1;
  char cVar2;
  Integer *pIVar3;
  uint uVar4;
  uint uVar5;
  undefined *local_b4 [3];
  int local_a8;
  void *local_a4;
  int local_98;
  void *local_94;
  int local_88;
  void *local_84;
  int local_78;
  void *local_74;
  int local_68;
  void *local_64;
  int local_5c;
  void *local_58;
  int local_4c;
  void *local_48;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  undefined4 uStack_14;
  
  uStack_14 = 0x8762a2b;
  cVar2 = Integer::GetBit((Integer *)(this + 0xc),0);
  if (cVar2 != '\0') {
    MontgomeryRepresentation::MontgomeryRepresentation
              ((MontgomeryRepresentation *)local_b4,(Integer *)(this + 0xc));
    uVar4 = local_a8 << 5;
    Integer::Integer((Integer *)&local_5c,param_2);
    pIVar3 = (Integer *)Integer::operator<<=((Integer *)&local_5c,uVar4);
    Integer::Integer((Integer *)&local_4c,pIVar3);
    uVar4 = 0;
    memset(local_58,0,local_5c << 2);
    operator_delete__(local_58,uVar4 & 0xffffff00);
    Integer::Modulo((Integer *)&local_2c);
    uVar4 = 0;
    memset(local_48,0,local_4c << 2);
    operator_delete__(local_48,uVar4 & 0xffffff00);
    AbstractRing::SimultaneousExponentiate
              ((AbstractRing *)local_b4,param_1,(Integer *)&local_2c,param_3,param_4);
    uVar4 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar4 & 0xffffff00);
    if (param_4 != 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        MontgomeryRepresentation::ConvertOut((Integer *)&local_3c);
        Integer::operator=(param_1,(Integer *)&local_3c);
        pvVar1 = local_38;
        uVar5 = 0;
        memset(local_38,0,local_3c << 2);
        operator_delete__(pvVar1,uVar5 & 0xffffff00);
        param_1 = param_1 + 0x10;
      } while (uVar4 < param_4);
    }
    uVar4 = 0;
    local_b4[0] = PTR_vtable_0936c66c + 8;
    memset(local_64,0,local_68 << 2);
    operator_delete__(local_64,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_74,0,local_78 << 2);
    operator_delete__(local_74,uVar4 & 0xffffff00);
    uVar4 = 0;
    local_b4[0] = PTR_vtable_0936c8e8 + 8;
    memset(local_84,0,local_88 << 2);
    operator_delete__(local_84,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_94,0,local_98 << 2);
    operator_delete__(local_94,uVar4 & 0xffffff00);
    uVar4 = 0;
    memset(local_a4,0,local_a8 << 2);
    operator_delete__(local_a4,uVar4 & 0xffffff00);
    return;
  }
  AbstractRing::SimultaneousExponentiate((AbstractRing *)this,param_1,param_2,param_3,param_4);
  return;
}

```

---

## Subtract

```asm
// === 08760580 TaoCrypt::ModularArithmetic::Subtract  [0x08760580-0x876069f] ===
 8760580:	55                   	push   %ebp
 8760581:	89 e5                	mov    %esp,%ebp
 8760583:	83 ec 48             	sub    $0x48,%esp
 8760586:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8760589:	8b 7d 0c             	mov    0xc(%ebp),%edi
 876058c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876058f:	8b 75 08             	mov    0x8(%ebp),%esi
 8760592:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8760595:	8b 55 10             	mov    0x10(%ebp),%edx
 8760598:	e8 5b 28 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876059d:	81 c3 fb c5 c0 00    	add    $0xc0c5fb,%ebx
 87605a3:	8b 07                	mov    (%edi),%eax
 87605a5:	3b 46 0c             	cmp    0xc(%esi),%eax
 87605a8:	74 76                	je     8760620 <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0xa0>
 87605aa:	8d 45 d8             	lea    -0x28(%ebp),%eax
 87605ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 87605b1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87605b5:	8d 7e 2c             	lea    0x2c(%esi),%edi
 87605b8:	89 04 24             	mov    %eax,(%esp)
 87605bb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87605be:	e8 1d fb ff ff       	call   87600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>
 87605c3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87605c6:	83 ec 04             	sub    $0x4,%esp
 87605c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87605cd:	89 3c 24             	mov    %edi,(%esp)
 87605d0:	e8 8b fe ff ff       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87605d5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 87605d8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 87605db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87605e2:	00 
 87605e3:	c1 e0 02             	shl    $0x2,%eax
 87605e6:	89 14 24             	mov    %edx,(%esp)
 87605e9:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87605ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87605f0:	e8 cb d6 91 ff       	call   807dcc0 <memset@plt>
 87605f5:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87605f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87605fd:	89 14 24             	mov    %edx,(%esp)
 8760600:	e8 1b 71 00 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8760605:	83 7e 38 01          	cmpl   $0x1,0x38(%esi)
 8760609:	74 75                	je     8760680 <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0x100>
 876060b:	89 f8                	mov    %edi,%eax
 876060d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8760610:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760613:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760616:	89 ec                	mov    %ebp,%esp
 8760618:	5d                   	pop    %ebp
 8760619:	c3                   	ret
 876061a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8760620:	3b 02                	cmp    (%edx),%eax
 8760622:	75 86                	jne    87605aa <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0x2a>
 8760624:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8760628:	8b 42 04             	mov    0x4(%edx),%eax
 876062b:	89 44 24 08          	mov    %eax,0x8(%esp)
 876062f:	8b 47 04             	mov    0x4(%edi),%eax
 8760632:	89 44 24 04          	mov    %eax,0x4(%esp)
 8760636:	8b 46 20             	mov    0x20(%esi),%eax
 8760639:	89 04 24             	mov    %eax,(%esp)
 876063c:	ff 93 90 4c 12 00    	call   *0x124c90(%ebx)
 8760642:	85 c0                	test   %eax,%eax
 8760644:	75 12                	jne    8760658 <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0xd8>
 8760646:	8d 7e 1c             	lea    0x1c(%esi),%edi
 8760649:	89 f8                	mov    %edi,%eax
 876064b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876064e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8760651:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8760654:	89 ec                	mov    %ebp,%esp
 8760656:	5d                   	pop    %ebp
 8760657:	c3                   	ret
 8760658:	8b 17                	mov    (%edi),%edx
 876065a:	8d 7e 1c             	lea    0x1c(%esi),%edi
 876065d:	8b 46 20             	mov    0x20(%esi),%eax
 8760660:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8760664:	8b 56 10             	mov    0x10(%esi),%edx
 8760667:	89 44 24 04          	mov    %eax,0x4(%esp)
 876066b:	89 04 24             	mov    %eax,(%esp)
 876066e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8760672:	ff 93 8c 4c 12 00    	call   *0x124c8c(%ebx)
 8760678:	eb cf                	jmp    8760649 <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0xc9>
 876067a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8760680:	83 c6 0c             	add    $0xc,%esi
 8760683:	89 74 24 04          	mov    %esi,0x4(%esp)
 8760687:	89 3c 24             	mov    %edi,(%esp)
 876068a:	e8 51 f7 ff ff       	call   875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>
 876068f:	e9 77 ff ff ff       	jmp    876060b <_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_+0x8b>
 8760694:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 876069a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::ModularArithmetic::Subtract @ 0x8760580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Subtract(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *this_00;
  int iVar1;
  uint uVar2;
  int local_2c;
  void *local_28;
  
  iVar1 = *(int *)param_1;
  if ((iVar1 == *(int *)(this + 0xc)) && (iVar1 == *(int *)param_2)) {
    iVar1 = (*s_pSub)(*(undefined4 *)(this + 0x20),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar1);
    if (iVar1 != 0) {
      (*s_pAdd)(*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x20),
                *(undefined4 *)(this + 0x10),*(undefined4 *)param_1);
    }
    return (Integer *)(this + 0x1c);
  }
  this_00 = (Integer *)(this + 0x2c);
  Integer::Minus((Integer *)&local_2c);
  Integer::operator=(this_00,(Integer *)&local_2c);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  if (*(int *)(this + 0x38) == 1) {
    Integer::operator+=(this_00,(Integer *)(this + 0xc));
  }
  return this_00;
}

```


# TaoCrypt__DH_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 08755620 TaoCrypt::DH_Decoder::Decode  [0x08755620-0x875571f] ===
 8755620:	55                   	push   %ebp
 8755621:	89 e5                	mov    %esp,%ebp
 8755623:	83 ec 58             	sub    $0x58,%esp
 8755626:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8755629:	8b 75 08             	mov    0x8(%ebp),%esi
 875562c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 875562f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8755632:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8755635:	e8 be d7 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875563a:	81 c3 5e 75 c1 00    	add    $0xc1755e,%ebx
 8755640:	8b 06                	mov    (%esi),%eax
 8755642:	89 34 24             	mov    %esi,(%esp)
 8755645:	ff 50 08             	call   *0x8(%eax)
 8755648:	8b 46 04             	mov    0x4(%esi),%eax
 875564b:	8b 48 10             	mov    0x10(%eax),%ecx
 875564e:	85 c9                	test   %ecx,%ecx
 8755650:	0f 85 af 00 00 00    	jne    8755705 <_ZN8TaoCrypt10DH_Decoder6DecodeERNS_2DHE+0xe5>
 8755656:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8755659:	89 04 24             	mov    %eax,(%esp)
 875565c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 875565f:	e8 2c 9f 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 8755664:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8755667:	89 34 24             	mov    %esi,(%esp)
 875566a:	89 44 24 04          	mov    %eax,0x4(%esp)
 875566e:	e8 2d ee ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 8755673:	89 3c 24             	mov    %edi,(%esp)
 8755676:	83 c7 10             	add    $0x10,%edi
 8755679:	89 44 24 04          	mov    %eax,0x4(%esp)
 875567d:	e8 de ad 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 8755682:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8755685:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8755688:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 875568f:	00 
 8755690:	c1 e0 02             	shl    $0x2,%eax
 8755693:	89 14 24             	mov    %edx,(%esp)
 8755696:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8755699:	89 44 24 08          	mov    %eax,0x8(%esp)
 875569d:	e8 1e 86 92 ff       	call   807dcc0 <memset@plt>
 87556a2:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87556a5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87556aa:	89 14 24             	mov    %edx,(%esp)
 87556ad:	e8 6e 20 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87556b2:	8d 45 c8             	lea    -0x38(%ebp),%eax
 87556b5:	89 04 24             	mov    %eax,(%esp)
 87556b8:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87556bb:	e8 d0 9e 00 00       	call   875f590 <_ZN8TaoCrypt7IntegerC1Ev>
 87556c0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 87556c3:	89 34 24             	mov    %esi,(%esp)
 87556c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87556ca:	e8 d1 ed ff ff       	call   87544a0 <_ZN8TaoCrypt11BER_Decoder10GetIntegerERNS_7IntegerE>
 87556cf:	89 3c 24             	mov    %edi,(%esp)
 87556d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87556d6:	e8 85 ad 00 00       	call   8760460 <_ZN8TaoCrypt7IntegeraSERKS0_>
 87556db:	8b 45 c8             	mov    -0x38(%ebp),%eax
 87556de:	8b 75 cc             	mov    -0x34(%ebp),%esi
 87556e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87556e8:	00 
 87556e9:	c1 e0 02             	shl    $0x2,%eax
 87556ec:	89 44 24 08          	mov    %eax,0x8(%esp)
 87556f0:	89 34 24             	mov    %esi,(%esp)
 87556f3:	e8 c8 85 92 ff       	call   807dcc0 <memset@plt>
 87556f8:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87556fd:	89 34 24             	mov    %esi,(%esp)
 8755700:	e8 1b 20 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 8755705:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8755708:	8b 75 f8             	mov    -0x8(%ebp),%esi
 875570b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 875570e:	89 ec                	mov    %ebp,%esp
 8755710:	5d                   	pop    %ebp
 8755711:	c3                   	ret
 8755712:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8755719:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::DH_Decoder::Decode @ 0x8755620

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH_Decoder::Decode(TaoCrypt::DH&) */

void __thiscall TaoCrypt::DH_Decoder::Decode(DH_Decoder *this,DH *param_1)

{
  Integer *pIVar1;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    Integer::Integer((Integer *)&local_2c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_2c);
    Integer::operator=((Integer *)param_1,pIVar1);
    uVar2 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar2 & 0xffffff00);
    Integer::Integer((Integer *)&local_3c);
    pIVar1 = (Integer *)BER_Decoder::GetInteger((BER_Decoder *)this,(Integer *)&local_3c);
    Integer::operator=((Integer *)(param_1 + 0x10),pIVar1);
    uVar2 = 0;
    memset(local_38,0,local_3c << 2);
    operator_delete__(local_38,uVar2 & 0xffffff00);
  }
  return;
}

```

---

## ReadHeader

```asm
// === 08753a00 TaoCrypt::DH_Decoder::ReadHeader  [0x08753a00-0x8753a2f] ===
 8753a00:	55                   	push   %ebp
 8753a01:	89 e5                	mov    %esp,%ebp
 8753a03:	53                   	push   %ebx
 8753a04:	e8 ef f3 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753a09:	81 c3 8f 91 c1 00    	add    $0xc1918f,%ebx
 8753a0f:	83 ec 14             	sub    $0x14,%esp
 8753a12:	8b 45 08             	mov    0x8(%ebp),%eax
 8753a15:	89 04 24             	mov    %eax,(%esp)
 8753a18:	e8 73 fd ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753a1d:	83 c4 14             	add    $0x14,%esp
 8753a20:	5b                   	pop    %ebx
 8753a21:	5d                   	pop    %ebp
 8753a22:	c3                   	ret
 8753a23:	90                   	nop
 8753a24:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753a2a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::DH_Decoder::ReadHeader @ 0x8753a00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DH_Decoder::ReadHeader() */

void __thiscall TaoCrypt::DH_Decoder::ReadHeader(DH_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  return;
}

```


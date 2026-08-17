# WongWork__CCeraShop

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 35

---

## CCeraShop

```asm
// === 083202b8 WongWork::CCeraShop::CCeraShop  [0x083202b8-0x8320313] ===
 83202b8:	55                   	push   %ebp
 83202b9:	89 e5                	mov    %esp,%ebp
 83202bb:	57                   	push   %edi
 83202bc:	56                   	push   %esi
 83202bd:	53                   	push   %ebx
 83202be:	83 ec 1c             	sub    $0x1c,%esp
 83202c1:	c7 04 24 74 00 00 00 	movl   $0x74,(%esp)
 83202c8:	e8 83 41 40 00       	call   8724450 <_Znwj>
 83202cd:	89 c3                	mov    %eax,%ebx
 83202cf:	89 d8                	mov    %ebx,%eax
 83202d1:	8b 55 08             	mov    0x8(%ebp),%edx
 83202d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 83202d8:	89 04 24             	mov    %eax,(%esp)
 83202db:	e8 0c ba f5 ff       	call   827bcec <_ZN18SpecialItemHandlerC1EPN8WongWork9CCeraShopE>
 83202e0:	eb 18                	jmp    83202fa <_ZN8WongWork9CCeraShopC1Ev+0x42>
 83202e2:	89 d6                	mov    %edx,%esi
 83202e4:	89 c7                	mov    %eax,%edi
 83202e6:	89 1c 24             	mov    %ebx,(%esp)
 83202e9:	e8 02 42 40 00       	call   87244f0 <_ZdlPv>
 83202ee:	89 f8                	mov    %edi,%eax
 83202f0:	89 f2                	mov    %esi,%edx
 83202f2:	89 04 24             	mov    %eax,(%esp)
 83202f5:	e8 56 34 7c 00       	call   8ae3750 <_Unwind_Resume>
 83202fa:	89 da                	mov    %ebx,%edx
 83202fc:	8b 45 08             	mov    0x8(%ebp),%eax
 83202ff:	89 10                	mov    %edx,(%eax)
 8320301:	8b 45 08             	mov    0x8(%ebp),%eax
 8320304:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 832030b:	83 c4 1c             	add    $0x1c,%esp
 832030e:	5b                   	pop    %ebx
 832030f:	5e                   	pop    %esi
 8320310:	5f                   	pop    %edi
 8320311:	5d                   	pop    %ebp
 8320312:	c3                   	ret
 8320313:	90                   	nop

```

```c
// WongWork::CCeraShop::CCeraShop @ 0x83202b8

/* WongWork::CCeraShop::CCeraShop() */

void __thiscall WongWork::CCeraShop::CCeraShop(CCeraShop *this)

{
  SpecialItemHandler *this_00;
  
  this_00 = operator_new(0x74);
                    /* try { // try from 083202db to 083202df has its CatchHandler @ 083202e2 */
  SpecialItemHandler::SpecialItemHandler(this_00,this);
  *(SpecialItemHandler **)this = this_00;
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## CallSpecialItemHandler

```asm
// === 08325854 WongWork::CCeraShop::CallSpecialItemHandler  [0x08325854-0x832587d] ===
 8325854:	55                   	push   %ebp
 8325855:	89 e5                	mov    %esp,%ebp
 8325857:	83 ec 18             	sub    $0x18,%esp
 832585a:	8b 45 08             	mov    0x8(%ebp),%eax
 832585d:	8b 00                	mov    (%eax),%eax
 832585f:	8b 55 14             	mov    0x14(%ebp),%edx
 8325862:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325866:	8b 55 10             	mov    0x10(%ebp),%edx
 8325869:	89 54 24 08          	mov    %edx,0x8(%esp)
 832586d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8325870:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325874:	89 04 24             	mov    %eax,(%esp)
 8325877:	e8 8e 65 f5 ff       	call   827be0a <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result>
 832587c:	c9                   	leave
 832587d:	c3                   	ret

```

```c
// WongWork::CCeraShop::CallSpecialItemHandler @ 0x8325854

/* WongWork::CCeraShop::CallSpecialItemHandler(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void __thiscall
WongWork::CCeraShop::CallSpecialItemHandler
          (CCeraShop *this,int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  SpecialItemHandler::execute(*(SpecialItemHandler **)this,param_1,param_2,param_3);
  return;
}

```

---

## IsSpecialItem

```asm
// === 08324a1e WongWork::CCeraShop::IsSpecialItem  [0x08324a1e-0x8325853] ===
 8324a1e:	55                   	push   %ebp
 8324a1f:	89 e5                	mov    %esp,%ebp
 8324a21:	83 ec 28             	sub    $0x28,%esp
 8324a24:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324a27:	3d 34 03 00 00       	cmp    $0x334,%eax
 8324a2c:	0f 84 0d 0a 00 00    	je     832543f <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa21>
 8324a32:	3d 34 03 00 00       	cmp    $0x334,%eax
 8324a37:	0f 8f 09 02 00 00    	jg     8324c46 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x228>
 8324a3d:	83 f8 2d             	cmp    $0x2d,%eax
 8324a40:	0f 84 12 08 00 00    	je     8325258 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x83a>
 8324a46:	83 f8 2d             	cmp    $0x2d,%eax
 8324a49:	0f 8f f5 00 00 00    	jg     8324b44 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x126>
 8324a4f:	83 f8 16             	cmp    $0x16,%eax
 8324a52:	0f 84 d9 05 00 00    	je     8325031 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x613>
 8324a58:	83 f8 16             	cmp    $0x16,%eax
 8324a5b:	7f 6a                	jg     8324ac7 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa9>
 8324a5d:	83 f8 10             	cmp    $0x10,%eax
 8324a60:	0f 84 2f 05 00 00    	je     8324f95 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x577>
 8324a66:	83 f8 10             	cmp    $0x10,%eax
 8324a69:	7f 33                	jg     8324a9e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x80>
 8324a6b:	83 f8 06             	cmp    $0x6,%eax
 8324a6e:	0f 84 80 04 00 00    	je     8324ef4 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4d6>
 8324a74:	83 f8 06             	cmp    $0x6,%eax
 8324a77:	7f 0e                	jg     8324a87 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x69>
 8324a79:	83 f8 05             	cmp    $0x5,%eax
 8324a7c:	0f 84 44 04 00 00    	je     8324ec6 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4a8>
 8324a82:	e9 a4 0c 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324a87:	83 f8 09             	cmp    $0x9,%eax
 8324a8a:	0f 84 d7 04 00 00    	je     8324f67 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x549>
 8324a90:	83 f8 0b             	cmp    $0xb,%eax
 8324a93:	0f 84 e5 04 00 00    	je     8324f7e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x560>
 8324a99:	e9 8d 0c 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324a9e:	83 f8 12             	cmp    $0x12,%eax
 8324aa1:	0f 84 33 05 00 00    	je     8324fda <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x5bc>
 8324aa7:	83 f8 12             	cmp    $0x12,%eax
 8324aaa:	0f 8c 13 05 00 00    	jl     8324fc3 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x5a5>
 8324ab0:	83 f8 13             	cmp    $0x13,%eax
 8324ab3:	0f 84 3e 05 00 00    	je     8324ff7 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x5d9>
 8324ab9:	83 f8 14             	cmp    $0x14,%eax
 8324abc:	0f 84 52 05 00 00    	je     8325014 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x5f6>
 8324ac2:	e9 64 0c 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324ac7:	83 f8 20             	cmp    $0x20,%eax
 8324aca:	0f 84 f2 05 00 00    	je     83250c2 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x6a4>
 8324ad0:	83 f8 20             	cmp    $0x20,%eax
 8324ad3:	7f 33                	jg     8324b08 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xea>
 8324ad5:	83 f8 1d             	cmp    $0x1d,%eax
 8324ad8:	0f 84 06 07 00 00    	je     83251e4 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x7c6>
 8324ade:	83 f8 1d             	cmp    $0x1d,%eax
 8324ae1:	7f 0e                	jg     8324af1 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd3>
 8324ae3:	83 f8 17             	cmp    $0x17,%eax
 8324ae6:	0f 84 62 05 00 00    	je     832504e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x630>
 8324aec:	e9 3a 0c 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324af1:	83 f8 1e             	cmp    $0x1e,%eax
 8324af4:	0f 84 8e 05 00 00    	je     8325088 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x66a>
 8324afa:	83 f8 1f             	cmp    $0x1f,%eax
 8324afd:	0f 84 a2 05 00 00    	je     83250a5 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x687>
 8324b03:	e9 23 0c 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324b08:	83 f8 23             	cmp    $0x23,%eax
 8324b0b:	0f 84 08 06 00 00    	je     8325119 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x6fb>
 8324b11:	83 f8 23             	cmp    $0x23,%eax
 8324b14:	7f 17                	jg     8324b2d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x10f>
 8324b16:	83 f8 21             	cmp    $0x21,%eax
 8324b19:	0f 84 c0 05 00 00    	je     83250df <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x6c1>
 8324b1f:	83 f8 22             	cmp    $0x22,%eax
 8324b22:	0f 84 d4 05 00 00    	je     83250fc <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x6de>
 8324b28:	e9 fe 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324b2d:	83 f8 2b             	cmp    $0x2b,%eax
 8324b30:	0f 84 e8 06 00 00    	je     832521e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x800>
 8324b36:	83 f8 2c             	cmp    $0x2c,%eax
 8324b39:	0f 84 fc 06 00 00    	je     832523b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x81d>
 8324b3f:	e9 e7 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324b44:	3d c2 00 00 00       	cmp    $0xc2,%eax
 8324b49:	0f 84 0e 08 00 00    	je     832535d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x93f>
 8324b4f:	3d c2 00 00 00       	cmp    $0xc2,%eax
 8324b54:	7f 65                	jg     8324bbb <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x19d>
 8324b56:	83 f8 3e             	cmp    $0x3e,%eax
 8324b59:	7f 29                	jg     8324b84 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x166>
 8324b5b:	83 f8 39             	cmp    $0x39,%eax
 8324b5e:	0f 8d 79 03 00 00    	jge    8324edd <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4bf>
 8324b64:	83 f8 2f             	cmp    $0x2f,%eax
 8324b67:	0f 84 25 07 00 00    	je     8325292 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x874>
 8324b6d:	83 f8 2f             	cmp    $0x2f,%eax
 8324b70:	0f 8c ff 06 00 00    	jl     8325275 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x857>
 8324b76:	83 f8 32             	cmp    $0x32,%eax
 8324b79:	0f 84 5e 03 00 00    	je     8324edd <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4bf>
 8324b7f:	e9 a7 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324b84:	83 f8 6e             	cmp    $0x6e,%eax
 8324b87:	0f 84 22 03 00 00    	je     8324eaf <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x491>
 8324b8d:	83 f8 6e             	cmp    $0x6e,%eax
 8324b90:	7f 0e                	jg     8324ba0 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x182>
 8324b92:	83 f8 44             	cmp    $0x44,%eax
 8324b95:	0f 84 b5 03 00 00    	je     8324f50 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x532>
 8324b9b:	e9 8b 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324ba0:	3d 89 00 00 00       	cmp    $0x89,%eax
 8324ba5:	0f 84 e2 05 00 00    	je     832518d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x76f>
 8324bab:	3d c1 00 00 00       	cmp    $0xc1,%eax
 8324bb0:	0f 84 11 06 00 00    	je     83251c7 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x7a9>
 8324bb6:	e9 70 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324bbb:	3d c8 00 00 00       	cmp    $0xc8,%eax
 8324bc0:	0f 84 06 07 00 00    	je     83252cc <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x8ae>
 8324bc6:	3d c8 00 00 00       	cmp    $0xc8,%eax
 8324bcb:	7f 31                	jg     8324bfe <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x1e0>
 8324bcd:	3d c4 00 00 00       	cmp    $0xc4,%eax
 8324bd2:	0f 84 a2 07 00 00    	je     832537a <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x95c>
 8324bd8:	3d c4 00 00 00       	cmp    $0xc4,%eax
 8324bdd:	0f 8c ee 07 00 00    	jl     83253d1 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x9b3>
 8324be3:	3d c5 00 00 00       	cmp    $0xc5,%eax
 8324be8:	0f 84 c6 07 00 00    	je     83253b4 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x996>
 8324bee:	3d c6 00 00 00       	cmp    $0xc6,%eax
 8324bf3:	0f 84 ef 07 00 00    	je     83253e8 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x9ca>
 8324bf9:	e9 2d 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324bfe:	3d e6 02 00 00       	cmp    $0x2e6,%eax
 8324c03:	0f 84 a6 06 00 00    	je     83252af <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x891>
 8324c09:	3d e6 02 00 00       	cmp    $0x2e6,%eax
 8324c0e:	7f 1b                	jg     8324c2b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x20d>
 8324c10:	3d d0 02 00 00       	cmp    $0x2d0,%eax
 8324c15:	0f 84 7c 07 00 00    	je     8325397 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x979>
 8324c1b:	3d e5 02 00 00       	cmp    $0x2e5,%eax
 8324c20:	0f 84 10 05 00 00    	je     8325136 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x718>
 8324c26:	e9 00 0b 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324c2b:	3d e7 02 00 00       	cmp    $0x2e7,%eax
 8324c30:	0f 84 cf 07 00 00    	je     8325405 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x9e7>
 8324c36:	3d e8 02 00 00       	cmp    $0x2e8,%eax
 8324c3b:	0f 84 e1 07 00 00    	je     8325422 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa04>
 8324c41:	e9 e5 0a 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324c46:	3d c0 98 28 00       	cmp    $0x2898c0,%eax
 8324c4b:	0f 84 61 09 00 00    	je     83255b2 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb94>
 8324c51:	3d c0 98 28 00       	cmp    $0x2898c0,%eax
 8324c56:	0f 8f 26 01 00 00    	jg     8324d82 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x364>
 8324c5c:	3d c2 97 28 00       	cmp    $0x2897c2,%eax
 8324c61:	0f 84 12 08 00 00    	je     8325479 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa5b>
 8324c67:	3d c2 97 28 00       	cmp    $0x2897c2,%eax
 8324c6c:	0f 8f 81 00 00 00    	jg     8324cf3 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x2d5>
 8324c72:	3d d2 96 28 00       	cmp    $0x2896d2,%eax
 8324c77:	0f 84 f3 04 00 00    	je     8325170 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x752>
 8324c7d:	3d d2 96 28 00       	cmp    $0x2896d2,%eax
 8324c82:	7f 3d                	jg     8324cc1 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x2a3>
 8324c84:	3d 98 03 00 00       	cmp    $0x398,%eax
 8324c89:	0f 84 cd 07 00 00    	je     832545c <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa3e>
 8324c8f:	3d 98 03 00 00       	cmp    $0x398,%eax
 8324c94:	7f 10                	jg     8324ca6 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x288>
 8324c96:	3d 35 03 00 00       	cmp    $0x335,%eax
 8324c9b:	0f 84 4c 08 00 00    	je     83254ed <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xacf>
 8324ca1:	e9 85 0a 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324ca6:	3d ac 96 28 00       	cmp    $0x2896ac,%eax
 8324cab:	0f 84 a2 04 00 00    	je     8325153 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x735>
 8324cb1:	3d ad 96 28 00       	cmp    $0x2896ad,%eax
 8324cb6:	0f 84 2d 06 00 00    	je     83252e9 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x8cb>
 8324cbc:	e9 6a 0a 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324cc1:	3d 8c 97 28 00       	cmp    $0x28978c,%eax
 8324cc6:	7f 1b                	jg     8324ce3 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x2c5>
 8324cc8:	3d 8b 97 28 00       	cmp    $0x28978b,%eax
 8324ccd:	0f 8d 0a 02 00 00    	jge    8324edd <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4bf>
 8324cd3:	3d d3 96 28 00       	cmp    $0x2896d3,%eax
 8324cd8:	0f 84 28 06 00 00    	je     8325306 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x8e8>
 8324cde:	e9 48 0a 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324ce3:	3d 8f 97 28 00       	cmp    $0x28978f,%eax
 8324ce8:	0f 84 34 02 00 00    	je     8324f22 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x504>
 8324cee:	e9 38 0a 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324cf3:	3d 32 98 28 00       	cmp    $0x289832,%eax
 8324cf8:	0f 84 d2 07 00 00    	je     83254d0 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xab2>
 8324cfe:	3d 32 98 28 00       	cmp    $0x289832,%eax
 8324d03:	7f 35                	jg     8324d3a <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x31c>
 8324d05:	3d 06 98 28 00       	cmp    $0x289806,%eax
 8324d0a:	0f 84 86 07 00 00    	je     8325496 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa78>
 8324d10:	3d 06 98 28 00       	cmp    $0x289806,%eax
 8324d15:	7f 13                	jg     8324d2a <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x30c>
 8324d17:	2d c8 97 28 00       	sub    $0x2897c8,%eax
 8324d1c:	83 f8 01             	cmp    $0x1,%eax
 8324d1f:	0f 87 06 0a 00 00    	ja     832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324d25:	e9 e1 01 00 00       	jmp    8324f0b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x4ed>
 8324d2a:	3d 31 98 28 00       	cmp    $0x289831,%eax
 8324d2f:	0f 84 7e 07 00 00    	je     83254b3 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xa95>
 8324d35:	e9 f1 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324d3a:	3d 3a 98 28 00       	cmp    $0x28983a,%eax
 8324d3f:	0f 84 dc 07 00 00    	je     8325521 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb03>
 8324d45:	3d 3a 98 28 00       	cmp    $0x28983a,%eax
 8324d4a:	7f 1b                	jg     8324d67 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x349>
 8324d4c:	3d 38 98 28 00       	cmp    $0x289838,%eax
 8324d51:	0f 84 04 08 00 00    	je     832555b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb3d>
 8324d57:	3d 39 98 28 00       	cmp    $0x289839,%eax
 8324d5c:	0f 84 a2 07 00 00    	je     8325504 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xae6>
 8324d62:	e9 c4 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324d67:	3d 3b 98 28 00       	cmp    $0x28983b,%eax
 8324d6c:	0f 84 cc 07 00 00    	je     832553e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb20>
 8324d72:	3d bf 98 28 00       	cmp    $0x2898bf,%eax
 8324d77:	0f 84 18 08 00 00    	je     8325595 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb77>
 8324d7d:	e9 a9 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324d82:	3d 72 d1 28 00       	cmp    $0x28d172,%eax
 8324d87:	0f 84 1d 04 00 00    	je     83251aa <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x78c>
 8324d8d:	3d 72 d1 28 00       	cmp    $0x28d172,%eax
 8324d92:	0f 8f 80 00 00 00    	jg     8324e18 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x3fa>
 8324d98:	3d ba be 28 00       	cmp    $0x28beba,%eax
 8324d9d:	0f 84 9d 05 00 00    	je     8325340 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x922>
 8324da3:	3d ba be 28 00       	cmp    $0x28beba,%eax
 8324da8:	7f 31                	jg     8324ddb <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x3bd>
 8324daa:	3d c2 98 28 00       	cmp    $0x2898c2,%eax
 8324daf:	0f 84 37 08 00 00    	je     83255ec <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xbce>
 8324db5:	3d c2 98 28 00       	cmp    $0x2898c2,%eax
 8324dba:	0f 8c 0f 08 00 00    	jl     83255cf <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xbb1>
 8324dc0:	3d 5f 99 28 00       	cmp    $0x28995f,%eax
 8324dc5:	0f 84 ad 07 00 00    	je     8325578 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xb5a>
 8324dcb:	3d b9 bd 28 00       	cmp    $0x28bdb9,%eax
 8324dd0:	0f 84 63 01 00 00    	je     8324f39 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x51b>
 8324dd6:	e9 50 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324ddb:	3d 52 d1 28 00       	cmp    $0x28d152,%eax
 8324de0:	0f 84 1b 04 00 00    	je     8325201 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x7e3>
 8324de6:	3d 52 d1 28 00       	cmp    $0x28d152,%eax
 8324deb:	7f 10                	jg     8324dfd <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x3df>
 8324ded:	3d 51 d1 28 00       	cmp    $0x28d151,%eax
 8324df2:	0f 84 73 02 00 00    	je     832506b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x64d>
 8324df8:	e9 2e 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324dfd:	3d 54 d1 28 00       	cmp    $0x28d154,%eax
 8324e02:	0f 84 1b 05 00 00    	je     8325323 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x905>
 8324e08:	3d 71 d1 28 00       	cmp    $0x28d171,%eax
 8324e0d:	0f 84 99 01 00 00    	je     8324fac <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x58e>
 8324e13:	e9 13 09 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324e18:	3d 07 98 98 00       	cmp    $0x989807,%eax
 8324e1d:	0f 84 e6 07 00 00    	je     8325609 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xbeb>
 8324e23:	3d 07 98 98 00       	cmp    $0x989807,%eax
 8324e28:	7f 3d                	jg     8324e67 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x449>
 8324e2a:	3d 04 98 98 00       	cmp    $0x989804,%eax
 8324e2f:	0f 84 f1 07 00 00    	je     8325626 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc08>
 8324e35:	3d 04 98 98 00       	cmp    $0x989804,%eax
 8324e3a:	7f 10                	jg     8324e4c <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x42e>
 8324e3c:	3d 03 98 98 00       	cmp    $0x989803,%eax
 8324e41:	0f 84 36 08 00 00    	je     832567d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc5f>
 8324e47:	e9 df 08 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324e4c:	3d 05 98 98 00       	cmp    $0x989805,%eax
 8324e51:	0f 84 ec 07 00 00    	je     8325643 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc25>
 8324e57:	3d 06 98 98 00       	cmp    $0x989806,%eax
 8324e5c:	0f 84 fe 07 00 00    	je     8325660 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc42>
 8324e62:	e9 c4 08 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324e67:	3d 5f 91 20 29       	cmp    $0x2920915f,%eax
 8324e6c:	0f 84 62 08 00 00    	je     83256d4 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xcb6>
 8324e72:	3d 5f 91 20 29       	cmp    $0x2920915f,%eax
 8324e77:	7f 1b                	jg     8324e94 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0x476>
 8324e79:	3d 5d 91 20 29       	cmp    $0x2920915d,%eax
 8324e7e:	0f 84 16 08 00 00    	je     832569a <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc7c>
 8324e84:	3d 5e 91 20 29       	cmp    $0x2920915e,%eax
 8324e89:	0f 84 28 08 00 00    	je     83256b7 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xc99>
 8324e8f:	e9 97 08 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324e94:	3d 60 91 20 29       	cmp    $0x29209160,%eax
 8324e99:	0f 84 52 08 00 00    	je     83256f1 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xcd3>
 8324e9f:	3d 61 91 20 29       	cmp    $0x29209161,%eax
 8324ea4:	0f 84 64 08 00 00    	je     832570e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xcf0>
 8324eaa:	e9 7c 08 00 00       	jmp    832572b <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd0d>
 8324eaf:	8b 45 10             	mov    0x10(%ebp),%eax
 8324eb2:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324eb8:	8b 45 14             	mov    0x14(%ebp),%eax
 8324ebb:	c7 00 28 00 00 00    	movl   $0x28,(%eax)
 8324ec1:	e9 87 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324ec6:	8b 45 10             	mov    0x10(%ebp),%eax
 8324ec9:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324ecf:	8b 45 14             	mov    0x14(%ebp),%eax
 8324ed2:	c7 00 18 00 00 00    	movl   $0x18,(%eax)
 8324ed8:	e9 70 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324edd:	8b 45 10             	mov    0x10(%ebp),%eax
 8324ee0:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8324ee6:	8b 45 14             	mov    0x14(%ebp),%eax
 8324ee9:	c7 00 10 00 00 00    	movl   $0x10,(%eax)
 8324eef:	e9 59 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324ef4:	8b 45 10             	mov    0x10(%ebp),%eax
 8324ef7:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324efd:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f00:	c7 00 98 00 00 00    	movl   $0x98,(%eax)
 8324f06:	e9 42 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f0b:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f0e:	c7 00 0b 00 00 00    	movl   $0xb,(%eax)
 8324f14:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f17:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8324f1d:	e9 2b 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f22:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f25:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8324f2b:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f2e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324f34:	e9 14 09 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f39:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f3c:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324f42:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f45:	c7 00 28 00 00 00    	movl   $0x28,(%eax)
 8324f4b:	e9 fd 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f50:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f53:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324f59:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f5c:	c7 00 48 00 00 00    	movl   $0x48,(%eax)
 8324f62:	e9 e6 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f67:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f6a:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8324f70:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f73:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8324f79:	e9 cf 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f7e:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f81:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8324f87:	8b 45 14             	mov    0x14(%ebp),%eax
 8324f8a:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8324f90:	e9 b8 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324f95:	8b 45 10             	mov    0x10(%ebp),%eax
 8324f98:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8324f9e:	8b 45 14             	mov    0x14(%ebp),%eax
 8324fa1:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8324fa7:	e9 a1 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324fac:	8b 45 10             	mov    0x10(%ebp),%eax
 8324faf:	c7 00 04 00 00 00    	movl   $0x4,(%eax)
 8324fb5:	8b 45 14             	mov    0x14(%ebp),%eax
 8324fb8:	c7 00 2a 00 00 00    	movl   $0x2a,(%eax)
 8324fbe:	e9 8a 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324fc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8324fc6:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8324fcc:	8b 45 14             	mov    0x14(%ebp),%eax
 8324fcf:	c7 00 07 00 00 00    	movl   $0x7,(%eax)
 8324fd5:	e9 73 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324fda:	8b 45 10             	mov    0x10(%ebp),%eax
 8324fdd:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8324fe3:	8b 45 14             	mov    0x14(%ebp),%eax
 8324fe6:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
 8324fec:	8b 45 18             	mov    0x18(%ebp),%eax
 8324fef:	c6 00 01             	movb   $0x1,(%eax)
 8324ff2:	e9 56 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8324ff7:	8b 45 10             	mov    0x10(%ebp),%eax
 8324ffa:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325000:	8b 45 14             	mov    0x14(%ebp),%eax
 8325003:	c7 00 0a 00 00 00    	movl   $0xa,(%eax)
 8325009:	8b 45 18             	mov    0x18(%ebp),%eax
 832500c:	c6 00 01             	movb   $0x1,(%eax)
 832500f:	e9 39 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325014:	8b 45 10             	mov    0x10(%ebp),%eax
 8325017:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832501d:	8b 45 14             	mov    0x14(%ebp),%eax
 8325020:	c7 00 0b 00 00 00    	movl   $0xb,(%eax)
 8325026:	8b 45 18             	mov    0x18(%ebp),%eax
 8325029:	c6 00 01             	movb   $0x1,(%eax)
 832502c:	e9 1c 08 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325031:	8b 45 10             	mov    0x10(%ebp),%eax
 8325034:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832503a:	8b 45 14             	mov    0x14(%ebp),%eax
 832503d:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 8325043:	8b 45 18             	mov    0x18(%ebp),%eax
 8325046:	c6 00 00             	movb   $0x0,(%eax)
 8325049:	e9 ff 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832504e:	8b 45 10             	mov    0x10(%ebp),%eax
 8325051:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325057:	8b 45 14             	mov    0x14(%ebp),%eax
 832505a:	c7 00 0e 00 00 00    	movl   $0xe,(%eax)
 8325060:	8b 45 18             	mov    0x18(%ebp),%eax
 8325063:	c6 00 00             	movb   $0x0,(%eax)
 8325066:	e9 e2 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832506b:	8b 45 10             	mov    0x10(%ebp),%eax
 832506e:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325074:	8b 45 14             	mov    0x14(%ebp),%eax
 8325077:	c7 00 11 00 00 00    	movl   $0x11,(%eax)
 832507d:	8b 45 18             	mov    0x18(%ebp),%eax
 8325080:	c6 00 01             	movb   $0x1,(%eax)
 8325083:	e9 c5 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325088:	8b 45 10             	mov    0x10(%ebp),%eax
 832508b:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325091:	8b 45 14             	mov    0x14(%ebp),%eax
 8325094:	c7 00 11 00 00 00    	movl   $0x11,(%eax)
 832509a:	8b 45 18             	mov    0x18(%ebp),%eax
 832509d:	c6 00 01             	movb   $0x1,(%eax)
 83250a0:	e9 a8 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83250a5:	8b 45 10             	mov    0x10(%ebp),%eax
 83250a8:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83250ae:	8b 45 14             	mov    0x14(%ebp),%eax
 83250b1:	c7 00 12 00 00 00    	movl   $0x12,(%eax)
 83250b7:	8b 45 18             	mov    0x18(%ebp),%eax
 83250ba:	c6 00 01             	movb   $0x1,(%eax)
 83250bd:	e9 8b 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83250c2:	8b 45 10             	mov    0x10(%ebp),%eax
 83250c5:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83250cb:	8b 45 14             	mov    0x14(%ebp),%eax
 83250ce:	c7 00 13 00 00 00    	movl   $0x13,(%eax)
 83250d4:	8b 45 18             	mov    0x18(%ebp),%eax
 83250d7:	c6 00 01             	movb   $0x1,(%eax)
 83250da:	e9 6e 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83250df:	8b 45 10             	mov    0x10(%ebp),%eax
 83250e2:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83250e8:	8b 45 14             	mov    0x14(%ebp),%eax
 83250eb:	c7 00 14 00 00 00    	movl   $0x14,(%eax)
 83250f1:	8b 45 18             	mov    0x18(%ebp),%eax
 83250f4:	c6 00 01             	movb   $0x1,(%eax)
 83250f7:	e9 51 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83250fc:	8b 45 10             	mov    0x10(%ebp),%eax
 83250ff:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325105:	8b 45 14             	mov    0x14(%ebp),%eax
 8325108:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 832510e:	8b 45 18             	mov    0x18(%ebp),%eax
 8325111:	c6 00 01             	movb   $0x1,(%eax)
 8325114:	e9 34 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325119:	8b 45 10             	mov    0x10(%ebp),%eax
 832511c:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325122:	8b 45 14             	mov    0x14(%ebp),%eax
 8325125:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
 832512b:	8b 45 18             	mov    0x18(%ebp),%eax
 832512e:	c6 00 01             	movb   $0x1,(%eax)
 8325131:	e9 17 07 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325136:	8b 45 10             	mov    0x10(%ebp),%eax
 8325139:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832513f:	8b 45 14             	mov    0x14(%ebp),%eax
 8325142:	c7 00 24 00 00 00    	movl   $0x24,(%eax)
 8325148:	8b 45 18             	mov    0x18(%ebp),%eax
 832514b:	c6 00 01             	movb   $0x1,(%eax)
 832514e:	e9 fa 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325153:	8b 45 10             	mov    0x10(%ebp),%eax
 8325156:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832515c:	8b 45 14             	mov    0x14(%ebp),%eax
 832515f:	c7 00 2d 00 00 00    	movl   $0x2d,(%eax)
 8325165:	8b 45 18             	mov    0x18(%ebp),%eax
 8325168:	c6 00 01             	movb   $0x1,(%eax)
 832516b:	e9 dd 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325170:	8b 45 10             	mov    0x10(%ebp),%eax
 8325173:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325179:	8b 45 14             	mov    0x14(%ebp),%eax
 832517c:	c7 00 2f 00 00 00    	movl   $0x2f,(%eax)
 8325182:	8b 45 18             	mov    0x18(%ebp),%eax
 8325185:	c6 00 01             	movb   $0x1,(%eax)
 8325188:	e9 c0 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832518d:	8b 45 10             	mov    0x10(%ebp),%eax
 8325190:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325196:	8b 45 14             	mov    0x14(%ebp),%eax
 8325199:	c7 00 1d 00 00 00    	movl   $0x1d,(%eax)
 832519f:	8b 45 18             	mov    0x18(%ebp),%eax
 83251a2:	c6 00 01             	movb   $0x1,(%eax)
 83251a5:	e9 a3 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83251aa:	8b 45 10             	mov    0x10(%ebp),%eax
 83251ad:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83251b3:	8b 45 14             	mov    0x14(%ebp),%eax
 83251b6:	c7 00 2b 00 00 00    	movl   $0x2b,(%eax)
 83251bc:	8b 45 18             	mov    0x18(%ebp),%eax
 83251bf:	c6 00 01             	movb   $0x1,(%eax)
 83251c2:	e9 86 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83251c7:	8b 45 10             	mov    0x10(%ebp),%eax
 83251ca:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83251d0:	8b 45 14             	mov    0x14(%ebp),%eax
 83251d3:	c7 00 1e 00 00 00    	movl   $0x1e,(%eax)
 83251d9:	8b 45 18             	mov    0x18(%ebp),%eax
 83251dc:	c6 00 01             	movb   $0x1,(%eax)
 83251df:	e9 69 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83251e4:	8b 45 10             	mov    0x10(%ebp),%eax
 83251e7:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83251ed:	8b 45 14             	mov    0x14(%ebp),%eax
 83251f0:	c7 00 10 00 00 00    	movl   $0x10,(%eax)
 83251f6:	8b 45 18             	mov    0x18(%ebp),%eax
 83251f9:	c6 00 00             	movb   $0x0,(%eax)
 83251fc:	e9 4c 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325201:	8b 45 10             	mov    0x10(%ebp),%eax
 8325204:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832520a:	8b 45 14             	mov    0x14(%ebp),%eax
 832520d:	c7 00 17 00 00 00    	movl   $0x17,(%eax)
 8325213:	8b 45 18             	mov    0x18(%ebp),%eax
 8325216:	c6 00 01             	movb   $0x1,(%eax)
 8325219:	e9 2f 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832521e:	8b 45 10             	mov    0x10(%ebp),%eax
 8325221:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325227:	8b 45 14             	mov    0x14(%ebp),%eax
 832522a:	c7 00 17 00 00 00    	movl   $0x17,(%eax)
 8325230:	8b 45 18             	mov    0x18(%ebp),%eax
 8325233:	c6 00 01             	movb   $0x1,(%eax)
 8325236:	e9 12 06 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832523b:	8b 45 10             	mov    0x10(%ebp),%eax
 832523e:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325244:	8b 45 14             	mov    0x14(%ebp),%eax
 8325247:	c7 00 18 00 00 00    	movl   $0x18,(%eax)
 832524d:	8b 45 18             	mov    0x18(%ebp),%eax
 8325250:	c6 00 01             	movb   $0x1,(%eax)
 8325253:	e9 f5 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325258:	8b 45 10             	mov    0x10(%ebp),%eax
 832525b:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325261:	8b 45 14             	mov    0x14(%ebp),%eax
 8325264:	c7 00 19 00 00 00    	movl   $0x19,(%eax)
 832526a:	8b 45 18             	mov    0x18(%ebp),%eax
 832526d:	c6 00 01             	movb   $0x1,(%eax)
 8325270:	e9 d8 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325275:	8b 45 10             	mov    0x10(%ebp),%eax
 8325278:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832527e:	8b 45 14             	mov    0x14(%ebp),%eax
 8325281:	c7 00 1a 00 00 00    	movl   $0x1a,(%eax)
 8325287:	8b 45 18             	mov    0x18(%ebp),%eax
 832528a:	c6 00 01             	movb   $0x1,(%eax)
 832528d:	e9 bb 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325292:	8b 45 10             	mov    0x10(%ebp),%eax
 8325295:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832529b:	8b 45 14             	mov    0x14(%ebp),%eax
 832529e:	c7 00 1b 00 00 00    	movl   $0x1b,(%eax)
 83252a4:	8b 45 18             	mov    0x18(%ebp),%eax
 83252a7:	c6 00 01             	movb   $0x1,(%eax)
 83252aa:	e9 9e 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83252af:	8b 45 10             	mov    0x10(%ebp),%eax
 83252b2:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83252b8:	8b 45 14             	mov    0x14(%ebp),%eax
 83252bb:	c7 00 25 00 00 00    	movl   $0x25,(%eax)
 83252c1:	8b 45 18             	mov    0x18(%ebp),%eax
 83252c4:	c6 00 01             	movb   $0x1,(%eax)
 83252c7:	e9 81 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83252cc:	8b 45 10             	mov    0x10(%ebp),%eax
 83252cf:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83252d5:	8b 45 14             	mov    0x14(%ebp),%eax
 83252d8:	c7 00 28 00 00 00    	movl   $0x28,(%eax)
 83252de:	8b 45 18             	mov    0x18(%ebp),%eax
 83252e1:	c6 00 01             	movb   $0x1,(%eax)
 83252e4:	e9 64 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83252e9:	8b 45 10             	mov    0x10(%ebp),%eax
 83252ec:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83252f2:	8b 45 14             	mov    0x14(%ebp),%eax
 83252f5:	c7 00 2e 00 00 00    	movl   $0x2e,(%eax)
 83252fb:	8b 45 18             	mov    0x18(%ebp),%eax
 83252fe:	c6 00 01             	movb   $0x1,(%eax)
 8325301:	e9 47 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325306:	8b 45 10             	mov    0x10(%ebp),%eax
 8325309:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832530f:	8b 45 14             	mov    0x14(%ebp),%eax
 8325312:	c7 00 30 00 00 00    	movl   $0x30,(%eax)
 8325318:	8b 45 18             	mov    0x18(%ebp),%eax
 832531b:	c6 00 01             	movb   $0x1,(%eax)
 832531e:	e9 2a 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325323:	8b 45 10             	mov    0x10(%ebp),%eax
 8325326:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832532c:	8b 45 14             	mov    0x14(%ebp),%eax
 832532f:	c7 00 1f 00 00 00    	movl   $0x1f,(%eax)
 8325335:	8b 45 18             	mov    0x18(%ebp),%eax
 8325338:	c6 00 01             	movb   $0x1,(%eax)
 832533b:	e9 0d 05 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325340:	8b 45 10             	mov    0x10(%ebp),%eax
 8325343:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325349:	8b 45 14             	mov    0x14(%ebp),%eax
 832534c:	c7 00 46 00 00 00    	movl   $0x46,(%eax)
 8325352:	8b 45 18             	mov    0x18(%ebp),%eax
 8325355:	c6 00 01             	movb   $0x1,(%eax)
 8325358:	e9 f0 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832535d:	8b 45 10             	mov    0x10(%ebp),%eax
 8325360:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325366:	8b 45 14             	mov    0x14(%ebp),%eax
 8325369:	c7 00 1f 00 00 00    	movl   $0x1f,(%eax)
 832536f:	8b 45 18             	mov    0x18(%ebp),%eax
 8325372:	c6 00 01             	movb   $0x1,(%eax)
 8325375:	e9 d3 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832537a:	8b 45 10             	mov    0x10(%ebp),%eax
 832537d:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325383:	8b 45 14             	mov    0x14(%ebp),%eax
 8325386:	c7 00 20 00 00 00    	movl   $0x20,(%eax)
 832538c:	8b 45 18             	mov    0x18(%ebp),%eax
 832538f:	c6 00 01             	movb   $0x1,(%eax)
 8325392:	e9 b6 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325397:	8b 45 10             	mov    0x10(%ebp),%eax
 832539a:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83253a0:	8b 45 14             	mov    0x14(%ebp),%eax
 83253a3:	c7 00 23 00 00 00    	movl   $0x23,(%eax)
 83253a9:	8b 45 18             	mov    0x18(%ebp),%eax
 83253ac:	c6 00 01             	movb   $0x1,(%eax)
 83253af:	e9 99 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83253b4:	8b 45 10             	mov    0x10(%ebp),%eax
 83253b7:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83253bd:	8b 45 14             	mov    0x14(%ebp),%eax
 83253c0:	c7 00 21 00 00 00    	movl   $0x21,(%eax)
 83253c6:	8b 45 18             	mov    0x18(%ebp),%eax
 83253c9:	c6 00 01             	movb   $0x1,(%eax)
 83253cc:	e9 7c 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83253d1:	8b 45 10             	mov    0x10(%ebp),%eax
 83253d4:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
 83253da:	8b 45 14             	mov    0x14(%ebp),%eax
 83253dd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 83253e3:	e9 65 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83253e8:	8b 45 10             	mov    0x10(%ebp),%eax
 83253eb:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83253f1:	8b 45 14             	mov    0x14(%ebp),%eax
 83253f4:	c7 00 21 00 00 00    	movl   $0x21,(%eax)
 83253fa:	8b 45 18             	mov    0x18(%ebp),%eax
 83253fd:	c6 00 01             	movb   $0x1,(%eax)
 8325400:	e9 48 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325405:	8b 45 10             	mov    0x10(%ebp),%eax
 8325408:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832540e:	8b 45 14             	mov    0x14(%ebp),%eax
 8325411:	c7 00 26 00 00 00    	movl   $0x26,(%eax)
 8325417:	8b 45 18             	mov    0x18(%ebp),%eax
 832541a:	c6 00 01             	movb   $0x1,(%eax)
 832541d:	e9 2b 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325422:	8b 45 10             	mov    0x10(%ebp),%eax
 8325425:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832542b:	8b 45 14             	mov    0x14(%ebp),%eax
 832542e:	c7 00 27 00 00 00    	movl   $0x27,(%eax)
 8325434:	8b 45 18             	mov    0x18(%ebp),%eax
 8325437:	c6 00 01             	movb   $0x1,(%eax)
 832543a:	e9 0e 04 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832543f:	8b 45 10             	mov    0x10(%ebp),%eax
 8325442:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325448:	8b 45 14             	mov    0x14(%ebp),%eax
 832544b:	c7 00 29 00 00 00    	movl   $0x29,(%eax)
 8325451:	8b 45 18             	mov    0x18(%ebp),%eax
 8325454:	c6 00 01             	movb   $0x1,(%eax)
 8325457:	e9 f1 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832545c:	8b 45 10             	mov    0x10(%ebp),%eax
 832545f:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325465:	8b 45 14             	mov    0x14(%ebp),%eax
 8325468:	c7 00 2c 00 00 00    	movl   $0x2c,(%eax)
 832546e:	8b 45 18             	mov    0x18(%ebp),%eax
 8325471:	c6 00 01             	movb   $0x1,(%eax)
 8325474:	e9 d4 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325479:	8b 45 10             	mov    0x10(%ebp),%eax
 832547c:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325482:	8b 45 14             	mov    0x14(%ebp),%eax
 8325485:	c7 00 21 00 00 00    	movl   $0x21,(%eax)
 832548b:	8b 45 18             	mov    0x18(%ebp),%eax
 832548e:	c6 00 01             	movb   $0x1,(%eax)
 8325491:	e9 b7 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325496:	8b 45 10             	mov    0x10(%ebp),%eax
 8325499:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832549f:	8b 45 14             	mov    0x14(%ebp),%eax
 83254a2:	c7 00 21 00 00 00    	movl   $0x21,(%eax)
 83254a8:	8b 45 18             	mov    0x18(%ebp),%eax
 83254ab:	c6 00 01             	movb   $0x1,(%eax)
 83254ae:	e9 9a 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83254b3:	8b 45 10             	mov    0x10(%ebp),%eax
 83254b6:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83254bc:	8b 45 14             	mov    0x14(%ebp),%eax
 83254bf:	c7 00 23 00 00 00    	movl   $0x23,(%eax)
 83254c5:	8b 45 18             	mov    0x18(%ebp),%eax
 83254c8:	c6 00 01             	movb   $0x1,(%eax)
 83254cb:	e9 7d 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83254d0:	8b 45 10             	mov    0x10(%ebp),%eax
 83254d3:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83254d9:	8b 45 14             	mov    0x14(%ebp),%eax
 83254dc:	c7 00 26 00 00 00    	movl   $0x26,(%eax)
 83254e2:	8b 45 18             	mov    0x18(%ebp),%eax
 83254e5:	c6 00 01             	movb   $0x1,(%eax)
 83254e8:	e9 60 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83254ed:	8b 45 10             	mov    0x10(%ebp),%eax
 83254f0:	c7 00 0a 00 00 00    	movl   $0xa,(%eax)
 83254f6:	8b 45 14             	mov    0x14(%ebp),%eax
 83254f9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 83254ff:	e9 49 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325504:	8b 45 10             	mov    0x10(%ebp),%eax
 8325507:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832550d:	8b 45 14             	mov    0x14(%ebp),%eax
 8325510:	c7 00 4c 00 00 00    	movl   $0x4c,(%eax)
 8325516:	8b 45 18             	mov    0x18(%ebp),%eax
 8325519:	c6 00 01             	movb   $0x1,(%eax)
 832551c:	e9 2c 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325521:	8b 45 10             	mov    0x10(%ebp),%eax
 8325524:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832552a:	8b 45 14             	mov    0x14(%ebp),%eax
 832552d:	c7 00 4d 00 00 00    	movl   $0x4d,(%eax)
 8325533:	8b 45 18             	mov    0x18(%ebp),%eax
 8325536:	c6 00 01             	movb   $0x1,(%eax)
 8325539:	e9 0f 03 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832553e:	8b 45 10             	mov    0x10(%ebp),%eax
 8325541:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325547:	8b 45 14             	mov    0x14(%ebp),%eax
 832554a:	c7 00 4e 00 00 00    	movl   $0x4e,(%eax)
 8325550:	8b 45 18             	mov    0x18(%ebp),%eax
 8325553:	c6 00 01             	movb   $0x1,(%eax)
 8325556:	e9 f2 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832555b:	8b 45 10             	mov    0x10(%ebp),%eax
 832555e:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325564:	8b 45 14             	mov    0x14(%ebp),%eax
 8325567:	c7 00 4f 00 00 00    	movl   $0x4f,(%eax)
 832556d:	8b 45 18             	mov    0x18(%ebp),%eax
 8325570:	c6 00 01             	movb   $0x1,(%eax)
 8325573:	e9 d5 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325578:	8b 45 10             	mov    0x10(%ebp),%eax
 832557b:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325581:	8b 45 14             	mov    0x14(%ebp),%eax
 8325584:	c7 00 4f 00 00 00    	movl   $0x4f,(%eax)
 832558a:	8b 45 18             	mov    0x18(%ebp),%eax
 832558d:	c6 00 01             	movb   $0x1,(%eax)
 8325590:	e9 b8 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325595:	8b 45 10             	mov    0x10(%ebp),%eax
 8325598:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832559e:	8b 45 14             	mov    0x14(%ebp),%eax
 83255a1:	c7 00 50 00 00 00    	movl   $0x50,(%eax)
 83255a7:	8b 45 18             	mov    0x18(%ebp),%eax
 83255aa:	c6 00 01             	movb   $0x1,(%eax)
 83255ad:	e9 9b 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83255b2:	8b 45 10             	mov    0x10(%ebp),%eax
 83255b5:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83255bb:	8b 45 14             	mov    0x14(%ebp),%eax
 83255be:	c7 00 53 00 00 00    	movl   $0x53,(%eax)
 83255c4:	8b 45 18             	mov    0x18(%ebp),%eax
 83255c7:	c6 00 01             	movb   $0x1,(%eax)
 83255ca:	e9 7e 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83255cf:	8b 45 10             	mov    0x10(%ebp),%eax
 83255d2:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83255d8:	8b 45 14             	mov    0x14(%ebp),%eax
 83255db:	c7 00 54 00 00 00    	movl   $0x54,(%eax)
 83255e1:	8b 45 18             	mov    0x18(%ebp),%eax
 83255e4:	c6 00 01             	movb   $0x1,(%eax)
 83255e7:	e9 61 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83255ec:	8b 45 10             	mov    0x10(%ebp),%eax
 83255ef:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 83255f5:	8b 45 14             	mov    0x14(%ebp),%eax
 83255f8:	c7 00 57 00 00 00    	movl   $0x57,(%eax)
 83255fe:	8b 45 18             	mov    0x18(%ebp),%eax
 8325601:	c6 00 01             	movb   $0x1,(%eax)
 8325604:	e9 44 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325609:	8b 45 10             	mov    0x10(%ebp),%eax
 832560c:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325612:	8b 45 14             	mov    0x14(%ebp),%eax
 8325615:	c7 00 5d 00 00 00    	movl   $0x5d,(%eax)
 832561b:	8b 45 18             	mov    0x18(%ebp),%eax
 832561e:	c6 00 01             	movb   $0x1,(%eax)
 8325621:	e9 27 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325626:	8b 45 10             	mov    0x10(%ebp),%eax
 8325629:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832562f:	8b 45 14             	mov    0x14(%ebp),%eax
 8325632:	c7 00 59 00 00 00    	movl   $0x59,(%eax)
 8325638:	8b 45 18             	mov    0x18(%ebp),%eax
 832563b:	c6 00 01             	movb   $0x1,(%eax)
 832563e:	e9 0a 02 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325643:	8b 45 10             	mov    0x10(%ebp),%eax
 8325646:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 832564c:	8b 45 14             	mov    0x14(%ebp),%eax
 832564f:	c7 00 5a 00 00 00    	movl   $0x5a,(%eax)
 8325655:	8b 45 18             	mov    0x18(%ebp),%eax
 8325658:	c6 00 01             	movb   $0x1,(%eax)
 832565b:	e9 ed 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 8325660:	8b 45 10             	mov    0x10(%ebp),%eax
 8325663:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325669:	8b 45 14             	mov    0x14(%ebp),%eax
 832566c:	c7 00 5b 00 00 00    	movl   $0x5b,(%eax)
 8325672:	8b 45 18             	mov    0x18(%ebp),%eax
 8325675:	c6 00 01             	movb   $0x1,(%eax)
 8325678:	e9 d0 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832567d:	8b 45 10             	mov    0x10(%ebp),%eax
 8325680:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8325686:	8b 45 14             	mov    0x14(%ebp),%eax
 8325689:	c7 00 5c 00 00 00    	movl   $0x5c,(%eax)
 832568f:	8b 45 18             	mov    0x18(%ebp),%eax
 8325692:	c6 00 01             	movb   $0x1,(%eax)
 8325695:	e9 b3 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832569a:	8b 45 10             	mov    0x10(%ebp),%eax
 832569d:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 83256a3:	8b 45 14             	mov    0x14(%ebp),%eax
 83256a6:	c7 00 0a 00 00 00    	movl   $0xa,(%eax)
 83256ac:	8b 45 18             	mov    0x18(%ebp),%eax
 83256af:	c6 00 01             	movb   $0x1,(%eax)
 83256b2:	e9 96 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83256b7:	8b 45 10             	mov    0x10(%ebp),%eax
 83256ba:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 83256c0:	8b 45 14             	mov    0x14(%ebp),%eax
 83256c3:	c7 00 32 00 00 00    	movl   $0x32,(%eax)
 83256c9:	8b 45 18             	mov    0x18(%ebp),%eax
 83256cc:	c6 00 01             	movb   $0x1,(%eax)
 83256cf:	e9 79 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83256d4:	8b 45 10             	mov    0x10(%ebp),%eax
 83256d7:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 83256dd:	8b 45 14             	mov    0x14(%ebp),%eax
 83256e0:	c7 00 64 00 00 00    	movl   $0x64,(%eax)
 83256e6:	8b 45 18             	mov    0x18(%ebp),%eax
 83256e9:	c6 00 01             	movb   $0x1,(%eax)
 83256ec:	e9 5c 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 83256f1:	8b 45 10             	mov    0x10(%ebp),%eax
 83256f4:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 83256fa:	8b 45 14             	mov    0x14(%ebp),%eax
 83256fd:	c7 00 f4 01 00 00    	movl   $0x1f4,(%eax)
 8325703:	8b 45 18             	mov    0x18(%ebp),%eax
 8325706:	c6 00 01             	movb   $0x1,(%eax)
 8325709:	e9 3f 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832570e:	8b 45 10             	mov    0x10(%ebp),%eax
 8325711:	c7 00 0d 00 00 00    	movl   $0xd,(%eax)
 8325717:	8b 45 14             	mov    0x14(%ebp),%eax
 832571a:	c7 00 e8 03 00 00    	movl   $0x3e8,(%eax)
 8325720:	8b 45 18             	mov    0x18(%ebp),%eax
 8325723:	c6 00 01             	movb   $0x1,(%eax)
 8325726:	e9 22 01 00 00       	jmp    832584d <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe2f>
 832572b:	e8 6b 6a da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8325730:	8b 55 0c             	mov    0xc(%ebp),%edx
 8325733:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325737:	89 04 24             	mov    %eax,(%esp)
 832573a:	e8 f3 a2 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 832573f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8325742:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8325746:	74 16                	je     832575e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd40>
 8325748:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832574b:	89 04 24             	mov    %eax,(%esp)
 832574e:	e8 a7 bb dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8325753:	84 c0                	test   %al,%al
 8325755:	74 07                	je     832575e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd40>
 8325757:	b8 01 00 00 00       	mov    $0x1,%eax
 832575c:	eb 05                	jmp    8325763 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd45>
 832575e:	b8 00 00 00 00       	mov    $0x0,%eax
 8325763:	84 c0                	test   %al,%al
 8325765:	0f 84 db 00 00 00    	je     8325846 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe28>
 832576b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832576e:	8b 00                	mov    (%eax),%eax
 8325770:	83 c0 0c             	add    $0xc,%eax
 8325773:	8b 10                	mov    (%eax),%edx
 8325775:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325778:	89 04 24             	mov    %eax,(%esp)
 832577b:	ff d2                	call   *%edx
 832577d:	83 f8 26             	cmp    $0x26,%eax
 8325780:	0f 94 c0             	sete   %al
 8325783:	84 c0                	test   %al,%al
 8325785:	74 0a                	je     8325791 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xd73>
 8325787:	b8 00 00 00 00       	mov    $0x0,%eax
 832578c:	e9 c1 00 00 00       	jmp    8325852 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe34>
 8325791:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325794:	8b 00                	mov    (%eax),%eax
 8325796:	83 c0 0c             	add    $0xc,%eax
 8325799:	8b 10                	mov    (%eax),%edx
 832579b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832579e:	89 04 24             	mov    %eax,(%esp)
 83257a1:	ff d2                	call   *%edx
 83257a3:	83 f8 0e             	cmp    $0xe,%eax
 83257a6:	0f 94 c0             	sete   %al
 83257a9:	84 c0                	test   %al,%al
 83257ab:	74 19                	je     83257c6 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xda8>
 83257ad:	8b 45 10             	mov    0x10(%ebp),%eax
 83257b0:	c7 00 05 00 00 00    	movl   $0x5,(%eax)
 83257b6:	8b 45 18             	mov    0x18(%ebp),%eax
 83257b9:	c6 00 01             	movb   $0x1,(%eax)
 83257bc:	b8 01 00 00 00       	mov    $0x1,%eax
 83257c1:	e9 8c 00 00 00       	jmp    8325852 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe34>
 83257c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83257c9:	8b 00                	mov    (%eax),%eax
 83257cb:	83 c0 0c             	add    $0xc,%eax
 83257ce:	8b 10                	mov    (%eax),%edx
 83257d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83257d3:	89 04 24             	mov    %eax,(%esp)
 83257d6:	ff d2                	call   *%edx
 83257d8:	83 f8 0f             	cmp    $0xf,%eax
 83257db:	74 17                	je     83257f4 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xdd6>
 83257dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83257e0:	8b 00                	mov    (%eax),%eax
 83257e2:	83 c0 0c             	add    $0xc,%eax
 83257e5:	8b 10                	mov    (%eax),%edx
 83257e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83257ea:	89 04 24             	mov    %eax,(%esp)
 83257ed:	ff d2                	call   *%edx
 83257ef:	83 f8 10             	cmp    $0x10,%eax
 83257f2:	75 07                	jne    83257fb <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xddd>
 83257f4:	b8 01 00 00 00       	mov    $0x1,%eax
 83257f9:	eb 05                	jmp    8325800 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xde2>
 83257fb:	b8 00 00 00 00       	mov    $0x0,%eax
 8325800:	84 c0                	test   %al,%al
 8325802:	74 16                	je     832581a <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xdfc>
 8325804:	8b 45 10             	mov    0x10(%ebp),%eax
 8325807:	c7 00 06 00 00 00    	movl   $0x6,(%eax)
 832580d:	8b 45 18             	mov    0x18(%ebp),%eax
 8325810:	c6 00 01             	movb   $0x1,(%eax)
 8325813:	b8 01 00 00 00       	mov    $0x1,%eax
 8325818:	eb 38                	jmp    8325852 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe34>
 832581a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832581d:	8b 00                	mov    (%eax),%eax
 832581f:	83 c0 0c             	add    $0xc,%eax
 8325822:	8b 10                	mov    (%eax),%edx
 8325824:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325827:	89 04 24             	mov    %eax,(%esp)
 832582a:	ff d2                	call   *%edx
 832582c:	83 f8 22             	cmp    $0x22,%eax
 832582f:	0f 94 c0             	sete   %al
 8325832:	84 c0                	test   %al,%al
 8325834:	74 10                	je     8325846 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe28>
 8325836:	8b 45 10             	mov    0x10(%ebp),%eax
 8325839:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
 832583f:	b8 01 00 00 00       	mov    $0x1,%eax
 8325844:	eb 0c                	jmp    8325852 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe34>
 8325846:	b8 00 00 00 00       	mov    $0x0,%eax
 832584b:	eb 05                	jmp    8325852 <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb+0xe34>
 832584d:	b8 01 00 00 00       	mov    $0x1,%eax
 8325852:	c9                   	leave
 8325853:	c3                   	ret

```

```c
// WongWork::CCeraShop::IsSpecialItem @ 0x8324a1e

/* WongWork::CCeraShop::IsSpecialItem(int, int&, int&, bool&) */

undefined4 __thiscall
WongWork::CCeraShop::IsSpecialItem
          (CCeraShop *this,int param_1,int *param_2,int *param_3,bool *param_4)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  
  if (param_1 == 0x334) {
    *param_2 = 2;
    *param_3 = 0x29;
    *param_4 = true;
    return 1;
  }
  if (param_1 < 0x335) {
    if (param_1 == 0x2d) {
      *param_2 = 2;
      *param_3 = 0x19;
      *param_4 = true;
      return 1;
    }
    if (param_1 < 0x2e) {
      if (param_1 == 0x16) {
        *param_2 = 2;
        *param_3 = 0xd;
        *param_4 = false;
        return 1;
      }
      if (param_1 < 0x17) {
        if (param_1 == 0x10) {
          *param_2 = 4;
          *param_3 = 8;
          return 1;
        }
        if (param_1 < 0x11) {
          if (param_1 == 6) {
            *param_2 = 1;
            *param_3 = 0x98;
            return 1;
          }
          if (param_1 < 7) {
            if (param_1 == 5) {
              *param_2 = 1;
              *param_3 = 0x18;
              return 1;
            }
          }
          else {
            if (param_1 == 9) {
              *param_2 = 2;
              *param_3 = 1;
              return 1;
            }
            if (param_1 == 0xb) {
              *param_2 = 2;
              *param_3 = 3;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x12) {
            *param_2 = 2;
            *param_3 = 9;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x12) {
            *param_2 = 3;
            *param_3 = 7;
            return 1;
          }
          if (param_1 == 0x13) {
            *param_2 = 2;
            *param_3 = 10;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x14) {
            *param_2 = 2;
            *param_3 = 0xb;
            *param_4 = true;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 0x20) {
          *param_2 = 2;
          *param_3 = 0x13;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x21) {
          if (param_1 == 0x1d) {
            *param_2 = 2;
            *param_3 = 0x10;
            *param_4 = false;
            return 1;
          }
          if (param_1 < 0x1e) {
            if (param_1 == 0x17) {
              *param_2 = 2;
              *param_3 = 0xe;
              *param_4 = false;
              return 1;
            }
          }
          else {
            if (param_1 == 0x1e) {
              *param_2 = 2;
              *param_3 = 0x11;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x1f) {
              *param_2 = 2;
              *param_3 = 0x12;
              *param_4 = true;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x23) {
            *param_2 = 2;
            *param_3 = 0x16;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x24) {
            if (param_1 == 0x21) {
              *param_2 = 2;
              *param_3 = 0x14;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x22) {
              *param_2 = 2;
              *param_3 = 0x15;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2b) {
              *param_2 = 2;
              *param_3 = 0x17;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2c) {
              *param_2 = 2;
              *param_3 = 0x18;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0xc2) {
        *param_2 = 2;
        *param_3 = 0x1f;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0xc3) {
        if (param_1 < 0x3f) {
          if (param_1 < 0x39) {
            if (param_1 == 0x2f) {
              *param_2 = 2;
              *param_3 = 0x1b;
              *param_4 = true;
              return 1;
            }
            if (param_1 < 0x2f) {
              *param_2 = 2;
              *param_3 = 0x1a;
              *param_4 = true;
              return 1;
            }
            if (param_1 != 0x32) goto LAB_0832572b;
          }
LAB_08324edd:
          *param_2 = 7;
          *param_3 = 0x10;
          return 1;
        }
        if (param_1 == 0x6e) {
          *param_2 = 1;
          *param_3 = 0x28;
          return 1;
        }
        if (param_1 < 0x6f) {
          if (param_1 == 0x44) {
            *param_2 = 1;
            *param_3 = 0x48;
            return 1;
          }
        }
        else {
          if (param_1 == 0x89) {
            *param_2 = 2;
            *param_3 = 0x1d;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0xc1) {
            *param_2 = 2;
            *param_3 = 0x1e;
            *param_4 = true;
            return 1;
          }
        }
      }
      else {
        if (param_1 == 200) {
          *param_2 = 2;
          *param_3 = 0x28;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0xc9) {
          if (param_1 == 0xc4) {
            *param_2 = 2;
            *param_3 = 0x20;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0xc4) {
            *param_2 = 9;
            *param_3 = 0;
            return 1;
          }
          if (param_1 == 0xc5) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0xc6) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
        }
        else {
          if (param_1 == 0x2e6) {
            *param_2 = 2;
            *param_3 = 0x25;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x2e7) {
            if (param_1 == 0x2d0) {
              *param_2 = 2;
              *param_3 = 0x23;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2e5) {
              *param_2 = 2;
              *param_3 = 0x24;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2e7) {
              *param_2 = 2;
              *param_3 = 0x26;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2e8) {
              *param_2 = 2;
              *param_3 = 0x27;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
  }
  else {
    if (param_1 == 0x2898c0) {
      *param_2 = 2;
      *param_3 = 0x53;
      *param_4 = true;
      return 1;
    }
    if (param_1 < 0x2898c1) {
      if (param_1 == 0x2897c2) {
        *param_2 = 2;
        *param_3 = 0x21;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0x2897c3) {
        if (param_1 == 0x2896d2) {
          *param_2 = 2;
          *param_3 = 0x2f;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x2896d3) {
          if (param_1 == 0x398) {
            *param_2 = 2;
            *param_3 = 0x2c;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x399) {
            if (param_1 == 0x335) {
              *param_2 = 10;
              *param_3 = 0;
              return 1;
            }
          }
          else {
            if (param_1 == 0x2896ac) {
              *param_2 = 2;
              *param_3 = 0x2d;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2896ad) {
              *param_2 = 2;
              *param_3 = 0x2e;
              *param_4 = true;
              return 1;
            }
          }
        }
        else if (param_1 < 0x28978d) {
          if (0x28978a < param_1) goto LAB_08324edd;
          if (param_1 == 0x2896d3) {
            *param_2 = 2;
            *param_3 = 0x30;
            *param_4 = true;
            return 1;
          }
        }
        else if (param_1 == 0x28978f) {
          *param_2 = 8;
          *param_3 = 1;
          return 1;
        }
      }
      else {
        if (param_1 == 0x289832) {
          *param_2 = 2;
          *param_3 = 0x26;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x289833) {
          if (param_1 == 0x289806) {
            *param_2 = 2;
            *param_3 = 0x21;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x289807) {
            if (param_1 - 0x2897c8U < 2) {
              *param_2 = 0xb;
              *param_3 = 8;
              return 1;
            }
          }
          else if (param_1 == 0x289831) {
            *param_2 = 2;
            *param_3 = 0x23;
            *param_4 = true;
            return 1;
          }
        }
        else {
          if (param_1 == 0x28983a) {
            *param_2 = 2;
            *param_3 = 0x4d;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x28983b) {
            if (param_1 == 0x289838) {
              *param_2 = 2;
              *param_3 = 0x4f;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x289839) {
              *param_2 = 2;
              *param_3 = 0x4c;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x28983b) {
              *param_2 = 2;
              *param_3 = 0x4e;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2898bf) {
              *param_2 = 2;
              *param_3 = 0x50;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0x28d172) {
        *param_2 = 2;
        *param_3 = 0x2b;
        *param_4 = true;
        return 1;
      }
      if (param_1 < 0x28d173) {
        if (param_1 == 0x28beba) {
          *param_2 = 2;
          *param_3 = 0x46;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x28bebb) {
          if (param_1 == 0x2898c2) {
            *param_2 = 2;
            *param_3 = 0x57;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x2898c2) {
            *param_2 = 2;
            *param_3 = 0x54;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x28995f) {
            *param_2 = 2;
            *param_3 = 0x4f;
            *param_4 = true;
            return 1;
          }
          if (param_1 == 0x28bdb9) {
            *param_2 = 1;
            *param_3 = 0x28;
            return 1;
          }
        }
        else {
          if (param_1 == 0x28d152) {
            *param_2 = 2;
            *param_3 = 0x17;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x28d153) {
            if (param_1 == 0x28d151) {
              *param_2 = 2;
              *param_3 = 0x11;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x28d154) {
              *param_2 = 2;
              *param_3 = 0x1f;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x28d171) {
              *param_2 = 4;
              *param_3 = 0x2a;
              return 1;
            }
          }
        }
      }
      else {
        if (param_1 == 0x989807) {
          *param_2 = 2;
          *param_3 = 0x5d;
          *param_4 = true;
          return 1;
        }
        if (param_1 < 0x989808) {
          if (param_1 == 0x989804) {
            *param_2 = 2;
            *param_3 = 0x59;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x989805) {
            if (param_1 == 0x989803) {
              *param_2 = 2;
              *param_3 = 0x5c;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x989805) {
              *param_2 = 2;
              *param_3 = 0x5a;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x989806) {
              *param_2 = 2;
              *param_3 = 0x5b;
              *param_4 = true;
              return 1;
            }
          }
        }
        else {
          if (param_1 == 0x2920915f) {
            *param_2 = 0xd;
            *param_3 = 100;
            *param_4 = true;
            return 1;
          }
          if (param_1 < 0x29209160) {
            if (param_1 == 0x2920915d) {
              *param_2 = 0xd;
              *param_3 = 10;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x2920915e) {
              *param_2 = 0xd;
              *param_3 = 0x32;
              *param_4 = true;
              return 1;
            }
          }
          else {
            if (param_1 == 0x29209160) {
              *param_2 = 0xd;
              *param_3 = 500;
              *param_4 = true;
              return 1;
            }
            if (param_1 == 0x29209161) {
              *param_2 = 0xd;
              *param_3 = 1000;
              *param_4 = true;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_0832572b:
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if ((this_01 == (CItem *)0x0) || (cVar2 = CItem::is_stackable(this_01), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0x26) {
      return 0;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0xe) {
      *param_2 = 5;
      *param_4 = true;
      return 1;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if ((iVar3 == 0xf) || (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 == 0x10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *param_2 = 6;
      *param_4 = true;
      return 1;
    }
    iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01);
    if (iVar3 == 0x22) {
      *param_2 = 0xc;
      return 1;
    }
  }
  return 0;
}

```

---

## LogError

```asm
// === 0832033a WongWork::CCeraShop::LogError  [0x0832033a-0x8320479] ===
 832033a:	55                   	push   %ebp
 832033b:	89 e5                	mov    %esp,%ebp
 832033d:	56                   	push   %esi
 832033e:	53                   	push   %ebx
 832033f:	83 ec 40             	sub    $0x40,%esp
 8320342:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8320347:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 832034e:	00 
 832034f:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8320356:	08 
 8320357:	89 04 24             	mov    %eax,(%esp)
 832035a:	e8 27 f7 f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 832035f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8320366:	00 
 8320367:	89 44 24 04          	mov    %eax,0x4(%esp)
 832036b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832036e:	89 04 24             	mov    %eax,(%esp)
 8320371:	e8 b0 88 da ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8320376:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8320379:	89 04 24             	mov    %eax,(%esp)
 832037c:	e8 c5 88 da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8320381:	c7 44 24 04 2e 03 00 	movl   $0x32e,0x4(%esp)
 8320388:	00 
 8320389:	89 04 24             	mov    %eax,(%esp)
 832038c:	e8 c5 88 da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8320391:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320394:	8b 18                	mov    (%eax),%ebx
 8320396:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8320399:	89 04 24             	mov    %eax,(%esp)
 832039c:	e8 a5 88 da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 83203a1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83203a5:	89 04 24             	mov    %eax,(%esp)
 83203a8:	e8 e5 1e dc ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 83203ad:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83203b0:	89 04 24             	mov    %eax,(%esp)
 83203b3:	e8 58 7d 00 00       	call   8328110 <_ZN22SIG_CERASHOP_ERROR_LOGC1Ev>
 83203b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83203bb:	8b 00                	mov    (%eax),%eax
 83203bd:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83203c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83203c3:	8b 40 04             	mov    0x4(%eax),%eax
 83203c6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83203c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83203cc:	8b 40 08             	mov    0x8(%eax),%eax
 83203cf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83203d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83203d5:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 83203d9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 83203dd:	e8 9f bd da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 83203e2:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 83203e8:	0f b6 c0             	movzbl %al,%eax
 83203eb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83203ee:	e8 8e bd da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 83203f3:	89 04 24             	mov    %eax,(%esp)
 83203f6:	e8 cf a6 e2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 83203fb:	89 45 e0             	mov    %eax,-0x20(%ebp)
 83203fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320401:	8b 40 0c             	mov    0xc(%eax),%eax
 8320404:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8320407:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832040a:	89 04 24             	mov    %eax,(%esp)
 832040d:	e8 3c 88 da ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8320412:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 8320419:	00 
 832041a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 832041d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8320421:	89 04 24             	mov    %eax,(%esp)
 8320424:	e8 29 e2 db ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8320429:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 832042e:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8320431:	89 54 24 08          	mov    %edx,0x8(%esp)
 8320435:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 832043c:	00 
 832043d:	89 04 24             	mov    %eax,(%esp)
 8320440:	e8 99 0b 25 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8320445:	bb 01 00 00 00       	mov    $0x1,%ebx
 832044a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832044d:	89 04 24             	mov    %eax,(%esp)
 8320450:	e8 7d c4 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8320455:	89 d8                	mov    %ebx,%eax
 8320457:	83 c4 40             	add    $0x40,%esp
 832045a:	5b                   	pop    %ebx
 832045b:	5e                   	pop    %esi
 832045c:	5d                   	pop    %ebp
 832045d:	c3                   	ret
 832045e:	89 d3                	mov    %edx,%ebx
 8320460:	89 c6                	mov    %eax,%esi
 8320462:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8320465:	89 04 24             	mov    %eax,(%esp)
 8320468:	e8 65 c4 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832046d:	89 f0                	mov    %esi,%eax
 832046f:	89 da                	mov    %ebx,%edx
 8320471:	89 04 24             	mov    %eax,(%esp)
 8320474:	e8 d7 32 7c 00       	call   8ae3750 <_Unwind_Resume>
 8320479:	90                   	nop

```

```c
// WongWork::CCeraShop::LogError @ 0x832033a

/* WongWork::CCeraShop::LogError(WongWork::CCeraShop::stErrorLogInput_t const&) const */

undefined4 __thiscall WongWork::CCeraShop::LogError(CCeraShop *this,stErrorLogInput_t *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  CEnvironment *this_00;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CStreamGuard local_14 [8];
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x7a);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0832038c to 08320444 has its CatchHandler @ 0832045e */
  CStreamGuard::operator<<(pCVar3,0x32e);
  uVar1 = *(uint *)param_1;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,uVar1);
  SIG_CERASHOP_ERROR_LOG::SIG_CERASHOP_ERROR_LOG((SIG_CERASHOP_ERROR_LOG *)&local_30);
  local_30 = *(undefined4 *)param_1;
  local_2c = *(undefined4 *)(param_1 + 4);
  local_1c = *(undefined4 *)(param_1 + 8);
  local_20 = *(undefined2 *)(param_1 + 0x10);
  iVar4 = G_CEnvironment();
  local_28 = *(uint *)(iVar4 + 0x378) & 0xff;
  this_00 = (CEnvironment *)G_CEnvironment();
  local_24 = CEnvironment::get_channel_no(this_00);
  local_18 = *(undefined4 *)(param_1 + 0xc);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar3,&local_30,0x1c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## ProcessBuyRequest

```asm
// === 0832047a WongWork::CCeraShop::ProcessBuyRequest  [0x0832047a-0x8321d2d] ===
 832047a:	55                   	push   %ebp
 832047b:	89 e5                	mov    %esp,%ebp
 832047d:	57                   	push   %edi
 832047e:	56                   	push   %esi
 832047f:	53                   	push   %ebx
 8320480:	81 ec 0c 04 00 00    	sub    $0x40c,%esp
 8320486:	8b 45 10             	mov    0x10(%ebp),%eax
 8320489:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832048d:	0f b6 f0             	movzbl %al,%esi
 8320490:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320493:	89 04 24             	mov    %eax,(%esp)
 8320496:	e8 d3 9e db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 832049b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83204a2:	00 
 83204a3:	89 04 24             	mov    %eax,(%esp)
 83204a6:	e8 a0 8b de ff       	call   810904b <_Z14NumberToStringji>
 83204ab:	89 c3                	mov    %eax,%ebx
 83204ad:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83204b4:	00 
 83204b5:	c7 44 24 08 92 00 00 	movl   $0x92,0x8(%esp)
 83204bc:	00 
 83204bd:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83204c4:	08 
 83204c5:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 83204cb:	89 04 24             	mov    %eax,(%esp)
 83204ce:	e8 45 f2 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83204d3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 83204d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83204db:	c7 44 24 04 90 5c c2 	movl   $0x8c25c90,0x4(%esp)
 83204e2:	08 
 83204e3:	8d 85 98 fe ff ff    	lea    -0x168(%ebp),%eax
 83204e9:	89 04 24             	mov    %eax,(%esp)
 83204ec:	e8 97 f2 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83204f1:	8d 9d 58 fd ff ff    	lea    -0x2a8(%ebp),%ebx
 83204f7:	b8 00 00 00 00       	mov    $0x0,%eax
 83204fc:	ba 24 00 00 00       	mov    $0x24,%edx
 8320501:	89 df                	mov    %ebx,%edi
 8320503:	89 d1                	mov    %edx,%ecx
 8320505:	f3 ab                	rep stos %eax,%es:(%edi)
 8320507:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 832050e:	00 00 00 
 8320511:	c7 45 80 00 00 00 00 	movl   $0x0,-0x80(%ebp)
 8320518:	8b 45 10             	mov    0x10(%ebp),%eax
 832051b:	8b 40 39             	mov    0x39(%eax),%eax
 832051e:	89 c3                	mov    %eax,%ebx
 8320520:	e8 76 bc da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8320525:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8320529:	89 04 24             	mov    %eax,(%esp)
 832052c:	e8 b3 f8 03 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 8320531:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8320534:	83 7d 84 00          	cmpl   $0x0,-0x7c(%ebp)
 8320538:	75 54                	jne    832058e <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x114>
 832053a:	8b 45 10             	mov    0x10(%ebp),%eax
 832053d:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320541:	0f be d0             	movsbl %al,%edx
 8320544:	8b 45 10             	mov    0x10(%ebp),%eax
 8320547:	8b 40 39             	mov    0x39(%eax),%eax
 832054a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 832054e:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8320555:	00 
 8320556:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 832055d:	00 
 832055e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320562:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8320569:	00 
 832056a:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8320571:	00 
 8320572:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320575:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320579:	8b 45 08             	mov    0x8(%ebp),%eax
 832057c:	89 04 24             	mov    %eax,(%esp)
 832057f:	e8 f4 33 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320584:	b8 01 00 00 00       	mov    $0x1,%eax
 8320589:	e9 94 17 00 00       	jmp    8321d22 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x18a8>
 832058e:	e8 ad eb 16 00       	call   848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>
 8320593:	84 c0                	test   %al,%al
 8320595:	74 0b                	je     83205a2 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x128>
 8320597:	8b 45 0c             	mov    0xc(%ebp),%eax
 832059a:	89 04 24             	mov    %eax,(%esp)
 832059d:	e8 b8 7b 00 00       	call   832815a <_ZN5CUser22ClearChildrensDayEventEv>
 83205a2:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 83205a9:	8d 9d c8 fc ff ff    	lea    -0x338(%ebp),%ebx
 83205af:	b8 00 00 00 00       	mov    $0x0,%eax
 83205b4:	ba 24 00 00 00       	mov    $0x24,%edx
 83205b9:	89 df                	mov    %ebx,%edi
 83205bb:	89 d1                	mov    %edx,%ecx
 83205bd:	f3 ab                	rep stos %eax,%es:(%edi)
 83205bf:	8d 9d 38 fc ff ff    	lea    -0x3c8(%ebp),%ebx
 83205c5:	b8 00 00 00 00       	mov    $0x0,%eax
 83205ca:	ba 24 00 00 00       	mov    $0x24,%edx
 83205cf:	89 df                	mov    %ebx,%edi
 83205d1:	89 d1                	mov    %edx,%ecx
 83205d3:	f3 ab                	rep stos %eax,%es:(%edi)
 83205d5:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 83205dc:	e9 73 07 00 00       	jmp    8320d54 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8da>
 83205e1:	8b 5d 88             	mov    -0x78(%ebp),%ebx
 83205e4:	8b 45 88             	mov    -0x78(%ebp),%eax
 83205e7:	8b 55 10             	mov    0x10(%ebp),%edx
 83205ea:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83205f0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83205f3:	83 c0 30             	add    $0x30,%eax
 83205f6:	8b 40 09             	mov    0x9(%eax),%eax
 83205f9:	89 c6                	mov    %eax,%esi
 83205fb:	e8 9b bb da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8320600:	89 74 24 04          	mov    %esi,0x4(%esp)
 8320604:	89 04 24             	mov    %eax,(%esp)
 8320607:	e8 d8 f7 03 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 832060c:	89 84 9d c8 fc ff ff 	mov    %eax,-0x338(%ebp,%ebx,4)
 8320613:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320616:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 832061d:	85 c0                	test   %eax,%eax
 832061f:	0f 85 c6 00 00 00    	jne    83206eb <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x271>
 8320625:	c7 45 b4 ff ff ff ff 	movl   $0xffffffff,-0x4c(%ebp)
 832062c:	8b 45 10             	mov    0x10(%ebp),%eax
 832062f:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320633:	0f be c8             	movsbl %al,%ecx
 8320636:	8b 45 10             	mov    0x10(%ebp),%eax
 8320639:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832063d:	0f b6 d0             	movzbl %al,%edx
 8320640:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320643:	8d 58 01             	lea    0x1(%eax),%ebx
 8320646:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320649:	8b 75 10             	mov    0x10(%ebp),%esi
 832064c:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320652:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320655:	83 c0 30             	add    $0x30,%eax
 8320658:	8b 40 09             	mov    0x9(%eax),%eax
 832065b:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 832065f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320663:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320667:	89 44 24 10          	mov    %eax,0x10(%esp)
 832066b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 832066e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320672:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8320679:	00 
 832067a:	8b 45 0c             	mov    0xc(%ebp),%eax
 832067d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320681:	8b 45 08             	mov    0x8(%ebp),%eax
 8320684:	89 04 24             	mov    %eax,(%esp)
 8320687:	e8 ec 32 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 832068c:	8b 45 88             	mov    -0x78(%ebp),%eax
 832068f:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8320696:	00 00 00 00 
 832069a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83206a1:	00 
 83206a2:	c7 44 24 08 c3 00 00 	movl   $0xc3,0x8(%esp)
 83206a9:	00 
 83206aa:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83206b1:	08 
 83206b2:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 83206b8:	89 04 24             	mov    %eax,(%esp)
 83206bb:	e8 58 f0 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83206c0:	c7 44 24 0c c3 00 00 	movl   $0xc3,0xc(%esp)
 83206c7:	00 
 83206c8:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83206cf:	08 
 83206d0:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83206d7:	08 
 83206d8:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 83206de:	89 04 24             	mov    %eax,(%esp)
 83206e1:	e8 a2 f0 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83206e6:	e9 65 06 00 00       	jmp    8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 83206eb:	8b 45 88             	mov    -0x78(%ebp),%eax
 83206ee:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83206f5:	89 04 24             	mov    %eax,(%esp)
 83206f8:	e8 4b 99 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 83206fd:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8320700:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320703:	89 04 24             	mov    %eax,(%esp)
 8320706:	e8 e3 e6 df ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 832070b:	83 f0 01             	xor    $0x1,%eax
 832070e:	84 c0                	test   %al,%al
 8320710:	0f 84 d3 01 00 00    	je     83208e9 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x46f>
 8320716:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320719:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320720:	89 04 24             	mov    %eax,(%esp)
 8320723:	e8 38 99 e5 ff       	call   817a060 <_ZNK14CCeraShopGoods10GetStickerEv>
 8320728:	83 f8 63             	cmp    $0x63,%eax
 832072b:	0f 94 c0             	sete   %al
 832072e:	84 c0                	test   %al,%al
 8320730:	0f 84 bf 00 00 00    	je     83207f5 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x37b>
 8320736:	8b 45 10             	mov    0x10(%ebp),%eax
 8320739:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 832073d:	0f be c8             	movsbl %al,%ecx
 8320740:	8b 45 10             	mov    0x10(%ebp),%eax
 8320743:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8320747:	0f b6 d0             	movzbl %al,%edx
 832074a:	8b 45 88             	mov    -0x78(%ebp),%eax
 832074d:	8d 58 01             	lea    0x1(%eax),%ebx
 8320750:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320753:	8b 75 10             	mov    0x10(%ebp),%esi
 8320756:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832075c:	8d 04 06             	lea    (%esi,%eax,1),%eax
 832075f:	83 c0 30             	add    $0x30,%eax
 8320762:	8b 40 09             	mov    0x9(%eax),%eax
 8320765:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8320769:	89 54 24 18          	mov    %edx,0x18(%esp)
 832076d:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320771:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320775:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8320778:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832077c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8320783:	00 
 8320784:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320787:	89 44 24 04          	mov    %eax,0x4(%esp)
 832078b:	8b 45 08             	mov    0x8(%ebp),%eax
 832078e:	89 04 24             	mov    %eax,(%esp)
 8320791:	e8 e2 31 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320796:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320799:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 83207a0:	00 00 00 00 
 83207a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83207ab:	00 
 83207ac:	c7 44 24 08 de 00 00 	movl   $0xde,0x8(%esp)
 83207b3:	00 
 83207b4:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83207bb:	08 
 83207bc:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 83207c2:	89 04 24             	mov    %eax,(%esp)
 83207c5:	e8 4e ef 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83207ca:	c7 44 24 0c de 00 00 	movl   $0xde,0xc(%esp)
 83207d1:	00 
 83207d2:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83207d9:	08 
 83207da:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83207e1:	08 
 83207e2:	8d 85 b8 fe ff ff    	lea    -0x148(%ebp),%eax
 83207e8:	89 04 24             	mov    %eax,(%esp)
 83207eb:	e8 98 ef 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83207f0:	e9 5b 05 00 00       	jmp    8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 83207f5:	8b 45 10             	mov    0x10(%ebp),%eax
 83207f8:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 83207fc:	3c 01                	cmp    $0x1,%al
 83207fe:	75 1d                	jne    832081d <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x3a3>
 8320800:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320803:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 832080a:	89 04 24             	mov    %eax,(%esp)
 832080d:	e8 66 98 e5 ff       	call   817a078 <_ZNK14CCeraShopGoods19isGiftDisallowance_Ev>
 8320812:	84 c0                	test   %al,%al
 8320814:	74 07                	je     832081d <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x3a3>
 8320816:	b8 01 00 00 00       	mov    $0x1,%eax
 832081b:	eb 05                	jmp    8320822 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x3a8>
 832081d:	b8 00 00 00 00       	mov    $0x0,%eax
 8320822:	84 c0                	test   %al,%al
 8320824:	0f 84 bf 00 00 00    	je     83208e9 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x46f>
 832082a:	8b 45 10             	mov    0x10(%ebp),%eax
 832082d:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320831:	0f be c8             	movsbl %al,%ecx
 8320834:	8b 45 10             	mov    0x10(%ebp),%eax
 8320837:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832083b:	0f b6 d0             	movzbl %al,%edx
 832083e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320841:	8d 58 01             	lea    0x1(%eax),%ebx
 8320844:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320847:	8b 75 10             	mov    0x10(%ebp),%esi
 832084a:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320850:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320853:	83 c0 30             	add    $0x30,%eax
 8320856:	8b 40 09             	mov    0x9(%eax),%eax
 8320859:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 832085d:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320861:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320865:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320869:	8b 45 b0             	mov    -0x50(%ebp),%eax
 832086c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320870:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8320877:	00 
 8320878:	8b 45 0c             	mov    0xc(%ebp),%eax
 832087b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832087f:	8b 45 08             	mov    0x8(%ebp),%eax
 8320882:	89 04 24             	mov    %eax,(%esp)
 8320885:	e8 ee 30 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 832088a:	8b 45 88             	mov    -0x78(%ebp),%eax
 832088d:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8320894:	00 00 00 00 
 8320898:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832089f:	00 
 83208a0:	c7 44 24 08 e8 00 00 	movl   $0xe8,0x8(%esp)
 83208a7:	00 
 83208a8:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83208af:	08 
 83208b0:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 83208b6:	89 04 24             	mov    %eax,(%esp)
 83208b9:	e8 5a ee 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83208be:	c7 44 24 0c e8 00 00 	movl   $0xe8,0xc(%esp)
 83208c5:	00 
 83208c6:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83208cd:	08 
 83208ce:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83208d5:	08 
 83208d6:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 83208dc:	89 04 24             	mov    %eax,(%esp)
 83208df:	e8 a4 ee 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83208e4:	e9 67 04 00 00       	jmp    8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 83208e9:	8b 45 88             	mov    -0x78(%ebp),%eax
 83208ec:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83208f3:	89 04 24             	mov    %eax,(%esp)
 83208f6:	e8 4d 97 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 83208fb:	83 f8 01             	cmp    $0x1,%eax
 83208fe:	0f 95 c0             	setne  %al
 8320901:	84 c0                	test   %al,%al
 8320903:	0f 84 ef 00 00 00    	je     83209f8 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x57e>
 8320909:	8b 5d 88             	mov    -0x78(%ebp),%ebx
 832090c:	8b 45 88             	mov    -0x78(%ebp),%eax
 832090f:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320916:	89 04 24             	mov    %eax,(%esp)
 8320919:	e8 4e 97 e5 ff       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 832091e:	89 84 9d 38 fc ff ff 	mov    %eax,-0x3c8(%ebp,%ebx,4)
 8320925:	8b 84 9d 38 fc ff ff 	mov    -0x3c8(%ebp,%ebx,4),%eax
 832092c:	85 c0                	test   %eax,%eax
 832092e:	0f 94 c0             	sete   %al
 8320931:	84 c0                	test   %al,%al
 8320933:	0f 84 bf 00 00 00    	je     83209f8 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x57e>
 8320939:	8b 45 10             	mov    0x10(%ebp),%eax
 832093c:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320940:	0f be c8             	movsbl %al,%ecx
 8320943:	8b 45 10             	mov    0x10(%ebp),%eax
 8320946:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832094a:	0f b6 d0             	movzbl %al,%edx
 832094d:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320950:	8d 58 01             	lea    0x1(%eax),%ebx
 8320953:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320956:	8b 75 10             	mov    0x10(%ebp),%esi
 8320959:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832095f:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320962:	83 c0 30             	add    $0x30,%eax
 8320965:	8b 40 09             	mov    0x9(%eax),%eax
 8320968:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 832096c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320970:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320974:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320978:	8b 45 b0             	mov    -0x50(%ebp),%eax
 832097b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832097f:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8320986:	00 
 8320987:	8b 45 0c             	mov    0xc(%ebp),%eax
 832098a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832098e:	8b 45 08             	mov    0x8(%ebp),%eax
 8320991:	89 04 24             	mov    %eax,(%esp)
 8320994:	e8 df 2f 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320999:	8b 45 88             	mov    -0x78(%ebp),%eax
 832099c:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 83209a3:	00 00 00 00 
 83209a7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83209ae:	00 
 83209af:	c7 44 24 08 16 01 00 	movl   $0x116,0x8(%esp)
 83209b6:	00 
 83209b7:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83209be:	08 
 83209bf:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 83209c5:	89 04 24             	mov    %eax,(%esp)
 83209c8:	e8 4b ed 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83209cd:	c7 44 24 0c 16 01 00 	movl   $0x116,0xc(%esp)
 83209d4:	00 
 83209d5:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83209dc:	08 
 83209dd:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83209e4:	08 
 83209e5:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 83209eb:	89 04 24             	mov    %eax,(%esp)
 83209ee:	e8 95 ed 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83209f3:	e9 58 03 00 00       	jmp    8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 83209f8:	8b 45 88             	mov    -0x78(%ebp),%eax
 83209fb:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320a02:	89 04 24             	mov    %eax,(%esp)
 8320a05:	e8 ec 95 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8320a0a:	3d 34 03 00 00       	cmp    $0x334,%eax
 8320a0f:	0f 84 a5 00 00 00    	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a15:	3d 34 03 00 00       	cmp    $0x334,%eax
 8320a1a:	7f 4b                	jg     8320a67 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x5ed>
 8320a1c:	3d c5 00 00 00       	cmp    $0xc5,%eax
 8320a21:	7f 22                	jg     8320a45 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x5cb>
 8320a23:	3d c4 00 00 00       	cmp    $0xc4,%eax
 8320a28:	0f 8d 8c 00 00 00    	jge    8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a2e:	3d c2 00 00 00       	cmp    $0xc2,%eax
 8320a33:	0f 84 81 00 00 00    	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a39:	3d c3 00 00 00       	cmp    $0xc3,%eax
 8320a3e:	74 62                	je     8320aa2 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x628>
 8320a40:	e9 8c 01 00 00       	jmp    8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320a45:	3d d0 02 00 00       	cmp    $0x2d0,%eax
 8320a4a:	74 6e                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a4c:	3d d0 02 00 00       	cmp    $0x2d0,%eax
 8320a51:	0f 8c 7a 01 00 00    	jl     8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320a57:	2d e7 02 00 00       	sub    $0x2e7,%eax
 8320a5c:	83 f8 01             	cmp    $0x1,%eax
 8320a5f:	0f 87 6c 01 00 00    	ja     8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320a65:	eb 53                	jmp    8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a67:	3d 32 98 28 00       	cmp    $0x289832,%eax
 8320a6c:	7f 21                	jg     8320a8f <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x615>
 8320a6e:	3d 31 98 28 00       	cmp    $0x289831,%eax
 8320a73:	7d 45                	jge    8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a75:	3d c2 97 28 00       	cmp    $0x2897c2,%eax
 8320a7a:	74 3e                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a7c:	3d 06 98 28 00       	cmp    $0x289806,%eax
 8320a81:	74 37                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a83:	3d 98 03 00 00       	cmp    $0x398,%eax
 8320a88:	74 30                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a8a:	e9 42 01 00 00       	jmp    8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320a8f:	3d ba be 28 00       	cmp    $0x28beba,%eax
 8320a94:	74 24                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a96:	3d 54 d1 28 00       	cmp    $0x28d154,%eax
 8320a9b:	74 1d                	je     8320aba <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x640>
 8320a9d:	e9 2f 01 00 00       	jmp    8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320aa2:	c7 44 24 04 21 00 00 	movl   $0x21,0x4(%esp)
 8320aa9:	00 
 8320aaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320aad:	89 04 24             	mov    %eax,(%esp)
 8320ab0:	e8 59 55 dc ff       	call   80e600e <_ZNK5CUser17isAffectedPremiumE17ENUM_PREMIUM_TYPE>
 8320ab5:	e9 17 01 00 00       	jmp    8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320aba:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8320abe:	e8 e4 98 db ff       	call   80da3a7 <_Z11G_GameWorldv>
 8320ac3:	89 04 24             	mov    %eax,(%esp)
 8320ac6:	e8 1d 1a e2 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 8320acb:	84 c0                	test   %al,%al
 8320acd:	74 39                	je     8320b08 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x68e>
 8320acf:	c6 45 bb 01          	movb   $0x1,-0x45(%ebp)
 8320ad3:	e8 cf 98 db ff       	call   80da3a7 <_Z11G_GameWorldv>
 8320ad8:	89 04 24             	mov    %eax,(%esp)
 8320adb:	e8 3e 39 f1 ff       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 8320ae0:	84 c0                	test   %al,%al
 8320ae2:	74 17                	je     8320afb <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x681>
 8320ae4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320ae7:	89 04 24             	mov    %eax,(%esp)
 8320aea:	e8 5b e3 e7 ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 8320aef:	83 f8 09             	cmp    $0x9,%eax
 8320af2:	7e 07                	jle    8320afb <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x681>
 8320af4:	b8 01 00 00 00       	mov    $0x1,%eax
 8320af9:	eb 05                	jmp    8320b00 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x686>
 8320afb:	b8 00 00 00 00       	mov    $0x0,%eax
 8320b00:	84 c0                	test   %al,%al
 8320b02:	74 04                	je     8320b08 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x68e>
 8320b04:	c6 45 bb 00          	movb   $0x0,-0x45(%ebp)
 8320b08:	80 7d bb 00          	cmpb   $0x0,-0x45(%ebp)
 8320b0c:	0f 84 bf 00 00 00    	je     8320bd1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x757>
 8320b12:	8b 45 10             	mov    0x10(%ebp),%eax
 8320b15:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320b19:	0f be c8             	movsbl %al,%ecx
 8320b1c:	8b 45 10             	mov    0x10(%ebp),%eax
 8320b1f:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8320b23:	0f b6 d0             	movzbl %al,%edx
 8320b26:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320b29:	8d 58 01             	lea    0x1(%eax),%ebx
 8320b2c:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320b2f:	8b 75 10             	mov    0x10(%ebp),%esi
 8320b32:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320b38:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320b3b:	83 c0 30             	add    $0x30,%eax
 8320b3e:	8b 40 09             	mov    0x9(%eax),%eax
 8320b41:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8320b45:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320b49:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320b4d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320b51:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8320b54:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320b58:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8320b5f:	00 
 8320b60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320b63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320b67:	8b 45 08             	mov    0x8(%ebp),%eax
 8320b6a:	89 04 24             	mov    %eax,(%esp)
 8320b6d:	e8 06 2e 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320b72:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320b75:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8320b7c:	00 00 00 00 
 8320b80:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8320b87:	00 
 8320b88:	c7 44 24 08 6c 01 00 	movl   $0x16c,0x8(%esp)
 8320b8f:	00 
 8320b90:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 8320b97:	08 
 8320b98:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 8320b9e:	89 04 24             	mov    %eax,(%esp)
 8320ba1:	e8 72 eb 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8320ba6:	c7 44 24 0c 6c 01 00 	movl   $0x16c,0xc(%esp)
 8320bad:	00 
 8320bae:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8320bb5:	08 
 8320bb6:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 8320bbd:	08 
 8320bbe:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 8320bc4:	89 04 24             	mov    %eax,(%esp)
 8320bc7:	e8 bc eb 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8320bcc:	e9 7f 01 00 00       	jmp    8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 8320bd1:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320bd4:	8b 55 10             	mov    0x10(%ebp),%edx
 8320bd7:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320bdd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8320be0:	83 c0 38             	add    $0x38,%eax
 8320be3:	0f b6 00             	movzbl (%eax),%eax
 8320be6:	66 98                	cbtw
 8320be8:	0f b7 c0             	movzwl %ax,%eax
 8320beb:	89 85 34 fc ff ff    	mov    %eax,-0x3cc(%ebp)
 8320bf1:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320bf4:	8b 55 10             	mov    0x10(%ebp),%edx
 8320bf7:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320bfd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8320c00:	83 c0 37             	add    $0x37,%eax
 8320c03:	0f b6 00             	movzbl (%eax),%eax
 8320c06:	0f b6 f8             	movzbl %al,%edi
 8320c09:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320c0c:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320c13:	89 04 24             	mov    %eax,(%esp)
 8320c16:	e8 a9 74 00 00       	call   83280c4 <_ZNK14CCeraShopGoods13GetExpiryDateEv>
 8320c1b:	0f b7 f0             	movzwl %ax,%esi
 8320c1e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320c21:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320c28:	89 04 24             	mov    %eax,(%esp)
 8320c2b:	e8 d0 93 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8320c30:	89 c3                	mov    %eax,%ebx
 8320c32:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320c35:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320c3c:	89 04 24             	mov    %eax,(%esp)
 8320c3f:	e8 b2 93 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8320c44:	89 c2                	mov    %eax,%edx
 8320c46:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320c49:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8320c4c:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320c52:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8320c55:	83 c0 30             	add    $0x30,%eax
 8320c58:	8b 40 09             	mov    0x9(%eax),%eax
 8320c5b:	8b 8d 34 fc ff ff    	mov    -0x3cc(%ebp),%ecx
 8320c61:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8320c65:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8320c69:	89 74 24 14          	mov    %esi,0x14(%esp)
 8320c6d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8320c71:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8320c75:	89 44 24 08          	mov    %eax,0x8(%esp)
 8320c79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320c7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8320c83:	89 04 24             	mov    %eax,(%esp)
 8320c86:	e8 fb 32 00 00       	call   8323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>
 8320c8b:	83 f0 01             	xor    $0x1,%eax
 8320c8e:	84 c0                	test   %al,%al
 8320c90:	0f 84 ba 00 00 00    	je     8320d50 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8d6>
 8320c96:	8b 45 10             	mov    0x10(%ebp),%eax
 8320c99:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320c9d:	0f be c8             	movsbl %al,%ecx
 8320ca0:	8b 45 10             	mov    0x10(%ebp),%eax
 8320ca3:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8320ca7:	0f b6 d0             	movzbl %al,%edx
 8320caa:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320cad:	8d 58 01             	lea    0x1(%eax),%ebx
 8320cb0:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320cb3:	8b 75 10             	mov    0x10(%ebp),%esi
 8320cb6:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320cbc:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320cbf:	83 c0 30             	add    $0x30,%eax
 8320cc2:	8b 40 09             	mov    0x9(%eax),%eax
 8320cc5:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8320cc9:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320ccd:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320cd1:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320cd5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8320cd8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320cdc:	c7 44 24 08 4f 00 00 	movl   $0x4f,0x8(%esp)
 8320ce3:	00 
 8320ce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320ce7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320ceb:	8b 45 08             	mov    0x8(%ebp),%eax
 8320cee:	89 04 24             	mov    %eax,(%esp)
 8320cf1:	e8 82 2c 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320cf6:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320cf9:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8320d00:	00 00 00 00 
 8320d04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8320d0b:	00 
 8320d0c:	c7 44 24 08 85 01 00 	movl   $0x185,0x8(%esp)
 8320d13:	00 
 8320d14:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 8320d1b:	08 
 8320d1c:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8320d22:	89 04 24             	mov    %eax,(%esp)
 8320d25:	e8 ee e9 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8320d2a:	c7 44 24 0c 85 01 00 	movl   $0x185,0xc(%esp)
 8320d31:	00 
 8320d32:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8320d39:	08 
 8320d3a:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 8320d41:	08 
 8320d42:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8320d48:	89 04 24             	mov    %eax,(%esp)
 8320d4b:	e8 38 ea 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8320d50:	83 45 88 01          	addl   $0x1,-0x78(%ebp)
 8320d54:	8b 45 10             	mov    0x10(%ebp),%eax
 8320d57:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8320d5b:	0f b6 c0             	movzbl %al,%eax
 8320d5e:	3b 45 88             	cmp    -0x78(%ebp),%eax
 8320d61:	0f 9f c0             	setg   %al
 8320d64:	84 c0                	test   %al,%al
 8320d66:	0f 85 75 f8 ff ff    	jne    83205e1 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x167>
 8320d6c:	8d 85 c8 fc ff ff    	lea    -0x338(%ebp),%eax
 8320d72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8320d79:	89 04 24             	mov    %eax,(%esp)
 8320d7c:	e8 73 2d 00 00       	call   8323af4 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods>
 8320d81:	83 f0 01             	xor    $0x1,%eax
 8320d84:	84 c0                	test   %al,%al
 8320d86:	74 5a                	je     8320de2 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x968>
 8320d88:	c7 45 bc ff ff ff ff 	movl   $0xffffffff,-0x44(%ebp)
 8320d8f:	8b 45 10             	mov    0x10(%ebp),%eax
 8320d92:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320d96:	0f be d0             	movsbl %al,%edx
 8320d99:	8b 45 10             	mov    0x10(%ebp),%eax
 8320d9c:	8b 40 39             	mov    0x39(%eax),%eax
 8320d9f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8320da3:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8320daa:	00 
 8320dab:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8320db2:	00 
 8320db3:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320db7:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8320dba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320dbe:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8320dc5:	00 
 8320dc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320dc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320dcd:	8b 45 08             	mov    0x8(%ebp),%eax
 8320dd0:	89 04 24             	mov    %eax,(%esp)
 8320dd3:	e8 a0 2b 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320dd8:	b8 01 00 00 00       	mov    $0x1,%eax
 8320ddd:	e9 40 0f 00 00       	jmp    8321d22 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x18a8>
 8320de2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320de5:	89 04 24             	mov    %eax,(%esp)
 8320de8:	e8 1b 94 e5 ff       	call   817a208 <_ZN5CUser13resetUsedCeraEv>
 8320ded:	8d 9d 4c fe ff ff    	lea    -0x1b4(%ebp),%ebx
 8320df3:	b8 00 00 00 00       	mov    $0x0,%eax
 8320df8:	ba 09 00 00 00       	mov    $0x9,%edx
 8320dfd:	89 df                	mov    %ebx,%edi
 8320dff:	89 d1                	mov    %edx,%ecx
 8320e01:	f3 ab                	rep stos %eax,%es:(%edi)
 8320e03:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8320e09:	ba 15 00 00 00       	mov    $0x15,%edx
 8320e0e:	b9 00 00 00 00       	mov    $0x0,%ecx
 8320e13:	89 c3                	mov    %eax,%ebx
 8320e15:	83 e3 01             	and    $0x1,%ebx
 8320e18:	85 db                	test   %ebx,%ebx
 8320e1a:	74 08                	je     8320e24 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9aa>
 8320e1c:	88 08                	mov    %cl,(%eax)
 8320e1e:	83 c0 01             	add    $0x1,%eax
 8320e21:	83 ea 01             	sub    $0x1,%edx
 8320e24:	89 c3                	mov    %eax,%ebx
 8320e26:	83 e3 02             	and    $0x2,%ebx
 8320e29:	85 db                	test   %ebx,%ebx
 8320e2b:	74 09                	je     8320e36 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9bc>
 8320e2d:	66 89 08             	mov    %cx,(%eax)
 8320e30:	83 c0 02             	add    $0x2,%eax
 8320e33:	83 ea 02             	sub    $0x2,%edx
 8320e36:	89 d6                	mov    %edx,%esi
 8320e38:	83 e6 fc             	and    $0xfffffffc,%esi
 8320e3b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8320e40:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 8320e43:	83 c3 04             	add    $0x4,%ebx
 8320e46:	39 f3                	cmp    %esi,%ebx
 8320e48:	72 f6                	jb     8320e40 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9c6>
 8320e4a:	01 d8                	add    %ebx,%eax
 8320e4c:	89 d3                	mov    %edx,%ebx
 8320e4e:	83 e3 02             	and    $0x2,%ebx
 8320e51:	85 db                	test   %ebx,%ebx
 8320e53:	74 06                	je     8320e5b <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9e1>
 8320e55:	66 89 08             	mov    %cx,(%eax)
 8320e58:	83 c0 02             	add    $0x2,%eax
 8320e5b:	83 e2 01             	and    $0x1,%edx
 8320e5e:	85 d2                	test   %edx,%edx
 8320e60:	74 05                	je     8320e67 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ed>
 8320e62:	88 08                	mov    %cl,(%eax)
 8320e64:	83 c0 01             	add    $0x1,%eax
 8320e67:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8320e6e:	e8 2b ae da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8320e73:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8320e76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320e79:	89 04 24             	mov    %eax,(%esp)
 8320e7c:	e8 07 93 e5 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8320e81:	89 c2                	mov    %eax,%edx
 8320e83:	c1 fa 1f             	sar    $0x1f,%edx
 8320e86:	89 45 90             	mov    %eax,-0x70(%ebp)
 8320e89:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8320e8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320e8f:	89 04 24             	mov    %eax,(%esp)
 8320e92:	e8 e5 92 e5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 8320e97:	ba 00 00 00 00       	mov    $0x0,%edx
 8320e9c:	89 45 98             	mov    %eax,-0x68(%ebp)
 8320e9f:	89 55 9c             	mov    %edx,-0x64(%ebp)
 8320ea2:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8320ea9:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8320eb0:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8320eb7:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8320ebe:	e9 42 0e 00 00       	jmp    8321d05 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x188b>
 8320ec3:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320ec6:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320ecd:	85 c0                	test   %eax,%eax
 8320ecf:	0f 84 2b 0e 00 00    	je     8321d00 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1886>
 8320ed5:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320ed8:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320edf:	89 04 24             	mov    %eax,(%esp)
 8320ee2:	e8 61 91 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 8320ee7:	85 c0                	test   %eax,%eax
 8320ee9:	0f 94 c0             	sete   %al
 8320eec:	84 c0                	test   %al,%al
 8320eee:	0f 84 a9 03 00 00    	je     832129d <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xe23>
 8320ef4:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8320efb:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320efe:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320f05:	89 04 24             	mov    %eax,(%esp)
 8320f08:	e8 5f 91 e5 ff       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 8320f0d:	8b 10                	mov    (%eax),%edx
 8320f0f:	83 c2 10             	add    $0x10,%edx
 8320f12:	8b 12                	mov    (%edx),%edx
 8320f14:	89 04 24             	mov    %eax,(%esp)
 8320f17:	ff d2                	call   *%edx
 8320f19:	83 f0 01             	xor    $0x1,%eax
 8320f1c:	84 c0                	test   %al,%al
 8320f1e:	0f 84 bf 00 00 00    	je     8320fe3 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb69>
 8320f24:	8b 45 10             	mov    0x10(%ebp),%eax
 8320f27:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8320f2b:	0f be c8             	movsbl %al,%ecx
 8320f2e:	8b 45 10             	mov    0x10(%ebp),%eax
 8320f31:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8320f35:	0f b6 d0             	movzbl %al,%edx
 8320f38:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320f3b:	8d 58 01             	lea    0x1(%eax),%ebx
 8320f3e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320f41:	8b 75 10             	mov    0x10(%ebp),%esi
 8320f44:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8320f4a:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8320f4d:	83 c0 30             	add    $0x30,%eax
 8320f50:	8b 40 09             	mov    0x9(%eax),%eax
 8320f53:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8320f57:	89 54 24 18          	mov    %edx,0x18(%esp)
 8320f5b:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8320f5f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8320f63:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8320f66:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8320f6a:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8320f71:	00 
 8320f72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8320f75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8320f79:	8b 45 08             	mov    0x8(%ebp),%eax
 8320f7c:	89 04 24             	mov    %eax,(%esp)
 8320f7f:	e8 f4 29 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8320f84:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320f87:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8320f8e:	00 00 00 00 
 8320f92:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8320f99:	00 
 8320f9a:	c7 44 24 08 47 02 00 	movl   $0x247,0x8(%esp)
 8320fa1:	00 
 8320fa2:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 8320fa9:	08 
 8320faa:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8320fb0:	89 04 24             	mov    %eax,(%esp)
 8320fb3:	e8 60 e7 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8320fb8:	c7 44 24 0c 47 02 00 	movl   $0x247,0xc(%esp)
 8320fbf:	00 
 8320fc0:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8320fc7:	08 
 8320fc8:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 8320fcf:	08 
 8320fd0:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 8320fd6:	89 04 24             	mov    %eax,(%esp)
 8320fd9:	e8 aa e7 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8320fde:	e9 1e 0d 00 00       	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 8320fe3:	8b 45 88             	mov    -0x78(%ebp),%eax
 8320fe6:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8320fed:	89 04 24             	mov    %eax,(%esp)
 8320ff0:	e8 77 90 e5 ff       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 8320ff5:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8320ff8:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8320ffb:	89 04 24             	mov    %eax,(%esp)
 8320ffe:	e8 25 ff e2 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 8321003:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8321006:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8321009:	89 04 24             	mov    %eax,(%esp)
 832100c:	e8 a5 11 e3 ff       	call   81521b6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE5emptyEv>
 8321011:	84 c0                	test   %al,%al
 8321013:	75 24                	jne    8321039 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xbbf>
 8321015:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321018:	8b 55 10             	mov    0x10(%ebp),%edx
 832101b:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321021:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321024:	83 c0 38             	add    $0x38,%eax
 8321027:	0f b6 18             	movzbl (%eax),%ebx
 832102a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 832102d:	89 04 24             	mov    %eax,(%esp)
 8321030:	e8 65 11 e3 ff       	call   815219a <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE4sizeEv>
 8321035:	38 c3                	cmp    %al,%bl
 8321037:	7c 07                	jl     8321040 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xbc6>
 8321039:	b8 01 00 00 00       	mov    $0x1,%eax
 832103e:	eb 05                	jmp    8321045 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xbcb>
 8321040:	b8 00 00 00 00       	mov    $0x0,%eax
 8321045:	84 c0                	test   %al,%al
 8321047:	0f 84 bf 00 00 00    	je     832110c <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xc92>
 832104d:	8b 45 10             	mov    0x10(%ebp),%eax
 8321050:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8321054:	0f be c8             	movsbl %al,%ecx
 8321057:	8b 45 10             	mov    0x10(%ebp),%eax
 832105a:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832105e:	0f b6 d0             	movzbl %al,%edx
 8321061:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321064:	8d 58 01             	lea    0x1(%eax),%ebx
 8321067:	8b 45 88             	mov    -0x78(%ebp),%eax
 832106a:	8b 75 10             	mov    0x10(%ebp),%esi
 832106d:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321073:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8321076:	83 c0 30             	add    $0x30,%eax
 8321079:	8b 40 09             	mov    0x9(%eax),%eax
 832107c:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8321080:	89 54 24 18          	mov    %edx,0x18(%esp)
 8321084:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8321088:	89 44 24 10          	mov    %eax,0x10(%esp)
 832108c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 832108f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321093:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 832109a:	00 
 832109b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832109e:	89 44 24 04          	mov    %eax,0x4(%esp)
 83210a2:	8b 45 08             	mov    0x8(%ebp),%eax
 83210a5:	89 04 24             	mov    %eax,(%esp)
 83210a8:	e8 cb 28 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 83210ad:	8b 45 88             	mov    -0x78(%ebp),%eax
 83210b0:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 83210b7:	00 00 00 00 
 83210bb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83210c2:	00 
 83210c3:	c7 44 24 08 53 02 00 	movl   $0x253,0x8(%esp)
 83210ca:	00 
 83210cb:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83210d2:	08 
 83210d3:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 83210d9:	89 04 24             	mov    %eax,(%esp)
 83210dc:	e8 37 e6 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83210e1:	c7 44 24 0c 53 02 00 	movl   $0x253,0xc(%esp)
 83210e8:	00 
 83210e9:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83210f0:	08 
 83210f1:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83210f8:	08 
 83210f9:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 83210ff:	89 04 24             	mov    %eax,(%esp)
 8321102:	e8 81 e6 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8321107:	e9 f5 0b 00 00       	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 832110c:	8b 45 88             	mov    -0x78(%ebp),%eax
 832110f:	8b 55 10             	mov    0x10(%ebp),%edx
 8321112:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321118:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832111b:	83 c0 37             	add    $0x37,%eax
 832111e:	0f b6 00             	movzbl (%eax),%eax
 8321121:	3c 63                	cmp    $0x63,%al
 8321123:	0f 86 bf 00 00 00    	jbe    83211e8 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xd6e>
 8321129:	8b 45 10             	mov    0x10(%ebp),%eax
 832112c:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8321130:	0f be c8             	movsbl %al,%ecx
 8321133:	8b 45 10             	mov    0x10(%ebp),%eax
 8321136:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 832113a:	0f b6 d0             	movzbl %al,%edx
 832113d:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321140:	8d 58 01             	lea    0x1(%eax),%ebx
 8321143:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321146:	8b 75 10             	mov    0x10(%ebp),%esi
 8321149:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832114f:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8321152:	83 c0 30             	add    $0x30,%eax
 8321155:	8b 40 09             	mov    0x9(%eax),%eax
 8321158:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 832115c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8321160:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8321164:	89 44 24 10          	mov    %eax,0x10(%esp)
 8321168:	8b 45 cc             	mov    -0x34(%ebp),%eax
 832116b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832116f:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8321176:	00 
 8321177:	8b 45 0c             	mov    0xc(%ebp),%eax
 832117a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832117e:	8b 45 08             	mov    0x8(%ebp),%eax
 8321181:	89 04 24             	mov    %eax,(%esp)
 8321184:	e8 ef 27 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8321189:	8b 45 88             	mov    -0x78(%ebp),%eax
 832118c:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8321193:	00 00 00 00 
 8321197:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832119e:	00 
 832119f:	c7 44 24 08 5e 02 00 	movl   $0x25e,0x8(%esp)
 83211a6:	00 
 83211a7:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 83211ae:	08 
 83211af:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 83211b5:	89 04 24             	mov    %eax,(%esp)
 83211b8:	e8 5b e5 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83211bd:	c7 44 24 0c 5e 02 00 	movl   $0x25e,0xc(%esp)
 83211c4:	00 
 83211c5:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83211cc:	08 
 83211cd:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 83211d4:	08 
 83211d5:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 83211db:	89 04 24             	mov    %eax,(%esp)
 83211de:	e8 a5 e5 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83211e3:	e9 19 0b 00 00       	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 83211e8:	8b 45 88             	mov    -0x78(%ebp),%eax
 83211eb:	8b 55 10             	mov    0x10(%ebp),%edx
 83211ee:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83211f4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83211f7:	83 c0 38             	add    $0x38,%eax
 83211fa:	0f b6 00             	movzbl (%eax),%eax
 83211fd:	0f be c0             	movsbl %al,%eax
 8321200:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321204:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8321207:	89 04 24             	mov    %eax,(%esp)
 832120a:	e8 e7 10 e3 ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 832120f:	8b 40 0c             	mov    0xc(%eax),%eax
 8321212:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8321215:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321218:	8b 55 10             	mov    0x10(%ebp),%edx
 832121b:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321221:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321224:	83 c0 38             	add    $0x38,%eax
 8321227:	0f b6 00             	movzbl (%eax),%eax
 832122a:	0f be c0             	movsbl %al,%eax
 832122d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321231:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8321234:	89 04 24             	mov    %eax,(%esp)
 8321237:	e8 ba 10 e3 ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 832123c:	8b 40 04             	mov    0x4(%eax),%eax
 832123f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8321242:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321245:	8b 55 10             	mov    0x10(%ebp),%edx
 8321248:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832124e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321251:	83 c0 38             	add    $0x38,%eax
 8321254:	0f b6 00             	movzbl (%eax),%eax
 8321257:	0f be c0             	movsbl %al,%eax
 832125a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832125e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8321261:	89 04 24             	mov    %eax,(%esp)
 8321264:	e8 8d 10 e3 ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 8321269:	8b 40 08             	mov    0x8(%eax),%eax
 832126c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 832126f:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321272:	8b 55 10             	mov    0x10(%ebp),%edx
 8321275:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832127b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832127e:	83 c0 38             	add    $0x38,%eax
 8321281:	0f b6 00             	movzbl (%eax),%eax
 8321284:	0f be c0             	movsbl %al,%eax
 8321287:	89 44 24 04          	mov    %eax,0x4(%esp)
 832128b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 832128e:	89 04 24             	mov    %eax,(%esp)
 8321291:	e8 60 10 e3 ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 8321296:	8b 00                	mov    (%eax),%eax
 8321298:	89 45 80             	mov    %eax,-0x80(%ebp)
 832129b:	eb 3f                	jmp    83212dc <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xe62>
 832129d:	8b 45 88             	mov    -0x78(%ebp),%eax
 83212a0:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83212a7:	89 04 24             	mov    %eax,(%esp)
 83212aa:	e8 75 8d e5 ff       	call   817a024 <_ZNK14CCeraShopGoods12GetCeraPriceEv>
 83212af:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 83212b2:	8b 45 88             	mov    -0x78(%ebp),%eax
 83212b5:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83212bc:	89 04 24             	mov    %eax,(%esp)
 83212bf:	e8 48 8d e5 ff       	call   817a00c <_ZNK14CCeraShopGoods12GetGoldPriceEv>
 83212c4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 83212c7:	8b 45 88             	mov    -0x78(%ebp),%eax
 83212ca:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83212d1:	89 04 24             	mov    %eax,(%esp)
 83212d4:	e8 3f 8d e5 ff       	call   817a018 <_ZNK14CCeraShopGoods11GetWinPointEv>
 83212d9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 83212dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 83212df:	89 04 24             	mov    %eax,(%esp)
 83212e2:	e8 41 bb e0 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 83212e7:	89 04 24             	mov    %eax,(%esp)
 83212ea:	e8 11 6e 00 00       	call   8328100 <_ZNK8WongWork12CUserPremium23getCeraShopDiscountRateEv>
 83212ef:	66 89 45 c2          	mov    %ax,-0x3e(%ebp)
 83212f3:	66 83 7d c2 00       	cmpw   $0x0,-0x3e(%ebp)
 83212f8:	74 6e                	je     8321368 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xeee>
 83212fa:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 83212fe:	89 c2                	mov    %eax,%edx
 8321300:	0f af 55 a4          	imul   -0x5c(%ebp),%edx
 8321304:	89 95 24 fc ff ff    	mov    %edx,-0x3dc(%ebp)
 832130a:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 832130f:	8b 85 24 fc ff ff    	mov    -0x3dc(%ebp),%eax
 8321315:	f7 e2                	mul    %edx
 8321317:	89 d0                	mov    %edx,%eax
 8321319:	c1 e8 05             	shr    $0x5,%eax
 832131c:	29 45 a4             	sub    %eax,-0x5c(%ebp)
 832131f:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 8321323:	89 c1                	mov    %eax,%ecx
 8321325:	0f af 4d ac          	imul   -0x54(%ebp),%ecx
 8321329:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 832132e:	89 c8                	mov    %ecx,%eax
 8321330:	f7 ea                	imul   %edx
 8321332:	c1 fa 05             	sar    $0x5,%edx
 8321335:	89 c8                	mov    %ecx,%eax
 8321337:	c1 f8 1f             	sar    $0x1f,%eax
 832133a:	89 d1                	mov    %edx,%ecx
 832133c:	29 c1                	sub    %eax,%ecx
 832133e:	89 c8                	mov    %ecx,%eax
 8321340:	29 45 ac             	sub    %eax,-0x54(%ebp)
 8321343:	0f b7 45 c2          	movzwl -0x3e(%ebp),%eax
 8321347:	89 c7                	mov    %eax,%edi
 8321349:	0f af 7d a8          	imul   -0x58(%ebp),%edi
 832134d:	89 bd 24 fc ff ff    	mov    %edi,-0x3dc(%ebp)
 8321353:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 8321358:	8b 85 24 fc ff ff    	mov    -0x3dc(%ebp),%eax
 832135e:	f7 e2                	mul    %edx
 8321360:	89 d0                	mov    %edx,%eax
 8321362:	c1 e8 05             	shr    $0x5,%eax
 8321365:	29 45 a8             	sub    %eax,-0x58(%ebp)
 8321368:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 832136f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321372:	89 04 24             	mov    %eax,(%esp)
 8321375:	e8 00 cc dd ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 832137a:	3b 45 a4             	cmp    -0x5c(%ebp),%eax
 832137d:	0f 92 c0             	setb   %al
 8321380:	84 c0                	test   %al,%al
 8321382:	74 09                	je     832138d <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf13>
 8321384:	c7 45 c4 0b 00 00 00 	movl   $0xb,-0x3c(%ebp)
 832138b:	eb 42                	jmp    83213cf <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf55>
 832138d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321390:	89 04 24             	mov    %eax,(%esp)
 8321393:	e8 e6 8e db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8321398:	89 04 24             	mov    %eax,(%esp)
 832139b:	e8 36 34 e1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 83213a0:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 83213a3:	0f 9c c0             	setl   %al
 83213a6:	84 c0                	test   %al,%al
 83213a8:	74 09                	je     83213b3 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf39>
 83213aa:	c7 45 c4 0a 00 00 00 	movl   $0xa,-0x3c(%ebp)
 83213b1:	eb 1c                	jmp    83213cf <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf55>
 83213b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83213b6:	89 04 24             	mov    %eax,(%esp)
 83213b9:	e8 be 8d e5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 83213be:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 83213c1:	0f 92 c0             	setb   %al
 83213c4:	84 c0                	test   %al,%al
 83213c6:	74 07                	je     83213cf <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf55>
 83213c8:	c7 45 c4 0c 00 00 00 	movl   $0xc,-0x3c(%ebp)
 83213cf:	8b 45 ac             	mov    -0x54(%ebp),%eax
 83213d2:	89 c2                	mov    %eax,%edx
 83213d4:	c1 fa 1f             	sar    $0x1f,%edx
 83213d7:	3b 55 94             	cmp    -0x6c(%ebp),%edx
 83213da:	7c 11                	jl     83213ed <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf73>
 83213dc:	3b 55 94             	cmp    -0x6c(%ebp),%edx
 83213df:	7f 05                	jg     83213e6 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf6c>
 83213e1:	3b 45 90             	cmp    -0x70(%ebp),%eax
 83213e4:	76 07                	jbe    83213ed <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf73>
 83213e6:	c7 45 c4 0a 00 00 00 	movl   $0xa,-0x3c(%ebp)
 83213ed:	8b 45 a8             	mov    -0x58(%ebp),%eax
 83213f0:	ba 00 00 00 00       	mov    $0x0,%edx
 83213f5:	3b 55 9c             	cmp    -0x64(%ebp),%edx
 83213f8:	7c 11                	jl     832140b <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf91>
 83213fa:	3b 55 9c             	cmp    -0x64(%ebp),%edx
 83213fd:	7f 05                	jg     8321404 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf8a>
 83213ff:	3b 45 98             	cmp    -0x68(%ebp),%eax
 8321402:	76 07                	jbe    832140b <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf91>
 8321404:	c7 45 c4 0c 00 00 00 	movl   $0xc,-0x3c(%ebp)
 832140b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 832140e:	89 c1                	mov    %eax,%ecx
 8321410:	89 c3                	mov    %eax,%ebx
 8321412:	c1 fb 1f             	sar    $0x1f,%ebx
 8321415:	8b 45 90             	mov    -0x70(%ebp),%eax
 8321418:	8b 55 94             	mov    -0x6c(%ebp),%edx
 832141b:	29 c8                	sub    %ecx,%eax
 832141d:	19 da                	sbb    %ebx,%edx
 832141f:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 8321425:	89 95 3c ff ff ff    	mov    %edx,-0xc4(%ebp)
 832142b:	c7 85 40 ff ff ff 00 	movl   $0x0,-0xc0(%ebp)
 8321432:	00 00 00 
 8321435:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
 832143c:	00 00 00 
 832143f:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 8321445:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321449:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 832144f:	89 04 24             	mov    %eax,(%esp)
 8321452:	e8 89 90 e5 ff       	call   817a4e0 <_ZSt3maxIxERKT_S2_S2_>
 8321457:	8b 50 04             	mov    0x4(%eax),%edx
 832145a:	8b 00                	mov    (%eax),%eax
 832145c:	89 45 90             	mov    %eax,-0x70(%ebp)
 832145f:	89 55 94             	mov    %edx,-0x6c(%ebp)
 8321462:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 8321465:	bb 00 00 00 00       	mov    $0x0,%ebx
 832146a:	8b 45 98             	mov    -0x68(%ebp),%eax
 832146d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8321470:	29 c8                	sub    %ecx,%eax
 8321472:	19 da                	sbb    %ebx,%edx
 8321474:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 832147a:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
 8321480:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
 8321487:	00 00 00 
 832148a:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 8321491:	00 00 00 
 8321494:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 832149a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832149e:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 83214a4:	89 04 24             	mov    %eax,(%esp)
 83214a7:	e8 34 90 e5 ff       	call   817a4e0 <_ZSt3maxIxERKT_S2_S2_>
 83214ac:	8b 50 04             	mov    0x4(%eax),%edx
 83214af:	8b 00                	mov    (%eax),%eax
 83214b1:	89 45 98             	mov    %eax,-0x68(%ebp)
 83214b4:	89 55 9c             	mov    %edx,-0x64(%ebp)
 83214b7:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 83214bb:	0f 84 d0 01 00 00    	je     8321691 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1217>
 83214c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83214c4:	89 04 24             	mov    %eax,(%esp)
 83214c7:	e8 5c fb dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 83214cc:	8b 55 a8             	mov    -0x58(%ebp),%edx
 83214cf:	89 54 24 20          	mov    %edx,0x20(%esp)
 83214d3:	8b 55 ac             	mov    -0x54(%ebp),%edx
 83214d6:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 83214da:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 83214dd:	89 54 24 18          	mov    %edx,0x18(%esp)
 83214e1:	89 44 24 14          	mov    %eax,0x14(%esp)
 83214e5:	c7 44 24 10 d0 5c c2 	movl   $0x8c25cd0,0x10(%esp)
 83214ec:	08 
 83214ed:	c7 44 24 0c d6 02 00 	movl   $0x2d6,0xc(%esp)
 83214f4:	00 
 83214f5:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83214fc:	08 
 83214fd:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8321504:	08 
 8321505:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 832150c:	e8 f9 26 7b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8321511:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321514:	89 04 24             	mov    %eax,(%esp)
 8321517:	e8 60 8c e5 ff       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 832151c:	89 c6                	mov    %eax,%esi
 832151e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321521:	89 04 24             	mov    %eax,(%esp)
 8321524:	e8 55 8d db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8321529:	89 04 24             	mov    %eax,(%esp)
 832152c:	e8 a5 32 e1 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8321531:	89 c3                	mov    %eax,%ebx
 8321533:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321536:	89 04 24             	mov    %eax,(%esp)
 8321539:	e8 3c ca dd ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 832153e:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8321542:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8321546:	89 44 24 14          	mov    %eax,0x14(%esp)
 832154a:	c7 44 24 10 2c 5d c2 	movl   $0x8c25d2c,0x10(%esp)
 8321551:	08 
 8321552:	c7 44 24 0c d7 02 00 	movl   $0x2d7,0xc(%esp)
 8321559:	00 
 832155a:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8321561:	08 
 8321562:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8321569:	08 
 832156a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8321571:	e8 94 26 7b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8321576:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321579:	8b 55 10             	mov    0x10(%ebp),%edx
 832157c:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321582:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321585:	83 c0 30             	add    $0x30,%eax
 8321588:	8b 40 09             	mov    0x9(%eax),%eax
 832158b:	89 44 24 14          	mov    %eax,0x14(%esp)
 832158f:	c7 44 24 10 4c 5d c2 	movl   $0x8c25d4c,0x10(%esp)
 8321596:	08 
 8321597:	c7 44 24 0c d9 02 00 	movl   $0x2d9,0xc(%esp)
 832159e:	00 
 832159f:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 83215a6:	08 
 83215a7:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 83215ae:	08 
 83215af:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 83215b6:	e8 4f 26 7b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 83215bb:	8b 45 88             	mov    -0x78(%ebp),%eax
 83215be:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83215c5:	89 04 24             	mov    %eax,(%esp)
 83215c8:	e8 7b 8a e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 83215cd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83215d0:	8b 45 10             	mov    0x10(%ebp),%eax
 83215d3:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 83215d7:	0f be d8             	movsbl %al,%ebx
 83215da:	8b 45 10             	mov    0x10(%ebp),%eax
 83215dd:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 83215e1:	0f b6 c8             	movzbl %al,%ecx
 83215e4:	8b 45 88             	mov    -0x78(%ebp),%eax
 83215e7:	8d 70 01             	lea    0x1(%eax),%esi
 83215ea:	8b 45 88             	mov    -0x78(%ebp),%eax
 83215ed:	8b 55 10             	mov    0x10(%ebp),%edx
 83215f0:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83215f6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83215f9:	83 c0 30             	add    $0x30,%eax
 83215fc:	8b 50 09             	mov    0x9(%eax),%edx
 83215ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8321602:	0f b7 c0             	movzwl %ax,%eax
 8321605:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8321609:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 832160d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8321611:	89 54 24 10          	mov    %edx,0x10(%esp)
 8321615:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8321618:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832161c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8321620:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321623:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321627:	8b 45 08             	mov    0x8(%ebp),%eax
 832162a:	89 04 24             	mov    %eax,(%esp)
 832162d:	e8 46 23 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8321632:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321635:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 832163c:	00 00 00 00 
 8321640:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8321647:	00 
 8321648:	c7 44 24 08 e1 02 00 	movl   $0x2e1,0x8(%esp)
 832164f:	00 
 8321650:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 8321657:	08 
 8321658:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 832165e:	89 04 24             	mov    %eax,(%esp)
 8321661:	e8 b2 e0 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8321666:	c7 44 24 0c e1 02 00 	movl   $0x2e1,0xc(%esp)
 832166d:	00 
 832166e:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8321675:	08 
 8321676:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 832167d:	08 
 832167e:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8321684:	89 04 24             	mov    %eax,(%esp)
 8321687:	e8 fc e0 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 832168c:	e9 70 06 00 00       	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 8321691:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321694:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 832169b:	89 04 24             	mov    %eax,(%esp)
 832169e:	e8 b1 89 e5 ff       	call   817a054 <_ZNK14CCeraShopGoods14GetFeaturedIdxEv>
 83216a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83216a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 83216aa:	89 04 24             	mov    %eax,(%esp)
 83216ad:	e8 c6 c1 32 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 83216b2:	84 c0                	test   %al,%al
 83216b4:	0f 84 d4 00 00 00    	je     832178e <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1314>
 83216ba:	8b 45 88             	mov    -0x78(%ebp),%eax
 83216bd:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83216c4:	89 04 24             	mov    %eax,(%esp)
 83216c7:	e8 7c 89 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 83216cc:	89 45 dc             	mov    %eax,-0x24(%ebp)
 83216cf:	8b 45 10             	mov    0x10(%ebp),%eax
 83216d2:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 83216d6:	0f be c8             	movsbl %al,%ecx
 83216d9:	8b 45 10             	mov    0x10(%ebp),%eax
 83216dc:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 83216e0:	0f b6 d0             	movzbl %al,%edx
 83216e3:	8b 45 88             	mov    -0x78(%ebp),%eax
 83216e6:	8d 58 01             	lea    0x1(%eax),%ebx
 83216e9:	8b 45 88             	mov    -0x78(%ebp),%eax
 83216ec:	8b 75 10             	mov    0x10(%ebp),%esi
 83216ef:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83216f5:	8d 04 06             	lea    (%esi,%eax,1),%eax
 83216f8:	83 c0 30             	add    $0x30,%eax
 83216fb:	8b 40 09             	mov    0x9(%eax),%eax
 83216fe:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8321702:	89 54 24 18          	mov    %edx,0x18(%esp)
 8321706:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 832170a:	89 44 24 10          	mov    %eax,0x10(%esp)
 832170e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8321711:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321715:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 832171c:	00 
 832171d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321720:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321724:	8b 45 08             	mov    0x8(%ebp),%eax
 8321727:	89 04 24             	mov    %eax,(%esp)
 832172a:	e8 49 22 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 832172f:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321732:	c7 84 85 c8 fc ff ff 	movl   $0x0,-0x338(%ebp,%eax,4)
 8321739:	00 00 00 00 
 832173d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8321744:	00 
 8321745:	c7 44 24 08 ed 02 00 	movl   $0x2ed,0x8(%esp)
 832174c:	00 
 832174d:	c7 44 24 04 20 6d c2 	movl   $0x8c26d20,0x4(%esp)
 8321754:	08 
 8321755:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 832175b:	89 04 24             	mov    %eax,(%esp)
 832175e:	e8 b5 df 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8321763:	c7 44 24 0c ed 02 00 	movl   $0x2ed,0xc(%esp)
 832176a:	00 
 832176b:	c7 44 24 08 20 6d c2 	movl   $0x8c26d20,0x8(%esp)
 8321772:	08 
 8321773:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 832177a:	08 
 832177b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8321781:	89 04 24             	mov    %eax,(%esp)
 8321784:	e8 ff df 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8321789:	e9 73 05 00 00       	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 832178e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8321793:	c7 44 24 08 7b 03 00 	movl   $0x37b,0x8(%esp)
 832179a:	00 
 832179b:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 83217a2:	08 
 83217a3:	89 04 24             	mov    %eax,(%esp)
 83217a6:	e8 db e2 f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 83217ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83217b2:	00 
 83217b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83217b7:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 83217bd:	89 04 24             	mov    %eax,(%esp)
 83217c0:	e8 61 74 da ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 83217c5:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 83217cb:	89 04 24             	mov    %eax,(%esp)
 83217ce:	e8 7b 74 da ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 83217d3:	89 04 24             	mov    %eax,(%esp)
 83217d6:	e8 31 8d e5 ff       	call   817a50c <_ZN12CStreamGuard11GetInBufferI22stCeraShopIPGRequest_tEEPT_v>
 83217db:	89 45 c8             	mov    %eax,-0x38(%ebp)
 83217de:	8b 45 88             	mov    -0x78(%ebp),%eax
 83217e1:	8b 55 10             	mov    0x10(%ebp),%edx
 83217e4:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83217ea:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83217ed:	83 c0 30             	add    $0x30,%eax
 83217f0:	8b 50 09             	mov    0x9(%eax),%edx
 83217f3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83217f6:	89 10                	mov    %edx,(%eax)
 83217f8:	8b 45 88             	mov    -0x78(%ebp),%eax
 83217fb:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321802:	89 04 24             	mov    %eax,(%esp)
 8321805:	e8 3e 88 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 832180a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 832180d:	89 42 04             	mov    %eax,0x4(%edx)
 8321810:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321813:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 832181a:	89 04 24             	mov    %eax,(%esp)
 832181d:	e8 de 87 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8321822:	89 c2                	mov    %eax,%edx
 8321824:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321827:	66 89 50 0c          	mov    %dx,0xc(%eax)
 832182b:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 832182e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321831:	89 50 10             	mov    %edx,0x10(%eax)
 8321834:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321837:	8b 55 ac             	mov    -0x54(%ebp),%edx
 832183a:	89 50 18             	mov    %edx,0x18(%eax)
 832183d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8321840:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321843:	89 50 14             	mov    %edx,0x14(%eax)
 8321846:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321849:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321850:	89 04 24             	mov    %eax,(%esp)
 8321853:	e8 9e 87 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8321858:	89 c2                	mov    %eax,%edx
 832185a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832185d:	89 50 08             	mov    %edx,0x8(%eax)
 8321860:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321863:	8b 55 10             	mov    0x10(%ebp),%edx
 8321866:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 832186c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832186f:	83 c0 37             	add    $0x37,%eax
 8321872:	0f b6 00             	movzbl (%eax),%eax
 8321875:	89 c2                	mov    %eax,%edx
 8321877:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832187a:	88 50 2c             	mov    %dl,0x2c(%eax)
 832187d:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321880:	8b 55 10             	mov    0x10(%ebp),%edx
 8321883:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321889:	8d 04 02             	lea    (%edx,%eax,1),%eax
 832188c:	83 c0 38             	add    $0x38,%eax
 832188f:	0f b6 10             	movzbl (%eax),%edx
 8321892:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321895:	88 50 2d             	mov    %dl,0x2d(%eax)
 8321898:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832189b:	8b 55 80             	mov    -0x80(%ebp),%edx
 832189e:	89 50 1c             	mov    %edx,0x1c(%eax)
 83218a1:	8b 45 88             	mov    -0x78(%ebp),%eax
 83218a4:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 83218ab:	89 04 24             	mov    %eax,(%esp)
 83218ae:	e8 a1 87 e5 ff       	call   817a054 <_ZNK14CCeraShopGoods14GetFeaturedIdxEv>
 83218b3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 83218b6:	89 42 28             	mov    %eax,0x28(%edx)
 83218b9:	8b 45 10             	mov    0x10(%ebp),%eax
 83218bc:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 83218c0:	0f b6 d0             	movzbl %al,%edx
 83218c3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83218c6:	89 50 20             	mov    %edx,0x20(%eax)
 83218c9:	8b 45 88             	mov    -0x78(%ebp),%eax
 83218cc:	8d 50 01             	lea    0x1(%eax),%edx
 83218cf:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83218d2:	89 50 24             	mov    %edx,0x24(%eax)
 83218d5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83218d8:	8b 55 8c             	mov    -0x74(%ebp),%edx
 83218db:	89 50 30             	mov    %edx,0x30(%eax)
 83218de:	8b 45 10             	mov    0x10(%ebp),%eax
 83218e1:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 83218e5:	89 c2                	mov    %eax,%edx
 83218e7:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83218ea:	88 50 34             	mov    %dl,0x34(%eax)
 83218ed:	8b 45 10             	mov    0x10(%ebp),%eax
 83218f0:	8b 50 2e             	mov    0x2e(%eax),%edx
 83218f3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83218f6:	89 50 40             	mov    %edx,0x40(%eax)
 83218f9:	8b 45 10             	mov    0x10(%ebp),%eax
 83218fc:	8b 50 32             	mov    0x32(%eax),%edx
 83218ff:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321902:	89 50 38             	mov    %edx,0x38(%eax)
 8321905:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321908:	8b 55 10             	mov    0x10(%ebp),%edx
 832190b:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321911:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321914:	83 c0 3d             	add    $0x3d,%eax
 8321917:	0f b6 10             	movzbl (%eax),%edx
 832191a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832191d:	88 50 44             	mov    %dl,0x44(%eax)
 8321920:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8321927:	eb 60                	jmp    8321989 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x150f>
 8321929:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 832192c:	8b 75 88             	mov    -0x78(%ebp),%esi
 832192f:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8321932:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8321935:	89 d0                	mov    %edx,%eax
 8321937:	c1 e0 02             	shl    $0x2,%eax
 832193a:	01 d0                	add    %edx,%eax
 832193c:	69 d6 cf 01 00 00    	imul   $0x1cf,%esi,%edx
 8321942:	01 d0                	add    %edx,%eax
 8321944:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8321947:	83 c0 30             	add    $0x30,%eax
 832194a:	8b 50 0e             	mov    0xe(%eax),%edx
 832194d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321950:	83 c1 08             	add    $0x8,%ecx
 8321953:	89 54 c8 08          	mov    %edx,0x8(%eax,%ecx,8)
 8321957:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 832195a:	8b 75 88             	mov    -0x78(%ebp),%esi
 832195d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8321960:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8321963:	89 d0                	mov    %edx,%eax
 8321965:	c1 e0 02             	shl    $0x2,%eax
 8321968:	01 d0                	add    %edx,%eax
 832196a:	69 d6 cf 01 00 00    	imul   $0x1cf,%esi,%edx
 8321970:	01 d0                	add    %edx,%eax
 8321972:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8321975:	83 c0 42             	add    $0x42,%eax
 8321978:	0f b6 10             	movzbl (%eax),%edx
 832197b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832197e:	83 c1 08             	add    $0x8,%ecx
 8321981:	88 54 c8 0c          	mov    %dl,0xc(%eax,%ecx,8)
 8321985:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8321989:	8b 45 88             	mov    -0x78(%ebp),%eax
 832198c:	8b 55 10             	mov    0x10(%ebp),%edx
 832198f:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321995:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321998:	83 c0 3d             	add    $0x3d,%eax
 832199b:	0f b6 00             	movzbl (%eax),%eax
 832199e:	0f b6 c0             	movzbl %al,%eax
 83219a1:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 83219a4:	0f 9f c0             	setg   %al
 83219a7:	84 c0                	test   %al,%al
 83219a9:	0f 85 7a ff ff ff    	jne    8321929 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x14af>
 83219af:	8b 45 88             	mov    -0x78(%ebp),%eax
 83219b2:	8b 55 10             	mov    0x10(%ebp),%edx
 83219b5:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 83219bb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83219be:	05 ed 00 00 00       	add    $0xed,%eax
 83219c3:	0f b6 10             	movzbl (%eax),%edx
 83219c6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83219c9:	88 90 60 01 00 00    	mov    %dl,0x160(%eax)
 83219cf:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 83219d6:	e9 8f 00 00 00       	jmp    8321a6a <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x15f0>
 83219db:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 83219de:	8b 55 88             	mov    -0x78(%ebp),%edx
 83219e1:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 83219e4:	8b 45 10             	mov    0x10(%ebp),%eax
 83219e7:	83 c3 16             	add    $0x16,%ebx
 83219ea:	c1 e3 03             	shl    $0x3,%ebx
 83219ed:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 83219f3:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83219f6:	01 d0                	add    %edx,%eax
 83219f8:	83 c0 30             	add    $0x30,%eax
 83219fb:	8b 50 0e             	mov    0xe(%eax),%edx
 83219fe:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321a01:	83 c1 2c             	add    $0x2c,%ecx
 8321a04:	89 54 c8 04          	mov    %edx,0x4(%eax,%ecx,8)
 8321a08:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8321a0b:	8b 55 88             	mov    -0x78(%ebp),%edx
 8321a0e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8321a11:	8b 45 10             	mov    0x10(%ebp),%eax
 8321a14:	83 c3 16             	add    $0x16,%ebx
 8321a17:	c1 e3 03             	shl    $0x3,%ebx
 8321a1a:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 8321a20:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8321a23:	01 d0                	add    %edx,%eax
 8321a25:	83 c0 30             	add    $0x30,%eax
 8321a28:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 8321a2c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321a2f:	83 c1 2c             	add    $0x2c,%ecx
 8321a32:	66 89 54 c8 08       	mov    %dx,0x8(%eax,%ecx,8)
 8321a37:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8321a3a:	8b 55 88             	mov    -0x78(%ebp),%edx
 8321a3d:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8321a40:	8b 45 10             	mov    0x10(%ebp),%eax
 8321a43:	83 c3 16             	add    $0x16,%ebx
 8321a46:	c1 e3 03             	shl    $0x3,%ebx
 8321a49:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 8321a4f:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8321a52:	01 d0                	add    %edx,%eax
 8321a54:	83 c0 30             	add    $0x30,%eax
 8321a57:	0f b7 50 14          	movzwl 0x14(%eax),%edx
 8321a5b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8321a5e:	83 c1 2c             	add    $0x2c,%ecx
 8321a61:	66 89 54 c8 0a       	mov    %dx,0xa(%eax,%ecx,8)
 8321a66:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8321a6a:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321a6d:	8b 55 10             	mov    0x10(%ebp),%edx
 8321a70:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321a76:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321a79:	05 ed 00 00 00       	add    $0xed,%eax
 8321a7e:	0f b6 00             	movzbl (%eax),%eax
 8321a81:	0f b6 c0             	movzbl %al,%eax
 8321a84:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8321a87:	0f 9f c0             	setg   %al
 8321a8a:	84 c0                	test   %al,%al
 8321a8c:	0f 85 49 ff ff ff    	jne    83219db <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1561>
 8321a92:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8321a95:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321a99:	c7 44 24 08 60 5d c2 	movl   $0x8c25d60,0x8(%esp)
 8321aa0:	08 
 8321aa1:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 8321aa8:	00 
 8321aa9:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8321aaf:	89 04 24             	mov    %eax,(%esp)
 8321ab2:	e8 65 ad 26 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8321ab7:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321aba:	8b 55 10             	mov    0x10(%ebp),%edx
 8321abd:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8321ac3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8321ac6:	83 c0 30             	add    $0x30,%eax
 8321ac9:	8b 40 09             	mov    0x9(%eax),%eax
 8321acc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321ad0:	c7 44 24 08 60 5d c2 	movl   $0x8c25d60,0x8(%esp)
 8321ad7:	08 
 8321ad8:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8321adf:	00 
 8321ae0:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 8321ae6:	89 04 24             	mov    %eax,(%esp)
 8321ae9:	e8 2e ad 26 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8321aee:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321af1:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321af8:	89 04 24             	mov    %eax,(%esp)
 8321afb:	e8 f6 84 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8321b00:	83 f8 01             	cmp    $0x1,%eax
 8321b03:	0f 95 c0             	setne  %al
 8321b06:	84 c0                	test   %al,%al
 8321b08:	0f 84 b1 00 00 00    	je     8321bbf <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1745>
 8321b0e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321b11:	8b 84 85 38 fc ff ff 	mov    -0x3c8(%ebp,%eax,4),%eax
 8321b18:	89 04 24             	mov    %eax,(%esp)
 8321b1b:	e8 da f7 dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8321b20:	84 c0                	test   %al,%al
 8321b22:	74 1e                	je     8321b42 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16c8>
 8321b24:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321b27:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321b2e:	89 04 24             	mov    %eax,(%esp)
 8321b31:	e8 ca 84 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8321b36:	83 f8 01             	cmp    $0x1,%eax
 8321b39:	7e 07                	jle    8321b42 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16c8>
 8321b3b:	b8 01 00 00 00       	mov    $0x1,%eax
 8321b40:	eb 05                	jmp    8321b47 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16cd>
 8321b42:	b8 00 00 00 00       	mov    $0x0,%eax
 8321b47:	84 c0                	test   %al,%al
 8321b49:	74 4e                	je     8321b99 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x171f>
 8321b4b:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321b4e:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321b55:	89 04 24             	mov    %eax,(%esp)
 8321b58:	e8 a3 84 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8321b5d:	89 c3                	mov    %eax,%ebx
 8321b5f:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321b62:	8b 84 85 38 fc ff ff 	mov    -0x3c8(%ebp,%eax,4),%eax
 8321b69:	89 04 24             	mov    %eax,(%esp)
 8321b6c:	e8 11 d2 df ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 8321b71:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8321b75:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321b79:	c7 44 24 08 63 5d c2 	movl   $0x8c25d63,0x8(%esp)
 8321b80:	08 
 8321b81:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8321b88:	00 
 8321b89:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
 8321b8f:	89 04 24             	mov    %eax,(%esp)
 8321b92:	e8 85 ac 26 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8321b97:	eb 5a                	jmp    8321bf3 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1779>
 8321b99:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321b9c:	8b 84 85 38 fc ff ff 	mov    -0x3c8(%ebp,%eax,4),%eax
 8321ba3:	89 04 24             	mov    %eax,(%esp)
 8321ba6:	e8 d7 d1 df ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 8321bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321baf:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
 8321bb5:	89 04 24             	mov    %eax,(%esp)
 8321bb8:	e8 33 c3 d5 ff       	call   807def0 <strcpy@plt>
 8321bbd:	eb 34                	jmp    8321bf3 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1779>
 8321bbf:	8b 45 88             	mov    -0x78(%ebp),%eax
 8321bc2:	8b 84 85 c8 fc ff ff 	mov    -0x338(%ebp,%eax,4),%eax
 8321bc9:	89 04 24             	mov    %eax,(%esp)
 8321bcc:	e8 2f 84 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8321bd1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321bd5:	c7 44 24 08 6b 5d c2 	movl   $0x8c25d6b,0x8(%esp)
 8321bdc:	08 
 8321bdd:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8321be4:	00 
 8321be5:	8d 85 e8 fd ff ff    	lea    -0x218(%ebp),%eax
 8321beb:	89 04 24             	mov    %eax,(%esp)
 8321bee:	e8 29 ac 26 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8321bf3:	83 7d a4 00          	cmpl   $0x0,-0x5c(%ebp)
 8321bf7:	75 6e                	jne    8321c67 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x17ed>
 8321bf9:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8321bfe:	8b 00                	mov    (%eax),%eax
 8321c00:	83 c0 18             	add    $0x18,%eax
 8321c03:	8b 30                	mov    (%eax),%esi
 8321c05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321c08:	89 04 24             	mov    %eax,(%esp)
 8321c0b:	e8 18 f4 dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8321c10:	89 c3                	mov    %eax,%ebx
 8321c12:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8321c18:	89 04 24             	mov    %eax,(%esp)
 8321c1b:	e8 b8 5a 19 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 8321c20:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 8321c26:	8d 8d 78 fe ff ff    	lea    -0x188(%ebp),%ecx
 8321c2c:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8321c30:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8321c34:	8d 8d e8 fd ff ff    	lea    -0x218(%ebp),%ecx
 8321c3a:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8321c3e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8321c42:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8321c48:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321c4c:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 8321c52:	89 44 24 08          	mov    %eax,0x8(%esp)
 8321c56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321c59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321c5d:	89 14 24             	mov    %edx,(%esp)
 8321c60:	ff d6                	call   *%esi
 8321c62:	e9 89 00 00 00       	jmp    8321cf0 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1876>
 8321c67:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8321c6c:	8b 00                	mov    (%eax),%eax
 8321c6e:	83 c0 14             	add    $0x14,%eax
 8321c71:	8b 30                	mov    (%eax),%esi
 8321c73:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321c76:	89 04 24             	mov    %eax,(%esp)
 8321c79:	e8 aa f3 dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8321c7e:	89 c3                	mov    %eax,%ebx
 8321c80:	8d 85 83 fe ff ff    	lea    -0x17d(%ebp),%eax
 8321c86:	89 04 24             	mov    %eax,(%esp)
 8321c89:	e8 4a 5a 19 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 8321c8e:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 8321c94:	8d 8d 78 fe ff ff    	lea    -0x188(%ebp),%ecx
 8321c9a:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8321c9e:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8321ca2:	8d 8d e8 fd ff ff    	lea    -0x218(%ebp),%ecx
 8321ca8:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8321cac:	89 44 24 10          	mov    %eax,0x10(%esp)
 8321cb0:	8d 85 4c fe ff ff    	lea    -0x1b4(%ebp),%eax
 8321cb6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8321cba:	8d 85 70 fe ff ff    	lea    -0x190(%ebp),%eax
 8321cc0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8321cc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321cc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321ccb:	89 14 24             	mov    %edx,(%esp)
 8321cce:	ff d6                	call   *%esi
 8321cd0:	eb 1e                	jmp    8321cf0 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1876>
 8321cd2:	89 d3                	mov    %edx,%ebx
 8321cd4:	89 c6                	mov    %eax,%esi
 8321cd6:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 8321cdc:	89 04 24             	mov    %eax,(%esp)
 8321cdf:	e8 ee ab 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8321ce4:	89 f0                	mov    %esi,%eax
 8321ce6:	89 da                	mov    %ebx,%edx
 8321ce8:	89 04 24             	mov    %eax,(%esp)
 8321ceb:	e8 60 1a 7c 00       	call   8ae3750 <_Unwind_Resume>
 8321cf0:	8d 85 78 fe ff ff    	lea    -0x188(%ebp),%eax
 8321cf6:	89 04 24             	mov    %eax,(%esp)
 8321cf9:	e8 d4 ab 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8321cfe:	eb 01                	jmp    8321d01 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1887>
 8321d00:	90                   	nop
 8321d01:	83 45 88 01          	addl   $0x1,-0x78(%ebp)
 8321d05:	8b 45 10             	mov    0x10(%ebp),%eax
 8321d08:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8321d0c:	0f b6 c0             	movzbl %al,%eax
 8321d0f:	3b 45 88             	cmp    -0x78(%ebp),%eax
 8321d12:	0f 9f c0             	setg   %al
 8321d15:	84 c0                	test   %al,%al
 8321d17:	0f 85 a6 f1 ff ff    	jne    8320ec3 <_ZN8WongWork9CCeraShop17ProcessBuyRequestEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xa49>
 8321d1d:	b8 01 00 00 00       	mov    $0x1,%eax
 8321d22:	81 c4 0c 04 00 00    	add    $0x40c,%esp
 8321d28:	5b                   	pop    %ebx
 8321d29:	5e                   	pop    %esi
 8321d2a:	5f                   	pop    %edi
 8321d2b:	5d                   	pop    %ebp
 8321d2c:	c3                   	ret
 8321d2d:	90                   	nop

```

```c
// WongWork::CCeraShop::ProcessBuyRequest @ 0x832047a

/* WongWork::CCeraShop::ProcessBuyRequest(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
WongWork::CCeraShop::ProcessBuyRequest
          (CCeraShop *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  char *pcVar1;
  MSG_BUY_CERASHOP_ITEM MVar2;
  MSG_BUY_CERASHOP_ITEM MVar3;
  code *pcVar4;
  char cVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  CCeraShopGoods *pCVar11;
  GameWorld *pGVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  undefined4 *puVar16;
  CUserPremium *this_00;
  uint *puVar17;
  CInventory *pCVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  Stream *pSVar21;
  CStreamGuard *this_01;
  int iVar22;
  uint uVar23;
  CCeraShopGoods **ppCVar24;
  bool bVar25;
  byte bVar26;
  int local_3cc [36];
  CCeraShopGoods *local_33c [36];
  undefined4 local_2ac [36];
  char local_21c [100];
  char local_1b8 [36];
  char local_194 [8];
  CStreamGuard local_18c [11];
  char local_181;
  char local_180 [20];
  cMyTrace local_16c [16];
  cMyTrace local_15c [16];
  cMyTrace local_14c [16];
  cMyTrace local_13c [16];
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  int local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  cMyTrace local_a8 [16];
  cMyTrace local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  char local_49;
  undefined4 local_48;
  ushort local_42;
  int local_40;
  stCeraShopIPGRequest_t *local_3c;
  int local_38;
  CEquipItem *local_34;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  bVar26 = 0;
  MVar2 = param_2[0x36];
  uVar8 = CUser::get_acc_id(param_1);
  uVar9 = NumberToString(uVar8,0);
  cMyTrace::cMyTrace(local_16c,
                     "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                     ,0x92,0);
  cMyTrace::operator()
            (local_16c,"NEXON BILLING : ProcessBuyRequest(m_id(%s),count(%d))",uVar9,
             (uint)(byte)MVar2);
  puVar16 = local_2ac;
  for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + (uint)bVar26 * -2 + 1;
  }
  local_88 = 0;
  local_84 = 0;
  iVar22 = G_CDataManager();
  local_80 = CDataManager::FindGoods(iVar22);
  if (local_80 == 0) {
    ProcessError(this,param_1,0x15,0,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
  }
  else {
    cVar5 = CEventMgr::IsChildrensDayEventing();
    if (cVar5 != '\0') {
      CUser::ClearChildrensDayEvent(param_1);
    }
    ppCVar24 = local_33c;
    for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
      *ppCVar24 = (CCeraShopGoods *)0x0;
      ppCVar24 = ppCVar24 + (uint)bVar26 * -2 + 1;
    }
    piVar15 = local_3cc;
    for (iVar22 = 0x24; iVar22 != 0; iVar22 = iVar22 + -1) {
      *piVar15 = 0;
      piVar15 = piVar15 + (uint)bVar26 * -2 + 1;
    }
    for (local_7c = 0; iVar22 = local_7c, local_7c < (int)(uint)(byte)param_2[0x36];
        local_7c = local_7c + 1) {
      iVar10 = G_CDataManager();
      pCVar11 = (CCeraShopGoods *)CDataManager::FindGoods(iVar10);
      local_33c[iVar22] = pCVar11;
      if (local_33c[local_7c] == (CCeraShopGoods *)0x0) {
        local_50 = 0xffffffff;
        ProcessError(this,param_1,0x15,-1,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),local_7c + 1,
                     (uint)(byte)param_2[0x36],(char)param_2[0xf]);
        local_33c[local_7c] = (CCeraShopGoods *)0x0;
        cMyTrace::cMyTrace(local_15c,
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0xc3,0);
        cMyTrace::operator()
                  (local_15c,"[%s][%d]",
                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0xc3);
      }
      else {
        local_54 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
        cVar5 = CUser::IsGameMasterMode(param_1);
        if (cVar5 == '\x01') {
LAB_083208e9:
          iVar10 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
          iVar22 = local_7c;
          if (iVar10 != 1) {
            iVar10 = CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
            local_3cc[iVar22] = iVar10;
            if (local_3cc[iVar22] == 0) {
              ProcessError(this,param_1,0x11,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                           local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_12c,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x116,0);
              cMyTrace::operator()
                        (local_12c,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x116);
              goto LAB_08320d50;
            }
          }
          iVar22 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
          if (iVar22 == 0x334) goto LAB_08320aba;
          if (iVar22 < 0x335) {
            if (iVar22 < 0xc6) {
              if ((0xc3 < iVar22) || (iVar22 == 0xc2)) goto LAB_08320aba;
              if (iVar22 == 0xc3) {
                CUser::isAffectedPremium(param_1,0x21);
              }
            }
            else if ((iVar22 == 0x2d0) || ((0x2cf < iVar22 && (iVar22 - 0x2e7U < 2))))
            goto LAB_08320aba;
          }
          else if (iVar22 < 0x289833) {
            if ((0x289830 < iVar22) ||
               (((iVar22 == 0x2897c2 || (iVar22 == 0x289806)) || (iVar22 == 0x398)))) {
LAB_08320aba:
              local_49 = '\0';
              pGVar12 = (GameWorld *)G_GameWorld();
              cVar5 = GameWorld::IsPVPChannel(pGVar12);
              if (cVar5 != '\0') {
                local_49 = '\x01';
                pGVar12 = (GameWorld *)G_GameWorld();
                cVar5 = GameWorld::IsPvPSkilTreeChannel(pGVar12);
                if ((cVar5 == '\0') ||
                   (iVar22 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar22 < 10
                   )) {
                  bVar25 = false;
                }
                else {
                  bVar25 = true;
                }
                if (bVar25) {
                  local_49 = '\0';
                }
              }
              if (local_49 != '\0') {
                ProcessError(this,param_1,7,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                             local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_11c,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x16c,0);
                cMyTrace::operator()
                          (local_11c,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x16c);
                goto LAB_08320d50;
              }
            }
          }
          else if ((iVar22 == 0x28beba) || (iVar22 == 0x28d154)) goto LAB_08320aba;
          MVar2 = param_2[local_7c * 0x1cf + 0x38];
          MVar3 = param_2[local_7c * 0x1cf + 0x37];
          uVar6 = CCeraShopGoods::GetExpiryDate(local_33c[local_7c]);
          uVar8 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
          uVar13 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
          cVar5 = _CheckBuyingCondition
                            (this,param_1,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),uVar13,uVar8,
                             uVar6,(uchar)MVar3,(short)(char)MVar2);
          if (cVar5 != '\x01') {
            ProcessError(this,param_1,0x4f,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_10c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0x185,0);
            cMyTrace::operator()
                      (local_10c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0x185);
          }
        }
        else {
          iVar22 = CCeraShopGoods::GetSticker(local_33c[local_7c]);
          if (iVar22 == 99) {
            ProcessError(this,param_1,8,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_14c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0xde,0);
            cMyTrace::operator()
                      (local_14c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0xde);
          }
          else {
            if ((param_2[0xf] == (MSG_BUY_CERASHOP_ITEM)0x1) &&
               (cVar5 = CCeraShopGoods::isGiftDisallowance_(local_33c[local_7c]), cVar5 != '\0')) {
              bVar25 = true;
            }
            else {
              bVar25 = false;
            }
            if (!bVar25) goto LAB_083208e9;
            ProcessError(this,param_1,8,local_54,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                         local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_33c[local_7c] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_13c,
                               "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0xe8,0);
            cMyTrace::operator()
                      (local_13c,"[%s][%d]",
                       "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0xe8);
          }
        }
      }
LAB_08320d50:
    }
    cVar5 = _CheckValidCount(this,local_33c);
    if (cVar5 == '\x01') {
      CUser::resetUsedCera(param_1);
      pcVar14 = local_1b8;
      for (iVar22 = 9; iVar22 != 0; iVar22 = iVar22 + -1) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14[2] = '\0';
        pcVar14[3] = '\0';
        pcVar14 = pcVar14 + ((uint)bVar26 * -2 + 1) * 4;
      }
      pcVar14 = &local_181;
      uVar8 = 0x15;
      bVar25 = ((uint)pcVar14 & 1) != 0;
      if (bVar25) {
        local_181 = '\0';
        pcVar14 = local_180;
        uVar8 = 0x14;
      }
      if (((uint)pcVar14 & 2) != 0) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14 = pcVar14 + 2;
        uVar8 = uVar8 - 2;
      }
      uVar23 = 0;
      do {
        pcVar1 = pcVar14 + uVar23;
        pcVar1[0] = '\0';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        uVar23 = uVar23 + 4;
      } while (uVar23 < (uVar8 & 0xfffffffc));
      pcVar14 = pcVar14 + uVar23;
      if ((uVar8 & 2) != 0) {
        pcVar14[0] = '\0';
        pcVar14[1] = '\0';
        pcVar14 = pcVar14 + 2;
      }
      if (!bVar25) {
        *pcVar14 = '\0';
      }
      local_78 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_74 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      local_70 = (int)local_74 >> 0x1f;
      local_6c = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
      local_68 = 0;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      for (local_7c = 0; local_7c < (int)(uint)(byte)param_2[0x36]; local_7c = local_7c + 1) {
        if (local_33c[local_7c] != (CCeraShopGoods *)0x0) {
          iVar22 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
          if (iVar22 == 0) {
            local_38 = 0;
            piVar15 = (int *)CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
            cVar5 = (**(code **)(*piVar15 + 0x10))(piVar15);
            if (cVar5 == '\x01') {
              local_34 = (CEquipItem *)CCeraShopGoods::GetRelatedItem(local_33c[local_7c]);
              local_30 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                         CEquipItem::getAvatarTypeSelect(local_34);
              cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty
                                ();
              if ((cVar5 == '\0') &&
                 (MVar2 = param_2[local_7c * 0x1cf + 0x38],
                 cVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                         size(local_30), (char)MVar2 < cVar5)) {
                bVar25 = false;
              }
              else {
                bVar25 = true;
              }
              if (bVar25) {
                ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_ec,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x253,0);
                cMyTrace::operator()
                          (local_ec,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x253);
              }
              else {
                if ((byte)param_2[local_7c * 0x1cf + 0x37] < 100) {
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_60 = *(uint *)(iVar22 + 0xc);
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_58 = *(uint *)(iVar22 + 4);
                  iVar22 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                           operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_5c = *(uint *)(iVar22 + 8);
                  puVar16 = (undefined4 *)
                            std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::
                            operator[](local_30,(int)(char)param_2[local_7c * 0x1cf + 0x38]);
                  local_84 = *puVar16;
                  goto LAB_083212dc;
                }
                ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_dc,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x25e,0);
                cMyTrace::operator()
                          (local_dc,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x25e);
              }
            }
            else {
              ProcessError(this,param_1,0x17,local_38,*(uint *)(param_2 + local_7c * 0x1cf + 0x39),
                           local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_fc,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x247,0);
              cMyTrace::operator()
                        (local_fc,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x247);
            }
          }
          else {
            local_60 = CCeraShopGoods::GetCeraPrice(local_33c[local_7c]);
            local_58 = CCeraShopGoods::GetGoldPrice(local_33c[local_7c]);
            local_5c = CCeraShopGoods::GetWinPoint(local_33c[local_7c]);
LAB_083212dc:
            this_00 = (CUserPremium *)CUser::GetPremiumInfo(param_1);
            local_42 = CUserPremium::getCeraShopDiscountRate(this_00);
            if (local_42 != 0) {
              local_60 = local_60 - (local_42 * local_60) / 100;
              local_58 = local_58 - (int)(local_42 * local_58) / 100;
              local_5c = local_5c - (local_42 * local_5c) / 100;
            }
            local_40 = 0;
            uVar8 = CUser::GetCera(param_1);
            if (uVar8 < local_60) {
              local_40 = 0xb;
            }
            else {
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              iVar22 = CInventory::get_money(pCVar18);
              if (iVar22 < (int)local_58) {
                local_40 = 10;
              }
              else {
                uVar8 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
                if (uVar8 < local_5c) {
                  local_40 = 0xc;
                }
              }
            }
            iVar22 = (int)local_58 >> 0x1f;
            if (((int)local_70 <= iVar22) && (((int)local_70 < iVar22 || (local_74 < local_58)))) {
              local_40 = 10;
            }
            if (((int)local_68 < 1) && ((0x7fffffff < local_68 || (local_6c < local_5c)))) {
              local_40 = 0xc;
            }
            local_cc = local_74 - local_58;
            local_c8 = (local_70 - iVar22) - (uint)(local_74 < local_58);
            local_c4 = 0;
            local_c0 = 0;
            puVar17 = (uint *)std::max<long_long>((longlong *)&local_c4,(longlong *)&local_cc);
            local_70 = puVar17[1];
            local_74 = *puVar17;
            local_bc = local_6c - local_5c;
            local_b8 = local_68 - (local_6c < local_5c);
            local_b4 = 0;
            local_b0 = 0;
            puVar17 = (uint *)std::max<long_long>((longlong *)&local_b4,(longlong *)&local_bc);
            local_6c = *puVar17;
            local_68 = puVar17[1];
            if (local_40 == 0) {
              iVar22 = CCeraShopGoods::GetFeaturedIdx(local_33c[local_7c]);
              cVar5 = CUser::IsRestrictedGoods(param_1,iVar22);
              if (cVar5 == '\0') {
                pSVar21 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x37b);
                CStreamGuard::CStreamGuard(local_18c,pSVar21,false);
                this_01 = (CStreamGuard *)CStreamGuard::operator->(local_18c);
                    /* try { // try from 083217d6 to 08321ccf has its CatchHandler @ 08321cd2 */
                local_3c = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(this_01);
                *(undefined4 *)local_3c = *(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39);
                uVar9 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 4) = uVar9;
                uVar7 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                *(undefined2 *)(local_3c + 0xc) = uVar7;
                *(uint *)(local_3c + 0x10) = local_60;
                *(uint *)(local_3c + 0x18) = local_58;
                *(uint *)(local_3c + 0x14) = local_5c;
                uVar9 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 8) = uVar9;
                local_3c[0x2c] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x37);
                local_3c[0x2d] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x38);
                *(undefined4 *)(local_3c + 0x1c) = local_84;
                uVar9 = CCeraShopGoods::GetFeaturedIdx(local_33c[local_7c]);
                *(undefined4 *)(local_3c + 0x28) = uVar9;
                *(uint *)(local_3c + 0x20) = (uint)(byte)param_2[0x36];
                *(int *)(local_3c + 0x24) = local_7c + 1;
                *(undefined4 *)(local_3c + 0x30) = local_78;
                local_3c[0x34] = *(stCeraShopIPGRequest_t *)(param_2 + 0xf);
                *(undefined4 *)(local_3c + 0x40) = *(undefined4 *)(param_2 + 0x2e);
                *(undefined4 *)(local_3c + 0x38) = *(undefined4 *)(param_2 + 0x32);
                local_3c[0x44] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0x3d);
                for (local_24 = 0; local_24 < (int)(uint)(byte)param_2[local_7c * 0x1cf + 0x3d];
                    local_24 = local_24 + 1) {
                  *(undefined4 *)(local_3c + (local_24 + 8) * 8 + 8) =
                       *(undefined4 *)(param_2 + local_24 * 5 + local_7c * 0x1cf + 0x3e);
                  local_3c[(local_24 + 8) * 8 + 0xc] =
                       *(stCeraShopIPGRequest_t *)(param_2 + local_24 * 5 + local_7c * 0x1cf + 0x42)
                  ;
                }
                local_3c[0x160] = *(stCeraShopIPGRequest_t *)(param_2 + local_7c * 0x1cf + 0xed);
                for (local_20 = 0; local_20 < (int)(uint)(byte)param_2[local_7c * 0x1cf + 0xed];
                    local_20 = local_20 + 1) {
                  *(undefined4 *)(local_3c + (local_20 + 0x2c) * 8 + 4) =
                       *(undefined4 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x3e);
                  *(undefined2 *)(local_3c + (local_20 + 0x2c) * 8 + 8) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x42);
                  *(undefined2 *)(local_3c + (local_20 + 0x2c) * 8 + 10) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_7c * 0x1cf + 0x44);
                }
                OS_API::snprintf(local_1b8,0x24,"%d",local_60);
                OS_API::snprintf(local_194,8,"%d",*(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39)
                                );
                iVar22 = CCeraShopGoods::GetItemIdx(local_33c[local_7c]);
                if (iVar22 == 1) {
                  uVar9 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                  OS_API::snprintf(local_21c,0x62,&DAT_08c25d6b,uVar9);
                }
                else {
                  cVar5 = CItem::is_stackable((CItem *)local_3cc[local_7c]);
                  if ((cVar5 == '\0') ||
                     (iVar22 = CCeraShopGoods::GetStackCount(local_33c[local_7c]), iVar22 < 2)) {
                    bVar25 = false;
                  }
                  else {
                    bVar25 = true;
                  }
                  if (bVar25) {
                    uVar9 = CCeraShopGoods::GetStackCount(local_33c[local_7c]);
                    uVar19 = CItem::GetItemName((CItem *)local_3cc[local_7c]);
                    OS_API::snprintf(local_21c,0x62,&DAT_08c25d63,uVar19,uVar9);
                  }
                  else {
                    pcVar14 = (char *)CItem::GetItemName((CItem *)local_3cc[local_7c]);
                    strcpy(local_21c,pcVar14);
                  }
                }
                if (local_60 == 0) {
                  pcVar4 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
                  uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar19 = CGenUniqueNo::GenUniqueNo(&local_181);
                  (*pcVar4)(GlobalData::s_pIPGHelper,param_1,local_194,local_1b8,uVar19,local_21c,
                            uVar9,local_18c);
                }
                else {
                  pcVar4 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
                  uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar19 = CGenUniqueNo::GenUniqueNo(&local_181);
                  (*pcVar4)(GlobalData::s_pIPGHelper,param_1,local_194,local_1b8,uVar19,local_21c,
                            uVar9,local_18c);
                }
                CStreamGuard::~CStreamGuard(local_18c);
              }
              else {
                local_28 = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
                ProcessError(this,param_1,0x14,local_28,*(uint *)(param_2 + local_7c * 0x1cf + 0x39)
                             ,local_7c + 1,(uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_33c[local_7c] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_98,
                                   "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x2ed,0);
                cMyTrace::operator()
                          (local_98,"[%s][%d]",
                           "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2ed);
              }
            }
            else {
              uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d6,
                         "IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d]"
                         ,uVar9,local_60,local_58,local_5c);
              uVar9 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              uVar19 = CInventory::get_money(pCVar18);
              uVar20 = CUser::GetCera(param_1);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d7," / UCera[%d] UGold[%d] UWP[%d]\n",uVar20,uVar19,uVar9);
              LogManager::logFormat
                        (1,"CeraShop.cpp",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2d9,"Error Goods No : %d",
                         *(undefined4 *)(param_2 + local_7c * 0x1cf + 0x39));
              local_2c = CCeraShopGoods::GetGroupIdx(local_33c[local_7c]);
              ProcessError(this,param_1,(ushort)local_40,local_2c,
                           *(uint *)(param_2 + local_7c * 0x1cf + 0x39),local_7c + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_33c[local_7c] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_a8,
                                 "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2e1,0);
              cMyTrace::operator()
                        (local_a8,"[%s][%d]",
                         "bool WongWork::CCeraShop::ProcessBuyRequest(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2e1);
            }
          }
        }
      }
    }
    else {
      local_48 = 0xffffffff;
      ProcessError(this,param_1,1,-1,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
    }
  }
  return 1;
}

```

---

## ProcessError

```asm
// === 08323978 WongWork::CCeraShop::ProcessError  [0x08323978-0x8323af3] ===
 8323978:	55                   	push   %ebp
 8323979:	89 e5                	mov    %esp,%ebp
 832397b:	56                   	push   %esi
 832397c:	53                   	push   %ebx
 832397d:	83 ec 40             	sub    $0x40,%esp
 8323980:	8b 55 10             	mov    0x10(%ebp),%edx
 8323983:	8b 45 24             	mov    0x24(%ebp),%eax
 8323986:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 832398a:	88 45 d0             	mov    %al,-0x30(%ebp)
 832398d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323990:	89 04 24             	mov    %eax,(%esp)
 8323993:	e8 b4 a3 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8323998:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 832399f:	00 
 83239a0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83239a7:	00 
 83239a8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83239ab:	89 04 24             	mov    %eax,(%esp)
 83239ae:	e8 49 7f da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83239b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83239ba:	00 
 83239bb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83239be:	89 04 24             	mov    %eax,(%esp)
 83239c1:	e8 5a 7f da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83239c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83239cd:	00 
 83239ce:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83239d1:	89 04 24             	mov    %eax,(%esp)
 83239d4:	e8 47 7f da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83239d9:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 83239dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 83239e1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83239e4:	89 04 24             	mov    %eax,(%esp)
 83239e7:	e8 b8 64 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 83239ec:	0f be 45 d0          	movsbl -0x30(%ebp),%eax
 83239f0:	89 44 24 04          	mov    %eax,0x4(%esp)
 83239f4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 83239f7:	89 04 24             	mov    %eax,(%esp)
 83239fa:	e8 21 7f da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83239ff:	8b 45 14             	mov    0x14(%ebp),%eax
 8323a02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323a06:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a09:	89 04 24             	mov    %eax,(%esp)
 8323a0c:	e8 2b 7f da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323a11:	8b 45 18             	mov    0x18(%ebp),%eax
 8323a14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323a18:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a1b:	89 04 24             	mov    %eax,(%esp)
 8323a1e:	e8 19 7f da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323a23:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8323a26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323a2a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a2d:	89 04 24             	mov    %eax,(%esp)
 8323a30:	e8 07 7f da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323a35:	8b 45 20             	mov    0x20(%ebp),%eax
 8323a38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323a3c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a3f:	89 04 24             	mov    %eax,(%esp)
 8323a42:	e8 f5 7e da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323a47:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8323a4e:	ff 
 8323a4f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a52:	89 04 24             	mov    %eax,(%esp)
 8323a55:	e8 e2 7e da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323a5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8323a61:	00 
 8323a62:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a65:	89 04 24             	mov    %eax,(%esp)
 8323a68:	e8 eb 7e da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8323a6d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323a70:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323a74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323a77:	89 04 24             	mov    %eax,(%esp)
 8323a7a:	e8 3b 4b 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8323a7f:	0f b7 5d d4          	movzwl -0x2c(%ebp),%ebx
 8323a83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8323a8a:	00 
 8323a8b:	c7 44 24 08 2a 0c 00 	movl   $0xc2a,0x8(%esp)
 8323a92:	00 
 8323a93:	c7 44 24 04 80 6b c2 	movl   $0x8c26b80,0x4(%esp)
 8323a9a:	08 
 8323a9b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8323a9e:	89 04 24             	mov    %eax,(%esp)
 8323aa1:	e8 72 bc 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8323aa6:	8b 45 18             	mov    0x18(%ebp),%eax
 8323aa9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8323aad:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8323ab1:	c7 44 24 04 b8 5d c2 	movl   $0x8c25db8,0x4(%esp)
 8323ab8:	08 
 8323ab9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8323abc:	89 04 24             	mov    %eax,(%esp)
 8323abf:	e8 c4 bc 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8323ac4:	eb 1b                	jmp    8323ae1 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic+0x169>
 8323ac6:	89 d3                	mov    %edx,%ebx
 8323ac8:	89 c6                	mov    %eax,%esi
 8323aca:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323acd:	89 04 24             	mov    %eax,(%esp)
 8323ad0:	e8 ab a3 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8323ad5:	89 f0                	mov    %esi,%eax
 8323ad7:	89 da                	mov    %ebx,%edx
 8323ad9:	89 04 24             	mov    %eax,(%esp)
 8323adc:	e8 6f fc 7b 00       	call   8ae3750 <_Unwind_Resume>
 8323ae1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8323ae4:	89 04 24             	mov    %eax,(%esp)
 8323ae7:	e8 94 a3 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8323aec:	83 c4 40             	add    $0x40,%esp
 8323aef:	5b                   	pop    %ebx
 8323af0:	5e                   	pop    %esi
 8323af1:	5d                   	pop    %ebp
 8323af2:	c3                   	ret
 8323af3:	90                   	nop

```

```c
// WongWork::CCeraShop::ProcessError @ 0x8323978

/* WongWork::CCeraShop::ProcessError(CUser*, unsigned short, int, unsigned int, int, int, char) */

void __thiscall
WongWork::CCeraShop::ProcessError
          (CCeraShop *this,CUser *param_1,ushort param_2,int param_3,uint param_4,int param_5,
          int param_6,char param_7)

{
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 083239ae to 08323ac3 has its CatchHandler @ 08323ac6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x43);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)param_7);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_5);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_6);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,-1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  cMyTrace::cMyTrace(local_1c,
                     "void WongWork::CCeraShop::ProcessError(CUser*, short unsigned int, int, unsigned int, int, int, char)"
                     ,0xc2a,0);
  cMyTrace::operator()(local_1c,"NEXON BILLING : Buy Error(%d,%u)",(uint)param_2,param_4);
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

---

## ProcessIPGUserData

```asm
// === 08321d2e WongWork::CCeraShop::ProcessIPGUserData  [0x08321d2e-0x83237f5] ===
 8321d2e:	55                   	push   %ebp
 8321d2f:	89 e5                	mov    %esp,%ebp
 8321d31:	57                   	push   %edi
 8321d32:	56                   	push   %esi
 8321d33:	53                   	push   %ebx
 8321d34:	81 ec cc 02 00 00    	sub    $0x2cc,%esp
 8321d3a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321d40:	89 04 24             	mov    %eax,(%esp)
 8321d43:	e8 04 c0 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8321d48:	8b 45 14             	mov    0x14(%ebp),%eax
 8321d4b:	8b 40 1c             	mov    0x1c(%eax),%eax
 8321d4e:	83 f8 04             	cmp    $0x4,%eax
 8321d51:	0f 85 df 00 00 00    	jne    8321e36 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x108>
 8321d57:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8321d5b:	0f 84 7b 1a 00 00    	je     83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 8321d61:	8b 45 14             	mov    0x14(%ebp),%eax
 8321d64:	05 99 00 00 00       	add    $0x99,%eax
 8321d69:	89 04 24             	mov    %eax,(%esp)
 8321d6c:	e8 7f c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321d71:	89 c3                	mov    %eax,%ebx
 8321d73:	8b 45 14             	mov    0x14(%ebp),%eax
 8321d76:	05 a5 00 00 00       	add    $0xa5,%eax
 8321d7b:	89 04 24             	mov    %eax,(%esp)
 8321d7e:	e8 6d c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321d83:	01 c3                	add    %eax,%ebx
 8321d85:	8b 45 14             	mov    0x14(%ebp),%eax
 8321d88:	05 81 00 00 00       	add    $0x81,%eax
 8321d8d:	89 04 24             	mov    %eax,(%esp)
 8321d90:	e8 5b c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321d95:	01 c3                	add    %eax,%ebx
 8321d97:	8b 45 14             	mov    0x14(%ebp),%eax
 8321d9a:	83 c0 75             	add    $0x75,%eax
 8321d9d:	89 04 24             	mov    %eax,(%esp)
 8321da0:	e8 4b c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321da5:	01 c3                	add    %eax,%ebx
 8321da7:	8b 45 14             	mov    0x14(%ebp),%eax
 8321daa:	05 8d 00 00 00       	add    $0x8d,%eax
 8321daf:	89 04 24             	mov    %eax,(%esp)
 8321db2:	e8 39 c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321db7:	01 c3                	add    %eax,%ebx
 8321db9:	8b 45 14             	mov    0x14(%ebp),%eax
 8321dbc:	83 c0 69             	add    $0x69,%eax
 8321dbf:	89 04 24             	mov    %eax,(%esp)
 8321dc2:	e8 29 c9 d5 ff       	call   807e6f0 <atoi@plt>
 8321dc7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8321dca:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 8321dd0:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 8321dd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321dda:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321ddd:	89 04 24             	mov    %eax,(%esp)
 8321de0:	e8 cf 83 e5 ff       	call   817a1b4 <_ZN5CUser7SetCeraEj>
 8321de5:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 8321dec:	00 
 8321ded:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8321df4:	00 
 8321df5:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321dfb:	89 04 24             	mov    %eax,(%esp)
 8321dfe:	e8 f9 9a da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8321e03:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8321e0a:	00 
 8321e0b:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321e11:	89 04 24             	mov    %eax,(%esp)
 8321e14:	e8 07 9b da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8321e19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321e1c:	89 04 24             	mov    %eax,(%esp)
 8321e1f:	e8 56 c1 dd ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 8321e24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321e28:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321e2e:	89 04 24             	mov    %eax,(%esp)
 8321e31:	e8 06 9b da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8321e36:	8b 45 14             	mov    0x14(%ebp),%eax
 8321e39:	8b 40 1c             	mov    0x1c(%eax),%eax
 8321e3c:	85 c0                	test   %eax,%eax
 8321e3e:	0f 85 ce 00 00 00    	jne    8321f12 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1e4>
 8321e44:	8b 45 14             	mov    0x14(%ebp),%eax
 8321e47:	05 6e 02 00 00       	add    $0x26e,%eax
 8321e4c:	89 04 24             	mov    %eax,(%esp)
 8321e4f:	e8 9c c8 d5 ff       	call   807e6f0 <atoi@plt>
 8321e54:	83 f8 01             	cmp    $0x1,%eax
 8321e57:	74 4f                	je     8321ea8 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x17a>
 8321e59:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 8321e60:	00 
 8321e61:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8321e68:	00 
 8321e69:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321e6f:	89 04 24             	mov    %eax,(%esp)
 8321e72:	e8 85 9a da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8321e77:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8321e7e:	00 
 8321e7f:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321e85:	89 04 24             	mov    %eax,(%esp)
 8321e88:	e8 93 9a da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8321e8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8321e94:	00 
 8321e95:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8321e9b:	89 04 24             	mov    %eax,(%esp)
 8321e9e:	e8 99 9a da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8321ea3:	e9 e9 18 00 00       	jmp    8323791 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a63>
 8321ea8:	c7 85 28 ff ff ff 00 	movl   $0x0,-0xd8(%ebp)
 8321eaf:	00 00 00 
 8321eb2:	c7 85 24 ff ff ff 00 	movl   $0x0,-0xdc(%ebp)
 8321eb9:	00 00 00 
 8321ebc:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 8321ec2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321ec6:	8b 45 18             	mov    0x18(%ebp),%eax
 8321ec9:	89 04 24             	mov    %eax,(%esp)
 8321ecc:	e8 f3 a6 2f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8321ed1:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8321ed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8321edb:	8b 45 18             	mov    0x18(%ebp),%eax
 8321ede:	89 04 24             	mov    %eax,(%esp)
 8321ee1:	e8 de a6 2f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8321ee6:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8321eea:	0f 84 ec 18 00 00    	je     83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 8321ef0:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8321ef5:	8b 00                	mov    (%eax),%eax
 8321ef7:	83 c0 2c             	add    $0x2c,%eax
 8321efa:	8b 08                	mov    (%eax),%ecx
 8321efc:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8321f01:	8b 55 0c             	mov    0xc(%ebp),%edx
 8321f04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8321f08:	89 04 24             	mov    %eax,(%esp)
 8321f0b:	ff d1                	call   *%ecx
 8321f0d:	e9 ca 18 00 00       	jmp    83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 8321f12:	8b 45 14             	mov    0x14(%ebp),%eax
 8321f15:	8b 40 1c             	mov    0x1c(%eax),%eax
 8321f18:	83 f8 02             	cmp    $0x2,%eax
 8321f1b:	0f 85 70 18 00 00    	jne    8323791 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a63>
 8321f21:	8b 45 0c             	mov    0xc(%ebp),%eax
 8321f24:	89 04 24             	mov    %eax,(%esp)
 8321f27:	e8 06 e5 df ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8321f2c:	85 c0                	test   %eax,%eax
 8321f2e:	0f 94 c0             	sete   %al
 8321f31:	84 c0                	test   %al,%al
 8321f33:	0f 85 a3 18 00 00    	jne    83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 8321f39:	8b 45 18             	mov    0x18(%ebp),%eax
 8321f3c:	89 04 24             	mov    %eax,(%esp)
 8321f3f:	e8 de 85 e5 ff       	call   817a522 <_ZN6Stream12GetOutBufferI22stCeraShopIPGRequest_tEEPT_v>
 8321f44:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8321f4a:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f50:	8b 40 04             	mov    0x4(%eax),%eax
 8321f53:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 8321f59:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f5f:	8b 40 24             	mov    0x24(%eax),%eax
 8321f62:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 8321f68:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f6e:	8b 40 20             	mov    0x20(%eax),%eax
 8321f71:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8321f77:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f7d:	8b 40 28             	mov    0x28(%eax),%eax
 8321f80:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8321f86:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f8c:	8b 40 1c             	mov    0x1c(%eax),%eax
 8321f8f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8321f95:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321f9b:	8b 00                	mov    (%eax),%eax
 8321f9d:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8321fa3:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fa9:	8b 40 08             	mov    0x8(%eax),%eax
 8321fac:	89 45 80             	mov    %eax,-0x80(%ebp)
 8321faf:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fb5:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8321fb9:	66 89 45 84          	mov    %ax,-0x7c(%ebp)
 8321fbd:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fc3:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 8321fc7:	88 45 86             	mov    %al,-0x7a(%ebp)
 8321fca:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fd0:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 8321fd4:	88 45 87             	mov    %al,-0x79(%ebp)
 8321fd7:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fdd:	8b 40 10             	mov    0x10(%eax),%eax
 8321fe0:	89 45 88             	mov    %eax,-0x78(%ebp)
 8321fe3:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321fe9:	8b 40 14             	mov    0x14(%eax),%eax
 8321fec:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8321fef:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8321ff5:	8b 40 18             	mov    0x18(%eax),%eax
 8321ff8:	89 45 90             	mov    %eax,-0x70(%ebp)
 8321ffb:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8322001:	8b 40 30             	mov    0x30(%eax),%eax
 8322004:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8322007:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 832200d:	89 04 24             	mov    %eax,(%esp)
 8322010:	e8 7d 8c e2 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8322015:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 832201b:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 832201f:	88 45 9b             	mov    %al,-0x65(%ebp)
 8322022:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8322028:	8b 40 38             	mov    0x38(%eax),%eax
 832202b:	89 45 9c             	mov    %eax,-0x64(%ebp)
 832202e:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8322034:	8b 40 40             	mov    0x40(%eax),%eax
 8322037:	89 45 a0             	mov    %eax,-0x60(%ebp)
 832203a:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8322040:	89 04 24             	mov    %eax,(%esp)
 8322043:	e8 fc 81 e5 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 8322048:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 832204f:	eb 71                	jmp    83220c2 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x394>
 8322051:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8322054:	83 c0 08             	add    $0x8,%eax
 8322057:	c1 e0 03             	shl    $0x3,%eax
 832205a:	03 85 64 ff ff ff    	add    -0x9c(%ebp),%eax
 8322060:	8d 48 0c             	lea    0xc(%eax),%ecx
 8322063:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8322066:	83 c0 08             	add    $0x8,%eax
 8322069:	c1 e0 03             	shl    $0x3,%eax
 832206c:	03 85 64 ff ff ff    	add    -0x9c(%ebp),%eax
 8322072:	8d 50 08             	lea    0x8(%eax),%edx
 8322075:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 832207b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 832207f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8322083:	89 04 24             	mov    %eax,(%esp)
 8322086:	e8 ea 84 e5 ff       	call   817a575 <_ZSt9make_pairIRmRhESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 832208b:	83 ec 04             	sub    $0x4,%esp
 832208e:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8322094:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322098:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 832209e:	89 04 24             	mov    %eax,(%esp)
 83220a1:	e8 0e 85 e5 ff       	call   817a5b4 <_ZNSt4pairIiiEC1ImhEEOS_IT_T0_E>
 83220a6:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 83220ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 83220b0:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 83220b6:	89 04 24             	mov    %eax,(%esp)
 83220b9:	e8 48 b5 db ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 83220be:	83 45 ac 01          	addl   $0x1,-0x54(%ebp)
 83220c2:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 83220c8:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 83220cc:	0f b6 c0             	movzbl %al,%eax
 83220cf:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 83220d2:	0f 9f c0             	setg   %al
 83220d5:	84 c0                	test   %al,%al
 83220d7:	0f 85 74 ff ff ff    	jne    8322051 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x323>
 83220dd:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 83220e4:	eb 2b                	jmp    8322111 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x3e3>
 83220e6:	8b 45 b0             	mov    -0x50(%ebp),%eax
 83220e9:	83 c0 2c             	add    $0x2c,%eax
 83220ec:	c1 e0 03             	shl    $0x3,%eax
 83220ef:	03 85 64 ff ff ff    	add    -0x9c(%ebp),%eax
 83220f5:	83 c0 04             	add    $0x4,%eax
 83220f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83220fc:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8322102:	83 c0 0c             	add    $0xc,%eax
 8322105:	89 04 24             	mov    %eax,(%esp)
 8322108:	e8 dd 84 e5 ff       	call   817a5ea <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE9push_backERKS0_>
 832210d:	83 45 b0 01          	addl   $0x1,-0x50(%ebp)
 8322111:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8322117:	0f b6 80 60 01 00 00 	movzbl 0x160(%eax),%eax
 832211e:	0f b6 c0             	movzbl %al,%eax
 8322121:	3b 45 b0             	cmp    -0x50(%ebp),%eax
 8322124:	0f 9f c0             	setg   %al
 8322127:	84 c0                	test   %al,%al
 8322129:	75 bb                	jne    83220e6 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x3b8>
 832212b:	8b 45 14             	mov    0x14(%ebp),%eax
 832212e:	05 73 01 00 00       	add    $0x173,%eax
 8322133:	89 04 24             	mov    %eax,(%esp)
 8322136:	e8 b5 c5 d5 ff       	call   807e6f0 <atoi@plt>
 832213b:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 8322141:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8322147:	83 f8 01             	cmp    $0x1,%eax
 832214a:	75 15                	jne    8322161 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x433>
 832214c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8322150:	74 0f                	je     8322161 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x433>
 8322152:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322155:	89 04 24             	mov    %eax,(%esp)
 8322158:	e8 d5 e2 df ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 832215d:	85 c0                	test   %eax,%eax
 832215f:	75 07                	jne    8322168 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x43a>
 8322161:	b8 01 00 00 00       	mov    $0x1,%eax
 8322166:	eb 05                	jmp    832216d <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x43f>
 8322168:	b8 00 00 00 00       	mov    $0x0,%eax
 832216d:	84 c0                	test   %al,%al
 832216f:	0f 84 c7 00 00 00    	je     832223c <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x50e>
 8322175:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 832217b:	83 f8 f4             	cmp    $0xfffffff4,%eax
 832217e:	75 5a                	jne    83221da <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x4ac>
 8322180:	0f be 45 9b          	movsbl -0x65(%ebp),%eax
 8322184:	89 44 24 24          	mov    %eax,0x24(%esp)
 8322188:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 832218e:	89 44 24 20          	mov    %eax,0x20(%esp)
 8322192:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8322198:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 832219c:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 83221a2:	89 44 24 18          	mov    %eax,0x18(%esp)
 83221a6:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 83221ac:	89 44 24 14          	mov    %eax,0x14(%esp)
 83221b0:	c7 44 24 10 1a 00 00 	movl   $0x1a,0x10(%esp)
 83221b7:	00 
 83221b8:	8b 45 14             	mov    0x14(%ebp),%eax
 83221bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83221bf:	8b 45 10             	mov    0x10(%ebp),%eax
 83221c2:	89 44 24 08          	mov    %eax,0x8(%esp)
 83221c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83221c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 83221cd:	8b 45 08             	mov    0x8(%ebp),%eax
 83221d0:	89 04 24             	mov    %eax,(%esp)
 83221d3:	e8 1e 16 00 00       	call   83237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>
 83221d8:	eb 58                	jmp    8322232 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x504>
 83221da:	0f be 45 9b          	movsbl -0x65(%ebp),%eax
 83221de:	89 44 24 24          	mov    %eax,0x24(%esp)
 83221e2:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 83221e8:	89 44 24 20          	mov    %eax,0x20(%esp)
 83221ec:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 83221f2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 83221f6:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 83221fc:	89 44 24 18          	mov    %eax,0x18(%esp)
 8322200:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8322206:	89 44 24 14          	mov    %eax,0x14(%esp)
 832220a:	c7 44 24 10 19 00 00 	movl   $0x19,0x10(%esp)
 8322211:	00 
 8322212:	8b 45 14             	mov    0x14(%ebp),%eax
 8322215:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322219:	8b 45 10             	mov    0x10(%ebp),%eax
 832221c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322220:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322223:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322227:	8b 45 08             	mov    0x8(%ebp),%eax
 832222a:	89 04 24             	mov    %eax,(%esp)
 832222d:	e8 c4 15 00 00       	call   83237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>
 8322232:	bb 00 00 00 00       	mov    $0x0,%ebx
 8322237:	e9 0b 15 00 00       	jmp    8323747 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a19>
 832223c:	c7 45 a4 ff ff ff ff 	movl   $0xffffffff,-0x5c(%ebp)
 8322243:	c7 85 fc fe ff ff 00 	movl   $0x0,-0x104(%ebp)
 832224a:	00 00 00 
 832224d:	c7 85 f8 fe ff ff ff 	movl   $0xffffffff,-0x108(%ebp)
 8322254:	ff ff ff 
 8322257:	c7 45 a8 02 00 00 00 	movl   $0x2,-0x58(%ebp)
 832225e:	83 bd 68 ff ff ff 00 	cmpl   $0x0,-0x98(%ebp)
 8322265:	0f 85 1e 02 00 00    	jne    8322489 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x75b>
 832226b:	80 7d 9b 01          	cmpb   $0x1,-0x65(%ebp)
 832226f:	75 52                	jne    83222c3 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x595>
 8322271:	8b 45 10             	mov    0x10(%ebp),%eax
 8322274:	83 c0 7d             	add    $0x7d,%eax
 8322277:	89 c3                	mov    %eax,%ebx
 8322279:	0f be 4d 87          	movsbl -0x79(%ebp),%ecx
 832227d:	0f be 55 86          	movsbl -0x7a(%ebp),%edx
 8322281:	8b 45 80             	mov    -0x80(%ebp),%eax
 8322284:	8b 75 9c             	mov    -0x64(%ebp),%esi
 8322287:	89 74 24 20          	mov    %esi,0x20(%esp)
 832228b:	8b 75 a0             	mov    -0x60(%ebp),%esi
 832228e:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8322292:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8322296:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 832229a:	89 54 24 10          	mov    %edx,0x10(%esp)
 832229e:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 83222a4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83222a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 83222ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 83222af:	89 44 24 04          	mov    %eax,0x4(%esp)
 83222b3:	8b 45 08             	mov    0x8(%ebp),%eax
 83222b6:	89 04 24             	mov    %eax,(%esp)
 83222b9:	e8 78 3d 00 00       	call   8326036 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji>
 83222be:	e9 c0 0a 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 83222c3:	8b 45 10             	mov    0x10(%ebp),%eax
 83222c6:	83 c0 7d             	add    $0x7d,%eax
 83222c9:	89 85 9c fd ff ff    	mov    %eax,-0x264(%ebp)
 83222cf:	0f be 7d 87          	movsbl -0x79(%ebp),%edi
 83222d3:	0f be 75 86          	movsbl -0x7a(%ebp),%esi
 83222d7:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 83222da:	8b 45 0c             	mov    0xc(%ebp),%eax
 83222dd:	89 04 24             	mov    %eax,(%esp)
 83222e0:	e8 a9 7f db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 83222e5:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 83222ec:	00 
 83222ed:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 83222f4:	00 
 83222f5:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 83222fc:	00 
 83222fd:	8b 95 9c fd ff ff    	mov    -0x264(%ebp),%edx
 8322303:	89 54 24 18          	mov    %edx,0x18(%esp)
 8322307:	89 7c 24 14          	mov    %edi,0x14(%esp)
 832230b:	89 74 24 10          	mov    %esi,0x10(%esp)
 832230f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8322316:	00 
 8322317:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 832231d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8322321:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8322325:	89 04 24             	mov    %eax,(%esp)
 8322328:	e8 71 78 1e 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 832232d:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8322330:	83 7d a4 00          	cmpl   $0x0,-0x5c(%ebp)
 8322334:	0f 89 9f 00 00 00    	jns    83223d9 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x6ab>
 832233a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8322341:	00 
 8322342:	c7 44 24 08 75 5d c2 	movl   $0x8c25d75,0x8(%esp)
 8322349:	08 
 832234a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8322351:	00 
 8322352:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8322359:	e8 a0 34 78 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 832235e:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8322361:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8322364:	89 04 24             	mov    %eax,(%esp)
 8322367:	e8 44 c0 d5 ff       	call   807e3b0 <strlen@plt>
 832236c:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%ebp)
 8322372:	8b 45 10             	mov    0x10(%ebp),%eax
 8322375:	83 c0 7d             	add    $0x7d,%eax
 8322378:	89 85 a4 fd ff ff    	mov    %eax,-0x25c(%ebp)
 832237e:	0f be 7d 87          	movsbl -0x79(%ebp),%edi
 8322382:	0f be 75 86          	movsbl -0x7a(%ebp),%esi
 8322386:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8322389:	8b 45 0c             	mov    0xc(%ebp),%eax
 832238c:	89 04 24             	mov    %eax,(%esp)
 832238f:	e8 ba 98 da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8322394:	8b 95 a0 fd ff ff    	mov    -0x260(%ebp),%edx
 832239a:	89 54 24 20          	mov    %edx,0x20(%esp)
 832239e:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 83223a1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 83223a5:	8b 95 a4 fd ff ff    	mov    -0x25c(%ebp),%edx
 83223ab:	89 54 24 18          	mov    %edx,0x18(%esp)
 83223af:	89 7c 24 14          	mov    %edi,0x14(%esp)
 83223b3:	89 74 24 10          	mov    %esi,0x10(%esp)
 83223b7:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 83223bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83223c1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83223c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83223c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83223cc:	89 04 24             	mov    %eax,(%esp)
 83223cf:	e8 dc 3d 23 00       	call   85561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>
 83223d4:	e9 aa 09 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 83223d9:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 83223dc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83223e0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83223e7:	00 
 83223e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83223ef:	00 
 83223f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83223f3:	89 04 24             	mov    %eax,(%esp)
 83223f6:	e8 5f a2 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 83223fb:	e8 40 cd 16 00       	call   848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>
 8322400:	84 c0                	test   %al,%al
 8322402:	0f 84 7b 09 00 00    	je     8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322408:	8b 9d 7c ff ff ff    	mov    -0x84(%ebp),%ebx
 832240e:	e8 88 9d da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322413:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8322417:	89 04 24             	mov    %eax,(%esp)
 832241a:	e8 c5 d9 03 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 832241f:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8322422:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8322425:	e8 71 9d da ff       	call   80cc19b <_Z14G_CDataManagerv>
 832242a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832242e:	89 04 24             	mov    %eax,(%esp)
 8322431:	e8 fc d5 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8322436:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8322439:	8b 45 b8             	mov    -0x48(%ebp),%eax
 832243c:	89 04 24             	mov    %eax,(%esp)
 832243f:	e8 1c 7c e5 ff       	call   817a060 <_ZNK14CCeraShopGoods10GetStickerEv>
 8322444:	83 f8 16             	cmp    $0x16,%eax
 8322447:	0f 94 c0             	sete   %al
 832244a:	84 c0                	test   %al,%al
 832244c:	0f 84 31 09 00 00    	je     8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322452:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8322455:	8b 00                	mov    (%eax),%eax
 8322457:	83 c0 0c             	add    $0xc,%eax
 832245a:	8b 10                	mov    (%eax),%edx
 832245c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 832245f:	89 04 24             	mov    %eax,(%esp)
 8322462:	ff d2                	call   *%edx
 8322464:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 832246a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832246e:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8322471:	89 54 24 08          	mov    %edx,0x8(%esp)
 8322475:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322479:	8b 45 0c             	mov    0xc(%ebp),%eax
 832247c:	89 04 24             	mov    %eax,(%esp)
 832247f:	e8 3a 5d 00 00       	call   83281be <_ZN5CUser25SetChildrensDayEventValueEiii>
 8322484:	e9 fa 08 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322489:	83 bd 68 ff ff ff 01 	cmpl   $0x1,-0x98(%ebp)
 8322490:	75 5a                	jne    83224ec <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x7be>
 8322492:	80 7d 9b 01          	cmpb   $0x1,-0x65(%ebp)
 8322496:	75 2d                	jne    83224c5 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x797>
 8322498:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 832249c:	8b 55 9c             	mov    -0x64(%ebp),%edx
 832249f:	89 54 24 10          	mov    %edx,0x10(%esp)
 83224a3:	8b 55 a0             	mov    -0x60(%ebp),%edx
 83224a6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83224aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 83224ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 83224b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83224b5:	8b 45 08             	mov    0x8(%ebp),%eax
 83224b8:	89 04 24             	mov    %eax,(%esp)
 83224bb:	e8 dc 3c 00 00       	call   832619c <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji>
 83224c0:	e9 be 08 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 83224c5:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 83224c9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 83224d0:	00 
 83224d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83224d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83224d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83224dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83224df:	89 04 24             	mov    %eax,(%esp)
 83224e2:	e8 a1 35 00 00       	call   8325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>
 83224e7:	e9 97 08 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 83224ec:	83 bd 68 ff ff ff 02 	cmpl   $0x2,-0x98(%ebp)
 83224f3:	74 16                	je     832250b <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x7dd>
 83224f5:	83 bd 68 ff ff ff 07 	cmpl   $0x7,-0x98(%ebp)
 83224fc:	74 0d                	je     832250b <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x7dd>
 83224fe:	83 bd 68 ff ff ff 09 	cmpl   $0x9,-0x98(%ebp)
 8322505:	0f 85 22 02 00 00    	jne    832272d <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x9ff>
 832250b:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
 8322512:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8322515:	e8 81 9c da ff       	call   80cc19b <_Z14G_CDataManagerv>
 832251a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832251e:	89 04 24             	mov    %eax,(%esp)
 8322521:	e8 0c d5 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8322526:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8322529:	8d 85 6b fe ff ff    	lea    -0x195(%ebp),%eax
 832252f:	89 04 24             	mov    %eax,(%esp)
 8322532:	e8 1d 93 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8322537:	8b 45 c0             	mov    -0x40(%ebp),%eax
 832253a:	8b 00                	mov    (%eax),%eax
 832253c:	83 c0 08             	add    $0x8,%eax
 832253f:	8b 10                	mov    (%eax),%edx
 8322541:	8d 85 6b fe ff ff    	lea    -0x195(%ebp),%eax
 8322547:	89 44 24 04          	mov    %eax,0x4(%esp)
 832254b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 832254e:	89 04 24             	mov    %eax,(%esp)
 8322551:	ff d2                	call   *%edx
 8322553:	8b 45 80             	mov    -0x80(%ebp),%eax
 8322556:	89 85 6d fe ff ff    	mov    %eax,-0x193(%ebp)
 832255c:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 8322560:	89 85 72 fe ff ff    	mov    %eax,-0x18e(%ebp)
 8322566:	80 7d 9b 01          	cmpb   $0x1,-0x65(%ebp)
 832256a:	0f 85 c6 00 00 00    	jne    8322636 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x908>
 8322570:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8322573:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8322577:	8b 45 a0             	mov    -0x60(%ebp),%eax
 832257a:	89 44 24 48          	mov    %eax,0x48(%esp)
 832257e:	8b 85 6b fe ff ff    	mov    -0x195(%ebp),%eax
 8322584:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322588:	8b 85 6f fe ff ff    	mov    -0x191(%ebp),%eax
 832258e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322592:	8b 85 73 fe ff ff    	mov    -0x18d(%ebp),%eax
 8322598:	89 44 24 10          	mov    %eax,0x10(%esp)
 832259c:	8b 85 77 fe ff ff    	mov    -0x189(%ebp),%eax
 83225a2:	89 44 24 14          	mov    %eax,0x14(%esp)
 83225a6:	8b 85 7b fe ff ff    	mov    -0x185(%ebp),%eax
 83225ac:	89 44 24 18          	mov    %eax,0x18(%esp)
 83225b0:	8b 85 7f fe ff ff    	mov    -0x181(%ebp),%eax
 83225b6:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 83225ba:	8b 85 83 fe ff ff    	mov    -0x17d(%ebp),%eax
 83225c0:	89 44 24 20          	mov    %eax,0x20(%esp)
 83225c4:	8b 85 87 fe ff ff    	mov    -0x179(%ebp),%eax
 83225ca:	89 44 24 24          	mov    %eax,0x24(%esp)
 83225ce:	8b 85 8b fe ff ff    	mov    -0x175(%ebp),%eax
 83225d4:	89 44 24 28          	mov    %eax,0x28(%esp)
 83225d8:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 83225de:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 83225e2:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 83225e8:	89 44 24 30          	mov    %eax,0x30(%esp)
 83225ec:	8b 85 97 fe ff ff    	mov    -0x169(%ebp),%eax
 83225f2:	89 44 24 34          	mov    %eax,0x34(%esp)
 83225f6:	8b 85 9b fe ff ff    	mov    -0x165(%ebp),%eax
 83225fc:	89 44 24 38          	mov    %eax,0x38(%esp)
 8322600:	8b 85 9f fe ff ff    	mov    -0x161(%ebp),%eax
 8322606:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 832260a:	8b 85 a3 fe ff ff    	mov    -0x15d(%ebp),%eax
 8322610:	89 44 24 40          	mov    %eax,0x40(%esp)
 8322614:	0f b6 85 a7 fe ff ff 	movzbl -0x159(%ebp),%eax
 832261b:	88 44 24 44          	mov    %al,0x44(%esp)
 832261f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322622:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322626:	8b 45 08             	mov    0x8(%ebp),%eax
 8322629:	89 04 24             	mov    %eax,(%esp)
 832262c:	e8 a5 3e 00 00       	call   83264d6 <_ZN8WongWork9CCeraShop16_processItemGiftEP5CUser10Inven_Itemji>
 8322631:	e9 4d 07 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322636:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 832263c:	89 44 24 60          	mov    %eax,0x60(%esp)
 8322640:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8322646:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 832264a:	c7 44 24 58 01 00 00 	movl   $0x1,0x58(%esp)
 8322651:	00 
 8322652:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%esp)
 8322659:	00 
 832265a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 832265d:	89 44 24 50          	mov    %eax,0x50(%esp)
 8322661:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8322667:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 832266b:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8322671:	89 44 24 48          	mov    %eax,0x48(%esp)
 8322675:	8b 85 6b fe ff ff    	mov    -0x195(%ebp),%eax
 832267b:	89 44 24 08          	mov    %eax,0x8(%esp)
 832267f:	8b 85 6f fe ff ff    	mov    -0x191(%ebp),%eax
 8322685:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322689:	8b 85 73 fe ff ff    	mov    -0x18d(%ebp),%eax
 832268f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8322693:	8b 85 77 fe ff ff    	mov    -0x189(%ebp),%eax
 8322699:	89 44 24 14          	mov    %eax,0x14(%esp)
 832269d:	8b 85 7b fe ff ff    	mov    -0x185(%ebp),%eax
 83226a3:	89 44 24 18          	mov    %eax,0x18(%esp)
 83226a7:	8b 85 7f fe ff ff    	mov    -0x181(%ebp),%eax
 83226ad:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 83226b1:	8b 85 83 fe ff ff    	mov    -0x17d(%ebp),%eax
 83226b7:	89 44 24 20          	mov    %eax,0x20(%esp)
 83226bb:	8b 85 87 fe ff ff    	mov    -0x179(%ebp),%eax
 83226c1:	89 44 24 24          	mov    %eax,0x24(%esp)
 83226c5:	8b 85 8b fe ff ff    	mov    -0x175(%ebp),%eax
 83226cb:	89 44 24 28          	mov    %eax,0x28(%esp)
 83226cf:	8b 85 8f fe ff ff    	mov    -0x171(%ebp),%eax
 83226d5:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 83226d9:	8b 85 93 fe ff ff    	mov    -0x16d(%ebp),%eax
 83226df:	89 44 24 30          	mov    %eax,0x30(%esp)
 83226e3:	8b 85 97 fe ff ff    	mov    -0x169(%ebp),%eax
 83226e9:	89 44 24 34          	mov    %eax,0x34(%esp)
 83226ed:	8b 85 9b fe ff ff    	mov    -0x165(%ebp),%eax
 83226f3:	89 44 24 38          	mov    %eax,0x38(%esp)
 83226f7:	8b 85 9f fe ff ff    	mov    -0x161(%ebp),%eax
 83226fd:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8322701:	8b 85 a3 fe ff ff    	mov    -0x15d(%ebp),%eax
 8322707:	89 44 24 40          	mov    %eax,0x40(%esp)
 832270b:	0f b6 85 a7 fe ff ff 	movzbl -0x159(%ebp),%eax
 8322712:	88 44 24 44          	mov    %al,0x44(%esp)
 8322716:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322719:	89 44 24 04          	mov    %eax,0x4(%esp)
 832271d:	8b 45 08             	mov    0x8(%ebp),%eax
 8322720:	89 04 24             	mov    %eax,(%esp)
 8322723:	e8 fa 33 00 00       	call   8325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>
 8322728:	e9 56 06 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 832272d:	83 bd 68 ff ff ff 04 	cmpl   $0x4,-0x98(%ebp)
 8322734:	0f 85 04 02 00 00    	jne    832293e <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xc10>
 832273a:	c7 45 a8 01 00 00 00 	movl   $0x1,-0x58(%ebp)
 8322741:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8322744:	e8 52 9a da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322749:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832274d:	89 04 24             	mov    %eax,(%esp)
 8322750:	e8 dd d2 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8322755:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8322758:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 832275c:	75 0a                	jne    8322768 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xa3a>
 832275e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8322763:	e9 df 0f 00 00       	jmp    8323747 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a19>
 8322768:	8d 85 2e fe ff ff    	lea    -0x1d2(%ebp),%eax
 832276e:	89 04 24             	mov    %eax,(%esp)
 8322771:	e8 de 90 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8322776:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8322779:	8b 00                	mov    (%eax),%eax
 832277b:	83 c0 08             	add    $0x8,%eax
 832277e:	8b 10                	mov    (%eax),%edx
 8322780:	8d 85 2e fe ff ff    	lea    -0x1d2(%ebp),%eax
 8322786:	89 44 24 04          	mov    %eax,0x4(%esp)
 832278a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 832278d:	89 04 24             	mov    %eax,(%esp)
 8322790:	ff d2                	call   *%edx
 8322792:	8b 45 80             	mov    -0x80(%ebp),%eax
 8322795:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 832279b:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 832279f:	89 85 35 fe ff ff    	mov    %eax,-0x1cb(%ebp)
 83227a5:	8b 85 30 fe ff ff    	mov    -0x1d0(%ebp),%eax
 83227ab:	c7 44 24 30 01 00 00 	movl   $0x1,0x30(%esp)
 83227b2:	00 
 83227b3:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 83227ba:	00 
 83227bb:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 83227c2:	00 
 83227c3:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 83227ca:	00 
 83227cb:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 83227d1:	89 54 24 20          	mov    %edx,0x20(%esp)
 83227d5:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 83227db:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 83227df:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 83227e6:	00 
 83227e7:	8b 55 94             	mov    -0x6c(%ebp),%edx
 83227ea:	89 54 24 14          	mov    %edx,0x14(%esp)
 83227ee:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 83227f4:	89 54 24 10          	mov    %edx,0x10(%esp)
 83227f8:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 83227fe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8322802:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322806:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322809:	89 44 24 04          	mov    %eax,0x4(%esp)
 832280d:	8b 45 08             	mov    0x8(%ebp),%eax
 8322810:	89 04 24             	mov    %eax,(%esp)
 8322813:	e8 66 30 00 00       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 8322818:	83 f0 01             	xor    $0x1,%eax
 832281b:	84 c0                	test   %al,%al
 832281d:	0f 84 60 05 00 00    	je     8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322823:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322826:	89 04 24             	mov    %eax,(%esp)
 8322829:	e8 60 7a db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 832282e:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8322835:	00 
 8322836:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 832283d:	00 
 832283e:	c7 44 24 44 1e 00 00 	movl   $0x1e,0x44(%esp)
 8322845:	00 
 8322846:	8b 95 2e fe ff ff    	mov    -0x1d2(%ebp),%edx
 832284c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8322850:	8b 95 32 fe ff ff    	mov    -0x1ce(%ebp),%edx
 8322856:	89 54 24 08          	mov    %edx,0x8(%esp)
 832285a:	8b 95 36 fe ff ff    	mov    -0x1ca(%ebp),%edx
 8322860:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8322864:	8b 95 3a fe ff ff    	mov    -0x1c6(%ebp),%edx
 832286a:	89 54 24 10          	mov    %edx,0x10(%esp)
 832286e:	8b 95 3e fe ff ff    	mov    -0x1c2(%ebp),%edx
 8322874:	89 54 24 14          	mov    %edx,0x14(%esp)
 8322878:	8b 95 42 fe ff ff    	mov    -0x1be(%ebp),%edx
 832287e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8322882:	8b 95 46 fe ff ff    	mov    -0x1ba(%ebp),%edx
 8322888:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 832288c:	8b 95 4a fe ff ff    	mov    -0x1b6(%ebp),%edx
 8322892:	89 54 24 20          	mov    %edx,0x20(%esp)
 8322896:	8b 95 4e fe ff ff    	mov    -0x1b2(%ebp),%edx
 832289c:	89 54 24 24          	mov    %edx,0x24(%esp)
 83228a0:	8b 95 52 fe ff ff    	mov    -0x1ae(%ebp),%edx
 83228a6:	89 54 24 28          	mov    %edx,0x28(%esp)
 83228aa:	8b 95 56 fe ff ff    	mov    -0x1aa(%ebp),%edx
 83228b0:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 83228b4:	8b 95 5a fe ff ff    	mov    -0x1a6(%ebp),%edx
 83228ba:	89 54 24 30          	mov    %edx,0x30(%esp)
 83228be:	8b 95 5e fe ff ff    	mov    -0x1a2(%ebp),%edx
 83228c4:	89 54 24 34          	mov    %edx,0x34(%esp)
 83228c8:	8b 95 62 fe ff ff    	mov    -0x19e(%ebp),%edx
 83228ce:	89 54 24 38          	mov    %edx,0x38(%esp)
 83228d2:	8b 95 66 fe ff ff    	mov    -0x19a(%ebp),%edx
 83228d8:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 83228dc:	0f b6 95 6a fe ff ff 	movzbl -0x196(%ebp),%edx
 83228e3:	88 54 24 40          	mov    %dl,0x40(%esp)
 83228e7:	89 04 24             	mov    %eax,(%esp)
 83228ea:	e8 97 04 1e 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 83228ef:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 83228f2:	83 7d a4 ff          	cmpl   $0xffffffff,-0x5c(%ebp)
 83228f6:	0f 95 c0             	setne  %al
 83228f9:	84 c0                	test   %al,%al
 83228fb:	74 32                	je     832292f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xc01>
 83228fd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8322900:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322904:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832290b:	00 
 832290c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8322913:	00 
 8322914:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322917:	89 04 24             	mov    %eax,(%esp)
 832291a:	e8 3b 9d 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 832291f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322922:	89 04 24             	mov    %eax,(%esp)
 8322925:	e8 28 d5 32 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 832292a:	e9 54 04 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 832292f:	c7 85 fc fe ff ff 04 	movl   $0x4,-0x104(%ebp)
 8322936:	00 00 00 
 8322939:	e9 45 04 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 832293e:	83 bd 68 ff ff ff 03 	cmpl   $0x3,-0x98(%ebp)
 8322945:	0f 85 38 02 00 00    	jne    8322b83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xe55>
 832294b:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 832294e:	e8 48 98 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322953:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8322957:	89 04 24             	mov    %eax,(%esp)
 832295a:	e8 d3 d0 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 832295f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8322962:	8d 85 f1 fd ff ff    	lea    -0x20f(%ebp),%eax
 8322968:	89 04 24             	mov    %eax,(%esp)
 832296b:	e8 e4 8e da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8322970:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8322973:	8b 00                	mov    (%eax),%eax
 8322975:	83 c0 08             	add    $0x8,%eax
 8322978:	8b 10                	mov    (%eax),%edx
 832297a:	8d 85 f1 fd ff ff    	lea    -0x20f(%ebp),%eax
 8322980:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322984:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8322987:	89 04 24             	mov    %eax,(%esp)
 832298a:	ff d2                	call   *%edx
 832298c:	8b 45 80             	mov    -0x80(%ebp),%eax
 832298f:	89 85 f3 fd ff ff    	mov    %eax,-0x20d(%ebp)
 8322995:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 8322999:	89 85 f8 fd ff ff    	mov    %eax,-0x208(%ebp)
 832299f:	80 7d 9b 01          	cmpb   $0x1,-0x65(%ebp)
 83229a3:	0f 85 e6 00 00 00    	jne    8322a8f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xd61>
 83229a9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83229ac:	89 04 24             	mov    %eax,(%esp)
 83229af:	e8 52 e9 dc ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 83229b4:	89 c3                	mov    %eax,%ebx
 83229b6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83229b9:	89 04 24             	mov    %eax,(%esp)
 83229bc:	e8 9f e2 de ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 83229c1:	89 5c 24 54          	mov    %ebx,0x54(%esp)
 83229c5:	89 44 24 50          	mov    %eax,0x50(%esp)
 83229c9:	8b 45 9c             	mov    -0x64(%ebp),%eax
 83229cc:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 83229d0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 83229d3:	89 44 24 48          	mov    %eax,0x48(%esp)
 83229d7:	8b 85 f1 fd ff ff    	mov    -0x20f(%ebp),%eax
 83229dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 83229e1:	8b 85 f5 fd ff ff    	mov    -0x20b(%ebp),%eax
 83229e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83229eb:	8b 85 f9 fd ff ff    	mov    -0x207(%ebp),%eax
 83229f1:	89 44 24 10          	mov    %eax,0x10(%esp)
 83229f5:	8b 85 fd fd ff ff    	mov    -0x203(%ebp),%eax
 83229fb:	89 44 24 14          	mov    %eax,0x14(%esp)
 83229ff:	8b 85 01 fe ff ff    	mov    -0x1ff(%ebp),%eax
 8322a05:	89 44 24 18          	mov    %eax,0x18(%esp)
 8322a09:	8b 85 05 fe ff ff    	mov    -0x1fb(%ebp),%eax
 8322a0f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8322a13:	8b 85 09 fe ff ff    	mov    -0x1f7(%ebp),%eax
 8322a19:	89 44 24 20          	mov    %eax,0x20(%esp)
 8322a1d:	8b 85 0d fe ff ff    	mov    -0x1f3(%ebp),%eax
 8322a23:	89 44 24 24          	mov    %eax,0x24(%esp)
 8322a27:	8b 85 11 fe ff ff    	mov    -0x1ef(%ebp),%eax
 8322a2d:	89 44 24 28          	mov    %eax,0x28(%esp)
 8322a31:	8b 85 15 fe ff ff    	mov    -0x1eb(%ebp),%eax
 8322a37:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8322a3b:	8b 85 19 fe ff ff    	mov    -0x1e7(%ebp),%eax
 8322a41:	89 44 24 30          	mov    %eax,0x30(%esp)
 8322a45:	8b 85 1d fe ff ff    	mov    -0x1e3(%ebp),%eax
 8322a4b:	89 44 24 34          	mov    %eax,0x34(%esp)
 8322a4f:	8b 85 21 fe ff ff    	mov    -0x1df(%ebp),%eax
 8322a55:	89 44 24 38          	mov    %eax,0x38(%esp)
 8322a59:	8b 85 25 fe ff ff    	mov    -0x1db(%ebp),%eax
 8322a5f:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8322a63:	8b 85 29 fe ff ff    	mov    -0x1d7(%ebp),%eax
 8322a69:	89 44 24 40          	mov    %eax,0x40(%esp)
 8322a6d:	0f b6 85 2d fe ff ff 	movzbl -0x1d3(%ebp),%eax
 8322a74:	88 44 24 44          	mov    %al,0x44(%esp)
 8322a78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322a7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322a7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8322a82:	89 04 24             	mov    %eax,(%esp)
 8322a85:	e8 5e 3b 00 00       	call   83265e8 <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii>
 8322a8a:	e9 f4 02 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322a8f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8322a92:	89 04 24             	mov    %eax,(%esp)
 8322a95:	e8 6c e8 dc ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 8322a9a:	89 c3                	mov    %eax,%ebx
 8322a9c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8322a9f:	89 04 24             	mov    %eax,(%esp)
 8322aa2:	e8 b9 e1 de ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8322aa7:	89 5c 24 58          	mov    %ebx,0x58(%esp)
 8322aab:	89 44 24 54          	mov    %eax,0x54(%esp)
 8322aaf:	c7 44 24 50 01 00 00 	movl   $0x1,0x50(%esp)
 8322ab6:	00 
 8322ab7:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8322abd:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 8322ac1:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8322ac7:	89 44 24 48          	mov    %eax,0x48(%esp)
 8322acb:	8b 85 f1 fd ff ff    	mov    -0x20f(%ebp),%eax
 8322ad1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322ad5:	8b 85 f5 fd ff ff    	mov    -0x20b(%ebp),%eax
 8322adb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322adf:	8b 85 f9 fd ff ff    	mov    -0x207(%ebp),%eax
 8322ae5:	89 44 24 10          	mov    %eax,0x10(%esp)
 8322ae9:	8b 85 fd fd ff ff    	mov    -0x203(%ebp),%eax
 8322aef:	89 44 24 14          	mov    %eax,0x14(%esp)
 8322af3:	8b 85 01 fe ff ff    	mov    -0x1ff(%ebp),%eax
 8322af9:	89 44 24 18          	mov    %eax,0x18(%esp)
 8322afd:	8b 85 05 fe ff ff    	mov    -0x1fb(%ebp),%eax
 8322b03:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8322b07:	8b 85 09 fe ff ff    	mov    -0x1f7(%ebp),%eax
 8322b0d:	89 44 24 20          	mov    %eax,0x20(%esp)
 8322b11:	8b 85 0d fe ff ff    	mov    -0x1f3(%ebp),%eax
 8322b17:	89 44 24 24          	mov    %eax,0x24(%esp)
 8322b1b:	8b 85 11 fe ff ff    	mov    -0x1ef(%ebp),%eax
 8322b21:	89 44 24 28          	mov    %eax,0x28(%esp)
 8322b25:	8b 85 15 fe ff ff    	mov    -0x1eb(%ebp),%eax
 8322b2b:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8322b2f:	8b 85 19 fe ff ff    	mov    -0x1e7(%ebp),%eax
 8322b35:	89 44 24 30          	mov    %eax,0x30(%esp)
 8322b39:	8b 85 1d fe ff ff    	mov    -0x1e3(%ebp),%eax
 8322b3f:	89 44 24 34          	mov    %eax,0x34(%esp)
 8322b43:	8b 85 21 fe ff ff    	mov    -0x1df(%ebp),%eax
 8322b49:	89 44 24 38          	mov    %eax,0x38(%esp)
 8322b4d:	8b 85 25 fe ff ff    	mov    -0x1db(%ebp),%eax
 8322b53:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8322b57:	8b 85 29 fe ff ff    	mov    -0x1d7(%ebp),%eax
 8322b5d:	89 44 24 40          	mov    %eax,0x40(%esp)
 8322b61:	0f b6 85 2d fe ff ff 	movzbl -0x1d3(%ebp),%eax
 8322b68:	88 44 24 44          	mov    %al,0x44(%esp)
 8322b6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322b6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322b73:	8b 45 08             	mov    0x8(%ebp),%eax
 8322b76:	89 04 24             	mov    %eax,(%esp)
 8322b79:	e8 e8 31 00 00       	call   8325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>
 8322b7e:	e9 00 02 00 00       	jmp    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322b83:	83 bd 68 ff ff ff 0a 	cmpl   $0xa,-0x98(%ebp)
 8322b8a:	0f 85 f3 01 00 00    	jne    8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322b90:	0f b6 45 87          	movzbl -0x79(%ebp),%eax
 8322b94:	0f b6 c8             	movzbl %al,%ecx
 8322b97:	0f b6 45 86          	movzbl -0x7a(%ebp),%eax
 8322b9b:	0f b6 d0             	movzbl %al,%edx
 8322b9e:	0f b7 45 84          	movzwl -0x7c(%ebp),%eax
 8322ba2:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8322ba9:	00 
 8322baa:	8d 9d 00 ff ff ff    	lea    -0x100(%ebp),%ebx
 8322bb0:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8322bb4:	8d 9d 18 ff ff ff    	lea    -0xe8(%ebp),%ebx
 8322bba:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8322bbe:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8322bc2:	89 54 24 10          	mov    %edx,0x10(%esp)
 8322bc6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322bca:	8b 45 80             	mov    -0x80(%ebp),%eax
 8322bcd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322bd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322bd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8322bdb:	89 04 24             	mov    %eax,(%esp)
 8322bde:	e8 bf 3b 00 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 8322be3:	c7 85 68 ff ff ff ff 	movl   $0xffffffff,-0x98(%ebp)
 8322bea:	ff ff ff 
 8322bed:	8b 5d 80             	mov    -0x80(%ebp),%ebx
 8322bf0:	e8 a6 95 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322bf5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8322bf9:	89 04 24             	mov    %eax,(%esp)
 8322bfc:	e8 31 ce 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8322c01:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8322c04:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8322c08:	74 16                	je     8322c20 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xef2>
 8322c0a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8322c0d:	89 04 24             	mov    %eax,(%esp)
 8322c10:	e8 9f 73 e5 ff       	call   8179fb4 <_ZNK5CItem21isCerashopPackageItemEv>
 8322c15:	84 c0                	test   %al,%al
 8322c17:	74 07                	je     8322c20 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xef2>
 8322c19:	b8 01 00 00 00       	mov    $0x1,%eax
 8322c1e:	eb 05                	jmp    8322c25 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xef7>
 8322c20:	b8 00 00 00 00       	mov    $0x0,%eax
 8322c25:	84 c0                	test   %al,%al
 8322c27:	74 0a                	je     8322c33 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xf05>
 8322c29:	c7 85 68 ff ff ff 07 	movl   $0x7,-0x98(%ebp)
 8322c30:	00 00 00 
 8322c33:	83 bd 68 ff ff ff 07 	cmpl   $0x7,-0x98(%ebp)
 8322c3a:	74 0e                	je     8322c4a <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xf1c>
 8322c3c:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8322c42:	89 04 24             	mov    %eax,(%esp)
 8322c45:	e8 86 fe e2 ff       	call   8152ad0 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5clearEv>
 8322c4a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8322c51:	e8 45 95 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322c56:	89 04 24             	mov    %eax,(%esp)
 8322c59:	e8 48 73 e5 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 8322c5e:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8322c64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8322c68:	89 04 24             	mov    %eax,(%esp)
 8322c6b:	e8 38 74 e5 ff       	call   817a0a8 <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 8322c70:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8322c73:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 8322c77:	0f 94 c0             	sete   %al
 8322c7a:	84 c0                	test   %al,%al
 8322c7c:	74 2c                	je     8322caa <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xf7c>
 8322c7e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8322c85:	e8 76 2b 40 00       	call   8725800 <__cxa_allocate_exception>
 8322c8a:	89 c2                	mov    %eax,%edx
 8322c8c:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8322c92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8322c99:	00 
 8322c9a:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8322ca1:	08 
 8322ca2:	89 04 24             	mov    %eax,(%esp)
 8322ca5:	e8 a6 1f 40 00       	call   8724c50 <__cxa_throw>
 8322caa:	c6 85 f7 fe ff ff 00 	movb   $0x0,-0x109(%ebp)
 8322cb1:	c7 85 f0 fe ff ff 00 	movl   $0x0,-0x110(%ebp)
 8322cb8:	00 00 00 
 8322cbb:	c7 85 ec fe ff ff 00 	movl   $0x0,-0x114(%ebp)
 8322cc2:	00 00 00 
 8322cc5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8322cc8:	89 04 24             	mov    %eax,(%esp)
 8322ccb:	e8 cc 73 e5 ff       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 8322cd0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8322cd3:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8322cd7:	75 43                	jne    8322d1c <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xfee>
 8322cd9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8322cdc:	89 04 24             	mov    %eax,(%esp)
 8322cdf:	e8 ac 73 e5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 8322ce4:	8d 95 f7 fe ff ff    	lea    -0x109(%ebp),%edx
 8322cea:	89 54 24 10          	mov    %edx,0x10(%esp)
 8322cee:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 8322cf4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8322cf8:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 8322cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 8322d02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322d06:	8b 45 08             	mov    0x8(%ebp),%eax
 8322d09:	89 04 24             	mov    %eax,(%esp)
 8322d0c:	e8 0d 1d 00 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8322d11:	84 c0                	test   %al,%al
 8322d13:	74 07                	je     8322d1c <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xfee>
 8322d15:	b8 01 00 00 00       	mov    $0x1,%eax
 8322d1a:	eb 05                	jmp    8322d21 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0xff3>
 8322d1c:	b8 00 00 00 00       	mov    $0x0,%eax
 8322d21:	84 c0                	test   %al,%al
 8322d23:	74 24                	je     8322d49 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x101b>
 8322d25:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8322d28:	89 04 24             	mov    %eax,(%esp)
 8322d2b:	e8 60 73 e5 ff       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 8322d30:	89 c3                	mov    %eax,%ebx
 8322d32:	e8 64 94 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8322d37:	8b 40 0c             	mov    0xc(%eax),%eax
 8322d3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8322d3e:	89 04 24             	mov    %eax,(%esp)
 8322d41:	e8 c6 73 e5 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8322d46:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8322d49:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8322d4d:	74 34                	je     8322d83 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1055>
 8322d4f:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8322d56:	e8 43 8f da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8322d5b:	89 c3                	mov    %eax,%ebx
 8322d5d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8322d60:	89 04 24             	mov    %eax,(%esp)
 8322d63:	e8 34 73 e5 ff       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 8322d68:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8322d6f:	00 
 8322d70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8322d74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322d78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322d7b:	89 04 24             	mov    %eax,(%esp)
 8322d7e:	e8 ad 2c 00 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8322d83:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8322d89:	85 c0                	test   %eax,%eax
 8322d8b:	0f 84 b3 00 00 00    	je     8322e44 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1116>
 8322d91:	0f be 55 9b          	movsbl -0x65(%ebp),%edx
 8322d95:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 8322d9b:	0f b6 c0             	movzbl %al,%eax
 8322d9e:	89 54 24 24          	mov    %edx,0x24(%esp)
 8322da2:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 8322da8:	89 54 24 20          	mov    %edx,0x20(%esp)
 8322dac:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 8322db2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8322db6:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8322dbc:	89 54 24 18          	mov    %edx,0x18(%esp)
 8322dc0:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8322dc6:	89 54 24 14          	mov    %edx,0x14(%esp)
 8322dca:	89 44 24 10          	mov    %eax,0x10(%esp)
 8322dce:	8b 45 14             	mov    0x14(%ebp),%eax
 8322dd1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8322dd5:	8b 45 10             	mov    0x10(%ebp),%eax
 8322dd8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322ddc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322ddf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322de3:	8b 45 08             	mov    0x8(%ebp),%eax
 8322de6:	89 04 24             	mov    %eax,(%esp)
 8322de9:	e8 08 0a 00 00       	call   83237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>
 8322dee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8322df5:	00 
 8322df6:	c7 44 24 08 55 09 00 	movl   $0x955,0x8(%esp)
 8322dfd:	00 
 8322dfe:	c7 44 24 04 a0 6c c2 	movl   $0x8c26ca0,0x4(%esp)
 8322e05:	08 
 8322e06:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8322e0c:	89 04 24             	mov    %eax,(%esp)
 8322e0f:	e8 04 c9 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8322e14:	c7 44 24 0c 55 09 00 	movl   $0x955,0xc(%esp)
 8322e1b:	00 
 8322e1c:	c7 44 24 08 a0 6c c2 	movl   $0x8c26ca0,0x8(%esp)
 8322e23:	08 
 8322e24:	c7 44 24 04 c6 5c c2 	movl   $0x8c25cc6,0x4(%esp)
 8322e2b:	08 
 8322e2c:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8322e32:	89 04 24             	mov    %eax,(%esp)
 8322e35:	e8 4e c9 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8322e3a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8322e3f:	e9 03 09 00 00       	jmp    8323747 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a19>
 8322e44:	83 7d 88 00          	cmpl   $0x0,-0x78(%ebp)
 8322e48:	74 24                	je     8322e6e <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1140>
 8322e4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322e4d:	89 04 24             	mov    %eax,(%esp)
 8322e50:	e8 19 75 db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8322e55:	8b 15 6c f7 41 09    	mov    0x941f76c,%edx
 8322e5b:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8322e5e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8322e62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322e66:	89 14 24             	mov    %edx,(%esp)
 8322e69:	e8 f0 9f ff ff       	call   831ce5e <_ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj>
 8322e6e:	83 7d 90 00          	cmpl   $0x0,-0x70(%ebp)
 8322e72:	74 23                	je     8322e97 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1169>
 8322e74:	8b 5d 90             	mov    -0x70(%ebp),%ebx
 8322e77:	e8 9b ab 2e 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 8322e7c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8322e80:	8b 55 0c             	mov    0xc(%ebp),%edx
 8322e83:	89 54 24 08          	mov    %edx,0x8(%esp)
 8322e87:	c7 44 24 04 26 00 00 	movl   $0x26,0x4(%esp)
 8322e8e:	00 
 8322e8f:	89 04 24             	mov    %eax,(%esp)
 8322e92:	e8 13 ac 2e 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 8322e97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322e9a:	89 04 24             	mov    %eax,(%esp)
 8322e9d:	e8 ec 73 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8322ea2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8322ea9:	00 
 8322eaa:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8322eb1:	00 
 8322eb2:	8b 55 90             	mov    -0x70(%ebp),%edx
 8322eb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8322eb9:	89 04 24             	mov    %eax,(%esp)
 8322ebc:	e8 8b c6 1d 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8322ec1:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8322ec8:	00 
 8322ec9:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8322ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322ed0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322ed3:	89 04 24             	mov    %eax,(%esp)
 8322ed6:	e8 eb cd 32 00       	call   864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>
 8322edb:	8b 45 88             	mov    -0x78(%ebp),%eax
 8322ede:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322ee2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322ee5:	89 04 24             	mov    %eax,(%esp)
 8322ee8:	e8 d9 72 e5 ff       	call   817a1c6 <_ZN5CUser7UseCeraEj>
 8322eed:	8b 45 88             	mov    -0x78(%ebp),%eax
 8322ef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322ef4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322ef7:	89 04 24             	mov    %eax,(%esp)
 8322efa:	e8 1b 73 e5 ff       	call   817a21a <_ZN5CUser11addUsedCeraEj>
 8322eff:	83 bd 74 ff ff ff 00 	cmpl   $0x0,-0x8c(%ebp)
 8322f06:	74 55                	je     8322f5d <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x122f>
 8322f08:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8322f0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322f12:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322f15:	89 04 24             	mov    %eax,(%esp)
 8322f18:	e8 5b a9 32 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8322f1d:	83 f0 01             	xor    $0x1,%eax
 8322f20:	84 c0                	test   %al,%al
 8322f22:	74 39                	je     8322f5d <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x122f>
 8322f24:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8322f2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322f2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322f31:	89 04 24             	mov    %eax,(%esp)
 8322f34:	e8 15 a9 32 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 8322f39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8322f40:	00 
 8322f41:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8322f44:	89 44 24 08          	mov    %eax,0x8(%esp)
 8322f48:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8322f4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322f52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8322f55:	89 04 24             	mov    %eax,(%esp)
 8322f58:	e8 d3 2a 00 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8322f5d:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 8322f64:	00 
 8322f65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8322f6c:	00 
 8322f6d:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322f73:	89 04 24             	mov    %eax,(%esp)
 8322f76:	e8 81 89 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8322f7b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8322f82:	00 
 8322f83:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322f89:	89 04 24             	mov    %eax,(%esp)
 8322f8c:	e8 8f 89 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8322f91:	0f be 45 9b          	movsbl -0x65(%ebp),%eax
 8322f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322f99:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322f9f:	89 04 24             	mov    %eax,(%esp)
 8322fa2:	e8 79 89 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8322fa7:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8322fad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322fb1:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322fb7:	89 04 24             	mov    %eax,(%esp)
 8322fba:	e8 7d 89 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8322fbf:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8322fc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322fc9:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322fcf:	89 04 24             	mov    %eax,(%esp)
 8322fd2:	e8 65 89 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8322fd7:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 8322fdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322fe1:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322fe7:	89 04 24             	mov    %eax,(%esp)
 8322fea:	e8 4d 89 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8322fef:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8322ff5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8322ff9:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8322fff:	89 04 24             	mov    %eax,(%esp)
 8323002:	e8 35 89 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323007:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 832300d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323011:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8323017:	89 04 24             	mov    %eax,(%esp)
 832301a:	e8 1d 89 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 832301f:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8323025:	89 04 24             	mov    %eax,(%esp)
 8323028:	e8 31 76 e5 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 832302d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323031:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8323037:	89 04 24             	mov    %eax,(%esp)
 832303a:	e8 65 6e db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 832303f:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8323045:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 832304b:	89 54 24 04          	mov    %edx,0x4(%esp)
 832304f:	89 04 24             	mov    %eax,(%esp)
 8323052:	e8 ad 7c e2 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 8323057:	83 ec 04             	sub    $0x4,%esp
 832305a:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8323060:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323064:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 832306a:	89 04 24             	mov    %eax,(%esp)
 832306d:	e8 7a fa e2 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 8323072:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8323078:	8d 95 18 ff ff ff    	lea    -0xe8(%ebp),%edx
 832307e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8323082:	89 04 24             	mov    %eax,(%esp)
 8323085:	e8 60 f8 e2 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 832308a:	83 ec 04             	sub    $0x4,%esp
 832308d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8323093:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323097:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 832309d:	89 04 24             	mov    %eax,(%esp)
 83230a0:	e8 47 fa e2 ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 83230a5:	eb 54                	jmp    83230fb <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x13cd>
 83230a7:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 83230ad:	89 04 24             	mov    %eax,(%esp)
 83230b0:	e8 c7 75 e5 ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 83230b5:	8b 40 02             	mov    0x2(%eax),%eax
 83230b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83230bc:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 83230c2:	89 04 24             	mov    %eax,(%esp)
 83230c5:	e8 72 88 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 83230ca:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 83230d0:	89 04 24             	mov    %eax,(%esp)
 83230d3:	e8 a4 75 e5 ff       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 83230d8:	8b 40 07             	mov    0x7(%eax),%eax
 83230db:	89 44 24 04          	mov    %eax,0x4(%esp)
 83230df:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 83230e5:	89 04 24             	mov    %eax,(%esp)
 83230e8:	e8 4f 88 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 83230ed:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 83230f3:	89 04 24             	mov    %eax,(%esp)
 83230f6:	e8 37 fa e2 ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 83230fb:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 8323101:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323105:	8d 85 e8 fe ff ff    	lea    -0x118(%ebp),%eax
 832310b:	89 04 24             	mov    %eax,(%esp)
 832310e:	e8 f3 f9 e2 ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8323113:	84 c0                	test   %al,%al
 8323115:	75 90                	jne    83230a7 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1379>
 8323117:	80 7d 9b 01          	cmpb   $0x1,-0x65(%ebp)
 832311b:	75 19                	jne    8323136 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1408>
 832311d:	83 7d a0 00          	cmpl   $0x0,-0x60(%ebp)
 8323121:	74 13                	je     8323136 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1408>
 8323123:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832312a:	00 
 832312b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 832312e:	89 04 24             	mov    %eax,(%esp)
 8323131:	e8 b6 40 10 00       	call   84271ec <_ZN18DB_UpdateGiftCount11makeRequestEji>
 8323136:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 832313c:	3b 85 6c ff ff ff    	cmp    -0x94(%ebp),%eax
 8323142:	0f 85 e0 05 00 00    	jne    8323728 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x19fa>
 8323148:	e8 f3 bf 16 00       	call   848f140 <_ZN8WongWork9CEventMgr22IsChildrensDayEventingEv>
 832314d:	84 c0                	test   %al,%al
 832314f:	0f 84 8f 02 00 00    	je     83233e4 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x16b6>
 8323155:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323158:	89 04 24             	mov    %eax,(%esp)
 832315b:	e8 c0 50 00 00       	call   8328220 <_ZN5CUser30IsOKChildrensDayEventConditionEv>
 8323160:	84 c0                	test   %al,%al
 8323162:	0f 84 7c 02 00 00    	je     83233e4 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x16b6>
 8323168:	8b 45 0c             	mov    0xc(%ebp),%eax
 832316b:	89 04 24             	mov    %eax,(%esp)
 832316e:	e8 db 8a da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8323173:	89 c3                	mov    %eax,%ebx
 8323175:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323178:	89 04 24             	mov    %eax,(%esp)
 832317b:	e8 ee 71 db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8323180:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8323187:	00 
 8323188:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 832318f:	00 
 8323190:	c7 44 24 10 47 0d 03 	movl   $0x30d47,0x10(%esp)
 8323197:	00 
 8323198:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 832319f:	00 
 83231a0:	c7 44 24 08 ae 65 00 	movl   $0x65ae,0x8(%esp)
 83231a7:	00 
 83231a8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83231ac:	89 04 24             	mov    %eax,(%esp)
 83231af:	e8 5c e7 39 00       	call   86c1910 <_ZN8WongWork9CWebEvent16ReqSaveEventItemEjjjjjjb>
 83231b4:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83231ba:	89 04 24             	mov    %eax,(%esp)
 83231bd:	e8 8a ab 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 83231c2:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 83231c9:	00 
 83231ca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83231d1:	00 
 83231d2:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83231d8:	89 04 24             	mov    %eax,(%esp)
 83231db:	e8 1c 87 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83231e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83231e7:	00 
 83231e8:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83231ee:	89 04 24             	mov    %eax,(%esp)
 83231f1:	e8 2a 87 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83231f6:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83231fc:	89 04 24             	mov    %eax,(%esp)
 83231ff:	e8 48 d9 de ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8323204:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 832320a:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8323211:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8323218:	00 
 8323219:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 832321f:	89 04 24             	mov    %eax,(%esp)
 8323222:	e8 7d 6c db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8323227:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 832322e:	e9 2a 01 00 00       	jmp    832335d <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x162f>
 8323233:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8323236:	89 44 24 04          	mov    %eax,0x4(%esp)
 832323a:	8b 45 0c             	mov    0xc(%ebp),%eax
 832323d:	89 04 24             	mov    %eax,(%esp)
 8323240:	e8 fb 4f 00 00       	call   8328240 <_ZN5CUser34GetChildrensDayEventTargetItemSlotEi>
 8323245:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8323248:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 832324c:	78 17                	js     8323265 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1537>
 832324e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8323251:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323255:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323258:	89 04 24             	mov    %eax,(%esp)
 832325b:	e8 02 50 00 00       	call   8328262 <_ZN5CUser36GetChildrensDayEventTargetItemPeriodEi>
 8323260:	83 f8 ff             	cmp    $0xffffffff,%eax
 8323263:	75 07                	jne    832326c <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x153e>
 8323265:	b8 01 00 00 00       	mov    $0x1,%eax
 832326a:	eb 05                	jmp    8323271 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1543>
 832326c:	b8 00 00 00 00       	mov    $0x0,%eax
 8323271:	84 c0                	test   %al,%al
 8323273:	0f 85 f5 00 00 00    	jne    832336e <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1640>
 8323279:	8b 45 0c             	mov    0xc(%ebp),%eax
 832327c:	89 04 24             	mov    %eax,(%esp)
 832327f:	e8 fa 6f db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8323284:	8d 95 b4 fd ff ff    	lea    -0x24c(%ebp),%edx
 832328a:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 832328d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8323291:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8323298:	00 
 8323299:	89 44 24 04          	mov    %eax,0x4(%esp)
 832329d:	89 14 24             	mov    %edx,(%esp)
 83232a0:	e8 73 86 1d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 83232a5:	83 ec 04             	sub    $0x4,%esp
 83232a8:	0f b7 85 bf fd ff ff 	movzwl -0x241(%ebp),%eax
 83232af:	0f be f8             	movsbl %al,%edi
 83232b2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83232b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83232b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83232bc:	89 04 24             	mov    %eax,(%esp)
 83232bf:	e8 9e 4f 00 00       	call   8328262 <_ZN5CUser36GetChildrensDayEventTargetItemPeriodEi>
 83232c4:	89 c3                	mov    %eax,%ebx
 83232c6:	8b 85 b6 fd ff ff    	mov    -0x24a(%ebp),%eax
 83232cc:	89 c6                	mov    %eax,%esi
 83232ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 83232d1:	89 04 24             	mov    %eax,(%esp)
 83232d4:	e8 b5 6f db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 83232d9:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 83232e0:	00 
 83232e1:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 83232e8:	00 
 83232e9:	c7 44 24 1c 02 00 00 	movl   $0x2,0x1c(%esp)
 83232f0:	00 
 83232f1:	c7 44 24 18 89 5d c2 	movl   $0x8c25d89,0x18(%esp)
 83232f8:	08 
 83232f9:	c7 44 24 14 ff ff ff 	movl   $0xffffffff,0x14(%esp)
 8323300:	ff 
 8323301:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8323305:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832330c:	00 
 832330d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8323311:	89 74 24 04          	mov    %esi,0x4(%esp)
 8323315:	89 04 24             	mov    %eax,(%esp)
 8323318:	e8 81 68 1e 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 832331d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8323320:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8323324:	78 32                	js     8323358 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x162a>
 8323326:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323329:	89 04 24             	mov    %eax,(%esp)
 832332c:	e8 4d 6f db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8323331:	8d 95 c4 fe ff ff    	lea    -0x13c(%ebp),%edx
 8323337:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832333b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832333e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8323342:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8323349:	00 
 832334a:	89 04 24             	mov    %eax,(%esp)
 832334d:	e8 6a 93 1d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 8323352:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8323356:	eb 01                	jmp    8323359 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x162b>
 8323358:	90                   	nop
 8323359:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 832335d:	83 7d dc 09          	cmpl   $0x9,-0x24(%ebp)
 8323361:	0f 9e c0             	setle  %al
 8323364:	84 c0                	test   %al,%al
 8323366:	0f 85 c7 fe ff ff    	jne    8323233 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1505>
 832336c:	eb 01                	jmp    832336f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1641>
 832336e:	90                   	nop
 832336f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8323372:	89 44 24 08          	mov    %eax,0x8(%esp)
 8323376:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 832337c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323380:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 8323386:	89 04 24             	mov    %eax,(%esp)
 8323389:	e8 7a 35 df ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 832338e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8323395:	00 
 8323396:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 832339c:	89 04 24             	mov    %eax,(%esp)
 832339f:	e8 b4 85 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 83233a4:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83233aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 83233ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 83233b1:	89 04 24             	mov    %eax,(%esp)
 83233b4:	e8 01 52 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 83233b9:	eb 1b                	jmp    83233d6 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x16a8>
 83233bb:	89 d3                	mov    %edx,%ebx
 83233bd:	89 c6                	mov    %eax,%esi
 83233bf:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83233c5:	89 04 24             	mov    %eax,(%esp)
 83233c8:	e8 b3 aa 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83233cd:	89 f0                	mov    %esi,%eax
 83233cf:	89 da                	mov    %ebx,%edx
 83233d1:	e9 59 03 00 00       	jmp    832372f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a01>
 83233d6:	8d 85 c4 fe ff ff    	lea    -0x13c(%ebp),%eax
 83233dc:	89 04 24             	mov    %eax,(%esp)
 83233df:	e8 9c aa 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83233e4:	c7 85 e0 fe ff ff ff 	movl   $0xffffffff,-0x120(%ebp)
 83233eb:	ff ff ff 
 83233ee:	c7 85 dc fe ff ff 00 	movl   $0x0,-0x124(%ebp)
 83233f5:	00 00 00 
 83233f8:	a1 30 f7 41 09       	mov    0x941f730,%eax
 83233fd:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 8323404:	00 
 8323405:	89 04 24             	mov    %eax,(%esp)
 8323408:	e8 8b 25 df ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 832340d:	8b 10                	mov    (%eax),%edx
 832340f:	83 c2 34             	add    $0x34,%edx
 8323412:	8b 12                	mov    (%edx),%edx
 8323414:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832341b:	00 
 832341c:	89 04 24             	mov    %eax,(%esp)
 832341f:	ff d2                	call   *%edx
 8323421:	84 c0                	test   %al,%al
 8323423:	0f 84 40 01 00 00    	je     8323569 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x183b>
 8323429:	a1 30 f7 41 09       	mov    0x941f730,%eax
 832342e:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 8323435:	00 
 8323436:	89 04 24             	mov    %eax,(%esp)
 8323439:	e8 5a 25 df ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 832343e:	89 04 24             	mov    %eax,(%esp)
 8323441:	e8 9c 6e e5 ff       	call   817a2e2 <_ZNK23CCeraShopBonusItemEvent12getBonusRateEv>
 8323446:	89 c3                	mov    %eax,%ebx
 8323448:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 832344f:	e8 33 e7 38 00       	call   86b1b87 <_Z12get_rand_inti>
 8323454:	39 c3                	cmp    %eax,%ebx
 8323456:	0f 9d c0             	setge  %al
 8323459:	84 c0                	test   %al,%al
 832345b:	0f 84 08 01 00 00    	je     8323569 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x183b>
 8323461:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323464:	89 04 24             	mov    %eax,(%esp)
 8323467:	e8 ca 6d e5 ff       	call   817a236 <_ZN5CUser11getUsedCeraEv>
 832346c:	89 c3                	mov    %eax,%ebx
 832346e:	e8 28 8d da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8323473:	8b 40 0c             	mov    0xc(%eax),%eax
 8323476:	8d 95 dc fe ff ff    	lea    -0x124(%ebp),%edx
 832347c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8323480:	8d 95 e0 fe ff ff    	lea    -0x120(%ebp),%edx
 8323486:	89 54 24 08          	mov    %edx,0x8(%esp)
 832348a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832348e:	89 04 24             	mov    %eax,(%esp)
 8323491:	e8 9a f4 1e 00       	call   8512930 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj>
 8323496:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 832349c:	83 f8 ff             	cmp    $0xffffffff,%eax
 832349f:	0f 84 c4 00 00 00    	je     8323569 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x183b>
 83234a5:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 83234ab:	89 04 24             	mov    %eax,(%esp)
 83234ae:	e8 df 77 e2 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 83234b3:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 83234b9:	89 04 24             	mov    %eax,(%esp)
 83234bc:	e8 15 15 e1 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 83234c1:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 83234c7:	0f b7 d0             	movzwl %ax,%edx
 83234ca:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 83234d0:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 83234d7:	00 
 83234d8:	8d 8d 00 ff ff ff    	lea    -0x100(%ebp),%ecx
 83234de:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 83234e2:	8d 8d b4 fe ff ff    	lea    -0x14c(%ebp),%ecx
 83234e8:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 83234ec:	c7 44 24 14 ff 00 00 	movl   $0xff,0x14(%esp)
 83234f3:	00 
 83234f4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 83234fb:	00 
 83234fc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8323500:	89 44 24 08          	mov    %eax,0x8(%esp)
 8323504:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323507:	89 44 24 04          	mov    %eax,0x4(%esp)
 832350b:	8b 45 08             	mov    0x8(%ebp),%eax
 832350e:	89 04 24             	mov    %eax,(%esp)
 8323511:	e8 8c 32 00 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 8323516:	eb 18                	jmp    8323530 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1802>
 8323518:	89 d3                	mov    %edx,%ebx
 832351a:	89 c6                	mov    %eax,%esi
 832351c:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 8323522:	89 04 24             	mov    %eax,(%esp)
 8323525:	e8 c0 14 e1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 832352a:	89 f0                	mov    %esi,%eax
 832352c:	89 da                	mov    %ebx,%edx
 832352e:	eb 10                	jmp    8323540 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1812>
 8323530:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 8323536:	89 04 24             	mov    %eax,(%esp)
 8323539:	e8 ac 14 e1 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 832353e:	eb 1b                	jmp    832355b <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x182d>
 8323540:	89 d3                	mov    %edx,%ebx
 8323542:	89 c6                	mov    %eax,%esi
 8323544:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 832354a:	89 04 24             	mov    %eax,(%esp)
 832354d:	e8 54 77 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8323552:	89 f0                	mov    %esi,%eax
 8323554:	89 da                	mov    %ebx,%edx
 8323556:	e9 d4 01 00 00       	jmp    832372f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a01>
 832355b:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 8323561:	89 04 24             	mov    %eax,(%esp)
 8323564:	e8 3d 77 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8323569:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 832356f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323573:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8323579:	89 04 24             	mov    %eax,(%esp)
 832357c:	e8 bb 83 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323581:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 8323587:	89 44 24 04          	mov    %eax,0x4(%esp)
 832358b:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8323591:	89 04 24             	mov    %eax,(%esp)
 8323594:	e8 a3 83 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8323599:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 832359f:	89 04 24             	mov    %eax,(%esp)
 83235a2:	e8 a5 a7 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 83235a7:	c7 44 24 08 35 00 00 	movl   $0x35,0x8(%esp)
 83235ae:	00 
 83235af:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83235b6:	00 
 83235b7:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 83235bd:	89 04 24             	mov    %eax,(%esp)
 83235c0:	e8 37 83 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83235c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83235cc:	00 
 83235cd:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 83235d3:	89 04 24             	mov    %eax,(%esp)
 83235d6:	e8 45 83 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83235db:	8b 45 0c             	mov    0xc(%ebp),%eax
 83235de:	89 04 24             	mov    %eax,(%esp)
 83235e1:	e8 94 a9 dd ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 83235e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 83235ea:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 83235f0:	89 04 24             	mov    %eax,(%esp)
 83235f3:	e8 44 83 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 83235f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83235ff:	00 
 8323600:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323606:	89 04 24             	mov    %eax,(%esp)
 8323609:	e8 4a 83 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 832360e:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323614:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323618:	8b 45 0c             	mov    0xc(%ebp),%eax
 832361b:	89 04 24             	mov    %eax,(%esp)
 832361e:	e8 97 4f 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8323623:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323629:	89 04 24             	mov    %eax,(%esp)
 832362c:	e8 b5 82 da ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8323631:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8323638:	00 
 8323639:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8323640:	00 
 8323641:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323647:	89 04 24             	mov    %eax,(%esp)
 832364a:	e8 ad 82 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 832364f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8323656:	00 
 8323657:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 832365d:	89 04 24             	mov    %eax,(%esp)
 8323660:	e8 bb 82 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8323665:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 832366c:	00 
 832366d:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323673:	89 04 24             	mov    %eax,(%esp)
 8323676:	e8 29 68 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 832367b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832367e:	89 04 24             	mov    %eax,(%esp)
 8323681:	e8 f8 6b db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8323686:	8d 95 d0 fe ff ff    	lea    -0x130(%ebp),%edx
 832368c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8323690:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8323697:	00 
 8323698:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832369f:	00 
 83236a0:	89 04 24             	mov    %eax,(%esp)
 83236a3:	e8 14 90 1d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 83236a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83236ab:	89 04 24             	mov    %eax,(%esp)
 83236ae:	e8 cb 6b db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83236b3:	8d 95 d0 fe ff ff    	lea    -0x130(%ebp),%edx
 83236b9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83236bd:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 83236c4:	00 
 83236c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83236cc:	00 
 83236cd:	89 04 24             	mov    %eax,(%esp)
 83236d0:	e8 e7 8f 1d 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 83236d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83236dc:	00 
 83236dd:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 83236e3:	89 04 24             	mov    %eax,(%esp)
 83236e6:	e8 6d 82 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 83236eb:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 83236f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83236f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83236f8:	89 04 24             	mov    %eax,(%esp)
 83236fb:	e8 ba 4e 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8323700:	eb 18                	jmp    832371a <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x19ec>
 8323702:	89 d3                	mov    %edx,%ebx
 8323704:	89 c6                	mov    %eax,%esi
 8323706:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 832370c:	89 04 24             	mov    %eax,(%esp)
 832370f:	e8 6c a7 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8323714:	89 f0                	mov    %esi,%eax
 8323716:	89 da                	mov    %ebx,%edx
 8323718:	eb 15                	jmp    832372f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a01>
 832371a:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8323720:	89 04 24             	mov    %eax,(%esp)
 8323723:	e8 58 a7 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8323728:	bb 01 00 00 00       	mov    $0x1,%ebx
 832372d:	eb 18                	jmp    8323747 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a19>
 832372f:	89 d3                	mov    %edx,%ebx
 8323731:	89 c6                	mov    %eax,%esi
 8323733:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8323739:	89 04 24             	mov    %eax,(%esp)
 832373c:	e8 bb 6b e5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8323741:	89 f0                	mov    %esi,%eax
 8323743:	89 da                	mov    %ebx,%edx
 8323745:	eb 20                	jmp    8323767 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a39>
 8323747:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 832374d:	89 04 24             	mov    %eax,(%esp)
 8323750:	e8 a7 6b e5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 8323755:	85 db                	test   %ebx,%ebx
 8323757:	75 07                	jne    8323760 <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a32>
 8323759:	bb 00 00 00 00       	mov    $0x0,%ebx
 832375e:	eb 1f                	jmp    832377f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a51>
 8323760:	bb 01 00 00 00       	mov    $0x1,%ebx
 8323765:	eb 18                	jmp    832377f <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a51>
 8323767:	89 d3                	mov    %edx,%ebx
 8323769:	89 c6                	mov    %eax,%esi
 832376b:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8323771:	89 04 24             	mov    %eax,(%esp)
 8323774:	e8 2d 75 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8323779:	89 f0                	mov    %esi,%eax
 832377b:	89 da                	mov    %ebx,%edx
 832377d:	eb 3f                	jmp    83237be <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1a90>
 832377f:	8d 85 18 ff ff ff    	lea    -0xe8(%ebp),%eax
 8323785:	89 04 24             	mov    %eax,(%esp)
 8323788:	e8 19 75 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 832378d:	85 db                	test   %ebx,%ebx
 832378f:	74 4b                	je     83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 8323791:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8323798:	00 
 8323799:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 832379f:	89 04 24             	mov    %eax,(%esp)
 83237a2:	e8 b1 81 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 83237a7:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 83237ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 83237b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 83237b4:	89 04 24             	mov    %eax,(%esp)
 83237b7:	e8 fe 4d 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 83237bc:	eb 1e                	jmp    83237dc <_ZN8WongWork9CCeraShop18ProcessIPGUserDataEP5CUserPNS_3IPG8SIPGDataES5_P6Stream+0x1aae>
 83237be:	89 d3                	mov    %edx,%ebx
 83237c0:	89 c6                	mov    %eax,%esi
 83237c2:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 83237c8:	89 04 24             	mov    %eax,(%esp)
 83237cb:	e8 b0 a6 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83237d0:	89 f0                	mov    %esi,%eax
 83237d2:	89 da                	mov    %ebx,%edx
 83237d4:	89 04 24             	mov    %eax,(%esp)
 83237d7:	e8 74 ff 7b 00       	call   8ae3750 <_Unwind_Resume>
 83237dc:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 83237e2:	89 04 24             	mov    %eax,(%esp)
 83237e5:	e8 96 a6 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83237ea:	8d 65 f4             	lea    -0xc(%ebp),%esp
 83237ed:	83 c4 00             	add    $0x0,%esp
 83237f0:	5b                   	pop    %ebx
 83237f1:	5e                   	pop    %esi
 83237f2:	5f                   	pop    %edi
 83237f3:	5d                   	pop    %ebp
 83237f4:	c3                   	ret
 83237f5:	90                   	nop

```

```c
// WongWork::CCeraShop::ProcessIPGUserData @ 0x8321d2e

/* WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
WongWork::CCeraShop::ProcessIPGUserData
          (CCeraShop *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  ulong uVar1;
  stCeraShopIPGRequest_t sVar2;
  stCeraShopIPGRequest_t sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  size_t sVar12;
  CDataManager *pCVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  CCirculationStatistic *pCVar17;
  CInventory *pCVar18;
  uint uVar19;
  undefined4 uVar20;
  int *piVar21;
  CCeraShopBonusItemEvent *this_00;
  undefined1 local_250 [2];
  undefined4 local_24e;
  undefined2 local_245;
  undefined2 local_213;
  undefined2 uStack_211;
  undefined2 uStack_20f;
  undefined1 uStack_20d;
  uint uStack_20c;
  undefined1 uStack_208;
  undefined4 local_207;
  undefined4 local_203;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1f7;
  undefined4 local_1f3;
  undefined4 local_1ef;
  undefined4 local_1eb;
  undefined4 local_1e7;
  undefined4 local_1e3;
  undefined4 local_1df;
  undefined4 local_1db;
  undefined1 local_1d7;
  undefined2 local_1d6;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  undefined1 uStack_1d0;
  uint uStack_1cf;
  undefined1 uStack_1cb;
  undefined4 local_1ca;
  undefined4 local_1c6;
  undefined4 local_1c2;
  undefined4 local_1be;
  undefined4 local_1ba;
  undefined4 local_1b6;
  undefined4 local_1b2;
  undefined4 local_1ae;
  undefined4 local_1aa;
  undefined4 local_1a6;
  undefined4 local_1a2;
  undefined4 local_19e;
  undefined1 local_19a;
  undefined2 local_199;
  undefined2 uStack_197;
  undefined2 uStack_195;
  undefined1 uStack_193;
  uint uStack_192;
  undefined1 uStack_18e;
  undefined4 local_18d;
  undefined4 local_189;
  undefined4 local_185;
  undefined4 local_181;
  undefined4 local_17d;
  undefined4 local_179;
  undefined4 local_175;
  undefined4 local_171;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_161;
  undefined1 local_15d;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_15c [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_150 [12];
  int local_144;
  PacketGuard local_140 [12];
  PacketGuard local_134 [12];
  uint local_128;
  ulong local_124;
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_120 [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_11c [4];
  int local_118 [2];
  bool local_10d;
  int local_10c;
  int local_108;
  stCeraShopItemParam_t local_104 [12];
  vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> avStack_f8 [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_ec [12];
  int local_e0 [2];
  PacketGuard local_d8 [12];
  pair<int,int> local_cc [8];
  ulong local_c4 [2];
  cMyTrace local_bc [16];
  __normal_iterator local_ac [4];
  __normal_iterator local_a8 [4];
  uint local_a4;
  stCeraShopIPGRequest_t *local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint local_88;
  ulong local_84;
  ushort local_80;
  stCeraShopIPGRequest_t local_7e;
  stCeraShopIPGRequest_t local_7d;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  long local_70;
  stCeraShopIPGRequest_t local_69;
  int local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  char *local_50;
  CCeraShopGoods *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  CItem *local_3c;
  CItem *local_38;
  CItemLimitEdition *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  PacketGuard::PacketGuard(local_d8);
  if (*(int *)(param_3 + 0x1c) == 4) {
    if (param_1 == (CUser *)0x0) goto LAB_083237dc;
    iVar6 = atoi((char *)(param_3 + 0x99));
    iVar7 = atoi((char *)(param_3 + 0xa5));
    iVar8 = atoi((char *)(param_3 + 0x81));
    iVar9 = atoi((char *)(param_3 + 0x75));
    iVar10 = atoi((char *)(param_3 + 0x8d));
    iVar11 = atoi((char *)(param_3 + 0x69));
    local_a4 = iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11;
    CUser::SetCera(param_1,local_a4);
                    /* try { // try from 08321dfe to 08322014 has its CatchHandler @ 083237be */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,0,0x35);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,1);
    iVar6 = CUser::GetCera(param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,iVar6);
  }
  if (*(int *)(param_3 + 0x1c) == 0) {
    iVar6 = atoi((char *)(param_3 + 0x26e));
    if (iVar6 == 1) {
      local_e0[1] = 0;
      local_e0[0] = 0;
      Stream::operator>>(param_4,local_e0);
      Stream::operator>>(param_4,local_e0 + 1);
      if (param_1 != (CUser *)0x0) {
        (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,param_1);
      }
      goto LAB_083237dc;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,0,0x35);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,0);
  }
  else if (*(int *)(param_3 + 0x1c) == 2) {
    iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar6 == 0) goto LAB_083237dc;
    local_a0 = Stream::GetOutBuffer<stCeraShopIPGRequest_t>(param_4);
    local_9c = *(int *)(local_a0 + 4);
    local_98 = *(int *)(local_a0 + 0x24);
    local_94 = *(int *)(local_a0 + 0x20);
    local_90 = *(int *)(local_a0 + 0x28);
    local_8c = *(int *)(local_a0 + 0x1c);
    local_88 = *(uint *)local_a0;
    local_84 = *(ulong *)(local_a0 + 8);
    local_80 = *(ushort *)(local_a0 + 0xc);
    local_7e = local_a0[0x2c];
    local_7d = local_a0[0x2d];
    local_7c = *(uint *)(local_a0 + 0x10);
    local_78 = *(undefined4 *)(local_a0 + 0x14);
    local_74 = *(int *)(local_a0 + 0x18);
    local_70 = *(long *)(local_a0 + 0x30);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_ec);
    local_69 = local_a0[0x34];
    local_68 = *(int *)(local_a0 + 0x38);
    local_64 = *(uint *)(local_a0 + 0x40);
                    /* try { // try from 08322043 to 08322047 has its CatchHandler @ 08323767 */
    stCeraShopItemParam_t::stCeraShopItemParam_t(local_104);
    for (local_58 = 0; local_58 < (int)(uint)(byte)local_a0[0x44]; local_58 = local_58 + 1) {
                    /* try { // try from 08322086 to 083231c1 has its CatchHandler @ 0832372f */
      std::make_pair<unsigned_long&,unsigned_char&>
                (local_c4,(uchar *)(local_a0 + (local_58 + 8) * 8 + 8));
      std::pair<int,int>::pair<unsigned_long,unsigned_char>(local_cc,(pair *)local_c4);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_104,local_cc
                );
    }
    for (local_54 = 0; local_54 < (int)(uint)(byte)local_a0[0x160]; local_54 = local_54 + 1) {
      std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::push_back
                (avStack_f8,(tagPackageItemSelection *)(local_a0 + (local_54 + 0x2c) * 8 + 4));
    }
    local_108 = atoi((char *)(param_3 + 0x173));
    if (((local_108 == 1) && (param_1 != (CUser *)0x0)) &&
       (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar6 != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    uVar1 = local_84;
    if (bVar5) {
      if (local_108 == -0xc) {
        _ProcessIPGError(this,param_1,param_2,param_3,'\x1a',local_9c,local_88,local_98,local_94,
                         (char)local_69);
      }
      else {
        _ProcessIPGError(this,param_1,param_2,param_3,'\x19',local_9c,local_88,local_98,local_94,
                         (char)local_69);
      }
      bVar5 = false;
    }
    else {
      local_60 = -1;
      local_108 = 0;
      local_10c = -1;
      local_5c = 2;
      if (local_9c == 0) {
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          _processAvatarGift(this,param_1,local_84,local_8c,(char)local_7e,(char)local_7d,
                             (char *)(param_2 + 0x7d),local_64,local_68);
        }
        else {
          iVar7 = (int)(char)local_7d;
          iVar6 = (int)(char)local_7e;
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_60 = CInventory::AddAvatarItem
                               (pCVar18,uVar1,local_8c,0,iVar6,iVar7,param_2 + 0x7d,0,0,0);
          if (local_60 < 0) {
            local_50 = (char *)RDARScriptStringManager::findString
                                         ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                          "game_server_msg_104",(bool *)0x0);
            sVar12 = strlen(local_50);
            sVar3 = local_7d;
            sVar2 = local_7e;
            uVar1 = local_84;
            iVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            CMailBoxHelper::ReqDBSendNewAvatarMail
                      (param_1,iVar6,uVar1,local_8c,(char)sVar2,(char)sVar3,(char *)(param_2 + 0x7d)
                       ,local_50,sVar12);
          }
          else {
            CUser::SendUpdateItemList(param_1,1,1,local_60);
            cVar4 = CEventMgr::IsChildrensDayEventing();
            if (cVar4 != '\0') {
              iVar6 = G_CDataManager();
              local_4c = (CCeraShopGoods *)CDataManager::FindGoods(iVar6);
              uVar1 = local_84;
              pCVar13 = (CDataManager *)G_CDataManager();
              local_48 = (int *)CDataManager::find_item(pCVar13,uVar1);
              iVar6 = CCeraShopGoods::GetSticker(local_4c);
              if (iVar6 == 0x16) {
                iVar6 = (**(code **)(*local_48 + 0xc))(local_48);
                CUser::SetChildrensDayEventValue(param_1,iVar6,local_60,local_8c);
              }
            }
          }
        }
      }
      else if (local_9c == 1) {
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          _processCoinGift(this,param_1,local_80,local_64,local_68);
        }
        else {
          _processCoin((CUser *)this,(ushort)param_1,SUB21(local_80,0));
        }
      }
      else if (((local_9c == 2) || (local_9c == 7)) || (local_9c == 9)) {
        local_5c = 1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_44 = (int *)CDataManager::find_item(pCVar13,uVar1);
        Inven_Item::Inven_Item((Inven_Item *)&local_199);
        (**(code **)(*local_44 + 8))(local_44,&local_199);
        uStack_197 = (undefined2)local_84;
        uStack_195 = (undefined2)(local_84 >> 0x10);
        uStack_192._0_1_ = (undefined1)local_80;
        uStack_192._1_3_ = (uint3)(byte)(local_80 >> 8);
        uStack_192 = (uint)local_80;
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          uVar14 = CONCAT13((undefined1)uStack_192,CONCAT12(uStack_193,uStack_195));
          uVar20 = CONCAT13(uStack_18e,uStack_192._1_3_);
          _processItemGift(this,param_1,CONCAT22(uStack_197,local_199),uVar14,uVar20,local_18d,
                           local_189,local_185,local_181,local_17d,local_179,local_175,local_171,
                           local_16d,local_169,local_165,local_161,local_15d,local_64,local_68);
        }
        else {
          uVar14 = CONCAT13((undefined1)uStack_192,CONCAT12(uStack_193,uStack_195));
          uVar20 = CONCAT13(uStack_18e,uStack_192._1_3_);
          _processItem(this,param_1,CONCAT22(uStack_197,local_199),uVar14,uVar20,local_18d,local_189
                       ,local_185,local_181,local_17d,local_179,local_175,local_171,local_16d,
                       local_169,local_165,local_161,local_15d,local_90,&local_108,local_70,0,1,
                       local_ec,local_104);
        }
      }
      else if (local_9c == 4) {
        local_5c = 1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_40 = (int *)CDataManager::find_item(pCVar13,uVar1);
        if (local_40 == (int *)0x0) {
          bVar5 = false;
          goto LAB_08323747;
        }
        Inven_Item::Inven_Item((Inven_Item *)&local_1d6);
        (**(code **)(*local_40 + 8))(local_40,&local_1d6);
        uStack_1d4 = (undefined2)local_84;
        uStack_1d2 = (undefined2)(local_84 >> 0x10);
        uStack_1cf = (uint)local_80;
        cVar4 = ProcessSpecialItem(this,param_1,local_84,local_90,&local_108,local_70,false,
                                   (vector *)local_ec,local_104,'\0','\0',false,1);
        if (cVar4 != '\x01') {
          uVar14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          local_60 = CInventory::insertItemIntoInventory
                               (uVar14,CONCAT22(uStack_1d4,local_1d6),
                                CONCAT13((undefined1)uStack_1cf,CONCAT12(uStack_1d0,uStack_1d2)),
                                CONCAT13(uStack_1cb,uStack_1cf._1_3_),local_1ca,local_1c6,local_1c2,
                                local_1be,local_1ba,local_1b6,local_1b2,local_1ae,local_1aa,
                                local_1a6,local_1a2,local_19e,local_19a,0x1e,1,0);
          if (local_60 == -1) {
            local_108 = 4;
          }
          else {
            CUser::SendUpdateItemList(param_1,1,0,local_60);
            CUser::SaveInventory(param_1);
          }
        }
      }
      else if (local_9c == 3) {
        pCVar13 = (CDataManager *)G_CDataManager();
        local_3c = (CItem *)CDataManager::find_item(pCVar13,uVar1);
        Inven_Item::Inven_Item((Inven_Item *)&local_213);
        (**(code **)(*(int *)local_3c + 8))(local_3c,&local_213);
        uStack_211 = (undefined2)local_84;
        uStack_20f = (undefined2)(local_84 >> 0x10);
        uStack_20c = (uint)local_80;
        if (local_69 == (stCeraShopIPGRequest_t)0x1) {
          uVar14 = CItem::getExpirationDate(local_3c);
          uVar20 = CItem::getUsablePeriod(local_3c);
          _processCreatureGift
                    (this,param_1,CONCAT22(uStack_211,local_213),
                     CONCAT13((undefined1)uStack_20c,CONCAT12(uStack_20d,uStack_20f)),
                     CONCAT13(uStack_208,uStack_20c._1_3_),local_207,local_203,local_1ff,local_1fb,
                     local_1f7,local_1f3,local_1ef,local_1eb,local_1e7,local_1e3,local_1df,local_1db
                     ,local_1d7,local_64,local_68,uVar20,uVar14);
        }
        else {
          uVar14 = CItem::getExpirationDate(local_3c);
          uVar20 = CItem::getUsablePeriod(local_3c);
          _processCreature(this,param_1,CONCAT22(uStack_211,local_213),
                           CONCAT13((undefined1)uStack_20c,CONCAT12(uStack_20d,uStack_20f)),
                           CONCAT13(uStack_208,uStack_20c._1_3_),local_207,local_203,local_1ff,
                           local_1fb,local_1f7,local_1f3,local_1ef,local_1eb,local_1e7,local_1e3,
                           local_1df,local_1db,local_1d7,&local_10c,&local_108,1,uVar20,uVar14);
        }
      }
      else if (local_9c == 10) {
        _processAdditionalItem
                  (this,param_1,local_84,local_80,(uchar)local_7e,(uchar)local_7d,(vector *)local_ec
                   ,local_104,'\0');
        uVar1 = local_84;
        local_9c = -1;
        pCVar13 = (CDataManager *)G_CDataManager();
        local_38 = (CItem *)CDataManager::find_item(pCVar13,uVar1);
        if ((local_38 == (CItem *)0x0) ||
           (cVar4 = CItem::isCerashopPackageItem(local_38), cVar4 == '\0')) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          local_9c = 7;
        }
        if (local_9c != 7) {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::clear(local_ec);
        }
        local_34 = (CItemLimitEdition *)0x0;
        pCVar13 = (CDataManager *)G_CDataManager();
        uVar19 = CDataManager::getItemLimitEditionMgr(pCVar13);
        uVar16 = local_88;
        local_34 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar19);
        if (local_34 == (CItemLimitEdition *)0x0) {
          puVar15 = (undefined4 *)__cxa_allocate_exception(4,uVar16);
          *puVar15 = 0x11;
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar15,&ENUM_ERROR::typeinfo,0);
        }
        local_10d = false;
        local_118[1] = 0;
        local_118[0] = 0;
        local_30 = CItemLimitEdition::getFeaturedIdx(local_34);
        if (local_30 == 0) {
          iVar6 = CItemLimitEdition::getRelateditem(local_34);
          cVar4 = IsSpecialItem(this,iVar6,local_118 + 1,local_118,&local_10d);
          if (cVar4 == '\0') goto LAB_08322d1c;
          bVar5 = true;
        }
        else {
LAB_08322d1c:
          bVar5 = false;
        }
        if (bVar5) {
          iVar6 = CItemLimitEdition::getRelateditem(local_34);
          iVar7 = G_CDataManager();
          local_30 = CItemList::GetRestrictCode(*(CItemList **)(iVar7 + 0xc),iVar6);
        }
        if (local_30 != 0) {
          iVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          iVar7 = CItemLimitEdition::getFeaturedIdx(local_34);
          SaveFeaturedIdx(param_1,iVar7,iVar6,0);
        }
      }
      if (local_108 == 0) {
        if (local_7c != 0) {
          uVar16 = CUser::get_acc_id(param_1);
          break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
                    (GlobalData::s_BreakAwaySys,uVar16,local_7c);
        }
        iVar6 = local_74;
        if (local_74 != 0) {
          pCVar17 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
          CCirculationStatistic::AddCirculationStatistic(pCVar17,0x26,param_1,iVar6);
        }
        pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::use_money(pCVar18,local_74,8,1);
        CUser::UseWinPoint(param_1,local_78,2);
        CUser::UseCera(param_1,local_7c);
        CUser::addUsedCera(param_1,local_7c);
        if ((local_90 != 0) && (cVar4 = CUser::IsRestrictedGoods(param_1,local_90), cVar4 != '\x01')
           ) {
          CUser::SetRestrictedGoods(param_1,local_90);
          SaveFeaturedIdx(param_1,local_90,local_70,0);
        }
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_d8,1,0x43);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_d8,(int)(char)local_69);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_9c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_88);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_98);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_94);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_10c);
        iVar6 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_ec);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_d8,iVar6);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_11c,local_ac);
        std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
        __gnu_cxx::
        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
        __normal_iterator<Inven_Item*>(local_120,local_a8);
        while (bVar5 = __gnu_cxx::operator!=(local_11c,local_120), bVar5) {
          iVar6 = __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_11c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,*(int *)(iVar6 + 2));
          iVar6 = __gnu_cxx::
                  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                  ::operator->(local_11c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,*(int *)(iVar6 + 7));
          __gnu_cxx::
          __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
          operator++(local_11c);
        }
        if ((local_69 == (stCeraShopIPGRequest_t)0x1) && (local_64 != 0)) {
          DB_UpdateGiftCount::makeRequest(local_64,1);
        }
        if (local_94 == local_98) {
          cVar4 = CEventMgr::IsChildrensDayEventing();
          if ((cVar4 != '\0') &&
             (cVar4 = CUser::IsOKChildrensDayEventCondition(param_1), cVar4 != '\0')) {
            uVar16 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            uVar19 = CUser::get_acc_id(param_1);
            CWebEvent::ReqSaveEventItem(uVar19,uVar16,0x65ae,1,0x30d47,0,true);
            PacketGuard::PacketGuard(local_140);
                    /* try { // try from 083231db to 083233b8 has its CatchHandler @ 083233bb */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_140,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_140,1);
            local_144 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_140);
            local_2c = 0;
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_140,10);
            for (local_28 = 0; local_28 < 10; local_28 = local_28 + 1) {
              local_24 = CUser::GetChildrensDayEventTargetItemSlot(param_1,local_28);
              if ((local_24 < 0) ||
                 (iVar6 = CUser::GetChildrensDayEventTargetItemPeriod(param_1,local_28), iVar6 == -1
                 )) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) break;
              iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
              CInventory::GetInvenSlot((int)local_250,iVar6);
              cVar4 = (char)local_245;
              uVar20 = CUser::GetChildrensDayEventTargetItemPeriod(param_1,local_28);
              uVar14 = local_24e;
              pCVar18 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              local_20 = CInventory::AddAvatarItem
                                   (pCVar18,uVar14,uVar20,0,(int)cVar4,0xffffffff,"E_CHILDRENS_DAY",
                                    2,0,0);
              if (-1 < local_20) {
                pCVar18 = (CInventory *)
                          CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::MakeItemPacket(pCVar18,2,local_20,local_140);
                local_2c = local_2c + 1;
              }
            }
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_140,&local_144,local_2c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_140,true);
            CUser::Send(param_1,local_140);
                    /* try { // try from 083233df to 083234b2 has its CatchHandler @ 0832372f */
            PacketGuard::~PacketGuard(local_140);
          }
          local_124 = 0xffffffff;
          local_128 = 0;
          piVar21 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
          cVar4 = (**(code **)(*piVar21 + 0x34))(piVar21,0);
          if (cVar4 != '\0') {
            this_00 = (CCeraShopBonusItemEvent *)
                      CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
            iVar6 = CCeraShopBonusItemEvent::getBonusRate(this_00);
            iVar7 = get_rand_int(1000);
            if (iVar7 <= iVar6) {
              iVar6 = CUser::getUsedCera(param_1);
              iVar7 = G_CDataManager();
              CItemList::getCeraShopBonusItem
                        (*(CItemList **)(iVar7 + 0xc),iVar6,&local_124,&local_128);
              if (local_124 != 0xffffffff) {
                std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_150);
                    /* try { // try from 083234bc to 083234c0 has its CatchHandler @ 08323540 */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
                          (local_15c);
                    /* try { // try from 08323511 to 08323515 has its CatchHandler @ 08323518 */
                _processAdditionalItem
                          (this,param_1,local_124,(ushort)local_128,'\0',0xff,(vector *)local_150,
                           local_104,'\0');
                    /* try { // try from 08323539 to 0832353d has its CatchHandler @ 08323540 */
                std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
                          (local_15c);
                    /* try { // try from 08323564 to 083235a6 has its CatchHandler @ 0832372f */
                std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_150);
              }
            }
          }
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_124);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_d8,local_128);
          PacketGuard::PacketGuard(local_134);
                    /* try { // try from 083235c0 to 083236ff has its CatchHandler @ 08323702 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_134,0,0x35);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_134,1);
          iVar6 = CUser::GetCera(param_1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_134,iVar6);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_134,true);
          CUser::Send(param_1,local_134);
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_134);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_134,0,0xe);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_134,0);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_134,2);
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::MakeItemPacket(pCVar18,1,0,local_134);
          pCVar18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          CInventory::MakeItemPacket(pCVar18,1,2,local_134);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_134,true);
          CUser::Send(param_1,local_134);
                    /* try { // try from 08323723 to 08323727 has its CatchHandler @ 0832372f */
          PacketGuard::~PacketGuard(local_134);
        }
        bVar5 = true;
      }
      else {
        _ProcessIPGError(this,param_1,param_2,param_3,(uchar)local_108,local_9c,local_88,local_98,
                         local_94,(char)local_69);
        cMyTrace::cMyTrace(local_bc,
                           "void WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                           ,0x955,0);
        cMyTrace::operator()
                  (local_bc,"[%s][%d]",
                   "void WongWork::CCeraShop::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                   ,0x955);
        bVar5 = false;
      }
    }
LAB_08323747:
                    /* try { // try from 08323750 to 08323754 has its CatchHandler @ 08323767 */
    stCeraShopItemParam_t::~stCeraShopItemParam_t(local_104);
                    /* try { // try from 08323788 to 083237bb has its CatchHandler @ 083237be */
    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_ec);
    if (!bVar5) goto LAB_083237dc;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_d8,true);
  CUser::Send(param_1,local_d8);
LAB_083237dc:
  PacketGuard::~PacketGuard(local_d8);
  return;
}

```

---

## ProcessSpecialItem

```asm
// === 0832587e WongWork::CCeraShop::ProcessSpecialItem  [0x0832587e-0x8325a2f] ===
 832587e:	55                   	push   %ebp
 832587f:	89 e5                	mov    %esp,%ebp
 8325881:	53                   	push   %ebx
 8325882:	81 ec 84 00 00 00    	sub    $0x84,%esp
 8325888:	8b 5d 20             	mov    0x20(%ebp),%ebx
 832588b:	8b 4d 2c             	mov    0x2c(%ebp),%ecx
 832588e:	8b 55 30             	mov    0x30(%ebp),%edx
 8325891:	8b 45 34             	mov    0x34(%ebp),%eax
 8325894:	88 5d a4             	mov    %bl,-0x5c(%ebp)
 8325897:	88 4d a0             	mov    %cl,-0x60(%ebp)
 832589a:	88 55 9c             	mov    %dl,-0x64(%ebp)
 832589d:	88 45 98             	mov    %al,-0x68(%ebp)
 83258a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83258a3:	89 04 24             	mov    %eax,(%esp)
 83258a6:	e8 87 ab df ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 83258ab:	85 c0                	test   %eax,%eax
 83258ad:	0f 94 c0             	sete   %al
 83258b0:	84 c0                	test   %al,%al
 83258b2:	74 0a                	je     83258be <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0x40>
 83258b4:	b8 00 00 00 00       	mov    $0x0,%eax
 83258b9:	e9 6d 01 00 00       	jmp    8325a2b <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0x1ad>
 83258be:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 83258c5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 83258cc:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 83258d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 83258d3:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 83258da:	09 
 83258db:	89 04 24             	mov    %eax,(%esp)
 83258de:	e8 4f 8b f5 ff       	call   827e432 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE3endEv>
 83258e3:	83 ec 04             	sub    $0x4,%esp
 83258e6:	8b 45 10             	mov    0x10(%ebp),%eax
 83258e9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 83258ec:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83258ef:	8d 55 f0             	lea    -0x10(%ebp),%edx
 83258f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 83258f6:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 83258fd:	09 
 83258fe:	89 04 24             	mov    %eax,(%esp)
 8325901:	e8 00 8b f5 ff       	call   827e406 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE4findERS4_>
 8325906:	83 ec 04             	sub    $0x4,%esp
 8325909:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832590c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325910:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8325913:	89 04 24             	mov    %eax,(%esp)
 8325916:	e8 3d 8b f5 ff       	call   827e458 <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEeqERKS4_>
 832591b:	84 c0                	test   %al,%al
 832591d:	74 38                	je     8325957 <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0xd9>
 832591f:	8d 45 df             	lea    -0x21(%ebp),%eax
 8325922:	89 44 24 10          	mov    %eax,0x10(%esp)
 8325926:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8325929:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832592d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8325930:	89 44 24 08          	mov    %eax,0x8(%esp)
 8325934:	8b 45 10             	mov    0x10(%ebp),%eax
 8325937:	89 44 24 04          	mov    %eax,0x4(%esp)
 832593b:	8b 45 08             	mov    0x8(%ebp),%eax
 832593e:	89 04 24             	mov    %eax,(%esp)
 8325941:	e8 d8 f0 ff ff       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8325946:	83 f0 01             	xor    $0x1,%eax
 8325949:	84 c0                	test   %al,%al
 832594b:	74 11                	je     832595e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0xe0>
 832594d:	b8 00 00 00 00       	mov    $0x0,%eax
 8325952:	e9 d4 00 00 00       	jmp    8325a2b <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0x1ad>
 8325957:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 832595e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8325962:	75 16                	jne    832597a <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0xfc>
 8325964:	83 7d 10 10          	cmpl   $0x10,0x10(%ebp)
 8325968:	74 09                	je     8325973 <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0xf5>
 832596a:	81 7d 10 71 d1 28 00 	cmpl   $0x28d171,0x10(%ebp)
 8325971:	75 07                	jne    832597a <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0xfc>
 8325973:	c7 45 14 50 c3 00 00 	movl   $0xc350,0x14(%ebp)
 832597a:	e8 0f 68 da ff       	call   80cc18e <_Z14G_CGameManagerv>
 832597f:	89 04 24             	mov    %eax,(%esp)
 8325982:	e8 01 35 f7 ff       	call   8298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>
 8325987:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832598a:	8b 45 28             	mov    0x28(%ebp),%eax
 832598d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8325991:	8b 45 24             	mov    0x24(%ebp),%eax
 8325994:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325998:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832599b:	89 04 24             	mov    %eax,(%esp)
 832599e:	e8 1f f5 f0 ff       	call   8234ec2 <_ZN19STSpecailItem_ParamC1ERSt6vectorI10Inven_ItemSaIS1_EERN8WongWork9CCeraShop21stCeraShopItemParam_tE>
 83259a3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 83259a6:	89 45 bc             	mov    %eax,-0x44(%ebp)
 83259a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83259ac:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 83259af:	8b 45 10             	mov    0x10(%ebp),%eax
 83259b2:	89 45 b8             	mov    %eax,-0x48(%ebp)
 83259b5:	8b 45 14             	mov    0x14(%ebp),%eax
 83259b8:	89 45 c8             	mov    %eax,-0x38(%ebp)
 83259bb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 83259be:	89 45 cc             	mov    %eax,-0x34(%ebp)
 83259c1:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 83259c5:	88 45 d0             	mov    %al,-0x30(%ebp)
 83259c8:	0f b6 45 a0          	movzbl -0x60(%ebp),%eax
 83259cc:	88 45 d1             	mov    %al,-0x2f(%ebp)
 83259cf:	0f b6 45 9c          	movzbl -0x64(%ebp),%eax
 83259d3:	88 45 d2             	mov    %al,-0x2e(%ebp)
 83259d6:	0f b6 45 98          	movzbl -0x68(%ebp),%eax
 83259da:	88 45 d3             	mov    %al,-0x2d(%ebp)
 83259dd:	8b 45 38             	mov    0x38(%ebp),%eax
 83259e0:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 83259e3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 83259e6:	89 04 24             	mov    %eax,(%esp)
 83259e9:	e8 48 f5 f0 ff       	call   8234f36 <_ZN20STSpecailItem_ResultC1Ev>
 83259ee:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 83259f1:	8b 45 08             	mov    0x8(%ebp),%eax
 83259f4:	8b 00                	mov    (%eax),%eax
 83259f6:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 83259f9:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 83259fd:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8325a00:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8325a04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325a08:	89 04 24             	mov    %eax,(%esp)
 8325a0b:	e8 fa 63 f5 ff       	call   827be0a <_ZN18SpecialItemHandler7executeEiRK19STSpecailItem_ParamR20STSpecailItem_Result>
 8325a10:	83 f0 01             	xor    $0x1,%eax
 8325a13:	84 c0                	test   %al,%al
 8325a15:	74 07                	je     8325a1e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0x1a0>
 8325a17:	b8 00 00 00 00       	mov    $0x0,%eax
 8325a1c:	eb 0d                	jmp    8325a2b <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi+0x1ad>
 8325a1e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8325a21:	8b 45 18             	mov    0x18(%ebp),%eax
 8325a24:	89 10                	mov    %edx,(%eax)
 8325a26:	b8 01 00 00 00       	mov    $0x1,%eax
 8325a2b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8325a2e:	c9                   	leave
 8325a2f:	c3                   	ret

```

```c
// WongWork::CCeraShop::ProcessSpecialItem @ 0x832587e

/* WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int) */

undefined4 __thiscall
WongWork::CCeraShop::ProcessSpecialItem
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,int *param_4,long param_5,
          bool param_6,vector *param_7,stCeraShopItemParam_t *param_8,char param_9,char param_10,
          bool param_11,int param_12)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CGameManager *this_00;
  CUser *local_50;
  int local_4c;
  int local_48;
  int local_3c;
  long local_38;
  undefined1 local_34;
  char local_33;
  char local_32;
  undefined1 local_31;
  int local_30;
  int local_2c;
  bool local_25;
  int local_24;
  int local_20;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_18 [4];
  int local_14;
  undefined4 local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    local_20 = 0;
    local_24 = 0;
    local_25 = false;
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::end(local_1c);
    local_14 = param_2;
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::find((ulong *)local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                      (local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') {
      local_20 = 2;
    }
    else {
      cVar1 = IsSpecialItem(this,param_2,&local_20,&local_24,&local_25);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    if ((param_3 == 0) && ((param_2 == 0x10 || (param_2 == 0x28d171)))) {
      param_3 = 50000;
    }
    this_00 = (CGameManager *)G_CGameManager();
    local_10 = CGameManager::GetPremiumLetheManager(this_00);
    STSpecailItem_Param::STSpecailItem_Param((STSpecailItem_Param *)&local_50,param_7,param_8);
    local_48 = local_24;
    local_50 = param_1;
    local_4c = param_2;
    local_3c = param_3;
    local_38 = param_5;
    local_30 = param_12;
    local_34 = param_6;
    local_33 = param_9;
    local_32 = param_10;
    local_31 = param_11;
    STSpecailItem_Result::STSpecailItem_Result((STSpecailItem_Result *)&local_2c);
    cVar1 = SpecialItemHandler::execute
                      (*(SpecialItemHandler **)this,local_20,(STSpecailItem_Param *)&local_50,
                       (STSpecailItem_Result *)&local_2c);
    if (cVar1 == '\x01') {
      *param_4 = local_2c;
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## SaveFeaturedIdx

```asm
// === 08325a30 WongWork::CCeraShop::SaveFeaturedIdx  [0x08325a30-0x8325a87] ===
 8325a30:	55                   	push   %ebp
 8325a31:	89 e5                	mov    %esp,%ebp
 8325a33:	53                   	push   %ebx
 8325a34:	83 ec 24             	sub    $0x24,%esp
 8325a37:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8325a3b:	74 43                	je     8325a80 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii+0x50>
 8325a3d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8325a44:	ff 
 8325a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8325a48:	89 04 24             	mov    %eax,(%esp)
 8325a4b:	e8 50 85 32 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8325a50:	89 c3                	mov    %eax,%ebx
 8325a52:	8b 45 08             	mov    0x8(%ebp),%eax
 8325a55:	89 04 24             	mov    %eax,(%esp)
 8325a58:	e8 11 49 db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8325a5d:	8b 55 14             	mov    0x14(%ebp),%edx
 8325a60:	89 54 24 10          	mov    %edx,0x10(%esp)
 8325a64:	8b 55 10             	mov    0x10(%ebp),%edx
 8325a67:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325a6b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8325a6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325a72:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8325a76:	89 04 24             	mov    %eax,(%esp)
 8325a79:	e8 5c 58 0f 00       	call   841b2da <_ZN23DB_SaveFeaturedGoodsIdx11makeRequestEjiiii>
 8325a7e:	eb 01                	jmp    8325a81 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii+0x51>
 8325a80:	90                   	nop
 8325a81:	83 c4 24             	add    $0x24,%esp
 8325a84:	5b                   	pop    %ebx
 8325a85:	5d                   	pop    %ebp
 8325a86:	c3                   	ret
 8325a87:	90                   	nop

```

```c
// WongWork::CCeraShop::SaveFeaturedIdx @ 0x8325a30

/* WongWork::CCeraShop::SaveFeaturedIdx(CUser*, int, int, int) */

void WongWork::CCeraShop::SaveFeaturedIdx(CUser *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    iVar1 = CUser::get_charac_no(param_1,-1);
    uVar2 = CUser::get_acc_id(param_1);
    DB_SaveFeaturedGoodsIdx::makeRequest(uVar2,iVar1,param_2,param_3,param_4);
  }
  return;
}

```

---

## _CheckBuyingCondition

```asm
// === 08323f86 WongWork::CCeraShop::_CheckBuyingCondition  [0x08323f86-0x832480f] ===
 8323f86:	55                   	push   %ebp
 8323f87:	89 e5                	mov    %esp,%ebp
 8323f89:	53                   	push   %ebx
 8323f8a:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 8323f90:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8323f93:	8b 55 20             	mov    0x20(%ebp),%edx
 8323f96:	8b 45 24             	mov    0x24(%ebp),%eax
 8323f99:	66 89 4d 94          	mov    %cx,-0x6c(%ebp)
 8323f9d:	88 55 90             	mov    %dl,-0x70(%ebp)
 8323fa0:	66 89 45 8c          	mov    %ax,-0x74(%ebp)
 8323fa4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8323fab:	8b 45 10             	mov    0x10(%ebp),%eax
 8323fae:	3d bd ad 01 00       	cmp    $0x1adbd,%eax
 8323fb3:	74 09                	je     8323fbe <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x38>
 8323fb5:	3d 3c c1 01 00       	cmp    $0x1c13c,%eax
 8323fba:	74 0b                	je     8323fc7 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x41>
 8323fbc:	eb 10                	jmp    8323fce <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x48>
 8323fbe:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 8323fc5:	eb 07                	jmp    8323fce <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x48>
 8323fc7:	c7 45 e4 03 00 00 00 	movl   $0x3,-0x1c(%ebp)
 8323fce:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 8323fd2:	0f 84 c9 00 00 00    	je     83240a1 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x11b>
 8323fd8:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8323fdb:	e8 bb 81 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8323fe0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8323fe4:	89 04 24             	mov    %eax,(%esp)
 8323fe7:	e8 46 ba 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8323fec:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8323fef:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8323ff3:	75 0a                	jne    8323fff <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x79>
 8323ff5:	b8 00 00 00 00       	mov    $0x0,%eax
 8323ffa:	e9 07 08 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8323fff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8324002:	8b 00                	mov    (%eax),%eax
 8324004:	83 c0 10             	add    $0x10,%eax
 8324007:	8b 10                	mov    (%eax),%edx
 8324009:	8b 45 e8             	mov    -0x18(%ebp),%eax
 832400c:	89 04 24             	mov    %eax,(%esp)
 832400f:	ff d2                	call   *%edx
 8324011:	84 c0                	test   %al,%al
 8324013:	0f 84 88 00 00 00    	je     83240a1 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x11b>
 8324019:	66 83 7d 8c 00       	cmpw   $0x0,-0x74(%ebp)
 832401e:	74 1b                	je     832403b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0xb5>
 8324020:	0f b7 5d 8c          	movzwl -0x74(%ebp),%ebx
 8324024:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8324027:	89 04 24             	mov    %eax,(%esp)
 832402a:	e8 f9 ce e2 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 832402f:	89 04 24             	mov    %eax,(%esp)
 8324032:	e8 63 e1 e2 ff       	call   815219a <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE4sizeEv>
 8324037:	39 c3                	cmp    %eax,%ebx
 8324039:	72 07                	jb     8324042 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0xbc>
 832403b:	b8 01 00 00 00       	mov    $0x1,%eax
 8324040:	eb 05                	jmp    8324047 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0xc1>
 8324042:	b8 00 00 00 00       	mov    $0x0,%eax
 8324047:	84 c0                	test   %al,%al
 8324049:	74 0a                	je     8324055 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0xcf>
 832404b:	b8 00 00 00 00       	mov    $0x0,%eax
 8324050:	e9 b1 07 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324055:	0f b7 45 8c          	movzwl -0x74(%ebp),%eax
 8324059:	66 3b 45 94          	cmp    -0x6c(%ebp),%ax
 832405d:	74 0a                	je     8324069 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0xe3>
 832405f:	b8 00 00 00 00       	mov    $0x0,%eax
 8324064:	e9 9d 07 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324069:	0f b7 5d 8c          	movzwl -0x74(%ebp),%ebx
 832406d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8324070:	89 04 24             	mov    %eax,(%esp)
 8324073:	e8 b0 ce e2 ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 8324078:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 832407c:	89 04 24             	mov    %eax,(%esp)
 832407f:	e8 46 e2 e2 ff       	call   81522ca <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE2atEj>
 8324084:	8b 40 10             	mov    0x10(%eax),%eax
 8324087:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832408a:	66 83 7d 94 04       	cmpw   $0x4,-0x6c(%ebp)
 832408f:	74 10                	je     83240a1 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x11b>
 8324091:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8324095:	74 0a                	je     83240a1 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x11b>
 8324097:	b8 00 00 00 00       	mov    $0x0,%eax
 832409c:	e9 65 07 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83240a1:	8b 45 14             	mov    0x14(%ebp),%eax
 83240a4:	3d 49 03 00 00       	cmp    $0x349,%eax
 83240a9:	0f 87 81 00 00 00    	ja     8324130 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x1aa>
 83240af:	3d 47 03 00 00       	cmp    $0x347,%eax
 83240b4:	0f 83 f4 00 00 00    	jae    83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 83240ba:	83 f8 43             	cmp    $0x43,%eax
 83240bd:	77 33                	ja     83240f2 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x16c>
 83240bf:	83 f8 3f             	cmp    $0x3f,%eax
 83240c2:	0f 83 dd 00 00 00    	jae    83241a5 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x21f>
 83240c8:	83 f8 33             	cmp    $0x33,%eax
 83240cb:	0f 84 cb 00 00 00    	je     832419c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x216>
 83240d1:	83 f8 33             	cmp    $0x33,%eax
 83240d4:	77 0e                	ja     83240e4 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x15e>
 83240d6:	83 f8 32             	cmp    $0x32,%eax
 83240d9:	0f 84 b4 00 00 00    	je     8324193 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x20d>
 83240df:	e9 ec 00 00 00       	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83240e4:	83 f8 39             	cmp    $0x39,%eax
 83240e7:	0f 82 e3 00 00 00    	jb     83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83240ed:	e9 a1 00 00 00       	jmp    8324193 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x20d>
 83240f2:	3d c0 00 00 00       	cmp    $0xc0,%eax
 83240f7:	77 1c                	ja     8324115 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x18f>
 83240f9:	3d be 00 00 00       	cmp    $0xbe,%eax
 83240fe:	0f 83 aa 00 00 00    	jae    83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 8324104:	83 e8 45             	sub    $0x45,%eax
 8324107:	83 f8 04             	cmp    $0x4,%eax
 832410a:	0f 87 c0 00 00 00    	ja     83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324110:	e9 90 00 00 00       	jmp    83241a5 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x21f>
 8324115:	3d e4 02 00 00       	cmp    $0x2e4,%eax
 832411a:	0f 84 8e 00 00 00    	je     83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 8324120:	3d 35 03 00 00       	cmp    $0x335,%eax
 8324125:	0f 84 83 00 00 00    	je     83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 832412b:	e9 a0 00 00 00       	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324130:	3d 8c 97 28 00       	cmp    $0x28978c,%eax
 8324135:	77 2e                	ja     8324165 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x1df>
 8324137:	3d 8b 97 28 00       	cmp    $0x28978b,%eax
 832413c:	73 55                	jae    8324193 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x20d>
 832413e:	3d e2 1e 00 00       	cmp    $0x1ee2,%eax
 8324143:	74 69                	je     83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 8324145:	3d e2 1e 00 00       	cmp    $0x1ee2,%eax
 832414a:	77 09                	ja     8324155 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x1cf>
 832414c:	3d a0 03 00 00       	cmp    $0x3a0,%eax
 8324151:	74 5b                	je     83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 8324153:	eb 7b                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324155:	3d cb 96 28 00       	cmp    $0x2896cb,%eax
 832415a:	74 52                	je     83241ae <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x228>
 832415c:	3d 8a 97 28 00       	cmp    $0x28978a,%eax
 8324161:	74 39                	je     832419c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x216>
 8324163:	eb 6b                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324165:	3d c9 97 28 00       	cmp    $0x2897c9,%eax
 832416a:	77 10                	ja     832417c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x1f6>
 832416c:	3d c8 97 28 00       	cmp    $0x2897c8,%eax
 8324171:	73 4d                	jae    83241c0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x23a>
 8324173:	3d 8f 97 28 00       	cmp    $0x28978f,%eax
 8324178:	74 3d                	je     83241b7 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x231>
 832417a:	eb 54                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 832417c:	3d 5d 99 28 00       	cmp    $0x28995d,%eax
 8324181:	72 4d                	jb     83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324183:	3d 5e 99 28 00       	cmp    $0x28995e,%eax
 8324188:	76 3f                	jbe    83241c9 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x243>
 832418a:	3d ab 99 28 00       	cmp    $0x2899ab,%eax
 832418f:	74 38                	je     83241c9 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x243>
 8324191:	eb 3d                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 8324193:	c7 45 e4 04 00 00 00 	movl   $0x4,-0x1c(%ebp)
 832419a:	eb 34                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 832419c:	c7 45 e4 05 00 00 00 	movl   $0x5,-0x1c(%ebp)
 83241a3:	eb 2b                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83241a5:	c7 45 e4 06 00 00 00 	movl   $0x6,-0x1c(%ebp)
 83241ac:	eb 22                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83241ae:	c7 45 e4 0b 00 00 00 	movl   $0xb,-0x1c(%ebp)
 83241b5:	eb 19                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83241b7:	c7 45 e4 0c 00 00 00 	movl   $0xc,-0x1c(%ebp)
 83241be:	eb 10                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83241c0:	c7 45 e4 0d 00 00 00 	movl   $0xd,-0x1c(%ebp)
 83241c7:	eb 07                	jmp    83241d0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x24a>
 83241c9:	c7 45 e4 10 00 00 00 	movl   $0x10,-0x1c(%ebp)
 83241d0:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 83241d4:	75 0a                	jne    83241e0 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x25a>
 83241d6:	b8 01 00 00 00       	mov    $0x1,%eax
 83241db:	e9 26 06 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83241e0:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 83241e4:	0f 87 17 06 00 00    	ja     8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83241ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83241ed:	c1 e0 02             	shl    $0x2,%eax
 83241f0:	8b 80 dc 5d c2 08    	mov    0x8c25ddc(%eax),%eax
 83241f6:	ff e0                	jmp    *%eax
 83241f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 83241fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 83241ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8324202:	89 04 24             	mov    %eax,(%esp)
 8324205:	e8 5c 07 00 00       	call   8324966 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser>
 832420a:	e9 f7 05 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832420f:	c7 05 c8 be 43 09 50 	movl   $0x4589a450,0x943bec8
 8324216:	a4 89 45 
 8324219:	c7 05 cc be 43 09 50 	movl   $0x45ae8e50,0x943becc
 8324220:	8e ae 45 
 8324223:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324226:	89 04 24             	mov    %eax,(%esp)
 8324229:	e8 d4 af f0 ff       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 832422e:	8b 15 c8 be 43 09    	mov    0x943bec8,%edx
 8324234:	39 d0                	cmp    %edx,%eax
 8324236:	7c 1c                	jl     8324254 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x2ce>
 8324238:	8b 45 0c             	mov    0xc(%ebp),%eax
 832423b:	89 04 24             	mov    %eax,(%esp)
 832423e:	e8 bf af f0 ff       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 8324243:	8b 15 cc be 43 09    	mov    0x943becc,%edx
 8324249:	39 d0                	cmp    %edx,%eax
 832424b:	7d 07                	jge    8324254 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x2ce>
 832424d:	b8 01 00 00 00       	mov    $0x1,%eax
 8324252:	eb 05                	jmp    8324259 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x2d3>
 8324254:	b8 00 00 00 00       	mov    $0x0,%eax
 8324259:	84 c0                	test   %al,%al
 832425b:	0f 84 8a 05 00 00    	je     83247eb <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x865>
 8324261:	b8 01 00 00 00       	mov    $0x1,%eax
 8324266:	e9 9b 05 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832426b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832426e:	89 04 24             	mov    %eax,(%esp)
 8324271:	e8 0e d8 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 8324276:	89 04 24             	mov    %eax,(%esp)
 8324279:	e8 8a 94 f0 ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 832427e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8324281:	8b 45 14             	mov    0x14(%ebp),%eax
 8324284:	83 f8 3c             	cmp    $0x3c,%eax
 8324287:	0f 84 9f 00 00 00    	je     832432c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3a6>
 832428d:	83 f8 3c             	cmp    $0x3c,%eax
 8324290:	77 23                	ja     83242b5 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x32f>
 8324292:	83 f8 39             	cmp    $0x39,%eax
 8324295:	74 5c                	je     83242f3 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x36d>
 8324297:	83 f8 39             	cmp    $0x39,%eax
 832429a:	77 0a                	ja     83242a6 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x320>
 832429c:	83 f8 32             	cmp    $0x32,%eax
 832429f:	74 3d                	je     83242de <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x358>
 83242a1:	e9 5b 05 00 00       	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83242a6:	83 f8 3a             	cmp    $0x3a,%eax
 83242a9:	74 5d                	je     8324308 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x382>
 83242ab:	83 f8 3b             	cmp    $0x3b,%eax
 83242ae:	74 6a                	je     832431a <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x394>
 83242b0:	e9 4c 05 00 00       	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83242b5:	83 f8 3e             	cmp    $0x3e,%eax
 83242b8:	0f 84 92 00 00 00    	je     8324350 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3ca>
 83242be:	83 f8 3e             	cmp    $0x3e,%eax
 83242c1:	72 7b                	jb     832433e <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3b8>
 83242c3:	3d 8b 97 28 00       	cmp    $0x28978b,%eax
 83242c8:	0f 84 94 00 00 00    	je     8324362 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3dc>
 83242ce:	3d 8c 97 28 00       	cmp    $0x28978c,%eax
 83242d3:	0f 84 9b 00 00 00    	je     8324374 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3ee>
 83242d9:	e9 23 05 00 00       	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83242de:	83 7d f0 08          	cmpl   $0x8,-0x10(%ebp)
 83242e2:	75 0a                	jne    83242ee <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x368>
 83242e4:	b8 01 00 00 00       	mov    $0x1,%eax
 83242e9:	e9 18 05 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83242ee:	e9 98 00 00 00       	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 83242f3:	83 7d f0 18          	cmpl   $0x18,-0x10(%ebp)
 83242f7:	75 0a                	jne    8324303 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x37d>
 83242f9:	b8 01 00 00 00       	mov    $0x1,%eax
 83242fe:	e9 03 05 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324303:	e9 83 00 00 00       	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 8324308:	83 7d f0 28          	cmpl   $0x28,-0x10(%ebp)
 832430c:	75 0a                	jne    8324318 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x392>
 832430e:	b8 01 00 00 00       	mov    $0x1,%eax
 8324313:	e9 ee 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324318:	eb 71                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 832431a:	83 7d f0 38          	cmpl   $0x38,-0x10(%ebp)
 832431e:	75 0a                	jne    832432a <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3a4>
 8324320:	b8 01 00 00 00       	mov    $0x1,%eax
 8324325:	e9 dc 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832432a:	eb 5f                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 832432c:	83 7d f0 48          	cmpl   $0x48,-0x10(%ebp)
 8324330:	75 0a                	jne    832433c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3b6>
 8324332:	b8 01 00 00 00       	mov    $0x1,%eax
 8324337:	e9 ca 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832433c:	eb 4d                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 832433e:	83 7d f0 58          	cmpl   $0x58,-0x10(%ebp)
 8324342:	75 0a                	jne    832434e <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3c8>
 8324344:	b8 01 00 00 00       	mov    $0x1,%eax
 8324349:	e9 b8 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832434e:	eb 3b                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 8324350:	83 7d f0 68          	cmpl   $0x68,-0x10(%ebp)
 8324354:	75 0a                	jne    8324360 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3da>
 8324356:	b8 01 00 00 00       	mov    $0x1,%eax
 832435b:	e9 a6 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324360:	eb 29                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 8324362:	83 7d f0 78          	cmpl   $0x78,-0x10(%ebp)
 8324366:	75 0a                	jne    8324372 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x3ec>
 8324368:	b8 01 00 00 00       	mov    $0x1,%eax
 832436d:	e9 94 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324372:	eb 17                	jmp    832438b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x405>
 8324374:	81 7d f0 88 00 00 00 	cmpl   $0x88,-0x10(%ebp)
 832437b:	0f 85 6d 04 00 00    	jne    83247ee <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x868>
 8324381:	b8 01 00 00 00       	mov    $0x1,%eax
 8324386:	e9 7b 04 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832438b:	e9 71 04 00 00       	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 8324390:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8324393:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324396:	89 04 24             	mov    %eax,(%esp)
 8324399:	e8 e0 5e db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 832439e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83243a2:	89 04 24             	mov    %eax,(%esp)
 83243a5:	e8 c8 0d 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 83243aa:	83 f8 ff             	cmp    $0xffffffff,%eax
 83243ad:	75 26                	jne    83243d5 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x44f>
 83243af:	8b 5d 14             	mov    0x14(%ebp),%ebx
 83243b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83243b5:	89 04 24             	mov    %eax,(%esp)
 83243b8:	e8 c7 d6 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 83243bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83243c1:	89 04 24             	mov    %eax,(%esp)
 83243c4:	e8 4b 78 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 83243c9:	83 f8 ff             	cmp    $0xffffffff,%eax
 83243cc:	75 07                	jne    83243d5 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x44f>
 83243ce:	b8 01 00 00 00       	mov    $0x1,%eax
 83243d3:	eb 05                	jmp    83243da <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x454>
 83243d5:	b8 00 00 00 00       	mov    $0x0,%eax
 83243da:	84 c0                	test   %al,%al
 83243dc:	0f 84 0f 04 00 00    	je     83247f1 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x86b>
 83243e2:	8d 45 a7             	lea    -0x59(%ebp),%eax
 83243e5:	89 04 24             	mov    %eax,(%esp)
 83243e8:	e8 67 74 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 83243ed:	8b 45 14             	mov    0x14(%ebp),%eax
 83243f0:	89 45 a9             	mov    %eax,-0x57(%ebp)
 83243f3:	e8 a3 7d da ff       	call   80cc19b <_Z14G_CDataManagerv>
 83243f8:	8b 40 0c             	mov    0xc(%eax),%eax
 83243fb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8324402:	00 
 8324403:	8d 55 a7             	lea    -0x59(%ebp),%edx
 8324406:	89 54 24 08          	mov    %edx,0x8(%esp)
 832440a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8324411:	00 
 8324412:	89 04 24             	mov    %eax,(%esp)
 8324415:	e8 9e db 1e 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 832441a:	8b 45 0c             	mov    0xc(%ebp),%eax
 832441d:	89 04 24             	mov    %eax,(%esp)
 8324420:	e8 59 5e db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8324425:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8324428:	89 54 24 04          	mov    %edx,0x4(%esp)
 832442c:	8b 55 ab             	mov    -0x55(%ebp),%edx
 832442f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8324433:	8b 55 af             	mov    -0x51(%ebp),%edx
 8324436:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832443a:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 832443d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8324441:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8324444:	89 54 24 14          	mov    %edx,0x14(%esp)
 8324448:	8b 55 bb             	mov    -0x45(%ebp),%edx
 832444b:	89 54 24 18          	mov    %edx,0x18(%esp)
 832444f:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8324452:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8324456:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 8324459:	89 54 24 20          	mov    %edx,0x20(%esp)
 832445d:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8324460:	89 54 24 24          	mov    %edx,0x24(%esp)
 8324464:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8324467:	89 54 24 28          	mov    %edx,0x28(%esp)
 832446b:	8b 55 cf             	mov    -0x31(%ebp),%edx
 832446e:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8324472:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8324475:	89 54 24 30          	mov    %edx,0x30(%esp)
 8324479:	8b 55 d7             	mov    -0x29(%ebp),%edx
 832447c:	89 54 24 34          	mov    %edx,0x34(%esp)
 8324480:	8b 55 db             	mov    -0x25(%ebp),%edx
 8324483:	89 54 24 38          	mov    %edx,0x38(%esp)
 8324487:	8b 55 df             	mov    -0x21(%ebp),%edx
 832448a:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 832448e:	0f b6 55 e3          	movzbl -0x1d(%ebp),%edx
 8324492:	88 54 24 40          	mov    %dl,0x40(%esp)
 8324496:	89 04 24             	mov    %eax,(%esp)
 8324499:	e8 2c da 1d 00       	call   8501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>
 832449e:	f7 d0                	not    %eax
 83244a0:	c1 e8 1f             	shr    $0x1f,%eax
 83244a3:	84 c0                	test   %al,%al
 83244a5:	0f 84 49 03 00 00    	je     83247f4 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x86e>
 83244ab:	b8 01 00 00 00       	mov    $0x1,%eax
 83244b0:	e9 51 03 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83244b5:	c7 05 c8 be 43 09 d0 	movl   $0x46a7b9d0,0x943bec8
 83244bc:	b9 a7 46 
 83244bf:	c7 05 cc be 43 09 50 	movl   $0x46d5de50,0x943becc
 83244c6:	de d5 46 
 83244c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83244cc:	89 04 24             	mov    %eax,(%esp)
 83244cf:	e8 2e ad f0 ff       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 83244d4:	8b 15 c8 be 43 09    	mov    0x943bec8,%edx
 83244da:	39 d0                	cmp    %edx,%eax
 83244dc:	7c 1c                	jl     83244fa <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x574>
 83244de:	8b 45 0c             	mov    0xc(%ebp),%eax
 83244e1:	89 04 24             	mov    %eax,(%esp)
 83244e4:	e8 19 ad f0 ff       	call   822f202 <_ZNK15CUserCharacInfo22getCurCharacCreateTimeEv>
 83244e9:	8b 15 cc be 43 09    	mov    0x943becc,%edx
 83244ef:	39 d0                	cmp    %edx,%eax
 83244f1:	7d 07                	jge    83244fa <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x574>
 83244f3:	b8 01 00 00 00       	mov    $0x1,%eax
 83244f8:	eb 05                	jmp    83244ff <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x579>
 83244fa:	b8 00 00 00 00       	mov    $0x0,%eax
 83244ff:	84 c0                	test   %al,%al
 8324501:	0f 84 f0 02 00 00    	je     83247f7 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x871>
 8324507:	8b 45 0c             	mov    0xc(%ebp),%eax
 832450a:	89 04 24             	mov    %eax,(%esp)
 832450d:	e8 6c 5d db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8324512:	c7 44 24 04 d6 65 00 	movl   $0x65d6,0x4(%esp)
 8324519:	00 
 832451a:	89 04 24             	mov    %eax,(%esp)
 832451d:	e8 50 0c 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 8324522:	83 f8 ff             	cmp    $0xffffffff,%eax
 8324525:	0f 85 3b 01 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 832452b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832452e:	89 04 24             	mov    %eax,(%esp)
 8324531:	e8 4e d5 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 8324536:	c7 44 24 04 d6 65 00 	movl   $0x65d6,0x4(%esp)
 832453d:	00 
 832453e:	89 04 24             	mov    %eax,(%esp)
 8324541:	e8 ce 76 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 8324546:	83 f8 ff             	cmp    $0xffffffff,%eax
 8324549:	0f 85 17 01 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 832454f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324552:	89 04 24             	mov    %eax,(%esp)
 8324555:	e8 24 5d db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 832455a:	c7 44 24 04 d7 65 00 	movl   $0x65d7,0x4(%esp)
 8324561:	00 
 8324562:	89 04 24             	mov    %eax,(%esp)
 8324565:	e8 08 0c 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 832456a:	83 f8 ff             	cmp    $0xffffffff,%eax
 832456d:	0f 85 f3 00 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 8324573:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324576:	89 04 24             	mov    %eax,(%esp)
 8324579:	e8 06 d5 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 832457e:	c7 44 24 04 d7 65 00 	movl   $0x65d7,0x4(%esp)
 8324585:	00 
 8324586:	89 04 24             	mov    %eax,(%esp)
 8324589:	e8 86 76 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 832458e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8324591:	0f 85 cf 00 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 8324597:	8b 45 0c             	mov    0xc(%ebp),%eax
 832459a:	89 04 24             	mov    %eax,(%esp)
 832459d:	e8 dc 5c db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83245a2:	c7 44 24 04 d8 65 00 	movl   $0x65d8,0x4(%esp)
 83245a9:	00 
 83245aa:	89 04 24             	mov    %eax,(%esp)
 83245ad:	e8 c0 0b 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 83245b2:	83 f8 ff             	cmp    $0xffffffff,%eax
 83245b5:	0f 85 ab 00 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 83245bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83245be:	89 04 24             	mov    %eax,(%esp)
 83245c1:	e8 be d4 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 83245c6:	c7 44 24 04 d8 65 00 	movl   $0x65d8,0x4(%esp)
 83245cd:	00 
 83245ce:	89 04 24             	mov    %eax,(%esp)
 83245d1:	e8 3e 76 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 83245d6:	83 f8 ff             	cmp    $0xffffffff,%eax
 83245d9:	0f 85 87 00 00 00    	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 83245df:	8b 45 0c             	mov    0xc(%ebp),%eax
 83245e2:	89 04 24             	mov    %eax,(%esp)
 83245e5:	e8 94 5c db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83245ea:	c7 44 24 04 d9 65 00 	movl   $0x65d9,0x4(%esp)
 83245f1:	00 
 83245f2:	89 04 24             	mov    %eax,(%esp)
 83245f5:	e8 78 0b 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 83245fa:	83 f8 ff             	cmp    $0xffffffff,%eax
 83245fd:	75 67                	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 83245ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324602:	89 04 24             	mov    %eax,(%esp)
 8324605:	e8 7a d4 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 832460a:	c7 44 24 04 d9 65 00 	movl   $0x65d9,0x4(%esp)
 8324611:	00 
 8324612:	89 04 24             	mov    %eax,(%esp)
 8324615:	e8 fa 75 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 832461a:	83 f8 ff             	cmp    $0xffffffff,%eax
 832461d:	75 47                	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 832461f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324622:	89 04 24             	mov    %eax,(%esp)
 8324625:	e8 54 5c db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 832462a:	c7 44 24 04 da 65 00 	movl   $0x65da,0x4(%esp)
 8324631:	00 
 8324632:	89 04 24             	mov    %eax,(%esp)
 8324635:	e8 38 0b 1e 00       	call   8505172 <_ZNK10CInventory16check_item_existEi>
 832463a:	83 f8 ff             	cmp    $0xffffffff,%eax
 832463d:	75 27                	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 832463f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324642:	89 04 24             	mov    %eax,(%esp)
 8324645:	e8 3a d4 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 832464a:	c7 44 24 04 da 65 00 	movl   $0x65da,0x4(%esp)
 8324651:	00 
 8324652:	89 04 24             	mov    %eax,(%esp)
 8324655:	e8 ba 75 1e 00       	call   850bc14 <_ZNK6CCargo16check_item_existEi>
 832465a:	83 f8 ff             	cmp    $0xffffffff,%eax
 832465d:	75 07                	jne    8324666 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e0>
 832465f:	b8 01 00 00 00       	mov    $0x1,%eax
 8324664:	eb 05                	jmp    832466b <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x6e5>
 8324666:	b8 00 00 00 00       	mov    $0x0,%eax
 832466b:	84 c0                	test   %al,%al
 832466d:	0f 84 87 01 00 00    	je     83247fa <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x874>
 8324673:	b8 01 00 00 00       	mov    $0x1,%eax
 8324678:	e9 89 01 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832467d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324680:	89 04 24             	mov    %eax,(%esp)
 8324683:	e8 30 5c db ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8324688:	83 f8 0e             	cmp    $0xe,%eax
 832468b:	0f 9e c0             	setle  %al
 832468e:	84 c0                	test   %al,%al
 8324690:	74 0a                	je     832469c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x716>
 8324692:	b8 00 00 00 00       	mov    $0x0,%eax
 8324697:	e9 6a 01 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832469c:	b8 01 00 00 00       	mov    $0x1,%eax
 83246a1:	e9 60 01 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83246a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 83246a9:	89 04 24             	mov    %eax,(%esp)
 83246ac:	e8 8b ac f0 ff       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 83246b1:	83 f8 ff             	cmp    $0xffffffff,%eax
 83246b4:	0f 94 c0             	sete   %al
 83246b7:	84 c0                	test   %al,%al
 83246b9:	0f 84 3e 01 00 00    	je     83247fd <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x877>
 83246bf:	b8 01 00 00 00       	mov    $0x1,%eax
 83246c4:	e9 3d 01 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83246c9:	e8 b3 7a da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 83246ce:	8b 80 a8 01 00 00    	mov    0x1a8(%eax),%eax
 83246d4:	83 f8 02             	cmp    $0x2,%eax
 83246d7:	0f 94 c0             	sete   %al
 83246da:	84 c0                	test   %al,%al
 83246dc:	74 0a                	je     83246e8 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x762>
 83246de:	b8 00 00 00 00       	mov    $0x0,%eax
 83246e3:	e9 1e 01 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83246e8:	e8 94 7a da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 83246ed:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 83246f3:	83 f8 0b             	cmp    $0xb,%eax
 83246f6:	74 0c                	je     8324704 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x77e>
 83246f8:	83 f8 0c             	cmp    $0xc,%eax
 83246fb:	74 1b                	je     8324718 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x792>
 83246fd:	83 f8 05             	cmp    $0x5,%eax
 8324700:	74 0c                	je     832470e <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x788>
 8324702:	eb 1e                	jmp    8324722 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x79c>
 8324704:	b8 00 00 00 00       	mov    $0x0,%eax
 8324709:	e9 f8 00 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832470e:	b8 00 00 00 00       	mov    $0x0,%eax
 8324713:	e9 ee 00 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324718:	b8 00 00 00 00       	mov    $0x0,%eax
 832471d:	e9 e4 00 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324722:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324725:	89 04 24             	mov    %eax,(%esp)
 8324728:	e8 33 c1 f0 ff       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 832472d:	3c 14                	cmp    $0x14,%al
 832472f:	0f 96 c0             	setbe  %al
 8324732:	84 c0                	test   %al,%al
 8324734:	0f 84 c6 00 00 00    	je     8324800 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87a>
 832473a:	b8 01 00 00 00       	mov    $0x1,%eax
 832473f:	e9 c2 00 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324744:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324747:	89 04 24             	mov    %eax,(%esp)
 832474a:	e8 2f 5b db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 832474f:	89 04 24             	mov    %eax,(%esp)
 8324752:	e8 a5 8f f0 ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 8324757:	89 45 f4             	mov    %eax,-0xc(%ebp)
 832475a:	8b 45 14             	mov    0x14(%ebp),%eax
 832475d:	3d c8 97 28 00       	cmp    $0x2897c8,%eax
 8324762:	74 09                	je     832476d <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x7e7>
 8324764:	3d c9 97 28 00       	cmp    $0x2897c9,%eax
 8324769:	74 14                	je     832477f <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x7f9>
 832476b:	eb 21                	jmp    832478e <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x808>
 832476d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8324771:	75 0a                	jne    832477d <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x7f7>
 8324773:	b8 01 00 00 00       	mov    $0x1,%eax
 8324778:	e9 89 00 00 00       	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832477d:	eb 16                	jmp    8324795 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x80f>
 832477f:	83 7d f4 08          	cmpl   $0x8,-0xc(%ebp)
 8324783:	75 07                	jne    832478c <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x806>
 8324785:	b8 01 00 00 00       	mov    $0x1,%eax
 832478a:	eb 7a                	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 832478c:	eb 07                	jmp    8324795 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x80f>
 832478e:	b8 00 00 00 00       	mov    $0x0,%eax
 8324793:	eb 71                	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 8324795:	eb 6a                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 8324797:	8b 45 0c             	mov    0xc(%ebp),%eax
 832479a:	89 04 24             	mov    %eax,(%esp)
 832479d:	e8 7e 97 dd ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 83247a2:	83 f8 09             	cmp    $0x9,%eax
 83247a5:	0f 94 c0             	sete   %al
 83247a8:	84 c0                	test   %al,%al
 83247aa:	74 07                	je     83247b3 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x82d>
 83247ac:	b8 00 00 00 00       	mov    $0x0,%eax
 83247b1:	eb 53                	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83247b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83247b6:	89 04 24             	mov    %eax,(%esp)
 83247b9:	e8 62 97 dd ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 83247be:	83 f8 0a             	cmp    $0xa,%eax
 83247c1:	0f 94 c0             	sete   %al
 83247c4:	84 c0                	test   %al,%al
 83247c6:	74 07                	je     83247cf <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x849>
 83247c8:	b8 00 00 00 00       	mov    $0x0,%eax
 83247cd:	eb 37                	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83247cf:	8b 45 14             	mov    0x14(%ebp),%eax
 83247d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 83247d6:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 83247dd:	00 
 83247de:	8b 45 0c             	mov    0xc(%ebp),%eax
 83247e1:	89 04 24             	mov    %eax,(%esp)
 83247e4:	e8 d3 ae 36 00       	call   868f6bc <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj>
 83247e9:	eb 1b                	jmp    8324806 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x880>
 83247eb:	90                   	nop
 83247ec:	eb 13                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247ee:	90                   	nop
 83247ef:	eb 10                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247f1:	90                   	nop
 83247f2:	eb 0d                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247f4:	90                   	nop
 83247f5:	eb 0a                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247f7:	90                   	nop
 83247f8:	eb 07                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247fa:	90                   	nop
 83247fb:	eb 04                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 83247fd:	90                   	nop
 83247fe:	eb 01                	jmp    8324801 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht+0x87b>
 8324800:	90                   	nop
 8324801:	b8 00 00 00 00       	mov    $0x0,%eax
 8324806:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 832480c:	5b                   	pop    %ebx
 832480d:	5d                   	pop    %ebp
 832480e:	c3                   	ret
 832480f:	90                   	nop

```

```c
// WongWork::CCeraShop::_CheckBuyingCondition @ 0x8323f86

/* WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int,
   unsigned short, unsigned char, unsigned short) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckBuyingCondition
          (CCeraShop *this,CUser *param_1,uint param_2,ulong param_3,uint param_4,ushort param_5,
          uchar param_6,ushort param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  CDataManager *this_00;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *pvVar4;
  uint uVar5;
  int iVar6;
  CCargo *pCVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  undefined2 local_5d;
  undefined4 uStack_5b;
  undefined2 uStack_57;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  int local_20;
  CEquipItem *local_1c;
  int local_18;
  
  local_20 = 0;
  if (param_2 == 0x1adbd) {
    local_20 = 1;
  }
  else if (param_2 == 0x1c13c) {
    local_20 = 3;
  }
  if (param_3 != 1) {
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CEquipItem *)CDataManager::find_item(this_00,param_3);
    if (local_1c == (CEquipItem *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
    if (cVar2 != '\0') {
      if (param_7 == 0) {
LAB_0832403b:
        bVar1 = true;
      }
      else {
        pvVar4 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                 CEquipItem::getAvatarTypeSelect(local_1c);
        uVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size(pvVar4)
        ;
        if (uVar5 <= param_7) goto LAB_0832403b;
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
      if (param_7 != param_5) {
        return 0;
      }
      pvVar4 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
               CEquipItem::getAvatarTypeSelect(local_1c);
      iVar6 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::at
                        (pvVar4,(uint)param_7);
      local_18 = *(int *)(iVar6 + 0x10);
      if ((param_5 != 4) && (local_18 != 0)) {
        return 0;
      }
    }
  }
  if (param_3 < 0x34a) {
    if (0x346 < param_3) goto LAB_083241ae;
    if (param_3 < 0x44) {
      if (param_3 < 0x3f) {
        if (param_3 == 0x33) {
LAB_0832419c:
          local_20 = 5;
        }
        else if (param_3 < 0x34) {
          if (param_3 == 0x32) {
LAB_08324193:
            local_20 = 4;
          }
        }
        else if (0x38 < param_3) goto LAB_08324193;
      }
      else {
LAB_083241a5:
        local_20 = 6;
      }
    }
    else if (param_3 < 0xc1) {
      if (param_3 < 0xbe) {
        if (param_3 - 0x45 < 5) goto LAB_083241a5;
      }
      else {
LAB_083241ae:
        local_20 = 0xb;
      }
    }
    else if ((param_3 == 0x2e4) || (param_3 == 0x335)) goto LAB_083241ae;
  }
  else {
    if (0x28978c < param_3) {
      if (param_3 < 0x2897ca) {
        if (param_3 < 0x2897c8) {
          if (param_3 == 0x28978f) {
            local_20 = 0xc;
          }
        }
        else {
          local_20 = 0xd;
        }
      }
      else if ((0x28995c < param_3) && ((param_3 < 0x28995f || (param_3 == 0x2899ab)))) {
        local_20 = 0x10;
      }
      goto LAB_083241d0;
    }
    if (0x28978a < param_3) goto LAB_08324193;
    if (param_3 == 0x1ee2) goto LAB_083241ae;
    if (param_3 < 0x1ee3) {
      if (param_3 == 0x3a0) goto LAB_083241ae;
    }
    else {
      if (param_3 == 0x2896cb) goto LAB_083241ae;
      if (param_3 == 0x28978a) goto LAB_0832419c;
    }
  }
LAB_083241d0:
  if (local_20 == 0) {
    return 1;
  }
  switch(local_20) {
  case 1:
    uVar9 = _CheckConditionPutonAvatar(this,param_1);
    return uVar9;
  case 3:
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventStartTime = 0x4589a450;
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventEndTime = 0x45ae8e50;
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if ((iVar6 < _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
                 ::eventStartTime) ||
       (iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1),
       _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
       ::eventEndTime <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    break;
  case 4:
    pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    iVar6 = CCargo::GetCapacity(pCVar7);
    if (param_3 == 0x3c) {
      if (iVar6 == 0x48) {
        return 1;
      }
    }
    else if (param_3 < 0x3d) {
      if (param_3 == 0x39) {
        if (iVar6 == 0x18) {
          return 1;
        }
      }
      else if (param_3 < 0x3a) {
        if ((param_3 == 0x32) && (iVar6 == 8)) {
          return 1;
        }
      }
      else if (param_3 == 0x3a) {
        if (iVar6 == 0x28) {
          return 1;
        }
      }
      else if ((param_3 == 0x3b) && (iVar6 == 0x38)) {
        return 1;
      }
    }
    else if (param_3 == 0x3e) {
      if (iVar6 == 0x68) {
        return 1;
      }
    }
    else if (param_3 < 0x3e) {
      if (iVar6 == 0x58) {
        return 1;
      }
    }
    else if (param_3 == 0x28978b) {
      if (iVar6 == 0x78) {
        return 1;
      }
    }
    else if ((param_3 == 0x28978c) && (iVar6 == 0x88)) {
      return 1;
    }
    break;
  case 5:
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::check_item_exist(pCVar8,param_3);
    if (iVar6 == -1) {
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,param_3);
      if (iVar6 != -1) goto LAB_083243d5;
      bVar1 = true;
    }
    else {
LAB_083243d5:
      bVar1 = false;
    }
    if (bVar1) {
      Inven_Item::Inven_Item((Inven_Item *)&local_5d);
      uStack_5b = param_3;
      iVar6 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar6 + 0xc),0,&local_5d,1);
      uVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::tryInsertItemIntoInventory
                        (uVar9,CONCAT22((undefined2)uStack_5b,local_5d),
                         CONCAT22(uStack_57,uStack_5b._2_2_),local_55,local_51,local_4d,local_49,
                         local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,
                         local_25,local_21);
      if (-1 < iVar6) {
        return 1;
      }
    }
    break;
  case 6:
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventStartTime = 0x46a7b9d0;
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventEndTime = 0x46d5de50;
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if ((iVar6 < _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
                 ::eventStartTime) ||
       (iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1),
       _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
       ::eventEndTime <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::check_item_exist(pCVar8,0x65d6);
    if (iVar6 == -1) {
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d6);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d7);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d7);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d8);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d8);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d9);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d9);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65da);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65da);
      if (iVar6 != -1) goto LAB_08324666;
      bVar1 = true;
    }
    else {
LAB_08324666:
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    break;
  case 8:
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (0xe < iVar6) {
      return 1;
    }
    return 0;
  case 0xb:
    iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar6 == -1) {
      return 1;
    }
    break;
  case 0xc:
    iVar6 = G_CEnvironment();
    if (*(int *)(iVar6 + 0x1a8) == 2) {
      return 0;
    }
    iVar6 = G_CEnvironment();
    iVar6 = *(int *)(iVar6 + 0x378);
    if (iVar6 == 0xb) {
      return 0;
    }
    if (iVar6 == 0xc) {
      return 0;
    }
    if (iVar6 == 5) {
      return 0;
    }
    bVar3 = CUser::getCharacSlotLimit(param_1);
    if (bVar3 < 0x15) {
      return 1;
    }
    break;
  case 0xd:
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::get_inventory_capacity(pCVar8);
    if (param_3 == 0x2897c8) {
      if (iVar6 == 0) {
        return 1;
      }
    }
    else {
      if (param_3 != 0x2897c9) {
        return 0;
      }
      if (iVar6 == 8) {
        return 1;
      }
    }
    break;
  case 0x10:
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 == 9) {
      return 0;
    }
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 != 10) {
      uVar9 = CUser::verifyStackableItemActionPlace(param_1,0x2e,param_3);
      return uVar9;
    }
    return 0;
  }
  return 0;
}

```

---

## _CheckBuyingCondition_08324810

```asm
// === 08324810 WongWork::CCeraShop::_CheckBuyingCondition  [0x08324810-0x8324965] ===
 8324810:	55                   	push   %ebp
 8324811:	89 e5                	mov    %esp,%ebp
 8324813:	57                   	push   %edi
 8324814:	56                   	push   %esi
 8324815:	53                   	push   %ebx
 8324816:	83 ec 4c             	sub    $0x4c,%esp
 8324819:	8b 4d 18             	mov    0x18(%ebp),%ecx
 832481c:	8b 55 1c             	mov    0x1c(%ebp),%edx
 832481f:	8b 45 20             	mov    0x20(%ebp),%eax
 8324822:	88 4d d4             	mov    %cl,-0x2c(%ebp)
 8324825:	66 89 55 d0          	mov    %dx,-0x30(%ebp)
 8324829:	88 45 cc             	mov    %al,-0x34(%ebp)
 832482c:	8b 45 10             	mov    0x10(%ebp),%eax
 832482f:	89 04 24             	mov    %eax,(%esp)
 8324832:	e8 11 58 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 8324837:	83 f8 01             	cmp    $0x1,%eax
 832483a:	75 0d                	jne    8324849 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x39>
 832483c:	80 7d cc 00          	cmpb   $0x0,-0x34(%ebp)
 8324840:	75 07                	jne    8324849 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x39>
 8324842:	b8 01 00 00 00       	mov    $0x1,%eax
 8324847:	eb 05                	jmp    832484e <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x3e>
 8324849:	b8 00 00 00 00       	mov    $0x0,%eax
 832484e:	84 c0                	test   %al,%al
 8324850:	0f 84 87 00 00 00    	je     83248dd <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0xcd>
 8324856:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324859:	89 04 24             	mov    %eax,(%esp)
 832485c:	e8 1d 5a db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8324861:	89 04 24             	mov    %eax,(%esp)
 8324864:	e8 21 8e f0 ff       	call   822d68a <_ZNK10CInventory7GetCoinEv>
 8324869:	89 c3                	mov    %eax,%ebx
 832486b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832486e:	89 04 24             	mov    %eax,(%esp)
 8324871:	e8 08 5a db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8324876:	89 04 24             	mov    %eax,(%esp)
 8324879:	e8 b0 7e e8 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 832487e:	01 c3                	add    %eax,%ebx
 8324880:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324883:	89 04 24             	mov    %eax,(%esp)
 8324886:	e8 f3 59 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 832488b:	89 04 24             	mov    %eax,(%esp)
 832488e:	e8 e7 c3 de ff       	call   8110c7a <_ZNK10CInventory12GetEventCoinEv>
 8324893:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8324896:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8324899:	8b 45 10             	mov    0x10(%ebp),%eax
 832489c:	89 04 24             	mov    %eax,(%esp)
 832489f:	e8 5c 57 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 83248a4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83248a7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83248aa:	8b 55 e0             	mov    -0x20(%ebp),%edx
 83248ad:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83248b0:	3d a0 86 01 00       	cmp    $0x186a0,%eax
 83248b5:	7e 13                	jle    83248ca <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0xba>
 83248b7:	8b 45 24             	mov    0x24(%ebp),%eax
 83248ba:	c7 00 4f 00 00 00    	movl   $0x4f,(%eax)
 83248c0:	b8 00 00 00 00       	mov    $0x0,%eax
 83248c5:	e9 93 00 00 00       	jmp    832495d <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x14d>
 83248ca:	8b 45 24             	mov    0x24(%ebp),%eax
 83248cd:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 83248d3:	b8 01 00 00 00       	mov    $0x1,%eax
 83248d8:	e9 80 00 00 00       	jmp    832495d <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x14d>
 83248dd:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 83248e1:	0f b7 45 d0          	movzwl -0x30(%ebp),%eax
 83248e5:	89 45 c8             	mov    %eax,-0x38(%ebp)
 83248e8:	0f b6 7d d4          	movzbl -0x2c(%ebp),%edi
 83248ec:	8b 45 10             	mov    0x10(%ebp),%eax
 83248ef:	89 04 24             	mov    %eax,(%esp)
 83248f2:	e8 cd 37 00 00       	call   83280c4 <_ZNK14CCeraShopGoods13GetExpiryDateEv>
 83248f7:	0f b7 f0             	movzwl %ax,%esi
 83248fa:	8b 45 10             	mov    0x10(%ebp),%eax
 83248fd:	89 04 24             	mov    %eax,(%esp)
 8324900:	e8 fb 56 e5 ff       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8324905:	89 c3                	mov    %eax,%ebx
 8324907:	8b 45 10             	mov    0x10(%ebp),%eax
 832490a:	89 04 24             	mov    %eax,(%esp)
 832490d:	e8 e4 56 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8324912:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8324915:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8324919:	89 7c 24 18          	mov    %edi,0x18(%esp)
 832491d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8324921:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8324925:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8324929:	8b 45 14             	mov    0x14(%ebp),%eax
 832492c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8324930:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324933:	89 44 24 04          	mov    %eax,0x4(%esp)
 8324937:	8b 45 08             	mov    0x8(%ebp),%eax
 832493a:	89 04 24             	mov    %eax,(%esp)
 832493d:	e8 44 f6 ff ff       	call   8323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>
 8324942:	88 45 df             	mov    %al,-0x21(%ebp)
 8324945:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8324949:	83 f0 01             	xor    $0x1,%eax
 832494c:	84 c0                	test   %al,%al
 832494e:	74 09                	je     8324959 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi+0x149>
 8324950:	8b 45 24             	mov    0x24(%ebp),%eax
 8324953:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
 8324959:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 832495d:	83 c4 4c             	add    $0x4c,%esp
 8324960:	5b                   	pop    %ebx
 8324961:	5e                   	pop    %esi
 8324962:	5f                   	pop    %edi
 8324963:	5d                   	pop    %ebp
 8324964:	c3                   	ret
 8324965:	90                   	nop

```

```c
// WongWork::CCeraShop::_CheckBuyingCondition @ 0x8324810

/* WongWork::CCeraShop::_CheckBuyingCondition(CUser*, CCeraShopGoods const*, unsigned int, unsigned
   char, unsigned short, char, int&) */

char __thiscall
WongWork::CCeraShop::_CheckBuyingCondition
          (CCeraShop *this,CUser *param_1,CCeraShopGoods *param_2,uint param_3,uchar param_4,
          ushort param_5,char param_6,int *param_7)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  CInventory *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  iVar4 = CCeraShopGoods::GetGroupIdx(param_2);
  if ((iVar4 == 1) && (param_6 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar4 = CInventory::GetCoin(pCVar5);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::GetPayCoin(pCVar5);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar7 = CInventory::GetEventCoin(pCVar5);
    iVar8 = CCeraShopGoods::GetStackCount(param_2);
    if (iVar4 + iVar6 + iVar7 + iVar8 < 0x186a1) {
      *param_7 = 0;
      cVar2 = '\x01';
    }
    else {
      *param_7 = 0x4f;
      cVar2 = '\0';
    }
  }
  else {
    uVar3 = CCeraShopGoods::GetExpiryDate(param_2);
    uVar9 = CCeraShopGoods::GetStackCount(param_2);
    uVar10 = CCeraShopGoods::GetItemIdx(param_2);
    cVar2 = _CheckBuyingCondition(this,param_1,param_3,uVar10,uVar9,uVar3,param_4,param_5);
    if (cVar2 != '\x01') {
      *param_7 = 8;
    }
  }
  return cVar2;
}

```

---

## _CheckConditionPutonAvatar

```asm
// === 08324966 WongWork::CCeraShop::_CheckConditionPutonAvatar  [0x08324966-0x8324a1d] ===
 8324966:	55                   	push   %ebp
 8324967:	89 e5                	mov    %esp,%ebp
 8324969:	83 ec 28             	sub    $0x28,%esp
 832496c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8324973:	eb 41                	jmp    83249b6 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0x50>
 8324975:	8b 45 0c             	mov    0xc(%ebp),%eax
 8324978:	89 04 24             	mov    %eax,(%esp)
 832497b:	e8 fe 58 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8324980:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8324983:	89 54 24 08          	mov    %edx,0x8(%esp)
 8324987:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832498e:	00 
 832498f:	89 04 24             	mov    %eax,(%esp)
 8324992:	e8 47 78 1d 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 8324997:	89 45 ec             	mov    %eax,-0x14(%ebp)
 832499a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 832499e:	74 11                	je     83249b1 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0x4b>
 83249a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83249a3:	8b 40 02             	mov    0x2(%eax),%eax
 83249a6:	85 c0                	test   %eax,%eax
 83249a8:	74 08                	je     83249b2 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0x4c>
 83249aa:	b8 01 00 00 00       	mov    $0x1,%eax
 83249af:	eb 6a                	jmp    8324a1b <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xb5>
 83249b1:	90                   	nop
 83249b2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 83249b6:	83 7d e8 09          	cmpl   $0x9,-0x18(%ebp)
 83249ba:	0f 9e c0             	setle  %al
 83249bd:	84 c0                	test   %al,%al
 83249bf:	75 b4                	jne    8324975 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xf>
 83249c1:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83249c8:	eb 41                	jmp    8324a0b <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xa5>
 83249ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 83249cd:	89 04 24             	mov    %eax,(%esp)
 83249d0:	e8 a9 58 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 83249d5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 83249d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 83249dc:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83249e3:	00 
 83249e4:	89 04 24             	mov    %eax,(%esp)
 83249e7:	e8 f2 77 1d 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 83249ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83249ef:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 83249f3:	74 11                	je     8324a06 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xa0>
 83249f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83249f8:	8b 40 02             	mov    0x2(%eax),%eax
 83249fb:	85 c0                	test   %eax,%eax
 83249fd:	74 08                	je     8324a07 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xa1>
 83249ff:	b8 01 00 00 00       	mov    $0x1,%eax
 8324a04:	eb 15                	jmp    8324a1b <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0xb5>
 8324a06:	90                   	nop
 8324a07:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8324a0b:	83 7d f0 68          	cmpl   $0x68,-0x10(%ebp)
 8324a0f:	0f 9e c0             	setle  %al
 8324a12:	84 c0                	test   %al,%al
 8324a14:	75 b4                	jne    83249ca <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser+0x64>
 8324a16:	b8 00 00 00 00       	mov    $0x0,%eax
 8324a1b:	c9                   	leave
 8324a1c:	c3                   	ret
 8324a1d:	90                   	nop

```

```c
// WongWork::CCeraShop::_CheckConditionPutonAvatar @ 0x8324966

/* WongWork::CCeraShop::_CheckConditionPutonAvatar(CUser*) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckConditionPutonAvatar(CCeraShop *this,CUser *param_1)

{
  CInventory *pCVar1;
  int iVar2;
  int local_1c;
  int local_14;
  
  local_1c = 0;
  while( true ) {
    if (9 < local_1c) {
      local_14 = 0;
      while( true ) {
        if (0x68 < local_14) {
          return 0;
        }
        pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar2 = CInventory::GetInvenRef(pCVar1,2,local_14);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) break;
        local_14 = local_14 + 1;
      }
      return 1;
    }
    pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar2 = CInventory::GetInvenRef(pCVar1,0,local_1c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 2) != 0)) break;
    local_1c = local_1c + 1;
  }
  return 1;
}

```

---

## _CheckValidCount

```asm
// === 08323af4 WongWork::CCeraShop::_CheckValidCount  [0x08323af4-0x8323f29] ===
 8323af4:	55                   	push   %ebp
 8323af5:	89 e5                	mov    %esp,%ebp
 8323af7:	57                   	push   %edi
 8323af8:	56                   	push   %esi
 8323af9:	53                   	push   %ebx
 8323afa:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 8323b00:	8d 9d 5c ff ff ff    	lea    -0xa4(%ebp),%ebx
 8323b06:	b8 00 00 00 00       	mov    $0x0,%eax
 8323b0b:	ba 0f 00 00 00       	mov    $0xf,%edx
 8323b10:	89 df                	mov    %ebx,%edi
 8323b12:	89 d1                	mov    %edx,%ecx
 8323b14:	f3 ab                	rep stos %eax,%es:(%edi)
 8323b16:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8323b1d:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8323b24:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8323b2b:	e9 a3 01 00 00       	jmp    8323cd3 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1df>
 8323b30:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323b33:	c1 e0 02             	shl    $0x2,%eax
 8323b36:	03 45 0c             	add    0xc(%ebp),%eax
 8323b39:	8b 00                	mov    (%eax),%eax
 8323b3b:	85 c0                	test   %eax,%eax
 8323b3d:	0f 84 a1 01 00 00    	je     8323ce4 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1f0>
 8323b43:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323b46:	83 c0 01             	add    $0x1,%eax
 8323b49:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8323b4c:	e9 b8 00 00 00       	jmp    8323c09 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x115>
 8323b51:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8323b54:	c1 e0 02             	shl    $0x2,%eax
 8323b57:	03 45 0c             	add    0xc(%ebp),%eax
 8323b5a:	8b 00                	mov    (%eax),%eax
 8323b5c:	85 c0                	test   %eax,%eax
 8323b5e:	0f 84 b6 00 00 00    	je     8323c1a <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x126>
 8323b64:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323b67:	c1 e0 02             	shl    $0x2,%eax
 8323b6a:	03 45 0c             	add    0xc(%ebp),%eax
 8323b6d:	8b 00                	mov    (%eax),%eax
 8323b6f:	89 04 24             	mov    %eax,(%esp)
 8323b72:	e8 7f 64 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8323b77:	89 c3                	mov    %eax,%ebx
 8323b79:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8323b7c:	c1 e0 02             	shl    $0x2,%eax
 8323b7f:	03 45 0c             	add    0xc(%ebp),%eax
 8323b82:	8b 00                	mov    (%eax),%eax
 8323b84:	89 04 24             	mov    %eax,(%esp)
 8323b87:	e8 6a 64 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8323b8c:	39 c3                	cmp    %eax,%ebx
 8323b8e:	0f 94 c0             	sete   %al
 8323b91:	84 c0                	test   %al,%al
 8323b93:	74 70                	je     8323c05 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x111>
 8323b95:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323b98:	c1 e0 02             	shl    $0x2,%eax
 8323b9b:	03 45 0c             	add    0xc(%ebp),%eax
 8323b9e:	8b 00                	mov    (%eax),%eax
 8323ba0:	89 04 24             	mov    %eax,(%esp)
 8323ba3:	e8 a0 64 e5 ff       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 8323ba8:	83 f8 03             	cmp    $0x3,%eax
 8323bab:	74 13                	je     8323bc0 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0xcc>
 8323bad:	83 f8 07             	cmp    $0x7,%eax
 8323bb0:	74 04                	je     8323bb6 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0xc2>
 8323bb2:	85 c0                	test   %eax,%eax
 8323bb4:	75 4f                	jne    8323c05 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x111>
 8323bb6:	bb 00 00 00 00       	mov    $0x0,%ebx
 8323bbb:	e9 5c 03 00 00       	jmp    8323f1c <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x428>
 8323bc0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323bc3:	c1 e0 02             	shl    $0x2,%eax
 8323bc6:	03 45 0c             	add    0xc(%ebp),%eax
 8323bc9:	8b 00                	mov    (%eax),%eax
 8323bcb:	89 04 24             	mov    %eax,(%esp)
 8323bce:	e8 23 64 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8323bd3:	89 c3                	mov    %eax,%ebx
 8323bd5:	e8 c1 85 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8323bda:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8323bde:	89 04 24             	mov    %eax,(%esp)
 8323be1:	e8 4c be 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8323be6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8323be9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8323bec:	89 04 24             	mov    %eax,(%esp)
 8323bef:	e8 06 d7 dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8323bf4:	83 f0 01             	xor    $0x1,%eax
 8323bf7:	84 c0                	test   %al,%al
 8323bf9:	74 0a                	je     8323c05 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x111>
 8323bfb:	bb 00 00 00 00       	mov    $0x0,%ebx
 8323c00:	e9 17 03 00 00       	jmp    8323f1c <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x428>
 8323c05:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8323c09:	83 7d d8 22          	cmpl   $0x22,-0x28(%ebp)
 8323c0d:	0f 9e c0             	setle  %al
 8323c10:	84 c0                	test   %al,%al
 8323c12:	0f 85 39 ff ff ff    	jne    8323b51 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x5d>
 8323c18:	eb 01                	jmp    8323c1b <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x127>
 8323c1a:	90                   	nop
 8323c1b:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 8323c1f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8323c22:	c1 e0 02             	shl    $0x2,%eax
 8323c25:	03 45 0c             	add    0xc(%ebp),%eax
 8323c28:	8b 00                	mov    (%eax),%eax
 8323c2a:	89 04 24             	mov    %eax,(%esp)
 8323c2d:	e8 c4 63 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8323c32:	8b 15 44 f7 41 09    	mov    0x941f744,%edx
 8323c38:	8d 4d ab             	lea    -0x55(%ebp),%ecx
 8323c3b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8323c3f:	8d 4d b8             	lea    -0x48(%ebp),%ecx
 8323c42:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8323c46:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 8323c49:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8323c4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323c51:	89 14 24             	mov    %edx,(%esp)
 8323c54:	e8 c5 0d 00 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8323c59:	83 f0 01             	xor    $0x1,%eax
 8323c5c:	84 c0                	test   %al,%al
 8323c5e:	75 6e                	jne    8323cce <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1da>
 8323c60:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8323c63:	8b 94 85 5c ff ff ff 	mov    -0xa4(%ebp,%eax,4),%edx
 8323c6a:	83 c2 01             	add    $0x1,%edx
 8323c6d:	89 94 85 5c ff ff ff 	mov    %edx,-0xa4(%ebp,%eax,4)
 8323c74:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8323c78:	84 c0                	test   %al,%al
 8323c7a:	74 53                	je     8323ccf <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1db>
 8323c7c:	8b 5d bc             	mov    -0x44(%ebp),%ebx
 8323c7f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8323c82:	8b 84 85 5c ff ff ff 	mov    -0xa4(%ebp,%eax,4),%eax
 8323c89:	83 e8 01             	sub    $0x1,%eax
 8323c8c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8323c8f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8323c92:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 8323c98:	c1 e2 02             	shl    $0x2,%edx
 8323c9b:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8323c9e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8323ca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323ca5:	89 14 24             	mov    %edx,(%esp)
 8323ca8:	e8 6b a5 d6 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8323cad:	c7 45 c4 01 00 00 00 	movl   $0x1,-0x3c(%ebp)
 8323cb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323cb8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8323cbb:	89 04 24             	mov    %eax,(%esp)
 8323cbe:	e8 4b bc db ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 8323cc3:	8b 00                	mov    (%eax),%eax
 8323cc5:	89 84 9d 5c ff ff ff 	mov    %eax,-0xa4(%ebp,%ebx,4)
 8323ccc:	eb 01                	jmp    8323ccf <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1db>
 8323cce:	90                   	nop
 8323ccf:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8323cd3:	83 7d d4 22          	cmpl   $0x22,-0x2c(%ebp)
 8323cd7:	0f 9e c0             	setle  %al
 8323cda:	84 c0                	test   %al,%al
 8323cdc:	0f 85 4e fe ff ff    	jne    8323b30 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x3c>
 8323ce2:	eb 01                	jmp    8323ce5 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1f1>
 8323ce4:	90                   	nop
 8323ce5:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 8323cec:	eb 1d                	jmp    8323d0b <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x217>
 8323cee:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8323cf1:	8b 84 85 5c ff ff ff 	mov    -0xa4(%ebp,%eax,4),%eax
 8323cf8:	83 f8 01             	cmp    $0x1,%eax
 8323cfb:	7e 0a                	jle    8323d07 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x213>
 8323cfd:	bb 00 00 00 00       	mov    $0x0,%ebx
 8323d02:	e9 15 02 00 00       	jmp    8323f1c <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x428>
 8323d07:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8323d0b:	83 7d e0 0e          	cmpl   $0xe,-0x20(%ebp)
 8323d0f:	0f 9e c0             	setle  %al
 8323d12:	84 c0                	test   %al,%al
 8323d14:	75 d8                	jne    8323cee <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x1fa>
 8323d16:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8323d19:	89 04 24             	mov    %eax,(%esp)
 8323d1c:	e8 69 45 00 00       	call   832828a <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EEC1Ev>
 8323d21:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8323d28:	e9 47 01 00 00       	jmp    8323e74 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x380>
 8323d2d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8323d30:	c1 e0 02             	shl    $0x2,%eax
 8323d33:	03 45 0c             	add    0xc(%ebp),%eax
 8323d36:	8b 00                	mov    (%eax),%eax
 8323d38:	85 c0                	test   %eax,%eax
 8323d3a:	0f 84 2f 01 00 00    	je     8323e6f <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x37b>
 8323d40:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8323d43:	c1 e0 02             	shl    $0x2,%eax
 8323d46:	03 45 0c             	add    0xc(%ebp),%eax
 8323d49:	8b 00                	mov    (%eax),%eax
 8323d4b:	89 04 24             	mov    %eax,(%esp)
 8323d4e:	e8 7d 43 00 00       	call   83280d0 <_ZNK14CCeraShopGoods14isStackBuyableEv>
 8323d53:	83 f0 01             	xor    $0x1,%eax
 8323d56:	84 c0                	test   %al,%al
 8323d58:	75 2d                	jne    8323d87 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x293>
 8323d5a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8323d5d:	c1 e0 02             	shl    $0x2,%eax
 8323d60:	03 45 0c             	add    0xc(%ebp),%eax
 8323d63:	8b 00                	mov    (%eax),%eax
 8323d65:	89 04 24             	mov    %eax,(%esp)
 8323d68:	e8 89 62 e5 ff       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8323d6d:	89 c3                	mov    %eax,%ebx
 8323d6f:	e8 27 84 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8323d74:	8b 40 0c             	mov    0xc(%eax),%eax
 8323d77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8323d7b:	89 04 24             	mov    %eax,(%esp)
 8323d7e:	e8 89 63 e5 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8323d83:	85 c0                	test   %eax,%eax
 8323d85:	74 07                	je     8323d8e <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x29a>
 8323d87:	b8 01 00 00 00       	mov    $0x1,%eax
 8323d8c:	eb 05                	jmp    8323d93 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x29f>
 8323d8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8323d93:	84 c0                	test   %al,%al
 8323d95:	0f 84 d5 00 00 00    	je     8323e70 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x37c>
 8323d9b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323d9e:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8323da1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8323da5:	89 04 24             	mov    %eax,(%esp)
 8323da8:	e8 4f 45 00 00       	call   83282fc <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EE5beginEv>
 8323dad:	83 ec 04             	sub    $0x4,%esp
 8323db0:	8d 45 98             	lea    -0x68(%ebp),%eax
 8323db3:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8323db6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8323dba:	89 04 24             	mov    %eax,(%esp)
 8323dbd:	e8 5e 45 00 00       	call   8328320 <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EE3endEv>
 8323dc2:	83 ec 04             	sub    $0x4,%esp
 8323dc5:	eb 42                	jmp    8323e09 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x315>
 8323dc7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323dca:	89 04 24             	mov    %eax,(%esp)
 8323dcd:	e8 b6 45 00 00       	call   8328388 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEptEv>
 8323dd2:	8b 10                	mov    (%eax),%edx
 8323dd4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8323dd7:	c1 e0 02             	shl    $0x2,%eax
 8323dda:	03 45 0c             	add    0xc(%ebp),%eax
 8323ddd:	8b 00                	mov    (%eax),%eax
 8323ddf:	39 c2                	cmp    %eax,%edx
 8323de1:	0f 94 c0             	sete   %al
 8323de4:	84 c0                	test   %al,%al
 8323de6:	74 16                	je     8323dfe <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x30a>
 8323de8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323deb:	89 04 24             	mov    %eax,(%esp)
 8323dee:	e8 95 45 00 00       	call   8328388 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEptEv>
 8323df3:	8b 50 04             	mov    0x4(%eax),%edx
 8323df6:	83 c2 01             	add    $0x1,%edx
 8323df9:	89 50 04             	mov    %edx,0x4(%eax)
 8323dfc:	eb 21                	jmp    8323e1f <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x32b>
 8323dfe:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323e01:	89 04 24             	mov    %eax,(%esp)
 8323e04:	e8 69 45 00 00       	call   8328372 <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEppEv>
 8323e09:	8d 45 98             	lea    -0x68(%ebp),%eax
 8323e0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323e10:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323e13:	89 04 24             	mov    %eax,(%esp)
 8323e16:	e8 2b 45 00 00       	call   8328346 <_ZN9__gnu_cxxneIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 8323e1b:	84 c0                	test   %al,%al
 8323e1d:	75 a8                	jne    8323dc7 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x2d3>
 8323e1f:	8d 45 98             	lea    -0x68(%ebp),%eax
 8323e22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323e26:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8323e29:	89 04 24             	mov    %eax,(%esp)
 8323e2c:	e8 61 45 00 00       	call   8328392 <_ZN9__gnu_cxxeqIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 8323e31:	84 c0                	test   %al,%al
 8323e33:	74 3b                	je     8323e70 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x37c>
 8323e35:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 8323e3c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8323e3f:	c1 e0 02             	shl    $0x2,%eax
 8323e42:	03 45 0c             	add    0xc(%ebp),%eax
 8323e45:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8323e48:	89 54 24 08          	mov    %edx,0x8(%esp)
 8323e4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323e50:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8323e53:	89 04 24             	mov    %eax,(%esp)
 8323e56:	e8 63 45 00 00       	call   83283be <_ZNSt4pairIPK14CCeraShopGoodsjEC1IRS2_iEEOT_OT0_>
 8323e5b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8323e5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323e62:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8323e65:	89 04 24             	mov    %eax,(%esp)
 8323e68:	e8 81 45 00 00       	call   83283ee <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EE9push_backEOS4_>
 8323e6d:	eb 01                	jmp    8323e70 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x37c>
 8323e6f:	90                   	nop
 8323e70:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8323e74:	83 7d e4 22          	cmpl   $0x22,-0x1c(%ebp)
 8323e78:	0f 9e c0             	setle  %al
 8323e7b:	84 c0                	test   %al,%al
 8323e7d:	0f 85 aa fe ff ff    	jne    8323d2d <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x239>
 8323e83:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8323e86:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8323e89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8323e8d:	89 04 24             	mov    %eax,(%esp)
 8323e90:	e8 67 44 00 00       	call   83282fc <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EE5beginEv>
 8323e95:	83 ec 04             	sub    $0x4,%esp
 8323e98:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8323e9b:	8d 55 ac             	lea    -0x54(%ebp),%edx
 8323e9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8323ea2:	89 04 24             	mov    %eax,(%esp)
 8323ea5:	e8 76 44 00 00       	call   8328320 <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EE3endEv>
 8323eaa:	83 ec 04             	sub    $0x4,%esp
 8323ead:	eb 2a                	jmp    8323ed9 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x3e5>
 8323eaf:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8323eb2:	89 04 24             	mov    %eax,(%esp)
 8323eb5:	e8 ce 44 00 00       	call   8328388 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEptEv>
 8323eba:	8b 40 04             	mov    0x4(%eax),%eax
 8323ebd:	83 f8 01             	cmp    $0x1,%eax
 8323ec0:	0f 97 c0             	seta   %al
 8323ec3:	84 c0                	test   %al,%al
 8323ec5:	74 07                	je     8323ece <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x3da>
 8323ec7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8323ecc:	eb 43                	jmp    8323f11 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x41d>
 8323ece:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8323ed1:	89 04 24             	mov    %eax,(%esp)
 8323ed4:	e8 99 44 00 00       	call   8328372 <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEppEv>
 8323ed9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8323edc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323ee0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8323ee3:	89 04 24             	mov    %eax,(%esp)
 8323ee6:	e8 5b 44 00 00       	call   8328346 <_ZN9__gnu_cxxneIPSt4pairIPK14CCeraShopGoodsjESt6vectorIS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 8323eeb:	84 c0                	test   %al,%al
 8323eed:	75 c0                	jne    8323eaf <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x3bb>
 8323eef:	bb 01 00 00 00       	mov    $0x1,%ebx
 8323ef4:	eb 1b                	jmp    8323f11 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods+0x41d>
 8323ef6:	89 d3                	mov    %edx,%ebx
 8323ef8:	89 c6                	mov    %eax,%esi
 8323efa:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8323efd:	89 04 24             	mov    %eax,(%esp)
 8323f00:	e8 99 43 00 00       	call   832829e <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EED1Ev>
 8323f05:	89 f0                	mov    %esi,%eax
 8323f07:	89 da                	mov    %ebx,%edx
 8323f09:	89 04 24             	mov    %eax,(%esp)
 8323f0c:	e8 3f f8 7b 00       	call   8ae3750 <_Unwind_Resume>
 8323f11:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8323f14:	89 04 24             	mov    %eax,(%esp)
 8323f17:	e8 82 43 00 00       	call   832829e <_ZNSt6vectorISt4pairIPK14CCeraShopGoodsjESaIS4_EED1Ev>
 8323f1c:	89 d8                	mov    %ebx,%eax
 8323f1e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8323f21:	83 c4 00             	add    $0x0,%esp
 8323f24:	5b                   	pop    %ebx
 8323f25:	5e                   	pop    %esi
 8323f26:	5f                   	pop    %edi
 8323f27:	5d                   	pop    %ebp
 8323f28:	c3                   	ret
 8323f29:	90                   	nop

```

```c
// WongWork::CCeraShop::_CheckValidCount @ 0x8323af4

/* WongWork::CCeraShop::_CheckValidCount(CCeraShopGoods const**) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckValidCount(CCeraShop *this,CCeraShopGoods **param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_a8 [15];
  __normal_iterator local_6c [4];
  __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
  local_68 [4];
  __normal_iterator local_64 [4];
  __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
  local_60 [7];
  bool local_59;
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  local_58 [12];
  int local_4c;
  int local_48;
  int local_44 [2];
  pair<CCeraShopGoods_const*,unsigned_int> local_3c [8];
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  int local_24;
  int local_20;
  
  piVar5 = local_a8;
  for (iVar6 = 0xf; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar5 = 0;
    piVar5 = piVar5 + 1;
  }
  local_48 = 0;
  local_4c = 0;
  for (local_30 = 0;
      (local_30 < 0x23 && (iVar6 = local_30, param_1[local_30] != (CCeraShopGoods *)0x0));
      local_30 = local_30 + 1) {
    while ((local_2c = iVar6 + 1, local_2c < 0x23 && (param_1[local_2c] != (CCeraShopGoods *)0x0)))
    {
      iVar4 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
      iVar3 = CCeraShopGoods::GetItemIdx(param_1[local_2c]);
      iVar6 = local_2c;
      if (iVar4 == iVar3) {
        iVar4 = CCeraShopGoods::GetGroupIdx(param_1[local_30]);
        if (iVar4 == 3) {
          iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
          this_00 = (CDataManager *)G_CDataManager();
          local_28 = (CItem *)CDataManager::find_item(this_00,iVar6);
          cVar1 = CItem::is_stackable(local_28);
          iVar6 = local_2c;
          if (cVar1 != '\x01') {
            return 0;
          }
        }
        else if ((iVar4 == 7) || (iVar6 = local_2c, iVar4 == 0)) {
          return 0;
        }
      }
    }
    local_59 = false;
    iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_30]);
    cVar1 = IsSpecialItem(GlobalData::s_pCeraShop,iVar6,&local_48,&local_4c,&local_59);
    if ((cVar1 == '\x01') &&
       (local_a8[local_48] = local_a8[local_48] + 1, iVar6 = local_48, local_59 != false)) {
      local_44[0] = local_a8[local_48] + -1;
      piVar5 = std::max<int>(local_a8 + local_48,local_44);
      local_44[1] = 1;
      piVar5 = std::min<int>(local_44 + 1,piVar5);
      local_a8[iVar6] = *piVar5;
    }
  }
  for (local_24 = 1; local_24 < 0xf; local_24 = local_24 + 1) {
    if (1 < local_a8[local_24]) {
      return 0;
    }
  }
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::vector(local_58);
  for (local_20 = 0; local_20 < 0x23; local_20 = local_20 + 1) {
    if (param_1[local_20] != (CCeraShopGoods *)0x0) {
      cVar1 = CCeraShopGoods::isStackBuyable(param_1[local_20]);
      if (cVar1 == '\x01') {
        iVar6 = CCeraShopGoods::GetItemIdx(param_1[local_20]);
                    /* try { // try from 08323d6f to 08323eea has its CatchHandler @ 08323ef6 */
        iVar4 = G_CDataManager();
        iVar6 = CItemList::GetRestrictCode(*(CItemList **)(iVar4 + 0xc),iVar6);
        if (iVar6 != 0) goto LAB_08323d87;
        bVar2 = false;
      }
      else {
LAB_08323d87:
        bVar2 = true;
      }
      if (bVar2) {
        std::
        vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
        ::begin();
        std::
        vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
        ::end();
        while (bVar2 = __gnu_cxx::operator!=(local_68,local_6c), bVar2) {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
                          ::operator->(local_68);
          if ((CCeraShopGoods *)*piVar5 == param_1[local_20]) {
            iVar6 = __gnu_cxx::
                    __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
                    ::operator->(local_68);
            *(int *)(iVar6 + 4) = *(int *)(iVar6 + 4) + 1;
            break;
          }
          __gnu_cxx::
          __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
          ::operator++(local_68);
        }
        bVar2 = __gnu_cxx::operator==(local_68,local_6c);
        if (bVar2) {
          local_34 = 1;
          std::pair<CCeraShopGoods_const*,unsigned_int>::pair<CCeraShopGoods_const*&,int>
                    (local_3c,param_1 + local_20,&local_34);
          std::
          vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
          ::push_back(local_58,local_3c);
        }
      }
    }
  }
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::begin();
  std::
  vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
  ::end();
  do {
    bVar2 = __gnu_cxx::operator!=(local_60,local_64);
    if (!bVar2) {
      uVar7 = 1;
LAB_08323f11:
      std::
      vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>
      ::~vector(local_58);
      return uVar7;
    }
    iVar6 = __gnu_cxx::
            __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
            ::operator->(local_60);
    if (1 < *(uint *)(iVar6 + 4)) {
      uVar7 = 0;
      goto LAB_08323f11;
    }
    __gnu_cxx::
    __normal_iterator<std::pair<CCeraShopGoods_const*,unsigned_int>*,std::vector<std::pair<CCeraShopGoods_const*,unsigned_int>,std::allocator<std::pair<CCeraShopGoods_const*,unsigned_int>>>>
    ::operator++(local_60);
  } while( true );
}

```

---

## _ClosePremium

```asm
// === 08327bb6 WongWork::CCeraShop::_ClosePremium  [0x08327bb6-0x8327ee5] ===
 8327bb6:	55                   	push   %ebp
 8327bb7:	89 e5                	mov    %esp,%ebp
 8327bb9:	56                   	push   %esi
 8327bba:	53                   	push   %ebx
 8327bbb:	83 ec 50             	sub    $0x50,%esp
 8327bbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327bc1:	89 04 24             	mov    %eax,(%esp)
 8327bc4:	e8 5f 52 e0 ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8327bc9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8327bcc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8327bcf:	89 04 24             	mov    %eax,(%esp)
 8327bd2:	e8 1f 09 00 00       	call   83284f6 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEC1Ev>
 8327bd7:	8b 45 10             	mov    0x10(%ebp),%eax
 8327bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327bde:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8327be1:	89 04 24             	mov    %eax,(%esp)
 8327be4:	e8 69 63 38 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 8327be9:	8b 00                	mov    (%eax),%eax
 8327beb:	85 c0                	test   %eax,%eax
 8327bed:	0f 95 c0             	setne  %al
 8327bf0:	84 c0                	test   %al,%al
 8327bf2:	74 21                	je     8327c15 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x5f>
 8327bf4:	8b 45 10             	mov    0x10(%ebp),%eax
 8327bf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327bfb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8327bfe:	89 04 24             	mov    %eax,(%esp)
 8327c01:	e8 4c 63 38 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 8327c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327c0a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8327c0d:	89 04 24             	mov    %eax,(%esp)
 8327c10:	e8 53 09 00 00       	call   8328568 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE9push_backERKS1_>
 8327c15:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8327c1c:	e8 7d 40 da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8327c21:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8327c24:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8327c27:	83 c0 01             	add    $0x1,%eax
 8327c2a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8327c2d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8327c34:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327c37:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8327c3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327c3e:	89 04 24             	mov    %eax,(%esp)
 8327c41:	e8 96 09 00 00       	call   83285dc <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE5beginEv>
 8327c46:	83 ec 04             	sub    $0x4,%esp
 8327c49:	e9 37 02 00 00       	jmp    8327e85 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x2cf>
 8327c4e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8327c55:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327c58:	89 04 24             	mov    %eax,(%esp)
 8327c5b:	e8 08 0a 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327c60:	8b 10                	mov    (%eax),%edx
 8327c62:	89 d0                	mov    %edx,%eax
 8327c64:	c1 e0 03             	shl    $0x3,%eax
 8327c67:	01 d0                	add    %edx,%eax
 8327c69:	c1 e0 05             	shl    $0x5,%eax
 8327c6c:	8b 80 9c 3a 48 09    	mov    0x9483a9c(%eax),%eax
 8327c72:	83 f8 01             	cmp    $0x1,%eax
 8327c75:	0f 94 c0             	sete   %al
 8327c78:	84 c0                	test   %al,%al
 8327c7a:	74 0e                	je     8327c8a <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0xd4>
 8327c7c:	e8 00 45 da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8327c81:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8327c87:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8327c8a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8327c8f:	c7 44 24 08 e7 20 00 	movl   $0x20e7,0x8(%esp)
 8327c96:	00 
 8327c97:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8327c9e:	08 
 8327c9f:	89 04 24             	mov    %eax,(%esp)
 8327ca2:	e8 df 7d f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8327ca7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8327cae:	00 
 8327caf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327cb3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327cb6:	89 04 24             	mov    %eax,(%esp)
 8327cb9:	e8 68 0f da ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8327cbe:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327cc1:	89 04 24             	mov    %eax,(%esp)
 8327cc4:	e8 7d 0f da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327cc9:	c7 44 24 04 54 00 00 	movl   $0x54,0x4(%esp)
 8327cd0:	00 
 8327cd1:	89 04 24             	mov    %eax,(%esp)
 8327cd4:	e8 7d 0f da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8327cd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327cdc:	89 04 24             	mov    %eax,(%esp)
 8327cdf:	e8 b2 0f da ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8327ce4:	89 c3                	mov    %eax,%ebx
 8327ce6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327ce9:	89 04 24             	mov    %eax,(%esp)
 8327cec:	e8 55 0f da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327cf1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8327cf5:	89 04 24             	mov    %eax,(%esp)
 8327cf8:	e8 59 0f da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8327cfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327d00:	89 04 24             	mov    %eax,(%esp)
 8327d03:	e8 66 26 db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8327d08:	89 c3                	mov    %eax,%ebx
 8327d0a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327d0d:	89 04 24             	mov    %eax,(%esp)
 8327d10:	e8 31 0f da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327d15:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8327d19:	89 04 24             	mov    %eax,(%esp)
 8327d1c:	e8 71 a5 db ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8327d21:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327d24:	89 04 24             	mov    %eax,(%esp)
 8327d27:	e8 3c 09 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327d2c:	8b 18                	mov    (%eax),%ebx
 8327d2e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327d31:	89 04 24             	mov    %eax,(%esp)
 8327d34:	e8 0d 0f da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327d39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8327d3d:	89 04 24             	mov    %eax,(%esp)
 8327d40:	e8 11 0f da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8327d45:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327d48:	89 04 24             	mov    %eax,(%esp)
 8327d4b:	e8 f6 0e da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327d50:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8327d53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327d57:	89 04 24             	mov    %eax,(%esp)
 8327d5a:	e8 17 a5 db ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 8327d5f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327d62:	89 04 24             	mov    %eax,(%esp)
 8327d65:	e8 dc 0e da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327d6a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8327d6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327d71:	89 04 24             	mov    %eax,(%esp)
 8327d74:	e8 fd a4 db ff       	call   80e2276 <_ZN12CStreamGuardlsEl>
 8327d79:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327d7c:	89 04 24             	mov    %eax,(%esp)
 8327d7f:	e8 e4 08 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327d84:	8b 58 0c             	mov    0xc(%eax),%ebx
 8327d87:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327d8a:	89 04 24             	mov    %eax,(%esp)
 8327d8d:	e8 b4 0e da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327d92:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8327d96:	89 04 24             	mov    %eax,(%esp)
 8327d99:	e8 b8 0e da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8327d9e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327da1:	89 04 24             	mov    %eax,(%esp)
 8327da4:	e8 9d 0e da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8327da9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8327dac:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327db0:	89 04 24             	mov    %eax,(%esp)
 8327db3:	e8 da a4 db ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8327db8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8327dbd:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8327dc0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8327dc4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8327dcb:	00 
 8327dcc:	89 04 24             	mov    %eax,(%esp)
 8327dcf:	e8 0a 92 24 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8327dd4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327dd7:	89 04 24             	mov    %eax,(%esp)
 8327dda:	e8 89 08 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327ddf:	8b 58 0c             	mov    0xc(%eax),%ebx
 8327de2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327de5:	89 04 24             	mov    %eax,(%esp)
 8327de8:	e8 7b 08 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327ded:	8b 00                	mov    (%eax),%eax
 8327def:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8327df6:	00 
 8327df7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8327dfb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8327dfe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8327e02:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8327e05:	89 54 24 08          	mov    %edx,0x8(%esp)
 8327e09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327e0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327e10:	89 04 24             	mov    %eax,(%esp)
 8327e13:	e8 d0 79 38 00       	call   86af7e8 <_ZN8WongWork14CHandlePremium20handleSetUserPremiumEP5CUser17ENUM_PREMIUM_TYPEllib>
 8327e18:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327e1b:	89 04 24             	mov    %eax,(%esp)
 8327e1e:	e8 45 08 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327e23:	8b 00                	mov    (%eax),%eax
 8327e25:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327e29:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327e2c:	89 04 24             	mov    %eax,(%esp)
 8327e2f:	e8 fe 7d 38 00       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 8327e34:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327e37:	89 04 24             	mov    %eax,(%esp)
 8327e3a:	e8 29 08 00 00       	call   8328668 <_ZNK9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEptEv>
 8327e3f:	8b 00                	mov    (%eax),%eax
 8327e41:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8327e48:	00 
 8327e49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327e4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327e50:	89 04 24             	mov    %eax,(%esp)
 8327e53:	e8 5c 7a 38 00       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 8327e58:	eb 15                	jmp    8327e6f <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x2b9>
 8327e5a:	89 d3                	mov    %edx,%ebx
 8327e5c:	89 c6                	mov    %eax,%esi
 8327e5e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327e61:	89 04 24             	mov    %eax,(%esp)
 8327e64:	e8 69 4a 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8327e69:	89 f0                	mov    %esi,%eax
 8327e6b:	89 da                	mov    %ebx,%edx
 8327e6d:	eb 47                	jmp    8327eb6 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x300>
 8327e6f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8327e72:	89 04 24             	mov    %eax,(%esp)
 8327e75:	e8 58 4a 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8327e7a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327e7d:	89 04 24             	mov    %eax,(%esp)
 8327e80:	e8 cd 07 00 00       	call   8328652 <_ZN9__gnu_cxx17__normal_iteratorIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEppEv>
 8327e85:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8327e88:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8327e8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327e8f:	89 04 24             	mov    %eax,(%esp)
 8327e92:	e8 69 07 00 00       	call   8328600 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE3endEv>
 8327e97:	83 ec 04             	sub    $0x4,%esp
 8327e9a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8327e9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327ea1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327ea4:	89 04 24             	mov    %eax,(%esp)
 8327ea7:	e8 7a 07 00 00       	call   8328626 <_ZN9__gnu_cxxneIPN8WongWork16SUserPremiumInfoESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8327eac:	84 c0                	test   %al,%al
 8327eae:	0f 85 9a fd ff ff    	jne    8327c4e <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x98>
 8327eb4:	eb 1b                	jmp    8327ed1 <_ZN8WongWork9CCeraShop13_ClosePremiumEP5CUseri+0x31b>
 8327eb6:	89 d3                	mov    %edx,%ebx
 8327eb8:	89 c6                	mov    %eax,%esi
 8327eba:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8327ebd:	89 04 24             	mov    %eax,(%esp)
 8327ec0:	e8 45 06 00 00       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 8327ec5:	89 f0                	mov    %esi,%eax
 8327ec7:	89 da                	mov    %ebx,%edx
 8327ec9:	89 04 24             	mov    %eax,(%esp)
 8327ecc:	e8 7f b8 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327ed1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8327ed4:	89 04 24             	mov    %eax,(%esp)
 8327ed7:	e8 2e 06 00 00       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 8327edc:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8327edf:	83 c4 00             	add    $0x0,%esp
 8327ee2:	5b                   	pop    %ebx
 8327ee3:	5e                   	pop    %esi
 8327ee4:	5d                   	pop    %ebp
 8327ee5:	c3                   	ret

```

```c
// WongWork::CCeraShop::_ClosePremium @ 0x8327bb6

/* WongWork::CCeraShop::_ClosePremium(CUser*, int) */

void __thiscall WongWork::CCeraShop::_ClosePremium(CCeraShop *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int *piVar3;
  SUserPremiumInfo *pSVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *pCVar7;
  uint uVar8;
  undefined4 *puVar9;
  CStreamGuard local_38 [8];
  __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
  local_30 [4];
  vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> local_2c [12];
  __normal_iterator local_20 [4];
  CUserPremium *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_1c = (CUserPremium *)CUser::GetPremiumInfo(param_1);
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            (local_2c);
                    /* try { // try from 08327be4 to 08327ca6 has its CatchHandler @ 08327eb6 */
  piVar3 = (int *)CUserPremium::GetPremiumInfo(local_1c,param_2);
  if (*piVar3 != 0) {
    pSVar4 = (SUserPremiumInfo *)CUserPremium::GetPremiumInfo(local_1c,param_2);
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
              (local_2c,pSVar4);
  }
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = local_18 + 1;
  local_10 = 0;
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::begin();
  while( true ) {
    std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::end();
    bVar2 = __gnu_cxx::operator!=(local_30,local_20);
    if (!bVar2) break;
    local_10 = 0;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    if (*(int *)(g_SPremiumInfo + *piVar3 * 0x120 + 0x5c) == 1) {
      iVar5 = G_CEnvironment();
      local_10 = *(uint *)(iVar5 + 0x378);
    }
    pSVar6 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x20e7);
    CStreamGuard::CStreamGuard(local_38,pSVar6,true);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 08327cd4 to 08327e57 has its CatchHandler @ 08327e5a */
    CStreamGuard::operator<<(pCVar7,0x54);
    iVar5 = CUser::GetUID(param_1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    uVar8 = CUser::get_acc_id(param_1);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,uVar8);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    iVar5 = *piVar3;
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_18);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_14);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_30);
    iVar5 = *(int *)(iVar5 + 0xc);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,iVar5);
    pCVar7 = (CStreamGuard *)CStreamGuard::operator*(local_38);
    CStreamGuard::operator<<(pCVar7,local_10);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
    iVar5 = __gnu_cxx::
            __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
            ::operator->(local_30);
    uVar1 = *(undefined4 *)(iVar5 + 0xc);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_30);
    CHandlePremium::handleSetUserPremium(param_1,*puVar9,local_18,local_14,uVar1,0);
    puVar9 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
             ::operator->(local_30);
    CHandlePremium::handlePremiumEffect(param_1,*puVar9);
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
                    ::operator->(local_30);
    CHandlePremium::handleNotifyPremiumInfo(param_1,*piVar3,0);
                    /* try { // try from 08327e75 to 08327eab has its CatchHandler @ 08327eb6 */
    CStreamGuard::~CStreamGuard(local_38);
    __gnu_cxx::
    __normal_iterator<WongWork::SUserPremiumInfo*,std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>>
    ::operator++(local_30);
  }
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::~vector
            (local_2c);
  return;
}

```

---

## _ProcessIPGError

```asm
// === 083237f6 WongWork::CCeraShop::_ProcessIPGError  [0x083237f6-0x8323977] ===
 83237f6:	55                   	push   %ebp
 83237f7:	89 e5                	mov    %esp,%ebp
 83237f9:	57                   	push   %edi
 83237fa:	56                   	push   %esi
 83237fb:	53                   	push   %ebx
 83237fc:	83 ec 4c             	sub    $0x4c,%esp
 83237ff:	8b 55 18             	mov    0x18(%ebp),%edx
 8323802:	8b 45 2c             	mov    0x2c(%ebp),%eax
 8323805:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 8323808:	88 45 e0             	mov    %al,-0x20(%ebp)
 832380b:	8b 45 14             	mov    0x14(%ebp),%eax
 832380e:	8b 40 1c             	mov    0x1c(%eax),%eax
 8323811:	83 f8 02             	cmp    $0x2,%eax
 8323814:	0f 85 0f 01 00 00    	jne    8323929 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0x133>
 832381a:	8b 45 14             	mov    0x14(%ebp),%eax
 832381d:	05 73 01 00 00       	add    $0x173,%eax
 8323822:	89 04 24             	mov    %eax,(%esp)
 8323825:	e8 c6 ae d5 ff       	call   807e6f0 <atoi@plt>
 832382a:	83 f8 01             	cmp    $0x1,%eax
 832382d:	0f 85 b7 00 00 00    	jne    83238ea <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0xf4>
 8323833:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8323837:	0f 84 84 00 00 00    	je     83238c1 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0xcb>
 832383d:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8323842:	8b 00                	mov    (%eax),%eax
 8323844:	83 c0 1c             	add    $0x1c,%eax
 8323847:	8b 00                	mov    (%eax),%eax
 8323849:	89 45 d8             	mov    %eax,-0x28(%ebp)
 832384c:	8b 45 10             	mov    0x10(%ebp),%eax
 832384f:	05 f5 00 00 00       	add    $0xf5,%eax
 8323854:	89 c1                	mov    %eax,%ecx
 8323856:	8b 45 10             	mov    0x10(%ebp),%eax
 8323859:	05 91 00 00 00       	add    $0x91,%eax
 832385e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8323861:	8b 45 10             	mov    0x10(%ebp),%eax
 8323864:	83 c0 7d             	add    $0x7d,%eax
 8323867:	89 c7                	mov    %eax,%edi
 8323869:	8b 45 10             	mov    0x10(%ebp),%eax
 832386c:	83 c0 71             	add    $0x71,%eax
 832386f:	89 c6                	mov    %eax,%esi
 8323871:	8b 45 10             	mov    0x10(%ebp),%eax
 8323874:	83 c0 69             	add    $0x69,%eax
 8323877:	89 c3                	mov    %eax,%ebx
 8323879:	8b 45 14             	mov    0x14(%ebp),%eax
 832387c:	05 59 01 00 00       	add    $0x159,%eax
 8323881:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 8323887:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 832388e:	00 
 832388f:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8323896:	00 
 8323897:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 832389b:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 832389e:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 83238a2:	89 7c 24 14          	mov    %edi,0x14(%esp)
 83238a6:	89 74 24 10          	mov    %esi,0x10(%esp)
 83238aa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83238ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 83238b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83238b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83238b9:	89 14 24             	mov    %edx,(%esp)
 83238bc:	ff 55 d8             	call   *-0x28(%ebp)
 83238bf:	eb 68                	jmp    8323929 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0x133>
 83238c1:	a1 34 f7 41 09       	mov    0x941f734,%eax
 83238c6:	8b 00                	mov    (%eax),%eax
 83238c8:	83 c0 24             	add    $0x24,%eax
 83238cb:	8b 08                	mov    (%eax),%ecx
 83238cd:	a1 34 f7 41 09       	mov    0x941f734,%eax
 83238d2:	8b 55 14             	mov    0x14(%ebp),%edx
 83238d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 83238d9:	8b 55 10             	mov    0x10(%ebp),%edx
 83238dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 83238e0:	89 04 24             	mov    %eax,(%esp)
 83238e3:	ff d1                	call   *%ecx
 83238e5:	e9 86 00 00 00       	jmp    8323970 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0x17a>
 83238ea:	8b 45 14             	mov    0x14(%ebp),%eax
 83238ed:	05 77 01 00 00       	add    $0x177,%eax
 83238f2:	89 44 24 18          	mov    %eax,0x18(%esp)
 83238f6:	8b 45 20             	mov    0x20(%ebp),%eax
 83238f9:	89 44 24 14          	mov    %eax,0x14(%esp)
 83238fd:	c7 44 24 10 99 5d c2 	movl   $0x8c25d99,0x10(%esp)
 8323904:	08 
 8323905:	c7 44 24 0c 47 0b 00 	movl   $0xb47,0xc(%esp)
 832390c:	00 
 832390d:	c7 44 24 08 00 6c c2 	movl   $0x8c26c00,0x8(%esp)
 8323914:	08 
 8323915:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 832391c:	08 
 832391d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8323924:	e8 e1 02 7b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8323929:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 832392d:	74 40                	je     832396f <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0x179>
 832392f:	0f be 55 e0          	movsbl -0x20(%ebp),%edx
 8323933:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 8323937:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 832393b:	8b 55 28             	mov    0x28(%ebp),%edx
 832393e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8323942:	8b 55 24             	mov    0x24(%ebp),%edx
 8323945:	89 54 24 14          	mov    %edx,0x14(%esp)
 8323949:	8b 55 20             	mov    0x20(%ebp),%edx
 832394c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8323950:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8323953:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8323957:	89 44 24 08          	mov    %eax,0x8(%esp)
 832395b:	8b 45 0c             	mov    0xc(%ebp),%eax
 832395e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323962:	8b 45 08             	mov    0x8(%ebp),%eax
 8323965:	89 04 24             	mov    %eax,(%esp)
 8323968:	e8 0b 00 00 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 832396d:	eb 01                	jmp    8323970 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic+0x17a>
 832396f:	90                   	nop
 8323970:	83 c4 4c             	add    $0x4c,%esp
 8323973:	5b                   	pop    %ebx
 8323974:	5e                   	pop    %esi
 8323975:	5f                   	pop    %edi
 8323976:	5d                   	pop    %ebp
 8323977:	c3                   	ret

```

```c
// WongWork::CCeraShop::_ProcessIPGError @ 0x83237f6

/* WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*,
   unsigned char, int, unsigned int, int, int, char) */

void __thiscall
WongWork::CCeraShop::_ProcessIPGError
          (CCeraShop *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,uchar param_4,
          int param_5,uint param_6,int param_7,int param_8,char param_9)

{
  int iVar1;
  
  if (*(int *)(param_3 + 0x1c) == 2) {
    iVar1 = atoi((char *)(param_3 + 0x173));
    if (iVar1 == 1) {
      if (param_1 == (CUser *)0x0) {
        (**(code **)(*GlobalData::s_pIPGHelper + 0x24))(GlobalData::s_pIPGHelper,param_2,param_3);
        return;
      }
      (**(code **)(*GlobalData::s_pIPGHelper + 0x1c))
                (GlobalData::s_pIPGHelper,param_1,param_3 + 0x159,param_2 + 0x69,param_2 + 0x71,
                 param_2 + 0x7d,param_2 + 0x91,param_2 + 0xf5,0,0);
    }
    else {
      LogManager::logFormat
                (1,"CeraShop.cpp",
                 "void WongWork::CCeraShop::_ProcessIPGError(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, unsigned char, int, unsigned int, int, int, char)"
                 ,0xb47,"IPG ERROR (Goods No: %d)(%s)",param_6,param_3 + 0x177);
    }
  }
  if (param_1 != (CUser *)0x0) {
    ProcessError(this,param_1,(ushort)param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

```

---

## _onBuySpecialItem

```asm
// === 08327454 WongWork::CCeraShop::_onBuySpecialItem  [0x08327454-0x83275bd] ===
 8327454:	55                   	push   %ebp
 8327455:	89 e5                	mov    %esp,%ebp
 8327457:	56                   	push   %esi
 8327458:	53                   	push   %ebx
 8327459:	83 ec 20             	sub    $0x20,%esp
 832745c:	8b 45 14             	mov    0x14(%ebp),%eax
 832745f:	83 e8 3f             	sub    $0x3f,%eax
 8327462:	83 f8 0a             	cmp    $0xa,%eax
 8327465:	0f 87 23 01 00 00    	ja     832758e <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm+0x13a>
 832746b:	ba 01 00 00 00       	mov    $0x1,%edx
 8327470:	89 d3                	mov    %edx,%ebx
 8327472:	89 c1                	mov    %eax,%ecx
 8327474:	d3 e3                	shl    %cl,%ebx
 8327476:	89 d8                	mov    %ebx,%eax
 8327478:	25 df 07 00 00       	and    $0x7df,%eax
 832747d:	85 c0                	test   %eax,%eax
 832747f:	0f 84 09 01 00 00    	je     832758e <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm+0x13a>
 8327485:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 832748a:	c7 44 24 08 71 19 00 	movl   $0x1971,0x8(%esp)
 8327491:	00 
 8327492:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8327499:	08 
 832749a:	89 04 24             	mov    %eax,(%esp)
 832749d:	e8 e4 85 f6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 83274a2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83274a9:	00 
 83274aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 83274ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83274b1:	89 04 24             	mov    %eax,(%esp)
 83274b4:	e8 6d 17 da ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 83274b9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83274bc:	89 04 24             	mov    %eax,(%esp)
 83274bf:	e8 82 17 da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 83274c4:	c7 44 24 04 b4 00 00 	movl   $0xb4,0x4(%esp)
 83274cb:	00 
 83274cc:	89 04 24             	mov    %eax,(%esp)
 83274cf:	e8 82 17 da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 83274d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83274d7:	89 04 24             	mov    %eax,(%esp)
 83274da:	e8 67 17 da ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 83274df:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 83274e6:	ff 
 83274e7:	89 04 24             	mov    %eax,(%esp)
 83274ea:	e8 67 17 da ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 83274ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83274f2:	89 04 24             	mov    %eax,(%esp)
 83274f5:	e8 54 17 da ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 83274fa:	89 04 24             	mov    %eax,(%esp)
 83274fd:	e8 a0 6a f5 ff       	call   827dfa2 <_ZN12CStreamGuard11GetInBufferI28SIG_SAVE_CRAZY_LEVELUP_EVENTEEPT_v>
 8327502:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8327505:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8327508:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 832750f:	00 
 8327510:	c7 44 24 04 65 5e c2 	movl   $0x8c25e65,0x4(%esp)
 8327517:	08 
 8327518:	89 04 24             	mov    %eax,(%esp)
 832751b:	e8 80 63 d5 ff       	call   807d8a0 <memcpy@plt>
 8327520:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327523:	89 04 24             	mov    %eax,(%esp)
 8327526:	e8 43 2e db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 832752b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832752e:	89 42 05             	mov    %eax,0x5(%edx)
 8327531:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8327538:	ff 
 8327539:	8b 45 0c             	mov    0xc(%ebp),%eax
 832753c:	89 04 24             	mov    %eax,(%esp)
 832753f:	e8 5c 6a 32 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8327544:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8327547:	89 42 09             	mov    %eax,0x9(%edx)
 832754a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 832754f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8327552:	89 54 24 08          	mov    %edx,0x8(%esp)
 8327556:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 832755d:	00 
 832755e:	89 04 24             	mov    %eax,(%esp)
 8327561:	e8 78 9a 24 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8327566:	eb 1b                	jmp    8327583 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm+0x12f>
 8327568:	89 d3                	mov    %edx,%ebx
 832756a:	89 c6                	mov    %eax,%esi
 832756c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832756f:	89 04 24             	mov    %eax,(%esp)
 8327572:	e8 5b 53 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8327577:	89 f0                	mov    %esi,%eax
 8327579:	89 da                	mov    %ebx,%edx
 832757b:	89 04 24             	mov    %eax,(%esp)
 832757e:	e8 cd c1 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327583:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327586:	89 04 24             	mov    %eax,(%esp)
 8327589:	e8 44 53 2f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 832758e:	8b 45 14             	mov    0x14(%ebp),%eax
 8327591:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327595:	8b 45 08             	mov    0x8(%ebp),%eax
 8327598:	89 04 24             	mov    %eax,(%esp)
 832759b:	e8 3c 0b 00 00       	call   83280dc <_ZN8WongWork9CCeraShop19Is2010ChuseokPacketEj>
 83275a0:	84 c0                	test   %al,%al
 83275a2:	74 13                	je     83275b7 <_ZN8WongWork9CCeraShop17_onBuySpecialItemEP5CUser21ENUM_CERA_SPECIALITEMm+0x163>
 83275a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83275a7:	89 04 24             	mov    %eax,(%esp)
 83275aa:	e8 bf 2d db ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 83275af:	89 04 24             	mov    %eax,(%esp)
 83275b2:	e8 ff 52 11 00       	call   843c8b6 <_ZN31DB_UpdateChuseokPackagePurchase11makeRequestEj>
 83275b7:	83 c4 20             	add    $0x20,%esp
 83275ba:	5b                   	pop    %ebx
 83275bb:	5e                   	pop    %esi
 83275bc:	5d                   	pop    %ebp
 83275bd:	c3                   	ret

```

```c
// WongWork::CCeraShop::_onBuySpecialItem @ 0x8327454

/* WongWork::CCeraShop::_onBuySpecialItem(CUser*, ENUM_CERA_SPECIALITEM, unsigned long) */

void __thiscall
WongWork::CCeraShop::_onBuySpecialItem
          (CCeraShop *this,CUser *param_1,undefined4 param_3,uint param_4)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  undefined4 uVar4;
  uint uVar5;
  CStreamGuard local_18 [8];
  SIG_SAVE_CRAZY_LEVELUP_EVENT *local_10;
  
  if ((param_4 - 0x3f < 0xb) && ((1 << ((byte)(param_4 - 0x3f) & 0x1f) & 0x7dfU) != 0)) {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"CeraShop.cpp",0x1971);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 083274cf to 08327565 has its CatchHandler @ 08327568 */
    CStreamGuard::operator<<(pCVar3,0xb4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,-1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CRAZY_LEVELUP_EVENT>(pCVar3);
    memcpy(local_10,&DAT_08c25e65,5);
    uVar4 = CUser::get_acc_id(param_1);
    *(undefined4 *)(local_10 + 5) = uVar4;
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 9) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  cVar1 = Is2010ChuseokPacket(this,param_4);
  if (cVar1 != '\0') {
    uVar5 = CUser::get_acc_id(param_1);
    DB_UpdateChuseokPackagePurchase::makeRequest(uVar5);
  }
  return;
}

```

---

## _processAdditionalItem

```asm
// === 083267a2 WongWork::CCeraShop::_processAdditionalItem  [0x083267a2-0x8327453] ===
 83267a2:	55                   	push   %ebp
 83267a3:	89 e5                	mov    %esp,%ebp
 83267a5:	57                   	push   %edi
 83267a6:	56                   	push   %esi
 83267a7:	53                   	push   %ebx
 83267a8:	81 ec 7c 04 00 00    	sub    $0x47c,%esp
 83267ae:	8b 5d 14             	mov    0x14(%ebp),%ebx
 83267b1:	8b 4d 18             	mov    0x18(%ebp),%ecx
 83267b4:	8b 55 1c             	mov    0x1c(%ebp),%edx
 83267b7:	8b 45 28             	mov    0x28(%ebp),%eax
 83267ba:	66 89 9d 04 fc ff ff 	mov    %bx,-0x3fc(%ebp)
 83267c1:	88 8d 00 fc ff ff    	mov    %cl,-0x400(%ebp)
 83267c7:	88 95 fc fb ff ff    	mov    %dl,-0x404(%ebp)
 83267cd:	88 85 f8 fb ff ff    	mov    %al,-0x408(%ebp)
 83267d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83267d6:	89 04 24             	mov    %eax,(%esp)
 83267d9:	e8 54 9c df ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 83267de:	85 c0                	test   %eax,%eax
 83267e0:	0f 94 c0             	sete   %al
 83267e3:	84 c0                	test   %al,%al
 83267e5:	0f 85 59 0c 00 00    	jne    8327444 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca2>
 83267eb:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 83267ef:	75 64                	jne    8326855 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xb3>
 83267f1:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 83267f8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83267ff:	00 
 8326800:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326804:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326807:	89 44 24 04          	mov    %eax,0x4(%esp)
 832680b:	8b 45 08             	mov    0x8(%ebp),%eax
 832680e:	89 04 24             	mov    %eax,(%esp)
 8326811:	e8 72 f2 ff ff       	call   8325a88 <_ZN8WongWork9CCeraShop12_processCoinEP5CUsertb>
 8326816:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 832681c:	89 04 24             	mov    %eax,(%esp)
 832681f:	e8 30 50 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8326824:	c7 85 09 ff ff ff 01 	movl   $0x1,-0xf7(%ebp)
 832682b:	00 00 00 
 832682e:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 8326835:	89 85 0e ff ff ff    	mov    %eax,-0xf2(%ebp)
 832683b:	8d 85 07 ff ff ff    	lea    -0xf9(%ebp),%eax
 8326841:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326845:	8b 45 20             	mov    0x20(%ebp),%eax
 8326848:	89 04 24             	mov    %eax,(%esp)
 832684b:	e8 12 0a f1 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8326850:	e9 f3 0b 00 00       	jmp    8327448 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca6>
 8326855:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 832685c:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 8326863:	c7 45 ac ff ff ff ff 	movl   $0xffffffff,-0x54(%ebp)
 832686a:	8d 95 13 fc ff ff    	lea    -0x3ed(%ebp),%edx
 8326870:	bb 00 02 00 00       	mov    $0x200,%ebx
 8326875:	b8 00 00 00 00       	mov    $0x0,%eax
 832687a:	89 d1                	mov    %edx,%ecx
 832687c:	83 e1 01             	and    $0x1,%ecx
 832687f:	85 c9                	test   %ecx,%ecx
 8326881:	74 08                	je     832688b <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xe9>
 8326883:	88 02                	mov    %al,(%edx)
 8326885:	83 c2 01             	add    $0x1,%edx
 8326888:	83 eb 01             	sub    $0x1,%ebx
 832688b:	89 d1                	mov    %edx,%ecx
 832688d:	83 e1 02             	and    $0x2,%ecx
 8326890:	85 c9                	test   %ecx,%ecx
 8326892:	74 09                	je     832689d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xfb>
 8326894:	66 89 02             	mov    %ax,(%edx)
 8326897:	83 c2 02             	add    $0x2,%edx
 832689a:	83 eb 02             	sub    $0x2,%ebx
 832689d:	89 d9                	mov    %ebx,%ecx
 832689f:	c1 e9 02             	shr    $0x2,%ecx
 83268a2:	89 d7                	mov    %edx,%edi
 83268a4:	f3 ab                	rep stos %eax,%es:(%edi)
 83268a6:	89 fa                	mov    %edi,%edx
 83268a8:	89 d9                	mov    %ebx,%ecx
 83268aa:	83 e1 02             	and    $0x2,%ecx
 83268ad:	85 c9                	test   %ecx,%ecx
 83268af:	74 06                	je     83268b7 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x115>
 83268b1:	66 89 02             	mov    %ax,(%edx)
 83268b4:	83 c2 02             	add    $0x2,%edx
 83268b7:	89 d9                	mov    %ebx,%ecx
 83268b9:	83 e1 01             	and    $0x1,%ecx
 83268bc:	85 c9                	test   %ecx,%ecx
 83268be:	74 05                	je     83268c5 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x123>
 83268c0:	88 02                	mov    %al,(%edx)
 83268c2:	83 c2 01             	add    $0x1,%edx
 83268c5:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 83268cc:	83 7d ac ff          	cmpl   $0xffffffff,-0x54(%ebp)
 83268d0:	0f 84 e2 01 00 00    	je     8326ab8 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x316>
 83268d6:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 83268dc:	89 04 24             	mov    %eax,(%esp)
 83268df:	e8 68 74 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 83268e4:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 83268e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83268eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83268f2:	00 
 83268f3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 83268f9:	89 04 24             	mov    %eax,(%esp)
 83268fc:	e8 fb 4f da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8326901:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8326908:	00 
 8326909:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 832690f:	89 04 24             	mov    %eax,(%esp)
 8326912:	e8 09 50 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8326917:	8b 45 a8             	mov    -0x58(%ebp),%eax
 832691a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832691e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8326924:	89 04 24             	mov    %eax,(%esp)
 8326927:	e8 10 50 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 832692c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8326933:	00 
 8326934:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 832693a:	89 04 24             	mov    %eax,(%esp)
 832693d:	e8 16 50 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8326942:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8326948:	89 44 24 04          	mov    %eax,0x4(%esp)
 832694c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832694f:	89 04 24             	mov    %eax,(%esp)
 8326952:	e8 63 1c 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8326957:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 832695d:	89 04 24             	mov    %eax,(%esp)
 8326960:	e8 ef 4e da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8326965:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8326968:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 832696e:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 8326975:	89 85 d1 fe ff ff    	mov    %eax,-0x12f(%ebp)
 832697b:	8d 85 ca fe ff ff    	lea    -0x136(%ebp),%eax
 8326981:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326985:	8b 45 20             	mov    0x20(%ebp),%eax
 8326988:	89 04 24             	mov    %eax,(%esp)
 832698b:	e8 d2 08 f1 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8326990:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326996:	89 04 24             	mov    %eax,(%esp)
 8326999:	e8 ae 73 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 832699e:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 83269a5:	00 
 83269a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83269ad:	00 
 83269ae:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83269b4:	89 04 24             	mov    %eax,(%esp)
 83269b7:	e8 40 4f da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83269bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83269c3:	00 
 83269c4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83269ca:	89 04 24             	mov    %eax,(%esp)
 83269cd:	e8 4e 4f da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83269d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83269d9:	00 
 83269da:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83269e0:	89 04 24             	mov    %eax,(%esp)
 83269e3:	e8 bc 34 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 83269e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83269ef:	00 
 83269f0:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 83269f6:	89 04 24             	mov    %eax,(%esp)
 83269f9:	e8 22 4f da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83269fe:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8326a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326a05:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a0b:	89 04 24             	mov    %eax,(%esp)
 8326a0e:	e8 29 4f da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8326a13:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8326a16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326a1a:	8d 85 13 fc ff ff    	lea    -0x3ed(%ebp),%eax
 8326a20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326a24:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a2a:	89 04 24             	mov    %eax,(%esp)
 8326a2d:	e8 b2 09 e9 ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 8326a32:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8326a39:	00 
 8326a3a:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a40:	89 04 24             	mov    %eax,(%esp)
 8326a43:	e8 10 4f da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8326a48:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326a52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326a55:	89 04 24             	mov    %eax,(%esp)
 8326a58:	e8 5d 1b 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8326a5d:	eb 18                	jmp    8326a77 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x2d5>
 8326a5f:	89 d3                	mov    %edx,%ebx
 8326a61:	89 c6                	mov    %eax,%esi
 8326a63:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a69:	89 04 24             	mov    %eax,(%esp)
 8326a6c:	e8 0f 74 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8326a71:	89 f0                	mov    %esi,%eax
 8326a73:	89 da                	mov    %ebx,%edx
 8326a75:	eb 10                	jmp    8326a87 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x2e5>
 8326a77:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8326a7d:	89 04 24             	mov    %eax,(%esp)
 8326a80:	e8 fb 73 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8326a85:	eb 1e                	jmp    8326aa5 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x303>
 8326a87:	89 d3                	mov    %edx,%ebx
 8326a89:	89 c6                	mov    %eax,%esi
 8326a8b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8326a91:	89 04 24             	mov    %eax,(%esp)
 8326a94:	e8 e7 73 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8326a99:	89 f0                	mov    %esi,%eax
 8326a9b:	89 da                	mov    %ebx,%edx
 8326a9d:	89 04 24             	mov    %eax,(%esp)
 8326aa0:	e8 ab cc 7b 00       	call   8ae3750 <_Unwind_Resume>
 8326aa5:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8326aab:	89 04 24             	mov    %eax,(%esp)
 8326aae:	e8 cd 73 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8326ab3:	e9 90 09 00 00       	jmp    8327448 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca6>
 8326ab8:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8326abb:	e8 db 56 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8326ac0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8326ac4:	89 04 24             	mov    %eax,(%esp)
 8326ac7:	e8 66 8f 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8326acc:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8326acf:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8326ad3:	0f 84 6e 09 00 00    	je     8327447 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca5>
 8326ad9:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326adc:	89 04 24             	mov    %eax,(%esp)
 8326adf:	e8 16 a8 dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8326ae4:	84 c0                	test   %al,%al
 8326ae6:	74 35                	je     8326b1d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x37b>
 8326ae8:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326aeb:	8b 00                	mov    (%eax),%eax
 8326aed:	83 c0 0c             	add    $0xc,%eax
 8326af0:	8b 10                	mov    (%eax),%edx
 8326af2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326af5:	89 04 24             	mov    %eax,(%esp)
 8326af8:	ff d2                	call   *%edx
 8326afa:	83 f8 10             	cmp    $0x10,%eax
 8326afd:	74 17                	je     8326b16 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x374>
 8326aff:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326b02:	8b 00                	mov    (%eax),%eax
 8326b04:	83 c0 0c             	add    $0xc,%eax
 8326b07:	8b 10                	mov    (%eax),%edx
 8326b09:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326b0c:	89 04 24             	mov    %eax,(%esp)
 8326b0f:	ff d2                	call   *%edx
 8326b11:	83 f8 22             	cmp    $0x22,%eax
 8326b14:	75 07                	jne    8326b1d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x37b>
 8326b16:	b8 01 00 00 00       	mov    $0x1,%eax
 8326b1b:	eb 05                	jmp    8326b22 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x380>
 8326b1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8326b22:	84 c0                	test   %al,%al
 8326b24:	0f 84 a3 01 00 00    	je     8326ccd <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x52b>
 8326b2a:	c7 45 bc ff ff ff ff 	movl   $0xffffffff,-0x44(%ebp)
 8326b31:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 8326b37:	89 04 24             	mov    %eax,(%esp)
 8326b3a:	e8 15 4d da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8326b3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8326b42:	89 85 8f fe ff ff    	mov    %eax,-0x171(%ebp)
 8326b48:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 8326b4f:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 8326b55:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326b58:	8b 00                	mov    (%eax),%eax
 8326b5a:	83 c0 08             	add    $0x8,%eax
 8326b5d:	8b 10                	mov    (%eax),%edx
 8326b5f:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 8326b65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326b69:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326b6c:	89 04 24             	mov    %eax,(%esp)
 8326b6f:	ff d2                	call   *%edx
 8326b71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326b74:	89 04 24             	mov    %eax,(%esp)
 8326b77:	e8 12 37 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8326b7c:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8326b83:	00 
 8326b84:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8326b8b:	00 
 8326b8c:	c7 44 24 44 0f 00 00 	movl   $0xf,0x44(%esp)
 8326b93:	00 
 8326b94:	8b 95 8d fe ff ff    	mov    -0x173(%ebp),%edx
 8326b9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8326b9e:	8b 95 91 fe ff ff    	mov    -0x16f(%ebp),%edx
 8326ba4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8326ba8:	8b 95 95 fe ff ff    	mov    -0x16b(%ebp),%edx
 8326bae:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8326bb2:	8b 95 99 fe ff ff    	mov    -0x167(%ebp),%edx
 8326bb8:	89 54 24 10          	mov    %edx,0x10(%esp)
 8326bbc:	8b 95 9d fe ff ff    	mov    -0x163(%ebp),%edx
 8326bc2:	89 54 24 14          	mov    %edx,0x14(%esp)
 8326bc6:	8b 95 a1 fe ff ff    	mov    -0x15f(%ebp),%edx
 8326bcc:	89 54 24 18          	mov    %edx,0x18(%esp)
 8326bd0:	8b 95 a5 fe ff ff    	mov    -0x15b(%ebp),%edx
 8326bd6:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8326bda:	8b 95 a9 fe ff ff    	mov    -0x157(%ebp),%edx
 8326be0:	89 54 24 20          	mov    %edx,0x20(%esp)
 8326be4:	8b 95 ad fe ff ff    	mov    -0x153(%ebp),%edx
 8326bea:	89 54 24 24          	mov    %edx,0x24(%esp)
 8326bee:	8b 95 b1 fe ff ff    	mov    -0x14f(%ebp),%edx
 8326bf4:	89 54 24 28          	mov    %edx,0x28(%esp)
 8326bf8:	8b 95 b5 fe ff ff    	mov    -0x14b(%ebp),%edx
 8326bfe:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8326c02:	8b 95 b9 fe ff ff    	mov    -0x147(%ebp),%edx
 8326c08:	89 54 24 30          	mov    %edx,0x30(%esp)
 8326c0c:	8b 95 bd fe ff ff    	mov    -0x143(%ebp),%edx
 8326c12:	89 54 24 34          	mov    %edx,0x34(%esp)
 8326c16:	8b 95 c1 fe ff ff    	mov    -0x13f(%ebp),%edx
 8326c1c:	89 54 24 38          	mov    %edx,0x38(%esp)
 8326c20:	8b 95 c5 fe ff ff    	mov    -0x13b(%ebp),%edx
 8326c26:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8326c2a:	0f b6 95 c9 fe ff ff 	movzbl -0x137(%ebp),%edx
 8326c31:	88 54 24 40          	mov    %dl,0x40(%esp)
 8326c35:	89 04 24             	mov    %eax,(%esp)
 8326c38:	e8 49 c1 1d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8326c3d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8326c40:	83 7d bc ff          	cmpl   $0xffffffff,-0x44(%ebp)
 8326c44:	0f 95 c0             	setne  %al
 8326c47:	84 c0                	test   %al,%al
 8326c49:	74 24                	je     8326c6f <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x4cd>
 8326c4b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8326c4e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8326c52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8326c59:	00 
 8326c5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8326c61:	00 
 8326c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326c65:	89 04 24             	mov    %eax,(%esp)
 8326c68:	e8 ed 59 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8326c6d:	eb 44                	jmp    8326cb3 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x511>
 8326c6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326c72:	89 04 24             	mov    %eax,(%esp)
 8326c75:	e8 d4 4f da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8326c7a:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8326c81:	00 
 8326c82:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8326c89:	00 
 8326c8a:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8326c91:	00 
 8326c92:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8326c96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8326c9d:	00 
 8326c9e:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 8326ca4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326ca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326cab:	89 04 24             	mov    %eax,(%esp)
 8326cae:	e8 a9 00 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 8326cb3:	8d 85 8d fe ff ff    	lea    -0x173(%ebp),%eax
 8326cb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326cbd:	8b 45 20             	mov    0x20(%ebp),%eax
 8326cc0:	89 04 24             	mov    %eax,(%esp)
 8326cc3:	e8 9a 05 f1 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8326cc8:	e9 7b 07 00 00       	jmp    8327448 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca6>
 8326ccd:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 8326cd4:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8326cd7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326cda:	89 04 24             	mov    %eax,(%esp)
 8326cdd:	e8 18 a6 dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 8326ce2:	84 c0                	test   %al,%al
 8326ce4:	74 07                	je     8326ced <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x54b>
 8326ce6:	c7 45 b8 01 00 00 00 	movl   $0x1,-0x48(%ebp)
 8326ced:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8326cf0:	b9 00 00 00 00       	mov    $0x0,%ecx
 8326cf5:	b8 18 00 00 00       	mov    $0x18,%eax
 8326cfa:	89 c3                	mov    %eax,%ebx
 8326cfc:	83 e3 fc             	and    $0xfffffffc,%ebx
 8326cff:	b8 00 00 00 00       	mov    $0x0,%eax
 8326d04:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 8326d07:	83 c0 04             	add    $0x4,%eax
 8326d0a:	39 d8                	cmp    %ebx,%eax
 8326d0c:	72 f6                	jb     8326d04 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x562>
 8326d0e:	01 c2                	add    %eax,%edx
 8326d10:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326d13:	8b 00                	mov    (%eax),%eax
 8326d15:	83 c0 10             	add    $0x10,%eax
 8326d18:	8b 10                	mov    (%eax),%edx
 8326d1a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326d1d:	89 04 24             	mov    %eax,(%esp)
 8326d20:	ff d2                	call   *%edx
 8326d22:	84 c0                	test   %al,%al
 8326d24:	74 22                	je     8326d48 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x5a6>
 8326d26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326d29:	89 04 24             	mov    %eax,(%esp)
 8326d2c:	e8 1d 4f da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8326d31:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8326d34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8326d38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326d3c:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 8326d43:	e8 08 0a 19 00       	call   84b7750 <_ZN8WongWork12CGenUniqueNo8genIPGNoENS0_15ENUM_IPGNO_TYPEEjPc>
 8326d48:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8326d4e:	89 04 24             	mov    %eax,(%esp)
 8326d51:	e8 fe 4a da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8326d56:	8b 45 10             	mov    0x10(%ebp),%eax
 8326d59:	89 85 52 fe ff ff    	mov    %eax,-0x1ae(%ebp)
 8326d5f:	0f b7 85 04 fc ff ff 	movzwl -0x3fc(%ebp),%eax
 8326d66:	89 85 57 fe ff ff    	mov    %eax,-0x1a9(%ebp)
 8326d6c:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326d6f:	8b 00                	mov    (%eax),%eax
 8326d71:	83 c0 08             	add    $0x8,%eax
 8326d74:	8b 10                	mov    (%eax),%edx
 8326d76:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8326d7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326d80:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326d83:	89 04 24             	mov    %eax,(%esp)
 8326d86:	ff d2                	call   *%edx
 8326d88:	80 bd f8 fb ff ff 00 	cmpb   $0x0,-0x408(%ebp)
 8326d8f:	74 19                	je     8326daa <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x608>
 8326d91:	0f b6 85 f8 fb ff ff 	movzbl -0x408(%ebp),%eax
 8326d98:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326d9c:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8326da2:	89 04 24             	mov    %eax,(%esp)
 8326da5:	e8 52 a2 dc ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8326daa:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8326db0:	3d db 71 00 00       	cmp    $0x71db,%eax
 8326db5:	74 34                	je     8326deb <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x649>
 8326db7:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8326dbd:	3d d0 72 00 00       	cmp    $0x72d0,%eax
 8326dc2:	74 27                	je     8326deb <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x649>
 8326dc4:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8326dca:	3d 2d 74 00 00       	cmp    $0x742d,%eax
 8326dcf:	74 1a                	je     8326deb <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x649>
 8326dd1:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8326dd7:	3d 56 75 00 00       	cmp    $0x7556,%eax
 8326ddc:	74 0d                	je     8326deb <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x649>
 8326dde:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8326de4:	3d 61 76 00 00       	cmp    $0x7661,%eax
 8326de9:	75 16                	jne    8326e01 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x65f>
 8326deb:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 8326df2:	00 
 8326df3:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8326df9:	89 04 24             	mov    %eax,(%esp)
 8326dfc:	e8 fb a1 dc ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 8326e01:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8326e07:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326e0b:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326e0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326e12:	8b 45 08             	mov    0x8(%ebp),%eax
 8326e15:	89 04 24             	mov    %eax,(%esp)
 8326e18:	e8 f3 10 00 00       	call   8327f10 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item>
 8326e1d:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8326e24:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8326e2b:	e9 01 06 00 00       	jmp    8327431 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc8f>
 8326e30:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326e33:	8b 00                	mov    (%eax),%eax
 8326e35:	83 c0 10             	add    $0x10,%eax
 8326e38:	8b 10                	mov    (%eax),%edx
 8326e3a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326e3d:	89 04 24             	mov    %eax,(%esp)
 8326e40:	ff d2                	call   *%edx
 8326e42:	84 c0                	test   %al,%al
 8326e44:	0f 84 96 01 00 00    	je     8326fe0 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x83e>
 8326e4a:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326e4d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8326e50:	0f b6 85 fc fb ff ff 	movzbl -0x404(%ebp),%eax
 8326e57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326e5b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8326e5e:	89 04 24             	mov    %eax,(%esp)
 8326e61:	e8 ba a2 e2 ff       	call   8151120 <_ZNK10CEquipItem15getAvatarPeriodEh>
 8326e66:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8326e69:	0f b6 85 fc fb ff ff 	movzbl -0x404(%ebp),%eax
 8326e70:	0f be f8             	movsbl %al,%edi
 8326e73:	0f b6 85 00 fc ff ff 	movzbl -0x400(%ebp),%eax
 8326e7a:	0f be f0             	movsbl %al,%esi
 8326e7d:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8326e80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326e83:	89 04 24             	mov    %eax,(%esp)
 8326e86:	e8 03 34 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8326e8b:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8326e92:	00 
 8326e93:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8326e9a:	00 
 8326e9b:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 8326ea2:	00 
 8326ea3:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8326ea6:	89 54 24 18          	mov    %edx,0x18(%esp)
 8326eaa:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8326eae:	89 74 24 10          	mov    %esi,0x10(%esp)
 8326eb2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8326eb9:	00 
 8326eba:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8326ebd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8326ec1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8326ec5:	89 04 24             	mov    %eax,(%esp)
 8326ec8:	e8 d1 2c 1e 00       	call   8509b9e <_ZN10CInventory13AddAvatarItemEiibccPKc20eAvatarItemAddReasonbt>
 8326ecd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8326ed0:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8326ed4:	78 27                	js     8326efd <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x75b>
 8326ed6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8326ed9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8326edd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8326ee4:	00 
 8326ee5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8326eec:	00 
 8326eed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326ef0:	89 04 24             	mov    %eax,(%esp)
 8326ef3:	e8 62 57 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8326ef8:	e9 c4 00 00 00       	jmp    8326fc1 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x81f>
 8326efd:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8326f04:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8326f08:	74 23                	je     8326f2d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x78b>
 8326f0a:	81 7d c8 6d 01 00 00 	cmpl   $0x16d,-0x38(%ebp)
 8326f11:	74 1a                	je     8326f2d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x78b>
 8326f13:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8326f1a:	e8 7f 4d da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8326f1f:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8326f22:	69 d2 80 51 01 00    	imul   $0x15180,%edx,%edx
 8326f28:	01 d0                	add    %edx,%eax
 8326f2a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8326f2d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8326f34:	00 
 8326f35:	c7 44 24 08 75 5d c2 	movl   $0x8c25d75,0x8(%esp)
 8326f3c:	08 
 8326f3d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8326f44:	00 
 8326f45:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8326f4c:	e8 ad e8 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8326f51:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8326f54:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8326f57:	89 04 24             	mov    %eax,(%esp)
 8326f5a:	e8 51 74 d5 ff       	call   807e3b0 <strlen@plt>
 8326f5f:	89 85 f4 fb ff ff    	mov    %eax,-0x40c(%ebp)
 8326f65:	0f b6 85 fc fb ff ff 	movzbl -0x404(%ebp),%eax
 8326f6c:	0f be f8             	movsbl %al,%edi
 8326f6f:	0f b6 85 00 fc ff ff 	movzbl -0x400(%ebp),%eax
 8326f76:	0f be f0             	movsbl %al,%esi
 8326f79:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8326f7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326f7f:	89 04 24             	mov    %eax,(%esp)
 8326f82:	e8 c7 4c da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8326f87:	8b 95 f4 fb ff ff    	mov    -0x40c(%ebp),%edx
 8326f8d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8326f91:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8326f94:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8326f98:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8326f9b:	89 54 24 18          	mov    %edx,0x18(%esp)
 8326f9f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8326fa3:	89 74 24 10          	mov    %esi,0x10(%esp)
 8326fa7:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8326faa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8326fae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8326fb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326fb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326fb9:	89 04 24             	mov    %eax,(%esp)
 8326fbc:	e8 ef f1 22 00       	call   85561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>
 8326fc1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8326fc8:	00 
 8326fc9:	8b 45 10             	mov    0x10(%ebp),%eax
 8326fcc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326fd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326fd3:	89 04 24             	mov    %eax,(%esp)
 8326fd6:	e8 a9 bb 36 00       	call   8692b84 <_ZN5CUser20SendAradEventItemLogEmi>
 8326fdb:	e9 00 04 00 00       	jmp    83273e0 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc3e>
 8326fe0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326fe3:	8b 00                	mov    (%eax),%eax
 8326fe5:	83 c0 14             	add    $0x14,%eax
 8326fe8:	8b 10                	mov    (%eax),%edx
 8326fea:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326fed:	89 04 24             	mov    %eax,(%esp)
 8326ff0:	ff d2                	call   *%edx
 8326ff2:	84 c0                	test   %al,%al
 8326ff4:	0f 84 f7 00 00 00    	je     83270f1 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x94f>
 8326ffa:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326ffd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8327000:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8327003:	89 04 24             	mov    %eax,(%esp)
 8327006:	e8 fb a2 dc ff       	call   80f1306 <_ZNK5CItem17getExpirationDateEv>
 832700b:	89 c3                	mov    %eax,%ebx
 832700d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8327010:	89 04 24             	mov    %eax,(%esp)
 8327013:	e8 48 9c de ff       	call   8110c60 <_ZNK5CItem15getUsablePeriodEv>
 8327018:	89 5c 24 58          	mov    %ebx,0x58(%esp)
 832701c:	89 44 24 54          	mov    %eax,0x54(%esp)
 8327020:	c7 44 24 50 00 00 00 	movl   $0x0,0x50(%esp)
 8327027:	00 
 8327028:	8d 45 88             	lea    -0x78(%ebp),%eax
 832702b:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 832702f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 8327035:	89 44 24 48          	mov    %eax,0x48(%esp)
 8327039:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 832703f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8327043:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
 8327049:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832704d:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 8327053:	89 44 24 10          	mov    %eax,0x10(%esp)
 8327057:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 832705d:	89 44 24 14          	mov    %eax,0x14(%esp)
 8327061:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8327067:	89 44 24 18          	mov    %eax,0x18(%esp)
 832706b:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 8327071:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8327075:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 832707b:	89 44 24 20          	mov    %eax,0x20(%esp)
 832707f:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8327085:	89 44 24 24          	mov    %eax,0x24(%esp)
 8327089:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 832708f:	89 44 24 28          	mov    %eax,0x28(%esp)
 8327093:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8327099:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 832709d:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 83270a3:	89 44 24 30          	mov    %eax,0x30(%esp)
 83270a7:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 83270ad:	89 44 24 34          	mov    %eax,0x34(%esp)
 83270b1:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 83270b7:	89 44 24 38          	mov    %eax,0x38(%esp)
 83270bb:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 83270c1:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 83270c5:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 83270cb:	89 44 24 40          	mov    %eax,0x40(%esp)
 83270cf:	0f b6 85 8c fe ff ff 	movzbl -0x174(%ebp),%eax
 83270d6:	88 44 24 44          	mov    %al,0x44(%esp)
 83270da:	8b 45 0c             	mov    0xc(%ebp),%eax
 83270dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 83270e1:	8b 45 08             	mov    0x8(%ebp),%eax
 83270e4:	89 04 24             	mov    %eax,(%esp)
 83270e7:	e8 7a ec ff ff       	call   8325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>
 83270ec:	e9 ef 02 00 00       	jmp    83273e0 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc3e>
 83270f1:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 83270f8:	e8 a1 4b da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 83270fd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8327100:	8b 45 24             	mov    0x24(%ebp),%eax
 8327103:	89 44 24 60          	mov    %eax,0x60(%esp)
 8327107:	8b 45 20             	mov    0x20(%ebp),%eax
 832710a:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 832710e:	c7 44 24 58 00 00 00 	movl   $0x0,0x58(%esp)
 8327115:	00 
 8327116:	c7 44 24 54 01 00 00 	movl   $0x1,0x54(%esp)
 832711d:	00 
 832711e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8327121:	89 44 24 50          	mov    %eax,0x50(%esp)
 8327125:	8d 45 88             	lea    -0x78(%ebp),%eax
 8327128:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 832712c:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 8327133:	00 
 8327134:	8b 85 50 fe ff ff    	mov    -0x1b0(%ebp),%eax
 832713a:	89 44 24 08          	mov    %eax,0x8(%esp)
 832713e:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
 8327144:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8327148:	8b 85 58 fe ff ff    	mov    -0x1a8(%ebp),%eax
 832714e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8327152:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 8327158:	89 44 24 14          	mov    %eax,0x14(%esp)
 832715c:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 8327162:	89 44 24 18          	mov    %eax,0x18(%esp)
 8327166:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 832716c:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8327170:	8b 85 68 fe ff ff    	mov    -0x198(%ebp),%eax
 8327176:	89 44 24 20          	mov    %eax,0x20(%esp)
 832717a:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 8327180:	89 44 24 24          	mov    %eax,0x24(%esp)
 8327184:	8b 85 70 fe ff ff    	mov    -0x190(%ebp),%eax
 832718a:	89 44 24 28          	mov    %eax,0x28(%esp)
 832718e:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8327194:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8327198:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 832719e:	89 44 24 30          	mov    %eax,0x30(%esp)
 83271a2:	8b 85 7c fe ff ff    	mov    -0x184(%ebp),%eax
 83271a8:	89 44 24 34          	mov    %eax,0x34(%esp)
 83271ac:	8b 85 80 fe ff ff    	mov    -0x180(%ebp),%eax
 83271b2:	89 44 24 38          	mov    %eax,0x38(%esp)
 83271b6:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 83271bc:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 83271c0:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 83271c6:	89 44 24 40          	mov    %eax,0x40(%esp)
 83271ca:	0f b6 85 8c fe ff ff 	movzbl -0x174(%ebp),%eax
 83271d1:	88 44 24 44          	mov    %al,0x44(%esp)
 83271d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83271d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 83271dc:	8b 45 08             	mov    0x8(%ebp),%eax
 83271df:	89 04 24             	mov    %eax,(%esp)
 83271e2:	e8 3b e9 ff ff       	call   8325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>
 83271e7:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 83271ed:	89 c3                	mov    %eax,%ebx
 83271ef:	e8 a7 4f da ff       	call   80cc19b <_Z14G_CDataManagerv>
 83271f4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 83271f8:	89 04 24             	mov    %eax,(%esp)
 83271fb:	e8 32 88 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8327200:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8327203:	e8 93 4f da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8327208:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 832720f:	00 
 8327210:	89 04 24             	mov    %eax,(%esp)
 8327213:	e8 1a 88 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8327218:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832721b:	8b 85 52 fe ff ff    	mov    -0x1ae(%ebp),%eax
 8327221:	3d c1 00 00 00       	cmp    $0xc1,%eax
 8327226:	0f 85 b4 01 00 00    	jne    83273e0 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc3e>
 832722c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8327230:	0f 84 aa 01 00 00    	je     83273e0 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc3e>
 8327236:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 832723c:	89 04 24             	mov    %eax,(%esp)
 832723f:	e8 4e 3a e2 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8327244:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 832724a:	89 04 24             	mov    %eax,(%esp)
 832724d:	e8 f2 2f e5 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 8327252:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
 8327259:	00 00 00 
 832725c:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 8327262:	89 04 24             	mov    %eax,(%esp)
 8327265:	e8 ea 45 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 832726a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832726d:	8b 00                	mov    (%eax),%eax
 832726f:	83 c0 08             	add    $0x8,%eax
 8327272:	8b 10                	mov    (%eax),%edx
 8327274:	8d 85 13 fe ff ff    	lea    -0x1ed(%ebp),%eax
 832727a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832727e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8327281:	89 04 24             	mov    %eax,(%esp)
 8327284:	ff d2                	call   *%edx
 8327286:	c7 85 15 fe ff ff 10 	movl   $0x10,-0x1eb(%ebp)
 832728d:	00 00 00 
 8327290:	c7 85 1a fe ff ff 01 	movl   $0x1,-0x1e6(%ebp)
 8327297:	00 00 00 
 832729a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 83272a0:	89 44 24 60          	mov    %eax,0x60(%esp)
 83272a4:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 83272aa:	89 44 24 5c          	mov    %eax,0x5c(%esp)
 83272ae:	c7 44 24 58 01 00 00 	movl   $0x1,0x58(%esp)
 83272b5:	00 
 83272b6:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%esp)
 83272bd:	00 
 83272be:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83272c1:	89 44 24 50          	mov    %eax,0x50(%esp)
 83272c5:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 83272cb:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 83272cf:	c7 44 24 48 52 c3 00 	movl   $0xc352,0x48(%esp)
 83272d6:	00 
 83272d7:	8b 85 13 fe ff ff    	mov    -0x1ed(%ebp),%eax
 83272dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 83272e1:	8b 85 17 fe ff ff    	mov    -0x1e9(%ebp),%eax
 83272e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83272eb:	8b 85 1b fe ff ff    	mov    -0x1e5(%ebp),%eax
 83272f1:	89 44 24 10          	mov    %eax,0x10(%esp)
 83272f5:	8b 85 1f fe ff ff    	mov    -0x1e1(%ebp),%eax
 83272fb:	89 44 24 14          	mov    %eax,0x14(%esp)
 83272ff:	8b 85 23 fe ff ff    	mov    -0x1dd(%ebp),%eax
 8327305:	89 44 24 18          	mov    %eax,0x18(%esp)
 8327309:	8b 85 27 fe ff ff    	mov    -0x1d9(%ebp),%eax
 832730f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8327313:	8b 85 2b fe ff ff    	mov    -0x1d5(%ebp),%eax
 8327319:	89 44 24 20          	mov    %eax,0x20(%esp)
 832731d:	8b 85 2f fe ff ff    	mov    -0x1d1(%ebp),%eax
 8327323:	89 44 24 24          	mov    %eax,0x24(%esp)
 8327327:	8b 85 33 fe ff ff    	mov    -0x1cd(%ebp),%eax
 832732d:	89 44 24 28          	mov    %eax,0x28(%esp)
 8327331:	8b 85 37 fe ff ff    	mov    -0x1c9(%ebp),%eax
 8327337:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 832733b:	8b 85 3b fe ff ff    	mov    -0x1c5(%ebp),%eax
 8327341:	89 44 24 30          	mov    %eax,0x30(%esp)
 8327345:	8b 85 3f fe ff ff    	mov    -0x1c1(%ebp),%eax
 832734b:	89 44 24 34          	mov    %eax,0x34(%esp)
 832734f:	8b 85 43 fe ff ff    	mov    -0x1bd(%ebp),%eax
 8327355:	89 44 24 38          	mov    %eax,0x38(%esp)
 8327359:	8b 85 47 fe ff ff    	mov    -0x1b9(%ebp),%eax
 832735f:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 8327363:	8b 85 4b fe ff ff    	mov    -0x1b5(%ebp),%eax
 8327369:	89 44 24 40          	mov    %eax,0x40(%esp)
 832736d:	0f b6 85 4f fe ff ff 	movzbl -0x1b1(%ebp),%eax
 8327374:	88 44 24 44          	mov    %al,0x44(%esp)
 8327378:	8b 45 0c             	mov    0xc(%ebp),%eax
 832737b:	89 44 24 04          	mov    %eax,0x4(%esp)
 832737f:	8b 45 08             	mov    0x8(%ebp),%eax
 8327382:	89 04 24             	mov    %eax,(%esp)
 8327385:	e8 98 e7 ff ff       	call   8325b22 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE>
 832738a:	eb 18                	jmp    83273a4 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc02>
 832738c:	89 d3                	mov    %edx,%ebx
 832738e:	89 c6                	mov    %eax,%esi
 8327390:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 8327396:	89 04 24             	mov    %eax,(%esp)
 8327399:	e8 5e 2f e5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 832739e:	89 f0                	mov    %esi,%eax
 83273a0:	89 da                	mov    %ebx,%edx
 83273a2:	eb 10                	jmp    83273b4 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc12>
 83273a4:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 83273aa:	89 04 24             	mov    %eax,(%esp)
 83273ad:	e8 4a 2f e5 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 83273b2:	eb 1e                	jmp    83273d2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc30>
 83273b4:	89 d3                	mov    %edx,%ebx
 83273b6:	89 c6                	mov    %eax,%esi
 83273b8:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 83273be:	89 04 24             	mov    %eax,(%esp)
 83273c1:	e8 e0 38 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 83273c6:	89 f0                	mov    %esi,%eax
 83273c8:	89 da                	mov    %ebx,%edx
 83273ca:	89 04 24             	mov    %eax,(%esp)
 83273cd:	e8 7e c3 7b 00       	call   8ae3750 <_Unwind_Resume>
 83273d2:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 83273d8:	89 04 24             	mov    %eax,(%esp)
 83273db:	e8 c6 38 e2 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 83273e0:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83273e3:	89 04 24             	mov    %eax,(%esp)
 83273e6:	e8 0f 9f dc ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 83273eb:	84 c0                	test   %al,%al
 83273ed:	74 29                	je     8327418 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc76>
 83273ef:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 83273f2:	89 04 24             	mov    %eax,(%esp)
 83273f5:	e8 3f f3 ff ff       	call   8326739 <_Z14_isPackageItemPK5CItem>
 83273fa:	83 f0 01             	xor    $0x1,%eax
 83273fd:	84 c0                	test   %al,%al
 83273ff:	74 2c                	je     832742d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc8b>
 8327401:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 8327407:	89 44 24 04          	mov    %eax,0x4(%esp)
 832740b:	8b 45 20             	mov    0x20(%ebp),%eax
 832740e:	89 04 24             	mov    %eax,(%esp)
 8327411:	e8 4c fe f0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 8327416:	eb 15                	jmp    832742d <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xc8b>
 8327418:	8d 85 50 fe ff ff    	lea    -0x1b0(%ebp),%eax
 832741e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327422:	8b 45 20             	mov    0x20(%ebp),%eax
 8327425:	89 04 24             	mov    %eax,(%esp)
 8327428:	e8 35 fe f0 ff       	call   8237262 <_ZNSt6vectorI10Inven_ItemSaIS0_EE9push_backERKS0_>
 832742d:	83 45 c0 01          	addl   $0x1,-0x40(%ebp)
 8327431:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8327434:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 8327437:	0f 9c c0             	setl   %al
 832743a:	84 c0                	test   %al,%al
 832743c:	0f 85 ee f9 ff ff    	jne    8326e30 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0x68e>
 8327442:	eb 04                	jmp    8327448 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca6>
 8327444:	90                   	nop
 8327445:	eb 01                	jmp    8327448 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh+0xca6>
 8327447:	90                   	nop
 8327448:	81 c4 7c 04 00 00    	add    $0x47c,%esp
 832744e:	5b                   	pop    %ebx
 832744f:	5e                   	pop    %esi
 8327450:	5f                   	pop    %edi
 8327451:	5d                   	pop    %ebp
 8327452:	c3                   	ret
 8327453:	90                   	nop

```

```c
// WongWork::CCeraShop::_processAdditionalItem @ 0x83267a2

/* WongWork::CCeraShop::_processAdditionalItem(CUser*, unsigned long, unsigned short, unsigned char,
   unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, unsigned char) */

void __thiscall
WongWork::CCeraShop::_processAdditionalItem
          (CCeraShop *this,CUser *param_1,ulong param_2,ushort param_3,uchar param_4,uchar param_5,
          vector *param_6,stCeraShopItemParam_t *param_7,uchar param_8)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  CInventory *pCVar6;
  size_t sVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  bool bVar12;
  byte bVar13;
  char local_3f1;
  char local_3f0 [511];
  undefined2 local_1f1;
  undefined2 uStack_1ef;
  undefined2 uStack_1ed;
  undefined1 uStack_1eb;
  undefined4 uStack_1ea;
  byte bStack_1e6;
  undefined4 local_1e5;
  undefined4 local_1e1;
  undefined4 local_1dd;
  undefined4 local_1d9;
  undefined4 local_1d5;
  undefined4 local_1d1;
  undefined4 local_1cd;
  undefined4 local_1c9;
  undefined4 local_1c5;
  undefined4 local_1c1;
  undefined4 local_1bd;
  undefined4 local_1b9;
  undefined1 local_1b5;
  undefined2 local_1b4;
  undefined4 uStack_1b2;
  undefined1 uStack_1ae;
  uint uStack_1ad;
  undefined1 uStack_1a9;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 local_178;
  undefined2 local_177;
  undefined4 uStack_175;
  undefined1 uStack_171;
  uint uStack_170;
  undefined1 uStack_16c;
  undefined4 local_16b;
  undefined4 local_167;
  undefined4 local_163;
  undefined4 local_15f;
  undefined4 local_15b;
  undefined4 local_157;
  undefined4 local_153;
  undefined4 local_14f;
  undefined4 local_14b;
  undefined4 local_147;
  undefined4 local_143;
  undefined4 local_13f;
  undefined1 local_13b;
  Inven_Item local_13a [2];
  int local_138;
  uint local_133;
  Inven_Item local_fd [2];
  undefined4 local_fb;
  uint local_f6;
  undefined4 local_c0;
  stCeraShopItemParam_t local_bc [24];
  vector<Inven_Item,std::allocator<Inven_Item>> local_a4 [12];
  undefined1 local_98 [4];
  PacketGuard local_94 [12];
  PacketGuard local_88 [12];
  undefined4 local_7c;
  char local_78 [24];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  CItem *local_50;
  uint local_4c;
  int local_48;
  int local_44;
  CEquipItem *local_40;
  int local_3c;
  int local_38;
  int local_34;
  char *local_30;
  CItem *local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  
  bVar13 = 0;
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 != 0) {
    if (param_2 == 1) {
      _processCoin((CUser *)this,(ushort)param_1,SUB21(param_3,0));
      Inven_Item::Inven_Item(local_fd);
      local_fb = 1;
      local_f6 = (uint)param_3;
      std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,local_fd);
    }
    else {
      local_60 = 0;
      local_5c = 0;
      local_58 = -1;
      pcVar10 = &local_3f1;
      uVar11 = 0x200;
      bVar12 = ((uint)pcVar10 & 1) != 0;
      if (bVar12) {
        local_3f1 = '\0';
        pcVar10 = local_3f0;
        uVar11 = 0x1ff;
      }
      if (((uint)pcVar10 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
        uVar11 = uVar11 - 2;
      }
      for (uVar9 = uVar11 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar13 * -2 + 1) * 4;
      }
      if ((uVar11 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      if (bVar12) {
        *pcVar10 = '\0';
      }
      local_54 = 0;
      if (local_58 == -1) {
        pCVar4 = (CDataManager *)G_CDataManager();
        local_50 = (CItem *)CDataManager::find_item(pCVar4,param_2);
        if (local_50 != (CItem *)0x0) {
          cVar2 = CItem::is_stackable(local_50);
          if ((cVar2 == '\0') ||
             ((iVar3 = (**(code **)(*(int *)local_50 + 0xc))(local_50), iVar3 != 0x10 &&
              (iVar3 = (**(code **)(*(int *)local_50 + 0xc))(local_50), iVar3 != 0x22)))) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (bVar12) {
            local_48 = 0xffffffff;
            Inven_Item::Inven_Item((Inven_Item *)&local_177);
            uStack_170 = (uint)param_3;
            uStack_175 = param_2;
            (**(code **)(*(int *)local_50 + 8))(local_50,&local_177);
            uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_48 = CInventory::insertItemIntoInventory
                                 (uVar5,CONCAT22((undefined2)uStack_175,local_177),
                                  CONCAT13((undefined1)uStack_170,
                                           CONCAT12(uStack_171,uStack_175._2_2_)),
                                  CONCAT13(uStack_16c,uStack_170._1_3_),local_16b,local_167,
                                  local_163,local_15f,local_15b,local_157,local_153,local_14f,
                                  local_14b,local_147,local_143,local_13f,local_13b,0xf,1,0);
            if (local_48 == -1) {
              uVar11 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CMailBoxHelper::ReqDBSendNewMailCashShop
                        (param_1,(Inven_Item *)&local_177,0,uVar11,true,(char *)0x0,0);
            }
            else {
              CUser::SendUpdateItemList(param_1,1,0,local_48);
            }
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                       (Inven_Item *)&local_177);
          }
          else {
            local_4c = (uint)param_3;
            cVar2 = CItem::is_stackable(local_50);
            if (cVar2 != '\0') {
              local_4c = 1;
            }
            uVar11 = 0;
            do {
              pcVar10 = local_78 + uVar11;
              pcVar10[0] = '\0';
              pcVar10[1] = '\0';
              pcVar10[2] = '\0';
              pcVar10[3] = '\0';
              uVar11 = uVar11 + 4;
            } while (uVar11 < 0x18);
            cVar2 = (**(code **)(*(int *)local_50 + 0x10))(local_50);
            if (cVar2 != '\0') {
              uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              CGenUniqueNo::genIPGNo(3,uVar5,local_78);
            }
            Inven_Item::Inven_Item((Inven_Item *)&local_1b4);
            uStack_1ad = (uint)param_3;
            uStack_1b2 = param_2;
            (**(code **)(*(int *)local_50 + 8))(local_50,&local_1b4);
            if (param_8 != '\0') {
              Inven_Item::SetUpgrade((Inven_Item *)&local_1b4,param_8);
            }
            if ((((uStack_1b2 == 0x71db) || (uStack_1b2 == 0x72d0)) || (uStack_1b2 == 0x742d)) ||
               ((uStack_1b2 == 0x7556 || (uStack_1b2 == 0x7661)))) {
              Inven_Item::SetUpgrade((Inven_Item *)&local_1b4,'\f');
            }
            autoUnsealItem(this,local_50,(Inven_Item *)&local_1b4);
            local_7c = 0;
            for (local_44 = 0; local_44 < (int)local_4c; local_44 = local_44 + 1) {
              cVar2 = (**(code **)(*(int *)local_50 + 0x10))(local_50);
              if (cVar2 == '\0') {
                cVar2 = (**(code **)(*(int *)local_50 + 0x14))(local_50);
                if (cVar2 == '\0') {
                  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                  _processItem(this,param_1,CONCAT22((undefined2)uStack_1b2,local_1b4),
                               CONCAT13((undefined1)uStack_1ad,CONCAT12(uStack_1ae,uStack_1b2._2_2_)
                                       ),CONCAT13(uStack_1a9,uStack_1ad._1_3_),local_1a8,local_1a4,
                               local_1a0,local_19c,local_198,local_194,local_190,local_18c,local_188
                               ,local_184,local_180,local_17c,local_178,0,&local_7c,local_28,1,0,
                               param_6,param_7);
                  uVar1 = uStack_1b2;
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_24 = CDataManager::find_item(pCVar4,uVar1);
                  pCVar4 = (CDataManager *)G_CDataManager();
                  local_20 = (int *)CDataManager::find_item(pCVar4,0x10);
                  if ((uStack_1b2 == 0xc1) && (local_24 != 0)) {
                    std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_a4);
                    /* try { // try from 0832724d to 08327251 has its CatchHandler @ 083273b4 */
                    stCeraShopItemParam_t::stCeraShopItemParam_t(local_bc);
                    local_c0 = 0;
                    Inven_Item::Inven_Item((Inven_Item *)&local_1f1);
                    /* try { // try from 08327284 to 08327389 has its CatchHandler @ 0832738c */
                    (**(code **)(*local_20 + 8))(local_20,&local_1f1);
                    uStack_1ef = 0x10;
                    uStack_1ed = 0;
                    uStack_1ea = 1;
                    _processItem(this,param_1,CONCAT22(0x10,local_1f1),
                                 (uint)CONCAT11(1,uStack_1eb) << 0x10,(uint)bStack_1e6 << 0x18,
                                 local_1e5,local_1e1,local_1dd,local_1d9,local_1d5,local_1d1,
                                 local_1cd,local_1c9,local_1c5,local_1c1,local_1bd,local_1b9,
                                 local_1b5,0xc352,&local_c0,local_28,0,1,local_a4,local_bc);
                    /* try { // try from 083273ad to 083273b1 has its CatchHandler @ 083273b4 */
                    stCeraShopItemParam_t::~stCeraShopItemParam_t(local_bc);
                    std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_a4);
                  }
                }
                else {
                  local_2c = local_50;
                  uVar5 = CItem::getExpirationDate(local_50);
                  uVar8 = CItem::getUsablePeriod(local_2c);
                  _processCreature(this,param_1,CONCAT22((undefined2)uStack_1b2,local_1b4),
                                   CONCAT13((undefined1)uStack_1ad,
                                            CONCAT12(uStack_1ae,uStack_1b2._2_2_)),
                                   CONCAT13(uStack_1a9,uStack_1ad._1_3_),local_1a8,local_1a4,
                                   local_1a0,local_19c,local_198,local_194,local_190,local_18c,
                                   local_188,local_184,local_180,local_17c,local_178,local_98,
                                   &local_7c,0,uVar8,uVar5);
                }
              }
              else {
                local_40 = (CEquipItem *)local_50;
                local_3c = CEquipItem::getAvatarPeriod((CEquipItem *)local_50,param_5);
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                local_38 = CInventory::AddAvatarItem
                                     (pCVar6,param_2,local_3c,0,(int)(char)param_4,
                                      (int)(char)param_5,local_78,0,0,0);
                if (local_38 < 0) {
                  local_34 = 0;
                  if ((local_3c != 0) && (local_3c != 0x16d)) {
                    local_34 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    local_34 = local_34 + local_3c * 0x15180;
                  }
                  local_30 = (char *)RDARScriptStringManager::findString
                                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                                "game_server_msg_104",(bool *)0x0);
                  sVar7 = strlen(local_30);
                  iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                  CMailBoxHelper::ReqDBSendNewAvatarMail
                            (param_1,iVar3,param_2,local_34,param_4,param_5,local_78,local_30,sVar7)
                  ;
                }
                else {
                  CUser::SendUpdateItemList(param_1,1,1,local_38);
                }
                CUser::SendAradEventItemLog(param_1,param_2,1);
              }
              cVar2 = CItem::is_stackable(local_50);
              if (cVar2 == '\0') {
                std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                          ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                           (Inven_Item *)&local_1b4);
              }
              else {
                cVar2 = _isPackageItem(local_50);
                if (cVar2 != '\x01') {
                  std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,
                             (Inven_Item *)&local_1b4);
                }
              }
            }
          }
        }
      }
      else {
        PacketGuard::PacketGuard(local_88);
                    /* try { // try from 083268fc to 0832699d has its CatchHandler @ 08326a87 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_88,1,local_60);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_88,1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_88,local_5c);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_88,true);
        CUser::Send(param_1,local_88);
        Inven_Item::Inven_Item(local_13a);
        local_138 = local_58;
        local_133 = (uint)param_3;
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_6,local_13a);
        PacketGuard::PacketGuard(local_94);
                    /* try { // try from 083269b7 to 08326a5c has its CatchHandler @ 08326a5f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_94,local_54);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_94,&local_3f1,local_54);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
        CUser::Send(param_1,local_94);
                    /* try { // try from 08326a80 to 08326a84 has its CatchHandler @ 08326a87 */
        PacketGuard::~PacketGuard(local_94);
        PacketGuard::~PacketGuard(local_88);
      }
    }
  }
  return;
}

```

---

## _processAvatarGift

```asm
// === 08326036 WongWork::CCeraShop::_processAvatarGift  [0x08326036-0x832619b] ===
 8326036:	55                   	push   %ebp
 8326037:	89 e5                	mov    %esp,%ebp
 8326039:	57                   	push   %edi
 832603a:	53                   	push   %ebx
 832603b:	81 ec 50 01 00 00    	sub    $0x150,%esp
 8326041:	8b 55 18             	mov    0x18(%ebp),%edx
 8326044:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8326047:	88 95 e4 fe ff ff    	mov    %dl,-0x11c(%ebp)
 832604d:	88 85 e0 fe ff ff    	mov    %al,-0x120(%ebp)
 8326053:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 832605a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 832605e:	74 23                	je     8326083 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji+0x4d>
 8326060:	81 7d 14 6d 01 00 00 	cmpl   $0x16d,0x14(%ebp)
 8326067:	74 1a                	je     8326083 <_ZN8WongWork9CCeraShop18_processAvatarGiftEP5CUseriiccPKcji+0x4d>
 8326069:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8326070:	e8 29 5c da ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8326075:	8b 55 14             	mov    0x14(%ebp),%edx
 8326078:	69 d2 80 51 01 00    	imul   $0x15180,%edx,%edx
 832607e:	01 d0                	add    %edx,%eax
 8326080:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8326083:	8d 9d f4 fe ff ff    	lea    -0x10c(%ebp),%ebx
 8326089:	b8 00 00 00 00       	mov    $0x0,%eax
 832608e:	ba 40 00 00 00       	mov    $0x40,%edx
 8326093:	89 df                	mov    %ebx,%edi
 8326095:	89 d1                	mov    %edx,%ecx
 8326097:	f3 ab                	rep stos %eax,%es:(%edi)
 8326099:	8b 45 0c             	mov    0xc(%ebp),%eax
 832609c:	89 04 24             	mov    %eax,(%esp)
 832609f:	e8 84 af dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 83260a4:	89 c3                	mov    %eax,%ebx
 83260a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83260ad:	00 
 83260ae:	c7 44 24 08 52 5e c2 	movl   $0x8c25e52,0x8(%esp)
 83260b5:	08 
 83260b6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83260bd:	00 
 83260be:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 83260c5:	e8 34 f7 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 83260ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83260ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 83260d2:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 83260d8:	89 04 24             	mov    %eax,(%esp)
 83260db:	e8 60 83 d5 ff       	call   807e440 <sprintf@plt>
 83260e0:	8b 55 10             	mov    0x10(%ebp),%edx
 83260e3:	8b 45 28             	mov    0x28(%ebp),%eax
 83260e6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 83260e9:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 83260ef:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 83260f6:	00 
 83260f7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83260fb:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8326102:	00 
 8326103:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326107:	89 0c 24             	mov    %ecx,(%esp)
 832610a:	e8 cb e7 35 00       	call   86848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>
 832610f:	8b 55 10             	mov    0x10(%ebp),%edx
 8326112:	8b 45 28             	mov    0x28(%ebp),%eax
 8326115:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 832611c:	00 
 832611d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8326121:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326125:	8b 45 24             	mov    0x24(%ebp),%eax
 8326128:	89 44 24 04          	mov    %eax,0x4(%esp)
 832612c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832612f:	89 04 24             	mov    %eax,(%esp)
 8326132:	e8 43 47 36 00       	call   868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>
 8326137:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 832613d:	89 04 24             	mov    %eax,(%esp)
 8326140:	e8 6b 82 d5 ff       	call   807e3b0 <strlen@plt>
 8326145:	89 c1                	mov    %eax,%ecx
 8326147:	0f be 95 e0 fe ff ff 	movsbl -0x120(%ebp),%edx
 832614e:	0f be 85 e4 fe ff ff 	movsbl -0x11c(%ebp),%eax
 8326155:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8326159:	8d 8d f4 fe ff ff    	lea    -0x10c(%ebp),%ecx
 832615f:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8326163:	8b 4d 20             	mov    0x20(%ebp),%ecx
 8326166:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 832616a:	89 54 24 14          	mov    %edx,0x14(%esp)
 832616e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8326172:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8326175:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8326179:	8b 45 10             	mov    0x10(%ebp),%eax
 832617c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326180:	8b 45 28             	mov    0x28(%ebp),%eax
 8326183:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326187:	8b 45 0c             	mov    0xc(%ebp),%eax
 832618a:	89 04 24             	mov    %eax,(%esp)
 832618d:	e8 84 0d 23 00       	call   8556f16 <_ZN8WongWork14CMailBoxHelper30ReqDBSendNewAvatarMailCashShopEP5CUseriiiccPKcS4_i>
 8326192:	81 c4 50 01 00 00    	add    $0x150,%esp
 8326198:	5b                   	pop    %ebx
 8326199:	5f                   	pop    %edi
 832619a:	5d                   	pop    %ebp
 832619b:	c3                   	ret

```

```c
// WongWork::CCeraShop::_processAvatarGift @ 0x8326036

/* WongWork::CCeraShop::_processAvatarGift(CUser*, int, int, char, char, char const*, unsigned int,
   int) */

void __thiscall
WongWork::CCeraShop::_processAvatarGift
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,char param_4,char param_5,
          char *param_6,uint param_7,int param_8)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
  char local_110 [256];
  int local_10;
  
  bVar5 = 0;
  local_10 = 0;
  if ((param_3 != 0) && (param_3 != 0x16d)) {
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_10 = local_10 + param_3 * 0x15180;
  }
  pcVar2 = local_110;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + ((uint)bVar5 * -2 + 1) * 4;
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(local_110,pcVar2,uVar1);
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_8,'\x02',param_2,1);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_7,param_8,param_2,1);
  sVar3 = strlen(local_110);
  CMailBoxHelper::ReqDBSendNewAvatarMailCashShop
            (param_1,param_8,param_2,local_10,param_4,param_5,param_6,local_110,sVar3);
  return;
}

```

---

## _processBoosterSelect

```asm
// === 08327894 WongWork::CCeraShop::_processBoosterSelect  [0x08327894-0x8327bb5] ===
 8327894:	55                   	push   %ebp
 8327895:	89 e5                	mov    %esp,%ebp
 8327897:	57                   	push   %edi
 8327898:	56                   	push   %esi
 8327899:	53                   	push   %ebx
 832789a:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 83278a0:	8b 4d 20             	mov    0x20(%ebp),%ecx
 83278a3:	8b 55 2c             	mov    0x2c(%ebp),%edx
 83278a6:	8b 45 30             	mov    0x30(%ebp),%eax
 83278a9:	88 4d b4             	mov    %cl,-0x4c(%ebp)
 83278ac:	88 55 b0             	mov    %dl,-0x50(%ebp)
 83278af:	88 45 ac             	mov    %al,-0x54(%ebp)
 83278b2:	e8 e4 48 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 83278b7:	8b 55 10             	mov    0x10(%ebp),%edx
 83278ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 83278be:	89 04 24             	mov    %eax,(%esp)
 83278c1:	e8 6c 81 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 83278c6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 83278c9:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 83278cd:	0f 84 d1 02 00 00    	je     8327ba4 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x310>
 83278d3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83278d6:	89 04 24             	mov    %eax,(%esp)
 83278d9:	e8 ca a1 de ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 83278de:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 83278e1:	8d 55 ac             	lea    -0x54(%ebp),%edx
 83278e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 83278e8:	8d 55 b0             	lea    -0x50(%ebp),%edx
 83278eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 83278ef:	89 04 24             	mov    %eax,(%esp)
 83278f2:	e8 7c 00 f1 ff       	call   8237973 <_ZSt9make_pairIRcS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 83278f7:	83 ec 04             	sub    $0x4,%esp
 83278fa:	8b 45 d8             	mov    -0x28(%ebp),%eax
 83278fd:	8d 88 4c 02 00 00    	lea    0x24c(%eax),%ecx
 8327903:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8327906:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 8327909:	89 54 24 08          	mov    %edx,0x8(%esp)
 832790d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8327911:	89 04 24             	mov    %eax,(%esp)
 8327914:	e8 99 00 f1 ff       	call   82379b2 <_ZNKSt3mapISt4pairIccESt6vectorI28stStackableBoosterItemInfo_tSaIS3_EESt4lessIS1_ESaIS0_IKS1_S5_EEE4findERS8_>
 8327919:	83 ec 04             	sub    $0x4,%esp
 832791c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832791f:	8d 90 4c 02 00 00    	lea    0x24c(%eax),%edx
 8327925:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8327928:	89 54 24 04          	mov    %edx,0x4(%esp)
 832792c:	89 04 24             	mov    %eax,(%esp)
 832792f:	e8 aa 00 f1 ff       	call   82379de <_ZNKSt3mapISt4pairIccESt6vectorI28stStackableBoosterItemInfo_tSaIS3_EESt4lessIS1_ESaIS0_IKS1_S5_EEE3endEv>
 8327934:	83 ec 04             	sub    $0x4,%esp
 8327937:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 832793a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832793e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8327941:	89 04 24             	mov    %eax,(%esp)
 8327944:	e8 95 5e f1 ff       	call   823d7de <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKS0_IccESt6vectorI28stStackableBoosterItemInfo_tSaIS4_EEEEeqERKS8_>
 8327949:	84 c0                	test   %al,%al
 832794b:	74 0f                	je     832795c <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0xc8>
 832794d:	be 00 00 00 00       	mov    $0x0,%esi
 8327952:	bb 00 00 00 00       	mov    $0x0,%ebx
 8327957:	e9 39 02 00 00       	jmp    8327b95 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x301>
 832795c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 832795f:	89 04 24             	mov    %eax,(%esp)
 8327962:	e8 b1 00 f1 ff       	call   8237a18 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKS0_IccESt6vectorI28stStackableBoosterItemInfo_tSaIS4_EEEEptEv>
 8327967:	83 c0 04             	add    $0x4,%eax
 832796a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 832796d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8327974:	eb 79                	jmp    83279ef <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x15b>
 8327976:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 832797d:	eb 57                	jmp    83279d6 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x142>
 832797f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8327982:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327986:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8327989:	89 04 24             	mov    %eax,(%esp)
 832798c:	e8 7f 0a 00 00       	call   8328410 <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEixEj>
 8327991:	8b 18                	mov    (%eax),%ebx
 8327993:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8327996:	89 44 24 04          	mov    %eax,0x4(%esp)
 832799a:	8b 45 24             	mov    0x24(%ebp),%eax
 832799d:	89 04 24             	mov    %eax,(%esp)
 83279a0:	e8 7d 0a 00 00       	call   8328422 <_ZNSt6vectorI10Inven_ItemSaIS0_EEixEj>
 83279a5:	8b 40 02             	mov    0x2(%eax),%eax
 83279a8:	39 c3                	cmp    %eax,%ebx
 83279aa:	0f 94 c0             	sete   %al
 83279ad:	84 c0                	test   %al,%al
 83279af:	74 21                	je     83279d2 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x13e>
 83279b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83279b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 83279b8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83279bb:	89 04 24             	mov    %eax,(%esp)
 83279be:	e8 4d 0a 00 00       	call   8328410 <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEixEj>
 83279c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 83279c7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83279ca:	89 04 24             	mov    %eax,(%esp)
 83279cd:	e8 64 0a 00 00       	call   8328436 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE9push_backERKS0_>
 83279d2:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 83279d6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 83279d9:	89 04 24             	mov    %eax,(%esp)
 83279dc:	e8 89 00 f1 ff       	call   8237a6a <_ZNKSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE4sizeEv>
 83279e1:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 83279e4:	0f 97 c0             	seta   %al
 83279e7:	84 c0                	test   %al,%al
 83279e9:	75 94                	jne    832797f <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0xeb>
 83279eb:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 83279ef:	8b 45 24             	mov    0x24(%ebp),%eax
 83279f2:	89 04 24             	mov    %eax,(%esp)
 83279f5:	e8 64 2c e5 ff       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 83279fa:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 83279fd:	0f 9f c0             	setg   %al
 8327a00:	84 c0                	test   %al,%al
 8327a02:	0f 85 6e ff ff ff    	jne    8327976 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0xe2>
 8327a08:	8b 45 24             	mov    0x24(%ebp),%eax
 8327a0b:	89 04 24             	mov    %eax,(%esp)
 8327a0e:	e8 bd b0 e2 ff       	call   8152ad0 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5clearEv>
 8327a13:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a16:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8327a19:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327a1d:	89 04 24             	mov    %eax,(%esp)
 8327a20:	e8 f5 a0 de ff       	call   8111b1a <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE5beginEv>
 8327a25:	83 ec 04             	sub    $0x4,%esp
 8327a28:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8327a2b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8327a2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327a32:	89 04 24             	mov    %eax,(%esp)
 8327a35:	e8 1e a1 de ff       	call   8111b58 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EE3endEv>
 8327a3a:	83 ec 04             	sub    $0x4,%esp
 8327a3d:	e9 a0 00 00 00       	jmp    8327ae2 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x24e>
 8327a42:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a45:	89 04 24             	mov    %eax,(%esp)
 8327a48:	e8 9f 0a 00 00       	call   83284ec <_ZNK9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8327a4d:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8327a51:	0f b6 c0             	movzbl %al,%eax
 8327a54:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8327a57:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a5a:	89 04 24             	mov    %eax,(%esp)
 8327a5d:	e8 8a 0a 00 00       	call   83284ec <_ZNK9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8327a62:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 8327a66:	0f b6 c0             	movzbl %al,%eax
 8327a69:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8327a6c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a6f:	89 04 24             	mov    %eax,(%esp)
 8327a72:	e8 75 0a 00 00       	call   83284ec <_ZNK9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8327a77:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 8327a7b:	0f b6 f8             	movzbl %al,%edi
 8327a7e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a81:	89 04 24             	mov    %eax,(%esp)
 8327a84:	e8 63 0a 00 00       	call   83284ec <_ZNK9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8327a89:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8327a8d:	0f b7 d8             	movzwl %ax,%ebx
 8327a90:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327a93:	89 04 24             	mov    %eax,(%esp)
 8327a96:	e8 51 0a 00 00       	call   83284ec <_ZNK9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEptEv>
 8327a9b:	8b 00                	mov    (%eax),%eax
 8327a9d:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8327aa0:	89 54 24 20          	mov    %edx,0x20(%esp)
 8327aa4:	8b 55 28             	mov    0x28(%ebp),%edx
 8327aa7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8327aab:	8b 55 24             	mov    0x24(%ebp),%edx
 8327aae:	89 54 24 18          	mov    %edx,0x18(%esp)
 8327ab2:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8327ab5:	89 54 24 14          	mov    %edx,0x14(%esp)
 8327ab9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8327abd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8327ac1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8327ac5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327ac8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327acc:	8b 45 08             	mov    0x8(%ebp),%eax
 8327acf:	89 04 24             	mov    %eax,(%esp)
 8327ad2:	e8 cb ec ff ff       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 8327ad7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327ada:	89 04 24             	mov    %eax,(%esp)
 8327add:	e8 f4 09 00 00       	call   83284d6 <_ZN9__gnu_cxx17__normal_iteratorIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEppEv>
 8327ae2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8327ae5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327ae9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8327aec:	89 04 24             	mov    %eax,(%esp)
 8327aef:	e8 b5 09 00 00       	call   83284a9 <_ZN9__gnu_cxxneIP28stStackableBoosterItemInfo_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8327af4:	84 c0                	test   %al,%al
 8327af6:	0f 85 46 ff ff ff    	jne    8327a42 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x1ae>
 8327afc:	e8 9a 46 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8327b01:	8b 40 0c             	mov    0xc(%eax),%eax
 8327b04:	8b 55 10             	mov    0x10(%ebp),%edx
 8327b07:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327b0b:	89 04 24             	mov    %eax,(%esp)
 8327b0e:	e8 f9 25 e5 ff       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8327b13:	89 45 14             	mov    %eax,0x14(%ebp)
 8327b16:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8327b1a:	74 4c                	je     8327b68 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x2d4>
 8327b1c:	8b 45 14             	mov    0x14(%ebp),%eax
 8327b1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327b23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327b26:	89 04 24             	mov    %eax,(%esp)
 8327b29:	e8 4a 5d 32 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8327b2e:	83 f0 01             	xor    $0x1,%eax
 8327b31:	84 c0                	test   %al,%al
 8327b33:	74 33                	je     8327b68 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x2d4>
 8327b35:	8b 45 14             	mov    0x14(%ebp),%eax
 8327b38:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327b3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327b3f:	89 04 24             	mov    %eax,(%esp)
 8327b42:	e8 07 5d 32 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 8327b47:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8327b4e:	00 
 8327b4f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8327b52:	89 44 24 08          	mov    %eax,0x8(%esp)
 8327b56:	8b 45 14             	mov    0x14(%ebp),%eax
 8327b59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327b5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327b60:	89 04 24             	mov    %eax,(%esp)
 8327b63:	e8 c8 de ff ff       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8327b68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327b6b:	89 04 24             	mov    %eax,(%esp)
 8327b6e:	e8 df 82 32 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 8327b73:	bb 01 00 00 00       	mov    $0x1,%ebx
 8327b78:	eb 1b                	jmp    8327b95 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x301>
 8327b7a:	89 d3                	mov    %edx,%ebx
 8327b7c:	89 c6                	mov    %eax,%esi
 8327b7e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8327b81:	89 04 24             	mov    %eax,(%esp)
 8327b84:	e8 33 9f de ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8327b89:	89 f0                	mov    %esi,%eax
 8327b8b:	89 da                	mov    %ebx,%edx
 8327b8d:	89 04 24             	mov    %eax,(%esp)
 8327b90:	e8 bb bb 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327b95:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8327b98:	89 04 24             	mov    %eax,(%esp)
 8327b9b:	e8 1c 9f de ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8327ba0:	85 db                	test   %ebx,%ebx
 8327ba2:	74 05                	je     8327ba9 <_ZN8WongWork9CCeraShop21_processBoosterSelectEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEcc+0x315>
 8327ba4:	be 01 00 00 00       	mov    $0x1,%esi
 8327ba9:	89 f0                	mov    %esi,%eax
 8327bab:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8327bae:	83 c4 00             	add    $0x0,%esp
 8327bb1:	5b                   	pop    %ebx
 8327bb2:	5e                   	pop    %esi
 8327bb3:	5f                   	pop    %edi
 8327bb4:	5d                   	pop    %ebp
 8327bb5:	c3                   	ret

```

```c
// WongWork::CCeraShop::_processBoosterSelect @ 0x8327894

/* WongWork::CCeraShop::_processBoosterSelect(CUser*, int, int, int&, long, bool,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&,
   WongWork::CCeraShop::stCeraShopItemParam_t&, char, char) */

undefined4
WongWork::CCeraShop::_processBoosterSelect
          (CUser *param_1,int param_2,int param_3,int *param_4,long param_5,bool param_6,
          vector *param_7,stCeraShopItemParam_t *param_8,char param_9,char param_10)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  CDataManager *this;
  int iVar7;
  int *piVar8;
  int iVar9;
  stStackableBoosterItemInfo_t *psVar10;
  uint uVar11;
  ulong *puVar12;
  undefined4 unaff_ESI;
  undefined3 in_stack_00000019;
  undefined3 in_stack_00000025;
  char local_54 [4];
  undefined1 local_50;
  __normal_iterator local_4c [4];
  __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_48 [4];
  _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
  local_44 [4];
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> local_40 [14];
  char local_32 [2];
  map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
  local_30 [4];
  int local_2c;
  vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *local_28;
  uint local_24;
  uint local_20;
  
  local_50 = SUB41(param_7,0);
  local_54[0] = param_10;
  this = (CDataManager *)G_CDataManager();
  local_2c = CDataManager::find_item(this,param_3);
  if (local_2c != 0) {
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
              (local_40);
                    /* try { // try from 083278f2 to 08327b72 has its CatchHandler @ 08327b7a */
    std::make_pair<char&,char&>(local_32,local_54);
    std::
    map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
    ::find(local_44);
    std::
    map<std::pair<char,char>,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>,std::less<std::pair<char,char>>,std::allocator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>>
    ::end(local_30);
    cVar5 = std::
            _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
            ::operator==(local_44,(_Rb_tree_const_iterator *)local_30);
    if (cVar5 == '\0') {
      iVar7 = std::
              _Rb_tree_const_iterator<std::pair<std::pair<char,char>const,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>>
              ::operator->(local_44);
      local_28 = (vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                  *)(iVar7 + 4);
      local_24 = 0;
      while (iVar7 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                               ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8),
            (int)local_24 < iVar7) {
        local_20 = 0;
        while (uVar11 = std::
                        vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                        ::size(local_28), local_20 < uVar11) {
          piVar8 = (int *)std::
                          vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                          ::operator[](local_28,local_20);
          iVar7 = *piVar8;
          iVar9 = std::vector<Inven_Item,std::allocator<Inven_Item>>::operator[]
                            ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,local_24);
          if (iVar7 == *(int *)(iVar9 + 2)) {
            psVar10 = (stStackableBoosterItemInfo_t *)
                      std::
                      vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                      ::operator[](local_28,local_20);
            std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
            push_back(local_40,psVar10);
          }
          local_20 = local_20 + 1;
        }
        local_24 = local_24 + 1;
      }
      std::vector<Inven_Item,std::allocator<Inven_Item>>::clear
                ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      while (bVar6 = __gnu_cxx::operator!=(local_48,local_4c), bVar6) {
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar1 = *(uchar *)(iVar7 + 10);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar2 = *(uchar *)(iVar7 + 0xd);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar3 = *(uchar *)(iVar7 + 0xe);
        iVar7 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_48);
        uVar4 = *(ushort *)(iVar7 + 8);
        puVar12 = (ulong *)__gnu_cxx::
                           __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                           ::operator->(local_48);
        _processAdditionalItem
                  ((CCeraShop *)param_1,(CUser *)param_2,*puVar12,uVar4,uVar3,uVar2,
                   (vector *)param_8,_param_9,uVar1);
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_48);
      }
      iVar7 = G_CDataManager();
      iVar7 = CItemList::GetRestrictCode(*(CItemList **)(iVar7 + 0xc),param_3);
      if ((iVar7 != 0) &&
         (cVar5 = CUser::IsRestrictedGoods((CUser *)param_2,iVar7), cVar5 != '\x01')) {
        CUser::SetRestrictedGoods((CUser *)param_2,iVar7);
        SaveFeaturedIdx((CUser *)param_2,iVar7,_param_6,0);
      }
      CUser::SaveInventory((CUser *)param_2);
      bVar6 = true;
    }
    else {
      unaff_ESI = 0;
      bVar6 = false;
    }
    std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
              (local_40);
    if (!bVar6) {
      return unaff_ESI;
    }
  }
  return 1;
}

```

---

## _processCoin

```asm
// === 08325a88 WongWork::CCeraShop::_processCoin  [0x08325a88-0x8325b21] ===
 8325a88:	55                   	push   %ebp
 8325a89:	89 e5                	mov    %esp,%ebp
 8325a8b:	53                   	push   %ebx
 8325a8c:	83 ec 24             	sub    $0x24,%esp
 8325a8f:	8b 55 10             	mov    0x10(%ebp),%edx
 8325a92:	8b 45 14             	mov    0x14(%ebp),%eax
 8325a95:	66 89 55 f4          	mov    %dx,-0xc(%ebp)
 8325a99:	88 45 f0             	mov    %al,-0x10(%ebp)
 8325a9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325a9f:	89 04 24             	mov    %eax,(%esp)
 8325aa2:	e8 d7 47 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8325aa7:	89 04 24             	mov    %eax,(%esp)
 8325aaa:	e8 7f 6c e8 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 8325aaf:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 8325ab3:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 8325ab6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325ab9:	89 04 24             	mov    %eax,(%esp)
 8325abc:	e8 cd 47 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8325ac1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8325ac5:	89 04 24             	mov    %eax,(%esp)
 8325ac8:	e8 6d 6c e8 ff       	call   81ac73a <_ZN10CInventory10SetPayCoinEj>
 8325acd:	0f b7 5d f4          	movzwl -0xc(%ebp),%ebx
 8325ad1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325ad4:	89 04 24             	mov    %eax,(%esp)
 8325ad7:	e8 a2 47 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8325adc:	89 04 24             	mov    %eax,(%esp)
 8325adf:	e8 4a 6c e8 ff       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 8325ae4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8325ae7:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8325aed:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 8325af4:	00 
 8325af5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8325af9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325afd:	89 14 24             	mov    %edx,(%esp)
 8325b00:	e8 ef e0 35 00       	call   8683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>
 8325b05:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325b08:	89 04 24             	mov    %eax,(%esp)
 8325b0b:	e8 c8 a9 32 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 8325b10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325b13:	89 04 24             	mov    %eax,(%esp)
 8325b16:	e8 ed 0c 33 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 8325b1b:	83 c4 24             	add    $0x24,%esp
 8325b1e:	5b                   	pop    %ebx
 8325b1f:	5d                   	pop    %ebp
 8325b20:	c3                   	ret
 8325b21:	90                   	nop

```

```c
// WongWork::CCeraShop::_processCoin @ 0x8325a88

/* WongWork::CCeraShop::_processCoin(CUser*, unsigned short, bool) */

void WongWork::CCeraShop::_processCoin(CUser *param_1,ushort param_2,bool param_3)

{
  CInventory *pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined3 in_stack_0000000d;
  
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  iVar2 = CInventory::GetPayCoin(pCVar1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(_param_2);
  CInventory::SetPayCoin(pCVar1,iVar2 + (_param_3 & 0xffff));
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(_param_2);
  uVar3 = CInventory::GetPayCoin(pCVar1);
  cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(_param_2 + 0x79700),uVar3,_param_3 & 0xffff,3);
  CUser::SaveMoneyCoin((CUser *)_param_2);
  CUser::SendCoin((CUser *)_param_2);
  return;
}

```

---

## _processCoinGift

```asm
// === 0832619c WongWork::CCeraShop::_processCoinGift  [0x0832619c-0x8326331] ===
 832619c:	55                   	push   %ebp
 832619d:	89 e5                	mov    %esp,%ebp
 832619f:	57                   	push   %edi
 83261a0:	53                   	push   %ebx
 83261a1:	81 ec 70 01 00 00    	sub    $0x170,%esp
 83261a7:	8b 45 10             	mov    0x10(%ebp),%eax
 83261aa:	66 89 85 b4 fe ff ff 	mov    %ax,-0x14c(%ebp)
 83261b1:	8d 45 bb             	lea    -0x45(%ebp),%eax
 83261b4:	89 04 24             	mov    %eax,(%esp)
 83261b7:	e8 98 56 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 83261bc:	c7 45 bd 01 00 00 00 	movl   $0x1,-0x43(%ebp)
 83261c3:	c6 45 bc 02          	movb   $0x2,-0x44(%ebp)
 83261c7:	0f b7 85 b4 fe ff ff 	movzwl -0x14c(%ebp),%eax
 83261ce:	89 45 c2             	mov    %eax,-0x3e(%ebp)
 83261d1:	66 c7 45 c6 02 00    	movw   $0x2,-0x3a(%ebp)
 83261d7:	8d 45 bb             	lea    -0x45(%ebp),%eax
 83261da:	89 04 24             	mov    %eax,(%esp)
 83261dd:	e8 b0 56 da ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 83261e2:	8d 95 bb fe ff ff    	lea    -0x145(%ebp),%edx
 83261e8:	bb 00 01 00 00       	mov    $0x100,%ebx
 83261ed:	b8 00 00 00 00       	mov    $0x0,%eax
 83261f2:	89 d1                	mov    %edx,%ecx
 83261f4:	83 e1 01             	and    $0x1,%ecx
 83261f7:	85 c9                	test   %ecx,%ecx
 83261f9:	74 08                	je     8326203 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji+0x67>
 83261fb:	88 02                	mov    %al,(%edx)
 83261fd:	83 c2 01             	add    $0x1,%edx
 8326200:	83 eb 01             	sub    $0x1,%ebx
 8326203:	89 d1                	mov    %edx,%ecx
 8326205:	83 e1 02             	and    $0x2,%ecx
 8326208:	85 c9                	test   %ecx,%ecx
 832620a:	74 09                	je     8326215 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji+0x79>
 832620c:	66 89 02             	mov    %ax,(%edx)
 832620f:	83 c2 02             	add    $0x2,%edx
 8326212:	83 eb 02             	sub    $0x2,%ebx
 8326215:	89 d9                	mov    %ebx,%ecx
 8326217:	c1 e9 02             	shr    $0x2,%ecx
 832621a:	89 d7                	mov    %edx,%edi
 832621c:	f3 ab                	rep stos %eax,%es:(%edi)
 832621e:	89 fa                	mov    %edi,%edx
 8326220:	89 d9                	mov    %ebx,%ecx
 8326222:	83 e1 02             	and    $0x2,%ecx
 8326225:	85 c9                	test   %ecx,%ecx
 8326227:	74 06                	je     832622f <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji+0x93>
 8326229:	66 89 02             	mov    %ax,(%edx)
 832622c:	83 c2 02             	add    $0x2,%edx
 832622f:	89 d9                	mov    %ebx,%ecx
 8326231:	83 e1 01             	and    $0x1,%ecx
 8326234:	85 c9                	test   %ecx,%ecx
 8326236:	74 05                	je     832623d <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertji+0xa1>
 8326238:	88 02                	mov    %al,(%edx)
 832623a:	83 c2 01             	add    $0x1,%edx
 832623d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326240:	89 04 24             	mov    %eax,(%esp)
 8326243:	e8 e0 ad dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8326248:	89 c3                	mov    %eax,%ebx
 832624a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8326251:	00 
 8326252:	c7 44 24 08 52 5e c2 	movl   $0x8c25e52,0x8(%esp)
 8326259:	08 
 832625a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8326261:	00 
 8326262:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8326269:	e8 90 f5 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 832626e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8326272:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326276:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 832627c:	89 04 24             	mov    %eax,(%esp)
 832627f:	e8 bc 81 d5 ff       	call   807e440 <sprintf@plt>
 8326284:	0f b7 95 b4 fe ff ff 	movzwl -0x14c(%ebp),%edx
 832628b:	8b 45 18             	mov    0x18(%ebp),%eax
 832628e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8326291:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 8326297:	89 54 24 10          	mov    %edx,0x10(%esp)
 832629b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 83262a2:	00 
 83262a3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 83262aa:	00 
 83262ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 83262af:	89 0c 24             	mov    %ecx,(%esp)
 83262b2:	e8 23 e6 35 00       	call   86848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>
 83262b7:	8b 45 c2             	mov    -0x3e(%ebp),%eax
 83262ba:	89 c1                	mov    %eax,%ecx
 83262bc:	8b 55 bd             	mov    -0x43(%ebp),%edx
 83262bf:	8b 45 18             	mov    0x18(%ebp),%eax
 83262c2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 83262c6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83262ca:	89 44 24 08          	mov    %eax,0x8(%esp)
 83262ce:	8b 45 14             	mov    0x14(%ebp),%eax
 83262d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83262d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 83262d8:	89 04 24             	mov    %eax,(%esp)
 83262db:	e8 9a 45 36 00       	call   868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>
 83262e0:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 83262e6:	89 04 24             	mov    %eax,(%esp)
 83262e9:	e8 c2 80 d5 ff       	call   807e3b0 <strlen@plt>
 83262ee:	89 c2                	mov    %eax,%edx
 83262f0:	8b 45 18             	mov    0x18(%ebp),%eax
 83262f3:	89 54 24 18          	mov    %edx,0x18(%esp)
 83262f7:	8d 95 bb fe ff ff    	lea    -0x145(%ebp),%edx
 83262fd:	89 54 24 14          	mov    %edx,0x14(%esp)
 8326301:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8326308:	00 
 8326309:	89 44 24 0c          	mov    %eax,0xc(%esp)
 832630d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8326314:	00 
 8326315:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8326318:	89 44 24 04          	mov    %eax,0x4(%esp)
 832631c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832631f:	89 04 24             	mov    %eax,(%esp)
 8326322:	e8 35 0a 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 8326327:	81 c4 70 01 00 00    	add    $0x170,%esp
 832632d:	5b                   	pop    %ebx
 832632e:	5f                   	pop    %edi
 832632f:	5d                   	pop    %ebp
 8326330:	c3                   	ret
 8326331:	90                   	nop

```

```c
// WongWork::CCeraShop::_processCoinGift @ 0x832619c

/* WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int) */

void __thiscall
WongWork::CCeraShop::_processCoinGift
          (CCeraShop *this,CUser *param_1,ushort param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_149;
  char local_148 [255];
  Inven_Item local_49;
  undefined1 local_48;
  ulong local_47;
  uint local_42;
  undefined2 local_3e;
  
  bVar7 = 0;
  Inven_Item::Inven_Item(&local_49);
  local_47 = 1;
  local_48 = 2;
  local_42 = (uint)param_2;
  local_3e = 2;
  Inven_Item::ResetItemAttr(&local_49);
  pcVar4 = &local_149;
  uVar5 = 0x100;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_149 = '\0';
    pcVar4 = local_148;
    uVar5 = 0xff;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (bVar6) {
    *pcVar4 = '\0';
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar4 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(&local_149,pcVar4,uVar1);
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_4,'\x01',1,(uint)param_2);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_3,param_4,local_47,local_42);
  sVar2 = strlen(&local_149);
  CMailBoxHelper::ReqDBSendNewMailCashShop(param_1,&local_49,0,param_4,true,&local_149,sVar2);
  return;
}

```

---

## _processCoinGift_08326332

```asm
// === 08326332 WongWork::CCeraShop::_processCoinGift  [0x08326332-0x83264d5] ===
 8326332:	55                   	push   %ebp
 8326333:	89 e5                	mov    %esp,%ebp
 8326335:	57                   	push   %edi
 8326336:	56                   	push   %esi
 8326337:	53                   	push   %ebx
 8326338:	81 ec 7c 01 00 00    	sub    $0x17c,%esp
 832633e:	8b 45 10             	mov    0x10(%ebp),%eax
 8326341:	66 89 85 a4 fe ff ff 	mov    %ax,-0x15c(%ebp)
 8326348:	8d 45 aa             	lea    -0x56(%ebp),%eax
 832634b:	89 04 24             	mov    %eax,(%esp)
 832634e:	e8 01 55 da ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8326353:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8326356:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8326359:	c6 45 ab 02          	movb   $0x2,-0x55(%ebp)
 832635d:	0f b7 85 a4 fe ff ff 	movzwl -0x15c(%ebp),%eax
 8326364:	89 45 b1             	mov    %eax,-0x4f(%ebp)
 8326367:	66 c7 45 b5 02 00    	movw   $0x2,-0x4b(%ebp)
 832636d:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8326370:	89 04 24             	mov    %eax,(%esp)
 8326373:	e8 1a 55 da ff       	call   80cb892 <_ZN10Inven_Item13ResetItemAttrEv>
 8326378:	8d 95 aa fe ff ff    	lea    -0x156(%ebp),%edx
 832637e:	bb 00 01 00 00       	mov    $0x100,%ebx
 8326383:	b8 00 00 00 00       	mov    $0x0,%eax
 8326388:	89 d1                	mov    %edx,%ecx
 832638a:	83 e1 02             	and    $0x2,%ecx
 832638d:	85 c9                	test   %ecx,%ecx
 832638f:	74 09                	je     832639a <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0x68>
 8326391:	66 89 02             	mov    %ax,(%edx)
 8326394:	83 c2 02             	add    $0x2,%edx
 8326397:	83 eb 02             	sub    $0x2,%ebx
 832639a:	89 d9                	mov    %ebx,%ecx
 832639c:	c1 e9 02             	shr    $0x2,%ecx
 832639f:	89 d7                	mov    %edx,%edi
 83263a1:	f3 ab                	rep stos %eax,%es:(%edi)
 83263a3:	89 fa                	mov    %edi,%edx
 83263a5:	89 d9                	mov    %ebx,%ecx
 83263a7:	83 e1 02             	and    $0x2,%ecx
 83263aa:	85 c9                	test   %ecx,%ecx
 83263ac:	74 06                	je     83263b4 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0x82>
 83263ae:	66 89 02             	mov    %ax,(%edx)
 83263b1:	83 c2 02             	add    $0x2,%edx
 83263b4:	89 d9                	mov    %ebx,%ecx
 83263b6:	83 e1 01             	and    $0x1,%ecx
 83263b9:	85 c9                	test   %ecx,%ecx
 83263bb:	74 05                	je     83263c2 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0x90>
 83263bd:	88 02                	mov    %al,(%edx)
 83263bf:	83 c2 01             	add    $0x1,%edx
 83263c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83263c5:	89 04 24             	mov    %eax,(%esp)
 83263c8:	e8 5b ac dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 83263cd:	89 c3                	mov    %eax,%ebx
 83263cf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 83263d6:	00 
 83263d7:	c7 44 24 08 52 5e c2 	movl   $0x8c25e52,0x8(%esp)
 83263de:	08 
 83263df:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83263e6:	00 
 83263e7:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 83263ee:	e8 0b f4 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 83263f3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 83263f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83263fb:	8d 85 aa fe ff ff    	lea    -0x156(%ebp),%eax
 8326401:	89 04 24             	mov    %eax,(%esp)
 8326404:	e8 37 80 d5 ff       	call   807e440 <sprintf@plt>
 8326409:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 832640d:	81 7d 1c ec 00 00 00 	cmpl   $0xec,0x1c(%ebp)
 8326414:	75 06                	jne    832641c <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0xea>
 8326416:	c6 45 e7 04          	movb   $0x4,-0x19(%ebp)
 832641a:	eb 0d                	jmp    8326429 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0xf7>
 832641c:	81 7d 1c ca 00 00 00 	cmpl   $0xca,0x1c(%ebp)
 8326423:	75 04                	jne    8326429 <_ZN8WongWork9CCeraShop16_processCoinGiftEP5CUsertjii+0xf7>
 8326425:	c6 45 e7 05          	movb   $0x5,-0x19(%ebp)
 8326429:	0f b7 9d a4 fe ff ff 	movzwl -0x15c(%ebp),%ebx
 8326430:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8326433:	0f be 55 e7          	movsbl -0x19(%ebp),%edx
 8326437:	8b 45 18             	mov    0x18(%ebp),%eax
 832643a:	8b 75 0c             	mov    0xc(%ebp),%esi
 832643d:	81 c6 00 97 07 00    	add    $0x79700,%esi
 8326443:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8326447:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 832644b:	89 54 24 08          	mov    %edx,0x8(%esp)
 832644f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326453:	89 34 24             	mov    %esi,(%esp)
 8326456:	e8 7f e4 35 00       	call   86848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>
 832645b:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 832645e:	89 c1                	mov    %eax,%ecx
 8326460:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8326463:	8b 45 18             	mov    0x18(%ebp),%eax
 8326466:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 832646a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832646e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326472:	8b 45 14             	mov    0x14(%ebp),%eax
 8326475:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326479:	8b 45 0c             	mov    0xc(%ebp),%eax
 832647c:	89 04 24             	mov    %eax,(%esp)
 832647f:	e8 f6 43 36 00       	call   868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>
 8326484:	8d 85 aa fe ff ff    	lea    -0x156(%ebp),%eax
 832648a:	89 04 24             	mov    %eax,(%esp)
 832648d:	e8 1e 7f d5 ff       	call   807e3b0 <strlen@plt>
 8326492:	89 c2                	mov    %eax,%edx
 8326494:	8b 45 18             	mov    0x18(%ebp),%eax
 8326497:	89 54 24 18          	mov    %edx,0x18(%esp)
 832649b:	8d 95 aa fe ff ff    	lea    -0x156(%ebp),%edx
 83264a1:	89 54 24 14          	mov    %edx,0x14(%esp)
 83264a5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 83264ac:	00 
 83264ad:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83264b1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83264b8:	00 
 83264b9:	8d 45 aa             	lea    -0x56(%ebp),%eax
 83264bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 83264c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 83264c3:	89 04 24             	mov    %eax,(%esp)
 83264c6:	e8 91 08 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 83264cb:	81 c4 7c 01 00 00    	add    $0x17c,%esp
 83264d1:	5b                   	pop    %ebx
 83264d2:	5e                   	pop    %esi
 83264d3:	5f                   	pop    %edi
 83264d4:	5d                   	pop    %ebp
 83264d5:	c3                   	ret

```

```c
// WongWork::CCeraShop::_processCoinGift @ 0x8326332

/* WARNING: Removing unreachable block (ram,0x083263bd) */
/* WongWork::CCeraShop::_processCoinGift(CUser*, unsigned short, unsigned int, int, int) */

void __thiscall
WongWork::CCeraShop::_processCoinGift
          (CCeraShop *this,CUser *param_1,ushort param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  char local_15a [256];
  Inven_Item local_5a;
  undefined1 local_59;
  ulong local_58;
  uint local_53;
  undefined2 local_4f;
  char local_1d;
  
  bVar6 = 0;
  Inven_Item::Inven_Item(&local_5a);
  local_58 = param_5;
  local_59 = 2;
  local_53 = (uint)param_2;
  local_4f = 2;
  Inven_Item::ResetItemAttr(&local_5a);
  pcVar2 = local_15a;
  uVar4 = 0x100;
  bVar5 = ((uint)pcVar2 & 2) != 0;
  if (bVar5) {
    local_15a[0] = '\0';
    local_15a[1] = '\0';
    pcVar2 = local_15a + 2;
    uVar4 = 0xfe;
  }
  for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + ((uint)bVar6 * -2 + 1) * 4;
  }
  if (bVar5) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
  }
  uVar1 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_02",(bool *)0x0);
  sprintf(local_15a,pcVar2,uVar1);
  local_1d = '\0';
  if (param_5 == 0xec) {
    local_1d = '\x04';
  }
  else if (param_5 == 0xca) {
    local_1d = '\x05';
  }
  cUserHistoryLog::SendMailForCeraShopGift
            ((cUserHistoryLog *)(param_1 + 0x79700),param_4,local_1d,param_5,(uint)param_2);
  CUser::SendCeraShopGiftStatisticLog(param_1,param_3,param_4,local_58,local_53);
  sVar3 = strlen(local_15a);
  CMailBoxHelper::ReqDBSendNewMailCashShop(param_1,&local_5a,0,param_4,true,local_15a,sVar3);
  return;
}

```

---

## _processCreature

```asm
// === 08325d66 WongWork::CCeraShop::_processCreature  [0x08325d66-0x8326035] ===
 8325d66:	55                   	push   %ebp
 8325d67:	89 e5                	mov    %esp,%ebp
 8325d69:	53                   	push   %ebx
 8325d6a:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 8325d70:	8b 45 58             	mov    0x58(%ebp),%eax
 8325d73:	88 45 a4             	mov    %al,-0x5c(%ebp)
 8325d76:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8325d7d:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 8325d81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325d84:	89 04 24             	mov    %eax,(%esp)
 8325d87:	e8 02 45 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8325d8c:	89 04 24             	mov    %eax,(%esp)
 8325d8f:	e8 d4 77 db ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8325d94:	8d 55 ef             	lea    -0x11(%ebp),%edx
 8325d97:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325d9b:	8d 55 10             	lea    0x10(%ebp),%edx
 8325d9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325da2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8325da5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325da9:	89 04 24             	mov    %eax,(%esp)
 8325dac:	e8 8f 64 01 00       	call   833c240 <_ZN13user_creature12CCreatureMgr9CheckItemEP5CUserP10Inven_ItemRb>
 8325db1:	83 f0 01             	xor    $0x1,%eax
 8325db4:	84 c0                	test   %al,%al
 8325db6:	74 09                	je     8325dc1 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x5b>
 8325db8:	8b 45 54             	mov    0x54(%ebp),%eax
 8325dbb:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8325dc1:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8325dc5:	84 c0                	test   %al,%al
 8325dc7:	0f 84 61 02 00 00    	je     832602e <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x2c8>
 8325dcd:	0f b6 45 11          	movzbl 0x11(%ebp),%eax
 8325dd1:	3c 05                	cmp    $0x5,%al
 8325dd3:	75 47                	jne    8325e1c <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0xb6>
 8325dd5:	8d 45 10             	lea    0x10(%ebp),%eax
 8325dd8:	89 04 24             	mov    %eax,(%esp)
 8325ddb:	e8 ce 10 01 00       	call   8336eae <_ZN13user_creature22CCreatureItemConverter10SetEggItemEP10Inven_Item>
 8325de0:	83 f0 01             	xor    $0x1,%eax
 8325de3:	84 c0                	test   %al,%al
 8325de5:	74 35                	je     8325e1c <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0xb6>
 8325de7:	c7 44 24 10 20 5e c2 	movl   $0x8c25e20,0x10(%esp)
 8325dee:	08 
 8325def:	c7 44 24 0c 1f 17 00 	movl   $0x171f,0xc(%esp)
 8325df6:	00 
 8325df7:	c7 44 24 08 20 6b c2 	movl   $0x8c26b20,0x8(%esp)
 8325dfe:	08 
 8325dff:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8325e06:	08 
 8325e07:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8325e0e:	e8 f7 dd 7a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8325e13:	8b 45 54             	mov    0x54(%ebp),%eax
 8325e16:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8325e1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325e1f:	89 04 24             	mov    %eax,(%esp)
 8325e22:	e8 67 44 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8325e27:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8325e2e:	00 
 8325e2f:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8325e36:	00 
 8325e37:	c7 44 24 44 19 00 00 	movl   $0x19,0x44(%esp)
 8325e3e:	00 
 8325e3f:	8b 55 10             	mov    0x10(%ebp),%edx
 8325e42:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325e46:	8b 55 14             	mov    0x14(%ebp),%edx
 8325e49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325e4d:	8b 55 18             	mov    0x18(%ebp),%edx
 8325e50:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325e54:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8325e57:	89 54 24 10          	mov    %edx,0x10(%esp)
 8325e5b:	8b 55 20             	mov    0x20(%ebp),%edx
 8325e5e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325e62:	8b 55 24             	mov    0x24(%ebp),%edx
 8325e65:	89 54 24 18          	mov    %edx,0x18(%esp)
 8325e69:	8b 55 28             	mov    0x28(%ebp),%edx
 8325e6c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8325e70:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8325e73:	89 54 24 20          	mov    %edx,0x20(%esp)
 8325e77:	8b 55 30             	mov    0x30(%ebp),%edx
 8325e7a:	89 54 24 24          	mov    %edx,0x24(%esp)
 8325e7e:	8b 55 34             	mov    0x34(%ebp),%edx
 8325e81:	89 54 24 28          	mov    %edx,0x28(%esp)
 8325e85:	8b 55 38             	mov    0x38(%ebp),%edx
 8325e88:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8325e8c:	8b 55 3c             	mov    0x3c(%ebp),%edx
 8325e8f:	89 54 24 30          	mov    %edx,0x30(%esp)
 8325e93:	8b 55 40             	mov    0x40(%ebp),%edx
 8325e96:	89 54 24 34          	mov    %edx,0x34(%esp)
 8325e9a:	8b 55 44             	mov    0x44(%ebp),%edx
 8325e9d:	89 54 24 38          	mov    %edx,0x38(%esp)
 8325ea1:	8b 55 48             	mov    0x48(%ebp),%edx
 8325ea4:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8325ea8:	0f b6 55 4c          	movzbl 0x4c(%ebp),%edx
 8325eac:	88 54 24 40          	mov    %dl,0x40(%esp)
 8325eb0:	89 04 24             	mov    %eax,(%esp)
 8325eb3:	e8 ce ce 1d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8325eb8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8325ebb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8325ebf:	0f 89 c7 00 00 00    	jns    8325f8c <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x226>
 8325ec5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8325ecc:	00 
 8325ecd:	c7 44 24 08 75 5d c2 	movl   $0x8c25d75,0x8(%esp)
 8325ed4:	08 
 8325ed5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8325edc:	00 
 8325edd:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8325ee4:	e8 15 f9 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8325ee9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8325eec:	0f b6 45 11          	movzbl 0x11(%ebp),%eax
 8325ef0:	3c 05                	cmp    $0x5,%al
 8325ef2:	75 3b                	jne    8325f2f <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x1c9>
 8325ef4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325ef7:	89 04 24             	mov    %eax,(%esp)
 8325efa:	e8 b1 84 d5 ff       	call   807e3b0 <strlen@plt>
 8325eff:	89 c3                	mov    %eax,%ebx
 8325f01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325f04:	89 04 24             	mov    %eax,(%esp)
 8325f07:	e8 42 5d da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8325f0c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8325f10:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8325f13:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325f17:	8d 55 10             	lea    0x10(%ebp),%edx
 8325f1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325f1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325f22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325f25:	89 04 24             	mov    %eax,(%esp)
 8325f28:	e8 f5 04 23 00       	call   8556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>
 8325f2d:	eb 49                	jmp    8325f78 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x212>
 8325f2f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325f32:	89 04 24             	mov    %eax,(%esp)
 8325f35:	e8 76 84 d5 ff       	call   807e3b0 <strlen@plt>
 8325f3a:	89 c3                	mov    %eax,%ebx
 8325f3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325f3f:	89 04 24             	mov    %eax,(%esp)
 8325f42:	e8 07 5d da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8325f47:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8325f4b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8325f4e:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325f52:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8325f59:	00 
 8325f5a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8325f5e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8325f65:	00 
 8325f66:	8d 45 10             	lea    0x10(%ebp),%eax
 8325f69:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325f6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325f70:	89 04 24             	mov    %eax,(%esp)
 8325f73:	e8 e4 0d 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 8325f78:	8b 45 12             	mov    0x12(%ebp),%eax
 8325f7b:	89 c2                	mov    %eax,%edx
 8325f7d:	8b 45 50             	mov    0x50(%ebp),%eax
 8325f80:	89 10                	mov    %edx,(%eax)
 8325f82:	b8 00 00 00 00       	mov    $0x0,%eax
 8325f87:	e9 a5 00 00 00       	jmp    8326031 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii+0x2cb>
 8325f8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325f8f:	89 04 24             	mov    %eax,(%esp)
 8325f92:	e8 f7 42 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8325f97:	89 04 24             	mov    %eax,(%esp)
 8325f9a:	e8 c9 75 db ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8325f9f:	8b 55 60             	mov    0x60(%ebp),%edx
 8325fa2:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325fa6:	8b 55 5c             	mov    0x5c(%ebp),%edx
 8325fa9:	89 54 24 10          	mov    %edx,0x10(%esp)
 8325fad:	c7 44 24 0c 19 00 00 	movl   $0x19,0xc(%esp)
 8325fb4:	00 
 8325fb5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8325fb8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325fbc:	8d 55 10             	lea    0x10(%ebp),%edx
 8325fbf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325fc3:	89 04 24             	mov    %eax,(%esp)
 8325fc6:	e8 39 52 01 00       	call   833b204 <_ZN13user_creature12CCreatureMgr18InsertCreatureItemEP10Inven_Itemiiii>
 8325fcb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8325fce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8325fd2:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8325fd9:	00 
 8325fda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8325fe1:	00 
 8325fe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325fe5:	89 04 24             	mov    %eax,(%esp)
 8325fe8:	e8 6d 66 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8325fed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325ff0:	89 04 24             	mov    %eax,(%esp)
 8325ff3:	e8 5a 9e 32 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 8325ff8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325ffb:	89 04 24             	mov    %eax,(%esp)
 8325ffe:	e8 7b 42 db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8326003:	8d 55 b2             	lea    -0x4e(%ebp),%edx
 8326006:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8326009:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 832600d:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8326014:	00 
 8326015:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326019:	89 14 24             	mov    %edx,(%esp)
 832601c:	e8 f7 58 1d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8326021:	83 ec 04             	sub    $0x4,%esp
 8326024:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8326027:	89 c2                	mov    %eax,%edx
 8326029:	8b 45 50             	mov    0x50(%ebp),%eax
 832602c:	89 10                	mov    %edx,(%eax)
 832602e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8326031:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8326034:	c9                   	leave
 8326035:	c3                   	ret

```

```c
// WongWork::CCeraShop::_processCreature @ 0x8325d66

/* WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int) */

int WongWork::CCeraShop::_processCreature
              (undefined4 param_1,CUser *param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined4 param_17,undefined1 param_18,undefined4 *param_19,undefined4 *param_20,
              undefined4 param_21,int param_22,int param_23)

{
  char cVar1;
  CInventory *pCVar2;
  CCreatureMgr *pCVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_52 [2];
  undefined4 local_50;
  bool local_15;
  int local_14;
  char *local_10;
  
  local_14 = -1;
  local_15 = true;
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
  pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
  cVar1 = user_creature::CCreatureMgr::CheckItem(pCVar3,param_2,(Inven_Item *)&param_3,&local_15);
  if (cVar1 != '\x01') {
    *param_20 = 1;
  }
  if (local_15 != false) {
    if ((param_3._1_1_ == '\x05') &&
       (cVar1 = user_creature::CCreatureItemConverter::SetEggItem((Inven_Item *)&param_3),
       cVar1 != '\x01')) {
      LogManager::logFormat
                (1,"CeraShop.cpp",
                 "int WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)"
                 ,0x171f,"History ERROR, CCreatureItemConverter::SetEggItem");
      *param_20 = 1;
    }
    uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    local_14 = CInventory::insertItemIntoInventory
                         (uVar4,CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,param_3._0_1_)),
                          CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,param_7,
                          param_8,param_9,param_10,param_11,param_12,param_13,param_14,param_15,
                          param_16,param_17,param_18,0x19,1,0);
    if (local_14 < 0) {
      local_10 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_104",(bool *)0x0);
      if (param_3._1_1_ == '\x05') {
        sVar5 = strlen(local_10);
        iVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        CMailBoxHelper::ReqDBSendNewCreatureMail
                  (param_2,iVar6,(Inven_Item *)&param_3,local_10,sVar5);
      }
      else {
        sVar5 = strlen(local_10);
        uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        CMailBoxHelper::ReqDBSendNewMailCashShop
                  (param_2,(Inven_Item *)&param_3,0,uVar7,true,local_10,sVar5);
      }
      *param_19 = CONCAT22((undefined2)param_4,param_3._2_2_);
      local_14 = 0;
    }
    else {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      pCVar3 = (CCreatureMgr *)CInventory::GetCreatureMgrW(pCVar2);
      user_creature::CCreatureMgr::InsertCreatureItem
                (pCVar3,(Inven_Item *)&param_3,local_14,0x19,param_22,param_23);
      CUser::SendUpdateItemList(param_2,1,7,local_14);
      CUser::SaveInventory(param_2);
      iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_52,iVar6);
      *param_19 = local_50;
    }
  }
  return local_14;
}

```

---

## _processCreatureGift

```asm
// === 083265e8 WongWork::CCeraShop::_processCreatureGift  [0x083265e8-0x8326738] ===
 83265e8:	55                   	push   %ebp
 83265e9:	89 e5                	mov    %esp,%ebp
 83265eb:	57                   	push   %edi
 83265ec:	53                   	push   %ebx
 83265ed:	81 ec 20 01 00 00    	sub    $0x120,%esp
 83265f3:	8d 9d f8 fe ff ff    	lea    -0x108(%ebp),%ebx
 83265f9:	b8 00 00 00 00       	mov    $0x0,%eax
 83265fe:	ba 40 00 00 00       	mov    $0x40,%edx
 8326603:	89 df                	mov    %ebx,%edi
 8326605:	89 d1                	mov    %edx,%ecx
 8326607:	f3 ab                	rep stos %eax,%es:(%edi)
 8326609:	8b 45 0c             	mov    0xc(%ebp),%eax
 832660c:	89 04 24             	mov    %eax,(%esp)
 832660f:	e8 14 aa dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8326614:	89 c3                	mov    %eax,%ebx
 8326616:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832661d:	00 
 832661e:	c7 44 24 08 52 5e c2 	movl   $0x8c25e52,0x8(%esp)
 8326625:	08 
 8326626:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 832662d:	00 
 832662e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8326635:	e8 c4 f1 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 832663a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832663e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326642:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8326648:	89 04 24             	mov    %eax,(%esp)
 832664b:	e8 f0 7d d5 ff       	call   807e440 <sprintf@plt>
 8326650:	8b 45 17             	mov    0x17(%ebp),%eax
 8326653:	89 c1                	mov    %eax,%ecx
 8326655:	8b 55 12             	mov    0x12(%ebp),%edx
 8326658:	8b 45 54             	mov    0x54(%ebp),%eax
 832665b:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 832665e:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 8326664:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8326668:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832666c:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8326673:	00 
 8326674:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326678:	89 1c 24             	mov    %ebx,(%esp)
 832667b:	e8 5a e2 35 00       	call   86848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>
 8326680:	8b 45 17             	mov    0x17(%ebp),%eax
 8326683:	89 c1                	mov    %eax,%ecx
 8326685:	8b 55 12             	mov    0x12(%ebp),%edx
 8326688:	8b 45 54             	mov    0x54(%ebp),%eax
 832668b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 832668f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8326693:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326697:	8b 45 50             	mov    0x50(%ebp),%eax
 832669a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832669e:	8b 45 0c             	mov    0xc(%ebp),%eax
 83266a1:	89 04 24             	mov    %eax,(%esp)
 83266a4:	e8 d1 41 36 00       	call   868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>
 83266a9:	0f b6 45 11          	movzbl 0x11(%ebp),%eax
 83266ad:	3c 05                	cmp    $0x5,%al
 83266af:	75 37                	jne    83266e8 <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii+0x100>
 83266b1:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 83266b7:	89 04 24             	mov    %eax,(%esp)
 83266ba:	e8 f1 7c d5 ff       	call   807e3b0 <strlen@plt>
 83266bf:	89 44 24 10          	mov    %eax,0x10(%esp)
 83266c3:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 83266c9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83266cd:	8d 45 10             	lea    0x10(%ebp),%eax
 83266d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 83266d4:	8b 45 54             	mov    0x54(%ebp),%eax
 83266d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83266db:	8b 45 0c             	mov    0xc(%ebp),%eax
 83266de:	89 04 24             	mov    %eax,(%esp)
 83266e1:	e8 3c fd 22 00       	call   8556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>
 83266e6:	eb 47                	jmp    832672f <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii+0x147>
 83266e8:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 83266ee:	89 04 24             	mov    %eax,(%esp)
 83266f1:	e8 ba 7c d5 ff       	call   807e3b0 <strlen@plt>
 83266f6:	89 c2                	mov    %eax,%edx
 83266f8:	8b 45 54             	mov    0x54(%ebp),%eax
 83266fb:	89 54 24 18          	mov    %edx,0x18(%esp)
 83266ff:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 8326705:	89 54 24 14          	mov    %edx,0x14(%esp)
 8326709:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8326710:	00 
 8326711:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8326715:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832671c:	00 
 832671d:	8d 45 10             	lea    0x10(%ebp),%eax
 8326720:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326724:	8b 45 0c             	mov    0xc(%ebp),%eax
 8326727:	89 04 24             	mov    %eax,(%esp)
 832672a:	e8 2d 06 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 832672f:	81 c4 20 01 00 00    	add    $0x120,%esp
 8326735:	5b                   	pop    %ebx
 8326736:	5f                   	pop    %edi
 8326737:	5d                   	pop    %ebp
 8326738:	c3                   	ret

```

> （该函数反编译 C 未生成）

---

## _processItem

```asm
// === 08325b22 WongWork::CCeraShop::_processItem  [0x08325b22-0x8325d65] ===
 8325b22:	55                   	push   %ebp
 8325b23:	89 e5                	mov    %esp,%ebp
 8325b25:	53                   	push   %ebx
 8325b26:	83 ec 74             	sub    $0x74,%esp
 8325b29:	8b 55 5c             	mov    0x5c(%ebp),%edx
 8325b2c:	8b 45 60             	mov    0x60(%ebp),%eax
 8325b2f:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 8325b32:	88 45 e0             	mov    %al,-0x20(%ebp)
 8325b35:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 8325b3c:	8b 4d 17             	mov    0x17(%ebp),%ecx
 8325b3f:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8325b43:	8b 45 12             	mov    0x12(%ebp),%eax
 8325b46:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8325b4a:	c7 44 24 2c 00 00 00 	movl   $0x0,0x2c(%esp)
 8325b51:	00 
 8325b52:	c7 44 24 28 00 00 00 	movl   $0x0,0x28(%esp)
 8325b59:	00 
 8325b5a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8325b61:	00 
 8325b62:	8b 4d 68             	mov    0x68(%ebp),%ecx
 8325b65:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8325b69:	8b 4d 64             	mov    0x64(%ebp),%ecx
 8325b6c:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8325b70:	89 54 24 18          	mov    %edx,0x18(%esp)
 8325b74:	8b 55 58             	mov    0x58(%ebp),%edx
 8325b77:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325b7b:	8b 55 54             	mov    0x54(%ebp),%edx
 8325b7e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8325b82:	8b 55 50             	mov    0x50(%ebp),%edx
 8325b85:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325b89:	89 44 24 08          	mov    %eax,0x8(%esp)
 8325b8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325b90:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325b94:	8b 45 08             	mov    0x8(%ebp),%eax
 8325b97:	89 04 24             	mov    %eax,(%esp)
 8325b9a:	e8 df fc ff ff       	call   832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>
 8325b9f:	83 f0 01             	xor    $0x1,%eax
 8325ba2:	84 c0                	test   %al,%al
 8325ba4:	0f 84 ab 01 00 00    	je     8325d55 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x233>
 8325baa:	8d 45 10             	lea    0x10(%ebp),%eax
 8325bad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325bb4:	89 04 24             	mov    %eax,(%esp)
 8325bb7:	e8 14 a6 e5 ff       	call   81801d0 <_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item>
 8325bbc:	84 c0                	test   %al,%al
 8325bbe:	74 0a                	je     8325bca <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0xa8>
 8325bc0:	b8 00 00 00 00       	mov    $0x0,%eax
 8325bc5:	e9 95 01 00 00       	jmp    8325d5f <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x23d>
 8325bca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325bcd:	89 04 24             	mov    %eax,(%esp)
 8325bd0:	e8 b9 46 db ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8325bd5:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 8325bdc:	00 
 8325bdd:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8325be4:	00 
 8325be5:	c7 44 24 44 0f 00 00 	movl   $0xf,0x44(%esp)
 8325bec:	00 
 8325bed:	8b 55 10             	mov    0x10(%ebp),%edx
 8325bf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8325bf4:	8b 55 14             	mov    0x14(%ebp),%edx
 8325bf7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8325bfb:	8b 55 18             	mov    0x18(%ebp),%edx
 8325bfe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8325c02:	8b 55 1c             	mov    0x1c(%ebp),%edx
 8325c05:	89 54 24 10          	mov    %edx,0x10(%esp)
 8325c09:	8b 55 20             	mov    0x20(%ebp),%edx
 8325c0c:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325c10:	8b 55 24             	mov    0x24(%ebp),%edx
 8325c13:	89 54 24 18          	mov    %edx,0x18(%esp)
 8325c17:	8b 55 28             	mov    0x28(%ebp),%edx
 8325c1a:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8325c1e:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8325c21:	89 54 24 20          	mov    %edx,0x20(%esp)
 8325c25:	8b 55 30             	mov    0x30(%ebp),%edx
 8325c28:	89 54 24 24          	mov    %edx,0x24(%esp)
 8325c2c:	8b 55 34             	mov    0x34(%ebp),%edx
 8325c2f:	89 54 24 28          	mov    %edx,0x28(%esp)
 8325c33:	8b 55 38             	mov    0x38(%ebp),%edx
 8325c36:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8325c3a:	8b 55 3c             	mov    0x3c(%ebp),%edx
 8325c3d:	89 54 24 30          	mov    %edx,0x30(%esp)
 8325c41:	8b 55 40             	mov    0x40(%ebp),%edx
 8325c44:	89 54 24 34          	mov    %edx,0x34(%esp)
 8325c48:	8b 55 44             	mov    0x44(%ebp),%edx
 8325c4b:	89 54 24 38          	mov    %edx,0x38(%esp)
 8325c4f:	8b 55 48             	mov    0x48(%ebp),%edx
 8325c52:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8325c56:	0f b6 55 4c          	movzbl 0x4c(%ebp),%edx
 8325c5a:	88 54 24 40          	mov    %dl,0x40(%esp)
 8325c5e:	89 04 24             	mov    %eax,(%esp)
 8325c61:	e8 20 d1 1d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8325c66:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8325c69:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 8325c6d:	0f 95 c0             	setne  %al
 8325c70:	84 c0                	test   %al,%al
 8325c72:	74 68                	je     8325cdc <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x1ba>
 8325c74:	0f b6 45 11          	movzbl 0x11(%ebp),%eax
 8325c78:	3c 06                	cmp    $0x6,%al
 8325c7a:	75 24                	jne    8325ca0 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x17e>
 8325c7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8325c7f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8325c83:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8325c8a:	00 
 8325c8b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8325c92:	00 
 8325c93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325c96:	89 04 24             	mov    %eax,(%esp)
 8325c99:	e8 bc 69 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8325c9e:	eb 22                	jmp    8325cc2 <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x1a0>
 8325ca0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8325ca3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8325ca7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8325cae:	00 
 8325caf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8325cb6:	00 
 8325cb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325cba:	89 04 24             	mov    %eax,(%esp)
 8325cbd:	e8 98 69 35 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 8325cc2:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 8325cc6:	0f 84 90 00 00 00    	je     8325d5c <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x23a>
 8325ccc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325ccf:	89 04 24             	mov    %eax,(%esp)
 8325cd2:	e8 7b a1 32 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 8325cd7:	e9 80 00 00 00       	jmp    8325d5c <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x23a>
 8325cdc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8325ce3:	00 
 8325ce4:	c7 44 24 08 75 5d c2 	movl   $0x8c25d75,0x8(%esp)
 8325ceb:	08 
 8325cec:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8325cf3:	00 
 8325cf4:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8325cfb:	e8 fe fa 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8325d00:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8325d03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8325d06:	89 04 24             	mov    %eax,(%esp)
 8325d09:	e8 a2 86 d5 ff       	call   807e3b0 <strlen@plt>
 8325d0e:	89 c3                	mov    %eax,%ebx
 8325d10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325d13:	89 04 24             	mov    %eax,(%esp)
 8325d16:	e8 33 5f da ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8325d1b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8325d1f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8325d22:	89 54 24 14          	mov    %edx,0x14(%esp)
 8325d26:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8325d2d:	00 
 8325d2e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8325d32:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8325d39:	00 
 8325d3a:	8d 45 10             	lea    0x10(%ebp),%eax
 8325d3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8325d41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8325d44:	89 04 24             	mov    %eax,(%esp)
 8325d47:	e8 10 10 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 8325d4c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8325d53:	eb 07                	jmp    8325d5c <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x23a>
 8325d55:	b8 00 00 00 00       	mov    $0x0,%eax
 8325d5a:	eb 03                	jmp    8325d5f <_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE+0x23d>
 8325d5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8325d5f:	83 c4 74             	add    $0x74,%esp
 8325d62:	5b                   	pop    %ebx
 8325d63:	5d                   	pop    %ebp
 8325d64:	c3                   	ret
 8325d65:	90                   	nop

```

> （该函数反编译 C 未生成）

---

## _processItemGift

```asm
// === 083264d6 WongWork::CCeraShop::_processItemGift  [0x083264d6-0x83265e7] ===
 83264d6:	55                   	push   %ebp
 83264d7:	89 e5                	mov    %esp,%ebp
 83264d9:	57                   	push   %edi
 83264da:	53                   	push   %ebx
 83264db:	81 ec 20 01 00 00    	sub    $0x120,%esp
 83264e1:	8d 9d f8 fe ff ff    	lea    -0x108(%ebp),%ebx
 83264e7:	b8 00 00 00 00       	mov    $0x0,%eax
 83264ec:	ba 40 00 00 00       	mov    $0x40,%edx
 83264f1:	89 df                	mov    %ebx,%edi
 83264f3:	89 d1                	mov    %edx,%ecx
 83264f5:	f3 ab                	rep stos %eax,%es:(%edi)
 83264f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 83264fa:	89 04 24             	mov    %eax,(%esp)
 83264fd:	e8 26 ab dd ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8326502:	89 c3                	mov    %eax,%ebx
 8326504:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832650b:	00 
 832650c:	c7 44 24 08 52 5e c2 	movl   $0x8c25e52,0x8(%esp)
 8326513:	08 
 8326514:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 832651b:	00 
 832651c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8326523:	e8 d6 f2 77 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8326528:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832652c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326530:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 8326536:	89 04 24             	mov    %eax,(%esp)
 8326539:	e8 02 7f d5 ff       	call   807e440 <sprintf@plt>
 832653e:	8b 45 17             	mov    0x17(%ebp),%eax
 8326541:	89 c1                	mov    %eax,%ecx
 8326543:	8b 55 12             	mov    0x12(%ebp),%edx
 8326546:	8b 45 54             	mov    0x54(%ebp),%eax
 8326549:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 832654c:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 8326552:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8326556:	89 54 24 0c          	mov    %edx,0xc(%esp)
 832655a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8326561:	00 
 8326562:	89 44 24 04          	mov    %eax,0x4(%esp)
 8326566:	89 1c 24             	mov    %ebx,(%esp)
 8326569:	e8 6c e3 35 00       	call   86848da <_ZN15cUserHistoryLog23SendMailForCeraShopGiftEjcjj>
 832656e:	8b 45 17             	mov    0x17(%ebp),%eax
 8326571:	89 c1                	mov    %eax,%ecx
 8326573:	8b 55 12             	mov    0x12(%ebp),%edx
 8326576:	8b 45 54             	mov    0x54(%ebp),%eax
 8326579:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 832657d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8326581:	89 44 24 08          	mov    %eax,0x8(%esp)
 8326585:	8b 45 50             	mov    0x50(%ebp),%eax
 8326588:	89 44 24 04          	mov    %eax,0x4(%esp)
 832658c:	8b 45 0c             	mov    0xc(%ebp),%eax
 832658f:	89 04 24             	mov    %eax,(%esp)
 8326592:	e8 e3 42 36 00       	call   868a87a <_ZN5CUser28SendCeraShopGiftStatisticLogEjjmj>
 8326597:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 832659d:	89 04 24             	mov    %eax,(%esp)
 83265a0:	e8 0b 7e d5 ff       	call   807e3b0 <strlen@plt>
 83265a5:	89 c2                	mov    %eax,%edx
 83265a7:	8b 45 54             	mov    0x54(%ebp),%eax
 83265aa:	89 54 24 18          	mov    %edx,0x18(%esp)
 83265ae:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 83265b4:	89 54 24 14          	mov    %edx,0x14(%esp)
 83265b8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 83265bf:	00 
 83265c0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 83265c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83265cb:	00 
 83265cc:	8d 45 10             	lea    0x10(%ebp),%eax
 83265cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 83265d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 83265d6:	89 04 24             	mov    %eax,(%esp)
 83265d9:	e8 7e 07 23 00       	call   8556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>
 83265de:	81 c4 20 01 00 00    	add    $0x120,%esp
 83265e4:	5b                   	pop    %ebx
 83265e5:	5f                   	pop    %edi
 83265e6:	5d                   	pop    %ebp
 83265e7:	c3                   	ret

```

> （该函数反编译 C 未生成）

---

## _sendCargoUpgradePacket

```asm
// === 08327726 WongWork::CCeraShop::_sendCargoUpgradePacket  [0x08327726-0x83277db] ===
 8327726:	55                   	push   %ebp
 8327727:	89 e5                	mov    %esp,%ebp
 8327729:	56                   	push   %esi
 832772a:	53                   	push   %ebx
 832772b:	83 ec 20             	sub    $0x20,%esp
 832772e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327731:	89 04 24             	mov    %eax,(%esp)
 8327734:	e8 13 66 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8327739:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 8327740:	00 
 8327741:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8327748:	00 
 8327749:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832774c:	89 04 24             	mov    %eax,(%esp)
 832774f:	e8 a8 41 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8327754:	8b 45 10             	mov    0x10(%ebp),%eax
 8327757:	89 44 24 04          	mov    %eax,0x4(%esp)
 832775b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832775e:	89 04 24             	mov    %eax,(%esp)
 8327761:	e8 3e 27 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8327766:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327769:	89 04 24             	mov    %eax,(%esp)
 832776c:	e8 13 a3 e2 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 8327771:	89 04 24             	mov    %eax,(%esp)
 8327774:	e8 8f 5f f0 ff       	call   822d708 <_ZNK6CCargo11GetCapacityEv>
 8327779:	89 44 24 04          	mov    %eax,0x4(%esp)
 832777d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327780:	89 04 24             	mov    %eax,(%esp)
 8327783:	e8 1c 27 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8327788:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832778f:	00 
 8327790:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327793:	89 04 24             	mov    %eax,(%esp)
 8327796:	e8 bd 41 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 832779b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832779e:	89 44 24 04          	mov    %eax,0x4(%esp)
 83277a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83277a5:	89 04 24             	mov    %eax,(%esp)
 83277a8:	e8 0d 0e 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 83277ad:	eb 1b                	jmp    83277ca <_ZN8WongWork9CCeraShop23_sendCargoUpgradePacketEP5CUseri+0xa4>
 83277af:	89 d3                	mov    %edx,%ebx
 83277b1:	89 c6                	mov    %eax,%esi
 83277b3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83277b6:	89 04 24             	mov    %eax,(%esp)
 83277b9:	e8 c2 66 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83277be:	89 f0                	mov    %esi,%eax
 83277c0:	89 da                	mov    %ebx,%edx
 83277c2:	89 04 24             	mov    %eax,(%esp)
 83277c5:	e8 86 bf 7b 00       	call   8ae3750 <_Unwind_Resume>
 83277ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83277cd:	89 04 24             	mov    %eax,(%esp)
 83277d0:	e8 ab 66 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 83277d5:	83 c4 20             	add    $0x20,%esp
 83277d8:	5b                   	pop    %ebx
 83277d9:	5e                   	pop    %esi
 83277da:	5d                   	pop    %ebp
 83277db:	c3                   	ret

```

```c
// WongWork::CCeraShop::_sendCargoUpgradePacket @ 0x8327726

/* WongWork::CCeraShop::_sendCargoUpgradePacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendCargoUpgradePacket(CCeraShop *this,CUser *param_1,int param_2)

{
  CCargo *this_00;
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0832774f to 083277ac has its CatchHandler @ 083277af */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
  iVar1 = CCargo::GetCapacity(this_00);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _sendCharacSlotExtendPacket

```asm
// === 08327674 WongWork::CCeraShop::_sendCharacSlotExtendPacket  [0x08327674-0x8327725] ===
 8327674:	55                   	push   %ebp
 8327675:	89 e5                	mov    %esp,%ebp
 8327677:	56                   	push   %esi
 8327678:	53                   	push   %ebx
 8327679:	83 ec 20             	sub    $0x20,%esp
 832767c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832767f:	89 04 24             	mov    %eax,(%esp)
 8327682:	e8 c5 66 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8327687:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 832768e:	00 
 832768f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8327696:	00 
 8327697:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832769a:	89 04 24             	mov    %eax,(%esp)
 832769d:	e8 5a 42 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83276a2:	8b 45 10             	mov    0x10(%ebp),%eax
 83276a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83276a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83276ac:	89 04 24             	mov    %eax,(%esp)
 83276af:	e8 f0 27 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 83276b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83276b7:	89 04 24             	mov    %eax,(%esp)
 83276ba:	e8 a1 91 f0 ff       	call   8230860 <_ZNK5CUser18getCharacSlotLimitEv>
 83276bf:	0f b6 c0             	movzbl %al,%eax
 83276c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 83276c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83276c9:	89 04 24             	mov    %eax,(%esp)
 83276cc:	e8 4f 42 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 83276d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83276d8:	00 
 83276d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83276dc:	89 04 24             	mov    %eax,(%esp)
 83276df:	e8 74 42 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 83276e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83276e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 83276eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83276ee:	89 04 24             	mov    %eax,(%esp)
 83276f1:	e8 c4 0e 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 83276f6:	eb 1b                	jmp    8327713 <_ZN8WongWork9CCeraShop27_sendCharacSlotExtendPacketEP5CUseri+0x9f>
 83276f8:	89 d3                	mov    %edx,%ebx
 83276fa:	89 c6                	mov    %eax,%esi
 83276fc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83276ff:	89 04 24             	mov    %eax,(%esp)
 8327702:	e8 79 67 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8327707:	89 f0                	mov    %esi,%eax
 8327709:	89 da                	mov    %ebx,%edx
 832770b:	89 04 24             	mov    %eax,(%esp)
 832770e:	e8 3d c0 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327713:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327716:	89 04 24             	mov    %eax,(%esp)
 8327719:	e8 62 67 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 832771e:	83 c4 20             	add    $0x20,%esp
 8327721:	5b                   	pop    %ebx
 8327722:	5e                   	pop    %esi
 8327723:	5d                   	pop    %ebp
 8327724:	c3                   	ret
 8327725:	90                   	nop

```

```c
// WongWork::CCeraShop::_sendCharacSlotExtendPacket @ 0x8327674

/* WongWork::CCeraShop::_sendCharacSlotExtendPacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendCharacSlotExtendPacket(CCeraShop *this,CUser *param_1,int param_2)

{
  uint uVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0832769d to 083276f5 has its CatchHandler @ 083276f8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  uVar1 = CUser::getCharacSlotLimit(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _sendInventoryUpgradePacket

```asm
// === 083275be WongWork::CCeraShop::_sendInventoryUpgradePacket  [0x083275be-0x8327673] ===
 83275be:	55                   	push   %ebp
 83275bf:	89 e5                	mov    %esp,%ebp
 83275c1:	56                   	push   %esi
 83275c2:	53                   	push   %ebx
 83275c3:	83 ec 20             	sub    $0x20,%esp
 83275c6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83275c9:	89 04 24             	mov    %eax,(%esp)
 83275cc:	e8 7b 67 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 83275d1:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 83275d8:	00 
 83275d9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83275e0:	00 
 83275e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83275e4:	89 04 24             	mov    %eax,(%esp)
 83275e7:	e8 10 43 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 83275ec:	8b 45 10             	mov    0x10(%ebp),%eax
 83275ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 83275f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83275f6:	89 04 24             	mov    %eax,(%esp)
 83275f9:	e8 a6 28 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 83275fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327601:	89 04 24             	mov    %eax,(%esp)
 8327604:	e8 75 2c db ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8327609:	89 04 24             	mov    %eax,(%esp)
 832760c:	e8 eb 60 f0 ff       	call   822d6fc <_ZNK10CInventory22get_inventory_capacityEv>
 8327611:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327615:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327618:	89 04 24             	mov    %eax,(%esp)
 832761b:	e8 84 28 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8327620:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8327627:	00 
 8327628:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832762b:	89 04 24             	mov    %eax,(%esp)
 832762e:	e8 25 43 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8327633:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327636:	89 44 24 04          	mov    %eax,0x4(%esp)
 832763a:	8b 45 0c             	mov    0xc(%ebp),%eax
 832763d:	89 04 24             	mov    %eax,(%esp)
 8327640:	e8 75 0f 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8327645:	eb 1b                	jmp    8327662 <_ZN8WongWork9CCeraShop27_sendInventoryUpgradePacketEP5CUseri+0xa4>
 8327647:	89 d3                	mov    %edx,%ebx
 8327649:	89 c6                	mov    %eax,%esi
 832764b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832764e:	89 04 24             	mov    %eax,(%esp)
 8327651:	e8 2a 68 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8327656:	89 f0                	mov    %esi,%eax
 8327658:	89 da                	mov    %ebx,%edx
 832765a:	89 04 24             	mov    %eax,(%esp)
 832765d:	e8 ee c0 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327662:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327665:	89 04 24             	mov    %eax,(%esp)
 8327668:	e8 13 68 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 832766d:	83 c4 20             	add    $0x20,%esp
 8327670:	5b                   	pop    %ebx
 8327671:	5e                   	pop    %esi
 8327672:	5d                   	pop    %ebp
 8327673:	c3                   	ret

```

```c
// WongWork::CCeraShop::_sendInventoryUpgradePacket @ 0x83275be

/* WongWork::CCeraShop::_sendInventoryUpgradePacket(CUser*, int) */

void __thiscall
WongWork::CCeraShop::_sendInventoryUpgradePacket(CCeraShop *this,CUser *param_1,int param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 083275e7 to 08327644 has its CatchHandler @ 08327647 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar1 = CInventory::get_inventory_capacity(this_00);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## _sendPremiumPacket

```asm
// === 083277dc WongWork::CCeraShop::_sendPremiumPacket  [0x083277dc-0x8327893] ===
 83277dc:	55                   	push   %ebp
 83277dd:	89 e5                	mov    %esp,%ebp
 83277df:	56                   	push   %esi
 83277e0:	53                   	push   %ebx
 83277e1:	83 ec 20             	sub    $0x20,%esp
 83277e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 83277e7:	89 04 24             	mov    %eax,(%esp)
 83277ea:	e8 5d 65 26 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 83277ef:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 83277f6:	00 
 83277f7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83277fe:	00 
 83277ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327802:	89 04 24             	mov    %eax,(%esp)
 8327805:	e8 f2 40 da ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 832780a:	8b 45 10             	mov    0x10(%ebp),%eax
 832780d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327811:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327814:	89 04 24             	mov    %eax,(%esp)
 8327817:	e8 88 26 db ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 832781c:	8b 45 14             	mov    0x14(%ebp),%eax
 832781f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327823:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327826:	89 04 24             	mov    %eax,(%esp)
 8327829:	e8 f2 40 da ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 832782e:	8b 45 18             	mov    0x18(%ebp),%eax
 8327831:	89 44 24 04          	mov    %eax,0x4(%esp)
 8327835:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327838:	89 04 24             	mov    %eax,(%esp)
 832783b:	e8 fc 40 da ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8327840:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8327847:	00 
 8327848:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832784b:	89 04 24             	mov    %eax,(%esp)
 832784e:	e8 05 41 da ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8327853:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327856:	89 44 24 04          	mov    %eax,0x4(%esp)
 832785a:	8b 45 0c             	mov    0xc(%ebp),%eax
 832785d:	89 04 24             	mov    %eax,(%esp)
 8327860:	e8 55 0d 32 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8327865:	eb 1b                	jmp    8327882 <_ZN8WongWork9CCeraShop18_sendPremiumPacketEP5CUseriii+0xa6>
 8327867:	89 d3                	mov    %edx,%ebx
 8327869:	89 c6                	mov    %eax,%esi
 832786b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 832786e:	89 04 24             	mov    %eax,(%esp)
 8327871:	e8 0a 66 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8327876:	89 f0                	mov    %esi,%eax
 8327878:	89 da                	mov    %ebx,%edx
 832787a:	89 04 24             	mov    %eax,(%esp)
 832787d:	e8 ce be 7b 00       	call   8ae3750 <_Unwind_Resume>
 8327882:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8327885:	89 04 24             	mov    %eax,(%esp)
 8327888:	e8 f3 65 26 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 832788d:	83 c4 20             	add    $0x20,%esp
 8327890:	5b                   	pop    %ebx
 8327891:	5e                   	pop    %esi
 8327892:	5d                   	pop    %ebp
 8327893:	c3                   	ret

```

```c
// WongWork::CCeraShop::_sendPremiumPacket @ 0x83277dc

/* WongWork::CCeraShop::_sendPremiumPacket(CUser*, int, int, int) */

void __thiscall
WongWork::CCeraShop::_sendPremiumPacket
          (CCeraShop *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08327805 to 08327864 has its CatchHandler @ 08327867 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x42);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## autoUnsealItem

```asm
// === 08327f10 WongWork::CCeraShop::autoUnsealItem  [0x08327f10-0x8328061] ===
 8327f10:	55                   	push   %ebp
 8327f11:	89 e5                	mov    %esp,%ebp
 8327f13:	57                   	push   %edi
 8327f14:	56                   	push   %esi
 8327f15:	53                   	push   %ebx
 8327f16:	83 ec 5c             	sub    $0x5c,%esp
 8327f19:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8327f1d:	0f 84 33 01 00 00    	je     8328056 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x146>
 8327f23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327f26:	8b 00                	mov    (%eax),%eax
 8327f28:	83 c0 4c             	add    $0x4c,%eax
 8327f2b:	8b 10                	mov    (%eax),%edx
 8327f2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327f30:	89 04 24             	mov    %eax,(%esp)
 8327f33:	ff d2                	call   *%edx
 8327f35:	83 f0 01             	xor    $0x1,%eax
 8327f38:	84 c0                	test   %al,%al
 8327f3a:	0f 85 19 01 00 00    	jne    8328059 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x149>
 8327f40:	8b 45 08             	mov    0x8(%ebp),%eax
 8327f43:	89 04 24             	mov    %eax,(%esp)
 8327f46:	e8 a9 ff ff ff       	call   8327ef4 <_ZN8WongWork9CCeraShop15getOriginalItemEv>
 8327f4b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8327f4e:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8327f52:	0f 84 02 01 00 00    	je     832805a <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x14a>
 8327f58:	e8 3e 42 da ff       	call   80cc19b <_Z14G_CDataManagerv>
 8327f5d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8327f60:	89 54 24 04          	mov    %edx,0x4(%esp)
 8327f64:	89 04 24             	mov    %eax,(%esp)
 8327f67:	e8 c6 7a 03 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8327f6c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8327f6f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8327f73:	74 1d                	je     8327f92 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x82>
 8327f75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8327f78:	8b 00                	mov    (%eax),%eax
 8327f7a:	83 c0 54             	add    $0x54,%eax
 8327f7d:	8b 10                	mov    (%eax),%edx
 8327f7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8327f82:	89 04 24             	mov    %eax,(%esp)
 8327f85:	ff d2                	call   *%edx
 8327f87:	84 c0                	test   %al,%al
 8327f89:	74 07                	je     8327f92 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x82>
 8327f8b:	b8 01 00 00 00       	mov    $0x1,%eax
 8327f90:	eb 05                	jmp    8327f97 <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x87>
 8327f92:	b8 00 00 00 00       	mov    $0x0,%eax
 8327f97:	84 c0                	test   %al,%al
 8327f99:	0f 84 bb 00 00 00    	je     832805a <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x14a>
 8327f9f:	8b 45 10             	mov    0x10(%ebp),%eax
 8327fa2:	83 c0 25             	add    $0x25,%eax
 8327fa5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8327fa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327fab:	8b 00                	mov    (%eax),%eax
 8327fad:	83 c0 50             	add    $0x50,%eax
 8327fb0:	8b 10                	mov    (%eax),%edx
 8327fb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327fb5:	89 04 24             	mov    %eax,(%esp)
 8327fb8:	ff d2                	call   *%edx
 8327fba:	89 c7                	mov    %eax,%edi
 8327fbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327fbf:	89 04 24             	mov    %eax,(%esp)
 8327fc2:	e8 4b 93 dc ff       	call   80f1312 <_ZNK5CItem16getItemGroupNameEv>
 8327fc7:	89 c6                	mov    %eax,%esi
 8327fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327fcc:	89 04 24             	mov    %eax,(%esp)
 8327fcf:	e8 1a 93 dc ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 8327fd4:	89 c3                	mov    %eax,%ebx
 8327fd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8327fd9:	89 04 24             	mov    %eax,(%esp)
 8327fdc:	e8 f5 92 dc ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 8327fe1:	89 c2                	mov    %eax,%edx
 8327fe3:	8b 45 10             	mov    0x10(%ebp),%eax
 8327fe6:	8b 48 02             	mov    0x2(%eax),%ecx
 8327fe9:	a1 20 f8 41 09       	mov    0x941f820,%eax
 8327fee:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8327ff1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8327ff4:	89 44 24 18          	mov    %eax,0x18(%esp)
 8327ff8:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8327ffc:	89 74 24 10          	mov    %esi,0x10(%esp)
 8328000:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8328004:	89 54 24 08          	mov    %edx,0x8(%esp)
 8328008:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 832800c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 832800f:	89 04 24             	mov    %eax,(%esp)
 8328012:	e8 af ac 2c 00       	call   85f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>
 8328017:	83 f0 01             	xor    $0x1,%eax
 832801a:	84 c0                	test   %al,%al
 832801c:	74 3c                	je     832805a <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x14a>
 832801e:	8b 45 10             	mov    0x10(%ebp),%eax
 8328021:	8b 40 02             	mov    0x2(%eax),%eax
 8328024:	89 44 24 14          	mov    %eax,0x14(%esp)
 8328028:	c7 44 24 10 6a 5e c2 	movl   $0x8c25e6a,0x10(%esp)
 832802f:	08 
 8328030:	c7 44 24 0c 31 21 00 	movl   $0x2131,0xc(%esp)
 8328037:	00 
 8328038:	c7 44 24 08 c0 6a c2 	movl   $0x8c26ac0,0x8(%esp)
 832803f:	08 
 8328040:	c7 44 24 04 83 5c c2 	movl   $0x8c25c83,0x4(%esp)
 8328047:	08 
 8328048:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 832804f:	e8 b6 bb 7a 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8328054:	eb 04                	jmp    832805a <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x14a>
 8328056:	90                   	nop
 8328057:	eb 01                	jmp    832805a <_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item+0x14a>
 8328059:	90                   	nop
 832805a:	83 c4 5c             	add    $0x5c,%esp
 832805d:	5b                   	pop    %ebx
 832805e:	5e                   	pop    %esi
 832805f:	5f                   	pop    %edi
 8328060:	5d                   	pop    %ebp
 8328061:	c3                   	ret

```

```c
// WongWork::CCeraShop::autoUnsealItem @ 0x8327f10

/* WongWork::CCeraShop::autoUnsealItem(CItem const*, Inven_Item&) */

void __thiscall
WongWork::CCeraShop::autoUnsealItem(CCeraShop *this,CItem *param_1,Inven_Item *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (((param_1 != (CItem *)0x0) &&
      (cVar2 = (**(code **)(*(int *)param_1 + 0x4c))(param_1), cVar2 == '\x01')) &&
     (iVar3 = getOriginalItem(this), iVar3 != 0)) {
    this_00 = (CDataManager *)G_CDataManager();
    piVar4 = (int *)CDataManager::find_item(this_00,iVar3);
    if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x54))(piVar4), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = (**(code **)(*(int *)param_1 + 0x50))(param_1);
      uVar6 = CItem::getItemGroupName(param_1);
      uVar7 = CItem::getUsableLevel(param_1);
      uVar8 = CItem::get_rarity(param_1);
      cVar2 = random_option::CRandomOptionItemHandle::give_option
                        (GlobalData::g_randomOptionHandle,*(undefined4 *)(param_2 + 2),uVar8,uVar7,
                         uVar6,uVar5,param_2 + 0x25);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"CeraShop.cpp",
                   "void WongWork::CCeraShop::autoUnsealItem(const CItem*, Inven_Item&)",0x2131,
                   "autoUnsealItem : %d",*(undefined4 *)(param_2 + 2));
      }
    }
  }
  return;
}

```

---

## checkBuyingCondition

```asm
// === 08323f2a WongWork::CCeraShop::checkBuyingCondition  [0x08323f2a-0x8323f85] ===
 8323f2a:	55                   	push   %ebp
 8323f2b:	89 e5                	mov    %esp,%ebp
 8323f2d:	83 ec 38             	sub    $0x38,%esp
 8323f30:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 8323f33:	8b 55 20             	mov    0x20(%ebp),%edx
 8323f36:	8b 45 24             	mov    0x24(%ebp),%eax
 8323f39:	66 89 4d f4          	mov    %cx,-0xc(%ebp)
 8323f3d:	88 55 f0             	mov    %dl,-0x10(%ebp)
 8323f40:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 8323f44:	0f b7 4d ec          	movzwl -0x14(%ebp),%ecx
 8323f48:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 8323f4c:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 8323f50:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8323f54:	89 54 24 18          	mov    %edx,0x18(%esp)
 8323f58:	89 44 24 14          	mov    %eax,0x14(%esp)
 8323f5c:	8b 45 18             	mov    0x18(%ebp),%eax
 8323f5f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8323f63:	8b 45 14             	mov    0x14(%ebp),%eax
 8323f66:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8323f6a:	8b 45 10             	mov    0x10(%ebp),%eax
 8323f6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8323f71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8323f74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8323f78:	8b 45 08             	mov    0x8(%ebp),%eax
 8323f7b:	89 04 24             	mov    %eax,(%esp)
 8323f7e:	e8 03 00 00 00       	call   8323f86 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht>
 8323f83:	c9                   	leave
 8323f84:	c3                   	ret
 8323f85:	90                   	nop

```

```c
// WongWork::CCeraShop::checkBuyingCondition @ 0x8323f2a

/* WongWork::CCeraShop::checkBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int,
   unsigned short, unsigned char, unsigned short) */

void __thiscall
WongWork::CCeraShop::checkBuyingCondition
          (CCeraShop *this,CUser *param_1,uint param_2,ulong param_3,uint param_4,ushort param_5,
          uchar param_6,ushort param_7)

{
  _CheckBuyingCondition(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}

```

---

## getOriginalItem

```asm
// === 08327ef4 WongWork::CCeraShop::getOriginalItem  [0x08327ef4-0x8327f0f] ===
 8327ef4:	55                   	push   %ebp
 8327ef5:	89 e5                	mov    %esp,%ebp
 8327ef7:	8b 45 08             	mov    0x8(%ebp),%eax
 8327efa:	8b 40 04             	mov    0x4(%eax),%eax
 8327efd:	85 c0                	test   %eax,%eax
 8327eff:	7e 08                	jle    8327f09 <_ZN8WongWork9CCeraShop15getOriginalItemEv+0x15>
 8327f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8327f04:	8b 40 04             	mov    0x4(%eax),%eax
 8327f07:	eb 05                	jmp    8327f0e <_ZN8WongWork9CCeraShop15getOriginalItemEv+0x1a>
 8327f09:	b8 00 00 00 00       	mov    $0x0,%eax
 8327f0e:	5d                   	pop    %ebp
 8327f0f:	c3                   	ret

```

```c
// WongWork::CCeraShop::getOriginalItem @ 0x8327ef4

/* WongWork::CCeraShop::getOriginalItem() */

undefined4 __thiscall WongWork::CCeraShop::getOriginalItem(CCeraShop *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 4) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 4);
  }
  return uVar1;
}

```

---

## setOriginalItem

```asm
// === 08327ee6 WongWork::CCeraShop::setOriginalItem  [0x08327ee6-0x8327ef3] ===
 8327ee6:	55                   	push   %ebp
 8327ee7:	89 e5                	mov    %esp,%ebp
 8327ee9:	8b 45 08             	mov    0x8(%ebp),%eax
 8327eec:	8b 55 0c             	mov    0xc(%ebp),%edx
 8327eef:	89 50 04             	mov    %edx,0x4(%eax)
 8327ef2:	5d                   	pop    %ebp
 8327ef3:	c3                   	ret

```

```c
// WongWork::CCeraShop::setOriginalItem @ 0x8327ee6

/* WongWork::CCeraShop::setOriginalItem(int) */

void __thiscall WongWork::CCeraShop::setOriginalItem(CCeraShop *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}

```

---

## ~CCeraShop

```asm
// === 08320314 WongWork::CCeraShop::~CCeraShop  [0x08320314-0x8320339] ===
 8320314:	55                   	push   %ebp
 8320315:	89 e5                	mov    %esp,%ebp
 8320317:	53                   	push   %ebx
 8320318:	83 ec 14             	sub    $0x14,%esp
 832031b:	8b 45 08             	mov    0x8(%ebp),%eax
 832031e:	8b 18                	mov    (%eax),%ebx
 8320320:	85 db                	test   %ebx,%ebx
 8320322:	74 10                	je     8320334 <_ZN8WongWork9CCeraShopD1Ev+0x20>
 8320324:	89 1c 24             	mov    %ebx,(%esp)
 8320327:	e8 58 7f 00 00       	call   8328284 <_ZN18SpecialItemHandlerD1Ev>
 832032c:	89 1c 24             	mov    %ebx,(%esp)
 832032f:	e8 bc 41 40 00       	call   87244f0 <_ZdlPv>
 8320334:	83 c4 14             	add    $0x14,%esp
 8320337:	5b                   	pop    %ebx
 8320338:	5d                   	pop    %ebp
 8320339:	c3                   	ret

```

```c
// WongWork::CCeraShop::~CCeraShop @ 0x8320314

/* WongWork::CCeraShop::~CCeraShop() */

void __thiscall WongWork::CCeraShop::~CCeraShop(CCeraShop *this)

{
  SpecialItemHandler *this_00;
  
  this_00 = *(SpecialItemHandler **)this;
  if (this_00 != (SpecialItemHandler *)0x0) {
    SpecialItemHandler::~SpecialItemHandler(this_00);
    operator_delete(this_00);
  }
  return;
}

```


# ARAD__CeraShopPurcahseCountBonus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CheckBonusItem

```asm
// === 081abff0 ARAD::CeraShopPurcahseCountBonus::CheckBonusItem  [0x081abff0-0x81ac04b] ===
 81abff0:	55                   	push   %ebp
 81abff1:	89 e5                	mov    %esp,%ebp
 81abff3:	83 ec 28             	sub    $0x28,%esp
 81abff6:	8b 55 08             	mov    0x8(%ebp),%edx
 81abff9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81abffc:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81abfff:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ac003:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac007:	89 04 24             	mov    %eax,(%esp)
 81ac00a:	e8 39 07 00 00       	call   81ac748 <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 81ac00f:	83 ec 04             	sub    $0x4,%esp
 81ac012:	8b 55 08             	mov    0x8(%ebp),%edx
 81ac015:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ac018:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac01c:	89 04 24             	mov    %eax,(%esp)
 81ac01f:	e8 5e 07 00 00       	call   81ac782 <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 81ac024:	83 ec 04             	sub    $0x4,%esp
 81ac027:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ac02a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac02e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ac031:	89 04 24             	mov    %eax,(%esp)
 81ac034:	e8 6f 07 00 00       	call   81ac7a8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS4_EEEEeqERKS8_>
 81ac039:	84 c0                	test   %al,%al
 81ac03b:	74 07                	je     81ac044 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi+0x54>
 81ac03d:	b8 00 00 00 00       	mov    $0x0,%eax
 81ac042:	eb 05                	jmp    81ac049 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi+0x59>
 81ac044:	b8 01 00 00 00       	mov    $0x1,%eax
 81ac049:	c9                   	leave
 81ac04a:	c3                   	ret
 81ac04b:	90                   	nop

```

```c
// ARAD::CeraShopPurcahseCountBonus::CheckBonusItem @ 0x81abff0

/* ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int) */

bool ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(int param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
  local_14 [4];
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
          ::operator==(local_14,(_Rb_tree_iterator *)local_10);
  return cVar1 == '\0';
}

```

---

## GiveBonusItem

```asm
// === 081abf44 ARAD::CeraShopPurcahseCountBonus::GiveBonusItem  [0x081abf44-0x81abfef] ===
 81abf44:	55                   	push   %ebp
 81abf45:	89 e5                	mov    %esp,%ebp
 81abf47:	53                   	push   %ebx
 81abf48:	83 ec 34             	sub    $0x34,%esp
 81abf4b:	8b 45 18             	mov    0x18(%ebp),%eax
 81abf4e:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81abf52:	8b 45 14             	mov    0x14(%ebp),%eax
 81abf55:	89 44 24 04          	mov    %eax,0x4(%esp)
 81abf59:	8b 45 08             	mov    0x8(%ebp),%eax
 81abf5c:	89 04 24             	mov    %eax,(%esp)
 81abf5f:	e8 8c 00 00 00       	call   81abff0 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi>
 81abf64:	83 f0 01             	xor    $0x1,%eax
 81abf67:	84 c0                	test   %al,%al
 81abf69:	75 7c                	jne    81abfe7 <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit+0xa3>
 81abf6b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81abf6e:	89 04 24             	mov    %eax,(%esp)
 81abf71:	e8 9a 07 00 00       	call   81ac710 <_ZN4ARAD13PurcahseBonusC1Ev>
 81abf76:	8b 55 08             	mov    0x8(%ebp),%edx
 81abf79:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81abf7c:	8d 4d 14             	lea    0x14(%ebp),%ecx
 81abf7f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81abf83:	89 54 24 04          	mov    %edx,0x4(%esp)
 81abf87:	89 04 24             	mov    %eax,(%esp)
 81abf8a:	e8 b9 07 00 00       	call   81ac748 <_ZNSt3mapIiSt6vectorIN4ARAD13PurcahseBonusESaIS2_EESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 81abf8f:	83 ec 04             	sub    $0x4,%esp
 81abf92:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 81abf96:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81abf99:	89 04 24             	mov    %eax,(%esp)
 81abf9c:	e8 d3 07 00 00       	call   81ac774 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIN4ARAD13PurcahseBonusESaIS4_EEEEptEv>
 81abfa1:	8d 50 04             	lea    0x4(%eax),%edx
 81abfa4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81abfa8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81abfab:	89 44 24 08          	mov    %eax,0x8(%esp)
 81abfaf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81abfb3:	8b 45 08             	mov    0x8(%ebp),%eax
 81abfb6:	89 04 24             	mov    %eax,(%esp)
 81abfb9:	e8 8e 00 00 00       	call   81ac04c <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t>
 81abfbe:	83 f0 01             	xor    $0x1,%eax
 81abfc1:	84 c0                	test   %al,%al
 81abfc3:	75 25                	jne    81abfea <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit+0xa6>
 81abfc5:	8b 45 14             	mov    0x14(%ebp),%eax
 81abfc8:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81abfcb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81abfcf:	89 44 24 08          	mov    %eax,0x8(%esp)
 81abfd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81abfd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81abfda:	8b 45 08             	mov    0x8(%ebp),%eax
 81abfdd:	89 04 24             	mov    %eax,(%esp)
 81abfe0:	e8 59 01 00 00       	call   81ac13e <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE>
 81abfe5:	eb 04                	jmp    81abfeb <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit+0xa7>
 81abfe7:	90                   	nop
 81abfe8:	eb 01                	jmp    81abfeb <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit+0xa7>
 81abfea:	90                   	nop
 81abfeb:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81abfee:	c9                   	leave
 81abfef:	c3                   	ret

```

```c
// ARAD::CeraShopPurcahseCountBonus::GiveBonusItem @ 0x81abf44

/* ARAD::CeraShopPurcahseCountBonus::GiveBonusItem(CUser*, unsigned long, int, unsigned short) */

void __thiscall
ARAD::CeraShopPurcahseCountBonus::GiveBonusItem
          (CeraShopPurcahseCountBonus *this,CUser *param_1,ulong param_2,int param_3,ushort param_4)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
  local_1c [4];
  PurcahseBonus local_18 [16];
  
  cVar1 = CheckBonusItem((int)this);
  if (cVar1 == '\x01') {
    PurcahseBonus::PurcahseBonus(local_18);
    std::
    map<int,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>>
    ::find((int *)local_1c);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>>
            ::operator->(local_1c);
    cVar1 = _findBonusItem(this,(vector *)(iVar2 + 4),local_18,param_4);
    if (cVar1 == '\x01') {
      _processBonusItem(this,param_1,param_3,local_18);
    }
  }
  return;
}

```

---

## LoadScript

```asm
// === 081abf14 ARAD::CeraShopPurcahseCountBonus::LoadScript  [0x081abf14-0x81abf43] ===
 81abf14:	55                   	push   %ebp
 81abf15:	89 e5                	mov    %esp,%ebp
 81abf17:	83 ec 18             	sub    $0x18,%esp
 81abf1a:	8b 45 08             	mov    0x8(%ebp),%eax
 81abf1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81abf21:	c7 04 24 e0 1c bb 08 	movl   $0x8bb1ce0,(%esp)
 81abf28:	e8 bf a3 70 00       	call   88b62ec <_ZN4ARAD35importCashShopPurcahseBonusItemListEPcRSt3mapIiSt6vectorINS_13PurcahseBonusESaIS3_EESt4lessIiESaISt4pairIKiS5_EEE>
 81abf2d:	85 c0                	test   %eax,%eax
 81abf2f:	0f 9f c0             	setg   %al
 81abf32:	84 c0                	test   %al,%al
 81abf34:	74 07                	je     81abf3d <_ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x29>
 81abf36:	b8 00 00 00 00       	mov    $0x0,%eax
 81abf3b:	eb 05                	jmp    81abf42 <_ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv+0x2e>
 81abf3d:	b8 01 00 00 00       	mov    $0x1,%eax
 81abf42:	c9                   	leave
 81abf43:	c3                   	ret

```

```c
// ARAD::CeraShopPurcahseCountBonus::LoadScript @ 0x81abf14

/* ARAD::CeraShopPurcahseCountBonus::LoadScript() */

bool __thiscall ARAD::CeraShopPurcahseCountBonus::LoadScript(CeraShopPurcahseCountBonus *this)

{
  int iVar1;
  
  iVar1 = importCashShopPurcahseBonusItemList("CashShop/PurcahseBonusItem.shp",(map *)this);
  return iVar1 < 1;
}

```

---

## _findBonusItem

```asm
// === 081ac04c ARAD::CeraShopPurcahseCountBonus::_findBonusItem  [0x081ac04c-0x81ac13d] ===
 81ac04c:	55                   	push   %ebp
 81ac04d:	89 e5                	mov    %esp,%ebp
 81ac04f:	83 ec 38             	sub    $0x38,%esp
 81ac052:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac055:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81ac059:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ac05c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ac05f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac063:	89 04 24             	mov    %eax,(%esp)
 81ac066:	e8 51 07 00 00       	call   81ac7bc <_ZNKSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE5beginEv>
 81ac06b:	83 ec 04             	sub    $0x4,%esp
 81ac06e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ac071:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ac074:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac078:	89 04 24             	mov    %eax,(%esp)
 81ac07b:	e8 68 07 00 00       	call   81ac7e8 <_ZNKSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE3endEv>
 81ac080:	83 ec 04             	sub    $0x4,%esp
 81ac083:	eb 2d                	jmp    81ac0b2 <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0x66>
 81ac085:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ac088:	89 04 24             	mov    %eax,(%esp)
 81ac08b:	e8 c6 07 00 00       	call   81ac856 <_ZNK9__gnu_cxx17__normal_iteratorIPKN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEptEv>
 81ac090:	0f b6 00             	movzbl (%eax),%eax
 81ac093:	0f b6 c0             	movzbl %al,%eax
 81ac096:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 81ac09a:	0f 96 c0             	setbe  %al
 81ac09d:	84 c0                	test   %al,%al
 81ac09f:	74 06                	je     81ac0a7 <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0x5b>
 81ac0a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ac0a4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ac0a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ac0aa:	89 04 24             	mov    %eax,(%esp)
 81ac0ad:	e8 8e 07 00 00       	call   81ac840 <_ZN9__gnu_cxx17__normal_iteratorIPKN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEppEv>
 81ac0b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ac0b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ac0b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac0bc:	89 04 24             	mov    %eax,(%esp)
 81ac0bf:	e8 24 07 00 00       	call   81ac7e8 <_ZNKSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE3endEv>
 81ac0c4:	83 ec 04             	sub    $0x4,%esp
 81ac0c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ac0ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac0ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ac0d1:	89 04 24             	mov    %eax,(%esp)
 81ac0d4:	e8 3b 07 00 00       	call   81ac814 <_ZN9__gnu_cxxneIPKN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 81ac0d9:	84 c0                	test   %al,%al
 81ac0db:	75 a8                	jne    81ac085 <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0x39>
 81ac0dd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ac0e0:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ac0e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac0e7:	89 04 24             	mov    %eax,(%esp)
 81ac0ea:	e8 f9 06 00 00       	call   81ac7e8 <_ZNKSt6vectorIN4ARAD13PurcahseBonusESaIS1_EE3endEv>
 81ac0ef:	83 ec 04             	sub    $0x4,%esp
 81ac0f2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ac0f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac0f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ac0fc:	89 04 24             	mov    %eax,(%esp)
 81ac0ff:	e8 5c 07 00 00       	call   81ac860 <_ZN9__gnu_cxxeqIPKN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 81ac104:	84 c0                	test   %al,%al
 81ac106:	74 07                	je     81ac10f <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0xc3>
 81ac108:	b8 00 00 00 00       	mov    $0x0,%eax
 81ac10d:	eb 2c                	jmp    81ac13b <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0xef>
 81ac10f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ac112:	89 04 24             	mov    %eax,(%esp)
 81ac115:	e8 72 07 00 00       	call   81ac88c <_ZNK9__gnu_cxx17__normal_iteratorIPKN4ARAD13PurcahseBonusESt6vectorIS2_SaIS2_EEEdeEv>
 81ac11a:	39 45 10             	cmp    %eax,0x10(%ebp)
 81ac11d:	74 17                	je     81ac136 <_ZN4ARAD26CeraShopPurcahseCountBonus14_findBonusItemERKSt6vectorINS_13PurcahseBonusESaIS2_EERS2_t+0xea>
 81ac11f:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 81ac126:	00 
 81ac127:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac12b:	8b 45 10             	mov    0x10(%ebp),%eax
 81ac12e:	89 04 24             	mov    %eax,(%esp)
 81ac131:	e8 6a 17 ed ff       	call   807d8a0 <memcpy@plt>
 81ac136:	b8 01 00 00 00       	mov    $0x1,%eax
 81ac13b:	c9                   	leave
 81ac13c:	c3                   	ret
 81ac13d:	90                   	nop

```

```c
// ARAD::CeraShopPurcahseCountBonus::_findBonusItem @ 0x81ac04c

/* ARAD::CeraShopPurcahseCountBonus::_findBonusItem(std::vector<ARAD::PurcahseBonus,
   std::allocator<ARAD::PurcahseBonus> > const&, ARAD::PurcahseBonus&, unsigned short) */

undefined4 __thiscall
ARAD::CeraShopPurcahseCountBonus::_findBonusItem
          (CeraShopPurcahseCountBonus *this,vector *param_1,PurcahseBonus *param_2,ushort param_3)

{
  bool bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  PurcahseBonus *__src;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::begin();
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
  while( true ) {
    std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
    if (!bVar1) break;
    pbVar2 = (byte *)__gnu_cxx::
                     __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                     ::operator->((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                                   *)&local_18);
    if (*pbVar2 <= param_3) {
      local_1c = local_18;
    }
    __gnu_cxx::
    __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
    ::operator++((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                  *)&local_18);
  }
  std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>::end();
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_1c,local_10);
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    __src = (PurcahseBonus *)
            __gnu_cxx::
            __normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
            ::operator*((__normal_iterator<ARAD::PurcahseBonus_const*,std::vector<ARAD::PurcahseBonus,std::allocator<ARAD::PurcahseBonus>>>
                         *)&local_1c);
    if (param_2 != __src) {
      memcpy(param_2,__src,10);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## _processBonusItem

```asm
// === 081ac13e ARAD::CeraShopPurcahseCountBonus::_processBonusItem  [0x081ac13e-0x81ac6b3] ===
 81ac13e:	55                   	push   %ebp
 81ac13f:	89 e5                	mov    %esp,%ebp
 81ac141:	57                   	push   %edi
 81ac142:	56                   	push   %esi
 81ac143:	53                   	push   %ebx
 81ac144:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 81ac14a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ac14e:	0f 84 54 05 00 00    	je     81ac6a8 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56a>
 81ac154:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac157:	8b 40 04             	mov    0x4(%eax),%eax
 81ac15a:	83 f8 01             	cmp    $0x1,%eax
 81ac15d:	74 0e                	je     81ac16d <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x2f>
 81ac15f:	83 f8 05             	cmp    $0x5,%eax
 81ac162:	0f 84 f0 00 00 00    	je     81ac258 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x11a>
 81ac168:	e9 28 02 00 00       	jmp    81ac395 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x257>
 81ac16d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac170:	89 04 24             	mov    %eax,(%esp)
 81ac173:	e8 06 e1 f2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ac178:	89 04 24             	mov    %eax,(%esp)
 81ac17b:	e8 ae 05 00 00       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 81ac180:	8b 55 14             	mov    0x14(%ebp),%edx
 81ac183:	0f b7 52 08          	movzwl 0x8(%edx),%edx
 81ac187:	0f b7 d2             	movzwl %dx,%edx
 81ac18a:	8d 1c 10             	lea    (%eax,%edx,1),%ebx
 81ac18d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac190:	89 04 24             	mov    %eax,(%esp)
 81ac193:	e8 f6 e0 f2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81ac198:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ac19c:	89 04 24             	mov    %eax,(%esp)
 81ac19f:	e8 96 05 00 00       	call   81ac73a <_ZN10CInventory10SetPayCoinEj>
 81ac1a4:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac1a7:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81ac1ab:	0f b7 d8             	movzwl %ax,%ebx
 81ac1ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac1b1:	89 04 24             	mov    %eax,(%esp)
 81ac1b4:	e8 c5 e0 f2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ac1b9:	89 04 24             	mov    %eax,(%esp)
 81ac1bc:	e8 6d 05 00 00       	call   81ac72e <_ZNK10CInventory10GetPayCoinEv>
 81ac1c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 81ac1c4:	81 c2 00 97 07 00    	add    $0x79700,%edx
 81ac1ca:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81ac1d1:	00 
 81ac1d2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac1d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac1da:	89 14 24             	mov    %edx,(%esp)
 81ac1dd:	e8 12 7a 4d 00       	call   8683bf4 <_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason>
 81ac1e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac1e5:	89 04 24             	mov    %eax,(%esp)
 81ac1e8:	e8 eb 42 4a 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 81ac1ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac1f0:	89 04 24             	mov    %eax,(%esp)
 81ac1f3:	e8 10 a6 4a 00       	call   8656808 <_ZN5CUser8SendCoinEv>
 81ac1f8:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac1fb:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81ac1ff:	0f b7 f0             	movzwl %ax,%esi
 81ac202:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac205:	89 04 24             	mov    %eax,(%esp)
 81ac208:	e8 61 e1 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ac20d:	89 c3                	mov    %eax,%ebx
 81ac20f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac216:	00 
 81ac217:	c7 44 24 08 45 00 00 	movl   $0x45,0x8(%esp)
 81ac21e:	00 
 81ac21f:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac226:	08 
 81ac227:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81ac22d:	89 04 24             	mov    %eax,(%esp)
 81ac230:	e8 e3 34 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac235:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ac239:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac23d:	c7 44 24 04 00 1d bb 	movl   $0x8bb1d00,0x4(%esp)
 81ac244:	08 
 81ac245:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 81ac24b:	89 04 24             	mov    %eax,(%esp)
 81ac24e:	e8 35 35 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac253:	e9 51 04 00 00       	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac258:	e8 3e ff f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ac25d:	8b 55 10             	mov    0x10(%ebp),%edx
 81ac260:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac264:	89 04 24             	mov    %eax,(%esp)
 81ac267:	e8 78 3b 1b 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 81ac26c:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81ac26f:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 81ac273:	75 42                	jne    81ac2b7 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x179>
 81ac275:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac27c:	00 
 81ac27d:	c7 44 24 08 5f 00 00 	movl   $0x5f,0x8(%esp)
 81ac284:	00 
 81ac285:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac28c:	08 
 81ac28d:	8d 45 80             	lea    -0x80(%ebp),%eax
 81ac290:	89 04 24             	mov    %eax,(%esp)
 81ac293:	e8 80 34 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac298:	8b 45 10             	mov    0x10(%ebp),%eax
 81ac29b:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ac29f:	c7 44 24 04 2c 1d bb 	movl   $0x8bb1d2c,0x4(%esp)
 81ac2a6:	08 
 81ac2a7:	8d 45 80             	lea    -0x80(%ebp),%eax
 81ac2aa:	89 04 24             	mov    %eax,(%esp)
 81ac2ad:	e8 d6 34 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac2b2:	e9 f2 03 00 00       	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac2b7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81ac2ba:	89 04 24             	mov    %eax,(%esp)
 81ac2bd:	e8 62 dd fc ff       	call   817a024 <_ZNK14CCeraShopGoods12GetCeraPriceEv>
 81ac2c2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81ac2c5:	db 45 d4             	fildl  -0x2c(%ebp)
 81ac2c8:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac2cb:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81ac2cf:	0f b7 c0             	movzwl %ax,%eax
 81ac2d2:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 81ac2d8:	db 85 24 ff ff ff    	fildl  -0xdc(%ebp)
 81ac2de:	d9 05 a4 2a bb 08    	flds   0x8bb2aa4
 81ac2e4:	de f9                	fdivrp %st,%st(1)
 81ac2e6:	de c9                	fmulp  %st,%st(1)
 81ac2e8:	dd 1c 24             	fstpl  (%esp)
 81ac2eb:	e8 80 18 ed ff       	call   807db70 <floor@plt>
 81ac2f0:	d9 bd 22 ff ff ff    	fnstcw -0xde(%ebp)
 81ac2f6:	0f b7 85 22 ff ff ff 	movzwl -0xde(%ebp),%eax
 81ac2fd:	b4 0c                	mov    $0xc,%ah
 81ac2ff:	66 89 85 20 ff ff ff 	mov    %ax,-0xe0(%ebp)
 81ac306:	d9 ad 20 ff ff ff    	fldcw  -0xe0(%ebp)
 81ac30c:	db 5d d8             	fistpl -0x28(%ebp)
 81ac30f:	d9 ad 22 ff ff ff    	fldcw  -0xde(%ebp)
 81ac315:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 81ac31c:	00 
 81ac31d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ac320:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac324:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac327:	89 04 24             	mov    %eax,(%esp)
 81ac32a:	e8 25 46 4a 00       	call   8650954 <_ZN5CUser10AddMileageEi14eCoinAddReason>
 81ac32f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ac336:	00 
 81ac337:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac33a:	89 04 24             	mov    %eax,(%esp)
 81ac33d:	e8 e8 44 4a 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 81ac342:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac345:	89 04 24             	mov    %eax,(%esp)
 81ac348:	e8 21 e0 f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ac34d:	89 c3                	mov    %eax,%ebx
 81ac34f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac356:	00 
 81ac357:	c7 44 24 08 67 00 00 	movl   $0x67,0x8(%esp)
 81ac35e:	00 
 81ac35f:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac366:	08 
 81ac367:	8d 45 90             	lea    -0x70(%ebp),%eax
 81ac36a:	89 04 24             	mov    %eax,(%esp)
 81ac36d:	e8 a6 33 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac372:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81ac375:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ac379:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac37d:	c7 44 24 04 58 1d bb 	movl   $0x8bb1d58,0x4(%esp)
 81ac384:	08 
 81ac385:	8d 45 90             	lea    -0x70(%ebp),%eax
 81ac388:	89 04 24             	mov    %eax,(%esp)
 81ac38b:	e8 f8 33 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac390:	e9 14 03 00 00       	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac395:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac398:	8b 40 04             	mov    0x4(%eax),%eax
 81ac39b:	89 c3                	mov    %eax,%ebx
 81ac39d:	e8 f9 fd f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ac3a2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ac3a6:	89 04 24             	mov    %eax,(%esp)
 81ac3a9:	e8 84 36 1b 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81ac3ae:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81ac3b1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81ac3b5:	75 45                	jne    81ac3fc <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x2be>
 81ac3b7:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac3ba:	8b 58 04             	mov    0x4(%eax),%ebx
 81ac3bd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac3c4:	00 
 81ac3c5:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 81ac3cc:	00 
 81ac3cd:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac3d4:	08 
 81ac3d5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81ac3d8:	89 04 24             	mov    %eax,(%esp)
 81ac3db:	e8 38 33 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac3e0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac3e4:	c7 44 24 04 94 1d bb 	movl   $0x8bb1d94,0x4(%esp)
 81ac3eb:	08 
 81ac3ec:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81ac3ef:	89 04 24             	mov    %eax,(%esp)
 81ac3f2:	e8 91 33 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac3f7:	e9 ad 02 00 00       	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac3fc:	8d 85 33 ff ff ff    	lea    -0xcd(%ebp),%eax
 81ac402:	89 04 24             	mov    %eax,(%esp)
 81ac405:	e8 4a f4 f1 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81ac40a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac40d:	8b 00                	mov    (%eax),%eax
 81ac40f:	83 c0 08             	add    $0x8,%eax
 81ac412:	8b 10                	mov    (%eax),%edx
 81ac414:	8d 85 33 ff ff ff    	lea    -0xcd(%ebp),%eax
 81ac41a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac41e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac421:	89 04 24             	mov    %eax,(%esp)
 81ac424:	ff d2                	call   *%edx
 81ac426:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac429:	8b 40 04             	mov    0x4(%eax),%eax
 81ac42c:	89 85 35 ff ff ff    	mov    %eax,-0xcb(%ebp)
 81ac432:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac435:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81ac439:	0f b7 c0             	movzwl %ax,%eax
 81ac43c:	89 85 3a ff ff ff    	mov    %eax,-0xc6(%ebp)
 81ac442:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac445:	8b 00                	mov    (%eax),%eax
 81ac447:	83 c0 14             	add    $0x14,%eax
 81ac44a:	8b 10                	mov    (%eax),%edx
 81ac44c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac44f:	89 04 24             	mov    %eax,(%esp)
 81ac452:	ff d2                	call   *%edx
 81ac454:	84 c0                	test   %al,%al
 81ac456:	75 16                	jne    81ac46e <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x330>
 81ac458:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac45b:	8b 00                	mov    (%eax),%eax
 81ac45d:	83 c0 10             	add    $0x10,%eax
 81ac460:	8b 10                	mov    (%eax),%edx
 81ac462:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ac465:	89 04 24             	mov    %eax,(%esp)
 81ac468:	ff d2                	call   *%edx
 81ac46a:	84 c0                	test   %al,%al
 81ac46c:	74 07                	je     81ac475 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x337>
 81ac46e:	b8 01 00 00 00       	mov    $0x1,%eax
 81ac473:	eb 05                	jmp    81ac47a <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x33c>
 81ac475:	b8 00 00 00 00       	mov    $0x0,%eax
 81ac47a:	84 c0                	test   %al,%al
 81ac47c:	74 56                	je     81ac4d4 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x396>
 81ac47e:	8b 45 14             	mov    0x14(%ebp),%eax
 81ac481:	8b 70 04             	mov    0x4(%eax),%esi
 81ac484:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac487:	89 04 24             	mov    %eax,(%esp)
 81ac48a:	e8 df de f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ac48f:	89 c3                	mov    %eax,%ebx
 81ac491:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac498:	00 
 81ac499:	c7 44 24 08 7c 00 00 	movl   $0x7c,0x8(%esp)
 81ac4a0:	00 
 81ac4a1:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac4a8:	08 
 81ac4a9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81ac4ac:	89 04 24             	mov    %eax,(%esp)
 81ac4af:	e8 64 32 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac4b4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ac4b8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac4bc:	c7 44 24 04 bc 1d bb 	movl   $0x8bb1dbc,0x4(%esp)
 81ac4c3:	08 
 81ac4c4:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81ac4c7:	89 04 24             	mov    %eax,(%esp)
 81ac4ca:	e8 b9 32 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac4cf:	e9 d5 01 00 00       	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac4d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac4d7:	89 04 24             	mov    %eax,(%esp)
 81ac4da:	e8 af dd f2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81ac4df:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 81ac4e6:	00 
 81ac4e7:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 81ac4ee:	00 
 81ac4ef:	c7 44 24 44 1f 00 00 	movl   $0x1f,0x44(%esp)
 81ac4f6:	00 
 81ac4f7:	8b 95 33 ff ff ff    	mov    -0xcd(%ebp),%edx
 81ac4fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ac501:	8b 95 37 ff ff ff    	mov    -0xc9(%ebp),%edx
 81ac507:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ac50b:	8b 95 3b ff ff ff    	mov    -0xc5(%ebp),%edx
 81ac511:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ac515:	8b 95 3f ff ff ff    	mov    -0xc1(%ebp),%edx
 81ac51b:	89 54 24 10          	mov    %edx,0x10(%esp)
 81ac51f:	8b 95 43 ff ff ff    	mov    -0xbd(%ebp),%edx
 81ac525:	89 54 24 14          	mov    %edx,0x14(%esp)
 81ac529:	8b 95 47 ff ff ff    	mov    -0xb9(%ebp),%edx
 81ac52f:	89 54 24 18          	mov    %edx,0x18(%esp)
 81ac533:	8b 95 4b ff ff ff    	mov    -0xb5(%ebp),%edx
 81ac539:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81ac53d:	8b 95 4f ff ff ff    	mov    -0xb1(%ebp),%edx
 81ac543:	89 54 24 20          	mov    %edx,0x20(%esp)
 81ac547:	8b 95 53 ff ff ff    	mov    -0xad(%ebp),%edx
 81ac54d:	89 54 24 24          	mov    %edx,0x24(%esp)
 81ac551:	8b 95 57 ff ff ff    	mov    -0xa9(%ebp),%edx
 81ac557:	89 54 24 28          	mov    %edx,0x28(%esp)
 81ac55b:	8b 95 5b ff ff ff    	mov    -0xa5(%ebp),%edx
 81ac561:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 81ac565:	8b 95 5f ff ff ff    	mov    -0xa1(%ebp),%edx
 81ac56b:	89 54 24 30          	mov    %edx,0x30(%esp)
 81ac56f:	8b 95 63 ff ff ff    	mov    -0x9d(%ebp),%edx
 81ac575:	89 54 24 34          	mov    %edx,0x34(%esp)
 81ac579:	8b 95 67 ff ff ff    	mov    -0x99(%ebp),%edx
 81ac57f:	89 54 24 38          	mov    %edx,0x38(%esp)
 81ac583:	8b 95 6b ff ff ff    	mov    -0x95(%ebp),%edx
 81ac589:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81ac58d:	0f b6 95 6f ff ff ff 	movzbl -0x91(%ebp),%edx
 81ac594:	88 54 24 40          	mov    %dl,0x40(%esp)
 81ac598:	89 04 24             	mov    %eax,(%esp)
 81ac59b:	e8 e6 67 35 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81ac5a0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ac5a3:	83 7d e0 ff          	cmpl   $0xffffffff,-0x20(%ebp)
 81ac5a7:	74 2f                	je     81ac5d8 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x49a>
 81ac5a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ac5ac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ac5b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ac5b7:	00 
 81ac5b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ac5bf:	00 
 81ac5c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac5c3:	89 04 24             	mov    %eax,(%esp)
 81ac5c6:	e8 8f 00 4d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81ac5cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac5ce:	89 04 24             	mov    %eax,(%esp)
 81ac5d1:	e8 7c 38 4a 00       	call   864fe52 <_ZN5CUser13SaveInventoryEv>
 81ac5d6:	eb 73                	jmp    81ac64b <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x50d>
 81ac5d8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac5df:	00 
 81ac5e0:	c7 44 24 08 f1 1d bb 	movl   $0x8bb1df1,0x8(%esp)
 81ac5e7:	08 
 81ac5e8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81ac5ef:	00 
 81ac5f0:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81ac5f7:	e8 02 92 8f 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81ac5fc:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ac5ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ac602:	89 04 24             	mov    %eax,(%esp)
 81ac605:	e8 a6 1d ed ff       	call   807e3b0 <strlen@plt>
 81ac60a:	89 c3                	mov    %eax,%ebx
 81ac60c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac60f:	89 04 24             	mov    %eax,(%esp)
 81ac612:	e8 37 f6 f1 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81ac617:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81ac61b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81ac61e:	89 54 24 14          	mov    %edx,0x14(%esp)
 81ac622:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81ac629:	00 
 81ac62a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81ac62e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ac635:	00 
 81ac636:	8d 85 33 ff ff ff    	lea    -0xcd(%ebp),%eax
 81ac63c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ac640:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac643:	89 04 24             	mov    %eax,(%esp)
 81ac646:	e8 7d 94 3a 00       	call   8555ac8 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserRK10Inven_ItemjjbPKci>
 81ac64b:	8b bd 3a ff ff ff    	mov    -0xc6(%ebp),%edi
 81ac651:	8b b5 35 ff ff ff    	mov    -0xcb(%ebp),%esi
 81ac657:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ac65a:	89 04 24             	mov    %eax,(%esp)
 81ac65d:	e8 0c dd f2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ac662:	89 c3                	mov    %eax,%ebx
 81ac664:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ac66b:	00 
 81ac66c:	c7 44 24 08 96 00 00 	movl   $0x96,0x8(%esp)
 81ac673:	00 
 81ac674:	c7 44 24 04 40 2a bb 	movl   $0x8bb2a40,0x4(%esp)
 81ac67b:	08 
 81ac67c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ac67f:	89 04 24             	mov    %eax,(%esp)
 81ac682:	e8 91 30 3a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ac687:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81ac68b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ac68f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ac693:	c7 44 24 04 08 1e bb 	movl   $0x8bb1e08,0x4(%esp)
 81ac69a:	08 
 81ac69b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ac69e:	89 04 24             	mov    %eax,(%esp)
 81ac6a1:	e8 e2 30 3a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ac6a6:	eb 01                	jmp    81ac6a9 <_ZN4ARAD26CeraShopPurcahseCountBonus17_processBonusItemEP5CUseriRKNS_13PurcahseBonusE+0x56b>
 81ac6a8:	90                   	nop
 81ac6a9:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 81ac6af:	5b                   	pop    %ebx
 81ac6b0:	5e                   	pop    %esi
 81ac6b1:	5f                   	pop    %edi
 81ac6b2:	5d                   	pop    %ebp
 81ac6b3:	c3                   	ret

```

```c
// ARAD::CeraShopPurcahseCountBonus::_processBonusItem @ 0x81ac13e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, ARAD::PurcahseBonus const&) */

void __thiscall
ARAD::CeraShopPurcahseCountBonus::_processBonusItem
          (CeraShopPurcahseCountBonus *this,CUser *param_1,int param_2,PurcahseBonus *param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  bool bVar3;
  char cVar4;
  CInventory *pCVar5;
  int iVar6;
  CDataManager *this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  size_t sVar9;
  uint uVar10;
  double dVar11;
  undefined2 local_d1;
  undefined2 uStack_cf;
  undefined2 uStack_cd;
  undefined1 uStack_cb;
  uint uStack_ca;
  undefined1 uStack_c6;
  undefined4 local_c5;
  undefined4 local_c1;
  undefined4 local_bd;
  undefined4 local_b9;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined1 local_95;
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  CCeraShopGoods *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  char *local_20;
  
  if (param_1 == (CUser *)0x0) {
    return;
  }
  if (*(int *)(param_3 + 4) == 1) {
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::GetPayCoin(pCVar5);
    uVar1 = *(ushort *)(param_3 + 8);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::SetPayCoin(pCVar5,iVar6 + (uint)uVar1);
    uVar2 = *(undefined2 *)(param_3 + 8);
    pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    uVar8 = CInventory::GetPayCoin(pCVar5);
    cUserHistoryLog::PayCoinAdd((cUserHistoryLog *)(param_1 + 0x79700),uVar8,uVar2,5);
    CUser::SaveMoneyCoin(param_1);
    CUser::SendCoin(param_1);
    uVar1 = *(ushort *)(param_3 + 8);
    uVar8 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_94,
                       "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                       ,0x45,0);
    cMyTrace::operator()(local_94,"[PURCAHSE BONUS] add coin (mid:%u, coin:%d)",uVar8,(uint)uVar1);
    return;
  }
  if (*(int *)(param_3 + 4) == 5) {
    iVar6 = G_CDataManager();
    local_34 = (CCeraShopGoods *)CDataManager::FindGoods(iVar6);
    if (local_34 == (CCeraShopGoods *)0x0) {
      cMyTrace::cMyTrace(local_84,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x5f,0);
      cMyTrace::operator()(local_84,"[PURCAHSE BONUS] goods is null (goods:%d)",param_2);
      return;
    }
    local_30 = CCeraShopGoods::GetCeraPrice(local_34);
    dVar11 = floor((double)(((float)*(ushort *)(param_3 + 8) / _DAT_08bb2aa4) * (float)local_30));
    local_2c = (int)ROUND(dVar11);
    CUser::AddMileage(param_1,local_2c,5);
    CUser::SendCashData(param_1,false);
    uVar8 = CUser::get_acc_id(param_1);
    cMyTrace::cMyTrace(local_74,
                       "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                       ,0x67,0);
    cMyTrace::operator()
              (local_74,"[PURCAHSE BONUS] add mileage coupon (mid:%u, mileage:%d)",uVar8,local_2c);
    return;
  }
  iVar6 = *(int *)(param_3 + 4);
  this_00 = (CDataManager *)G_CDataManager();
  local_28 = (int *)CDataManager::find_item(this_00,iVar6);
  if (local_28 != (int *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_d1);
    (**(code **)(*local_28 + 8))(local_28);
    uStack_cf = (undefined2)*(undefined4 *)(param_3 + 4);
    uStack_cd = (undefined2)((uint)*(undefined4 *)(param_3 + 4) >> 0x10);
    uStack_ca = (uint)*(ushort *)(param_3 + 8);
    cVar4 = (**(code **)(*local_28 + 0x14))(local_28);
    if ((cVar4 == '\0') && (cVar4 = (**(code **)(*local_28 + 0x10))(local_28), cVar4 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = *(undefined4 *)(param_3 + 4);
      uVar7 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_54,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x7c,0);
      cMyTrace::operator()
                (local_54,"[PURCAHSE BONUS] invalid item type (mid:%u, item:%u)",uVar7,uVar8);
    }
    else {
      uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_24 = CInventory::insertItemIntoInventory
                           (uVar8,CONCAT22(uStack_cf,local_d1),
                            CONCAT13((undefined1)uStack_ca,CONCAT12(uStack_cb,uStack_cd)),
                            CONCAT13(uStack_c6,uStack_ca._1_3_),local_c5,local_c1,local_bd,local_b9,
                            local_b5,local_b1,local_ad,local_a9,local_a5,local_a1,local_9d,local_99,
                            local_95,0x1f,1,0);
      if (local_24 == -1) {
        local_20 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_104",(bool *)0x0);
        sVar9 = strlen(local_20);
        uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewMail
                  (param_1,(Inven_Item *)&local_d1,0,uVar10,true,local_20,sVar9);
      }
      else {
        CUser::SendUpdateItemList(param_1,1,0,local_24);
        CUser::SaveInventory(param_1);
      }
      uVar10 = uStack_ca;
      uVar8 = CONCAT22(uStack_cd,uStack_cf);
      uVar7 = CUser::get_acc_id(param_1);
      cMyTrace::cMyTrace(local_44,
                         "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                         ,0x96,0);
      cMyTrace::operator()
                (local_44,"[PURCAHSE BONUS] add item. (mid:%u, item:%u, count:%d)",uVar7,uVar8,
                 uVar10);
    }
    return;
  }
  uVar8 = *(undefined4 *)(param_3 + 4);
  cMyTrace::cMyTrace(local_64,
                     "void ARAD::CeraShopPurcahseCountBonus::_processBonusItem(CUser*, int, const ARAD::PurcahseBonus&)"
                     ,0x71,0);
  cMyTrace::operator()(local_64,"[PURCAHSE BONUS] item is null (item:%u)",uVar8);
  return;
}

```


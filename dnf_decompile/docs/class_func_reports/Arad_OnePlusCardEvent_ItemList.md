# Arad_OnePlusCardEvent_ItemList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## find_item

```asm
// === 081a398e Arad_OnePlusCardEvent_ItemList::find_item  [0x081a398e-0x81a3a6d] ===
 81a398e:	55                   	push   %ebp
 81a398f:	89 e5                	mov    %esp,%ebp
 81a3991:	83 ec 48             	sub    $0x48,%esp
 81a3994:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3997:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81a399b:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 81a399f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81a39a6:	00 
 81a39a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a39ab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81a39ae:	89 04 24             	mov    %eax,(%esp)
 81a39b1:	e8 32 08 00 00       	call   81a41e8 <_ZN30Arad_OnePlusCardEvent_ItemList4DataC1Etm>
 81a39b6:	8b 45 08             	mov    0x8(%ebp),%eax
 81a39b9:	8d 50 04             	lea    0x4(%eax),%edx
 81a39bc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a39bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a39c3:	89 04 24             	mov    %eax,(%esp)
 81a39c6:	e8 61 10 00 00       	call   81a4a2c <_ZNSt6vectorIN30Arad_OnePlusCardEvent_ItemList4DataESaIS1_EE3endEv>
 81a39cb:	83 ec 04             	sub    $0x4,%esp
 81a39ce:	8b 45 08             	mov    0x8(%ebp),%eax
 81a39d1:	8d 50 04             	lea    0x4(%eax),%edx
 81a39d4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a39d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a39db:	89 04 24             	mov    %eax,(%esp)
 81a39de:	e8 25 10 00 00       	call   81a4a08 <_ZNSt6vectorIN30Arad_OnePlusCardEvent_ItemList4DataESaIS1_EE5beginEv>
 81a39e3:	83 ec 04             	sub    $0x4,%esp
 81a39e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a39e9:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81a39ec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a39f0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81a39f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a39f7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a39fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a39fe:	89 04 24             	mov    %eax,(%esp)
 81a3a01:	e8 4c 10 00 00       	call   81a4a52 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPN30Arad_OnePlusCardEvent_ItemList4DataESt6vectorIS3_SaIS3_EEEES3_ET_S9_S9_RKT0_>
 81a3a06:	83 ec 04             	sub    $0x4,%esp
 81a3a09:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3a0c:	8d 50 04             	lea    0x4(%eax),%edx
 81a3a0f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3a12:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3a16:	89 04 24             	mov    %eax,(%esp)
 81a3a19:	e8 0e 10 00 00       	call   81a4a2c <_ZNSt6vectorIN30Arad_OnePlusCardEvent_ItemList4DataESaIS1_EE3endEv>
 81a3a1e:	83 ec 04             	sub    $0x4,%esp
 81a3a21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3a24:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3a28:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a3a2b:	89 04 24             	mov    %eax,(%esp)
 81a3a2e:	e8 73 10 00 00       	call   81a4aa6 <_ZN9__gnu_cxxeqIPN30Arad_OnePlusCardEvent_ItemList4DataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81a3a33:	84 c0                	test   %al,%al
 81a3a35:	74 07                	je     81a3a3e <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE+0xb0>
 81a3a37:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3a3c:	eb 2d                	jmp    81a3a6b <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE+0xdd>
 81a3a3e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a3a41:	89 04 24             	mov    %eax,(%esp)
 81a3a44:	e8 89 10 00 00       	call   81a4ad2 <_ZNK9__gnu_cxx17__normal_iteratorIPN30Arad_OnePlusCardEvent_ItemList4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a3a49:	0f b7 10             	movzwl (%eax),%edx
 81a3a4c:	8b 45 10             	mov    0x10(%ebp),%eax
 81a3a4f:	66 89 10             	mov    %dx,(%eax)
 81a3a52:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a3a55:	89 04 24             	mov    %eax,(%esp)
 81a3a58:	e8 75 10 00 00       	call   81a4ad2 <_ZNK9__gnu_cxx17__normal_iteratorIPN30Arad_OnePlusCardEvent_ItemList4DataESt6vectorIS2_SaIS2_EEEptEv>
 81a3a5d:	8b 50 04             	mov    0x4(%eax),%edx
 81a3a60:	8b 45 10             	mov    0x10(%ebp),%eax
 81a3a63:	89 50 04             	mov    %edx,0x4(%eax)
 81a3a66:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3a6b:	c9                   	leave
 81a3a6c:	c3                   	ret
 81a3a6d:	90                   	nop

```

```c
// Arad_OnePlusCardEvent_ItemList::find_item @ 0x81a398e

/* Arad_OnePlusCardEvent_ItemList::find_item(unsigned short, Arad_OnePlusCardEvent_ItemList::Data&)
    */

bool __thiscall
Arad_OnePlusCardEvent_ItemList::find_item
          (Arad_OnePlusCardEvent_ItemList *this,ushort param_1,Data *param_2)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
  local_24 [4];
  Data local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  Data::Data(local_20,param_1,0);
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::end();
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::begin();
  std::
  find<__gnu_cxx::__normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>,Arad_OnePlusCardEvent_ItemList::Data>
            (local_24,local_14,local_18,local_20);
  std::
  vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
  ::end();
  bVar1 = __gnu_cxx::operator==(local_24,local_10);
  if (!bVar1) {
    puVar2 = (undefined2 *)
             __gnu_cxx::
             __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
             ::operator->(local_24);
    *(undefined2 *)param_2 = *puVar2;
    iVar3 = __gnu_cxx::
            __normal_iterator<Arad_OnePlusCardEvent_ItemList::Data*,std::vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>>
            ::operator->(local_24);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar3 + 4);
  }
  return !bVar1;
}

```

---

## find_item_081a3a6e

```asm
// === 081a3a6e Arad_OnePlusCardEvent_ItemList::find_item  [0x081a3a6e-0x81a3ab1] ===
 81a3a6e:	55                   	push   %ebp
 81a3a6f:	89 e5                	mov    %esp,%ebp
 81a3a71:	83 ec 38             	sub    $0x38,%esp
 81a3a74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a3a77:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81a3a7b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81a3a82:	00 
 81a3a83:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81a3a8a:	00 
 81a3a8b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a3a8e:	89 04 24             	mov    %eax,(%esp)
 81a3a91:	e8 52 07 00 00       	call   81a41e8 <_ZN30Arad_OnePlusCardEvent_ItemList4DataC1Etm>
 81a3a96:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81a3a9a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81a3a9d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3aa5:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3aa8:	89 04 24             	mov    %eax,(%esp)
 81a3aab:	e8 de fe ff ff       	call   81a398e <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEtRNS_4DataE>
 81a3ab0:	c9                   	leave
 81a3ab1:	c3                   	ret

```

```c
// Arad_OnePlusCardEvent_ItemList::find_item @ 0x81a3a6e

/* Arad_OnePlusCardEvent_ItemList::find_item(unsigned short) */

void __thiscall
Arad_OnePlusCardEvent_ItemList::find_item(Arad_OnePlusCardEvent_ItemList *this,ushort param_1)

{
  Data local_14 [16];
  
  Data::Data(local_14,0,0);
  find_item(this,param_1,local_14);
  return;
}

```

---

## is_limited_map

```asm
// === 081a3ab2 Arad_OnePlusCardEvent_ItemList::is_limited_map  [0x081a3ab2-0x81a3b47] ===
 81a3ab2:	55                   	push   %ebp
 81a3ab3:	89 e5                	mov    %esp,%ebp
 81a3ab5:	83 ec 28             	sub    $0x28,%esp
 81a3ab8:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3abb:	8d 50 10             	lea    0x10(%eax),%edx
 81a3abe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81a3ac1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3ac5:	89 04 24             	mov    %eax,(%esp)
 81a3ac8:	e8 bd ef f3 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 81a3acd:	83 ec 04             	sub    $0x4,%esp
 81a3ad0:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3ad3:	8d 50 10             	lea    0x10(%eax),%edx
 81a3ad6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81a3ad9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3add:	89 04 24             	mov    %eax,(%esp)
 81a3ae0:	e8 69 fd f3 ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 81a3ae5:	83 ec 04             	sub    $0x4,%esp
 81a3ae8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a3aeb:	8d 55 0c             	lea    0xc(%ebp),%edx
 81a3aee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81a3af2:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81a3af5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3af9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a3afc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3b00:	89 04 24             	mov    %eax,(%esp)
 81a3b03:	e8 63 eb fa ff       	call   815266b <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEEjET_S7_S7_RKT0_>
 81a3b08:	83 ec 04             	sub    $0x4,%esp
 81a3b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3b0e:	8d 50 10             	lea    0x10(%eax),%edx
 81a3b11:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3b14:	89 54 24 04          	mov    %edx,0x4(%esp)
 81a3b18:	89 04 24             	mov    %eax,(%esp)
 81a3b1b:	e8 6a ef f3 ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 81a3b20:	83 ec 04             	sub    $0x4,%esp
 81a3b23:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81a3b26:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3b2a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81a3b2d:	89 04 24             	mov    %eax,(%esp)
 81a3b30:	e8 a7 0f 00 00       	call   81a4adc <_ZN9__gnu_cxxeqIPjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 81a3b35:	84 c0                	test   %al,%al
 81a3b37:	74 07                	je     81a3b40 <_ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj+0x8e>
 81a3b39:	b8 00 00 00 00       	mov    $0x0,%eax
 81a3b3e:	eb 05                	jmp    81a3b45 <_ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj+0x93>
 81a3b40:	b8 01 00 00 00       	mov    $0x1,%eax
 81a3b45:	c9                   	leave
 81a3b46:	c3                   	ret
 81a3b47:	90                   	nop

```

```c
// Arad_OnePlusCardEvent_ItemList::is_limited_map @ 0x81a3ab2

/* Arad_OnePlusCardEvent_ItemList::is_limited_map(unsigned int) */

bool Arad_OnePlusCardEvent_ItemList::is_limited_map(uint param_1)

{
  bool bVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,unsigned_int>
            (local_1c,local_14,local_18,&stack0x00000008);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  bVar1 = __gnu_cxx::operator==(local_1c,local_10);
  return !bVar1;
}

```

---

## parsing

```asm
// === 081a36fc Arad_OnePlusCardEvent_ItemList::parsing  [0x081a36fc-0x81a398d] ===
 81a36fc:	55                   	push   %ebp
 81a36fd:	89 e5                	mov    %esp,%ebp
 81a36ff:	56                   	push   %esi
 81a3700:	53                   	push   %ebx
 81a3701:	81 ec 90 00 00 00    	sub    $0x90,%esp
 81a3707:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a370a:	89 04 24             	mov    %eax,(%esp)
 81a370d:	e8 62 7d fd ff       	call   817b474 <_ZN11Arad_ScriptC1Ev>
 81a3712:	c7 44 24 08 b4 c8 ba 	movl   $0x8bac8b4,0x8(%esp)
 81a3719:	08 
 81a371a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81a371d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3721:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3724:	89 04 24             	mov    %eax,(%esp)
 81a3727:	e8 24 82 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a372c:	83 f0 01             	xor    $0x1,%eax
 81a372f:	84 c0                	test   %al,%al
 81a3731:	74 0a                	je     81a373d <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x41>
 81a3733:	bb db 01 00 00       	mov    $0x1db,%ebx
 81a3738:	e9 39 02 00 00       	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a373d:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3740:	89 04 24             	mov    %eax,(%esp)
 81a3743:	e8 34 0b 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3748:	85 c0                	test   %eax,%eax
 81a374a:	0f 94 c0             	sete   %al
 81a374d:	84 c0                	test   %al,%al
 81a374f:	74 0a                	je     81a375b <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x5f>
 81a3751:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3756:	e9 1b 02 00 00       	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a375b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81a3762:	e9 d7 00 00 00       	jmp    81a383e <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x142>
 81a3767:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 81a376d:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 81a3774:	c7 44 24 08 f6 c8 ba 	movl   $0x8bac8f6,0x8(%esp)
 81a377b:	08 
 81a377c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81a377f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3783:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3786:	89 04 24             	mov    %eax,(%esp)
 81a3789:	e8 f2 8f fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a378e:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 81a3792:	c7 44 24 08 fd c8 ba 	movl   $0x8bac8fd,0x8(%esp)
 81a3799:	08 
 81a379a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81a379d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a37a1:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a37a4:	89 04 24             	mov    %eax,(%esp)
 81a37a7:	e8 d4 8f fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a37ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81a37af:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81a37b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a37b7:	8b 45 08             	mov    0x8(%ebp),%eax
 81a37ba:	89 04 24             	mov    %eax,(%esp)
 81a37bd:	e8 ac 02 00 00       	call   81a3a6e <_ZN30Arad_OnePlusCardEvent_ItemList9find_itemEt>
 81a37c2:	84 c0                	test   %al,%al
 81a37c4:	74 45                	je     81a380b <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x10f>
 81a37c6:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81a37ca:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a37cd:	89 54 24 18          	mov    %edx,0x18(%esp)
 81a37d1:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a37d5:	c7 44 24 10 08 c9 ba 	movl   $0x8bac908,0x10(%esp)
 81a37dc:	08 
 81a37dd:	c7 44 24 0c ea 01 00 	movl   $0x1ea,0xc(%esp)
 81a37e4:	00 
 81a37e5:	c7 44 24 08 60 d6 ba 	movl   $0x8bad660,0x8(%esp)
 81a37ec:	08 
 81a37ed:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a37f4:	08 
 81a37f5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a37fc:	e8 09 04 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a3801:	bb eb 01 00 00       	mov    $0x1eb,%ebx
 81a3806:	e9 6b 01 00 00       	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a380b:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81a380f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81a3812:	89 54 24 08          	mov    %edx,0x8(%esp)
 81a3816:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a381a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a381d:	89 04 24             	mov    %eax,(%esp)
 81a3820:	e8 c3 09 00 00       	call   81a41e8 <_ZN30Arad_OnePlusCardEvent_ItemList4DataC1Etm>
 81a3825:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3828:	8d 50 04             	lea    0x4(%eax),%edx
 81a382b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81a382e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a3832:	89 14 24             	mov    %edx,(%esp)
 81a3835:	e8 ac 11 00 00       	call   81a49e6 <_ZNSt6vectorIN30Arad_OnePlusCardEvent_ItemList4DataESaIS1_EE9push_backEOS1_>
 81a383a:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 81a383e:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3841:	89 04 24             	mov    %eax,(%esp)
 81a3844:	e8 33 0a 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3849:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 81a384c:	0f 9f c0             	setg   %al
 81a384f:	84 c0                	test   %al,%al
 81a3851:	0f 85 10 ff ff ff    	jne    81a3767 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x6b>
 81a3857:	c7 04 24 20 50 49 09 	movl   $0x9495020,(%esp)
 81a385e:	e8 0d b1 92 00       	call   8ace970 <_ZN13DNFLexWrapper20getInputStreamBufferEv>
 81a3863:	c7 44 24 08 47 c9 ba 	movl   $0x8bac947,0x8(%esp)
 81a386a:	08 
 81a386b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a386f:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3872:	89 04 24             	mov    %eax,(%esp)
 81a3875:	e8 d6 80 fd ff       	call   817b950 <_ZN11Arad_Script4LoadEPKcS1_>
 81a387a:	83 f0 01             	xor    $0x1,%eax
 81a387d:	84 c0                	test   %al,%al
 81a387f:	74 0a                	je     81a388b <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x18f>
 81a3881:	bb f3 01 00 00       	mov    $0x1f3,%ebx
 81a3886:	e9 eb 00 00 00       	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a388b:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a388e:	89 04 24             	mov    %eax,(%esp)
 81a3891:	e8 e6 09 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3896:	85 c0                	test   %eax,%eax
 81a3898:	0f 94 c0             	sete   %al
 81a389b:	84 c0                	test   %al,%al
 81a389d:	74 0a                	je     81a38a9 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x1ad>
 81a389f:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a38a4:	e9 cd 00 00 00       	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a38a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81a38b0:	e9 86 00 00 00       	jmp    81a393b <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x23f>
 81a38b5:	c7 44 24 08 53 c9 ba 	movl   $0x8bac953,0x8(%esp)
 81a38bc:	08 
 81a38bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81a38c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a38c4:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a38c7:	89 04 24             	mov    %eax,(%esp)
 81a38ca:	e8 b1 8e fd ff       	call   817c780 <_ZN11Arad_Script6GetIntEiPc>
 81a38cf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81a38d2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81a38d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a38d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81a38dc:	89 04 24             	mov    %eax,(%esp)
 81a38df:	e8 ce 01 00 00       	call   81a3ab2 <_ZN30Arad_OnePlusCardEvent_ItemList14is_limited_mapEj>
 81a38e4:	84 c0                	test   %al,%al
 81a38e6:	74 3a                	je     81a3922 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x226>
 81a38e8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81a38eb:	89 44 24 14          	mov    %eax,0x14(%esp)
 81a38ef:	c7 44 24 10 5c c9 ba 	movl   $0x8bac95c,0x10(%esp)
 81a38f6:	08 
 81a38f7:	c7 44 24 0c fe 01 00 	movl   $0x1fe,0xc(%esp)
 81a38fe:	00 
 81a38ff:	c7 44 24 08 60 d6 ba 	movl   $0x8bad660,0x8(%esp)
 81a3906:	08 
 81a3907:	c7 44 24 04 0c c8 ba 	movl   $0x8bac80c,0x4(%esp)
 81a390e:	08 
 81a390f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81a3916:	e8 ef 02 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81a391b:	bb ff 01 00 00       	mov    $0x1ff,%ebx
 81a3920:	eb 54                	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a3922:	8b 45 08             	mov    0x8(%ebp),%eax
 81a3925:	8d 50 10             	lea    0x10(%eax),%edx
 81a3928:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81a392b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81a392f:	89 14 24             	mov    %edx,(%esp)
 81a3932:	e8 b9 eb f3 ff       	call   80e24f0 <_ZNSt6vectorIjSaIjEE9push_backERKj>
 81a3937:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81a393b:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a393e:	89 04 24             	mov    %eax,(%esp)
 81a3941:	e8 36 09 00 00       	call   81a427c <_ZN11Arad_Script9GetRowNumEv>
 81a3946:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81a3949:	0f 9f c0             	setg   %al
 81a394c:	84 c0                	test   %al,%al
 81a394e:	0f 85 61 ff ff ff    	jne    81a38b5 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x1b9>
 81a3954:	bb 00 00 00 00       	mov    $0x0,%ebx
 81a3959:	eb 1b                	jmp    81a3976 <_ZN30Arad_OnePlusCardEvent_ItemList7parsingEPc+0x27a>
 81a395b:	89 d3                	mov    %edx,%ebx
 81a395d:	89 c6                	mov    %eax,%esi
 81a395f:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3962:	89 04 24             	mov    %eax,(%esp)
 81a3965:	e8 ba 7c fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a396a:	89 f0                	mov    %esi,%eax
 81a396c:	89 da                	mov    %ebx,%edx
 81a396e:	89 04 24             	mov    %eax,(%esp)
 81a3971:	e8 da fd 93 00       	call   8ae3750 <_Unwind_Resume>
 81a3976:	8d 45 88             	lea    -0x78(%ebp),%eax
 81a3979:	89 04 24             	mov    %eax,(%esp)
 81a397c:	e8 a3 7c fd ff       	call   817b624 <_ZN11Arad_ScriptD1Ev>
 81a3981:	89 d8                	mov    %ebx,%eax
 81a3983:	81 c4 90 00 00 00    	add    $0x90,%esp
 81a3989:	5b                   	pop    %ebx
 81a398a:	5e                   	pop    %esi
 81a398b:	5d                   	pop    %ebp
 81a398c:	c3                   	ret
 81a398d:	90                   	nop

```

```c
// Arad_OnePlusCardEvent_ItemList::parsing @ 0x81a36fc

/* Arad_OnePlusCardEvent_ItemList::parsing(char*) */

undefined4 __thiscall
Arad_OnePlusCardEvent_ItemList::parsing(Arad_OnePlusCardEvent_ItemList *this,char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  Arad_Script local_7c [84];
  uint local_28;
  Data local_24 [8];
  int local_1c;
  ushort local_16;
  ulong local_14;
  int local_10;
  
  Arad_Script::Arad_Script(local_7c);
                    /* try { // try from 081a3727 to 081a3936 has its CatchHandler @ 081a395b */
  cVar1 = Arad_Script::Load(local_7c,param_1,"item");
  if (cVar1 == '\x01') {
    iVar2 = Arad_Script::GetRowNum(local_7c);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_1c = 0;
      while( true ) {
        iVar2 = Arad_Script::GetRowNum(local_7c);
        if (iVar2 <= local_1c) break;
        local_16 = 0;
        local_14 = 0xffffffff;
        local_16 = Arad_Script::GetInt(local_7c,local_1c,"web_id");
        local_14 = Arad_Script::GetInt(local_7c,local_1c,"item_index");
        cVar1 = find_item(this,local_16);
        if (cVar1 != '\0') {
          LogManager::logFormat
                    (1,"localjapan/Arad_Script_Loader.cpp",
                     "virtual int Arad_OnePlusCardEvent_ItemList::parsing(char*)",0x1ea,
                     "[ERROR] already exist data id OnePlusCardEvent(id:%d, item:%u)",(uint)local_16
                     ,local_14);
          uVar4 = 0x1eb;
          goto LAB_081a3976;
        }
        Data::Data(local_24,local_16,local_14);
        std::
        vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
        ::push_back((vector<Arad_OnePlusCardEvent_ItemList::Data,std::allocator<Arad_OnePlusCardEvent_ItemList::Data>>
                     *)(this + 4),local_24);
        local_1c = local_1c + 1;
      }
      pcVar3 = DNFLexWrapper::getInputStreamBuffer((DNFLexWrapper *)g_dnfLex);
      cVar1 = Arad_Script::Load(local_7c,pcVar3,"limited_map");
      if (cVar1 == '\x01') {
        iVar2 = Arad_Script::GetRowNum(local_7c);
        if (iVar2 == 0) {
          uVar4 = 0;
        }
        else {
          local_10 = 0;
          while( true ) {
            iVar2 = Arad_Script::GetRowNum(local_7c);
            if (iVar2 <= local_10) break;
            local_28 = Arad_Script::GetInt(local_7c,local_10,"index");
            cVar1 = is_limited_map((uint)this);
            if (cVar1 != '\0') {
              LogManager::logFormat
                        (1,"localjapan/Arad_Script_Loader.cpp",
                         "virtual int Arad_OnePlusCardEvent_ItemList::parsing(char*)",0x1fe,
                         "[ERROR] already exist limited map index (map:%u)",local_28);
              uVar4 = 0x1ff;
              goto LAB_081a3976;
            }
            std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                      ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x10),&local_28)
            ;
            local_10 = local_10 + 1;
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 499;
      }
    }
  }
  else {
    uVar4 = 0x1db;
  }
LAB_081a3976:
  Arad_Script::~Arad_Script(local_7c);
  return uVar4;
}

```


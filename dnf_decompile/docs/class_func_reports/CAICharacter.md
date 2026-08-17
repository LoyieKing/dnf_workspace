# CAICharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## deathTowerSpecifyItemDrop

```asm
// === 0834a19c CAICharacter::deathTowerSpecifyItemDrop  [0x0834a19c-0x834a23f] ===
 834a19c:	55                   	push   %ebp
 834a19d:	89 e5                	mov    %esp,%ebp
 834a19f:	83 ec 28             	sub    $0x28,%esp
 834a1a2:	8b 45 08             	mov    0x8(%ebp),%eax
 834a1a5:	8d 50 10             	lea    0x10(%eax),%edx
 834a1a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a1ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a1af:	89 04 24             	mov    %eax,(%esp)
 834a1b2:	e8 69 70 dc ff       	call   8111220 <_ZNKSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 834a1b7:	83 ec 04             	sub    $0x4,%esp
 834a1ba:	8b 45 08             	mov    0x8(%ebp),%eax
 834a1bd:	8d 50 10             	lea    0x10(%eax),%edx
 834a1c0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834a1c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a1c7:	89 04 24             	mov    %eax,(%esp)
 834a1ca:	e8 7d 70 dc ff       	call   811124c <_ZNKSt6vectorISt4pairIiiESaIS1_EE3endEv>
 834a1cf:	83 ec 04             	sub    $0x4,%esp
 834a1d2:	eb 54                	jmp    834a228 <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE+0x8c>
 834a1d4:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 834a1db:	e8 a7 79 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834a1e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834a1e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a1e6:	89 04 24             	mov    %eax,(%esp)
 834a1e9:	e8 24 97 e4 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 834a1ee:	8b 40 04             	mov    0x4(%eax),%eax
 834a1f1:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 834a1f4:	0f 9f c0             	setg   %al
 834a1f7:	84 c0                	test   %al,%al
 834a1f9:	74 22                	je     834a21d <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE+0x81>
 834a1fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a1fe:	89 04 24             	mov    %eax,(%esp)
 834a201:	e8 0c 97 e4 ff       	call   8193912 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 834a206:	8b 00                	mov    (%eax),%eax
 834a208:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834a20b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834a20e:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a212:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a215:	89 04 24             	mov    %eax,(%esp)
 834a218:	e8 6f 2f e5 ff       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 834a21d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a220:	89 04 24             	mov    %eax,(%esp)
 834a223:	e8 a8 3a ef ff       	call   823dcd0 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 834a228:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834a22b:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a22f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834a232:	89 04 24             	mov    %eax,(%esp)
 834a235:	e8 ab 96 e4 ff       	call   81938e5 <_ZN9__gnu_cxxneIPKSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 834a23a:	84 c0                	test   %al,%al
 834a23c:	75 96                	jne    834a1d4 <_ZNK12CAICharacter25deathTowerSpecifyItemDropERSt6vectorImSaImEE+0x38>
 834a23e:	c9                   	leave
 834a23f:	c3                   	ret

```

```c
// CAICharacter::deathTowerSpecifyItemDrop @ 0x834a19c

/* CAICharacter::deathTowerSpecifyItemDrop(std::vector<unsigned long, std::allocator<unsigned long>
   >&) const */

void __thiscall CAICharacter::deathTowerSpecifyItemDrop(CAICharacter *this,vector *param_1)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  ulong local_14;
  int local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_18,local_1c);
    if (!bVar1) break;
    local_10 = get_rand_int(10000);
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_18);
    if (local_10 < *(int *)(iVar2 + 4)) {
      puVar3 = (ulong *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_18);
      local_14 = *puVar3;
      std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
                ((vector<unsigned_long,std::allocator<unsigned_long>> *)param_1,&local_14);
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_18);
  }
  return;
}

```

---

## generateDropAvatarItem

```asm
// === 0834a15e CAICharacter::generateDropAvatarItem  [0x0834a15e-0x834a19b] ===
 834a15e:	55                   	push   %ebp
 834a15f:	89 e5                	mov    %esp,%ebp
 834a161:	53                   	push   %ebx
 834a162:	83 ec 24             	sub    $0x24,%esp
 834a165:	8b 55 0c             	mov    0xc(%ebp),%edx
 834a168:	8b 45 10             	mov    0x10(%ebp),%eax
 834a16b:	88 55 f4             	mov    %dl,-0xc(%ebp)
 834a16e:	88 45 f0             	mov    %al,-0x10(%ebp)
 834a171:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 834a175:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 834a179:	8b 4d 08             	mov    0x8(%ebp),%ecx
 834a17c:	8d 59 30             	lea    0x30(%ecx),%ebx
 834a17f:	8b 4d 14             	mov    0x14(%ebp),%ecx
 834a182:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 834a186:	89 54 24 08          	mov    %edx,0x8(%esp)
 834a18a:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a18e:	89 1c 24             	mov    %ebx,(%esp)
 834a191:	e8 0a fc ff ff       	call   8349da0 <_Z22generateDropAvatarItemRK23stEnamyDropAvatarInfo_thhRSt6vectorI10Inven_ItemSaIS3_EE>
 834a196:	83 c4 24             	add    $0x24,%esp
 834a199:	5b                   	pop    %ebx
 834a19a:	5d                   	pop    %ebp
 834a19b:	c3                   	ret

```

```c
// CAICharacter::generateDropAvatarItem @ 0x834a15e

/* CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CAICharacter::generateDropAvatarItem(CAICharacter *this,uchar param_1,uchar param_2,vector *param_3)

{
  ::generateDropAvatarItem((stEnamyDropAvatarInfo_t *)(this + 0x30),param_1,param_2,param_3);
  return;
}

```

---

## generateIndependentItem

```asm
// === 0834a13a CAICharacter::generateIndependentItem  [0x0834a13a-0x834a15d] ===
 834a13a:	55                   	push   %ebp
 834a13b:	89 e5                	mov    %esp,%ebp
 834a13d:	83 ec 18             	sub    $0x18,%esp
 834a140:	8b 45 08             	mov    0x8(%ebp),%eax
 834a143:	8d 50 24             	lea    0x24(%eax),%edx
 834a146:	8b 45 10             	mov    0x10(%ebp),%eax
 834a149:	89 44 24 08          	mov    %eax,0x8(%esp)
 834a14d:	8b 45 0c             	mov    0xc(%ebp),%eax
 834a150:	89 44 24 04          	mov    %eax,0x4(%esp)
 834a154:	89 14 24             	mov    %edx,(%esp)
 834a157:	e8 3e f7 ff ff       	call   834989a <_Z23generateIndependentItemRKSt6vectorI26stMonsterIndependentDrop_tSaIS0_EERKN8WongWork19stGenerateRefData_tERS_I10Inven_ItemSaIS9_EE>
 834a15c:	c9                   	leave
 834a15d:	c3                   	ret

```

```c
// CAICharacter::generateIndependentItem @ 0x834a13a

/* CAICharacter::generateIndependentItem(WongWork::stGenerateRefData_t const&,
   std::vector<Inven_Item, std::allocator<Inven_Item> >&) const */

void __thiscall
CAICharacter::generateIndependentItem
          (CAICharacter *this,stGenerateRefData_t *param_1,vector *param_2)

{
  ::generateIndependentItem((vector *)(this + 0x24),param_1,param_2);
  return;
}

```

---

## getPvPWinPoint

```asm
// === 0834a240 CAICharacter::getPvPWinPoint  [0x0834a240-0x834a28b] ===
 834a240:	55                   	push   %ebp
 834a241:	89 e5                	mov    %esp,%ebp
 834a243:	53                   	push   %ebx
 834a244:	83 ec 14             	sub    $0x14,%esp
 834a247:	8b 45 08             	mov    0x8(%ebp),%eax
 834a24a:	8b 50 1c             	mov    0x1c(%eax),%edx
 834a24d:	8b 45 08             	mov    0x8(%ebp),%eax
 834a250:	8b 40 20             	mov    0x20(%eax),%eax
 834a253:	39 c2                	cmp    %eax,%edx
 834a255:	75 08                	jne    834a25f <_ZNK12CAICharacter14getPvPWinPointEv+0x1f>
 834a257:	8b 45 08             	mov    0x8(%ebp),%eax
 834a25a:	8b 40 1c             	mov    0x1c(%eax),%eax
 834a25d:	eb 26                	jmp    834a285 <_ZNK12CAICharacter14getPvPWinPointEv+0x45>
 834a25f:	8b 45 08             	mov    0x8(%ebp),%eax
 834a262:	8b 58 1c             	mov    0x1c(%eax),%ebx
 834a265:	8b 45 08             	mov    0x8(%ebp),%eax
 834a268:	8b 50 20             	mov    0x20(%eax),%edx
 834a26b:	8b 45 08             	mov    0x8(%ebp),%eax
 834a26e:	8b 40 1c             	mov    0x1c(%eax),%eax
 834a271:	89 d1                	mov    %edx,%ecx
 834a273:	29 c1                	sub    %eax,%ecx
 834a275:	89 c8                	mov    %ecx,%eax
 834a277:	83 c0 01             	add    $0x1,%eax
 834a27a:	89 04 24             	mov    %eax,(%esp)
 834a27d:	e8 05 79 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834a282:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 834a285:	83 c4 14             	add    $0x14,%esp
 834a288:	5b                   	pop    %ebx
 834a289:	5d                   	pop    %ebp
 834a28a:	c3                   	ret
 834a28b:	90                   	nop

```

```c
// CAICharacter::getPvPWinPoint @ 0x834a240

/* CAICharacter::getPvPWinPoint() const */

int __thiscall CAICharacter::getPvPWinPoint(CAICharacter *this)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1c) == *(int *)(this + 0x20)) {
    iVar2 = *(int *)(this + 0x1c);
  }
  else {
    iVar2 = *(int *)(this + 0x1c);
    iVar1 = get_rand_int((*(int *)(this + 0x20) - *(int *)(this + 0x1c)) + 1);
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}

```

---

## set

```asm
// === 0834a066 CAICharacter::set  [0x0834a066-0x834a139] ===
 834a066:	55                   	push   %ebp
 834a067:	89 e5                	mov    %esp,%ebp
 834a069:	83 ec 18             	sub    $0x18,%esp
 834a06c:	8b 55 0c             	mov    0xc(%ebp),%edx
 834a06f:	8b 45 08             	mov    0x8(%ebp),%eax
 834a072:	89 10                	mov    %edx,(%eax)
 834a074:	8b 45 10             	mov    0x10(%ebp),%eax
 834a077:	8b 40 08             	mov    0x8(%eax),%eax
 834a07a:	89 c2                	mov    %eax,%edx
 834a07c:	8b 45 08             	mov    0x8(%ebp),%eax
 834a07f:	89 50 04             	mov    %edx,0x4(%eax)
 834a082:	8b 45 10             	mov    0x10(%ebp),%eax
 834a085:	8b 90 80 0d 00 00    	mov    0xd80(%eax),%edx
 834a08b:	8b 45 08             	mov    0x8(%ebp),%eax
 834a08e:	89 50 08             	mov    %edx,0x8(%eax)
 834a091:	8b 45 10             	mov    0x10(%ebp),%eax
 834a094:	8b 90 84 0d 00 00    	mov    0xd84(%eax),%edx
 834a09a:	8b 45 08             	mov    0x8(%ebp),%eax
 834a09d:	89 50 0c             	mov    %edx,0xc(%eax)
 834a0a0:	8b 45 10             	mov    0x10(%ebp),%eax
 834a0a3:	8d 90 88 0d 00 00    	lea    0xd88(%eax),%edx
 834a0a9:	8b 45 08             	mov    0x8(%ebp),%eax
 834a0ac:	83 c0 10             	add    $0x10,%eax
 834a0af:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a0b3:	89 04 24             	mov    %eax,(%esp)
 834a0b6:	e8 d1 4f fc ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 834a0bb:	8b 45 10             	mov    0x10(%ebp),%eax
 834a0be:	8b 90 a4 0d 00 00    	mov    0xda4(%eax),%edx
 834a0c4:	8b 45 08             	mov    0x8(%ebp),%eax
 834a0c7:	89 50 1c             	mov    %edx,0x1c(%eax)
 834a0ca:	8b 45 10             	mov    0x10(%ebp),%eax
 834a0cd:	8b 90 a8 0d 00 00    	mov    0xda8(%eax),%edx
 834a0d3:	8b 45 08             	mov    0x8(%ebp),%eax
 834a0d6:	89 50 20             	mov    %edx,0x20(%eax)
 834a0d9:	8b 45 10             	mov    0x10(%ebp),%eax
 834a0dc:	8d 90 2c 0f 00 00    	lea    0xf2c(%eax),%edx
 834a0e2:	8b 45 08             	mov    0x8(%ebp),%eax
 834a0e5:	83 c0 24             	add    $0x24,%eax
 834a0e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a0ec:	89 04 24             	mov    %eax,(%esp)
 834a0ef:	e8 64 e4 03 00       	call   8388558 <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EEaSERKS2_>
 834a0f4:	8b 45 10             	mov    0x10(%ebp),%eax
 834a0f7:	8d 90 50 0f 00 00    	lea    0xf50(%eax),%edx
 834a0fd:	8b 45 08             	mov    0x8(%ebp),%eax
 834a100:	83 c0 30             	add    $0x30,%eax
 834a103:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a107:	89 04 24             	mov    %eax,(%esp)
 834a10a:	e8 99 cd 01 00       	call   8366ea8 <_ZN23stEnamyDropAvatarInfo_taSERKS_>
 834a10f:	8b 45 10             	mov    0x10(%ebp),%eax
 834a112:	8d 50 04             	lea    0x4(%eax),%edx
 834a115:	8b 45 08             	mov    0x8(%ebp),%eax
 834a118:	83 c0 6c             	add    $0x6c,%eax
 834a11b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834a11f:	89 04 24             	mov    %eax,(%esp)
 834a122:	e8 d9 db 3b 00       	call   8707d00 <_ZNSsaSERKSs>
 834a127:	8b 45 10             	mov    0x10(%ebp),%eax
 834a12a:	0f b6 90 0c 10 00 00 	movzbl 0x100c(%eax),%edx
 834a131:	8b 45 08             	mov    0x8(%ebp),%eax
 834a134:	88 50 70             	mov    %dl,0x70(%eax)
 834a137:	c9                   	leave
 834a138:	c3                   	ret
 834a139:	90                   	nop

```

```c
// CAICharacter::set @ 0x834a066

/* CAICharacter::set(int, STAICharacterCommonScript const&) */

void __thiscall CAICharacter::set(CAICharacter *this,int param_1,STAICharacterCommonScript *param_2)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 0xd80);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 0xd84);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x10),
             (vector *)(param_2 + 0xd88));
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0xda4);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_2 + 0xda8);
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::operator=
            ((vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> *)
             (this + 0x24),(vector *)(param_2 + 0xf2c));
  stEnamyDropAvatarInfo_t::operator=
            ((stEnamyDropAvatarInfo_t *)(this + 0x30),(stEnamyDropAvatarInfo_t *)(param_2 + 0xf50));
  std::string::operator=((string *)(this + 0x6c),(string *)(param_2 + 4));
  this[0x70] = *(CAICharacter *)(param_2 + 0x100c);
  return;
}

```


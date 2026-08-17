# advancealtar__CharacData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CharacData

```asm
// === 0812d024 advancealtar::CharacData::CharacData  [0x0812d024-0x812d061] ===
 812d024:	55                   	push   %ebp
 812d025:	89 e5                	mov    %esp,%ebp
 812d027:	83 ec 18             	sub    $0x18,%esp
 812d02a:	8b 45 08             	mov    0x8(%ebp),%eax
 812d02d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812d033:	8b 45 08             	mov    0x8(%ebp),%eax
 812d036:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 812d03d:	8b 45 08             	mov    0x8(%ebp),%eax
 812d040:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 812d047:	8b 45 08             	mov    0x8(%ebp),%eax
 812d04a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 812d051:	8b 45 08             	mov    0x8(%ebp),%eax
 812d054:	83 c0 10             	add    $0x10,%eax
 812d057:	89 04 24             	mov    %eax,(%esp)
 812d05a:	e8 f7 7d 00 00       	call   8134e56 <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEEC1Ev>
 812d05f:	c9                   	leave
 812d060:	c3                   	ret
 812d061:	90                   	nop

```

```c
// advancealtar::CharacData::CharacData @ 0x812d024

/* advancealtar::CharacData::CharacData() */

void __thiscall advancealtar::CharacData::CharacData(CharacData *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::map((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
         *)(this + 0x10));
  return;
}

```

---

## reset

```asm
// === 0812d078 advancealtar::CharacData::reset  [0x0812d078-0x812d0b5] ===
 812d078:	55                   	push   %ebp
 812d079:	89 e5                	mov    %esp,%ebp
 812d07b:	83 ec 18             	sub    $0x18,%esp
 812d07e:	8b 45 08             	mov    0x8(%ebp),%eax
 812d081:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 812d088:	8b 45 08             	mov    0x8(%ebp),%eax
 812d08b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 812d092:	8b 45 08             	mov    0x8(%ebp),%eax
 812d095:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 812d09c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d09f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 812d0a5:	8b 45 08             	mov    0x8(%ebp),%eax
 812d0a8:	83 c0 10             	add    $0x10,%eax
 812d0ab:	89 04 24             	mov    %eax,(%esp)
 812d0ae:	e8 1d 7e 00 00       	call   8134ed0 <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEE5clearEv>
 812d0b3:	c9                   	leave
 812d0b4:	c3                   	ret
 812d0b5:	90                   	nop

```

```c
// advancealtar::CharacData::reset @ 0x812d078

/* advancealtar::CharacData::reset() */

void __thiscall advancealtar::CharacData::reset(CharacData *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::clear((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
           *)(this + 0x10));
  return;
}

```

---

## sendTestCheckGage

```asm
// === 0812d372 advancealtar::CharacData::sendTestCheckGage  [0x0812d372-0x812d377] ===
 812d372:	55                   	push   %ebp
 812d373:	89 e5                	mov    %esp,%ebp
 812d375:	5d                   	pop    %ebp
 812d376:	c3                   	ret
 812d377:	90                   	nop

```

```c
// advancealtar::CharacData::sendTestCheckGage @ 0x812d372

/* advancealtar::CharacData::sendTestCheckGage() */

void advancealtar::CharacData::sendTestCheckGage(void)

{
  return;
}

```

---

## setSlotItem

```asm
// === 0812d246 advancealtar::CharacData::setSlotItem  [0x0812d246-0x812d277] ===
 812d246:	55                   	push   %ebp
 812d247:	89 e5                	mov    %esp,%ebp
 812d249:	83 ec 18             	sub    $0x18,%esp
 812d24c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d24f:	8b 40 04             	mov    0x4(%eax),%eax
 812d252:	85 c0                	test   %eax,%eax
 812d254:	74 1f                	je     812d275 <_ZN12advancealtar10CharacData11setSlotItemEv+0x2f>
 812d256:	8b 45 08             	mov    0x8(%ebp),%eax
 812d259:	8d 50 10             	lea    0x10(%eax),%edx
 812d25c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d25f:	8b 40 04             	mov    0x4(%eax),%eax
 812d262:	05 60 df 08 00       	add    $0x8df60,%eax
 812d267:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d26b:	89 04 24             	mov    %eax,(%esp)
 812d26e:	e8 c5 53 00 00       	call   8132638 <_ZNK12advancealtar25CharacAdvanceAltarManager11getSlotItemERSt3mapIhNS_9_SlotItemESt4lessIhESaISt4pairIKhS2_EEE>
 812d273:	eb 01                	jmp    812d276 <_ZN12advancealtar10CharacData11setSlotItemEv+0x30>
 812d275:	90                   	nop
 812d276:	c9                   	leave
 812d277:	c3                   	ret

```

```c
// advancealtar::CharacData::setSlotItem @ 0x812d246

/* advancealtar::CharacData::setSlotItem() */

void __thiscall advancealtar::CharacData::setSlotItem(CharacData *this)

{
  if (*(int *)(this + 4) != 0) {
    CharacAdvanceAltarManager::getSlotItem((map *)(*(int *)(this + 4) + 0x8df60));
  }
  return;
}

```

---

## summonSlotUnit

```asm
// === 0812d278 advancealtar::CharacData::summonSlotUnit  [0x0812d278-0x812d371] ===
 812d278:	55                   	push   %ebp
 812d279:	89 e5                	mov    %esp,%ebp
 812d27b:	83 ec 48             	sub    $0x48,%esp
 812d27e:	8b 45 0c             	mov    0xc(%ebp),%eax
 812d281:	88 45 d4             	mov    %al,-0x2c(%ebp)
 812d284:	e8 12 ef f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812d289:	05 64 63 00 00       	add    $0x6364,%eax
 812d28e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812d291:	8b 45 08             	mov    0x8(%ebp),%eax
 812d294:	8d 48 10             	lea    0x10(%eax),%ecx
 812d297:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d29a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 812d29d:	89 54 24 08          	mov    %edx,0x8(%esp)
 812d2a1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 812d2a5:	89 04 24             	mov    %eax,(%esp)
 812d2a8:	e8 37 7c 00 00       	call   8134ee4 <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEE4findERS5_>
 812d2ad:	83 ec 04             	sub    $0x4,%esp
 812d2b0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 812d2b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d2b7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812d2ba:	89 04 24             	mov    %eax,(%esp)
 812d2bd:	e8 4e 7c 00 00       	call   8134f10 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar9_SlotItemEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 812d2c2:	8b 45 08             	mov    0x8(%ebp),%eax
 812d2c5:	8d 50 10             	lea    0x10(%eax),%edx
 812d2c8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d2cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 812d2cf:	89 04 24             	mov    %eax,(%esp)
 812d2d2:	e8 49 7c 00 00       	call   8134f20 <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEE3endEv>
 812d2d7:	83 ec 04             	sub    $0x4,%esp
 812d2da:	8d 45 ec             	lea    -0x14(%ebp),%eax
 812d2dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d2e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812d2e4:	89 04 24             	mov    %eax,(%esp)
 812d2e7:	e8 24 7c 00 00       	call   8134f10 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar9_SlotItemEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 812d2ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 812d2ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 812d2f3:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812d2f6:	89 04 24             	mov    %eax,(%esp)
 812d2f9:	e8 48 7c 00 00       	call   8134f46 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar9_SlotItemEEEeqERKS5_>
 812d2fe:	84 c0                	test   %al,%al
 812d300:	74 07                	je     812d309 <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0x91>
 812d302:	b8 04 00 00 00       	mov    $0x4,%eax
 812d307:	eb 67                	jmp    812d370 <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xf8>
 812d309:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812d30c:	89 04 24             	mov    %eax,(%esp)
 812d30f:	e8 46 7c 00 00       	call   8134f5a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar9_SlotItemEEEptEv>
 812d314:	8b 50 0c             	mov    0xc(%eax),%edx
 812d317:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812d31a:	8b 40 18             	mov    0x18(%eax),%eax
 812d31d:	8b 00                	mov    (%eax),%eax
 812d31f:	0f af c2             	imul   %edx,%eax
 812d322:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812d325:	8d 45 e0             	lea    -0x20(%ebp),%eax
 812d328:	89 04 24             	mov    %eax,(%esp)
 812d32b:	e8 2a 7c 00 00       	call   8134f5a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKhN12advancealtar9_SlotItemEEEptEv>
 812d330:	8b 40 08             	mov    0x8(%eax),%eax
 812d333:	3b 45 10             	cmp    0x10(%ebp),%eax
 812d336:	75 12                	jne    812d34a <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xd2>
 812d338:	8b 45 08             	mov    0x8(%ebp),%eax
 812d33b:	8b 40 0c             	mov    0xc(%eax),%eax
 812d33e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 812d341:	7c 07                	jl     812d34a <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xd2>
 812d343:	b8 01 00 00 00       	mov    $0x1,%eax
 812d348:	eb 05                	jmp    812d34f <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xd7>
 812d34a:	b8 00 00 00 00       	mov    $0x0,%eax
 812d34f:	84 c0                	test   %al,%al
 812d351:	74 18                	je     812d36b <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xf3>
 812d353:	8b 45 08             	mov    0x8(%ebp),%eax
 812d356:	8b 40 0c             	mov    0xc(%eax),%eax
 812d359:	89 c2                	mov    %eax,%edx
 812d35b:	2b 55 f4             	sub    -0xc(%ebp),%edx
 812d35e:	8b 45 08             	mov    0x8(%ebp),%eax
 812d361:	89 50 0c             	mov    %edx,0xc(%eax)
 812d364:	b8 00 00 00 00       	mov    $0x0,%eax
 812d369:	eb 05                	jmp    812d370 <_ZN12advancealtar10CharacData14summonSlotUnitEhi+0xf8>
 812d36b:	b8 02 00 00 00       	mov    $0x2,%eax
 812d370:	c9                   	leave
 812d371:	c3                   	ret

```

```c
// advancealtar::CharacData::summonSlotUnit @ 0x812d278

/* advancealtar::CharacData::summonSlotUnit(unsigned char, int) */

undefined4 __thiscall
advancealtar::CharacData::summonSlotUnit(CharacData *this,uchar param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>> local_24 [4];
  _Rb_tree_iterator local_20 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>> local_1c [4];
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  local_14 = G_CDataManager();
  local_14 = local_14 + 0x6364;
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::find((uchar *)local_20);
  std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
  _Rb_tree_const_iterator(local_24,local_20);
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::end(local_18);
  std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
  _Rb_tree_const_iterator(local_1c,(_Rb_tree_iterator *)local_18);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
          operator==(local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar2 == '\0') {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
            operator->(local_24);
    local_10 = **(int **)(local_14 + 0x18) * *(int *)(iVar4 + 0xc);
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>::
            operator->(local_24);
    if ((*(int *)(iVar4 + 8) == param_2) && (local_10 <= *(int *)(this + 0xc))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) - local_10;
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}

```

---

## upGage

```asm
// === 0812d0b6 advancealtar::CharacData::upGage  [0x0812d0b6-0x812d175] ===
 812d0b6:	55                   	push   %ebp
 812d0b7:	89 e5                	mov    %esp,%ebp
 812d0b9:	83 ec 38             	sub    $0x38,%esp
 812d0bc:	e8 da f0 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812d0c1:	05 64 63 00 00       	add    $0x6364,%eax
 812d0c6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 812d0c9:	8b 45 08             	mov    0x8(%ebp),%eax
 812d0cc:	8b 40 08             	mov    0x8(%eax),%eax
 812d0cf:	89 c2                	mov    %eax,%edx
 812d0d1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812d0d4:	83 c2 04             	add    $0x4,%edx
 812d0d7:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 812d0db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812d0de:	8b 40 18             	mov    0x18(%eax),%eax
 812d0e1:	8b 00                	mov    (%eax),%eax
 812d0e3:	0f af c2             	imul   %edx,%eax
 812d0e6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 812d0e9:	8b 45 08             	mov    0x8(%ebp),%eax
 812d0ec:	8b 40 0c             	mov    0xc(%eax),%eax
 812d0ef:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 812d0f2:	7c 16                	jl     812d10a <_ZN12advancealtar10CharacData6upGageEv+0x54>
 812d0f4:	8b 45 08             	mov    0x8(%ebp),%eax
 812d0f7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 812d0fa:	89 50 0c             	mov    %edx,0xc(%eax)
 812d0fd:	8b 45 08             	mov    0x8(%ebp),%eax
 812d100:	89 04 24             	mov    %eax,(%esp)
 812d103:	e8 6a 02 00 00       	call   812d372 <_ZN12advancealtar10CharacData17sendTestCheckGageEv>
 812d108:	eb 69                	jmp    812d173 <_ZN12advancealtar10CharacData6upGageEv+0xbd>
 812d10a:	8b 45 08             	mov    0x8(%ebp),%eax
 812d10d:	8b 40 08             	mov    0x8(%eax),%eax
 812d110:	89 c2                	mov    %eax,%edx
 812d112:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812d115:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 812d119:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812d11c:	db 45 e4             	fildl  -0x1c(%ebp)
 812d11f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812d122:	8b 40 18             	mov    0x18(%eax),%eax
 812d125:	8b 00                	mov    (%eax),%eax
 812d127:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812d12a:	db 45 e4             	fildl  -0x1c(%ebp)
 812d12d:	de f9                	fdivrp %st,%st(1)
 812d12f:	d9 5d f0             	fstps  -0x10(%ebp)
 812d132:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812d135:	8b 40 08             	mov    0x8(%eax),%eax
 812d138:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812d13b:	db 45 e4             	fildl  -0x1c(%ebp)
 812d13e:	d8 4d f0             	fmuls  -0x10(%ebp)
 812d141:	d9 7d e2             	fnstcw -0x1e(%ebp)
 812d144:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 812d148:	b4 0c                	mov    $0xc,%ah
 812d14a:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 812d14e:	d9 6d e0             	fldcw  -0x20(%ebp)
 812d151:	db 5d f4             	fistpl -0xc(%ebp)
 812d154:	d9 6d e2             	fldcw  -0x1e(%ebp)
 812d157:	8b 45 08             	mov    0x8(%ebp),%eax
 812d15a:	8b 40 0c             	mov    0xc(%eax),%eax
 812d15d:	89 c2                	mov    %eax,%edx
 812d15f:	03 55 f4             	add    -0xc(%ebp),%edx
 812d162:	8b 45 08             	mov    0x8(%ebp),%eax
 812d165:	89 50 0c             	mov    %edx,0xc(%eax)
 812d168:	8b 45 08             	mov    0x8(%ebp),%eax
 812d16b:	89 04 24             	mov    %eax,(%esp)
 812d16e:	e8 ff 01 00 00       	call   812d372 <_ZN12advancealtar10CharacData17sendTestCheckGageEv>
 812d173:	c9                   	leave
 812d174:	c3                   	ret
 812d175:	90                   	nop

```

```c
// advancealtar::CharacData::upGage @ 0x812d0b6

/* advancealtar::CharacData::upGage() */

void __thiscall advancealtar::CharacData::upGage(CharacData *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = G_CDataManager();
  iVar2 = **(int **)(iVar1 + 0x637c) * *(int *)(iVar1 + 0x6370 + (*(int *)(this + 8) + 4) * 4);
  if (*(int *)(this + 0xc) < iVar2) {
    *(int *)(this + 0xc) =
         *(int *)(this + 0xc) +
         (int)ROUND((float)*(int *)(iVar1 + 0x636c) *
                    ((float)*(int *)(iVar1 + 0x636c + *(int *)(this + 8) * 4) /
                    (float)**(int **)(iVar1 + 0x637c)));
    sendTestCheckGage();
  }
  else {
    *(int *)(this + 0xc) = iVar2;
    sendTestCheckGage();
  }
  return;
}

```

---

## upgreadGage

```asm
// === 0812d176 advancealtar::CharacData::upgreadGage  [0x0812d176-0x812d245] ===
 812d176:	55                   	push   %ebp
 812d177:	89 e5                	mov    %esp,%ebp
 812d179:	83 ec 28             	sub    $0x28,%esp
 812d17c:	e8 1a f0 f9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 812d181:	05 64 63 00 00       	add    $0x6364,%eax
 812d186:	89 45 f0             	mov    %eax,-0x10(%ebp)
 812d189:	8b 45 08             	mov    0x8(%ebp),%eax
 812d18c:	8b 40 08             	mov    0x8(%eax),%eax
 812d18f:	83 f8 03             	cmp    $0x3,%eax
 812d192:	75 0a                	jne    812d19e <_ZN12advancealtar10CharacData11upgreadGageEv+0x28>
 812d194:	b8 02 00 00 00       	mov    $0x2,%eax
 812d199:	e9 a5 00 00 00       	jmp    812d243 <_ZN12advancealtar10CharacData11upgreadGageEv+0xcd>
 812d19e:	8b 45 08             	mov    0x8(%ebp),%eax
 812d1a1:	8b 40 08             	mov    0x8(%eax),%eax
 812d1a4:	89 c2                	mov    %eax,%edx
 812d1a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812d1a9:	83 c2 04             	add    $0x4,%edx
 812d1ac:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 812d1b0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812d1b3:	db 45 e4             	fildl  -0x1c(%ebp)
 812d1b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812d1b9:	d9 40 04             	flds   0x4(%eax)
 812d1bc:	de c9                	fmulp  %st,%st(1)
 812d1be:	d9 7d e2             	fnstcw -0x1e(%ebp)
 812d1c1:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 812d1c5:	b4 0c                	mov    $0xc,%ah
 812d1c7:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 812d1cb:	d9 6d e0             	fldcw  -0x20(%ebp)
 812d1ce:	db 5d f4             	fistpl -0xc(%ebp)
 812d1d1:	d9 6d e2             	fldcw  -0x1e(%ebp)
 812d1d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 812d1d7:	8b 40 18             	mov    0x18(%eax),%eax
 812d1da:	8b 00                	mov    (%eax),%eax
 812d1dc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 812d1df:	0f af c2             	imul   %edx,%eax
 812d1e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 812d1e5:	8b 45 08             	mov    0x8(%ebp),%eax
 812d1e8:	8b 40 0c             	mov    0xc(%eax),%eax
 812d1eb:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 812d1ee:	7d 07                	jge    812d1f7 <_ZN12advancealtar10CharacData11upgreadGageEv+0x81>
 812d1f0:	b8 03 00 00 00       	mov    $0x3,%eax
 812d1f5:	eb 4c                	jmp    812d243 <_ZN12advancealtar10CharacData11upgreadGageEv+0xcd>
 812d1f7:	8b 45 08             	mov    0x8(%ebp),%eax
 812d1fa:	8b 40 0c             	mov    0xc(%eax),%eax
 812d1fd:	89 c2                	mov    %eax,%edx
 812d1ff:	2b 55 f4             	sub    -0xc(%ebp),%edx
 812d202:	8b 45 08             	mov    0x8(%ebp),%eax
 812d205:	89 50 0c             	mov    %edx,0xc(%eax)
 812d208:	8b 45 08             	mov    0x8(%ebp),%eax
 812d20b:	8b 40 08             	mov    0x8(%eax),%eax
 812d20e:	83 f8 01             	cmp    $0x1,%eax
 812d211:	74 15                	je     812d228 <_ZN12advancealtar10CharacData11upgreadGageEv+0xb2>
 812d213:	83 f8 02             	cmp    $0x2,%eax
 812d216:	74 1c                	je     812d234 <_ZN12advancealtar10CharacData11upgreadGageEv+0xbe>
 812d218:	85 c0                	test   %eax,%eax
 812d21a:	75 22                	jne    812d23e <_ZN12advancealtar10CharacData11upgreadGageEv+0xc8>
 812d21c:	8b 45 08             	mov    0x8(%ebp),%eax
 812d21f:	c7 40 08 01 00 00 00 	movl   $0x1,0x8(%eax)
 812d226:	eb 16                	jmp    812d23e <_ZN12advancealtar10CharacData11upgreadGageEv+0xc8>
 812d228:	8b 45 08             	mov    0x8(%ebp),%eax
 812d22b:	c7 40 08 02 00 00 00 	movl   $0x2,0x8(%eax)
 812d232:	eb 0a                	jmp    812d23e <_ZN12advancealtar10CharacData11upgreadGageEv+0xc8>
 812d234:	8b 45 08             	mov    0x8(%ebp),%eax
 812d237:	c7 40 08 03 00 00 00 	movl   $0x3,0x8(%eax)
 812d23e:	b8 00 00 00 00       	mov    $0x0,%eax
 812d243:	c9                   	leave
 812d244:	c3                   	ret
 812d245:	90                   	nop

```

```c
// advancealtar::CharacData::upgreadGage @ 0x812d176

/* advancealtar::CharacData::upgreadGage() */

undefined4 __thiscall advancealtar::CharacData::upgreadGage(CharacData *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = G_CDataManager();
  if (*(int *)(this + 8) == 3) {
    uVar2 = 2;
  }
  else {
    iVar1 = **(int **)(iVar1 + 0x637c) *
            (int)ROUND(*(float *)(iVar1 + 0x6368) *
                       (float)*(int *)(iVar1 + 0x6370 + (*(int *)(this + 8) + 4) * 4));
    if (*(int *)(this + 0xc) < iVar1) {
      uVar2 = 3;
    }
    else {
      *(int *)(this + 0xc) = *(int *)(this + 0xc) - iVar1;
      iVar1 = *(int *)(this + 8);
      if (iVar1 == 1) {
        *(undefined4 *)(this + 8) = 2;
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(this + 8) = 3;
      }
      else if (iVar1 == 0) {
        *(undefined4 *)(this + 8) = 1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## ~CharacData

```asm
// === 0812d062 advancealtar::CharacData::~CharacData  [0x0812d062-0x812d077] ===
 812d062:	55                   	push   %ebp
 812d063:	89 e5                	mov    %esp,%ebp
 812d065:	83 ec 18             	sub    $0x18,%esp
 812d068:	8b 45 08             	mov    0x8(%ebp),%eax
 812d06b:	83 c0 10             	add    $0x10,%eax
 812d06e:	89 04 24             	mov    %eax,(%esp)
 812d071:	e8 24 79 00 00       	call   813499a <_ZNSt3mapIhN12advancealtar9_SlotItemESt4lessIhESaISt4pairIKhS1_EEED1Ev>
 812d076:	c9                   	leave
 812d077:	c3                   	ret

```

```c
// advancealtar::CharacData::~CharacData @ 0x812d062

/* advancealtar::CharacData::~CharacData() */

void __thiscall advancealtar::CharacData::~CharacData(CharacData *this)

{
  std::
  map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
  ::~map((map<unsigned_char,advancealtar::_SlotItem,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,advancealtar::_SlotItem>>>
          *)(this + 0x10));
  return;
}

```


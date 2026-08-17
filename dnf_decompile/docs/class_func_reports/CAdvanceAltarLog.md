# CAdvanceAltarLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CAdvanceAltarLog

```asm
// === 08156aaa CAdvanceAltarLog::CAdvanceAltarLog  [0x08156aaa-0x8156b37] ===
 8156aaa:	55                   	push   %ebp
 8156aab:	89 e5                	mov    %esp,%ebp
 8156aad:	56                   	push   %esi
 8156aae:	53                   	push   %ebx
 8156aaf:	83 ec 10             	sub    $0x10,%esp
 8156ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8156ab5:	89 04 24             	mov    %eax,(%esp)
 8156ab8:	e8 55 49 f7 ff       	call   80cb412 <_ZN5MutexC1Ev>
 8156abd:	8b 45 08             	mov    0x8(%ebp),%eax
 8156ac0:	83 c0 18             	add    $0x18,%eax
 8156ac3:	89 04 24             	mov    %eax,(%esp)
 8156ac6:	e8 3b 0b 00 00       	call   8157606 <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
 8156acb:	8b 45 08             	mov    0x8(%ebp),%eax
 8156ace:	83 c0 30             	add    $0x30,%eax
 8156ad1:	89 04 24             	mov    %eax,(%esp)
 8156ad4:	e8 a7 0b 00 00       	call   8157680 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEEC1Ev>
 8156ad9:	8b 45 08             	mov    0x8(%ebp),%eax
 8156adc:	89 04 24             	mov    %eax,(%esp)
 8156adf:	e8 e6 00 00 00       	call   8156bca <_ZN16CAdvanceAltarLog14initStatisticsEv>
 8156ae4:	eb 4b                	jmp    8156b31 <_ZN16CAdvanceAltarLogC1Ev+0x87>
 8156ae6:	89 d3                	mov    %edx,%ebx
 8156ae8:	89 c6                	mov    %eax,%esi
 8156aea:	8b 45 08             	mov    0x8(%ebp),%eax
 8156aed:	83 c0 30             	add    $0x30,%eax
 8156af0:	89 04 24             	mov    %eax,(%esp)
 8156af3:	e8 58 09 00 00       	call   8157450 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEED1Ev>
 8156af8:	89 f0                	mov    %esi,%eax
 8156afa:	89 da                	mov    %ebx,%edx
 8156afc:	eb 00                	jmp    8156afe <_ZN16CAdvanceAltarLogC1Ev+0x54>
 8156afe:	89 d3                	mov    %edx,%ebx
 8156b00:	89 c6                	mov    %eax,%esi
 8156b02:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b05:	83 c0 18             	add    $0x18,%eax
 8156b08:	89 04 24             	mov    %eax,(%esp)
 8156b0b:	e8 2c 09 00 00       	call   815743c <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 8156b10:	89 f0                	mov    %esi,%eax
 8156b12:	89 da                	mov    %ebx,%edx
 8156b14:	eb 00                	jmp    8156b16 <_ZN16CAdvanceAltarLogC1Ev+0x6c>
 8156b16:	89 d3                	mov    %edx,%ebx
 8156b18:	89 c6                	mov    %eax,%esi
 8156b1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b1d:	89 04 24             	mov    %eax,(%esp)
 8156b20:	e8 09 49 f7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8156b25:	89 f0                	mov    %esi,%eax
 8156b27:	89 da                	mov    %ebx,%edx
 8156b29:	89 04 24             	mov    %eax,(%esp)
 8156b2c:	e8 1f cc 98 00       	call   8ae3750 <_Unwind_Resume>
 8156b31:	83 c4 10             	add    $0x10,%esp
 8156b34:	5b                   	pop    %ebx
 8156b35:	5e                   	pop    %esi
 8156b36:	5d                   	pop    %ebp
 8156b37:	c3                   	ret

```

```c
// CAdvanceAltarLog::CAdvanceAltarLog @ 0x8156aaa

/* CAdvanceAltarLog::CAdvanceAltarLog() */

void __thiscall CAdvanceAltarLog::CAdvanceAltarLog(CAdvanceAltarLog *this)

{
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 08156ac6 to 08156aca has its CatchHandler @ 08156b16 */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::map((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
         *)(this + 0x18));
                    /* try { // try from 08156ad4 to 08156ad8 has its CatchHandler @ 08156afe */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::map((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
         *)(this + 0x30));
                    /* try { // try from 08156adf to 08156ae3 has its CatchHandler @ 08156ae6 */
  initStatistics(this);
  return;
}

```

---

## getIndex

```asm
// === 0815730e CAdvanceAltarLog::getIndex  [0x0815730e-0x8157335] ===
 815730e:	55                   	push   %ebp
 815730f:	89 e5                	mov    %esp,%ebp
 8157311:	83 ec 08             	sub    $0x8,%esp
 8157314:	8b 45 08             	mov    0x8(%ebp),%eax
 8157317:	89 45 f8             	mov    %eax,-0x8(%ebp)
 815731a:	8b 45 0c             	mov    0xc(%ebp),%eax
 815731d:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8157320:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8157323:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8157326:	89 c2                	mov    %eax,%edx
 8157328:	b8 00 00 00 00       	mov    $0x0,%eax
 815732d:	89 d0                	mov    %edx,%eax
 815732f:	89 c2                	mov    %eax,%edx
 8157331:	c1 fa 1f             	sar    $0x1f,%edx
 8157334:	c9                   	leave
 8157335:	c3                   	ret

```

```c
// CAdvanceAltarLog::getIndex @ 0x815730e

/* CAdvanceAltarLog::getIndex(long long) */

void CAdvanceAltarLog::getIndex(longlong param_1)

{
  return;
}

```

---

## getLevel

```asm
// === 08157336 CAdvanceAltarLog::getLevel  [0x08157336-0x8157360] ===
 8157336:	55                   	push   %ebp
 8157337:	89 e5                	mov    %esp,%ebp
 8157339:	83 ec 08             	sub    $0x8,%esp
 815733c:	8b 45 08             	mov    0x8(%ebp),%eax
 815733f:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8157342:	8b 45 0c             	mov    0xc(%ebp),%eax
 8157345:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8157348:	8b 45 f8             	mov    -0x8(%ebp),%eax
 815734b:	8b 55 fc             	mov    -0x4(%ebp),%edx
 815734e:	0f a4 c2 10          	shld   $0x10,%eax,%edx
 8157352:	c1 e0 10             	shl    $0x10,%eax
 8157355:	89 d0                	mov    %edx,%eax
 8157357:	89 c2                	mov    %eax,%edx
 8157359:	c1 fa 1f             	sar    $0x1f,%edx
 815735c:	c1 f8 10             	sar    $0x10,%eax
 815735f:	c9                   	leave
 8157360:	c3                   	ret

```

```c
// CAdvanceAltarLog::getLevel @ 0x8157336

/* CAdvanceAltarLog::getLevel(long long) */

undefined8 __thiscall CAdvanceAltarLog::getLevel(CAdvanceAltarLog *this,longlong param_1)

{
  uint uVar1;
  
  uVar1 = (int)param_1 << 0x10 | (uint)this >> 0x10;
  return CONCAT44((int)uVar1 >> 0x1f,(int)uVar1 >> 0x10);
}

```

---

## getType

```asm
// === 081572ea CAdvanceAltarLog::getType  [0x081572ea-0x815730d] ===
 81572ea:	55                   	push   %ebp
 81572eb:	89 e5                	mov    %esp,%ebp
 81572ed:	83 ec 08             	sub    $0x8,%esp
 81572f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81572f3:	89 45 f8             	mov    %eax,-0x8(%ebp)
 81572f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81572f9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81572fc:	8b 45 f8             	mov    -0x8(%ebp),%eax
 81572ff:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8157302:	89 d0                	mov    %edx,%eax
 8157304:	89 c2                	mov    %eax,%edx
 8157306:	c1 fa 1f             	sar    $0x1f,%edx
 8157309:	c1 f8 10             	sar    $0x10,%eax
 815730c:	c9                   	leave
 815730d:	c3                   	ret

```

```c
// CAdvanceAltarLog::getType @ 0x81572ea

/* CAdvanceAltarLog::getType(long long) */

undefined8 __thiscall CAdvanceAltarLog::getType(CAdvanceAltarLog *this,longlong param_1)

{
  return CONCAT44((int)param_1 >> 0x1f,(int)param_1 >> 0x10);
}

```

---

## incrementEntranceData

```asm
// === 08156c30 CAdvanceAltarLog::incrementEntranceData  [0x08156c30-0x8156d5f] ===
 8156c30:	55                   	push   %ebp
 8156c31:	89 e5                	mov    %esp,%ebp
 8156c33:	56                   	push   %esi
 8156c34:	53                   	push   %ebx
 8156c35:	83 ec 30             	sub    $0x30,%esp
 8156c38:	8b 45 08             	mov    0x8(%ebp),%eax
 8156c3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156c3f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156c42:	89 04 24             	mov    %eax,(%esp)
 8156c45:	e8 02 e8 fa ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8156c4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8156c4d:	8d 48 18             	lea    0x18(%eax),%ecx
 8156c50:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156c53:	8d 55 0c             	lea    0xc(%ebp),%edx
 8156c56:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156c5a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8156c5e:	89 04 24             	mov    %eax,(%esp)
 8156c61:	e8 bc 0a 00 00       	call   8157722 <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 8156c66:	83 ec 04             	sub    $0x4,%esp
 8156c69:	8b 45 08             	mov    0x8(%ebp),%eax
 8156c6c:	8d 50 18             	lea    0x18(%eax),%edx
 8156c6f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156c76:	89 04 24             	mov    %eax,(%esp)
 8156c79:	e8 d0 0a 00 00       	call   815774e <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8156c7e:	83 ec 04             	sub    $0x4,%esp
 8156c81:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156c84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156c88:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156c8b:	89 04 24             	mov    %eax,(%esp)
 8156c8e:	e8 e1 0a 00 00       	call   8157774 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEeqERKS4_>
 8156c93:	84 c0                	test   %al,%al
 8156c95:	74 5a                	je     8156cf1 <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj+0xc1>
 8156c97:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8156c9a:	89 04 24             	mov    %eax,(%esp)
 8156c9d:	e8 1c 07 00 00       	call   81573be <_ZN26STAdvanceAltarEntranceDataC1Ev>
 8156ca2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8156ca5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8156ca8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8156cab:	03 45 10             	add    0x10(%ebp),%eax
 8156cae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8156cb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8156cb4:	03 45 14             	add    0x14(%ebp),%eax
 8156cb7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8156cba:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8156cbd:	03 45 18             	add    0x18(%ebp),%eax
 8156cc0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8156cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8156cc6:	8d 50 18             	lea    0x18(%eax),%edx
 8156cc9:	8d 45 0c             	lea    0xc(%ebp),%eax
 8156ccc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156cd0:	89 14 24             	mov    %edx,(%esp)
 8156cd3:	e8 b0 0a 00 00       	call   8157788 <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEEixERS4_>
 8156cd8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8156cdb:	89 10                	mov    %edx,(%eax)
 8156cdd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8156ce0:	89 50 04             	mov    %edx,0x4(%eax)
 8156ce3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8156ce6:	89 50 08             	mov    %edx,0x8(%eax)
 8156ce9:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8156cec:	89 50 0c             	mov    %edx,0xc(%eax)
 8156cef:	eb 59                	jmp    8156d4a <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj+0x11a>
 8156cf1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156cf4:	89 04 24             	mov    %eax,(%esp)
 8156cf7:	e8 86 0b 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8156cfc:	8b 50 08             	mov    0x8(%eax),%edx
 8156cff:	03 55 10             	add    0x10(%ebp),%edx
 8156d02:	89 50 08             	mov    %edx,0x8(%eax)
 8156d05:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156d08:	89 04 24             	mov    %eax,(%esp)
 8156d0b:	e8 72 0b 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8156d10:	8b 50 0c             	mov    0xc(%eax),%edx
 8156d13:	03 55 14             	add    0x14(%ebp),%edx
 8156d16:	89 50 0c             	mov    %edx,0xc(%eax)
 8156d19:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8156d1c:	89 04 24             	mov    %eax,(%esp)
 8156d1f:	e8 5e 0b 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8156d24:	8b 50 10             	mov    0x10(%eax),%edx
 8156d27:	03 55 18             	add    0x18(%ebp),%edx
 8156d2a:	89 50 10             	mov    %edx,0x10(%eax)
 8156d2d:	eb 1b                	jmp    8156d4a <_ZN16CAdvanceAltarLog21incrementEntranceDataEjjjj+0x11a>
 8156d2f:	89 d3                	mov    %edx,%ebx
 8156d31:	89 c6                	mov    %eax,%esi
 8156d33:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156d36:	89 04 24             	mov    %eax,(%esp)
 8156d39:	e8 2a e7 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156d3e:	89 f0                	mov    %esi,%eax
 8156d40:	89 da                	mov    %ebx,%edx
 8156d42:	89 04 24             	mov    %eax,(%esp)
 8156d45:	e8 06 ca 98 00       	call   8ae3750 <_Unwind_Resume>
 8156d4a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156d4d:	89 04 24             	mov    %eax,(%esp)
 8156d50:	e8 13 e7 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156d55:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8156d58:	83 c4 00             	add    $0x0,%esp
 8156d5b:	5b                   	pop    %ebx
 8156d5c:	5e                   	pop    %esi
 8156d5d:	5d                   	pop    %ebp
 8156d5e:	c3                   	ret
 8156d5f:	90                   	nop

```

```c
// CAdvanceAltarLog::incrementEntranceData @ 0x8156c30

/* CAdvanceAltarLog::incrementEntranceData(unsigned int, unsigned int, unsigned int, unsigned int)
    */

void __thiscall
CAdvanceAltarLog::incrementEntranceData
          (CAdvanceAltarLog *this,uint param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>> local_18 [4];
  Guard<Mutex> local_14 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
                    /* try { // try from 08156c61 to 08156cd7 has its CatchHandler @ 08156d2f */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
          operator==(local_18,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 8) = *(int *)(iVar3 + 8) + param_2;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + param_3;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator->(local_18);
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_4;
  }
  else {
    STAdvanceAltarEntranceData::STAdvanceAltarEntranceData((STAdvanceAltarEntranceData *)&local_28);
    local_28 = param_1;
    local_24 = local_24 + param_2;
    local_20 = local_20 + param_3;
    local_1c = local_1c + param_4;
    puVar2 = (uint *)std::
                     map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                     ::operator[]((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                                   *)(this + 0x18),&param_1);
    *puVar2 = local_28;
    puVar2[1] = local_24;
    puVar2[2] = local_20;
    puVar2[3] = local_1c;
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}

```

---

## incrementLayerStatData

```asm
// === 08156d60 CAdvanceAltarLog::incrementLayerStatData  [0x08156d60-0x8156ed1] ===
 8156d60:	55                   	push   %ebp
 8156d61:	89 e5                	mov    %esp,%ebp
 8156d63:	56                   	push   %esi
 8156d64:	53                   	push   %ebx
 8156d65:	83 ec 50             	sub    $0x50,%esp
 8156d68:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8156d6b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8156d6e:	8b 55 18             	mov    0x18(%ebp),%edx
 8156d71:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8156d74:	66 89 5d c4          	mov    %bx,-0x3c(%ebp)
 8156d78:	66 89 4d c0          	mov    %cx,-0x40(%ebp)
 8156d7c:	66 89 55 bc          	mov    %dx,-0x44(%ebp)
 8156d80:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 8156d84:	8b 45 08             	mov    0x8(%ebp),%eax
 8156d87:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156d8b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156d8e:	89 04 24             	mov    %eax,(%esp)
 8156d91:	e8 b6 e6 fa ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8156d96:	0f b7 55 c0          	movzwl -0x40(%ebp),%edx
 8156d9a:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 8156d9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156da2:	8b 55 10             	mov    0x10(%ebp),%edx
 8156da5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156da9:	89 04 24             	mov    %eax,(%esp)
 8156dac:	e8 e7 04 00 00       	call   8157298 <_ZN16CAdvanceAltarLog7makeKeyEtjt>
 8156db1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8156db4:	89 55 ec             	mov    %edx,-0x14(%ebp)
 8156db7:	8b 45 08             	mov    0x8(%ebp),%eax
 8156dba:	8d 48 30             	lea    0x30(%eax),%ecx
 8156dbd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156dc0:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8156dc3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8156dc7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8156dcb:	89 04 24             	mov    %eax,(%esp)
 8156dce:	e8 bd 0a 00 00       	call   8157890 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE4findERS4_>
 8156dd3:	83 ec 04             	sub    $0x4,%esp
 8156dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8156dd9:	8d 50 30             	lea    0x30(%eax),%edx
 8156ddc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156ddf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156de3:	89 04 24             	mov    %eax,(%esp)
 8156de6:	e8 d1 0a 00 00       	call   81578bc <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE3endEv>
 8156deb:	83 ec 04             	sub    $0x4,%esp
 8156dee:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156df1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156df5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156df8:	89 04 24             	mov    %eax,(%esp)
 8156dfb:	e8 e2 0a 00 00       	call   81578e2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEeqERKS4_>
 8156e00:	84 c0                	test   %al,%al
 8156e02:	74 6e                	je     8156e72 <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt+0x112>
 8156e04:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8156e07:	89 04 24             	mov    %eax,(%esp)
 8156e0a:	e8 db 05 00 00       	call   81573ea <_ZN27STAdvanceAltarLayerStatDataC1Ev>
 8156e0f:	0f b7 45 c4          	movzwl -0x3c(%ebp),%eax
 8156e13:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 8156e17:	8b 45 10             	mov    0x10(%ebp),%eax
 8156e1a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8156e1d:	0f b7 45 c0          	movzwl -0x40(%ebp),%eax
 8156e21:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 8156e25:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 8156e29:	66 03 45 bc          	add    -0x44(%ebp),%ax
 8156e2d:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 8156e31:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 8156e35:	66 03 45 b8          	add    -0x48(%ebp),%ax
 8156e39:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8156e3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8156e40:	8d 50 30             	lea    0x30(%eax),%edx
 8156e43:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8156e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156e4a:	89 14 24             	mov    %edx,(%esp)
 8156e4d:	e8 a4 0a 00 00       	call   81578f6 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEEixERS4_>
 8156e52:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8156e55:	39 d0                	cmp    %edx,%eax
 8156e57:	74 64                	je     8156ebd <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt+0x15d>
 8156e59:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8156e60:	00 
 8156e61:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8156e64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156e68:	89 04 24             	mov    %eax,(%esp)
 8156e6b:	e8 30 6a f2 ff       	call   807d8a0 <memcpy@plt>
 8156e70:	eb 4b                	jmp    8156ebd <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt+0x15d>
 8156e72:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156e75:	89 04 24             	mov    %eax,(%esp)
 8156e78:	e8 73 0b 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 8156e7d:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 8156e81:	66 03 55 bc          	add    -0x44(%ebp),%dx
 8156e85:	66 89 50 12          	mov    %dx,0x12(%eax)
 8156e89:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8156e8c:	89 04 24             	mov    %eax,(%esp)
 8156e8f:	e8 5c 0b 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 8156e94:	0f b7 50 14          	movzwl 0x14(%eax),%edx
 8156e98:	66 03 55 b8          	add    -0x48(%ebp),%dx
 8156e9c:	66 89 50 14          	mov    %dx,0x14(%eax)
 8156ea0:	eb 1b                	jmp    8156ebd <_ZN16CAdvanceAltarLog22incrementLayerStatDataEtjttt+0x15d>
 8156ea2:	89 d3                	mov    %edx,%ebx
 8156ea4:	89 c6                	mov    %eax,%esi
 8156ea6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156ea9:	89 04 24             	mov    %eax,(%esp)
 8156eac:	e8 b7 e5 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156eb1:	89 f0                	mov    %esi,%eax
 8156eb3:	89 da                	mov    %ebx,%edx
 8156eb5:	89 04 24             	mov    %eax,(%esp)
 8156eb8:	e8 93 c8 98 00       	call   8ae3750 <_Unwind_Resume>
 8156ebd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8156ec0:	89 04 24             	mov    %eax,(%esp)
 8156ec3:	e8 a0 e5 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156ec8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8156ecb:	83 c4 00             	add    $0x0,%esp
 8156ece:	5b                   	pop    %ebx
 8156ecf:	5e                   	pop    %esi
 8156ed0:	5d                   	pop    %ebp
 8156ed1:	c3                   	ret

```

```c
// CAdvanceAltarLog::incrementLayerStatData @ 0x8156d60

/* CAdvanceAltarLog::incrementLayerStatData(unsigned short, unsigned int, unsigned short, unsigned
   short, unsigned short) */

void __thiscall
CAdvanceAltarLog::incrementLayerStatData
          (CAdvanceAltarLog *this,ushort param_1,uint param_2,ushort param_3,ushort param_4,
          ushort param_5)

{
  char cVar1;
  ushort *__dest;
  int iVar2;
  ushort local_30 [2];
  uint local_2c;
  ushort local_28;
  short local_26;
  short local_24;
  _Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> local_20 [4];
  longlong local_1c;
  Guard<Mutex> local_14 [4];
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_10 [4];
  
  Guard<Mutex>::Guard(local_14,(Mutex *)this);
  local_1c = makeKey(param_1,param_2,param_3);
                    /* try { // try from 08156dce to 08156e51 has its CatchHandler @ 08156ea2 */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::find((longlong *)local_20);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::operator==
                    (local_20,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator->(local_20);
    *(ushort *)(iVar2 + 0x12) = *(short *)(iVar2 + 0x12) + param_4;
    iVar2 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator->(local_20);
    *(ushort *)(iVar2 + 0x14) = *(short *)(iVar2 + 0x14) + param_5;
  }
  else {
    STAdvanceAltarLayerStatData::STAdvanceAltarLayerStatData
              ((STAdvanceAltarLayerStatData *)local_30);
    local_2c = param_2;
    local_26 = local_26 + param_4;
    local_24 = local_24 + param_5;
    local_30[0] = param_1;
    local_28 = param_3;
    __dest = (ushort *)
             std::
             map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
             ::operator[]((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
                           *)(this + 0x30),&local_1c);
    if (__dest != local_30) {
      memcpy(__dest,local_30,0xe);
    }
  }
  Guard<Mutex>::~Guard(local_14);
  return;
}

```

---

## initStatistics

```asm
// === 08156bca CAdvanceAltarLog::initStatistics  [0x08156bca-0x8156c2f] ===
 8156bca:	55                   	push   %ebp
 8156bcb:	89 e5                	mov    %esp,%ebp
 8156bcd:	56                   	push   %esi
 8156bce:	53                   	push   %ebx
 8156bcf:	83 ec 20             	sub    $0x20,%esp
 8156bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8156bd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156bd9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156bdc:	89 04 24             	mov    %eax,(%esp)
 8156bdf:	e8 68 e8 fa ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8156be4:	8b 45 08             	mov    0x8(%ebp),%eax
 8156be7:	83 c0 18             	add    $0x18,%eax
 8156bea:	89 04 24             	mov    %eax,(%esp)
 8156bed:	e8 08 0b 00 00       	call   81576fa <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 8156bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8156bf5:	83 c0 30             	add    $0x30,%eax
 8156bf8:	89 04 24             	mov    %eax,(%esp)
 8156bfb:	e8 0e 0b 00 00       	call   815770e <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE5clearEv>
 8156c00:	eb 1b                	jmp    8156c1d <_ZN16CAdvanceAltarLog14initStatisticsEv+0x53>
 8156c02:	89 d3                	mov    %edx,%ebx
 8156c04:	89 c6                	mov    %eax,%esi
 8156c06:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156c09:	89 04 24             	mov    %eax,(%esp)
 8156c0c:	e8 57 e8 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156c11:	89 f0                	mov    %esi,%eax
 8156c13:	89 da                	mov    %ebx,%edx
 8156c15:	89 04 24             	mov    %eax,(%esp)
 8156c18:	e8 33 cb 98 00       	call   8ae3750 <_Unwind_Resume>
 8156c1d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8156c20:	89 04 24             	mov    %eax,(%esp)
 8156c23:	e8 40 e8 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8156c28:	83 c4 20             	add    $0x20,%esp
 8156c2b:	5b                   	pop    %ebx
 8156c2c:	5e                   	pop    %esi
 8156c2d:	5d                   	pop    %ebp
 8156c2e:	c3                   	ret
 8156c2f:	90                   	nop

```

```c
// CAdvanceAltarLog::initStatistics @ 0x8156bca

/* CAdvanceAltarLog::initStatistics() */

void __thiscall CAdvanceAltarLog::initStatistics(CAdvanceAltarLog *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 08156bed to 08156bff has its CatchHandler @ 08156c02 */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::clear((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
           *)(this + 0x18));
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::clear((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
           *)(this + 0x30));
  Guard<Mutex>::~Guard(local_10);
  return;
}

```

---

## makeKey

```asm
// === 08157298 CAdvanceAltarLog::makeKey  [0x08157298-0x81572e9] ===
 8157298:	55                   	push   %ebp
 8157299:	89 e5                	mov    %esp,%ebp
 815729b:	57                   	push   %edi
 815729c:	56                   	push   %esi
 815729d:	53                   	push   %ebx
 815729e:	83 ec 08             	sub    $0x8,%esp
 81572a1:	8b 55 08             	mov    0x8(%ebp),%edx
 81572a4:	8b 45 10             	mov    0x10(%ebp),%eax
 81572a7:	66 89 55 f0          	mov    %dx,-0x10(%ebp)
 81572ab:	66 89 45 ec          	mov    %ax,-0x14(%ebp)
 81572af:	0f b7 45 f0          	movzwl -0x10(%ebp),%eax
 81572b3:	89 c2                	mov    %eax,%edx
 81572b5:	c1 e2 10             	shl    $0x10,%edx
 81572b8:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 81572bc:	09 d0                	or     %edx,%eax
 81572be:	89 c2                	mov    %eax,%edx
 81572c0:	c1 fa 1f             	sar    $0x1f,%edx
 81572c3:	89 c1                	mov    %eax,%ecx
 81572c5:	89 d3                	mov    %edx,%ebx
 81572c7:	89 cb                	mov    %ecx,%ebx
 81572c9:	b9 00 00 00 00       	mov    $0x0,%ecx
 81572ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81572d1:	ba 00 00 00 00       	mov    $0x0,%edx
 81572d6:	89 ce                	mov    %ecx,%esi
 81572d8:	09 c6                	or     %eax,%esi
 81572da:	89 df                	mov    %ebx,%edi
 81572dc:	09 d7                	or     %edx,%edi
 81572de:	89 f0                	mov    %esi,%eax
 81572e0:	89 fa                	mov    %edi,%edx
 81572e2:	83 c4 08             	add    $0x8,%esp
 81572e5:	5b                   	pop    %ebx
 81572e6:	5e                   	pop    %esi
 81572e7:	5f                   	pop    %edi
 81572e8:	5d                   	pop    %ebp
 81572e9:	c3                   	ret

```

```c
// CAdvanceAltarLog::makeKey @ 0x8157298

/* CAdvanceAltarLog::makeKey(unsigned short, unsigned int, unsigned short) */

undefined8 CAdvanceAltarLog::makeKey(ushort param_1,uint param_2,ushort param_3)

{
  return CONCAT44(CONCAT22(param_1,param_3),param_2);
}

```

---

## updateDatabase

```asm
// === 08156ed2 CAdvanceAltarLog::updateDatabase  [0x08156ed2-0x8157297] ===
 8156ed2:	55                   	push   %ebp
 8156ed3:	89 e5                	mov    %esp,%ebp
 8156ed5:	57                   	push   %edi
 8156ed6:	56                   	push   %esi
 8156ed7:	53                   	push   %ebx
 8156ed8:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 8156ede:	8b 45 08             	mov    0x8(%ebp),%eax
 8156ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156ee5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8156ee8:	89 04 24             	mov    %eax,(%esp)
 8156eeb:	e8 5c e5 fa ff       	call   810544c <_ZN5GuardI5MutexEC1EPS0_>
 8156ef0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8156ef5:	c7 44 24 08 e5 00 00 	movl   $0xe5,0x8(%esp)
 8156efc:	00 
 8156efd:	c7 44 24 04 80 5f b7 	movl   $0x8b75f80,0x4(%esp)
 8156f04:	08 
 8156f05:	89 04 24             	mov    %eax,(%esp)
 8156f08:	e8 79 8b 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8156f0d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8156f14:	00 
 8156f15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156f19:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8156f1c:	89 04 24             	mov    %eax,(%esp)
 8156f1f:	e8 02 1d f7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8156f24:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8156f27:	89 04 24             	mov    %eax,(%esp)
 8156f2a:	e8 17 1d f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8156f2f:	c7 44 24 04 3b 03 00 	movl   $0x33b,0x4(%esp)
 8156f36:	00 
 8156f37:	89 04 24             	mov    %eax,(%esp)
 8156f3a:	e8 17 1d f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8156f3f:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8156f42:	89 04 24             	mov    %eax,(%esp)
 8156f45:	e8 fc 1c f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8156f4a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8156f51:	ff 
 8156f52:	89 04 24             	mov    %eax,(%esp)
 8156f55:	e8 fc 1c f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8156f5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8156f5d:	83 c0 18             	add    $0x18,%eax
 8156f60:	89 04 24             	mov    %eax,(%esp)
 8156f63:	e8 96 0a 00 00       	call   81579fe <_ZNKSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE4sizeEv>
 8156f68:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8156f6b:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8156f6e:	89 04 24             	mov    %eax,(%esp)
 8156f71:	e8 d0 1c f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8156f76:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8156f79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156f7d:	89 04 24             	mov    %eax,(%esp)
 8156f80:	e8 d1 1c f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8156f85:	8b 45 08             	mov    0x8(%ebp),%eax
 8156f88:	8d 50 18             	lea    0x18(%eax),%edx
 8156f8b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8156f8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156f92:	89 04 24             	mov    %eax,(%esp)
 8156f95:	e8 78 0a 00 00       	call   8157a12 <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 8156f9a:	83 ec 04             	sub    $0x4,%esp
 8156f9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8156fa0:	8d 50 18             	lea    0x18(%eax),%edx
 8156fa3:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8156fa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8156faa:	89 04 24             	mov    %eax,(%esp)
 8156fad:	e8 9c 07 00 00       	call   815774e <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 8156fb2:	83 ec 04             	sub    $0x4,%esp
 8156fb5:	e9 ca 00 00 00       	jmp    8157084 <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x1b2>
 8156fba:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8156fbd:	89 04 24             	mov    %eax,(%esp)
 8156fc0:	e8 89 1c f7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8156fc5:	89 04 24             	mov    %eax,(%esp)
 8156fc8:	e8 9d 0a 00 00       	call   8157a6a <_ZN12CStreamGuard11GetInBufferI26STAdvanceAltarEntranceDataEEPT_v>
 8156fcd:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8156fd0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8156fd3:	89 04 24             	mov    %eax,(%esp)
 8156fd6:	e8 a7 08 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8156fdb:	83 c0 04             	add    $0x4,%eax
 8156fde:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8156fe5:	00 
 8156fe6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8156fea:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8156fed:	89 04 24             	mov    %eax,(%esp)
 8156ff0:	e8 ab 68 f2 ff       	call   807d8a0 <memcpy@plt>
 8156ff5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8156ff8:	89 04 24             	mov    %eax,(%esp)
 8156ffb:	e8 82 08 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8157000:	8b 40 10             	mov    0x10(%eax),%eax
 8157003:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8157006:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8157009:	89 04 24             	mov    %eax,(%esp)
 815700c:	e8 71 08 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 8157011:	8b 78 0c             	mov    0xc(%eax),%edi
 8157014:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8157017:	89 04 24             	mov    %eax,(%esp)
 815701a:	e8 63 08 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 815701f:	8b 70 08             	mov    0x8(%eax),%esi
 8157022:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8157025:	89 04 24             	mov    %eax,(%esp)
 8157028:	e8 55 08 00 00       	call   8157882 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEptEv>
 815702d:	8b 58 04             	mov    0x4(%eax),%ebx
 8157030:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8157037:	00 
 8157038:	c7 44 24 08 f4 00 00 	movl   $0xf4,0x8(%esp)
 815703f:	00 
 8157040:	c7 44 24 04 40 6c b7 	movl   $0x8b76c40,0x4(%esp)
 8157047:	08 
 8157048:	8d 45 b8             	lea    -0x48(%ebp),%eax
 815704b:	89 04 24             	mov    %eax,(%esp)
 815704e:	e8 c5 86 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8157053:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8157056:	89 44 24 14          	mov    %eax,0x14(%esp)
 815705a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 815705e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8157062:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8157066:	c7 44 24 04 a4 5f b7 	movl   $0x8b75fa4,0x4(%esp)
 815706d:	08 
 815706e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8157071:	89 04 24             	mov    %eax,(%esp)
 8157074:	e8 0f 87 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8157079:	8d 45 a8             	lea    -0x58(%ebp),%eax
 815707c:	89 04 24             	mov    %eax,(%esp)
 815707f:	e8 c8 09 00 00       	call   8157a4c <_ZNSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEppEv>
 8157084:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8157087:	89 44 24 04          	mov    %eax,0x4(%esp)
 815708b:	8d 45 a8             	lea    -0x58(%ebp),%eax
 815708e:	89 04 24             	mov    %eax,(%esp)
 8157091:	e8 a2 09 00 00       	call   8157a38 <_ZNKSt17_Rb_tree_iteratorISt4pairIKj26STAdvanceAltarEntranceDataEEneERKS4_>
 8157096:	84 c0                	test   %al,%al
 8157098:	0f 85 1c ff ff ff    	jne    8156fba <_ZN16CAdvanceAltarLog14updateDatabaseEv+0xe8>
 815709e:	8b 45 08             	mov    0x8(%ebp),%eax
 81570a1:	83 c0 18             	add    $0x18,%eax
 81570a4:	89 04 24             	mov    %eax,(%esp)
 81570a7:	e8 4e 06 00 00       	call   81576fa <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 81570ac:	8b 45 08             	mov    0x8(%ebp),%eax
 81570af:	83 c0 30             	add    $0x30,%eax
 81570b2:	89 04 24             	mov    %eax,(%esp)
 81570b5:	e8 c6 09 00 00       	call   8157a80 <_ZNKSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE4sizeEv>
 81570ba:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81570bd:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81570c0:	89 04 24             	mov    %eax,(%esp)
 81570c3:	e8 7e 1b f7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81570c8:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81570cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 81570cf:	89 04 24             	mov    %eax,(%esp)
 81570d2:	e8 7f 1b f7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81570d7:	8b 45 08             	mov    0x8(%ebp),%eax
 81570da:	8d 50 30             	lea    0x30(%eax),%edx
 81570dd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81570e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81570e4:	89 04 24             	mov    %eax,(%esp)
 81570e7:	e8 a8 09 00 00       	call   8157a94 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE5beginEv>
 81570ec:	83 ec 04             	sub    $0x4,%esp
 81570ef:	8b 45 08             	mov    0x8(%ebp),%eax
 81570f2:	8d 50 30             	lea    0x30(%eax),%edx
 81570f5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81570f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81570fc:	89 04 24             	mov    %eax,(%esp)
 81570ff:	e8 b8 07 00 00       	call   81578bc <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE3endEv>
 8157104:	83 ec 04             	sub    $0x4,%esp
 8157107:	e9 f2 00 00 00       	jmp    81571fe <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x32c>
 815710c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 815710f:	89 04 24             	mov    %eax,(%esp)
 8157112:	e8 37 1b f7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8157117:	89 04 24             	mov    %eax,(%esp)
 815711a:	e8 cd 09 00 00       	call   8157aec <_ZN12CStreamGuard11GetInBufferI27STAdvanceAltarLayerStatDataEEPT_v>
 815711f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8157122:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8157125:	89 04 24             	mov    %eax,(%esp)
 8157128:	e8 c3 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 815712d:	83 c0 08             	add    $0x8,%eax
 8157130:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8157137:	00 
 8157138:	89 44 24 04          	mov    %eax,0x4(%esp)
 815713c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 815713f:	89 04 24             	mov    %eax,(%esp)
 8157142:	e8 59 67 f2 ff       	call   807d8a0 <memcpy@plt>
 8157147:	8d 45 a0             	lea    -0x60(%ebp),%eax
 815714a:	89 04 24             	mov    %eax,(%esp)
 815714d:	e8 9e 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 8157152:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 8157156:	0f b7 c0             	movzwl %ax,%eax
 8157159:	89 45 90             	mov    %eax,-0x70(%ebp)
 815715c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 815715f:	89 04 24             	mov    %eax,(%esp)
 8157162:	e8 89 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 8157167:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 815716b:	0f b7 c0             	movzwl %ax,%eax
 815716e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8157171:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8157174:	89 04 24             	mov    %eax,(%esp)
 8157177:	e8 74 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 815717c:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 8157180:	0f b7 f8             	movzwl %ax,%edi
 8157183:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8157186:	89 04 24             	mov    %eax,(%esp)
 8157189:	e8 62 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 815718e:	8b 70 0c             	mov    0xc(%eax),%esi
 8157191:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8157194:	89 04 24             	mov    %eax,(%esp)
 8157197:	e8 54 08 00 00       	call   81579f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEptEv>
 815719c:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81571a0:	0f b7 d8             	movzwl %ax,%ebx
 81571a3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81571aa:	00 
 81571ab:	c7 44 24 08 06 01 00 	movl   $0x106,0x8(%esp)
 81571b2:	00 
 81571b3:	c7 44 24 04 40 6c b7 	movl   $0x8b76c40,0x4(%esp)
 81571ba:	08 
 81571bb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81571be:	89 04 24             	mov    %eax,(%esp)
 81571c1:	e8 52 85 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81571c6:	8b 45 90             	mov    -0x70(%ebp),%eax
 81571c9:	89 44 24 18          	mov    %eax,0x18(%esp)
 81571cd:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81571d0:	89 44 24 14          	mov    %eax,0x14(%esp)
 81571d4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81571d8:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81571dc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81571e0:	c7 44 24 04 f0 5f b7 	movl   $0x8b75ff0,0x4(%esp)
 81571e7:	08 
 81571e8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81571eb:	89 04 24             	mov    %eax,(%esp)
 81571ee:	e8 95 85 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81571f3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81571f6:	89 04 24             	mov    %eax,(%esp)
 81571f9:	e8 d0 08 00 00       	call   8157ace <_ZNSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEppEv>
 81571fe:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8157201:	89 44 24 04          	mov    %eax,0x4(%esp)
 8157205:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8157208:	89 04 24             	mov    %eax,(%esp)
 815720b:	e8 aa 08 00 00       	call   8157aba <_ZNKSt17_Rb_tree_iteratorISt4pairIKx27STAdvanceAltarLayerStatDataEEneERKS4_>
 8157210:	84 c0                	test   %al,%al
 8157212:	0f 85 f4 fe ff ff    	jne    815710c <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x23a>
 8157218:	8b 45 08             	mov    0x8(%ebp),%eax
 815721b:	83 c0 30             	add    $0x30,%eax
 815721e:	89 04 24             	mov    %eax,(%esp)
 8157221:	e8 e8 04 00 00       	call   815770e <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEE5clearEv>
 8157226:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815722b:	8d 55 ac             	lea    -0x54(%ebp),%edx
 815722e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8157232:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8157239:	00 
 815723a:	89 04 24             	mov    %eax,(%esp)
 815723d:	e8 9c 9d 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8157242:	eb 15                	jmp    8157259 <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x387>
 8157244:	89 d3                	mov    %edx,%ebx
 8157246:	89 c6                	mov    %eax,%esi
 8157248:	8d 45 ac             	lea    -0x54(%ebp),%eax
 815724b:	89 04 24             	mov    %eax,(%esp)
 815724e:	e8 7f 56 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8157253:	89 f0                	mov    %esi,%eax
 8157255:	89 da                	mov    %ebx,%edx
 8157257:	eb 0d                	jmp    8157266 <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x394>
 8157259:	8d 45 ac             	lea    -0x54(%ebp),%eax
 815725c:	89 04 24             	mov    %eax,(%esp)
 815725f:	e8 6e 56 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8157264:	eb 1b                	jmp    8157281 <_ZN16CAdvanceAltarLog14updateDatabaseEv+0x3af>
 8157266:	89 d3                	mov    %edx,%ebx
 8157268:	89 c6                	mov    %eax,%esi
 815726a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 815726d:	89 04 24             	mov    %eax,(%esp)
 8157270:	e8 f3 e1 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 8157275:	89 f0                	mov    %esi,%eax
 8157277:	89 da                	mov    %ebx,%edx
 8157279:	89 04 24             	mov    %eax,(%esp)
 815727c:	e8 cf c4 98 00       	call   8ae3750 <_Unwind_Resume>
 8157281:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8157284:	89 04 24             	mov    %eax,(%esp)
 8157287:	e8 dc e1 fa ff       	call   8105468 <_ZN5GuardI5MutexED1Ev>
 815728c:	8d 65 f4             	lea    -0xc(%ebp),%esp
 815728f:	83 c4 00             	add    $0x0,%esp
 8157292:	5b                   	pop    %ebx
 8157293:	5e                   	pop    %esi
 8157294:	5f                   	pop    %edi
 8157295:	5d                   	pop    %ebp
 8157296:	c3                   	ret
 8157297:	90                   	nop

```

```c
// CAdvanceAltarLog::updateDatabase @ 0x8156ed2

/* CAdvanceAltarLog::updateDatabase() */

void __thiscall CAdvanceAltarLog::updateDatabase(CAdvanceAltarLog *this)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  Stream *pSVar10;
  CStreamGuard *pCVar11;
  int iVar12;
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_68 [4];
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  local_64 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_60 [4];
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  local_5c [4];
  CStreamGuard local_58 [8];
  Guard<Mutex> local_50 [4];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  STAdvanceAltarEntranceData *local_24;
  STAdvanceAltarLayerStatData *local_20;
  
  Guard<Mutex>::Guard(local_50,(Mutex *)this);
                    /* try { // try from 08156f08 to 08156f0c has its CatchHandler @ 08157266 */
  pSVar10 = (Stream *)
            StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_Statistics.cpp",0xe5);
  CStreamGuard::CStreamGuard(local_58,pSVar10,true);
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
                    /* try { // try from 08156f3a to 08157241 has its CatchHandler @ 08157244 */
  CStreamGuard::operator<<(pCVar11,0x33b);
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,-1);
  local_2c = std::
             map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
             ::size((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
                     *)(this + 0x18));
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,local_2c);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::begin(local_5c);
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::end(local_60);
  while( true ) {
    cVar9 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                        *)local_5c,(_Rb_tree_iterator *)local_60);
    if (cVar9 == '\0') break;
    pCVar11 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_24 = CStreamGuard::GetInBuffer<STAdvanceAltarEntranceData>(pCVar11);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    memcpy(local_24,(void *)(iVar12 + 4),0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar8 = *(undefined4 *)(iVar12 + 0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar5 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar6 = *(undefined4 *)(iVar12 + 8);
    iVar12 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::
             operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>
                         *)local_5c);
    uVar7 = *(undefined4 *)(iVar12 + 4);
    cMyTrace::cMyTrace(local_4c,"void CAdvanceAltarLog::updateDatabase()",0xf4,0);
    cMyTrace::operator()
              (local_4c,
               "[AdvanceAltar] stageIndex:%d, enterCount:%d, successCount:%d, obtainStar:%d",uVar7,
               uVar6,uVar5,uVar8);
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>> *)
               local_5c);
  }
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::clear((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
           *)(this + 0x18));
  local_28 = std::
             map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
             ::size((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
                     *)(this + 0x30));
  pCVar11 = (CStreamGuard *)CStreamGuard::operator*(local_58);
  CStreamGuard::operator<<(pCVar11,local_28);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::begin(local_64);
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::end(local_68);
  while( true ) {
    cVar9 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
            operator!=((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *)
                       local_64,(_Rb_tree_iterator *)local_68);
    if (cVar9 == '\0') break;
    pCVar11 = (CStreamGuard *)CStreamGuard::operator->(local_58);
    local_20 = CStreamGuard::GetInBuffer<STAdvanceAltarLayerStatData>(pCVar11);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    memcpy(local_20,(void *)(iVar12 + 8),0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar1 = *(ushort *)(iVar12 + 0x14);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar2 = *(ushort *)(iVar12 + 0x12);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar3 = *(ushort *)(iVar12 + 0x10);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar8 = *(undefined4 *)(iVar12 + 0xc);
    iVar12 = std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::
             operator->((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *
                        )local_64);
    uVar4 = *(ushort *)(iVar12 + 8);
    cMyTrace::cMyTrace(local_3c,"void CAdvanceAltarLog::updateDatabase()",0x106,0);
    cMyTrace::operator()
              (local_3c,
               "[AdvanceAltar] itemType:%u, itemIndex:%u, itemLevel:%u, useCount:%u, useStar:%u",
               (uint)uVar4,uVar8,(uint)uVar3,(uint)uVar2,(uint)uVar1);
    std::_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>::operator++
              ((_Rb_tree_iterator<std::pair<long_long_const,STAdvanceAltarLayerStatData>> *)local_64
              );
  }
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::clear((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
           *)(this + 0x30));
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_58);
                    /* try { // try from 0815725f to 08157263 has its CatchHandler @ 08157266 */
  CStreamGuard::~CStreamGuard(local_58);
  Guard<Mutex>::~Guard(local_50);
  return;
}

```

---

## ~CAdvanceAltarLog

```asm
// === 08156b38 CAdvanceAltarLog::~CAdvanceAltarLog  [0x08156b38-0x8156bc9] ===
 8156b38:	55                   	push   %ebp
 8156b39:	89 e5                	mov    %esp,%ebp
 8156b3b:	56                   	push   %esi
 8156b3c:	53                   	push   %ebx
 8156b3d:	83 ec 10             	sub    $0x10,%esp
 8156b40:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b43:	89 04 24             	mov    %eax,(%esp)
 8156b46:	e8 7f 00 00 00       	call   8156bca <_ZN16CAdvanceAltarLog14initStatisticsEv>
 8156b4b:	eb 18                	jmp    8156b65 <_ZN16CAdvanceAltarLogD1Ev+0x2d>
 8156b4d:	89 d3                	mov    %edx,%ebx
 8156b4f:	89 c6                	mov    %eax,%esi
 8156b51:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b54:	83 c0 30             	add    $0x30,%eax
 8156b57:	89 04 24             	mov    %eax,(%esp)
 8156b5a:	e8 f1 08 00 00       	call   8157450 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEED1Ev>
 8156b5f:	89 f0                	mov    %esi,%eax
 8156b61:	89 da                	mov    %ebx,%edx
 8156b63:	eb 10                	jmp    8156b75 <_ZN16CAdvanceAltarLogD1Ev+0x3d>
 8156b65:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b68:	83 c0 30             	add    $0x30,%eax
 8156b6b:	89 04 24             	mov    %eax,(%esp)
 8156b6e:	e8 dd 08 00 00       	call   8157450 <_ZNSt3mapIx27STAdvanceAltarLayerStatDataSt4lessIxESaISt4pairIKxS0_EEED1Ev>
 8156b73:	eb 18                	jmp    8156b8d <_ZN16CAdvanceAltarLogD1Ev+0x55>
 8156b75:	89 d3                	mov    %edx,%ebx
 8156b77:	89 c6                	mov    %eax,%esi
 8156b79:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b7c:	83 c0 18             	add    $0x18,%eax
 8156b7f:	89 04 24             	mov    %eax,(%esp)
 8156b82:	e8 b5 08 00 00       	call   815743c <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 8156b87:	89 f0                	mov    %esi,%eax
 8156b89:	89 da                	mov    %ebx,%edx
 8156b8b:	eb 10                	jmp    8156b9d <_ZN16CAdvanceAltarLogD1Ev+0x65>
 8156b8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8156b90:	83 c0 18             	add    $0x18,%eax
 8156b93:	89 04 24             	mov    %eax,(%esp)
 8156b96:	e8 a1 08 00 00       	call   815743c <_ZNSt3mapIj26STAdvanceAltarEntranceDataSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 8156b9b:	eb 1b                	jmp    8156bb8 <_ZN16CAdvanceAltarLogD1Ev+0x80>
 8156b9d:	89 d3                	mov    %edx,%ebx
 8156b9f:	89 c6                	mov    %eax,%esi
 8156ba1:	8b 45 08             	mov    0x8(%ebp),%eax
 8156ba4:	89 04 24             	mov    %eax,(%esp)
 8156ba7:	e8 82 48 f7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8156bac:	89 f0                	mov    %esi,%eax
 8156bae:	89 da                	mov    %ebx,%edx
 8156bb0:	89 04 24             	mov    %eax,(%esp)
 8156bb3:	e8 98 cb 98 00       	call   8ae3750 <_Unwind_Resume>
 8156bb8:	8b 45 08             	mov    0x8(%ebp),%eax
 8156bbb:	89 04 24             	mov    %eax,(%esp)
 8156bbe:	e8 6b 48 f7 ff       	call   80cb42e <_ZN5MutexD1Ev>
 8156bc3:	83 c4 10             	add    $0x10,%esp
 8156bc6:	5b                   	pop    %ebx
 8156bc7:	5e                   	pop    %esi
 8156bc8:	5d                   	pop    %ebp
 8156bc9:	c3                   	ret

```

```c
// CAdvanceAltarLog::~CAdvanceAltarLog @ 0x8156b38

/* CAdvanceAltarLog::~CAdvanceAltarLog() */

void __thiscall CAdvanceAltarLog::~CAdvanceAltarLog(CAdvanceAltarLog *this)

{
                    /* try { // try from 08156b46 to 08156b4a has its CatchHandler @ 08156b4d */
  initStatistics(this);
                    /* try { // try from 08156b6e to 08156b72 has its CatchHandler @ 08156b75 */
  std::
  map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
  ::~map((map<long_long,STAdvanceAltarLayerStatData,std::less<long_long>,std::allocator<std::pair<long_long_const,STAdvanceAltarLayerStatData>>>
          *)(this + 0x30));
                    /* try { // try from 08156b96 to 08156b9a has its CatchHandler @ 08156b9d */
  std::
  map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
  ::~map((map<unsigned_int,STAdvanceAltarEntranceData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STAdvanceAltarEntranceData>>>
          *)(this + 0x18));
  Mutex::~Mutex((Mutex *)this);
  return;
}

```


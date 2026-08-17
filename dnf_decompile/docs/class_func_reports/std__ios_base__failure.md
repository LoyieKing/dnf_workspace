# std__ios_base__failure

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## failure

```asm
// === 086da0e0 std::ios_base::failure::failure  [0x086da0e0-0x86da13f] ===
 86da0e0:	55                   	push   %ebp
 86da0e1:	89 e5                	mov    %esp,%ebp
 86da0e3:	53                   	push   %ebx
 86da0e4:	83 ec 24             	sub    $0x24,%esp
 86da0e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86da0ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 86da0ed:	c7 03 10 df cf 08    	movl   $0x8cfdf10,(%ebx)
 86da0f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86da0f7:	8d 43 04             	lea    0x4(%ebx),%eax
 86da0fa:	89 04 24             	mov    %eax,(%esp)
 86da0fd:	e8 ae d8 02 00       	call   87079b0 <_ZNSsC1ERKSs>
 86da102:	83 c4 24             	add    $0x24,%esp
 86da105:	5b                   	pop    %ebx
 86da106:	5d                   	pop    %ebp
 86da107:	c3                   	ret
 86da108:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86da10b:	89 55 f0             	mov    %edx,-0x10(%ebp)
 86da10e:	89 1c 24             	mov    %ebx,(%esp)
 86da111:	e8 6a af 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86da116:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86da119:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86da11c:	83 fa ff             	cmp    $0xffffffff,%edx
 86da11f:	74 08                	je     86da129 <_ZNSt8ios_base7failureC1ERKSs+0x49>
 86da121:	89 04 24             	mov    %eax,(%esp)
 86da124:	e8 27 96 40 00       	call   8ae3750 <_Unwind_Resume>
 86da129:	89 04 24             	mov    %eax,(%esp)
 86da12c:	e8 bf 9c 04 00       	call   8723df0 <__cxa_call_unexpected>
 86da131:	90                   	nop
 86da132:	90                   	nop
 86da133:	90                   	nop
 86da134:	90                   	nop
 86da135:	90                   	nop
 86da136:	90                   	nop
 86da137:	90                   	nop
 86da138:	90                   	nop
 86da139:	90                   	nop
 86da13a:	90                   	nop
 86da13b:	90                   	nop
 86da13c:	90                   	nop
 86da13d:	90                   	nop
 86da13e:	90                   	nop
 86da13f:	90                   	nop

```

```c
// std::ios_base::failure::failure @ 0x86da0e0

/* std::ios_base::failure::failure(std::string const&) */

void __thiscall std::ios_base::failure::failure(failure *this,string *param_1)

{
  *(undefined ***)this = &PTR__failure_08cfdf10;
                    /* try { // try from 086da0fd to 086da101 has its CatchHandler @ 086da108 */
  string::string((string *)(this + 4),(string *)param_1);
  return;
}

```

---

## what

```asm
// === 086da050 std::ios_base::failure::what  [0x086da050-0x86da05f] ===
 86da050:	55                   	push   %ebp
 86da051:	89 e5                	mov    %esp,%ebp
 86da053:	8b 45 08             	mov    0x8(%ebp),%eax
 86da056:	5d                   	pop    %ebp
 86da057:	8b 40 04             	mov    0x4(%eax),%eax
 86da05a:	c3                   	ret
 86da05b:	90                   	nop
 86da05c:	90                   	nop
 86da05d:	90                   	nop
 86da05e:	90                   	nop
 86da05f:	90                   	nop

```

```c
// std::ios_base::failure::what @ 0x86da050

/* std::ios_base::failure::what() const */

undefined4 __thiscall std::ios_base::failure::what(failure *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## ~failure

```asm
// === 086da060 std::ios_base::failure::~failure  [0x086da060-0x86da0bf] ===
 86da060:	55                   	push   %ebp
 86da061:	89 e5                	mov    %esp,%ebp
 86da063:	53                   	push   %ebx
 86da064:	83 ec 24             	sub    $0x24,%esp
 86da067:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86da06a:	8b 43 04             	mov    0x4(%ebx),%eax
 86da06d:	c7 03 10 df cf 08    	movl   $0x8cfdf10,(%ebx)
 86da073:	83 e8 0c             	sub    $0xc,%eax
 86da076:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 86da07b:	75 0e                	jne    86da08b <_ZNSt8ios_base7failureD1Ev+0x2b>
 86da07d:	89 1c 24             	mov    %ebx,(%esp)
 86da080:	e8 fb af 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86da085:	83 c4 24             	add    $0x24,%esp
 86da088:	5b                   	pop    %ebx
 86da089:	5d                   	pop    %ebp
 86da08a:	c3                   	ret
 86da08b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86da090:	85 d2                	test   %edx,%edx
 86da092:	74 1d                	je     86da0b1 <_ZNSt8ios_base7failureD1Ev+0x51>
 86da094:	83 ca ff             	or     $0xffffffff,%edx
 86da097:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 86da09c:	85 d2                	test   %edx,%edx
 86da09e:	7f dd                	jg     86da07d <_ZNSt8ios_base7failureD1Ev+0x1d>
 86da0a0:	8d 55 f7             	lea    -0x9(%ebp),%edx
 86da0a3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86da0a7:	89 04 24             	mov    %eax,(%esp)
 86da0aa:	e8 71 c8 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86da0af:	eb cc                	jmp    86da07d <_ZNSt8ios_base7failureD1Ev+0x1d>
 86da0b1:	8b 50 08             	mov    0x8(%eax),%edx
 86da0b4:	8d 4a ff             	lea    -0x1(%edx),%ecx
 86da0b7:	89 48 08             	mov    %ecx,0x8(%eax)
 86da0ba:	eb e0                	jmp    86da09c <_ZNSt8ios_base7failureD1Ev+0x3c>
 86da0bc:	90                   	nop
 86da0bd:	90                   	nop
 86da0be:	90                   	nop
 86da0bf:	90                   	nop

```

```c
// std::ios_base::failure::~failure @ 0x86da060

/* WARNING: Removing unreachable block (ram,0x086da0b1) */
/* std::ios_base::failure::~failure() */

void __thiscall std::ios_base::failure::~failure(failure *this)

{
  int *piVar1;
  int iVar2;
  allocator *paVar3;
  
  *(undefined ***)this = &PTR__failure_08cfdf10;
  paVar3 = (allocator *)(*(int *)(this + 4) + -0xc);
  if (paVar3 != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(*(int *)(this + 4) + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      string::_Rep::_M_destroy(paVar3);
    }
  }
  exception::~exception((exception *)this);
  return;
}

```

---

## ~failure_086da0c0

```asm
// === 086da0c0 std::ios_base::failure::~failure  [0x086da0c0-0x86da0df] ===
 86da0c0:	55                   	push   %ebp
 86da0c1:	89 e5                	mov    %esp,%ebp
 86da0c3:	53                   	push   %ebx
 86da0c4:	83 ec 14             	sub    $0x14,%esp
 86da0c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86da0ca:	89 1c 24             	mov    %ebx,(%esp)
 86da0cd:	e8 8e ff ff ff       	call   86da060 <_ZNSt8ios_base7failureD1Ev>
 86da0d2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86da0d5:	83 c4 14             	add    $0x14,%esp
 86da0d8:	5b                   	pop    %ebx
 86da0d9:	5d                   	pop    %ebp
 86da0da:	e9 11 a4 04 00       	jmp    87244f0 <_ZdlPv>
 86da0df:	90                   	nop

```

```c
// std::ios_base::failure::~failure @ 0x86da0c0

/* std::ios_base::failure::~failure() */

void __thiscall std::ios_base::failure::~failure(failure *this)

{
  ~failure(this);
  operator_delete(this);
  return;
}

```


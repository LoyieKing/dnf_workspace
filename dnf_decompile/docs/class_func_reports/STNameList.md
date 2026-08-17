# STNameList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Clear

```asm
// === 088baf34 STNameList::Clear  [0x088baf34-0x88baf47] ===
 88baf34:	55                   	push   %ebp
 88baf35:	89 e5                	mov    %esp,%ebp
 88baf37:	83 ec 18             	sub    $0x18,%esp
 88baf3a:	8b 45 08             	mov    0x8(%ebp),%eax
 88baf3d:	89 04 24             	mov    %eax,(%esp)
 88baf40:	e8 21 5a 7c ff       	call   8080966 <_ZN18StringUnorderedMapI19CharStringHashTraitiE5clearEv>
 88baf45:	c9                   	leave
 88baf46:	c3                   	ret
 88baf47:	90                   	nop

```

```c
// STNameList::Clear @ 0x88baf34

/* STNameList::Clear() */

void __thiscall STNameList::Clear(STNameList *this)

{
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)this);
  return;
}

```

---

## GetID

```asm
// === 088baf48 STNameList::GetID  [0x088baf48-0x88baf76] ===
 88baf48:	55                   	push   %ebp
 88baf49:	89 e5                	mov    %esp,%ebp
 88baf4b:	83 ec 28             	sub    $0x28,%esp
 88baf4e:	8b 45 08             	mov    0x8(%ebp),%eax
 88baf51:	8b 55 0c             	mov    0xc(%ebp),%edx
 88baf54:	89 54 24 04          	mov    %edx,0x4(%esp)
 88baf58:	89 04 24             	mov    %eax,(%esp)
 88baf5b:	e8 e8 93 00 00       	call   88c4348 <_ZN18StringUnorderedMapI19CharStringHashTraitiE3getEPKc>
 88baf60:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88baf63:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88baf67:	75 07                	jne    88baf70 <_ZNK10STNameList5GetIDEPKc+0x28>
 88baf69:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88baf6e:	eb 05                	jmp    88baf75 <_ZNK10STNameList5GetIDEPKc+0x2d>
 88baf70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88baf73:	8b 00                	mov    (%eax),%eax
 88baf75:	c9                   	leave
 88baf76:	c3                   	ret

```

```c
// STNameList::GetID @ 0x88baf48

/* STNameList::GetID(char const*) const */

undefined4 STNameList::GetID(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}

```

---

## STNameList

```asm
// === 088baef2 STNameList::STNameList  [0x088baef2-0x88baf33] ===
 88baef2:	55                   	push   %ebp
 88baef3:	89 e5                	mov    %esp,%ebp
 88baef5:	56                   	push   %esi
 88baef6:	53                   	push   %ebx
 88baef7:	83 ec 10             	sub    $0x10,%esp
 88baefa:	8b 45 08             	mov    0x8(%ebp),%eax
 88baefd:	89 04 24             	mov    %eax,(%esp)
 88baf00:	e8 43 54 7c ff       	call   8080348 <_ZN18StringUnorderedMapI19CharStringHashTraitiEC1Ev>
 88baf05:	8b 45 08             	mov    0x8(%ebp),%eax
 88baf08:	89 04 24             	mov    %eax,(%esp)
 88baf0b:	e8 24 00 00 00       	call   88baf34 <_ZN10STNameList5ClearEv>
 88baf10:	eb 1b                	jmp    88baf2d <_ZN10STNameListC1Ev+0x3b>
 88baf12:	89 d3                	mov    %edx,%ebx
 88baf14:	89 c6                	mov    %eax,%esi
 88baf16:	8b 45 08             	mov    0x8(%ebp),%eax
 88baf19:	89 04 24             	mov    %eax,(%esp)
 88baf1c:	e8 91 54 7c ff       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 88baf21:	89 f0                	mov    %esi,%eax
 88baf23:	89 da                	mov    %ebx,%edx
 88baf25:	89 04 24             	mov    %eax,(%esp)
 88baf28:	e8 23 88 22 00       	call   8ae3750 <_Unwind_Resume>
 88baf2d:	83 c4 10             	add    $0x10,%esp
 88baf30:	5b                   	pop    %ebx
 88baf31:	5e                   	pop    %esi
 88baf32:	5d                   	pop    %ebp
 88baf33:	c3                   	ret

```

```c
// STNameList::STNameList @ 0x88baef2

/* STNameList::STNameList() */

void __thiscall STNameList::STNameList(STNameList *this)

{
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)this);
                    /* try { // try from 088baf0b to 088baf0f has its CatchHandler @ 088baf12 */
  Clear(this);
  return;
}

```


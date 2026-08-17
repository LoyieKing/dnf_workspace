# StringResourceDelayedItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## StringResourceDelayedItem

```asm
// === 08ad52a2 StringResourceDelayedItem::StringResourceDelayedItem  [0x08ad52a2-0x8ad52d3] ===
 8ad52a2:	55                   	push   %ebp
 8ad52a3:	89 e5                	mov    %esp,%ebp
 8ad52a5:	83 ec 18             	sub    $0x18,%esp
 8ad52a8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52ab:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad52b1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52b4:	83 c0 04             	add    $0x4,%eax
 8ad52b7:	89 04 24             	mov    %eax,(%esp)
 8ad52ba:	e8 eb 16 00 00       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad52bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad52c5:	89 50 08             	mov    %edx,0x8(%eax)
 8ad52c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52cb:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad52ce:	89 50 0c             	mov    %edx,0xc(%eax)
 8ad52d1:	c9                   	leave
 8ad52d2:	c3                   	ret
 8ad52d3:	90                   	nop

```

```c
// StringResourceDelayedItem::StringResourceDelayedItem @ 0x8ad52a2

/* StringResourceDelayedItem::StringResourceDelayedItem(StringResource const&, int) */

void __thiscall
StringResourceDelayedItem::StringResourceDelayedItem
          (StringResourceDelayedItem *this,StringResource *param_1,int param_2)

{
  *(undefined4 *)this = 0;
  CharString::CharString((CharString *)(this + 4));
  *(StringResource **)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  return;
}

```

---

## get

```asm
// === 08ad5302 StringResourceDelayedItem::get  [0x08ad5302-0x8ad5329] ===
 8ad5302:	55                   	push   %ebp
 8ad5303:	89 e5                	mov    %esp,%ebp
 8ad5305:	83 ec 18             	sub    $0x18,%esp
 8ad5308:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad530b:	8b 50 0c             	mov    0xc(%eax),%edx
 8ad530e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad5311:	8b 40 08             	mov    0x8(%eax),%eax
 8ad5314:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8ad5317:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ad531b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad531f:	89 04 24             	mov    %eax,(%esp)
 8ad5322:	e8 51 f5 ff ff       	call   8ad4878 <_ZNK14StringResource3getEiPPK10CharString>
 8ad5327:	c9                   	leave
 8ad5328:	c3                   	ret
 8ad5329:	90                   	nop

```

```c
// StringResourceDelayedItem::get @ 0x8ad5302

/* StringResourceDelayedItem::get(CharString const**) const */

void __thiscall StringResourceDelayedItem::get(StringResourceDelayedItem *this,CharString **param_1)

{
  StringResource::get(*(StringResource **)(this + 8),*(int *)(this + 0xc),param_1);
  return;
}

```

---

## getId

```asm
// === 08ad52f6 StringResourceDelayedItem::getId  [0x08ad52f6-0x8ad5301] ===
 8ad52f6:	55                   	push   %ebp
 8ad52f7:	89 e5                	mov    %esp,%ebp
 8ad52f9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52fc:	8b 40 0c             	mov    0xc(%eax),%eax
 8ad52ff:	5d                   	pop    %ebp
 8ad5300:	c3                   	ret
 8ad5301:	90                   	nop

```

```c
// StringResourceDelayedItem::getId @ 0x8ad52f6

/* StringResourceDelayedItem::getId() const */

undefined4 __thiscall StringResourceDelayedItem::getId(StringResourceDelayedItem *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## getStringResource

```asm
// === 08ad52ea StringResourceDelayedItem::getStringResource  [0x08ad52ea-0x8ad52f5] ===
 8ad52ea:	55                   	push   %ebp
 8ad52eb:	89 e5                	mov    %esp,%ebp
 8ad52ed:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52f0:	8b 40 08             	mov    0x8(%eax),%eax
 8ad52f3:	5d                   	pop    %ebp
 8ad52f4:	c3                   	ret
 8ad52f5:	90                   	nop

```

```c
// StringResourceDelayedItem::getStringResource @ 0x8ad52ea

/* StringResourceDelayedItem::getStringResource() const */

undefined4 __thiscall StringResourceDelayedItem::getStringResource(StringResourceDelayedItem *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## makeCacheStr

```asm
// === 08ad538a StringResourceDelayedItem::makeCacheStr  [0x08ad538a-0x8ad5438] ===
 8ad538a:	55                   	push   %ebp
 8ad538b:	89 e5                	mov    %esp,%ebp
 8ad538d:	56                   	push   %esi
 8ad538e:	53                   	push   %ebx
 8ad538f:	83 ec 20             	sub    $0x20,%esp
 8ad5392:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ad5395:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad5399:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad539c:	89 04 24             	mov    %eax,(%esp)
 8ad539f:	e8 5e ff ff ff       	call   8ad5302 <_ZNK25StringResourceDelayedItem3getEPPK10CharString>
 8ad53a4:	84 c0                	test   %al,%al
 8ad53a6:	74 17                	je     8ad53bf <_ZN25StringResourceDelayedItem12makeCacheStrEv+0x35>
 8ad53a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad53ab:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad53ae:	83 c2 04             	add    $0x4,%edx
 8ad53b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad53b5:	89 14 24             	mov    %edx,(%esp)
 8ad53b8:	e8 21 1d 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad53bd:	eb 5d                	jmp    8ad541c <_ZN25StringResourceDelayedItem12makeCacheStrEv+0x92>
 8ad53bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad53c2:	8b 50 0c             	mov    0xc(%eax),%edx
 8ad53c5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad53c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad53cc:	c7 44 24 04 4c 2c e3 	movl   $0x8e32c4c,0x4(%esp)
 8ad53d3:	08 
 8ad53d4:	89 04 24             	mov    %eax,(%esp)
 8ad53d7:	e8 1e 37 00 00       	call   8ad8afa <_ZN10CharString6formatEPKcz>
 8ad53dc:	83 ec 04             	sub    $0x4,%esp
 8ad53df:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad53e2:	8d 50 04             	lea    0x4(%eax),%edx
 8ad53e5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad53e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad53ec:	89 14 24             	mov    %edx,(%esp)
 8ad53ef:	e8 ea 1c 00 00       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ad53f4:	eb 1b                	jmp    8ad5411 <_ZN25StringResourceDelayedItem12makeCacheStrEv+0x87>
 8ad53f6:	89 d3                	mov    %edx,%ebx
 8ad53f8:	89 c6                	mov    %eax,%esi
 8ad53fa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad53fd:	89 04 24             	mov    %eax,(%esp)
 8ad5400:	e8 b5 17 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad5405:	89 f0                	mov    %esi,%eax
 8ad5407:	89 da                	mov    %ebx,%edx
 8ad5409:	89 04 24             	mov    %eax,(%esp)
 8ad540c:	e8 3f e3 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad5411:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ad5414:	89 04 24             	mov    %eax,(%esp)
 8ad5417:	e8 9e 17 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad541c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad541f:	83 c0 04             	add    $0x4,%eax
 8ad5422:	89 04 24             	mov    %eax,(%esp)
 8ad5425:	e8 d2 ab 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad542a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad542d:	89 02                	mov    %eax,(%edx)
 8ad542f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad5432:	83 c4 00             	add    $0x0,%esp
 8ad5435:	5b                   	pop    %ebx
 8ad5436:	5e                   	pop    %esi
 8ad5437:	5d                   	pop    %ebp
 8ad5438:	c3                   	ret

```

```c
// StringResourceDelayedItem::makeCacheStr @ 0x8ad538a

/* StringResourceDelayedItem::makeCacheStr() */

void __thiscall StringResourceDelayedItem::makeCacheStr(StringResourceDelayedItem *this)

{
  char cVar1;
  char *pcVar2;
  CharString *src;
  CharString *local_14;
  CharString local_10;
  
  cVar1 = get(this,(CharString **)&local_14);
  if (cVar1 == '\0') {
    CharString::format(&local_10,"getStr(%d) == none",*(undefined4 *)(this + 0xc));
    src = &local_10;
                    /* try { // try from 08ad53ef to 08ad53f3 has its CatchHandler @ 08ad53f6 */
    CharString::operator=((CharString *)(this + 4),src);
    CharString::~CharString(&local_10,(int)src);
  }
  else {
    CharString::operator=((CharString *)(this + 4),local_14);
  }
  pcVar2 = CharString::c_str((CharString *)(this + 4));
  *(char **)this = pcVar2;
  return;
}

```

---

## operator

```asm
// === 08ad532a StringResourceDelayedItem::operator  [0x08ad532a-0x8ad5367] ===
 8ad532a:	55                   	push   %ebp
 8ad532b:	89 e5                	mov    %esp,%ebp
 8ad532d:	53                   	push   %ebx
 8ad532e:	83 ec 14             	sub    $0x14,%esp
 8ad5331:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad5334:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad5337:	8b 00                	mov    (%eax),%eax
 8ad5339:	85 c0                	test   %eax,%eax
 8ad533b:	75 0b                	jne    8ad5348 <_ZNK25StringResourceDelayedItemcv10CharStringEv+0x1e>
 8ad533d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad5340:	89 04 24             	mov    %eax,(%esp)
 8ad5343:	e8 42 00 00 00       	call   8ad538a <_ZN25StringResourceDelayedItem12makeCacheStrEv>
 8ad5348:	89 d8                	mov    %ebx,%eax
 8ad534a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad534d:	83 c2 04             	add    $0x4,%edx
 8ad5350:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad5354:	89 04 24             	mov    %eax,(%esp)
 8ad5357:	e8 6a 16 00 00       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad535c:	89 d8                	mov    %ebx,%eax
 8ad535e:	89 d8                	mov    %ebx,%eax
 8ad5360:	83 c4 14             	add    $0x14,%esp
 8ad5363:	5b                   	pop    %ebx
 8ad5364:	5d                   	pop    %ebp
 8ad5365:	c2 04 00             	ret    $0x4

```

```c
// StringResourceDelayedItem::operator @ 0x8ad532a

/* StringResourceDelayedItem::operator CharString() const */

CharString * __thiscall
StringResourceDelayedItem::operator_cast_to_CharString(StringResourceDelayedItem *this)

{
  StringResourceDelayedItem *in_stack_00000008;
  
  if (*(int *)in_stack_00000008 == 0) {
    makeCacheStr(in_stack_00000008);
  }
  CharString::CharString((CharString *)this,(CharString *)(in_stack_00000008 + 4));
  return (CharString *)this;
}

```

---

## operator_08ad5368

```asm
// === 08ad5368 StringResourceDelayedItem::operator  [0x08ad5368-0x8ad5389] ===
 8ad5368:	55                   	push   %ebp
 8ad5369:	89 e5                	mov    %esp,%ebp
 8ad536b:	83 ec 18             	sub    $0x18,%esp
 8ad536e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad5371:	8b 00                	mov    (%eax),%eax
 8ad5373:	85 c0                	test   %eax,%eax
 8ad5375:	75 0b                	jne    8ad5382 <_ZNK25StringResourceDelayedItemcvPKcEv+0x1a>
 8ad5377:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad537a:	89 04 24             	mov    %eax,(%esp)
 8ad537d:	e8 08 00 00 00       	call   8ad538a <_ZN25StringResourceDelayedItem12makeCacheStrEv>
 8ad5382:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad5385:	8b 00                	mov    (%eax),%eax
 8ad5387:	c9                   	leave
 8ad5388:	c3                   	ret
 8ad5389:	90                   	nop

```

```c
// StringResourceDelayedItem::operator @ 0x8ad5368

/* StringResourceDelayedItem::operator char const*() const */

char * __thiscall StringResourceDelayedItem::operator_cast_to_char_(StringResourceDelayedItem *this)

{
  if (*(int *)this == 0) {
    makeCacheStr(this);
  }
  return *(char **)this;
}

```

---

## ~StringResourceDelayedItem

```asm
// === 08ad52d4 StringResourceDelayedItem::~StringResourceDelayedItem  [0x08ad52d4-0x8ad52e9] ===
 8ad52d4:	55                   	push   %ebp
 8ad52d5:	89 e5                	mov    %esp,%ebp
 8ad52d7:	83 ec 18             	sub    $0x18,%esp
 8ad52da:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad52dd:	83 c0 04             	add    $0x4,%eax
 8ad52e0:	89 04 24             	mov    %eax,(%esp)
 8ad52e3:	e8 d2 18 00 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad52e8:	c9                   	leave
 8ad52e9:	c3                   	ret

```

```c
// StringResourceDelayedItem::~StringResourceDelayedItem @ 0x8ad52d4

/* StringResourceDelayedItem::~StringResourceDelayedItem() */

void __thiscall
StringResourceDelayedItem::~StringResourceDelayedItem(StringResourceDelayedItem *this)

{
  int in_stack_ffffffe8;
  
  CharString::~CharString((CharString *)(this + 4),in_stack_ffffffe8);
  return;
}

```


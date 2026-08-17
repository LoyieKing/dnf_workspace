# stStackableBoosterElement_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## operator=

```asm
// === 08513946 stStackableBoosterElement_t::operator=  [0x08513946-0x851398a] ===
 8513946:	55                   	push   %ebp
 8513947:	89 e5                	mov    %esp,%ebp
 8513949:	83 ec 18             	sub    $0x18,%esp
 851394c:	8b 45 0c             	mov    0xc(%ebp),%eax
 851394f:	8b 10                	mov    (%eax),%edx
 8513951:	8b 45 08             	mov    0x8(%ebp),%eax
 8513954:	89 10                	mov    %edx,(%eax)
 8513956:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513959:	8b 50 04             	mov    0x4(%eax),%edx
 851395c:	8b 45 08             	mov    0x8(%ebp),%eax
 851395f:	89 50 04             	mov    %edx,0x4(%eax)
 8513962:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513965:	8b 50 08             	mov    0x8(%eax),%edx
 8513968:	8b 45 08             	mov    0x8(%ebp),%eax
 851396b:	89 50 08             	mov    %edx,0x8(%eax)
 851396e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513971:	8d 50 0c             	lea    0xc(%eax),%edx
 8513974:	8b 45 08             	mov    0x8(%ebp),%eax
 8513977:	83 c0 0c             	add    $0xc,%eax
 851397a:	89 54 24 04          	mov    %edx,0x4(%esp)
 851397e:	89 04 24             	mov    %eax,(%esp)
 8513981:	e8 d2 2d 01 00       	call   8526758 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEaSERKS2_>
 8513986:	8b 45 08             	mov    0x8(%ebp),%eax
 8513989:	c9                   	leave
 851398a:	c3                   	ret

```

```c
// stStackableBoosterElement_t::operator= @ 0x8513946

/* stStackableBoosterElement_t::TEMPNAMEPLACEHOLDERVALUE(stStackableBoosterElement_t const&) */

stStackableBoosterElement_t * __thiscall
stStackableBoosterElement_t::operator=
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::operator=
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return this;
}

```

---

## operator=_089c2aee

```asm
// === 089c2aee stStackableBoosterElement_t::operator=  [0x089c2aee-0x89c2b33] ===
 89c2aee:	55                   	push   %ebp
 89c2aef:	89 e5                	mov    %esp,%ebp
 89c2af1:	83 ec 18             	sub    $0x18,%esp
 89c2af4:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2af7:	8b 10                	mov    (%eax),%edx
 89c2af9:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2afc:	89 10                	mov    %edx,(%eax)
 89c2afe:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2b01:	8b 50 04             	mov    0x4(%eax),%edx
 89c2b04:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2b07:	89 50 04             	mov    %edx,0x4(%eax)
 89c2b0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2b0d:	8b 50 08             	mov    0x8(%eax),%edx
 89c2b10:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2b13:	89 50 08             	mov    %edx,0x8(%eax)
 89c2b16:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2b19:	8d 50 0c             	lea    0xc(%eax),%edx
 89c2b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2b1f:	83 c0 0c             	add    $0xc,%eax
 89c2b22:	89 54 24 04          	mov    %edx,0x4(%esp)
 89c2b26:	89 04 24             	mov    %eax,(%esp)
 89c2b29:	e8 2a 3c b6 ff       	call   8526758 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEaSERKS2_>
 89c2b2e:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2b31:	c9                   	leave
 89c2b32:	c3                   	ret
 89c2b33:	90                   	nop

```

```c
// stStackableBoosterElement_t::operator= @ 0x89c2aee

/* stStackableBoosterElement_t::TEMPNAMEPLACEHOLDERVALUE(stStackableBoosterElement_t const&) */

stStackableBoosterElement_t * __thiscall
stStackableBoosterElement_t::operator=
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::operator=
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return this;
}

```

---

## stStackableBoosterElement_t

```asm
// === 085138ee stStackableBoosterElement_t::stStackableBoosterElement_t  [0x085138ee-0x851392f] ===
 85138ee:	55                   	push   %ebp
 85138ef:	89 e5                	mov    %esp,%ebp
 85138f1:	83 ec 18             	sub    $0x18,%esp
 85138f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85138f7:	8b 10                	mov    (%eax),%edx
 85138f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85138fc:	89 10                	mov    %edx,(%eax)
 85138fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513901:	8b 50 04             	mov    0x4(%eax),%edx
 8513904:	8b 45 08             	mov    0x8(%ebp),%eax
 8513907:	89 50 04             	mov    %edx,0x4(%eax)
 851390a:	8b 45 0c             	mov    0xc(%ebp),%eax
 851390d:	8b 50 08             	mov    0x8(%eax),%edx
 8513910:	8b 45 08             	mov    0x8(%ebp),%eax
 8513913:	89 50 08             	mov    %edx,0x8(%eax)
 8513916:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513919:	8d 50 0c             	lea    0xc(%eax),%edx
 851391c:	8b 45 08             	mov    0x8(%ebp),%eax
 851391f:	83 c0 0c             	add    $0xc,%eax
 8513922:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513926:	89 04 24             	mov    %eax,(%esp)
 8513929:	e8 88 0b 01 00       	call   85244b6 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1ERKS2_>
 851392e:	c9                   	leave
 851392f:	c3                   	ret

```

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x85138ee

/* stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&) */

void __thiscall
stStackableBoosterElement_t::stStackableBoosterElement_t
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return;
}

```

---

## stStackableBoosterElement_t_089aee9c

```asm
// === 089aee9c stStackableBoosterElement_t::stStackableBoosterElement_t  [0x089aee9c-0x89aeeb1] ===
 89aee9c:	55                   	push   %ebp
 89aee9d:	89 e5                	mov    %esp,%ebp
 89aee9f:	83 ec 18             	sub    $0x18,%esp
 89aeea2:	8b 45 08             	mov    0x8(%ebp),%eax
 89aeea5:	83 c0 0c             	add    $0xc,%eax
 89aeea8:	89 04 24             	mov    %eax,(%esp)
 89aeeab:	e8 f8 2b 76 ff       	call   8111aa8 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1Ev>
 89aeeb0:	c9                   	leave
 89aeeb1:	c3                   	ret

```

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x89aee9c

/* stStackableBoosterElement_t::stStackableBoosterElement_t() */

void __thiscall
stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t *this)

{
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc));
  return;
}

```

---

## stStackableBoosterElement_t_089c2aac

```asm
// === 089c2aac stStackableBoosterElement_t::stStackableBoosterElement_t  [0x089c2aac-0x89c2aed] ===
 89c2aac:	55                   	push   %ebp
 89c2aad:	89 e5                	mov    %esp,%ebp
 89c2aaf:	83 ec 18             	sub    $0x18,%esp
 89c2ab2:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2ab5:	8b 10                	mov    (%eax),%edx
 89c2ab7:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2aba:	89 10                	mov    %edx,(%eax)
 89c2abc:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2abf:	8b 50 04             	mov    0x4(%eax),%edx
 89c2ac2:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2ac5:	89 50 04             	mov    %edx,0x4(%eax)
 89c2ac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2acb:	8b 50 08             	mov    0x8(%eax),%edx
 89c2ace:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2ad1:	89 50 08             	mov    %edx,0x8(%eax)
 89c2ad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 89c2ad7:	8d 50 0c             	lea    0xc(%eax),%edx
 89c2ada:	8b 45 08             	mov    0x8(%ebp),%eax
 89c2add:	83 c0 0c             	add    $0xc,%eax
 89c2ae0:	89 54 24 04          	mov    %edx,0x4(%esp)
 89c2ae4:	89 04 24             	mov    %eax,(%esp)
 89c2ae7:	e8 ca 19 b6 ff       	call   85244b6 <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EEC1ERKS2_>
 89c2aec:	c9                   	leave
 89c2aed:	c3                   	ret

```

```c
// stStackableBoosterElement_t::stStackableBoosterElement_t @ 0x89c2aac

/* stStackableBoosterElement_t::stStackableBoosterElement_t(stStackableBoosterElement_t const&) */

void __thiscall
stStackableBoosterElement_t::stStackableBoosterElement_t
          (stStackableBoosterElement_t *this,stStackableBoosterElement_t *param_1)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc),(vector *)(param_1 + 0xc));
  return;
}

```

---

## ~stStackableBoosterElement_t

```asm
// === 08513930 stStackableBoosterElement_t::~stStackableBoosterElement_t  [0x08513930-0x8513945] ===
 8513930:	55                   	push   %ebp
 8513931:	89 e5                	mov    %esp,%ebp
 8513933:	83 ec 18             	sub    $0x18,%esp
 8513936:	8b 45 08             	mov    0x8(%ebp),%eax
 8513939:	83 c0 0c             	add    $0xc,%eax
 851393c:	89 04 24             	mov    %eax,(%esp)
 851393f:	e8 78 e1 bf ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 8513944:	c9                   	leave
 8513945:	c3                   	ret

```

```c
// stStackableBoosterElement_t::~stStackableBoosterElement_t @ 0x8513930

/* stStackableBoosterElement_t::~stStackableBoosterElement_t() */

void __thiscall
stStackableBoosterElement_t::~stStackableBoosterElement_t(stStackableBoosterElement_t *this)

{
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc));
  return;
}

```

---

## ~stStackableBoosterElement_t_089aeeb2

```asm
// === 089aeeb2 stStackableBoosterElement_t::~stStackableBoosterElement_t  [0x089aeeb2-0x89aeec7] ===
 89aeeb2:	55                   	push   %ebp
 89aeeb3:	89 e5                	mov    %esp,%ebp
 89aeeb5:	83 ec 18             	sub    $0x18,%esp
 89aeeb8:	8b 45 08             	mov    0x8(%ebp),%eax
 89aeebb:	83 c0 0c             	add    $0xc,%eax
 89aeebe:	89 04 24             	mov    %eax,(%esp)
 89aeec1:	e8 f6 2b 76 ff       	call   8111abc <_ZNSt6vectorI28stStackableBoosterItemInfo_tSaIS0_EED1Ev>
 89aeec6:	c9                   	leave
 89aeec7:	c3                   	ret

```

```c
// stStackableBoosterElement_t::~stStackableBoosterElement_t @ 0x89aeeb2

/* stStackableBoosterElement_t::~stStackableBoosterElement_t() */

void __thiscall
stStackableBoosterElement_t::~stStackableBoosterElement_t(stStackableBoosterElement_t *this)

{
  std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::~vector
            ((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>> *)
             (this + 0xc));
  return;
}

```


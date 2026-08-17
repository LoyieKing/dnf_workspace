# WongWork__CItemGenerator

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CItemGenerator

```asm
// === 08533b3e WongWork::CItemGenerator::CItemGenerator  [0x08533b3e-0x8533b99] ===
 8533b3e:	55                   	push   %ebp
 8533b3f:	89 e5                	mov    %esp,%ebp
 8533b41:	56                   	push   %esi
 8533b42:	53                   	push   %ebx
 8533b43:	83 ec 10             	sub    $0x10,%esp
 8533b46:	8b 45 08             	mov    0x8(%ebp),%eax
 8533b49:	c7 00 90 a7 c9 08    	movl   $0x8c9a790,(%eax)
 8533b4f:	8b 45 08             	mov    0x8(%ebp),%eax
 8533b52:	8d 50 08             	lea    0x8(%eax),%edx
 8533b55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8533b58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8533b5c:	89 14 24             	mov    %edx,(%esp)
 8533b5f:	e8 86 f9 ff ff       	call   85334ea <_ZN8WongWork21CGenerateRandomNumberC1Ei>
 8533b64:	8b 45 08             	mov    0x8(%ebp),%eax
 8533b67:	83 c0 10             	add    $0x10,%eax
 8533b6a:	89 04 24             	mov    %eax,(%esp)
 8533b6d:	e8 7c fa ff ff       	call   85335ee <_ZN8WongWork21GenerateRandomUpgradeC1Ev>
 8533b72:	eb 1e                	jmp    8533b92 <_ZN8WongWork14CItemGeneratorC1Ei+0x54>
 8533b74:	89 d3                	mov    %edx,%ebx
 8533b76:	89 c6                	mov    %eax,%esi
 8533b78:	8b 45 08             	mov    0x8(%ebp),%eax
 8533b7b:	83 c0 08             	add    $0x8,%eax
 8533b7e:	89 04 24             	mov    %eax,(%esp)
 8533b81:	e8 4a fa ff ff       	call   85335d0 <_ZN8WongWork21CGenerateRandomNumberD1Ev>
 8533b86:	89 f0                	mov    %esi,%eax
 8533b88:	89 da                	mov    %ebx,%edx
 8533b8a:	89 04 24             	mov    %eax,(%esp)
 8533b8d:	e8 be fb 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533b92:	83 c4 10             	add    $0x10,%esp
 8533b95:	5b                   	pop    %ebx
 8533b96:	5e                   	pop    %esi
 8533b97:	5d                   	pop    %ebp
 8533b98:	c3                   	ret
 8533b99:	90                   	nop

```

```c
// WongWork::CItemGenerator::CItemGenerator @ 0x8533b3e

/* WongWork::CItemGenerator::CItemGenerator(int) */

void __thiscall WongWork::CItemGenerator::CItemGenerator(CItemGenerator *this,int param_1)

{
  *(undefined ***)this = &PTR_setDropRatio_08c9a790;
  CGenerateRandomNumber::CGenerateRandomNumber((CGenerateRandomNumber *)(this + 8),param_1);
                    /* try { // try from 08533b6d to 08533b71 has its CatchHandler @ 08533b74 */
  GenerateRandomUpgrade::GenerateRandomUpgrade((GenerateRandomUpgrade *)(this + 0x10));
  return;
}

```

---

## ~CItemGenerator

```asm
// === 08533b9a WongWork::CItemGenerator::~CItemGenerator  [0x08533b9a-0x8533bc7] ===
 8533b9a:	55                   	push   %ebp
 8533b9b:	89 e5                	mov    %esp,%ebp
 8533b9d:	83 ec 18             	sub    $0x18,%esp
 8533ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 8533ba3:	c7 00 90 a7 c9 08    	movl   $0x8c9a790,(%eax)
 8533ba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8533bac:	83 c0 10             	add    $0x10,%eax
 8533baf:	89 04 24             	mov    %eax,(%esp)
 8533bb2:	e8 97 fa ff ff       	call   853364e <_ZN8WongWork21GenerateRandomUpgradeD1Ev>
 8533bb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8533bba:	83 c0 08             	add    $0x8,%eax
 8533bbd:	89 04 24             	mov    %eax,(%esp)
 8533bc0:	e8 0b fa ff ff       	call   85335d0 <_ZN8WongWork21CGenerateRandomNumberD1Ev>
 8533bc5:	c9                   	leave
 8533bc6:	c3                   	ret
 8533bc7:	90                   	nop

```

```c
// WongWork::CItemGenerator::~CItemGenerator @ 0x8533b9a

/* WongWork::CItemGenerator::~CItemGenerator() */

void __thiscall WongWork::CItemGenerator::~CItemGenerator(CItemGenerator *this)

{
  *(undefined ***)this = &PTR_setDropRatio_08c9a790;
  GenerateRandomUpgrade::~GenerateRandomUpgrade((GenerateRandomUpgrade *)(this + 0x10));
  CGenerateRandomNumber::~CGenerateRandomNumber((CGenerateRandomNumber *)(this + 8));
  return;
}

```


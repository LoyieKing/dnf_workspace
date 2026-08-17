# TaoCrypt__MD5

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AsmTransform

```asm
// === 08766210 TaoCrypt::MD5::AsmTransform  [0x08766210-0x876623d] ===
 8766210:	55                   	push   %ebp
 8766211:	89 e5                	mov    %esp,%ebp
 8766213:	0f 6e df             	movd   %edi,%mm3
 8766216:	0f 6e e3             	movd   %ebx,%mm4
 8766219:	0f 6e ee             	movd   %esi,%mm5
 876621c:	0f 6e f5             	movd   %ebp,%mm6
 876621f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8766222:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8766225:	8b 45 10             	mov    0x10(%ebp),%eax
 8766228:	89 ce                	mov    %ecx,%esi
 876622a:	83 c6 10             	add    $0x10,%esi
 876622d:	0f 6e d0             	movd   %eax,%mm2
 8766230:	0f 6e ce             	movd   %esi,%mm1
 8766233:	8b 06                	mov    (%esi),%eax
 8766235:	8b 5e 04             	mov    0x4(%esi),%ebx
 8766238:	8b 4e 08             	mov    0x8(%esi),%ecx
 876623b:	8b 56 0c             	mov    0xc(%esi),%edx

```

```c
// TaoCrypt::MD5::AsmTransform @ 0x8766210

/* TaoCrypt::MD5::AsmTransform(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD5::AsmTransform(MD5 *this,uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  MD5 *pMVar7;
  
  pMVar7 = this + 0x10;
  iVar1 = *(int *)pMVar7;
  uVar5 = *(uint *)(this + 0x14);
  uVar3 = *(uint *)(this + 0x18);
  uVar4 = *(uint *)(this + 0x1c);
  do {
    uVar2 = *(int *)param_1 + -0x28955b88 + iVar1 + ((uVar3 ^ uVar4) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x80 | uVar2 >> 0x19) + uVar5;
    uVar4 = *(int *)((int)param_1 + 4) + -0x173848aa + uVar4 + ((uVar5 ^ uVar3) & uVar2 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar2;
    uVar3 = *(int *)((int)param_1 + 8) + 0x242070db + uVar3 + ((uVar2 ^ uVar5) & uVar4 ^ uVar5);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar5 = *(int *)((int)param_1 + 0xc) + -0x3e423112 + uVar5 + ((uVar4 ^ uVar2) & uVar3 ^ uVar2);
    uVar6 = (uVar5 * 0x400000 | uVar5 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x10) + -0xa83f051 + uVar2 + ((uVar3 ^ uVar4) & uVar6 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar6;
    uVar4 = *(int *)((int)param_1 + 0x14) + 0x4787c62a + uVar4 + ((uVar6 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x18) + -0x57cfb9ed + uVar3 + ((uVar5 ^ uVar6) & uVar4 ^ uVar6);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x1c) + -0x2b96aff + uVar6 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x20) + 0x698098d8 + uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x24) + -0x74bb0851 + uVar4 + ((uVar2 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x28) + -0xa44f + uVar3 + ((uVar5 ^ uVar2) & uVar4 ^ uVar2);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x2c) + -0x76a32842 + uVar2 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x30) + 0x6b901122 + uVar5 + ((uVar3 ^ uVar4) & uVar2 ^ uVar4);
    uVar5 = (uVar5 * 0x80 | uVar5 >> 0x19) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x34) + -0x2678e6d + uVar4 + ((uVar2 ^ uVar3) & uVar5 ^ uVar3);
    uVar4 = (uVar4 * 0x1000 | uVar4 >> 0x14) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x38) + -0x5986bc72 + uVar3 + ((uVar5 ^ uVar2) & uVar4 ^ uVar2);
    uVar3 = (uVar3 * 0x20000 | uVar3 >> 0xf) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x3c) + 0x49b40821 + uVar2 + ((uVar4 ^ uVar5) & uVar3 ^ uVar5);
    uVar2 = (uVar2 * 0x400000 | uVar2 >> 10) + uVar3;
    uVar5 = *(int *)((int)param_1 + 4) + -0x9e1da9e + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x18) + -0x3fbf4cc0 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x2c) + 0x265e5a51 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)param_1 + -0x16493856 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x14) + -0x29d0efa3 + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x28) + 0x2441453 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x3c) + -0x275e197f + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x10) + -0x182c0438 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x24) + 0x21e1cde6 + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x38) + -0x3cc8f82a + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0xc) + -0xb2af279 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x20) + 0x455a14ed + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x34) + -0x561c16fb + uVar5 + ((uVar3 ^ uVar2) & uVar4 ^ uVar3);
    uVar5 = (uVar5 * 0x20 | uVar5 >> 0x1b) + uVar2;
    uVar4 = *(int *)((int)param_1 + 8) + -0x3105c08 + uVar4 + ((uVar2 ^ uVar5) & uVar3 ^ uVar2);
    uVar4 = (uVar4 * 0x200 | uVar4 >> 0x17) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x1c) + 0x676f02d9 + uVar3 + ((uVar5 ^ uVar4) & uVar2 ^ uVar5);
    uVar3 = (uVar3 * 0x4000 | uVar3 >> 0x12) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x30) + -0x72d5b376 + uVar2 + ((uVar4 ^ uVar3) & uVar5 ^ uVar4);
    uVar2 = (uVar2 * 0x100000 | uVar2 >> 0xc) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x14) + -0x5c6be + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x20) + -0x788e097f + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x2c) + 0x6d9d6122 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x38) + -0x21ac7f4 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 4) + -0x5b4115bc + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x10) + 0x4bdecfa9 + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x1c) + -0x944b4a0 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x28) + -0x41404390 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x34) + 0x289b7ec6 + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)param_1 + -0x155ed806 + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0xc) + -0x2b10cf7b + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x18) + 0x4881d05 + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x24) + -0x262b2fc7 + uVar5 + (uVar3 ^ uVar4 ^ uVar2);
    uVar5 = (uVar5 * 0x10 | uVar5 >> 0x1c) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x30) + -0x1924661b + uVar4 + (uVar2 ^ uVar3 ^ uVar5);
    uVar4 = (uVar4 * 0x800 | uVar4 >> 0x15) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x3c) + 0x1fa27cf8 + uVar3 + (uVar5 ^ uVar2 ^ uVar4);
    uVar3 = (uVar3 * 0x10000 | uVar3 >> 0x10) + uVar4;
    uVar2 = *(int *)((int)param_1 + 8) + -0x3b53a99b + uVar2 + (uVar4 ^ uVar5 ^ uVar3);
    uVar2 = (uVar2 * 0x800000 | uVar2 >> 9) + uVar3;
    uVar5 = *(int *)param_1 + -0xbd6ddbc + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x1c) + 0x432aff97 + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x38) + -0x546bdc59 + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x14) + -0x36c5fc7 + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x30) + 0x655b59c3 + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0xc) + -0x70f3336e + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x28) + -0x100b83 + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 4) + -0x7a7ba22f + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x20) + 0x6fa87e4f + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x3c) + -0x1d31920 + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 0x18) + -0x5cfebcec + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x34) + 0x4e0811a1 + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    uVar2 = (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    uVar5 = *(int *)((int)param_1 + 0x10) + -0x8ac817e + uVar5 + ((~uVar4 | uVar2) ^ uVar3);
    uVar5 = (uVar5 * 0x40 | uVar5 >> 0x1a) + uVar2;
    uVar4 = *(int *)((int)param_1 + 0x2c) + -0x42c50dcb + uVar4 + ((~uVar3 | uVar5) ^ uVar2);
    uVar4 = (uVar4 * 0x400 | uVar4 >> 0x16) + uVar5;
    uVar3 = *(int *)((int)param_1 + 8) + 0x2ad7d2bb + uVar3 + ((~uVar2 | uVar4) ^ uVar5);
    uVar3 = (uVar3 * 0x8000 | uVar3 >> 0x11) + uVar4;
    uVar2 = *(int *)((int)param_1 + 0x24) + -0x14792c6f + uVar2 + ((~uVar5 | uVar3) ^ uVar4);
    *(uint *)pMVar7 = *(int *)pMVar7 + uVar5;
    *(uint *)(this + 0x14) = *(int *)(this + 0x14) + (uVar2 * 0x200000 | uVar2 >> 0xb) + uVar3;
    *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar3;
    *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar4;
    param_1 = (uchar *)((int)param_1 + 0x40);
    iVar1 = *(int *)pMVar7;
    uVar5 = *(uint *)(this + 0x14);
    uVar3 = *(uint *)(this + 0x18);
    uVar4 = *(uint *)(this + 0x1c);
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}

```

---

## Init

```asm
// === 087661d0 TaoCrypt::MD5::Init  [0x087661d0-0x876620f] ===
 87661d0:	55                   	push   %ebp
 87661d1:	89 e5                	mov    %esp,%ebp
 87661d3:	8b 45 08             	mov    0x8(%ebp),%eax
 87661d6:	c7 40 10 01 23 45 67 	movl   $0x67452301,0x10(%eax)
 87661dd:	c7 40 14 89 ab cd ef 	movl   $0xefcdab89,0x14(%eax)
 87661e4:	c7 40 18 fe dc ba 98 	movl   $0x98badcfe,0x18(%eax)
 87661eb:	c7 40 1c 76 54 32 10 	movl   $0x10325476,0x1c(%eax)
 87661f2:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 87661f9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8766200:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8766207:	5d                   	pop    %ebp
 8766208:	c3                   	ret
 8766209:	90                   	nop
 876620a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::MD5::Init @ 0x87661d0

/* TaoCrypt::MD5::Init() */

void __thiscall TaoCrypt::MD5::Init(MD5 *this)

{
  *(undefined4 *)(this + 0x10) = 0x67452301;
  *(undefined4 *)(this + 0x14) = 0xefcdab89;
  *(undefined4 *)(this + 0x18) = 0x98badcfe;
  *(undefined4 *)(this + 0x1c) = 0x10325476;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## MD5

```asm
// === 08767250 TaoCrypt::MD5::MD5  [0x08767250-0x876732f] ===
 8767250:	55                   	push   %ebp
 8767251:	89 e5                	mov    %esp,%ebp
 8767253:	57                   	push   %edi
 8767254:	56                   	push   %esi
 8767255:	53                   	push   %ebx
 8767256:	e8 9d bb fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876725b:	81 c3 3d 59 c0 00    	add    $0xc0593d,%ebx
 8767261:	83 ec 1c             	sub    $0x1c,%esp
 8767264:	8b 75 08             	mov    0x8(%ebp),%esi
 8767267:	8b 7d 0c             	mov    0xc(%ebp),%edi
 876726a:	c7 44 24 08 40 00 00 	movl   $0x40,0x8(%esp)
 8767271:	00 
 8767272:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8767279:	00 
 876727a:	89 34 24             	mov    %esi,(%esp)
 876727d:	e8 4e 19 ff ff       	call   8758bd0 <_ZN8TaoCrypt17HASHwithTransformC1Ejj>
 8767282:	8b 83 c0 fc ff ff    	mov    -0x340(%ebx),%eax
 8767288:	8d 57 10             	lea    0x10(%edi),%edx
 876728b:	8b 4f 10             	mov    0x10(%edi),%ecx
 876728e:	83 c0 08             	add    $0x8,%eax
 8767291:	89 06                	mov    %eax,(%esi)
 8767293:	8b 47 04             	mov    0x4(%edi),%eax
 8767296:	89 4e 10             	mov    %ecx,0x10(%esi)
 8767299:	8b 4a 04             	mov    0x4(%edx),%ecx
 876729c:	89 46 04             	mov    %eax,0x4(%esi)
 876729f:	8b 47 08             	mov    0x8(%edi),%eax
 87672a2:	89 46 08             	mov    %eax,0x8(%esi)
 87672a5:	8b 47 0c             	mov    0xc(%edi),%eax
 87672a8:	89 46 0c             	mov    %eax,0xc(%esi)
 87672ab:	8d 46 10             	lea    0x10(%esi),%eax
 87672ae:	89 48 04             	mov    %ecx,0x4(%eax)
 87672b1:	8b 4a 08             	mov    0x8(%edx),%ecx
 87672b4:	89 48 08             	mov    %ecx,0x8(%eax)
 87672b7:	8b 52 0c             	mov    0xc(%edx),%edx
 87672ba:	8b 4f 30             	mov    0x30(%edi),%ecx
 87672bd:	89 50 0c             	mov    %edx,0xc(%eax)
 87672c0:	8d 57 30             	lea    0x30(%edi),%edx
 87672c3:	89 4e 30             	mov    %ecx,0x30(%esi)
 87672c6:	8b 4a 04             	mov    0x4(%edx),%ecx
 87672c9:	8d 46 30             	lea    0x30(%esi),%eax
 87672cc:	89 48 04             	mov    %ecx,0x4(%eax)
 87672cf:	8b 4a 08             	mov    0x8(%edx),%ecx
 87672d2:	89 48 08             	mov    %ecx,0x8(%eax)
 87672d5:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87672d8:	89 48 0c             	mov    %ecx,0xc(%eax)
 87672db:	8b 4a 10             	mov    0x10(%edx),%ecx
 87672de:	89 48 10             	mov    %ecx,0x10(%eax)
 87672e1:	8b 4a 14             	mov    0x14(%edx),%ecx
 87672e4:	89 48 14             	mov    %ecx,0x14(%eax)
 87672e7:	8b 4a 18             	mov    0x18(%edx),%ecx
 87672ea:	89 48 18             	mov    %ecx,0x18(%eax)
 87672ed:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87672f0:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87672f3:	8b 4a 20             	mov    0x20(%edx),%ecx
 87672f6:	89 48 20             	mov    %ecx,0x20(%eax)
 87672f9:	8b 4a 24             	mov    0x24(%edx),%ecx
 87672fc:	89 48 24             	mov    %ecx,0x24(%eax)
 87672ff:	8b 4a 28             	mov    0x28(%edx),%ecx
 8767302:	89 48 28             	mov    %ecx,0x28(%eax)
 8767305:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 8767308:	89 48 2c             	mov    %ecx,0x2c(%eax)
 876730b:	8b 4a 30             	mov    0x30(%edx),%ecx
 876730e:	89 48 30             	mov    %ecx,0x30(%eax)
 8767311:	8b 4a 34             	mov    0x34(%edx),%ecx
 8767314:	89 48 34             	mov    %ecx,0x34(%eax)
 8767317:	8b 4a 38             	mov    0x38(%edx),%ecx
 876731a:	89 48 38             	mov    %ecx,0x38(%eax)
 876731d:	8b 52 3c             	mov    0x3c(%edx),%edx
 8767320:	89 50 3c             	mov    %edx,0x3c(%eax)
 8767323:	83 c4 1c             	add    $0x1c,%esp
 8767326:	5b                   	pop    %ebx
 8767327:	5e                   	pop    %esi
 8767328:	5f                   	pop    %edi
 8767329:	5d                   	pop    %ebp
 876732a:	c3                   	ret
 876732b:	90                   	nop
 876732c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MD5::MD5 @ 0x8767250

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::MD5(TaoCrypt::MD5 const&) */

void __thiscall TaoCrypt::MD5::MD5(MD5 *this,MD5 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  HASHwithTransform::HASHwithTransform((HASHwithTransform *)this,4,0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined **)this = PTR_vtable_0936c858 + 8;
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x14) = uVar1;
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Swap

```asm
// === 08767040 TaoCrypt::MD5::Swap  [0x08767040-0x87670ff] ===
 8767040:	55                   	push   %ebp
 8767041:	89 e5                	mov    %esp,%ebp
 8767043:	57                   	push   %edi
 8767044:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8767047:	56                   	push   %esi
 8767048:	8b 75 0c             	mov    0xc(%ebp),%esi
 876704b:	8b 41 08             	mov    0x8(%ecx),%eax
 876704e:	8b 56 08             	mov    0x8(%esi),%edx
 8767051:	8b 7e 10             	mov    0x10(%esi),%edi
 8767054:	89 51 08             	mov    %edx,0x8(%ecx)
 8767057:	8b 56 0c             	mov    0xc(%esi),%edx
 876705a:	89 46 08             	mov    %eax,0x8(%esi)
 876705d:	8b 41 0c             	mov    0xc(%ecx),%eax
 8767060:	89 79 10             	mov    %edi,0x10(%ecx)
 8767063:	89 51 0c             	mov    %edx,0xc(%ecx)
 8767066:	8b 56 04             	mov    0x4(%esi),%edx
 8767069:	89 46 0c             	mov    %eax,0xc(%esi)
 876706c:	8b 41 04             	mov    0x4(%ecx),%eax
 876706f:	89 51 04             	mov    %edx,0x4(%ecx)
 8767072:	8d 56 10             	lea    0x10(%esi),%edx
 8767075:	8b 7a 04             	mov    0x4(%edx),%edi
 8767078:	89 46 04             	mov    %eax,0x4(%esi)
 876707b:	8d 41 10             	lea    0x10(%ecx),%eax
 876707e:	89 78 04             	mov    %edi,0x4(%eax)
 8767081:	8b 7a 08             	mov    0x8(%edx),%edi
 8767084:	89 78 08             	mov    %edi,0x8(%eax)
 8767087:	8b 52 0c             	mov    0xc(%edx),%edx
 876708a:	89 50 0c             	mov    %edx,0xc(%eax)
 876708d:	8d 56 30             	lea    0x30(%esi),%edx
 8767090:	8b 76 30             	mov    0x30(%esi),%esi
 8767093:	8d 41 30             	lea    0x30(%ecx),%eax
 8767096:	89 71 30             	mov    %esi,0x30(%ecx)
 8767099:	8b 4a 04             	mov    0x4(%edx),%ecx
 876709c:	89 48 04             	mov    %ecx,0x4(%eax)
 876709f:	8b 4a 08             	mov    0x8(%edx),%ecx
 87670a2:	89 48 08             	mov    %ecx,0x8(%eax)
 87670a5:	8b 4a 0c             	mov    0xc(%edx),%ecx
 87670a8:	89 48 0c             	mov    %ecx,0xc(%eax)
 87670ab:	8b 4a 10             	mov    0x10(%edx),%ecx
 87670ae:	89 48 10             	mov    %ecx,0x10(%eax)
 87670b1:	8b 4a 14             	mov    0x14(%edx),%ecx
 87670b4:	89 48 14             	mov    %ecx,0x14(%eax)
 87670b7:	8b 4a 18             	mov    0x18(%edx),%ecx
 87670ba:	89 48 18             	mov    %ecx,0x18(%eax)
 87670bd:	8b 4a 1c             	mov    0x1c(%edx),%ecx
 87670c0:	89 48 1c             	mov    %ecx,0x1c(%eax)
 87670c3:	8b 4a 20             	mov    0x20(%edx),%ecx
 87670c6:	89 48 20             	mov    %ecx,0x20(%eax)
 87670c9:	8b 4a 24             	mov    0x24(%edx),%ecx
 87670cc:	89 48 24             	mov    %ecx,0x24(%eax)
 87670cf:	8b 4a 28             	mov    0x28(%edx),%ecx
 87670d2:	89 48 28             	mov    %ecx,0x28(%eax)
 87670d5:	8b 4a 2c             	mov    0x2c(%edx),%ecx
 87670d8:	89 48 2c             	mov    %ecx,0x2c(%eax)
 87670db:	8b 4a 30             	mov    0x30(%edx),%ecx
 87670de:	89 48 30             	mov    %ecx,0x30(%eax)
 87670e1:	8b 4a 34             	mov    0x34(%edx),%ecx
 87670e4:	89 48 34             	mov    %ecx,0x34(%eax)
 87670e7:	8b 4a 38             	mov    0x38(%edx),%ecx
 87670ea:	89 48 38             	mov    %ecx,0x38(%eax)
 87670ed:	8b 52 3c             	mov    0x3c(%edx),%edx
 87670f0:	89 50 3c             	mov    %edx,0x3c(%eax)
 87670f3:	5e                   	pop    %esi
 87670f4:	5f                   	pop    %edi
 87670f5:	5d                   	pop    %ebp
 87670f6:	c3                   	ret
 87670f7:	90                   	nop
 87670f8:	90                   	nop
 87670f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::MD5::Swap @ 0x8767040

/* TaoCrypt::MD5::Swap(TaoCrypt::MD5&) */

void __thiscall TaoCrypt::MD5::Swap(MD5 *this,MD5 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(this + 8);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(this + 0x10) = uVar2;
  *(undefined4 *)(this + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = *(undefined4 *)(this + 4);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

```

---

## Transform

```asm
// === 087668a0 TaoCrypt::MD5::Transform  [0x087668a0-0x876703f] ===
 87668a0:	55                   	push   %ebp
 87668a1:	89 e5                	mov    %esp,%ebp
 87668a3:	57                   	push   %edi
 87668a4:	56                   	push   %esi
 87668a5:	83 ec 4c             	sub    $0x4c,%esp
 87668a8:	8b 45 08             	mov    0x8(%ebp),%eax
 87668ab:	8b 4d 08             	mov    0x8(%ebp),%ecx
 87668ae:	8b 40 10             	mov    0x10(%eax),%eax
 87668b1:	89 ce                	mov    %ecx,%esi
 87668b3:	8b 51 14             	mov    0x14(%ecx),%edx
 87668b6:	8b 79 18             	mov    0x18(%ecx),%edi
 87668b9:	8b 49 1c             	mov    0x1c(%ecx),%ecx
 87668bc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 87668bf:	8b 46 30             	mov    0x30(%esi),%eax
 87668c2:	8b 75 ec             	mov    -0x14(%ebp),%esi
 87668c5:	89 45 ac             	mov    %eax,-0x54(%ebp)
 87668c8:	8d b4 06 78 a4 6a d7 	lea    -0x28955b88(%esi,%eax,1),%esi
 87668cf:	89 c8                	mov    %ecx,%eax
 87668d1:	31 f8                	xor    %edi,%eax
 87668d3:	21 d0                	and    %edx,%eax
 87668d5:	31 c8                	xor    %ecx,%eax
 87668d7:	01 f0                	add    %esi,%eax
 87668d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87668dc:	c1 c8 19             	ror    $0x19,%eax
 87668df:	01 d0                	add    %edx,%eax
 87668e1:	8b 76 34             	mov    0x34(%esi),%esi
 87668e4:	8d 8c 31 56 b7 c7 e8 	lea    -0x173848aa(%ecx,%esi,1),%ecx
 87668eb:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 87668ee:	89 f9                	mov    %edi,%ecx
 87668f0:	89 75 b0             	mov    %esi,-0x50(%ebp)
 87668f3:	8b 75 f4             	mov    -0xc(%ebp),%esi
 87668f6:	31 d1                	xor    %edx,%ecx
 87668f8:	21 c1                	and    %eax,%ecx
 87668fa:	31 f9                	xor    %edi,%ecx
 87668fc:	01 ce                	add    %ecx,%esi
 87668fe:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8766901:	c1 ce 14             	ror    $0x14,%esi
 8766904:	01 c6                	add    %eax,%esi
 8766906:	8b 49 38             	mov    0x38(%ecx),%ecx
 8766909:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 876690c:	8d bc 0f db 70 20 24 	lea    0x242070db(%edi,%ecx,1),%edi
 8766913:	89 c1                	mov    %eax,%ecx
 8766915:	31 d1                	xor    %edx,%ecx
 8766917:	21 f1                	and    %esi,%ecx
 8766919:	31 d1                	xor    %edx,%ecx
 876691b:	8d 0c 0f             	lea    (%edi,%ecx,1),%ecx
 876691e:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766921:	c1 c9 0f             	ror    $0xf,%ecx
 8766924:	01 f1                	add    %esi,%ecx
 8766926:	8b 7f 3c             	mov    0x3c(%edi),%edi
 8766929:	89 7d b8             	mov    %edi,-0x48(%ebp)
 876692c:	8d 94 3a ee ce bd c1 	lea    -0x3e423112(%edx,%edi,1),%edx
 8766933:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766936:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766939:	89 f2                	mov    %esi,%edx
 876693b:	31 c2                	xor    %eax,%edx
 876693d:	21 ca                	and    %ecx,%edx
 876693f:	8b 7f 40             	mov    0x40(%edi),%edi
 8766942:	31 c2                	xor    %eax,%edx
 8766944:	03 55 f4             	add    -0xc(%ebp),%edx
 8766947:	89 7d bc             	mov    %edi,-0x44(%ebp)
 876694a:	8d 84 38 af 0f 7c f5 	lea    -0xa83f051(%eax,%edi,1),%eax
 8766951:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766954:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766957:	c1 ca 0a             	ror    $0xa,%edx
 876695a:	89 c8                	mov    %ecx,%eax
 876695c:	01 ca                	add    %ecx,%edx
 876695e:	31 f0                	xor    %esi,%eax
 8766960:	21 d0                	and    %edx,%eax
 8766962:	8b 7f 44             	mov    0x44(%edi),%edi
 8766965:	31 f0                	xor    %esi,%eax
 8766967:	03 45 f4             	add    -0xc(%ebp),%eax
 876696a:	8d b4 3e 2a c6 87 47 	lea    0x4787c62a(%esi,%edi,1),%esi
 8766971:	89 7d c0             	mov    %edi,-0x40(%ebp)
 8766974:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766977:	c1 c8 19             	ror    $0x19,%eax
 876697a:	89 75 f4             	mov    %esi,-0xc(%ebp)
 876697d:	89 d6                	mov    %edx,%esi
 876697f:	01 d0                	add    %edx,%eax
 8766981:	31 ce                	xor    %ecx,%esi
 8766983:	21 c6                	and    %eax,%esi
 8766985:	8b 7f 48             	mov    0x48(%edi),%edi
 8766988:	31 ce                	xor    %ecx,%esi
 876698a:	03 75 f4             	add    -0xc(%ebp),%esi
 876698d:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 8766990:	8d 8c 39 13 46 30 a8 	lea    -0x57cfb9ed(%ecx,%edi,1),%ecx
 8766997:	8b 7d 08             	mov    0x8(%ebp),%edi
 876699a:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 876699d:	c1 ce 14             	ror    $0x14,%esi
 87669a0:	89 c1                	mov    %eax,%ecx
 87669a2:	01 c6                	add    %eax,%esi
 87669a4:	31 d1                	xor    %edx,%ecx
 87669a6:	21 f1                	and    %esi,%ecx
 87669a8:	8b 7f 4c             	mov    0x4c(%edi),%edi
 87669ab:	31 d1                	xor    %edx,%ecx
 87669ad:	03 4d f4             	add    -0xc(%ebp),%ecx
 87669b0:	89 7d c8             	mov    %edi,-0x38(%ebp)
 87669b3:	8d 94 3a 01 95 46 fd 	lea    -0x2b96aff(%edx,%edi,1),%edx
 87669ba:	8b 7d 08             	mov    0x8(%ebp),%edi
 87669bd:	89 55 f4             	mov    %edx,-0xc(%ebp)
 87669c0:	c1 c9 0f             	ror    $0xf,%ecx
 87669c3:	89 f2                	mov    %esi,%edx
 87669c5:	01 f1                	add    %esi,%ecx
 87669c7:	31 c2                	xor    %eax,%edx
 87669c9:	21 ca                	and    %ecx,%edx
 87669cb:	8b 7f 50             	mov    0x50(%edi),%edi
 87669ce:	31 c2                	xor    %eax,%edx
 87669d0:	03 55 f4             	add    -0xc(%ebp),%edx
 87669d3:	89 7d cc             	mov    %edi,-0x34(%ebp)
 87669d6:	8d 84 38 d8 98 80 69 	lea    0x698098d8(%eax,%edi,1),%eax
 87669dd:	8b 7d 08             	mov    0x8(%ebp),%edi
 87669e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87669e3:	c1 ca 0a             	ror    $0xa,%edx
 87669e6:	89 c8                	mov    %ecx,%eax
 87669e8:	01 ca                	add    %ecx,%edx
 87669ea:	31 f0                	xor    %esi,%eax
 87669ec:	21 d0                	and    %edx,%eax
 87669ee:	8b 7f 54             	mov    0x54(%edi),%edi
 87669f1:	31 f0                	xor    %esi,%eax
 87669f3:	03 45 f4             	add    -0xc(%ebp),%eax
 87669f6:	89 7d d0             	mov    %edi,-0x30(%ebp)
 87669f9:	8d b4 3e af f7 44 8b 	lea    -0x74bb0851(%esi,%edi,1),%esi
 8766a00:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766a03:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766a06:	c1 c8 19             	ror    $0x19,%eax
 8766a09:	89 d6                	mov    %edx,%esi
 8766a0b:	01 d0                	add    %edx,%eax
 8766a0d:	31 ce                	xor    %ecx,%esi
 8766a0f:	21 c6                	and    %eax,%esi
 8766a11:	8b 7f 58             	mov    0x58(%edi),%edi
 8766a14:	31 ce                	xor    %ecx,%esi
 8766a16:	03 75 f4             	add    -0xc(%ebp),%esi
 8766a19:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8766a1c:	8d 8c 39 b1 5b ff ff 	lea    -0xa44f(%ecx,%edi,1),%ecx
 8766a23:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766a26:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766a29:	c1 ce 14             	ror    $0x14,%esi
 8766a2c:	89 c1                	mov    %eax,%ecx
 8766a2e:	01 c6                	add    %eax,%esi
 8766a30:	31 d1                	xor    %edx,%ecx
 8766a32:	21 f1                	and    %esi,%ecx
 8766a34:	8b 7f 5c             	mov    0x5c(%edi),%edi
 8766a37:	31 d1                	xor    %edx,%ecx
 8766a39:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766a3c:	89 7d d8             	mov    %edi,-0x28(%ebp)
 8766a3f:	8d 94 3a be d7 5c 89 	lea    -0x76a32842(%edx,%edi,1),%edx
 8766a46:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766a49:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766a4c:	c1 c9 0f             	ror    $0xf,%ecx
 8766a4f:	89 f2                	mov    %esi,%edx
 8766a51:	01 f1                	add    %esi,%ecx
 8766a53:	31 c2                	xor    %eax,%edx
 8766a55:	21 ca                	and    %ecx,%edx
 8766a57:	8b 7f 60             	mov    0x60(%edi),%edi
 8766a5a:	31 c2                	xor    %eax,%edx
 8766a5c:	03 55 f4             	add    -0xc(%ebp),%edx
 8766a5f:	8d 84 38 22 11 90 6b 	lea    0x6b901122(%eax,%edi,1),%eax
 8766a66:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8766a69:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766a6c:	c1 ca 0a             	ror    $0xa,%edx
 8766a6f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766a72:	89 c8                	mov    %ecx,%eax
 8766a74:	01 ca                	add    %ecx,%edx
 8766a76:	31 f0                	xor    %esi,%eax
 8766a78:	21 d0                	and    %edx,%eax
 8766a7a:	8b 7f 64             	mov    0x64(%edi),%edi
 8766a7d:	31 f0                	xor    %esi,%eax
 8766a7f:	03 45 f4             	add    -0xc(%ebp),%eax
 8766a82:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8766a85:	8d b4 3e 93 71 98 fd 	lea    -0x2678e6d(%esi,%edi,1),%esi
 8766a8c:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766a8f:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766a92:	c1 c8 19             	ror    $0x19,%eax
 8766a95:	89 d6                	mov    %edx,%esi
 8766a97:	01 d0                	add    %edx,%eax
 8766a99:	31 ce                	xor    %ecx,%esi
 8766a9b:	21 c6                	and    %eax,%esi
 8766a9d:	8b 7f 68             	mov    0x68(%edi),%edi
 8766aa0:	31 ce                	xor    %ecx,%esi
 8766aa2:	03 75 f4             	add    -0xc(%ebp),%esi
 8766aa5:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8766aa8:	8d 8c 39 8e 43 79 a6 	lea    -0x5986bc72(%ecx,%edi,1),%ecx
 8766aaf:	8b 7d 08             	mov    0x8(%ebp),%edi
 8766ab2:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766ab5:	c1 ce 14             	ror    $0x14,%esi
 8766ab8:	89 c1                	mov    %eax,%ecx
 8766aba:	01 c6                	add    %eax,%esi
 8766abc:	31 d1                	xor    %edx,%ecx
 8766abe:	21 f1                	and    %esi,%ecx
 8766ac0:	8b 7f 6c             	mov    0x6c(%edi),%edi
 8766ac3:	31 d1                	xor    %edx,%ecx
 8766ac5:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766ac8:	8d 94 3a 21 08 b4 49 	lea    0x49b40821(%edx,%edi,1),%edx
 8766acf:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766ad2:	c1 c9 0f             	ror    $0xf,%ecx
 8766ad5:	89 f2                	mov    %esi,%edx
 8766ad7:	01 f1                	add    %esi,%ecx
 8766ad9:	31 c2                	xor    %eax,%edx
 8766adb:	21 ca                	and    %ecx,%edx
 8766add:	89 7d e8             	mov    %edi,-0x18(%ebp)
 8766ae0:	31 c2                	xor    %eax,%edx
 8766ae2:	8b 7d b0             	mov    -0x50(%ebp),%edi
 8766ae5:	03 55 f4             	add    -0xc(%ebp),%edx
 8766ae8:	c1 ca 0a             	ror    $0xa,%edx
 8766aeb:	01 ca                	add    %ecx,%edx
 8766aed:	8d 84 38 62 25 1e f6 	lea    -0x9e1da9e(%eax,%edi,1),%eax
 8766af4:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8766af7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766afa:	89 d0                	mov    %edx,%eax
 8766afc:	31 c8                	xor    %ecx,%eax
 8766afe:	21 f0                	and    %esi,%eax
 8766b00:	31 c8                	xor    %ecx,%eax
 8766b02:	03 45 f4             	add    -0xc(%ebp),%eax
 8766b05:	8d b4 3e 40 b3 40 c0 	lea    -0x3fbf4cc0(%esi,%edi,1),%esi
 8766b0c:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8766b0f:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766b12:	c1 c8 1b             	ror    $0x1b,%eax
 8766b15:	01 d0                	add    %edx,%eax
 8766b17:	89 c6                	mov    %eax,%esi
 8766b19:	31 d6                	xor    %edx,%esi
 8766b1b:	21 ce                	and    %ecx,%esi
 8766b1d:	31 d6                	xor    %edx,%esi
 8766b1f:	03 75 f4             	add    -0xc(%ebp),%esi
 8766b22:	8d 8c 39 51 5a 5e 26 	lea    0x265e5a51(%ecx,%edi,1),%ecx
 8766b29:	8b 7d ac             	mov    -0x54(%ebp),%edi
 8766b2c:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766b2f:	c1 ce 17             	ror    $0x17,%esi
 8766b32:	01 c6                	add    %eax,%esi
 8766b34:	89 f1                	mov    %esi,%ecx
 8766b36:	31 c1                	xor    %eax,%ecx
 8766b38:	21 d1                	and    %edx,%ecx
 8766b3a:	31 c1                	xor    %eax,%ecx
 8766b3c:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766b3f:	8d 94 3a aa c7 b6 e9 	lea    -0x16493856(%edx,%edi,1),%edx
 8766b46:	8b 7d c0             	mov    -0x40(%ebp),%edi
 8766b49:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766b4c:	c1 c9 12             	ror    $0x12,%ecx
 8766b4f:	01 f1                	add    %esi,%ecx
 8766b51:	89 ca                	mov    %ecx,%edx
 8766b53:	31 f2                	xor    %esi,%edx
 8766b55:	21 c2                	and    %eax,%edx
 8766b57:	31 f2                	xor    %esi,%edx
 8766b59:	03 55 f4             	add    -0xc(%ebp),%edx
 8766b5c:	8d 84 38 5d 10 2f d6 	lea    -0x29d0efa3(%eax,%edi,1),%eax
 8766b63:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 8766b66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766b69:	c1 ca 0c             	ror    $0xc,%edx
 8766b6c:	01 ca                	add    %ecx,%edx
 8766b6e:	89 d0                	mov    %edx,%eax
 8766b70:	31 c8                	xor    %ecx,%eax
 8766b72:	21 f0                	and    %esi,%eax
 8766b74:	31 c8                	xor    %ecx,%eax
 8766b76:	03 45 f4             	add    -0xc(%ebp),%eax
 8766b79:	8d b4 3e 53 14 44 02 	lea    0x2441453(%esi,%edi,1),%esi
 8766b80:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766b83:	8b 7d e8             	mov    -0x18(%ebp),%edi
 8766b86:	c1 c8 1b             	ror    $0x1b,%eax
 8766b89:	01 d0                	add    %edx,%eax
 8766b8b:	89 c6                	mov    %eax,%esi
 8766b8d:	31 d6                	xor    %edx,%esi
 8766b8f:	21 ce                	and    %ecx,%esi
 8766b91:	31 d6                	xor    %edx,%esi
 8766b93:	03 75 f4             	add    -0xc(%ebp),%esi
 8766b96:	8d 8c 39 81 e6 a1 d8 	lea    -0x275e197f(%ecx,%edi,1),%ecx
 8766b9d:	8b 7d bc             	mov    -0x44(%ebp),%edi
 8766ba0:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766ba3:	c1 ce 17             	ror    $0x17,%esi
 8766ba6:	01 c6                	add    %eax,%esi
 8766ba8:	89 f1                	mov    %esi,%ecx
 8766baa:	31 c1                	xor    %eax,%ecx
 8766bac:	21 d1                	and    %edx,%ecx
 8766bae:	31 c1                	xor    %eax,%ecx
 8766bb0:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766bb3:	8d 94 3a c8 fb d3 e7 	lea    -0x182c0438(%edx,%edi,1),%edx
 8766bba:	8b 7d d0             	mov    -0x30(%ebp),%edi
 8766bbd:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766bc0:	c1 c9 12             	ror    $0x12,%ecx
 8766bc3:	01 f1                	add    %esi,%ecx
 8766bc5:	89 ca                	mov    %ecx,%edx
 8766bc7:	31 f2                	xor    %esi,%edx
 8766bc9:	21 c2                	and    %eax,%edx
 8766bcb:	31 f2                	xor    %esi,%edx
 8766bcd:	03 55 f4             	add    -0xc(%ebp),%edx
 8766bd0:	8d 84 38 e6 cd e1 21 	lea    0x21e1cde6(%eax,%edi,1),%eax
 8766bd7:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8766bda:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766bdd:	c1 ca 0c             	ror    $0xc,%edx
 8766be0:	01 ca                	add    %ecx,%edx
 8766be2:	89 d0                	mov    %edx,%eax
 8766be4:	31 c8                	xor    %ecx,%eax
 8766be6:	21 f0                	and    %esi,%eax
 8766be8:	31 c8                	xor    %ecx,%eax
 8766bea:	03 45 f4             	add    -0xc(%ebp),%eax
 8766bed:	8d b4 3e d6 07 37 c3 	lea    -0x3cc8f82a(%esi,%edi,1),%esi
 8766bf4:	8b 7d b8             	mov    -0x48(%ebp),%edi
 8766bf7:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766bfa:	c1 c8 1b             	ror    $0x1b,%eax
 8766bfd:	01 d0                	add    %edx,%eax
 8766bff:	89 c6                	mov    %eax,%esi
 8766c01:	31 d6                	xor    %edx,%esi
 8766c03:	21 ce                	and    %ecx,%esi
 8766c05:	31 d6                	xor    %edx,%esi
 8766c07:	03 75 f4             	add    -0xc(%ebp),%esi
 8766c0a:	8d 8c 39 87 0d d5 f4 	lea    -0xb2af279(%ecx,%edi,1),%ecx
 8766c11:	8b 7d cc             	mov    -0x34(%ebp),%edi
 8766c14:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766c17:	c1 ce 17             	ror    $0x17,%esi
 8766c1a:	01 c6                	add    %eax,%esi
 8766c1c:	89 f1                	mov    %esi,%ecx
 8766c1e:	31 c1                	xor    %eax,%ecx
 8766c20:	21 d1                	and    %edx,%ecx
 8766c22:	31 c1                	xor    %eax,%ecx
 8766c24:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766c27:	8d 94 3a ed 14 5a 45 	lea    0x455a14ed(%edx,%edi,1),%edx
 8766c2e:	8b 7d e0             	mov    -0x20(%ebp),%edi
 8766c31:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766c34:	c1 c9 12             	ror    $0x12,%ecx
 8766c37:	01 f1                	add    %esi,%ecx
 8766c39:	89 ca                	mov    %ecx,%edx
 8766c3b:	31 f2                	xor    %esi,%edx
 8766c3d:	21 c2                	and    %eax,%edx
 8766c3f:	31 f2                	xor    %esi,%edx
 8766c41:	03 55 f4             	add    -0xc(%ebp),%edx
 8766c44:	8d 84 38 05 e9 e3 a9 	lea    -0x561c16fb(%eax,%edi,1),%eax
 8766c4b:	8b 7d b4             	mov    -0x4c(%ebp),%edi
 8766c4e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766c51:	c1 ca 0c             	ror    $0xc,%edx
 8766c54:	01 ca                	add    %ecx,%edx
 8766c56:	89 d0                	mov    %edx,%eax
 8766c58:	31 c8                	xor    %ecx,%eax
 8766c5a:	21 f0                	and    %esi,%eax
 8766c5c:	31 c8                	xor    %ecx,%eax
 8766c5e:	03 45 f4             	add    -0xc(%ebp),%eax
 8766c61:	8d b4 3e f8 a3 ef fc 	lea    -0x3105c08(%esi,%edi,1),%esi
 8766c68:	8b 7d c8             	mov    -0x38(%ebp),%edi
 8766c6b:	89 75 f4             	mov    %esi,-0xc(%ebp)
 8766c6e:	c1 c8 1b             	ror    $0x1b,%eax
 8766c71:	01 d0                	add    %edx,%eax
 8766c73:	89 c6                	mov    %eax,%esi
 8766c75:	31 d6                	xor    %edx,%esi
 8766c77:	21 ce                	and    %ecx,%esi
 8766c79:	31 d6                	xor    %edx,%esi
 8766c7b:	03 75 f4             	add    -0xc(%ebp),%esi
 8766c7e:	8d 8c 39 d9 02 6f 67 	lea    0x676f02d9(%ecx,%edi,1),%ecx
 8766c85:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766c88:	c1 ce 17             	ror    $0x17,%esi
 8766c8b:	01 c6                	add    %eax,%esi
 8766c8d:	89 f1                	mov    %esi,%ecx
 8766c8f:	31 c1                	xor    %eax,%ecx
 8766c91:	21 d1                	and    %edx,%ecx
 8766c93:	31 c1                	xor    %eax,%ecx
 8766c95:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766c98:	c1 c9 12             	ror    $0x12,%ecx
 8766c9b:	01 f1                	add    %esi,%ecx
 8766c9d:	89 cf                	mov    %ecx,%edi
 8766c9f:	31 f7                	xor    %esi,%edi
 8766ca1:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8766ca4:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8766ca7:	8d 94 3a 8a 4c 2a 8d 	lea    -0x72d5b376(%edx,%edi,1),%edx
 8766cae:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766cb1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8766cb4:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8766cb7:	21 c2                	and    %eax,%edx
 8766cb9:	31 f2                	xor    %esi,%edx
 8766cbb:	01 d7                	add    %edx,%edi
 8766cbd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8766cc0:	c1 cf 0c             	ror    $0xc,%edi
 8766cc3:	01 cf                	add    %ecx,%edi
 8766cc5:	8d 84 10 42 39 fa ff 	lea    -0x5c6be(%eax,%edx,1),%eax
 8766ccc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766ccf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8766cd2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8766cd5:	31 f8                	xor    %edi,%eax
 8766cd7:	03 45 f4             	add    -0xc(%ebp),%eax
 8766cda:	8d b4 16 81 f6 71 87 	lea    -0x788e097f(%esi,%edx,1),%esi
 8766ce1:	89 fa                	mov    %edi,%edx
 8766ce3:	31 ca                	xor    %ecx,%edx
 8766ce5:	c1 c8 1c             	ror    $0x1c,%eax
 8766ce8:	01 f8                	add    %edi,%eax
 8766cea:	31 c2                	xor    %eax,%edx
 8766cec:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8766cef:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8766cf2:	c1 ca 15             	ror    $0x15,%edx
 8766cf5:	01 c2                	add    %eax,%edx
 8766cf7:	8d 8c 31 22 61 9d 6d 	lea    0x6d9d6122(%ecx,%esi,1),%ecx
 8766cfe:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8766d01:	89 4d f4             	mov    %ecx,-0xc(%ebp)
 8766d04:	89 c1                	mov    %eax,%ecx
 8766d06:	31 f9                	xor    %edi,%ecx
 8766d08:	31 d1                	xor    %edx,%ecx
 8766d0a:	03 4d f4             	add    -0xc(%ebp),%ecx
 8766d0d:	8d bc 37 0c 38 e5 fd 	lea    -0x21ac7f4(%edi,%esi,1),%edi
 8766d14:	89 d6                	mov    %edx,%esi
 8766d16:	31 c6                	xor    %eax,%esi
 8766d18:	c1 c9 10             	ror    $0x10,%ecx
 8766d1b:	01 d1                	add    %edx,%ecx
 8766d1d:	31 ce                	xor    %ecx,%esi
 8766d1f:	8d 34 37             	lea    (%edi,%esi,1),%esi
 8766d22:	8b 7d b0             	mov    -0x50(%ebp),%edi
 8766d25:	c1 ce 09             	ror    $0x9,%esi
 8766d28:	01 ce                	add    %ecx,%esi
 8766d2a:	8d 84 38 44 ea be a4 	lea    -0x5b4115bc(%eax,%edi,1),%eax
 8766d31:	8b 7d bc             	mov    -0x44(%ebp),%edi
 8766d34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766d37:	89 c8                	mov    %ecx,%eax
 8766d39:	31 d0                	xor    %edx,%eax
 8766d3b:	31 f0                	xor    %esi,%eax
 8766d3d:	03 45 f4             	add    -0xc(%ebp),%eax
 8766d40:	8d 94 3a a9 cf de 4b 	lea    0x4bdecfa9(%edx,%edi,1),%edx
 8766d47:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766d4a:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8766d4d:	89 f2                	mov    %esi,%edx
 8766d4f:	c1 c8 1c             	ror    $0x1c,%eax
 8766d52:	31 ca                	xor    %ecx,%edx
 8766d54:	01 f0                	add    %esi,%eax
 8766d56:	31 c2                	xor    %eax,%edx
 8766d58:	01 d7                	add    %edx,%edi
 8766d5a:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8766d5d:	c1 cf 15             	ror    $0x15,%edi
 8766d60:	01 c7                	add    %eax,%edi
 8766d62:	8d 8c 11 60 4b bb f6 	lea    -0x944b4a0(%ecx,%edx,1),%ecx
 8766d69:	89 c2                	mov    %eax,%edx
 8766d6b:	31 f2                	xor    %esi,%edx
 8766d6d:	31 fa                	xor    %edi,%edx
 8766d6f:	01 d1                	add    %edx,%ecx
 8766d71:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8766d74:	c1 c9 10             	ror    $0x10,%ecx
 8766d77:	01 f9                	add    %edi,%ecx
 8766d79:	8d b4 16 70 bc bf be 	lea    -0x41404390(%esi,%edx,1),%esi
 8766d80:	89 fa                	mov    %edi,%edx
 8766d82:	31 c2                	xor    %eax,%edx
 8766d84:	31 ca                	xor    %ecx,%edx
 8766d86:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8766d89:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8766d8c:	c1 ca 09             	ror    $0x9,%edx
 8766d8f:	01 ca                	add    %ecx,%edx
 8766d91:	8d 84 30 c6 7e 9b 28 	lea    0x289b7ec6(%eax,%esi,1),%eax
 8766d98:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766d9b:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8766d9e:	89 c8                	mov    %ecx,%eax
 8766da0:	31 f8                	xor    %edi,%eax
 8766da2:	31 d0                	xor    %edx,%eax
 8766da4:	01 c6                	add    %eax,%esi
 8766da6:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8766da9:	c1 ce 1c             	ror    $0x1c,%esi
 8766dac:	01 d6                	add    %edx,%esi
 8766dae:	8d bc 07 fa 27 a1 ea 	lea    -0x155ed806(%edi,%eax,1),%edi
 8766db5:	89 d0                	mov    %edx,%eax
 8766db7:	31 c8                	xor    %ecx,%eax
 8766db9:	31 f0                	xor    %esi,%eax
 8766dbb:	01 c7                	add    %eax,%edi
 8766dbd:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8766dc0:	c1 cf 15             	ror    $0x15,%edi
 8766dc3:	01 f7                	add    %esi,%edi
 8766dc5:	8d 8c 01 85 30 ef d4 	lea    -0x2b10cf7b(%ecx,%eax,1),%ecx
 8766dcc:	89 f0                	mov    %esi,%eax
 8766dce:	31 d0                	xor    %edx,%eax
 8766dd0:	31 f8                	xor    %edi,%eax
 8766dd2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8766dd5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8766dd8:	c1 c8 10             	ror    $0x10,%eax
 8766ddb:	01 f8                	add    %edi,%eax
 8766ddd:	8d 94 0a 05 1d 88 04 	lea    0x4881d05(%edx,%ecx,1),%edx
 8766de4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766de7:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8766dea:	89 fa                	mov    %edi,%edx
 8766dec:	31 f2                	xor    %esi,%edx
 8766dee:	31 c2                	xor    %eax,%edx
 8766df0:	01 d1                	add    %edx,%ecx
 8766df2:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8766df5:	c1 c9 09             	ror    $0x9,%ecx
 8766df8:	01 c1                	add    %eax,%ecx
 8766dfa:	8d b4 16 39 d0 d4 d9 	lea    -0x262b2fc7(%esi,%edx,1),%esi
 8766e01:	89 c2                	mov    %eax,%edx
 8766e03:	31 fa                	xor    %edi,%edx
 8766e05:	31 ca                	xor    %ecx,%edx
 8766e07:	01 d6                	add    %edx,%esi
 8766e09:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8766e0c:	c1 ce 1c             	ror    $0x1c,%esi
 8766e0f:	01 ce                	add    %ecx,%esi
 8766e11:	8d bc 17 e5 99 db e6 	lea    -0x1924661b(%edi,%edx,1),%edi
 8766e18:	89 ca                	mov    %ecx,%edx
 8766e1a:	31 c2                	xor    %eax,%edx
 8766e1c:	31 f2                	xor    %esi,%edx
 8766e1e:	8d 14 17             	lea    (%edi,%edx,1),%edx
 8766e21:	8b 7d e8             	mov    -0x18(%ebp),%edi
 8766e24:	c1 ca 15             	ror    $0x15,%edx
 8766e27:	01 f2                	add    %esi,%edx
 8766e29:	8d 84 38 f8 7c a2 1f 	lea    0x1fa27cf8(%eax,%edi,1),%eax
 8766e30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766e33:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8766e36:	89 f0                	mov    %esi,%eax
 8766e38:	31 c8                	xor    %ecx,%eax
 8766e3a:	31 d0                	xor    %edx,%eax
 8766e3c:	01 c7                	add    %eax,%edi
 8766e3e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8766e41:	c1 cf 10             	ror    $0x10,%edi
 8766e44:	01 d7                	add    %edx,%edi
 8766e46:	8d 8c 01 65 56 ac c4 	lea    -0x3b53a99b(%ecx,%eax,1),%ecx
 8766e4d:	89 d0                	mov    %edx,%eax
 8766e4f:	31 f0                	xor    %esi,%eax
 8766e51:	31 f8                	xor    %edi,%eax
 8766e53:	01 c1                	add    %eax,%ecx
 8766e55:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8766e58:	c1 c9 09             	ror    $0x9,%ecx
 8766e5b:	01 f9                	add    %edi,%ecx
 8766e5d:	8d b4 06 44 22 29 f4 	lea    -0xbd6ddbc(%esi,%eax,1),%esi
 8766e64:	89 d0                	mov    %edx,%eax
 8766e66:	f7 d0                	not    %eax
 8766e68:	09 c8                	or     %ecx,%eax
 8766e6a:	31 f8                	xor    %edi,%eax
 8766e6c:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8766e6f:	8b 75 c8             	mov    -0x38(%ebp),%esi
 8766e72:	c1 c8 1a             	ror    $0x1a,%eax
 8766e75:	01 c8                	add    %ecx,%eax
 8766e77:	8d 94 32 97 ff 2a 43 	lea    0x432aff97(%edx,%esi,1),%edx
 8766e7e:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766e81:	89 fa                	mov    %edi,%edx
 8766e83:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8766e86:	f7 d2                	not    %edx
 8766e88:	09 c2                	or     %eax,%edx
 8766e8a:	31 ca                	xor    %ecx,%edx
 8766e8c:	01 d6                	add    %edx,%esi
 8766e8e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8766e91:	c1 ce 16             	ror    $0x16,%esi
 8766e94:	01 c6                	add    %eax,%esi
 8766e96:	8d bc 17 a7 23 94 ab 	lea    -0x546bdc59(%edi,%edx,1),%edi
 8766e9d:	89 ca                	mov    %ecx,%edx
 8766e9f:	f7 d2                	not    %edx
 8766ea1:	09 f2                	or     %esi,%edx
 8766ea3:	31 c2                	xor    %eax,%edx
 8766ea5:	01 d7                	add    %edx,%edi
 8766ea7:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8766eaa:	c1 cf 11             	ror    $0x11,%edi
 8766ead:	01 f7                	add    %esi,%edi
 8766eaf:	8d 8c 11 39 a0 93 fc 	lea    -0x36c5fc7(%ecx,%edx,1),%ecx
 8766eb6:	89 c2                	mov    %eax,%edx
 8766eb8:	f7 d2                	not    %edx
 8766eba:	09 fa                	or     %edi,%edx
 8766ebc:	31 f2                	xor    %esi,%edx
 8766ebe:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 8766ec1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8766ec4:	c1 ca 0b             	ror    $0xb,%edx
 8766ec7:	01 fa                	add    %edi,%edx
 8766ec9:	8d 84 08 c3 59 5b 65 	lea    0x655b59c3(%eax,%ecx,1),%eax
 8766ed0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766ed3:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8766ed6:	89 f0                	mov    %esi,%eax
 8766ed8:	f7 d0                	not    %eax
 8766eda:	09 d0                	or     %edx,%eax
 8766edc:	31 f8                	xor    %edi,%eax
 8766ede:	01 c1                	add    %eax,%ecx
 8766ee0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8766ee3:	c1 c9 1a             	ror    $0x1a,%ecx
 8766ee6:	01 d1                	add    %edx,%ecx
 8766ee8:	8d b4 06 92 cc 0c 8f 	lea    -0x70f3336e(%esi,%eax,1),%esi
 8766eef:	89 f8                	mov    %edi,%eax
 8766ef1:	f7 d0                	not    %eax
 8766ef3:	09 c8                	or     %ecx,%eax
 8766ef5:	31 d0                	xor    %edx,%eax
 8766ef7:	01 c6                	add    %eax,%esi
 8766ef9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8766efc:	c1 ce 16             	ror    $0x16,%esi
 8766eff:	01 ce                	add    %ecx,%esi
 8766f01:	8d bc 07 7d f4 ef ff 	lea    -0x100b83(%edi,%eax,1),%edi
 8766f08:	89 d0                	mov    %edx,%eax
 8766f0a:	f7 d0                	not    %eax
 8766f0c:	09 f0                	or     %esi,%eax
 8766f0e:	31 c8                	xor    %ecx,%eax
 8766f10:	8d 04 07             	lea    (%edi,%eax,1),%eax
 8766f13:	8b 7d b0             	mov    -0x50(%ebp),%edi
 8766f16:	c1 c8 11             	ror    $0x11,%eax
 8766f19:	01 f0                	add    %esi,%eax
 8766f1b:	8d 94 3a d1 5d 84 85 	lea    -0x7a7ba22f(%edx,%edi,1),%edx
 8766f22:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766f25:	89 ca                	mov    %ecx,%edx
 8766f27:	8b 7d f4             	mov    -0xc(%ebp),%edi
 8766f2a:	f7 d2                	not    %edx
 8766f2c:	09 c2                	or     %eax,%edx
 8766f2e:	31 f2                	xor    %esi,%edx
 8766f30:	01 d7                	add    %edx,%edi
 8766f32:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8766f35:	c1 cf 0b             	ror    $0xb,%edi
 8766f38:	01 c7                	add    %eax,%edi
 8766f3a:	8d 8c 11 4f 7e a8 6f 	lea    0x6fa87e4f(%ecx,%edx,1),%ecx
 8766f41:	89 f2                	mov    %esi,%edx
 8766f43:	f7 d2                	not    %edx
 8766f45:	09 fa                	or     %edi,%edx
 8766f47:	31 c2                	xor    %eax,%edx
 8766f49:	01 d1                	add    %edx,%ecx
 8766f4b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8766f4e:	c1 c9 1a             	ror    $0x1a,%ecx
 8766f51:	01 f9                	add    %edi,%ecx
 8766f53:	8d b4 16 e0 e6 2c fe 	lea    -0x1d31920(%esi,%edx,1),%esi
 8766f5a:	89 c2                	mov    %eax,%edx
 8766f5c:	f7 d2                	not    %edx
 8766f5e:	09 ca                	or     %ecx,%edx
 8766f60:	31 fa                	xor    %edi,%edx
 8766f62:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8766f65:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 8766f68:	c1 ca 16             	ror    $0x16,%edx
 8766f6b:	01 ca                	add    %ecx,%edx
 8766f6d:	8d 84 30 14 43 01 a3 	lea    -0x5cfebcec(%eax,%esi,1),%eax
 8766f74:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8766f77:	89 f8                	mov    %edi,%eax
 8766f79:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8766f7c:	f7 d0                	not    %eax
 8766f7e:	09 d0                	or     %edx,%eax
 8766f80:	31 c8                	xor    %ecx,%eax
 8766f82:	01 c6                	add    %eax,%esi
 8766f84:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8766f87:	c1 ce 11             	ror    $0x11,%esi
 8766f8a:	01 d6                	add    %edx,%esi
 8766f8c:	8d bc 07 a1 11 08 4e 	lea    0x4e0811a1(%edi,%eax,1),%edi
 8766f93:	89 c8                	mov    %ecx,%eax
 8766f95:	f7 d0                	not    %eax
 8766f97:	09 f0                	or     %esi,%eax
 8766f99:	31 d0                	xor    %edx,%eax
 8766f9b:	01 c7                	add    %eax,%edi
 8766f9d:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8766fa0:	c1 cf 0b             	ror    $0xb,%edi
 8766fa3:	01 f7                	add    %esi,%edi
 8766fa5:	8d 8c 01 82 7e 53 f7 	lea    -0x8ac817e(%ecx,%eax,1),%ecx
 8766fac:	89 d0                	mov    %edx,%eax
 8766fae:	f7 d0                	not    %eax
 8766fb0:	09 f8                	or     %edi,%eax
 8766fb2:	31 f0                	xor    %esi,%eax
 8766fb4:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8766fb7:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8766fba:	c1 c8 1a             	ror    $0x1a,%eax
 8766fbd:	01 f8                	add    %edi,%eax
 8766fbf:	8d 94 0a 35 f2 3a bd 	lea    -0x42c50dcb(%edx,%ecx,1),%edx
 8766fc6:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8766fc9:	89 f2                	mov    %esi,%edx
 8766fcb:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8766fce:	f7 d2                	not    %edx
 8766fd0:	09 c2                	or     %eax,%edx
 8766fd2:	31 fa                	xor    %edi,%edx
 8766fd4:	01 d1                	add    %edx,%ecx
 8766fd6:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8766fd9:	c1 c9 16             	ror    $0x16,%ecx
 8766fdc:	01 c1                	add    %eax,%ecx
 8766fde:	8d b4 16 bb d2 d7 2a 	lea    0x2ad7d2bb(%esi,%edx,1),%esi
 8766fe5:	89 fa                	mov    %edi,%edx
 8766fe7:	f7 d2                	not    %edx
 8766fe9:	09 ca                	or     %ecx,%edx
 8766feb:	31 c2                	xor    %eax,%edx
 8766fed:	8d 14 16             	lea    (%esi,%edx,1),%edx
 8766ff0:	8b 75 08             	mov    0x8(%ebp),%esi
 8766ff3:	c1 ca 11             	ror    $0x11,%edx
 8766ff6:	01 ca                	add    %ecx,%edx
 8766ff8:	89 55 f0             	mov    %edx,-0x10(%ebp)
 8766ffb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8766ffe:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8767001:	f7 d0                	not    %eax
 8767003:	89 56 10             	mov    %edx,0x10(%esi)
 8767006:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8767009:	03 56 14             	add    0x14(%esi),%edx
 876700c:	0b 45 f0             	or     -0x10(%ebp),%eax
 876700f:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8767012:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8767015:	31 c8                	xor    %ecx,%eax
 8767017:	8d b4 17 91 d3 86 eb 	lea    -0x14792c6f(%edi,%edx,1),%esi
 876701e:	8b 7d f0             	mov    -0x10(%ebp),%edi
 8767021:	8d 04 06             	lea    (%esi,%eax,1),%eax
 8767024:	8b 75 08             	mov    0x8(%ebp),%esi
 8767027:	c1 c8 0b             	ror    $0xb,%eax
 876702a:	03 45 f4             	add    -0xc(%ebp),%eax
 876702d:	01 7e 18             	add    %edi,0x18(%esi)
 8767030:	01 4e 1c             	add    %ecx,0x1c(%esi)
 8767033:	89 46 14             	mov    %eax,0x14(%esi)
 8767036:	83 c4 4c             	add    $0x4c,%esp
 8767039:	5e                   	pop    %esi
 876703a:	5f                   	pop    %edi
 876703b:	5d                   	pop    %ebp
 876703c:	c3                   	ret
 876703d:	90                   	nop
 876703e:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::MD5::Transform @ 0x87668a0

/* TaoCrypt::MD5::Transform() */

void __thiscall TaoCrypt::MD5::Transform(MD5 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  
  uVar22 = *(uint *)(this + 0x14);
  uVar18 = *(uint *)(this + 0x18);
  uVar20 = *(uint *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x30);
  uVar17 = ((uVar20 ^ uVar18) & uVar22 ^ uVar20) + *(int *)(this + 0x10) + -0x28955b88 + iVar1;
  uVar17 = (uVar17 >> 0x19 | uVar17 * 0x80) + uVar22;
  iVar2 = *(int *)(this + 0x34);
  uVar20 = uVar20 + 0xe8c7b756 + iVar2 + ((uVar18 ^ uVar22) & uVar17 ^ uVar18);
  uVar21 = (uVar20 >> 0x14 | uVar20 * 0x1000) + uVar17;
  iVar3 = *(int *)(this + 0x38);
  uVar18 = uVar18 + 0x242070db + iVar3 + ((uVar17 ^ uVar22) & uVar21 ^ uVar22);
  uVar20 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar21;
  iVar4 = *(int *)(this + 0x3c);
  iVar5 = *(int *)(this + 0x40);
  uVar18 = ((uVar21 ^ uVar17) & uVar20 ^ uVar17) + uVar22 + 0xc1bdceee + iVar4;
  uVar19 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar20;
  iVar6 = *(int *)(this + 0x44);
  uVar18 = ((uVar20 ^ uVar21) & uVar19 ^ uVar21) + uVar17 + 0xf57c0faf + iVar5;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar19;
  iVar7 = *(int *)(this + 0x48);
  uVar22 = ((uVar19 ^ uVar20) & uVar18 ^ uVar20) + uVar21 + 0x4787c62a + iVar6;
  uVar17 = (uVar22 >> 0x14 | uVar22 * 0x1000) + uVar18;
  iVar8 = *(int *)(this + 0x4c);
  uVar22 = ((uVar18 ^ uVar19) & uVar17 ^ uVar19) + uVar20 + 0xa8304613 + iVar7;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  iVar9 = *(int *)(this + 0x50);
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar19 + 0xfd469501 + iVar8;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  iVar10 = *(int *)(this + 0x54);
  uVar18 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar18 + 0x698098d8 + iVar9;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar20;
  iVar11 = *(int *)(this + 0x58);
  uVar17 = ((uVar20 ^ uVar22) & uVar18 ^ uVar22) + uVar17 + 0x8b44f7af + iVar10;
  uVar17 = (uVar17 >> 0x14 | uVar17 * 0x1000) + uVar18;
  iVar12 = *(int *)(this + 0x5c);
  uVar22 = ((uVar18 ^ uVar20) & uVar17 ^ uVar20) + (uVar22 - 0xa44f) + iVar11;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  iVar13 = *(int *)(this + 0x60);
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar20 + 0x895cd7be + iVar12;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  iVar14 = *(int *)(this + 100);
  uVar18 = ((uVar22 ^ uVar17) & uVar20 ^ uVar17) + uVar18 + 0x6b901122 + iVar13;
  uVar18 = (uVar18 >> 0x19 | uVar18 * 0x80) + uVar20;
  iVar15 = *(int *)(this + 0x68);
  uVar17 = ((uVar20 ^ uVar22) & uVar18 ^ uVar22) + uVar17 + 0xfd987193 + iVar14;
  uVar17 = (uVar17 >> 0x14 | uVar17 * 0x1000) + uVar18;
  iVar16 = *(int *)(this + 0x6c);
  uVar22 = ((uVar18 ^ uVar20) & uVar17 ^ uVar20) + uVar22 + 0xa679438e + iVar15;
  uVar22 = (uVar22 >> 0xf | uVar22 * 0x20000) + uVar17;
  uVar20 = ((uVar17 ^ uVar18) & uVar22 ^ uVar18) + uVar20 + 0x49b40821 + iVar16;
  uVar20 = (uVar20 >> 10 | uVar20 * 0x400000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0xf61e2562 + iVar2;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0xc040b340 + iVar7;
  uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar17 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0x265e5a51 + iVar12;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar17;
  uVar20 = ((uVar22 ^ uVar17) & uVar18 ^ uVar17) + uVar20 + 0xe9b6c7aa + iVar1;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0xd62f105d + iVar6;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0x2441453 + iVar11;
  uVar17 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar17 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0xd8a1e681 + iVar16;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar17;
  uVar20 = ((uVar22 ^ uVar17) & uVar18 ^ uVar17) + uVar20 + 0xe7d3fbc8 + iVar5;
  uVar20 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar20 ^ uVar22) & uVar17 ^ uVar22) + uVar18 + 0x21e1cde6 + iVar10;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar20;
  uVar17 = ((uVar18 ^ uVar20) & uVar22 ^ uVar20) + uVar17 + 0xc33707d6 + iVar15;
  uVar19 = (uVar17 >> 0x17 | uVar17 * 0x200) + uVar18;
  uVar22 = ((uVar19 ^ uVar18) & uVar20 ^ uVar18) + uVar22 + 0xf4d50d87 + iVar4;
  uVar22 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar20 = ((uVar22 ^ uVar19) & uVar18 ^ uVar19) + uVar20 + 0x455a14ed + iVar9;
  uVar17 = (uVar20 >> 0xc | uVar20 * 0x100000) + uVar22;
  uVar18 = ((uVar17 ^ uVar22) & uVar19 ^ uVar22) + uVar18 + 0xa9e3e905 + iVar14;
  uVar18 = (uVar18 >> 0x1b | uVar18 * 0x20) + uVar17;
  uVar20 = ((uVar18 ^ uVar17) & uVar22 ^ uVar17) + uVar19 + 0xfcefa3f8 + iVar3;
  uVar19 = (uVar20 >> 0x17 | uVar20 * 0x200) + uVar18;
  uVar22 = ((uVar19 ^ uVar18) & uVar17 ^ uVar18) + uVar22 + 0x676f02d9 + iVar8;
  uVar20 = (uVar22 >> 0x12 | uVar22 * 0x4000) + uVar19;
  uVar22 = uVar17 + 0x8d2a4c8a + iVar13 + ((uVar20 ^ uVar19) & uVar18 ^ uVar19);
  uVar21 = (uVar22 >> 0xc | uVar22 * 0x100000) + uVar20;
  uVar18 = (uVar20 ^ uVar19 ^ uVar21) + (uVar18 - 0x5c6be) + iVar6;
  uVar22 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar21;
  uVar18 = uVar19 + 0x8771f681 + iVar9 + (uVar21 ^ uVar20 ^ uVar22);
  uVar17 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar22;
  uVar18 = (uVar22 ^ uVar21 ^ uVar17) + uVar20 + 0x6d9d6122 + iVar12;
  uVar20 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar18 = uVar21 + 0xfde5380c + iVar15 + (uVar17 ^ uVar22 ^ uVar20);
  uVar19 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
  uVar18 = (uVar20 ^ uVar17 ^ uVar19) + uVar22 + 0xa4beea44 + iVar2;
  uVar22 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar19;
  uVar18 = uVar17 + 0x4bdecfa9 + iVar5 + (uVar19 ^ uVar20 ^ uVar22);
  uVar21 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar22;
  uVar18 = uVar20 + 0xf6bb4b60 + iVar8 + (uVar22 ^ uVar19 ^ uVar21);
  uVar20 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar21;
  uVar18 = uVar19 + 0xbebfbc70 + iVar11 + (uVar21 ^ uVar22 ^ uVar20);
  uVar17 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
  uVar18 = uVar22 + 0x289b7ec6 + iVar14 + (uVar20 ^ uVar21 ^ uVar17);
  uVar19 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar17;
  uVar18 = uVar21 + 0xeaa127fa + iVar1 + (uVar17 ^ uVar20 ^ uVar19);
  uVar21 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar18 = uVar20 + 0xd4ef3085 + iVar4 + (uVar19 ^ uVar17 ^ uVar21);
  uVar22 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar21;
  uVar18 = uVar17 + 0x4881d05 + iVar7 + (uVar21 ^ uVar19 ^ uVar22);
  uVar20 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar22;
  uVar18 = uVar19 + 0xd9d4d039 + iVar10 + (uVar22 ^ uVar21 ^ uVar20);
  uVar19 = (uVar18 >> 0x1c | uVar18 * 0x10) + uVar20;
  uVar18 = uVar21 + 0xe6db99e5 + iVar13 + (uVar20 ^ uVar22 ^ uVar19);
  uVar17 = (uVar18 >> 0x15 | uVar18 * 0x800) + uVar19;
  uVar18 = uVar22 + 0x1fa27cf8 + iVar16 + (uVar19 ^ uVar20 ^ uVar17);
  uVar21 = (uVar18 >> 0x10 | uVar18 * 0x10000) + uVar17;
  uVar18 = uVar20 + 0xc4ac5665 + iVar3 + (uVar17 ^ uVar19 ^ uVar21);
  uVar20 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar21;
  uVar18 = uVar19 + 0xf4292244 + iVar1 + ((~uVar17 | uVar20) ^ uVar21);
  uVar22 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar20;
  uVar18 = uVar17 + 0x432aff97 + iVar8 + ((~uVar21 | uVar22) ^ uVar20);
  uVar19 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar22;
  uVar18 = uVar21 + 0xab9423a7 + iVar15 + ((~uVar20 | uVar19) ^ uVar22);
  uVar21 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar19;
  uVar18 = uVar20 + 0xfc93a039 + iVar6 + ((~uVar22 | uVar21) ^ uVar19);
  uVar17 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar21;
  uVar18 = uVar22 + 0x655b59c3 + iVar13 + ((~uVar19 | uVar17) ^ uVar21);
  uVar20 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar17;
  uVar18 = uVar19 + 0x8f0ccc92 + iVar4 + ((~uVar21 | uVar20) ^ uVar17);
  uVar19 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar20;
  uVar18 = (uVar21 - 0x100b83) + iVar11 + ((~uVar17 | uVar19) ^ uVar20);
  uVar22 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar19;
  uVar18 = uVar17 + 0x85845dd1 + iVar2 + ((~uVar20 | uVar22) ^ uVar19);
  uVar21 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar22;
  uVar18 = uVar20 + 0x6fa87e4f + iVar9 + ((~uVar19 | uVar21) ^ uVar22);
  uVar20 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
  uVar18 = uVar19 + 0xfe2ce6e0 + iVar16 + ((~uVar22 | uVar20) ^ uVar21);
  uVar17 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar20;
  uVar18 = uVar22 + 0xa3014314 + iVar7 + ((~uVar21 | uVar17) ^ uVar20);
  uVar19 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar17;
  uVar18 = uVar21 + 0x4e0811a1 + iVar14 + ((~uVar20 | uVar19) ^ uVar17);
  uVar21 = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar19;
  uVar18 = uVar20 + 0xf7537e82 + iVar5 + ((~uVar17 | uVar21) ^ uVar19);
  uVar22 = (uVar18 >> 0x1a | uVar18 * 0x40) + uVar21;
  uVar18 = uVar17 + 0xbd3af235 + iVar12 + ((~uVar19 | uVar22) ^ uVar21);
  uVar20 = (uVar18 >> 0x16 | uVar18 * 0x400) + uVar22;
  uVar18 = uVar19 + 0x2ad7d2bb + iVar3 + ((~uVar21 | uVar20) ^ uVar22);
  uVar17 = (uVar18 >> 0x11 | uVar18 * 0x8000) + uVar20;
  *(uint *)(this + 0x10) = uVar22 + *(int *)(this + 0x10);
  uVar18 = uVar21 + 0xeb86d391 + iVar10 + ((~uVar22 | uVar17) ^ uVar20);
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + uVar17;
  *(uint *)(this + 0x1c) = *(int *)(this + 0x1c) + uVar20;
  *(uint *)(this + 0x14) = (uVar18 >> 0xb | uVar18 * 0x200000) + uVar17 + *(int *)(this + 0x14);
  return;
}

```

---

## Update

```asm
// === 08767100 TaoCrypt::MD5::Update  [0x08767100-0x876724f] ===
 8767100:	55                   	push   %ebp
 8767101:	89 e5                	mov    %esp,%ebp
 8767103:	83 ec 38             	sub    $0x38,%esp
 8767106:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8767109:	8b 55 0c             	mov    0xc(%ebp),%edx
 876710c:	e8 e7 bc fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767111:	81 c3 87 5a c0 00    	add    $0xc05a87,%ebx
 8767117:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876711a:	8b 75 08             	mov    0x8(%ebp),%esi
 876711d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8767120:	8b 7d 10             	mov    0x10(%ebp),%edi
 8767123:	8b 83 38 fa ff ff    	mov    -0x5c8(%ebx),%eax
 8767129:	80 38 00             	cmpb   $0x0,(%eax)
 876712c:	0f 84 8e 00 00 00    	je     87671c0 <_ZN8TaoCrypt3MD56UpdateEPKhj+0xc0>
 8767132:	8d 46 30             	lea    0x30(%esi),%eax
 8767135:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8767138:	8b 46 04             	mov    0x4(%esi),%eax
 876713b:	85 c0                	test   %eax,%eax
 876713d:	75 39                	jne    8767178 <_ZN8TaoCrypt3MD56UpdateEPKhj+0x78>
 876713f:	89 f8                	mov    %edi,%eax
 8767141:	c1 e8 06             	shr    $0x6,%eax
 8767144:	85 c0                	test   %eax,%eax
 8767146:	0f 85 94 00 00 00    	jne    87671e0 <_ZN8TaoCrypt3MD56UpdateEPKhj+0xe0>
 876714c:	85 ff                	test   %edi,%edi
 876714e:	74 19                	je     8767169 <_ZN8TaoCrypt3MD56UpdateEPKhj+0x69>
 8767150:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8767153:	03 46 04             	add    0x4(%esi),%eax
 8767156:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876715a:	89 54 24 04          	mov    %edx,0x4(%esp)
 876715e:	89 04 24             	mov    %eax,(%esp)
 8767161:	e8 3a 67 91 ff       	call   807d8a0 <memcpy@plt>
 8767166:	01 7e 04             	add    %edi,0x4(%esi)
 8767169:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 876716c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 876716f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8767172:	89 ec                	mov    %ebp,%esp
 8767174:	5d                   	pop    %ebp
 8767175:	c3                   	ret
 8767176:	66 90                	xchg   %ax,%ax
 8767178:	b9 40 00 00 00       	mov    $0x40,%ecx
 876717d:	29 c1                	sub    %eax,%ecx
 876717f:	39 cf                	cmp    %ecx,%edi
 8767181:	0f 46 cf             	cmovbe %edi,%ecx
 8767184:	03 45 e4             	add    -0x1c(%ebp),%eax
 8767187:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 876718b:	89 54 24 04          	mov    %edx,0x4(%esp)
 876718f:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8767192:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8767195:	89 04 24             	mov    %eax,(%esp)
 8767198:	e8 03 67 91 ff       	call   807d8a0 <memcpy@plt>
 876719d:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 87671a0:	8b 46 04             	mov    0x4(%esi),%eax
 87671a3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 87671a6:	29 cf                	sub    %ecx,%edi
 87671a8:	01 c8                	add    %ecx,%eax
 87671aa:	01 ca                	add    %ecx,%edx
 87671ac:	83 f8 40             	cmp    $0x40,%eax
 87671af:	89 46 04             	mov    %eax,0x4(%esi)
 87671b2:	74 6c                	je     8767220 <_ZN8TaoCrypt3MD56UpdateEPKhj+0x120>
 87671b4:	85 c0                	test   %eax,%eax
 87671b6:	75 94                	jne    876714c <_ZN8TaoCrypt3MD56UpdateEPKhj+0x4c>
 87671b8:	eb 85                	jmp    876713f <_ZN8TaoCrypt3MD56UpdateEPKhj+0x3f>
 87671ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87671c0:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87671c4:	89 34 24             	mov    %esi,(%esp)
 87671c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 87671cb:	e8 a0 1a ff ff       	call   8758c70 <_ZN8TaoCrypt17HASHwithTransform6UpdateEPKhj>
 87671d0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87671d3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87671d6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87671d9:	89 ec                	mov    %ebp,%esp
 87671db:	5d                   	pop    %ebp
 87671dc:	c3                   	ret
 87671dd:	8d 76 00             	lea    0x0(%esi),%esi
 87671e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 87671e4:	89 55 e0             	mov    %edx,-0x20(%ebp)
 87671e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 87671eb:	89 45 dc             	mov    %eax,-0x24(%ebp)
 87671ee:	89 34 24             	mov    %esi,(%esp)
 87671f1:	e8 1a f0 ff ff       	call   8766210 <_ZN8TaoCrypt3MD512AsmTransformEPKhj>
 87671f6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 87671f9:	89 34 24             	mov    %esi,(%esp)
 87671fc:	c1 e0 06             	shl    $0x6,%eax
 87671ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767203:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8767206:	e8 e5 19 ff ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 876720b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 876720e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8767211:	29 c7                	sub    %eax,%edi
 8767213:	01 c2                	add    %eax,%edx
 8767215:	e9 32 ff ff ff       	jmp    876714c <_ZN8TaoCrypt3MD56UpdateEPKhj+0x4c>
 876721a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8767220:	8b 06                	mov    (%esi),%eax
 8767222:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8767225:	89 34 24             	mov    %esi,(%esp)
 8767228:	ff 50 24             	call   *0x24(%eax)
 876722b:	c7 44 24 04 40 00 00 	movl   $0x40,0x4(%esp)
 8767232:	00 
 8767233:	89 34 24             	mov    %esi,(%esp)
 8767236:	e8 b5 19 ff ff       	call   8758bf0 <_ZN8TaoCrypt17HASHwithTransform9AddLengthEj>
 876723b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 876723e:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8767245:	e9 f5 fe ff ff       	jmp    876713f <_ZN8TaoCrypt3MD56UpdateEPKhj+0x3f>
 876724a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::MD5::Update @ 0x8767100

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::Update(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::MD5::Update(MD5 *this,uchar *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*PTR_isMMX_0936c5d0 == '\0') {
    HASHwithTransform::Update((HASHwithTransform *)this,param_1,param_2);
    return;
  }
  iVar2 = *(int *)(this + 4);
  if (iVar2 != 0) {
    uVar1 = 0x40U - iVar2;
    if (param_2 <= 0x40U - iVar2) {
      uVar1 = param_2;
    }
    memcpy(this + iVar2 + 0x30,param_1,uVar1);
    param_2 = param_2 - uVar1;
    iVar2 = *(int *)(this + 4) + uVar1;
    param_1 = param_1 + uVar1;
    *(int *)(this + 4) = iVar2;
    if (iVar2 == 0x40) {
      (**(code **)(*(int *)this + 0x24))(this);
      HASHwithTransform::AddLength((HASHwithTransform *)this,0x40);
      *(undefined4 *)(this + 4) = 0;
    }
    else if (iVar2 != 0) goto LAB_0876714c;
  }
  uVar1 = param_2 >> 6;
  if (uVar1 != 0) {
    AsmTransform(this,param_1,uVar1);
    HASHwithTransform::AddLength((HASHwithTransform *)this,uVar1 * 0x40);
    param_2 = param_2 + uVar1 * -0x40;
    param_1 = param_1 + uVar1 * 0x40;
  }
LAB_0876714c:
  if (param_2 != 0) {
    memcpy(this + *(int *)(this + 4) + 0x30,param_1,param_2);
    *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  }
  return;
}

```

---

## operator=

```asm
// === 08767330 TaoCrypt::MD5::operator=  [0x08767330-0x87673ff] ===
 8767330:	55                   	push   %ebp
 8767331:	89 e5                	mov    %esp,%ebp
 8767333:	81 ec 98 00 00 00    	sub    $0x98,%esp
 8767339:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876733c:	8b 45 0c             	mov    0xc(%ebp),%eax
 876733f:	e8 b4 ba fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767344:	81 c3 54 58 c0 00    	add    $0xc05854,%ebx
 876734a:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876734d:	8b 75 08             	mov    0x8(%ebp),%esi
 8767350:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8767353:	8d bd 78 ff ff ff    	lea    -0x88(%ebp),%edi
 8767359:	89 44 24 04          	mov    %eax,0x4(%esp)
 876735d:	89 3c 24             	mov    %edi,(%esp)
 8767360:	e8 eb fe ff ff       	call   8767250 <_ZN8TaoCrypt3MD5C1ERKS0_>
 8767365:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8767369:	89 34 24             	mov    %esi,(%esp)
 876736c:	e8 cf fc ff ff       	call   8767040 <_ZN8TaoCrypt3MD54SwapERS0_>
 8767371:	89 f0                	mov    %esi,%eax
 8767373:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8767376:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8767379:	8b 7d fc             	mov    -0x4(%ebp),%edi
 876737c:	89 ec                	mov    %ebp,%esp
 876737e:	5d                   	pop    %ebp
 876737f:	c3                   	ret

08767380 <_ZNK8TaoCrypt3MD512getByteOrderEv>:
 8767380:	55                   	push   %ebp
 8767381:	31 c0                	xor    %eax,%eax
 8767383:	89 e5                	mov    %esp,%ebp
 8767385:	5d                   	pop    %ebp
 8767386:	c3                   	ret
 8767387:	90                   	nop
 8767388:	90                   	nop
 8767389:	90                   	nop
 876738a:	90                   	nop
 876738b:	90                   	nop
 876738c:	90                   	nop
 876738d:	90                   	nop
 876738e:	90                   	nop
 876738f:	90                   	nop

08767390 <_ZNK8TaoCrypt3MD512getBlockSizeEv>:
 8767390:	55                   	push   %ebp
 8767391:	b8 40 00 00 00       	mov    $0x40,%eax
 8767396:	89 e5                	mov    %esp,%ebp
 8767398:	5d                   	pop    %ebp
 8767399:	c3                   	ret
 876739a:	90                   	nop
 876739b:	90                   	nop
 876739c:	90                   	nop
 876739d:	90                   	nop
 876739e:	90                   	nop
 876739f:	90                   	nop

087673a0 <_ZNK8TaoCrypt3MD513getDigestSizeEv>:
 87673a0:	55                   	push   %ebp
 87673a1:	b8 10 00 00 00       	mov    $0x10,%eax
 87673a6:	89 e5                	mov    %esp,%ebp
 87673a8:	5d                   	pop    %ebp
 87673a9:	c3                   	ret
 87673aa:	90                   	nop
 87673ab:	90                   	nop
 87673ac:	90                   	nop
 87673ad:	90                   	nop
 87673ae:	90                   	nop
 87673af:	90                   	nop

087673b0 <_ZNK8TaoCrypt3MD510getPadSizeEv>:
 87673b0:	55                   	push   %ebp
 87673b1:	b8 38 00 00 00       	mov    $0x38,%eax
 87673b6:	89 e5                	mov    %esp,%ebp
 87673b8:	5d                   	pop    %ebp
 87673b9:	c3                   	ret
 87673ba:	90                   	nop
 87673bb:	90                   	nop
 87673bc:	90                   	nop
 87673bd:	90                   	nop
 87673be:	90                   	nop
 87673bf:	90                   	nop

087673c0 <_ZN8TaoCrypt3MD5D1Ev>:
 87673c0:	e8 ff d1 fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87673c5:	81 c1 d3 57 c0 00    	add    $0xc057d3,%ecx
 87673cb:	55                   	push   %ebp
 87673cc:	89 e5                	mov    %esp,%ebp
 87673ce:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87673d4:	8d 50 08             	lea    0x8(%eax),%edx
 87673d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87673da:	89 10                	mov    %edx,(%eax)
 87673dc:	5d                   	pop    %ebp
 87673dd:	c3                   	ret
 87673de:	90                   	nop
 87673df:	90                   	nop

087673e0 <_ZN8TaoCrypt3MD5D0Ev>:
 87673e0:	e8 df d1 fb ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 87673e5:	81 c1 b3 57 c0 00    	add    $0xc057b3,%ecx
 87673eb:	55                   	push   %ebp
 87673ec:	89 e5                	mov    %esp,%ebp
 87673ee:	8b 81 c4 ff ff ff    	mov    -0x3c(%ecx),%eax
 87673f4:	8d 50 08             	lea    0x8(%eax),%edx
 87673f7:	8b 45 08             	mov    0x8(%ebp),%eax
 87673fa:	89 10                	mov    %edx,(%eax)
 87673fc:	5d                   	pop    %ebp
 87673fd:	c3                   	ret
 87673fe:	90                   	nop
 87673ff:	90                   	nop

```

```c
// TaoCrypt::MD5::operator= @ 0x8767330

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::MD5::TEMPNAMEPLACEHOLDERVALUE(TaoCrypt::MD5 const&) */

MD5 * __thiscall TaoCrypt::MD5::operator=(MD5 *this,MD5 *param_1)

{
  MD5 local_8c [124];
  
  MD5(local_8c,param_1);
  Swap(this,local_8c);
  return this;
}

```


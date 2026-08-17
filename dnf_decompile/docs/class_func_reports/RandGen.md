# RandGen

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## getFloat

```asm
// === 08ae0288 RandGen::getFloat  [0x08ae0288-0x8ae02a3] ===
 8ae0288:	55                   	push   %ebp
 8ae0289:	89 e5                	mov    %esp,%ebp
 8ae028b:	83 ec 18             	sub    $0x18,%esp
 8ae028e:	d9 45 0c             	flds   0xc(%ebp)
 8ae0291:	d8 65 08             	fsubs  0x8(%ebp)
 8ae0294:	d9 5d f4             	fstps  -0xc(%ebp)
 8ae0297:	e8 6a ff ff ff       	call   8ae0206 <_ZN7RandGen10getFloat01Ev>
 8ae029c:	d8 4d f4             	fmuls  -0xc(%ebp)
 8ae029f:	d8 45 08             	fadds  0x8(%ebp)
 8ae02a2:	c9                   	leave
 8ae02a3:	c3                   	ret

```

```c
// RandGen::getFloat @ 0x8ae0288

float32 RandGen::getFloat(float32 min,float32 max)

{
  float32 fVar1;
  
  fVar1 = getFloat01();
  return (float32)((float)fVar1 * ((float)max - (float)min) + (float)min);
}

```

---

## getFloat01

```asm
// === 08ae0206 RandGen::getFloat01  [0x08ae0206-0x8ae0243] ===
 8ae0206:	55                   	push   %ebp
 8ae0207:	89 e5                	mov    %esp,%ebp
 8ae0209:	83 ec 18             	sub    $0x18,%esp
 8ae020c:	e8 d3 f9 ff ff       	call   8adfbe4 <_ZN8XorRand415getStaticUInt32Ev>
 8ae0211:	89 c1                	mov    %eax,%ecx
 8ae0213:	ba 01 80 00 80       	mov    $0x80008001,%edx
 8ae0218:	89 c8                	mov    %ecx,%eax
 8ae021a:	f7 e2                	mul    %edx
 8ae021c:	c1 ea 0f             	shr    $0xf,%edx
 8ae021f:	89 d0                	mov    %edx,%eax
 8ae0221:	c1 e0 10             	shl    $0x10,%eax
 8ae0224:	29 d0                	sub    %edx,%eax
 8ae0226:	89 ca                	mov    %ecx,%edx
 8ae0228:	29 c2                	sub    %eax,%edx
 8ae022a:	89 d0                	mov    %edx,%eax
 8ae022c:	ba 00 00 00 00       	mov    $0x0,%edx
 8ae0231:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ae0234:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8ae0237:	df 6d f0             	fildll -0x10(%ebp)
 8ae023a:	d9 05 c0 7c e3 08    	flds   0x8e37cc0
 8ae0240:	de c9                	fmulp  %st,%st(1)
 8ae0242:	c9                   	leave
 8ae0243:	c3                   	ret

```

```c
// RandGen::getFloat01 @ 0x8ae0206

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float32 RandGen::getFloat01(void)

{
  uint32 uVar1;
  
  uVar1 = XorRand4::getStaticUInt32();
  return (float32)(_DAT_08e37cc0 * (float)(uVar1 % 0xffff));
}

```

---

## getFloat01_08ae0244

```asm
// === 08ae0244 RandGen::getFloat01  [0x08ae0244-0x8ae0287] ===
 8ae0244:	55                   	push   %ebp
 8ae0245:	89 e5                	mov    %esp,%ebp
 8ae0247:	83 ec 0c             	sub    $0xc,%esp
 8ae024a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ae024d:	89 04 24             	mov    %eax,(%esp)
 8ae0250:	e8 79 f8 ff ff       	call   8adface <_ZN8XorRand49getUInt32Ev>
 8ae0255:	89 c1                	mov    %eax,%ecx
 8ae0257:	ba 01 80 00 80       	mov    $0x80008001,%edx
 8ae025c:	89 c8                	mov    %ecx,%eax
 8ae025e:	f7 e2                	mul    %edx
 8ae0260:	c1 ea 0f             	shr    $0xf,%edx
 8ae0263:	89 d0                	mov    %edx,%eax
 8ae0265:	c1 e0 10             	shl    $0x10,%eax
 8ae0268:	29 d0                	sub    %edx,%eax
 8ae026a:	89 ca                	mov    %ecx,%edx
 8ae026c:	29 c2                	sub    %eax,%edx
 8ae026e:	89 d0                	mov    %edx,%eax
 8ae0270:	ba 00 00 00 00       	mov    $0x0,%edx
 8ae0275:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8ae0278:	89 55 fc             	mov    %edx,-0x4(%ebp)
 8ae027b:	df 6d f8             	fildll -0x8(%ebp)
 8ae027e:	d9 05 c0 7c e3 08    	flds   0x8e37cc0
 8ae0284:	de c9                	fmulp  %st,%st(1)
 8ae0286:	c9                   	leave
 8ae0287:	c3                   	ret

```

```c
// RandGen::getFloat01 @ 0x8ae0244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float32 RandGen::getFloat01(XorRand4 *rand)

{
  uint32 uVar1;
  
  uVar1 = XorRand4::getUInt32(rand);
  return (float32)(_DAT_08e37cc0 * (float)(uVar1 % 0xffff));
}

```

---

## getFloat_08ae02a4

```asm
// === 08ae02a4 RandGen::getFloat  [0x08ae02a4-0x8ae02cf] ===
 8ae02a4:	55                   	push   %ebp
 8ae02a5:	89 e5                	mov    %esp,%ebp
 8ae02a7:	83 ec 10             	sub    $0x10,%esp
 8ae02aa:	d9 45 10             	flds   0x10(%ebp)
 8ae02ad:	d8 65 0c             	fsubs  0xc(%ebp)
 8ae02b0:	d9 5d fc             	fstps  -0x4(%ebp)
 8ae02b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ae02b6:	89 04 24             	mov    %eax,(%esp)
 8ae02b9:	e8 86 ff ff ff       	call   8ae0244 <_ZN7RandGen10getFloat01EP8XorRand4>
 8ae02be:	d8 4d fc             	fmuls  -0x4(%ebp)
 8ae02c1:	d8 45 0c             	fadds  0xc(%ebp)
 8ae02c4:	c9                   	leave
 8ae02c5:	c3                   	ret
 8ae02c6:	90                   	nop
 8ae02c7:	90                   	nop
 8ae02c8:	90                   	nop
 8ae02c9:	90                   	nop
 8ae02ca:	90                   	nop
 8ae02cb:	90                   	nop
 8ae02cc:	90                   	nop
 8ae02cd:	90                   	nop
 8ae02ce:	90                   	nop
 8ae02cf:	90                   	nop

```

```c
// RandGen::getFloat @ 0x8ae02a4

float32 RandGen::getFloat(XorRand4 *rand,float32 min,float32 max)

{
  float32 fVar1;
  
  fVar1 = getFloat01(rand);
  return (float32)((float)fVar1 * ((float)max - (float)min) + (float)min);
}

```


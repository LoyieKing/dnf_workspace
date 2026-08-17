# WongWork__CMCAPManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## init

```asm
// === 080f8aba WongWork::CMCAPManager::init  [0x080f8aba-0x80f8bdf] ===
 80f8aba:	55                   	push   %ebp
 80f8abb:	89 e5                	mov    %esp,%ebp
 80f8abd:	83 ec 18             	sub    $0x18,%esp
 80f8ac0:	c7 44 24 08 f0 3c 00 	movl   $0x3cf0,0x8(%esp)
 80f8ac7:	00 
 80f8ac8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f8acf:	00 
 80f8ad0:	c7 04 24 20 ad 3f 09 	movl   $0x93fad20,(%esp)
 80f8ad7:	e8 e4 51 f8 ff       	call   807dcc0 <memset@plt>
 80f8adc:	c7 05 50 b0 3f 09 f4 	movl   $0x1f4,0x93fb050
 80f8ae3:	01 00 00 
 80f8ae6:	c7 05 dc ae 3f 09 fa 	movl   $0xfa,0x93faedc
 80f8aed:	00 00 00 
 80f8af0:	c7 05 d4 ae 3f 09 fa 	movl   $0xfa,0x93faed4
 80f8af7:	00 00 00 
 80f8afa:	c7 05 08 bc 3f 09 03 	movl   $0x3,0x93fbc08
 80f8b01:	00 00 00 
 80f8b04:	c7 05 fc b4 3f 09 e8 	movl   $0x3e8,0x93fb4fc
 80f8b0b:	03 00 00 
 80f8b0e:	c7 05 6c b3 3f 09 14 	movl   $0x14,0x93fb36c
 80f8b15:	00 00 00 
 80f8b18:	c7 05 b8 b9 3f 09 c8 	movl   $0xc8,0x93fb9b8
 80f8b1f:	00 00 00 
 80f8b22:	c7 05 5c b0 3f 09 fa 	movl   $0xfa,0x93fb05c
 80f8b29:	00 00 00 
 80f8b2c:	c7 05 d4 b1 3f 09 fa 	movl   $0xfa,0x93fb1d4
 80f8b33:	00 00 00 
 80f8b36:	c7 05 f8 b4 3f 09 fa 	movl   $0xfa,0x93fb4f8
 80f8b3d:	00 00 00 
 80f8b40:	c7 05 d8 b1 3f 09 f4 	movl   $0x1f4,0x93fb1d8
 80f8b47:	01 00 00 
 80f8b4a:	c7 05 dc b1 3f 09 e8 	movl   $0x3e8,0x93fb1dc
 80f8b51:	03 00 00 
 80f8b54:	c7 05 70 b3 3f 09 14 	movl   $0x14,0x93fb370
 80f8b5b:	00 00 00 
 80f8b5e:	c7 05 bc ae 3f 09 03 	movl   $0x3,0x93faebc
 80f8b65:	00 00 00 
 80f8b68:	c7 05 c0 ae 3f 09 03 	movl   $0x3,0x93faec0
 80f8b6f:	00 00 00 
 80f8b72:	c7 05 c4 ae 3f 09 03 	movl   $0x3,0x93faec4
 80f8b79:	00 00 00 
 80f8b7c:	c7 05 b4 ae 3f 09 03 	movl   $0x3,0x93faeb4
 80f8b83:	00 00 00 
 80f8b86:	c7 05 b8 ae 3f 09 03 	movl   $0x3,0x93faeb8
 80f8b8d:	00 00 00 
 80f8b90:	c7 05 44 b0 3f 09 f4 	movl   $0x1f4,0x93fb044
 80f8b97:	01 00 00 
 80f8b9a:	c7 05 04 b5 3f 09 00 	movl   $0x0,0x93fb504
 80f8ba1:	00 00 00 
 80f8ba4:	c7 05 e8 b1 3f 09 00 	movl   $0x0,0x93fb1e8
 80f8bab:	00 00 00 
 80f8bae:	c7 05 c0 b9 3f 09 10 	movl   $0x2710,0x93fb9c0
 80f8bb5:	27 00 00 
 80f8bb8:	c7 05 e0 ae 3f 09 f4 	movl   $0x1f4,0x93faee0
 80f8bbf:	01 00 00 
 80f8bc2:	c7 44 24 08 f0 3c 00 	movl   $0x3cf0,0x8(%esp)
 80f8bc9:	00 
 80f8bca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f8bd1:	00 
 80f8bd2:	c7 04 24 20 ad 3f 09 	movl   $0x93fad20,(%esp)
 80f8bd9:	e8 e2 50 f8 ff       	call   807dcc0 <memset@plt>
 80f8bde:	c9                   	leave
 80f8bdf:	c3                   	ret

```

```c
// WongWork::CMCAPManager::init @ 0x80f8aba

/* WongWork::CMCAPManager::init() */

void WongWork::CMCAPManager::init(void)

{
  memset(pointPerHackType_,0,0x3cf0);
  pointPerHackType_._816_4_ = 500;
  pointPerHackType_._444_4_ = 0xfa;
  pointPerHackType_._436_4_ = 0xfa;
  pointPerHackType_._3816_4_ = 3;
  pointPerHackType_._2012_4_ = 1000;
  pointPerHackType_._1612_4_ = 0x14;
  pointPerHackType_._3224_4_ = 200;
  pointPerHackType_._828_4_ = 0xfa;
  pointPerHackType_._1204_4_ = 0xfa;
  pointPerHackType_._2008_4_ = 0xfa;
  pointPerHackType_._1208_4_ = 500;
  pointPerHackType_._1212_4_ = 1000;
  pointPerHackType_._1616_4_ = 0x14;
  pointPerHackType_._412_4_ = 3;
  pointPerHackType_._416_4_ = 3;
  pointPerHackType_._420_4_ = 3;
  pointPerHackType_._404_4_ = 3;
  pointPerHackType_._408_4_ = 3;
  pointPerHackType_._804_4_ = 500;
  pointPerHackType_._2020_4_ = 0;
  pointPerHackType_._1224_4_ = 0;
  pointPerHackType_._3232_4_ = 10000;
  pointPerHackType_._448_4_ = 500;
  memset(pointPerHackType_,0,0x3cf0);
  return;
}

```

---

## setPointPerHackType

```asm
// === 080f8be0 WongWork::CMCAPManager::setPointPerHackType  [0x080f8be0-0x80f8c4d] ===
 80f8be0:	55                   	push   %ebp
 80f8be1:	89 e5                	mov    %esp,%ebp
 80f8be3:	83 ec 38             	sub    $0x38,%esp
 80f8be6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f8bed:	00 
 80f8bee:	c7 44 24 08 d2 01 00 	movl   $0x1d2,0x8(%esp)
 80f8bf5:	00 
 80f8bf6:	c7 44 24 04 60 e2 b3 	movl   $0x8b3e260,0x4(%esp)
 80f8bfd:	08 
 80f8bfe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f8c01:	89 04 24             	mov    %eax,(%esp)
 80f8c04:	e8 0f 6b 45 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80f8c09:	c7 44 24 04 00 d6 b3 	movl   $0x8b3d600,0x4(%esp)
 80f8c10:	08 
 80f8c11:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f8c14:	89 04 24             	mov    %eax,(%esp)
 80f8c17:	e8 6c 6b 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80f8c1c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f8c23:	eb 19                	jmp    80f8c3e <_ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi+0x5e>
 80f8c25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f8c28:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f8c2b:	c1 e2 02             	shl    $0x2,%edx
 80f8c2e:	03 55 08             	add    0x8(%ebp),%edx
 80f8c31:	8b 12                	mov    (%edx),%edx
 80f8c33:	89 14 85 20 ad 3f 09 	mov    %edx,0x93fad20(,%eax,4)
 80f8c3a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f8c3e:	81 7d f4 3b 0f 00 00 	cmpl   $0xf3b,-0xc(%ebp)
 80f8c45:	0f 9e c0             	setle  %al
 80f8c48:	84 c0                	test   %al,%al
 80f8c4a:	75 d9                	jne    80f8c25 <_ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi+0x45>
 80f8c4c:	c9                   	leave
 80f8c4d:	c3                   	ret

```

```c
// WongWork::CMCAPManager::setPointPerHackType @ 0x80f8be0

/* WongWork::CMCAPManager::setPointPerHackType(int*) */

void WongWork::CMCAPManager::setPointPerHackType(int *param_1)

{
  cMyTrace local_20 [16];
  int local_10;
  
  cMyTrace::cMyTrace(local_20,"static void WongWork::CMCAPManager::setPointPerHackType(int*)",0x1d2,
                     0);
  cMyTrace::operator()(local_20,"Load cleanpad point per hack type");
  for (local_10 = 0; local_10 < 0xf3c; local_10 = local_10 + 1) {
    *(int *)(pointPerHackType_ + local_10 * 4) = param_1[local_10];
  }
  return;
}

```


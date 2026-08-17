# CBingoTest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CBingoTest

```asm
// === 080caecc CBingoTest::CBingoTest  [0x080caecc-0x80caedf] ===
 80caecc:	55                   	push   %ebp
 80caecd:	89 e5                	mov    %esp,%ebp
 80caecf:	83 ec 18             	sub    $0x18,%esp
 80caed2:	8b 45 08             	mov    0x8(%ebp),%eax
 80caed5:	89 04 24             	mov    %eax,(%esp)
 80caed8:	e8 4f f9 ff ff       	call   80ca82c <_ZN6CBingoC1Ev>
 80caedd:	c9                   	leave
 80caede:	c3                   	ret
 80caedf:	90                   	nop

```

```c
// CBingoTest::CBingoTest @ 0x80caecc

/* CBingoTest::CBingoTest() */

void __thiscall CBingoTest::CBingoTest(CBingoTest *this)

{
  CBingo::CBingo((CBingo *)this);
  return;
}

```

---

## calBoradMatchLine

```asm
// === 080cb03c CBingoTest::calBoradMatchLine  [0x080cb03c-0x80cb06d] ===
 80cb03c:	55                   	push   %ebp
 80cb03d:	89 e5                	mov    %esp,%ebp
 80cb03f:	83 ec 10             	sub    $0x10,%esp
 80cb042:	c7 45 fc 3f 84 10 00 	movl   $0x10843f,-0x4(%ebp)
 80cb049:	c7 45 fc c7 10 46 01 	movl   $0x14610c7,-0x4(%ebp)
 80cb050:	c7 45 fc 10 91 1f 00 	movl   $0x1f9110,-0x4(%ebp)
 80cb057:	c7 45 fc d5 6d 57 01 	movl   $0x1576dd5,-0x4(%ebp)
 80cb05e:	c7 45 fc d5 7d 57 01 	movl   $0x1577dd5,-0x4(%ebp)
 80cb065:	c7 45 fc ff ff ff 01 	movl   $0x1ffffff,-0x4(%ebp)
 80cb06c:	c9                   	leave
 80cb06d:	c3                   	ret

```

```c
// CBingoTest::calBoradMatchLine @ 0x80cb03c

/* CBingoTest::calBoradMatchLine() */

void CBingoTest::calBoradMatchLine(void)

{
  return;
}

```

---

## calNewValue

```asm
// === 080cb06e CBingoTest::calNewValue  [0x080cb06e-0x80cb07d] ===
 80cb06e:	55                   	push   %ebp
 80cb06f:	89 e5                	mov    %esp,%ebp
 80cb071:	83 ec 10             	sub    $0x10,%esp
 80cb074:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 80cb07b:	c9                   	leave
 80cb07c:	c3                   	ret
 80cb07d:	90                   	nop

```

```c
// CBingoTest::calNewValue @ 0x80cb06e

/* CBingoTest::calNewValue() */

void CBingoTest::calNewValue(void)

{
  return;
}

```

---

## getBingoRandomVaule

```asm
// === 080cb07e CBingoTest::getBingoRandomVaule  [0x080cb07e-0x80cb172] ===
 80cb07e:	55                   	push   %ebp
 80cb07f:	89 e5                	mov    %esp,%ebp
 80cb081:	83 ec 38             	sub    $0x38,%esp
 80cb084:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80cb08b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80cb092:	eb 1a                	jmp    80cb0ae <_ZN10CBingoTest19getBingoRandomVauleEv+0x30>
 80cb094:	8b 45 08             	mov    0x8(%ebp),%eax
 80cb097:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 80cb09e:	00 
 80cb09f:	89 04 24             	mov    %eax,(%esp)
 80cb0a2:	e8 c9 fd ff ff       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80cb0a7:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80cb0aa:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80cb0ae:	83 7d e4 63          	cmpl   $0x63,-0x1c(%ebp)
 80cb0b2:	0f 9e c0             	setle  %al
 80cb0b5:	84 c0                	test   %al,%al
 80cb0b7:	75 db                	jne    80cb094 <_ZN10CBingoTest19getBingoRandomVauleEv+0x16>
 80cb0b9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80cb0c0:	eb 1a                	jmp    80cb0dc <_ZN10CBingoTest19getBingoRandomVauleEv+0x5e>
 80cb0c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80cb0c5:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 80cb0cc:	00 
 80cb0cd:	89 04 24             	mov    %eax,(%esp)
 80cb0d0:	e8 9b fd ff ff       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80cb0d5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80cb0d8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80cb0dc:	83 7d e8 63          	cmpl   $0x63,-0x18(%ebp)
 80cb0e0:	0f 9e c0             	setle  %al
 80cb0e3:	84 c0                	test   %al,%al
 80cb0e5:	75 db                	jne    80cb0c2 <_ZN10CBingoTest19getBingoRandomVauleEv+0x44>
 80cb0e7:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80cb0ee:	eb 1a                	jmp    80cb10a <_ZN10CBingoTest19getBingoRandomVauleEv+0x8c>
 80cb0f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80cb0f3:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 80cb0fa:	00 
 80cb0fb:	89 04 24             	mov    %eax,(%esp)
 80cb0fe:	e8 6d fd ff ff       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80cb103:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80cb106:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80cb10a:	83 7d ec 63          	cmpl   $0x63,-0x14(%ebp)
 80cb10e:	0f 9e c0             	setle  %al
 80cb111:	84 c0                	test   %al,%al
 80cb113:	75 db                	jne    80cb0f0 <_ZN10CBingoTest19getBingoRandomVauleEv+0x72>
 80cb115:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80cb11c:	eb 1a                	jmp    80cb138 <_ZN10CBingoTest19getBingoRandomVauleEv+0xba>
 80cb11e:	8b 45 08             	mov    0x8(%ebp),%eax
 80cb121:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 80cb128:	00 
 80cb129:	89 04 24             	mov    %eax,(%esp)
 80cb12c:	e8 3f fd ff ff       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80cb131:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80cb134:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80cb138:	83 7d f0 63          	cmpl   $0x63,-0x10(%ebp)
 80cb13c:	0f 9e c0             	setle  %al
 80cb13f:	84 c0                	test   %al,%al
 80cb141:	75 db                	jne    80cb11e <_ZN10CBingoTest19getBingoRandomVauleEv+0xa0>
 80cb143:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80cb14a:	eb 1a                	jmp    80cb166 <_ZN10CBingoTest19getBingoRandomVauleEv+0xe8>
 80cb14c:	8b 45 08             	mov    0x8(%ebp),%eax
 80cb14f:	c7 44 24 04 32 00 00 	movl   $0x32,0x4(%esp)
 80cb156:	00 
 80cb157:	89 04 24             	mov    %eax,(%esp)
 80cb15a:	e8 11 fd ff ff       	call   80cae70 <_ZN6CBingo19getBingoRandomVauleEi>
 80cb15f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80cb162:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80cb166:	83 7d f4 63          	cmpl   $0x63,-0xc(%ebp)
 80cb16a:	0f 9e c0             	setle  %al
 80cb16d:	84 c0                	test   %al,%al
 80cb16f:	75 db                	jne    80cb14c <_ZN10CBingoTest19getBingoRandomVauleEv+0xce>
 80cb171:	c9                   	leave
 80cb172:	c3                   	ret

```

```c
// CBingoTest::getBingoRandomVaule @ 0x80cb07e

/* CBingoTest::getBingoRandomVaule() */

void __thiscall CBingoTest::getBingoRandomVaule(CBingoTest *this)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  for (local_20 = 0; local_20 < 100; local_20 = local_20 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,10);
  }
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x14);
  }
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x1e);
  }
  for (local_14 = 0; local_14 < 100; local_14 = local_14 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x28);
  }
  for (local_10 = 0; local_10 < 100; local_10 = local_10 + 1) {
    CBingo::getBingoRandomVaule((CBingo *)this,0x32);
  }
  return;
}

```

---

## getTimeFromString

```asm
// === 080caf3e CBingoTest::getTimeFromString  [0x080caf3e-0x80caf7b] ===
 80caf3e:	55                   	push   %ebp
 80caf3f:	89 e5                	mov    %esp,%ebp
 80caf41:	83 ec 58             	sub    $0x58,%esp
 80caf44:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caf47:	8b 55 0c             	mov    0xc(%ebp),%edx
 80caf4a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80caf4e:	89 04 24             	mov    %eax,(%esp)
 80caf51:	e8 97 1f 00 00       	call   80cceed <_ZN5boost10posix_time16time_from_stringERKSs>
 80caf56:	83 ec 04             	sub    $0x4,%esp
 80caf59:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80caf5c:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80caf5f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80caf63:	89 04 24             	mov    %eax,(%esp)
 80caf66:	e8 03 1f 00 00       	call   80cce6e <_ZN5boost10posix_time5to_tmERKNS0_5ptimeE>
 80caf6b:	83 ec 04             	sub    $0x4,%esp
 80caf6e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 80caf71:	89 04 24             	mov    %eax,(%esp)
 80caf74:	e8 a7 38 fb ff       	call   807e820 <mktime@plt>
 80caf79:	c9                   	leave
 80caf7a:	c3                   	ret
 80caf7b:	90                   	nop

```

```c
// CBingoTest::getTimeFromString @ 0x80caf3e

/* CBingoTest::getTimeFromString(std::string) */

void __thiscall CBingoTest::getTimeFromString(CBingoTest *this,string param_1)

{
  tm local_40;
  posix_time local_14 [16];
  
  boost::posix_time::time_from_string(local_14,(string *)param_1._M_dataplus._M_p);
  boost::posix_time::to_tm((ptime *)&local_40);
  mktime(&local_40);
  return;
}

```

---

## getToday

```asm
// === 080caf7c CBingoTest::getToday  [0x080caf7c-0x80cb02f] ===
 80caf7c:	55                   	push   %ebp
 80caf7d:	89 e5                	mov    %esp,%ebp
 80caf7f:	56                   	push   %esi
 80caf80:	53                   	push   %ebx
 80caf81:	83 ec 20             	sub    $0x20,%esp
 80caf84:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caf87:	89 04 24             	mov    %eax,(%esp)
 80caf8a:	e8 41 b6 63 00       	call   87065d0 <_ZNSsC1Ev>
 80caf8f:	c7 44 24 04 5a 6b b2 	movl   $0x8b26b5a,0x4(%esp)
 80caf96:	08 
 80caf97:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caf9a:	89 04 24             	mov    %eax,(%esp)
 80caf9d:	e8 7e d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cafa2:	c7 44 24 04 6e 6b b2 	movl   $0x8b26b6e,0x4(%esp)
 80cafa9:	08 
 80cafaa:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cafad:	89 04 24             	mov    %eax,(%esp)
 80cafb0:	e8 6b d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cafb5:	c7 44 24 04 82 6b b2 	movl   $0x8b26b82,0x4(%esp)
 80cafbc:	08 
 80cafbd:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cafc0:	89 04 24             	mov    %eax,(%esp)
 80cafc3:	e8 58 d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cafc8:	c7 44 24 04 96 6b b2 	movl   $0x8b26b96,0x4(%esp)
 80cafcf:	08 
 80cafd0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cafd3:	89 04 24             	mov    %eax,(%esp)
 80cafd6:	e8 45 d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cafdb:	c7 44 24 04 aa 6b b2 	movl   $0x8b26baa,0x4(%esp)
 80cafe2:	08 
 80cafe3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cafe6:	89 04 24             	mov    %eax,(%esp)
 80cafe9:	e8 32 d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cafee:	c7 44 24 04 be 6b b2 	movl   $0x8b26bbe,0x4(%esp)
 80caff5:	08 
 80caff6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caff9:	89 04 24             	mov    %eax,(%esp)
 80caffc:	e8 1f d7 63 00       	call   8708720 <_ZNSsaSEPKc>
 80cb001:	eb 1b                	jmp    80cb01e <_ZN10CBingoTest8getTodayEv+0xa2>
 80cb003:	89 d3                	mov    %edx,%ebx
 80cb005:	89 c6                	mov    %eax,%esi
 80cb007:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cb00a:	89 04 24             	mov    %eax,(%esp)
 80cb00d:	e8 ce cb 63 00       	call   8707be0 <_ZNSsD1Ev>
 80cb012:	89 f0                	mov    %esi,%eax
 80cb014:	89 da                	mov    %ebx,%edx
 80cb016:	89 04 24             	mov    %eax,(%esp)
 80cb019:	e8 32 87 a1 00       	call   8ae3750 <_Unwind_Resume>
 80cb01e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80cb021:	89 04 24             	mov    %eax,(%esp)
 80cb024:	e8 b7 cb 63 00       	call   8707be0 <_ZNSsD1Ev>
 80cb029:	83 c4 20             	add    $0x20,%esp
 80cb02c:	5b                   	pop    %ebx
 80cb02d:	5e                   	pop    %esi
 80cb02e:	5d                   	pop    %ebp
 80cb02f:	c3                   	ret

```

```c
// CBingoTest::getToday @ 0x80caf7c

/* CBingoTest::getToday() */

void CBingoTest::getToday(void)

{
  string local_10 [4];
  
  std::string::string(local_10);
                    /* try { // try from 080caf9d to 080cb000 has its CatchHandler @ 080cb003 */
  std::string::operator=(local_10,"2012-07-19 05:00:00");
  std::string::operator=(local_10,"2012-07-19 06:00:00");
  std::string::operator=(local_10,"2012-07-20 12:00:00");
  std::string::operator=(local_10,"2012-07-31 11:00:00");
  std::string::operator=(local_10,"2012-08-01 05:00:00");
  std::string::operator=(local_10,"2012-08-01 07:00:00");
  std::string::~string(local_10);
  return;
}

```

---

## resetBoard

```asm
// === 080cb030 CBingoTest::resetBoard  [0x080cb030-0x80cb035] ===
 80cb030:	55                   	push   %ebp
 80cb031:	89 e5                	mov    %esp,%ebp
 80cb033:	5d                   	pop    %ebp
 80cb034:	c3                   	ret
 80cb035:	90                   	nop

```

```c
// CBingoTest::resetBoard @ 0x80cb030

/* CBingoTest::resetBoard() */

void CBingoTest::resetBoard(void)

{
  return;
}

```

---

## resetQuiz

```asm
// === 080cb036 CBingoTest::resetQuiz  [0x080cb036-0x80cb03b] ===
 80cb036:	55                   	push   %ebp
 80cb037:	89 e5                	mov    %esp,%ebp
 80cb039:	5d                   	pop    %ebp
 80cb03a:	c3                   	ret
 80cb03b:	90                   	nop

```

```c
// CBingoTest::resetQuiz @ 0x80cb036

/* CBingoTest::resetQuiz() */

void CBingoTest::resetQuiz(void)

{
  return;
}

```

---

## run

```asm
// === 080caef4 CBingoTest::run  [0x080caef4-0x80caf3d] ===
 80caef4:	55                   	push   %ebp
 80caef5:	89 e5                	mov    %esp,%ebp
 80caef7:	83 ec 18             	sub    $0x18,%esp
 80caefa:	8b 45 08             	mov    0x8(%ebp),%eax
 80caefd:	89 04 24             	mov    %eax,(%esp)
 80caf00:	e8 77 00 00 00       	call   80caf7c <_ZN10CBingoTest8getTodayEv>
 80caf05:	8b 45 08             	mov    0x8(%ebp),%eax
 80caf08:	89 04 24             	mov    %eax,(%esp)
 80caf0b:	e8 20 01 00 00       	call   80cb030 <_ZN10CBingoTest10resetBoardEv>
 80caf10:	8b 45 08             	mov    0x8(%ebp),%eax
 80caf13:	89 04 24             	mov    %eax,(%esp)
 80caf16:	e8 1b 01 00 00       	call   80cb036 <_ZN10CBingoTest9resetQuizEv>
 80caf1b:	8b 45 08             	mov    0x8(%ebp),%eax
 80caf1e:	89 04 24             	mov    %eax,(%esp)
 80caf21:	e8 16 01 00 00       	call   80cb03c <_ZN10CBingoTest17calBoradMatchLineEv>
 80caf26:	8b 45 08             	mov    0x8(%ebp),%eax
 80caf29:	89 04 24             	mov    %eax,(%esp)
 80caf2c:	e8 3d 01 00 00       	call   80cb06e <_ZN10CBingoTest11calNewValueEv>
 80caf31:	8b 45 08             	mov    0x8(%ebp),%eax
 80caf34:	89 04 24             	mov    %eax,(%esp)
 80caf37:	e8 42 01 00 00       	call   80cb07e <_ZN10CBingoTest19getBingoRandomVauleEv>
 80caf3c:	c9                   	leave
 80caf3d:	c3                   	ret

```

```c
// CBingoTest::run @ 0x80caef4

/* CBingoTest::run() */

void __thiscall CBingoTest::run(CBingoTest *this)

{
  getToday();
  resetBoard();
  resetQuiz();
  calBoradMatchLine();
  calNewValue();
  getBingoRandomVaule(this);
  return;
}

```

---

## ~CBingoTest

```asm
// === 080caee0 CBingoTest::~CBingoTest  [0x080caee0-0x80caef3] ===
 80caee0:	55                   	push   %ebp
 80caee1:	89 e5                	mov    %esp,%ebp
 80caee3:	83 ec 18             	sub    $0x18,%esp
 80caee6:	8b 45 08             	mov    0x8(%ebp),%eax
 80caee9:	89 04 24             	mov    %eax,(%esp)
 80caeec:	e8 ff f9 ff ff       	call   80ca8f0 <_ZN6CBingoD1Ev>
 80caef1:	c9                   	leave
 80caef2:	c3                   	ret
 80caef3:	90                   	nop

```

```c
// CBingoTest::~CBingoTest @ 0x80caee0

/* CBingoTest::~CBingoTest() */

void __thiscall CBingoTest::~CBingoTest(CBingoTest *this)

{
  CBingo::~CBingo((CBingo *)this);
  return;
}

```


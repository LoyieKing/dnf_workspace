# CNRDScriptData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CNRDScriptData

```asm
// === 0807f858 CNRDScriptData::CNRDScriptData  [0x0807f858-0x807f965] ===
 807f858:	55                   	push   %ebp
 807f859:	89 e5                	mov    %esp,%ebp
 807f85b:	56                   	push   %esi
 807f85c:	53                   	push   %ebx
 807f85d:	83 ec 10             	sub    $0x10,%esp
 807f860:	8b 45 08             	mov    0x8(%ebp),%eax
 807f863:	89 04 24             	mov    %eax,(%esp)
 807f866:	e8 3f 71 a5 00       	call   8ad69aa <_ZN10CharStringC1Ev>
 807f86b:	8b 45 08             	mov    0x8(%ebp),%eax
 807f86e:	83 c0 04             	add    $0x4,%eax
 807f871:	89 04 24             	mov    %eax,(%esp)
 807f874:	e8 cf 0a 00 00       	call   8080348 <_ZN18StringUnorderedMapI19CharStringHashTraitiEC1Ev>
 807f879:	8b 45 08             	mov    0x8(%ebp),%eax
 807f87c:	83 c0 24             	add    $0x24,%eax
 807f87f:	89 04 24             	mov    %eax,(%esp)
 807f882:	e8 67 0b 00 00       	call   80803ee <_ZN18StringUnorderedMapI19CharStringHashTraitfEC1Ev>
 807f887:	8b 45 08             	mov    0x8(%ebp),%eax
 807f88a:	83 c0 44             	add    $0x44,%eax
 807f88d:	89 04 24             	mov    %eax,(%esp)
 807f890:	e8 b3 0a 00 00       	call   8080348 <_ZN18StringUnorderedMapI19CharStringHashTraitiEC1Ev>
 807f895:	8b 45 08             	mov    0x8(%ebp),%eax
 807f898:	83 c0 64             	add    $0x64,%eax
 807f89b:	89 04 24             	mov    %eax,(%esp)
 807f89e:	e8 4b 0b 00 00       	call   80803ee <_ZN18StringUnorderedMapI19CharStringHashTraitfEC1Ev>
 807f8a3:	8b 45 08             	mov    0x8(%ebp),%eax
 807f8a6:	05 84 00 00 00       	add    $0x84,%eax
 807f8ab:	89 04 24             	mov    %eax,(%esp)
 807f8ae:	e8 e1 0b 00 00       	call   8080494 <_ZN18StringUnorderedMapI19CharStringHashTraitSsEC1Ev>
 807f8b3:	8b 45 08             	mov    0x8(%ebp),%eax
 807f8b6:	89 04 24             	mov    %eax,(%esp)
 807f8b9:	e8 9a 01 00 00       	call   807fa58 <_ZN14CNRDScriptData5clearEv>
 807f8be:	8b 45 08             	mov    0x8(%ebp),%eax
 807f8c1:	89 04 24             	mov    %eax,(%esp)
 807f8c4:	e8 f3 01 00 00       	call   807fabc <_ZN14CNRDScriptData6createEv>
 807f8c9:	83 c4 10             	add    $0x10,%esp
 807f8cc:	5b                   	pop    %ebx
 807f8cd:	5e                   	pop    %esi
 807f8ce:	5d                   	pop    %ebp
 807f8cf:	c3                   	ret
 807f8d0:	89 d3                	mov    %edx,%ebx
 807f8d2:	89 c6                	mov    %eax,%esi
 807f8d4:	8b 45 08             	mov    0x8(%ebp),%eax
 807f8d7:	05 84 00 00 00       	add    $0x84,%eax
 807f8dc:	89 04 24             	mov    %eax,(%esp)
 807f8df:	e8 1a 0c 00 00       	call   80804fe <_ZN18StringUnorderedMapI19CharStringHashTraitSsED1Ev>
 807f8e4:	89 f0                	mov    %esi,%eax
 807f8e6:	89 da                	mov    %ebx,%edx
 807f8e8:	eb 00                	jmp    807f8ea <_ZN14CNRDScriptDataC1Ev+0x92>
 807f8ea:	89 d3                	mov    %edx,%ebx
 807f8ec:	89 c6                	mov    %eax,%esi
 807f8ee:	8b 45 08             	mov    0x8(%ebp),%eax
 807f8f1:	83 c0 64             	add    $0x64,%eax
 807f8f4:	89 04 24             	mov    %eax,(%esp)
 807f8f7:	e8 5c 0b 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807f8fc:	89 f0                	mov    %esi,%eax
 807f8fe:	89 da                	mov    %ebx,%edx
 807f900:	eb 00                	jmp    807f902 <_ZN14CNRDScriptDataC1Ev+0xaa>
 807f902:	89 d3                	mov    %edx,%ebx
 807f904:	89 c6                	mov    %eax,%esi
 807f906:	8b 45 08             	mov    0x8(%ebp),%eax
 807f909:	83 c0 44             	add    $0x44,%eax
 807f90c:	89 04 24             	mov    %eax,(%esp)
 807f90f:	e8 9e 0a 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807f914:	89 f0                	mov    %esi,%eax
 807f916:	89 da                	mov    %ebx,%edx
 807f918:	eb 00                	jmp    807f91a <_ZN14CNRDScriptDataC1Ev+0xc2>
 807f91a:	89 d3                	mov    %edx,%ebx
 807f91c:	89 c6                	mov    %eax,%esi
 807f91e:	8b 45 08             	mov    0x8(%ebp),%eax
 807f921:	83 c0 24             	add    $0x24,%eax
 807f924:	89 04 24             	mov    %eax,(%esp)
 807f927:	e8 2c 0b 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807f92c:	89 f0                	mov    %esi,%eax
 807f92e:	89 da                	mov    %ebx,%edx
 807f930:	eb 00                	jmp    807f932 <_ZN14CNRDScriptDataC1Ev+0xda>
 807f932:	89 d3                	mov    %edx,%ebx
 807f934:	89 c6                	mov    %eax,%esi
 807f936:	8b 45 08             	mov    0x8(%ebp),%eax
 807f939:	83 c0 04             	add    $0x4,%eax
 807f93c:	89 04 24             	mov    %eax,(%esp)
 807f93f:	e8 6e 0a 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807f944:	89 f0                	mov    %esi,%eax
 807f946:	89 da                	mov    %ebx,%edx
 807f948:	eb 00                	jmp    807f94a <_ZN14CNRDScriptDataC1Ev+0xf2>
 807f94a:	89 d3                	mov    %edx,%ebx
 807f94c:	89 c6                	mov    %eax,%esi
 807f94e:	8b 45 08             	mov    0x8(%ebp),%eax
 807f951:	89 04 24             	mov    %eax,(%esp)
 807f954:	e8 61 72 a5 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 807f959:	89 f0                	mov    %esi,%eax
 807f95b:	89 da                	mov    %ebx,%edx
 807f95d:	89 04 24             	mov    %eax,(%esp)
 807f960:	e8 eb 3d a6 00       	call   8ae3750 <_Unwind_Resume>
 807f965:	90                   	nop

```

```c
// CNRDScriptData::CNRDScriptData @ 0x807f858

/* CNRDScriptData::CNRDScriptData() */

void __thiscall CNRDScriptData::CNRDScriptData(CNRDScriptData *this)

{
  CharString::CharString((CharString *)this);
                    /* try { // try from 0807f874 to 0807f878 has its CatchHandler @ 0807f94a */
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
                    /* try { // try from 0807f882 to 0807f886 has its CatchHandler @ 0807f932 */
  StringUnorderedMap<CharStringHashTrait,float>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
                    /* try { // try from 0807f890 to 0807f894 has its CatchHandler @ 0807f91a */
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
                    /* try { // try from 0807f89e to 0807f8a2 has its CatchHandler @ 0807f902 */
  StringUnorderedMap<CharStringHashTrait,float>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
                    /* try { // try from 0807f8ae to 0807f8b2 has its CatchHandler @ 0807f8ea */
  StringUnorderedMap<CharStringHashTrait,std::string>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
                    /* try { // try from 0807f8b9 to 0807f8bd has its CatchHandler @ 0807f8d0 */
  clear(this);
  create();
  return;
}

```

---

## clear

```asm
// === 0807fa58 CNRDScriptData::clear  [0x0807fa58-0x807fabb] ===
 807fa58:	55                   	push   %ebp
 807fa59:	89 e5                	mov    %esp,%ebp
 807fa5b:	83 ec 18             	sub    $0x18,%esp
 807fa5e:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa61:	c7 44 24 04 00 5e ae 	movl   $0x8ae5e00,0x4(%esp)
 807fa68:	08 
 807fa69:	89 04 24             	mov    %eax,(%esp)
 807fa6c:	e8 4f 76 a5 00       	call   8ad70c0 <_ZN10CharStringaSEPKc>
 807fa71:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa74:	83 c0 04             	add    $0x4,%eax
 807fa77:	89 04 24             	mov    %eax,(%esp)
 807fa7a:	e8 e7 0e 00 00       	call   8080966 <_ZN18StringUnorderedMapI19CharStringHashTraitiE5clearEv>
 807fa7f:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa82:	83 c0 24             	add    $0x24,%eax
 807fa85:	89 04 24             	mov    %eax,(%esp)
 807fa88:	e8 ed 0e 00 00       	call   808097a <_ZN18StringUnorderedMapI19CharStringHashTraitfE5clearEv>
 807fa8d:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa90:	83 c0 44             	add    $0x44,%eax
 807fa93:	89 04 24             	mov    %eax,(%esp)
 807fa96:	e8 cb 0e 00 00       	call   8080966 <_ZN18StringUnorderedMapI19CharStringHashTraitiE5clearEv>
 807fa9b:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa9e:	83 c0 64             	add    $0x64,%eax
 807faa1:	89 04 24             	mov    %eax,(%esp)
 807faa4:	e8 d1 0e 00 00       	call   808097a <_ZN18StringUnorderedMapI19CharStringHashTraitfE5clearEv>
 807faa9:	8b 45 08             	mov    0x8(%ebp),%eax
 807faac:	05 84 00 00 00       	add    $0x84,%eax
 807fab1:	89 04 24             	mov    %eax,(%esp)
 807fab4:	e8 d5 0e 00 00       	call   808098e <_ZN18StringUnorderedMapI19CharStringHashTraitSsE5clearEv>
 807fab9:	c9                   	leave
 807faba:	c3                   	ret
 807fabb:	90                   	nop

```

```c
// CNRDScriptData::clear @ 0x807fa58

/* CNRDScriptData::clear() */

void __thiscall CNRDScriptData::clear(CNRDScriptData *this)

{
  CharString::operator=((CharString *)this,"");
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
  StringUnorderedMap<CharStringHashTrait,std::string>::clear
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
  return;
}

```

---

## create

```asm
// === 0807fabc CNRDScriptData::create  [0x0807fabc-0x807fac1] ===
 807fabc:	55                   	push   %ebp
 807fabd:	89 e5                	mov    %esp,%ebp
 807fabf:	5d                   	pop    %ebp
 807fac0:	c3                   	ret
 807fac1:	90                   	nop

```

```c
// CNRDScriptData::create @ 0x807fabc

/* CNRDScriptData::create() */

void CNRDScriptData::create(void)

{
  return;
}

```

---

## destroy

```asm
// === 0807fac2 CNRDScriptData::destroy  [0x0807fac2-0x807fac7] ===
 807fac2:	55                   	push   %ebp
 807fac3:	89 e5                	mov    %esp,%ebp
 807fac5:	5d                   	pop    %ebp
 807fac6:	c3                   	ret
 807fac7:	90                   	nop

```

```c
// CNRDScriptData::destroy @ 0x807fac2

/* CNRDScriptData::destroy() */

void CNRDScriptData::destroy(void)

{
  return;
}

```

---

## getCFloat

```asm
// === 0807ff62 CNRDScriptData::getCFloat  [0x0807ff62-0x807ff99] ===
 807ff62:	55                   	push   %ebp
 807ff63:	89 e5                	mov    %esp,%ebp
 807ff65:	83 ec 38             	sub    $0x38,%esp
 807ff68:	8b 45 08             	mov    0x8(%ebp),%eax
 807ff6b:	8d 50 64             	lea    0x64(%eax),%edx
 807ff6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 807ff71:	89 44 24 04          	mov    %eax,0x4(%esp)
 807ff75:	89 14 24             	mov    %edx,(%esp)
 807ff78:	e8 61 0f 00 00       	call   8080ede <_ZNK18StringUnorderedMapI19CharStringHashTraitfE3getEPKc>
 807ff7d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 807ff80:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 807ff84:	75 07                	jne    807ff8d <_ZNK14CNRDScriptData9getCFloatEPKc+0x2b>
 807ff86:	b8 00 00 80 bf       	mov    $0xbf800000,%eax
 807ff8b:	eb 05                	jmp    807ff92 <_ZNK14CNRDScriptData9getCFloatEPKc+0x30>
 807ff8d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 807ff90:	8b 00                	mov    (%eax),%eax
 807ff92:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 807ff95:	d9 45 e4             	flds   -0x1c(%ebp)
 807ff98:	c9                   	leave
 807ff99:	c3                   	ret

```

```c
// CNRDScriptData::getCFloat @ 0x807ff62

/* CNRDScriptData::getCFloat(char const*) const */

longdouble CNRDScriptData::getCFloat(char *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)StringUnorderedMap<CharStringHashTrait,float>::get(param_1 + 100);
  if (pfVar1 == (float *)0x0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = *pfVar1;
  }
  return (longdouble)fVar2;
}

```

---

## getCLong

```asm
// === 0807ff30 CNRDScriptData::getCLong  [0x0807ff30-0x807ff61] ===
 807ff30:	55                   	push   %ebp
 807ff31:	89 e5                	mov    %esp,%ebp
 807ff33:	83 ec 28             	sub    $0x28,%esp
 807ff36:	8b 45 08             	mov    0x8(%ebp),%eax
 807ff39:	8d 50 44             	lea    0x44(%eax),%edx
 807ff3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 807ff3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 807ff43:	89 14 24             	mov    %edx,(%esp)
 807ff46:	e8 2f 0f 00 00       	call   8080e7a <_ZNK18StringUnorderedMapI19CharStringHashTraitiE3getEPKc>
 807ff4b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 807ff4e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 807ff52:	75 07                	jne    807ff5b <_ZNK14CNRDScriptData8getCLongEPKc+0x2b>
 807ff54:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 807ff59:	eb 05                	jmp    807ff60 <_ZNK14CNRDScriptData8getCLongEPKc+0x30>
 807ff5b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 807ff5e:	8b 00                	mov    (%eax),%eax
 807ff60:	c9                   	leave
 807ff61:	c3                   	ret

```

```c
// CNRDScriptData::getCLong @ 0x807ff30

/* CNRDScriptData::getCLong(char const*) const */

undefined4 CNRDScriptData::getCLong(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1 + 0x44);
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

## getFloat

```asm
// === 0807febc CNRDScriptData::getFloat  [0x0807febc-0x807fef3] ===
 807febc:	55                   	push   %ebp
 807febd:	89 e5                	mov    %esp,%ebp
 807febf:	83 ec 38             	sub    $0x38,%esp
 807fec2:	8b 45 08             	mov    0x8(%ebp),%eax
 807fec5:	8d 50 24             	lea    0x24(%eax),%edx
 807fec8:	8b 45 0c             	mov    0xc(%ebp),%eax
 807fecb:	89 44 24 04          	mov    %eax,0x4(%esp)
 807fecf:	89 14 24             	mov    %edx,(%esp)
 807fed2:	e8 07 10 00 00       	call   8080ede <_ZNK18StringUnorderedMapI19CharStringHashTraitfE3getEPKc>
 807fed7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 807feda:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 807fede:	75 07                	jne    807fee7 <_ZNK14CNRDScriptData8getFloatEPKc+0x2b>
 807fee0:	b8 00 00 80 bf       	mov    $0xbf800000,%eax
 807fee5:	eb 05                	jmp    807feec <_ZNK14CNRDScriptData8getFloatEPKc+0x30>
 807fee7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 807feea:	8b 00                	mov    (%eax),%eax
 807feec:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 807feef:	d9 45 e4             	flds   -0x1c(%ebp)
 807fef2:	c9                   	leave
 807fef3:	c3                   	ret

```

```c
// CNRDScriptData::getFloat @ 0x807febc

/* CNRDScriptData::getFloat(char const*) const */

longdouble CNRDScriptData::getFloat(char *param_1)

{
  float *pfVar1;
  float fVar2;
  
  pfVar1 = (float *)StringUnorderedMap<CharStringHashTrait,float>::get(param_1 + 0x24);
  if (pfVar1 == (float *)0x0) {
    fVar2 = -1.0;
  }
  else {
    fVar2 = *pfVar1;
  }
  return (longdouble)fVar2;
}

```

---

## getInt

```asm
// === 0807fe8a CNRDScriptData::getInt  [0x0807fe8a-0x807febb] ===
 807fe8a:	55                   	push   %ebp
 807fe8b:	89 e5                	mov    %esp,%ebp
 807fe8d:	83 ec 28             	sub    $0x28,%esp
 807fe90:	8b 45 08             	mov    0x8(%ebp),%eax
 807fe93:	8d 50 04             	lea    0x4(%eax),%edx
 807fe96:	8b 45 0c             	mov    0xc(%ebp),%eax
 807fe99:	89 44 24 04          	mov    %eax,0x4(%esp)
 807fe9d:	89 14 24             	mov    %edx,(%esp)
 807fea0:	e8 d5 0f 00 00       	call   8080e7a <_ZNK18StringUnorderedMapI19CharStringHashTraitiE3getEPKc>
 807fea5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 807fea8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 807feac:	75 07                	jne    807feb5 <_ZNK14CNRDScriptData6getIntEPKc+0x2b>
 807feae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 807feb3:	eb 05                	jmp    807feba <_ZNK14CNRDScriptData6getIntEPKc+0x30>
 807feb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 807feb8:	8b 00                	mov    (%eax),%eax
 807feba:	c9                   	leave
 807febb:	c3                   	ret

```

```c
// CNRDScriptData::getInt @ 0x807fe8a

/* CNRDScriptData::getInt(char const*) const */

undefined4 CNRDScriptData::getInt(char *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)StringUnorderedMap<CharStringHashTrait,int>::get(param_1 + 4);
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

## getString

```asm
// === 0807fef4 CNRDScriptData::getString  [0x0807fef4-0x807ff2f] ===
 807fef4:	55                   	push   %ebp
 807fef5:	89 e5                	mov    %esp,%ebp
 807fef7:	83 ec 28             	sub    $0x28,%esp
 807fefa:	8b 45 08             	mov    0x8(%ebp),%eax
 807fefd:	8d 90 84 00 00 00    	lea    0x84(%eax),%edx
 807ff03:	8b 45 0c             	mov    0xc(%ebp),%eax
 807ff06:	89 44 24 04          	mov    %eax,0x4(%esp)
 807ff0a:	89 14 24             	mov    %edx,(%esp)
 807ff0d:	e8 30 10 00 00       	call   8080f42 <_ZNK18StringUnorderedMapI19CharStringHashTraitSsE3getEPKc>
 807ff12:	89 45 f4             	mov    %eax,-0xc(%ebp)
 807ff15:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 807ff19:	75 07                	jne    807ff22 <_ZNK14CNRDScriptData9getStringEPKc+0x2e>
 807ff1b:	b8 83 5e ae 08       	mov    $0x8ae5e83,%eax
 807ff20:	eb 0b                	jmp    807ff2d <_ZNK14CNRDScriptData9getStringEPKc+0x39>
 807ff22:	8b 45 f4             	mov    -0xc(%ebp),%eax
 807ff25:	89 04 24             	mov    %eax,(%esp)
 807ff28:	e8 c3 65 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807ff2d:	c9                   	leave
 807ff2e:	c3                   	ret
 807ff2f:	90                   	nop

```

```c
// CNRDScriptData::getString @ 0x807fef4

/* CNRDScriptData::getString(char const*) const */

char * CNRDScriptData::getString(char *param_1)

{
  string *this;
  char *pcVar1;
  
  this = (string *)StringUnorderedMap<CharStringHashTrait,std::string>::get(param_1 + 0x84);
  if (this == (string *)0x0) {
    pcVar1 = "CNRDScriptData::Error";
  }
  else {
    pcVar1 = (char *)std::string::c_str(this);
  }
  return pcVar1;
}

```

---

## import

```asm
// === 0807fb2c CNRDScriptData::import  [0x0807fb2c-0x807fe89] ===
 807fb2c:	55                   	push   %ebp
 807fb2d:	89 e5                	mov    %esp,%ebp
 807fb2f:	56                   	push   %esi
 807fb30:	53                   	push   %ebx
 807fb31:	83 c4 80             	add    $0xffffff80,%esp
 807fb34:	8b 45 0c             	mov    0xc(%ebp),%eax
 807fb37:	89 44 24 04          	mov    %eax,0x4(%esp)
 807fb3b:	c7 04 24 01 5e ae 08 	movl   $0x8ae5e01,(%esp)
 807fb42:	e8 e2 c1 83 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 807fb47:	83 f0 01             	xor    $0x1,%eax
 807fb4a:	84 c0                	test   %al,%al
 807fb4c:	74 3d                	je     807fb8b <_ZN14CNRDScriptData6importEPKc+0x5f>
 807fb4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 807fb51:	89 44 24 14          	mov    %eax,0x14(%esp)
 807fb55:	c7 44 24 10 08 5e ae 	movl   $0x8ae5e08,0x10(%esp)
 807fb5c:	08 
 807fb5d:	c7 44 24 0c 33 00 00 	movl   $0x33,0xc(%esp)
 807fb64:	00 
 807fb65:	c7 44 24 08 d0 63 ae 	movl   $0x8ae63d0,0x8(%esp)
 807fb6c:	08 
 807fb6d:	c7 44 24 04 38 5e ae 	movl   $0x8ae5e38,0x4(%esp)
 807fb74:	08 
 807fb75:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 807fb7c:	e8 89 40 a5 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 807fb81:	bb 00 00 00 00       	mov    $0x0,%ebx
 807fb86:	e9 f3 02 00 00       	jmp    807fe7e <_ZN14CNRDScriptData6importEPKc+0x352>
 807fb8b:	8b 45 08             	mov    0x8(%ebp),%eax
 807fb8e:	89 04 24             	mov    %eax,(%esp)
 807fb91:	e8 32 ff ff ff       	call   807fac8 <_ZN14CNRDScriptData5resetEv>
 807fb96:	8b 45 08             	mov    0x8(%ebp),%eax
 807fb99:	8b 55 0c             	mov    0xc(%ebp),%edx
 807fb9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 807fba0:	89 04 24             	mov    %eax,(%esp)
 807fba3:	e8 18 75 a5 00       	call   8ad70c0 <_ZN10CharStringaSEPKc>
 807fba8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fbab:	89 04 24             	mov    %eax,(%esp)
 807fbae:	e8 1d 6a 68 00       	call   87065d0 <_ZNSsC1Ev>
 807fbb3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fbb6:	89 04 24             	mov    %eax,(%esp)
 807fbb9:	e8 12 6a 68 00       	call   87065d0 <_ZNSsC1Ev>
 807fbbe:	8d 45 b0             	lea    -0x50(%ebp),%eax
 807fbc1:	89 04 24             	mov    %eax,(%esp)
 807fbc4:	e8 07 6a 68 00       	call   87065d0 <_ZNSsC1Ev>
 807fbc9:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 807fbd0:	b8 00 00 00 00       	mov    $0x0,%eax
 807fbd5:	89 45 a8             	mov    %eax,-0x58(%ebp)
 807fbd8:	eb 01                	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fbda:	90                   	nop
 807fbdb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 807fbe2:	00 
 807fbe3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fbe6:	89 04 24             	mov    %eax,(%esp)
 807fbe9:	e8 71 cc 83 00       	call   88bc85f <_Z8ScanTypeRSsb>
 807fbee:	83 f0 01             	xor    $0x1,%eax
 807fbf1:	84 c0                	test   %al,%al
 807fbf3:	0f 85 15 02 00 00    	jne    807fe0e <_ZN14CNRDScriptData6importEPKc+0x2e2>
 807fbf9:	c7 44 24 04 5b 5e ae 	movl   $0x8ae5e5b,0x4(%esp)
 807fc00:	08 
 807fc01:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fc04:	89 04 24             	mov    %eax,(%esp)
 807fc07:	e8 95 0d 00 00       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 807fc0c:	84 c0                	test   %al,%al
 807fc0e:	74 53                	je     807fc63 <_ZN14CNRDScriptData6importEPKc+0x137>
 807fc10:	eb 3d                	jmp    807fc4f <_ZN14CNRDScriptData6importEPKc+0x123>
 807fc12:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 807fc19:	e8 5d c7 83 00       	call   88bc37b <_Z7ScanIntPb>
 807fc1e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 807fc21:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fc24:	89 04 24             	mov    %eax,(%esp)
 807fc27:	e8 c4 68 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807fc2c:	8b 55 08             	mov    0x8(%ebp),%edx
 807fc2f:	8d 5a 04             	lea    0x4(%edx),%ebx
 807fc32:	8d 55 bc             	lea    -0x44(%ebp),%edx
 807fc35:	8d 4d ac             	lea    -0x54(%ebp),%ecx
 807fc38:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 807fc3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 807fc40:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 807fc44:	89 14 24             	mov    %edx,(%esp)
 807fc47:	e8 b2 0d 00 00       	call   80809fe <_ZN18StringUnorderedMapI19CharStringHashTraitiE6insertEPKcRKi>
 807fc4c:	83 ec 04             	sub    $0x4,%esp
 807fc4f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fc52:	89 04 24             	mov    %eax,(%esp)
 807fc55:	e8 48 cb 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fc5a:	84 c0                	test   %al,%al
 807fc5c:	75 b4                	jne    807fc12 <_ZN14CNRDScriptData6importEPKc+0xe6>
 807fc5e:	e9 78 ff ff ff       	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fc63:	c7 44 24 04 61 5e ae 	movl   $0x8ae5e61,0x4(%esp)
 807fc6a:	08 
 807fc6b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fc6e:	89 04 24             	mov    %eax,(%esp)
 807fc71:	e8 2b 0d 00 00       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 807fc76:	84 c0                	test   %al,%al
 807fc78:	74 53                	je     807fccd <_ZN14CNRDScriptData6importEPKc+0x1a1>
 807fc7a:	eb 3d                	jmp    807fcb9 <_ZN14CNRDScriptData6importEPKc+0x18d>
 807fc7c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 807fc83:	e8 5d c8 83 00       	call   88bc4e5 <_Z9ScanFloatPb>
 807fc88:	d9 5d a8             	fstps  -0x58(%ebp)
 807fc8b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fc8e:	89 04 24             	mov    %eax,(%esp)
 807fc91:	e8 5a 68 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807fc96:	8b 55 08             	mov    0x8(%ebp),%edx
 807fc99:	8d 5a 24             	lea    0x24(%edx),%ebx
 807fc9c:	8d 55 c8             	lea    -0x38(%ebp),%edx
 807fc9f:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 807fca2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 807fca6:	89 44 24 08          	mov    %eax,0x8(%esp)
 807fcaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 807fcae:	89 14 24             	mov    %edx,(%esp)
 807fcb1:	e8 b6 0e 00 00       	call   8080b6c <_ZN18StringUnorderedMapI19CharStringHashTraitfE6insertEPKcRKf>
 807fcb6:	83 ec 04             	sub    $0x4,%esp
 807fcb9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fcbc:	89 04 24             	mov    %eax,(%esp)
 807fcbf:	e8 de ca 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fcc4:	84 c0                	test   %al,%al
 807fcc6:	75 b4                	jne    807fc7c <_ZN14CNRDScriptData6importEPKc+0x150>
 807fcc8:	e9 0e ff ff ff       	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fccd:	c7 44 24 04 69 5e ae 	movl   $0x8ae5e69,0x4(%esp)
 807fcd4:	08 
 807fcd5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fcd8:	89 04 24             	mov    %eax,(%esp)
 807fcdb:	e8 c1 0c 00 00       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 807fce0:	84 c0                	test   %al,%al
 807fce2:	74 53                	je     807fd37 <_ZN14CNRDScriptData6importEPKc+0x20b>
 807fce4:	eb 3d                	jmp    807fd23 <_ZN14CNRDScriptData6importEPKc+0x1f7>
 807fce6:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 807fced:	e8 89 c6 83 00       	call   88bc37b <_Z7ScanIntPb>
 807fcf2:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 807fcf5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fcf8:	89 04 24             	mov    %eax,(%esp)
 807fcfb:	e8 f0 67 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807fd00:	8b 55 08             	mov    0x8(%ebp),%edx
 807fd03:	8d 5a 44             	lea    0x44(%edx),%ebx
 807fd06:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 807fd09:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 807fd0c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 807fd10:	89 44 24 08          	mov    %eax,0x8(%esp)
 807fd14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 807fd18:	89 14 24             	mov    %edx,(%esp)
 807fd1b:	e8 de 0c 00 00       	call   80809fe <_ZN18StringUnorderedMapI19CharStringHashTraitiE6insertEPKcRKi>
 807fd20:	83 ec 04             	sub    $0x4,%esp
 807fd23:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fd26:	89 04 24             	mov    %eax,(%esp)
 807fd29:	e8 74 ca 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fd2e:	84 c0                	test   %al,%al
 807fd30:	75 b4                	jne    807fce6 <_ZN14CNRDScriptData6importEPKc+0x1ba>
 807fd32:	e9 a4 fe ff ff       	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fd37:	c7 44 24 04 71 5e ae 	movl   $0x8ae5e71,0x4(%esp)
 807fd3e:	08 
 807fd3f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fd42:	89 04 24             	mov    %eax,(%esp)
 807fd45:	e8 57 0c 00 00       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 807fd4a:	84 c0                	test   %al,%al
 807fd4c:	74 53                	je     807fda1 <_ZN14CNRDScriptData6importEPKc+0x275>
 807fd4e:	eb 3d                	jmp    807fd8d <_ZN14CNRDScriptData6importEPKc+0x261>
 807fd50:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 807fd57:	e8 89 c7 83 00       	call   88bc4e5 <_Z9ScanFloatPb>
 807fd5c:	d9 5d a0             	fstps  -0x60(%ebp)
 807fd5f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fd62:	89 04 24             	mov    %eax,(%esp)
 807fd65:	e8 86 67 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807fd6a:	8b 55 08             	mov    0x8(%ebp),%edx
 807fd6d:	8d 5a 64             	lea    0x64(%edx),%ebx
 807fd70:	8d 55 e0             	lea    -0x20(%ebp),%edx
 807fd73:	8d 4d a0             	lea    -0x60(%ebp),%ecx
 807fd76:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 807fd7a:	89 44 24 08          	mov    %eax,0x8(%esp)
 807fd7e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 807fd82:	89 14 24             	mov    %edx,(%esp)
 807fd85:	e8 e2 0d 00 00       	call   8080b6c <_ZN18StringUnorderedMapI19CharStringHashTraitfE6insertEPKcRKf>
 807fd8a:	83 ec 04             	sub    $0x4,%esp
 807fd8d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fd90:	89 04 24             	mov    %eax,(%esp)
 807fd93:	e8 0a ca 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fd98:	84 c0                	test   %al,%al
 807fd9a:	75 b4                	jne    807fd50 <_ZN14CNRDScriptData6importEPKc+0x224>
 807fd9c:	e9 3a fe ff ff       	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fda1:	c7 44 24 04 7a 5e ae 	movl   $0x8ae5e7a,0x4(%esp)
 807fda8:	08 
 807fda9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fdac:	89 04 24             	mov    %eax,(%esp)
 807fdaf:	e8 ed 0b 00 00       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 807fdb4:	84 c0                	test   %al,%al
 807fdb6:	0f 84 1e fe ff ff    	je     807fbda <_ZN14CNRDScriptData6importEPKc+0xae>
 807fdbc:	eb 3c                	jmp    807fdfa <_ZN14CNRDScriptData6importEPKc+0x2ce>
 807fdbe:	8d 45 b0             	lea    -0x50(%ebp),%eax
 807fdc1:	89 04 24             	mov    %eax,(%esp)
 807fdc4:	e8 d9 c9 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fdc9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fdcc:	89 04 24             	mov    %eax,(%esp)
 807fdcf:	e8 1c 67 68 00       	call   87064f0 <_ZNKSs5c_strEv>
 807fdd4:	8b 55 08             	mov    0x8(%ebp),%edx
 807fdd7:	8d 9a 84 00 00 00    	lea    0x84(%edx),%ebx
 807fddd:	8d 55 ec             	lea    -0x14(%ebp),%edx
 807fde0:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 807fde3:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 807fde7:	89 44 24 08          	mov    %eax,0x8(%esp)
 807fdeb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 807fdef:	89 14 24             	mov    %edx,(%esp)
 807fdf2:	e8 47 0f 00 00       	call   8080d3e <_ZN18StringUnorderedMapI19CharStringHashTraitSsE6insertEPKcRKSs>
 807fdf7:	83 ec 04             	sub    $0x4,%esp
 807fdfa:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fdfd:	89 04 24             	mov    %eax,(%esp)
 807fe00:	e8 9d c9 83 00       	call   88bc7a2 <_Z7ScanStrPSs>
 807fe05:	84 c0                	test   %al,%al
 807fe07:	75 b5                	jne    807fdbe <_ZN14CNRDScriptData6importEPKc+0x292>
 807fe09:	e9 cd fd ff ff       	jmp    807fbdb <_ZN14CNRDScriptData6importEPKc+0xaf>
 807fe0e:	90                   	nop
 807fe0f:	bb 01 00 00 00       	mov    $0x1,%ebx
 807fe14:	8d 45 b0             	lea    -0x50(%ebp),%eax
 807fe17:	89 04 24             	mov    %eax,(%esp)
 807fe1a:	e8 c1 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe1f:	eb 2a                	jmp    807fe4b <_ZN14CNRDScriptData6importEPKc+0x31f>
 807fe21:	89 d3                	mov    %edx,%ebx
 807fe23:	89 c6                	mov    %eax,%esi
 807fe25:	8d 45 b0             	lea    -0x50(%ebp),%eax
 807fe28:	89 04 24             	mov    %eax,(%esp)
 807fe2b:	e8 b0 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe30:	89 f0                	mov    %esi,%eax
 807fe32:	89 da                	mov    %ebx,%edx
 807fe34:	eb 00                	jmp    807fe36 <_ZN14CNRDScriptData6importEPKc+0x30a>
 807fe36:	89 d3                	mov    %edx,%ebx
 807fe38:	89 c6                	mov    %eax,%esi
 807fe3a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fe3d:	89 04 24             	mov    %eax,(%esp)
 807fe40:	e8 9b 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe45:	89 f0                	mov    %esi,%eax
 807fe47:	89 da                	mov    %ebx,%edx
 807fe49:	eb 0d                	jmp    807fe58 <_ZN14CNRDScriptData6importEPKc+0x32c>
 807fe4b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 807fe4e:	89 04 24             	mov    %eax,(%esp)
 807fe51:	e8 8a 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe56:	eb 1b                	jmp    807fe73 <_ZN14CNRDScriptData6importEPKc+0x347>
 807fe58:	89 d3                	mov    %edx,%ebx
 807fe5a:	89 c6                	mov    %eax,%esi
 807fe5c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fe5f:	89 04 24             	mov    %eax,(%esp)
 807fe62:	e8 79 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe67:	89 f0                	mov    %esi,%eax
 807fe69:	89 da                	mov    %ebx,%edx
 807fe6b:	89 04 24             	mov    %eax,(%esp)
 807fe6e:	e8 dd 38 a6 00       	call   8ae3750 <_Unwind_Resume>
 807fe73:	8d 45 b8             	lea    -0x48(%ebp),%eax
 807fe76:	89 04 24             	mov    %eax,(%esp)
 807fe79:	e8 62 7d 68 00       	call   8707be0 <_ZNSsD1Ev>
 807fe7e:	89 d8                	mov    %ebx,%eax
 807fe80:	8d 65 f8             	lea    -0x8(%ebp),%esp
 807fe83:	83 c4 00             	add    $0x0,%esp
 807fe86:	5b                   	pop    %ebx
 807fe87:	5e                   	pop    %esi
 807fe88:	5d                   	pop    %ebp
 807fe89:	c3                   	ret

```

```c
// CNRDScriptData::import @ 0x807fb2c

/* CNRDScriptData::import(char const*) */

undefined4 __thiscall CNRDScriptData::import(CNRDScriptData *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_54 [4];
  string local_50 [4];
  string local_4c;
  char local_48 [12];
  char local_3c [12];
  char local_30 [12];
  char local_24 [12];
  char local_18 [12];
  
  cVar1 = loadRDARScriptFile("Data/",param_1);
  if (cVar1 == '\x01') {
    reset(this);
    CharString::operator=((CharString *)this,param_1);
    std::string::string((string *)&local_4c);
                    /* try { // try from 0807fbb9 to 0807fbbd has its CatchHandler @ 0807fe58 */
    std::string::string(local_50);
                    /* try { // try from 0807fbc4 to 0807fbc8 has its CatchHandler @ 0807fe36 */
    std::string::string(local_54);
                    /* try { // try from 0807fbe9 to 0807fe04 has its CatchHandler @ 0807fe21 */
    while (cVar1 = ScanType((string *)&local_4c,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_4c,"[int]");
      if (bVar2) {
        while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
          ScanInt((bool *)0x0);
          std::string::c_str(local_50);
          StringUnorderedMap<CharStringHashTrait,int>::insert(local_48,(int *)(this + 4));
        }
      }
      else {
        bVar2 = std::operator==(&local_4c,"[float]");
        if (bVar2) {
          while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
            ScanFloat((bool *)0x0);
            std::string::c_str(local_50);
            StringUnorderedMap<CharStringHashTrait,float>::insert(local_3c,(float *)(this + 0x24));
          }
        }
        else {
          bVar2 = std::operator==(&local_4c,"[clong]");
          if (bVar2) {
            while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
              ScanInt((bool *)0x0);
              std::string::c_str(local_50);
              StringUnorderedMap<CharStringHashTrait,int>::insert(local_30,(int *)(this + 0x44));
            }
          }
          else {
            bVar2 = std::operator==(&local_4c,"[cfloat]");
            if (bVar2) {
              while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
                ScanFloat((bool *)0x0);
                std::string::c_str(local_50);
                StringUnorderedMap<CharStringHashTrait,float>::insert
                          (local_24,(float *)(this + 100));
              }
            }
            else {
              bVar2 = std::operator==(&local_4c,"[string]");
              if (bVar2) {
                while (cVar1 = ScanStr(local_50), cVar1 != '\0') {
                  ScanStr(local_54);
                  std::string::c_str(local_50);
                  StringUnorderedMap<CharStringHashTrait,std::string>::insert
                            (local_18,(string *)(this + 0x84));
                }
              }
            }
          }
        }
      }
    }
    uVar3 = 1;
                    /* try { // try from 0807fe1a to 0807fe1e has its CatchHandler @ 0807fe36 */
    std::string::~string(local_54);
                    /* try { // try from 0807fe51 to 0807fe55 has its CatchHandler @ 0807fe58 */
    std::string::~string(local_50);
    std::string::~string((string *)&local_4c);
  }
  else {
    LogManager::logFormat
              (0,"../../DNFShared/CNRDScriptData.cpp","import",0x33,&DAT_08ae5e08,param_1);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## reset

```asm
// === 0807fac8 CNRDScriptData::reset  [0x0807fac8-0x807fb2b] ===
 807fac8:	55                   	push   %ebp
 807fac9:	89 e5                	mov    %esp,%ebp
 807facb:	83 ec 18             	sub    $0x18,%esp
 807face:	8b 45 08             	mov    0x8(%ebp),%eax
 807fad1:	c7 44 24 04 00 5e ae 	movl   $0x8ae5e00,0x4(%esp)
 807fad8:	08 
 807fad9:	89 04 24             	mov    %eax,(%esp)
 807fadc:	e8 df 75 a5 00       	call   8ad70c0 <_ZN10CharStringaSEPKc>
 807fae1:	8b 45 08             	mov    0x8(%ebp),%eax
 807fae4:	83 c0 04             	add    $0x4,%eax
 807fae7:	89 04 24             	mov    %eax,(%esp)
 807faea:	e8 77 0e 00 00       	call   8080966 <_ZN18StringUnorderedMapI19CharStringHashTraitiE5clearEv>
 807faef:	8b 45 08             	mov    0x8(%ebp),%eax
 807faf2:	83 c0 24             	add    $0x24,%eax
 807faf5:	89 04 24             	mov    %eax,(%esp)
 807faf8:	e8 7d 0e 00 00       	call   808097a <_ZN18StringUnorderedMapI19CharStringHashTraitfE5clearEv>
 807fafd:	8b 45 08             	mov    0x8(%ebp),%eax
 807fb00:	83 c0 44             	add    $0x44,%eax
 807fb03:	89 04 24             	mov    %eax,(%esp)
 807fb06:	e8 5b 0e 00 00       	call   8080966 <_ZN18StringUnorderedMapI19CharStringHashTraitiE5clearEv>
 807fb0b:	8b 45 08             	mov    0x8(%ebp),%eax
 807fb0e:	83 c0 64             	add    $0x64,%eax
 807fb11:	89 04 24             	mov    %eax,(%esp)
 807fb14:	e8 61 0e 00 00       	call   808097a <_ZN18StringUnorderedMapI19CharStringHashTraitfE5clearEv>
 807fb19:	8b 45 08             	mov    0x8(%ebp),%eax
 807fb1c:	05 84 00 00 00       	add    $0x84,%eax
 807fb21:	89 04 24             	mov    %eax,(%esp)
 807fb24:	e8 65 0e 00 00       	call   808098e <_ZN18StringUnorderedMapI19CharStringHashTraitSsE5clearEv>
 807fb29:	c9                   	leave
 807fb2a:	c3                   	ret
 807fb2b:	90                   	nop

```

```c
// CNRDScriptData::reset @ 0x807fac8

/* CNRDScriptData::reset() */

void __thiscall CNRDScriptData::reset(CNRDScriptData *this)

{
  CharString::operator=((CharString *)this,"");
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
  StringUnorderedMap<CharStringHashTrait,float>::clear
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
  StringUnorderedMap<CharStringHashTrait,std::string>::clear
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
  return;
}

```

---

## ~CNRDScriptData

```asm
// === 0807f966 CNRDScriptData::~CNRDScriptData  [0x0807f966-0x807fa57] ===
 807f966:	55                   	push   %ebp
 807f967:	89 e5                	mov    %esp,%ebp
 807f969:	56                   	push   %esi
 807f96a:	53                   	push   %ebx
 807f96b:	83 ec 10             	sub    $0x10,%esp
 807f96e:	8b 45 08             	mov    0x8(%ebp),%eax
 807f971:	89 04 24             	mov    %eax,(%esp)
 807f974:	e8 49 01 00 00       	call   807fac2 <_ZN14CNRDScriptData7destroyEv>
 807f979:	8b 45 08             	mov    0x8(%ebp),%eax
 807f97c:	05 84 00 00 00       	add    $0x84,%eax
 807f981:	89 04 24             	mov    %eax,(%esp)
 807f984:	e8 75 0b 00 00       	call   80804fe <_ZN18StringUnorderedMapI19CharStringHashTraitSsED1Ev>
 807f989:	eb 18                	jmp    807f9a3 <_ZN14CNRDScriptDataD1Ev+0x3d>
 807f98b:	89 d3                	mov    %edx,%ebx
 807f98d:	89 c6                	mov    %eax,%esi
 807f98f:	8b 45 08             	mov    0x8(%ebp),%eax
 807f992:	83 c0 64             	add    $0x64,%eax
 807f995:	89 04 24             	mov    %eax,(%esp)
 807f998:	e8 bb 0a 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807f99d:	89 f0                	mov    %esi,%eax
 807f99f:	89 da                	mov    %ebx,%edx
 807f9a1:	eb 10                	jmp    807f9b3 <_ZN14CNRDScriptDataD1Ev+0x4d>
 807f9a3:	8b 45 08             	mov    0x8(%ebp),%eax
 807f9a6:	83 c0 64             	add    $0x64,%eax
 807f9a9:	89 04 24             	mov    %eax,(%esp)
 807f9ac:	e8 a7 0a 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807f9b1:	eb 18                	jmp    807f9cb <_ZN14CNRDScriptDataD1Ev+0x65>
 807f9b3:	89 d3                	mov    %edx,%ebx
 807f9b5:	89 c6                	mov    %eax,%esi
 807f9b7:	8b 45 08             	mov    0x8(%ebp),%eax
 807f9ba:	83 c0 44             	add    $0x44,%eax
 807f9bd:	89 04 24             	mov    %eax,(%esp)
 807f9c0:	e8 ed 09 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807f9c5:	89 f0                	mov    %esi,%eax
 807f9c7:	89 da                	mov    %ebx,%edx
 807f9c9:	eb 10                	jmp    807f9db <_ZN14CNRDScriptDataD1Ev+0x75>
 807f9cb:	8b 45 08             	mov    0x8(%ebp),%eax
 807f9ce:	83 c0 44             	add    $0x44,%eax
 807f9d1:	89 04 24             	mov    %eax,(%esp)
 807f9d4:	e8 d9 09 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807f9d9:	eb 18                	jmp    807f9f3 <_ZN14CNRDScriptDataD1Ev+0x8d>
 807f9db:	89 d3                	mov    %edx,%ebx
 807f9dd:	89 c6                	mov    %eax,%esi
 807f9df:	8b 45 08             	mov    0x8(%ebp),%eax
 807f9e2:	83 c0 24             	add    $0x24,%eax
 807f9e5:	89 04 24             	mov    %eax,(%esp)
 807f9e8:	e8 6b 0a 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807f9ed:	89 f0                	mov    %esi,%eax
 807f9ef:	89 da                	mov    %ebx,%edx
 807f9f1:	eb 10                	jmp    807fa03 <_ZN14CNRDScriptDataD1Ev+0x9d>
 807f9f3:	8b 45 08             	mov    0x8(%ebp),%eax
 807f9f6:	83 c0 24             	add    $0x24,%eax
 807f9f9:	89 04 24             	mov    %eax,(%esp)
 807f9fc:	e8 57 0a 00 00       	call   8080458 <_ZN18StringUnorderedMapI19CharStringHashTraitfED1Ev>
 807fa01:	eb 18                	jmp    807fa1b <_ZN14CNRDScriptDataD1Ev+0xb5>
 807fa03:	89 d3                	mov    %edx,%ebx
 807fa05:	89 c6                	mov    %eax,%esi
 807fa07:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa0a:	83 c0 04             	add    $0x4,%eax
 807fa0d:	89 04 24             	mov    %eax,(%esp)
 807fa10:	e8 9d 09 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807fa15:	89 f0                	mov    %esi,%eax
 807fa17:	89 da                	mov    %ebx,%edx
 807fa19:	eb 10                	jmp    807fa2b <_ZN14CNRDScriptDataD1Ev+0xc5>
 807fa1b:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa1e:	83 c0 04             	add    $0x4,%eax
 807fa21:	89 04 24             	mov    %eax,(%esp)
 807fa24:	e8 89 09 00 00       	call   80803b2 <_ZN18StringUnorderedMapI19CharStringHashTraitiED1Ev>
 807fa29:	eb 1b                	jmp    807fa46 <_ZN14CNRDScriptDataD1Ev+0xe0>
 807fa2b:	89 d3                	mov    %edx,%ebx
 807fa2d:	89 c6                	mov    %eax,%esi
 807fa2f:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa32:	89 04 24             	mov    %eax,(%esp)
 807fa35:	e8 80 71 a5 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 807fa3a:	89 f0                	mov    %esi,%eax
 807fa3c:	89 da                	mov    %ebx,%edx
 807fa3e:	89 04 24             	mov    %eax,(%esp)
 807fa41:	e8 0a 3d a6 00       	call   8ae3750 <_Unwind_Resume>
 807fa46:	8b 45 08             	mov    0x8(%ebp),%eax
 807fa49:	89 04 24             	mov    %eax,(%esp)
 807fa4c:	e8 69 71 a5 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 807fa51:	83 c4 10             	add    $0x10,%esp
 807fa54:	5b                   	pop    %ebx
 807fa55:	5e                   	pop    %esi
 807fa56:	5d                   	pop    %ebp
 807fa57:	c3                   	ret

```

```c
// CNRDScriptData::~CNRDScriptData @ 0x807f966

/* CNRDScriptData::~CNRDScriptData() */

void __thiscall CNRDScriptData::~CNRDScriptData(CNRDScriptData *this)

{
  int in_stack_ffffffe8;
  
  destroy();
                    /* try { // try from 0807f984 to 0807f988 has its CatchHandler @ 0807f98b */
  StringUnorderedMap<CharStringHashTrait,std::string>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,std::string> *)(this + 0x84));
                    /* try { // try from 0807f9ac to 0807f9b0 has its CatchHandler @ 0807f9b3 */
  StringUnorderedMap<CharStringHashTrait,float>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 100));
                    /* try { // try from 0807f9d4 to 0807f9d8 has its CatchHandler @ 0807f9db */
  StringUnorderedMap<CharStringHashTrait,int>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 0x44));
                    /* try { // try from 0807f9fc to 0807fa00 has its CatchHandler @ 0807fa03 */
  StringUnorderedMap<CharStringHashTrait,float>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,float> *)(this + 0x24));
                    /* try { // try from 0807fa24 to 0807fa28 has its CatchHandler @ 0807fa2b */
  StringUnorderedMap<CharStringHashTrait,int>::~StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)(this + 4));
  CharString::~CharString((CharString *)this,in_stack_ffffffe8);
  return;
}

```


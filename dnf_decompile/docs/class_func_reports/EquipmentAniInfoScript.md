# EquipmentAniInfoScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## EquipmentAniInfoScript

```asm
// === 0898d03e EquipmentAniInfoScript::EquipmentAniInfoScript  [0x0898d03e-0x898d141] ===
 898d03e:	55                   	push   %ebp
 898d03f:	89 e5                	mov    %esp,%ebp
 898d041:	56                   	push   %esi
 898d042:	53                   	push   %ebx
 898d043:	83 ec 10             	sub    $0x10,%esp
 898d046:	8b 45 08             	mov    0x8(%ebp),%eax
 898d049:	89 04 24             	mov    %eax,(%esp)
 898d04c:	e8 fd 81 03 00       	call   89c524e <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EEC1Ev>
 898d051:	8b 45 08             	mov    0x8(%ebp),%eax
 898d054:	83 c0 18             	add    $0x18,%eax
 898d057:	89 04 24             	mov    %eax,(%esp)
 898d05a:	e8 ef 81 03 00       	call   89c524e <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EEC1Ev>
 898d05f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d062:	83 c0 40             	add    $0x40,%eax
 898d065:	89 04 24             	mov    %eax,(%esp)
 898d068:	e8 f3 fe 73 ff       	call   80ccf60 <_ZNSt6vectorISsSaISsEEC1Ev>
 898d06d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d070:	83 c0 4c             	add    $0x4c,%eax
 898d073:	89 04 24             	mov    %eax,(%esp)
 898d076:	e8 55 95 d7 ff       	call   87065d0 <_ZNSsC1Ev>
 898d07b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d07e:	83 c0 50             	add    $0x50,%eax
 898d081:	89 04 24             	mov    %eax,(%esp)
 898d084:	e8 37 82 03 00       	call   89c52c0 <_ZNSt6vectorI19GrowthEquipmentInfoSaIS0_EEC1Ev>
 898d089:	8b 45 08             	mov    0x8(%ebp),%eax
 898d08c:	83 c0 5c             	add    $0x5c,%eax
 898d08f:	89 04 24             	mov    %eax,(%esp)
 898d092:	e8 9b 82 03 00       	call   89c5332 <_ZNSt6vectorIS_I20STEquipmentAniScriptSaIS0_EESaIS2_EEC1Ev>
 898d097:	8b 45 08             	mov    0x8(%ebp),%eax
 898d09a:	89 04 24             	mov    %eax,(%esp)
 898d09d:	e8 a0 00 00 00       	call   898d142 <_ZN22EquipmentAniInfoScript5clearEv>
 898d0a2:	e9 93 00 00 00       	jmp    898d13a <_ZN22EquipmentAniInfoScriptC1Ev+0xfc>
 898d0a7:	89 d3                	mov    %edx,%ebx
 898d0a9:	89 c6                	mov    %eax,%esi
 898d0ab:	8b 45 08             	mov    0x8(%ebp),%eax
 898d0ae:	83 c0 5c             	add    $0x5c,%eax
 898d0b1:	89 04 24             	mov    %eax,(%esp)
 898d0b4:	e8 8d 82 03 00       	call   89c5346 <_ZNSt6vectorIS_I20STEquipmentAniScriptSaIS0_EESaIS2_EED1Ev>
 898d0b9:	89 f0                	mov    %esi,%eax
 898d0bb:	89 da                	mov    %ebx,%edx
 898d0bd:	eb 00                	jmp    898d0bf <_ZN22EquipmentAniInfoScriptC1Ev+0x81>
 898d0bf:	89 d3                	mov    %edx,%ebx
 898d0c1:	89 c6                	mov    %eax,%esi
 898d0c3:	8b 45 08             	mov    0x8(%ebp),%eax
 898d0c6:	83 c0 50             	add    $0x50,%eax
 898d0c9:	89 04 24             	mov    %eax,(%esp)
 898d0cc:	e8 03 82 03 00       	call   89c52d4 <_ZNSt6vectorI19GrowthEquipmentInfoSaIS0_EED1Ev>
 898d0d1:	89 f0                	mov    %esi,%eax
 898d0d3:	89 da                	mov    %ebx,%edx
 898d0d5:	eb 00                	jmp    898d0d7 <_ZN22EquipmentAniInfoScriptC1Ev+0x99>
 898d0d7:	89 d3                	mov    %edx,%ebx
 898d0d9:	89 c6                	mov    %eax,%esi
 898d0db:	8b 45 08             	mov    0x8(%ebp),%eax
 898d0de:	83 c0 4c             	add    $0x4c,%eax
 898d0e1:	89 04 24             	mov    %eax,(%esp)
 898d0e4:	e8 f7 aa d7 ff       	call   8707be0 <_ZNSsD1Ev>
 898d0e9:	89 f0                	mov    %esi,%eax
 898d0eb:	89 da                	mov    %ebx,%edx
 898d0ed:	eb 00                	jmp    898d0ef <_ZN22EquipmentAniInfoScriptC1Ev+0xb1>
 898d0ef:	89 d3                	mov    %edx,%ebx
 898d0f1:	89 c6                	mov    %eax,%esi
 898d0f3:	8b 45 08             	mov    0x8(%ebp),%eax
 898d0f6:	83 c0 40             	add    $0x40,%eax
 898d0f9:	89 04 24             	mov    %eax,(%esp)
 898d0fc:	e8 73 fe 73 ff       	call   80ccf74 <_ZNSt6vectorISsSaISsEED1Ev>
 898d101:	89 f0                	mov    %esi,%eax
 898d103:	89 da                	mov    %ebx,%edx
 898d105:	eb 00                	jmp    898d107 <_ZN22EquipmentAniInfoScriptC1Ev+0xc9>
 898d107:	89 d3                	mov    %edx,%ebx
 898d109:	89 c6                	mov    %eax,%esi
 898d10b:	8b 45 08             	mov    0x8(%ebp),%eax
 898d10e:	83 c0 18             	add    $0x18,%eax
 898d111:	89 04 24             	mov    %eax,(%esp)
 898d114:	e8 49 81 03 00       	call   89c5262 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EED1Ev>
 898d119:	89 f0                	mov    %esi,%eax
 898d11b:	89 da                	mov    %ebx,%edx
 898d11d:	eb 00                	jmp    898d11f <_ZN22EquipmentAniInfoScriptC1Ev+0xe1>
 898d11f:	89 d3                	mov    %edx,%ebx
 898d121:	89 c6                	mov    %eax,%esi
 898d123:	8b 45 08             	mov    0x8(%ebp),%eax
 898d126:	89 04 24             	mov    %eax,(%esp)
 898d129:	e8 34 81 03 00       	call   89c5262 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EED1Ev>
 898d12e:	89 f0                	mov    %esi,%eax
 898d130:	89 da                	mov    %ebx,%edx
 898d132:	89 04 24             	mov    %eax,(%esp)
 898d135:	e8 16 66 15 00       	call   8ae3750 <_Unwind_Resume>
 898d13a:	83 c4 10             	add    $0x10,%esp
 898d13d:	5b                   	pop    %ebx
 898d13e:	5e                   	pop    %esi
 898d13f:	5d                   	pop    %ebp
 898d140:	c3                   	ret
 898d141:	90                   	nop

```

```c
// EquipmentAniInfoScript::EquipmentAniInfoScript @ 0x898d03e

/* EquipmentAniInfoScript::EquipmentAniInfoScript() */

void __thiscall EquipmentAniInfoScript::EquipmentAniInfoScript(EquipmentAniInfoScript *this)

{
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::vector
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)this);
                    /* try { // try from 0898d05a to 0898d05e has its CatchHandler @ 0898d11f */
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::vector
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)(this + 0x18));
                    /* try { // try from 0898d068 to 0898d06c has its CatchHandler @ 0898d107 */
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
                    /* try { // try from 0898d076 to 0898d07a has its CatchHandler @ 0898d0ef */
  std::string::string((string *)(this + 0x4c));
                    /* try { // try from 0898d084 to 0898d088 has its CatchHandler @ 0898d0d7 */
  std::vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>>::vector
            ((vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>> *)(this + 0x50));
                    /* try { // try from 0898d092 to 0898d096 has its CatchHandler @ 0898d0bf */
  std::
  vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
  ::vector((vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
            *)(this + 0x5c));
                    /* try { // try from 0898d09d to 0898d0a1 has its CatchHandler @ 0898d0a7 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 0898d142 EquipmentAniInfoScript::clear  [0x0898d142-0x898d1fb] ===
 898d142:	55                   	push   %ebp
 898d143:	89 e5                	mov    %esp,%ebp
 898d145:	83 ec 18             	sub    $0x18,%esp
 898d148:	8b 45 08             	mov    0x8(%ebp),%eax
 898d14b:	89 04 24             	mov    %eax,(%esp)
 898d14e:	e8 51 82 03 00       	call   89c53a4 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE5clearEv>
 898d153:	8b 45 08             	mov    0x8(%ebp),%eax
 898d156:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
 898d15d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d160:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 898d167:	8b 45 08             	mov    0x8(%ebp),%eax
 898d16a:	83 c0 18             	add    $0x18,%eax
 898d16d:	89 04 24             	mov    %eax,(%esp)
 898d170:	e8 2f 82 03 00       	call   89c53a4 <_ZNSt6vectorI20STEquipmentAniScriptSaIS0_EE5clearEv>
 898d175:	8b 45 08             	mov    0x8(%ebp),%eax
 898d178:	c7 40 24 ff ff ff ff 	movl   $0xffffffff,0x24(%eax)
 898d17f:	8b 45 08             	mov    0x8(%ebp),%eax
 898d182:	c7 40 28 01 00 00 00 	movl   $0x1,0x28(%eax)
 898d189:	8b 45 08             	mov    0x8(%ebp),%eax
 898d18c:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 898d193:	8b 45 08             	mov    0x8(%ebp),%eax
 898d196:	c7 40 30 ff ff ff ff 	movl   $0xffffffff,0x30(%eax)
 898d19d:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1a0:	c7 40 34 ff ff ff ff 	movl   $0xffffffff,0x34(%eax)
 898d1a7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1aa:	83 c0 4c             	add    $0x4c,%eax
 898d1ad:	89 04 24             	mov    %eax,(%esp)
 898d1b0:	e8 1b bc d7 ff       	call   8708dd0 <_ZNSs5clearEv>
 898d1b5:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1b8:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 898d1bf:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1c2:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 898d1c9:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1cc:	83 c0 40             	add    $0x40,%eax
 898d1cf:	89 04 24             	mov    %eax,(%esp)
 898d1d2:	e8 f1 44 9b ff       	call   83416c8 <_ZNSt6vectorISsSaISsEE5clearEv>
 898d1d7:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1da:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 898d1de:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1e1:	83 c0 50             	add    $0x50,%eax
 898d1e4:	89 04 24             	mov    %eax,(%esp)
 898d1e7:	e8 d4 81 03 00       	call   89c53c0 <_ZNSt6vectorI19GrowthEquipmentInfoSaIS0_EE5clearEv>
 898d1ec:	8b 45 08             	mov    0x8(%ebp),%eax
 898d1ef:	83 c0 5c             	add    $0x5c,%eax
 898d1f2:	89 04 24             	mov    %eax,(%esp)
 898d1f5:	e8 e2 81 03 00       	call   89c53dc <_ZNSt6vectorIS_I20STEquipmentAniScriptSaIS0_EESaIS2_EE5clearEv>
 898d1fa:	c9                   	leave
 898d1fb:	c3                   	ret

```

```c
// EquipmentAniInfoScript::clear @ 0x898d142

/* EquipmentAniInfoScript::clear() */

void __thiscall EquipmentAniInfoScript::clear(EquipmentAniInfoScript *this)

{
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::clear
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)this);
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>::clear
            ((vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>> *)(this + 0x18));
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 1;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0xffffffff;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  std::string::clear((string *)(this + 0x4c));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x40));
  this[0x14] = (EquipmentAniInfoScript)0x0;
  std::vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>>::clear
            ((vector<GrowthEquipmentInfo,std::allocator<GrowthEquipmentInfo>> *)(this + 0x50));
  std::
  vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
  ::clear((vector<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>,std::allocator<std::vector<STEquipmentAniScript,std::allocator<STEquipmentAniScript>>>>
           *)(this + 0x5c));
  return;
}

```


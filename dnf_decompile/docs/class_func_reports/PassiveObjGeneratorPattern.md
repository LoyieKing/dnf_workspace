# PassiveObjGeneratorPattern

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## PassiveObjGeneratorPattern

```asm
// === 08a3ad70 PassiveObjGeneratorPattern::PassiveObjGeneratorPattern  [0x08a3ad70-0x8a3ae09] ===
 8a3ad70:	55                   	push   %ebp
 8a3ad71:	89 e5                	mov    %esp,%ebp
 8a3ad73:	56                   	push   %esi
 8a3ad74:	53                   	push   %ebx
 8a3ad75:	83 ec 10             	sub    $0x10,%esp
 8a3ad78:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad7b:	c6 00 01             	movb   $0x1,(%eax)
 8a3ad7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad81:	83 c0 04             	add    $0x4,%eax
 8a3ad84:	89 04 24             	mov    %eax,(%esp)
 8a3ad87:	e8 44 b8 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3ad8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad8f:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8a3ad96:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ad99:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8a3ada0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ada3:	83 c0 10             	add    $0x10,%eax
 8a3ada6:	89 04 24             	mov    %eax,(%esp)
 8a3ada9:	e8 64 9f 6a ff       	call   80e4d12 <_ZNSt6vectorIhSaIhEEC1Ev>
 8a3adae:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3adb1:	83 c0 04             	add    $0x4,%eax
 8a3adb4:	89 04 24             	mov    %eax,(%esp)
 8a3adb7:	e8 14 e0 cc ff       	call   8708dd0 <_ZNSs5clearEv>
 8a3adbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3adbf:	83 c0 10             	add    $0x10,%eax
 8a3adc2:	89 04 24             	mov    %eax,(%esp)
 8a3adc5:	e8 2c 9f 6a ff       	call   80e4cf6 <_ZNSt6vectorIhSaIhEE5clearEv>
 8a3adca:	eb 36                	jmp    8a3ae02 <_ZN26PassiveObjGeneratorPatternC1Ev+0x92>
 8a3adcc:	89 d3                	mov    %edx,%ebx
 8a3adce:	89 c6                	mov    %eax,%esi
 8a3add0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3add3:	83 c0 10             	add    $0x10,%eax
 8a3add6:	89 04 24             	mov    %eax,(%esp)
 8a3add9:	e8 48 9f 6a ff       	call   80e4d26 <_ZNSt6vectorIhSaIhEED1Ev>
 8a3adde:	89 f0                	mov    %esi,%eax
 8a3ade0:	89 da                	mov    %ebx,%edx
 8a3ade2:	eb 00                	jmp    8a3ade4 <_ZN26PassiveObjGeneratorPatternC1Ev+0x74>
 8a3ade4:	89 d3                	mov    %edx,%ebx
 8a3ade6:	89 c6                	mov    %eax,%esi
 8a3ade8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3adeb:	83 c0 04             	add    $0x4,%eax
 8a3adee:	89 04 24             	mov    %eax,(%esp)
 8a3adf1:	e8 ea cd cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3adf6:	89 f0                	mov    %esi,%eax
 8a3adf8:	89 da                	mov    %ebx,%edx
 8a3adfa:	89 04 24             	mov    %eax,(%esp)
 8a3adfd:	e8 4e 89 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a3ae02:	83 c4 10             	add    $0x10,%esp
 8a3ae05:	5b                   	pop    %ebx
 8a3ae06:	5e                   	pop    %esi
 8a3ae07:	5d                   	pop    %ebp
 8a3ae08:	c3                   	ret
 8a3ae09:	90                   	nop

```

```c
// PassiveObjGeneratorPattern::PassiveObjGeneratorPattern @ 0x8a3ad70

/* PassiveObjGeneratorPattern::PassiveObjGeneratorPattern() */

void __thiscall
PassiveObjGeneratorPattern::PassiveObjGeneratorPattern(PassiveObjGeneratorPattern *this)

{
  *this = (PassiveObjGeneratorPattern)0x1;
  std::string::string((string *)(this + 4));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
                    /* try { // try from 08a3ada9 to 08a3adad has its CatchHandler @ 08a3ade4 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
                    /* try { // try from 08a3adb7 to 08a3adc9 has its CatchHandler @ 08a3adcc */
  std::string::clear((string *)(this + 4));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  return;
}

```


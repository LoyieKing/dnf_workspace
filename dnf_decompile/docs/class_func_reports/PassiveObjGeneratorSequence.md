# PassiveObjGeneratorSequence

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## PassiveObjGeneratorSequence

```asm
// === 08a3ae0a PassiveObjGeneratorSequence::PassiveObjGeneratorSequence  [0x08a3ae0a-0x8a3ae55] ===
 8a3ae0a:	55                   	push   %ebp
 8a3ae0b:	89 e5                	mov    %esp,%ebp
 8a3ae0d:	56                   	push   %esi
 8a3ae0e:	53                   	push   %ebx
 8a3ae0f:	83 ec 10             	sub    $0x10,%esp
 8a3ae12:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae15:	89 04 24             	mov    %eax,(%esp)
 8a3ae18:	e8 b3 b7 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a3ae1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae20:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8a3ae27:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae2a:	89 04 24             	mov    %eax,(%esp)
 8a3ae2d:	e8 9e df cc ff       	call   8708dd0 <_ZNSs5clearEv>
 8a3ae32:	eb 1b                	jmp    8a3ae4f <_ZN27PassiveObjGeneratorSequenceC1Ev+0x45>
 8a3ae34:	89 d3                	mov    %edx,%ebx
 8a3ae36:	89 c6                	mov    %eax,%esi
 8a3ae38:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae3b:	89 04 24             	mov    %eax,(%esp)
 8a3ae3e:	e8 9d cd cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a3ae43:	89 f0                	mov    %esi,%eax
 8a3ae45:	89 da                	mov    %ebx,%edx
 8a3ae47:	89 04 24             	mov    %eax,(%esp)
 8a3ae4a:	e8 01 89 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a3ae4f:	83 c4 10             	add    $0x10,%esp
 8a3ae52:	5b                   	pop    %ebx
 8a3ae53:	5e                   	pop    %esi
 8a3ae54:	5d                   	pop    %ebp
 8a3ae55:	c3                   	ret

```

```c
// PassiveObjGeneratorSequence::PassiveObjGeneratorSequence @ 0x8a3ae0a

/* PassiveObjGeneratorSequence::PassiveObjGeneratorSequence() */

void __thiscall
PassiveObjGeneratorSequence::PassiveObjGeneratorSequence(PassiveObjGeneratorSequence *this)

{
  std::string::string((string *)this);
  *(undefined4 *)(this + 4) = 0;
                    /* try { // try from 08a3ae2d to 08a3ae31 has its CatchHandler @ 08a3ae34 */
  std::string::clear((string *)this);
  return;
}

```


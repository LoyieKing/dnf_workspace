# PassiveObjGeneratorObject

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## PassiveObjGeneratorObject

```asm
// === 08a3ae56 PassiveObjGeneratorObject::PassiveObjGeneratorObject  [0x08a3ae56-0x8a3aec9] ===
 8a3ae56:	55                   	push   %ebp
 8a3ae57:	89 e5                	mov    %esp,%ebp
 8a3ae59:	56                   	push   %esi
 8a3ae5a:	53                   	push   %ebx
 8a3ae5b:	83 ec 20             	sub    $0x20,%esp
 8a3ae5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae61:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8a3ae67:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae6a:	ba 00 00 00 00       	mov    $0x0,%edx
 8a3ae6f:	89 50 04             	mov    %edx,0x4(%eax)
 8a3ae72:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a3ae75:	89 04 24             	mov    %eax,(%esp)
 8a3ae78:	e8 53 52 ca ff       	call   86e00d0 <_ZNSaIcEC1Ev>
 8a3ae7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3ae80:	8d 50 08             	lea    0x8(%eax),%edx
 8a3ae83:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a3ae86:	89 44 24 08          	mov    %eax,0x8(%esp)
 8a3ae8a:	c7 44 24 04 00 dc e1 	movl   $0x8e1dc00,0x4(%esp)
 8a3ae91:	08 
 8a3ae92:	89 14 24             	mov    %edx,(%esp)
 8a3ae95:	e8 96 c7 cc ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8a3ae9a:	eb 1b                	jmp    8a3aeb7 <_ZN25PassiveObjGeneratorObjectC1Ev+0x61>
 8a3ae9c:	89 d3                	mov    %edx,%ebx
 8a3ae9e:	89 c6                	mov    %eax,%esi
 8a3aea0:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a3aea3:	89 04 24             	mov    %eax,(%esp)
 8a3aea6:	e8 45 52 ca ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8a3aeab:	89 f0                	mov    %esi,%eax
 8a3aead:	89 da                	mov    %ebx,%edx
 8a3aeaf:	89 04 24             	mov    %eax,(%esp)
 8a3aeb2:	e8 99 88 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a3aeb7:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8a3aeba:	89 04 24             	mov    %eax,(%esp)
 8a3aebd:	e8 2e 52 ca ff       	call   86e00f0 <_ZNSaIcED1Ev>
 8a3aec2:	83 c4 20             	add    $0x20,%esp
 8a3aec5:	5b                   	pop    %ebx
 8a3aec6:	5e                   	pop    %esi
 8a3aec7:	5d                   	pop    %ebp
 8a3aec8:	c3                   	ret
 8a3aec9:	90                   	nop

```

```c
// PassiveObjGeneratorObject::PassiveObjGeneratorObject @ 0x8a3ae56

/* PassiveObjGeneratorObject::PassiveObjGeneratorObject() */

void __thiscall
PassiveObjGeneratorObject::PassiveObjGeneratorObject(PassiveObjGeneratorObject *this)

{
  allocator<char> local_d;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 08a3ae95 to 08a3ae99 has its CatchHandler @ 08a3ae9c */
  std::string::string((string *)(this + 8),"",(allocator *)&local_d);
  std::allocator<char>::~allocator(&local_d);
  return;
}

```


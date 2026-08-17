# StackablePackage

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## G_EventProcessor

```asm
// === 08281730 StackablePackage::G_EventProcessor  [0x08281730-0x82817c3] ===
 8281730:	55                   	push   %ebp
 8281731:	89 e5                	mov    %esp,%ebp
 8281733:	57                   	push   %edi
 8281734:	56                   	push   %esi
 8281735:	53                   	push   %ebx
 8281736:	83 ec 1c             	sub    $0x1c,%esp
 8281739:	b8 30 bb 40 09       	mov    $0x940bb30,%eax
 828173e:	0f b6 00             	movzbl (%eax),%eax
 8281741:	84 c0                	test   %al,%al
 8281743:	75 71                	jne    82817b6 <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 8281745:	c7 04 24 30 bb 40 09 	movl   $0x940bb30,(%esp)
 828174c:	e8 df 3b 4a 00       	call   8725330 <__cxa_guard_acquire>
 8281751:	85 c0                	test   %eax,%eax
 8281753:	0f 95 c0             	setne  %al
 8281756:	84 c0                	test   %al,%al
 8281758:	74 5c                	je     82817b6 <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 828175a:	bb 00 00 00 00       	mov    $0x0,%ebx
 828175f:	c7 04 24 38 bb 40 09 	movl   $0x940bb38,(%esp)
 8281766:	e8 5f 00 00 00       	call   82817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>
 828176b:	c7 04 24 30 bb 40 09 	movl   $0x940bb30,(%esp)
 8281772:	e8 d9 3a 4a 00       	call   8725250 <__cxa_guard_release>
 8281777:	b8 2a 18 28 08       	mov    $0x828182a,%eax
 828177c:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8281783:	08 
 8281784:	c7 44 24 04 38 bb 40 	movl   $0x940bb38,0x4(%esp)
 828178b:	09 
 828178c:	89 04 24             	mov    %eax,(%esp)
 828178f:	e8 3c c6 df ff       	call   807ddd0 <__cxa_atexit@plt>
 8281794:	eb 20                	jmp    82817b6 <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 8281796:	89 d6                	mov    %edx,%esi
 8281798:	89 c7                	mov    %eax,%edi
 828179a:	84 db                	test   %bl,%bl
 828179c:	75 0c                	jne    82817aa <_ZN16StackablePackageL16G_EventProcessorEv+0x7a>
 828179e:	c7 04 24 30 bb 40 09 	movl   $0x940bb30,(%esp)
 82817a5:	e8 16 3b 4a 00       	call   87252c0 <__cxa_guard_abort>
 82817aa:	89 f8                	mov    %edi,%eax
 82817ac:	89 f2                	mov    %esi,%edx
 82817ae:	89 04 24             	mov    %eax,(%esp)
 82817b1:	e8 9a 1f 86 00       	call   8ae3750 <_Unwind_Resume>
 82817b6:	b8 38 bb 40 09       	mov    $0x940bb38,%eax
 82817bb:	83 c4 1c             	add    $0x1c,%esp
 82817be:	5b                   	pop    %ebx
 82817bf:	5e                   	pop    %esi
 82817c0:	5f                   	pop    %edi
 82817c1:	5d                   	pop    %ebp
 82817c2:	c3                   	ret
 82817c3:	90                   	nop

```

```c
// StackablePackage::G_EventProcessor @ 0x8281730

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 08281766 to 0828176a has its CatchHandler @ 08281796 */
      EventProcessManager::EventProcessManager((EventProcessManager *)&G_EventProcessor()::instance)
      ;
      __cxa_guard_release(&G_EventProcessor()::instance);
      __cxa_atexit(EventProcessManager::~EventProcessManager,&G_EventProcessor()::instance,
                   &__dso_handle);
    }
  }
  return &G_EventProcessor()::instance;
}

```

---

## G_EventProcessor_08320224

```asm
// === 08320224 StackablePackage::G_EventProcessor  [0x08320224-0x83202b7] ===
 8320224:	55                   	push   %ebp
 8320225:	89 e5                	mov    %esp,%ebp
 8320227:	57                   	push   %edi
 8320228:	56                   	push   %esi
 8320229:	53                   	push   %ebx
 832022a:	83 ec 1c             	sub    $0x1c,%esp
 832022d:	b8 c0 be 43 09       	mov    $0x943bec0,%eax
 8320232:	0f b6 00             	movzbl (%eax),%eax
 8320235:	84 c0                	test   %al,%al
 8320237:	75 71                	jne    83202aa <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 8320239:	c7 04 24 c0 be 43 09 	movl   $0x943bec0,(%esp)
 8320240:	e8 eb 50 40 00       	call   8725330 <__cxa_guard_acquire>
 8320245:	85 c0                	test   %eax,%eax
 8320247:	0f 95 c0             	setne  %al
 832024a:	84 c0                	test   %al,%al
 832024c:	74 5c                	je     83202aa <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 832024e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8320253:	c7 04 24 d0 be 43 09 	movl   $0x943bed0,(%esp)
 832025a:	e8 6b 15 f6 ff       	call   82817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>
 832025f:	c7 04 24 c0 be 43 09 	movl   $0x943bec0,(%esp)
 8320266:	e8 e5 4f 40 00       	call   8725250 <__cxa_guard_release>
 832026b:	b8 2a 18 28 08       	mov    $0x828182a,%eax
 8320270:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8320277:	08 
 8320278:	c7 44 24 04 d0 be 43 	movl   $0x943bed0,0x4(%esp)
 832027f:	09 
 8320280:	89 04 24             	mov    %eax,(%esp)
 8320283:	e8 48 db d5 ff       	call   807ddd0 <__cxa_atexit@plt>
 8320288:	eb 20                	jmp    83202aa <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 832028a:	89 d6                	mov    %edx,%esi
 832028c:	89 c7                	mov    %eax,%edi
 832028e:	84 db                	test   %bl,%bl
 8320290:	75 0c                	jne    832029e <_ZN16StackablePackageL16G_EventProcessorEv+0x7a>
 8320292:	c7 04 24 c0 be 43 09 	movl   $0x943bec0,(%esp)
 8320299:	e8 22 50 40 00       	call   87252c0 <__cxa_guard_abort>
 832029e:	89 f8                	mov    %edi,%eax
 83202a0:	89 f2                	mov    %esi,%edx
 83202a2:	89 04 24             	mov    %eax,(%esp)
 83202a5:	e8 a6 34 7c 00       	call   8ae3750 <_Unwind_Resume>
 83202aa:	b8 d0 be 43 09       	mov    $0x943bed0,%eax
 83202af:	83 c4 1c             	add    $0x1c,%esp
 83202b2:	5b                   	pop    %ebx
 83202b3:	5e                   	pop    %esi
 83202b4:	5f                   	pop    %edi
 83202b5:	5d                   	pop    %ebp
 83202b6:	c3                   	ret
 83202b7:	90                   	nop

```

```c
// StackablePackage::G_EventProcessor @ 0x8320224

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 0832025a to 0832025e has its CatchHandler @ 0832028a */
      EventProcessManager::EventProcessManager((EventProcessManager *)&G_EventProcessor()::instance)
      ;
      __cxa_guard_release(&G_EventProcessor()::instance);
      __cxa_atexit(EventProcessManager::~EventProcessManager,&G_EventProcessor()::instance,
                   &__dso_handle);
    }
  }
  return &G_EventProcessor()::instance;
}

```

---

## G_EventProcessor_084bba67

```asm
// === 084bba67 StackablePackage::G_EventProcessor  [0x084bba67-0x84bbaf9] ===
 84bba67:	55                   	push   %ebp
 84bba68:	89 e5                	mov    %esp,%ebp
 84bba6a:	57                   	push   %edi
 84bba6b:	56                   	push   %esi
 84bba6c:	53                   	push   %ebx
 84bba6d:	83 ec 1c             	sub    $0x1c,%esp
 84bba70:	b8 b0 dd 43 09       	mov    $0x943ddb0,%eax
 84bba75:	0f b6 00             	movzbl (%eax),%eax
 84bba78:	84 c0                	test   %al,%al
 84bba7a:	75 71                	jne    84bbaed <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 84bba7c:	c7 04 24 b0 dd 43 09 	movl   $0x943ddb0,(%esp)
 84bba83:	e8 a8 98 26 00       	call   8725330 <__cxa_guard_acquire>
 84bba88:	85 c0                	test   %eax,%eax
 84bba8a:	0f 95 c0             	setne  %al
 84bba8d:	84 c0                	test   %al,%al
 84bba8f:	74 5c                	je     84bbaed <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 84bba91:	bb 00 00 00 00       	mov    $0x0,%ebx
 84bba96:	c7 04 24 b8 dd 43 09 	movl   $0x943ddb8,(%esp)
 84bba9d:	e8 28 5d dc ff       	call   82817ca <_ZN16StackablePackage19EventProcessManagerC1Ev>
 84bbaa2:	c7 04 24 b0 dd 43 09 	movl   $0x943ddb0,(%esp)
 84bbaa9:	e8 a2 97 26 00       	call   8725250 <__cxa_guard_release>
 84bbaae:	b8 2a 18 28 08       	mov    $0x828182a,%eax
 84bbab3:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 84bbaba:	08 
 84bbabb:	c7 44 24 04 b8 dd 43 	movl   $0x943ddb8,0x4(%esp)
 84bbac2:	09 
 84bbac3:	89 04 24             	mov    %eax,(%esp)
 84bbac6:	e8 05 23 bc ff       	call   807ddd0 <__cxa_atexit@plt>
 84bbacb:	eb 20                	jmp    84bbaed <_ZN16StackablePackageL16G_EventProcessorEv+0x86>
 84bbacd:	89 d6                	mov    %edx,%esi
 84bbacf:	89 c7                	mov    %eax,%edi
 84bbad1:	84 db                	test   %bl,%bl
 84bbad3:	75 0c                	jne    84bbae1 <_ZN16StackablePackageL16G_EventProcessorEv+0x7a>
 84bbad5:	c7 04 24 b0 dd 43 09 	movl   $0x943ddb0,(%esp)
 84bbadc:	e8 df 97 26 00       	call   87252c0 <__cxa_guard_abort>
 84bbae1:	89 f8                	mov    %edi,%eax
 84bbae3:	89 f2                	mov    %esi,%edx
 84bbae5:	89 04 24             	mov    %eax,(%esp)
 84bbae8:	e8 63 7c 62 00       	call   8ae3750 <_Unwind_Resume>
 84bbaed:	b8 b8 dd 43 09       	mov    $0x943ddb8,%eax
 84bbaf2:	83 c4 1c             	add    $0x1c,%esp
 84bbaf5:	5b                   	pop    %ebx
 84bbaf6:	5e                   	pop    %esi
 84bbaf7:	5f                   	pop    %edi
 84bbaf8:	5d                   	pop    %ebp
 84bbaf9:	c3                   	ret

```

```c
// StackablePackage::G_EventProcessor @ 0x84bba67

/* StackablePackage::G_EventProcessor() */

undefined4 * StackablePackage::G_EventProcessor(void)

{
  int iVar1;
  
  if (G_EventProcessor()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&G_EventProcessor()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 084bba9d to 084bbaa1 has its CatchHandler @ 084bbacd */
      EventProcessManager::EventProcessManager((EventProcessManager *)&G_EventProcessor()::instance)
      ;
      __cxa_guard_release(&G_EventProcessor()::instance);
      __cxa_atexit(EventProcessManager::~EventProcessManager,&G_EventProcessor()::instance,
                   &__dso_handle);
    }
  }
  return &G_EventProcessor()::instance;
}

```


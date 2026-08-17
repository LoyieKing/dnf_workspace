# DNFLex

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 21

---

## CloseInputStream

```asm
// === 08acd5b0 DNFLex::CloseInputStream  [0x08acd5b0-0x8acd5ef] ===
 8acd5b0:	55                   	push   %ebp
 8acd5b1:	89 e5                	mov    %esp,%ebp
 8acd5b3:	53                   	push   %ebx
 8acd5b4:	83 ec 14             	sub    $0x14,%esp
 8acd5b7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd5ba:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acd5c0:	3b 83 80 00 00 00    	cmp    0x80(%ebx),%eax
 8acd5c6:	74 1e                	je     8acd5e6 <_ZN6DNFLex16CloseInputStreamEv+0x36>
 8acd5c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8acd5cf:	00 
 8acd5d0:	89 1c 24             	mov    %ebx,(%esp)
 8acd5d3:	e8 b8 fe ff ff       	call   8acd490 <_ZN6DNFLex14PopInputStreamEb>
 8acd5d8:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acd5de:	3b 83 80 00 00 00    	cmp    0x80(%ebx),%eax
 8acd5e4:	75 e2                	jne    8acd5c8 <_ZN6DNFLex16CloseInputStreamEv+0x18>
 8acd5e6:	83 c4 14             	add    $0x14,%esp
 8acd5e9:	5b                   	pop    %ebx
 8acd5ea:	5d                   	pop    %ebp
 8acd5eb:	c3                   	ret
 8acd5ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::CloseInputStream @ 0x8acd5b0

/* DWARF original prototype: void CloseInputStream(DNFLex * this) */

void __thiscall DNFLex::CloseInputStream(DNFLex *this)

{
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_finish !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    do {
      PopInputStream(this,true);
    } while ((this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish !=
             (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_start);
  }
  return;
}

```

---

## DNFLex

```asm
// === 08acd3a0 DNFLex::DNFLex  [0x08acd3a0-0x8acd44f] ===
 8acd3a0:	55                   	push   %ebp
 8acd3a1:	89 e5                	mov    %esp,%ebp
 8acd3a3:	57                   	push   %edi
 8acd3a4:	53                   	push   %ebx
 8acd3a5:	83 ec 10             	sub    $0x10,%esp
 8acd3a8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd3ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8acd3b2:	00 
 8acd3b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acd3ba:	00 
 8acd3bb:	89 1c 24             	mov    %ebx,(%esp)
 8acd3be:	e8 7d 45 00 00       	call   8ad1940 <_ZN23__dnf_script__FlexLexerC1EPSiPSo>
 8acd3c3:	8d 93 8c 00 00 00    	lea    0x8c(%ebx),%edx
 8acd3c9:	31 c0                	xor    %eax,%eax
 8acd3cb:	b9 00 08 00 00       	mov    $0x800,%ecx
 8acd3d0:	89 d7                	mov    %edx,%edi
 8acd3d2:	f3 ab                	rep stos %eax,%es:(%edi)
 8acd3d4:	c7 03 a8 eb e2 08    	movl   $0x8e2eba8,(%ebx)
 8acd3da:	c7 83 80 00 00 00 00 	movl   $0x0,0x80(%ebx)
 8acd3e1:	00 00 00 
 8acd3e4:	c7 83 84 00 00 00 00 	movl   $0x0,0x84(%ebx)
 8acd3eb:	00 00 00 
 8acd3ee:	c7 83 88 00 00 00 00 	movl   $0x0,0x88(%ebx)
 8acd3f5:	00 00 00 
 8acd3f8:	c7 83 8c 40 00 00 00 	movl   $0x0,0x408c(%ebx)
 8acd3ff:	00 00 00 
 8acd402:	c6 83 90 40 00 00 00 	movb   $0x0,0x4090(%ebx)
 8acd409:	66 b9 00 08          	mov    $0x800,%cx
 8acd40d:	c6 83 91 40 00 00 01 	movb   $0x1,0x4091(%ebx)
 8acd414:	c7 83 94 40 00 00 00 	movl   $0x0,0x4094(%ebx)
 8acd41b:	00 00 00 
 8acd41e:	c7 83 98 40 00 00 00 	movl   $0x0,0x4098(%ebx)
 8acd425:	00 00 00 
 8acd428:	c7 83 9c 40 00 00 00 	movl   $0x0,0x409c(%ebx)
 8acd42f:	00 00 00 
 8acd432:	c7 83 a0 40 00 00 00 	movl   $0x0,0x40a0(%ebx)
 8acd439:	00 00 00 
 8acd43c:	81 c3 8c 20 00 00    	add    $0x208c,%ebx
 8acd442:	89 df                	mov    %ebx,%edi
 8acd444:	f3 ab                	rep stos %eax,%es:(%edi)
 8acd446:	83 c4 10             	add    $0x10,%esp
 8acd449:	5b                   	pop    %ebx
 8acd44a:	5f                   	pop    %edi
 8acd44b:	5d                   	pop    %ebp
 8acd44c:	c3                   	ret
 8acd44d:	90                   	nop
 8acd44e:	66 90                	xchg   %ax,%ax

```

```c
// DNFLex::DNFLex @ 0x8acd3a0

/* DWARF original prototype: void DNFLex(DNFLex * this) */

void __thiscall DNFLex::DNFLex(DNFLex *this)

{
  int iVar1;
  char *pcVar2;
  byte bVar3;
  
  bVar3 = 0;
  __dnf_script__FlexLexer::__dnf_script__FlexLexer
            (&this->super___dnf_script__FlexLexer,(istream *)0x0,(ostream *)0x0);
  pcVar2 = this->ERR_BUF;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer =
       (_func_int_varargs **)&PTR__DNFLex_08e2eba8;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_start = (stream_t *)0x0;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_finish = (stream_t *)0x0;
  (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
  _M_impl._M_end_of_storage = (stream_t *)0x0;
  this->m_str_tok_pos = (char *)0x0;
  this->is_dbcs_ = false;
  this->allow_inclusion_ = true;
  this->IsDbcsLeadChar_ = (TIsDbcsLeadChar)0x0;
  this->LexerOutput_ = (TLexerOutput)0x0;
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
  pcVar2 = this->STR_TOK_BUF;
  for (iVar1 = 0x800; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + (uint)bVar3 * -8 + 4;
  }
  return;
}

```

---

## DisableInclusion

```asm
// === 08acd2c0 DNFLex::DisableInclusion  [0x08acd2c0-0x8acd2cf] ===
 8acd2c0:	55                   	push   %ebp
 8acd2c1:	89 e5                	mov    %esp,%ebp
 8acd2c3:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd2c6:	c6 80 91 40 00 00 00 	movb   $0x0,0x4091(%eax)
 8acd2cd:	5d                   	pop    %ebp
 8acd2ce:	c3                   	ret
 8acd2cf:	90                   	nop

```

```c
// DNFLex::DisableInclusion @ 0x8acd2c0

/* DWARF original prototype: void DisableInclusion(DNFLex * this) */

void __thiscall DNFLex::DisableInclusion(DNFLex *this)

{
  this->allow_inclusion_ = false;
  return;
}

```

---

## EnableInclusion

```asm
// === 08acd2d0 DNFLex::EnableInclusion  [0x08acd2d0-0x8acd2df] ===
 8acd2d0:	55                   	push   %ebp
 8acd2d1:	89 e5                	mov    %esp,%ebp
 8acd2d3:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd2d6:	c6 80 91 40 00 00 01 	movb   $0x1,0x4091(%eax)
 8acd2dd:	5d                   	pop    %ebp
 8acd2de:	c3                   	ret
 8acd2df:	90                   	nop

```

```c
// DNFLex::EnableInclusion @ 0x8acd2d0

/* DWARF original prototype: void EnableInclusion(DNFLex * this) */

void __thiscall DNFLex::EnableInclusion(DNFLex *this)

{
  this->allow_inclusion_ = true;
  return;
}

```

---

## GetInputStream

```asm
// === 08acd280 DNFLex::GetInputStream  [0x08acd280-0x8acd2af] ===
 8acd280:	55                   	push   %ebp
 8acd281:	89 e5                	mov    %esp,%ebp
 8acd283:	8b 55 08             	mov    0x8(%ebp),%edx
 8acd286:	5d                   	pop    %ebp
 8acd287:	8b 8a 84 00 00 00    	mov    0x84(%edx),%ecx
 8acd28d:	3b 8a 80 00 00 00    	cmp    0x80(%edx),%ecx
 8acd293:	0f 94 c2             	sete   %dl
 8acd296:	0f b6 d2             	movzbl %dl,%edx
 8acd299:	8d 41 e8             	lea    -0x18(%ecx),%eax
 8acd29c:	83 ea 01             	sub    $0x1,%edx
 8acd29f:	21 d0                	and    %edx,%eax
 8acd2a1:	c3                   	ret
 8acd2a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acd2a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::GetInputStream @ 0x8acd280

/* DWARF original prototype: stream_t * GetInputStream(DNFLex * this) */

stream_t * __thiscall DNFLex::GetInputStream(DNFLex *this)

{
  stream_t *psVar1;
  
  psVar1 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  return (stream_t *)
         ((uint)(psVar1 + -1) &
         (psVar1 ==
         (this->stream_stack_).
         super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start) -
         1);
}

```

---

## IsStream

```asm
// === 08acd260 DNFLex::IsStream  [0x08acd260-0x8acd27f] ===
 8acd260:	55                   	push   %ebp
 8acd261:	89 e5                	mov    %esp,%ebp
 8acd263:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd266:	5d                   	pop    %ebp
 8acd267:	8b 90 84 00 00 00    	mov    0x84(%eax),%edx
 8acd26d:	3b 90 80 00 00 00    	cmp    0x80(%eax),%edx
 8acd273:	0f 95 c0             	setne  %al
 8acd276:	c3                   	ret
 8acd277:	90                   	nop
 8acd278:	90                   	nop
 8acd279:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::IsStream @ 0x8acd260

/* DWARF original prototype: bool IsStream(DNFLex * this) */

bool __thiscall DNFLex::IsStream(DNFLex *this)

{
  return (this->stream_stack_).
         super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
         != (this->stream_stack_).
            super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start
  ;
}

```

---

## LexerError

```asm
// === 08acd1c0 DNFLex::LexerError  [0x08acd1c0-0x8acd1ef] ===
 8acd1c0:	55                   	push   %ebp
 8acd1c1:	89 e5                	mov    %esp,%ebp
 8acd1c3:	83 ec 08             	sub    $0x8,%esp
 8acd1c6:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd1c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acd1cc:	8b 80 9c 40 00 00    	mov    0x409c(%eax),%eax
 8acd1d2:	85 c0                	test   %eax,%eax
 8acd1d4:	74 0a                	je     8acd1e0 <_ZN6DNFLex10LexerErrorEPKc+0x20>
 8acd1d6:	89 55 08             	mov    %edx,0x8(%ebp)
 8acd1d9:	c9                   	leave
 8acd1da:	ff e0                	jmp    *%eax
 8acd1dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acd1e0:	c9                   	leave
 8acd1e1:	c3                   	ret
 8acd1e2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acd1e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::LexerError @ 0x8acd1c0

/* DWARF original prototype: void LexerError(DNFLex * this, char * msg) */

void __thiscall DNFLex::LexerError(DNFLex *this,char *msg)

{
  if (this->LexerError_ != (TLexerError)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd1da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerError_)(msg);
    return;
  }
  return;
}

```

---

## LexerOutput

```asm
// === 08acd190 DNFLex::LexerOutput  [0x08acd190-0x8acd1bf] ===
 8acd190:	55                   	push   %ebp
 8acd191:	89 e5                	mov    %esp,%ebp
 8acd193:	83 ec 08             	sub    $0x8,%esp
 8acd196:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd199:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acd19c:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8acd19f:	8b 80 98 40 00 00    	mov    0x4098(%eax),%eax
 8acd1a5:	85 c0                	test   %eax,%eax
 8acd1a7:	74 0f                	je     8acd1b8 <_ZN6DNFLex11LexerOutputEPKci+0x28>
 8acd1a9:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 8acd1ac:	89 55 08             	mov    %edx,0x8(%ebp)
 8acd1af:	c9                   	leave
 8acd1b0:	ff e0                	jmp    *%eax
 8acd1b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acd1b8:	c9                   	leave
 8acd1b9:	c3                   	ret
 8acd1ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLex::LexerOutput @ 0x8acd190

/* DWARF original prototype: void LexerOutput(DNFLex * this, char * buf, int size) */

void __thiscall DNFLex::LexerOutput(DNFLex *this,char *buf,int size)

{
  if (this->LexerOutput_ != (TLexerOutput)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerOutput_)(buf,size);
    return;
  }
  return;
}

```

---

## LoadStream

```asm
// === 08acd220 DNFLex::LoadStream  [0x08acd220-0x8acd25f] ===
 8acd220:	55                   	push   %ebp
 8acd221:	89 e5                	mov    %esp,%ebp
 8acd223:	53                   	push   %ebx
 8acd224:	83 ec 04             	sub    $0x4,%esp
 8acd227:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd22a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acd22d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8acd230:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8acd233:	8b 80 a0 40 00 00    	mov    0x40a0(%eax),%eax
 8acd239:	85 c0                	test   %eax,%eax
 8acd23b:	74 13                	je     8acd250 <_ZN6DNFLex10LoadStreamEPKcS1_PNS_13stream_data_tE+0x30>
 8acd23d:	89 5d 10             	mov    %ebx,0x10(%ebp)
 8acd240:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 8acd243:	89 55 08             	mov    %edx,0x8(%ebp)
 8acd246:	83 c4 04             	add    $0x4,%esp
 8acd249:	5b                   	pop    %ebx
 8acd24a:	5d                   	pop    %ebp
 8acd24b:	ff e0                	jmp    *%eax
 8acd24d:	8d 76 00             	lea    0x0(%esi),%esi
 8acd250:	83 c4 04             	add    $0x4,%esp
 8acd253:	5b                   	pop    %ebx
 8acd254:	5d                   	pop    %ebp
 8acd255:	c3                   	ret
 8acd256:	8d 76 00             	lea    0x0(%esi),%esi
 8acd259:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::LoadStream @ 0x8acd220

/* DWARF original prototype: bool LoadStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::LoadStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acd24b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}

```

---

## PopInputStream

```asm
// === 08acd490 DNFLex::PopInputStream  [0x08acd490-0x8acd5af] ===
 8acd490:	55                   	push   %ebp
 8acd491:	89 e5                	mov    %esp,%ebp
 8acd493:	56                   	push   %esi
 8acd494:	53                   	push   %ebx
 8acd495:	83 ec 20             	sub    $0x20,%esp
 8acd498:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd49b:	0f b6 4d 0c          	movzbl 0xc(%ebp),%ecx
 8acd49f:	8b 93 84 00 00 00    	mov    0x84(%ebx),%edx
 8acd4a5:	8b 83 80 00 00 00    	mov    0x80(%ebx),%eax
 8acd4ab:	39 c2                	cmp    %eax,%edx
 8acd4ad:	0f 84 89 00 00 00    	je     8acd53c <_ZN6DNFLex14PopInputStreamEb+0xac>
 8acd4b3:	84 c9                	test   %cl,%cl
 8acd4b5:	74 71                	je     8acd528 <_ZN6DNFLex14PopInputStreamEb+0x98>
 8acd4b7:	89 1c 24             	mov    %ebx,(%esp)
 8acd4ba:	e8 41 48 00 00       	call   8ad1d00 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv>
 8acd4bf:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acd4c5:	83 e8 10             	sub    $0x10,%eax
 8acd4c8:	89 04 24             	mov    %eax,(%esp)
 8acd4cb:	e8 80 ff ff ff       	call   8acd450 <_ZN6DNFLex13stream_data_t7destroyEv>
 8acd4d0:	8b b3 84 00 00 00    	mov    0x84(%ebx),%esi
 8acd4d6:	8d 46 e8             	lea    -0x18(%esi),%eax
 8acd4d9:	89 83 84 00 00 00    	mov    %eax,0x84(%ebx)
 8acd4df:	8b 40 04             	mov    0x4(%eax),%eax
 8acd4e2:	83 e8 0c             	sub    $0xc,%eax
 8acd4e5:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acd4ea:	75 7f                	jne    8acd56b <_ZN6DNFLex14PopInputStreamEb+0xdb>
 8acd4ec:	8b 46 e8             	mov    -0x18(%esi),%eax
 8acd4ef:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8acd4f4:	83 e8 0c             	sub    $0xc,%eax
 8acd4f7:	39 c2                	cmp    %eax,%edx
 8acd4f9:	75 4a                	jne    8acd545 <_ZN6DNFLex14PopInputStreamEb+0xb5>
 8acd4fb:	8b 93 84 00 00 00    	mov    0x84(%ebx),%edx
 8acd501:	b8 01 00 00 00       	mov    $0x1,%eax
 8acd506:	3b 93 80 00 00 00    	cmp    0x80(%ebx),%edx
 8acd50c:	c7 43 38 01 00 00 00 	movl   $0x1,0x38(%ebx)
 8acd513:	74 03                	je     8acd518 <_ZN6DNFLex14PopInputStreamEb+0x88>
 8acd515:	8b 42 fc             	mov    -0x4(%edx),%eax
 8acd518:	89 43 0c             	mov    %eax,0xc(%ebx)
 8acd51b:	83 c4 20             	add    $0x20,%esp
 8acd51e:	b8 01 00 00 00       	mov    $0x1,%eax
 8acd523:	5b                   	pop    %ebx
 8acd524:	5e                   	pop    %esi
 8acd525:	5d                   	pop    %ebp
 8acd526:	c3                   	ret
 8acd527:	90                   	nop
 8acd528:	29 c2                	sub    %eax,%edx
 8acd52a:	c1 fa 03             	sar    $0x3,%edx
 8acd52d:	69 d2 ab aa aa aa    	imul   $0xaaaaaaab,%edx,%edx
 8acd533:	83 fa 01             	cmp    $0x1,%edx
 8acd536:	0f 87 7b ff ff ff    	ja     8acd4b7 <_ZN6DNFLex14PopInputStreamEb+0x27>
 8acd53c:	83 c4 20             	add    $0x20,%esp
 8acd53f:	31 c0                	xor    %eax,%eax
 8acd541:	5b                   	pop    %ebx
 8acd542:	5e                   	pop    %esi
 8acd543:	5d                   	pop    %ebp
 8acd544:	c3                   	ret
 8acd545:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acd54a:	85 d2                	test   %edx,%edx
 8acd54c:	74 4a                	je     8acd598 <_ZN6DNFLex14PopInputStreamEb+0x108>
 8acd54e:	83 ca ff             	or     $0xffffffff,%edx
 8acd551:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acd556:	85 d2                	test   %edx,%edx
 8acd558:	7f a1                	jg     8acd4fb <_ZN6DNFLex14PopInputStreamEb+0x6b>
 8acd55a:	8d 55 f6             	lea    -0xa(%ebp),%edx
 8acd55d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd561:	89 04 24             	mov    %eax,(%esp)
 8acd564:	e8 b7 93 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd569:	eb 90                	jmp    8acd4fb <_ZN6DNFLex14PopInputStreamEb+0x6b>
 8acd56b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acd570:	85 d2                	test   %edx,%edx
 8acd572:	74 2f                	je     8acd5a3 <_ZN6DNFLex14PopInputStreamEb+0x113>
 8acd574:	83 ca ff             	or     $0xffffffff,%edx
 8acd577:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acd57c:	85 d2                	test   %edx,%edx
 8acd57e:	0f 8f 68 ff ff ff    	jg     8acd4ec <_ZN6DNFLex14PopInputStreamEb+0x5c>
 8acd584:	8d 55 f7             	lea    -0x9(%ebp),%edx
 8acd587:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd58b:	89 04 24             	mov    %eax,(%esp)
 8acd58e:	e8 8d 93 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd593:	e9 54 ff ff ff       	jmp    8acd4ec <_ZN6DNFLex14PopInputStreamEb+0x5c>
 8acd598:	8b 50 08             	mov    0x8(%eax),%edx
 8acd59b:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acd59e:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd5a1:	eb b3                	jmp    8acd556 <_ZN6DNFLex14PopInputStreamEb+0xc6>
 8acd5a3:	8b 50 08             	mov    0x8(%eax),%edx
 8acd5a6:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acd5a9:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd5ac:	eb ce                	jmp    8acd57c <_ZN6DNFLex14PopInputStreamEb+0xec>
 8acd5ae:	66 90                	xchg   %ax,%ax

```

```c
// DNFLex::PopInputStream @ 0x8acd490

/* WARNING: Removing unreachable block (ram,0x08acd5a3) */
/* WARNING: Removing unreachable block (ram,0x08acd598) */
/* DWARF original prototype: bool PopInputStream(DNFLex * this, bool pop_all) */

bool __thiscall DNFLex::PopInputStream(DNFLex *this,bool pop_all)

{
  int *piVar1;
  int iVar2;
  stream_t *psVar3;
  stream_t *psVar4;
  char *pcVar5;
  allocator *paVar6;
  uint uVar7;
  
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  psVar4 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if ((psVar3 != psVar4) &&
     ((pop_all || (1 < (uint)(((int)psVar3 - (int)psVar4 >> 3) * -0x55555555))))) {
    __dnf_script__FlexLexer::yypop_buffer_state(&this->super___dnf_script__FlexLexer);
    stream_data_t::destroy
              (&(this->stream_stack_).
                super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
                _M_finish[-1].s);
    psVar3 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish;
    (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
    _M_impl._M_finish = psVar3 + -1;
    pcVar5 = psVar3[-1].filename._M_dataplus._M_p;
    paVar6 = (allocator *)(pcVar5 + -0xc);
    if (paVar6 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(pcVar5 + -4);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std::string::_Rep::_M_destroy(paVar6);
      }
    }
    pcVar5 = psVar3[-1].dir._M_dataplus._M_p;
    paVar6 = (allocator *)(pcVar5 + -0xc);
    if (paVar6 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(pcVar5 + -4);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std::string::_Rep::_M_destroy(paVar6);
      }
    }
    psVar4 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_finish;
    uVar7 = 1;
    psVar3 = (this->stream_stack_).
             super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
             _M_start;
    (this->super___dnf_script__FlexLexer).yy_start = 1;
    if (psVar4 != psVar3) {
      uVar7 = psVar4[-1].line_number;
    }
    (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno = uVar7;
    return true;
  }
  return false;
}

```

---

## PushInputStream

```asm
// === 08acd7d0 DNFLex::PushInputStream  [0x08acd7d0-0x8acda4f] ===
 8acd7d0:	55                   	push   %ebp
 8acd7d1:	31 c0                	xor    %eax,%eax
 8acd7d3:	89 e5                	mov    %esp,%ebp
 8acd7d5:	ba a4 c9 d0 08       	mov    $0x8d0c9a4,%edx
 8acd7da:	57                   	push   %edi
 8acd7db:	56                   	push   %esi
 8acd7dc:	53                   	push   %ebx
 8acd7dd:	83 ec 4c             	sub    $0x4c,%esp
 8acd7e0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8acd7e3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd7e6:	8b 7d 10             	mov    0x10(%ebp),%edi
 8acd7e9:	8b 75 14             	mov    0x14(%ebp),%esi
 8acd7ec:	85 c9                	test   %ecx,%ecx
 8acd7ee:	c7 45 cc fc cc 48 09 	movl   $0x948ccfc,-0x34(%ebp)
 8acd7f5:	c7 45 d0 fc cc 48 09 	movl   $0x948ccfc,-0x30(%ebp)
 8acd7fc:	74 0e                	je     8acd80c <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x3c>
 8acd7fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acd801:	89 04 24             	mov    %eax,(%esp)
 8acd804:	e8 a7 0b 5b ff       	call   807e3b0 <strlen@plt>
 8acd809:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acd80c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acd810:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8acd813:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd817:	89 04 24             	mov    %eax,(%esp)
 8acd81a:	e8 81 ad c3 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 8acd81f:	31 c0                	xor    %eax,%eax
 8acd821:	85 ff                	test   %edi,%edi
 8acd823:	ba a4 c9 d0 08       	mov    $0x8d0c9a4,%edx
 8acd828:	74 0a                	je     8acd834 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x64>
 8acd82a:	89 3c 24             	mov    %edi,(%esp)
 8acd82d:	e8 7e 0b 5b ff       	call   807e3b0 <strlen@plt>
 8acd832:	89 fa                	mov    %edi,%edx
 8acd834:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acd838:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8acd83b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd83f:	89 04 24             	mov    %eax,(%esp)
 8acd842:	e8 59 ad c3 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 8acd847:	85 f6                	test   %esi,%esi
 8acd849:	0f 84 e9 00 00 00    	je     8acd938 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x168>
 8acd84f:	8b 06                	mov    (%esi),%eax
 8acd851:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acd854:	8b 46 04             	mov    0x4(%esi),%eax
 8acd857:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8acd85a:	8b 46 08             	mov    0x8(%esi),%eax
 8acd85d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8acd860:	8b b3 84 00 00 00    	mov    0x84(%ebx),%esi
 8acd866:	3b b3 80 00 00 00    	cmp    0x80(%ebx),%esi
 8acd86c:	89 f0                	mov    %esi,%eax
 8acd86e:	74 08                	je     8acd878 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0xa8>
 8acd870:	8b 43 0c             	mov    0xc(%ebx),%eax
 8acd873:	89 46 fc             	mov    %eax,-0x4(%esi)
 8acd876:	89 f0                	mov    %esi,%eax
 8acd878:	39 b3 88 00 00 00    	cmp    %esi,0x88(%ebx)
 8acd87e:	0f 84 0c 01 00 00    	je     8acd990 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x1c0>
 8acd884:	85 f6                	test   %esi,%esi
 8acd886:	74 3f                	je     8acd8c7 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0xf7>
 8acd888:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8acd88b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acd88f:	89 34 24             	mov    %esi,(%esp)
 8acd892:	e8 19 a1 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acd897:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8acd89a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acd89e:	8d 46 04             	lea    0x4(%esi),%eax
 8acd8a1:	89 04 24             	mov    %eax,(%esp)
 8acd8a4:	e8 07 a1 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acd8a9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acd8ac:	89 46 08             	mov    %eax,0x8(%esi)
 8acd8af:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8acd8b2:	89 46 0c             	mov    %eax,0xc(%esi)
 8acd8b5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8acd8b8:	89 46 10             	mov    %eax,0x10(%esi)
 8acd8bb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8acd8be:	89 46 14             	mov    %eax,0x14(%esi)
 8acd8c1:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acd8c7:	83 c0 18             	add    $0x18,%eax
 8acd8ca:	89 83 84 00 00 00    	mov    %eax,0x84(%ebx)
 8acd8d0:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8acd8d3:	8b 03                	mov    (%ebx),%eax
 8acd8d5:	89 1c 24             	mov    %ebx,(%esp)
 8acd8d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8acd8dc:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8acd8df:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd8e3:	ff 50 0c             	call   *0xc(%eax)
 8acd8e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acd8ea:	89 1c 24             	mov    %ebx,(%esp)
 8acd8ed:	e8 2e 4b 00 00       	call   8ad2420 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state>
 8acd8f2:	c7 43 38 01 00 00 00 	movl   $0x1,0x38(%ebx)
 8acd8f9:	b8 01 00 00 00       	mov    $0x1,%eax
 8acd8fe:	c7 43 0c 01 00 00 00 	movl   $0x1,0xc(%ebx)
 8acd905:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8acd908:	83 ea 0c             	sub    $0xc,%edx
 8acd90b:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 8acd911:	0f 85 97 00 00 00    	jne    8acd9ae <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x1de>
 8acd917:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acd91a:	b9 f0 cc 48 09       	mov    $0x948ccf0,%ecx
 8acd91f:	83 ea 0c             	sub    $0xc,%edx
 8acd922:	39 d1                	cmp    %edx,%ecx
 8acd924:	0f 85 b8 00 00 00    	jne    8acd9e2 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x212>
 8acd92a:	83 c4 4c             	add    $0x4c,%esp
 8acd92d:	5b                   	pop    %ebx
 8acd92e:	5e                   	pop    %esi
 8acd92f:	5f                   	pop    %edi
 8acd930:	5d                   	pop    %ebp
 8acd931:	c3                   	ret
 8acd932:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acd938:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8acd93b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8acd93f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acd942:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8acd946:	89 1c 24             	mov    %ebx,(%esp)
 8acd949:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acd94d:	e8 ce f8 ff ff       	call   8acd220 <_ZN6DNFLex10LoadStreamEPKcS1_PNS_13stream_data_tE>
 8acd952:	84 c0                	test   %al,%al
 8acd954:	0f 85 06 ff ff ff    	jne    8acd860 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x90>
 8acd95a:	8d b3 8c 00 00 00    	lea    0x8c(%ebx),%esi
 8acd960:	c7 44 24 08 ec eb e2 	movl   $0x8e2ebec,0x8(%esp)
 8acd967:	08 
 8acd968:	c7 44 24 04 24 eb e2 	movl   $0x8e2eb24,0x4(%esp)
 8acd96f:	08 
 8acd970:	89 34 24             	mov    %esi,(%esp)
 8acd973:	e8 c8 0a 5b ff       	call   807e440 <sprintf@plt>
 8acd978:	8b 03                	mov    (%ebx),%eax
 8acd97a:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acd97e:	89 1c 24             	mov    %ebx,(%esp)
 8acd981:	ff 50 2c             	call   *0x2c(%eax)
 8acd984:	31 c0                	xor    %eax,%eax
 8acd986:	e9 7a ff ff ff       	jmp    8acd905 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x135>
 8acd98b:	90                   	nop
 8acd98c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acd990:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8acd993:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acd997:	8d 83 80 00 00 00    	lea    0x80(%ebx),%eax
 8acd99d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acd9a1:	89 04 24             	mov    %eax,(%esp)
 8acd9a4:	e8 17 03 00 00       	call   8acdcc0 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_>
 8acd9a9:	e9 22 ff ff ff       	jmp    8acd8d0 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x100>
 8acd9ae:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8acd9b3:	85 c9                	test   %ecx,%ecx
 8acd9b5:	74 76                	je     8acda2d <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x25d>
 8acd9b7:	83 c9 ff             	or     $0xffffffff,%ecx
 8acd9ba:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 8acd9bf:	85 c9                	test   %ecx,%ecx
 8acd9c1:	0f 8f 50 ff ff ff    	jg     8acd917 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x147>
 8acd9c7:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 8acd9ca:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8acd9cd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acd9d1:	89 14 24             	mov    %edx,(%esp)
 8acd9d4:	e8 47 8f c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd9d9:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8acd9dd:	e9 35 ff ff ff       	jmp    8acd917 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x147>
 8acd9e2:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8acd9e7:	85 c9                	test   %ecx,%ecx
 8acd9e9:	74 59                	je     8acda44 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x274>
 8acd9eb:	83 c9 ff             	or     $0xffffffff,%ecx
 8acd9ee:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 8acd9f3:	85 c9                	test   %ecx,%ecx
 8acd9f5:	0f 8f 2f ff ff ff    	jg     8acd92a <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x15a>
 8acd9fb:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 8acd9fe:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8acda01:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acda05:	89 14 24             	mov    %edx,(%esp)
 8acda08:	e8 13 8f c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acda0d:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8acda11:	e9 14 ff ff ff       	jmp    8acd92a <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x15a>
 8acda16:	89 c3                	mov    %eax,%ebx
 8acda18:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8acda1b:	89 04 24             	mov    %eax,(%esp)
 8acda1e:	e8 0d 02 00 00       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8acda23:	89 1c 24             	mov    %ebx,(%esp)
 8acda26:	e8 25 5d 01 00       	call   8ae3750 <_Unwind_Resume>
 8acda2b:	eb e9                	jmp    8acda16 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x246>
 8acda2d:	8b 4a 08             	mov    0x8(%edx),%ecx
 8acda30:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8acda33:	89 5a 08             	mov    %ebx,0x8(%edx)
 8acda36:	eb 87                	jmp    8acd9bf <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x1ef>
 8acda38:	89 c3                	mov    %eax,%ebx
 8acda3a:	89 34 24             	mov    %esi,(%esp)
 8acda3d:	e8 9e a1 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acda42:	eb d4                	jmp    8acda18 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x248>
 8acda44:	8b 4a 08             	mov    0x8(%edx),%ecx
 8acda47:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8acda4a:	89 5a 08             	mov    %ebx,0x8(%edx)
 8acda4d:	eb a4                	jmp    8acd9f3 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE+0x223>
 8acda4f:	90                   	nop

```

```c
// DNFLex::PushInputStream @ 0x8acd7d0

/* WARNING: Removing unreachable block (ram,0x08acda2d) */
/* WARNING: Removing unreachable block (ram,0x08acda44) */
/* DWARF original prototype: bool PushInputStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::PushInputStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  int *piVar1;
  int iVar2;
  __normal_iterator<DNFLex::stream_t*,_std::vector<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>_>
  __position;
  bool bVar3;
  uint uVar4;
  stream_t *psVar5;
  YY_BUFFER_STATE new_buffer;
  char *pcVar6;
  undefined1 local_38 [4];
  tstring local_34;
  stream_data_t local_30;
  uint local_24;
  
                    /* Unresolved local var: stream_t stream@[???] */
  uVar4 = 0;
  local_38 = (undefined1  [4])&DAT_0948ccfc;
  local_34._M_dataplus._M_p = (_Alloc_hider)&DAT_0948ccfc;
  pcVar6 = "";
  if (dir != (TCHAR *)0x0) {
    uVar4 = strlen(dir);
    pcVar6 = dir;
  }
                    /* try { // try from 08acd81a to 08acd846 has its CatchHandler @ 08acda16 */
  std::string::assign((string *)local_38,pcVar6,uVar4);
  uVar4 = 0;
  pcVar6 = "";
  if (filename != (TCHAR *)0x0) {
    uVar4 = strlen(filename);
    pcVar6 = filename;
  }
  std::string::assign((string *)&local_34,pcVar6,uVar4);
  if (s == (stream_data_t *)0x0) {
    bVar3 = LoadStream(this,dir,filename,&local_30);
    if (!bVar3) {
      sprintf(this->ERR_BUF,"%s - DNFLex::ReadStream failed.","PushInputStream");
      (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                (this,this->ERR_BUF);
      bVar3 = false;
      goto LAB_08acd905;
    }
  }
  else {
    local_30.stream = s->stream;
    local_30.size = s->size;
    local_30.buffer = s->buffer;
  }
  __position._M_current =
       (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>
       ._M_impl._M_finish;
  if (__position._M_current !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    __position._M_current[-1].line_number =
         (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
  }
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_end_of_storage == __position._M_current) {
    std::vector<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>::
    _M_insert_aux<const_DNFLex::stream_t&>(&this->stream_stack_,__position,(stream_t *)local_38);
  }
  else {
    psVar5 = (stream_t *)0x0;
    if (__position._M_current != (stream_t *)0x0) {
                    /* try { // try from 08acd892 to 08acd896 has its CatchHandler @ 08acda2b */
      std::string::string((string *)__position._M_current,(string *)local_38);
                    /* try { // try from 08acd8a4 to 08acd8a8 has its CatchHandler @ 08acda38 */
      std::string::string((string *)&(__position._M_current)->filename,(string *)&local_34);
      ((__position._M_current)->s).stream = local_30.stream;
      ((__position._M_current)->s).size = local_30.size;
      ((__position._M_current)->s).buffer = local_30.buffer;
      (__position._M_current)->line_number = local_24;
      psVar5 = (this->stream_stack_).
               super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
               _M_finish;
    }
    (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
    _M_impl._M_finish = psVar5 + 1;
  }
                    /* try { // try from 08acd8e3 to 08acd9a8 has its CatchHandler @ 08acda16 */
  new_buffer = (YY_BUFFER_STATE)
               (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[3])
                         (this,local_30.stream,local_30.size);
  __dnf_script__FlexLexer::yypush_buffer_state(&this->super___dnf_script__FlexLexer,new_buffer);
  (this->super___dnf_script__FlexLexer).yy_start = 1;
  bVar3 = true;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno = 1;
LAB_08acd905:
  if ((allocator *)((int)local_34._M_dataplus._M_p + -0xc) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)((int)local_34._M_dataplus._M_p + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_34._M_dataplus._M_p + -0xc));
    }
  }
  if ((allocator *)((int)local_38 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)((int)local_38 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_38 + -0xc));
    }
  }
  return bVar3;
}

```

---

## SetHandler

```asm
// === 08acd160 DNFLex::SetHandler  [0x08acd160-0x8acd18f] ===
 8acd160:	55                   	push   %ebp
 8acd161:	89 e5                	mov    %esp,%ebp
 8acd163:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd166:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acd169:	89 90 94 40 00 00    	mov    %edx,0x4094(%eax)
 8acd16f:	8b 55 10             	mov    0x10(%ebp),%edx
 8acd172:	89 90 98 40 00 00    	mov    %edx,0x4098(%eax)
 8acd178:	8b 55 14             	mov    0x14(%ebp),%edx
 8acd17b:	89 90 9c 40 00 00    	mov    %edx,0x409c(%eax)
 8acd181:	8b 55 18             	mov    0x18(%ebp),%edx
 8acd184:	89 90 a0 40 00 00    	mov    %edx,0x40a0(%eax)
 8acd18a:	5d                   	pop    %ebp
 8acd18b:	c3                   	ret
 8acd18c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::SetHandler @ 0x8acd160

/* DWARF original prototype: void SetHandler(DNFLex * this, TIsDbcsLeadChar IsDbcsLeadCharFunc,
   TLexerOutput LexerOutputFunc, TLexerError LexerErrorFunc, TLoadStream LoadStreamFunc) */

void __thiscall
DNFLex::SetHandler(DNFLex *this,TIsDbcsLeadChar IsDbcsLeadCharFunc,TLexerOutput LexerOutputFunc,
                  TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  this->IsDbcsLeadChar_ = IsDbcsLeadCharFunc;
  this->LexerOutput_ = LexerOutputFunc;
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}

```

---

## SwitchInputStream

```asm
// === 08acda50 DNFLex::SwitchInputStream  [0x08acda50-0x8acda9f] ===
 8acda50:	55                   	push   %ebp
 8acda51:	89 e5                	mov    %esp,%ebp
 8acda53:	83 ec 38             	sub    $0x38,%esp
 8acda56:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acda59:	8b 45 14             	mov    0x14(%ebp),%eax
 8acda5c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acda5f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acda62:	8b 75 0c             	mov    0xc(%ebp),%esi
 8acda65:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acda68:	8b 7d 10             	mov    0x10(%ebp),%edi
 8acda6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8acda6e:	89 1c 24             	mov    %ebx,(%esp)
 8acda71:	e8 3a fb ff ff       	call   8acd5b0 <_ZN6DNFLex16CloseInputStreamEv>
 8acda76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8acda79:	89 7d 10             	mov    %edi,0x10(%ebp)
 8acda7c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acda7f:	89 75 0c             	mov    %esi,0xc(%ebp)
 8acda82:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acda85:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8acda88:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acda8b:	89 45 14             	mov    %eax,0x14(%ebp)
 8acda8e:	89 ec                	mov    %ebp,%esp
 8acda90:	5d                   	pop    %ebp
 8acda91:	e9 3a fd ff ff       	jmp    8acd7d0 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE>
 8acda96:	8d 76 00             	lea    0x0(%esi),%esi
 8acda99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::SwitchInputStream @ 0x8acda50

/* DWARF original prototype: bool SwitchInputStream(DNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall DNFLex::SwitchInputStream(DNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  CloseInputStream(this);
  bVar1 = PushInputStream(this,dir,filename,s);
  return bVar1;
}

```

---

## getLineNumber

```asm
// === 08acd2b0 DNFLex::getLineNumber  [0x08acd2b0-0x8acd2bf] ===
 8acd2b0:	55                   	push   %ebp
 8acd2b1:	89 e5                	mov    %esp,%ebp
 8acd2b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd2b6:	5d                   	pop    %ebp
 8acd2b7:	8b 40 0c             	mov    0xc(%eax),%eax
 8acd2ba:	c3                   	ret
 8acd2bb:	90                   	nop
 8acd2bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::getLineNumber @ 0x8acd2b0

/* DWARF original prototype: int getLineNumber(DNFLex * this) */

int __thiscall DNFLex::getLineNumber(DNFLex *this)

{
  return (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
}

```

---

## getStreamName

```asm
// === 08acd310 DNFLex::getStreamName  [0x08acd310-0x8acd39f] ===
 8acd310:	55                   	push   %ebp
 8acd311:	89 e5                	mov    %esp,%ebp
 8acd313:	83 ec 28             	sub    $0x28,%esp
 8acd316:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acd319:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8acd31c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd31f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8acd322:	8b b0 84 00 00 00    	mov    0x84(%eax),%esi
 8acd328:	3b b0 80 00 00 00    	cmp    0x80(%eax),%esi
 8acd32e:	74 30                	je     8acd360 <_ZN6DNFLex13getStreamNameEv+0x50>
 8acd330:	8d 46 e8             	lea    -0x18(%esi),%eax
 8acd333:	83 ee 14             	sub    $0x14,%esi
 8acd336:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acd33a:	89 1c 24             	mov    %ebx,(%esp)
 8acd33d:	e8 6e a6 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acd342:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acd346:	89 1c 24             	mov    %ebx,(%esp)
 8acd349:	e8 f2 ad c3 ff       	call   8708140 <_ZNSs6appendERKSs>
 8acd34e:	89 d8                	mov    %ebx,%eax
 8acd350:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8acd353:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8acd356:	89 ec                	mov    %ebp,%esp
 8acd358:	5d                   	pop    %ebp
 8acd359:	c2 04 00             	ret    $0x4
 8acd35c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acd360:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8acd363:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acd367:	c7 44 24 04 1f eb e2 	movl   $0x8e2eb1f,0x4(%esp)
 8acd36e:	08 
 8acd36f:	89 1c 24             	mov    %ebx,(%esp)
 8acd372:	e8 b9 a2 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acd377:	89 d8                	mov    %ebx,%eax
 8acd379:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8acd37c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8acd37f:	89 ec                	mov    %ebp,%esp
 8acd381:	5d                   	pop    %ebp
 8acd382:	c2 04 00             	ret    $0x4
 8acd385:	89 c6                	mov    %eax,%esi
 8acd387:	89 34 24             	mov    %esi,(%esp)
 8acd38a:	e8 c1 63 01 00       	call   8ae3750 <_Unwind_Resume>
 8acd38f:	89 c6                	mov    %eax,%esi
 8acd391:	89 1c 24             	mov    %ebx,(%esp)
 8acd394:	e8 47 a8 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acd399:	eb ec                	jmp    8acd387 <_ZN6DNFLex13getStreamNameEv+0x77>
 8acd39b:	90                   	nop
 8acd39c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLex::getStreamName @ 0x8acd310

/* DWARF original prototype: tstring getStreamName(DNFLex * this) */

tstring __thiscall DNFLex::getStreamName(DNFLex *this)

{
  int iVar1;
  int in_stack_00000008;
  allocator local_d;
  
  iVar1 = *(int *)(in_stack_00000008 + 0x84);
  if (iVar1 != *(int *)(in_stack_00000008 + 0x80)) {
                    /* Unresolved local var:
                       basic_string<char,_std::char_traits<char>,_std::allocator<char>_> __str@[???]
                        */
                    /* try { // try from 08acd33d to 08acd341 has its CatchHandler @ 08acd385 */
    std::string::string((string *)this,(string *)(iVar1 + -0x18));
                    /* try { // try from 08acd349 to 08acd34d has its CatchHandler @ 08acd38f */
    std::string::append((string *)this,(string *)(iVar1 + -0x14));
    return (tstring)(_Alloc_hider)this;
  }
                    /* try { // try from 08acd372 to 08acd376 has its CatchHandler @ 08acd385 */
  std::string::string((string *)this,"NONE",&local_d);
  return (tstring)(_Alloc_hider)this;
}

```

---

## get_next_token

```asm
// === 08acdaa0 DNFLex::get_next_token  [0x08acdaa0-0x8ace28f] ===
 8acdaa0:	55                   	push   %ebp
 8acdaa1:	89 e5                	mov    %esp,%ebp
 8acdaa3:	83 ec 48             	sub    $0x48,%esp
 8acdaa6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acdaa9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acdaac:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acdaaf:	31 f6                	xor    %esi,%esi
 8acdab1:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acdab4:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acdaba:	3b 83 80 00 00 00    	cmp    0x80(%ebx),%eax
 8acdac0:	74 1c                	je     8acdade <_ZN6DNFLex14get_next_tokenEv+0x3e>
 8acdac2:	8b 03                	mov    (%ebx),%eax
 8acdac4:	89 1c 24             	mov    %ebx,(%esp)
 8acdac7:	ff 50 18             	call   *0x18(%eax)
 8acdaca:	80 bb 91 40 00 00 00 	cmpb   $0x0,0x4091(%ebx)
 8acdad1:	89 c6                	mov    %eax,%esi
 8acdad3:	74 09                	je     8acdade <_ZN6DNFLex14get_next_tokenEv+0x3e>
 8acdad5:	83 fe 0b             	cmp    $0xb,%esi
 8acdad8:	74 46                	je     8acdb20 <_ZN6DNFLex14get_next_tokenEv+0x80>
 8acdada:	85 c0                	test   %eax,%eax
 8acdadc:	74 12                	je     8acdaf0 <_ZN6DNFLex14get_next_tokenEv+0x50>
 8acdade:	89 f0                	mov    %esi,%eax
 8acdae0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acdae3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acdae6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acdae9:	89 ec                	mov    %ebp,%esp
 8acdaeb:	5d                   	pop    %ebp
 8acdaec:	c3                   	ret
 8acdaed:	8d 76 00             	lea    0x0(%esi),%esi
 8acdaf0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acdaf7:	00 
 8acdaf8:	89 1c 24             	mov    %ebx,(%esp)
 8acdafb:	e8 90 f9 ff ff       	call   8acd490 <_ZN6DNFLex14PopInputStreamEb>
 8acdb00:	84 c0                	test   %al,%al
 8acdb02:	74 da                	je     8acdade <_ZN6DNFLex14get_next_tokenEv+0x3e>
 8acdb04:	8b 03                	mov    (%ebx),%eax
 8acdb06:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8acdb09:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acdb0c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acdb0f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acdb12:	8b 40 18             	mov    0x18(%eax),%eax
 8acdb15:	89 ec                	mov    %ebp,%esp
 8acdb17:	5d                   	pop    %ebp
 8acdb18:	ff e0                	jmp    *%eax
 8acdb1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acdb20:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acdb26:	3b 83 80 00 00 00    	cmp    0x80(%ebx),%eax
 8acdb2c:	8d 70 e8             	lea    -0x18(%eax),%esi
 8acdb2f:	0f 94 c0             	sete   %al
 8acdb32:	0f b6 c0             	movzbl %al,%eax
 8acdb35:	83 e8 01             	sub    $0x1,%eax
 8acdb38:	21 c6                	and    %eax,%esi
 8acdb3a:	8b 03                	mov    (%ebx),%eax
 8acdb3c:	89 1c 24             	mov    %ebx,(%esp)
 8acdb3f:	ff 50 18             	call   *0x18(%eax)
 8acdb42:	83 f8 07             	cmp    $0x7,%eax
 8acdb45:	74 69                	je     8acdbb0 <_ZN6DNFLex14get_next_tokenEv+0x110>
 8acdb47:	8b 53 0c             	mov    0xc(%ebx),%edx
 8acdb4a:	8d 46 04             	lea    0x4(%esi),%eax
 8acdb4d:	89 04 24             	mov    %eax,(%esp)
 8acdb50:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8acdb53:	e8 7b 12 01 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8acdb58:	89 34 24             	mov    %esi,(%esp)
 8acdb5b:	8d b3 8c 00 00 00    	lea    0x8c(%ebx),%esi
 8acdb61:	89 c7                	mov    %eax,%edi
 8acdb63:	e8 6b 12 01 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8acdb68:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8acdb6b:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8acdb6f:	c7 44 24 08 fc eb e2 	movl   $0x8e2ebfc,0x8(%esp)
 8acdb76:	08 
 8acdb77:	c7 44 24 04 44 eb e2 	movl   $0x8e2eb44,0x4(%esp)
 8acdb7e:	08 
 8acdb7f:	89 54 24 14          	mov    %edx,0x14(%esp)
 8acdb83:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8acdb87:	89 34 24             	mov    %esi,(%esp)
 8acdb8a:	e8 b1 08 5b ff       	call   807e440 <sprintf@plt>
 8acdb8f:	8b 03                	mov    (%ebx),%eax
 8acdb91:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acdb95:	be 01 00 00 00       	mov    $0x1,%esi
 8acdb9a:	89 1c 24             	mov    %ebx,(%esp)
 8acdb9d:	ff 50 2c             	call   *0x2c(%eax)
 8acdba0:	89 f0                	mov    %esi,%eax
 8acdba2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acdba5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acdba8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acdbab:	89 ec                	mov    %ebp,%esp
 8acdbad:	5d                   	pop    %ebp
 8acdbae:	c3                   	ret
 8acdbaf:	90                   	nop
 8acdbb0:	8d 83 8c 20 00 00    	lea    0x208c(%ebx),%eax
 8acdbb6:	89 04 24             	mov    %eax,(%esp)
 8acdbb9:	e8 b7 0f 01 00       	call   8adeb75 <_Z9toTStringPKc>
 8acdbbe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8acdbc5:	00 
 8acdbc6:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 8acdbcd:	08 
 8acdbce:	89 1c 24             	mov    %ebx,(%esp)
 8acdbd1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acdbd5:	e8 f6 fb ff ff       	call   8acd7d0 <_ZN6DNFLex15PushInputStreamEPKcS1_PNS_13stream_data_tE>
 8acdbda:	84 c0                	test   %al,%al
 8acdbdc:	0f 85 22 ff ff ff    	jne    8acdb04 <_ZN6DNFLex14get_next_tokenEv+0x64>
 8acdbe2:	8b 53 0c             	mov    0xc(%ebx),%edx
 8acdbe5:	8d 46 04             	lea    0x4(%esi),%eax
 8acdbe8:	89 04 24             	mov    %eax,(%esp)
 8acdbeb:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8acdbee:	e8 e0 11 01 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8acdbf3:	89 34 24             	mov    %esi,(%esp)
 8acdbf6:	8d b3 8c 00 00 00    	lea    0x8c(%ebx),%esi
 8acdbfc:	89 c7                	mov    %eax,%edi
 8acdbfe:	e8 d0 11 01 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8acdc03:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8acdc06:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8acdc0a:	c7 44 24 08 fc eb e2 	movl   $0x8e2ebfc,0x8(%esp)
 8acdc11:	08 
 8acdc12:	c7 44 24 04 6c eb e2 	movl   $0x8e2eb6c,0x4(%esp)
 8acdc19:	08 
 8acdc1a:	89 54 24 14          	mov    %edx,0x14(%esp)
 8acdc1e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8acdc22:	e9 60 ff ff ff       	jmp    8acdb87 <_ZN6DNFLex14get_next_tokenEv+0xe7>
 8acdc27:	90                   	nop
 8acdc28:	90                   	nop
 8acdc29:	90                   	nop
 8acdc2a:	90                   	nop
 8acdc2b:	90                   	nop
 8acdc2c:	90                   	nop
 8acdc2d:	90                   	nop
 8acdc2e:	90                   	nop
 8acdc2f:	90                   	nop

08acdc30 <_ZN6DNFLex8stream_tD1Ev>:
 8acdc30:	55                   	push   %ebp
 8acdc31:	89 e5                	mov    %esp,%ebp
 8acdc33:	53                   	push   %ebx
 8acdc34:	83 ec 24             	sub    $0x24,%esp
 8acdc37:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acdc3a:	8b 43 04             	mov    0x4(%ebx),%eax
 8acdc3d:	83 e8 0c             	sub    $0xc,%eax
 8acdc40:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acdc45:	75 14                	jne    8acdc5b <_ZN6DNFLex8stream_tD1Ev+0x2b>
 8acdc47:	8b 03                	mov    (%ebx),%eax
 8acdc49:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8acdc4e:	83 e8 0c             	sub    $0xc,%eax
 8acdc51:	39 c2                	cmp    %eax,%edx
 8acdc53:	75 2c                	jne    8acdc81 <_ZN6DNFLex8stream_tD1Ev+0x51>
 8acdc55:	83 c4 24             	add    $0x24,%esp
 8acdc58:	5b                   	pop    %ebx
 8acdc59:	5d                   	pop    %ebp
 8acdc5a:	c3                   	ret
 8acdc5b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acdc60:	85 d2                	test   %edx,%edx
 8acdc62:	74 43                	je     8acdca7 <_ZN6DNFLex8stream_tD1Ev+0x77>
 8acdc64:	83 ca ff             	or     $0xffffffff,%edx
 8acdc67:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acdc6c:	85 d2                	test   %edx,%edx
 8acdc6e:	7f d7                	jg     8acdc47 <_ZN6DNFLex8stream_tD1Ev+0x17>
 8acdc70:	8d 55 f7             	lea    -0x9(%ebp),%edx
 8acdc73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acdc77:	89 04 24             	mov    %eax,(%esp)
 8acdc7a:	e8 a1 8c c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acdc7f:	eb c6                	jmp    8acdc47 <_ZN6DNFLex8stream_tD1Ev+0x17>
 8acdc81:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acdc86:	85 d2                	test   %edx,%edx
 8acdc88:	74 28                	je     8acdcb2 <_ZN6DNFLex8stream_tD1Ev+0x82>
 8acdc8a:	83 ca ff             	or     $0xffffffff,%edx
 8acdc8d:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acdc92:	85 d2                	test   %edx,%edx
 8acdc94:	7f bf                	jg     8acdc55 <_ZN6DNFLex8stream_tD1Ev+0x25>
 8acdc96:	8d 55 f6             	lea    -0xa(%ebp),%edx
 8acdc99:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acdc9d:	89 04 24             	mov    %eax,(%esp)
 8acdca0:	e8 7b 8c c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acdca5:	eb ae                	jmp    8acdc55 <_ZN6DNFLex8stream_tD1Ev+0x25>
 8acdca7:	8b 50 08             	mov    0x8(%eax),%edx
 8acdcaa:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acdcad:	89 48 08             	mov    %ecx,0x8(%eax)
 8acdcb0:	eb ba                	jmp    8acdc6c <_ZN6DNFLex8stream_tD1Ev+0x3c>
 8acdcb2:	8b 50 08             	mov    0x8(%eax),%edx
 8acdcb5:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acdcb8:	89 48 08             	mov    %ecx,0x8(%eax)
 8acdcbb:	eb d5                	jmp    8acdc92 <_ZN6DNFLex8stream_tD1Ev+0x62>
 8acdcbd:	90                   	nop
 8acdcbe:	90                   	nop
 8acdcbf:	90                   	nop

08acdcc0 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_>:
 8acdcc0:	55                   	push   %ebp
 8acdcc1:	89 e5                	mov    %esp,%ebp
 8acdcc3:	57                   	push   %edi
 8acdcc4:	56                   	push   %esi
 8acdcc5:	53                   	push   %ebx
 8acdcc6:	83 ec 5c             	sub    $0x5c,%esp
 8acdcc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8acdccc:	8b 58 04             	mov    0x4(%eax),%ebx
 8acdccf:	3b 58 08             	cmp    0x8(%eax),%ebx
 8acdcd2:	0f 84 70 01 00 00    	je     8acde48 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x188>
 8acdcd8:	85 db                	test   %ebx,%ebx
 8acdcda:	0f 84 60 01 00 00    	je     8acde40 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x180>
 8acdce0:	8d 73 e8             	lea    -0x18(%ebx),%esi
 8acdce3:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acdce7:	89 1c 24             	mov    %ebx,(%esp)
 8acdcea:	e8 c1 9c c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdcef:	8d 46 04             	lea    0x4(%esi),%eax
 8acdcf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acdcf6:	8d 43 04             	lea    0x4(%ebx),%eax
 8acdcf9:	89 04 24             	mov    %eax,(%esp)
 8acdcfc:	e8 af 9c c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdd01:	8b 46 08             	mov    0x8(%esi),%eax
 8acdd04:	89 43 08             	mov    %eax,0x8(%ebx)
 8acdd07:	8b 46 0c             	mov    0xc(%esi),%eax
 8acdd0a:	89 43 0c             	mov    %eax,0xc(%ebx)
 8acdd0d:	8b 46 10             	mov    0x10(%esi),%eax
 8acdd10:	89 43 10             	mov    %eax,0x10(%ebx)
 8acdd13:	8b 46 14             	mov    0x14(%esi),%eax
 8acdd16:	89 43 14             	mov    %eax,0x14(%ebx)
 8acdd19:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acdd1c:	8b 51 04             	mov    0x4(%ecx),%edx
 8acdd1f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acdd22:	8d 42 18             	lea    0x18(%edx),%eax
 8acdd25:	8d 5a e8             	lea    -0x18(%edx),%ebx
 8acdd28:	89 de                	mov    %ebx,%esi
 8acdd2a:	89 41 04             	mov    %eax,0x4(%ecx)
 8acdd2d:	2b 75 0c             	sub    0xc(%ebp),%esi
 8acdd30:	c1 fe 03             	sar    $0x3,%esi
 8acdd33:	69 f6 ab aa aa aa    	imul   $0xaaaaaaab,%esi,%esi
 8acdd39:	85 f6                	test   %esi,%esi
 8acdd3b:	7e 54                	jle    8acdd91 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0xd1>
 8acdd3d:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8acdd40:	eb 09                	jmp    8acdd4b <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x8b>
 8acdd42:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acdd48:	83 eb 18             	sub    $0x18,%ebx
 8acdd4b:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8acdd4e:	83 ee 01             	sub    $0x1,%esi
 8acdd51:	89 5d c4             	mov    %ebx,-0x3c(%ebp)
 8acdd54:	89 1c 24             	mov    %ebx,(%esp)
 8acdd57:	83 ef 30             	sub    $0x30,%edi
 8acdd5a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acdd5e:	83 c7 04             	add    $0x4,%edi
 8acdd61:	e8 ca 9e c3 ff       	call   8707c30 <_ZNSs6assignERKSs>
 8acdd66:	8d 43 04             	lea    0x4(%ebx),%eax
 8acdd69:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acdd6d:	89 04 24             	mov    %eax,(%esp)
 8acdd70:	e8 bb 9e c3 ff       	call   8707c30 <_ZNSs6assignERKSs>
 8acdd75:	8b 43 f0             	mov    -0x10(%ebx),%eax
 8acdd78:	85 f6                	test   %esi,%esi
 8acdd7a:	89 43 08             	mov    %eax,0x8(%ebx)
 8acdd7d:	8b 43 f4             	mov    -0xc(%ebx),%eax
 8acdd80:	89 43 0c             	mov    %eax,0xc(%ebx)
 8acdd83:	8b 43 f8             	mov    -0x8(%ebx),%eax
 8acdd86:	89 43 10             	mov    %eax,0x10(%ebx)
 8acdd89:	8b 43 fc             	mov    -0x4(%ebx),%eax
 8acdd8c:	89 43 14             	mov    %eax,0x14(%ebx)
 8acdd8f:	7f b7                	jg     8acdd48 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x88>
 8acdd91:	8b 45 10             	mov    0x10(%ebp),%eax
 8acdd94:	8d 5d cc             	lea    -0x34(%ebp),%ebx
 8acdd97:	89 1c 24             	mov    %ebx,(%esp)
 8acdd9a:	8d 75 d0             	lea    -0x30(%ebp),%esi
 8acdd9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acdda1:	e8 0a 9c c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdda6:	8b 45 10             	mov    0x10(%ebp),%eax
 8acdda9:	89 34 24             	mov    %esi,(%esp)
 8acddac:	83 c0 04             	add    $0x4,%eax
 8acddaf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acddb3:	e8 f8 9b c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acddb8:	8b 55 10             	mov    0x10(%ebp),%edx
 8acddbb:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8acddbe:	8b 42 08             	mov    0x8(%edx),%eax
 8acddc1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acddc4:	8b 42 0c             	mov    0xc(%edx),%eax
 8acddc7:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8acddca:	8b 42 10             	mov    0x10(%edx),%eax
 8acddcd:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8acddd0:	8b 42 14             	mov    0x14(%edx),%eax
 8acddd3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8acddd7:	89 0c 24             	mov    %ecx,(%esp)
 8acddda:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8acdddd:	e8 4e 9e c3 ff       	call   8707c30 <_ZNSs6assignERKSs>
 8acdde2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acdde5:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acdde9:	83 c0 04             	add    $0x4,%eax
 8acddec:	89 04 24             	mov    %eax,(%esp)
 8acddef:	e8 3c 9e c3 ff       	call   8707c30 <_ZNSs6assignERKSs>
 8acddf4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acddf7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acddfa:	89 42 08             	mov    %eax,0x8(%edx)
 8acddfd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8acde00:	89 42 0c             	mov    %eax,0xc(%edx)
 8acde03:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8acde06:	89 42 10             	mov    %eax,0x10(%edx)
 8acde09:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8acde0c:	89 42 14             	mov    %eax,0x14(%edx)
 8acde0f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8acde12:	83 e8 0c             	sub    $0xc,%eax
 8acde15:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acde1a:	0f 85 dd 03 00 00    	jne    8ace1fd <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x53d>
 8acde20:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8acde23:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8acde28:	83 e8 0c             	sub    $0xc,%eax
 8acde2b:	39 c2                	cmp    %eax,%edx
 8acde2d:	0f 85 9d 03 00 00    	jne    8ace1d0 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x510>
 8acde33:	83 c4 5c             	add    $0x5c,%esp
 8acde36:	5b                   	pop    %ebx
 8acde37:	5e                   	pop    %esi
 8acde38:	5f                   	pop    %edi
 8acde39:	5d                   	pop    %ebp
 8acde3a:	c3                   	ret
 8acde3b:	90                   	nop
 8acde3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acde40:	31 d2                	xor    %edx,%edx
 8acde42:	e9 d8 fe ff ff       	jmp    8acdd1f <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x5f>
 8acde47:	90                   	nop
 8acde48:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acde4b:	8b 01                	mov    (%ecx),%eax
 8acde4d:	29 c3                	sub    %eax,%ebx
 8acde4f:	c1 fb 03             	sar    $0x3,%ebx
 8acde52:	69 db ab aa aa aa    	imul   $0xaaaaaaab,%ebx,%ebx
 8acde58:	85 db                	test   %ebx,%ebx
 8acde5a:	0f 84 bf 01 00 00    	je     8ace01f <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x35f>
 8acde60:	8d 14 1b             	lea    (%ebx,%ebx,1),%edx
 8acde63:	39 d3                	cmp    %edx,%ebx
 8acde65:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8acde68:	0f 86 32 03 00 00    	jbe    8ace1a0 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x4e0>
 8acde6e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acde71:	c7 45 b4 aa aa aa 0a 	movl   $0xaaaaaaa,-0x4c(%ebp)
 8acde78:	29 c2                	sub    %eax,%edx
 8acde7a:	89 d0                	mov    %edx,%eax
 8acde7c:	c1 f8 03             	sar    $0x3,%eax
 8acde7f:	69 d8 ab aa aa aa    	imul   $0xaaaaaaab,%eax,%ebx
 8acde85:	b8 f0 ff ff ff       	mov    $0xfffffff0,%eax
 8acde8a:	89 04 24             	mov    %eax,(%esp)
 8acde8d:	e8 be 65 c5 ff       	call   8724450 <_Znwj>
 8acde92:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8acde95:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8acde98:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8acde9b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8acde9e:	8d 04 5b             	lea    (%ebx,%ebx,2),%eax
 8acdea1:	8d 04 c2             	lea    (%edx,%eax,8),%eax
 8acdea4:	85 c0                	test   %eax,%eax
 8acdea6:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8acdea9:	74 45                	je     8acdef0 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x230>
 8acdeab:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8acdeae:	89 04 24             	mov    %eax,(%esp)
 8acdeb1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acdeb5:	e8 f6 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdeba:	8b 45 10             	mov    0x10(%ebp),%eax
 8acdebd:	83 c0 04             	add    $0x4,%eax
 8acdec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acdec4:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8acdec7:	83 c0 04             	add    $0x4,%eax
 8acdeca:	89 04 24             	mov    %eax,(%esp)
 8acdecd:	e8 de 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acded2:	8b 55 10             	mov    0x10(%ebp),%edx
 8acded5:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8acded8:	8b 42 08             	mov    0x8(%edx),%eax
 8acdedb:	89 41 08             	mov    %eax,0x8(%ecx)
 8acdede:	8b 42 0c             	mov    0xc(%edx),%eax
 8acdee1:	89 41 0c             	mov    %eax,0xc(%ecx)
 8acdee4:	8b 42 10             	mov    0x10(%edx),%eax
 8acdee7:	89 41 10             	mov    %eax,0x10(%ecx)
 8acdeea:	8b 42 14             	mov    0x14(%edx),%eax
 8acdeed:	89 41 14             	mov    %eax,0x14(%ecx)
 8acdef0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acdef3:	8b 75 b8             	mov    -0x48(%ebp),%esi
 8acdef6:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 8acdefd:	8b 19                	mov    (%ecx),%ebx
 8acdeff:	3b 5d 0c             	cmp    0xc(%ebp),%ebx
 8acdf02:	89 f7                	mov    %esi,%edi
 8acdf04:	74 49                	je     8acdf4f <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x28f>
 8acdf06:	66 90                	xchg   %ax,%ax
 8acdf08:	85 ff                	test   %edi,%edi
 8acdf0a:	74 36                	je     8acdf42 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x282>
 8acdf0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8acdf10:	89 3c 24             	mov    %edi,(%esp)
 8acdf13:	e8 98 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdf18:	8d 43 04             	lea    0x4(%ebx),%eax
 8acdf1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acdf1f:	8d 47 04             	lea    0x4(%edi),%eax
 8acdf22:	89 04 24             	mov    %eax,(%esp)
 8acdf25:	e8 86 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdf2a:	8b 43 08             	mov    0x8(%ebx),%eax
 8acdf2d:	89 47 08             	mov    %eax,0x8(%edi)
 8acdf30:	8b 43 0c             	mov    0xc(%ebx),%eax
 8acdf33:	89 47 0c             	mov    %eax,0xc(%edi)
 8acdf36:	8b 43 10             	mov    0x10(%ebx),%eax
 8acdf39:	89 47 10             	mov    %eax,0x10(%edi)
 8acdf3c:	8b 43 14             	mov    0x14(%ebx),%eax
 8acdf3f:	89 47 14             	mov    %eax,0x14(%edi)
 8acdf42:	83 c6 18             	add    $0x18,%esi
 8acdf45:	83 c3 18             	add    $0x18,%ebx
 8acdf48:	3b 5d 0c             	cmp    0xc(%ebp),%ebx
 8acdf4b:	89 f7                	mov    %esi,%edi
 8acdf4d:	75 b9                	jne    8acdf08 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x248>
 8acdf4f:	8b 55 08             	mov    0x8(%ebp),%edx
 8acdf52:	8d 47 18             	lea    0x18(%edi),%eax
 8acdf55:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8acdf58:	89 c6                	mov    %eax,%esi
 8acdf5a:	8b 52 04             	mov    0x4(%edx),%edx
 8acdf5d:	39 da                	cmp    %ebx,%edx
 8acdf5f:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8acdf62:	74 51                	je     8acdfb5 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x2f5>
 8acdf64:	83 c7 30             	add    $0x30,%edi
 8acdf67:	90                   	nop
 8acdf68:	85 f6                	test   %esi,%esi
 8acdf6a:	74 36                	je     8acdfa2 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x2e2>
 8acdf6c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8acdf70:	89 34 24             	mov    %esi,(%esp)
 8acdf73:	e8 38 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdf78:	8d 43 04             	lea    0x4(%ebx),%eax
 8acdf7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acdf7f:	8d 46 04             	lea    0x4(%esi),%eax
 8acdf82:	89 04 24             	mov    %eax,(%esp)
 8acdf85:	e8 26 9a c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acdf8a:	8b 43 08             	mov    0x8(%ebx),%eax
 8acdf8d:	89 46 08             	mov    %eax,0x8(%esi)
 8acdf90:	8b 43 0c             	mov    0xc(%ebx),%eax
 8acdf93:	89 46 0c             	mov    %eax,0xc(%esi)
 8acdf96:	8b 43 10             	mov    0x10(%ebx),%eax
 8acdf99:	89 46 10             	mov    %eax,0x10(%esi)
 8acdf9c:	8b 43 14             	mov    0x14(%ebx),%eax
 8acdf9f:	89 46 14             	mov    %eax,0x14(%esi)
 8acdfa2:	83 c3 18             	add    $0x18,%ebx
 8acdfa5:	89 fe                	mov    %edi,%esi
 8acdfa7:	39 5d c0             	cmp    %ebx,-0x40(%ebp)
 8acdfaa:	8d 7f 18             	lea    0x18(%edi),%edi
 8acdfad:	75 b9                	jne    8acdf68 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x2a8>
 8acdfaf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acdfb2:	8b 59 04             	mov    0x4(%ecx),%ebx
 8acdfb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8acdfb8:	8d 4d e5             	lea    -0x1b(%ebp),%ecx
 8acdfbb:	8b 38                	mov    (%eax),%edi
 8acdfbd:	39 df                	cmp    %ebx,%edi
 8acdfbf:	74 30                	je     8acdff1 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x331>
 8acdfc1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acdfc8:	8b 47 04             	mov    0x4(%edi),%eax
 8acdfcb:	83 e8 0c             	sub    $0xc,%eax
 8acdfce:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acdfd3:	75 6a                	jne    8ace03f <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x37f>
 8acdfd5:	8b 07                	mov    (%edi),%eax
 8acdfd7:	83 e8 0c             	sub    $0xc,%eax
 8acdfda:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acdfdf:	0f 85 93 00 00 00    	jne    8ace078 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x3b8>
 8acdfe5:	83 c7 18             	add    $0x18,%edi
 8acdfe8:	39 df                	cmp    %ebx,%edi
 8acdfea:	75 dc                	jne    8acdfc8 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x308>
 8acdfec:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acdfef:	8b 19                	mov    (%ecx),%ebx
 8acdff1:	85 db                	test   %ebx,%ebx
 8acdff3:	74 08                	je     8acdffd <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x33d>
 8acdff5:	89 1c 24             	mov    %ebx,(%esp)
 8acdff8:	e8 f3 64 c5 ff       	call   87244f0 <_ZdlPv>
 8acdffd:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8ace000:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace003:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8ace006:	89 10                	mov    %edx,(%eax)
 8ace008:	89 70 04             	mov    %esi,0x4(%eax)
 8ace00b:	8d 04 49             	lea    (%ecx,%ecx,2),%eax
 8ace00e:	8d 04 c2             	lea    (%edx,%eax,8),%eax
 8ace011:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace014:	89 42 08             	mov    %eax,0x8(%edx)
 8ace017:	83 c4 5c             	add    $0x5c,%esp
 8ace01a:	5b                   	pop    %ebx
 8ace01b:	5e                   	pop    %esi
 8ace01c:	5f                   	pop    %edi
 8ace01d:	5d                   	pop    %ebp
 8ace01e:	c3                   	ret
 8ace01f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8ace022:	c7 45 b4 01 00 00 00 	movl   $0x1,-0x4c(%ebp)
 8ace029:	29 c1                	sub    %eax,%ecx
 8ace02b:	89 c8                	mov    %ecx,%eax
 8ace02d:	c1 f8 03             	sar    $0x3,%eax
 8ace030:	69 d8 ab aa aa aa    	imul   $0xaaaaaaab,%eax,%ebx
 8ace036:	6b 45 b4 18          	imul   $0x18,-0x4c(%ebp),%eax
 8ace03a:	e9 4b fe ff ff       	jmp    8acde8a <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x1ca>
 8ace03f:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ace044:	85 d2                	test   %edx,%edx
 8ace046:	0f 84 26 02 00 00    	je     8ace272 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x5b2>
 8ace04c:	83 ca ff             	or     $0xffffffff,%edx
 8ace04f:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ace054:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8ace057:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8ace05b:	0f 8f 74 ff ff ff    	jg     8acdfd5 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x315>
 8ace061:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ace065:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 8ace068:	89 04 24             	mov    %eax,(%esp)
 8ace06b:	e8 b0 88 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ace070:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8ace073:	e9 5d ff ff ff       	jmp    8acdfd5 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x315>
 8ace078:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ace07d:	85 d2                	test   %edx,%edx
 8ace07f:	74 5b                	je     8ace0dc <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x41c>
 8ace081:	83 ca ff             	or     $0xffffffff,%edx
 8ace084:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ace089:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8ace08c:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8ace090:	0f 8f 4f ff ff ff    	jg     8acdfe5 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x325>
 8ace096:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8ace099:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 8ace09c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ace0a0:	89 04 24             	mov    %eax,(%esp)
 8ace0a3:	e8 78 88 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ace0a8:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 8ace0ab:	e9 35 ff ff ff       	jmp    8acdfe5 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x325>
 8ace0b0:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace0b3:	89 34 24             	mov    %esi,(%esp)
 8ace0b6:	e8 25 9b c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ace0bb:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace0be:	89 04 24             	mov    %eax,(%esp)
 8ace0c1:	e8 1a 7c c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ace0c6:	8b 5d b0             	mov    -0x50(%ebp),%ebx
 8ace0c9:	39 de                	cmp    %ebx,%esi
 8ace0cb:	74 1d                	je     8ace0ea <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x42a>
 8ace0cd:	89 1c 24             	mov    %ebx,(%esp)
 8ace0d0:	83 c3 18             	add    $0x18,%ebx
 8ace0d3:	e8 58 fb ff ff       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8ace0d8:	eb ef                	jmp    8ace0c9 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x409>
 8ace0da:	eb e2                	jmp    8ace0be <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x3fe>
 8ace0dc:	8b 50 08             	mov    0x8(%eax),%edx
 8ace0df:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8ace0e2:	83 ea 01             	sub    $0x1,%edx
 8ace0e5:	89 50 08             	mov    %edx,0x8(%eax)
 8ace0e8:	eb a2                	jmp    8ace08c <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x3cc>
 8ace0ea:	e8 f1 6a c5 ff       	call   8724be0 <__cxa_rethrow>
 8ace0ef:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace0f2:	89 3c 24             	mov    %edi,(%esp)
 8ace0f5:	e8 e6 9a c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ace0fa:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace0fd:	89 04 24             	mov    %eax,(%esp)
 8ace100:	e8 db 7b c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ace105:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 8ace108:	39 df                	cmp    %ebx,%edi
 8ace10a:	74 52                	je     8ace15e <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x49e>
 8ace10c:	89 1c 24             	mov    %ebx,(%esp)
 8ace10f:	83 c3 18             	add    $0x18,%ebx
 8ace112:	e8 19 fb ff ff       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8ace117:	eb ef                	jmp    8ace108 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x448>
 8ace119:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ace11c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace11f:	89 14 24             	mov    %edx,(%esp)
 8ace122:	e8 b9 9a c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ace127:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace12a:	89 04 24             	mov    %eax,(%esp)
 8ace12d:	e8 ae 7b c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ace132:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 8ace135:	83 7d b0 00          	cmpl   $0x0,-0x50(%ebp)
 8ace139:	74 2a                	je     8ace165 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x4a5>
 8ace13b:	39 5d b0             	cmp    %ebx,-0x50(%ebp)
 8ace13e:	74 30                	je     8ace170 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x4b0>
 8ace140:	89 1c 24             	mov    %ebx,(%esp)
 8ace143:	83 c3 18             	add    $0x18,%ebx
 8ace146:	e8 e5 fa ff ff       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8ace14b:	eb ee                	jmp    8ace13b <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x47b>
 8ace14d:	eb ae                	jmp    8ace0fd <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x43d>
 8ace14f:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace152:	e8 d9 7a c5 ff       	call   8725c30 <__cxa_end_catch>
 8ace157:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace15a:	eb ce                	jmp    8ace12a <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x46a>
 8ace15c:	eb cc                	jmp    8ace12a <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x46a>
 8ace15e:	66 90                	xchg   %ax,%ax
 8ace160:	e8 7b 6a c5 ff       	call   8724be0 <__cxa_rethrow>
 8ace165:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8ace168:	89 0c 24             	mov    %ecx,(%esp)
 8ace16b:	e8 c0 fa ff ff       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8ace170:	83 7d b8 00          	cmpl   $0x0,-0x48(%ebp)
 8ace174:	74 0b                	je     8ace181 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x4c1>
 8ace176:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ace179:	89 04 24             	mov    %eax,(%esp)
 8ace17c:	e8 6f 63 c5 ff       	call   87244f0 <_ZdlPv>
 8ace181:	e8 5a 6a c5 ff       	call   8724be0 <__cxa_rethrow>
 8ace186:	eb c7                	jmp    8ace14f <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x48f>
 8ace188:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace18b:	90                   	nop
 8ace18c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace190:	e8 9b 7a c5 ff       	call   8725c30 <__cxa_end_catch>
 8ace195:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace198:	89 04 24             	mov    %eax,(%esp)
 8ace19b:	e8 b0 55 01 00       	call   8ae3750 <_Unwind_Resume>
 8ace1a0:	81 fa aa aa aa 0a    	cmp    $0xaaaaaaa,%edx
 8ace1a6:	0f 87 c2 fc ff ff    	ja     8acde6e <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x1ae>
 8ace1ac:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8ace1af:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8ace1b6:	29 c1                	sub    %eax,%ecx
 8ace1b8:	89 c8                	mov    %ecx,%eax
 8ace1ba:	c1 f8 03             	sar    $0x3,%eax
 8ace1bd:	69 d8 ab aa aa aa    	imul   $0xaaaaaaab,%eax,%ebx
 8ace1c3:	85 d2                	test   %edx,%edx
 8ace1c5:	0f 84 ca fc ff ff    	je     8acde95 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x1d5>
 8ace1cb:	e9 66 fe ff ff       	jmp    8ace036 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x376>
 8ace1d0:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ace1d5:	85 d2                	test   %edx,%edx
 8ace1d7:	74 67                	je     8ace240 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x580>
 8ace1d9:	83 ca ff             	or     $0xffffffff,%edx
 8ace1dc:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ace1e1:	85 d2                	test   %edx,%edx
 8ace1e3:	0f 8f 4a fc ff ff    	jg     8acde33 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x173>
 8ace1e9:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 8ace1ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ace1f0:	89 04 24             	mov    %eax,(%esp)
 8ace1f3:	e8 28 87 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ace1f8:	e9 36 fc ff ff       	jmp    8acde33 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x173>
 8ace1fd:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ace202:	85 d2                	test   %edx,%edx
 8ace204:	74 45                	je     8ace24b <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x58b>
 8ace206:	83 ca ff             	or     $0xffffffff,%edx
 8ace209:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ace20e:	85 d2                	test   %edx,%edx
 8ace210:	0f 8f 0a fc ff ff    	jg     8acde20 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x160>
 8ace216:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8ace219:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ace21d:	89 04 24             	mov    %eax,(%esp)
 8ace220:	e8 fb 86 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ace225:	e9 f6 fb ff ff       	jmp    8acde20 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x160>
 8ace22a:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace22d:	89 1c 24             	mov    %ebx,(%esp)
 8ace230:	e8 fb f9 ff ff       	call   8acdc30 <_ZN6DNFLex8stream_tD1Ev>
 8ace235:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace238:	89 04 24             	mov    %eax,(%esp)
 8ace23b:	e8 10 55 01 00       	call   8ae3750 <_Unwind_Resume>
 8ace240:	8b 50 08             	mov    0x8(%eax),%edx
 8ace243:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ace246:	89 48 08             	mov    %ecx,0x8(%eax)
 8ace249:	eb 96                	jmp    8ace1e1 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x521>
 8ace24b:	8b 50 08             	mov    0x8(%eax),%edx
 8ace24e:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ace251:	89 48 08             	mov    %ecx,0x8(%eax)
 8ace254:	eb b8                	jmp    8ace20e <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x54e>
 8ace256:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ace259:	89 1c 24             	mov    %ebx,(%esp)
 8ace25c:	e8 7f 99 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ace261:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ace264:	89 04 24             	mov    %eax,(%esp)
 8ace267:	e8 e4 54 01 00       	call   8ae3750 <_Unwind_Resume>
 8ace26c:	eb e8                	jmp    8ace256 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x596>
 8ace26e:	66 90                	xchg   %ax,%ax
 8ace270:	eb f2                	jmp    8ace264 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x5a4>
 8ace272:	8b 50 08             	mov    0x8(%eax),%edx
 8ace275:	89 55 c4             	mov    %edx,-0x3c(%ebp)
 8ace278:	83 ea 01             	sub    $0x1,%edx
 8ace27b:	89 50 08             	mov    %edx,0x8(%eax)
 8ace27e:	e9 d4 fd ff ff       	jmp    8ace057 <_ZNSt6vectorIN6DNFLex8stream_tESaIS1_EE13_M_insert_auxIIRKS1_EEEvN9__gnu_cxx17__normal_iteratorIPS1_S3_EEDpOT_+0x397>
 8ace283:	90                   	nop
 8ace284:	90                   	nop
 8ace285:	90                   	nop
 8ace286:	90                   	nop
 8ace287:	90                   	nop
 8ace288:	90                   	nop
 8ace289:	90                   	nop
 8ace28a:	90                   	nop
 8ace28b:	90                   	nop
 8ace28c:	90                   	nop
 8ace28d:	90                   	nop
 8ace28e:	90                   	nop
 8ace28f:	90                   	nop

```

```c
// DNFLex::get_next_token @ 0x8acdaa0

/* DWARF original prototype: DNFLEX_TOKEN get_next_token(DNFLex * this) */

DNFLEX_TOKEN __thiscall DNFLex::get_next_token(DNFLex *this)

{
  stream_t *psVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  TCHAR *filename;
  DNFLEX_TOKEN DVar6;
  string *sSrc;
  char *__format;
  
                    /* Unresolved local var: DNFLEX_TOKEN tok@[???] */
  DVar6 = DNF_TOK_EOF;
  if ((this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_finish !=
      (this->stream_stack_).super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>.
      _M_impl._M_start) {
    DVar6 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])(this);
    if (this->allow_inclusion_ != false) {
      if (DVar6 == DNF_TOK_INCLUDE) {
                    /* Unresolved local var: stream_t * stream@[???] */
        psVar1 = (this->stream_stack_).
                 super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
                 _M_finish;
        sSrc = (string *)
               ((uint)(psVar1 + -1) &
               (psVar1 ==
               (this->stream_stack_).
               super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl.
               _M_start) - 1);
        iVar3 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])(this);
        if (iVar3 == 7) {
          filename = toTString(this->STR_TOK_BUF);
          bVar2 = PushInputStream(this,"",filename,(stream_data_t *)0x0);
          if (bVar2) goto LAB_08acdb04;
          iVar3 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
          pcVar4 = toMbcs(sSrc + 1);
          pcVar5 = toMbcs(sSrc);
          __format = "%s - %s/%s, line %d, PushInputStream failed.";
        }
        else {
          iVar3 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
          pcVar4 = toMbcs(sSrc + 1);
          pcVar5 = toMbcs(sSrc);
          __format = "%s - %s/%s, line %d, invalid inclusion.";
        }
        sprintf(this->ERR_BUF,__format,"get_next_token",pcVar5,pcVar4,iVar3);
        (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                  (this,this->ERR_BUF);
        return DNF_TOK_ERROR;
      }
      if (DVar6 == DNF_TOK_EOF) {
        bVar2 = PopInputStream(this,false);
        if (bVar2) {
LAB_08acdb04:
                    /* WARNING: Could not recover jumptable at 0x08acdb18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          DVar6 = (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[6])();
          return DVar6;
        }
      }
    }
  }
  return DVar6;
}

```

---

## tok_str

```asm
// === 08acd1f0 DNFLex::tok_str  [0x08acd1f0-0x8acd1ff] ===
 8acd1f0:	55                   	push   %ebp
 8acd1f1:	89 e5                	mov    %esp,%ebp
 8acd1f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd1f6:	5d                   	pop    %ebp
 8acd1f7:	05 8c 20 00 00       	add    $0x208c,%eax
 8acd1fc:	c3                   	ret
 8acd1fd:	90                   	nop
 8acd1fe:	66 90                	xchg   %ax,%ax

```

```c
// DNFLex::tok_str @ 0x8acd1f0

/* DWARF original prototype: char * tok_str(DNFLex * this) */

char * __thiscall DNFLex::tok_str(DNFLex *this)

{
  return this->STR_TOK_BUF;
}

```

---

## tok_str_len

```asm
// === 08acd200 DNFLex::tok_str_len  [0x08acd200-0x8acd21f] ===
 8acd200:	55                   	push   %ebp
 8acd201:	89 e5                	mov    %esp,%ebp
 8acd203:	8b 45 08             	mov    0x8(%ebp),%eax
 8acd206:	5d                   	pop    %ebp
 8acd207:	8d 90 8c 20 00 00    	lea    0x208c(%eax),%edx
 8acd20d:	8b 80 8c 40 00 00    	mov    0x408c(%eax),%eax
 8acd213:	29 d0                	sub    %edx,%eax
 8acd215:	c3                   	ret
 8acd216:	8d 76 00             	lea    0x0(%esi),%esi
 8acd219:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::tok_str_len @ 0x8acd200

/* DWARF original prototype: int tok_str_len(DNFLex * this) */

int __thiscall DNFLex::tok_str_len(DNFLex *this)

{
  return (int)this->m_str_tok_pos - (int)this->STR_TOK_BUF;
}

```

---

## yylex

```asm
// === 08ad2860 DNFLex::yylex  [0x08ad2860-0x8ad2edf] ===
 8ad2860:	55                   	push   %ebp
 8ad2861:	89 e5                	mov    %esp,%ebp
 8ad2863:	57                   	push   %edi
 8ad2864:	56                   	push   %esi
 8ad2865:	53                   	push   %ebx
 8ad2866:	83 ec 4c             	sub    $0x4c,%esp
 8ad2869:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad286c:	8b 78 34             	mov    0x34(%eax),%edi
 8ad286f:	85 ff                	test   %edi,%edi
 8ad2871:	0f 84 54 01 00 00    	je     8ad29cb <_ZN6DNFLex5yylexEv+0x16b>
 8ad2877:	8b 58 30             	mov    0x30(%eax),%ebx
 8ad287a:	0f b6 78 28          	movzbl 0x28(%eax),%edi
 8ad287e:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad2881:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad2884:	81 c2 8c 20 00 00    	add    $0x208c,%edx
 8ad288a:	81 c1 8a 40 00 00    	add    $0x408a,%ecx
 8ad2890:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8ad2893:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad2896:	89 f8                	mov    %edi,%eax
 8ad2898:	88 03                	mov    %al,(%ebx)
 8ad289a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad289d:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
 8ad28a0:	8b 42 38             	mov    0x38(%edx),%eax
 8ad28a3:	0f b7 94 00 80 f2 e2 	movzwl 0x8e2f280(%eax,%eax,1),%edx
 8ad28aa:	08 
 8ad28ab:	90                   	nop
 8ad28ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad28b0:	66 83 bc 00 80 f1 e2 	cmpw   $0x0,0x8e2f180(%eax,%eax,1)
 8ad28b7:	08 00 
 8ad28b9:	74 09                	je     8ad28c4 <_ZN6DNFLex5yylexEv+0x64>
 8ad28bb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad28be:	89 41 4c             	mov    %eax,0x4c(%ecx)
 8ad28c1:	89 59 50             	mov    %ebx,0x50(%ecx)
 8ad28c4:	89 f9                	mov    %edi,%ecx
 8ad28c6:	0f bf d2             	movswl %dx,%edx
 8ad28c9:	0f b6 f1             	movzbl %cl,%esi
 8ad28cc:	8d 0c 16             	lea    (%esi,%edx,1),%ecx
 8ad28cf:	0f bf 8c 09 00 f3 e2 	movswl 0x8e2f300(%ecx,%ecx,1),%ecx
 8ad28d6:	08 
 8ad28d7:	39 c8                	cmp    %ecx,%eax
 8ad28d9:	74 24                	je     8ad28ff <_ZN6DNFLex5yylexEv+0x9f>
 8ad28db:	90                   	nop
 8ad28dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad28e0:	0f bf 84 00 00 f2 e2 	movswl 0x8e2f200(%eax,%eax,1),%eax
 8ad28e7:	08 
 8ad28e8:	0f bf 94 00 80 f2 e2 	movswl 0x8e2f280(%eax,%eax,1),%edx
 8ad28ef:	08 
 8ad28f0:	8d 0c 32             	lea    (%edx,%esi,1),%ecx
 8ad28f3:	0f bf 8c 09 00 f3 e2 	movswl 0x8e2f300(%ecx,%ecx,1),%ecx
 8ad28fa:	08 
 8ad28fb:	39 c1                	cmp    %eax,%ecx
 8ad28fd:	75 e1                	jne    8ad28e0 <_ZN6DNFLex5yylexEv+0x80>
 8ad28ff:	81 e7 ff 00 00 00    	and    $0xff,%edi
 8ad2905:	83 c3 01             	add    $0x1,%ebx
 8ad2908:	8d 3c 3a             	lea    (%edx,%edi,1),%edi
 8ad290b:	0f bf 84 3f 00 04 e3 	movswl 0x8e30400(%edi,%edi,1),%eax
 8ad2912:	08 
 8ad2913:	0f b7 94 00 80 f2 e2 	movzwl 0x8e2f280(%eax,%eax,1),%edx
 8ad291a:	08 
 8ad291b:	66 81 fa 79 07       	cmp    $0x779,%dx
 8ad2920:	74 06                	je     8ad2928 <_ZN6DNFLex5yylexEv+0xc8>
 8ad2922:	0f b6 3b             	movzbl (%ebx),%edi
 8ad2925:	eb 89                	jmp    8ad28b0 <_ZN6DNFLex5yylexEv+0x50>
 8ad2927:	90                   	nop
 8ad2928:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad292b:	0f bf 84 00 80 f1 e2 	movswl 0x8e2f180(%eax,%eax,1),%eax
 8ad2932:	08 
 8ad2933:	85 c0                	test   %eax,%eax
 8ad2935:	75 0e                	jne    8ad2945 <_ZN6DNFLex5yylexEv+0xe5>
 8ad2937:	8b 46 4c             	mov    0x4c(%esi),%eax
 8ad293a:	8b 5e 50             	mov    0x50(%esi),%ebx
 8ad293d:	0f bf 84 00 80 f1 e2 	movswl 0x8e2f180(%eax,%eax,1),%eax
 8ad2944:	08 
 8ad2945:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8ad2948:	89 da                	mov    %ebx,%edx
 8ad294a:	29 fa                	sub    %edi,%edx
 8ad294c:	83 f8 15             	cmp    $0x15,%eax
 8ad294f:	89 7e 04             	mov    %edi,0x4(%esi)
 8ad2952:	89 56 08             	mov    %edx,0x8(%esi)
 8ad2955:	0f b6 13             	movzbl (%ebx),%edx
 8ad2958:	88 56 28             	mov    %dl,0x28(%esi)
 8ad295b:	c6 03 00             	movb   $0x0,(%ebx)
 8ad295e:	89 5e 30             	mov    %ebx,0x30(%esi)
 8ad2961:	74 35                	je     8ad2998 <_ZN6DNFLex5yylexEv+0x138>
 8ad2963:	8b 14 85 00 15 e3 08 	mov    0x8e31500(,%eax,4),%edx
 8ad296a:	85 d2                	test   %edx,%edx
 8ad296c:	74 2a                	je     8ad2998 <_ZN6DNFLex5yylexEv+0x138>
 8ad296e:	8b 4e 08             	mov    0x8(%esi),%ecx
 8ad2971:	85 c9                	test   %ecx,%ecx
 8ad2973:	7e 23                	jle    8ad2998 <_ZN6DNFLex5yylexEv+0x138>
 8ad2975:	8b 7e 04             	mov    0x4(%esi),%edi
 8ad2978:	31 d2                	xor    %edx,%edx
 8ad297a:	eb 0b                	jmp    8ad2987 <_ZN6DNFLex5yylexEv+0x127>
 8ad297c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad2980:	83 c2 01             	add    $0x1,%edx
 8ad2983:	39 ca                	cmp    %ecx,%edx
 8ad2985:	7d 11                	jge    8ad2998 <_ZN6DNFLex5yylexEv+0x138>
 8ad2987:	80 3c 17 0a          	cmpb   $0xa,(%edi,%edx,1)
 8ad298b:	75 f3                	jne    8ad2980 <_ZN6DNFLex5yylexEv+0x120>
 8ad298d:	83 c2 01             	add    $0x1,%edx
 8ad2990:	83 46 0c 01          	addl   $0x1,0xc(%esi)
 8ad2994:	39 ca                	cmp    %ecx,%edx
 8ad2996:	7c ef                	jl     8ad2987 <_ZN6DNFLex5yylexEv+0x127>
 8ad2998:	bf 02 00 00 00       	mov    $0x2,%edi
 8ad299d:	83 f8 19             	cmp    $0x19,%eax
 8ad29a0:	76 22                	jbe    8ad29c4 <_ZN6DNFLex5yylexEv+0x164>
 8ad29a2:	8b 06                	mov    (%esi),%eax
 8ad29a4:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad29a7:	c7 44 24 04 a8 ef e2 	movl   $0x8e2efa8,0x4(%esp)
 8ad29ae:	08 
 8ad29af:	89 34 24             	mov    %esi,(%esp)
 8ad29b2:	ff 50 2c             	call   *0x2c(%eax)
 8ad29b5:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad29b8:	8b 5e 30             	mov    0x30(%esi),%ebx
 8ad29bb:	0f b6 7e 28          	movzbl 0x28(%esi),%edi
 8ad29bf:	e9 d2 fe ff ff       	jmp    8ad2896 <_ZN6DNFLex5yylexEv+0x36>
 8ad29c4:	ff 24 85 20 f0 e2 08 	jmp    *0x8e2f020(,%eax,4)
 8ad29cb:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad29ce:	8b 72 38             	mov    0x38(%edx),%esi
 8ad29d1:	c7 42 34 01 00 00 00 	movl   $0x1,0x34(%edx)
 8ad29d8:	85 f6                	test   %esi,%esi
 8ad29da:	75 07                	jne    8ad29e3 <_ZN6DNFLex5yylexEv+0x183>
 8ad29dc:	c7 42 38 01 00 00 00 	movl   $0x1,0x38(%edx)
 8ad29e3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad29e6:	8b 59 20             	mov    0x20(%ecx),%ebx
 8ad29e9:	85 db                	test   %ebx,%ebx
 8ad29eb:	74 5f                	je     8ad2a4c <_ZN6DNFLex5yylexEv+0x1ec>
 8ad29ed:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad29f0:	8b 4b 24             	mov    0x24(%ebx),%ecx
 8ad29f3:	85 c9                	test   %ecx,%ecx
 8ad29f5:	74 5e                	je     8ad2a55 <_ZN6DNFLex5yylexEv+0x1f5>
 8ad29f7:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad29fa:	8b 46 48             	mov    0x48(%esi),%eax
 8ad29fd:	85 c0                	test   %eax,%eax
 8ad29ff:	0f 84 a3 02 00 00    	je     8ad2ca8 <_ZN6DNFLex5yylexEv+0x448>
 8ad2a05:	8b 56 40             	mov    0x40(%esi),%edx
 8ad2a08:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8ad2a0b:	85 c9                	test   %ecx,%ecx
 8ad2a0d:	0f 84 95 02 00 00    	je     8ad2ca8 <_ZN6DNFLex5yylexEv+0x448>
 8ad2a13:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2a16:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad2a19:	8b 49 10             	mov    0x10(%ecx),%ecx
 8ad2a1c:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad2a1f:	89 4b 2c             	mov    %ecx,0x2c(%ebx)
 8ad2a22:	8b 58 08             	mov    0x8(%eax),%ebx
 8ad2a25:	8b 00                	mov    (%eax),%eax
 8ad2a27:	89 5e 30             	mov    %ebx,0x30(%esi)
 8ad2a2a:	89 46 20             	mov    %eax,0x20(%esi)
 8ad2a2d:	89 5e 04             	mov    %ebx,0x4(%esi)
 8ad2a30:	0f b6 3b             	movzbl (%ebx),%edi
 8ad2a33:	89 f8                	mov    %edi,%eax
 8ad2a35:	88 46 28             	mov    %al,0x28(%esi)
 8ad2a38:	e9 41 fe ff ff       	jmp    8ad287e <_ZN6DNFLex5yylexEv+0x1e>
 8ad2a3d:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2a40:	c7 46 38 01 00 00 00 	movl   $0x1,0x38(%esi)
 8ad2a47:	e9 69 ff ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2a4c:	c7 41 20 20 b3 48 09 	movl   $0x948b320,0x20(%ecx)
 8ad2a53:	eb 98                	jmp    8ad29ed <_ZN6DNFLex5yylexEv+0x18d>
 8ad2a55:	c7 43 24 c0 b3 48 09 	movl   $0x948b3c0,0x24(%ebx)
 8ad2a5c:	eb 99                	jmp    8ad29f7 <_ZN6DNFLex5yylexEv+0x197>
 8ad2a5e:	0f b6 46 28          	movzbl 0x28(%esi),%eax
 8ad2a62:	88 03                	mov    %al,(%ebx)
 8ad2a64:	8b 5e 50             	mov    0x50(%esi),%ebx
 8ad2a67:	8b 46 4c             	mov    0x4c(%esi),%eax
 8ad2a6a:	e9 bc fe ff ff       	jmp    8ad292b <_ZN6DNFLex5yylexEv+0xcb>
 8ad2a6f:	b8 02 00 00 00       	mov    $0x2,%eax
 8ad2a74:	83 c4 4c             	add    $0x4c,%esp
 8ad2a77:	5b                   	pop    %ebx
 8ad2a78:	5e                   	pop    %esi
 8ad2a79:	5f                   	pop    %edi
 8ad2a7a:	5d                   	pop    %ebp
 8ad2a7b:	c3                   	ret
 8ad2a7c:	b8 03 00 00 00       	mov    $0x3,%eax
 8ad2a81:	eb f1                	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2a83:	b8 04 00 00 00       	mov    $0x4,%eax
 8ad2a88:	eb ea                	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2a8a:	83 ca ff             	or     $0xffffffff,%edx
 8ad2a8d:	2b 56 04             	sub    0x4(%esi),%edx
 8ad2a90:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8ad2a93:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8ad2a96:	0f b6 46 28          	movzbl 0x28(%esi),%eax
 8ad2a9a:	88 03                	mov    %al,(%ebx)
 8ad2a9c:	8b 46 40             	mov    0x40(%esi),%eax
 8ad2a9f:	8b 4e 48             	mov    0x48(%esi),%ecx
 8ad2aa2:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 8ad2aa5:	83 78 2c 00          	cmpl   $0x0,0x2c(%eax)
 8ad2aa9:	75 18                	jne    8ad2ac3 <_ZN6DNFLex5yylexEv+0x263>
 8ad2aab:	8b 50 10             	mov    0x10(%eax),%edx
 8ad2aae:	89 56 2c             	mov    %edx,0x2c(%esi)
 8ad2ab1:	8b 56 20             	mov    0x20(%esi),%edx
 8ad2ab4:	c7 40 2c 01 00 00 00 	movl   $0x1,0x2c(%eax)
 8ad2abb:	89 10                	mov    %edx,(%eax)
 8ad2abd:	8b 46 40             	mov    0x40(%esi),%eax
 8ad2ac0:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 8ad2ac3:	8b 40 04             	mov    0x4(%eax),%eax
 8ad2ac6:	03 46 2c             	add    0x2c(%esi),%eax
 8ad2ac9:	39 46 30             	cmp    %eax,0x30(%esi)
 8ad2acc:	0f 86 07 03 00 00    	jbe    8ad2dd9 <_ZN6DNFLex5yylexEv+0x579>
 8ad2ad2:	89 34 24             	mov    %esi,(%esp)
 8ad2ad5:	e8 c6 f3 ff ff       	call   8ad1ea0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv>
 8ad2ada:	83 f8 01             	cmp    $0x1,%eax
 8ad2add:	0f 84 73 02 00 00    	je     8ad2d56 <_ZN6DNFLex5yylexEv+0x4f6>
 8ad2ae3:	83 f8 02             	cmp    $0x2,%eax
 8ad2ae6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad2ae9:	0f 84 3f 02 00 00    	je     8ad2d2e <_ZN6DNFLex5yylexEv+0x4ce>
 8ad2aef:	85 c0                	test   %eax,%eax
 8ad2af1:	89 d7                	mov    %edx,%edi
 8ad2af3:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2af6:	0f 85 b9 fe ff ff    	jne    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2afc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2aff:	03 7b 04             	add    0x4(%ebx),%edi
 8ad2b02:	89 7b 30             	mov    %edi,0x30(%ebx)
 8ad2b05:	89 1c 24             	mov    %ebx,(%esp)
 8ad2b08:	e8 73 ef ff ff       	call   8ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>
 8ad2b0d:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad2b10:	8b 7e 04             	mov    0x4(%esi),%edi
 8ad2b13:	8b 5e 30             	mov    0x30(%esi),%ebx
 8ad2b16:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8ad2b19:	0f b6 3b             	movzbl (%ebx),%edi
 8ad2b1c:	e9 82 fd ff ff       	jmp    8ad28a3 <_ZN6DNFLex5yylexEv+0x43>
 8ad2b21:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2b24:	c7 46 38 03 00 00 00 	movl   $0x3,0x38(%esi)
 8ad2b2b:	e9 85 fe ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2b30:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2b33:	c7 46 38 05 00 00 00 	movl   $0x5,0x38(%esi)
 8ad2b3a:	e9 76 fe ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2b3f:	8b 56 08             	mov    0x8(%esi),%edx
 8ad2b42:	8b 06                	mov    (%esi),%eax
 8ad2b44:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2b47:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad2b4b:	8b 56 04             	mov    0x4(%esi),%edx
 8ad2b4e:	89 34 24             	mov    %esi,(%esp)
 8ad2b51:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2b55:	ff 50 28             	call   *0x28(%eax)
 8ad2b58:	e9 58 fe ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2b5d:	b8 08 00 00 00       	mov    $0x8,%eax
 8ad2b62:	e9 0d ff ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b67:	b8 09 00 00 00       	mov    $0x9,%eax
 8ad2b6c:	e9 03 ff ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b71:	b8 0a 00 00 00       	mov    $0xa,%eax
 8ad2b76:	e9 f9 fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b7b:	b8 0b 00 00 00       	mov    $0xb,%eax
 8ad2b80:	e9 ef fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b85:	b8 05 00 00 00       	mov    $0x5,%eax
 8ad2b8a:	e9 e5 fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b8f:	b8 06 00 00 00       	mov    $0x6,%eax
 8ad2b94:	e9 db fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2b99:	89 f3                	mov    %esi,%ebx
 8ad2b9b:	b8 f9 ef e2 08       	mov    $0x8e2eff9,%eax
 8ad2ba0:	81 c3 8c 00 00 00    	add    $0x8c,%ebx
 8ad2ba6:	b9 16 00 00 00       	mov    $0x16,%ecx
 8ad2bab:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2bae:	89 df                	mov    %ebx,%edi
 8ad2bb0:	89 c6                	mov    %eax,%esi
 8ad2bb2:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
 8ad2bb4:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad2bb7:	8b 02                	mov    (%edx),%eax
 8ad2bb9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad2bbd:	89 14 24             	mov    %edx,(%esp)
 8ad2bc0:	ff 50 2c             	call   *0x2c(%eax)
 8ad2bc3:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad2bc8:	e9 a7 fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2bcd:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8ad2bd0:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2bd3:	c6 86 90 40 00 00 00 	movb   $0x0,0x4090(%esi)
 8ad2bda:	c7 46 38 07 00 00 00 	movl   $0x7,0x38(%esi)
 8ad2be1:	89 8e 8c 40 00 00    	mov    %ecx,0x408c(%esi)
 8ad2be7:	e9 c9 fd ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2bec:	80 be 90 40 00 00 00 	cmpb   $0x0,0x4090(%esi)
 8ad2bf3:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2bf6:	0f 84 e7 00 00 00    	je     8ad2ce3 <_ZN6DNFLex5yylexEv+0x483>
 8ad2bfc:	8b 56 04             	mov    0x4(%esi),%edx
 8ad2bff:	8b 86 8c 40 00 00    	mov    0x408c(%esi),%eax
 8ad2c05:	0f b6 12             	movzbl (%edx),%edx
 8ad2c08:	88 10                	mov    %dl,(%eax)
 8ad2c0a:	83 c0 01             	add    $0x1,%eax
 8ad2c0d:	89 86 8c 40 00 00    	mov    %eax,0x408c(%esi)
 8ad2c13:	c6 86 90 40 00 00 00 	movb   $0x0,0x4090(%esi)
 8ad2c1a:	e9 96 fd ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2c1f:	31 c0                	xor    %eax,%eax
 8ad2c21:	e9 4e fe ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2c26:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2c29:	89 34 24             	mov    %esi,(%esp)
 8ad2c2c:	e8 2f a6 ff ff       	call   8acd260 <_ZN6DNFLex8IsStreamEv>
 8ad2c31:	84 c0                	test   %al,%al
 8ad2c33:	0f 84 7c fd ff ff    	je     8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2c39:	89 34 24             	mov    %esi,(%esp)
 8ad2c3c:	e8 3f a6 ff ff       	call   8acd280 <_ZN6DNFLex14GetInputStreamEv>
 8ad2c41:	8b 56 04             	mov    0x4(%esi),%edx
 8ad2c44:	0f b6 12             	movzbl (%edx),%edx
 8ad2c47:	84 d2                	test   %dl,%dl
 8ad2c49:	0f 84 2d 02 00 00    	je     8ad2e7c <_ZN6DNFLex5yylexEv+0x61c>
 8ad2c4f:	0f be d2             	movsbl %dl,%edx
 8ad2c52:	89 f3                	mov    %esi,%ebx
 8ad2c54:	89 54 24 18          	mov    %edx,0x18(%esp)
 8ad2c58:	8b 56 0c             	mov    0xc(%esi),%edx
 8ad2c5b:	81 c3 8c 00 00 00    	add    $0x8c,%ebx
 8ad2c61:	89 54 24 14          	mov    %edx,0x14(%esp)
 8ad2c65:	8b 50 04             	mov    0x4(%eax),%edx
 8ad2c68:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad2c6c:	8b 00                	mov    (%eax),%eax
 8ad2c6e:	c7 44 24 08 54 15 e3 	movl   $0x8e31554,0x8(%esp)
 8ad2c75:	08 
 8ad2c76:	c7 44 24 04 40 ef e2 	movl   $0x8e2ef40,0x4(%esp)
 8ad2c7d:	08 
 8ad2c7e:	89 1c 24             	mov    %ebx,(%esp)
 8ad2c81:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad2c85:	e8 b6 b7 5a ff       	call   807e440 <sprintf@plt>
 8ad2c8a:	8b 06                	mov    (%esi),%eax
 8ad2c8c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad2c90:	89 34 24             	mov    %esi,(%esp)
 8ad2c93:	ff 50 2c             	call   *0x2c(%eax)
 8ad2c96:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad2c9b:	e9 d4 fd ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2ca0:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2ca3:	e9 0d fd ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2ca8:	8b 7d 08             	mov    0x8(%ebp),%edi
 8ad2cab:	89 3c 24             	mov    %edi,(%esp)
 8ad2cae:	e8 9d f6 ff ff       	call   8ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>
 8ad2cb3:	8b 5f 40             	mov    0x40(%edi),%ebx
 8ad2cb6:	8b 07                	mov    (%edi),%eax
 8ad2cb8:	c1 e3 02             	shl    $0x2,%ebx
 8ad2cbb:	03 5f 48             	add    0x48(%edi),%ebx
 8ad2cbe:	c7 44 24 08 00 40 00 	movl   $0x4000,0x8(%esp)
 8ad2cc5:	00 
 8ad2cc6:	8b 57 20             	mov    0x20(%edi),%edx
 8ad2cc9:	89 3c 24             	mov    %edi,(%esp)
 8ad2ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2cd0:	ff 50 0c             	call   *0xc(%eax)
 8ad2cd3:	8b 57 40             	mov    0x40(%edi),%edx
 8ad2cd6:	89 03                	mov    %eax,(%ebx)
 8ad2cd8:	8b 47 48             	mov    0x48(%edi),%eax
 8ad2cdb:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8ad2cde:	e9 30 fd ff ff       	jmp    8ad2a13 <_ZN6DNFLex5yylexEv+0x1b3>
 8ad2ce3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2ce6:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad2ce9:	0f b6 00             	movzbl (%eax),%eax
 8ad2cec:	3c 60                	cmp    $0x60,%al
 8ad2cee:	0f 84 13 01 00 00    	je     8ad2e07 <_ZN6DNFLex5yylexEv+0x5a7>
 8ad2cf4:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad2cf7:	8b 96 8c 40 00 00    	mov    0x408c(%esi),%edx
 8ad2cfd:	39 55 e0             	cmp    %edx,-0x20(%ebp)
 8ad2d00:	0f 86 82 00 00 00    	jbe    8ad2d88 <_ZN6DNFLex5yylexEv+0x528>
 8ad2d06:	88 02                	mov    %al,(%edx)
 8ad2d08:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad2d0b:	83 c2 01             	add    $0x1,%edx
 8ad2d0e:	0f be c0             	movsbl %al,%eax
 8ad2d11:	89 91 8c 40 00 00    	mov    %edx,0x408c(%ecx)
 8ad2d17:	89 04 24             	mov    %eax,(%esp)
 8ad2d1a:	ff 91 94 40 00 00    	call   *0x4094(%ecx)
 8ad2d20:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2d23:	88 83 90 40 00 00    	mov    %al,0x4090(%ebx)
 8ad2d29:	e9 87 fc ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2d2e:	8b 56 40             	mov    0x40(%esi),%edx
 8ad2d31:	8b 46 48             	mov    0x48(%esi),%eax
 8ad2d34:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad2d37:	8b 40 04             	mov    0x4(%eax),%eax
 8ad2d3a:	03 46 2c             	add    0x2c(%esi),%eax
 8ad2d3d:	89 46 30             	mov    %eax,0x30(%esi)
 8ad2d40:	89 34 24             	mov    %esi,(%esp)
 8ad2d43:	e8 38 ed ff ff       	call   8ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>
 8ad2d48:	8b 56 04             	mov    0x4(%esi),%edx
 8ad2d4b:	8b 5e 30             	mov    0x30(%esi),%ebx
 8ad2d4e:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8ad2d51:	e9 d5 fb ff ff       	jmp    8ad292b <_ZN6DNFLex5yylexEv+0xcb>
 8ad2d56:	8b 06                	mov    (%esi),%eax
 8ad2d58:	c7 46 3c 00 00 00 00 	movl   $0x0,0x3c(%esi)
 8ad2d5f:	89 34 24             	mov    %esi,(%esp)
 8ad2d62:	ff 50 20             	call   *0x20(%eax)
 8ad2d65:	85 c0                	test   %eax,%eax
 8ad2d67:	0f 84 b4 00 00 00    	je     8ad2e21 <_ZN6DNFLex5yylexEv+0x5c1>
 8ad2d6d:	8b 56 38             	mov    0x38(%esi),%edx
 8ad2d70:	8b 46 04             	mov    0x4(%esi),%eax
 8ad2d73:	83 ea 01             	sub    $0x1,%edx
 8ad2d76:	89 46 30             	mov    %eax,0x30(%esi)
 8ad2d79:	89 d0                	mov    %edx,%eax
 8ad2d7b:	c1 fa 1f             	sar    $0x1f,%edx
 8ad2d7e:	f7 ff                	idiv   %edi
 8ad2d80:	83 c0 16             	add    $0x16,%eax
 8ad2d83:	e9 15 fc ff ff       	jmp    8ad299d <_ZN6DNFLex5yylexEv+0x13d>
 8ad2d88:	89 34 24             	mov    %esi,(%esp)
 8ad2d8b:	e8 d0 a4 ff ff       	call   8acd260 <_ZN6DNFLex8IsStreamEv>
 8ad2d90:	84 c0                	test   %al,%al
 8ad2d92:	0f 84 aa 00 00 00    	je     8ad2e42 <_ZN6DNFLex5yylexEv+0x5e2>
 8ad2d98:	89 34 24             	mov    %esi,(%esp)
 8ad2d9b:	89 f3                	mov    %esi,%ebx
 8ad2d9d:	e8 de a4 ff ff       	call   8acd280 <_ZN6DNFLex14GetInputStreamEv>
 8ad2da2:	8b 56 0c             	mov    0xc(%esi),%edx
 8ad2da5:	81 c3 8c 00 00 00    	add    $0x8c,%ebx
 8ad2dab:	89 54 24 14          	mov    %edx,0x14(%esp)
 8ad2daf:	8b 50 04             	mov    0x4(%eax),%edx
 8ad2db2:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad2db6:	8b 00                	mov    (%eax),%eax
 8ad2db8:	c7 44 24 08 54 15 e3 	movl   $0x8e31554,0x8(%esp)
 8ad2dbf:	08 
 8ad2dc0:	c7 44 24 04 e8 ee e2 	movl   $0x8e2eee8,0x4(%esp)
 8ad2dc7:	08 
 8ad2dc8:	89 1c 24             	mov    %ebx,(%esp)
 8ad2dcb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad2dcf:	e8 6c b6 5a ff       	call   807e440 <sprintf@plt>
 8ad2dd4:	e9 b1 fe ff ff       	jmp    8ad2c8a <_ZN6DNFLex5yylexEv+0x42a>
 8ad2dd9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad2ddc:	03 56 04             	add    0x4(%esi),%edx
 8ad2ddf:	89 56 30             	mov    %edx,0x30(%esi)
 8ad2de2:	89 34 24             	mov    %esi,(%esp)
 8ad2de5:	e8 96 ec ff ff       	call   8ad1a80 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv>
 8ad2dea:	8b 14 85 a0 f0 e2 08 	mov    0x8e2f0a0(,%eax,4),%edx
 8ad2df1:	85 d2                	test   %edx,%edx
 8ad2df3:	0f 85 c0 00 00 00    	jne    8ad2eb9 <_ZN6DNFLex5yylexEv+0x659>
 8ad2df9:	8b 4e 04             	mov    0x4(%esi),%ecx
 8ad2dfc:	8b 5e 30             	mov    0x30(%esi),%ebx
 8ad2dff:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8ad2e02:	e9 24 fb ff ff       	jmp    8ad292b <_ZN6DNFLex5yylexEv+0xcb>
 8ad2e07:	8b 83 8c 40 00 00    	mov    0x408c(%ebx),%eax
 8ad2e0d:	c6 00 00             	movb   $0x0,(%eax)
 8ad2e10:	b8 07 00 00 00       	mov    $0x7,%eax
 8ad2e15:	c7 43 38 01 00 00 00 	movl   $0x1,0x38(%ebx)
 8ad2e1c:	e9 53 fc ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2e21:	83 7e 3c 00          	cmpl   $0x0,0x3c(%esi)
 8ad2e25:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2e28:	0f 85 87 fb ff ff    	jne    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2e2e:	8b 06                	mov    (%esi),%eax
 8ad2e30:	8b 56 20             	mov    0x20(%esi),%edx
 8ad2e33:	89 34 24             	mov    %esi,(%esp)
 8ad2e36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2e3a:	ff 50 14             	call   *0x14(%eax)
 8ad2e3d:	e9 73 fb ff ff       	jmp    8ad29b5 <_ZN6DNFLex5yylexEv+0x155>
 8ad2e42:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2e45:	c7 44 24 08 54 15 e3 	movl   $0x8e31554,0x8(%esp)
 8ad2e4c:	08 
 8ad2e4d:	c7 44 24 04 20 ef e2 	movl   $0x8e2ef20,0x4(%esp)
 8ad2e54:	08 
 8ad2e55:	81 c3 8c 00 00 00    	add    $0x8c,%ebx
 8ad2e5b:	89 1c 24             	mov    %ebx,(%esp)
 8ad2e5e:	e8 dd b5 5a ff       	call   807e440 <sprintf@plt>
 8ad2e63:	8b 7d 08             	mov    0x8(%ebp),%edi
 8ad2e66:	8b 07                	mov    (%edi),%eax
 8ad2e68:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad2e6c:	89 3c 24             	mov    %edi,(%esp)
 8ad2e6f:	ff 50 2c             	call   *0x2c(%eax)
 8ad2e72:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad2e77:	e9 f8 fb ff ff       	jmp    8ad2a74 <_ZN6DNFLex5yylexEv+0x214>
 8ad2e7c:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad2e7f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2e82:	8b 56 0c             	mov    0xc(%esi),%edx
 8ad2e85:	81 c3 8c 00 00 00    	add    $0x8c,%ebx
 8ad2e8b:	89 54 24 14          	mov    %edx,0x14(%esp)
 8ad2e8f:	8b 50 04             	mov    0x4(%eax),%edx
 8ad2e92:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad2e96:	8b 00                	mov    (%eax),%eax
 8ad2e98:	c7 44 24 08 54 15 e3 	movl   $0x8e31554,0x8(%esp)
 8ad2e9f:	08 
 8ad2ea0:	c7 44 24 04 74 ef e2 	movl   $0x8e2ef74,0x4(%esp)
 8ad2ea7:	08 
 8ad2ea8:	89 1c 24             	mov    %ebx,(%esp)
 8ad2eab:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad2eaf:	e8 8c b5 5a ff       	call   807e440 <sprintf@plt>
 8ad2eb4:	e9 d1 fd ff ff       	jmp    8ad2c8a <_ZN6DNFLex5yylexEv+0x42a>
 8ad2eb9:	8b 5e 30             	mov    0x30(%esi),%ebx
 8ad2ebc:	89 d0                	mov    %edx,%eax
 8ad2ebe:	8b 4e 04             	mov    0x4(%esi),%ecx
 8ad2ec1:	89 75 08             	mov    %esi,0x8(%ebp)
 8ad2ec4:	83 c3 01             	add    $0x1,%ebx
 8ad2ec7:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8ad2eca:	89 5e 30             	mov    %ebx,0x30(%esi)
 8ad2ecd:	e9 47 fc ff ff       	jmp    8ad2b19 <_ZN6DNFLex5yylexEv+0x2b9>
 8ad2ed2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad2ed9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLex::yylex @ 0x8ad2860

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int yylex(DNFLex * this) */

int __thiscall DNFLex::yylex(DNFLex *this)

{
  int *piVar1;
  char cVar2;
  yy_buffer_state *pyVar3;
  istream *piVar4;
  size_t sVar5;
  _func_int_varargs **pp_Var6;
  bool bVar7;
  int iVar8;
  yy_buffer_state **ppyVar9;
  stream_t *psVar10;
  yy_buffer_state *pyVar11;
  flex_int16_t fVar12;
  int iVar13;
  int iVar14;
  size_t sVar15;
  byte *pbVar16;
  char *pcVar17;
  byte bVar18;
  char *pcVar19;
  byte bVar20;
  byte *local_20;
  
  bVar20 = 0;
                    /* Unresolved local var: yy_state_type yy_current_state@[???]
                       Unresolved local var: char * yy_cp@[???]
                       Unresolved local var: char * yy_bp@[???]
                       Unresolved local var: int yy_act@[???] */
  if ((this->super___dnf_script__FlexLexer).yy_init != 0) {
    pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
    bVar18 = (this->super___dnf_script__FlexLexer).yy_hold_char;
    goto LAB_08ad287e;
  }
  (this->super___dnf_script__FlexLexer).yy_init = 1;
  if ((this->super___dnf_script__FlexLexer).yy_start == 0) {
    (this->super___dnf_script__FlexLexer).yy_start = 1;
  }
  if ((this->super___dnf_script__FlexLexer).yyin == (istream *)0x0) {
    (this->super___dnf_script__FlexLexer).yyin = (istream *)std::cin;
  }
  if ((this->super___dnf_script__FlexLexer).yyout == (ostream *)0x0) {
    (this->super___dnf_script__FlexLexer).yyout = (ostream *)std::cout;
  }
  ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
  if (ppyVar9 == (yy_buffer_state **)0x0) {
LAB_08ad2ca8:
    __dnf_script__FlexLexer::yyensure_buffer_stack(&this->super___dnf_script__FlexLexer);
    sVar5 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = (yy_buffer_state *)
              (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[3])
                        (this,(this->super___dnf_script__FlexLexer).yyin,0x4000);
    sVar15 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    ppyVar9[sVar5] = pyVar11;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = ppyVar9[sVar15];
  }
  else {
    sVar15 = (this->super___dnf_script__FlexLexer).yy_buffer_stack_top;
    pyVar11 = ppyVar9[sVar15];
    if (pyVar11 == (yy_buffer_state *)0x0) goto LAB_08ad2ca8;
  }
  pyVar3 = ppyVar9[sVar15];
  (this->super___dnf_script__FlexLexer).yy_n_chars = pyVar11->yy_n_chars;
  pbVar16 = (byte *)pyVar3->yy_buf_pos;
  piVar4 = pyVar3->yy_input_file;
  (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
  (this->super___dnf_script__FlexLexer).yyin = piVar4;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext = (char *)pbVar16;
  bVar18 = *pbVar16;
  (this->super___dnf_script__FlexLexer).yy_hold_char = bVar18;
LAB_08ad287e:
                    /* Unresolved local var: char c@[???] */
LAB_08ad2896:
  *pbVar16 = bVar18;
  iVar13 = (this->super___dnf_script__FlexLexer).yy_start;
  local_20 = pbVar16;
LAB_08ad28a3:
  fVar12 = yy_base[iVar13];
  iVar8 = iVar13;
  while( true ) {
                    /* Unresolved local var: YY_CHAR yy_c@[???] */
    if (yy_accept[iVar8] != 0) {
      (this->super___dnf_script__FlexLexer).yy_last_accepting_state = iVar8;
      (this->super___dnf_script__FlexLexer).yy_last_accepting_cpos = (char *)pbVar16;
    }
    iVar13 = (int)fVar12;
    if (iVar8 != yy_chk[(uint)bVar18 + iVar13]) {
      do {
        iVar8 = (int)yy_def[iVar8];
        iVar13 = (int)yy_base[iVar8];
      } while (yy_chk[iVar13 + (uint)bVar18] != iVar8);
    }
    pbVar16 = pbVar16 + 1;
    iVar8 = (int)yy_nxt[iVar13 + (uint)bVar18];
    fVar12 = yy_base[iVar8];
    if (fVar12 == 0x779) break;
    bVar18 = *pbVar16;
  }
LAB_08ad292b:
  iVar13 = (int)yy_accept[iVar8];
  if (iVar13 == 0) {
    pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_last_accepting_cpos;
    iVar13 = (int)yy_accept[(this->super___dnf_script__FlexLexer).yy_last_accepting_state];
  }
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext = (char *)local_20;
  (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng = (int)pbVar16 - (int)local_20;
  (this->super___dnf_script__FlexLexer).yy_hold_char = *pbVar16;
  *pbVar16 = 0;
  (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
                    /* Unresolved local var: int yyl@[???] */
  if (((iVar13 != 0x15) && (yy_rule_can_match_eol[iVar13] != 0)) &&
     (iVar8 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng, 0 < iVar8)) {
    pcVar17 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    iVar14 = 0;
    do {
      while (pcVar17[iVar14] == '\n') {
        iVar14 = iVar14 + 1;
        piVar1 = &(this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno;
        *piVar1 = *piVar1 + 1;
        if (iVar8 <= iVar14) goto LAB_08ad299d;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar8);
  }
LAB_08ad299d:
  switch(iVar13) {
  case 0:
    goto switchD_08ad29c4_caseD_0;
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 0xb;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 8;
  case 8:
    return 9;
  case 9:
    return 10;
  case 10:
    (this->super___dnf_script__FlexLexer).yy_start = 3;
    break;
  case 0xb:
  case 0xe:
    (this->super___dnf_script__FlexLexer).yy_start = 1;
    break;
  case 0xc:
  case 0xf:
  case 0x12:
    break;
  case 0xd:
    (this->super___dnf_script__FlexLexer).yy_start = 5;
    break;
  case 0x10:
    this->is_dbcs_ = false;
    (this->super___dnf_script__FlexLexer).yy_start = 7;
    this->m_str_tok_pos = this->STR_TOK_BUF;
    break;
  case 0x11:
    if (this->is_dbcs_ == false) {
      cVar2 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      if (cVar2 == '`') {
        *this->m_str_tok_pos = '\0';
        (this->super___dnf_script__FlexLexer).yy_start = 1;
        return 7;
      }
      pcVar17 = this->m_str_tok_pos;
      if (this->STR_TOK_BUF + 0x1ffe <= pcVar17) {
        bVar7 = IsStream(this);
        if (!bVar7) {
          sprintf(this->ERR_BUF,"%s - the input stream is empty.","yylex");
          (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                    (this,this->ERR_BUF);
          return 1;
        }
                    /* Unresolved local var: stream_t * stream@[???] */
        psVar10 = GetInputStream(this);
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, string buffer overflow detected.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno);
        goto LAB_08ad2c8a;
      }
      *pcVar17 = cVar2;
      this->m_str_tok_pos = pcVar17 + 1;
      bVar7 = (*this->IsDbcsLeadChar_)(cVar2);
      this->is_dbcs_ = bVar7;
    }
    else {
      pcVar17 = this->m_str_tok_pos;
      *pcVar17 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      this->m_str_tok_pos = pcVar17 + 1;
      this->is_dbcs_ = false;
    }
    break;
  case 0x13:
    bVar7 = IsStream(this);
    if (bVar7) {
                    /* Unresolved local var: stream_t * stream@[???] */
      psVar10 = GetInputStream(this);
      cVar2 = *(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      if (cVar2 == '\0') {
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, unrecognized character \'NULL\'.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno);
      }
      else {
        sprintf(this->ERR_BUF,"%s - %s/%s, line %d, unrecognized character \'%c\'.","yylex",
                (psVar10->dir)._M_dataplus._M_p,(psVar10->filename)._M_dataplus._M_p,
                (this->super___dnf_script__FlexLexer).super_FlexLexer.yylineno,(int)cVar2);
      }
LAB_08ad2c8a:
      (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
                (this,this->ERR_BUF);
      return 1;
    }
    break;
  case 0x14:
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[10])
              (this,(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext,
               (this->super___dnf_script__FlexLexer).super_FlexLexer.yyleng);
    break;
  case 0x15:
    pcVar17 = (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    *pbVar16 = (this->super___dnf_script__FlexLexer).yy_hold_char;
    ppyVar9 = (this->super___dnf_script__FlexLexer).yy_buffer_stack;
    pyVar11 = ppyVar9[(this->super___dnf_script__FlexLexer).yy_buffer_stack_top];
    if (pyVar11->yy_buffer_status == 0) {
      (this->super___dnf_script__FlexLexer).yy_n_chars = pyVar11->yy_n_chars;
      piVar4 = (this->super___dnf_script__FlexLexer).yyin;
      pyVar11->yy_buffer_status = 1;
      pyVar11->yy_input_file = piVar4;
      pyVar11 = ppyVar9[(this->super___dnf_script__FlexLexer).yy_buffer_stack_top];
    }
    if ((this->super___dnf_script__FlexLexer).yy_c_buf_p <=
        pyVar11->yy_ch_buf + (this->super___dnf_script__FlexLexer).yy_n_chars) {
      (this->super___dnf_script__FlexLexer).yy_c_buf_p =
           (char *)(pbVar16 + (-1 - (int)pcVar17) +
                   (int)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext);
      iVar8 = __dnf_script__FlexLexer::yy_get_previous_state(&this->super___dnf_script__FlexLexer);
                    /* Unresolved local var: int yy_is_jam@[???] */
      iVar13 = yy_NUL_trans[iVar8];
      if (iVar13 == 0) {
        local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
        pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
        goto LAB_08ad292b;
      }
      local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      pbVar16 = (byte *)((this->super___dnf_script__FlexLexer).yy_c_buf_p + 1);
      (this->super___dnf_script__FlexLexer).yy_c_buf_p = (char *)pbVar16;
LAB_08ad2b19:
      bVar18 = *pbVar16;
      goto LAB_08ad28a3;
    }
    iVar13 = __dnf_script__FlexLexer::yy_get_next_buffer(&this->super___dnf_script__FlexLexer);
    if (iVar13 != 1) {
      if (iVar13 != 2) {
        if (iVar13 == 0) {
          (this->super___dnf_script__FlexLexer).yy_c_buf_p =
               (char *)(pbVar16 + (-1 - (int)pcVar17) +
                       (int)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext);
          iVar13 = __dnf_script__FlexLexer::yy_get_previous_state
                             (&this->super___dnf_script__FlexLexer);
          local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
          pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
          goto LAB_08ad2b19;
        }
        break;
      }
      (this->super___dnf_script__FlexLexer).yy_c_buf_p =
           (this->super___dnf_script__FlexLexer).yy_buffer_stack
           [(this->super___dnf_script__FlexLexer).yy_buffer_stack_top]->yy_ch_buf +
           (this->super___dnf_script__FlexLexer).yy_n_chars;
      iVar8 = __dnf_script__FlexLexer::yy_get_previous_state(&this->super___dnf_script__FlexLexer);
      local_20 = (byte *)(this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
      pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
      goto LAB_08ad292b;
    }
    pp_Var6 = (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer;
    (this->super___dnf_script__FlexLexer).yy_did_buffer_switch_on_eof = 0;
    iVar13 = (*pp_Var6[8])(this);
    if (iVar13 == 0) {
      if ((this->super___dnf_script__FlexLexer).yy_did_buffer_switch_on_eof == 0) {
        (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[5])
                  (this,(this->super___dnf_script__FlexLexer).yyin);
      }
      break;
    }
    (this->super___dnf_script__FlexLexer).yy_c_buf_p =
         (this->super___dnf_script__FlexLexer).super_FlexLexer.yytext;
    iVar13 = ((this->super___dnf_script__FlexLexer).yy_start + -1) / 2 + 0x16;
    goto LAB_08ad299d;
  case 0x16:
  case 0x18:
  case 0x19:
    return 0;
  case 0x17:
    pcVar17 = "comment nest mismatch";
    pcVar19 = this->ERR_BUF;
    for (iVar13 = 0x16; iVar13 != 0; iVar13 = iVar13 + -1) {
      *pcVar19 = *pcVar17;
      pcVar17 = pcVar17 + (uint)bVar20 * -2 + 1;
      pcVar19 = pcVar19 + (uint)bVar20 * -2 + 1;
    }
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
              (this,this->ERR_BUF);
    return 1;
  default:
    (*(this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer[0xb])
              (this,"fatal flex scanner internal error--no action found");
  }
                    /* Unresolved local var: yy_state_type yy_next_state@[???] */
  pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_c_buf_p;
  bVar18 = (this->super___dnf_script__FlexLexer).yy_hold_char;
  goto LAB_08ad2896;
switchD_08ad29c4_caseD_0:
  *pbVar16 = (this->super___dnf_script__FlexLexer).yy_hold_char;
  pbVar16 = (byte *)(this->super___dnf_script__FlexLexer).yy_last_accepting_cpos;
  iVar8 = (this->super___dnf_script__FlexLexer).yy_last_accepting_state;
  goto LAB_08ad292b;
}

```

---

## ~DNFLex

```asm
// === 08acd5f0 DNFLex::~DNFLex  [0x08acd5f0-0x8acd7af] ===
 8acd5f0:	55                   	push   %ebp
 8acd5f1:	89 e5                	mov    %esp,%ebp
 8acd5f3:	57                   	push   %edi
 8acd5f4:	56                   	push   %esi
 8acd5f5:	53                   	push   %ebx
 8acd5f6:	83 ec 3c             	sub    $0x3c,%esp
 8acd5f9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd5fc:	c7 03 a8 eb e2 08    	movl   $0x8e2eba8,(%ebx)
 8acd602:	89 1c 24             	mov    %ebx,(%esp)
 8acd605:	e8 a6 ff ff ff       	call   8acd5b0 <_ZN6DNFLex16CloseInputStreamEv>
 8acd60a:	8b bb 84 00 00 00    	mov    0x84(%ebx),%edi
 8acd610:	8b b3 80 00 00 00    	mov    0x80(%ebx),%esi
 8acd616:	39 f7                	cmp    %esi,%edi
 8acd618:	74 26                	je     8acd640 <_ZN6DNFLexD1Ev+0x50>
 8acd61a:	8d 55 e5             	lea    -0x1b(%ebp),%edx
 8acd61d:	8d 76 00             	lea    0x0(%esi),%esi
 8acd620:	8b 46 04             	mov    0x4(%esi),%eax
 8acd623:	83 e8 0c             	sub    $0xc,%eax
 8acd626:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acd62b:	75 35                	jne    8acd662 <_ZN6DNFLexD1Ev+0x72>
 8acd62d:	8b 06                	mov    (%esi),%eax
 8acd62f:	83 e8 0c             	sub    $0xc,%eax
 8acd632:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acd637:	75 5b                	jne    8acd694 <_ZN6DNFLexD1Ev+0xa4>
 8acd639:	83 c6 18             	add    $0x18,%esi
 8acd63c:	39 f7                	cmp    %esi,%edi
 8acd63e:	75 e0                	jne    8acd620 <_ZN6DNFLexD1Ev+0x30>
 8acd640:	8b 83 80 00 00 00    	mov    0x80(%ebx),%eax
 8acd646:	85 c0                	test   %eax,%eax
 8acd648:	74 08                	je     8acd652 <_ZN6DNFLexD1Ev+0x62>
 8acd64a:	89 04 24             	mov    %eax,(%esp)
 8acd64d:	e8 9e 6e c5 ff       	call   87244f0 <_ZdlPv>
 8acd652:	89 1c 24             	mov    %ebx,(%esp)
 8acd655:	e8 86 51 00 00       	call   8ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>
 8acd65a:	83 c4 3c             	add    $0x3c,%esp
 8acd65d:	5b                   	pop    %ebx
 8acd65e:	5e                   	pop    %esi
 8acd65f:	5f                   	pop    %edi
 8acd660:	5d                   	pop    %ebp
 8acd661:	c3                   	ret
 8acd662:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8acd667:	85 c9                	test   %ecx,%ecx
 8acd669:	0f 84 97 00 00 00    	je     8acd706 <_ZN6DNFLexD1Ev+0x116>
 8acd66f:	83 c9 ff             	or     $0xffffffff,%ecx
 8acd672:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8acd677:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acd67a:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8acd67e:	7f ad                	jg     8acd62d <_ZN6DNFLexD1Ev+0x3d>
 8acd680:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd684:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8acd687:	89 04 24             	mov    %eax,(%esp)
 8acd68a:	e8 91 92 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd68f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acd692:	eb 99                	jmp    8acd62d <_ZN6DNFLexD1Ev+0x3d>
 8acd694:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8acd699:	85 c9                	test   %ecx,%ecx
 8acd69b:	74 7a                	je     8acd717 <_ZN6DNFLexD1Ev+0x127>
 8acd69d:	83 c9 ff             	or     $0xffffffff,%ecx
 8acd6a0:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8acd6a5:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acd6a8:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8acd6ac:	7f 8b                	jg     8acd639 <_ZN6DNFLexD1Ev+0x49>
 8acd6ae:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 8acd6b1:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8acd6b4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acd6b8:	89 04 24             	mov    %eax,(%esp)
 8acd6bb:	e8 60 92 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd6c0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acd6c3:	e9 71 ff ff ff       	jmp    8acd639 <_ZN6DNFLexD1Ev+0x49>
 8acd6c8:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8acd6cb:	8b 83 84 00 00 00    	mov    0x84(%ebx),%eax
 8acd6d1:	8d 7d e7             	lea    -0x19(%ebp),%edi
 8acd6d4:	8b b3 80 00 00 00    	mov    0x80(%ebx),%esi
 8acd6da:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acd6dd:	39 75 d4             	cmp    %esi,-0x2c(%ebp)
 8acd6e0:	0f 84 88 00 00 00    	je     8acd76e <_ZN6DNFLexD1Ev+0x17e>
 8acd6e6:	8b 46 04             	mov    0x4(%esi),%eax
 8acd6e9:	83 e8 0c             	sub    $0xc,%eax
 8acd6ec:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acd6f1:	75 58                	jne    8acd74b <_ZN6DNFLexD1Ev+0x15b>
 8acd6f3:	8b 06                	mov    (%esi),%eax
 8acd6f5:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8acd6fa:	83 e8 0c             	sub    $0xc,%eax
 8acd6fd:	39 c2                	cmp    %eax,%edx
 8acd6ff:	75 24                	jne    8acd725 <_ZN6DNFLexD1Ev+0x135>
 8acd701:	83 c6 18             	add    $0x18,%esi
 8acd704:	eb d7                	jmp    8acd6dd <_ZN6DNFLexD1Ev+0xed>
 8acd706:	8b 48 08             	mov    0x8(%eax),%ecx
 8acd709:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acd70c:	83 e9 01             	sub    $0x1,%ecx
 8acd70f:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd712:	e9 63 ff ff ff       	jmp    8acd67a <_ZN6DNFLexD1Ev+0x8a>
 8acd717:	8b 48 08             	mov    0x8(%eax),%ecx
 8acd71a:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acd71d:	83 e9 01             	sub    $0x1,%ecx
 8acd720:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd723:	eb 83                	jmp    8acd6a8 <_ZN6DNFLexD1Ev+0xb8>
 8acd725:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acd72a:	85 d2                	test   %edx,%edx
 8acd72c:	74 65                	je     8acd793 <_ZN6DNFLexD1Ev+0x1a3>
 8acd72e:	83 ca ff             	or     $0xffffffff,%edx
 8acd731:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acd736:	85 d2                	test   %edx,%edx
 8acd738:	7f c7                	jg     8acd701 <_ZN6DNFLexD1Ev+0x111>
 8acd73a:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 8acd73d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acd741:	89 04 24             	mov    %eax,(%esp)
 8acd744:	e8 d7 91 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd749:	eb b6                	jmp    8acd701 <_ZN6DNFLexD1Ev+0x111>
 8acd74b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acd750:	85 d2                	test   %edx,%edx
 8acd752:	74 4a                	je     8acd79e <_ZN6DNFLexD1Ev+0x1ae>
 8acd754:	83 ca ff             	or     $0xffffffff,%edx
 8acd757:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acd75c:	85 d2                	test   %edx,%edx
 8acd75e:	7f 93                	jg     8acd6f3 <_ZN6DNFLexD1Ev+0x103>
 8acd760:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acd764:	89 04 24             	mov    %eax,(%esp)
 8acd767:	e8 b4 91 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acd76c:	eb 85                	jmp    8acd6f3 <_ZN6DNFLexD1Ev+0x103>
 8acd76e:	8b 83 80 00 00 00    	mov    0x80(%ebx),%eax
 8acd774:	85 c0                	test   %eax,%eax
 8acd776:	74 08                	je     8acd780 <_ZN6DNFLexD1Ev+0x190>
 8acd778:	89 04 24             	mov    %eax,(%esp)
 8acd77b:	e8 70 6d c5 ff       	call   87244f0 <_ZdlPv>
 8acd780:	89 1c 24             	mov    %ebx,(%esp)
 8acd783:	e8 58 50 00 00       	call   8ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>
 8acd788:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8acd78b:	89 0c 24             	mov    %ecx,(%esp)
 8acd78e:	e8 bd 5f 01 00       	call   8ae3750 <_Unwind_Resume>
 8acd793:	8b 50 08             	mov    0x8(%eax),%edx
 8acd796:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acd799:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd79c:	eb 98                	jmp    8acd736 <_ZN6DNFLexD1Ev+0x146>
 8acd79e:	8b 50 08             	mov    0x8(%eax),%edx
 8acd7a1:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acd7a4:	89 48 08             	mov    %ecx,0x8(%eax)
 8acd7a7:	eb b3                	jmp    8acd75c <_ZN6DNFLexD1Ev+0x16c>
 8acd7a9:	90                   	nop
 8acd7aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLex::~DNFLex @ 0x8acd5f0

/* WARNING: Removing unreachable block (ram,0x08acd706) */
/* WARNING: Removing unreachable block (ram,0x08acd717) */
/* DWARF original prototype: void ~DNFLex(DNFLex * this, int __in_chrg) */

void __thiscall DNFLex::~DNFLex(DNFLex *this,int __in_chrg)

{
  int *piVar1;
  int iVar2;
  stream_t *psVar3;
  char *pcVar4;
  allocator *paVar5;
  stream_t *psVar6;
  undefined1 *in_stack_ffffffb8;
  undefined1 local_20;
  undefined1 local_1f [15];
  
  (this->super___dnf_script__FlexLexer).super_FlexLexer._vptr_FlexLexer =
       (_func_int_varargs **)&PTR__DNFLex_08e2eba8;
                    /* try { // try from 08acd605 to 08acd609 has its CatchHandler @ 08acd6c8 */
  CloseInputStream(this);
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_finish
  ;
  psVar6 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if (psVar3 != psVar6) {
    do {
      pcVar4 = (psVar6->filename)._M_dataplus._M_p;
      paVar5 = (allocator *)(pcVar4 + -0xc);
      if (paVar5 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar4 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          in_stack_ffffffb8 = local_1f;
          std::string::_Rep::_M_destroy(paVar5);
        }
      }
      pcVar4 = (psVar6->dir)._M_dataplus._M_p;
      paVar5 = (allocator *)(pcVar4 + -0xc);
      if (paVar5 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar4 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          in_stack_ffffffb8 = &local_20;
          std::string::_Rep::_M_destroy(paVar5);
        }
      }
      psVar6 = psVar6 + 1;
    } while (psVar3 != psVar6);
  }
  psVar3 = (this->stream_stack_).
           super__Vector_base<DNFLex::stream_t,_std::allocator<DNFLex::stream_t>_>._M_impl._M_start;
  if (psVar3 != (stream_t *)0x0) {
    operator_delete(psVar3);
  }
  __dnf_script__FlexLexer::~__dnf_script__FlexLexer
            (&this->super___dnf_script__FlexLexer,(int)in_stack_ffffffb8);
  return;
}

```

---

## ~DNFLex_08acd7b0

```asm
// === 08acd7b0 DNFLex::~DNFLex  [0x08acd7b0-0x8acd7cf] ===
 8acd7b0:	55                   	push   %ebp
 8acd7b1:	89 e5                	mov    %esp,%ebp
 8acd7b3:	53                   	push   %ebx
 8acd7b4:	83 ec 14             	sub    $0x14,%esp
 8acd7b7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acd7ba:	89 1c 24             	mov    %ebx,(%esp)
 8acd7bd:	e8 2e fe ff ff       	call   8acd5f0 <_ZN6DNFLexD1Ev>
 8acd7c2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8acd7c5:	83 c4 14             	add    $0x14,%esp
 8acd7c8:	5b                   	pop    %ebx
 8acd7c9:	5d                   	pop    %ebp
 8acd7ca:	e9 21 6d c5 ff       	jmp    87244f0 <_ZdlPv>
 8acd7cf:	90                   	nop

```

```c
// DNFLex::~DNFLex @ 0x8acd7b0

/* DWARF original prototype: void ~DNFLex(DNFLex * this, int __in_chrg) */

void __thiscall DNFLex::~DNFLex(DNFLex *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~DNFLex(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}

```


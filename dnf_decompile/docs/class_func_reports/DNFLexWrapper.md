# DNFLexWrapper

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 32

---

## DNFLexWrapper

```asm
// === 08aced60 DNFLexWrapper::DNFLexWrapper  [0x08aced60-0x8aceddf] ===
 8aced60:	55                   	push   %ebp
 8aced61:	89 e5                	mov    %esp,%ebp
 8aced63:	83 ec 18             	sub    $0x18,%esp
 8aced66:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8aced69:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8aced6c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8aced6f:	c7 03 30 ec e2 08    	movl   $0x8e2ec30,(%ebx)
 8aced75:	8d 73 18             	lea    0x18(%ebx),%esi
 8aced78:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8aced7f:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 8aced86:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 8aced8d:	89 34 24             	mov    %esi,(%esp)
 8aced90:	e8 0b e6 ff ff       	call   8acd3a0 <_ZN6DNFLexC1Ev>
 8aced95:	8d 83 bc 40 00 00    	lea    0x40bc(%ebx),%eax
 8aced9b:	89 04 24             	mov    %eax,(%esp)
 8aced9e:	e8 1d 1a 00 00       	call   8ad07c0 <_ZN14CompiledDNFLexC1Ev>
 8aceda3:	c7 83 08 61 00 00 00 	movl   $0x0,0x6108(%ebx)
 8acedaa:	00 00 00 
 8acedad:	c7 83 0c 61 00 00 00 	movl   $0x0,0x610c(%ebx)
 8acedb4:	00 00 00 
 8acedb7:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8acedba:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8acedbd:	89 ec                	mov    %ebp,%esp
 8acedbf:	5d                   	pop    %ebp
 8acedc0:	c3                   	ret
 8acedc1:	89 c3                	mov    %eax,%ebx
 8acedc3:	89 34 24             	mov    %esi,(%esp)
 8acedc6:	e8 25 e8 ff ff       	call   8acd5f0 <_ZN6DNFLexD1Ev>
 8acedcb:	89 1c 24             	mov    %ebx,(%esp)
 8acedce:	e8 7d 49 01 00       	call   8ae3750 <_Unwind_Resume>
 8acedd3:	90                   	nop
 8acedd4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acedda:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::DNFLexWrapper @ 0x8aced60

/* DWARF original prototype: void DNFLexWrapper(DNFLexWrapper * this) */

void __thiscall DNFLexWrapper::DNFLexWrapper(DNFLexWrapper *this)

{
  this->_vptr_DNFLexWrapper = (_func_int_varargs **)&PTR__DNFLexWrapper_08e2ec30;
  this->lastToken_ = DNF_TOK_EOF;
  this->lastStringValue_ = (char *)0x0;
  this->lexType_ = LEX_TYPE_NORMAL;
  DNFLex::DNFLex(&this->dnfLex_);
                    /* try { // try from 08aced9e to 08aceda2 has its CatchHandler @ 08acedc1 */
  CompiledDNFLex::CompiledDNFLex(&this->compiledDnfLex_);
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
  return;
}

```

---

## LoadStream

```asm
// === 08ace2b0 DNFLexWrapper::LoadStream  [0x08ace2b0-0x8ace2ef] ===
 8ace2b0:	55                   	push   %ebp
 8ace2b1:	89 e5                	mov    %esp,%ebp
 8ace2b3:	53                   	push   %ebx
 8ace2b4:	83 ec 04             	sub    $0x4,%esp
 8ace2b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace2ba:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ace2bd:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8ace2c0:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8ace2c3:	8b 80 0c 61 00 00    	mov    0x610c(%eax),%eax
 8ace2c9:	85 c0                	test   %eax,%eax
 8ace2cb:	74 13                	je     8ace2e0 <_ZN13DNFLexWrapper10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE+0x30>
 8ace2cd:	89 5d 10             	mov    %ebx,0x10(%ebp)
 8ace2d0:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 8ace2d3:	89 55 08             	mov    %edx,0x8(%ebp)
 8ace2d6:	83 c4 04             	add    $0x4,%esp
 8ace2d9:	5b                   	pop    %ebx
 8ace2da:	5d                   	pop    %ebp
 8ace2db:	ff e0                	jmp    *%eax
 8ace2dd:	8d 76 00             	lea    0x0(%esi),%esi
 8ace2e0:	83 c4 04             	add    $0x4,%esp
 8ace2e3:	5b                   	pop    %ebx
 8ace2e4:	5d                   	pop    %ebp
 8ace2e5:	c3                   	ret
 8ace2e6:	8d 76 00             	lea    0x0(%esi),%esi
 8ace2e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::LoadStream @ 0x8ace2b0

/* DWARF original prototype: bool LoadStream(DNFLexWrapper * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
DNFLexWrapper::LoadStream(DNFLexWrapper *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08ace2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}

```

---

## SetHandler

```asm
// === 08acec80 DNFLexWrapper::SetHandler  [0x08acec80-0x8acecef] ===
 8acec80:	55                   	push   %ebp
 8acec81:	89 e5                	mov    %esp,%ebp
 8acec83:	83 ec 38             	sub    $0x38,%esp
 8acec86:	8b 45 10             	mov    0x10(%ebp),%eax
 8acec89:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acec8c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acec8f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acec92:	8b 75 18             	mov    0x18(%ebp),%esi
 8acec95:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acec98:	8b 7d 14             	mov    0x14(%ebp),%edi
 8acec9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acec9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8aceca2:	89 74 24 10          	mov    %esi,0x10(%esp)
 8aceca6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8acecaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acecae:	8d 43 18             	lea    0x18(%ebx),%eax
 8acecb1:	89 04 24             	mov    %eax,(%esp)
 8acecb4:	e8 a7 e4 ff ff       	call   8acd160 <_ZN6DNFLex10SetHandlerEPFbcEPFvPKciEPFvS3_EPFbS3_S3_PNS_13stream_data_tEE>
 8acecb9:	8d 83 bc 40 00 00    	lea    0x40bc(%ebx),%eax
 8acecbf:	89 74 24 08          	mov    %esi,0x8(%esp)
 8acecc3:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acecc7:	89 04 24             	mov    %eax,(%esp)
 8acecca:	e8 21 11 00 00       	call   8acfdf0 <_ZN14CompiledDNFLex10SetHandlerEPFvPKcEPFbS1_S1_PN6DNFLex13stream_data_tEE>
 8aceccf:	89 bb 08 61 00 00    	mov    %edi,0x6108(%ebx)
 8acecd5:	89 b3 0c 61 00 00    	mov    %esi,0x610c(%ebx)
 8acecdb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acecde:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acece1:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acece4:	89 ec                	mov    %ebp,%esp
 8acece6:	5d                   	pop    %ebp
 8acece7:	c3                   	ret
 8acece8:	90                   	nop
 8acece9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::SetHandler @ 0x8acec80

/* DWARF original prototype: void SetHandler(DNFLexWrapper * this, TIsDbcsLeadChar
   IsDbcsLeadCharFunc, TLexerOutput LexerOutputFunc, TLexerError LexerErrorFunc, TLoadStream
   LoadStreamFunc) */

void __thiscall
DNFLexWrapper::SetHandler
          (DNFLexWrapper *this,TIsDbcsLeadChar IsDbcsLeadCharFunc,TLexerOutput LexerOutputFunc,
          TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  DNFLex::SetHandler(&this->dnfLex_,IsDbcsLeadCharFunc,LexerOutputFunc,LexerErrorFunc,LoadStreamFunc
                    );
  CompiledDNFLex::SetHandler(&this->compiledDnfLex_,LexerErrorFunc,LoadStreamFunc);
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}

```

---

## closeInputStream

```asm
// === 08acea70 DNFLexWrapper::closeInputStream  [0x08acea70-0x8acea9f] ===
 8acea70:	55                   	push   %ebp
 8acea71:	89 e5                	mov    %esp,%ebp
 8acea73:	53                   	push   %ebx
 8acea74:	83 ec 14             	sub    $0x14,%esp
 8acea77:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acea7a:	8d 43 18             	lea    0x18(%ebx),%eax
 8acea7d:	81 c3 bc 40 00 00    	add    $0x40bc,%ebx
 8acea83:	89 04 24             	mov    %eax,(%esp)
 8acea86:	e8 25 eb ff ff       	call   8acd5b0 <_ZN6DNFLex16CloseInputStreamEv>
 8acea8b:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8acea8e:	83 c4 14             	add    $0x14,%esp
 8acea91:	5b                   	pop    %ebx
 8acea92:	5d                   	pop    %ebp
 8acea93:	e9 f8 23 00 00       	jmp    8ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>
 8acea98:	90                   	nop
 8acea99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::closeInputStream @ 0x8acea70

/* DWARF original prototype: void closeInputStream(DNFLexWrapper * this) */

void __thiscall DNFLexWrapper::closeInputStream(DNFLexWrapper *this)

{
  DNFLex::CloseInputStream(&this->dnfLex_);
  CompiledDNFLex::CloseInputStream(&this->compiledDnfLex_);
  return;
}

```

---

## getConnector

```asm
// === 08ace3f0 DNFLexWrapper::getConnector  [0x08ace3f0-0x8ace41f] ===
 8ace3f0:	55                   	push   %ebp
 8ace3f1:	89 e5                	mov    %esp,%ebp
 8ace3f3:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace3f6:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace3f9:	85 c9                	test   %ecx,%ecx
 8ace3fb:	75 0b                	jne    8ace408 <_ZN13DNFLexWrapper12getConnectorEv+0x18>
 8ace3fd:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace400:	5d                   	pop    %ebp
 8ace401:	c3                   	ret
 8ace402:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace408:	31 c0                	xor    %eax,%eax
 8ace40a:	83 f9 01             	cmp    $0x1,%ecx
 8ace40d:	75 f1                	jne    8ace400 <_ZN13DNFLexWrapper12getConnectorEv+0x10>
 8ace40f:	8b 42 10             	mov    0x10(%edx),%eax
 8ace412:	5d                   	pop    %ebp
 8ace413:	c3                   	ret
 8ace414:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace41a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::getConnector @ 0x8ace3f0

/* DWARF original prototype: char * getConnector(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getConnector(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
  }
  else {
    pcVar1 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar1;
}

```

---

## getCustomData

```asm
// === 08ace3c0 DNFLexWrapper::getCustomData  [0x08ace3c0-0x8ace3ef] ===
 8ace3c0:	55                   	push   %ebp
 8ace3c1:	89 e5                	mov    %esp,%ebp
 8ace3c3:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace3c6:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace3c9:	85 c9                	test   %ecx,%ecx
 8ace3cb:	75 0b                	jne    8ace3d8 <_ZN13DNFLexWrapper13getCustomDataEv+0x18>
 8ace3cd:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace3d0:	5d                   	pop    %ebp
 8ace3d1:	c3                   	ret
 8ace3d2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace3d8:	31 c0                	xor    %eax,%eax
 8ace3da:	83 f9 01             	cmp    $0x1,%ecx
 8ace3dd:	75 f1                	jne    8ace3d0 <_ZN13DNFLexWrapper13getCustomDataEv+0x10>
 8ace3df:	8b 42 10             	mov    0x10(%edx),%eax
 8ace3e2:	5d                   	pop    %ebp
 8ace3e3:	c3                   	ret
 8ace3e4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace3ea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::getCustomData @ 0x8ace3c0

/* DWARF original prototype: char * getCustomData(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getCustomData(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
  }
  else {
    pcVar1 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar1;
}

```

---

## getDecimal

```asm
// === 08ace2f0 DNFLexWrapper::getDecimal  [0x08ace2f0-0x8ace38f] ===
 8ace2f0:	55                   	push   %ebp
 8ace2f1:	89 e5                	mov    %esp,%ebp
 8ace2f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace2f6:	53                   	push   %ebx
 8ace2f7:	8b 50 14             	mov    0x14(%eax),%edx
 8ace2fa:	85 d2                	test   %edx,%edx
 8ace2fc:	75 2a                	jne    8ace328 <_ZN13DNFLexWrapper10getDecimalEv+0x38>
 8ace2fe:	8b 50 1c             	mov    0x1c(%eax),%edx
 8ace301:	0f b6 0a             	movzbl (%edx),%ecx
 8ace304:	84 c9                	test   %cl,%cl
 8ace306:	74 16                	je     8ace31e <_ZN13DNFLexWrapper10getDecimalEv+0x2e>
 8ace308:	8d 41 d0             	lea    -0x30(%ecx),%eax
 8ace30b:	3c 09                	cmp    $0x9,%al
 8ace30d:	76 7b                	jbe    8ace38a <_ZN13DNFLexWrapper10getDecimalEv+0x9a>
 8ace30f:	80 f9 20             	cmp    $0x20,%cl
 8ace312:	74 24                	je     8ace338 <_ZN13DNFLexWrapper10getDecimalEv+0x48>
 8ace314:	80 f9 2b             	cmp    $0x2b,%cl
 8ace317:	74 67                	je     8ace380 <_ZN13DNFLexWrapper10getDecimalEv+0x90>
 8ace319:	80 f9 2d             	cmp    $0x2d,%cl
 8ace31c:	74 2a                	je     8ace348 <_ZN13DNFLexWrapper10getDecimalEv+0x58>
 8ace31e:	31 c0                	xor    %eax,%eax
 8ace320:	5b                   	pop    %ebx
 8ace321:	5d                   	pop    %ebp
 8ace322:	c3                   	ret
 8ace323:	90                   	nop
 8ace324:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace328:	83 fa 01             	cmp    $0x1,%edx
 8ace32b:	75 f1                	jne    8ace31e <_ZN13DNFLexWrapper10getDecimalEv+0x2e>
 8ace32d:	8b 40 08             	mov    0x8(%eax),%eax
 8ace330:	5b                   	pop    %ebx
 8ace331:	5d                   	pop    %ebp
 8ace332:	c3                   	ret
 8ace333:	90                   	nop
 8ace334:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace338:	83 c2 01             	add    $0x1,%edx
 8ace33b:	0f b6 0a             	movzbl (%edx),%ecx
 8ace33e:	84 c9                	test   %cl,%cl
 8ace340:	75 c6                	jne    8ace308 <_ZN13DNFLexWrapper10getDecimalEv+0x18>
 8ace342:	eb da                	jmp    8ace31e <_ZN13DNFLexWrapper10getDecimalEv+0x2e>
 8ace344:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace348:	83 c2 01             	add    $0x1,%edx
 8ace34b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ace350:	0f b6 0a             	movzbl (%edx),%ecx
 8ace353:	0f be c9             	movsbl %cl,%ecx
 8ace356:	31 c0                	xor    %eax,%eax
 8ace358:	83 e9 30             	sub    $0x30,%ecx
 8ace35b:	83 f9 09             	cmp    $0x9,%ecx
 8ace35e:	77 14                	ja     8ace374 <_ZN13DNFLexWrapper10getDecimalEv+0x84>
 8ace360:	83 c2 01             	add    $0x1,%edx
 8ace363:	8d 04 80             	lea    (%eax,%eax,4),%eax
 8ace366:	8d 04 41             	lea    (%ecx,%eax,2),%eax
 8ace369:	0f be 0a             	movsbl (%edx),%ecx
 8ace36c:	83 e9 30             	sub    $0x30,%ecx
 8ace36f:	83 f9 09             	cmp    $0x9,%ecx
 8ace372:	76 ec                	jbe    8ace360 <_ZN13DNFLexWrapper10getDecimalEv+0x70>
 8ace374:	84 db                	test   %bl,%bl
 8ace376:	74 a8                	je     8ace320 <_ZN13DNFLexWrapper10getDecimalEv+0x30>
 8ace378:	f7 d8                	neg    %eax
 8ace37a:	5b                   	pop    %ebx
 8ace37b:	5d                   	pop    %ebp
 8ace37c:	c3                   	ret
 8ace37d:	8d 76 00             	lea    0x0(%esi),%esi
 8ace380:	83 c2 01             	add    $0x1,%edx
 8ace383:	31 db                	xor    %ebx,%ebx
 8ace385:	0f b6 0a             	movzbl (%edx),%ecx
 8ace388:	eb c9                	jmp    8ace353 <_ZN13DNFLexWrapper10getDecimalEv+0x63>
 8ace38a:	31 db                	xor    %ebx,%ebx
 8ace38c:	eb c5                	jmp    8ace353 <_ZN13DNFLexWrapper10getDecimalEv+0x63>
 8ace38e:	66 90                	xchg   %ax,%ax

```

```c
// DNFLexWrapper::getDecimal @ 0x8ace2f0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int getDecimal(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getDecimal(DNFLexWrapper *this)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar4 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
                    /* Unresolved local var: bool neg@[???]
                       Unresolved local var: char * c@[???]
                       Unresolved local var: int ret@[???] */
    cVar3 = *pcVar4;
    if (cVar3 != '\0') {
      do {
        if ((byte)(cVar3 - 0x30U) < 10) {
          bVar1 = false;
LAB_08ace353:
          iVar2 = 0;
                    /* Unresolved local var: uint v@[???] */
          while ((int)cVar3 - 0x30U < 10) {
            pcVar4 = pcVar4 + 1;
            iVar2 = ((int)cVar3 - 0x30U) + iVar2 * 10;
            cVar3 = *pcVar4;
          }
          if (bVar1) {
            return -iVar2;
          }
          return iVar2;
        }
        if (cVar3 != ' ') {
          if (cVar3 == '+') {
            pcVar4 = pcVar4 + 1;
            bVar1 = false;
            cVar3 = *pcVar4;
          }
          else {
            if (cVar3 != '-') {
              return 0;
            }
            pcVar4 = pcVar4 + 1;
            bVar1 = true;
            cVar3 = *pcVar4;
          }
          goto LAB_08ace353;
        }
        pcVar4 = pcVar4 + 1;
        cVar3 = *pcVar4;
        if (cVar3 == '\0') {
          return 0;
        }
      } while( true );
    }
  }
  else if (this->lexType_ == LEX_TYPE_COMPILED) {
    return this->lastIntValue_;
  }
  return 0;
}

```

---

## getFloat

```asm
// === 08ace730 DNFLexWrapper::getFloat  [0x08ace730-0x8ace77f] ===
 8ace730:	55                   	push   %ebp
 8ace731:	89 e5                	mov    %esp,%ebp
 8ace733:	83 ec 28             	sub    $0x28,%esp
 8ace736:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace739:	8b 42 14             	mov    0x14(%edx),%eax
 8ace73c:	85 c0                	test   %eax,%eax
 8ace73e:	74 18                	je     8ace758 <_ZN13DNFLexWrapper8getFloatEv+0x28>
 8ace740:	83 f8 01             	cmp    $0x1,%eax
 8ace743:	74 0b                	je     8ace750 <_ZN13DNFLexWrapper8getFloatEv+0x20>
 8ace745:	d9 ee                	fldz
 8ace747:	c9                   	leave
 8ace748:	c3                   	ret
 8ace749:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace750:	d9 42 0c             	flds   0xc(%edx)
 8ace753:	c9                   	leave
 8ace754:	c3                   	ret
 8ace755:	8d 76 00             	lea    0x0(%esi),%esi
 8ace758:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ace75f:	00 
 8ace760:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ace767:	00 
 8ace768:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace76b:	89 04 24             	mov    %eax,(%esp)
 8ace76e:	e8 1d f0 5a ff       	call   807d790 <__strtod_internal@plt>
 8ace773:	d9 5d f4             	fstps  -0xc(%ebp)
 8ace776:	d9 45 f4             	flds   -0xc(%ebp)
 8ace779:	c9                   	leave
 8ace77a:	c3                   	ret
 8ace77b:	90                   	nop
 8ace77c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getFloat @ 0x8ace730

/* DWARF original prototype: float getFloat(DNFLexWrapper * this) */

float __thiscall DNFLexWrapper::getFloat(DNFLexWrapper *this)

{
  longdouble lVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    lVar1 = (longdouble)
            __strtod_internal((this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext,0
                              ,0);
    return (float)lVar1;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0.0;
  }
  return this->lastFloatValue_;
}

```

---

## getHexDecimal

```asm
// === 08ace780 DNFLexWrapper::getHexDecimal  [0x08ace780-0x8ace7df] ===
 8ace780:	55                   	push   %ebp
 8ace781:	89 e5                	mov    %esp,%ebp
 8ace783:	83 ec 28             	sub    $0x28,%esp
 8ace786:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ace789:	8b 51 14             	mov    0x14(%ecx),%edx
 8ace78c:	85 d2                	test   %edx,%edx
 8ace78e:	74 18                	je     8ace7a8 <_ZN13DNFLexWrapper13getHexDecimalEv+0x28>
 8ace790:	31 c0                	xor    %eax,%eax
 8ace792:	83 fa 01             	cmp    $0x1,%edx
 8ace795:	74 09                	je     8ace7a0 <_ZN13DNFLexWrapper13getHexDecimalEv+0x20>
 8ace797:	c9                   	leave
 8ace798:	c3                   	ret
 8ace799:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace7a0:	8b 41 08             	mov    0x8(%ecx),%eax
 8ace7a3:	c9                   	leave
 8ace7a4:	c3                   	ret
 8ace7a5:	8d 76 00             	lea    0x0(%esi),%esi
 8ace7a8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ace7ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ace7af:	c7 44 24 04 0b ec e2 	movl   $0x8e2ec0b,0x4(%esp)
 8ace7b6:	08 
 8ace7b7:	8b 41 1c             	mov    0x1c(%ecx),%eax
 8ace7ba:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ace7c1:	83 c0 02             	add    $0x2,%eax
 8ace7c4:	89 04 24             	mov    %eax,(%esp)
 8ace7c7:	e8 14 f2 5a ff       	call   807d9e0 <sscanf@plt>
 8ace7cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ace7cf:	c9                   	leave
 8ace7d0:	c3                   	ret
 8ace7d1:	90                   	nop
 8ace7d2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace7d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::getHexDecimal @ 0x8ace780

/* DWARF original prototype: int getHexDecimal(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getHexDecimal(DNFLexWrapper *this)

{
  int local_10 [3];
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
                    /* Unresolved local var: int rval@[???] */
    local_10[0] = 0;
    sscanf((this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 2,"%x",local_10);
    return local_10[0];
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0;
  }
  return this->lastIntValue_;
}

```

---

## getInputStream

```asm
// === 08ace900 DNFLexWrapper::getInputStream  [0x08ace900-0x8ace92f] ===
 8ace900:	55                   	push   %ebp
 8ace901:	31 c0                	xor    %eax,%eax
 8ace903:	89 e5                	mov    %esp,%ebp
 8ace905:	83 ec 18             	sub    $0x18,%esp
 8ace908:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace90b:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace90e:	85 c9                	test   %ecx,%ecx
 8ace910:	74 06                	je     8ace918 <_ZN13DNFLexWrapper14getInputStreamEv+0x18>
 8ace912:	c9                   	leave
 8ace913:	c3                   	ret
 8ace914:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace918:	83 c2 18             	add    $0x18,%edx
 8ace91b:	89 14 24             	mov    %edx,(%esp)
 8ace91e:	e8 5d e9 ff ff       	call   8acd280 <_ZN6DNFLex14GetInputStreamEv>
 8ace923:	8b 40 08             	mov    0x8(%eax),%eax
 8ace926:	c9                   	leave
 8ace927:	c3                   	ret
 8ace928:	90                   	nop
 8ace929:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getInputStream @ 0x8ace900

/* DWARF original prototype: istream * getInputStream(DNFLexWrapper * this) */

istream * __thiscall DNFLexWrapper::getInputStream(DNFLexWrapper *this)

{
  stream_t *psVar1;
  
  if (this->lexType_ != LEX_TYPE_NORMAL) {
    return (istream *)0x0;
  }
  psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
  return (psVar1->s).stream;
}

```

---

## getInputStreamBuffer

```asm
// === 08ace970 DNFLexWrapper::getInputStreamBuffer  [0x08ace970-0x8ace9af] ===
 8ace970:	55                   	push   %ebp
 8ace971:	89 e5                	mov    %esp,%ebp
 8ace973:	83 ec 18             	sub    $0x18,%esp
 8ace976:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace979:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace97c:	85 c9                	test   %ecx,%ecx
 8ace97e:	75 10                	jne    8ace990 <_ZN13DNFLexWrapper20getInputStreamBufferEv+0x20>
 8ace980:	83 c2 18             	add    $0x18,%edx
 8ace983:	89 14 24             	mov    %edx,(%esp)
 8ace986:	e8 f5 e8 ff ff       	call   8acd280 <_ZN6DNFLex14GetInputStreamEv>
 8ace98b:	8b 40 10             	mov    0x10(%eax),%eax
 8ace98e:	c9                   	leave
 8ace98f:	c3                   	ret
 8ace990:	31 c0                	xor    %eax,%eax
 8ace992:	83 f9 01             	cmp    $0x1,%ecx
 8ace995:	75 f7                	jne    8ace98e <_ZN13DNFLexWrapper20getInputStreamBufferEv+0x1e>
 8ace997:	81 c2 bc 40 00 00    	add    $0x40bc,%edx
 8ace99d:	89 14 24             	mov    %edx,(%esp)
 8ace9a0:	e8 fb 14 00 00       	call   8acfea0 <_ZN14CompiledDNFLex14GetInputStreamEv>
 8ace9a5:	8b 40 0c             	mov    0xc(%eax),%eax
 8ace9a8:	c9                   	leave
 8ace9a9:	c3                   	ret
 8ace9aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLexWrapper::getInputStreamBuffer @ 0x8ace970

/* DWARF original prototype: char * getInputStreamBuffer(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getInputStreamBuffer(DNFLexWrapper *this)

{
  stream_t *psVar1;
  char *pcVar2;
  stream_t *psVar3;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
    pcVar2 = (psVar1->s).buffer;
  }
  else {
    pcVar2 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      psVar3 = CompiledDNFLex::GetInputStream(&this->compiledDnfLex_);
      return psVar3->buffer;
    }
  }
  return pcVar2;
}

```

---

## getInputStreamSize

```asm
// === 08ace930 DNFLexWrapper::getInputStreamSize  [0x08ace930-0x8ace96f] ===
 8ace930:	55                   	push   %ebp
 8ace931:	89 e5                	mov    %esp,%ebp
 8ace933:	83 ec 18             	sub    $0x18,%esp
 8ace936:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace939:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace93c:	85 c9                	test   %ecx,%ecx
 8ace93e:	75 10                	jne    8ace950 <_ZN13DNFLexWrapper18getInputStreamSizeEv+0x20>
 8ace940:	83 c2 18             	add    $0x18,%edx
 8ace943:	89 14 24             	mov    %edx,(%esp)
 8ace946:	e8 35 e9 ff ff       	call   8acd280 <_ZN6DNFLex14GetInputStreamEv>
 8ace94b:	8b 40 0c             	mov    0xc(%eax),%eax
 8ace94e:	c9                   	leave
 8ace94f:	c3                   	ret
 8ace950:	83 f9 01             	cmp    $0x1,%ecx
 8ace953:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ace958:	75 f4                	jne    8ace94e <_ZN13DNFLexWrapper18getInputStreamSizeEv+0x1e>
 8ace95a:	81 c2 bc 40 00 00    	add    $0x40bc,%edx
 8ace960:	89 14 24             	mov    %edx,(%esp)
 8ace963:	e8 38 15 00 00       	call   8acfea0 <_ZN14CompiledDNFLex14GetInputStreamEv>
 8ace968:	8b 40 08             	mov    0x8(%eax),%eax
 8ace96b:	c9                   	leave
 8ace96c:	c3                   	ret
 8ace96d:	90                   	nop
 8ace96e:	66 90                	xchg   %ax,%ax

```

```c
// DNFLexWrapper::getInputStreamSize @ 0x8ace930

/* DWARF original prototype: int getInputStreamSize(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getInputStreamSize(DNFLexWrapper *this)

{
  stream_t *psVar1;
  uint uVar2;
  stream_t *psVar3;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    psVar1 = DNFLex::GetInputStream(&this->dnfLex_);
    uVar2 = (psVar1->s).size;
  }
  else {
    uVar2 = 0xffffffff;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      psVar3 = CompiledDNFLex::GetInputStream(&this->compiledDnfLex_);
      return psVar3->size;
    }
  }
  return uVar2;
}

```

---

## getLastLineNo

```asm
// === 08ace490 DNFLexWrapper::getLastLineNo  [0x08ace490-0x8ace4cf] ===
 8ace490:	55                   	push   %ebp
 8ace491:	89 e5                	mov    %esp,%ebp
 8ace493:	83 ec 08             	sub    $0x8,%esp
 8ace496:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace499:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace49c:	85 c9                	test   %ecx,%ecx
 8ace49e:	75 08                	jne    8ace4a8 <_ZN13DNFLexWrapper13getLastLineNoEv+0x18>
 8ace4a0:	8b 42 24             	mov    0x24(%edx),%eax
 8ace4a3:	c9                   	leave
 8ace4a4:	c3                   	ret
 8ace4a5:	8d 76 00             	lea    0x0(%esi),%esi
 8ace4a8:	83 f9 01             	cmp    $0x1,%ecx
 8ace4ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ace4b0:	75 f1                	jne    8ace4a3 <_ZN13DNFLexWrapper13getLastLineNoEv+0x13>
 8ace4b2:	81 c2 bc 40 00 00    	add    $0x40bc,%edx
 8ace4b8:	89 55 08             	mov    %edx,0x8(%ebp)
 8ace4bb:	c9                   	leave
 8ace4bc:	e9 5f 1a 00 00       	jmp    8acff20 <_ZNK14CompiledDNFLex9GetOffsetEv>
 8ace4c1:	90                   	nop
 8ace4c2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace4c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::getLastLineNo @ 0x8ace490

/* DWARF original prototype: int getLastLineNo(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getLastLineNo(DNFLexWrapper *this)

{
  int iVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    iVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yylineno;
  }
  else {
    iVar1 = -1;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      iVar1 = CompiledDNFLex::GetOffset(&this->compiledDnfLex_);
      return iVar1;
    }
  }
  return iVar1;
}

```

---

## getLastToken

```asm
// === 08ace420 DNFLexWrapper::getLastToken  [0x08ace420-0x8ace42f] ===
 8ace420:	55                   	push   %ebp
 8ace421:	89 e5                	mov    %esp,%ebp
 8ace423:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace426:	5d                   	pop    %ebp
 8ace427:	8b 40 04             	mov    0x4(%eax),%eax
 8ace42a:	c3                   	ret
 8ace42b:	90                   	nop
 8ace42c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getLastToken @ 0x8ace420

/* DWARF original prototype: DNFLEX_TOKEN getLastToken(DNFLexWrapper * this) */

DNFLEX_TOKEN __thiscall DNFLexWrapper::getLastToken(DNFLexWrapper *this)

{
  return this->lastToken_;
}

```

---

## getLastTokenData

```asm
// === 08ace430 DNFLexWrapper::getLastTokenData  [0x08ace430-0x8ace45f] ===
 8ace430:	55                   	push   %ebp
 8ace431:	89 e5                	mov    %esp,%ebp
 8ace433:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace436:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace439:	85 c9                	test   %ecx,%ecx
 8ace43b:	75 0b                	jne    8ace448 <_ZN13DNFLexWrapper16getLastTokenDataEv+0x18>
 8ace43d:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace440:	5d                   	pop    %ebp
 8ace441:	c3                   	ret
 8ace442:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace448:	31 c0                	xor    %eax,%eax
 8ace44a:	83 f9 01             	cmp    $0x1,%ecx
 8ace44d:	75 f1                	jne    8ace440 <_ZN13DNFLexWrapper16getLastTokenDataEv+0x10>
 8ace44f:	8b 42 10             	mov    0x10(%edx),%eax
 8ace452:	5d                   	pop    %ebp
 8ace453:	c3                   	ret
 8ace454:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace45a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::getLastTokenData @ 0x8ace430

/* DWARF original prototype: char * getLastTokenData(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getLastTokenData(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
  }
  else {
    pcVar1 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar1;
}

```

---

## getLastTokenDataAsString

```asm
// === 08ace4d0 DNFLexWrapper::getLastTokenDataAsString  [0x08ace4d0-0x8ace52f] ===
 8ace4d0:	55                   	push   %ebp
 8ace4d1:	89 e5                	mov    %esp,%ebp
 8ace4d3:	53                   	push   %ebx
 8ace4d4:	83 ec 24             	sub    $0x24,%esp
 8ace4d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ace4da:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ace4dd:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace4e0:	85 c9                	test   %ecx,%ecx
 8ace4e2:	75 2c                	jne    8ace510 <_ZN13DNFLexWrapper24getLastTokenDataAsStringEv+0x40>
 8ace4e4:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace4e7:	85 c0                	test   %eax,%eax
 8ace4e9:	74 34                	je     8ace51f <_ZN13DNFLexWrapper24getLastTokenDataAsStringEv+0x4f>
 8ace4eb:	89 04 24             	mov    %eax,(%esp)
 8ace4ee:	e8 82 06 01 00       	call   8adeb75 <_Z9toTStringPKc>
 8ace4f3:	8d 55 f7             	lea    -0x9(%ebp),%edx
 8ace4f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ace4fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ace4fe:	89 1c 24             	mov    %ebx,(%esp)
 8ace501:	e8 2a 91 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ace506:	89 d8                	mov    %ebx,%eax
 8ace508:	83 c4 24             	add    $0x24,%esp
 8ace50b:	5b                   	pop    %ebx
 8ace50c:	5d                   	pop    %ebp
 8ace50d:	c2 04 00             	ret    $0x4
 8ace510:	83 f9 01             	cmp    $0x1,%ecx
 8ace513:	b8 a4 c9 d0 08       	mov    $0x8d0c9a4,%eax
 8ace518:	75 d9                	jne    8ace4f3 <_ZN13DNFLexWrapper24getLastTokenDataAsStringEv+0x23>
 8ace51a:	8b 42 10             	mov    0x10(%edx),%eax
 8ace51d:	eb c8                	jmp    8ace4e7 <_ZN13DNFLexWrapper24getLastTokenDataAsStringEv+0x17>
 8ace51f:	b8 a4 c9 d0 08       	mov    $0x8d0c9a4,%eax
 8ace524:	eb cd                	jmp    8ace4f3 <_ZN13DNFLexWrapper24getLastTokenDataAsStringEv+0x23>
 8ace526:	89 04 24             	mov    %eax,(%esp)
 8ace529:	e8 22 52 01 00       	call   8ae3750 <_Unwind_Resume>
 8ace52e:	66 90                	xchg   %ax,%ax

```

```c
// DNFLexWrapper::getLastTokenDataAsString @ 0x8ace4d0

/* DWARF original prototype: tstring getLastTokenDataAsString(DNFLexWrapper * this) */

tstring __thiscall DNFLexWrapper::getLastTokenDataAsString(DNFLexWrapper *this)

{
  char *pcVar1;
  int in_stack_00000008;
  allocator local_d [5];
  
                    /* Unresolved local var: char * data@[???] */
  if (*(int *)(in_stack_00000008 + 0x14) == 0) {
    pcVar1 = *(char **)(in_stack_00000008 + 0x1c);
  }
  else {
    pcVar1 = "";
    if (*(int *)(in_stack_00000008 + 0x14) != 1) goto LAB_08ace4f3;
    pcVar1 = *(char **)(in_stack_00000008 + 0x10);
  }
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  else {
                    /* try { // try from 08ace4ee to 08ace505 has its CatchHandler @ 08ace526 */
    pcVar1 = toTString(pcVar1);
  }
LAB_08ace4f3:
  std::string::string((string *)this,pcVar1,local_d);
  return (tstring)(_Alloc_hider)this;
}

```

---

## getLexType

```asm
// === 08ace2a0 DNFLexWrapper::getLexType  [0x08ace2a0-0x8ace2af] ===
 8ace2a0:	55                   	push   %ebp
 8ace2a1:	89 e5                	mov    %esp,%ebp
 8ace2a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace2a6:	5d                   	pop    %ebp
 8ace2a7:	8b 40 14             	mov    0x14(%eax),%eax
 8ace2aa:	c3                   	ret
 8ace2ab:	90                   	nop
 8ace2ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getLexType @ 0x8ace2a0

/* DWARF original prototype: ENUM_LEX_TYPE getLexType(DNFLexWrapper * this) */

ENUM_LEX_TYPE __thiscall DNFLexWrapper::getLexType(DNFLexWrapper *this)

{
  return this->lexType_;
}

```

---

## getPairInt

```asm
// === 08ace630 DNFLexWrapper::getPairInt  [0x08ace630-0x8ace6ef] ===
 8ace630:	55                   	push   %ebp
 8ace631:	89 e5                	mov    %esp,%ebp
 8ace633:	53                   	push   %ebx
 8ace634:	81 ec 14 01 00 00    	sub    $0x114,%esp
 8ace63a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ace63d:	8b 51 14             	mov    0x14(%ecx),%edx
 8ace640:	85 d2                	test   %edx,%edx
 8ace642:	74 24                	je     8ace668 <_ZN13DNFLexWrapper10getPairIntEv+0x38>
 8ace644:	31 c0                	xor    %eax,%eax
 8ace646:	83 fa 01             	cmp    $0x1,%edx
 8ace649:	74 0d                	je     8ace658 <_ZN13DNFLexWrapper10getPairIntEv+0x28>
 8ace64b:	81 c4 14 01 00 00    	add    $0x114,%esp
 8ace651:	5b                   	pop    %ebx
 8ace652:	5d                   	pop    %ebp
 8ace653:	c3                   	ret
 8ace654:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace658:	8b 41 08             	mov    0x8(%ecx),%eax
 8ace65b:	81 c4 14 01 00 00    	add    $0x114,%esp
 8ace661:	5b                   	pop    %ebx
 8ace662:	5d                   	pop    %ebp
 8ace663:	c3                   	ret
 8ace664:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace668:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8ace66f:	00 
 8ace670:	8b 41 1c             	mov    0x1c(%ecx),%eax
 8ace673:	8d 9d f8 fe ff ff    	lea    -0x108(%ebp),%ebx
 8ace679:	89 1c 24             	mov    %ebx,(%esp)
 8ace67c:	83 c0 01             	add    $0x1,%eax
 8ace67f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ace683:	e8 48 f2 5a ff       	call   807d8d0 <strncpy@plt>
 8ace688:	89 da                	mov    %ebx,%edx
 8ace68a:	8b 0a                	mov    (%edx),%ecx
 8ace68c:	83 c2 04             	add    $0x4,%edx
 8ace68f:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 8ace695:	f7 d1                	not    %ecx
 8ace697:	21 c8                	and    %ecx,%eax
 8ace699:	25 80 80 80 80       	and    $0x80808080,%eax
 8ace69e:	74 ea                	je     8ace68a <_ZN13DNFLexWrapper10getPairIntEv+0x5a>
 8ace6a0:	a9 80 80 00 00       	test   $0x8080,%eax
 8ace6a5:	75 06                	jne    8ace6ad <_ZN13DNFLexWrapper10getPairIntEv+0x7d>
 8ace6a7:	c1 e8 10             	shr    $0x10,%eax
 8ace6aa:	83 c2 02             	add    $0x2,%edx
 8ace6ad:	00 c0                	add    %al,%al
 8ace6af:	83 da 03             	sbb    $0x3,%edx
 8ace6b2:	29 da                	sub    %ebx,%edx
 8ace6b4:	89 1c 24             	mov    %ebx,(%esp)
 8ace6b7:	c6 84 15 f7 fe ff ff 	movb   $0x0,-0x109(%ebp,%edx,1)
 8ace6be:	00 
 8ace6bf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8ace6c6:	00 
 8ace6c7:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8ace6ce:	00 
 8ace6cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ace6d6:	00 
 8ace6d7:	e8 e4 f9 5a ff       	call   807e0c0 <__strtol_internal@plt>
 8ace6dc:	81 c4 14 01 00 00    	add    $0x114,%esp
 8ace6e2:	5b                   	pop    %ebx
 8ace6e3:	5d                   	pop    %ebp
 8ace6e4:	c3                   	ret
 8ace6e5:	90                   	nop
 8ace6e6:	8d 76 00             	lea    0x0(%esi),%esi
 8ace6e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::getPairInt @ 0x8ace630

/* DWARF original prototype: int getPairInt(DNFLexWrapper * this) */

int __thiscall DNFLexWrapper::getPairInt(DNFLexWrapper *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *__dest;
  char local_110 [4];
  uint local_10c [65];
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
                    /* Unresolved local var: char[256] buffer@[???] */
    __dest = local_10c;
    strncpy((char *)__dest,(this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 1,
            0x100);
    puVar5 = __dest;
    do {
      puVar4 = puVar5;
      puVar5 = puVar4 + 1;
      uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar2 = uVar1 & 0x80808080;
    } while (uVar2 == 0);
    if ((uVar1 & 0x8080) == 0) {
      uVar2 = uVar2 >> 0x10;
      puVar5 = (uint *)((int)puVar4 + 6);
    }
    *(char *)((int)puVar5 +
             (int)local_10c + (-(int)__dest - (uint)CARRY1((byte)uVar2,(byte)uVar2)) + -4) = '\0';
    local_110[0] = '\0';
    local_110[1] = '\0';
    local_110[2] = '\0';
    local_110[3] = '\0';
    iVar3 = __strtol_internal(__dest,0,10);
    return iVar3;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return 0;
  }
  return this->lastIntValue_;
}

```

---

## getPairStr

```asm
// === 08ace5a0 DNFLexWrapper::getPairStr  [0x08ace5a0-0x8ace62f] ===
 8ace5a0:	55                   	push   %ebp
 8ace5a1:	89 e5                	mov    %esp,%ebp
 8ace5a3:	83 ec 18             	sub    $0x18,%esp
 8ace5a6:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace5a9:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace5ac:	85 c9                	test   %ecx,%ecx
 8ace5ae:	75 60                	jne    8ace610 <_ZN13DNFLexWrapper10getPairStrEv+0x70>
 8ace5b0:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 8ace5b7:	00 
 8ace5b8:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace5bb:	c7 04 24 00 19 50 09 	movl   $0x9501900,(%esp)
 8ace5c2:	83 c0 01             	add    $0x1,%eax
 8ace5c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ace5c9:	e8 02 f3 5a ff       	call   807d8d0 <strncpy@plt>
 8ace5ce:	ba 00 19 50 09       	mov    $0x9501900,%edx
 8ace5d3:	8b 0a                	mov    (%edx),%ecx
 8ace5d5:	83 c2 04             	add    $0x4,%edx
 8ace5d8:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 8ace5de:	f7 d1                	not    %ecx
 8ace5e0:	21 c8                	and    %ecx,%eax
 8ace5e2:	25 80 80 80 80       	and    $0x80808080,%eax
 8ace5e7:	74 ea                	je     8ace5d3 <_ZN13DNFLexWrapper10getPairStrEv+0x33>
 8ace5e9:	a9 80 80 00 00       	test   $0x8080,%eax
 8ace5ee:	74 30                	je     8ace620 <_ZN13DNFLexWrapper10getPairStrEv+0x80>
 8ace5f0:	00 c0                	add    %al,%al
 8ace5f2:	b8 00 19 50 09       	mov    $0x9501900,%eax
 8ace5f7:	83 da 03             	sbb    $0x3,%edx
 8ace5fa:	81 ea 00 19 50 09    	sub    $0x9501900,%edx
 8ace600:	c6 82 ff 18 50 09 00 	movb   $0x0,0x95018ff(%edx)
 8ace607:	c9                   	leave
 8ace608:	c3                   	ret
 8ace609:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace610:	31 c0                	xor    %eax,%eax
 8ace612:	83 f9 01             	cmp    $0x1,%ecx
 8ace615:	75 f0                	jne    8ace607 <_ZN13DNFLexWrapper10getPairStrEv+0x67>
 8ace617:	8b 42 10             	mov    0x10(%edx),%eax
 8ace61a:	c9                   	leave
 8ace61b:	c3                   	ret
 8ace61c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace620:	c1 e8 10             	shr    $0x10,%eax
 8ace623:	83 c2 02             	add    $0x2,%edx
 8ace626:	eb c8                	jmp    8ace5f0 <_ZN13DNFLexWrapper10getPairStrEv+0x50>
 8ace628:	90                   	nop
 8ace629:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getPairStr @ 0x8ace5a0

/* DWARF original prototype: char * getPairStr(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getPairStr(DNFLexWrapper *this)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    strncpy(getPairStr::lexical_block_0::buffer,
            (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext + 1,0x100);
    puVar5 = (uint *)getPairStr::lexical_block_0::buffer;
    do {
      puVar4 = puVar5;
      puVar5 = puVar4 + 1;
      uVar1 = *puVar4 + 0xfefefeff & ~*puVar4;
      uVar2 = uVar1 & 0x80808080;
    } while (uVar2 == 0);
    if ((uVar1 & 0x8080) == 0) {
      uVar2 = uVar2 >> 0x10;
      puVar5 = (uint *)((int)puVar4 + 6);
    }
    pcVar3 = getPairStr::lexical_block_0::buffer;
    *(undefined1 *)((int)puVar5 + (-4 - (uint)CARRY1((byte)uVar2,(byte)uVar2))) = 0;
  }
  else {
    pcVar3 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar3;
}

```

---

## getStreamName

```asm
// === 08ace8a0 DNFLexWrapper::getStreamName  [0x08ace8a0-0x8ace8ff] ===
 8ace8a0:	55                   	push   %ebp
 8ace8a1:	89 e5                	mov    %esp,%ebp
 8ace8a3:	53                   	push   %ebx
 8ace8a4:	83 ec 24             	sub    $0x24,%esp
 8ace8a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ace8aa:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ace8ad:	8b 50 14             	mov    0x14(%eax),%edx
 8ace8b0:	85 d2                	test   %edx,%edx
 8ace8b2:	74 24                	je     8ace8d8 <_ZN13DNFLexWrapper13getStreamNameEv+0x38>
 8ace8b4:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ace8b7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ace8bb:	c7 44 24 04 1f eb e2 	movl   $0x8e2eb1f,0x4(%esp)
 8ace8c2:	08 
 8ace8c3:	89 1c 24             	mov    %ebx,(%esp)
 8ace8c6:	e8 65 8d c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ace8cb:	89 d8                	mov    %ebx,%eax
 8ace8cd:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ace8d0:	c9                   	leave
 8ace8d1:	c2 04 00             	ret    $0x4
 8ace8d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace8d8:	83 c0 18             	add    $0x18,%eax
 8ace8db:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ace8df:	89 1c 24             	mov    %ebx,(%esp)
 8ace8e2:	e8 29 ea ff ff       	call   8acd310 <_ZN6DNFLex13getStreamNameEv>
 8ace8e7:	89 d8                	mov    %ebx,%eax
 8ace8e9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ace8ec:	83 ec 04             	sub    $0x4,%esp
 8ace8ef:	c9                   	leave
 8ace8f0:	c2 04 00             	ret    $0x4
 8ace8f3:	89 04 24             	mov    %eax,(%esp)
 8ace8f6:	e8 55 4e 01 00       	call   8ae3750 <_Unwind_Resume>
 8ace8fb:	90                   	nop
 8ace8fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::getStreamName @ 0x8ace8a0

/* DWARF original prototype: tstring getStreamName(DNFLexWrapper * this) */

tstring __thiscall DNFLexWrapper::getStreamName(DNFLexWrapper *this)

{
  int in_stack_00000008;
  allocator local_d [5];
  
  if (*(int *)(in_stack_00000008 + 0x14) != 0) {
                    /* try { // try from 08ace8c6 to 08ace8ca has its CatchHandler @ 08ace8f3 */
    std::string::string((string *)this,"NONE",local_d);
    return (tstring)(_Alloc_hider)this;
  }
  DNFLex::getStreamName((DNFLex *)this);
  return (tstring)(_Alloc_hider)this;
}

```

---

## getString

```asm
// === 08ace6f0 DNFLexWrapper::getString  [0x08ace6f0-0x8ace72f] ===
 8ace6f0:	55                   	push   %ebp
 8ace6f1:	89 e5                	mov    %esp,%ebp
 8ace6f3:	83 ec 08             	sub    $0x8,%esp
 8ace6f6:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace6f9:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace6fc:	85 c9                	test   %ecx,%ecx
 8ace6fe:	75 10                	jne    8ace710 <_ZN13DNFLexWrapper9getStringEv+0x20>
 8ace700:	83 c2 18             	add    $0x18,%edx
 8ace703:	89 55 08             	mov    %edx,0x8(%ebp)
 8ace706:	c9                   	leave
 8ace707:	e9 e4 ea ff ff       	jmp    8acd1f0 <_ZN6DNFLex7tok_strEv>
 8ace70c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ace710:	31 c0                	xor    %eax,%eax
 8ace712:	83 f9 01             	cmp    $0x1,%ecx
 8ace715:	74 09                	je     8ace720 <_ZN13DNFLexWrapper9getStringEv+0x30>
 8ace717:	c9                   	leave
 8ace718:	c3                   	ret
 8ace719:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ace720:	8b 42 10             	mov    0x10(%edx),%eax
 8ace723:	c9                   	leave
 8ace724:	c3                   	ret
 8ace725:	90                   	nop
 8ace726:	8d 76 00             	lea    0x0(%esi),%esi
 8ace729:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::getString @ 0x8ace6f0

/* DWARF original prototype: char * getString(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getString(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = DNFLex::tok_str(&this->dnfLex_);
    return pcVar1;
  }
  if (this->lexType_ != LEX_TYPE_COMPILED) {
    return (char *)0x0;
  }
  return this->lastStringValue_;
}

```

---

## getToken

```asm
// === 08ace7e0 DNFLexWrapper::getToken  [0x08ace7e0-0x8ace89f] ===
 8ace7e0:	55                   	push   %ebp
 8ace7e1:	89 e5                	mov    %esp,%ebp
 8ace7e3:	83 ec 18             	sub    $0x18,%esp
 8ace7e6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ace7e9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ace7ec:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ace7ef:	8b 43 14             	mov    0x14(%ebx),%eax
 8ace7f2:	85 c0                	test   %eax,%eax
 8ace7f4:	74 12                	je     8ace808 <_ZN13DNFLexWrapper8getTokenEv+0x28>
 8ace7f6:	83 f8 01             	cmp    $0x1,%eax
 8ace7f9:	74 25                	je     8ace820 <_ZN13DNFLexWrapper8getTokenEv+0x40>
 8ace7fb:	8b 43 04             	mov    0x4(%ebx),%eax
 8ace7fe:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ace801:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ace804:	89 ec                	mov    %ebp,%esp
 8ace806:	5d                   	pop    %ebp
 8ace807:	c3                   	ret
 8ace808:	8d 43 18             	lea    0x18(%ebx),%eax
 8ace80b:	89 04 24             	mov    %eax,(%esp)
 8ace80e:	e8 8d f2 ff ff       	call   8acdaa0 <_ZN6DNFLex14get_next_tokenEv>
 8ace813:	89 43 04             	mov    %eax,0x4(%ebx)
 8ace816:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ace819:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ace81c:	89 ec                	mov    %ebp,%esp
 8ace81e:	5d                   	pop    %ebp
 8ace81f:	c3                   	ret
 8ace820:	8d b3 bc 40 00 00    	lea    0x40bc(%ebx),%esi
 8ace826:	89 34 24             	mov    %esi,(%esp)
 8ace829:	e8 72 27 00 00       	call   8ad0fa0 <_ZN14CompiledDNFLex8getTokenEv>
 8ace82e:	83 f8 01             	cmp    $0x1,%eax
 8ace831:	89 43 04             	mov    %eax,0x4(%ebx)
 8ace834:	76 c8                	jbe    8ace7fe <_ZN13DNFLexWrapper8getTokenEv+0x1e>
 8ace836:	8d 50 fe             	lea    -0x2(%eax),%edx
 8ace839:	83 fa 01             	cmp    $0x1,%edx
 8ace83c:	76 22                	jbe    8ace860 <_ZN13DNFLexWrapper8getTokenEv+0x80>
 8ace83e:	83 f8 09             	cmp    $0x9,%eax
 8ace841:	74 1d                	je     8ace860 <_ZN13DNFLexWrapper8getTokenEv+0x80>
 8ace843:	83 f8 04             	cmp    $0x4,%eax
 8ace846:	74 30                	je     8ace878 <_ZN13DNFLexWrapper8getTokenEv+0x98>
 8ace848:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ace84f:	00 
 8ace850:	89 34 24             	mov    %esi,(%esp)
 8ace853:	e8 f8 19 00 00       	call   8ad0250 <_ZN14CompiledDNFLex6getStrEPb>
 8ace858:	89 43 10             	mov    %eax,0x10(%ebx)
 8ace85b:	eb 9e                	jmp    8ace7fb <_ZN13DNFLexWrapper8getTokenEv+0x1b>
 8ace85d:	8d 76 00             	lea    0x0(%esi),%esi
 8ace860:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ace867:	00 
 8ace868:	89 34 24             	mov    %esi,(%esp)
 8ace86b:	e8 00 17 00 00       	call   8acff70 <_ZN14CompiledDNFLex6getIntEPb>
 8ace870:	89 43 08             	mov    %eax,0x8(%ebx)
 8ace873:	8b 43 04             	mov    0x4(%ebx),%eax
 8ace876:	eb 86                	jmp    8ace7fe <_ZN13DNFLexWrapper8getTokenEv+0x1e>
 8ace878:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ace87f:	00 
 8ace880:	89 34 24             	mov    %esi,(%esp)
 8ace883:	e8 38 17 00 00       	call   8acffc0 <_ZN14CompiledDNFLex8getFloatEPb>
 8ace888:	8b 43 04             	mov    0x4(%ebx),%eax
 8ace88b:	d9 5b 0c             	fstps  0xc(%ebx)
 8ace88e:	e9 6b ff ff ff       	jmp    8ace7fe <_ZN13DNFLexWrapper8getTokenEv+0x1e>
 8ace893:	90                   	nop
 8ace894:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace89a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::getToken @ 0x8ace7e0

/* DWARF original prototype: DNFLEX_TOKEN getToken(DNFLexWrapper * this) */

DNFLEX_TOKEN __thiscall DNFLexWrapper::getToken(DNFLexWrapper *this)

{
  CompiledDNFLex *this_00;
  DNFLEX_TOKEN DVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    DVar1 = DNFLex::get_next_token(&this->dnfLex_);
    this->lastToken_ = DVar1;
    return DVar1;
  }
  if (this->lexType_ == LEX_TYPE_COMPILED) {
    this_00 = &this->compiledDnfLex_;
    DVar1 = CompiledDNFLex::getToken(this_00);
    this->lastToken_ = DVar1;
    if (DVar1 < DNF_TOK_DECIMAL) {
      return DVar1;
    }
    if ((DVar1 - DNF_TOK_DECIMAL < 2) || (DVar1 == DNF_TOK_PAIR_INT)) {
      iVar3 = CompiledDNFLex::getInt(this_00,(bool *)0x0);
      this->lastIntValue_ = iVar3;
      return this->lastToken_;
    }
    if (DVar1 == DNF_TOK_FLOAT) {
      fVar4 = CompiledDNFLex::getFloat(this_00,(bool *)0x0);
      this->lastFloatValue_ = fVar4;
      return this->lastToken_;
    }
    pcVar2 = CompiledDNFLex::getStr(this_00,(bool *)0x0);
    this->lastStringValue_ = pcVar2;
  }
  return this->lastToken_;
}

```

---

## getType

```asm
// === 08ace390 DNFLexWrapper::getType  [0x08ace390-0x8ace3bf] ===
 8ace390:	55                   	push   %ebp
 8ace391:	89 e5                	mov    %esp,%ebp
 8ace393:	8b 55 08             	mov    0x8(%ebp),%edx
 8ace396:	8b 4a 14             	mov    0x14(%edx),%ecx
 8ace399:	85 c9                	test   %ecx,%ecx
 8ace39b:	75 0b                	jne    8ace3a8 <_ZN13DNFLexWrapper7getTypeEv+0x18>
 8ace39d:	8b 42 1c             	mov    0x1c(%edx),%eax
 8ace3a0:	5d                   	pop    %ebp
 8ace3a1:	c3                   	ret
 8ace3a2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace3a8:	31 c0                	xor    %eax,%eax
 8ace3aa:	83 f9 01             	cmp    $0x1,%ecx
 8ace3ad:	75 f1                	jne    8ace3a0 <_ZN13DNFLexWrapper7getTypeEv+0x10>
 8ace3af:	8b 42 10             	mov    0x10(%edx),%eax
 8ace3b2:	5d                   	pop    %ebp
 8ace3b3:	c3                   	ret
 8ace3b4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ace3ba:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// DNFLexWrapper::getType @ 0x8ace390

/* DWARF original prototype: char * getType(DNFLexWrapper * this) */

char * __thiscall DNFLexWrapper::getType(DNFLexWrapper *this)

{
  char *pcVar1;
  
  if (this->lexType_ == LEX_TYPE_NORMAL) {
    pcVar1 = (this->dnfLex_).super___dnf_script__FlexLexer.super_FlexLexer.yytext;
  }
  else {
    pcVar1 = (char *)0x0;
    if (this->lexType_ == LEX_TYPE_COMPILED) {
      return this->lastStringValue_;
    }
  }
  return pcVar1;
}

```

---

## setFileStreamData

```asm
// === 08acede0 DNFLexWrapper::setFileStreamData  [0x08acede0-0x8acf05f] ===
 8acede0:	55                   	push   %ebp
 8acede1:	89 e5                	mov    %esp,%ebp
 8acede3:	83 ec 48             	sub    $0x48,%esp
 8acede6:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acede9:	8b 7d 10             	mov    0x10(%ebp),%edi
 8acedec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acedef:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acedf2:	85 ff                	test   %edi,%edi
 8acedf4:	75 12                	jne    8acee08 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x28>
 8acedf6:	31 c0                	xor    %eax,%eax
 8acedf8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acedfb:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acedfe:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acee01:	89 ec                	mov    %ebp,%esp
 8acee03:	5d                   	pop    %ebp
 8acee04:	c3                   	ret
 8acee05:	8d 76 00             	lea    0x0(%esi),%esi
 8acee08:	8b 75 0c             	mov    0xc(%ebp),%esi
 8acee0b:	85 f6                	test   %esi,%esi
 8acee0d:	74 e7                	je     8acedf6 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x16>
 8acee0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acee12:	89 04 24             	mov    %eax,(%esp)
 8acee15:	e8 26 e3 ff ff       	call   8acd140 <_ZN6DNFLex13stream_data_t5clearEv>
 8acee1a:	c7 04 24 18 01 00 00 	movl   $0x118,(%esp)
 8acee21:	e8 2a 56 c5 ff       	call   8724450 <_Znwj>
 8acee26:	8d b0 90 00 00 00    	lea    0x90(%eax),%esi
 8acee2c:	89 c3                	mov    %eax,%ebx
 8acee2e:	89 34 24             	mov    %esi,(%esp)
 8acee31:	e8 ba 82 c5 ff       	call   87270f0 <_ZNSt8ios_baseC1Ev>
 8acee36:	8b 15 6c 26 d0 08    	mov    0x8d0266c,%edx
 8acee3c:	c6 46 74 00          	movb   $0x0,0x74(%esi)
 8acee40:	8b 0d 70 26 d0 08    	mov    0x8d02670,%ecx
 8acee46:	c7 83 90 00 00 00 70 	movl   $0x8cfe970,0x90(%ebx)
 8acee4d:	e9 cf 08 
 8acee50:	c7 46 70 00 00 00 00 	movl   $0x0,0x70(%esi)
 8acee57:	8b 42 f4             	mov    -0xc(%edx),%eax
 8acee5a:	89 13                	mov    %edx,(%ebx)
 8acee5c:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8acee63:	c6 46 75 00          	movb   $0x0,0x75(%esi)
 8acee67:	89 0c 03             	mov    %ecx,(%ebx,%eax,1)
 8acee6a:	c7 46 78 00 00 00 00 	movl   $0x0,0x78(%esi)
 8acee71:	c7 46 7c 00 00 00 00 	movl   $0x0,0x7c(%esi)
 8acee78:	c7 86 80 00 00 00 00 	movl   $0x0,0x80(%esi)
 8acee7f:	00 00 00 
 8acee82:	c7 86 84 00 00 00 00 	movl   $0x0,0x84(%esi)
 8acee89:	00 00 00 
 8acee8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acee93:	00 
 8acee94:	8b 03                	mov    (%ebx),%eax
 8acee96:	8b 40 f4             	mov    -0xc(%eax),%eax
 8acee99:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8acee9c:	89 04 24             	mov    %eax,(%esp)
 8acee9f:	e8 3c 20 c1 ff       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 8aceea4:	c7 03 4c 26 d0 08    	movl   $0x8d0264c,(%ebx)
 8aceeaa:	8d 7b 08             	lea    0x8(%ebx),%edi
 8aceead:	c7 83 90 00 00 00 60 	movl   $0x8d02660,0x90(%ebx)
 8aceeb4:	26 d0 08 
 8aceeb7:	89 3c 24             	mov    %edi,(%esp)
 8aceeba:	e8 81 8d c5 ff       	call   8727c40 <_ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev>
 8aceebf:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8aceec3:	89 34 24             	mov    %esi,(%esp)
 8aceec6:	e8 15 20 c1 ff       	call   86e0ee0 <_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E>
 8aceecb:	8b 45 10             	mov    0x10(%ebp),%eax
 8aceece:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8aceed5:	00 
 8aceed6:	89 3c 24             	mov    %edi,(%esp)
 8aceed9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8aceedd:	e8 0e 9f c5 ff       	call   8728df0 <_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode>
 8aceee2:	85 c0                	test   %eax,%eax
 8aceee4:	0f 84 e6 00 00 00    	je     8acefd0 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x1f0>
 8aceeea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8aceef1:	00 
 8aceef2:	8b 03                	mov    (%ebx),%eax
 8aceef4:	8b 40 f4             	mov    -0xc(%eax),%eax
 8aceef7:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8aceefa:	89 04 24             	mov    %eax,(%esp)
 8aceefd:	e8 9e 1e c1 ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 8acef02:	8d 43 40             	lea    0x40(%ebx),%eax
 8acef05:	89 04 24             	mov    %eax,(%esp)
 8acef08:	e8 73 36 c5 ff       	call   8722580 <_ZNKSt12__basic_fileIcE7is_openEv>
 8acef0d:	84 c0                	test   %al,%al
 8acef0f:	74 17                	je     8acef28 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x148>
 8acef11:	8b 03                	mov    (%ebx),%eax
 8acef13:	8b 50 f4             	mov    -0xc(%eax),%edx
 8acef16:	f6 44 13 14 01       	testb  $0x1,0x14(%ebx,%edx,1)
 8acef1b:	74 13                	je     8acef30 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x150>
 8acef1d:	89 1c 24             	mov    %ebx,(%esp)
 8acef20:	ff 50 04             	call   *0x4(%eax)
 8acef23:	e9 ce fe ff ff       	jmp    8acedf6 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x16>
 8acef28:	8b 03                	mov    (%ebx),%eax
 8acef2a:	eb f1                	jmp    8acef1d <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x13d>
 8acef2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acef30:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8acef37:	00 
 8acef38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acef3f:	00 
 8acef40:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8acef47:	00 
 8acef48:	89 1c 24             	mov    %ebx,(%esp)
 8acef4b:	e8 80 3a c1 ff       	call   86e29d0 <_ZNSi5seekgExSt12_Ios_Seekdir>
 8acef50:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8acef53:	89 04 24             	mov    %eax,(%esp)
 8acef56:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8acef5a:	e8 31 38 c1 ff       	call   86e2790 <_ZNSi5tellgEv>
 8acef5f:	8b 75 d8             	mov    -0x28(%ebp),%esi
 8acef62:	83 ec 04             	sub    $0x4,%esp
 8acef65:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8acef6c:	00 
 8acef6d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acef74:	00 
 8acef75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8acef7c:	00 
 8acef7d:	89 1c 24             	mov    %ebx,(%esp)
 8acef80:	e8 4b 3a c1 ff       	call   86e29d0 <_ZNSi5seekgExSt12_Ios_Seekdir>
 8acef85:	85 f6                	test   %esi,%esi
 8acef87:	75 2f                	jne    8acefb8 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x1d8>
 8acef89:	8b 03                	mov    (%ebx),%eax
 8acef8b:	89 1c 24             	mov    %ebx,(%esp)
 8acef8e:	ff 50 04             	call   *0x4(%eax)
 8acef91:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acef94:	8b 45 08             	mov    0x8(%ebp),%eax
 8acef97:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8acef9e:	00 
 8acef9f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8acefa6:	00 
 8acefa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acefab:	89 04 24             	mov    %eax,(%esp)
 8acefae:	e8 fd f9 ff ff       	call   8ace9b0 <_ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj>
 8acefb3:	e9 40 fe ff ff       	jmp    8acedf8 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x18>
 8acefb8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acefbb:	89 18                	mov    %ebx,(%eax)
 8acefbd:	89 70 04             	mov    %esi,0x4(%eax)
 8acefc0:	b8 01 00 00 00       	mov    $0x1,%eax
 8acefc5:	e9 2e fe ff ff       	jmp    8acedf8 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x18>
 8acefca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acefd0:	8b 03                	mov    (%ebx),%eax
 8acefd2:	8b 50 f4             	mov    -0xc(%eax),%edx
 8acefd5:	01 da                	add    %ebx,%edx
 8acefd7:	8b 42 14             	mov    0x14(%edx),%eax
 8acefda:	89 14 24             	mov    %edx,(%esp)
 8acefdd:	83 c8 04             	or     $0x4,%eax
 8acefe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acefe4:	e8 b7 1d c1 ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 8acefe9:	e9 14 ff ff ff       	jmp    8acef02 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x122>
 8acefee:	83 fa ff             	cmp    $0xffffffff,%edx
 8aceff1:	74 5b                	je     8acf04e <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x26e>
 8aceff3:	89 04 24             	mov    %eax,(%esp)
 8aceff6:	e8 55 47 01 00       	call   8ae3750 <_Unwind_Resume>
 8aceffb:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8aceffe:	89 1c 24             	mov    %ebx,(%esp)
 8acf001:	e8 ea 54 c5 ff       	call   87244f0 <_ZdlPv>
 8acf006:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acf009:	89 04 24             	mov    %eax,(%esp)
 8acf00c:	e8 3f 47 01 00       	call   8ae3750 <_Unwind_Resume>
 8acf011:	8b 15 6c 26 d0 08    	mov    0x8d0266c,%edx
 8acf017:	8b 0d 70 26 d0 08    	mov    0x8d02670,%ecx
 8acf01d:	89 13                	mov    %edx,(%ebx)
 8acf01f:	8b 52 f4             	mov    -0xc(%edx),%edx
 8acf022:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8acf029:	89 0c 13             	mov    %ecx,(%ebx,%edx,1)
 8acf02c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acf02f:	89 34 24             	mov    %esi,(%esp)
 8acf032:	e8 d9 1b c1 ff       	call   86e0c10 <_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev>
 8acf037:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acf03a:	eb bf                	jmp    8aceffb <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x21b>
 8acf03c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acf03f:	89 3c 24             	mov    %edi,(%esp)
 8acf042:	e8 89 a1 c5 ff       	call   87291d0 <_ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev>
 8acf047:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acf04a:	eb c5                	jmp    8acf011 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x231>
 8acf04c:	eb de                	jmp    8acf02c <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc+0x24c>
 8acf04e:	89 04 24             	mov    %eax,(%esp)
 8acf051:	e8 9a 4d c5 ff       	call   8723df0 <__cxa_call_unexpected>
 8acf056:	8d 76 00             	lea    0x0(%esi),%esi
 8acf059:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// DNFLexWrapper::setFileStreamData @ 0x8acede0

/* DWARF original prototype: bool setFileStreamData(DNFLexWrapper * this, stream_data_t * s, TCHAR *
   path) */

bool __thiscall DNFLexWrapper::setFileStreamData(DNFLexWrapper *this,stream_data_t *s,TCHAR *path)

{
  filebuf *this_00;
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  istream *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint local_2c;
  
                    /* Unresolved local var: ifstream * ifs@[???]
                       Unresolved local var: uint32 size@[???] */
  if ((path != (TCHAR *)0x0) && (s != (stream_data_t *)0x0)) {
    DNFLex::stream_data_t::clear(s);
    piVar5 = operator_new(0x118);
                    /* try { // try from 08acee31 to 08acee35 has its CatchHandler @ 08aceffb */
    std::ios_base::ios_base((ios_base *)(piVar5 + 0x90));
    puVar1 = PTR_PTR_08d0266c;
    piVar5[0x104] = (istream)0x0;
    puVar2 = PTR_PTR_08d02670;
    *(undefined ***)(piVar5 + 0x90) = &PTR__ios_08cfe970;
    *(int *)(piVar5 + 0x100) = 0;
    iVar6 = *(int *)(puVar1 + -0xc);
    *(undefined **)piVar5 = puVar1;
    *(int *)(piVar5 + 4) = 0;
    piVar5[0x105] = (istream)0x0;
    *(undefined **)(piVar5 + iVar6) = puVar2;
    *(int *)(piVar5 + 0x108) = 0;
    *(int *)(piVar5 + 0x10c) = 0;
    *(int *)(piVar5 + 0x110) = 0;
    *(int *)(piVar5 + 0x114) = 0;
                    /* try { // try from 08acee9f to 08aceea3 has its CatchHandler @ 08acf04c */
    std::ios::init((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),(streambuf *)0x0);
    *(undefined ***)piVar5 = &PTR__ifstream_08d0264c;
    this_00 = (filebuf *)(piVar5 + 8);
    *(undefined ***)(piVar5 + 0x90) = &PTR__ifstream_08d02660;
                    /* try { // try from 08aceeba to 08aceebe has its CatchHandler @ 08acf011 */
    std::filebuf::filebuf(this_00);
                    /* try { // try from 08aceec6 to 08acef01 has its CatchHandler @ 08acf03c */
    std::ios::init((ios *)(piVar5 + 0x90),(streambuf *)this_00);
    iVar6 = std::filebuf::open(this_00,path,_S_in|_S_bin);
    if (iVar6 == 0) {
                    /* try { // try from 08acefe4 to 08acefe8 has its CatchHandler @ 08acf03c */
      std::ios::clear((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),
                      *(_Ios_Iostate *)((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)) + 0x14) |
                      _S_failbit);
    }
    else {
      std::ios::clear((ios *)(piVar5 + *(int *)(*(int *)piVar5 + -0xc)),_S_goodbit);
    }
                    /* try { // try from 08acef08 to 08acef0c has its CatchHandler @ 08acefee */
    cVar3 = std::__basic_file<char>::is_open((__basic_file<char> *)(piVar5 + 0x40));
    if (cVar3 == '\0') {
      iVar6 = *(int *)piVar5;
    }
    else {
      iVar6 = *(int *)piVar5;
      if (((byte)piVar5[*(int *)(iVar6 + -0xc) + 0x14] & 1) == 0) {
        std::istream::seekg(ZEXT48(piVar5),_S_beg);
        std::istream::tellg();
        uVar9 = 0;
        uVar7 = 0;
        uVar8 = 0;
        std::istream::seekg(ZEXT48(piVar5),_S_beg);
        if (local_2c == 0) {
          (**(code **)(*(int *)piVar5 + 4))(piVar5,uVar7,uVar8,uVar9);
          bVar4 = setStringStreamData(this,s,(char *)0x0,0);
          return bVar4;
        }
        s->stream = piVar5;
        s->size = local_2c;
        return true;
      }
    }
    (**(code **)(iVar6 + 4))(piVar5);
  }
  return false;
}

```

---

## setLexType

```asm
// === 08ace290 DNFLexWrapper::setLexType  [0x08ace290-0x8ace29f] ===
 8ace290:	55                   	push   %ebp
 8ace291:	89 e5                	mov    %esp,%ebp
 8ace293:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ace296:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace299:	89 50 14             	mov    %edx,0x14(%eax)
 8ace29c:	5d                   	pop    %ebp
 8ace29d:	c3                   	ret
 8ace29e:	66 90                	xchg   %ax,%ax

```

```c
// DNFLexWrapper::setLexType @ 0x8ace290

/* DWARF original prototype: void setLexType(DNFLexWrapper * this, ENUM_LEX_TYPE lexType) */

void __thiscall DNFLexWrapper::setLexType(DNFLexWrapper *this,ENUM_LEX_TYPE lexType)

{
  this->lexType_ = lexType;
  return;
}

```

---

## setStringStreamData

```asm
// === 08ace9b0 DNFLexWrapper::setStringStreamData  [0x08ace9b0-0x8acea6f] ===
 8ace9b0:	55                   	push   %ebp
 8ace9b1:	89 e5                	mov    %esp,%ebp
 8ace9b3:	83 ec 28             	sub    $0x28,%esp
 8ace9b6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ace9b9:	8b 75 14             	mov    0x14(%ebp),%esi
 8ace9bc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ace9bf:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ace9c2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ace9c5:	85 f6                	test   %esi,%esi
 8ace9c7:	74 3f                	je     8acea08 <_ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj+0x58>
 8ace9c9:	c7 04 24 bc 00 00 00 	movl   $0xbc,(%esp)
 8ace9d0:	e8 7b 5a c5 ff       	call   8724450 <_Znwj>
 8ace9d5:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ace9d9:	89 c7                	mov    %eax,%edi
 8ace9db:	8b 45 10             	mov    0x10(%ebp),%eax
 8ace9de:	89 3c 24             	mov    %edi,(%esp)
 8ace9e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ace9e5:	e8 f6 01 c1 ff       	call   86debe0 <_ZNSt10istrstreamC1EPci>
 8ace9ea:	8b 45 10             	mov    0x10(%ebp),%eax
 8ace9ed:	89 3b                	mov    %edi,(%ebx)
 8ace9ef:	89 73 04             	mov    %esi,0x4(%ebx)
 8ace9f2:	89 43 08             	mov    %eax,0x8(%ebx)
 8ace9f5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ace9f8:	b8 01 00 00 00       	mov    $0x1,%eax
 8ace9fd:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acea00:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acea03:	89 ec                	mov    %ebp,%esp
 8acea05:	5d                   	pop    %ebp
 8acea06:	c3                   	ret
 8acea07:	90                   	nop
 8acea08:	8b 45 10             	mov    0x10(%ebp),%eax
 8acea0b:	89 04 24             	mov    %eax,(%esp)
 8acea0e:	e8 dd 5a c5 ff       	call   87244f0 <_ZdlPv>
 8acea13:	c7 04 24 bc 00 00 00 	movl   $0xbc,(%esp)
 8acea1a:	e8 31 5a c5 ff       	call   8724450 <_Znwj>
 8acea1f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acea26:	00 
 8acea27:	89 c6                	mov    %eax,%esi
 8acea29:	a1 50 ec e2 08       	mov    0x8e2ec50,%eax
 8acea2e:	89 34 24             	mov    %esi,(%esp)
 8acea31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acea35:	e8 b6 fe c0 ff       	call   86de8f0 <_ZNSt10istrstreamC1EPKci>
 8acea3a:	89 33                	mov    %esi,(%ebx)
 8acea3c:	c7 43 04 01 00 00 00 	movl   $0x1,0x4(%ebx)
 8acea43:	eb b0                	jmp    8ace9f5 <_ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj+0x45>
 8acea45:	89 c3                	mov    %eax,%ebx
 8acea47:	89 3c 24             	mov    %edi,(%esp)
 8acea4a:	e8 a1 5a c5 ff       	call   87244f0 <_ZdlPv>
 8acea4f:	89 1c 24             	mov    %ebx,(%esp)
 8acea52:	e8 f9 4c 01 00       	call   8ae3750 <_Unwind_Resume>
 8acea57:	89 c3                	mov    %eax,%ebx
 8acea59:	89 34 24             	mov    %esi,(%esp)
 8acea5c:	e8 8f 5a c5 ff       	call   87244f0 <_ZdlPv>
 8acea61:	89 1c 24             	mov    %ebx,(%esp)
 8acea64:	e8 e7 4c 01 00       	call   8ae3750 <_Unwind_Resume>
 8acea69:	90                   	nop
 8acea6a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLexWrapper::setStringStreamData @ 0x8ace9b0

/* DWARF original prototype: bool setStringStreamData(DNFLexWrapper * this, stream_data_t * s, char
   * buffer, uint32 bufferSize) */

bool __thiscall
DNFLexWrapper::setStringStreamData
          (DNFLexWrapper *this,stream_data_t *s,char *buffer,uint32 bufferSize)

{
  istrstream *piVar1;
  
  if (bufferSize == 0) {
    operator_delete(buffer);
    piVar1 = operator_new(0xbc);
                    /* try { // try from 08acea35 to 08acea39 has its CatchHandler @ 08acea57 */
    std::istrstream::istrstream(piVar1,setStringStreamData::lexical_block_0::kEmptyBuf,1);
    s->stream = (istream *)piVar1;
    s->size = 1;
  }
  else {
    piVar1 = operator_new(0xbc);
                    /* try { // try from 08ace9e5 to 08ace9e9 has its CatchHandler @ 08acea45 */
    std::istrstream::istrstream(piVar1,buffer,bufferSize);
    s->stream = (istream *)piVar1;
    s->size = bufferSize;
    s->buffer = buffer;
  }
  return true;
}

```

---

## setStringTableFromBuffer

```asm
// === 08ace560 DNFLexWrapper::setStringTableFromBuffer  [0x08ace560-0x8ace59f] ===
 8ace560:	55                   	push   %ebp
 8ace561:	89 e5                	mov    %esp,%ebp
 8ace563:	83 ec 18             	sub    $0x18,%esp
 8ace566:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace569:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ace56c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ace56f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ace572:	8b 75 10             	mov    0x10(%ebp),%esi
 8ace575:	05 bc 40 00 00       	add    $0x40bc,%eax
 8ace57a:	89 04 24             	mov    %eax,(%esp)
 8ace57d:	e8 ee 1a 00 00       	call   8ad0070 <_ZN14CompiledDNFLex16getStringManagerEv>
 8ace582:	89 75 10             	mov    %esi,0x10(%ebp)
 8ace585:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ace588:	89 5d 0c             	mov    %ebx,0xc(%ebp)
 8ace58b:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ace58e:	89 45 08             	mov    %eax,0x8(%ebp)
 8ace591:	89 ec                	mov    %ebp,%esp
 8ace593:	5d                   	pop    %ebp
 8ace594:	e9 d7 13 00 00       	jmp    8acf970 <_ZN19ScriptStringManager16importFromBufferEPKhi>
 8ace599:	90                   	nop
 8ace59a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLexWrapper::setStringTableFromBuffer @ 0x8ace560

/* DWARF original prototype: bool setStringTableFromBuffer(DNFLexWrapper * this, byte * buffer, int
   size) */

bool __thiscall DNFLexWrapper::setStringTableFromBuffer(DNFLexWrapper *this,byte *buffer,int size)

{
  bool bVar1;
  ScriptStringManager *this_00;
  
  this_00 = CompiledDNFLex::getStringManager(&this->compiledDnfLex_);
  bVar1 = ScriptStringManager::importFromBuffer(this_00,buffer,size);
  return bVar1;
}

```

---

## setStringTableFromFile

```asm
// === 08ace530 DNFLexWrapper::setStringTableFromFile  [0x08ace530-0x8ace55f] ===
 8ace530:	55                   	push   %ebp
 8ace531:	89 e5                	mov    %esp,%ebp
 8ace533:	53                   	push   %ebx
 8ace534:	83 ec 14             	sub    $0x14,%esp
 8ace537:	8b 45 08             	mov    0x8(%ebp),%eax
 8ace53a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ace53d:	05 bc 40 00 00       	add    $0x40bc,%eax
 8ace542:	89 04 24             	mov    %eax,(%esp)
 8ace545:	e8 26 1b 00 00       	call   8ad0070 <_ZN14CompiledDNFLex16getStringManagerEv>
 8ace54a:	89 5d 0c             	mov    %ebx,0xc(%ebp)
 8ace54d:	89 45 08             	mov    %eax,0x8(%ebp)
 8ace550:	83 c4 14             	add    $0x14,%esp
 8ace553:	5b                   	pop    %ebx
 8ace554:	5d                   	pop    %ebp
 8ace555:	e9 a6 17 00 00       	jmp    8acfd00 <_ZN19ScriptStringManager14importFromFileEPKc>
 8ace55a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// DNFLexWrapper::setStringTableFromFile @ 0x8ace530

/* DWARF original prototype: bool setStringTableFromFile(DNFLexWrapper * this, TCHAR * fileName) */

bool __thiscall DNFLexWrapper::setStringTableFromFile(DNFLexWrapper *this,TCHAR *fileName)

{
  bool bVar1;
  ScriptStringManager *this_00;
  
  this_00 = CompiledDNFLex::getStringManager(&this->compiledDnfLex_);
  bVar1 = ScriptStringManager::importFromFile(this_00,fileName);
  return bVar1;
}

```

---

## switchChannelInputStream

```asm
// === 08acf060 DNFLexWrapper::switchChannelInputStream  [0x08acf060-0x8acf10f] ===
 8acf060:	55                   	push   %ebp
 8acf061:	89 e5                	mov    %esp,%ebp
 8acf063:	83 ec 38             	sub    $0x38,%esp
 8acf066:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acf069:	8b 7d 10             	mov    0x10(%ebp),%edi
 8acf06c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acf06f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acf072:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acf075:	8b 75 0c             	mov    0xc(%ebp),%esi
 8acf078:	85 ff                	test   %edi,%edi
 8acf07a:	74 34                	je     8acf0b0 <_ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE+0x50>
 8acf07c:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 8acf083:	83 c3 18             	add    $0x18,%ebx
 8acf086:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8acf08a:	89 74 24 08          	mov    %esi,0x8(%esp)
 8acf08e:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 8acf095:	08 
 8acf096:	89 1c 24             	mov    %ebx,(%esp)
 8acf099:	e8 b2 e9 ff ff       	call   8acda50 <_ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE>
 8acf09e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acf0a1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acf0a4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acf0a7:	89 ec                	mov    %ebp,%esp
 8acf0a9:	5d                   	pop    %ebp
 8acf0aa:	c3                   	ret
 8acf0ab:	90                   	nop
 8acf0ac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acf0b0:	8d 7d dc             	lea    -0x24(%ebp),%edi
 8acf0b3:	89 3c 24             	mov    %edi,(%esp)
 8acf0b6:	e8 85 e0 ff ff       	call   8acd140 <_ZN6DNFLex13stream_data_t5clearEv>
 8acf0bb:	89 74 24 08          	mov    %esi,0x8(%esp)
 8acf0bf:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acf0c3:	89 1c 24             	mov    %ebx,(%esp)
 8acf0c6:	e8 15 fd ff ff       	call   8acede0 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc>
 8acf0cb:	89 c2                	mov    %eax,%edx
 8acf0cd:	31 c0                	xor    %eax,%eax
 8acf0cf:	84 d2                	test   %dl,%dl
 8acf0d1:	75 a9                	jne    8acf07c <_ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE+0x1c>
 8acf0d3:	eb c9                	jmp    8acf09e <_ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE+0x3e>
 8acf0d5:	90                   	nop
 8acf0d6:	90                   	nop
 8acf0d7:	90                   	nop
 8acf0d8:	90                   	nop
 8acf0d9:	90                   	nop
 8acf0da:	90                   	nop
 8acf0db:	90                   	nop
 8acf0dc:	90                   	nop
 8acf0dd:	90                   	nop
 8acf0de:	90                   	nop
 8acf0df:	90                   	nop

08acf0e0 <_Z10ss_sprintfILj1024EEiRAT__cPKcz>:
 8acf0e0:	55                   	push   %ebp
 8acf0e1:	89 e5                	mov    %esp,%ebp
 8acf0e3:	83 ec 18             	sub    $0x18,%esp
 8acf0e6:	8d 45 10             	lea    0x10(%ebp),%eax
 8acf0e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8acf0ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acf0f0:	c7 44 24 04 00 04 00 	movl   $0x400,0x4(%esp)
 8acf0f7:	00 
 8acf0f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf0fc:	8b 45 08             	mov    0x8(%ebp),%eax
 8acf0ff:	89 04 24             	mov    %eax,(%esp)
 8acf102:	e8 75 54 00 00       	call   8ad457c <_Z11ss_vsprintfPcjPKcS_>
 8acf107:	c9                   	leave
 8acf108:	c3                   	ret
 8acf109:	90                   	nop
 8acf10a:	90                   	nop
 8acf10b:	90                   	nop
 8acf10c:	90                   	nop
 8acf10d:	90                   	nop
 8acf10e:	90                   	nop
 8acf10f:	90                   	nop

```

```c
// DNFLexWrapper::switchChannelInputStream @ 0x8acf060

/* DWARF original prototype: bool switchChannelInputStream(DNFLexWrapper * this, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
DNFLexWrapper::switchChannelInputStream(DNFLexWrapper *this,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  stream_data_t local_28 [2];
  
                    /* Unresolved local var: stream_data_t s_created@[???] */
  if (s == (stream_data_t *)0x0) {
    s = local_28;
    DNFLex::stream_data_t::clear(s);
    bVar1 = setFileStreamData(this,s,filename);
    if (!bVar1) {
      return false;
    }
  }
  this->lexType_ = LEX_TYPE_NORMAL;
  bVar1 = DNFLex::SwitchInputStream(&this->dnfLex_,"",filename,s);
  return bVar1;
}

```

---

## switchInputStream

```asm
// === 08aceaa0 DNFLexWrapper::switchInputStream  [0x08aceaa0-0x8acec7f] ===
 8aceaa0:	55                   	push   %ebp
 8aceaa1:	89 e5                	mov    %esp,%ebp
 8aceaa3:	81 ec 58 04 00 00    	sub    $0x458,%esp
 8aceaa9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8aceaac:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8aceaaf:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8aceab2:	8b 75 08             	mov    0x8(%ebp),%esi
 8aceab5:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8aceab8:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8aceabb:	85 db                	test   %ebx,%ebx
 8aceabd:	0f 84 dd 00 00 00    	je     8aceba0 <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x100>
 8aceac3:	83 7b 04 01          	cmpl   $0x1,0x4(%ebx)
 8aceac7:	76 43                	jbe    8aceb0c <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x6c>
 8aceac9:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8aceacc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8acead3:	00 
 8acead4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acead8:	8b 03                	mov    (%ebx),%eax
 8aceada:	89 04 24             	mov    %eax,(%esp)
 8aceadd:	e8 0e 71 c1 ff       	call   86e5bf0 <_ZNSi4readEPci>
 8aceae2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8aceae9:	00 
 8aceaea:	c7 44 24 04 fe ff ff 	movl   $0xfffffffe,0x4(%esp)
 8aceaf1:	ff 
 8aceaf2:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 8aceaf9:	ff 
 8aceafa:	8b 03                	mov    (%ebx),%eax
 8aceafc:	89 04 24             	mov    %eax,(%esp)
 8aceaff:	e8 cc 3e c1 ff       	call   86e29d0 <_ZNSi5seekgExSt12_Ios_Seekdir>
 8aceb04:	66 81 7d e6 b0 d0    	cmpw   $0xd0b0,-0x1a(%ebp)
 8aceb0a:	74 34                	je     8aceb40 <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0xa0>
 8aceb0c:	8b 45 10             	mov    0x10(%ebp),%eax
 8aceb0f:	c7 46 14 00 00 00 00 	movl   $0x0,0x14(%esi)
 8aceb16:	83 c6 18             	add    $0x18,%esi
 8aceb19:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8aceb1d:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8aceb21:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aceb25:	89 34 24             	mov    %esi,(%esp)
 8aceb28:	e8 23 ef ff ff       	call   8acda50 <_ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE>
 8aceb2d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8aceb30:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8aceb33:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8aceb36:	89 ec                	mov    %ebp,%esp
 8aceb38:	5d                   	pop    %ebp
 8aceb39:	c3                   	ret
 8aceb3a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8aceb40:	8b 43 08             	mov    0x8(%ebx),%eax
 8aceb43:	c7 46 14 01 00 00 00 	movl   $0x1,0x14(%esi)
 8aceb4a:	85 c0                	test   %eax,%eax
 8aceb4c:	0f 84 ce 00 00 00    	je     8acec20 <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x180>
 8aceb52:	8b 53 04             	mov    0x4(%ebx),%edx
 8aceb55:	81 c6 bc 40 00 00    	add    $0x40bc,%esi
 8aceb5b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8aceb5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8aceb62:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8aceb66:	89 34 24             	mov    %esi,(%esp)
 8aceb69:	89 54 24 10          	mov    %edx,0x10(%esp)
 8aceb6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8aceb71:	e8 ca 23 00 00       	call   8ad0f40 <_ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj>
 8aceb76:	8b 13                	mov    (%ebx),%edx
 8aceb78:	85 d2                	test   %edx,%edx
 8aceb7a:	74 b1                	je     8aceb2d <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x8d>
 8aceb7c:	8b 0a                	mov    (%edx),%ecx
 8aceb7e:	88 85 d4 fb ff ff    	mov    %al,-0x42c(%ebp)
 8aceb84:	89 14 24             	mov    %edx,(%esp)
 8aceb87:	ff 51 04             	call   *0x4(%ecx)
 8aceb8a:	0f b6 85 d4 fb ff ff 	movzbl -0x42c(%ebp),%eax
 8aceb91:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8aceb94:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8aceb97:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8aceb9a:	89 ec                	mov    %ebp,%esp
 8aceb9c:	5d                   	pop    %ebp
 8aceb9d:	c3                   	ret
 8aceb9e:	66 90                	xchg   %ax,%ax
 8aceba0:	8d 5d d8             	lea    -0x28(%ebp),%ebx
 8aceba3:	89 1c 24             	mov    %ebx,(%esp)
 8aceba6:	e8 95 e5 ff ff       	call   8acd140 <_ZN6DNFLex13stream_data_t5clearEv>
 8acebab:	8b 45 10             	mov    0x10(%ebp),%eax
 8acebae:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8acebb2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acebb6:	89 34 24             	mov    %esi,(%esp)
 8acebb9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acebbd:	e8 ee f6 ff ff       	call   8ace2b0 <_ZN13DNFLexWrapper10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE>
 8acebc2:	84 c0                	test   %al,%al
 8acebc4:	0f 85 f9 fe ff ff    	jne    8aceac3 <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x23>
 8acebca:	8b 9e 08 61 00 00    	mov    0x6108(%esi),%ebx
 8acebd0:	85 db                	test   %ebx,%ebx
 8acebd2:	0f 84 55 ff ff ff    	je     8aceb2d <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x8d>
 8acebd8:	8b 45 10             	mov    0x10(%ebp),%eax
 8acebdb:	89 04 24             	mov    %eax,(%esp)
 8acebde:	e8 b5 02 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8acebe3:	89 3c 24             	mov    %edi,(%esp)
 8acebe6:	89 c3                	mov    %eax,%ebx
 8acebe8:	e8 ab 02 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8acebed:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8acebf1:	8d 9d d8 fb ff ff    	lea    -0x428(%ebp),%ebx
 8acebf7:	c7 44 24 04 0e ec e2 	movl   $0x8e2ec0e,0x4(%esp)
 8acebfe:	08 
 8acebff:	89 1c 24             	mov    %ebx,(%esp)
 8acec02:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acec06:	e8 d5 04 00 00       	call   8acf0e0 <_Z10ss_sprintfILj1024EEiRAT__cPKcz>
 8acec0b:	89 1c 24             	mov    %ebx,(%esp)
 8acec0e:	ff 96 08 61 00 00    	call   *0x6108(%esi)
 8acec14:	31 c0                	xor    %eax,%eax
 8acec16:	e9 12 ff ff ff       	jmp    8aceb2d <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x8d>
 8acec1b:	90                   	nop
 8acec1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acec20:	8b 43 04             	mov    0x4(%ebx),%eax
 8acec23:	81 c6 bc 40 00 00    	add    $0x40bc,%esi
 8acec29:	89 04 24             	mov    %eax,(%esp)
 8acec2c:	e8 8f 41 c5 ff       	call   8722dc0 <_Znaj>
 8acec31:	89 c2                	mov    %eax,%edx
 8acec33:	8b 43 04             	mov    0x4(%ebx),%eax
 8acec36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acec3a:	89 95 d4 fb ff ff    	mov    %edx,-0x42c(%ebp)
 8acec40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acec44:	8b 03                	mov    (%ebx),%eax
 8acec46:	89 04 24             	mov    %eax,(%esp)
 8acec49:	e8 a2 6f c1 ff       	call   86e5bf0 <_ZNSi4readEPci>
 8acec4e:	8b 43 04             	mov    0x4(%ebx),%eax
 8acec51:	8b 95 d4 fb ff ff    	mov    -0x42c(%ebp),%edx
 8acec57:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acec5b:	89 34 24             	mov    %esi,(%esp)
 8acec5e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8acec62:	8b 45 10             	mov    0x10(%ebp),%eax
 8acec65:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8acec69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acec6d:	e8 ce 22 00 00       	call   8ad0f40 <_ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj>
 8acec72:	e9 b6 fe ff ff       	jmp    8aceb2d <_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE+0x8d>
 8acec77:	90                   	nop
 8acec78:	90                   	nop
 8acec79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::switchInputStream @ 0x8aceaa0

/* DWARF original prototype: bool switchInputStream(DNFLexWrapper * this, TCHAR * dir, TCHAR *
   filename, stream_data_t * s) */

bool __thiscall
DNFLexWrapper::switchInputStream(DNFLexWrapper *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  istream *piVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char local_42c [1024];
  stream_data_t local_2c;
  short local_1e [7];
  
                    /* Unresolved local var: stream_data_t s_created@[???] */
  if (s == (stream_data_t *)0x0) {
    s = &local_2c;
    DNFLex::stream_data_t::clear(s);
    bVar2 = LoadStream(this,dir,filename,s);
    if (!bVar2) {
      if (this->LexerError_ == (TLexerError)0x0) {
        return bVar2;
      }
                    /* Unresolved local var: char[1024] buf@[???] */
      pcVar4 = toMbcs(filename);
      pcVar3 = toMbcs(dir);
      ss_sprintf<1024u>(&local_42c,"%s/%s Read failed!",pcVar3,pcVar4);
      (*this->LexerError_)(local_42c);
      return false;
    }
  }
  if (1 < s->size) {
                    /* Unresolved local var: uint16 compiled_script_magic@[???] */
    std::istream::read((istream *)s->stream,(char *)local_1e,2);
    std::istream::seekg(CONCAT44(0xfffffffe,s->stream),~_S_beg);
    if (local_1e[0] == -0x2f50) {
      pcVar4 = s->buffer;
      this->lexType_ = LEX_TYPE_COMPILED;
      if (pcVar4 == (char *)0x0) {
                    /* Unresolved local var: char * buf@[???] */
        pcVar4 = operator_new__(s->size);
        std::istream::read((istream *)s->stream,pcVar4,s->size);
        bVar2 = CompiledDNFLex::SwitchInputStream
                          (&this->compiledDnfLex_,dir,filename,pcVar4,s->size);
        return bVar2;
      }
                    /* Unresolved local var: bool ret@[???] */
      bVar2 = CompiledDNFLex::SwitchInputStream(&this->compiledDnfLex_,dir,filename,pcVar4,s->size);
      piVar1 = s->stream;
      if (piVar1 == (istream *)0x0) {
        return bVar2;
      }
      (**(code **)(*(int *)piVar1 + 4))(piVar1);
      return bVar2;
    }
  }
  this->lexType_ = LEX_TYPE_NORMAL;
  bVar2 = DNFLex::SwitchInputStream(&this->dnfLex_,dir,filename,s);
  return bVar2;
}

```

---

## ~DNFLexWrapper

```asm
// === 08acecf0 DNFLexWrapper::~DNFLexWrapper  [0x08acecf0-0x8aced3f] ===
 8acecf0:	55                   	push   %ebp
 8acecf1:	89 e5                	mov    %esp,%ebp
 8acecf3:	53                   	push   %ebx
 8acecf4:	83 ec 24             	sub    $0x24,%esp
 8acecf7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acecfa:	c7 03 30 ec e2 08    	movl   $0x8e2ec30,(%ebx)
 8aced00:	8d 83 bc 40 00 00    	lea    0x40bc(%ebx),%eax
 8aced06:	89 04 24             	mov    %eax,(%esp)
 8aced09:	e8 c2 21 00 00       	call   8ad0ed0 <_ZN14CompiledDNFLexD1Ev>
 8aced0e:	83 c3 18             	add    $0x18,%ebx
 8aced11:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8aced14:	83 c4 24             	add    $0x24,%esp
 8aced17:	5b                   	pop    %ebx
 8aced18:	5d                   	pop    %ebp
 8aced19:	e9 d2 e8 ff ff       	jmp    8acd5f0 <_ZN6DNFLexD1Ev>
 8aced1e:	83 c3 18             	add    $0x18,%ebx
 8aced21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8aced24:	89 1c 24             	mov    %ebx,(%esp)
 8aced27:	e8 c4 e8 ff ff       	call   8acd5f0 <_ZN6DNFLexD1Ev>
 8aced2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8aced2f:	89 04 24             	mov    %eax,(%esp)
 8aced32:	e8 19 4a 01 00       	call   8ae3750 <_Unwind_Resume>
 8aced37:	90                   	nop
 8aced38:	90                   	nop
 8aced39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// DNFLexWrapper::~DNFLexWrapper @ 0x8acecf0

/* DWARF original prototype: void ~DNFLexWrapper(DNFLexWrapper * this, int __in_chrg) */

void __thiscall DNFLexWrapper::~DNFLexWrapper(DNFLexWrapper *this,int __in_chrg)

{
  int in_stack_ffffffd8;
  
  this->_vptr_DNFLexWrapper = (_func_int_varargs **)&PTR__DNFLexWrapper_08e2ec30;
                    /* try { // try from 08aced09 to 08aced0d has its CatchHandler @ 08aced1e */
  CompiledDNFLex::~CompiledDNFLex(&this->compiledDnfLex_,in_stack_ffffffd8);
  DNFLex::~DNFLex(&this->dnfLex_,__in_chrg);
  return;
}

```

---

## ~DNFLexWrapper_08aced40

```asm
// === 08aced40 DNFLexWrapper::~DNFLexWrapper  [0x08aced40-0x8aced5f] ===
 8aced40:	55                   	push   %ebp
 8aced41:	89 e5                	mov    %esp,%ebp
 8aced43:	53                   	push   %ebx
 8aced44:	83 ec 14             	sub    $0x14,%esp
 8aced47:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8aced4a:	89 1c 24             	mov    %ebx,(%esp)
 8aced4d:	e8 9e ff ff ff       	call   8acecf0 <_ZN13DNFLexWrapperD1Ev>
 8aced52:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8aced55:	83 c4 14             	add    $0x14,%esp
 8aced58:	5b                   	pop    %ebx
 8aced59:	5d                   	pop    %ebp
 8aced5a:	e9 91 57 c5 ff       	jmp    87244f0 <_ZdlPv>
 8aced5f:	90                   	nop

```

```c
// DNFLexWrapper::~DNFLexWrapper @ 0x8aced40

/* DWARF original prototype: void ~DNFLexWrapper(DNFLexWrapper * this, int __in_chrg) */

void __thiscall DNFLexWrapper::~DNFLexWrapper(DNFLexWrapper *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~DNFLexWrapper(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}

```


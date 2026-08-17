# __dnf_script__FlexLexer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 27

---

## LexerError

```asm
// === 08ad2ee0 __dnf_script__FlexLexer::LexerError  [0x08ad2ee0-0x8ad2fa3] ===
 8ad2ee0:	55                   	push   %ebp
 8ad2ee1:	89 e5                	mov    %esp,%ebp
 8ad2ee3:	53                   	push   %ebx
 8ad2ee4:	83 ec 14             	sub    $0x14,%esp
 8ad2ee7:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ad2eea:	85 db                	test   %ebx,%ebx
 8ad2eec:	0f 84 86 00 00 00    	je     8ad2f78 <_ZN23__dnf_script__FlexLexer10LexerErrorEPKc+0x98>
 8ad2ef2:	89 1c 24             	mov    %ebx,(%esp)
 8ad2ef5:	e8 b6 b4 5a ff       	call   807e3b0 <strlen@plt>
 8ad2efa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad2efe:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8ad2f05:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad2f09:	e8 52 a0 c2 ff       	call   86fcf60 <_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_i>
 8ad2f0e:	a1 60 b4 48 09       	mov    0x948b460,%eax
 8ad2f13:	8b 40 f4             	mov    -0xc(%eax),%eax
 8ad2f16:	8b 98 dc b4 48 09    	mov    0x948b4dc(%eax),%ebx
 8ad2f1c:	85 db                	test   %ebx,%ebx
 8ad2f1e:	74 7d                	je     8ad2f9d <_ZN23__dnf_script__FlexLexer10LexerErrorEPKc+0xbd>
 8ad2f20:	80 7b 1c 00          	cmpb   $0x0,0x1c(%ebx)
 8ad2f24:	74 32                	je     8ad2f58 <_ZN23__dnf_script__FlexLexer10LexerErrorEPKc+0x78>
 8ad2f26:	0f b6 43 27          	movzbl 0x27(%ebx),%eax
 8ad2f2a:	0f be c0             	movsbl %al,%eax
 8ad2f2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad2f31:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8ad2f38:	e8 f3 a6 c2 ff       	call   86fd630 <_ZNSo3putEc>
 8ad2f3d:	89 04 24             	mov    %eax,(%esp)
 8ad2f40:	e8 fb 93 c2 ff       	call   86fc340 <_ZNSo5flushEv>
 8ad2f45:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8ad2f4c:	e8 6f b2 5a ff       	call   807e1c0 <exit@plt>
 8ad2f51:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad2f58:	89 1c 24             	mov    %ebx,(%esp)
 8ad2f5b:	e8 60 3a c5 ff       	call   87269c0 <_ZNKSt5ctypeIcE13_M_widen_initEv>
 8ad2f60:	8b 03                	mov    (%ebx),%eax
 8ad2f62:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8ad2f69:	00 
 8ad2f6a:	89 1c 24             	mov    %ebx,(%esp)
 8ad2f6d:	ff 50 18             	call   *0x18(%eax)
 8ad2f70:	eb b8                	jmp    8ad2f2a <_ZN23__dnf_script__FlexLexer10LexerErrorEPKc+0x4a>
 8ad2f72:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad2f78:	8b 15 60 b4 48 09    	mov    0x948b460,%edx
 8ad2f7e:	b8 60 b4 48 09       	mov    $0x948b460,%eax
 8ad2f83:	03 42 f4             	add    -0xc(%edx),%eax
 8ad2f86:	8b 50 14             	mov    0x14(%eax),%edx
 8ad2f89:	89 04 24             	mov    %eax,(%esp)
 8ad2f8c:	83 ca 01             	or     $0x1,%edx
 8ad2f8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2f93:	e8 08 de c0 ff       	call   86e0da0 <_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate>
 8ad2f98:	e9 71 ff ff ff       	jmp    8ad2f0e <_ZN23__dnf_script__FlexLexer10LexerErrorEPKc+0x2e>
 8ad2f9d:	e8 1e 64 c0 ff       	call   86d93c0 <_ZSt16__throw_bad_castv>
 8ad2fa2:	90                   	nop
 8ad2fa3:	90                   	nop

```

```c
// __dnf_script__FlexLexer::LexerError @ 0x8ad2ee0

/* DWARF original prototype: void LexerError(__dnf_script__FlexLexer * this, char * msg) */

void __thiscall __dnf_script__FlexLexer::LexerError(__dnf_script__FlexLexer *this,char *msg)

{
  ctype<char> *this_00;
  ctype<char> cVar1;
  size_t sVar2;
  ostream *this_01;
  
  if (msg == (char *)0x0) {
    std::ios::clear((ios *)((int)&std::cerr + *(int *)(std::cerr + -0xc)),
                    *(_Ios_Iostate *)(&DAT_0948b474 + *(int *)(std::cerr + -0xc)) | _S_badbit);
  }
  else {
    sVar2 = strlen(msg);
    std::__ostream_insert<char,std::char_traits<char>>((ostream *)&std::cerr,msg,sVar2);
  }
  this_00 = *(ctype<char> **)(&DAT_0948b4dc + *(int *)(std::cerr + -0xc));
  if (this_00 != (ctype<char> *)0x0) {
    if (this_00[0x1c] == (ctype<char>)0x0) {
      std::ctype<char>::_M_widen_init(this_00);
      cVar1 = (ctype<char>)(**(code **)(*(int *)this_00 + 0x18))(this_00,10);
    }
    else {
      cVar1 = this_00[0x27];
    }
    this_01 = (ostream *)std::ostream::put((ostream *)&std::cerr,(char)cVar1);
    std::ostream::flush(this_01);
                    /* WARNING: Subroutine does not return */
    exit(2);
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_bad_cast();
}

```

---

## LexerInput

```asm
// === 08ad2780 __dnf_script__FlexLexer::LexerInput  [0x08ad2780-0x8ad27df] ===
 8ad2780:	55                   	push   %ebp
 8ad2781:	89 e5                	mov    %esp,%ebp
 8ad2783:	53                   	push   %ebx
 8ad2784:	83 ec 14             	sub    $0x14,%esp
 8ad2787:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad278a:	8b 43 20             	mov    0x20(%ebx),%eax
 8ad278d:	8b 10                	mov    (%eax),%edx
 8ad278f:	8b 52 f4             	mov    -0xc(%edx),%edx
 8ad2792:	8b 54 10 14          	mov    0x14(%eax,%edx,1),%edx
 8ad2796:	f6 c2 02             	test   $0x2,%dl
 8ad2799:	75 05                	jne    8ad27a0 <_ZN23__dnf_script__FlexLexer10LexerInputEPci+0x20>
 8ad279b:	83 e2 05             	and    $0x5,%edx
 8ad279e:	74 08                	je     8ad27a8 <_ZN23__dnf_script__FlexLexer10LexerInputEPci+0x28>
 8ad27a0:	31 c0                	xor    %eax,%eax
 8ad27a2:	83 c4 14             	add    $0x14,%esp
 8ad27a5:	5b                   	pop    %ebx
 8ad27a6:	5d                   	pop    %ebp
 8ad27a7:	c3                   	ret
 8ad27a8:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad27ab:	89 04 24             	mov    %eax,(%esp)
 8ad27ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad27b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad27b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad27b9:	e8 32 34 c1 ff       	call   86e5bf0 <_ZNSi4readEPci>
 8ad27be:	8b 53 20             	mov    0x20(%ebx),%edx
 8ad27c1:	8b 02                	mov    (%edx),%eax
 8ad27c3:	8b 48 f4             	mov    -0xc(%eax),%ecx
 8ad27c6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad27cb:	f6 44 0a 14 01       	testb  $0x1,0x14(%edx,%ecx,1)
 8ad27d0:	75 d0                	jne    8ad27a2 <_ZN23__dnf_script__FlexLexer10LexerInputEPci+0x22>
 8ad27d2:	8b 42 04             	mov    0x4(%edx),%eax
 8ad27d5:	eb cb                	jmp    8ad27a2 <_ZN23__dnf_script__FlexLexer10LexerInputEPci+0x22>
 8ad27d7:	90                   	nop
 8ad27d8:	90                   	nop
 8ad27d9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::LexerInput @ 0x8ad2780

/* DWARF original prototype: int LexerInput(__dnf_script__FlexLexer * this, char * buf, int
   max_size) */

int __thiscall
__dnf_script__FlexLexer::LexerInput(__dnf_script__FlexLexer *this,char *buf,int max_size)

{
  istream *this_00;
  istream *piVar1;
  int iVar2;
  
  this_00 = (istream *)this->yyin;
  if (((*(uint *)(this_00 + *(int *)(*(int *)this_00 + -0xc) + 0x14) & 2) == 0) &&
     ((*(uint *)(this_00 + *(int *)(*(int *)this_00 + -0xc) + 0x14) & 5) == 0)) {
    std::istream::read(this_00,buf,max_size);
    piVar1 = this->yyin;
    iVar2 = -1;
    if (((byte)piVar1[*(int *)(*(int *)piVar1 + -0xc) + 0x14] & 1) == 0) {
      iVar2 = *(int *)(piVar1 + 4);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

```

---

## LexerOutput

```asm
// === 08ad2760 __dnf_script__FlexLexer::LexerOutput  [0x08ad2760-0x8ad277f] ===
 8ad2760:	55                   	push   %ebp
 8ad2761:	89 e5                	mov    %esp,%ebp
 8ad2763:	83 ec 08             	sub    $0x8,%esp
 8ad2766:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad2769:	8b 40 24             	mov    0x24(%eax),%eax
 8ad276c:	89 45 08             	mov    %eax,0x8(%ebp)
 8ad276f:	c9                   	leave
 8ad2770:	e9 6b ad c2 ff       	jmp    86fd4e0 <_ZNSo5writeEPKci>
 8ad2775:	90                   	nop
 8ad2776:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2779:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::LexerOutput @ 0x8ad2760

/* DWARF original prototype: void LexerOutput(__dnf_script__FlexLexer * this, char * buf, int size)
    */

void __thiscall
__dnf_script__FlexLexer::LexerOutput(__dnf_script__FlexLexer *this,char *buf,int size)

{
  std::ostream::write((ostream *)this->yyout,buf,size);
  return;
}

```

---

## __dnf_script__FlexLexer

```asm
// === 08ad1940 __dnf_script__FlexLexer::__dnf_script__FlexLexer  [0x08ad1940-0x8ad19ff] ===
 8ad1940:	55                   	push   %ebp
 8ad1941:	89 e5                	mov    %esp,%ebp
 8ad1943:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad1946:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad1949:	c7 00 68 15 e3 08    	movl   $0x8e31568,(%eax)
 8ad194f:	89 50 20             	mov    %edx,0x20(%eax)
 8ad1952:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad1955:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8ad195c:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 8ad1963:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 8ad196a:	89 50 24             	mov    %edx,0x24(%eax)
 8ad196d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8ad1974:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8ad197b:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 8ad1982:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 8ad1989:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 8ad1990:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 8ad1997:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 8ad199e:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 8ad19a5:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8ad19ac:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8ad19b3:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8ad19ba:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 8ad19c1:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 8ad19c8:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 8ad19cf:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 8ad19d6:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 8ad19dd:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 8ad19e4:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 8ad19eb:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 8ad19f2:	5d                   	pop    %ebp
 8ad19f3:	c3                   	ret
 8ad19f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad19fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// __dnf_script__FlexLexer::__dnf_script__FlexLexer @ 0x8ad1940

/* DWARF original prototype: void __dnf_script__FlexLexer(__dnf_script__FlexLexer * this, istream *
   arg_yyin, ostream * arg_yyout) */

void __thiscall
__dnf_script__FlexLexer::__dnf_script__FlexLexer
          (__dnf_script__FlexLexer *this,istream *arg_yyin,ostream *arg_yyout)

{
  (this->super_FlexLexer)._vptr_FlexLexer =
       (_func_int_varargs **)&PTR____dnf_script__FlexLexer_08e31568;
  this->yyin = arg_yyin;
  this->yy_c_buf_p = (char *)0x0;
  this->yy_init = 0;
  this->yy_start = 0;
  this->yyout = arg_yyout;
  (this->super_FlexLexer).yy_flex_debug = 0;
  (this->super_FlexLexer).yylineno = 1;
  this->yy_did_buffer_switch_on_eof = 0;
  this->yy_looking_for_trail_begin = 0;
  this->yy_more_flag = 0;
  this->yy_more_len = 0;
  this->yy_prev_more_offset = 0;
  this->yy_more_offset = 0;
  this->yy_start_stack_depth = 0;
  this->yy_start_stack_ptr = 0;
  this->yy_start_stack = (int *)0x0;
  this->yy_buffer_stack = (yy_buffer_state **)0x0;
  this->yy_buffer_stack_top = 0;
  this->yy_buffer_stack_max = 0;
  this->yy_state_buf = (yy_state_type *)0x0;
  this->yy_last_accepting_cpos = (char *)0x0;
  this->yy_state_ptr = (yy_state_type *)0x0;
  this->yy_full_match = (char *)0x0;
  this->yy_full_state = (int *)0x0;
  return;
}

```

---

## switch_streams

```asm
// === 08ad1a00 __dnf_script__FlexLexer::switch_streams  [0x08ad1a00-0x8ad1a7f] ===
 8ad1a00:	55                   	push   %ebp
 8ad1a01:	89 e5                	mov    %esp,%ebp
 8ad1a03:	83 ec 38             	sub    $0x38,%esp
 8ad1a06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad1a09:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad1a0c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad1a0f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad1a12:	8b 75 10             	mov    0x10(%ebp),%esi
 8ad1a15:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad1a18:	85 c0                	test   %eax,%eax
 8ad1a1a:	74 43                	je     8ad1a5f <_ZN23__dnf_script__FlexLexer14switch_streamsEPSiPSo+0x5f>
 8ad1a1c:	8b 13                	mov    (%ebx),%edx
 8ad1a1e:	8b 4b 48             	mov    0x48(%ebx),%ecx
 8ad1a21:	8b 7a 10             	mov    0x10(%edx),%edi
 8ad1a24:	31 d2                	xor    %edx,%edx
 8ad1a26:	85 c9                	test   %ecx,%ecx
 8ad1a28:	74 06                	je     8ad1a30 <_ZN23__dnf_script__FlexLexer14switch_streamsEPSiPSo+0x30>
 8ad1a2a:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1a2d:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 8ad1a30:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad1a34:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad1a37:	89 1c 24             	mov    %ebx,(%esp)
 8ad1a3a:	ff d7                	call   *%edi
 8ad1a3c:	8b 13                	mov    (%ebx),%edx
 8ad1a3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad1a41:	8b 7a 08             	mov    0x8(%edx),%edi
 8ad1a44:	c7 44 24 08 00 40 00 	movl   $0x4000,0x8(%esp)
 8ad1a4b:	00 
 8ad1a4c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1a50:	89 1c 24             	mov    %ebx,(%esp)
 8ad1a53:	ff 52 0c             	call   *0xc(%edx)
 8ad1a56:	89 1c 24             	mov    %ebx,(%esp)
 8ad1a59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1a5d:	ff d7                	call   *%edi
 8ad1a5f:	85 f6                	test   %esi,%esi
 8ad1a61:	74 03                	je     8ad1a66 <_ZN23__dnf_script__FlexLexer14switch_streamsEPSiPSo+0x66>
 8ad1a63:	89 73 24             	mov    %esi,0x24(%ebx)
 8ad1a66:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad1a69:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad1a6c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad1a6f:	89 ec                	mov    %ebp,%esp
 8ad1a71:	5d                   	pop    %ebp
 8ad1a72:	c3                   	ret
 8ad1a73:	90                   	nop
 8ad1a74:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad1a7a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// __dnf_script__FlexLexer::switch_streams @ 0x8ad1a00

/* DWARF original prototype: void switch_streams(__dnf_script__FlexLexer * this, istream * new_in,
   ostream * new_out) */

void __thiscall
__dnf_script__FlexLexer::switch_streams
          (__dnf_script__FlexLexer *this,istream *new_in,ostream *new_out)

{
  _func_int_varargs **pp_Var1;
  _func_int_varargs *p_Var2;
  int iVar3;
  yy_buffer_state *pyVar4;
  
  if (new_in != (istream *)0x0) {
    pyVar4 = (yy_buffer_state *)0x0;
    if (this->yy_buffer_stack != (yy_buffer_state **)0x0) {
      pyVar4 = this->yy_buffer_stack[this->yy_buffer_stack_top];
    }
    (*(this->super_FlexLexer)._vptr_FlexLexer[4])(this,pyVar4);
    pp_Var1 = (this->super_FlexLexer)._vptr_FlexLexer;
    p_Var2 = pp_Var1[2];
    iVar3 = (*pp_Var1[3])(this,new_in,0x4000);
    (*p_Var2)(this,iVar3);
  }
  if (new_out != (ostream *)0x0) {
    this->yyout = new_out;
  }
  return;
}

```

---

## yy_create_buffer

```asm
// === 08ad2620 __dnf_script__FlexLexer::yy_create_buffer  [0x08ad2620-0x8ad26bf] ===
 8ad2620:	55                   	push   %ebp
 8ad2621:	89 e5                	mov    %esp,%ebp
 8ad2623:	83 ec 28             	sub    $0x28,%esp
 8ad2626:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 8ad262d:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad2630:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad2633:	8b 75 10             	mov    0x10(%ebp),%esi
 8ad2636:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad2639:	8b 7d 08             	mov    0x8(%ebp),%edi
 8ad263c:	e8 3f b9 5a ff       	call   807df80 <malloc@plt>
 8ad2641:	85 c0                	test   %eax,%eax
 8ad2643:	89 c3                	mov    %eax,%ebx
 8ad2645:	74 59                	je     8ad26a0 <_ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii+0x80>
 8ad2647:	89 73 0c             	mov    %esi,0xc(%ebx)
 8ad264a:	83 c6 02             	add    $0x2,%esi
 8ad264d:	89 34 24             	mov    %esi,(%esp)
 8ad2650:	e8 2b b9 5a ff       	call   807df80 <malloc@plt>
 8ad2655:	85 c0                	test   %eax,%eax
 8ad2657:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad265a:	74 2c                	je     8ad2688 <_ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii+0x68>
 8ad265c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad265f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad2663:	89 3c 24             	mov    %edi,(%esp)
 8ad2666:	c7 43 14 01 00 00 00 	movl   $0x1,0x14(%ebx)
 8ad266d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad2671:	e8 2a ff ff ff       	call   8ad25a0 <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>
 8ad2676:	89 d8                	mov    %ebx,%eax
 8ad2678:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad267b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad267e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad2681:	89 ec                	mov    %ebp,%esp
 8ad2683:	5d                   	pop    %ebp
 8ad2684:	c3                   	ret
 8ad2685:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2688:	8b 07                	mov    (%edi),%eax
 8ad268a:	c7 44 24 04 bc ee e2 	movl   $0x8e2eebc,0x4(%esp)
 8ad2691:	08 
 8ad2692:	89 3c 24             	mov    %edi,(%esp)
 8ad2695:	ff 50 2c             	call   *0x2c(%eax)
 8ad2698:	eb c2                	jmp    8ad265c <_ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii+0x3c>
 8ad269a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad26a0:	8b 07                	mov    (%edi),%eax
 8ad26a2:	c7 44 24 04 bc ee e2 	movl   $0x8e2eebc,0x4(%esp)
 8ad26a9:	08 
 8ad26aa:	89 3c 24             	mov    %edi,(%esp)
 8ad26ad:	ff 50 2c             	call   *0x2c(%eax)
 8ad26b0:	eb 95                	jmp    8ad2647 <_ZN23__dnf_script__FlexLexer16yy_create_bufferEPSii+0x27>
 8ad26b2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad26b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_create_buffer @ 0x8ad2620

/* DWARF original prototype: YY_BUFFER_STATE yy_create_buffer(__dnf_script__FlexLexer * this,
   istream * file, int size) */

YY_BUFFER_STATE __thiscall
__dnf_script__FlexLexer::yy_create_buffer(__dnf_script__FlexLexer *this,istream *file,int size)

{
  YY_BUFFER_STATE b;
  char *pcVar1;
  
                    /* Unresolved local var: YY_BUFFER_STATE b@[???] */
  b = malloc(0x30);
  if (b == (YY_BUFFER_STATE)0x0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"out of dynamic memory in yy_create_buffer()");
  }
  b->yy_buf_size = size;
  pcVar1 = malloc(size + 2);
  b->yy_ch_buf = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"out of dynamic memory in yy_create_buffer()");
  }
  b->yy_is_our_buffer = 1;
  yy_init_buffer(this,b,file);
  return b;
}

```

---

## yy_delete_buffer

```asm
// === 08ad1e30 __dnf_script__FlexLexer::yy_delete_buffer  [0x08ad1e30-0x8ad1e8f] ===
 8ad1e30:	55                   	push   %ebp
 8ad1e31:	89 e5                	mov    %esp,%ebp
 8ad1e33:	53                   	push   %ebx
 8ad1e34:	83 ec 14             	sub    $0x14,%esp
 8ad1e37:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ad1e3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad1e3d:	85 db                	test   %ebx,%ebx
 8ad1e3f:	74 47                	je     8ad1e88 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x58>
 8ad1e41:	8b 50 48             	mov    0x48(%eax),%edx
 8ad1e44:	85 d2                	test   %edx,%edx
 8ad1e46:	74 0a                	je     8ad1e52 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x22>
 8ad1e48:	8b 40 40             	mov    0x40(%eax),%eax
 8ad1e4b:	8d 04 82             	lea    (%edx,%eax,4),%eax
 8ad1e4e:	3b 18                	cmp    (%eax),%ebx
 8ad1e50:	74 2e                	je     8ad1e80 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x50>
 8ad1e52:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad1e55:	85 c0                	test   %eax,%eax
 8ad1e57:	75 0f                	jne    8ad1e68 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x38>
 8ad1e59:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad1e5c:	83 c4 14             	add    $0x14,%esp
 8ad1e5f:	5b                   	pop    %ebx
 8ad1e60:	5d                   	pop    %ebp
 8ad1e61:	e9 4a bf 5a ff       	jmp    807ddb0 <free@plt>
 8ad1e66:	66 90                	xchg   %ax,%ax
 8ad1e68:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad1e6b:	89 04 24             	mov    %eax,(%esp)
 8ad1e6e:	e8 3d bf 5a ff       	call   807ddb0 <free@plt>
 8ad1e73:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad1e76:	83 c4 14             	add    $0x14,%esp
 8ad1e79:	5b                   	pop    %ebx
 8ad1e7a:	5d                   	pop    %ebp
 8ad1e7b:	e9 30 bf 5a ff       	jmp    807ddb0 <free@plt>
 8ad1e80:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad1e86:	eb ca                	jmp    8ad1e52 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x22>
 8ad1e88:	83 c4 14             	add    $0x14,%esp
 8ad1e8b:	5b                   	pop    %ebx
 8ad1e8c:	5d                   	pop    %ebp
 8ad1e8d:	c3                   	ret
 8ad1e8e:	66 90                	xchg   %ax,%ax

```

```c
// __dnf_script__FlexLexer::yy_delete_buffer @ 0x8ad1e30

/* DWARF original prototype: void yy_delete_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE
   b) */

void __thiscall
__dnf_script__FlexLexer::yy_delete_buffer(__dnf_script__FlexLexer *this,YY_BUFFER_STATE b)

{
  yy_buffer_state **ppyVar1;
  
  if (b == (YY_BUFFER_STATE)0x0) {
    return;
  }
  if ((this->yy_buffer_stack != (yy_buffer_state **)0x0) &&
     (ppyVar1 = this->yy_buffer_stack + this->yy_buffer_stack_top, b == *ppyVar1)) {
    *ppyVar1 = (yy_buffer_state *)0x0;
  }
  if (b->yy_is_our_buffer == 0) {
    free(b);
    return;
  }
  free(b->yy_ch_buf);
  free(b);
  return;
}

```

---

## yy_flush_buffer

```asm
// === 08ad1c70 __dnf_script__FlexLexer::yy_flush_buffer  [0x08ad1c70-0x8ad1cff] ===
 8ad1c70:	55                   	push   %ebp
 8ad1c71:	89 e5                	mov    %esp,%ebp
 8ad1c73:	83 ec 08             	sub    $0x8,%esp
 8ad1c76:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad1c79:	89 1c 24             	mov    %ebx,(%esp)
 8ad1c7c:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad1c7f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad1c83:	85 c0                	test   %eax,%eax
 8ad1c85:	74 37                	je     8ad1cbe <_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x4e>
 8ad1c87:	8b 48 04             	mov    0x4(%eax),%ecx
 8ad1c8a:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8ad1c91:	c6 01 00             	movb   $0x0,(%ecx)
 8ad1c94:	8b 48 04             	mov    0x4(%eax),%ecx
 8ad1c97:	c6 41 01 00          	movb   $0x0,0x1(%ecx)
 8ad1c9b:	8b 4a 48             	mov    0x48(%edx),%ecx
 8ad1c9e:	8b 58 04             	mov    0x4(%eax),%ebx
 8ad1ca1:	c7 40 1c 01 00 00 00 	movl   $0x1,0x1c(%eax)
 8ad1ca8:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 8ad1caf:	85 c9                	test   %ecx,%ecx
 8ad1cb1:	89 58 08             	mov    %ebx,0x8(%eax)
 8ad1cb4:	74 08                	je     8ad1cbe <_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x4e>
 8ad1cb6:	8b 72 40             	mov    0x40(%edx),%esi
 8ad1cb9:	3b 04 b1             	cmp    (%ecx,%esi,4),%eax
 8ad1cbc:	74 12                	je     8ad1cd0 <_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x60>
 8ad1cbe:	8b 1c 24             	mov    (%esp),%ebx
 8ad1cc1:	8b 74 24 04          	mov    0x4(%esp),%esi
 8ad1cc5:	89 ec                	mov    %ebp,%esp
 8ad1cc7:	5d                   	pop    %ebp
 8ad1cc8:	c3                   	ret
 8ad1cc9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1cd0:	8b 48 10             	mov    0x10(%eax),%ecx
 8ad1cd3:	8b 00                	mov    (%eax),%eax
 8ad1cd5:	89 5a 30             	mov    %ebx,0x30(%edx)
 8ad1cd8:	89 5a 04             	mov    %ebx,0x4(%edx)
 8ad1cdb:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 8ad1cde:	89 42 20             	mov    %eax,0x20(%edx)
 8ad1ce1:	0f b6 03             	movzbl (%ebx),%eax
 8ad1ce4:	88 42 28             	mov    %al,0x28(%edx)
 8ad1ce7:	8b 1c 24             	mov    (%esp),%ebx
 8ad1cea:	8b 74 24 04          	mov    0x4(%esp),%esi
 8ad1cee:	89 ec                	mov    %ebp,%esp
 8ad1cf0:	5d                   	pop    %ebp
 8ad1cf1:	c3                   	ret
 8ad1cf2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1cf9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_flush_buffer @ 0x8ad1c70

/* DWARF original prototype: void yy_flush_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE b)
    */

void __thiscall
__dnf_script__FlexLexer::yy_flush_buffer(__dnf_script__FlexLexer *this,YY_BUFFER_STATE b)

{
  yy_buffer_state **ppyVar1;
  char *pcVar2;
  int iVar3;
  istream *piVar4;
  
  if (b != (YY_BUFFER_STATE)0x0) {
    b->yy_n_chars = 0;
    *b->yy_ch_buf = '\0';
    b->yy_ch_buf[1] = '\0';
    ppyVar1 = this->yy_buffer_stack;
    pcVar2 = b->yy_ch_buf;
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    b->yy_buf_pos = pcVar2;
    if ((ppyVar1 != (yy_buffer_state **)0x0) && (b == ppyVar1[this->yy_buffer_stack_top])) {
      iVar3 = b->yy_n_chars;
      piVar4 = b->yy_input_file;
      this->yy_c_buf_p = pcVar2;
      (this->super_FlexLexer).yytext = pcVar2;
      this->yy_n_chars = iVar3;
      this->yyin = piVar4;
      this->yy_hold_char = *pcVar2;
      return;
    }
  }
  return;
}

```

---

## yy_get_next_buffer

```asm
// === 08ad1ea0 __dnf_script__FlexLexer::yy_get_next_buffer  [0x08ad1ea0-0x8ad21bf] ===
 8ad1ea0:	55                   	push   %ebp
 8ad1ea1:	89 e5                	mov    %esp,%ebp
 8ad1ea3:	57                   	push   %edi
 8ad1ea4:	56                   	push   %esi
 8ad1ea5:	53                   	push   %ebx
 8ad1ea6:	83 ec 5c             	sub    $0x5c,%esp
 8ad1ea9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad1eac:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad1eaf:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1eb2:	8b 7b 30             	mov    0x30(%ebx),%edi
 8ad1eb5:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad1eb8:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8ad1ebb:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8ad1ebe:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ad1ec1:	8b 43 2c             	mov    0x2c(%ebx),%eax
 8ad1ec4:	8b 71 04             	mov    0x4(%ecx),%esi
 8ad1ec7:	89 75 dc             	mov    %esi,-0x24(%ebp)
 8ad1eca:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8ad1ecd:	8b 73 04             	mov    0x4(%ebx),%esi
 8ad1ed0:	8d 44 07 01          	lea    0x1(%edi,%eax,1),%eax
 8ad1ed4:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
 8ad1ed7:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 8ad1eda:	0f 87 d8 01 00 00    	ja     8ad20b8 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x218>
 8ad1ee0:	8b 79 28             	mov    0x28(%ecx),%edi
 8ad1ee3:	85 ff                	test   %edi,%edi
 8ad1ee5:	75 21                	jne    8ad1f08 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x68>
 8ad1ee7:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8ad1eea:	2b 7d c4             	sub    -0x3c(%ebp),%edi
 8ad1eed:	83 ff 01             	cmp    $0x1,%edi
 8ad1ef0:	0f 95 c0             	setne  %al
 8ad1ef3:	83 c4 5c             	add    $0x5c,%esp
 8ad1ef6:	0f b6 f0             	movzbl %al,%esi
 8ad1ef9:	83 c6 01             	add    $0x1,%esi
 8ad1efc:	89 f0                	mov    %esi,%eax
 8ad1efe:	5b                   	pop    %ebx
 8ad1eff:	5e                   	pop    %esi
 8ad1f00:	5f                   	pop    %edi
 8ad1f01:	5d                   	pop    %ebp
 8ad1f02:	c3                   	ret
 8ad1f03:	90                   	nop
 8ad1f04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1f08:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad1f0b:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 8ad1f0e:	83 e8 01             	sub    $0x1,%eax
 8ad1f11:	29 f8                	sub    %edi,%eax
 8ad1f13:	85 c0                	test   %eax,%eax
 8ad1f15:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad1f18:	7e 2b                	jle    8ad1f45 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0xa5>
 8ad1f1a:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8ad1f1d:	31 c0                	xor    %eax,%eax
 8ad1f1f:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8ad1f22:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad1f28:	0f b6 14 06          	movzbl (%esi,%eax,1),%edx
 8ad1f2c:	88 14 07             	mov    %dl,(%edi,%eax,1)
 8ad1f2f:	83 c0 01             	add    $0x1,%eax
 8ad1f32:	39 c8                	cmp    %ecx,%eax
 8ad1f34:	75 f2                	jne    8ad1f28 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x88>
 8ad1f36:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad1f39:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1f3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad1f3f:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8ad1f42:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ad1f45:	83 79 2c 02          	cmpl   $0x2,0x2c(%ecx)
 8ad1f49:	0f 84 b1 01 00 00    	je     8ad2100 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x260>
 8ad1f4f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8ad1f52:	f7 d6                	not    %esi
 8ad1f54:	03 71 0c             	add    0xc(%ecx),%esi
 8ad1f57:	85 f6                	test   %esi,%esi
 8ad1f59:	0f 8f 99 00 00 00    	jg     8ad1ff8 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x158>
 8ad1f5f:	8b 7b 30             	mov    0x30(%ebx),%edi
 8ad1f62:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ad1f65:	eb 4a                	jmp    8ad1fb1 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x111>
 8ad1f67:	90                   	nop
 8ad1f68:	8b 4e 0c             	mov    0xc(%esi),%ecx
 8ad1f6b:	8d 04 09             	lea    (%ecx,%ecx,1),%eax
 8ad1f6e:	85 c0                	test   %eax,%eax
 8ad1f70:	7e 76                	jle    8ad1fe8 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x148>
 8ad1f72:	89 46 0c             	mov    %eax,0xc(%esi)
 8ad1f75:	83 c0 02             	add    $0x2,%eax
 8ad1f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1f7c:	8b 46 04             	mov    0x4(%esi),%eax
 8ad1f7f:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8ad1f82:	89 04 24             	mov    %eax,(%esp)
 8ad1f85:	e8 96 c2 5a ff       	call   807e220 <realloc@plt>
 8ad1f8a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1f8d:	85 c0                	test   %eax,%eax
 8ad1f8f:	89 46 04             	mov    %eax,0x4(%esi)
 8ad1f92:	74 37                	je     8ad1fcb <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x12b>
 8ad1f94:	29 d7                	sub    %edx,%edi
 8ad1f96:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1f99:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 8ad1f9c:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad1f9f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8ad1fa2:	89 7b 30             	mov    %edi,0x30(%ebx)
 8ad1fa5:	8b 0c 90             	mov    (%eax,%edx,4),%ecx
 8ad1fa8:	f7 d6                	not    %esi
 8ad1faa:	03 71 0c             	add    0xc(%ecx),%esi
 8ad1fad:	85 f6                	test   %esi,%esi
 8ad1faf:	7f 47                	jg     8ad1ff8 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x158>
 8ad1fb1:	31 f6                	xor    %esi,%esi
 8ad1fb3:	85 c0                	test   %eax,%eax
 8ad1fb5:	74 03                	je     8ad1fba <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x11a>
 8ad1fb7:	8b 34 90             	mov    (%eax,%edx,4),%esi
 8ad1fba:	8b 46 14             	mov    0x14(%esi),%eax
 8ad1fbd:	8b 56 04             	mov    0x4(%esi),%edx
 8ad1fc0:	85 c0                	test   %eax,%eax
 8ad1fc2:	75 a4                	jne    8ad1f68 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0xc8>
 8ad1fc4:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8ad1fcb:	8b 03                	mov    (%ebx),%eax
 8ad1fcd:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8ad1fd0:	c7 44 24 04 fc ed e2 	movl   $0x8e2edfc,0x4(%esp)
 8ad1fd7:	08 
 8ad1fd8:	89 1c 24             	mov    %ebx,(%esp)
 8ad1fdb:	ff 50 2c             	call   *0x2c(%eax)
 8ad1fde:	8b 46 04             	mov    0x4(%esi),%eax
 8ad1fe1:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1fe4:	eb ae                	jmp    8ad1f94 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0xf4>
 8ad1fe6:	66 90                	xchg   %ax,%ax
 8ad1fe8:	89 c8                	mov    %ecx,%eax
 8ad1fea:	c1 e8 03             	shr    $0x3,%eax
 8ad1fed:	01 c8                	add    %ecx,%eax
 8ad1fef:	89 46 0c             	mov    %eax,0xc(%esi)
 8ad1ff2:	eb 81                	jmp    8ad1f75 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0xd5>
 8ad1ff4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1ff8:	81 fe 00 20 00 00    	cmp    $0x2000,%esi
 8ad1ffe:	8b 03                	mov    (%ebx),%eax
 8ad2000:	0f 8f ea 00 00 00    	jg     8ad20f0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x250>
 8ad2006:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad2009:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad200d:	03 51 04             	add    0x4(%ecx),%edx
 8ad2010:	89 1c 24             	mov    %ebx,(%esp)
 8ad2013:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2017:	ff 50 24             	call   *0x24(%eax)
 8ad201a:	85 c0                	test   %eax,%eax
 8ad201c:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad201f:	0f 88 50 01 00 00    	js     8ad2175 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x2d5>
 8ad2025:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2028:	8b 4b 48             	mov    0x48(%ebx),%ecx
 8ad202b:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 8ad202e:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad2031:	89 42 10             	mov    %eax,0x10(%edx)
 8ad2034:	8b 4b 2c             	mov    0x2c(%ebx),%ecx
 8ad2037:	31 f6                	xor    %esi,%esi
 8ad2039:	85 c9                	test   %ecx,%ecx
 8ad203b:	75 23                	jne    8ad2060 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x1c0>
 8ad203d:	8b 7d e4             	mov    -0x1c(%ebp),%edi
 8ad2040:	85 ff                	test   %edi,%edi
 8ad2042:	0f 84 d0 00 00 00    	je     8ad2118 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x278>
 8ad2048:	8b 43 40             	mov    0x40(%ebx),%eax
 8ad204b:	be 02 00 00 00       	mov    $0x2,%esi
 8ad2050:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad2053:	8b 04 82             	mov    (%edx,%eax,4),%eax
 8ad2056:	c7 40 2c 02 00 00 00 	movl   $0x2,0x2c(%eax)
 8ad205d:	8b 4b 2c             	mov    0x2c(%ebx),%ecx
 8ad2060:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2063:	8b 7d e0             	mov    -0x20(%ebp),%edi
 8ad2066:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad2069:	8b 3c 97             	mov    (%edi,%edx,4),%edi
 8ad206c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8ad206f:	3b 47 0c             	cmp    0xc(%edi),%eax
 8ad2072:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8ad2075:	0f 87 c5 00 00 00    	ja     8ad2140 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x2a0>
 8ad207b:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8ad207e:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad2081:	8b 14 91             	mov    (%ecx,%edx,4),%edx
 8ad2084:	8b 52 04             	mov    0x4(%edx),%edx
 8ad2087:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 8ad208b:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad208e:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2091:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad2094:	8b 50 04             	mov    0x4(%eax),%edx
 8ad2097:	8b 43 2c             	mov    0x2c(%ebx),%eax
 8ad209a:	c6 44 02 01 00       	movb   $0x0,0x1(%edx,%eax,1)
 8ad209f:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad20a2:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad20a5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad20a8:	8b 40 04             	mov    0x4(%eax),%eax
 8ad20ab:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad20ae:	83 c4 5c             	add    $0x5c,%esp
 8ad20b1:	89 f0                	mov    %esi,%eax
 8ad20b3:	5b                   	pop    %ebx
 8ad20b4:	5e                   	pop    %esi
 8ad20b5:	5f                   	pop    %edi
 8ad20b6:	5d                   	pop    %ebp
 8ad20b7:	c3                   	ret
 8ad20b8:	8b 03                	mov    (%ebx),%eax
 8ad20ba:	c7 44 24 04 c4 ed e2 	movl   $0x8e2edc4,0x4(%esp)
 8ad20c1:	08 
 8ad20c2:	89 1c 24             	mov    %ebx,(%esp)
 8ad20c5:	ff 50 2c             	call   *0x2c(%eax)
 8ad20c8:	8b 53 48             	mov    0x48(%ebx),%edx
 8ad20cb:	8b 43 30             	mov    0x30(%ebx),%eax
 8ad20ce:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8ad20d1:	8b 7d e0             	mov    -0x20(%ebp),%edi
 8ad20d4:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8ad20d7:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad20da:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad20dd:	8b 0c 97             	mov    (%edi,%edx,4),%ecx
 8ad20e0:	8b 7b 04             	mov    0x4(%ebx),%edi
 8ad20e3:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 8ad20e6:	e9 f5 fd ff ff       	jmp    8ad1ee0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x40>
 8ad20eb:	90                   	nop
 8ad20ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad20f0:	be 00 20 00 00       	mov    $0x2000,%esi
 8ad20f5:	e9 0c ff ff ff       	jmp    8ad2006 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x166>
 8ad20fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad2100:	c7 43 2c 00 00 00 00 	movl   $0x0,0x2c(%ebx)
 8ad2107:	c7 41 10 00 00 00 00 	movl   $0x0,0x10(%ecx)
 8ad210e:	e9 21 ff ff ff       	jmp    8ad2034 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x194>
 8ad2113:	90                   	nop
 8ad2114:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad2118:	8b 03                	mov    (%ebx),%eax
 8ad211a:	66 be 01 00          	mov    $0x1,%si
 8ad211e:	8b 53 20             	mov    0x20(%ebx),%edx
 8ad2121:	89 1c 24             	mov    %ebx,(%esp)
 8ad2124:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2128:	ff 50 14             	call   *0x14(%eax)
 8ad212b:	8b 7b 48             	mov    0x48(%ebx),%edi
 8ad212e:	8b 4b 2c             	mov    0x2c(%ebx),%ecx
 8ad2131:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8ad2134:	e9 27 ff ff ff       	jmp    8ad2060 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x1c0>
 8ad2139:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad2140:	d1 f9                	sar    $1,%ecx
 8ad2142:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8ad2145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad2149:	8b 47 04             	mov    0x4(%edi),%eax
 8ad214c:	89 04 24             	mov    %eax,(%esp)
 8ad214f:	e8 cc c0 5a ff       	call   807e220 <realloc@plt>
 8ad2154:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2157:	89 47 04             	mov    %eax,0x4(%edi)
 8ad215a:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad215d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad2160:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad2163:	8b 48 04             	mov    0x4(%eax),%ecx
 8ad2166:	85 c9                	test   %ecx,%ecx
 8ad2168:	74 23                	je     8ad218d <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x2ed>
 8ad216a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad216d:	03 43 2c             	add    0x2c(%ebx),%eax
 8ad2170:	e9 06 ff ff ff       	jmp    8ad207b <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x1db>
 8ad2175:	8b 03                	mov    (%ebx),%eax
 8ad2177:	c7 44 24 04 dc ef e2 	movl   $0x8e2efdc,0x4(%esp)
 8ad217e:	08 
 8ad217f:	89 1c 24             	mov    %ebx,(%esp)
 8ad2182:	ff 50 2c             	call   *0x2c(%eax)
 8ad2185:	8b 43 2c             	mov    0x2c(%ebx),%eax
 8ad2188:	e9 98 fe ff ff       	jmp    8ad2025 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x185>
 8ad218d:	8b 03                	mov    (%ebx),%eax
 8ad218f:	c7 44 24 04 28 ee e2 	movl   $0x8e2ee28,0x4(%esp)
 8ad2196:	08 
 8ad2197:	89 1c 24             	mov    %ebx,(%esp)
 8ad219a:	ff 50 2c             	call   *0x2c(%eax)
 8ad219d:	8b 7b 48             	mov    0x48(%ebx),%edi
 8ad21a0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad21a3:	03 43 2c             	add    0x2c(%ebx),%eax
 8ad21a6:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad21a9:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8ad21ac:	e9 ca fe ff ff       	jmp    8ad207b <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv+0x1db>
 8ad21b1:	90                   	nop
 8ad21b2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad21b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_get_next_buffer @ 0x8ad1ea0

/* DWARF original prototype: int yy_get_next_buffer(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yy_get_next_buffer(__dnf_script__FlexLexer *this)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  yy_size_t yVar4;
  char *pcVar5;
  size_t sVar6;
  int iVar7;
  yy_buffer_state *pyVar8;
  int iVar9;
  char *local_40;
  yy_buffer_state **local_24;
  char *local_20;
  
                    /* Unresolved local var: char * dest@[???]
                       Unresolved local var: char * source@[???]
                       Unresolved local var: int number_to_move@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: int ret_val@[???] */
  local_24 = this->yy_buffer_stack;
  sVar6 = this->yy_buffer_stack_top;
  local_20 = this->yy_c_buf_p;
  pyVar8 = local_24[sVar6];
  pcVar5 = pyVar8->yy_ch_buf;
  pcVar1 = (this->super_FlexLexer).yytext;
  local_40 = pcVar1;
  if (pcVar5 + this->yy_n_chars + 1 < local_20) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
              (this,"fatal flex scanner internal error--end of buffer missed");
    local_24 = this->yy_buffer_stack;
    local_20 = this->yy_c_buf_p;
    sVar6 = this->yy_buffer_stack_top;
    pyVar8 = local_24[sVar6];
    local_40 = (this->super_FlexLexer).yytext;
  }
  if (pyVar8->yy_fill_buffer == 0) {
    return ((int)local_20 - (int)local_40 != 1) + 1;
  }
  local_20 = local_20 + (-1 - (int)local_40);
  if (0 < (int)local_20) {
    pcVar3 = (char *)0x0;
    do {
      pcVar5[(int)pcVar3] = pcVar1[(int)pcVar3];
      pcVar3 = pcVar3 + 1;
    } while (pcVar3 != local_20);
    local_24 = this->yy_buffer_stack;
    sVar6 = this->yy_buffer_stack_top;
    pyVar8 = local_24[sVar6];
  }
  if (pyVar8->yy_buffer_status == 2) {
    this->yy_n_chars = 0;
    pyVar8->yy_n_chars = 0;
  }
  else {
                    /* Unresolved local var: int num_to_read@[???] */
    iVar7 = ~(uint)local_20 + pyVar8->yy_buf_size;
    if (iVar7 < 1) {
      pcVar5 = this->yy_c_buf_p;
      do {
        pyVar8 = (yy_buffer_state *)0x0;
        if (local_24 != (yy_buffer_state **)0x0) {
          pyVar8 = local_24[sVar6];
        }
        pcVar1 = pyVar8->yy_ch_buf;
        if (pyVar8->yy_is_our_buffer == 0) {
          pyVar8->yy_ch_buf = (char *)0x0;
LAB_08ad1fcb:
          (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                    (this,"fatal error - scanner input buffer overflow");
          pcVar3 = pyVar8->yy_ch_buf;
        }
        else {
                    /* Unresolved local var: YY_BUFFER_STATE b@[???]
                       Unresolved local var: int yy_c_buf_p_offset@[???]
                       Unresolved local var: int new_size@[???] */
          uVar2 = pyVar8->yy_buf_size;
          yVar4 = uVar2 * 2;
          if ((int)yVar4 < 1) {
            yVar4 = (uVar2 >> 3) + uVar2;
            pyVar8->yy_buf_size = yVar4;
          }
          else {
            pyVar8->yy_buf_size = yVar4;
          }
          pcVar3 = realloc(pyVar8->yy_ch_buf,yVar4 + 2);
          pyVar8->yy_ch_buf = pcVar3;
          if (pcVar3 == (char *)0x0) goto LAB_08ad1fcb;
        }
        sVar6 = this->yy_buffer_stack_top;
        pcVar5 = pcVar3 + ((int)pcVar5 - (int)pcVar1);
        local_24 = this->yy_buffer_stack;
        this->yy_c_buf_p = pcVar5;
        pyVar8 = local_24[sVar6];
        iVar7 = ~(uint)local_20 + pyVar8->yy_buf_size;
      } while (iVar7 < 1);
    }
    if (0x2000 < iVar7) {
      iVar7 = 0x2000;
    }
    iVar7 = (*(this->super_FlexLexer)._vptr_FlexLexer[9])
                      (this,pyVar8->yy_ch_buf + (int)local_20,iVar7);
    this->yy_n_chars = iVar7;
    if (iVar7 < 0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"input in flex scanner failed");
      iVar7 = this->yy_n_chars;
    }
    local_24 = this->yy_buffer_stack;
    local_24[this->yy_buffer_stack_top]->yy_n_chars = iVar7;
  }
  iVar7 = this->yy_n_chars;
  iVar9 = 0;
  if (iVar7 == 0) {
    if (local_20 == (char *)0x0) {
      iVar9 = 1;
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
      local_24 = this->yy_buffer_stack;
      iVar7 = this->yy_n_chars;
    }
    else {
      iVar9 = 2;
      local_24[this->yy_buffer_stack_top]->yy_buffer_status = 2;
      iVar7 = this->yy_n_chars;
    }
  }
  sVar6 = this->yy_buffer_stack_top;
  pyVar8 = local_24[sVar6];
  pcVar5 = local_20 + iVar7;
  if ((char *)pyVar8->yy_buf_size < pcVar5) {
                    /* Unresolved local var: yy_size_t new_size@[???] */
    pcVar5 = realloc(pyVar8->yy_ch_buf,(size_t)(pcVar5 + (iVar7 >> 1)));
    sVar6 = this->yy_buffer_stack_top;
    pyVar8->yy_ch_buf = pcVar5;
    local_24 = this->yy_buffer_stack;
    if (local_24[sVar6]->yy_ch_buf == (char *)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yy_get_next_buffer()");
      local_24 = this->yy_buffer_stack;
      pcVar5 = local_20 + this->yy_n_chars;
      sVar6 = this->yy_buffer_stack_top;
    }
    else {
      pcVar5 = local_20 + this->yy_n_chars;
    }
  }
  this->yy_n_chars = (int)pcVar5;
  local_24[sVar6]->yy_ch_buf[(int)pcVar5] = '\0';
  this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf[this->yy_n_chars + 1] = '\0';
  (this->super_FlexLexer).yytext = this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf;
  return iVar9;
}

```

---

## yy_get_previous_state

```asm
// === 08ad1a80 __dnf_script__FlexLexer::yy_get_previous_state  [0x08ad1a80-0x8ad1b4f] ===
 8ad1a80:	55                   	push   %ebp
 8ad1a81:	89 e5                	mov    %esp,%ebp
 8ad1a83:	57                   	push   %edi
 8ad1a84:	56                   	push   %esi
 8ad1a85:	53                   	push   %ebx
 8ad1a86:	83 ec 04             	sub    $0x4,%esp
 8ad1a89:	8b 7d 08             	mov    0x8(%ebp),%edi
 8ad1a8c:	8b 77 04             	mov    0x4(%edi),%esi
 8ad1a8f:	3b 77 30             	cmp    0x30(%edi),%esi
 8ad1a92:	8b 47 38             	mov    0x38(%edi),%eax
 8ad1a95:	0f 83 93 00 00 00    	jae    8ad1b2e <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0xae>
 8ad1a9b:	89 7d f0             	mov    %edi,-0x10(%ebp)
 8ad1a9e:	66 90                	xchg   %ax,%ax
 8ad1aa0:	0f b7 94 00 80 f1 e2 	movzwl 0x8e2f180(%eax,%eax,1),%edx
 8ad1aa7:	08 
 8ad1aa8:	66 85 d2             	test   %dx,%dx
 8ad1aab:	74 09                	je     8ad1ab6 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x36>
 8ad1aad:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8ad1ab0:	89 41 4c             	mov    %eax,0x4c(%ecx)
 8ad1ab3:	89 71 50             	mov    %esi,0x50(%ecx)
 8ad1ab6:	0f b6 3e             	movzbl (%esi),%edi
 8ad1ab9:	89 f9                	mov    %edi,%ecx
 8ad1abb:	84 c9                	test   %cl,%cl
 8ad1abd:	74 79                	je     8ad1b38 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0xb8>
 8ad1abf:	66 85 d2             	test   %dx,%dx
 8ad1ac2:	74 09                	je     8ad1acd <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x4d>
 8ad1ac4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad1ac7:	89 42 4c             	mov    %eax,0x4c(%edx)
 8ad1aca:	89 72 50             	mov    %esi,0x50(%edx)
 8ad1acd:	0f bf 94 00 80 f2 e2 	movswl 0x8e2f280(%eax,%eax,1),%edx
 8ad1ad4:	08 
 8ad1ad5:	89 f9                	mov    %edi,%ecx
 8ad1ad7:	0f b6 d9             	movzbl %cl,%ebx
 8ad1ada:	8d 0c 1a             	lea    (%edx,%ebx,1),%ecx
 8ad1add:	0f bf 8c 09 00 f3 e2 	movswl 0x8e2f300(%ecx,%ecx,1),%ecx
 8ad1ae4:	08 
 8ad1ae5:	39 c8                	cmp    %ecx,%eax
 8ad1ae7:	74 26                	je     8ad1b0f <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x8f>
 8ad1ae9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1af0:	0f bf 84 00 00 f2 e2 	movswl 0x8e2f200(%eax,%eax,1),%eax
 8ad1af7:	08 
 8ad1af8:	0f bf 94 00 80 f2 e2 	movswl 0x8e2f280(%eax,%eax,1),%edx
 8ad1aff:	08 
 8ad1b00:	8d 0c 1a             	lea    (%edx,%ebx,1),%ecx
 8ad1b03:	0f bf 8c 09 00 f3 e2 	movswl 0x8e2f300(%ecx,%ecx,1),%ecx
 8ad1b0a:	08 
 8ad1b0b:	39 c1                	cmp    %eax,%ecx
 8ad1b0d:	75 e1                	jne    8ad1af0 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x70>
 8ad1b0f:	81 e7 ff 00 00 00    	and    $0xff,%edi
 8ad1b15:	01 fa                	add    %edi,%edx
 8ad1b17:	0f bf 84 12 00 04 e3 	movswl 0x8e30400(%edx,%edx,1),%eax
 8ad1b1e:	08 
 8ad1b1f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad1b22:	83 c6 01             	add    $0x1,%esi
 8ad1b25:	39 72 30             	cmp    %esi,0x30(%edx)
 8ad1b28:	0f 87 72 ff ff ff    	ja     8ad1aa0 <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x20>
 8ad1b2e:	83 c4 04             	add    $0x4,%esp
 8ad1b31:	5b                   	pop    %ebx
 8ad1b32:	5e                   	pop    %esi
 8ad1b33:	5f                   	pop    %edi
 8ad1b34:	5d                   	pop    %ebp
 8ad1b35:	c3                   	ret
 8ad1b36:	66 90                	xchg   %ax,%ax
 8ad1b38:	8b 04 85 a0 f0 e2 08 	mov    0x8e2f0a0(,%eax,4),%eax
 8ad1b3f:	eb de                	jmp    8ad1b1f <_ZN23__dnf_script__FlexLexer21yy_get_previous_stateEv+0x9f>
 8ad1b41:	90                   	nop
 8ad1b42:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1b49:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_get_previous_state @ 0x8ad1a80

/* DWARF original prototype: yy_state_type yy_get_previous_state(__dnf_script__FlexLexer * this) */

yy_state_type __thiscall
__dnf_script__FlexLexer::yy_get_previous_state(__dnf_script__FlexLexer *this)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
                    /* Unresolved local var: yy_state_type yy_current_state@[???]
                       Unresolved local var: char * yy_cp@[???] */
  pbVar5 = (byte *)(this->super_FlexLexer).yytext;
  iVar3 = this->yy_start;
  if (pbVar5 < this->yy_c_buf_p) {
    do {
      sVar2 = yy_accept[iVar3];
      if (sVar2 != 0) {
        this->yy_last_accepting_state = iVar3;
        this->yy_last_accepting_cpos = (char *)pbVar5;
      }
      bVar1 = *pbVar5;
      if (bVar1 == 0) {
        iVar3 = yy_NUL_trans[iVar3];
      }
      else {
                    /* Unresolved local var: YY_CHAR yy_c@[???] */
        if (sVar2 != 0) {
          this->yy_last_accepting_state = iVar3;
          this->yy_last_accepting_cpos = (char *)pbVar5;
        }
        iVar4 = (int)yy_base[iVar3];
        if (iVar3 != yy_chk[iVar4 + (uint)bVar1]) {
          do {
            iVar3 = (int)yy_def[iVar3];
            iVar4 = (int)yy_base[iVar3];
          } while (yy_chk[iVar4 + (uint)bVar1] != iVar3);
        }
        iVar3 = (int)yy_nxt[iVar4 + (uint)bVar1];
      }
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 < this->yy_c_buf_p);
  }
  return iVar3;
}

```

---

## yy_init_buffer

```asm
// === 08ad25a0 __dnf_script__FlexLexer::yy_init_buffer  [0x08ad25a0-0x8ad261f] ===
 8ad25a0:	55                   	push   %ebp
 8ad25a1:	89 e5                	mov    %esp,%ebp
 8ad25a3:	83 ec 38             	sub    $0x38,%esp
 8ad25a6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad25a9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ad25ac:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad25af:	8b 75 08             	mov    0x8(%ebp),%esi
 8ad25b2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad25b5:	e8 b6 b7 5a ff       	call   807dd70 <__errno_location@plt>
 8ad25ba:	8b 08                	mov    (%eax),%ecx
 8ad25bc:	89 c7                	mov    %eax,%edi
 8ad25be:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad25c2:	89 34 24             	mov    %esi,(%esp)
 8ad25c5:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8ad25c8:	e8 a3 f6 ff ff       	call   8ad1c70 <_ZN23__dnf_script__FlexLexer15yy_flush_bufferEP15yy_buffer_state>
 8ad25cd:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad25d0:	8b 56 48             	mov    0x48(%esi),%edx
 8ad25d3:	c7 43 28 01 00 00 00 	movl   $0x1,0x28(%ebx)
 8ad25da:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8ad25dd:	89 03                	mov    %eax,(%ebx)
 8ad25df:	31 c0                	xor    %eax,%eax
 8ad25e1:	85 d2                	test   %edx,%edx
 8ad25e3:	74 06                	je     8ad25eb <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi+0x4b>
 8ad25e5:	8b 46 40             	mov    0x40(%esi),%eax
 8ad25e8:	8b 04 82             	mov    (%edx,%eax,4),%eax
 8ad25eb:	39 d8                	cmp    %ebx,%eax
 8ad25ed:	74 0e                	je     8ad25fd <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi+0x5d>
 8ad25ef:	c7 43 20 01 00 00 00 	movl   $0x1,0x20(%ebx)
 8ad25f6:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 8ad25fd:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 8ad2604:	89 0f                	mov    %ecx,(%edi)
 8ad2606:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad2609:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad260c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad260f:	89 ec                	mov    %ebp,%esp
 8ad2611:	5d                   	pop    %ebp
 8ad2612:	c3                   	ret
 8ad2613:	90                   	nop
 8ad2614:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad261a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// __dnf_script__FlexLexer::yy_init_buffer @ 0x8ad25a0

/* DWARF original prototype: void yy_init_buffer(__dnf_script__FlexLexer * this, YY_BUFFER_STATE b,
   istream * file) */

void __thiscall
__dnf_script__FlexLexer::yy_init_buffer
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE b,istream *file)

{
  int iVar1;
  yy_buffer_state **ppyVar2;
  int *piVar3;
  yy_buffer_state *pyVar4;
  
                    /* Unresolved local var: int oerrno@[???] */
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  yy_flush_buffer(this,b);
  ppyVar2 = this->yy_buffer_stack;
  b->yy_fill_buffer = 1;
  b->yy_input_file = file;
  pyVar4 = (yy_buffer_state *)0x0;
  if (ppyVar2 != (yy_buffer_state **)0x0) {
    pyVar4 = ppyVar2[this->yy_buffer_stack_top];
  }
  if (pyVar4 != b) {
    b->yy_bs_lineno = 1;
    b->yy_bs_column = 0;
  }
  b->yy_is_interactive = 0;
  *piVar3 = iVar1;
  return;
}

```

---

## yy_load_buffer_state

```asm
// === 08ad1c40 __dnf_script__FlexLexer::yy_load_buffer_state  [0x08ad1c40-0x8ad1c6f] ===
 8ad1c40:	55                   	push   %ebp
 8ad1c41:	89 e5                	mov    %esp,%ebp
 8ad1c43:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad1c46:	8b 50 48             	mov    0x48(%eax),%edx
 8ad1c49:	8b 48 40             	mov    0x40(%eax),%ecx
 8ad1c4c:	8b 0c 8a             	mov    (%edx,%ecx,4),%ecx
 8ad1c4f:	8b 51 10             	mov    0x10(%ecx),%edx
 8ad1c52:	89 50 2c             	mov    %edx,0x2c(%eax)
 8ad1c55:	8b 51 08             	mov    0x8(%ecx),%edx
 8ad1c58:	8b 09                	mov    (%ecx),%ecx
 8ad1c5a:	89 50 30             	mov    %edx,0x30(%eax)
 8ad1c5d:	89 50 04             	mov    %edx,0x4(%eax)
 8ad1c60:	89 48 20             	mov    %ecx,0x20(%eax)
 8ad1c63:	0f b6 12             	movzbl (%edx),%edx
 8ad1c66:	88 50 28             	mov    %dl,0x28(%eax)
 8ad1c69:	5d                   	pop    %ebp
 8ad1c6a:	c3                   	ret
 8ad1c6b:	90                   	nop
 8ad1c6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::yy_load_buffer_state @ 0x8ad1c40

/* DWARF original prototype: void yy_load_buffer_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yy_load_buffer_state(__dnf_script__FlexLexer *this)

{
  yy_buffer_state *pyVar1;
  char *pcVar2;
  istream *piVar3;
  
  pyVar1 = this->yy_buffer_stack[this->yy_buffer_stack_top];
  this->yy_n_chars = pyVar1->yy_n_chars;
  pcVar2 = pyVar1->yy_buf_pos;
  piVar3 = pyVar1->yy_input_file;
  this->yy_c_buf_p = pcVar2;
  (this->super_FlexLexer).yytext = pcVar2;
  this->yyin = piVar3;
  this->yy_hold_char = *pcVar2;
  return;
}

```

---

## yy_pop_state

```asm
// === 08ad1d80 __dnf_script__FlexLexer::yy_pop_state  [0x08ad1d80-0x8ad1dcf] ===
 8ad1d80:	55                   	push   %ebp
 8ad1d81:	89 e5                	mov    %esp,%ebp
 8ad1d83:	53                   	push   %ebx
 8ad1d84:	83 ec 14             	sub    $0x14,%esp
 8ad1d87:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad1d8a:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad1d8d:	83 e8 01             	sub    $0x1,%eax
 8ad1d90:	85 c0                	test   %eax,%eax
 8ad1d92:	89 43 14             	mov    %eax,0x14(%ebx)
 8ad1d95:	78 19                	js     8ad1db0 <_ZN23__dnf_script__FlexLexer12yy_pop_stateEv+0x30>
 8ad1d97:	8b 53 1c             	mov    0x1c(%ebx),%edx
 8ad1d9a:	8b 04 82             	mov    (%edx,%eax,4),%eax
 8ad1d9d:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 8ad1da1:	89 43 38             	mov    %eax,0x38(%ebx)
 8ad1da4:	83 c4 14             	add    $0x14,%esp
 8ad1da7:	5b                   	pop    %ebx
 8ad1da8:	5d                   	pop    %ebp
 8ad1da9:	c3                   	ret
 8ad1daa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad1db0:	8b 03                	mov    (%ebx),%eax
 8ad1db2:	c7 44 24 04 a4 ed e2 	movl   $0x8e2eda4,0x4(%esp)
 8ad1db9:	08 
 8ad1dba:	89 1c 24             	mov    %ebx,(%esp)
 8ad1dbd:	ff 50 2c             	call   *0x2c(%eax)
 8ad1dc0:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad1dc3:	eb d2                	jmp    8ad1d97 <_ZN23__dnf_script__FlexLexer12yy_pop_stateEv+0x17>
 8ad1dc5:	90                   	nop
 8ad1dc6:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1dc9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_pop_state @ 0x8ad1d80

/* DWARF original prototype: void yy_pop_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yy_pop_state(__dnf_script__FlexLexer *this)

{
  int iVar1;
  
  iVar1 = this->yy_start_stack_ptr + -1;
  this->yy_start_stack_ptr = iVar1;
  if (iVar1 < 0) {
    (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"start-condition stack underflow");
    iVar1 = this->yy_start_stack_ptr;
  }
  this->yy_start = this->yy_start_stack[iVar1] * 2 + 1;
  return;
}

```

---

## yy_push_state

```asm
// === 08ad22b0 __dnf_script__FlexLexer::yy_push_state  [0x08ad22b0-0x8ad234f] ===
 8ad22b0:	55                   	push   %ebp
 8ad22b1:	89 e5                	mov    %esp,%ebp
 8ad22b3:	56                   	push   %esi
 8ad22b4:	53                   	push   %ebx
 8ad22b5:	83 ec 10             	sub    $0x10,%esp
 8ad22b8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad22bb:	8b 53 14             	mov    0x14(%ebx),%edx
 8ad22be:	8b 43 18             	mov    0x18(%ebx),%eax
 8ad22c1:	39 c2                	cmp    %eax,%edx
 8ad22c3:	7c 53                	jl     8ad2318 <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x68>
 8ad22c5:	8b 53 1c             	mov    0x1c(%ebx),%edx
 8ad22c8:	83 c0 19             	add    $0x19,%eax
 8ad22cb:	89 43 18             	mov    %eax,0x18(%ebx)
 8ad22ce:	c1 e0 02             	shl    $0x2,%eax
 8ad22d1:	85 d2                	test   %edx,%edx
 8ad22d3:	74 4b                	je     8ad2320 <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x70>
 8ad22d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad22d9:	89 14 24             	mov    %edx,(%esp)
 8ad22dc:	e8 3f bf 5a ff       	call   807e220 <realloc@plt>
 8ad22e1:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8ad22e4:	85 c0                	test   %eax,%eax
 8ad22e6:	74 48                	je     8ad2330 <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x80>
 8ad22e8:	8b 53 14             	mov    0x14(%ebx),%edx
 8ad22eb:	8b 4b 38             	mov    0x38(%ebx),%ecx
 8ad22ee:	83 e9 01             	sub    $0x1,%ecx
 8ad22f1:	89 ce                	mov    %ecx,%esi
 8ad22f3:	c1 ee 1f             	shr    $0x1f,%esi
 8ad22f6:	8d 0c 0e             	lea    (%esi,%ecx,1),%ecx
 8ad22f9:	d1 f9                	sar    $1,%ecx
 8ad22fb:	89 0c 90             	mov    %ecx,(%eax,%edx,4)
 8ad22fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad2301:	83 c2 01             	add    $0x1,%edx
 8ad2304:	89 53 14             	mov    %edx,0x14(%ebx)
 8ad2307:	8d 44 00 01          	lea    0x1(%eax,%eax,1),%eax
 8ad230b:	89 43 38             	mov    %eax,0x38(%ebx)
 8ad230e:	83 c4 10             	add    $0x10,%esp
 8ad2311:	5b                   	pop    %ebx
 8ad2312:	5e                   	pop    %esi
 8ad2313:	5d                   	pop    %ebp
 8ad2314:	c3                   	ret
 8ad2315:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2318:	8b 43 1c             	mov    0x1c(%ebx),%eax
 8ad231b:	eb ce                	jmp    8ad22eb <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x3b>
 8ad231d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2320:	89 04 24             	mov    %eax,(%esp)
 8ad2323:	e8 58 bc 5a ff       	call   807df80 <malloc@plt>
 8ad2328:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8ad232b:	eb b7                	jmp    8ad22e4 <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x34>
 8ad232d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2330:	8b 03                	mov    (%ebx),%eax
 8ad2332:	c7 44 24 04 58 ee e2 	movl   $0x8e2ee58,0x4(%esp)
 8ad2339:	08 
 8ad233a:	89 1c 24             	mov    %ebx,(%esp)
 8ad233d:	ff 50 2c             	call   *0x2c(%eax)
 8ad2340:	8b 43 1c             	mov    0x1c(%ebx),%eax
 8ad2343:	eb a3                	jmp    8ad22e8 <_ZN23__dnf_script__FlexLexer13yy_push_stateEi+0x38>
 8ad2345:	90                   	nop
 8ad2346:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2349:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_push_state @ 0x8ad22b0

/* DWARF original prototype: void yy_push_state(__dnf_script__FlexLexer * this, int new_state) */

void __thiscall __dnf_script__FlexLexer::yy_push_state(__dnf_script__FlexLexer *this,int new_state)

{
  int iVar1;
  size_t __size;
  int *piVar2;
  
  iVar1 = this->yy_start_stack_ptr;
  if (iVar1 < this->yy_start_stack_depth) {
    piVar2 = this->yy_start_stack;
  }
  else {
                    /* Unresolved local var: yy_size_t new_size@[???] */
    iVar1 = this->yy_start_stack_depth + 0x19;
    this->yy_start_stack_depth = iVar1;
    __size = iVar1 * 4;
    if (this->yy_start_stack == (int *)0x0) {
      piVar2 = malloc(__size);
      this->yy_start_stack = piVar2;
    }
    else {
      piVar2 = realloc(this->yy_start_stack,__size);
      this->yy_start_stack = piVar2;
    }
    if (piVar2 == (int *)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of memory expanding start-condition stack");
      piVar2 = this->yy_start_stack;
    }
    iVar1 = this->yy_start_stack_ptr;
  }
  piVar2[iVar1] = (this->yy_start + -1) / 2;
  this->yy_start_stack_ptr = iVar1 + 1;
  this->yy_start = new_state * 2 + 1;
  return;
}

```

---

## yy_switch_to_buffer

```asm
// === 08ad2500 __dnf_script__FlexLexer::yy_switch_to_buffer  [0x08ad2500-0x8ad259f] ===
 8ad2500:	55                   	push   %ebp
 8ad2501:	89 e5                	mov    %esp,%ebp
 8ad2503:	56                   	push   %esi
 8ad2504:	53                   	push   %ebx
 8ad2505:	83 ec 10             	sub    $0x10,%esp
 8ad2508:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad250b:	8b 75 0c             	mov    0xc(%ebp),%esi
 8ad250e:	89 1c 24             	mov    %ebx,(%esp)
 8ad2511:	e8 3a fe ff ff       	call   8ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>
 8ad2516:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2519:	31 d2                	xor    %edx,%edx
 8ad251b:	85 c0                	test   %eax,%eax
 8ad251d:	74 06                	je     8ad2525 <_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x25>
 8ad251f:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2522:	8b 14 90             	mov    (%eax,%edx,4),%edx
 8ad2525:	39 f2                	cmp    %esi,%edx
 8ad2527:	74 5f                	je     8ad2588 <_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x88>
 8ad2529:	85 c0                	test   %eax,%eax
 8ad252b:	74 63                	je     8ad2590 <_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x90>
 8ad252d:	8b 4b 40             	mov    0x40(%ebx),%ecx
 8ad2530:	8d 14 88             	lea    (%eax,%ecx,4),%edx
 8ad2533:	83 3a 00             	cmpl   $0x0,(%edx)
 8ad2536:	74 2a                	je     8ad2562 <_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x62>
 8ad2538:	0f b6 53 28          	movzbl 0x28(%ebx),%edx
 8ad253c:	8b 43 30             	mov    0x30(%ebx),%eax
 8ad253f:	88 10                	mov    %dl,(%eax)
 8ad2541:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2544:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2547:	8b 4b 30             	mov    0x30(%ebx),%ecx
 8ad254a:	8b 14 90             	mov    (%eax,%edx,4),%edx
 8ad254d:	89 4a 08             	mov    %ecx,0x8(%edx)
 8ad2550:	8b 4b 2c             	mov    0x2c(%ebx),%ecx
 8ad2553:	89 4a 10             	mov    %ecx,0x10(%edx)
 8ad2556:	8b 4b 40             	mov    0x40(%ebx),%ecx
 8ad2559:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
 8ad2560:	01 c2                	add    %eax,%edx
 8ad2562:	89 32                	mov    %esi,(%edx)
 8ad2564:	8b 14 88             	mov    (%eax,%ecx,4),%edx
 8ad2567:	8b 42 10             	mov    0x10(%edx),%eax
 8ad256a:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad256d:	8b 42 08             	mov    0x8(%edx),%eax
 8ad2570:	8b 12                	mov    (%edx),%edx
 8ad2572:	89 43 30             	mov    %eax,0x30(%ebx)
 8ad2575:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad2578:	89 53 20             	mov    %edx,0x20(%ebx)
 8ad257b:	0f b6 00             	movzbl (%eax),%eax
 8ad257e:	c7 43 3c 01 00 00 00 	movl   $0x1,0x3c(%ebx)
 8ad2585:	88 43 28             	mov    %al,0x28(%ebx)
 8ad2588:	83 c4 10             	add    $0x10,%esp
 8ad258b:	5b                   	pop    %ebx
 8ad258c:	5e                   	pop    %esi
 8ad258d:	5d                   	pop    %ebp
 8ad258e:	c3                   	ret
 8ad258f:	90                   	nop
 8ad2590:	8b 4b 40             	mov    0x40(%ebx),%ecx
 8ad2593:	8d 14 8d 00 00 00 00 	lea    0x0(,%ecx,4),%edx
 8ad259a:	eb c6                	jmp    8ad2562 <_ZN23__dnf_script__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x62>
 8ad259c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::yy_switch_to_buffer @ 0x8ad2500

/* DWARF original prototype: void yy_switch_to_buffer(__dnf_script__FlexLexer * this,
   YY_BUFFER_STATE new_buffer) */

void __thiscall
__dnf_script__FlexLexer::yy_switch_to_buffer
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE new_buffer)

{
  char cVar1;
  char *pcVar2;
  istream *piVar3;
  yy_buffer_state **ppyVar4;
  size_t sVar5;
  yy_buffer_state *pyVar6;
  yy_buffer_state **ppyVar7;
  
  yyensure_buffer_stack(this);
  ppyVar4 = this->yy_buffer_stack;
  pyVar6 = (yy_buffer_state *)0x0;
  if (ppyVar4 != (yy_buffer_state **)0x0) {
    pyVar6 = ppyVar4[this->yy_buffer_stack_top];
  }
  if (pyVar6 != new_buffer) {
    if (ppyVar4 == (yy_buffer_state **)0x0) {
      sVar5 = this->yy_buffer_stack_top;
      ppyVar7 = (yy_buffer_state **)(sVar5 * 4);
    }
    else {
      sVar5 = this->yy_buffer_stack_top;
      ppyVar7 = ppyVar4 + sVar5;
      if (*ppyVar7 != (yy_buffer_state *)0x0) {
        *this->yy_c_buf_p = this->yy_hold_char;
        ppyVar4 = this->yy_buffer_stack;
        pyVar6 = ppyVar4[this->yy_buffer_stack_top];
        pyVar6->yy_buf_pos = this->yy_c_buf_p;
        pyVar6->yy_n_chars = this->yy_n_chars;
        sVar5 = this->yy_buffer_stack_top;
        ppyVar7 = ppyVar4 + sVar5;
      }
    }
    *ppyVar7 = new_buffer;
    pyVar6 = ppyVar4[sVar5];
    this->yy_n_chars = pyVar6->yy_n_chars;
    pcVar2 = pyVar6->yy_buf_pos;
    piVar3 = pyVar6->yy_input_file;
    this->yy_c_buf_p = pcVar2;
    (this->super_FlexLexer).yytext = pcVar2;
    this->yyin = piVar3;
    cVar1 = *pcVar2;
    this->yy_did_buffer_switch_on_eof = 1;
    this->yy_hold_char = cVar1;
  }
  return;
}

```

---

## yy_top_state

```asm
// === 08ad1dd0 __dnf_script__FlexLexer::yy_top_state  [0x08ad1dd0-0x8ad1def] ===
 8ad1dd0:	55                   	push   %ebp
 8ad1dd1:	89 e5                	mov    %esp,%ebp
 8ad1dd3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad1dd6:	5d                   	pop    %ebp
 8ad1dd7:	8b 50 14             	mov    0x14(%eax),%edx
 8ad1dda:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ad1ddd:	8b 44 90 fc          	mov    -0x4(%eax,%edx,4),%eax
 8ad1de1:	c3                   	ret
 8ad1de2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1de9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yy_top_state @ 0x8ad1dd0

/* DWARF original prototype: int yy_top_state(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yy_top_state(__dnf_script__FlexLexer *this)

{
  return this->yy_start_stack[this->yy_start_stack_ptr + -1];
}

```

---

## yy_try_NUL_trans

```asm
// === 08ad1b50 __dnf_script__FlexLexer::yy_try_NUL_trans  [0x08ad1b50-0x8ad1b5f] ===
 8ad1b50:	55                   	push   %ebp
 8ad1b51:	89 e5                	mov    %esp,%ebp
 8ad1b53:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad1b56:	5d                   	pop    %ebp
 8ad1b57:	8b 04 85 a0 f0 e2 08 	mov    0x8e2f0a0(,%eax,4),%eax
 8ad1b5e:	c3                   	ret
 8ad1b5f:	90                   	nop

```

```c
// __dnf_script__FlexLexer::yy_try_NUL_trans @ 0x8ad1b50

/* DWARF original prototype: yy_state_type yy_try_NUL_trans(__dnf_script__FlexLexer * this,
   yy_state_type yy_current_state) */

yy_state_type __thiscall
__dnf_script__FlexLexer::yy_try_NUL_trans
          (__dnf_script__FlexLexer *this,yy_state_type yy_current_state)

{
  return yy_NUL_trans[yy_current_state];
}

```

---

## yyensure_buffer_stack

```asm
// === 08ad2350 __dnf_script__FlexLexer::yyensure_buffer_stack  [0x08ad2350-0x8ad241f] ===
 8ad2350:	55                   	push   %ebp
 8ad2351:	89 e5                	mov    %esp,%ebp
 8ad2353:	83 ec 18             	sub    $0x18,%esp
 8ad2356:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ad2359:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad235c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ad235f:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2362:	85 c0                	test   %eax,%eax
 8ad2364:	74 5a                	je     8ad23c0 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x70>
 8ad2366:	8b 73 44             	mov    0x44(%ebx),%esi
 8ad2369:	8d 56 ff             	lea    -0x1(%esi),%edx
 8ad236c:	39 53 40             	cmp    %edx,0x40(%ebx)
 8ad236f:	73 0f                	jae    8ad2380 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x30>
 8ad2371:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad2374:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad2377:	89 ec                	mov    %ebp,%esp
 8ad2379:	5d                   	pop    %ebp
 8ad237a:	c3                   	ret
 8ad237b:	90                   	nop
 8ad237c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad2380:	83 c6 08             	add    $0x8,%esi
 8ad2383:	8d 14 b5 00 00 00 00 	lea    0x0(,%esi,4),%edx
 8ad238a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad238e:	89 04 24             	mov    %eax,(%esp)
 8ad2391:	e8 8a be 5a ff       	call   807e220 <realloc@plt>
 8ad2396:	85 c0                	test   %eax,%eax
 8ad2398:	89 43 48             	mov    %eax,0x48(%ebx)
 8ad239b:	74 53                	je     8ad23f0 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0xa0>
 8ad239d:	8b 53 44             	mov    0x44(%ebx),%edx
 8ad23a0:	8d 14 90             	lea    (%eax,%edx,4),%edx
 8ad23a3:	31 c0                	xor    %eax,%eax
 8ad23a5:	c7 04 02 00 00 00 00 	movl   $0x0,(%edx,%eax,1)
 8ad23ac:	83 c0 04             	add    $0x4,%eax
 8ad23af:	83 f8 20             	cmp    $0x20,%eax
 8ad23b2:	72 f1                	jb     8ad23a5 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x55>
 8ad23b4:	89 73 44             	mov    %esi,0x44(%ebx)
 8ad23b7:	eb b8                	jmp    8ad2371 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x21>
 8ad23b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad23c0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8ad23c7:	e8 b4 bb 5a ff       	call   807df80 <malloc@plt>
 8ad23cc:	85 c0                	test   %eax,%eax
 8ad23ce:	89 43 48             	mov    %eax,0x48(%ebx)
 8ad23d1:	74 32                	je     8ad2405 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0xb5>
 8ad23d3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad23d9:	c7 43 44 01 00 00 00 	movl   $0x1,0x44(%ebx)
 8ad23e0:	c7 43 40 00 00 00 00 	movl   $0x0,0x40(%ebx)
 8ad23e7:	eb 88                	jmp    8ad2371 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x21>
 8ad23e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad23f0:	8b 03                	mov    (%ebx),%eax
 8ad23f2:	c7 44 24 04 88 ee e2 	movl   $0x8e2ee88,0x4(%esp)
 8ad23f9:	08 
 8ad23fa:	89 1c 24             	mov    %ebx,(%esp)
 8ad23fd:	ff 50 2c             	call   *0x2c(%eax)
 8ad2400:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2403:	eb 98                	jmp    8ad239d <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x4d>
 8ad2405:	8b 03                	mov    (%ebx),%eax
 8ad2407:	c7 44 24 04 88 ee e2 	movl   $0x8e2ee88,0x4(%esp)
 8ad240e:	08 
 8ad240f:	89 1c 24             	mov    %ebx,(%esp)
 8ad2412:	ff 50 2c             	call   *0x2c(%eax)
 8ad2415:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2418:	eb b9                	jmp    8ad23d3 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv+0x83>
 8ad241a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// __dnf_script__FlexLexer::yyensure_buffer_stack @ 0x8ad2350

/* DWARF original prototype: void yyensure_buffer_stack(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yyensure_buffer_stack(__dnf_script__FlexLexer *this)

{
  size_t sVar1;
  yy_buffer_state **ppyVar2;
  uint uVar3;
  size_t sVar4;
  
                    /* Unresolved local var: int num_to_alloc@[???] */
  if (this->yy_buffer_stack == (yy_buffer_state **)0x0) {
    ppyVar2 = malloc(4);
    this->yy_buffer_stack = ppyVar2;
    if (ppyVar2 == (yy_buffer_state **)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yyensure_buffer_stack()");
      ppyVar2 = this->yy_buffer_stack;
    }
    *ppyVar2 = (yy_buffer_state *)0x0;
    this->yy_buffer_stack_max = 1;
    this->yy_buffer_stack_top = 0;
  }
  else if (this->yy_buffer_stack_max - 1 <= this->yy_buffer_stack_top) {
                    /* Unresolved local var: int grow_size@[???] */
    sVar4 = this->yy_buffer_stack_max + 8;
    ppyVar2 = realloc(this->yy_buffer_stack,sVar4 * 4);
    this->yy_buffer_stack = ppyVar2;
    if (ppyVar2 == (yy_buffer_state **)0x0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
                (this,"out of dynamic memory in yyensure_buffer_stack()");
      ppyVar2 = this->yy_buffer_stack;
    }
    sVar1 = this->yy_buffer_stack_max;
    uVar3 = 0;
    do {
      *(undefined4 *)((int)ppyVar2 + uVar3 + sVar1 * 4) = 0;
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x20);
    this->yy_buffer_stack_max = sVar4;
  }
  return;
}

```

---

## yyinput

```asm
// === 08ad21c0 __dnf_script__FlexLexer::yyinput  [0x08ad21c0-0x8ad229f] ===
 8ad21c0:	55                   	push   %ebp
 8ad21c1:	89 e5                	mov    %esp,%ebp
 8ad21c3:	56                   	push   %esi
 8ad21c4:	53                   	push   %ebx
 8ad21c5:	83 ec 10             	sub    $0x10,%esp
 8ad21c8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad21cb:	0f b6 53 28          	movzbl 0x28(%ebx),%edx
 8ad21cf:	8b 43 30             	mov    0x30(%ebx),%eax
 8ad21d2:	88 10                	mov    %dl,(%eax)
 8ad21d4:	8b 53 30             	mov    0x30(%ebx),%edx
 8ad21d7:	80 3a 00             	cmpb   $0x0,(%edx)
 8ad21da:	75 40                	jne    8ad221c <_ZN23__dnf_script__FlexLexer7yyinputEv+0x5c>
 8ad21dc:	8b 4b 40             	mov    0x40(%ebx),%ecx
 8ad21df:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad21e2:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 8ad21e5:	8b 40 04             	mov    0x4(%eax),%eax
 8ad21e8:	03 43 2c             	add    0x2c(%ebx),%eax
 8ad21eb:	39 c2                	cmp    %eax,%edx
 8ad21ed:	0f 82 9d 00 00 00    	jb     8ad2290 <_ZN23__dnf_script__FlexLexer7yyinputEv+0xd0>
 8ad21f3:	89 d6                	mov    %edx,%esi
 8ad21f5:	83 c2 01             	add    $0x1,%edx
 8ad21f8:	89 53 30             	mov    %edx,0x30(%ebx)
 8ad21fb:	2b 73 04             	sub    0x4(%ebx),%esi
 8ad21fe:	89 1c 24             	mov    %ebx,(%esp)
 8ad2201:	e8 9a fc ff ff       	call   8ad1ea0 <_ZN23__dnf_script__FlexLexer18yy_get_next_bufferEv>
 8ad2206:	83 f8 01             	cmp    $0x1,%eax
 8ad2209:	74 4c                	je     8ad2257 <_ZN23__dnf_script__FlexLexer7yyinputEv+0x97>
 8ad220b:	83 f8 02             	cmp    $0x2,%eax
 8ad220e:	74 38                	je     8ad2248 <_ZN23__dnf_script__FlexLexer7yyinputEv+0x88>
 8ad2210:	85 c0                	test   %eax,%eax
 8ad2212:	75 74                	jne    8ad2288 <_ZN23__dnf_script__FlexLexer7yyinputEv+0xc8>
 8ad2214:	8b 53 04             	mov    0x4(%ebx),%edx
 8ad2217:	01 f2                	add    %esi,%edx
 8ad2219:	89 53 30             	mov    %edx,0x30(%ebx)
 8ad221c:	0f b6 02             	movzbl (%edx),%eax
 8ad221f:	c6 02 00             	movb   $0x0,(%edx)
 8ad2222:	8b 53 30             	mov    0x30(%ebx),%edx
 8ad2225:	83 f8 0a             	cmp    $0xa,%eax
 8ad2228:	8d 4a 01             	lea    0x1(%edx),%ecx
 8ad222b:	89 4b 30             	mov    %ecx,0x30(%ebx)
 8ad222e:	0f b6 52 01          	movzbl 0x1(%edx),%edx
 8ad2232:	88 53 28             	mov    %dl,0x28(%ebx)
 8ad2235:	75 04                	jne    8ad223b <_ZN23__dnf_script__FlexLexer7yyinputEv+0x7b>
 8ad2237:	83 43 0c 01          	addl   $0x1,0xc(%ebx)
 8ad223b:	83 c4 10             	add    $0x10,%esp
 8ad223e:	5b                   	pop    %ebx
 8ad223f:	5e                   	pop    %esi
 8ad2240:	5d                   	pop    %ebp
 8ad2241:	c3                   	ret
 8ad2242:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad2248:	8b 03                	mov    (%ebx),%eax
 8ad224a:	8b 53 20             	mov    0x20(%ebx),%edx
 8ad224d:	89 1c 24             	mov    %ebx,(%esp)
 8ad2250:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2254:	ff 50 14             	call   *0x14(%eax)
 8ad2257:	8b 03                	mov    (%ebx),%eax
 8ad2259:	89 1c 24             	mov    %ebx,(%esp)
 8ad225c:	ff 50 20             	call   *0x20(%eax)
 8ad225f:	85 c0                	test   %eax,%eax
 8ad2261:	75 35                	jne    8ad2298 <_ZN23__dnf_script__FlexLexer7yyinputEv+0xd8>
 8ad2263:	8b 43 3c             	mov    0x3c(%ebx),%eax
 8ad2266:	85 c0                	test   %eax,%eax
 8ad2268:	0f 85 5d ff ff ff    	jne    8ad21cb <_ZN23__dnf_script__FlexLexer7yyinputEv+0xb>
 8ad226e:	8b 03                	mov    (%ebx),%eax
 8ad2270:	8b 53 20             	mov    0x20(%ebx),%edx
 8ad2273:	89 1c 24             	mov    %ebx,(%esp)
 8ad2276:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad227a:	ff 50 14             	call   *0x14(%eax)
 8ad227d:	e9 49 ff ff ff       	jmp    8ad21cb <_ZN23__dnf_script__FlexLexer7yyinputEv+0xb>
 8ad2282:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad2288:	8b 53 30             	mov    0x30(%ebx),%edx
 8ad228b:	eb 8f                	jmp    8ad221c <_ZN23__dnf_script__FlexLexer7yyinputEv+0x5c>
 8ad228d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad2290:	c6 02 00             	movb   $0x0,(%edx)
 8ad2293:	8b 53 30             	mov    0x30(%ebx),%edx
 8ad2296:	eb 84                	jmp    8ad221c <_ZN23__dnf_script__FlexLexer7yyinputEv+0x5c>
 8ad2298:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad229d:	eb 9c                	jmp    8ad223b <_ZN23__dnf_script__FlexLexer7yyinputEv+0x7b>
 8ad229f:	90                   	nop

```

```c
// __dnf_script__FlexLexer::yyinput @ 0x8ad21c0

/* DWARF original prototype: int yyinput(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yyinput(__dnf_script__FlexLexer *this)

{
  int *piVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  
  do {
                    /* Unresolved local var: int c@[???] */
    *this->yy_c_buf_p = this->yy_hold_char;
    pbVar5 = (byte *)this->yy_c_buf_p;
    if (*pbVar5 != 0) {
LAB_08ad221c:
      bVar2 = *pbVar5;
      *pbVar5 = 0;
      pcVar3 = this->yy_c_buf_p;
      this->yy_c_buf_p = pcVar3 + 1;
      this->yy_hold_char = pcVar3[1];
      if (bVar2 == 10) {
        piVar1 = &(this->super_FlexLexer).yylineno;
        *piVar1 = *piVar1 + 1;
      }
      return (uint)bVar2;
    }
    if (pbVar5 < this->yy_buffer_stack[this->yy_buffer_stack_top]->yy_ch_buf + this->yy_n_chars) {
      *pbVar5 = 0;
      pbVar5 = (byte *)this->yy_c_buf_p;
      goto LAB_08ad221c;
    }
                    /* Unresolved local var: int offset@[???] */
    this->yy_c_buf_p = (char *)(pbVar5 + 1);
    pcVar3 = (this->super_FlexLexer).yytext;
    iVar4 = yy_get_next_buffer(this);
    if (iVar4 != 1) {
      if (iVar4 != 2) {
        if (iVar4 == 0) {
          pbVar5 = (byte *)((this->super_FlexLexer).yytext + ((int)pbVar5 - (int)pcVar3));
          this->yy_c_buf_p = (char *)pbVar5;
        }
        else {
          pbVar5 = (byte *)this->yy_c_buf_p;
        }
        goto LAB_08ad221c;
      }
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
    }
    iVar4 = (*(this->super_FlexLexer)._vptr_FlexLexer[8])(this);
    if (iVar4 != 0) {
      return -1;
    }
    if (this->yy_did_buffer_switch_on_eof == 0) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[5])(this,this->yyin);
    }
  } while( true );
}

```

---

## yylex

```asm
// === 08ad1920 __dnf_script__FlexLexer::yylex  [0x08ad1920-0x8ad193f] ===
 8ad1920:	55                   	push   %ebp
 8ad1921:	89 e5                	mov    %esp,%ebp
 8ad1923:	83 ec 18             	sub    $0x18,%esp
 8ad1926:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad1929:	8b 10                	mov    (%eax),%edx
 8ad192b:	89 04 24             	mov    %eax,(%esp)
 8ad192e:	c7 44 24 04 50 ed e2 	movl   $0x8e2ed50,0x4(%esp)
 8ad1935:	08 
 8ad1936:	ff 52 2c             	call   *0x2c(%edx)
 8ad1939:	31 c0                	xor    %eax,%eax
 8ad193b:	c9                   	leave
 8ad193c:	c3                   	ret
 8ad193d:	90                   	nop
 8ad193e:	66 90                	xchg   %ax,%ax

```

```c
// __dnf_script__FlexLexer::yylex @ 0x8ad1920

/* DWARF original prototype: int yylex(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yylex(__dnf_script__FlexLexer *this)

{
  (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])
            (this,"yyFlexLexer::yylex invoked but %option yyclass used");
  return 0;
}

```

---

## yypop_buffer_state

```asm
// === 08ad1d00 __dnf_script__FlexLexer::yypop_buffer_state  [0x08ad1d00-0x8ad1d7f] ===
 8ad1d00:	55                   	push   %ebp
 8ad1d01:	89 e5                	mov    %esp,%ebp
 8ad1d03:	53                   	push   %ebx
 8ad1d04:	83 ec 14             	sub    $0x14,%esp
 8ad1d07:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad1d0a:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad1d0d:	85 c0                	test   %eax,%eax
 8ad1d0f:	74 56                	je     8ad1d67 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x67>
 8ad1d11:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1d14:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad1d17:	85 c0                	test   %eax,%eax
 8ad1d19:	74 4c                	je     8ad1d67 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x67>
 8ad1d1b:	8b 13                	mov    (%ebx),%edx
 8ad1d1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1d21:	89 1c 24             	mov    %ebx,(%esp)
 8ad1d24:	ff 52 10             	call   *0x10(%edx)
 8ad1d27:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1d2a:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad1d2d:	85 d2                	test   %edx,%edx
 8ad1d2f:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 8ad1d36:	75 38                	jne    8ad1d70 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x70>
 8ad1d38:	85 c0                	test   %eax,%eax
 8ad1d3a:	74 2b                	je     8ad1d67 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x67>
 8ad1d3c:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad1d3f:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad1d42:	85 c0                	test   %eax,%eax
 8ad1d44:	74 21                	je     8ad1d67 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x67>
 8ad1d46:	8b 50 10             	mov    0x10(%eax),%edx
 8ad1d49:	89 53 2c             	mov    %edx,0x2c(%ebx)
 8ad1d4c:	8b 50 08             	mov    0x8(%eax),%edx
 8ad1d4f:	8b 00                	mov    (%eax),%eax
 8ad1d51:	89 53 30             	mov    %edx,0x30(%ebx)
 8ad1d54:	89 53 04             	mov    %edx,0x4(%ebx)
 8ad1d57:	89 43 20             	mov    %eax,0x20(%ebx)
 8ad1d5a:	0f b6 02             	movzbl (%edx),%eax
 8ad1d5d:	c7 43 3c 01 00 00 00 	movl   $0x1,0x3c(%ebx)
 8ad1d64:	88 43 28             	mov    %al,0x28(%ebx)
 8ad1d67:	83 c4 14             	add    $0x14,%esp
 8ad1d6a:	5b                   	pop    %ebx
 8ad1d6b:	5d                   	pop    %ebp
 8ad1d6c:	c3                   	ret
 8ad1d6d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1d70:	83 ea 01             	sub    $0x1,%edx
 8ad1d73:	89 53 40             	mov    %edx,0x40(%ebx)
 8ad1d76:	eb c0                	jmp    8ad1d38 <_ZN23__dnf_script__FlexLexer18yypop_buffer_stateEv+0x38>
 8ad1d78:	90                   	nop
 8ad1d79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::yypop_buffer_state @ 0x8ad1d00

/* DWARF original prototype: void yypop_buffer_state(__dnf_script__FlexLexer * this) */

void __thiscall __dnf_script__FlexLexer::yypop_buffer_state(__dnf_script__FlexLexer *this)

{
  char cVar1;
  yy_buffer_state *pyVar2;
  size_t sVar3;
  yy_buffer_state **ppyVar4;
  char *pcVar5;
  istream *piVar6;
  
  if ((this->yy_buffer_stack != (yy_buffer_state **)0x0) &&
     (pyVar2 = this->yy_buffer_stack[this->yy_buffer_stack_top], pyVar2 != (yy_buffer_state *)0x0))
  {
    (*(this->super_FlexLexer)._vptr_FlexLexer[4])(this,pyVar2);
    sVar3 = this->yy_buffer_stack_top;
    ppyVar4 = this->yy_buffer_stack;
    ppyVar4[sVar3] = (yy_buffer_state *)0x0;
    if (sVar3 != 0) {
      this->yy_buffer_stack_top = sVar3 - 1;
    }
    if ((ppyVar4 != (yy_buffer_state **)0x0) &&
       (pyVar2 = ppyVar4[this->yy_buffer_stack_top], pyVar2 != (yy_buffer_state *)0x0)) {
      this->yy_n_chars = pyVar2->yy_n_chars;
      pcVar5 = pyVar2->yy_buf_pos;
      piVar6 = pyVar2->yy_input_file;
      this->yy_c_buf_p = pcVar5;
      (this->super_FlexLexer).yytext = pcVar5;
      this->yyin = piVar6;
      cVar1 = *pcVar5;
      this->yy_did_buffer_switch_on_eof = 1;
      this->yy_hold_char = cVar1;
    }
  }
  return;
}

```

---

## yypush_buffer_state

```asm
// === 08ad2420 __dnf_script__FlexLexer::yypush_buffer_state  [0x08ad2420-0x8ad24ff] ===
 8ad2420:	55                   	push   %ebp
 8ad2421:	89 e5                	mov    %esp,%ebp
 8ad2423:	83 ec 28             	sub    $0x28,%esp
 8ad2426:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad2429:	8b 75 0c             	mov    0xc(%ebp),%esi
 8ad242c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad242f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad2432:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad2435:	85 f6                	test   %esi,%esi
 8ad2437:	0f 84 91 00 00 00    	je     8ad24ce <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xae>
 8ad243d:	89 1c 24             	mov    %ebx,(%esp)
 8ad2440:	e8 0b ff ff ff       	call   8ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>
 8ad2445:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2448:	85 c0                	test   %eax,%eax
 8ad244a:	0f 84 90 00 00 00    	je     8ad24e0 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xc0>
 8ad2450:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2453:	8b 3c 90             	mov    (%eax,%edx,4),%edi
 8ad2456:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 8ad245d:	85 ff                	test   %edi,%edi
 8ad245f:	0f 84 8b 00 00 00    	je     8ad24f0 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xd0>
 8ad2465:	0f b6 53 28          	movzbl 0x28(%ebx),%edx
 8ad2469:	8b 43 30             	mov    0x30(%ebx),%eax
 8ad246c:	88 10                	mov    %dl,(%eax)
 8ad246e:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad2471:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2474:	8b 4b 30             	mov    0x30(%ebx),%ecx
 8ad2477:	8b 14 90             	mov    (%eax,%edx,4),%edx
 8ad247a:	85 c0                	test   %eax,%eax
 8ad247c:	89 4a 08             	mov    %ecx,0x8(%edx)
 8ad247f:	8b 4b 2c             	mov    0x2c(%ebx),%ecx
 8ad2482:	89 4a 10             	mov    %ecx,0x10(%edx)
 8ad2485:	74 59                	je     8ad24e0 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xc0>
 8ad2487:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad248a:	8b 3c 90             	mov    (%eax,%edx,4),%edi
 8ad248d:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 8ad2494:	85 ff                	test   %edi,%edi
 8ad2496:	74 58                	je     8ad24f0 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xd0>
 8ad2498:	83 c2 01             	add    $0x1,%edx
 8ad249b:	89 c7                	mov    %eax,%edi
 8ad249d:	89 53 40             	mov    %edx,0x40(%ebx)
 8ad24a0:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 8ad24a7:	89 34 0f             	mov    %esi,(%edi,%ecx,1)
 8ad24aa:	8b 14 90             	mov    (%eax,%edx,4),%edx
 8ad24ad:	8b 42 10             	mov    0x10(%edx),%eax
 8ad24b0:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad24b3:	8b 42 08             	mov    0x8(%edx),%eax
 8ad24b6:	8b 12                	mov    (%edx),%edx
 8ad24b8:	89 43 30             	mov    %eax,0x30(%ebx)
 8ad24bb:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad24be:	89 53 20             	mov    %edx,0x20(%ebx)
 8ad24c1:	0f b6 00             	movzbl (%eax),%eax
 8ad24c4:	c7 43 3c 01 00 00 00 	movl   $0x1,0x3c(%ebx)
 8ad24cb:	88 43 28             	mov    %al,0x28(%ebx)
 8ad24ce:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad24d1:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad24d4:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad24d7:	89 ec                	mov    %ebp,%esp
 8ad24d9:	5d                   	pop    %ebp
 8ad24da:	c3                   	ret
 8ad24db:	90                   	nop
 8ad24dc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad24e0:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad24e3:	31 ff                	xor    %edi,%edi
 8ad24e5:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 8ad24ec:	eb b9                	jmp    8ad24a7 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0x87>
 8ad24ee:	66 90                	xchg   %ax,%ax
 8ad24f0:	89 c7                	mov    %eax,%edi
 8ad24f2:	eb b3                	jmp    8ad24a7 <_ZN23__dnf_script__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0x87>
 8ad24f4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad24fa:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// __dnf_script__FlexLexer::yypush_buffer_state @ 0x8ad2420

/* DWARF original prototype: void yypush_buffer_state(__dnf_script__FlexLexer * this,
   YY_BUFFER_STATE new_buffer) */

void __thiscall
__dnf_script__FlexLexer::yypush_buffer_state
          (__dnf_script__FlexLexer *this,YY_BUFFER_STATE new_buffer)

{
  char cVar1;
  yy_buffer_state *pyVar2;
  char *pcVar3;
  istream *piVar4;
  yy_buffer_state **ppyVar5;
  int iVar6;
  size_t sVar7;
  yy_buffer_state **ppyVar8;
  
  if (new_buffer == (YY_BUFFER_STATE)0x0) {
    return;
  }
  yyensure_buffer_stack(this);
  ppyVar5 = this->yy_buffer_stack;
  if (ppyVar5 == (yy_buffer_state **)0x0) {
LAB_08ad24e0:
    sVar7 = this->yy_buffer_stack_top;
    ppyVar8 = (yy_buffer_state **)0x0;
    iVar6 = sVar7 * 4;
  }
  else {
    sVar7 = this->yy_buffer_stack_top;
    if (ppyVar5[sVar7] != (yy_buffer_state *)0x0) {
      *this->yy_c_buf_p = this->yy_hold_char;
      ppyVar5 = this->yy_buffer_stack;
      pyVar2 = ppyVar5[this->yy_buffer_stack_top];
      pyVar2->yy_buf_pos = this->yy_c_buf_p;
      pyVar2->yy_n_chars = this->yy_n_chars;
      if (ppyVar5 == (yy_buffer_state **)0x0) goto LAB_08ad24e0;
      sVar7 = this->yy_buffer_stack_top;
      if (ppyVar5[sVar7] != (yy_buffer_state *)0x0) {
        sVar7 = sVar7 + 1;
        this->yy_buffer_stack_top = sVar7;
        iVar6 = sVar7 * 4;
        ppyVar8 = ppyVar5;
        goto LAB_08ad24a7;
      }
    }
    iVar6 = sVar7 * 4;
    ppyVar8 = ppyVar5;
  }
LAB_08ad24a7:
  *(YY_BUFFER_STATE *)((int)ppyVar8 + iVar6) = new_buffer;
  pyVar2 = ppyVar5[sVar7];
  this->yy_n_chars = pyVar2->yy_n_chars;
  pcVar3 = pyVar2->yy_buf_pos;
  piVar4 = pyVar2->yy_input_file;
  this->yy_c_buf_p = pcVar3;
  (this->super_FlexLexer).yytext = pcVar3;
  this->yyin = piVar4;
  cVar1 = *pcVar3;
  this->yy_did_buffer_switch_on_eof = 1;
  this->yy_hold_char = cVar1;
  return;
}

```

---

## yyrestart

```asm
// === 08ad26c0 __dnf_script__FlexLexer::yyrestart  [0x08ad26c0-0x8ad275f] ===
 8ad26c0:	55                   	push   %ebp
 8ad26c1:	89 e5                	mov    %esp,%ebp
 8ad26c3:	56                   	push   %esi
 8ad26c4:	53                   	push   %ebx
 8ad26c5:	83 ec 10             	sub    $0x10,%esp
 8ad26c8:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad26cb:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad26ce:	85 c0                	test   %eax,%eax
 8ad26d0:	74 4e                	je     8ad2720 <_ZN23__dnf_script__FlexLexer9yyrestartEPSi+0x60>
 8ad26d2:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad26d5:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8ad26d8:	85 c0                	test   %eax,%eax
 8ad26da:	74 44                	je     8ad2720 <_ZN23__dnf_script__FlexLexer9yyrestartEPSi+0x60>
 8ad26dc:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad26df:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad26e3:	89 1c 24             	mov    %ebx,(%esp)
 8ad26e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad26ea:	e8 b1 fe ff ff       	call   8ad25a0 <_ZN23__dnf_script__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>
 8ad26ef:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad26f2:	8b 53 40             	mov    0x40(%ebx),%edx
 8ad26f5:	8b 14 90             	mov    (%eax,%edx,4),%edx
 8ad26f8:	8b 42 10             	mov    0x10(%edx),%eax
 8ad26fb:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad26fe:	8b 42 08             	mov    0x8(%edx),%eax
 8ad2701:	8b 12                	mov    (%edx),%edx
 8ad2703:	89 43 30             	mov    %eax,0x30(%ebx)
 8ad2706:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad2709:	89 53 20             	mov    %edx,0x20(%ebx)
 8ad270c:	0f b6 00             	movzbl (%eax),%eax
 8ad270f:	88 43 28             	mov    %al,0x28(%ebx)
 8ad2712:	83 c4 10             	add    $0x10,%esp
 8ad2715:	5b                   	pop    %ebx
 8ad2716:	5e                   	pop    %esi
 8ad2717:	5d                   	pop    %ebp
 8ad2718:	c3                   	ret
 8ad2719:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad2720:	89 1c 24             	mov    %ebx,(%esp)
 8ad2723:	e8 28 fc ff ff       	call   8ad2350 <_ZN23__dnf_script__FlexLexer21yyensure_buffer_stackEv>
 8ad2728:	8b 73 40             	mov    0x40(%ebx),%esi
 8ad272b:	8b 03                	mov    (%ebx),%eax
 8ad272d:	c1 e6 02             	shl    $0x2,%esi
 8ad2730:	03 73 48             	add    0x48(%ebx),%esi
 8ad2733:	c7 44 24 08 00 40 00 	movl   $0x4000,0x8(%esp)
 8ad273a:	00 
 8ad273b:	8b 53 20             	mov    0x20(%ebx),%edx
 8ad273e:	89 1c 24             	mov    %ebx,(%esp)
 8ad2741:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad2745:	ff 50 0c             	call   *0xc(%eax)
 8ad2748:	8b 53 48             	mov    0x48(%ebx),%edx
 8ad274b:	89 06                	mov    %eax,(%esi)
 8ad274d:	31 c0                	xor    %eax,%eax
 8ad274f:	85 d2                	test   %edx,%edx
 8ad2751:	74 89                	je     8ad26dc <_ZN23__dnf_script__FlexLexer9yyrestartEPSi+0x1c>
 8ad2753:	8b 43 40             	mov    0x40(%ebx),%eax
 8ad2756:	8b 04 82             	mov    (%edx,%eax,4),%eax
 8ad2759:	eb 81                	jmp    8ad26dc <_ZN23__dnf_script__FlexLexer9yyrestartEPSi+0x1c>
 8ad275b:	90                   	nop
 8ad275c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::yyrestart @ 0x8ad26c0

/* DWARF original prototype: void yyrestart(__dnf_script__FlexLexer * this, istream * input_file) */

void __thiscall
__dnf_script__FlexLexer::yyrestart(__dnf_script__FlexLexer *this,istream *input_file)

{
  char *pcVar1;
  istream *piVar2;
  size_t sVar3;
  yy_buffer_state **ppyVar4;
  yy_buffer_state **ppyVar5;
  yy_buffer_state *pyVar6;
  YY_BUFFER_STATE b;
  
  if ((this->yy_buffer_stack == (yy_buffer_state **)0x0) ||
     (b = this->yy_buffer_stack[this->yy_buffer_stack_top], b == (YY_BUFFER_STATE)0x0)) {
    yyensure_buffer_stack(this);
    sVar3 = this->yy_buffer_stack_top;
    ppyVar4 = this->yy_buffer_stack;
    pyVar6 = (yy_buffer_state *)
             (*(this->super_FlexLexer)._vptr_FlexLexer[3])(this,this->yyin,0x4000);
    ppyVar5 = this->yy_buffer_stack;
    ppyVar4[sVar3] = pyVar6;
    b = (YY_BUFFER_STATE)0x0;
    if (ppyVar5 != (yy_buffer_state **)0x0) {
      b = ppyVar5[this->yy_buffer_stack_top];
    }
  }
  yy_init_buffer(this,b,input_file);
  pyVar6 = this->yy_buffer_stack[this->yy_buffer_stack_top];
  this->yy_n_chars = pyVar6->yy_n_chars;
  pcVar1 = pyVar6->yy_buf_pos;
  piVar2 = pyVar6->yy_input_file;
  this->yy_c_buf_p = pcVar1;
  (this->super_FlexLexer).yytext = pcVar1;
  this->yyin = piVar2;
  this->yy_hold_char = *pcVar1;
  return;
}

```

---

## yyunput

```asm
// === 08ad1b60 __dnf_script__FlexLexer::yyunput  [0x08ad1b60-0x8ad1c3f] ===
 8ad1b60:	55                   	push   %ebp
 8ad1b61:	89 e5                	mov    %esp,%ebp
 8ad1b63:	57                   	push   %edi
 8ad1b64:	56                   	push   %esi
 8ad1b65:	53                   	push   %ebx
 8ad1b66:	83 ec 3c             	sub    $0x3c,%esp
 8ad1b69:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad1b6c:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 8ad1b70:	8b 7b 30             	mov    0x30(%ebx),%edi
 8ad1b73:	88 07                	mov    %al,(%edi)
 8ad1b75:	8b 43 40             	mov    0x40(%ebx),%eax
 8ad1b78:	8b 73 48             	mov    0x48(%ebx),%esi
 8ad1b7b:	8b 0c 86             	mov    (%esi,%eax,4),%ecx
 8ad1b7e:	8b 41 04             	mov    0x4(%ecx),%eax
 8ad1b81:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad1b84:	83 c0 02             	add    $0x2,%eax
 8ad1b87:	39 c7                	cmp    %eax,%edi
 8ad1b89:	73 6a                	jae    8ad1bf5 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0x95>
 8ad1b8b:	8b 51 0c             	mov    0xc(%ecx),%edx
 8ad1b8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad1b91:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8ad1b94:	8d 44 10 02          	lea    0x2(%eax,%edx,1),%eax
 8ad1b98:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad1b9b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad1b9e:	8b 43 2c             	mov    0x2c(%ebx),%eax
 8ad1ba1:	8d 44 02 02          	lea    0x2(%edx,%eax,1),%eax
 8ad1ba5:	39 c2                	cmp    %eax,%edx
 8ad1ba7:	73 29                	jae    8ad1bd2 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0x72>
 8ad1ba9:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1bac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1bb0:	83 e8 01             	sub    $0x1,%eax
 8ad1bb3:	83 ea 01             	sub    $0x1,%edx
 8ad1bb6:	0f b6 08             	movzbl (%eax),%ecx
 8ad1bb9:	88 0a                	mov    %cl,(%edx)
 8ad1bbb:	8b 4b 40             	mov    0x40(%ebx),%ecx
 8ad1bbe:	8b 73 48             	mov    0x48(%ebx),%esi
 8ad1bc1:	8b 0c 8e             	mov    (%esi,%ecx,4),%ecx
 8ad1bc4:	39 41 04             	cmp    %eax,0x4(%ecx)
 8ad1bc7:	72 e7                	jb     8ad1bb0 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0x50>
 8ad1bc9:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8ad1bcc:	8b 51 0c             	mov    0xc(%ecx),%edx
 8ad1bcf:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8ad1bd2:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1bd5:	29 c2                	sub    %eax,%edx
 8ad1bd7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad1bda:	01 d7                	add    %edx,%edi
 8ad1bdc:	01 55 10             	add    %edx,0x10(%ebp)
 8ad1bdf:	89 43 2c             	mov    %eax,0x2c(%ebx)
 8ad1be2:	89 41 10             	mov    %eax,0x10(%ecx)
 8ad1be5:	8b 43 40             	mov    0x40(%ebx),%eax
 8ad1be8:	8b 04 86             	mov    (%esi,%eax,4),%eax
 8ad1beb:	8b 40 04             	mov    0x4(%eax),%eax
 8ad1bee:	83 c0 02             	add    $0x2,%eax
 8ad1bf1:	39 c7                	cmp    %eax,%edi
 8ad1bf3:	72 2b                	jb     8ad1c20 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0xc0>
 8ad1bf5:	0f b6 55 0c          	movzbl 0xc(%ebp),%edx
 8ad1bf9:	8d 47 ff             	lea    -0x1(%edi),%eax
 8ad1bfc:	88 57 ff             	mov    %dl,-0x1(%edi)
 8ad1bff:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 8ad1c03:	75 04                	jne    8ad1c09 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0xa9>
 8ad1c05:	83 6b 0c 01          	subl   $0x1,0xc(%ebx)
 8ad1c09:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad1c0c:	89 53 04             	mov    %edx,0x4(%ebx)
 8ad1c0f:	0f b6 10             	movzbl (%eax),%edx
 8ad1c12:	89 43 30             	mov    %eax,0x30(%ebx)
 8ad1c15:	88 53 28             	mov    %dl,0x28(%ebx)
 8ad1c18:	83 c4 3c             	add    $0x3c,%esp
 8ad1c1b:	5b                   	pop    %ebx
 8ad1c1c:	5e                   	pop    %esi
 8ad1c1d:	5f                   	pop    %edi
 8ad1c1e:	5d                   	pop    %ebp
 8ad1c1f:	c3                   	ret
 8ad1c20:	8b 03                	mov    (%ebx),%eax
 8ad1c22:	c7 44 24 04 84 ed e2 	movl   $0x8e2ed84,0x4(%esp)
 8ad1c29:	08 
 8ad1c2a:	89 1c 24             	mov    %ebx,(%esp)
 8ad1c2d:	ff 50 2c             	call   *0x2c(%eax)
 8ad1c30:	eb c3                	jmp    8ad1bf5 <_ZN23__dnf_script__FlexLexer7yyunputEiPc+0x95>
 8ad1c32:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad1c39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// __dnf_script__FlexLexer::yyunput @ 0x8ad1b60

/* DWARF original prototype: void yyunput(__dnf_script__FlexLexer * this, int c, char * yy_bp) */

void __thiscall __dnf_script__FlexLexer::yyunput(__dnf_script__FlexLexer *this,int c,char *yy_bp)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  yy_buffer_state *pyVar5;
  yy_buffer_state **ppyVar6;
  char *pcVar7;
  char *local_30;
  yy_size_t local_24;
  
                    /* Unresolved local var: char * yy_cp@[???] */
  pcVar7 = this->yy_c_buf_p;
  *pcVar7 = this->yy_hold_char;
  ppyVar6 = this->yy_buffer_stack;
  pyVar5 = ppyVar6[this->yy_buffer_stack_top];
  pcVar3 = pyVar5->yy_ch_buf;
  if (pcVar7 < pcVar3 + 2) {
                    /* Unresolved local var: int number_to_move@[???]
                       Unresolved local var: char * dest@[???]
                       Unresolved local var: char * source@[???] */
    local_24 = pyVar5->yy_buf_size;
    local_30 = pcVar3 + local_24 + 2;
    pcVar4 = pcVar3 + this->yy_n_chars + 2;
    if (pcVar3 < pcVar4) {
      do {
        pcVar4 = pcVar4 + -1;
        local_30 = local_30 + -1;
        *local_30 = *pcVar4;
        ppyVar6 = this->yy_buffer_stack;
        pyVar5 = ppyVar6[this->yy_buffer_stack_top];
      } while (pyVar5->yy_ch_buf < pcVar4);
      local_24 = pyVar5->yy_buf_size;
    }
    pcVar7 = pcVar7 + ((int)local_30 - (int)pcVar4);
    yy_bp = yy_bp + ((int)local_30 - (int)pcVar4);
    this->yy_n_chars = local_24;
    pyVar5->yy_n_chars = local_24;
    if (pcVar7 < ppyVar6[this->yy_buffer_stack_top]->yy_ch_buf + 2) {
      (*(this->super_FlexLexer)._vptr_FlexLexer[0xb])(this,"flex scanner push-back overflow");
    }
  }
  pcVar7[-1] = (char)c;
  if (c == 10) {
    piVar1 = &(this->super_FlexLexer).yylineno;
    *piVar1 = *piVar1 + -1;
  }
  (this->super_FlexLexer).yytext = yy_bp;
  cVar2 = pcVar7[-1];
  this->yy_c_buf_p = pcVar7 + -1;
  this->yy_hold_char = cVar2;
  return;
}

```

---

## yywrap

```asm
// === 08ad1910 __dnf_script__FlexLexer::yywrap  [0x08ad1910-0x8ad191f] ===
 8ad1910:	55                   	push   %ebp
 8ad1911:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad1916:	89 e5                	mov    %esp,%ebp
 8ad1918:	5d                   	pop    %ebp
 8ad1919:	c3                   	ret
 8ad191a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// __dnf_script__FlexLexer::yywrap @ 0x8ad1910

/* DWARF original prototype: int yywrap(__dnf_script__FlexLexer * this) */

int __thiscall __dnf_script__FlexLexer::yywrap(__dnf_script__FlexLexer *this)

{
  return 1;
}

```

---

## ~__dnf_script__FlexLexer

```asm
// === 08ad27e0 __dnf_script__FlexLexer::~__dnf_script__FlexLexer  [0x08ad27e0-0x8ad283f] ===
 8ad27e0:	55                   	push   %ebp
 8ad27e1:	89 e5                	mov    %esp,%ebp
 8ad27e3:	53                   	push   %ebx
 8ad27e4:	83 ec 14             	sub    $0x14,%esp
 8ad27e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad27ea:	8b 43 54             	mov    0x54(%ebx),%eax
 8ad27ed:	c7 03 68 15 e3 08    	movl   $0x8e31568,(%ebx)
 8ad27f3:	85 c0                	test   %eax,%eax
 8ad27f5:	74 08                	je     8ad27ff <_ZN23__dnf_script__FlexLexerD1Ev+0x1f>
 8ad27f7:	89 04 24             	mov    %eax,(%esp)
 8ad27fa:	e8 b1 23 c5 ff       	call   8724bb0 <_ZdaPv>
 8ad27ff:	8b 43 1c             	mov    0x1c(%ebx),%eax
 8ad2802:	89 04 24             	mov    %eax,(%esp)
 8ad2805:	e8 a6 b5 5a ff       	call   807ddb0 <free@plt>
 8ad280a:	8b 53 48             	mov    0x48(%ebx),%edx
 8ad280d:	31 c0                	xor    %eax,%eax
 8ad280f:	85 d2                	test   %edx,%edx
 8ad2811:	74 06                	je     8ad2819 <_ZN23__dnf_script__FlexLexerD1Ev+0x39>
 8ad2813:	8b 43 40             	mov    0x40(%ebx),%eax
 8ad2816:	8b 04 82             	mov    (%edx,%eax,4),%eax
 8ad2819:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad281d:	89 1c 24             	mov    %ebx,(%esp)
 8ad2820:	e8 0b f6 ff ff       	call   8ad1e30 <_ZN23__dnf_script__FlexLexer16yy_delete_bufferEP15yy_buffer_state>
 8ad2825:	8b 43 48             	mov    0x48(%ebx),%eax
 8ad2828:	89 04 24             	mov    %eax,(%esp)
 8ad282b:	e8 80 b5 5a ff       	call   807ddb0 <free@plt>
 8ad2830:	c7 03 68 23 b1 08    	movl   $0x8b12368,(%ebx)
 8ad2836:	83 c4 14             	add    $0x14,%esp
 8ad2839:	5b                   	pop    %ebx
 8ad283a:	5d                   	pop    %ebp
 8ad283b:	c3                   	ret
 8ad283c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// __dnf_script__FlexLexer::~__dnf_script__FlexLexer @ 0x8ad27e0

/* DWARF original prototype: void ~__dnf_script__FlexLexer(__dnf_script__FlexLexer * this, int
   __in_chrg) */

void __thiscall
__dnf_script__FlexLexer::~__dnf_script__FlexLexer(__dnf_script__FlexLexer *this,int __in_chrg)

{
  yy_state_type *pyVar1;
  YY_BUFFER_STATE b;
  
  pyVar1 = this->yy_state_buf;
  (this->super_FlexLexer)._vptr_FlexLexer =
       (_func_int_varargs **)&PTR____dnf_script__FlexLexer_08e31568;
  if (pyVar1 != (yy_state_type *)0x0) {
    operator_delete__(pyVar1);
  }
  free(this->yy_start_stack);
  b = (YY_BUFFER_STATE)0x0;
  if (this->yy_buffer_stack != (yy_buffer_state **)0x0) {
    b = this->yy_buffer_stack[this->yy_buffer_stack_top];
  }
  yy_delete_buffer(this,b);
  free(this->yy_buffer_stack);
  (this->super_FlexLexer)._vptr_FlexLexer = (_func_int_varargs **)&PTR__FlexLexer_08b12368;
  return;
}

```

---

## ~__dnf_script__FlexLexer_08ad2840

```asm
// === 08ad2840 __dnf_script__FlexLexer::~__dnf_script__FlexLexer  [0x08ad2840-0x8ad285f] ===
 8ad2840:	55                   	push   %ebp
 8ad2841:	89 e5                	mov    %esp,%ebp
 8ad2843:	53                   	push   %ebx
 8ad2844:	83 ec 14             	sub    $0x14,%esp
 8ad2847:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad284a:	89 1c 24             	mov    %ebx,(%esp)
 8ad284d:	e8 8e ff ff ff       	call   8ad27e0 <_ZN23__dnf_script__FlexLexerD1Ev>
 8ad2852:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad2855:	83 c4 14             	add    $0x14,%esp
 8ad2858:	5b                   	pop    %ebx
 8ad2859:	5d                   	pop    %ebp
 8ad285a:	e9 91 1c c5 ff       	jmp    87244f0 <_ZdlPv>
 8ad285f:	90                   	nop

```

```c
// __dnf_script__FlexLexer::~__dnf_script__FlexLexer @ 0x8ad2840

/* DWARF original prototype: void ~__dnf_script__FlexLexer(__dnf_script__FlexLexer * this, int
   __in_chrg) */

void __thiscall
__dnf_script__FlexLexer::~__dnf_script__FlexLexer(__dnf_script__FlexLexer *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~__dnf_script__FlexLexer(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}

```


# __slang_filter__FlexLexer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 27

---

## LexerError

```asm
// === 08094d40 __slang_filter__FlexLexer::LexerError  [0x08094d40-0x8094d74] ===
 8094d40:	55                   	push   %ebp
 8094d41:	89 e5                	mov    %esp,%ebp
 8094d43:	83 ec 18             	sub    $0x18,%esp
 8094d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8094d4d:	c7 04 24 60 b4 48 09 	movl   $0x948b460,(%esp)
 8094d54:	e8 a7 85 66 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8094d59:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8094d60:	08 
 8094d61:	89 04 24             	mov    %eax,(%esp)
 8094d64:	e8 f7 6a 66 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8094d69:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8094d70:	e8 4b 94 fe ff       	call   807e1c0 <exit@plt>

```

```c
// __slang_filter__FlexLexer::LexerError @ 0x8094d40

/* __slang_filter__FlexLexer::LexerError(char const*) */

void __thiscall __slang_filter__FlexLexer::LexerError(__slang_filter__FlexLexer *this,char *param_1)

{
  ostream *this_00;
  
  this_00 = std::operator<<((ostream *)&std::cerr,param_1);
  std::ostream::operator<<(this_00,std::endl<char,std::char_traits<char>>);
                    /* WARNING: Subroutine does not return */
  exit(2);
}

```

---

## LexerInput

```asm
// === 08093a88 __slang_filter__FlexLexer::LexerInput  [0x08093a88-0x8093b5f] ===
 8093a88:	55                   	push   %ebp
 8093a89:	89 e5                	mov    %esp,%ebp
 8093a8b:	83 ec 18             	sub    $0x18,%esp
 8093a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a91:	8b 40 20             	mov    0x20(%eax),%eax
 8093a94:	89 c2                	mov    %eax,%edx
 8093a96:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a99:	8b 40 20             	mov    0x20(%eax),%eax
 8093a9c:	8b 00                	mov    (%eax),%eax
 8093a9e:	83 e8 0c             	sub    $0xc,%eax
 8093aa1:	8b 00                	mov    (%eax),%eax
 8093aa3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093aa6:	89 04 24             	mov    %eax,(%esp)
 8093aa9:	e8 92 cc 64 00       	call   86e0740 <_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv>
 8093aae:	84 c0                	test   %al,%al
 8093ab0:	75 24                	jne    8093ad6 <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0x4e>
 8093ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ab5:	8b 40 20             	mov    0x20(%eax),%eax
 8093ab8:	89 c2                	mov    %eax,%edx
 8093aba:	8b 45 08             	mov    0x8(%ebp),%eax
 8093abd:	8b 40 20             	mov    0x20(%eax),%eax
 8093ac0:	8b 00                	mov    (%eax),%eax
 8093ac2:	83 e8 0c             	sub    $0xc,%eax
 8093ac5:	8b 00                	mov    (%eax),%eax
 8093ac7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093aca:	89 04 24             	mov    %eax,(%esp)
 8093acd:	e8 7e cc 64 00       	call   86e0750 <_ZNKSt9basic_iosIcSt11char_traitsIcEE4failEv>
 8093ad2:	84 c0                	test   %al,%al
 8093ad4:	74 07                	je     8093add <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0x55>
 8093ad6:	b8 01 00 00 00       	mov    $0x1,%eax
 8093adb:	eb 05                	jmp    8093ae2 <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0x5a>
 8093add:	b8 00 00 00 00       	mov    $0x0,%eax
 8093ae2:	84 c0                	test   %al,%al
 8093ae4:	74 07                	je     8093aed <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0x65>
 8093ae6:	b8 00 00 00 00       	mov    $0x0,%eax
 8093aeb:	eb 70                	jmp    8093b5d <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0xd5>
 8093aed:	8b 45 08             	mov    0x8(%ebp),%eax
 8093af0:	8b 40 20             	mov    0x20(%eax),%eax
 8093af3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8093af6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8093afa:	89 04 24             	mov    %eax,(%esp)
 8093afd:	e8 6e 36 65 00       	call   86e7170 <_ZNSi3getERc>
 8093b02:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b05:	8b 40 20             	mov    0x20(%eax),%eax
 8093b08:	89 c2                	mov    %eax,%edx
 8093b0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b0d:	8b 40 20             	mov    0x20(%eax),%eax
 8093b10:	8b 00                	mov    (%eax),%eax
 8093b12:	83 e8 0c             	sub    $0xc,%eax
 8093b15:	8b 00                	mov    (%eax),%eax
 8093b17:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093b1a:	89 04 24             	mov    %eax,(%esp)
 8093b1d:	e8 1e cc 64 00       	call   86e0740 <_ZNKSt9basic_iosIcSt11char_traitsIcEE3eofEv>
 8093b22:	84 c0                	test   %al,%al
 8093b24:	74 07                	je     8093b2d <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0xa5>
 8093b26:	b8 00 00 00 00       	mov    $0x0,%eax
 8093b2b:	eb 30                	jmp    8093b5d <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0xd5>
 8093b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b30:	8b 40 20             	mov    0x20(%eax),%eax
 8093b33:	89 c2                	mov    %eax,%edx
 8093b35:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b38:	8b 40 20             	mov    0x20(%eax),%eax
 8093b3b:	8b 00                	mov    (%eax),%eax
 8093b3d:	83 e8 0c             	sub    $0xc,%eax
 8093b40:	8b 00                	mov    (%eax),%eax
 8093b42:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093b45:	89 04 24             	mov    %eax,(%esp)
 8093b48:	e8 13 cc 64 00       	call   86e0760 <_ZNKSt9basic_iosIcSt11char_traitsIcEE3badEv>
 8093b4d:	84 c0                	test   %al,%al
 8093b4f:	74 07                	je     8093b58 <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0xd0>
 8093b51:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8093b56:	eb 05                	jmp    8093b5d <_ZN25__slang_filter__FlexLexer10LexerInputEPci+0xd5>
 8093b58:	b8 01 00 00 00       	mov    $0x1,%eax
 8093b5d:	c9                   	leave
 8093b5e:	c3                   	ret
 8093b5f:	90                   	nop

```

```c
// __slang_filter__FlexLexer::LexerInput @ 0x8093a88

/* __slang_filter__FlexLexer::LexerInput(char*, int) */

undefined4 __slang_filter__FlexLexer::LexerInput(char *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = std::ios::eof((ios *)(*(int *)(param_1 + 0x20) +
                               *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
  if (cVar2 == '\0') {
    cVar2 = std::ios::fail((ios *)(*(int *)(param_1 + 0x20) +
                                  *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_08093ae2;
    }
  }
  bVar1 = true;
LAB_08093ae2:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    std::istream::get(*(istream **)(param_1 + 0x20),(char *)param_2);
    cVar2 = std::ios::eof((ios *)(*(int *)(param_1 + 0x20) +
                                 *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
    if (cVar2 == '\0') {
      cVar2 = std::ios::bad((ios *)(*(int *)(param_1 + 0x20) +
                                   *(int *)(**(int **)(param_1 + 0x20) + -0xc)));
      if (cVar2 == '\0') {
        uVar3 = 1;
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## LexerOutput

```asm
// === 08093b60 __slang_filter__FlexLexer::LexerOutput  [0x08093b60-0x8093b83] ===
 8093b60:	55                   	push   %ebp
 8093b61:	89 e5                	mov    %esp,%ebp
 8093b63:	83 ec 18             	sub    $0x18,%esp
 8093b66:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b69:	8b 40 24             	mov    0x24(%eax),%eax
 8093b6c:	8b 55 10             	mov    0x10(%ebp),%edx
 8093b6f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8093b73:	8b 55 0c             	mov    0xc(%ebp),%edx
 8093b76:	89 54 24 04          	mov    %edx,0x4(%esp)
 8093b7a:	89 04 24             	mov    %eax,(%esp)
 8093b7d:	e8 5e 99 66 00       	call   86fd4e0 <_ZNSo5writeEPKci>
 8093b82:	c9                   	leave
 8093b83:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::LexerOutput @ 0x8093b60

/* __slang_filter__FlexLexer::LexerOutput(char const*, int) */

void __thiscall
__slang_filter__FlexLexer::LexerOutput(__slang_filter__FlexLexer *this,char *param_1,int param_2)

{
  std::ostream::write(*(ostream **)(this + 0x24),param_1,param_2);
  return;
}

```

---

## __slang_filter__FlexLexer

```asm
// === 08093834 __slang_filter__FlexLexer::__slang_filter__FlexLexer  [0x08093834-0x8093919] ===
 8093834:	55                   	push   %ebp
 8093835:	89 e5                	mov    %esp,%ebp
 8093837:	83 ec 18             	sub    $0x18,%esp
 809383a:	8b 45 08             	mov    0x8(%ebp),%eax
 809383d:	89 04 24             	mov    %eax,(%esp)
 8093840:	e8 11 16 00 00       	call   8094e56 <_ZN9FlexLexerC1Ev>
 8093845:	8b 45 08             	mov    0x8(%ebp),%eax
 8093848:	c7 00 28 23 b1 08    	movl   $0x8b12328,(%eax)
 809384e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093851:	8b 55 0c             	mov    0xc(%ebp),%edx
 8093854:	89 50 20             	mov    %edx,0x20(%eax)
 8093857:	8b 45 08             	mov    0x8(%ebp),%eax
 809385a:	8b 55 10             	mov    0x10(%ebp),%edx
 809385d:	89 50 24             	mov    %edx,0x24(%eax)
 8093860:	8b 45 08             	mov    0x8(%ebp),%eax
 8093863:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 809386a:	8b 45 08             	mov    0x8(%ebp),%eax
 809386d:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 8093874:	8b 45 08             	mov    0x8(%ebp),%eax
 8093877:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 809387e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093881:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8093888:	8b 45 08             	mov    0x8(%ebp),%eax
 809388b:	c7 40 0c 01 00 00 00 	movl   $0x1,0xc(%eax)
 8093892:	8b 45 08             	mov    0x8(%ebp),%eax
 8093895:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 809389c:	8b 45 08             	mov    0x8(%ebp),%eax
 809389f:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 80938a6:	8b 45 08             	mov    0x8(%ebp),%eax
 80938a9:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 80938b0:	8b 45 08             	mov    0x8(%ebp),%eax
 80938b3:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 80938ba:	8b 45 08             	mov    0x8(%ebp),%eax
 80938bd:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 80938c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80938c7:	8b 50 7c             	mov    0x7c(%eax),%edx
 80938ca:	8b 45 08             	mov    0x8(%ebp),%eax
 80938cd:	89 50 78             	mov    %edx,0x78(%eax)
 80938d0:	8b 45 08             	mov    0x8(%ebp),%eax
 80938d3:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 80938da:	8b 45 08             	mov    0x8(%ebp),%eax
 80938dd:	8b 50 18             	mov    0x18(%eax),%edx
 80938e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80938e3:	89 50 14             	mov    %edx,0x14(%eax)
 80938e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80938e9:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 80938f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80938f3:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 80938fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80938fd:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 8093904:	8b 45 08             	mov    0x8(%ebp),%eax
 8093907:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 809390e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093911:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 8093918:	c9                   	leave
 8093919:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::__slang_filter__FlexLexer @ 0x8093834

/* __slang_filter__FlexLexer::__slang_filter__FlexLexer(std::istream*, std::ostream*) */

void __thiscall
__slang_filter__FlexLexer::__slang_filter__FlexLexer
          (__slang_filter__FlexLexer *this,istream *param_1,ostream *param_2)

{
  FlexLexer::FlexLexer((FlexLexer *)this);
  *(undefined ***)this = &PTR____slang_filter__FlexLexer_08b12328;
  *(istream **)(this + 0x20) = param_1;
  *(ostream **)(this + 0x24) = param_2;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 1;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  return;
}

```

---

## switch_streams

```asm
// === 080939f4 __slang_filter__FlexLexer::switch_streams  [0x080939f4-0x8093a87] ===
 80939f4:	55                   	push   %ebp
 80939f5:	89 e5                	mov    %esp,%ebp
 80939f7:	53                   	push   %ebx
 80939f8:	83 ec 14             	sub    $0x14,%esp
 80939fb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80939ff:	74 72                	je     8093a73 <_ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo+0x7f>
 8093a01:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a04:	8b 00                	mov    (%eax),%eax
 8093a06:	83 c0 10             	add    $0x10,%eax
 8093a09:	8b 10                	mov    (%eax),%edx
 8093a0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a0e:	8b 40 48             	mov    0x48(%eax),%eax
 8093a11:	85 c0                	test   %eax,%eax
 8093a13:	74 16                	je     8093a2b <_ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo+0x37>
 8093a15:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a18:	8b 48 48             	mov    0x48(%eax),%ecx
 8093a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a1e:	8b 40 40             	mov    0x40(%eax),%eax
 8093a21:	c1 e0 02             	shl    $0x2,%eax
 8093a24:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8093a27:	8b 00                	mov    (%eax),%eax
 8093a29:	eb 05                	jmp    8093a30 <_ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo+0x3c>
 8093a2b:	b8 00 00 00 00       	mov    $0x0,%eax
 8093a30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8093a34:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a37:	89 04 24             	mov    %eax,(%esp)
 8093a3a:	ff d2                	call   *%edx
 8093a3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a3f:	8b 00                	mov    (%eax),%eax
 8093a41:	83 c0 08             	add    $0x8,%eax
 8093a44:	8b 18                	mov    (%eax),%ebx
 8093a46:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a49:	8b 00                	mov    (%eax),%eax
 8093a4b:	83 c0 0c             	add    $0xc,%eax
 8093a4e:	8b 10                	mov    (%eax),%edx
 8093a50:	c7 44 24 08 00 40 00 	movl   $0x4000,0x8(%esp)
 8093a57:	00 
 8093a58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8093a5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8093a5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a62:	89 04 24             	mov    %eax,(%esp)
 8093a65:	ff d2                	call   *%edx
 8093a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8093a6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a6e:	89 04 24             	mov    %eax,(%esp)
 8093a71:	ff d3                	call   *%ebx
 8093a73:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8093a77:	74 09                	je     8093a82 <_ZN25__slang_filter__FlexLexer14switch_streamsEPSiPSo+0x8e>
 8093a79:	8b 45 08             	mov    0x8(%ebp),%eax
 8093a7c:	8b 55 10             	mov    0x10(%ebp),%edx
 8093a7f:	89 50 24             	mov    %edx,0x24(%eax)
 8093a82:	83 c4 14             	add    $0x14,%esp
 8093a85:	5b                   	pop    %ebx
 8093a86:	5d                   	pop    %ebp
 8093a87:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::switch_streams @ 0x80939f4

/* __slang_filter__FlexLexer::switch_streams(std::istream*, std::ostream*) */

void __thiscall
__slang_filter__FlexLexer::switch_streams
          (__slang_filter__FlexLexer *this,istream *param_1,ostream *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  
  if (param_1 != (istream *)0x0) {
    if (*(int *)(this + 0x48) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    (**(code **)(*(int *)this + 0x10))(this,uVar2);
    pcVar1 = *(code **)(*(int *)this + 8);
    uVar2 = (**(code **)(*(int *)this + 0xc))(this,param_1,0x4000);
    (*pcVar1)(this,uVar2);
  }
  if (param_2 != (ostream *)0x0) {
    *(ostream **)(this + 0x24) = param_2;
  }
  return;
}

```

---

## yy_create_buffer

```asm
// === 080946c4 __slang_filter__FlexLexer::yy_create_buffer  [0x080946c4-0x8094767] ===
 80946c4:	55                   	push   %ebp
 80946c5:	89 e5                	mov    %esp,%ebp
 80946c7:	83 ec 28             	sub    $0x28,%esp
 80946ca:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 80946d1:	e8 9f 06 00 00       	call   8094d75 <_Z21__slang_filter__allocj>
 80946d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80946d9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80946dd:	75 1a                	jne    80946f9 <_ZN25__slang_filter__FlexLexer16yy_create_bufferEPSii+0x35>
 80946df:	8b 45 08             	mov    0x8(%ebp),%eax
 80946e2:	8b 00                	mov    (%eax),%eax
 80946e4:	83 c0 2c             	add    $0x2c,%eax
 80946e7:	8b 10                	mov    (%eax),%edx
 80946e9:	c7 44 24 04 04 74 af 	movl   $0x8af7404,0x4(%esp)
 80946f0:	08 
 80946f1:	8b 45 08             	mov    0x8(%ebp),%eax
 80946f4:	89 04 24             	mov    %eax,(%esp)
 80946f7:	ff d2                	call   *%edx
 80946f9:	8b 55 10             	mov    0x10(%ebp),%edx
 80946fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80946ff:	89 50 0c             	mov    %edx,0xc(%eax)
 8094702:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094705:	8b 40 0c             	mov    0xc(%eax),%eax
 8094708:	83 c0 02             	add    $0x2,%eax
 809470b:	89 04 24             	mov    %eax,(%esp)
 809470e:	e8 62 06 00 00       	call   8094d75 <_Z21__slang_filter__allocj>
 8094713:	89 c2                	mov    %eax,%edx
 8094715:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094718:	89 50 04             	mov    %edx,0x4(%eax)
 809471b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809471e:	8b 40 04             	mov    0x4(%eax),%eax
 8094721:	85 c0                	test   %eax,%eax
 8094723:	75 1a                	jne    809473f <_ZN25__slang_filter__FlexLexer16yy_create_bufferEPSii+0x7b>
 8094725:	8b 45 08             	mov    0x8(%ebp),%eax
 8094728:	8b 00                	mov    (%eax),%eax
 809472a:	83 c0 2c             	add    $0x2c,%eax
 809472d:	8b 10                	mov    (%eax),%edx
 809472f:	c7 44 24 04 04 74 af 	movl   $0x8af7404,0x4(%esp)
 8094736:	08 
 8094737:	8b 45 08             	mov    0x8(%ebp),%eax
 809473a:	89 04 24             	mov    %eax,(%esp)
 809473d:	ff d2                	call   *%edx
 809473f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094742:	c7 40 14 01 00 00 00 	movl   $0x1,0x14(%eax)
 8094749:	8b 45 0c             	mov    0xc(%ebp),%eax
 809474c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8094750:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094753:	89 44 24 04          	mov    %eax,0x4(%esp)
 8094757:	8b 45 08             	mov    0x8(%ebp),%eax
 809475a:	89 04 24             	mov    %eax,(%esp)
 809475d:	e8 7c 00 00 00       	call   80947de <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>
 8094762:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094765:	c9                   	leave
 8094766:	c3                   	ret
 8094767:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yy_create_buffer @ 0x80946c4

/* __slang_filter__FlexLexer::yy_create_buffer(std::istream*, int) */

yy_buffer_state * __thiscall
__slang_filter__FlexLexer::yy_create_buffer
          (__slang_filter__FlexLexer *this,istream *param_1,int param_2)

{
  yy_buffer_state *pyVar1;
  char *pcVar2;
  
  pyVar1 = (yy_buffer_state *)__slang_filter__alloc(0x30);
  if (pyVar1 == (yy_buffer_state *)0x0) {
    (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_create_buffer()");
  }
  pyVar1->yy_buf_size = param_2;
  pcVar2 = (char *)__slang_filter__alloc(pyVar1->yy_buf_size + 2);
  pyVar1->yy_ch_buf = pcVar2;
  if (pyVar1->yy_ch_buf == (char *)0x0) {
    (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_create_buffer()");
  }
  pyVar1->yy_is_our_buffer = 1;
  yy_init_buffer(this,pyVar1,param_1);
  return pyVar1;
}

```

---

## yy_delete_buffer

```asm
// === 08094768 __slang_filter__FlexLexer::yy_delete_buffer  [0x08094768-0x80947dd] ===
 8094768:	55                   	push   %ebp
 8094769:	89 e5                	mov    %esp,%ebp
 809476b:	83 ec 18             	sub    $0x18,%esp
 809476e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8094772:	74 67                	je     80947db <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x73>
 8094774:	8b 45 08             	mov    0x8(%ebp),%eax
 8094777:	8b 40 48             	mov    0x48(%eax),%eax
 809477a:	85 c0                	test   %eax,%eax
 809477c:	74 16                	je     8094794 <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x2c>
 809477e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094781:	8b 50 48             	mov    0x48(%eax),%edx
 8094784:	8b 45 08             	mov    0x8(%ebp),%eax
 8094787:	8b 40 40             	mov    0x40(%eax),%eax
 809478a:	c1 e0 02             	shl    $0x2,%eax
 809478d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094790:	8b 00                	mov    (%eax),%eax
 8094792:	eb 05                	jmp    8094799 <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x31>
 8094794:	b8 00 00 00 00       	mov    $0x0,%eax
 8094799:	3b 45 0c             	cmp    0xc(%ebp),%eax
 809479c:	75 18                	jne    80947b6 <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x4e>
 809479e:	8b 45 08             	mov    0x8(%ebp),%eax
 80947a1:	8b 50 48             	mov    0x48(%eax),%edx
 80947a4:	8b 45 08             	mov    0x8(%ebp),%eax
 80947a7:	8b 40 40             	mov    0x40(%eax),%eax
 80947aa:	c1 e0 02             	shl    $0x2,%eax
 80947ad:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80947b0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80947b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80947b9:	8b 40 14             	mov    0x14(%eax),%eax
 80947bc:	85 c0                	test   %eax,%eax
 80947be:	74 0e                	je     80947ce <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x66>
 80947c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80947c3:	8b 40 04             	mov    0x4(%eax),%eax
 80947c6:	89 04 24             	mov    %eax,(%esp)
 80947c9:	e8 d4 05 00 00       	call   8094da2 <_Z20__slang_filter__freePv>
 80947ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 80947d1:	89 04 24             	mov    %eax,(%esp)
 80947d4:	e8 c9 05 00 00       	call   8094da2 <_Z20__slang_filter__freePv>
 80947d9:	eb 01                	jmp    80947dc <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state+0x74>
 80947db:	90                   	nop
 80947dc:	c9                   	leave
 80947dd:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_delete_buffer @ 0x8094768

/* __slang_filter__FlexLexer::yy_delete_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_delete_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    if (*(int *)(this + 0x48) == 0) {
      pyVar1 = (yy_buffer_state *)0x0;
    }
    else {
      pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    if (pyVar1 == param_1) {
      *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = 0;
    }
    if (param_1->yy_is_our_buffer != 0) {
      __slang_filter__free(param_1->yy_ch_buf);
    }
    __slang_filter__free(param_1);
  }
  return;
}

```

---

## yy_flush_buffer

```asm
// === 08094866 __slang_filter__FlexLexer::yy_flush_buffer  [0x08094866-0x80948eb] ===
 8094866:	55                   	push   %ebp
 8094867:	89 e5                	mov    %esp,%ebp
 8094869:	83 ec 04             	sub    $0x4,%esp
 809486c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8094870:	74 76                	je     80948e8 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x82>
 8094872:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094875:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 809487c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809487f:	8b 40 04             	mov    0x4(%eax),%eax
 8094882:	c6 00 00             	movb   $0x0,(%eax)
 8094885:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094888:	8b 40 04             	mov    0x4(%eax),%eax
 809488b:	83 c0 01             	add    $0x1,%eax
 809488e:	c6 00 00             	movb   $0x0,(%eax)
 8094891:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094894:	8b 50 04             	mov    0x4(%eax),%edx
 8094897:	8b 45 0c             	mov    0xc(%ebp),%eax
 809489a:	89 50 08             	mov    %edx,0x8(%eax)
 809489d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80948a0:	c7 40 1c 01 00 00 00 	movl   $0x1,0x1c(%eax)
 80948a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80948aa:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 80948b1:	8b 45 08             	mov    0x8(%ebp),%eax
 80948b4:	8b 40 48             	mov    0x48(%eax),%eax
 80948b7:	85 c0                	test   %eax,%eax
 80948b9:	74 16                	je     80948d1 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x6b>
 80948bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80948be:	8b 50 48             	mov    0x48(%eax),%edx
 80948c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80948c4:	8b 40 40             	mov    0x40(%eax),%eax
 80948c7:	c1 e0 02             	shl    $0x2,%eax
 80948ca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80948cd:	8b 00                	mov    (%eax),%eax
 80948cf:	eb 05                	jmp    80948d6 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x70>
 80948d1:	b8 00 00 00 00       	mov    $0x0,%eax
 80948d6:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80948d9:	75 0e                	jne    80948e9 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x83>
 80948db:	8b 45 08             	mov    0x8(%ebp),%eax
 80948de:	89 04 24             	mov    %eax,(%esp)
 80948e1:	e8 68 fd ff ff       	call   809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>
 80948e6:	eb 01                	jmp    80948e9 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state+0x83>
 80948e8:	90                   	nop
 80948e9:	c9                   	leave
 80948ea:	c3                   	ret
 80948eb:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yy_flush_buffer @ 0x8094866

/* __slang_filter__FlexLexer::yy_flush_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_flush_buffer(__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  if (param_1 != (yy_buffer_state *)0x0) {
    param_1->yy_n_chars = 0;
    *param_1->yy_ch_buf = '\0';
    param_1->yy_ch_buf[1] = '\0';
    param_1->yy_buf_pos = param_1->yy_ch_buf;
    param_1->yy_at_bol = 1;
    param_1->yy_buffer_status = 0;
    if (*(int *)(this + 0x48) == 0) {
      pyVar1 = (yy_buffer_state *)0x0;
    }
    else {
      pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    if (pyVar1 == param_1) {
      yy_load_buffer_state(this);
    }
  }
  return;
}

```

---

## yy_get_next_buffer

```asm
// === 08093b84 __slang_filter__FlexLexer::yy_get_next_buffer  [0x08093b84-0x809401f] ===
 8093b84:	55                   	push   %ebp
 8093b85:	89 e5                	mov    %esp,%ebp
 8093b87:	57                   	push   %edi
 8093b88:	56                   	push   %esi
 8093b89:	53                   	push   %ebx
 8093b8a:	83 ec 4c             	sub    $0x4c,%esp
 8093b8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b90:	8b 50 48             	mov    0x48(%eax),%edx
 8093b93:	8b 45 08             	mov    0x8(%ebp),%eax
 8093b96:	8b 40 40             	mov    0x40(%eax),%eax
 8093b99:	c1 e0 02             	shl    $0x2,%eax
 8093b9c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093b9f:	8b 00                	mov    (%eax),%eax
 8093ba1:	8b 78 04             	mov    0x4(%eax),%edi
 8093ba4:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ba7:	8b 70 04             	mov    0x4(%eax),%esi
 8093baa:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bad:	8b 50 30             	mov    0x30(%eax),%edx
 8093bb0:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bb3:	8b 48 48             	mov    0x48(%eax),%ecx
 8093bb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bb9:	8b 40 40             	mov    0x40(%eax),%eax
 8093bbc:	c1 e0 02             	shl    $0x2,%eax
 8093bbf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8093bc2:	8b 00                	mov    (%eax),%eax
 8093bc4:	8b 48 04             	mov    0x4(%eax),%ecx
 8093bc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bca:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093bcd:	83 c0 01             	add    $0x1,%eax
 8093bd0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8093bd3:	39 c2                	cmp    %eax,%edx
 8093bd5:	76 1a                	jbe    8093bf1 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x6d>
 8093bd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bda:	8b 00                	mov    (%eax),%eax
 8093bdc:	83 c0 2c             	add    $0x2c,%eax
 8093bdf:	8b 10                	mov    (%eax),%edx
 8093be1:	c7 44 24 04 30 73 af 	movl   $0x8af7330,0x4(%esp)
 8093be8:	08 
 8093be9:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bec:	89 04 24             	mov    %eax,(%esp)
 8093bef:	ff d2                	call   *%edx
 8093bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bf4:	8b 50 48             	mov    0x48(%eax),%edx
 8093bf7:	8b 45 08             	mov    0x8(%ebp),%eax
 8093bfa:	8b 40 40             	mov    0x40(%eax),%eax
 8093bfd:	c1 e0 02             	shl    $0x2,%eax
 8093c00:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093c03:	8b 00                	mov    (%eax),%eax
 8093c05:	8b 40 28             	mov    0x28(%eax),%eax
 8093c08:	85 c0                	test   %eax,%eax
 8093c0a:	75 2d                	jne    8093c39 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0xb5>
 8093c0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c0f:	8b 40 30             	mov    0x30(%eax),%eax
 8093c12:	89 c2                	mov    %eax,%edx
 8093c14:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c17:	8b 40 04             	mov    0x4(%eax),%eax
 8093c1a:	89 d1                	mov    %edx,%ecx
 8093c1c:	29 c1                	sub    %eax,%ecx
 8093c1e:	89 c8                	mov    %ecx,%eax
 8093c20:	83 f8 01             	cmp    $0x1,%eax
 8093c23:	75 0a                	jne    8093c2f <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0xab>
 8093c25:	b8 01 00 00 00       	mov    $0x1,%eax
 8093c2a:	e9 e9 03 00 00       	jmp    8094018 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x494>
 8093c2f:	b8 02 00 00 00       	mov    $0x2,%eax
 8093c34:	e9 df 03 00 00       	jmp    8094018 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x494>
 8093c39:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c3c:	8b 40 30             	mov    0x30(%eax),%eax
 8093c3f:	89 c2                	mov    %eax,%edx
 8093c41:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c44:	8b 40 04             	mov    0x4(%eax),%eax
 8093c47:	89 d1                	mov    %edx,%ecx
 8093c49:	29 c1                	sub    %eax,%ecx
 8093c4b:	89 c8                	mov    %ecx,%eax
 8093c4d:	8d 58 ff             	lea    -0x1(%eax),%ebx
 8093c50:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8093c57:	eb 0f                	jmp    8093c68 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0xe4>
 8093c59:	0f b6 06             	movzbl (%esi),%eax
 8093c5c:	88 07                	mov    %al,(%edi)
 8093c5e:	83 c7 01             	add    $0x1,%edi
 8093c61:	83 c6 01             	add    $0x1,%esi
 8093c64:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 8093c68:	39 5d c4             	cmp    %ebx,-0x3c(%ebp)
 8093c6b:	0f 9c c0             	setl   %al
 8093c6e:	84 c0                	test   %al,%al
 8093c70:	75 e7                	jne    8093c59 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0xd5>
 8093c72:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c75:	8b 50 48             	mov    0x48(%eax),%edx
 8093c78:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c7b:	8b 40 40             	mov    0x40(%eax),%eax
 8093c7e:	c1 e0 02             	shl    $0x2,%eax
 8093c81:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093c84:	8b 00                	mov    (%eax),%eax
 8093c86:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093c89:	83 f8 02             	cmp    $0x2,%eax
 8093c8c:	75 2c                	jne    8093cba <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x136>
 8093c8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c91:	8b 50 48             	mov    0x48(%eax),%edx
 8093c94:	8b 45 08             	mov    0x8(%ebp),%eax
 8093c97:	8b 40 40             	mov    0x40(%eax),%eax
 8093c9a:	c1 e0 02             	shl    $0x2,%eax
 8093c9d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093ca0:	8b 00                	mov    (%eax),%eax
 8093ca2:	8b 55 08             	mov    0x8(%ebp),%edx
 8093ca5:	c7 42 2c 00 00 00 00 	movl   $0x0,0x2c(%edx)
 8093cac:	8b 55 08             	mov    0x8(%ebp),%edx
 8093caf:	8b 52 2c             	mov    0x2c(%edx),%edx
 8093cb2:	89 50 10             	mov    %edx,0x10(%eax)
 8093cb5:	e9 d6 01 00 00       	jmp    8093e90 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x30c>
 8093cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8093cbd:	8b 50 48             	mov    0x48(%eax),%edx
 8093cc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8093cc3:	8b 40 40             	mov    0x40(%eax),%eax
 8093cc6:	c1 e0 02             	shl    $0x2,%eax
 8093cc9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093ccc:	8b 00                	mov    (%eax),%eax
 8093cce:	8b 50 0c             	mov    0xc(%eax),%edx
 8093cd1:	89 d8                	mov    %ebx,%eax
 8093cd3:	89 d1                	mov    %edx,%ecx
 8093cd5:	29 c1                	sub    %eax,%ecx
 8093cd7:	89 c8                	mov    %ecx,%eax
 8093cd9:	83 e8 01             	sub    $0x1,%eax
 8093cdc:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8093cdf:	e9 0b 01 00 00       	jmp    8093def <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x26b>
 8093ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ce7:	8b 40 48             	mov    0x48(%eax),%eax
 8093cea:	85 c0                	test   %eax,%eax
 8093cec:	74 16                	je     8093d04 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x180>
 8093cee:	8b 45 08             	mov    0x8(%ebp),%eax
 8093cf1:	8b 50 48             	mov    0x48(%eax),%edx
 8093cf4:	8b 45 08             	mov    0x8(%ebp),%eax
 8093cf7:	8b 40 40             	mov    0x40(%eax),%eax
 8093cfa:	c1 e0 02             	shl    $0x2,%eax
 8093cfd:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093d00:	8b 00                	mov    (%eax),%eax
 8093d02:	eb 05                	jmp    8093d09 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x185>
 8093d04:	b8 00 00 00 00       	mov    $0x0,%eax
 8093d09:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8093d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8093d0f:	8b 40 30             	mov    0x30(%eax),%eax
 8093d12:	89 c2                	mov    %eax,%edx
 8093d14:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d17:	8b 40 04             	mov    0x4(%eax),%eax
 8093d1a:	89 d1                	mov    %edx,%ecx
 8093d1c:	29 c1                	sub    %eax,%ecx
 8093d1e:	89 c8                	mov    %ecx,%eax
 8093d20:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8093d23:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d26:	8b 40 14             	mov    0x14(%eax),%eax
 8093d29:	85 c0                	test   %eax,%eax
 8093d2b:	74 5e                	je     8093d8b <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x207>
 8093d2d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d30:	8b 40 0c             	mov    0xc(%eax),%eax
 8093d33:	01 c0                	add    %eax,%eax
 8093d35:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8093d38:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8093d3c:	7f 19                	jg     8093d57 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x1d3>
 8093d3e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d41:	8b 50 0c             	mov    0xc(%eax),%edx
 8093d44:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d47:	8b 40 0c             	mov    0xc(%eax),%eax
 8093d4a:	c1 e8 03             	shr    $0x3,%eax
 8093d4d:	01 c2                	add    %eax,%edx
 8093d4f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d52:	89 50 0c             	mov    %edx,0xc(%eax)
 8093d55:	eb 0f                	jmp    8093d66 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x1e2>
 8093d57:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d5a:	8b 40 0c             	mov    0xc(%eax),%eax
 8093d5d:	8d 14 00             	lea    (%eax,%eax,1),%edx
 8093d60:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d63:	89 50 0c             	mov    %edx,0xc(%eax)
 8093d66:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d69:	8b 40 0c             	mov    0xc(%eax),%eax
 8093d6c:	8d 50 02             	lea    0x2(%eax),%edx
 8093d6f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d72:	8b 40 04             	mov    0x4(%eax),%eax
 8093d75:	89 54 24 04          	mov    %edx,0x4(%esp)
 8093d79:	89 04 24             	mov    %eax,(%esp)
 8093d7c:	e8 07 10 00 00       	call   8094d88 <_Z23__slang_filter__reallocPvj>
 8093d81:	89 c2                	mov    %eax,%edx
 8093d83:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d86:	89 50 04             	mov    %edx,0x4(%eax)
 8093d89:	eb 0a                	jmp    8093d95 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x211>
 8093d8b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d8e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8093d95:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093d98:	8b 40 04             	mov    0x4(%eax),%eax
 8093d9b:	85 c0                	test   %eax,%eax
 8093d9d:	75 1a                	jne    8093db9 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x235>
 8093d9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8093da2:	8b 00                	mov    (%eax),%eax
 8093da4:	83 c0 2c             	add    $0x2c,%eax
 8093da7:	8b 10                	mov    (%eax),%edx
 8093da9:	c7 44 24 04 68 73 af 	movl   $0x8af7368,0x4(%esp)
 8093db0:	08 
 8093db1:	8b 45 08             	mov    0x8(%ebp),%eax
 8093db4:	89 04 24             	mov    %eax,(%esp)
 8093db7:	ff d2                	call   *%edx
 8093db9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8093dbc:	8b 50 04             	mov    0x4(%eax),%edx
 8093dbf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8093dc2:	01 c2                	add    %eax,%edx
 8093dc4:	8b 45 08             	mov    0x8(%ebp),%eax
 8093dc7:	89 50 30             	mov    %edx,0x30(%eax)
 8093dca:	8b 45 08             	mov    0x8(%ebp),%eax
 8093dcd:	8b 50 48             	mov    0x48(%eax),%edx
 8093dd0:	8b 45 08             	mov    0x8(%ebp),%eax
 8093dd3:	8b 40 40             	mov    0x40(%eax),%eax
 8093dd6:	c1 e0 02             	shl    $0x2,%eax
 8093dd9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093ddc:	8b 00                	mov    (%eax),%eax
 8093dde:	8b 50 0c             	mov    0xc(%eax),%edx
 8093de1:	89 d8                	mov    %ebx,%eax
 8093de3:	89 d1                	mov    %edx,%ecx
 8093de5:	29 c1                	sub    %eax,%ecx
 8093de7:	89 c8                	mov    %ecx,%eax
 8093de9:	83 e8 01             	sub    $0x1,%eax
 8093dec:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8093def:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8093df3:	0f 9e c0             	setle  %al
 8093df6:	84 c0                	test   %al,%al
 8093df8:	0f 85 e6 fe ff ff    	jne    8093ce4 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x160>
 8093dfe:	81 7d d4 00 20 00 00 	cmpl   $0x2000,-0x2c(%ebp)
 8093e05:	7e 07                	jle    8093e0e <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x28a>
 8093e07:	c7 45 d4 00 20 00 00 	movl   $0x2000,-0x2c(%ebp)
 8093e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e11:	8b 00                	mov    (%eax),%eax
 8093e13:	83 c0 24             	add    $0x24,%eax
 8093e16:	8b 10                	mov    (%eax),%edx
 8093e18:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e1b:	8b 48 48             	mov    0x48(%eax),%ecx
 8093e1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e21:	8b 40 40             	mov    0x40(%eax),%eax
 8093e24:	c1 e0 02             	shl    $0x2,%eax
 8093e27:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8093e2a:	8b 00                	mov    (%eax),%eax
 8093e2c:	8b 48 04             	mov    0x4(%eax),%ecx
 8093e2f:	89 d8                	mov    %ebx,%eax
 8093e31:	01 c1                	add    %eax,%ecx
 8093e33:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8093e36:	89 44 24 08          	mov    %eax,0x8(%esp)
 8093e3a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8093e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e41:	89 04 24             	mov    %eax,(%esp)
 8093e44:	ff d2                	call   *%edx
 8093e46:	8b 55 08             	mov    0x8(%ebp),%edx
 8093e49:	89 42 2c             	mov    %eax,0x2c(%edx)
 8093e4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e4f:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093e52:	c1 e8 1f             	shr    $0x1f,%eax
 8093e55:	84 c0                	test   %al,%al
 8093e57:	74 1a                	je     8093e73 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x2ef>
 8093e59:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e5c:	8b 00                	mov    (%eax),%eax
 8093e5e:	83 c0 2c             	add    $0x2c,%eax
 8093e61:	8b 10                	mov    (%eax),%edx
 8093e63:	c7 44 24 04 94 73 af 	movl   $0x8af7394,0x4(%esp)
 8093e6a:	08 
 8093e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e6e:	89 04 24             	mov    %eax,(%esp)
 8093e71:	ff d2                	call   *%edx
 8093e73:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e76:	8b 50 48             	mov    0x48(%eax),%edx
 8093e79:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e7c:	8b 40 40             	mov    0x40(%eax),%eax
 8093e7f:	c1 e0 02             	shl    $0x2,%eax
 8093e82:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093e85:	8b 00                	mov    (%eax),%eax
 8093e87:	8b 55 08             	mov    0x8(%ebp),%edx
 8093e8a:	8b 52 2c             	mov    0x2c(%edx),%edx
 8093e8d:	89 50 10             	mov    %edx,0x10(%eax)
 8093e90:	8b 45 08             	mov    0x8(%ebp),%eax
 8093e93:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093e96:	85 c0                	test   %eax,%eax
 8093e98:	75 4d                	jne    8093ee7 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x363>
 8093e9a:	85 db                	test   %ebx,%ebx
 8093e9c:	75 25                	jne    8093ec3 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x33f>
 8093e9e:	c7 45 d0 01 00 00 00 	movl   $0x1,-0x30(%ebp)
 8093ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ea8:	8b 00                	mov    (%eax),%eax
 8093eaa:	83 c0 14             	add    $0x14,%eax
 8093ead:	8b 10                	mov    (%eax),%edx
 8093eaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8093eb2:	8b 40 20             	mov    0x20(%eax),%eax
 8093eb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8093eb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ebc:	89 04 24             	mov    %eax,(%esp)
 8093ebf:	ff d2                	call   *%edx
 8093ec1:	eb 2b                	jmp    8093eee <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x36a>
 8093ec3:	c7 45 d0 02 00 00 00 	movl   $0x2,-0x30(%ebp)
 8093eca:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ecd:	8b 50 48             	mov    0x48(%eax),%edx
 8093ed0:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ed3:	8b 40 40             	mov    0x40(%eax),%eax
 8093ed6:	c1 e0 02             	shl    $0x2,%eax
 8093ed9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093edc:	8b 00                	mov    (%eax),%eax
 8093ede:	c7 40 2c 02 00 00 00 	movl   $0x2,0x2c(%eax)
 8093ee5:	eb 07                	jmp    8093eee <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x36a>
 8093ee7:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8093eee:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ef1:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093ef4:	01 d8                	add    %ebx,%eax
 8093ef6:	89 c2                	mov    %eax,%edx
 8093ef8:	8b 45 08             	mov    0x8(%ebp),%eax
 8093efb:	8b 48 48             	mov    0x48(%eax),%ecx
 8093efe:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f01:	8b 40 40             	mov    0x40(%eax),%eax
 8093f04:	c1 e0 02             	shl    $0x2,%eax
 8093f07:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8093f0a:	8b 00                	mov    (%eax),%eax
 8093f0c:	8b 40 0c             	mov    0xc(%eax),%eax
 8093f0f:	39 c2                	cmp    %eax,%edx
 8093f11:	0f 86 89 00 00 00    	jbe    8093fa0 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x41c>
 8093f17:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f1a:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093f1d:	8d 14 18             	lea    (%eax,%ebx,1),%edx
 8093f20:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f23:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093f26:	d1 f8                	sar    $1,%eax
 8093f28:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093f2b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8093f2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f31:	8b 50 48             	mov    0x48(%eax),%edx
 8093f34:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f37:	8b 40 40             	mov    0x40(%eax),%eax
 8093f3a:	c1 e0 02             	shl    $0x2,%eax
 8093f3d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093f40:	8b 30                	mov    (%eax),%esi
 8093f42:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f45:	8b 50 48             	mov    0x48(%eax),%edx
 8093f48:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f4b:	8b 40 40             	mov    0x40(%eax),%eax
 8093f4e:	c1 e0 02             	shl    $0x2,%eax
 8093f51:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093f54:	8b 00                	mov    (%eax),%eax
 8093f56:	8b 40 04             	mov    0x4(%eax),%eax
 8093f59:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8093f5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8093f60:	89 04 24             	mov    %eax,(%esp)
 8093f63:	e8 20 0e 00 00       	call   8094d88 <_Z23__slang_filter__reallocPvj>
 8093f68:	89 46 04             	mov    %eax,0x4(%esi)
 8093f6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f6e:	8b 50 48             	mov    0x48(%eax),%edx
 8093f71:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f74:	8b 40 40             	mov    0x40(%eax),%eax
 8093f77:	c1 e0 02             	shl    $0x2,%eax
 8093f7a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093f7d:	8b 00                	mov    (%eax),%eax
 8093f7f:	8b 40 04             	mov    0x4(%eax),%eax
 8093f82:	85 c0                	test   %eax,%eax
 8093f84:	75 1a                	jne    8093fa0 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv+0x41c>
 8093f86:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f89:	8b 00                	mov    (%eax),%eax
 8093f8b:	83 c0 2c             	add    $0x2c,%eax
 8093f8e:	8b 10                	mov    (%eax),%edx
 8093f90:	c7 44 24 04 b4 73 af 	movl   $0x8af73b4,0x4(%esp)
 8093f97:	08 
 8093f98:	8b 45 08             	mov    0x8(%ebp),%eax
 8093f9b:	89 04 24             	mov    %eax,(%esp)
 8093f9e:	ff d2                	call   *%edx
 8093fa0:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fa3:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093fa6:	8d 14 18             	lea    (%eax,%ebx,1),%edx
 8093fa9:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fac:	89 50 2c             	mov    %edx,0x2c(%eax)
 8093faf:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fb2:	8b 50 48             	mov    0x48(%eax),%edx
 8093fb5:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fb8:	8b 40 40             	mov    0x40(%eax),%eax
 8093fbb:	c1 e0 02             	shl    $0x2,%eax
 8093fbe:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093fc1:	8b 00                	mov    (%eax),%eax
 8093fc3:	8b 50 04             	mov    0x4(%eax),%edx
 8093fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fc9:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093fcc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093fcf:	c6 00 00             	movb   $0x0,(%eax)
 8093fd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fd5:	8b 50 48             	mov    0x48(%eax),%edx
 8093fd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fdb:	8b 40 40             	mov    0x40(%eax),%eax
 8093fde:	c1 e0 02             	shl    $0x2,%eax
 8093fe1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093fe4:	8b 00                	mov    (%eax),%eax
 8093fe6:	8b 50 04             	mov    0x4(%eax),%edx
 8093fe9:	8b 45 08             	mov    0x8(%ebp),%eax
 8093fec:	8b 40 2c             	mov    0x2c(%eax),%eax
 8093fef:	83 c0 01             	add    $0x1,%eax
 8093ff2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8093ff5:	c6 00 00             	movb   $0x0,(%eax)
 8093ff8:	8b 45 08             	mov    0x8(%ebp),%eax
 8093ffb:	8b 50 48             	mov    0x48(%eax),%edx
 8093ffe:	8b 45 08             	mov    0x8(%ebp),%eax
 8094001:	8b 40 40             	mov    0x40(%eax),%eax
 8094004:	c1 e0 02             	shl    $0x2,%eax
 8094007:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809400a:	8b 00                	mov    (%eax),%eax
 809400c:	8b 50 04             	mov    0x4(%eax),%edx
 809400f:	8b 45 08             	mov    0x8(%ebp),%eax
 8094012:	89 50 04             	mov    %edx,0x4(%eax)
 8094015:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8094018:	83 c4 4c             	add    $0x4c,%esp
 809401b:	5b                   	pop    %ebx
 809401c:	5e                   	pop    %esi
 809401d:	5f                   	pop    %edi
 809401e:	5d                   	pop    %ebp
 809401f:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_get_next_buffer @ 0x8093b84

/* __slang_filter__FlexLexer::yy_get_next_buffer() */

undefined4 __thiscall __slang_filter__FlexLexer::yy_get_next_buffer(__slang_filter__FlexLexer *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int local_40;
  undefined4 local_34;
  int local_30;
  
  puVar7 = *(undefined1 **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4);
  puVar6 = *(undefined1 **)(this + 4);
  if ((uint)(*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
            *(int *)(this + 0x2c) + 1) < *(uint *)(this + 0x30)) {
    (**(code **)(*(int *)this + 0x2c))
              (this,"fatal flex scanner internal error--end of buffer missed");
  }
  if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x28) == 0) {
    if (*(int *)(this + 0x30) - *(int *)(this + 4) == 1) {
      local_34 = 1;
    }
    else {
      local_34 = 2;
    }
  }
  else {
    iVar1 = (*(int *)(this + 0x30) - *(int *)(this + 4)) + -1;
    for (local_40 = 0; local_40 < iVar1; local_40 = local_40 + 1) {
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x2c) == 2) {
      iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(this + 0x2c);
    }
    else {
      local_30 = *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) - iVar1
      ;
      while (local_30 = local_30 + -1, local_30 < 1) {
        if (*(int *)(this + 0x48) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
        }
        iVar2 = *(int *)(this + 0x30);
        iVar3 = *(int *)(iVar4 + 4);
        if (*(int *)(iVar4 + 0x14) == 0) {
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        else {
          if (*(int *)(iVar4 + 0xc) * 2 < 1) {
            *(uint *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + (*(uint *)(iVar4 + 0xc) >> 3);
          }
          else {
            *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) * 2;
          }
          uVar5 = __slang_filter__realloc(*(void **)(iVar4 + 4),*(int *)(iVar4 + 0xc) + 2);
          *(undefined4 *)(iVar4 + 4) = uVar5;
        }
        if (*(int *)(iVar4 + 4) == 0) {
          (**(code **)(*(int *)this + 0x2c))(this,"fatal error - scanner input buffer overflow");
        }
        *(int *)(this + 0x30) = *(int *)(iVar4 + 4) + (iVar2 - iVar3);
        local_30 = *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) -
                   iVar1;
      }
      if (0x2000 < local_30) {
        local_30 = 0x2000;
      }
      uVar5 = (**(code **)(*(int *)this + 0x24))
                        (this,*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) +
                                      4) + iVar1,local_30);
      *(undefined4 *)(this + 0x2c) = uVar5;
      if (*(int *)(this + 0x2c) < 0) {
        (**(code **)(*(int *)this + 0x2c))(this,"input in flex scanner failed");
      }
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    if (*(int *)(this + 0x2c) == 0) {
      if (iVar1 == 0) {
        local_34 = 1;
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      else {
        local_34 = 2;
        *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x2c) = 2;
      }
    }
    else {
      local_34 = 0;
    }
    if (*(uint *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) <
        (uint)(*(int *)(this + 0x2c) + iVar1)) {
      iVar4 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
      uVar5 = __slang_filter__realloc
                        (*(void **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4)
                         ,*(int *)(this + 0x2c) + iVar1 + (*(int *)(this + 0x2c) >> 1));
      *(undefined4 *)(iVar4 + 4) = uVar5;
      if (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) == 0) {
        (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yy_get_next_buffer()");
      }
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + iVar1;
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
     *(int *)(this + 0x2c)) = 0;
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
     *(int *)(this + 0x2c) + 1) = 0;
    *(undefined4 *)(this + 4) =
         *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4);
  }
  return local_34;
}

```

---

## yy_get_previous_state

```asm
// === 08094020 __slang_filter__FlexLexer::yy_get_previous_state  [0x08094020-0x80940fb] ===
 8094020:	55                   	push   %ebp
 8094021:	89 e5                	mov    %esp,%ebp
 8094023:	57                   	push   %edi
 8094024:	56                   	push   %esi
 8094025:	53                   	push   %ebx
 8094026:	8b 45 08             	mov    0x8(%ebp),%eax
 8094029:	8b 58 38             	mov    0x38(%eax),%ebx
 809402c:	8b 45 08             	mov    0x8(%ebp),%eax
 809402f:	8b 70 04             	mov    0x4(%eax),%esi
 8094032:	e9 aa 00 00 00       	jmp    80940e1 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0xc1>
 8094037:	0f b6 06             	movzbl (%esi),%eax
 809403a:	84 c0                	test   %al,%al
 809403c:	74 0f                	je     809404d <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x2d>
 809403e:	0f b6 06             	movzbl (%esi),%eax
 8094041:	0f b6 c0             	movzbl %al,%eax
 8094044:	8b 04 85 e0 c2 af 08 	mov    0x8afc2e0(,%eax,4),%eax
 809404b:	eb 05                	jmp    8094052 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x32>
 809404d:	b8 01 00 00 00       	mov    $0x1,%eax
 8094052:	89 c7                	mov    %eax,%edi
 8094054:	89 d8                	mov    %ebx,%eax
 8094056:	0f b7 84 00 c0 74 af 	movzwl 0x8af74c0(%eax,%eax,1),%eax
 809405d:	08 
 809405e:	66 85 c0             	test   %ax,%ax
 8094061:	74 33                	je     8094096 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x76>
 8094063:	8b 45 08             	mov    0x8(%ebp),%eax
 8094066:	89 58 4c             	mov    %ebx,0x4c(%eax)
 8094069:	8b 45 08             	mov    0x8(%ebp),%eax
 809406c:	89 70 50             	mov    %esi,0x50(%eax)
 809406f:	eb 26                	jmp    8094097 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x77>
 8094071:	89 d8                	mov    %ebx,%eax
 8094073:	0f b7 84 00 20 18 b0 	movzwl 0x8b01820(%eax,%eax,1),%eax
 809407a:	08 
 809407b:	0f bf d8             	movswl %ax,%ebx
 809407e:	81 fb 08 27 00 00    	cmp    $0x2708,%ebx
 8094084:	7e 11                	jle    8094097 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x77>
 8094086:	89 fa                	mov    %edi,%edx
 8094088:	0f b6 c2             	movzbl %dl,%eax
 809408b:	8b 04 85 e0 c6 af 08 	mov    0x8afc6e0(,%eax,4),%eax
 8094092:	89 c7                	mov    %eax,%edi
 8094094:	eb 01                	jmp    8094097 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x77>
 8094096:	90                   	nop
 8094097:	89 d8                	mov    %ebx,%eax
 8094099:	0f b7 84 00 00 ca af 	movzwl 0x8afca00(%eax,%eax,1),%eax
 80940a0:	08 
 80940a1:	0f bf d0             	movswl %ax,%edx
 80940a4:	89 f9                	mov    %edi,%ecx
 80940a6:	0f b6 c1             	movzbl %cl,%eax
 80940a9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80940ac:	0f b7 84 00 a0 b6 b0 	movzwl 0x8b0b6a0(%eax,%eax,1),%eax
 80940b3:	08 
 80940b4:	98                   	cwtl
 80940b5:	39 d8                	cmp    %ebx,%eax
 80940b7:	0f 95 c0             	setne  %al
 80940ba:	84 c0                	test   %al,%al
 80940bc:	75 b3                	jne    8094071 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x51>
 80940be:	89 d8                	mov    %ebx,%eax
 80940c0:	0f b7 84 00 00 ca af 	movzwl 0x8afca00(%eax,%eax,1),%eax
 80940c7:	08 
 80940c8:	0f bf d0             	movswl %ax,%edx
 80940cb:	89 f9                	mov    %edi,%ecx
 80940cd:	0f b6 c1             	movzbl %cl,%eax
 80940d0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80940d3:	0f b7 84 00 40 66 b0 	movzwl 0x8b06640(%eax,%eax,1),%eax
 80940da:	08 
 80940db:	0f bf d8             	movswl %ax,%ebx
 80940de:	83 c6 01             	add    $0x1,%esi
 80940e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80940e4:	8b 40 30             	mov    0x30(%eax),%eax
 80940e7:	39 f0                	cmp    %esi,%eax
 80940e9:	0f 97 c0             	seta   %al
 80940ec:	84 c0                	test   %al,%al
 80940ee:	0f 85 43 ff ff ff    	jne    8094037 <_ZN25__slang_filter__FlexLexer21yy_get_previous_stateEv+0x17>
 80940f4:	89 d8                	mov    %ebx,%eax
 80940f6:	5b                   	pop    %ebx
 80940f7:	5e                   	pop    %esi
 80940f8:	5f                   	pop    %edi
 80940f9:	5d                   	pop    %ebp
 80940fa:	c3                   	ret
 80940fb:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yy_get_previous_state @ 0x8094020

/* __slang_filter__FlexLexer::yy_get_previous_state() */

int __thiscall __slang_filter__FlexLexer::yy_get_previous_state(__slang_filter__FlexLexer *this)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = *(int *)(this + 0x38);
  for (pbVar3 = *(byte **)(this + 4); pbVar3 < *(byte **)(this + 0x30); pbVar3 = pbVar3 + 1) {
    if (*pbVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(uint *)(yy_ec + (uint)*pbVar3 * 4);
    }
    if (*(short *)(yy_accept + iVar2 * 2) != 0) {
      *(int *)(this + 0x4c) = iVar2;
      *(byte **)(this + 0x50) = pbVar3;
    }
    while (*(short *)(yy_chk + ((int)*(short *)(yy_base + iVar2 * 2) + (uVar1 & 0xff)) * 2) != iVar2
          ) {
      iVar2 = (int)*(short *)(yy_def + iVar2 * 2);
      if (0x2708 < iVar2) {
        uVar1 = *(uint *)(yy_meta + (uVar1 & 0xff) * 4);
      }
    }
    iVar2 = (int)*(short *)(yy_nxt + ((int)*(short *)(yy_base + iVar2 * 2) + (uVar1 & 0xff)) * 2);
  }
  return iVar2;
}

```

---

## yy_init_buffer

```asm
// === 080947de __slang_filter__FlexLexer::yy_init_buffer  [0x080947de-0x8094865] ===
 80947de:	55                   	push   %ebp
 80947df:	89 e5                	mov    %esp,%ebp
 80947e1:	83 ec 28             	sub    $0x28,%esp
 80947e4:	e8 87 95 fe ff       	call   807dd70 <__errno_location@plt>
 80947e9:	8b 00                	mov    (%eax),%eax
 80947eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80947ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 80947f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80947f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80947f8:	89 04 24             	mov    %eax,(%esp)
 80947fb:	e8 66 00 00 00       	call   8094866 <_ZN25__slang_filter__FlexLexer15yy_flush_bufferEP15yy_buffer_state>
 8094800:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094803:	8b 55 10             	mov    0x10(%ebp),%edx
 8094806:	89 10                	mov    %edx,(%eax)
 8094808:	8b 45 0c             	mov    0xc(%ebp),%eax
 809480b:	c7 40 28 01 00 00 00 	movl   $0x1,0x28(%eax)
 8094812:	8b 45 08             	mov    0x8(%ebp),%eax
 8094815:	8b 40 48             	mov    0x48(%eax),%eax
 8094818:	85 c0                	test   %eax,%eax
 809481a:	74 16                	je     8094832 <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi+0x54>
 809481c:	8b 45 08             	mov    0x8(%ebp),%eax
 809481f:	8b 50 48             	mov    0x48(%eax),%edx
 8094822:	8b 45 08             	mov    0x8(%ebp),%eax
 8094825:	8b 40 40             	mov    0x40(%eax),%eax
 8094828:	c1 e0 02             	shl    $0x2,%eax
 809482b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809482e:	8b 00                	mov    (%eax),%eax
 8094830:	eb 05                	jmp    8094837 <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi+0x59>
 8094832:	b8 00 00 00 00       	mov    $0x0,%eax
 8094837:	3b 45 0c             	cmp    0xc(%ebp),%eax
 809483a:	74 14                	je     8094850 <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi+0x72>
 809483c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809483f:	c7 40 20 01 00 00 00 	movl   $0x1,0x20(%eax)
 8094846:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094849:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8094850:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094853:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 809485a:	e8 11 95 fe ff       	call   807dd70 <__errno_location@plt>
 809485f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8094862:	89 10                	mov    %edx,(%eax)
 8094864:	c9                   	leave
 8094865:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_init_buffer @ 0x80947de

/* __slang_filter__FlexLexer::yy_init_buffer(yy_buffer_state*, std::istream*) */

void __thiscall
__slang_filter__FlexLexer::yy_init_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1,istream *param_2)

{
  int iVar1;
  int *piVar2;
  yy_buffer_state *pyVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  yy_flush_buffer(this,param_1);
  param_1->yy_input_file = param_2;
  param_1->yy_fill_buffer = 1;
  if (*(int *)(this + 0x48) == 0) {
    pyVar3 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar3 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  if (pyVar3 != param_1) {
    param_1->yy_bs_lineno = 1;
    param_1->yy_bs_column = 0;
  }
  param_1->yy_is_interactive = 0;
  piVar2 = __errno_location();
  *piVar2 = iVar1;
  return;
}

```

---

## yy_load_buffer_state

```asm
// === 0809464e __slang_filter__FlexLexer::yy_load_buffer_state  [0x0809464e-0x80946c3] ===
 809464e:	55                   	push   %ebp
 809464f:	89 e5                	mov    %esp,%ebp
 8094651:	8b 45 08             	mov    0x8(%ebp),%eax
 8094654:	8b 50 48             	mov    0x48(%eax),%edx
 8094657:	8b 45 08             	mov    0x8(%ebp),%eax
 809465a:	8b 40 40             	mov    0x40(%eax),%eax
 809465d:	c1 e0 02             	shl    $0x2,%eax
 8094660:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094663:	8b 00                	mov    (%eax),%eax
 8094665:	8b 50 10             	mov    0x10(%eax),%edx
 8094668:	8b 45 08             	mov    0x8(%ebp),%eax
 809466b:	89 50 2c             	mov    %edx,0x2c(%eax)
 809466e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094671:	8b 50 48             	mov    0x48(%eax),%edx
 8094674:	8b 45 08             	mov    0x8(%ebp),%eax
 8094677:	8b 40 40             	mov    0x40(%eax),%eax
 809467a:	c1 e0 02             	shl    $0x2,%eax
 809467d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094680:	8b 00                	mov    (%eax),%eax
 8094682:	8b 50 08             	mov    0x8(%eax),%edx
 8094685:	8b 45 08             	mov    0x8(%ebp),%eax
 8094688:	89 50 30             	mov    %edx,0x30(%eax)
 809468b:	8b 45 08             	mov    0x8(%ebp),%eax
 809468e:	8b 50 30             	mov    0x30(%eax),%edx
 8094691:	8b 45 08             	mov    0x8(%ebp),%eax
 8094694:	89 50 04             	mov    %edx,0x4(%eax)
 8094697:	8b 45 08             	mov    0x8(%ebp),%eax
 809469a:	8b 50 48             	mov    0x48(%eax),%edx
 809469d:	8b 45 08             	mov    0x8(%ebp),%eax
 80946a0:	8b 40 40             	mov    0x40(%eax),%eax
 80946a3:	c1 e0 02             	shl    $0x2,%eax
 80946a6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80946a9:	8b 00                	mov    (%eax),%eax
 80946ab:	8b 10                	mov    (%eax),%edx
 80946ad:	8b 45 08             	mov    0x8(%ebp),%eax
 80946b0:	89 50 20             	mov    %edx,0x20(%eax)
 80946b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80946b6:	8b 40 30             	mov    0x30(%eax),%eax
 80946b9:	0f b6 10             	movzbl (%eax),%edx
 80946bc:	8b 45 08             	mov    0x8(%ebp),%eax
 80946bf:	88 50 28             	mov    %dl,0x28(%eax)
 80946c2:	5d                   	pop    %ebp
 80946c3:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_load_buffer_state @ 0x809464e

/* __slang_filter__FlexLexer::yy_load_buffer_state() */

void __thiscall __slang_filter__FlexLexer::yy_load_buffer_state(__slang_filter__FlexLexer *this)

{
  *(undefined4 *)(this + 0x2c) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10);
  *(undefined4 *)(this + 0x30) =
       *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8);
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(this + 0x20) =
       **(undefined4 **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  this[0x28] = **(__slang_filter__FlexLexer **)(this + 0x30);
  return;
}

```

---

## yy_pop_state

```asm
// === 08094cc6 __slang_filter__FlexLexer::yy_pop_state  [0x08094cc6-0x8094d23] ===
 8094cc6:	55                   	push   %ebp
 8094cc7:	89 e5                	mov    %esp,%ebp
 8094cc9:	83 ec 18             	sub    $0x18,%esp
 8094ccc:	8b 45 08             	mov    0x8(%ebp),%eax
 8094ccf:	8b 40 14             	mov    0x14(%eax),%eax
 8094cd2:	8d 50 ff             	lea    -0x1(%eax),%edx
 8094cd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8094cd8:	89 50 14             	mov    %edx,0x14(%eax)
 8094cdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8094cde:	8b 40 14             	mov    0x14(%eax),%eax
 8094ce1:	c1 e8 1f             	shr    $0x1f,%eax
 8094ce4:	84 c0                	test   %al,%al
 8094ce6:	74 1a                	je     8094d02 <_ZN25__slang_filter__FlexLexer12yy_pop_stateEv+0x3c>
 8094ce8:	8b 45 08             	mov    0x8(%ebp),%eax
 8094ceb:	8b 00                	mov    (%eax),%eax
 8094ced:	83 c0 2c             	add    $0x2c,%eax
 8094cf0:	8b 10                	mov    (%eax),%edx
 8094cf2:	c7 44 24 04 94 74 af 	movl   $0x8af7494,0x4(%esp)
 8094cf9:	08 
 8094cfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8094cfd:	89 04 24             	mov    %eax,(%esp)
 8094d00:	ff d2                	call   *%edx
 8094d02:	8b 45 08             	mov    0x8(%ebp),%eax
 8094d05:	8b 50 1c             	mov    0x1c(%eax),%edx
 8094d08:	8b 45 08             	mov    0x8(%ebp),%eax
 8094d0b:	8b 40 14             	mov    0x14(%eax),%eax
 8094d0e:	c1 e0 02             	shl    $0x2,%eax
 8094d11:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094d14:	8b 00                	mov    (%eax),%eax
 8094d16:	01 c0                	add    %eax,%eax
 8094d18:	8d 50 01             	lea    0x1(%eax),%edx
 8094d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8094d1e:	89 50 38             	mov    %edx,0x38(%eax)
 8094d21:	c9                   	leave
 8094d22:	c3                   	ret
 8094d23:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yy_pop_state @ 0x8094cc6

/* __slang_filter__FlexLexer::yy_pop_state() */

void __thiscall __slang_filter__FlexLexer::yy_pop_state(__slang_filter__FlexLexer *this)

{
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  if (*(int *)(this + 0x14) < 0) {
    (**(code **)(*(int *)this + 0x2c))(this,"start-condition stack underflow");
  }
  *(int *)(this + 0x38) = *(int *)(*(int *)(this + 0x1c) + *(int *)(this + 0x14) * 4) * 2 + 1;
  return;
}

```

---

## yy_push_state

```asm
// === 08094bee __slang_filter__FlexLexer::yy_push_state  [0x08094bee-0x8094cc5] ===
 8094bee:	55                   	push   %ebp
 8094bef:	89 e5                	mov    %esp,%ebp
 8094bf1:	53                   	push   %ebx
 8094bf2:	83 ec 24             	sub    $0x24,%esp
 8094bf5:	8b 45 08             	mov    0x8(%ebp),%eax
 8094bf8:	8b 50 14             	mov    0x14(%eax),%edx
 8094bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8094bfe:	8b 40 18             	mov    0x18(%eax),%eax
 8094c01:	39 c2                	cmp    %eax,%edx
 8094c03:	7c 7b                	jl     8094c80 <_ZN25__slang_filter__FlexLexer13yy_push_stateEi+0x92>
 8094c05:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c08:	8b 40 18             	mov    0x18(%eax),%eax
 8094c0b:	8d 50 19             	lea    0x19(%eax),%edx
 8094c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c11:	89 50 18             	mov    %edx,0x18(%eax)
 8094c14:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c17:	8b 40 18             	mov    0x18(%eax),%eax
 8094c1a:	c1 e0 02             	shl    $0x2,%eax
 8094c1d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8094c20:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c23:	8b 40 1c             	mov    0x1c(%eax),%eax
 8094c26:	85 c0                	test   %eax,%eax
 8094c28:	75 15                	jne    8094c3f <_ZN25__slang_filter__FlexLexer13yy_push_stateEi+0x51>
 8094c2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094c2d:	89 04 24             	mov    %eax,(%esp)
 8094c30:	e8 40 01 00 00       	call   8094d75 <_Z21__slang_filter__allocj>
 8094c35:	89 c2                	mov    %eax,%edx
 8094c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c3a:	89 50 1c             	mov    %edx,0x1c(%eax)
 8094c3d:	eb 1d                	jmp    8094c5c <_ZN25__slang_filter__FlexLexer13yy_push_stateEi+0x6e>
 8094c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c42:	8b 40 1c             	mov    0x1c(%eax),%eax
 8094c45:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8094c48:	89 54 24 04          	mov    %edx,0x4(%esp)
 8094c4c:	89 04 24             	mov    %eax,(%esp)
 8094c4f:	e8 34 01 00 00       	call   8094d88 <_Z23__slang_filter__reallocPvj>
 8094c54:	89 c2                	mov    %eax,%edx
 8094c56:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c59:	89 50 1c             	mov    %edx,0x1c(%eax)
 8094c5c:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c5f:	8b 40 1c             	mov    0x1c(%eax),%eax
 8094c62:	85 c0                	test   %eax,%eax
 8094c64:	75 1a                	jne    8094c80 <_ZN25__slang_filter__FlexLexer13yy_push_stateEi+0x92>
 8094c66:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c69:	8b 00                	mov    (%eax),%eax
 8094c6b:	83 c0 2c             	add    $0x2c,%eax
 8094c6e:	8b 10                	mov    (%eax),%edx
 8094c70:	c7 44 24 04 64 74 af 	movl   $0x8af7464,0x4(%esp)
 8094c77:	08 
 8094c78:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c7b:	89 04 24             	mov    %eax,(%esp)
 8094c7e:	ff d2                	call   *%edx
 8094c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c83:	8b 50 1c             	mov    0x1c(%eax),%edx
 8094c86:	8b 45 08             	mov    0x8(%ebp),%eax
 8094c89:	8b 40 14             	mov    0x14(%eax),%eax
 8094c8c:	89 c1                	mov    %eax,%ecx
 8094c8e:	c1 e1 02             	shl    $0x2,%ecx
 8094c91:	8d 0c 0a             	lea    (%edx,%ecx,1),%ecx
 8094c94:	8b 55 08             	mov    0x8(%ebp),%edx
 8094c97:	8b 52 38             	mov    0x38(%edx),%edx
 8094c9a:	83 ea 01             	sub    $0x1,%edx
 8094c9d:	89 d3                	mov    %edx,%ebx
 8094c9f:	c1 eb 1f             	shr    $0x1f,%ebx
 8094ca2:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8094ca5:	d1 fa                	sar    $1,%edx
 8094ca7:	89 11                	mov    %edx,(%ecx)
 8094ca9:	8d 50 01             	lea    0x1(%eax),%edx
 8094cac:	8b 45 08             	mov    0x8(%ebp),%eax
 8094caf:	89 50 14             	mov    %edx,0x14(%eax)
 8094cb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094cb5:	01 c0                	add    %eax,%eax
 8094cb7:	8d 50 01             	lea    0x1(%eax),%edx
 8094cba:	8b 45 08             	mov    0x8(%ebp),%eax
 8094cbd:	89 50 38             	mov    %edx,0x38(%eax)
 8094cc0:	83 c4 24             	add    $0x24,%esp
 8094cc3:	5b                   	pop    %ebx
 8094cc4:	5d                   	pop    %ebp
 8094cc5:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_push_state @ 0x8094bee

/* __slang_filter__FlexLexer::yy_push_state(int) */

void __thiscall
__slang_filter__FlexLexer::yy_push_state(__slang_filter__FlexLexer *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x18) <= *(int *)(this + 0x14)) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 0x19;
    if (*(int *)(this + 0x1c) == 0) {
      uVar2 = __slang_filter__alloc(*(int *)(this + 0x18) << 2);
      *(undefined4 *)(this + 0x1c) = uVar2;
    }
    else {
      uVar2 = __slang_filter__realloc(*(void **)(this + 0x1c),*(int *)(this + 0x18) << 2);
      *(undefined4 *)(this + 0x1c) = uVar2;
    }
    if (*(int *)(this + 0x1c) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of memory expanding start-condition stack");
    }
  }
  iVar1 = *(int *)(this + 0x14);
  *(int *)(*(int *)(this + 0x1c) + iVar1 * 4) = (*(int *)(this + 0x38) + -1) / 2;
  *(int *)(this + 0x14) = iVar1 + 1;
  *(int *)(this + 0x38) = param_1 * 2 + 1;
  return;
}

```

---

## yy_switch_to_buffer

```asm
// === 08094574 __slang_filter__FlexLexer::yy_switch_to_buffer  [0x08094574-0x809464d] ===
 8094574:	55                   	push   %ebp
 8094575:	89 e5                	mov    %esp,%ebp
 8094577:	83 ec 18             	sub    $0x18,%esp
 809457a:	8b 45 08             	mov    0x8(%ebp),%eax
 809457d:	89 04 24             	mov    %eax,(%esp)
 8094580:	e8 2b 05 00 00       	call   8094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>
 8094585:	8b 45 08             	mov    0x8(%ebp),%eax
 8094588:	8b 40 48             	mov    0x48(%eax),%eax
 809458b:	85 c0                	test   %eax,%eax
 809458d:	74 16                	je     80945a5 <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x31>
 809458f:	8b 45 08             	mov    0x8(%ebp),%eax
 8094592:	8b 50 48             	mov    0x48(%eax),%edx
 8094595:	8b 45 08             	mov    0x8(%ebp),%eax
 8094598:	8b 40 40             	mov    0x40(%eax),%eax
 809459b:	c1 e0 02             	shl    $0x2,%eax
 809459e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80945a1:	8b 00                	mov    (%eax),%eax
 80945a3:	eb 05                	jmp    80945aa <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0x36>
 80945a5:	b8 00 00 00 00       	mov    $0x0,%eax
 80945aa:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80945ad:	0f 84 98 00 00 00    	je     809464b <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0xd7>
 80945b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80945b6:	8b 40 48             	mov    0x48(%eax),%eax
 80945b9:	85 c0                	test   %eax,%eax
 80945bb:	74 61                	je     809461e <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0xaa>
 80945bd:	8b 45 08             	mov    0x8(%ebp),%eax
 80945c0:	8b 50 48             	mov    0x48(%eax),%edx
 80945c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80945c6:	8b 40 40             	mov    0x40(%eax),%eax
 80945c9:	c1 e0 02             	shl    $0x2,%eax
 80945cc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80945cf:	8b 00                	mov    (%eax),%eax
 80945d1:	85 c0                	test   %eax,%eax
 80945d3:	74 49                	je     809461e <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0xaa>
 80945d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80945d8:	8b 40 30             	mov    0x30(%eax),%eax
 80945db:	8b 55 08             	mov    0x8(%ebp),%edx
 80945de:	0f b6 52 28          	movzbl 0x28(%edx),%edx
 80945e2:	88 10                	mov    %dl,(%eax)
 80945e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80945e7:	8b 50 48             	mov    0x48(%eax),%edx
 80945ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80945ed:	8b 40 40             	mov    0x40(%eax),%eax
 80945f0:	c1 e0 02             	shl    $0x2,%eax
 80945f3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80945f6:	8b 00                	mov    (%eax),%eax
 80945f8:	8b 55 08             	mov    0x8(%ebp),%edx
 80945fb:	8b 52 30             	mov    0x30(%edx),%edx
 80945fe:	89 50 08             	mov    %edx,0x8(%eax)
 8094601:	8b 45 08             	mov    0x8(%ebp),%eax
 8094604:	8b 50 48             	mov    0x48(%eax),%edx
 8094607:	8b 45 08             	mov    0x8(%ebp),%eax
 809460a:	8b 40 40             	mov    0x40(%eax),%eax
 809460d:	c1 e0 02             	shl    $0x2,%eax
 8094610:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094613:	8b 00                	mov    (%eax),%eax
 8094615:	8b 55 08             	mov    0x8(%ebp),%edx
 8094618:	8b 52 2c             	mov    0x2c(%edx),%edx
 809461b:	89 50 10             	mov    %edx,0x10(%eax)
 809461e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094621:	8b 50 48             	mov    0x48(%eax),%edx
 8094624:	8b 45 08             	mov    0x8(%ebp),%eax
 8094627:	8b 40 40             	mov    0x40(%eax),%eax
 809462a:	c1 e0 02             	shl    $0x2,%eax
 809462d:	01 c2                	add    %eax,%edx
 809462f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094632:	89 02                	mov    %eax,(%edx)
 8094634:	8b 45 08             	mov    0x8(%ebp),%eax
 8094637:	89 04 24             	mov    %eax,(%esp)
 809463a:	e8 0f 00 00 00       	call   809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>
 809463f:	8b 45 08             	mov    0x8(%ebp),%eax
 8094642:	c7 40 3c 01 00 00 00 	movl   $0x1,0x3c(%eax)
 8094649:	eb 01                	jmp    809464c <_ZN25__slang_filter__FlexLexer19yy_switch_to_bufferEP15yy_buffer_state+0xd8>
 809464b:	90                   	nop
 809464c:	c9                   	leave
 809464d:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_switch_to_buffer @ 0x8094574

/* __slang_filter__FlexLexer::yy_switch_to_buffer(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yy_switch_to_buffer
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  yy_buffer_state *pyVar1;
  
  yyensure_buffer_stack(this);
  if (*(int *)(this + 0x48) == 0) {
    pyVar1 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  if (pyVar1 != param_1) {
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8) =
           *(undefined4 *)(this + 0x30);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = param_1;
    yy_load_buffer_state(this);
    *(undefined4 *)(this + 0x3c) = 1;
  }
  return;
}

```

---

## yy_top_state

```asm
// === 08094d24 __slang_filter__FlexLexer::yy_top_state  [0x08094d24-0x8094d3f] ===
 8094d24:	55                   	push   %ebp
 8094d25:	89 e5                	mov    %esp,%ebp
 8094d27:	8b 45 08             	mov    0x8(%ebp),%eax
 8094d2a:	8b 50 1c             	mov    0x1c(%eax),%edx
 8094d2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8094d30:	8b 40 14             	mov    0x14(%eax),%eax
 8094d33:	83 e8 01             	sub    $0x1,%eax
 8094d36:	c1 e0 02             	shl    $0x2,%eax
 8094d39:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094d3c:	8b 00                	mov    (%eax),%eax
 8094d3e:	5d                   	pop    %ebp
 8094d3f:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_top_state @ 0x8094d24

/* __slang_filter__FlexLexer::yy_top_state() */

undefined4 __thiscall __slang_filter__FlexLexer::yy_top_state(__slang_filter__FlexLexer *this)

{
  return *(undefined4 *)(*(int *)(this + 0x1c) + (*(int *)(this + 0x14) + -1) * 4);
}

```

---

## yy_try_NUL_trans

```asm
// === 080940fc __slang_filter__FlexLexer::yy_try_NUL_trans  [0x080940fc-0x80941b9] ===
 80940fc:	55                   	push   %ebp
 80940fd:	89 e5                	mov    %esp,%ebp
 80940ff:	56                   	push   %esi
 8094100:	53                   	push   %ebx
 8094101:	8b 45 08             	mov    0x8(%ebp),%eax
 8094104:	8b 70 30             	mov    0x30(%eax),%esi
 8094107:	bb 01 00 00 00       	mov    $0x1,%ebx
 809410c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809410f:	0f b7 84 00 c0 74 af 	movzwl 0x8af74c0(%eax,%eax,1),%eax
 8094116:	08 
 8094117:	66 85 c0             	test   %ax,%ax
 809411a:	74 37                	je     8094153 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0x57>
 809411c:	8b 45 08             	mov    0x8(%ebp),%eax
 809411f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8094122:	89 50 4c             	mov    %edx,0x4c(%eax)
 8094125:	8b 45 08             	mov    0x8(%ebp),%eax
 8094128:	89 70 50             	mov    %esi,0x50(%eax)
 809412b:	eb 27                	jmp    8094154 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0x58>
 809412d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094130:	0f b7 84 00 20 18 b0 	movzwl 0x8b01820(%eax,%eax,1),%eax
 8094137:	08 
 8094138:	98                   	cwtl
 8094139:	89 45 0c             	mov    %eax,0xc(%ebp)
 809413c:	81 7d 0c 08 27 00 00 	cmpl   $0x2708,0xc(%ebp)
 8094143:	7e 0f                	jle    8094154 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0x58>
 8094145:	0f b6 c3             	movzbl %bl,%eax
 8094148:	8b 04 85 e0 c6 af 08 	mov    0x8afc6e0(,%eax,4),%eax
 809414f:	89 c3                	mov    %eax,%ebx
 8094151:	eb 01                	jmp    8094154 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0x58>
 8094153:	90                   	nop
 8094154:	8b 45 0c             	mov    0xc(%ebp),%eax
 8094157:	0f b7 84 00 00 ca af 	movzwl 0x8afca00(%eax,%eax,1),%eax
 809415e:	08 
 809415f:	0f bf d0             	movswl %ax,%edx
 8094162:	0f b6 c3             	movzbl %bl,%eax
 8094165:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094168:	0f b7 84 00 a0 b6 b0 	movzwl 0x8b0b6a0(%eax,%eax,1),%eax
 809416f:	08 
 8094170:	98                   	cwtl
 8094171:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8094174:	0f 95 c0             	setne  %al
 8094177:	84 c0                	test   %al,%al
 8094179:	75 b2                	jne    809412d <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0x31>
 809417b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809417e:	0f b7 84 00 00 ca af 	movzwl 0x8afca00(%eax,%eax,1),%eax
 8094185:	08 
 8094186:	0f bf d0             	movswl %ax,%edx
 8094189:	0f b6 c3             	movzbl %bl,%eax
 809418c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809418f:	0f b7 84 00 40 66 b0 	movzwl 0x8b06640(%eax,%eax,1),%eax
 8094196:	08 
 8094197:	98                   	cwtl
 8094198:	89 45 0c             	mov    %eax,0xc(%ebp)
 809419b:	81 7d 0c 08 27 00 00 	cmpl   $0x2708,0xc(%ebp)
 80941a2:	0f 94 c0             	sete   %al
 80941a5:	0f b6 d8             	movzbl %al,%ebx
 80941a8:	85 db                	test   %ebx,%ebx
 80941aa:	75 05                	jne    80941b1 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0xb5>
 80941ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 80941af:	eb 05                	jmp    80941b6 <_ZN25__slang_filter__FlexLexer16yy_try_NUL_transEi+0xba>
 80941b1:	b8 00 00 00 00       	mov    $0x0,%eax
 80941b6:	5b                   	pop    %ebx
 80941b7:	5e                   	pop    %esi
 80941b8:	5d                   	pop    %ebp
 80941b9:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yy_try_NUL_trans @ 0x80940fc

/* __slang_filter__FlexLexer::yy_try_NUL_trans(int) */

int __thiscall
__slang_filter__FlexLexer::yy_try_NUL_trans(__slang_filter__FlexLexer *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  if (*(short *)(yy_accept + param_1 * 2) != 0) {
    *(int *)(this + 0x4c) = param_1;
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(this + 0x30);
  }
  while (*(short *)(yy_chk + ((int)*(short *)(yy_base + param_1 * 2) + (uVar2 & 0xff)) * 2) !=
         param_1) {
    param_1 = (int)*(short *)(yy_def + param_1 * 2);
    if (0x2708 < param_1) {
      uVar2 = *(uint *)(yy_meta + (uVar2 & 0xff) * 4);
    }
  }
  iVar1 = (int)*(short *)(yy_nxt + ((int)*(short *)(yy_base + param_1 * 2) + (uVar2 & 0xff)) * 2);
  if (iVar1 == 0x2708) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## yyensure_buffer_stack

```asm
// === 08094ab0 __slang_filter__FlexLexer::yyensure_buffer_stack  [0x08094ab0-0x8094bed] ===
 8094ab0:	55                   	push   %ebp
 8094ab1:	89 e5                	mov    %esp,%ebp
 8094ab3:	83 ec 28             	sub    $0x28,%esp
 8094ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 8094ab9:	8b 40 48             	mov    0x48(%eax),%eax
 8094abc:	85 c0                	test   %eax,%eax
 8094abe:	75 7d                	jne    8094b3d <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv+0x8d>
 8094ac0:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8094ac7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8094aca:	c1 e0 02             	shl    $0x2,%eax
 8094acd:	89 04 24             	mov    %eax,(%esp)
 8094ad0:	e8 a0 02 00 00       	call   8094d75 <_Z21__slang_filter__allocj>
 8094ad5:	89 c2                	mov    %eax,%edx
 8094ad7:	8b 45 08             	mov    0x8(%ebp),%eax
 8094ada:	89 50 48             	mov    %edx,0x48(%eax)
 8094add:	8b 45 08             	mov    0x8(%ebp),%eax
 8094ae0:	8b 40 48             	mov    0x48(%eax),%eax
 8094ae3:	85 c0                	test   %eax,%eax
 8094ae5:	75 1a                	jne    8094b01 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv+0x51>
 8094ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8094aea:	8b 00                	mov    (%eax),%eax
 8094aec:	83 c0 2c             	add    $0x2c,%eax
 8094aef:	8b 10                	mov    (%eax),%edx
 8094af1:	c7 44 24 04 30 74 af 	movl   $0x8af7430,0x4(%esp)
 8094af8:	08 
 8094af9:	8b 45 08             	mov    0x8(%ebp),%eax
 8094afc:	89 04 24             	mov    %eax,(%esp)
 8094aff:	ff d2                	call   *%edx
 8094b01:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8094b04:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 8094b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b0e:	8b 40 48             	mov    0x48(%eax),%eax
 8094b11:	89 54 24 08          	mov    %edx,0x8(%esp)
 8094b15:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8094b1c:	00 
 8094b1d:	89 04 24             	mov    %eax,(%esp)
 8094b20:	e8 9b 91 fe ff       	call   807dcc0 <memset@plt>
 8094b25:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8094b28:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b2b:	89 50 44             	mov    %edx,0x44(%eax)
 8094b2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b31:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 8094b38:	e9 ae 00 00 00       	jmp    8094beb <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv+0x13b>
 8094b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b40:	8b 50 40             	mov    0x40(%eax),%edx
 8094b43:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b46:	8b 40 44             	mov    0x44(%eax),%eax
 8094b49:	83 e8 01             	sub    $0x1,%eax
 8094b4c:	39 c2                	cmp    %eax,%edx
 8094b4e:	0f 82 97 00 00 00    	jb     8094beb <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv+0x13b>
 8094b54:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
 8094b5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b5e:	8b 50 44             	mov    0x44(%eax),%edx
 8094b61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094b64:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094b67:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8094b6a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8094b6d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 8094b74:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b77:	8b 40 48             	mov    0x48(%eax),%eax
 8094b7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8094b7e:	89 04 24             	mov    %eax,(%esp)
 8094b81:	e8 02 02 00 00       	call   8094d88 <_Z23__slang_filter__reallocPvj>
 8094b86:	89 c2                	mov    %eax,%edx
 8094b88:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b8b:	89 50 48             	mov    %edx,0x48(%eax)
 8094b8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b91:	8b 40 48             	mov    0x48(%eax),%eax
 8094b94:	85 c0                	test   %eax,%eax
 8094b96:	75 1a                	jne    8094bb2 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv+0x102>
 8094b98:	8b 45 08             	mov    0x8(%ebp),%eax
 8094b9b:	8b 00                	mov    (%eax),%eax
 8094b9d:	83 c0 2c             	add    $0x2c,%eax
 8094ba0:	8b 10                	mov    (%eax),%edx
 8094ba2:	c7 44 24 04 30 74 af 	movl   $0x8af7430,0x4(%esp)
 8094ba9:	08 
 8094baa:	8b 45 08             	mov    0x8(%ebp),%eax
 8094bad:	89 04 24             	mov    %eax,(%esp)
 8094bb0:	ff d2                	call   *%edx
 8094bb2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094bb5:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 8094bbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8094bbf:	8b 48 48             	mov    0x48(%eax),%ecx
 8094bc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8094bc5:	8b 40 44             	mov    0x44(%eax),%eax
 8094bc8:	c1 e0 02             	shl    $0x2,%eax
 8094bcb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8094bce:	89 54 24 08          	mov    %edx,0x8(%esp)
 8094bd2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8094bd9:	00 
 8094bda:	89 04 24             	mov    %eax,(%esp)
 8094bdd:	e8 de 90 fe ff       	call   807dcc0 <memset@plt>
 8094be2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8094be5:	8b 45 08             	mov    0x8(%ebp),%eax
 8094be8:	89 50 44             	mov    %edx,0x44(%eax)
 8094beb:	c9                   	leave
 8094bec:	c3                   	ret
 8094bed:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yyensure_buffer_stack @ 0x8094ab0

/* __slang_filter__FlexLexer::yyensure_buffer_stack() */

void __thiscall __slang_filter__FlexLexer::yyensure_buffer_stack(__slang_filter__FlexLexer *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 0x48) == 0) {
    uVar2 = __slang_filter__alloc(4);
    *(undefined4 *)(this + 0x48) = uVar2;
    if (*(int *)(this + 0x48) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yyensure_buffer_stack()");
    }
    memset(*(void **)(this + 0x48),0,4);
    *(undefined4 *)(this + 0x44) = 1;
    *(undefined4 *)(this + 0x40) = 0;
  }
  else if (*(int *)(this + 0x44) - 1U <= *(uint *)(this + 0x40)) {
    iVar1 = *(int *)(this + 0x44);
    uVar2 = __slang_filter__realloc(*(void **)(this + 0x48),(iVar1 + 8) * 4);
    *(undefined4 *)(this + 0x48) = uVar2;
    if (*(int *)(this + 0x48) == 0) {
      (**(code **)(*(int *)this + 0x2c))(this,"out of dynamic memory in yyensure_buffer_stack()");
    }
    memset((void *)(*(int *)(this + 0x48) + *(int *)(this + 0x44) * 4),0,0x20);
    *(int *)(this + 0x44) = iVar1 + 8;
  }
  return;
}

```

---

## yyinput

```asm
// === 08094344 __slang_filter__FlexLexer::yyinput  [0x08094344-0x80944bb] ===
 8094344:	55                   	push   %ebp
 8094345:	89 e5                	mov    %esp,%ebp
 8094347:	83 ec 28             	sub    $0x28,%esp
 809434a:	8b 45 08             	mov    0x8(%ebp),%eax
 809434d:	8b 40 30             	mov    0x30(%eax),%eax
 8094350:	8b 55 08             	mov    0x8(%ebp),%edx
 8094353:	0f b6 52 28          	movzbl 0x28(%edx),%edx
 8094357:	88 10                	mov    %dl,(%eax)
 8094359:	8b 45 08             	mov    0x8(%ebp),%eax
 809435c:	8b 40 30             	mov    0x30(%eax),%eax
 809435f:	0f b6 00             	movzbl (%eax),%eax
 8094362:	84 c0                	test   %al,%al
 8094364:	0f 85 01 01 00 00    	jne    809446b <_ZN25__slang_filter__FlexLexer7yyinputEv+0x127>
 809436a:	8b 45 08             	mov    0x8(%ebp),%eax
 809436d:	8b 50 30             	mov    0x30(%eax),%edx
 8094370:	8b 45 08             	mov    0x8(%ebp),%eax
 8094373:	8b 48 48             	mov    0x48(%eax),%ecx
 8094376:	8b 45 08             	mov    0x8(%ebp),%eax
 8094379:	8b 40 40             	mov    0x40(%eax),%eax
 809437c:	c1 e0 02             	shl    $0x2,%eax
 809437f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8094382:	8b 00                	mov    (%eax),%eax
 8094384:	8b 48 04             	mov    0x4(%eax),%ecx
 8094387:	8b 45 08             	mov    0x8(%ebp),%eax
 809438a:	8b 40 2c             	mov    0x2c(%eax),%eax
 809438d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8094390:	39 c2                	cmp    %eax,%edx
 8094392:	73 0e                	jae    80943a2 <_ZN25__slang_filter__FlexLexer7yyinputEv+0x5e>
 8094394:	8b 45 08             	mov    0x8(%ebp),%eax
 8094397:	8b 40 30             	mov    0x30(%eax),%eax
 809439a:	c6 00 00             	movb   $0x0,(%eax)
 809439d:	e9 c9 00 00 00       	jmp    809446b <_ZN25__slang_filter__FlexLexer7yyinputEv+0x127>
 80943a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80943a5:	8b 40 30             	mov    0x30(%eax),%eax
 80943a8:	89 c2                	mov    %eax,%edx
 80943aa:	8b 45 08             	mov    0x8(%ebp),%eax
 80943ad:	8b 40 04             	mov    0x4(%eax),%eax
 80943b0:	89 d1                	mov    %edx,%ecx
 80943b2:	29 c1                	sub    %eax,%ecx
 80943b4:	89 c8                	mov    %ecx,%eax
 80943b6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80943b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80943bc:	8b 40 30             	mov    0x30(%eax),%eax
 80943bf:	8d 50 01             	lea    0x1(%eax),%edx
 80943c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80943c5:	89 50 30             	mov    %edx,0x30(%eax)
 80943c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80943cb:	89 04 24             	mov    %eax,(%esp)
 80943ce:	e8 b1 f7 ff ff       	call   8093b84 <_ZN25__slang_filter__FlexLexer18yy_get_next_bufferEv>
 80943d3:	83 f8 01             	cmp    $0x1,%eax
 80943d6:	74 2a                	je     8094402 <_ZN25__slang_filter__FlexLexer7yyinputEv+0xbe>
 80943d8:	83 f8 02             	cmp    $0x2,%eax
 80943db:	74 09                	je     80943e6 <_ZN25__slang_filter__FlexLexer7yyinputEv+0xa2>
 80943dd:	85 c0                	test   %eax,%eax
 80943df:	74 79                	je     809445a <_ZN25__slang_filter__FlexLexer7yyinputEv+0x116>
 80943e1:	e9 85 00 00 00       	jmp    809446b <_ZN25__slang_filter__FlexLexer7yyinputEv+0x127>
 80943e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80943e9:	8b 00                	mov    (%eax),%eax
 80943eb:	83 c0 14             	add    $0x14,%eax
 80943ee:	8b 10                	mov    (%eax),%edx
 80943f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80943f3:	8b 40 20             	mov    0x20(%eax),%eax
 80943f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80943fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80943fd:	89 04 24             	mov    %eax,(%esp)
 8094400:	ff d2                	call   *%edx
 8094402:	8b 45 08             	mov    0x8(%ebp),%eax
 8094405:	8b 00                	mov    (%eax),%eax
 8094407:	83 c0 20             	add    $0x20,%eax
 809440a:	8b 10                	mov    (%eax),%edx
 809440c:	8b 45 08             	mov    0x8(%ebp),%eax
 809440f:	89 04 24             	mov    %eax,(%esp)
 8094412:	ff d2                	call   *%edx
 8094414:	85 c0                	test   %eax,%eax
 8094416:	0f 95 c0             	setne  %al
 8094419:	84 c0                	test   %al,%al
 809441b:	74 0a                	je     8094427 <_ZN25__slang_filter__FlexLexer7yyinputEv+0xe3>
 809441d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8094422:	e9 92 00 00 00       	jmp    80944b9 <_ZN25__slang_filter__FlexLexer7yyinputEv+0x175>
 8094427:	8b 45 08             	mov    0x8(%ebp),%eax
 809442a:	8b 40 3c             	mov    0x3c(%eax),%eax
 809442d:	85 c0                	test   %eax,%eax
 809442f:	75 1c                	jne    809444d <_ZN25__slang_filter__FlexLexer7yyinputEv+0x109>
 8094431:	8b 45 08             	mov    0x8(%ebp),%eax
 8094434:	8b 00                	mov    (%eax),%eax
 8094436:	83 c0 14             	add    $0x14,%eax
 8094439:	8b 10                	mov    (%eax),%edx
 809443b:	8b 45 08             	mov    0x8(%ebp),%eax
 809443e:	8b 40 20             	mov    0x20(%eax),%eax
 8094441:	89 44 24 04          	mov    %eax,0x4(%esp)
 8094445:	8b 45 08             	mov    0x8(%ebp),%eax
 8094448:	89 04 24             	mov    %eax,(%esp)
 809444b:	ff d2                	call   *%edx
 809444d:	8b 45 08             	mov    0x8(%ebp),%eax
 8094450:	89 04 24             	mov    %eax,(%esp)
 8094453:	e8 ec fe ff ff       	call   8094344 <_ZN25__slang_filter__FlexLexer7yyinputEv>
 8094458:	eb 5f                	jmp    80944b9 <_ZN25__slang_filter__FlexLexer7yyinputEv+0x175>
 809445a:	8b 45 08             	mov    0x8(%ebp),%eax
 809445d:	8b 50 04             	mov    0x4(%eax),%edx
 8094460:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8094463:	01 c2                	add    %eax,%edx
 8094465:	8b 45 08             	mov    0x8(%ebp),%eax
 8094468:	89 50 30             	mov    %edx,0x30(%eax)
 809446b:	8b 45 08             	mov    0x8(%ebp),%eax
 809446e:	8b 40 30             	mov    0x30(%eax),%eax
 8094471:	0f b6 00             	movzbl (%eax),%eax
 8094474:	0f b6 c0             	movzbl %al,%eax
 8094477:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809447a:	8b 45 08             	mov    0x8(%ebp),%eax
 809447d:	8b 40 30             	mov    0x30(%eax),%eax
 8094480:	c6 00 00             	movb   $0x0,(%eax)
 8094483:	8b 45 08             	mov    0x8(%ebp),%eax
 8094486:	8b 40 30             	mov    0x30(%eax),%eax
 8094489:	8d 50 01             	lea    0x1(%eax),%edx
 809448c:	8b 45 08             	mov    0x8(%ebp),%eax
 809448f:	89 50 30             	mov    %edx,0x30(%eax)
 8094492:	8b 45 08             	mov    0x8(%ebp),%eax
 8094495:	8b 40 30             	mov    0x30(%eax),%eax
 8094498:	0f b6 10             	movzbl (%eax),%edx
 809449b:	8b 45 08             	mov    0x8(%ebp),%eax
 809449e:	88 50 28             	mov    %dl,0x28(%eax)
 80944a1:	83 7d f0 0a          	cmpl   $0xa,-0x10(%ebp)
 80944a5:	75 0f                	jne    80944b6 <_ZN25__slang_filter__FlexLexer7yyinputEv+0x172>
 80944a7:	8b 45 08             	mov    0x8(%ebp),%eax
 80944aa:	8b 40 0c             	mov    0xc(%eax),%eax
 80944ad:	8d 50 01             	lea    0x1(%eax),%edx
 80944b0:	8b 45 08             	mov    0x8(%ebp),%eax
 80944b3:	89 50 0c             	mov    %edx,0xc(%eax)
 80944b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80944b9:	c9                   	leave
 80944ba:	c3                   	ret
 80944bb:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yyinput @ 0x8094344

/* __slang_filter__FlexLexer::yyinput() */

uint __thiscall __slang_filter__FlexLexer::yyinput(__slang_filter__FlexLexer *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
  if (**(char **)(this + 0x30) == '\0') {
    if ((uint)(*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
              *(int *)(this + 0x2c)) <= *(uint *)(this + 0x30)) {
      iVar4 = *(int *)(this + 0x30);
      iVar2 = *(int *)(this + 4);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      iVar3 = yy_get_next_buffer(this);
      if (iVar3 != 1) {
        if (iVar3 != 2) {
          if (iVar3 == 0) {
            *(int *)(this + 0x30) = *(int *)(this + 4) + (iVar4 - iVar2);
          }
          goto LAB_0809446b;
        }
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      iVar4 = (**(code **)(*(int *)this + 0x20))(this);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      if (*(int *)(this + 0x3c) == 0) {
        (**(code **)(*(int *)this + 0x14))(this,*(undefined4 *)(this + 0x20));
      }
      uVar5 = yyinput(this);
      return uVar5;
    }
    **(undefined1 **)(this + 0x30) = 0;
  }
LAB_0809446b:
  bVar1 = **(byte **)(this + 0x30);
  **(undefined1 **)(this + 0x30) = 0;
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  this[0x28] = **(__slang_filter__FlexLexer **)(this + 0x30);
  if (bVar1 == 10) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  return (uint)bVar1;
}

```

---

## yylex

```asm
// === 0808ecde __slang_filter__FlexLexer::yylex  [0x0808ecde-0x808ed05] ===
 808ecde:	55                   	push   %ebp
 808ecdf:	89 e5                	mov    %esp,%ebp
 808ece1:	83 ec 18             	sub    $0x18,%esp
 808ece4:	8b 45 08             	mov    0x8(%ebp),%eax
 808ece7:	8b 00                	mov    (%eax),%eax
 808ece9:	83 c0 2c             	add    $0x2c,%eax
 808ecec:	8b 10                	mov    (%eax),%edx
 808ecee:	c7 44 24 04 a0 56 af 	movl   $0x8af56a0,0x4(%esp)
 808ecf5:	08 
 808ecf6:	8b 45 08             	mov    0x8(%ebp),%eax
 808ecf9:	89 04 24             	mov    %eax,(%esp)
 808ecfc:	ff d2                	call   *%edx
 808ecfe:	b8 00 00 00 00       	mov    $0x0,%eax
 808ed03:	c9                   	leave
 808ed04:	c3                   	ret
 808ed05:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yylex @ 0x808ecde

/* __slang_filter__FlexLexer::yylex() */

undefined4 __thiscall __slang_filter__FlexLexer::yylex(__slang_filter__FlexLexer *this)

{
  (**(code **)(*(int *)this + 0x2c))(this,"yyFlexLexer::yylex invoked but %option yyclass used");
  return 0;
}

```

---

## yypop_buffer_state

```asm
// === 080949d4 __slang_filter__FlexLexer::yypop_buffer_state  [0x080949d4-0x8094aaf] ===
 80949d4:	55                   	push   %ebp
 80949d5:	89 e5                	mov    %esp,%ebp
 80949d7:	83 ec 18             	sub    $0x18,%esp
 80949da:	8b 45 08             	mov    0x8(%ebp),%eax
 80949dd:	8b 40 48             	mov    0x48(%eax),%eax
 80949e0:	85 c0                	test   %eax,%eax
 80949e2:	0f 84 c1 00 00 00    	je     8094aa9 <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd5>
 80949e8:	8b 45 08             	mov    0x8(%ebp),%eax
 80949eb:	8b 50 48             	mov    0x48(%eax),%edx
 80949ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80949f1:	8b 40 40             	mov    0x40(%eax),%eax
 80949f4:	c1 e0 02             	shl    $0x2,%eax
 80949f7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80949fa:	8b 00                	mov    (%eax),%eax
 80949fc:	85 c0                	test   %eax,%eax
 80949fe:	0f 84 a8 00 00 00    	je     8094aac <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd8>
 8094a04:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a07:	8b 00                	mov    (%eax),%eax
 8094a09:	83 c0 10             	add    $0x10,%eax
 8094a0c:	8b 10                	mov    (%eax),%edx
 8094a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a11:	8b 40 48             	mov    0x48(%eax),%eax
 8094a14:	85 c0                	test   %eax,%eax
 8094a16:	74 16                	je     8094a2e <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0x5a>
 8094a18:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a1b:	8b 48 48             	mov    0x48(%eax),%ecx
 8094a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a21:	8b 40 40             	mov    0x40(%eax),%eax
 8094a24:	c1 e0 02             	shl    $0x2,%eax
 8094a27:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8094a2a:	8b 00                	mov    (%eax),%eax
 8094a2c:	eb 05                	jmp    8094a33 <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0x5f>
 8094a2e:	b8 00 00 00 00       	mov    $0x0,%eax
 8094a33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8094a37:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a3a:	89 04 24             	mov    %eax,(%esp)
 8094a3d:	ff d2                	call   *%edx
 8094a3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a42:	8b 50 48             	mov    0x48(%eax),%edx
 8094a45:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a48:	8b 40 40             	mov    0x40(%eax),%eax
 8094a4b:	c1 e0 02             	shl    $0x2,%eax
 8094a4e:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094a51:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8094a57:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a5a:	8b 40 40             	mov    0x40(%eax),%eax
 8094a5d:	85 c0                	test   %eax,%eax
 8094a5f:	74 0f                	je     8094a70 <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0x9c>
 8094a61:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a64:	8b 40 40             	mov    0x40(%eax),%eax
 8094a67:	8d 50 ff             	lea    -0x1(%eax),%edx
 8094a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a6d:	89 50 40             	mov    %edx,0x40(%eax)
 8094a70:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a73:	8b 40 48             	mov    0x48(%eax),%eax
 8094a76:	85 c0                	test   %eax,%eax
 8094a78:	74 33                	je     8094aad <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd9>
 8094a7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a7d:	8b 50 48             	mov    0x48(%eax),%edx
 8094a80:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a83:	8b 40 40             	mov    0x40(%eax),%eax
 8094a86:	c1 e0 02             	shl    $0x2,%eax
 8094a89:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094a8c:	8b 00                	mov    (%eax),%eax
 8094a8e:	85 c0                	test   %eax,%eax
 8094a90:	74 1b                	je     8094aad <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd9>
 8094a92:	8b 45 08             	mov    0x8(%ebp),%eax
 8094a95:	89 04 24             	mov    %eax,(%esp)
 8094a98:	e8 b1 fb ff ff       	call   809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>
 8094a9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8094aa0:	c7 40 3c 01 00 00 00 	movl   $0x1,0x3c(%eax)
 8094aa7:	eb 04                	jmp    8094aad <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd9>
 8094aa9:	90                   	nop
 8094aaa:	eb 01                	jmp    8094aad <_ZN25__slang_filter__FlexLexer18yypop_buffer_stateEv+0xd9>
 8094aac:	90                   	nop
 8094aad:	c9                   	leave
 8094aae:	c3                   	ret
 8094aaf:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yypop_buffer_state @ 0x80949d4

/* __slang_filter__FlexLexer::yypop_buffer_state() */

void __thiscall __slang_filter__FlexLexer::yypop_buffer_state(__slang_filter__FlexLexer *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x48) != 0) &&
     (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
    if (*(int *)(this + 0x48) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    }
    (**(code **)(*(int *)this + 0x10))(this,uVar1);
    *(undefined4 *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = 0;
    if (*(int *)(this + 0x40) != 0) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + -1;
    }
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      yy_load_buffer_state(this);
      *(undefined4 *)(this + 0x3c) = 1;
    }
  }
  return;
}

```

---

## yypush_buffer_state

```asm
// === 080948ec __slang_filter__FlexLexer::yypush_buffer_state  [0x080948ec-0x80949d3] ===
 80948ec:	55                   	push   %ebp
 80948ed:	89 e5                	mov    %esp,%ebp
 80948ef:	83 ec 18             	sub    $0x18,%esp
 80948f2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80948f6:	0f 84 d4 00 00 00    	je     80949d0 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xe4>
 80948fc:	8b 45 08             	mov    0x8(%ebp),%eax
 80948ff:	89 04 24             	mov    %eax,(%esp)
 8094902:	e8 a9 01 00 00       	call   8094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>
 8094907:	8b 45 08             	mov    0x8(%ebp),%eax
 809490a:	8b 40 48             	mov    0x48(%eax),%eax
 809490d:	85 c0                	test   %eax,%eax
 809490f:	74 61                	je     8094972 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0x86>
 8094911:	8b 45 08             	mov    0x8(%ebp),%eax
 8094914:	8b 50 48             	mov    0x48(%eax),%edx
 8094917:	8b 45 08             	mov    0x8(%ebp),%eax
 809491a:	8b 40 40             	mov    0x40(%eax),%eax
 809491d:	c1 e0 02             	shl    $0x2,%eax
 8094920:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094923:	8b 00                	mov    (%eax),%eax
 8094925:	85 c0                	test   %eax,%eax
 8094927:	74 49                	je     8094972 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0x86>
 8094929:	8b 45 08             	mov    0x8(%ebp),%eax
 809492c:	8b 40 30             	mov    0x30(%eax),%eax
 809492f:	8b 55 08             	mov    0x8(%ebp),%edx
 8094932:	0f b6 52 28          	movzbl 0x28(%edx),%edx
 8094936:	88 10                	mov    %dl,(%eax)
 8094938:	8b 45 08             	mov    0x8(%ebp),%eax
 809493b:	8b 50 48             	mov    0x48(%eax),%edx
 809493e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094941:	8b 40 40             	mov    0x40(%eax),%eax
 8094944:	c1 e0 02             	shl    $0x2,%eax
 8094947:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809494a:	8b 00                	mov    (%eax),%eax
 809494c:	8b 55 08             	mov    0x8(%ebp),%edx
 809494f:	8b 52 30             	mov    0x30(%edx),%edx
 8094952:	89 50 08             	mov    %edx,0x8(%eax)
 8094955:	8b 45 08             	mov    0x8(%ebp),%eax
 8094958:	8b 50 48             	mov    0x48(%eax),%edx
 809495b:	8b 45 08             	mov    0x8(%ebp),%eax
 809495e:	8b 40 40             	mov    0x40(%eax),%eax
 8094961:	c1 e0 02             	shl    $0x2,%eax
 8094964:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094967:	8b 00                	mov    (%eax),%eax
 8094969:	8b 55 08             	mov    0x8(%ebp),%edx
 809496c:	8b 52 2c             	mov    0x2c(%edx),%edx
 809496f:	89 50 10             	mov    %edx,0x10(%eax)
 8094972:	8b 45 08             	mov    0x8(%ebp),%eax
 8094975:	8b 40 48             	mov    0x48(%eax),%eax
 8094978:	85 c0                	test   %eax,%eax
 809497a:	74 27                	je     80949a3 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xb7>
 809497c:	8b 45 08             	mov    0x8(%ebp),%eax
 809497f:	8b 50 48             	mov    0x48(%eax),%edx
 8094982:	8b 45 08             	mov    0x8(%ebp),%eax
 8094985:	8b 40 40             	mov    0x40(%eax),%eax
 8094988:	c1 e0 02             	shl    $0x2,%eax
 809498b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809498e:	8b 00                	mov    (%eax),%eax
 8094990:	85 c0                	test   %eax,%eax
 8094992:	74 0f                	je     80949a3 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xb7>
 8094994:	8b 45 08             	mov    0x8(%ebp),%eax
 8094997:	8b 40 40             	mov    0x40(%eax),%eax
 809499a:	8d 50 01             	lea    0x1(%eax),%edx
 809499d:	8b 45 08             	mov    0x8(%ebp),%eax
 80949a0:	89 50 40             	mov    %edx,0x40(%eax)
 80949a3:	8b 45 08             	mov    0x8(%ebp),%eax
 80949a6:	8b 50 48             	mov    0x48(%eax),%edx
 80949a9:	8b 45 08             	mov    0x8(%ebp),%eax
 80949ac:	8b 40 40             	mov    0x40(%eax),%eax
 80949af:	c1 e0 02             	shl    $0x2,%eax
 80949b2:	01 c2                	add    %eax,%edx
 80949b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80949b7:	89 02                	mov    %eax,(%edx)
 80949b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80949bc:	89 04 24             	mov    %eax,(%esp)
 80949bf:	e8 8a fc ff ff       	call   809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>
 80949c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80949c7:	c7 40 3c 01 00 00 00 	movl   $0x1,0x3c(%eax)
 80949ce:	eb 01                	jmp    80949d1 <_ZN25__slang_filter__FlexLexer19yypush_buffer_stateEP15yy_buffer_state+0xe5>
 80949d0:	90                   	nop
 80949d1:	c9                   	leave
 80949d2:	c3                   	ret
 80949d3:	90                   	nop

```

```c
// __slang_filter__FlexLexer::yypush_buffer_state @ 0x80948ec

/* __slang_filter__FlexLexer::yypush_buffer_state(yy_buffer_state*) */

void __thiscall
__slang_filter__FlexLexer::yypush_buffer_state
          (__slang_filter__FlexLexer *this,yy_buffer_state *param_1)

{
  if (param_1 != (yy_buffer_state *)0x0) {
    yyensure_buffer_stack(this);
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      **(__slang_filter__FlexLexer **)(this + 0x30) = this[0x28];
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 8) =
           *(undefined4 *)(this + 0x30);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0x10) =
           *(undefined4 *)(this + 0x2c);
    }
    if ((*(int *)(this + 0x48) != 0) &&
       (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) != 0)) {
      *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
    }
    *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) = param_1;
    yy_load_buffer_state(this);
    *(undefined4 *)(this + 0x3c) = 1;
  }
  return;
}

```

---

## yyrestart

```asm
// === 080944bc __slang_filter__FlexLexer::yyrestart  [0x080944bc-0x8094573] ===
 80944bc:	55                   	push   %ebp
 80944bd:	89 e5                	mov    %esp,%ebp
 80944bf:	53                   	push   %ebx
 80944c0:	83 ec 14             	sub    $0x14,%esp
 80944c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80944c6:	8b 40 48             	mov    0x48(%eax),%eax
 80944c9:	85 c0                	test   %eax,%eax
 80944cb:	74 18                	je     80944e5 <_ZN25__slang_filter__FlexLexer9yyrestartEPSi+0x29>
 80944cd:	8b 45 08             	mov    0x8(%ebp),%eax
 80944d0:	8b 50 48             	mov    0x48(%eax),%edx
 80944d3:	8b 45 08             	mov    0x8(%ebp),%eax
 80944d6:	8b 40 40             	mov    0x40(%eax),%eax
 80944d9:	c1 e0 02             	shl    $0x2,%eax
 80944dc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80944df:	8b 00                	mov    (%eax),%eax
 80944e1:	85 c0                	test   %eax,%eax
 80944e3:	75 43                	jne    8094528 <_ZN25__slang_filter__FlexLexer9yyrestartEPSi+0x6c>
 80944e5:	8b 45 08             	mov    0x8(%ebp),%eax
 80944e8:	89 04 24             	mov    %eax,(%esp)
 80944eb:	e8 c0 05 00 00       	call   8094ab0 <_ZN25__slang_filter__FlexLexer21yyensure_buffer_stackEv>
 80944f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80944f3:	8b 50 48             	mov    0x48(%eax),%edx
 80944f6:	8b 45 08             	mov    0x8(%ebp),%eax
 80944f9:	8b 40 40             	mov    0x40(%eax),%eax
 80944fc:	c1 e0 02             	shl    $0x2,%eax
 80944ff:	8d 1c 02             	lea    (%edx,%eax,1),%ebx
 8094502:	8b 45 08             	mov    0x8(%ebp),%eax
 8094505:	8b 00                	mov    (%eax),%eax
 8094507:	83 c0 0c             	add    $0xc,%eax
 809450a:	8b 10                	mov    (%eax),%edx
 809450c:	8b 45 08             	mov    0x8(%ebp),%eax
 809450f:	8b 40 20             	mov    0x20(%eax),%eax
 8094512:	c7 44 24 08 00 40 00 	movl   $0x4000,0x8(%esp)
 8094519:	00 
 809451a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809451e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094521:	89 04 24             	mov    %eax,(%esp)
 8094524:	ff d2                	call   *%edx
 8094526:	89 03                	mov    %eax,(%ebx)
 8094528:	8b 45 08             	mov    0x8(%ebp),%eax
 809452b:	8b 40 48             	mov    0x48(%eax),%eax
 809452e:	85 c0                	test   %eax,%eax
 8094530:	74 16                	je     8094548 <_ZN25__slang_filter__FlexLexer9yyrestartEPSi+0x8c>
 8094532:	8b 45 08             	mov    0x8(%ebp),%eax
 8094535:	8b 50 48             	mov    0x48(%eax),%edx
 8094538:	8b 45 08             	mov    0x8(%ebp),%eax
 809453b:	8b 40 40             	mov    0x40(%eax),%eax
 809453e:	c1 e0 02             	shl    $0x2,%eax
 8094541:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094544:	8b 00                	mov    (%eax),%eax
 8094546:	eb 05                	jmp    809454d <_ZN25__slang_filter__FlexLexer9yyrestartEPSi+0x91>
 8094548:	b8 00 00 00 00       	mov    $0x0,%eax
 809454d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8094550:	89 54 24 08          	mov    %edx,0x8(%esp)
 8094554:	89 44 24 04          	mov    %eax,0x4(%esp)
 8094558:	8b 45 08             	mov    0x8(%ebp),%eax
 809455b:	89 04 24             	mov    %eax,(%esp)
 809455e:	e8 7b 02 00 00       	call   80947de <_ZN25__slang_filter__FlexLexer14yy_init_bufferEP15yy_buffer_statePSi>
 8094563:	8b 45 08             	mov    0x8(%ebp),%eax
 8094566:	89 04 24             	mov    %eax,(%esp)
 8094569:	e8 e0 00 00 00       	call   809464e <_ZN25__slang_filter__FlexLexer20yy_load_buffer_stateEv>
 809456e:	83 c4 14             	add    $0x14,%esp
 8094571:	5b                   	pop    %ebx
 8094572:	5d                   	pop    %ebp
 8094573:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yyrestart @ 0x80944bc

/* __slang_filter__FlexLexer::yyrestart(std::istream*) */

void __thiscall
__slang_filter__FlexLexer::yyrestart(__slang_filter__FlexLexer *this,istream *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  yy_buffer_state *pyVar4;
  
  if ((*(int *)(this + 0x48) == 0) ||
     (*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) == 0)) {
    yyensure_buffer_stack(this);
    iVar1 = *(int *)(this + 0x48);
    iVar2 = *(int *)(this + 0x40);
    uVar3 = (**(code **)(*(int *)this + 0xc))(this,*(undefined4 *)(this + 0x20),0x4000);
    *(undefined4 *)(iVar1 + iVar2 * 4) = uVar3;
  }
  if (*(int *)(this + 0x48) == 0) {
    pyVar4 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar4 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
  yy_init_buffer(this,pyVar4,param_1);
  yy_load_buffer_state(this);
  return;
}

```

---

## yyunput

```asm
// === 080941ba __slang_filter__FlexLexer::yyunput  [0x080941ba-0x8094343] ===
 80941ba:	55                   	push   %ebp
 80941bb:	89 e5                	mov    %esp,%ebp
 80941bd:	57                   	push   %edi
 80941be:	56                   	push   %esi
 80941bf:	53                   	push   %ebx
 80941c0:	83 ec 1c             	sub    $0x1c,%esp
 80941c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80941c6:	8b 58 30             	mov    0x30(%eax),%ebx
 80941c9:	8b 45 08             	mov    0x8(%ebp),%eax
 80941cc:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 80941d0:	88 03                	mov    %al,(%ebx)
 80941d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80941d5:	8b 50 48             	mov    0x48(%eax),%edx
 80941d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80941db:	8b 40 40             	mov    0x40(%eax),%eax
 80941de:	c1 e0 02             	shl    $0x2,%eax
 80941e1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80941e4:	8b 00                	mov    (%eax),%eax
 80941e6:	8b 40 04             	mov    0x4(%eax),%eax
 80941e9:	83 c0 02             	add    $0x2,%eax
 80941ec:	39 d8                	cmp    %ebx,%eax
 80941ee:	0f 86 13 01 00 00    	jbe    8094307 <_ZN25__slang_filter__FlexLexer7yyunputEiPc+0x14d>
 80941f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80941f7:	8b 40 2c             	mov    0x2c(%eax),%eax
 80941fa:	8d 70 02             	lea    0x2(%eax),%esi
 80941fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8094200:	8b 50 48             	mov    0x48(%eax),%edx
 8094203:	8b 45 08             	mov    0x8(%ebp),%eax
 8094206:	8b 40 40             	mov    0x40(%eax),%eax
 8094209:	c1 e0 02             	shl    $0x2,%eax
 809420c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809420f:	8b 00                	mov    (%eax),%eax
 8094211:	8b 50 04             	mov    0x4(%eax),%edx
 8094214:	8b 45 08             	mov    0x8(%ebp),%eax
 8094217:	8b 48 48             	mov    0x48(%eax),%ecx
 809421a:	8b 45 08             	mov    0x8(%ebp),%eax
 809421d:	8b 40 40             	mov    0x40(%eax),%eax
 8094220:	c1 e0 02             	shl    $0x2,%eax
 8094223:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8094226:	8b 00                	mov    (%eax),%eax
 8094228:	8b 40 0c             	mov    0xc(%eax),%eax
 809422b:	83 c0 02             	add    $0x2,%eax
 809422e:	8d 3c 02             	lea    (%edx,%eax,1),%edi
 8094231:	8b 45 08             	mov    0x8(%ebp),%eax
 8094234:	8b 50 48             	mov    0x48(%eax),%edx
 8094237:	8b 45 08             	mov    0x8(%ebp),%eax
 809423a:	8b 40 40             	mov    0x40(%eax),%eax
 809423d:	c1 e0 02             	shl    $0x2,%eax
 8094240:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8094243:	8b 00                	mov    (%eax),%eax
 8094245:	8b 50 04             	mov    0x4(%eax),%edx
 8094248:	89 f0                	mov    %esi,%eax
 809424a:	8d 34 02             	lea    (%edx,%eax,1),%esi
 809424d:	eb 0b                	jmp    809425a <_ZN25__slang_filter__FlexLexer7yyunputEiPc+0xa0>
 809424f:	83 ef 01             	sub    $0x1,%edi
 8094252:	83 ee 01             	sub    $0x1,%esi
 8094255:	0f b6 06             	movzbl (%esi),%eax
 8094258:	88 07                	mov    %al,(%edi)
 809425a:	8b 45 08             	mov    0x8(%ebp),%eax
 809425d:	8b 50 48             	mov    0x48(%eax),%edx
 8094260:	8b 45 08             	mov    0x8(%ebp),%eax
 8094263:	8b 40 40             	mov    0x40(%eax),%eax
 8094266:	c1 e0 02             	shl    $0x2,%eax
 8094269:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809426c:	8b 00                	mov    (%eax),%eax
 809426e:	8b 40 04             	mov    0x4(%eax),%eax
 8094271:	39 f0                	cmp    %esi,%eax
 8094273:	0f 92 c0             	setb   %al
 8094276:	84 c0                	test   %al,%al
 8094278:	75 d5                	jne    809424f <_ZN25__slang_filter__FlexLexer7yyunputEiPc+0x95>
 809427a:	89 fa                	mov    %edi,%edx
 809427c:	89 f0                	mov    %esi,%eax
 809427e:	89 d1                	mov    %edx,%ecx
 8094280:	29 c1                	sub    %eax,%ecx
 8094282:	89 c8                	mov    %ecx,%eax
 8094284:	01 c3                	add    %eax,%ebx
 8094286:	89 fa                	mov    %edi,%edx
 8094288:	89 f0                	mov    %esi,%eax
 809428a:	89 d1                	mov    %edx,%ecx
 809428c:	29 c1                	sub    %eax,%ecx
 809428e:	89 c8                	mov    %ecx,%eax
 8094290:	01 45 10             	add    %eax,0x10(%ebp)
 8094293:	8b 45 08             	mov    0x8(%ebp),%eax
 8094296:	8b 50 48             	mov    0x48(%eax),%edx
 8094299:	8b 45 08             	mov    0x8(%ebp),%eax
 809429c:	8b 40 40             	mov    0x40(%eax),%eax
 809429f:	c1 e0 02             	shl    $0x2,%eax
 80942a2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80942a5:	8b 00                	mov    (%eax),%eax
 80942a7:	8b 55 08             	mov    0x8(%ebp),%edx
 80942aa:	8b 4a 48             	mov    0x48(%edx),%ecx
 80942ad:	8b 55 08             	mov    0x8(%ebp),%edx
 80942b0:	8b 52 40             	mov    0x40(%edx),%edx
 80942b3:	c1 e2 02             	shl    $0x2,%edx
 80942b6:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80942b9:	8b 12                	mov    (%edx),%edx
 80942bb:	8b 52 0c             	mov    0xc(%edx),%edx
 80942be:	89 d1                	mov    %edx,%ecx
 80942c0:	8b 55 08             	mov    0x8(%ebp),%edx
 80942c3:	89 4a 2c             	mov    %ecx,0x2c(%edx)
 80942c6:	8b 55 08             	mov    0x8(%ebp),%edx
 80942c9:	8b 52 2c             	mov    0x2c(%edx),%edx
 80942cc:	89 50 10             	mov    %edx,0x10(%eax)
 80942cf:	8b 45 08             	mov    0x8(%ebp),%eax
 80942d2:	8b 50 48             	mov    0x48(%eax),%edx
 80942d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80942d8:	8b 40 40             	mov    0x40(%eax),%eax
 80942db:	c1 e0 02             	shl    $0x2,%eax
 80942de:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80942e1:	8b 00                	mov    (%eax),%eax
 80942e3:	8b 40 04             	mov    0x4(%eax),%eax
 80942e6:	83 c0 02             	add    $0x2,%eax
 80942e9:	39 d8                	cmp    %ebx,%eax
 80942eb:	76 1a                	jbe    8094307 <_ZN25__slang_filter__FlexLexer7yyunputEiPc+0x14d>
 80942ed:	8b 45 08             	mov    0x8(%ebp),%eax
 80942f0:	8b 00                	mov    (%eax),%eax
 80942f2:	83 c0 2c             	add    $0x2c,%eax
 80942f5:	8b 10                	mov    (%eax),%edx
 80942f7:	c7 44 24 04 e4 73 af 	movl   $0x8af73e4,0x4(%esp)
 80942fe:	08 
 80942ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8094302:	89 04 24             	mov    %eax,(%esp)
 8094305:	ff d2                	call   *%edx
 8094307:	83 eb 01             	sub    $0x1,%ebx
 809430a:	8b 45 0c             	mov    0xc(%ebp),%eax
 809430d:	88 03                	mov    %al,(%ebx)
 809430f:	83 7d 0c 0a          	cmpl   $0xa,0xc(%ebp)
 8094313:	75 0f                	jne    8094324 <_ZN25__slang_filter__FlexLexer7yyunputEiPc+0x16a>
 8094315:	8b 45 08             	mov    0x8(%ebp),%eax
 8094318:	8b 40 0c             	mov    0xc(%eax),%eax
 809431b:	8d 50 ff             	lea    -0x1(%eax),%edx
 809431e:	8b 45 08             	mov    0x8(%ebp),%eax
 8094321:	89 50 0c             	mov    %edx,0xc(%eax)
 8094324:	8b 45 08             	mov    0x8(%ebp),%eax
 8094327:	8b 55 10             	mov    0x10(%ebp),%edx
 809432a:	89 50 04             	mov    %edx,0x4(%eax)
 809432d:	0f b6 13             	movzbl (%ebx),%edx
 8094330:	8b 45 08             	mov    0x8(%ebp),%eax
 8094333:	88 50 28             	mov    %dl,0x28(%eax)
 8094336:	8b 45 08             	mov    0x8(%ebp),%eax
 8094339:	89 58 30             	mov    %ebx,0x30(%eax)
 809433c:	83 c4 1c             	add    $0x1c,%esp
 809433f:	5b                   	pop    %ebx
 8094340:	5e                   	pop    %esi
 8094341:	5f                   	pop    %edi
 8094342:	5d                   	pop    %ebp
 8094343:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yyunput @ 0x80941ba

/* __slang_filter__FlexLexer::yyunput(int, char*) */

void __thiscall
__slang_filter__FlexLexer::yyunput(__slang_filter__FlexLexer *this,int param_1,char *param_2)

{
  int iVar1;
  __slang_filter__FlexLexer *p_Var2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  p_Var2 = *(__slang_filter__FlexLexer **)(this + 0x30);
  *p_Var2 = this[0x28];
  if (p_Var2 < (__slang_filter__FlexLexer *)
               (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) + 2)) {
    puVar4 = (undefined1 *)
             (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
             *(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc) + 2);
    puVar3 = (undefined1 *)
             (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) +
             *(int *)(this + 0x2c) + 2);
    while (*(undefined1 **)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) <
           puVar3) {
      puVar4 = puVar4 + -1;
      puVar3 = puVar3 + -1;
      *puVar4 = *puVar3;
    }
    p_Var2 = p_Var2 + ((int)puVar4 - (int)puVar3);
    param_2 = param_2 + ((int)puVar4 - (int)puVar3);
    iVar1 = *(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
    *(undefined4 *)(this + 0x2c) =
         *(undefined4 *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(this + 0x2c);
    if (p_Var2 < (__slang_filter__FlexLexer *)
                 (*(int *)(*(int *)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4) + 4) + 2)) {
      (**(code **)(*(int *)this + 0x2c))(this,"flex scanner push-back overflow");
    }
  }
  p_Var2 = p_Var2 + -1;
  *p_Var2 = SUB41(param_1,0);
  if (param_1 == 10) {
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + -1;
  }
  *(char **)(this + 4) = param_2;
  this[0x28] = *p_Var2;
  *(__slang_filter__FlexLexer **)(this + 0x30) = p_Var2;
  return;
}

```

---

## yywrap

```asm
// === 0808ecd4 __slang_filter__FlexLexer::yywrap  [0x0808ecd4-0x808ecdd] ===
 808ecd4:	55                   	push   %ebp
 808ecd5:	89 e5                	mov    %esp,%ebp
 808ecd7:	b8 01 00 00 00       	mov    $0x1,%eax
 808ecdc:	5d                   	pop    %ebp
 808ecdd:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::yywrap @ 0x808ecd4

/* __slang_filter__FlexLexer::yywrap() */

undefined4 __slang_filter__FlexLexer::yywrap(void)

{
  return 1;
}

```

---

## ~__slang_filter__FlexLexer

```asm
// === 0809391a __slang_filter__FlexLexer::~__slang_filter__FlexLexer  [0x0809391a-0x80939d5] ===
 809391a:	55                   	push   %ebp
 809391b:	89 e5                	mov    %esp,%ebp
 809391d:	56                   	push   %esi
 809391e:	53                   	push   %ebx
 809391f:	83 ec 10             	sub    $0x10,%esp
 8093922:	8b 45 08             	mov    0x8(%ebp),%eax
 8093925:	c7 00 28 23 b1 08    	movl   $0x8b12328,(%eax)
 809392b:	8b 45 08             	mov    0x8(%ebp),%eax
 809392e:	8b 40 54             	mov    0x54(%eax),%eax
 8093931:	85 c0                	test   %eax,%eax
 8093933:	74 0e                	je     8093943 <_ZN25__slang_filter__FlexLexerD1Ev+0x29>
 8093935:	8b 45 08             	mov    0x8(%ebp),%eax
 8093938:	8b 40 54             	mov    0x54(%eax),%eax
 809393b:	89 04 24             	mov    %eax,(%esp)
 809393e:	e8 6d 12 69 00       	call   8724bb0 <_ZdaPv>
 8093943:	8b 45 08             	mov    0x8(%ebp),%eax
 8093946:	8b 40 1c             	mov    0x1c(%eax),%eax
 8093949:	89 04 24             	mov    %eax,(%esp)
 809394c:	e8 51 14 00 00       	call   8094da2 <_Z20__slang_filter__freePv>
 8093951:	8b 45 08             	mov    0x8(%ebp),%eax
 8093954:	8b 40 48             	mov    0x48(%eax),%eax
 8093957:	85 c0                	test   %eax,%eax
 8093959:	74 16                	je     8093971 <_ZN25__slang_filter__FlexLexerD1Ev+0x57>
 809395b:	8b 45 08             	mov    0x8(%ebp),%eax
 809395e:	8b 50 48             	mov    0x48(%eax),%edx
 8093961:	8b 45 08             	mov    0x8(%ebp),%eax
 8093964:	8b 40 40             	mov    0x40(%eax),%eax
 8093967:	c1 e0 02             	shl    $0x2,%eax
 809396a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 809396d:	8b 00                	mov    (%eax),%eax
 809396f:	eb 05                	jmp    8093976 <_ZN25__slang_filter__FlexLexerD1Ev+0x5c>
 8093971:	b8 00 00 00 00       	mov    $0x0,%eax
 8093976:	89 44 24 04          	mov    %eax,0x4(%esp)
 809397a:	8b 45 08             	mov    0x8(%ebp),%eax
 809397d:	89 04 24             	mov    %eax,(%esp)
 8093980:	e8 e3 0d 00 00       	call   8094768 <_ZN25__slang_filter__FlexLexer16yy_delete_bufferEP15yy_buffer_state>
 8093985:	8b 45 08             	mov    0x8(%ebp),%eax
 8093988:	8b 40 48             	mov    0x48(%eax),%eax
 809398b:	89 04 24             	mov    %eax,(%esp)
 809398e:	e8 0f 14 00 00       	call   8094da2 <_Z20__slang_filter__freePv>
 8093993:	8b 45 08             	mov    0x8(%ebp),%eax
 8093996:	89 04 24             	mov    %eax,(%esp)
 8093999:	e8 74 14 00 00       	call   8094e12 <_ZN9FlexLexerD1Ev>
 809399e:	b8 00 00 00 00       	mov    $0x0,%eax
 80939a3:	84 c0                	test   %al,%al
 80939a5:	74 28                	je     80939cf <_ZN25__slang_filter__FlexLexerD1Ev+0xb5>
 80939a7:	eb 1b                	jmp    80939c4 <_ZN25__slang_filter__FlexLexerD1Ev+0xaa>
 80939a9:	89 d3                	mov    %edx,%ebx
 80939ab:	89 c6                	mov    %eax,%esi
 80939ad:	8b 45 08             	mov    0x8(%ebp),%eax
 80939b0:	89 04 24             	mov    %eax,(%esp)
 80939b3:	e8 5a 14 00 00       	call   8094e12 <_ZN9FlexLexerD1Ev>
 80939b8:	89 f0                	mov    %esi,%eax
 80939ba:	89 da                	mov    %ebx,%edx
 80939bc:	89 04 24             	mov    %eax,(%esp)
 80939bf:	e8 8c fd a4 00       	call   8ae3750 <_Unwind_Resume>
 80939c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80939c7:	89 04 24             	mov    %eax,(%esp)
 80939ca:	e8 21 0b 69 00       	call   87244f0 <_ZdlPv>
 80939cf:	83 c4 10             	add    $0x10,%esp
 80939d2:	5b                   	pop    %ebx
 80939d3:	5e                   	pop    %esi
 80939d4:	5d                   	pop    %ebp
 80939d5:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::~__slang_filter__FlexLexer @ 0x809391a

/* WARNING: Removing unreachable block (ram,0x080939a7) */
/* __slang_filter__FlexLexer::~__slang_filter__FlexLexer() */

void __thiscall
__slang_filter__FlexLexer::~__slang_filter__FlexLexer(__slang_filter__FlexLexer *this)

{
  yy_buffer_state *pyVar1;
  
  *(undefined ***)this = &PTR____slang_filter__FlexLexer_08b12328;
  if (*(int *)(this + 0x54) != 0) {
    operator_delete__(*(void **)(this + 0x54));
  }
  __slang_filter__free(*(void **)(this + 0x1c));
  if (*(int *)(this + 0x48) == 0) {
    pyVar1 = (yy_buffer_state *)0x0;
  }
  else {
    pyVar1 = *(yy_buffer_state **)(*(int *)(this + 0x48) + *(int *)(this + 0x40) * 4);
  }
                    /* try { // try from 08093980 to 08093984 has its CatchHandler @ 080939a9 */
  yy_delete_buffer(this,pyVar1);
  __slang_filter__free(*(void **)(this + 0x48));
  FlexLexer::~FlexLexer((FlexLexer *)this);
  return;
}

```

---

## ~__slang_filter__FlexLexer_080939d6

```asm
// === 080939d6 __slang_filter__FlexLexer::~__slang_filter__FlexLexer  [0x080939d6-0x80939f3] ===
 80939d6:	55                   	push   %ebp
 80939d7:	89 e5                	mov    %esp,%ebp
 80939d9:	83 ec 18             	sub    $0x18,%esp
 80939dc:	8b 45 08             	mov    0x8(%ebp),%eax
 80939df:	89 04 24             	mov    %eax,(%esp)
 80939e2:	e8 33 ff ff ff       	call   809391a <_ZN25__slang_filter__FlexLexerD1Ev>
 80939e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80939ea:	89 04 24             	mov    %eax,(%esp)
 80939ed:	e8 fe 0a 69 00       	call   87244f0 <_ZdlPv>
 80939f2:	c9                   	leave
 80939f3:	c3                   	ret

```

```c
// __slang_filter__FlexLexer::~__slang_filter__FlexLexer @ 0x80939d6

/* __slang_filter__FlexLexer::~__slang_filter__FlexLexer() */

void __thiscall
__slang_filter__FlexLexer::~__slang_filter__FlexLexer(__slang_filter__FlexLexer *this)

{
  ~__slang_filter__FlexLexer(this);
  operator_delete(this);
  return;
}

```


# CaptchaGen

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CaptchaGen

```asm
// === 080de68c CaptchaGen::CaptchaGen  [0x080de68c-0x80de705] ===
 80de68c:	55                   	push   %ebp
 80de68d:	89 e5                	mov    %esp,%ebp
 80de68f:	56                   	push   %esi
 80de690:	53                   	push   %ebx
 80de691:	83 ec 20             	sub    $0x20,%esp
 80de694:	8b 45 08             	mov    0x8(%ebp),%eax
 80de697:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80de69d:	8b 45 08             	mov    0x8(%ebp),%eax
 80de6a0:	83 c0 04             	add    $0x4,%eax
 80de6a3:	89 04 24             	mov    %eax,(%esp)
 80de6a6:	e8 55 11 00 00       	call   80df800 <_ZNSt6vectorIPvSaIS0_EEC1Ev>
 80de6ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80de6ae:	83 c0 10             	add    $0x10,%eax
 80de6b1:	89 04 24             	mov    %eax,(%esp)
 80de6b4:	e8 d7 13 a0 00       	call   8adfa90 <_ZN8XorRand4C1Ev>
 80de6b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80de6bc:	89 04 24             	mov    %eax,(%esp)
 80de6bf:	e8 fc e3 6d 00       	call   87bcac0 <FT_Init_FreeType>
 80de6c4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80de6c7:	e8 9e 01 a0 00       	call   8ade86a <_ZN4Tick18nowAsInternalValueEv>
 80de6cc:	8b 55 08             	mov    0x8(%ebp),%edx
 80de6cf:	83 c2 10             	add    $0x10,%edx
 80de6d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de6d6:	89 14 24             	mov    %edx,(%esp)
 80de6d9:	e8 ce 13 a0 00       	call   8adfaac <_ZN8XorRand44seedEj>
 80de6de:	eb 1e                	jmp    80de6fe <_ZN10CaptchaGenC1Ev+0x72>
 80de6e0:	89 d3                	mov    %edx,%ebx
 80de6e2:	89 c6                	mov    %eax,%esi
 80de6e4:	8b 45 08             	mov    0x8(%ebp),%eax
 80de6e7:	83 c0 04             	add    $0x4,%eax
 80de6ea:	89 04 24             	mov    %eax,(%esp)
 80de6ed:	e8 22 11 00 00       	call   80df814 <_ZNSt6vectorIPvSaIS0_EED1Ev>
 80de6f2:	89 f0                	mov    %esi,%eax
 80de6f4:	89 da                	mov    %ebx,%edx
 80de6f6:	89 04 24             	mov    %eax,(%esp)
 80de6f9:	e8 52 50 a0 00       	call   8ae3750 <_Unwind_Resume>
 80de6fe:	83 c4 20             	add    $0x20,%esp
 80de701:	5b                   	pop    %ebx
 80de702:	5e                   	pop    %esi
 80de703:	5d                   	pop    %ebp
 80de704:	c3                   	ret
 80de705:	90                   	nop

```

```c
// CaptchaGen::CaptchaGen @ 0x80de68c

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::CaptchaGen() */

void __thiscall CaptchaGen::CaptchaGen(CaptchaGen *this)

{
  uint32 seed;
  
  *(undefined4 *)this = 0;
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)(this + 4));
                    /* try { // try from 080de6b4 to 080de6dd has its CatchHandler @ 080de6e0 */
  XorRand4::XorRand4((XorRand4 *)(this + 0x10));
  FT_Init_FreeType((FT_Library_conflict *)this);
  seed = Tick::nowAsInternalValue();
  XorRand4::seed((XorRand4 *)(this + 0x10),seed);
  return;
}

```

---

## addFont

```asm
// === 080de794 CaptchaGen::addFont  [0x080de794-0x80de83b] ===
 80de794:	55                   	push   %ebp
 80de795:	89 e5                	mov    %esp,%ebp
 80de797:	83 ec 28             	sub    $0x28,%esp
 80de79a:	8b 45 08             	mov    0x8(%ebp),%eax
 80de79d:	8b 00                	mov    (%eax),%eax
 80de79f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80de7a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80de7a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80de7ad:	00 
 80de7ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 80de7b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80de7b5:	89 04 24             	mov    %eax,(%esp)
 80de7b8:	e8 73 5f 6e 00       	call   87c4730 <FT_New_Face>
 80de7bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80de7c0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80de7c4:	74 07                	je     80de7cd <_ZN10CaptchaGen7addFontEPKci+0x39>
 80de7c6:	b8 00 00 00 00       	mov    $0x0,%eax
 80de7cb:	eb 6d                	jmp    80de83a <_ZN10CaptchaGen7addFontEPKci+0xa6>
 80de7cd:	8b 55 10             	mov    0x10(%ebp),%edx
 80de7d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80de7d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80de7d7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80de7de:	00 
 80de7df:	89 04 24             	mov    %eax,(%esp)
 80de7e2:	e8 39 47 6e 00       	call   87c2f20 <FT_Set_Pixel_Sizes>
 80de7e7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80de7ea:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80de7ee:	74 07                	je     80de7f7 <_ZN10CaptchaGen7addFontEPKci+0x63>
 80de7f0:	b8 00 00 00 00       	mov    $0x0,%eax
 80de7f5:	eb 43                	jmp    80de83a <_ZN10CaptchaGen7addFontEPKci+0xa6>
 80de7f7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80de7fa:	c7 44 24 04 63 69 6e 	movl   $0x756e6963,0x4(%esp)
 80de801:	75 
 80de802:	89 04 24             	mov    %eax,(%esp)
 80de805:	e8 76 f5 6d 00       	call   87bdd80 <FT_Select_Charmap>
 80de80a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80de80d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80de811:	74 07                	je     80de81a <_ZN10CaptchaGen7addFontEPKci+0x86>
 80de813:	b8 00 00 00 00       	mov    $0x0,%eax
 80de818:	eb 20                	jmp    80de83a <_ZN10CaptchaGen7addFontEPKci+0xa6>
 80de81a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80de81d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80de820:	8b 45 08             	mov    0x8(%ebp),%eax
 80de823:	8d 50 04             	lea    0x4(%eax),%edx
 80de826:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80de829:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de82d:	89 14 24             	mov    %edx,(%esp)
 80de830:	e8 6b 10 00 00       	call   80df8a0 <_ZNSt6vectorIPvSaIS0_EE9push_backEOS0_>
 80de835:	b8 01 00 00 00       	mov    $0x1,%eax
 80de83a:	c9                   	leave
 80de83b:	c3                   	ret

```

```c
// CaptchaGen::addFont @ 0x80de794

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::addFont(char const*, int) */

undefined4 __thiscall CaptchaGen::addFont(CaptchaGen *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  FT_Face_conflict local_18;
  FT_Face_conflict local_14;
  FT_Error local_10;
  
  local_10 = FT_New_Face(*(FT_Library *)this,param_1,0,&local_18);
  if (local_10 == 0) {
    local_10 = FT_Set_Pixel_Sizes(local_18,0,param_2);
    if (local_10 == 0) {
      local_10 = FT_Select_Charmap(local_18,FT_ENCODING_UNICODE);
      if (local_10 == 0) {
        local_14 = local_18;
        std::vector<void*,std::allocator<void*>>::push_back
                  ((vector<void*,std::allocator<void*>> *)(this + 4),&local_14);
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## generateImage

```asm
// === 080deade CaptchaGen::generateImage  [0x080deade-0x80df4e7] ===
 80deade:	55                   	push   %ebp
 80deadf:	89 e5                	mov    %esp,%ebp
 80deae1:	56                   	push   %esi
 80deae2:	53                   	push   %ebx
 80deae3:	81 ec 20 01 00 00    	sub    $0x120,%esp
 80deae9:	8b 45 08             	mov    0x8(%ebp),%eax
 80deaec:	83 c0 04             	add    $0x4,%eax
 80deaef:	89 04 24             	mov    %eax,(%esp)
 80deaf2:	e8 d3 0d 00 00       	call   80df8ca <_ZNKSt6vectorIPvSaIS0_EE5emptyEv>
 80deaf7:	84 c0                	test   %al,%al
 80deaf9:	0f 85 de 09 00 00    	jne    80df4dd <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x9ff>
 80deaff:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80deb06:	00 
 80deb07:	8b 45 10             	mov    0x10(%ebp),%eax
 80deb0a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80deb0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80deb11:	89 44 24 04          	mov    %eax,0x4(%esp)
 80deb15:	8b 45 20             	mov    0x20(%ebp),%eax
 80deb18:	89 04 24             	mov    %eax,(%esp)
 80deb1b:	e8 fe 09 00 00       	call   80df51e <_ZN9GreyImage4initEiih>
 80deb20:	c7 85 70 ff ff ff 00 	movl   $0x0,-0x90(%ebp)
 80deb27:	00 00 00 
 80deb2a:	e9 5c 01 00 00       	jmp    80dec8b <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x1ad>
 80deb2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80deb32:	83 c0 10             	add    $0x10,%eax
 80deb35:	89 04 24             	mov    %eax,(%esp)
 80deb38:	e8 ff 0f a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80deb3d:	8b 55 0c             	mov    0xc(%ebp),%edx
 80deb40:	83 ea 0a             	sub    $0xa,%edx
 80deb43:	89 d1                	mov    %edx,%ecx
 80deb45:	ba 00 00 00 00       	mov    $0x0,%edx
 80deb4a:	f7 f1                	div    %ecx
 80deb4c:	89 d0                	mov    %edx,%eax
 80deb4e:	83 c0 05             	add    $0x5,%eax
 80deb51:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 80deb57:	8b 45 08             	mov    0x8(%ebp),%eax
 80deb5a:	83 c0 10             	add    $0x10,%eax
 80deb5d:	89 04 24             	mov    %eax,(%esp)
 80deb60:	e8 d7 0f a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80deb65:	8b 55 10             	mov    0x10(%ebp),%edx
 80deb68:	83 ea 0a             	sub    $0xa,%edx
 80deb6b:	89 d1                	mov    %edx,%ecx
 80deb6d:	ba 00 00 00 00       	mov    $0x0,%edx
 80deb72:	f7 f1                	div    %ecx
 80deb74:	89 d0                	mov    %edx,%eax
 80deb76:	83 c0 05             	add    $0x5,%eax
 80deb79:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 80deb7f:	8b 45 08             	mov    0x8(%ebp),%eax
 80deb82:	83 c0 10             	add    $0x10,%eax
 80deb85:	89 04 24             	mov    %eax,(%esp)
 80deb88:	e8 af 0f a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80deb8d:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80deb90:	8b 52 04             	mov    0x4(%edx),%edx
 80deb93:	89 d1                	mov    %edx,%ecx
 80deb95:	ba 00 00 00 00       	mov    $0x0,%edx
 80deb9a:	f7 f1                	div    %ecx
 80deb9c:	89 d0                	mov    %edx,%eax
 80deb9e:	83 c0 01             	add    $0x1,%eax
 80deba1:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 80deba7:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 80debad:	f7 d8                	neg    %eax
 80debaf:	89 45 80             	mov    %eax,-0x80(%ebp)
 80debb2:	e9 b9 00 00 00       	jmp    80dec70 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x192>
 80debb7:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 80debbd:	f7 d8                	neg    %eax
 80debbf:	89 45 84             	mov    %eax,-0x7c(%ebp)
 80debc2:	e9 91 00 00 00       	jmp    80dec58 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x17a>
 80debc7:	8b 45 80             	mov    -0x80(%ebp),%eax
 80debca:	89 c2                	mov    %eax,%edx
 80debcc:	0f af 55 80          	imul   -0x80(%ebp),%edx
 80debd0:	8b 45 84             	mov    -0x7c(%ebp),%eax
 80debd3:	0f af 45 84          	imul   -0x7c(%ebp),%eax
 80debd7:	01 c2                	add    %eax,%edx
 80debd9:	89 d0                	mov    %edx,%eax
 80debdb:	c1 e0 08             	shl    $0x8,%eax
 80debde:	89 c1                	mov    %eax,%ecx
 80debe0:	29 d1                	sub    %edx,%ecx
 80debe2:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 80debe8:	89 c2                	mov    %eax,%edx
 80debea:	0f af 95 7c ff ff ff 	imul   -0x84(%ebp),%edx
 80debf1:	89 95 04 ff ff ff    	mov    %edx,-0xfc(%ebp)
 80debf7:	89 ca                	mov    %ecx,%edx
 80debf9:	89 d0                	mov    %edx,%eax
 80debfb:	c1 fa 1f             	sar    $0x1f,%edx
 80debfe:	f7 bd 04 ff ff ff    	idivl  -0xfc(%ebp)
 80dec04:	89 45 88             	mov    %eax,-0x78(%ebp)
 80dec07:	81 7d 88 fe 00 00 00 	cmpl   $0xfe,-0x78(%ebp)
 80dec0e:	7f 44                	jg     80dec54 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x176>
 80dec10:	b8 ff 00 00 00       	mov    $0xff,%eax
 80dec15:	2b 45 88             	sub    -0x78(%ebp),%eax
 80dec18:	89 c2                	mov    %eax,%edx
 80dec1a:	c1 fa 1f             	sar    $0x1f,%edx
 80dec1d:	f7 bd 7c ff ff ff    	idivl  -0x84(%ebp)
 80dec23:	0f b6 c0             	movzbl %al,%eax
 80dec26:	8b 55 84             	mov    -0x7c(%ebp),%edx
 80dec29:	8b 8d 78 ff ff ff    	mov    -0x88(%ebp),%ecx
 80dec2f:	01 d1                	add    %edx,%ecx
 80dec31:	8b 55 80             	mov    -0x80(%ebp),%edx
 80dec34:	8b 9d 74 ff ff ff    	mov    -0x8c(%ebp),%ebx
 80dec3a:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 80dec3d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80dec41:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80dec45:	89 54 24 04          	mov    %edx,0x4(%esp)
 80dec49:	8b 45 20             	mov    0x20(%ebp),%eax
 80dec4c:	89 04 24             	mov    %eax,(%esp)
 80dec4f:	e8 e2 09 00 00       	call   80df636 <_ZN9GreyImage13setAlphaAsMaxEiih>
 80dec54:	83 45 84 01          	addl   $0x1,-0x7c(%ebp)
 80dec58:	8b 45 84             	mov    -0x7c(%ebp),%eax
 80dec5b:	3b 85 7c ff ff ff    	cmp    -0x84(%ebp),%eax
 80dec61:	0f 9e c0             	setle  %al
 80dec64:	84 c0                	test   %al,%al
 80dec66:	0f 85 5b ff ff ff    	jne    80debc7 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0xe9>
 80dec6c:	83 45 80 01          	addl   $0x1,-0x80(%ebp)
 80dec70:	8b 45 80             	mov    -0x80(%ebp),%eax
 80dec73:	3b 85 7c ff ff ff    	cmp    -0x84(%ebp),%eax
 80dec79:	0f 9e c0             	setle  %al
 80dec7c:	84 c0                	test   %al,%al
 80dec7e:	0f 85 33 ff ff ff    	jne    80debb7 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0xd9>
 80dec84:	83 85 70 ff ff ff 01 	addl   $0x1,-0x90(%ebp)
 80dec8b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dec8e:	8b 00                	mov    (%eax),%eax
 80dec90:	3b 85 70 ff ff ff    	cmp    -0x90(%ebp),%eax
 80dec96:	0f 9f c0             	setg   %al
 80dec99:	84 c0                	test   %al,%al
 80dec9b:	0f 85 8e fe ff ff    	jne    80deb2f <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x51>
 80deca1:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 80deca8:	e9 ca 00 00 00       	jmp    80ded77 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x299>
 80decad:	8b 45 08             	mov    0x8(%ebp),%eax
 80decb0:	83 c0 10             	add    $0x10,%eax
 80decb3:	89 04 24             	mov    %eax,(%esp)
 80decb6:	e8 81 0e a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80decbb:	89 c1                	mov    %eax,%ecx
 80decbd:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 80decc2:	89 c8                	mov    %ecx,%eax
 80decc4:	f7 e2                	mul    %edx
 80decc6:	c1 ea 03             	shr    $0x3,%edx
 80decc9:	89 d0                	mov    %edx,%eax
 80deccb:	c1 e0 02             	shl    $0x2,%eax
 80decce:	01 d0                	add    %edx,%eax
 80decd0:	01 c0                	add    %eax,%eax
 80decd2:	89 ca                	mov    %ecx,%edx
 80decd4:	29 c2                	sub    %eax,%edx
 80decd6:	8d 42 01             	lea    0x1(%edx),%eax
 80decd9:	89 45 90             	mov    %eax,-0x70(%ebp)
 80decdc:	8b 45 08             	mov    0x8(%ebp),%eax
 80decdf:	83 c0 10             	add    $0x10,%eax
 80dece2:	89 04 24             	mov    %eax,(%esp)
 80dece5:	e8 52 0e a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80decea:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80deced:	ba 00 00 00 00       	mov    $0x0,%edx
 80decf2:	f7 f1                	div    %ecx
 80decf4:	89 d0                	mov    %edx,%eax
 80decf6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 80decf9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80decfc:	8b 45 08             	mov    0x8(%ebp),%eax
 80decff:	83 c0 10             	add    $0x10,%eax
 80ded02:	89 04 24             	mov    %eax,(%esp)
 80ded05:	e8 32 0e a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80ded0a:	89 c1                	mov    %eax,%ecx
 80ded0c:	ba cd cc cc cc       	mov    $0xcccccccd,%edx
 80ded11:	89 c8                	mov    %ecx,%eax
 80ded13:	f7 e2                	mul    %edx
 80ded15:	c1 ea 03             	shr    $0x3,%edx
 80ded18:	89 d0                	mov    %edx,%eax
 80ded1a:	c1 e0 02             	shl    $0x2,%eax
 80ded1d:	01 d0                	add    %edx,%eax
 80ded1f:	01 c0                	add    %eax,%eax
 80ded21:	89 ca                	mov    %ecx,%edx
 80ded23:	29 c2                	sub    %eax,%edx
 80ded25:	89 d8                	mov    %ebx,%eax
 80ded27:	29 d0                	sub    %edx,%eax
 80ded29:	83 e8 02             	sub    $0x2,%eax
 80ded2c:	89 45 98             	mov    %eax,-0x68(%ebp)
 80ded2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80ded32:	83 c0 10             	add    $0x10,%eax
 80ded35:	89 04 24             	mov    %eax,(%esp)
 80ded38:	e8 ff 0d a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80ded3d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 80ded40:	ba 00 00 00 00       	mov    $0x0,%edx
 80ded45:	f7 f1                	div    %ecx
 80ded47:	89 d0                	mov    %edx,%eax
 80ded49:	89 45 9c             	mov    %eax,-0x64(%ebp)
 80ded4c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 80ded4f:	89 44 24 10          	mov    %eax,0x10(%esp)
 80ded53:	8b 45 98             	mov    -0x68(%ebp),%eax
 80ded56:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80ded5a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 80ded5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 80ded61:	8b 45 90             	mov    -0x70(%ebp),%eax
 80ded64:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ded68:	8b 45 20             	mov    0x20(%ebp),%eax
 80ded6b:	89 04 24             	mov    %eax,(%esp)
 80ded6e:	e8 a4 fc ff ff       	call   80dea17 <_ZL8drawLineP9GreyImageiiii>
 80ded73:	83 45 8c 01          	addl   $0x1,-0x74(%ebp)
 80ded77:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80ded7a:	8b 40 08             	mov    0x8(%eax),%eax
 80ded7d:	3b 45 8c             	cmp    -0x74(%ebp),%eax
 80ded80:	0f 9f c0             	setg   %al
 80ded83:	84 c0                	test   %al,%al
 80ded85:	0f 85 22 ff ff ff    	jne    80decad <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x1cf>
 80ded8b:	c7 85 60 ff ff ff 0a 	movl   $0xa,-0xa0(%ebp)
 80ded92:	00 00 00 
 80ded95:	c7 85 64 ff ff ff 02 	movl   $0x2,-0x9c(%ebp)
 80ded9c:	00 00 00 
 80ded9f:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 80deda6:	e9 cf 03 00 00       	jmp    80df17a <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x69c>
 80dedab:	8b 45 08             	mov    0x8(%ebp),%eax
 80dedae:	83 c0 10             	add    $0x10,%eax
 80dedb1:	89 04 24             	mov    %eax,(%esp)
 80dedb4:	e8 83 0d a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80dedb9:	89 c3                	mov    %eax,%ebx
 80dedbb:	8b 45 08             	mov    0x8(%ebp),%eax
 80dedbe:	83 c0 04             	add    $0x4,%eax
 80dedc1:	89 04 24             	mov    %eax,(%esp)
 80dedc4:	e8 a9 0a 00 00       	call   80df872 <_ZNKSt6vectorIPvSaIS0_EE4sizeEv>
 80dedc9:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 80dedcf:	89 d8                	mov    %ebx,%eax
 80dedd1:	ba 00 00 00 00       	mov    $0x0,%edx
 80dedd6:	f7 b5 04 ff ff ff    	divl   -0xfc(%ebp)
 80deddc:	89 d1                	mov    %edx,%ecx
 80dedde:	89 c8                	mov    %ecx,%eax
 80dede0:	8b 55 08             	mov    0x8(%ebp),%edx
 80dede3:	83 c2 04             	add    $0x4,%edx
 80dede6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dedea:	89 14 24             	mov    %edx,(%esp)
 80deded:	e8 9c 0a 00 00       	call   80df88e <_ZNSt6vectorIPvSaIS0_EEixEj>
 80dedf2:	8b 00                	mov    (%eax),%eax
 80dedf4:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 80dedf7:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dedfa:	8b 50 10             	mov    0x10(%eax),%edx
 80dedfd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee00:	8b 40 0c             	mov    0xc(%eax),%eax
 80dee03:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80dee06:	83 c1 10             	add    $0x10,%ecx
 80dee09:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dee0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dee11:	89 0c 24             	mov    %ecx,(%esp)
 80dee14:	e8 8b 14 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80dee19:	d9 5d a8             	fstps  -0x58(%ebp)
 80dee1c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee1f:	8b 50 10             	mov    0x10(%eax),%edx
 80dee22:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee25:	8b 40 0c             	mov    0xc(%eax),%eax
 80dee28:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80dee2b:	83 c1 10             	add    $0x10,%ecx
 80dee2e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dee32:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dee36:	89 0c 24             	mov    %ecx,(%esp)
 80dee39:	e8 66 14 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80dee3e:	d9 5d ac             	fstps  -0x54(%ebp)
 80dee41:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee44:	8b 50 18             	mov    0x18(%eax),%edx
 80dee47:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee4a:	8b 40 14             	mov    0x14(%eax),%eax
 80dee4d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80dee50:	83 c1 10             	add    $0x10,%ecx
 80dee53:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dee57:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dee5b:	89 0c 24             	mov    %ecx,(%esp)
 80dee5e:	e8 41 14 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80dee63:	d9 5d b0             	fstps  -0x50(%ebp)
 80dee66:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee69:	8b 50 18             	mov    0x18(%eax),%edx
 80dee6c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80dee6f:	8b 40 14             	mov    0x14(%eax),%eax
 80dee72:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80dee75:	83 c1 10             	add    $0x10,%ecx
 80dee78:	89 54 24 08          	mov    %edx,0x8(%esp)
 80dee7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80dee80:	89 0c 24             	mov    %ecx,(%esp)
 80dee83:	e8 1c 14 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80dee88:	d9 5d b4             	fstps  -0x4c(%ebp)
 80dee8b:	8b 45 08             	mov    0x8(%ebp),%eax
 80dee8e:	83 c0 10             	add    $0x10,%eax
 80dee91:	89 04 24             	mov    %eax,(%esp)
 80dee94:	e8 a3 0c a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80dee99:	83 e0 02             	and    $0x2,%eax
 80dee9c:	85 c0                	test   %eax,%eax
 80dee9e:	74 07                	je     80deea7 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x3c9>
 80deea0:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 80deea5:	eb 05                	jmp    80deeac <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x3ce>
 80deea7:	b8 00 00 80 bf       	mov    $0xbf800000,%eax
 80deeac:	89 45 b8             	mov    %eax,-0x48(%ebp)
 80deeaf:	8b 45 08             	mov    0x8(%ebp),%eax
 80deeb2:	83 c0 10             	add    $0x10,%eax
 80deeb5:	89 04 24             	mov    %eax,(%esp)
 80deeb8:	e8 7f 0c a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80deebd:	83 e0 02             	and    $0x2,%eax
 80deec0:	85 c0                	test   %eax,%eax
 80deec2:	74 07                	je     80deecb <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x3ed>
 80deec4:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 80deec9:	eb 05                	jmp    80deed0 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x3f2>
 80deecb:	b8 00 00 80 bf       	mov    $0xbf800000,%eax
 80deed0:	89 45 bc             	mov    %eax,-0x44(%ebp)
 80deed3:	d9 45 a8             	flds   -0x58(%ebp)
 80deed6:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80deedc:	de c9                	fmulp  %st,%st(1)
 80deede:	d9 bd 16 ff ff ff    	fnstcw -0xea(%ebp)
 80deee4:	0f b7 85 16 ff ff ff 	movzwl -0xea(%ebp),%eax
 80deeeb:	b4 0c                	mov    $0xc,%ah
 80deeed:	66 89 85 14 ff ff ff 	mov    %ax,-0xec(%ebp)
 80deef4:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80deefa:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80def00:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80def06:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80def0c:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 80def12:	d9 45 b0             	flds   -0x50(%ebp)
 80def15:	d8 4d b8             	fmuls  -0x48(%ebp)
 80def18:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80def1e:	de c9                	fmulp  %st,%st(1)
 80def20:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80def26:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80def2c:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80def32:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80def38:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 80def3e:	d9 45 b4             	flds   -0x4c(%ebp)
 80def41:	d8 4d bc             	fmuls  -0x44(%ebp)
 80def44:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80def4a:	de c9                	fmulp  %st,%st(1)
 80def4c:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80def52:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80def58:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80def5e:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80def64:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 80def6a:	d9 45 ac             	flds   -0x54(%ebp)
 80def6d:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80def73:	de c9                	fmulp  %st,%st(1)
 80def75:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80def7b:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80def81:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80def87:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80def8d:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 80def93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80def9a:	00 
 80def9b:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 80defa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80defa5:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80defa8:	89 04 24             	mov    %eax,(%esp)
 80defab:	e8 10 e7 6d 00       	call   87bd6c0 <FT_Set_Transform>
 80defb0:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80defb3:	01 c0                	add    %eax,%eax
 80defb5:	03 45 14             	add    0x14(%ebp),%eax
 80defb8:	0f b7 00             	movzwl (%eax),%eax
 80defbb:	0f b7 c0             	movzwl %ax,%eax
 80defbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 80defc2:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80defc5:	89 04 24             	mov    %eax,(%esp)
 80defc8:	e8 a3 ee 6d 00       	call   87bde70 <FT_Get_Char_Index>
 80defcd:	89 45 c0             	mov    %eax,-0x40(%ebp)
 80defd0:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80defd3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80defda:	00 
 80defdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80defdf:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80defe2:	89 04 24             	mov    %eax,(%esp)
 80defe5:	e8 36 40 6e 00       	call   87c3020 <FT_Load_Glyph>
 80defea:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 80deff0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80deff3:	8b 40 54             	mov    0x54(%eax),%eax
 80deff6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80deffd:	00 
 80deffe:	89 04 24             	mov    %eax,(%esp)
 80df001:	e8 4a f9 6d 00       	call   87be950 <FT_Render_Glyph>
 80df006:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 80df00c:	8b 45 08             	mov    0x8(%ebp),%eax
 80df00f:	83 c0 10             	add    $0x10,%eax
 80df012:	89 04 24             	mov    %eax,(%esp)
 80df015:	e8 22 0b a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80df01a:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80df01d:	8b 52 1c             	mov    0x1c(%edx),%edx
 80df020:	89 d1                	mov    %edx,%ecx
 80df022:	ba 00 00 00 00       	mov    $0x0,%edx
 80df027:	f7 f1                	div    %ecx
 80df029:	89 d0                	mov    %edx,%eax
 80df02b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80df02e:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 80df031:	8b 40 54             	mov    0x54(%eax),%eax
 80df034:	83 c0 4c             	add    $0x4c,%eax
 80df037:	89 45 c8             	mov    %eax,-0x38(%ebp)
 80df03a:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 80df041:	e9 cf 00 00 00       	jmp    80df115 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x637>
 80df046:	8b 45 cc             	mov    -0x34(%ebp),%eax
 80df049:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 80df04f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df052:	03 45 c4             	add    -0x3c(%ebp),%eax
 80df055:	89 45 d0             	mov    %eax,-0x30(%ebp)
 80df058:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 80df05c:	0f 88 ab 00 00 00    	js     80df10d <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x62f>
 80df062:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80df065:	3b 45 10             	cmp    0x10(%ebp),%eax
 80df068:	0f 8d a2 00 00 00    	jge    80df110 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x632>
 80df06e:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 80df074:	8b 55 0c             	mov    0xc(%ebp),%edx
 80df077:	89 d1                	mov    %edx,%ecx
 80df079:	29 c1                	sub    %eax,%ecx
 80df07b:	89 c8                	mov    %ecx,%eax
 80df07d:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 80df083:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80df086:	8d 50 04             	lea    0x4(%eax),%edx
 80df089:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 80df08f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df093:	89 14 24             	mov    %edx,(%esp)
 80df096:	e8 73 08 00 00       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 80df09b:	8b 00                	mov    (%eax),%eax
 80df09d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 80df0a0:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80df0a7:	eb 55                	jmp    80df0fe <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x620>
 80df0a9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80df0ac:	8b 50 0c             	mov    0xc(%eax),%edx
 80df0af:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80df0b2:	8b 40 08             	mov    0x8(%eax),%eax
 80df0b5:	0f af 45 cc          	imul   -0x34(%ebp),%eax
 80df0b9:	03 45 d8             	add    -0x28(%ebp),%eax
 80df0bc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80df0bf:	0f b6 00             	movzbl (%eax),%eax
 80df0c2:	0f b6 c0             	movzbl %al,%eax
 80df0c5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80df0c8:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 80df0cc:	74 2c                	je     80df0fa <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x61c>
 80df0ce:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80df0d1:	0f b6 c0             	movzbl %al,%eax
 80df0d4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 80df0d7:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 80df0dd:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80df0e0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80df0e4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 80df0e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df0eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80df0ef:	8b 45 20             	mov    0x20(%ebp),%eax
 80df0f2:	89 04 24             	mov    %eax,(%esp)
 80df0f5:	e8 3c 05 00 00       	call   80df636 <_ZN9GreyImage13setAlphaAsMaxEiih>
 80df0fa:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 80df0fe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80df101:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 80df104:	0f 9c c0             	setl   %al
 80df107:	84 c0                	test   %al,%al
 80df109:	75 9e                	jne    80df0a9 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x5cb>
 80df10b:	eb 04                	jmp    80df111 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x633>
 80df10d:	90                   	nop
 80df10e:	eb 01                	jmp    80df111 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x633>
 80df110:	90                   	nop
 80df111:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 80df115:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80df118:	8b 00                	mov    (%eax),%eax
 80df11a:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 80df11d:	0f 9f c0             	setg   %al
 80df120:	84 c0                	test   %al,%al
 80df122:	0f 85 1e ff ff ff    	jne    80df046 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x568>
 80df128:	8b 45 c8             	mov    -0x38(%ebp),%eax
 80df12b:	8b 40 04             	mov    0x4(%eax),%eax
 80df12e:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 80df134:	db 85 10 ff ff ff    	fildl  -0xf0(%ebp)
 80df13a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80df13d:	d9 40 20             	flds   0x20(%eax)
 80df140:	de c9                	fmulp  %st,%st(1)
 80df142:	d9 bd 16 ff ff ff    	fnstcw -0xea(%ebp)
 80df148:	0f b7 85 16 ff ff ff 	movzwl -0xea(%ebp),%eax
 80df14f:	b4 0c                	mov    $0xc,%ah
 80df151:	66 89 85 14 ff ff ff 	mov    %ax,-0xec(%ebp)
 80df158:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80df15e:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80df164:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80df16a:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80df170:	01 85 60 ff ff ff    	add    %eax,-0xa0(%ebp)
 80df176:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
 80df17a:	8b 45 a0             	mov    -0x60(%ebp),%eax
 80df17d:	3b 45 18             	cmp    0x18(%ebp),%eax
 80df180:	0f 9c c0             	setl   %al
 80df183:	84 c0                	test   %al,%al
 80df185:	0f 85 20 fc ff ff    	jne    80dedab <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x2cd>
 80df18b:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df191:	89 04 24             	mov    %eax,(%esp)
 80df194:	e8 4f 03 00 00       	call   80df4e8 <_ZN9GreyImageC1Ev>
 80df199:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80df1a0:	00 
 80df1a1:	8b 45 10             	mov    0x10(%ebp),%eax
 80df1a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df1a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df1ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df1af:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df1b5:	89 04 24             	mov    %eax,(%esp)
 80df1b8:	e8 61 03 00 00       	call   80df51e <_ZN9GreyImage4initEiih>
 80df1bd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80df1c0:	8b 50 28             	mov    0x28(%eax),%edx
 80df1c3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80df1c6:	8b 40 24             	mov    0x24(%eax),%eax
 80df1c9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80df1cc:	83 c1 10             	add    $0x10,%ecx
 80df1cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 80df1d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df1d7:	89 0c 24             	mov    %ecx,(%esp)
 80df1da:	e8 c5 10 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80df1df:	d9 9d 68 ff ff ff    	fstps  -0x98(%ebp)
 80df1e5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80df1e8:	8b 50 30             	mov    0x30(%eax),%edx
 80df1eb:	8b 45 1c             	mov    0x1c(%ebp),%eax
 80df1ee:	8b 40 2c             	mov    0x2c(%eax),%eax
 80df1f1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 80df1f4:	83 c1 10             	add    $0x10,%ecx
 80df1f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80df1fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df1ff:	89 0c 24             	mov    %ecx,(%esp)
 80df202:	e8 9d 10 a0 00       	call   8ae02a4 <_ZN7RandGen8getFloatEP8XorRand4ff>
 80df207:	d9 9d 6c ff ff ff    	fstps  -0x94(%ebp)
 80df20d:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df213:	89 04 24             	mov    %eax,(%esp)
 80df216:	e8 91 ef fa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80df21b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df21e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80df225:	00 
 80df226:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df22a:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df230:	89 04 24             	mov    %eax,(%esp)
 80df233:	e8 f2 06 00 00       	call   80df92a <_ZNSt6vectorIiSaIiEE6resizeEji>
 80df238:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80df23f:	eb 6a                	jmp    80df2ab <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x7cd>
 80df241:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80df244:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df248:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df24e:	89 04 24             	mov    %eax,(%esp)
 80df251:	e8 86 ef fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80df256:	89 c3                	mov    %eax,%ebx
 80df258:	db 45 e0             	fildl  -0x20(%ebp)
 80df25b:	d8 8d 68 ff ff ff    	fmuls  -0x98(%ebp)
 80df261:	d9 1c 24             	fstps  (%esp)
 80df264:	e8 b7 e6 f9 ff       	call   807d920 <cosf@plt>
 80df269:	d8 8d 6c ff ff ff    	fmuls  -0x94(%ebp)
 80df26f:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80df275:	de c9                	fmulp  %st,%st(1)
 80df277:	d9 bd 16 ff ff ff    	fnstcw -0xea(%ebp)
 80df27d:	0f b7 85 16 ff ff ff 	movzwl -0xea(%ebp),%eax
 80df284:	b4 0c                	mov    $0xc,%ah
 80df286:	66 89 85 14 ff ff ff 	mov    %ax,-0xec(%ebp)
 80df28d:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80df293:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80df299:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80df29f:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80df2a5:	89 03                	mov    %eax,(%ebx)
 80df2a7:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 80df2ab:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80df2ae:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80df2b1:	0f 9c c0             	setl   %al
 80df2b4:	84 c0                	test   %al,%al
 80df2b6:	75 89                	jne    80df241 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x763>
 80df2b8:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df2be:	89 04 24             	mov    %eax,(%esp)
 80df2c1:	e8 e6 ee fa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80df2c6:	8b 45 10             	mov    0x10(%ebp),%eax
 80df2c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80df2d0:	00 
 80df2d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df2d5:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df2db:	89 04 24             	mov    %eax,(%esp)
 80df2de:	e8 47 06 00 00       	call   80df92a <_ZNSt6vectorIiSaIiEE6resizeEji>
 80df2e3:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80df2ea:	eb 6a                	jmp    80df356 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x878>
 80df2ec:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80df2ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df2f3:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df2f9:	89 04 24             	mov    %eax,(%esp)
 80df2fc:	e8 db ee fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80df301:	89 c3                	mov    %eax,%ebx
 80df303:	db 45 e4             	fildl  -0x1c(%ebp)
 80df306:	d8 8d 68 ff ff ff    	fmuls  -0x98(%ebp)
 80df30c:	d9 1c 24             	fstps  (%esp)
 80df30f:	e8 4c ec f9 ff       	call   807df60 <sinf@plt>
 80df314:	d8 8d 6c ff ff ff    	fmuls  -0x94(%ebp)
 80df31a:	d9 05 b0 ca b2 08    	flds   0x8b2cab0
 80df320:	de c9                	fmulp  %st,%st(1)
 80df322:	d9 bd 16 ff ff ff    	fnstcw -0xea(%ebp)
 80df328:	0f b7 85 16 ff ff ff 	movzwl -0xea(%ebp),%eax
 80df32f:	b4 0c                	mov    $0xc,%ah
 80df331:	66 89 85 14 ff ff ff 	mov    %ax,-0xec(%ebp)
 80df338:	d9 ad 14 ff ff ff    	fldcw  -0xec(%ebp)
 80df33e:	db 9d 10 ff ff ff    	fistpl -0xf0(%ebp)
 80df344:	d9 ad 16 ff ff ff    	fldcw  -0xea(%ebp)
 80df34a:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 80df350:	89 03                	mov    %eax,(%ebx)
 80df352:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80df356:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80df359:	3b 45 10             	cmp    0x10(%ebp),%eax
 80df35c:	0f 9c c0             	setl   %al
 80df35f:	84 c0                	test   %al,%al
 80df361:	75 89                	jne    80df2ec <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x80e>
 80df363:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80df36a:	e9 ab 00 00 00       	jmp    80df41a <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x93c>
 80df36f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80df376:	e9 8a 00 00 00       	jmp    80df405 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x927>
 80df37b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80df37e:	89 c3                	mov    %eax,%ebx
 80df380:	c1 e3 10             	shl    $0x10,%ebx
 80df383:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df386:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df38a:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df390:	89 04 24             	mov    %eax,(%esp)
 80df393:	e8 44 ee fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80df398:	8b 00                	mov    (%eax),%eax
 80df39a:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80df39d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80df3a0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df3a3:	89 c3                	mov    %eax,%ebx
 80df3a5:	c1 e3 10             	shl    $0x10,%ebx
 80df3a8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80df3ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df3af:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df3b5:	89 04 24             	mov    %eax,(%esp)
 80df3b8:	e8 1f ee fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80df3bd:	8b 00                	mov    (%eax),%eax
 80df3bf:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 80df3c2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80df3c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80df3c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df3cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80df3cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df3d3:	8b 45 20             	mov    0x20(%ebp),%eax
 80df3d6:	89 04 24             	mov    %eax,(%esp)
 80df3d9:	e8 98 02 00 00       	call   80df676 <_ZN9GreyImage11sampleAlphaEii>
 80df3de:	0f b6 c0             	movzbl %al,%eax
 80df3e1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80df3e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df3e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 80df3ec:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80df3ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 80df3f3:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df3f9:	89 04 24             	mov    %eax,(%esp)
 80df3fc:	e8 0d 02 00 00       	call   80df60e <_ZN9GreyImage8setAlphaEiih>
 80df401:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80df405:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80df408:	3b 45 10             	cmp    0x10(%ebp),%eax
 80df40b:	0f 9c c0             	setl   %al
 80df40e:	84 c0                	test   %al,%al
 80df410:	0f 85 65 ff ff ff    	jne    80df37b <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x89d>
 80df416:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80df41a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80df41d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80df420:	0f 9c c0             	setl   %al
 80df423:	84 c0                	test   %al,%al
 80df425:	0f 85 44 ff ff ff    	jne    80df36f <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x891>
 80df42b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80df42e:	0f af 45 10          	imul   0x10(%ebp),%eax
 80df432:	89 c6                	mov    %eax,%esi
 80df434:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df43a:	89 04 24             	mov    %eax,(%esp)
 80df43d:	e8 a2 01 00 00       	call   80df5e4 <_ZN9GreyImage8getImageEv>
 80df442:	89 c3                	mov    %eax,%ebx
 80df444:	8b 45 20             	mov    0x20(%ebp),%eax
 80df447:	89 04 24             	mov    %eax,(%esp)
 80df44a:	e8 95 01 00 00       	call   80df5e4 <_ZN9GreyImage8getImageEv>
 80df44f:	89 74 24 08          	mov    %esi,0x8(%esp)
 80df453:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80df457:	89 04 24             	mov    %eax,(%esp)
 80df45a:	e8 41 e4 f9 ff       	call   807d8a0 <memcpy@plt>
 80df45f:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df465:	89 04 24             	mov    %eax,(%esp)
 80df468:	e8 6d 49 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80df46d:	eb 30                	jmp    80df49f <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x9c1>
 80df46f:	89 d3                	mov    %edx,%ebx
 80df471:	89 c6                	mov    %eax,%esi
 80df473:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 80df479:	89 04 24             	mov    %eax,(%esp)
 80df47c:	e8 59 49 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80df481:	89 f0                	mov    %esi,%eax
 80df483:	89 da                	mov    %ebx,%edx
 80df485:	eb 00                	jmp    80df487 <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x9a9>
 80df487:	89 d3                	mov    %edx,%ebx
 80df489:	89 c6                	mov    %eax,%esi
 80df48b:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df491:	89 04 24             	mov    %eax,(%esp)
 80df494:	e8 41 49 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80df499:	89 f0                	mov    %esi,%eax
 80df49b:	89 da                	mov    %ebx,%edx
 80df49d:	eb 10                	jmp    80df4af <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x9d1>
 80df49f:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 80df4a5:	89 04 24             	mov    %eax,(%esp)
 80df4a8:	e8 2d 49 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80df4ad:	eb 1e                	jmp    80df4cd <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0x9ef>
 80df4af:	89 d3                	mov    %edx,%ebx
 80df4b1:	89 c6                	mov    %eax,%esi
 80df4b3:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df4b9:	89 04 24             	mov    %eax,(%esp)
 80df4bc:	e8 49 00 00 00       	call   80df50a <_ZN9GreyImageD1Ev>
 80df4c1:	89 f0                	mov    %esi,%eax
 80df4c3:	89 da                	mov    %ebx,%edx
 80df4c5:	89 04 24             	mov    %eax,(%esp)
 80df4c8:	e8 83 42 a0 00       	call   8ae3750 <_Unwind_Resume>
 80df4cd:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 80df4d3:	89 04 24             	mov    %eax,(%esp)
 80df4d6:	e8 2f 00 00 00       	call   80df50a <_ZN9GreyImageD1Ev>
 80df4db:	eb 01                	jmp    80df4de <_ZN10CaptchaGen13generateImageEiiPKtiRKNS_11ImageOptionEP9GreyImage+0xa00>
 80df4dd:	90                   	nop
 80df4de:	81 c4 20 01 00 00    	add    $0x120,%esp
 80df4e4:	5b                   	pop    %ebx
 80df4e5:	5e                   	pop    %esi
 80df4e6:	5d                   	pop    %ebp
 80df4e7:	c3                   	ret

```

```c
// CaptchaGen::generateImage @ 0x80deade

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::generateImage(int, int, unsigned short const*, int, CaptchaGen::ImageOption const&,
   GreyImage*) */

void __thiscall
CaptchaGen::generateImage
          (CaptchaGen *this,int param_1,int param_2,ushort *param_3,int param_4,ImageOption *param_5
          ,GreyImage *param_6)

{
  char cVar1;
  uchar uVar2;
  uint32 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  void *__src;
  void *__dest;
  int iVar7;
  float fVar8;
  FT_Matrix local_e0;
  vector<int,std::allocator<int>> local_d0 [12];
  vector<int,std::allocator<int>> local_c4 [12];
  GreyImage local_b8 [12];
  int local_ac;
  FT_Error local_a8;
  int local_a4;
  int local_a0;
  float32 local_9c;
  float32 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  FT_Face_conflict local_60;
  float32 local_5c;
  float32 local_58;
  float32 local_54;
  float32 local_50;
  float local_4c;
  float local_48;
  FT_UInt local_44;
  uint local_40;
  FT_Bitmap *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  cVar1 = std::vector<void*,std::allocator<void*>>::empty();
  if (cVar1 == '\0') {
    GreyImage::init(param_6,param_1,param_2,'\0');
    for (local_94 = 0; local_94 < *(int *)param_5; local_94 = local_94 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_90 = uVar3 % (param_1 - 10U) + 5;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_8c = uVar3 % (param_2 - 10U) + 5;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_88 = uVar3 % *(uint *)(param_5 + 4) + 1;
      for (local_84 = -local_88; local_84 <= local_88; local_84 = local_84 + 1) {
        for (local_80 = -local_88; local_80 <= local_88; local_80 = local_80 + 1) {
          local_7c = ((local_84 * local_84 + local_80 * local_80) * 0xff) / (local_88 * local_88);
          if (local_7c < 0xff) {
            GreyImage::setAlphaAsMax
                      (param_6,local_90 + local_84,local_8c + local_80,
                       (uchar)((0xff - local_7c) / local_88));
          }
        }
      }
    }
    for (local_78 = 0; local_78 < *(int *)(param_5 + 8); local_78 = local_78 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_74 = uVar3 % 10 + 1;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_70 = uVar3 % (uint)param_2;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_6c = (param_1 - uVar3 % 10) + -2;
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_68 = uVar3 % (uint)param_2;
      drawLine(param_6,local_74,local_70,local_6c,local_68);
    }
    local_a4 = 10;
    local_a0 = 2;
    for (local_64 = 0; local_64 < param_4; local_64 = local_64 + 1) {
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      uVar4 = std::vector<void*,std::allocator<void*>>::size
                        ((vector<void*,std::allocator<void*>> *)(this + 4));
      puVar5 = (undefined4 *)
               std::vector<void*,std::allocator<void*>>::operator[]
                         ((vector<void*,std::allocator<void*>> *)(this + 4),uVar3 % uVar4);
      local_60 = (FT_Face_conflict)*puVar5;
      local_5c = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0xc),
                                   *(float32 *)(param_5 + 0x10));
      local_58 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0xc),
                                   *(float32 *)(param_5 + 0x10));
      local_54 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x14),
                                   *(float32 *)(param_5 + 0x18));
      local_50 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x14),
                                   *(float32 *)(param_5 + 0x18));
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      if ((uVar3 & 2) == 0) {
        local_4c = -1.0;
      }
      else {
        local_4c = 1.0;
      }
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      if ((uVar3 & 2) == 0) {
        local_48 = -1.0;
      }
      else {
        local_48 = 1.0;
      }
      local_e0.xx = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_5c);
      local_e0.xy = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_54 * local_4c);
      local_e0.yx = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_50 * local_48);
      local_e0.yy = (FT_Fixed)ROUND(_DAT_08b2cab0 * (float)local_58);
      FT_Set_Transform(local_60,&local_e0,(FT_Vector *)0x0);
      local_44 = FT_Get_Char_Index(local_60,(uint)param_3[local_64]);
      local_a8 = FT_Load_Glyph(local_60,local_44,0);
      local_a8 = FT_Render_Glyph(local_60->glyph,FT_RENDER_MODE_NORMAL);
      uVar3 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      local_40 = uVar3 % *(uint *)(param_5 + 0x1c);
      local_3c = &local_60->glyph->bitmap;
      for (local_38 = 0; local_38 < local_3c->rows; local_38 = local_38 + 1) {
        local_34 = local_a0 + local_38 + local_40;
        if ((-1 < local_34) && (local_34 < param_2)) {
          local_ac = param_1 - local_a4;
          piVar6 = std::min<int>(&local_3c->width,&local_ac);
          local_30 = *piVar6;
          for (local_2c = 0; local_2c < local_30; local_2c = local_2c + 1) {
            local_28 = (uint)local_3c->buffer[local_3c->pitch * local_38 + local_2c];
            if (local_28 != 0) {
              GreyImage::setAlphaAsMax
                        (param_6,local_a4 + local_2c,local_34,
                         local_3c->buffer[local_3c->pitch * local_38 + local_2c]);
            }
          }
        }
      }
      local_a4 = local_a4 + (int)ROUND(*(float *)(param_5 + 0x20) * (float)local_3c->width);
    }
    GreyImage::GreyImage(local_b8);
                    /* try { // try from 080df1b8 to 080df21a has its CatchHandler @ 080df4af */
    GreyImage::init(local_b8,param_1,param_2,'\0');
    local_9c = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x24),
                                 *(float32 *)(param_5 + 0x28));
    local_98 = RandGen::getFloat((XorRand4 *)(this + 0x10),*(float32 *)(param_5 + 0x2c),
                                 *(float32 *)(param_5 + 0x30));
    std::vector<int,std::allocator<int>>::vector(local_c4);
                    /* try { // try from 080df233 to 080df2c5 has its CatchHandler @ 080df487 */
    std::vector<int,std::allocator<int>>::resize((uint)local_c4,param_1);
    for (local_24 = 0; (int)local_24 < param_1; local_24 = local_24 + 1) {
      piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c4,local_24);
      fVar8 = cosf((float)(int)local_24 * (float)local_9c);
      *piVar6 = (int)ROUND(_DAT_08b2cab0 * fVar8 * (float)local_98);
    }
    std::vector<int,std::allocator<int>>::vector(local_d0);
                    /* try { // try from 080df2de to 080df2e2 has its CatchHandler @ 080df46f */
    std::vector<int,std::allocator<int>>::resize((uint)local_d0,param_2);
    for (local_20 = 0; (int)local_20 < param_2; local_20 = local_20 + 1) {
      piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_d0,local_20);
      fVar8 = sinf((float)(int)local_20 * (float)local_9c);
      *piVar6 = (int)ROUND(_DAT_08b2cab0 * fVar8 * (float)local_98);
    }
    for (local_1c = 0; (int)local_1c < param_1; local_1c = local_1c + 1) {
      for (local_18 = 0; (int)local_18 < param_2; local_18 = local_18 + 1) {
        iVar7 = local_1c * 0x10000;
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_d0,local_18);
        local_14 = iVar7 + *piVar6;
        iVar7 = local_18 * 0x10000;
        piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[](local_c4,local_1c);
        local_10 = iVar7 + *piVar6;
        uVar2 = GreyImage::sampleAlpha(param_6,local_14,local_10);
        GreyImage::setAlpha(local_b8,local_1c,local_18,uVar2);
      }
    }
    __src = (void *)GreyImage::getImage(local_b8);
    __dest = (void *)GreyImage::getImage(param_6);
    memcpy(__dest,__src,param_1 * param_2);
                    /* try { // try from 080df468 to 080df46c has its CatchHandler @ 080df487 */
    std::vector<int,std::allocator<int>>::~vector(local_d0);
                    /* try { // try from 080df4a8 to 080df4ac has its CatchHandler @ 080df4af */
    std::vector<int,std::allocator<int>>::~vector(local_c4);
    GreyImage::~GreyImage(local_b8);
  }
  return;
}

```

---

## generateText

```asm
// === 080de83c CaptchaGen::generateText  [0x080de83c-0x80de987] ===
 80de83c:	55                   	push   %ebp
 80de83d:	89 e5                	mov    %esp,%ebp
 80de83f:	53                   	push   %ebx
 80de840:	83 ec 24             	sub    $0x24,%esp
 80de843:	0f b6 05 22 1a 50 09 	movzbl 0x9501a22,%eax
 80de84a:	88 44 24 04          	mov    %al,0x4(%esp)
 80de84e:	8d 45 0c             	lea    0xc(%ebp),%eax
 80de851:	89 04 24             	mov    %eax,(%esp)
 80de854:	e8 d5 4a 9f 00       	call   8ad332e <_ZNK11CountryCodeeqES_>
 80de859:	84 c0                	test   %al,%al
 80de85b:	74 53                	je     80de8b0 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x74>
 80de85d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80de864:	eb 38                	jmp    80de89e <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x62>
 80de866:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80de869:	01 c0                	add    %eax,%eax
 80de86b:	89 c3                	mov    %eax,%ebx
 80de86d:	03 5d 14             	add    0x14(%ebp),%ebx
 80de870:	8b 45 08             	mov    0x8(%ebp),%eax
 80de873:	83 c0 10             	add    $0x10,%eax
 80de876:	89 04 24             	mov    %eax,(%esp)
 80de879:	e8 be 12 a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80de87e:	8b 15 44 c4 b2 08    	mov    0x8b2c444,%edx
 80de884:	89 d1                	mov    %edx,%ecx
 80de886:	ba 00 00 00 00       	mov    $0x0,%edx
 80de88b:	f7 f1                	div    %ecx
 80de88d:	89 d0                	mov    %edx,%eax
 80de88f:	0f b7 84 00 a0 bc b2 	movzwl 0x8b2bca0(%eax,%eax,1),%eax
 80de896:	08 
 80de897:	66 89 03             	mov    %ax,(%ebx)
 80de89a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80de89e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80de8a1:	3b 45 10             	cmp    0x10(%ebp),%eax
 80de8a4:	0f 9c c0             	setl   %al
 80de8a7:	84 c0                	test   %al,%al
 80de8a9:	75 bb                	jne    80de866 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x2a>
 80de8ab:	e9 d2 00 00 00       	jmp    80de982 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x146>
 80de8b0:	0f b6 05 23 1a 50 09 	movzbl 0x9501a23,%eax
 80de8b7:	88 44 24 04          	mov    %al,0x4(%esp)
 80de8bb:	8d 45 0c             	lea    0xc(%ebp),%eax
 80de8be:	89 04 24             	mov    %eax,(%esp)
 80de8c1:	e8 68 4a 9f 00       	call   8ad332e <_ZNK11CountryCodeeqES_>
 80de8c6:	84 c0                	test   %al,%al
 80de8c8:	74 50                	je     80de91a <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0xde>
 80de8ca:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80de8d1:	eb 38                	jmp    80de90b <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0xcf>
 80de8d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80de8d6:	01 c0                	add    %eax,%eax
 80de8d8:	89 c3                	mov    %eax,%ebx
 80de8da:	03 5d 14             	add    0x14(%ebp),%ebx
 80de8dd:	8b 45 08             	mov    0x8(%ebp),%eax
 80de8e0:	83 c0 10             	add    $0x10,%eax
 80de8e3:	89 04 24             	mov    %eax,(%esp)
 80de8e6:	e8 51 12 a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80de8eb:	8b 15 f0 c4 b2 08    	mov    0x8b2c4f0,%edx
 80de8f1:	89 d1                	mov    %edx,%ecx
 80de8f3:	ba 00 00 00 00       	mov    $0x0,%edx
 80de8f8:	f7 f1                	div    %ecx
 80de8fa:	89 d0                	mov    %edx,%eax
 80de8fc:	0f b7 84 00 60 c4 b2 	movzwl 0x8b2c460(%eax,%eax,1),%eax
 80de903:	08 
 80de904:	66 89 03             	mov    %ax,(%ebx)
 80de907:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80de90b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80de90e:	3b 45 10             	cmp    0x10(%ebp),%eax
 80de911:	0f 9c c0             	setl   %al
 80de914:	84 c0                	test   %al,%al
 80de916:	75 bb                	jne    80de8d3 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x97>
 80de918:	eb 68                	jmp    80de982 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x146>
 80de91a:	0f b6 05 25 1a 50 09 	movzbl 0x9501a25,%eax
 80de921:	88 44 24 04          	mov    %al,0x4(%esp)
 80de925:	8d 45 0c             	lea    0xc(%ebp),%eax
 80de928:	89 04 24             	mov    %eax,(%esp)
 80de92b:	e8 fe 49 9f 00       	call   8ad332e <_ZNK11CountryCodeeqES_>
 80de930:	84 c0                	test   %al,%al
 80de932:	74 4e                	je     80de982 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x146>
 80de934:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80de93b:	eb 38                	jmp    80de975 <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x139>
 80de93d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80de940:	01 c0                	add    %eax,%eax
 80de942:	89 c3                	mov    %eax,%ebx
 80de944:	03 5d 14             	add    0x14(%ebp),%ebx
 80de947:	8b 45 08             	mov    0x8(%ebp),%eax
 80de94a:	83 c0 10             	add    $0x10,%eax
 80de94d:	89 04 24             	mov    %eax,(%esp)
 80de950:	e8 e7 11 a0 00       	call   8adfb3c <_ZN8XorRand4clEv>
 80de955:	8b 15 34 c5 b2 08    	mov    0x8b2c534,%edx
 80de95b:	89 d1                	mov    %edx,%ecx
 80de95d:	ba 00 00 00 00       	mov    $0x0,%edx
 80de962:	f7 f1                	div    %ecx
 80de964:	89 d0                	mov    %edx,%eax
 80de966:	0f b7 84 00 00 c5 b2 	movzwl 0x8b2c500(%eax,%eax,1),%eax
 80de96d:	08 
 80de96e:	66 89 03             	mov    %ax,(%ebx)
 80de971:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80de975:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80de978:	3b 45 10             	cmp    0x10(%ebp),%eax
 80de97b:	0f 9c c0             	setl   %al
 80de97e:	84 c0                	test   %al,%al
 80de980:	75 bb                	jne    80de93d <_ZN10CaptchaGen12generateTextE11CountryCodeiPt+0x101>
 80de982:	83 c4 24             	add    $0x24,%esp
 80de985:	5b                   	pop    %ebx
 80de986:	5d                   	pop    %ebp
 80de987:	c3                   	ret

```

```c
// CaptchaGen::generateText @ 0x80de83c

/* CaptchaGen::generateText(CountryCode, int, unsigned short*) */

void __thiscall
CaptchaGen::generateText(CaptchaGen *this,CountryCode *param_1,int param_2,ushort *param_3)

{
  bool bVar1;
  uint32 uVar2;
  ushort *puVar3;
  int local_18;
  int local_14;
  int local_10;
  
  bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::korea);
  if (bVar1) {
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      puVar3 = param_3 + local_18;
      uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
      *puVar3 = *(ushort *)(kKoreanGeneral + (uVar2 % kKoreanGeneralCount) * 2);
    }
  }
  else {
    bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::japan);
    if (bVar1) {
      for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
        puVar3 = param_3 + local_14;
        uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
        *puVar3 = *(ushort *)(kJapaneseHirakana + (uVar2 % kJapaneseHirakanaCount) * 2);
      }
    }
    else {
      bVar1 = CountryCode::operator==((CountryCode *)&param_1,CountryCode::taiwan);
      if (bVar1) {
        for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
          puVar3 = param_3 + local_10;
          uVar2 = XorRand4::operator()((XorRand4 *)(this + 0x10));
          *puVar3 = *(ushort *)(kTaiwanAlphabet + (uVar2 % kTaiwanAlphabetCount) * 2);
        }
      }
    }
  }
  return;
}

```

---

## ~CaptchaGen

```asm
// === 080de706 CaptchaGen::~CaptchaGen  [0x080de706-0x80de793] ===
 80de706:	55                   	push   %ebp
 80de707:	89 e5                	mov    %esp,%ebp
 80de709:	56                   	push   %esi
 80de70a:	53                   	push   %ebx
 80de70b:	83 ec 20             	sub    $0x20,%esp
 80de70e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80de715:	eb 23                	jmp    80de73a <_ZN10CaptchaGenD1Ev+0x34>
 80de717:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80de71a:	8b 55 08             	mov    0x8(%ebp),%edx
 80de71d:	83 c2 04             	add    $0x4,%edx
 80de720:	89 44 24 04          	mov    %eax,0x4(%esp)
 80de724:	89 14 24             	mov    %edx,(%esp)
 80de727:	e8 62 11 00 00       	call   80df88e <_ZNSt6vectorIPvSaIS0_EEixEj>
 80de72c:	8b 00                	mov    (%eax),%eax
 80de72e:	89 04 24             	mov    %eax,(%esp)
 80de731:	e8 7a 2d 6e 00       	call   87c14b0 <FT_Done_Face>
 80de736:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80de73a:	8b 45 08             	mov    0x8(%ebp),%eax
 80de73d:	83 c0 04             	add    $0x4,%eax
 80de740:	89 04 24             	mov    %eax,(%esp)
 80de743:	e8 2a 11 00 00       	call   80df872 <_ZNKSt6vectorIPvSaIS0_EE4sizeEv>
 80de748:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80de74b:	0f 9f c0             	setg   %al
 80de74e:	84 c0                	test   %al,%al
 80de750:	75 c5                	jne    80de717 <_ZN10CaptchaGenD1Ev+0x11>
 80de752:	8b 45 08             	mov    0x8(%ebp),%eax
 80de755:	8b 00                	mov    (%eax),%eax
 80de757:	89 04 24             	mov    %eax,(%esp)
 80de75a:	e8 f1 e2 6d 00       	call   87bca50 <FT_Done_FreeType>
 80de75f:	eb 1e                	jmp    80de77f <_ZN10CaptchaGenD1Ev+0x79>
 80de761:	89 d3                	mov    %edx,%ebx
 80de763:	89 c6                	mov    %eax,%esi
 80de765:	8b 45 08             	mov    0x8(%ebp),%eax
 80de768:	83 c0 04             	add    $0x4,%eax
 80de76b:	89 04 24             	mov    %eax,(%esp)
 80de76e:	e8 a1 10 00 00       	call   80df814 <_ZNSt6vectorIPvSaIS0_EED1Ev>
 80de773:	89 f0                	mov    %esi,%eax
 80de775:	89 da                	mov    %ebx,%edx
 80de777:	89 04 24             	mov    %eax,(%esp)
 80de77a:	e8 d1 4f a0 00       	call   8ae3750 <_Unwind_Resume>
 80de77f:	8b 45 08             	mov    0x8(%ebp),%eax
 80de782:	83 c0 04             	add    $0x4,%eax
 80de785:	89 04 24             	mov    %eax,(%esp)
 80de788:	e8 87 10 00 00       	call   80df814 <_ZNSt6vectorIPvSaIS0_EED1Ev>
 80de78d:	83 c4 20             	add    $0x20,%esp
 80de790:	5b                   	pop    %ebx
 80de791:	5e                   	pop    %esi
 80de792:	5d                   	pop    %ebp
 80de793:	c3                   	ret

```

```c
// CaptchaGen::~CaptchaGen @ 0x80de706

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */
/* CaptchaGen::~CaptchaGen() */

void __thiscall CaptchaGen::~CaptchaGen(CaptchaGen *this)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar2 = std::vector<void*,std::allocator<void*>>::size
                      ((vector<void*,std::allocator<void*>> *)(this + 4));
    if (iVar2 <= (int)local_10) break;
    puVar1 = (undefined4 *)
             std::vector<void*,std::allocator<void*>>::operator[]
                       ((vector<void*,std::allocator<void*>> *)(this + 4),local_10);
                    /* try { // try from 080de731 to 080de75e has its CatchHandler @ 080de761 */
    FT_Done_Face((FT_Face_conflict)*puVar1);
    local_10 = local_10 + 1;
  }
  FT_Done_FreeType(*(FT_Library_conflict *)this);
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 4));
  return;
}

```


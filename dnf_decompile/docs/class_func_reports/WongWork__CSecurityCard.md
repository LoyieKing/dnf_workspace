# WongWork__CSecurityCard

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## checkAnswer

```asm
// === 085fdf6a WongWork::CSecurityCard::checkAnswer  [0x085fdf6a-0x85fe025] ===
 85fdf6a:	55                   	push   %ebp
 85fdf6b:	89 e5                	mov    %esp,%ebp
 85fdf6d:	83 ec 08             	sub    $0x8,%esp
 85fdf70:	8b 55 0c             	mov    0xc(%ebp),%edx
 85fdf73:	8b 45 10             	mov    0x10(%ebp),%eax
 85fdf76:	88 55 fc             	mov    %dl,-0x4(%ebp)
 85fdf79:	88 45 f8             	mov    %al,-0x8(%ebp)
 85fdf7c:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf7f:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fdf83:	84 c0                	test   %al,%al
 85fdf85:	75 28                	jne    85fdfaf <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0x45>
 85fdf87:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf8a:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fdf8e:	84 c0                	test   %al,%al
 85fdf90:	75 1d                	jne    85fdfaf <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0x45>
 85fdf92:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf95:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fdf99:	84 c0                	test   %al,%al
 85fdf9b:	75 12                	jne    85fdfaf <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0x45>
 85fdf9d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdfa0:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fdfa4:	84 c0                	test   %al,%al
 85fdfa6:	75 07                	jne    85fdfaf <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0x45>
 85fdfa8:	b8 00 00 00 00       	mov    $0x0,%eax
 85fdfad:	eb 74                	jmp    85fe023 <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0xb9>
 85fdfaf:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdfb2:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fdfb6:	0f be d0             	movsbl %al,%edx
 85fdfb9:	89 d0                	mov    %edx,%eax
 85fdfbb:	c1 e0 02             	shl    $0x2,%eax
 85fdfbe:	01 d0                	add    %edx,%eax
 85fdfc0:	01 c0                	add    %eax,%eax
 85fdfc2:	89 c2                	mov    %eax,%edx
 85fdfc4:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdfc7:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fdfcb:	0f be c0             	movsbl %al,%eax
 85fdfce:	01 c2                	add    %eax,%edx
 85fdfd0:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdfd3:	0f b6 44 10 08       	movzbl 0x8(%eax,%edx,1),%eax
 85fdfd8:	0f be d0             	movsbl %al,%edx
 85fdfdb:	0f b6 45 fc          	movzbl -0x4(%ebp),%eax
 85fdfdf:	39 c2                	cmp    %eax,%edx
 85fdfe1:	75 3b                	jne    85fe01e <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0xb4>
 85fdfe3:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdfe6:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fdfea:	0f be d0             	movsbl %al,%edx
 85fdfed:	89 d0                	mov    %edx,%eax
 85fdfef:	c1 e0 02             	shl    $0x2,%eax
 85fdff2:	01 d0                	add    %edx,%eax
 85fdff4:	01 c0                	add    %eax,%eax
 85fdff6:	89 c2                	mov    %eax,%edx
 85fdff8:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdffb:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fdfff:	0f be c0             	movsbl %al,%eax
 85fe002:	01 c2                	add    %eax,%edx
 85fe004:	8b 45 08             	mov    0x8(%ebp),%eax
 85fe007:	0f b6 44 10 08       	movzbl 0x8(%eax,%edx,1),%eax
 85fe00c:	0f be d0             	movsbl %al,%edx
 85fe00f:	0f b6 45 f8          	movzbl -0x8(%ebp),%eax
 85fe013:	39 c2                	cmp    %eax,%edx
 85fe015:	75 07                	jne    85fe01e <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0xb4>
 85fe017:	b8 01 00 00 00       	mov    $0x1,%eax
 85fe01c:	eb 05                	jmp    85fe023 <_ZNK8WongWork13CSecurityCard11checkAnswerEhh+0xb9>
 85fe01e:	b8 00 00 00 00       	mov    $0x0,%eax
 85fe023:	c9                   	leave
 85fe024:	c3                   	ret
 85fe025:	90                   	nop

```

```c
// WongWork::CSecurityCard::checkAnswer @ 0x85fdf6a

/* WongWork::CSecurityCard::checkAnswer(unsigned char, unsigned char) const */

undefined4 __thiscall
WongWork::CSecurityCard::checkAnswer(CSecurityCard *this,uchar param_1,uchar param_2)

{
  undefined4 uVar1;
  
  if ((((this[0x3c] == (CSecurityCard)0x0) && (this[0x3d] == (CSecurityCard)0x0)) &&
      (this[0x3e] == (CSecurityCard)0x0)) && (this[0x3f] == (CSecurityCard)0x0)) {
    uVar1 = 0;
  }
  else if (((int)(char)this[(char)this[0x3d] * 10 + (int)(char)this[0x3c] + 8] == (uint)param_1) &&
          ((int)(char)this[(char)this[0x3f] * 10 + (int)(char)this[0x3e] + 8] == (uint)param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## generateQuestion

```asm
// === 085fddb2 WongWork::CSecurityCard::generateQuestion  [0x085fddb2-0x85fde9b] ===
 85fddb2:	55                   	push   %ebp
 85fddb3:	89 e5                	mov    %esp,%ebp
 85fddb5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddb8:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fddbc:	84 c0                	test   %al,%al
 85fddbe:	75 21                	jne    85fdde1 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x2f>
 85fddc0:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddc3:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fddc7:	84 c0                	test   %al,%al
 85fddc9:	75 16                	jne    85fdde1 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x2f>
 85fddcb:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddce:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fddd2:	84 c0                	test   %al,%al
 85fddd4:	75 0b                	jne    85fdde1 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x2f>
 85fddd6:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddd9:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fdddd:	84 c0                	test   %al,%al
 85fdddf:	74 58                	je     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fdde1:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdde4:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fdde8:	84 c0                	test   %al,%al
 85fddea:	78 4d                	js     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fddec:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddef:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fddf3:	3c 09                	cmp    $0x9,%al
 85fddf5:	7f 42                	jg     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fddf7:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddfa:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fddfe:	84 c0                	test   %al,%al
 85fde00:	78 37                	js     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fde02:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde05:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fde09:	3c 03                	cmp    $0x3,%al
 85fde0b:	7f 2c                	jg     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fde0d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde10:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fde14:	84 c0                	test   %al,%al
 85fde16:	78 21                	js     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fde18:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde1b:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fde1f:	3c 09                	cmp    $0x9,%al
 85fde21:	7f 16                	jg     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fde23:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde26:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fde2a:	84 c0                	test   %al,%al
 85fde2c:	78 0b                	js     85fde39 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0x87>
 85fde2e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde31:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fde35:	3c 03                	cmp    $0x3,%al
 85fde37:	7e 1c                	jle    85fde55 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_+0xa3>
 85fde39:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde3c:	c6 40 3c 00          	movb   $0x0,0x3c(%eax)
 85fde40:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde43:	c6 40 3d 00          	movb   $0x0,0x3d(%eax)
 85fde47:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde4a:	c6 40 3e 01          	movb   $0x1,0x3e(%eax)
 85fde4e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde51:	c6 40 3f 01          	movb   $0x1,0x3f(%eax)
 85fde55:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde58:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fde5c:	66 0f be d0          	movsbw %al,%dx
 85fde60:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fde63:	66 89 10             	mov    %dx,(%eax)
 85fde66:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde69:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fde6d:	66 0f be d0          	movsbw %al,%dx
 85fde71:	8b 45 10             	mov    0x10(%ebp),%eax
 85fde74:	66 89 10             	mov    %dx,(%eax)
 85fde77:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde7a:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fde7e:	66 0f be d0          	movsbw %al,%dx
 85fde82:	8b 45 14             	mov    0x14(%ebp),%eax
 85fde85:	66 89 10             	mov    %dx,(%eax)
 85fde88:	8b 45 08             	mov    0x8(%ebp),%eax
 85fde8b:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fde8f:	66 0f be d0          	movsbw %al,%dx
 85fde93:	8b 45 18             	mov    0x18(%ebp),%eax
 85fde96:	66 89 10             	mov    %dx,(%eax)
 85fde99:	5d                   	pop    %ebp
 85fde9a:	c3                   	ret
 85fde9b:	90                   	nop

```

```c
// WongWork::CSecurityCard::generateQuestion @ 0x85fddb2

/* WongWork::CSecurityCard::generateQuestion(short&, short&, short&, short&) */

void __thiscall
WongWork::CSecurityCard::generateQuestion
          (CSecurityCard *this,short *param_1,short *param_2,short *param_3,short *param_4)

{
  if ((((((this[0x3c] == (CSecurityCard)0x0) && (this[0x3d] == (CSecurityCard)0x0)) &&
        (this[0x3e] == (CSecurityCard)0x0)) && (this[0x3f] == (CSecurityCard)0x0)) ||
      ((((char)this[0x3c] < '\0' || ('\t' < (char)this[0x3c])) ||
       (((char)this[0x3d] < '\0' || (('\x03' < (char)this[0x3d] || ((char)this[0x3e] < '\0'))))))))
     || (('\t' < (char)this[0x3e] || (((char)this[0x3f] < '\0' || ('\x03' < (char)this[0x3f])))))) {
    this[0x3c] = (CSecurityCard)0x0;
    this[0x3d] = (CSecurityCard)0x0;
    this[0x3e] = (CSecurityCard)0x1;
    this[0x3f] = (CSecurityCard)0x1;
  }
  *param_1 = (short)(char)this[0x3c];
  *param_2 = (short)(char)this[0x3d];
  *param_3 = (short)(char)this[0x3e];
  *param_4 = (short)(char)this[0x3f];
  return;
}

```

---

## init

```asm
// === 085fdd68 WongWork::CSecurityCard::init  [0x085fdd68-0x85fddb1] ===
 85fdd68:	55                   	push   %ebp
 85fdd69:	89 e5                	mov    %esp,%ebp
 85fdd6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd6e:	c6 40 2f 00          	movb   $0x0,0x2f(%eax)
 85fdd72:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd75:	c6 40 30 00          	movb   $0x0,0x30(%eax)
 85fdd79:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd7c:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 85fdd83:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd86:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 85fdd8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd90:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 85fdd97:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdd9a:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85fdda1:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdda4:	c6 40 31 00          	movb   $0x0,0x31(%eax)
 85fdda8:	8b 45 08             	mov    0x8(%ebp),%eax
 85fddab:	c6 40 40 00          	movb   $0x0,0x40(%eax)
 85fddaf:	5d                   	pop    %ebp
 85fddb0:	c3                   	ret
 85fddb1:	90                   	nop

```

```c
// WongWork::CSecurityCard::init @ 0x85fdd68

/* WongWork::CSecurityCard::init() */

void __thiscall WongWork::CSecurityCard::init(CSecurityCard *this)

{
  this[0x2f] = (CSecurityCard)0x0;
  this[0x30] = (CSecurityCard)0x0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x31] = (CSecurityCard)0x0;
  this[0x40] = (CSecurityCard)0x0;
  return;
}

```

---

## setSecurityCardInfo

```asm
// === 085fde9c WongWork::CSecurityCard::setSecurityCardInfo  [0x085fde9c-0x85fdf69] ===
 85fde9c:	55                   	push   %ebp
 85fde9d:	89 e5                	mov    %esp,%ebp
 85fde9f:	83 ec 28             	sub    $0x28,%esp
 85fdea2:	8b 55 10             	mov    0x10(%ebp),%edx
 85fdea5:	8b 45 14             	mov    0x14(%ebp),%eax
 85fdea8:	88 55 f4             	mov    %dl,-0xc(%ebp)
 85fdeab:	88 45 f0             	mov    %al,-0x10(%ebp)
 85fdeae:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdeb1:	8d 50 08             	lea    0x8(%eax),%edx
 85fdeb4:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 85fdebb:	00 
 85fdebc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fdebf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fdec3:	89 14 24             	mov    %edx,(%esp)
 85fdec6:	e8 05 fa a7 ff       	call   807d8d0 <strncpy@plt>
 85fdecb:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdece:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 85fded2:	88 50 2f             	mov    %dl,0x2f(%eax)
 85fded5:	8b 45 08             	mov    0x8(%ebp),%eax
 85fded8:	0f b6 55 f0          	movzbl -0x10(%ebp),%edx
 85fdedc:	88 50 30             	mov    %dl,0x30(%eax)
 85fdedf:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdee2:	8b 55 18             	mov    0x18(%ebp),%edx
 85fdee5:	89 50 34             	mov    %edx,0x34(%eax)
 85fdee8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85fdeeb:	89 c2                	mov    %eax,%edx
 85fdeed:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdef0:	88 50 31             	mov    %dl,0x31(%eax)
 85fdef3:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdef6:	8b 55 20             	mov    0x20(%ebp),%edx
 85fdef9:	89 50 38             	mov    %edx,0x38(%eax)
 85fdefc:	83 7d 24 00          	cmpl   $0x0,0x24(%ebp)
 85fdf00:	74 65                	je     85fdf67 <_ZN8WongWork13CSecurityCard19setSecurityCardInfoEPKcbbiiiPc+0xcb>
 85fdf02:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf05:	8d 50 3c             	lea    0x3c(%eax),%edx
 85fdf08:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 85fdf0f:	00 
 85fdf10:	8b 45 24             	mov    0x24(%ebp),%eax
 85fdf13:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fdf17:	89 14 24             	mov    %edx,(%esp)
 85fdf1a:	e8 b1 f9 a7 ff       	call   807d8d0 <strncpy@plt>
 85fdf1f:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf22:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85fdf26:	83 e8 30             	sub    $0x30,%eax
 85fdf29:	89 c2                	mov    %eax,%edx
 85fdf2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf2e:	88 50 3c             	mov    %dl,0x3c(%eax)
 85fdf31:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf34:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85fdf38:	83 e8 30             	sub    $0x30,%eax
 85fdf3b:	89 c2                	mov    %eax,%edx
 85fdf3d:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf40:	88 50 3d             	mov    %dl,0x3d(%eax)
 85fdf43:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf46:	0f b6 40 3e          	movzbl 0x3e(%eax),%eax
 85fdf4a:	83 e8 30             	sub    $0x30,%eax
 85fdf4d:	89 c2                	mov    %eax,%edx
 85fdf4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf52:	88 50 3e             	mov    %dl,0x3e(%eax)
 85fdf55:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf58:	0f b6 40 3f          	movzbl 0x3f(%eax),%eax
 85fdf5c:	83 e8 30             	sub    $0x30,%eax
 85fdf5f:	89 c2                	mov    %eax,%edx
 85fdf61:	8b 45 08             	mov    0x8(%ebp),%eax
 85fdf64:	88 50 3f             	mov    %dl,0x3f(%eax)
 85fdf67:	c9                   	leave
 85fdf68:	c3                   	ret
 85fdf69:	90                   	nop

```

```c
// WongWork::CSecurityCard::setSecurityCardInfo @ 0x85fde9c

/* WongWork::CSecurityCard::setSecurityCardInfo(char const*, bool, bool, int, int, int, char*) */

void __thiscall
WongWork::CSecurityCard::setSecurityCardInfo
          (CSecurityCard *this,char *param_1,bool param_2,bool param_3,int param_4,int param_5,
          int param_6,char *param_7)

{
  strncpy((char *)(this + 8),param_1,0x27);
  this[0x2f] = (CSecurityCard)param_2;
  this[0x30] = (CSecurityCard)param_3;
  *(int *)(this + 0x34) = param_4;
  this[0x31] = SUB41(param_5,0);
  *(int *)(this + 0x38) = param_6;
  if (param_7 != (char *)0x0) {
    strncpy((char *)(this + 0x3c),param_7,5);
    this[0x3c] = (CSecurityCard)((char)this[0x3c] + -0x30);
    this[0x3d] = (CSecurityCard)((char)this[0x3d] + -0x30);
    this[0x3e] = (CSecurityCard)((char)this[0x3e] + -0x30);
    this[0x3f] = (CSecurityCard)((char)this[0x3f] + -0x30);
  }
  return;
}

```


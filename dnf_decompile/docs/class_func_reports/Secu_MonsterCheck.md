# Secu_MonsterCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## Check223

```asm
// === 0827ad98 Secu_MonsterCheck::Check223  [0x0827ad98-0x827af77] ===
 827ad98:	55                   	push   %ebp
 827ad99:	89 e5                	mov    %esp,%ebp
 827ad9b:	53                   	push   %ebx
 827ad9c:	83 ec 34             	sub    $0x34,%esp
 827ad9f:	8b 45 08             	mov    0x8(%ebp),%eax
 827ada2:	0f b7 50 08          	movzwl 0x8(%eax),%edx
 827ada6:	8b 45 08             	mov    0x8(%ebp),%eax
 827ada9:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 827adad:	66 39 c2             	cmp    %ax,%dx
 827adb0:	75 0a                	jne    827adbc <_ZN17Secu_MonsterCheck8Check223Ev+0x24>
 827adb2:	b8 01 00 00 00       	mov    $0x1,%eax
 827adb7:	e9 b6 01 00 00       	jmp    827af72 <_ZN17Secu_MonsterCheck8Check223Ev+0x1da>
 827adbc:	c6 45 ef 01          	movb   $0x1,-0x11(%ebp)
 827adc0:	8b 45 08             	mov    0x8(%ebp),%eax
 827adc3:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 827adc7:	84 c0                	test   %al,%al
 827adc9:	0f 84 9f 01 00 00    	je     827af6e <_ZN17Secu_MonsterCheck8Check223Ev+0x1d6>
 827adcf:	8b 45 08             	mov    0x8(%ebp),%eax
 827add2:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 827add6:	0f b7 d0             	movzwl %ax,%edx
 827add9:	8b 45 08             	mov    0x8(%ebp),%eax
 827addc:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 827ade0:	0f b7 c0             	movzwl %ax,%eax
 827ade3:	89 d1                	mov    %edx,%ecx
 827ade5:	29 c1                	sub    %eax,%ecx
 827ade7:	89 c8                	mov    %ecx,%eax
 827ade9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 827adec:	8b 45 08             	mov    0x8(%ebp),%eax
 827adef:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 827adf3:	0f b7 d0             	movzwl %ax,%edx
 827adf6:	8b 45 08             	mov    0x8(%ebp),%eax
 827adf9:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
 827adfd:	0f b7 c0             	movzwl %ax,%eax
 827ae00:	89 d1                	mov    %edx,%ecx
 827ae02:	29 c1                	sub    %eax,%ecx
 827ae04:	89 c8                	mov    %ecx,%eax
 827ae06:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827ae09:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 827ae0d:	7f 2a                	jg     827ae39 <_ZN17Secu_MonsterCheck8Check223Ev+0xa1>
 827ae0f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 827ae12:	f7 d8                	neg    %eax
 827ae14:	3d c7 00 00 00       	cmp    $0xc7,%eax
 827ae19:	7f 06                	jg     827ae21 <_ZN17Secu_MonsterCheck8Check223Ev+0x89>
 827ae1b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 827ae1f:	7f 0f                	jg     827ae30 <_ZN17Secu_MonsterCheck8Check223Ev+0x98>
 827ae21:	8b 45 f4             	mov    -0xc(%ebp),%eax
 827ae24:	f7 d8                	neg    %eax
 827ae26:	3d 95 00 00 00       	cmp    $0x95,%eax
 827ae2b:	0f 9e c0             	setle  %al
 827ae2e:	eb 07                	jmp    827ae37 <_ZN17Secu_MonsterCheck8Check223Ev+0x9f>
 827ae30:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 827ae34:	0f 95 c0             	setne  %al
 827ae37:	eb 07                	jmp    827ae40 <_ZN17Secu_MonsterCheck8Check223Ev+0xa8>
 827ae39:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 827ae3d:	0f 95 c0             	setne  %al
 827ae40:	84 c0                	test   %al,%al
 827ae42:	0f 84 96 00 00 00    	je     827aede <_ZN17Secu_MonsterCheck8Check223Ev+0x146>
 827ae48:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae4b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 827ae4f:	8d 50 01             	lea    0x1(%eax),%edx
 827ae52:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae55:	66 89 50 0e          	mov    %dx,0xe(%eax)
 827ae59:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae5c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 827ae60:	66 83 f8 0a          	cmp    $0xa,%ax
 827ae64:	76 59                	jbe    827aebf <_ZN17Secu_MonsterCheck8Check223Ev+0x127>
 827ae66:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae69:	66 c7 40 10 03 00    	movw   $0x3,0x10(%eax)
 827ae6f:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae72:	8b 00                	mov    (%eax),%eax
 827ae74:	85 c0                	test   %eax,%eax
 827ae76:	74 3e                	je     827aeb6 <_ZN17Secu_MonsterCheck8Check223Ev+0x11e>
 827ae78:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae7b:	8b 18                	mov    (%eax),%ebx
 827ae7d:	8b 45 08             	mov    0x8(%ebp),%eax
 827ae80:	8b 00                	mov    (%eax),%eax
 827ae82:	89 04 24             	mov    %eax,(%esp)
 827ae85:	e8 d0 ea e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827ae8a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827ae91:	00 
 827ae92:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827ae99:	00 
 827ae9a:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 827aea1:	00 
 827aea2:	c7 44 24 08 df 00 00 	movl   $0xdf,0x8(%esp)
 827aea9:	00 
 827aeaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827aeae:	89 04 24             	mov    %eax,(%esp)
 827aeb1:	e8 c8 dd e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827aeb6:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 827aeba:	e9 af 00 00 00       	jmp    827af6e <_ZN17Secu_MonsterCheck8Check223Ev+0x1d6>
 827aebf:	8b 45 08             	mov    0x8(%ebp),%eax
 827aec2:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 827aec6:	66 83 f8 04          	cmp    $0x4,%ax
 827aeca:	0f 86 9e 00 00 00    	jbe    827af6e <_ZN17Secu_MonsterCheck8Check223Ev+0x1d6>
 827aed0:	8b 45 08             	mov    0x8(%ebp),%eax
 827aed3:	66 c7 40 10 01 00    	movw   $0x1,0x10(%eax)
 827aed9:	e9 90 00 00 00       	jmp    827af6e <_ZN17Secu_MonsterCheck8Check223Ev+0x1d6>
 827aede:	8b 45 08             	mov    0x8(%ebp),%eax
 827aee1:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 827aee5:	66 83 f8 01          	cmp    $0x1,%ax
 827aee9:	75 47                	jne    827af32 <_ZN17Secu_MonsterCheck8Check223Ev+0x19a>
 827aeeb:	8b 45 08             	mov    0x8(%ebp),%eax
 827aeee:	8b 00                	mov    (%eax),%eax
 827aef0:	85 c0                	test   %eax,%eax
 827aef2:	74 3e                	je     827af32 <_ZN17Secu_MonsterCheck8Check223Ev+0x19a>
 827aef4:	8b 45 08             	mov    0x8(%ebp),%eax
 827aef7:	8b 18                	mov    (%eax),%ebx
 827aef9:	8b 45 08             	mov    0x8(%ebp),%eax
 827aefc:	8b 00                	mov    (%eax),%eax
 827aefe:	89 04 24             	mov    %eax,(%esp)
 827af01:	e8 54 ea e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827af06:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827af0d:	00 
 827af0e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827af15:	00 
 827af16:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827af1d:	00 
 827af1e:	c7 44 24 08 df 00 00 	movl   $0xdf,0x8(%esp)
 827af25:	00 
 827af26:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827af2a:	89 04 24             	mov    %eax,(%esp)
 827af2d:	e8 4c dd e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827af32:	8b 45 08             	mov    0x8(%ebp),%eax
 827af35:	0f b7 50 28          	movzwl 0x28(%eax),%edx
 827af39:	8b 45 08             	mov    0x8(%ebp),%eax
 827af3c:	66 89 50 08          	mov    %dx,0x8(%eax)
 827af40:	8b 45 08             	mov    0x8(%ebp),%eax
 827af43:	0f b7 50 2a          	movzwl 0x2a(%eax),%edx
 827af47:	8b 45 08             	mov    0x8(%ebp),%eax
 827af4a:	66 89 50 0a          	mov    %dx,0xa(%eax)
 827af4e:	8b 45 08             	mov    0x8(%ebp),%eax
 827af51:	0f b7 50 2c          	movzwl 0x2c(%eax),%edx
 827af55:	8b 45 08             	mov    0x8(%ebp),%eax
 827af58:	66 89 50 0c          	mov    %dx,0xc(%eax)
 827af5c:	8b 45 08             	mov    0x8(%ebp),%eax
 827af5f:	66 c7 40 0e 00 00    	movw   $0x0,0xe(%eax)
 827af65:	8b 45 08             	mov    0x8(%ebp),%eax
 827af68:	66 c7 40 10 00 00    	movw   $0x0,0x10(%eax)
 827af6e:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 827af72:	83 c4 34             	add    $0x34,%esp
 827af75:	5b                   	pop    %ebx
 827af76:	5d                   	pop    %ebp
 827af77:	c3                   	ret

```

```c
// Secu_MonsterCheck::Check223 @ 0x827ad98

/* Secu_MonsterCheck::Check223() */

undefined1 __thiscall Secu_MonsterCheck::Check223(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_15;
  
  if (*(short *)(this + 8) == *(short *)(this + 0x28)) {
    local_15 = 1;
  }
  else {
    local_15 = 1;
    if (this[4] != (Secu_MonsterCheck)0x0) {
      iVar3 = (uint)*(ushort *)(this + 10) - (uint)*(ushort *)(this + 0x2a);
      iVar4 = (uint)*(ushort *)(this + 0xc) - (uint)*(ushort *)(this + 0x2c);
      if (iVar3 < 1) {
        if ((iVar3 == -199 || -iVar3 < 199) && (0 < iVar4)) {
          bVar5 = iVar4 != 0;
        }
        else {
          bVar5 = iVar4 == -0x95 || -iVar4 < 0x95;
        }
      }
      else {
        bVar5 = iVar3 != 0;
      }
      if (bVar5) {
        *(short *)(this + 0xe) = *(short *)(this + 0xe) + 1;
        if (*(ushort *)(this + 0xe) < 0xb) {
          if (4 < *(ushort *)(this + 0xe)) {
            *(undefined2 *)(this + 0x10) = 1;
          }
        }
        else {
          *(undefined2 *)(this + 0x10) = 3;
          if (*(int *)this != 0) {
            uVar1 = *(undefined4 *)this;
            pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,3,0,0);
          }
          local_15 = 0;
        }
      }
      else {
        if ((*(short *)(this + 0x10) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,1,0,0);
        }
        *(undefined2 *)(this + 8) = *(undefined2 *)(this + 0x28);
        *(undefined2 *)(this + 10) = *(undefined2 *)(this + 0x2a);
        *(undefined2 *)(this + 0xc) = *(undefined2 *)(this + 0x2c);
        *(undefined2 *)(this + 0xe) = 0;
        *(undefined2 *)(this + 0x10) = 0;
      }
    }
  }
  return local_15;
}

```

---

## Check224

```asm
// === 0827af78 Secu_MonsterCheck::Check224  [0x0827af78-0x827b0ff] ===
 827af78:	55                   	push   %ebp
 827af79:	89 e5                	mov    %esp,%ebp
 827af7b:	53                   	push   %ebx
 827af7c:	83 ec 34             	sub    $0x34,%esp
 827af7f:	8b 45 08             	mov    0x8(%ebp),%eax
 827af82:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 827af86:	8b 45 08             	mov    0x8(%ebp),%eax
 827af89:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 827af8d:	66 39 c2             	cmp    %ax,%dx
 827af90:	75 0a                	jne    827af9c <_ZN17Secu_MonsterCheck8Check224Ev+0x24>
 827af92:	b8 01 00 00 00       	mov    $0x1,%eax
 827af97:	e9 5d 01 00 00       	jmp    827b0f9 <_ZN17Secu_MonsterCheck8Check224Ev+0x181>
 827af9c:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 827afa0:	8b 45 08             	mov    0x8(%ebp),%eax
 827afa3:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 827afa7:	84 c0                	test   %al,%al
 827afa9:	0f 84 46 01 00 00    	je     827b0f5 <_ZN17Secu_MonsterCheck8Check224Ev+0x17d>
 827afaf:	8b 45 08             	mov    0x8(%ebp),%eax
 827afb2:	8b 50 30             	mov    0x30(%eax),%edx
 827afb5:	8b 45 08             	mov    0x8(%ebp),%eax
 827afb8:	8b 40 14             	mov    0x14(%eax),%eax
 827afbb:	89 d1                	mov    %edx,%ecx
 827afbd:	29 c1                	sub    %eax,%ecx
 827afbf:	89 c8                	mov    %ecx,%eax
 827afc1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827afc4:	81 7d f4 e8 03 00 00 	cmpl   $0x3e8,-0xc(%ebp)
 827afcb:	0f 8f a1 00 00 00    	jg     827b072 <_ZN17Secu_MonsterCheck8Check224Ev+0xfa>
 827afd1:	8b 45 08             	mov    0x8(%ebp),%eax
 827afd4:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 827afd8:	8d 50 01             	lea    0x1(%eax),%edx
 827afdb:	8b 45 08             	mov    0x8(%ebp),%eax
 827afde:	66 89 50 18          	mov    %dx,0x18(%eax)
 827afe2:	8b 45 08             	mov    0x8(%ebp),%eax
 827afe5:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 827afe9:	66 83 f8 04          	cmp    $0x4,%ax
 827afed:	76 1c                	jbe    827b00b <_ZN17Secu_MonsterCheck8Check224Ev+0x93>
 827afef:	8b 45 08             	mov    0x8(%ebp),%eax
 827aff2:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 827aff6:	66 83 f8 0a          	cmp    $0xa,%ax
 827affa:	77 0f                	ja     827b00b <_ZN17Secu_MonsterCheck8Check224Ev+0x93>
 827affc:	8b 45 08             	mov    0x8(%ebp),%eax
 827afff:	66 c7 40 1a 01 00    	movw   $0x1,0x1a(%eax)
 827b005:	90                   	nop
 827b006:	e9 d0 00 00 00       	jmp    827b0db <_ZN17Secu_MonsterCheck8Check224Ev+0x163>
 827b00b:	8b 45 08             	mov    0x8(%ebp),%eax
 827b00e:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 827b012:	66 83 f8 0a          	cmp    $0xa,%ax
 827b016:	0f 86 be 00 00 00    	jbe    827b0da <_ZN17Secu_MonsterCheck8Check224Ev+0x162>
 827b01c:	8b 45 08             	mov    0x8(%ebp),%eax
 827b01f:	66 c7 40 1a 03 00    	movw   $0x3,0x1a(%eax)
 827b025:	8b 45 08             	mov    0x8(%ebp),%eax
 827b028:	8b 00                	mov    (%eax),%eax
 827b02a:	85 c0                	test   %eax,%eax
 827b02c:	74 3e                	je     827b06c <_ZN17Secu_MonsterCheck8Check224Ev+0xf4>
 827b02e:	8b 45 08             	mov    0x8(%ebp),%eax
 827b031:	8b 18                	mov    (%eax),%ebx
 827b033:	8b 45 08             	mov    0x8(%ebp),%eax
 827b036:	8b 00                	mov    (%eax),%eax
 827b038:	89 04 24             	mov    %eax,(%esp)
 827b03b:	e8 1a e9 e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827b040:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827b047:	00 
 827b048:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827b04f:	00 
 827b050:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 827b057:	00 
 827b058:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 827b05f:	00 
 827b060:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b064:	89 04 24             	mov    %eax,(%esp)
 827b067:	e8 12 dc e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827b06c:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 827b070:	eb 69                	jmp    827b0db <_ZN17Secu_MonsterCheck8Check224Ev+0x163>
 827b072:	8b 45 08             	mov    0x8(%ebp),%eax
 827b075:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 827b079:	66 83 f8 01          	cmp    $0x1,%ax
 827b07d:	75 47                	jne    827b0c6 <_ZN17Secu_MonsterCheck8Check224Ev+0x14e>
 827b07f:	8b 45 08             	mov    0x8(%ebp),%eax
 827b082:	8b 00                	mov    (%eax),%eax
 827b084:	85 c0                	test   %eax,%eax
 827b086:	74 3e                	je     827b0c6 <_ZN17Secu_MonsterCheck8Check224Ev+0x14e>
 827b088:	8b 45 08             	mov    0x8(%ebp),%eax
 827b08b:	8b 18                	mov    (%eax),%ebx
 827b08d:	8b 45 08             	mov    0x8(%ebp),%eax
 827b090:	8b 00                	mov    (%eax),%eax
 827b092:	89 04 24             	mov    %eax,(%esp)
 827b095:	e8 c0 e8 e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827b09a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827b0a1:	00 
 827b0a2:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827b0a9:	00 
 827b0aa:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827b0b1:	00 
 827b0b2:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 827b0b9:	00 
 827b0ba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b0be:	89 04 24             	mov    %eax,(%esp)
 827b0c1:	e8 b8 db e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827b0c6:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0c9:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 827b0cf:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0d2:	66 c7 40 1a 00 00    	movw   $0x0,0x1a(%eax)
 827b0d8:	eb 01                	jmp    827b0db <_ZN17Secu_MonsterCheck8Check224Ev+0x163>
 827b0da:	90                   	nop
 827b0db:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0de:	0f b7 50 28          	movzwl 0x28(%eax),%edx
 827b0e2:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0e5:	66 89 50 12          	mov    %dx,0x12(%eax)
 827b0e9:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0ec:	8b 50 30             	mov    0x30(%eax),%edx
 827b0ef:	8b 45 08             	mov    0x8(%ebp),%eax
 827b0f2:	89 50 14             	mov    %edx,0x14(%eax)
 827b0f5:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 827b0f9:	83 c4 34             	add    $0x34,%esp
 827b0fc:	5b                   	pop    %ebx
 827b0fd:	5d                   	pop    %ebp
 827b0fe:	c3                   	ret
 827b0ff:	90                   	nop

```

```c
// Secu_MonsterCheck::Check224 @ 0x827af78

/* Secu_MonsterCheck::Check224() */

undefined1 __thiscall Secu_MonsterCheck::Check224(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  undefined1 local_11;
  
  if (*(short *)(this + 0x12) == *(short *)(this + 0x28)) {
    local_11 = 1;
  }
  else {
    local_11 = 1;
    if (this[5] != (Secu_MonsterCheck)0x0) {
      if (*(int *)(this + 0x30) - *(int *)(this + 0x14) < 0x3e9) {
        *(short *)(this + 0x18) = *(short *)(this + 0x18) + 1;
        if ((*(ushort *)(this + 0x18) < 5) || (10 < *(ushort *)(this + 0x18))) {
          if (10 < *(ushort *)(this + 0x18)) {
            *(undefined2 *)(this + 0x1a) = 3;
            if (*(int *)this != 0) {
              uVar1 = *(undefined4 *)this;
              pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,3,0,0);
            }
            local_11 = 0;
          }
        }
        else {
          *(undefined2 *)(this + 0x1a) = 1;
        }
      }
      else {
        if ((*(short *)(this + 0x1a) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,1,0,0);
        }
        *(undefined2 *)(this + 0x18) = 0;
        *(undefined2 *)(this + 0x1a) = 0;
      }
      *(undefined2 *)(this + 0x12) = *(undefined2 *)(this + 0x28);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(this + 0x30);
    }
  }
  return local_11;
}

```

---

## Check225

```asm
// === 0827b100 Secu_MonsterCheck::Check225  [0x0827b100-0x827b287] ===
 827b100:	55                   	push   %ebp
 827b101:	89 e5                	mov    %esp,%ebp
 827b103:	53                   	push   %ebx
 827b104:	83 ec 34             	sub    $0x34,%esp
 827b107:	8b 45 08             	mov    0x8(%ebp),%eax
 827b10a:	0f b7 50 1c          	movzwl 0x1c(%eax),%edx
 827b10e:	8b 45 08             	mov    0x8(%ebp),%eax
 827b111:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 827b115:	66 39 c2             	cmp    %ax,%dx
 827b118:	75 0a                	jne    827b124 <_ZN17Secu_MonsterCheck8Check225Ev+0x24>
 827b11a:	b8 01 00 00 00       	mov    $0x1,%eax
 827b11f:	e9 5d 01 00 00       	jmp    827b281 <_ZN17Secu_MonsterCheck8Check225Ev+0x181>
 827b124:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 827b128:	8b 45 08             	mov    0x8(%ebp),%eax
 827b12b:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 827b12f:	84 c0                	test   %al,%al
 827b131:	0f 84 46 01 00 00    	je     827b27d <_ZN17Secu_MonsterCheck8Check225Ev+0x17d>
 827b137:	8b 45 08             	mov    0x8(%ebp),%eax
 827b13a:	8b 50 30             	mov    0x30(%eax),%edx
 827b13d:	8b 45 08             	mov    0x8(%ebp),%eax
 827b140:	8b 40 20             	mov    0x20(%eax),%eax
 827b143:	89 d1                	mov    %edx,%ecx
 827b145:	29 c1                	sub    %eax,%ecx
 827b147:	89 c8                	mov    %ecx,%eax
 827b149:	89 45 f4             	mov    %eax,-0xc(%ebp)
 827b14c:	81 7d f4 cf 07 00 00 	cmpl   $0x7cf,-0xc(%ebp)
 827b153:	0f 8f a1 00 00 00    	jg     827b1fa <_ZN17Secu_MonsterCheck8Check225Ev+0xfa>
 827b159:	8b 45 08             	mov    0x8(%ebp),%eax
 827b15c:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 827b160:	8d 50 01             	lea    0x1(%eax),%edx
 827b163:	8b 45 08             	mov    0x8(%ebp),%eax
 827b166:	66 89 50 24          	mov    %dx,0x24(%eax)
 827b16a:	8b 45 08             	mov    0x8(%ebp),%eax
 827b16d:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 827b171:	66 83 f8 04          	cmp    $0x4,%ax
 827b175:	76 1c                	jbe    827b193 <_ZN17Secu_MonsterCheck8Check225Ev+0x93>
 827b177:	8b 45 08             	mov    0x8(%ebp),%eax
 827b17a:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 827b17e:	66 83 f8 0a          	cmp    $0xa,%ax
 827b182:	77 0f                	ja     827b193 <_ZN17Secu_MonsterCheck8Check225Ev+0x93>
 827b184:	8b 45 08             	mov    0x8(%ebp),%eax
 827b187:	66 c7 40 26 01 00    	movw   $0x1,0x26(%eax)
 827b18d:	90                   	nop
 827b18e:	e9 d0 00 00 00       	jmp    827b263 <_ZN17Secu_MonsterCheck8Check225Ev+0x163>
 827b193:	8b 45 08             	mov    0x8(%ebp),%eax
 827b196:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 827b19a:	66 83 f8 0a          	cmp    $0xa,%ax
 827b19e:	0f 86 be 00 00 00    	jbe    827b262 <_ZN17Secu_MonsterCheck8Check225Ev+0x162>
 827b1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 827b1a7:	66 c7 40 26 03 00    	movw   $0x3,0x26(%eax)
 827b1ad:	8b 45 08             	mov    0x8(%ebp),%eax
 827b1b0:	8b 00                	mov    (%eax),%eax
 827b1b2:	85 c0                	test   %eax,%eax
 827b1b4:	74 3e                	je     827b1f4 <_ZN17Secu_MonsterCheck8Check225Ev+0xf4>
 827b1b6:	8b 45 08             	mov    0x8(%ebp),%eax
 827b1b9:	8b 18                	mov    (%eax),%ebx
 827b1bb:	8b 45 08             	mov    0x8(%ebp),%eax
 827b1be:	8b 00                	mov    (%eax),%eax
 827b1c0:	89 04 24             	mov    %eax,(%esp)
 827b1c3:	e8 92 e7 e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827b1c8:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827b1cf:	00 
 827b1d0:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827b1d7:	00 
 827b1d8:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 827b1df:	00 
 827b1e0:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 827b1e7:	00 
 827b1e8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b1ec:	89 04 24             	mov    %eax,(%esp)
 827b1ef:	e8 8a da e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827b1f4:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 827b1f8:	eb 69                	jmp    827b263 <_ZN17Secu_MonsterCheck8Check225Ev+0x163>
 827b1fa:	8b 45 08             	mov    0x8(%ebp),%eax
 827b1fd:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 827b201:	66 83 f8 01          	cmp    $0x1,%ax
 827b205:	75 47                	jne    827b24e <_ZN17Secu_MonsterCheck8Check225Ev+0x14e>
 827b207:	8b 45 08             	mov    0x8(%ebp),%eax
 827b20a:	8b 00                	mov    (%eax),%eax
 827b20c:	85 c0                	test   %eax,%eax
 827b20e:	74 3e                	je     827b24e <_ZN17Secu_MonsterCheck8Check225Ev+0x14e>
 827b210:	8b 45 08             	mov    0x8(%ebp),%eax
 827b213:	8b 18                	mov    (%eax),%ebx
 827b215:	8b 45 08             	mov    0x8(%ebp),%eax
 827b218:	8b 00                	mov    (%eax),%eax
 827b21a:	89 04 24             	mov    %eax,(%esp)
 827b21d:	e8 38 e7 e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827b222:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827b229:	00 
 827b22a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827b231:	00 
 827b232:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827b239:	00 
 827b23a:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 827b241:	00 
 827b242:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827b246:	89 04 24             	mov    %eax,(%esp)
 827b249:	e8 30 da e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827b24e:	8b 45 08             	mov    0x8(%ebp),%eax
 827b251:	66 c7 40 24 00 00    	movw   $0x0,0x24(%eax)
 827b257:	8b 45 08             	mov    0x8(%ebp),%eax
 827b25a:	66 c7 40 26 00 00    	movw   $0x0,0x26(%eax)
 827b260:	eb 01                	jmp    827b263 <_ZN17Secu_MonsterCheck8Check225Ev+0x163>
 827b262:	90                   	nop
 827b263:	8b 45 08             	mov    0x8(%ebp),%eax
 827b266:	0f b7 50 28          	movzwl 0x28(%eax),%edx
 827b26a:	8b 45 08             	mov    0x8(%ebp),%eax
 827b26d:	66 89 50 1c          	mov    %dx,0x1c(%eax)
 827b271:	8b 45 08             	mov    0x8(%ebp),%eax
 827b274:	8b 50 30             	mov    0x30(%eax),%edx
 827b277:	8b 45 08             	mov    0x8(%ebp),%eax
 827b27a:	89 50 20             	mov    %edx,0x20(%eax)
 827b27d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 827b281:	83 c4 34             	add    $0x34,%esp
 827b284:	5b                   	pop    %ebx
 827b285:	5d                   	pop    %ebp
 827b286:	c3                   	ret
 827b287:	90                   	nop

```

```c
// Secu_MonsterCheck::Check225 @ 0x827b100

/* Secu_MonsterCheck::Check225() */

undefined1 __thiscall Secu_MonsterCheck::Check225(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  undefined1 local_11;
  
  if (*(short *)(this + 0x1c) == *(short *)(this + 0x28)) {
    local_11 = 1;
  }
  else {
    local_11 = 1;
    if (this[6] != (Secu_MonsterCheck)0x0) {
      if (*(int *)(this + 0x30) - *(int *)(this + 0x20) < 2000) {
        *(short *)(this + 0x24) = *(short *)(this + 0x24) + 1;
        if ((*(ushort *)(this + 0x24) < 5) || (10 < *(ushort *)(this + 0x24))) {
          if (10 < *(ushort *)(this + 0x24)) {
            *(undefined2 *)(this + 0x26) = 3;
            if (*(int *)this != 0) {
              uVar1 = *(undefined4 *)this;
              pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
              WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,3,0,0);
            }
            local_11 = 0;
          }
        }
        else {
          *(undefined2 *)(this + 0x26) = 1;
        }
      }
      else {
        if ((*(short *)(this + 0x26) == 1) && (*(int *)this != 0)) {
          uVar1 = *(undefined4 *)this;
          pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,1,0,0);
        }
        *(undefined2 *)(this + 0x24) = 0;
        *(undefined2 *)(this + 0x26) = 0;
      }
      *(undefined2 *)(this + 0x1c) = *(undefined2 *)(this + 0x28);
      *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x30);
    }
  }
  return local_11;
}

```

---

## Reset

```asm
// === 0827ac7a Secu_MonsterCheck::Reset  [0x0827ac7a-0x827ad97] ===
 827ac7a:	55                   	push   %ebp
 827ac7b:	89 e5                	mov    %esp,%ebp
 827ac7d:	53                   	push   %ebx
 827ac7e:	83 ec 24             	sub    $0x24,%esp
 827ac81:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac84:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 827ac88:	66 83 f8 01          	cmp    $0x1,%ax
 827ac8c:	75 47                	jne    827acd5 <_ZN17Secu_MonsterCheck5ResetEv+0x5b>
 827ac8e:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac91:	8b 00                	mov    (%eax),%eax
 827ac93:	85 c0                	test   %eax,%eax
 827ac95:	74 3e                	je     827acd5 <_ZN17Secu_MonsterCheck5ResetEv+0x5b>
 827ac97:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac9a:	8b 18                	mov    (%eax),%ebx
 827ac9c:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac9f:	8b 00                	mov    (%eax),%eax
 827aca1:	89 04 24             	mov    %eax,(%esp)
 827aca4:	e8 b1 ec e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827aca9:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827acb0:	00 
 827acb1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827acb8:	00 
 827acb9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827acc0:	00 
 827acc1:	c7 44 24 08 df 00 00 	movl   $0xdf,0x8(%esp)
 827acc8:	00 
 827acc9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827accd:	89 04 24             	mov    %eax,(%esp)
 827acd0:	e8 a9 df e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827acd5:	8b 45 08             	mov    0x8(%ebp),%eax
 827acd8:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 827acdc:	66 83 f8 01          	cmp    $0x1,%ax
 827ace0:	75 47                	jne    827ad29 <_ZN17Secu_MonsterCheck5ResetEv+0xaf>
 827ace2:	8b 45 08             	mov    0x8(%ebp),%eax
 827ace5:	8b 00                	mov    (%eax),%eax
 827ace7:	85 c0                	test   %eax,%eax
 827ace9:	74 3e                	je     827ad29 <_ZN17Secu_MonsterCheck5ResetEv+0xaf>
 827aceb:	8b 45 08             	mov    0x8(%ebp),%eax
 827acee:	8b 18                	mov    (%eax),%ebx
 827acf0:	8b 45 08             	mov    0x8(%ebp),%eax
 827acf3:	8b 00                	mov    (%eax),%eax
 827acf5:	89 04 24             	mov    %eax,(%esp)
 827acf8:	e8 5d ec e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827acfd:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827ad04:	00 
 827ad05:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827ad0c:	00 
 827ad0d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827ad14:	00 
 827ad15:	c7 44 24 08 e0 00 00 	movl   $0xe0,0x8(%esp)
 827ad1c:	00 
 827ad1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827ad21:	89 04 24             	mov    %eax,(%esp)
 827ad24:	e8 55 df e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827ad29:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad2c:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 827ad30:	66 83 f8 01          	cmp    $0x1,%ax
 827ad34:	75 47                	jne    827ad7d <_ZN17Secu_MonsterCheck5ResetEv+0x103>
 827ad36:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad39:	8b 00                	mov    (%eax),%eax
 827ad3b:	85 c0                	test   %eax,%eax
 827ad3d:	74 3e                	je     827ad7d <_ZN17Secu_MonsterCheck5ResetEv+0x103>
 827ad3f:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad42:	8b 18                	mov    (%eax),%ebx
 827ad44:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad47:	8b 00                	mov    (%eax),%eax
 827ad49:	89 04 24             	mov    %eax,(%esp)
 827ad4c:	e8 09 ec e7 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 827ad51:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 827ad58:	00 
 827ad59:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 827ad60:	00 
 827ad61:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 827ad68:	00 
 827ad69:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 827ad70:	00 
 827ad71:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 827ad75:	89 04 24             	mov    %eax,(%esp)
 827ad78:	e8 01 df e7 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 827ad7d:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad80:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 827ad84:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad87:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 827ad8b:	8b 45 08             	mov    0x8(%ebp),%eax
 827ad8e:	c6 40 06 00          	movb   $0x0,0x6(%eax)
 827ad92:	83 c4 24             	add    $0x24,%esp
 827ad95:	5b                   	pop    %ebx
 827ad96:	5d                   	pop    %ebp
 827ad97:	c3                   	ret

```

```c
// Secu_MonsterCheck::Reset @ 0x827ac7a

/* Secu_MonsterCheck::Reset() */

void __thiscall Secu_MonsterCheck::Reset(Secu_MonsterCheck *this)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  
  if ((*(short *)(this + 0x10) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xdf,1,0,0);
  }
  if ((*(short *)(this + 0x1a) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe0,1,0,0);
  }
  if ((*(short *)(this + 0x26) == 1) && (*(int *)this != 0)) {
    uVar1 = *(undefined4 *)this;
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,uVar1,0xe1,1,0,0);
  }
  this[4] = (Secu_MonsterCheck)0x0;
  this[5] = (Secu_MonsterCheck)0x0;
  this[6] = (Secu_MonsterCheck)0x0;
  return;
}

```

---

## SetMonsterInfo

```asm
// === 0827abfa Secu_MonsterCheck::SetMonsterInfo  [0x0827abfa-0x827ac79] ===
 827abfa:	55                   	push   %ebp
 827abfb:	89 e5                	mov    %esp,%ebp
 827abfd:	83 ec 18             	sub    $0x18,%esp
 827ac00:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac03:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 827ac07:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac0a:	66 89 50 28          	mov    %dx,0x28(%eax)
 827ac0e:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac11:	0f b7 90 24 0a 00 00 	movzwl 0xa24(%eax),%edx
 827ac18:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac1b:	66 89 50 2a          	mov    %dx,0x2a(%eax)
 827ac1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac22:	0f b7 90 26 0a 00 00 	movzwl 0xa26(%eax),%edx
 827ac29:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac2c:	66 89 50 2c          	mov    %dx,0x2c(%eax)
 827ac30:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 827ac37:	e8 70 ac ec ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 827ac3c:	8b 55 08             	mov    0x8(%ebp),%edx
 827ac3f:	89 42 30             	mov    %eax,0x30(%edx)
 827ac42:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac45:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ac49:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac4c:	89 04 24             	mov    %eax,(%esp)
 827ac4f:	e8 34 06 00 00       	call   827b288 <_ZN17Secu_MonsterCheck7init223EPK15MSG_MONSTER_DIE>
 827ac54:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac57:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ac5b:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac5e:	89 04 24             	mov    %eax,(%esp)
 827ac61:	e8 7e 06 00 00       	call   827b2e4 <_ZN17Secu_MonsterCheck7init224EPK15MSG_MONSTER_DIE>
 827ac66:	8b 45 0c             	mov    0xc(%ebp),%eax
 827ac69:	89 44 24 04          	mov    %eax,0x4(%esp)
 827ac6d:	8b 45 08             	mov    0x8(%ebp),%eax
 827ac70:	89 04 24             	mov    %eax,(%esp)
 827ac73:	e8 bc 06 00 00       	call   827b334 <_ZN17Secu_MonsterCheck7init225EPK15MSG_MONSTER_DIE>
 827ac78:	c9                   	leave
 827ac79:	c3                   	ret

```

```c
// Secu_MonsterCheck::SetMonsterInfo @ 0x827abfa

/* Secu_MonsterCheck::SetMonsterInfo(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::SetMonsterInfo(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0xd);
  *(undefined2 *)(this + 0x2a) = *(undefined2 *)(param_1 + 0xa24);
  *(undefined2 *)(this + 0x2c) = *(undefined2 *)(param_1 + 0xa26);
  uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30) = uVar1;
  init223(this,param_1);
  init224(this,param_1);
  init225(this,param_1);
  return;
}

```

---

## SetUserPtr

```asm
// === 0827abec Secu_MonsterCheck::SetUserPtr  [0x0827abec-0x827abf9] ===
 827abec:	55                   	push   %ebp
 827abed:	89 e5                	mov    %esp,%ebp
 827abef:	8b 45 08             	mov    0x8(%ebp),%eax
 827abf2:	8b 55 0c             	mov    0xc(%ebp),%edx
 827abf5:	89 10                	mov    %edx,(%eax)
 827abf7:	5d                   	pop    %ebp
 827abf8:	c3                   	ret
 827abf9:	90                   	nop

```

```c
// Secu_MonsterCheck::SetUserPtr @ 0x827abec

/* Secu_MonsterCheck::SetUserPtr(CUser*) */

void __thiscall Secu_MonsterCheck::SetUserPtr(Secu_MonsterCheck *this,CUser *param_1)

{
  *(CUser **)this = param_1;
  return;
}

```

---

## init223

```asm
// === 0827b288 Secu_MonsterCheck::init223  [0x0827b288-0x827b2e3] ===
 827b288:	55                   	push   %ebp
 827b289:	89 e5                	mov    %esp,%ebp
 827b28b:	8b 45 08             	mov    0x8(%ebp),%eax
 827b28e:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 827b292:	83 f0 01             	xor    $0x1,%eax
 827b295:	84 c0                	test   %al,%al
 827b297:	74 49                	je     827b2e2 <_ZN17Secu_MonsterCheck7init223EPK15MSG_MONSTER_DIE+0x5a>
 827b299:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b29c:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 827b2a0:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2a3:	66 89 50 08          	mov    %dx,0x8(%eax)
 827b2a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b2aa:	0f b7 90 24 0a 00 00 	movzwl 0xa24(%eax),%edx
 827b2b1:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2b4:	66 89 50 0a          	mov    %dx,0xa(%eax)
 827b2b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b2bb:	0f b7 90 26 0a 00 00 	movzwl 0xa26(%eax),%edx
 827b2c2:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2c5:	66 89 50 0c          	mov    %dx,0xc(%eax)
 827b2c9:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2cc:	66 c7 40 0e 00 00    	movw   $0x0,0xe(%eax)
 827b2d2:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2d5:	66 c7 40 10 00 00    	movw   $0x0,0x10(%eax)
 827b2db:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2de:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 827b2e2:	5d                   	pop    %ebp
 827b2e3:	c3                   	ret

```

```c
// Secu_MonsterCheck::init223 @ 0x827b288

/* Secu_MonsterCheck::init223(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init223(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  if (this[4] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 8) = *(undefined2 *)(param_1 + 0xd);
    *(undefined2 *)(this + 10) = *(undefined2 *)(param_1 + 0xa24);
    *(undefined2 *)(this + 0xc) = *(undefined2 *)(param_1 + 0xa26);
    *(undefined2 *)(this + 0xe) = 0;
    *(undefined2 *)(this + 0x10) = 0;
    this[4] = (Secu_MonsterCheck)0x1;
  }
  return;
}

```

---

## init224

```asm
// === 0827b2e4 Secu_MonsterCheck::init224  [0x0827b2e4-0x827b333] ===
 827b2e4:	55                   	push   %ebp
 827b2e5:	89 e5                	mov    %esp,%ebp
 827b2e7:	83 ec 18             	sub    $0x18,%esp
 827b2ea:	8b 45 08             	mov    0x8(%ebp),%eax
 827b2ed:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 827b2f1:	83 f0 01             	xor    $0x1,%eax
 827b2f4:	84 c0                	test   %al,%al
 827b2f6:	74 39                	je     827b331 <_ZN17Secu_MonsterCheck7init224EPK15MSG_MONSTER_DIE+0x4d>
 827b2f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b2fb:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 827b2ff:	8b 45 08             	mov    0x8(%ebp),%eax
 827b302:	66 89 50 12          	mov    %dx,0x12(%eax)
 827b306:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 827b30d:	e8 9a a5 ec ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 827b312:	8b 55 08             	mov    0x8(%ebp),%edx
 827b315:	89 42 14             	mov    %eax,0x14(%edx)
 827b318:	8b 45 08             	mov    0x8(%ebp),%eax
 827b31b:	66 c7 40 18 00 00    	movw   $0x0,0x18(%eax)
 827b321:	8b 45 08             	mov    0x8(%ebp),%eax
 827b324:	66 c7 40 1a 00 00    	movw   $0x0,0x1a(%eax)
 827b32a:	8b 45 08             	mov    0x8(%ebp),%eax
 827b32d:	c6 40 05 01          	movb   $0x1,0x5(%eax)
 827b331:	c9                   	leave
 827b332:	c3                   	ret
 827b333:	90                   	nop

```

```c
// Secu_MonsterCheck::init224 @ 0x827b2e4

/* Secu_MonsterCheck::init224(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init224(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  if (this[5] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 0x12) = *(undefined2 *)(param_1 + 0xd);
    uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x14) = uVar1;
    *(undefined2 *)(this + 0x18) = 0;
    *(undefined2 *)(this + 0x1a) = 0;
    this[5] = (Secu_MonsterCheck)0x1;
  }
  return;
}

```

---

## init225

```asm
// === 0827b334 Secu_MonsterCheck::init225  [0x0827b334-0x827b382] ===
 827b334:	55                   	push   %ebp
 827b335:	89 e5                	mov    %esp,%ebp
 827b337:	83 ec 18             	sub    $0x18,%esp
 827b33a:	8b 45 08             	mov    0x8(%ebp),%eax
 827b33d:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 827b341:	83 f0 01             	xor    $0x1,%eax
 827b344:	84 c0                	test   %al,%al
 827b346:	74 39                	je     827b381 <_ZN17Secu_MonsterCheck7init225EPK15MSG_MONSTER_DIE+0x4d>
 827b348:	8b 45 0c             	mov    0xc(%ebp),%eax
 827b34b:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 827b34f:	8b 45 08             	mov    0x8(%ebp),%eax
 827b352:	66 89 50 1c          	mov    %dx,0x1c(%eax)
 827b356:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 827b35d:	e8 4a a5 ec ff       	call   81458ac <_ZN11CSystemTime15getCurTickCountEv>
 827b362:	8b 55 08             	mov    0x8(%ebp),%edx
 827b365:	89 42 20             	mov    %eax,0x20(%edx)
 827b368:	8b 45 08             	mov    0x8(%ebp),%eax
 827b36b:	66 c7 40 24 00 00    	movw   $0x0,0x24(%eax)
 827b371:	8b 45 08             	mov    0x8(%ebp),%eax
 827b374:	66 c7 40 26 00 00    	movw   $0x0,0x26(%eax)
 827b37a:	8b 45 08             	mov    0x8(%ebp),%eax
 827b37d:	c6 40 06 01          	movb   $0x1,0x6(%eax)
 827b381:	c9                   	leave
 827b382:	c3                   	ret

```

```c
// Secu_MonsterCheck::init225 @ 0x827b334

/* Secu_MonsterCheck::init225(MSG_MONSTER_DIE const*) */

void __thiscall Secu_MonsterCheck::init225(Secu_MonsterCheck *this,MSG_MONSTER_DIE *param_1)

{
  undefined4 uVar1;
  
  if (this[6] != (Secu_MonsterCheck)0x1) {
    *(undefined2 *)(this + 0x1c) = *(undefined2 *)(param_1 + 0xd);
    uVar1 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
    *(undefined4 *)(this + 0x20) = uVar1;
    *(undefined2 *)(this + 0x24) = 0;
    *(undefined2 *)(this + 0x26) = 0;
    this[6] = (Secu_MonsterCheck)0x1;
  }
  return;
}

```


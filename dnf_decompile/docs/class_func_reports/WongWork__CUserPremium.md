# WongWork__CUserPremium

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## AddPremium

```asm
// === 086adad2 WongWork::CUserPremium::AddPremium  [0x086adad2-0x86adba5] ===
 86adad2:	55                   	push   %ebp
 86adad3:	89 e5                	mov    %esp,%ebp
 86adad5:	83 ec 18             	sub    $0x18,%esp
 86adad8:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adadb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adade:	89 d0                	mov    %edx,%eax
 86adae0:	c1 e0 02             	shl    $0x2,%eax
 86adae3:	01 d0                	add    %edx,%eax
 86adae5:	c1 e0 02             	shl    $0x2,%eax
 86adae8:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86adaeb:	85 c0                	test   %eax,%eax
 86adaed:	74 12                	je     86adb01 <_ZN8WongWork12CUserPremium10AddPremiumEiiii+0x2f>
 86adaef:	8b 45 0c             	mov    0xc(%ebp),%eax
 86adaf2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86adaf6:	8b 45 08             	mov    0x8(%ebp),%eax
 86adaf9:	89 04 24             	mov    %eax,(%esp)
 86adafc:	e8 a5 00 00 00       	call   86adba6 <_ZN8WongWork12CUserPremium13RemovePremiumEi>
 86adb01:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb04:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adb07:	89 d0                	mov    %edx,%eax
 86adb09:	c1 e0 02             	shl    $0x2,%eax
 86adb0c:	01 d0                	add    %edx,%eax
 86adb0e:	c1 e0 02             	shl    $0x2,%eax
 86adb11:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb14:	89 14 08             	mov    %edx,(%eax,%ecx,1)
 86adb17:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb1a:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adb1d:	89 d0                	mov    %edx,%eax
 86adb1f:	c1 e0 02             	shl    $0x2,%eax
 86adb22:	01 d0                	add    %edx,%eax
 86adb24:	c1 e0 02             	shl    $0x2,%eax
 86adb27:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adb2a:	8d 50 04             	lea    0x4(%eax),%edx
 86adb2d:	8b 45 10             	mov    0x10(%ebp),%eax
 86adb30:	89 02                	mov    %eax,(%edx)
 86adb32:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb35:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adb38:	89 d0                	mov    %edx,%eax
 86adb3a:	c1 e0 02             	shl    $0x2,%eax
 86adb3d:	01 d0                	add    %edx,%eax
 86adb3f:	c1 e0 02             	shl    $0x2,%eax
 86adb42:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adb45:	8d 50 08             	lea    0x8(%eax),%edx
 86adb48:	8b 45 14             	mov    0x14(%ebp),%eax
 86adb4b:	89 02                	mov    %eax,(%edx)
 86adb4d:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb50:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adb53:	89 d0                	mov    %edx,%eax
 86adb55:	c1 e0 02             	shl    $0x2,%eax
 86adb58:	01 d0                	add    %edx,%eax
 86adb5a:	c1 e0 02             	shl    $0x2,%eax
 86adb5d:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adb60:	8d 50 0c             	lea    0xc(%eax),%edx
 86adb63:	8b 45 18             	mov    0x18(%ebp),%eax
 86adb66:	89 02                	mov    %eax,(%edx)
 86adb68:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adb6b:	89 d0                	mov    %edx,%eax
 86adb6d:	c1 e0 03             	shl    $0x3,%eax
 86adb70:	01 d0                	add    %edx,%eax
 86adb72:	c1 e0 05             	shl    $0x5,%eax
 86adb75:	8b 80 ec 3a 48 09    	mov    0x9483aec(%eax),%eax
 86adb7b:	83 f8 ff             	cmp    $0xffffffff,%eax
 86adb7e:	74 0a                	je     86adb8a <_ZN8WongWork12CUserPremium10AddPremiumEiiii+0xb8>
 86adb80:	8b 45 08             	mov    0x8(%ebp),%eax
 86adb83:	c6 80 62 08 00 00 01 	movb   $0x1,0x862(%eax)
 86adb8a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86adb91:	00 
 86adb92:	8b 45 0c             	mov    0xc(%ebp),%eax
 86adb95:	89 44 24 04          	mov    %eax,0x4(%esp)
 86adb99:	8b 45 08             	mov    0x8(%ebp),%eax
 86adb9c:	89 04 24             	mov    %eax,(%esp)
 86adb9f:	e8 c6 00 00 00       	call   86adc6a <_ZN8WongWork12CUserPremium12startPremiumEib>
 86adba4:	c9                   	leave
 86adba5:	c3                   	ret

```

```c
// WongWork::CUserPremium::AddPremium @ 0x86adad2

/* WongWork::CUserPremium::AddPremium(int, int, int, int) */

void __thiscall
WongWork::CUserPremium::AddPremium
          (CUserPremium *this,int param_1,int param_2,int param_3,int param_4)

{
  if (*(int *)(this + param_1 * 0x14) != 0) {
    RemovePremium(this,param_1);
  }
  *(int *)(this + param_1 * 0x14) = param_1;
  *(int *)(this + param_1 * 0x14 + 4) = param_2;
  *(int *)(this + param_1 * 0x14 + 8) = param_3;
  *(int *)(this + param_1 * 0x14 + 0xc) = param_4;
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 0xac) != -1) {
    this[0x862] = (CUserPremium)0x1;
  }
  startPremium(this,param_1,true);
  return;
}

```

---

## CheckPremiumTimeout

```asm
// === 086add9c WongWork::CUserPremium::CheckPremiumTimeout  [0x086add9c-0x86ade9b] ===
 86add9c:	55                   	push   %ebp
 86add9d:	89 e5                	mov    %esp,%ebp
 86add9f:	53                   	push   %ebx
 86adda0:	83 ec 24             	sub    $0x24,%esp
 86adda3:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86adda6:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86addad:	e8 ec de a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86addb2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86addb5:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 86addbb:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 86addc2:	e9 ba 00 00 00       	jmp    86ade81 <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xe5>
 86addc7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86addca:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86addcd:	89 d0                	mov    %edx,%eax
 86addcf:	c1 e0 02             	shl    $0x2,%eax
 86addd2:	01 d0                	add    %edx,%eax
 86addd4:	c1 e0 02             	shl    $0x2,%eax
 86addd7:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86addda:	85 c0                	test   %eax,%eax
 86adddc:	0f 84 94 00 00 00    	je     86ade76 <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xda>
 86adde2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86adde5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adde8:	89 d0                	mov    %edx,%eax
 86addea:	c1 e0 02             	shl    $0x2,%eax
 86added:	01 d0                	add    %edx,%eax
 86addef:	c1 e0 02             	shl    $0x2,%eax
 86addf2:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86addf5:	89 d0                	mov    %edx,%eax
 86addf7:	c1 e0 03             	shl    $0x3,%eax
 86addfa:	01 d0                	add    %edx,%eax
 86addfc:	c1 e0 05             	shl    $0x5,%eax
 86addff:	8b 80 44 3a 48 09    	mov    0x9483a44(%eax),%eax
 86ade05:	85 c0                	test   %eax,%eax
 86ade07:	74 70                	je     86ade79 <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xdd>
 86ade09:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ade0c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86ade0f:	89 d0                	mov    %edx,%eax
 86ade11:	c1 e0 02             	shl    $0x2,%eax
 86ade14:	01 d0                	add    %edx,%eax
 86ade16:	c1 e0 02             	shl    $0x2,%eax
 86ade19:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86ade1c:	83 c0 10             	add    $0x10,%eax
 86ade1f:	8b 00                	mov    (%eax),%eax
 86ade21:	83 f8 03             	cmp    $0x3,%eax
 86ade24:	74 56                	je     86ade7c <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xe0>
 86ade26:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ade29:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86ade2c:	89 d0                	mov    %edx,%eax
 86ade2e:	c1 e0 02             	shl    $0x2,%eax
 86ade31:	01 d0                	add    %edx,%eax
 86ade33:	c1 e0 02             	shl    $0x2,%eax
 86ade36:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86ade39:	83 c0 08             	add    $0x8,%eax
 86ade3c:	8b 00                	mov    (%eax),%eax
 86ade3e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86ade41:	7f 3a                	jg     86ade7d <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xe1>
 86ade43:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86ade46:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ade49:	89 c8                	mov    %ecx,%eax
 86ade4b:	c1 e0 02             	shl    $0x2,%eax
 86ade4e:	01 c8                	add    %ecx,%eax
 86ade50:	c1 e0 02             	shl    $0x2,%eax
 86ade53:	8b 0c 10             	mov    (%eax,%edx,1),%ecx
 86ade56:	89 0b                	mov    %ecx,(%ebx)
 86ade58:	8b 4c 10 04          	mov    0x4(%eax,%edx,1),%ecx
 86ade5c:	89 4b 04             	mov    %ecx,0x4(%ebx)
 86ade5f:	8b 4c 10 08          	mov    0x8(%eax,%edx,1),%ecx
 86ade63:	89 4b 08             	mov    %ecx,0x8(%ebx)
 86ade66:	8b 4c 10 0c          	mov    0xc(%eax,%edx,1),%ecx
 86ade6a:	89 4b 0c             	mov    %ecx,0xc(%ebx)
 86ade6d:	8b 44 10 10          	mov    0x10(%eax,%edx,1),%eax
 86ade71:	89 43 10             	mov    %eax,0x10(%ebx)
 86ade74:	eb 1b                	jmp    86ade91 <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xf5>
 86ade76:	90                   	nop
 86ade77:	eb 04                	jmp    86ade7d <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xe1>
 86ade79:	90                   	nop
 86ade7a:	eb 01                	jmp    86ade7d <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0xe1>
 86ade7c:	90                   	nop
 86ade7d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ade81:	83 7d f4 69          	cmpl   $0x69,-0xc(%ebp)
 86ade85:	0f 9e c0             	setle  %al
 86ade88:	84 c0                	test   %al,%al
 86ade8a:	0f 85 37 ff ff ff    	jne    86addc7 <_ZNK8WongWork12CUserPremium19CheckPremiumTimeoutEv+0x2b>
 86ade90:	90                   	nop
 86ade91:	89 d8                	mov    %ebx,%eax
 86ade93:	83 c4 24             	add    $0x24,%esp
 86ade96:	5b                   	pop    %ebx
 86ade97:	5d                   	pop    %ebp
 86ade98:	c2 04 00             	ret    $0x4
 86ade9b:	90                   	nop

```

```c
// WongWork::CUserPremium::CheckPremiumTimeout @ 0x86add9c

/* WongWork::CUserPremium::CheckPremiumTimeout() const */

undefined4 * WongWork::CUserPremium::CheckPremiumTimeout(void)

{
  int iVar1;
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  int local_10;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *in_stack_00000004 = 0;
  local_10 = 1;
  while( true ) {
    if (0x69 < local_10) {
      return in_stack_00000004;
    }
    if ((((*(int *)(local_10 * 0x14 + in_stack_00000008) != 0) &&
         (*(int *)(g_SPremiumInfo + *(int *)(local_10 * 0x14 + in_stack_00000008) * 0x120 + 4) != 0)
         ) && (*(int *)(in_stack_00000008 + local_10 * 0x14 + 0x10) != 3)) &&
       (*(int *)(in_stack_00000008 + local_10 * 0x14 + 8) <= iVar1)) break;
    local_10 = local_10 + 1;
  }
  local_10 = local_10 * 0x14;
  *in_stack_00000004 = *(undefined4 *)(local_10 + in_stack_00000008);
  in_stack_00000004[1] = *(undefined4 *)(local_10 + 4 + in_stack_00000008);
  in_stack_00000004[2] = *(undefined4 *)(local_10 + 8 + in_stack_00000008);
  in_stack_00000004[3] = *(undefined4 *)(local_10 + 0xc + in_stack_00000008);
  in_stack_00000004[4] = *(undefined4 *)(local_10 + 0x10 + in_stack_00000008);
  return in_stack_00000004;
}

```

---

## GetAdvantageItem

```asm
// === 086adf7c WongWork::CUserPremium::GetAdvantageItem  [0x086adf7c-0x86ae10d] ===
 86adf7c:	55                   	push   %ebp
 86adf7d:	89 e5                	mov    %esp,%ebp
 86adf7f:	57                   	push   %edi
 86adf80:	56                   	push   %esi
 86adf81:	53                   	push   %ebx
 86adf82:	83 ec 5c             	sub    $0x5c,%esp
 86adf85:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86adf88:	89 d8                	mov    %ebx,%eax
 86adf8a:	89 04 24             	mov    %eax,(%esp)
 86adf8d:	e8 44 6a a8 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 86adf92:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86adf99:	e8 00 dd a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86adf9e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86adfa1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86adfa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86adfa8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86adfab:	89 04 24             	mov    %eax,(%esp)
 86adfae:	e8 ad 03 9d ff       	call   807e360 <localtime_r@plt>
 86adfb3:	8b 55 10             	mov    0x10(%ebp),%edx
 86adfb6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adfb9:	89 d0                	mov    %edx,%eax
 86adfbb:	c1 e0 02             	shl    $0x2,%eax
 86adfbe:	01 d0                	add    %edx,%eax
 86adfc0:	c1 e0 02             	shl    $0x2,%eax
 86adfc3:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86adfc6:	85 c0                	test   %eax,%eax
 86adfc8:	0f 84 2a 01 00 00    	je     86ae0f8 <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x17c>
 86adfce:	8b 55 10             	mov    0x10(%ebp),%edx
 86adfd1:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adfd4:	89 d0                	mov    %edx,%eax
 86adfd6:	c1 e0 02             	shl    $0x2,%eax
 86adfd9:	01 d0                	add    %edx,%eax
 86adfdb:	c1 e0 02             	shl    $0x2,%eax
 86adfde:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86adfe1:	83 f8 69             	cmp    $0x69,%eax
 86adfe4:	0f 8f 11 01 00 00    	jg     86ae0fb <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x17f>
 86adfea:	8b 55 10             	mov    0x10(%ebp),%edx
 86adfed:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adff0:	89 d0                	mov    %edx,%eax
 86adff2:	c1 e0 02             	shl    $0x2,%eax
 86adff5:	01 d0                	add    %edx,%eax
 86adff7:	c1 e0 02             	shl    $0x2,%eax
 86adffa:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86adffd:	89 d0                	mov    %edx,%eax
 86adfff:	c1 e0 03             	shl    $0x3,%eax
 86ae002:	01 d0                	add    %edx,%eax
 86ae004:	c1 e0 05             	shl    $0x5,%eax
 86ae007:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 86ae00d:	83 f8 01             	cmp    $0x1,%eax
 86ae010:	0f 85 e8 00 00 00    	jne    86ae0fe <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x182>
 86ae016:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86ae01d:	e9 ab 00 00 00       	jmp    86ae0cd <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x151>
 86ae022:	8b 55 10             	mov    0x10(%ebp),%edx
 86ae025:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86ae028:	89 d0                	mov    %edx,%eax
 86ae02a:	c1 e0 02             	shl    $0x2,%eax
 86ae02d:	01 d0                	add    %edx,%eax
 86ae02f:	c1 e0 02             	shl    $0x2,%eax
 86ae032:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae035:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 86ae038:	89 d0                	mov    %edx,%eax
 86ae03a:	c1 e0 03             	shl    $0x3,%eax
 86ae03d:	01 d0                	add    %edx,%eax
 86ae03f:	c1 e0 02             	shl    $0x2,%eax
 86ae042:	01 c8                	add    %ecx,%eax
 86ae044:	8b 04 c5 4c 3a 48 09 	mov    0x9483a4c(,%eax,8),%eax
 86ae04b:	85 c0                	test   %eax,%eax
 86ae04d:	75 06                	jne    86ae055 <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0xd9>
 86ae04f:	90                   	nop
 86ae050:	e9 aa 00 00 00       	jmp    86ae0ff <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x183>
 86ae055:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ae058:	89 04 24             	mov    %eax,(%esp)
 86ae05b:	e8 2e 7c b0 ff       	call   81b5c8e <_ZNSt4pairIiiEC1Ev>
 86ae060:	8b 55 10             	mov    0x10(%ebp),%edx
 86ae063:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86ae066:	89 d0                	mov    %edx,%eax
 86ae068:	c1 e0 02             	shl    $0x2,%eax
 86ae06b:	01 d0                	add    %edx,%eax
 86ae06d:	c1 e0 02             	shl    $0x2,%eax
 86ae070:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae073:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 86ae076:	89 d0                	mov    %edx,%eax
 86ae078:	c1 e0 03             	shl    $0x3,%eax
 86ae07b:	01 d0                	add    %edx,%eax
 86ae07d:	c1 e0 02             	shl    $0x2,%eax
 86ae080:	01 c8                	add    %ecx,%eax
 86ae082:	8b 04 c5 4c 3a 48 09 	mov    0x9483a4c(,%eax,8),%eax
 86ae089:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86ae08c:	8b 55 10             	mov    0x10(%ebp),%edx
 86ae08f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86ae092:	89 d0                	mov    %edx,%eax
 86ae094:	c1 e0 02             	shl    $0x2,%eax
 86ae097:	01 d0                	add    %edx,%eax
 86ae099:	c1 e0 02             	shl    $0x2,%eax
 86ae09c:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae09f:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 86ae0a2:	89 d0                	mov    %edx,%eax
 86ae0a4:	c1 e0 03             	shl    $0x3,%eax
 86ae0a7:	01 d0                	add    %edx,%eax
 86ae0a9:	c1 e0 02             	shl    $0x2,%eax
 86ae0ac:	01 c8                	add    %ecx,%eax
 86ae0ae:	8b 04 c5 50 3a 48 09 	mov    0x9483a50(,%eax,8),%eax
 86ae0b5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86ae0b8:	89 d8                	mov    %ebx,%eax
 86ae0ba:	8d 55 d8             	lea    -0x28(%ebp),%edx
 86ae0bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae0c1:	89 04 24             	mov    %eax,(%esp)
 86ae0c4:	e8 a7 19 c6 ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 86ae0c9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86ae0cd:	83 7d e4 04          	cmpl   $0x4,-0x1c(%ebp)
 86ae0d1:	0f 9e c0             	setle  %al
 86ae0d4:	84 c0                	test   %al,%al
 86ae0d6:	0f 85 46 ff ff ff    	jne    86ae022 <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0xa6>
 86ae0dc:	eb 21                	jmp    86ae0ff <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x183>
 86ae0de:	89 d6                	mov    %edx,%esi
 86ae0e0:	89 c7                	mov    %eax,%edi
 86ae0e2:	89 d8                	mov    %ebx,%eax
 86ae0e4:	89 04 24             	mov    %eax,(%esp)
 86ae0e7:	e8 fe 68 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86ae0ec:	89 f8                	mov    %edi,%eax
 86ae0ee:	89 f2                	mov    %esi,%edx
 86ae0f0:	89 04 24             	mov    %eax,(%esp)
 86ae0f3:	e8 58 56 43 00       	call   8ae3750 <_Unwind_Resume>
 86ae0f8:	90                   	nop
 86ae0f9:	eb 04                	jmp    86ae0ff <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x183>
 86ae0fb:	90                   	nop
 86ae0fc:	eb 01                	jmp    86ae0ff <_ZN8WongWork12CUserPremium16GetAdvantageItemEi+0x183>
 86ae0fe:	90                   	nop
 86ae0ff:	89 d8                	mov    %ebx,%eax
 86ae101:	89 d8                	mov    %ebx,%eax
 86ae103:	83 c4 5c             	add    $0x5c,%esp
 86ae106:	5b                   	pop    %ebx
 86ae107:	5e                   	pop    %esi
 86ae108:	5f                   	pop    %edi
 86ae109:	5d                   	pop    %ebp
 86ae10a:	c2 04 00             	ret    $0x4
 86ae10d:	90                   	nop

```

```c
// WongWork::CUserPremium::GetAdvantageItem @ 0x86adf7c

/* WongWork::CUserPremium::GetAdvantageItem(int) */

int WongWork::CUserPremium::GetAdvantageItem(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  tm local_58;
  undefined4 local_2c;
  undefined4 local_28;
  time_t local_24;
  int local_20;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_24,&local_58);
  if (((*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) != 0) &&
      (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) < 0x6a)) &&
     (*(int *)(g_SPremiumInfo + *(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x120) == 1
     )) {
    local_20 = 0;
    while ((local_20 < 5 &&
           (*(int *)(g_SPremiumInfo +
                    (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                    0xc) != 0))) {
      std::pair<int,int>::pair((pair<int,int> *)&local_2c);
      local_2c = *(undefined4 *)
                  (g_SPremiumInfo +
                  (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                  0xc);
      local_28 = *(undefined4 *)
                  (g_SPremiumInfo +
                  (*(int *)(in_stack_0000000c * 0x14 + in_stack_00000008) * 0x24 + local_20) * 8 +
                  0x10);
                    /* try { // try from 086ae0c4 to 086ae0c8 has its CatchHandler @ 086ae0de */
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                 (pair *)&local_2c);
      local_20 = local_20 + 1;
    }
  }
  return param_1;
}

```

---

## GetPremiumInfo

```asm
// === 086adf52 WongWork::CUserPremium::GetPremiumInfo  [0x086adf52-0x86adf7b] ===
 86adf52:	55                   	push   %ebp
 86adf53:	89 e5                	mov    %esp,%ebp
 86adf55:	83 7d 0c 69          	cmpl   $0x69,0xc(%ebp)
 86adf59:	7f 09                	jg     86adf64 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi+0x12>
 86adf5b:	81 7d 0c 0f 27 00 00 	cmpl   $0x270f,0xc(%ebp)
 86adf62:	75 05                	jne    86adf69 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi+0x17>
 86adf64:	8b 45 08             	mov    0x8(%ebp),%eax
 86adf67:	eb 10                	jmp    86adf79 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi+0x27>
 86adf69:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adf6c:	89 d0                	mov    %edx,%eax
 86adf6e:	c1 e0 02             	shl    $0x2,%eax
 86adf71:	01 d0                	add    %edx,%eax
 86adf73:	c1 e0 02             	shl    $0x2,%eax
 86adf76:	03 45 08             	add    0x8(%ebp),%eax
 86adf79:	5d                   	pop    %ebp
 86adf7a:	c3                   	ret
 86adf7b:	90                   	nop

```

```c
// WongWork::CUserPremium::GetPremiumInfo @ 0x86adf52

/* WongWork::CUserPremium::GetPremiumInfo(int) const */

CUserPremium * __thiscall WongWork::CUserPremium::GetPremiumInfo(CUserPremium *this,int param_1)

{
  if ((param_1 < 0x6a) && (param_1 != 9999)) {
    this = this + param_1 * 0x14;
  }
  return this;
}

```

---

## GetPremiumInfoList

```asm
// === 086ade9c WongWork::CUserPremium::GetPremiumInfoList  [0x086ade9c-0x86adf51] ===
 86ade9c:	55                   	push   %ebp
 86ade9d:	89 e5                	mov    %esp,%ebp
 86ade9f:	57                   	push   %edi
 86adea0:	56                   	push   %esi
 86adea1:	53                   	push   %ebx
 86adea2:	83 ec 2c             	sub    $0x2c,%esp
 86adea5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86adea8:	89 d8                	mov    %ebx,%eax
 86adeaa:	89 04 24             	mov    %eax,(%esp)
 86adead:	e8 44 a6 c7 ff       	call   83284f6 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EEC1Ev>
 86adeb2:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 86adeb9:	eb 62                	jmp    86adf1d <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x81>
 86adebb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86adebe:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adec1:	89 d0                	mov    %edx,%eax
 86adec3:	c1 e0 02             	shl    $0x2,%eax
 86adec6:	01 d0                	add    %edx,%eax
 86adec8:	c1 e0 02             	shl    $0x2,%eax
 86adecb:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86adece:	85 c0                	test   %eax,%eax
 86aded0:	74 43                	je     86adf15 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x79>
 86aded2:	81 7d 10 0f 27 00 00 	cmpl   $0x270f,0x10(%ebp)
 86aded9:	74 18                	je     86adef3 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x57>
 86adedb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86adede:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 86adee1:	89 d0                	mov    %edx,%eax
 86adee3:	c1 e0 02             	shl    $0x2,%eax
 86adee6:	01 d0                	add    %edx,%eax
 86adee8:	c1 e0 02             	shl    $0x2,%eax
 86adeeb:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86adeee:	3b 45 10             	cmp    0x10(%ebp),%eax
 86adef1:	75 25                	jne    86adf18 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x7c>
 86adef3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86adef6:	89 d0                	mov    %edx,%eax
 86adef8:	c1 e0 02             	shl    $0x2,%eax
 86adefb:	01 d0                	add    %edx,%eax
 86adefd:	c1 e0 02             	shl    $0x2,%eax
 86adf00:	89 c2                	mov    %eax,%edx
 86adf02:	03 55 0c             	add    0xc(%ebp),%edx
 86adf05:	89 d8                	mov    %ebx,%eax
 86adf07:	89 54 24 04          	mov    %edx,0x4(%esp)
 86adf0b:	89 04 24             	mov    %eax,(%esp)
 86adf0e:	e8 55 a6 c7 ff       	call   8328568 <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EE9push_backERKS1_>
 86adf13:	eb 04                	jmp    86adf19 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x7d>
 86adf15:	90                   	nop
 86adf16:	eb 01                	jmp    86adf19 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x7d>
 86adf18:	90                   	nop
 86adf19:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86adf1d:	83 7d e4 69          	cmpl   $0x69,-0x1c(%ebp)
 86adf21:	0f 9e c0             	setle  %al
 86adf24:	84 c0                	test   %al,%al
 86adf26:	75 93                	jne    86adebb <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0x1f>
 86adf28:	eb 1a                	jmp    86adf44 <_ZNK8WongWork12CUserPremium18GetPremiumInfoListEi+0xa8>
 86adf2a:	89 d6                	mov    %edx,%esi
 86adf2c:	89 c7                	mov    %eax,%edi
 86adf2e:	89 d8                	mov    %ebx,%eax
 86adf30:	89 04 24             	mov    %eax,(%esp)
 86adf33:	e8 d2 a5 c7 ff       	call   832850a <_ZNSt6vectorIN8WongWork16SUserPremiumInfoESaIS1_EED1Ev>
 86adf38:	89 f8                	mov    %edi,%eax
 86adf3a:	89 f2                	mov    %esi,%edx
 86adf3c:	89 04 24             	mov    %eax,(%esp)
 86adf3f:	e8 0c 58 43 00       	call   8ae3750 <_Unwind_Resume>
 86adf44:	89 d8                	mov    %ebx,%eax
 86adf46:	89 d8                	mov    %ebx,%eax
 86adf48:	83 c4 2c             	add    $0x2c,%esp
 86adf4b:	5b                   	pop    %ebx
 86adf4c:	5e                   	pop    %esi
 86adf4d:	5f                   	pop    %edi
 86adf4e:	5d                   	pop    %ebp
 86adf4f:	c2 04 00             	ret    $0x4

```

```c
// WongWork::CUserPremium::GetPremiumInfoList @ 0x86ade9c

/* WongWork::CUserPremium::GetPremiumInfoList(int) const */

int WongWork::CUserPremium::GetPremiumInfoList(int param_1)

{
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_20;
  
  std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::vector
            ((vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> *)
             param_1);
  for (local_20 = 1; local_20 < 0x6a; local_20 = local_20 + 1) {
    if ((*(int *)(local_20 * 0x14 + in_stack_00000008) != 0) &&
       ((in_stack_0000000c == 9999 ||
        (*(int *)(local_20 * 0x14 + in_stack_00000008) == in_stack_0000000c)))) {
                    /* try { // try from 086adf0e to 086adf12 has its CatchHandler @ 086adf2a */
      std::vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>>::push_back
                ((vector<WongWork::SUserPremiumInfo,std::allocator<WongWork::SUserPremiumInfo>> *)
                 param_1,(SUserPremiumInfo *)(local_20 * 0x14 + in_stack_00000008));
    }
  }
  return param_1;
}

```

---

## GetReturnItemRate

```asm
// === 086ae7a8 WongWork::CUserPremium::GetReturnItemRate  [0x086ae7a8-0x86ae833] ===
 86ae7a8:	55                   	push   %ebp
 86ae7a9:	89 e5                	mov    %esp,%ebp
 86ae7ab:	83 ec 28             	sub    $0x28,%esp
 86ae7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae7b1:	05 64 09 00 00       	add    $0x964,%eax
 86ae7b6:	89 04 24             	mov    %eax,(%esp)
 86ae7b9:	e8 02 bc c4 ff       	call   82fa3c0 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5emptyEv>
 86ae7be:	84 c0                	test   %al,%al
 86ae7c0:	74 07                	je     86ae7c9 <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi+0x21>
 86ae7c2:	b8 00 00 00 00       	mov    $0x0,%eax
 86ae7c7:	eb 68                	jmp    86ae831 <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi+0x89>
 86ae7c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae7cc:	8d 88 64 09 00 00    	lea    0x964(%eax),%ecx
 86ae7d2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86ae7d5:	8d 55 0c             	lea    0xc(%ebp),%edx
 86ae7d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ae7dc:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ae7e0:	89 04 24             	mov    %eax,(%esp)
 86ae7e3:	e8 c2 86 a1 ff       	call   80c6eaa <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 86ae7e8:	83 ec 04             	sub    $0x4,%esp
 86ae7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae7ee:	8d 90 64 09 00 00    	lea    0x964(%eax),%edx
 86ae7f4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86ae7f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae7fb:	89 04 24             	mov    %eax,(%esp)
 86ae7fe:	e8 d3 86 a1 ff       	call   80c6ed6 <_ZNKSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 86ae803:	83 ec 04             	sub    $0x4,%esp
 86ae806:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86ae809:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae80d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86ae810:	89 04 24             	mov    %eax,(%esp)
 86ae813:	e8 e4 86 a1 ff       	call   80c6efc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEneERKS3_>
 86ae818:	84 c0                	test   %al,%al
 86ae81a:	74 10                	je     86ae82c <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi+0x84>
 86ae81c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86ae81f:	89 04 24             	mov    %eax,(%esp)
 86ae822:	e8 e9 86 a1 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 86ae827:	8b 40 04             	mov    0x4(%eax),%eax
 86ae82a:	eb 05                	jmp    86ae831 <_ZNK8WongWork12CUserPremium17GetReturnItemRateEi+0x89>
 86ae82c:	b8 00 00 00 00       	mov    $0x0,%eax
 86ae831:	c9                   	leave
 86ae832:	c3                   	ret
 86ae833:	90                   	nop

```

```c
// WongWork::CUserPremium::GetReturnItemRate @ 0x86ae7a8

/* WongWork::CUserPremium::GetReturnItemRate(int) const */

undefined4 WongWork::CUserPremium::GetReturnItemRate(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                     (param_1 + 0x964));
  if (cVar1 == '\0') {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator!=
                      (local_14,(_Rb_tree_const_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->(local_14);
      uVar2 = *(undefined4 *)(iVar3 + 4);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## InitPremium

```asm
// === 086ad9e8 WongWork::CUserPremium::InitPremium  [0x086ad9e8-0x86adad1] ===
 86ad9e8:	55                   	push   %ebp
 86ad9e9:	89 e5                	mov    %esp,%ebp
 86ad9eb:	83 ec 18             	sub    $0x18,%esp
 86ad9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad9f1:	c7 44 24 08 48 08 00 	movl   $0x848,0x8(%esp)
 86ad9f8:	00 
 86ad9f9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ada00:	00 
 86ada01:	89 04 24             	mov    %eax,(%esp)
 86ada04:	e8 b7 02 9d ff       	call   807dcc0 <memset@plt>
 86ada09:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada0c:	c7 80 48 08 00 00 00 	movl   $0x0,0x848(%eax)
 86ada13:	00 00 00 
 86ada16:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada19:	c7 80 4c 08 00 00 00 	movl   $0x0,0x84c(%eax)
 86ada20:	00 00 00 
 86ada23:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada26:	66 c7 80 50 08 00 00 	movw   $0x0,0x850(%eax)
 86ada2d:	00 00 
 86ada2f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada32:	c7 80 54 08 00 00 00 	movl   $0x0,0x854(%eax)
 86ada39:	00 00 00 
 86ada3c:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada3f:	c7 80 58 08 00 00 00 	movl   $0x0,0x858(%eax)
 86ada46:	00 00 00 
 86ada49:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada4c:	c6 80 5c 08 00 00 00 	movb   $0x0,0x85c(%eax)
 86ada53:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada56:	66 c7 80 5e 08 00 00 	movw   $0x0,0x85e(%eax)
 86ada5d:	00 00 
 86ada5f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada62:	66 c7 80 60 08 00 00 	movw   $0x0,0x860(%eax)
 86ada69:	00 00 
 86ada6b:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada6e:	c6 80 62 08 00 00 00 	movb   $0x0,0x862(%eax)
 86ada75:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada78:	05 64 08 00 00       	add    $0x864,%eax
 86ada7d:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 86ada84:	00 
 86ada85:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ada8c:	00 
 86ada8d:	89 04 24             	mov    %eax,(%esp)
 86ada90:	e8 2b 02 9d ff       	call   807dcc0 <memset@plt>
 86ada95:	8b 45 08             	mov    0x8(%ebp),%eax
 86ada98:	c6 80 bc 08 00 00 00 	movb   $0x0,0x8bc(%eax)
 86ada9f:	8b 45 08             	mov    0x8(%ebp),%eax
 86adaa2:	05 bd 08 00 00       	add    $0x8bd,%eax
 86adaa7:	89 04 24             	mov    %eax,(%esp)
 86adaaa:	e8 b9 a7 c9 ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 86adaaf:	8b 45 08             	mov    0x8(%ebp),%eax
 86adab2:	05 0f 09 00 00       	add    $0x90f,%eax
 86adab7:	89 04 24             	mov    %eax,(%esp)
 86adaba:	e8 a9 a7 c9 ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 86adabf:	8b 45 08             	mov    0x8(%ebp),%eax
 86adac2:	05 64 09 00 00       	add    $0x964,%eax
 86adac7:	89 04 24             	mov    %eax,(%esp)
 86adaca:	e8 0f 92 a1 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 86adacf:	c9                   	leave
 86adad0:	c3                   	ret
 86adad1:	90                   	nop

```

```c
// WongWork::CUserPremium::InitPremium @ 0x86ad9e8

/* WongWork::CUserPremium::InitPremium() */

void __thiscall WongWork::CUserPremium::InitPremium(CUserPremium *this)

{
  memset(this,0,0x848);
  *(undefined4 *)(this + 0x848) = 0;
  *(undefined4 *)(this + 0x84c) = 0;
  *(undefined2 *)(this + 0x850) = 0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x858) = 0;
  this[0x85c] = (CUserPremium)0x0;
  *(undefined2 *)(this + 0x85e) = 0;
  *(undefined2 *)(this + 0x860) = 0;
  this[0x862] = (CUserPremium)0x0;
  memset(this + 0x864,0,0x58);
  this[0x8bc] = (CUserPremium)0x0;
  _Additioal_info::clear((_Additioal_info *)(this + 0x8bd));
  _Additioal_info::clear((_Additioal_info *)(this + 0x90f));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x964))
  ;
  return;
}

```

---

## IsRestrictedPremium

```asm
// === 086af7c4 WongWork::CUserPremium::IsRestrictedPremium  [0x086af7c4-0x86af7e7] ===
 86af7c4:	55                   	push   %ebp
 86af7c5:	89 e5                	mov    %esp,%ebp
 86af7c7:	81 7d 08 5f ea 00 00 	cmpl   $0xea5f,0x8(%ebp)
 86af7ce:	7e 10                	jle    86af7e0 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi+0x1c>
 86af7d0:	81 7d 08 6f 11 01 00 	cmpl   $0x1116f,0x8(%ebp)
 86af7d7:	7f 07                	jg     86af7e0 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi+0x1c>
 86af7d9:	b8 01 00 00 00       	mov    $0x1,%eax
 86af7de:	eb 05                	jmp    86af7e5 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi+0x21>
 86af7e0:	b8 00 00 00 00       	mov    $0x0,%eax
 86af7e5:	5d                   	pop    %ebp
 86af7e6:	c3                   	ret
 86af7e7:	90                   	nop

```

```c
// WongWork::CUserPremium::IsRestrictedPremium @ 0x86af7c4

/* WongWork::CUserPremium::IsRestrictedPremium(int) */

undefined4 WongWork::CUserPremium::IsRestrictedPremium(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 60000) || (69999 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## LoadPremiumInfo

```asm
// === 086aeca4 WongWork::CUserPremium::LoadPremiumInfo  [0x086aeca4-0x86af709] ===
 86aeca4:	55                   	push   %ebp
 86aeca5:	89 e5                	mov    %esp,%ebp
 86aeca7:	57                   	push   %edi
 86aeca8:	56                   	push   %esi
 86aeca9:	53                   	push   %ebx
 86aecaa:	81 ec 3c 7e 00 00    	sub    $0x7e3c,%esp
 86aecb0:	8d 9d d8 81 ff ff    	lea    -0x7e28(%ebp),%ebx
 86aecb6:	89 df                	mov    %ebx,%edi
 86aecb8:	be 69 00 00 00       	mov    $0x69,%esi
 86aecbd:	eb 11                	jmp    86aecd0 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x2c>
 86aecbf:	89 3c 24             	mov    %edi,(%esp)
 86aecc2:	e8 d1 1b 00 00       	call   86b0898 <_ZN16stPremiumTable_tC1Ev>
 86aecc7:	81 c7 30 01 00 00    	add    $0x130,%edi
 86aeccd:	83 ee 01             	sub    $0x1,%esi
 86aecd0:	83 fe ff             	cmp    $0xffffffff,%esi
 86aecd3:	0f 95 c0             	setne  %al
 86aecd6:	84 c0                	test   %al,%al
 86aecd8:	75 e5                	jne    86aecbf <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x1b>
 86aecda:	eb 40                	jmp    86aed1c <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x78>
 86aecdc:	89 d7                	mov    %edx,%edi
 86aecde:	89 85 d4 81 ff ff    	mov    %eax,-0x7e2c(%ebp)
 86aece4:	85 db                	test   %ebx,%ebx
 86aece6:	74 24                	je     86aed0c <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x68>
 86aece8:	b8 69 00 00 00       	mov    $0x69,%eax
 86aeced:	29 f0                	sub    %esi,%eax
 86aecef:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aecf5:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 86aecf8:	39 de                	cmp    %ebx,%esi
 86aecfa:	74 10                	je     86aed0c <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x68>
 86aecfc:	81 ee 30 01 00 00    	sub    $0x130,%esi
 86aed02:	89 34 24             	mov    %esi,(%esp)
 86aed05:	e8 06 1c 00 00       	call   86b0910 <_ZN16stPremiumTable_tD1Ev>
 86aed0a:	eb ec                	jmp    86aecf8 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x54>
 86aed0c:	8b 85 d4 81 ff ff    	mov    -0x7e2c(%ebp),%eax
 86aed12:	89 fa                	mov    %edi,%edx
 86aed14:	89 04 24             	mov    %eax,(%esp)
 86aed17:	e8 34 4a 43 00       	call   8ae3750 <_Unwind_Resume>
 86aed1c:	c7 44 24 0c 8c b1 48 	movl   $0x948b18c,0xc(%esp)
 86aed23:	09 
 86aed24:	c7 44 24 08 80 b1 48 	movl   $0x948b180,0x8(%esp)
 86aed2b:	09 
 86aed2c:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86aed32:	89 44 24 04          	mov    %eax,0x4(%esp)
 86aed36:	8b 45 08             	mov    0x8(%ebp),%eax
 86aed39:	89 04 24             	mov    %eax,(%esp)
 86aed3c:	e8 54 70 25 00       	call   8905d95 <_Z17importPremiumListPKcP16stPremiumTable_tRSt6vectorI25SPremiumOverEquipableInfoSaIS4_EERS3_I22SPremiumReturnItemInfoSaIS8_EE>
 86aed41:	85 c0                	test   %eax,%eax
 86aed43:	0f 95 c0             	setne  %al
 86aed46:	84 c0                	test   %al,%al
 86aed48:	74 0a                	je     86aed54 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xb0>
 86aed4a:	bb 5c 01 00 00       	mov    $0x15c,%ebx
 86aed4f:	e9 83 09 00 00       	jmp    86af6d7 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa33>
 86aed54:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86aed5b:	e9 2b 09 00 00       	jmp    86af68b <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x9e7>
 86aed60:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aed63:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aed66:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aed6c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aed6f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aed72:	2d 10 7e 00 00       	sub    $0x7e10,%eax
 86aed77:	8b 08                	mov    (%eax),%ecx
 86aed79:	89 d0                	mov    %edx,%eax
 86aed7b:	c1 e0 03             	shl    $0x3,%eax
 86aed7e:	01 d0                	add    %edx,%eax
 86aed80:	c1 e0 05             	shl    $0x5,%eax
 86aed83:	89 88 40 3a 48 09    	mov    %ecx,0x9483a40(%eax)
 86aed89:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aed8c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aed8f:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aed95:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aed98:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aed9b:	2d 0c 7e 00 00       	sub    $0x7e0c,%eax
 86aeda0:	8b 08                	mov    (%eax),%ecx
 86aeda2:	89 d0                	mov    %edx,%eax
 86aeda4:	c1 e0 03             	shl    $0x3,%eax
 86aeda7:	01 d0                	add    %edx,%eax
 86aeda9:	c1 e0 05             	shl    $0x5,%eax
 86aedac:	89 88 44 3a 48 09    	mov    %ecx,0x9483a44(%eax)
 86aedb2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aedb5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aedb8:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aedbe:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aedc1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aedc4:	2d 08 7e 00 00       	sub    $0x7e08,%eax
 86aedc9:	8b 08                	mov    (%eax),%ecx
 86aedcb:	89 d0                	mov    %edx,%eax
 86aedcd:	c1 e0 03             	shl    $0x3,%eax
 86aedd0:	01 d0                	add    %edx,%eax
 86aedd2:	c1 e0 05             	shl    $0x5,%eax
 86aedd5:	89 88 48 3a 48 09    	mov    %ecx,0x9483a48(%eax)
 86aeddb:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86aede2:	eb 5c                	jmp    86aee40 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x19c>
 86aede4:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aede7:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86aedea:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86aeded:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86aedf0:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86aedf3:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aedf6:	8b 8c c5 e4 81 ff ff 	mov    -0x7e1c(%ebp,%eax,8),%ecx
 86aedfd:	89 d0                	mov    %edx,%eax
 86aedff:	c1 e0 03             	shl    $0x3,%eax
 86aee02:	01 d0                	add    %edx,%eax
 86aee04:	c1 e0 02             	shl    $0x2,%eax
 86aee07:	01 d8                	add    %ebx,%eax
 86aee09:	89 0c c5 4c 3a 48 09 	mov    %ecx,0x9483a4c(,%eax,8)
 86aee10:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aee13:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86aee16:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86aee19:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86aee1c:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86aee1f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aee22:	8b 8c c5 e8 81 ff ff 	mov    -0x7e18(%ebp,%eax,8),%ecx
 86aee29:	89 d0                	mov    %edx,%eax
 86aee2b:	c1 e0 03             	shl    $0x3,%eax
 86aee2e:	01 d0                	add    %edx,%eax
 86aee30:	c1 e0 02             	shl    $0x2,%eax
 86aee33:	01 d8                	add    %ebx,%eax
 86aee35:	89 0c c5 50 3a 48 09 	mov    %ecx,0x9483a50(,%eax,8)
 86aee3c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 86aee40:	83 7d d0 04          	cmpl   $0x4,-0x30(%ebp)
 86aee44:	0f 9e c0             	setle  %al
 86aee47:	84 c0                	test   %al,%al
 86aee49:	75 99                	jne    86aede4 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x140>
 86aee4b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aee4e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aee51:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aee57:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aee5a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aee5d:	2d e0 7d 00 00       	sub    $0x7de0,%eax
 86aee62:	0f b7 48 04          	movzwl 0x4(%eax),%ecx
 86aee66:	89 d0                	mov    %edx,%eax
 86aee68:	c1 e0 03             	shl    $0x3,%eax
 86aee6b:	01 d0                	add    %edx,%eax
 86aee6d:	c1 e0 05             	shl    $0x5,%eax
 86aee70:	66 89 88 74 3a 48 09 	mov    %cx,0x9483a74(%eax)
 86aee77:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aee7a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aee7d:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aee83:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aee86:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aee89:	2d d8 7d 00 00       	sub    $0x7dd8,%eax
 86aee8e:	8b 08                	mov    (%eax),%ecx
 86aee90:	89 d0                	mov    %edx,%eax
 86aee92:	c1 e0 03             	shl    $0x3,%eax
 86aee95:	01 d0                	add    %edx,%eax
 86aee97:	c1 e0 05             	shl    $0x5,%eax
 86aee9a:	89 88 78 3a 48 09    	mov    %ecx,0x9483a78(%eax)
 86aeea0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aeea3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aeea6:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aeeac:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aeeaf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aeeb2:	2d d4 7d 00 00       	sub    $0x7dd4,%eax
 86aeeb7:	8b 08                	mov    (%eax),%ecx
 86aeeb9:	89 d0                	mov    %edx,%eax
 86aeebb:	c1 e0 03             	shl    $0x3,%eax
 86aeebe:	01 d0                	add    %edx,%eax
 86aeec0:	c1 e0 05             	shl    $0x5,%eax
 86aeec3:	89 88 7c 3a 48 09    	mov    %ecx,0x9483a7c(%eax)
 86aeec9:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aeecc:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aeecf:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aeed5:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aeed8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aeedb:	2d d0 7d 00 00       	sub    $0x7dd0,%eax
 86aeee0:	0f b7 48 02          	movzwl 0x2(%eax),%ecx
 86aeee4:	89 d0                	mov    %edx,%eax
 86aeee6:	c1 e0 03             	shl    $0x3,%eax
 86aeee9:	01 d0                	add    %edx,%eax
 86aeeeb:	c1 e0 05             	shl    $0x5,%eax
 86aeeee:	66 89 88 98 3a 48 09 	mov    %cx,0x9483a98(%eax)
 86aeef5:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aeef8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aeefb:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aef01:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aef04:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aef07:	2d d0 7d 00 00       	sub    $0x7dd0,%eax
 86aef0c:	0f b7 48 04          	movzwl 0x4(%eax),%ecx
 86aef10:	89 d0                	mov    %edx,%eax
 86aef12:	c1 e0 03             	shl    $0x3,%eax
 86aef15:	01 d0                	add    %edx,%eax
 86aef17:	c1 e0 05             	shl    $0x5,%eax
 86aef1a:	66 89 88 9a 3a 48 09 	mov    %cx,0x9483a9a(%eax)
 86aef21:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aef24:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aef27:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aef2d:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aef30:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aef33:	2d b4 7d 00 00       	sub    $0x7db4,%eax
 86aef38:	8b 08                	mov    (%eax),%ecx
 86aef3a:	89 d0                	mov    %edx,%eax
 86aef3c:	c1 e0 03             	shl    $0x3,%eax
 86aef3f:	01 d0                	add    %edx,%eax
 86aef41:	c1 e0 05             	shl    $0x5,%eax
 86aef44:	89 88 9c 3a 48 09    	mov    %ecx,0x9483a9c(%eax)
 86aef4a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aef4d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aef50:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aef56:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aef59:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aef5c:	2d d0 7d 00 00       	sub    $0x7dd0,%eax
 86aef61:	0f b6 08             	movzbl (%eax),%ecx
 86aef64:	89 d0                	mov    %edx,%eax
 86aef66:	c1 e0 03             	shl    $0x3,%eax
 86aef69:	01 d0                	add    %edx,%eax
 86aef6b:	c1 e0 05             	shl    $0x5,%eax
 86aef6e:	88 88 80 3a 48 09    	mov    %cl,0x9483a80(%eax)
 86aef74:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aef77:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aef7a:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aef80:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aef83:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aef86:	2d c8 7d 00 00       	sub    $0x7dc8,%eax
 86aef8b:	8b 08                	mov    (%eax),%ecx
 86aef8d:	89 d0                	mov    %edx,%eax
 86aef8f:	c1 e0 03             	shl    $0x3,%eax
 86aef92:	01 d0                	add    %edx,%eax
 86aef94:	c1 e0 05             	shl    $0x5,%eax
 86aef97:	89 88 84 3a 48 09    	mov    %ecx,0x9483a84(%eax)
 86aef9d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aefa0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86aefa3:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86aefa9:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86aefac:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86aefaf:	2d c4 7d 00 00       	sub    $0x7dc4,%eax
 86aefb4:	8b 08                	mov    (%eax),%ecx
 86aefb6:	89 d0                	mov    %edx,%eax
 86aefb8:	c1 e0 03             	shl    $0x3,%eax
 86aefbb:	01 d0                	add    %edx,%eax
 86aefbd:	c1 e0 05             	shl    $0x5,%eax
 86aefc0:	89 88 88 3a 48 09    	mov    %ecx,0x9483a88(%eax)
 86aefc6:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aefc9:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86aefcf:	69 d2 30 01 00 00    	imul   $0x130,%edx,%edx
 86aefd5:	83 c2 50             	add    $0x50,%edx
 86aefd8:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 86aefdb:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86aefde:	89 d0                	mov    %edx,%eax
 86aefe0:	c1 e0 03             	shl    $0x3,%eax
 86aefe3:	01 d0                	add    %edx,%eax
 86aefe5:	c1 e0 05             	shl    $0x5,%eax
 86aefe8:	83 c0 40             	add    $0x40,%eax
 86aefeb:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86aeff0:	83 c0 0c             	add    $0xc,%eax
 86aeff3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86aeff7:	89 04 24             	mov    %eax,(%esp)
 86aeffa:	e8 b1 86 f3 ff       	call   85e76b0 <_ZNSt6vectorIjSaIjEEaSERKS1_>
 86aefff:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af002:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af005:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af00b:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af00e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af011:	2d b0 7d 00 00       	sub    $0x7db0,%eax
 86af016:	0f b6 08             	movzbl (%eax),%ecx
 86af019:	89 d0                	mov    %edx,%eax
 86af01b:	c1 e0 03             	shl    $0x3,%eax
 86af01e:	01 d0                	add    %edx,%eax
 86af020:	c1 e0 05             	shl    $0x5,%eax
 86af023:	88 88 a0 3a 48 09    	mov    %cl,0x9483aa0(%eax)
 86af029:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af02c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af02f:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af035:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af038:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af03b:	2d ac 7d 00 00       	sub    $0x7dac,%eax
 86af040:	8b 08                	mov    (%eax),%ecx
 86af042:	89 d0                	mov    %edx,%eax
 86af044:	c1 e0 03             	shl    $0x3,%eax
 86af047:	01 d0                	add    %edx,%eax
 86af049:	c1 e0 05             	shl    $0x5,%eax
 86af04c:	89 88 a4 3a 48 09    	mov    %ecx,0x9483aa4(%eax)
 86af052:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86af059:	eb 68                	jmp    86af0c3 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x41f>
 86af05b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af05e:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86af061:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af064:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86af067:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86af06a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af06d:	83 c0 0c             	add    $0xc,%eax
 86af070:	8b 8c c5 e0 81 ff ff 	mov    -0x7e20(%ebp,%eax,8),%ecx
 86af077:	89 d0                	mov    %edx,%eax
 86af079:	c1 e0 03             	shl    $0x3,%eax
 86af07c:	01 d0                	add    %edx,%eax
 86af07e:	c1 e0 02             	shl    $0x2,%eax
 86af081:	01 d8                	add    %ebx,%eax
 86af083:	83 c0 0c             	add    $0xc,%eax
 86af086:	89 0c c5 48 3a 48 09 	mov    %ecx,0x9483a48(,%eax,8)
 86af08d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af090:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86af093:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af096:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86af099:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86af09c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af09f:	83 c0 0c             	add    $0xc,%eax
 86af0a2:	8b 8c c5 e4 81 ff ff 	mov    -0x7e1c(%ebp,%eax,8),%ecx
 86af0a9:	89 d0                	mov    %edx,%eax
 86af0ab:	c1 e0 03             	shl    $0x3,%eax
 86af0ae:	01 d0                	add    %edx,%eax
 86af0b0:	c1 e0 02             	shl    $0x2,%eax
 86af0b3:	01 d8                	add    %ebx,%eax
 86af0b5:	83 c0 0c             	add    $0xc,%eax
 86af0b8:	89 0c c5 4c 3a 48 09 	mov    %ecx,0x9483a4c(,%eax,8)
 86af0bf:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86af0c3:	83 7d d4 04          	cmpl   $0x4,-0x2c(%ebp)
 86af0c7:	0f 9e c0             	setle  %al
 86af0ca:	84 c0                	test   %al,%al
 86af0cc:	75 8d                	jne    86af05b <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x3b7>
 86af0ce:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af0d1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af0d4:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af0da:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af0dd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af0e0:	2d 80 7d 00 00       	sub    $0x7d80,%eax
 86af0e5:	8b 08                	mov    (%eax),%ecx
 86af0e7:	89 d0                	mov    %edx,%eax
 86af0e9:	c1 e0 03             	shl    $0x3,%eax
 86af0ec:	01 d0                	add    %edx,%eax
 86af0ee:	c1 e0 05             	shl    $0x5,%eax
 86af0f1:	89 88 d0 3a 48 09    	mov    %ecx,0x9483ad0(%eax)
 86af0f7:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 86af0fe:	eb 68                	jmp    86af168 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x4c4>
 86af100:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af103:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 86af106:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af109:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86af10c:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86af10f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af112:	83 c0 12             	add    $0x12,%eax
 86af115:	8b 8c c5 dc 81 ff ff 	mov    -0x7e24(%ebp,%eax,8),%ecx
 86af11c:	89 d0                	mov    %edx,%eax
 86af11e:	c1 e0 03             	shl    $0x3,%eax
 86af121:	01 d0                	add    %edx,%eax
 86af123:	c1 e0 02             	shl    $0x2,%eax
 86af126:	01 d8                	add    %ebx,%eax
 86af128:	83 c0 12             	add    $0x12,%eax
 86af12b:	89 0c c5 44 3a 48 09 	mov    %ecx,0x9483a44(,%eax,8)
 86af132:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af135:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 86af138:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af13b:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86af13e:	6b c9 26             	imul   $0x26,%ecx,%ecx
 86af141:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af144:	83 c0 12             	add    $0x12,%eax
 86af147:	8b 8c c5 e0 81 ff ff 	mov    -0x7e20(%ebp,%eax,8),%ecx
 86af14e:	89 d0                	mov    %edx,%eax
 86af150:	c1 e0 03             	shl    $0x3,%eax
 86af153:	01 d0                	add    %edx,%eax
 86af155:	c1 e0 02             	shl    $0x2,%eax
 86af158:	01 d8                	add    %ebx,%eax
 86af15a:	83 c0 12             	add    $0x12,%eax
 86af15d:	89 0c c5 48 3a 48 09 	mov    %ecx,0x9483a48(,%eax,8)
 86af164:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 86af168:	83 7d d8 02          	cmpl   $0x2,-0x28(%ebp)
 86af16c:	0f 9e c0             	setle  %al
 86af16f:	84 c0                	test   %al,%al
 86af171:	75 8d                	jne    86af100 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x45c>
 86af173:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86af17a:	eb 36                	jmp    86af1b2 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x50e>
 86af17c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af17f:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 86af182:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af185:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86af188:	6b c9 4c             	imul   $0x4c,%ecx,%ecx
 86af18b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af18e:	83 c0 28             	add    $0x28,%eax
 86af191:	8b 8c 85 e4 81 ff ff 	mov    -0x7e1c(%ebp,%eax,4),%ecx
 86af198:	89 d0                	mov    %edx,%eax
 86af19a:	c1 e0 03             	shl    $0x3,%eax
 86af19d:	01 d0                	add    %edx,%eax
 86af19f:	c1 e0 03             	shl    $0x3,%eax
 86af1a2:	01 d8                	add    %ebx,%eax
 86af1a4:	83 c0 28             	add    $0x28,%eax
 86af1a7:	89 0c 85 4c 3a 48 09 	mov    %ecx,0x9483a4c(,%eax,4)
 86af1ae:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 86af1b2:	83 7d dc 06          	cmpl   $0x6,-0x24(%ebp)
 86af1b6:	0f 9e c0             	setle  %al
 86af1b9:	84 c0                	test   %al,%al
 86af1bb:	75 bf                	jne    86af17c <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x4d8>
 86af1bd:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af1c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af1c3:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af1c9:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af1cc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af1cf:	2d 48 7d 00 00       	sub    $0x7d48,%eax
 86af1d4:	8b 08                	mov    (%eax),%ecx
 86af1d6:	89 d0                	mov    %edx,%eax
 86af1d8:	c1 e0 03             	shl    $0x3,%eax
 86af1db:	01 d0                	add    %edx,%eax
 86af1dd:	c1 e0 05             	shl    $0x5,%eax
 86af1e0:	89 88 08 3b 48 09    	mov    %ecx,0x9483b08(%eax)
 86af1e6:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af1e9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af1ec:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af1f2:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af1f5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af1f8:	2d 44 7d 00 00       	sub    $0x7d44,%eax
 86af1fd:	8b 08                	mov    (%eax),%ecx
 86af1ff:	89 d0                	mov    %edx,%eax
 86af201:	c1 e0 03             	shl    $0x3,%eax
 86af204:	01 d0                	add    %edx,%eax
 86af206:	c1 e0 05             	shl    $0x5,%eax
 86af209:	89 88 0c 3b 48 09    	mov    %ecx,0x9483b0c(%eax)
 86af20f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af212:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af215:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af21b:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af21e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af221:	2d 50 7d 00 00       	sub    $0x7d50,%eax
 86af226:	0f b7 48 10          	movzwl 0x10(%eax),%ecx
 86af22a:	89 d0                	mov    %edx,%eax
 86af22c:	c1 e0 03             	shl    $0x3,%eax
 86af22f:	01 d0                	add    %edx,%eax
 86af231:	c1 e0 05             	shl    $0x5,%eax
 86af234:	66 89 88 10 3b 48 09 	mov    %cx,0x9483b10(%eax)
 86af23b:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af23e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af241:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af247:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af24a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af24d:	2d 50 7d 00 00       	sub    $0x7d50,%eax
 86af252:	0f b7 48 12          	movzwl 0x12(%eax),%ecx
 86af256:	89 d0                	mov    %edx,%eax
 86af258:	c1 e0 03             	shl    $0x3,%eax
 86af25b:	01 d0                	add    %edx,%eax
 86af25d:	c1 e0 05             	shl    $0x5,%eax
 86af260:	66 89 88 12 3b 48 09 	mov    %cx,0x9483b12(%eax)
 86af267:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af26a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af26d:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af273:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af276:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af279:	2d 50 7d 00 00       	sub    $0x7d50,%eax
 86af27e:	0f b7 48 14          	movzwl 0x14(%eax),%ecx
 86af282:	89 d0                	mov    %edx,%eax
 86af284:	c1 e0 03             	shl    $0x3,%eax
 86af287:	01 d0                	add    %edx,%eax
 86af289:	c1 e0 05             	shl    $0x5,%eax
 86af28c:	66 89 88 14 3b 48 09 	mov    %cx,0x9483b14(%eax)
 86af293:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af296:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af299:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af29f:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af2a2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af2a5:	2d 50 7d 00 00       	sub    $0x7d50,%eax
 86af2aa:	0f b7 48 16          	movzwl 0x16(%eax),%ecx
 86af2ae:	89 d0                	mov    %edx,%eax
 86af2b0:	c1 e0 03             	shl    $0x3,%eax
 86af2b3:	01 d0                	add    %edx,%eax
 86af2b5:	c1 e0 05             	shl    $0x5,%eax
 86af2b8:	66 89 88 16 3b 48 09 	mov    %cx,0x9483b16(%eax)
 86af2bf:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 86af2c6:	eb 3b                	jmp    86af303 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x65f>
 86af2c8:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af2cb:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 86af2ce:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af2d1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86af2d4:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 86af2da:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af2dd:	83 c0 68             	add    $0x68,%eax
 86af2e0:	0f b7 8c 45 e0 81 ff 	movzwl -0x7e20(%ebp,%eax,2),%ecx
 86af2e7:	ff 
 86af2e8:	89 d0                	mov    %edx,%eax
 86af2ea:	c1 e0 03             	shl    $0x3,%eax
 86af2ed:	01 d0                	add    %edx,%eax
 86af2ef:	c1 e0 04             	shl    $0x4,%eax
 86af2f2:	01 d8                	add    %ebx,%eax
 86af2f4:	83 c0 68             	add    $0x68,%eax
 86af2f7:	66 89 8c 00 48 3a 48 	mov    %cx,0x9483a48(%eax,%eax,1)
 86af2fe:	09 
 86af2ff:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 86af303:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 86af307:	0f 9e c0             	setle  %al
 86af30a:	84 c0                	test   %al,%al
 86af30c:	75 ba                	jne    86af2c8 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x624>
 86af30e:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 86af315:	eb 3b                	jmp    86af352 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x6ae>
 86af317:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af31a:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 86af31d:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86af320:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86af323:	69 c9 98 00 00 00    	imul   $0x98,%ecx,%ecx
 86af329:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af32c:	83 c0 68             	add    $0x68,%eax
 86af32f:	0f b7 8c 45 e8 81 ff 	movzwl -0x7e18(%ebp,%eax,2),%ecx
 86af336:	ff 
 86af337:	89 d0                	mov    %edx,%eax
 86af339:	c1 e0 03             	shl    $0x3,%eax
 86af33c:	01 d0                	add    %edx,%eax
 86af33e:	c1 e0 04             	shl    $0x4,%eax
 86af341:	01 d8                	add    %ebx,%eax
 86af343:	83 c0 68             	add    $0x68,%eax
 86af346:	66 89 8c 00 50 3a 48 	mov    %cx,0x9483a50(%eax,%eax,1)
 86af34d:	09 
 86af34e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86af352:	83 7d e4 10          	cmpl   $0x10,-0x1c(%ebp)
 86af356:	0f 9e c0             	setle  %al
 86af359:	84 c0                	test   %al,%al
 86af35b:	75 ba                	jne    86af317 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x673>
 86af35d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af360:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af363:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af369:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af36c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af36f:	2d 0c 7d 00 00       	sub    $0x7d0c,%eax
 86af374:	8b 08                	mov    (%eax),%ecx
 86af376:	89 d0                	mov    %edx,%eax
 86af378:	c1 e0 03             	shl    $0x3,%eax
 86af37b:	01 d0                	add    %edx,%eax
 86af37d:	c1 e0 05             	shl    $0x5,%eax
 86af380:	89 88 42 3b 48 09    	mov    %ecx,0x9483b42(%eax)
 86af386:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af389:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af38c:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af392:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af395:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af398:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af39d:	0f b7 48 08          	movzwl 0x8(%eax),%ecx
 86af3a1:	89 d0                	mov    %edx,%eax
 86af3a3:	c1 e0 03             	shl    $0x3,%eax
 86af3a6:	01 d0                	add    %edx,%eax
 86af3a8:	c1 e0 05             	shl    $0x5,%eax
 86af3ab:	66 89 88 46 3b 48 09 	mov    %cx,0x9483b46(%eax)
 86af3b2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af3b5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af3b8:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af3be:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af3c1:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af3c4:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af3c9:	0f b7 48 0a          	movzwl 0xa(%eax),%ecx
 86af3cd:	89 d0                	mov    %edx,%eax
 86af3cf:	c1 e0 03             	shl    $0x3,%eax
 86af3d2:	01 d0                	add    %edx,%eax
 86af3d4:	c1 e0 05             	shl    $0x5,%eax
 86af3d7:	66 89 88 48 3b 48 09 	mov    %cx,0x9483b48(%eax)
 86af3de:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af3e1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af3e4:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af3ea:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af3ed:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af3f0:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af3f5:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 86af3f9:	0f b7 c8             	movzwl %ax,%ecx
 86af3fc:	89 d0                	mov    %edx,%eax
 86af3fe:	c1 e0 03             	shl    $0x3,%eax
 86af401:	01 d0                	add    %edx,%eax
 86af403:	c1 e0 05             	shl    $0x5,%eax
 86af406:	89 88 4a 3b 48 09    	mov    %ecx,0x9483b4a(%eax)
 86af40c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af40f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af412:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af418:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af41b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af41e:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af423:	0f b7 48 0e          	movzwl 0xe(%eax),%ecx
 86af427:	89 d0                	mov    %edx,%eax
 86af429:	c1 e0 03             	shl    $0x3,%eax
 86af42c:	01 d0                	add    %edx,%eax
 86af42e:	c1 e0 05             	shl    $0x5,%eax
 86af431:	66 89 88 4e 3b 48 09 	mov    %cx,0x9483b4e(%eax)
 86af438:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af43b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af43e:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af444:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af447:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af44a:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af44f:	0f b7 48 10          	movzwl 0x10(%eax),%ecx
 86af453:	89 d0                	mov    %edx,%eax
 86af455:	c1 e0 03             	shl    $0x3,%eax
 86af458:	01 d0                	add    %edx,%eax
 86af45a:	c1 e0 05             	shl    $0x5,%eax
 86af45d:	66 89 88 50 3b 48 09 	mov    %cx,0x9483b50(%eax)
 86af464:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af467:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af46a:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af470:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af473:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af476:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af47b:	0f b7 48 12          	movzwl 0x12(%eax),%ecx
 86af47f:	89 d0                	mov    %edx,%eax
 86af481:	c1 e0 03             	shl    $0x3,%eax
 86af484:	01 d0                	add    %edx,%eax
 86af486:	c1 e0 05             	shl    $0x5,%eax
 86af489:	66 89 88 52 3b 48 09 	mov    %cx,0x9483b52(%eax)
 86af490:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af493:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af496:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af49c:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af49f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af4a2:	2d 10 7d 00 00       	sub    $0x7d10,%eax
 86af4a7:	0f b7 48 14          	movzwl 0x14(%eax),%ecx
 86af4ab:	89 d0                	mov    %edx,%eax
 86af4ad:	c1 e0 03             	shl    $0x3,%eax
 86af4b0:	01 d0                	add    %edx,%eax
 86af4b2:	c1 e0 05             	shl    $0x5,%eax
 86af4b5:	66 89 88 54 3b 48 09 	mov    %cx,0x9483b54(%eax)
 86af4bc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af4bf:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af4c2:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af4c8:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 86af4cb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86af4ce:	2d f8 7c 00 00       	sub    $0x7cf8,%eax
 86af4d3:	8b 08                	mov    (%eax),%ecx
 86af4d5:	89 d0                	mov    %edx,%eax
 86af4d7:	c1 e0 03             	shl    $0x3,%eax
 86af4da:	01 d0                	add    %edx,%eax
 86af4dc:	c1 e0 05             	shl    $0x5,%eax
 86af4df:	89 88 56 3b 48 09    	mov    %ecx,0x9483b56(%eax)
 86af4e5:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af4e8:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af4ee:	69 d2 30 01 00 00    	imul   $0x130,%edx,%edx
 86af4f4:	81 c2 10 01 00 00    	add    $0x110,%edx
 86af4fa:	01 d0                	add    %edx,%eax
 86af4fc:	8d 48 0c             	lea    0xc(%eax),%ecx
 86af4ff:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af502:	89 d0                	mov    %edx,%eax
 86af504:	c1 e0 03             	shl    $0x3,%eax
 86af507:	01 d0                	add    %edx,%eax
 86af509:	c1 e0 05             	shl    $0x5,%eax
 86af50c:	05 10 01 00 00       	add    $0x110,%eax
 86af511:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86af516:	83 c0 0c             	add    $0xc,%eax
 86af519:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86af51d:	89 04 24             	mov    %eax,(%esp)
 86af520:	e8 db 87 05 00       	call   8707d00 <_ZNSsaSERKSs>
 86af525:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86af528:	89 04 24             	mov    %eax,(%esp)
 86af52b:	e8 f6 12 00 00       	call   86b0826 <_ZN17STPremiumItemDataC1Ev>
 86af530:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af533:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86af536:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86af539:	69 c0 30 01 00 00    	imul   $0x130,%eax,%eax
 86af53f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86af542:	8d 04 02             	lea    (%edx,%eax,1),%eax
 86af545:	2d f0 7c 00 00       	sub    $0x7cf0,%eax
 86af54a:	8b 00                	mov    (%eax),%eax
 86af54c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86af54f:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af552:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af558:	69 d2 30 01 00 00    	imul   $0x130,%edx,%edx
 86af55e:	81 c2 20 01 00 00    	add    $0x120,%edx
 86af564:	01 d0                	add    %edx,%eax
 86af566:	83 c0 04             	add    $0x4,%eax
 86af569:	89 04 24             	mov    %eax,(%esp)
 86af56c:	e8 ef 14 00 00       	call   86b0a60 <_ZNKSt6vectorIN22premium_script_parsing17STPremiumItemDataESaIS1_EE4sizeEv>
 86af571:	85 c0                	test   %eax,%eax
 86af573:	0f 95 c0             	setne  %al
 86af576:	84 c0                	test   %al,%al
 86af578:	0f 84 d3 00 00 00    	je     86af651 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x9ad>
 86af57e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af581:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af587:	69 d2 30 01 00 00    	imul   $0x130,%edx,%edx
 86af58d:	81 c2 20 01 00 00    	add    $0x120,%edx
 86af593:	01 d0                	add    %edx,%eax
 86af595:	8d 50 04             	lea    0x4(%eax),%edx
 86af598:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af59b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86af59f:	89 04 24             	mov    %eax,(%esp)
 86af5a2:	e8 d5 14 00 00       	call   86b0a7c <_ZNSt6vectorIN22premium_script_parsing17STPremiumItemDataESaIS1_EE5beginEv>
 86af5a7:	83 ec 04             	sub    $0x4,%esp
 86af5aa:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af5ad:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af5b3:	69 d2 30 01 00 00    	imul   $0x130,%edx,%edx
 86af5b9:	81 c2 20 01 00 00    	add    $0x120,%edx
 86af5bf:	01 d0                	add    %edx,%eax
 86af5c1:	8d 50 04             	lea    0x4(%eax),%edx
 86af5c4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86af5c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86af5cb:	89 04 24             	mov    %eax,(%esp)
 86af5ce:	e8 cd 14 00 00       	call   86b0aa0 <_ZNSt6vectorIN22premium_script_parsing17STPremiumItemDataESaIS1_EE3endEv>
 86af5d3:	83 ec 04             	sub    $0x4,%esp
 86af5d6:	eb 61                	jmp    86af639 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x995>
 86af5d8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af5db:	89 04 24             	mov    %eax,(%esp)
 86af5de:	e8 25 15 00 00       	call   86b0b08 <_ZNK9__gnu_cxx17__normal_iteratorIPN22premium_script_parsing17STPremiumItemDataESt6vectorIS2_SaIS2_EEEptEv>
 86af5e3:	0f b6 00             	movzbl (%eax),%eax
 86af5e6:	88 45 c4             	mov    %al,-0x3c(%ebp)
 86af5e9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af5ec:	89 04 24             	mov    %eax,(%esp)
 86af5ef:	e8 14 15 00 00       	call   86b0b08 <_ZNK9__gnu_cxx17__normal_iteratorIPN22premium_script_parsing17STPremiumItemDataESt6vectorIS2_SaIS2_EEEptEv>
 86af5f4:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 86af5f8:	84 c0                	test   %al,%al
 86af5fa:	0f 95 c0             	setne  %al
 86af5fd:	88 45 c5             	mov    %al,-0x3b(%ebp)
 86af600:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af603:	89 04 24             	mov    %eax,(%esp)
 86af606:	e8 fd 14 00 00       	call   86b0b08 <_ZNK9__gnu_cxx17__normal_iteratorIPN22premium_script_parsing17STPremiumItemDataESt6vectorIS2_SaIS2_EEEptEv>
 86af60b:	8b 40 04             	mov    0x4(%eax),%eax
 86af60e:	8d 55 c0             	lea    -0x40(%ebp),%edx
 86af611:	89 54 24 04          	mov    %edx,0x4(%esp)
 86af615:	89 04 24             	mov    %eax,(%esp)
 86af618:	e8 ed 00 00 00       	call   86af70a <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData>
 86af61d:	83 f0 01             	xor    $0x1,%eax
 86af620:	84 c0                	test   %al,%al
 86af622:	74 0a                	je     86af62e <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x98a>
 86af624:	bb bc 01 00 00       	mov    $0x1bc,%ebx
 86af629:	e9 a9 00 00 00       	jmp    86af6d7 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa33>
 86af62e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af631:	89 04 24             	mov    %eax,(%esp)
 86af634:	e8 b9 14 00 00       	call   86b0af2 <_ZN9__gnu_cxx17__normal_iteratorIPN22premium_script_parsing17STPremiumItemDataESt6vectorIS2_SaIS2_EEEppEv>
 86af639:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86af63c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af640:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86af643:	89 04 24             	mov    %eax,(%esp)
 86af646:	e8 7b 14 00 00       	call   86b0ac6 <_ZN9__gnu_cxxneIPN22premium_script_parsing17STPremiumItemDataESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86af64b:	84 c0                	test   %al,%al
 86af64d:	75 89                	jne    86af5d8 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x934>
 86af64f:	eb 36                	jmp    86af687 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x9e3>
 86af651:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86af654:	89 d0                	mov    %edx,%eax
 86af656:	c1 e0 03             	shl    $0x3,%eax
 86af659:	01 d0                	add    %edx,%eax
 86af65b:	c1 e0 05             	shl    $0x5,%eax
 86af65e:	8b 80 44 3a 48 09    	mov    0x9483a44(%eax),%eax
 86af664:	88 45 c4             	mov    %al,-0x3c(%ebp)
 86af667:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86af66a:	8d 55 c0             	lea    -0x40(%ebp),%edx
 86af66d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86af671:	89 04 24             	mov    %eax,(%esp)
 86af674:	e8 91 00 00 00       	call   86af70a <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData>
 86af679:	83 f0 01             	xor    $0x1,%eax
 86af67c:	84 c0                	test   %al,%al
 86af67e:	74 07                	je     86af687 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0x9e3>
 86af680:	bb c4 01 00 00       	mov    $0x1c4,%ebx
 86af685:	eb 50                	jmp    86af6d7 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa33>
 86af687:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86af68b:	83 7d cc 69          	cmpl   $0x69,-0x34(%ebp)
 86af68f:	0f 9e c0             	setle  %al
 86af692:	84 c0                	test   %al,%al
 86af694:	0f 85 c6 f6 ff ff    	jne    86aed60 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xbc>
 86af69a:	bb 00 00 00 00       	mov    $0x0,%ebx
 86af69f:	eb 36                	jmp    86af6d7 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa33>
 86af6a1:	89 d6                	mov    %edx,%esi
 86af6a3:	89 c7                	mov    %eax,%edi
 86af6a5:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af6ab:	8d 98 e0 7d 00 00    	lea    0x7de0(%eax),%ebx
 86af6b1:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af6b7:	39 c3                	cmp    %eax,%ebx
 86af6b9:	74 10                	je     86af6cb <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa27>
 86af6bb:	81 eb 30 01 00 00    	sub    $0x130,%ebx
 86af6c1:	89 1c 24             	mov    %ebx,(%esp)
 86af6c4:	e8 47 12 00 00       	call   86b0910 <_ZN16stPremiumTable_tD1Ev>
 86af6c9:	eb e6                	jmp    86af6b1 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa0d>
 86af6cb:	89 f8                	mov    %edi,%eax
 86af6cd:	89 f2                	mov    %esi,%edx
 86af6cf:	89 04 24             	mov    %eax,(%esp)
 86af6d2:	e8 79 40 43 00       	call   8ae3750 <_Unwind_Resume>
 86af6d7:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af6dd:	8d b0 e0 7d 00 00    	lea    0x7de0(%eax),%esi
 86af6e3:	8d 85 d8 81 ff ff    	lea    -0x7e28(%ebp),%eax
 86af6e9:	39 c6                	cmp    %eax,%esi
 86af6eb:	74 10                	je     86af6fd <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa59>
 86af6ed:	81 ee 30 01 00 00    	sub    $0x130,%esi
 86af6f3:	89 34 24             	mov    %esi,(%esp)
 86af6f6:	e8 15 12 00 00       	call   86b0910 <_ZN16stPremiumTable_tD1Ev>
 86af6fb:	eb e6                	jmp    86af6e3 <_ZN8WongWork12CUserPremium15LoadPremiumInfoEPKc+0xa3f>
 86af6fd:	89 d8                	mov    %ebx,%eax
 86af6ff:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86af702:	83 c4 00             	add    $0x0,%esp
 86af705:	5b                   	pop    %ebx
 86af706:	5e                   	pop    %esi
 86af707:	5f                   	pop    %edi
 86af708:	5d                   	pop    %ebp
 86af709:	c3                   	ret

```

```c
// WongWork::CUserPremium::LoadPremiumInfo @ 0x86aeca4

/* WongWork::CUserPremium::LoadPremiumInfo(char const*) */

undefined4 WongWork::CUserPremium::LoadPremiumInfo(char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  stPremiumTable_t *psVar6;
  stPremiumTable_t local_7e2c [4];
  undefined4 uStack_7e28;
  undefined4 auStack_7e24 [2];
  undefined4 auStack_7e1c [9];
  undefined2 auStack_7df8 [2];
  undefined4 auStack_7df4 [2];
  undefined1 auStack_7dec [2];
  undefined2 auStack_7dea [3];
  undefined4 auStack_7de4 [2];
  vector avStack_7ddc [12];
  undefined4 uStack_7dd0;
  undefined1 auStack_7dcc [4];
  undefined4 auStack_7dc8 [11];
  undefined4 auStack_7d9c [14];
  undefined4 auStack_7d64 [2];
  undefined2 auStack_7d5c [26];
  undefined4 uStack_7d28;
  ushort auStack_7d24 [8];
  undefined4 uStack_7d14;
  string asStack_7d10 [4];
  ulong uStack_7d0c;
  vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
  avStack_7d08 [31932];
  stPremiumTable_t local_4c [4];
  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
  local_48 [4];
  int local_44;
  undefined1 local_40;
  undefined1 local_3f;
  ulong local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  psVar6 = local_7e2c;
  for (iVar5 = 0x69; iVar5 != -1; iVar5 = iVar5 + -1) {
                    /* try { // try from 086aecc2 to 086aecc6 has its CatchHandler @ 086aecdc */
    stPremiumTable_t::stPremiumTable_t(psVar6);
    psVar6 = psVar6 + 0x130;
  }
                    /* try { // try from 086aed3c to 086af678 has its CatchHandler @ 086af6a1 */
  iVar5 = importPremiumList(param_1,local_7e2c,(vector *)g_vecPremiumOverEquipableInfo,
                            (vector *)g_vecPremiumReturnItemInfo);
  if (iVar5 == 0) {
    for (local_38 = 0; local_38 < 0x6a; local_38 = local_38 + 1) {
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120) =
           *(undefined4 *)(local_7e2c + local_38 * 0x130);
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 4) = (&uStack_7e28)[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 8) = auStack_7e24[local_38 * 0x4c];
      for (local_34 = 0; local_34 < 5; local_34 = local_34 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_34) * 8 + 0xc) =
             auStack_7e24[(local_38 * 0x26 + local_34) * 2 + 1];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_34) * 8 + 0x10) =
             auStack_7e1c[(local_38 * 0x26 + local_34) * 2];
      }
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x34) = auStack_7df8[local_38 * 0x98];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x38) = auStack_7df4[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x3c) = auStack_7df4[local_38 * 0x4c + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x58) =
           *(undefined2 *)(auStack_7dec + local_38 * 0x130 + 2);
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0x5a) =
           *(undefined2 *)(auStack_7dec + local_38 * 0x130 + 4);
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x5c) = (&uStack_7dd0)[local_38 * 0x4c];
      g_SPremiumInfo[local_38 * 0x120 + 0x40] = auStack_7dec[local_38 * 0x130];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x44) = auStack_7de4[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x48) = auStack_7de4[local_38 * 0x4c + 1];
      std::vector<unsigned_int,std::allocator<unsigned_int>>::operator=
                ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                 (g_SPremiumInfo + local_38 * 0x120 + 0x4c),avStack_7ddc + local_38 * 0x130);
      g_SPremiumInfo[local_38 * 0x120 + 0x60] = auStack_7dcc[local_38 * 0x130];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 100) = auStack_7dc8[local_38 * 0x4c];
      for (local_30 = 0; local_30 < 5; local_30 = local_30 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_30 + 0xc) * 8 + 8) =
             auStack_7e24[(local_38 * 0x26 + local_30 + 0xc) * 2];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_30 + 0xc) * 8 + 0xc) =
             auStack_7e24[(local_38 * 0x26 + local_30 + 0xc) * 2 + 1];
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x90) = auStack_7d9c[local_38 * 0x4c];
      for (local_2c = 0; local_2c < 3; local_2c = local_2c + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_2c + 0x12) * 8 + 4) =
             (&uStack_7e28)[(local_38 * 0x26 + local_2c + 0x12) * 2];
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x24 + local_2c + 0x12) * 8 + 8) =
             auStack_7e24[(local_38 * 0x26 + local_2c + 0x12) * 2];
      }
      for (local_28 = 0; local_28 < 7; local_28 = local_28 + 1) {
        *(undefined4 *)(g_SPremiumInfo + (local_38 * 0x48 + local_28 + 0x28) * 4 + 0xc) =
             auStack_7e24[local_38 * 0x4c + local_28 + 0x29];
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 200) = auStack_7d64[local_38 * 0x4c];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0xcc) = auStack_7d64[local_38 * 0x4c + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd0) = auStack_7d5c[local_38 * 0x98];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd2) = auStack_7d5c[local_38 * 0x98 + 1];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd4) = auStack_7d5c[local_38 * 0x98 + 2];
      *(undefined2 *)(g_SPremiumInfo + local_38 * 0x120 + 0xd6) = auStack_7d5c[local_38 * 0x98 + 3];
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        *(undefined2 *)(g_SPremiumInfo + (local_38 * 0x90 + local_24) * 2 + 0xd8) =
             *(undefined2 *)((int)auStack_7e24 + (local_38 * 0x98 + local_24 + 0x68) * 2);
      }
      for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
        *(undefined2 *)(g_SPremiumInfo + (local_38 * 0x90 + local_20) * 2 + 0xe0) =
             *(undefined2 *)((int)auStack_7e1c + (local_38 * 0x98 + local_20 + 0x68) * 2);
      }
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x102) = (&uStack_7d28)[local_38 * 0x4c];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x106) = auStack_7d24[local_38 * 0x98];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x108) = auStack_7d24[local_38 * 0x98 + 1];
      *(uint *)(g_SPremiumInfo + local_38 * 0x120 + 0x10a) = (uint)auStack_7d24[local_38 * 0x98 + 2]
      ;
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x10e) = auStack_7d24[local_38 * 0x98 + 3];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x110) = auStack_7d24[local_38 * 0x98 + 4];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x112) = auStack_7d24[local_38 * 0x98 + 5];
      *(ushort *)(g_SPremiumInfo + local_38 * 0x120 + 0x114) = auStack_7d24[local_38 * 0x98 + 6];
      *(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 0x116) = (&uStack_7d14)[local_38 * 0x4c];
      std::string::operator=
                ((string *)(g_SPremiumInfo + local_38 * 0x120 + 0x11c),
                 asStack_7d10 + local_38 * 0x130);
      STPremiumItemData::STPremiumItemData((STPremiumItemData *)&local_44);
      local_44 = local_38;
      local_3c = (&uStack_7d0c)[local_38 * 0x4c];
      iVar5 = std::
              vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
              ::size(avStack_7d08 + local_38 * 0x130);
      if (iVar5 == 0) {
        local_40 = (undefined1)*(undefined4 *)(g_SPremiumInfo + local_38 * 0x120 + 4);
        cVar1 = SetPremiumItemData(local_3c,(STPremiumItemData *)&local_44);
        if (cVar1 != '\x01') {
          uVar4 = 0x1c4;
          goto LAB_086af6d7;
        }
      }
      else {
        std::
        vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
        ::begin();
        std::
        vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>
        ::end();
        while (bVar2 = __gnu_cxx::operator!=(local_48,local_4c), bVar2) {
          puVar3 = (undefined1 *)
                   __gnu_cxx::
                   __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                   ::operator->(local_48);
          local_40 = *puVar3;
          iVar5 = __gnu_cxx::
                  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                  ::operator->(local_48);
          local_3f = *(char *)(iVar5 + 1) != '\0';
          iVar5 = __gnu_cxx::
                  __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
                  ::operator->(local_48);
          cVar1 = SetPremiumItemData(*(ulong *)(iVar5 + 4),(STPremiumItemData *)&local_44);
          if (cVar1 != '\x01') {
            uVar4 = 0x1bc;
            goto LAB_086af6d7;
          }
          __gnu_cxx::
          __normal_iterator<premium_script_parsing::STPremiumItemData*,std::vector<premium_script_parsing::STPremiumItemData,std::allocator<premium_script_parsing::STPremiumItemData>>>
          ::operator++(local_48);
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0x15c;
  }
LAB_086af6d7:
  psVar6 = local_4c;
  while (psVar6 != local_7e2c) {
    psVar6 = psVar6 + -0x130;
    stPremiumTable_t::~stPremiumTable_t(psVar6);
  }
  return uVar4;
}

```

---

## ReCalcAdvantage

```asm
// === 086ae10e WongWork::CUserPremium::ReCalcAdvantage  [0x086ae10e-0x86ae7a7] ===
 86ae10e:	55                   	push   %ebp
 86ae10f:	89 e5                	mov    %esp,%ebp
 86ae111:	56                   	push   %esi
 86ae112:	53                   	push   %ebx
 86ae113:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 86ae119:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae11c:	66 c7 80 50 08 00 00 	movw   $0x0,0x850(%eax)
 86ae123:	00 00 
 86ae125:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae128:	c7 80 54 08 00 00 00 	movl   $0x0,0x854(%eax)
 86ae12f:	00 00 00 
 86ae132:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae135:	c7 80 58 08 00 00 00 	movl   $0x0,0x858(%eax)
 86ae13c:	00 00 00 
 86ae13f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae142:	c6 80 5c 08 00 00 00 	movb   $0x0,0x85c(%eax)
 86ae149:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae14c:	c6 80 bc 08 00 00 00 	movb   $0x0,0x8bc(%eax)
 86ae153:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae156:	05 64 08 00 00       	add    $0x864,%eax
 86ae15b:	c7 44 24 08 58 00 00 	movl   $0x58,0x8(%esp)
 86ae162:	00 
 86ae163:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ae16a:	00 
 86ae16b:	89 04 24             	mov    %eax,(%esp)
 86ae16e:	e8 4d fb 9c ff       	call   807dcc0 <memset@plt>
 86ae173:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae176:	05 bd 08 00 00       	add    $0x8bd,%eax
 86ae17b:	89 04 24             	mov    %eax,(%esp)
 86ae17e:	e8 e5 a0 c9 ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 86ae183:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae186:	05 0f 09 00 00       	add    $0x90f,%eax
 86ae18b:	89 04 24             	mov    %eax,(%esp)
 86ae18e:	e8 d5 a0 c9 ff       	call   8348268 <_ZN15_Additioal_info5clearEv>
 86ae193:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae196:	05 64 09 00 00       	add    $0x964,%eax
 86ae19b:	89 04 24             	mov    %eax,(%esp)
 86ae19e:	e8 3b 8b a1 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 86ae1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae1a6:	66 c7 80 5e 08 00 00 	movw   $0x0,0x85e(%eax)
 86ae1ad:	00 00 
 86ae1af:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae1b2:	66 c7 80 60 08 00 00 	movw   $0x0,0x860(%eax)
 86ae1b9:	00 00 
 86ae1bb:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86ae1c2:	e8 d7 da a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86ae1c7:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86ae1ca:	8d 45 90             	lea    -0x70(%ebp),%eax
 86ae1cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae1d1:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86ae1d4:	89 04 24             	mov    %eax,(%esp)
 86ae1d7:	e8 84 01 9d ff       	call   807e360 <localtime_r@plt>
 86ae1dc:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 86ae1e3:	e9 a6 05 00 00       	jmp    86ae78e <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x680>
 86ae1e8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae1eb:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae1ee:	89 d0                	mov    %edx,%eax
 86ae1f0:	c1 e0 02             	shl    $0x2,%eax
 86ae1f3:	01 d0                	add    %edx,%eax
 86ae1f5:	c1 e0 02             	shl    $0x2,%eax
 86ae1f8:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86ae1fb:	85 c0                	test   %eax,%eax
 86ae1fd:	0f 84 7d 05 00 00    	je     86ae780 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x672>
 86ae203:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae206:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae209:	89 d0                	mov    %edx,%eax
 86ae20b:	c1 e0 02             	shl    $0x2,%eax
 86ae20e:	01 d0                	add    %edx,%eax
 86ae210:	c1 e0 02             	shl    $0x2,%eax
 86ae213:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae216:	89 d0                	mov    %edx,%eax
 86ae218:	c1 e0 03             	shl    $0x3,%eax
 86ae21b:	01 d0                	add    %edx,%eax
 86ae21d:	c1 e0 05             	shl    $0x5,%eax
 86ae220:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 86ae226:	83 f8 01             	cmp    $0x1,%eax
 86ae229:	0f 85 54 05 00 00    	jne    86ae783 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x675>
 86ae22f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae232:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae235:	89 d0                	mov    %edx,%eax
 86ae237:	c1 e0 02             	shl    $0x2,%eax
 86ae23a:	01 d0                	add    %edx,%eax
 86ae23c:	c1 e0 02             	shl    $0x2,%eax
 86ae23f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86ae242:	83 c0 10             	add    $0x10,%eax
 86ae245:	8b 00                	mov    (%eax),%eax
 86ae247:	83 f8 02             	cmp    $0x2,%eax
 86ae24a:	0f 84 36 05 00 00    	je     86ae786 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x678>
 86ae250:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae253:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae256:	89 d0                	mov    %edx,%eax
 86ae258:	c1 e0 02             	shl    $0x2,%eax
 86ae25b:	01 d0                	add    %edx,%eax
 86ae25d:	c1 e0 02             	shl    $0x2,%eax
 86ae260:	8b 04 08             	mov    (%eax,%ecx,1),%eax
 86ae263:	8b 55 90             	mov    -0x70(%ebp),%edx
 86ae266:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ae26a:	8b 55 94             	mov    -0x6c(%ebp),%edx
 86ae26d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86ae271:	8b 55 98             	mov    -0x68(%ebp),%edx
 86ae274:	89 54 24 10          	mov    %edx,0x10(%esp)
 86ae278:	8b 55 9c             	mov    -0x64(%ebp),%edx
 86ae27b:	89 54 24 14          	mov    %edx,0x14(%esp)
 86ae27f:	8b 55 a0             	mov    -0x60(%ebp),%edx
 86ae282:	89 54 24 18          	mov    %edx,0x18(%esp)
 86ae286:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 86ae289:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 86ae28d:	8b 55 a8             	mov    -0x58(%ebp),%edx
 86ae290:	89 54 24 20          	mov    %edx,0x20(%esp)
 86ae294:	8b 55 ac             	mov    -0x54(%ebp),%edx
 86ae297:	89 54 24 24          	mov    %edx,0x24(%esp)
 86ae29b:	8b 55 b0             	mov    -0x50(%ebp),%edx
 86ae29e:	89 54 24 28          	mov    %edx,0x28(%esp)
 86ae2a2:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 86ae2a5:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 86ae2a9:	8b 55 b8             	mov    -0x48(%ebp),%edx
 86ae2ac:	89 54 24 30          	mov    %edx,0x30(%esp)
 86ae2b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae2b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae2b7:	89 04 24             	mov    %eax,(%esp)
 86ae2ba:	e8 75 05 00 00       	call   86ae834 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm>
 86ae2bf:	83 f0 01             	xor    $0x1,%eax
 86ae2c2:	84 c0                	test   %al,%al
 86ae2c4:	0f 85 bf 04 00 00    	jne    86ae789 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x67b>
 86ae2ca:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae2cd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae2d0:	89 d0                	mov    %edx,%eax
 86ae2d2:	c1 e0 02             	shl    $0x2,%eax
 86ae2d5:	01 d0                	add    %edx,%eax
 86ae2d7:	c1 e0 02             	shl    $0x2,%eax
 86ae2da:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae2dd:	89 d0                	mov    %edx,%eax
 86ae2df:	c1 e0 03             	shl    $0x3,%eax
 86ae2e2:	01 d0                	add    %edx,%eax
 86ae2e4:	c1 e0 05             	shl    $0x5,%eax
 86ae2e7:	0f b6 80 80 3a 48 09 	movzbl 0x9483a80(%eax),%eax
 86ae2ee:	84 c0                	test   %al,%al
 86ae2f0:	74 0a                	je     86ae2fc <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x1ee>
 86ae2f2:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae2f5:	c6 80 5c 08 00 00 01 	movb   $0x1,0x85c(%eax)
 86ae2fc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae2ff:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae302:	89 d0                	mov    %edx,%eax
 86ae304:	c1 e0 02             	shl    $0x2,%eax
 86ae307:	01 d0                	add    %edx,%eax
 86ae309:	c1 e0 02             	shl    $0x2,%eax
 86ae30c:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae30f:	89 d0                	mov    %edx,%eax
 86ae311:	c1 e0 03             	shl    $0x3,%eax
 86ae314:	01 d0                	add    %edx,%eax
 86ae316:	c1 e0 05             	shl    $0x5,%eax
 86ae319:	83 c0 50             	add    $0x50,%eax
 86ae31c:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86ae321:	8d 50 08             	lea    0x8(%eax),%edx
 86ae324:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae327:	05 5e 08 00 00       	add    $0x85e,%eax
 86ae32c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae330:	89 04 24             	mov    %eax,(%esp)
 86ae333:	e8 53 8e bd ff       	call   828718b <_ZSt3maxItERKT_S2_S2_>
 86ae338:	0f b7 10             	movzwl (%eax),%edx
 86ae33b:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae33e:	66 89 90 5e 08 00 00 	mov    %dx,0x85e(%eax)
 86ae345:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae348:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae34b:	89 d0                	mov    %edx,%eax
 86ae34d:	c1 e0 02             	shl    $0x2,%eax
 86ae350:	01 d0                	add    %edx,%eax
 86ae352:	c1 e0 02             	shl    $0x2,%eax
 86ae355:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae358:	89 d0                	mov    %edx,%eax
 86ae35a:	c1 e0 03             	shl    $0x3,%eax
 86ae35d:	01 d0                	add    %edx,%eax
 86ae35f:	c1 e0 05             	shl    $0x5,%eax
 86ae362:	83 c0 50             	add    $0x50,%eax
 86ae365:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86ae36a:	8d 50 0a             	lea    0xa(%eax),%edx
 86ae36d:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae370:	05 60 08 00 00       	add    $0x860,%eax
 86ae375:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae379:	89 04 24             	mov    %eax,(%esp)
 86ae37c:	e8 0a 8e bd ff       	call   828718b <_ZSt3maxItERKT_S2_S2_>
 86ae381:	0f b7 10             	movzwl (%eax),%edx
 86ae384:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae387:	66 89 90 60 08 00 00 	mov    %dx,0x860(%eax)
 86ae38e:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae391:	0f b7 98 50 08 00 00 	movzwl 0x850(%eax),%ebx
 86ae398:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae39b:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae39e:	89 d0                	mov    %edx,%eax
 86ae3a0:	c1 e0 02             	shl    $0x2,%eax
 86ae3a3:	01 d0                	add    %edx,%eax
 86ae3a5:	c1 e0 02             	shl    $0x2,%eax
 86ae3a8:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae3ab:	89 d0                	mov    %edx,%eax
 86ae3ad:	c1 e0 03             	shl    $0x3,%eax
 86ae3b0:	01 d0                	add    %edx,%eax
 86ae3b2:	c1 e0 05             	shl    $0x5,%eax
 86ae3b5:	0f b7 80 74 3a 48 09 	movzwl 0x9483a74(%eax),%eax
 86ae3bc:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 86ae3bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae3c2:	66 89 90 50 08 00 00 	mov    %dx,0x850(%eax)
 86ae3c9:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae3cc:	8b 98 58 08 00 00    	mov    0x858(%eax),%ebx
 86ae3d2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae3d5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae3d8:	89 d0                	mov    %edx,%eax
 86ae3da:	c1 e0 02             	shl    $0x2,%eax
 86ae3dd:	01 d0                	add    %edx,%eax
 86ae3df:	c1 e0 02             	shl    $0x2,%eax
 86ae3e2:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae3e5:	89 d0                	mov    %edx,%eax
 86ae3e7:	c1 e0 03             	shl    $0x3,%eax
 86ae3ea:	01 d0                	add    %edx,%eax
 86ae3ec:	c1 e0 05             	shl    $0x5,%eax
 86ae3ef:	8b 80 7c 3a 48 09    	mov    0x9483a7c(%eax),%eax
 86ae3f5:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 86ae3f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae3fb:	89 90 58 08 00 00    	mov    %edx,0x858(%eax)
 86ae401:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae404:	8b 98 54 08 00 00    	mov    0x854(%eax),%ebx
 86ae40a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae40d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae410:	89 d0                	mov    %edx,%eax
 86ae412:	c1 e0 02             	shl    $0x2,%eax
 86ae415:	01 d0                	add    %edx,%eax
 86ae417:	c1 e0 02             	shl    $0x2,%eax
 86ae41a:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae41d:	89 d0                	mov    %edx,%eax
 86ae41f:	c1 e0 03             	shl    $0x3,%eax
 86ae422:	01 d0                	add    %edx,%eax
 86ae424:	c1 e0 05             	shl    $0x5,%eax
 86ae427:	8b 80 78 3a 48 09    	mov    0x9483a78(%eax),%eax
 86ae42d:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 86ae430:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae433:	89 90 54 08 00 00    	mov    %edx,0x854(%eax)
 86ae439:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae43c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae43f:	89 d0                	mov    %edx,%eax
 86ae441:	c1 e0 02             	shl    $0x2,%eax
 86ae444:	01 d0                	add    %edx,%eax
 86ae446:	c1 e0 02             	shl    $0x2,%eax
 86ae449:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae44c:	89 d0                	mov    %edx,%eax
 86ae44e:	c1 e0 03             	shl    $0x3,%eax
 86ae451:	01 d0                	add    %edx,%eax
 86ae453:	c1 e0 05             	shl    $0x5,%eax
 86ae456:	0f b6 80 a0 3a 48 09 	movzbl 0x9483aa0(%eax),%eax
 86ae45d:	84 c0                	test   %al,%al
 86ae45f:	74 0a                	je     86ae46b <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x35d>
 86ae461:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae464:	c6 80 bc 08 00 00 01 	movb   $0x1,0x8bc(%eax)
 86ae46b:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86ae472:	e9 01 01 00 00       	jmp    86ae578 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x46a>
 86ae477:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86ae47e:	e9 b5 00 00 00       	jmp    86ae538 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x42a>
 86ae483:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae486:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 86ae489:	89 d0                	mov    %edx,%eax
 86ae48b:	c1 e0 03             	shl    $0x3,%eax
 86ae48e:	01 d0                	add    %edx,%eax
 86ae490:	c1 e0 02             	shl    $0x2,%eax
 86ae493:	01 c8                	add    %ecx,%eax
 86ae495:	83 c0 0c             	add    $0xc,%eax
 86ae498:	8b 04 c5 48 3a 48 09 	mov    0x9483a48(,%eax,8),%eax
 86ae49f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae4a3:	c7 04 24 80 b1 48 09 	movl   $0x948b180,(%esp)
 86ae4aa:	e8 17 25 00 00       	call   86b09c6 <_ZNSt6vectorI25SPremiumOverEquipableInfoSaIS0_EEixEj>
 86ae4af:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ae4b2:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86ae4b6:	89 c3                	mov    %eax,%ebx
 86ae4b8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae4bb:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 86ae4be:	89 d0                	mov    %edx,%eax
 86ae4c0:	c1 e0 03             	shl    $0x3,%eax
 86ae4c3:	01 d0                	add    %edx,%eax
 86ae4c5:	c1 e0 02             	shl    $0x2,%eax
 86ae4c8:	01 c8                	add    %ecx,%eax
 86ae4ca:	83 c0 0c             	add    $0xc,%eax
 86ae4cd:	c1 e0 03             	shl    $0x3,%eax
 86ae4d0:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86ae4d5:	8d 70 0c             	lea    0xc(%eax),%esi
 86ae4d8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae4db:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 86ae4de:	89 d0                	mov    %edx,%eax
 86ae4e0:	c1 e0 03             	shl    $0x3,%eax
 86ae4e3:	01 d0                	add    %edx,%eax
 86ae4e5:	c1 e0 02             	shl    $0x2,%eax
 86ae4e8:	01 c8                	add    %ecx,%eax
 86ae4ea:	83 c0 0c             	add    $0xc,%eax
 86ae4ed:	8b 04 c5 48 3a 48 09 	mov    0x9483a48(,%eax,8),%eax
 86ae4f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae4f8:	c7 04 24 80 b1 48 09 	movl   $0x948b180,(%esp)
 86ae4ff:	e8 c2 24 00 00       	call   86b09c6 <_ZNSt6vectorI25SPremiumOverEquipableInfoSaIS0_EEixEj>
 86ae504:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ae507:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86ae50b:	05 18 02 00 00       	add    $0x218,%eax
 86ae510:	c1 e0 02             	shl    $0x2,%eax
 86ae513:	03 45 08             	add    0x8(%ebp),%eax
 86ae516:	83 c0 04             	add    $0x4,%eax
 86ae519:	89 74 24 04          	mov    %esi,0x4(%esp)
 86ae51d:	89 04 24             	mov    %eax,(%esp)
 86ae520:	e8 f3 fc 9d ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 86ae525:	8b 10                	mov    (%eax),%edx
 86ae527:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae52a:	8d 8b 18 02 00 00    	lea    0x218(%ebx),%ecx
 86ae530:	89 54 88 04          	mov    %edx,0x4(%eax,%ecx,4)
 86ae534:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86ae538:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae53b:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 86ae53e:	89 d0                	mov    %edx,%eax
 86ae540:	c1 e0 03             	shl    $0x3,%eax
 86ae543:	01 d0                	add    %edx,%eax
 86ae545:	c1 e0 02             	shl    $0x2,%eax
 86ae548:	01 c8                	add    %ecx,%eax
 86ae54a:	83 c0 0c             	add    $0xc,%eax
 86ae54d:	8b 04 c5 48 3a 48 09 	mov    0x9483a48(,%eax,8),%eax
 86ae554:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae558:	c7 04 24 80 b1 48 09 	movl   $0x948b180,(%esp)
 86ae55f:	e8 62 24 00 00       	call   86b09c6 <_ZNSt6vectorI25SPremiumOverEquipableInfoSaIS0_EEixEj>
 86ae564:	8b 00                	mov    (%eax),%eax
 86ae566:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86ae569:	0f 9f c0             	setg   %al
 86ae56c:	84 c0                	test   %al,%al
 86ae56e:	0f 85 0f ff ff ff    	jne    86ae483 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x375>
 86ae574:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 86ae578:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae57b:	89 d0                	mov    %edx,%eax
 86ae57d:	c1 e0 03             	shl    $0x3,%eax
 86ae580:	01 d0                	add    %edx,%eax
 86ae582:	c1 e0 05             	shl    $0x5,%eax
 86ae585:	8b 80 a4 3a 48 09    	mov    0x9483aa4(%eax),%eax
 86ae58b:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86ae58e:	0f 9f c0             	setg   %al
 86ae591:	84 c0                	test   %al,%al
 86ae593:	0f 85 de fe ff ff    	jne    86ae477 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x369>
 86ae599:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86ae5a0:	e9 7a 01 00 00       	jmp    86ae71f <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x611>
 86ae5a5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ae5ac:	e9 2e 01 00 00       	jmp    86ae6df <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x5d1>
 86ae5b1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae5b4:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86ae5b7:	89 d0                	mov    %edx,%eax
 86ae5b9:	c1 e0 03             	shl    $0x3,%eax
 86ae5bc:	01 d0                	add    %edx,%eax
 86ae5be:	c1 e0 02             	shl    $0x2,%eax
 86ae5c1:	01 c8                	add    %ecx,%eax
 86ae5c3:	83 c0 12             	add    $0x12,%eax
 86ae5c6:	8b 04 c5 44 3a 48 09 	mov    0x9483a44(,%eax,8),%eax
 86ae5cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae5d1:	c7 04 24 8c b1 48 09 	movl   $0x948b18c,(%esp)
 86ae5d8:	e8 fd 23 00 00       	call   86b09da <_ZNSt6vectorI22SPremiumReturnItemInfoSaIS0_EEixEj>
 86ae5dd:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ae5e0:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86ae5e4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86ae5e7:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae5ea:	8d 88 64 09 00 00    	lea    0x964(%eax),%ecx
 86ae5f0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86ae5f3:	8d 55 c0             	lea    -0x40(%ebp),%edx
 86ae5f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ae5fa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ae5fe:	89 04 24             	mov    %eax,(%esp)
 86ae601:	e8 e8 ec a1 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 86ae606:	83 ec 04             	sub    $0x4,%esp
 86ae609:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae60c:	8d 90 64 09 00 00    	lea    0x964(%eax),%edx
 86ae612:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86ae615:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae619:	89 04 24             	mov    %eax,(%esp)
 86ae61c:	e8 f9 ec a1 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 86ae621:	83 ec 04             	sub    $0x4,%esp
 86ae624:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86ae627:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae62b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86ae62e:	89 04 24             	mov    %eax,(%esp)
 86ae631:	e8 ba 92 a1 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 86ae636:	84 c0                	test   %al,%al
 86ae638:	74 6f                	je     86ae6a9 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x59b>
 86ae63a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae63d:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86ae640:	89 d0                	mov    %edx,%eax
 86ae642:	c1 e0 03             	shl    $0x3,%eax
 86ae645:	01 d0                	add    %edx,%eax
 86ae647:	c1 e0 02             	shl    $0x2,%eax
 86ae64a:	01 c8                	add    %ecx,%eax
 86ae64c:	83 c0 12             	add    $0x12,%eax
 86ae64f:	c1 e0 03             	shl    $0x3,%eax
 86ae652:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86ae657:	8d 50 08             	lea    0x8(%eax),%edx
 86ae65a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ae65d:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ae661:	8d 55 c0             	lea    -0x40(%ebp),%edx
 86ae664:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae668:	89 04 24             	mov    %eax,(%esp)
 86ae66b:	e8 42 2c a6 ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 86ae670:	83 ec 04             	sub    $0x4,%esp
 86ae673:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ae676:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae67a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86ae67d:	89 04 24             	mov    %eax,(%esp)
 86ae680:	e8 9b 86 a1 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 86ae685:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae688:	8d 88 64 09 00 00    	lea    0x964(%eax),%ecx
 86ae68e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ae691:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 86ae694:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ae698:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ae69c:	89 04 24             	mov    %eax,(%esp)
 86ae69f:	e8 ac 86 a1 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 86ae6a4:	83 ec 04             	sub    $0x4,%esp
 86ae6a7:	eb 32                	jmp    86ae6db <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x5cd>
 86ae6a9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86ae6ac:	89 04 24             	mov    %eax,(%esp)
 86ae6af:	e8 8c ec a1 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 86ae6b4:	89 c2                	mov    %eax,%edx
 86ae6b6:	8b 5a 04             	mov    0x4(%edx),%ebx
 86ae6b9:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 86ae6bc:	8b 75 f0             	mov    -0x10(%ebp),%esi
 86ae6bf:	89 c8                	mov    %ecx,%eax
 86ae6c1:	c1 e0 03             	shl    $0x3,%eax
 86ae6c4:	01 c8                	add    %ecx,%eax
 86ae6c6:	c1 e0 02             	shl    $0x2,%eax
 86ae6c9:	01 f0                	add    %esi,%eax
 86ae6cb:	83 c0 12             	add    $0x12,%eax
 86ae6ce:	8b 04 c5 48 3a 48 09 	mov    0x9483a48(,%eax,8),%eax
 86ae6d5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86ae6d8:	89 42 04             	mov    %eax,0x4(%edx)
 86ae6db:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ae6df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae6e2:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86ae6e5:	89 d0                	mov    %edx,%eax
 86ae6e7:	c1 e0 03             	shl    $0x3,%eax
 86ae6ea:	01 d0                	add    %edx,%eax
 86ae6ec:	c1 e0 02             	shl    $0x2,%eax
 86ae6ef:	01 c8                	add    %ecx,%eax
 86ae6f1:	83 c0 12             	add    $0x12,%eax
 86ae6f4:	8b 04 c5 44 3a 48 09 	mov    0x9483a44(,%eax,8),%eax
 86ae6fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ae6ff:	c7 04 24 8c b1 48 09 	movl   $0x948b18c,(%esp)
 86ae706:	e8 cf 22 00 00       	call   86b09da <_ZNSt6vectorI22SPremiumReturnItemInfoSaIS0_EEixEj>
 86ae70b:	8b 00                	mov    (%eax),%eax
 86ae70d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86ae710:	0f 9f c0             	setg   %al
 86ae713:	84 c0                	test   %al,%al
 86ae715:	0f 85 96 fe ff ff    	jne    86ae5b1 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x4a3>
 86ae71b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86ae71f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae722:	89 d0                	mov    %edx,%eax
 86ae724:	c1 e0 03             	shl    $0x3,%eax
 86ae727:	01 d0                	add    %edx,%eax
 86ae729:	c1 e0 05             	shl    $0x5,%eax
 86ae72c:	8b 80 d0 3a 48 09    	mov    0x9483ad0(%eax),%eax
 86ae732:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86ae735:	0f 9f c0             	setg   %al
 86ae738:	84 c0                	test   %al,%al
 86ae73a:	0f 85 65 fe ff ff    	jne    86ae5a5 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x497>
 86ae740:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ae743:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86ae746:	89 d0                	mov    %edx,%eax
 86ae748:	c1 e0 02             	shl    $0x2,%eax
 86ae74b:	01 d0                	add    %edx,%eax
 86ae74d:	c1 e0 02             	shl    $0x2,%eax
 86ae750:	8b 14 08             	mov    (%eax,%ecx,1),%edx
 86ae753:	89 d0                	mov    %edx,%eax
 86ae755:	c1 e0 03             	shl    $0x3,%eax
 86ae758:	01 d0                	add    %edx,%eax
 86ae75a:	c1 e0 05             	shl    $0x5,%eax
 86ae75d:	05 c0 00 00 00       	add    $0xc0,%eax
 86ae762:	05 40 3a 48 09       	add    $0x9483a40,%eax
 86ae767:	8d 50 08             	lea    0x8(%eax),%edx
 86ae76a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae76d:	05 bd 08 00 00       	add    $0x8bd,%eax
 86ae772:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ae776:	89 04 24             	mov    %eax,(%esp)
 86ae779:	e8 6c 55 fe ff       	call   8693cea <_ZN15_Additioal_infopLERKS_>
 86ae77e:	eb 0a                	jmp    86ae78a <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x67c>
 86ae780:	90                   	nop
 86ae781:	eb 07                	jmp    86ae78a <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x67c>
 86ae783:	90                   	nop
 86ae784:	eb 04                	jmp    86ae78a <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x67c>
 86ae786:	90                   	nop
 86ae787:	eb 01                	jmp    86ae78a <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0x67c>
 86ae789:	90                   	nop
 86ae78a:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 86ae78e:	83 7d e4 69          	cmpl   $0x69,-0x1c(%ebp)
 86ae792:	0f 9e c0             	setle  %al
 86ae795:	84 c0                	test   %al,%al
 86ae797:	0f 85 4b fa ff ff    	jne    86ae1e8 <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv+0xda>
 86ae79d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86ae7a0:	83 c4 00             	add    $0x0,%esp
 86ae7a3:	5b                   	pop    %ebx
 86ae7a4:	5e                   	pop    %esi
 86ae7a5:	5d                   	pop    %ebp
 86ae7a6:	c3                   	ret
 86ae7a7:	90                   	nop

```

```c
// WongWork::CUserPremium::ReCalcAdvantage @ 0x86ae10e

/* WongWork::CUserPremium::ReCalcAdvantage() */

void __thiscall WongWork::CUserPremium::ReCalcAdvantage(CUserPremium *this)

{
  tm tVar1;
  char cVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  tm local_74;
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  int local_44;
  time_t local_40;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  pair local_38 [8];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  *(undefined2 *)(this + 0x850) = 0;
  *(undefined4 *)(this + 0x854) = 0;
  *(undefined4 *)(this + 0x858) = 0;
  this[0x85c] = (CUserPremium)0x0;
  this[0x8bc] = (CUserPremium)0x0;
  memset(this + 0x864,0,0x58);
  _Additioal_info::clear((_Additioal_info *)(this + 0x8bd));
  _Additioal_info::clear((_Additioal_info *)(this + 0x90f));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x964))
  ;
  *(undefined2 *)(this + 0x85e) = 0;
  *(undefined2 *)(this + 0x860) = 0;
  local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_40,&local_74);
  for (local_20 = 1; local_20 < 0x6a; local_20 = local_20 + 1) {
    if ((((*(int *)(this + local_20 * 0x14) != 0) &&
         (*(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120) == 1)) &&
        (*(int *)(this + local_20 * 0x14 + 0x10) != 2)) &&
       (tVar1.tm_min = local_74.tm_sec, tVar1.tm_sec = *(undefined4 *)(this + local_20 * 0x14),
       tVar1.tm_hour = local_74.tm_min, tVar1.tm_mday = local_74.tm_hour,
       tVar1.tm_mon = local_74.tm_mday, tVar1.tm_year = local_74.tm_mon,
       tVar1.tm_wday = local_74.tm_year, tVar1.tm_yday = local_74.tm_wday,
       tVar1.tm_isdst = local_74.tm_yday, tVar1.tm_gmtoff = local_74.tm_isdst,
       tVar1.tm_zone = (char *)local_74.tm_gmtoff, cVar2 = _CheckApply((int)this,tVar1),
       cVar2 == '\x01')) {
      if (g_SPremiumInfo[*(int *)(this + local_20 * 0x14) * 0x120 + 0x40] != '\0') {
        this[0x85c] = (CUserPremium)0x1;
      }
      puVar3 = std::max<unsigned_short>
                         ((ushort *)(this + 0x85e),
                          (ushort *)
                          (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x58));
      *(ushort *)(this + 0x85e) = *puVar3;
      puVar3 = std::max<unsigned_short>
                         ((ushort *)(this + 0x860),
                          (ushort *)
                          (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x5a));
      *(ushort *)(this + 0x860) = *puVar3;
      *(short *)(this + 0x850) =
           *(short *)(this + 0x850) +
           *(short *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x34);
      *(int *)(this + 0x858) =
           *(int *)(this + 0x858) +
           *(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x3c);
      *(int *)(this + 0x854) =
           *(int *)(this + 0x854) +
           *(int *)(g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 0x38);
      if (g_SPremiumInfo[*(int *)(this + local_20 * 0x14) * 0x120 + 0x60] != '\0') {
        this[0x8bc] = (CUserPremium)0x1;
      }
      for (local_1c = 0; local_1c < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 100);
          local_1c = local_1c + 1) {
        local_18 = 0;
        while (piVar7 = (int *)std::
                               vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                               ::operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                                             *)g_vecPremiumOverEquipableInfo,
                                            *(uint *)(g_SPremiumInfo +
                                                     (local_20 * 0x24 + local_1c + 0xc) * 8 + 8)),
              local_18 < *piVar7) {
          iVar6 = std::vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>::
                  operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                              *)g_vecPremiumOverEquipableInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_1c + 0xc) * 8 + 8))
          ;
          iVar6 = *(int *)(iVar6 + 4 + local_18 * 4);
          iVar4 = local_20 * 0x24 + local_1c;
          iVar5 = std::vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>::
                  operator[]((vector<SPremiumOverEquipableInfo,std::allocator<SPremiumOverEquipableInfo>>
                              *)g_vecPremiumOverEquipableInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_1c + 0xc) * 8 + 8))
          ;
          piVar7 = std::max<int>((int *)(this + (*(int *)(iVar5 + 4 + local_18 * 4) + 0x218) * 4 + 4
                                        ),(int *)(g_SPremiumInfo + (iVar4 + 0xc) * 8 + 0xc));
          *(int *)(this + (iVar6 + 0x218) * 4 + 4) = *piVar7;
          local_18 = local_18 + 1;
        }
      }
      for (local_14 = 0; local_14 < *(int *)(g_SPremiumInfo + local_20 * 0x120 + 0x90);
          local_14 = local_14 + 1) {
        local_10 = 0;
        while (piVar7 = (int *)std::
                               vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                               ::operator[]((vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                                             *)g_vecPremiumReturnItemInfo,
                                            *(uint *)(g_SPremiumInfo +
                                                     (local_20 * 0x24 + local_14 + 0x12) * 8 + 4)),
              local_10 < *piVar7) {
          iVar6 = std::vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>::
                  operator[]((vector<SPremiumReturnItemInfo,std::allocator<SPremiumReturnItemInfo>>
                              *)g_vecPremiumReturnItemInfo,
                             *(uint *)(g_SPremiumInfo + (local_20 * 0x24 + local_14 + 0x12) * 8 + 4)
                            );
          local_44 = *(int *)(iVar6 + 4 + local_10 * 4);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_48);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_3c);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                            (local_48,(_Rb_tree_iterator *)local_3c);
          if (cVar2 == '\0') {
            iVar6 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_48);
            *(int *)(iVar6 + 4) =
                 *(int *)(iVar6 + 4) +
                 *(int *)(g_SPremiumInfo + (local_20 * 0x24 + local_14 + 0x12) * 8 + 8);
          }
          else {
            std::make_pair<int&,int&>(local_28,&local_44);
            std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
            std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                      (local_38);
          }
          local_10 = local_10 + 1;
        }
      }
      _Additioal_info::operator+=
                ((_Additioal_info *)(this + 0x8bd),
                 (_Additioal_info *)
                 (g_SPremiumInfo + *(int *)(this + local_20 * 0x14) * 0x120 + 200));
    }
  }
  return;
}

```

---

## RecalcAdditionalInfo

```asm
// === 086ae8c6 WongWork::CUserPremium::RecalcAdditionalInfo  [0x086ae8c6-0x86aeca3] ===
 86ae8c6:	55                   	push   %ebp
 86ae8c7:	89 e5                	mov    %esp,%ebp
 86ae8c9:	53                   	push   %ebx
 86ae8ca:	83 ec 34             	sub    $0x34,%esp
 86ae8cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ae8d0:	89 04 24             	mov    %eax,(%esp)
 86ae8d3:	e8 5a 1b a7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86ae8d8:	85 c0                	test   %eax,%eax
 86ae8da:	74 0f                	je     86ae8eb <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x25>
 86ae8dc:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae8df:	89 04 24             	mov    %eax,(%esp)
 86ae8e2:	e8 b9 e4 a7 ff       	call   812cda0 <_ZNK8WongWork12CUserPremium18GetAdvPremiumCountEv>
 86ae8e7:	85 c0                	test   %eax,%eax
 86ae8e9:	75 07                	jne    86ae8f2 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x2c>
 86ae8eb:	b8 01 00 00 00       	mov    $0x1,%eax
 86ae8f0:	eb 05                	jmp    86ae8f7 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x31>
 86ae8f2:	b8 00 00 00 00       	mov    $0x0,%eax
 86ae8f7:	84 c0                	test   %al,%al
 86ae8f9:	0f 85 9d 03 00 00    	jne    86aec9c <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x3d6>
 86ae8ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ae902:	89 04 24             	mov    %eax,(%esp)
 86ae905:	e8 b2 59 e0 ff       	call   84b42bc <_ZNK15CUserCharacInfo20getCurCharacAddInfoREv>
 86ae90a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ae90d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ae910:	8b 10                	mov    (%eax),%edx
 86ae912:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae915:	8b 80 bd 08 00 00    	mov    0x8bd(%eax),%eax
 86ae91b:	89 c1                	mov    %eax,%ecx
 86ae91d:	0f af ca             	imul   %edx,%ecx
 86ae920:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86ae923:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86ae928:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ae92b:	f7 e2                	mul    %edx
 86ae92d:	c1 ea 05             	shr    $0x5,%edx
 86ae930:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae933:	89 90 0f 09 00 00    	mov    %edx,0x90f(%eax)
 86ae939:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ae93c:	8b 50 04             	mov    0x4(%eax),%edx
 86ae93f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae942:	8b 80 c1 08 00 00    	mov    0x8c1(%eax),%eax
 86ae948:	89 c1                	mov    %eax,%ecx
 86ae94a:	0f af ca             	imul   %edx,%ecx
 86ae94d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86ae950:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86ae955:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ae958:	f7 e2                	mul    %edx
 86ae95a:	c1 ea 05             	shr    $0x5,%edx
 86ae95d:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae960:	89 90 13 09 00 00    	mov    %edx,0x913(%eax)
 86ae966:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ae969:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 86ae96d:	0f b7 d0             	movzwl %ax,%edx
 86ae970:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae973:	0f b7 80 c5 08 00 00 	movzwl 0x8c5(%eax),%eax
 86ae97a:	0f b7 c0             	movzwl %ax,%eax
 86ae97d:	89 d1                	mov    %edx,%ecx
 86ae97f:	0f af c8             	imul   %eax,%ecx
 86ae982:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86ae987:	89 c8                	mov    %ecx,%eax
 86ae989:	f7 ea                	imul   %edx
 86ae98b:	c1 fa 05             	sar    $0x5,%edx
 86ae98e:	89 c8                	mov    %ecx,%eax
 86ae990:	c1 f8 1f             	sar    $0x1f,%eax
 86ae993:	89 d1                	mov    %edx,%ecx
 86ae995:	29 c1                	sub    %eax,%ecx
 86ae997:	89 c8                	mov    %ecx,%eax
 86ae999:	89 c2                	mov    %eax,%edx
 86ae99b:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae99e:	66 89 90 17 09 00 00 	mov    %dx,0x917(%eax)
 86ae9a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ae9a8:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 86ae9ac:	0f b7 d0             	movzwl %ax,%edx
 86ae9af:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae9b2:	0f b7 80 c7 08 00 00 	movzwl 0x8c7(%eax),%eax
 86ae9b9:	0f b7 c0             	movzwl %ax,%eax
 86ae9bc:	89 d1                	mov    %edx,%ecx
 86ae9be:	0f af c8             	imul   %eax,%ecx
 86ae9c1:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86ae9c6:	89 c8                	mov    %ecx,%eax
 86ae9c8:	f7 ea                	imul   %edx
 86ae9ca:	c1 fa 05             	sar    $0x5,%edx
 86ae9cd:	89 c8                	mov    %ecx,%eax
 86ae9cf:	c1 f8 1f             	sar    $0x1f,%eax
 86ae9d2:	89 d1                	mov    %edx,%ecx
 86ae9d4:	29 c1                	sub    %eax,%ecx
 86ae9d6:	89 c8                	mov    %ecx,%eax
 86ae9d8:	89 c2                	mov    %eax,%edx
 86ae9da:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae9dd:	66 89 90 19 09 00 00 	mov    %dx,0x919(%eax)
 86ae9e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ae9e7:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 86ae9eb:	0f b7 d0             	movzwl %ax,%edx
 86ae9ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86ae9f1:	0f b7 80 c9 08 00 00 	movzwl 0x8c9(%eax),%eax
 86ae9f8:	0f b7 c0             	movzwl %ax,%eax
 86ae9fb:	89 d1                	mov    %edx,%ecx
 86ae9fd:	0f af c8             	imul   %eax,%ecx
 86aea00:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aea05:	89 c8                	mov    %ecx,%eax
 86aea07:	f7 ea                	imul   %edx
 86aea09:	c1 fa 05             	sar    $0x5,%edx
 86aea0c:	89 c8                	mov    %ecx,%eax
 86aea0e:	c1 f8 1f             	sar    $0x1f,%eax
 86aea11:	89 d1                	mov    %edx,%ecx
 86aea13:	29 c1                	sub    %eax,%ecx
 86aea15:	89 c8                	mov    %ecx,%eax
 86aea17:	89 c2                	mov    %eax,%edx
 86aea19:	8b 45 08             	mov    0x8(%ebp),%eax
 86aea1c:	66 89 90 1b 09 00 00 	mov    %dx,0x91b(%eax)
 86aea23:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aea26:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 86aea2a:	0f b7 d0             	movzwl %ax,%edx
 86aea2d:	8b 45 08             	mov    0x8(%ebp),%eax
 86aea30:	0f b7 80 cb 08 00 00 	movzwl 0x8cb(%eax),%eax
 86aea37:	0f b7 c0             	movzwl %ax,%eax
 86aea3a:	89 d1                	mov    %edx,%ecx
 86aea3c:	0f af c8             	imul   %eax,%ecx
 86aea3f:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aea44:	89 c8                	mov    %ecx,%eax
 86aea46:	f7 ea                	imul   %edx
 86aea48:	c1 fa 05             	sar    $0x5,%edx
 86aea4b:	89 c8                	mov    %ecx,%eax
 86aea4d:	c1 f8 1f             	sar    $0x1f,%eax
 86aea50:	89 d1                	mov    %edx,%ecx
 86aea52:	29 c1                	sub    %eax,%ecx
 86aea54:	89 c8                	mov    %ecx,%eax
 86aea56:	89 c2                	mov    %eax,%edx
 86aea58:	8b 45 08             	mov    0x8(%ebp),%eax
 86aea5b:	66 89 90 1d 09 00 00 	mov    %dx,0x91d(%eax)
 86aea62:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86aea69:	eb 55                	jmp    86aeac0 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x1fa>
 86aea6b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86aea6e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86aea71:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aea74:	83 c2 08             	add    $0x8,%edx
 86aea77:	0f b7 04 50          	movzwl (%eax,%edx,2),%eax
 86aea7b:	0f bf d0             	movswl %ax,%edx
 86aea7e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86aea81:	8b 45 08             	mov    0x8(%ebp),%eax
 86aea84:	81 c1 60 04 00 00    	add    $0x460,%ecx
 86aea8a:	0f b7 44 48 0d       	movzwl 0xd(%eax,%ecx,2),%eax
 86aea8f:	98                   	cwtl
 86aea90:	89 d1                	mov    %edx,%ecx
 86aea92:	0f af c8             	imul   %eax,%ecx
 86aea95:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aea9a:	89 c8                	mov    %ecx,%eax
 86aea9c:	f7 ea                	imul   %edx
 86aea9e:	c1 fa 05             	sar    $0x5,%edx
 86aeaa1:	89 c8                	mov    %ecx,%eax
 86aeaa3:	c1 f8 1f             	sar    $0x1f,%eax
 86aeaa6:	89 d1                	mov    %edx,%ecx
 86aeaa8:	29 c1                	sub    %eax,%ecx
 86aeaaa:	89 c8                	mov    %ecx,%eax
 86aeaac:	89 c2                	mov    %eax,%edx
 86aeaae:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeab1:	8d 8b 88 04 00 00    	lea    0x488(%ebx),%ecx
 86aeab7:	66 89 54 48 0f       	mov    %dx,0xf(%eax,%ecx,2)
 86aeabc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86aeac0:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 86aeac4:	0f 9e c0             	setle  %al
 86aeac7:	84 c0                	test   %al,%al
 86aeac9:	75 a0                	jne    86aea6b <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x1a5>
 86aeacb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aeace:	8b 50 3a             	mov    0x3a(%eax),%edx
 86aead1:	8b 45 08             	mov    0x8(%ebp),%eax
 86aead4:	8b 80 f7 08 00 00    	mov    0x8f7(%eax),%eax
 86aeada:	89 d1                	mov    %edx,%ecx
 86aeadc:	0f af c8             	imul   %eax,%ecx
 86aeadf:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aeae4:	89 c8                	mov    %ecx,%eax
 86aeae6:	f7 ea                	imul   %edx
 86aeae8:	c1 fa 05             	sar    $0x5,%edx
 86aeaeb:	89 c8                	mov    %ecx,%eax
 86aeaed:	c1 f8 1f             	sar    $0x1f,%eax
 86aeaf0:	29 c2                	sub    %eax,%edx
 86aeaf2:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeaf5:	89 90 49 09 00 00    	mov    %edx,0x949(%eax)
 86aeafb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aeafe:	0f b7 40 3e          	movzwl 0x3e(%eax),%eax
 86aeb02:	0f bf d0             	movswl %ax,%edx
 86aeb05:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb08:	0f b7 80 fb 08 00 00 	movzwl 0x8fb(%eax),%eax
 86aeb0f:	98                   	cwtl
 86aeb10:	89 d1                	mov    %edx,%ecx
 86aeb12:	0f af c8             	imul   %eax,%ecx
 86aeb15:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aeb1a:	89 c8                	mov    %ecx,%eax
 86aeb1c:	f7 ea                	imul   %edx
 86aeb1e:	c1 fa 05             	sar    $0x5,%edx
 86aeb21:	89 c8                	mov    %ecx,%eax
 86aeb23:	c1 f8 1f             	sar    $0x1f,%eax
 86aeb26:	89 d1                	mov    %edx,%ecx
 86aeb28:	29 c1                	sub    %eax,%ecx
 86aeb2a:	89 c8                	mov    %ecx,%eax
 86aeb2c:	89 c2                	mov    %eax,%edx
 86aeb2e:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb31:	66 89 90 4d 09 00 00 	mov    %dx,0x94d(%eax)
 86aeb38:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aeb3b:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 86aeb3f:	0f bf d0             	movswl %ax,%edx
 86aeb42:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb45:	0f b7 80 fd 08 00 00 	movzwl 0x8fd(%eax),%eax
 86aeb4c:	98                   	cwtl
 86aeb4d:	89 d1                	mov    %edx,%ecx
 86aeb4f:	0f af c8             	imul   %eax,%ecx
 86aeb52:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aeb57:	89 c8                	mov    %ecx,%eax
 86aeb59:	f7 ea                	imul   %edx
 86aeb5b:	c1 fa 05             	sar    $0x5,%edx
 86aeb5e:	89 c8                	mov    %ecx,%eax
 86aeb60:	c1 f8 1f             	sar    $0x1f,%eax
 86aeb63:	89 d1                	mov    %edx,%ecx
 86aeb65:	29 c1                	sub    %eax,%ecx
 86aeb67:	89 c8                	mov    %ecx,%eax
 86aeb69:	89 c2                	mov    %eax,%edx
 86aeb6b:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb6e:	66 89 90 4f 09 00 00 	mov    %dx,0x94f(%eax)
 86aeb75:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aeb78:	8b 50 42             	mov    0x42(%eax),%edx
 86aeb7b:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb7e:	8b 80 ff 08 00 00    	mov    0x8ff(%eax),%eax
 86aeb84:	89 c1                	mov    %eax,%ecx
 86aeb86:	0f af ca             	imul   %edx,%ecx
 86aeb89:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86aeb8c:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aeb91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86aeb94:	f7 e2                	mul    %edx
 86aeb96:	c1 ea 05             	shr    $0x5,%edx
 86aeb99:	8b 45 08             	mov    0x8(%ebp),%eax
 86aeb9c:	89 90 51 09 00 00    	mov    %edx,0x951(%eax)
 86aeba2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aeba5:	0f b7 40 46          	movzwl 0x46(%eax),%eax
 86aeba9:	0f b7 d0             	movzwl %ax,%edx
 86aebac:	8b 45 08             	mov    0x8(%ebp),%eax
 86aebaf:	0f b7 80 03 09 00 00 	movzwl 0x903(%eax),%eax
 86aebb6:	0f b7 c0             	movzwl %ax,%eax
 86aebb9:	89 d1                	mov    %edx,%ecx
 86aebbb:	0f af c8             	imul   %eax,%ecx
 86aebbe:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aebc3:	89 c8                	mov    %ecx,%eax
 86aebc5:	f7 ea                	imul   %edx
 86aebc7:	c1 fa 05             	sar    $0x5,%edx
 86aebca:	89 c8                	mov    %ecx,%eax
 86aebcc:	c1 f8 1f             	sar    $0x1f,%eax
 86aebcf:	89 d1                	mov    %edx,%ecx
 86aebd1:	29 c1                	sub    %eax,%ecx
 86aebd3:	89 c8                	mov    %ecx,%eax
 86aebd5:	89 c2                	mov    %eax,%edx
 86aebd7:	8b 45 08             	mov    0x8(%ebp),%eax
 86aebda:	66 89 90 55 09 00 00 	mov    %dx,0x955(%eax)
 86aebe1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aebe4:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 86aebe8:	0f b7 d0             	movzwl %ax,%edx
 86aebeb:	8b 45 08             	mov    0x8(%ebp),%eax
 86aebee:	0f b7 80 05 09 00 00 	movzwl 0x905(%eax),%eax
 86aebf5:	0f b7 c0             	movzwl %ax,%eax
 86aebf8:	89 d1                	mov    %edx,%ecx
 86aebfa:	0f af c8             	imul   %eax,%ecx
 86aebfd:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aec02:	89 c8                	mov    %ecx,%eax
 86aec04:	f7 ea                	imul   %edx
 86aec06:	c1 fa 05             	sar    $0x5,%edx
 86aec09:	89 c8                	mov    %ecx,%eax
 86aec0b:	c1 f8 1f             	sar    $0x1f,%eax
 86aec0e:	89 d1                	mov    %edx,%ecx
 86aec10:	29 c1                	sub    %eax,%ecx
 86aec12:	89 c8                	mov    %ecx,%eax
 86aec14:	89 c2                	mov    %eax,%edx
 86aec16:	8b 45 08             	mov    0x8(%ebp),%eax
 86aec19:	66 89 90 57 09 00 00 	mov    %dx,0x957(%eax)
 86aec20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aec23:	0f b7 40 4a          	movzwl 0x4a(%eax),%eax
 86aec27:	0f bf d0             	movswl %ax,%edx
 86aec2a:	8b 45 08             	mov    0x8(%ebp),%eax
 86aec2d:	0f b7 80 07 09 00 00 	movzwl 0x907(%eax),%eax
 86aec34:	98                   	cwtl
 86aec35:	89 d1                	mov    %edx,%ecx
 86aec37:	0f af c8             	imul   %eax,%ecx
 86aec3a:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aec3f:	89 c8                	mov    %ecx,%eax
 86aec41:	f7 ea                	imul   %edx
 86aec43:	c1 fa 05             	sar    $0x5,%edx
 86aec46:	89 c8                	mov    %ecx,%eax
 86aec48:	c1 f8 1f             	sar    $0x1f,%eax
 86aec4b:	89 d1                	mov    %edx,%ecx
 86aec4d:	29 c1                	sub    %eax,%ecx
 86aec4f:	89 c8                	mov    %ecx,%eax
 86aec51:	89 c2                	mov    %eax,%edx
 86aec53:	8b 45 08             	mov    0x8(%ebp),%eax
 86aec56:	66 89 90 59 09 00 00 	mov    %dx,0x959(%eax)
 86aec5d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aec60:	0f b7 40 4c          	movzwl 0x4c(%eax),%eax
 86aec64:	0f bf d0             	movswl %ax,%edx
 86aec67:	8b 45 08             	mov    0x8(%ebp),%eax
 86aec6a:	0f b7 80 09 09 00 00 	movzwl 0x909(%eax),%eax
 86aec71:	98                   	cwtl
 86aec72:	89 d1                	mov    %edx,%ecx
 86aec74:	0f af c8             	imul   %eax,%ecx
 86aec77:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 86aec7c:	89 c8                	mov    %ecx,%eax
 86aec7e:	f7 ea                	imul   %edx
 86aec80:	c1 fa 05             	sar    $0x5,%edx
 86aec83:	89 c8                	mov    %ecx,%eax
 86aec85:	c1 f8 1f             	sar    $0x1f,%eax
 86aec88:	89 d1                	mov    %edx,%ecx
 86aec8a:	29 c1                	sub    %eax,%ecx
 86aec8c:	89 c8                	mov    %ecx,%eax
 86aec8e:	89 c2                	mov    %eax,%edx
 86aec90:	8b 45 08             	mov    0x8(%ebp),%eax
 86aec93:	66 89 90 5b 09 00 00 	mov    %dx,0x95b(%eax)
 86aec9a:	eb 01                	jmp    86aec9d <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser+0x3d7>
 86aec9c:	90                   	nop
 86aec9d:	83 c4 34             	add    $0x34,%esp
 86aeca0:	5b                   	pop    %ebx
 86aeca1:	5d                   	pop    %ebp
 86aeca2:	c3                   	ret
 86aeca3:	90                   	nop

```

```c
// WongWork::CUserPremium::RecalcAdditionalInfo @ 0x86ae8c6

/* WongWork::CUserPremium::RecalcAdditionalInfo(CUser const*) */

void __thiscall WongWork::CUserPremium::RecalcAdditionalInfo(CUserPremium *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    iVar2 = GetAdvPremiumCount(this);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_086ae8f7;
    }
  }
  bVar1 = true;
LAB_086ae8f7:
  if (!bVar1) {
    piVar3 = (int *)CUserCharacInfo::getCurCharacAddInfoR((CUserCharacInfo *)param_1);
    *(uint *)(this + 0x90f) = (uint)(*(int *)(this + 0x8bd) * *piVar3) / 100;
    *(uint *)(this + 0x913) = (uint)(*(int *)(this + 0x8c1) * piVar3[1]) / 100;
    *(short *)(this + 0x917) =
         (short)((int)((uint)*(ushort *)(piVar3 + 2) * (uint)*(ushort *)(this + 0x8c5)) / 100);
    *(short *)(this + 0x919) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 10) * (uint)*(ushort *)(this + 0x8c7)) / 100)
    ;
    *(short *)(this + 0x91b) =
         (short)((int)((uint)*(ushort *)(piVar3 + 3) * (uint)*(ushort *)(this + 0x8c9)) / 100);
    *(short *)(this + 0x91d) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 0xe) * (uint)*(ushort *)(this + 0x8cb)) / 100
                );
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      *(short *)(this + (local_10 + 0x488) * 2 + 0xf) =
           (short)(((int)*(short *)((int)piVar3 + (local_10 + 8) * 2) *
                   (int)*(short *)(this + (local_10 + 0x460) * 2 + 0xd)) / 100);
    }
    *(int *)(this + 0x949) = (*(int *)((int)piVar3 + 0x3a) * *(int *)(this + 0x8f7)) / 100;
    *(short *)(this + 0x94d) =
         (short)(((int)*(short *)((int)piVar3 + 0x3e) * (int)*(short *)(this + 0x8fb)) / 100);
    *(short *)(this + 0x94f) =
         (short)(((int)(short)piVar3[0x10] * (int)*(short *)(this + 0x8fd)) / 100);
    *(uint *)(this + 0x951) = (uint)(*(int *)(this + 0x8ff) * *(int *)((int)piVar3 + 0x42)) / 100;
    *(short *)(this + 0x955) =
         (short)((int)((uint)*(ushort *)((int)piVar3 + 0x46) * (uint)*(ushort *)(this + 0x903)) /
                100);
    *(short *)(this + 0x957) =
         (short)((int)((uint)*(ushort *)(piVar3 + 0x12) * (uint)*(ushort *)(this + 0x905)) / 100);
    *(short *)(this + 0x959) =
         (short)(((int)*(short *)((int)piVar3 + 0x4a) * (int)*(short *)(this + 0x907)) / 100);
    *(short *)(this + 0x95b) =
         (short)(((int)(short)piVar3[0x13] * (int)*(short *)(this + 0x909)) / 100);
  }
  return;
}

```

---

## RemovePremium

```asm
// === 086adba6 WongWork::CUserPremium::RemovePremium  [0x086adba6-0x86adc69] ===
 86adba6:	55                   	push   %ebp
 86adba7:	89 e5                	mov    %esp,%ebp
 86adba9:	83 ec 28             	sub    $0x28,%esp
 86adbac:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adbaf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adbb2:	89 d0                	mov    %edx,%eax
 86adbb4:	c1 e0 02             	shl    $0x2,%eax
 86adbb7:	01 d0                	add    %edx,%eax
 86adbb9:	c1 e0 02             	shl    $0x2,%eax
 86adbbc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adbbf:	83 c0 10             	add    $0x10,%eax
 86adbc2:	8b 00                	mov    (%eax),%eax
 86adbc4:	83 f8 02             	cmp    $0x2,%eax
 86adbc7:	0f 84 99 00 00 00    	je     86adc66 <_ZN8WongWork12CUserPremium13RemovePremiumEi+0xc0>
 86adbcd:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adbd0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adbd3:	89 d0                	mov    %edx,%eax
 86adbd5:	c1 e0 02             	shl    $0x2,%eax
 86adbd8:	01 d0                	add    %edx,%eax
 86adbda:	c1 e0 02             	shl    $0x2,%eax
 86adbdd:	c7 04 08 00 00 00 00 	movl   $0x0,(%eax,%ecx,1)
 86adbe4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adbe7:	89 d0                	mov    %edx,%eax
 86adbe9:	c1 e0 03             	shl    $0x3,%eax
 86adbec:	01 d0                	add    %edx,%eax
 86adbee:	c1 e0 05             	shl    $0x5,%eax
 86adbf1:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 86adbf7:	83 f8 01             	cmp    $0x1,%eax
 86adbfa:	75 35                	jne    86adc31 <_ZN8WongWork12CUserPremium13RemovePremiumEi+0x8b>
 86adbfc:	8b 45 08             	mov    0x8(%ebp),%eax
 86adbff:	8b 80 48 08 00 00    	mov    0x848(%eax),%eax
 86adc05:	83 e8 01             	sub    $0x1,%eax
 86adc08:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86adc0b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86adc12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86adc15:	89 44 24 04          	mov    %eax,0x4(%esp)
 86adc19:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86adc1c:	89 04 24             	mov    %eax,(%esp)
 86adc1f:	e8 f4 05 9e ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 86adc24:	8b 10                	mov    (%eax),%edx
 86adc26:	8b 45 08             	mov    0x8(%ebp),%eax
 86adc29:	89 90 48 08 00 00    	mov    %edx,0x848(%eax)
 86adc2f:	eb 36                	jmp    86adc67 <_ZN8WongWork12CUserPremium13RemovePremiumEi+0xc1>
 86adc31:	8b 45 08             	mov    0x8(%ebp),%eax
 86adc34:	8b 80 4c 08 00 00    	mov    0x84c(%eax),%eax
 86adc3a:	83 e8 01             	sub    $0x1,%eax
 86adc3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86adc40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86adc47:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86adc4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86adc4e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86adc51:	89 04 24             	mov    %eax,(%esp)
 86adc54:	e8 bf 05 9e ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 86adc59:	8b 10                	mov    (%eax),%edx
 86adc5b:	8b 45 08             	mov    0x8(%ebp),%eax
 86adc5e:	89 90 4c 08 00 00    	mov    %edx,0x84c(%eax)
 86adc64:	eb 01                	jmp    86adc67 <_ZN8WongWork12CUserPremium13RemovePremiumEi+0xc1>
 86adc66:	90                   	nop
 86adc67:	c9                   	leave
 86adc68:	c3                   	ret
 86adc69:	90                   	nop

```

```c
// WongWork::CUserPremium::RemovePremium @ 0x86adba6

/* WongWork::CUserPremium::RemovePremium(int) */

void __thiscall WongWork::CUserPremium::RemovePremium(CUserPremium *this,int param_1)

{
  int *piVar1;
  int local_1c [3];
  int local_10 [3];
  
  if (*(int *)(this + param_1 * 0x14 + 0x10) != 2) {
    *(undefined4 *)(this + param_1 * 0x14) = 0;
    if (*(int *)(g_SPremiumInfo + param_1 * 0x120) == 1) {
      local_1c[0] = *(int *)(this + 0x848) + -1;
      local_1c[1] = 0;
      piVar1 = std::max<int>(local_1c + 1,local_1c);
      *(int *)(this + 0x848) = *piVar1;
    }
    else {
      local_1c[2] = *(int *)(this + 0x84c) + -1;
      local_10[0] = 0;
      piVar1 = std::max<int>(local_10,local_1c + 2);
      *(int *)(this + 0x84c) = *piVar1;
    }
  }
  return;
}

```

---

## SetPremiumItemData

```asm
// === 086af70a WongWork::CUserPremium::SetPremiumItemData  [0x086af70a-0x86af7c3] ===
 86af70a:	55                   	push   %ebp
 86af70b:	89 e5                	mov    %esp,%ebp
 86af70d:	83 ec 48             	sub    $0x48,%esp
 86af710:	8b 45 08             	mov    0x8(%ebp),%eax
 86af713:	85 c0                	test   %eax,%eax
 86af715:	75 0a                	jne    86af721 <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData+0x17>
 86af717:	b8 01 00 00 00       	mov    $0x1,%eax
 86af71c:	e9 a0 00 00 00       	jmp    86af7c1 <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData+0xb7>
 86af721:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86af724:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 86af72b:	09 
 86af72c:	89 04 24             	mov    %eax,(%esp)
 86af72f:	e8 fe ec bc ff       	call   827e432 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE3endEv>
 86af734:	83 ec 04             	sub    $0x4,%esp
 86af737:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86af73a:	8d 55 08             	lea    0x8(%ebp),%edx
 86af73d:	89 54 24 08          	mov    %edx,0x8(%esp)
 86af741:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 86af748:	09 
 86af749:	89 04 24             	mov    %eax,(%esp)
 86af74c:	e8 b5 ec bc ff       	call   827e406 <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE4findERS4_>
 86af751:	83 ec 04             	sub    $0x4,%esp
 86af754:	8d 45 c8             	lea    -0x38(%ebp),%eax
 86af757:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af75b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86af75e:	89 04 24             	mov    %eax,(%esp)
 86af761:	e8 f2 ec bc ff       	call   827e458 <_ZNKSt17_Rb_tree_iteratorISt4pairIKm17STPremiumItemDataEEeqERKS4_>
 86af766:	84 c0                	test   %al,%al
 86af768:	74 52                	je     86af7bc <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData+0xb2>
 86af76a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86af76d:	8b 55 0c             	mov    0xc(%ebp),%edx
 86af770:	89 54 24 08          	mov    %edx,0x8(%esp)
 86af774:	8d 55 08             	lea    0x8(%ebp),%edx
 86af777:	89 54 24 04          	mov    %edx,0x4(%esp)
 86af77b:	89 04 24             	mov    %eax,(%esp)
 86af77e:	e8 8f 13 00 00       	call   86b0b12 <_ZSt9make_pairIRKmRK17STPremiumItemDataESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 86af783:	83 ec 04             	sub    $0x4,%esp
 86af786:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86af789:	89 44 24 04          	mov    %eax,0x4(%esp)
 86af78d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86af790:	89 04 24             	mov    %eax,(%esp)
 86af793:	e8 b8 13 00 00       	call   86b0b50 <_ZNSt4pairIKm17STPremiumItemDataEC1ImS1_EEOS_IT_T0_E>
 86af798:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86af79b:	8d 55 d8             	lea    -0x28(%ebp),%edx
 86af79e:	89 54 24 08          	mov    %edx,0x8(%esp)
 86af7a2:	c7 44 24 04 98 b1 48 	movl   $0x948b198,0x4(%esp)
 86af7a9:	09 
 86af7aa:	89 04 24             	mov    %eax,(%esp)
 86af7ad:	e8 da 13 00 00       	call   86b0b8c <_ZNSt3mapIm17STPremiumItemDataSt4lessImESaISt4pairIKmS0_EEE6insertERKS5_>
 86af7b2:	83 ec 04             	sub    $0x4,%esp
 86af7b5:	b8 01 00 00 00       	mov    $0x1,%eax
 86af7ba:	eb 05                	jmp    86af7c1 <_ZN8WongWork12CUserPremium18SetPremiumItemDataEmRK17STPremiumItemData+0xb7>
 86af7bc:	b8 00 00 00 00       	mov    $0x0,%eax
 86af7c1:	c9                   	leave
 86af7c2:	c3                   	ret
 86af7c3:	90                   	nop

```

```c
// WongWork::CUserPremium::SetPremiumItemData @ 0x86af70a

/* WongWork::CUserPremium::SetPremiumItemData(unsigned long, STPremiumItemData const&) */

undefined4 WongWork::CUserPremium::SetPremiumItemData(ulong param_1,STPremiumItemData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
  local_3c [4];
  _Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>> local_38 [4];
  pair local_34 [8];
  pair<unsigned_long_const,STPremiumItemData> local_2c [16];
  ulong local_1c [6];
  
  if (param_1 == 0) {
    uVar2 = 1;
  }
  else {
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::end(local_3c);
    std::
    map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
    ::find((ulong *)local_38);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,STPremiumItemData>>::operator==
                      (local_38,(_Rb_tree_iterator *)local_3c);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      std::make_pair<unsigned_long_const&,STPremiumItemData_const&>
                (local_1c,(STPremiumItemData *)&param_1);
      std::pair<unsigned_long_const,STPremiumItemData>::pair<unsigned_long,STPremiumItemData>
                (local_2c,(pair *)local_1c);
      std::
      map<unsigned_long,STPremiumItemData,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,STPremiumItemData>>>
      ::insert(local_34);
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## _CheckApply

```asm
// === 086ae834 WongWork::CUserPremium::_CheckApply  [0x086ae834-0x86ae8c5] ===
 86ae834:	55                   	push   %ebp
 86ae835:	89 e5                	mov    %esp,%ebp
 86ae837:	83 ec 10             	sub    $0x10,%esp
 86ae83a:	c6 45 fb 00          	movb   $0x0,-0x5(%ebp)
 86ae83e:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ae841:	89 d0                	mov    %edx,%eax
 86ae843:	c1 e0 03             	shl    $0x3,%eax
 86ae846:	01 d0                	add    %edx,%eax
 86ae848:	c1 e0 05             	shl    $0x5,%eax
 86ae84b:	8b 80 ec 3a 48 09    	mov    0x9483aec(%eax),%eax
 86ae851:	83 f8 ff             	cmp    $0xffffffff,%eax
 86ae854:	75 07                	jne    86ae85d <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x29>
 86ae856:	b8 01 00 00 00       	mov    $0x1,%eax
 86ae85b:	eb 67                	jmp    86ae8c4 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x90>
 86ae85d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86ae864:	eb 4c                	jmp    86ae8b2 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x7e>
 86ae866:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ae869:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 86ae86c:	89 d0                	mov    %edx,%eax
 86ae86e:	c1 e0 03             	shl    $0x3,%eax
 86ae871:	01 d0                	add    %edx,%eax
 86ae873:	c1 e0 03             	shl    $0x3,%eax
 86ae876:	01 c8                	add    %ecx,%eax
 86ae878:	83 c0 28             	add    $0x28,%eax
 86ae87b:	8b 04 85 4c 3a 48 09 	mov    0x9483a4c(,%eax,4),%eax
 86ae882:	83 f8 ff             	cmp    $0xffffffff,%eax
 86ae885:	74 38                	je     86ae8bf <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x8b>
 86ae887:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ae88a:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 86ae88d:	89 d0                	mov    %edx,%eax
 86ae88f:	c1 e0 03             	shl    $0x3,%eax
 86ae892:	01 d0                	add    %edx,%eax
 86ae894:	c1 e0 03             	shl    $0x3,%eax
 86ae897:	01 c8                	add    %ecx,%eax
 86ae899:	83 c0 28             	add    $0x28,%eax
 86ae89c:	8b 14 85 4c 3a 48 09 	mov    0x9483a4c(,%eax,4),%edx
 86ae8a3:	8b 45 28             	mov    0x28(%ebp),%eax
 86ae8a6:	39 c2                	cmp    %eax,%edx
 86ae8a8:	75 04                	jne    86ae8ae <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x7a>
 86ae8aa:	c6 45 fb 01          	movb   $0x1,-0x5(%ebp)
 86ae8ae:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86ae8b2:	83 7d fc 06          	cmpl   $0x6,-0x4(%ebp)
 86ae8b6:	0f 9e c0             	setle  %al
 86ae8b9:	84 c0                	test   %al,%al
 86ae8bb:	75 a9                	jne    86ae866 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x32>
 86ae8bd:	eb 01                	jmp    86ae8c0 <_ZN8WongWork12CUserPremium11_CheckApplyEi2tm+0x8c>
 86ae8bf:	90                   	nop
 86ae8c0:	0f b6 45 fb          	movzbl -0x5(%ebp),%eax
 86ae8c4:	c9                   	leave
 86ae8c5:	c3                   	ret

```

```c
// WongWork::CUserPremium::_CheckApply @ 0x86ae834

/* WongWork::CUserPremium::_CheckApply(int, tm) */

undefined1 WongWork::CUserPremium::_CheckApply(int param_1,tm param_2)

{
  undefined1 local_9;
  int local_8;
  
  local_9 = 0;
  if (*(int *)(g_SPremiumInfo + param_2.tm_sec * 0x120 + 0xac) == -1) {
    local_9 = 1;
  }
  else {
    local_8 = 0;
    while ((local_8 < 7 &&
           (*(int *)(g_SPremiumInfo + (param_2.tm_sec * 0x48 + local_8 + 0x28) * 4 + 0xc) != -1))) {
      if (*(int *)(g_SPremiumInfo + (param_2.tm_sec * 0x48 + local_8 + 0x28) * 4 + 0xc) ==
          param_2.tm_yday) {
        local_9 = 1;
      }
      local_8 = local_8 + 1;
    }
  }
  return local_9;
}

```

---

## startPremium

```asm
// === 086adc6a WongWork::CUserPremium::startPremium  [0x086adc6a-0x86add9b] ===
 86adc6a:	55                   	push   %ebp
 86adc6b:	89 e5                	mov    %esp,%ebp
 86adc6d:	83 ec 38             	sub    $0x38,%esp
 86adc70:	8b 45 10             	mov    0x10(%ebp),%eax
 86adc73:	88 45 e4             	mov    %al,-0x1c(%ebp)
 86adc76:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 86adc7a:	83 f0 01             	xor    $0x1,%eax
 86adc7d:	84 c0                	test   %al,%al
 86adc7f:	74 27                	je     86adca8 <_ZN8WongWork12CUserPremium12startPremiumEib+0x3e>
 86adc81:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adc84:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adc87:	89 d0                	mov    %edx,%eax
 86adc89:	c1 e0 02             	shl    $0x2,%eax
 86adc8c:	01 d0                	add    %edx,%eax
 86adc8e:	c1 e0 02             	shl    $0x2,%eax
 86adc91:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adc94:	83 c0 10             	add    $0x10,%eax
 86adc97:	8b 00                	mov    (%eax),%eax
 86adc99:	83 f8 02             	cmp    $0x2,%eax
 86adc9c:	74 0a                	je     86adca8 <_ZN8WongWork12CUserPremium12startPremiumEib+0x3e>
 86adc9e:	b8 00 00 00 00       	mov    $0x0,%eax
 86adca3:	e9 f2 00 00 00       	jmp    86add9a <_ZN8WongWork12CUserPremium12startPremiumEib+0x130>
 86adca8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86adcaf:	e8 ea df a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86adcb4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86adcb7:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adcba:	89 d0                	mov    %edx,%eax
 86adcbc:	c1 e0 03             	shl    $0x3,%eax
 86adcbf:	01 d0                	add    %edx,%eax
 86adcc1:	c1 e0 05             	shl    $0x5,%eax
 86adcc4:	8b 80 44 3a 48 09    	mov    0x9483a44(%eax),%eax
 86adcca:	85 c0                	test   %eax,%eax
 86adccc:	74 67                	je     86add35 <_ZN8WongWork12CUserPremium12startPremiumEib+0xcb>
 86adcce:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adcd1:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adcd4:	89 d0                	mov    %edx,%eax
 86adcd6:	c1 e0 02             	shl    $0x2,%eax
 86adcd9:	01 d0                	add    %edx,%eax
 86adcdb:	c1 e0 02             	shl    $0x2,%eax
 86adcde:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adce1:	83 c0 04             	add    $0x4,%eax
 86adce4:	8b 00                	mov    (%eax),%eax
 86adce6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86adce9:	7e 26                	jle    86add11 <_ZN8WongWork12CUserPremium12startPremiumEib+0xa7>
 86adceb:	8b 55 0c             	mov    0xc(%ebp),%edx
 86adcee:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86adcf1:	89 d0                	mov    %edx,%eax
 86adcf3:	c1 e0 02             	shl    $0x2,%eax
 86adcf6:	01 d0                	add    %edx,%eax
 86adcf8:	c1 e0 02             	shl    $0x2,%eax
 86adcfb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86adcfe:	83 c0 10             	add    $0x10,%eax
 86add01:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 86add07:	b8 00 00 00 00       	mov    $0x0,%eax
 86add0c:	e9 89 00 00 00       	jmp    86add9a <_ZN8WongWork12CUserPremium12startPremiumEib+0x130>
 86add11:	8b 55 0c             	mov    0xc(%ebp),%edx
 86add14:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86add17:	89 d0                	mov    %edx,%eax
 86add19:	c1 e0 02             	shl    $0x2,%eax
 86add1c:	01 d0                	add    %edx,%eax
 86add1e:	c1 e0 02             	shl    $0x2,%eax
 86add21:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86add24:	83 c0 08             	add    $0x8,%eax
 86add27:	8b 00                	mov    (%eax),%eax
 86add29:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86add2c:	7f 07                	jg     86add35 <_ZN8WongWork12CUserPremium12startPremiumEib+0xcb>
 86add2e:	b8 00 00 00 00       	mov    $0x0,%eax
 86add33:	eb 65                	jmp    86add9a <_ZN8WongWork12CUserPremium12startPremiumEib+0x130>
 86add35:	8b 55 0c             	mov    0xc(%ebp),%edx
 86add38:	89 d0                	mov    %edx,%eax
 86add3a:	c1 e0 03             	shl    $0x3,%eax
 86add3d:	01 d0                	add    %edx,%eax
 86add3f:	c1 e0 05             	shl    $0x5,%eax
 86add42:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 86add48:	83 f8 01             	cmp    $0x1,%eax
 86add4b:	75 17                	jne    86add64 <_ZN8WongWork12CUserPremium12startPremiumEib+0xfa>
 86add4d:	8b 45 08             	mov    0x8(%ebp),%eax
 86add50:	8b 80 48 08 00 00    	mov    0x848(%eax),%eax
 86add56:	8d 50 01             	lea    0x1(%eax),%edx
 86add59:	8b 45 08             	mov    0x8(%ebp),%eax
 86add5c:	89 90 48 08 00 00    	mov    %edx,0x848(%eax)
 86add62:	eb 15                	jmp    86add79 <_ZN8WongWork12CUserPremium12startPremiumEib+0x10f>
 86add64:	8b 45 08             	mov    0x8(%ebp),%eax
 86add67:	8b 80 4c 08 00 00    	mov    0x84c(%eax),%eax
 86add6d:	8d 50 01             	lea    0x1(%eax),%edx
 86add70:	8b 45 08             	mov    0x8(%ebp),%eax
 86add73:	89 90 4c 08 00 00    	mov    %edx,0x84c(%eax)
 86add79:	8b 55 0c             	mov    0xc(%ebp),%edx
 86add7c:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86add7f:	89 d0                	mov    %edx,%eax
 86add81:	c1 e0 02             	shl    $0x2,%eax
 86add84:	01 d0                	add    %edx,%eax
 86add86:	c1 e0 02             	shl    $0x2,%eax
 86add89:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 86add8c:	83 c0 10             	add    $0x10,%eax
 86add8f:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 86add95:	b8 01 00 00 00       	mov    $0x1,%eax
 86add9a:	c9                   	leave
 86add9b:	c3                   	ret

```

```c
// WongWork::CUserPremium::startPremium @ 0x86adc6a

/* WongWork::CUserPremium::startPremium(int, bool) */

undefined4 __thiscall
WongWork::CUserPremium::startPremium(CUserPremium *this,int param_1,bool param_2)

{
  int iVar1;
  
  if ((!param_2) && (*(int *)(this + param_1 * 0x14 + 0x10) != 2)) {
    return 0;
  }
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120 + 4) != 0) {
    if (iVar1 < *(int *)(this + param_1 * 0x14 + 4)) {
      *(undefined4 *)(this + param_1 * 0x14 + 0x10) = 2;
      return 0;
    }
    if (*(int *)(this + param_1 * 0x14 + 8) <= iVar1) {
      return 0;
    }
  }
  if (*(int *)(g_SPremiumInfo + param_1 * 0x120) == 1) {
    *(int *)(this + 0x848) = *(int *)(this + 0x848) + 1;
  }
  else {
    *(int *)(this + 0x84c) = *(int *)(this + 0x84c) + 1;
  }
  *(undefined4 *)(this + param_1 * 0x14 + 0x10) = 1;
  return 1;
}

```


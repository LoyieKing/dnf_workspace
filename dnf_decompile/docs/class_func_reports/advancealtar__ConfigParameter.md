# advancealtar__ConfigParameter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ConfigParameter

```asm
// === 0889b662 advancealtar::ConfigParameter::ConfigParameter  [0x0889b662-0x889b6c5] ===
 889b662:	55                   	push   %ebp
 889b663:	89 e5                	mov    %esp,%ebp
 889b665:	83 ec 18             	sub    $0x18,%esp
 889b668:	8b 45 08             	mov    0x8(%ebp),%eax
 889b66b:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 889b671:	8b 45 08             	mov    0x8(%ebp),%eax
 889b674:	ba 00 00 00 00       	mov    $0x0,%edx
 889b679:	89 50 04             	mov    %edx,0x4(%eax)
 889b67c:	8b 45 08             	mov    0x8(%ebp),%eax
 889b67f:	8d 50 08             	lea    0x8(%eax),%edx
 889b682:	8b 45 08             	mov    0x8(%ebp),%eax
 889b685:	89 50 18             	mov    %edx,0x18(%eax)
 889b688:	8b 45 08             	mov    0x8(%ebp),%eax
 889b68b:	83 c0 08             	add    $0x8,%eax
 889b68e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 889b695:	00 
 889b696:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 889b69d:	00 
 889b69e:	89 04 24             	mov    %eax,(%esp)
 889b6a1:	e8 1a 26 7e ff       	call   807dcc0 <memset@plt>
 889b6a6:	8b 45 08             	mov    0x8(%ebp),%eax
 889b6a9:	83 c0 1c             	add    $0x1c,%eax
 889b6ac:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 889b6b3:	00 
 889b6b4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 889b6bb:	00 
 889b6bc:	89 04 24             	mov    %eax,(%esp)
 889b6bf:	e8 fc 25 7e ff       	call   807dcc0 <memset@plt>
 889b6c4:	c9                   	leave
 889b6c5:	c3                   	ret

```

```c
// advancealtar::ConfigParameter::ConfigParameter @ 0x889b662

/* advancealtar::ConfigParameter::ConfigParameter() */

void __thiscall advancealtar::ConfigParameter::ConfigParameter(ConfigParameter *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(ConfigParameter **)(this + 0x18) = this + 8;
  memset(this + 8,0,0x10);
  memset(this + 0x1c,0,0x10);
  return;
}

```

---

## importConfigParameter

```asm
// === 0889b6cc advancealtar::ConfigParameter::importConfigParameter  [0x0889b6cc-0x889b8f6] ===
 889b6cc:	55                   	push   %ebp
 889b6cd:	89 e5                	mov    %esp,%ebp
 889b6cf:	56                   	push   %esi
 889b6d0:	53                   	push   %ebx
 889b6d1:	83 ec 40             	sub    $0x40,%esp
 889b6d4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b6d7:	89 04 24             	mov    %eax,(%esp)
 889b6da:	e8 f1 ae e6 ff       	call   87065d0 <_ZNSsC1Ev>
 889b6df:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 889b6e6:	c6 45 d7 00          	movb   $0x0,-0x29(%ebp)
 889b6ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 889b6ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 889b6f1:	c7 04 24 c1 52 e0 08 	movl   $0x8e052c1,(%esp)
 889b6f8:	e8 2c 06 02 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 889b6fd:	83 f0 01             	xor    $0x1,%eax
 889b700:	84 c0                	test   %al,%al
 889b702:	74 0e                	je     889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b704:	bb 00 00 00 00       	mov    $0x0,%ebx
 889b709:	e9 d5 01 00 00       	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b70e:	90                   	nop
 889b70f:	eb 01                	jmp    889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b711:	90                   	nop
 889b712:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 889b719:	00 
 889b71a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b71d:	89 04 24             	mov    %eax,(%esp)
 889b720:	e8 3a 11 02 00       	call   88bc85f <_Z8ScanTypeRSsb>
 889b725:	83 f0 01             	xor    $0x1,%eax
 889b728:	84 c0                	test   %al,%al
 889b72a:	0f 85 90 01 00 00    	jne    889b8c0 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x1f4>
 889b730:	c7 44 24 04 4c 55 e0 	movl   $0x8e0554c,0x4(%esp)
 889b737:	08 
 889b738:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b73b:	89 04 24             	mov    %eax,(%esp)
 889b73e:	e8 5e 52 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b743:	84 c0                	test   %al,%al
 889b745:	0f 84 9b 00 00 00    	je     889b7e6 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x11a>
 889b74b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 889b752:	8d 45 d7             	lea    -0x29(%ebp),%eax
 889b755:	89 04 24             	mov    %eax,(%esp)
 889b758:	e8 1e 0c 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b75d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 889b760:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 889b764:	83 f0 01             	xor    $0x1,%eax
 889b767:	84 c0                	test   %al,%al
 889b769:	74 03                	je     889b76e <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0xa2>
 889b76b:	90                   	nop
 889b76c:	eb a4                	jmp    889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b76e:	8d 45 d7             	lea    -0x29(%ebp),%eax
 889b771:	89 04 24             	mov    %eax,(%esp)
 889b774:	e8 02 0c 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b779:	89 45 e8             	mov    %eax,-0x18(%ebp)
 889b77c:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 889b780:	83 f0 01             	xor    $0x1,%eax
 889b783:	84 c0                	test   %al,%al
 889b785:	74 0a                	je     889b791 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0xc5>
 889b787:	bb e9 03 00 00       	mov    $0x3e9,%ebx
 889b78c:	e9 52 01 00 00       	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b791:	8d 45 d7             	lea    -0x29(%ebp),%eax
 889b794:	89 04 24             	mov    %eax,(%esp)
 889b797:	e8 df 0b 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b79c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 889b79f:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 889b7a3:	83 f0 01             	xor    $0x1,%eax
 889b7a6:	84 c0                	test   %al,%al
 889b7a8:	74 0a                	je     889b7b4 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0xe8>
 889b7aa:	bb ec 03 00 00       	mov    $0x3ec,%ebx
 889b7af:	e9 2f 01 00 00       	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b7b4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 889b7b8:	78 23                	js     889b7dd <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x111>
 889b7ba:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 889b7be:	7f 1d                	jg     889b7dd <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x111>
 889b7c0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 889b7c3:	8b 45 08             	mov    0x8(%ebp),%eax
 889b7c6:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 889b7c9:	89 4c 90 08          	mov    %ecx,0x8(%eax,%edx,4)
 889b7cd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 889b7d0:	8b 45 08             	mov    0x8(%ebp),%eax
 889b7d3:	8d 4a 04             	lea    0x4(%edx),%ecx
 889b7d6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 889b7d9:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 889b7dd:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 889b7e1:	e9 6c ff ff ff       	jmp    889b752 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x86>
 889b7e6:	c7 44 24 04 5b 55 e0 	movl   $0x8e0555b,0x4(%esp)
 889b7ed:	08 
 889b7ee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b7f1:	89 04 24             	mov    %eax,(%esp)
 889b7f4:	e8 a8 51 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b7f9:	84 c0                	test   %al,%al
 889b7fb:	74 31                	je     889b82e <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x162>
 889b7fd:	8d 45 d7             	lea    -0x29(%ebp),%eax
 889b800:	89 04 24             	mov    %eax,(%esp)
 889b803:	e8 dd 0c 02 00       	call   88bc4e5 <_Z9ScanFloatPb>
 889b808:	d9 5d f0             	fstps  -0x10(%ebp)
 889b80b:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 889b80f:	83 f0 01             	xor    $0x1,%eax
 889b812:	84 c0                	test   %al,%al
 889b814:	74 0a                	je     889b820 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x154>
 889b816:	bb f8 03 00 00       	mov    $0x3f8,%ebx
 889b81b:	e9 c3 00 00 00       	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b820:	8b 45 08             	mov    0x8(%ebp),%eax
 889b823:	8b 55 f0             	mov    -0x10(%ebp),%edx
 889b826:	89 50 04             	mov    %edx,0x4(%eax)
 889b829:	e9 e4 fe ff ff       	jmp    889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b82e:	c7 44 24 04 77 55 e0 	movl   $0x8e05577,0x4(%esp)
 889b835:	08 
 889b836:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b839:	89 04 24             	mov    %eax,(%esp)
 889b83c:	e8 60 51 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b841:	84 c0                	test   %al,%al
 889b843:	74 2d                	je     889b872 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x1a6>
 889b845:	8d 45 d7             	lea    -0x29(%ebp),%eax
 889b848:	89 04 24             	mov    %eax,(%esp)
 889b84b:	e8 2b 0b 02 00       	call   88bc37b <_Z7ScanIntPb>
 889b850:	89 45 f4             	mov    %eax,-0xc(%ebp)
 889b853:	0f b6 45 d7          	movzbl -0x29(%ebp),%eax
 889b857:	83 f0 01             	xor    $0x1,%eax
 889b85a:	84 c0                	test   %al,%al
 889b85c:	74 07                	je     889b865 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x199>
 889b85e:	bb ff 03 00 00       	mov    $0x3ff,%ebx
 889b863:	eb 7e                	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b865:	8b 45 08             	mov    0x8(%ebp),%eax
 889b868:	8b 55 f4             	mov    -0xc(%ebp),%edx
 889b86b:	89 10                	mov    %edx,(%eax)
 889b86d:	e9 a0 fe ff ff       	jmp    889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b872:	c7 44 24 04 8d 55 e0 	movl   $0x8e0558d,0x4(%esp)
 889b879:	08 
 889b87a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b87d:	89 04 24             	mov    %eax,(%esp)
 889b880:	e8 1c 51 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b885:	84 c0                	test   %al,%al
 889b887:	0f 85 81 fe ff ff    	jne    889b70e <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x42>
 889b88d:	c7 44 24 04 9d 55 e0 	movl   $0x8e0559d,0x4(%esp)
 889b894:	08 
 889b895:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b898:	89 04 24             	mov    %eax,(%esp)
 889b89b:	e8 01 51 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b8a0:	84 c0                	test   %al,%al
 889b8a2:	0f 85 69 fe ff ff    	jne    889b711 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x45>
 889b8a8:	c7 44 24 04 ba 55 e0 	movl   $0x8e055ba,0x4(%esp)
 889b8af:	08 
 889b8b0:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b8b3:	89 04 24             	mov    %eax,(%esp)
 889b8b6:	e8 e6 50 7e ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 889b8bb:	e9 52 fe ff ff       	jmp    889b712 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x46>
 889b8c0:	90                   	nop
 889b8c1:	bb 00 00 00 00       	mov    $0x0,%ebx
 889b8c6:	eb 1b                	jmp    889b8e3 <_ZN12advancealtar15ConfigParameter21importConfigParameterEPKc+0x217>
 889b8c8:	89 d3                	mov    %edx,%ebx
 889b8ca:	89 c6                	mov    %eax,%esi
 889b8cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b8cf:	89 04 24             	mov    %eax,(%esp)
 889b8d2:	e8 09 c3 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b8d7:	89 f0                	mov    %esi,%eax
 889b8d9:	89 da                	mov    %ebx,%edx
 889b8db:	89 04 24             	mov    %eax,(%esp)
 889b8de:	e8 6d 7e 24 00       	call   8ae3750 <_Unwind_Resume>
 889b8e3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 889b8e6:	89 04 24             	mov    %eax,(%esp)
 889b8e9:	e8 f2 c2 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 889b8ee:	89 d8                	mov    %ebx,%eax
 889b8f0:	83 c4 40             	add    $0x40,%esp
 889b8f3:	5b                   	pop    %ebx
 889b8f4:	5e                   	pop    %esi
 889b8f5:	5d                   	pop    %ebp
 889b8f6:	c3                   	ret

```

```c
// advancealtar::ConfigParameter::importConfigParameter @ 0x889b6cc

/* advancealtar::ConfigParameter::importConfigParameter(char const*) */

undefined4 __thiscall
advancealtar::ConfigParameter::importConfigParameter(ConfigParameter *this,char *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  longdouble lVar4;
  bool local_2d;
  string local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  undefined4 local_10;
  
  std::string::string((string *)&local_2c);
  local_28 = 0;
  local_2d = false;
                    /* try { // try from 0889b6f8 to 0889b8ba has its CatchHandler @ 0889b8c8 */
  cVar1 = loadRDARScriptFile("",param_1);
  if (cVar1 == '\x01') {
    while (cVar1 = ScanType((string *)&local_2c,true), cVar1 == '\x01') {
      bVar2 = std::operator==(&local_2c,"[gage up rate]");
      if (bVar2) {
        local_24 = 0;
        while (local_20 = ScanInt(&local_2d), local_2d == true) {
          local_1c = ScanInt(&local_2d);
          if (local_2d != true) {
            uVar3 = 0x3e9;
            goto LAB_0889b8e3;
          }
          local_18 = ScanInt(&local_2d);
          if (local_2d != true) {
            uVar3 = 0x3ec;
            goto LAB_0889b8e3;
          }
          if ((-1 < local_20) && (local_20 < 4)) {
            *(undefined4 *)(this + local_20 * 4 + 8) = local_18;
            *(undefined4 *)(this + (local_20 + 4) * 4 + 0xc) = local_1c;
          }
          local_24 = local_24 + 1;
        }
      }
      else {
        bVar2 = std::operator==(&local_2c,"[gage upgrade cost percent]");
        if (bVar2) {
          lVar4 = (longdouble)ScanFloat(&local_2d);
          local_14 = (float)lVar4;
          if (local_2d != true) {
            uVar3 = 0x3f8;
            goto LAB_0889b8e3;
          }
          *(float *)(this + 4) = local_14;
        }
        else {
          bVar2 = std::operator==(&local_2c,"[daily refill ticket]");
          if (bVar2) {
            local_10 = ScanInt(&local_2d);
            if (local_2d != true) {
              uVar3 = 0x3ff;
              goto LAB_0889b8e3;
            }
            *(undefined4 *)this = local_10;
          }
          else {
            bVar2 = std::operator==(&local_2c,"[/gage up rate]");
            if ((!bVar2) &&
               (bVar2 = std::operator==(&local_2c,"[/gage upgrade cost percent]"), !bVar2)) {
              std::operator==(&local_2c,"[/daily refill ticket]");
            }
          }
        }
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
  }
LAB_0889b8e3:
  std::string::~string((string *)&local_2c);
  return uVar3;
}

```

---

## ~ConfigParameter

```asm
// === 0889b6c6 advancealtar::ConfigParameter::~ConfigParameter  [0x0889b6c6-0x889b6cb] ===
 889b6c6:	55                   	push   %ebp
 889b6c7:	89 e5                	mov    %esp,%ebp
 889b6c9:	5d                   	pop    %ebp
 889b6ca:	c3                   	ret
 889b6cb:	90                   	nop

```

```c
// advancealtar::ConfigParameter::~ConfigParameter @ 0x889b6c6

/* advancealtar::ConfigParameter::~ConfigParameter() */

void __thiscall advancealtar::ConfigParameter::~ConfigParameter(ConfigParameter *this)

{
  return;
}

```


# STRDCharacterStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator=

```asm
// === 08a0c942 STRDCharacterStatus::operator=  [0x08a0c942-0x8a0cab7] ===
 8a0c942:	55                   	push   %ebp
 8a0c943:	89 e5                	mov    %esp,%ebp
 8a0c945:	83 ec 10             	sub    $0x10,%esp
 8a0c948:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c94b:	8b 00                	mov    (%eax),%eax
 8a0c94d:	89 c2                	mov    %eax,%edx
 8a0c94f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c952:	89 10                	mov    %edx,(%eax)
 8a0c954:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c957:	8b 40 04             	mov    0x4(%eax),%eax
 8a0c95a:	89 c2                	mov    %eax,%edx
 8a0c95c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c95f:	89 50 04             	mov    %edx,0x4(%eax)
 8a0c962:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c965:	8b 40 08             	mov    0x8(%eax),%eax
 8a0c968:	89 c2                	mov    %eax,%edx
 8a0c96a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c96d:	66 89 50 08          	mov    %dx,0x8(%eax)
 8a0c971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c974:	8b 40 0c             	mov    0xc(%eax),%eax
 8a0c977:	89 c2                	mov    %eax,%edx
 8a0c979:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c97c:	66 89 50 0a          	mov    %dx,0xa(%eax)
 8a0c980:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c983:	8b 40 10             	mov    0x10(%eax),%eax
 8a0c986:	89 c2                	mov    %eax,%edx
 8a0c988:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c98b:	66 89 50 0c          	mov    %dx,0xc(%eax)
 8a0c98f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c992:	8b 40 14             	mov    0x14(%eax),%eax
 8a0c995:	89 c2                	mov    %eax,%edx
 8a0c997:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c99a:	66 89 50 0e          	mov    %dx,0xe(%eax)
 8a0c99e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8a0c9a5:	eb 20                	jmp    8a0c9c7 <_ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient+0x85>
 8a0c9a7:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 8a0c9aa:	8b 55 f8             	mov    -0x8(%ebp),%edx
 8a0c9ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c9b0:	83 c2 04             	add    $0x4,%edx
 8a0c9b3:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a0c9b7:	89 c2                	mov    %eax,%edx
 8a0c9b9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c9bc:	83 c1 08             	add    $0x8,%ecx
 8a0c9bf:	66 89 14 48          	mov    %dx,(%eax,%ecx,2)
 8a0c9c3:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8a0c9c7:	83 7d f8 03          	cmpl   $0x3,-0x8(%ebp)
 8a0c9cb:	0f 9e c0             	setle  %al
 8a0c9ce:	84 c0                	test   %al,%al
 8a0c9d0:	75 d5                	jne    8a0c9a7 <_ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient+0x65>
 8a0c9d2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8a0c9d9:	eb 21                	jmp    8a0c9fc <_ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient+0xba>
 8a0c9db:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8a0c9de:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8a0c9e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0c9e4:	83 c2 08             	add    $0x8,%edx
 8a0c9e7:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 8a0c9eb:	89 c2                	mov    %eax,%edx
 8a0c9ed:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0c9f0:	83 c1 08             	add    $0x8,%ecx
 8a0c9f3:	66 89 54 48 08       	mov    %dx,0x8(%eax,%ecx,2)
 8a0c9f8:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8a0c9fc:	83 7d fc 10          	cmpl   $0x10,-0x4(%ebp)
 8a0ca00:	0f 9e c0             	setle  %al
 8a0ca03:	84 c0                	test   %al,%al
 8a0ca05:	75 d4                	jne    8a0c9db <_ZN19STRDCharacterStatusaSERK25STRDCharacterStatusClient+0x99>
 8a0ca07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca0a:	8b 50 6c             	mov    0x6c(%eax),%edx
 8a0ca0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca10:	89 50 3a             	mov    %edx,0x3a(%eax)
 8a0ca13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca16:	8b 40 70             	mov    0x70(%eax),%eax
 8a0ca19:	89 c2                	mov    %eax,%edx
 8a0ca1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca1e:	66 89 50 3e          	mov    %dx,0x3e(%eax)
 8a0ca22:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca25:	8b 40 74             	mov    0x74(%eax),%eax
 8a0ca28:	89 c2                	mov    %eax,%edx
 8a0ca2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca2d:	66 89 50 40          	mov    %dx,0x40(%eax)
 8a0ca31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca34:	8b 40 78             	mov    0x78(%eax),%eax
 8a0ca37:	89 c2                	mov    %eax,%edx
 8a0ca39:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca3c:	89 50 42             	mov    %edx,0x42(%eax)
 8a0ca3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca42:	8b 40 7c             	mov    0x7c(%eax),%eax
 8a0ca45:	89 c2                	mov    %eax,%edx
 8a0ca47:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca4a:	66 89 50 46          	mov    %dx,0x46(%eax)
 8a0ca4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca51:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 8a0ca57:	89 c2                	mov    %eax,%edx
 8a0ca59:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca5c:	66 89 50 48          	mov    %dx,0x48(%eax)
 8a0ca60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca63:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8a0ca69:	89 c2                	mov    %eax,%edx
 8a0ca6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca6e:	66 89 50 4a          	mov    %dx,0x4a(%eax)
 8a0ca72:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca75:	8b 80 88 00 00 00    	mov    0x88(%eax),%eax
 8a0ca7b:	89 c2                	mov    %eax,%edx
 8a0ca7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca80:	66 89 50 4c          	mov    %dx,0x4c(%eax)
 8a0ca84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca87:	8b 90 8c 00 00 00    	mov    0x8c(%eax),%edx
 8a0ca8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0ca90:	89 50 4e             	mov    %edx,0x4e(%eax)
 8a0ca93:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0ca96:	8b 80 90 00 00 00    	mov    0x90(%eax),%eax
 8a0ca9c:	89 c2                	mov    %eax,%edx
 8a0ca9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0caa1:	88 50 52             	mov    %dl,0x52(%eax)
 8a0caa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0caa7:	8b 90 94 00 00 00    	mov    0x94(%eax),%edx
 8a0caad:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cab0:	89 50 53             	mov    %edx,0x53(%eax)
 8a0cab3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cab6:	c9                   	leave
 8a0cab7:	c3                   	ret

```

```c
// STRDCharacterStatus::operator= @ 0x8a0c942

/* STRDCharacterStatus::TEMPNAMEPLACEHOLDERVALUE(STRDCharacterStatusClient const&) */

STRDCharacterStatus * __thiscall
STRDCharacterStatus::operator=(STRDCharacterStatus *this,STRDCharacterStatusClient *param_1)

{
  int local_c;
  int local_8;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(short *)(this + 8) = (short)*(undefined4 *)(param_1 + 8);
  *(short *)(this + 10) = (short)*(undefined4 *)(param_1 + 0xc);
  *(short *)(this + 0xc) = (short)*(undefined4 *)(param_1 + 0x10);
  *(short *)(this + 0xe) = (short)*(undefined4 *)(param_1 + 0x14);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(short *)(this + (local_c + 8) * 2) = (short)*(undefined4 *)(param_1 + (local_c + 4) * 4 + 8);
  }
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    *(short *)(this + (local_8 + 8) * 2 + 8) =
         (short)*(undefined4 *)(param_1 + (local_8 + 8) * 4 + 8);
  }
  *(undefined4 *)(this + 0x3a) = *(undefined4 *)(param_1 + 0x6c);
  *(short *)(this + 0x3e) = (short)*(undefined4 *)(param_1 + 0x70);
  *(short *)(this + 0x40) = (short)*(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x42) = *(undefined4 *)(param_1 + 0x78);
  *(short *)(this + 0x46) = (short)*(undefined4 *)(param_1 + 0x7c);
  *(short *)(this + 0x48) = (short)*(undefined4 *)(param_1 + 0x80);
  *(short *)(this + 0x4a) = (short)*(undefined4 *)(param_1 + 0x84);
  *(short *)(this + 0x4c) = (short)*(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(this + 0x4e) = *(undefined4 *)(param_1 + 0x8c);
  this[0x52] = SUB41(*(undefined4 *)(param_1 + 0x90),0);
  *(undefined4 *)(this + 0x53) = *(undefined4 *)(param_1 + 0x94);
  return this;
}

```


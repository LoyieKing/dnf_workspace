# STRDCharacterStatusClient

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## operator=

```asm
// === 08a0cab8 STRDCharacterStatusClient::operator=  [0x08a0cab8-0x8a0cc3b] ===
 8a0cab8:	55                   	push   %ebp
 8a0cab9:	89 e5                	mov    %esp,%ebp
 8a0cabb:	83 ec 10             	sub    $0x10,%esp
 8a0cabe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cac1:	8b 00                	mov    (%eax),%eax
 8a0cac3:	89 c2                	mov    %eax,%edx
 8a0cac5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cac8:	89 10                	mov    %edx,(%eax)
 8a0caca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cacd:	8b 40 04             	mov    0x4(%eax),%eax
 8a0cad0:	89 c2                	mov    %eax,%edx
 8a0cad2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cad5:	89 50 04             	mov    %edx,0x4(%eax)
 8a0cad8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cadb:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8a0cadf:	0f b7 d0             	movzwl %ax,%edx
 8a0cae2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cae5:	89 50 08             	mov    %edx,0x8(%eax)
 8a0cae8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0caeb:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8a0caef:	0f b7 d0             	movzwl %ax,%edx
 8a0caf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0caf5:	89 50 0c             	mov    %edx,0xc(%eax)
 8a0caf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cafb:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 8a0caff:	0f b7 d0             	movzwl %ax,%edx
 8a0cb02:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb05:	89 50 10             	mov    %edx,0x10(%eax)
 8a0cb08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cb0b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8a0cb0f:	0f b7 d0             	movzwl %ax,%edx
 8a0cb12:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb15:	89 50 14             	mov    %edx,0x14(%eax)
 8a0cb18:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 8a0cb1f:	eb 21                	jmp    8a0cb42 <_ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus+0x8a>
 8a0cb21:	8b 4d f8             	mov    -0x8(%ebp),%ecx
 8a0cb24:	8b 55 f8             	mov    -0x8(%ebp),%edx
 8a0cb27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cb2a:	83 c2 08             	add    $0x8,%edx
 8a0cb2d:	0f b7 04 50          	movzwl (%eax,%edx,2),%eax
 8a0cb31:	0f bf d0             	movswl %ax,%edx
 8a0cb34:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb37:	83 c1 04             	add    $0x4,%ecx
 8a0cb3a:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 8a0cb3e:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 8a0cb42:	83 7d f8 03          	cmpl   $0x3,-0x8(%ebp)
 8a0cb46:	0f 9e c0             	setle  %al
 8a0cb49:	84 c0                	test   %al,%al
 8a0cb4b:	75 d4                	jne    8a0cb21 <_ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus+0x69>
 8a0cb4d:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 8a0cb54:	eb 22                	jmp    8a0cb78 <_ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus+0xc0>
 8a0cb56:	8b 4d fc             	mov    -0x4(%ebp),%ecx
 8a0cb59:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8a0cb5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cb5f:	83 c2 08             	add    $0x8,%edx
 8a0cb62:	0f b7 44 50 08       	movzwl 0x8(%eax,%edx,2),%eax
 8a0cb67:	0f bf d0             	movswl %ax,%edx
 8a0cb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb6d:	83 c1 08             	add    $0x8,%ecx
 8a0cb70:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 8a0cb74:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 8a0cb78:	83 7d fc 10          	cmpl   $0x10,-0x4(%ebp)
 8a0cb7c:	0f 9e c0             	setle  %al
 8a0cb7f:	84 c0                	test   %al,%al
 8a0cb81:	75 d3                	jne    8a0cb56 <_ZN25STRDCharacterStatusClientaSERK19STRDCharacterStatus+0x9e>
 8a0cb83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cb86:	8b 50 3a             	mov    0x3a(%eax),%edx
 8a0cb89:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb8c:	89 50 6c             	mov    %edx,0x6c(%eax)
 8a0cb8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cb92:	0f b7 40 3e          	movzwl 0x3e(%eax),%eax
 8a0cb96:	0f bf d0             	movswl %ax,%edx
 8a0cb99:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cb9c:	89 50 70             	mov    %edx,0x70(%eax)
 8a0cb9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cba2:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 8a0cba6:	0f bf d0             	movswl %ax,%edx
 8a0cba9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cbac:	89 50 74             	mov    %edx,0x74(%eax)
 8a0cbaf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cbb2:	8b 40 42             	mov    0x42(%eax),%eax
 8a0cbb5:	89 c2                	mov    %eax,%edx
 8a0cbb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cbba:	89 50 78             	mov    %edx,0x78(%eax)
 8a0cbbd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cbc0:	0f b7 40 46          	movzwl 0x46(%eax),%eax
 8a0cbc4:	0f b7 d0             	movzwl %ax,%edx
 8a0cbc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cbca:	89 50 7c             	mov    %edx,0x7c(%eax)
 8a0cbcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cbd0:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 8a0cbd4:	0f b7 d0             	movzwl %ax,%edx
 8a0cbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cbda:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 8a0cbe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cbe3:	0f b7 40 4a          	movzwl 0x4a(%eax),%eax
 8a0cbe7:	0f bf d0             	movswl %ax,%edx
 8a0cbea:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cbed:	89 90 84 00 00 00    	mov    %edx,0x84(%eax)
 8a0cbf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cbf6:	0f b7 40 4c          	movzwl 0x4c(%eax),%eax
 8a0cbfa:	0f bf d0             	movswl %ax,%edx
 8a0cbfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cc00:	89 90 88 00 00 00    	mov    %edx,0x88(%eax)
 8a0cc06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cc09:	8b 50 4e             	mov    0x4e(%eax),%edx
 8a0cc0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cc0f:	89 90 8c 00 00 00    	mov    %edx,0x8c(%eax)
 8a0cc15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cc18:	0f b6 40 52          	movzbl 0x52(%eax),%eax
 8a0cc1c:	0f b6 d0             	movzbl %al,%edx
 8a0cc1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cc22:	89 90 90 00 00 00    	mov    %edx,0x90(%eax)
 8a0cc28:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a0cc2b:	8b 50 53             	mov    0x53(%eax),%edx
 8a0cc2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cc31:	89 90 94 00 00 00    	mov    %edx,0x94(%eax)
 8a0cc37:	8b 45 08             	mov    0x8(%ebp),%eax
 8a0cc3a:	c9                   	leave
 8a0cc3b:	c3                   	ret

```

```c
// STRDCharacterStatusClient::operator= @ 0x8a0cab8

/* STRDCharacterStatusClient::TEMPNAMEPLACEHOLDERVALUE(STRDCharacterStatus const&) */

STRDCharacterStatusClient * __thiscall
STRDCharacterStatusClient::operator=(STRDCharacterStatusClient *this,STRDCharacterStatus *param_1)

{
  int local_c;
  int local_8;
  
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(uint *)(this + 8) = (uint)*(ushort *)(param_1 + 8);
  *(uint *)(this + 0xc) = (uint)*(ushort *)(param_1 + 10);
  *(uint *)(this + 0x10) = (uint)*(ushort *)(param_1 + 0xc);
  *(uint *)(this + 0x14) = (uint)*(ushort *)(param_1 + 0xe);
  for (local_c = 0; local_c < 4; local_c = local_c + 1) {
    *(int *)(this + (local_c + 4) * 4 + 8) = (int)*(short *)(param_1 + (local_c + 8) * 2);
  }
  for (local_8 = 0; local_8 < 0x11; local_8 = local_8 + 1) {
    *(int *)(this + (local_8 + 8) * 4 + 8) = (int)*(short *)(param_1 + (local_8 + 8) * 2 + 8);
  }
  *(undefined4 *)(this + 0x6c) = *(undefined4 *)(param_1 + 0x3a);
  *(int *)(this + 0x70) = (int)*(short *)(param_1 + 0x3e);
  *(int *)(this + 0x74) = (int)*(short *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x42);
  *(uint *)(this + 0x7c) = (uint)*(ushort *)(param_1 + 0x46);
  *(uint *)(this + 0x80) = (uint)*(ushort *)(param_1 + 0x48);
  *(int *)(this + 0x84) = (int)*(short *)(param_1 + 0x4a);
  *(int *)(this + 0x88) = (int)*(short *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x8c) = *(undefined4 *)(param_1 + 0x4e);
  *(uint *)(this + 0x90) = (uint)(byte)param_1[0x52];
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x53);
  return this;
}

```


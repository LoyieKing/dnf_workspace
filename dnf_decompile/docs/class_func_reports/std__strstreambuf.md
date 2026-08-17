# std__strstreambuf

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 22

---

## _M_alloc

```asm
// === 086dda40 std::strstreambuf::_M_alloc  [0x086dda40-0x86dda6f] ===
 86dda40:	55                   	push   %ebp
 86dda41:	89 e5                	mov    %esp,%ebp
 86dda43:	83 ec 08             	sub    $0x8,%esp
 86dda46:	8b 45 08             	mov    0x8(%ebp),%eax
 86dda49:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dda4c:	8b 40 20             	mov    0x20(%eax),%eax
 86dda4f:	85 c0                	test   %eax,%eax
 86dda51:	74 0d                	je     86dda60 <_ZNSt12strstreambuf8_M_allocEj+0x20>
 86dda53:	89 55 08             	mov    %edx,0x8(%ebp)
 86dda56:	c9                   	leave
 86dda57:	ff e0                	jmp    *%eax
 86dda59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dda60:	89 55 08             	mov    %edx,0x8(%ebp)
 86dda63:	c9                   	leave
 86dda64:	e9 57 53 04 00       	jmp    8722dc0 <_Znaj>
 86dda69:	90                   	nop
 86dda6a:	90                   	nop
 86dda6b:	90                   	nop
 86dda6c:	90                   	nop
 86dda6d:	90                   	nop
 86dda6e:	90                   	nop
 86dda6f:	90                   	nop

```

```c
// std::strstreambuf::_M_alloc @ 0x86dda40

/* std::strstreambuf::_M_alloc(unsigned int) */

void __thiscall std::strstreambuf::_M_alloc(strstreambuf *this,uint param_1)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x086dda57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))();
    return;
  }
  operator_new__(param_1);
  return;
}

```

---

## _M_free

```asm
// === 086dda00 std::strstreambuf::_M_free  [0x086dda00-0x86dda3f] ===
 86dda00:	55                   	push   %ebp
 86dda01:	89 e5                	mov    %esp,%ebp
 86dda03:	83 ec 08             	sub    $0x8,%esp
 86dda06:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dda09:	8b 55 08             	mov    0x8(%ebp),%edx
 86dda0c:	85 c0                	test   %eax,%eax
 86dda0e:	74 20                	je     86dda30 <_ZNSt12strstreambuf7_M_freeEPc+0x30>
 86dda10:	8b 52 24             	mov    0x24(%edx),%edx
 86dda13:	85 d2                	test   %edx,%edx
 86dda15:	74 09                	je     86dda20 <_ZNSt12strstreambuf7_M_freeEPc+0x20>
 86dda17:	89 45 08             	mov    %eax,0x8(%ebp)
 86dda1a:	c9                   	leave
 86dda1b:	ff e2                	jmp    *%edx
 86dda1d:	8d 76 00             	lea    0x0(%esi),%esi
 86dda20:	89 45 08             	mov    %eax,0x8(%ebp)
 86dda23:	c9                   	leave
 86dda24:	e9 87 71 04 00       	jmp    8724bb0 <_ZdaPv>
 86dda29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dda30:	c9                   	leave
 86dda31:	c3                   	ret
 86dda32:	90                   	nop
 86dda33:	90                   	nop
 86dda34:	90                   	nop
 86dda35:	90                   	nop
 86dda36:	90                   	nop
 86dda37:	90                   	nop
 86dda38:	90                   	nop
 86dda39:	90                   	nop
 86dda3a:	90                   	nop
 86dda3b:	90                   	nop
 86dda3c:	90                   	nop
 86dda3d:	90                   	nop
 86dda3e:	90                   	nop
 86dda3f:	90                   	nop

```

```c
// std::strstreambuf::_M_free @ 0x86dda00

/* std::strstreambuf::_M_free(char*) */

void __thiscall std::strstreambuf::_M_free(strstreambuf *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*(code **)(this + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x086dda1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x24))();
    return;
  }
  operator_delete__(param_1);
  return;
}

```

---

## _M_setup

```asm
// === 086dd980 std::strstreambuf::_M_setup  [0x086dd980-0x86dd9ff] ===
 86dd980:	55                   	push   %ebp
 86dd981:	89 e5                	mov    %esp,%ebp
 86dd983:	83 ec 28             	sub    $0x28,%esp
 86dd986:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dd989:	8b 7d 0c             	mov    0xc(%ebp),%edi
 86dd98c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dd98f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd992:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dd995:	8b 75 10             	mov    0x10(%ebp),%esi
 86dd998:	85 ff                	test   %edi,%edi
 86dd99a:	74 20                	je     86dd9bc <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x3c>
 86dd99c:	8b 45 14             	mov    0x14(%ebp),%eax
 86dd99f:	83 f8 00             	cmp    $0x0,%eax
 86dd9a2:	7e 2c                	jle    86dd9d0 <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x50>
 86dd9a4:	85 f6                	test   %esi,%esi
 86dd9a6:	74 38                	je     86dd9e0 <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x60>
 86dd9a8:	89 73 0c             	mov    %esi,0xc(%ebx)
 86dd9ab:	89 73 14             	mov    %esi,0x14(%ebx)
 86dd9ae:	89 73 10             	mov    %esi,0x10(%ebx)
 86dd9b1:	01 c6                	add    %eax,%esi
 86dd9b3:	89 7b 04             	mov    %edi,0x4(%ebx)
 86dd9b6:	89 7b 08             	mov    %edi,0x8(%ebx)
 86dd9b9:	89 73 18             	mov    %esi,0x18(%ebx)
 86dd9bc:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dd9bf:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dd9c2:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dd9c5:	89 ec                	mov    %ebp,%esp
 86dd9c7:	5d                   	pop    %ebp
 86dd9c8:	c3                   	ret
 86dd9c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dd9d0:	75 26                	jne    86dd9f8 <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x78>
 86dd9d2:	89 3c 24             	mov    %edi,(%esp)
 86dd9d5:	e8 d6 09 9a ff       	call   807e3b0 <strlen@plt>
 86dd9da:	85 f6                	test   %esi,%esi
 86dd9dc:	75 ca                	jne    86dd9a8 <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x28>
 86dd9de:	66 90                	xchg   %ax,%ax
 86dd9e0:	89 7b 04             	mov    %edi,0x4(%ebx)
 86dd9e3:	89 7b 08             	mov    %edi,0x8(%ebx)
 86dd9e6:	01 c7                	add    %eax,%edi
 86dd9e8:	89 7b 0c             	mov    %edi,0xc(%ebx)
 86dd9eb:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dd9ee:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dd9f1:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dd9f4:	89 ec                	mov    %ebp,%esp
 86dd9f6:	5d                   	pop    %ebp
 86dd9f7:	c3                   	ret
 86dd9f8:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 86dd9fd:	eb a5                	jmp    86dd9a4 <_ZNSt12strstreambuf8_M_setupEPcS0_i+0x24>
 86dd9ff:	90                   	nop

```

```c
// std::strstreambuf::_M_setup @ 0x86dd980

/* std::strstreambuf::_M_setup(char*, char*, int) */

void __thiscall
std::strstreambuf::_M_setup(strstreambuf *this,char *param_1,char *param_2,int param_3)

{
  if (param_1 != (char *)0x0) {
    if (param_3 < 1) {
      if (param_3 == 0) {
        param_3 = strlen(param_1);
      }
      else {
        param_3 = 0x7fffffff;
      }
    }
    if (param_2 == (char *)0x0) {
      *(char **)(this + 4) = param_1;
      *(char **)(this + 8) = param_1;
      *(char **)(this + 0xc) = param_1 + param_3;
      return;
    }
    *(char **)(this + 0xc) = param_2;
    *(char **)(this + 0x14) = param_2;
    *(char **)(this + 0x10) = param_2;
    *(char **)(this + 4) = param_1;
    *(char **)(this + 8) = param_1;
    *(char **)(this + 0x18) = param_2 + param_3;
  }
  return;
}

```

---

## freeze

```asm
// === 086dd450 std::strstreambuf::freeze  [0x086dd450-0x86dd47f] ===
 86dd450:	55                   	push   %ebp
 86dd451:	89 e5                	mov    %esp,%ebp
 86dd453:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd456:	0f b6 4d 0c          	movzbl 0xc(%ebp),%ecx
 86dd45a:	0f b6 50 28          	movzbl 0x28(%eax),%edx
 86dd45e:	f6 c2 01             	test   $0x1,%dl
 86dd461:	74 0d                	je     86dd470 <_ZNSt12strstreambuf6freezeEb+0x20>
 86dd463:	83 e1 01             	and    $0x1,%ecx
 86dd466:	83 e2 fd             	and    $0xfffffffd,%edx
 86dd469:	01 c9                	add    %ecx,%ecx
 86dd46b:	09 ca                	or     %ecx,%edx
 86dd46d:	88 50 28             	mov    %dl,0x28(%eax)
 86dd470:	5d                   	pop    %ebp
 86dd471:	c3                   	ret
 86dd472:	90                   	nop
 86dd473:	90                   	nop
 86dd474:	90                   	nop
 86dd475:	90                   	nop
 86dd476:	90                   	nop
 86dd477:	90                   	nop
 86dd478:	90                   	nop
 86dd479:	90                   	nop
 86dd47a:	90                   	nop
 86dd47b:	90                   	nop
 86dd47c:	90                   	nop
 86dd47d:	90                   	nop
 86dd47e:	90                   	nop
 86dd47f:	90                   	nop

```

```c
// std::strstreambuf::freeze @ 0x86dd450

/* std::strstreambuf::freeze(bool) */

void __thiscall std::strstreambuf::freeze(strstreambuf *this,bool param_1)

{
  if (((byte)this[0x28] & 1) != 0) {
    this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfd | param_1 * '\x02');
  }
  return;
}

```

---

## overflow

```asm
// === 086dda70 std::strstreambuf::overflow  [0x086dda70-0x86ddb8f] ===
 86dda70:	55                   	push   %ebp
 86dda71:	89 e5                	mov    %esp,%ebp
 86dda73:	83 ec 38             	sub    $0x38,%esp
 86dda76:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dda79:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86dda7c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dda7f:	8b 75 08             	mov    0x8(%ebp),%esi
 86dda82:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dda85:	83 fb ff             	cmp    $0xffffffff,%ebx
 86dda88:	75 16                	jne    86ddaa0 <_ZNSt12strstreambuf8overflowEi+0x30>
 86dda8a:	31 db                	xor    %ebx,%ebx
 86dda8c:	89 d8                	mov    %ebx,%eax
 86dda8e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dda91:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dda94:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dda97:	89 ec                	mov    %ebp,%esp
 86dda99:	5d                   	pop    %ebp
 86dda9a:	c3                   	ret
 86dda9b:	90                   	nop
 86dda9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86ddaa0:	8b 46 14             	mov    0x14(%esi),%eax
 86ddaa3:	3b 46 18             	cmp    0x18(%esi),%eax
 86ddaa6:	74 08                	je     86ddab0 <_ZNSt12strstreambuf8overflowEi+0x40>
 86ddaa8:	88 18                	mov    %bl,(%eax)
 86ddaaa:	83 46 14 01          	addl   $0x1,0x14(%esi)
 86ddaae:	eb dc                	jmp    86dda8c <_ZNSt12strstreambuf8overflowEi+0x1c>
 86ddab0:	0f b6 56 28          	movzbl 0x28(%esi),%edx
 86ddab4:	f6 c2 01             	test   $0x1,%dl
 86ddab7:	0f 84 ab 00 00 00    	je     86ddb68 <_ZNSt12strstreambuf8overflowEi+0xf8>
 86ddabd:	f6 c2 02             	test   $0x2,%dl
 86ddac0:	0f 85 a2 00 00 00    	jne    86ddb68 <_ZNSt12strstreambuf8overflowEi+0xf8>
 86ddac6:	83 e2 04             	and    $0x4,%edx
 86ddac9:	0f 85 99 00 00 00    	jne    86ddb68 <_ZNSt12strstreambuf8overflowEi+0xf8>
 86ddacf:	2b 46 10             	sub    0x10(%esi),%eax
 86ddad2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86ddad5:	01 c0                	add    %eax,%eax
 86ddad7:	85 c0                	test   %eax,%eax
 86ddad9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86ddadc:	7f 07                	jg     86ddae5 <_ZNSt12strstreambuf8overflowEi+0x75>
 86ddade:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 86ddae5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ddae8:	89 34 24             	mov    %esi,(%esp)
 86ddaeb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ddaef:	e8 4c ff ff ff       	call   86dda40 <_ZNSt12strstreambuf8_M_allocEj>
 86ddaf4:	85 c0                	test   %eax,%eax
 86ddaf6:	89 c7                	mov    %eax,%edi
 86ddaf8:	74 5b                	je     86ddb55 <_ZNSt12strstreambuf8overflowEi+0xe5>
 86ddafa:	8b 46 10             	mov    0x10(%esi),%eax
 86ddafd:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ddb00:	89 3c 24             	mov    %edi,(%esp)
 86ddb03:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ddb07:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ddb0b:	e8 90 fd 99 ff       	call   807d8a0 <memcpy@plt>
 86ddb10:	8b 46 08             	mov    0x8(%esi),%eax
 86ddb13:	8b 4e 10             	mov    0x10(%esi),%ecx
 86ddb16:	85 c0                	test   %eax,%eax
 86ddb18:	74 58                	je     86ddb72 <_ZNSt12strstreambuf8overflowEi+0x102>
 86ddb1a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 86ddb1d:	2b 46 04             	sub    0x4(%esi),%eax
 86ddb20:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86ddb23:	89 7e 10             	mov    %edi,0x10(%esi)
 86ddb26:	8d 14 17             	lea    (%edi,%edx,1),%edx
 86ddb29:	89 56 18             	mov    %edx,0x18(%esi)
 86ddb2c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ddb2f:	89 7e 04             	mov    %edi,0x4(%esi)
 86ddb32:	8d 14 17             	lea    (%edi,%edx,1),%edx
 86ddb35:	89 56 14             	mov    %edx,0x14(%esi)
 86ddb38:	8d 14 07             	lea    (%edi,%eax,1),%edx
 86ddb3b:	89 56 08             	mov    %edx,0x8(%esi)
 86ddb3e:	7d 03                	jge    86ddb43 <_ZNSt12strstreambuf8overflowEi+0xd3>
 86ddb40:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ddb43:	8d 04 07             	lea    (%edi,%eax,1),%eax
 86ddb46:	89 46 0c             	mov    %eax,0xc(%esi)
 86ddb49:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ddb4d:	89 34 24             	mov    %esi,(%esp)
 86ddb50:	e8 ab fe ff ff       	call   86dda00 <_ZNSt12strstreambuf7_M_freeEPc>
 86ddb55:	8b 46 14             	mov    0x14(%esi),%eax
 86ddb58:	3b 46 18             	cmp    0x18(%esi),%eax
 86ddb5b:	0f 85 47 ff ff ff    	jne    86ddaa8 <_ZNSt12strstreambuf8overflowEi+0x38>
 86ddb61:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86ddb68:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 86ddb6d:	e9 1a ff ff ff       	jmp    86dda8c <_ZNSt12strstreambuf8overflowEi+0x1c>
 86ddb72:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ddb75:	89 7e 10             	mov    %edi,0x10(%esi)
 86ddb78:	8d 04 07             	lea    (%edi,%eax,1),%eax
 86ddb7b:	03 7d e4             	add    -0x1c(%ebp),%edi
 86ddb7e:	89 46 18             	mov    %eax,0x18(%esi)
 86ddb81:	89 7e 14             	mov    %edi,0x14(%esi)
 86ddb84:	eb c3                	jmp    86ddb49 <_ZNSt12strstreambuf8overflowEi+0xd9>
 86ddb86:	90                   	nop
 86ddb87:	90                   	nop
 86ddb88:	90                   	nop
 86ddb89:	90                   	nop
 86ddb8a:	90                   	nop
 86ddb8b:	90                   	nop
 86ddb8c:	90                   	nop
 86ddb8d:	90                   	nop
 86ddb8e:	90                   	nop
 86ddb8f:	90                   	nop

```

```c
// std::strstreambuf::overflow @ 0x86dda70

/* std::strstreambuf::overflow(int) */

int __thiscall std::strstreambuf::overflow(strstreambuf *this,int param_1)

{
  strstreambuf sVar1;
  char *pcVar2;
  undefined1 *puVar3;
  size_t __n;
  void *__dest;
  size_t sVar4;
  uint local_24;
  
  if (param_1 == -1) {
    return 0;
  }
  puVar3 = *(undefined1 **)(this + 0x14);
  if (puVar3 == *(undefined1 **)(this + 0x18)) {
    sVar1 = this[0x28];
    if (((((byte)sVar1 & 1) != 0) && (((byte)sVar1 & 2) == 0)) && (((byte)sVar1 & 4) == 0)) {
      __n = (int)puVar3 - *(int *)(this + 0x10);
      local_24 = __n * 2;
      if ((int)local_24 < 1) {
        local_24 = 1;
      }
      __dest = (void *)_M_alloc(this,local_24);
      if (__dest != (void *)0x0) {
        memcpy(__dest,*(void **)(this + 0x10),__n);
        pcVar2 = *(char **)(this + 0x10);
        if (*(int *)(this + 8) == 0) {
          *(void **)(this + 0x10) = __dest;
          *(uint *)(this + 0x18) = (int)__dest + local_24;
          *(size_t *)(this + 0x14) = (int)__dest + __n;
        }
        else {
          sVar4 = *(int *)(this + 8) - *(int *)(this + 4);
          *(void **)(this + 0x10) = __dest;
          *(uint *)(this + 0x18) = (int)__dest + local_24;
          *(void **)(this + 4) = __dest;
          *(size_t *)(this + 0x14) = (int)__dest + __n;
          *(size_t *)(this + 8) = (int)__dest + sVar4;
          if ((int)sVar4 < (int)__n) {
            sVar4 = __n;
          }
          *(size_t *)(this + 0xc) = (int)__dest + sVar4;
        }
        _M_free(this,pcVar2);
      }
      puVar3 = *(undefined1 **)(this + 0x14);
      if (puVar3 != *(undefined1 **)(this + 0x18)) goto LAB_086ddaa8;
    }
    param_1 = -1;
  }
  else {
LAB_086ddaa8:
    *puVar3 = (char)param_1;
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  }
  return param_1;
}

```

---

## pbackfail

```asm
// === 086dd4c0 std::strstreambuf::pbackfail  [0x086dd4c0-0x86dd53f] ===
 86dd4c0:	55                   	push   %ebp
 86dd4c1:	89 e5                	mov    %esp,%ebp
 86dd4c3:	83 ec 08             	sub    $0x8,%esp
 86dd4c6:	8b 55 08             	mov    0x8(%ebp),%edx
 86dd4c9:	89 1c 24             	mov    %ebx,(%esp)
 86dd4cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd4cf:	89 74 24 04          	mov    %esi,0x4(%esp)
 86dd4d3:	8b 4a 08             	mov    0x8(%edx),%ecx
 86dd4d6:	3b 4a 04             	cmp    0x4(%edx),%ecx
 86dd4d9:	74 45                	je     86dd520 <_ZNSt12strstreambuf9pbackfailEi+0x60>
 86dd4db:	83 f8 ff             	cmp    $0xffffffff,%eax
 86dd4de:	74 20                	je     86dd500 <_ZNSt12strstreambuf9pbackfailEi+0x40>
 86dd4e0:	0f b6 59 ff          	movzbl -0x1(%ecx),%ebx
 86dd4e4:	8d 71 ff             	lea    -0x1(%ecx),%esi
 86dd4e7:	39 d8                	cmp    %ebx,%eax
 86dd4e9:	75 2d                	jne    86dd518 <_ZNSt12strstreambuf9pbackfailEi+0x58>
 86dd4eb:	89 72 08             	mov    %esi,0x8(%edx)
 86dd4ee:	8b 1c 24             	mov    (%esp),%ebx
 86dd4f1:	8b 74 24 04          	mov    0x4(%esp),%esi
 86dd4f5:	89 ec                	mov    %ebp,%esp
 86dd4f7:	5d                   	pop    %ebp
 86dd4f8:	c3                   	ret
 86dd4f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dd500:	83 e9 01             	sub    $0x1,%ecx
 86dd503:	31 c0                	xor    %eax,%eax
 86dd505:	89 4a 08             	mov    %ecx,0x8(%edx)
 86dd508:	8b 1c 24             	mov    (%esp),%ebx
 86dd50b:	8b 74 24 04          	mov    0x4(%esp),%esi
 86dd50f:	89 ec                	mov    %ebp,%esp
 86dd511:	5d                   	pop    %ebp
 86dd512:	c3                   	ret
 86dd513:	90                   	nop
 86dd514:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dd518:	f6 42 28 04          	testb  $0x4,0x28(%edx)
 86dd51c:	74 12                	je     86dd530 <_ZNSt12strstreambuf9pbackfailEi+0x70>
 86dd51e:	66 90                	xchg   %ax,%ax
 86dd520:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86dd525:	8b 1c 24             	mov    (%esp),%ebx
 86dd528:	8b 74 24 04          	mov    0x4(%esp),%esi
 86dd52c:	89 ec                	mov    %ebp,%esp
 86dd52e:	5d                   	pop    %ebp
 86dd52f:	c3                   	ret
 86dd530:	89 72 08             	mov    %esi,0x8(%edx)
 86dd533:	88 41 ff             	mov    %al,-0x1(%ecx)
 86dd536:	eb b6                	jmp    86dd4ee <_ZNSt12strstreambuf9pbackfailEi+0x2e>
 86dd538:	90                   	nop
 86dd539:	90                   	nop
 86dd53a:	90                   	nop
 86dd53b:	90                   	nop
 86dd53c:	90                   	nop
 86dd53d:	90                   	nop
 86dd53e:	90                   	nop
 86dd53f:	90                   	nop

```

```c
// std::strstreambuf::pbackfail @ 0x86dd4c0

/* std::strstreambuf::pbackfail(int) */

int __thiscall std::strstreambuf::pbackfail(strstreambuf *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  if (iVar1 == *(int *)(this + 4)) {
    return -1;
  }
  if (param_1 != -1) {
    if (param_1 == (uint)*(byte *)(iVar1 + -1)) {
      *(int *)(this + 8) = iVar1 + -1;
    }
    else {
      if (((byte)this[0x28] & 4) != 0) {
        return -1;
      }
      *(int *)(this + 8) = iVar1 + -1;
      *(char *)(iVar1 + -1) = (char)param_1;
    }
    return param_1;
  }
  *(int *)(this + 8) = iVar1 + -1;
  return 0;
}

```

---

## pcount

```asm
// === 086dd4a0 std::strstreambuf::pcount  [0x086dd4a0-0x86dd4bf] ===
 86dd4a0:	55                   	push   %ebp
 86dd4a1:	31 c0                	xor    %eax,%eax
 86dd4a3:	89 e5                	mov    %esp,%ebp
 86dd4a5:	8b 55 08             	mov    0x8(%ebp),%edx
 86dd4a8:	8b 4a 14             	mov    0x14(%edx),%ecx
 86dd4ab:	85 c9                	test   %ecx,%ecx
 86dd4ad:	74 05                	je     86dd4b4 <_ZNKSt12strstreambuf6pcountEv+0x14>
 86dd4af:	89 c8                	mov    %ecx,%eax
 86dd4b1:	2b 42 10             	sub    0x10(%edx),%eax
 86dd4b4:	5d                   	pop    %ebp
 86dd4b5:	c3                   	ret
 86dd4b6:	90                   	nop
 86dd4b7:	90                   	nop
 86dd4b8:	90                   	nop
 86dd4b9:	90                   	nop
 86dd4ba:	90                   	nop
 86dd4bb:	90                   	nop
 86dd4bc:	90                   	nop
 86dd4bd:	90                   	nop
 86dd4be:	90                   	nop
 86dd4bf:	90                   	nop

```

```c
// std::strstreambuf::pcount @ 0x86dd4a0

/* std::strstreambuf::pcount() const */

int __thiscall std::strstreambuf::pcount(strstreambuf *this)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(this + 0x14) != 0) {
    iVar1 = *(int *)(this + 0x14) - *(int *)(this + 0x10);
  }
  return iVar1;
}

```

---

## seekoff

```asm
// === 086dd580 std::strstreambuf::seekoff  [0x086dd580-0x86dd7ef] ===
 86dd580:	55                   	push   %ebp
 86dd581:	89 e5                	mov    %esp,%ebp
 86dd583:	83 ec 38             	sub    $0x38,%esp
 86dd586:	8b 4d 10             	mov    0x10(%ebp),%ecx
 86dd589:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dd58c:	8b 5d 14             	mov    0x14(%ebp),%ebx
 86dd58f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dd592:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd595:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dd598:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dd59b:	89 4d e8             	mov    %ecx,-0x18(%ebp)
 86dd59e:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 86dd5a1:	89 5d ec             	mov    %ebx,-0x14(%ebp)
 86dd5a4:	89 ce                	mov    %ecx,%esi
 86dd5a6:	83 e6 18             	and    $0x18,%esi
 86dd5a9:	83 fe 18             	cmp    $0x18,%esi
 86dd5ac:	0f 84 4e 01 00 00    	je     86dd700 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x180>
 86dd5b2:	f6 c1 08             	test   $0x8,%cl
 86dd5b5:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 86dd5b9:	c6 45 de 01          	movb   $0x1,-0x22(%ebp)
 86dd5bd:	0f 84 ad 00 00 00    	je     86dd670 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xf0>
 86dd5c3:	8b 7a 08             	mov    0x8(%edx),%edi
 86dd5c6:	85 ff                	test   %edi,%edi
 86dd5c8:	74 76                	je     86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd5ca:	8b 4a 04             	mov    0x4(%edx),%ecx
 86dd5cd:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 86dd5d0:	8b 4a 18             	mov    0x18(%edx),%ecx
 86dd5d3:	85 c9                	test   %ecx,%ecx
 86dd5d5:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 86dd5d8:	0f 84 8a 01 00 00    	je     86dd768 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x1e8>
 86dd5de:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 86dd5e2:	0f 84 48 01 00 00    	je     86dd730 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x1b0>
 86dd5e8:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 86dd5ec:	0f 84 5e 01 00 00    	je     86dd750 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x1d0>
 86dd5f2:	8b 5d 18             	mov    0x18(%ebp),%ebx
 86dd5f5:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86dd5fc:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86dd603:	85 db                	test   %ebx,%ebx
 86dd605:	75 39                	jne    86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd607:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 86dd60a:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 86dd60d:	03 5d e8             	add    -0x18(%ebp),%ebx
 86dd610:	13 75 ec             	adc    -0x14(%ebp),%esi
 86dd613:	89 5d e8             	mov    %ebx,-0x18(%ebp)
 86dd616:	85 f6                	test   %esi,%esi
 86dd618:	89 75 ec             	mov    %esi,-0x14(%ebp)
 86dd61b:	78 23                	js     86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd61d:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 86dd620:	2b 5d cc             	sub    -0x34(%ebp),%ebx
 86dd623:	89 de                	mov    %ebx,%esi
 86dd625:	c1 fe 1f             	sar    $0x1f,%esi
 86dd628:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 86dd62b:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 86dd62e:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 86dd631:	39 5d ec             	cmp    %ebx,-0x14(%ebp)
 86dd634:	7c 4a                	jl     86dd680 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x100>
 86dd636:	7f 08                	jg     86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd638:	8b 75 e0             	mov    -0x20(%ebp),%esi
 86dd63b:	39 75 e8             	cmp    %esi,-0x18(%ebp)
 86dd63e:	76 40                	jbe    86dd680 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x100>
 86dd640:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 86dd646:	c7 40 04 ff ff ff ff 	movl   $0xffffffff,0x4(%eax)
 86dd64d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86dd654:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 86dd65b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dd65e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dd661:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dd664:	89 ec                	mov    %ebp,%esp
 86dd666:	5d                   	pop    %ebp
 86dd667:	c2 04 00             	ret    $0x4
 86dd66a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86dd670:	83 e1 10             	and    $0x10,%ecx
 86dd673:	74 cb                	je     86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd675:	c6 45 de 00          	movb   $0x0,-0x22(%ebp)
 86dd679:	e9 97 00 00 00       	jmp    86dd715 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x195>
 86dd67e:	66 90                	xchg   %ax,%ax
 86dd680:	80 7d df 00          	cmpb   $0x0,-0x21(%ebp)
 86dd684:	74 1d                	je     86dd6a3 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x123>
 86dd686:	8b 7a 10             	mov    0x10(%edx),%edi
 86dd689:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 86dd68c:	03 5d e8             	add    -0x18(%ebp),%ebx
 86dd68f:	39 df                	cmp    %ebx,%edi
 86dd691:	0f 86 21 01 00 00    	jbe    86dd7b8 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x238>
 86dd697:	8b 75 cc             	mov    -0x34(%ebp),%esi
 86dd69a:	89 4a 18             	mov    %ecx,0x18(%edx)
 86dd69d:	89 5a 14             	mov    %ebx,0x14(%edx)
 86dd6a0:	89 72 10             	mov    %esi,0x10(%edx)
 86dd6a3:	80 7d de 00          	cmpb   $0x0,-0x22(%ebp)
 86dd6a7:	74 2d                	je     86dd6d6 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x156>
 86dd6a9:	8b 7a 0c             	mov    0xc(%edx),%edi
 86dd6ac:	89 f9                	mov    %edi,%ecx
 86dd6ae:	2b 4d cc             	sub    -0x34(%ebp),%ecx
 86dd6b1:	89 cb                	mov    %ecx,%ebx
 86dd6b3:	c1 fb 1f             	sar    $0x1f,%ebx
 86dd6b6:	39 5d ec             	cmp    %ebx,-0x14(%ebp)
 86dd6b9:	0f 8f ca 00 00 00    	jg     86dd789 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x209>
 86dd6bf:	0f 8d bb 00 00 00    	jge    86dd780 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x200>
 86dd6c5:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86dd6c8:	8b 75 e8             	mov    -0x18(%ebp),%esi
 86dd6cb:	89 7a 0c             	mov    %edi,0xc(%edx)
 86dd6ce:	89 4a 04             	mov    %ecx,0x4(%edx)
 86dd6d1:	01 ce                	add    %ecx,%esi
 86dd6d3:	89 72 08             	mov    %esi,0x8(%edx)
 86dd6d6:	8b 55 d0             	mov    -0x30(%ebp),%edx
 86dd6d9:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 86dd6dc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86dd6e3:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 86dd6ea:	89 10                	mov    %edx,(%eax)
 86dd6ec:	89 48 04             	mov    %ecx,0x4(%eax)
 86dd6ef:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dd6f2:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dd6f5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dd6f8:	89 ec                	mov    %ebp,%esp
 86dd6fa:	5d                   	pop    %ebp
 86dd6fb:	c2 04 00             	ret    $0x4
 86dd6fe:	66 90                	xchg   %ax,%ax
 86dd700:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 86dd704:	74 0b                	je     86dd711 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x191>
 86dd706:	8b 7d 18             	mov    0x18(%ebp),%edi
 86dd709:	85 ff                	test   %edi,%edi
 86dd70b:	0f 85 a1 fe ff ff    	jne    86dd5b2 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x32>
 86dd711:	c6 45 de 01          	movb   $0x1,-0x22(%ebp)
 86dd715:	8b 72 14             	mov    0x14(%edx),%esi
 86dd718:	85 f6                	test   %esi,%esi
 86dd71a:	0f 84 20 ff ff ff    	je     86dd640 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0xc0>
 86dd720:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 86dd724:	e9 9a fe ff ff       	jmp    86dd5c3 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x43>
 86dd729:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dd730:	80 7d df 00          	cmpb   $0x0,-0x21(%ebp)
 86dd734:	74 42                	je     86dd778 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x1f8>
 86dd736:	8b 7a 14             	mov    0x14(%edx),%edi
 86dd739:	2b 7d cc             	sub    -0x34(%ebp),%edi
 86dd73c:	89 fb                	mov    %edi,%ebx
 86dd73e:	c1 fb 1f             	sar    $0x1f,%ebx
 86dd741:	89 7d d0             	mov    %edi,-0x30(%ebp)
 86dd744:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 86dd747:	e9 bb fe ff ff       	jmp    86dd607 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x87>
 86dd74c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dd750:	8b 7d e0             	mov    -0x20(%ebp),%edi
 86dd753:	2b 7d cc             	sub    -0x34(%ebp),%edi
 86dd756:	89 fe                	mov    %edi,%esi
 86dd758:	c1 fe 1f             	sar    $0x1f,%esi
 86dd75b:	89 7d d0             	mov    %edi,-0x30(%ebp)
 86dd75e:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 86dd761:	e9 a1 fe ff ff       	jmp    86dd607 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x87>
 86dd766:	66 90                	xchg   %ax,%ax
 86dd768:	8b 5a 0c             	mov    0xc(%edx),%ebx
 86dd76b:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 86dd76e:	e9 6b fe ff ff       	jmp    86dd5de <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x5e>
 86dd773:	90                   	nop
 86dd774:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dd778:	2b 7d cc             	sub    -0x34(%ebp),%edi
 86dd77b:	eb bf                	jmp    86dd73c <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x1bc>
 86dd77d:	8d 76 00             	lea    0x0(%esi),%esi
 86dd780:	39 4d e8             	cmp    %ecx,-0x18(%ebp)
 86dd783:	0f 86 3c ff ff ff    	jbe    86dd6c5 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x145>
 86dd789:	8b 7a 14             	mov    0x14(%edx),%edi
 86dd78c:	89 f9                	mov    %edi,%ecx
 86dd78e:	2b 4d cc             	sub    -0x34(%ebp),%ecx
 86dd791:	89 cb                	mov    %ecx,%ebx
 86dd793:	c1 fb 1f             	sar    $0x1f,%ebx
 86dd796:	39 5d ec             	cmp    %ebx,-0x14(%ebp)
 86dd799:	7f 35                	jg     86dd7d0 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x250>
 86dd79b:	7c 05                	jl     86dd7a2 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x222>
 86dd79d:	39 4d e8             	cmp    %ecx,-0x18(%ebp)
 86dd7a0:	77 2e                	ja     86dd7d0 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x250>
 86dd7a2:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 86dd7a5:	8b 75 e8             	mov    -0x18(%ebp),%esi
 86dd7a8:	89 7a 0c             	mov    %edi,0xc(%edx)
 86dd7ab:	89 5a 04             	mov    %ebx,0x4(%edx)
 86dd7ae:	01 de                	add    %ebx,%esi
 86dd7b0:	89 72 08             	mov    %esi,0x8(%edx)
 86dd7b3:	e9 1e ff ff ff       	jmp    86dd6d6 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x156>
 86dd7b8:	89 4a 18             	mov    %ecx,0x18(%edx)
 86dd7bb:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 86dd7be:	03 4d e8             	add    -0x18(%ebp),%ecx
 86dd7c1:	89 7a 10             	mov    %edi,0x10(%edx)
 86dd7c4:	89 4a 14             	mov    %ecx,0x14(%edx)
 86dd7c7:	e9 d7 fe ff ff       	jmp    86dd6a3 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x123>
 86dd7cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dd7d0:	8b 75 cc             	mov    -0x34(%ebp),%esi
 86dd7d3:	8b 4a 18             	mov    0x18(%edx),%ecx
 86dd7d6:	89 72 04             	mov    %esi,0x4(%edx)
 86dd7d9:	03 75 e8             	add    -0x18(%ebp),%esi
 86dd7dc:	89 4a 0c             	mov    %ecx,0xc(%edx)
 86dd7df:	89 72 08             	mov    %esi,0x8(%edx)
 86dd7e2:	e9 ef fe ff ff       	jmp    86dd6d6 <_ZNSt12strstreambuf7seekoffExSt12_Ios_SeekdirSt13_Ios_Openmode+0x156>
 86dd7e7:	90                   	nop
 86dd7e8:	90                   	nop
 86dd7e9:	90                   	nop
 86dd7ea:	90                   	nop
 86dd7eb:	90                   	nop
 86dd7ec:	90                   	nop
 86dd7ed:	90                   	nop
 86dd7ee:	90                   	nop
 86dd7ef:	90                   	nop

```

```c
// std::strstreambuf::seekoff @ 0x86dd580

/* std::strstreambuf::seekoff(long long, std::_Ios_Seekdir, std::_Ios_Openmode) */

void std::strstreambuf::seekoff(longlong param_1,_Ios_Seekdir param_2,_Ios_Openmode param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000014;
  uint in_stack_00000018;
  uint local_34;
  uint local_30;
  int local_24;
  
  if (((in_stack_00000018 & 0x18) == 0x18) && ((in_stack_00000014 == 2 || (in_stack_00000014 == 0)))
     ) {
    bVar3 = true;
LAB_086dd715:
    if (*(int *)(param_1._4_4_ + 0x14) == 0) goto LAB_086dd640;
    bVar2 = true;
  }
  else {
    bVar2 = false;
    bVar3 = true;
    if ((in_stack_00000018 & 8) == 0) {
      if ((in_stack_00000018 & 0x10) == 0) goto LAB_086dd640;
      bVar3 = false;
      goto LAB_086dd715;
    }
  }
  if (*(int *)(param_1._4_4_ + 8) != 0) {
    iVar1 = *(int *)(param_1._4_4_ + 4);
    iVar6 = *(int *)(param_1._4_4_ + 0x18);
    local_24 = iVar6;
    if (iVar6 == 0) {
      local_24 = *(int *)(param_1._4_4_ + 0xc);
    }
    if (in_stack_00000014 == 1) {
      if (bVar2) {
        local_34 = *(int *)(param_1._4_4_ + 0x14) - iVar1;
      }
      else {
        local_34 = *(int *)(param_1._4_4_ + 8) - iVar1;
      }
      local_30 = (int)local_34 >> 0x1f;
    }
    else if (in_stack_00000014 == 2) {
      local_34 = local_24 - iVar1;
      local_30 = (int)local_34 >> 0x1f;
    }
    else {
      local_34 = 0;
      local_30 = 0;
      if (in_stack_00000014 != 0) goto LAB_086dd640;
    }
    uVar5 = local_34 + param_2;
    iVar7 = local_30 + param_3 + (uint)CARRY4(local_34,param_2);
    if (-1 < iVar7) {
      iVar8 = local_24 - iVar1 >> 0x1f;
      if ((iVar7 < iVar8) || ((iVar7 <= iVar8 && (uVar5 <= (uint)(local_24 - iVar1))))) {
        if (bVar2) {
          if (iVar1 + uVar5 < *(uint *)(param_1._4_4_ + 0x10)) {
            *(int *)(param_1._4_4_ + 0x18) = iVar6;
            *(uint *)(param_1._4_4_ + 0x14) = iVar1 + uVar5;
            *(int *)(param_1._4_4_ + 0x10) = iVar1;
          }
          else {
            *(int *)(param_1._4_4_ + 0x18) = iVar6;
            *(uint *)(param_1._4_4_ + 0x10) = *(uint *)(param_1._4_4_ + 0x10);
            *(uint *)(param_1._4_4_ + 0x14) = iVar1 + uVar5;
          }
        }
        if (bVar3) {
          uVar4 = *(int *)(param_1._4_4_ + 0xc) - iVar1;
          iVar6 = (int)uVar4 >> 0x1f;
          if ((iVar6 < iVar7) || ((iVar6 <= iVar7 && (uVar4 < uVar5)))) {
            uVar4 = *(int *)(param_1._4_4_ + 0x14) - iVar1;
            iVar6 = (int)uVar4 >> 0x1f;
            if ((iVar6 < iVar7) || ((iVar6 <= iVar7 && (uVar4 < uVar5)))) {
              *(int *)(param_1._4_4_ + 4) = iVar1;
              *(undefined4 *)(param_1._4_4_ + 0xc) = *(undefined4 *)(param_1._4_4_ + 0x18);
              *(uint *)(param_1._4_4_ + 8) = iVar1 + uVar5;
            }
            else {
              *(int *)(param_1._4_4_ + 0xc) = *(int *)(param_1._4_4_ + 0x14);
              *(int *)(param_1._4_4_ + 4) = iVar1;
              *(uint *)(param_1._4_4_ + 8) = uVar5 + iVar1;
            }
          }
          else {
            *(int *)(param_1._4_4_ + 0xc) = *(int *)(param_1._4_4_ + 0xc);
            *(int *)(param_1._4_4_ + 4) = iVar1;
            *(uint *)(param_1._4_4_ + 8) = uVar5 + iVar1;
          }
        }
        ((uint *)param_1)[2] = 0;
        ((uint *)param_1)[3] = 0;
        *(uint *)param_1 = local_34;
        ((uint *)param_1)[1] = local_30;
        return;
      }
    }
  }
LAB_086dd640:
  *(uint *)param_1 = 0xffffffff;
  ((uint *)param_1)[1] = 0xffffffff;
  ((uint *)param_1)[2] = 0;
  ((uint *)param_1)[3] = 0;
  return;
}

```

---

## seekpos

```asm
// === 086dd7f0 std::strstreambuf::seekpos  [0x086dd7f0-0x86dd84f] ===
 86dd7f0:	55                   	push   %ebp
 86dd7f1:	89 e5                	mov    %esp,%ebp
 86dd7f3:	83 ec 38             	sub    $0x38,%esp
 86dd7f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd7f9:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dd7fc:	8b 4d 20             	mov    0x20(%ebp),%ecx
 86dd7ff:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd802:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dd805:	8b 75 10             	mov    0x10(%ebp),%esi
 86dd808:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dd80b:	8b 7d 14             	mov    0x14(%ebp),%edi
 86dd80e:	8b 10                	mov    (%eax),%edx
 86dd810:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd814:	89 74 24 08          	mov    %esi,0x8(%esp)
 86dd818:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 86dd81c:	89 1c 24             	mov    %ebx,(%esp)
 86dd81f:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 86dd823:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86dd82a:	00 
 86dd82b:	ff 52 10             	call   *0x10(%edx)
 86dd82e:	89 d8                	mov    %ebx,%eax
 86dd830:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dd833:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dd836:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dd839:	83 ec 04             	sub    $0x4,%esp
 86dd83c:	89 ec                	mov    %ebp,%esp
 86dd83e:	5d                   	pop    %ebp
 86dd83f:	c2 04 00             	ret    $0x4
 86dd842:	90                   	nop
 86dd843:	90                   	nop
 86dd844:	90                   	nop
 86dd845:	90                   	nop
 86dd846:	90                   	nop
 86dd847:	90                   	nop
 86dd848:	90                   	nop
 86dd849:	90                   	nop
 86dd84a:	90                   	nop
 86dd84b:	90                   	nop
 86dd84c:	90                   	nop
 86dd84d:	90                   	nop
 86dd84e:	90                   	nop
 86dd84f:	90                   	nop

```

```c
// std::strstreambuf::seekpos @ 0x86dd7f0

/* std::strstreambuf::seekpos(std::fpos<__mbstate_t>, std::_Ios_Openmode) */

undefined4
std::strstreambuf::seekpos
          (undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_2 + 0x10))(param_1,param_2,param_3,param_4,0,param_7);
  return param_1;
}

```

---

## setbuf

```asm
// === 086dd570 std::strstreambuf::setbuf  [0x086dd570-0x86dd57f] ===
 86dd570:	55                   	push   %ebp
 86dd571:	89 e5                	mov    %esp,%ebp
 86dd573:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd576:	5d                   	pop    %ebp
 86dd577:	c3                   	ret
 86dd578:	90                   	nop
 86dd579:	90                   	nop
 86dd57a:	90                   	nop
 86dd57b:	90                   	nop
 86dd57c:	90                   	nop
 86dd57d:	90                   	nop
 86dd57e:	90                   	nop
 86dd57f:	90                   	nop

```

```c
// std::strstreambuf::setbuf @ 0x86dd570

/* std::strstreambuf::setbuf(char*, int) */

char * std::strstreambuf::setbuf(char *param_1,int param_2)

{
  return param_1;
}

```

---

## str

```asm
// === 086dd480 std::strstreambuf::str  [0x086dd480-0x86dd49f] ===
 86dd480:	55                   	push   %ebp
 86dd481:	89 e5                	mov    %esp,%ebp
 86dd483:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd486:	0f b6 50 28          	movzbl 0x28(%eax),%edx
 86dd48a:	f6 c2 01             	test   $0x1,%dl
 86dd48d:	74 06                	je     86dd495 <_ZNSt12strstreambuf3strEv+0x15>
 86dd48f:	83 ca 02             	or     $0x2,%edx
 86dd492:	88 50 28             	mov    %dl,0x28(%eax)
 86dd495:	8b 40 04             	mov    0x4(%eax),%eax
 86dd498:	5d                   	pop    %ebp
 86dd499:	c3                   	ret
 86dd49a:	90                   	nop
 86dd49b:	90                   	nop
 86dd49c:	90                   	nop
 86dd49d:	90                   	nop
 86dd49e:	90                   	nop
 86dd49f:	90                   	nop

```

```c
// std::strstreambuf::str @ 0x86dd480

/* std::strstreambuf::str() */

undefined4 __thiscall std::strstreambuf::str(strstreambuf *this)

{
  if (((byte)this[0x28] & 1) != 0) {
    this[0x28] = (strstreambuf)((byte)this[0x28] | 2);
  }
  return *(undefined4 *)(this + 4);
}

```

---

## strstreambuf

```asm
// === 086ddb90 std::strstreambuf::strstreambuf  [0x086ddb90-0x86ddc4f] ===
 86ddb90:	55                   	push   %ebp
 86ddb91:	89 e5                	mov    %esp,%ebp
 86ddb93:	56                   	push   %esi
 86ddb94:	53                   	push   %ebx
 86ddb95:	83 ec 10             	sub    $0x10,%esp
 86ddb98:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddb9b:	8d 43 1c             	lea    0x1c(%ebx),%eax
 86ddb9e:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86ddba4:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86ddbab:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86ddbb2:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86ddbb9:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86ddbc0:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86ddbc7:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86ddbce:	89 04 24             	mov    %eax,(%esp)
 86ddbd1:	e8 7a f4 ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86ddbd6:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86ddbda:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86ddbe0:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86ddbe7:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86ddbee:	83 c8 01             	or     $0x1,%eax
 86ddbf1:	83 e0 f9             	and    $0xfffffff9,%eax
 86ddbf4:	88 43 28             	mov    %al,0x28(%ebx)
 86ddbf7:	8b 75 0c             	mov    0xc(%ebp),%esi
 86ddbfa:	83 fe 0f             	cmp    $0xf,%esi
 86ddbfd:	7f 05                	jg     86ddc04 <_ZNSt12strstreambufC1Ei+0x74>
 86ddbff:	be 10 00 00 00       	mov    $0x10,%esi
 86ddc04:	89 74 24 04          	mov    %esi,0x4(%esp)
 86ddc08:	89 1c 24             	mov    %ebx,(%esp)
 86ddc0b:	e8 30 fe ff ff       	call   86dda40 <_ZNSt12strstreambuf8_M_allocEj>
 86ddc10:	85 c0                	test   %eax,%eax
 86ddc12:	74 15                	je     86ddc29 <_ZNSt12strstreambufC1Ei+0x99>
 86ddc14:	8d 34 30             	lea    (%eax,%esi,1),%esi
 86ddc17:	89 43 14             	mov    %eax,0x14(%ebx)
 86ddc1a:	89 43 10             	mov    %eax,0x10(%ebx)
 86ddc1d:	89 73 18             	mov    %esi,0x18(%ebx)
 86ddc20:	89 43 04             	mov    %eax,0x4(%ebx)
 86ddc23:	89 43 08             	mov    %eax,0x8(%ebx)
 86ddc26:	89 43 0c             	mov    %eax,0xc(%ebx)
 86ddc29:	83 c4 10             	add    $0x10,%esp
 86ddc2c:	5b                   	pop    %ebx
 86ddc2d:	5e                   	pop    %esi
 86ddc2e:	5d                   	pop    %ebp
 86ddc2f:	c3                   	ret
 86ddc30:	89 c6                	mov    %eax,%esi
 86ddc32:	89 1c 24             	mov    %ebx,(%esp)
 86ddc35:	e8 76 83 02 00       	call   8705fb0 <_ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev>
 86ddc3a:	89 34 24             	mov    %esi,(%esp)
 86ddc3d:	e8 0e 5b 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddc42:	90                   	nop
 86ddc43:	90                   	nop
 86ddc44:	90                   	nop
 86ddc45:	90                   	nop
 86ddc46:	90                   	nop
 86ddc47:	90                   	nop
 86ddc48:	90                   	nop
 86ddc49:	90                   	nop
 86ddc4a:	90                   	nop
 86ddc4b:	90                   	nop
 86ddc4c:	90                   	nop
 86ddc4d:	90                   	nop
 86ddc4e:	90                   	nop
 86ddc4f:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86ddb90

/* std::strstreambuf::strstreambuf(int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,int param_1)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf9 | 1);
  if (param_1 < 0x10) {
    param_1 = 0x10;
  }
                    /* try { // try from 086ddc0b to 086ddc0f has its CatchHandler @ 086ddc30 */
  iVar1 = _M_alloc(this,param_1);
  if (iVar1 != 0) {
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x10) = iVar1;
    *(int *)(this + 0x18) = iVar1 + param_1;
    *(int *)(this + 4) = iVar1;
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 0xc) = iVar1;
  }
  return;
}

```

---

## strstreambuf_086de2e0

```asm
// === 086de2e0 std::strstreambuf::strstreambuf  [0x086de2e0-0x86de36f] ===
 86de2e0:	55                   	push   %ebp
 86de2e1:	89 e5                	mov    %esp,%ebp
 86de2e3:	53                   	push   %ebx
 86de2e4:	83 ec 14             	sub    $0x14,%esp
 86de2e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de2ea:	8d 43 1c             	lea    0x1c(%ebx),%eax
 86de2ed:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de2f3:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de2fa:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de301:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de308:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de30f:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de316:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de31d:	89 04 24             	mov    %eax,(%esp)
 86de320:	e8 2b ed ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de325:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86de329:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de32f:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de336:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de33d:	83 e0 fc             	and    $0xfffffffc,%eax
 86de340:	83 c8 04             	or     $0x4,%eax
 86de343:	88 43 28             	mov    %al,0x28(%ebx)
 86de346:	8b 45 10             	mov    0x10(%ebp),%eax
 86de349:	89 1c 24             	mov    %ebx,(%esp)
 86de34c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86de353:	00 
 86de354:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86de358:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de35b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de35f:	e8 1c f6 ff ff       	call   86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de364:	83 c4 14             	add    $0x14,%esp
 86de367:	5b                   	pop    %ebx
 86de368:	5d                   	pop    %ebp
 86de369:	c3                   	ret
 86de36a:	90                   	nop
 86de36b:	90                   	nop
 86de36c:	90                   	nop
 86de36d:	90                   	nop
 86de36e:	90                   	nop
 86de36f:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de2e0

/* std::strstreambuf::strstreambuf(unsigned char const*, int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,uchar *param_1,int param_2)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfc | 4);
  _M_setup(this,(char *)param_1,(char *)0x0,param_2);
  return;
}

```

---

## strstreambuf_086de370

```asm
// === 086de370 std::strstreambuf::strstreambuf  [0x086de370-0x86de3ff] ===
 86de370:	55                   	push   %ebp
 86de371:	89 e5                	mov    %esp,%ebp
 86de373:	53                   	push   %ebx
 86de374:	83 ec 14             	sub    $0x14,%esp
 86de377:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de37a:	8d 43 1c             	lea    0x1c(%ebx),%eax
 86de37d:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de383:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de38a:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de391:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de398:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de39f:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de3a6:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de3ad:	89 04 24             	mov    %eax,(%esp)
 86de3b0:	e8 9b ec ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de3b5:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86de3b9:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de3bf:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de3c6:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de3cd:	83 e0 fc             	and    $0xfffffffc,%eax
 86de3d0:	83 c8 04             	or     $0x4,%eax
 86de3d3:	88 43 28             	mov    %al,0x28(%ebx)
 86de3d6:	8b 45 10             	mov    0x10(%ebp),%eax
 86de3d9:	89 1c 24             	mov    %ebx,(%esp)
 86de3dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86de3e3:	00 
 86de3e4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86de3e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de3eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de3ef:	e8 8c f5 ff ff       	call   86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de3f4:	83 c4 14             	add    $0x14,%esp
 86de3f7:	5b                   	pop    %ebx
 86de3f8:	5d                   	pop    %ebp
 86de3f9:	c3                   	ret
 86de3fa:	90                   	nop
 86de3fb:	90                   	nop
 86de3fc:	90                   	nop
 86de3fd:	90                   	nop
 86de3fe:	90                   	nop
 86de3ff:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de370

/* std::strstreambuf::strstreambuf(signed char const*, int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,signed *param_1,int param_2)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfc | 4);
  _M_setup(this,(char *)param_1,(char *)0x0,param_2);
  return;
}

```

---

## strstreambuf_086de400

```asm
// === 086de400 std::strstreambuf::strstreambuf  [0x086de400-0x86de48f] ===
 86de400:	55                   	push   %ebp
 86de401:	89 e5                	mov    %esp,%ebp
 86de403:	53                   	push   %ebx
 86de404:	83 ec 14             	sub    $0x14,%esp
 86de407:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de40a:	8d 43 1c             	lea    0x1c(%ebx),%eax
 86de40d:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de413:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de41a:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de421:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de428:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de42f:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de436:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de43d:	89 04 24             	mov    %eax,(%esp)
 86de440:	e8 0b ec ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de445:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86de449:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de44f:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de456:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de45d:	83 e0 fc             	and    $0xfffffffc,%eax
 86de460:	83 c8 04             	or     $0x4,%eax
 86de463:	88 43 28             	mov    %al,0x28(%ebx)
 86de466:	8b 45 10             	mov    0x10(%ebp),%eax
 86de469:	89 1c 24             	mov    %ebx,(%esp)
 86de46c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86de473:	00 
 86de474:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86de478:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de47b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86de47f:	e8 fc f4 ff ff       	call   86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de484:	83 c4 14             	add    $0x14,%esp
 86de487:	5b                   	pop    %ebx
 86de488:	5d                   	pop    %ebp
 86de489:	c3                   	ret
 86de48a:	90                   	nop
 86de48b:	90                   	nop
 86de48c:	90                   	nop
 86de48d:	90                   	nop
 86de48e:	90                   	nop
 86de48f:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de400

/* std::strstreambuf::strstreambuf(char const*, int) */

void __thiscall std::strstreambuf::strstreambuf(strstreambuf *this,char *param_1,int param_2)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xfc | 4);
  _M_setup(this,param_1,(char *)0x0,param_2);
  return;
}

```

---

## strstreambuf_086de490

```asm
// === 086de490 std::strstreambuf::strstreambuf  [0x086de490-0x86de52f] ===
 86de490:	55                   	push   %ebp
 86de491:	89 e5                	mov    %esp,%ebp
 86de493:	83 ec 38             	sub    $0x38,%esp
 86de496:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de499:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de49c:	8b 45 10             	mov    0x10(%ebp),%eax
 86de49f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de4a2:	8b 75 0c             	mov    0xc(%ebp),%esi
 86de4a5:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de4a8:	8b 7d 14             	mov    0x14(%ebp),%edi
 86de4ab:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de4b1:	8d 53 1c             	lea    0x1c(%ebx),%edx
 86de4b4:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de4bb:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de4c2:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de4c9:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de4d0:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de4d7:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de4de:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86de4e1:	89 14 24             	mov    %edx,(%esp)
 86de4e4:	e8 67 eb ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de4e9:	80 63 28 f8          	andb   $0xf8,0x28(%ebx)
 86de4ed:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de4f0:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de4f6:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de4fd:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de504:	89 7d 10             	mov    %edi,0x10(%ebp)
 86de507:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de50a:	89 75 0c             	mov    %esi,0xc(%ebp)
 86de50d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de510:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86de513:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de516:	89 45 14             	mov    %eax,0x14(%ebp)
 86de519:	89 ec                	mov    %ebp,%esp
 86de51b:	5d                   	pop    %ebp
 86de51c:	e9 5f f4 ff ff       	jmp    86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de521:	90                   	nop
 86de522:	90                   	nop
 86de523:	90                   	nop
 86de524:	90                   	nop
 86de525:	90                   	nop
 86de526:	90                   	nop
 86de527:	90                   	nop
 86de528:	90                   	nop
 86de529:	90                   	nop
 86de52a:	90                   	nop
 86de52b:	90                   	nop
 86de52c:	90                   	nop
 86de52d:	90                   	nop
 86de52e:	90                   	nop
 86de52f:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de490

/* std::strstreambuf::strstreambuf(unsigned char*, int, unsigned char*) */

void __thiscall
std::strstreambuf::strstreambuf(strstreambuf *this,uchar *param_1,int param_2,uchar *param_3)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf8);
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  _M_setup(this,(char *)param_1,(char *)param_3,param_2);
  return;
}

```

---

## strstreambuf_086de530

```asm
// === 086de530 std::strstreambuf::strstreambuf  [0x086de530-0x86de5cf] ===
 86de530:	55                   	push   %ebp
 86de531:	89 e5                	mov    %esp,%ebp
 86de533:	83 ec 38             	sub    $0x38,%esp
 86de536:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de539:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de53c:	8b 45 10             	mov    0x10(%ebp),%eax
 86de53f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de542:	8b 75 0c             	mov    0xc(%ebp),%esi
 86de545:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de548:	8b 7d 14             	mov    0x14(%ebp),%edi
 86de54b:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de551:	8d 53 1c             	lea    0x1c(%ebx),%edx
 86de554:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de55b:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de562:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de569:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de570:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de577:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de57e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86de581:	89 14 24             	mov    %edx,(%esp)
 86de584:	e8 c7 ea ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de589:	80 63 28 f8          	andb   $0xf8,0x28(%ebx)
 86de58d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de590:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de596:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de59d:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de5a4:	89 7d 10             	mov    %edi,0x10(%ebp)
 86de5a7:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de5aa:	89 75 0c             	mov    %esi,0xc(%ebp)
 86de5ad:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de5b0:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86de5b3:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de5b6:	89 45 14             	mov    %eax,0x14(%ebp)
 86de5b9:	89 ec                	mov    %ebp,%esp
 86de5bb:	5d                   	pop    %ebp
 86de5bc:	e9 bf f3 ff ff       	jmp    86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de5c1:	90                   	nop
 86de5c2:	90                   	nop
 86de5c3:	90                   	nop
 86de5c4:	90                   	nop
 86de5c5:	90                   	nop
 86de5c6:	90                   	nop
 86de5c7:	90                   	nop
 86de5c8:	90                   	nop
 86de5c9:	90                   	nop
 86de5ca:	90                   	nop
 86de5cb:	90                   	nop
 86de5cc:	90                   	nop
 86de5cd:	90                   	nop
 86de5ce:	90                   	nop
 86de5cf:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de530

/* std::strstreambuf::strstreambuf(signed char*, int, signed char*) */

void __thiscall
std::strstreambuf::strstreambuf(strstreambuf *this,signed *param_1,int param_2,signed *param_3)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf8);
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  _M_setup(this,(char *)param_1,(char *)param_3,param_2);
  return;
}

```

---

## strstreambuf_086de5d0

```asm
// === 086de5d0 std::strstreambuf::strstreambuf  [0x086de5d0-0x86de66f] ===
 86de5d0:	55                   	push   %ebp
 86de5d1:	89 e5                	mov    %esp,%ebp
 86de5d3:	83 ec 38             	sub    $0x38,%esp
 86de5d6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86de5d9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de5dc:	8b 45 10             	mov    0x10(%ebp),%eax
 86de5df:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86de5e2:	8b 75 0c             	mov    0xc(%ebp),%esi
 86de5e5:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86de5e8:	8b 7d 14             	mov    0x14(%ebp),%edi
 86de5eb:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de5f1:	8d 53 1c             	lea    0x1c(%ebx),%edx
 86de5f4:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de5fb:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de602:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de609:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de610:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de617:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de61e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86de621:	89 14 24             	mov    %edx,(%esp)
 86de624:	e8 27 ea ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de629:	80 63 28 f8          	andb   $0xf8,0x28(%ebx)
 86de62d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86de630:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de636:	c7 43 20 00 00 00 00 	movl   $0x0,0x20(%ebx)
 86de63d:	c7 43 24 00 00 00 00 	movl   $0x0,0x24(%ebx)
 86de644:	89 7d 10             	mov    %edi,0x10(%ebp)
 86de647:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86de64a:	89 75 0c             	mov    %esi,0xc(%ebp)
 86de64d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86de650:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86de653:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86de656:	89 45 14             	mov    %eax,0x14(%ebp)
 86de659:	89 ec                	mov    %ebp,%esp
 86de65b:	5d                   	pop    %ebp
 86de65c:	e9 1f f3 ff ff       	jmp    86dd980 <_ZNSt12strstreambuf8_M_setupEPcS0_i>
 86de661:	90                   	nop
 86de662:	90                   	nop
 86de663:	90                   	nop
 86de664:	90                   	nop
 86de665:	90                   	nop
 86de666:	90                   	nop
 86de667:	90                   	nop
 86de668:	90                   	nop
 86de669:	90                   	nop
 86de66a:	90                   	nop
 86de66b:	90                   	nop
 86de66c:	90                   	nop
 86de66d:	90                   	nop
 86de66e:	90                   	nop
 86de66f:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de5d0

/* std::strstreambuf::strstreambuf(char*, int, char*) */

void __thiscall
std::strstreambuf::strstreambuf(strstreambuf *this,char *param_1,int param_2,char *param_3)

{
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf8);
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  _M_setup(this,param_1,param_3,param_2);
  return;
}

```

---

## strstreambuf_086de730

```asm
// === 086de730 std::strstreambuf::strstreambuf  [0x086de730-0x86de7df] ===
 86de730:	55                   	push   %ebp
 86de731:	89 e5                	mov    %esp,%ebp
 86de733:	53                   	push   %ebx
 86de734:	83 ec 24             	sub    $0x24,%esp
 86de737:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86de73a:	8d 43 1c             	lea    0x1c(%ebx),%eax
 86de73d:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86de743:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 86de74a:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 86de751:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 86de758:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 86de75f:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 86de766:	c7 43 18 00 00 00 00 	movl   $0x0,0x18(%ebx)
 86de76d:	89 04 24             	mov    %eax,(%esp)
 86de770:	e8 db e8 ff ff       	call   86dd050 <_ZNSt6localeC1Ev>
 86de775:	8b 45 0c             	mov    0xc(%ebp),%eax
 86de778:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86de77e:	89 43 20             	mov    %eax,0x20(%ebx)
 86de781:	8b 45 10             	mov    0x10(%ebp),%eax
 86de784:	89 43 24             	mov    %eax,0x24(%ebx)
 86de787:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86de78b:	83 c8 01             	or     $0x1,%eax
 86de78e:	83 e0 f9             	and    $0xfffffff9,%eax
 86de791:	88 43 28             	mov    %al,0x28(%ebx)
 86de794:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 86de79b:	00 
 86de79c:	89 1c 24             	mov    %ebx,(%esp)
 86de79f:	e8 9c f2 ff ff       	call   86dda40 <_ZNSt12strstreambuf8_M_allocEj>
 86de7a4:	85 c0                	test   %eax,%eax
 86de7a6:	74 15                	je     86de7bd <_ZNSt12strstreambufC1EPFPvjEPFvS0_E+0x8d>
 86de7a8:	8d 50 10             	lea    0x10(%eax),%edx
 86de7ab:	89 43 14             	mov    %eax,0x14(%ebx)
 86de7ae:	89 43 10             	mov    %eax,0x10(%ebx)
 86de7b1:	89 53 18             	mov    %edx,0x18(%ebx)
 86de7b4:	89 43 04             	mov    %eax,0x4(%ebx)
 86de7b7:	89 43 08             	mov    %eax,0x8(%ebx)
 86de7ba:	89 43 0c             	mov    %eax,0xc(%ebx)
 86de7bd:	83 c4 24             	add    $0x24,%esp
 86de7c0:	5b                   	pop    %ebx
 86de7c1:	5d                   	pop    %ebp
 86de7c2:	c3                   	ret
 86de7c3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86de7c6:	89 1c 24             	mov    %ebx,(%esp)
 86de7c9:	e8 e2 77 02 00       	call   8705fb0 <_ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev>
 86de7ce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86de7d1:	89 04 24             	mov    %eax,(%esp)
 86de7d4:	e8 77 4f 40 00       	call   8ae3750 <_Unwind_Resume>
 86de7d9:	90                   	nop
 86de7da:	90                   	nop
 86de7db:	90                   	nop
 86de7dc:	90                   	nop
 86de7dd:	90                   	nop
 86de7de:	90                   	nop
 86de7df:	90                   	nop

```

```c
// std::strstreambuf::strstreambuf @ 0x86de730

/* std::strstreambuf::strstreambuf(void* (*)(unsigned int), void (*)(void*)) */

void __thiscall
std::strstreambuf::strstreambuf
          (strstreambuf *this,_func_void_ptr_uint *param_1,_func_void_void_ptr *param_2)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__streambuf_08d00368;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  locale::locale((locale *)(this + 0x1c));
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  *(_func_void_ptr_uint **)(this + 0x20) = param_1;
  *(_func_void_void_ptr **)(this + 0x24) = param_2;
  this[0x28] = (strstreambuf)((byte)this[0x28] & 0xf9 | 1);
                    /* try { // try from 086de79f to 086de7a3 has its CatchHandler @ 086de7c3 */
  iVar1 = _M_alloc(this,0x10);
  if (iVar1 != 0) {
    *(int *)(this + 0x14) = iVar1;
    *(int *)(this + 0x10) = iVar1;
    *(int *)(this + 0x18) = iVar1 + 0x10;
    *(int *)(this + 4) = iVar1;
    *(int *)(this + 8) = iVar1;
    *(int *)(this + 0xc) = iVar1;
  }
  return;
}

```

---

## underflow

```asm
// === 086dd540 std::strstreambuf::underflow  [0x086dd540-0x86dd56f] ===
 86dd540:	55                   	push   %ebp
 86dd541:	89 e5                	mov    %esp,%ebp
 86dd543:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd546:	8b 50 08             	mov    0x8(%eax),%edx
 86dd549:	3b 50 0c             	cmp    0xc(%eax),%edx
 86dd54c:	74 0a                	je     86dd558 <_ZNSt12strstreambuf9underflowEv+0x18>
 86dd54e:	0f b6 02             	movzbl (%edx),%eax
 86dd551:	5d                   	pop    %ebp
 86dd552:	c3                   	ret
 86dd553:	90                   	nop
 86dd554:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dd558:	8b 48 14             	mov    0x14(%eax),%ecx
 86dd55b:	85 c9                	test   %ecx,%ecx
 86dd55d:	74 09                	je     86dd568 <_ZNSt12strstreambuf9underflowEv+0x28>
 86dd55f:	39 ca                	cmp    %ecx,%edx
 86dd561:	73 05                	jae    86dd568 <_ZNSt12strstreambuf9underflowEv+0x28>
 86dd563:	89 48 0c             	mov    %ecx,0xc(%eax)
 86dd566:	eb e6                	jmp    86dd54e <_ZNSt12strstreambuf9underflowEv+0xe>
 86dd568:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86dd56d:	5d                   	pop    %ebp
 86dd56e:	c3                   	ret
 86dd56f:	90                   	nop

```

```c
// std::strstreambuf::underflow @ 0x86dd540

/* std::strstreambuf::underflow() */

uint __thiscall std::strstreambuf::underflow(strstreambuf *this)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(this + 8);
  if (pbVar1 == *(byte **)(this + 0xc)) {
    pbVar2 = *(byte **)(this + 0x14);
    if ((pbVar2 == (byte *)0x0) || (pbVar2 <= pbVar1)) {
      return 0xffffffff;
    }
    *(byte **)(this + 0xc) = pbVar2;
  }
  return (uint)*pbVar1;
}

```

---

## ~strstreambuf

```asm
// === 086ddc50 std::strstreambuf::~strstreambuf  [0x086ddc50-0x86ddcaf] ===
 86ddc50:	55                   	push   %ebp
 86ddc51:	89 e5                	mov    %esp,%ebp
 86ddc53:	53                   	push   %ebx
 86ddc54:	83 ec 24             	sub    $0x24,%esp
 86ddc57:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddc5a:	0f b6 43 28          	movzbl 0x28(%ebx),%eax
 86ddc5e:	c7 03 68 e4 cf 08    	movl   $0x8cfe468,(%ebx)
 86ddc64:	a8 01                	test   $0x1,%al
 86ddc66:	74 04                	je     86ddc6c <_ZNSt12strstreambufD1Ev+0x1c>
 86ddc68:	a8 02                	test   $0x2,%al
 86ddc6a:	74 1c                	je     86ddc88 <_ZNSt12strstreambufD1Ev+0x38>
 86ddc6c:	c7 03 68 03 d0 08    	movl   $0x8d00368,(%ebx)
 86ddc72:	83 c3 1c             	add    $0x1c,%ebx
 86ddc75:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86ddc78:	83 c4 24             	add    $0x24,%esp
 86ddc7b:	5b                   	pop    %ebx
 86ddc7c:	5d                   	pop    %ebp
 86ddc7d:	e9 4e e0 ff ff       	jmp    86dbcd0 <_ZNSt6localeD1Ev>
 86ddc82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86ddc88:	8b 43 04             	mov    0x4(%ebx),%eax
 86ddc8b:	89 1c 24             	mov    %ebx,(%esp)
 86ddc8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ddc92:	e8 69 fd ff ff       	call   86dda00 <_ZNSt12strstreambuf7_M_freeEPc>
 86ddc97:	eb d3                	jmp    86ddc6c <_ZNSt12strstreambufD1Ev+0x1c>
 86ddc99:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ddc9c:	89 1c 24             	mov    %ebx,(%esp)
 86ddc9f:	e8 0c 83 02 00       	call   8705fb0 <_ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev>
 86ddca4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ddca7:	89 04 24             	mov    %eax,(%esp)
 86ddcaa:	e8 a1 5a 40 00       	call   8ae3750 <_Unwind_Resume>
 86ddcaf:	90                   	nop

```

```c
// std::strstreambuf::~strstreambuf @ 0x86ddc50

/* std::strstreambuf::~strstreambuf() */

void __thiscall std::strstreambuf::~strstreambuf(strstreambuf *this)

{
  *(undefined ***)this = &PTR__strstreambuf_08cfe468;
  if ((((byte)this[0x28] & 1) != 0) && (((byte)this[0x28] & 2) == 0)) {
                    /* try { // try from 086ddc92 to 086ddc96 has its CatchHandler @ 086ddc99 */
    _M_free(this,*(char **)(this + 4));
  }
  *(undefined ***)this = &PTR__streambuf_08d00368;
  locale::~locale((locale *)(this + 0x1c));
  return;
}

```

---

## ~strstreambuf_086ddd80

```asm
// === 086ddd80 std::strstreambuf::~strstreambuf  [0x086ddd80-0x86ddd9f] ===
 86ddd80:	55                   	push   %ebp
 86ddd81:	89 e5                	mov    %esp,%ebp
 86ddd83:	53                   	push   %ebx
 86ddd84:	83 ec 14             	sub    $0x14,%esp
 86ddd87:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86ddd8a:	89 1c 24             	mov    %ebx,(%esp)
 86ddd8d:	e8 be fe ff ff       	call   86ddc50 <_ZNSt12strstreambufD1Ev>
 86ddd92:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86ddd95:	83 c4 14             	add    $0x14,%esp
 86ddd98:	5b                   	pop    %ebx
 86ddd99:	5d                   	pop    %ebp
 86ddd9a:	e9 51 67 04 00       	jmp    87244f0 <_ZdlPv>
 86ddd9f:	90                   	nop

```

```c
// std::strstreambuf::~strstreambuf @ 0x86ddd80

/* std::strstreambuf::~strstreambuf() */

void __thiscall std::strstreambuf::~strstreambuf(strstreambuf *this)

{
  ~strstreambuf(this);
  operator_delete(this);
  return;
}

```


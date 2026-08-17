# WongWork__CQuestClear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## checkSaveFlag

```asm
// === 0808bb3e WongWork::CQuestClear::checkSaveFlag  [0x0808bb3e-0x808bb4d] ===
 808bb3e:	55                   	push   %ebp
 808bb3f:	89 e5                	mov    %esp,%ebp
 808bb41:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb44:	0f b6 80 30 75 00 00 	movzbl 0x7530(%eax),%eax
 808bb4b:	5d                   	pop    %ebp
 808bb4c:	c3                   	ret
 808bb4d:	90                   	nop

```

```c
// WongWork::CQuestClear::checkSaveFlag @ 0x808bb3e

/* WongWork::CQuestClear::checkSaveFlag() const */

CQuestClear __thiscall WongWork::CQuestClear::checkSaveFlag(CQuestClear *this)

{
  return this[30000];
}

```

---

## clear

```asm
// === 0808bb06 WongWork::CQuestClear::clear  [0x0808bb06-0x808bb33] ===
 808bb06:	55                   	push   %ebp
 808bb07:	89 e5                	mov    %esp,%ebp
 808bb09:	83 ec 18             	sub    $0x18,%esp
 808bb0c:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb0f:	c7 44 24 08 30 75 00 	movl   $0x7530,0x8(%esp)
 808bb16:	00 
 808bb17:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808bb1e:	00 
 808bb1f:	89 04 24             	mov    %eax,(%esp)
 808bb22:	e8 99 21 ff ff       	call   807dcc0 <memset@plt>
 808bb27:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb2a:	c6 80 30 75 00 00 00 	movb   $0x0,0x7530(%eax)
 808bb31:	c9                   	leave
 808bb32:	c3                   	ret
 808bb33:	90                   	nop

```

```c
// WongWork::CQuestClear::clear @ 0x808bb06

/* WongWork::CQuestClear::clear() */

void __thiscall WongWork::CQuestClear::clear(CQuestClear *this)

{
  memset(this,0,30000);
  this[30000] = (CQuestClear)0x0;
  return;
}

```

---

## enumQuestClear

```asm
// === 0808bb88 WongWork::CQuestClear::enumQuestClear  [0x0808bb88-0x808bbc3] ===
 808bb88:	55                   	push   %ebp
 808bb89:	89 e5                	mov    %esp,%ebp
 808bb8b:	83 ec 28             	sub    $0x28,%esp
 808bb8e:	8d 45 10             	lea    0x10(%ebp),%eax
 808bb91:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808bb94:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 808bb9b:	eb 16                	jmp    808bbb3 <_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz+0x2b>
 808bb9d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 808bba0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808bba3:	89 54 24 04          	mov    %edx,0x4(%esp)
 808bba7:	89 04 24             	mov    %eax,(%esp)
 808bbaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 808bbad:	ff d0                	call   *%eax
 808bbaf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 808bbb3:	81 7d f4 2f 75 00 00 	cmpl   $0x752f,-0xc(%ebp)
 808bbba:	0f 9e c0             	setle  %al
 808bbbd:	84 c0                	test   %al,%al
 808bbbf:	75 dc                	jne    808bb9d <_ZNK8WongWork11CQuestClear14enumQuestClearEPFbjPcEz+0x15>
 808bbc1:	c9                   	leave
 808bbc2:	c3                   	ret
 808bbc3:	90                   	nop

```

```c
// WongWork::CQuestClear::enumQuestClear @ 0x808bb88

/* WongWork::CQuestClear::enumQuestClear(bool (*)(unsigned int, char*), ...) const */

void __thiscall
WongWork::CQuestClear::enumQuestClear(CQuestClear *this,_func_bool_uint_char_ptr *param_1,...)

{
  uint local_10;
  
  for (local_10 = 1; (int)local_10 < 30000; local_10 = local_10 + 1) {
    (*param_1)(local_10,&stack0x0000000c);
  }
  return;
}

```

---

## getClearedQuest

```asm
// === 0808bb80 WongWork::CQuestClear::getClearedQuest  [0x0808bb80-0x808bb87] ===
 808bb80:	55                   	push   %ebp
 808bb81:	89 e5                	mov    %esp,%ebp
 808bb83:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb86:	5d                   	pop    %ebp
 808bb87:	c3                   	ret

```

```c
// WongWork::CQuestClear::getClearedQuest @ 0x808bb80

/* WongWork::CQuestClear::getClearedQuest() const */

CQuestClear * __thiscall WongWork::CQuestClear::getClearedQuest(CQuestClear *this)

{
  return this;
}

```

---

## getClearedQuestNum

```asm
// === 0808bbc4 WongWork::CQuestClear::getClearedQuestNum  [0x0808bbc4-0x808bc02] ===
 808bbc4:	55                   	push   %ebp
 808bbc5:	89 e5                	mov    %esp,%ebp
 808bbc7:	83 ec 10             	sub    $0x10,%esp
 808bbca:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 808bbd1:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 808bbd8:	eb 16                	jmp    808bbf0 <_ZNK8WongWork11CQuestClear18getClearedQuestNumEv+0x2c>
 808bbda:	8b 45 fc             	mov    -0x4(%ebp),%eax
 808bbdd:	8b 55 08             	mov    0x8(%ebp),%edx
 808bbe0:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 808bbe4:	84 c0                	test   %al,%al
 808bbe6:	74 04                	je     808bbec <_ZNK8WongWork11CQuestClear18getClearedQuestNumEv+0x28>
 808bbe8:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 808bbec:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 808bbf0:	81 7d fc 2f 75 00 00 	cmpl   $0x752f,-0x4(%ebp)
 808bbf7:	0f 9e c0             	setle  %al
 808bbfa:	84 c0                	test   %al,%al
 808bbfc:	75 dc                	jne    808bbda <_ZNK8WongWork11CQuestClear18getClearedQuestNumEv+0x16>
 808bbfe:	8b 45 f8             	mov    -0x8(%ebp),%eax
 808bc01:	c9                   	leave
 808bc02:	c3                   	ret

```

```c
// WongWork::CQuestClear::getClearedQuestNum @ 0x808bbc4

/* WongWork::CQuestClear::getClearedQuestNum() const */

int __thiscall WongWork::CQuestClear::getClearedQuestNum(CQuestClear *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 1; local_8 < 30000; local_8 = local_8 + 1) {
    if (this[local_8] != (CQuestClear)0x0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}

```

---

## isClearedQuest

```asm
// === 0808bae0 WongWork::CQuestClear::isClearedQuest  [0x0808bae0-0x808bb05] ===
 808bae0:	55                   	push   %ebp
 808bae1:	89 e5                	mov    %esp,%ebp
 808bae3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 808bae7:	74 09                	je     808baf2 <_ZNK8WongWork11CQuestClear14isClearedQuestEj+0x12>
 808bae9:	81 7d 0c 2f 75 00 00 	cmpl   $0x752f,0xc(%ebp)
 808baf0:	76 07                	jbe    808baf9 <_ZNK8WongWork11CQuestClear14isClearedQuestEj+0x19>
 808baf2:	b8 00 00 00 00       	mov    $0x0,%eax
 808baf7:	eb 0a                	jmp    808bb03 <_ZNK8WongWork11CQuestClear14isClearedQuestEj+0x23>
 808baf9:	8b 45 0c             	mov    0xc(%ebp),%eax
 808bafc:	8b 55 08             	mov    0x8(%ebp),%edx
 808baff:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 808bb03:	5d                   	pop    %ebp
 808bb04:	c3                   	ret
 808bb05:	90                   	nop

```

```c
// WongWork::CQuestClear::isClearedQuest @ 0x808bae0

/* WongWork::CQuestClear::isClearedQuest(unsigned int) const */

CQuestClear __thiscall WongWork::CQuestClear::isClearedQuest(CQuestClear *this,uint param_1)

{
  CQuestClear CVar1;
  
  if ((param_1 == 0) || (29999 < param_1)) {
    CVar1 = (CQuestClear)0x0;
  }
  else {
    CVar1 = this[param_1];
  }
  return CVar1;
}

```

---

## resetClearedQuests

```asm
// === 0808baac WongWork::CQuestClear::resetClearedQuests  [0x0808baac-0x808badf] ===
 808baac:	55                   	push   %ebp
 808baad:	89 e5                	mov    %esp,%ebp
 808baaf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 808bab3:	74 09                	je     808babe <_ZN8WongWork11CQuestClear18resetClearedQuestsEj+0x12>
 808bab5:	81 7d 0c 2f 75 00 00 	cmpl   $0x752f,0xc(%ebp)
 808babc:	76 07                	jbe    808bac5 <_ZN8WongWork11CQuestClear18resetClearedQuestsEj+0x19>
 808babe:	b8 00 00 00 00       	mov    $0x0,%eax
 808bac3:	eb 19                	jmp    808bade <_ZN8WongWork11CQuestClear18resetClearedQuestsEj+0x32>
 808bac5:	8b 45 08             	mov    0x8(%ebp),%eax
 808bac8:	c6 80 30 75 00 00 01 	movb   $0x1,0x7530(%eax)
 808bacf:	8b 45 0c             	mov    0xc(%ebp),%eax
 808bad2:	8b 55 08             	mov    0x8(%ebp),%edx
 808bad5:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 808bad9:	b8 01 00 00 00       	mov    $0x1,%eax
 808bade:	5d                   	pop    %ebp
 808badf:	c3                   	ret

```

```c
// WongWork::CQuestClear::resetClearedQuests @ 0x808baac

/* WongWork::CQuestClear::resetClearedQuests(unsigned int) */

undefined4 __thiscall WongWork::CQuestClear::resetClearedQuests(CQuestClear *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (29999 < param_1)) {
    uVar1 = 0;
  }
  else {
    this[30000] = (CQuestClear)0x1;
    this[param_1] = (CQuestClear)0x0;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## resetSaveFlags

```asm
// === 0808bb4e WongWork::CQuestClear::resetSaveFlags  [0x0808bb4e-0x808bb5d] ===
 808bb4e:	55                   	push   %ebp
 808bb4f:	89 e5                	mov    %esp,%ebp
 808bb51:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb54:	c6 80 30 75 00 00 00 	movb   $0x0,0x7530(%eax)
 808bb5b:	5d                   	pop    %ebp
 808bb5c:	c3                   	ret
 808bb5d:	90                   	nop

```

```c
// WongWork::CQuestClear::resetSaveFlags @ 0x808bb4e

/* WongWork::CQuestClear::resetSaveFlags() */

void __thiscall WongWork::CQuestClear::resetSaveFlags(CQuestClear *this)

{
  this[30000] = (CQuestClear)0x0;
  return;
}

```

---

## setClearedQuest

```asm
// === 0808ba78 WongWork::CQuestClear::setClearedQuest  [0x0808ba78-0x808baab] ===
 808ba78:	55                   	push   %ebp
 808ba79:	89 e5                	mov    %esp,%ebp
 808ba7b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 808ba7f:	74 09                	je     808ba8a <_ZN8WongWork11CQuestClear15setClearedQuestEj+0x12>
 808ba81:	81 7d 0c 2f 75 00 00 	cmpl   $0x752f,0xc(%ebp)
 808ba88:	76 07                	jbe    808ba91 <_ZN8WongWork11CQuestClear15setClearedQuestEj+0x19>
 808ba8a:	b8 00 00 00 00       	mov    $0x0,%eax
 808ba8f:	eb 19                	jmp    808baaa <_ZN8WongWork11CQuestClear15setClearedQuestEj+0x32>
 808ba91:	8b 45 08             	mov    0x8(%ebp),%eax
 808ba94:	c6 80 30 75 00 00 01 	movb   $0x1,0x7530(%eax)
 808ba9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 808ba9e:	8b 55 08             	mov    0x8(%ebp),%edx
 808baa1:	c6 04 02 01          	movb   $0x1,(%edx,%eax,1)
 808baa5:	b8 01 00 00 00       	mov    $0x1,%eax
 808baaa:	5d                   	pop    %ebp
 808baab:	c3                   	ret

```

```c
// WongWork::CQuestClear::setClearedQuest @ 0x808ba78

/* WongWork::CQuestClear::setClearedQuest(unsigned int) */

undefined4 __thiscall WongWork::CQuestClear::setClearedQuest(CQuestClear *this,uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) || (29999 < param_1)) {
    uVar1 = 0;
  }
  else {
    this[30000] = (CQuestClear)0x1;
    this[param_1] = (CQuestClear)0x1;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## setClearedQuest_0808bb5e

```asm
// === 0808bb5e WongWork::CQuestClear::setClearedQuest  [0x0808bb5e-0x808bb7f] ===
 808bb5e:	55                   	push   %ebp
 808bb5f:	89 e5                	mov    %esp,%ebp
 808bb61:	83 ec 18             	sub    $0x18,%esp
 808bb64:	8b 45 08             	mov    0x8(%ebp),%eax
 808bb67:	c7 44 24 08 30 75 00 	movl   $0x7530,0x8(%esp)
 808bb6e:	00 
 808bb6f:	8b 55 0c             	mov    0xc(%ebp),%edx
 808bb72:	89 54 24 04          	mov    %edx,0x4(%esp)
 808bb76:	89 04 24             	mov    %eax,(%esp)
 808bb79:	e8 22 1d ff ff       	call   807d8a0 <memcpy@plt>
 808bb7e:	c9                   	leave
 808bb7f:	c3                   	ret

```

```c
// WongWork::CQuestClear::setClearedQuest @ 0x808bb5e

/* WongWork::CQuestClear::setClearedQuest(WongWork::STClearedQuest const*) */

void __thiscall WongWork::CQuestClear::setClearedQuest(CQuestClear *this,STClearedQuest *param_1)

{
  memcpy(this,param_1,30000);
  return;
}

```

---

## syncScript

```asm
// === 0808bb34 WongWork::CQuestClear::syncScript  [0x0808bb34-0x808bb3d] ===
 808bb34:	55                   	push   %ebp
 808bb35:	89 e5                	mov    %esp,%ebp
 808bb37:	b8 01 00 00 00       	mov    $0x1,%eax
 808bb3c:	5d                   	pop    %ebp
 808bb3d:	c3                   	ret

```

```c
// WongWork::CQuestClear::syncScript @ 0x808bb34

/* WongWork::CQuestClear::syncScript() */

undefined4 WongWork::CQuestClear::syncScript(void)

{
  return 1;
}

```


# Event_Upgrade_Jar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CheckMaterialIndex

```asm
// === 080f4d20 Event_Upgrade_Jar::CheckMaterialIndex  [0x080f4d20-0x80f4dab] ===
 80f4d20:	55                   	push   %ebp
 80f4d21:	89 e5                	mov    %esp,%ebp
 80f4d23:	83 ec 28             	sub    $0x28,%esp
 80f4d26:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d29:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 80f4d30:	00 00 00 
 80f4d33:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d36:	c6 80 88 00 00 00 00 	movb   $0x0,0x88(%eax)
 80f4d3d:	81 7d 0c 7b be 28 00 	cmpl   $0x28be7b,0xc(%ebp)
 80f4d44:	75 0f                	jne    80f4d55 <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x35>
 80f4d46:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d49:	c7 80 84 00 00 00 02 	movl   $0x2,0x84(%eax)
 80f4d50:	00 00 00 
 80f4d53:	eb 55                	jmp    80f4daa <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x8a>
 80f4d55:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f4d5c:	eb 34                	jmp    80f4d92 <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x72>
 80f4d5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f4d61:	8b 55 08             	mov    0x8(%ebp),%edx
 80f4d64:	83 c2 34             	add    $0x34,%edx
 80f4d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4d6b:	89 14 24             	mov    %edx,(%esp)
 80f4d6e:	e8 11 09 00 00       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 80f4d73:	8b 00                	mov    (%eax),%eax
 80f4d75:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80f4d78:	0f 94 c0             	sete   %al
 80f4d7b:	84 c0                	test   %al,%al
 80f4d7d:	74 0f                	je     80f4d8e <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x6e>
 80f4d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d82:	c7 80 84 00 00 00 01 	movl   $0x1,0x84(%eax)
 80f4d89:	00 00 00 
 80f4d8c:	eb 1c                	jmp    80f4daa <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x8a>
 80f4d8e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f4d92:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d95:	83 c0 34             	add    $0x34,%eax
 80f4d98:	89 04 24             	mov    %eax,(%esp)
 80f4d9b:	e8 64 08 00 00       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 80f4da0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80f4da3:	0f 9f c0             	setg   %al
 80f4da6:	84 c0                	test   %al,%al
 80f4da8:	75 b4                	jne    80f4d5e <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm+0x3e>
 80f4daa:	c9                   	leave
 80f4dab:	c3                   	ret

```

```c
// Event_Upgrade_Jar::CheckMaterialIndex @ 0x80f4d20

/* Event_Upgrade_Jar::CheckMaterialIndex(unsigned long) */

void __thiscall Event_Upgrade_Jar::CheckMaterialIndex(Event_Upgrade_Jar *this,ulong param_1)

{
  ulong *puVar1;
  int iVar2;
  uint local_10;
  
  *(undefined4 *)(this + 0x84) = 0;
  this[0x88] = (Event_Upgrade_Jar)0x0;
  if (param_1 == 0x28be7b) {
    *(undefined4 *)(this + 0x84) = 2;
  }
  else {
    for (local_10 = 0;
        iVar2 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                          ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34)),
        (int)local_10 < iVar2; local_10 = local_10 + 1) {
      puVar1 = (ulong *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                  ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                   (this + 0x34),local_10);
      if (*puVar1 == param_1) {
        *(undefined4 *)(this + 0x84) = 1;
        return;
      }
    }
  }
  return;
}

```

---

## CheckMaxLuckyLevel

```asm
// === 080f4f62 Event_Upgrade_Jar::CheckMaxLuckyLevel  [0x080f4f62-0x80f4fcf] ===
 80f4f62:	55                   	push   %ebp
 80f4f63:	89 e5                	mov    %esp,%ebp
 80f4f65:	83 ec 18             	sub    $0x18,%esp
 80f4f68:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f6b:	83 c0 34             	add    $0x34,%eax
 80f4f6e:	89 04 24             	mov    %eax,(%esp)
 80f4f71:	e8 8e 06 00 00       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 80f4f76:	83 f8 01             	cmp    $0x1,%eax
 80f4f79:	0f 97 c0             	seta   %al
 80f4f7c:	84 c0                	test   %al,%al
 80f4f7e:	74 49                	je     80f4fc9 <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm+0x67>
 80f4f80:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f83:	83 c0 34             	add    $0x34,%eax
 80f4f86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f4f8d:	00 
 80f4f8e:	89 04 24             	mov    %eax,(%esp)
 80f4f91:	e8 ee 06 00 00       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 80f4f96:	8b 00                	mov    (%eax),%eax
 80f4f98:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f4f9b:	0f 94 c0             	sete   %al
 80f4f9e:	84 c0                	test   %al,%al
 80f4fa0:	74 27                	je     80f4fc9 <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm+0x67>
 80f4fa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4fa5:	89 04 24             	mov    %eax,(%esp)
 80f4fa8:	e8 bf 00 00 00       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 80f4fad:	0f b6 d0             	movzbl %al,%edx
 80f4fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4fb3:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 80f4fb9:	39 c2                	cmp    %eax,%edx
 80f4fbb:	0f 93 c0             	setae  %al
 80f4fbe:	84 c0                	test   %al,%al
 80f4fc0:	74 07                	je     80f4fc9 <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm+0x67>
 80f4fc2:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4fc7:	eb 05                	jmp    80f4fce <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm+0x6c>
 80f4fc9:	b8 01 00 00 00       	mov    $0x1,%eax
 80f4fce:	c9                   	leave
 80f4fcf:	c3                   	ret

```

```c
// Event_Upgrade_Jar::CheckMaxLuckyLevel @ 0x80f4f62

/* Event_Upgrade_Jar::CheckMaxLuckyLevel(Inven_Item&, unsigned long) */

undefined4 __thiscall
Event_Upgrade_Jar::CheckMaxLuckyLevel(Event_Upgrade_Jar *this,Inven_Item *param_1,ulong param_2)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                    ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
  if (((1 < uVar1) &&
      (puVar2 = (ulong *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                   ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                    (this + 0x34),1), *puVar2 == param_2)) &&
     (uVar1 = Inven_Item::GetUpgrade(param_1), *(uint *)(this + 0x80) <= (uVar1 & 0xff))) {
    return 0;
  }
  return 1;
}

```

---

## Event_Upgrade_Jar

```asm
// === 080f49b8 Event_Upgrade_Jar::Event_Upgrade_Jar  [0x080f49b8-0x80f49cb] ===
 80f49b8:	55                   	push   %ebp
 80f49b9:	89 e5                	mov    %esp,%ebp
 80f49bb:	83 ec 18             	sub    $0x18,%esp
 80f49be:	8b 45 08             	mov    0x8(%ebp),%eax
 80f49c1:	89 04 24             	mov    %eax,(%esp)
 80f49c4:	e8 db 06 00 00       	call   80f50a4 <_ZN19EventUpgradeJarInfoC1Ev>
 80f49c9:	c9                   	leave
 80f49ca:	c3                   	ret
 80f49cb:	90                   	nop

```

```c
// Event_Upgrade_Jar::Event_Upgrade_Jar @ 0x80f49b8

/* Event_Upgrade_Jar::Event_Upgrade_Jar() */

void __thiscall Event_Upgrade_Jar::Event_Upgrade_Jar(Event_Upgrade_Jar *this)

{
  EventUpgradeJarInfo::EventUpgradeJarInfo((EventUpgradeJarInfo *)this);
  return;
}

```

---

## GetIndexLuckyStrengtheningDeed

```asm
// === 080f4fd0 Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed  [0x080f4fd0-0x80f500e] ===
 80f4fd0:	55                   	push   %ebp
 80f4fd1:	89 e5                	mov    %esp,%ebp
 80f4fd3:	83 ec 18             	sub    $0x18,%esp
 80f4fd6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4fd9:	83 c0 34             	add    $0x34,%eax
 80f4fdc:	89 04 24             	mov    %eax,(%esp)
 80f4fdf:	e8 20 06 00 00       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 80f4fe4:	83 f8 01             	cmp    $0x1,%eax
 80f4fe7:	0f 97 c0             	seta   %al
 80f4fea:	84 c0                	test   %al,%al
 80f4fec:	74 1a                	je     80f5008 <_ZN17Event_Upgrade_Jar30GetIndexLuckyStrengtheningDeedEv+0x38>
 80f4fee:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4ff1:	83 c0 34             	add    $0x34,%eax
 80f4ff4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f4ffb:	00 
 80f4ffc:	89 04 24             	mov    %eax,(%esp)
 80f4fff:	e8 80 06 00 00       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 80f5004:	8b 00                	mov    (%eax),%eax
 80f5006:	eb 05                	jmp    80f500d <_ZN17Event_Upgrade_Jar30GetIndexLuckyStrengtheningDeedEv+0x3d>
 80f5008:	b8 00 00 00 00       	mov    $0x0,%eax
 80f500d:	c9                   	leave
 80f500e:	c3                   	ret

```

```c
// Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed @ 0x80f4fd0

/* Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed() */

undefined4 __thiscall Event_Upgrade_Jar::GetIndexLuckyStrengtheningDeed(Event_Upgrade_Jar *this)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                    ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
  if (uVar1 < 2) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)
             std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                       ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),1);
    uVar3 = *puVar2;
  }
  return uVar3;
}

```

---

## GetProbability

```asm
// === 080f4ee2 Event_Upgrade_Jar::GetProbability  [0x080f4ee2-0x80f4f61] ===
 80f4ee2:	55                   	push   %ebp
 80f4ee3:	89 e5                	mov    %esp,%ebp
 80f4ee5:	83 ec 18             	sub    $0x18,%esp
 80f4ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4eeb:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4ef1:	85 c0                	test   %eax,%eax
 80f4ef3:	74 69                	je     80f4f5e <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj+0x7c>
 80f4ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4ef8:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4efe:	83 f8 01             	cmp    $0x1,%eax
 80f4f01:	75 2a                	jne    80f4f2d <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj+0x4b>
 80f4f03:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f06:	0f b6 80 88 00 00 00 	movzbl 0x88(%eax),%eax
 80f4f0d:	0f b6 c0             	movzbl %al,%eax
 80f4f10:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f4f14:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4f17:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f1e:	89 04 24             	mov    %eax,(%esp)
 80f4f21:	e8 ba fc ff ff       	call   80f4be0 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij>
 80f4f26:	8b 55 10             	mov    0x10(%ebp),%edx
 80f4f29:	89 02                	mov    %eax,(%edx)
 80f4f2b:	eb 32                	jmp    80f4f5f <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj+0x7d>
 80f4f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f30:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4f36:	83 f8 02             	cmp    $0x2,%eax
 80f4f39:	75 24                	jne    80f4f5f <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj+0x7d>
 80f4f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f3e:	0f b6 80 88 00 00 00 	movzbl 0x88(%eax),%eax
 80f4f45:	0f b6 c0             	movzbl %al,%eax
 80f4f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4f4f:	89 04 24             	mov    %eax,(%esp)
 80f4f52:	e8 37 fd ff ff       	call   80f4c8e <_ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj>
 80f4f57:	8b 55 10             	mov    0x10(%ebp),%edx
 80f4f5a:	89 02                	mov    %eax,(%edx)
 80f4f5c:	eb 01                	jmp    80f4f5f <_ZNK17Event_Upgrade_Jar14GetProbabilityEiRj+0x7d>
 80f4f5e:	90                   	nop
 80f4f5f:	c9                   	leave
 80f4f60:	c3                   	ret
 80f4f61:	90                   	nop

```

```c
// Event_Upgrade_Jar::GetProbability @ 0x80f4ee2

/* Event_Upgrade_Jar::GetProbability(int, unsigned int&) const */

void __thiscall Event_Upgrade_Jar::GetProbability(Event_Upgrade_Jar *this,int param_1,uint *param_2)

{
  uint uVar1;
  
  if (*(int *)(this + 0x84) != 0) {
    if (*(int *)(this + 0x84) == 1) {
      uVar1 = _getFailProb_Fortune(this,param_1,(uint)(byte)this[0x88]);
      *param_2 = uVar1;
    }
    else if (*(int *)(this + 0x84) == 2) {
      uVar1 = _getFailProb_NewNPC(this,(uint)(byte)this[0x88]);
      *param_2 = uVar1;
    }
  }
  return;
}

```

---

## LoadScript

```asm
// === 080f49e0 Event_Upgrade_Jar::LoadScript  [0x080f49e0-0x80f4a09] ===
 80f49e0:	55                   	push   %ebp
 80f49e1:	89 e5                	mov    %esp,%ebp
 80f49e3:	83 ec 18             	sub    $0x18,%esp
 80f49e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f49e9:	8b 55 10             	mov    0x10(%ebp),%edx
 80f49ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f49f0:	89 04 24             	mov    %eax,(%esp)
 80f49f3:	e8 d9 3d 87 00       	call   89687d1 <_Z27importEventUpgradeJarScriptP19EventUpgradeJarInfoPKc>
 80f49f8:	84 c0                	test   %al,%al
 80f49fa:	74 07                	je     80f4a03 <_ZN17Event_Upgrade_Jar10LoadScriptEPKcS1_+0x23>
 80f49fc:	b8 01 00 00 00       	mov    $0x1,%eax
 80f4a01:	eb 05                	jmp    80f4a08 <_ZN17Event_Upgrade_Jar10LoadScriptEPKcS1_+0x28>
 80f4a03:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4a08:	c9                   	leave
 80f4a09:	c3                   	ret

```

```c
// Event_Upgrade_Jar::LoadScript @ 0x80f49e0

/* Event_Upgrade_Jar::LoadScript(char const*, char const*) */

bool __thiscall Event_Upgrade_Jar::LoadScript(Event_Upgrade_Jar *this,char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = importEventUpgradeJarScript((EventUpgradeJarInfo *)this,param_2);
  return cVar1 != '\0';
}

```

---

## SettingRecipeNUpConunt

```asm
// === 080f4dac Event_Upgrade_Jar::SettingRecipeNUpConunt  [0x080f4dac-0x80f4ee1] ===
 80f4dac:	55                   	push   %ebp
 80f4dad:	89 e5                	mov    %esp,%ebp
 80f4daf:	53                   	push   %ebx
 80f4db0:	83 ec 34             	sub    $0x34,%esp
 80f4db3:	8b 45 14             	mov    0x14(%ebp),%eax
 80f4db6:	88 45 e4             	mov    %al,-0x1c(%ebp)
 80f4db9:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4dbc:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4dc2:	85 c0                	test   %eax,%eax
 80f4dc4:	0f 84 11 01 00 00    	je     80f4edb <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x12f>
 80f4dca:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4dcd:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4dd3:	83 f8 01             	cmp    $0x1,%eax
 80f4dd6:	0f 85 83 00 00 00    	jne    80f4e5f <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0xb3>
 80f4ddc:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4ddf:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 80f4de6:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4de9:	c7 40 30 01 00 00 00 	movl   $0x1,0x30(%eax)
 80f4df0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f4df7:	eb 4c                	jmp    80f4e45 <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x99>
 80f4df9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80f4dfc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f4dff:	8b 55 08             	mov    0x8(%ebp),%edx
 80f4e02:	83 c2 34             	add    $0x34,%edx
 80f4e05:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4e09:	89 14 24             	mov    %edx,(%esp)
 80f4e0c:	e8 73 08 00 00       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 80f4e11:	8b 00                	mov    (%eax),%eax
 80f4e13:	39 c3                	cmp    %eax,%ebx
 80f4e15:	0f 94 c0             	sete   %al
 80f4e18:	84 c0                	test   %al,%al
 80f4e1a:	74 25                	je     80f4e41 <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x95>
 80f4e1c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f4e1f:	8b 55 08             	mov    0x8(%ebp),%edx
 80f4e22:	83 c2 34             	add    $0x34,%edx
 80f4e25:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4e29:	89 14 24             	mov    %edx,(%esp)
 80f4e2c:	e8 53 08 00 00       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 80f4e31:	8b 00                	mov    (%eax),%eax
 80f4e33:	89 c2                	mov    %eax,%edx
 80f4e35:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4e38:	89 50 2c             	mov    %edx,0x2c(%eax)
 80f4e3b:	90                   	nop
 80f4e3c:	e9 8b 00 00 00       	jmp    80f4ecc <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x120>
 80f4e41:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f4e45:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4e48:	83 c0 34             	add    $0x34,%eax
 80f4e4b:	89 04 24             	mov    %eax,(%esp)
 80f4e4e:	e8 b1 07 00 00       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 80f4e53:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80f4e56:	0f 9f c0             	setg   %al
 80f4e59:	84 c0                	test   %al,%al
 80f4e5b:	75 9c                	jne    80f4df9 <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x4d>
 80f4e5d:	eb 6d                	jmp    80f4ecc <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x120>
 80f4e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4e62:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 80f4e68:	83 f8 02             	cmp    $0x2,%eax
 80f4e6b:	75 5f                	jne    80f4ecc <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x120>
 80f4e6d:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4e70:	8b 40 34             	mov    0x34(%eax),%eax
 80f4e73:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80f4e76:	db 45 e0             	fildl  -0x20(%ebp)
 80f4e79:	d9 5d d8             	fstps  -0x28(%ebp)
 80f4e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4e7f:	89 04 24             	mov    %eax,(%esp)
 80f4e82:	e8 85 fe ff ff       	call   80f4d0c <_ZNK17Event_Upgrade_Jar23_getDiscountRate_NewNPCEv>
 80f4e87:	d8 4d d8             	fmuls  -0x28(%ebp)
 80f4e8a:	d9 7d de             	fnstcw -0x22(%ebp)
 80f4e8d:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 80f4e91:	b4 0c                	mov    $0xc,%ah
 80f4e93:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 80f4e97:	d9 6d dc             	fldcw  -0x24(%ebp)
 80f4e9a:	db 5d e0             	fistpl -0x20(%ebp)
 80f4e9d:	d9 6d de             	fldcw  -0x22(%ebp)
 80f4ea0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 80f4ea3:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4ea6:	89 50 34             	mov    %edx,0x34(%eax)
 80f4ea9:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 80f4ead:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4eb1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4eb4:	89 04 24             	mov    %eax,(%esp)
 80f4eb7:	e8 10 fe ff ff       	call   80f4ccc <_ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj>
 80f4ebc:	8b 55 10             	mov    0x10(%ebp),%edx
 80f4ebf:	89 42 30             	mov    %eax,0x30(%edx)
 80f4ec2:	8b 45 10             	mov    0x10(%ebp),%eax
 80f4ec5:	c7 40 2c 7b be 28 00 	movl   $0x28be7b,0x2c(%eax)
 80f4ecc:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4ecf:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 80f4ed3:	88 90 88 00 00 00    	mov    %dl,0x88(%eax)
 80f4ed9:	eb 01                	jmp    80f4edc <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th+0x130>
 80f4edb:	90                   	nop
 80f4edc:	83 c4 34             	add    $0x34,%esp
 80f4edf:	5b                   	pop    %ebx
 80f4ee0:	5d                   	pop    %ebp
 80f4ee1:	c3                   	ret

```

```c
// Event_Upgrade_Jar::SettingRecipeNUpConunt @ 0x80f4dac

/* Event_Upgrade_Jar::SettingRecipeNUpConunt(int, upgrade_info_t&, unsigned char) */

void __thiscall
Event_Upgrade_Jar::SettingRecipeNUpConunt
          (Event_Upgrade_Jar *this,int param_1,upgrade_info_t *param_2,uchar param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  longdouble lVar5;
  uint local_10;
  
  if (*(int *)(this + 0x84) != 0) {
    if (*(int *)(this + 0x84) == 1) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined4 *)(param_2 + 0x30) = 1;
      for (local_10 = 0;
          iVar3 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                            ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34)),
          (int)local_10 < iVar3; local_10 = local_10 + 1) {
        piVar1 = (int *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                                  ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                                   (this + 0x34),local_10);
        if (param_1 == *piVar1) {
          puVar2 = (undefined4 *)
                   std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                             ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),
                              local_10);
          *(undefined4 *)(param_2 + 0x2c) = *puVar2;
          break;
        }
      }
    }
    else if (*(int *)(this + 0x84) == 2) {
      iVar3 = *(int *)(param_2 + 0x34);
      lVar5 = (longdouble)_getDiscountRate_NewNPC(this);
      *(int *)(param_2 + 0x34) = (int)ROUND(lVar5 * (longdouble)iVar3);
      uVar4 = _getMeterialCount_NewNPC(this,(uint)param_3);
      *(undefined4 *)(param_2 + 0x30) = uVar4;
      *(undefined4 *)(param_2 + 0x2c) = 0x28be7b;
    }
    this[0x88] = (Event_Upgrade_Jar)param_3;
  }
  return;
}

```

---

## _getDiscountRate_NewNPC

```asm
// === 080f4d0c Event_Upgrade_Jar::_getDiscountRate_NewNPC  [0x080f4d0c-0x80f4d1f] ===
 80f4d0c:	55                   	push   %ebp
 80f4d0d:	89 e5                	mov    %esp,%ebp
 80f4d0f:	83 ec 04             	sub    $0x4,%esp
 80f4d12:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4d15:	8b 40 70             	mov    0x70(%eax),%eax
 80f4d18:	89 45 fc             	mov    %eax,-0x4(%ebp)
 80f4d1b:	d9 45 fc             	flds   -0x4(%ebp)
 80f4d1e:	c9                   	leave
 80f4d1f:	c3                   	ret

```

```c
// Event_Upgrade_Jar::_getDiscountRate_NewNPC @ 0x80f4d0c

/* Event_Upgrade_Jar::_getDiscountRate_NewNPC() const */

longdouble __thiscall Event_Upgrade_Jar::_getDiscountRate_NewNPC(Event_Upgrade_Jar *this)

{
  return (longdouble)*(float *)(this + 0x70);
}

```

---

## _getFailProb_Fortune

```asm
// === 080f4be0 Event_Upgrade_Jar::_getFailProb_Fortune  [0x080f4be0-0x80f4c8d] ===
 80f4be0:	55                   	push   %ebp
 80f4be1:	89 e5                	mov    %esp,%ebp
 80f4be3:	53                   	push   %ebx
 80f4be4:	83 ec 24             	sub    $0x24,%esp
 80f4be7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f4bee:	eb 77                	jmp    80f4c67 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0x87>
 80f4bf0:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 80f4bf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f4bf6:	8b 55 08             	mov    0x8(%ebp),%edx
 80f4bf9:	83 c2 34             	add    $0x34,%edx
 80f4bfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4c00:	89 14 24             	mov    %edx,(%esp)
 80f4c03:	e8 18 0a 00 00       	call   80f5620 <_ZNKSt6vectorImSaImEEixEj>
 80f4c08:	8b 00                	mov    (%eax),%eax
 80f4c0a:	39 c3                	cmp    %eax,%ebx
 80f4c0c:	0f 94 c0             	sete   %al
 80f4c0f:	84 c0                	test   %al,%al
 80f4c11:	74 50                	je     80f4c63 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0x83>
 80f4c13:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f4c16:	89 d0                	mov    %edx,%eax
 80f4c18:	01 c0                	add    %eax,%eax
 80f4c1a:	01 d0                	add    %edx,%eax
 80f4c1c:	c1 e0 02             	shl    $0x2,%eax
 80f4c1f:	83 c0 40             	add    $0x40,%eax
 80f4c22:	03 45 08             	add    0x8(%ebp),%eax
 80f4c25:	89 04 24             	mov    %eax,(%esp)
 80f4c28:	e8 35 d8 fe ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 80f4c2d:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f4c30:	0f 96 c0             	setbe  %al
 80f4c33:	84 c0                	test   %al,%al
 80f4c35:	74 07                	je     80f4c3e <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0x5e>
 80f4c37:	b8 a0 86 01 00       	mov    $0x186a0,%eax
 80f4c3c:	eb 4a                	jmp    80f4c88 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0xa8>
 80f4c3e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f4c41:	89 d0                	mov    %edx,%eax
 80f4c43:	01 c0                	add    %eax,%eax
 80f4c45:	01 d0                	add    %edx,%eax
 80f4c47:	c1 e0 02             	shl    $0x2,%eax
 80f4c4a:	83 c0 40             	add    $0x40,%eax
 80f4c4d:	03 45 08             	add    0x8(%ebp),%eax
 80f4c50:	8b 55 10             	mov    0x10(%ebp),%edx
 80f4c53:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f4c57:	89 04 24             	mov    %eax,(%esp)
 80f4c5a:	e8 d3 09 00 00       	call   80f5632 <_ZNKSt6vectorIjSaIjEEixEj>
 80f4c5f:	8b 00                	mov    (%eax),%eax
 80f4c61:	eb 25                	jmp    80f4c88 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0xa8>
 80f4c63:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80f4c67:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4c6a:	83 c0 34             	add    $0x34,%eax
 80f4c6d:	89 04 24             	mov    %eax,(%esp)
 80f4c70:	e8 8f 09 00 00       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 80f4c75:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80f4c78:	0f 9f c0             	setg   %al
 80f4c7b:	84 c0                	test   %al,%al
 80f4c7d:	0f 85 6d ff ff ff    	jne    80f4bf0 <_ZNK17Event_Upgrade_Jar20_getFailProb_FortuneEij+0x10>
 80f4c83:	b8 a0 86 01 00       	mov    $0x186a0,%eax
 80f4c88:	83 c4 24             	add    $0x24,%esp
 80f4c8b:	5b                   	pop    %ebx
 80f4c8c:	5d                   	pop    %ebp
 80f4c8d:	c3                   	ret

```

```c
// Event_Upgrade_Jar::_getFailProb_Fortune @ 0x80f4be0

/* Event_Upgrade_Jar::_getFailProb_Fortune(int, unsigned int) const */

undefined4 __thiscall
Event_Upgrade_Jar::_getFailProb_Fortune(Event_Upgrade_Jar *this,int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size
                      ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34));
    if (iVar4 <= (int)local_10) {
      return 100000;
    }
    piVar1 = (int *)std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                              ((vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x34),
                               local_10);
    if (param_1 == *piVar1) break;
    local_10 = local_10 + 1;
  }
  uVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size
                    ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                     (this + local_10 * 0xc + 0x40));
  if (uVar2 <= param_2) {
    return 100000;
  }
  puVar3 = (undefined4 *)
           std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                     ((vector<unsigned_int,std::allocator<unsigned_int>> *)
                      (this + local_10 * 0xc + 0x40),param_2);
  return *puVar3;
}

```

---

## _getFailProb_NewNPC

```asm
// === 080f4c8e Event_Upgrade_Jar::_getFailProb_NewNPC  [0x080f4c8e-0x80f4ccb] ===
 80f4c8e:	55                   	push   %ebp
 80f4c8f:	89 e5                	mov    %esp,%ebp
 80f4c91:	83 ec 18             	sub    $0x18,%esp
 80f4c94:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4c97:	83 c0 74             	add    $0x74,%eax
 80f4c9a:	89 04 24             	mov    %eax,(%esp)
 80f4c9d:	e8 a2 09 00 00       	call   80f5644 <_ZNKSt6vectorI37ST_Event_Upgrade_Jar_EventNPCs_ScriptSaIS0_EE4sizeEv>
 80f4ca2:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80f4ca5:	0f 96 c0             	setbe  %al
 80f4ca8:	84 c0                	test   %al,%al
 80f4caa:	74 07                	je     80f4cb3 <_ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj+0x25>
 80f4cac:	b8 a0 86 01 00       	mov    $0x186a0,%eax
 80f4cb1:	eb 17                	jmp    80f4cca <_ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj+0x3c>
 80f4cb3:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4cb6:	8d 50 74             	lea    0x74(%eax),%edx
 80f4cb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4cbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4cc0:	89 14 24             	mov    %edx,(%esp)
 80f4cc3:	e8 98 09 00 00       	call   80f5660 <_ZNKSt6vectorI37ST_Event_Upgrade_Jar_EventNPCs_ScriptSaIS0_EEixEj>
 80f4cc8:	8b 00                	mov    (%eax),%eax
 80f4cca:	c9                   	leave
 80f4ccb:	c3                   	ret

```

```c
// Event_Upgrade_Jar::_getFailProb_NewNPC @ 0x80f4c8e

/* Event_Upgrade_Jar::_getFailProb_NewNPC(unsigned int) const */

undefined4 __thiscall Event_Upgrade_Jar::_getFailProb_NewNPC(Event_Upgrade_Jar *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::
          vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
          ::size((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                  *)(this + 0x74));
  if (param_1 < uVar1) {
    puVar3 = (undefined4 *)
             std::
             vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
             ::operator[]((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                           *)(this + 0x74),param_1);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 100000;
  }
  return uVar2;
}

```

---

## _getMeterialCount_NewNPC

```asm
// === 080f4ccc Event_Upgrade_Jar::_getMeterialCount_NewNPC  [0x080f4ccc-0x80f4d0b] ===
 80f4ccc:	55                   	push   %ebp
 80f4ccd:	89 e5                	mov    %esp,%ebp
 80f4ccf:	83 ec 18             	sub    $0x18,%esp
 80f4cd2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4cd5:	83 c0 74             	add    $0x74,%eax
 80f4cd8:	89 04 24             	mov    %eax,(%esp)
 80f4cdb:	e8 64 09 00 00       	call   80f5644 <_ZNKSt6vectorI37ST_Event_Upgrade_Jar_EventNPCs_ScriptSaIS0_EE4sizeEv>
 80f4ce0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80f4ce3:	0f 96 c0             	setbe  %al
 80f4ce6:	84 c0                	test   %al,%al
 80f4ce8:	74 07                	je     80f4cf1 <_ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj+0x25>
 80f4cea:	b8 40 42 0f 00       	mov    $0xf4240,%eax
 80f4cef:	eb 18                	jmp    80f4d09 <_ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj+0x3d>
 80f4cf1:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4cf4:	8d 50 74             	lea    0x74(%eax),%edx
 80f4cf7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4cfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4cfe:	89 14 24             	mov    %edx,(%esp)
 80f4d01:	e8 6c 09 00 00       	call   80f5672 <_ZNSt6vectorI37ST_Event_Upgrade_Jar_EventNPCs_ScriptSaIS0_EEixEj>
 80f4d06:	8b 40 04             	mov    0x4(%eax),%eax
 80f4d09:	c9                   	leave
 80f4d0a:	c3                   	ret
 80f4d0b:	90                   	nop

```

```c
// Event_Upgrade_Jar::_getMeterialCount_NewNPC @ 0x80f4ccc

/* Event_Upgrade_Jar::_getMeterialCount_NewNPC(unsigned int) */

undefined4 __thiscall
Event_Upgrade_Jar::_getMeterialCount_NewNPC(Event_Upgrade_Jar *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = std::
          vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
          ::size((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                  *)(this + 0x74));
  if (param_1 < uVar1) {
    iVar3 = std::
            vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
            ::operator[]((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                          *)(this + 0x74),param_1);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 1000000;
  }
  return uVar2;
}

```

---

## check_requiredRecipe

```asm
// === 080f4bb0 Event_Upgrade_Jar::check_requiredRecipe  [0x080f4bb0-0x80f4bdf] ===
 80f4bb0:	55                   	push   %ebp
 80f4bb1:	89 e5                	mov    %esp,%ebp
 80f4bb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4bb6:	8b 40 02             	mov    0x2(%eax),%eax
 80f4bb9:	3d 7d be 28 00       	cmp    $0x28be7d,%eax
 80f4bbe:	74 07                	je     80f4bc7 <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item+0x17>
 80f4bc0:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4bc5:	eb 16                	jmp    80f4bdd <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item+0x2d>
 80f4bc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f4bca:	8b 40 07             	mov    0x7(%eax),%eax
 80f4bcd:	85 c0                	test   %eax,%eax
 80f4bcf:	7f 07                	jg     80f4bd8 <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item+0x28>
 80f4bd1:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4bd6:	eb 05                	jmp    80f4bdd <_ZNK17Event_Upgrade_Jar20check_requiredRecipeERK10Inven_Item+0x2d>
 80f4bd8:	b8 01 00 00 00       	mov    $0x1,%eax
 80f4bdd:	5d                   	pop    %ebp
 80f4bde:	c3                   	ret
 80f4bdf:	90                   	nop

```

```c
// Event_Upgrade_Jar::check_requiredRecipe @ 0x80f4bb0

/* Event_Upgrade_Jar::check_requiredRecipe(Inven_Item const&) const */

undefined4 __thiscall
Event_Upgrade_Jar::check_requiredRecipe(Event_Upgrade_Jar *this,Inven_Item *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 2) == 0x28be7d) {
    if (*(int *)(param_1 + 7) < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## getBoosterIndex_byUpgradeCardIndex

```asm
// === 080f4a0a Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex  [0x080f4a0a-0x80f4baf] ===
 80f4a0a:	55                   	push   %ebp
 80f4a0b:	89 e5                	mov    %esp,%ebp
 80f4a0d:	83 ec 48             	sub    $0x48,%esp
 80f4a10:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4a13:	8d 48 04             	lea    0x4(%eax),%ecx
 80f4a16:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f4a19:	8b 55 0c             	mov    0xc(%ebp),%edx
 80f4a1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f4a20:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f4a24:	89 04 24             	mov    %eax,(%esp)
 80f4a27:	e8 7a 0a 00 00       	call   80f54a6 <_ZNSt3mapImsSt4lessImESaISt4pairIKmsEEE4findERS3_>
 80f4a2c:	83 ec 04             	sub    $0x4,%esp
 80f4a2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4a32:	8d 48 04             	lea    0x4(%eax),%ecx
 80f4a35:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f4a38:	8b 55 10             	mov    0x10(%ebp),%edx
 80f4a3b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f4a3f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f4a43:	89 04 24             	mov    %eax,(%esp)
 80f4a46:	e8 5b 0a 00 00       	call   80f54a6 <_ZNSt3mapImsSt4lessImESaISt4pairIKmsEEE4findERS3_>
 80f4a4b:	83 ec 04             	sub    $0x4,%esp
 80f4a4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4a51:	8d 50 04             	lea    0x4(%eax),%edx
 80f4a54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f4a57:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f4a5b:	89 04 24             	mov    %eax,(%esp)
 80f4a5e:	e8 6f 0a 00 00       	call   80f54d2 <_ZNSt3mapImsSt4lessImESaISt4pairIKmsEEE3endEv>
 80f4a63:	83 ec 04             	sub    $0x4,%esp
 80f4a66:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f4a69:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4a6d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80f4a70:	89 04 24             	mov    %eax,(%esp)
 80f4a73:	e8 80 0a 00 00       	call   80f54f8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKmsEEneERKS3_>
 80f4a78:	84 c0                	test   %al,%al
 80f4a7a:	74 35                	je     80f4ab1 <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0xa7>
 80f4a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4a7f:	8d 50 04             	lea    0x4(%eax),%edx
 80f4a82:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f4a85:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f4a89:	89 04 24             	mov    %eax,(%esp)
 80f4a8c:	e8 41 0a 00 00       	call   80f54d2 <_ZNSt3mapImsSt4lessImESaISt4pairIKmsEEE3endEv>
 80f4a91:	83 ec 04             	sub    $0x4,%esp
 80f4a94:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f4a97:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4a9b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80f4a9e:	89 04 24             	mov    %eax,(%esp)
 80f4aa1:	e8 52 0a 00 00       	call   80f54f8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKmsEEneERKS3_>
 80f4aa6:	84 c0                	test   %al,%al
 80f4aa8:	74 07                	je     80f4ab1 <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0xa7>
 80f4aaa:	b8 01 00 00 00       	mov    $0x1,%eax
 80f4aaf:	eb 05                	jmp    80f4ab6 <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0xac>
 80f4ab1:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4ab6:	84 c0                	test   %al,%al
 80f4ab8:	0f 84 eb 00 00 00    	je     80f4ba9 <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0x19f>
 80f4abe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80f4ac1:	89 04 24             	mov    %eax,(%esp)
 80f4ac4:	e8 43 0a 00 00       	call   80f550c <_ZNKSt17_Rb_tree_iteratorISt4pairIKmsEEptEv>
 80f4ac9:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80f4acd:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 80f4ad1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 80f4ad4:	89 04 24             	mov    %eax,(%esp)
 80f4ad7:	e8 30 0a 00 00       	call   80f550c <_ZNKSt17_Rb_tree_iteratorISt4pairIKmsEEptEv>
 80f4adc:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80f4ae0:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 80f4ae4:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 80f4ae8:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 80f4aec:	66 39 c2             	cmp    %ax,%dx
 80f4aef:	7e 2a                	jle    80f4b1b <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0x111>
 80f4af1:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 80f4af5:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 80f4af9:	31 d0                	xor    %edx,%eax
 80f4afb:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 80f4aff:	0f b7 55 d6          	movzwl -0x2a(%ebp),%edx
 80f4b03:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 80f4b07:	31 d0                	xor    %edx,%eax
 80f4b09:	66 89 45 d6          	mov    %ax,-0x2a(%ebp)
 80f4b0d:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 80f4b11:	0f b7 45 d6          	movzwl -0x2a(%ebp),%eax
 80f4b15:	31 d0                	xor    %edx,%eax
 80f4b17:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 80f4b1b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f4b1e:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80f4b21:	83 c2 02             	add    $0x2,%edx
 80f4b24:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f4b28:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80f4b2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f4b2f:	89 04 24             	mov    %eax,(%esp)
 80f4b32:	e8 e2 09 00 00       	call   80f5519 <_ZSt9make_pairIRsS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 80f4b37:	83 ec 04             	sub    $0x4,%esp
 80f4b3a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f4b3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4b41:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f4b44:	89 04 24             	mov    %eax,(%esp)
 80f4b47:	e8 0c 0a 00 00       	call   80f5558 <_ZNSt4pairIiiEC1IssEEOS_IT_T0_E>
 80f4b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4b4f:	8d 48 1c             	lea    0x1c(%eax),%ecx
 80f4b52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f4b55:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80f4b58:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f4b5c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80f4b60:	89 04 24             	mov    %eax,(%esp)
 80f4b63:	e8 28 0a 00 00       	call   80f5590 <_ZNSt3mapISt4pairIiiEmSt4lessIS1_ESaIS0_IKS1_mEEE4findERS4_>
 80f4b68:	83 ec 04             	sub    $0x4,%esp
 80f4b6b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f4b6e:	8d 50 1c             	lea    0x1c(%eax),%edx
 80f4b71:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f4b74:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f4b78:	89 04 24             	mov    %eax,(%esp)
 80f4b7b:	e8 3c 0a 00 00       	call   80f55bc <_ZNSt3mapISt4pairIiiEmSt4lessIS1_ESaIS0_IKS1_mEEE3endEv>
 80f4b80:	83 ec 04             	sub    $0x4,%esp
 80f4b83:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f4b86:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f4b8a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80f4b8d:	89 04 24             	mov    %eax,(%esp)
 80f4b90:	e8 4d 0a 00 00       	call   80f55e2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiEmEEneERKS4_>
 80f4b95:	84 c0                	test   %al,%al
 80f4b97:	74 10                	je     80f4ba9 <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0x19f>
 80f4b99:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80f4b9c:	89 04 24             	mov    %eax,(%esp)
 80f4b9f:	e8 52 0a 00 00       	call   80f55f6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKS0_IiiEmEEptEv>
 80f4ba4:	8b 40 08             	mov    0x8(%eax),%eax
 80f4ba7:	eb 05                	jmp    80f4bae <_ZN17Event_Upgrade_Jar34getBoosterIndex_byUpgradeCardIndexERmS0_+0x1a4>
 80f4ba9:	b8 00 00 00 00       	mov    $0x0,%eax
 80f4bae:	c9                   	leave
 80f4baf:	c3                   	ret

```

```c
// Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex @ 0x80f4a0a

/* Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(unsigned long&, unsigned long&) */

undefined4 Event_Upgrade_Jar::getBoosterIndex_byUpgradeCardIndex(ulong *param_1,ulong *param_2)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  _Rb_tree_iterator local_34 [4];
  short local_30;
  short local_2e;
  _Rb_tree_iterator local_2c [4];
  _Rb_tree_iterator local_28 [4];
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  local_24 [4];
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  local_20 [4];
  pair<int,int> local_1c [8];
  short local_14 [2];
  map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
  local_10 [12];
  
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::find((ulong *)local_28);
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::find((ulong *)local_2c);
  std::
  map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
  ::end(local_24);
  cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator!=
                    ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_24,local_28);
  if (cVar3 != '\0') {
    std::
    map<unsigned_long,short,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,short>>>
    ::end(local_20);
    cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_20,local_2c)
    ;
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_080f4ab6;
    }
  }
  bVar2 = false;
LAB_080f4ab6:
  if (bVar2) {
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_28);
    local_30 = *(short *)(iVar4 + 4);
    iVar4 = std::_Rb_tree_iterator<std::pair<unsigned_long_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_long_const,short>> *)local_2c);
    sVar1 = *(short *)(iVar4 + 4);
    local_2e = sVar1;
    if (sVar1 < local_30) {
      local_2e = local_30;
      local_30 = sVar1;
    }
    std::make_pair<short&,short&>(local_14,&local_30);
    std::pair<int,int>::pair<short,short>(local_1c,(pair *)local_14);
    std::
    map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
    ::find(local_34);
    std::
    map<std::pair<int,int>,unsigned_long,std::less<std::pair<int,int>>,std::allocator<std::pair<std::pair<int,int>const,unsigned_long>>>
    ::end(local_10);
    cVar3 = std::_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>>::operator!=
                      ((_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>> *)
                       local_10,local_34);
    if (cVar3 != '\0') {
      iVar4 = std::_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>>::operator->
                        ((_Rb_tree_iterator<std::pair<std::pair<int,int>const,unsigned_long>> *)
                         local_34);
      return *(undefined4 *)(iVar4 + 8);
    }
  }
  return 0;
}

```

---

## ~Event_Upgrade_Jar

```asm
// === 080f49cc Event_Upgrade_Jar::~Event_Upgrade_Jar  [0x080f49cc-0x80f49df] ===
 80f49cc:	55                   	push   %ebp
 80f49cd:	89 e5                	mov    %esp,%ebp
 80f49cf:	83 ec 18             	sub    $0x18,%esp
 80f49d2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f49d5:	89 04 24             	mov    %eax,(%esp)
 80f49d8:	e8 f5 07 00 00       	call   80f51d2 <_ZN19EventUpgradeJarInfoD1Ev>
 80f49dd:	c9                   	leave
 80f49de:	c3                   	ret
 80f49df:	90                   	nop

```

```c
// Event_Upgrade_Jar::~Event_Upgrade_Jar @ 0x80f49cc

/* Event_Upgrade_Jar::~Event_Upgrade_Jar() */

void __thiscall Event_Upgrade_Jar::~Event_Upgrade_Jar(Event_Upgrade_Jar *this)

{
  EventUpgradeJarInfo::~EventUpgradeJarInfo((EventUpgradeJarInfo *)this);
  return;
}

```


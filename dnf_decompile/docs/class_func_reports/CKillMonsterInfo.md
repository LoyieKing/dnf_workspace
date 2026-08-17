# CKillMonsterInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## CKillMonsterInfo

```asm
// === 0854c9b4 CKillMonsterInfo::CKillMonsterInfo  [0x0854c9b4-0x854ca71] ===
 854c9b4:	55                   	push   %ebp
 854c9b5:	89 e5                	mov    %esp,%ebp
 854c9b7:	56                   	push   %esi
 854c9b8:	53                   	push   %ebx
 854c9b9:	83 ec 10             	sub    $0x10,%esp
 854c9bc:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9bf:	89 04 24             	mov    %eax,(%esp)
 854c9c2:	e8 f3 c2 b7 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 854c9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9ca:	c7 00 e8 ec c9 08    	movl   $0x8c9ece8,(%eax)
 854c9d0:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9d3:	83 c0 08             	add    $0x8,%eax
 854c9d6:	89 04 24             	mov    %eax,(%esp)
 854c9d9:	e8 8a f9 b3 ff       	call   808c368 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEEC1Ev>
 854c9de:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9e1:	83 c0 20             	add    $0x20,%eax
 854c9e4:	89 04 24             	mov    %eax,(%esp)
 854c9e7:	e8 7c f9 b3 ff       	call   808c368 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEEC1Ev>
 854c9ec:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9ef:	83 c0 38             	add    $0x38,%eax
 854c9f2:	89 04 24             	mov    %eax,(%esp)
 854c9f5:	e8 6e f9 b3 ff       	call   808c368 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEEC1Ev>
 854c9fa:	8b 45 08             	mov    0x8(%ebp),%eax
 854c9fd:	89 04 24             	mov    %eax,(%esp)
 854ca00:	e8 b3 06 00 00       	call   854d0b8 <_ZN16CKillMonsterInfo6_resetEv>
 854ca05:	eb 63                	jmp    854ca6a <_ZN16CKillMonsterInfoC1Ev+0xb6>
 854ca07:	89 d3                	mov    %edx,%ebx
 854ca09:	89 c6                	mov    %eax,%esi
 854ca0b:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca0e:	83 c0 38             	add    $0x38,%eax
 854ca11:	89 04 24             	mov    %eax,(%esp)
 854ca14:	e8 97 fb b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854ca19:	89 f0                	mov    %esi,%eax
 854ca1b:	89 da                	mov    %ebx,%edx
 854ca1d:	eb 00                	jmp    854ca1f <_ZN16CKillMonsterInfoC1Ev+0x6b>
 854ca1f:	89 d3                	mov    %edx,%ebx
 854ca21:	89 c6                	mov    %eax,%esi
 854ca23:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca26:	83 c0 20             	add    $0x20,%eax
 854ca29:	89 04 24             	mov    %eax,(%esp)
 854ca2c:	e8 7f fb b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854ca31:	89 f0                	mov    %esi,%eax
 854ca33:	89 da                	mov    %ebx,%edx
 854ca35:	eb 00                	jmp    854ca37 <_ZN16CKillMonsterInfoC1Ev+0x83>
 854ca37:	89 d3                	mov    %edx,%ebx
 854ca39:	89 c6                	mov    %eax,%esi
 854ca3b:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca3e:	83 c0 08             	add    $0x8,%eax
 854ca41:	89 04 24             	mov    %eax,(%esp)
 854ca44:	e8 67 fb b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854ca49:	89 f0                	mov    %esi,%eax
 854ca4b:	89 da                	mov    %ebx,%edx
 854ca4d:	eb 00                	jmp    854ca4f <_ZN16CKillMonsterInfoC1Ev+0x9b>
 854ca4f:	89 d3                	mov    %edx,%ebx
 854ca51:	89 c6                	mov    %eax,%esi
 854ca53:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca56:	89 04 24             	mov    %eax,(%esp)
 854ca59:	e8 84 c1 b7 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 854ca5e:	89 f0                	mov    %esi,%eax
 854ca60:	89 da                	mov    %ebx,%edx
 854ca62:	89 04 24             	mov    %eax,(%esp)
 854ca65:	e8 e6 6c 59 00       	call   8ae3750 <_Unwind_Resume>
 854ca6a:	83 c4 10             	add    $0x10,%esp
 854ca6d:	5b                   	pop    %ebx
 854ca6e:	5e                   	pop    %esi
 854ca6f:	5d                   	pop    %ebp
 854ca70:	c3                   	ret
 854ca71:	90                   	nop

```

```c
// CKillMonsterInfo::CKillMonsterInfo @ 0x854c9b4

/* CKillMonsterInfo::CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::CKillMonsterInfo(CKillMonsterInfo *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9ece8;
                    /* try { // try from 0854c9d9 to 0854c9dd has its CatchHandler @ 0854ca4f */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 8));
                    /* try { // try from 0854c9e7 to 0854c9eb has its CatchHandler @ 0854ca37 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 0x20));
                    /* try { // try from 0854c9f5 to 0854c9f9 has its CatchHandler @ 0854ca1f */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
         *)(this + 0x38));
                    /* try { // try from 0854ca00 to 0854ca04 has its CatchHandler @ 0854ca07 */
  _reset(this);
  return;
}

```

---

## CheckAPCBossKill

```asm
// === 0854d1e8 CKillMonsterInfo::CheckAPCBossKill  [0x0854d1e8-0x854d219] ===
 854d1e8:	55                   	push   %ebp
 854d1e9:	89 e5                	mov    %esp,%ebp
 854d1eb:	83 ec 28             	sub    $0x28,%esp
 854d1ee:	8b 45 10             	mov    0x10(%ebp),%eax
 854d1f1:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d1f4:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d1f8:	8b 55 08             	mov    0x8(%ebp),%edx
 854d1fb:	83 c2 38             	add    $0x38,%edx
 854d1fe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d202:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d205:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d209:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d20d:	8b 45 08             	mov    0x8(%ebp),%eax
 854d210:	89 04 24             	mov    %eax,(%esp)
 854d213:	e8 d2 fe ff ff       	call   854d0ea <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh>
 854d218:	c9                   	leave
 854d219:	c3                   	ret

```

```c
// CKillMonsterInfo::CheckAPCBossKill @ 0x854d1e8

/* CKillMonsterInfo::CheckAPCBossKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::CheckAPCBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  CheckMonsterKill(this,(map *)(this + 0x38),param_1,param_2);
  return;
}

```

---

## CheckBossKill

```asm
// === 0854d184 CKillMonsterInfo::CheckBossKill  [0x0854d184-0x854d1b5] ===
 854d184:	55                   	push   %ebp
 854d185:	89 e5                	mov    %esp,%ebp
 854d187:	83 ec 28             	sub    $0x28,%esp
 854d18a:	8b 45 10             	mov    0x10(%ebp),%eax
 854d18d:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d190:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d194:	8b 55 08             	mov    0x8(%ebp),%edx
 854d197:	83 c2 08             	add    $0x8,%edx
 854d19a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d19e:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d1a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d1a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d1a9:	8b 45 08             	mov    0x8(%ebp),%eax
 854d1ac:	89 04 24             	mov    %eax,(%esp)
 854d1af:	e8 36 ff ff ff       	call   854d0ea <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh>
 854d1b4:	c9                   	leave
 854d1b5:	c3                   	ret

```

```c
// CKillMonsterInfo::CheckBossKill @ 0x854d184

/* CKillMonsterInfo::CheckBossKill(unsigned int, unsigned char) */

void __thiscall CKillMonsterInfo::CheckBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  CheckMonsterKill(this,(map *)(this + 8),param_1,param_2);
  return;
}

```

---

## CheckMonsterKill

```asm
// === 0854d0ea CKillMonsterInfo::CheckMonsterKill  [0x0854d0ea-0x854d183] ===
 854d0ea:	55                   	push   %ebp
 854d0eb:	89 e5                	mov    %esp,%ebp
 854d0ed:	53                   	push   %ebx
 854d0ee:	83 ec 34             	sub    $0x34,%esp
 854d0f1:	8b 45 14             	mov    0x14(%ebp),%eax
 854d0f4:	88 45 e4             	mov    %al,-0x1c(%ebp)
 854d0f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854d0fa:	8d 55 10             	lea    0x10(%ebp),%edx
 854d0fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d101:	8b 55 0c             	mov    0xc(%ebp),%edx
 854d104:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d108:	89 04 24             	mov    %eax,(%esp)
 854d10b:	e8 a4 05 00 00       	call   854d6b4 <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE4findERS3_>
 854d110:	83 ec 04             	sub    $0x4,%esp
 854d113:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854d116:	8b 55 0c             	mov    0xc(%ebp),%edx
 854d119:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d11d:	89 04 24             	mov    %eax,(%esp)
 854d120:	e8 f5 04 00 00       	call   854d61a <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE3endEv>
 854d125:	83 ec 04             	sub    $0x4,%esp
 854d128:	8d 45 f4             	lea    -0xc(%ebp),%eax
 854d12b:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d12f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854d132:	89 04 24             	mov    %eax,(%esp)
 854d135:	e8 06 05 00 00       	call   854d640 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjhEEneERKS3_>
 854d13a:	84 c0                	test   %al,%al
 854d13c:	74 3b                	je     854d179 <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh+0x8f>
 854d13e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854d141:	89 04 24             	mov    %eax,(%esp)
 854d144:	e8 49 05 00 00       	call   854d692 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjhEEptEv>
 854d149:	0f b6 58 04          	movzbl 0x4(%eax),%ebx
 854d14d:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 854d151:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d155:	8b 45 08             	mov    0x8(%ebp),%eax
 854d158:	89 04 24             	mov    %eax,(%esp)
 854d15b:	e8 ba 00 00 00       	call   854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>
 854d160:	21 d8                	and    %ebx,%eax
 854d162:	84 c0                	test   %al,%al
 854d164:	0f 95 c0             	setne  %al
 854d167:	84 c0                	test   %al,%al
 854d169:	74 07                	je     854d172 <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh+0x88>
 854d16b:	b8 01 00 00 00       	mov    $0x1,%eax
 854d170:	eb 0c                	jmp    854d17e <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh+0x94>
 854d172:	b8 00 00 00 00       	mov    $0x0,%eax
 854d177:	eb 05                	jmp    854d17e <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh+0x94>
 854d179:	b8 00 00 00 00       	mov    $0x0,%eax
 854d17e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 854d181:	c9                   	leave
 854d182:	c3                   	ret
 854d183:	90                   	nop

```

```c
// CKillMonsterInfo::CheckMonsterKill @ 0x854d0ea

/* CKillMonsterInfo::CheckMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, unsigned char> > > const&, unsigned int, unsigned
   char) */

undefined4 __thiscall
CKillMonsterInfo::CheckMonsterKill(CKillMonsterInfo *this,map *param_1,uint param_2,uchar param_3)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> local_14 [4];
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_10 [8];
  
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator!=
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar4 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator->
                      (local_14);
    bVar1 = *(byte *)(iVar4 + 4);
    bVar3 = GetDungeonDifficultyFlag(this,param_3);
    if ((bVar3 & bVar1) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}

```

---

## CheckNamedKill

```asm
// === 0854d1b6 CKillMonsterInfo::CheckNamedKill  [0x0854d1b6-0x854d1e7] ===
 854d1b6:	55                   	push   %ebp
 854d1b7:	89 e5                	mov    %esp,%ebp
 854d1b9:	83 ec 28             	sub    $0x28,%esp
 854d1bc:	8b 45 10             	mov    0x10(%ebp),%eax
 854d1bf:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d1c2:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d1c6:	8b 55 08             	mov    0x8(%ebp),%edx
 854d1c9:	83 c2 20             	add    $0x20,%edx
 854d1cc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d1d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d1d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d1d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d1db:	8b 45 08             	mov    0x8(%ebp),%eax
 854d1de:	89 04 24             	mov    %eax,(%esp)
 854d1e1:	e8 04 ff ff ff       	call   854d0ea <_ZN16CKillMonsterInfo16CheckMonsterKillERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjh>
 854d1e6:	c9                   	leave
 854d1e7:	c3                   	ret

```

```c
// CKillMonsterInfo::CheckNamedKill @ 0x854d1b6

/* CKillMonsterInfo::CheckNamedKill(unsigned int, unsigned char) */

void __thiscall CKillMonsterInfo::CheckNamedKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  CheckMonsterKill(this,(map *)(this + 0x20),param_1,param_2);
  return;
}

```

---

## ConvertMapToStrcut

```asm
// === 0854ccbc CKillMonsterInfo::ConvertMapToStrcut  [0x0854ccbc-0x854cddb] ===
 854ccbc:	55                   	push   %ebp
 854ccbd:	89 e5                	mov    %esp,%ebp
 854ccbf:	53                   	push   %ebx
 854ccc0:	83 ec 34             	sub    $0x34,%esp
 854ccc3:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ccc6:	89 04 24             	mov    %eax,(%esp)
 854ccc9:	e8 f0 08 00 00       	call   854d5be <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE5emptyEv>
 854ccce:	84 c0                	test   %al,%al
 854ccd0:	74 0a                	je     854ccdc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x20>
 854ccd2:	b8 01 00 00 00       	mov    $0x1,%eax
 854ccd7:	e9 fa 00 00 00       	jmp    854cdd6 <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x11a>
 854ccdc:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ccdf:	89 04 24             	mov    %eax,(%esp)
 854cce2:	e8 eb 08 00 00       	call   854d5d2 <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE4sizeEv>
 854cce7:	3b 45 14             	cmp    0x14(%ebp),%eax
 854ccea:	0f 97 c0             	seta   %al
 854cced:	84 c0                	test   %al,%al
 854ccef:	74 0a                	je     854ccfb <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x3f>
 854ccf1:	b8 00 00 00 00       	mov    $0x0,%eax
 854ccf6:	e9 db 00 00 00       	jmp    854cdd6 <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x11a>
 854ccfb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854ccfe:	89 04 24             	mov    %eax,(%esp)
 854cd01:	e8 e0 08 00 00       	call   854d5e6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjhEEC1Ev>
 854cd06:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854cd09:	8b 55 0c             	mov    0xc(%ebp),%edx
 854cd0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 854cd10:	89 04 24             	mov    %eax,(%esp)
 854cd13:	e8 dc 08 00 00       	call   854d5f4 <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE5beginEv>
 854cd18:	83 ec 04             	sub    $0x4,%esp
 854cd1b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854cd1e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 854cd21:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 854cd28:	eb 60                	jmp    854cd8a <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0xce>
 854cd2a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854cd2d:	89 d0                	mov    %edx,%eax
 854cd2f:	c1 e0 02             	shl    $0x2,%eax
 854cd32:	01 d0                	add    %edx,%eax
 854cd34:	89 c3                	mov    %eax,%ebx
 854cd36:	03 5d 10             	add    0x10(%ebp),%ebx
 854cd39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854cd3c:	89 04 24             	mov    %eax,(%esp)
 854cd3f:	e8 4e 09 00 00       	call   854d692 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjhEEptEv>
 854cd44:	8b 00                	mov    (%eax),%eax
 854cd46:	89 03                	mov    %eax,(%ebx)
 854cd48:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854cd4b:	89 d0                	mov    %edx,%eax
 854cd4d:	c1 e0 02             	shl    $0x2,%eax
 854cd50:	01 d0                	add    %edx,%eax
 854cd52:	89 c3                	mov    %eax,%ebx
 854cd54:	03 5d 10             	add    0x10(%ebp),%ebx
 854cd57:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854cd5a:	89 04 24             	mov    %eax,(%esp)
 854cd5d:	e8 30 09 00 00       	call   854d692 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjhEEptEv>
 854cd62:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 854cd66:	88 43 04             	mov    %al,0x4(%ebx)
 854cd69:	8d 45 f0             	lea    -0x10(%ebp),%eax
 854cd6c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 854cd73:	00 
 854cd74:	8d 55 e8             	lea    -0x18(%ebp),%edx
 854cd77:	89 54 24 04          	mov    %edx,0x4(%esp)
 854cd7b:	89 04 24             	mov    %eax,(%esp)
 854cd7e:	e8 d1 08 00 00       	call   854d654 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjhEEppEi>
 854cd83:	83 ec 04             	sub    $0x4,%esp
 854cd86:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 854cd8a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cd8d:	8b 55 0c             	mov    0xc(%ebp),%edx
 854cd90:	89 54 24 04          	mov    %edx,0x4(%esp)
 854cd94:	89 04 24             	mov    %eax,(%esp)
 854cd97:	e8 7e 08 00 00       	call   854d61a <_ZNKSt3mapIjhSt4lessIjESaISt4pairIKjhEEE3endEv>
 854cd9c:	83 ec 04             	sub    $0x4,%esp
 854cd9f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cda2:	89 44 24 04          	mov    %eax,0x4(%esp)
 854cda6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 854cda9:	89 04 24             	mov    %eax,(%esp)
 854cdac:	e8 8f 08 00 00       	call   854d640 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjhEEneERKS3_>
 854cdb1:	84 c0                	test   %al,%al
 854cdb3:	74 0f                	je     854cdc4 <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x108>
 854cdb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854cdb8:	3b 45 14             	cmp    0x14(%ebp),%eax
 854cdbb:	73 07                	jae    854cdc4 <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x108>
 854cdbd:	b8 01 00 00 00       	mov    $0x1,%eax
 854cdc2:	eb 05                	jmp    854cdc9 <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x10d>
 854cdc4:	b8 00 00 00 00       	mov    $0x0,%eax
 854cdc9:	84 c0                	test   %al,%al
 854cdcb:	0f 85 59 ff ff ff    	jne    854cd2a <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj+0x6e>
 854cdd1:	b8 01 00 00 00       	mov    $0x1,%eax
 854cdd6:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 854cdd9:	c9                   	leave
 854cdda:	c3                   	ret
 854cddb:	90                   	nop

```

```c
// CKillMonsterInfo::ConvertMapToStrcut @ 0x854ccbc

/* CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*,
   unsigned int) const */

undefined4 __thiscall
CKillMonsterInfo::ConvertMapToStrcut
          (CKillMonsterInfo *this,map *param_1,stMonsterInfo_t *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_20;
  undefined4 local_1c;
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> local_14 [4];
  uint local_10;
  
  cVar3 = std::
          map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          ::empty((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
                   *)param_1);
  if (cVar3 == '\0') {
    uVar5 = std::
            map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
            ::size((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
                    *)param_1);
    if (param_3 < uVar5) {
      uVar4 = 0;
    }
    else {
      std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
      _Rb_tree_const_iterator
                ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)&local_1c);
      std::
      map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
      ::begin((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
               *)&local_20);
      local_1c = local_20;
      local_10 = 0;
      while( true ) {
        std::
        map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
        ::end(local_18);
        cVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                operator!=((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                           &local_1c,(_Rb_tree_const_iterator *)local_18);
        if ((cVar3 == '\0') || (param_3 <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        iVar2 = local_10 * 5;
        puVar6 = (undefined4 *)
                 std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                 operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                            &local_1c);
        *(undefined4 *)(param_2 + iVar2) = *puVar6;
        iVar2 = local_10 * 5;
        iVar7 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::
                operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>> *)
                           &local_1c);
        param_2[iVar2 + 4] = *(stMonsterInfo_t *)(iVar7 + 4);
        std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator++
                  (local_14,(int)&local_1c);
        local_10 = local_10 + 1;
      }
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## ConvertStructToMap

```asm
// === 0854cb42 CKillMonsterInfo::ConvertStructToMap  [0x0854cb42-0x854ccbb] ===
 854cb42:	55                   	push   %ebp
 854cb43:	89 e5                	mov    %esp,%ebp
 854cb45:	53                   	push   %ebx
 854cb46:	83 ec 64             	sub    $0x64,%esp
 854cb49:	8b 45 18             	mov    0x18(%ebp),%eax
 854cb4c:	88 45 c4             	mov    %al,-0x3c(%ebp)
 854cb4f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 854cb56:	e9 43 01 00 00       	jmp    854cc9e <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x15c>
 854cb5b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 854cb5e:	89 d0                	mov    %edx,%eax
 854cb60:	c1 e0 02             	shl    $0x2,%eax
 854cb63:	01 d0                	add    %edx,%eax
 854cb65:	03 45 0c             	add    0xc(%ebp),%eax
 854cb68:	8b 00                	mov    (%eax),%eax
 854cb6a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 854cb6d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854cb70:	85 c0                	test   %eax,%eax
 854cb72:	0f 84 39 01 00 00    	je     854ccb1 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x16f>
 854cb78:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854cb7c:	83 f0 01             	xor    $0x1,%eax
 854cb7f:	84 c0                	test   %al,%al
 854cb81:	74 5b                	je     854cbde <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x9c>
 854cb83:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854cb86:	89 c3                	mov    %eax,%ebx
 854cb88:	e8 0e f6 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854cb8d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854cb91:	89 04 24             	mov    %eax,(%esp)
 854cb94:	e8 eb 31 e1 ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 854cb99:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854cb9c:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 854cba0:	0f 85 96 00 00 00    	jne    854cc3c <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0xfa>
 854cba6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854cba9:	89 44 24 14          	mov    %eax,0x14(%esp)
 854cbad:	c7 44 24 10 a0 df c9 	movl   $0x8c9dfa0,0x10(%esp)
 854cbb4:	08 
 854cbb5:	c7 44 24 0c 25 00 00 	movl   $0x25,0xc(%esp)
 854cbbc:	00 
 854cbbd:	c7 44 24 08 80 ec c9 	movl   $0x8c9ec80,0x8(%esp)
 854cbc4:	08 
 854cbc5:	c7 44 24 04 d0 df c9 	movl   $0x8c9dfd0,0x4(%esp)
 854cbcc:	08 
 854cbcd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 854cbd4:	e8 31 70 58 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 854cbd9:	e9 bc 00 00 00       	jmp    854cc9a <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x158>
 854cbde:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 854cbe2:	74 58                	je     854cc3c <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0xfa>
 854cbe4:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 854cbe7:	e8 af f5 b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854cbec:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 854cbf2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854cbf6:	89 04 24             	mov    %eax,(%esp)
 854cbf9:	e8 d4 dd df ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 854cbfe:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854cc01:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854cc05:	75 35                	jne    854cc3c <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0xfa>
 854cc07:	8b 45 d0             	mov    -0x30(%ebp),%eax
 854cc0a:	89 44 24 14          	mov    %eax,0x14(%esp)
 854cc0e:	c7 44 24 10 a0 df c9 	movl   $0x8c9dfa0,0x10(%esp)
 854cc15:	08 
 854cc16:	c7 44 24 0c 2e 00 00 	movl   $0x2e,0xc(%esp)
 854cc1d:	00 
 854cc1e:	c7 44 24 08 80 ec c9 	movl   $0x8c9ec80,0x8(%esp)
 854cc25:	08 
 854cc26:	c7 44 24 04 d0 df c9 	movl   $0x8c9dfd0,0x4(%esp)
 854cc2d:	08 
 854cc2e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 854cc35:	e8 d0 6f 58 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 854cc3a:	eb 5e                	jmp    854cc9a <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x158>
 854cc3c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 854cc3f:	89 d0                	mov    %edx,%eax
 854cc41:	c1 e0 02             	shl    $0x2,%eax
 854cc44:	01 d0                	add    %edx,%eax
 854cc46:	03 45 0c             	add    0xc(%ebp),%eax
 854cc49:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 854cc4d:	88 45 cf             	mov    %al,-0x31(%ebp)
 854cc50:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854cc53:	8d 55 cf             	lea    -0x31(%ebp),%edx
 854cc56:	89 54 24 08          	mov    %edx,0x8(%esp)
 854cc5a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 854cc5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 854cc61:	89 04 24             	mov    %eax,(%esp)
 854cc64:	e8 b9 08 00 00       	call   854d522 <_ZSt9make_pairIRjRhESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 854cc69:	83 ec 04             	sub    $0x4,%esp
 854cc6c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854cc6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 854cc73:	8d 45 dc             	lea    -0x24(%ebp),%eax
 854cc76:	89 04 24             	mov    %eax,(%esp)
 854cc79:	e8 e2 08 00 00       	call   854d560 <_ZNSt4pairIKjhEC1IjhEEOS_IT_T0_E>
 854cc7e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 854cc81:	8d 55 dc             	lea    -0x24(%ebp),%edx
 854cc84:	89 54 24 08          	mov    %edx,0x8(%esp)
 854cc88:	8b 55 14             	mov    0x14(%ebp),%edx
 854cc8b:	89 54 24 04          	mov    %edx,0x4(%esp)
 854cc8f:	89 04 24             	mov    %eax,(%esp)
 854cc92:	e8 fb 08 00 00       	call   854d592 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE6insertERKS4_>
 854cc97:	83 ec 04             	sub    $0x4,%esp
 854cc9a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 854cc9e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 854cca1:	3b 45 10             	cmp    0x10(%ebp),%eax
 854cca4:	0f 92 c0             	setb   %al
 854cca7:	84 c0                	test   %al,%al
 854cca9:	0f 85 ac fe ff ff    	jne    854cb5b <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x19>
 854ccaf:	eb 01                	jmp    854ccb2 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb+0x170>
 854ccb1:	90                   	nop
 854ccb2:	b8 01 00 00 00       	mov    $0x1,%eax
 854ccb7:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 854ccba:	c9                   	leave
 854ccbb:	c3                   	ret

```

```c
// CKillMonsterInfo::ConvertStructToMap @ 0x854cb42

/* CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, unsigned int, std::map<unsigned int,
   unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned
   char> > >&, bool) */

undefined4 __thiscall
CKillMonsterInfo::ConvertStructToMap
          (CKillMonsterInfo *this,stMonsterInfo_t *param_1,uint param_2,map *param_3,bool param_4)

{
  uint uVar1;
  int iVar2;
  uint local_34;
  pair local_30 [8];
  pair<unsigned_int_const,unsigned_char> local_28 [8];
  uint local_20 [2];
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  do {
    if ((param_2 <= local_18) || (uVar1 = *(uint *)(param_1 + local_18 * 5), uVar1 == 0)) {
      return 1;
    }
    local_34 = uVar1;
    if (param_4) {
      iVar2 = G_CDataManager();
      local_10 = CAICharacterList::get(*(CAICharacterList **)(iVar2 + 0x869c),uVar1);
      if (local_10 != 0) goto LAB_0854cc3c;
      LogManager::logFormat
                (1,"KillMonsterInfo.cpp",
                 "bool CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, size_t, killMonsterMap&, bool)"
                 ,0x2e,"ConvertStrToMap ERROR : mobIdx is not valid(%u)",local_34);
    }
    else {
      iVar2 = G_CDataManager();
      local_14 = CDataManager::find_monster(iVar2);
      if (local_14 == 0) {
        LogManager::logFormat
                  (1,"KillMonsterInfo.cpp",
                   "bool CKillMonsterInfo::ConvertStructToMap(stMonsterInfo_t*, size_t, killMonsterMap&, bool)"
                   ,0x25,"ConvertStrToMap ERROR : mobIdx is not valid(%u)",local_34);
      }
      else {
LAB_0854cc3c:
        std::make_pair<unsigned_int&,unsigned_char&>(local_20,(uchar *)&local_34);
        std::pair<unsigned_int_const,unsigned_char>::pair<unsigned_int,unsigned_char>
                  (local_28,(pair *)local_20);
        std::
        map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
        ::insert(local_30);
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## GetDungeonDifficultyFlag

```asm
// === 0854d21a CKillMonsterInfo::GetDungeonDifficultyFlag  [0x0854d21a-0x854d24b] ===
 854d21a:	55                   	push   %ebp
 854d21b:	89 e5                	mov    %esp,%ebp
 854d21d:	53                   	push   %ebx
 854d21e:	83 ec 04             	sub    $0x4,%esp
 854d221:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d224:	88 45 f8             	mov    %al,-0x8(%ebp)
 854d227:	80 7d f8 04          	cmpb   $0x4,-0x8(%ebp)
 854d22b:	76 07                	jbe    854d234 <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh+0x1a>
 854d22d:	b8 00 00 00 00       	mov    $0x0,%eax
 854d232:	eb 11                	jmp    854d245 <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh+0x2b>
 854d234:	0f b6 45 f8          	movzbl -0x8(%ebp),%eax
 854d238:	ba 01 00 00 00       	mov    $0x1,%edx
 854d23d:	89 d3                	mov    %edx,%ebx
 854d23f:	89 c1                	mov    %eax,%ecx
 854d241:	d3 e3                	shl    %cl,%ebx
 854d243:	89 d8                	mov    %ebx,%eax
 854d245:	83 c4 04             	add    $0x4,%esp
 854d248:	5b                   	pop    %ebx
 854d249:	5d                   	pop    %ebp
 854d24a:	c3                   	ret
 854d24b:	90                   	nop

```

```c
// CKillMonsterInfo::GetDungeonDifficultyFlag @ 0x854d21a

/* CKillMonsterInfo::GetDungeonDifficultyFlag(unsigned char) */

int __thiscall CKillMonsterInfo::GetDungeonDifficultyFlag(CKillMonsterInfo *this,uchar param_1)

{
  int iVar1;
  
  if (param_1 < 5) {
    iVar1 = 1 << (param_1 & 0x1f);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## RegisterAPCBossKill

```asm
// === 0854d48c CKillMonsterInfo::RegisterAPCBossKill  [0x0854d48c-0x854d4c5] ===
 854d48c:	55                   	push   %ebp
 854d48d:	89 e5                	mov    %esp,%ebp
 854d48f:	83 ec 38             	sub    $0x38,%esp
 854d492:	8b 45 10             	mov    0x10(%ebp),%eax
 854d495:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d498:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d49c:	8b 55 08             	mov    0x8(%ebp),%edx
 854d49f:	83 c2 38             	add    $0x38,%edx
 854d4a2:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854d4a9:	00 
 854d4aa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d4ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d4b1:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d4b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d4b9:	8b 45 08             	mov    0x8(%ebp),%eax
 854d4bc:	89 04 24             	mov    %eax,(%esp)
 854d4bf:	e8 88 fd ff ff       	call   854d24c <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb>
 854d4c4:	c9                   	leave
 854d4c5:	c3                   	ret

```

```c
// CKillMonsterInfo::RegisterAPCBossKill @ 0x854d48c

/* CKillMonsterInfo::RegisterAPCBossKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::RegisterAPCBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  RegisterMonsterKill(this,(map *)(this + 0x38),param_1,param_2,true);
  return;
}

```

---

## RegisterBossKill

```asm
// === 0854d418 CKillMonsterInfo::RegisterBossKill  [0x0854d418-0x854d451] ===
 854d418:	55                   	push   %ebp
 854d419:	89 e5                	mov    %esp,%ebp
 854d41b:	83 ec 38             	sub    $0x38,%esp
 854d41e:	8b 45 10             	mov    0x10(%ebp),%eax
 854d421:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d424:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d428:	8b 55 08             	mov    0x8(%ebp),%edx
 854d42b:	83 c2 08             	add    $0x8,%edx
 854d42e:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854d435:	00 
 854d436:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d43a:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d43d:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d441:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d445:	8b 45 08             	mov    0x8(%ebp),%eax
 854d448:	89 04 24             	mov    %eax,(%esp)
 854d44b:	e8 fc fd ff ff       	call   854d24c <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb>
 854d450:	c9                   	leave
 854d451:	c3                   	ret

```

```c
// CKillMonsterInfo::RegisterBossKill @ 0x854d418

/* CKillMonsterInfo::RegisterBossKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::RegisterBossKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  RegisterMonsterKill(this,(map *)(this + 8),param_1,param_2,false);
  return;
}

```

---

## RegisterMonsterKill

```asm
// === 0854d24c CKillMonsterInfo::RegisterMonsterKill  [0x0854d24c-0x854d417] ===
 854d24c:	55                   	push   %ebp
 854d24d:	89 e5                	mov    %esp,%ebp
 854d24f:	56                   	push   %esi
 854d250:	53                   	push   %ebx
 854d251:	83 ec 60             	sub    $0x60,%esp
 854d254:	8b 55 14             	mov    0x14(%ebp),%edx
 854d257:	8b 45 18             	mov    0x18(%ebp),%eax
 854d25a:	88 55 c4             	mov    %dl,-0x3c(%ebp)
 854d25d:	88 45 c0             	mov    %al,-0x40(%ebp)
 854d260:	80 7d c4 04          	cmpb   $0x4,-0x3c(%ebp)
 854d264:	76 0a                	jbe    854d270 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x24>
 854d266:	b8 00 00 00 00       	mov    $0x0,%eax
 854d26b:	e9 9e 01 00 00       	jmp    854d40e <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1c2>
 854d270:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 854d274:	83 f0 01             	xor    $0x1,%eax
 854d277:	84 c0                	test   %al,%al
 854d279:	74 29                	je     854d2a4 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x58>
 854d27b:	8b 45 10             	mov    0x10(%ebp),%eax
 854d27e:	89 c3                	mov    %eax,%ebx
 854d280:	e8 16 ef b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854d285:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854d289:	89 04 24             	mov    %eax,(%esp)
 854d28c:	e8 f3 2a e1 ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 854d291:	89 45 f0             	mov    %eax,-0x10(%ebp)
 854d294:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 854d298:	75 37                	jne    854d2d1 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x85>
 854d29a:	b8 00 00 00 00       	mov    $0x0,%eax
 854d29f:	e9 6a 01 00 00       	jmp    854d40e <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1c2>
 854d2a4:	8b 5d 10             	mov    0x10(%ebp),%ebx
 854d2a7:	e8 ef ee b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854d2ac:	8b 80 9c 86 00 00    	mov    0x869c(%eax),%eax
 854d2b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854d2b6:	89 04 24             	mov    %eax,(%esp)
 854d2b9:	e8 14 d7 df ff       	call   834a9d2 <_ZN16CAICharacterList3getEj>
 854d2be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854d2c1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854d2c5:	75 0a                	jne    854d2d1 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x85>
 854d2c7:	b8 00 00 00 00       	mov    $0x0,%eax
 854d2cc:	e9 3d 01 00 00       	jmp    854d40e <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1c2>
 854d2d1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 854d2d4:	8d 55 10             	lea    0x10(%ebp),%edx
 854d2d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d2db:	8b 55 0c             	mov    0xc(%ebp),%edx
 854d2de:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d2e2:	89 04 24             	mov    %eax,(%esp)
 854d2e5:	e8 f6 03 00 00       	call   854d6e0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE4findERS3_>
 854d2ea:	83 ec 04             	sub    $0x4,%esp
 854d2ed:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854d2f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 854d2f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d2f7:	89 04 24             	mov    %eax,(%esp)
 854d2fa:	e8 0d 04 00 00       	call   854d70c <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE3endEv>
 854d2ff:	83 ec 04             	sub    $0x4,%esp
 854d302:	8d 45 d0             	lea    -0x30(%ebp),%eax
 854d305:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d309:	8d 45 cc             	lea    -0x34(%ebp),%eax
 854d30c:	89 04 24             	mov    %eax,(%esp)
 854d30f:	e8 1e 04 00 00       	call   854d732 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjhEEneERKS3_>
 854d314:	84 c0                	test   %al,%al
 854d316:	74 39                	je     854d351 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x105>
 854d318:	8d 45 cc             	lea    -0x34(%ebp),%eax
 854d31b:	89 04 24             	mov    %eax,(%esp)
 854d31e:	e8 23 04 00 00       	call   854d746 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjhEEptEv>
 854d323:	89 c3                	mov    %eax,%ebx
 854d325:	0f b6 73 04          	movzbl 0x4(%ebx),%esi
 854d329:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854d32d:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d331:	8b 45 08             	mov    0x8(%ebp),%eax
 854d334:	89 04 24             	mov    %eax,(%esp)
 854d337:	e8 de fe ff ff       	call   854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>
 854d33c:	09 f0                	or     %esi,%eax
 854d33e:	88 43 04             	mov    %al,0x4(%ebx)
 854d341:	8b 45 08             	mov    0x8(%ebp),%eax
 854d344:	89 04 24             	mov    %eax,(%esp)
 854d347:	e8 78 b8 b7 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 854d34c:	e9 b8 00 00 00       	jmp    854d409 <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1bd>
 854d351:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 854d355:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d359:	8b 45 08             	mov    0x8(%ebp),%eax
 854d35c:	89 04 24             	mov    %eax,(%esp)
 854d35f:	e8 b6 fe ff ff       	call   854d21a <_ZN16CKillMonsterInfo24GetDungeonDifficultyFlagEh>
 854d364:	88 45 ef             	mov    %al,-0x11(%ebp)
 854d367:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854d36a:	8d 55 ef             	lea    -0x11(%ebp),%edx
 854d36d:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d371:	8d 55 10             	lea    0x10(%ebp),%edx
 854d374:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d378:	89 04 24             	mov    %eax,(%esp)
 854d37b:	e8 d3 03 00 00       	call   854d753 <_ZSt9make_pairIRjhESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 854d380:	83 ec 04             	sub    $0x4,%esp
 854d383:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 854d386:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d38a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 854d38d:	89 04 24             	mov    %eax,(%esp)
 854d390:	e8 cb 01 00 00       	call   854d560 <_ZNSt4pairIKjhEC1IjhEEOS_IT_T0_E>
 854d395:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 854d398:	8d 55 dc             	lea    -0x24(%ebp),%edx
 854d39b:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d39f:	8b 55 0c             	mov    0xc(%ebp),%edx
 854d3a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d3a6:	89 04 24             	mov    %eax,(%esp)
 854d3a9:	e8 e4 01 00 00       	call   854d592 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE6insertERKS4_>
 854d3ae:	83 ec 04             	sub    $0x4,%esp
 854d3b1:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 854d3b5:	83 f0 01             	xor    $0x1,%eax
 854d3b8:	84 c0                	test   %al,%al
 854d3ba:	74 42                	je     854d3fe <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1b2>
 854d3bc:	0f b6 55 c4          	movzbl -0x3c(%ebp),%edx
 854d3c0:	8b 45 10             	mov    0x10(%ebp),%eax
 854d3c3:	89 54 24 18          	mov    %edx,0x18(%esp)
 854d3c7:	89 44 24 14          	mov    %eax,0x14(%esp)
 854d3cb:	c7 44 24 10 e4 df c9 	movl   $0x8c9dfe4,0x10(%esp)
 854d3d2:	08 
 854d3d3:	c7 44 24 0c c7 00 00 	movl   $0xc7,0xc(%esp)
 854d3da:	00 
 854d3db:	c7 44 24 08 20 ec c9 	movl   $0x8c9ec20,0x8(%esp)
 854d3e2:	08 
 854d3e3:	c7 44 24 04 d0 df c9 	movl   $0x8c9dfd0,0x4(%esp)
 854d3ea:	08 
 854d3eb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 854d3f2:	e8 13 68 58 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 854d3f7:	b8 00 00 00 00       	mov    $0x0,%eax
 854d3fc:	eb 10                	jmp    854d40e <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb+0x1c2>
 854d3fe:	8b 45 08             	mov    0x8(%ebp),%eax
 854d401:	89 04 24             	mov    %eax,(%esp)
 854d404:	e8 bb b7 b7 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 854d409:	b8 01 00 00 00       	mov    $0x1,%eax
 854d40e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 854d411:	83 c4 00             	add    $0x0,%esp
 854d414:	5b                   	pop    %ebx
 854d415:	5e                   	pop    %esi
 854d416:	5d                   	pop    %ebp
 854d417:	c3                   	ret

```

```c
// CKillMonsterInfo::RegisterMonsterKill @ 0x854d24c

/* CKillMonsterInfo::RegisterMonsterKill(std::map<unsigned int, unsigned char, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned char> > >&, unsigned int, unsigned
   char, bool) */

undefined4 __thiscall
CKillMonsterInfo::RegisterMonsterKill
          (CKillMonsterInfo *this,map *param_1,uint param_2,uchar param_3,bool param_4)

{
  byte bVar1;
  uint uVar2;
  uchar uVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined3 in_stack_00000011;
  undefined3 in_stack_00000015;
  _Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>> local_38 [4];
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  local_34 [4];
  pair local_30 [4];
  char local_2c;
  pair<unsigned_int_const,unsigned_char> local_28 [8];
  uint local_20 [2];
  undefined1 local_15;
  int local_14;
  int local_10;
  
  uVar3 = param_3;
  uVar2 = param_2;
  if (param_3 < 5) {
    if (param_4) {
      iVar7 = G_CDataManager();
      local_10 = CAICharacterList::get(*(CAICharacterList **)(iVar7 + 0x869c),uVar2);
      if (local_10 == 0) {
        return 0;
      }
    }
    else {
      iVar7 = G_CDataManager();
      local_14 = CDataManager::find_monster(iVar7);
      if (local_14 == 0) {
        return 0;
      }
    }
    std::
    map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
    ::find((uint *)local_38);
    std::
    map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
    ::end(local_34);
    cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator!=
                      (local_38,(_Rb_tree_iterator *)local_34);
    if (cVar4 == '\0') {
      local_15 = GetDungeonDifficultyFlag(this,uVar3);
      std::make_pair<unsigned_int&,unsigned_char>(local_20,(uchar *)&param_2);
      std::pair<unsigned_int_const,unsigned_char>::pair<unsigned_int,unsigned_char>
                (local_28,(pair *)local_20);
      std::
      map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
      ::insert(local_30);
      if (local_2c != '\x01') {
        LogManager::logFormat
                  (1,"KillMonsterInfo.cpp",
                   "bool CKillMonsterInfo::RegisterMonsterKill(killMonsterMap&, unsigned int, unsigned char, bool)"
                   ,199,"KillMonsterInfo::RegisterMonsterKill Fail(%u, %u)",param_2,(uint)uVar3);
        return 0;
      }
      charac_expand::CData::alter((CData *)this);
    }
    else {
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_char>>::operator->
                        (local_38);
      bVar1 = *(byte *)(iVar7 + 4);
      bVar5 = GetDungeonDifficultyFlag(this,uVar3);
      *(byte *)(iVar7 + 4) = bVar5 | bVar1;
      charac_expand::CData::alter((CData *)this);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## RegisterNamedKill

```asm
// === 0854d452 CKillMonsterInfo::RegisterNamedKill  [0x0854d452-0x854d48b] ===
 854d452:	55                   	push   %ebp
 854d453:	89 e5                	mov    %esp,%ebp
 854d455:	83 ec 38             	sub    $0x38,%esp
 854d458:	8b 45 10             	mov    0x10(%ebp),%eax
 854d45b:	88 45 f4             	mov    %al,-0xc(%ebp)
 854d45e:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 854d462:	8b 55 08             	mov    0x8(%ebp),%edx
 854d465:	83 c2 20             	add    $0x20,%edx
 854d468:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854d46f:	00 
 854d470:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854d474:	8b 45 0c             	mov    0xc(%ebp),%eax
 854d477:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d47b:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d47f:	8b 45 08             	mov    0x8(%ebp),%eax
 854d482:	89 04 24             	mov    %eax,(%esp)
 854d485:	e8 c2 fd ff ff       	call   854d24c <_ZN16CKillMonsterInfo19RegisterMonsterKillERSt3mapIjhSt4lessIjESaISt4pairIKjhEEEjhb>
 854d48a:	c9                   	leave
 854d48b:	c3                   	ret

```

```c
// CKillMonsterInfo::RegisterNamedKill @ 0x854d452

/* CKillMonsterInfo::RegisterNamedKill(unsigned int, unsigned char) */

void __thiscall
CKillMonsterInfo::RegisterNamedKill(CKillMonsterInfo *this,uint param_1,uchar param_2)

{
  RegisterMonsterKill(this,(map *)(this + 0x20),param_1,param_2,false);
  return;
}

```

---

## _reset

```asm
// === 0854d0b8 CKillMonsterInfo::_reset  [0x0854d0b8-0x854d0e9] ===
 854d0b8:	55                   	push   %ebp
 854d0b9:	89 e5                	mov    %esp,%ebp
 854d0bb:	83 ec 18             	sub    $0x18,%esp
 854d0be:	8b 45 08             	mov    0x8(%ebp),%eax
 854d0c1:	83 c0 08             	add    $0x8,%eax
 854d0c4:	89 04 24             	mov    %eax,(%esp)
 854d0c7:	e8 d4 05 00 00       	call   854d6a0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE5clearEv>
 854d0cc:	8b 45 08             	mov    0x8(%ebp),%eax
 854d0cf:	83 c0 20             	add    $0x20,%eax
 854d0d2:	89 04 24             	mov    %eax,(%esp)
 854d0d5:	e8 c6 05 00 00       	call   854d6a0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE5clearEv>
 854d0da:	8b 45 08             	mov    0x8(%ebp),%eax
 854d0dd:	83 c0 38             	add    $0x38,%eax
 854d0e0:	89 04 24             	mov    %eax,(%esp)
 854d0e3:	e8 b8 05 00 00       	call   854d6a0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEE5clearEv>
 854d0e8:	c9                   	leave
 854d0e9:	c3                   	ret

```

```c
// CKillMonsterInfo::_reset @ 0x854d0b8

/* CKillMonsterInfo::_reset() */

void __thiscall CKillMonsterInfo::_reset(CKillMonsterInfo *this)

{
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 8));
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 0x20));
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 0x38));
  return;
}

```

---

## _saveData

```asm
// === 0854cf16 CKillMonsterInfo::_saveData  [0x0854cf16-0x854d0b7] ===
 854cf16:	55                   	push   %ebp
 854cf17:	89 e5                	mov    %esp,%ebp
 854cf19:	56                   	push   %esi
 854cf1a:	53                   	push   %ebx
 854cf1b:	83 ec 20             	sub    $0x20,%esp
 854cf1e:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 854cf23:	c7 44 24 08 6b 00 00 	movl   $0x6b,0x8(%esp)
 854cf2a:	00 
 854cf2b:	c7 44 24 04 d0 df c9 	movl   $0x8c9dfd0,0x4(%esp)
 854cf32:	08 
 854cf33:	89 04 24             	mov    %eax,(%esp)
 854cf36:	e8 27 33 d4 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 854cf3b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 854cf42:	00 
 854cf43:	89 44 24 04          	mov    %eax,0x4(%esp)
 854cf47:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cf4a:	89 04 24             	mov    %eax,(%esp)
 854cf4d:	e8 d4 bc b7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 854cf52:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cf55:	89 04 24             	mov    %eax,(%esp)
 854cf58:	e8 e9 bc b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 854cf5d:	c7 44 24 04 81 02 00 	movl   $0x281,0x4(%esp)
 854cf64:	00 
 854cf65:	89 04 24             	mov    %eax,(%esp)
 854cf68:	e8 e9 bc b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 854cf6d:	8b 45 0c             	mov    0xc(%ebp),%eax
 854cf70:	89 04 24             	mov    %eax,(%esp)
 854cf73:	e8 1e bd b7 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 854cf78:	89 c3                	mov    %eax,%ebx
 854cf7a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cf7d:	89 04 24             	mov    %eax,(%esp)
 854cf80:	e8 c1 bc b7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 854cf85:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 854cf89:	89 04 24             	mov    %eax,(%esp)
 854cf8c:	e8 c5 bc b7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 854cf91:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854cf94:	89 04 24             	mov    %eax,(%esp)
 854cf97:	e8 b2 bc b7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 854cf9c:	89 04 24             	mov    %eax,(%esp)
 854cf9f:	e8 10 9e ce ff       	call   8236db4 <_ZN12CStreamGuard11GetInBufferI26SIG_LOAD_KILL_MONSTER_INFOEEPT_v>
 854cfa4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854cfa7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 854cfab:	75 0a                	jne    854cfb7 <_ZN16CKillMonsterInfo9_saveDataEP5CUser+0xa1>
 854cfad:	bb 00 00 00 00       	mov    $0x0,%ebx
 854cfb2:	e9 ed 00 00 00       	jmp    854d0a4 <_ZN16CKillMonsterInfo9_saveDataEP5CUser+0x18e>
 854cfb7:	c7 44 24 08 cc af 00 	movl   $0xafcc,0x8(%esp)
 854cfbe:	00 
 854cfbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 854cfc6:	00 
 854cfc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854cfca:	89 04 24             	mov    %eax,(%esp)
 854cfcd:	e8 ee 0c b3 ff       	call   807dcc0 <memset@plt>
 854cfd2:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 854cfd9:	ff 
 854cfda:	8b 45 0c             	mov    0xc(%ebp),%eax
 854cfdd:	89 04 24             	mov    %eax,(%esp)
 854cfe0:	e8 bb 0f 10 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 854cfe5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 854cfe8:	89 82 c8 af 00 00    	mov    %eax,0xafc8(%edx)
 854cfee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854cff1:	8b 55 08             	mov    0x8(%ebp),%edx
 854cff4:	83 c2 08             	add    $0x8,%edx
 854cff7:	c7 44 24 0c dc 05 00 	movl   $0x5dc,0xc(%esp)
 854cffe:	00 
 854cfff:	89 44 24 08          	mov    %eax,0x8(%esp)
 854d003:	89 54 24 04          	mov    %edx,0x4(%esp)
 854d007:	8b 45 08             	mov    0x8(%ebp),%eax
 854d00a:	89 04 24             	mov    %eax,(%esp)
 854d00d:	e8 aa fc ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854d012:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854d015:	8d 90 4c 1d 00 00    	lea    0x1d4c(%eax),%edx
 854d01b:	8b 45 08             	mov    0x8(%ebp),%eax
 854d01e:	83 c0 20             	add    $0x20,%eax
 854d021:	c7 44 24 0c 70 17 00 	movl   $0x1770,0xc(%esp)
 854d028:	00 
 854d029:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d02d:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d031:	8b 45 08             	mov    0x8(%ebp),%eax
 854d034:	89 04 24             	mov    %eax,(%esp)
 854d037:	e8 80 fc ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854d03c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854d03f:	8d 90 7c 92 00 00    	lea    0x927c(%eax),%edx
 854d045:	8b 45 08             	mov    0x8(%ebp),%eax
 854d048:	83 c0 38             	add    $0x38,%eax
 854d04b:	c7 44 24 0c dc 05 00 	movl   $0x5dc,0xc(%esp)
 854d052:	00 
 854d053:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d057:	89 44 24 04          	mov    %eax,0x4(%esp)
 854d05b:	8b 45 08             	mov    0x8(%ebp),%eax
 854d05e:	89 04 24             	mov    %eax,(%esp)
 854d061:	e8 56 fc ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854d066:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 854d06b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 854d06e:	89 54 24 08          	mov    %edx,0x8(%esp)
 854d072:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 854d079:	00 
 854d07a:	89 04 24             	mov    %eax,(%esp)
 854d07d:	e8 5c 3f 02 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 854d082:	bb 01 00 00 00       	mov    $0x1,%ebx
 854d087:	eb 1b                	jmp    854d0a4 <_ZN16CKillMonsterInfo9_saveDataEP5CUser+0x18e>
 854d089:	89 d3                	mov    %edx,%ebx
 854d08b:	89 c6                	mov    %eax,%esi
 854d08d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854d090:	89 04 24             	mov    %eax,(%esp)
 854d093:	e8 3a f8 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 854d098:	89 f0                	mov    %esi,%eax
 854d09a:	89 da                	mov    %ebx,%edx
 854d09c:	89 04 24             	mov    %eax,(%esp)
 854d09f:	e8 ac 66 59 00       	call   8ae3750 <_Unwind_Resume>
 854d0a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 854d0a7:	89 04 24             	mov    %eax,(%esp)
 854d0aa:	e8 23 f8 0c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 854d0af:	89 d8                	mov    %ebx,%eax
 854d0b1:	83 c4 20             	add    $0x20,%esp
 854d0b4:	5b                   	pop    %ebx
 854d0b5:	5e                   	pop    %esi
 854d0b6:	5d                   	pop    %ebp
 854d0b7:	c3                   	ret

```

```c
// CKillMonsterInfo::_saveData @ 0x854cf16

/* CKillMonsterInfo::_saveData(CUser*) */

bool __thiscall CKillMonsterInfo::_saveData(CKillMonsterInfo *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"KillMonsterInfo.cpp",0x6b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0854cf68 to 0854d081 has its CatchHandler @ 0854d089 */
  CStreamGuard::operator<<(pCVar2,0x281);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_KILL_MONSTER_INFO>(pCVar2);
  bVar5 = local_10 != (SIG_LOAD_KILL_MONSTER_INFO *)0x0;
  if (bVar5) {
    memset(local_10,0,0xafcc);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 45000) = uVar4;
    ConvertMapToStrcut(this,(map *)(this + 8),(stMonsterInfo_t *)local_10,0x5dc);
    ConvertMapToStrcut(this,(map *)(this + 0x20),(stMonsterInfo_t *)(local_10 + 0x1d4c),6000);
    ConvertMapToStrcut(this,(map *)(this + 0x38),(stMonsterInfo_t *)(local_10 + 0x927c),0x5dc);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}

```

---

## getData

```asm
// === 0854ce90 CKillMonsterInfo::getData  [0x0854ce90-0x854cf15] ===
 854ce90:	55                   	push   %ebp
 854ce91:	89 e5                	mov    %esp,%ebp
 854ce93:	83 ec 28             	sub    $0x28,%esp
 854ce96:	8b 45 0c             	mov    0xc(%ebp),%eax
 854ce99:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854ce9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854ce9f:	8b 55 08             	mov    0x8(%ebp),%edx
 854cea2:	83 c2 08             	add    $0x8,%edx
 854cea5:	c7 44 24 0c dc 05 00 	movl   $0x5dc,0xc(%esp)
 854ceac:	00 
 854cead:	89 44 24 08          	mov    %eax,0x8(%esp)
 854ceb1:	89 54 24 04          	mov    %edx,0x4(%esp)
 854ceb5:	8b 45 08             	mov    0x8(%ebp),%eax
 854ceb8:	89 04 24             	mov    %eax,(%esp)
 854cebb:	e8 fc fd ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854cec0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854cec3:	8d 90 4c 1d 00 00    	lea    0x1d4c(%eax),%edx
 854cec9:	8b 45 08             	mov    0x8(%ebp),%eax
 854cecc:	83 c0 20             	add    $0x20,%eax
 854cecf:	c7 44 24 0c 70 17 00 	movl   $0x1770,0xc(%esp)
 854ced6:	00 
 854ced7:	89 54 24 08          	mov    %edx,0x8(%esp)
 854cedb:	89 44 24 04          	mov    %eax,0x4(%esp)
 854cedf:	8b 45 08             	mov    0x8(%ebp),%eax
 854cee2:	89 04 24             	mov    %eax,(%esp)
 854cee5:	e8 d2 fd ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854ceea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854ceed:	8d 90 7c 92 00 00    	lea    0x927c(%eax),%edx
 854cef3:	8b 45 08             	mov    0x8(%ebp),%eax
 854cef6:	83 c0 38             	add    $0x38,%eax
 854cef9:	c7 44 24 0c dc 05 00 	movl   $0x5dc,0xc(%esp)
 854cf00:	00 
 854cf01:	89 54 24 08          	mov    %edx,0x8(%esp)
 854cf05:	89 44 24 04          	mov    %eax,0x4(%esp)
 854cf09:	8b 45 08             	mov    0x8(%ebp),%eax
 854cf0c:	89 04 24             	mov    %eax,(%esp)
 854cf0f:	e8 a8 fd ff ff       	call   854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>
 854cf14:	c9                   	leave
 854cf15:	c3                   	ret

```

```c
// CKillMonsterInfo::getData @ 0x854ce90

/* CKillMonsterInfo::getData(char*) const */

void __thiscall CKillMonsterInfo::getData(CKillMonsterInfo *this,char *param_1)

{
  ConvertMapToStrcut(this,(map *)(this + 8),(stMonsterInfo_t *)param_1,0x5dc);
  ConvertMapToStrcut(this,(map *)(this + 0x20),(stMonsterInfo_t *)(param_1 + 0x1d4c),6000);
  ConvertMapToStrcut(this,(map *)(this + 0x38),(stMonsterInfo_t *)(param_1 + 0x927c),0x5dc);
  return;
}

```

---

## loadData

```asm
// === 0854cddc CKillMonsterInfo::loadData  [0x0854cddc-0x854ce8f] ===
 854cddc:	55                   	push   %ebp
 854cddd:	89 e5                	mov    %esp,%ebp
 854cddf:	83 ec 38             	sub    $0x38,%esp
 854cde2:	8b 45 08             	mov    0x8(%ebp),%eax
 854cde5:	8b 00                	mov    (%eax),%eax
 854cde7:	83 c0 1c             	add    $0x1c,%eax
 854cdea:	8b 10                	mov    (%eax),%edx
 854cdec:	8b 45 08             	mov    0x8(%ebp),%eax
 854cdef:	89 04 24             	mov    %eax,(%esp)
 854cdf2:	ff d2                	call   *%edx
 854cdf4:	8b 45 10             	mov    0x10(%ebp),%eax
 854cdf7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854cdfa:	8b 45 08             	mov    0x8(%ebp),%eax
 854cdfd:	8d 50 08             	lea    0x8(%eax),%edx
 854ce00:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854ce03:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854ce0a:	00 
 854ce0b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ce0f:	c7 44 24 08 dc 05 00 	movl   $0x5dc,0x8(%esp)
 854ce16:	00 
 854ce17:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ce1b:	8b 45 08             	mov    0x8(%ebp),%eax
 854ce1e:	89 04 24             	mov    %eax,(%esp)
 854ce21:	e8 1c fd ff ff       	call   854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>
 854ce26:	8b 45 08             	mov    0x8(%ebp),%eax
 854ce29:	8d 50 20             	lea    0x20(%eax),%edx
 854ce2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854ce2f:	05 4c 1d 00 00       	add    $0x1d4c,%eax
 854ce34:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 854ce3b:	00 
 854ce3c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ce40:	c7 44 24 08 70 17 00 	movl   $0x1770,0x8(%esp)
 854ce47:	00 
 854ce48:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ce4c:	8b 45 08             	mov    0x8(%ebp),%eax
 854ce4f:	89 04 24             	mov    %eax,(%esp)
 854ce52:	e8 eb fc ff ff       	call   854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>
 854ce57:	8b 45 08             	mov    0x8(%ebp),%eax
 854ce5a:	8d 50 38             	lea    0x38(%eax),%edx
 854ce5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854ce60:	05 7c 92 00 00       	add    $0x927c,%eax
 854ce65:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 854ce6c:	00 
 854ce6d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 854ce71:	c7 44 24 08 dc 05 00 	movl   $0x5dc,0x8(%esp)
 854ce78:	00 
 854ce79:	89 44 24 04          	mov    %eax,0x4(%esp)
 854ce7d:	8b 45 08             	mov    0x8(%ebp),%eax
 854ce80:	89 04 24             	mov    %eax,(%esp)
 854ce83:	e8 ba fc ff ff       	call   854cb42 <_ZN16CKillMonsterInfo18ConvertStructToMapEP15stMonsterInfo_tjRSt3mapIjhSt4lessIjESaISt4pairIKjhEEEb>
 854ce88:	b8 01 00 00 00       	mov    $0x1,%eax
 854ce8d:	c9                   	leave
 854ce8e:	c3                   	ret
 854ce8f:	90                   	nop

```

```c
// CKillMonsterInfo::loadData @ 0x854cddc

/* CKillMonsterInfo::loadData(CUser*, char*) */

undefined4 __thiscall
CKillMonsterInfo::loadData(CKillMonsterInfo *this,CUser *param_1,char *param_2)

{
  (**(code **)(*(int *)this + 0x1c))(this);
  ConvertStructToMap(this,(stMonsterInfo_t *)param_2,0x5dc,(map *)(this + 8),false);
  ConvertStructToMap(this,(stMonsterInfo_t *)(param_2 + 0x1d4c),6000,(map *)(this + 0x20),false);
  ConvertStructToMap(this,(stMonsterInfo_t *)(param_2 + 0x927c),0x5dc,(map *)(this + 0x38),true);
  return 1;
}

```

---

## ~CKillMonsterInfo

```asm
// === 0854ca72 CKillMonsterInfo::~CKillMonsterInfo  [0x0854ca72-0x854cb23] ===
 854ca72:	55                   	push   %ebp
 854ca73:	89 e5                	mov    %esp,%ebp
 854ca75:	56                   	push   %esi
 854ca76:	53                   	push   %ebx
 854ca77:	83 ec 10             	sub    $0x10,%esp
 854ca7a:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca7d:	c7 00 e8 ec c9 08    	movl   $0x8c9ece8,(%eax)
 854ca83:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca86:	83 c0 38             	add    $0x38,%eax
 854ca89:	89 04 24             	mov    %eax,(%esp)
 854ca8c:	e8 1f fb b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854ca91:	eb 18                	jmp    854caab <_ZN16CKillMonsterInfoD1Ev+0x39>
 854ca93:	89 d3                	mov    %edx,%ebx
 854ca95:	89 c6                	mov    %eax,%esi
 854ca97:	8b 45 08             	mov    0x8(%ebp),%eax
 854ca9a:	83 c0 20             	add    $0x20,%eax
 854ca9d:	89 04 24             	mov    %eax,(%esp)
 854caa0:	e8 0b fb b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854caa5:	89 f0                	mov    %esi,%eax
 854caa7:	89 da                	mov    %ebx,%edx
 854caa9:	eb 10                	jmp    854cabb <_ZN16CKillMonsterInfoD1Ev+0x49>
 854caab:	8b 45 08             	mov    0x8(%ebp),%eax
 854caae:	83 c0 20             	add    $0x20,%eax
 854cab1:	89 04 24             	mov    %eax,(%esp)
 854cab4:	e8 f7 fa b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854cab9:	eb 18                	jmp    854cad3 <_ZN16CKillMonsterInfoD1Ev+0x61>
 854cabb:	89 d3                	mov    %edx,%ebx
 854cabd:	89 c6                	mov    %eax,%esi
 854cabf:	8b 45 08             	mov    0x8(%ebp),%eax
 854cac2:	83 c0 08             	add    $0x8,%eax
 854cac5:	89 04 24             	mov    %eax,(%esp)
 854cac8:	e8 e3 fa b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854cacd:	89 f0                	mov    %esi,%eax
 854cacf:	89 da                	mov    %ebx,%edx
 854cad1:	eb 10                	jmp    854cae3 <_ZN16CKillMonsterInfoD1Ev+0x71>
 854cad3:	8b 45 08             	mov    0x8(%ebp),%eax
 854cad6:	83 c0 08             	add    $0x8,%eax
 854cad9:	89 04 24             	mov    %eax,(%esp)
 854cadc:	e8 cf fa b3 ff       	call   808c5b0 <_ZNSt3mapIjhSt4lessIjESaISt4pairIKjhEEED1Ev>
 854cae1:	eb 1b                	jmp    854cafe <_ZN16CKillMonsterInfoD1Ev+0x8c>
 854cae3:	89 d3                	mov    %edx,%ebx
 854cae5:	89 c6                	mov    %eax,%esi
 854cae7:	8b 45 08             	mov    0x8(%ebp),%eax
 854caea:	89 04 24             	mov    %eax,(%esp)
 854caed:	e8 f0 c0 b7 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 854caf2:	89 f0                	mov    %esi,%eax
 854caf4:	89 da                	mov    %ebx,%edx
 854caf6:	89 04 24             	mov    %eax,(%esp)
 854caf9:	e8 52 6c 59 00       	call   8ae3750 <_Unwind_Resume>
 854cafe:	8b 45 08             	mov    0x8(%ebp),%eax
 854cb01:	89 04 24             	mov    %eax,(%esp)
 854cb04:	e8 d9 c0 b7 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 854cb09:	b8 00 00 00 00       	mov    $0x0,%eax
 854cb0e:	84 c0                	test   %al,%al
 854cb10:	74 0b                	je     854cb1d <_ZN16CKillMonsterInfoD1Ev+0xab>
 854cb12:	8b 45 08             	mov    0x8(%ebp),%eax
 854cb15:	89 04 24             	mov    %eax,(%esp)
 854cb18:	e8 d3 79 1d 00       	call   87244f0 <_ZdlPv>
 854cb1d:	83 c4 10             	add    $0x10,%esp
 854cb20:	5b                   	pop    %ebx
 854cb21:	5e                   	pop    %esi
 854cb22:	5d                   	pop    %ebp
 854cb23:	c3                   	ret

```

```c
// CKillMonsterInfo::~CKillMonsterInfo @ 0x854ca72

/* WARNING: Removing unreachable block (ram,0x0854cb12) */
/* CKillMonsterInfo::~CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::~CKillMonsterInfo(CKillMonsterInfo *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08c9ece8;
                    /* try { // try from 0854ca8c to 0854ca90 has its CatchHandler @ 0854ca93 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 0x38));
                    /* try { // try from 0854cab4 to 0854cab8 has its CatchHandler @ 0854cabb */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 0x20));
                    /* try { // try from 0854cadc to 0854cae0 has its CatchHandler @ 0854cae3 */
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::~map((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CKillMonsterInfo_0854cb24

```asm
// === 0854cb24 CKillMonsterInfo::~CKillMonsterInfo  [0x0854cb24-0x854cb41] ===
 854cb24:	55                   	push   %ebp
 854cb25:	89 e5                	mov    %esp,%ebp
 854cb27:	83 ec 18             	sub    $0x18,%esp
 854cb2a:	8b 45 08             	mov    0x8(%ebp),%eax
 854cb2d:	89 04 24             	mov    %eax,(%esp)
 854cb30:	e8 3d ff ff ff       	call   854ca72 <_ZN16CKillMonsterInfoD1Ev>
 854cb35:	8b 45 08             	mov    0x8(%ebp),%eax
 854cb38:	89 04 24             	mov    %eax,(%esp)
 854cb3b:	e8 b0 79 1d 00       	call   87244f0 <_ZdlPv>
 854cb40:	c9                   	leave
 854cb41:	c3                   	ret

```

```c
// CKillMonsterInfo::~CKillMonsterInfo @ 0x854cb24

/* CKillMonsterInfo::~CKillMonsterInfo() */

void __thiscall CKillMonsterInfo::~CKillMonsterInfo(CKillMonsterInfo *this)

{
  ~CKillMonsterInfo(this);
  operator_delete(this);
  return;
}

```


# ARAD__SCRIPT__AvatarRecharge

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## AvatarRecharge

```asm
// === 088b0dd0 ARAD::SCRIPT::AvatarRecharge::AvatarRecharge  [0x088b0dd0-0x88b0e45] ===
 88b0dd0:	55                   	push   %ebp
 88b0dd1:	89 e5                	mov    %esp,%ebp
 88b0dd3:	56                   	push   %esi
 88b0dd4:	53                   	push   %ebx
 88b0dd5:	83 ec 10             	sub    $0x10,%esp
 88b0dd8:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0ddb:	83 c0 04             	add    $0x4,%eax
 88b0dde:	89 04 24             	mov    %eax,(%esp)
 88b0de1:	e8 7e 5e 81 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88b0de6:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0de9:	83 c0 1c             	add    $0x1c,%eax
 88b0dec:	89 04 24             	mov    %eax,(%esp)
 88b0def:	e8 70 5e 81 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88b0df4:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0df7:	83 c0 34             	add    $0x34,%eax
 88b0dfa:	89 04 24             	mov    %eax,(%esp)
 88b0dfd:	e8 62 5e 81 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88b0e02:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e05:	c6 40 4c 00          	movb   $0x0,0x4c(%eax)
 88b0e09:	83 c4 10             	add    $0x10,%esp
 88b0e0c:	5b                   	pop    %ebx
 88b0e0d:	5e                   	pop    %esi
 88b0e0e:	5d                   	pop    %ebp
 88b0e0f:	c3                   	ret
 88b0e10:	89 d3                	mov    %edx,%ebx
 88b0e12:	89 c6                	mov    %eax,%esi
 88b0e14:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e17:	83 c0 1c             	add    $0x1c,%eax
 88b0e1a:	89 04 24             	mov    %eax,(%esp)
 88b0e1d:	e8 a4 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e22:	89 f0                	mov    %esi,%eax
 88b0e24:	89 da                	mov    %ebx,%edx
 88b0e26:	eb 00                	jmp    88b0e28 <_ZN4ARAD6SCRIPT14AvatarRechargeC1Ev+0x58>
 88b0e28:	89 d3                	mov    %edx,%ebx
 88b0e2a:	89 c6                	mov    %eax,%esi
 88b0e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e2f:	83 c0 04             	add    $0x4,%eax
 88b0e32:	89 04 24             	mov    %eax,(%esp)
 88b0e35:	e8 8c 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e3a:	89 f0                	mov    %esi,%eax
 88b0e3c:	89 da                	mov    %ebx,%edx
 88b0e3e:	89 04 24             	mov    %eax,(%esp)
 88b0e41:	e8 0a 29 23 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::SCRIPT::AvatarRecharge::AvatarRecharge @ 0x88b0dd0

/* ARAD::SCRIPT::AvatarRecharge::AvatarRecharge() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::AvatarRecharge(AvatarRecharge *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
                    /* try { // try from 088b0def to 088b0df3 has its CatchHandler @ 088b0e28 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 088b0dfd to 088b0e01 has its CatchHandler @ 088b0e10 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  this[0x4c] = (AvatarRecharge)0x0;
  return;
}

```

---

## IsEmblemRechargeStone

```asm
// === 088b13a6 ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone  [0x088b13a6-0x88b1407] ===
 88b13a6:	55                   	push   %ebp
 88b13a7:	89 e5                	mov    %esp,%ebp
 88b13a9:	83 ec 28             	sub    $0x28,%esp
 88b13ac:	8b 45 08             	mov    0x8(%ebp),%eax
 88b13af:	8d 50 04             	lea    0x4(%eax),%edx
 88b13b2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b13b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b13b9:	89 04 24             	mov    %eax,(%esp)
 88b13bc:	e8 59 bf 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b13c1:	83 ec 04             	sub    $0x4,%esp
 88b13c4:	8b 45 08             	mov    0x8(%ebp),%eax
 88b13c7:	8d 48 04             	lea    0x4(%eax),%ecx
 88b13ca:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b13cd:	8d 55 0c             	lea    0xc(%ebp),%edx
 88b13d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b13d4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b13d8:	89 04 24             	mov    %eax,(%esp)
 88b13db:	e8 0e bf 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b13e0:	83 ec 04             	sub    $0x4,%esp
 88b13e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b13e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b13ea:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b13ed:	89 04 24             	mov    %eax,(%esp)
 88b13f0:	e8 d3 8f 82 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88b13f5:	84 c0                	test   %al,%al
 88b13f7:	74 07                	je     88b1400 <_ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi+0x5a>
 88b13f9:	b8 01 00 00 00       	mov    $0x1,%eax
 88b13fe:	eb 05                	jmp    88b1405 <_ZN4ARAD6SCRIPT14AvatarRecharge21IsEmblemRechargeStoneEi+0x5f>
 88b1400:	b8 00 00 00 00       	mov    $0x0,%eax
 88b1405:	c9                   	leave
 88b1406:	c3                   	ret
 88b1407:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone @ 0x88b13a6

/* ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int) */

bool ARAD::SCRIPT::AvatarRecharge::IsEmblemRechargeStone(int param_1)

{
  char cVar1;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 != '\0';
}

```

---

## clearScript

```asm
// === 088b12d8 ARAD::SCRIPT::AvatarRecharge::clearScript  [0x088b12d8-0x88b1313] ===
 88b12d8:	55                   	push   %ebp
 88b12d9:	89 e5                	mov    %esp,%ebp
 88b12db:	83 ec 18             	sub    $0x18,%esp
 88b12de:	8b 45 08             	mov    0x8(%ebp),%eax
 88b12e1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88b12e7:	8b 45 08             	mov    0x8(%ebp),%eax
 88b12ea:	83 c0 04             	add    $0x4,%eax
 88b12ed:	89 04 24             	mov    %eax,(%esp)
 88b12f0:	e8 e9 59 81 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88b12f5:	8b 45 08             	mov    0x8(%ebp),%eax
 88b12f8:	83 c0 1c             	add    $0x1c,%eax
 88b12fb:	89 04 24             	mov    %eax,(%esp)
 88b12fe:	e8 db 59 81 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88b1303:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1306:	83 c0 34             	add    $0x34,%eax
 88b1309:	89 04 24             	mov    %eax,(%esp)
 88b130c:	e8 cd 59 81 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88b1311:	c9                   	leave
 88b1312:	c3                   	ret
 88b1313:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarRecharge::clearScript @ 0x88b12d8

/* ARAD::SCRIPT::AvatarRecharge::clearScript() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::clearScript(AvatarRecharge *this)

{
  *(undefined4 *)this = 0;
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
  return;
}

```

---

## getAvatarRecharageLimit

```asm
// === 088b1314 ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit  [0x088b1314-0x88b131d] ===
 88b1314:	55                   	push   %ebp
 88b1315:	89 e5                	mov    %esp,%ebp
 88b1317:	8b 45 08             	mov    0x8(%ebp),%eax
 88b131a:	8b 00                	mov    (%eax),%eax
 88b131c:	5d                   	pop    %ebp
 88b131d:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit @ 0x88b1314

/* ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit() */

undefined4 __thiscall ARAD::SCRIPT::AvatarRecharge::getAvatarRecharageLimit(AvatarRecharge *this)

{
  return *(undefined4 *)this;
}

```

---

## getEmblemRecharge

```asm
// === 088b132a ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge  [0x088b132a-0x88b13a5] ===
 88b132a:	55                   	push   %ebp
 88b132b:	89 e5                	mov    %esp,%ebp
 88b132d:	83 ec 38             	sub    $0x38,%esp
 88b1330:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1333:	89 04 24             	mov    %eax,(%esp)
 88b1336:	e8 5d 95 84 ff       	call   80fa898 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEC1Ev>
 88b133b:	8b 45 08             	mov    0x8(%ebp),%eax
 88b133e:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88b1341:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88b1344:	8d 55 0c             	lea    0xc(%ebp),%edx
 88b1347:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b134b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b134f:	89 04 24             	mov    %eax,(%esp)
 88b1352:	e8 97 bf 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b1357:	83 ec 04             	sub    $0x4,%esp
 88b135a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88b135d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88b1360:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1363:	8d 50 1c             	lea    0x1c(%eax),%edx
 88b1366:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1369:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b136d:	89 04 24             	mov    %eax,(%esp)
 88b1370:	e8 a5 bf 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b1375:	83 ec 04             	sub    $0x4,%esp
 88b1378:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b137b:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b137f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1382:	89 04 24             	mov    %eax,(%esp)
 88b1385:	e8 3e 90 82 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88b138a:	84 c0                	test   %al,%al
 88b138c:	74 10                	je     88b139e <_ZN4ARAD6SCRIPT14AvatarRecharge17getEmblemRechargeEi+0x74>
 88b138e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1391:	89 04 24             	mov    %eax,(%esp)
 88b1394:	e8 a7 bf 81 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88b1399:	8b 40 04             	mov    0x4(%eax),%eax
 88b139c:	eb 05                	jmp    88b13a3 <_ZN4ARAD6SCRIPT14AvatarRecharge17getEmblemRechargeEi+0x79>
 88b139e:	b8 00 00 00 00       	mov    $0x0,%eax
 88b13a3:	c9                   	leave
 88b13a4:	c3                   	ret
 88b13a5:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge @ 0x88b132a

/* ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int) */

undefined4 ARAD::SCRIPT::AvatarRecharge::getEmblemRecharge(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_20 [3];
  int local_14;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,int>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find(local_20);
  local_14 = local_20[0];
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)&local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getEmblemRechargeStoneInfo

```asm
// === 088b131e ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo  [0x088b131e-0x88b1329] ===
 88b131e:	55                   	push   %ebp
 88b131f:	89 e5                	mov    %esp,%ebp
 88b1321:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1324:	83 c0 04             	add    $0x4,%eax
 88b1327:	5d                   	pop    %ebp
 88b1328:	c3                   	ret
 88b1329:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo @ 0x88b131e

/* ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo() */

AvatarRecharge * __thiscall
ARAD::SCRIPT::AvatarRecharge::getEmblemRechargeStoneInfo(AvatarRecharge *this)

{
  return this + 4;
}

```

---

## loadScript

```asm
// === 088b0eba ARAD::SCRIPT::AvatarRecharge::loadScript  [0x088b0eba-0x88b12d7] ===
 88b0eba:	55                   	push   %ebp
 88b0ebb:	89 e5                	mov    %esp,%ebp
 88b0ebd:	56                   	push   %esi
 88b0ebe:	53                   	push   %ebx
 88b0ebf:	83 c4 80             	add    $0xffffff80,%esp
 88b0ec2:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0ec5:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 88b0ec9:	84 c0                	test   %al,%al
 88b0ecb:	74 0a                	je     88b0ed7 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x1d>
 88b0ecd:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b0ed2:	e9 f5 03 00 00       	jmp    88b12cc <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x412>
 88b0ed7:	c7 44 24 04 60 6f e0 	movl   $0x8e06f60,0x4(%esp)
 88b0ede:	08 
 88b0edf:	c7 04 24 78 6f e0 08 	movl   $0x8e06f78,(%esp)
 88b0ee6:	e8 3e ae 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b0eeb:	83 f0 01             	xor    $0x1,%eax
 88b0eee:	84 c0                	test   %al,%al
 88b0ef0:	74 0a                	je     88b0efc <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x42>
 88b0ef2:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 88b0ef7:	e9 d0 03 00 00       	jmp    88b12cc <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x412>
 88b0efc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b0eff:	89 04 24             	mov    %eax,(%esp)
 88b0f02:	e8 c9 56 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b0f07:	c6 45 ab 00          	movb   $0x0,-0x55(%ebp)
 88b0f0b:	c6 45 aa 00          	movb   $0x0,-0x56(%ebp)
 88b0f0f:	eb 01                	jmp    88b0f12 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x58>
 88b0f11:	90                   	nop
 88b0f12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b0f19:	00 
 88b0f1a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b0f1d:	89 04 24             	mov    %eax,(%esp)
 88b0f20:	e8 3a b9 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b0f25:	83 f0 01             	xor    $0x1,%eax
 88b0f28:	84 c0                	test   %al,%al
 88b0f2a:	0f 85 62 03 00 00    	jne    88b1292 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x3d8>
 88b0f30:	c7 44 24 04 8b 6f e0 	movl   $0x8e06f8b,0x4(%esp)
 88b0f37:	08 
 88b0f38:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b0f3b:	89 04 24             	mov    %eax,(%esp)
 88b0f3e:	e8 5e fa 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b0f43:	84 c0                	test   %al,%al
 88b0f45:	74 13                	je     88b0f5a <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0xa0>
 88b0f47:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b0f4e:	e8 28 b4 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b0f53:	8b 55 08             	mov    0x8(%ebp),%edx
 88b0f56:	89 02                	mov    %eax,(%edx)
 88b0f58:	eb b8                	jmp    88b0f12 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x58>
 88b0f5a:	c7 44 24 04 a3 6f e0 	movl   $0x8e06fa3,0x4(%esp)
 88b0f61:	08 
 88b0f62:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b0f65:	89 04 24             	mov    %eax,(%esp)
 88b0f68:	e8 34 fa 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b0f6d:	84 c0                	test   %al,%al
 88b0f6f:	0f 84 f3 00 00 00    	je     88b1068 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x1ae>
 88b0f75:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b0f7c:	00 
 88b0f7d:	8d 45 aa             	lea    -0x56(%ebp),%eax
 88b0f80:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b0f84:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b0f87:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b0f8b:	8d 45 ab             	lea    -0x55(%ebp),%eax
 88b0f8e:	89 04 24             	mov    %eax,(%esp)
 88b0f91:	e8 19 bf 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b0f96:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 88b0f99:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 88b0f9d:	84 c0                	test   %al,%al
 88b0f9f:	75 0b                	jne    88b0fac <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0xf2>
 88b0fa1:	0f b6 45 aa          	movzbl -0x56(%ebp),%eax
 88b0fa5:	83 f0 01             	xor    $0x1,%eax
 88b0fa8:	84 c0                	test   %al,%al
 88b0faa:	74 06                	je     88b0fb2 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0xf8>
 88b0fac:	90                   	nop
 88b0fad:	e9 60 ff ff ff       	jmp    88b0f12 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x58>
 88b0fb2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b0fb9:	e8 bd b3 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b0fbe:	89 45 a0             	mov    %eax,-0x60(%ebp)
 88b0fc1:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0fc4:	8d 50 04             	lea    0x4(%eax),%edx
 88b0fc7:	8d 45 b0             	lea    -0x50(%ebp),%eax
 88b0fca:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b0fce:	89 04 24             	mov    %eax,(%esp)
 88b0fd1:	e8 44 c3 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b0fd6:	83 ec 04             	sub    $0x4,%esp
 88b0fd9:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0fdc:	8d 48 04             	lea    0x4(%eax),%ecx
 88b0fdf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b0fe2:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 88b0fe5:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b0fe9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b0fed:	89 04 24             	mov    %eax,(%esp)
 88b0ff0:	e8 f9 c2 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b0ff5:	83 ec 04             	sub    $0x4,%esp
 88b0ff8:	8d 45 b0             	lea    -0x50(%ebp),%eax
 88b0ffb:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b0fff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1002:	89 04 24             	mov    %eax,(%esp)
 88b1005:	e8 e6 68 81 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 88b100a:	84 c0                	test   %al,%al
 88b100c:	74 3d                	je     88b104b <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x191>
 88b100e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 88b1011:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b1015:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 88b1018:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b101c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88b101f:	89 04 24             	mov    %eax,(%esp)
 88b1022:	e8 99 9a a4 ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 88b1027:	8b 45 08             	mov    0x8(%ebp),%eax
 88b102a:	8d 48 04             	lea    0x4(%eax),%ecx
 88b102d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88b1030:	8d 55 c0             	lea    -0x40(%ebp),%edx
 88b1033:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1037:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b103b:	89 04 24             	mov    %eax,(%esp)
 88b103e:	e8 0d 5d 81 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 88b1043:	83 ec 04             	sub    $0x4,%esp
 88b1046:	e9 2a ff ff ff       	jmp    88b0f75 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0xbb>
 88b104b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 88b104e:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1052:	c7 04 24 c0 6f e0 08 	movl   $0x8e06fc0,(%esp)
 88b1059:	e8 02 cb 7c ff       	call   807db60 <printf@plt>
 88b105e:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 88b1063:	e9 59 02 00 00       	jmp    88b12c1 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x407>
 88b1068:	c7 44 24 04 f5 6f e0 	movl   $0x8e06ff5,0x4(%esp)
 88b106f:	08 
 88b1070:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b1073:	89 04 24             	mov    %eax,(%esp)
 88b1076:	e8 26 f9 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b107b:	84 c0                	test   %al,%al
 88b107d:	0f 84 f3 00 00 00    	je     88b1176 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x2bc>
 88b1083:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b108a:	00 
 88b108b:	8d 45 aa             	lea    -0x56(%ebp),%eax
 88b108e:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b1092:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b1095:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1099:	8d 45 ab             	lea    -0x55(%ebp),%eax
 88b109c:	89 04 24             	mov    %eax,(%esp)
 88b109f:	e8 0b be 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b10a4:	89 45 9c             	mov    %eax,-0x64(%ebp)
 88b10a7:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 88b10ab:	84 c0                	test   %al,%al
 88b10ad:	75 0b                	jne    88b10ba <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x200>
 88b10af:	0f b6 45 aa          	movzbl -0x56(%ebp),%eax
 88b10b3:	83 f0 01             	xor    $0x1,%eax
 88b10b6:	84 c0                	test   %al,%al
 88b10b8:	74 06                	je     88b10c0 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x206>
 88b10ba:	90                   	nop
 88b10bb:	e9 52 fe ff ff       	jmp    88b0f12 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x58>
 88b10c0:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b10c7:	e8 af b2 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b10cc:	89 45 98             	mov    %eax,-0x68(%ebp)
 88b10cf:	8b 45 08             	mov    0x8(%ebp),%eax
 88b10d2:	8d 50 1c             	lea    0x1c(%eax),%edx
 88b10d5:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b10d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b10dc:	89 04 24             	mov    %eax,(%esp)
 88b10df:	e8 36 c2 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b10e4:	83 ec 04             	sub    $0x4,%esp
 88b10e7:	8b 45 08             	mov    0x8(%ebp),%eax
 88b10ea:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88b10ed:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b10f0:	8d 55 9c             	lea    -0x64(%ebp),%edx
 88b10f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b10f7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b10fb:	89 04 24             	mov    %eax,(%esp)
 88b10fe:	e8 eb c1 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b1103:	83 ec 04             	sub    $0x4,%esp
 88b1106:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1109:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b110d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88b1110:	89 04 24             	mov    %eax,(%esp)
 88b1113:	e8 d8 67 81 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 88b1118:	84 c0                	test   %al,%al
 88b111a:	74 3d                	je     88b1159 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x29f>
 88b111c:	8d 45 98             	lea    -0x68(%ebp),%eax
 88b111f:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b1123:	8d 45 9c             	lea    -0x64(%ebp),%eax
 88b1126:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b112a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b112d:	89 04 24             	mov    %eax,(%esp)
 88b1130:	e8 8b 99 a4 ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 88b1135:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1138:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88b113b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b113e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 88b1141:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1145:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b1149:	89 04 24             	mov    %eax,(%esp)
 88b114c:	e8 ff 5b 81 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 88b1151:	83 ec 04             	sub    $0x4,%esp
 88b1154:	e9 2a ff ff ff       	jmp    88b1083 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x1c9>
 88b1159:	8b 45 9c             	mov    -0x64(%ebp),%eax
 88b115c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1160:	c7 04 24 08 70 e0 08 	movl   $0x8e07008,(%esp)
 88b1167:	e8 f4 c9 7c ff       	call   807db60 <printf@plt>
 88b116c:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 88b1171:	e9 4b 01 00 00       	jmp    88b12c1 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x407>
 88b1176:	c7 44 24 04 2d 70 e0 	movl   $0x8e0702d,0x4(%esp)
 88b117d:	08 
 88b117e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b1181:	89 04 24             	mov    %eax,(%esp)
 88b1184:	e8 18 f8 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b1189:	84 c0                	test   %al,%al
 88b118b:	0f 84 80 fd ff ff    	je     88b0f11 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x57>
 88b1191:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b1198:	00 
 88b1199:	8d 45 aa             	lea    -0x56(%ebp),%eax
 88b119c:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b11a0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b11a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b11a7:	8d 45 ab             	lea    -0x55(%ebp),%eax
 88b11aa:	89 04 24             	mov    %eax,(%esp)
 88b11ad:	e8 fd bc 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b11b2:	89 45 94             	mov    %eax,-0x6c(%ebp)
 88b11b5:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 88b11b9:	84 c0                	test   %al,%al
 88b11bb:	75 0b                	jne    88b11c8 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x30e>
 88b11bd:	0f b6 45 aa          	movzbl -0x56(%ebp),%eax
 88b11c1:	83 f0 01             	xor    $0x1,%eax
 88b11c4:	84 c0                	test   %al,%al
 88b11c6:	74 05                	je     88b11cd <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x313>
 88b11c8:	e9 c0 00 00 00       	jmp    88b128d <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x3d3>
 88b11cd:	8b 45 94             	mov    -0x6c(%ebp),%eax
 88b11d0:	83 f8 07             	cmp    $0x7,%eax
 88b11d3:	7e 05                	jle    88b11da <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x320>
 88b11d5:	e9 b3 00 00 00       	jmp    88b128d <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x3d3>
 88b11da:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b11e1:	e8 95 b1 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b11e6:	89 45 90             	mov    %eax,-0x70(%ebp)
 88b11e9:	8b 45 08             	mov    0x8(%ebp),%eax
 88b11ec:	8d 50 34             	lea    0x34(%eax),%edx
 88b11ef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88b11f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b11f6:	89 04 24             	mov    %eax,(%esp)
 88b11f9:	e8 1c c1 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b11fe:	83 ec 04             	sub    $0x4,%esp
 88b1201:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1204:	8d 48 34             	lea    0x34(%eax),%ecx
 88b1207:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88b120a:	8d 55 94             	lea    -0x6c(%ebp),%edx
 88b120d:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1211:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b1215:	89 04 24             	mov    %eax,(%esp)
 88b1218:	e8 d1 c0 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b121d:	83 ec 04             	sub    $0x4,%esp
 88b1220:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88b1223:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1227:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88b122a:	89 04 24             	mov    %eax,(%esp)
 88b122d:	e8 be 66 81 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 88b1232:	84 c0                	test   %al,%al
 88b1234:	74 3d                	je     88b1273 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x3b9>
 88b1236:	8d 45 90             	lea    -0x70(%ebp),%eax
 88b1239:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b123d:	8d 45 94             	lea    -0x6c(%ebp),%eax
 88b1240:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1244:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1247:	89 04 24             	mov    %eax,(%esp)
 88b124a:	e8 71 98 a4 ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 88b124f:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1252:	8d 48 34             	lea    0x34(%eax),%ecx
 88b1255:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88b1258:	8d 55 f0             	lea    -0x10(%ebp),%edx
 88b125b:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b125f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b1263:	89 04 24             	mov    %eax,(%esp)
 88b1266:	e8 e5 5a 81 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 88b126b:	83 ec 04             	sub    $0x4,%esp
 88b126e:	e9 1e ff ff ff       	jmp    88b1191 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x2d7>
 88b1273:	8b 45 94             	mov    -0x6c(%ebp),%eax
 88b1276:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b127a:	c7 04 24 48 70 e0 08 	movl   $0x8e07048,(%esp)
 88b1281:	e8 da c8 7c ff       	call   807db60 <printf@plt>
 88b1286:	bb fc ff ff ff       	mov    $0xfffffffc,%ebx
 88b128b:	eb 34                	jmp    88b12c1 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x407>
 88b128d:	e9 80 fc ff ff       	jmp    88b0f12 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x58>
 88b1292:	90                   	nop
 88b1293:	e8 bc ad 00 00       	call   88bc054 <_Z20unloadRDARScriptFilev>
 88b1298:	8b 45 08             	mov    0x8(%ebp),%eax
 88b129b:	c6 40 4c 01          	movb   $0x1,0x4c(%eax)
 88b129f:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b12a4:	eb 1b                	jmp    88b12c1 <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv+0x407>
 88b12a6:	89 d3                	mov    %edx,%ebx
 88b12a8:	89 c6                	mov    %eax,%esi
 88b12aa:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b12ad:	89 04 24             	mov    %eax,(%esp)
 88b12b0:	e8 2b 69 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b12b5:	89 f0                	mov    %esi,%eax
 88b12b7:	89 da                	mov    %ebx,%edx
 88b12b9:	89 04 24             	mov    %eax,(%esp)
 88b12bc:	e8 8f 24 23 00       	call   8ae3750 <_Unwind_Resume>
 88b12c1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b12c4:	89 04 24             	mov    %eax,(%esp)
 88b12c7:	e8 14 69 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b12cc:	89 d8                	mov    %ebx,%eax
 88b12ce:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88b12d1:	83 c4 00             	add    $0x0,%esp
 88b12d4:	5b                   	pop    %ebx
 88b12d5:	5e                   	pop    %esi
 88b12d6:	5d                   	pop    %ebp
 88b12d7:	c3                   	ret

```

```c
// ARAD::SCRIPT::AvatarRecharge::loadScript @ 0x88b0eba

/* ARAD::SCRIPT::AvatarRecharge::loadScript() */

undefined4 __thiscall ARAD::SCRIPT::AvatarRecharge::loadScript(AvatarRecharge *this)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  bool local_5a;
  bool local_59;
  string local_58;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_50 [4];
  pair local_4c [8];
  pair<int_const,int> local_44 [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_3c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_38 [4];
  pair local_34 [8];
  pair<int_const,int> local_2c [8];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_24 [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  pair local_1c [8];
  pair<int_const,int> local_14 [8];
  
  if (this[0x4c] == (AvatarRecharge)0x0) {
    cVar1 = loadRDARScriptFile("Etc/EmblemRenewal/","avatar_recharge_jpn.etc");
    if (cVar1 == '\x01') {
      std::string::string((string *)&local_58);
      local_59 = false;
      local_5a = false;
                    /* try { // try from 088b0f20 to 088b1297 has its CatchHandler @ 088b12a6 */
      while (cVar1 = ScanType((string *)&local_58,true), cVar1 == '\x01') {
        bVar2 = std::operator==(&local_58,"[avatar recharge limit]");
        if (bVar2) {
          uVar3 = ScanInt((bool *)0x0);
          *(undefined4 *)this = uVar3;
        }
        else {
          bVar2 = std::operator==(&local_58,"[emblem recharge stone info]");
          if (bVar2) {
            while ((local_60 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                   local_59 == false && (local_5a == true))) {
              local_64 = ScanInt((bool *)0x0);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                        (local_54);
              piVar4 = &local_60;
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                        ((int *)local_50);
              cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                (local_50,(_Rb_tree_iterator *)local_54);
              if (cVar1 == '\0') {
                printf("[emblem recharge stone info] duplicate item_index:%d",local_60,piVar4);
                uVar3 = 0xfffffffe;
                goto LAB_088b12c1;
              }
              std::pair<int_const,int>::pair<int&,int&>(local_44,&local_60,&local_64);
              std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                        (local_4c);
            }
          }
          else {
            bVar2 = std::operator==(&local_58,"[emblem recharge]");
            if (bVar2) {
              while ((local_68 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                     local_59 == false && (local_5a == true))) {
                local_6c = ScanInt((bool *)0x0);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                          (local_3c);
                piVar4 = &local_68;
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                          ((int *)local_38);
                cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                  (local_38,(_Rb_tree_iterator *)local_3c);
                if (cVar1 == '\0') {
                  printf("[emblem recharge] duplicate grade:%d",local_68,piVar4);
                  uVar3 = 0xfffffffd;
                  goto LAB_088b12c1;
                }
                std::pair<int_const,int>::pair<int&,int&>(local_2c,&local_68,&local_6c);
                std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                          (local_34);
              }
            }
            else {
              bVar2 = std::operator==(&local_58,"[recharge use emblem info]");
              if (bVar2) {
                while (((local_70 = ScanTypeOrInt(&local_59,(string *)&local_58,&local_5a,true),
                        local_59 == false && (local_5a == true)) && (local_70 < 8))) {
                  local_74 = ScanInt((bool *)0x0);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end
                            (local_24);
                  piVar4 = &local_70;
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                            ((int *)local_20);
                  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                                    (local_20,(_Rb_tree_iterator *)local_24);
                  if (cVar1 == '\0') {
                    printf("[recharge use emblem info] duplicate grade:%d",local_70,piVar4);
                    uVar3 = 0xfffffffc;
                    goto LAB_088b12c1;
                  }
                  std::pair<int_const,int>::pair<int&,int&>(local_14,&local_70,&local_74);
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                            (local_1c);
                }
              }
            }
          }
        }
      }
      unloadRDARScriptFile();
      this[0x4c] = (AvatarRecharge)0x1;
      uVar3 = 0;
LAB_088b12c1:
      std::string::~string((string *)&local_58);
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~AvatarRecharge

```asm
// === 088b0e46 ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge  [0x088b0e46-0x88b0eb9] ===
 88b0e46:	55                   	push   %ebp
 88b0e47:	89 e5                	mov    %esp,%ebp
 88b0e49:	56                   	push   %esi
 88b0e4a:	53                   	push   %ebx
 88b0e4b:	83 ec 10             	sub    $0x10,%esp
 88b0e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e51:	83 c0 34             	add    $0x34,%eax
 88b0e54:	89 04 24             	mov    %eax,(%esp)
 88b0e57:	e8 6a 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e5c:	eb 18                	jmp    88b0e76 <_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev+0x30>
 88b0e5e:	89 d3                	mov    %edx,%ebx
 88b0e60:	89 c6                	mov    %eax,%esi
 88b0e62:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e65:	83 c0 1c             	add    $0x1c,%eax
 88b0e68:	89 04 24             	mov    %eax,(%esp)
 88b0e6b:	e8 56 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e70:	89 f0                	mov    %esi,%eax
 88b0e72:	89 da                	mov    %ebx,%edx
 88b0e74:	eb 10                	jmp    88b0e86 <_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev+0x40>
 88b0e76:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e79:	83 c0 1c             	add    $0x1c,%eax
 88b0e7c:	89 04 24             	mov    %eax,(%esp)
 88b0e7f:	e8 42 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e84:	eb 1e                	jmp    88b0ea4 <_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev+0x5e>
 88b0e86:	89 d3                	mov    %edx,%ebx
 88b0e88:	89 c6                	mov    %eax,%esi
 88b0e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0e8d:	83 c0 04             	add    $0x4,%eax
 88b0e90:	89 04 24             	mov    %eax,(%esp)
 88b0e93:	e8 2e 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0e98:	89 f0                	mov    %esi,%eax
 88b0e9a:	89 da                	mov    %ebx,%edx
 88b0e9c:	89 04 24             	mov    %eax,(%esp)
 88b0e9f:	e8 ac 28 23 00       	call   8ae3750 <_Unwind_Resume>
 88b0ea4:	8b 45 08             	mov    0x8(%ebp),%eax
 88b0ea7:	83 c0 04             	add    $0x4,%eax
 88b0eaa:	89 04 24             	mov    %eax,(%esp)
 88b0ead:	e8 14 5c 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b0eb2:	83 c4 10             	add    $0x10,%esp
 88b0eb5:	5b                   	pop    %ebx
 88b0eb6:	5e                   	pop    %esi
 88b0eb7:	5d                   	pop    %ebp
 88b0eb8:	c3                   	ret
 88b0eb9:	90                   	nop

```

```c
// ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge @ 0x88b0e46

/* ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge() */

void __thiscall ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge(AvatarRecharge *this)

{
                    /* try { // try from 088b0e57 to 088b0e5b has its CatchHandler @ 088b0e5e */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x34));
                    /* try { // try from 088b0e7f to 088b0e83 has its CatchHandler @ 088b0e86 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 4));
  return;
}

```


# secretshop__CSecretShopStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Clear

```asm
// === 085fcfec secretshop::CSecretShopStatistic::Clear  [0x085fcfec-0x85fd023] ===
 85fcfec:	55                   	push   %ebp
 85fcfed:	89 e5                	mov    %esp,%ebp
 85fcfef:	83 ec 28             	sub    $0x28,%esp
 85fcff2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85fcff9:	eb 1b                	jmp    85fd016 <_ZN10secretshop20CSecretShopStatistic5ClearEv+0x2a>
 85fcffb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fcffe:	89 d0                	mov    %edx,%eax
 85fd000:	01 c0                	add    %eax,%eax
 85fd002:	01 d0                	add    %edx,%eax
 85fd004:	c1 e0 03             	shl    $0x3,%eax
 85fd007:	03 45 08             	add    0x8(%ebp),%eax
 85fd00a:	89 04 24             	mov    %eax,(%esp)
 85fd00d:	e8 b8 f0 ff ff       	call   85fc0ca <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE5clearEv>
 85fd012:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85fd016:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85fd01a:	0f 9e c0             	setle  %al
 85fd01d:	84 c0                	test   %al,%al
 85fd01f:	75 da                	jne    85fcffb <_ZN10secretshop20CSecretShopStatistic5ClearEv+0xf>
 85fd021:	c9                   	leave
 85fd022:	c3                   	ret
 85fd023:	90                   	nop

```

```c
// secretshop::CSecretShopStatistic::Clear @ 0x85fcfec

/* secretshop::CSecretShopStatistic::Clear() */

void __thiscall secretshop::CSecretShopStatistic::Clear(CSecretShopStatistic *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::clear((map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
             *)(this + local_10 * 0x18));
  }
  return;
}

```

---

## GetDungeonData

```asm
// === 085fd13e secretshop::CSecretShopStatistic::GetDungeonData  [0x085fd13e-0x85fd277] ===
 85fd13e:	55                   	push   %ebp
 85fd13f:	89 e5                	mov    %esp,%ebp
 85fd141:	81 ec 88 00 00 00    	sub    $0x88,%esp
 85fd147:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fd14a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd14e:	8b 45 08             	mov    0x8(%ebp),%eax
 85fd151:	89 04 24             	mov    %eax,(%esp)
 85fd154:	e8 cb fe ff ff       	call   85fd024 <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi>
 85fd159:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fd15c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd15f:	89 d0                	mov    %edx,%eax
 85fd161:	01 c0                	add    %eax,%eax
 85fd163:	01 d0                	add    %edx,%eax
 85fd165:	c1 e0 03             	shl    $0x3,%eax
 85fd168:	89 c2                	mov    %eax,%edx
 85fd16a:	03 55 08             	add    0x8(%ebp),%edx
 85fd16d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fd170:	8d 4d 10             	lea    0x10(%ebp),%ecx
 85fd173:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fd177:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd17b:	89 04 24             	mov    %eax,(%esp)
 85fd17e:	e8 69 03 00 00       	call   85fd4ec <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85fd183:	83 ec 04             	sub    $0x4,%esp
 85fd186:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd189:	89 d0                	mov    %edx,%eax
 85fd18b:	01 c0                	add    %eax,%eax
 85fd18d:	01 d0                	add    %edx,%eax
 85fd18f:	c1 e0 03             	shl    $0x3,%eax
 85fd192:	89 c2                	mov    %eax,%edx
 85fd194:	03 55 08             	add    0x8(%ebp),%edx
 85fd197:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85fd19a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd19e:	89 04 24             	mov    %eax,(%esp)
 85fd1a1:	e8 72 03 00 00       	call   85fd518 <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85fd1a6:	83 ec 04             	sub    $0x4,%esp
 85fd1a9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85fd1ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd1b0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fd1b3:	89 04 24             	mov    %eax,(%esp)
 85fd1b6:	e8 83 03 00 00       	call   85fd53e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEneERKS4_>
 85fd1bb:	84 c0                	test   %al,%al
 85fd1bd:	74 13                	je     85fd1d2 <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii+0x94>
 85fd1bf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fd1c2:	89 04 24             	mov    %eax,(%esp)
 85fd1c5:	e8 88 03 00 00       	call   85fd552 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 85fd1ca:	83 c0 04             	add    $0x4,%eax
 85fd1cd:	e9 a4 00 00 00       	jmp    85fd276 <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii+0x138>
 85fd1d2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85fd1d5:	89 04 24             	mov    %eax,(%esp)
 85fd1d8:	e8 7d 02 00 00       	call   85fd45a <_ZN26SECRET_SHOP_STATISTIC_DATAC1Ev>
 85fd1dd:	8b 45 10             	mov    0x10(%ebp),%eax
 85fd1e0:	89 45 a0             	mov    %eax,-0x60(%ebp)
 85fd1e3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85fd1e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fd1ea:	8d 45 10             	lea    0x10(%ebp),%eax
 85fd1ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd1f1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fd1f4:	89 04 24             	mov    %eax,(%esp)
 85fd1f7:	e8 64 03 00 00       	call   85fd560 <_ZNSt4pairIi26SECRET_SHOP_STATISTIC_DATAEC1IRiRS0_EEOT_OT0_>
 85fd1fc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85fd1ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd203:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85fd206:	89 04 24             	mov    %eax,(%esp)
 85fd209:	e8 98 03 00 00       	call   85fd5a6 <_ZNSt4pairIKi26SECRET_SHOP_STATISTIC_DATAEC1IiS1_EEOS_IT_T0_E>
 85fd20e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd211:	89 d0                	mov    %edx,%eax
 85fd213:	01 c0                	add    %eax,%eax
 85fd215:	01 d0                	add    %edx,%eax
 85fd217:	c1 e0 03             	shl    $0x3,%eax
 85fd21a:	89 c2                	mov    %eax,%edx
 85fd21c:	03 55 08             	add    0x8(%ebp),%edx
 85fd21f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85fd222:	8d 4d c4             	lea    -0x3c(%ebp),%ecx
 85fd225:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fd229:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd22d:	89 04 24             	mov    %eax,(%esp)
 85fd230:	e8 b9 03 00 00       	call   85fd5ee <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 85fd235:	83 ec 04             	sub    $0x4,%esp
 85fd238:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd23b:	89 d0                	mov    %edx,%eax
 85fd23d:	01 c0                	add    %eax,%eax
 85fd23f:	01 d0                	add    %edx,%eax
 85fd241:	c1 e0 03             	shl    $0x3,%eax
 85fd244:	89 c2                	mov    %eax,%edx
 85fd246:	03 55 08             	add    0x8(%ebp),%edx
 85fd249:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85fd24c:	8d 4d 10             	lea    0x10(%ebp),%ecx
 85fd24f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85fd253:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd257:	89 04 24             	mov    %eax,(%esp)
 85fd25a:	e8 8d 02 00 00       	call   85fd4ec <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85fd25f:	83 ec 04             	sub    $0x4,%esp
 85fd262:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85fd265:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 85fd268:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85fd26b:	89 04 24             	mov    %eax,(%esp)
 85fd26e:	e8 df 02 00 00       	call   85fd552 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 85fd273:	83 c0 04             	add    $0x4,%eax
 85fd276:	c9                   	leave
 85fd277:	c3                   	ret

```

```c
// secretshop::CSecretShopStatistic::GetDungeonData @ 0x85fd13e

/* secretshop::CSecretShopStatistic::GetDungeonData(int, int) */

int __thiscall
secretshop::CSecretShopStatistic::GetDungeonData(CSecretShopStatistic *this,int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_70 [3];
  int local_64 [5];
  int local_50;
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_4c [4];
  pair local_48 [8];
  pair<int_const,SECRET_SHOP_STATISTIC_DATA> local_40 [24];
  pair<int,SECRET_SHOP_STATISTIC_DATA> local_28 [24];
  undefined4 local_10;
  
  local_10 = GetNpcPos(this,param_1);
  std::
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  ::find(&local_50);
  std::
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  ::end(local_4c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)&local_50
                     ,(_Rb_tree_iterator *)local_4c);
  if (cVar1 == '\0') {
    SECRET_SHOP_STATISTIC_DATA::SECRET_SHOP_STATISTIC_DATA((SECRET_SHOP_STATISTIC_DATA *)local_64);
    local_64[0] = param_2;
    std::pair<int,SECRET_SHOP_STATISTIC_DATA>::pair<int&,SECRET_SHOP_STATISTIC_DATA&>
              (local_28,&param_2,(SECRET_SHOP_STATISTIC_DATA *)local_64);
    std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>::pair<int,SECRET_SHOP_STATISTIC_DATA>
              (local_40,local_28);
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::insert(local_48);
    std::
    map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
    ::find(local_70);
    local_50 = local_70[0];
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                       &local_50);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                       &local_50);
  }
  return iVar2 + 4;
}

```

---

## GetNpcIndex

```asm
// === 085fd05e secretshop::CSecretShopStatistic::GetNpcIndex  [0x085fd05e-0x85fd08f] ===
 85fd05e:	55                   	push   %ebp
 85fd05f:	89 e5                	mov    %esp,%ebp
 85fd061:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85fd065:	75 07                	jne    85fd06e <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x10>
 85fd067:	b8 ea 03 00 00       	mov    $0x3ea,%eax
 85fd06c:	eb 1f                	jmp    85fd08d <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x2f>
 85fd06e:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85fd072:	75 07                	jne    85fd07b <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x1d>
 85fd074:	b8 eb 03 00 00       	mov    $0x3eb,%eax
 85fd079:	eb 12                	jmp    85fd08d <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x2f>
 85fd07b:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85fd07f:	75 07                	jne    85fd088 <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x2a>
 85fd081:	b8 ec 03 00 00       	mov    $0x3ec,%eax
 85fd086:	eb 05                	jmp    85fd08d <_ZN10secretshop20CSecretShopStatistic11GetNpcIndexEi+0x2f>
 85fd088:	b8 ea 03 00 00       	mov    $0x3ea,%eax
 85fd08d:	5d                   	pop    %ebp
 85fd08e:	c3                   	ret
 85fd08f:	90                   	nop

```

```c
// secretshop::CSecretShopStatistic::GetNpcIndex @ 0x85fd05e

/* secretshop::CSecretShopStatistic::GetNpcIndex(int) */

undefined4 __thiscall
secretshop::CSecretShopStatistic::GetNpcIndex(CSecretShopStatistic *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x3ea;
  }
  else if (param_1 == 1) {
    uVar1 = 0x3eb;
  }
  else if (param_1 == 2) {
    uVar1 = 0x3ec;
  }
  else {
    uVar1 = 0x3ea;
  }
  return uVar1;
}

```

---

## GetNpcPos

```asm
// === 085fd024 secretshop::CSecretShopStatistic::GetNpcPos  [0x085fd024-0x85fd05d] ===
 85fd024:	55                   	push   %ebp
 85fd025:	89 e5                	mov    %esp,%ebp
 85fd027:	81 7d 0c ea 03 00 00 	cmpl   $0x3ea,0xc(%ebp)
 85fd02e:	75 07                	jne    85fd037 <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x13>
 85fd030:	b8 00 00 00 00       	mov    $0x0,%eax
 85fd035:	eb 25                	jmp    85fd05c <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x38>
 85fd037:	81 7d 0c eb 03 00 00 	cmpl   $0x3eb,0xc(%ebp)
 85fd03e:	75 07                	jne    85fd047 <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x23>
 85fd040:	b8 01 00 00 00       	mov    $0x1,%eax
 85fd045:	eb 15                	jmp    85fd05c <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x38>
 85fd047:	81 7d 0c ec 03 00 00 	cmpl   $0x3ec,0xc(%ebp)
 85fd04e:	75 07                	jne    85fd057 <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x33>
 85fd050:	b8 02 00 00 00       	mov    $0x2,%eax
 85fd055:	eb 05                	jmp    85fd05c <_ZN10secretshop20CSecretShopStatistic9GetNpcPosEi+0x38>
 85fd057:	b8 00 00 00 00       	mov    $0x0,%eax
 85fd05c:	5d                   	pop    %ebp
 85fd05d:	c3                   	ret

```

```c
// secretshop::CSecretShopStatistic::GetNpcPos @ 0x85fd024

/* secretshop::CSecretShopStatistic::GetNpcPos(int) */

undefined4 __thiscall
secretshop::CSecretShopStatistic::GetNpcPos(CSecretShopStatistic *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x3ea) {
    uVar1 = 0;
  }
  else if (param_1 == 0x3eb) {
    uVar1 = 1;
  }
  else if (param_1 == 0x3ec) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## RecordBuy

```asm
// === 085fd0d4 secretshop::CSecretShopStatistic::RecordBuy  [0x085fd0d4-0x85fd107] ===
 85fd0d4:	55                   	push   %ebp
 85fd0d5:	89 e5                	mov    %esp,%ebp
 85fd0d7:	83 ec 28             	sub    $0x28,%esp
 85fd0da:	8b 45 10             	mov    0x10(%ebp),%eax
 85fd0dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fd0e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fd0e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd0e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85fd0eb:	89 04 24             	mov    %eax,(%esp)
 85fd0ee:	e8 4b 00 00 00       	call   85fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>
 85fd0f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fd0f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd0f9:	8b 40 0c             	mov    0xc(%eax),%eax
 85fd0fc:	8d 50 01             	lea    0x1(%eax),%edx
 85fd0ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd102:	89 50 0c             	mov    %edx,0xc(%eax)
 85fd105:	c9                   	leave
 85fd106:	c3                   	ret
 85fd107:	90                   	nop

```

```c
// secretshop::CSecretShopStatistic::RecordBuy @ 0x85fd0d4

/* secretshop::CSecretShopStatistic::RecordBuy(int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordBuy(CSecretShopStatistic *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}

```

---

## RecordPrice

```asm
// === 085fd108 secretshop::CSecretShopStatistic::RecordPrice  [0x085fd108-0x85fd13d] ===
 85fd108:	55                   	push   %ebp
 85fd109:	89 e5                	mov    %esp,%ebp
 85fd10b:	83 ec 28             	sub    $0x28,%esp
 85fd10e:	8b 45 10             	mov    0x10(%ebp),%eax
 85fd111:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fd115:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fd118:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd11c:	8b 45 08             	mov    0x8(%ebp),%eax
 85fd11f:	89 04 24             	mov    %eax,(%esp)
 85fd122:	e8 17 00 00 00       	call   85fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>
 85fd127:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fd12a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd12d:	8b 40 10             	mov    0x10(%eax),%eax
 85fd130:	89 c2                	mov    %eax,%edx
 85fd132:	03 55 14             	add    0x14(%ebp),%edx
 85fd135:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd138:	89 50 10             	mov    %edx,0x10(%eax)
 85fd13b:	c9                   	leave
 85fd13c:	c3                   	ret
 85fd13d:	90                   	nop

```

```c
// secretshop::CSecretShopStatistic::RecordPrice @ 0x85fd108

/* secretshop::CSecretShopStatistic::RecordPrice(int, int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordPrice
          (CSecretShopStatistic *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + param_3;
  return;
}

```

---

## RecordShow

```asm
// === 085fd090 secretshop::CSecretShopStatistic::RecordShow  [0x085fd090-0x85fd0d3] ===
 85fd090:	55                   	push   %ebp
 85fd091:	89 e5                	mov    %esp,%ebp
 85fd093:	83 ec 28             	sub    $0x28,%esp
 85fd096:	8b 45 10             	mov    0x10(%ebp),%eax
 85fd099:	89 44 24 08          	mov    %eax,0x8(%esp)
 85fd09d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85fd0a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd0a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85fd0a7:	89 04 24             	mov    %eax,(%esp)
 85fd0aa:	e8 8f 00 00 00       	call   85fd13e <_ZN10secretshop20CSecretShopStatistic14GetDungeonDataEii>
 85fd0af:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85fd0b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd0b5:	8b 40 04             	mov    0x4(%eax),%eax
 85fd0b8:	8d 50 01             	lea    0x1(%eax),%edx
 85fd0bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd0be:	89 50 04             	mov    %edx,0x4(%eax)
 85fd0c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd0c4:	8b 40 08             	mov    0x8(%eax),%eax
 85fd0c7:	89 c2                	mov    %eax,%edx
 85fd0c9:	03 55 14             	add    0x14(%ebp),%edx
 85fd0cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd0cf:	89 50 08             	mov    %edx,0x8(%eax)
 85fd0d2:	c9                   	leave
 85fd0d3:	c3                   	ret

```

```c
// secretshop::CSecretShopStatistic::RecordShow @ 0x85fd090

/* secretshop::CSecretShopStatistic::RecordShow(int, int, int) */

void __thiscall
secretshop::CSecretShopStatistic::RecordShow
          (CSecretShopStatistic *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetDungeonData(this,param_1,param_2);
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + param_3;
  return;
}

```

---

## SendSecretShopStatistic

```asm
// === 085fd278 secretshop::CSecretShopStatistic::SendSecretShopStatistic  [0x085fd278-0x85fd3fc] ===
 85fd278:	55                   	push   %ebp
 85fd279:	89 e5                	mov    %esp,%ebp
 85fd27b:	53                   	push   %ebx
 85fd27c:	81 ec e4 0f 00 00    	sub    $0xfe4,%esp
 85fd282:	8d 85 36 f0 ff ff    	lea    -0xfca(%ebp),%eax
 85fd288:	89 04 24             	mov    %eax,(%esp)
 85fd28b:	e8 00 02 00 00       	call   85fd490 <_ZN28Packet_Secret_Shop_StatisticC1Ev>
 85fd290:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85fd297:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85fd29e:	e9 46 01 00 00       	jmp    85fd3e9 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0x171>
 85fd2a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85fd2a6:	89 85 44 f0 ff ff    	mov    %eax,-0xfbc(%ebp)
 85fd2ac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd2af:	89 d0                	mov    %edx,%eax
 85fd2b1:	01 c0                	add    %eax,%eax
 85fd2b3:	01 d0                	add    %edx,%eax
 85fd2b5:	c1 e0 03             	shl    $0x3,%eax
 85fd2b8:	03 45 08             	add    0x8(%ebp),%eax
 85fd2bb:	89 04 24             	mov    %eax,(%esp)
 85fd2be:	e8 57 03 00 00       	call   85fd61a <_ZNKSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 85fd2c3:	89 85 40 f0 ff ff    	mov    %eax,-0xfc0(%ebp)
 85fd2c9:	8b 85 40 f0 ff ff    	mov    -0xfc0(%ebp),%eax
 85fd2cf:	85 c0                	test   %eax,%eax
 85fd2d1:	0f 84 0d 01 00 00    	je     85fd3e4 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0x16c>
 85fd2d7:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85fd2de:	c7 44 24 08 a0 0f 00 	movl   $0xfa0,0x8(%esp)
 85fd2e5:	00 
 85fd2e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fd2ed:	00 
 85fd2ee:	8d 85 36 f0 ff ff    	lea    -0xfca(%ebp),%eax
 85fd2f4:	83 c0 12             	add    $0x12,%eax
 85fd2f7:	89 04 24             	mov    %eax,(%esp)
 85fd2fa:	e8 c1 09 a8 ff       	call   807dcc0 <memset@plt>
 85fd2ff:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd302:	89 d0                	mov    %edx,%eax
 85fd304:	01 c0                	add    %eax,%eax
 85fd306:	01 d0                	add    %edx,%eax
 85fd308:	c1 e0 03             	shl    $0x3,%eax
 85fd30b:	89 c2                	mov    %eax,%edx
 85fd30d:	03 55 08             	add    0x8(%ebp),%edx
 85fd310:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fd313:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd317:	89 04 24             	mov    %eax,(%esp)
 85fd31a:	e8 0f 03 00 00       	call   85fd62e <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 85fd31f:	83 ec 04             	sub    $0x4,%esp
 85fd322:	eb 52                	jmp    85fd376 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0xfe>
 85fd324:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85fd327:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fd32a:	89 04 24             	mov    %eax,(%esp)
 85fd32d:	e8 20 02 00 00       	call   85fd552 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEptEv>
 85fd332:	89 c2                	mov    %eax,%edx
 85fd334:	89 d8                	mov    %ebx,%eax
 85fd336:	c1 e0 02             	shl    $0x2,%eax
 85fd339:	01 d8                	add    %ebx,%eax
 85fd33b:	c1 e0 02             	shl    $0x2,%eax
 85fd33e:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 85fd341:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85fd344:	2d b2 0f 00 00       	sub    $0xfb2,%eax
 85fd349:	8b 4a 04             	mov    0x4(%edx),%ecx
 85fd34c:	89 48 02             	mov    %ecx,0x2(%eax)
 85fd34f:	8b 4a 08             	mov    0x8(%edx),%ecx
 85fd352:	89 48 06             	mov    %ecx,0x6(%eax)
 85fd355:	8b 4a 0c             	mov    0xc(%edx),%ecx
 85fd358:	89 48 0a             	mov    %ecx,0xa(%eax)
 85fd35b:	8b 4a 10             	mov    0x10(%edx),%ecx
 85fd35e:	89 48 0e             	mov    %ecx,0xe(%eax)
 85fd361:	8b 52 14             	mov    0x14(%edx),%edx
 85fd364:	89 50 12             	mov    %edx,0x12(%eax)
 85fd367:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fd36a:	89 04 24             	mov    %eax,(%esp)
 85fd36d:	e8 e2 02 00 00       	call   85fd654 <_ZNSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEppEv>
 85fd372:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85fd376:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85fd379:	89 d0                	mov    %edx,%eax
 85fd37b:	01 c0                	add    %eax,%eax
 85fd37d:	01 d0                	add    %edx,%eax
 85fd37f:	c1 e0 03             	shl    $0x3,%eax
 85fd382:	89 c2                	mov    %eax,%edx
 85fd384:	03 55 08             	add    0x8(%ebp),%edx
 85fd387:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fd38a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85fd38e:	89 04 24             	mov    %eax,(%esp)
 85fd391:	e8 82 01 00 00       	call   85fd518 <_ZNSt3mapIi26SECRET_SHOP_STATISTIC_DATASt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85fd396:	83 ec 04             	sub    $0x4,%esp
 85fd399:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85fd39c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85fd3a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85fd3a3:	89 04 24             	mov    %eax,(%esp)
 85fd3a6:	e8 93 01 00 00       	call   85fd53e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi26SECRET_SHOP_STATISTIC_DATAEEneERKS4_>
 85fd3ab:	84 c0                	test   %al,%al
 85fd3ad:	0f 85 71 ff ff ff    	jne    85fd324 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0xac>
 85fd3b3:	8d 9d 36 f0 ff ff    	lea    -0xfca(%ebp),%ebx
 85fd3b9:	a1 30 be 40 09       	mov    0x940be30,%eax
 85fd3be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85fd3c5:	00 
 85fd3c6:	89 04 24             	mov    %eax,(%esp)
 85fd3c9:	e8 2a 49 b1 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 85fd3ce:	c7 44 24 08 b2 0f 00 	movl   $0xfb2,0x8(%esp)
 85fd3d5:	00 
 85fd3d6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85fd3da:	89 04 24             	mov    %eax,(%esp)
 85fd3dd:	e8 62 4c e7 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 85fd3e2:	eb 01                	jmp    85fd3e5 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0x16d>
 85fd3e4:	90                   	nop
 85fd3e5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85fd3e9:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85fd3ed:	0f 9e c0             	setle  %al
 85fd3f0:	84 c0                	test   %al,%al
 85fd3f2:	0f 85 ab fe ff ff    	jne    85fd2a3 <_ZN10secretshop20CSecretShopStatistic23SendSecretShopStatisticEv+0x2b>
 85fd3f8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85fd3fb:	c9                   	leave
 85fd3fc:	c3                   	ret

```

```c
// secretshop::CSecretShopStatistic::SendSecretShopStatistic @ 0x85fd278

/* secretshop::CSecretShopStatistic::SendSecretShopStatistic() */

void __thiscall
secretshop::CSecretShopStatistic::SendSecretShopStatistic(CSecretShopStatistic *this)

{
  int iVar1;
  char cVar2;
  int iVar3;
  CStatisticServerProxy *this_00;
  Packet_Secret_Shop_Statistic local_fce [10];
  int local_fc4;
  int local_fc0;
  undefined4 auStack_fbc [1000];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_1c [4];
  map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
  local_18 [4];
  int local_14;
  int local_10;
  
  Packet_Secret_Shop_Statistic::Packet_Secret_Shop_Statistic(local_fce);
  local_14 = 0;
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    local_fc0 = local_10;
    local_fc4 = std::
                map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                ::size((map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
                        *)(this + local_10 * 0x18));
    if (local_fc4 != 0) {
      local_14 = 0;
      memset(auStack_fbc,0,4000);
      std::
      map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
      ::begin(local_1c);
      while( true ) {
        std::
        map<int,SECRET_SHOP_STATISTIC_DATA,std::less<int>,std::allocator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c,(_Rb_tree_iterator *)local_18);
        iVar1 = local_14;
        if (cVar2 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)
                           local_1c);
        auStack_fbc[iVar1 * 5] = *(undefined4 *)(iVar3 + 4);
        auStack_fbc[iVar1 * 5 + 1] = *(undefined4 *)(iVar3 + 8);
        auStack_fbc[iVar1 * 5 + 2] = *(undefined4 *)(iVar3 + 0xc);
        auStack_fbc[iVar1 * 5 + 3] = *(undefined4 *)(iVar3 + 0x10);
        auStack_fbc[iVar1 * 5 + 4] = *(undefined4 *)(iVar3 + 0x14);
        std::_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,SECRET_SHOP_STATISTIC_DATA>> *)local_1c);
        local_14 = local_14 + 1;
      }
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_fce,0xfb2);
    }
  }
  return;
}

```


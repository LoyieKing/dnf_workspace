# WongWork__CMailBox

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AddNewMail

```asm
// === 08551f5a WongWork::CMailBox::AddNewMail  [0x08551f5a-0x8552137] ===
 8551f5a:	55                   	push   %ebp
 8551f5b:	89 e5                	mov    %esp,%ebp
 8551f5d:	53                   	push   %ebx
 8551f5e:	83 ec 74             	sub    $0x74,%esp
 8551f61:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f64:	83 c0 10             	add    $0x10,%eax
 8551f67:	89 04 24             	mov    %eax,(%esp)
 8551f6a:	e8 f3 64 00 00       	call   8558462 <_ZN10StaticPoolIN8WongWork8CMailBox5CMailELi20EE7AcquireEv>
 8551f6f:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8551f72:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8551f75:	85 c0                	test   %eax,%eax
 8551f77:	75 0a                	jne    8551f83 <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE+0x29>
 8551f79:	b8 00 00 00 00       	mov    $0x0,%eax
 8551f7e:	e9 b0 01 00 00       	jmp    8552133 <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE+0x1d9>
 8551f83:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8551f86:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551f89:	8b 12                	mov    (%edx),%edx
 8551f8b:	89 10                	mov    %edx,(%eax)
 8551f8d:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8551f90:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551f93:	8b 52 04             	mov    0x4(%edx),%edx
 8551f96:	89 50 04             	mov    %edx,0x4(%eax)
 8551f99:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8551f9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551f9f:	8b 52 08             	mov    0x8(%edx),%edx
 8551fa2:	89 50 28             	mov    %edx,0x28(%eax)
 8551fa5:	8b 5d 9c             	mov    -0x64(%ebp),%ebx
 8551fa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551fab:	8b 40 24             	mov    0x24(%eax),%eax
 8551fae:	85 c0                	test   %eax,%eax
 8551fb0:	74 68                	je     855201a <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE+0xc0>
 8551fb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551fb5:	8b 40 24             	mov    0x24(%eax),%eax
 8551fb8:	8b 10                	mov    (%eax),%edx
 8551fba:	89 53 2c             	mov    %edx,0x2c(%ebx)
 8551fbd:	8b 50 04             	mov    0x4(%eax),%edx
 8551fc0:	89 53 30             	mov    %edx,0x30(%ebx)
 8551fc3:	8b 50 08             	mov    0x8(%eax),%edx
 8551fc6:	89 53 34             	mov    %edx,0x34(%ebx)
 8551fc9:	8b 50 0c             	mov    0xc(%eax),%edx
 8551fcc:	89 53 38             	mov    %edx,0x38(%ebx)
 8551fcf:	8b 50 10             	mov    0x10(%eax),%edx
 8551fd2:	89 53 3c             	mov    %edx,0x3c(%ebx)
 8551fd5:	8b 50 14             	mov    0x14(%eax),%edx
 8551fd8:	89 53 40             	mov    %edx,0x40(%ebx)
 8551fdb:	8b 50 18             	mov    0x18(%eax),%edx
 8551fde:	89 53 44             	mov    %edx,0x44(%ebx)
 8551fe1:	8b 50 1c             	mov    0x1c(%eax),%edx
 8551fe4:	89 53 48             	mov    %edx,0x48(%ebx)
 8551fe7:	8b 50 20             	mov    0x20(%eax),%edx
 8551fea:	89 53 4c             	mov    %edx,0x4c(%ebx)
 8551fed:	8b 50 24             	mov    0x24(%eax),%edx
 8551ff0:	89 53 50             	mov    %edx,0x50(%ebx)
 8551ff3:	8b 50 28             	mov    0x28(%eax),%edx
 8551ff6:	89 53 54             	mov    %edx,0x54(%ebx)
 8551ff9:	8b 50 2c             	mov    0x2c(%eax),%edx
 8551ffc:	89 53 58             	mov    %edx,0x58(%ebx)
 8551fff:	8b 50 30             	mov    0x30(%eax),%edx
 8552002:	89 53 5c             	mov    %edx,0x5c(%ebx)
 8552005:	8b 50 34             	mov    0x34(%eax),%edx
 8552008:	89 53 60             	mov    %edx,0x60(%ebx)
 855200b:	8b 50 38             	mov    0x38(%eax),%edx
 855200e:	89 53 64             	mov    %edx,0x64(%ebx)
 8552011:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 8552015:	88 43 68             	mov    %al,0x68(%ebx)
 8552018:	eb 6c                	jmp    8552086 <_ZN8WongWork8CMailBox10AddNewMailERKNS0_17stAddNewMailInputE+0x12c>
 855201a:	8d 45 a3             	lea    -0x5d(%ebp),%eax
 855201d:	89 04 24             	mov    %eax,(%esp)
 8552020:	e8 2f 98 b7 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8552025:	8b 45 a3             	mov    -0x5d(%ebp),%eax
 8552028:	89 43 2c             	mov    %eax,0x2c(%ebx)
 855202b:	8b 45 a7             	mov    -0x59(%ebp),%eax
 855202e:	89 43 30             	mov    %eax,0x30(%ebx)
 8552031:	8b 45 ab             	mov    -0x55(%ebp),%eax
 8552034:	89 43 34             	mov    %eax,0x34(%ebx)
 8552037:	8b 45 af             	mov    -0x51(%ebp),%eax
 855203a:	89 43 38             	mov    %eax,0x38(%ebx)
 855203d:	8b 45 b3             	mov    -0x4d(%ebp),%eax
 8552040:	89 43 3c             	mov    %eax,0x3c(%ebx)
 8552043:	8b 45 b7             	mov    -0x49(%ebp),%eax
 8552046:	89 43 40             	mov    %eax,0x40(%ebx)
 8552049:	8b 45 bb             	mov    -0x45(%ebp),%eax
 855204c:	89 43 44             	mov    %eax,0x44(%ebx)
 855204f:	8b 45 bf             	mov    -0x41(%ebp),%eax
 8552052:	89 43 48             	mov    %eax,0x48(%ebx)
 8552055:	8b 45 c3             	mov    -0x3d(%ebp),%eax
 8552058:	89 43 4c             	mov    %eax,0x4c(%ebx)
 855205b:	8b 45 c7             	mov    -0x39(%ebp),%eax
 855205e:	89 43 50             	mov    %eax,0x50(%ebx)
 8552061:	8b 45 cb             	mov    -0x35(%ebp),%eax
 8552064:	89 43 54             	mov    %eax,0x54(%ebx)
 8552067:	8b 45 cf             	mov    -0x31(%ebp),%eax
 855206a:	89 43 58             	mov    %eax,0x58(%ebx)
 855206d:	8b 45 d3             	mov    -0x2d(%ebp),%eax
 8552070:	89 43 5c             	mov    %eax,0x5c(%ebx)
 8552073:	8b 45 d7             	mov    -0x29(%ebp),%eax
 8552076:	89 43 60             	mov    %eax,0x60(%ebx)
 8552079:	8b 45 db             	mov    -0x25(%ebp),%eax
 855207c:	89 43 64             	mov    %eax,0x64(%ebx)
 855207f:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 8552083:	88 43 68             	mov    %al,0x68(%ebx)
 8552086:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8552089:	8b 55 0c             	mov    0xc(%ebp),%edx
 855208c:	8b 52 18             	mov    0x18(%edx),%edx
 855208f:	89 50 6c             	mov    %edx,0x6c(%eax)
 8552092:	8b 45 0c             	mov    0xc(%ebp),%eax
 8552095:	8b 40 20             	mov    0x20(%eax),%eax
 8552098:	8b 55 9c             	mov    -0x64(%ebp),%edx
 855209b:	83 c2 08             	add    $0x8,%edx
 855209e:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 85520a5:	00 
 85520a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85520aa:	89 14 24             	mov    %edx,(%esp)
 85520ad:	e8 1e b8 b2 ff       	call   807d8d0 <strncpy@plt>
 85520b2:	8b 45 9c             	mov    -0x64(%ebp),%eax
 85520b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 85520b8:	8b 52 14             	mov    0x14(%edx),%edx
 85520bb:	89 50 70             	mov    %edx,0x70(%eax)
 85520be:	8b 45 9c             	mov    -0x64(%ebp),%eax
 85520c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 85520c4:	0f b6 52 1c          	movzbl 0x1c(%edx),%edx
 85520c8:	88 50 74             	mov    %dl,0x74(%eax)
 85520cb:	8b 45 9c             	mov    -0x64(%ebp),%eax
 85520ce:	8b 55 0c             	mov    0xc(%ebp),%edx
 85520d1:	8b 52 0c             	mov    0xc(%edx),%edx
 85520d4:	89 50 78             	mov    %edx,0x78(%eax)
 85520d7:	8b 55 0c             	mov    0xc(%ebp),%edx
 85520da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85520dd:	8d 4d 9c             	lea    -0x64(%ebp),%ecx
 85520e0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85520e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85520e8:	89 04 24             	mov    %eax,(%esp)
 85520eb:	e8 9f 64 00 00       	call   855858f <_ZSt9make_pairIRKjRPN8WongWork8CMailBox5CMailEESt4pairINSt17__decay_and_stripIT_E6__typeENS8_IT0_E6__typeEEOS9_OSC_>
 85520f0:	83 ec 04             	sub    $0x4,%esp
 85520f3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85520f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85520fa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85520fd:	89 04 24             	mov    %eax,(%esp)
 8552100:	e8 c9 64 00 00       	call   85585ce <_ZNSt4pairIKjPN8WongWork8CMailBox5CMailEEC1IjS4_EEOS_IT_T0_E>
 8552105:	8b 45 08             	mov    0x8(%ebp),%eax
 8552108:	8d 48 40             	lea    0x40(%eax),%ecx
 855210b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 855210e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8552111:	89 54 24 08          	mov    %edx,0x8(%esp)
 8552115:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8552119:	89 04 24             	mov    %eax,(%esp)
 855211c:	e8 dd 64 00 00       	call   85585fe <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE6insertERKS8_>
 8552121:	83 ec 04             	sub    $0x4,%esp
 8552124:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8552127:	8b 55 0c             	mov    0xc(%ebp),%edx
 855212a:	8b 52 10             	mov    0x10(%edx),%edx
 855212d:	89 50 7c             	mov    %edx,0x7c(%eax)
 8552130:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8552133:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8552136:	c9                   	leave
 8552137:	c3                   	ret

```

```c
// WongWork::CMailBox::AddNewMail @ 0x8551f5a

/* WongWork::CMailBox::AddNewMail(WongWork::CMailBox::stAddNewMailInput const&) */

undefined4 * __thiscall WongWork::CMailBox::AddNewMail(CMailBox *this,stAddNewMailInput *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined1 local_25;
  pair local_24 [8];
  pair<unsigned_int_const,WongWork::CMailBox::CMail*> local_1c [8];
  uint local_14 [3];
  
  puVar2 = (undefined4 *)
           StaticPool<WongWork::CMailBox::CMail,20>::Acquire
                     ((StaticPool<WongWork::CMailBox::CMail,20> *)(this + 0x10));
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = *(undefined4 *)param_1;
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[10] = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_1 + 0x24) == 0) {
      Inven_Item::Inven_Item((Inven_Item *)&local_61);
      puVar2[0xb] = local_61;
      puVar2[0xc] = local_5d;
      puVar2[0xd] = local_59;
      puVar2[0xe] = local_55;
      puVar2[0xf] = local_51;
      puVar2[0x10] = local_4d;
      puVar2[0x11] = local_49;
      puVar2[0x12] = local_45;
      puVar2[0x13] = local_41;
      puVar2[0x14] = local_3d;
      puVar2[0x15] = local_39;
      puVar2[0x16] = local_35;
      puVar2[0x17] = local_31;
      puVar2[0x18] = local_2d;
      puVar2[0x19] = local_29;
      *(undefined1 *)(puVar2 + 0x1a) = local_25;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x24);
      puVar2[0xb] = *puVar1;
      puVar2[0xc] = puVar1[1];
      puVar2[0xd] = puVar1[2];
      puVar2[0xe] = puVar1[3];
      puVar2[0xf] = puVar1[4];
      puVar2[0x10] = puVar1[5];
      puVar2[0x11] = puVar1[6];
      puVar2[0x12] = puVar1[7];
      puVar2[0x13] = puVar1[8];
      puVar2[0x14] = puVar1[9];
      puVar2[0x15] = puVar1[10];
      puVar2[0x16] = puVar1[0xb];
      puVar2[0x17] = puVar1[0xc];
      puVar2[0x18] = puVar1[0xd];
      puVar2[0x19] = puVar1[0xe];
      *(undefined1 *)(puVar2 + 0x1a) = *(undefined1 *)(puVar1 + 0xf);
    }
    puVar2[0x1b] = *(undefined4 *)(param_1 + 0x18);
    strncpy((char *)(puVar2 + 2),*(char **)(param_1 + 0x20),0x1d);
    puVar2[0x1c] = *(undefined4 *)(param_1 + 0x14);
    *(stAddNewMailInput *)(puVar2 + 0x1d) = param_1[0x1c];
    puVar2[0x1e] = *(undefined4 *)(param_1 + 0xc);
    std::make_pair<unsigned_int_const&,WongWork::CMailBox::CMail*&>(local_14,(CMail **)param_1);
    std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>::
    pair<unsigned_int,WongWork::CMailBox::CMail*>(local_1c,(pair *)local_14);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::insert(local_24);
    puVar2[0x1f] = *(undefined4 *)(param_1 + 0x10);
  }
  return puVar2;
}

```

---

## GetMail

```asm
// === 085522c4 WongWork::CMailBox::GetMail  [0x085522c4-0x855232d] ===
 85522c4:	55                   	push   %ebp
 85522c5:	89 e5                	mov    %esp,%ebp
 85522c7:	83 ec 28             	sub    $0x28,%esp
 85522ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85522cd:	8d 48 40             	lea    0x40(%eax),%ecx
 85522d0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85522d3:	8d 55 0c             	lea    0xc(%ebp),%edx
 85522d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85522da:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85522de:	89 04 24             	mov    %eax,(%esp)
 85522e1:	e8 9e 63 00 00       	call   8558684 <_ZNKSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 85522e6:	83 ec 04             	sub    $0x4,%esp
 85522e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85522ec:	8d 50 40             	lea    0x40(%eax),%edx
 85522ef:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85522f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85522f6:	89 04 24             	mov    %eax,(%esp)
 85522f9:	e8 b2 63 00 00       	call   85586b0 <_ZNKSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 85522fe:	83 ec 04             	sub    $0x4,%esp
 8552301:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8552304:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552308:	8d 45 f0             	lea    -0x10(%ebp),%eax
 855230b:	89 04 24             	mov    %eax,(%esp)
 855230e:	e8 c3 63 00 00       	call   85586d6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEeqERKS7_>
 8552313:	84 c0                	test   %al,%al
 8552315:	74 07                	je     855231e <_ZNK8WongWork8CMailBox7GetMailEj+0x5a>
 8552317:	b8 00 00 00 00       	mov    $0x0,%eax
 855231c:	eb 0e                	jmp    855232c <_ZNK8WongWork8CMailBox7GetMailEj+0x68>
 855231e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8552321:	89 04 24             	mov    %eax,(%esp)
 8552324:	e8 c1 63 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8552329:	8b 40 04             	mov    0x4(%eax),%eax
 855232c:	c9                   	leave
 855232d:	c3                   	ret

```

```c
// WongWork::CMailBox::GetMail @ 0x85522c4

/* WongWork::CMailBox::GetMail(unsigned int) const */

undefined4 WongWork::CMailBox::GetMail(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_14 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==(local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->(local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## Init

```asm
// === 08551d98 WongWork::CMailBox::Init  [0x08551d98-0x8551f49] ===
 8551d98:	55                   	push   %ebp
 8551d99:	89 e5                	mov    %esp,%ebp
 8551d9b:	83 ec 48             	sub    $0x48,%esp
 8551d9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8551da1:	0f b6 00             	movzbl (%eax),%eax
 8551da4:	83 f0 01             	xor    $0x1,%eax
 8551da7:	84 c0                	test   %al,%al
 8551da9:	0f 85 98 01 00 00    	jne    8551f47 <_ZN8WongWork8CMailBox4InitEv+0x1af>
 8551daf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8551db2:	89 04 24             	mov    %eax,(%esp)
 8551db5:	e8 de 63 00 00       	call   8558198 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1Ev>
 8551dba:	8b 45 08             	mov    0x8(%ebp),%eax
 8551dbd:	8d 50 40             	lea    0x40(%eax),%edx
 8551dc0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8551dc3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551dc7:	89 04 24             	mov    %eax,(%esp)
 8551dca:	e8 d7 63 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8551dcf:	83 ec 04             	sub    $0x4,%esp
 8551dd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8551dd5:	8d 50 40             	lea    0x40(%eax),%edx
 8551dd8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8551ddb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551ddf:	89 04 24             	mov    %eax,(%esp)
 8551de2:	e8 e5 63 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8551de7:	83 ec 04             	sub    $0x4,%esp
 8551dea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8551ded:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8551df0:	eb 3c                	jmp    8551e2e <_ZN8WongWork8CMailBox4InitEv+0x96>
 8551df2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8551df5:	89 04 24             	mov    %eax,(%esp)
 8551df8:	e8 27 64 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 8551dfd:	8b 40 04             	mov    0x4(%eax),%eax
 8551e00:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8551e03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8551e06:	89 04 24             	mov    %eax,(%esp)
 8551e09:	e8 f0 fb ff ff       	call   85519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>
 8551e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e11:	8d 50 10             	lea    0x10(%eax),%edx
 8551e14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8551e17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551e1b:	89 14 24             	mov    %edx,(%esp)
 8551e1e:	e8 0f 64 00 00       	call   8558232 <_ZN10StaticPoolIN8WongWork8CMailBox5CMailELi20EE4FreeEPS2_>
 8551e23:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8551e26:	89 04 24             	mov    %eax,(%esp)
 8551e29:	e8 d8 63 00 00       	call   8558206 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 8551e2e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8551e31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551e35:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8551e38:	89 04 24             	mov    %eax,(%esp)
 8551e3b:	e8 b2 63 00 00       	call   85581f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEneERKS7_>
 8551e40:	84 c0                	test   %al,%al
 8551e42:	75 ae                	jne    8551df2 <_ZN8WongWork8CMailBox4InitEv+0x5a>
 8551e44:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e47:	83 c0 40             	add    $0x40,%eax
 8551e4a:	89 04 24             	mov    %eax,(%esp)
 8551e4d:	e8 38 65 00 00       	call   855838a <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5clearEv>
 8551e52:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e55:	c6 00 00             	movb   $0x0,(%eax)
 8551e58:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e5b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8551e62:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e65:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8551e6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e6f:	83 c0 58             	add    $0x58,%eax
 8551e72:	89 04 24             	mov    %eax,(%esp)
 8551e75:	e8 24 65 00 00       	call   855839e <_ZNKSt4listIP6StreamSaIS1_EE5emptyEv>
 8551e7a:	83 f0 01             	xor    $0x1,%eax
 8551e7d:	84 c0                	test   %al,%al
 8551e7f:	74 71                	je     8551ef2 <_ZN8WongWork8CMailBox4InitEv+0x15a>
 8551e81:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e84:	8d 50 58             	lea    0x58(%eax),%edx
 8551e87:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8551e8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551e8e:	89 04 24             	mov    %eax,(%esp)
 8551e91:	e8 1a 65 00 00       	call   85583b0 <_ZNSt4listIP6StreamSaIS1_EE5beginEv>
 8551e96:	83 ec 04             	sub    $0x4,%esp
 8551e99:	8b 45 08             	mov    0x8(%ebp),%eax
 8551e9c:	8d 50 58             	lea    0x58(%eax),%edx
 8551e9f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8551ea2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551ea6:	89 04 24             	mov    %eax,(%esp)
 8551ea9:	e8 28 65 00 00       	call   85583d6 <_ZNSt4listIP6StreamSaIS1_EE3endEv>
 8551eae:	83 ec 04             	sub    $0x4,%esp
 8551eb1:	eb 29                	jmp    8551edc <_ZN8WongWork8CMailBox4InitEv+0x144>
 8551eb3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8551eb6:	89 04 24             	mov    %eax,(%esp)
 8551eb9:	e8 64 65 00 00       	call   8558422 <_ZNKSt14_List_iteratorIP6StreamEdeEv>
 8551ebe:	8b 10                	mov    (%eax),%edx
 8551ec0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8551ec5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551ec9:	89 04 24             	mov    %eax,(%esp)
 8551ecc:	e8 57 dc d3 ff       	call   828fb28 <_ZN10StreamPool4FreeEP6Stream>
 8551ed1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8551ed4:	89 04 24             	mov    %eax,(%esp)
 8551ed7:	e8 32 65 00 00       	call   855840e <_ZNSt14_List_iteratorIP6StreamEppEv>
 8551edc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8551edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551ee3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8551ee6:	89 04 24             	mov    %eax,(%esp)
 8551ee9:	e8 0c 65 00 00       	call   85583fa <_ZNKSt14_List_iteratorIP6StreamEneERKS2_>
 8551eee:	84 c0                	test   %al,%al
 8551ef0:	75 c1                	jne    8551eb3 <_ZN8WongWork8CMailBox4InitEv+0x11b>
 8551ef2:	8b 45 08             	mov    0x8(%ebp),%eax
 8551ef5:	83 c0 58             	add    $0x58,%eax
 8551ef8:	89 04 24             	mov    %eax,(%esp)
 8551efb:	e8 30 65 00 00       	call   8558430 <_ZNSt4listIP6StreamSaIS1_EE5clearEv>
 8551f00:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f03:	83 c0 64             	add    $0x64,%eax
 8551f06:	89 04 24             	mov    %eax,(%esp)
 8551f09:	e8 90 5c 00 00       	call   8557b9e <_ZNSt3mapIibSt4lessIiESaISt4pairIKibEEE5clearEv>
 8551f0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f11:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 8551f18:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f1b:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 8551f22:	00 00 00 
 8551f25:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f28:	05 84 00 00 00       	add    $0x84,%eax
 8551f2d:	89 04 24             	mov    %eax,(%esp)
 8551f30:	e8 7d 5c 00 00       	call   8557bb2 <_ZNSt6vectorIjSaIjEE5clearEv>
 8551f35:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f38:	05 90 00 00 00       	add    $0x90,%eax
 8551f3d:	89 04 24             	mov    %eax,(%esp)
 8551f40:	e8 09 65 00 00       	call   855844e <_ZNSt3mapIj15SIG_LETTER_INFOSt4lessIjESaISt4pairIKjS0_EEE5clearEv>
 8551f45:	eb 01                	jmp    8551f48 <_ZN8WongWork8CMailBox4InitEv+0x1b0>
 8551f47:	90                   	nop
 8551f48:	c9                   	leave
 8551f49:	c3                   	ret

```

```c
// WongWork::CMailBox::Init @ 0x8551d98

/* WongWork::CMailBox::Init() */

void __thiscall WongWork::CMailBox::Init(CMailBox *this)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30 [4];
  _List_iterator local_20 [4];
  _List_iterator<Stream*> local_1c [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_18 [4];
  undefined4 local_14;
  CMail *local_10;
  
  if (*this == (CMailBox)0x1) {
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_iterator((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *
                      )&local_14);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_18);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)local_30);
    local_14 = local_30[0];
    while( true ) {
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_14,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_14);
      local_10 = *(CMail **)(iVar2 + 4);
      CMail::ResetPackage(local_10);
      StaticPool<WongWork::CMailBox::CMail,20>::Free
                ((StaticPool<WongWork::CMailBox::CMail,20> *)(this + 0x10),local_10);
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                 &local_14);
    }
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::clear((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)(this + 0x40));
    *this = (CMailBox)0x0;
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    cVar1 = std::list<Stream*,std::allocator<Stream*>>::empty
                      ((list<Stream*,std::allocator<Stream*>> *)(this + 0x58));
    if (cVar1 != '\x01') {
      std::list<Stream*,std::allocator<Stream*>>::begin();
      std::list<Stream*,std::allocator<Stream*>>::end();
      while( true ) {
        cVar1 = std::_List_iterator<Stream*>::operator!=(local_1c,local_20);
        if (cVar1 == '\0') break;
        puVar3 = (undefined4 *)std::_List_iterator<Stream*>::operator*(local_1c);
        StreamPool::Free(GlobalData::s_stream_pool,(Stream *)*puVar3);
        std::_List_iterator<Stream*>::operator++(local_1c);
      }
    }
    std::list<Stream*,std::allocator<Stream*>>::clear
              ((list<Stream*,std::allocator<Stream*>> *)(this + 0x58));
    std::map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>>::clear
              ((map<int,bool,std::less<int>,std::allocator<std::pair<int_const,bool>>> *)
               (this + 100));
    *(undefined4 *)(this + 0x7c) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x84));
    std::
    map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
    ::clear((map<unsigned_int,SIG_LETTER_INFO,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,SIG_LETTER_INFO>>>
             *)(this + 0x90));
  }
  return;
}

```

---

## RemoveMail

```asm
// === 08552138 WongWork::CMailBox::RemoveMail  [0x08552138-0x85522c3] ===
 8552138:	55                   	push   %ebp
 8552139:	89 e5                	mov    %esp,%ebp
 855213b:	53                   	push   %ebx
 855213c:	83 ec 44             	sub    $0x44,%esp
 855213f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8552146:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8552149:	89 04 24             	mov    %eax,(%esp)
 855214c:	e8 47 60 00 00       	call   8558198 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1Ev>
 8552151:	8b 45 08             	mov    0x8(%ebp),%eax
 8552154:	8d 48 40             	lea    0x40(%eax),%ecx
 8552157:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 855215a:	8d 55 0c             	lea    0xc(%ebp),%edx
 855215d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8552161:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8552165:	89 04 24             	mov    %eax,(%esp)
 8552168:	e8 bd 64 00 00       	call   855862a <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE4findERS7_>
 855216d:	83 ec 04             	sub    $0x4,%esp
 8552170:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8552173:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8552176:	8b 45 08             	mov    0x8(%ebp),%eax
 8552179:	8d 50 40             	lea    0x40(%eax),%edx
 855217c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 855217f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552183:	89 04 24             	mov    %eax,(%esp)
 8552186:	e8 1b 60 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 855218b:	83 ec 04             	sub    $0x4,%esp
 855218e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8552191:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552195:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8552198:	89 04 24             	mov    %eax,(%esp)
 855219b:	e8 b6 64 00 00       	call   8558656 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEeqERKS7_>
 85521a0:	84 c0                	test   %al,%al
 85521a2:	74 0a                	je     85521ae <_ZN8WongWork8CMailBox10RemoveMailEj+0x76>
 85521a4:	b8 00 00 00 00       	mov    $0x0,%eax
 85521a9:	e9 10 01 00 00       	jmp    85522be <_ZN8WongWork8CMailBox10RemoveMailEj+0x186>
 85521ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85521b1:	89 04 24             	mov    %eax,(%esp)
 85521b4:	e8 6b 60 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 85521b9:	8b 40 04             	mov    0x4(%eax),%eax
 85521bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85521bf:	8b 45 08             	mov    0x8(%ebp),%eax
 85521c2:	8d 50 40             	lea    0x40(%eax),%edx
 85521c5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85521c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85521cc:	89 14 24             	mov    %edx,(%esp)
 85521cf:	e8 96 64 00 00       	call   855866a <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5eraseESt17_Rb_tree_iteratorIS8_E>
 85521d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85521d7:	89 04 24             	mov    %eax,(%esp)
 85521da:	e8 f5 52 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 85521df:	85 c0                	test   %eax,%eax
 85521e1:	0f 95 c0             	setne  %al
 85521e4:	84 c0                	test   %al,%al
 85521e6:	0f 84 ad 00 00 00    	je     8552299 <_ZN8WongWork8CMailBox10RemoveMailEj+0x161>
 85521ec:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 85521f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85521f3:	8d 50 40             	lea    0x40(%eax),%edx
 85521f6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85521f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85521fd:	89 04 24             	mov    %eax,(%esp)
 8552200:	e8 c7 5f 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8552205:	83 ec 04             	sub    $0x4,%esp
 8552208:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 855220b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 855220e:	eb 3b                	jmp    855224b <_ZN8WongWork8CMailBox10RemoveMailEj+0x113>
 8552210:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8552213:	89 04 24             	mov    %eax,(%esp)
 8552216:	e8 09 60 00 00       	call   8558224 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 855221b:	8b 40 04             	mov    0x4(%eax),%eax
 855221e:	89 04 24             	mov    %eax,(%esp)
 8552221:	e8 ae 52 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8552226:	89 c3                	mov    %eax,%ebx
 8552228:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855222b:	89 04 24             	mov    %eax,(%esp)
 855222e:	e8 a1 52 00 00       	call   85574d4 <_ZN8WongWork8CMailBox5CMail11GetLetterIdEv>
 8552233:	39 c3                	cmp    %eax,%ebx
 8552235:	0f 94 c0             	sete   %al
 8552238:	84 c0                	test   %al,%al
 855223a:	74 04                	je     8552240 <_ZN8WongWork8CMailBox10RemoveMailEj+0x108>
 855223c:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8552240:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8552243:	89 04 24             	mov    %eax,(%esp)
 8552246:	e8 bb 5f 00 00       	call   8558206 <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 855224b:	8b 45 08             	mov    0x8(%ebp),%eax
 855224e:	8d 50 40             	lea    0x40(%eax),%edx
 8552251:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8552254:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552258:	89 04 24             	mov    %eax,(%esp)
 855225b:	e8 46 5f 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8552260:	83 ec 04             	sub    $0x4,%esp
 8552263:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8552266:	89 44 24 04          	mov    %eax,0x4(%esp)
 855226a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 855226d:	89 04 24             	mov    %eax,(%esp)
 8552270:	e8 7d 5f 00 00       	call   85581f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEneERKS7_>
 8552275:	84 c0                	test   %al,%al
 8552277:	75 97                	jne    8552210 <_ZN8WongWork8CMailBox10RemoveMailEj+0xd8>
 8552279:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 855227d:	83 f0 01             	xor    $0x1,%eax
 8552280:	84 c0                	test   %al,%al
 8552282:	74 15                	je     8552299 <_ZN8WongWork8CMailBox10RemoveMailEj+0x161>
 8552284:	8b 45 08             	mov    0x8(%ebp),%eax
 8552287:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 855228d:	8d 50 01             	lea    0x1(%eax),%edx
 8552290:	8b 45 08             	mov    0x8(%ebp),%eax
 8552293:	89 90 80 00 00 00    	mov    %edx,0x80(%eax)
 8552299:	8b 45 f0             	mov    -0x10(%ebp),%eax
 855229c:	89 04 24             	mov    %eax,(%esp)
 855229f:	e8 5a f7 ff ff       	call   85519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>
 85522a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85522a7:	8d 50 10             	lea    0x10(%eax),%edx
 85522aa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85522ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 85522b1:	89 14 24             	mov    %edx,(%esp)
 85522b4:	e8 79 5f 00 00       	call   8558232 <_ZN10StaticPoolIN8WongWork8CMailBox5CMailELi20EE4FreeEPS2_>
 85522b9:	b8 01 00 00 00       	mov    $0x1,%eax
 85522be:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85522c1:	c9                   	leave
 85522c2:	c3                   	ret
 85522c3:	90                   	nop

```

```c
// WongWork::CMailBox::RemoveMail @ 0x8552138

/* WongWork::CMailBox::RemoveMail(unsigned int) */

undefined4 WongWork::CMailBox::RemoveMail(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  uint local_30 [4];
  uint local_20;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_1c [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_18 [4];
  CMail *local_14;
  char local_d;
  
  local_14 = (CMail *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                    &local_20);
  puVar5 = &stack0x00000008;
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::find(local_30);
  local_20 = local_30[0];
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                     &local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)&local_20);
    local_14 = *(CMail **)(iVar3 + 4);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::erase((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)(param_1 + 0x40),local_20,puVar5);
    iVar3 = CMail::GetLetterId(local_14);
    if (iVar3 != 0) {
      local_d = '\0';
      std::
      map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
      ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
               *)local_30);
      local_20 = local_30[0];
      while( true ) {
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::end(local_18);
        cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)&local_20,(_Rb_tree_iterator *)local_18);
        if (cVar1 == '\0') break;
        iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
                operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                            *)&local_20);
        iVar3 = CMail::GetLetterId(*(CMail **)(iVar3 + 4));
        iVar4 = CMail::GetLetterId(local_14);
        if (iVar3 == iVar4) {
          local_d = '\x01';
        }
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_20);
      }
      if (local_d != '\x01') {
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      }
    }
    CMail::ResetPackage(local_14);
    StaticPool<WongWork::CMailBox::CMail,20>::Free
              ((StaticPool<WongWork::CMailBox::CMail,20> *)(param_1 + 0x10),local_14);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getNextMail

```asm
// === 0855236a WongWork::CMailBox::getNextMail  [0x0855236a-0x85523e1] ===
 855236a:	55                   	push   %ebp
 855236b:	89 e5                	mov    %esp,%ebp
 855236d:	83 ec 28             	sub    $0x28,%esp
 8552370:	8b 45 08             	mov    0x8(%ebp),%eax
 8552373:	8d 50 40             	lea    0x40(%eax),%edx
 8552376:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8552379:	89 54 24 04          	mov    %edx,0x4(%esp)
 855237d:	89 04 24             	mov    %eax,(%esp)
 8552380:	e8 21 5e 00 00       	call   85581a6 <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE3endEv>
 8552385:	83 ec 04             	sub    $0x4,%esp
 8552388:	8d 45 f0             	lea    -0x10(%ebp),%eax
 855238b:	89 44 24 04          	mov    %eax,0x4(%esp)
 855238f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8552392:	89 04 24             	mov    %eax,(%esp)
 8552395:	e8 5e 63 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 855239a:	8b 45 08             	mov    0x8(%ebp),%eax
 855239d:	8d 50 60             	lea    0x60(%eax),%edx
 85523a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85523a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85523a7:	89 14 24             	mov    %edx,(%esp)
 85523aa:	e8 27 63 00 00       	call   85586d6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEeqERKS7_>
 85523af:	84 c0                	test   %al,%al
 85523b1:	74 07                	je     85523ba <_ZN8WongWork8CMailBox11getNextMailEv+0x50>
 85523b3:	b8 00 00 00 00       	mov    $0x0,%eax
 85523b8:	eb 25                	jmp    85523df <_ZN8WongWork8CMailBox11getNextMailEv+0x75>
 85523ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85523bd:	83 c0 60             	add    $0x60,%eax
 85523c0:	89 04 24             	mov    %eax,(%esp)
 85523c3:	e8 22 63 00 00       	call   85586ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEptEv>
 85523c8:	8b 40 04             	mov    0x4(%eax),%eax
 85523cb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85523ce:	8b 45 08             	mov    0x8(%ebp),%eax
 85523d1:	83 c0 60             	add    $0x60,%eax
 85523d4:	89 04 24             	mov    %eax,(%esp)
 85523d7:	e8 2c 63 00 00       	call   8558708 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEppEv>
 85523dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85523df:	c9                   	leave
 85523e0:	c3                   	ret
 85523e1:	90                   	nop

```

```c
// WongWork::CMailBox::getNextMail @ 0x855236a

/* WongWork::CMailBox::getNextMail() */

undefined4 __thiscall WongWork::CMailBox::getNextMail(CMailBox *this)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_18 [4];
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_14 [4];
  undefined4 local_10;
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::end(local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
          operator==((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                      *)(this + 0x60),(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator->((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)(this + 0x60));
    local_10 = *(undefined4 *)(iVar2 + 4);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    operator++((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
               (this + 0x60));
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

```

---

## reset

```asm
// === 08551f4a WongWork::CMailBox::reset  [0x08551f4a-0x8551f59] ===
 8551f4a:	55                   	push   %ebp
 8551f4b:	89 e5                	mov    %esp,%ebp
 8551f4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8551f50:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8551f57:	5d                   	pop    %ebp
 8551f58:	c3                   	ret
 8551f59:	90                   	nop

```

```c
// WongWork::CMailBox::reset @ 0x8551f4a

/* WongWork::CMailBox::reset() */

void __thiscall WongWork::CMailBox::reset(CMailBox *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## setMailIterator

```asm
// === 0855232e WongWork::CMailBox::setMailIterator  [0x0855232e-0x8552369] ===
 855232e:	55                   	push   %ebp
 855232f:	89 e5                	mov    %esp,%ebp
 8552331:	83 ec 28             	sub    $0x28,%esp
 8552334:	8b 45 08             	mov    0x8(%ebp),%eax
 8552337:	8d 50 40             	lea    0x40(%eax),%edx
 855233a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 855233d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8552341:	89 04 24             	mov    %eax,(%esp)
 8552344:	e8 83 5e 00 00       	call   85581cc <_ZNSt3mapIjPN8WongWork8CMailBox5CMailESt4lessIjESaISt4pairIKjS3_EEE5beginEv>
 8552349:	83 ec 04             	sub    $0x4,%esp
 855234c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 855234f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8552353:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8552356:	89 04 24             	mov    %eax,(%esp)
 8552359:	e8 9a 63 00 00       	call   85586f8 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKjPN8WongWork8CMailBox5CMailEEEC1ERKSt17_Rb_tree_iteratorIS6_E>
 855235e:	8b 45 08             	mov    0x8(%ebp),%eax
 8552361:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8552364:	89 50 60             	mov    %edx,0x60(%eax)
 8552367:	c9                   	leave
 8552368:	c3                   	ret
 8552369:	90                   	nop

```

```c
// WongWork::CMailBox::setMailIterator @ 0x855232e

/* WongWork::CMailBox::setMailIterator() */

void __thiscall WongWork::CMailBox::setMailIterator(CMailBox *this)

{
  undefined4 local_14;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  ::begin(local_10);
  std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
             &local_14,(_Rb_tree_iterator *)local_10);
  *(undefined4 *)(this + 0x60) = local_14;
  return;
}

```


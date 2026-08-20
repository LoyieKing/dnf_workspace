# MoveItem

`_ZN13CAccountCargo8MoveItemEii`

`CAccountCargo::MoveItem(int, int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x08289f26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08289f26  _ZN13CAccountCargo8MoveItemEii
#           CAccountCargo::MoveItem(int, int)
# range [0x08289f26, 0x0828a129]
08289f26 +0x000:  push   %ebp
08289f27 +0x001:  mov    %esp,%ebp
08289f29 +0x003:  push   %esi
08289f2a +0x004:  push   %ebx
08289f2b +0x005:  sub    $0x50,%esp
08289f2e +0x008:  mov    0xc(%ebp),%eax
08289f31 +0x00b:  mov    %eax,0x4(%esp)
08289f35 +0x00f:  mov    0x8(%ebp),%eax
08289f38 +0x012:  mov    %eax,(%esp)
08289f3b +0x015:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289f40 +0x01a:  xor    $0x1,%eax
08289f43 +0x01d:  test   %al,%al
08289f45 +0x01f:  jne    08289f68 <+0x42>
08289f47 +0x021:  mov    0x10(%ebp),%eax
08289f4a +0x024:  mov    %eax,0x4(%esp)
08289f4e +0x028:  mov    0x8(%ebp),%eax
08289f51 +0x02b:  mov    %eax,(%esp)
08289f54 +0x02e:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
08289f59 +0x033:  xor    $0x1,%eax
08289f5c +0x036:  test   %al,%al
08289f5e +0x038:  jne    08289f68 <+0x42>
08289f60 +0x03a:  mov    0xc(%ebp),%eax
08289f63 +0x03d:  cmp    0x10(%ebp),%eax
08289f66 +0x040:  jne    08289f6f <+0x49>
08289f68 +0x042:  mov    $0x1,%eax
08289f6d +0x047:  jmp    08289f74 <+0x4e>
08289f6f +0x049:  mov    $0x0,%eax
08289f74 +0x04e:  test   %al,%al
08289f76 +0x050:  je     08289f82 <+0x5c>
08289f78 +0x052:  mov    $0x0,%eax
08289f7d +0x057:  jmp    0828a123 <+0x1fd>
08289f82 +0x05c:  lea    -0x45(%ebp),%eax
08289f85 +0x05f:  mov    %eax,(%esp)
08289f88 +0x062:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08289f8d +0x067:  mov    0xc(%ebp),%edx
08289f90 +0x06a:  mov    0x8(%ebp),%eax
08289f93 +0x06d:  imul   $0x3d,%edx,%edx
08289f96 +0x070:  mov    0x4(%edx,%eax,1),%ecx
08289f9a +0x074:  mov    %ecx,-0x45(%ebp)
08289f9d +0x077:  mov    0x8(%edx,%eax,1),%ecx
08289fa1 +0x07b:  mov    %ecx,-0x41(%ebp)
08289fa4 +0x07e:  mov    0xc(%edx,%eax,1),%ecx
08289fa8 +0x082:  mov    %ecx,-0x3d(%ebp)
08289fab +0x085:  mov    0x10(%edx,%eax,1),%ecx
08289faf +0x089:  mov    %ecx,-0x39(%ebp)
08289fb2 +0x08c:  mov    0x14(%edx,%eax,1),%ecx
08289fb6 +0x090:  mov    %ecx,-0x35(%ebp)
08289fb9 +0x093:  mov    0x18(%edx,%eax,1),%ecx
08289fbd +0x097:  mov    %ecx,-0x31(%ebp)
08289fc0 +0x09a:  mov    0x1c(%edx,%eax,1),%ecx
08289fc4 +0x09e:  mov    %ecx,-0x2d(%ebp)
08289fc7 +0x0a1:  mov    0x20(%edx,%eax,1),%ecx
08289fcb +0x0a5:  mov    %ecx,-0x29(%ebp)
08289fce +0x0a8:  mov    0x24(%edx,%eax,1),%ecx
08289fd2 +0x0ac:  mov    %ecx,-0x25(%ebp)
08289fd5 +0x0af:  mov    0x28(%edx,%eax,1),%ecx
08289fd9 +0x0b3:  mov    %ecx,-0x21(%ebp)
08289fdc +0x0b6:  mov    0x2c(%edx,%eax,1),%ecx
08289fe0 +0x0ba:  mov    %ecx,-0x1d(%ebp)
08289fe3 +0x0bd:  mov    0x30(%edx,%eax,1),%ecx
08289fe7 +0x0c1:  mov    %ecx,-0x19(%ebp)
08289fea +0x0c4:  mov    0x34(%edx,%eax,1),%ecx
08289fee +0x0c8:  mov    %ecx,-0x15(%ebp)
08289ff1 +0x0cb:  mov    0x38(%edx,%eax,1),%ecx
08289ff5 +0x0cf:  mov    %ecx,-0x11(%ebp)
08289ff8 +0x0d2:  mov    0x3c(%edx,%eax,1),%ecx
08289ffc +0x0d6:  mov    %ecx,-0xd(%ebp)
08289fff +0x0d9:  movzbl 0x40(%edx,%eax,1),%eax
0828a004 +0x0de:  mov    %al,-0x9(%ebp)
0828a007 +0x0e1:  mov    0xc(%ebp),%edx
0828a00a +0x0e4:  mov    0x10(%ebp),%ebx
0828a00d +0x0e7:  mov    0x8(%ebp),%eax
0828a010 +0x0ea:  imul   $0x3d,%edx,%edx
0828a013 +0x0ed:  mov    0x8(%ebp),%ecx
0828a016 +0x0f0:  imul   $0x3d,%ebx,%ebx
0828a019 +0x0f3:  mov    0x4(%ebx,%ecx,1),%esi
0828a01d +0x0f7:  mov    %esi,0x4(%edx,%eax,1)
0828a021 +0x0fb:  mov    0x8(%ebx,%ecx,1),%esi
0828a025 +0x0ff:  mov    %esi,0x8(%edx,%eax,1)
0828a029 +0x103:  mov    0xc(%ebx,%ecx,1),%esi
0828a02d +0x107:  mov    %esi,0xc(%edx,%eax,1)
0828a031 +0x10b:  mov    0x10(%ebx,%ecx,1),%esi
0828a035 +0x10f:  mov    %esi,0x10(%edx,%eax,1)
0828a039 +0x113:  mov    0x14(%ebx,%ecx,1),%esi
0828a03d +0x117:  mov    %esi,0x14(%edx,%eax,1)
0828a041 +0x11b:  mov    0x18(%ebx,%ecx,1),%esi
0828a045 +0x11f:  mov    %esi,0x18(%edx,%eax,1)
0828a049 +0x123:  mov    0x1c(%ebx,%ecx,1),%esi
0828a04d +0x127:  mov    %esi,0x1c(%edx,%eax,1)
0828a051 +0x12b:  mov    0x20(%ebx,%ecx,1),%esi
0828a055 +0x12f:  mov    %esi,0x20(%edx,%eax,1)
0828a059 +0x133:  mov    0x24(%ebx,%ecx,1),%esi
0828a05d +0x137:  mov    %esi,0x24(%edx,%eax,1)
0828a061 +0x13b:  mov    0x28(%ebx,%ecx,1),%esi
0828a065 +0x13f:  mov    %esi,0x28(%edx,%eax,1)
0828a069 +0x143:  mov    0x2c(%ebx,%ecx,1),%esi
0828a06d +0x147:  mov    %esi,0x2c(%edx,%eax,1)
0828a071 +0x14b:  mov    0x30(%ebx,%ecx,1),%esi
0828a075 +0x14f:  mov    %esi,0x30(%edx,%eax,1)
0828a079 +0x153:  mov    0x34(%ebx,%ecx,1),%esi
0828a07d +0x157:  mov    %esi,0x34(%edx,%eax,1)
0828a081 +0x15b:  mov    0x38(%ebx,%ecx,1),%esi
0828a085 +0x15f:  mov    %esi,0x38(%edx,%eax,1)
0828a089 +0x163:  mov    0x3c(%ebx,%ecx,1),%esi
0828a08d +0x167:  mov    %esi,0x3c(%edx,%eax,1)
0828a091 +0x16b:  movzbl 0x40(%ebx,%ecx,1),%ecx
0828a096 +0x170:  mov    %cl,0x40(%edx,%eax,1)
0828a09a +0x174:  mov    0x10(%ebp),%edx
0828a09d +0x177:  mov    0x8(%ebp),%eax
0828a0a0 +0x17a:  imul   $0x3d,%edx,%edx
0828a0a3 +0x17d:  mov    -0x45(%ebp),%ecx
0828a0a6 +0x180:  mov    %ecx,0x4(%edx,%eax,1)
0828a0aa +0x184:  mov    -0x41(%ebp),%ecx
0828a0ad +0x187:  mov    %ecx,0x8(%edx,%eax,1)
0828a0b1 +0x18b:  mov    -0x3d(%ebp),%ecx
0828a0b4 +0x18e:  mov    %ecx,0xc(%edx,%eax,1)
0828a0b8 +0x192:  mov    -0x39(%ebp),%ecx
0828a0bb +0x195:  mov    %ecx,0x10(%edx,%eax,1)
0828a0bf +0x199:  mov    -0x35(%ebp),%ecx
0828a0c2 +0x19c:  mov    %ecx,0x14(%edx,%eax,1)
0828a0c6 +0x1a0:  mov    -0x31(%ebp),%ecx
0828a0c9 +0x1a3:  mov    %ecx,0x18(%edx,%eax,1)
0828a0cd +0x1a7:  mov    -0x2d(%ebp),%ecx
0828a0d0 +0x1aa:  mov    %ecx,0x1c(%edx,%eax,1)
0828a0d4 +0x1ae:  mov    -0x29(%ebp),%ecx
0828a0d7 +0x1b1:  mov    %ecx,0x20(%edx,%eax,1)
0828a0db +0x1b5:  mov    -0x25(%ebp),%ecx
0828a0de +0x1b8:  mov    %ecx,0x24(%edx,%eax,1)
0828a0e2 +0x1bc:  mov    -0x21(%ebp),%ecx
0828a0e5 +0x1bf:  mov    %ecx,0x28(%edx,%eax,1)
0828a0e9 +0x1c3:  mov    -0x1d(%ebp),%ecx
0828a0ec +0x1c6:  mov    %ecx,0x2c(%edx,%eax,1)
0828a0f0 +0x1ca:  mov    -0x19(%ebp),%ecx
0828a0f3 +0x1cd:  mov    %ecx,0x30(%edx,%eax,1)
0828a0f7 +0x1d1:  mov    -0x15(%ebp),%ecx
0828a0fa +0x1d4:  mov    %ecx,0x34(%edx,%eax,1)
0828a0fe +0x1d8:  mov    -0x11(%ebp),%ecx
0828a101 +0x1db:  mov    %ecx,0x38(%edx,%eax,1)
0828a105 +0x1df:  mov    -0xd(%ebp),%ecx
0828a108 +0x1e2:  mov    %ecx,0x3c(%edx,%eax,1)
0828a10c +0x1e6:  movzbl -0x9(%ebp),%ecx
0828a110 +0x1ea:  mov    %cl,0x40(%edx,%eax,1)
0828a114 +0x1ee:  mov    0x8(%ebp),%eax
0828a117 +0x1f1:  movb   $0x1,0xd64(%eax)
0828a11e +0x1f8:  mov    $0x1,%eax
0828a123 +0x1fd:  add    $0x50,%esp
0828a126 +0x200:  pop    %ebx
0828a127 +0x201:  pop    %esi
0828a128 +0x202:  pop    %ebp
0828a129 +0x203:  ret
```

## 反编译 C

```c
// CAccountCargo::MoveItem @ 0x8289f26

/* CAccountCargo::MoveItem(int, int) */

bool __thiscall CAccountCargo::MoveItem(CAccountCargo *this,int param_1,int param_2)

{
  CAccountCargo CVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  Inven_Item local_49 [61];
  
  cVar18 = CheckValidSlot(this,param_1);
  if (((cVar18 == '\x01') && (cVar18 = CheckValidSlot(this,param_2), cVar18 == '\x01')) &&
     (param_1 != param_2)) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  if (!bVar17) {
    Inven_Item::Inven_Item(local_49);
    iVar19 = param_1 * 0x3d;
    uVar2 = *(undefined4 *)(this + iVar19 + 4);
    uVar3 = *(undefined4 *)(this + iVar19 + 8);
    uVar4 = *(undefined4 *)(this + iVar19 + 0xc);
    uVar5 = *(undefined4 *)(this + iVar19 + 0x10);
    uVar6 = *(undefined4 *)(this + iVar19 + 0x14);
    uVar7 = *(undefined4 *)(this + iVar19 + 0x18);
    uVar8 = *(undefined4 *)(this + iVar19 + 0x1c);
    uVar9 = *(undefined4 *)(this + iVar19 + 0x20);
    uVar10 = *(undefined4 *)(this + iVar19 + 0x24);
    uVar11 = *(undefined4 *)(this + iVar19 + 0x28);
    uVar12 = *(undefined4 *)(this + iVar19 + 0x2c);
    uVar13 = *(undefined4 *)(this + iVar19 + 0x30);
    uVar14 = *(undefined4 *)(this + iVar19 + 0x34);
    uVar15 = *(undefined4 *)(this + iVar19 + 0x38);
    uVar16 = *(undefined4 *)(this + iVar19 + 0x3c);
    CVar1 = this[iVar19 + 0x40];
    iVar19 = param_1 * 0x3d;
    iVar20 = param_2 * 0x3d;
    *(undefined4 *)(this + iVar19 + 4) = *(undefined4 *)(this + iVar20 + 4);
    *(undefined4 *)(this + iVar19 + 8) = *(undefined4 *)(this + iVar20 + 8);
    *(undefined4 *)(this + iVar19 + 0xc) = *(undefined4 *)(this + iVar20 + 0xc);
    *(undefined4 *)(this + iVar19 + 0x10) = *(undefined4 *)(this + iVar20 + 0x10);
    *(undefined4 *)(this + iVar19 + 0x14) = *(undefined4 *)(this + iVar20 + 0x14);
    *(undefined4 *)(this + iVar19 + 0x18) = *(undefined4 *)(this + iVar20 + 0x18);
    *(undefined4 *)(this + iVar19 + 0x1c) = *(undefined4 *)(this + iVar20 + 0x1c);
    *(undefined4 *)(this + iVar19 + 0x20) = *(undefined4 *)(this + iVar20 + 0x20);
    *(undefined4 *)(this + iVar19 + 0x24) = *(undefined4 *)(this + iVar20 + 0x24);
    *(undefined4 *)(this + iVar19 + 0x28) = *(undefined4 *)(this + iVar20 + 0x28);
    *(undefined4 *)(this + iVar19 + 0x2c) = *(undefined4 *)(this + iVar20 + 0x2c);
    *(undefined4 *)(this + iVar19 + 0x30) = *(undefined4 *)(this + iVar20 + 0x30);
    *(undefined4 *)(this + iVar19 + 0x34) = *(undefined4 *)(this + iVar20 + 0x34);
    *(undefined4 *)(this + iVar19 + 0x38) = *(undefined4 *)(this + iVar20 + 0x38);
    *(undefined4 *)(this + iVar19 + 0x3c) = *(undefined4 *)(this + iVar20 + 0x3c);
    this[iVar19 + 0x40] = this[iVar20 + 0x40];
    iVar19 = param_2 * 0x3d;
    *(undefined4 *)(this + iVar19 + 4) = uVar2;
    *(undefined4 *)(this + iVar19 + 8) = uVar3;
    *(undefined4 *)(this + iVar19 + 0xc) = uVar4;
    *(undefined4 *)(this + iVar19 + 0x10) = uVar5;
    *(undefined4 *)(this + iVar19 + 0x14) = uVar6;
    *(undefined4 *)(this + iVar19 + 0x18) = uVar7;
    *(undefined4 *)(this + iVar19 + 0x1c) = uVar8;
    *(undefined4 *)(this + iVar19 + 0x20) = uVar9;
    *(undefined4 *)(this + iVar19 + 0x24) = uVar10;
    *(undefined4 *)(this + iVar19 + 0x28) = uVar11;
    *(undefined4 *)(this + iVar19 + 0x2c) = uVar12;
    *(undefined4 *)(this + iVar19 + 0x30) = uVar13;
    *(undefined4 *)(this + iVar19 + 0x34) = uVar14;
    *(undefined4 *)(this + iVar19 + 0x38) = uVar15;
    *(undefined4 *)(this + iVar19 + 0x3c) = uVar16;
    this[iVar19 + 0x40] = CVar1;
    this[0xd64] = (CAccountCargo)0x1;
  }
  return !bVar17;
}
```

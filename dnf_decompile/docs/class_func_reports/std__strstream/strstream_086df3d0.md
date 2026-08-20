# strstream

`_ZNSt9strstreamC1Ev`

`std::strstream::strstream()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086df3d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df3d0  _ZNSt9strstreamC1Ev
#           std::strstream::strstream()
# range [0x086df3d0, 0x086df53f]
086df3d0 +0x000:  push   %ebp
086df3d1 +0x001:  mov    %esp,%ebp
086df3d3 +0x003:  push   %edi
086df3d4 +0x004:  push   %esi
086df3d5 +0x005:  push   %ebx
086df3d6 +0x006:  sub    $0x2c,%esp
086df3d9 +0x009:  mov    0x8(%ebp),%ebx
086df3dc +0x00c:  lea    0x38(%ebx),%esi
086df3df +0x00f:  mov    %esi,(%esp)
086df3e2 +0x012:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086df3e7 +0x017:  mov    &_ZTTSt9strstream+0x8,%edi
086df3ed +0x01d:  movb   $0x0,0x74(%esi)
086df3f1 +0x021:  mov    &_ZTTSt9strstream+0xc,%edx
086df3f7 +0x027:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x38(%ebx)
086df3fe +0x02e:  movl   $0x0,0x70(%esi)
086df405 +0x035:  mov    -0xc(%edi),%eax
086df408 +0x038:  mov    %edi,(%ebx)
086df40a +0x03a:  movl   $0x0,0x4(%ebx)
086df411 +0x041:  movb   $0x0,0x75(%esi)
086df415 +0x045:  mov    %edx,(%ebx,%eax,1)
086df418 +0x048:  movl   $0x0,0x78(%esi)
086df41f +0x04f:  movl   $0x0,0x7c(%esi)
086df426 +0x056:  movl   $0x0,0x80(%esi)
086df430 +0x060:  movl   $0x0,0x84(%esi)
086df43a +0x06a:  movl   $0x0,0x4(%esp)
086df442 +0x072:  mov    (%ebx),%eax
086df444 +0x074:  mov    -0xc(%eax),%eax
086df447 +0x077:  lea    (%ebx,%eax,1),%eax
086df44a +0x07a:  mov    %eax,(%esp)
086df44d +0x07d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df452 +0x082:  mov    &_ZTTSt9strstream+0x10,%edx
086df458 +0x088:  lea    0x8(%ebx),%eax
086df45b +0x08b:  mov    &_ZTTSt9strstream+0x14,%ecx
086df461 +0x091:  mov    %edx,0x8(%ebx)
086df464 +0x094:  mov    -0xc(%edx),%edx
086df467 +0x097:  mov    %ecx,0x8(%ebx,%edx,1)
086df46b +0x09b:  movl   $0x0,0x4(%esp)
086df473 +0x0a3:  mov    0x8(%ebx),%edx
086df476 +0x0a6:  add    -0xc(%edx),%eax
086df479 +0x0a9:  mov    %eax,(%esp)
086df47c +0x0ac:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df481 +0x0b1:  mov    &_ZTTSt9strstream+0x4,%eax
086df486 +0x0b6:  lea    0xc(%ebx),%edi
086df489 +0x0b9:  mov    &_ZTTSt9strstream+0x18,%edx
086df48f +0x0bf:  mov    -0xc(%eax),%eax
086df492 +0x0c2:  mov    %edx,(%ebx,%eax,1)
086df495 +0x0c5:  movl   $&_ZTVSt9strstream+0xc,(%ebx)
086df49b +0x0cb:  movl   $&_ZTVSt9strstream+0x34,0x38(%ebx)
086df4a2 +0x0d2:  movl   $&_ZTVSt9strstream+0x20,0x8(%ebx)
086df4a9 +0x0d9:  movl   $0x0,0x4(%esp)
086df4b1 +0x0e1:  mov    %edi,(%esp)
086df4b4 +0x0e4:  call   086ddb90 <_ZNSt12strstreambufC1Ei>  ; std::strstreambuf::strstreambuf(int)
086df4b9 +0x0e9:  mov    %edi,0x4(%esp)
086df4bd +0x0ed:  mov    %esi,(%esp)
086df4c0 +0x0f0:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df4c5 +0x0f5:  add    $0x2c,%esp
086df4c8 +0x0f8:  pop    %ebx
086df4c9 +0x0f9:  pop    %esi
086df4ca +0x0fa:  pop    %edi
086df4cb +0x0fb:  pop    %ebp
086df4cc +0x0fc:  ret
086df4cd +0x0fd:  mov    %eax,-0x1c(%ebp)
086df4d0 +0x100:  mov    %esi,(%esp)
086df4d3 +0x103:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086df4d8 +0x108:  mov    -0x1c(%ebp),%eax
086df4db +0x10b:  mov    %eax,(%esp)
086df4de +0x10e:  call   08ae3750 <_Unwind_Resume>
086df4e3 +0x113:  mov    %eax,-0x1c(%ebp)
086df4e6 +0x116:  mov    %edi,(%esp)
086df4e9 +0x119:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086df4ee +0x11e:  mov    -0x1c(%ebp),%eax
086df4f1 +0x121:  mov    %eax,-0x1c(%ebp)
086df4f4 +0x124:  movl   $&_ZTTSt9strstream+0x4,0x4(%esp)
086df4fc +0x12c:  mov    %ebx,(%esp)
086df4ff +0x12f:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086df504 +0x134:  mov    -0x1c(%ebp),%eax
086df507 +0x137:  jmp    086df4cd <+0xfd>
086df509 +0x139:  jmp    086df4f1 <+0x121>
086df50b +0x13b:  mov    -0xc(%edi),%edx
086df50e +0x13e:  mov    &_ZTTSt9strstream+0xc,%ecx
086df514 +0x144:  mov    %edi,(%ebx)
086df516 +0x146:  movl   $0x0,0x4(%ebx)
086df51d +0x14d:  mov    %ecx,(%ebx,%edx,1)
086df520 +0x150:  jmp    086df4cd <+0xfd>
086df522 +0x152:  nop
086df523 +0x153:  nop
086df524 +0x154:  nop
086df525 +0x155:  nop
086df526 +0x156:  nop
086df527 +0x157:  nop
086df528 +0x158:  nop
086df529 +0x159:  nop
086df52a +0x15a:  nop
086df52b +0x15b:  nop
086df52c +0x15c:  nop
086df52d +0x15d:  nop
086df52e +0x15e:  nop
086df52f +0x15f:  nop
086df530 +0x160:  push   %ebp
086df531 +0x161:  mov    %esp,%ebp
086df533 +0x163:  mov    0x8(%ebp),%eax
086df536 +0x166:  movl   $&_ZTVSt14error_category+0x8,(%eax)
086df53c +0x16c:  pop    %ebp
086df53d +0x16d:  ret
086df53e +0x16e:  nop
086df53f +0x16f:  nop
```

## 反编译 C

```c
// std::strstream::strstream @ 0x86df3d0

/* std::strstream::strstream() */

void __thiscall std::strstream::strstream(strstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x38));
  puVar2 = PTR_PTR_08cfe268;
  this[0xac] = (strstream)0x0;
  puVar3 = PTR_PTR_08cfe26c;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa8) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xad] = (strstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
                    /* try { // try from 086df44d to 086df451 has its CatchHandler @ 086df4cd */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
                    /* try { // try from 086df47c to 086df480 has its CatchHandler @ 086df50b */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
                    /* try { // try from 086df4b4 to 086df4b8 has its CatchHandler @ 086df509 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),0);
                    /* try { // try from 086df4c0 to 086df4c4 has its CatchHandler @ 086df4e3 */
  ios::init((ios *)(this + 0x38),(streambuf *)(this + 0xc));
  return;
}
```

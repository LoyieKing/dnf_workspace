# ostrstream

`_ZNSt10ostrstreamC1Ev`

`std::ostrstream::ostrstream()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086de020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de020  _ZNSt10ostrstreamC1Ev
#           std::ostrstream::ostrstream()
# range [0x086de020, 0x086de11f]
086de020 +0x00:  push   %ebp
086de021 +0x01:  mov    %esp,%ebp
086de023 +0x03:  sub    $0x38,%esp
086de026 +0x06:  mov    %ebx,-0xc(%ebp)
086de029 +0x09:  mov    0x8(%ebp),%ebx
086de02c +0x0c:  mov    %esi,-0x8(%ebp)
086de02f +0x0f:  mov    %edi,-0x4(%ebp)
086de032 +0x12:  lea    0x30(%ebx),%esi
086de035 +0x15:  mov    %esi,(%esp)
086de038 +0x18:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086de03d +0x1d:  mov    &_ZTTSt10ostrstream+0x4,%edi
086de043 +0x23:  movb   $0x0,0x74(%esi)
086de047 +0x27:  mov    &_ZTTSt10ostrstream+0x8,%edx
086de04d +0x2d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x30(%ebx)
086de054 +0x34:  movl   $0x0,0x70(%esi)
086de05b +0x3b:  mov    -0xc(%edi),%eax
086de05e +0x3e:  mov    %edi,(%ebx)
086de060 +0x40:  movb   $0x0,0x75(%esi)
086de064 +0x44:  movl   $0x0,0x78(%esi)
086de06b +0x4b:  mov    %edx,(%ebx,%eax,1)
086de06e +0x4e:  movl   $0x0,0x7c(%esi)
086de075 +0x55:  movl   $0x0,0x80(%esi)
086de07f +0x5f:  movl   $0x0,0x84(%esi)
086de089 +0x69:  movl   $0x0,0x4(%esp)
086de091 +0x71:  mov    (%ebx),%eax
086de093 +0x73:  mov    -0xc(%eax),%eax
086de096 +0x76:  lea    (%ebx,%eax,1),%eax
086de099 +0x79:  mov    %eax,(%esp)
086de09c +0x7c:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de0a1 +0x81:  movl   $&_ZTVSt10ostrstream+0xc,(%ebx)
086de0a7 +0x87:  lea    0x4(%ebx),%ecx
086de0aa +0x8a:  movl   $&_ZTVSt10ostrstream+0x20,0x30(%ebx)
086de0b1 +0x91:  mov    %ecx,-0x1c(%ebp)
086de0b4 +0x94:  movl   $0x0,0x4(%esp)
086de0bc +0x9c:  mov    %ecx,(%esp)
086de0bf +0x9f:  call   086ddb90 <_ZNSt12strstreambufC1Ei>  ; std::strstreambuf::strstreambuf(int)
086de0c4 +0xa4:  mov    -0x1c(%ebp),%eax
086de0c7 +0xa7:  mov    %esi,(%esp)
086de0ca +0xaa:  mov    %eax,0x4(%esp)
086de0ce +0xae:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de0d3 +0xb3:  mov    -0xc(%ebp),%ebx
086de0d6 +0xb6:  mov    -0x8(%ebp),%esi
086de0d9 +0xb9:  mov    -0x4(%ebp),%edi
086de0dc +0xbc:  mov    %ebp,%esp
086de0de +0xbe:  pop    %ebp
086de0df +0xbf:  ret
086de0e0 +0xc0:  mov    %eax,-0x20(%ebp)
086de0e3 +0xc3:  mov    %esi,(%esp)
086de0e6 +0xc6:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086de0eb +0xcb:  mov    -0x20(%ebp),%eax
086de0ee +0xce:  mov    %eax,(%esp)
086de0f1 +0xd1:  call   08ae3750 <_Unwind_Resume>
086de0f6 +0xd6:  mov    -0x1c(%ebp),%edx
086de0f9 +0xd9:  mov    %eax,-0x20(%ebp)
086de0fc +0xdc:  mov    %edx,(%esp)
086de0ff +0xdf:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de104 +0xe4:  mov    -0x20(%ebp),%eax
086de107 +0xe7:  mov    -0xc(%edi),%edx
086de10a +0xea:  mov    &_ZTTSt10ostrstream+0x8,%ecx
086de110 +0xf0:  mov    %edi,(%ebx)
086de112 +0xf2:  mov    %ecx,(%ebx,%edx,1)
086de115 +0xf5:  jmp    086de0e0 <+0xc0>
086de117 +0xf7:  jmp    086de107 <+0xe7>
086de119 +0xf9:  nop
086de11a +0xfa:  nop
086de11b +0xfb:  nop
086de11c +0xfc:  nop
086de11d +0xfd:  nop
086de11e +0xfe:  nop
086de11f +0xff:  nop
```

## 反编译 C

```c
// std::ostrstream::ostrstream @ 0x86de020

/* std::ostrstream::ostrstream() */

void __thiscall std::ostrstream::ostrstream(ostrstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x30));
  puVar2 = PTR_PTR_08cfe38c;
  this[0xa4] = (ostrstream)0x0;
  puVar3 = PTR_PTR_08cfe390;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa0) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  this[0xa5] = (ostrstream)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
                    /* try { // try from 086de09c to 086de0a0 has its CatchHandler @ 086de0e0 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
                    /* try { // try from 086de0bf to 086de0c3 has its CatchHandler @ 086de117 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),0);
                    /* try { // try from 086de0ce to 086de0d2 has its CatchHandler @ 086de0f6 */
  ios::init((ios *)(this + 0x30),(streambuf *)(this + 4));
  return;
}
```

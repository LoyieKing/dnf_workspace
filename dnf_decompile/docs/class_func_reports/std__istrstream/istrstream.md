# istrstream

`_ZNSt10istrstreamC1EPKci`

`std::istrstream::istrstream(char const*, int)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086de8f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de8f0  _ZNSt10istrstreamC1EPKci
#           std::istrstream::istrstream(char const*, int)
# range [0x086de8f0, 0x086de9ff]
086de8f0 +0x000:  push   %ebp
086de8f1 +0x001:  mov    %esp,%ebp
086de8f3 +0x003:  sub    $0x38,%esp
086de8f6 +0x006:  mov    %ebx,-0xc(%ebp)
086de8f9 +0x009:  mov    0x8(%ebp),%ebx
086de8fc +0x00c:  mov    %esi,-0x8(%ebp)
086de8ff +0x00f:  mov    %edi,-0x4(%ebp)
086de902 +0x012:  lea    0x34(%ebx),%esi
086de905 +0x015:  mov    %esi,(%esp)
086de908 +0x018:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086de90d +0x01d:  mov    &_ZTTSt10istrstream+0x4,%edi
086de913 +0x023:  movb   $0x0,0x74(%esi)
086de917 +0x027:  mov    &_ZTTSt10istrstream+0x8,%edx
086de91d +0x02d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x34(%ebx)
086de924 +0x034:  movl   $0x0,0x70(%esi)
086de92b +0x03b:  mov    -0xc(%edi),%eax
086de92e +0x03e:  mov    %edi,(%ebx)
086de930 +0x040:  movl   $0x0,0x4(%ebx)
086de937 +0x047:  movb   $0x0,0x75(%esi)
086de93b +0x04b:  mov    %edx,(%ebx,%eax,1)
086de93e +0x04e:  movl   $0x0,0x78(%esi)
086de945 +0x055:  movl   $0x0,0x7c(%esi)
086de94c +0x05c:  movl   $0x0,0x80(%esi)
086de956 +0x066:  movl   $0x0,0x84(%esi)
086de960 +0x070:  movl   $0x0,0x4(%esp)
086de968 +0x078:  mov    (%ebx),%eax
086de96a +0x07a:  mov    -0xc(%eax),%eax
086de96d +0x07d:  lea    (%ebx,%eax,1),%eax
086de970 +0x080:  mov    %eax,(%esp)
086de973 +0x083:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de978 +0x088:  mov    0x10(%ebp),%eax
086de97b +0x08b:  lea    0x8(%ebx),%ecx
086de97e +0x08e:  movl   $&_ZTVSt10istrstream+0xc,(%ebx)
086de984 +0x094:  movl   $&_ZTVSt10istrstream+0x20,0x34(%ebx)
086de98b +0x09b:  mov    %ecx,-0x1c(%ebp)
086de98e +0x09e:  mov    %eax,0x8(%esp)
086de992 +0x0a2:  mov    0xc(%ebp),%eax
086de995 +0x0a5:  mov    %ecx,(%esp)
086de998 +0x0a8:  mov    %eax,0x4(%esp)
086de99c +0x0ac:  call   086de400 <_ZNSt12strstreambufC1EPKci>  ; std::strstreambuf::strstreambuf(char const*, int)
086de9a1 +0x0b1:  mov    -0x1c(%ebp),%eax
086de9a4 +0x0b4:  mov    %esi,(%esp)
086de9a7 +0x0b7:  mov    %eax,0x4(%esp)
086de9ab +0x0bb:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de9b0 +0x0c0:  mov    -0xc(%ebp),%ebx
086de9b3 +0x0c3:  mov    -0x8(%ebp),%esi
086de9b6 +0x0c6:  mov    -0x4(%ebp),%edi
086de9b9 +0x0c9:  mov    %ebp,%esp
086de9bb +0x0cb:  pop    %ebp
086de9bc +0x0cc:  ret
086de9bd +0x0cd:  mov    %eax,-0x20(%ebp)
086de9c0 +0x0d0:  mov    %esi,(%esp)
086de9c3 +0x0d3:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086de9c8 +0x0d8:  mov    -0x20(%ebp),%eax
086de9cb +0x0db:  mov    %eax,(%esp)
086de9ce +0x0de:  call   08ae3750 <_Unwind_Resume>
086de9d3 +0x0e3:  mov    -0x1c(%ebp),%edx
086de9d6 +0x0e6:  mov    %eax,-0x20(%ebp)
086de9d9 +0x0e9:  mov    %edx,(%esp)
086de9dc +0x0ec:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de9e1 +0x0f1:  mov    -0xc(%edi),%edx
086de9e4 +0x0f4:  mov    &_ZTTSt10istrstream+0x8,%ecx
086de9ea +0x0fa:  mov    %edi,(%ebx)
086de9ec +0x0fc:  mov    -0x20(%ebp),%eax
086de9ef +0x0ff:  movl   $0x0,0x4(%ebx)
086de9f6 +0x106:  mov    %ecx,(%ebx,%edx,1)
086de9f9 +0x109:  jmp    086de9bd <+0xcd>
086de9fb +0x10b:  nop
086de9fc +0x10c:  nop
086de9fd +0x10d:  nop
086de9fe +0x10e:  nop
086de9ff +0x10f:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86de8f0

/* std::istrstream::istrstream(char const*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086de973 to 086de977 has its CatchHandler @ 086de9bd */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,param_2);
                    /* try { // try from 086de9ab to 086de9af has its CatchHandler @ 086de9d3 */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}
```

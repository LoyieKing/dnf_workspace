# istrstream

`_ZNSt10istrstreamC1EPKc`

`std::istrstream::istrstream(char const*)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086def90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086def90  _ZNSt10istrstreamC1EPKc
#           std::istrstream::istrstream(char const*)
# range [0x086def90, 0x086df09f]
086def90 +0x000:  push   %ebp
086def91 +0x001:  mov    %esp,%ebp
086def93 +0x003:  sub    $0x38,%esp
086def96 +0x006:  mov    %ebx,-0xc(%ebp)
086def99 +0x009:  mov    0x8(%ebp),%ebx
086def9c +0x00c:  mov    %esi,-0x8(%ebp)
086def9f +0x00f:  mov    %edi,-0x4(%ebp)
086defa2 +0x012:  lea    0x34(%ebx),%esi
086defa5 +0x015:  mov    %esi,(%esp)
086defa8 +0x018:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086defad +0x01d:  mov    &_ZTTSt10istrstream+0x4,%edi
086defb3 +0x023:  movb   $0x0,0x74(%esi)
086defb7 +0x027:  mov    &_ZTTSt10istrstream+0x8,%edx
086defbd +0x02d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x34(%ebx)
086defc4 +0x034:  movl   $0x0,0x70(%esi)
086defcb +0x03b:  mov    -0xc(%edi),%eax
086defce +0x03e:  mov    %edi,(%ebx)
086defd0 +0x040:  movl   $0x0,0x4(%ebx)
086defd7 +0x047:  movb   $0x0,0x75(%esi)
086defdb +0x04b:  mov    %edx,(%ebx,%eax,1)
086defde +0x04e:  movl   $0x0,0x78(%esi)
086defe5 +0x055:  movl   $0x0,0x7c(%esi)
086defec +0x05c:  movl   $0x0,0x80(%esi)
086deff6 +0x066:  movl   $0x0,0x84(%esi)
086df000 +0x070:  movl   $0x0,0x4(%esp)
086df008 +0x078:  mov    (%ebx),%eax
086df00a +0x07a:  mov    -0xc(%eax),%eax
086df00d +0x07d:  lea    (%ebx,%eax,1),%eax
086df010 +0x080:  mov    %eax,(%esp)
086df013 +0x083:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df018 +0x088:  mov    0xc(%ebp),%eax
086df01b +0x08b:  lea    0x8(%ebx),%ecx
086df01e +0x08e:  movl   $&_ZTVSt10istrstream+0xc,(%ebx)
086df024 +0x094:  movl   $&_ZTVSt10istrstream+0x20,0x34(%ebx)
086df02b +0x09b:  mov    %ecx,-0x1c(%ebp)
086df02e +0x09e:  mov    %eax,0x4(%esp)
086df032 +0x0a2:  movl   $0x0,0x8(%esp)
086df03a +0x0aa:  mov    %ecx,(%esp)
086df03d +0x0ad:  call   086de400 <_ZNSt12strstreambufC1EPKci>  ; std::strstreambuf::strstreambuf(char const*, int)
086df042 +0x0b2:  mov    -0x1c(%ebp),%eax
086df045 +0x0b5:  mov    %esi,(%esp)
086df048 +0x0b8:  mov    %eax,0x4(%esp)
086df04c +0x0bc:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df051 +0x0c1:  mov    -0xc(%ebp),%ebx
086df054 +0x0c4:  mov    -0x8(%ebp),%esi
086df057 +0x0c7:  mov    -0x4(%ebp),%edi
086df05a +0x0ca:  mov    %ebp,%esp
086df05c +0x0cc:  pop    %ebp
086df05d +0x0cd:  ret
086df05e +0x0ce:  mov    %eax,-0x20(%ebp)
086df061 +0x0d1:  mov    %esi,(%esp)
086df064 +0x0d4:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086df069 +0x0d9:  mov    -0x20(%ebp),%eax
086df06c +0x0dc:  mov    %eax,(%esp)
086df06f +0x0df:  call   08ae3750 <_Unwind_Resume>
086df074 +0x0e4:  mov    -0x1c(%ebp),%edx
086df077 +0x0e7:  mov    %eax,-0x20(%ebp)
086df07a +0x0ea:  mov    %edx,(%esp)
086df07d +0x0ed:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086df082 +0x0f2:  mov    -0xc(%edi),%edx
086df085 +0x0f5:  mov    &_ZTTSt10istrstream+0x8,%ecx
086df08b +0x0fb:  mov    %edi,(%ebx)
086df08d +0x0fd:  mov    -0x20(%ebp),%eax
086df090 +0x100:  movl   $0x0,0x4(%ebx)
086df097 +0x107:  mov    %ecx,(%ebx,%edx,1)
086df09a +0x10a:  jmp    086df05e <+0xce>
086df09c +0x10c:  nop
086df09d +0x10d:  nop
086df09e +0x10e:  nop
086df09f +0x10f:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86def90

/* std::istrstream::istrstream(char const*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

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
                    /* try { // try from 086df013 to 086df017 has its CatchHandler @ 086df05e */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,0);
                    /* try { // try from 086df04c to 086df050 has its CatchHandler @ 086df074 */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}
```

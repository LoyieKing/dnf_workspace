# istrstream

`_ZNSt10istrstreamC1EPc`

`std::istrstream::istrstream(char*)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086dea00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dea00  _ZNSt10istrstreamC1EPc
#           std::istrstream::istrstream(char*)
# range [0x086dea00, 0x086deb1f]
086dea00 +0x000:  push   %ebp
086dea01 +0x001:  mov    %esp,%ebp
086dea03 +0x003:  sub    $0x38,%esp
086dea06 +0x006:  mov    %ebx,-0xc(%ebp)
086dea09 +0x009:  mov    0x8(%ebp),%ebx
086dea0c +0x00c:  mov    %esi,-0x8(%ebp)
086dea0f +0x00f:  mov    %edi,-0x4(%ebp)
086dea12 +0x012:  lea    0x34(%ebx),%esi
086dea15 +0x015:  mov    %esi,(%esp)
086dea18 +0x018:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086dea1d +0x01d:  mov    &_ZTTSt10istrstream+0x4,%edi
086dea23 +0x023:  movb   $0x0,0x74(%esi)
086dea27 +0x027:  mov    &_ZTTSt10istrstream+0x8,%edx
086dea2d +0x02d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x34(%ebx)
086dea34 +0x034:  movl   $0x0,0x70(%esi)
086dea3b +0x03b:  mov    -0xc(%edi),%eax
086dea3e +0x03e:  mov    %edi,(%ebx)
086dea40 +0x040:  movl   $0x0,0x4(%ebx)
086dea47 +0x047:  movb   $0x0,0x75(%esi)
086dea4b +0x04b:  mov    %edx,(%ebx,%eax,1)
086dea4e +0x04e:  movl   $0x0,0x78(%esi)
086dea55 +0x055:  movl   $0x0,0x7c(%esi)
086dea5c +0x05c:  movl   $0x0,0x80(%esi)
086dea66 +0x066:  movl   $0x0,0x84(%esi)
086dea70 +0x070:  movl   $0x0,0x4(%esp)
086dea78 +0x078:  mov    (%ebx),%eax
086dea7a +0x07a:  mov    -0xc(%eax),%eax
086dea7d +0x07d:  lea    (%ebx,%eax,1),%eax
086dea80 +0x080:  mov    %eax,(%esp)
086dea83 +0x083:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086dea88 +0x088:  mov    0xc(%ebp),%eax
086dea8b +0x08b:  lea    0x8(%ebx),%ecx
086dea8e +0x08e:  movl   $&_ZTVSt10istrstream+0xc,(%ebx)
086dea94 +0x094:  movl   $&_ZTVSt10istrstream+0x20,0x34(%ebx)
086dea9b +0x09b:  mov    %ecx,-0x1c(%ebp)
086dea9e +0x09e:  mov    %eax,0x4(%esp)
086deaa2 +0x0a2:  movl   $0x0,0xc(%esp)
086deaaa +0x0aa:  movl   $0x0,0x8(%esp)
086deab2 +0x0b2:  mov    %ecx,(%esp)
086deab5 +0x0b5:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086deaba +0x0ba:  mov    -0x1c(%ebp),%eax
086deabd +0x0bd:  mov    %esi,(%esp)
086deac0 +0x0c0:  mov    %eax,0x4(%esp)
086deac4 +0x0c4:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086deac9 +0x0c9:  mov    -0xc(%ebp),%ebx
086deacc +0x0cc:  mov    -0x8(%ebp),%esi
086deacf +0x0cf:  mov    -0x4(%ebp),%edi
086dead2 +0x0d2:  mov    %ebp,%esp
086dead4 +0x0d4:  pop    %ebp
086dead5 +0x0d5:  ret
086dead6 +0x0d6:  mov    %eax,-0x20(%ebp)
086dead9 +0x0d9:  mov    %esi,(%esp)
086deadc +0x0dc:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086deae1 +0x0e1:  mov    -0x20(%ebp),%eax
086deae4 +0x0e4:  mov    %eax,(%esp)
086deae7 +0x0e7:  call   08ae3750 <_Unwind_Resume>
086deaec +0x0ec:  mov    -0x1c(%ebp),%edx
086deaef +0x0ef:  mov    %eax,-0x20(%ebp)
086deaf2 +0x0f2:  mov    %edx,(%esp)
086deaf5 +0x0f5:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086deafa +0x0fa:  mov    -0xc(%edi),%edx
086deafd +0x0fd:  mov    &_ZTTSt10istrstream+0x8,%ecx
086deb03 +0x103:  mov    %edi,(%ebx)
086deb05 +0x105:  mov    -0x20(%ebp),%eax
086deb08 +0x108:  movl   $0x0,0x4(%ebx)
086deb0f +0x10f:  mov    %ecx,(%ebx,%edx,1)
086deb12 +0x112:  jmp    086dead6 <+0xd6>
086deb14 +0x114:  nop
086deb15 +0x115:  nop
086deb16 +0x116:  nop
086deb17 +0x117:  nop
086deb18 +0x118:  nop
086deb19 +0x119:  nop
086deb1a +0x11a:  nop
086deb1b +0x11b:  nop
086deb1c +0x11c:  nop
086deb1d +0x11d:  nop
086deb1e +0x11e:  nop
086deb1f +0x11f:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86dea00

/* std::istrstream::istrstream(char*) */

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
                    /* try { // try from 086dea83 to 086dea87 has its CatchHandler @ 086dead6 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,0,(char *)0x0);
                    /* try { // try from 086deac4 to 086deac8 has its CatchHandler @ 086deaec */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}
```

# ~istrstream

`_ZNSt10istrstreamD1Ev`

`std::istrstream::~istrstream()`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086ddea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddea0  _ZNSt10istrstreamD1Ev
#           std::istrstream::~istrstream()
# range [0x086ddea0, 0x086ddf2f]
086ddea0 +0x00:  push   %ebp
086ddea1 +0x01:  mov    %esp,%ebp
086ddea3 +0x03:  sub    $0x28,%esp
086ddea6 +0x06:  mov    %ebx,-0x8(%ebp)
086ddea9 +0x09:  mov    0x8(%ebp),%ebx
086ddeac +0x0c:  mov    %esi,-0x4(%ebp)
086ddeaf +0x0f:  lea    0x8(%ebx),%eax
086ddeb2 +0x12:  movl   $&_ZTVSt10istrstream+0xc,(%ebx)
086ddeb8 +0x18:  lea    0x34(%ebx),%esi
086ddebb +0x1b:  movl   $&_ZTVSt10istrstream+0x20,0x34(%ebx)
086ddec2 +0x22:  mov    %eax,(%esp)
086ddec5 +0x25:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ddeca +0x2a:  mov    &_ZTTSt10istrstream+0x4,%eax
086ddecf +0x2f:  mov    &_ZTTSt10istrstream+0x8,%edx
086dded5 +0x35:  mov    %eax,(%ebx)
086dded7 +0x37:  mov    -0xc(%eax),%eax
086ddeda +0x3a:  movl   $0x0,0x4(%ebx)
086ddee1 +0x41:  mov    %edx,(%ebx,%eax,1)
086ddee4 +0x44:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x34(%ebx)
086ddeeb +0x4b:  mov    -0x8(%ebp),%ebx
086ddeee +0x4e:  mov    %esi,0x8(%ebp)
086ddef1 +0x51:  mov    -0x4(%ebp),%esi
086ddef4 +0x54:  mov    %ebp,%esp
086ddef6 +0x56:  pop    %ebp
086ddef7 +0x57:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086ddefc +0x5c:  mov    &_ZTTSt10istrstream+0x4,%edx
086ddf02 +0x62:  mov    &_ZTTSt10istrstream+0x8,%ecx
086ddf08 +0x68:  mov    %eax,-0xc(%ebp)
086ddf0b +0x6b:  mov    %edx,(%ebx)
086ddf0d +0x6d:  mov    -0xc(%edx),%edx
086ddf10 +0x70:  movl   $0x0,0x4(%ebx)
086ddf17 +0x77:  mov    %ecx,(%ebx,%edx,1)
086ddf1a +0x7a:  mov    %esi,(%esp)
086ddf1d +0x7d:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086ddf22 +0x82:  mov    -0xc(%ebp),%eax
086ddf25 +0x85:  mov    %eax,(%esp)
086ddf28 +0x88:  call   08ae3750 <_Unwind_Resume>
086ddf2d +0x8d:  nop
086ddf2e +0x8e:  nop
086ddf2f +0x8f:  nop
```

## 反编译 C

```c
// std::istrstream::~istrstream @ 0x86ddea0

/* std::istrstream::~istrstream() */

void __thiscall std::istrstream::~istrstream(istrstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
                    /* try { // try from 086ddec5 to 086ddec9 has its CatchHandler @ 086ddefc */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 8));
  puVar3 = PTR_PTR_08cfe410;
  puVar2 = PTR_PTR_08cfe40c;
  *(undefined **)this = PTR_PTR_08cfe40c;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x34));
  return;
}
```

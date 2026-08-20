# ~ostrstream

`_ZNSt10ostrstreamD1Ev`

`std::ostrstream::~ostrstream()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086dddc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dddc0  _ZNSt10ostrstreamD1Ev
#           std::ostrstream::~ostrstream()
# range [0x086dddc0, 0x086dde3f]
086dddc0 +0x00:  push   %ebp
086dddc1 +0x01:  mov    %esp,%ebp
086dddc3 +0x03:  sub    $0x28,%esp
086dddc6 +0x06:  mov    %ebx,-0x8(%ebp)
086dddc9 +0x09:  mov    0x8(%ebp),%ebx
086dddcc +0x0c:  mov    %esi,-0x4(%ebp)
086dddcf +0x0f:  lea    0x4(%ebx),%eax
086dddd2 +0x12:  movl   $&_ZTVSt10ostrstream+0xc,(%ebx)
086dddd8 +0x18:  lea    0x30(%ebx),%esi
086ddddb +0x1b:  movl   $&_ZTVSt10ostrstream+0x20,0x30(%ebx)
086ddde2 +0x22:  mov    %eax,(%esp)
086ddde5 +0x25:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086dddea +0x2a:  mov    &_ZTTSt10ostrstream+0x4,%eax
086dddef +0x2f:  mov    &_ZTTSt10ostrstream+0x8,%edx
086dddf5 +0x35:  mov    %eax,(%ebx)
086dddf7 +0x37:  mov    -0xc(%eax),%eax
086dddfa +0x3a:  mov    %edx,(%ebx,%eax,1)
086dddfd +0x3d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x30(%ebx)
086dde04 +0x44:  mov    -0x8(%ebp),%ebx
086dde07 +0x47:  mov    %esi,0x8(%ebp)
086dde0a +0x4a:  mov    -0x4(%ebp),%esi
086dde0d +0x4d:  mov    %ebp,%esp
086dde0f +0x4f:  pop    %ebp
086dde10 +0x50:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086dde15 +0x55:  mov    &_ZTTSt10ostrstream+0x4,%edx
086dde1b +0x5b:  mov    &_ZTTSt10ostrstream+0x8,%ecx
086dde21 +0x61:  mov    %eax,-0xc(%ebp)
086dde24 +0x64:  mov    %edx,(%ebx)
086dde26 +0x66:  mov    -0xc(%edx),%edx
086dde29 +0x69:  mov    %ecx,(%ebx,%edx,1)
086dde2c +0x6c:  mov    %esi,(%esp)
086dde2f +0x6f:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086dde34 +0x74:  mov    -0xc(%ebp),%eax
086dde37 +0x77:  mov    %eax,(%esp)
086dde3a +0x7a:  call   08ae3750 <_Unwind_Resume>
086dde3f +0x7f:  nop
```

## 反编译 C

```c
// std::ostrstream::~ostrstream @ 0x86dddc0

/* std::ostrstream::~ostrstream() */

void __thiscall std::ostrstream::~ostrstream(ostrstream *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
                    /* try { // try from 086ddde5 to 086ddde9 has its CatchHandler @ 086dde15 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 4));
  puVar2 = PTR_PTR_08cfe390;
  puVar1 = PTR_PTR_08cfe38c;
  *(undefined **)this = PTR_PTR_08cfe38c;
  *(undefined **)(this + *(int *)(puVar1 + -0xc)) = puVar2;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x30));
  return;
}
```

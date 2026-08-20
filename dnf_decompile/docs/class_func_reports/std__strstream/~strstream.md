# ~strstream

`_ZNSt9strstreamD1Ev`

`std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086de150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de150  _ZNSt9strstreamD1Ev
#           std::strstream::~strstream()
# range [0x086de150, 0x086de1ff]
086de150 +0x00:  push   %ebp
086de151 +0x01:  mov    %esp,%ebp
086de153 +0x03:  push   %esi
086de154 +0x04:  push   %ebx
086de155 +0x05:  sub    $0x20,%esp
086de158 +0x08:  mov    0x8(%ebp),%ebx
086de15b +0x0b:  movl   $&_ZTVSt9strstream+0xc,(%ebx)
086de161 +0x11:  lea    0xc(%ebx),%eax
086de164 +0x14:  movl   $&_ZTVSt9strstream+0x34,0x38(%ebx)
086de16b +0x1b:  lea    0x38(%ebx),%esi
086de16e +0x1e:  movl   $&_ZTVSt9strstream+0x20,0x8(%ebx)
086de175 +0x25:  mov    %eax,(%esp)
086de178 +0x28:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de17d +0x2d:  mov    &_ZTTSt9strstream+0x4,%eax
086de182 +0x32:  mov    &_ZTTSt9strstream+0x18,%edx
086de188 +0x38:  mov    -0xc(%eax),%eax
086de18b +0x3b:  mov    %edx,(%ebx,%eax,1)
086de18e +0x3e:  mov    &_ZTTSt9strstream+0x10,%eax
086de193 +0x43:  mov    &_ZTTSt9strstream+0x14,%edx
086de199 +0x49:  mov    %eax,0x8(%ebx)
086de19c +0x4c:  mov    -0xc(%eax),%eax
086de19f +0x4f:  mov    %edx,0x8(%ebx,%eax,1)
086de1a3 +0x53:  mov    &_ZTTSt9strstream+0x8,%eax
086de1a8 +0x58:  mov    &_ZTTSt9strstream+0xc,%edx
086de1ae +0x5e:  mov    %eax,(%ebx)
086de1b0 +0x60:  mov    -0xc(%eax),%eax
086de1b3 +0x63:  movl   $0x0,0x4(%ebx)
086de1ba +0x6a:  mov    %edx,(%ebx,%eax,1)
086de1bd +0x6d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x38(%ebx)
086de1c4 +0x74:  mov    %esi,0x8(%ebp)
086de1c7 +0x77:  add    $0x20,%esp
086de1ca +0x7a:  pop    %ebx
086de1cb +0x7b:  pop    %esi
086de1cc +0x7c:  pop    %ebp
086de1cd +0x7d:  jmp    08727070 <_ZNSt8ios_baseD1Ev>  ; std::ios_base::~ios_base()
086de1d2 +0x82:  mov    %eax,-0xc(%ebp)
086de1d5 +0x85:  movl   $&_ZTTSt9strstream+0x4,0x4(%esp)
086de1dd +0x8d:  mov    %ebx,(%esp)
086de1e0 +0x90:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086de1e5 +0x95:  mov    %esi,(%esp)
086de1e8 +0x98:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086de1ed +0x9d:  mov    -0xc(%ebp),%eax
086de1f0 +0xa0:  mov    %eax,(%esp)
086de1f3 +0xa3:  call   08ae3750 <_Unwind_Resume>
086de1f8 +0xa8:  nop
086de1f9 +0xa9:  nop
086de1fa +0xaa:  nop
086de1fb +0xab:  nop
086de1fc +0xac:  nop
086de1fd +0xad:  nop
086de1fe +0xae:  nop
086de1ff +0xaf:  nop
```

## 反编译 C

```c
// std::strstream::~strstream @ 0x86de150

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
                    /* try { // try from 086de178 to 086de17c has its CatchHandler @ 086de1d2 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 0xc));
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
  puVar3 = PTR_PTR_08cfe26c;
  puVar2 = PTR_PTR_08cfe268;
  *(undefined **)this = PTR_PTR_08cfe268;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  ios_base::~ios_base((ios_base *)(this + 0x38));
  return;
}
```

# ~strstream

`_ZNSt9strstreamD2Ev`

`std::strstream::~strstream()`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086de250` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de250  _ZNSt9strstreamD2Ev
#           std::strstream::~strstream()
# range [0x086de250, 0x086de2df]
086de250 +0x00:  push   %ebp
086de251 +0x01:  mov    %esp,%ebp
086de253 +0x03:  push   %esi
086de254 +0x04:  push   %ebx
086de255 +0x05:  sub    $0x20,%esp
086de258 +0x08:  mov    0xc(%ebp),%ebx
086de25b +0x0b:  mov    0x8(%ebp),%esi
086de25e +0x0e:  mov    (%ebx),%eax
086de260 +0x10:  mov    0x20(%ebx),%edx
086de263 +0x13:  mov    %eax,(%esi)
086de265 +0x15:  mov    -0xc(%eax),%eax
086de268 +0x18:  mov    %edx,(%esi,%eax,1)
086de26b +0x1b:  mov    0x24(%ebx),%eax
086de26e +0x1e:  mov    %eax,0x8(%esi)
086de271 +0x21:  lea    0xc(%esi),%eax
086de274 +0x24:  mov    %eax,(%esp)
086de277 +0x27:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de27c +0x2c:  mov    0x4(%ebx),%eax
086de27f +0x2f:  mov    0x18(%ebx),%edx
086de282 +0x32:  mov    -0xc(%eax),%eax
086de285 +0x35:  mov    %edx,(%esi,%eax,1)
086de288 +0x38:  mov    0x10(%ebx),%eax
086de28b +0x3b:  mov    0x14(%ebx),%edx
086de28e +0x3e:  mov    %eax,0x8(%esi)
086de291 +0x41:  mov    -0xc(%eax),%eax
086de294 +0x44:  mov    %edx,0x8(%esi,%eax,1)
086de298 +0x48:  mov    0x8(%ebx),%eax
086de29b +0x4b:  mov    0xc(%ebx),%edx
086de29e +0x4e:  mov    %eax,(%esi)
086de2a0 +0x50:  mov    -0xc(%eax),%eax
086de2a3 +0x53:  movl   $0x0,0x4(%esi)
086de2aa +0x5a:  mov    %edx,(%esi,%eax,1)
086de2ad +0x5d:  add    $0x20,%esp
086de2b0 +0x60:  pop    %ebx
086de2b1 +0x61:  pop    %esi
086de2b2 +0x62:  pop    %ebp
086de2b3 +0x63:  ret
086de2b4 +0x64:  add    $0x4,%ebx
086de2b7 +0x67:  mov    %eax,-0xc(%ebp)
086de2ba +0x6a:  mov    %ebx,0x4(%esp)
086de2be +0x6e:  mov    %esi,(%esp)
086de2c1 +0x71:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086de2c6 +0x76:  mov    -0xc(%ebp),%eax
086de2c9 +0x79:  mov    %eax,(%esp)
086de2cc +0x7c:  call   08ae3750 <_Unwind_Resume>
086de2d1 +0x81:  nop
086de2d2 +0x82:  nop
086de2d3 +0x83:  nop
086de2d4 +0x84:  nop
086de2d5 +0x85:  nop
086de2d6 +0x86:  nop
086de2d7 +0x87:  nop
086de2d8 +0x88:  nop
086de2d9 +0x89:  nop
086de2da +0x8a:  nop
086de2db +0x8b:  nop
086de2dc +0x8c:  nop
086de2dd +0x8d:  nop
086de2de +0x8e:  nop
086de2df +0x8f:  nop
```

## 反编译 C

```c
// std::strstream::~strstream @ 0x86de250

/* std::strstream::~strstream() */

void __thiscall std::strstream::~strstream(strstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[8];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
  *(int *)(this + 8) = in_stack_00000008[9];
                    /* try { // try from 086de277 to 086de27b has its CatchHandler @ 086de2b4 */
  strstreambuf::~strstreambuf((strstreambuf *)(this + 0xc));
  *(int *)(this + *(int *)(in_stack_00000008[1] + -0xc)) = in_stack_00000008[6];
  iVar1 = in_stack_00000008[4];
  iVar2 = in_stack_00000008[5];
  *(int *)(this + 8) = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc) + 8) = iVar2;
  iVar1 = in_stack_00000008[2];
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(int *)(this + iVar1) = iVar2;
  return;
}
```

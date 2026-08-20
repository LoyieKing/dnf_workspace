# ostrstream

`_ZNSt10ostrstreamC2Ev`

`std::ostrstream::ostrstream()`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086ddf70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ddf70  _ZNSt10ostrstreamC2Ev
#           std::ostrstream::ostrstream()
# range [0x086ddf70, 0x086de01f]
086ddf70 +0x00:  push   %ebp
086ddf71 +0x01:  mov    %esp,%ebp
086ddf73 +0x03:  sub    $0x38,%esp
086ddf76 +0x06:  mov    %esi,-0x8(%ebp)
086ddf79 +0x09:  mov    0xc(%ebp),%esi
086ddf7c +0x0c:  mov    %ebx,-0xc(%ebp)
086ddf7f +0x0f:  mov    0x8(%ebp),%ebx
086ddf82 +0x12:  mov    %edi,-0x4(%ebp)
086ddf85 +0x15:  mov    0x4(%esi),%eax
086ddf88 +0x18:  mov    0x8(%esi),%edx
086ddf8b +0x1b:  mov    %eax,(%ebx)
086ddf8d +0x1d:  mov    -0xc(%eax),%eax
086ddf90 +0x20:  mov    %edx,(%ebx,%eax,1)
086ddf93 +0x23:  movl   $0x0,0x4(%esp)
086ddf9b +0x2b:  mov    (%ebx),%eax
086ddf9d +0x2d:  mov    -0xc(%eax),%eax
086ddfa0 +0x30:  lea    (%ebx,%eax,1),%eax
086ddfa3 +0x33:  mov    %eax,(%esp)
086ddfa6 +0x36:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086ddfab +0x3b:  mov    (%esi),%eax
086ddfad +0x3d:  lea    0x4(%ebx),%edi
086ddfb0 +0x40:  mov    0xc(%esi),%edx
086ddfb3 +0x43:  mov    %eax,(%ebx)
086ddfb5 +0x45:  mov    -0xc(%eax),%eax
086ddfb8 +0x48:  mov    %edx,(%ebx,%eax,1)
086ddfbb +0x4b:  movl   $0x0,0x4(%esp)
086ddfc3 +0x53:  mov    %edi,(%esp)
086ddfc6 +0x56:  call   086ddb90 <_ZNSt12strstreambufC1Ei>  ; std::strstreambuf::strstreambuf(int)
086ddfcb +0x5b:  mov    %edi,0x4(%esp)
086ddfcf +0x5f:  mov    (%ebx),%eax
086ddfd1 +0x61:  mov    -0xc(%eax),%eax
086ddfd4 +0x64:  lea    (%ebx,%eax,1),%eax
086ddfd7 +0x67:  mov    %eax,(%esp)
086ddfda +0x6a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086ddfdf +0x6f:  mov    -0xc(%ebp),%ebx
086ddfe2 +0x72:  mov    -0x8(%ebp),%esi
086ddfe5 +0x75:  mov    -0x4(%ebp),%edi
086ddfe8 +0x78:  mov    %ebp,%esp
086ddfea +0x7a:  pop    %ebp
086ddfeb +0x7b:  ret
086ddfec +0x7c:  mov    %eax,(%esp)
086ddfef +0x7f:  call   08ae3750 <_Unwind_Resume>
086ddff4 +0x84:  mov    %eax,-0x1c(%ebp)
086ddff7 +0x87:  mov    %edi,(%esp)
086ddffa +0x8a:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ddfff +0x8f:  mov    -0x1c(%ebp),%eax
086de002 +0x92:  mov    0x4(%esi),%edx
086de005 +0x95:  mov    0x8(%esi),%ecx
086de008 +0x98:  mov    %edx,(%ebx)
086de00a +0x9a:  mov    -0xc(%edx),%edx
086de00d +0x9d:  mov    %ecx,(%ebx,%edx,1)
086de010 +0xa0:  jmp    086ddfec <+0x7c>
086de012 +0xa2:  jmp    086de002 <+0x92>
086de014 +0xa4:  nop
086de015 +0xa5:  nop
086de016 +0xa6:  nop
086de017 +0xa7:  nop
086de018 +0xa8:  nop
086de019 +0xa9:  nop
086de01a +0xaa:  nop
086de01b +0xab:  nop
086de01c +0xac:  nop
086de01d +0xad:  nop
086de01e +0xae:  nop
086de01f +0xaf:  nop
```

## 反编译 C

```c
// std::ostrstream::ostrstream @ 0x86ddf70

/* std::ostrstream::ostrstream() */

void __thiscall std::ostrstream::ostrstream(ostrstream *this)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  
  iVar1 = in_stack_00000008[1];
  iVar2 = in_stack_00000008[2];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddfa6 to 086ddfaa has its CatchHandler @ 086ddfec */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *in_stack_00000008;
  iVar2 = in_stack_00000008[3];
  *(int *)this = iVar1;
  *(int *)(this + *(int *)(iVar1 + -0xc)) = iVar2;
                    /* try { // try from 086ddfc6 to 086ddfca has its CatchHandler @ 086de012 */
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),0);
                    /* try { // try from 086ddfda to 086ddfde has its CatchHandler @ 086ddff4 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 4));
  return;
}
```

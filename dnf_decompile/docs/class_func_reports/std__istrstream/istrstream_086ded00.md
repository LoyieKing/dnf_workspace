# istrstream

`_ZNSt10istrstreamC2EPKc`

`std::istrstream::istrstream(char const*)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086ded00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ded00  _ZNSt10istrstreamC2EPKc
#           std::istrstream::istrstream(char const*)
# range [0x086ded00, 0x086dedbf]
086ded00 +0x00:  push   %ebp
086ded01 +0x01:  mov    %esp,%ebp
086ded03 +0x03:  sub    $0x38,%esp
086ded06 +0x06:  mov    %esi,-0x8(%ebp)
086ded09 +0x09:  mov    0xc(%ebp),%esi
086ded0c +0x0c:  mov    %ebx,-0xc(%ebp)
086ded0f +0x0f:  mov    0x8(%ebp),%ebx
086ded12 +0x12:  mov    %edi,-0x4(%ebp)
086ded15 +0x15:  mov    0x4(%esi),%eax
086ded18 +0x18:  mov    0x8(%esi),%edx
086ded1b +0x1b:  mov    %eax,(%ebx)
086ded1d +0x1d:  mov    -0xc(%eax),%eax
086ded20 +0x20:  movl   $0x0,0x4(%ebx)
086ded27 +0x27:  mov    %edx,(%ebx,%eax,1)
086ded2a +0x2a:  movl   $0x0,0x4(%esp)
086ded32 +0x32:  mov    (%ebx),%eax
086ded34 +0x34:  mov    -0xc(%eax),%eax
086ded37 +0x37:  lea    (%ebx,%eax,1),%eax
086ded3a +0x3a:  mov    %eax,(%esp)
086ded3d +0x3d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086ded42 +0x42:  mov    (%esi),%eax
086ded44 +0x44:  lea    0x8(%ebx),%edi
086ded47 +0x47:  mov    0xc(%esi),%edx
086ded4a +0x4a:  mov    %eax,(%ebx)
086ded4c +0x4c:  mov    -0xc(%eax),%eax
086ded4f +0x4f:  mov    %edx,(%ebx,%eax,1)
086ded52 +0x52:  mov    0x10(%ebp),%eax
086ded55 +0x55:  movl   $0x0,0x8(%esp)
086ded5d +0x5d:  mov    %edi,(%esp)
086ded60 +0x60:  mov    %eax,0x4(%esp)
086ded64 +0x64:  call   086de400 <_ZNSt12strstreambufC1EPKci>  ; std::strstreambuf::strstreambuf(char const*, int)
086ded69 +0x69:  mov    %edi,0x4(%esp)
086ded6d +0x6d:  mov    (%ebx),%eax
086ded6f +0x6f:  mov    -0xc(%eax),%eax
086ded72 +0x72:  lea    (%ebx,%eax,1),%eax
086ded75 +0x75:  mov    %eax,(%esp)
086ded78 +0x78:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086ded7d +0x7d:  mov    -0xc(%ebp),%ebx
086ded80 +0x80:  mov    -0x8(%ebp),%esi
086ded83 +0x83:  mov    -0x4(%ebp),%edi
086ded86 +0x86:  mov    %ebp,%esp
086ded88 +0x88:  pop    %ebp
086ded89 +0x89:  ret
086ded8a +0x8a:  mov    %eax,(%esp)
086ded8d +0x8d:  call   08ae3750 <_Unwind_Resume>
086ded92 +0x92:  mov    %eax,-0x1c(%ebp)
086ded95 +0x95:  mov    %edi,(%esp)
086ded98 +0x98:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086ded9d +0x9d:  mov    0x4(%esi),%edx
086deda0 +0xa0:  mov    0x8(%esi),%ecx
086deda3 +0xa3:  mov    -0x1c(%ebp),%eax
086deda6 +0xa6:  mov    %edx,(%ebx)
086deda8 +0xa8:  mov    -0xc(%edx),%edx
086dedab +0xab:  movl   $0x0,0x4(%ebx)
086dedb2 +0xb2:  mov    %ecx,(%ebx,%edx,1)
086dedb5 +0xb5:  jmp    086ded8a <+0x8a>
086dedb7 +0xb7:  nop
086dedb8 +0xb8:  nop
086dedb9 +0xb9:  nop
086dedba +0xba:  nop
086dedbb +0xbb:  nop
086dedbc +0xbc:  nop
086dedbd +0xbd:  nop
086dedbe +0xbe:  nop
086dedbf +0xbf:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86ded00

/* std::istrstream::istrstream(char const*) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *in_stack_0000000c;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086ded3d to 086ded41 has its CatchHandler @ 086ded8a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),in_stack_0000000c,0);
                    /* try { // try from 086ded78 to 086ded7c has its CatchHandler @ 086ded92 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}
```

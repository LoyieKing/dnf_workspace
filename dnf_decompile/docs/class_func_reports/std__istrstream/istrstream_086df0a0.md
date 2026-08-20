# istrstream

`_ZNSt10istrstreamC2EPKci`

`std::istrstream::istrstream(char const*, int)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086df0a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df0a0  _ZNSt10istrstreamC2EPKci
#           std::istrstream::istrstream(char const*, int)
# range [0x086df0a0, 0x086df15f]
086df0a0 +0x00:  push   %ebp
086df0a1 +0x01:  mov    %esp,%ebp
086df0a3 +0x03:  sub    $0x38,%esp
086df0a6 +0x06:  mov    %esi,-0x8(%ebp)
086df0a9 +0x09:  mov    0xc(%ebp),%esi
086df0ac +0x0c:  mov    %ebx,-0xc(%ebp)
086df0af +0x0f:  mov    0x8(%ebp),%ebx
086df0b2 +0x12:  mov    %edi,-0x4(%ebp)
086df0b5 +0x15:  mov    0x4(%esi),%eax
086df0b8 +0x18:  mov    0x8(%esi),%edx
086df0bb +0x1b:  mov    %eax,(%ebx)
086df0bd +0x1d:  mov    -0xc(%eax),%eax
086df0c0 +0x20:  movl   $0x0,0x4(%ebx)
086df0c7 +0x27:  mov    %edx,(%ebx,%eax,1)
086df0ca +0x2a:  movl   $0x0,0x4(%esp)
086df0d2 +0x32:  mov    (%ebx),%eax
086df0d4 +0x34:  mov    -0xc(%eax),%eax
086df0d7 +0x37:  lea    (%ebx,%eax,1),%eax
086df0da +0x3a:  mov    %eax,(%esp)
086df0dd +0x3d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df0e2 +0x42:  mov    (%esi),%eax
086df0e4 +0x44:  lea    0x8(%ebx),%edi
086df0e7 +0x47:  mov    0xc(%esi),%edx
086df0ea +0x4a:  mov    %eax,(%ebx)
086df0ec +0x4c:  mov    -0xc(%eax),%eax
086df0ef +0x4f:  mov    %edx,(%ebx,%eax,1)
086df0f2 +0x52:  mov    0x14(%ebp),%eax
086df0f5 +0x55:  mov    %edi,(%esp)
086df0f8 +0x58:  mov    %eax,0x8(%esp)
086df0fc +0x5c:  mov    0x10(%ebp),%eax
086df0ff +0x5f:  mov    %eax,0x4(%esp)
086df103 +0x63:  call   086de400 <_ZNSt12strstreambufC1EPKci>  ; std::strstreambuf::strstreambuf(char const*, int)
086df108 +0x68:  mov    %edi,0x4(%esp)
086df10c +0x6c:  mov    (%ebx),%eax
086df10e +0x6e:  mov    -0xc(%eax),%eax
086df111 +0x71:  lea    (%ebx,%eax,1),%eax
086df114 +0x74:  mov    %eax,(%esp)
086df117 +0x77:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df11c +0x7c:  mov    -0xc(%ebp),%ebx
086df11f +0x7f:  mov    -0x8(%ebp),%esi
086df122 +0x82:  mov    -0x4(%ebp),%edi
086df125 +0x85:  mov    %ebp,%esp
086df127 +0x87:  pop    %ebp
086df128 +0x88:  ret
086df129 +0x89:  mov    %eax,(%esp)
086df12c +0x8c:  call   08ae3750 <_Unwind_Resume>
086df131 +0x91:  mov    %eax,-0x1c(%ebp)
086df134 +0x94:  mov    %edi,(%esp)
086df137 +0x97:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086df13c +0x9c:  mov    0x4(%esi),%edx
086df13f +0x9f:  mov    0x8(%esi),%ecx
086df142 +0xa2:  mov    -0x1c(%ebp),%eax
086df145 +0xa5:  mov    %edx,(%ebx)
086df147 +0xa7:  mov    -0xc(%edx),%edx
086df14a +0xaa:  movl   $0x0,0x4(%ebx)
086df151 +0xb1:  mov    %ecx,(%ebx,%edx,1)
086df154 +0xb4:  jmp    086df129 <+0x89>
086df156 +0xb6:  nop
086df157 +0xb7:  nop
086df158 +0xb8:  nop
086df159 +0xb9:  nop
086df15a +0xba:  nop
086df15b +0xbb:  nop
086df15c +0xbc:  nop
086df15d +0xbd:  nop
086df15e +0xbe:  nop
086df15f +0xbf:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86df0a0

/* std::istrstream::istrstream(char const*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000010;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086df0dd to 086df0e1 has its CatchHandler @ 086df129 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),(char *)param_2,in_stack_00000010);
                    /* try { // try from 086df117 to 086df11b has its CatchHandler @ 086df131 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}
```

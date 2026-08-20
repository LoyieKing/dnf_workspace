# istrstream

`_ZNSt10istrstreamC2EPci`

`std::istrstream::istrstream(char*, int)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086deb20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086deb20  _ZNSt10istrstreamC2EPci
#           std::istrstream::istrstream(char*, int)
# range [0x086deb20, 0x086debdf]
086deb20 +0x00:  push   %ebp
086deb21 +0x01:  mov    %esp,%ebp
086deb23 +0x03:  sub    $0x38,%esp
086deb26 +0x06:  mov    %esi,-0x8(%ebp)
086deb29 +0x09:  mov    0xc(%ebp),%esi
086deb2c +0x0c:  mov    %ebx,-0xc(%ebp)
086deb2f +0x0f:  mov    0x8(%ebp),%ebx
086deb32 +0x12:  mov    %edi,-0x4(%ebp)
086deb35 +0x15:  mov    0x4(%esi),%eax
086deb38 +0x18:  mov    0x8(%esi),%edx
086deb3b +0x1b:  mov    %eax,(%ebx)
086deb3d +0x1d:  mov    -0xc(%eax),%eax
086deb40 +0x20:  movl   $0x0,0x4(%ebx)
086deb47 +0x27:  mov    %edx,(%ebx,%eax,1)
086deb4a +0x2a:  movl   $0x0,0x4(%esp)
086deb52 +0x32:  mov    (%ebx),%eax
086deb54 +0x34:  mov    -0xc(%eax),%eax
086deb57 +0x37:  lea    (%ebx,%eax,1),%eax
086deb5a +0x3a:  mov    %eax,(%esp)
086deb5d +0x3d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086deb62 +0x42:  mov    (%esi),%eax
086deb64 +0x44:  lea    0x8(%ebx),%edi
086deb67 +0x47:  mov    0xc(%esi),%edx
086deb6a +0x4a:  mov    %eax,(%ebx)
086deb6c +0x4c:  mov    -0xc(%eax),%eax
086deb6f +0x4f:  mov    %edx,(%ebx,%eax,1)
086deb72 +0x52:  mov    0x14(%ebp),%eax
086deb75 +0x55:  movl   $0x0,0xc(%esp)
086deb7d +0x5d:  mov    %edi,(%esp)
086deb80 +0x60:  mov    %eax,0x8(%esp)
086deb84 +0x64:  mov    0x10(%ebp),%eax
086deb87 +0x67:  mov    %eax,0x4(%esp)
086deb8b +0x6b:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086deb90 +0x70:  mov    %edi,0x4(%esp)
086deb94 +0x74:  mov    (%ebx),%eax
086deb96 +0x76:  mov    -0xc(%eax),%eax
086deb99 +0x79:  lea    (%ebx,%eax,1),%eax
086deb9c +0x7c:  mov    %eax,(%esp)
086deb9f +0x7f:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086deba4 +0x84:  mov    -0xc(%ebp),%ebx
086deba7 +0x87:  mov    -0x8(%ebp),%esi
086debaa +0x8a:  mov    -0x4(%ebp),%edi
086debad +0x8d:  mov    %ebp,%esp
086debaf +0x8f:  pop    %ebp
086debb0 +0x90:  ret
086debb1 +0x91:  mov    %eax,(%esp)
086debb4 +0x94:  call   08ae3750 <_Unwind_Resume>
086debb9 +0x99:  mov    %eax,-0x1c(%ebp)
086debbc +0x9c:  mov    %edi,(%esp)
086debbf +0x9f:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086debc4 +0xa4:  mov    0x4(%esi),%edx
086debc7 +0xa7:  mov    0x8(%esi),%ecx
086debca +0xaa:  mov    -0x1c(%ebp),%eax
086debcd +0xad:  mov    %edx,(%ebx)
086debcf +0xaf:  mov    -0xc(%edx),%edx
086debd2 +0xb2:  movl   $0x0,0x4(%ebx)
086debd9 +0xb9:  mov    %ecx,(%ebx,%edx,1)
086debdc +0xbc:  jmp    086debb1 <+0x91>
086debde +0xbe:  nop
086debdf +0xbf:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86deb20

/* std::istrstream::istrstream(char*, int) */

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
                    /* try { // try from 086deb5d to 086deb61 has its CatchHandler @ 086debb1 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf
            ((strstreambuf *)(this + 8),(char *)param_2,in_stack_00000010,(char *)0x0);
                    /* try { // try from 086deb9f to 086deba3 has its CatchHandler @ 086debb9 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}
```

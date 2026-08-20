# istrstream

`_ZNSt10istrstreamC2EPc`

`std::istrstream::istrstream(char*)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086deed0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086deed0  _ZNSt10istrstreamC2EPc
#           std::istrstream::istrstream(char*)
# range [0x086deed0, 0x086def8f]
086deed0 +0x00:  push   %ebp
086deed1 +0x01:  mov    %esp,%ebp
086deed3 +0x03:  sub    $0x38,%esp
086deed6 +0x06:  mov    %esi,-0x8(%ebp)
086deed9 +0x09:  mov    0xc(%ebp),%esi
086deedc +0x0c:  mov    %ebx,-0xc(%ebp)
086deedf +0x0f:  mov    0x8(%ebp),%ebx
086deee2 +0x12:  mov    %edi,-0x4(%ebp)
086deee5 +0x15:  mov    0x4(%esi),%eax
086deee8 +0x18:  mov    0x8(%esi),%edx
086deeeb +0x1b:  mov    %eax,(%ebx)
086deeed +0x1d:  mov    -0xc(%eax),%eax
086deef0 +0x20:  movl   $0x0,0x4(%ebx)
086deef7 +0x27:  mov    %edx,(%ebx,%eax,1)
086deefa +0x2a:  movl   $0x0,0x4(%esp)
086def02 +0x32:  mov    (%ebx),%eax
086def04 +0x34:  mov    -0xc(%eax),%eax
086def07 +0x37:  lea    (%ebx,%eax,1),%eax
086def0a +0x3a:  mov    %eax,(%esp)
086def0d +0x3d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086def12 +0x42:  mov    (%esi),%eax
086def14 +0x44:  lea    0x8(%ebx),%edi
086def17 +0x47:  mov    0xc(%esi),%edx
086def1a +0x4a:  mov    %eax,(%ebx)
086def1c +0x4c:  mov    -0xc(%eax),%eax
086def1f +0x4f:  mov    %edx,(%ebx,%eax,1)
086def22 +0x52:  mov    0x10(%ebp),%eax
086def25 +0x55:  movl   $0x0,0xc(%esp)
086def2d +0x5d:  movl   $0x0,0x8(%esp)
086def35 +0x65:  mov    %edi,(%esp)
086def38 +0x68:  mov    %eax,0x4(%esp)
086def3c +0x6c:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086def41 +0x71:  mov    %edi,0x4(%esp)
086def45 +0x75:  mov    (%ebx),%eax
086def47 +0x77:  mov    -0xc(%eax),%eax
086def4a +0x7a:  lea    (%ebx,%eax,1),%eax
086def4d +0x7d:  mov    %eax,(%esp)
086def50 +0x80:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086def55 +0x85:  mov    -0xc(%ebp),%ebx
086def58 +0x88:  mov    -0x8(%ebp),%esi
086def5b +0x8b:  mov    -0x4(%ebp),%edi
086def5e +0x8e:  mov    %ebp,%esp
086def60 +0x90:  pop    %ebp
086def61 +0x91:  ret
086def62 +0x92:  mov    %eax,(%esp)
086def65 +0x95:  call   08ae3750 <_Unwind_Resume>
086def6a +0x9a:  mov    %eax,-0x1c(%ebp)
086def6d +0x9d:  mov    %edi,(%esp)
086def70 +0xa0:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086def75 +0xa5:  mov    0x4(%esi),%edx
086def78 +0xa8:  mov    0x8(%esi),%ecx
086def7b +0xab:  mov    -0x1c(%ebp),%eax
086def7e +0xae:  mov    %edx,(%ebx)
086def80 +0xb0:  mov    -0xc(%edx),%edx
086def83 +0xb3:  movl   $0x0,0x4(%ebx)
086def8a +0xba:  mov    %ecx,(%ebx,%edx,1)
086def8d +0xbd:  jmp    086def62 <+0x92>
086def8f +0xbf:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86deed0

/* std::istrstream::istrstream(char*) */

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
                    /* try { // try from 086def0d to 086def11 has its CatchHandler @ 086def62 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),in_stack_0000000c,0,(char *)0x0);
                    /* try { // try from 086def50 to 086def54 has its CatchHandler @ 086def6a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 8));
  return;
}
```

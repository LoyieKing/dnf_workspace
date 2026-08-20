# ostrstream

`_ZNSt10ostrstreamC2EPciSt13_Ios_Openmode`

`std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086de670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de670  _ZNSt10ostrstreamC2EPciSt13_Ios_Openmode
#           std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode)
# range [0x086de670, 0x086de72e]
086de670 +0x00:  push   %ebp
086de671 +0x01:  mov    %esp,%ebp
086de673 +0x03:  sub    $0x38,%esp
086de676 +0x06:  mov    %esi,-0x8(%ebp)
086de679 +0x09:  mov    0xc(%ebp),%esi
086de67c +0x0c:  mov    %ebx,-0xc(%ebp)
086de67f +0x0f:  mov    0x8(%ebp),%ebx
086de682 +0x12:  mov    %edi,-0x4(%ebp)
086de685 +0x15:  mov    0x4(%esi),%eax
086de688 +0x18:  mov    0x8(%esi),%edx
086de68b +0x1b:  mov    %eax,(%ebx)
086de68d +0x1d:  mov    -0xc(%eax),%eax
086de690 +0x20:  mov    %edx,(%ebx,%eax,1)
086de693 +0x23:  movl   $0x0,0x4(%esp)
086de69b +0x2b:  mov    (%ebx),%eax
086de69d +0x2d:  mov    -0xc(%eax),%eax
086de6a0 +0x30:  lea    (%ebx,%eax,1),%eax
086de6a3 +0x33:  mov    %eax,(%esp)
086de6a6 +0x36:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de6ab +0x3b:  mov    (%esi),%eax
086de6ad +0x3d:  mov    0xc(%esi),%edx
086de6b0 +0x40:  testb  $0x1,0x18(%ebp)
086de6b4 +0x44:  mov    %eax,(%ebx)
086de6b6 +0x46:  mov    -0xc(%eax),%eax
086de6b9 +0x49:  mov    %edx,(%ebx,%eax,1)
086de6bc +0x4c:  mov    0x10(%ebp),%eax
086de6bf +0x4f:  je     086de6cc <+0x5c>
086de6c1 +0x51:  mov    %eax,(%esp)
086de6c4 +0x54:  call   0807e3b0 <_init+0xca8>
086de6c9 +0x59:  add    0x10(%ebp),%eax
086de6cc +0x5c:  mov    %eax,0xc(%esp)
086de6d0 +0x60:  mov    0x14(%ebp),%eax
086de6d3 +0x63:  lea    0x4(%ebx),%edi
086de6d6 +0x66:  mov    %edi,(%esp)
086de6d9 +0x69:  mov    %eax,0x8(%esp)
086de6dd +0x6d:  mov    0x10(%ebp),%eax
086de6e0 +0x70:  mov    %eax,0x4(%esp)
086de6e4 +0x74:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086de6e9 +0x79:  mov    %edi,0x4(%esp)
086de6ed +0x7d:  mov    (%ebx),%eax
086de6ef +0x7f:  mov    -0xc(%eax),%eax
086de6f2 +0x82:  lea    (%ebx,%eax,1),%eax
086de6f5 +0x85:  mov    %eax,(%esp)
086de6f8 +0x88:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de6fd +0x8d:  mov    -0xc(%ebp),%ebx
086de700 +0x90:  mov    -0x8(%ebp),%esi
086de703 +0x93:  mov    -0x4(%ebp),%edi
086de706 +0x96:  mov    %ebp,%esp
086de708 +0x98:  pop    %ebp
086de709 +0x99:  ret
086de70a +0x9a:  mov    %eax,(%esp)
086de70d +0x9d:  call   08ae3750 <_Unwind_Resume>
086de712 +0xa2:  mov    %eax,-0x1c(%ebp)
086de715 +0xa5:  mov    %edi,(%esp)
086de718 +0xa8:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de71d +0xad:  mov    0x4(%esi),%edx
086de720 +0xb0:  mov    0x8(%esi),%ecx
086de723 +0xb3:  mov    -0x1c(%ebp),%eax
086de726 +0xb6:  mov    %edx,(%ebx)
086de728 +0xb8:  mov    -0xc(%edx),%edx
086de72b +0xbb:  mov    %ecx,(%ebx,%edx,1)
086de72e +0xbe:  jmp    086de70a <+0x9a>
```

## 反编译 C

```c
// std::ostrstream::ostrstream @ 0x86de670

/* std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::ostrstream::ostrstream(ostrstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  byte in_stack_00000014;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
                    /* try { // try from 086de6a6 to 086de6aa has its CatchHandler @ 086de70a */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  pcVar4 = (char *)param_2;
  if ((in_stack_00000014 & 1) != 0) {
    sVar3 = strlen((char *)param_2);
    pcVar4 = (char *)(sVar3 + param_2);
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),(char *)param_2,param_3,pcVar4);
                    /* try { // try from 086de6f8 to 086de6fc has its CatchHandler @ 086de712 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 4));
  return;
}
```

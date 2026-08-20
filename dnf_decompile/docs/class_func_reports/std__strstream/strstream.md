# strstream

`_ZNSt9strstreamC2EPciSt13_Ios_Openmode`

`std::strstream::strstream(char*, int, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086dedc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dedc0  _ZNSt9strstreamC2EPciSt13_Ios_Openmode
#           std::strstream::strstream(char*, int, std::_Ios_Openmode)
# range [0x086dedc0, 0x086deecf]
086dedc0 +0x000:  push   %ebp
086dedc1 +0x001:  mov    %esp,%ebp
086dedc3 +0x003:  push   %edi
086dedc4 +0x004:  push   %esi
086dedc5 +0x005:  push   %ebx
086dedc6 +0x006:  sub    $0x2c,%esp
086dedc9 +0x009:  mov    0xc(%ebp),%esi
086dedcc +0x00c:  mov    0x8(%ebp),%ebx
086dedcf +0x00f:  mov    0x8(%esi),%eax
086dedd2 +0x012:  lea    0x4(%esi),%edi
086dedd5 +0x015:  mov    0xc(%esi),%edx
086dedd8 +0x018:  mov    %eax,(%ebx)
086dedda +0x01a:  mov    -0xc(%eax),%eax
086deddd +0x01d:  movl   $0x0,0x4(%ebx)
086dede4 +0x024:  mov    %edx,(%ebx,%eax,1)
086dede7 +0x027:  movl   $0x0,0x4(%esp)
086dedef +0x02f:  mov    (%ebx),%eax
086dedf1 +0x031:  mov    -0xc(%eax),%eax
086dedf4 +0x034:  lea    (%ebx,%eax,1),%eax
086dedf7 +0x037:  mov    %eax,(%esp)
086dedfa +0x03a:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086dedff +0x03f:  mov    0xc(%edi),%edx
086dee02 +0x042:  lea    0x8(%ebx),%eax
086dee05 +0x045:  mov    0x10(%edi),%ecx
086dee08 +0x048:  mov    %edx,0x8(%ebx)
086dee0b +0x04b:  mov    -0xc(%edx),%edx
086dee0e +0x04e:  mov    %ecx,0x8(%ebx,%edx,1)
086dee12 +0x052:  movl   $0x0,0x4(%esp)
086dee1a +0x05a:  mov    0x8(%ebx),%edx
086dee1d +0x05d:  add    -0xc(%edx),%eax
086dee20 +0x060:  mov    %eax,(%esp)
086dee23 +0x063:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086dee28 +0x068:  mov    0x4(%esi),%eax
086dee2b +0x06b:  mov    0x14(%edi),%edx
086dee2e +0x06e:  testb  $0x1,0x18(%ebp)
086dee32 +0x072:  mov    -0xc(%eax),%eax
086dee35 +0x075:  mov    %edx,(%ebx,%eax,1)
086dee38 +0x078:  mov    (%esi),%eax
086dee3a +0x07a:  mov    0x20(%esi),%edx
086dee3d +0x07d:  mov    %eax,(%ebx)
086dee3f +0x07f:  mov    -0xc(%eax),%eax
086dee42 +0x082:  mov    %edx,(%ebx,%eax,1)
086dee45 +0x085:  mov    0x24(%esi),%eax
086dee48 +0x088:  mov    %eax,0x8(%ebx)
086dee4b +0x08b:  mov    0x10(%ebp),%eax
086dee4e +0x08e:  je     086dee5b <+0x9b>
086dee50 +0x090:  mov    %eax,(%esp)
086dee53 +0x093:  call   0807e3b0 <_init+0xca8>
086dee58 +0x098:  add    0x10(%ebp),%eax
086dee5b +0x09b:  mov    %eax,0xc(%esp)
086dee5f +0x09f:  mov    0x14(%ebp),%eax
086dee62 +0x0a2:  lea    0xc(%ebx),%esi
086dee65 +0x0a5:  mov    %esi,(%esp)
086dee68 +0x0a8:  mov    %eax,0x8(%esp)
086dee6c +0x0ac:  mov    0x10(%ebp),%eax
086dee6f +0x0af:  mov    %eax,0x4(%esp)
086dee73 +0x0b3:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086dee78 +0x0b8:  mov    %esi,0x4(%esp)
086dee7c +0x0bc:  mov    (%ebx),%eax
086dee7e +0x0be:  mov    -0xc(%eax),%eax
086dee81 +0x0c1:  lea    (%ebx,%eax,1),%eax
086dee84 +0x0c4:  mov    %eax,(%esp)
086dee87 +0x0c7:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086dee8c +0x0cc:  add    $0x2c,%esp
086dee8f +0x0cf:  pop    %ebx
086dee90 +0x0d0:  pop    %esi
086dee91 +0x0d1:  pop    %edi
086dee92 +0x0d2:  pop    %ebp
086dee93 +0x0d3:  ret
086dee94 +0x0d4:  mov    %eax,(%esp)
086dee97 +0x0d7:  call   08ae3750 <_Unwind_Resume>
086dee9c +0x0dc:  mov    %eax,-0x1c(%ebp)
086dee9f +0x0df:  mov    %esi,(%esp)
086deea2 +0x0e2:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086deea7 +0x0e7:  mov    %edi,0x4(%esp)
086deeab +0x0eb:  mov    %ebx,(%esp)
086deeae +0x0ee:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086deeb3 +0x0f3:  mov    -0x1c(%ebp),%eax
086deeb6 +0x0f6:  jmp    086dee94 <+0xd4>
086deeb8 +0x0f8:  mov    0x8(%esi),%edx
086deebb +0x0fb:  mov    0xc(%esi),%ecx
086deebe +0x0fe:  mov    %edx,(%ebx)
086deec0 +0x100:  mov    -0xc(%edx),%edx
086deec3 +0x103:  movl   $0x0,0x4(%ebx)
086deeca +0x10a:  mov    %ecx,(%ebx,%edx,1)
086deecd +0x10d:  jmp    086dee94 <+0xd4>
086deecf +0x10f:  nop
```

## 反编译 C

```c
// std::strstream::strstream @ 0x86dedc0

/* std::strstream::strstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::strstream::strstream(strstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined4 uVar2;
  size_t sVar3;
  char *pcVar4;
  byte in_stack_00000014;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(int *)this = iVar1;
  iVar1 = *(int *)(iVar1 + -0xc);
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + iVar1) = uVar2;
                    /* try { // try from 086dedfa to 086dedfe has its CatchHandler @ 086dee94 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(int *)(this + 8) = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc) + 8) = uVar2;
                    /* try { // try from 086dee23 to 086dee27 has its CatchHandler @ 086deeb8 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined4 *)(this + *(int *)(*(int *)(param_1 + 4) + -0xc)) = *(undefined4 *)(param_1 + 0x18);
  iVar1 = *(int *)param_1;
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  *(int *)this = iVar1;
  *(undefined4 *)(this + *(int *)(iVar1 + -0xc)) = uVar2;
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 0x24);
  pcVar4 = (char *)param_2;
  if ((in_stack_00000014 & 1) != 0) {
    sVar3 = strlen((char *)param_2);
    pcVar4 = (char *)(sVar3 + param_2);
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),(char *)param_2,param_3,pcVar4);
                    /* try { // try from 086dee87 to 086dee8b has its CatchHandler @ 086dee9c */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)(this + 0xc));
  return;
}
```

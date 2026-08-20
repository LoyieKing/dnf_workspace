# ostrstream

`_ZNSt10ostrstreamC1EPciSt13_Ios_Openmode`

`std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::ostrstream` | `0x086de7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086de7e0  _ZNSt10ostrstreamC1EPciSt13_Ios_Openmode
#           std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode)
# range [0x086de7e0, 0x086de8ef]
086de7e0 +0x000:  push   %ebp
086de7e1 +0x001:  mov    %esp,%ebp
086de7e3 +0x003:  push   %edi
086de7e4 +0x004:  push   %esi
086de7e5 +0x005:  push   %ebx
086de7e6 +0x006:  sub    $0x2c,%esp
086de7e9 +0x009:  mov    0x8(%ebp),%ebx
086de7ec +0x00c:  lea    0x30(%ebx),%esi
086de7ef +0x00f:  mov    %esi,(%esp)
086de7f2 +0x012:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086de7f7 +0x017:  mov    &_ZTTSt10ostrstream+0x4,%edi
086de7fd +0x01d:  movb   $0x0,0x74(%esi)
086de801 +0x021:  mov    &_ZTTSt10ostrstream+0x8,%edx
086de807 +0x027:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x30(%ebx)
086de80e +0x02e:  movl   $0x0,0x70(%esi)
086de815 +0x035:  mov    -0xc(%edi),%eax
086de818 +0x038:  mov    %edi,(%ebx)
086de81a +0x03a:  movb   $0x0,0x75(%esi)
086de81e +0x03e:  movl   $0x0,0x78(%esi)
086de825 +0x045:  mov    %edx,(%ebx,%eax,1)
086de828 +0x048:  movl   $0x0,0x7c(%esi)
086de82f +0x04f:  movl   $0x0,0x80(%esi)
086de839 +0x059:  movl   $0x0,0x84(%esi)
086de843 +0x063:  movl   $0x0,0x4(%esp)
086de84b +0x06b:  mov    (%ebx),%eax
086de84d +0x06d:  mov    -0xc(%eax),%eax
086de850 +0x070:  lea    (%ebx,%eax,1),%eax
086de853 +0x073:  mov    %eax,(%esp)
086de856 +0x076:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de85b +0x07b:  testb  $0x1,0x14(%ebp)
086de85f +0x07f:  movl   $&_ZTVSt10ostrstream+0xc,(%ebx)
086de865 +0x085:  mov    0xc(%ebp),%eax
086de868 +0x088:  movl   $&_ZTVSt10ostrstream+0x20,0x30(%ebx)
086de86f +0x08f:  je     086de87c <+0x9c>
086de871 +0x091:  mov    %eax,(%esp)
086de874 +0x094:  call   0807e3b0 <_init+0xca8>
086de879 +0x099:  add    0xc(%ebp),%eax
086de87c +0x09c:  mov    %eax,0xc(%esp)
086de880 +0x0a0:  mov    0xc(%ebp),%ecx
086de883 +0x0a3:  lea    0x4(%ebx),%edx
086de886 +0x0a6:  mov    0x10(%ebp),%eax
086de889 +0x0a9:  mov    %edx,-0x1c(%ebp)
086de88c +0x0ac:  mov    %edx,(%esp)
086de88f +0x0af:  mov    %ecx,0x4(%esp)
086de893 +0x0b3:  mov    %eax,0x8(%esp)
086de897 +0x0b7:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086de89c +0x0bc:  mov    -0x1c(%ebp),%eax
086de89f +0x0bf:  mov    %esi,(%esp)
086de8a2 +0x0c2:  mov    %eax,0x4(%esp)
086de8a6 +0x0c6:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086de8ab +0x0cb:  add    $0x2c,%esp
086de8ae +0x0ce:  pop    %ebx
086de8af +0x0cf:  pop    %esi
086de8b0 +0x0d0:  pop    %edi
086de8b1 +0x0d1:  pop    %ebp
086de8b2 +0x0d2:  ret
086de8b3 +0x0d3:  mov    %eax,-0x20(%ebp)
086de8b6 +0x0d6:  mov    %esi,(%esp)
086de8b9 +0x0d9:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086de8be +0x0de:  mov    -0x20(%ebp),%eax
086de8c1 +0x0e1:  mov    %eax,(%esp)
086de8c4 +0x0e4:  call   08ae3750 <_Unwind_Resume>
086de8c9 +0x0e9:  mov    -0x1c(%ebp),%edx
086de8cc +0x0ec:  mov    %eax,-0x20(%ebp)
086de8cf +0x0ef:  mov    %edx,(%esp)
086de8d2 +0x0f2:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086de8d7 +0x0f7:  mov    -0xc(%edi),%edx
086de8da +0x0fa:  mov    &_ZTTSt10ostrstream+0x8,%ecx
086de8e0 +0x100:  mov    %edi,(%ebx)
086de8e2 +0x102:  mov    -0x20(%ebp),%eax
086de8e5 +0x105:  mov    %ecx,(%ebx,%edx,1)
086de8e8 +0x108:  jmp    086de8b3 <+0xd3>
086de8ea +0x10a:  nop
086de8eb +0x10b:  nop
086de8ec +0x10c:  nop
086de8ed +0x10d:  nop
086de8ee +0x10e:  nop
086de8ef +0x10f:  nop
```

## 反编译 C

```c
// std::ostrstream::ostrstream @ 0x86de7e0

/* std::ostrstream::ostrstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::ostrstream::ostrstream(ostrstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  char *pcVar5;
  
  ios_base::ios_base((ios_base *)(this + 0x30));
  puVar2 = PTR_PTR_08cfe38c;
  this[0xa4] = (ostrstream)0x0;
  puVar3 = PTR_PTR_08cfe390;
  *(undefined ***)(this + 0x30) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa0) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  this[0xa5] = (ostrstream)0x0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
                    /* try { // try from 086de856 to 086de85a has its CatchHandler @ 086de8b3 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe36c;
  *(undefined4 *)(this + 0x30) = 0x8cfe380;
  pcVar5 = param_1;
  if ((param_3 & _S_app) != 0) {
    sVar4 = strlen(param_1);
    pcVar5 = param_1 + sVar4;
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 4),param_1,param_2,pcVar5);
                    /* try { // try from 086de8a6 to 086de8aa has its CatchHandler @ 086de8c9 */
  ios::init((ios *)(this + 0x30),(streambuf *)(this + 4));
  return;
}
```

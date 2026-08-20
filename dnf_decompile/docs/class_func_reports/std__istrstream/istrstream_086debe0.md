# istrstream

`_ZNSt10istrstreamC1EPci`

`std::istrstream::istrstream(char*, int)`

| 类 | 地址 |
|---|---|
| `std::istrstream` | `0x086debe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086debe0  _ZNSt10istrstreamC1EPci
#           std::istrstream::istrstream(char*, int)
# range [0x086debe0, 0x086decff]
086debe0 +0x000:  push   %ebp
086debe1 +0x001:  mov    %esp,%ebp
086debe3 +0x003:  sub    $0x38,%esp
086debe6 +0x006:  mov    %ebx,-0xc(%ebp)
086debe9 +0x009:  mov    0x8(%ebp),%ebx
086debec +0x00c:  mov    %esi,-0x8(%ebp)
086debef +0x00f:  mov    %edi,-0x4(%ebp)
086debf2 +0x012:  lea    0x34(%ebx),%esi
086debf5 +0x015:  mov    %esi,(%esp)
086debf8 +0x018:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086debfd +0x01d:  mov    &_ZTTSt10istrstream+0x4,%edi
086dec03 +0x023:  movb   $0x0,0x74(%esi)
086dec07 +0x027:  mov    &_ZTTSt10istrstream+0x8,%edx
086dec0d +0x02d:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x34(%ebx)
086dec14 +0x034:  movl   $0x0,0x70(%esi)
086dec1b +0x03b:  mov    -0xc(%edi),%eax
086dec1e +0x03e:  mov    %edi,(%ebx)
086dec20 +0x040:  movl   $0x0,0x4(%ebx)
086dec27 +0x047:  movb   $0x0,0x75(%esi)
086dec2b +0x04b:  mov    %edx,(%ebx,%eax,1)
086dec2e +0x04e:  movl   $0x0,0x78(%esi)
086dec35 +0x055:  movl   $0x0,0x7c(%esi)
086dec3c +0x05c:  movl   $0x0,0x80(%esi)
086dec46 +0x066:  movl   $0x0,0x84(%esi)
086dec50 +0x070:  movl   $0x0,0x4(%esp)
086dec58 +0x078:  mov    (%ebx),%eax
086dec5a +0x07a:  mov    -0xc(%eax),%eax
086dec5d +0x07d:  lea    (%ebx,%eax,1),%eax
086dec60 +0x080:  mov    %eax,(%esp)
086dec63 +0x083:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086dec68 +0x088:  mov    0x10(%ebp),%eax
086dec6b +0x08b:  lea    0x8(%ebx),%ecx
086dec6e +0x08e:  movl   $&_ZTVSt10istrstream+0xc,(%ebx)
086dec74 +0x094:  movl   $&_ZTVSt10istrstream+0x20,0x34(%ebx)
086dec7b +0x09b:  mov    %ecx,-0x1c(%ebp)
086dec7e +0x09e:  mov    %eax,0x8(%esp)
086dec82 +0x0a2:  mov    0xc(%ebp),%eax
086dec85 +0x0a5:  movl   $0x0,0xc(%esp)
086dec8d +0x0ad:  mov    %ecx,(%esp)
086dec90 +0x0b0:  mov    %eax,0x4(%esp)
086dec94 +0x0b4:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086dec99 +0x0b9:  mov    -0x1c(%ebp),%eax
086dec9c +0x0bc:  mov    %esi,(%esp)
086dec9f +0x0bf:  mov    %eax,0x4(%esp)
086deca3 +0x0c3:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086deca8 +0x0c8:  mov    -0xc(%ebp),%ebx
086decab +0x0cb:  mov    -0x8(%ebp),%esi
086decae +0x0ce:  mov    -0x4(%ebp),%edi
086decb1 +0x0d1:  mov    %ebp,%esp
086decb3 +0x0d3:  pop    %ebp
086decb4 +0x0d4:  ret
086decb5 +0x0d5:  mov    %eax,-0x20(%ebp)
086decb8 +0x0d8:  mov    %esi,(%esp)
086decbb +0x0db:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086decc0 +0x0e0:  mov    -0x20(%ebp),%eax
086decc3 +0x0e3:  mov    %eax,(%esp)
086decc6 +0x0e6:  call   08ae3750 <_Unwind_Resume>
086deccb +0x0eb:  mov    -0x1c(%ebp),%edx
086decce +0x0ee:  mov    %eax,-0x20(%ebp)
086decd1 +0x0f1:  mov    %edx,(%esp)
086decd4 +0x0f4:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086decd9 +0x0f9:  mov    -0xc(%edi),%edx
086decdc +0x0fc:  mov    &_ZTTSt10istrstream+0x8,%ecx
086dece2 +0x102:  mov    %edi,(%ebx)
086dece4 +0x104:  mov    -0x20(%ebp),%eax
086dece7 +0x107:  movl   $0x0,0x4(%ebx)
086decee +0x10e:  mov    %ecx,(%ebx,%edx,1)
086decf1 +0x111:  jmp    086decb5 <+0xd5>
086decf3 +0x113:  nop
086decf4 +0x114:  nop
086decf5 +0x115:  nop
086decf6 +0x116:  nop
086decf7 +0x117:  nop
086decf8 +0x118:  nop
086decf9 +0x119:  nop
086decfa +0x11a:  nop
086decfb +0x11b:  nop
086decfc +0x11c:  nop
086decfd +0x11d:  nop
086decfe +0x11e:  nop
086decff +0x11f:  nop
```

## 反编译 C

```c
// std::istrstream::istrstream @ 0x86debe0

/* std::istrstream::istrstream(char*, int) */

void __thiscall std::istrstream::istrstream(istrstream *this,char *param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  ios_base::ios_base((ios_base *)(this + 0x34));
  puVar2 = PTR_PTR_08cfe40c;
  this[0xa8] = (istrstream)0x0;
  puVar3 = PTR_PTR_08cfe410;
  *(undefined ***)(this + 0x34) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa4) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xa9] = (istrstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
                    /* try { // try from 086dec63 to 086dec67 has its CatchHandler @ 086decb5 */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  *(undefined4 *)this = 0x8cfe3ec;
  *(undefined4 *)(this + 0x34) = 0x8cfe400;
  strstreambuf::strstreambuf((strstreambuf *)(this + 8),param_1,param_2,(char *)0x0);
                    /* try { // try from 086deca3 to 086deca7 has its CatchHandler @ 086deccb */
  ios::init((ios *)(this + 0x34),(streambuf *)(this + 8));
  return;
}
```

# strstream

`_ZNSt9strstreamC1EPciSt13_Ios_Openmode`

`std::strstream::strstream(char*, int, std::_Ios_Openmode)`

| 类 | 地址 |
|---|---|
| `std::strstream` | `0x086df260` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086df260  _ZNSt9strstreamC1EPciSt13_Ios_Openmode
#           std::strstream::strstream(char*, int, std::_Ios_Openmode)
# range [0x086df260, 0x086df3cf]
086df260 +0x000:  push   %ebp
086df261 +0x001:  mov    %esp,%ebp
086df263 +0x003:  push   %edi
086df264 +0x004:  push   %esi
086df265 +0x005:  push   %ebx
086df266 +0x006:  sub    $0x2c,%esp
086df269 +0x009:  mov    0x8(%ebp),%ebx
086df26c +0x00c:  lea    0x38(%ebx),%esi
086df26f +0x00f:  mov    %esi,(%esp)
086df272 +0x012:  call   087270f0 <_ZNSt8ios_baseC1Ev>  ; std::ios_base::ios_base()
086df277 +0x017:  mov    &_ZTTSt9strstream+0x8,%edi
086df27d +0x01d:  movb   $0x0,0x74(%esi)
086df281 +0x021:  mov    &_ZTTSt9strstream+0xc,%edx
086df287 +0x027:  movl   $&_ZTVSt9basic_iosIcSt11char_traitsIcEE+0x8,0x38(%ebx)
086df28e +0x02e:  movl   $0x0,0x70(%esi)
086df295 +0x035:  mov    -0xc(%edi),%eax
086df298 +0x038:  mov    %edi,(%ebx)
086df29a +0x03a:  movl   $0x0,0x4(%ebx)
086df2a1 +0x041:  movb   $0x0,0x75(%esi)
086df2a5 +0x045:  mov    %edx,(%ebx,%eax,1)
086df2a8 +0x048:  movl   $0x0,0x78(%esi)
086df2af +0x04f:  movl   $0x0,0x7c(%esi)
086df2b6 +0x056:  movl   $0x0,0x80(%esi)
086df2c0 +0x060:  movl   $0x0,0x84(%esi)
086df2ca +0x06a:  movl   $0x0,0x4(%esp)
086df2d2 +0x072:  mov    (%ebx),%eax
086df2d4 +0x074:  mov    -0xc(%eax),%eax
086df2d7 +0x077:  lea    (%ebx,%eax,1),%eax
086df2da +0x07a:  mov    %eax,(%esp)
086df2dd +0x07d:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df2e2 +0x082:  mov    &_ZTTSt9strstream+0x10,%edx
086df2e8 +0x088:  lea    0x8(%ebx),%eax
086df2eb +0x08b:  mov    &_ZTTSt9strstream+0x14,%ecx
086df2f1 +0x091:  mov    %edx,0x8(%ebx)
086df2f4 +0x094:  mov    -0xc(%edx),%edx
086df2f7 +0x097:  mov    %ecx,0x8(%ebx,%edx,1)
086df2fb +0x09b:  movl   $0x0,0x4(%esp)
086df303 +0x0a3:  mov    0x8(%ebx),%edx
086df306 +0x0a6:  add    -0xc(%edx),%eax
086df309 +0x0a9:  mov    %eax,(%esp)
086df30c +0x0ac:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df311 +0x0b1:  mov    &_ZTTSt9strstream+0x4,%eax
086df316 +0x0b6:  mov    &_ZTTSt9strstream+0x18,%edx
086df31c +0x0bc:  testb  $0x1,0x14(%ebp)
086df320 +0x0c0:  mov    -0xc(%eax),%eax
086df323 +0x0c3:  mov    %edx,(%ebx,%eax,1)
086df326 +0x0c6:  mov    0xc(%ebp),%eax
086df329 +0x0c9:  movl   $&_ZTVSt9strstream+0xc,(%ebx)
086df32f +0x0cf:  movl   $&_ZTVSt9strstream+0x34,0x38(%ebx)
086df336 +0x0d6:  movl   $&_ZTVSt9strstream+0x20,0x8(%ebx)
086df33d +0x0dd:  je     086df34a <+0xea>
086df33f +0x0df:  mov    %eax,(%esp)
086df342 +0x0e2:  call   0807e3b0 <_init+0xca8>
086df347 +0x0e7:  add    0xc(%ebp),%eax
086df34a +0x0ea:  mov    %eax,0xc(%esp)
086df34e +0x0ee:  mov    0xc(%ebp),%edx
086df351 +0x0f1:  lea    0xc(%ebx),%edi
086df354 +0x0f4:  mov    0x10(%ebp),%eax
086df357 +0x0f7:  mov    %edi,(%esp)
086df35a +0x0fa:  mov    %edx,0x4(%esp)
086df35e +0x0fe:  mov    %eax,0x8(%esp)
086df362 +0x102:  call   086de5d0 <_ZNSt12strstreambufC1EPciS0_>  ; std::strstreambuf::strstreambuf(char*, int, char*)
086df367 +0x107:  mov    %edi,0x4(%esp)
086df36b +0x10b:  mov    %esi,(%esp)
086df36e +0x10e:  call   086e0ee0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xe40>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xe40
086df373 +0x113:  add    $0x2c,%esp
086df376 +0x116:  pop    %ebx
086df377 +0x117:  pop    %esi
086df378 +0x118:  pop    %edi
086df379 +0x119:  pop    %ebp
086df37a +0x11a:  ret
086df37b +0x11b:  mov    %eax,-0x1c(%ebp)
086df37e +0x11e:  mov    %esi,(%esp)
086df381 +0x121:  call   086e0c10 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xb70>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xb70
086df386 +0x126:  mov    -0x1c(%ebp),%eax
086df389 +0x129:  mov    %eax,(%esp)
086df38c +0x12c:  call   08ae3750 <_Unwind_Resume>
086df391 +0x131:  mov    %eax,-0x1c(%ebp)
086df394 +0x134:  mov    %edi,(%esp)
086df397 +0x137:  call   086ddc50 <_ZNSt12strstreambufD1Ev>  ; std::strstreambuf::~strstreambuf()
086df39c +0x13c:  movl   $&_ZTTSt9strstream+0x4,0x4(%esp)
086df3a4 +0x144:  mov    %ebx,(%esp)
086df3a7 +0x147:  call   086e1730 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x1690>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x1690
086df3ac +0x14c:  mov    -0x1c(%ebp),%eax
086df3af +0x14f:  jmp    086df37b <+0x11b>
086df3b1 +0x151:  mov    -0xc(%edi),%edx
086df3b4 +0x154:  mov    &_ZTTSt9strstream+0xc,%ecx
086df3ba +0x15a:  mov    %edi,(%ebx)
086df3bc +0x15c:  movl   $0x0,0x4(%ebx)
086df3c3 +0x163:  mov    %ecx,(%ebx,%edx,1)
086df3c6 +0x166:  jmp    086df37b <+0x11b>
086df3c8 +0x168:  nop
086df3c9 +0x169:  nop
086df3ca +0x16a:  nop
086df3cb +0x16b:  nop
086df3cc +0x16c:  nop
086df3cd +0x16d:  nop
086df3ce +0x16e:  nop
086df3cf +0x16f:  nop
```

## 反编译 C

```c
// std::strstream::strstream @ 0x86df260

/* std::strstream::strstream(char*, int, std::_Ios_Openmode) */

void __thiscall
std::strstream::strstream(strstream *this,char *param_1,int param_2,_Ios_Openmode param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  char *pcVar5;
  
  ios_base::ios_base((ios_base *)(this + 0x38));
  puVar2 = PTR_PTR_08cfe268;
  this[0xac] = (strstream)0x0;
  puVar3 = PTR_PTR_08cfe26c;
  *(undefined ***)(this + 0x38) = &PTR__ios_08cfe970;
  *(undefined4 *)(this + 0xa8) = 0;
  iVar1 = *(int *)(puVar2 + -0xc);
  *(undefined **)this = puVar2;
  *(undefined4 *)(this + 4) = 0;
  this[0xad] = (strstream)0x0;
  *(undefined **)(this + iVar1) = puVar3;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
                    /* try { // try from 086df2dd to 086df2e1 has its CatchHandler @ 086df37b */
  ios::init((ios *)(this + *(int *)(*(int *)this + -0xc)),(streambuf *)0x0);
  puVar3 = PTR_PTR_08cfe274;
  puVar2 = PTR_PTR_08cfe270;
  *(undefined **)(this + 8) = PTR_PTR_08cfe270;
  *(undefined **)(this + *(int *)(puVar2 + -0xc) + 8) = puVar3;
                    /* try { // try from 086df30c to 086df310 has its CatchHandler @ 086df3b1 */
  ios::init((ios *)(this + *(int *)(*(int *)(this + 8) + -0xc) + 8),(streambuf *)0x0);
  *(undefined **)(this + *(int *)(PTR_PTR_08cfe264 + -0xc)) = PTR_PTR_08cfe278;
  *(undefined4 *)this = 0x8cfe22c;
  *(undefined4 *)(this + 0x38) = 0x8cfe254;
  *(undefined4 *)(this + 8) = 0x8cfe240;
  pcVar5 = param_1;
  if ((param_3 & _S_app) != 0) {
    sVar4 = strlen(param_1);
    pcVar5 = param_1 + sVar4;
  }
  strstreambuf::strstreambuf((strstreambuf *)(this + 0xc),param_1,param_2,pcVar5);
                    /* try { // try from 086df36e to 086df372 has its CatchHandler @ 086df391 */
  ios::init((ios *)(this + 0x38),(streambuf *)(this + 0xc));
  return;
}
```

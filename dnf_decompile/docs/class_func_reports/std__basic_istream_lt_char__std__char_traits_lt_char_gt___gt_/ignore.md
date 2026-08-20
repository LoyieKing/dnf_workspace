# ignore

`_ZNSi6ignoreEii`

`std::basic_istream<char, std::char_traits<char> >::ignore(int, int)`

| 类 | 地址 |
|---|---|
| `std::basic_istream<char, std::char_traits<char> >` | `0x086e8150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086e8150  _ZNSi6ignoreEii
#           std::basic_istream<char, std::char_traits<char> >::ignore(int, int)
# range [0x086e8150, 0x086e83bf]
086e8150 +0x000:  push   %ebp
086e8151 +0x001:  mov    %esp,%ebp
086e8153 +0x003:  push   %edi
086e8154 +0x004:  push   %esi
086e8155 +0x005:  push   %ebx
086e8156 +0x006:  sub    $0x3c,%esp
086e8159 +0x009:  mov    0xc(%ebp),%esi
086e815c +0x00c:  cmpl   $0xffffffff,0x10(%ebp)
086e8160 +0x010:  je     086e82c3 <+0x173>
086e8166 +0x016:  mov    0x8(%ebp),%edx
086e8169 +0x019:  lea    -0x19(%ebp),%eax
086e816c +0x01c:  movl   $0x0,0x4(%edx)
086e8173 +0x023:  movl   $0x1,0x8(%esp)
086e817b +0x02b:  mov    %edx,0x4(%esp)
086e817f +0x02f:  mov    %eax,(%esp)
086e8182 +0x032:  call   086e4760 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x46c0>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x46c0
086e8187 +0x037:  cmpb   $0x0,-0x19(%ebp)
086e818b +0x03b:  je     086e8260 <+0x110>
086e8191 +0x041:  test   %esi,%esi
086e8193 +0x043:  jle    086e8260 <+0x110>
086e8199 +0x049:  mov    0x8(%ebp),%edx
086e819c +0x04c:  movzbl 0x10(%ebp),%edi
086e81a0 +0x050:  mov    (%edx),%eax
086e81a2 +0x052:  mov    -0xc(%eax),%eax
086e81a5 +0x055:  mov    0x78(%edx,%eax,1),%ebx
086e81a9 +0x059:  mov    0x8(%ebx),%eax
086e81ac +0x05c:  cmp    0xc(%ebx),%eax
086e81af +0x05f:  jae    086e837c <+0x22c>
086e81b5 +0x065:  movzbl (%eax),%eax
086e81b8 +0x068:  mov    0x8(%ebp),%edx
086e81bb +0x06b:  movb   $0x0,-0x2d(%ebp)
086e81bf +0x06f:  mov    0x4(%edx),%ecx
086e81c2 +0x072:  mov    %edi,%edx
086e81c4 +0x074:  movsbl %dl,%edi
086e81c7 +0x077:  mov    %edi,-0x2c(%ebp)
086e81ca +0x07a:  lea    0x0(%esi),%esi
086e81d0 +0x080:  cmp    %ecx,%esi
086e81d2 +0x082:  jle    086e823a <+0xea>
086e81d4 +0x084:  cmp    $0xffffffff,%eax
086e81d7 +0x087:  je     086e823a <+0xea>
086e81d9 +0x089:  cmp    %eax,0x10(%ebp)
086e81dc +0x08c:  je     086e823a <+0xea>
086e81de +0x08e:  mov    0x8(%ebx),%edx
086e81e1 +0x091:  mov    %esi,%edi
086e81e3 +0x093:  mov    0xc(%ebx),%eax
086e81e6 +0x096:  sub    %ecx,%edi
086e81e8 +0x098:  sub    %edx,%eax
086e81ea +0x09a:  cmp    %eax,%edi
086e81ec +0x09c:  jle    086e81f0 <+0xa0>
086e81ee +0x09e:  mov    %eax,%edi
086e81f0 +0x0a0:  cmp    $0x1,%edi
086e81f3 +0x0a3:  jle    086e8298 <+0x148>
086e81f9 +0x0a9:  mov    -0x2c(%ebp),%eax
086e81fc +0x0ac:  mov    %edx,(%esp)
086e81ff +0x0af:  mov    %edi,0x8(%esp)
086e8203 +0x0b3:  mov    %edx,-0x34(%ebp)
086e8206 +0x0b6:  mov    %eax,0x4(%esp)
086e820a +0x0ba:  call   0807dec0 <_init+0x7b8>
086e820f +0x0bf:  mov    -0x34(%ebp),%edx
086e8212 +0x0c2:  test   %eax,%eax
086e8214 +0x0c4:  je     086e821a <+0xca>
086e8216 +0x0c6:  mov    %eax,%edi
086e8218 +0x0c8:  sub    %edx,%edi
086e821a +0x0ca:  mov    0x8(%ebp),%eax
086e821d +0x0cd:  add    %edi,%edx
086e821f +0x0cf:  mov    %edi,%ecx
086e8221 +0x0d1:  mov    %edx,0x8(%ebx)
086e8224 +0x0d4:  add    0x4(%eax),%ecx
086e8227 +0x0d7:  cmp    0xc(%ebx),%edx
086e822a +0x0da:  mov    %ecx,0x4(%eax)
086e822d +0x0dd:  jae    086e832e <+0x1de>
086e8233 +0x0e3:  cmp    %ecx,%esi
086e8235 +0x0e5:  movzbl (%edx),%eax
086e8238 +0x0e8:  jg     086e81d4 <+0x84>
086e823a +0x0ea:  cmp    $0x7fffffff,%esi
086e8240 +0x0f0:  je     086e8270 <+0x120>
086e8242 +0x0f2:  cmpb   $0x0,-0x2d(%ebp)
086e8246 +0x0f6:  jne    086e82e0 <+0x190>
086e824c +0x0fc:  cmp    $0xffffffff,%eax
086e824f +0x0ff:  je     086e830f <+0x1bf>
086e8255 +0x105:  cmp    %eax,0x10(%ebp)
086e8258 +0x108:  je     086e82ef <+0x19f>
086e825e +0x10e:  xchg   %ax,%ax
086e8260 +0x110:  mov    0x8(%ebp),%eax
086e8263 +0x113:  add    $0x3c,%esp
086e8266 +0x116:  pop    %ebx
086e8267 +0x117:  pop    %esi
086e8268 +0x118:  pop    %edi
086e8269 +0x119:  pop    %ebp
086e826a +0x11a:  ret
086e826b +0x11b:  nop
086e826c +0x11c:  lea    0x0(%esi,%eiz,1),%esi
086e8270 +0x120:  cmp    $0xffffffff,%eax
086e8273 +0x123:  je     086e8242 <+0xf2>
086e8275 +0x125:  cmp    %eax,0x10(%ebp)
086e8278 +0x128:  je     086e8242 <+0xf2>
086e827a +0x12a:  mov    0x8(%ebp),%edx
086e827d +0x12d:  mov    $0x80000000,%ecx
086e8282 +0x132:  movb   $0x1,-0x2d(%ebp)
086e8286 +0x136:  movl   $0x80000000,0x4(%edx)
086e828d +0x13d:  jmp    086e81d0 <+0x80>
086e8292 +0x142:  lea    0x0(%esi),%esi
086e8298 +0x148:  mov    0x8(%ebp),%eax
086e829b +0x14b:  add    $0x1,%ecx
086e829e +0x14e:  cmp    0xc(%ebx),%edx
086e82a1 +0x151:  mov    %ecx,0x4(%eax)
086e82a4 +0x154:  jae    086e835e <+0x20e>
086e82aa +0x15a:  add    $0x1,%edx
086e82ad +0x15d:  mov    %edx,0x8(%ebx)
086e82b0 +0x160:  cmp    %edx,0xc(%ebx)
086e82b3 +0x163:  jbe    086e832e <+0x1de>
086e82b5 +0x165:  movzbl (%edx),%eax
086e82b8 +0x168:  mov    0x8(%ebp),%edx
086e82bb +0x16b:  mov    0x4(%edx),%ecx
086e82be +0x16e:  jmp    086e81d0 <+0x80>
086e82c3 +0x173:  mov    0x8(%ebp),%eax
086e82c6 +0x176:  mov    %esi,0x4(%esp)
086e82ca +0x17a:  mov    %eax,(%esp)
086e82cd +0x17d:  call   08726280 <_ZNSi6ignoreEi>  ; std::basic_istream<char, std::char_traits<char> >::ignore(int)
086e82d2 +0x182:  mov    %eax,0x8(%ebp)
086e82d5 +0x185:  mov    0x8(%ebp),%eax
086e82d8 +0x188:  add    $0x3c,%esp
086e82db +0x18b:  pop    %ebx
086e82dc +0x18c:  pop    %esi
086e82dd +0x18d:  pop    %edi
086e82de +0x18e:  pop    %ebp
086e82df +0x18f:  ret
086e82e0 +0x190:  mov    0x8(%ebp),%edx
086e82e3 +0x193:  movl   $0x7fffffff,0x4(%edx)
086e82ea +0x19a:  jmp    086e824c <+0xfc>
086e82ef +0x19f:  mov    0x8(%ebp),%edx
086e82f2 +0x1a2:  mov    0x4(%edx),%eax
086e82f5 +0x1a5:  cmp    $0x7fffffff,%eax
086e82fa +0x1aa:  je     086e8302 <+0x1b2>
086e82fc +0x1ac:  add    $0x1,%eax
086e82ff +0x1af:  mov    %eax,0x4(%edx)
086e8302 +0x1b2:  mov    %ebx,(%esp)
086e8305 +0x1b5:  call   08705f60 <_GLOBAL__I_locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4>  ; global constructors keyed to locale_inst.cc+&_ZL14gUnicodeBuffer+0x116f4
086e830a +0x1ba:  jmp    086e8260 <+0x110>
086e830f +0x1bf:  mov    0x8(%ebp),%edx
086e8312 +0x1c2:  mov    (%edx),%eax
086e8314 +0x1c4:  add    -0xc(%eax),%edx
086e8317 +0x1c7:  mov    0x14(%edx),%eax
086e831a +0x1ca:  mov    %edx,(%esp)
086e831d +0x1cd:  or     $0x2,%eax
086e8320 +0x1d0:  mov    %eax,0x4(%esp)
086e8324 +0x1d4:  call   086e0da0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0xd00>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0xd00
086e8329 +0x1d9:  jmp    086e8260 <+0x110>
086e832e +0x1de:  mov    (%ebx),%eax
086e8330 +0x1e0:  mov    %ebx,(%esp)
086e8333 +0x1e3:  call   *0x24(%eax)
086e8336 +0x1e6:  jmp    086e82b8 <+0x168>
086e8338 +0x1e8:  cmp    $0x2,%edx
086e833b +0x1eb:  je     086e8398 <+0x248>
086e833d +0x1ed:  mov    %eax,(%esp)
086e8340 +0x1f0:  call   08725ce0 <__cxa_begin_catch>
086e8345 +0x1f5:  mov    0x8(%ebp),%edx
086e8348 +0x1f8:  mov    (%edx),%eax
086e834a +0x1fa:  mov    -0xc(%eax),%eax
086e834d +0x1fd:  add    %edx,%eax
086e834f +0x1ff:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e8354 +0x204:  call   08725c30 <__cxa_end_catch>
086e8359 +0x209:  jmp    086e8260 <+0x110>
086e835e +0x20e:  mov    (%ebx),%eax
086e8360 +0x210:  mov    %ebx,(%esp)
086e8363 +0x213:  call   *0x28(%eax)
086e8366 +0x216:  mov    %eax,%edx
086e8368 +0x218:  or     $0xffffffff,%eax
086e836b +0x21b:  cmp    $0xffffffff,%edx
086e836e +0x21e:  je     086e82b8 <+0x168>
086e8374 +0x224:  mov    0x8(%ebx),%edx
086e8377 +0x227:  jmp    086e82b0 <+0x160>
086e837c +0x22c:  mov    (%ebx),%eax
086e837e +0x22e:  mov    %ebx,(%esp)
086e8381 +0x231:  call   *0x24(%eax)
086e8384 +0x234:  jmp    086e81b8 <+0x68>
086e8389 +0x239:  mov    %eax,%ebx
086e838b +0x23b:  call   08725c30 <__cxa_end_catch>
086e8390 +0x240:  mov    %ebx,(%esp)
086e8393 +0x243:  call   08ae3750 <_Unwind_Resume>
086e8398 +0x248:  mov    %eax,(%esp)
086e839b +0x24b:  call   08725ce0 <__cxa_begin_catch>
086e83a0 +0x250:  mov    0x8(%ebp),%edx
086e83a3 +0x253:  mov    (%edx),%eax
086e83a5 +0x255:  mov    -0xc(%eax),%eax
086e83a8 +0x258:  add    %edx,%eax
086e83aa +0x25a:  call   086e73d0 <_ZNSt9basic_iosIcSt11char_traitsIcEE11_M_setstateESt12_Ios_Iostate.clone.1>  ; std::basic_ios<char, std::char_traits<char> >::_M_setstate(std::_Ios_Iostate) [clone .clone.1]
086e83af +0x25f:  call   08724be0 <__cxa_rethrow>
086e83b4 +0x264:  jmp    086e8389 <+0x239>
086e83b6 +0x266:  nop
086e83b7 +0x267:  nop
086e83b8 +0x268:  nop
086e83b9 +0x269:  nop
086e83ba +0x26a:  nop
086e83bb +0x26b:  nop
086e83bc +0x26c:  nop
086e83bd +0x26d:  nop
086e83be +0x26e:  nop
086e83bf +0x26f:  nop
```

## 反编译 C

```c
// std::istream::ignore @ 0x86e8150

/* std::istream::ignore(int, int) */

istream * __thiscall std::istream::ignore(istream *this,int param_1,int param_2)

{
  streambuf *this_00;
  void *__s;
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  istream *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  size_t __n;
  sentry local_1d [13];
  
  if (param_2 == -1) {
    piVar4 = (istream *)ignore(this,param_1);
    return piVar4;
  }
  *(undefined4 *)(this + 4) = 0;
  sentry::sentry(local_1d,this,true);
  if ((local_1d[0] == (sentry)0x0) || (param_1 < 1)) {
    return this;
  }
  this_00 = *(streambuf **)(this + *(int *)(*(int *)this + -0xc) + 0x78);
  if (*(byte **)(this_00 + 8) < *(byte **)(this_00 + 0xc)) {
    uVar2 = (uint)**(byte **)(this_00 + 8);
  }
  else {
    uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
  }
  bVar1 = false;
  iVar5 = *(int *)(this + 4);
  do {
    while( true ) {
      while (((param_1 <= iVar5 || (uVar2 == 0xffffffff)) || (param_2 == uVar2))) {
        if (((param_1 != 0x7fffffff) || (uVar2 == 0xffffffff)) || (param_2 == uVar2)) {
          if (bVar1) {
            *(undefined4 *)(this + 4) = 0x7fffffff;
          }
          if (uVar2 != 0xffffffff) {
            if (param_2 != uVar2) {
              return this;
            }
            if (*(int *)(this + 4) != 0x7fffffff) {
              *(int *)(this + 4) = *(int *)(this + 4) + 1;
            }
                    /* try { // try from 086e8305 to 086e8309 has its CatchHandler @ 086e8338 */
            streambuf::sbumpc(this_00);
            return this;
          }
          ios::clear((ios *)(this + *(int *)(*(int *)this + -0xc)),
                     *(_Ios_Iostate *)((ios *)(this + *(int *)(*(int *)this + -0xc)) + 0x14) |
                     _S_eofbit);
          return this;
        }
        iVar5 = -0x80000000;
        bVar1 = true;
        *(undefined4 *)(this + 4) = 0x80000000;
      }
      __s = *(void **)(this_00 + 8);
      __n = param_1 - iVar5;
      if (*(int *)(this_00 + 0xc) - (int)__s < param_1 - iVar5) {
        __n = *(int *)(this_00 + 0xc) - (int)__s;
      }
      if (1 < (int)__n) break;
      pvVar3 = *(void **)(this_00 + 0xc);
      *(int *)(this + 4) = iVar5 + 1;
      if (__s < pvVar3) {
        pbVar7 = (byte *)((int)__s + 1);
        *(byte **)(this_00 + 8) = pbVar7;
LAB_086e82b0:
        if (*(byte **)(this_00 + 0xc) <= pbVar7) goto LAB_086e832e;
        uVar2 = (uint)*pbVar7;
      }
      else {
                    /* try { // try from 086e8363 to 086e8383 has its CatchHandler @ 086e8338 */
        iVar5 = (**(code **)(*(int *)this_00 + 0x28))(this_00);
        uVar2 = 0xffffffff;
        if (iVar5 != -1) {
          pbVar7 = *(byte **)(this_00 + 8);
          goto LAB_086e82b0;
        }
      }
LAB_086e82b8:
      iVar5 = *(int *)(this + 4);
    }
    pvVar3 = memchr(__s,(int)(char)param_2,__n);
    if (pvVar3 != (void *)0x0) {
      __n = (int)pvVar3 - (int)__s;
    }
    pbVar6 = (byte *)((int)__s + __n);
    *(byte **)(this_00 + 8) = pbVar6;
    iVar5 = __n + *(int *)(this + 4);
    pbVar7 = *(byte **)(this_00 + 0xc);
    *(int *)(this + 4) = iVar5;
    if (pbVar7 <= pbVar6) {
LAB_086e832e:
                    /* try { // try from 086e8333 to 086e8335 has its CatchHandler @ 086e8338 */
      uVar2 = (**(code **)(*(int *)this_00 + 0x24))(this_00);
      goto LAB_086e82b8;
    }
    uVar2 = (uint)*pbVar6;
  } while( true );
}
```

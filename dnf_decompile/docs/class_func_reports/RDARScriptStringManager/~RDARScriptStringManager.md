# ~RDARScriptStringManager

`_ZN23RDARScriptStringManagerD1Ev`

`RDARScriptStringManager::~RDARScriptStringManager()`

| 类 | 地址 |
|---|---|
| `RDARScriptStringManager` | `0x08aa4f04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aa4f04  _ZN23RDARScriptStringManagerD1Ev
#           RDARScriptStringManager::~RDARScriptStringManager()
# range [0x08aa4f04, 0x08aa5013]
08aa4f04 +0x000:  push   %ebp
08aa4f05 +0x001:  mov    %esp,%ebp
08aa4f07 +0x003:  push   %esi
08aa4f08 +0x004:  push   %ebx
08aa4f09 +0x005:  sub    $0x20,%esp
08aa4f0c +0x008:  mov    0x8(%ebp),%eax
08aa4f0f +0x00b:  lea    0x18(%eax),%edx
08aa4f12 +0x00e:  lea    -0x10(%ebp),%eax
08aa4f15 +0x011:  mov    %edx,0x4(%esp)
08aa4f19 +0x015:  mov    %eax,(%esp)
08aa4f1c +0x018:  call   08aa67ac <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x8e>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x8e
08aa4f21 +0x01d:  sub    $0x4,%esp
08aa4f24 +0x020:  mov    0x8(%ebp),%eax
08aa4f27 +0x023:  lea    0x18(%eax),%edx
08aa4f2a +0x026:  lea    -0x14(%ebp),%eax
08aa4f2d +0x029:  mov    %edx,0x4(%esp)
08aa4f31 +0x02d:  mov    %eax,(%esp)
08aa4f34 +0x030:  call   08aa67d0 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0xb2>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0xb2
08aa4f39 +0x035:  sub    $0x4,%esp
08aa4f3c +0x038:  jmp    08aa4f7c <+0x78>
08aa4f3e +0x03a:  lea    -0x10(%ebp),%eax
08aa4f41 +0x03d:  mov    %eax,(%esp)
08aa4f44 +0x040:  call   08aa6856 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x138>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x138
08aa4f49 +0x045:  mov    (%eax),%ebx
08aa4f4b +0x047:  test   %ebx,%ebx
08aa4f4d +0x049:  je     08aa4f5f <+0x5b>
08aa4f4f +0x04b:  mov    %ebx,(%esp)
08aa4f52 +0x04e:  call   08ab22be <_ZN16StringDictionaryD1Ev>  ; StringDictionary::~StringDictionary()
08aa4f57 +0x053:  mov    %ebx,(%esp)
08aa4f5a +0x056:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08aa4f5f +0x05b:  lea    -0xc(%ebp),%eax
08aa4f62 +0x05e:  movl   $0x0,0x8(%esp)
08aa4f6a +0x066:  lea    -0x10(%ebp),%edx
08aa4f6d +0x069:  mov    %edx,0x4(%esp)
08aa4f71 +0x06d:  mov    %eax,(%esp)
08aa4f74 +0x070:  call   08aa6822 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x104>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x104
08aa4f79 +0x075:  sub    $0x4,%esp
08aa4f7c +0x078:  lea    -0x14(%ebp),%eax
08aa4f7f +0x07b:  mov    %eax,0x4(%esp)
08aa4f83 +0x07f:  lea    -0x10(%ebp),%eax
08aa4f86 +0x082:  mov    %eax,(%esp)
08aa4f89 +0x085:  call   08aa67f6 <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0xd8>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0xd8
08aa4f8e +0x08a:  test   %al,%al
08aa4f90 +0x08c:  jne    08aa4f3e <+0x3a>
08aa4f92 +0x08e:  jmp    08aa4fac <+0xa8>
08aa4f94 +0x090:  mov    %edx,%ebx
08aa4f96 +0x092:  mov    %eax,%esi
08aa4f98 +0x094:  mov    0x8(%ebp),%eax
08aa4f9b +0x097:  add    $0x24,%eax
08aa4f9e +0x09a:  mov    %eax,(%esp)
08aa4fa1 +0x09d:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa4fa6 +0x0a2:  mov    %esi,%eax
08aa4fa8 +0x0a4:  mov    %ebx,%edx
08aa4faa +0x0a6:  jmp    08aa4fbc <+0xb8>
08aa4fac +0x0a8:  mov    0x8(%ebp),%eax
08aa4faf +0x0ab:  add    $0x24,%eax
08aa4fb2 +0x0ae:  mov    %eax,(%esp)
08aa4fb5 +0x0b1:  call   0871d720 <_GLOBAL__I_wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104>  ; global constructors keyed to wlocale_inst.cc+&_ZL14gUnicodeBuffer+0x8104
08aa4fba +0x0b6:  jmp    08aa4fd4 <+0xd0>
08aa4fbc +0x0b8:  mov    %edx,%ebx
08aa4fbe +0x0ba:  mov    %eax,%esi
08aa4fc0 +0x0bc:  mov    0x8(%ebp),%eax
08aa4fc3 +0x0bf:  add    $0x18,%eax
08aa4fc6 +0x0c2:  mov    %eax,(%esp)
08aa4fc9 +0x0c5:  call   08aa674e <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x30>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x30
08aa4fce +0x0ca:  mov    %esi,%eax
08aa4fd0 +0x0cc:  mov    %ebx,%edx
08aa4fd2 +0x0ce:  jmp    08aa4fe4 <+0xe0>
08aa4fd4 +0x0d0:  mov    0x8(%ebp),%eax
08aa4fd7 +0x0d3:  add    $0x18,%eax
08aa4fda +0x0d6:  mov    %eax,(%esp)
08aa4fdd +0x0d9:  call   08aa674e <_GLOBAL__I__ZN23RDARScriptStringManagerC2Ev+0x30>  ; global constructors keyed to RDARScriptStringManager::RDARScriptStringManager()+0x30
08aa4fe2 +0x0de:  jmp    08aa4fff <+0xfb>
08aa4fe4 +0x0e0:  mov    %edx,%ebx
08aa4fe6 +0x0e2:  mov    %eax,%esi
08aa4fe8 +0x0e4:  mov    0x8(%ebp),%eax
08aa4feb +0x0e7:  mov    %eax,(%esp)
08aa4fee +0x0ea:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
08aa4ff3 +0x0ef:  mov    %esi,%eax
08aa4ff5 +0x0f1:  mov    %ebx,%edx
08aa4ff7 +0x0f3:  mov    %eax,(%esp)
08aa4ffa +0x0f6:  call   08ae3750 <_Unwind_Resume>
08aa4fff +0x0fb:  mov    0x8(%ebp),%eax
08aa5002 +0x0fe:  mov    %eax,(%esp)
08aa5005 +0x101:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
08aa500a +0x106:  lea    -0x8(%ebp),%esp
08aa500d +0x109:  add    $0x0,%esp
08aa5010 +0x10c:  pop    %ebx
08aa5011 +0x10d:  pop    %esi
08aa5012 +0x10e:  pop    %ebp
08aa5013 +0x10f:  ret
```

## 反编译 C

```c
// RDARScriptStringManager::~RDARScriptStringManager @ 0x8aa4f04

/* RDARScriptStringManager::~RDARScriptStringManager() */

void __thiscall RDARScriptStringManager::~RDARScriptStringManager(RDARScriptStringManager *this)

{
  StringDictionary *this_00;
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_14 [4];
  __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
  local_10 [4];
  
                    /* try { // try from 08aa4f1c to 08aa4f8d has its CatchHandler @ 08aa4f94 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::begin();
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
             ::operator*(local_14);
    this_00 = (StringDictionary *)*puVar2;
    if (this_00 != (StringDictionary *)0x0) {
      StringDictionary::~StringDictionary(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    __normal_iterator<StringDictionary**,std::vector<StringDictionary*,std::allocator<StringDictionary*>>>
    ::operator++(local_10,(int)local_14);
  }
                    /* try { // try from 08aa4fb5 to 08aa4fb9 has its CatchHandler @ 08aa4fbc */
  std::wstring::~wstring((wstring *)(this + 0x24));
                    /* try { // try from 08aa4fdd to 08aa4fe1 has its CatchHandler @ 08aa4fe4 */
  std::vector<StringDictionary*,std::allocator<StringDictionary*>>::~vector
            ((vector<StringDictionary*,std::allocator<StringDictionary*>> *)(this + 0x18));
  STScriptFileList::~STScriptFileList((STScriptFileList *)this);
  return;
}
```

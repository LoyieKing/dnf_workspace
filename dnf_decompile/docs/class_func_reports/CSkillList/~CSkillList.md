# ~CSkillList

`_ZN10CSkillListD1Ev`

`CSkillList::~CSkillList()`

| 类 | 地址 |
|---|---|
| `CSkillList` | `0x083509ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083509ec  _ZN10CSkillListD1Ev
#           CSkillList::~CSkillList()
# range [0x083509ec, 0x08350b41]
083509ec +0x000:  push   %ebp
083509ed +0x001:  mov    %esp,%ebp
083509ef +0x003:  push   %edi
083509f0 +0x004:  push   %esi
083509f1 +0x005:  push   %ebx
083509f2 +0x006:  sub    $0x1c,%esp
083509f5 +0x009:  mov    0x8(%ebp),%eax
083509f8 +0x00c:  mov    %eax,(%esp)
083509fb +0x00f:  call   08350b42 <_ZN10CSkillList7destroyEv>  ; CSkillList::destroy()
08350a00 +0x014:  jmp    08350a3f <+0x53>
08350a02 +0x016:  mov    %edx,%esi
08350a04 +0x018:  mov    %eax,%edi
08350a06 +0x01a:  mov    0x8(%ebp),%eax
08350a09 +0x01d:  add    $0x1e4,%eax
08350a0e +0x022:  test   %eax,%eax
08350a10 +0x024:  je     08350a39 <+0x4d>
08350a12 +0x026:  mov    0x8(%ebp),%eax
08350a15 +0x029:  add    $0x1e4,%eax
08350a1a +0x02e:  lea    0x108(%eax),%ebx
08350a20 +0x034:  mov    0x8(%ebp),%eax
08350a23 +0x037:  add    $0x1e4,%eax
08350a28 +0x03c:  cmp    %eax,%ebx
08350a2a +0x03e:  je     08350a39 <+0x4d>
08350a2c +0x040:  sub    $0x18,%ebx
08350a2f +0x043:  mov    %ebx,(%esp)
08350a32 +0x046:  call   0836fa04 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x99d0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x99d0
08350a37 +0x04b:  jmp    08350a20 <+0x34>
08350a39 +0x04d:  mov    %edi,%eax
08350a3b +0x04f:  mov    %esi,%edx
08350a3d +0x051:  jmp    08350a72 <+0x86>
08350a3f +0x053:  mov    0x8(%ebp),%eax
08350a42 +0x056:  add    $0x1e4,%eax
08350a47 +0x05b:  test   %eax,%eax
08350a49 +0x05d:  je     08350aaf <+0xc3>
08350a4b +0x05f:  mov    0x8(%ebp),%eax
08350a4e +0x062:  add    $0x1e4,%eax
08350a53 +0x067:  lea    0x108(%eax),%ebx
08350a59 +0x06d:  mov    0x8(%ebp),%eax
08350a5c +0x070:  add    $0x1e4,%eax
08350a61 +0x075:  cmp    %eax,%ebx
08350a63 +0x077:  je     08350aaf <+0xc3>
08350a65 +0x079:  sub    $0x18,%ebx
08350a68 +0x07c:  mov    %ebx,(%esp)
08350a6b +0x07f:  call   0836fa04 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x99d0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x99d0
08350a70 +0x084:  jmp    08350a59 <+0x6d>
08350a72 +0x086:  mov    %edx,%esi
08350a74 +0x088:  mov    %eax,%edi
08350a76 +0x08a:  mov    0x8(%ebp),%eax
08350a79 +0x08d:  add    $0xdc,%eax
08350a7e +0x092:  test   %eax,%eax
08350a80 +0x094:  je     08350aa9 <+0xbd>
08350a82 +0x096:  mov    0x8(%ebp),%eax
08350a85 +0x099:  add    $0xdc,%eax
08350a8a +0x09e:  lea    0x108(%eax),%ebx
08350a90 +0x0a4:  mov    0x8(%ebp),%eax
08350a93 +0x0a7:  add    $0xdc,%eax
08350a98 +0x0ac:  cmp    %eax,%ebx
08350a9a +0x0ae:  je     08350aa9 <+0xbd>
08350a9c +0x0b0:  sub    $0x18,%ebx
08350a9f +0x0b3:  mov    %ebx,(%esp)
08350aa2 +0x0b6:  call   08379fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a64
08350aa7 +0x0bb:  jmp    08350a90 <+0xa4>
08350aa9 +0x0bd:  mov    %edi,%eax
08350aab +0x0bf:  mov    %esi,%edx
08350aad +0x0c1:  jmp    08350ae2 <+0xf6>
08350aaf +0x0c3:  mov    0x8(%ebp),%eax
08350ab2 +0x0c6:  add    $0xdc,%eax
08350ab7 +0x0cb:  test   %eax,%eax
08350ab9 +0x0cd:  je     08350b16 <+0x12a>
08350abb +0x0cf:  mov    0x8(%ebp),%eax
08350abe +0x0d2:  add    $0xdc,%eax
08350ac3 +0x0d7:  lea    0x108(%eax),%ebx
08350ac9 +0x0dd:  mov    0x8(%ebp),%eax
08350acc +0x0e0:  add    $0xdc,%eax
08350ad1 +0x0e5:  cmp    %eax,%ebx
08350ad3 +0x0e7:  je     08350b16 <+0x12a>
08350ad5 +0x0e9:  sub    $0x18,%ebx
08350ad8 +0x0ec:  mov    %ebx,(%esp)
08350adb +0x0ef:  call   08379fc4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a64>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a64
08350ae0 +0x0f4:  jmp    08350ac9 <+0xdd>
08350ae2 +0x0f6:  mov    %edx,%esi
08350ae4 +0x0f8:  mov    %eax,%edi
08350ae6 +0x0fa:  mov    0x8(%ebp),%eax
08350ae9 +0x0fd:  test   %eax,%eax
08350aeb +0x0ff:  je     08350b0a <+0x11e>
08350aed +0x101:  mov    0x8(%ebp),%eax
08350af0 +0x104:  lea    0xdc(%eax),%ebx
08350af6 +0x10a:  mov    0x8(%ebp),%eax
08350af9 +0x10d:  cmp    %eax,%ebx
08350afb +0x10f:  je     08350b0a <+0x11e>
08350afd +0x111:  sub    $0x14,%ebx
08350b00 +0x114:  mov    %ebx,(%esp)
08350b03 +0x117:  call   08379fb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a50
08350b08 +0x11c:  jmp    08350af6 <+0x10a>
08350b0a +0x11e:  mov    %edi,%eax
08350b0c +0x120:  mov    %esi,%edx
08350b0e +0x122:  mov    %eax,(%esp)
08350b11 +0x125:  call   08ae3750 <_Unwind_Resume>
08350b16 +0x12a:  mov    0x8(%ebp),%eax
08350b19 +0x12d:  test   %eax,%eax
08350b1b +0x12f:  je     08350b3a <+0x14e>
08350b1d +0x131:  mov    0x8(%ebp),%eax
08350b20 +0x134:  lea    0xdc(%eax),%ebx
08350b26 +0x13a:  mov    0x8(%ebp),%eax
08350b29 +0x13d:  cmp    %eax,%ebx
08350b2b +0x13f:  je     08350b3a <+0x14e>
08350b2d +0x141:  sub    $0x14,%ebx
08350b30 +0x144:  mov    %ebx,(%esp)
08350b33 +0x147:  call   08379fb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x9a50>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x9a50
08350b38 +0x14c:  jmp    08350b26 <+0x13a>
08350b3a +0x14e:  add    $0x1c,%esp
08350b3d +0x151:  pop    %ebx
08350b3e +0x152:  pop    %esi
08350b3f +0x153:  pop    %edi
08350b40 +0x154:  pop    %ebp
08350b41 +0x155:  ret
```

## 反编译 C

```c
// CSkillList::~CSkillList @ 0x83509ec

/* CSkillList::~CSkillList() */

void __thiscall CSkillList::~CSkillList(CSkillList *this)

{
  map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
  *this_00;
  multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *this_01;
  hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *this_02;
  
                    /* try { // try from 083509fb to 083509ff has its CatchHandler @ 08350a02 */
  destroy(this);
  if (this != (CSkillList *)0xfffffe1c) {
    this_00 = (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
               *)(this + 0x2ec);
    while (this_00 !=
           (map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
            *)(this + 0x1e4)) {
      this_00 = this_00 + -0x18;
                    /* try { // try from 08350a6b to 08350a6f has its CatchHandler @ 08350a72 */
      std::
      map<int,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>>>
      ::~map(this_00);
    }
  }
  if (this != (CSkillList *)0xffffff24) {
    this_01 = (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
              (this + 0x1e4);
    while (this_01 !=
           (multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>> *)
           (this + 0xdc)) {
      this_01 = this_01 + -0x18;
                    /* try { // try from 08350adb to 08350adf has its CatchHandler @ 08350ae2 */
      std::multimap<int,CSkill*,std::less<int>,std::allocator<std::pair<int_const,CSkill*>>>::
      ~multimap(this_01);
    }
  }
  if (this != (CSkillList *)0x0) {
    this_02 = (hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>
               *)(this + 0xdc);
    while (this_02 !=
           (hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>> *)
           this) {
      this_02 = this_02 + -0x14;
      __gnu_cxx::
      hash_map<int,CSkill*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CSkill*>>::
      ~hash_map(this_02);
    }
  }
  return;
}
```

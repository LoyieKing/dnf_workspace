# ~CMapList

`_ZN8CMapListD1Ev`

`CMapList::~CMapList()`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834ef04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ef04  _ZN8CMapListD1Ev
#           CMapList::~CMapList()
# range [0x0834ef04, 0x0834f08b]
0834ef04 +0x000:  push   %ebp
0834ef05 +0x001:  mov    %esp,%ebp
0834ef07 +0x003:  push   %edi
0834ef08 +0x004:  push   %esi
0834ef09 +0x005:  push   %ebx
0834ef0a +0x006:  sub    $0x1c,%esp
0834ef0d +0x009:  mov    0x8(%ebp),%eax
0834ef10 +0x00c:  mov    %eax,(%esp)
0834ef13 +0x00f:  call   0834f08c <_ZN8CMapList7destroyEv>  ; CMapList::destroy()
0834ef18 +0x014:  jmp    0834ef57 <+0x53>
0834ef1a +0x016:  mov    %edx,%esi
0834ef1c +0x018:  mov    %eax,%edi
0834ef1e +0x01a:  mov    0x8(%ebp),%eax
0834ef21 +0x01d:  add    $0x294,%eax
0834ef26 +0x022:  test   %eax,%eax
0834ef28 +0x024:  je     0834ef51 <+0x4d>
0834ef2a +0x026:  mov    0x8(%ebp),%eax
0834ef2d +0x029:  add    $0x294,%eax
0834ef32 +0x02e:  lea    0x140(%eax),%ebx
0834ef38 +0x034:  mov    0x8(%ebp),%eax
0834ef3b +0x037:  add    $0x294,%eax
0834ef40 +0x03c:  cmp    %eax,%ebx
0834ef42 +0x03e:  je     0834ef51 <+0x4d>
0834ef44 +0x040:  sub    $0x14,%ebx
0834ef47 +0x043:  mov    %ebx,(%esp)
0834ef4a +0x046:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834ef4f +0x04b:  jmp    0834ef38 <+0x34>
0834ef51 +0x04d:  mov    %edi,%eax
0834ef53 +0x04f:  mov    %esi,%edx
0834ef55 +0x051:  jmp    0834ef8a <+0x86>
0834ef57 +0x053:  mov    0x8(%ebp),%eax
0834ef5a +0x056:  add    $0x294,%eax
0834ef5f +0x05b:  test   %eax,%eax
0834ef61 +0x05d:  je     0834efc7 <+0xc3>
0834ef63 +0x05f:  mov    0x8(%ebp),%eax
0834ef66 +0x062:  add    $0x294,%eax
0834ef6b +0x067:  lea    0x140(%eax),%ebx
0834ef71 +0x06d:  mov    0x8(%ebp),%eax
0834ef74 +0x070:  add    $0x294,%eax
0834ef79 +0x075:  cmp    %eax,%ebx
0834ef7b +0x077:  je     0834efc7 <+0xc3>
0834ef7d +0x079:  sub    $0x14,%ebx
0834ef80 +0x07c:  mov    %ebx,(%esp)
0834ef83 +0x07f:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834ef88 +0x084:  jmp    0834ef71 <+0x6d>
0834ef8a +0x086:  mov    %edx,%esi
0834ef8c +0x088:  mov    %eax,%edi
0834ef8e +0x08a:  mov    0x8(%ebp),%eax
0834ef91 +0x08d:  add    $0x154,%eax
0834ef96 +0x092:  test   %eax,%eax
0834ef98 +0x094:  je     0834efc1 <+0xbd>
0834ef9a +0x096:  mov    0x8(%ebp),%eax
0834ef9d +0x099:  add    $0x154,%eax
0834efa2 +0x09e:  lea    0x140(%eax),%ebx
0834efa8 +0x0a4:  mov    0x8(%ebp),%eax
0834efab +0x0a7:  add    $0x154,%eax
0834efb0 +0x0ac:  cmp    %eax,%ebx
0834efb2 +0x0ae:  je     0834efc1 <+0xbd>
0834efb4 +0x0b0:  sub    $0x14,%ebx
0834efb7 +0x0b3:  mov    %ebx,(%esp)
0834efba +0x0b6:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834efbf +0x0bb:  jmp    0834efa8 <+0xa4>
0834efc1 +0x0bd:  mov    %edi,%eax
0834efc3 +0x0bf:  mov    %esi,%edx
0834efc5 +0x0c1:  jmp    0834effa <+0xf6>
0834efc7 +0x0c3:  mov    0x8(%ebp),%eax
0834efca +0x0c6:  add    $0x154,%eax
0834efcf +0x0cb:  test   %eax,%eax
0834efd1 +0x0cd:  je     0834f031 <+0x12d>
0834efd3 +0x0cf:  mov    0x8(%ebp),%eax
0834efd6 +0x0d2:  add    $0x154,%eax
0834efdb +0x0d7:  lea    0x140(%eax),%ebx
0834efe1 +0x0dd:  mov    0x8(%ebp),%eax
0834efe4 +0x0e0:  add    $0x154,%eax
0834efe9 +0x0e5:  cmp    %eax,%ebx
0834efeb +0x0e7:  je     0834f031 <+0x12d>
0834efed +0x0e9:  sub    $0x14,%ebx
0834eff0 +0x0ec:  mov    %ebx,(%esp)
0834eff3 +0x0ef:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834eff8 +0x0f4:  jmp    0834efe1 <+0xdd>
0834effa +0x0f6:  mov    %edx,%esi
0834effc +0x0f8:  mov    %eax,%edi
0834effe +0x0fa:  mov    0x8(%ebp),%eax
0834f001 +0x0fd:  add    $0x14,%eax
0834f004 +0x100:  test   %eax,%eax
0834f006 +0x102:  je     0834f02b <+0x127>
0834f008 +0x104:  mov    0x8(%ebp),%eax
0834f00b +0x107:  add    $0x14,%eax
0834f00e +0x10a:  lea    0x140(%eax),%ebx
0834f014 +0x110:  mov    0x8(%ebp),%eax
0834f017 +0x113:  add    $0x14,%eax
0834f01a +0x116:  cmp    %eax,%ebx
0834f01c +0x118:  je     0834f02b <+0x127>
0834f01e +0x11a:  sub    $0x14,%ebx
0834f021 +0x11d:  mov    %ebx,(%esp)
0834f024 +0x120:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834f029 +0x125:  jmp    0834f014 <+0x110>
0834f02b +0x127:  mov    %edi,%eax
0834f02d +0x129:  mov    %esi,%edx
0834f02f +0x12b:  jmp    0834f05e <+0x15a>
0834f031 +0x12d:  mov    0x8(%ebp),%eax
0834f034 +0x130:  add    $0x14,%eax
0834f037 +0x133:  test   %eax,%eax
0834f039 +0x135:  je     0834f079 <+0x175>
0834f03b +0x137:  mov    0x8(%ebp),%eax
0834f03e +0x13a:  add    $0x14,%eax
0834f041 +0x13d:  lea    0x140(%eax),%ebx
0834f047 +0x143:  mov    0x8(%ebp),%eax
0834f04a +0x146:  add    $0x14,%eax
0834f04d +0x149:  cmp    %eax,%ebx
0834f04f +0x14b:  je     0834f079 <+0x175>
0834f051 +0x14d:  sub    $0x14,%ebx
0834f054 +0x150:  mov    %ebx,(%esp)
0834f057 +0x153:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834f05c +0x158:  jmp    0834f047 <+0x143>
0834f05e +0x15a:  mov    %edx,%ebx
0834f060 +0x15c:  mov    %eax,%esi
0834f062 +0x15e:  mov    0x8(%ebp),%eax
0834f065 +0x161:  mov    %eax,(%esp)
0834f068 +0x164:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834f06d +0x169:  mov    %esi,%eax
0834f06f +0x16b:  mov    %ebx,%edx
0834f071 +0x16d:  mov    %eax,(%esp)
0834f074 +0x170:  call   08ae3750 <_Unwind_Resume>
0834f079 +0x175:  mov    0x8(%ebp),%eax
0834f07c +0x178:  mov    %eax,(%esp)
0834f07f +0x17b:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834f084 +0x180:  add    $0x1c,%esp
0834f087 +0x183:  pop    %ebx
0834f088 +0x184:  pop    %esi
0834f089 +0x185:  pop    %edi
0834f08a +0x186:  pop    %ebp
0834f08b +0x187:  ret
```

## 反编译 C

```c
// CMapList::~CMapList @ 0x834ef04

/* CMapList::~CMapList() */

void __thiscall CMapList::~CMapList(CMapList *this)

{
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *phVar1;
  
                    /* try { // try from 0834ef13 to 0834ef17 has its CatchHandler @ 0834ef1a */
  destroy(this);
  if (this != (CMapList *)0xfffffd6c) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x3d4);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x294)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834ef83 to 0834ef87 has its CatchHandler @ 0834ef8a */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  if (this != (CMapList *)0xfffffeac) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x294);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x154)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834eff3 to 0834eff7 has its CatchHandler @ 0834effa */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  if (this != (CMapList *)0xffffffec) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x154);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x14)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834f057 to 0834f05b has its CatchHandler @ 0834f05e */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  ~hash_map((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
            this);
  return;
}
```

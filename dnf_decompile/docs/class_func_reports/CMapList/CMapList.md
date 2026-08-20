# CMapList

`_ZN8CMapListC1Ev`

`CMapList::CMapList()`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834ed24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834ed24  _ZN8CMapListC1Ev
#           CMapList::CMapList()
# range [0x0834ed24, 0x0834eeff]
0834ed24 +0x000:  push   %ebp
0834ed25 +0x001:  mov    %esp,%ebp
0834ed27 +0x003:  push   %edi
0834ed28 +0x004:  push   %esi
0834ed29 +0x005:  push   %ebx
0834ed2a +0x006:  sub    $0x2c,%esp
0834ed2d +0x009:  mov    0x8(%ebp),%eax
0834ed30 +0x00c:  mov    %eax,(%esp)
0834ed33 +0x00f:  call   08387588 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17028>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17028
0834ed38 +0x014:  mov    0x8(%ebp),%eax
0834ed3b +0x017:  lea    0x14(%eax),%esi
0834ed3e +0x01a:  mov    %esi,%edi
0834ed40 +0x01c:  mov    $0xf,%ebx
0834ed45 +0x021:  jmp    0834ed55 <+0x31>
0834ed47 +0x023:  mov    %edi,(%esp)
0834ed4a +0x026:  call   08387588 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17028>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17028
0834ed4f +0x02b:  add    $0x14,%edi
0834ed52 +0x02e:  sub    $0x1,%ebx
0834ed55 +0x031:  cmp    $0xffffffff,%ebx
0834ed58 +0x034:  setne  %al
0834ed5b +0x037:  test   %al,%al
0834ed5d +0x039:  jne    0834ed47 <+0x23>
0834ed5f +0x03b:  jmp    0834ed9b <+0x77>
0834ed61 +0x03d:  mov    %edx,%edi
0834ed63 +0x03f:  mov    %eax,-0x24(%ebp)
0834ed66 +0x042:  test   %esi,%esi
0834ed68 +0x044:  je     0834ed91 <+0x6d>
0834ed6a +0x046:  mov    $0xf,%eax
0834ed6f +0x04b:  sub    %ebx,%eax
0834ed71 +0x04d:  mov    %eax,%edx
0834ed73 +0x04f:  mov    %edx,%eax
0834ed75 +0x051:  shl    $0x2,%eax
0834ed78 +0x054:  add    %edx,%eax
0834ed7a +0x056:  shl    $0x2,%eax
0834ed7d +0x059:  lea    (%esi,%eax,1),%ebx
0834ed80 +0x05c:  cmp    %esi,%ebx
0834ed82 +0x05e:  je     0834ed91 <+0x6d>
0834ed84 +0x060:  sub    $0x14,%ebx
0834ed87 +0x063:  mov    %ebx,(%esp)
0834ed8a +0x066:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834ed8f +0x06b:  jmp    0834ed80 <+0x5c>
0834ed91 +0x06d:  mov    -0x24(%ebp),%eax
0834ed94 +0x070:  mov    %edi,%edx
0834ed96 +0x072:  jmp    0834eee9 <+0x1c5>
0834ed9b +0x077:  mov    0x8(%ebp),%eax
0834ed9e +0x07a:  lea    0x154(%eax),%esi
0834eda4 +0x080:  mov    %esi,%edi
0834eda6 +0x082:  mov    $0xf,%ebx
0834edab +0x087:  jmp    0834edbb <+0x97>
0834edad +0x089:  mov    %edi,(%esp)
0834edb0 +0x08c:  call   08387588 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17028>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17028
0834edb5 +0x091:  add    $0x14,%edi
0834edb8 +0x094:  sub    $0x1,%ebx
0834edbb +0x097:  cmp    $0xffffffff,%ebx
0834edbe +0x09a:  setne  %al
0834edc1 +0x09d:  test   %al,%al
0834edc3 +0x09f:  jne    0834edad <+0x89>
0834edc5 +0x0a1:  jmp    0834ee01 <+0xdd>
0834edc7 +0x0a3:  mov    %edx,%edi
0834edc9 +0x0a5:  mov    %eax,-0x20(%ebp)
0834edcc +0x0a8:  test   %esi,%esi
0834edce +0x0aa:  je     0834edf7 <+0xd3>
0834edd0 +0x0ac:  mov    $0xf,%eax
0834edd5 +0x0b1:  sub    %ebx,%eax
0834edd7 +0x0b3:  mov    %eax,%edx
0834edd9 +0x0b5:  mov    %edx,%eax
0834eddb +0x0b7:  shl    $0x2,%eax
0834edde +0x0ba:  add    %edx,%eax
0834ede0 +0x0bc:  shl    $0x2,%eax
0834ede3 +0x0bf:  lea    (%esi,%eax,1),%ebx
0834ede6 +0x0c2:  cmp    %esi,%ebx
0834ede8 +0x0c4:  je     0834edf7 <+0xd3>
0834edea +0x0c6:  sub    $0x14,%ebx
0834eded +0x0c9:  mov    %ebx,(%esp)
0834edf0 +0x0cc:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834edf5 +0x0d1:  jmp    0834ede6 <+0xc2>
0834edf7 +0x0d3:  mov    -0x20(%ebp),%eax
0834edfa +0x0d6:  mov    %edi,%edx
0834edfc +0x0d8:  jmp    0834eeb4 <+0x190>
0834ee01 +0x0dd:  mov    0x8(%ebp),%eax
0834ee04 +0x0e0:  lea    0x294(%eax),%esi
0834ee0a +0x0e6:  mov    %esi,%edi
0834ee0c +0x0e8:  mov    $0xf,%ebx
0834ee11 +0x0ed:  jmp    0834ee21 <+0xfd>
0834ee13 +0x0ef:  mov    %edi,(%esp)
0834ee16 +0x0f2:  call   08387588 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17028>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17028
0834ee1b +0x0f7:  add    $0x14,%edi
0834ee1e +0x0fa:  sub    $0x1,%ebx
0834ee21 +0x0fd:  cmp    $0xffffffff,%ebx
0834ee24 +0x100:  setne  %al
0834ee27 +0x103:  test   %al,%al
0834ee29 +0x105:  jne    0834ee13 <+0xef>
0834ee2b +0x107:  jmp    0834ee74 <+0x150>
0834ee2d +0x109:  mov    %edx,%edi
0834ee2f +0x10b:  mov    %eax,-0x1c(%ebp)
0834ee32 +0x10e:  test   %esi,%esi
0834ee34 +0x110:  je     0834ee5d <+0x139>
0834ee36 +0x112:  mov    $0xf,%eax
0834ee3b +0x117:  sub    %ebx,%eax
0834ee3d +0x119:  mov    %eax,%edx
0834ee3f +0x11b:  mov    %edx,%eax
0834ee41 +0x11d:  shl    $0x2,%eax
0834ee44 +0x120:  add    %edx,%eax
0834ee46 +0x122:  shl    $0x2,%eax
0834ee49 +0x125:  lea    (%esi,%eax,1),%ebx
0834ee4c +0x128:  cmp    %esi,%ebx
0834ee4e +0x12a:  je     0834ee5d <+0x139>
0834ee50 +0x12c:  sub    $0x14,%ebx
0834ee53 +0x12f:  mov    %ebx,(%esp)
0834ee56 +0x132:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834ee5b +0x137:  jmp    0834ee4c <+0x128>
0834ee5d +0x139:  mov    -0x1c(%ebp),%eax
0834ee60 +0x13c:  mov    %edi,%edx
0834ee62 +0x13e:  mov    %edx,%esi
0834ee64 +0x140:  mov    %eax,%edi
0834ee66 +0x142:  mov    0x8(%ebp),%eax
0834ee69 +0x145:  add    $0x154,%eax
0834ee6e +0x14a:  test   %eax,%eax
0834ee70 +0x14c:  je     0834eeb0 <+0x18c>
0834ee72 +0x14e:  jmp    0834ee89 <+0x165>
0834ee74 +0x150:  mov    0x8(%ebp),%eax
0834ee77 +0x153:  movl   $0x0,0x3d4(%eax)
0834ee81 +0x15d:  add    $0x2c,%esp
0834ee84 +0x160:  pop    %ebx
0834ee85 +0x161:  pop    %esi
0834ee86 +0x162:  pop    %edi
0834ee87 +0x163:  pop    %ebp
0834ee88 +0x164:  ret
0834ee89 +0x165:  mov    0x8(%ebp),%eax
0834ee8c +0x168:  add    $0x154,%eax
0834ee91 +0x16d:  lea    0x140(%eax),%ebx
0834ee97 +0x173:  mov    0x8(%ebp),%eax
0834ee9a +0x176:  add    $0x154,%eax
0834ee9f +0x17b:  cmp    %eax,%ebx
0834eea1 +0x17d:  je     0834eeb0 <+0x18c>
0834eea3 +0x17f:  sub    $0x14,%ebx
0834eea6 +0x182:  mov    %ebx,(%esp)
0834eea9 +0x185:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834eeae +0x18a:  jmp    0834ee97 <+0x173>
0834eeb0 +0x18c:  mov    %edi,%eax
0834eeb2 +0x18e:  mov    %esi,%edx
0834eeb4 +0x190:  mov    %edx,%esi
0834eeb6 +0x192:  mov    %eax,%edi
0834eeb8 +0x194:  mov    0x8(%ebp),%eax
0834eebb +0x197:  add    $0x14,%eax
0834eebe +0x19a:  test   %eax,%eax
0834eec0 +0x19c:  je     0834eee5 <+0x1c1>
0834eec2 +0x19e:  mov    0x8(%ebp),%eax
0834eec5 +0x1a1:  add    $0x14,%eax
0834eec8 +0x1a4:  lea    0x140(%eax),%ebx
0834eece +0x1aa:  mov    0x8(%ebp),%eax
0834eed1 +0x1ad:  add    $0x14,%eax
0834eed4 +0x1b0:  cmp    %eax,%ebx
0834eed6 +0x1b2:  je     0834eee5 <+0x1c1>
0834eed8 +0x1b4:  sub    $0x14,%ebx
0834eedb +0x1b7:  mov    %ebx,(%esp)
0834eede +0x1ba:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834eee3 +0x1bf:  jmp    0834eece <+0x1aa>
0834eee5 +0x1c1:  mov    %edi,%eax
0834eee7 +0x1c3:  mov    %esi,%edx
0834eee9 +0x1c5:  mov    %edx,%ebx
0834eeeb +0x1c7:  mov    %eax,%esi
0834eeed +0x1c9:  mov    0x8(%ebp),%eax
0834eef0 +0x1cc:  mov    %eax,(%esp)
0834eef3 +0x1cf:  call   08373f14 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xdee0>  ; global constructors keyed to CServerEvent::m_nExpRate+0xdee0
0834eef8 +0x1d4:  mov    %esi,%eax
0834eefa +0x1d6:  mov    %ebx,%edx
0834eefc +0x1d8:  mov    %eax,(%esp)
0834eeff +0x1db:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CMapList::CMapList @ 0x834ed24

/* CMapList::CMapList() */

void __thiscall CMapList::CMapList(CMapList *this)

{
  int iVar1;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *phVar2;
  
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  hash_map((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this
          );
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this
  ;
  for (iVar1 = 0xf; phVar2 = phVar2 + 0x14, iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834ed4a to 0834ed4e has its CatchHandler @ 0834ed61 */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
  }
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
           (this + 0x154);
  for (iVar1 = 0xf; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834edb0 to 0834edb4 has its CatchHandler @ 0834edc7 */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
    phVar2 = phVar2 + 0x14;
  }
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
           (this + 0x294);
  for (iVar1 = 0xf; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834ee16 to 0834ee1a has its CatchHandler @ 0834ee2d */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
    phVar2 = phVar2 + 0x14;
  }
  *(undefined4 *)(this + 0x3d4) = 0;
  return;
}
```

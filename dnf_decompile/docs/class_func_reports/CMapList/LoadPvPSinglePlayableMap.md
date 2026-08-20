# LoadPvPSinglePlayableMap

`_ZN8CMapList24LoadPvPSinglePlayableMapEPc`

`CMapList::LoadPvPSinglePlayableMap(char*)`

| 类 | 地址 |
|---|---|
| `CMapList` | `0x0834f4ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f4ba  _ZN8CMapList24LoadPvPSinglePlayableMapEPc
#           CMapList::LoadPvPSinglePlayableMap(char*)
# range [0x0834f4ba, 0x0834f5c7]
0834f4ba +0x000:  push   %ebp
0834f4bb +0x001:  mov    %esp,%ebp
0834f4bd +0x003:  push   %esi
0834f4be +0x004:  push   %ebx
0834f4bf +0x005:  sub    $0x2c0,%esp
0834f4c5 +0x00b:  lea    -0xb8(%ebp),%eax
0834f4cb +0x011:  mov    %eax,(%esp)
0834f4ce +0x014:  call   0807f858 <_ZN14CNRDScriptDataC1Ev>  ; CNRDScriptData::CNRDScriptData()
0834f4d3 +0x019:  mov    0x8(%ebp),%eax
0834f4d6 +0x01c:  mov    %eax,0x4(%esp)
0834f4da +0x020:  lea    -0xb8(%ebp),%eax
0834f4e0 +0x026:  mov    %eax,(%esp)
0834f4e3 +0x029:  call   0807fb2c <_ZN14CNRDScriptData6importEPKc>  ; CNRDScriptData::import(char const*)
0834f4e8 +0x02e:  lea    -0x14(%ebp),%eax
0834f4eb +0x031:  movl   $&_ZN8CMapList14mapPvpMapInfo_E,0x4(%esp)
0834f4f3 +0x039:  mov    %eax,(%esp)
0834f4f6 +0x03c:  call   0838be32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b8d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b8d2
0834f4fb +0x041:  sub    $0x4,%esp
0834f4fe +0x044:  jmp    0834f55f <+0xa5>
0834f500 +0x046:  lea    -0x14(%ebp),%eax
0834f503 +0x049:  mov    %eax,(%esp)
0834f506 +0x04c:  call   0838beb0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b950>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b950
0834f50b +0x051:  add    $0x4,%eax
0834f50e +0x054:  mov    %eax,-0xc(%ebp)
0834f511 +0x057:  mov    -0xc(%ebp),%eax
0834f514 +0x05a:  mov    (%eax),%eax
0834f516 +0x05c:  mov    %eax,0x8(%esp)
0834f51a +0x060:  movl   $"pvp deathmatch single play %d",0x4(%esp)
0834f522 +0x068:  lea    -0x2b8(%ebp),%eax
0834f528 +0x06e:  mov    %eax,(%esp)
0834f52b +0x071:  call   0807e440 <_init+0xd38>
0834f530 +0x076:  lea    -0x2b8(%ebp),%eax
0834f536 +0x07c:  mov    %eax,0x4(%esp)
0834f53a +0x080:  lea    -0xb8(%ebp),%eax
0834f540 +0x086:  mov    %eax,(%esp)
0834f543 +0x089:  call   0807fe8a <_ZNK14CNRDScriptData6getIntEPKc>  ; CNRDScriptData::getInt(char const*) const
0834f548 +0x08e:  cmp    $0x1,%eax
0834f54b +0x091:  sete   %dl
0834f54e +0x094:  mov    -0xc(%ebp),%eax
0834f551 +0x097:  mov    %dl,0x4(%eax)
0834f554 +0x09a:  lea    -0x14(%ebp),%eax
0834f557 +0x09d:  mov    %eax,(%esp)
0834f55a +0x0a0:  call   0838be92 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b932>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b932
0834f55f +0x0a5:  lea    -0x10(%ebp),%eax
0834f562 +0x0a8:  movl   $&_ZN8CMapList14mapPvpMapInfo_E,0x4(%esp)
0834f56a +0x0b0:  mov    %eax,(%esp)
0834f56d +0x0b3:  call   0838be58 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b8f8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b8f8
0834f572 +0x0b8:  sub    $0x4,%esp
0834f575 +0x0bb:  lea    -0x10(%ebp),%eax
0834f578 +0x0be:  mov    %eax,0x4(%esp)
0834f57c +0x0c2:  lea    -0x14(%ebp),%eax
0834f57f +0x0c5:  mov    %eax,(%esp)
0834f582 +0x0c8:  call   0838be7e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1b91e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1b91e
0834f587 +0x0cd:  test   %al,%al
0834f589 +0x0cf:  jne    0834f500 <+0x46>
0834f58f +0x0d5:  jmp    0834f5af <+0xf5>
0834f591 +0x0d7:  mov    %edx,%ebx
0834f593 +0x0d9:  mov    %eax,%esi
0834f595 +0x0db:  lea    -0xb8(%ebp),%eax
0834f59b +0x0e1:  mov    %eax,(%esp)
0834f59e +0x0e4:  call   0807f966 <_ZN14CNRDScriptDataD1Ev>  ; CNRDScriptData::~CNRDScriptData()
0834f5a3 +0x0e9:  mov    %esi,%eax
0834f5a5 +0x0eb:  mov    %ebx,%edx
0834f5a7 +0x0ed:  mov    %eax,(%esp)
0834f5aa +0x0f0:  call   08ae3750 <_Unwind_Resume>
0834f5af +0x0f5:  lea    -0xb8(%ebp),%eax
0834f5b5 +0x0fb:  mov    %eax,(%esp)
0834f5b8 +0x0fe:  call   0807f966 <_ZN14CNRDScriptDataD1Ev>  ; CNRDScriptData::~CNRDScriptData()
0834f5bd +0x103:  lea    -0x8(%ebp),%esp
0834f5c0 +0x106:  add    $0x0,%esp
0834f5c3 +0x109:  pop    %ebx
0834f5c4 +0x10a:  pop    %esi
0834f5c5 +0x10b:  pop    %ebp
0834f5c6 +0x10c:  ret
0834f5c7 +0x10d:  nop
```

## 反编译 C

```c
// CMapList::LoadPvPSinglePlayableMap @ 0x834f4ba

/* CMapList::LoadPvPSinglePlayableMap(char*) */

void CMapList::LoadPvPSinglePlayableMap(char *param_1)

{
  char cVar1;
  int iVar2;
  char local_2bc [512];
  CNRDScriptData local_bc [164];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_18 [4];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_14 [4];
  undefined4 *local_10;
  
  CNRDScriptData::CNRDScriptData(local_bc);
                    /* try { // try from 0834f4e3 to 0834f571 has its CatchHandler @ 0834f591 */
  CNRDScriptData::import(local_bc,param_1);
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::begin
            (local_18);
  while( true ) {
    std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18);
    local_10 = (undefined4 *)(iVar2 + 4);
    sprintf(local_2bc,"pvp deathmatch single play %d",*local_10);
    iVar2 = CNRDScriptData::getInt((char *)local_bc);
    *(bool *)(local_10 + 1) = iVar2 == 1;
    std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18);
  }
  CNRDScriptData::~CNRDScriptData(local_bc);
  return;
}
```

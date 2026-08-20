# take_fish

`_ZN4Area9take_fishEv`

`Area::take_fish()`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c21e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c21e2  _ZN4Area9take_fishEv
#           Area::take_fish()
# range [0x086c21e2, 0x086c22f1]
086c21e2 +0x000:  push   %ebp
086c21e3 +0x001:  mov    %esp,%ebp
086c21e5 +0x003:  sub    $0x58,%esp
086c21e8 +0x006:  mov    0x8(%ebp),%eax
086c21eb +0x009:  mov    0x68(%eax),%eax
086c21ee +0x00c:  cmp    $0x2,%eax
086c21f1 +0x00f:  jne    086c22eb <+0x109>
086c21f7 +0x015:  movl   $0x0,-0x14(%ebp)
086c21fe +0x01c:  movl   $&_ZL14gUnicodeBuffer+0xe174,(%esp)
086c2205 +0x023:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086c220a +0x028:  mov    %eax,-0x10(%ebp)
086c220d +0x02b:  movl   $0x0,-0xc(%ebp)
086c2214 +0x032:  lea    -0x28(%ebp),%eax
086c2217 +0x035:  mov    %eax,(%esp)
086c221a +0x038:  call   085176cc <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3d01>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3d01
086c221f +0x03d:  lea    -0x30(%ebp),%eax
086c2222 +0x040:  mov    %eax,(%esp)
086c2225 +0x043:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
086c222a +0x048:  mov    0x8(%ebp),%eax
086c222d +0x04b:  lea    0x28(%eax),%edx
086c2230 +0x04e:  lea    -0x3c(%ebp),%eax
086c2233 +0x051:  mov    %edx,0x4(%esp)
086c2237 +0x055:  mov    %eax,(%esp)
086c223a +0x058:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
086c223f +0x05d:  sub    $0x4,%esp
086c2242 +0x060:  mov    -0x3c(%ebp),%eax
086c2245 +0x063:  mov    %eax,-0x28(%ebp)
086c2248 +0x066:  jmp    086c22a5 <+0xc3>
086c224a +0x068:  lea    -0x28(%ebp),%eax
086c224d +0x06b:  mov    %eax,(%esp)
086c2250 +0x06e:  call   080dd5fc <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x145>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x145
086c2255 +0x073:  mov    0x4(%eax),%edx
086c2258 +0x076:  mov    (%eax),%eax
086c225a +0x078:  mov    %eax,-0x20(%ebp)
086c225d +0x07b:  mov    %edx,-0x1c(%ebp)
086c2260 +0x07e:  lea    -0x20(%ebp),%eax
086c2263 +0x081:  mov    %eax,0x4(%esp)
086c2267 +0x085:  lea    -0x30(%ebp),%eax
086c226a +0x088:  mov    %eax,(%esp)
086c226d +0x08b:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
086c2272 +0x090:  mov    -0x2c(%ebp),%eax
086c2275 +0x093:  add    %eax,-0xc(%ebp)
086c2278 +0x096:  mov    -0xc(%ebp),%eax
086c227b +0x099:  cmp    -0x10(%ebp),%eax
086c227e +0x09c:  jle    086c2288 <+0xa6>
086c2280 +0x09e:  mov    -0x30(%ebp),%eax
086c2283 +0x0a1:  mov    %eax,-0x14(%ebp)
086c2286 +0x0a4:  jmp    086c22d7 <+0xf5>
086c2288 +0x0a6:  lea    -0x18(%ebp),%eax
086c228b +0x0a9:  movl   $0x0,0x8(%esp)
086c2293 +0x0b1:  lea    -0x28(%ebp),%edx
086c2296 +0x0b4:  mov    %edx,0x4(%esp)
086c229a +0x0b8:  mov    %eax,(%esp)
086c229d +0x0bb:  call   08388d9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1883c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1883c
086c22a2 +0x0c0:  sub    $0x4,%esp
086c22a5 +0x0c3:  mov    0x8(%ebp),%eax
086c22a8 +0x0c6:  lea    0x28(%eax),%edx
086c22ab +0x0c9:  lea    -0x24(%ebp),%eax
086c22ae +0x0cc:  mov    %edx,0x4(%esp)
086c22b2 +0x0d0:  mov    %eax,(%esp)
086c22b5 +0x0d3:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
086c22ba +0x0d8:  sub    $0x4,%esp
086c22bd +0x0db:  lea    -0x24(%ebp),%eax
086c22c0 +0x0de:  mov    %eax,0x4(%esp)
086c22c4 +0x0e2:  lea    -0x28(%ebp),%eax
086c22c7 +0x0e5:  mov    %eax,(%esp)
086c22ca +0x0e8:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
086c22cf +0x0ed:  test   %al,%al
086c22d1 +0x0ef:  jne    086c224a <+0x68>
086c22d7 +0x0f5:  cmpl   $0x0,-0x14(%ebp)
086c22db +0x0f9:  jne    086c22e6 <+0x104>
086c22dd +0x0fb:  mov    0x8(%ebp),%eax
086c22e0 +0x0fe:  mov    0x24(%eax),%eax
086c22e3 +0x101:  mov    %eax,-0x14(%ebp)
086c22e6 +0x104:  mov    -0x14(%ebp),%eax
086c22e9 +0x107:  jmp    086c22f0 <+0x10e>
086c22eb +0x109:  mov    $0xffffffff,%eax
086c22f0 +0x10e:  leave
086c22f1 +0x10f:  ret
```

## 反编译 C

```c
// Area::take_fish @ 0x86c21e2

/* Area::take_fish() */

int __thiscall Area::take_fish(Area *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int local_34;
  int local_30;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(this + 0x68) == 2) {
    local_18 = 0;
    local_14 = get_rand_int(100000);
    local_10 = 0;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_2c);
    std::pair<int,int>::pair((pair<int,int> *)&local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_2c,local_28);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
               ::operator*(local_2c);
      local_20 = puVar2[1];
      local_24 = *puVar2;
      std::pair<int,int>::operator=((pair<int,int> *)&local_34,(pair *)&local_24);
      local_10 = local_10 + local_30;
      if (local_14 < local_10) {
        local_18 = local_34;
        break;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_1c,(int)local_2c);
    }
    if (local_18 == 0) {
      local_18 = *(int *)(this + 0x24);
    }
  }
  else {
    local_18 = -1;
  }
  return local_18;
}
```

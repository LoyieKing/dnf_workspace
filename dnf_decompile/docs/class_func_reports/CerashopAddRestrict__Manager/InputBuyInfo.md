# InputBuyInfo

`_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE`

`CerashopAddRestrict::Manager::InputBuyInfo(CUser*, unsigned int, unsigned int, CerashopAddRestrict::DBInputData&)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e129a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e129a  _ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE
#           CerashopAddRestrict::Manager::InputBuyInfo(CUser*, unsigned int, unsigned int, CerashopAddRestrict::DBInputData&)
# range [0x080e129a, 0x080e1429]
080e129a +0x000:  push   %ebp
080e129b +0x001:  mov    %esp,%ebp
080e129d +0x003:  sub    $0x38,%esp
080e12a0 +0x006:  mov    0x10(%ebp),%eax
080e12a3 +0x009:  mov    0x8(%ebp),%edx
080e12a6 +0x00c:  add    $0x4,%edx
080e12a9 +0x00f:  mov    %eax,0x4(%esp)
080e12ad +0x013:  mov    %edx,(%esp)
080e12b0 +0x016:  call   08abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>  ; CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int)
080e12b5 +0x01b:  mov    %eax,-0x10(%ebp)
080e12b8 +0x01e:  cmpl   $0x0,-0x10(%ebp)
080e12bc +0x022:  jne    080e12c8 <+0x2e>
080e12be +0x024:  mov    $0x0,%eax
080e12c3 +0x029:  jmp    080e1427 <+0x18d>
080e12c8 +0x02e:  mov    0x18(%ebp),%eax
080e12cb +0x031:  mov    -0x10(%ebp),%edx
080e12ce +0x034:  mov    %edx,0x4(%eax)
080e12d1 +0x037:  mov    0xc(%ebp),%eax
080e12d4 +0x03a:  add    $0x8d1e4,%eax
080e12d9 +0x03f:  mov    %eax,-0xc(%ebp)
080e12dc +0x042:  mov    -0x10(%ebp),%eax
080e12df +0x045:  mov    (%eax),%eax
080e12e1 +0x047:  test   %eax,%eax
080e12e3 +0x049:  je     080e12f3 <+0x59>
080e12e5 +0x04b:  cmp    $0x1,%eax
080e12e8 +0x04e:  je     080e137f <+0xe5>
080e12ee +0x054:  jmp    080e140b <+0x171>
080e12f3 +0x059:  mov    -0xc(%ebp),%eax
080e12f6 +0x05c:  lea    0x30(%eax),%ecx
080e12f9 +0x05f:  lea    -0x1c(%ebp),%eax
080e12fc +0x062:  lea    0x10(%ebp),%edx
080e12ff +0x065:  mov    %edx,0x8(%esp)
080e1303 +0x069:  mov    %ecx,0x4(%esp)
080e1307 +0x06d:  mov    %eax,(%esp)
080e130a +0x070:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
080e130f +0x075:  sub    $0x4,%esp
080e1312 +0x078:  mov    -0xc(%ebp),%eax
080e1315 +0x07b:  lea    0x30(%eax),%edx
080e1318 +0x07e:  lea    -0x18(%ebp),%eax
080e131b +0x081:  mov    %edx,0x4(%esp)
080e131f +0x085:  mov    %eax,(%esp)
080e1322 +0x088:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
080e1327 +0x08d:  sub    $0x4,%esp
080e132a +0x090:  lea    -0x18(%ebp),%eax
080e132d +0x093:  mov    %eax,0x4(%esp)
080e1331 +0x097:  lea    -0x1c(%ebp),%eax
080e1334 +0x09a:  mov    %eax,(%esp)
080e1337 +0x09d:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
080e133c +0x0a2:  test   %al,%al
080e133e +0x0a4:  je     080e1355 <+0xbb>
080e1340 +0x0a6:  mov    -0xc(%ebp),%eax
080e1343 +0x0a9:  lea    0x30(%eax),%edx
080e1346 +0x0ac:  mov    -0x1c(%ebp),%eax
080e1349 +0x0af:  mov    %eax,0x4(%esp)
080e134d +0x0b3:  mov    %edx,(%esp)
080e1350 +0x0b6:  call   080e291e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6c4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6c4
080e1355 +0x0bb:  mov    0x10(%ebp),%edx
080e1358 +0x0be:  mov    -0xc(%ebp),%eax
080e135b +0x0c1:  mov    0x14(%ebp),%ecx
080e135e +0x0c4:  mov    %ecx,0xc(%esp)
080e1362 +0x0c8:  mov    %edx,0x8(%esp)
080e1366 +0x0cc:  mov    -0x10(%ebp),%edx
080e1369 +0x0cf:  mov    %edx,0x4(%esp)
080e136d +0x0d3:  mov    %eax,(%esp)
080e1370 +0x0d6:  call   080e1196 <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj>  ; CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int, unsigned int)
080e1375 +0x0db:  mov    0x18(%ebp),%edx
080e1378 +0x0de:  mov    %eax,(%edx)
080e137a +0x0e0:  jmp    080e1412 <+0x178>
080e137f +0x0e5:  mov    -0xc(%ebp),%eax
080e1382 +0x0e8:  lea    0x48(%eax),%ecx
080e1385 +0x0eb:  lea    -0x20(%ebp),%eax
080e1388 +0x0ee:  lea    0x10(%ebp),%edx
080e138b +0x0f1:  mov    %edx,0x8(%esp)
080e138f +0x0f5:  mov    %ecx,0x4(%esp)
080e1393 +0x0f9:  mov    %eax,(%esp)
080e1396 +0x0fc:  call   080e25f6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x39c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x39c
080e139b +0x101:  sub    $0x4,%esp
080e139e +0x104:  mov    -0xc(%ebp),%eax
080e13a1 +0x107:  lea    0x48(%eax),%edx
080e13a4 +0x10a:  lea    -0x14(%ebp),%eax
080e13a7 +0x10d:  mov    %edx,0x4(%esp)
080e13ab +0x111:  mov    %eax,(%esp)
080e13ae +0x114:  call   080e2622 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x3c8>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x3c8
080e13b3 +0x119:  sub    $0x4,%esp
080e13b6 +0x11c:  lea    -0x14(%ebp),%eax
080e13b9 +0x11f:  mov    %eax,0x4(%esp)
080e13bd +0x123:  lea    -0x20(%ebp),%eax
080e13c0 +0x126:  mov    %eax,(%esp)
080e13c3 +0x129:  call   080e290a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6b0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6b0
080e13c8 +0x12e:  test   %al,%al
080e13ca +0x130:  je     080e13e1 <+0x147>
080e13cc +0x132:  mov    -0xc(%ebp),%eax
080e13cf +0x135:  lea    0x48(%eax),%edx
080e13d2 +0x138:  mov    -0x20(%ebp),%eax
080e13d5 +0x13b:  mov    %eax,0x4(%esp)
080e13d9 +0x13f:  mov    %edx,(%esp)
080e13dc +0x142:  call   080e291e <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x6c4>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x6c4
080e13e1 +0x147:  mov    0x10(%ebp),%eax
080e13e4 +0x14a:  mov    -0xc(%ebp),%edx
080e13e7 +0x14d:  lea    0x18(%edx),%ecx
080e13ea +0x150:  mov    0x14(%ebp),%edx
080e13ed +0x153:  mov    %edx,0xc(%esp)
080e13f1 +0x157:  mov    %eax,0x8(%esp)
080e13f5 +0x15b:  mov    -0x10(%ebp),%eax
080e13f8 +0x15e:  mov    %eax,0x4(%esp)
080e13fc +0x162:  mov    %ecx,(%esp)
080e13ff +0x165:  call   080e1196 <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj>  ; CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int, unsigned int)
080e1404 +0x16a:  mov    0x18(%ebp),%edx
080e1407 +0x16d:  mov    %eax,(%edx)
080e1409 +0x16f:  jmp    080e1412 <+0x178>
080e140b +0x171:  mov    $0x0,%eax
080e1410 +0x176:  jmp    080e1427 <+0x18d>
080e1412 +0x178:  mov    0x18(%ebp),%eax
080e1415 +0x17b:  mov    (%eax),%eax
080e1417 +0x17d:  test   %eax,%eax
080e1419 +0x17f:  jne    080e1422 <+0x188>
080e141b +0x181:  mov    $0x0,%eax
080e1420 +0x186:  jmp    080e1427 <+0x18d>
080e1422 +0x188:  mov    $0x1,%eax
080e1427 +0x18d:  leave
080e1428 +0x18e:  ret
080e1429 +0x18f:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::InputBuyInfo @ 0x80e129a

/* CerashopAddRestrict::Manager::InputBuyInfo(CUser*, unsigned int, unsigned int,
   CerashopAddRestrict::DBInputData&) */

undefined4 __thiscall
CerashopAddRestrict::Manager::InputBuyInfo
          (Manager *this,CUser *param_1,uint param_2,uint param_3,DBInputData *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint local_24;
  uint local_20;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_1c [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_18 [4];
  InfoDaily *local_14;
  CUser *local_10;
  
  local_14 = (InfoDaily *)ScriptLoader::GetRestrictInfo((uint)(this + 4));
  if (local_14 == (InfoDaily *)0x0) {
    uVar2 = 0;
  }
  else {
    *(InfoDaily **)(param_4 + 4) = local_14;
    local_10 = param_1 + 0x8d1e4;
    if (*(int *)local_14 == 0) {
      puVar3 = &param_2;
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::find(&local_20);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_20,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 != '\0') {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)(local_10 + 0x30),local_20,puVar3);
      }
      uVar2 = InputBuyInfoDetail((map *)local_10,local_14,param_2,param_3);
      *(undefined4 *)param_4 = uVar2;
    }
    else {
      if (*(int *)local_14 != 1) {
        return 0;
      }
      puVar3 = &param_2;
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::find(&local_24);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_24,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 != '\0') {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)(local_10 + 0x48),local_24,puVar3);
      }
      uVar2 = InputBuyInfoDetail((map *)(local_10 + 0x18),local_14,param_2,param_3);
      *(undefined4 *)param_4 = uVar2;
    }
    if (*(int *)param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```

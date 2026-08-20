# InputBuyInfoDetail

`_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj`

`CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict` | `0x080e1196` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e1196  _ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj
#           CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int, unsigned int)
# range [0x080e1196, 0x080e1299]
080e1196 +0x000:  push   %ebp
080e1197 +0x001:  mov    %esp,%ebp
080e1199 +0x003:  sub    $0x38,%esp
080e119c +0x006:  movl   $0x0,-0xc(%ebp)
080e11a3 +0x00d:  lea    -0x24(%ebp),%eax
080e11a6 +0x010:  lea    0x10(%ebp),%edx
080e11a9 +0x013:  mov    %edx,0x8(%esp)
080e11ad +0x017:  mov    0x8(%ebp),%edx
080e11b0 +0x01a:  mov    %edx,0x4(%esp)
080e11b4 +0x01e:  mov    %eax,(%esp)
080e11b7 +0x021:  call   080e26c6 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x46c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x46c
080e11bc +0x026:  sub    $0x4,%esp
080e11bf +0x029:  lea    -0x20(%ebp),%eax
080e11c2 +0x02c:  mov    0x8(%ebp),%edx
080e11c5 +0x02f:  mov    %edx,0x4(%esp)
080e11c9 +0x033:  mov    %eax,(%esp)
080e11cc +0x036:  call   080e26f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x498>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x498
080e11d1 +0x03b:  sub    $0x4,%esp
080e11d4 +0x03e:  lea    -0x20(%ebp),%eax
080e11d7 +0x041:  mov    %eax,0x4(%esp)
080e11db +0x045:  lea    -0x24(%ebp),%eax
080e11de +0x048:  mov    %eax,(%esp)
080e11e1 +0x04b:  call   080e2718 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4be>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4be
080e11e6 +0x050:  test   %al,%al
080e11e8 +0x052:  je     080e120e <+0x78>
080e11ea +0x054:  lea    -0x24(%ebp),%eax
080e11ed +0x057:  mov    %eax,(%esp)
080e11f0 +0x05a:  call   080e272c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4d2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4d2
080e11f5 +0x05f:  mov    0x4(%eax),%eax
080e11f8 +0x062:  mov    %eax,-0xc(%ebp)
080e11fb +0x065:  mov    -0xc(%ebp),%eax
080e11fe +0x068:  mov    0x4(%eax),%eax
080e1201 +0x06b:  mov    %eax,%edx
080e1203 +0x06d:  add    0x14(%ebp),%edx
080e1206 +0x070:  mov    -0xc(%ebp),%eax
080e1209 +0x073:  mov    %edx,0x4(%eax)
080e120c +0x076:  jmp    080e1283 <+0xed>
080e120e +0x078:  movl   $0xc,(%esp)
080e1215 +0x07f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e121a +0x084:  mov    %eax,%edx
080e121c +0x086:  mov    %edx,%eax
080e121e +0x088:  movl   $0x0,(%eax)
080e1224 +0x08e:  movl   $0x0,0x4(%eax)
080e122b +0x095:  movl   $0x0,0x8(%eax)
080e1232 +0x09c:  mov    %edx,%eax
080e1234 +0x09e:  mov    %eax,-0x28(%ebp)
080e1237 +0x0a1:  mov    -0x28(%ebp),%eax
080e123a +0x0a4:  mov    0x14(%ebp),%edx
080e123d +0x0a7:  mov    %edx,0x4(%eax)
080e1240 +0x0aa:  mov    -0x28(%ebp),%eax
080e1243 +0x0ad:  mov    0x10(%ebp),%edx
080e1246 +0x0b0:  mov    %edx,(%eax)
080e1248 +0x0b2:  lea    -0x28(%ebp),%eax
080e124b +0x0b5:  mov    %eax,0x8(%esp)
080e124f +0x0b9:  lea    0x10(%ebp),%eax
080e1252 +0x0bc:  mov    %eax,0x4(%esp)
080e1256 +0x0c0:  lea    -0x14(%ebp),%eax
080e1259 +0x0c3:  mov    %eax,(%esp)
080e125c +0x0c6:  call   080e28b0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x656>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x656
080e1261 +0x0cb:  lea    -0x1c(%ebp),%eax
080e1264 +0x0ce:  lea    -0x14(%ebp),%edx
080e1267 +0x0d1:  mov    %edx,0x8(%esp)
080e126b +0x0d5:  mov    0x8(%ebp),%edx
080e126e +0x0d8:  mov    %edx,0x4(%esp)
080e1272 +0x0dc:  mov    %eax,(%esp)
080e1275 +0x0df:  call   080e28de <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x684>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x684
080e127a +0x0e4:  sub    $0x4,%esp
080e127d +0x0e7:  mov    -0x28(%ebp),%eax
080e1280 +0x0ea:  mov    %eax,-0xc(%ebp)
080e1283 +0x0ed:  mov    0xc(%ebp),%eax
080e1286 +0x0f0:  mov    %eax,(%esp)
080e1289 +0x0f3:  call   080e10d7 <_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE>  ; CerashopAddRestrict::GetCalcDay(CerashopAddRestrict::InfoDaily const*)
080e128e +0x0f8:  mov    -0xc(%ebp),%edx
080e1291 +0x0fb:  mov    %eax,0x8(%edx)
080e1294 +0x0fe:  mov    -0xc(%ebp),%eax
080e1297 +0x101:  leave
080e1298 +0x102:  ret
080e1299 +0x103:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::InputBuyInfoDetail @ 0x80e1196

/* CerashopAddRestrict::InputBuyInfoDetail(std::map<unsigned int, CerashopAddRestrict::paramDaily*,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   CerashopAddRestrict::paramDaily*> > >&, CerashopAddRestrict::InfoDaily const*, unsigned int,
   unsigned int) */

paramDaily *
CerashopAddRestrict::InputBuyInfoDetail(map *param_1,InfoDaily *param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  paramDaily *local_2c;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_28 [4];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_24 [4];
  pair local_20 [8];
  pair<unsigned_int_const,CerashopAddRestrict::paramDaily*> local_18 [8];
  paramDaily *local_10;
  
  local_10 = (paramDaily *)0x0;
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::find((uint *)local_28);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_24);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
          operator!=(local_28,(_Rb_tree_iterator *)local_24);
  if (cVar1 == '\0') {
    local_2c = operator_new(0xc);
    *(uint *)local_2c = 0;
    *(uint *)(local_2c + 4) = 0;
    *(uint *)(local_2c + 8) = 0;
    *(uint *)(local_2c + 4) = param_4;
    *(uint *)local_2c = param_3;
    std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::paramDaily*&>(local_18,&param_3,&local_2c);
    std::
    map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
    ::insert(local_20);
    local_10 = local_2c;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator->(local_28);
    local_10 = *(paramDaily **)(iVar2 + 4);
    *(uint *)(local_10 + 4) = *(uint *)(local_10 + 4) + param_4;
  }
  uVar3 = GetCalcDay(param_2);
  *(uint *)(local_10 + 8) = uVar3;
  return local_10;
}
```

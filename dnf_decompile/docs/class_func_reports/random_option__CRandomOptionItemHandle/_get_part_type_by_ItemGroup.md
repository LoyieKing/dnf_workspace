# _get_part_type_by_ItemGroup

`_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE`

`random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup(int, std::vector<int, std::allocator<int> > const&) const`

| 类 | 地址 |
|---|---|
| `random_option::CRandomOptionItemHandle` | `0x085f11a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085f11a4  _ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE
#           random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup(int, std::vector<int, std::allocator<int> > const&) const
# range [0x085f11a4, 0x085f1425]
085f11a4 +0x000:  push   %ebp
085f11a5 +0x001:  mov    %esp,%ebp
085f11a7 +0x003:  push   %esi
085f11a8 +0x004:  push   %ebx
085f11a9 +0x005:  sub    $0x50,%esp
085f11ac +0x008:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f11b1 +0x00d:  lea    0x30(%eax),%ecx
085f11b4 +0x010:  lea    -0x34(%ebp),%eax
085f11b7 +0x013:  lea    0xc(%ebp),%edx
085f11ba +0x016:  mov    %edx,0x8(%esp)
085f11be +0x01a:  mov    %ecx,0x4(%esp)
085f11c2 +0x01e:  mov    %eax,(%esp)
085f11c5 +0x021:  call   085f4374 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x38f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x38f
085f11ca +0x026:  sub    $0x4,%esp
085f11cd +0x029:  call   085f0eb0 <_ZN13random_option15GetRandomOptionEv>  ; random_option::GetRandomOption()
085f11d2 +0x02e:  lea    0x30(%eax),%edx
085f11d5 +0x031:  lea    -0x30(%ebp),%eax
085f11d8 +0x034:  mov    %edx,0x4(%esp)
085f11dc +0x038:  mov    %eax,(%esp)
085f11df +0x03b:  call   085f43a0 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3bb>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3bb
085f11e4 +0x040:  sub    $0x4,%esp
085f11e7 +0x043:  lea    -0x30(%ebp),%eax
085f11ea +0x046:  mov    %eax,0x4(%esp)
085f11ee +0x04a:  lea    -0x34(%ebp),%eax
085f11f1 +0x04d:  mov    %eax,(%esp)
085f11f4 +0x050:  call   085f43c6 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3e1>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3e1
085f11f9 +0x055:  test   %al,%al
085f11fb +0x057:  je     085f1415 <+0x271>
085f1201 +0x05d:  lea    -0x29(%ebp),%eax
085f1204 +0x060:  mov    %eax,(%esp)
085f1207 +0x063:  call   0808e716 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x586>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x586
085f120c +0x068:  movl   $0x0,-0x28(%ebp)
085f1213 +0x06f:  mov    0x10(%ebp),%eax
085f1216 +0x072:  mov    %eax,(%esp)
085f1219 +0x075:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f121e +0x07a:  lea    -0x29(%ebp),%edx
085f1221 +0x07d:  mov    %edx,0xc(%esp)
085f1225 +0x081:  lea    -0x28(%ebp),%edx
085f1228 +0x084:  mov    %edx,0x8(%esp)
085f122c +0x088:  mov    %eax,0x4(%esp)
085f1230 +0x08c:  lea    -0x40(%ebp),%eax
085f1233 +0x08f:  mov    %eax,(%esp)
085f1236 +0x092:  call   085e017c <_GLOBAL__I__Z15IsDeathMatchMapiRb+0xa03>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0xa03
085f123b +0x097:  jmp    085f1258 <+0xb4>
085f123d +0x099:  mov    %edx,%ebx
085f123f +0x09b:  mov    %eax,%esi
085f1241 +0x09d:  lea    -0x29(%ebp),%eax
085f1244 +0x0a0:  mov    %eax,(%esp)
085f1247 +0x0a3:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
085f124c +0x0a8:  mov    %esi,%eax
085f124e +0x0aa:  mov    %ebx,%edx
085f1250 +0x0ac:  mov    %eax,(%esp)
085f1253 +0x0af:  call   08ae3750 <_Unwind_Resume>
085f1258 +0x0b4:  lea    -0x29(%ebp),%eax
085f125b +0x0b7:  mov    %eax,(%esp)
085f125e +0x0ba:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
085f1263 +0x0bf:  movl   $0x0,-0x1c(%ebp)
085f126a +0x0c6:  lea    -0x34(%ebp),%eax
085f126d +0x0c9:  mov    %eax,(%esp)
085f1270 +0x0cc:  call   085f43da <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3f5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3f5
085f1275 +0x0d1:  lea    0x14(%eax),%edx
085f1278 +0x0d4:  lea    -0x44(%ebp),%eax
085f127b +0x0d7:  mov    %edx,0x4(%esp)
085f127f +0x0db:  mov    %eax,(%esp)
085f1282 +0x0de:  call   085f43e8 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x403>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x403
085f1287 +0x0e3:  sub    $0x4,%esp
085f128a +0x0e6:  jmp    085f1323 <+0x17f>
085f128f +0x0eb:  movl   $0x0,-0x10(%ebp)
085f1296 +0x0f2:  jmp    085f1303 <+0x15f>
085f1298 +0x0f4:  lea    -0x44(%ebp),%eax
085f129b +0x0f7:  mov    %eax,(%esp)
085f129e +0x0fa:  call   085f448c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x4a7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x4a7
085f12a3 +0x0ff:  mov    (%eax),%ebx
085f12a5 +0x101:  mov    -0x10(%ebp),%eax
085f12a8 +0x104:  mov    %eax,0x4(%esp)
085f12ac +0x108:  mov    0x10(%ebp),%eax
085f12af +0x10b:  mov    %eax,(%esp)
085f12b2 +0x10e:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
085f12b7 +0x113:  mov    (%eax),%eax
085f12b9 +0x115:  cmp    %eax,%ebx
085f12bb +0x117:  sete   %al
085f12be +0x11a:  test   %al,%al
085f12c0 +0x11c:  je     085f12ff <+0x15b>
085f12c2 +0x11e:  mov    -0x10(%ebp),%eax
085f12c5 +0x121:  mov    %eax,0x4(%esp)
085f12c9 +0x125:  lea    -0x40(%ebp),%eax
085f12cc +0x128:  mov    %eax,(%esp)
085f12cf +0x12b:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f12d4 +0x130:  mov    %eax,%ebx
085f12d6 +0x132:  lea    -0x44(%ebp),%eax
085f12d9 +0x135:  mov    %eax,(%esp)
085f12dc +0x138:  call   085f448c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x4a7>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x4a7
085f12e1 +0x13d:  mov    0x4(%eax),%eax
085f12e4 +0x140:  mov    %eax,(%ebx)
085f12e6 +0x142:  mov    -0x10(%ebp),%eax
085f12e9 +0x145:  mov    %eax,0x4(%esp)
085f12ed +0x149:  lea    -0x40(%ebp),%eax
085f12f0 +0x14c:  mov    %eax,(%esp)
085f12f3 +0x14f:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f12f8 +0x154:  mov    (%eax),%eax
085f12fa +0x156:  add    %eax,-0x1c(%ebp)
085f12fd +0x159:  jmp    085f1318 <+0x174>
085f12ff +0x15b:  addl   $0x1,-0x10(%ebp)
085f1303 +0x15f:  mov    0x10(%ebp),%eax
085f1306 +0x162:  mov    %eax,(%esp)
085f1309 +0x165:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f130e +0x16a:  cmp    -0x10(%ebp),%eax
085f1311 +0x16d:  seta   %al
085f1314 +0x170:  test   %al,%al
085f1316 +0x172:  jne    085f1298 <+0xf4>
085f1318 +0x174:  lea    -0x44(%ebp),%eax
085f131b +0x177:  mov    %eax,(%esp)
085f131e +0x17a:  call   085f446c <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x487>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x487
085f1323 +0x17f:  lea    -0x34(%ebp),%eax
085f1326 +0x182:  mov    %eax,(%esp)
085f1329 +0x185:  call   085f43da <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x3f5>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x3f5
085f132e +0x18a:  lea    0x14(%eax),%edx
085f1331 +0x18d:  lea    -0x24(%ebp),%eax
085f1334 +0x190:  mov    %edx,0x4(%esp)
085f1338 +0x194:  mov    %eax,(%esp)
085f133b +0x197:  call   085f4414 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x42f>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x42f
085f1340 +0x19c:  sub    $0x4,%esp
085f1343 +0x19f:  lea    -0x24(%ebp),%eax
085f1346 +0x1a2:  mov    %eax,0x4(%esp)
085f134a +0x1a6:  lea    -0x44(%ebp),%eax
085f134d +0x1a9:  mov    %eax,(%esp)
085f1350 +0x1ac:  call   085f4440 <_GLOBAL__I__ZN13random_option23CRandomOptionItemHandleC2Ev+0x45b>  ; global constructors keyed to random_option::CRandomOptionItemHandle::CRandomOptionItemHandle()+0x45b
085f1355 +0x1b1:  test   %al,%al
085f1357 +0x1b3:  jne    085f128f <+0xeb>
085f135d +0x1b9:  mov    -0x1c(%ebp),%eax
085f1360 +0x1bc:  mov    %eax,-0x20(%ebp)
085f1363 +0x1bf:  mov    0x8(%ebp),%eax
085f1366 +0x1c2:  mov    0x4(%eax),%eax
085f1369 +0x1c5:  lea    0x1390(%eax),%edx
085f136f +0x1cb:  lea    -0x20(%ebp),%eax
085f1372 +0x1ce:  mov    %eax,0x4(%esp)
085f1376 +0x1d2:  mov    %edx,(%esp)
085f1379 +0x1d5:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
085f137e +0x1da:  mov    %eax,-0x18(%ebp)
085f1381 +0x1dd:  movl   $0x0,-0x14(%ebp)
085f1388 +0x1e4:  movl   $0x0,-0xc(%ebp)
085f138f +0x1eb:  jmp    085f13cf <+0x22b>
085f1391 +0x1ed:  mov    -0xc(%ebp),%eax
085f1394 +0x1f0:  mov    %eax,0x4(%esp)
085f1398 +0x1f4:  lea    -0x40(%ebp),%eax
085f139b +0x1f7:  mov    %eax,(%esp)
085f139e +0x1fa:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
085f13a3 +0x1ff:  mov    (%eax),%eax
085f13a5 +0x201:  add    %eax,-0x14(%ebp)
085f13a8 +0x204:  mov    -0x18(%ebp),%eax
085f13ab +0x207:  cmp    -0x14(%ebp),%eax
085f13ae +0x20a:  jae    085f13cb <+0x227>
085f13b0 +0x20c:  mov    -0xc(%ebp),%eax
085f13b3 +0x20f:  mov    %eax,0x4(%esp)
085f13b7 +0x213:  mov    0x10(%ebp),%eax
085f13ba +0x216:  mov    %eax,(%esp)
085f13bd +0x219:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
085f13c2 +0x21e:  mov    (%eax),%esi
085f13c4 +0x220:  mov    $0x0,%ebx
085f13c9 +0x225:  jmp    085f1406 <+0x262>
085f13cb +0x227:  addl   $0x1,-0xc(%ebp)
085f13cf +0x22b:  lea    -0x40(%ebp),%eax
085f13d2 +0x22e:  mov    %eax,(%esp)
085f13d5 +0x231:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
085f13da +0x236:  cmp    -0xc(%ebp),%eax
085f13dd +0x239:  seta   %al
085f13e0 +0x23c:  test   %al,%al
085f13e2 +0x23e:  jne    085f1391 <+0x1ed>
085f13e4 +0x240:  mov    $0x1,%ebx
085f13e9 +0x245:  jmp    085f1406 <+0x262>
085f13eb +0x247:  mov    %edx,%ebx
085f13ed +0x249:  mov    %eax,%esi
085f13ef +0x24b:  lea    -0x40(%ebp),%eax
085f13f2 +0x24e:  mov    %eax,(%esp)
085f13f5 +0x251:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f13fa +0x256:  mov    %esi,%eax
085f13fc +0x258:  mov    %ebx,%edx
085f13fe +0x25a:  mov    %eax,(%esp)
085f1401 +0x25d:  call   08ae3750 <_Unwind_Resume>
085f1406 +0x262:  lea    -0x40(%ebp),%eax
085f1409 +0x265:  mov    %eax,(%esp)
085f140c +0x268:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085f1411 +0x26d:  test   %ebx,%ebx
085f1413 +0x26f:  je     085f141a <+0x276>
085f1415 +0x271:  mov    $0x0,%esi
085f141a +0x276:  mov    %esi,%eax
085f141c +0x278:  lea    -0x8(%ebp),%esp
085f141f +0x27b:  add    $0x0,%esp
085f1422 +0x27e:  pop    %ebx
085f1423 +0x27f:  pop    %esi
085f1424 +0x280:  pop    %ebp
085f1425 +0x281:  ret
```

## 反编译 C

```c
// random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup @ 0x85f11a4

/* random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup(int, std::vector<int,
   std::allocator<int> > const&) const */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup
          (CRandomOptionItemHandle *this,int param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
  local_48 [4];
  vector<int,std::allocator<int>> local_44 [12];
  _Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>> local_38 [4];
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>
  local_34 [7];
  allocator<int> local_2d;
  int local_2c;
  __normal_iterator local_28 [4];
  ulong local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  find((int *)local_38);
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  end(local_34);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator!=
                    (local_38,(_Rb_tree_const_iterator *)local_34);
  if (cVar1 != '\0') {
    std::allocator<int>::allocator();
    local_2c = 0;
    uVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
                    /* try { // try from 085f1236 to 085f123a has its CatchHandler @ 085f123d */
    std::vector<int,std::allocator<int>>::vector(local_44,uVar3,&local_2c,(allocator *)&local_2d);
    std::allocator<int>::~allocator(&local_2d);
    local_20 = 0;
    std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_38);
                    /* try { // try from 085f1282 to 085f1354 has its CatchHandler @ 085f13eb */
    std::vector<PartSelectonField,std::allocator<PartSelectonField>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_38);
      std::vector<PartSelectonField,std::allocator<PartSelectonField>>::end();
      bVar2 = __gnu_cxx::operator!=(local_48,local_28);
      if (!bVar2) break;
      local_14 = 0;
      while (uVar3 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_14 < uVar3) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                        ::operator->(local_48);
        iVar4 = *piVar5;
        piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)param_2,local_14);
        if (iVar4 == *piVar5) {
          puVar6 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_44,local_14)
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                  ::operator->(local_48);
          *puVar6 = *(undefined4 *)(iVar4 + 4);
          piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_44,local_14);
          local_20 = local_20 + *piVar5;
          break;
        }
        local_14 = local_14 + 1;
      }
      __gnu_cxx::
      __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
      ::operator++(local_48);
    }
    local_24 = local_20;
    local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x1390),&local_24);
    local_18 = 0;
    local_10 = 0;
    while (uVar3 = std::vector<int,std::allocator<int>>::size(local_44), local_10 < uVar3) {
      piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_44,local_10);
      local_18 = local_18 + *piVar5;
      if (local_1c < local_18) {
        puVar6 = (undefined4 *)
                 std::vector<int,std::allocator<int>>::operator[]
                           ((vector<int,std::allocator<int>> *)param_2,local_10);
        unaff_ESI = *puVar6;
        bVar2 = false;
        goto LAB_085f1406;
      }
      local_10 = local_10 + 1;
    }
    bVar2 = true;
LAB_085f1406:
    std::vector<int,std::allocator<int>>::~vector(local_44);
    if (!bVar2) {
      return unaff_ESI;
    }
  }
  return 0;
}
```

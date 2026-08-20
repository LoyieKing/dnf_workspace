# count_specific_items

`_ZN5CUser20count_specific_itemsERSt6vectorIiSaIiEERS0_ISt4pairIiiESaIS5_EE`

`CUser::count_specific_items(std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866514a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866514a  _ZN5CUser20count_specific_itemsERSt6vectorIiSaIiEERS0_ISt4pairIiiESaIS5_EE
#           CUser::count_specific_items(std::vector<int, std::allocator<int> >&, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0866514a, 0x08665273]
0866514a +0x000:  push   %ebp
0866514b +0x001:  mov    %esp,%ebp
0866514d +0x003:  sub    $0x78,%esp
08665150 +0x006:  mov    0x8(%ebp),%eax
08665153 +0x009:  mov    %eax,(%esp)
08665156 +0x00c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0866515b +0x011:  mov    %eax,-0x14(%ebp)
0866515e +0x014:  mov    0x8(%ebp),%eax
08665161 +0x017:  mov    %eax,(%esp)
08665164 +0x01a:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08665169 +0x01f:  mov    %eax,-0x10(%ebp)
0866516c +0x022:  movl   $0x0,-0x20(%ebp)
08665173 +0x029:  lea    -0x5d(%ebp),%eax
08665176 +0x02c:  mov    %eax,(%esp)
08665179 +0x02f:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0866517e +0x034:  movl   $0x0,-0xc(%ebp)
08665185 +0x03b:  jmp    08665259 <+0x10f>
0866518a +0x040:  movl   $0x0,-0x20(%ebp)
08665191 +0x047:  mov    -0xc(%ebp),%eax
08665194 +0x04a:  mov    %eax,0x4(%esp)
08665198 +0x04e:  mov    0xc(%ebp),%eax
0866519b +0x051:  mov    %eax,(%esp)
0866519e +0x054:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
086651a3 +0x059:  mov    (%eax),%eax
086651a5 +0x05b:  lea    -0x5d(%ebp),%edx
086651a8 +0x05e:  mov    %edx,0x8(%esp)
086651ac +0x062:  mov    %eax,0x4(%esp)
086651b0 +0x066:  mov    -0x14(%ebp),%eax
086651b3 +0x069:  mov    %eax,(%esp)
086651b6 +0x06c:  call   084fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>  ; CInventory::GetInvenData(int, Inven_Item&) const
086651bb +0x071:  cmp    $0xffffffff,%eax
086651be +0x074:  setne  %al
086651c1 +0x077:  test   %al,%al
086651c3 +0x079:  je     086651d1 <+0x87>
086651c5 +0x07b:  mov    -0x56(%ebp),%edx
086651c8 +0x07e:  mov    -0x20(%ebp),%eax
086651cb +0x081:  lea    (%edx,%eax,1),%eax
086651ce +0x084:  mov    %eax,-0x20(%ebp)
086651d1 +0x087:  mov    -0xc(%ebp),%eax
086651d4 +0x08a:  mov    %eax,0x4(%esp)
086651d8 +0x08e:  mov    0xc(%ebp),%eax
086651db +0x091:  mov    %eax,(%esp)
086651de +0x094:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
086651e3 +0x099:  mov    (%eax),%eax
086651e5 +0x09b:  lea    -0x5d(%ebp),%edx
086651e8 +0x09e:  mov    %edx,0x8(%esp)
086651ec +0x0a2:  mov    %eax,0x4(%esp)
086651f0 +0x0a6:  mov    -0x10(%ebp),%eax
086651f3 +0x0a9:  mov    %eax,(%esp)
086651f6 +0x0ac:  call   0850c6e0 <_ZNK6CCargo12GetCargoDataEiR10Inven_Item>  ; CCargo::GetCargoData(int, Inven_Item&) const
086651fb +0x0b1:  cmp    $0xffffffff,%eax
086651fe +0x0b4:  setne  %al
08665201 +0x0b7:  test   %al,%al
08665203 +0x0b9:  je     08665211 <+0xc7>
08665205 +0x0bb:  mov    -0x56(%ebp),%edx
08665208 +0x0be:  mov    -0x20(%ebp),%eax
0866520b +0x0c1:  lea    (%edx,%eax,1),%eax
0866520e +0x0c4:  mov    %eax,-0x20(%ebp)
08665211 +0x0c7:  mov    -0x20(%ebp),%eax
08665214 +0x0ca:  test   %eax,%eax
08665216 +0x0cc:  jle    08665255 <+0x10b>
08665218 +0x0ce:  mov    -0xc(%ebp),%eax
0866521b +0x0d1:  mov    %eax,0x4(%esp)
0866521f +0x0d5:  mov    0xc(%ebp),%eax
08665222 +0x0d8:  mov    %eax,(%esp)
08665225 +0x0db:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0866522a +0x0e0:  lea    -0x1c(%ebp),%edx
0866522d +0x0e3:  lea    -0x20(%ebp),%ecx
08665230 +0x0e6:  mov    %ecx,0x8(%esp)
08665234 +0x0ea:  mov    %eax,0x4(%esp)
08665238 +0x0ee:  mov    %edx,(%esp)
0866523b +0x0f1:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
08665240 +0x0f6:  sub    $0x4,%esp
08665243 +0x0f9:  lea    -0x1c(%ebp),%eax
08665246 +0x0fc:  mov    %eax,0x4(%esp)
0866524a +0x100:  mov    0x10(%ebp),%eax
0866524d +0x103:  mov    %eax,(%esp)
08665250 +0x106:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08665255 +0x10b:  addl   $0x1,-0xc(%ebp)
08665259 +0x10f:  mov    0xc(%ebp),%eax
0866525c +0x112:  mov    %eax,(%esp)
0866525f +0x115:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08665264 +0x11a:  cmp    -0xc(%ebp),%eax
08665267 +0x11d:  seta   %al
0866526a +0x120:  test   %al,%al
0866526c +0x122:  jne    0866518a <+0x40>
08665272 +0x128:  leave
08665273 +0x129:  ret
```

## 反编译 C

```c
// CUser::count_specific_items @ 0x866514a

/* CUser::count_specific_items(std::vector<int, std::allocator<int> >&, std::vector<std::pair<int,
   int>, std::allocator<std::pair<int, int> > >&) */

void __thiscall CUser::count_specific_items(CUser *this,vector *param_1,vector *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  Inven_Item local_61 [7];
  int local_5a;
  int local_24;
  int local_20 [2];
  CInventory *local_18;
  CCargo *local_14;
  uint local_10;
  
  local_18 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
  local_14 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)this);
  local_24 = 0;
  Inven_Item::Inven_Item(local_61);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_1);
    if (uVar3 <= local_10) break;
    local_24 = 0;
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_10);
    iVar2 = CInventory::GetInvenData(local_18,*piVar1,local_61);
    if (iVar2 != -1) {
      local_24 = local_5a + local_24;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)param_1,local_10);
    iVar2 = CCargo::GetCargoData(local_14,*piVar1,local_61);
    if (iVar2 != -1) {
      local_24 = local_5a + local_24;
    }
    if (0 < local_24) {
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)param_1,local_10);
      std::make_pair<int&,int&>(local_20,piVar1);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,
                 (pair *)local_20);
    }
    local_10 = local_10 + 1;
  }
  return;
}
```

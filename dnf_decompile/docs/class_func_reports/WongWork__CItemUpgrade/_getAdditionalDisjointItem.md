# _getAdditionalDisjointItem

`_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t`

`WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08546938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08546938  _ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t
#           WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
# range [0x08546938, 0x08546a95]
08546938 +0x000:  push   %ebp
08546939 +0x001:  mov    %esp,%ebp
0854693b +0x003:  push   %ebx
0854693c +0x004:  sub    $0x64,%esp
0854693f +0x007:  mov    0x10(%ebp),%eax
08546942 +0x00a:  mov    %eax,(%esp)
08546945 +0x00d:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0854694a +0x012:  mov    %eax,%ebx
0854694c +0x014:  mov    0x10(%ebp),%eax
0854694f +0x017:  mov    %eax,(%esp)
08546952 +0x01a:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08546957 +0x01f:  mov    %eax,%edx
08546959 +0x021:  mov    0x18(%ebp),%eax
0854695c +0x024:  add    $0x94,%edx
08546962 +0x02a:  mov    0xc(%eax,%edx,4),%eax
08546966 +0x02e:  mov    %ebx,%edx
08546968 +0x030:  sub    %eax,%edx
0854696a +0x032:  mov    %edx,%eax
0854696c +0x034:  mov    %eax,-0x24(%ebp)
0854696f +0x037:  movl   $0x0,-0x20(%ebp)
08546976 +0x03e:  lea    -0x24(%ebp),%eax
08546979 +0x041:  mov    %eax,0x4(%esp)
0854697d +0x045:  lea    -0x20(%ebp),%eax
08546980 +0x048:  mov    %eax,(%esp)
08546983 +0x04b:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08546988 +0x050:  mov    (%eax),%eax
0854698a +0x052:  mov    %eax,-0xc(%ebp)
0854698d +0x055:  mov    -0xc(%ebp),%edx
08546990 +0x058:  mov    0x18(%ebp),%eax
08546993 +0x05b:  mov    0x23c(%eax),%eax
08546999 +0x061:  cmp    %eax,%edx
0854699b +0x063:  jb     08546a8a <+0x152>
085469a1 +0x069:  mov    0x18(%ebp),%eax
085469a4 +0x06c:  mov    0x258(%eax),%eax
085469aa +0x072:  cmp    0xc(%ebp),%eax
085469ad +0x075:  jae    08546a8d <+0x155>
085469b3 +0x07b:  mov    0x18(%ebp),%eax
085469b6 +0x07e:  mov    0x238(%eax),%eax
085469bc +0x084:  mov    %eax,-0x28(%ebp)
085469bf +0x087:  mov    0x10(%ebp),%eax
085469c2 +0x08a:  mov    %eax,(%esp)
085469c5 +0x08d:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085469ca +0x092:  mov    %eax,%edx
085469cc +0x094:  mov    0x18(%ebp),%eax
085469cf +0x097:  add    $0x90,%edx
085469d5 +0x09d:  flds   (%eax,%edx,4)
085469d8 +0x0a0:  fstps  -0x4c(%ebp)
085469db +0x0a3:  mov    0x18(%ebp),%eax
085469de +0x0a6:  mov    0x258(%eax),%eax
085469e4 +0x0ac:  mov    0xc(%ebp),%edx
085469e7 +0x0af:  mov    %edx,%ecx
085469e9 +0x0b1:  sub    %eax,%ecx
085469eb +0x0b3:  mov    %ecx,%eax
085469ed +0x0b5:  mov    $0x0,%edx
085469f2 +0x0ba:  mov    %eax,-0x40(%ebp)
085469f5 +0x0bd:  mov    %edx,-0x3c(%ebp)
085469f8 +0x0c0:  fildll -0x40(%ebp)
085469fb +0x0c3:  fldl   &data#8f688ce4(.rodata)
08546a01 +0x0c9:  fstpl  0x8(%esp)
08546a05 +0x0cd:  fstpl  (%esp)
08546a08 +0x0d0:  call   0807d9b0 <_init+0x2a8>
08546a0d +0x0d5:  fnstcw -0x42(%ebp)
08546a10 +0x0d8:  movzwl -0x42(%ebp),%eax
08546a14 +0x0dc:  mov    $0xc,%ah
08546a16 +0x0de:  mov    %ax,-0x44(%ebp)
08546a1a +0x0e2:  fldcw  -0x44(%ebp)
08546a1d +0x0e5:  fistpl -0x48(%ebp)
08546a20 +0x0e8:  fldcw  -0x42(%ebp)
08546a23 +0x0eb:  mov    -0x48(%ebp),%eax
08546a26 +0x0ee:  mov    %eax,-0x48(%ebp)
08546a29 +0x0f1:  fildl  -0x48(%ebp)
08546a2c +0x0f4:  fmuls  -0x4c(%ebp)
08546a2f +0x0f7:  fldcw  -0x44(%ebp)
08546a32 +0x0fa:  fistpll -0x40(%ebp)
08546a35 +0x0fd:  fldcw  -0x42(%ebp)
08546a38 +0x100:  mov    -0x40(%ebp),%eax
08546a3b +0x103:  mov    -0x3c(%ebp),%edx
08546a3e +0x106:  mov    %eax,-0x2c(%ebp)
08546a41 +0x109:  mov    -0x2c(%ebp),%eax
08546a44 +0x10c:  test   %eax,%eax
08546a46 +0x10e:  je     08546a90 <+0x158>
08546a48 +0x110:  lea    -0x14(%ebp),%eax
08546a4b +0x113:  lea    -0x2c(%ebp),%edx
08546a4e +0x116:  mov    %edx,0x8(%esp)
08546a52 +0x11a:  lea    -0x28(%ebp),%edx
08546a55 +0x11d:  mov    %edx,0x4(%esp)
08546a59 +0x121:  mov    %eax,(%esp)
08546a5c +0x124:  call   0854b74f <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x5d7>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x5d7
08546a61 +0x129:  sub    $0x4,%esp
08546a64 +0x12c:  lea    -0x14(%ebp),%eax
08546a67 +0x12f:  mov    %eax,0x4(%esp)
08546a6b +0x133:  lea    -0x1c(%ebp),%eax
08546a6e +0x136:  mov    %eax,(%esp)
08546a71 +0x139:  call   0854b78e <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x616>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x616
08546a76 +0x13e:  lea    -0x1c(%ebp),%eax
08546a79 +0x141:  mov    %eax,0x4(%esp)
08546a7d +0x145:  mov    0x14(%ebp),%eax
08546a80 +0x148:  mov    %eax,(%esp)
08546a83 +0x14b:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08546a88 +0x150:  jmp    08546a91 <+0x159>
08546a8a +0x152:  nop
08546a8b +0x153:  jmp    08546a91 <+0x159>
08546a8d +0x155:  nop
08546a8e +0x156:  jmp    08546a91 <+0x159>
08546a90 +0x158:  nop
08546a91 +0x159:  mov    -0x4(%ebp),%ebx
08546a94 +0x15c:  leave
08546a95 +0x15d:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_getAdditionalDisjointItem @ 0x8546938

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
    */

void __thiscall
WongWork::CItemUpgrade::_getAdditionalDisjointItem
          (CItemUpgrade *this,uint param_1,CItem *param_2,vector *param_3,upgrade_table_t *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  double dVar5;
  ulonglong local_44;
  uint local_2c;
  int local_28 [2];
  pair<int,int> local_20 [8];
  ulong local_18 [2];
  uint local_10;
  
  iVar2 = CItem::get_grade(param_2);
  iVar3 = CItem::get_rarity(param_2);
  local_28[0] = iVar2 - *(int *)(param_4 + (iVar3 + 0x94) * 4 + 0xc);
  local_28[1] = 0;
  puVar4 = (uint *)std::max<int>(local_28 + 1,local_28);
  local_10 = *puVar4;
  if ((*(uint *)(param_4 + 0x23c) <= local_10) && (*(uint *)(param_4 + 600) < param_1)) {
    local_2c = *(uint *)(param_4 + 0x238);
    iVar2 = CItem::get_rarity(param_2);
    fVar1 = *(float *)(param_4 + (iVar2 + 0x90) * 4);
    local_44 = (ulonglong)(param_1 - *(int *)(param_4 + 600));
    dVar5 = pow((double)local_44,_DAT_08c9d308);
    local_44._0_4_ = (int)(longlong)ROUND((float)(int)ROUND(dVar5) * fVar1);
    if ((int)local_44 != 0) {
      std::make_pair<unsigned_long&,unsigned_int&>(local_18,&local_2c);
      std::pair<int,int>::pair<unsigned_long,unsigned_int>(local_20,(pair *)local_18);
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,local_20);
    }
  }
  return;
}
```

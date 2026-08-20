# GetFieldMob

`_ZN13CBattle_Field11GetFieldMobEiR11map_monster`

`CBattle_Field::GetFieldMob(int, map_monster&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a708  _ZN13CBattle_Field11GetFieldMobEiR11map_monster
#           CBattle_Field::GetFieldMob(int, map_monster&)
# range [0x0830a708, 0x0830a811]
0830a708 +0x000:  push   %ebp
0830a709 +0x001:  mov    %esp,%ebp
0830a70b +0x003:  push   %esi
0830a70c +0x004:  push   %ebx
0830a70d +0x005:  sub    $0x380,%esp
0830a713 +0x00b:  lea    -0x35c(%ebp),%eax
0830a719 +0x011:  mov    %eax,(%esp)
0830a71c +0x014:  call   0815244c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d81
0830a721 +0x019:  mov    0x8(%ebp),%eax
0830a724 +0x01c:  mov    %eax,(%esp)
0830a727 +0x01f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a72c +0x024:  lea    0xc(%eax),%ecx
0830a72f +0x027:  lea    -0x36c(%ebp),%eax
0830a735 +0x02d:  lea    0xc(%ebp),%edx
0830a738 +0x030:  mov    %edx,0x8(%esp)
0830a73c +0x034:  mov    %ecx,0x4(%esp)
0830a740 +0x038:  mov    %eax,(%esp)
0830a743 +0x03b:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
0830a748 +0x040:  sub    $0x4,%esp
0830a74b +0x043:  mov    -0x36c(%ebp),%eax
0830a751 +0x049:  mov    %eax,-0x35c(%ebp)
0830a757 +0x04f:  mov    0x8(%ebp),%eax
0830a75a +0x052:  mov    %eax,(%esp)
0830a75d +0x055:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a762 +0x05a:  lea    0xc(%eax),%edx
0830a765 +0x05d:  lea    -0x358(%ebp),%eax
0830a76b +0x063:  mov    %edx,0x4(%esp)
0830a76f +0x067:  mov    %eax,(%esp)
0830a772 +0x06a:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0830a777 +0x06f:  sub    $0x4,%esp
0830a77a +0x072:  lea    -0x358(%ebp),%eax
0830a780 +0x078:  mov    %eax,0x4(%esp)
0830a784 +0x07c:  lea    -0x35c(%ebp),%eax
0830a78a +0x082:  mov    %eax,(%esp)
0830a78d +0x085:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
0830a792 +0x08a:  test   %al,%al
0830a794 +0x08c:  je     0830a79d <+0x95>
0830a796 +0x08e:  mov    $0x0,%eax
0830a79b +0x093:  jmp    0830a808 <+0x100>
0830a79d +0x095:  lea    -0x35c(%ebp),%eax
0830a7a3 +0x09b:  mov    %eax,(%esp)
0830a7a6 +0x09e:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830a7ab +0x0a3:  add    $0x4,%eax
0830a7ae +0x0a6:  mov    %eax,0x4(%esp)
0830a7b2 +0x0aa:  lea    -0x354(%ebp),%eax
0830a7b8 +0x0b0:  mov    %eax,(%esp)
0830a7bb +0x0b3:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
0830a7c0 +0x0b8:  lea    -0x354(%ebp),%eax
0830a7c6 +0x0be:  mov    %eax,0x4(%esp)
0830a7ca +0x0c2:  mov    0x10(%ebp),%eax
0830a7cd +0x0c5:  mov    %eax,(%esp)
0830a7d0 +0x0c8:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
0830a7d5 +0x0cd:  jmp    0830a7f5 <+0xed>
0830a7d7 +0x0cf:  mov    %edx,%ebx
0830a7d9 +0x0d1:  mov    %eax,%esi
0830a7db +0x0d3:  lea    -0x354(%ebp),%eax
0830a7e1 +0x0d9:  mov    %eax,(%esp)
0830a7e4 +0x0dc:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830a7e9 +0x0e1:  mov    %esi,%eax
0830a7eb +0x0e3:  mov    %ebx,%edx
0830a7ed +0x0e5:  mov    %eax,(%esp)
0830a7f0 +0x0e8:  call   08ae3750 <_Unwind_Resume>
0830a7f5 +0x0ed:  lea    -0x354(%ebp),%eax
0830a7fb +0x0f3:  mov    %eax,(%esp)
0830a7fe +0x0f6:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830a803 +0x0fb:  mov    $0x1,%eax
0830a808 +0x100:  lea    -0x8(%ebp),%esp
0830a80b +0x103:  add    $0x0,%esp
0830a80e +0x106:  pop    %ebx
0830a80f +0x107:  pop    %esi
0830a810 +0x108:  pop    %ebp
0830a811 +0x109:  ret
```

## 反编译 C

```c
// CBattle_Field::GetFieldMob @ 0x830a708

/* CBattle_Field::GetFieldMob(int, map_monster&) */

bool __thiscall CBattle_Field::GetFieldMob(CBattle_Field *this,int param_1,map_monster *param_2)

{
  char cVar1;
  int iVar2;
  int local_370 [4];
  int local_360;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_35c [4]
  ;
  map_monster local_358 [844];
  
  std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (local_370);
  local_360 = local_370[0];
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_35c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360,
                     (_Rb_tree_iterator *)local_35c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
    map_monster::map_monster(local_358,(map_monster *)(iVar2 + 4));
                    /* try { // try from 0830a7d0 to 0830a7d4 has its CatchHandler @ 0830a7d7 */
    map_monster::operator=(param_2,local_358);
    map_monster::~map_monster(local_358);
  }
  return cVar1 == '\0';
}
```

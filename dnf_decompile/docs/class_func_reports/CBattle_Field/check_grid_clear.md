# check_grid_clear

`_ZN13CBattle_Field16check_grid_clearEv`

`CBattle_Field::check_grid_clear()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830a0e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830a0e8  _ZN13CBattle_Field16check_grid_clearEv
#           CBattle_Field::check_grid_clear()
# range [0x0830a0e8, 0x0830a1f5]
0830a0e8 +0x000:  push   %ebp
0830a0e9 +0x001:  mov    %esp,%ebp
0830a0eb +0x003:  push   %esi
0830a0ec +0x004:  push   %ebx
0830a0ed +0x005:  sub    $0x370,%esp
0830a0f3 +0x00b:  lea    -0x360(%ebp),%eax
0830a0f9 +0x011:  mov    %eax,(%esp)
0830a0fc +0x014:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
0830a101 +0x019:  mov    0x8(%ebp),%eax
0830a104 +0x01c:  mov    %eax,(%esp)
0830a107 +0x01f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a10c +0x024:  lea    0xc(%eax),%edx
0830a10f +0x027:  lea    -0x14(%ebp),%eax
0830a112 +0x02a:  mov    %edx,0x4(%esp)
0830a116 +0x02e:  mov    %eax,(%esp)
0830a119 +0x031:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
0830a11e +0x036:  sub    $0x4,%esp
0830a121 +0x039:  jmp    0830a17d <+0x95>
0830a123 +0x03b:  lea    -0x14(%ebp),%eax
0830a126 +0x03e:  mov    %eax,(%esp)
0830a129 +0x041:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830a12e +0x046:  add    $0x4,%eax
0830a131 +0x049:  mov    %eax,0x4(%esp)
0830a135 +0x04d:  lea    -0x360(%ebp),%eax
0830a13b +0x053:  mov    %eax,(%esp)
0830a13e +0x056:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
0830a143 +0x05b:  mov    -0x334(%ebp),%eax
0830a149 +0x061:  cmp    $0x64,%eax
0830a14c +0x064:  jne    0830a160 <+0x78>
0830a14e +0x066:  movzbl -0x34d(%ebp),%eax
0830a155 +0x06d:  test   %al,%al
0830a157 +0x06f:  jne    0830a160 <+0x78>
0830a159 +0x071:  mov    $0x0,%ebx
0830a15e +0x076:  jmp    0830a1dc <+0xf4>
0830a160 +0x078:  lea    -0xc(%ebp),%eax
0830a163 +0x07b:  movl   $0x0,0x8(%esp)
0830a16b +0x083:  lea    -0x14(%ebp),%edx
0830a16e +0x086:  mov    %edx,0x4(%esp)
0830a172 +0x08a:  mov    %eax,(%esp)
0830a175 +0x08d:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
0830a17a +0x092:  sub    $0x4,%esp
0830a17d +0x095:  mov    0x8(%ebp),%eax
0830a180 +0x098:  mov    %eax,(%esp)
0830a183 +0x09b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830a188 +0x0a0:  lea    0xc(%eax),%edx
0830a18b +0x0a3:  lea    -0x10(%ebp),%eax
0830a18e +0x0a6:  mov    %edx,0x4(%esp)
0830a192 +0x0aa:  mov    %eax,(%esp)
0830a195 +0x0ad:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0830a19a +0x0b2:  sub    $0x4,%esp
0830a19d +0x0b5:  lea    -0x10(%ebp),%eax
0830a1a0 +0x0b8:  mov    %eax,0x4(%esp)
0830a1a4 +0x0bc:  lea    -0x14(%ebp),%eax
0830a1a7 +0x0bf:  mov    %eax,(%esp)
0830a1aa +0x0c2:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
0830a1af +0x0c7:  test   %al,%al
0830a1b1 +0x0c9:  jne    0830a123 <+0x3b>
0830a1b7 +0x0cf:  mov    $0x1,%ebx
0830a1bc +0x0d4:  jmp    0830a1dc <+0xf4>
0830a1be +0x0d6:  mov    %edx,%ebx
0830a1c0 +0x0d8:  mov    %eax,%esi
0830a1c2 +0x0da:  lea    -0x360(%ebp),%eax
0830a1c8 +0x0e0:  mov    %eax,(%esp)
0830a1cb +0x0e3:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830a1d0 +0x0e8:  mov    %esi,%eax
0830a1d2 +0x0ea:  mov    %ebx,%edx
0830a1d4 +0x0ec:  mov    %eax,(%esp)
0830a1d7 +0x0ef:  call   08ae3750 <_Unwind_Resume>
0830a1dc +0x0f4:  lea    -0x360(%ebp),%eax
0830a1e2 +0x0fa:  mov    %eax,(%esp)
0830a1e5 +0x0fd:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
0830a1ea +0x102:  mov    %ebx,%eax
0830a1ec +0x104:  lea    -0x8(%ebp),%esp
0830a1ef +0x107:  add    $0x0,%esp
0830a1f2 +0x10a:  pop    %ebx
0830a1f3 +0x10b:  pop    %esi
0830a1f4 +0x10c:  pop    %ebp
0830a1f5 +0x10d:  ret
```

## 反编译 C

```c
// CBattle_Field::check_grid_clear @ 0x830a0e8

/* CBattle_Field::check_grid_clear() */

undefined4 __thiscall CBattle_Field::check_grid_clear(CBattle_Field *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map_monster local_364 [19];
  char local_351;
  int local_338;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_18 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_10 [4];
  
  map_monster::map_monster(local_364);
                    /* try { // try from 0830a107 to 0830a199 has its CatchHandler @ 0830a1be */
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_18);
  do {
    GetCurrentMapInfo(this);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') {
      uVar3 = 1;
LAB_0830a1dc:
      map_monster::~map_monster(local_364);
      return uVar3;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_18);
    map_monster::operator=(local_364,(map_monster *)(iVar2 + 4));
    if ((local_338 == 100) && (local_351 == '\0')) {
      uVar3 = 0;
      goto LAB_0830a1dc;
    }
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_10,(int)local_18);
  } while( true );
}
```

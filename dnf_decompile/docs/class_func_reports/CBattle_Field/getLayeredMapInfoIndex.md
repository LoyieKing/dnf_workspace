# getLayeredMapInfoIndex

`_ZN13CBattle_Field22getLayeredMapInfoIndexEi`

`CBattle_Field::getLayeredMapInfoIndex(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830df88` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830df88  _ZN13CBattle_Field22getLayeredMapInfoIndexEi
#           CBattle_Field::getLayeredMapInfoIndex(int)
# range [0x0830df88, 0x0830e16f]
0830df88 +0x000:  push   %ebp
0830df89 +0x001:  mov    %esp,%ebp
0830df8b +0x003:  push   %esi
0830df8c +0x004:  push   %ebx
0830df8d +0x005:  sub    $0x310,%esp
0830df93 +0x00b:  mov    0xc(%ebp),%eax
0830df96 +0x00e:  mov    %eax,0x4(%esp)
0830df9a +0x012:  mov    0x8(%ebp),%eax
0830df9d +0x015:  mov    %eax,(%esp)
0830dfa0 +0x018:  call   0830df56 <_ZN13CBattle_Field21getLayeredMapKeyValueEi>  ; CBattle_Field::getLayeredMapKeyValue(int)
0830dfa5 +0x01d:  mov    %eax,-0x1f8(%ebp)
0830dfab +0x023:  mov    0x8(%ebp),%eax
0830dfae +0x026:  lea    0x78(%eax),%ecx
0830dfb1 +0x029:  lea    -0x1fc(%ebp),%eax
0830dfb7 +0x02f:  lea    -0x1f8(%ebp),%edx
0830dfbd +0x035:  mov    %edx,0x8(%esp)
0830dfc1 +0x039:  mov    %ecx,0x4(%esp)
0830dfc5 +0x03d:  mov    %eax,(%esp)
0830dfc8 +0x040:  call   08235c88 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb332>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb332
0830dfcd +0x045:  sub    $0x4,%esp
0830dfd0 +0x048:  mov    0x8(%ebp),%eax
0830dfd3 +0x04b:  lea    0x78(%eax),%edx
0830dfd6 +0x04e:  lea    -0x1f4(%ebp),%eax
0830dfdc +0x054:  mov    %edx,0x4(%esp)
0830dfe0 +0x058:  mov    %eax,(%esp)
0830dfe3 +0x05b:  call   08235cb4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb35e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb35e
0830dfe8 +0x060:  sub    $0x4,%esp
0830dfeb +0x063:  lea    -0x1f4(%ebp),%eax
0830dff1 +0x069:  mov    %eax,0x4(%esp)
0830dff5 +0x06d:  lea    -0x1fc(%ebp),%eax
0830dffb +0x073:  mov    %eax,(%esp)
0830dffe +0x076:  call   08235cda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb384>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb384
0830e003 +0x07b:  test   %al,%al
0830e005 +0x07d:  je     0830e01d <+0x95>
0830e007 +0x07f:  lea    -0x1fc(%ebp),%eax
0830e00d +0x085:  mov    %eax,(%esp)
0830e010 +0x088:  call   08235cee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb398>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb398
0830e015 +0x08d:  lea    0x4(%eax),%ebx
0830e018 +0x090:  jmp    0830e163 <+0x1db>
0830e01d +0x095:  lea    -0x2ec(%ebp),%eax
0830e023 +0x09b:  mov    %eax,(%esp)
0830e026 +0x09e:  call   08151394 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xcc9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xcc9
0830e02b +0x0a3:  mov    0xc(%ebp),%eax
0830e02e +0x0a6:  mov    %eax,0x4(%esp)
0830e032 +0x0aa:  mov    0x8(%ebp),%eax
0830e035 +0x0ad:  mov    %eax,(%esp)
0830e038 +0x0b0:  call   0830df56 <_ZN13CBattle_Field21getLayeredMapKeyValueEi>  ; CBattle_Field::getLayeredMapKeyValue(int)
0830e03d +0x0b5:  mov    %eax,-0x200(%ebp)
0830e043 +0x0bb:  lea    -0xf8(%ebp),%eax
0830e049 +0x0c1:  lea    -0x2ec(%ebp),%edx
0830e04f +0x0c7:  mov    %edx,0x8(%esp)
0830e053 +0x0cb:  lea    -0x200(%ebp),%edx
0830e059 +0x0d1:  mov    %edx,0x4(%esp)
0830e05d +0x0d5:  mov    %eax,(%esp)
0830e060 +0x0d8:  call   08235cfb <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb3a5>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb3a5
0830e065 +0x0dd:  sub    $0x4,%esp
0830e068 +0x0e0:  lea    -0xf8(%ebp),%eax
0830e06e +0x0e6:  mov    %eax,0x4(%esp)
0830e072 +0x0ea:  lea    -0x1e8(%ebp),%eax
0830e078 +0x0f0:  mov    %eax,(%esp)
0830e07b +0x0f3:  call   08235fb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb65c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb65c
0830e080 +0x0f8:  mov    0x8(%ebp),%eax
0830e083 +0x0fb:  lea    0x78(%eax),%ecx
0830e086 +0x0fe:  lea    -0x1f0(%ebp),%eax
0830e08c +0x104:  lea    -0x1e8(%ebp),%edx
0830e092 +0x10a:  mov    %edx,0x8(%esp)
0830e096 +0x10e:  mov    %ecx,0x4(%esp)
0830e09a +0x112:  mov    %eax,(%esp)
0830e09d +0x115:  call   08235fec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb696>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb696
0830e0a2 +0x11a:  sub    $0x4,%esp
0830e0a5 +0x11d:  lea    -0x1e8(%ebp),%eax
0830e0ab +0x123:  mov    %eax,(%esp)
0830e0ae +0x126:  call   0822cc32 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22dc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22dc
0830e0b3 +0x12b:  jmp    0830e0e5 <+0x15d>
0830e0b5 +0x12d:  mov    %edx,%ebx
0830e0b7 +0x12f:  mov    %eax,%esi
0830e0b9 +0x131:  lea    -0x1e8(%ebp),%eax
0830e0bf +0x137:  mov    %eax,(%esp)
0830e0c2 +0x13a:  call   0822cc32 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22dc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22dc
0830e0c7 +0x13f:  mov    %esi,%eax
0830e0c9 +0x141:  mov    %ebx,%edx
0830e0cb +0x143:  jmp    0830e0cd <+0x145>
0830e0cd +0x145:  mov    %edx,%ebx
0830e0cf +0x147:  mov    %eax,%esi
0830e0d1 +0x149:  lea    -0xf8(%ebp),%eax
0830e0d7 +0x14f:  mov    %eax,(%esp)
0830e0da +0x152:  call   0822cc1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22c6
0830e0df +0x157:  mov    %esi,%eax
0830e0e1 +0x159:  mov    %ebx,%edx
0830e0e3 +0x15b:  jmp    0830e145 <+0x1bd>
0830e0e5 +0x15d:  lea    -0xf8(%ebp),%eax
0830e0eb +0x163:  mov    %eax,(%esp)
0830e0ee +0x166:  call   0822cc1c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x22c6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x22c6
0830e0f3 +0x16b:  mov    0x8(%ebp),%eax
0830e0f6 +0x16e:  lea    0x78(%eax),%ecx
0830e0f9 +0x171:  lea    -0x2fc(%ebp),%eax
0830e0ff +0x177:  lea    -0x200(%ebp),%edx
0830e105 +0x17d:  mov    %edx,0x8(%esp)
0830e109 +0x181:  mov    %ecx,0x4(%esp)
0830e10d +0x185:  mov    %eax,(%esp)
0830e110 +0x188:  call   08235c88 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb332>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb332
0830e115 +0x18d:  sub    $0x4,%esp
0830e118 +0x190:  mov    -0x2fc(%ebp),%eax
0830e11e +0x196:  mov    %eax,-0x1fc(%ebp)
0830e124 +0x19c:  lea    -0x1fc(%ebp),%eax
0830e12a +0x1a2:  mov    %eax,(%esp)
0830e12d +0x1a5:  call   08235cee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb398>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb398
0830e132 +0x1aa:  lea    0x4(%eax),%ebx
0830e135 +0x1ad:  lea    -0x2ec(%ebp),%eax
0830e13b +0x1b3:  mov    %eax,(%esp)
0830e13e +0x1b6:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0830e143 +0x1bb:  jmp    0830e163 <+0x1db>
0830e145 +0x1bd:  mov    %edx,%ebx
0830e147 +0x1bf:  mov    %eax,%esi
0830e149 +0x1c1:  lea    -0x2ec(%ebp),%eax
0830e14f +0x1c7:  mov    %eax,(%esp)
0830e152 +0x1ca:  call   081518bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11f1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11f1
0830e157 +0x1cf:  mov    %esi,%eax
0830e159 +0x1d1:  mov    %ebx,%edx
0830e15b +0x1d3:  mov    %eax,(%esp)
0830e15e +0x1d6:  call   08ae3750 <_Unwind_Resume>
0830e163 +0x1db:  mov    %ebx,%eax
0830e165 +0x1dd:  lea    -0x8(%ebp),%esp
0830e168 +0x1e0:  add    $0x0,%esp
0830e16b +0x1e3:  pop    %ebx
0830e16c +0x1e4:  pop    %esi
0830e16d +0x1e5:  pop    %ebp
0830e16e +0x1e6:  ret
0830e16f +0x1e7:  nop
```

## 反编译 C

```c
// CBattle_Field::getLayeredMapInfoIndex @ 0x830df88

/* CBattle_Field::getLayeredMapInfoIndex(int) */

int __thiscall CBattle_Field::getLayeredMapInfoIndex(CBattle_Field *this,int param_1)

{
  char cVar1;
  int iVar2;
  int local_300 [4];
  MapInfo local_2f0 [236];
  undefined4 local_204;
  int local_200;
  undefined4 local_1fc;
  map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>> local_1f8 [4];
  pair local_1f4 [8];
  pair<int_const,MapInfo> local_1ec [240];
  pair<int,MapInfo> local_fc [240];
  
  local_1fc = getLayeredMapKeyValue(this,param_1);
  std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::find
            (&local_200);
  std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::end(local_1f8);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_200,
                     (_Rb_tree_iterator *)local_1f8);
  if (cVar1 == '\0') {
    MapInfo::MapInfo(local_2f0);
    local_204 = getLayeredMapKeyValue(this,param_1);
                    /* try { // try from 0830e060 to 0830e064 has its CatchHandler @ 0830e145 */
    std::make_pair<int&,MapInfo&>((int *)local_fc,(MapInfo *)&local_204);
                    /* try { // try from 0830e07b to 0830e07f has its CatchHandler @ 0830e0cd */
    std::pair<int_const,MapInfo>::pair<int,MapInfo>(local_1ec,local_fc);
                    /* try { // try from 0830e09d to 0830e0a1 has its CatchHandler @ 0830e0b5 */
    std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::insert
              (local_1f4);
                    /* try { // try from 0830e0ae to 0830e0b2 has its CatchHandler @ 0830e0cd */
    std::pair<int_const,MapInfo>::~pair(local_1ec);
                    /* try { // try from 0830e0ee to 0830e114 has its CatchHandler @ 0830e145 */
    std::pair<int,MapInfo>::~pair(local_fc);
    std::map<int,MapInfo,std::less<int>,std::allocator<std::pair<int_const,MapInfo>>>::find
              (local_300);
    local_200 = local_300[0];
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_200);
    MapInfo::~MapInfo(local_2f0);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,MapInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,MapInfo>> *)&local_200);
  }
  return iVar2 + 4;
}
```

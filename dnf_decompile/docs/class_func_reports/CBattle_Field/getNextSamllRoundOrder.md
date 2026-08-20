# getNextSamllRoundOrder

`_ZN13CBattle_Field22getNextSamllRoundOrderEsi`

`CBattle_Field::getNextSamllRoundOrder(short, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08306212` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08306212  _ZN13CBattle_Field22getNextSamllRoundOrderEsi
#           CBattle_Field::getNextSamllRoundOrder(short, int)
# range [0x08306212, 0x083062fd]
08306212 +0x00:  push   %ebp
08306213 +0x01:  mov    %esp,%ebp
08306215 +0x03:  sub    $0x38,%esp
08306218 +0x06:  mov    0xc(%ebp),%eax
0830621b +0x09:  mov    %ax,-0x1c(%ebp)
0830621f +0x0d:  movw   $0x0,-0xa(%ebp)
08306225 +0x13:  mov    0x8(%ebp),%eax
08306228 +0x16:  mov    %eax,(%esp)
0830622b +0x19:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08306230 +0x1e:  lea    0xc(%eax),%edx
08306233 +0x21:  lea    -0x18(%ebp),%eax
08306236 +0x24:  mov    %edx,0x4(%esp)
0830623a +0x28:  mov    %eax,(%esp)
0830623d +0x2b:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08306242 +0x30:  sub    $0x4,%esp
08306245 +0x33:  jmp    083062be <+0xac>
08306247 +0x35:  lea    -0x18(%ebp),%eax
0830624a +0x38:  mov    %eax,(%esp)
0830624d +0x3b:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08306252 +0x40:  movzwl 0x34a(%eax),%eax
08306259 +0x47:  cmp    -0x1c(%ebp),%ax
0830625d +0x4b:  jne    08306280 <+0x6e>
0830625f +0x4d:  lea    -0x18(%ebp),%eax
08306262 +0x50:  mov    %eax,(%esp)
08306265 +0x53:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
0830626a +0x58:  movzbl 0x34c(%eax),%eax
08306271 +0x5f:  movsbl %al,%eax
08306274 +0x62:  cmp    0x10(%ebp),%eax
08306277 +0x65:  jne    08306280 <+0x6e>
08306279 +0x67:  mov    $0x1,%eax
0830627e +0x6c:  jmp    08306285 <+0x73>
08306280 +0x6e:  mov    $0x0,%eax
08306285 +0x73:  test   %al,%al
08306287 +0x75:  je     083062a1 <+0x8f>
08306289 +0x77:  lea    -0x18(%ebp),%eax
0830628c +0x7a:  mov    %eax,(%esp)
0830628f +0x7d:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08306294 +0x82:  movzwl 0x33e(%eax),%eax
0830629b +0x89:  mov    %ax,-0xa(%ebp)
0830629f +0x8d:  jmp    083062f8 <+0xe6>
083062a1 +0x8f:  lea    -0x10(%ebp),%eax
083062a4 +0x92:  movl   $0x0,0x8(%esp)
083062ac +0x9a:  lea    -0x18(%ebp),%edx
083062af +0x9d:  mov    %edx,0x4(%esp)
083062b3 +0xa1:  mov    %eax,(%esp)
083062b6 +0xa4:  call   08155b8c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x54c1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x54c1
083062bb +0xa9:  sub    $0x4,%esp
083062be +0xac:  mov    0x8(%ebp),%eax
083062c1 +0xaf:  mov    %eax,(%esp)
083062c4 +0xb2:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
083062c9 +0xb7:  lea    0xc(%eax),%edx
083062cc +0xba:  lea    -0x14(%ebp),%eax
083062cf +0xbd:  mov    %edx,0x4(%esp)
083062d3 +0xc1:  mov    %eax,(%esp)
083062d6 +0xc4:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
083062db +0xc9:  sub    $0x4,%esp
083062de +0xcc:  lea    -0x14(%ebp),%eax
083062e1 +0xcf:  mov    %eax,0x4(%esp)
083062e5 +0xd3:  lea    -0x18(%ebp),%eax
083062e8 +0xd6:  mov    %eax,(%esp)
083062eb +0xd9:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
083062f0 +0xde:  test   %al,%al
083062f2 +0xe0:  jne    08306247 <+0x35>
083062f8 +0xe6:  movzwl -0xa(%ebp),%eax
083062fc +0xea:  leave
083062fd +0xeb:  ret
```

## 反编译 C

```c
// CBattle_Field::getNextSamllRoundOrder @ 0x8306212

/* CBattle_Field::getNextSamllRoundOrder(short, int) */

undefined2 __thiscall
CBattle_Field::getNextSamllRoundOrder(CBattle_Field *this,short param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_14 [6];
  undefined2 local_e;
  
  local_e = 0;
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_1c);
  while( true ) {
    GetCurrentMapInfo(this);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_18);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar2 == '\0') {
      return local_e;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c);
    if ((*(short *)(iVar3 + 0x34a) == param_1) &&
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c),
       *(char *)(iVar3 + 0x34c) == param_2)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) break;
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_14,(int)local_1c);
  }
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c);
  return *(undefined2 *)(iVar3 + 0x33e);
}
```

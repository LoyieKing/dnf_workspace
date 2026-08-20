# getTagCharacInfo

`_ZNK5CUser16getTagCharacInfoEijP15TAG_CHARAC_DATA`

`CUser::getTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086904f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086904f0  _ZNK5CUser16getTagCharacInfoEijP15TAG_CHARAC_DATA
#           CUser::getTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*) const
# range [0x086904f0, 0x0869067b]
086904f0 +0x000:  push   %ebp
086904f1 +0x001:  mov    %esp,%ebp
086904f3 +0x003:  sub    $0x18,%esp
086904f6 +0x006:  cmpl   $0x0,0xc(%ebp)
086904fa +0x00a:  js     08690518 <+0x28>
086904fc +0x00c:  mov    0x8(%ebp),%eax
086904ff +0x00f:  add    $0x796e8,%eax
08690504 +0x014:  mov    %eax,(%esp)
08690507 +0x017:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
0869050c +0x01c:  cmp    0xc(%ebp),%eax
0869050f +0x01f:  jle    08690518 <+0x28>
08690511 +0x021:  mov    $0x1,%eax
08690516 +0x026:  jmp    0869051d <+0x2d>
08690518 +0x028:  mov    $0x0,%eax
0869051d +0x02d:  test   %al,%al
0869051f +0x02f:  je     08690674 <+0x184>
08690525 +0x035:  mov    0xc(%ebp),%eax
08690528 +0x038:  mov    0x8(%ebp),%edx
0869052b +0x03b:  add    $0x796e8,%edx
08690531 +0x041:  mov    %eax,0x4(%esp)
08690535 +0x045:  mov    %edx,(%esp)
08690538 +0x048:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0869053d +0x04d:  mov    (%eax),%eax
0869053f +0x04f:  cmp    0x10(%ebp),%eax
08690542 +0x052:  setne  %al
08690545 +0x055:  test   %al,%al
08690547 +0x057:  je     08690553 <+0x63>
08690549 +0x059:  mov    $0x0,%eax
0869054e +0x05e:  jmp    08690679 <+0x189>
08690553 +0x063:  mov    0xc(%ebp),%eax
08690556 +0x066:  mov    0x8(%ebp),%edx
08690559 +0x069:  add    $0x796e8,%edx
0869055f +0x06f:  mov    %eax,0x4(%esp)
08690563 +0x073:  mov    %edx,(%esp)
08690566 +0x076:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0869056b +0x07b:  mov    (%eax),%eax
0869056d +0x07d:  mov    %eax,%edx
0869056f +0x07f:  mov    0x14(%ebp),%eax
08690572 +0x082:  mov    %edx,(%eax)
08690574 +0x084:  mov    0xc(%ebp),%eax
08690577 +0x087:  mov    0x8(%ebp),%edx
0869057a +0x08a:  add    $0x796e8,%edx
08690580 +0x090:  mov    %eax,0x4(%esp)
08690584 +0x094:  mov    %edx,(%esp)
08690587 +0x097:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0869058c +0x09c:  add    $0x4,%eax
0869058f +0x09f:  mov    0x14(%ebp),%edx
08690592 +0x0a2:  add    $0x4,%edx
08690595 +0x0a5:  movl   $0x1d,0x8(%esp)
0869059d +0x0ad:  mov    %eax,0x4(%esp)
086905a1 +0x0b1:  mov    %edx,(%esp)
086905a4 +0x0b4:  call   0807d8d0 <_init+0x1c8>
086905a9 +0x0b9:  mov    0xc(%ebp),%eax
086905ac +0x0bc:  mov    0x8(%ebp),%edx
086905af +0x0bf:  add    $0x796e8,%edx
086905b5 +0x0c5:  mov    %eax,0x4(%esp)
086905b9 +0x0c9:  mov    %edx,(%esp)
086905bc +0x0cc:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
086905c1 +0x0d1:  movzbl 0x26(%eax),%edx
086905c5 +0x0d5:  mov    0x14(%ebp),%eax
086905c8 +0x0d8:  mov    %dl,0x21(%eax)
086905cb +0x0db:  mov    0xc(%ebp),%eax
086905ce +0x0de:  mov    0x8(%ebp),%edx
086905d1 +0x0e1:  add    $0x796e8,%edx
086905d7 +0x0e7:  mov    %eax,0x4(%esp)
086905db +0x0eb:  mov    %edx,(%esp)
086905de +0x0ee:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
086905e3 +0x0f3:  movzwl 0x27(%eax),%edx
086905e7 +0x0f7:  mov    0x14(%ebp),%eax
086905ea +0x0fa:  mov    %dx,0x22(%eax)
086905ee +0x0fe:  mov    0xc(%ebp),%eax
086905f1 +0x101:  mov    0x8(%ebp),%edx
086905f4 +0x104:  add    $0x796e8,%edx
086905fa +0x10a:  mov    %eax,0x4(%esp)
086905fe +0x10e:  mov    %edx,(%esp)
08690601 +0x111:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
08690606 +0x116:  movzbl 0x29(%eax),%edx
0869060a +0x11a:  mov    0x14(%ebp),%eax
0869060d +0x11d:  mov    %dl,0x24(%eax)
08690610 +0x120:  mov    0xc(%ebp),%eax
08690613 +0x123:  mov    0x8(%ebp),%edx
08690616 +0x126:  add    $0x796e8,%edx
0869061c +0x12c:  mov    %eax,0x4(%esp)
08690620 +0x130:  mov    %edx,(%esp)
08690623 +0x133:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
08690628 +0x138:  movzbl 0x1239(%eax),%edx
0869062f +0x13f:  mov    0x14(%ebp),%eax
08690632 +0x142:  mov    %dl,0x25(%eax)
08690635 +0x145:  mov    0xc(%ebp),%eax
08690638 +0x148:  mov    0x8(%ebp),%edx
0869063b +0x14b:  add    $0x796e8,%edx
08690641 +0x151:  mov    %eax,0x4(%esp)
08690645 +0x155:  mov    %edx,(%esp)
08690648 +0x158:  call   0823611e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7c8
0869064d +0x15d:  lea    0x88(%eax),%edx
08690653 +0x163:  mov    0x14(%ebp),%eax
08690656 +0x166:  add    $0x26,%eax
08690659 +0x169:  movl   $0x52,0x8(%esp)
08690661 +0x171:  mov    %edx,0x4(%esp)
08690665 +0x175:  mov    %eax,(%esp)
08690668 +0x178:  call   0807d8a0 <_init+0x198>
0869066d +0x17d:  mov    $0x1,%eax
08690672 +0x182:  jmp    08690679 <+0x189>
08690674 +0x184:  mov    $0x0,%eax
08690679 +0x189:  leave
0869067a +0x18a:  ret
0869067b +0x18b:  nop
```

## 反编译 C

```c
// CUser::getTagCharacInfo @ 0x86904f0

/* CUser::getTagCharacInfo(int, unsigned int, TAG_CHARAC_DATA*) const */

undefined4 __thiscall
CUser::getTagCharacInfo(CUser *this,int param_1,uint param_2,TAG_CHARAC_DATA *param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (-1 < param_1) {
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8));
    if (param_1 < iVar2) {
      bVar1 = true;
      goto LAB_0869051d;
    }
  }
  bVar1 = false;
LAB_0869051d:
  if (bVar1) {
    puVar3 = (uint *)std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                               ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                                (this + 0x796e8),param_1);
    if (*puVar3 == param_2) {
      puVar5 = (undefined4 *)
               std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                         ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                          param_1);
      *(undefined4 *)param_3 = *puVar5;
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      strncpy((char *)(param_3 + 4),(char *)(iVar2 + 4),0x1d);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x21] = *(TAG_CHARAC_DATA *)(iVar2 + 0x26);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      *(undefined2 *)(param_3 + 0x22) = *(undefined2 *)(iVar2 + 0x27);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x24] = *(TAG_CHARAC_DATA *)(iVar2 + 0x29);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      param_3[0x25] = *(TAG_CHARAC_DATA *)(iVar2 + 0x1239);
      iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                        ((vector<_Charac_info,std::allocator<_Charac_info>> *)(this + 0x796e8),
                         param_1);
      memcpy(param_3 + 0x26,(void *)(iVar2 + 0x88),0x52);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

# SetDamagedPacketCnt

`_ZN13CBattle_Field19SetDamagedPacketCntEi`

`CBattle_Field::SetDamagedPacketCnt(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308f4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308f4e  _ZN13CBattle_Field19SetDamagedPacketCntEi
#           CBattle_Field::SetDamagedPacketCnt(int)
# range [0x08308f4e, 0x08308ff7]
08308f4e +0x00:  push   %ebp
08308f4f +0x01:  mov    %esp,%ebp
08308f51 +0x03:  sub    $0x38,%esp
08308f54 +0x06:  movl   $0x0,-0xc(%ebp)
08308f5b +0x0d:  lea    -0x14(%ebp),%eax
08308f5e +0x10:  mov    %eax,(%esp)
08308f61 +0x13:  call   0815244c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d81
08308f66 +0x18:  mov    0x8(%ebp),%eax
08308f69 +0x1b:  mov    %eax,(%esp)
08308f6c +0x1e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308f71 +0x23:  lea    0xc(%eax),%ecx
08308f74 +0x26:  lea    -0x1c(%ebp),%eax
08308f77 +0x29:  lea    0xc(%ebp),%edx
08308f7a +0x2c:  mov    %edx,0x8(%esp)
08308f7e +0x30:  mov    %ecx,0x4(%esp)
08308f82 +0x34:  mov    %eax,(%esp)
08308f85 +0x37:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
08308f8a +0x3c:  sub    $0x4,%esp
08308f8d +0x3f:  mov    -0x1c(%ebp),%eax
08308f90 +0x42:  mov    %eax,-0x14(%ebp)
08308f93 +0x45:  mov    0x8(%ebp),%eax
08308f96 +0x48:  mov    %eax,(%esp)
08308f99 +0x4b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08308f9e +0x50:  lea    0xc(%eax),%edx
08308fa1 +0x53:  lea    -0x10(%ebp),%eax
08308fa4 +0x56:  mov    %edx,0x4(%esp)
08308fa8 +0x5a:  mov    %eax,(%esp)
08308fab +0x5d:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08308fb0 +0x62:  sub    $0x4,%esp
08308fb3 +0x65:  lea    -0x10(%ebp),%eax
08308fb6 +0x68:  mov    %eax,0x4(%esp)
08308fba +0x6c:  lea    -0x14(%ebp),%eax
08308fbd +0x6f:  mov    %eax,(%esp)
08308fc0 +0x72:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
08308fc5 +0x77:  test   %al,%al
08308fc7 +0x79:  je     08308fd0 <+0x82>
08308fc9 +0x7b:  mov    $0x0,%eax
08308fce +0x80:  jmp    08308ff5 <+0xa7>
08308fd0 +0x82:  lea    -0x14(%ebp),%eax
08308fd3 +0x85:  mov    %eax,(%esp)
08308fd6 +0x88:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08308fdb +0x8d:  add    $0x4,%eax
08308fde +0x90:  mov    %eax,-0xc(%ebp)
08308fe1 +0x93:  mov    -0xc(%ebp),%eax
08308fe4 +0x96:  mov    0x20(%eax),%eax
08308fe7 +0x99:  lea    0x1(%eax),%edx
08308fea +0x9c:  mov    -0xc(%ebp),%eax
08308fed +0x9f:  mov    %edx,0x20(%eax)
08308ff0 +0xa2:  mov    $0x1,%eax
08308ff5 +0xa7:  leave
08308ff6 +0xa8:  ret
08308ff7 +0xa9:  nop
```

## 反编译 C

```c
// CBattle_Field::SetDamagedPacketCnt @ 0x8308f4e

/* CBattle_Field::SetDamagedPacketCnt(int) */

bool CBattle_Field::SetDamagedPacketCnt(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [2];
  int local_18;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_18);
  GetCurrentMapInfo((CBattle_Field *)param_1);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (local_20);
  local_18 = local_20[0];
  GetCurrentMapInfo((CBattle_Field *)param_1);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_18);
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + 1;
  }
  return cVar1 == '\0';
}
```

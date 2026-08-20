# pickup_item

`_ZN13CBattle_Field11pickup_itemEi`

`CBattle_Field::pickup_item(int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830daee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830daee  _ZN13CBattle_Field11pickup_itemEi
#           CBattle_Field::pickup_item(int)
# range [0x0830daee, 0x0830db83]
0830daee +0x00:  push   %ebp
0830daef +0x01:  mov    %esp,%ebp
0830daf1 +0x03:  sub    $0x38,%esp
0830daf4 +0x06:  mov    0x8(%ebp),%eax
0830daf7 +0x09:  mov    %eax,(%esp)
0830dafa +0x0c:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830daff +0x11:  mov    %eax,-0xc(%ebp)
0830db02 +0x14:  lea    -0x14(%ebp),%eax
0830db05 +0x17:  mov    %eax,(%esp)
0830db08 +0x1a:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
0830db0d +0x1f:  mov    -0xc(%ebp),%eax
0830db10 +0x22:  lea    0x24(%eax),%ecx
0830db13 +0x25:  lea    -0x1c(%ebp),%eax
0830db16 +0x28:  lea    0xc(%ebp),%edx
0830db19 +0x2b:  mov    %edx,0x8(%esp)
0830db1d +0x2f:  mov    %ecx,0x4(%esp)
0830db21 +0x33:  mov    %eax,(%esp)
0830db24 +0x36:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
0830db29 +0x3b:  sub    $0x4,%esp
0830db2c +0x3e:  mov    -0x1c(%ebp),%eax
0830db2f +0x41:  mov    %eax,-0x14(%ebp)
0830db32 +0x44:  mov    -0xc(%ebp),%eax
0830db35 +0x47:  lea    0x24(%eax),%edx
0830db38 +0x4a:  lea    -0x10(%ebp),%eax
0830db3b +0x4d:  mov    %edx,0x4(%esp)
0830db3f +0x51:  mov    %eax,(%esp)
0830db42 +0x54:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
0830db47 +0x59:  sub    $0x4,%esp
0830db4a +0x5c:  lea    -0x10(%ebp),%eax
0830db4d +0x5f:  mov    %eax,0x4(%esp)
0830db51 +0x63:  lea    -0x14(%ebp),%eax
0830db54 +0x66:  mov    %eax,(%esp)
0830db57 +0x69:  call   0815494c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4281>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4281
0830db5c +0x6e:  test   %al,%al
0830db5e +0x70:  je     0830db67 <+0x79>
0830db60 +0x72:  mov    $0x15,%eax
0830db65 +0x77:  jmp    0830db81 <+0x93>
0830db67 +0x79:  mov    -0xc(%ebp),%eax
0830db6a +0x7c:  lea    0x24(%eax),%edx
0830db6d +0x7f:  mov    -0x14(%ebp),%eax
0830db70 +0x82:  mov    %eax,0x4(%esp)
0830db74 +0x86:  mov    %edx,(%esp)
0830db77 +0x89:  call   08311ff4 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x3bd9>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x3bd9
0830db7c +0x8e:  mov    $0x0,%eax
0830db81 +0x93:  leave
0830db82 +0x94:  ret
0830db83 +0x95:  nop
```

## 反编译 C

```c
// CBattle_Field::pickup_item @ 0x830daee

/* CBattle_Field::pickup_item(int) */

undefined4 CBattle_Field::pickup_item(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int local_20 [2];
  int local_18;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_14 [4];
  int local_10;
  
  local_10 = GetCurrentMapInfo((CBattle_Field *)param_1);
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
  puVar3 = &stack0x00000008;
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_20);
  local_18 = local_20[0];
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_14)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
              ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> *)
               (local_10 + 0x24),local_18,puVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0x15;
  }
  return uVar2;
}
```

# SetDamageValue

`_ZN13CBattle_Field14SetDamageValueEii`

`CBattle_Field::SetDamageValue(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08308ff8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08308ff8  _ZN13CBattle_Field14SetDamageValueEii
#           CBattle_Field::SetDamageValue(int, int)
# range [0x08308ff8, 0x083090a3]
08308ff8 +0x00:  push   %ebp
08308ff9 +0x01:  mov    %esp,%ebp
08308ffb +0x03:  sub    $0x38,%esp
08308ffe +0x06:  movl   $0x0,-0xc(%ebp)
08309005 +0x0d:  lea    -0x14(%ebp),%eax
08309008 +0x10:  mov    %eax,(%esp)
0830900b +0x13:  call   0815244c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d81
08309010 +0x18:  mov    0x8(%ebp),%eax
08309013 +0x1b:  mov    %eax,(%esp)
08309016 +0x1e:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830901b +0x23:  lea    0xc(%eax),%ecx
0830901e +0x26:  lea    -0x1c(%ebp),%eax
08309021 +0x29:  lea    0xc(%ebp),%edx
08309024 +0x2c:  mov    %edx,0x8(%esp)
08309028 +0x30:  mov    %ecx,0x4(%esp)
0830902c +0x34:  mov    %eax,(%esp)
0830902f +0x37:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
08309034 +0x3c:  sub    $0x4,%esp
08309037 +0x3f:  mov    -0x1c(%ebp),%eax
0830903a +0x42:  mov    %eax,-0x14(%ebp)
0830903d +0x45:  mov    0x8(%ebp),%eax
08309040 +0x48:  mov    %eax,(%esp)
08309043 +0x4b:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
08309048 +0x50:  lea    0xc(%eax),%edx
0830904b +0x53:  lea    -0x10(%ebp),%eax
0830904e +0x56:  mov    %edx,0x4(%esp)
08309052 +0x5a:  mov    %eax,(%esp)
08309055 +0x5d:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0830905a +0x62:  sub    $0x4,%esp
0830905d +0x65:  lea    -0x10(%ebp),%eax
08309060 +0x68:  mov    %eax,0x4(%esp)
08309064 +0x6c:  lea    -0x14(%ebp),%eax
08309067 +0x6f:  mov    %eax,(%esp)
0830906a +0x72:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
0830906f +0x77:  test   %al,%al
08309071 +0x79:  je     0830907a <+0x82>
08309073 +0x7b:  mov    $0x0,%eax
08309078 +0x80:  jmp    083090a1 <+0xa9>
0830907a +0x82:  lea    -0x14(%ebp),%eax
0830907d +0x85:  mov    %eax,(%esp)
08309080 +0x88:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08309085 +0x8d:  add    $0x4,%eax
08309088 +0x90:  mov    %eax,-0xc(%ebp)
0830908b +0x93:  mov    -0xc(%ebp),%eax
0830908e +0x96:  mov    0x24(%eax),%eax
08309091 +0x99:  mov    %eax,%edx
08309093 +0x9b:  add    0x10(%ebp),%edx
08309096 +0x9e:  mov    -0xc(%ebp),%eax
08309099 +0xa1:  mov    %edx,0x24(%eax)
0830909c +0xa4:  mov    $0x1,%eax
083090a1 +0xa9:  leave
083090a2 +0xaa:  ret
083090a3 +0xab:  nop
```

## 反编译 C

```c
// CBattle_Field::SetDamageValue @ 0x8308ff8

/* CBattle_Field::SetDamageValue(int, int) */

bool __thiscall CBattle_Field::SetDamageValue(CBattle_Field *this,int param_1,int param_2)

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
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (local_20);
  local_18 = local_20[0];
  GetCurrentMapInfo(this);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_18);
    *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + param_2;
  }
  return cVar1 == '\0';
}
```

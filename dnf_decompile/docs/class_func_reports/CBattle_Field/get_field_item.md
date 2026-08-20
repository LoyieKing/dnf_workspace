# get_field_item

`_ZN13CBattle_Field14get_field_itemEiR8map_item`

`CBattle_Field::get_field_item(int, map_item&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830d9c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830d9c0  _ZN13CBattle_Field14get_field_itemEiR8map_item
#           CBattle_Field::get_field_item(int, map_item&)
# range [0x0830d9c0, 0x0830da6b]
0830d9c0 +0x00:  push   %ebp
0830d9c1 +0x01:  mov    %esp,%ebp
0830d9c3 +0x03:  push   %edi
0830d9c4 +0x04:  push   %esi
0830d9c5 +0x05:  push   %ebx
0830d9c6 +0x06:  sub    $0x3c,%esp
0830d9c9 +0x09:  lea    -0x20(%ebp),%eax
0830d9cc +0x0c:  mov    %eax,(%esp)
0830d9cf +0x0f:  call   08152524 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e59>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e59
0830d9d4 +0x14:  mov    0x8(%ebp),%eax
0830d9d7 +0x17:  mov    %eax,(%esp)
0830d9da +0x1a:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830d9df +0x1f:  lea    0x24(%eax),%ecx
0830d9e2 +0x22:  lea    -0x2c(%ebp),%eax
0830d9e5 +0x25:  lea    0xc(%ebp),%edx
0830d9e8 +0x28:  mov    %edx,0x8(%esp)
0830d9ec +0x2c:  mov    %ecx,0x4(%esp)
0830d9f0 +0x30:  mov    %eax,(%esp)
0830d9f3 +0x33:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
0830d9f8 +0x38:  sub    $0x4,%esp
0830d9fb +0x3b:  mov    -0x2c(%ebp),%eax
0830d9fe +0x3e:  mov    %eax,-0x20(%ebp)
0830da01 +0x41:  mov    0x8(%ebp),%eax
0830da04 +0x44:  mov    %eax,(%esp)
0830da07 +0x47:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830da0c +0x4c:  lea    0x24(%eax),%edx
0830da0f +0x4f:  lea    -0x1c(%ebp),%eax
0830da12 +0x52:  mov    %edx,0x4(%esp)
0830da16 +0x56:  mov    %eax,(%esp)
0830da19 +0x59:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
0830da1e +0x5e:  sub    $0x4,%esp
0830da21 +0x61:  lea    -0x1c(%ebp),%eax
0830da24 +0x64:  mov    %eax,0x4(%esp)
0830da28 +0x68:  lea    -0x20(%ebp),%eax
0830da2b +0x6b:  mov    %eax,(%esp)
0830da2e +0x6e:  call   0815494c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4281>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4281
0830da33 +0x73:  test   %al,%al
0830da35 +0x75:  je     0830da3e <+0x7e>
0830da37 +0x77:  mov    $0x0,%eax
0830da3c +0x7c:  jmp    0830da61 <+0xa1>
0830da3e +0x7e:  lea    -0x20(%ebp),%eax
0830da41 +0x81:  mov    %eax,(%esp)
0830da44 +0x84:  call   081529b4 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x22e9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x22e9
0830da49 +0x89:  mov    0x10(%ebp),%edx
0830da4c +0x8c:  lea    0x4(%eax),%ebx
0830da4f +0x8f:  mov    $0x15,%eax
0830da54 +0x94:  mov    %edx,%edi
0830da56 +0x96:  mov    %ebx,%esi
0830da58 +0x98:  mov    %eax,%ecx
0830da5a +0x9a:  rep movsl %ds:(%esi),%es:(%edi)
0830da5c +0x9c:  mov    $0x1,%eax
0830da61 +0xa1:  lea    -0xc(%ebp),%esp
0830da64 +0xa4:  add    $0x0,%esp
0830da67 +0xa7:  pop    %ebx
0830da68 +0xa8:  pop    %esi
0830da69 +0xa9:  pop    %edi
0830da6a +0xaa:  pop    %ebp
0830da6b +0xab:  ret
```

## 反编译 C

```c
// CBattle_Field::get_field_item @ 0x830d9c0

/* CBattle_Field::get_field_item(int, map_item&) */

undefined4 __thiscall
CBattle_Field::get_field_item(CBattle_Field *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int local_30 [3];
  int local_24;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
  GetCurrentMapInfo(this);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_30);
  local_24 = local_30[0];
  GetCurrentMapInfo(this);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24,
                     (_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

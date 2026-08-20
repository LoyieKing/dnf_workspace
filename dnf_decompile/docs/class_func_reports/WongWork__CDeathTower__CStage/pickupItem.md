# pickupItem

`_ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item`

`WongWork::CDeathTower::CStage::pickupItem(int, map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x084615e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084615e4  _ZN8WongWork11CDeathTower6CStage10pickupItemEiR8map_item
#           WongWork::CDeathTower::CStage::pickupItem(int, map_item&)
# range [0x084615e4, 0x084616a7]
084615e4 +0x00:  push   %ebp
084615e5 +0x01:  mov    %esp,%ebp
084615e7 +0x03:  push   %edi
084615e8 +0x04:  push   %esi
084615e9 +0x05:  push   %ebx
084615ea +0x06:  sub    $0x2c,%esp
084615ed +0x09:  mov    0x8(%ebp),%eax
084615f0 +0x0c:  lea    0x30(%eax),%ecx
084615f3 +0x0f:  lea    -0x24(%ebp),%eax
084615f6 +0x12:  lea    0xc(%ebp),%edx
084615f9 +0x15:  mov    %edx,0x8(%esp)
084615fd +0x19:  mov    %ecx,0x4(%esp)
08461601 +0x1d:  mov    %eax,(%esp)
08461604 +0x20:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
08461609 +0x25:  sub    $0x4,%esp
0846160c +0x28:  lea    -0x24(%ebp),%eax
0846160f +0x2b:  mov    %eax,0x4(%esp)
08461613 +0x2f:  lea    -0x28(%ebp),%eax
08461616 +0x32:  mov    %eax,(%esp)
08461619 +0x35:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
0846161e +0x3a:  mov    0x8(%ebp),%eax
08461621 +0x3d:  lea    0x30(%eax),%edx
08461624 +0x40:  lea    -0x1c(%ebp),%eax
08461627 +0x43:  mov    %edx,0x4(%esp)
0846162b +0x47:  mov    %eax,(%esp)
0846162e +0x4a:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
08461633 +0x4f:  sub    $0x4,%esp
08461636 +0x52:  lea    -0x1c(%ebp),%eax
08461639 +0x55:  mov    %eax,0x4(%esp)
0846163d +0x59:  lea    -0x20(%ebp),%eax
08461640 +0x5c:  mov    %eax,(%esp)
08461643 +0x5f:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
08461648 +0x64:  lea    -0x20(%ebp),%eax
0846164b +0x67:  mov    %eax,0x4(%esp)
0846164f +0x6b:  lea    -0x28(%ebp),%eax
08461652 +0x6e:  mov    %eax,(%esp)
08461655 +0x71:  call   08469e12 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4f5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4f5
0846165a +0x76:  test   %al,%al
0846165c +0x78:  je     08461665 <+0x81>
0846165e +0x7a:  mov    $0x0,%eax
08461663 +0x7f:  jmp    0846169d <+0xb9>
08461665 +0x81:  lea    -0x28(%ebp),%eax
08461668 +0x84:  mov    %eax,(%esp)
0846166b +0x87:  call   08152fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28fb
08461670 +0x8c:  mov    0x10(%ebp),%edx
08461673 +0x8f:  lea    0x4(%eax),%ebx
08461676 +0x92:  mov    $0x15,%eax
0846167b +0x97:  mov    %edx,%edi
0846167d +0x99:  mov    %ebx,%esi
0846167f +0x9b:  mov    %eax,%ecx
08461681 +0x9d:  rep movsl %ds:(%esi),%es:(%edi)
08461683 +0x9f:  mov    0x8(%ebp),%eax
08461686 +0xa2:  lea    0x30(%eax),%edx
08461689 +0xa5:  lea    0xc(%ebp),%eax
0846168c +0xa8:  mov    %eax,0x4(%esp)
08461690 +0xac:  mov    %edx,(%esp)
08461693 +0xaf:  call   08152c18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x254d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x254d
08461698 +0xb4:  mov    $0x1,%eax
0846169d +0xb9:  lea    -0xc(%ebp),%esp
084616a0 +0xbc:  add    $0x0,%esp
084616a3 +0xbf:  pop    %ebx
084616a4 +0xc0:  pop    %esi
084616a5 +0xc1:  pop    %edi
084616a6 +0xc2:  pop    %ebp
084616a7 +0xc3:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::pickupItem @ 0x84615e4

/* WongWork::CDeathTower::CStage::pickupItem(int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::pickupItem(CStage *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_2c [4];
  _Rb_tree_iterator local_28 [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_item>> local_24 [4];
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            ((int *)local_28);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_2c,local_28);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::_Rb_tree_const_iterator
            (local_24,(_Rb_tree_iterator *)local_20);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator==
                    (local_2c,(_Rb_tree_const_iterator *)local_24);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,map_item>>::operator->(local_2c);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
              ((int *)(this + 0x30));
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

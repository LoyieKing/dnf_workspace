# peekItem

`_ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item`

`WongWork::CDeathTower::CStage::peekItem(int, map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461534` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461534  _ZN8WongWork11CDeathTower6CStage8peekItemEiR8map_item
#           WongWork::CDeathTower::CStage::peekItem(int, map_item&)
# range [0x08461534, 0x084615e3]
08461534 +0x00:  push   %ebp
08461535 +0x01:  mov    %esp,%ebp
08461537 +0x03:  push   %edi
08461538 +0x04:  push   %esi
08461539 +0x05:  push   %ebx
0846153a +0x06:  sub    $0x2c,%esp
0846153d +0x09:  mov    0x8(%ebp),%eax
08461540 +0x0c:  lea    0x30(%eax),%ecx
08461543 +0x0f:  lea    -0x24(%ebp),%eax
08461546 +0x12:  lea    0xc(%ebp),%edx
08461549 +0x15:  mov    %edx,0x8(%esp)
0846154d +0x19:  mov    %ecx,0x4(%esp)
08461551 +0x1d:  mov    %eax,(%esp)
08461554 +0x20:  call   08152532 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e67
08461559 +0x25:  sub    $0x4,%esp
0846155c +0x28:  lea    -0x24(%ebp),%eax
0846155f +0x2b:  mov    %eax,0x4(%esp)
08461563 +0x2f:  lea    -0x28(%ebp),%eax
08461566 +0x32:  mov    %eax,(%esp)
08461569 +0x35:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
0846156e +0x3a:  mov    0x8(%ebp),%eax
08461571 +0x3d:  lea    0x30(%eax),%edx
08461574 +0x40:  lea    -0x1c(%ebp),%eax
08461577 +0x43:  mov    %edx,0x4(%esp)
0846157b +0x47:  mov    %eax,(%esp)
0846157e +0x4a:  call   0815255e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1e93>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1e93
08461583 +0x4f:  sub    $0x4,%esp
08461586 +0x52:  lea    -0x1c(%ebp),%eax
08461589 +0x55:  mov    %eax,0x4(%esp)
0846158d +0x59:  lea    -0x20(%ebp),%eax
08461590 +0x5c:  mov    %eax,(%esp)
08461593 +0x5f:  call   08152fa2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28d7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28d7
08461598 +0x64:  lea    -0x20(%ebp),%eax
0846159b +0x67:  mov    %eax,0x4(%esp)
0846159f +0x6b:  lea    -0x28(%ebp),%eax
084615a2 +0x6e:  mov    %eax,(%esp)
084615a5 +0x71:  call   08469e12 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4f5>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4f5
084615aa +0x76:  test   %al,%al
084615ac +0x78:  je     084615b5 <+0x81>
084615ae +0x7a:  mov    $0x0,%eax
084615b3 +0x7f:  jmp    084615d8 <+0xa4>
084615b5 +0x81:  lea    -0x28(%ebp),%eax
084615b8 +0x84:  mov    %eax,(%esp)
084615bb +0x87:  call   08152fc6 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28fb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28fb
084615c0 +0x8c:  mov    0x10(%ebp),%edx
084615c3 +0x8f:  lea    0x4(%eax),%ebx
084615c6 +0x92:  mov    $0x15,%eax
084615cb +0x97:  mov    %edx,%edi
084615cd +0x99:  mov    %ebx,%esi
084615cf +0x9b:  mov    %eax,%ecx
084615d1 +0x9d:  rep movsl %ds:(%esi),%es:(%edi)
084615d3 +0x9f:  mov    $0x1,%eax
084615d8 +0xa4:  lea    -0xc(%ebp),%esp
084615db +0xa7:  add    $0x0,%esp
084615de +0xaa:  pop    %ebx
084615df +0xab:  pop    %esi
084615e0 +0xac:  pop    %edi
084615e1 +0xad:  pop    %ebp
084615e2 +0xae:  ret
084615e3 +0xaf:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::peekItem @ 0x8461534

/* WongWork::CDeathTower::CStage::peekItem(int, map_item&) */

undefined4 __thiscall
WongWork::CDeathTower::CStage::peekItem(CStage *this,int param_1,map_item *param_2)

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
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

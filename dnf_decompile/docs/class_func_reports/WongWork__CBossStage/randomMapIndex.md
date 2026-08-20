# randomMapIndex

`_ZN8WongWork10CBossStage14randomMapIndexERi`

`WongWork::CBossStage::randomMapIndex(int&)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814f4fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814f4fc  _ZN8WongWork10CBossStage14randomMapIndexERi
#           WongWork::CBossStage::randomMapIndex(int&)
# range [0x0814f4fc, 0x0814f669]
0814f4fc +0x000:  push   %ebp
0814f4fd +0x001:  mov    %esp,%ebp
0814f4ff +0x003:  push   %esi
0814f500 +0x004:  push   %ebx
0814f501 +0x005:  sub    $0x50,%esp
0814f504 +0x008:  movl   $0x0,-0x14(%ebp)
0814f50b +0x00f:  movl   $0x0,-0x10(%ebp)
0814f512 +0x016:  lea    -0x20(%ebp),%eax
0814f515 +0x019:  mov    %eax,(%esp)
0814f518 +0x01c:  call   08152c32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2567>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2567
0814f51d +0x021:  lea    -0x2c(%ebp),%eax
0814f520 +0x024:  mov    %eax,(%esp)
0814f523 +0x027:  call   08152c40 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2575>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2575
0814f528 +0x02c:  mov    0x8(%ebp),%eax
0814f52b +0x02f:  mov    0xae0(%eax),%eax
0814f531 +0x035:  mov    %eax,-0x1c(%ebp)
0814f534 +0x038:  mov    0x8(%ebp),%eax
0814f537 +0x03b:  mov    0x9f0(%eax),%eax
0814f53d +0x041:  mov    %eax,(%esp)
0814f540 +0x044:  call   08150920 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x255>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x255
0814f545 +0x049:  lea    -0x3c(%ebp),%edx
0814f548 +0x04c:  lea    -0x1c(%ebp),%ecx
0814f54b +0x04f:  mov    %ecx,0x8(%esp)
0814f54f +0x053:  mov    %eax,0x4(%esp)
0814f553 +0x057:  mov    %edx,(%esp)
0814f556 +0x05a:  call   08152cb2 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x25e7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x25e7
0814f55b +0x05f:  sub    $0x4,%esp
0814f55e +0x062:  mov    -0x3c(%ebp),%eax
0814f561 +0x065:  mov    %eax,-0x20(%ebp)
0814f564 +0x068:  mov    0x8(%ebp),%eax
0814f567 +0x06b:  mov    0x9f0(%eax),%eax
0814f56d +0x071:  mov    %eax,(%esp)
0814f570 +0x074:  call   08150920 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x255>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x255
0814f575 +0x079:  lea    -0x18(%ebp),%edx
0814f578 +0x07c:  mov    %eax,0x4(%esp)
0814f57c +0x080:  mov    %edx,(%esp)
0814f57f +0x083:  call   08152cde <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2613>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2613
0814f584 +0x088:  sub    $0x4,%esp
0814f587 +0x08b:  lea    -0x18(%ebp),%eax
0814f58a +0x08e:  mov    %eax,0x4(%esp)
0814f58e +0x092:  lea    -0x20(%ebp),%eax
0814f591 +0x095:  mov    %eax,(%esp)
0814f594 +0x098:  call   08152d04 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2639>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2639
0814f599 +0x09d:  test   %al,%al
0814f59b +0x09f:  je     0814f5a7 <+0xab>
0814f59d +0x0a1:  mov    $0x0,%ebx
0814f5a2 +0x0a6:  jmp    0814f652 <+0x156>
0814f5a7 +0x0ab:  lea    -0x20(%ebp),%eax
0814f5aa +0x0ae:  mov    %eax,(%esp)
0814f5ad +0x0b1:  call   08152d18 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x264d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x264d
0814f5b2 +0x0b6:  add    $0x4,%eax
0814f5b5 +0x0b9:  mov    %eax,0x4(%esp)
0814f5b9 +0x0bd:  lea    -0x2c(%ebp),%eax
0814f5bc +0x0c0:  mov    %eax,(%esp)
0814f5bf +0x0c3:  call   08152d26 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x265b>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x265b
0814f5c4 +0x0c8:  movl   $0x2710,(%esp)
0814f5cb +0x0cf:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0814f5d0 +0x0d4:  mov    %eax,-0x10(%ebp)
0814f5d3 +0x0d7:  movl   $0x0,-0xc(%ebp)
0814f5da +0x0de:  jmp    0814f61b <+0x11f>
0814f5dc +0x0e0:  mov    -0xc(%ebp),%eax
0814f5df +0x0e3:  mov    %eax,0x4(%esp)
0814f5e3 +0x0e7:  lea    -0x2c(%ebp),%eax
0814f5e6 +0x0ea:  mov    %eax,(%esp)
0814f5e9 +0x0ed:  call   08152f90 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28c5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28c5
0814f5ee +0x0f2:  mov    0x4(%eax),%eax
0814f5f1 +0x0f5:  add    %eax,-0x14(%ebp)
0814f5f4 +0x0f8:  mov    -0x10(%ebp),%eax
0814f5f7 +0x0fb:  cmp    -0x14(%ebp),%eax
0814f5fa +0x0fe:  jge    0814f617 <+0x11b>
0814f5fc +0x100:  mov    -0xc(%ebp),%eax
0814f5ff +0x103:  mov    %eax,0x4(%esp)
0814f603 +0x107:  lea    -0x2c(%ebp),%eax
0814f606 +0x10a:  mov    %eax,(%esp)
0814f609 +0x10d:  call   08152f90 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28c5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28c5
0814f60e +0x112:  mov    (%eax),%edx
0814f610 +0x114:  mov    0xc(%ebp),%eax
0814f613 +0x117:  mov    %edx,(%eax)
0814f615 +0x119:  jmp    0814f630 <+0x134>
0814f617 +0x11b:  addl   $0x1,-0xc(%ebp)
0814f61b +0x11f:  lea    -0x2c(%ebp),%eax
0814f61e +0x122:  mov    %eax,(%esp)
0814f621 +0x125:  call   08152f74 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x28a9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x28a9
0814f626 +0x12a:  cmp    -0xc(%ebp),%eax
0814f629 +0x12d:  seta   %al
0814f62c +0x130:  test   %al,%al
0814f62e +0x132:  jne    0814f5dc <+0xe0>
0814f630 +0x134:  mov    $0x1,%ebx
0814f635 +0x139:  jmp    0814f652 <+0x156>
0814f637 +0x13b:  mov    %edx,%ebx
0814f639 +0x13d:  mov    %eax,%esi
0814f63b +0x13f:  lea    -0x2c(%ebp),%eax
0814f63e +0x142:  mov    %eax,(%esp)
0814f641 +0x145:  call   08152c54 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2589>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2589
0814f646 +0x14a:  mov    %esi,%eax
0814f648 +0x14c:  mov    %ebx,%edx
0814f64a +0x14e:  mov    %eax,(%esp)
0814f64d +0x151:  call   08ae3750 <_Unwind_Resume>
0814f652 +0x156:  lea    -0x2c(%ebp),%eax
0814f655 +0x159:  mov    %eax,(%esp)
0814f658 +0x15c:  call   08152c54 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2589>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2589
0814f65d +0x161:  mov    %ebx,%eax
0814f65f +0x163:  lea    -0x8(%ebp),%esp
0814f662 +0x166:  add    $0x0,%esp
0814f665 +0x169:  pop    %ebx
0814f666 +0x16a:  pop    %esi
0814f667 +0x16b:  pop    %ebp
0814f668 +0x16c:  ret
0814f669 +0x16d:  nop
```

## 反编译 C

```c
// WongWork::CBossStage::randomMapIndex @ 0x814f4fc

/* WongWork::CBossStage::randomMapIndex(int&) */

undefined4 __thiscall WongWork::CBossStage::randomMapIndex(CBossStage *this,int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_40 [4];
  vector<RandomList,std::allocator<RandomList>> local_30 [12];
  int local_24;
  undefined4 local_20;
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  local_1c [4];
  int local_18;
  int local_14;
  uint local_10;
  
  local_18 = 0;
  local_14 = 0;
  std::
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>::
  _Rb_tree_const_iterator
            ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
              *)&local_24);
  std::vector<RandomList,std::allocator<RandomList>>::vector(local_30);
  local_20 = *(undefined4 *)(this + 0xae0);
  CDungeon::getRandomTowerMapIndexes(*(CDungeon **)(this + 0x9f0));
                    /* try { // try from 0814f556 to 0814f5cf has its CatchHandler @ 0814f637 */
  std::
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  ::find(local_40);
  local_24 = local_40[0];
  CDungeon::getRandomTowerMapIndexes(*(CDungeon **)(this + 0x9f0));
  std::
  map<int,std::vector<RandomList,std::allocator<RandomList>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
          ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                        *)&local_24,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<RandomList,std::allocator<RandomList>>>>
                          *)&local_24);
    std::vector<RandomList,std::allocator<RandomList>>::operator=(local_30,(vector *)(iVar2 + 4));
    local_14 = get_rand_int(10000);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<RandomList,std::allocator<RandomList>>::size(local_30);
      if (uVar4 <= local_10) break;
      iVar2 = std::vector<RandomList,std::allocator<RandomList>>::operator[](local_30,local_10);
      local_18 = local_18 + *(int *)(iVar2 + 4);
      if (local_14 < local_18) {
        piVar3 = (int *)std::vector<RandomList,std::allocator<RandomList>>::operator[]
                                  (local_30,local_10);
        *param_1 = *piVar3;
        break;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  std::vector<RandomList,std::allocator<RandomList>>::~vector(local_30);
  return uVar5;
}
```

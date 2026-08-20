# get_amplify_reinforce_count

`_ZN14CStackableItem27get_amplify_reinforce_countEi`

`CStackableItem::get_amplify_reinforce_count(int)`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x08513444` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08513444  _ZN14CStackableItem27get_amplify_reinforce_countEi
#           CStackableItem::get_amplify_reinforce_count(int)
# range [0x08513444, 0x08513521]
08513444 +0x00:  push   %ebp
08513445 +0x01:  mov    %esp,%ebp
08513447 +0x03:  sub    $0x38,%esp
0851344a +0x06:  mov    0x8(%ebp),%eax
0851344d +0x09:  lea    0x348(%eax),%edx
08513453 +0x0f:  lea    -0x18(%ebp),%eax
08513456 +0x12:  mov    %edx,0x4(%esp)
0851345a +0x16:  mov    %eax,(%esp)
0851345d +0x19:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
08513462 +0x1e:  sub    $0x4,%esp
08513465 +0x21:  mov    0x8(%ebp),%eax
08513468 +0x24:  lea    0x348(%eax),%edx
0851346e +0x2a:  lea    -0x1c(%ebp),%eax
08513471 +0x2d:  mov    %edx,0x4(%esp)
08513475 +0x31:  mov    %eax,(%esp)
08513478 +0x34:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0851347d +0x39:  sub    $0x4,%esp
08513480 +0x3c:  movl   $0x0,-0x14(%ebp)
08513487 +0x43:  movl   $0x0,-0x10(%ebp)
0851348e +0x4a:  movl   $0x0,-0xc(%ebp)
08513495 +0x51:  jmp    08513503 <+0xbf>
08513497 +0x53:  lea    -0x18(%ebp),%eax
0851349a +0x56:  mov    %eax,(%esp)
0851349d +0x59:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085134a2 +0x5e:  mov    0x4(%eax),%eax
085134a5 +0x61:  add    %eax,-0x14(%ebp)
085134a8 +0x64:  mov    0xc(%ebp),%eax
085134ab +0x67:  cmp    -0x14(%ebp),%eax
085134ae +0x6a:  jge    085134bf <+0x7b>
085134b0 +0x6c:  lea    -0x18(%ebp),%eax
085134b3 +0x6f:  mov    %eax,(%esp)
085134b6 +0x72:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085134bb +0x77:  mov    (%eax),%eax
085134bd +0x79:  jmp    08513520 <+0xdc>
085134bf +0x7b:  lea    -0x18(%ebp),%eax
085134c2 +0x7e:  mov    %eax,(%esp)
085134c5 +0x81:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085134ca +0x86:  mov    0x4(%eax),%eax
085134cd +0x89:  cmp    -0xc(%ebp),%eax
085134d0 +0x8c:  setg   %al
085134d3 +0x8f:  test   %al,%al
085134d5 +0x91:  je     085134f8 <+0xb4>
085134d7 +0x93:  lea    -0x18(%ebp),%eax
085134da +0x96:  mov    %eax,(%esp)
085134dd +0x99:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085134e2 +0x9e:  mov    0x4(%eax),%eax
085134e5 +0xa1:  mov    %eax,-0xc(%ebp)
085134e8 +0xa4:  lea    -0x18(%ebp),%eax
085134eb +0xa7:  mov    %eax,(%esp)
085134ee +0xaa:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
085134f3 +0xaf:  mov    (%eax),%eax
085134f5 +0xb1:  mov    %eax,-0x10(%ebp)
085134f8 +0xb4:  lea    -0x18(%ebp),%eax
085134fb +0xb7:  mov    %eax,(%esp)
085134fe +0xba:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
08513503 +0xbf:  lea    -0x1c(%ebp),%eax
08513506 +0xc2:  mov    %eax,0x4(%esp)
0851350a +0xc6:  lea    -0x18(%ebp),%eax
0851350d +0xc9:  mov    %eax,(%esp)
08513510 +0xcc:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08513515 +0xd1:  test   %al,%al
08513517 +0xd3:  jne    08513497 <+0x53>
0851351d +0xd9:  mov    -0x10(%ebp),%eax
08513520 +0xdc:  leave
08513521 +0xdd:  ret
```

## 反编译 C

```c
// CStackableItem::get_amplify_reinforce_count @ 0x8513444

/* CStackableItem::get_amplify_reinforce_count(int) */

undefined4 __thiscall CStackableItem::get_amplify_reinforce_count(CStackableItem *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_20 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_1c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_20);
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') {
      return local_14;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    local_18 = local_18 + *(int *)(iVar2 + 4);
    if (param_1 < local_18) break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
    if (local_10 < *(int *)(iVar2 + 4)) {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_10 = *(int *)(iVar2 + 4);
      puVar3 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
      local_14 = *puVar3;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
  }
  puVar3 = (undefined4 *)
           std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                     ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_1c);
  return *puVar3;
}
```

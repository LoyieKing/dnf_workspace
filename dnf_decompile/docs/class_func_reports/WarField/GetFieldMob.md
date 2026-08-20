# GetFieldMob

`_ZN8WarField11GetFieldMobEiR11map_monster`

`WarField::GetFieldMob(int, map_monster&)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086b9578` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b9578  _ZN8WarField11GetFieldMobEiR11map_monster
#           WarField::GetFieldMob(int, map_monster&)
# range [0x086b9578, 0x086b9671]
086b9578 +0x00:  push   %ebp
086b9579 +0x01:  mov    %esp,%ebp
086b957b +0x03:  push   %esi
086b957c +0x04:  push   %ebx
086b957d +0x05:  sub    $0x380,%esp
086b9583 +0x0b:  lea    -0x35c(%ebp),%eax
086b9589 +0x11:  mov    %eax,(%esp)
086b958c +0x14:  call   0815244c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d81
086b9591 +0x19:  mov    0x8(%ebp),%eax
086b9594 +0x1c:  lea    0x14(%eax),%ecx
086b9597 +0x1f:  lea    -0x36c(%ebp),%eax
086b959d +0x25:  lea    0xc(%ebp),%edx
086b95a0 +0x28:  mov    %edx,0x8(%esp)
086b95a4 +0x2c:  mov    %ecx,0x4(%esp)
086b95a8 +0x30:  mov    %eax,(%esp)
086b95ab +0x33:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
086b95b0 +0x38:  sub    $0x4,%esp
086b95b3 +0x3b:  mov    -0x36c(%ebp),%eax
086b95b9 +0x41:  mov    %eax,-0x35c(%ebp)
086b95bf +0x47:  mov    0x8(%ebp),%eax
086b95c2 +0x4a:  lea    0x14(%eax),%edx
086b95c5 +0x4d:  lea    -0x358(%ebp),%eax
086b95cb +0x53:  mov    %edx,0x4(%esp)
086b95cf +0x57:  mov    %eax,(%esp)
086b95d2 +0x5a:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
086b95d7 +0x5f:  sub    $0x4,%esp
086b95da +0x62:  lea    -0x358(%ebp),%eax
086b95e0 +0x68:  mov    %eax,0x4(%esp)
086b95e4 +0x6c:  lea    -0x35c(%ebp),%eax
086b95ea +0x72:  mov    %eax,(%esp)
086b95ed +0x75:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
086b95f2 +0x7a:  test   %al,%al
086b95f4 +0x7c:  je     086b95fd <+0x85>
086b95f6 +0x7e:  mov    $0x0,%eax
086b95fb +0x83:  jmp    086b9668 <+0xf0>
086b95fd +0x85:  lea    -0x35c(%ebp),%eax
086b9603 +0x8b:  mov    %eax,(%esp)
086b9606 +0x8e:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
086b960b +0x93:  add    $0x4,%eax
086b960e +0x96:  mov    %eax,0x4(%esp)
086b9612 +0x9a:  lea    -0x354(%ebp),%eax
086b9618 +0xa0:  mov    %eax,(%esp)
086b961b +0xa3:  call   08151aea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x141f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x141f
086b9620 +0xa8:  lea    -0x354(%ebp),%eax
086b9626 +0xae:  mov    %eax,0x4(%esp)
086b962a +0xb2:  mov    0x10(%ebp),%eax
086b962d +0xb5:  mov    %eax,(%esp)
086b9630 +0xb8:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
086b9635 +0xbd:  jmp    086b9655 <+0xdd>
086b9637 +0xbf:  mov    %edx,%ebx
086b9639 +0xc1:  mov    %eax,%esi
086b963b +0xc3:  lea    -0x354(%ebp),%eax
086b9641 +0xc9:  mov    %eax,(%esp)
086b9644 +0xcc:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b9649 +0xd1:  mov    %esi,%eax
086b964b +0xd3:  mov    %ebx,%edx
086b964d +0xd5:  mov    %eax,(%esp)
086b9650 +0xd8:  call   08ae3750 <_Unwind_Resume>
086b9655 +0xdd:  lea    -0x354(%ebp),%eax
086b965b +0xe3:  mov    %eax,(%esp)
086b965e +0xe6:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
086b9663 +0xeb:  mov    $0x1,%eax
086b9668 +0xf0:  lea    -0x8(%ebp),%esp
086b966b +0xf3:  add    $0x0,%esp
086b966e +0xf6:  pop    %ebx
086b966f +0xf7:  pop    %esi
086b9670 +0xf8:  pop    %ebp
086b9671 +0xf9:  ret
```

## 反编译 C

```c
// WarField::GetFieldMob @ 0x86b9578

/* WarField::GetFieldMob(int, map_monster&) */

bool __thiscall WarField::GetFieldMob(WarField *this,int param_1,map_monster *param_2)

{
  char cVar1;
  int iVar2;
  int local_370 [4];
  int local_360;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_35c [4]
  ;
  map_monster local_358 [844];
  
  std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (local_370);
  local_360 = local_370[0];
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_35c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360,
                     (_Rb_tree_iterator *)local_35c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
    map_monster::map_monster(local_358,(map_monster *)(iVar2 + 4));
                    /* try { // try from 086b9630 to 086b9634 has its CatchHandler @ 086b9637 */
    map_monster::operator=(param_2,local_358);
    map_monster::~map_monster(local_358);
  }
  return cVar1 == '\0';
}
```

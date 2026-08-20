# checkClearStage

`_ZN8WongWork11CDeathTower6CStage15checkClearStageEv`

`WongWork::CDeathTower::CStage::checkClearStage()`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461b3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461b3e  _ZN8WongWork11CDeathTower6CStage15checkClearStageEv
#           WongWork::CDeathTower::CStage::checkClearStage()
# range [0x08461b3e, 0x08461c25]
08461b3e +0x00:  push   %ebp
08461b3f +0x01:  mov    %esp,%ebp
08461b41 +0x03:  push   %esi
08461b42 +0x04:  push   %ebx
08461b43 +0x05:  sub    $0x370,%esp
08461b49 +0x0b:  lea    -0x35c(%ebp),%eax
08461b4f +0x11:  mov    %eax,(%esp)
08461b52 +0x14:  call   081511c8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xafd>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xafd
08461b57 +0x19:  mov    0x8(%ebp),%eax
08461b5a +0x1c:  lea    0x18(%eax),%edx
08461b5d +0x1f:  lea    -0x10(%ebp),%eax
08461b60 +0x22:  mov    %edx,0x4(%esp)
08461b64 +0x26:  mov    %eax,(%esp)
08461b67 +0x29:  call   08152608 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f3d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f3d
08461b6c +0x2e:  sub    $0x4,%esp
08461b6f +0x31:  jmp    08461bb9 <+0x7b>
08461b71 +0x33:  lea    -0x10(%ebp),%eax
08461b74 +0x36:  mov    %eax,(%esp)
08461b77 +0x39:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
08461b7c +0x3e:  add    $0x4,%eax
08461b7f +0x41:  mov    %eax,0x4(%esp)
08461b83 +0x45:  lea    -0x35c(%ebp),%eax
08461b89 +0x4b:  mov    %eax,(%esp)
08461b8c +0x4e:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
08461b91 +0x53:  mov    -0x330(%ebp),%eax
08461b97 +0x59:  cmp    $0x64,%eax
08461b9a +0x5c:  jne    08461bae <+0x70>
08461b9c +0x5e:  movzbl -0x349(%ebp),%eax
08461ba3 +0x65:  test   %al,%al
08461ba5 +0x67:  jne    08461bae <+0x70>
08461ba7 +0x69:  mov    $0x0,%ebx
08461bac +0x6e:  jmp    08461c0c <+0xce>
08461bae +0x70:  lea    -0x10(%ebp),%eax
08461bb1 +0x73:  mov    %eax,(%esp)
08461bb4 +0x76:  call   0815262e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f63>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f63
08461bb9 +0x7b:  mov    0x8(%ebp),%eax
08461bbc +0x7e:  lea    0x18(%eax),%edx
08461bbf +0x81:  lea    -0xc(%ebp),%eax
08461bc2 +0x84:  mov    %edx,0x4(%esp)
08461bc6 +0x88:  mov    %eax,(%esp)
08461bc9 +0x8b:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
08461bce +0x90:  sub    $0x4,%esp
08461bd1 +0x93:  lea    -0xc(%ebp),%eax
08461bd4 +0x96:  mov    %eax,0x4(%esp)
08461bd8 +0x9a:  lea    -0x10(%ebp),%eax
08461bdb +0x9d:  mov    %eax,(%esp)
08461bde +0xa0:  call   081524ac <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1de1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1de1
08461be3 +0xa5:  test   %al,%al
08461be5 +0xa7:  jne    08461b71 <+0x33>
08461be7 +0xa9:  mov    $0x1,%ebx
08461bec +0xae:  jmp    08461c0c <+0xce>
08461bee +0xb0:  mov    %edx,%ebx
08461bf0 +0xb2:  mov    %eax,%esi
08461bf2 +0xb4:  lea    -0x35c(%ebp),%eax
08461bf8 +0xba:  mov    %eax,(%esp)
08461bfb +0xbd:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08461c00 +0xc2:  mov    %esi,%eax
08461c02 +0xc4:  mov    %ebx,%edx
08461c04 +0xc6:  mov    %eax,(%esp)
08461c07 +0xc9:  call   08ae3750 <_Unwind_Resume>
08461c0c +0xce:  lea    -0x35c(%ebp),%eax
08461c12 +0xd4:  mov    %eax,(%esp)
08461c15 +0xd7:  call   081515ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xee3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xee3
08461c1a +0xdc:  mov    %ebx,%eax
08461c1c +0xde:  lea    -0x8(%ebp),%esp
08461c1f +0xe1:  add    $0x0,%esp
08461c22 +0xe4:  pop    %ebx
08461c23 +0xe5:  pop    %esi
08461c24 +0xe6:  pop    %ebp
08461c25 +0xe7:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::checkClearStage @ 0x8461b3e

/* WongWork::CDeathTower::CStage::checkClearStage() */

undefined4 WongWork::CDeathTower::CStage::checkClearStage(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  map_monster local_360 [19];
  char local_34d;
  int local_334;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_10 [4];
  
  map_monster::map_monster(local_360);
                    /* try { // try from 08461b67 to 08461bcd has its CatchHandler @ 08461bee */
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
            (local_14);
  do {
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      uVar3 = 1;
LAB_08461c0c:
      map_monster::~map_monster(local_360);
      return uVar3;
    }
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14);
    map_monster::operator=(local_360,(map_monster *)(iVar2 + 4));
    if ((local_334 == 100) && (local_34d == '\0')) {
      uVar3 = 0;
      goto LAB_08461c0c;
    }
    std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_14);
  } while( true );
}
```

# killMonster

`_ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster`

`WongWork::CDeathTower::CStage::killMonster(int, map_monster&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461708` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461708  _ZN8WongWork11CDeathTower6CStage11killMonsterEiR11map_monster
#           WongWork::CDeathTower::CStage::killMonster(int, map_monster&)
# range [0x08461708, 0x084617d9]
08461708 +0x00:  push   %ebp
08461709 +0x01:  mov    %esp,%ebp
0846170b +0x03:  sub    $0x38,%esp
0846170e +0x06:  movl   $0x0,-0xc(%ebp)
08461715 +0x0d:  mov    0x8(%ebp),%eax
08461718 +0x10:  lea    0x18(%eax),%ecx
0846171b +0x13:  lea    -0x18(%ebp),%eax
0846171e +0x16:  lea    0xc(%ebp),%edx
08461721 +0x19:  mov    %edx,0x8(%esp)
08461725 +0x1d:  mov    %ecx,0x4(%esp)
08461729 +0x21:  mov    %eax,(%esp)
0846172c +0x24:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
08461731 +0x29:  sub    $0x4,%esp
08461734 +0x2c:  lea    -0x18(%ebp),%eax
08461737 +0x2f:  mov    %eax,0x4(%esp)
0846173b +0x33:  lea    -0x1c(%ebp),%eax
0846173e +0x36:  mov    %eax,(%esp)
08461741 +0x39:  call   081529e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2315>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2315
08461746 +0x3e:  mov    0x8(%ebp),%eax
08461749 +0x41:  lea    0x18(%eax),%edx
0846174c +0x44:  lea    -0x10(%ebp),%eax
0846174f +0x47:  mov    %edx,0x4(%esp)
08461753 +0x4b:  mov    %eax,(%esp)
08461756 +0x4e:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
0846175b +0x53:  sub    $0x4,%esp
0846175e +0x56:  lea    -0x10(%ebp),%eax
08461761 +0x59:  mov    %eax,0x4(%esp)
08461765 +0x5d:  lea    -0x14(%ebp),%eax
08461768 +0x60:  mov    %eax,(%esp)
0846176b +0x63:  call   081529e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2315>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2315
08461770 +0x68:  lea    -0x14(%ebp),%eax
08461773 +0x6b:  mov    %eax,0x4(%esp)
08461777 +0x6f:  lea    -0x1c(%ebp),%eax
0846177a +0x72:  mov    %eax,(%esp)
0846177d +0x75:  call   08469e26 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x509>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x509
08461782 +0x7a:  test   %al,%al
08461784 +0x7c:  je     0846178d <+0x85>
08461786 +0x7e:  mov    $0x0,%eax
0846178b +0x83:  jmp    084617d7 <+0xcf>
0846178d +0x85:  lea    -0x1c(%ebp),%eax
08461790 +0x88:  mov    %eax,(%esp)
08461793 +0x8b:  call   08152a04 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2339>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2339
08461798 +0x90:  add    $0x4,%eax
0846179b +0x93:  mov    %eax,0x4(%esp)
0846179f +0x97:  mov    0x10(%ebp),%eax
084617a2 +0x9a:  mov    %eax,(%esp)
084617a5 +0x9d:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
084617aa +0xa2:  lea    -0x1c(%ebp),%eax
084617ad +0xa5:  mov    %eax,(%esp)
084617b0 +0xa8:  call   08152a04 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2339>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2339
084617b5 +0xad:  movzbl 0x14(%eax),%eax
084617b9 +0xb1:  movzbl %al,%eax
084617bc +0xb4:  mov    %eax,-0xc(%ebp)
084617bf +0xb7:  mov    0x8(%ebp),%eax
084617c2 +0xba:  lea    0x18(%eax),%edx
084617c5 +0xbd:  lea    0xc(%ebp),%eax
084617c8 +0xc0:  mov    %eax,0x4(%esp)
084617cc +0xc4:  mov    %edx,(%esp)
084617cf +0xc7:  call   08152a12 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2347>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2347
084617d4 +0xcc:  mov    -0xc(%ebp),%eax
084617d7 +0xcf:  leave
084617d8 +0xd0:  ret
084617d9 +0xd1:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::killMonster @ 0x8461708

/* WongWork::CDeathTower::CStage::killMonster(int, map_monster&) */

uint __thiscall
WongWork::CDeathTower::CStage::killMonster(CStage *this,int param_1,map_monster *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,map_monster>> local_18 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_14 [4];
  uint local_10;
  
  local_10 = 0;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_1c);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_20,local_1c);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_14);
  std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::_Rb_tree_const_iterator
            (local_18,(_Rb_tree_iterator *)local_14);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_20);
    map_monster::operator=(param_2,(map_monster *)(iVar2 + 4));
    iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,map_monster>>::operator->(local_20);
    local_10 = (uint)*(byte *)(iVar2 + 0x14);
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::erase
              ((int *)(this + 0x18));
  }
  else {
    local_10 = 0;
  }
  return local_10;
}
```

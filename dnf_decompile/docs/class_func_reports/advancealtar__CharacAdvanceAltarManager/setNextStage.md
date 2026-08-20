# setNextStage

`_ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi`

`advancealtar::CharacAdvanceAltarManager::setNextStage(int)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081331d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081331d4  _ZN12advancealtar25CharacAdvanceAltarManager12setNextStageEi
#           advancealtar::CharacAdvanceAltarManager::setNextStage(int)
# range [0x081331d4, 0x081333b1]
081331d4 +0x000:  push   %ebp
081331d5 +0x001:  mov    %esp,%ebp
081331d7 +0x003:  sub    $0x88,%esp
081331dd +0x009:  mov    0x8(%ebp),%eax
081331e0 +0x00c:  mov    (%eax),%eax
081331e2 +0x00e:  test   %eax,%eax
081331e4 +0x010:  je     081333af <+0x1db>
081331ea +0x016:  cmpl   $0x0,0xc(%ebp)
081331ee +0x01a:  jne    0813326b <+0x97>
081331f0 +0x01c:  lea    -0x5c(%ebp),%eax
081331f3 +0x01f:  mov    %eax,(%esp)
081331f6 +0x022:  call   08134452 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x59
081331fb +0x027:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08133200 +0x02c:  add    $0x8798,%eax
08133205 +0x031:  mov    %eax,(%esp)
08133208 +0x034:  call   081347c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3c7
0813320d +0x039:  mov    %eax,-0x5c(%ebp)
08133210 +0x03c:  movl   $0xffffffff,-0x58(%ebp)
08133217 +0x043:  lea    -0x40(%ebp),%eax
0813321a +0x046:  lea    -0x5c(%ebp),%edx
0813321d +0x049:  mov    %edx,0x8(%esp)
08133221 +0x04d:  lea    -0x5c(%ebp),%edx
08133224 +0x050:  mov    %edx,0x4(%esp)
08133228 +0x054:  mov    %eax,(%esp)
0813322b +0x057:  call   0813666c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2273>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2273
08133230 +0x05c:  sub    $0x4,%esp
08133233 +0x05f:  lea    -0x40(%ebp),%eax
08133236 +0x062:  mov    %eax,0x4(%esp)
0813323a +0x066:  lea    -0x4c(%ebp),%eax
0813323d +0x069:  mov    %eax,(%esp)
08133240 +0x06c:  call   081366aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22b1
08133245 +0x071:  mov    0x8(%ebp),%eax
08133248 +0x074:  mov    (%eax),%eax
0813324a +0x076:  lea    0x24(%eax),%ecx
0813324d +0x079:  lea    -0x54(%ebp),%eax
08133250 +0x07c:  lea    -0x4c(%ebp),%edx
08133253 +0x07f:  mov    %edx,0x8(%esp)
08133257 +0x083:  mov    %ecx,0x4(%esp)
0813325b +0x087:  mov    %eax,(%esp)
0813325e +0x08a:  call   081366e0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22e7
08133263 +0x08f:  sub    $0x4,%esp
08133266 +0x092:  jmp    081333b0 <+0x1dc>
0813326b +0x097:  movb   $0x0,-0x5d(%ebp)
0813326f +0x09b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08133274 +0x0a0:  lea    0x8798(%eax),%edx
0813327a +0x0a6:  lea    -0x5d(%ebp),%eax
0813327d +0x0a9:  mov    %eax,0x8(%esp)
08133281 +0x0ad:  mov    0xc(%ebp),%eax
08133284 +0x0b0:  mov    %eax,0x4(%esp)
08133288 +0x0b4:  mov    %edx,(%esp)
0813328b +0x0b7:  call   08364e58 <_ZNK12StageMapList12getNextStageEiRb>  ; StageMapList::getNextStage(int, bool&) const
08133290 +0x0bc:  mov    %eax,-0x64(%ebp)
08133293 +0x0bf:  mov    -0x64(%ebp),%eax
08133296 +0x0c2:  test   %eax,%eax
08133298 +0x0c4:  je     081333b0 <+0x1dc>
0813329e +0x0ca:  mov    0x8(%ebp),%eax
081332a1 +0x0cd:  mov    (%eax),%eax
081332a3 +0x0cf:  lea    0x24(%eax),%ecx
081332a6 +0x0d2:  lea    -0x34(%ebp),%eax
081332a9 +0x0d5:  lea    -0x64(%ebp),%edx
081332ac +0x0d8:  mov    %edx,0x8(%esp)
081332b0 +0x0dc:  mov    %ecx,0x4(%esp)
081332b4 +0x0e0:  mov    %eax,(%esp)
081332b7 +0x0e3:  call   08135e2c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a33>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a33
081332bc +0x0e8:  sub    $0x4,%esp
081332bf +0x0eb:  lea    -0x34(%ebp),%eax
081332c2 +0x0ee:  mov    %eax,0x4(%esp)
081332c6 +0x0f2:  lea    -0x68(%ebp),%eax
081332c9 +0x0f5:  mov    %eax,(%esp)
081332cc +0x0f8:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
081332d1 +0x0fd:  mov    0x8(%ebp),%eax
081332d4 +0x100:  mov    (%eax),%eax
081332d6 +0x102:  lea    0x24(%eax),%edx
081332d9 +0x105:  lea    -0x2c(%ebp),%eax
081332dc +0x108:  mov    %edx,0x4(%esp)
081332e0 +0x10c:  mov    %eax,(%esp)
081332e3 +0x10f:  call   08135e68 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a6f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a6f
081332e8 +0x114:  sub    $0x4,%esp
081332eb +0x117:  lea    -0x2c(%ebp),%eax
081332ee +0x11a:  mov    %eax,0x4(%esp)
081332f2 +0x11e:  lea    -0x30(%ebp),%eax
081332f5 +0x121:  mov    %eax,(%esp)
081332f8 +0x124:  call   08135e58 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a5f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a5f
081332fd +0x129:  lea    -0x30(%ebp),%eax
08133300 +0x12c:  mov    %eax,0x4(%esp)
08133304 +0x130:  lea    -0x68(%ebp),%eax
08133307 +0x133:  mov    %eax,(%esp)
0813330a +0x136:  call   08135e8e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1a95>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1a95
0813330f +0x13b:  test   %al,%al
08133311 +0x13d:  je     081333b0 <+0x1dc>
08133317 +0x143:  mov    0x8(%ebp),%eax
0813331a +0x146:  mov    (%eax),%eax
0813331c +0x148:  movb   $0x1,0x20(%eax)
08133320 +0x14c:  lea    -0x70(%ebp),%eax
08133323 +0x14f:  mov    %eax,(%esp)
08133326 +0x152:  call   08134452 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x59
0813332b +0x157:  mov    -0x64(%ebp),%eax
0813332e +0x15a:  mov    %eax,-0x70(%ebp)
08133331 +0x15d:  movl   $0xffffffff,-0x6c(%ebp)
08133338 +0x164:  lea    -0x14(%ebp),%eax
0813333b +0x167:  lea    -0x70(%ebp),%edx
0813333e +0x16a:  mov    %edx,0x8(%esp)
08133342 +0x16e:  lea    -0x70(%ebp),%edx
08133345 +0x171:  mov    %edx,0x4(%esp)
08133349 +0x175:  mov    %eax,(%esp)
0813334c +0x178:  call   0813666c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2273>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2273
08133351 +0x17d:  sub    $0x4,%esp
08133354 +0x180:  lea    -0x14(%ebp),%eax
08133357 +0x183:  mov    %eax,0x4(%esp)
0813335b +0x187:  lea    -0x20(%ebp),%eax
0813335e +0x18a:  mov    %eax,(%esp)
08133361 +0x18d:  call   081366aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22b1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22b1
08133366 +0x192:  mov    0x8(%ebp),%eax
08133369 +0x195:  mov    (%eax),%eax
0813336b +0x197:  lea    0x24(%eax),%ecx
0813336e +0x19a:  lea    -0x28(%ebp),%eax
08133371 +0x19d:  lea    -0x20(%ebp),%edx
08133374 +0x1a0:  mov    %edx,0x8(%esp)
08133378 +0x1a4:  mov    %ecx,0x4(%esp)
0813337c +0x1a8:  mov    %eax,(%esp)
0813337f +0x1ab:  call   081366e0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x22e7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x22e7
08133384 +0x1b0:  sub    $0x4,%esp
08133387 +0x1b3:  mov    0x8(%ebp),%eax
0813338a +0x1b6:  mov    (%eax),%eax
0813338c +0x1b8:  movb   $0x1,0xcc(%eax)
08133393 +0x1bf:  movzbl -0x5d(%ebp),%eax
08133397 +0x1c3:  test   %al,%al
08133399 +0x1c5:  je     081333b0 <+0x1dc>
0813339b +0x1c7:  mov    -0x64(%ebp),%eax
0813339e +0x1ca:  mov    %eax,0x4(%esp)
081333a2 +0x1ce:  mov    0x8(%ebp),%eax
081333a5 +0x1d1:  mov    %eax,(%esp)
081333a8 +0x1d4:  call   081331d4 <+0x0>
081333ad +0x1d9:  jmp    081333b0 <+0x1dc>
081333af +0x1db:  nop
081333b0 +0x1dc:  leave
081333b1 +0x1dd:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setNextStage @ 0x81331d4

/* advancealtar::CharacAdvanceAltarManager::setNextStage(int) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setNextStage(CharacAdvanceAltarManager *this,int param_1)

{
  char cVar1;
  int iVar2;
  int local_74 [2];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_6c [4];
  int local_68;
  bool local_61;
  undefined4 local_60;
  undefined4 local_5c;
  pair local_58 [8];
  pair<int_const,advancealtar::_Stage> local_50 [12];
  int local_44 [3];
  _Rb_tree_iterator local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>> local_34 [4];
  map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
  local_30 [4];
  pair local_2c [8];
  pair<int_const,advancealtar::_Stage> local_24 [12];
  int local_18 [5];
  
  if (*(int *)this != 0) {
    if (param_1 == 0) {
      _Stage::_Stage((_Stage *)&local_60);
      iVar2 = G_CDataManager();
      local_60 = StageMapList::getFirstStageIndex((StageMapList *)(iVar2 + 0x8798));
      local_5c = 0xffffffff;
      std::make_pair<int&,advancealtar::_Stage&>(local_44,(_Stage *)&local_60);
      std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                (local_50,(pair *)local_44);
      std::
      map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
      ::insert(local_58);
    }
    else {
      local_61 = false;
      iVar2 = G_CDataManager();
      local_68 = StageMapList::getNextStage((StageMapList *)(iVar2 + 0x8798),param_1,&local_61);
      if (local_68 != 0) {
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::find((int *)local_38);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_6c,local_38);
        std::
        map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
        ::end(local_30);
        std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::
        _Rb_tree_const_iterator(local_34,(_Rb_tree_iterator *)local_30);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_Stage>>::operator==
                          (local_6c,(_Rb_tree_const_iterator *)local_34);
        if (cVar1 != '\0') {
          *(undefined1 *)(*(int *)this + 0x20) = 1;
          _Stage::_Stage((_Stage *)local_74);
          local_74[0] = local_68;
          local_74[1] = 0xffffffff;
          std::make_pair<int&,advancealtar::_Stage&>(local_18,(_Stage *)local_74);
          std::pair<int_const,advancealtar::_Stage>::pair<int,advancealtar::_Stage>
                    (local_24,(pair *)local_18);
          std::
          map<int,advancealtar::_Stage,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_Stage>>>
          ::insert(local_2c);
          *(undefined1 *)(*(int *)this + 0xcc) = 1;
          if (local_61 != false) {
            setNextStage(this,local_68);
          }
        }
      }
    }
  }
  return;
}
```

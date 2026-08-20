# HandleWpPerMonster

`_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster`

`WarField::HandleWpPerMonster(CUser*, int, int, map_monster&)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086ba1ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba1ea  _ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster
#           WarField::HandleWpPerMonster(CUser*, int, int, map_monster&)
# range [0x086ba1ea, 0x086ba448]
086ba1ea +0x000:  push   %ebp
086ba1eb +0x001:  mov    %esp,%ebp
086ba1ed +0x003:  sub    $0x68,%esp
086ba1f0 +0x006:  mov    0x8(%ebp),%eax
086ba1f3 +0x009:  add    $0x8,%eax
086ba1f6 +0x00c:  mov    %eax,-0x18(%ebp)
086ba1f9 +0x00f:  mov    -0x18(%ebp),%eax
086ba1fc +0x012:  lea    0xc(%eax),%ecx
086ba1ff +0x015:  lea    -0x2c(%ebp),%eax
086ba202 +0x018:  lea    0x10(%ebp),%edx
086ba205 +0x01b:  mov    %edx,0x8(%esp)
086ba209 +0x01f:  mov    %ecx,0x4(%esp)
086ba20d +0x023:  mov    %eax,(%esp)
086ba210 +0x026:  call   0815245a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1d8f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1d8f
086ba215 +0x02b:  sub    $0x4,%esp
086ba218 +0x02e:  mov    -0x18(%ebp),%eax
086ba21b +0x031:  lea    0xc(%eax),%edx
086ba21e +0x034:  lea    -0x28(%ebp),%eax
086ba221 +0x037:  mov    %edx,0x4(%esp)
086ba225 +0x03b:  mov    %eax,(%esp)
086ba228 +0x03e:  call   08152486 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1dbb>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1dbb
086ba22d +0x043:  sub    $0x4,%esp
086ba230 +0x046:  lea    -0x28(%ebp),%eax
086ba233 +0x049:  mov    %eax,0x4(%esp)
086ba237 +0x04d:  lea    -0x2c(%ebp),%eax
086ba23a +0x050:  mov    %eax,(%esp)
086ba23d +0x053:  call   08154720 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x4055>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x4055
086ba242 +0x058:  test   %al,%al
086ba244 +0x05a:  je     086ba250 <+0x66>
086ba246 +0x05c:  mov    $0x0,%eax
086ba24b +0x061:  jmp    086ba447 <+0x25d>
086ba250 +0x066:  lea    -0x2c(%ebp),%eax
086ba253 +0x069:  mov    %eax,(%esp)
086ba256 +0x06c:  call   0815264c <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1f81>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1f81
086ba25b +0x071:  add    $0x4,%eax
086ba25e +0x074:  mov    %eax,-0x14(%ebp)
086ba261 +0x077:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086ba266 +0x07c:  add    $0x88d4,%eax
086ba26b +0x081:  mov    %eax,-0x10(%ebp)
086ba26e +0x084:  lea    -0x30(%ebp),%eax
086ba271 +0x087:  lea    0x14(%ebp),%edx
086ba274 +0x08a:  mov    %edx,0x8(%esp)
086ba278 +0x08e:  mov    -0x10(%ebp),%edx
086ba27b +0x091:  mov    %edx,0x4(%esp)
086ba27f +0x095:  mov    %eax,(%esp)
086ba282 +0x098:  call   086ba4d2 <_GLOBAL__I__ZN8WarField5ResetEv+0x49>  ; global constructors keyed to WarField::Reset()+0x49
086ba287 +0x09d:  sub    $0x4,%esp
086ba28a +0x0a0:  mov    -0x14(%ebp),%eax
086ba28d +0x0a3:  lea    0x30(%eax),%edx
086ba290 +0x0a6:  lea    -0x34(%ebp),%eax
086ba293 +0x0a9:  mov    %edx,0x8(%esp)
086ba297 +0x0ad:  mov    -0x10(%ebp),%edx
086ba29a +0x0b0:  mov    %edx,0x4(%esp)
086ba29e +0x0b4:  mov    %eax,(%esp)
086ba2a1 +0x0b7:  call   086ba4d2 <_GLOBAL__I__ZN8WarField5ResetEv+0x49>  ; global constructors keyed to WarField::Reset()+0x49
086ba2a6 +0x0bc:  sub    $0x4,%esp
086ba2a9 +0x0bf:  lea    -0x24(%ebp),%eax
086ba2ac +0x0c2:  mov    -0x10(%ebp),%edx
086ba2af +0x0c5:  mov    %edx,0x4(%esp)
086ba2b3 +0x0c9:  mov    %eax,(%esp)
086ba2b6 +0x0cc:  call   086ba4fe <_GLOBAL__I__ZN8WarField5ResetEv+0x75>  ; global constructors keyed to WarField::Reset()+0x75
086ba2bb +0x0d1:  sub    $0x4,%esp
086ba2be +0x0d4:  lea    -0x24(%ebp),%eax
086ba2c1 +0x0d7:  mov    %eax,0x4(%esp)
086ba2c5 +0x0db:  lea    -0x30(%ebp),%eax
086ba2c8 +0x0de:  mov    %eax,(%esp)
086ba2cb +0x0e1:  call   086ba524 <_GLOBAL__I__ZN8WarField5ResetEv+0x9b>  ; global constructors keyed to WarField::Reset()+0x9b
086ba2d0 +0x0e6:  test   %al,%al
086ba2d2 +0x0e8:  je     086ba2de <+0xf4>
086ba2d4 +0x0ea:  mov    $0x0,%eax
086ba2d9 +0x0ef:  jmp    086ba447 <+0x25d>
086ba2de +0x0f4:  lea    -0x30(%ebp),%eax
086ba2e1 +0x0f7:  mov    %eax,(%esp)
086ba2e4 +0x0fa:  call   086ba538 <_GLOBAL__I__ZN8WarField5ResetEv+0xaf>  ; global constructors keyed to WarField::Reset()+0xaf
086ba2e9 +0x0ff:  lea    -0x20(%ebp),%eax
086ba2ec +0x102:  mov    -0x10(%ebp),%edx
086ba2ef +0x105:  mov    %edx,0x4(%esp)
086ba2f3 +0x109:  mov    %eax,(%esp)
086ba2f6 +0x10c:  call   086ba4fe <_GLOBAL__I__ZN8WarField5ResetEv+0x75>  ; global constructors keyed to WarField::Reset()+0x75
086ba2fb +0x111:  sub    $0x4,%esp
086ba2fe +0x114:  lea    -0x20(%ebp),%eax
086ba301 +0x117:  mov    %eax,0x4(%esp)
086ba305 +0x11b:  lea    -0x34(%ebp),%eax
086ba308 +0x11e:  mov    %eax,(%esp)
086ba30b +0x121:  call   086ba524 <_GLOBAL__I__ZN8WarField5ResetEv+0x9b>  ; global constructors keyed to WarField::Reset()+0x9b
086ba310 +0x126:  test   %al,%al
086ba312 +0x128:  je     086ba31e <+0x134>
086ba314 +0x12a:  mov    $0x0,%eax
086ba319 +0x12f:  jmp    086ba447 <+0x25d>
086ba31e +0x134:  lea    -0x34(%ebp),%eax
086ba321 +0x137:  mov    %eax,(%esp)
086ba324 +0x13a:  call   086ba538 <_GLOBAL__I__ZN8WarField5ResetEv+0xaf>  ; global constructors keyed to WarField::Reset()+0xaf
086ba329 +0x13f:  mov    -0x14(%ebp),%eax
086ba32c +0x142:  mov    0x30(%eax),%edx
086ba32f +0x145:  mov    0x14(%ebp),%eax
086ba332 +0x148:  cmp    %eax,%edx
086ba334 +0x14a:  jg     086ba340 <+0x156>
086ba336 +0x14c:  mov    $0x0,%eax
086ba33b +0x151:  jmp    086ba447 <+0x25d>
086ba340 +0x156:  movl   $0x0,-0xc(%ebp)
086ba347 +0x15d:  lea    -0x3c(%ebp),%eax
086ba34a +0x160:  mov    %eax,(%esp)
086ba34d +0x163:  call   08695c78 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x24cd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x24cd
086ba352 +0x168:  mov    0xc(%ebp),%eax
086ba355 +0x16b:  mov    %eax,(%esp)
086ba358 +0x16e:  call   0868ec5c <_ZN15CUserCharacInfo15checkBonusPointEv>  ; CUserCharacInfo::checkBonusPoint()
086ba35d +0x173:  mov    0xc(%ebp),%eax
086ba360 +0x176:  lea    -0x3c(%ebp),%edx
086ba363 +0x179:  mov    %edx,0x4(%esp)
086ba367 +0x17d:  mov    %eax,(%esp)
086ba36a +0x180:  call   0868ee26 <_ZN15CUserCharacInfo15getWpBonusPointER18WpBonusPointResult>  ; CUserCharacInfo::getWpBonusPoint(WpBonusPointResult&)
086ba36f +0x185:  jmp    086ba398 <+0x1ae>
086ba371 +0x187:  lea    -0x34(%ebp),%eax
086ba374 +0x18a:  mov    %eax,(%esp)
086ba377 +0x18d:  call   086ba56a <_GLOBAL__I__ZN8WarField5ResetEv+0xe1>  ; global constructors keyed to WarField::Reset()+0xe1
086ba37c +0x192:  mov    -0x14(%ebp),%edx
086ba37f +0x195:  movzbl 0x8(%edx),%edx
086ba383 +0x199:  movsbl %dl,%edx
086ba386 +0x19c:  mov    0x4(%eax,%edx,4),%eax
086ba38a +0x1a0:  add    %eax,-0xc(%ebp)
086ba38d +0x1a3:  lea    -0x34(%ebp),%eax
086ba390 +0x1a6:  mov    %eax,(%esp)
086ba393 +0x1a9:  call   086ba538 <_GLOBAL__I__ZN8WarField5ResetEv+0xaf>  ; global constructors keyed to WarField::Reset()+0xaf
086ba398 +0x1ae:  lea    -0x30(%ebp),%eax
086ba39b +0x1b1:  mov    %eax,0x4(%esp)
086ba39f +0x1b5:  lea    -0x34(%ebp),%eax
086ba3a2 +0x1b8:  mov    %eax,(%esp)
086ba3a5 +0x1bb:  call   086ba556 <_GLOBAL__I__ZN8WarField5ResetEv+0xcd>  ; global constructors keyed to WarField::Reset()+0xcd
086ba3aa +0x1c0:  test   %al,%al
086ba3ac +0x1c2:  je     086ba3e0 <+0x1f6>
086ba3ae +0x1c4:  lea    -0x1c(%ebp),%eax
086ba3b1 +0x1c7:  mov    -0x10(%ebp),%edx
086ba3b4 +0x1ca:  mov    %edx,0x4(%esp)
086ba3b8 +0x1ce:  mov    %eax,(%esp)
086ba3bb +0x1d1:  call   086ba4fe <_GLOBAL__I__ZN8WarField5ResetEv+0x75>  ; global constructors keyed to WarField::Reset()+0x75
086ba3c0 +0x1d6:  sub    $0x4,%esp
086ba3c3 +0x1d9:  lea    -0x1c(%ebp),%eax
086ba3c6 +0x1dc:  mov    %eax,0x4(%esp)
086ba3ca +0x1e0:  lea    -0x34(%ebp),%eax
086ba3cd +0x1e3:  mov    %eax,(%esp)
086ba3d0 +0x1e6:  call   086ba556 <_GLOBAL__I__ZN8WarField5ResetEv+0xcd>  ; global constructors keyed to WarField::Reset()+0xcd
086ba3d5 +0x1eb:  test   %al,%al
086ba3d7 +0x1ed:  je     086ba3e0 <+0x1f6>
086ba3d9 +0x1ef:  mov    $0x1,%eax
086ba3de +0x1f4:  jmp    086ba3e5 <+0x1fb>
086ba3e0 +0x1f6:  mov    $0x0,%eax
086ba3e5 +0x1fb:  test   %al,%al
086ba3e7 +0x1fd:  jne    086ba371 <+0x187>
086ba3e9 +0x1ff:  mov    -0x3c(%ebp),%eax
086ba3ec +0x202:  add    %eax,-0xc(%ebp)
086ba3ef +0x205:  fildl  -0xc(%ebp)
086ba3f2 +0x208:  mov    -0x38(%ebp),%eax
086ba3f5 +0x20b:  mov    %eax,-0x4c(%ebp)
086ba3f8 +0x20e:  fildl  -0x4c(%ebp)
086ba3fb +0x211:  flds   &data#b8020223(.rodata)
086ba401 +0x217:  fdivrp %st,%st(1)
086ba403 +0x219:  fmulp  %st,%st(1)
086ba405 +0x21b:  flds   &data#211c6cf2(.rodata)
086ba40b +0x221:  faddp  %st,%st(1)
086ba40d +0x223:  fnstcw -0x4e(%ebp)
086ba410 +0x226:  movzwl -0x4e(%ebp),%eax
086ba414 +0x22a:  mov    $0xc,%ah
086ba416 +0x22c:  mov    %ax,-0x50(%ebp)
086ba41a +0x230:  fldcw  -0x50(%ebp)
086ba41d +0x233:  fistpl -0x4c(%ebp)
086ba420 +0x236:  fldcw  -0x4e(%ebp)
086ba423 +0x239:  mov    -0x4c(%ebp),%eax
086ba426 +0x23c:  add    %eax,-0xc(%ebp)
086ba429 +0x23f:  mov    0x14(%ebp),%edx
086ba42c +0x242:  mov    -0x14(%ebp),%eax
086ba42f +0x245:  mov    %edx,0x30(%eax)
086ba432 +0x248:  mov    -0x14(%ebp),%eax
086ba435 +0x24b:  mov    %eax,0x4(%esp)
086ba439 +0x24f:  mov    0x18(%ebp),%eax
086ba43c +0x252:  mov    %eax,(%esp)
086ba43f +0x255:  call   08151d3a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x166f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x166f
086ba444 +0x25a:  mov    -0xc(%ebp),%eax
086ba447 +0x25d:  leave
086ba448 +0x25e:  ret
```

## 反编译 C

```c
// WarField::HandleWpPerMonster @ 0x86ba1ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarField::HandleWpPerMonster(CUser*, int, int, map_monster&) */

int __thiscall
WarField::HandleWpPerMonster
          (WarField *this,CUser *param_1,int param_2,int param_3,map_monster *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_40;
  int local_3c;
  _Rb_tree_iterator<std::pair<int_const,stWarPoint>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,stWarPoint>> local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_30 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_2c [4];
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_28 [4]
  ;
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_24 [4]
  ;
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_20 [4]
  ;
  WarField *local_1c;
  map_monster *local_18;
  int local_14;
  int local_10;
  
  local_1c = this + 8;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_30);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_2c);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->(local_30);
    local_18 = (map_monster *)(iVar3 + 4);
    local_14 = G_CDataManager();
    local_14 = local_14 + 0x88d4;
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::find
              ((int *)local_34);
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::find
              ((int *)local_38);
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::end
              (local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_34);
      std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::
      end(local_24);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator==
                        (local_38,(_Rb_tree_iterator *)local_24);
      if ((cVar2 == '\0') &&
         (std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_38),
         param_3 < *(int *)(local_18 + 0x30))) {
        local_10 = 0;
        WpBonusPointResult::WpBonusPointResult((WpBonusPointResult *)&local_40);
        CUserCharacInfo::checkBonusPoint((CUserCharacInfo *)param_1);
        CUserCharacInfo::getWpBonusPoint((CUserCharacInfo *)param_1,(WpBonusPointResult *)&local_40)
        ;
        do {
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator!=
                            (local_38,(_Rb_tree_iterator *)local_34);
          if (cVar2 == '\0') {
LAB_086ba3e0:
            bVar1 = false;
          }
          else {
            std::
            map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::
            end(local_20);
            cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator!=
                              (local_38,(_Rb_tree_iterator *)local_20);
            if (cVar2 == '\0') goto LAB_086ba3e0;
            bVar1 = true;
          }
          if (!bVar1) {
            local_10 = local_10 + local_40 +
                       (int)ROUND(_DAT_08cf9464 +
                                  ((float)local_3c / _DAT_08cf9460) * (float)(local_10 + local_40));
            *(int *)(local_18 + 0x30) = param_3;
            map_monster::operator=(param_4,local_18);
            return local_10;
          }
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator->(local_38);
          local_10 = local_10 + *(int *)(iVar3 + 4 + (char)local_18[8] * 4);
          std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_38);
        } while( true );
      }
    }
  }
  return 0;
}
```

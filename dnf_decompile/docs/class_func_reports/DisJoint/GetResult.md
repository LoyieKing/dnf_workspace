# GetResult

`_ZN8DisJoint9GetResultEiR14DisJointResult`

`DisJoint::GetResult(int, DisJointResult&)`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x084733f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084733f6  _ZN8DisJoint9GetResultEiR14DisJointResult
#           DisJoint::GetResult(int, DisJointResult&)
# range [0x084733f6, 0x08473574]
084733f6 +0x000:  push   %ebp
084733f7 +0x001:  mov    %esp,%ebp
084733f9 +0x003:  sub    $0x58,%esp
084733fc +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08473401 +0x00b:  mov    0xc(%ebp),%edx
08473404 +0x00e:  mov    %edx,0x4(%esp)
08473408 +0x012:  mov    %eax,(%esp)
0847340b +0x015:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08473410 +0x01a:  mov    %eax,-0x18(%ebp)
08473413 +0x01d:  cmpl   $0x0,-0x18(%ebp)
08473417 +0x021:  jne    0847344f <+0x59>
08473419 +0x023:  movl   $"[DisJoint::GetResult] Null Item\n",0x10(%esp)
08473421 +0x02b:  movl   $0x6e,0xc(%esp)
08473429 +0x033:  movl   $&_ZZN8DisJoint9GetResultEiR14DisJointResultE19__PRETTY_FUNCTION__,0x8(%esp)
08473431 +0x03b:  movl   $"DisJoint.cpp",0x4(%esp)
08473439 +0x043:  movl   $0x1,(%esp)
08473440 +0x04a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08473445 +0x04f:  mov    $0x11,%eax
0847344a +0x054:  jmp    08473573 <+0x17d>
0847344f +0x059:  mov    -0x18(%ebp),%eax
08473452 +0x05c:  mov    %eax,(%esp)
08473455 +0x05f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
0847345a +0x064:  mov    %eax,%edx
0847345c +0x066:  mov    0x8(%ebp),%eax
0847345f +0x069:  add    $0x14c,%edx
08473465 +0x06f:  mov    0x8(%eax,%edx,4),%eax
08473469 +0x073:  mov    %eax,-0x14(%ebp)
0847346c +0x076:  mov    0x8(%ebp),%eax
0847346f +0x079:  add    $0x30,%eax
08473472 +0x07c:  movl   $0x0,0x4(%esp)
0847347a +0x084:  mov    %eax,(%esp)
0847347d +0x087:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08473482 +0x08c:  mov    (%eax),%edx
08473484 +0x08e:  mov    0x10(%ebp),%eax
08473487 +0x091:  mov    %edx,0x14(%eax)
0847348a +0x094:  mov    -0x18(%ebp),%eax
0847348d +0x097:  mov    %eax,(%esp)
08473490 +0x09a:  call   08473612 <_GLOBAL__I__ZN8DisJoint12LoadDisJointEv+0x5d>  ; global constructors keyed to DisJoint::LoadDisJoint()+0x5d
08473495 +0x09f:  mov    %eax,-0x10(%ebp)
08473498 +0x0a2:  fildl  -0x10(%ebp)
0847349b +0x0a5:  flds   &data#7103447e(.rodata)
084734a1 +0x0ab:  fmulp  %st,%st(1)
084734a3 +0x0ad:  fnstcw -0x1a(%ebp)
084734a6 +0x0b0:  movzwl -0x1a(%ebp),%eax
084734aa +0x0b4:  mov    $0xc,%ah
084734ac +0x0b6:  mov    %ax,-0x1c(%ebp)
084734b0 +0x0ba:  fldcw  -0x1c(%ebp)
084734b3 +0x0bd:  fistpl -0x10(%ebp)
084734b6 +0x0c0:  fldcw  -0x1a(%ebp)
084734b9 +0x0c3:  mov    -0x18(%ebp),%eax
084734bc +0x0c6:  mov    (%eax),%eax
084734be +0x0c8:  add    $0x4c,%eax
084734c1 +0x0cb:  mov    (%eax),%edx
084734c3 +0x0cd:  mov    -0x18(%ebp),%eax
084734c6 +0x0d0:  mov    %eax,(%esp)
084734c9 +0x0d3:  call   *%edx
084734cb +0x0d5:  movzbl %al,%eax
084734ce +0x0d8:  mov    %eax,0xc(%esp)
084734d2 +0x0dc:  movl   $0x0,0x8(%esp)
084734da +0x0e4:  movl   $0x0,0x4(%esp)
084734e2 +0x0ec:  mov    -0x10(%ebp),%eax
084734e5 +0x0ef:  mov    %eax,(%esp)
084734e8 +0x0f2:  call   0898c86e <_Z16getItemSellPriceiiib>  ; getItemSellPrice(int, int, int, bool)
084734ed +0x0f7:  imul   $0x3e8,%eax,%eax
084734f3 +0x0fd:  mov    0x8(%ebp),%edx
084734f6 +0x100:  mov    0x534(%edx),%edx
084734fc +0x106:  mov    %edx,-0x2c(%ebp)
084734ff +0x109:  mov    %eax,%edx
08473501 +0x10b:  sar    $0x1f,%edx
08473504 +0x10e:  idivl  -0x2c(%ebp)
08473507 +0x111:  mov    %eax,-0xc(%ebp)
0847350a +0x114:  fildl  -0xc(%ebp)
0847350d +0x117:  fmuls  -0x14(%ebp)
08473510 +0x11a:  flds   &data#0b7d92e1(.rodata)
08473516 +0x120:  fdivrp %st,%st(1)
08473518 +0x122:  fnstcw -0x1a(%ebp)
0847351b +0x125:  movzwl -0x1a(%ebp),%eax
0847351f +0x129:  mov    $0xc,%ah
08473521 +0x12b:  mov    %ax,-0x1c(%ebp)
08473525 +0x12f:  fldcw  -0x1c(%ebp)
08473528 +0x132:  fistpl -0x20(%ebp)
0847352b +0x135:  fldcw  -0x1a(%ebp)
0847352e +0x138:  mov    -0x20(%ebp),%edx
08473531 +0x13b:  mov    0x10(%ebp),%eax
08473534 +0x13e:  mov    %edx,(%eax)
08473536 +0x140:  mov    0x10(%ebp),%eax
08473539 +0x143:  mov    (%eax),%eax
0847353b +0x145:  test   %eax,%eax
0847353d +0x147:  jg     08473548 <+0x152>
0847353f +0x149:  mov    0x10(%ebp),%eax
08473542 +0x14c:  movl   $0x1,(%eax)
08473548 +0x152:  mov    0x10(%ebp),%eax
0847354b +0x155:  lea    0x4(%eax),%edx
0847354e +0x158:  mov    0x10(%ebp),%eax
08473551 +0x15b:  add    $0x18,%eax
08473554 +0x15e:  mov    %edx,0xc(%esp)
08473558 +0x162:  mov    %eax,0x8(%esp)
0847355c +0x166:  mov    -0x18(%ebp),%eax
0847355f +0x169:  mov    %eax,0x4(%esp)
08473563 +0x16d:  mov    0x8(%ebp),%eax
08473566 +0x170:  mov    %eax,(%esp)
08473569 +0x173:  call   084732b4 <_ZN8DisJoint18_GetAdditionalItemEPK5CItemRiS3_>  ; DisJoint::_GetAdditionalItem(CItem const*, int&, int&)
0847356e +0x178:  mov    $0x0,%eax
08473573 +0x17d:  leave
08473574 +0x17e:  ret
```

## 反编译 C

```c
// DisJoint::GetResult @ 0x84733f6

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DisJoint::GetResult(int, DisJointResult&) */

undefined4 __thiscall DisJoint::GetResult(DisJoint *this,int param_1,DisJointResult *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  CDataManager *this_00;
  CItem *this_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 == (CItem *)0x0) {
    LogManager::logFormat
              (1,"DisJoint.cpp","int DisJoint::GetResult(int, DisJointResult&)",0x6e,
               "[DisJoint::GetResult] Null Item\n");
    uVar4 = 0x11;
  }
  else {
    iVar5 = CItem::get_rarity(this_01);
    fVar1 = *(float *)(this + (iVar5 + 0x14c) * 4 + 8);
    puVar6 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 0x30),0);
    *(undefined4 *)(param_2 + 0x14) = *puVar6;
    iVar5 = CItem::GetSellPrice(this_01);
    fVar2 = _DAT_08c6ff50 * (float)iVar5;
    bVar3 = (bool)(**(code **)(*(int *)this_01 + 0x4c))(this_01);
    iVar5 = getItemSellPrice((int)ROUND(fVar2),0,0,bVar3);
    *(int *)param_2 =
         (int)ROUND(((float)((iVar5 * 1000) / *(int *)(this + 0x534)) * fVar1) / _DAT_08c6ff54);
    if (*(int *)param_2 < 1) {
      *(undefined4 *)param_2 = 1;
    }
    _GetAdditionalItem(this,this_01,(int *)(param_2 + 0x18),(int *)(param_2 + 4));
    uVar4 = 0;
  }
  return uVar4;
}
```

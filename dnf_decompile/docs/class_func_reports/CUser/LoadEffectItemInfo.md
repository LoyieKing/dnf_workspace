# LoadEffectItemInfo

`_ZN5CUser18LoadEffectItemInfoEP20CONTINUOUS_ITEM_INFO`

`CUser::LoadEffectItemInfo(CONTINUOUS_ITEM_INFO*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086590f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086590f0  _ZN5CUser18LoadEffectItemInfoEP20CONTINUOUS_ITEM_INFO
#           CUser::LoadEffectItemInfo(CONTINUOUS_ITEM_INFO*)
# range [0x086590f0, 0x086591fd]
086590f0 +0x000:  push   %ebp
086590f1 +0x001:  mov    %esp,%ebp
086590f3 +0x003:  sub    $0x38,%esp
086590f6 +0x006:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086590fd +0x00d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08659102 +0x012:  mov    %eax,-0x14(%ebp)
08659105 +0x015:  mov    0x8(%ebp),%eax
08659108 +0x018:  mov    %eax,(%esp)
0865910b +0x01b:  call   08696a44 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3299>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3299
08659110 +0x020:  mov    %eax,-0x10(%ebp)
08659113 +0x023:  mov    -0x10(%ebp),%eax
08659116 +0x026:  mov    %eax,(%esp)
08659119 +0x029:  call   0869b054 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78a9
0865911e +0x02e:  movl   $0x0,-0xc(%ebp)
08659125 +0x035:  jmp    086591ae <+0xbe>
0865912a +0x03a:  mov    -0xc(%ebp),%edx
0865912d +0x03d:  mov    0xc(%ebp),%eax
08659130 +0x040:  mov    0x8(%eax,%edx,8),%eax
08659134 +0x044:  cmp    -0x14(%ebp),%eax
08659137 +0x047:  jbe    086591aa <+0xba>
08659139 +0x049:  mov    -0xc(%ebp),%edx
0865913c +0x04c:  mov    0xc(%ebp),%eax
0865913f +0x04f:  mov    0x4(%eax,%edx,8),%eax
08659143 +0x053:  cmp    $0x7ffffffe,%eax
08659148 +0x058:  ja     086591a6 <+0xb6>
0865914a +0x05a:  mov    -0xc(%ebp),%edx
0865914d +0x05d:  mov    0xc(%ebp),%eax
08659150 +0x060:  mov    0x8(%eax,%edx,8),%eax
08659154 +0x064:  cmp    $0x77359400,%eax
08659159 +0x069:  ja     086591a9 <+0xb9>
0865915b +0x06b:  lea    -0x1c(%ebp),%eax
0865915e +0x06e:  mov    %eax,(%esp)
08659161 +0x071:  call   08695c48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x249d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x249d
08659166 +0x076:  mov    -0xc(%ebp),%edx
08659169 +0x079:  mov    0xc(%ebp),%eax
0865916c +0x07c:  mov    0x4(%eax,%edx,8),%eax
08659170 +0x080:  mov    %eax,-0x1c(%ebp)
08659173 +0x083:  mov    -0xc(%ebp),%edx
08659176 +0x086:  mov    0xc(%ebp),%eax
08659179 +0x089:  mov    0x8(%eax,%edx,8),%eax
0865917d +0x08d:  mov    %eax,-0x18(%ebp)
08659180 +0x090:  mov    -0x1c(%ebp),%eax
08659183 +0x093:  mov    %eax,0x4(%esp)
08659187 +0x097:  mov    0x8(%ebp),%eax
0865918a +0x09a:  mov    %eax,(%esp)
0865918d +0x09d:  call   08659b60 <_ZN5CUser33_processSpeicalContinuousTimeItemEj>  ; CUser::_processSpeicalContinuousTimeItem(unsigned int)
08659192 +0x0a2:  lea    -0x1c(%ebp),%eax
08659195 +0x0a5:  mov    %eax,0x4(%esp)
08659199 +0x0a9:  mov    -0x10(%ebp),%eax
0865919c +0x0ac:  mov    %eax,(%esp)
0865919f +0x0af:  call   0869b070 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78c5
086591a4 +0x0b4:  jmp    086591aa <+0xba>
086591a6 +0x0b6:  nop
086591a7 +0x0b7:  jmp    086591aa <+0xba>
086591a9 +0x0b9:  nop
086591aa +0x0ba:  addl   $0x1,-0xc(%ebp)
086591ae +0x0be:  mov    0xc(%ebp),%eax
086591b1 +0x0c1:  movzbl (%eax),%eax
086591b4 +0x0c4:  movsbl %al,%eax
086591b7 +0x0c7:  cmp    -0xc(%ebp),%eax
086591ba +0x0ca:  setg   %al
086591bd +0x0cd:  test   %al,%al
086591bf +0x0cf:  jne    0865912a <+0x3a>
086591c5 +0x0d5:  mov    0x8(%ebp),%eax
086591c8 +0x0d8:  mov    -0x14(%ebp),%edx
086591cb +0x0db:  mov    %edx,0x4(%esp)
086591cf +0x0df:  mov    %eax,(%esp)
086591d2 +0x0e2:  call   08659ef4 <_ZN15CUserCharacInfo22ClearUselessEffectItemEj>  ; CUserCharacInfo::ClearUselessEffectItem(unsigned int)
086591d7 +0x0e7:  mov    -0x14(%ebp),%eax
086591da +0x0ea:  mov    %eax,0x4(%esp)
086591de +0x0ee:  mov    0x8(%ebp),%eax
086591e1 +0x0f1:  mov    %eax,(%esp)
086591e4 +0x0f4:  call   08659366 <_ZN5CUser18SendEffectItemInfoEj>  ; CUser::SendEffectItemInfo(unsigned int)
086591e9 +0x0f9:  xor    $0x1,%eax
086591ec +0x0fc:  test   %al,%al
086591ee +0x0fe:  je     086591f7 <+0x107>
086591f0 +0x100:  mov    $0x0,%eax
086591f5 +0x105:  jmp    086591fc <+0x10c>
086591f7 +0x107:  mov    $0x1,%eax
086591fc +0x10c:  leave
086591fd +0x10d:  ret
```

## 反编译 C

```c
// CUser::LoadEffectItemInfo @ 0x86590f0

/* CUser::LoadEffectItemInfo(CONTINUOUS_ITEM_INFO*) */

bool __thiscall CUser::LoadEffectItemInfo(CUser *this,CONTINUOUS_ITEM_INFO *param_1)

{
  char cVar1;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_14;
  int local_10;
  
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacEffectItemList((CUserCharacInfo *)this);
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::clear(local_14);
  for (local_10 = 0; local_10 < (char)*param_1; local_10 = local_10 + 1) {
    if (((local_18 < *(uint *)(param_1 + local_10 * 8 + 8)) &&
        (*(uint *)(param_1 + local_10 * 8 + 4) < 0x7fffffff)) &&
       (*(uint *)(param_1 + local_10 * 8 + 8) < 0x77359401)) {
      ContinuousItemInfo::ContinuousItemInfo((ContinuousItemInfo *)&local_20);
      local_20 = *(uint *)(param_1 + local_10 * 8 + 4);
      local_1c = *(undefined4 *)(param_1 + local_10 * 8 + 8);
      _processSpeicalContinuousTimeItem(this,local_20);
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::push_back
                (local_14,(ContinuousItemInfo *)&local_20);
    }
  }
  CUserCharacInfo::ClearUselessEffectItem((CUserCharacInfo *)this,local_18);
  cVar1 = SendEffectItemInfo(this,local_18);
  return cVar1 == '\x01';
}
```

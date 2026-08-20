# LoadCoolTimeItemInfo

`_ZN5CUser20LoadCoolTimeItemInfoEP20CONTINUOUS_ITEM_INFO`

`CUser::LoadCoolTimeItemInfo(CONTINUOUS_ITEM_INFO*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08658ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08658ff6  _ZN5CUser20LoadCoolTimeItemInfoEP20CONTINUOUS_ITEM_INFO
#           CUser::LoadCoolTimeItemInfo(CONTINUOUS_ITEM_INFO*)
# range [0x08658ff6, 0x086590ef]
08658ff6 +0x00:  push   %ebp
08658ff7 +0x01:  mov    %esp,%ebp
08658ff9 +0x03:  sub    $0x38,%esp
08658ffc +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08659003 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08659008 +0x12:  mov    %eax,-0x14(%ebp)
0865900b +0x15:  mov    0x8(%ebp),%eax
0865900e +0x18:  mov    %eax,(%esp)
08659011 +0x1b:  call   08696a24 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3279>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3279
08659016 +0x20:  mov    %eax,-0x10(%ebp)
08659019 +0x23:  mov    -0x10(%ebp),%eax
0865901c +0x26:  mov    %eax,(%esp)
0865901f +0x29:  call   0869b054 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78a9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78a9
08659024 +0x2e:  movl   $0x0,-0xc(%ebp)
0865902b +0x35:  jmp    0865909f <+0xa9>
0865902d +0x37:  mov    -0xc(%ebp),%edx
08659030 +0x3a:  mov    0xc(%ebp),%eax
08659033 +0x3d:  mov    0x8(%eax,%edx,8),%eax
08659037 +0x41:  cmp    -0x14(%ebp),%eax
0865903a +0x44:  jbe    0865909b <+0xa5>
0865903c +0x46:  mov    -0xc(%ebp),%edx
0865903f +0x49:  mov    0xc(%ebp),%eax
08659042 +0x4c:  mov    0x4(%eax,%edx,8),%eax
08659046 +0x50:  cmp    $0x7ffffffe,%eax
0865904b +0x55:  ja     08659097 <+0xa1>
0865904d +0x57:  mov    -0xc(%ebp),%edx
08659050 +0x5a:  mov    0xc(%ebp),%eax
08659053 +0x5d:  mov    0x8(%eax,%edx,8),%eax
08659057 +0x61:  cmp    $0x77359400,%eax
0865905c +0x66:  ja     0865909a <+0xa4>
0865905e +0x68:  lea    -0x1c(%ebp),%eax
08659061 +0x6b:  mov    %eax,(%esp)
08659064 +0x6e:  call   08695c48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x249d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x249d
08659069 +0x73:  mov    -0xc(%ebp),%edx
0865906c +0x76:  mov    0xc(%ebp),%eax
0865906f +0x79:  mov    0x4(%eax,%edx,8),%eax
08659073 +0x7d:  mov    %eax,-0x1c(%ebp)
08659076 +0x80:  mov    -0xc(%ebp),%edx
08659079 +0x83:  mov    0xc(%ebp),%eax
0865907c +0x86:  mov    0x8(%eax,%edx,8),%eax
08659080 +0x8a:  mov    %eax,-0x18(%ebp)
08659083 +0x8d:  lea    -0x1c(%ebp),%eax
08659086 +0x90:  mov    %eax,0x4(%esp)
0865908a +0x94:  mov    -0x10(%ebp),%eax
0865908d +0x97:  mov    %eax,(%esp)
08659090 +0x9a:  call   0869b070 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78c5
08659095 +0x9f:  jmp    0865909b <+0xa5>
08659097 +0xa1:  nop
08659098 +0xa2:  jmp    0865909b <+0xa5>
0865909a +0xa4:  nop
0865909b +0xa5:  addl   $0x1,-0xc(%ebp)
0865909f +0xa9:  mov    0xc(%ebp),%eax
086590a2 +0xac:  movzbl (%eax),%eax
086590a5 +0xaf:  movsbl %al,%eax
086590a8 +0xb2:  cmp    -0xc(%ebp),%eax
086590ab +0xb5:  setg   %al
086590ae +0xb8:  test   %al,%al
086590b0 +0xba:  jne    0865902d <+0x37>
086590b6 +0xc0:  mov    0x8(%ebp),%eax
086590b9 +0xc3:  mov    -0x14(%ebp),%edx
086590bc +0xc6:  mov    %edx,0x4(%esp)
086590c0 +0xca:  mov    %eax,(%esp)
086590c3 +0xcd:  call   08659e3e <_ZN15CUserCharacInfo24ClearUselessCooltimeItemEj>  ; CUserCharacInfo::ClearUselessCooltimeItem(unsigned int)
086590c8 +0xd2:  mov    -0x14(%ebp),%eax
086590cb +0xd5:  mov    %eax,0x4(%esp)
086590cf +0xd9:  mov    0x8(%ebp),%eax
086590d2 +0xdc:  mov    %eax,(%esp)
086590d5 +0xdf:  call   086591fe <_ZN5CUser20SendCoolTimeItemInfoEj>  ; CUser::SendCoolTimeItemInfo(unsigned int)
086590da +0xe4:  xor    $0x1,%eax
086590dd +0xe7:  test   %al,%al
086590df +0xe9:  je     086590e8 <+0xf2>
086590e1 +0xeb:  mov    $0x0,%eax
086590e6 +0xf0:  jmp    086590ed <+0xf7>
086590e8 +0xf2:  mov    $0x1,%eax
086590ed +0xf7:  leave
086590ee +0xf8:  ret
086590ef +0xf9:  nop
```

## 反编译 C

```c
// CUser::LoadCoolTimeItemInfo @ 0x8658ff6

/* CUser::LoadCoolTimeItemInfo(CONTINUOUS_ITEM_INFO*) */

bool __thiscall CUser::LoadCoolTimeItemInfo(CUser *this,CONTINUOUS_ITEM_INFO *param_1)

{
  char cVar1;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_14;
  int local_10;
  
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacCoolTimeItemList((CUserCharacInfo *)this);
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::clear(local_14);
  for (local_10 = 0; local_10 < (char)*param_1; local_10 = local_10 + 1) {
    if (((local_18 < *(uint *)(param_1 + local_10 * 8 + 8)) &&
        (*(uint *)(param_1 + local_10 * 8 + 4) < 0x7fffffff)) &&
       (*(uint *)(param_1 + local_10 * 8 + 8) < 0x77359401)) {
      ContinuousItemInfo::ContinuousItemInfo((ContinuousItemInfo *)&local_20);
      local_20 = *(undefined4 *)(param_1 + local_10 * 8 + 4);
      local_1c = *(undefined4 *)(param_1 + local_10 * 8 + 8);
      std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::push_back
                (local_14,(ContinuousItemInfo *)&local_20);
    }
  }
  CUserCharacInfo::ClearUselessCooltimeItem((CUserCharacInfo *)this,local_18);
  cVar1 = SendCoolTimeItemInfo(this,local_18);
  return cVar1 == '\x01';
}
```

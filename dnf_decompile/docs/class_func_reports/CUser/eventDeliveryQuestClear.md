# eventDeliveryQuestClear

`_ZN5CUser23eventDeliveryQuestClearEiiRSt6vectorISt4pairIiiESaIS2_EEiii`

`CUser::eventDeliveryQuestClear(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086645a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086645a4  _ZN5CUser23eventDeliveryQuestClearEiiRSt6vectorISt4pairIiiESaIS2_EEiii
#           CUser::eventDeliveryQuestClear(int, int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, int, int, int)
# range [0x086645a4, 0x0866463b]
086645a4 +0x00:  push   %ebp
086645a5 +0x01:  mov    %esp,%ebp
086645a7 +0x03:  push   %esi
086645a8 +0x04:  push   %ebx
086645a9 +0x05:  sub    $0x50,%esp
086645ac +0x08:  lea    -0x2c(%ebp),%eax
086645af +0x0b:  mov    %eax,(%esp)
086645b2 +0x0e:  call   08697914 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4169>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4169
086645b7 +0x13:  mov    0x8(%ebp),%eax
086645ba +0x16:  mov    %eax,(%esp)
086645bd +0x19:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
086645c2 +0x1e:  mov    %eax,%esi
086645c4 +0x20:  mov    0x8(%ebp),%eax
086645c7 +0x23:  mov    %eax,(%esp)
086645ca +0x26:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
086645cf +0x2b:  mov    %eax,%ebx
086645d1 +0x2d:  mov    0x8(%ebp),%eax
086645d4 +0x30:  mov    %eax,(%esp)
086645d7 +0x33:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086645dc +0x38:  mov    %esi,0x10(%esp)
086645e0 +0x3c:  mov    %ebx,0xc(%esp)
086645e4 +0x40:  mov    %eax,0x8(%esp)
086645e8 +0x44:  movl   $0x1,0x4(%esp)
086645f0 +0x4c:  lea    -0x2c(%ebp),%eax
086645f3 +0x4f:  mov    %eax,(%esp)
086645f6 +0x52:  call   086978ec <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4141>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4141
086645fb +0x57:  mov    0xc(%ebp),%eax
086645fe +0x5a:  mov    %eax,-0x1c(%ebp)
08664601 +0x5d:  mov    0x14(%ebp),%eax
08664604 +0x60:  mov    %eax,-0xc(%ebp)
08664607 +0x63:  mov    0x18(%ebp),%eax
0866460a +0x66:  mov    %eax,-0x18(%ebp)
0866460d +0x69:  mov    0x1c(%ebp),%eax
08664610 +0x6c:  mov    %eax,-0x14(%ebp)
08664613 +0x6f:  mov    0x20(%ebp),%eax
08664616 +0x72:  mov    %eax,-0x10(%ebp)
08664619 +0x75:  mov    -0x2c(%ebp),%edx
0866461c +0x78:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08664621 +0x7d:  lea    -0x2c(%ebp),%ecx
08664624 +0x80:  mov    %ecx,0x8(%esp)
08664628 +0x84:  mov    %edx,0x4(%esp)
0866462c +0x88:  mov    %eax,(%esp)
0866462f +0x8b:  call   08116874 <_ZN13CEventManager19eventDeliveryNotifyEiR11DeliveryMsg>  ; CEventManager::eventDeliveryNotify(int, DeliveryMsg&)
08664634 +0x90:  add    $0x50,%esp
08664637 +0x93:  pop    %ebx
08664638 +0x94:  pop    %esi
08664639 +0x95:  pop    %ebp
0866463a +0x96:  ret
0866463b +0x97:  nop
```

## 反编译 C

```c
// CUser::eventDeliveryQuestClear @ 0x86645a4

/* CUser::eventDeliveryQuestClear(int, int, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&, int, int, int) */

void __thiscall
CUser::eventDeliveryQuestClear
          (CUser *this,int param_1,int param_2,vector *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  vector *local_10;
  
  QuestClearDeliveryMsg::QuestClearDeliveryMsg((QuestClearDeliveryMsg *)local_30);
  iVar1 = GetServerGroupToPvP(this);
  iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  uVar3 = get_acc_id(this);
  DeliveryMsg::setBaseData((DeliveryMsg *)local_30,1,uVar3,iVar2,iVar1);
  local_20 = param_1;
  local_10 = param_3;
  local_1c = param_4;
  local_18 = param_5;
  local_14 = param_6;
  CEventManager::eventDeliveryNotify
            (GlobalData::s_event_manager,local_30[0],(DeliveryMsg *)local_30);
  return;
}
```

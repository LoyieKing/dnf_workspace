# set_growth_power_exp_reward

`_ZN5CUser27set_growth_power_exp_rewardEi`

`CUser::set_growth_power_exp_reward(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868dace` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868dace  _ZN5CUser27set_growth_power_exp_rewardEi
#           CUser::set_growth_power_exp_reward(int)
# range [0x0868dace, 0x0868dc63]
0868dace +0x000:  push   %ebp
0868dacf +0x001:  mov    %esp,%ebp
0868dad1 +0x003:  push   %ebx
0868dad2 +0x004:  sub    $0x34,%esp
0868dad5 +0x007:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0868dada +0x00c:  movl   $0x5d,0x4(%esp)
0868dae2 +0x014:  mov    %eax,(%esp)
0868dae5 +0x017:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0868daea +0x01c:  mov    %eax,-0x14(%ebp)
0868daed +0x01f:  mov    -0x14(%ebp),%eax
0868daf0 +0x022:  mov    (%eax),%eax
0868daf2 +0x024:  add    $0x34,%eax
0868daf5 +0x027:  mov    (%eax),%edx
0868daf7 +0x029:  movl   $0x0,0x4(%esp)
0868daff +0x031:  mov    -0x14(%ebp),%eax
0868db02 +0x034:  mov    %eax,(%esp)
0868db05 +0x037:  call   *%edx
0868db07 +0x039:  test   %al,%al
0868db09 +0x03b:  je     0868dbb5 <+0xe7>
0868db0f +0x041:  lea    -0x28(%ebp),%eax
0868db12 +0x044:  mov    %eax,(%esp)
0868db15 +0x047:  call   08693aa0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2f5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2f5
0868db1a +0x04c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868db1f +0x051:  lea    0x5094(%eax),%edx
0868db25 +0x057:  lea    -0x28(%ebp),%eax
0868db28 +0x05a:  mov    %eax,0x8(%esp)
0868db2c +0x05e:  mov    0xc(%ebp),%eax
0868db2f +0x061:  mov    %eax,0x4(%esp)
0868db33 +0x065:  mov    %edx,(%esp)
0868db36 +0x068:  call   08693ad6 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x32b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x32b
0868db3b +0x06d:  test   %al,%al
0868db3d +0x06f:  je     0868db58 <+0x8a>
0868db3f +0x071:  mov    0x8(%ebp),%eax
0868db42 +0x074:  mov    %eax,(%esp)
0868db45 +0x077:  call   08696ca4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x34f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x34f9
0868db4a +0x07c:  xor    $0x1,%eax
0868db4d +0x07f:  test   %al,%al
0868db4f +0x081:  je     0868db58 <+0x8a>
0868db51 +0x083:  mov    $0x1,%eax
0868db56 +0x088:  jmp    0868db5d <+0x8f>
0868db58 +0x08a:  mov    $0x0,%eax
0868db5d +0x08f:  test   %al,%al
0868db5f +0x091:  je     0868db90 <+0xc2>
0868db61 +0x093:  mov    -0x1c(%ebp),%eax
0868db64 +0x096:  mov    %eax,%edx
0868db66 +0x098:  mov    0x8(%ebp),%eax
0868db69 +0x09b:  mov    %dl,0x8d24f(%eax)
0868db6f +0x0a1:  mov    -0x18(%ebp),%eax
0868db72 +0x0a4:  mov    %eax,%edx
0868db74 +0x0a6:  mov    0x8(%ebp),%eax
0868db77 +0x0a9:  mov    %dl,0x8d250(%eax)
0868db7d +0x0af:  mov    -0x20(%ebp),%eax
0868db80 +0x0b2:  mov    %eax,%edx
0868db82 +0x0b4:  mov    0x8(%ebp),%eax
0868db85 +0x0b7:  mov    %dl,0x8d24e(%eax)
0868db8b +0x0bd:  jmp    0868dc5d <+0x18f>
0868db90 +0x0c2:  mov    0x8(%ebp),%eax
0868db93 +0x0c5:  add    $0x8d24d,%eax
0868db98 +0x0ca:  movl   $0x4,0x8(%esp)
0868dba0 +0x0d2:  movl   $0x0,0x4(%esp)
0868dba8 +0x0da:  mov    %eax,(%esp)
0868dbab +0x0dd:  call   0807dcc0 <_init+0x5b8>
0868dbb0 +0x0e2:  jmp    0868dc5d <+0x18f>
0868dbb5 +0x0e7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868dbba +0x0ec:  lea    0x8710(%eax),%edx
0868dbc0 +0x0f2:  mov    0xc(%ebp),%eax
0868dbc3 +0x0f5:  mov    %eax,0x4(%esp)
0868dbc7 +0x0f9:  mov    %edx,(%esp)
0868dbca +0x0fc:  call   0822b136 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x7e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x7e0
0868dbcf +0x101:  mov    %eax,-0x10(%ebp)
0868dbd2 +0x104:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868dbd7 +0x109:  add    $0x871c,%eax
0868dbdc +0x10e:  mov    %eax,(%esp)
0868dbdf +0x111:  call   0869cb5c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x93b1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x93b1
0868dbe4 +0x116:  mov    %eax,-0xc(%ebp)
0868dbe7 +0x119:  cmpl   $0x0,-0x10(%ebp)
0868dbeb +0x11d:  js     0868dc0e <+0x140>
0868dbed +0x11f:  mov    -0x10(%ebp),%eax
0868dbf0 +0x122:  cmp    -0xc(%ebp),%eax
0868dbf3 +0x125:  jge    0868dc0e <+0x140>
0868dbf5 +0x127:  mov    0x8(%ebp),%eax
0868dbf8 +0x12a:  mov    %eax,(%esp)
0868dbfb +0x12d:  call   08696ca4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x34f9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x34f9
0868dc00 +0x132:  xor    $0x1,%eax
0868dc03 +0x135:  test   %al,%al
0868dc05 +0x137:  je     0868dc0e <+0x140>
0868dc07 +0x139:  mov    $0x1,%eax
0868dc0c +0x13e:  jmp    0868dc13 <+0x145>
0868dc0e +0x140:  mov    $0x0,%eax
0868dc13 +0x145:  test   %al,%al
0868dc15 +0x147:  je     0868dc3d <+0x16f>
0868dc17 +0x149:  mov    -0x10(%ebp),%ebx
0868dc1a +0x14c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868dc1f +0x151:  add    $0x871c,%eax
0868dc24 +0x156:  mov    %ebx,0x4(%esp)
0868dc28 +0x15a:  mov    %eax,(%esp)
0868dc2b +0x15d:  call   0869cb78 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x93cd>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x93cd
0868dc30 +0x162:  mov    0x8(%ebp),%edx
0868dc33 +0x165:  mov    (%eax),%eax
0868dc35 +0x167:  mov    %eax,0x8d24d(%edx)
0868dc3b +0x16d:  jmp    0868dc5d <+0x18f>
0868dc3d +0x16f:  mov    0x8(%ebp),%eax
0868dc40 +0x172:  add    $0x8d24d,%eax
0868dc45 +0x177:  movl   $0x4,0x8(%esp)
0868dc4d +0x17f:  movl   $0x0,0x4(%esp)
0868dc55 +0x187:  mov    %eax,(%esp)
0868dc58 +0x18a:  call   0807dcc0 <_init+0x5b8>
0868dc5d +0x18f:  add    $0x34,%esp
0868dc60 +0x192:  pop    %ebx
0868dc61 +0x193:  pop    %ebp
0868dc62 +0x194:  ret
0868dc63 +0x195:  nop
```

## 反编译 C

```c
// CUser::set_growth_power_exp_reward @ 0x868dace

/* CUser::set_growth_power_exp_reward(int) */

void __thiscall CUser::set_growth_power_exp_reward(CUser *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  Value local_2c [8];
  CUser local_24;
  CUser local_20;
  CUser local_1c;
  int *local_18;
  uint local_14;
  int local_10;
  
  local_18 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5d);
  cVar3 = (**(code **)(*local_18 + 0x34))(local_18,0);
  if (cVar3 != '\0') {
    stSeriaBlessingScript::Value::Value(local_2c);
    iVar4 = G_CDataManager();
    cVar3 = stSeriaBlessingScript::get_value
                      ((stSeriaBlessingScript *)(iVar4 + 0x5094),param_1,local_2c);
    if ((cVar3 == '\0') ||
       (cVar3 = CUserCharacInfo::is_growth_power_exp_reward_right((CUserCharacInfo *)this),
       cVar3 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      this[0x8d24f] = local_20;
      this[0x8d250] = local_1c;
      this[0x8d24e] = local_24;
    }
    else {
      memset(this + 0x8d24d,0,4);
    }
    return;
  }
  iVar4 = G_CDataManager();
  local_14 = STGrowthPowerData::get_idx_break_away_section
                       ((STGrowthPowerData *)(iVar4 + 0x8710),param_1);
  iVar4 = G_CDataManager();
  local_10 = std::vector<STExpReward,std::allocator<STExpReward>>::size
                       ((vector<STExpReward,std::allocator<STExpReward>> *)(iVar4 + 0x871c));
  if ((((int)local_14 < 0) || (local_10 <= (int)local_14)) ||
     (cVar3 = CUserCharacInfo::is_growth_power_exp_reward_right((CUserCharacInfo *)this),
     cVar3 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = local_14;
  if (bVar1) {
    iVar4 = G_CDataManager();
    puVar5 = (undefined4 *)
             std::vector<STExpReward,std::allocator<STExpReward>>::operator[]
                       ((vector<STExpReward,std::allocator<STExpReward>> *)(iVar4 + 0x871c),uVar2);
    *(undefined4 *)(this + 0x8d24d) = *puVar5;
    return;
  }
  memset(this + 0x8d24d,0,4);
  return;
}
```

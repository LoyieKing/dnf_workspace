# LoadCharacTypeHotKey

`_ZN5CUser20LoadCharacTypeHotKeyEii`

`CUser::LoadCharacTypeHotKey(int, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692d2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692d2a  _ZN5CUser20LoadCharacTypeHotKeyEii
#           CUser::LoadCharacTypeHotKey(int, int)
# range [0x08692d2a, 0x08692e9b]
08692d2a +0x000:  push   %ebp
08692d2b +0x001:  mov    %esp,%ebp
08692d2d +0x003:  push   %esi
08692d2e +0x004:  push   %ebx
08692d2f +0x005:  sub    $0x20,%esp
08692d32 +0x008:  mov    0x10(%ebp),%eax
08692d35 +0x00b:  mov    %eax,0x4(%esp)
08692d39 +0x00f:  mov    0x8(%ebp),%eax
08692d3c +0x012:  mov    %eax,(%esp)
08692d3f +0x015:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
08692d44 +0x01a:  mov    %al,-0x9(%ebp)
08692d47 +0x01d:  movzbl -0x9(%ebp),%ebx
08692d4b +0x021:  mov    0x8(%ebp),%eax
08692d4e +0x024:  mov    %eax,(%esp)
08692d51 +0x027:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
08692d56 +0x02c:  mov    %ebx,0x4(%esp)
08692d5a +0x030:  mov    %eax,(%esp)
08692d5d +0x033:  call   084b72b0 <_ZN11CGameOption20get_load_hotkey_flagEh>  ; CGameOption::get_load_hotkey_flag(unsigned char)
08692d62 +0x038:  test   %al,%al
08692d64 +0x03a:  je     08692e58 <+0x12e>
08692d6a +0x040:  mov    0x10(%ebp),%eax
08692d6d +0x043:  mov    %eax,0x8(%esp)
08692d71 +0x047:  mov    0xc(%ebp),%eax
08692d74 +0x04a:  mov    %eax,0x4(%esp)
08692d78 +0x04e:  mov    0x8(%ebp),%eax
08692d7b +0x051:  mov    %eax,(%esp)
08692d7e +0x054:  call   08692e9c <_ZN5CUser31CheckLoadHotKeyCashedCharacTypeEii>  ; CUser::CheckLoadHotKeyCashedCharacType(int, int)
08692d83 +0x059:  test   %al,%al
08692d85 +0x05b:  je     08692e94 <+0x16a>
08692d8b +0x061:  lea    -0x18(%ebp),%eax
08692d8e +0x064:  mov    %eax,(%esp)
08692d91 +0x067:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08692d96 +0x06c:  movl   $0x1c4,0x8(%esp)
08692d9e +0x074:  movl   $0x0,0x4(%esp)
08692da6 +0x07c:  lea    -0x18(%ebp),%eax
08692da9 +0x07f:  mov    %eax,(%esp)
08692dac +0x082:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08692db1 +0x087:  movzbl -0x9(%ebp),%eax
08692db5 +0x08b:  mov    %eax,0x4(%esp)
08692db9 +0x08f:  lea    -0x18(%ebp),%eax
08692dbc +0x092:  mov    %eax,(%esp)
08692dbf +0x095:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08692dc4 +0x09a:  movl   $0xbc,0x4(%esp)
08692dcc +0x0a2:  lea    -0x18(%ebp),%eax
08692dcf +0x0a5:  mov    %eax,(%esp)
08692dd2 +0x0a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08692dd7 +0x0ad:  movzbl -0x9(%ebp),%ebx
08692ddb +0x0b1:  mov    0x8(%ebp),%eax
08692dde +0x0b4:  mov    %eax,(%esp)
08692de1 +0x0b7:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
08692de6 +0x0bc:  mov    %ebx,0x4(%esp)
08692dea +0x0c0:  mov    %eax,(%esp)
08692ded +0x0c3:  call   084b7266 <_ZN11CGameOption17get_hotkey_optionEh>  ; CGameOption::get_hotkey_option(unsigned char)
08692df2 +0x0c8:  movl   $0xbc,0x8(%esp)
08692dfa +0x0d0:  mov    %eax,0x4(%esp)
08692dfe +0x0d4:  lea    -0x18(%ebp),%eax
08692e01 +0x0d7:  mov    %eax,(%esp)
08692e04 +0x0da:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08692e09 +0x0df:  movl   $0x1,0x4(%esp)
08692e11 +0x0e7:  lea    -0x18(%ebp),%eax
08692e14 +0x0ea:  mov    %eax,(%esp)
08692e17 +0x0ed:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08692e1c +0x0f2:  lea    -0x18(%ebp),%eax
08692e1f +0x0f5:  mov    %eax,0x4(%esp)
08692e23 +0x0f9:  mov    0x8(%ebp),%eax
08692e26 +0x0fc:  mov    %eax,(%esp)
08692e29 +0x0ff:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08692e2e +0x104:  jmp    08692e4b <+0x121>
08692e30 +0x106:  mov    %edx,%ebx
08692e32 +0x108:  mov    %eax,%esi
08692e34 +0x10a:  lea    -0x18(%ebp),%eax
08692e37 +0x10d:  mov    %eax,(%esp)
08692e3a +0x110:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08692e3f +0x115:  mov    %esi,%eax
08692e41 +0x117:  mov    %ebx,%edx
08692e43 +0x119:  mov    %eax,(%esp)
08692e46 +0x11c:  call   08ae3750 <_Unwind_Resume>
08692e4b +0x121:  lea    -0x18(%ebp),%eax
08692e4e +0x124:  mov    %eax,(%esp)
08692e51 +0x127:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08692e56 +0x12c:  jmp    08692e94 <+0x16a>
08692e58 +0x12e:  mov    0x10(%ebp),%eax
08692e5b +0x131:  mov    %eax,0x4(%esp)
08692e5f +0x135:  mov    0x8(%ebp),%eax
08692e62 +0x138:  mov    %eax,(%esp)
08692e65 +0x13b:  call   08692ef2 <_ZN5CUser19GetCharacHotKeyTypeEi>  ; CUser::GetCharacHotKeyType(int)
08692e6a +0x140:  mov    %eax,%esi
08692e6c +0x142:  mov    0x8(%ebp),%eax
08692e6f +0x145:  mov    %eax,(%esp)
08692e72 +0x148:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08692e77 +0x14d:  mov    %eax,%ebx
08692e79 +0x14f:  mov    0x8(%ebp),%eax
08692e7c +0x152:  mov    %eax,(%esp)
08692e7f +0x155:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08692e84 +0x15a:  mov    %esi,0x8(%esp)
08692e88 +0x15e:  mov    %ebx,0x4(%esp)
08692e8c +0x162:  mov    %eax,(%esp)
08692e8f +0x165:  call   0842f710 <_ZN25DB_LoadCharacHotKeyOption11makeRequestEiji>  ; DB_LoadCharacHotKeyOption::makeRequest(int, unsigned int, int)
08692e94 +0x16a:  add    $0x20,%esp
08692e97 +0x16d:  pop    %ebx
08692e98 +0x16e:  pop    %esi
08692e99 +0x16f:  pop    %ebp
08692e9a +0x170:  ret
08692e9b +0x171:  nop
```

## 反编译 C

```c
// CUser::LoadCharacTypeHotKey @ 0x8692d2a

/* CUser::LoadCharacTypeHotKey(int, int) */

void __thiscall CUser::LoadCharacTypeHotKey(CUser *this,int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  CGameOption *pCVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  PacketGuard local_1c [15];
  byte local_d;
  
  bVar1 = GetCharacHotKeyType(this,param_2);
  local_d = bVar1;
  pCVar3 = (CGameOption *)GetGameOptionRef(this);
  cVar2 = CGameOption::get_load_hotkey_flag(pCVar3,bVar1);
  if (cVar2 == '\0') {
    iVar5 = GetCharacHotKeyType(this,param_2);
    uVar6 = get_acc_id(this);
    iVar7 = GetUID(this);
    DB_LoadCharacHotKeyOption::makeRequest(iVar7,uVar6,iVar5);
  }
  else {
    cVar2 = CheckLoadHotKeyCashedCharacType(this,param_1,param_2);
    if (cVar2 != '\0') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08692dac to 08692e2d has its CatchHandler @ 08692e30 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1c4);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0xbc);
      bVar1 = local_d;
      pCVar3 = (CGameOption *)GetGameOptionRef(this);
      pcVar4 = (char *)CGameOption::get_hotkey_option(pCVar3,bVar1);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,pcVar4,0xbc);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      Send(this,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```

# send_power_war_hp_of_vill

`_ZN9GameWorld25send_power_war_hp_of_villEi`

`GameWorld::send_power_war_hp_of_vill(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8008  _ZN9GameWorld25send_power_war_hp_of_villEi
#           GameWorld::send_power_war_hp_of_vill(int)
# range [0x086c8008, 0x086c8167]
086c8008 +0x000:  push   %ebp
086c8009 +0x001:  mov    %esp,%ebp
086c800b +0x003:  push   %esi
086c800c +0x004:  push   %ebx
086c800d +0x005:  sub    $0x30,%esp
086c8010 +0x008:  cmpl   $0x0,0xc(%ebp)
086c8014 +0x00c:  je     086c8157 <+0x14f>
086c801a +0x012:  movl   $&g_townScriptFileList,(%esp)
086c8021 +0x019:  call   086d2cd8 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1509>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1509
086c8026 +0x01e:  cmp    0xc(%ebp),%eax
086c8029 +0x021:  setl   %al
086c802c +0x024:  test   %al,%al
086c802e +0x026:  jne    086c815a <+0x152>
086c8034 +0x02c:  cmpl   $0x0,0xc(%ebp)
086c8038 +0x030:  jle    086c815d <+0x155>
086c803e +0x036:  mov    &MAX_VILLAGE_NUM,%eax
086c8043 +0x03b:  cmp    %eax,0xc(%ebp)
086c8046 +0x03e:  jge    086c8160 <+0x158>
086c804c +0x044:  mov    0x8(%ebp),%eax
086c804f +0x047:  mov    0x1c(%eax),%edx
086c8052 +0x04a:  mov    0xc(%ebp),%eax
086c8055 +0x04d:  imul   $0x34,%eax,%eax
086c8058 +0x050:  lea    (%edx,%eax,1),%eax
086c805b +0x053:  mov    %eax,-0x10(%ebp)
086c805e +0x056:  lea    -0x1c(%ebp),%eax
086c8061 +0x059:  mov    %eax,(%esp)
086c8064 +0x05c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c8069 +0x061:  movl   $0xe3,0x8(%esp)
086c8071 +0x069:  movl   $0x0,0x4(%esp)
086c8079 +0x071:  lea    -0x1c(%ebp),%eax
086c807c +0x074:  mov    %eax,(%esp)
086c807f +0x077:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c8084 +0x07c:  lea    -0x1c(%ebp),%eax
086c8087 +0x07f:  mov    %eax,(%esp)
086c808a +0x082:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086c808f +0x087:  mov    %eax,-0x20(%ebp)
086c8092 +0x08a:  movl   $0x0,0x4(%esp)
086c809a +0x092:  lea    -0x1c(%ebp),%eax
086c809d +0x095:  mov    %eax,(%esp)
086c80a0 +0x098:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c80a5 +0x09d:  movl   $0x0,-0x24(%ebp)
086c80ac +0x0a4:  movl   $0x0,-0xc(%ebp)
086c80b3 +0x0ab:  jmp    086c8104 <+0xfc>
086c80b5 +0x0ad:  mov    -0x10(%ebp),%eax
086c80b8 +0x0b0:  mov    0x28(%eax),%edx
086c80bb +0x0b3:  mov    -0xc(%ebp),%eax
086c80be +0x0b6:  imul   $0x98,%eax,%eax
086c80c4 +0x0bc:  lea    (%edx,%eax,1),%eax
086c80c7 +0x0bf:  mov    %eax,(%esp)
086c80ca +0x0c2:  call   086d238e <_GLOBAL__I_MAX_VILLAGE_NUM+0xbbf>  ; global constructors keyed to MAX_VILLAGE_NUM+0xbbf
086c80cf +0x0c7:  cmp    $0xffffffff,%eax
086c80d2 +0x0ca:  setne  %al
086c80d5 +0x0cd:  test   %al,%al
086c80d7 +0x0cf:  je     086c8100 <+0xf8>
086c80d9 +0x0d1:  mov    -0x10(%ebp),%eax
086c80dc +0x0d4:  mov    0x28(%eax),%edx
086c80df +0x0d7:  mov    -0xc(%ebp),%eax
086c80e2 +0x0da:  imul   $0x98,%eax,%eax
086c80e8 +0x0e0:  add    %eax,%edx
086c80ea +0x0e2:  lea    -0x24(%ebp),%eax
086c80ed +0x0e5:  mov    %eax,0x8(%esp)
086c80f1 +0x0e9:  lea    -0x1c(%ebp),%eax
086c80f4 +0x0ec:  mov    %eax,0x4(%esp)
086c80f8 +0x0f0:  mov    %edx,(%esp)
086c80fb +0x0f3:  call   086c2c1e <_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi>  ; Area::make_power_war_hp_of_vill(PacketGuard&, int&)
086c8100 +0x0f8:  addl   $0x1,-0xc(%ebp)
086c8104 +0x0fc:  mov    -0x10(%ebp),%eax
086c8107 +0x0ff:  mov    0x24(%eax),%eax
086c810a +0x102:  cmp    -0xc(%ebp),%eax
086c810d +0x105:  setg   %al
086c8110 +0x108:  test   %al,%al
086c8112 +0x10a:  jne    086c80b5 <+0xad>
086c8114 +0x10c:  mov    -0x24(%ebp),%eax
086c8117 +0x10f:  mov    %eax,0x8(%esp)
086c811b +0x113:  lea    -0x20(%ebp),%eax
086c811e +0x116:  mov    %eax,0x4(%esp)
086c8122 +0x11a:  lea    -0x1c(%ebp),%eax
086c8125 +0x11d:  mov    %eax,(%esp)
086c8128 +0x120:  call   08116908 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x1d>  ; global constructors keyed to CEventManager::CEventManager()+0x1d
086c812d +0x125:  jmp    086c814a <+0x142>
086c812f +0x127:  mov    %edx,%ebx
086c8131 +0x129:  mov    %eax,%esi
086c8133 +0x12b:  lea    -0x1c(%ebp),%eax
086c8136 +0x12e:  mov    %eax,(%esp)
086c8139 +0x131:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c813e +0x136:  mov    %esi,%eax
086c8140 +0x138:  mov    %ebx,%edx
086c8142 +0x13a:  mov    %eax,(%esp)
086c8145 +0x13d:  call   08ae3750 <_Unwind_Resume>
086c814a +0x142:  lea    -0x1c(%ebp),%eax
086c814d +0x145:  mov    %eax,(%esp)
086c8150 +0x148:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8155 +0x14d:  jmp    086c8161 <+0x159>
086c8157 +0x14f:  nop
086c8158 +0x150:  jmp    086c8161 <+0x159>
086c815a +0x152:  nop
086c815b +0x153:  jmp    086c8161 <+0x159>
086c815d +0x155:  nop
086c815e +0x156:  jmp    086c8161 <+0x159>
086c8160 +0x158:  nop
086c8161 +0x159:  add    $0x30,%esp
086c8164 +0x15c:  pop    %ebx
086c8165 +0x15d:  pop    %esi
086c8166 +0x15e:  pop    %ebp
086c8167 +0x15f:  ret
```

## 反编译 C

```c
// GameWorld::send_power_war_hp_of_vill @ 0x86c8008

/* GameWorld::send_power_war_hp_of_vill(int) */

void __thiscall GameWorld::send_power_war_hp_of_vill(GameWorld *this,int param_1)

{
  int iVar1;
  int local_28;
  int local_24;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  if ((((param_1 != 0) &&
       (iVar1 = std::
                map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                ::size((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                        *)g_townScriptFileList), param_1 <= iVar1)) && (0 < param_1)) &&
     (param_1 < MAX_VILLAGE_NUM)) {
    local_14 = *(int *)(this + 0x1c) + param_1 * 0x34;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 086c807f to 086c812c has its CatchHandler @ 086c812f */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe3);
    local_24 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    local_28 = 0;
    for (local_10 = 0; local_10 < *(int *)(local_14 + 0x24); local_10 = local_10 + 1) {
      iVar1 = Area::get_area_index((Area *)(*(int *)(local_14 + 0x28) + local_10 * 0x98));
      if (iVar1 != -1) {
        Area::make_power_war_hp_of_vill
                  ((Area *)(*(int *)(local_14 + 0x28) + local_10 * 0x98),local_20,&local_28);
      }
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,&local_24,local_28);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```

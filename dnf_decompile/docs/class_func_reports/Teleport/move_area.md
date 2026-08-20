# move_area

`_ZN8Teleport9move_areaEP5CUser`

`Teleport::move_area(CUser*)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283fb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283fb8  _ZN8Teleport9move_areaEP5CUser
#           Teleport::move_area(CUser*)
# range [0x08283fb8, 0x082840d9]
08283fb8 +0x000:  push   %ebp
08283fb9 +0x001:  mov    %esp,%ebp
08283fbb +0x003:  push   %edi
08283fbc +0x004:  push   %esi
08283fbd +0x005:  push   %ebx
08283fbe +0x006:  sub    $0x4c,%esp
08283fc1 +0x009:  cmpl   $0x0,0xc(%ebp)
08283fc5 +0x00d:  jne    08283fd1 <+0x19>
08283fc7 +0x00f:  mov    $0x0,%eax
08283fcc +0x014:  jmp    082840d1 <+0x119>
08283fd1 +0x019:  movl   $0x1,0x8(%esp)
08283fd9 +0x021:  mov    0xc(%ebp),%eax
08283fdc +0x024:  mov    %eax,0x4(%esp)
08283fe0 +0x028:  mov    0x8(%ebp),%eax
08283fe3 +0x02b:  mov    %eax,(%esp)
08283fe6 +0x02e:  call   08283eba <_ZN8Teleport20send_teleport_effectEP5CUseri>  ; Teleport::send_teleport_effect(CUser*, int)
08283feb +0x033:  mov    0x8(%ebp),%eax
08283fee +0x036:  add    $0x4,%eax
08283ff1 +0x039:  mov    %eax,(%esp)
08283ff4 +0x03c:  call   0822d758 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e02>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e02
08283ff9 +0x041:  movzbl %al,%eax
08283ffc +0x044:  mov    %eax,-0x20(%ebp)
08283fff +0x047:  mov    0x8(%ebp),%eax
08284002 +0x04a:  add    $0x4,%eax
08284005 +0x04d:  mov    %eax,(%esp)
08284008 +0x050:  call   0822d74c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2df6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2df6
0828400d +0x055:  cwtl
0828400e +0x056:  mov    %eax,-0x1c(%ebp)
08284011 +0x059:  mov    0x8(%ebp),%eax
08284014 +0x05c:  add    $0x4,%eax
08284017 +0x05f:  mov    %eax,(%esp)
0828401a +0x062:  call   0822d740 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dea
0828401f +0x067:  movswl %ax,%edi
08284022 +0x06a:  mov    0x8(%ebp),%eax
08284025 +0x06d:  add    $0x4,%eax
08284028 +0x070:  mov    %eax,(%esp)
0828402b +0x073:  call   0822d734 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dde
08284030 +0x078:  movzbl %al,%esi
08284033 +0x07b:  mov    0x8(%ebp),%eax
08284036 +0x07e:  add    $0x4,%eax
08284039 +0x081:  mov    %eax,(%esp)
0828403c +0x084:  call   0822d728 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dd2
08284041 +0x089:  movzbl %al,%ebx
08284044 +0x08c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08284049 +0x091:  movl   $0x0,0x28(%esp)
08284051 +0x099:  movl   $0x0,0x24(%esp)
08284059 +0x0a1:  movl   $0x2,0x20(%esp)
08284061 +0x0a9:  movl   $0x1,0x1c(%esp)
08284069 +0x0b1:  mov    -0x20(%ebp),%edx
0828406c +0x0b4:  mov    %edx,0x18(%esp)
08284070 +0x0b8:  mov    -0x1c(%ebp),%edx
08284073 +0x0bb:  mov    %edx,0x14(%esp)
08284077 +0x0bf:  mov    %edi,0x10(%esp)
0828407b +0x0c3:  mov    %esi,0xc(%esp)
0828407f +0x0c7:  mov    %ebx,0x8(%esp)
08284083 +0x0cb:  mov    0xc(%ebp),%edx
08284086 +0x0ce:  mov    %edx,0x4(%esp)
0828408a +0x0d2:  mov    %eax,(%esp)
0828408d +0x0d5:  call   086c5a84 <_ZN9GameWorld9move_areaEP5CUseriiiiibiii>  ; GameWorld::move_area(CUser*, int, int, int, int, int, bool, int, int, int)
08284092 +0x0da:  xor    $0x1,%eax
08284095 +0x0dd:  test   %al,%al
08284097 +0x0df:  je     082840a0 <+0xe8>
08284099 +0x0e1:  mov    $0x0,%eax
0828409e +0x0e6:  jmp    082840d1 <+0x119>
082840a0 +0x0e8:  movl   $0x2,0x8(%esp)
082840a8 +0x0f0:  mov    0xc(%ebp),%eax
082840ab +0x0f3:  mov    %eax,0x4(%esp)
082840af +0x0f7:  mov    0x8(%ebp),%eax
082840b2 +0x0fa:  mov    %eax,(%esp)
082840b5 +0x0fd:  call   08283eba <_ZN8Teleport20send_teleport_effectEP5CUseri>  ; Teleport::send_teleport_effect(CUser*, int)
082840ba +0x102:  mov    0xc(%ebp),%eax
082840bd +0x105:  mov    %eax,0x4(%esp)
082840c1 +0x109:  mov    0x8(%ebp),%eax
082840c4 +0x10c:  mov    %eax,(%esp)
082840c7 +0x10f:  call   08283e30 <_ZN8Teleport25update_next_end_cool_timeEP5CUser>  ; Teleport::update_next_end_cool_time(CUser*)
082840cc +0x114:  mov    $0x1,%eax
082840d1 +0x119:  add    $0x4c,%esp
082840d4 +0x11c:  pop    %ebx
082840d5 +0x11d:  pop    %esi
082840d6 +0x11e:  pop    %edi
082840d7 +0x11f:  pop    %ebp
082840d8 +0x120:  ret
082840d9 +0x121:  nop
```

## 反编译 C

```c
// Teleport::move_area @ 0x8283fb8

/* Teleport::move_area(CUser*) */

undefined4 __thiscall Teleport::move_area(Teleport *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0;
  }
  else {
    send_teleport_effect(this,param_1,1);
    uVar5 = stPartyTelePort::get_teleport_direction((stPartyTelePort *)(this + 4));
    sVar2 = stPartyTelePort::get_teleport_posy((stPartyTelePort *)(this + 4));
    sVar3 = stPartyTelePort::get_teleport_posx((stPartyTelePort *)(this + 4));
    uVar6 = stPartyTelePort::get_teleport_area_index((stPartyTelePort *)(this + 4));
    uVar7 = stPartyTelePort::get_teleport_village((stPartyTelePort *)(this + 4));
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::move_area
                      (this_00,param_1,uVar7 & 0xff,uVar6 & 0xff,(int)sVar3,(int)sVar2,uVar5 & 0xff,
                       true,2,0,0);
    if (cVar1 == '\x01') {
      send_teleport_effect(this,param_1,2);
      update_next_end_cool_time(this,param_1);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}
```

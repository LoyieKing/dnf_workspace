# check_error

`_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SoloTeleport` | `0x081e1e98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1e98  _ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e1e98, 0x081e1ff5]
081e1e98 +0x000:  push   %ebp
081e1e99 +0x001:  mov    %esp,%ebp
081e1e9b +0x003:  push   %edi
081e1e9c +0x004:  push   %esi
081e1e9d +0x005:  push   %ebx
081e1e9e +0x006:  sub    $0x5c,%esp
081e1ea1 +0x009:  cmpl   $0x0,0xc(%ebp)
081e1ea5 +0x00d:  jne    081e1eb1 <+0x19>
081e1ea7 +0x00f:  mov    $0xffffffff,%eax
081e1eac +0x014:  jmp    081e1fed <+0x155>
081e1eb1 +0x019:  mov    0x10(%ebp),%eax
081e1eb4 +0x01c:  mov    %eax,-0x20(%ebp)
081e1eb7 +0x01f:  mov    -0x20(%ebp),%eax
081e1eba +0x022:  mov    0x30(%eax),%eax
081e1ebd +0x025:  cmp    $0xffffffff,%eax
081e1ec0 +0x028:  jne    081e1ed7 <+0x3f>
081e1ec2 +0x02a:  mov    -0x20(%ebp),%eax
081e1ec5 +0x02d:  mov    0x34(%eax),%eax
081e1ec8 +0x030:  cmp    $0xffffffff,%eax
081e1ecb +0x033:  jne    081e1ed7 <+0x3f>
081e1ecd +0x035:  mov    $0xffffffff,%eax
081e1ed2 +0x03a:  jmp    081e1fed <+0x155>
081e1ed7 +0x03f:  movl   $0x0,-0x1c(%ebp)
081e1ede +0x046:  lea    -0x28(%ebp),%eax
081e1ee1 +0x049:  mov    %eax,(%esp)
081e1ee4 +0x04c:  call   0822d788 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e32>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e32
081e1ee9 +0x051:  mov    -0x20(%ebp),%eax
081e1eec +0x054:  mov    0x30(%eax),%eax
081e1eef +0x057:  mov    %eax,-0x28(%ebp)
081e1ef2 +0x05a:  mov    0xc(%ebp),%eax
081e1ef5 +0x05d:  mov    %eax,-0x24(%ebp)
081e1ef8 +0x060:  mov    -0x20(%ebp),%eax
081e1efb +0x063:  mov    0x44(%eax),%eax
081e1efe +0x066:  mov    (%eax),%eax
081e1f00 +0x068:  add    $0x8,%eax
081e1f03 +0x06b:  mov    (%eax),%ecx
081e1f05 +0x06d:  mov    -0x20(%ebp),%eax
081e1f08 +0x070:  mov    0x44(%eax),%eax
081e1f0b +0x073:  lea    -0x28(%ebp),%edx
081e1f0e +0x076:  mov    %edx,0x4(%esp)
081e1f12 +0x07a:  mov    %eax,(%esp)
081e1f15 +0x07d:  call   *%ecx
081e1f17 +0x07f:  mov    %eax,-0x1c(%ebp)
081e1f1a +0x082:  cmpl   $0x0,-0x1c(%ebp)
081e1f1e +0x086:  je     081e1f28 <+0x90>
081e1f20 +0x088:  mov    -0x1c(%ebp),%eax
081e1f23 +0x08b:  jmp    081e1fed <+0x155>
081e1f28 +0x090:  mov    -0x20(%ebp),%eax
081e1f2b +0x093:  mov    0x44(%eax),%eax
081e1f2e +0x096:  mov    %eax,(%esp)
081e1f31 +0x099:  call   08283db6 <_ZN8Teleport18get_party_teleportEv>  ; Teleport::get_party_teleport()
081e1f36 +0x09e:  mov    %eax,(%esp)
081e1f39 +0x0a1:  call   0822d758 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e02>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e02
081e1f3e +0x0a6:  movzbl %al,%eax
081e1f41 +0x0a9:  mov    %eax,-0x30(%ebp)
081e1f44 +0x0ac:  mov    -0x20(%ebp),%eax
081e1f47 +0x0af:  mov    0x44(%eax),%eax
081e1f4a +0x0b2:  mov    %eax,(%esp)
081e1f4d +0x0b5:  call   08283db6 <_ZN8Teleport18get_party_teleportEv>  ; Teleport::get_party_teleport()
081e1f52 +0x0ba:  mov    %eax,(%esp)
081e1f55 +0x0bd:  call   0822d74c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2df6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2df6
081e1f5a +0x0c2:  cwtl
081e1f5b +0x0c3:  mov    %eax,-0x2c(%ebp)
081e1f5e +0x0c6:  mov    -0x20(%ebp),%eax
081e1f61 +0x0c9:  mov    0x44(%eax),%eax
081e1f64 +0x0cc:  mov    %eax,(%esp)
081e1f67 +0x0cf:  call   08283db6 <_ZN8Teleport18get_party_teleportEv>  ; Teleport::get_party_teleport()
081e1f6c +0x0d4:  mov    %eax,(%esp)
081e1f6f +0x0d7:  call   0822d740 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dea
081e1f74 +0x0dc:  movswl %ax,%edi
081e1f77 +0x0df:  mov    -0x20(%ebp),%eax
081e1f7a +0x0e2:  mov    0x44(%eax),%eax
081e1f7d +0x0e5:  mov    %eax,(%esp)
081e1f80 +0x0e8:  call   08283db6 <_ZN8Teleport18get_party_teleportEv>  ; Teleport::get_party_teleport()
081e1f85 +0x0ed:  mov    %eax,(%esp)
081e1f88 +0x0f0:  call   0822d734 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dde>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dde
081e1f8d +0x0f5:  movzbl %al,%esi
081e1f90 +0x0f8:  mov    -0x20(%ebp),%eax
081e1f93 +0x0fb:  mov    0x44(%eax),%eax
081e1f96 +0x0fe:  mov    %eax,(%esp)
081e1f99 +0x101:  call   08283db6 <_ZN8Teleport18get_party_teleportEv>  ; Teleport::get_party_teleport()
081e1f9e +0x106:  mov    %eax,(%esp)
081e1fa1 +0x109:  call   0822d728 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2dd2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2dd2
081e1fa6 +0x10e:  movzbl %al,%ebx
081e1fa9 +0x111:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081e1fae +0x116:  movl   $0x2,0x20(%esp)
081e1fb6 +0x11e:  movl   $0x1,0x1c(%esp)
081e1fbe +0x126:  mov    -0x30(%ebp),%edx
081e1fc1 +0x129:  mov    %edx,0x18(%esp)
081e1fc5 +0x12d:  mov    -0x2c(%ebp),%edx
081e1fc8 +0x130:  mov    %edx,0x14(%esp)
081e1fcc +0x134:  mov    %edi,0x10(%esp)
081e1fd0 +0x138:  mov    %esi,0xc(%esp)
081e1fd4 +0x13c:  mov    %ebx,0x8(%esp)
081e1fd8 +0x140:  mov    0xc(%ebp),%edx
081e1fdb +0x143:  mov    %edx,0x4(%esp)
081e1fdf +0x147:  mov    %eax,(%esp)
081e1fe2 +0x14a:  call   086d1002 <_ZN9GameWorld15check_move_areaEP5CUseriiiiibi>  ; GameWorld::check_move_area(CUser*, int, int, int, int, int, bool, int)
081e1fe7 +0x14f:  mov    %eax,-0x1c(%ebp)
081e1fea +0x152:  mov    -0x1c(%ebp),%eax
081e1fed +0x155:  add    $0x5c,%esp
081e1ff0 +0x158:  pop    %ebx
081e1ff1 +0x159:  pop    %esi
081e1ff2 +0x15a:  pop    %edi
081e1ff3 +0x15b:  pop    %ebp
081e1ff4 +0x15c:  ret
081e1ff5 +0x15d:  nop
```

## 反编译 C

```c
// Dispatcher_SoloTeleport::check_error @ 0x81e1e98

/* Dispatcher_SoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_SoloTeleport::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  stPartyTelePort *psVar4;
  uint uVar5;
  uint uVar6;
  CUser *pCVar7;
  undefined4 local_2c;
  MSG_BASE *local_28;
  ParamBase *local_24;
  int local_20;
  
  if (param_2 == (MSG_BASE *)0x0) {
    local_20 = -1;
  }
  else {
    local_24 = param_3;
    if ((*(int *)(param_3 + 0x30) == -1) && (*(int *)(param_3 + 0x34) == -1)) {
      local_20 = -1;
    }
    else {
      local_20 = 0;
      STCheckRuleData::STCheckRuleData((STCheckRuleData *)&local_2c);
      local_2c = *(undefined4 *)(local_24 + 0x30);
      local_28 = param_2;
      local_20 = (**(code **)(**(int **)(local_24 + 0x44) + 8))
                           (*(undefined4 *)(local_24 + 0x44),&local_2c);
      if (local_20 == 0) {
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        bVar1 = (bool)stPartyTelePort::get_teleport_direction(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        sVar2 = stPartyTelePort::get_teleport_posy(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        sVar3 = stPartyTelePort::get_teleport_posx(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        uVar5 = stPartyTelePort::get_teleport_area_index(psVar4);
        psVar4 = (stPartyTelePort *)Teleport::get_party_teleport(*(Teleport **)(local_24 + 0x44));
        uVar6 = stPartyTelePort::get_teleport_village(psVar4);
        pCVar7 = (CUser *)G_GameWorld();
        local_20 = GameWorld::check_move_area
                             (pCVar7,(int)param_2,uVar6 & 0xff,uVar5 & 0xff,(int)sVar3,(int)sVar2,
                              bVar1,1);
      }
    }
  }
  return local_20;
}
```

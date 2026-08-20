# process

`_ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DropItem` | `0x081c2f94` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c2f94  _ZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c2f94, 0x081c3253]
081c2f94 +0x000:  push   %ebp
081c2f95 +0x001:  mov    %esp,%ebp
081c2f97 +0x003:  push   %edi
081c2f98 +0x004:  push   %esi
081c2f99 +0x005:  push   %ebx
081c2f9a +0x006:  sub    $0x4c,%esp
081c2f9d +0x009:  mov    0x10(%ebp),%eax
081c2fa0 +0x00c:  mov    %eax,-0x34(%ebp)
081c2fa3 +0x00f:  mov    0x14(%ebp),%eax
081c2fa6 +0x012:  mov    %eax,-0x30(%ebp)
081c2fa9 +0x015:  mov    0x14(%ebp),%eax
081c2fac +0x018:  mov    %eax,0xc(%esp)
081c2fb0 +0x01c:  mov    0x10(%ebp),%eax
081c2fb3 +0x01f:  mov    %eax,0x8(%esp)
081c2fb7 +0x023:  mov    0xc(%ebp),%eax
081c2fba +0x026:  mov    %eax,0x4(%esp)
081c2fbe +0x02a:  mov    0x8(%ebp),%eax
081c2fc1 +0x02d:  mov    %eax,(%esp)
081c2fc4 +0x030:  call   081c2d9a <_ZN19DisPatcher_DropItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; DisPatcher_DropItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081c2fc9 +0x035:  mov    %eax,%edx
081c2fcb +0x037:  mov    -0x30(%ebp),%eax
081c2fce +0x03a:  mov    %edx,0x4(%eax)
081c2fd1 +0x03d:  mov    -0x30(%ebp),%eax
081c2fd4 +0x040:  mov    0x4(%eax),%eax
081c2fd7 +0x043:  test   %eax,%eax
081c2fd9 +0x045:  jle    081c2ff2 <+0x5e>
081c2fdb +0x047:  mov    -0x34(%ebp),%eax
081c2fde +0x04a:  movzbl 0x11(%eax),%edx
081c2fe2 +0x04e:  mov    -0x30(%ebp),%eax
081c2fe5 +0x051:  mov    %dl,0x8(%eax)
081c2fe8 +0x054:  mov    $0x0,%eax
081c2fed +0x059:  jmp    081c324c <+0x2b8>
081c2ff2 +0x05e:  mov    -0x30(%ebp),%eax
081c2ff5 +0x061:  mov    0x4(%eax),%eax
081c2ff8 +0x064:  test   %eax,%eax
081c2ffa +0x066:  jns    081c302e <+0x9a>
081c2ffc +0x068:  mov    0xc(%ebp),%eax
081c2fff +0x06b:  mov    %eax,(%esp)
081c3002 +0x06e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c3007 +0x073:  mov    -0x30(%ebp),%edx
081c300a +0x076:  mov    0x4(%edx),%edx
081c300d +0x079:  mov    %eax,0xc(%esp)
081c3011 +0x07d:  mov    %edx,0x8(%esp)
081c3015 +0x081:  movl   $&_ZZN19DisPatcher_DropItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081c301d +0x089:  movl   $0xdcc,(%esp)
081c3024 +0x090:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081c3029 +0x095:  jmp    081c324c <+0x2b8>
081c302e +0x09a:  mov    0xc(%ebp),%eax
081c3031 +0x09d:  mov    %eax,(%esp)
081c3034 +0x0a0:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3039 +0x0a5:  cmp    $0x5,%eax
081c303c +0x0a8:  sete   %al
081c303f +0x0ab:  test   %al,%al
081c3041 +0x0ad:  je     081c30ed <+0x159>
081c3047 +0x0b3:  mov    0xc(%ebp),%eax
081c304a +0x0b6:  mov    %eax,(%esp)
081c304d +0x0b9:  call   0822fe4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54f8
081c3052 +0x0be:  movswl %ax,%ebx
081c3055 +0x0c1:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c305a +0x0c6:  mov    %ebx,0x4(%esp)
081c305e +0x0ca:  mov    %eax,(%esp)
081c3061 +0x0cd:  call   08294f32 <_ZN12CGameManager8GetPartyEi>  ; CGameManager::GetParty(int)
081c3066 +0x0d2:  mov    %eax,-0x2c(%ebp)
081c3069 +0x0d5:  cmpl   $0x0,-0x2c(%ebp)
081c306d +0x0d9:  je     081c3247 <+0x2b3>
081c3073 +0x0df:  mov    -0x34(%ebp),%eax
081c3076 +0x0e2:  mov    0x14(%eax),%esi
081c3079 +0x0e5:  mov    -0x34(%ebp),%eax
081c307c +0x0e8:  movzwl 0x12(%eax),%eax
081c3080 +0x0ec:  movswl %ax,%ebx
081c3083 +0x0ef:  mov    -0x34(%ebp),%eax
081c3086 +0x0f2:  movzbl 0x11(%eax),%eax
081c308a +0x0f6:  movsbl %al,%ecx
081c308d +0x0f9:  mov    -0x34(%ebp),%eax
081c3090 +0x0fc:  movzwl 0xf(%eax),%eax
081c3094 +0x100:  movswl %ax,%edx
081c3097 +0x103:  mov    -0x34(%ebp),%eax
081c309a +0x106:  movzwl 0xd(%eax),%eax
081c309e +0x10a:  cwtl
081c309f +0x10b:  mov    %esi,0x18(%esp)
081c30a3 +0x10f:  mov    %ebx,0x14(%esp)
081c30a7 +0x113:  mov    %ecx,0x10(%esp)
081c30ab +0x117:  mov    %edx,0xc(%esp)
081c30af +0x11b:  mov    %eax,0x8(%esp)
081c30b3 +0x11f:  mov    0xc(%ebp),%eax
081c30b6 +0x122:  mov    %eax,0x4(%esp)
081c30ba +0x126:  mov    -0x2c(%ebp),%eax
081c30bd +0x129:  mov    %eax,(%esp)
081c30c0 +0x12c:  call   085a63f4 <_ZN6CParty9drop_itemEP5CUseriicii>  ; CParty::drop_item(CUser*, int, int, char, int, int)
081c30c5 +0x131:  mov    %eax,-0x28(%ebp)
081c30c8 +0x134:  cmpl   $0x0,-0x28(%ebp)
081c30cc +0x138:  jle    081c3247 <+0x2b3>
081c30d2 +0x13e:  mov    -0x28(%ebp),%edx
081c30d5 +0x141:  mov    -0x30(%ebp),%eax
081c30d8 +0x144:  mov    %edx,0x4(%eax)
081c30db +0x147:  mov    -0x34(%ebp),%eax
081c30de +0x14a:  movzbl 0x11(%eax),%edx
081c30e2 +0x14e:  mov    -0x30(%ebp),%eax
081c30e5 +0x151:  mov    %dl,0x8(%eax)
081c30e8 +0x154:  jmp    081c3247 <+0x2b3>
081c30ed +0x159:  mov    0xc(%ebp),%eax
081c30f0 +0x15c:  mov    %eax,(%esp)
081c30f3 +0x15f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c30f8 +0x164:  cmp    $0xc,%eax
081c30fb +0x167:  sete   %al
081c30fe +0x16a:  test   %al,%al
081c3100 +0x16c:  je     081c3178 <+0x1e4>
081c3102 +0x16e:  mov    0xc(%ebp),%eax
081c3105 +0x171:  mov    %eax,(%esp)
081c3108 +0x174:  call   08655220 <_ZN5CUser12getBossTowerEv>  ; CUser::getBossTower()
081c310d +0x179:  mov    %eax,-0x24(%ebp)
081c3110 +0x17c:  cmpl   $0x0,-0x24(%ebp)
081c3114 +0x180:  je     081c3247 <+0x2b3>
081c311a +0x186:  mov    -0x24(%ebp),%eax
081c311d +0x189:  mov    (%eax),%eax
081c311f +0x18b:  add    $0x20,%eax
081c3122 +0x18e:  mov    (%eax),%edi
081c3124 +0x190:  mov    -0x34(%ebp),%eax
081c3127 +0x193:  mov    0x14(%eax),%esi
081c312a +0x196:  mov    -0x34(%ebp),%eax
081c312d +0x199:  movzwl 0x12(%eax),%eax
081c3131 +0x19d:  movswl %ax,%ebx
081c3134 +0x1a0:  mov    -0x34(%ebp),%eax
081c3137 +0x1a3:  movzbl 0x11(%eax),%eax
081c313b +0x1a7:  movsbl %al,%ecx
081c313e +0x1aa:  mov    -0x34(%ebp),%eax
081c3141 +0x1ad:  movzwl 0xf(%eax),%eax
081c3145 +0x1b1:  movswl %ax,%edx
081c3148 +0x1b4:  mov    -0x34(%ebp),%eax
081c314b +0x1b7:  movzwl 0xd(%eax),%eax
081c314f +0x1bb:  cwtl
081c3150 +0x1bc:  mov    %esi,0x18(%esp)
081c3154 +0x1c0:  mov    %ebx,0x14(%esp)
081c3158 +0x1c4:  mov    %ecx,0x10(%esp)
081c315c +0x1c8:  mov    %edx,0xc(%esp)
081c3160 +0x1cc:  mov    %eax,0x8(%esp)
081c3164 +0x1d0:  mov    0xc(%ebp),%eax
081c3167 +0x1d3:  mov    %eax,0x4(%esp)
081c316b +0x1d7:  mov    -0x24(%ebp),%eax
081c316e +0x1da:  mov    %eax,(%esp)
081c3171 +0x1dd:  call   *%edi
081c3173 +0x1df:  jmp    081c3247 <+0x2b3>
081c3178 +0x1e4:  mov    0xc(%ebp),%eax
081c317b +0x1e7:  mov    %eax,(%esp)
081c317e +0x1ea:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081c3183 +0x1ef:  cmp    $0x8,%eax
081c3186 +0x1f2:  sete   %al
081c3189 +0x1f5:  test   %al,%al
081c318b +0x1f7:  je     081c3230 <+0x29c>
081c3191 +0x1fd:  mov    0xc(%ebp),%eax
081c3194 +0x200:  mov    %eax,(%esp)
081c3197 +0x203:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081c319c +0x208:  movswl %ax,%ebx
081c319f +0x20b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081c31a4 +0x210:  mov    %ebx,0x4(%esp)
081c31a8 +0x214:  mov    %eax,(%esp)
081c31ab +0x217:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081c31b0 +0x21c:  mov    %eax,-0x20(%ebp)
081c31b3 +0x21f:  cmpl   $0x0,-0x20(%ebp)
081c31b7 +0x223:  je     081c3247 <+0x2b3>
081c31bd +0x229:  mov    -0x34(%ebp),%eax
081c31c0 +0x22c:  mov    0x14(%eax),%esi
081c31c3 +0x22f:  mov    -0x34(%ebp),%eax
081c31c6 +0x232:  movzwl 0x12(%eax),%eax
081c31ca +0x236:  movswl %ax,%ebx
081c31cd +0x239:  mov    -0x34(%ebp),%eax
081c31d0 +0x23c:  movzbl 0x11(%eax),%eax
081c31d4 +0x240:  movsbl %al,%ecx
081c31d7 +0x243:  mov    -0x34(%ebp),%eax
081c31da +0x246:  movzwl 0xf(%eax),%eax
081c31de +0x24a:  movswl %ax,%edx
081c31e1 +0x24d:  mov    -0x34(%ebp),%eax
081c31e4 +0x250:  movzwl 0xd(%eax),%eax
081c31e8 +0x254:  cwtl
081c31e9 +0x255:  mov    %esi,0x18(%esp)
081c31ed +0x259:  mov    %ebx,0x14(%esp)
081c31f1 +0x25d:  mov    %ecx,0x10(%esp)
081c31f5 +0x261:  mov    %edx,0xc(%esp)
081c31f9 +0x265:  mov    %eax,0x8(%esp)
081c31fd +0x269:  mov    0xc(%ebp),%eax
081c3200 +0x26c:  mov    %eax,0x4(%esp)
081c3204 +0x270:  mov    -0x20(%ebp),%eax
081c3207 +0x273:  mov    %eax,(%esp)
081c320a +0x276:  call   086bf5fc <_ZN7WarRoom14HandleItemDropEP5CUseriicii>  ; WarRoom::HandleItemDrop(CUser*, int, int, char, int, int)
081c320f +0x27b:  mov    %eax,-0x1c(%ebp)
081c3212 +0x27e:  cmpl   $0x0,-0x1c(%ebp)
081c3216 +0x282:  jle    081c3247 <+0x2b3>
081c3218 +0x284:  mov    -0x1c(%ebp),%edx
081c321b +0x287:  mov    -0x30(%ebp),%eax
081c321e +0x28a:  mov    %edx,0x4(%eax)
081c3221 +0x28d:  mov    -0x34(%ebp),%eax
081c3224 +0x290:  movzbl 0x11(%eax),%edx
081c3228 +0x294:  mov    -0x30(%ebp),%eax
081c322b +0x297:  mov    %dl,0x8(%eax)
081c322e +0x29a:  jmp    081c3247 <+0x2b3>
081c3230 +0x29c:  mov    -0x30(%ebp),%eax
081c3233 +0x29f:  movl   $0x13,0x4(%eax)
081c323a +0x2a6:  mov    -0x34(%ebp),%eax
081c323d +0x2a9:  movzbl 0x11(%eax),%edx
081c3241 +0x2ad:  mov    -0x30(%ebp),%eax
081c3244 +0x2b0:  mov    %dl,0x8(%eax)
081c3247 +0x2b3:  mov    $0x0,%eax
081c324c +0x2b8:  add    $0x4c,%esp
081c324f +0x2bb:  pop    %ebx
081c3250 +0x2bc:  pop    %esi
081c3251 +0x2bd:  pop    %edi
081c3252 +0x2be:  pop    %ebp
081c3253 +0x2bf:  ret
```

## 反编译 C

```c
// DisPatcher_DropItem::process @ 0x81c2f94

/* DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_DropItem::process
          (DisPatcher_DropItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  CParty *this_00;
  int *piVar4;
  WarRoom *this_01;
  
  uVar1 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0xdcc,
                       "virtual int DisPatcher_DropItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 5) {
        CUser::GetPartyIndex(param_1);
        iVar3 = G_CGameManager();
        this_00 = (CParty *)CGameManager::GetParty(iVar3);
        if (this_00 != (CParty *)0x0) {
          iVar3 = CParty::drop_item(this_00,param_1,(int)*(short *)(param_2 + 0xd),
                                    (int)*(short *)(param_2 + 0xf),(char)param_2[0x11],
                                    (int)*(short *)(param_2 + 0x12),*(int *)(param_2 + 0x14));
          if (0 < iVar3) {
            *(int *)(param_3 + 4) = iVar3;
            *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
          }
        }
      }
      else {
        iVar3 = CUser::get_state(param_1);
        if (iVar3 == 0xc) {
          piVar4 = (int *)CUser::getBossTower(param_1);
          if (piVar4 != (int *)0x0) {
            (**(code **)(*piVar4 + 0x20))
                      (piVar4,param_1,(int)*(short *)(param_2 + 0xd),(int)*(short *)(param_2 + 0xf),
                       (int)(char)param_2[0x11],(int)*(short *)(param_2 + 0x12),
                       *(undefined4 *)(param_2 + 0x14));
          }
        }
        else {
          iVar3 = CUser::get_state(param_1);
          if (iVar3 == 8) {
            CUser::GetWarRoomIndex(param_1);
            iVar3 = G_CGameManager();
            this_01 = (WarRoom *)CGameManager::GetWarRoom(iVar3);
            if (this_01 != (WarRoom *)0x0) {
              iVar3 = WarRoom::HandleItemDrop
                                (this_01,param_1,(int)*(short *)(param_2 + 0xd),
                                 (int)*(short *)(param_2 + 0xf),(char)param_2[0x11],
                                 (int)*(short *)(param_2 + 0x12),*(int *)(param_2 + 0x14));
              if (0 < iVar3) {
                *(int *)(param_3 + 4) = iVar3;
                *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
              }
            }
          }
          else {
            *(undefined4 *)(param_3 + 4) = 0x13;
            *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
          }
        }
      }
      uVar1 = 0;
    }
  }
  else {
    *(MSG_BASE *)(param_3 + 8) = param_2[0x11];
    uVar1 = 0;
  }
  return uVar1;
}
```

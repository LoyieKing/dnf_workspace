# process

`_ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AvatarOptionChange` | `0x081e0774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e0774  _ZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e0774, 0x081e0a3f]
081e0774 +0x000:  push   %ebp
081e0775 +0x001:  mov    %esp,%ebp
081e0777 +0x003:  push   %esi
081e0778 +0x004:  push   %ebx
081e0779 +0x005:  sub    $0xc930,%esp
081e077f +0x00b:  mov    0x14(%ebp),%eax
081e0782 +0x00e:  mov    %eax,-0x20(%ebp)
081e0785 +0x011:  mov    0x10(%ebp),%eax
081e0788 +0x014:  mov    %eax,0x8(%esp)
081e078c +0x018:  mov    0xc(%ebp),%eax
081e078f +0x01b:  mov    %eax,0x4(%esp)
081e0793 +0x01f:  mov    0x8(%ebp),%eax
081e0796 +0x022:  mov    %eax,(%esp)
081e0799 +0x025:  call   081e0a40 <_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_AvatarOptionChange::check_error(CUser*, MSG_BASE&)
081e079e +0x02a:  mov    -0x20(%ebp),%edx
081e07a1 +0x02d:  mov    %eax,0x4(%edx)
081e07a4 +0x030:  mov    -0x20(%ebp),%eax
081e07a7 +0x033:  mov    0x4(%eax),%eax
081e07aa +0x036:  test   %eax,%eax
081e07ac +0x038:  jle    081e07b8 <+0x44>
081e07ae +0x03a:  mov    $0x0,%ebx
081e07b3 +0x03f:  jmp    081e0a34 <+0x2c0>
081e07b8 +0x044:  mov    -0x20(%ebp),%eax
081e07bb +0x047:  mov    0x4(%eax),%eax
081e07be +0x04a:  test   %eax,%eax
081e07c0 +0x04c:  jns    081e07ef <+0x7b>
081e07c2 +0x04e:  mov    -0x20(%ebp),%eax
081e07c5 +0x051:  mov    0x4(%eax),%eax
081e07c8 +0x054:  movl   $0x0,0xc(%esp)
081e07d0 +0x05c:  mov    %eax,0x8(%esp)
081e07d4 +0x060:  movl   $&_ZZN29Dispatcher_AvatarOptionChange7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e07dc +0x068:  movl   $0x53ab,(%esp)
081e07e3 +0x06f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e07e8 +0x074:  mov    %eax,%ebx
081e07ea +0x076:  jmp    081e0a34 <+0x2c0>
081e07ef +0x07b:  mov    0x10(%ebp),%eax
081e07f2 +0x07e:  mov    %eax,-0x1c(%ebp)
081e07f5 +0x081:  mov    0xc(%ebp),%eax
081e07f8 +0x084:  mov    %eax,(%esp)
081e07fb +0x087:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e0800 +0x08c:  mov    %eax,-0x18(%ebp)
081e0803 +0x08f:  lea    -0x7d8(%ebp),%eax
081e0809 +0x095:  mov    %eax,(%esp)
081e080c +0x098:  call   0822d52c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2bd6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2bd6
081e0811 +0x09d:  lea    -0xc917(%ebp),%eax
081e0817 +0x0a3:  mov    %eax,(%esp)
081e081a +0x0a6:  call   0822d3b8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2a62>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2a62
081e081f +0x0ab:  lea    -0xc917(%ebp),%eax
081e0825 +0x0b1:  mov    %eax,0x4(%esp)
081e0829 +0x0b5:  lea    -0x7d8(%ebp),%eax
081e082f +0x0bb:  mov    %eax,(%esp)
081e0832 +0x0be:  call   0822d4f6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ba0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ba0
081e0837 +0x0c3:  mov    0xc(%ebp),%eax
081e083a +0x0c6:  mov    %eax,(%esp)
081e083d +0x0c9:  call   081803ca <_GLOBAL__I__ZN20AvatarRouletteServerC2Ev+0x61>  ; global constructors keyed to AvatarRouletteServer::AvatarRouletteServer()+0x61
081e0842 +0x0ce:  mov    %eax,0x4(%esp)
081e0846 +0x0d2:  lea    -0x7d8(%ebp),%eax
081e084c +0x0d8:  mov    %eax,(%esp)
081e084f +0x0db:  call   084fa314 <_ZN10CInventory7setCopyERKS_>  ; CInventory::setCopy(CInventory const&)
081e0854 +0x0e0:  mov    -0x1c(%ebp),%eax
081e0857 +0x0e3:  movzwl 0xd(%eax),%eax
081e085b +0x0e7:  cwtl
081e085c +0x0e8:  movl   $0x0,0x14(%esp)
081e0864 +0x0f0:  movl   $0x2f,0x10(%esp)
081e086c +0x0f8:  movl   $0x1,0xc(%esp)
081e0874 +0x100:  mov    %eax,0x8(%esp)
081e0878 +0x104:  movl   $0x1,0x4(%esp)
081e0880 +0x10c:  lea    -0x7d8(%ebp),%eax
081e0886 +0x112:  mov    %eax,(%esp)
081e0889 +0x115:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e088e +0x11a:  mov    %al,-0x11(%ebp)
081e0891 +0x11d:  movzbl -0x11(%ebp),%eax
081e0895 +0x121:  xor    $0x1,%eax
081e0898 +0x124:  test   %al,%al
081e089a +0x126:  je     081e08b0 <+0x13c>
081e089c +0x128:  mov    -0x20(%ebp),%eax
081e089f +0x12b:  movl   $0x16,0x4(%eax)
081e08a6 +0x132:  mov    $0x0,%ebx
081e08ab +0x137:  jmp    081e0a26 <+0x2b2>
081e08b0 +0x13c:  mov    -0x1c(%ebp),%eax
081e08b3 +0x13f:  movzwl 0x13(%eax),%eax
081e08b7 +0x143:  cwtl
081e08b8 +0x144:  mov    %eax,0x8(%esp)
081e08bc +0x148:  movl   $0x2,0x4(%esp)
081e08c4 +0x150:  lea    -0x7d8(%ebp),%eax
081e08ca +0x156:  mov    %eax,(%esp)
081e08cd +0x159:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081e08d2 +0x15e:  mov    %eax,-0x10(%ebp)
081e08d5 +0x161:  cmpl   $0x0,-0x10(%ebp)
081e08d9 +0x165:  jne    081e08ef <+0x17b>
081e08db +0x167:  mov    -0x20(%ebp),%eax
081e08de +0x16a:  movl   $0x11,0x4(%eax)
081e08e5 +0x171:  mov    $0x0,%ebx
081e08ea +0x176:  jmp    081e0a26 <+0x2b2>
081e08ef +0x17b:  mov    -0x1c(%ebp),%eax
081e08f2 +0x17e:  movzwl 0xd(%eax),%eax
081e08f6 +0x182:  cwtl
081e08f7 +0x183:  movl   $0x1,0x14(%esp)
081e08ff +0x18b:  movl   $0x2f,0x10(%esp)
081e0907 +0x193:  movl   $0x1,0xc(%esp)
081e090f +0x19b:  mov    %eax,0x8(%esp)
081e0913 +0x19f:  movl   $0x1,0x4(%esp)
081e091b +0x1a7:  mov    -0x18(%ebp),%eax
081e091e +0x1aa:  mov    %eax,(%esp)
081e0921 +0x1ad:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e0926 +0x1b2:  mov    -0x1c(%ebp),%eax
081e0929 +0x1b5:  movzwl 0x13(%eax),%eax
081e092d +0x1b9:  cwtl
081e092e +0x1ba:  mov    %eax,0x8(%esp)
081e0932 +0x1be:  movl   $0x2,0x4(%esp)
081e093a +0x1c6:  mov    -0x18(%ebp),%eax
081e093d +0x1c9:  mov    %eax,(%esp)
081e0940 +0x1cc:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
081e0945 +0x1d1:  mov    %eax,-0xc(%ebp)
081e0948 +0x1d4:  mov    -0x1c(%ebp),%eax
081e094b +0x1d7:  movzbl 0x19(%eax),%eax
081e094f +0x1db:  movsbl %al,%ebx
081e0952 +0x1de:  mov    -0xc(%ebp),%eax
081e0955 +0x1e1:  movzwl 0xb(%eax),%eax
081e0959 +0x1e5:  movzwl %ax,%ecx
081e095c +0x1e8:  mov    -0xc(%ebp),%eax
081e095f +0x1eb:  mov    0x2(%eax),%eax
081e0962 +0x1ee:  mov    %eax,%edx
081e0964 +0x1f0:  mov    -0xc(%ebp),%eax
081e0967 +0x1f3:  mov    0x7(%eax),%eax
081e096a +0x1f6:  mov    0xc(%ebp),%esi
081e096d +0x1f9:  add    $0x79700,%esi
081e0973 +0x1ff:  mov    %ebx,0x10(%esp)
081e0977 +0x203:  mov    %ecx,0xc(%esp)
081e097b +0x207:  mov    %edx,0x8(%esp)
081e097f +0x20b:  mov    %eax,0x4(%esp)
081e0983 +0x20f:  mov    %esi,(%esp)
081e0986 +0x212:  call   08686d0e <_ZN15cUserHistoryLog21UseAvatarOptionChangeEiiii>  ; cUserHistoryLog::UseAvatarOptionChange(int, int, int, int)
081e098b +0x217:  mov    -0x1c(%ebp),%eax
081e098e +0x21a:  movzbl 0x19(%eax),%eax
081e0992 +0x21e:  movsbw %al,%dx
081e0996 +0x222:  mov    -0xc(%ebp),%eax
081e0999 +0x225:  mov    %dx,0xb(%eax)
081e099d +0x229:  mov    -0x1c(%ebp),%eax
081e09a0 +0x22c:  movzbl 0x19(%eax),%eax
081e09a4 +0x230:  movsbl %al,%edx
081e09a7 +0x233:  mov    -0xc(%ebp),%eax
081e09aa +0x236:  mov    0x7(%eax),%eax
081e09ad +0x239:  movl   $0x0,0x14(%esp)
081e09b5 +0x241:  movl   $0x0,0x10(%esp)
081e09bd +0x249:  mov    %edx,0xc(%esp)
081e09c1 +0x24d:  mov    %eax,0x8(%esp)
081e09c5 +0x251:  movl   $0x2c3,0x4(%esp)
081e09cd +0x259:  mov    -0x18(%ebp),%eax
081e09d0 +0x25c:  mov    %eax,(%esp)
081e09d3 +0x25f:  call   08508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>  ; CInventory::SendAvatarEvent(int, int, int, int, int) const
081e09d8 +0x264:  mov    -0x1c(%ebp),%eax
081e09db +0x267:  movzwl 0xd(%eax),%edx
081e09df +0x26b:  mov    -0x20(%ebp),%eax
081e09e2 +0x26e:  mov    %dx,0x8(%eax)
081e09e6 +0x272:  mov    -0x1c(%ebp),%eax
081e09e9 +0x275:  movzwl 0x13(%eax),%edx
081e09ed +0x279:  mov    -0x20(%ebp),%eax
081e09f0 +0x27c:  mov    %dx,0xa(%eax)
081e09f4 +0x280:  mov    -0x1c(%ebp),%eax
081e09f7 +0x283:  movzbl 0x19(%eax),%edx
081e09fb +0x287:  mov    -0x20(%ebp),%eax
081e09fe +0x28a:  mov    %dl,0xc(%eax)
081e0a01 +0x28d:  mov    $0x0,%ebx
081e0a06 +0x292:  jmp    081e0a26 <+0x2b2>
081e0a08 +0x294:  mov    %edx,%ebx
081e0a0a +0x296:  mov    %eax,%esi
081e0a0c +0x298:  lea    -0x7d8(%ebp),%eax
081e0a12 +0x29e:  mov    %eax,(%esp)
081e0a15 +0x2a1:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081e0a1a +0x2a6:  mov    %esi,%eax
081e0a1c +0x2a8:  mov    %ebx,%edx
081e0a1e +0x2aa:  mov    %eax,(%esp)
081e0a21 +0x2ad:  call   08ae3750 <_Unwind_Resume>
081e0a26 +0x2b2:  lea    -0x7d8(%ebp),%eax
081e0a2c +0x2b8:  mov    %eax,(%esp)
081e0a2f +0x2bb:  call   0822d600 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2caa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2caa
081e0a34 +0x2c0:  mov    %ebx,%eax
081e0a36 +0x2c2:  add    $0xc930,%esp
081e0a3c +0x2c8:  pop    %ebx
081e0a3d +0x2c9:  pop    %esi
081e0a3e +0x2ca:  pop    %ebp
081e0a3f +0x2cb:  ret
```

## 反编译 C

```c
// Dispatcher_AvatarOptionChange::process @ 0x81e0774

/* Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_AvatarOptionChange::process
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CInventory *pCVar2;
  InventoryMemory local_c91b [49471];
  CInventory local_7dc [1976];
  ParamBase *local_24;
  MSG_BASE *local_20;
  CInventory *local_1c;
  char local_15;
  int local_14;
  int local_10;
  
  local_24 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar1;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar1 = LineFunc(0x53ab,
                       "virtual int Dispatcher_AvatarOptionChange::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_24 + 4),0);
    }
    else {
      local_20 = param_2;
      local_1c = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::CInventory(local_7dc);
      InventoryMemory::InventoryMemory(local_c91b);
      CInventory::SetInventoryMemory(local_7dc,local_c91b);
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081e084f to 081e09d7 has its CatchHandler @ 081e0a08 */
      CInventory::setCopy(local_7dc,pCVar2);
      local_15 = CInventory::delete_item(local_7dc,1,(int)*(short *)(local_20 + 0xd),1,0x2f,0);
      if (local_15 == '\x01') {
        local_14 = CInventory::GetInvenRef(local_7dc,2,(int)*(short *)(local_20 + 0x13));
        if (local_14 == 0) {
          *(undefined4 *)(local_24 + 4) = 0x11;
        }
        else {
          CInventory::delete_item(local_1c,1,(int)*(short *)(local_20 + 0xd),1,0x2f,1);
          local_10 = CInventory::GetInvenRef(local_1c,2,(int)*(short *)(local_20 + 0x13));
          cUserHistoryLog::UseAvatarOptionChange
                    ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(local_10 + 7),
                     *(int *)(local_10 + 2),(uint)*(ushort *)(local_10 + 0xb),
                     (int)(char)local_20[0x19]);
          *(short *)(local_10 + 0xb) = (short)(char)local_20[0x19];
          CInventory::SendAvatarEvent
                    (local_1c,0x2c3,*(int *)(local_10 + 7),(int)(char)local_20[0x19],0,0);
          *(undefined2 *)(local_24 + 8) = *(undefined2 *)(local_20 + 0xd);
          *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_20 + 0x13);
          *(MSG_BASE *)(local_24 + 0xc) = local_20[0x19];
        }
      }
      else {
        *(undefined4 *)(local_24 + 4) = 0x16;
      }
      uVar1 = 0;
      CInventory::~CInventory(local_7dc);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

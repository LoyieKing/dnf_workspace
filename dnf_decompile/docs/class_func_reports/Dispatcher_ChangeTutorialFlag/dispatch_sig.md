# dispatch_sig

`_ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeTutorialFlag` | `0x0820697c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820697c  _ZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820697c, 0x08206b5b]
0820697c +0x000:  push   %ebp
0820697d +0x001:  mov    %esp,%ebp
0820697f +0x003:  sub    $0x38,%esp
08206982 +0x006:  mov    0xc(%ebp),%eax
08206985 +0x009:  mov    %eax,(%esp)
08206988 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820698d +0x011:  cmp    $0x1,%eax
08206990 +0x014:  setle  %al
08206993 +0x017:  test   %al,%al
08206995 +0x019:  je     082069c0 <+0x44>
08206997 +0x01b:  movl   $0x0,0xc(%esp)
0820699f +0x023:  movl   $0x0,0x8(%esp)
082069a7 +0x02b:  movl   $&_ZZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082069af +0x033:  movl   $0xa115,(%esp)
082069b6 +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082069bb +0x03f:  jmp    08206b59 <+0x1dd>
082069c0 +0x044:  movl   $0x0,-0x14(%ebp)
082069c7 +0x04b:  lea    -0x14(%ebp),%eax
082069ca +0x04e:  mov    %eax,0x4(%esp)
082069ce +0x052:  mov    0x10(%ebp),%eax
082069d1 +0x055:  mov    %eax,(%esp)
082069d4 +0x058:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
082069d9 +0x05d:  xor    $0x1,%eax
082069dc +0x060:  test   %al,%al
082069de +0x062:  je     08206a09 <+0x8d>
082069e0 +0x064:  movl   $0x0,0xc(%esp)
082069e8 +0x06c:  movl   $0x0,0x8(%esp)
082069f0 +0x074:  movl   $&_ZZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082069f8 +0x07c:  movl   $0xa118,(%esp)
082069ff +0x083:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206a04 +0x088:  jmp    08206b59 <+0x1dd>
08206a09 +0x08d:  movb   $0x0,-0x15(%ebp)
08206a0d +0x091:  lea    -0x15(%ebp),%eax
08206a10 +0x094:  mov    %eax,0x4(%esp)
08206a14 +0x098:  mov    0x10(%ebp),%eax
08206a17 +0x09b:  mov    %eax,(%esp)
08206a1a +0x09e:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08206a1f +0x0a3:  xor    $0x1,%eax
08206a22 +0x0a6:  test   %al,%al
08206a24 +0x0a8:  je     08206a4f <+0xd3>
08206a26 +0x0aa:  movl   $0x0,0xc(%esp)
08206a2e +0x0b2:  movl   $0x0,0x8(%esp)
08206a36 +0x0ba:  movl   $&_ZZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206a3e +0x0c2:  movl   $0xa11b,(%esp)
08206a45 +0x0c9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206a4a +0x0ce:  jmp    08206b59 <+0x1dd>
08206a4f +0x0d3:  mov    -0x14(%ebp),%eax
08206a52 +0x0d6:  cmp    $0x4d,%eax
08206a55 +0x0d9:  jbe    08206a80 <+0x104>
08206a57 +0x0db:  movl   $0x0,0xc(%esp)
08206a5f +0x0e3:  movl   $0x0,0x8(%esp)
08206a67 +0x0eb:  movl   $&_ZZN29Dispatcher_ChangeTutorialFlag12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206a6f +0x0f3:  movl   $0xa120,(%esp)
08206a76 +0x0fa:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08206a7b +0x0ff:  jmp    08206b59 <+0x1dd>
08206a80 +0x104:  mov    0xc(%ebp),%eax
08206a83 +0x107:  mov    %eax,(%esp)
08206a86 +0x10a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08206a8b +0x10f:  test   %eax,%eax
08206a8d +0x111:  setne  %al
08206a90 +0x114:  test   %al,%al
08206a92 +0x116:  je     08206b54 <+0x1d8>
08206a98 +0x11c:  mov    -0x14(%ebp),%eax
08206a9b +0x11f:  cmp    $0x4d,%eax
08206a9e +0x122:  jne    08206ad4 <+0x158>
08206aa0 +0x124:  movl   $0x0,-0x10(%ebp)
08206aa7 +0x12b:  jmp    08206abf <+0x143>
08206aa9 +0x12d:  mov    -0x10(%ebp),%edx
08206aac +0x130:  mov    0xc(%ebp),%eax
08206aaf +0x133:  mov    %edx,0x4(%esp)
08206ab3 +0x137:  mov    %eax,(%esp)
08206ab6 +0x13a:  call   086473e6 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj>  ; CUserCharacInfo::setCurCharacTutorialFlag(unsigned int)
08206abb +0x13f:  addl   $0x1,-0x10(%ebp)
08206abf +0x143:  cmpl   $0x4d,-0x10(%ebp)
08206ac3 +0x147:  setle  %al
08206ac6 +0x14a:  test   %al,%al
08206ac8 +0x14c:  jne    08206aa9 <+0x12d>
08206aca +0x14e:  mov    $0x0,%eax
08206acf +0x153:  jmp    08206b59 <+0x1dd>
08206ad4 +0x158:  mov    -0x14(%ebp),%edx
08206ad7 +0x15b:  mov    0xc(%ebp),%eax
08206ada +0x15e:  mov    %edx,0x4(%esp)
08206ade +0x162:  mov    %eax,(%esp)
08206ae1 +0x165:  call   086473e6 <_ZN15CUserCharacInfo24setCurCharacTutorialFlagEj>  ; CUserCharacInfo::setCurCharacTutorialFlag(unsigned int)
08206ae6 +0x16a:  xor    $0x1,%eax
08206ae9 +0x16d:  test   %al,%al
08206aeb +0x16f:  je     08206af4 <+0x178>
08206aed +0x171:  mov    $0x0,%eax
08206af2 +0x176:  jmp    08206b59 <+0x1dd>
08206af4 +0x178:  movzbl -0x15(%ebp),%eax
08206af8 +0x17c:  test   %al,%al
08206afa +0x17e:  je     08206b0e <+0x192>
08206afc +0x180:  mov    -0x14(%ebp),%eax
08206aff +0x183:  mov    %eax,0x4(%esp)
08206b03 +0x187:  mov    0xc(%ebp),%eax
08206b06 +0x18a:  mov    %eax,(%esp)
08206b09 +0x18d:  call   086475d8 <_ZN5CUser14RewardTutorialEj>  ; CUser::RewardTutorial(unsigned int)
08206b0e +0x192:  mov    -0x14(%ebp),%eax
08206b11 +0x195:  cmp    $0x1f,%eax
08206b14 +0x198:  jne    08206b54 <+0x1d8>
08206b16 +0x19a:  mov    0xc(%ebp),%eax
08206b19 +0x19d:  mov    %eax,(%esp)
08206b1c +0x1a0:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08206b21 +0x1a5:  mov    %eax,-0xc(%ebp)
08206b24 +0x1a8:  cmpl   $0x0,-0xc(%ebp)
08206b28 +0x1ac:  je     08206b54 <+0x1d8>
08206b2a +0x1ae:  movl   $0x0,0x10(%esp)
08206b32 +0x1b6:  movl   $0x0,0xc(%esp)
08206b3a +0x1be:  movl   $0x1,0x8(%esp)
08206b42 +0x1c6:  mov    0xc(%ebp),%eax
08206b45 +0x1c9:  mov    %eax,0x4(%esp)
08206b49 +0x1cd:  mov    -0xc(%ebp),%eax
08206b4c +0x1d0:  mov    %eax,(%esp)
08206b4f +0x1d3:  call   085b2baa <_ZN6CParty11giveup_gameEP5CUserbbb>  ; CParty::giveup_game(CUser*, bool, bool, bool)
08206b54 +0x1d8:  mov    $0x0,%eax
08206b59 +0x1dd:  leave
08206b5a +0x1de:  ret
08206b5b +0x1df:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeTutorialFlag::dispatch_sig @ 0x820697c

/* Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeTutorialFlag::dispatch_sig
          (Dispatcher_ChangeTutorialFlag *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char local_19;
  uint local_18;
  uint local_14;
  CParty *local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa115,
                     "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  else {
    local_18 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_18);
    if (cVar1 == '\x01') {
      local_19 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_19);
      if (cVar1 == '\x01') {
        if (local_18 < 0x4e) {
          iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          if (iVar2 != 0) {
            if (local_18 == 0x4d) {
              for (local_14 = 0; (int)local_14 < 0x4e; local_14 = local_14 + 1) {
                CUserCharacInfo::setCurCharacTutorialFlag((CUserCharacInfo *)param_1,local_14);
              }
              return 0;
            }
            cVar1 = CUserCharacInfo::setCurCharacTutorialFlag((CUserCharacInfo *)param_1,local_18);
            if (cVar1 != '\x01') {
              return 0;
            }
            if (local_19 != '\0') {
              CUser::RewardTutorial(param_1,local_18);
            }
            if ((local_18 == 0x1f) &&
               (local_10 = (CParty *)CUser::GetParty(param_1), local_10 != (CParty *)0x0)) {
              CParty::giveup_game(local_10,param_1,true,false,false);
            }
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa120,
                           "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa11b,
                         "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa118,
                       "virtual int Dispatcher_ChangeTutorialFlag::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```

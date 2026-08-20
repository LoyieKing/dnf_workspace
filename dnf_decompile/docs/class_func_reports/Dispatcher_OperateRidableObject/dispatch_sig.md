# dispatch_sig

`_ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_OperateRidableObject` | `0x08226da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08226da0  _ZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)
# range [0x08226da0, 0x08226f2f]
08226da0 +0x000:  push   %ebp
08226da1 +0x001:  mov    %esp,%ebp
08226da3 +0x003:  sub    $0x28,%esp
08226da6 +0x006:  mov    0xc(%ebp),%eax
08226da9 +0x009:  mov    %eax,(%esp)
08226dac +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08226db1 +0x011:  cmp    $0x5,%eax
08226db4 +0x014:  setne  %al
08226db7 +0x017:  test   %al,%al
08226db9 +0x019:  je     08226dc5 <+0x25>
08226dbb +0x01b:  mov    $0x0,%eax
08226dc0 +0x020:  jmp    08226f2e <+0x18e>
08226dc5 +0x025:  movb   $0x0,-0x12(%ebp)
08226dc9 +0x029:  movb   $0x0,-0x11(%ebp)
08226dcd +0x02d:  movl   $0x0,-0x18(%ebp)
08226dd4 +0x034:  lea    -0x12(%ebp),%eax
08226dd7 +0x037:  mov    %eax,0x4(%esp)
08226ddb +0x03b:  mov    0x10(%ebp),%eax
08226dde +0x03e:  mov    %eax,(%esp)
08226de1 +0x041:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08226de6 +0x046:  xor    $0x1,%eax
08226de9 +0x049:  test   %al,%al
08226deb +0x04b:  je     08226e16 <+0x76>
08226ded +0x04d:  movl   $0x0,0xc(%esp)
08226df5 +0x055:  movl   $0x0,0x8(%esp)
08226dfd +0x05d:  movl   $&_ZZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226e05 +0x065:  movl   $0xe2a4,(%esp)
08226e0c +0x06c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226e11 +0x071:  jmp    08226f2e <+0x18e>
08226e16 +0x076:  lea    -0x18(%ebp),%eax
08226e19 +0x079:  mov    %eax,0x4(%esp)
08226e1d +0x07d:  mov    0x10(%ebp),%eax
08226e20 +0x080:  mov    %eax,(%esp)
08226e23 +0x083:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08226e28 +0x088:  xor    $0x1,%eax
08226e2b +0x08b:  test   %al,%al
08226e2d +0x08d:  je     08226e58 <+0xb8>
08226e2f +0x08f:  movl   $0x0,0xc(%esp)
08226e37 +0x097:  movl   $0x0,0x8(%esp)
08226e3f +0x09f:  movl   $&_ZZN31Dispatcher_OperateRidableObject12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226e47 +0x0a7:  movl   $0xe2a7,(%esp)
08226e4e +0x0ae:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226e53 +0x0b3:  jmp    08226f2e <+0x18e>
08226e58 +0x0b8:  mov    0xc(%ebp),%eax
08226e5b +0x0bb:  mov    %eax,(%esp)
08226e5e +0x0be:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08226e63 +0x0c3:  mov    %eax,-0x10(%ebp)
08226e66 +0x0c6:  cmpl   $0x0,-0x10(%ebp)
08226e6a +0x0ca:  jne    08226e76 <+0xd6>
08226e6c +0x0cc:  mov    $0x0,%eax
08226e71 +0x0d1:  jmp    08226f2e <+0x18e>
08226e76 +0x0d6:  movzbl -0x12(%ebp),%eax
08226e7a +0x0da:  movsbl %al,%eax
08226e7d +0x0dd:  mov    %eax,-0xc(%ebp)
08226e80 +0x0e0:  cmpl   $0x2,-0xc(%ebp)
08226e84 +0x0e4:  jne    08226ea8 <+0x108>
08226e86 +0x0e6:  mov    -0x18(%ebp),%eax
08226e89 +0x0e9:  mov    0xc(%ebp),%edx
08226e8c +0x0ec:  add    $0x79700,%edx
08226e92 +0x0f2:  mov    %eax,0x8(%esp)
08226e96 +0x0f6:  movl   $0x0,0x4(%esp)
08226e9e +0x0fe:  mov    %edx,(%esp)
08226ea1 +0x101:  call   08686928 <_ZN15cUserHistoryLog12StartRidableENS_12eRidableTypeEi>  ; cUserHistoryLog::StartRidable(cUserHistoryLog::eRidableType, int)
08226ea6 +0x106:  jmp    08226ed4 <+0x134>
08226ea8 +0x108:  cmpl   $0x1,-0xc(%ebp)
08226eac +0x10c:  je     08226eb4 <+0x114>
08226eae +0x10e:  cmpl   $0x3,-0xc(%ebp)
08226eb2 +0x112:  jne    08226ed4 <+0x134>
08226eb4 +0x114:  mov    -0x18(%ebp),%eax
08226eb7 +0x117:  mov    0xc(%ebp),%edx
08226eba +0x11a:  add    $0x79700,%edx
08226ec0 +0x120:  mov    %eax,0x8(%esp)
08226ec4 +0x124:  movl   $0x0,0x4(%esp)
08226ecc +0x12c:  mov    %edx,(%esp)
08226ecf +0x12f:  call   0868695c <_ZN15cUserHistoryLog10EndRidableENS_12eRidableTypeEi>  ; cUserHistoryLog::EndRidable(cUserHistoryLog::eRidableType, int)
08226ed4 +0x134:  mov    -0x18(%ebp),%eax
08226ed7 +0x137:  mov    -0xc(%ebp),%edx
08226eda +0x13a:  mov    %edx,0x8(%esp)
08226ede +0x13e:  mov    %eax,0x4(%esp)
08226ee2 +0x142:  mov    -0x10(%ebp),%eax
08226ee5 +0x145:  mov    %eax,(%esp)
08226ee8 +0x148:  call   085b9f28 <_ZN6CParty21SetRidableObjectStateEi19eRidableObjectState>  ; CParty::SetRidableObjectState(int, eRidableObjectState)
08226eed +0x14d:  xor    $0x1,%eax
08226ef0 +0x150:  test   %al,%al
08226ef2 +0x152:  je     08226f16 <+0x176>
08226ef4 +0x154:  movl   $0x13,0x8(%esp)
08226efc +0x15c:  movl   $0x13d,0x4(%esp)
08226f04 +0x164:  mov    0xc(%ebp),%eax
08226f07 +0x167:  mov    %eax,(%esp)
08226f0a +0x16a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226f0f +0x16f:  mov    $0x0,%eax
08226f14 +0x174:  jmp    08226f2e <+0x18e>
08226f16 +0x176:  movl   $0x13d,0x4(%esp)
08226f1e +0x17e:  mov    0xc(%ebp),%eax
08226f21 +0x181:  mov    %eax,(%esp)
08226f24 +0x184:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
08226f29 +0x189:  mov    $0x0,%eax
08226f2e +0x18e:  leave
08226f2f +0x18f:  ret
```

## 反编译 C

```c
// Dispatcher_OperateRidableObject::dispatch_sig @ 0x8226da0

/* Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_OperateRidableObject::dispatch_sig
          (Dispatcher_OperateRidableObject *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_1c;
  char local_16 [2];
  CParty *local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 5) {
    local_16[0] = '\0';
    local_16[1] = 0;
    local_1c = 0;
    cVar1 = PacketBuf::get_byte(param_2,local_16);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&local_1c);
      if (cVar1 == '\x01') {
        local_14 = (CParty *)CUser::GetParty(param_1);
        if (local_14 == (CParty *)0x0) {
          uVar3 = 0;
        }
        else {
          local_10 = (int)local_16[0];
          if (local_10 == 2) {
            cUserHistoryLog::StartRidable((cUserHistoryLog *)(param_1 + 0x79700),0,local_1c);
          }
          else if ((local_10 == 1) || (local_10 == 3)) {
            cUserHistoryLog::EndRidable((cUserHistoryLog *)(param_1 + 0x79700),0,local_1c);
          }
          cVar1 = CParty::SetRidableObjectState(local_14,local_1c,local_10);
          if (cVar1 == '\x01') {
            CUser::SendCmdOkPacket(param_1,0x13d);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x13d,0x13);
            uVar3 = 0;
          }
        }
      }
      else {
        uVar3 = LineFunc(0xe2a7,
                         "virtual int Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe2a4,
                       "virtual int Dispatcher_OperateRidableObject::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

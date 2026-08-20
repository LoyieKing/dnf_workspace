# dispatch_sig

`_ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestItemUnlockCancel` | `0x082231ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082231ae  _ZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)
# range [0x082231ae, 0x0822332f]
082231ae +0x000:  push   %ebp
082231af +0x001:  mov    %esp,%ebp
082231b1 +0x003:  sub    $0x28,%esp
082231b4 +0x006:  mov    0xc(%ebp),%eax
082231b7 +0x009:  mov    %eax,(%esp)
082231ba +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082231bf +0x011:  cmp    $0x2,%eax
082231c2 +0x014:  setle  %al
082231c5 +0x017:  test   %al,%al
082231c7 +0x019:  je     082231d3 <+0x25>
082231c9 +0x01b:  mov    $0x0,%eax
082231ce +0x020:  jmp    0822332d <+0x17f>
082231d3 +0x025:  movb   $0x0,-0x11(%ebp)
082231d7 +0x029:  movw   $0x0,-0x14(%ebp)
082231dd +0x02f:  lea    -0x11(%ebp),%eax
082231e0 +0x032:  mov    %eax,0x4(%esp)
082231e4 +0x036:  mov    0x10(%ebp),%eax
082231e7 +0x039:  mov    %eax,(%esp)
082231ea +0x03c:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082231ef +0x041:  xor    $0x1,%eax
082231f2 +0x044:  test   %al,%al
082231f4 +0x046:  je     0822321f <+0x71>
082231f6 +0x048:  movl   $0x0,0xc(%esp)
082231fe +0x050:  movl   $0x0,0x8(%esp)
08223206 +0x058:  movl   $&_ZZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822320e +0x060:  movl   $0xdd7b,(%esp)
08223215 +0x067:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822321a +0x06c:  jmp    0822332d <+0x17f>
0822321f +0x071:  lea    -0x14(%ebp),%eax
08223222 +0x074:  mov    %eax,0x4(%esp)
08223226 +0x078:  mov    0x10(%ebp),%eax
08223229 +0x07b:  mov    %eax,(%esp)
0822322c +0x07e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08223231 +0x083:  xor    $0x1,%eax
08223234 +0x086:  test   %al,%al
08223236 +0x088:  je     08223261 <+0xb3>
08223238 +0x08a:  movl   $0x0,0xc(%esp)
08223240 +0x092:  movl   $0x0,0x8(%esp)
08223248 +0x09a:  movl   $&_ZZN34Dispatcher_RequestItemUnlockCancel12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223250 +0x0a2:  movl   $0xdd7c,(%esp)
08223257 +0x0a9:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0822325c +0x0ae:  jmp    0822332d <+0x17f>
08223261 +0x0b3:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08223266 +0x0b8:  movl   $0x19,0x8(%esp)
0822326e +0x0c0:  mov    0xc(%ebp),%edx
08223271 +0x0c3:  mov    %edx,0x4(%esp)
08223275 +0x0c7:  mov    %eax,(%esp)
08223278 +0x0ca:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0822327d +0x0cf:  mov    %eax,-0x10(%ebp)
08223280 +0x0d2:  cmpl   $0x0,-0x10(%ebp)
08223284 +0x0d6:  je     082232ad <+0xff>
08223286 +0x0d8:  mov    -0x10(%ebp),%eax
08223289 +0x0db:  movzbl %al,%eax
0822328c +0x0de:  mov    %eax,0x8(%esp)
08223290 +0x0e2:  movl   $0x111,0x4(%esp)
08223298 +0x0ea:  mov    0xc(%ebp),%eax
0822329b +0x0ed:  mov    %eax,(%esp)
0822329e +0x0f0:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082232a3 +0x0f5:  mov    $0x0,%eax
082232a8 +0x0fa:  jmp    0822332d <+0x17f>
082232ad +0x0ff:  movl   $0x0,-0xc(%ebp)
082232b4 +0x106:  movzwl -0x14(%ebp),%eax
082232b8 +0x10a:  movswl %ax,%edx
082232bb +0x10d:  movzbl -0x11(%ebp),%eax
082232bf +0x111:  movsbl %al,%eax
082232c2 +0x114:  mov    %edx,0x8(%esp)
082232c6 +0x118:  mov    %eax,0x4(%esp)
082232ca +0x11c:  mov    0xc(%ebp),%eax
082232cd +0x11f:  mov    %eax,(%esp)
082232d0 +0x122:  call   08646cae <_ZNK5CUser22IsAbleItemUnlockCancelEii>  ; CUser::IsAbleItemUnlockCancel(int, int) const
082232d5 +0x127:  mov    %eax,-0xc(%ebp)
082232d8 +0x12a:  cmpl   $0x0,-0xc(%ebp)
082232dc +0x12e:  setne  %al
082232df +0x131:  test   %al,%al
082232e1 +0x133:  je     08223307 <+0x159>
082232e3 +0x135:  mov    -0xc(%ebp),%eax
082232e6 +0x138:  movzbl %al,%eax
082232e9 +0x13b:  mov    %eax,0x8(%esp)
082232ed +0x13f:  movl   $0x111,0x4(%esp)
082232f5 +0x147:  mov    0xc(%ebp),%eax
082232f8 +0x14a:  mov    %eax,(%esp)
082232fb +0x14d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08223300 +0x152:  mov    $0x0,%eax
08223305 +0x157:  jmp    0822332d <+0x17f>
08223307 +0x159:  movzwl -0x14(%ebp),%eax
0822330b +0x15d:  movswl %ax,%edx
0822330e +0x160:  movzbl -0x11(%ebp),%eax
08223312 +0x164:  movsbl %al,%eax
08223315 +0x167:  mov    %edx,0x8(%esp)
08223319 +0x16b:  mov    %eax,0x4(%esp)
0822331d +0x16f:  mov    0xc(%ebp),%eax
08223320 +0x172:  mov    %eax,(%esp)
08223323 +0x175:  call   08646dba <_ZN5CUser18DoItemUnlockCancelEii>  ; CUser::DoItemUnlockCancel(int, int)
08223328 +0x17a:  mov    $0x0,%eax
0822332d +0x17f:  leave
0822332e +0x180:  ret
0822332f +0x181:  nop
```

## 反编译 C

```c
// Dispatcher_RequestItemUnlockCancel::dispatch_sig @ 0x82231ae

/* Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestItemUnlockCancel::dispatch_sig
          (Dispatcher_RequestItemUnlockCancel *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  short local_18;
  char local_15;
  uint local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_15 = '\0';
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_15);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_18);
      if (cVar1 == '\x01') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x19);
        if (local_14 == 0) {
          local_10 = 0;
          local_10 = CUser::IsAbleItemUnlockCancel(param_1,(int)local_15,(int)local_18);
          if (local_10 == 0) {
            CUser::DoItemUnlockCancel(param_1,(int)local_15,(int)local_18);
            uVar3 = 0;
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x111,local_10 & 0xff);
            uVar3 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x111,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xdd7c,
                         "virtual int Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xdd7b,
                       "virtual int Dispatcher_RequestItemUnlockCancel::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```

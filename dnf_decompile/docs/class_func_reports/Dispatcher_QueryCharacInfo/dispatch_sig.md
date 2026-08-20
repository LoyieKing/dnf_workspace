# dispatch_sig

`_ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_QueryCharacInfo` | `0x08205f68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08205f68  _ZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x08205f68, 0x08206123]
08205f68 +0x000:  push   %ebp
08205f69 +0x001:  mov    %esp,%ebp
08205f6b +0x003:  push   %esi
08205f6c +0x004:  push   %ebx
08205f6d +0x005:  sub    $0x40,%esp
08205f70 +0x008:  mov    0xc(%ebp),%eax
08205f73 +0x00b:  mov    %eax,(%esp)
08205f76 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08205f7b +0x013:  cmp    $0x2,%eax
08205f7e +0x016:  jle    08205f8f <+0x27>
08205f80 +0x018:  mov    0xc(%ebp),%eax
08205f83 +0x01b:  mov    %eax,(%esp)
08205f86 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08205f8b +0x023:  test   %eax,%eax
08205f8d +0x025:  jne    08205f96 <+0x2e>
08205f8f +0x027:  mov    $0x1,%eax
08205f94 +0x02c:  jmp    08205f9b <+0x33>
08205f96 +0x02e:  mov    $0x0,%eax
08205f9b +0x033:  test   %al,%al
08205f9d +0x035:  je     08205fc8 <+0x60>
08205f9f +0x037:  movl   $0x0,0xc(%esp)
08205fa7 +0x03f:  movl   $0x0,0x8(%esp)
08205faf +0x047:  movl   $&_ZZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08205fb7 +0x04f:  movl   $0x9f60,(%esp)
08205fbe +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08205fc3 +0x05b:  jmp    0820611d <+0x1b5>
08205fc8 +0x060:  movl   $0x0,-0xc(%ebp)
08205fcf +0x067:  lea    -0x2a(%ebp),%eax
08205fd2 +0x06a:  mov    $0x1e,%ebx
08205fd7 +0x06f:  mov    $0x0,%edx
08205fdc +0x074:  mov    %eax,%ecx
08205fde +0x076:  and    $0x2,%ecx
08205fe1 +0x079:  test   %ecx,%ecx
08205fe3 +0x07b:  je     08205fee <+0x86>
08205fe5 +0x07d:  mov    %dx,(%eax)
08205fe8 +0x080:  add    $0x2,%eax
08205feb +0x083:  sub    $0x2,%ebx
08205fee +0x086:  mov    %ebx,%esi
08205ff0 +0x088:  and    $0xfffffffc,%esi
08205ff3 +0x08b:  mov    $0x0,%ecx
08205ff8 +0x090:  mov    %edx,(%eax,%ecx,1)
08205ffb +0x093:  add    $0x4,%ecx
08205ffe +0x096:  cmp    %esi,%ecx
08206000 +0x098:  jb     08205ff8 <+0x90>
08206002 +0x09a:  add    %ecx,%eax
08206004 +0x09c:  mov    %ebx,%ecx
08206006 +0x09e:  and    $0x2,%ecx
08206009 +0x0a1:  test   %ecx,%ecx
0820600b +0x0a3:  je     08206013 <+0xab>
0820600d +0x0a5:  mov    %dx,(%eax)
08206010 +0x0a8:  add    $0x2,%eax
08206013 +0x0ab:  mov    %ebx,%ecx
08206015 +0x0ad:  and    $0x1,%ecx
08206018 +0x0b0:  test   %ecx,%ecx
0820601a +0x0b2:  je     08206021 <+0xb9>
0820601c +0x0b4:  mov    %dl,(%eax)
0820601e +0x0b6:  add    $0x1,%eax
08206021 +0x0b9:  lea    -0xc(%ebp),%eax
08206024 +0x0bc:  mov    %eax,0x4(%esp)
08206028 +0x0c0:  mov    0x10(%ebp),%eax
0820602b +0x0c3:  mov    %eax,(%esp)
0820602e +0x0c6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08206033 +0x0cb:  xor    $0x1,%eax
08206036 +0x0ce:  test   %al,%al
08206038 +0x0d0:  je     08206063 <+0xfb>
0820603a +0x0d2:  movl   $0x0,0xc(%esp)
08206042 +0x0da:  movl   $0x0,0x8(%esp)
0820604a +0x0e2:  movl   $&_ZZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08206052 +0x0ea:  movl   $0x9f65,(%esp)
08206059 +0x0f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820605e +0x0f6:  jmp    0820611d <+0x1b5>
08206063 +0x0fb:  mov    -0xc(%ebp),%eax
08206066 +0x0fe:  mov    %eax,0xc(%esp)
0820606a +0x102:  movl   $0x1e,0x8(%esp)
08206072 +0x10a:  lea    -0x2a(%ebp),%eax
08206075 +0x10d:  mov    %eax,0x4(%esp)
08206079 +0x111:  mov    0x10(%ebp),%eax
0820607c +0x114:  mov    %eax,(%esp)
0820607f +0x117:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08206084 +0x11c:  xor    $0x1,%eax
08206087 +0x11f:  test   %al,%al
08206089 +0x121:  je     082060b1 <+0x149>
0820608b +0x123:  movl   $0x0,0xc(%esp)
08206093 +0x12b:  movl   $0x0,0x8(%esp)
0820609b +0x133:  movl   $&_ZZN26Dispatcher_QueryCharacInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082060a3 +0x13b:  movl   $0x9f66,(%esp)
082060aa +0x142:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082060af +0x147:  jmp    0820611d <+0x1b5>
082060b1 +0x149:  mov    0xc(%ebp),%eax
082060b4 +0x14c:  mov    %eax,(%esp)
082060b7 +0x14f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
082060bc +0x154:  movl   $0x1d,0x8(%esp)
082060c4 +0x15c:  mov    %eax,0x4(%esp)
082060c8 +0x160:  lea    -0x2a(%ebp),%eax
082060cb +0x163:  mov    %eax,(%esp)
082060ce +0x166:  call   0807e8c0 <_init+0x11b8>
082060d3 +0x16b:  test   %eax,%eax
082060d5 +0x16d:  sete   %al
082060d8 +0x170:  test   %al,%al
082060da +0x172:  je     082060fe <+0x196>
082060dc +0x174:  movl   $0x7,0x8(%esp)
082060e4 +0x17c:  movl   $0x8b,0x4(%esp)
082060ec +0x184:  mov    0xc(%ebp),%eax
082060ef +0x187:  mov    %eax,(%esp)
082060f2 +0x18a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082060f7 +0x18f:  mov    $0x0,%eax
082060fc +0x194:  jmp    0820611d <+0x1b5>
082060fe +0x196:  mov    0xc(%ebp),%eax
08206101 +0x199:  mov    %eax,(%esp)
08206104 +0x19c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08206109 +0x1a1:  lea    -0x2a(%ebp),%edx
0820610c +0x1a4:  mov    %edx,0x4(%esp)
08206110 +0x1a8:  mov    %eax,(%esp)
08206113 +0x1ab:  call   08426d18 <_ZN21DB_ReqQueryCharacInfo11makeRequestEiPKc>  ; DB_ReqQueryCharacInfo::makeRequest(int, char const*)
08206118 +0x1b0:  mov    $0x0,%eax
0820611d +0x1b5:  add    $0x40,%esp
08206120 +0x1b8:  pop    %ebx
08206121 +0x1b9:  pop    %esi
08206122 +0x1ba:  pop    %ebp
08206123 +0x1bb:  ret
```

## 反编译 C

```c
// Dispatcher_QueryCharacInfo::dispatch_sig @ 0x8205f68

/* WARNING: Removing unreachable block (ram,0x0820601c) */
/* Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QueryCharacInfo::dispatch_sig
          (Dispatcher_QueryCharacInfo *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_2e [30];
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar4 = LineFunc(0x9f60,
                     "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  else {
    local_10 = 0;
    pcVar5 = local_2e;
    uVar7 = 0x1e;
    bVar8 = ((uint)pcVar5 & 2) != 0;
    if (bVar8) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      pcVar5 = local_2e + 2;
      uVar7 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar1 = pcVar5 + uVar6;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar7 & 0xfffffffc));
    if (!bVar8) {
      (pcVar5 + uVar6)[0] = '\0';
      (pcVar5 + uVar6)[1] = '\0';
    }
    cVar2 = PacketBuf::get_int(param_2,&local_10);
    if (cVar2 == '\x01') {
      cVar2 = PacketBuf::get_str(param_2,local_2e,0x1e,local_10);
      if (cVar2 == '\x01') {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        iVar3 = strncmp(local_2e,pcVar5,0x1d);
        if (iVar3 == 0) {
          CUser::SendCmdErrorPacket(param_1,0x8b,7);
          uVar4 = 0;
        }
        else {
          iVar3 = CUser::GetUID(param_1);
          DB_ReqQueryCharacInfo::makeRequest(iVar3,local_2e);
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x9f66,
                         "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
    else {
      uVar4 = LineFunc(0x9f65,
                       "virtual int Dispatcher_QueryCharacInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
  }
  return uVar4;
}
```

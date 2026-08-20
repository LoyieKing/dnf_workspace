# dispatch_sig

`_ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_QueryCharacInfoMailbox` | `0x08226bda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08226bda  _ZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)
# range [0x08226bda, 0x08226d9f]
08226bda +0x000:  push   %ebp
08226bdb +0x001:  mov    %esp,%ebp
08226bdd +0x003:  push   %esi
08226bde +0x004:  push   %ebx
08226bdf +0x005:  sub    $0x40,%esp
08226be2 +0x008:  mov    0xc(%ebp),%eax
08226be5 +0x00b:  mov    %eax,(%esp)
08226be8 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08226bed +0x013:  cmp    $0x2,%eax
08226bf0 +0x016:  jle    08226c01 <+0x27>
08226bf2 +0x018:  mov    0xc(%ebp),%eax
08226bf5 +0x01b:  mov    %eax,(%esp)
08226bf8 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08226bfd +0x023:  test   %eax,%eax
08226bff +0x025:  jne    08226c08 <+0x2e>
08226c01 +0x027:  mov    $0x1,%eax
08226c06 +0x02c:  jmp    08226c0d <+0x33>
08226c08 +0x02e:  mov    $0x0,%eax
08226c0d +0x033:  test   %al,%al
08226c0f +0x035:  je     08226c3a <+0x60>
08226c11 +0x037:  movl   $0x0,0xc(%esp)
08226c19 +0x03f:  movl   $0x0,0x8(%esp)
08226c21 +0x047:  movl   $&_ZZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226c29 +0x04f:  movl   $0xe289,(%esp)
08226c30 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226c35 +0x05b:  jmp    08226d99 <+0x1bf>
08226c3a +0x060:  movl   $0x0,-0xc(%ebp)
08226c41 +0x067:  lea    -0x2a(%ebp),%eax
08226c44 +0x06a:  mov    $0x1e,%ebx
08226c49 +0x06f:  mov    $0x0,%edx
08226c4e +0x074:  mov    %eax,%ecx
08226c50 +0x076:  and    $0x2,%ecx
08226c53 +0x079:  test   %ecx,%ecx
08226c55 +0x07b:  je     08226c60 <+0x86>
08226c57 +0x07d:  mov    %dx,(%eax)
08226c5a +0x080:  add    $0x2,%eax
08226c5d +0x083:  sub    $0x2,%ebx
08226c60 +0x086:  mov    %ebx,%esi
08226c62 +0x088:  and    $0xfffffffc,%esi
08226c65 +0x08b:  mov    $0x0,%ecx
08226c6a +0x090:  mov    %edx,(%eax,%ecx,1)
08226c6d +0x093:  add    $0x4,%ecx
08226c70 +0x096:  cmp    %esi,%ecx
08226c72 +0x098:  jb     08226c6a <+0x90>
08226c74 +0x09a:  add    %ecx,%eax
08226c76 +0x09c:  mov    %ebx,%ecx
08226c78 +0x09e:  and    $0x2,%ecx
08226c7b +0x0a1:  test   %ecx,%ecx
08226c7d +0x0a3:  je     08226c85 <+0xab>
08226c7f +0x0a5:  mov    %dx,(%eax)
08226c82 +0x0a8:  add    $0x2,%eax
08226c85 +0x0ab:  mov    %ebx,%ecx
08226c87 +0x0ad:  and    $0x1,%ecx
08226c8a +0x0b0:  test   %ecx,%ecx
08226c8c +0x0b2:  je     08226c93 <+0xb9>
08226c8e +0x0b4:  mov    %dl,(%eax)
08226c90 +0x0b6:  add    $0x1,%eax
08226c93 +0x0b9:  lea    -0xc(%ebp),%eax
08226c96 +0x0bc:  mov    %eax,0x4(%esp)
08226c9a +0x0c0:  mov    0x10(%ebp),%eax
08226c9d +0x0c3:  mov    %eax,(%esp)
08226ca0 +0x0c6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08226ca5 +0x0cb:  xor    $0x1,%eax
08226ca8 +0x0ce:  test   %al,%al
08226caa +0x0d0:  je     08226cd5 <+0xfb>
08226cac +0x0d2:  movl   $0x0,0xc(%esp)
08226cb4 +0x0da:  movl   $0x0,0x8(%esp)
08226cbc +0x0e2:  movl   $&_ZZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226cc4 +0x0ea:  movl   $0xe28e,(%esp)
08226ccb +0x0f1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226cd0 +0x0f6:  jmp    08226d99 <+0x1bf>
08226cd5 +0x0fb:  mov    -0xc(%ebp),%eax
08226cd8 +0x0fe:  mov    %eax,0xc(%esp)
08226cdc +0x102:  movl   $0x1e,0x8(%esp)
08226ce4 +0x10a:  lea    -0x2a(%ebp),%eax
08226ce7 +0x10d:  mov    %eax,0x4(%esp)
08226ceb +0x111:  mov    0x10(%ebp),%eax
08226cee +0x114:  mov    %eax,(%esp)
08226cf1 +0x117:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08226cf6 +0x11c:  xor    $0x1,%eax
08226cf9 +0x11f:  test   %al,%al
08226cfb +0x121:  je     08226d23 <+0x149>
08226cfd +0x123:  movl   $0x0,0xc(%esp)
08226d05 +0x12b:  movl   $0x0,0x8(%esp)
08226d0d +0x133:  movl   $&_ZZN33Dispatcher_QueryCharacInfoMailbox12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08226d15 +0x13b:  movl   $0xe28f,(%esp)
08226d1c +0x142:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08226d21 +0x147:  jmp    08226d99 <+0x1bf>
08226d23 +0x149:  mov    0xc(%ebp),%eax
08226d26 +0x14c:  mov    %eax,(%esp)
08226d29 +0x14f:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08226d2e +0x154:  mov    %eax,%ebx
08226d30 +0x156:  lea    -0x2a(%ebp),%eax
08226d33 +0x159:  mov    %eax,(%esp)
08226d36 +0x15c:  call   0829f0ef <_Z4trimPc>  ; trim(char*)
08226d3b +0x161:  movl   $0x1d,0x8(%esp)
08226d43 +0x169:  mov    %ebx,0x4(%esp)
08226d47 +0x16d:  mov    %eax,(%esp)
08226d4a +0x170:  call   0807e8c0 <_init+0x11b8>
08226d4f +0x175:  test   %eax,%eax
08226d51 +0x177:  sete   %al
08226d54 +0x17a:  test   %al,%al
08226d56 +0x17c:  je     08226d7a <+0x1a0>
08226d58 +0x17e:  movl   $0x7,0x8(%esp)
08226d60 +0x186:  movl   $0x145,0x4(%esp)
08226d68 +0x18e:  mov    0xc(%ebp),%eax
08226d6b +0x191:  mov    %eax,(%esp)
08226d6e +0x194:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08226d73 +0x199:  mov    $0x0,%eax
08226d78 +0x19e:  jmp    08226d99 <+0x1bf>
08226d7a +0x1a0:  mov    0xc(%ebp),%eax
08226d7d +0x1a3:  mov    %eax,(%esp)
08226d80 +0x1a6:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08226d85 +0x1ab:  lea    -0x2a(%ebp),%edx
08226d88 +0x1ae:  mov    %edx,0x4(%esp)
08226d8c +0x1b2:  mov    %eax,(%esp)
08226d8f +0x1b5:  call   0843c138 <_ZN28DB_ReqQueryCharacInfoMailbox11makeRequestEiPKc>  ; DB_ReqQueryCharacInfoMailbox::makeRequest(int, char const*)
08226d94 +0x1ba:  mov    $0x0,%eax
08226d99 +0x1bf:  add    $0x40,%esp
08226d9c +0x1c2:  pop    %ebx
08226d9d +0x1c3:  pop    %esi
08226d9e +0x1c4:  pop    %ebp
08226d9f +0x1c5:  ret
```

## 反编译 C

```c
// Dispatcher_QueryCharacInfoMailbox::dispatch_sig @ 0x8226bda

/* WARNING: Removing unreachable block (ram,0x08226c8e) */
/* Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_QueryCharacInfoMailbox::dispatch_sig
          (Dispatcher_QueryCharacInfoMailbox *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  char local_2e [30];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if ((iVar2 < 3) ||
     (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 == 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar3 = LineFunc(0xe289,
                     "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    local_10 = 0;
    pcVar4 = local_2e;
    uVar7 = 0x1e;
    bVar8 = ((uint)pcVar4 & 2) != 0;
    if (bVar8) {
      local_2e[0] = '\0';
      local_2e[1] = '\0';
      pcVar4 = local_2e + 2;
      uVar7 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar5 = pcVar4 + uVar6;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar7 & 0xfffffffc));
    if (!bVar8) {
      (pcVar4 + uVar6)[0] = '\0';
      (pcVar4 + uVar6)[1] = '\0';
    }
    cVar1 = PacketBuf::get_int(param_2,&local_10);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_2,local_2e,0x1e,local_10);
      if (cVar1 == '\x01') {
        pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        pcVar5 = (char *)trim(local_2e);
        iVar2 = strncmp(pcVar5,pcVar4,0x1d);
        if (iVar2 == 0) {
          CUser::SendCmdErrorPacket(param_1,0x145,7);
          uVar3 = 0;
        }
        else {
          iVar2 = CUser::GetUID(param_1);
          DB_ReqQueryCharacInfoMailbox::makeRequest(iVar2,local_2e);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(57999,
                         "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe28e,
                       "virtual int Dispatcher_QueryCharacInfoMailbox::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```

# dispatch_sig

`_ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseCreatureEvolutionItem` | `0x08228a76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08228a76  _ZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08228a76, 0x08228bcb]
08228a76 +0x000:  push   %ebp
08228a77 +0x001:  mov    %esp,%ebp
08228a79 +0x003:  sub    $0x38,%esp
08228a7c +0x006:  mov    0xc(%ebp),%eax
08228a7f +0x009:  mov    %eax,(%esp)
08228a82 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08228a87 +0x011:  cmp    $0x3,%eax
08228a8a +0x014:  setne  %al
08228a8d +0x017:  test   %al,%al
08228a8f +0x019:  je     08228a9b <+0x25>
08228a91 +0x01b:  mov    $0x0,%eax
08228a96 +0x020:  jmp    08228bc9 <+0x153>
08228a9b +0x025:  movb   $0x0,-0xd(%ebp)
08228a9f +0x029:  movw   $0x0,-0x10(%ebp)
08228aa5 +0x02f:  movl   $0x0,-0x14(%ebp)
08228aac +0x036:  lea    -0xd(%ebp),%eax
08228aaf +0x039:  mov    %eax,0x4(%esp)
08228ab3 +0x03d:  mov    0x10(%ebp),%eax
08228ab6 +0x040:  mov    %eax,(%esp)
08228ab9 +0x043:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08228abe +0x048:  xor    $0x1,%eax
08228ac1 +0x04b:  test   %al,%al
08228ac3 +0x04d:  je     08228aee <+0x78>
08228ac5 +0x04f:  movl   $0x0,0xc(%esp)
08228acd +0x057:  movl   $0x0,0x8(%esp)
08228ad5 +0x05f:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08228add +0x067:  movl   $0xe609,(%esp)
08228ae4 +0x06e:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08228ae9 +0x073:  jmp    08228bc9 <+0x153>
08228aee +0x078:  lea    -0x10(%ebp),%eax
08228af1 +0x07b:  mov    %eax,0x4(%esp)
08228af5 +0x07f:  mov    0x10(%ebp),%eax
08228af8 +0x082:  mov    %eax,(%esp)
08228afb +0x085:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
08228b00 +0x08a:  xor    $0x1,%eax
08228b03 +0x08d:  test   %al,%al
08228b05 +0x08f:  je     08228b30 <+0xba>
08228b07 +0x091:  movl   $0x0,0xc(%esp)
08228b0f +0x099:  movl   $0x0,0x8(%esp)
08228b17 +0x0a1:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08228b1f +0x0a9:  movl   $0xe60a,(%esp)
08228b26 +0x0b0:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08228b2b +0x0b5:  jmp    08228bc9 <+0x153>
08228b30 +0x0ba:  lea    -0x14(%ebp),%eax
08228b33 +0x0bd:  mov    %eax,0x4(%esp)
08228b37 +0x0c1:  mov    0x10(%ebp),%eax
08228b3a +0x0c4:  mov    %eax,(%esp)
08228b3d +0x0c7:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08228b42 +0x0cc:  xor    $0x1,%eax
08228b45 +0x0cf:  test   %al,%al
08228b47 +0x0d1:  je     08228b6f <+0xf9>
08228b49 +0x0d3:  movl   $0x0,0xc(%esp)
08228b51 +0x0db:  movl   $0x0,0x8(%esp)
08228b59 +0x0e3:  movl   $&_ZZN35Dispatcher_UseCreatureEvolutionItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08228b61 +0x0eb:  movl   $0xe60b,(%esp)
08228b68 +0x0f2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08228b6d +0x0f7:  jmp    08228bc9 <+0x153>
08228b6f +0x0f9:  mov    -0x14(%ebp),%ecx
08228b72 +0x0fc:  movzwl -0x10(%ebp),%eax
08228b76 +0x100:  movswl %ax,%edx
08228b79 +0x103:  movzbl -0xd(%ebp),%eax
08228b7d +0x107:  movzbl %al,%eax
08228b80 +0x10a:  mov    %ecx,0x10(%esp)
08228b84 +0x10e:  mov    %edx,0xc(%esp)
08228b88 +0x112:  mov    %eax,0x8(%esp)
08228b8c +0x116:  mov    0xc(%ebp),%eax
08228b8f +0x119:  mov    %eax,0x4(%esp)
08228b93 +0x11d:  mov    0x8(%ebp),%eax
08228b96 +0x120:  mov    %eax,(%esp)
08228b99 +0x123:  call   08228bcc <_ZN35Dispatcher_UseCreatureEvolutionItem7processEP5CUserhsi>  ; Dispatcher_UseCreatureEvolutionItem::process(CUser*, unsigned char, short, int)
08228b9e +0x128:  mov    %eax,-0xc(%ebp)
08228ba1 +0x12b:  cmpl   $0x0,-0xc(%ebp)
08228ba5 +0x12f:  je     08228bc4 <+0x14e>
08228ba7 +0x131:  mov    -0xc(%ebp),%eax
08228baa +0x134:  movzbl %al,%eax
08228bad +0x137:  mov    %eax,0x8(%esp)
08228bb1 +0x13b:  movl   $0x144,0x4(%esp)
08228bb9 +0x143:  mov    0xc(%ebp),%eax
08228bbc +0x146:  mov    %eax,(%esp)
08228bbf +0x149:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08228bc4 +0x14e:  mov    $0x0,%eax
08228bc9 +0x153:  leave
08228bca +0x154:  ret
08228bcb +0x155:  nop
```

## 反编译 C

```c
// Dispatcher_UseCreatureEvolutionItem::dispatch_sig @ 0x8228a76

/* Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseCreatureEvolutionItem::dispatch_sig
          (Dispatcher_UseCreatureEvolutionItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  short local_14;
  uchar local_11;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    local_11 = '\0';
    local_14 = 0;
    local_18 = 0;
    cVar1 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_2,&local_14);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_2,&local_18);
        if (cVar1 == '\x01') {
          local_10 = process(this,param_1,local_11,local_14,local_18);
          if (local_10 != 0) {
            CUser::SendCmdErrorPacket(param_1,0x144,local_10 & 0xff);
          }
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xe60b,
                           "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xe60a,
                         "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xe609,
                       "virtual int Dispatcher_UseCreatureEvolutionItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```

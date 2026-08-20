# dispatch_sig

`_ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RemovePvPBuddy` | `0x08224c5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224c5e  _ZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224c5e, 0x08224e07]
08224c5e +0x000:  push   %ebp
08224c5f +0x001:  mov    %esp,%ebp
08224c61 +0x003:  push   %edi
08224c62 +0x004:  push   %esi
08224c63 +0x005:  push   %ebx
08224c64 +0x006:  sub    $0x5c,%esp
08224c67 +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08224c6c +0x00e:  mov    %eax,(%esp)
08224c6f +0x011:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08224c74 +0x016:  xor    $0x1,%eax
08224c77 +0x019:  test   %al,%al
08224c79 +0x01b:  je     08224c85 <+0x27>
08224c7b +0x01d:  mov    $0x0,%eax
08224c80 +0x022:  jmp    08224e00 <+0x1a2>
08224c85 +0x027:  lea    -0x36(%ebp),%eax
08224c88 +0x02a:  mov    $0x1e,%ebx
08224c8d +0x02f:  mov    $0x0,%edx
08224c92 +0x034:  mov    %eax,%ecx
08224c94 +0x036:  and    $0x2,%ecx
08224c97 +0x039:  test   %ecx,%ecx
08224c99 +0x03b:  je     08224ca4 <+0x46>
08224c9b +0x03d:  mov    %dx,(%eax)
08224c9e +0x040:  add    $0x2,%eax
08224ca1 +0x043:  sub    $0x2,%ebx
08224ca4 +0x046:  mov    %ebx,%esi
08224ca6 +0x048:  and    $0xfffffffc,%esi
08224ca9 +0x04b:  mov    $0x0,%ecx
08224cae +0x050:  mov    %edx,(%eax,%ecx,1)
08224cb1 +0x053:  add    $0x4,%ecx
08224cb4 +0x056:  cmp    %esi,%ecx
08224cb6 +0x058:  jb     08224cae <+0x50>
08224cb8 +0x05a:  add    %ecx,%eax
08224cba +0x05c:  mov    %ebx,%ecx
08224cbc +0x05e:  and    $0x2,%ecx
08224cbf +0x061:  test   %ecx,%ecx
08224cc1 +0x063:  je     08224cc9 <+0x6b>
08224cc3 +0x065:  mov    %dx,(%eax)
08224cc6 +0x068:  add    $0x2,%eax
08224cc9 +0x06b:  mov    %ebx,%ecx
08224ccb +0x06d:  and    $0x1,%ecx
08224cce +0x070:  test   %ecx,%ecx
08224cd0 +0x072:  je     08224cd7 <+0x79>
08224cd2 +0x074:  mov    %dl,(%eax)
08224cd4 +0x076:  add    $0x1,%eax
08224cd7 +0x079:  movb   $0x0,-0x37(%ebp)
08224cdb +0x07d:  movl   $0x0,-0x3c(%ebp)
08224ce2 +0x084:  lea    -0x37(%ebp),%eax
08224ce5 +0x087:  mov    %eax,0x4(%esp)
08224ce9 +0x08b:  mov    0x10(%ebp),%eax
08224cec +0x08e:  mov    %eax,(%esp)
08224cef +0x091:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08224cf4 +0x096:  xor    $0x1,%eax
08224cf7 +0x099:  test   %al,%al
08224cf9 +0x09b:  je     08224d24 <+0xc6>
08224cfb +0x09d:  movl   $0x0,0xc(%esp)
08224d03 +0x0a5:  movl   $0x0,0x8(%esp)
08224d0b +0x0ad:  movl   $&_ZZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224d13 +0x0b5:  movl   $0xdf6a,(%esp)
08224d1a +0x0bc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224d1f +0x0c1:  jmp    08224e00 <+0x1a2>
08224d24 +0x0c6:  lea    -0x3c(%ebp),%eax
08224d27 +0x0c9:  mov    %eax,0x4(%esp)
08224d2b +0x0cd:  mov    0x10(%ebp),%eax
08224d2e +0x0d0:  mov    %eax,(%esp)
08224d31 +0x0d3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08224d36 +0x0d8:  xor    $0x1,%eax
08224d39 +0x0db:  test   %al,%al
08224d3b +0x0dd:  je     08224d66 <+0x108>
08224d3d +0x0df:  movl   $0x0,0xc(%esp)
08224d45 +0x0e7:  movl   $0x0,0x8(%esp)
08224d4d +0x0ef:  movl   $&_ZZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224d55 +0x0f7:  movl   $0xdf6d,(%esp)
08224d5c +0x0fe:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224d61 +0x103:  jmp    08224e00 <+0x1a2>
08224d66 +0x108:  mov    -0x3c(%ebp),%eax
08224d69 +0x10b:  mov    %eax,0xc(%esp)
08224d6d +0x10f:  movl   $0x1e,0x8(%esp)
08224d75 +0x117:  lea    -0x36(%ebp),%eax
08224d78 +0x11a:  mov    %eax,0x4(%esp)
08224d7c +0x11e:  mov    0x10(%ebp),%eax
08224d7f +0x121:  mov    %eax,(%esp)
08224d82 +0x124:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08224d87 +0x129:  xor    $0x1,%eax
08224d8a +0x12c:  test   %al,%al
08224d8c +0x12e:  je     08224db4 <+0x156>
08224d8e +0x130:  movl   $0x0,0xc(%esp)
08224d96 +0x138:  movl   $0x0,0x8(%esp)
08224d9e +0x140:  movl   $&_ZZN25Dispatcher_RemovePvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224da6 +0x148:  movl   $0xdf70,(%esp)
08224dad +0x14f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224db2 +0x154:  jmp    08224e00 <+0x1a2>
08224db4 +0x156:  mov    -0x3c(%ebp),%edi
08224db7 +0x159:  movzbl -0x37(%ebp),%eax
08224dbb +0x15d:  movsbl %al,%esi
08224dbe +0x160:  mov    0xc(%ebp),%eax
08224dc1 +0x163:  mov    %eax,(%esp)
08224dc4 +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08224dc9 +0x16b:  mov    %eax,%ebx
08224dcb +0x16d:  mov    0xc(%ebp),%eax
08224dce +0x170:  mov    %eax,(%esp)
08224dd1 +0x173:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08224dd6 +0x178:  mov    &_ZN10GlobalData17s_community_proxyE,%edx
08224ddc +0x17e:  mov    %edi,0x14(%esp)
08224de0 +0x182:  lea    -0x36(%ebp),%ecx
08224de3 +0x185:  mov    %ecx,0x10(%esp)
08224de7 +0x189:  mov    %esi,0xc(%esp)
08224deb +0x18d:  mov    %ebx,0x8(%esp)
08224def +0x191:  mov    %eax,0x4(%esp)
08224df3 +0x195:  mov    %edx,(%esp)
08224df6 +0x198:  call   0846cc88 <_ZN21CCommunityServerProxy18SendRemovePvPBuddyEjjcPci>  ; CCommunityServerProxy::SendRemovePvPBuddy(unsigned int, unsigned int, char, char*, int)
08224dfb +0x19d:  mov    $0x0,%eax
08224e00 +0x1a2:  add    $0x5c,%esp
08224e03 +0x1a5:  pop    %ebx
08224e04 +0x1a6:  pop    %esi
08224e05 +0x1a7:  pop    %edi
08224e06 +0x1a8:  pop    %ebp
08224e07 +0x1a9:  ret
```

## 反编译 C

```c
// Dispatcher_RemovePvPBuddy::dispatch_sig @ 0x8224c5e

/* WARNING: Removing unreachable block (ram,0x08224cd2) */
/* Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RemovePvPBuddy::dispatch_sig
          (Dispatcher_RemovePvPBuddy *this,CUser *param_1,PacketBuf *param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int local_40;
  char local_3b;
  char local_3a [42];
  
  this_00 = (GameWorld *)G_GameWorld();
  cVar3 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar3 == '\x01') {
    pcVar6 = local_3a;
    uVar8 = 0x1e;
    bVar9 = ((uint)pcVar6 & 2) != 0;
    if (bVar9) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar6 = local_3a + 2;
      uVar8 = 0x1c;
    }
    uVar7 = 0;
    do {
      pcVar1 = pcVar6 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar8 & 0xfffffffc));
    if (!bVar9) {
      (pcVar6 + uVar7)[0] = '\0';
      (pcVar6 + uVar7)[1] = '\0';
    }
    local_3b = '\0';
    local_40 = 0;
    cVar3 = PacketBuf::get_byte(param_2,&local_3b);
    if (cVar3 == '\x01') {
      cVar3 = PacketBuf::get_int(param_2,&local_40);
      if (cVar3 == '\x01') {
        cVar4 = PacketBuf::get_str(param_2,local_3a,0x1e,local_40);
        cVar3 = local_3b;
        iVar2 = local_40;
        if (cVar4 == '\x01') {
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar7 = CUser::get_acc_id(param_1);
          CCommunityServerProxy::SendRemovePvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf70,
                           "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf6d,
                         "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)",0
                         ,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf6a,
                       "virtual int Dispatcher_RemovePvPBuddy::dispatch_sig(CUser*, PacketBuf&)",0,0
                      );
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

# dispatch_sig

`_ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ResponseAddPvPBuddy` | `0x08224ab4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08224ab4  _ZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)
# range [0x08224ab4, 0x08224c5d]
08224ab4 +0x000:  push   %ebp
08224ab5 +0x001:  mov    %esp,%ebp
08224ab7 +0x003:  push   %edi
08224ab8 +0x004:  push   %esi
08224ab9 +0x005:  push   %ebx
08224aba +0x006:  sub    $0x5c,%esp
08224abd +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08224ac2 +0x00e:  mov    %eax,(%esp)
08224ac5 +0x011:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08224aca +0x016:  xor    $0x1,%eax
08224acd +0x019:  test   %al,%al
08224acf +0x01b:  je     08224adb <+0x27>
08224ad1 +0x01d:  mov    $0x0,%eax
08224ad6 +0x022:  jmp    08224c56 <+0x1a2>
08224adb +0x027:  lea    -0x36(%ebp),%eax
08224ade +0x02a:  mov    $0x1e,%ebx
08224ae3 +0x02f:  mov    $0x0,%edx
08224ae8 +0x034:  mov    %eax,%ecx
08224aea +0x036:  and    $0x2,%ecx
08224aed +0x039:  test   %ecx,%ecx
08224aef +0x03b:  je     08224afa <+0x46>
08224af1 +0x03d:  mov    %dx,(%eax)
08224af4 +0x040:  add    $0x2,%eax
08224af7 +0x043:  sub    $0x2,%ebx
08224afa +0x046:  mov    %ebx,%esi
08224afc +0x048:  and    $0xfffffffc,%esi
08224aff +0x04b:  mov    $0x0,%ecx
08224b04 +0x050:  mov    %edx,(%eax,%ecx,1)
08224b07 +0x053:  add    $0x4,%ecx
08224b0a +0x056:  cmp    %esi,%ecx
08224b0c +0x058:  jb     08224b04 <+0x50>
08224b0e +0x05a:  add    %ecx,%eax
08224b10 +0x05c:  mov    %ebx,%ecx
08224b12 +0x05e:  and    $0x2,%ecx
08224b15 +0x061:  test   %ecx,%ecx
08224b17 +0x063:  je     08224b1f <+0x6b>
08224b19 +0x065:  mov    %dx,(%eax)
08224b1c +0x068:  add    $0x2,%eax
08224b1f +0x06b:  mov    %ebx,%ecx
08224b21 +0x06d:  and    $0x1,%ecx
08224b24 +0x070:  test   %ecx,%ecx
08224b26 +0x072:  je     08224b2d <+0x79>
08224b28 +0x074:  mov    %dl,(%eax)
08224b2a +0x076:  add    $0x1,%eax
08224b2d +0x079:  movb   $0x0,-0x37(%ebp)
08224b31 +0x07d:  movl   $0x0,-0x3c(%ebp)
08224b38 +0x084:  lea    -0x37(%ebp),%eax
08224b3b +0x087:  mov    %eax,0x4(%esp)
08224b3f +0x08b:  mov    0x10(%ebp),%eax
08224b42 +0x08e:  mov    %eax,(%esp)
08224b45 +0x091:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08224b4a +0x096:  xor    $0x1,%eax
08224b4d +0x099:  test   %al,%al
08224b4f +0x09b:  je     08224b7a <+0xc6>
08224b51 +0x09d:  movl   $0x0,0xc(%esp)
08224b59 +0x0a5:  movl   $0x0,0x8(%esp)
08224b61 +0x0ad:  movl   $&_ZZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224b69 +0x0b5:  movl   $0xdf53,(%esp)
08224b70 +0x0bc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224b75 +0x0c1:  jmp    08224c56 <+0x1a2>
08224b7a +0x0c6:  lea    -0x3c(%ebp),%eax
08224b7d +0x0c9:  mov    %eax,0x4(%esp)
08224b81 +0x0cd:  mov    0x10(%ebp),%eax
08224b84 +0x0d0:  mov    %eax,(%esp)
08224b87 +0x0d3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08224b8c +0x0d8:  xor    $0x1,%eax
08224b8f +0x0db:  test   %al,%al
08224b91 +0x0dd:  je     08224bbc <+0x108>
08224b93 +0x0df:  movl   $0x0,0xc(%esp)
08224b9b +0x0e7:  movl   $0x0,0x8(%esp)
08224ba3 +0x0ef:  movl   $&_ZZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224bab +0x0f7:  movl   $0xdf56,(%esp)
08224bb2 +0x0fe:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224bb7 +0x103:  jmp    08224c56 <+0x1a2>
08224bbc +0x108:  mov    -0x3c(%ebp),%eax
08224bbf +0x10b:  mov    %eax,0xc(%esp)
08224bc3 +0x10f:  movl   $0x1e,0x8(%esp)
08224bcb +0x117:  lea    -0x36(%ebp),%eax
08224bce +0x11a:  mov    %eax,0x4(%esp)
08224bd2 +0x11e:  mov    0x10(%ebp),%eax
08224bd5 +0x121:  mov    %eax,(%esp)
08224bd8 +0x124:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08224bdd +0x129:  xor    $0x1,%eax
08224be0 +0x12c:  test   %al,%al
08224be2 +0x12e:  je     08224c0a <+0x156>
08224be4 +0x130:  movl   $0x0,0xc(%esp)
08224bec +0x138:  movl   $0x0,0x8(%esp)
08224bf4 +0x140:  movl   $&_ZZN30Dispatcher_ResponseAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224bfc +0x148:  movl   $0xdf59,(%esp)
08224c03 +0x14f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224c08 +0x154:  jmp    08224c56 <+0x1a2>
08224c0a +0x156:  mov    -0x3c(%ebp),%edi
08224c0d +0x159:  movzbl -0x37(%ebp),%eax
08224c11 +0x15d:  movsbl %al,%esi
08224c14 +0x160:  mov    0xc(%ebp),%eax
08224c17 +0x163:  mov    %eax,(%esp)
08224c1a +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08224c1f +0x16b:  mov    %eax,%ebx
08224c21 +0x16d:  mov    0xc(%ebp),%eax
08224c24 +0x170:  mov    %eax,(%esp)
08224c27 +0x173:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08224c2c +0x178:  mov    &_ZN10GlobalData17s_community_proxyE,%edx
08224c32 +0x17e:  mov    %edi,0x14(%esp)
08224c36 +0x182:  lea    -0x36(%ebp),%ecx
08224c39 +0x185:  mov    %ecx,0x10(%esp)
08224c3d +0x189:  mov    %esi,0xc(%esp)
08224c41 +0x18d:  mov    %ebx,0x8(%esp)
08224c45 +0x191:  mov    %eax,0x4(%esp)
08224c49 +0x195:  mov    %edx,(%esp)
08224c4c +0x198:  call   0846cc22 <_ZN21CCommunityServerProxy18SendResAddPvPBuddyEjjcPci>  ; CCommunityServerProxy::SendResAddPvPBuddy(unsigned int, unsigned int, char, char*, int)
08224c51 +0x19d:  mov    $0x0,%eax
08224c56 +0x1a2:  add    $0x5c,%esp
08224c59 +0x1a5:  pop    %ebx
08224c5a +0x1a6:  pop    %esi
08224c5b +0x1a7:  pop    %edi
08224c5c +0x1a8:  pop    %ebp
08224c5d +0x1a9:  ret
```

## 反编译 C

```c
// Dispatcher_ResponseAddPvPBuddy::dispatch_sig @ 0x8224ab4

/* WARNING: Removing unreachable block (ram,0x08224b28) */
/* Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ResponseAddPvPBuddy::dispatch_sig
          (Dispatcher_ResponseAddPvPBuddy *this,CUser *param_1,PacketBuf *param_2)

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
          CCommunityServerProxy::SendResAddPvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf59,
                           "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf56,
                         "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf53,
                       "virtual int Dispatcher_ResponseAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

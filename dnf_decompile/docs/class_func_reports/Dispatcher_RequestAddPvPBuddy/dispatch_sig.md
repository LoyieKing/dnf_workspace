# dispatch_sig

`_ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestAddPvPBuddy` | `0x0822490a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822490a  _ZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822490a, 0x08224ab3]
0822490a +0x000:  push   %ebp
0822490b +0x001:  mov    %esp,%ebp
0822490d +0x003:  push   %edi
0822490e +0x004:  push   %esi
0822490f +0x005:  push   %ebx
08224910 +0x006:  sub    $0x5c,%esp
08224913 +0x009:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08224918 +0x00e:  mov    %eax,(%esp)
0822491b +0x011:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08224920 +0x016:  xor    $0x1,%eax
08224923 +0x019:  test   %al,%al
08224925 +0x01b:  je     08224931 <+0x27>
08224927 +0x01d:  mov    $0x0,%eax
0822492c +0x022:  jmp    08224aac <+0x1a2>
08224931 +0x027:  lea    -0x36(%ebp),%eax
08224934 +0x02a:  mov    $0x1e,%ebx
08224939 +0x02f:  mov    $0x0,%edx
0822493e +0x034:  mov    %eax,%ecx
08224940 +0x036:  and    $0x2,%ecx
08224943 +0x039:  test   %ecx,%ecx
08224945 +0x03b:  je     08224950 <+0x46>
08224947 +0x03d:  mov    %dx,(%eax)
0822494a +0x040:  add    $0x2,%eax
0822494d +0x043:  sub    $0x2,%ebx
08224950 +0x046:  mov    %ebx,%esi
08224952 +0x048:  and    $0xfffffffc,%esi
08224955 +0x04b:  mov    $0x0,%ecx
0822495a +0x050:  mov    %edx,(%eax,%ecx,1)
0822495d +0x053:  add    $0x4,%ecx
08224960 +0x056:  cmp    %esi,%ecx
08224962 +0x058:  jb     0822495a <+0x50>
08224964 +0x05a:  add    %ecx,%eax
08224966 +0x05c:  mov    %ebx,%ecx
08224968 +0x05e:  and    $0x2,%ecx
0822496b +0x061:  test   %ecx,%ecx
0822496d +0x063:  je     08224975 <+0x6b>
0822496f +0x065:  mov    %dx,(%eax)
08224972 +0x068:  add    $0x2,%eax
08224975 +0x06b:  mov    %ebx,%ecx
08224977 +0x06d:  and    $0x1,%ecx
0822497a +0x070:  test   %ecx,%ecx
0822497c +0x072:  je     08224983 <+0x79>
0822497e +0x074:  mov    %dl,(%eax)
08224980 +0x076:  add    $0x1,%eax
08224983 +0x079:  movb   $0x0,-0x37(%ebp)
08224987 +0x07d:  movl   $0x0,-0x3c(%ebp)
0822498e +0x084:  lea    -0x37(%ebp),%eax
08224991 +0x087:  mov    %eax,0x4(%esp)
08224995 +0x08b:  mov    0x10(%ebp),%eax
08224998 +0x08e:  mov    %eax,(%esp)
0822499b +0x091:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082249a0 +0x096:  xor    $0x1,%eax
082249a3 +0x099:  test   %al,%al
082249a5 +0x09b:  je     082249d0 <+0xc6>
082249a7 +0x09d:  movl   $0x0,0xc(%esp)
082249af +0x0a5:  movl   $0x0,0x8(%esp)
082249b7 +0x0ad:  movl   $&_ZZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082249bf +0x0b5:  movl   $0xdf3c,(%esp)
082249c6 +0x0bc:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082249cb +0x0c1:  jmp    08224aac <+0x1a2>
082249d0 +0x0c6:  lea    -0x3c(%ebp),%eax
082249d3 +0x0c9:  mov    %eax,0x4(%esp)
082249d7 +0x0cd:  mov    0x10(%ebp),%eax
082249da +0x0d0:  mov    %eax,(%esp)
082249dd +0x0d3:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082249e2 +0x0d8:  xor    $0x1,%eax
082249e5 +0x0db:  test   %al,%al
082249e7 +0x0dd:  je     08224a12 <+0x108>
082249e9 +0x0df:  movl   $0x0,0xc(%esp)
082249f1 +0x0e7:  movl   $0x0,0x8(%esp)
082249f9 +0x0ef:  movl   $&_ZZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224a01 +0x0f7:  movl   $0xdf3f,(%esp)
08224a08 +0x0fe:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224a0d +0x103:  jmp    08224aac <+0x1a2>
08224a12 +0x108:  mov    -0x3c(%ebp),%eax
08224a15 +0x10b:  mov    %eax,0xc(%esp)
08224a19 +0x10f:  movl   $0x1e,0x8(%esp)
08224a21 +0x117:  lea    -0x36(%ebp),%eax
08224a24 +0x11a:  mov    %eax,0x4(%esp)
08224a28 +0x11e:  mov    0x10(%ebp),%eax
08224a2b +0x121:  mov    %eax,(%esp)
08224a2e +0x124:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08224a33 +0x129:  xor    $0x1,%eax
08224a36 +0x12c:  test   %al,%al
08224a38 +0x12e:  je     08224a60 <+0x156>
08224a3a +0x130:  movl   $0x0,0xc(%esp)
08224a42 +0x138:  movl   $0x0,0x8(%esp)
08224a4a +0x140:  movl   $&_ZZN29Dispatcher_RequestAddPvPBuddy12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08224a52 +0x148:  movl   $0xdf42,(%esp)
08224a59 +0x14f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08224a5e +0x154:  jmp    08224aac <+0x1a2>
08224a60 +0x156:  mov    -0x3c(%ebp),%edi
08224a63 +0x159:  movzbl -0x37(%ebp),%eax
08224a67 +0x15d:  movsbl %al,%esi
08224a6a +0x160:  mov    0xc(%ebp),%eax
08224a6d +0x163:  mov    %eax,(%esp)
08224a70 +0x166:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08224a75 +0x16b:  mov    %eax,%ebx
08224a77 +0x16d:  mov    0xc(%ebp),%eax
08224a7a +0x170:  mov    %eax,(%esp)
08224a7d +0x173:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08224a82 +0x178:  mov    &_ZN10GlobalData17s_community_proxyE,%edx
08224a88 +0x17e:  mov    %edi,0x14(%esp)
08224a8c +0x182:  lea    -0x36(%ebp),%ecx
08224a8f +0x185:  mov    %ecx,0x10(%esp)
08224a93 +0x189:  mov    %esi,0xc(%esp)
08224a97 +0x18d:  mov    %ebx,0x8(%esp)
08224a9b +0x191:  mov    %eax,0x4(%esp)
08224a9f +0x195:  mov    %edx,(%esp)
08224aa2 +0x198:  call   0846cbbc <_ZN21CCommunityServerProxy18SendReqAddPvPBuddyEjjcPci>  ; CCommunityServerProxy::SendReqAddPvPBuddy(unsigned int, unsigned int, char, char*, int)
08224aa7 +0x19d:  mov    $0x0,%eax
08224aac +0x1a2:  add    $0x5c,%esp
08224aaf +0x1a5:  pop    %ebx
08224ab0 +0x1a6:  pop    %esi
08224ab1 +0x1a7:  pop    %edi
08224ab2 +0x1a8:  pop    %ebp
08224ab3 +0x1a9:  ret
```

## 反编译 C

```c
// Dispatcher_RequestAddPvPBuddy::dispatch_sig @ 0x822490a

/* WARNING: Removing unreachable block (ram,0x0822497e) */
/* Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestAddPvPBuddy::dispatch_sig
          (Dispatcher_RequestAddPvPBuddy *this,CUser *param_1,PacketBuf *param_2)

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
          CCommunityServerProxy::SendReqAddPvPBuddy
                    (GlobalData::s_community_proxy,uVar7,uVar8,cVar3,local_3a,iVar2);
          uVar5 = 0;
        }
        else {
          uVar5 = LineFunc(0xdf42,
                           "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar5 = LineFunc(0xdf3f,
                         "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar5 = LineFunc(0xdf3c,
                       "virtual int Dispatcher_RequestAddPvPBuddy::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```

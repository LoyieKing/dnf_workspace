# send_userinfos_to_cutoff_server

`_ZN12CGameManager31send_userinfos_to_cutoff_serverEv`

`CGameManager::send_userinfos_to_cutoff_server()`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x08295e84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295e84  _ZN12CGameManager31send_userinfos_to_cutoff_serverEv
#           CGameManager::send_userinfos_to_cutoff_server()
# range [0x08295e84, 0x08296119]
08295e84 +0x000:  push   %ebp
08295e85 +0x001:  mov    %esp,%ebp
08295e87 +0x003:  push   %esi
08295e88 +0x004:  push   %ebx
08295e89 +0x005:  sub    $0x6910,%esp
08295e8f +0x00b:  lea    -0x6908(%ebp),%eax
08295e95 +0x011:  mov    %eax,%ebx
08295e97 +0x013:  mov    $0x9,%esi
08295e9c +0x018:  jmp    08295eaf <+0x2b>
08295e9e +0x01a:  mov    %ebx,(%esp)
08295ea1 +0x01d:  call   08295e76 <_ZZN12CGameManager31send_userinfos_to_cutoff_serverEvEN11STTempUsersC1Ev>  ; CGameManager::send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers()
08295ea6 +0x022:  add    $0x964,%ebx
08295eac +0x028:  sub    $0x1,%esi
08295eaf +0x02b:  cmp    $0xffffffff,%esi
08295eb2 +0x02e:  setne  %al
08295eb5 +0x031:  test   %al,%al
08295eb7 +0x033:  jne    08295e9e <+0x1a>
08295eb9 +0x035:  lea    -0xb1e(%ebp),%eax
08295ebf +0x03b:  mov    %eax,(%esp)
08295ec2 +0x03e:  call   082a3fa2 <_GLOBAL__I__ZN4CLog5this_E+0x3c9>  ; global constructors keyed to CLog::this_+0x3c9
08295ec7 +0x043:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08295ecc +0x048:  mov    %eax,(%esp)
08295ecf +0x04b:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08295ed4 +0x050:  mov    %al,-0xb12(%ebp)
08295eda +0x056:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08295edf +0x05b:  mov    0x378(%eax),%eax
08295ee5 +0x061:  mov    %al,-0xb11(%ebp)
08295eeb +0x067:  mov    0x8(%ebp),%eax
08295eee +0x06a:  add    $0x22c,%eax
08295ef3 +0x06f:  mov    %eax,(%esp)
08295ef6 +0x072:  call   082b2a96 <_GLOBAL__I__ZN4CLog5this_E+0xeebd>  ; global constructors keyed to CLog::this_+0xeebd
08295efb +0x077:  test   %al,%al
08295efd +0x079:  jne    0829610f <+0x28b>
08295f03 +0x07f:  mov    0x8(%ebp),%eax
08295f06 +0x082:  lea    0x22c(%eax),%edx
08295f0c +0x088:  lea    -0x20(%ebp),%eax
08295f0f +0x08b:  mov    %edx,0x4(%esp)
08295f13 +0x08f:  mov    %eax,(%esp)
08295f16 +0x092:  call   080d3ab4 <_GLOBAL__I__ZN10BingoEventC2Ev+0x8901>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8901
08295f1b +0x097:  sub    $0x4,%esp
08295f1e +0x09a:  jmp    08295fc7 <+0x143>
08295f23 +0x09f:  lea    -0x20(%ebp),%eax
08295f26 +0x0a2:  mov    %eax,(%esp)
08295f29 +0x0a5:  call   082b0798 <_GLOBAL__I__ZN4CLog5this_E+0xcbbf>  ; global constructors keyed to CLog::this_+0xcbbf
08295f2e +0x0aa:  mov    0x4(%eax),%eax
08295f31 +0x0ad:  mov    %eax,-0x14(%ebp)
08295f34 +0x0b0:  mov    -0x14(%ebp),%eax
08295f37 +0x0b3:  mov    %eax,(%esp)
08295f3a +0x0b6:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08295f3f +0x0bb:  cmp    $0x1,%eax
08295f42 +0x0be:  setg   %al
08295f45 +0x0c1:  test   %al,%al
08295f47 +0x0c3:  je     08295fbc <+0x138>
08295f49 +0x0c5:  mov    -0x14(%ebp),%eax
08295f4c +0x0c8:  mov    %eax,(%esp)
08295f4f +0x0cb:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08295f54 +0x0d0:  mov    %eax,%ecx
08295f56 +0x0d2:  mov    $0xcccccccd,%edx
08295f5b +0x0d7:  mov    %ecx,%eax
08295f5d +0x0d9:  mul    %edx
08295f5f +0x0db:  shr    $0x3,%edx
08295f62 +0x0de:  mov    %edx,%eax
08295f64 +0x0e0:  shl    $0x2,%eax
08295f67 +0x0e3:  add    %edx,%eax
08295f69 +0x0e5:  add    %eax,%eax
08295f6b +0x0e7:  mov    %ecx,%edx
08295f6d +0x0e9:  sub    %eax,%edx
08295f6f +0x0eb:  mov    %edx,-0x18(%ebp)
08295f72 +0x0ee:  mov    -0x18(%ebp),%eax
08295f75 +0x0f1:  lea    -0x6908(%ebp),%edx
08295f7b +0x0f7:  imul   $0x964,%eax,%eax
08295f81 +0x0fd:  lea    (%edx,%eax,1),%eax
08295f84 +0x100:  mov    %eax,-0x10(%ebp)
08295f87 +0x103:  mov    -0x18(%ebp),%esi
08295f8a +0x106:  mov    -0x10(%ebp),%eax
08295f8d +0x109:  movzwl (%eax),%eax
08295f90 +0x10c:  movzwl %ax,%ebx
08295f93 +0x10f:  mov    -0x14(%ebp),%eax
08295f96 +0x112:  mov    %eax,(%esp)
08295f99 +0x115:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08295f9e +0x11a:  imul   $0x259,%esi,%edx
08295fa4 +0x120:  add    %ebx,%edx
08295fa6 +0x122:  mov    %eax,-0x6904(%ebp,%edx,4)
08295fad +0x129:  mov    -0x10(%ebp),%eax
08295fb0 +0x12c:  movzwl (%eax),%eax
08295fb3 +0x12f:  lea    0x1(%eax),%edx
08295fb6 +0x132:  mov    -0x10(%ebp),%eax
08295fb9 +0x135:  mov    %dx,(%eax)
08295fbc +0x138:  lea    -0x20(%ebp),%eax
08295fbf +0x13b:  mov    %eax,(%esp)
08295fc2 +0x13e:  call   080d0d52 <_GLOBAL__I__ZN10BingoEventC2Ev+0x5b9f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5b9f
08295fc7 +0x143:  mov    0x8(%ebp),%eax
08295fca +0x146:  lea    0x22c(%eax),%edx
08295fd0 +0x14c:  lea    -0x1c(%ebp),%eax
08295fd3 +0x14f:  mov    %edx,0x4(%esp)
08295fd7 +0x153:  mov    %eax,(%esp)
08295fda +0x156:  call   080d3ada <_GLOBAL__I__ZN10BingoEventC2Ev+0x8927>  ; global constructors keyed to BingoEvent::BingoEvent()+0x8927
08295fdf +0x15b:  sub    $0x4,%esp
08295fe2 +0x15e:  lea    -0x1c(%ebp),%eax
08295fe5 +0x161:  mov    %eax,0x4(%esp)
08295fe9 +0x165:  lea    -0x20(%ebp),%eax
08295fec +0x168:  mov    %eax,(%esp)
08295fef +0x16b:  call   082b07fc <_GLOBAL__I__ZN4CLog5this_E+0xcc23>  ; global constructors keyed to CLog::this_+0xcc23
08295ff4 +0x170:  test   %al,%al
08295ff6 +0x172:  jne    08295f23 <+0x9f>
08295ffc +0x178:  movl   $0x0,-0xc(%ebp)
08296003 +0x17f:  jmp    082960fe <+0x27a>
08296008 +0x184:  mov    -0xc(%ebp),%eax
0829600b +0x187:  imul   $0x964,%eax,%eax
08296011 +0x18d:  lea    -0x8(%ebp),%edx
08296014 +0x190:  lea    (%edx,%eax,1),%eax
08296017 +0x193:  sub    $0x6900,%eax
0829601c +0x198:  movzwl (%eax),%eax
0829601f +0x19b:  test   %ax,%ax
08296022 +0x19e:  je     082960fa <+0x276>
08296028 +0x1a4:  mov    -0xc(%ebp),%eax
0829602b +0x1a7:  imul   $0x964,%eax,%eax
08296031 +0x1ad:  lea    -0x8(%ebp),%edx
08296034 +0x1b0:  lea    (%edx,%eax,1),%eax
08296037 +0x1b3:  sub    $0x6900,%eax
0829603c +0x1b8:  movzwl (%eax),%eax
0829603f +0x1bb:  shl    $0x2,%eax
08296042 +0x1be:  add    $0xe,%eax
08296045 +0x1c1:  mov    %ax,-0xb1c(%ebp)
0829604c +0x1c8:  mov    -0xc(%ebp),%eax
0829604f +0x1cb:  imul   $0x964,%eax,%eax
08296055 +0x1d1:  lea    -0x8(%ebp),%edx
08296058 +0x1d4:  lea    (%edx,%eax,1),%eax
0829605b +0x1d7:  sub    $0x6900,%eax
08296060 +0x1dc:  movzwl (%eax),%eax
08296063 +0x1df:  mov    %ax,-0xb14(%ebp)
0829606a +0x1e6:  mov    -0xc(%ebp),%eax
0829606d +0x1e9:  imul   $0x964,%eax,%eax
08296073 +0x1ef:  lea    -0x8(%ebp),%edx
08296076 +0x1f2:  lea    (%edx,%eax,1),%eax
08296079 +0x1f5:  sub    $0x6900,%eax
0829607e +0x1fa:  movzwl (%eax),%eax
08296081 +0x1fd:  movzwl %ax,%eax
08296084 +0x200:  lea    0x0(,%eax,4),%edx
0829608b +0x207:  mov    -0xc(%ebp),%eax
0829608e +0x20a:  lea    -0x6908(%ebp),%ecx
08296094 +0x210:  imul   $0x964,%eax,%eax
0829609a +0x216:  lea    (%ecx,%eax,1),%eax
0829609d +0x219:  add    $0x4,%eax
082960a0 +0x21c:  mov    %edx,0x8(%esp)
082960a4 +0x220:  mov    %eax,0x4(%esp)
082960a8 +0x224:  lea    -0xb1e(%ebp),%eax
082960ae +0x22a:  add    $0xe,%eax
082960b1 +0x22d:  mov    %eax,(%esp)
082960b4 +0x230:  call   0807d8a0 <_init+0x198>
082960b9 +0x235:  mov    -0xc(%ebp),%eax
082960bc +0x238:  imul   $0x964,%eax,%eax
082960c2 +0x23e:  lea    -0x8(%ebp),%edx
082960c5 +0x241:  lea    (%edx,%eax,1),%eax
082960c8 +0x244:  sub    $0x68fc,%eax
082960cd +0x249:  mov    (%eax),%eax
082960cf +0x24b:  mov    %eax,-0xb18(%ebp)
082960d5 +0x251:  movzwl -0xb1c(%ebp),%eax
082960dc +0x258:  movzwl %ax,%ecx
082960df +0x25b:  lea    -0xb1e(%ebp),%edx
082960e5 +0x261:  mov    &_ZN10GlobalData20s_double_check_proxyE,%eax
082960ea +0x266:  mov    %ecx,0x8(%esp)
082960ee +0x26a:  mov    %edx,0x4(%esp)
082960f2 +0x26e:  mov    %eax,(%esp)
082960f5 +0x271:  call   0846d4ee <_ZN27CDoubleConnCheckServerProxy10SendPacketEPci>  ; CDoubleConnCheckServerProxy::SendPacket(char*, int)
082960fa +0x276:  addl   $0x1,-0xc(%ebp)
082960fe +0x27a:  cmpl   $0x9,-0xc(%ebp)
08296102 +0x27e:  setle  %al
08296105 +0x281:  test   %al,%al
08296107 +0x283:  jne    08296008 <+0x184>
0829610d +0x289:  jmp    08296110 <+0x28c>
0829610f +0x28b:  nop
08296110 +0x28c:  lea    -0x8(%ebp),%esp
08296113 +0x28f:  add    $0x0,%esp
08296116 +0x292:  pop    %ebx
08296117 +0x293:  pop    %esi
08296118 +0x294:  pop    %ebp
08296119 +0x295:  ret
```

## 反编译 C

```c
// CGameManager::send_userinfos_to_cutoff_server @ 0x8295e84

/* CGameManager::send_userinfos_to_cutoff_server() */

void __thiscall CGameManager::send_userinfos_to_cutoff_server(CGameManager *this)

{
  ushort uVar1;
  char cVar2;
  CEnvironment *this_00;
  uint uVar3;
  undefined4 uVar4;
  STTempUsers *this_01;
  int iVar5;
  STTempUsers local_690c [4];
  undefined4 auStack_6908 [6009];
  Packet_CutOff_UDP_Reply_UserInfo local_b22 [2];
  ushort local_b20;
  undefined4 local_b1c;
  undefined2 local_b18;
  undefined1 local_b16;
  undefined1 local_b15;
  undefined1 auStack_b14 [2800];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_24 [4];
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  local_20 [4];
  uint local_1c;
  CUser *local_18;
  STTempUsers *local_14;
  int local_10;
  
  this_01 = local_690c;
  for (iVar5 = 9; iVar5 != -1; iVar5 = iVar5 + -1) {
    send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers(this_01);
    this_01 = this_01 + 0x964;
  }
  Packet_CutOff_UDP_Reply_UserInfo::Packet_CutOff_UDP_Reply_UserInfo(local_b22);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_b16 = CEnvironment::get_channel_no(this_00);
  iVar5 = G_CEnvironment();
  local_b15 = (undefined1)*(undefined4 *)(iVar5 + 0x378);
  cVar2 = std::
          map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          ::empty((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
                   *)(this + 0x22c));
  if (cVar2 == '\0') {
    std::
    map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24,
                         (_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      iVar5 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24);
      local_18 = *(CUser **)(iVar5 + 4);
      iVar5 = CUser::get_state(local_18);
      if (1 < iVar5) {
        uVar3 = CUser::get_acc_id(local_18);
        uVar3 = uVar3 % 10;
        local_14 = local_690c + uVar3 * 0x964;
        uVar1 = *(ushort *)local_14;
        local_1c = uVar3;
        uVar4 = CUser::get_acc_id(local_18);
        auStack_6908[uVar3 * 0x259 + (uint)uVar1] = uVar4;
        *(ushort *)local_14 = *(ushort *)local_14 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,CUser*>> *)local_24);
    }
    for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
      if (*(short *)(local_690c + local_10 * 0x964) != 0) {
        local_b20 = *(short *)(local_690c + local_10 * 0x964) * 4 + 0xe;
        local_b18 = *(undefined2 *)(local_690c + local_10 * 0x964);
        memcpy(auStack_b14,auStack_6908 + local_10 * 0x259,
               (uint)*(ushort *)(local_690c + local_10 * 0x964) * 4);
        local_b1c = auStack_6908[local_10 * 0x259];
        CDoubleConnCheckServerProxy::SendPacket
                  (GlobalData::s_double_check_proxy,(char *)local_b22,(uint)local_b20);
      }
    }
  }
  return;
}
```

# CheckMailTimeout

`_ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard`

`WongWork::CMailBoxHelper::CheckMailTimeout(CUser*, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08554e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08554e90  _ZN8WongWork14CMailBoxHelper16CheckMailTimeoutEP5CUserP11PacketGuard
#           WongWork::CMailBoxHelper::CheckMailTimeout(CUser*, PacketGuard*)
# range [0x08554e90, 0x08555117]
08554e90 +0x000:  push   %ebp
08554e91 +0x001:  mov    %esp,%ebp
08554e93 +0x003:  push   %edi
08554e94 +0x004:  push   %ebx
08554e95 +0x005:  sub    $0xa0,%esp
08554e9b +0x00b:  mov    0x8(%ebp),%eax
08554e9e +0x00e:  mov    %eax,(%esp)
08554ea1 +0x011:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
08554ea6 +0x016:  mov    %eax,-0x18(%ebp)
08554ea9 +0x019:  cmpl   $0x0,-0x18(%ebp)
08554ead +0x01d:  jne    08554eb9 <+0x29>
08554eaf +0x01f:  mov    $0x0,%eax
08554eb4 +0x024:  jmp    0855510e <+0x27e>
08554eb9 +0x029:  lea    -0x80(%ebp),%ebx
08554ebc +0x02c:  mov    $0x0,%eax
08554ec1 +0x031:  mov    $0x15,%edx
08554ec6 +0x036:  mov    %ebx,%edi
08554ec8 +0x038:  mov    %edx,%ecx
08554eca +0x03a:  rep stos %eax,%es:(%edi)
08554ecc +0x03c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08554ed3 +0x043:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08554ed8 +0x048:  mov    %eax,-0x14(%ebp)
08554edb +0x04b:  mov    -0x18(%ebp),%eax
08554ede +0x04e:  lea    0x40(%eax),%edx
08554ee1 +0x051:  lea    -0x28(%ebp),%eax
08554ee4 +0x054:  mov    %edx,0x4(%esp)
08554ee8 +0x058:  mov    %eax,(%esp)
08554eeb +0x05b:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08554ef0 +0x060:  sub    $0x4,%esp
08554ef3 +0x063:  mov    -0x18(%ebp),%eax
08554ef6 +0x066:  lea    0x40(%eax),%edx
08554ef9 +0x069:  lea    -0x24(%ebp),%eax
08554efc +0x06c:  mov    %edx,0x4(%esp)
08554f00 +0x070:  mov    %eax,(%esp)
08554f03 +0x073:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08554f08 +0x078:  sub    $0x4,%esp
08554f0b +0x07b:  lea    -0x24(%ebp),%eax
08554f0e +0x07e:  mov    %eax,0x4(%esp)
08554f12 +0x082:  lea    -0x2c(%ebp),%eax
08554f15 +0x085:  mov    %eax,(%esp)
08554f18 +0x088:  call   085586f8 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1259>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1259
08554f1d +0x08d:  jmp    085550d7 <+0x247>
08554f22 +0x092:  lea    -0x28(%ebp),%eax
08554f25 +0x095:  mov    %eax,(%esp)
08554f28 +0x098:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
08554f2d +0x09d:  mov    0x4(%eax),%eax
08554f30 +0x0a0:  mov    %eax,-0x10(%ebp)
08554f33 +0x0a3:  mov    -0x10(%ebp),%eax
08554f36 +0x0a6:  mov    %eax,(%esp)
08554f39 +0x0a9:  call   08557590 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xf1>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xf1
08554f3e +0x0ae:  xor    $0x1,%eax
08554f41 +0x0b1:  test   %al,%al
08554f43 +0x0b3:  je     08554f62 <+0xd2>
08554f45 +0x0b5:  mov    -0x14(%ebp),%eax
08554f48 +0x0b8:  mov    %eax,0x4(%esp)
08554f4c +0x0bc:  mov    -0x10(%ebp),%eax
08554f4f +0x0bf:  mov    %eax,(%esp)
08554f52 +0x0c2:  call   085574e0 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x41>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x41
08554f57 +0x0c7:  test   %al,%al
08554f59 +0x0c9:  je     08554f62 <+0xd2>
08554f5b +0x0cb:  mov    $0x1,%eax
08554f60 +0x0d0:  jmp    08554f67 <+0xd7>
08554f62 +0x0d2:  mov    $0x0,%eax
08554f67 +0x0d7:  test   %al,%al
08554f69 +0x0d9:  je     085550cc <+0x23c>
08554f6f +0x0df:  lea    -0x28(%ebp),%eax
08554f72 +0x0e2:  mov    %eax,(%esp)
08554f75 +0x0e5:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
08554f7a +0x0ea:  mov    (%eax),%eax
08554f7c +0x0ec:  mov    %eax,%edx
08554f7e +0x0ee:  mov    0xc(%ebp),%eax
08554f81 +0x0f1:  mov    %edx,0x4(%esp)
08554f85 +0x0f5:  mov    %eax,(%esp)
08554f88 +0x0f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08554f8d +0x0fd:  mov    -0x80(%ebp),%eax
08554f90 +0x100:  lea    0x1(%eax),%ebx
08554f93 +0x103:  lea    -0x28(%ebp),%eax
08554f96 +0x106:  mov    %eax,(%esp)
08554f99 +0x109:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
08554f9e +0x10e:  mov    (%eax),%eax
08554fa0 +0x110:  mov    %eax,-0x80(%ebp,%ebx,4)
08554fa4 +0x114:  lea    -0x20(%ebp),%eax
08554fa7 +0x117:  movl   $0x0,0x8(%esp)
08554faf +0x11f:  lea    -0x28(%ebp),%edx
08554fb2 +0x122:  mov    %edx,0x4(%esp)
08554fb6 +0x126:  mov    %eax,(%esp)
08554fb9 +0x129:  call   08558a76 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x15d7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x15d7
08554fbe +0x12e:  sub    $0x4,%esp
08554fc1 +0x131:  mov    -0x18(%ebp),%eax
08554fc4 +0x134:  lea    0x40(%eax),%edx
08554fc7 +0x137:  mov    -0x20(%ebp),%eax
08554fca +0x13a:  mov    %eax,0x4(%esp)
08554fce +0x13e:  mov    %edx,(%esp)
08554fd1 +0x141:  call   0855866a <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x11cb>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x11cb
08554fd6 +0x146:  mov    -0x80(%ebp),%eax
08554fd9 +0x149:  add    $0x1,%eax
08554fdc +0x14c:  mov    %eax,-0x80(%ebp)
08554fdf +0x14f:  mov    -0x10(%ebp),%eax
08554fe2 +0x152:  mov    %eax,(%esp)
08554fe5 +0x155:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08554fea +0x15a:  test   %eax,%eax
08554fec +0x15c:  setne  %al
08554fef +0x15f:  test   %al,%al
08554ff1 +0x161:  je     085550aa <+0x21a>
08554ff7 +0x167:  movb   $0x0,-0x9(%ebp)
08554ffb +0x16b:  mov    -0x18(%ebp),%eax
08554ffe +0x16e:  lea    0x40(%eax),%edx
08555001 +0x171:  lea    -0x8c(%ebp),%eax
08555007 +0x177:  mov    %edx,0x4(%esp)
0855500b +0x17b:  mov    %eax,(%esp)
0855500e +0x17e:  call   085581cc <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd2d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd2d
08555013 +0x183:  sub    $0x4,%esp
08555016 +0x186:  mov    -0x8c(%ebp),%eax
0855501c +0x18c:  mov    %eax,-0x28(%ebp)
0855501f +0x18f:  jmp    0855505c <+0x1cc>
08555021 +0x191:  lea    -0x28(%ebp),%eax
08555024 +0x194:  mov    %eax,(%esp)
08555027 +0x197:  call   08558224 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd85>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd85
0855502c +0x19c:  mov    0x4(%eax),%eax
0855502f +0x19f:  mov    %eax,(%esp)
08555032 +0x1a2:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08555037 +0x1a7:  mov    %eax,%ebx
08555039 +0x1a9:  mov    -0x10(%ebp),%eax
0855503c +0x1ac:  mov    %eax,(%esp)
0855503f +0x1af:  call   085574d4 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x35>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x35
08555044 +0x1b4:  cmp    %eax,%ebx
08555046 +0x1b6:  sete   %al
08555049 +0x1b9:  test   %al,%al
0855504b +0x1bb:  je     08555051 <+0x1c1>
0855504d +0x1bd:  movb   $0x1,-0x9(%ebp)
08555051 +0x1c1:  lea    -0x28(%ebp),%eax
08555054 +0x1c4:  mov    %eax,(%esp)
08555057 +0x1c7:  call   08558206 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd67>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd67
0855505c +0x1cc:  mov    -0x18(%ebp),%eax
0855505f +0x1cf:  lea    0x40(%eax),%edx
08555062 +0x1d2:  lea    -0x1c(%ebp),%eax
08555065 +0x1d5:  mov    %edx,0x4(%esp)
08555069 +0x1d9:  mov    %eax,(%esp)
0855506c +0x1dc:  call   085581a6 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd07>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd07
08555071 +0x1e1:  sub    $0x4,%esp
08555074 +0x1e4:  lea    -0x1c(%ebp),%eax
08555077 +0x1e7:  mov    %eax,0x4(%esp)
0855507b +0x1eb:  lea    -0x28(%ebp),%eax
0855507e +0x1ee:  mov    %eax,(%esp)
08555081 +0x1f1:  call   085581f2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd53>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd53
08555086 +0x1f6:  test   %al,%al
08555088 +0x1f8:  jne    08555021 <+0x191>
0855508a +0x1fa:  movzbl -0x9(%ebp),%eax
0855508e +0x1fe:  xor    $0x1,%eax
08555091 +0x201:  test   %al,%al
08555093 +0x203:  je     085550aa <+0x21a>
08555095 +0x205:  mov    -0x18(%ebp),%eax
08555098 +0x208:  mov    0x80(%eax),%eax
0855509e +0x20e:  lea    0x1(%eax),%edx
085550a1 +0x211:  mov    -0x18(%ebp),%eax
085550a4 +0x214:  mov    %edx,0x80(%eax)
085550aa +0x21a:  mov    -0x10(%ebp),%eax
085550ad +0x21d:  mov    %eax,(%esp)
085550b0 +0x220:  call   085519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>  ; WongWork::CMailBox::CMail::ResetPackage()
085550b5 +0x225:  mov    -0x18(%ebp),%eax
085550b8 +0x228:  lea    0x10(%eax),%edx
085550bb +0x22b:  mov    -0x10(%ebp),%eax
085550be +0x22e:  mov    %eax,0x4(%esp)
085550c2 +0x232:  mov    %edx,(%esp)
085550c5 +0x235:  call   08558232 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd93>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd93
085550ca +0x23a:  jmp    085550d7 <+0x247>
085550cc +0x23c:  lea    -0x28(%ebp),%eax
085550cf +0x23f:  mov    %eax,(%esp)
085550d2 +0x242:  call   08558206 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0xd67>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0xd67
085550d7 +0x247:  lea    -0x2c(%ebp),%eax
085550da +0x24a:  mov    %eax,0x4(%esp)
085550de +0x24e:  lea    -0x28(%ebp),%eax
085550e1 +0x251:  mov    %eax,(%esp)
085550e4 +0x254:  call   08558725 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1286>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1286
085550e9 +0x259:  test   %al,%al
085550eb +0x25b:  jne    08554f22 <+0x92>
085550f1 +0x261:  movl   $0x1,0x8(%esp)
085550f9 +0x269:  lea    -0x80(%ebp),%eax
085550fc +0x26c:  mov    %eax,0x4(%esp)
08555100 +0x270:  mov    0x8(%ebp),%eax
08555103 +0x273:  mov    %eax,(%esp)
08555106 +0x276:  call   08556772 <_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb>  ; WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool)
0855510b +0x27b:  mov    -0x80(%ebp),%eax
0855510e +0x27e:  lea    -0x8(%ebp),%esp
08555111 +0x281:  add    $0x0,%esp
08555114 +0x284:  pop    %ebx
08555115 +0x285:  pop    %edi
08555116 +0x286:  pop    %ebp
08555117 +0x287:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::CheckMailTimeout @ 0x8554e90

/* WongWork::CMailBoxHelper::CheckMailTimeout(CUser*, PacketGuard*) */

uint WongWork::CMailBoxHelper::CheckMailTimeout(CUser *param_1,PacketGuard *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 local_90 [3];
  uint local_84 [21];
  _Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> local_30 [4];
  undefined4 local_2c;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_28 [4];
  undefined4 local_24;
  map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
  local_20 [4];
  int local_1c;
  long local_18;
  CMail *local_14;
  char local_d;
  
  bVar7 = 0;
  local_1c = CUser::GetMailBox(param_1);
  if (local_1c == 0) {
    local_84[0] = 0;
  }
  else {
    puVar4 = local_84;
    for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    }
    local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
             *)&local_2c);
    std::
    map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
    ::end(local_28);
    std::_Rb_tree_const_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
    _Rb_tree_const_iterator(local_30,(_Rb_tree_iterator *)local_28);
    while( true ) {
      bVar2 = std::operator!=((_Rb_tree_iterator *)&local_2c,(_Rb_tree_const_iterator *)local_30);
      if (!bVar2) break;
      iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                          *)&local_2c);
      local_14 = *(CMail **)(iVar6 + 4);
      cVar1 = CMailBox::CMail::isUnlimit(local_14);
      if (cVar1 == '\x01') {
LAB_08554f62:
        bVar2 = false;
      }
      else {
        cVar1 = CMailBox::CMail::IsTimeOver(local_14,local_18);
        if (cVar1 == '\0') goto LAB_08554f62;
        bVar2 = true;
      }
      if (bVar2) {
        piVar3 = (int *)std::
                        _Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                      *)&local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*piVar3);
        iVar6 = local_84[0] + 1;
        puVar4 = (uint *)std::
                         _Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                         ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                       *)&local_2c);
        local_84[iVar6] = *puVar4;
        uVar8 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_24,(int)&local_2c);
        std::
        map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
        ::erase((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
                 *)(local_1c + 0x40),local_24,uVar8);
        local_84[0] = local_84[0] + 1;
        iVar6 = CMailBox::CMail::GetLetterId(local_14);
        if (iVar6 != 0) {
          local_d = '\0';
          std::
          map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
          ::begin((map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
                   *)local_90);
          local_2c = local_90[0];
          while( true ) {
            std::
            map<unsigned_int,WongWork::CMailBox::CMail*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>>
            ::end(local_20);
            cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                    ::operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                  *)&local_2c,(_Rb_tree_iterator *)local_20);
            if (cVar1 == '\0') break;
            iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                    ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                                  *)&local_2c);
            iVar6 = CMailBox::CMail::GetLetterId(*(CMail **)(iVar6 + 4));
            iVar5 = CMailBox::CMail::GetLetterId(local_14);
            if (iVar6 == iVar5) {
              local_d = '\x01';
            }
            std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::
            operator++((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>
                        *)&local_2c);
          }
          if (local_d != '\x01') {
            *(int *)(local_1c + 0x80) = *(int *)(local_1c + 0x80) + 1;
          }
        }
        CMailBox::CMail::ResetPackage(local_14);
        StaticPool<WongWork::CMailBox::CMail,20>::Free
                  ((StaticPool<WongWork::CMailBox::CMail,20> *)(local_1c + 0x10),local_14);
      }
      else {
        std::_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>>::operator++
                  ((_Rb_tree_iterator<std::pair<unsigned_int_const,WongWork::CMailBox::CMail*>> *)
                   &local_2c);
      }
    }
    ReqDBRemoveMail(param_1,local_84,true);
  }
  return local_84[0];
}
```

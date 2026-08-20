# reqBingoMark

`_ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE`

`BingoEvent::reqBingoMark(StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080c9ff6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080c9ff6  _ZN10BingoEvent12reqBingoMarkERN15StackableAction11input_paramE
#           BingoEvent::reqBingoMark(StackableAction::input_param&)
# range [0x080c9ff6, 0x080ca261]
080c9ff6 +0x000:  push   %ebp
080c9ff7 +0x001:  mov    %esp,%ebp
080c9ff9 +0x003:  push   %esi
080c9ffa +0x004:  push   %ebx
080c9ffb +0x005:  sub    $0x40,%esp
080c9ffe +0x008:  mov    0xc(%ebp),%eax
080ca001 +0x00b:  mov    0x8(%eax),%eax
080ca004 +0x00e:  test   %eax,%eax
080ca006 +0x010:  jne    080ca012 <+0x1c>
080ca008 +0x012:  mov    $0x13,%ebx
080ca00d +0x017:  jmp    080ca259 <+0x263>
080ca012 +0x01c:  mov    0xc(%ebp),%eax
080ca015 +0x01f:  mov    0xc(%eax),%eax
080ca018 +0x022:  test   %eax,%eax
080ca01a +0x024:  jne    080ca026 <+0x30>
080ca01c +0x026:  mov    $0x13,%ebx
080ca021 +0x02b:  jmp    080ca259 <+0x263>
080ca026 +0x030:  mov    0xc(%ebp),%eax
080ca029 +0x033:  mov    0x8(%eax),%eax
080ca02c +0x036:  mov    %eax,(%esp)
080ca02f +0x039:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca034 +0x03e:  movzbl 0x4(%eax),%eax
080ca038 +0x042:  cmp    $0x2,%al
080ca03a +0x044:  setg   %al
080ca03d +0x047:  test   %al,%al
080ca03f +0x049:  je     080ca04b <+0x55>
080ca041 +0x04b:  mov    $0x7,%ebx
080ca046 +0x050:  jmp    080ca259 <+0x263>
080ca04b +0x055:  mov    0xc(%ebp),%eax
080ca04e +0x058:  mov    0xc(%eax),%eax
080ca051 +0x05b:  add    $0x3a0,%eax
080ca056 +0x060:  movl   $0x0,0x4(%esp)
080ca05e +0x068:  mov    %eax,(%esp)
080ca061 +0x06b:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080ca066 +0x070:  mov    (%eax),%eax
080ca068 +0x072:  mov    %eax,-0x20(%ebp)
080ca06b +0x075:  cmpl   $0x0,-0x20(%ebp)
080ca06f +0x079:  jle    080ca077 <+0x81>
080ca071 +0x07b:  cmpl   $0x32,-0x20(%ebp)
080ca075 +0x07f:  jle    080ca081 <+0x8b>
080ca077 +0x081:  mov    $0x17,%ebx
080ca07c +0x086:  jmp    080ca259 <+0x263>
080ca081 +0x08b:  mov    0x8(%ebp),%eax
080ca084 +0x08e:  add    $0xc,%eax
080ca087 +0x091:  mov    %eax,(%esp)
080ca08a +0x094:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080ca08f +0x099:  mov    -0x20(%ebp),%edx
080ca092 +0x09c:  mov    %edx,0x4(%esp)
080ca096 +0x0a0:  mov    %eax,(%esp)
080ca099 +0x0a3:  call   080cae70 <_ZN6CBingo19getBingoRandomVauleEi>  ; CBingo::getBingoRandomVaule(int)
080ca09e +0x0a8:  mov    %eax,-0x1c(%ebp)
080ca0a1 +0x0ab:  cmpl   $0x0,-0x1c(%ebp)
080ca0a5 +0x0af:  jne    080ca0b1 <+0xbb>
080ca0a7 +0x0b1:  mov    $0x13,%ebx
080ca0ac +0x0b6:  jmp    080ca259 <+0x263>
080ca0b1 +0x0bb:  mov    0xc(%ebp),%eax
080ca0b4 +0x0be:  mov    0x8(%eax),%eax
080ca0b7 +0x0c1:  mov    %eax,(%esp)
080ca0ba +0x0c4:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca0bf +0x0c9:  mov    (%eax),%eax
080ca0c1 +0x0cb:  mov    %eax,-0x18(%ebp)
080ca0c4 +0x0ce:  mov    0xc(%ebp),%eax
080ca0c7 +0x0d1:  mov    0x8(%eax),%eax
080ca0ca +0x0d4:  mov    %eax,(%esp)
080ca0cd +0x0d7:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca0d2 +0x0dc:  mov    %eax,%ebx
080ca0d4 +0x0de:  mov    0x8(%ebp),%eax
080ca0d7 +0x0e1:  add    $0xc,%eax
080ca0da +0x0e4:  mov    %eax,(%esp)
080ca0dd +0x0e7:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080ca0e2 +0x0ec:  mov    -0x1c(%ebp),%edx
080ca0e5 +0x0ef:  mov    %edx,0x8(%esp)
080ca0e9 +0x0f3:  mov    %ebx,0x4(%esp)
080ca0ed +0x0f7:  mov    %eax,(%esp)
080ca0f0 +0x0fa:  call   080cad4c <_ZN6CBingo11calNewValueERji>  ; CBingo::calNewValue(unsigned int&, int)
080ca0f5 +0x0ff:  mov    %eax,-0x14(%ebp)
080ca0f8 +0x102:  mov    0xc(%ebp),%eax
080ca0fb +0x105:  mov    0x8(%eax),%eax
080ca0fe +0x108:  mov    %eax,(%esp)
080ca101 +0x10b:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca106 +0x110:  mov    (%eax),%eax
080ca108 +0x112:  cmp    -0x18(%ebp),%eax
080ca10b +0x115:  setne  %al
080ca10e +0x118:  test   %al,%al
080ca110 +0x11a:  je     080ca1a2 <+0x1ac>
080ca116 +0x120:  mov    0xc(%ebp),%eax
080ca119 +0x123:  mov    0x8(%eax),%eax
080ca11c +0x126:  mov    %eax,(%esp)
080ca11f +0x129:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca124 +0x12e:  movb   $0x1,0x6(%eax)
080ca128 +0x132:  mov    0xc(%ebp),%eax
080ca12b +0x135:  mov    0x8(%eax),%eax
080ca12e +0x138:  mov    %eax,(%esp)
080ca131 +0x13b:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca136 +0x140:  movzbl 0x4(%eax),%eax
080ca13a +0x144:  movsbl %al,%eax
080ca13d +0x147:  mov    -0x14(%ebp),%edx
080ca140 +0x14a:  mov    %edx,%ecx
080ca142 +0x14c:  sub    %eax,%ecx
080ca144 +0x14e:  mov    %ecx,%eax
080ca146 +0x150:  mov    %eax,-0x10(%ebp)
080ca149 +0x153:  cmpl   $0x0,-0x10(%ebp)
080ca14d +0x157:  jle    080ca1a2 <+0x1ac>
080ca14f +0x159:  mov    -0x10(%ebp),%eax
080ca152 +0x15c:  cmp    $0x3,%eax
080ca155 +0x15f:  jle    080ca15c <+0x166>
080ca157 +0x161:  mov    $0x3,%eax
080ca15c +0x166:  mov    %eax,-0x10(%ebp)
080ca15f +0x169:  mov    0xc(%ebp),%eax
080ca162 +0x16c:  mov    0x8(%eax),%eax
080ca165 +0x16f:  mov    %eax,(%esp)
080ca168 +0x172:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca16d +0x177:  mov    -0x14(%ebp),%edx
080ca170 +0x17a:  mov    %dl,0x4(%eax)
080ca173 +0x17d:  movl   $0x0,-0xc(%ebp)
080ca17a +0x184:  jmp    080ca195 <+0x19f>
080ca17c +0x186:  mov    0xc(%ebp),%eax
080ca17f +0x189:  mov    0x8(%eax),%eax
080ca182 +0x18c:  mov    %eax,0x4(%esp)
080ca186 +0x190:  mov    0x8(%ebp),%eax
080ca189 +0x193:  mov    %eax,(%esp)
080ca18c +0x196:  call   080ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>  ; BingoEvent::sendOneMatchLineReward(CUser&)
080ca191 +0x19b:  addl   $0x1,-0xc(%ebp)
080ca195 +0x19f:  mov    -0xc(%ebp),%eax
080ca198 +0x1a2:  cmp    -0x10(%ebp),%eax
080ca19b +0x1a5:  setl   %al
080ca19e +0x1a8:  test   %al,%al
080ca1a0 +0x1aa:  jne    080ca17c <+0x186>
080ca1a2 +0x1ac:  lea    -0x2c(%ebp),%eax
080ca1a5 +0x1af:  mov    %eax,(%esp)
080ca1a8 +0x1b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080ca1ad +0x1b7:  lea    -0x2c(%ebp),%eax
080ca1b0 +0x1ba:  mov    %eax,(%esp)
080ca1b3 +0x1bd:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
080ca1b8 +0x1c2:  movl   $0x1c3,0x8(%esp)
080ca1c0 +0x1ca:  movl   $0x0,0x4(%esp)
080ca1c8 +0x1d2:  lea    -0x2c(%ebp),%eax
080ca1cb +0x1d5:  mov    %eax,(%esp)
080ca1ce +0x1d8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080ca1d3 +0x1dd:  mov    -0x1c(%ebp),%eax
080ca1d6 +0x1e0:  mov    %eax,0x4(%esp)
080ca1da +0x1e4:  lea    -0x2c(%ebp),%eax
080ca1dd +0x1e7:  mov    %eax,(%esp)
080ca1e0 +0x1ea:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080ca1e5 +0x1ef:  mov    0xc(%ebp),%eax
080ca1e8 +0x1f2:  mov    0x8(%eax),%eax
080ca1eb +0x1f5:  mov    %eax,(%esp)
080ca1ee +0x1f8:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca1f3 +0x1fd:  mov    (%eax),%eax
080ca1f5 +0x1ff:  mov    %eax,0x4(%esp)
080ca1f9 +0x203:  lea    -0x2c(%ebp),%eax
080ca1fc +0x206:  mov    %eax,(%esp)
080ca1ff +0x209:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
080ca204 +0x20e:  movl   $0x1,0x4(%esp)
080ca20c +0x216:  lea    -0x2c(%ebp),%eax
080ca20f +0x219:  mov    %eax,(%esp)
080ca212 +0x21c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080ca217 +0x221:  mov    0xc(%ebp),%eax
080ca21a +0x224:  mov    0x8(%eax),%eax
080ca21d +0x227:  lea    -0x2c(%ebp),%edx
080ca220 +0x22a:  mov    %edx,0x4(%esp)
080ca224 +0x22e:  mov    %eax,(%esp)
080ca227 +0x231:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080ca22c +0x236:  mov    $0x0,%ebx
080ca231 +0x23b:  lea    -0x2c(%ebp),%eax
080ca234 +0x23e:  mov    %eax,(%esp)
080ca237 +0x241:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080ca23c +0x246:  jmp    080ca259 <+0x263>
080ca23e +0x248:  mov    %edx,%ebx
080ca240 +0x24a:  mov    %eax,%esi
080ca242 +0x24c:  lea    -0x2c(%ebp),%eax
080ca245 +0x24f:  mov    %eax,(%esp)
080ca248 +0x252:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080ca24d +0x257:  mov    %esi,%eax
080ca24f +0x259:  mov    %ebx,%edx
080ca251 +0x25b:  mov    %eax,(%esp)
080ca254 +0x25e:  call   08ae3750 <_Unwind_Resume>
080ca259 +0x263:  mov    %ebx,%eax
080ca25b +0x265:  add    $0x40,%esp
080ca25e +0x268:  pop    %ebx
080ca25f +0x269:  pop    %esi
080ca260 +0x26a:  pop    %ebp
080ca261 +0x26b:  ret
```

## 反编译 C

```c
// BingoEvent::reqBingoMark @ 0x80c9ff6

/* BingoEvent::reqBingoMark(StackableAction::input_param&) */

undefined4 __thiscall BingoEvent::reqBingoMark(BingoEvent *this,input_param *param_1)

{
  int iVar1;
  int *piVar2;
  CBingo *pCVar3;
  uint *puVar4;
  undefined4 uVar5;
  PacketGuard local_30 [12];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar5 = 0x13;
  }
  else if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 0x13;
  }
  else {
    iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
    if (*(char *)(iVar1 + 4) < '\x03') {
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)
                                 (*(int *)(param_1 + 0xc) + 0x3a0),0);
      local_24 = *piVar2;
      if ((local_24 < 1) || (0x32 < local_24)) {
        uVar5 = 0x17;
      }
      else {
        pCVar3 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc))
        ;
        local_20 = CBingo::getBingoRandomVaule(pCVar3,local_24);
        if (local_20 == 0) {
          uVar5 = 0x13;
        }
        else {
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          local_1c = *piVar2;
          puVar4 = (uint *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          pCVar3 = (CBingo *)
                   boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
          local_18 = CBingo::calNewValue(pCVar3,puVar4,local_20);
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          if (*piVar2 != local_1c) {
            iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
            *(undefined1 *)(iVar1 + 6) = 1;
            iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
            local_14 = local_18 - *(char *)(iVar1 + 4);
            if (0 < local_14) {
              if (3 < local_14) {
                local_14 = 3;
              }
              iVar1 = CUser::getBingoData(*(CUser **)(param_1 + 8));
              *(char *)(iVar1 + 4) = (char)local_18;
              for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
                sendOneMatchLineReward(this,*(CUser **)(param_1 + 8));
              }
            }
          }
          PacketGuard::PacketGuard(local_30);
                    /* try { // try from 080ca1b3 to 080ca22b has its CatchHandler @ 080ca23e */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1c3);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,local_20);
          piVar2 = (int *)CUser::getBingoData(*(CUser **)(param_1 + 8));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
          CUser::Send(*(CUser **)(param_1 + 8),local_30);
          uVar5 = 0;
          PacketGuard::~PacketGuard(local_30);
        }
      }
    }
    else {
      uVar5 = 7;
    }
  }
  return uVar5;
}
```

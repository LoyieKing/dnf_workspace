# read

`_ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE`

`Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveGameOption_ChattingEmoticon` | `0x081cf354` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cf354  _ZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASE
#           Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)
# range [0x081cf354, 0x081cf529]
081cf354 +0x000:  push   %ebp
081cf355 +0x001:  mov    %esp,%ebp
081cf357 +0x003:  push   %esi
081cf358 +0x004:  push   %ebx
081cf359 +0x005:  sub    $0x40,%esp
081cf35c +0x008:  mov    0x10(%ebp),%eax
081cf35f +0x00b:  mov    %eax,-0x10(%ebp)
081cf362 +0x00e:  mov    -0x10(%ebp),%eax
081cf365 +0x011:  add    $0xd,%eax
081cf368 +0x014:  mov    %eax,0x4(%esp)
081cf36c +0x018:  mov    0xc(%ebp),%eax
081cf36f +0x01b:  mov    %eax,(%esp)
081cf372 +0x01e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cf377 +0x023:  xor    $0x1,%eax
081cf37a +0x026:  test   %al,%al
081cf37c +0x028:  je     081cf3a9 <+0x55>
081cf37e +0x02a:  movl   $0x0,0xc(%esp)
081cf386 +0x032:  movl   $0x0,0x8(%esp)
081cf38e +0x03a:  movl   $&_ZZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf396 +0x042:  movl   $0x2934,(%esp)
081cf39d +0x049:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf3a2 +0x04e:  mov    %eax,%ebx
081cf3a4 +0x050:  jmp    081cf521 <+0x1cd>
081cf3a9 +0x055:  movl   $0x0,-0xc(%ebp)
081cf3b0 +0x05c:  jmp    081cf506 <+0x1b2>
081cf3b5 +0x061:  lea    -0x16(%ebp),%eax
081cf3b8 +0x064:  mov    %eax,(%esp)
081cf3bb +0x067:  call   08235134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa7de
081cf3c0 +0x06c:  lea    -0x16(%ebp),%eax
081cf3c3 +0x06f:  mov    %eax,0x4(%esp)
081cf3c7 +0x073:  mov    0xc(%ebp),%eax
081cf3ca +0x076:  mov    %eax,(%esp)
081cf3cd +0x079:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081cf3d2 +0x07e:  xor    $0x1,%eax
081cf3d5 +0x081:  test   %al,%al
081cf3d7 +0x083:  je     081cf409 <+0xb5>
081cf3d9 +0x085:  movl   $0x0,0xc(%esp)
081cf3e1 +0x08d:  movl   $0x0,0x8(%esp)
081cf3e9 +0x095:  movl   $&_ZZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf3f1 +0x09d:  movl   $0x293a,(%esp)
081cf3f8 +0x0a4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf3fd +0x0a9:  mov    %eax,%ebx
081cf3ff +0x0ab:  mov    $0x0,%esi
081cf404 +0x0b0:  jmp    081cf4f3 <+0x19f>
081cf409 +0x0b5:  lea    -0x30(%ebp),%eax
081cf40c +0x0b8:  mov    %eax,0x4(%esp)
081cf410 +0x0bc:  mov    0xc(%ebp),%eax
081cf413 +0x0bf:  mov    %eax,(%esp)
081cf416 +0x0c2:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
081cf41b +0x0c7:  xor    $0x1,%eax
081cf41e +0x0ca:  test   %al,%al
081cf420 +0x0cc:  je     081cf452 <+0xfe>
081cf422 +0x0ce:  movl   $0x0,0xc(%esp)
081cf42a +0x0d6:  movl   $0x0,0x8(%esp)
081cf432 +0x0de:  movl   $&_ZZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf43a +0x0e6:  movl   $0x2940,(%esp)
081cf441 +0x0ed:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf446 +0x0f2:  mov    %eax,%ebx
081cf448 +0x0f4:  mov    $0x0,%esi
081cf44d +0x0f9:  jmp    081cf4f3 <+0x19f>
081cf452 +0x0fe:  mov    -0x30(%ebp),%eax
081cf455 +0x101:  mov    %eax,0xc(%esp)
081cf459 +0x105:  movl   $0x14,0x8(%esp)
081cf461 +0x10d:  lea    -0x2a(%ebp),%eax
081cf464 +0x110:  mov    %eax,0x4(%esp)
081cf468 +0x114:  mov    0xc(%ebp),%eax
081cf46b +0x117:  mov    %eax,(%esp)
081cf46e +0x11a:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
081cf473 +0x11f:  xor    $0x1,%eax
081cf476 +0x122:  test   %al,%al
081cf478 +0x124:  je     081cf4a7 <+0x153>
081cf47a +0x126:  movl   $0x0,0xc(%esp)
081cf482 +0x12e:  movl   $0x0,0x8(%esp)
081cf48a +0x136:  movl   $&_ZZN42Dispatcher_SaveGameOption_ChattingEmoticon4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081cf492 +0x13e:  movl   $0x2943,(%esp)
081cf499 +0x145:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cf49e +0x14a:  mov    %eax,%ebx
081cf4a0 +0x14c:  mov    $0x0,%esi
081cf4a5 +0x151:  jmp    081cf4f3 <+0x19f>
081cf4a7 +0x153:  lea    -0x2a(%ebp),%eax
081cf4aa +0x156:  mov    %eax,0x4(%esp)
081cf4ae +0x15a:  lea    -0x16(%ebp),%eax
081cf4b1 +0x15d:  add    $0x2,%eax
081cf4b4 +0x160:  mov    %eax,(%esp)
081cf4b7 +0x163:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
081cf4bc +0x168:  mov    -0x10(%ebp),%eax
081cf4bf +0x16b:  lea    0xf(%eax),%edx
081cf4c2 +0x16e:  lea    -0x16(%ebp),%eax
081cf4c5 +0x171:  mov    %eax,0x4(%esp)
081cf4c9 +0x175:  mov    %edx,(%esp)
081cf4cc +0x178:  call   08236ee0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc58a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc58a
081cf4d1 +0x17d:  mov    $0x1,%esi
081cf4d6 +0x182:  jmp    081cf4f3 <+0x19f>
081cf4d8 +0x184:  mov    %edx,%ebx
081cf4da +0x186:  mov    %eax,%esi
081cf4dc +0x188:  lea    -0x16(%ebp),%eax
081cf4df +0x18b:  mov    %eax,(%esp)
081cf4e2 +0x18e:  call   0823514a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa7f4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa7f4
081cf4e7 +0x193:  mov    %esi,%eax
081cf4e9 +0x195:  mov    %ebx,%edx
081cf4eb +0x197:  mov    %eax,(%esp)
081cf4ee +0x19a:  call   08ae3750 <_Unwind_Resume>
081cf4f3 +0x19f:  lea    -0x16(%ebp),%eax
081cf4f6 +0x1a2:  mov    %eax,(%esp)
081cf4f9 +0x1a5:  call   0823514a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa7f4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa7f4
081cf4fe +0x1aa:  test   %esi,%esi
081cf500 +0x1ac:  je     081cf521 <+0x1cd>
081cf502 +0x1ae:  addl   $0x1,-0xc(%ebp)
081cf506 +0x1b2:  mov    -0x10(%ebp),%eax
081cf509 +0x1b5:  movzwl 0xd(%eax),%eax
081cf50d +0x1b9:  cwtl
081cf50e +0x1ba:  cmp    -0xc(%ebp),%eax
081cf511 +0x1bd:  setg   %al
081cf514 +0x1c0:  test   %al,%al
081cf516 +0x1c2:  jne    081cf3b5 <+0x61>
081cf51c +0x1c8:  mov    $0x0,%ebx
081cf521 +0x1cd:  mov    %ebx,%eax
081cf523 +0x1cf:  add    $0x40,%esp
081cf526 +0x1d2:  pop    %ebx
081cf527 +0x1d3:  pop    %esi
081cf528 +0x1d4:  pop    %ebp
081cf529 +0x1d5:  ret
```

## 反编译 C

```c
// Dispatcher_SaveGameOption_ChattingEmoticon::read @ 0x81cf354

/* Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SaveGameOption_ChattingEmoticon::read
          (Dispatcher_SaveGameOption_ChattingEmoticon *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  int local_34;
  char local_2e [20];
  _slot_String local_1a [2];
  string asStack_18 [4];
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  cVar2 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar2 == '\x01') {
    for (local_10 = 0; local_10 < *(short *)(local_14 + 0xd); local_10 = local_10 + 1) {
      MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String::_slot_String(local_1a);
                    /* try { // try from 081cf3cd to 081cf4d0 has its CatchHandler @ 081cf4d8 */
      cVar2 = PacketBuf::get_short(param_1,(short *)local_1a);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_int(param_1,&local_34);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_str(param_1,local_2e,0x14,local_34);
          if (cVar2 == '\x01') {
            std::string::operator=(asStack_18,local_2e);
            std::
            vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
            ::push_back((vector<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String,std::allocator<MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String>>
                         *)(local_14 + 0xf),local_1a);
            bVar1 = true;
          }
          else {
            unaff_EBX = LineFunc(0x2943,
                                 "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
            bVar1 = false;
          }
        }
        else {
          unaff_EBX = LineFunc(0x2940,
                               "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
          bVar1 = false;
        }
      }
      else {
        unaff_EBX = LineFunc(0x293a,
                             "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
        bVar1 = false;
      }
      MSG_SAVE_GAME_OPTION_CHATTING_EMOTICON::_slot_String::~_slot_String(local_1a);
      if (!bVar1) {
        return unaff_EBX;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar3 = LineFunc(0x2934,
                     "virtual int Dispatcher_SaveGameOption_ChattingEmoticon::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar3;
}
```

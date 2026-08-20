# log

`_ZN19RentalMachinePcRoom3logER5CUseri`

`RentalMachinePcRoom::log(CUser&, int)`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x082707c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082707c0  _ZN19RentalMachinePcRoom3logER5CUseri
#           RentalMachinePcRoom::log(CUser&, int)
# range [0x082707c0, 0x08270885]
082707c0 +0x00:  push   %ebp
082707c1 +0x01:  mov    %esp,%ebp
082707c3 +0x03:  push   %edi
082707c4 +0x04:  push   %esi
082707c5 +0x05:  push   %ebx
082707c6 +0x06:  sub    $0x4c,%esp
082707c9 +0x09:  movb   $0x0,-0x19(%ebp)
082707cd +0x0d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082707d2 +0x12:  mov    %eax,(%esp)
082707d5 +0x15:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
082707da +0x1a:  test   %al,%al
082707dc +0x1c:  je     082707ee <+0x2e>
082707de +0x1e:  mov    0xc(%ebp),%eax
082707e1 +0x21:  mov    %eax,(%esp)
082707e4 +0x24:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082707e9 +0x29:  mov    %al,-0x19(%ebp)
082707ec +0x2c:  jmp    082707fc <+0x3c>
082707ee +0x2e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
082707f3 +0x33:  mov    0x378(%eax),%eax
082707f9 +0x39:  mov    %al,-0x19(%ebp)
082707fc +0x3c:  movsbl -0x19(%ebp),%eax
08270800 +0x40:  mov    %eax,-0x2c(%ebp)
08270803 +0x43:  movl   $0xffffffff,0x4(%esp)
0827080b +0x4b:  mov    0xc(%ebp),%eax
0827080e +0x4e:  mov    %eax,(%esp)
08270811 +0x51:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08270816 +0x56:  mov    %eax,%esi
08270818 +0x58:  mov    0xc(%ebp),%eax
0827081b +0x5b:  mov    %eax,(%esp)
0827081e +0x5e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08270823 +0x63:  mov    %eax,%ebx
08270825 +0x65:  mov    0x8(%ebp),%eax
08270828 +0x68:  add    $0x4,%eax
0827082b +0x6b:  mov    %eax,(%esp)
0827082e +0x6e:  call   08271d8e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3b4>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3b4
08270833 +0x73:  mov    %eax,%edi
08270835 +0x75:  movl   $0x12e,0x8(%esp)
0827083d +0x7d:  movl   $&_ZZN19RentalMachinePcRoom3logER5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
08270845 +0x85:  lea    -0x24(%ebp),%eax
08270848 +0x88:  mov    %eax,(%esp)
0827084b +0x8b:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
08270850 +0x90:  mov    0x10(%ebp),%eax
08270853 +0x93:  mov    %eax,0x18(%esp)
08270857 +0x97:  mov    -0x2c(%ebp),%eax
0827085a +0x9a:  mov    %eax,0x14(%esp)
0827085e +0x9e:  mov    %esi,0x10(%esp)
08270862 +0xa2:  mov    %ebx,0xc(%esp)
08270866 +0xa6:  movl   $"[RENT] m_id(%d) char_no(%d) server_info(%d) item_id(%d)",0x8(%esp)
0827086e +0xae:  mov    %edi,0x4(%esp)
08270872 +0xb2:  lea    -0x24(%ebp),%eax
08270875 +0xb5:  mov    %eax,(%esp)
08270878 +0xb8:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0827087d +0xbd:  add    $0x4c,%esp
08270880 +0xc0:  pop    %ebx
08270881 +0xc1:  pop    %esi
08270882 +0xc2:  pop    %edi
08270883 +0xc3:  pop    %ebp
08270884 +0xc4:  ret
08270885 +0xc5:  nop
```

## 反编译 C

```c
// RentalMachinePcRoom::log @ 0x82707c0

/* RentalMachinePcRoom::log(CUser&, int) */

void __thiscall RentalMachinePcRoom::log(RentalMachinePcRoom *this,CUser *param_1,int param_2)

{
  char cVar1;
  GameWorld *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  CMyFileLog local_28 [11];
  char local_1d;
  
  local_1d = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar1 == '\0') {
    iVar2 = G_CEnvironment();
    local_1d = (char)*(undefined4 *)(iVar2 + 0x378);
  }
  else {
    local_1d = CUser::GetServerGroup(param_1);
  }
  iVar2 = (int)local_1d;
  uVar3 = CUser::get_charac_no(param_1,-1);
  uVar4 = CUser::get_acc_id(param_1);
  pcVar5 = (char *)std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::operator->
                             ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  CMyFileLog::CMyFileLog(local_28,"void RentalMachinePcRoom::log(CUser&, int)",0x12e);
  CMyFileLog::operator()
            (local_28,pcVar5,"[RENT] m_id(%d) char_no(%d) server_info(%d) item_id(%d)",uVar4,uVar3,
             iVar2,param_2);
  return;
}
```

# log

`_ZN22RentalMachineDimension3logER5CUseri`

`RentalMachineDimension::log(CUser&, int)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826ef16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ef16  _ZN22RentalMachineDimension3logER5CUseri
#           RentalMachineDimension::log(CUser&, int)
# range [0x0826ef16, 0x0826efdb]
0826ef16 +0x00:  push   %ebp
0826ef17 +0x01:  mov    %esp,%ebp
0826ef19 +0x03:  push   %edi
0826ef1a +0x04:  push   %esi
0826ef1b +0x05:  push   %ebx
0826ef1c +0x06:  sub    $0x4c,%esp
0826ef1f +0x09:  movb   $0x0,-0x19(%ebp)
0826ef23 +0x0d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0826ef28 +0x12:  mov    %eax,(%esp)
0826ef2b +0x15:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
0826ef30 +0x1a:  test   %al,%al
0826ef32 +0x1c:  je     0826ef44 <+0x2e>
0826ef34 +0x1e:  mov    0xc(%ebp),%eax
0826ef37 +0x21:  mov    %eax,(%esp)
0826ef3a +0x24:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0826ef3f +0x29:  mov    %al,-0x19(%ebp)
0826ef42 +0x2c:  jmp    0826ef52 <+0x3c>
0826ef44 +0x2e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0826ef49 +0x33:  mov    0x378(%eax),%eax
0826ef4f +0x39:  mov    %al,-0x19(%ebp)
0826ef52 +0x3c:  movsbl -0x19(%ebp),%eax
0826ef56 +0x40:  mov    %eax,-0x2c(%ebp)
0826ef59 +0x43:  movl   $0xffffffff,0x4(%esp)
0826ef61 +0x4b:  mov    0xc(%ebp),%eax
0826ef64 +0x4e:  mov    %eax,(%esp)
0826ef67 +0x51:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0826ef6c +0x56:  mov    %eax,%esi
0826ef6e +0x58:  mov    0xc(%ebp),%eax
0826ef71 +0x5b:  mov    %eax,(%esp)
0826ef74 +0x5e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0826ef79 +0x63:  mov    %eax,%ebx
0826ef7b +0x65:  mov    0x8(%ebp),%eax
0826ef7e +0x68:  add    $0x4,%eax
0826ef81 +0x6b:  mov    %eax,(%esp)
0826ef84 +0x6e:  call   0826fbee <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1f0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1f0
0826ef89 +0x73:  mov    %eax,%edi
0826ef8b +0x75:  movl   $0x71,0x8(%esp)
0826ef93 +0x7d:  movl   $&_ZZN22RentalMachineDimension3logER5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
0826ef9b +0x85:  lea    -0x24(%ebp),%eax
0826ef9e +0x88:  mov    %eax,(%esp)
0826efa1 +0x8b:  call   0810786c <_ZN10CMyFileLogC1EPKci>  ; CMyFileLog::CMyFileLog(char const*, int)
0826efa6 +0x90:  mov    0x10(%ebp),%eax
0826efa9 +0x93:  mov    %eax,0x18(%esp)
0826efad +0x97:  mov    -0x2c(%ebp),%eax
0826efb0 +0x9a:  mov    %eax,0x14(%esp)
0826efb4 +0x9e:  mov    %esi,0x10(%esp)
0826efb8 +0xa2:  mov    %ebx,0xc(%esp)
0826efbc +0xa6:  movl   $"[RENT] Dimension m_id(%d) char_no(%d) server_info(%d) item_id(%d)",0x8(%esp)
0826efc4 +0xae:  mov    %edi,0x4(%esp)
0826efc8 +0xb2:  lea    -0x24(%ebp),%eax
0826efcb +0xb5:  mov    %eax,(%esp)
0826efce +0xb8:  call   08107898 <_ZN10CMyFileLogclEPKcS1_z>  ; CMyFileLog::operator()(char const*, char const*, ...)
0826efd3 +0xbd:  add    $0x4c,%esp
0826efd6 +0xc0:  pop    %ebx
0826efd7 +0xc1:  pop    %esi
0826efd8 +0xc2:  pop    %edi
0826efd9 +0xc3:  pop    %ebp
0826efda +0xc4:  ret
0826efdb +0xc5:  nop
```

## 反编译 C

```c
// RentalMachineDimension::log @ 0x826ef16

/* RentalMachineDimension::log(CUser&, int) */

void __thiscall RentalMachineDimension::log(RentalMachineDimension *this,CUser *param_1,int param_2)

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
  pcVar5 = (char *)std::auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl>::operator->
                             ((auto_ptr<RentalMachineDimension::RentalMachineDimensionImpl> *)
                              (this + 4));
  CMyFileLog::CMyFileLog(local_28,"void RentalMachineDimension::log(CUser&, int)",0x71);
  CMyFileLog::operator()
            (local_28,pcVar5,"[RENT] Dimension m_id(%d) char_no(%d) server_info(%d) item_id(%d)",
             uVar4,uVar3,iVar2,param_2);
  return;
}
```

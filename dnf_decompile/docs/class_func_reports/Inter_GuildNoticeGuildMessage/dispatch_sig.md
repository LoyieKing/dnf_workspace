# dispatch_sig

`_ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci`

`Inter_GuildNoticeGuildMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_GuildNoticeGuildMessage` | `0x084cc650` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc650  _ZN29Inter_GuildNoticeGuildMessage12dispatch_sigEP5CUserPci
#           Inter_GuildNoticeGuildMessage::dispatch_sig(CUser*, char*, int)
# range [0x084cc650, 0x084cc767]
084cc650 +0x000:  push   %ebp
084cc651 +0x001:  mov    %esp,%ebp
084cc653 +0x003:  push   %esi
084cc654 +0x004:  push   %ebx
084cc655 +0x005:  sub    $0x30,%esp
084cc658 +0x008:  mov    0xc(%ebp),%eax
084cc65b +0x00b:  mov    %eax,(%esp)
084cc65e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc663 +0x013:  test   %eax,%eax
084cc665 +0x015:  sete   %al
084cc668 +0x018:  test   %al,%al
084cc66a +0x01a:  je     084cc676 <+0x26>
084cc66c +0x01c:  mov    $0x0,%ebx
084cc671 +0x021:  jmp    084cc75f <+0x10f>
084cc676 +0x026:  mov    0x10(%ebp),%eax
084cc679 +0x029:  mov    %eax,-0x10(%ebp)
084cc67c +0x02c:  mov    -0x10(%ebp),%eax
084cc67f +0x02f:  mov    0xe(%eax),%ebx
084cc682 +0x032:  movl   $0xffffffff,0x4(%esp)
084cc68a +0x03a:  mov    0xc(%ebp),%eax
084cc68d +0x03d:  mov    %eax,(%esp)
084cc690 +0x040:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc695 +0x045:  cmp    %eax,%ebx
084cc697 +0x047:  setne  %al
084cc69a +0x04a:  test   %al,%al
084cc69c +0x04c:  je     084cc6a8 <+0x58>
084cc69e +0x04e:  mov    $0x0,%ebx
084cc6a3 +0x053:  jmp    084cc75f <+0x10f>
084cc6a8 +0x058:  lea    -0x1c(%ebp),%eax
084cc6ab +0x05b:  mov    %eax,(%esp)
084cc6ae +0x05e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc6b3 +0x063:  movl   $0x8d,0x8(%esp)
084cc6bb +0x06b:  movl   $0x0,0x4(%esp)
084cc6c3 +0x073:  lea    -0x1c(%ebp),%eax
084cc6c6 +0x076:  mov    %eax,(%esp)
084cc6c9 +0x079:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc6ce +0x07e:  mov    -0x10(%ebp),%eax
084cc6d1 +0x081:  add    $0x12,%eax
084cc6d4 +0x084:  mov    %eax,(%esp)
084cc6d7 +0x087:  call   0807e3b0 <_init+0xca8>
084cc6dc +0x08c:  mov    %eax,-0xc(%ebp)
084cc6df +0x08f:  mov    -0xc(%ebp),%eax
084cc6e2 +0x092:  mov    %eax,0x4(%esp)
084cc6e6 +0x096:  lea    -0x1c(%ebp),%eax
084cc6e9 +0x099:  mov    %eax,(%esp)
084cc6ec +0x09c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cc6f1 +0x0a1:  mov    -0x10(%ebp),%eax
084cc6f4 +0x0a4:  lea    0x12(%eax),%edx
084cc6f7 +0x0a7:  mov    -0xc(%ebp),%eax
084cc6fa +0x0aa:  mov    %eax,0x8(%esp)
084cc6fe +0x0ae:  mov    %edx,0x4(%esp)
084cc702 +0x0b2:  lea    -0x1c(%ebp),%eax
084cc705 +0x0b5:  mov    %eax,(%esp)
084cc708 +0x0b8:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cc70d +0x0bd:  movl   $0x1,0x4(%esp)
084cc715 +0x0c5:  lea    -0x1c(%ebp),%eax
084cc718 +0x0c8:  mov    %eax,(%esp)
084cc71b +0x0cb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc720 +0x0d0:  lea    -0x1c(%ebp),%eax
084cc723 +0x0d3:  mov    %eax,0x4(%esp)
084cc727 +0x0d7:  mov    0xc(%ebp),%eax
084cc72a +0x0da:  mov    %eax,(%esp)
084cc72d +0x0dd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc732 +0x0e2:  mov    $0x0,%ebx
084cc737 +0x0e7:  lea    -0x1c(%ebp),%eax
084cc73a +0x0ea:  mov    %eax,(%esp)
084cc73d +0x0ed:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc742 +0x0f2:  jmp    084cc75f <+0x10f>
084cc744 +0x0f4:  mov    %edx,%ebx
084cc746 +0x0f6:  mov    %eax,%esi
084cc748 +0x0f8:  lea    -0x1c(%ebp),%eax
084cc74b +0x0fb:  mov    %eax,(%esp)
084cc74e +0x0fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc753 +0x103:  mov    %esi,%eax
084cc755 +0x105:  mov    %ebx,%edx
084cc757 +0x107:  mov    %eax,(%esp)
084cc75a +0x10a:  call   08ae3750 <_Unwind_Resume>
084cc75f +0x10f:  mov    %ebx,%eax
084cc761 +0x111:  add    $0x30,%esp
084cc764 +0x114:  pop    %ebx
084cc765 +0x115:  pop    %esi
084cc766 +0x116:  pop    %ebp
084cc767 +0x117:  ret
```

## 反编译 C

```c
// Inter_GuildNoticeGuildMessage::dispatch_sig @ 0x84cc650

/* Inter_GuildNoticeGuildMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildNoticeGuildMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084cc6c9 to 084cc731 has its CatchHandler @ 084cc744 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x8d);
      local_10 = strlen((char *)(local_14 + 0x12));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x12),local_10)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return 0;
}
```

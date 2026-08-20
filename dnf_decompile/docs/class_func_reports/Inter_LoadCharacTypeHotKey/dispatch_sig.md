# dispatch_sig

`_ZN26Inter_LoadCharacTypeHotKey12dispatch_sigEP5CUserPci`

`Inter_LoadCharacTypeHotKey::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCharacTypeHotKey` | `0x084e87de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e87de  _ZN26Inter_LoadCharacTypeHotKey12dispatch_sigEP5CUserPci
#           Inter_LoadCharacTypeHotKey::dispatch_sig(CUser*, char*, int)
# range [0x084e87de, 0x084e8905]
084e87de +0x000:  push   %ebp
084e87df +0x001:  mov    %esp,%ebp
084e87e1 +0x003:  push   %esi
084e87e2 +0x004:  push   %ebx
084e87e3 +0x005:  sub    $0x30,%esp
084e87e6 +0x008:  mov    0xc(%ebp),%eax
084e87e9 +0x00b:  mov    %eax,(%esp)
084e87ec +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e87f1 +0x013:  cmp    $0x1,%eax
084e87f4 +0x016:  setle  %al
084e87f7 +0x019:  test   %al,%al
084e87f9 +0x01b:  je     084e8805 <+0x27>
084e87fb +0x01d:  mov    $0x0,%ebx
084e8800 +0x022:  jmp    084e88fd <+0x11f>
084e8805 +0x027:  mov    0x10(%ebp),%eax
084e8808 +0x02a:  mov    %eax,-0x10(%ebp)
084e880b +0x02d:  mov    0xc(%ebp),%eax
084e880e +0x030:  mov    %eax,(%esp)
084e8811 +0x033:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
084e8816 +0x038:  mov    %eax,-0xc(%ebp)
084e8819 +0x03b:  mov    -0x10(%ebp),%eax
084e881c +0x03e:  lea    0x5(%eax),%edx
084e881f +0x041:  mov    -0x10(%ebp),%eax
084e8822 +0x044:  movzbl 0x4(%eax),%eax
084e8826 +0x048:  movzbl %al,%eax
084e8829 +0x04b:  mov    %edx,0x8(%esp)
084e882d +0x04f:  mov    %eax,0x4(%esp)
084e8831 +0x053:  mov    -0xc(%ebp),%eax
084e8834 +0x056:  mov    %eax,(%esp)
084e8837 +0x059:  call   084b6cf0 <_ZN11CGameOption15SetHotKeyOptionEhR13CHotkeyOption>  ; CGameOption::SetHotKeyOption(unsigned char, CHotkeyOption&)
084e883c +0x05e:  lea    -0x1c(%ebp),%eax
084e883f +0x061:  mov    %eax,(%esp)
084e8842 +0x064:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e8847 +0x069:  movl   $0x1c4,0x8(%esp)
084e884f +0x071:  movl   $0x0,0x4(%esp)
084e8857 +0x079:  lea    -0x1c(%ebp),%eax
084e885a +0x07c:  mov    %eax,(%esp)
084e885d +0x07f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e8862 +0x084:  mov    -0x10(%ebp),%eax
084e8865 +0x087:  movzbl 0x4(%eax),%eax
084e8869 +0x08b:  movzbl %al,%eax
084e886c +0x08e:  mov    %eax,0x4(%esp)
084e8870 +0x092:  lea    -0x1c(%ebp),%eax
084e8873 +0x095:  mov    %eax,(%esp)
084e8876 +0x098:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e887b +0x09d:  movl   $0xbc,0x4(%esp)
084e8883 +0x0a5:  lea    -0x1c(%ebp),%eax
084e8886 +0x0a8:  mov    %eax,(%esp)
084e8889 +0x0ab:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e888e +0x0b0:  mov    -0x10(%ebp),%eax
084e8891 +0x0b3:  add    $0x5,%eax
084e8894 +0x0b6:  movl   $0xbc,0x8(%esp)
084e889c +0x0be:  mov    %eax,0x4(%esp)
084e88a0 +0x0c2:  lea    -0x1c(%ebp),%eax
084e88a3 +0x0c5:  mov    %eax,(%esp)
084e88a6 +0x0c8:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e88ab +0x0cd:  movl   $0x1,0x4(%esp)
084e88b3 +0x0d5:  lea    -0x1c(%ebp),%eax
084e88b6 +0x0d8:  mov    %eax,(%esp)
084e88b9 +0x0db:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e88be +0x0e0:  lea    -0x1c(%ebp),%eax
084e88c1 +0x0e3:  mov    %eax,0x4(%esp)
084e88c5 +0x0e7:  mov    0xc(%ebp),%eax
084e88c8 +0x0ea:  mov    %eax,(%esp)
084e88cb +0x0ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e88d0 +0x0f2:  mov    $0x0,%ebx
084e88d5 +0x0f7:  lea    -0x1c(%ebp),%eax
084e88d8 +0x0fa:  mov    %eax,(%esp)
084e88db +0x0fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e88e0 +0x102:  jmp    084e88fd <+0x11f>
084e88e2 +0x104:  mov    %edx,%ebx
084e88e4 +0x106:  mov    %eax,%esi
084e88e6 +0x108:  lea    -0x1c(%ebp),%eax
084e88e9 +0x10b:  mov    %eax,(%esp)
084e88ec +0x10e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e88f1 +0x113:  mov    %esi,%eax
084e88f3 +0x115:  mov    %ebx,%edx
084e88f5 +0x117:  mov    %eax,(%esp)
084e88f8 +0x11a:  call   08ae3750 <_Unwind_Resume>
084e88fd +0x11f:  mov    %ebx,%eax
084e88ff +0x121:  add    $0x30,%esp
084e8902 +0x124:  pop    %ebx
084e8903 +0x125:  pop    %esi
084e8904 +0x126:  pop    %ebp
084e8905 +0x127:  ret
```

## 反编译 C

```c
// Inter_LoadCharacTypeHotKey::dispatch_sig @ 0x84e87de

/* Inter_LoadCharacTypeHotKey::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCharacTypeHotKey::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  CGameOption *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (1 < iVar1) {
    local_14 = param_3;
    local_10 = (CGameOption *)CUser::GetGameOptionRef((CUser *)param_2);
    CGameOption::SetHotKeyOption(local_10,*(uchar *)(local_14 + 4),(CHotkeyOption *)(local_14 + 5));
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e885d to 084e88cf has its CatchHandler @ 084e88e2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1c4);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0xbc);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_20,(char *)(local_14 + 5),0xbc);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```

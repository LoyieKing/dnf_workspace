# item_upgrade_system

`_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi`

`WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int)`

| 类 | 地址 |
|---|---|
| `WongWork::IItemUpgrade` | `0x080fc850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fc850  _ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi
#           WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int)
# range [0x080fc850, 0x080fc927]
080fc850 +0x00:  push   %ebp
080fc851 +0x01:  mov    %esp,%ebp
080fc853 +0x03:  push   %esi
080fc854 +0x04:  push   %ebx
080fc855 +0x05:  sub    $0x20,%esp
080fc858 +0x08:  movl   $0x0,-0xc(%ebp)
080fc85f +0x0f:  lea    -0x18(%ebp),%eax
080fc862 +0x12:  mov    %eax,(%esp)
080fc865 +0x15:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080fc86a +0x1a:  mov    0x14(%ebp),%eax
080fc86d +0x1d:  mov    %eax,0x8(%esp)
080fc871 +0x21:  movl   $0x1,0x4(%esp)
080fc879 +0x29:  lea    -0x18(%ebp),%eax
080fc87c +0x2c:  mov    %eax,(%esp)
080fc87f +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080fc884 +0x34:  mov    0x8(%ebp),%eax
080fc887 +0x37:  mov    (%eax),%eax
080fc889 +0x39:  mov    (%eax),%edx
080fc88b +0x3b:  lea    -0x18(%ebp),%eax
080fc88e +0x3e:  mov    %eax,0xc(%esp)
080fc892 +0x42:  mov    0x10(%ebp),%eax
080fc895 +0x45:  mov    %eax,0x8(%esp)
080fc899 +0x49:  mov    0xc(%ebp),%eax
080fc89c +0x4c:  mov    %eax,0x4(%esp)
080fc8a0 +0x50:  mov    0x8(%ebp),%eax
080fc8a3 +0x53:  mov    %eax,(%esp)
080fc8a6 +0x56:  call   *%edx
080fc8a8 +0x58:  mov    %eax,-0xc(%ebp)
080fc8ab +0x5b:  cmpl   $0x0,-0xc(%ebp)
080fc8af +0x5f:  sete   %al
080fc8b2 +0x62:  test   %al,%al
080fc8b4 +0x64:  je     080fc8dd <+0x8d>
080fc8b6 +0x66:  movl   $0x1,0x4(%esp)
080fc8be +0x6e:  lea    -0x18(%ebp),%eax
080fc8c1 +0x71:  mov    %eax,(%esp)
080fc8c4 +0x74:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080fc8c9 +0x79:  lea    -0x18(%ebp),%eax
080fc8cc +0x7c:  mov    %eax,0x4(%esp)
080fc8d0 +0x80:  mov    0xc(%ebp),%eax
080fc8d3 +0x83:  mov    %eax,(%esp)
080fc8d6 +0x86:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080fc8db +0x8b:  jmp    080fc916 <+0xc6>
080fc8dd +0x8d:  mov    -0xc(%ebp),%eax
080fc8e0 +0x90:  movzwl %ax,%edx
080fc8e3 +0x93:  mov    0x14(%ebp),%eax
080fc8e6 +0x96:  mov    %edx,0x8(%esp)
080fc8ea +0x9a:  mov    %eax,0x4(%esp)
080fc8ee +0x9e:  mov    0xc(%ebp),%eax
080fc8f1 +0xa1:  mov    %eax,(%esp)
080fc8f4 +0xa4:  call   0867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>  ; CUser::SendCmdErrorPacket2Byte(ENUM_CMDPACKET, unsigned short)
080fc8f9 +0xa9:  jmp    080fc916 <+0xc6>
080fc8fb +0xab:  mov    %edx,%ebx
080fc8fd +0xad:  mov    %eax,%esi
080fc8ff +0xaf:  lea    -0x18(%ebp),%eax
080fc902 +0xb2:  mov    %eax,(%esp)
080fc905 +0xb5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080fc90a +0xba:  mov    %esi,%eax
080fc90c +0xbc:  mov    %ebx,%edx
080fc90e +0xbe:  mov    %eax,(%esp)
080fc911 +0xc1:  call   08ae3750 <_Unwind_Resume>
080fc916 +0xc6:  lea    -0x18(%ebp),%eax
080fc919 +0xc9:  mov    %eax,(%esp)
080fc91c +0xcc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080fc921 +0xd1:  add    $0x20,%esp
080fc924 +0xd4:  pop    %ebx
080fc925 +0xd5:  pop    %esi
080fc926 +0xd6:  pop    %ebp
080fc927 +0xd7:  ret
```

## 反编译 C

```c
// WongWork::IItemUpgrade::item_upgrade_system @ 0x80fc850

/* WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int) */

void __thiscall
WongWork::IItemUpgrade::item_upgrade_system
          (IItemUpgrade *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,int param_3)

{
  PacketGuard local_1c [12];
  uint local_10;
  
  local_10 = 0;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080fc87f to 080fc8f8 has its CatchHandler @ 080fc8fb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,param_3);
  local_10 = (*(code *)**(undefined4 **)this)(this,param_1,param_2,local_1c);
  if (local_10 == 0) {
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
  }
  else {
    CUser::SendCmdErrorPacket2Byte(param_1,param_3,local_10 & 0xffff);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

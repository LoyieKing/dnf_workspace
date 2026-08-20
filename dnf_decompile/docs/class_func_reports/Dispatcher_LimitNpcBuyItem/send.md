# send

`_ZN26Dispatcher_LimitNpcBuyItem4sendEP5CUserR9ParamBase`

`Dispatcher_LimitNpcBuyItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_LimitNpcBuyItem` | `0x081e1100` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1100  _ZN26Dispatcher_LimitNpcBuyItem4sendEP5CUserR9ParamBase
#           Dispatcher_LimitNpcBuyItem::send(CUser*, ParamBase&)
# range [0x081e1100, 0x081e1171]
081e1100 +0x00:  push   %ebp
081e1101 +0x01:  mov    %esp,%ebp
081e1103 +0x03:  push   %esi
081e1104 +0x04:  push   %ebx
081e1105 +0x05:  sub    $0x20,%esp
081e1108 +0x08:  mov    0x10(%ebp),%eax
081e110b +0x0b:  mov    %eax,-0xc(%ebp)
081e110e +0x0e:  lea    -0x18(%ebp),%eax
081e1111 +0x11:  mov    %eax,(%esp)
081e1114 +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e1119 +0x19:  mov    -0xc(%ebp),%eax
081e111c +0x1c:  mov    0x4(%eax),%eax
081e111f +0x1f:  test   %eax,%eax
081e1121 +0x21:  jle    081e1160 <+0x60>
081e1123 +0x23:  mov    -0xc(%ebp),%eax
081e1126 +0x26:  mov    0x4(%eax),%eax
081e1129 +0x29:  movzbl %al,%eax
081e112c +0x2c:  mov    %eax,0x8(%esp)
081e1130 +0x30:  movl   $0x1d1,0x4(%esp)
081e1138 +0x38:  mov    0xc(%ebp),%eax
081e113b +0x3b:  mov    %eax,(%esp)
081e113e +0x3e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e1143 +0x43:  jmp    081e1160 <+0x60>
081e1145 +0x45:  mov    %edx,%ebx
081e1147 +0x47:  mov    %eax,%esi
081e1149 +0x49:  lea    -0x18(%ebp),%eax
081e114c +0x4c:  mov    %eax,(%esp)
081e114f +0x4f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e1154 +0x54:  mov    %esi,%eax
081e1156 +0x56:  mov    %ebx,%edx
081e1158 +0x58:  mov    %eax,(%esp)
081e115b +0x5b:  call   08ae3750 <_Unwind_Resume>
081e1160 +0x60:  lea    -0x18(%ebp),%eax
081e1163 +0x63:  mov    %eax,(%esp)
081e1166 +0x66:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e116b +0x6b:  add    $0x20,%esp
081e116e +0x6e:  pop    %ebx
081e116f +0x6f:  pop    %esi
081e1170 +0x70:  pop    %ebp
081e1171 +0x71:  ret
```

## 反编译 C

```c
// Dispatcher_LimitNpcBuyItem::send @ 0x81e1100

/* Dispatcher_LimitNpcBuyItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_LimitNpcBuyItem::send(Dispatcher_LimitNpcBuyItem *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
  if (0 < *(int *)(local_10 + 4)) {
                    /* try { // try from 081e113e to 081e1142 has its CatchHandler @ 081e1145 */
    CUser::SendCmdErrorPacket(param_1,0x1d1,*(uint *)(local_10 + 4) & 0xff);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```

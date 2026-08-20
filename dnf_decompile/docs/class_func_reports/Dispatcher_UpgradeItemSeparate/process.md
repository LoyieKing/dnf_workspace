# process

`_ZN30Dispatcher_UpgradeItemSeparate7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_UpgradeItemSeparate::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UpgradeItemSeparate` | `0x081cc106` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cc106  _ZN30Dispatcher_UpgradeItemSeparate7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_UpgradeItemSeparate::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cc106, 0x081cc18b]
081cc106 +0x00:  push   %ebp
081cc107 +0x01:  mov    %esp,%ebp
081cc109 +0x03:  sub    $0x28,%esp
081cc10c +0x06:  mov    0x10(%ebp),%eax
081cc10f +0x09:  mov    %eax,0x8(%esp)
081cc113 +0x0d:  mov    0xc(%ebp),%eax
081cc116 +0x10:  mov    %eax,0x4(%esp)
081cc11a +0x14:  mov    0x8(%ebp),%eax
081cc11d +0x17:  mov    %eax,(%esp)
081cc120 +0x1a:  call   081cbe84 <_ZN30Dispatcher_UpgradeItemSeparate11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_UpgradeItemSeparate::check_error(CUser*, MSG_BASE&)
081cc125 +0x1f:  mov    %eax,-0x14(%ebp)
081cc128 +0x22:  cmpl   $0x0,-0x14(%ebp)
081cc12c +0x26:  jle    081cc152 <+0x4c>
081cc12e +0x28:  mov    -0x14(%ebp),%eax
081cc131 +0x2b:  movzbl %al,%eax
081cc134 +0x2e:  mov    %eax,0x8(%esp)
081cc138 +0x32:  movl   $0x1b7,0x4(%esp)
081cc140 +0x3a:  mov    0xc(%ebp),%eax
081cc143 +0x3d:  mov    %eax,(%esp)
081cc146 +0x40:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081cc14b +0x45:  mov    $0xffffffff,%eax
081cc150 +0x4a:  jmp    081cc189 <+0x83>
081cc152 +0x4c:  mov    0x14(%ebp),%eax
081cc155 +0x4f:  mov    %eax,-0x10(%ebp)
081cc158 +0x52:  mov    0x10(%ebp),%eax
081cc15b +0x55:  mov    %eax,-0xc(%ebp)
081cc15e +0x58:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081cc163 +0x5d:  mov    0x24(%eax),%eax
081cc166 +0x60:  movl   $0x1b7,0xc(%esp)
081cc16e +0x68:  mov    -0xc(%ebp),%edx
081cc171 +0x6b:  mov    %edx,0x8(%esp)
081cc175 +0x6f:  mov    0xc(%ebp),%edx
081cc178 +0x72:  mov    %edx,0x4(%esp)
081cc17c +0x76:  mov    %eax,(%esp)
081cc17f +0x79:  call   080fc850 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi>  ; WongWork::IItemUpgrade::item_upgrade_system(CUser*, MSG_ITEM_UPGRADE*, int)
081cc184 +0x7e:  mov    $0x0,%eax
081cc189 +0x83:  leave
081cc18a +0x84:  ret
081cc18b +0x85:  nop
```

## 反编译 C

```c
// Dispatcher_UpgradeItemSeparate::process @ 0x81cc106

/* Dispatcher_UpgradeItemSeparate::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_UpgradeItemSeparate::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = check_error((Dispatcher_UpgradeItemSeparate *)param_1,(CUser *)param_2,(MSG_BASE *)param_3
                     );
  if ((int)uVar1 < 1) {
    iVar3 = G_CDataManager();
    WongWork::IItemUpgrade::item_upgrade_system
              (*(IItemUpgrade **)(iVar3 + 0x24),(CUser *)param_2,(MSG_ITEM_UPGRADE *)param_3,0x1b7);
    uVar2 = 0;
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0x1b7,uVar1 & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```

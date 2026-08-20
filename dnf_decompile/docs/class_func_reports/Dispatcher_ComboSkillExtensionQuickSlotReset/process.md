# process

`_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkillExtensionQuickSlotReset` | `0x0825f4e8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f4e8  _ZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825f4e8, 0x0825f593]
0825f4e8 +0x00:  push   %ebp
0825f4e9 +0x01:  mov    %esp,%ebp
0825f4eb +0x03:  push   %ebx
0825f4ec +0x04:  sub    $0x24,%esp
0825f4ef +0x07:  mov    0x14(%ebp),%eax
0825f4f2 +0x0a:  mov    %eax,-0x10(%ebp)
0825f4f5 +0x0d:  mov    0x10(%ebp),%eax
0825f4f8 +0x10:  mov    %eax,0x8(%esp)
0825f4fc +0x14:  mov    0xc(%ebp),%eax
0825f4ff +0x17:  mov    %eax,0x4(%esp)
0825f503 +0x1b:  mov    0x8(%ebp),%eax
0825f506 +0x1e:  mov    %eax,(%esp)
0825f509 +0x21:  call   0825f594 <_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ComboSkillExtensionQuickSlotReset::check_error(CUser*, MSG_BASE&)
0825f50e +0x26:  mov    -0x10(%ebp),%edx
0825f511 +0x29:  mov    %eax,0x4(%edx)
0825f514 +0x2c:  mov    -0x10(%ebp),%eax
0825f517 +0x2f:  mov    0x4(%eax),%eax
0825f51a +0x32:  test   %eax,%eax
0825f51c +0x34:  jle    0825f525 <+0x3d>
0825f51e +0x36:  mov    $0x0,%eax
0825f523 +0x3b:  jmp    0825f58e <+0xa6>
0825f525 +0x3d:  mov    -0x10(%ebp),%eax
0825f528 +0x40:  mov    0x4(%eax),%eax
0825f52b +0x43:  test   %eax,%eax
0825f52d +0x45:  jns    0825f557 <+0x6f>
0825f52f +0x47:  mov    -0x10(%ebp),%eax
0825f532 +0x4a:  mov    0x4(%eax),%eax
0825f535 +0x4d:  movl   $0x0,0xc(%esp)
0825f53d +0x55:  mov    %eax,0x8(%esp)
0825f541 +0x59:  movl   $&_ZZN44Dispatcher_ComboSkillExtensionQuickSlotReset7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825f549 +0x61:  movl   $0x384,(%esp)
0825f550 +0x68:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f555 +0x6d:  jmp    0825f58e <+0xa6>
0825f557 +0x6f:  mov    0x10(%ebp),%eax
0825f55a +0x72:  mov    %eax,-0xc(%ebp)
0825f55d +0x75:  mov    -0xc(%ebp),%eax
0825f560 +0x78:  movzbl 0xd(%eax),%eax
0825f564 +0x7c:  movsbl %al,%ebx
0825f567 +0x7f:  mov    0xc(%ebp),%eax
0825f56a +0x82:  mov    %eax,(%esp)
0825f56d +0x85:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0825f572 +0x8a:  mov    %ebx,0x4(%esp)
0825f576 +0x8e:  mov    %eax,(%esp)
0825f579 +0x91:  call   08608da4 <_ZN9SkillSlot32pullComboSkillExtensionQuickSlotE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::pullComboSkillExtensionQuickSlot(ENUM_SKILL_TREE_KIND)
0825f57e +0x96:  mov    0xc(%ebp),%eax
0825f581 +0x99:  mov    %eax,(%esp)
0825f584 +0x9c:  call   0866c46a <_ZN5CUser15send_skill_infoEv>  ; CUser::send_skill_info()
0825f589 +0xa1:  mov    $0x0,%eax
0825f58e +0xa6:  add    $0x24,%esp
0825f591 +0xa9:  pop    %ebx
0825f592 +0xaa:  pop    %ebp
0825f593 +0xab:  ret
```

## 反编译 C

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::process @ 0x825f4e8

/* Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::process
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SkillSlot *pSVar3;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(900,
                       "virtual int Dispatcher_ComboSkillExtensionQuickSlotReset::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::pullComboSkillExtensionQuickSlot(pSVar3,(int)(char)MVar1);
      CUser::send_skill_info(param_1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

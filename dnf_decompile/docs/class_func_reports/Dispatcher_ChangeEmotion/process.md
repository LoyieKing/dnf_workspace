# process

`_ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ChangeEmotion::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeEmotion` | `0x081d1b5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1b5e  _ZN24Dispatcher_ChangeEmotion7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ChangeEmotion::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d1b5e, 0x081d1ceb]
081d1b5e +0x000:  push   %ebp
081d1b5f +0x001:  mov    %esp,%ebp
081d1b61 +0x003:  push   %esi
081d1b62 +0x004:  push   %ebx
081d1b63 +0x005:  sub    $0x20,%esp
081d1b66 +0x008:  mov    0x10(%ebp),%eax
081d1b69 +0x00b:  mov    %eax,0x8(%esp)
081d1b6d +0x00f:  mov    0xc(%ebp),%eax
081d1b70 +0x012:  mov    %eax,0x4(%esp)
081d1b74 +0x016:  mov    0x8(%ebp),%eax
081d1b77 +0x019:  mov    %eax,(%esp)
081d1b7a +0x01c:  call   081d1cec <_ZN24Dispatcher_ChangeEmotion11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ChangeEmotion::check_error(CUser*, MSG_BASE&)
081d1b7f +0x021:  mov    %eax,-0x18(%ebp)
081d1b82 +0x024:  cmpl   $0x0,-0x18(%ebp)
081d1b86 +0x028:  jle    081d1b90 <+0x32>
081d1b88 +0x02a:  mov    -0x18(%ebp),%ebx
081d1b8b +0x02d:  jmp    081d1ce2 <+0x184>
081d1b90 +0x032:  cmpl   $0x0,-0x18(%ebp)
081d1b94 +0x036:  jns    081d1ba0 <+0x42>
081d1b96 +0x038:  mov    $0xffffffff,%ebx
081d1b9b +0x03d:  jmp    081d1ce2 <+0x184>
081d1ba0 +0x042:  mov    0x10(%ebp),%eax
081d1ba3 +0x045:  mov    %eax,-0x14(%ebp)
081d1ba6 +0x048:  mov    0x14(%ebp),%eax
081d1ba9 +0x04b:  mov    %eax,-0x10(%ebp)
081d1bac +0x04e:  mov    -0x14(%ebp),%eax
081d1baf +0x051:  movzwl 0xd(%eax),%edx
081d1bb3 +0x055:  mov    -0x10(%ebp),%eax
081d1bb6 +0x058:  mov    %dx,0x4(%eax)
081d1bba +0x05c:  mov    0xc(%ebp),%eax
081d1bbd +0x05f:  mov    %eax,(%esp)
081d1bc0 +0x062:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d1bc5 +0x067:  cmp    $0x2,%eax
081d1bc8 +0x06a:  setle  %al
081d1bcb +0x06d:  test   %al,%al
081d1bcd +0x06f:  je     081d1bfb <+0x9d>
081d1bcf +0x071:  movl   $0x4,(%esp)
081d1bd6 +0x078:  call   08725800 <__cxa_allocate_exception>
081d1bdb +0x07d:  mov    %eax,%edx
081d1bdd +0x07f:  movl   $0x3,(%edx)
081d1be3 +0x085:  movl   $0x0,0x8(%esp)
081d1beb +0x08d:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081d1bf3 +0x095:  mov    %eax,(%esp)
081d1bf6 +0x098:  call   08724c50 <__cxa_throw>
081d1bfb +0x09d:  mov    -0x10(%ebp),%eax
081d1bfe +0x0a0:  movzwl 0x4(%eax),%eax
081d1c02 +0x0a4:  cwtl
081d1c03 +0x0a5:  mov    %eax,0x4(%esp)
081d1c07 +0x0a9:  mov    0x8(%ebp),%eax
081d1c0a +0x0ac:  mov    %eax,(%esp)
081d1c0d +0x0af:  call   081d1ebe <_ZN24Dispatcher_ChangeEmotion19isVaildEmotionValueEs>  ; Dispatcher_ChangeEmotion::isVaildEmotionValue(short)
081d1c12 +0x0b4:  xor    $0x1,%eax
081d1c15 +0x0b7:  test   %al,%al
081d1c17 +0x0b9:  je     081d1ca1 <+0x143>
081d1c1d +0x0bf:  movl   $0x4,(%esp)
081d1c24 +0x0c6:  call   08725800 <__cxa_allocate_exception>
081d1c29 +0x0cb:  mov    %eax,%edx
081d1c2b +0x0cd:  movl   $0x1,(%edx)
081d1c31 +0x0d3:  movl   $0x0,0x8(%esp)
081d1c39 +0x0db:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
081d1c41 +0x0e3:  mov    %eax,(%esp)
081d1c44 +0x0e6:  call   08724c50 <__cxa_throw>
081d1c49 +0x0eb:  cmp    $0x1,%edx
081d1c4c +0x0ee:  je     081d1c56 <+0xf8>
081d1c4e +0x0f0:  mov    %eax,(%esp)
081d1c51 +0x0f3:  call   08ae3750 <_Unwind_Resume>
081d1c56 +0x0f8:  mov    %eax,(%esp)
081d1c59 +0x0fb:  call   08725ce0 <__cxa_begin_catch>
081d1c5e +0x100:  mov    (%eax),%eax
081d1c60 +0x102:  mov    %eax,-0xc(%ebp)
081d1c63 +0x105:  mov    -0xc(%ebp),%eax
081d1c66 +0x108:  movzbl %al,%eax
081d1c69 +0x10b:  mov    %eax,0x8(%esp)
081d1c6d +0x10f:  movl   $0x102,0x4(%esp)
081d1c75 +0x117:  mov    0xc(%ebp),%eax
081d1c78 +0x11a:  mov    %eax,(%esp)
081d1c7b +0x11d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d1c80 +0x122:  mov    $0xffffffff,%ebx
081d1c85 +0x127:  call   08725c30 <__cxa_end_catch>
081d1c8a +0x12c:  jmp    081d1ce2 <+0x184>
081d1c8c +0x12e:  mov    %edx,%ebx
081d1c8e +0x130:  mov    %eax,%esi
081d1c90 +0x132:  call   08725c30 <__cxa_end_catch>
081d1c95 +0x137:  mov    %esi,%eax
081d1c97 +0x139:  mov    %ebx,%edx
081d1c99 +0x13b:  mov    %eax,(%esp)
081d1c9c +0x13e:  call   08ae3750 <_Unwind_Resume>
081d1ca1 +0x143:  mov    -0x10(%ebp),%eax
081d1ca4 +0x146:  movzwl 0x4(%eax),%eax
081d1ca8 +0x14a:  movswl %ax,%edx
081d1cab +0x14d:  mov    0xc(%ebp),%eax
081d1cae +0x150:  mov    %edx,0x4(%esp)
081d1cb2 +0x154:  mov    %eax,(%esp)
081d1cb5 +0x157:  call   0822f736 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4de0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4de0
081d1cba +0x15c:  movl   $0x0,0xc(%esp)
081d1cc2 +0x164:  movl   $0x0,0x8(%esp)
081d1cca +0x16c:  movl   $0x3,0x4(%esp)
081d1cd2 +0x174:  mov    0xc(%ebp),%eax
081d1cd5 +0x177:  mov    %eax,(%esp)
081d1cd8 +0x17a:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
081d1cdd +0x17f:  mov    $0x0,%ebx
081d1ce2 +0x184:  mov    %ebx,%eax
081d1ce4 +0x186:  add    $0x20,%esp
081d1ce7 +0x189:  pop    %ebx
081d1ce8 +0x18a:  pop    %esi
081d1ce9 +0x18b:  pop    %ebp
081d1cea +0x18c:  ret
081d1ceb +0x18d:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeEmotion::process @ 0x81d1b5e

/* Dispatcher_ChangeEmotion::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_ChangeEmotion::process
          (Dispatcher_ChangeEmotion *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  CUser *pCVar4;
  MSG_BASE *pMVar5;
  
  pCVar4 = param_1;
  pMVar5 = param_2;
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xd);
      iVar2 = CUser::get_state(param_1);
      if (iVar2 < 3) {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4,pCVar4,pMVar5);
        *puVar3 = 3;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 081d1bf6 to 081d1c48 has its CatchHandler @ 081d1c49 */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      iVar2 = (int)*(short *)(param_3 + 4);
      cVar1 = isVaildEmotionValue(this,*(short *)(param_3 + 4));
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4,iVar2,pMVar5);
        *puVar3 = 1;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&ENUM_ERROR::typeinfo,0);
      }
      CUserCharacInfo::SetCurCharacEmotion((CUserCharacInfo *)param_1,*(short *)(param_3 + 4));
      APSystem::CUserProc::ClearActionAndSendtoUser(param_1,3,0,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}
```

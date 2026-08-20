# process

`_ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SoloTeleport::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SoloTeleport` | `0x081e1d9c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1d9c  _ZN23Dispatcher_SoloTeleport7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SoloTeleport::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e1d9c, 0x081e1e97]
081e1d9c +0x00:  push   %ebp
081e1d9d +0x01:  mov    %esp,%ebp
081e1d9f +0x03:  sub    $0x38,%esp
081e1da2 +0x06:  mov    0x14(%ebp),%eax
081e1da5 +0x09:  mov    %eax,-0x14(%ebp)
081e1da8 +0x0c:  mov    0x10(%ebp),%eax
081e1dab +0x0f:  mov    %eax,-0x10(%ebp)
081e1dae +0x12:  mov    -0x10(%ebp),%eax
081e1db1 +0x15:  mov    0x34(%eax),%eax
081e1db4 +0x18:  cmp    $0xffffffff,%eax
081e1db7 +0x1b:  je     081e1dc7 <+0x2b>
081e1db9 +0x1d:  mov    &_ZN10GlobalData11g_pTeleportE,%edx
081e1dbf +0x23:  mov    -0x10(%ebp),%eax
081e1dc2 +0x26:  mov    %edx,0x44(%eax)
081e1dc5 +0x29:  jmp    081e1dd3 <+0x37>
081e1dc7 +0x2b:  mov    &_ZN10GlobalData11g_pTeleportE+0x4,%edx
081e1dcd +0x31:  mov    -0x10(%ebp),%eax
081e1dd0 +0x34:  mov    %edx,0x44(%eax)
081e1dd3 +0x37:  lea    -0x24(%ebp),%eax
081e1dd6 +0x3a:  mov    %eax,(%esp)
081e1dd9 +0x3d:  call   0822d78e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e38>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e38
081e1dde +0x42:  mov    -0x10(%ebp),%eax
081e1de1 +0x45:  mov    0x30(%eax),%eax
081e1de4 +0x48:  mov    %eax,-0x24(%ebp)
081e1de7 +0x4b:  mov    -0x10(%ebp),%eax
081e1dea +0x4e:  mov    0x38(%eax),%edx
081e1ded +0x51:  mov    %edx,-0x20(%ebp)
081e1df0 +0x54:  mov    0x3c(%eax),%edx
081e1df3 +0x57:  mov    %edx,-0x1c(%ebp)
081e1df6 +0x5a:  movzwl 0x40(%eax),%eax
081e1dfa +0x5e:  mov    %ax,-0x18(%ebp)
081e1dfe +0x62:  mov    -0x10(%ebp),%eax
081e1e01 +0x65:  mov    0x44(%eax),%eax
081e1e04 +0x68:  mov    (%eax),%eax
081e1e06 +0x6a:  add    $0xc,%eax
081e1e09 +0x6d:  mov    (%eax),%ecx
081e1e0b +0x6f:  mov    -0x10(%ebp),%eax
081e1e0e +0x72:  mov    0x44(%eax),%eax
081e1e11 +0x75:  lea    -0x24(%ebp),%edx
081e1e14 +0x78:  mov    %edx,0x4(%esp)
081e1e18 +0x7c:  mov    %eax,(%esp)
081e1e1b +0x7f:  call   *%ecx
081e1e1d +0x81:  mov    0x14(%ebp),%eax
081e1e20 +0x84:  mov    %eax,0xc(%esp)
081e1e24 +0x88:  mov    0x10(%ebp),%eax
081e1e27 +0x8b:  mov    %eax,0x8(%esp)
081e1e2b +0x8f:  mov    0xc(%ebp),%eax
081e1e2e +0x92:  mov    %eax,0x4(%esp)
081e1e32 +0x96:  mov    0x8(%ebp),%eax
081e1e35 +0x99:  mov    %eax,(%esp)
081e1e38 +0x9c:  call   081e1e98 <_ZN23Dispatcher_SoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_SoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)
081e1e3d +0xa1:  mov    %eax,-0xc(%ebp)
081e1e40 +0xa4:  cmpl   $0x0,-0xc(%ebp)
081e1e44 +0xa8:  jle    081e1e51 <+0xb5>
081e1e46 +0xaa:  mov    -0x14(%ebp),%eax
081e1e49 +0xad:  mov    -0xc(%ebp),%edx
081e1e4c +0xb0:  mov    %edx,0x4(%eax)
081e1e4f +0xb3:  jmp    081e1e5e <+0xc2>
081e1e51 +0xb5:  cmpl   $0x0,-0xc(%ebp)
081e1e55 +0xb9:  jns    081e1e5e <+0xc2>
081e1e57 +0xbb:  mov    $0xffffffff,%eax
081e1e5c +0xc0:  jmp    081e1e96 <+0xfa>
081e1e5e +0xc2:  cmpl   $0x0,-0xc(%ebp)
081e1e62 +0xc6:  jne    081e1e85 <+0xe9>
081e1e64 +0xc8:  mov    -0x10(%ebp),%eax
081e1e67 +0xcb:  mov    0x44(%eax),%eax
081e1e6a +0xce:  mov    0xc(%ebp),%edx
081e1e6d +0xd1:  mov    %edx,0x4(%esp)
081e1e71 +0xd5:  mov    %eax,(%esp)
081e1e74 +0xd8:  call   08283dc2 <_ZN8Teleport17set_end_cool_timeEP5CUser>  ; Teleport::set_end_cool_time(CUser*)
081e1e79 +0xdd:  mov    -0x10(%ebp),%eax
081e1e7c +0xe0:  mov    0x30(%eax),%edx
081e1e7f +0xe3:  mov    -0x14(%ebp),%eax
081e1e82 +0xe6:  mov    %edx,0x8(%eax)
081e1e85 +0xe9:  mov    -0x10(%ebp),%eax
081e1e88 +0xec:  mov    0x44(%eax),%edx
081e1e8b +0xef:  mov    -0x14(%ebp),%eax
081e1e8e +0xf2:  mov    %edx,0xc(%eax)
081e1e91 +0xf5:  mov    $0x0,%eax
081e1e96 +0xfa:  leave
081e1e97 +0xfb:  ret
```

## 反编译 C

```c
// Dispatcher_SoloTeleport::process @ 0x81e1d9c

/* Dispatcher_SoloTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SoloTeleport::process
          (Dispatcher_SoloTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  local_14 = param_2;
  if (*(int *)(param_2 + 0x34) == -1) {
    *(undefined4 *)(param_2 + 0x44) = DAT_0941f81c;
  }
  else {
    *(undefined4 *)(param_2 + 0x44) = GlobalData::g_pTeleport;
  }
  STTeleportData::STTeleportData((STTeleportData *)&local_28);
  local_28 = *(undefined4 *)(local_14 + 0x30);
  local_24 = *(undefined4 *)(local_14 + 0x38);
  local_20 = *(undefined4 *)(local_14 + 0x3c);
  local_1c = *(undefined2 *)(local_14 + 0x40);
  (**(code **)(**(int **)(local_14 + 0x44) + 0xc))(*(undefined4 *)(local_14 + 0x44),&local_28);
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(local_18 + 4) = local_10;
  }
  if (local_10 == 0) {
    Teleport::set_end_cool_time(*(Teleport **)(local_14 + 0x44),param_1);
    *(undefined4 *)(local_18 + 8) = *(undefined4 *)(local_14 + 0x30);
  }
  *(undefined4 *)(local_18 + 0xc) = *(undefined4 *)(local_14 + 0x44);
  return 0;
}
```

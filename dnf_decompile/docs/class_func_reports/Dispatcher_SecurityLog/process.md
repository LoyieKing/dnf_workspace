# process

`_ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SecurityLog` | `0x0825fb38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825fb38  _ZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825fb38, 0x0825fc33]
0825fb38 +0x00:  push   %ebp
0825fb39 +0x01:  mov    %esp,%ebp
0825fb3b +0x03:  push   %edi
0825fb3c +0x04:  push   %esi
0825fb3d +0x05:  push   %ebx
0825fb3e +0x06:  sub    $0x6c,%esp
0825fb41 +0x09:  mov    0x14(%ebp),%eax
0825fb44 +0x0c:  mov    %eax,-0x24(%ebp)
0825fb47 +0x0f:  mov    0x10(%ebp),%eax
0825fb4a +0x12:  mov    %eax,-0x20(%ebp)
0825fb4d +0x15:  cmpl   $0x0,0xc(%ebp)
0825fb51 +0x19:  je     0825fb60 <+0x28>
0825fb53 +0x1b:  mov    0xc(%ebp),%eax
0825fb56 +0x1e:  mov    %eax,(%esp)
0825fb59 +0x21:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0825fb5e +0x26:  jmp    0825fb65 <+0x2d>
0825fb60 +0x28:  mov    $0x0,%eax
0825fb65 +0x2d:  mov    %eax,-0x1c(%ebp)
0825fb68 +0x30:  mov    -0x20(%ebp),%eax
0825fb6b +0x33:  mov    0x15(%eax),%eax
0825fb6e +0x36:  test   %eax,%eax
0825fb70 +0x38:  je     0825fb7c <+0x44>
0825fb72 +0x3a:  mov    -0x20(%ebp),%eax
0825fb75 +0x3d:  mov    0x19(%eax),%eax
0825fb78 +0x40:  test   %eax,%eax
0825fb7a +0x42:  jne    0825fb86 <+0x4e>
0825fb7c +0x44:  mov    $0x0,%eax
0825fb81 +0x49:  jmp    0825fc2c <+0xf4>
0825fb86 +0x4e:  movl   $0x0,0x4(%esp)
0825fb8e +0x56:  mov    -0x1c(%ebp),%eax
0825fb91 +0x59:  mov    %eax,(%esp)
0825fb94 +0x5c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0825fb99 +0x61:  mov    %eax,%ecx
0825fb9b +0x63:  mov    -0x20(%ebp),%eax
0825fb9e +0x66:  mov    0x1d(%eax),%edx
0825fba1 +0x69:  mov    -0x20(%ebp),%eax
0825fba4 +0x6c:  mov    0x19(%eax),%eax
0825fba7 +0x6f:  mov    %edx,%ebx
0825fba9 +0x71:  sub    %eax,%ebx
0825fbab +0x73:  mov    %ebx,-0x30(%ebp)
0825fbae +0x76:  mov    -0x20(%ebp),%eax
0825fbb1 +0x79:  mov    0x21(%eax),%eax
0825fbb4 +0x7c:  mov    %eax,-0x2c(%ebp)
0825fbb7 +0x7f:  mov    -0x20(%ebp),%eax
0825fbba +0x82:  mov    0x1d(%eax),%edi
0825fbbd +0x85:  mov    -0x20(%ebp),%eax
0825fbc0 +0x88:  mov    0x19(%eax),%esi
0825fbc3 +0x8b:  mov    -0x20(%ebp),%eax
0825fbc6 +0x8e:  mov    0x15(%eax),%ebx
0825fbc9 +0x91:  mov    -0x20(%ebp),%eax
0825fbcc +0x94:  mov    0x11(%eax),%edx
0825fbcf +0x97:  mov    -0x20(%ebp),%eax
0825fbd2 +0x9a:  mov    0xd(%eax),%eax
0825fbd5 +0x9d:  mov    %ecx,0x30(%esp)
0825fbd9 +0xa1:  mov    -0x30(%ebp),%ecx
0825fbdc +0xa4:  mov    %ecx,0x2c(%esp)
0825fbe0 +0xa8:  mov    -0x2c(%ebp),%ecx
0825fbe3 +0xab:  mov    %ecx,0x28(%esp)
0825fbe7 +0xaf:  mov    %edi,0x24(%esp)
0825fbeb +0xb3:  mov    %esi,0x20(%esp)
0825fbef +0xb7:  mov    %ebx,0x1c(%esp)
0825fbf3 +0xbb:  mov    %edx,0x18(%esp)
0825fbf7 +0xbf:  mov    %eax,0x14(%esp)
0825fbfb +0xc3:  movl   $"Delay check, mode:%d, value:%d, %d, %d, %d, %d, %d, m_id:%s",0x10(%esp)
0825fc03 +0xcb:  movl   $0x9d0,0xc(%esp)
0825fc0b +0xd3:  movl   $&_ZZN22Dispatcher_SecurityLog7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825fc13 +0xdb:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825fc1b +0xe3:  movl   $0x1,(%esp)
0825fc22 +0xea:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825fc27 +0xef:  mov    $0x0,%eax
0825fc2c +0xf4:  add    $0x6c,%esp
0825fc2f +0xf7:  pop    %ebx
0825fc30 +0xf8:  pop    %esi
0825fc31 +0xf9:  pop    %edi
0825fc32 +0xfa:  pop    %ebp
0825fc33 +0xfb:  ret
```

## 反编译 C

```c
// Dispatcher_SecurityLog::process @ 0x825fb38

/* Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_SecurityLog::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CUser::get_acc_id((CUser *)param_2);
  }
  if ((*(int *)(param_3 + 0x15) != 0) && (*(int *)(param_3 + 0x19) != 0)) {
    uVar2 = NumberToString(uVar1,0);
    LogManager::logFormat
              (1,"PacketDispatcher_Impl_2.cpp",
               "virtual int Dispatcher_SecurityLog::process(CUser*, MSG_BASE&, ParamBase&)",0x9d0,
               "Delay check, mode:%d, value:%d, %d, %d, %d, %d, %d, m_id:%s",
               *(undefined4 *)(param_3 + 0xd),*(undefined4 *)(param_3 + 0x11),
               *(undefined4 *)(param_3 + 0x15),*(undefined4 *)(param_3 + 0x19),
               *(undefined4 *)(param_3 + 0x1d),*(undefined4 *)(param_3 + 0x21),
               *(int *)(param_3 + 0x1d) - *(int *)(param_3 + 0x19),uVar2);
  }
  return 0;
}
```

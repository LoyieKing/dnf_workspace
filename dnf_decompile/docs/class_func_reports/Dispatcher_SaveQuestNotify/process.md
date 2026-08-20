# process

`_ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveQuestNotify` | `0x0825edfc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825edfc  _ZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825edfc, 0x0825eec3]
0825edfc +0x00:  push   %ebp
0825edfd +0x01:  mov    %esp,%ebp
0825edff +0x03:  push   %ebx
0825ee00 +0x04:  sub    $0x34,%esp
0825ee03 +0x07:  mov    0x14(%ebp),%eax
0825ee06 +0x0a:  mov    %eax,-0x14(%ebp)
0825ee09 +0x0d:  mov    0x10(%ebp),%eax
0825ee0c +0x10:  mov    %eax,0x8(%esp)
0825ee10 +0x14:  mov    0xc(%ebp),%eax
0825ee13 +0x17:  mov    %eax,0x4(%esp)
0825ee17 +0x1b:  mov    0x8(%ebp),%eax
0825ee1a +0x1e:  mov    %eax,(%esp)
0825ee1d +0x21:  call   0825eec4 <_ZN26Dispatcher_SaveQuestNotify11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SaveQuestNotify::check_error(CUser*, MSG_BASE&)
0825ee22 +0x26:  mov    -0x14(%ebp),%edx
0825ee25 +0x29:  mov    %eax,0x4(%edx)
0825ee28 +0x2c:  mov    -0x14(%ebp),%eax
0825ee2b +0x2f:  mov    0x4(%eax),%eax
0825ee2e +0x32:  test   %eax,%eax
0825ee30 +0x34:  jle    0825ee3c <+0x40>
0825ee32 +0x36:  mov    $0x0,%eax
0825ee37 +0x3b:  jmp    0825eebe <+0xc2>
0825ee3c +0x40:  mov    -0x14(%ebp),%eax
0825ee3f +0x43:  mov    0x4(%eax),%eax
0825ee42 +0x46:  test   %eax,%eax
0825ee44 +0x48:  jns    0825ee83 <+0x87>
0825ee46 +0x4a:  mov    -0x14(%ebp),%eax
0825ee49 +0x4d:  mov    0x4(%eax),%eax
0825ee4c +0x50:  mov    %eax,0x14(%esp)
0825ee50 +0x54:  movl   $"Dispatcher Check_Error No(%d)",0x10(%esp)
0825ee58 +0x5c:  movl   $0x2cb,0xc(%esp)
0825ee60 +0x64:  movl   $&_ZZN26Dispatcher_SaveQuestNotify7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825ee68 +0x6c:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825ee70 +0x74:  movl   $0x1,(%esp)
0825ee77 +0x7b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825ee7c +0x80:  mov    $0x2cc,%eax
0825ee81 +0x85:  jmp    0825eebe <+0xc2>
0825ee83 +0x87:  mov    0x10(%ebp),%eax
0825ee86 +0x8a:  mov    %eax,-0x10(%ebp)
0825ee89 +0x8d:  movl   $0x28,-0xc(%ebp)
0825ee90 +0x94:  mov    -0x10(%ebp),%eax
0825ee93 +0x97:  lea    0xd(%eax),%ebx
0825ee96 +0x9a:  mov    0xc(%ebp),%eax
0825ee99 +0x9d:  mov    %eax,(%esp)
0825ee9c +0xa0:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
0825eea1 +0xa5:  add    $0x75f4,%eax
0825eea6 +0xaa:  mov    -0xc(%ebp),%edx
0825eea9 +0xad:  mov    %edx,0x8(%esp)
0825eead +0xb1:  mov    %ebx,0x4(%esp)
0825eeb1 +0xb5:  mov    %eax,(%esp)
0825eeb4 +0xb8:  call   0807d8a0 <_init+0x198>
0825eeb9 +0xbd:  mov    $0x0,%eax
0825eebe +0xc2:  add    $0x34,%esp
0825eec1 +0xc5:  pop    %ebx
0825eec2 +0xc6:  pop    %ebp
0825eec3 +0xc7:  ret
```

## 反编译 C

```c
// Dispatcher_SaveQuestNotify::process @ 0x825edfc

/* Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveQuestNotify::process
          (Dispatcher_SaveQuestNotify *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_SaveQuestNotify::process(CUser*, MSG_BASE&, ParamBase&)",
                 0x2cb,"Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = 0x2cc;
    }
    else {
      iVar2 = CUser::getCurCharacQuestW(param_1);
      memcpy((void *)(iVar2 + 0x75f4),param_2 + 0xd,0x28);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

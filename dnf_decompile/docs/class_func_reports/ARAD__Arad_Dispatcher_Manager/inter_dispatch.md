# inter_dispatch

`_ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci`

`ARAD::Arad_Dispatcher_Manager::inter_dispatch(int, CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Manager` | `0x0818ff6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ff6c  _ZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPci
#           ARAD::Arad_Dispatcher_Manager::inter_dispatch(int, CUser*, char*, int)
# range [0x0818ff6c, 0x0819007f]
0818ff6c +0x000:  push   %ebp
0818ff6d +0x001:  mov    %esp,%ebp
0818ff6f +0x003:  sub    $0x38,%esp
0818ff72 +0x006:  mov    0xc(%ebp),%edx
0818ff75 +0x009:  mov    0x8(%ebp),%eax
0818ff78 +0x00c:  mov    (%eax,%edx,4),%eax
0818ff7b +0x00f:  mov    %eax,-0x14(%ebp)
0818ff7e +0x012:  cmpl   $0x0,-0x14(%ebp)
0818ff82 +0x016:  jne    0818ffc1 <+0x55>
0818ff84 +0x018:  mov    0xc(%ebp),%eax
0818ff87 +0x01b:  mov    %eax,0x14(%esp)
0818ff8b +0x01f:  movl   $"Not found Inter_Dispatch_Code[%d]",0x10(%esp)
0818ff93 +0x027:  movl   $0x7d,0xc(%esp)
0818ff9b +0x02f:  movl   $&_ZZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0818ffa3 +0x037:  movl   $"localjapan/Arad_Dispatch_Manager.cpp",0x4(%esp)
0818ffab +0x03f:  movl   $0x1,(%esp)
0818ffb2 +0x046:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818ffb7 +0x04b:  mov    $0x0,%eax
0818ffbc +0x050:  jmp    0819007d <+0x111>
0818ffc1 +0x055:  mov    -0x14(%ebp),%eax
0818ffc4 +0x058:  mov    (%eax),%eax
0818ffc6 +0x05a:  add    $0xc,%eax
0818ffc9 +0x05d:  mov    (%eax),%edx
0818ffcb +0x05f:  mov    0x18(%ebp),%eax
0818ffce +0x062:  mov    %eax,0xc(%esp)
0818ffd2 +0x066:  mov    0x14(%ebp),%eax
0818ffd5 +0x069:  mov    %eax,0x8(%esp)
0818ffd9 +0x06d:  mov    0x10(%ebp),%eax
0818ffdc +0x070:  mov    %eax,0x4(%esp)
0818ffe0 +0x074:  mov    -0x14(%ebp),%eax
0818ffe3 +0x077:  mov    %eax,(%esp)
0818ffe6 +0x07a:  call   *%edx
0818ffe8 +0x07c:  mov    %eax,-0x10(%ebp)
0818ffeb +0x07f:  cmpl   $0x0,-0x10(%ebp)
0818ffef +0x083:  je     08190078 <+0x10c>
0818fff5 +0x089:  movl   $0x0,-0xc(%ebp)
0818fffc +0x090:  cmpl   $0x0,0x10(%ebp)
08190000 +0x094:  je     08190037 <+0xcb>
08190002 +0x096:  mov    0x10(%ebp),%eax
08190005 +0x099:  mov    %eax,(%esp)
08190008 +0x09c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0819000d +0x0a1:  mov    %eax,-0xc(%ebp)
08190010 +0x0a4:  mov    -0x10(%ebp),%eax
08190013 +0x0a7:  add    $0xf4240,%eax
08190018 +0x0ac:  mov    %eax,0xc(%esp)
0819001c +0x0b0:  movl   $0x1,0x8(%esp)
08190024 +0x0b8:  movl   $0x2,0x4(%esp)
0819002c +0x0c0:  mov    0x10(%ebp),%eax
0819002f +0x0c3:  mov    %eax,(%esp)
08190032 +0x0c6:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
08190037 +0x0cb:  mov    -0xc(%ebp),%eax
0819003a +0x0ce:  mov    %eax,0x18(%esp)
0819003e +0x0d2:  mov    0xc(%ebp),%eax
08190041 +0x0d5:  mov    %eax,0x14(%esp)
08190045 +0x0d9:  movl   $"Inter Dispatch Result Error Inter_Dispatch_Code[%d] user_acc_id[%d]",0x10(%esp)
0819004d +0x0e1:  movl   $0x8d,0xc(%esp)
08190055 +0x0e9:  movl   $&_ZZN4ARAD23Arad_Dispatcher_Manager14inter_dispatchEiP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0819005d +0x0f1:  movl   $"localjapan/Arad_Dispatch_Manager.cpp",0x4(%esp)
08190065 +0x0f9:  movl   $0x1,(%esp)
0819006c +0x100:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08190071 +0x105:  mov    $0x0,%eax
08190076 +0x10a:  jmp    0819007d <+0x111>
08190078 +0x10c:  mov    $0x1,%eax
0819007d +0x111:  leave
0819007e +0x112:  ret
0819007f +0x113:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Manager::inter_dispatch @ 0x818ff6c

/* ARAD::Arad_Dispatcher_Manager::inter_dispatch(int, CUser*, char*, int) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Manager::inter_dispatch
          (Arad_Dispatcher_Manager *this,int param_1,CUser *param_2,char *param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_10;
  
  piVar1 = *(int **)(this + param_1 * 4);
  if (piVar1 == (int *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatch_Manager.cpp",
               "bool ARAD::Arad_Dispatcher_Manager::inter_dispatch(ARAD::Arad_Dispatcher_Manager::INTERNAL_PACKET_CODE, CUser*, char*, int)"
               ,0x7d,"Not found Inter_Dispatch_Code[%d]",param_1);
    uVar2 = 0;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2,param_3,param_4);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      local_10 = 0;
      if (param_2 != (CUser *)0x0) {
        local_10 = CUser::get_acc_id(param_2);
        CUser::DisConnSig(param_2,2,1,iVar3 + 1000000);
      }
      LogManager::logFormat
                (1,"localjapan/Arad_Dispatch_Manager.cpp",
                 "bool ARAD::Arad_Dispatcher_Manager::inter_dispatch(ARAD::Arad_Dispatcher_Manager::INTERNAL_PACKET_CODE, CUser*, char*, int)"
                 ,0x8d,"Inter Dispatch Result Error Inter_Dispatch_Code[%d] user_acc_id[%d]",param_1
                 ,local_10);
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

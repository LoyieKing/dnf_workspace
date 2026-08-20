# process

`_ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_BingoQuiz` | `0x0825e9b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e9b8  _ZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825e9b8, 0x0825eac9]
0825e9b8 +0x000:  push   %ebp
0825e9b9 +0x001:  mov    %esp,%ebp
0825e9bb +0x003:  sub    $0x38,%esp
0825e9be +0x006:  mov    0x10(%ebp),%eax
0825e9c1 +0x009:  mov    %eax,-0x14(%ebp)
0825e9c4 +0x00c:  mov    0x14(%ebp),%eax
0825e9c7 +0x00f:  mov    %eax,-0x10(%ebp)
0825e9ca +0x012:  mov    0x10(%ebp),%eax
0825e9cd +0x015:  mov    %eax,0x8(%esp)
0825e9d1 +0x019:  mov    0xc(%ebp),%eax
0825e9d4 +0x01c:  mov    %eax,0x4(%esp)
0825e9d8 +0x020:  mov    0x8(%ebp),%eax
0825e9db +0x023:  mov    %eax,(%esp)
0825e9de +0x026:  call   0825eaca <_ZN20Dispatcher_BingoQuiz11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_BingoQuiz::check_error(CUser*, MSG_BASE&)
0825e9e3 +0x02b:  mov    -0x10(%ebp),%edx
0825e9e6 +0x02e:  mov    %eax,0x4(%edx)
0825e9e9 +0x031:  mov    -0x10(%ebp),%eax
0825e9ec +0x034:  mov    0x4(%eax),%eax
0825e9ef +0x037:  test   %eax,%eax
0825e9f1 +0x039:  jle    0825e9fd <+0x45>
0825e9f3 +0x03b:  mov    $0x0,%eax
0825e9f8 +0x040:  jmp    0825eac7 <+0x10f>
0825e9fd +0x045:  mov    -0x10(%ebp),%eax
0825ea00 +0x048:  mov    0x4(%eax),%eax
0825ea03 +0x04b:  test   %eax,%eax
0825ea05 +0x04d:  jns    0825ea63 <+0xab>
0825ea07 +0x04f:  mov    -0x10(%ebp),%eax
0825ea0a +0x052:  mov    0x4(%eax),%eax
0825ea0d +0x055:  mov    %eax,0x14(%esp)
0825ea11 +0x059:  movl   $"Dispatcher Check_Error No(%d)",0x10(%esp)
0825ea19 +0x061:  movl   $0x1f0,0xc(%esp)
0825ea21 +0x069:  movl   $&_ZZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
0825ea29 +0x071:  movl   $"PacketDispatcher_Impl_2.cpp",0x4(%esp)
0825ea31 +0x079:  movl   $0x1,(%esp)
0825ea38 +0x080:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0825ea3d +0x085:  movl   $0x0,0xc(%esp)
0825ea45 +0x08d:  movl   $0x0,0x8(%esp)
0825ea4d +0x095:  movl   $&_ZZN20Dispatcher_BingoQuiz7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825ea55 +0x09d:  movl   $0x1f1,(%esp)
0825ea5c +0x0a4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825ea61 +0x0a9:  jmp    0825eac7 <+0x10f>
0825ea63 +0x0ab:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0825ea68 +0x0b0:  movl   $0x6a,0x4(%esp)
0825ea70 +0x0b8:  mov    %eax,(%esp)
0825ea73 +0x0bb:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0825ea78 +0x0c0:  mov    %eax,-0xc(%ebp)
0825ea7b +0x0c3:  cmpl   $0x0,-0xc(%ebp)
0825ea7f +0x0c7:  je     0825eaa5 <+0xed>
0825ea81 +0x0c9:  mov    -0x14(%ebp),%eax
0825ea84 +0x0cc:  mov    0xd(%eax),%eax
0825ea87 +0x0cf:  mov    %eax,0x8(%esp)
0825ea8b +0x0d3:  mov    0xc(%ebp),%eax
0825ea8e +0x0d6:  mov    %eax,0x4(%esp)
0825ea92 +0x0da:  mov    -0xc(%ebp),%eax
0825ea95 +0x0dd:  mov    %eax,(%esp)
0825ea98 +0x0e0:  call   080ca262 <_ZN10BingoEvent16reqBingoQuizMarkER5CUseri>  ; BingoEvent::reqBingoQuizMark(CUser&, int)
0825ea9d +0x0e5:  mov    -0x10(%ebp),%edx
0825eaa0 +0x0e8:  mov    %eax,0x4(%edx)
0825eaa3 +0x0eb:  jmp    0825eaaf <+0xf7>
0825eaa5 +0x0ed:  mov    -0x10(%ebp),%eax
0825eaa8 +0x0f0:  movl   $0x13,0x4(%eax)
0825eaaf +0x0f7:  mov    0xc(%ebp),%eax
0825eab2 +0x0fa:  mov    %eax,(%esp)
0825eab5 +0x0fd:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0825eaba +0x102:  mov    (%eax),%edx
0825eabc +0x104:  mov    -0x10(%ebp),%eax
0825eabf +0x107:  mov    %edx,0x8(%eax)
0825eac2 +0x10a:  mov    $0x0,%eax
0825eac7 +0x10f:  leave
0825eac8 +0x110:  ret
0825eac9 +0x111:  nop
```

## 反编译 C

```c
// Dispatcher_BingoQuiz::process @ 0x825e9b8

/* Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BingoQuiz::process
          (Dispatcher_BingoQuiz *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  BingoEvent *this_00;
  undefined4 *puVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)",0x1f0,
                 "Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x1f1,
                       "virtual int Dispatcher_BingoQuiz::process(CUser*, MSG_BASE&, ParamBase&)",0,
                       0);
    }
    else {
      this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
      if (this_00 == (BingoEvent *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x13;
      }
      else {
        uVar1 = BingoEvent::reqBingoQuizMark(this_00,param_1,*(int *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar1;
      }
      puVar2 = (undefined4 *)CUser::getBingoData(param_1);
      *(undefined4 *)(param_3 + 8) = *puVar2;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```

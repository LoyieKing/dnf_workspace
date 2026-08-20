# loadData

`_ZN12CBoosterGage8loadDataEP5CUserPc`

`CBoosterGage::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dd284` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dd284  _ZN12CBoosterGage8loadDataEP5CUserPc
#           CBoosterGage::loadData(CUser*, char*)
# range [0x080dd284, 0x080dd321]
080dd284 +0x00:  push   %ebp
080dd285 +0x01:  mov    %esp,%ebp
080dd287 +0x03:  push   %esi
080dd288 +0x04:  push   %ebx
080dd289 +0x05:  sub    $0x20,%esp
080dd28c +0x08:  mov    0x8(%ebp),%eax
080dd28f +0x0b:  mov    (%eax),%eax
080dd291 +0x0d:  add    $0x1c,%eax
080dd294 +0x10:  mov    (%eax),%edx
080dd296 +0x12:  mov    0x8(%ebp),%eax
080dd299 +0x15:  mov    %eax,(%esp)
080dd29c +0x18:  call   *%edx
080dd29e +0x1a:  mov    0x10(%ebp),%eax
080dd2a1 +0x1d:  mov    %eax,-0xc(%ebp)
080dd2a4 +0x20:  mov    -0xc(%ebp),%eax
080dd2a7 +0x23:  mov    0x4(%eax),%edx
080dd2aa +0x26:  mov    0x8(%ebp),%eax
080dd2ad +0x29:  mov    %edx,0x8(%eax)
080dd2b0 +0x2c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
080dd2b7 +0x33:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
080dd2bc +0x38:  mov    %eax,%esi
080dd2be +0x3a:  mov    0xc(%ebp),%eax
080dd2c1 +0x3d:  mov    %eax,(%esp)
080dd2c4 +0x40:  call   080dd5a4 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xed>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xed
080dd2c9 +0x45:  mov    %eax,%ebx
080dd2cb +0x47:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080dd2d0 +0x4c:  mov    0x37c(%eax),%eax
080dd2d6 +0x52:  mov    %esi,0x8(%esp)
080dd2da +0x56:  mov    %ebx,0x4(%esp)
080dd2de +0x5a:  mov    %eax,(%esp)
080dd2e1 +0x5d:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
080dd2e6 +0x62:  test   %al,%al
080dd2e8 +0x64:  je     080dd316 <+0x92>
080dd2ea +0x66:  mov    0x8(%ebp),%eax
080dd2ed +0x69:  mov    (%eax),%eax
080dd2ef +0x6b:  add    $0xc,%eax
080dd2f2 +0x6e:  mov    (%eax),%edx
080dd2f4 +0x70:  mov    0x8(%ebp),%eax
080dd2f7 +0x73:  mov    %eax,(%esp)
080dd2fa +0x76:  call   *%edx
080dd2fc +0x78:  movl   $0x0,0x8(%esp)
080dd304 +0x80:  mov    0xc(%ebp),%eax
080dd307 +0x83:  mov    %eax,0x4(%esp)
080dd30b +0x87:  mov    0x8(%ebp),%eax
080dd30e +0x8a:  mov    %eax,(%esp)
080dd311 +0x8d:  call   080dd246 <_ZN12CBoosterGage9send_dataEP5CUseri>  ; CBoosterGage::send_data(CUser*, int)
080dd316 +0x92:  mov    $0x1,%eax
080dd31b +0x97:  add    $0x20,%esp
080dd31e +0x9a:  pop    %ebx
080dd31f +0x9b:  pop    %esi
080dd320 +0x9c:  pop    %ebp
080dd321 +0x9d:  ret
```

## 反编译 C

```c
// CBoosterGage::loadData @ 0x80dd284

/* CBoosterGage::loadData(CUser*, char*) */

undefined4 __thiscall CBoosterGage::loadData(CBoosterGage *this,CUser *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_2 + 4);
  lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar3 = CUser::GetAccountLastPlayTime(param_1);
  iVar4 = G_CEnvironment();
  cVar1 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar3,lVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0xc))(this);
    send_data((CUser *)this,(int)param_1);
  }
  return 1;
}
```

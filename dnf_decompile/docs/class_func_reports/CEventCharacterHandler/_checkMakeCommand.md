# _checkMakeCommand

`_ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi`

`CEventCharacterHandler::_checkMakeCommand(CUser*, int, int&)`

| 类 | 地址 |
|---|---|
| `CEventCharacterHandler` | `0x0848ebd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0848ebd6  _ZN22CEventCharacterHandler17_checkMakeCommandEP5CUseriRi
#           CEventCharacterHandler::_checkMakeCommand(CUser*, int, int&)
# range [0x0848ebd6, 0x0848ec71]
0848ebd6 +0x00:  push   %ebp
0848ebd7 +0x01:  mov    %esp,%ebp
0848ebd9 +0x03:  sub    $0x28,%esp
0848ebdc +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0848ebe3 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0848ebe8 +0x12:  cmp    $0x4b055d6f,%eax
0848ebed +0x17:  jle    0848ec02 <+0x2c>
0848ebef +0x19:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0848ebf6 +0x20:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0848ebfb +0x25:  cmp    $0x4b3bbf50,%eax
0848ec00 +0x2a:  jle    0848ec09 <+0x33>
0848ec02 +0x2c:  mov    $0x1,%eax
0848ec07 +0x31:  jmp    0848ec0e <+0x38>
0848ec09 +0x33:  mov    $0x0,%eax
0848ec0e +0x38:  test   %al,%al
0848ec10 +0x3a:  je     0848ec19 <+0x43>
0848ec12 +0x3c:  mov    $0x0,%eax
0848ec17 +0x41:  jmp    0848ec70 <+0x9a>
0848ec19 +0x43:  cmpl   $0x46,0x10(%ebp)
0848ec1d +0x47:  jle    0848ec26 <+0x50>
0848ec1f +0x49:  mov    $0x0,%eax
0848ec24 +0x4e:  jmp    0848ec70 <+0x9a>
0848ec26 +0x50:  movl   $0x0,-0xc(%ebp)
0848ec2d +0x57:  mov    0xc(%ebp),%eax
0848ec30 +0x5a:  mov    %eax,(%esp)
0848ec33 +0x5d:  call   082a66b8 <_GLOBAL__I__ZN4CLog5this_E+0x2adf>  ; global constructors keyed to CLog::this_+0x2adf
0848ec38 +0x62:  movsbl %al,%eax
0848ec3b +0x65:  mov    %eax,-0xc(%ebp)
0848ec3e +0x68:  cmpl   $0x6,-0xc(%ebp)
0848ec42 +0x6c:  jle    0848ec4b <+0x75>
0848ec44 +0x6e:  mov    $0x0,%eax
0848ec49 +0x73:  jmp    0848ec70 <+0x9a>
0848ec4b +0x75:  mov    0xc(%ebp),%eax
0848ec4e +0x78:  mov    %eax,(%esp)
0848ec51 +0x7b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0848ec56 +0x80:  mov    %eax,%edx
0848ec58 +0x82:  mov    %edx,%eax
0848ec5a +0x84:  shl    $0x2,%eax
0848ec5d +0x87:  add    %edx,%eax
0848ec5f +0x89:  add    %eax,%eax
0848ec61 +0x8b:  mov    %eax,%edx
0848ec63 +0x8d:  add    -0xc(%ebp),%edx
0848ec66 +0x90:  mov    0x14(%ebp),%eax
0848ec69 +0x93:  mov    %edx,(%eax)
0848ec6b +0x95:  mov    $0x1,%eax
0848ec70 +0x9a:  leave
0848ec71 +0x9b:  ret
```

## 反编译 C

```c
// CEventCharacterHandler::_checkMakeCommand @ 0x848ebd6

/* CEventCharacterHandler::_checkMakeCommand(CUser*, int, int&) */

undefined4 __thiscall
CEventCharacterHandler::_checkMakeCommand
          (CEventCharacterHandler *this,CUser *param_1,int param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar3) {
    iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar3 < 0x4b3bbf51) {
      bVar1 = false;
      goto LAB_0848ec0e;
    }
  }
  bVar1 = true;
LAB_0848ec0e:
  if (bVar1) {
    uVar4 = 0;
  }
  else if (param_2 < 0x47) {
    cVar2 = CUserCharacInfo::getCurCharacEventCharacterGrowtype((CUserCharacInfo *)param_1);
    if (cVar2 < 7) {
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      *param_3 = iVar3 * 10 + (int)cVar2;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```

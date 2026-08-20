# execute

`_ZN11game_master22CMobileRestrictCommand7executeEv`

`game_master::CMobileRestrictCommand::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CMobileRestrictCommand` | `0x084b3c60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b3c60  _ZN11game_master22CMobileRestrictCommand7executeEv
#           game_master::CMobileRestrictCommand::execute()
# range [0x084b3c60, 0x084b3d11]
084b3c60 +0x00:  push   %ebp
084b3c61 +0x01:  mov    %esp,%ebp
084b3c63 +0x03:  push   %ebx
084b3c64 +0x04:  sub    $0x34,%esp
084b3c67 +0x07:  mov    0x8(%ebp),%eax
084b3c6a +0x0a:  mov    %eax,(%esp)
084b3c6d +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b3c72 +0x12:  mov    %eax,-0xc(%ebp)
084b3c75 +0x15:  mov    0x8(%ebp),%eax
084b3c78 +0x18:  add    $0x8,%eax
084b3c7b +0x1b:  movl   $"mobile",0x4(%esp)
084b3c83 +0x23:  mov    %eax,(%esp)
084b3c86 +0x26:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3c8b +0x2b:  test   %al,%al
084b3c8d +0x2d:  je     084b3cf6 <+0x96>
084b3c8f +0x2f:  mov    -0xc(%ebp),%eax
084b3c92 +0x32:  mov    %eax,(%esp)
084b3c95 +0x35:  call   0816ee1e <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x10c>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x10c
084b3c9a +0x3a:  mov    0x8(%ebp),%edx
084b3c9d +0x3d:  mov    0xc(%edx),%edx
084b3ca0 +0x40:  mov    %dl,0x2c(%eax)
084b3ca3 +0x43:  mov    0x8(%ebp),%eax
084b3ca6 +0x46:  mov    0xc(%eax),%eax
084b3ca9 +0x49:  cmp    $0x1,%eax
084b3cac +0x4c:  jne    084b3cb5 <+0x55>
084b3cae +0x4e:  mov    $"yes",%ebx
084b3cb3 +0x53:  jmp    084b3cba <+0x5a>
084b3cb5 +0x55:  mov    $"no",%ebx
084b3cba +0x5a:  movl   $0x0,0xc(%esp)
084b3cc2 +0x62:  movl   $0x183d,0x8(%esp)
084b3cca +0x6a:  movl   $&_ZZN11game_master22CMobileRestrictCommand7executeEvE19__PRETTY_FUNCTION__,0x4(%esp)
084b3cd2 +0x72:  lea    -0x1c(%ebp),%eax
084b3cd5 +0x75:  mov    %eax,(%esp)
084b3cd8 +0x78:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084b3cdd +0x7d:  mov    %ebx,0x8(%esp)
084b3ce1 +0x81:  movl   $"[GMCommand] Set mobile restricted. mobile auth:%s",0x4(%esp)
084b3ce9 +0x89:  lea    -0x1c(%ebp),%eax
084b3cec +0x8c:  mov    %eax,(%esp)
084b3cef +0x8f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084b3cf4 +0x94:  jmp    084b3d0c <+0xac>
084b3cf6 +0x96:  mov    0x8(%ebp),%eax
084b3cf9 +0x99:  add    $0x8,%eax
084b3cfc +0x9c:  movl   $"character",0x4(%esp)
084b3d04 +0xa4:  mov    %eax,(%esp)
084b3d07 +0xa7:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
084b3d0c +0xac:  add    $0x34,%esp
084b3d0f +0xaf:  pop    %ebx
084b3d10 +0xb0:  pop    %ebp
084b3d11 +0xb1:  ret
```

## 反编译 C

```c
// game_master::CMobileRestrictCommand::execute @ 0x84b3c60

/* game_master::CMobileRestrictCommand::execute() */

void __thiscall game_master::CMobileRestrictCommand::execute(CMobileRestrictCommand *this)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  cMyTrace local_20 [16];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  bVar1 = std::operator==((string *)(this + 8),"mobile");
  if (bVar1) {
    iVar2 = CUser::getGarenaAuthData(local_10);
    *(char *)(iVar2 + 0x2c) = (char)*(undefined4 *)(this + 0xc);
    if (*(int *)(this + 0xc) == 1) {
      puVar3 = &DAT_08c80475;
    }
    else {
      puVar3 = &DAT_08c80479;
    }
    cMyTrace::cMyTrace(local_20,"virtual void game_master::CMobileRestrictCommand::execute()",0x183d
                       ,0);
    cMyTrace::operator()(local_20,"[GMCommand] Set mobile restricted. mobile auth:%s",puVar3);
  }
  else {
    std::operator==((string *)(this + 8),"character");
  }
  return;
}
```

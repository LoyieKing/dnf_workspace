# dispatch_sig

`_ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci`

`Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadDungeonClear` | `0x084c7c42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c7c42  _ZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPci
#           Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int)
# range [0x084c7c42, 0x084c7d2b]
084c7c42 +0x00:  push   %ebp
084c7c43 +0x01:  mov    %esp,%ebp
084c7c45 +0x03:  push   %ebx
084c7c46 +0x04:  sub    $0x34,%esp
084c7c49 +0x07:  cmpl   $0x0,0xc(%ebp)
084c7c4d +0x0b:  jne    084c7c59 <+0x17>
084c7c4f +0x0d:  mov    $0x200e,%eax
084c7c54 +0x12:  jmp    084c7d26 <+0xe4>
084c7c59 +0x17:  mov    0xc(%ebp),%eax
084c7c5c +0x1a:  mov    %eax,(%esp)
084c7c5f +0x1d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c7c64 +0x22:  test   %eax,%eax
084c7c66 +0x24:  sete   %al
084c7c69 +0x27:  test   %al,%al
084c7c6b +0x29:  je     084c7c77 <+0x35>
084c7c6d +0x2b:  mov    $0x2012,%eax
084c7c72 +0x30:  jmp    084c7d26 <+0xe4>
084c7c77 +0x35:  mov    0xc(%ebp),%eax
084c7c7a +0x38:  mov    %eax,(%esp)
084c7c7d +0x3b:  call   082a6796 <_GLOBAL__I__ZN4CLog5this_E+0x2bbd>  ; global constructors keyed to CLog::this_+0x2bbd
084c7c82 +0x40:  test   %al,%al
084c7c84 +0x42:  je     084c7cb9 <+0x77>
084c7c86 +0x44:  movl   $"[Inter_LoadDungeonClear::dispatch_sig] State(PROG_LOGOUT)\n",0x10(%esp)
084c7c8e +0x4c:  movl   $0x2018,0xc(%esp)
084c7c96 +0x54:  movl   $&_ZZN22Inter_LoadDungeonClear12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c7c9e +0x5c:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c7ca6 +0x64:  movl   $0x1,(%esp)
084c7cad +0x6b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c7cb2 +0x70:  mov    $0x0,%eax
084c7cb7 +0x75:  jmp    084c7d26 <+0xe4>
084c7cb9 +0x77:  mov    0x10(%ebp),%eax
084c7cbc +0x7a:  mov    %eax,-0xc(%ebp)
084c7cbf +0x7d:  mov    -0xc(%ebp),%eax
084c7cc2 +0x80:  mov    0xc(%eax),%eax
084c7cc5 +0x83:  cmp    $0x1,%eax
084c7cc8 +0x86:  jne    084c7cd1 <+0x8f>
084c7cca +0x88:  mov    $0x2020,%eax
084c7ccf +0x8d:  jmp    084c7d26 <+0xe4>
084c7cd1 +0x8f:  mov    -0xc(%ebp),%eax
084c7cd4 +0x92:  lea    0x10(%eax),%ebx
084c7cd7 +0x95:  mov    0xc(%ebp),%eax
084c7cda +0x98:  mov    %eax,(%esp)
084c7cdd +0x9b:  call   084b42cc <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x37f>  ; global constructors keyed to game_master::CMacro::Reset()+0x37f
084c7ce2 +0xa0:  mov    %ebx,0x8(%esp)
084c7ce6 +0xa4:  mov    0xc(%ebp),%edx
084c7ce9 +0xa7:  mov    %edx,0x4(%esp)
084c7ced +0xab:  mov    %eax,(%esp)
084c7cf0 +0xae:  call   084843fa <_ZN8WongWork13CDungeonClear10fromStringEP5CUserPc>  ; WongWork::CDungeonClear::fromString(CUser*, char*)
084c7cf5 +0xb3:  mov    -0xc(%ebp),%eax
084c7cf8 +0xb6:  movzbl 0x8(%eax),%eax
084c7cfc +0xba:  xor    $0x1,%eax
084c7cff +0xbd:  test   %al,%al
084c7d01 +0xbf:  je     084c7d0e <+0xcc>
084c7d03 +0xc1:  mov    0xc(%ebp),%eax
084c7d06 +0xc4:  mov    %eax,(%esp)
084c7d09 +0xc7:  call   084ebf3c <_GLOBAL__I__Z7getUserj+0x2eee>  ; global constructors keyed to getUser(unsigned int)+0x2eee
084c7d0e +0xcc:  movl   $0x5,0x4(%esp)
084c7d16 +0xd4:  mov    0xc(%ebp),%eax
084c7d19 +0xd7:  mov    %eax,(%esp)
084c7d1c +0xda:  call   081253f4 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x157>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x157
084c7d21 +0xdf:  mov    $0x0,%eax
084c7d26 +0xe4:  add    $0x34,%esp
084c7d29 +0xe7:  pop    %ebx
084c7d2a +0xe8:  pop    %ebp
084c7d2b +0xe9:  ret
```

## 反编译 C

```c
// Inter_LoadDungeonClear::dispatch_sig @ 0x84c7c42

/* Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDungeonClear::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDungeonClear *this;
  
  if (param_2 == (char *)0x0) {
    uVar2 = 0x200e;
  }
  else {
    iVar3 = CUser::get_state((CUser *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0x2012;
    }
    else {
      cVar1 = CUser::IsProgLogout((CUser *)param_2);
      if (cVar1 == '\0') {
        if (*(int *)(param_3 + 0xc) == 1) {
          uVar2 = 0x2020;
        }
        else {
          this = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW((CUserCharacInfo *)param_2);
          WongWork::CDungeonClear::fromString(this,(CUser *)param_2,(char *)(param_3 + 0x10));
          if (*(char *)(param_3 + 8) != '\x01') {
            CUserCharacInfo::disableSaveDungeonClear((CUserCharacInfo *)param_2);
          }
          CUser::EnableCharacInfo((CUser *)param_2,5);
          uVar2 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_LoadDungeonClear::dispatch_sig(CUser*, char*, int)",0x2018,
                   "[Inter_LoadDungeonClear::dispatch_sig] State(PROG_LOGOUT)\n");
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
